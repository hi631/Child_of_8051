#include "stc15.h"
#include <math.h>
#define uint  unsigned int
#define uchar char
#define bool __bit
#define FOSC 11059200L //System frequency
#define BAUD 115200 //UART1 baud-rate

//float a;
float frexp(float value, int *exponent);

volatile bool tm0f;
void dlay(unsigned char wt){
  while((wt--)!=0) {tm0f = 0; while(tm0f==0);}
}

void Flicka(uchar ct, uchar wt){
	uchar lp;
	for(lp=0; lp<ct; lp++) { P1_0 ^= 1;dlay(wt);}
}

uchar sreg[6];
long  dreg, wreg;
const uchar segfmt[16] = {0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x27,0x7f,0x6f,0x77,0x7c,0x58,0x5e,0x79,0x71};
uchar segno,segdw;
uchar segpt, keypt, keyrd, keyw0, keyw1, keydt;
bool  kboff, kbhitf, kbini;
void seg_opr(){
	//P5_5 = 1;
	// 7SEG
	segdw = sreg[segno];
	P1 = segfmt[segdw & 0x0f];
	if((segdw & 0x10)!=0) P1_7 = 1;		// dot
	if((segdw & 0x20)!=0) P1 = 0x40;	// minus
	if((segdw & 0x80)!=0) P1 = 0;		// Blank
	P3 = ~segpt;
	// KEY
	if((keyrd & 0x0f)!=0x0f) keyw0 = ~keyrd;
	P2 = ~(keypt & 0xf0); // P24 - 27
	keyrd = P2;
	//
	segno++; segpt = segpt >> 1; keypt = keypt >> 1;
	if(segno>=6) {
	  segno = 0; segpt = 0x40; keypt = 0x80;
	  if(P3_7==0) keyw0 = 1;	// on-key
	  if(keyw0==keyw1){
	    keydt = keyw0;
		if(kboff) { kbhitf = 1; kboff = 0;}
	  } else kboff = 1;
	  keyw1 = keyw0; keyw0 = 0x00;
	}
	//P5_5 = 0;
}

void timer0ISR(void) __interrupt(1)
{
	//P5_4 ^= 1;	// beep
	TF0 = 0; ET0 = 0;
	tm0f = 1;
	seg_opr(); ET0 = 1;
}

void set_TM0(){	// TIMER0
	TL0  = (uchar)(65536 - (FOSC/200)); 		//Set auto-reload vaule *1.00
	TH0  = (65536 - (FOSC/200))>>8;
	AUXR |= 0x81; TMOD = 0x00; TR0 = 1; //INT_CLKO = 0x01;
	ET0 = 1; EA = 1;	// Timer0 interrupt enable / enable all interrupts
}

void init_uart(){
  SCON = 0x5A;	//8-bit variable UART
  T2L  = (unsigned char)(65536 - (FOSC/4/BAUD));   //Set auto-reload vaule
  T2H  = 0xff;//(65536 - (FOSC/4/BAUD))>>8;
  AUXR = 0x00;
  AUXR |= 0x14; //T2 in 1T mode, strat up Timer 2
  AUXR |= 0x01; //Timer 2 as baud-rate Generator of UART1
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

void init_msg(){
  uchar ch, ct;
  for(ch=0; ch<11; ch++) {
  	for(ct=0; ct<6; ct++) sreg[5-ct] = ch+ct; 
	dlay(20);
  }
}
void sreg_clr(){uchar ct; for(ct=0; ct<6; ct++) sreg[ct] = 0x80;}	// all blank
char knum;
uchar kop;
void op_num(){
  if(kbini) {dreg = 0; kbini = 0;}
  dreg = dreg * 10;
  if(kop!=0x88) dreg = dreg + knum;
  else          dreg = dreg - knum;
}

uchar zsup;
uchar lp, seg, mpt;
long ssd, ddt;
bool mflg;
void num2seg(){
  //dreg = dreg % 1000000;
  if(dreg<0) { mflg = 1; ssd = -dreg;}
  else       { mflg = 0; ssd = dreg;}
  ddt = 100000; zsup = 0x80; mpt = 0;
  for(lp=0; lp<6; lp++){
	seg = ssd / ddt;
	if(seg!=0 || lp==5){
	  zsup = 0; if(mpt==0) mpt = 6-lp;
	}
	sreg[5-lp] = seg | zsup;
	ssd = ssd % ddt; ddt = ddt / 10;
  }
  if(mflg && mpt<6) sreg[mpt] = 0x20; // minus
}

void op_cal(){
  kbini = 1;
  if(keydt!=0x84) {kop = keydt; wreg = dreg;}
  else
    switch(kop){
	  case 0x18: dreg = wreg / dreg; break;
	  case 0x28: dreg = wreg * dreg; break;
	  case 0x48: dreg = wreg + dreg; break;
	  case 0x88: dreg = wreg + dreg; break;
	}
}

void main(){
  init_uart(); set_TM0(); kbhitf = 0;
  init_msg(); sreg_clr(); dreg = 0;

  while(1) {
    if(kbhitf){
	  kbhitf = 0;
	  switch(keydt){
	    case 0x01: dreg = 0; break;
	    case 0x11: knum = 7; op_num(); break;
	    case 0x12: knum = 8; op_num(); break;
	    case 0x14: knum = 9; op_num(); break;
	    case 0x18: op_cal(); break;	// /
	    case 0x21: knum = 4; op_num(); break;
	    case 0x22: knum = 5; op_num(); break;
	    case 0x24: knum = 6; op_num(); break;
	    case 0x28: op_cal(); break;	// *
	    case 0x41: knum = 1; op_num(); break;
	    case 0x42: knum = 2; op_num(); break;
	    case 0x44: knum = 3; op_num(); break;
	    case 0x48: op_cal(); break;	// +
	    case 0x81: knum = 0; op_num(); break;
	    case 0x82: op_cal(); break;	// .
	    case 0x84: op_cal(); break;	// =
	    case 0x88: op_cal(); break;	// -
	  }
	  num2seg();
    }
  }
/*
  uchar ch;
  while(1){
	sreg[1] = keydt >> 4;
	sreg[0] = keydt & 0x0f;
      if(RI) {
	  	ch = rx_uart();
	  	tx_uart(ch);
	  }
  }
*/
}
