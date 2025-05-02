#include "stc15.h"

#define uint  unsigned int
#define uchar char
#define getch() rx_uart()
#define putch(ch) tx_uart(ch)

void dbfprg();
void tx_uart( char ch);
char rx_uart();
void disp_sp();

//----------------------------------
// Work
//----------------------------------
uchar cbuf[31];								// addr 0x21
uint monad; uchar monsbf[14]; 				//      0x40
uint dbgad = (int)dbgprg; uchar dbgsbf[14];	//      0x50
volatile uchar cntdm;						//      0x61
uint madr;
uint mdat;
uchar memsel;
__idata uchar *mbase0; // internal RAM
__xdata uchar *mbase1; // SRAM, (parts of) Flash, SFR, RFR, XREG, Info Page...
__data  uchar *mbase2; // lower 128 bytes
__pdata uchar *mbase3; // lower 256 bytes of XDATA
__code  uchar *mbase4; // Flash
uchar retspp,regspp,wokspp;
uchar p1dt, p2dt;
uint p4dt;
char *cbp;
char err_f;

//----------------------------------
// Debug.Program
//----------------------------------
void dbgprg(){
	while(1){
		P1_0 ^= 1;
		cntdm++;
	}
//__asm
//dploop:	
//	cpl		_P1_0
//	mov		a,_cntdm
//	inc		a
//	mov		_cntdm,a
//	sjmp	dploop
//__endasm;
}

//----------------------------------
// Interrupt
//----------------------------------
void savereg(){
__asm
	mov		_wokspp,SP
	mov		SP,_regspp
	push	bits
	push	acc
	push	b
	push	dpl
	push	dph
	push	(0+7)
	push	(0+6)
	push	(0+5)
	push	(0+4)
	push	(0+3)
	push	(0+2)
	push	(0+1)
	push	(0+0)
	push	psw
	mov		SP,_wokspp
	ret
__endasm;
}

void loadreg(){
__asm
	mov		_wokspp,SP
	mov		SP,_regspp
	pop		psw
	pop		(0+0)
	pop		(0+1)
	pop		(0+2)
	pop		(0+3)
	pop		(0+4)
	pop		(0+5)
	pop		(0+6)
	pop		(0+7)
	pop		dph
	pop		dpl
	pop		b
	pop		acc
	pop		bits
	mov		SP,_wokspp
	ret
__endasm;
}

void timer2_isr(void) __interrupt(12) {
__asm								// save debug regs
	pop		psw
	push	psw
	mov 	_regspp,#_dbgsbf-1
	lcall	_savereg
	mov		psw,#0x00
	mov 	b,SP
	mov		a,SP
	subb	a,#14
	mov		SP,a
	pop		a
	mov		_dbgad+1,a
	pop		a
	mov		_dbgad,a
	mov		SP,b
	mov		_IE2,#0x00;
__endasm;

__asm								// load(pop) mon regs
	mov 	_regspp,#_monsbf+14-1
	lcall	_loadreg
	mov 	SP,_retspp
	reti
__endasm;
	putch('I'); // Dumy
}

void step_on(void) {
	//disp_sp();
  	AUXR = 0x00; // Enable Write [T2L, T2H] & [RL_TL2, RL_TH2]
    T2L = 0xFE;
    T2H = 0xFF;

    EA = 1; 			// (IE) enable all interrupts
	IE2 = 0x04;	// Timer 2 interrupt enable
	
__asm								//save(push+) mon regs
	mov 	_regspp,#_monsbf-1
	lcall	_savereg
	mov 	_retspp,SP
__endasm;

__asm								//load dbg regs
	mov		a,_dbgad
	push	a
	mov		a,_dbgad+1
	push	a
	mov 	_regspp,#_dbgsbf+14-1
	lcall	_loadreg
  	mov		_AUXR,#0x14 			//B4:T2R B2:T2x12 T2 in 1T mode, strat up Timer 2
	ret								// jmp dbgprg
__endasm;
	
}

//----------------------------------
// Serial.IO
//----------------------------------
#define FOSC 11059200L //System frequency
#define BAUD 115200 //UART1 baud-rate

void init_uart(){
  SCON = 0x5A;	//8-bit variable UART
  AUXR = 0x00;
  T2L  = (unsigned char)(65536 - (FOSC/4/BAUD));   //Set auto-reload vaule
  T2H  = (65536 - (FOSC/4/BAUD))>>8;
  AUXR = 0x15; //T2 in 1T mode, strat up Timer 2
}
void tx_uart( char ch){
	while (!TI);
	TI = 0;	SBUF = ch;
}
char rx_uart(){
  while(!RI);
  RI= 0; return SBUF;
}

void puts(char *buf){ while(*buf!=(char)0) putch(*buf++); }
void puth(){ if(p1dt<10) putch(0x30+p1dt); else putch(0x37+p1dt); }
void puth2() { p1dt = p2dt >> 4; puth(); p1dt = p2dt & 0xf; puth(); }
void puth4() { p2dt = (p4dt >> 8) & 0xff; puth2(); p2dt = p4dt & 0xff; puth2(); }

//----------------------------------
// Monitor
//----------------------------------
void init_wk(){
	*mbase0 = 0;
	*mbase1 = 0;
	*mbase2 = 0;
	*mbase3 = 0;
	//*mbase4 = 0;
	memsel = 0;
	cntdm = 0x11;
}

uchar get_mem(){
	uchar dt;
	switch(memsel){
	  case 1: dt = mbase1[madr]; break;
	  case 2: dt = mbase2[madr]; break;
	  case 3: dt = mbase3[madr]; break;
	  case 4: dt = mbase4[madr]; break;
	  default: dt = mbase0[madr]; break;
	}
	return dt;
}
void set_mem(){
	switch(memsel){
	  case 1: mbase1[madr] = mdat; break;
	  case 2: mbase2[madr] = mdat; break;
	  case 3: mbase3[madr] = mdat; break;
	  default: mbase0[madr] = mdat; break;
	}
}

void disp_sp(){
	putch('[');
__asm
	mov	_p2dt,SP
	lcall	_puth2
__endasm;
	putch(']');
}

void getstr() {
  char ch; uchar ct;
  ch = 0; ct = 0;
  while(ch!=0x0d && ch!=0x0a) { 
    ch = getch();
    if(ch>='a' && ch<'z') ch = ch - 0x20;
    //if(ch==0x7f) {
	//	if(ct!=0) { putch(0x08); putch(0x20); putch(0x08); ct--; } 
	//} else { putch(ch); cbuf[ct++] = ch; }
	putch(ch); cbuf[ct++] = ch;
  }
}

uchar ishex(char ch) {
  uchar hd;
  if(ch>='0' && ch<='9') hd = ch - 0x30;
  else if(ch>='A' && ch<='F') hd = ch - 0x37;
  else hd = 0xff;
  return hd;
}
uchar cbp_d(){ return *cbp; }
uint gets2h() {
  uint num=0; uchar hd;
  while(cbp_d()==' ') cbp++; /* spip sp*/
  if(cbp_d()==0x0d) { err_f = 1; return 0; }
  while( (hd=ishex(cbp_d())) != 0xff){ num = (num << 4) + (uint)hd; cbp++; }
  err_f = 0;
  return num;
}

void dump1l(){
	uchar nb;
      for( nb=0; nb<16; nb++)
	  	{ p2dt = get_mem(); madr++; puth2(); puts(" "); }
}
void dumpmem(){
	uchar nl;
    for(nl=0; nl<8; nl++){
      p4dt = (uint)madr; puth4(); puts(": ");
	  dump1l(); putch(0x0d);
    }
}

void main(){
	uint nadr=0;
	uint dtl, ct;
	uchar dtr, ptn, dtb, ctb;
  	char cmd;
	init_wk(); init_uart(); 
	puts("\nmon");
	for(;;){
		puts("\r>");
		getstr(); cmd = cbuf[0]; cbp = &cbuf[1];
    	switch(cmd){
		case 'T':
			dtb = gets2h();
			if(dtb==0) dtb = 1;
			if(cbuf[1]!=0x0d || cbuf[1]=='T') {
				puts("adr   bt a  b  dl dh r7 r6 r5 r4 r3 r2 r1 r0 sw\n");
			}
			if(cbuf[1]=='T') { madr = (int)&dbgad; dump1l(); }
			else
			for(ctb =0; ctb<dtb; ctb++){
				putch(0x00); step_on(); init_uart(); putch(0x00);
				madr = (int)&dbgad; dump1l();
				putch(0x0d); putch(0x00);
			}
			break;
	    case 'D' : 
			if(cbuf[1]!=0x0d) madr = gets2h();
			else              madr = nadr;
	        dumpmem(); nadr = madr;
	        break;
        case 'F':
        	madr = gets2h(); dtl = gets2h(); ptn = gets2h();
	    	for(ct=0; ct<dtl; ct++) { mdat = ptn; set_mem(); madr++;}
        	break;
        case 'M':
			if(cbuf[1]=='S'){ cbp++; memsel = gets2h();}
			else {
		        madr = gets2h();
		        while(cmd!='.'){
		          p4dt = madr; puth4(); putch(':');
		          putch(' '); p2dt = get_mem(); puth2();
		          putch(' '); 
		          getstr(); cbp = &cbuf[0];
		          mdat = gets2h(); dtr = 0; cmd = cbp_d();
		          if(cmd==0x0d && err_f!=1){
		                set_mem(); dtr = get_mem();
		          }
				  if(mdat==dtr) {
		            //if(cmd=='-') madr = madr - 1;
		            //else         madr = madr + 1;
					madr = madr + 1;
				  }
		        }
			}
	        break;
		}
	}
}
