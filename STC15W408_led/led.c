#include "stc15.h"

#define uint  unsigned int
#define uchar char
#define FOSC 11059200L //System frequency
#define BAUD 115200 //UART1 baud-rate

void dlay(unsigned char wt){
  unsigned int tt;
  while((wt--)!=0)
    for(tt=0; tt<0xfff; tt++) ;
}

void Flicka(uchar ct, uchar wt){
	uchar lp;
	for(lp=0; lp<ct; lp++) { P1_0 ^= 1;dlay(wt);}
}

volatile uchar tm2f = 0;
volatile uchar tm2c = 0;
volatile uchar tm2d = 0;
void seg_opr(){	// 436Hz?
	P1_0 ^= 1;
	tm2c += 1; if(tm2c==0) P1_1 ^= 1;
}

void timer2_isr(void) __interrupt(12) {
	//IE2 = 0x00; Flicka(4,10); tm2f = 1;
	tm2d += 1; if(tm2d==0) seg_opr();
__asm
	//cpl		_P1_0		// P1_0 ^= 1;
__endasm;

}
// wait


void set_TM2(){	// Timer 2
  	AUXR = 0x00; // Enable Write [T2L, T2H] & [RL_TL2, RL_TH2]
    T2L  = (unsigned char)(65536 - (FOSC/4/BAUD));   //Set auto-reload vaule
    T2H  = 0xff;//(65536 - (FOSC/4/BAUD))>>8;
  	AUXR = 0x14; //B4:T2R B2:T2x12 T2 in 1T mode, strat up Timer 2

    EA = 1; 			// (IE) enable all interrupts
	IE2 = 0x04;	// Timer 2 interrupt enable
}

void init_uart(){
  SCON = 0x5A;	//8-bit variable UART
  AUXR = 0x00;
  T2L  = (unsigned char)(65536 - (FOSC/4/BAUD));   //Set auto-reload vaule
  T2H  = 0xff;//(65536 - (FOSC/4/BAUD))>>8;
  AUXR = 0x14; //T2 in 1T mode, strat up Timer 2
  AUXR |= 0x01; //Timer 2 as baud-rate Generator of UART1

    EA = 1; 			// (IE) enable all interrupts
	IE2 = 0x04;	// Timer 2 interrupt enable
}

void wait_TM2(){
	tm2f = 0;
	set_TM2();
	while(tm2f==0) ;
}

void wait_TM0(){	// Timer 0
	TCON &= ~(TCON & 0x30);	// TM0 TR0=0 TF0=0 stop & clear overflow
    TMOD = 0x01; 			// TM0 Mode 1: 16-bit Timer/Counter
    TL0 = 0x00;
    TH0 = 0x00;
    TCON |= 0x10; 					// TR0: start counting
    while((TCON & 0x20) != 0x20);	// TF0: Timer/Counter 0 Overflow Flag
}

void wait_TM(uchar wt){
	while((wt--)!=0){
		//wait_TM0();
		wait_TM2();
	}
}

void tx_uart( char ch){
	while (!TI);
	TI = 0;
	SBUF = ch;
}
char rx_uart(){
  while(!RI);
  RI= 0;
  return SBUF;
}

void main()	// LED
{
  while(1) {
  	Flicka(10,20); 
	P1_0 ^= 1; dlay(1000);
  }

}

void main2()	// UART
{
  char ch;
  init_uart();

  while(1) {
    if(RI) {
	  ch = rx_uart();
	  tx_uart(ch);
	}
  }

}
