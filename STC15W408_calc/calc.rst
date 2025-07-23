                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 4.1.0 #12072 (MINGW64)
                                      4 ;--------------------------------------------------------
                                      5 	.module calc
                                      6 	.optsdcc -mmcs51 --model-small
                                      7 	
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _segfmt
                                     12 	.globl _main
                                     13 	.globl _op_cal
                                     14 	.globl _num2seg
                                     15 	.globl _op_num
                                     16 	.globl _sreg_clr
                                     17 	.globl _init_msg
                                     18 	.globl _rx_uart
                                     19 	.globl _tx_uart
                                     20 	.globl _init_uart
                                     21 	.globl _set_TM0
                                     22 	.globl _timer0ISR
                                     23 	.globl _seg_opr
                                     24 	.globl _Flicka
                                     25 	.globl _dlay
                                     26 	.globl _CCF0
                                     27 	.globl _CCF1
                                     28 	.globl _CCF2
                                     29 	.globl _CR
                                     30 	.globl _CF
                                     31 	.globl _PADC
                                     32 	.globl _PLVD
                                     33 	.globl _PPCA
                                     34 	.globl _EADC
                                     35 	.globl _ELVD
                                     36 	.globl _P5_7
                                     37 	.globl _P5_6
                                     38 	.globl _P5_5
                                     39 	.globl _P5_4
                                     40 	.globl _P5_3
                                     41 	.globl _P5_2
                                     42 	.globl _P5_1
                                     43 	.globl _P5_0
                                     44 	.globl _P4_7
                                     45 	.globl _P4_6
                                     46 	.globl _P4_5
                                     47 	.globl _P4_4
                                     48 	.globl _P4_3
                                     49 	.globl _P4_2
                                     50 	.globl _P4_1
                                     51 	.globl _P4_0
                                     52 	.globl _CY
                                     53 	.globl _AC
                                     54 	.globl _F0
                                     55 	.globl _RS1
                                     56 	.globl _RS0
                                     57 	.globl _OV
                                     58 	.globl _F1
                                     59 	.globl _P
                                     60 	.globl _PS
                                     61 	.globl _PT1
                                     62 	.globl _PX1
                                     63 	.globl _PT0
                                     64 	.globl _PX0
                                     65 	.globl _RD
                                     66 	.globl _WR
                                     67 	.globl _T1
                                     68 	.globl _T0
                                     69 	.globl _INT1
                                     70 	.globl _INT0
                                     71 	.globl _TXD
                                     72 	.globl _RXD
                                     73 	.globl _P3_7
                                     74 	.globl _P3_6
                                     75 	.globl _P3_5
                                     76 	.globl _P3_4
                                     77 	.globl _P3_3
                                     78 	.globl _P3_2
                                     79 	.globl _P3_1
                                     80 	.globl _P3_0
                                     81 	.globl _EA
                                     82 	.globl _ES
                                     83 	.globl _ET1
                                     84 	.globl _EX1
                                     85 	.globl _ET0
                                     86 	.globl _EX0
                                     87 	.globl _P2_7
                                     88 	.globl _P2_6
                                     89 	.globl _P2_5
                                     90 	.globl _P2_4
                                     91 	.globl _P2_3
                                     92 	.globl _P2_2
                                     93 	.globl _P2_1
                                     94 	.globl _P2_0
                                     95 	.globl _SM0
                                     96 	.globl _SM1
                                     97 	.globl _SM2
                                     98 	.globl _REN
                                     99 	.globl _TB8
                                    100 	.globl _RB8
                                    101 	.globl _TI
                                    102 	.globl _RI
                                    103 	.globl _P1_7
                                    104 	.globl _P1_6
                                    105 	.globl _P1_5
                                    106 	.globl _P1_4
                                    107 	.globl _P1_3
                                    108 	.globl _P1_2
                                    109 	.globl _P1_1
                                    110 	.globl _P1_0
                                    111 	.globl _TF1
                                    112 	.globl _TR1
                                    113 	.globl _TF0
                                    114 	.globl _TR0
                                    115 	.globl _IE1
                                    116 	.globl _IT1
                                    117 	.globl _IE0
                                    118 	.globl _IT0
                                    119 	.globl _P0_7
                                    120 	.globl _P0_6
                                    121 	.globl _P0_5
                                    122 	.globl _P0_4
                                    123 	.globl _P0_3
                                    124 	.globl _P0_2
                                    125 	.globl _P0_1
                                    126 	.globl _P0_0
                                    127 	.globl _PWMFDCR
                                    128 	.globl _PWMIF
                                    129 	.globl _PWMCR
                                    130 	.globl _PWMCFG
                                    131 	.globl _CMPCR2
                                    132 	.globl _CMPCR1
                                    133 	.globl _CCAP2H
                                    134 	.globl _CCAP1H
                                    135 	.globl _CCAP0H
                                    136 	.globl _PCA_PWM2
                                    137 	.globl _PCA_PWM1
                                    138 	.globl _PCA_PWM0
                                    139 	.globl _CCAP2L
                                    140 	.globl _CCAP1L
                                    141 	.globl _CCAP0L
                                    142 	.globl _CCAPM2
                                    143 	.globl _CCAPM1
                                    144 	.globl _CCAPM0
                                    145 	.globl _CH
                                    146 	.globl _CL
                                    147 	.globl _CMOD
                                    148 	.globl _CCON
                                    149 	.globl _IAP_CONTR
                                    150 	.globl _IAP_TRIG
                                    151 	.globl _IAP_CMD
                                    152 	.globl _IAP_ADDRL
                                    153 	.globl _IAP_ADDRH
                                    154 	.globl _IAP_DATA
                                    155 	.globl _SPDAT
                                    156 	.globl _SPCTL
                                    157 	.globl _SPSTAT
                                    158 	.globl _ADC_RESL
                                    159 	.globl _ADC_RES
                                    160 	.globl _ADC_CONTR
                                    161 	.globl _SADEN
                                    162 	.globl _SADDR
                                    163 	.globl _S4BUF
                                    164 	.globl _S4CON
                                    165 	.globl _S3BUF
                                    166 	.globl _S3CON
                                    167 	.globl _S2BUF
                                    168 	.globl _S2CON
                                    169 	.globl _WDT_CONTR
                                    170 	.globl _WKTCH
                                    171 	.globl _WKTCL
                                    172 	.globl _T2L
                                    173 	.globl _T2H
                                    174 	.globl _T3L
                                    175 	.globl _T3H
                                    176 	.globl _T4L
                                    177 	.globl _T4H
                                    178 	.globl _T3T4M
                                    179 	.globl _T4T3M
                                    180 	.globl _INT_CLKO
                                    181 	.globl _IP2
                                    182 	.globl _IE2
                                    183 	.globl _P_SW2
                                    184 	.globl _P1ASF
                                    185 	.globl _BUS_SPEED
                                    186 	.globl _CLK_DIV
                                    187 	.globl _P_SW1
                                    188 	.globl _AUXR1
                                    189 	.globl _AUXR
                                    190 	.globl _P7M1
                                    191 	.globl _P7M0
                                    192 	.globl _P6M1
                                    193 	.globl _P6M0
                                    194 	.globl _P5M1
                                    195 	.globl _P5M0
                                    196 	.globl _P4M1
                                    197 	.globl _P4M0
                                    198 	.globl _P3M1
                                    199 	.globl _P3M0
                                    200 	.globl _P2M1
                                    201 	.globl _P2M0
                                    202 	.globl _P1M1
                                    203 	.globl _P1M0
                                    204 	.globl _P0M1
                                    205 	.globl _P0M0
                                    206 	.globl _P5
                                    207 	.globl _P4
                                    208 	.globl _B
                                    209 	.globl _ACC
                                    210 	.globl _PSW
                                    211 	.globl _IP
                                    212 	.globl _P3
                                    213 	.globl _IE
                                    214 	.globl _P2
                                    215 	.globl _SBUF
                                    216 	.globl _SCON
                                    217 	.globl _P1
                                    218 	.globl _TH1
                                    219 	.globl _TH0
                                    220 	.globl _TL1
                                    221 	.globl _TL0
                                    222 	.globl _TMOD
                                    223 	.globl _TCON
                                    224 	.globl _PCON
                                    225 	.globl _DPH
                                    226 	.globl _DPL
                                    227 	.globl _SP
                                    228 	.globl _P0
                                    229 	.globl _mflg
                                    230 	.globl _kbini
                                    231 	.globl _kbhitf
                                    232 	.globl _kboff
                                    233 	.globl _tm0f
                                    234 	.globl _ddt
                                    235 	.globl _ssd
                                    236 	.globl _mpt
                                    237 	.globl _seg
                                    238 	.globl _lp
                                    239 	.globl _zsup
                                    240 	.globl _kop
                                    241 	.globl _knum
                                    242 	.globl _keydt
                                    243 	.globl _keyw1
                                    244 	.globl _keyw0
                                    245 	.globl _keyrd
                                    246 	.globl _keypt
                                    247 	.globl _segpt
                                    248 	.globl _segdw
                                    249 	.globl _segno
                                    250 	.globl _wreg
                                    251 	.globl _dreg
                                    252 	.globl _sreg
                                    253 	.globl _Flicka_PARM_2
                                    254 ;--------------------------------------------------------
                                    255 ; special function registers
                                    256 ;--------------------------------------------------------
                                    257 	.area RSEG    (ABS,DATA)
      000000                        258 	.org 0x0000
                           000080   259 _P0	=	0x0080
                           000081   260 _SP	=	0x0081
                           000082   261 _DPL	=	0x0082
                           000083   262 _DPH	=	0x0083
                           000087   263 _PCON	=	0x0087
                           000088   264 _TCON	=	0x0088
                           000089   265 _TMOD	=	0x0089
                           00008A   266 _TL0	=	0x008a
                           00008B   267 _TL1	=	0x008b
                           00008C   268 _TH0	=	0x008c
                           00008D   269 _TH1	=	0x008d
                           000090   270 _P1	=	0x0090
                           000098   271 _SCON	=	0x0098
                           000099   272 _SBUF	=	0x0099
                           0000A0   273 _P2	=	0x00a0
                           0000A8   274 _IE	=	0x00a8
                           0000B0   275 _P3	=	0x00b0
                           0000B8   276 _IP	=	0x00b8
                           0000D0   277 _PSW	=	0x00d0
                           0000E0   278 _ACC	=	0x00e0
                           0000F0   279 _B	=	0x00f0
                           0000C0   280 _P4	=	0x00c0
                           0000C8   281 _P5	=	0x00c8
                           000094   282 _P0M0	=	0x0094
                           000093   283 _P0M1	=	0x0093
                           000092   284 _P1M0	=	0x0092
                           000091   285 _P1M1	=	0x0091
                           000096   286 _P2M0	=	0x0096
                           000095   287 _P2M1	=	0x0095
                           0000B2   288 _P3M0	=	0x00b2
                           0000B1   289 _P3M1	=	0x00b1
                           0000B4   290 _P4M0	=	0x00b4
                           0000B3   291 _P4M1	=	0x00b3
                           0000CA   292 _P5M0	=	0x00ca
                           0000C9   293 _P5M1	=	0x00c9
                           0000CC   294 _P6M0	=	0x00cc
                           0000CB   295 _P6M1	=	0x00cb
                           0000E2   296 _P7M0	=	0x00e2
                           0000E1   297 _P7M1	=	0x00e1
                           00008E   298 _AUXR	=	0x008e
                           0000A2   299 _AUXR1	=	0x00a2
                           0000A2   300 _P_SW1	=	0x00a2
                           000097   301 _CLK_DIV	=	0x0097
                           0000A1   302 _BUS_SPEED	=	0x00a1
                           00009D   303 _P1ASF	=	0x009d
                           0000BA   304 _P_SW2	=	0x00ba
                           0000AF   305 _IE2	=	0x00af
                           0000B5   306 _IP2	=	0x00b5
                           00008F   307 _INT_CLKO	=	0x008f
                           0000D1   308 _T4T3M	=	0x00d1
                           0000D1   309 _T3T4M	=	0x00d1
                           0000D2   310 _T4H	=	0x00d2
                           0000D3   311 _T4L	=	0x00d3
                           0000D4   312 _T3H	=	0x00d4
                           0000D5   313 _T3L	=	0x00d5
                           0000D6   314 _T2H	=	0x00d6
                           0000D7   315 _T2L	=	0x00d7
                           0000AA   316 _WKTCL	=	0x00aa
                           0000AB   317 _WKTCH	=	0x00ab
                           0000C1   318 _WDT_CONTR	=	0x00c1
                           00009A   319 _S2CON	=	0x009a
                           00009B   320 _S2BUF	=	0x009b
                           0000AC   321 _S3CON	=	0x00ac
                           0000AD   322 _S3BUF	=	0x00ad
                           000084   323 _S4CON	=	0x0084
                           000085   324 _S4BUF	=	0x0085
                           0000A9   325 _SADDR	=	0x00a9
                           0000B9   326 _SADEN	=	0x00b9
                           0000BC   327 _ADC_CONTR	=	0x00bc
                           0000BD   328 _ADC_RES	=	0x00bd
                           0000BE   329 _ADC_RESL	=	0x00be
                           0000CD   330 _SPSTAT	=	0x00cd
                           0000CE   331 _SPCTL	=	0x00ce
                           0000CF   332 _SPDAT	=	0x00cf
                           0000C2   333 _IAP_DATA	=	0x00c2
                           0000C3   334 _IAP_ADDRH	=	0x00c3
                           0000C4   335 _IAP_ADDRL	=	0x00c4
                           0000C5   336 _IAP_CMD	=	0x00c5
                           0000C6   337 _IAP_TRIG	=	0x00c6
                           0000C7   338 _IAP_CONTR	=	0x00c7
                           0000D8   339 _CCON	=	0x00d8
                           0000D9   340 _CMOD	=	0x00d9
                           0000E9   341 _CL	=	0x00e9
                           0000F9   342 _CH	=	0x00f9
                           0000DA   343 _CCAPM0	=	0x00da
                           0000DB   344 _CCAPM1	=	0x00db
                           0000DC   345 _CCAPM2	=	0x00dc
                           0000EA   346 _CCAP0L	=	0x00ea
                           0000EB   347 _CCAP1L	=	0x00eb
                           0000EC   348 _CCAP2L	=	0x00ec
                           0000F2   349 _PCA_PWM0	=	0x00f2
                           0000F3   350 _PCA_PWM1	=	0x00f3
                           0000F4   351 _PCA_PWM2	=	0x00f4
                           0000FA   352 _CCAP0H	=	0x00fa
                           0000FB   353 _CCAP1H	=	0x00fb
                           0000FC   354 _CCAP2H	=	0x00fc
                           0000E6   355 _CMPCR1	=	0x00e6
                           0000E7   356 _CMPCR2	=	0x00e7
                           0000F1   357 _PWMCFG	=	0x00f1
                           0000F5   358 _PWMCR	=	0x00f5
                           0000F6   359 _PWMIF	=	0x00f6
                           0000F7   360 _PWMFDCR	=	0x00f7
                                    361 ;--------------------------------------------------------
                                    362 ; special function bits
                                    363 ;--------------------------------------------------------
                                    364 	.area RSEG    (ABS,DATA)
      000000                        365 	.org 0x0000
                           000080   366 _P0_0	=	0x0080
                           000081   367 _P0_1	=	0x0081
                           000082   368 _P0_2	=	0x0082
                           000083   369 _P0_3	=	0x0083
                           000084   370 _P0_4	=	0x0084
                           000085   371 _P0_5	=	0x0085
                           000086   372 _P0_6	=	0x0086
                           000087   373 _P0_7	=	0x0087
                           000088   374 _IT0	=	0x0088
                           000089   375 _IE0	=	0x0089
                           00008A   376 _IT1	=	0x008a
                           00008B   377 _IE1	=	0x008b
                           00008C   378 _TR0	=	0x008c
                           00008D   379 _TF0	=	0x008d
                           00008E   380 _TR1	=	0x008e
                           00008F   381 _TF1	=	0x008f
                           000090   382 _P1_0	=	0x0090
                           000091   383 _P1_1	=	0x0091
                           000092   384 _P1_2	=	0x0092
                           000093   385 _P1_3	=	0x0093
                           000094   386 _P1_4	=	0x0094
                           000095   387 _P1_5	=	0x0095
                           000096   388 _P1_6	=	0x0096
                           000097   389 _P1_7	=	0x0097
                           000098   390 _RI	=	0x0098
                           000099   391 _TI	=	0x0099
                           00009A   392 _RB8	=	0x009a
                           00009B   393 _TB8	=	0x009b
                           00009C   394 _REN	=	0x009c
                           00009D   395 _SM2	=	0x009d
                           00009E   396 _SM1	=	0x009e
                           00009F   397 _SM0	=	0x009f
                           0000A0   398 _P2_0	=	0x00a0
                           0000A1   399 _P2_1	=	0x00a1
                           0000A2   400 _P2_2	=	0x00a2
                           0000A3   401 _P2_3	=	0x00a3
                           0000A4   402 _P2_4	=	0x00a4
                           0000A5   403 _P2_5	=	0x00a5
                           0000A6   404 _P2_6	=	0x00a6
                           0000A7   405 _P2_7	=	0x00a7
                           0000A8   406 _EX0	=	0x00a8
                           0000A9   407 _ET0	=	0x00a9
                           0000AA   408 _EX1	=	0x00aa
                           0000AB   409 _ET1	=	0x00ab
                           0000AC   410 _ES	=	0x00ac
                           0000AF   411 _EA	=	0x00af
                           0000B0   412 _P3_0	=	0x00b0
                           0000B1   413 _P3_1	=	0x00b1
                           0000B2   414 _P3_2	=	0x00b2
                           0000B3   415 _P3_3	=	0x00b3
                           0000B4   416 _P3_4	=	0x00b4
                           0000B5   417 _P3_5	=	0x00b5
                           0000B6   418 _P3_6	=	0x00b6
                           0000B7   419 _P3_7	=	0x00b7
                           0000B0   420 _RXD	=	0x00b0
                           0000B1   421 _TXD	=	0x00b1
                           0000B2   422 _INT0	=	0x00b2
                           0000B3   423 _INT1	=	0x00b3
                           0000B4   424 _T0	=	0x00b4
                           0000B5   425 _T1	=	0x00b5
                           0000B6   426 _WR	=	0x00b6
                           0000B7   427 _RD	=	0x00b7
                           0000B8   428 _PX0	=	0x00b8
                           0000B9   429 _PT0	=	0x00b9
                           0000BA   430 _PX1	=	0x00ba
                           0000BB   431 _PT1	=	0x00bb
                           0000BC   432 _PS	=	0x00bc
                           0000D0   433 _P	=	0x00d0
                           0000D1   434 _F1	=	0x00d1
                           0000D2   435 _OV	=	0x00d2
                           0000D3   436 _RS0	=	0x00d3
                           0000D4   437 _RS1	=	0x00d4
                           0000D5   438 _F0	=	0x00d5
                           0000D6   439 _AC	=	0x00d6
                           0000D7   440 _CY	=	0x00d7
                           0000C0   441 _P4_0	=	0x00c0
                           0000C1   442 _P4_1	=	0x00c1
                           0000C2   443 _P4_2	=	0x00c2
                           0000C3   444 _P4_3	=	0x00c3
                           0000C4   445 _P4_4	=	0x00c4
                           0000C5   446 _P4_5	=	0x00c5
                           0000C6   447 _P4_6	=	0x00c6
                           0000C7   448 _P4_7	=	0x00c7
                           0000C8   449 _P5_0	=	0x00c8
                           0000C9   450 _P5_1	=	0x00c9
                           0000CA   451 _P5_2	=	0x00ca
                           0000CB   452 _P5_3	=	0x00cb
                           0000CC   453 _P5_4	=	0x00cc
                           0000CD   454 _P5_5	=	0x00cd
                           0000CE   455 _P5_6	=	0x00ce
                           0000CF   456 _P5_7	=	0x00cf
                           0000AE   457 _ELVD	=	0x00ae
                           0000AD   458 _EADC	=	0x00ad
                           0000BF   459 _PPCA	=	0x00bf
                           0000BE   460 _PLVD	=	0x00be
                           0000BD   461 _PADC	=	0x00bd
                           0000DF   462 _CF	=	0x00df
                           0000DE   463 _CR	=	0x00de
                           0000DA   464 _CCF2	=	0x00da
                           0000D9   465 _CCF1	=	0x00d9
                           0000D8   466 _CCF0	=	0x00d8
                                    467 ;--------------------------------------------------------
                                    468 ; overlayable register banks
                                    469 ;--------------------------------------------------------
                                    470 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        471 	.ds 8
                                    472 ;--------------------------------------------------------
                                    473 ; overlayable bit register bank
                                    474 ;--------------------------------------------------------
                                    475 	.area BIT_BANK	(REL,OVR,DATA)
      000021                        476 bits:
      000021                        477 	.ds 1
                           008000   478 	b0 = bits[0]
                           008100   479 	b1 = bits[1]
                           008200   480 	b2 = bits[2]
                           008300   481 	b3 = bits[3]
                           008400   482 	b4 = bits[4]
                           008500   483 	b5 = bits[5]
                           008600   484 	b6 = bits[6]
                           008700   485 	b7 = bits[7]
                                    486 ;--------------------------------------------------------
                                    487 ; internal ram data
                                    488 ;--------------------------------------------------------
                                    489 	.area DSEG    (DATA)
      000022                        490 _Flicka_PARM_2:
      000022                        491 	.ds 1
      000023                        492 _sreg::
      000023                        493 	.ds 6
      000029                        494 _dreg::
      000029                        495 	.ds 4
      00002D                        496 _wreg::
      00002D                        497 	.ds 4
      000031                        498 _segno::
      000031                        499 	.ds 1
      000032                        500 _segdw::
      000032                        501 	.ds 1
      000033                        502 _segpt::
      000033                        503 	.ds 1
      000034                        504 _keypt::
      000034                        505 	.ds 1
      000035                        506 _keyrd::
      000035                        507 	.ds 1
      000036                        508 _keyw0::
      000036                        509 	.ds 1
      000037                        510 _keyw1::
      000037                        511 	.ds 1
      000038                        512 _keydt::
      000038                        513 	.ds 1
      000039                        514 _knum::
      000039                        515 	.ds 1
      00003A                        516 _kop::
      00003A                        517 	.ds 1
      00003B                        518 _zsup::
      00003B                        519 	.ds 1
      00003C                        520 _lp::
      00003C                        521 	.ds 1
      00003D                        522 _seg::
      00003D                        523 	.ds 1
      00003E                        524 _mpt::
      00003E                        525 	.ds 1
      00003F                        526 _ssd::
      00003F                        527 	.ds 4
      000043                        528 _ddt::
      000043                        529 	.ds 4
                                    530 ;--------------------------------------------------------
                                    531 ; overlayable items in internal ram 
                                    532 ;--------------------------------------------------------
                                    533 	.area	OSEG    (OVR,DATA)
                                    534 	.area	OSEG    (OVR,DATA)
                                    535 	.area	OSEG    (OVR,DATA)
                                    536 ;--------------------------------------------------------
                                    537 ; Stack segment in internal ram 
                                    538 ;--------------------------------------------------------
                                    539 	.area	SSEG
      000047                        540 __start__stack:
      000047                        541 	.ds	1
                                    542 
                                    543 ;--------------------------------------------------------
                                    544 ; indirectly addressable internal ram data
                                    545 ;--------------------------------------------------------
                                    546 	.area ISEG    (DATA)
                                    547 ;--------------------------------------------------------
                                    548 ; absolute internal ram data
                                    549 ;--------------------------------------------------------
                                    550 	.area IABS    (ABS,DATA)
                                    551 	.area IABS    (ABS,DATA)
                                    552 ;--------------------------------------------------------
                                    553 ; bit data
                                    554 ;--------------------------------------------------------
                                    555 	.area BSEG    (BIT)
      000000                        556 _tm0f::
      000000                        557 	.ds 1
      000001                        558 _kboff::
      000001                        559 	.ds 1
      000002                        560 _kbhitf::
      000002                        561 	.ds 1
      000003                        562 _kbini::
      000003                        563 	.ds 1
      000004                        564 _mflg::
      000004                        565 	.ds 1
                                    566 ;--------------------------------------------------------
                                    567 ; paged external ram data
                                    568 ;--------------------------------------------------------
                                    569 	.area PSEG    (PAG,XDATA)
                                    570 ;--------------------------------------------------------
                                    571 ; external ram data
                                    572 ;--------------------------------------------------------
                                    573 	.area XSEG    (XDATA)
                                    574 ;--------------------------------------------------------
                                    575 ; absolute external ram data
                                    576 ;--------------------------------------------------------
                                    577 	.area XABS    (ABS,XDATA)
                                    578 ;--------------------------------------------------------
                                    579 ; external initialized ram data
                                    580 ;--------------------------------------------------------
                                    581 	.area XISEG   (XDATA)
                                    582 	.area HOME    (CODE)
                                    583 	.area GSINIT0 (CODE)
                                    584 	.area GSINIT1 (CODE)
                                    585 	.area GSINIT2 (CODE)
                                    586 	.area GSINIT3 (CODE)
                                    587 	.area GSINIT4 (CODE)
                                    588 	.area GSINIT5 (CODE)
                                    589 	.area GSINIT  (CODE)
                                    590 	.area GSFINAL (CODE)
                                    591 	.area CSEG    (CODE)
                                    592 ;--------------------------------------------------------
                                    593 ; interrupt vector 
                                    594 ;--------------------------------------------------------
                                    595 	.area HOME    (CODE)
      000000                        596 __interrupt_vect:
      000000 02 00 11         [24]  597 	ljmp	__sdcc_gsinit_startup
      000003 32               [24]  598 	reti
      000004                        599 	.ds	7
      00000B 02 01 2D         [24]  600 	ljmp	_timer0ISR
                                    601 ;--------------------------------------------------------
                                    602 ; global & static initialisations
                                    603 ;--------------------------------------------------------
                                    604 	.area HOME    (CODE)
                                    605 	.area GSINIT  (CODE)
                                    606 	.area GSFINAL (CODE)
                                    607 	.area GSINIT  (CODE)
                                    608 	.globl __sdcc_gsinit_startup
                                    609 	.globl __sdcc_program_startup
                                    610 	.globl __start__stack
                                    611 	.globl __mcs51_genXINIT
                                    612 	.globl __mcs51_genXRAMCLEAR
                                    613 	.globl __mcs51_genRAMCLEAR
                                    614 	.area GSFINAL (CODE)
      00006A 02 00 0E         [24]  615 	ljmp	__sdcc_program_startup
                                    616 ;--------------------------------------------------------
                                    617 ; Home
                                    618 ;--------------------------------------------------------
                                    619 	.area HOME    (CODE)
                                    620 	.area HOME    (CODE)
      00000E                        621 __sdcc_program_startup:
      00000E 02 03 F1         [24]  622 	ljmp	_main
                                    623 ;	return from main will return to caller
                                    624 ;--------------------------------------------------------
                                    625 ; code
                                    626 ;--------------------------------------------------------
                                    627 	.area CSEG    (CODE)
                                    628 ;------------------------------------------------------------
                                    629 ;Allocation info for local variables in function 'dlay'
                                    630 ;------------------------------------------------------------
                                    631 ;wt                        Allocated to registers 
                                    632 ;------------------------------------------------------------
                                    633 ;	calc.c:13: void dlay(unsigned char wt){
                                    634 ;	-----------------------------------------
                                    635 ;	 function dlay
                                    636 ;	-----------------------------------------
      00006D                        637 _dlay:
                           000007   638 	ar7 = 0x07
                           000006   639 	ar6 = 0x06
                           000005   640 	ar5 = 0x05
                           000004   641 	ar4 = 0x04
                           000003   642 	ar3 = 0x03
                           000002   643 	ar2 = 0x02
                           000001   644 	ar1 = 0x01
                           000000   645 	ar0 = 0x00
      00006D AF 82            [24]  646 	mov	r7,dpl
                                    647 ;	calc.c:14: while((wt--)!=0) {tm0f = 0; while(tm0f==0);}
      00006F                        648 00104$:
      00006F 8F 06            [24]  649 	mov	ar6,r7
      000071 1F               [12]  650 	dec	r7
      000072 EE               [12]  651 	mov	a,r6
      000073 60 07            [24]  652 	jz	00107$
                                    653 ;	assignBit
      000075 C2 00            [12]  654 	clr	_tm0f
      000077                        655 00101$:
      000077 20 00 F5         [24]  656 	jb	_tm0f,00104$
      00007A 80 FB            [24]  657 	sjmp	00101$
      00007C                        658 00107$:
                                    659 ;	calc.c:15: }
      00007C 22               [24]  660 	ret
                                    661 ;------------------------------------------------------------
                                    662 ;Allocation info for local variables in function 'Flicka'
                                    663 ;------------------------------------------------------------
                                    664 ;wt                        Allocated with name '_Flicka_PARM_2'
                                    665 ;ct                        Allocated to registers r7 
                                    666 ;lp                        Allocated to registers r6 
                                    667 ;------------------------------------------------------------
                                    668 ;	calc.c:17: void Flicka(uchar ct, uchar wt){
                                    669 ;	-----------------------------------------
                                    670 ;	 function Flicka
                                    671 ;	-----------------------------------------
      00007D                        672 _Flicka:
      00007D AF 82            [24]  673 	mov	r7,dpl
                                    674 ;	calc.c:19: for(lp=0; lp<ct; lp++) { P1_0 ^= 1;dlay(wt);}
      00007F 7E 00            [12]  675 	mov	r6,#0x00
      000081                        676 00103$:
      000081 C3               [12]  677 	clr	c
      000082 EE               [12]  678 	mov	a,r6
      000083 9F               [12]  679 	subb	a,r7
      000084 50 13            [24]  680 	jnc	00105$
      000086 B2 90            [12]  681 	cpl	_P1_0
      000088 85 22 82         [24]  682 	mov	dpl,_Flicka_PARM_2
      00008B C0 07            [24]  683 	push	ar7
      00008D C0 06            [24]  684 	push	ar6
      00008F 12 00 6D         [24]  685 	lcall	_dlay
      000092 D0 06            [24]  686 	pop	ar6
      000094 D0 07            [24]  687 	pop	ar7
      000096 0E               [12]  688 	inc	r6
      000097 80 E8            [24]  689 	sjmp	00103$
      000099                        690 00105$:
                                    691 ;	calc.c:20: }
      000099 22               [24]  692 	ret
                                    693 ;------------------------------------------------------------
                                    694 ;Allocation info for local variables in function 'seg_opr'
                                    695 ;------------------------------------------------------------
                                    696 ;	calc.c:28: void seg_opr(){
                                    697 ;	-----------------------------------------
                                    698 ;	 function seg_opr
                                    699 ;	-----------------------------------------
      00009A                        700 _seg_opr:
                                    701 ;	calc.c:31: segdw = sreg[segno];
      00009A E5 31            [12]  702 	mov	a,_segno
      00009C 24 23            [12]  703 	add	a,#_sreg
      00009E F9               [12]  704 	mov	r1,a
      00009F 87 32            [24]  705 	mov	_segdw,@r1
                                    706 ;	calc.c:32: P1 = segfmt[segdw & 0x0f];
      0000A1 AE 32            [24]  707 	mov	r6,_segdw
      0000A3 53 06 0F         [24]  708 	anl	ar6,#0x0f
      0000A6 7F 00            [12]  709 	mov	r7,#0x00
      0000A8 EE               [12]  710 	mov	a,r6
      0000A9 24 10            [12]  711 	add	a,#_segfmt
      0000AB F5 82            [12]  712 	mov	dpl,a
      0000AD EF               [12]  713 	mov	a,r7
      0000AE 34 07            [12]  714 	addc	a,#(_segfmt >> 8)
      0000B0 F5 83            [12]  715 	mov	dph,a
      0000B2 E4               [12]  716 	clr	a
      0000B3 93               [24]  717 	movc	a,@a+dptr
      0000B4 F5 90            [12]  718 	mov	_P1,a
                                    719 ;	calc.c:33: if((segdw & 0x10)!=0) P1_7 = 1;		// dot
      0000B6 E5 32            [12]  720 	mov	a,_segdw
      0000B8 30 E4 02         [24]  721 	jnb	acc.4,00102$
                                    722 ;	assignBit
      0000BB D2 97            [12]  723 	setb	_P1_7
      0000BD                        724 00102$:
                                    725 ;	calc.c:34: if((segdw & 0x20)!=0) P1 = 0x40;	// minus
      0000BD E5 32            [12]  726 	mov	a,_segdw
      0000BF 30 E5 03         [24]  727 	jnb	acc.5,00104$
      0000C2 75 90 40         [24]  728 	mov	_P1,#0x40
      0000C5                        729 00104$:
                                    730 ;	calc.c:35: if((segdw & 0x80)!=0) P1 = 0;		// Blank
      0000C5 E5 32            [12]  731 	mov	a,_segdw
      0000C7 30 E7 03         [24]  732 	jnb	acc.7,00106$
      0000CA 75 90 00         [24]  733 	mov	_P1,#0x00
      0000CD                        734 00106$:
                                    735 ;	calc.c:36: P3 = ~segpt;
      0000CD E5 33            [12]  736 	mov	a,_segpt
      0000CF F4               [12]  737 	cpl	a
      0000D0 F5 B0            [12]  738 	mov	_P3,a
                                    739 ;	calc.c:38: if((keyrd & 0x0f)!=0x0f) keyw0 = ~keyrd;
      0000D2 AE 35            [24]  740 	mov	r6,_keyrd
      0000D4 53 06 0F         [24]  741 	anl	ar6,#0x0f
      0000D7 7F 00            [12]  742 	mov	r7,#0x00
      0000D9 BE 0F 05         [24]  743 	cjne	r6,#0x0f,00155$
      0000DC BF 00 02         [24]  744 	cjne	r7,#0x00,00155$
      0000DF 80 05            [24]  745 	sjmp	00108$
      0000E1                        746 00155$:
      0000E1 E5 35            [12]  747 	mov	a,_keyrd
      0000E3 F4               [12]  748 	cpl	a
      0000E4 F5 36            [12]  749 	mov	_keyw0,a
      0000E6                        750 00108$:
                                    751 ;	calc.c:39: P2 = ~(keypt & 0xf0); // P24 - 27
      0000E6 E5 34            [12]  752 	mov	a,_keypt
      0000E8 54 F0            [12]  753 	anl	a,#0xf0
      0000EA F4               [12]  754 	cpl	a
      0000EB F5 A0            [12]  755 	mov	_P2,a
                                    756 ;	calc.c:40: keyrd = P2;
      0000ED 85 A0 35         [24]  757 	mov	_keyrd,_P2
                                    758 ;	calc.c:42: segno++; segpt = segpt >> 1; keypt = keypt >> 1;
      0000F0 05 31            [12]  759 	inc	_segno
      0000F2 E5 33            [12]  760 	mov	a,_segpt
      0000F4 C3               [12]  761 	clr	c
      0000F5 13               [12]  762 	rrc	a
      0000F6 F5 33            [12]  763 	mov	_segpt,a
      0000F8 E5 34            [12]  764 	mov	a,_keypt
      0000FA C3               [12]  765 	clr	c
      0000FB 13               [12]  766 	rrc	a
      0000FC F5 34            [12]  767 	mov	_keypt,a
                                    768 ;	calc.c:43: if(segno>=6) {
      0000FE 74 FA            [12]  769 	mov	a,#0x100 - 0x06
      000100 25 31            [12]  770 	add	a,_segno
      000102 50 28            [24]  771 	jnc	00118$
                                    772 ;	calc.c:44: segno = 0; segpt = 0x40; keypt = 0x80;
      000104 75 31 00         [24]  773 	mov	_segno,#0x00
      000107 75 33 40         [24]  774 	mov	_segpt,#0x40
      00010A 75 34 80         [24]  775 	mov	_keypt,#0x80
                                    776 ;	calc.c:45: if(P3_7==0) keyw0 = 1;	// on-key
      00010D 20 B7 03         [24]  777 	jb	_P3_7,00110$
      000110 75 36 01         [24]  778 	mov	_keyw0,#0x01
      000113                        779 00110$:
                                    780 ;	calc.c:46: if(keyw0==keyw1){
      000113 E5 37            [12]  781 	mov	a,_keyw1
      000115 B5 36 0C         [24]  782 	cjne	a,_keyw0,00114$
                                    783 ;	calc.c:47: keydt = keyw0;
      000118 85 36 38         [24]  784 	mov	_keydt,_keyw0
                                    785 ;	calc.c:48: if(kboff) { kbhitf = 1; kboff = 0;}
      00011B 30 01 08         [24]  786 	jnb	_kboff,00115$
                                    787 ;	assignBit
      00011E D2 02            [12]  788 	setb	_kbhitf
                                    789 ;	assignBit
      000120 C2 01            [12]  790 	clr	_kboff
      000122 80 02            [24]  791 	sjmp	00115$
      000124                        792 00114$:
                                    793 ;	calc.c:49: } else kboff = 1;
                                    794 ;	assignBit
      000124 D2 01            [12]  795 	setb	_kboff
      000126                        796 00115$:
                                    797 ;	calc.c:50: keyw1 = keyw0; keyw0 = 0x00;
      000126 85 36 37         [24]  798 	mov	_keyw1,_keyw0
      000129 75 36 00         [24]  799 	mov	_keyw0,#0x00
      00012C                        800 00118$:
                                    801 ;	calc.c:53: }
      00012C 22               [24]  802 	ret
                                    803 ;------------------------------------------------------------
                                    804 ;Allocation info for local variables in function 'timer0ISR'
                                    805 ;------------------------------------------------------------
                                    806 ;	calc.c:55: void timer0ISR(void) __interrupt(1)
                                    807 ;	-----------------------------------------
                                    808 ;	 function timer0ISR
                                    809 ;	-----------------------------------------
      00012D                        810 _timer0ISR:
      00012D C0 21            [24]  811 	push	bits
      00012F C0 E0            [24]  812 	push	acc
      000131 C0 F0            [24]  813 	push	b
      000133 C0 82            [24]  814 	push	dpl
      000135 C0 83            [24]  815 	push	dph
      000137 C0 07            [24]  816 	push	(0+7)
      000139 C0 06            [24]  817 	push	(0+6)
      00013B C0 05            [24]  818 	push	(0+5)
      00013D C0 04            [24]  819 	push	(0+4)
      00013F C0 03            [24]  820 	push	(0+3)
      000141 C0 02            [24]  821 	push	(0+2)
      000143 C0 01            [24]  822 	push	(0+1)
      000145 C0 00            [24]  823 	push	(0+0)
      000147 C0 D0            [24]  824 	push	psw
      000149 75 D0 00         [24]  825 	mov	psw,#0x00
                                    826 ;	calc.c:58: TF0 = 0; ET0 = 0;
                                    827 ;	assignBit
      00014C C2 8D            [12]  828 	clr	_TF0
                                    829 ;	assignBit
      00014E C2 A9            [12]  830 	clr	_ET0
                                    831 ;	calc.c:59: tm0f = 1;
                                    832 ;	assignBit
      000150 D2 00            [12]  833 	setb	_tm0f
                                    834 ;	calc.c:60: seg_opr(); ET0 = 1;
      000152 12 00 9A         [24]  835 	lcall	_seg_opr
                                    836 ;	assignBit
      000155 D2 A9            [12]  837 	setb	_ET0
                                    838 ;	calc.c:61: }
      000157 D0 D0            [24]  839 	pop	psw
      000159 D0 00            [24]  840 	pop	(0+0)
      00015B D0 01            [24]  841 	pop	(0+1)
      00015D D0 02            [24]  842 	pop	(0+2)
      00015F D0 03            [24]  843 	pop	(0+3)
      000161 D0 04            [24]  844 	pop	(0+4)
      000163 D0 05            [24]  845 	pop	(0+5)
      000165 D0 06            [24]  846 	pop	(0+6)
      000167 D0 07            [24]  847 	pop	(0+7)
      000169 D0 83            [24]  848 	pop	dph
      00016B D0 82            [24]  849 	pop	dpl
      00016D D0 F0            [24]  850 	pop	b
      00016F D0 E0            [24]  851 	pop	acc
      000171 D0 21            [24]  852 	pop	bits
      000173 32               [24]  853 	reti
                                    854 ;------------------------------------------------------------
                                    855 ;Allocation info for local variables in function 'set_TM0'
                                    856 ;------------------------------------------------------------
                                    857 ;	calc.c:63: void set_TM0(){	// TIMER0
                                    858 ;	-----------------------------------------
                                    859 ;	 function set_TM0
                                    860 ;	-----------------------------------------
      000174                        861 _set_TM0:
                                    862 ;	calc.c:64: TL0  = (uchar)(65536 - (FOSC/200)); 		//Set auto-reload vaule *1.00
      000174 75 8A 00         [24]  863 	mov	_TL0,#0x00
                                    864 ;	calc.c:65: TH0  = (65536 - (FOSC/200))>>8;
      000177 75 8C 28         [24]  865 	mov	_TH0,#0x28
                                    866 ;	calc.c:66: AUXR |= 0x81; TMOD = 0x00; TR0 = 1; //INT_CLKO = 0x01;
      00017A 43 8E 81         [24]  867 	orl	_AUXR,#0x81
      00017D 75 89 00         [24]  868 	mov	_TMOD,#0x00
                                    869 ;	assignBit
      000180 D2 8C            [12]  870 	setb	_TR0
                                    871 ;	calc.c:67: ET0 = 1; EA = 1;	// Timer0 interrupt enable / enable all interrupts
                                    872 ;	assignBit
      000182 D2 A9            [12]  873 	setb	_ET0
                                    874 ;	assignBit
      000184 D2 AF            [12]  875 	setb	_EA
                                    876 ;	calc.c:68: }
      000186 22               [24]  877 	ret
                                    878 ;------------------------------------------------------------
                                    879 ;Allocation info for local variables in function 'init_uart'
                                    880 ;------------------------------------------------------------
                                    881 ;	calc.c:70: void init_uart(){
                                    882 ;	-----------------------------------------
                                    883 ;	 function init_uart
                                    884 ;	-----------------------------------------
      000187                        885 _init_uart:
                                    886 ;	calc.c:71: SCON = 0x5A;	//8-bit variable UART
      000187 75 98 5A         [24]  887 	mov	_SCON,#0x5a
                                    888 ;	calc.c:72: T2L  = (unsigned char)(65536 - (FOSC/4/BAUD));   //Set auto-reload vaule
      00018A 75 D7 E8         [24]  889 	mov	_T2L,#0xe8
                                    890 ;	calc.c:73: T2H  = 0xff;//(65536 - (FOSC/4/BAUD))>>8;
      00018D 75 D6 FF         [24]  891 	mov	_T2H,#0xff
                                    892 ;	calc.c:74: AUXR = 0x00;
      000190 75 8E 00         [24]  893 	mov	_AUXR,#0x00
                                    894 ;	calc.c:75: AUXR |= 0x14; //T2 in 1T mode, strat up Timer 2
      000193 43 8E 14         [24]  895 	orl	_AUXR,#0x14
                                    896 ;	calc.c:76: AUXR |= 0x01; //Timer 2 as baud-rate Generator of UART1
      000196 43 8E 01         [24]  897 	orl	_AUXR,#0x01
                                    898 ;	calc.c:77: }
      000199 22               [24]  899 	ret
                                    900 ;------------------------------------------------------------
                                    901 ;Allocation info for local variables in function 'tx_uart'
                                    902 ;------------------------------------------------------------
                                    903 ;ch                        Allocated to registers r7 
                                    904 ;------------------------------------------------------------
                                    905 ;	calc.c:79: void tx_uart( char ch){
                                    906 ;	-----------------------------------------
                                    907 ;	 function tx_uart
                                    908 ;	-----------------------------------------
      00019A                        909 _tx_uart:
      00019A AF 82            [24]  910 	mov	r7,dpl
                                    911 ;	calc.c:80: while (!TI);
      00019C                        912 00101$:
                                    913 ;	calc.c:81: TI = 0;
                                    914 ;	assignBit
      00019C 10 99 02         [24]  915 	jbc	_TI,00114$
      00019F 80 FB            [24]  916 	sjmp	00101$
      0001A1                        917 00114$:
                                    918 ;	calc.c:82: SBUF = ch;
      0001A1 8F 99            [24]  919 	mov	_SBUF,r7
                                    920 ;	calc.c:83: }
      0001A3 22               [24]  921 	ret
                                    922 ;------------------------------------------------------------
                                    923 ;Allocation info for local variables in function 'rx_uart'
                                    924 ;------------------------------------------------------------
                                    925 ;	calc.c:84: char rx_uart(){
                                    926 ;	-----------------------------------------
                                    927 ;	 function rx_uart
                                    928 ;	-----------------------------------------
      0001A4                        929 _rx_uart:
                                    930 ;	calc.c:85: while(!RI);
      0001A4                        931 00101$:
                                    932 ;	calc.c:86: RI= 0;
                                    933 ;	assignBit
      0001A4 10 98 02         [24]  934 	jbc	_RI,00114$
      0001A7 80 FB            [24]  935 	sjmp	00101$
      0001A9                        936 00114$:
                                    937 ;	calc.c:87: return SBUF;
      0001A9 85 99 82         [24]  938 	mov	dpl,_SBUF
                                    939 ;	calc.c:88: }
      0001AC 22               [24]  940 	ret
                                    941 ;------------------------------------------------------------
                                    942 ;Allocation info for local variables in function 'init_msg'
                                    943 ;------------------------------------------------------------
                                    944 ;ch                        Allocated to registers r7 
                                    945 ;ct                        Allocated to registers r6 
                                    946 ;------------------------------------------------------------
                                    947 ;	calc.c:90: void init_msg(){
                                    948 ;	-----------------------------------------
                                    949 ;	 function init_msg
                                    950 ;	-----------------------------------------
      0001AD                        951 _init_msg:
                                    952 ;	calc.c:92: for(ch=0; ch<11; ch++) {
      0001AD 7F 00            [12]  953 	mov	r7,#0x00
                                    954 ;	calc.c:93: for(ct=0; ct<6; ct++) sreg[5-ct] = ch+ct; 
      0001AF                        955 00109$:
      0001AF 7E 00            [12]  956 	mov	r6,#0x00
      0001B1                        957 00103$:
      0001B1 8E 05            [24]  958 	mov	ar5,r6
      0001B3 74 05            [12]  959 	mov	a,#0x05
      0001B5 C3               [12]  960 	clr	c
      0001B6 9D               [12]  961 	subb	a,r5
      0001B7 24 23            [12]  962 	add	a,#_sreg
      0001B9 F9               [12]  963 	mov	r1,a
      0001BA EE               [12]  964 	mov	a,r6
      0001BB 2F               [12]  965 	add	a,r7
      0001BC F7               [12]  966 	mov	@r1,a
      0001BD 0E               [12]  967 	inc	r6
      0001BE BE 06 00         [24]  968 	cjne	r6,#0x06,00123$
      0001C1                        969 00123$:
      0001C1 40 EE            [24]  970 	jc	00103$
                                    971 ;	calc.c:94: dlay(20);
      0001C3 75 82 14         [24]  972 	mov	dpl,#0x14
      0001C6 C0 07            [24]  973 	push	ar7
      0001C8 12 00 6D         [24]  974 	lcall	_dlay
      0001CB D0 07            [24]  975 	pop	ar7
                                    976 ;	calc.c:92: for(ch=0; ch<11; ch++) {
      0001CD 0F               [12]  977 	inc	r7
      0001CE BF 0B 00         [24]  978 	cjne	r7,#0x0b,00125$
      0001D1                        979 00125$:
      0001D1 40 DC            [24]  980 	jc	00109$
                                    981 ;	calc.c:96: }
      0001D3 22               [24]  982 	ret
                                    983 ;------------------------------------------------------------
                                    984 ;Allocation info for local variables in function 'sreg_clr'
                                    985 ;------------------------------------------------------------
                                    986 ;ct                        Allocated to registers r7 
                                    987 ;------------------------------------------------------------
                                    988 ;	calc.c:97: void sreg_clr(){uchar ct; for(ct=0; ct<6; ct++) sreg[ct] = 0x80;}	// all blank
                                    989 ;	-----------------------------------------
                                    990 ;	 function sreg_clr
                                    991 ;	-----------------------------------------
      0001D4                        992 _sreg_clr:
      0001D4 7F 00            [12]  993 	mov	r7,#0x00
      0001D6                        994 00102$:
      0001D6 EF               [12]  995 	mov	a,r7
      0001D7 24 23            [12]  996 	add	a,#_sreg
      0001D9 F8               [12]  997 	mov	r0,a
      0001DA 76 80            [12]  998 	mov	@r0,#0x80
      0001DC 0F               [12]  999 	inc	r7
      0001DD BF 06 00         [24] 1000 	cjne	r7,#0x06,00111$
      0001E0                       1001 00111$:
      0001E0 40 F4            [24] 1002 	jc	00102$
      0001E2 22               [24] 1003 	ret
                                   1004 ;------------------------------------------------------------
                                   1005 ;Allocation info for local variables in function 'op_num'
                                   1006 ;------------------------------------------------------------
                                   1007 ;	calc.c:100: void op_num(){
                                   1008 ;	-----------------------------------------
                                   1009 ;	 function op_num
                                   1010 ;	-----------------------------------------
      0001E3                       1011 _op_num:
                                   1012 ;	calc.c:101: if(kbini) {dreg = 0; kbini = 0;}
      0001E3 30 03 0B         [24] 1013 	jnb	_kbini,00102$
      0001E6 E4               [12] 1014 	clr	a
      0001E7 F5 29            [12] 1015 	mov	_dreg,a
      0001E9 F5 2A            [12] 1016 	mov	(_dreg + 1),a
      0001EB F5 2B            [12] 1017 	mov	(_dreg + 2),a
      0001ED F5 2C            [12] 1018 	mov	(_dreg + 3),a
                                   1019 ;	assignBit
      0001EF C2 03            [12] 1020 	clr	_kbini
      0001F1                       1021 00102$:
                                   1022 ;	calc.c:102: dreg = dreg * 10;
      0001F1 85 29 08         [24] 1023 	mov	__mullong_PARM_2,_dreg
      0001F4 85 2A 09         [24] 1024 	mov	(__mullong_PARM_2 + 1),(_dreg + 1)
      0001F7 85 2B 0A         [24] 1025 	mov	(__mullong_PARM_2 + 2),(_dreg + 2)
      0001FA 85 2C 0B         [24] 1026 	mov	(__mullong_PARM_2 + 3),(_dreg + 3)
      0001FD 90 00 0A         [24] 1027 	mov	dptr,#(0x0a&0x00ff)
      000200 E4               [12] 1028 	clr	a
      000201 F5 F0            [12] 1029 	mov	b,a
      000203 12 05 FD         [24] 1030 	lcall	__mullong
      000206 85 82 29         [24] 1031 	mov	_dreg,dpl
      000209 85 83 2A         [24] 1032 	mov	(_dreg + 1),dph
      00020C 85 F0 2B         [24] 1033 	mov	(_dreg + 2),b
      00020F F5 2C            [12] 1034 	mov	(_dreg + 3),a
                                   1035 ;	calc.c:103: if(kop!=0x88) dreg = dreg + knum;
      000211 74 88            [12] 1036 	mov	a,#0x88
      000213 B5 3A 02         [24] 1037 	cjne	a,_kop,00117$
      000216 80 1E            [24] 1038 	sjmp	00104$
      000218                       1039 00117$:
      000218 AE 39            [24] 1040 	mov	r6,_knum
      00021A E4               [12] 1041 	clr	a
      00021B FF               [12] 1042 	mov	r7,a
      00021C 33               [12] 1043 	rlc	a
      00021D 95 E0            [12] 1044 	subb	a,acc
      00021F FD               [12] 1045 	mov	r5,a
      000220 FC               [12] 1046 	mov	r4,a
      000221 EE               [12] 1047 	mov	a,r6
      000222 25 29            [12] 1048 	add	a,_dreg
      000224 F5 29            [12] 1049 	mov	_dreg,a
      000226 EF               [12] 1050 	mov	a,r7
      000227 35 2A            [12] 1051 	addc	a,(_dreg + 1)
      000229 F5 2A            [12] 1052 	mov	(_dreg + 1),a
      00022B ED               [12] 1053 	mov	a,r5
      00022C 35 2B            [12] 1054 	addc	a,(_dreg + 2)
      00022E F5 2B            [12] 1055 	mov	(_dreg + 2),a
      000230 EC               [12] 1056 	mov	a,r4
      000231 35 2C            [12] 1057 	addc	a,(_dreg + 3)
      000233 F5 2C            [12] 1058 	mov	(_dreg + 3),a
      000235 22               [24] 1059 	ret
      000236                       1060 00104$:
                                   1061 ;	calc.c:104: else          dreg = dreg - knum;
      000236 AE 39            [24] 1062 	mov	r6,_knum
      000238 E4               [12] 1063 	clr	a
      000239 FF               [12] 1064 	mov	r7,a
      00023A 33               [12] 1065 	rlc	a
      00023B 95 E0            [12] 1066 	subb	a,acc
      00023D FD               [12] 1067 	mov	r5,a
      00023E FC               [12] 1068 	mov	r4,a
      00023F E5 29            [12] 1069 	mov	a,_dreg
      000241 C3               [12] 1070 	clr	c
      000242 9E               [12] 1071 	subb	a,r6
      000243 F5 29            [12] 1072 	mov	_dreg,a
      000245 E5 2A            [12] 1073 	mov	a,(_dreg + 1)
      000247 9F               [12] 1074 	subb	a,r7
      000248 F5 2A            [12] 1075 	mov	(_dreg + 1),a
      00024A E5 2B            [12] 1076 	mov	a,(_dreg + 2)
      00024C 9D               [12] 1077 	subb	a,r5
      00024D F5 2B            [12] 1078 	mov	(_dreg + 2),a
      00024F E5 2C            [12] 1079 	mov	a,(_dreg + 3)
      000251 9C               [12] 1080 	subb	a,r4
      000252 F5 2C            [12] 1081 	mov	(_dreg + 3),a
                                   1082 ;	calc.c:105: }
      000254 22               [24] 1083 	ret
                                   1084 ;------------------------------------------------------------
                                   1085 ;Allocation info for local variables in function 'num2seg'
                                   1086 ;------------------------------------------------------------
                                   1087 ;	calc.c:111: void num2seg(){
                                   1088 ;	-----------------------------------------
                                   1089 ;	 function num2seg
                                   1090 ;	-----------------------------------------
      000255                       1091 _num2seg:
                                   1092 ;	calc.c:113: if(dreg<0) { mflg = 1; ssd = -dreg;}
      000255 E5 2C            [12] 1093 	mov	a,(_dreg + 3)
      000257 30 E7 19         [24] 1094 	jnb	acc.7,00102$
                                   1095 ;	assignBit
      00025A D2 04            [12] 1096 	setb	_mflg
      00025C C3               [12] 1097 	clr	c
      00025D E4               [12] 1098 	clr	a
      00025E 95 29            [12] 1099 	subb	a,_dreg
      000260 F5 3F            [12] 1100 	mov	_ssd,a
      000262 E4               [12] 1101 	clr	a
      000263 95 2A            [12] 1102 	subb	a,(_dreg + 1)
      000265 F5 40            [12] 1103 	mov	(_ssd + 1),a
      000267 E4               [12] 1104 	clr	a
      000268 95 2B            [12] 1105 	subb	a,(_dreg + 2)
      00026A F5 41            [12] 1106 	mov	(_ssd + 2),a
      00026C E4               [12] 1107 	clr	a
      00026D 95 2C            [12] 1108 	subb	a,(_dreg + 3)
      00026F F5 42            [12] 1109 	mov	(_ssd + 3),a
      000271 80 0E            [24] 1110 	sjmp	00103$
      000273                       1111 00102$:
                                   1112 ;	calc.c:114: else       { mflg = 0; ssd = dreg;}
                                   1113 ;	assignBit
      000273 C2 04            [12] 1114 	clr	_mflg
      000275 85 29 3F         [24] 1115 	mov	_ssd,_dreg
      000278 85 2A 40         [24] 1116 	mov	(_ssd + 1),(_dreg + 1)
      00027B 85 2B 41         [24] 1117 	mov	(_ssd + 2),(_dreg + 2)
      00027E 85 2C 42         [24] 1118 	mov	(_ssd + 3),(_dreg + 3)
      000281                       1119 00103$:
                                   1120 ;	calc.c:115: ddt = 100000; zsup = 0x80; mpt = 0;
      000281 75 43 A0         [24] 1121 	mov	_ddt,#0xa0
      000284 75 44 86         [24] 1122 	mov	(_ddt + 1),#0x86
      000287 75 45 01         [24] 1123 	mov	(_ddt + 2),#0x01
      00028A 75 46 00         [24] 1124 	mov	(_ddt + 3),#0x00
      00028D 75 3B 80         [24] 1125 	mov	_zsup,#0x80
      000290 75 3E 00         [24] 1126 	mov	_mpt,#0x00
                                   1127 ;	calc.c:116: for(lp=0; lp<6; lp++){
      000293 75 3C 00         [24] 1128 	mov	_lp,#0x00
      000296                       1129 00113$:
                                   1130 ;	calc.c:117: seg = ssd / ddt;
      000296 85 43 08         [24] 1131 	mov	__divslong_PARM_2,_ddt
      000299 85 44 09         [24] 1132 	mov	(__divslong_PARM_2 + 1),(_ddt + 1)
      00029C 85 45 0A         [24] 1133 	mov	(__divslong_PARM_2 + 2),(_ddt + 2)
      00029F 85 46 0B         [24] 1134 	mov	(__divslong_PARM_2 + 3),(_ddt + 3)
      0002A2 85 3F 82         [24] 1135 	mov	dpl,_ssd
      0002A5 85 40 83         [24] 1136 	mov	dph,(_ssd + 1)
      0002A8 85 41 F0         [24] 1137 	mov	b,(_ssd + 2)
      0002AB E5 42            [12] 1138 	mov	a,(_ssd + 3)
      0002AD 12 06 BA         [24] 1139 	lcall	__divslong
      0002B0 AC 82            [24] 1140 	mov	r4,dpl
                                   1141 ;	calc.c:118: if(seg!=0 || lp==5){
      0002B2 EC               [12] 1142 	mov	a,r4
      0002B3 F5 3D            [12] 1143 	mov	_seg,a
      0002B5 70 05            [24] 1144 	jnz	00106$
      0002B7 74 05            [12] 1145 	mov	a,#0x05
      0002B9 B5 3C 0F         [24] 1146 	cjne	a,_lp,00107$
      0002BC                       1147 00106$:
                                   1148 ;	calc.c:119: zsup = 0; if(mpt==0) mpt = 6-lp;
      0002BC 75 3B 00         [24] 1149 	mov	_zsup,#0x00
      0002BF E5 3E            [12] 1150 	mov	a,_mpt
      0002C1 70 08            [24] 1151 	jnz	00107$
      0002C3 AF 3C            [24] 1152 	mov	r7,_lp
      0002C5 74 06            [12] 1153 	mov	a,#0x06
      0002C7 C3               [12] 1154 	clr	c
      0002C8 9F               [12] 1155 	subb	a,r7
      0002C9 F5 3E            [12] 1156 	mov	_mpt,a
      0002CB                       1157 00107$:
                                   1158 ;	calc.c:121: sreg[5-lp] = seg | zsup;
      0002CB AF 3C            [24] 1159 	mov	r7,_lp
      0002CD 74 05            [12] 1160 	mov	a,#0x05
      0002CF C3               [12] 1161 	clr	c
      0002D0 9F               [12] 1162 	subb	a,r7
      0002D1 24 23            [12] 1163 	add	a,#_sreg
      0002D3 F9               [12] 1164 	mov	r1,a
      0002D4 E5 3B            [12] 1165 	mov	a,_zsup
      0002D6 45 3D            [12] 1166 	orl	a,_seg
      0002D8 F7               [12] 1167 	mov	@r1,a
                                   1168 ;	calc.c:122: ssd = ssd % ddt; ddt = ddt / 10;
      0002D9 85 43 08         [24] 1169 	mov	__modslong_PARM_2,_ddt
      0002DC 85 44 09         [24] 1170 	mov	(__modslong_PARM_2 + 1),(_ddt + 1)
      0002DF 85 45 0A         [24] 1171 	mov	(__modslong_PARM_2 + 2),(_ddt + 2)
      0002E2 85 46 0B         [24] 1172 	mov	(__modslong_PARM_2 + 3),(_ddt + 3)
      0002E5 85 3F 82         [24] 1173 	mov	dpl,_ssd
      0002E8 85 40 83         [24] 1174 	mov	dph,(_ssd + 1)
      0002EB 85 41 F0         [24] 1175 	mov	b,(_ssd + 2)
      0002EE E5 42            [12] 1176 	mov	a,(_ssd + 3)
      0002F0 12 06 6B         [24] 1177 	lcall	__modslong
      0002F3 85 82 3F         [24] 1178 	mov	_ssd,dpl
      0002F6 85 83 40         [24] 1179 	mov	(_ssd + 1),dph
      0002F9 85 F0 41         [24] 1180 	mov	(_ssd + 2),b
      0002FC F5 42            [12] 1181 	mov	(_ssd + 3),a
      0002FE 75 08 0A         [24] 1182 	mov	__divslong_PARM_2,#0x0a
      000301 E4               [12] 1183 	clr	a
      000302 F5 09            [12] 1184 	mov	(__divslong_PARM_2 + 1),a
      000304 F5 0A            [12] 1185 	mov	(__divslong_PARM_2 + 2),a
      000306 F5 0B            [12] 1186 	mov	(__divslong_PARM_2 + 3),a
      000308 85 43 82         [24] 1187 	mov	dpl,_ddt
      00030B 85 44 83         [24] 1188 	mov	dph,(_ddt + 1)
      00030E 85 45 F0         [24] 1189 	mov	b,(_ddt + 2)
      000311 E5 46            [12] 1190 	mov	a,(_ddt + 3)
      000313 12 06 BA         [24] 1191 	lcall	__divslong
      000316 85 82 43         [24] 1192 	mov	_ddt,dpl
      000319 85 83 44         [24] 1193 	mov	(_ddt + 1),dph
      00031C 85 F0 45         [24] 1194 	mov	(_ddt + 2),b
      00031F F5 46            [12] 1195 	mov	(_ddt + 3),a
                                   1196 ;	calc.c:116: for(lp=0; lp<6; lp++){
      000321 05 3C            [12] 1197 	inc	_lp
      000323 74 FA            [12] 1198 	mov	a,#0x100 - 0x06
      000325 25 3C            [12] 1199 	add	a,_lp
      000327 40 03            [24] 1200 	jc	00150$
      000329 02 02 96         [24] 1201 	ljmp	00113$
      00032C                       1202 00150$:
                                   1203 ;	calc.c:124: if(mflg && mpt<6) sreg[mpt] = 0x20; // minus
      00032C 30 04 0D         [24] 1204 	jnb	_mflg,00115$
      00032F 74 FA            [12] 1205 	mov	a,#0x100 - 0x06
      000331 25 3E            [12] 1206 	add	a,_mpt
      000333 40 07            [24] 1207 	jc	00115$
      000335 E5 3E            [12] 1208 	mov	a,_mpt
      000337 24 23            [12] 1209 	add	a,#_sreg
      000339 F8               [12] 1210 	mov	r0,a
      00033A 76 20            [12] 1211 	mov	@r0,#0x20
      00033C                       1212 00115$:
                                   1213 ;	calc.c:125: }
      00033C 22               [24] 1214 	ret
                                   1215 ;------------------------------------------------------------
                                   1216 ;Allocation info for local variables in function 'op_cal'
                                   1217 ;------------------------------------------------------------
                                   1218 ;	calc.c:127: void op_cal(){
                                   1219 ;	-----------------------------------------
                                   1220 ;	 function op_cal
                                   1221 ;	-----------------------------------------
      00033D                       1222 _op_cal:
                                   1223 ;	calc.c:128: kbini = 1;
                                   1224 ;	assignBit
      00033D D2 03            [12] 1225 	setb	_kbini
                                   1226 ;	calc.c:129: if(keydt!=0x84) {kop = keydt; wreg = dreg;}
      00033F 74 84            [12] 1227 	mov	a,#0x84
      000341 B5 38 02         [24] 1228 	cjne	a,_keydt,00131$
      000344 80 10            [24] 1229 	sjmp	00107$
      000346                       1230 00131$:
      000346 85 38 3A         [24] 1231 	mov	_kop,_keydt
      000349 85 29 2D         [24] 1232 	mov	_wreg,_dreg
      00034C 85 2A 2E         [24] 1233 	mov	(_wreg + 1),(_dreg + 1)
      00034F 85 2B 2F         [24] 1234 	mov	(_wreg + 2),(_dreg + 2)
      000352 85 2C 30         [24] 1235 	mov	(_wreg + 3),(_dreg + 3)
      000355 22               [24] 1236 	ret
      000356                       1237 00107$:
                                   1238 ;	calc.c:131: switch(kop){
      000356 74 18            [12] 1239 	mov	a,#0x18
      000358 B5 3A 02         [24] 1240 	cjne	a,_kop,00132$
      00035B 80 16            [24] 1241 	sjmp	00101$
      00035D                       1242 00132$:
      00035D 74 28            [12] 1243 	mov	a,#0x28
      00035F B5 3A 02         [24] 1244 	cjne	a,_kop,00133$
      000362 80 35            [24] 1245 	sjmp	00102$
      000364                       1246 00133$:
      000364 74 48            [12] 1247 	mov	a,#0x48
      000366 B5 3A 02         [24] 1248 	cjne	a,_kop,00134$
      000369 80 54            [24] 1249 	sjmp	00103$
      00036B                       1250 00134$:
      00036B 74 88            [12] 1251 	mov	a,#0x88
      00036D B5 3A 02         [24] 1252 	cjne	a,_kop,00135$
      000370 80 66            [24] 1253 	sjmp	00104$
      000372                       1254 00135$:
      000372 22               [24] 1255 	ret
                                   1256 ;	calc.c:132: case 0x18: dreg = wreg / dreg; break;
      000373                       1257 00101$:
      000373 85 29 08         [24] 1258 	mov	__divslong_PARM_2,_dreg
      000376 85 2A 09         [24] 1259 	mov	(__divslong_PARM_2 + 1),(_dreg + 1)
      000379 85 2B 0A         [24] 1260 	mov	(__divslong_PARM_2 + 2),(_dreg + 2)
      00037C 85 2C 0B         [24] 1261 	mov	(__divslong_PARM_2 + 3),(_dreg + 3)
      00037F 85 2D 82         [24] 1262 	mov	dpl,_wreg
      000382 85 2E 83         [24] 1263 	mov	dph,(_wreg + 1)
      000385 85 2F F0         [24] 1264 	mov	b,(_wreg + 2)
      000388 E5 30            [12] 1265 	mov	a,(_wreg + 3)
      00038A 12 06 BA         [24] 1266 	lcall	__divslong
      00038D 85 82 29         [24] 1267 	mov	_dreg,dpl
      000390 85 83 2A         [24] 1268 	mov	(_dreg + 1),dph
      000393 85 F0 2B         [24] 1269 	mov	(_dreg + 2),b
      000396 F5 2C            [12] 1270 	mov	(_dreg + 3),a
                                   1271 ;	calc.c:133: case 0x28: dreg = wreg * dreg; break;
      000398 22               [24] 1272 	ret
      000399                       1273 00102$:
      000399 85 29 08         [24] 1274 	mov	__mullong_PARM_2,_dreg
      00039C 85 2A 09         [24] 1275 	mov	(__mullong_PARM_2 + 1),(_dreg + 1)
      00039F 85 2B 0A         [24] 1276 	mov	(__mullong_PARM_2 + 2),(_dreg + 2)
      0003A2 85 2C 0B         [24] 1277 	mov	(__mullong_PARM_2 + 3),(_dreg + 3)
      0003A5 85 2D 82         [24] 1278 	mov	dpl,_wreg
      0003A8 85 2E 83         [24] 1279 	mov	dph,(_wreg + 1)
      0003AB 85 2F F0         [24] 1280 	mov	b,(_wreg + 2)
      0003AE E5 30            [12] 1281 	mov	a,(_wreg + 3)
      0003B0 12 05 FD         [24] 1282 	lcall	__mullong
      0003B3 85 82 29         [24] 1283 	mov	_dreg,dpl
      0003B6 85 83 2A         [24] 1284 	mov	(_dreg + 1),dph
      0003B9 85 F0 2B         [24] 1285 	mov	(_dreg + 2),b
      0003BC F5 2C            [12] 1286 	mov	(_dreg + 3),a
                                   1287 ;	calc.c:134: case 0x48: dreg = wreg + dreg; break;
      0003BE 22               [24] 1288 	ret
      0003BF                       1289 00103$:
      0003BF E5 29            [12] 1290 	mov	a,_dreg
      0003C1 25 2D            [12] 1291 	add	a,_wreg
      0003C3 F5 29            [12] 1292 	mov	_dreg,a
      0003C5 E5 2A            [12] 1293 	mov	a,(_dreg + 1)
      0003C7 35 2E            [12] 1294 	addc	a,(_wreg + 1)
      0003C9 F5 2A            [12] 1295 	mov	(_dreg + 1),a
      0003CB E5 2B            [12] 1296 	mov	a,(_dreg + 2)
      0003CD 35 2F            [12] 1297 	addc	a,(_wreg + 2)
      0003CF F5 2B            [12] 1298 	mov	(_dreg + 2),a
      0003D1 E5 2C            [12] 1299 	mov	a,(_dreg + 3)
      0003D3 35 30            [12] 1300 	addc	a,(_wreg + 3)
      0003D5 F5 2C            [12] 1301 	mov	(_dreg + 3),a
                                   1302 ;	calc.c:135: case 0x88: dreg = wreg + dreg; break;
      0003D7 22               [24] 1303 	ret
      0003D8                       1304 00104$:
      0003D8 E5 29            [12] 1305 	mov	a,_dreg
      0003DA 25 2D            [12] 1306 	add	a,_wreg
      0003DC F5 29            [12] 1307 	mov	_dreg,a
      0003DE E5 2A            [12] 1308 	mov	a,(_dreg + 1)
      0003E0 35 2E            [12] 1309 	addc	a,(_wreg + 1)
      0003E2 F5 2A            [12] 1310 	mov	(_dreg + 1),a
      0003E4 E5 2B            [12] 1311 	mov	a,(_dreg + 2)
      0003E6 35 2F            [12] 1312 	addc	a,(_wreg + 2)
      0003E8 F5 2B            [12] 1313 	mov	(_dreg + 2),a
      0003EA E5 2C            [12] 1314 	mov	a,(_dreg + 3)
      0003EC 35 30            [12] 1315 	addc	a,(_wreg + 3)
      0003EE F5 2C            [12] 1316 	mov	(_dreg + 3),a
                                   1317 ;	calc.c:136: }
                                   1318 ;	calc.c:137: }
      0003F0 22               [24] 1319 	ret
                                   1320 ;------------------------------------------------------------
                                   1321 ;Allocation info for local variables in function 'main'
                                   1322 ;------------------------------------------------------------
                                   1323 ;	calc.c:139: void main(){
                                   1324 ;	-----------------------------------------
                                   1325 ;	 function main
                                   1326 ;	-----------------------------------------
      0003F1                       1327 _main:
                                   1328 ;	calc.c:140: init_uart(); set_TM0(); kbhitf = 0;
      0003F1 12 01 87         [24] 1329 	lcall	_init_uart
      0003F4 12 01 74         [24] 1330 	lcall	_set_TM0
                                   1331 ;	assignBit
      0003F7 C2 02            [12] 1332 	clr	_kbhitf
                                   1333 ;	calc.c:141: init_msg(); sreg_clr(); dreg = 0;
      0003F9 12 01 AD         [24] 1334 	lcall	_init_msg
      0003FC 12 01 D4         [24] 1335 	lcall	_sreg_clr
      0003FF E4               [12] 1336 	clr	a
      000400 F5 29            [12] 1337 	mov	_dreg,a
      000402 F5 2A            [12] 1338 	mov	(_dreg + 1),a
      000404 F5 2B            [12] 1339 	mov	(_dreg + 2),a
      000406 F5 2C            [12] 1340 	mov	(_dreg + 3),a
                                   1341 ;	calc.c:143: while(1) {
      000408                       1342 00122$:
                                   1343 ;	calc.c:144: if(kbhitf){
                                   1344 ;	calc.c:145: kbhitf = 0;
                                   1345 ;	assignBit
      000408 10 02 02         [24] 1346 	jbc	_kbhitf,00202$
      00040B 80 FB            [24] 1347 	sjmp	00122$
      00040D                       1348 00202$:
                                   1349 ;	calc.c:146: switch(keydt){
      00040D 74 01            [12] 1350 	mov	a,#0x01
      00040F B5 38 03         [24] 1351 	cjne	a,_keydt,00203$
      000412 02 04 98         [24] 1352 	ljmp	00101$
      000415                       1353 00203$:
      000415 74 11            [12] 1354 	mov	a,#0x11
      000417 B5 38 03         [24] 1355 	cjne	a,_keydt,00204$
      00041A 02 04 A3         [24] 1356 	ljmp	00102$
      00041D                       1357 00204$:
      00041D 74 12            [12] 1358 	mov	a,#0x12
      00041F B5 38 03         [24] 1359 	cjne	a,_keydt,00205$
      000422 02 04 AB         [24] 1360 	ljmp	00103$
      000425                       1361 00205$:
      000425 74 14            [12] 1362 	mov	a,#0x14
      000427 B5 38 03         [24] 1363 	cjne	a,_keydt,00206$
      00042A 02 04 B3         [24] 1364 	ljmp	00104$
      00042D                       1365 00206$:
      00042D 74 18            [12] 1366 	mov	a,#0x18
      00042F B5 38 03         [24] 1367 	cjne	a,_keydt,00207$
      000432 02 04 BB         [24] 1368 	ljmp	00105$
      000435                       1369 00207$:
      000435 74 21            [12] 1370 	mov	a,#0x21
      000437 B5 38 03         [24] 1371 	cjne	a,_keydt,00208$
      00043A 02 04 C0         [24] 1372 	ljmp	00106$
      00043D                       1373 00208$:
      00043D 74 22            [12] 1374 	mov	a,#0x22
      00043F B5 38 03         [24] 1375 	cjne	a,_keydt,00209$
      000442 02 04 C8         [24] 1376 	ljmp	00107$
      000445                       1377 00209$:
      000445 74 24            [12] 1378 	mov	a,#0x24
      000447 B5 38 03         [24] 1379 	cjne	a,_keydt,00210$
      00044A 02 04 D0         [24] 1380 	ljmp	00108$
      00044D                       1381 00210$:
      00044D 74 28            [12] 1382 	mov	a,#0x28
      00044F B5 38 03         [24] 1383 	cjne	a,_keydt,00211$
      000452 02 04 D8         [24] 1384 	ljmp	00109$
      000455                       1385 00211$:
      000455 74 41            [12] 1386 	mov	a,#0x41
      000457 B5 38 03         [24] 1387 	cjne	a,_keydt,00212$
      00045A 02 04 DD         [24] 1388 	ljmp	00110$
      00045D                       1389 00212$:
      00045D 74 42            [12] 1390 	mov	a,#0x42
      00045F B5 38 03         [24] 1391 	cjne	a,_keydt,00213$
      000462 02 04 E5         [24] 1392 	ljmp	00111$
      000465                       1393 00213$:
      000465 74 44            [12] 1394 	mov	a,#0x44
      000467 B5 38 03         [24] 1395 	cjne	a,_keydt,00214$
      00046A 02 04 ED         [24] 1396 	ljmp	00112$
      00046D                       1397 00214$:
      00046D 74 48            [12] 1398 	mov	a,#0x48
      00046F B5 38 03         [24] 1399 	cjne	a,_keydt,00215$
      000472 02 04 F5         [24] 1400 	ljmp	00113$
      000475                       1401 00215$:
      000475 74 81            [12] 1402 	mov	a,#0x81
      000477 B5 38 03         [24] 1403 	cjne	a,_keydt,00216$
      00047A 02 04 FA         [24] 1404 	ljmp	00114$
      00047D                       1405 00216$:
      00047D 74 82            [12] 1406 	mov	a,#0x82
      00047F B5 38 03         [24] 1407 	cjne	a,_keydt,00217$
      000482 02 05 02         [24] 1408 	ljmp	00115$
      000485                       1409 00217$:
      000485 74 84            [12] 1410 	mov	a,#0x84
      000487 B5 38 03         [24] 1411 	cjne	a,_keydt,00218$
      00048A 02 05 07         [24] 1412 	ljmp	00116$
      00048D                       1413 00218$:
      00048D 74 88            [12] 1414 	mov	a,#0x88
      00048F B5 38 03         [24] 1415 	cjne	a,_keydt,00219$
      000492 02 05 0C         [24] 1416 	ljmp	00117$
      000495                       1417 00219$:
      000495 02 05 0F         [24] 1418 	ljmp	00118$
                                   1419 ;	calc.c:147: case 0x01: dreg = 0; break;
      000498                       1420 00101$:
      000498 E4               [12] 1421 	clr	a
      000499 F5 29            [12] 1422 	mov	_dreg,a
      00049B F5 2A            [12] 1423 	mov	(_dreg + 1),a
      00049D F5 2B            [12] 1424 	mov	(_dreg + 2),a
      00049F F5 2C            [12] 1425 	mov	(_dreg + 3),a
                                   1426 ;	calc.c:148: case 0x11: knum = 7; op_num(); break;
      0004A1 80 6C            [24] 1427 	sjmp	00118$
      0004A3                       1428 00102$:
      0004A3 75 39 07         [24] 1429 	mov	_knum,#0x07
      0004A6 12 01 E3         [24] 1430 	lcall	_op_num
                                   1431 ;	calc.c:149: case 0x12: knum = 8; op_num(); break;
      0004A9 80 64            [24] 1432 	sjmp	00118$
      0004AB                       1433 00103$:
      0004AB 75 39 08         [24] 1434 	mov	_knum,#0x08
      0004AE 12 01 E3         [24] 1435 	lcall	_op_num
                                   1436 ;	calc.c:150: case 0x14: knum = 9; op_num(); break;
      0004B1 80 5C            [24] 1437 	sjmp	00118$
      0004B3                       1438 00104$:
      0004B3 75 39 09         [24] 1439 	mov	_knum,#0x09
      0004B6 12 01 E3         [24] 1440 	lcall	_op_num
                                   1441 ;	calc.c:151: case 0x18: op_cal(); break;	// /
      0004B9 80 54            [24] 1442 	sjmp	00118$
      0004BB                       1443 00105$:
      0004BB 12 03 3D         [24] 1444 	lcall	_op_cal
                                   1445 ;	calc.c:152: case 0x21: knum = 4; op_num(); break;
      0004BE 80 4F            [24] 1446 	sjmp	00118$
      0004C0                       1447 00106$:
      0004C0 75 39 04         [24] 1448 	mov	_knum,#0x04
      0004C3 12 01 E3         [24] 1449 	lcall	_op_num
                                   1450 ;	calc.c:153: case 0x22: knum = 5; op_num(); break;
      0004C6 80 47            [24] 1451 	sjmp	00118$
      0004C8                       1452 00107$:
      0004C8 75 39 05         [24] 1453 	mov	_knum,#0x05
      0004CB 12 01 E3         [24] 1454 	lcall	_op_num
                                   1455 ;	calc.c:154: case 0x24: knum = 6; op_num(); break;
      0004CE 80 3F            [24] 1456 	sjmp	00118$
      0004D0                       1457 00108$:
      0004D0 75 39 06         [24] 1458 	mov	_knum,#0x06
      0004D3 12 01 E3         [24] 1459 	lcall	_op_num
                                   1460 ;	calc.c:155: case 0x28: op_cal(); break;	// *
      0004D6 80 37            [24] 1461 	sjmp	00118$
      0004D8                       1462 00109$:
      0004D8 12 03 3D         [24] 1463 	lcall	_op_cal
                                   1464 ;	calc.c:156: case 0x41: knum = 1; op_num(); break;
      0004DB 80 32            [24] 1465 	sjmp	00118$
      0004DD                       1466 00110$:
      0004DD 75 39 01         [24] 1467 	mov	_knum,#0x01
      0004E0 12 01 E3         [24] 1468 	lcall	_op_num
                                   1469 ;	calc.c:157: case 0x42: knum = 2; op_num(); break;
      0004E3 80 2A            [24] 1470 	sjmp	00118$
      0004E5                       1471 00111$:
      0004E5 75 39 02         [24] 1472 	mov	_knum,#0x02
      0004E8 12 01 E3         [24] 1473 	lcall	_op_num
                                   1474 ;	calc.c:158: case 0x44: knum = 3; op_num(); break;
      0004EB 80 22            [24] 1475 	sjmp	00118$
      0004ED                       1476 00112$:
      0004ED 75 39 03         [24] 1477 	mov	_knum,#0x03
      0004F0 12 01 E3         [24] 1478 	lcall	_op_num
                                   1479 ;	calc.c:159: case 0x48: op_cal(); break;	// +
      0004F3 80 1A            [24] 1480 	sjmp	00118$
      0004F5                       1481 00113$:
      0004F5 12 03 3D         [24] 1482 	lcall	_op_cal
                                   1483 ;	calc.c:160: case 0x81: knum = 0; op_num(); break;
      0004F8 80 15            [24] 1484 	sjmp	00118$
      0004FA                       1485 00114$:
      0004FA 75 39 00         [24] 1486 	mov	_knum,#0x00
      0004FD 12 01 E3         [24] 1487 	lcall	_op_num
                                   1488 ;	calc.c:161: case 0x82: op_cal(); break;	// .
      000500 80 0D            [24] 1489 	sjmp	00118$
      000502                       1490 00115$:
      000502 12 03 3D         [24] 1491 	lcall	_op_cal
                                   1492 ;	calc.c:162: case 0x84: op_cal(); break;	// =
      000505 80 08            [24] 1493 	sjmp	00118$
      000507                       1494 00116$:
      000507 12 03 3D         [24] 1495 	lcall	_op_cal
                                   1496 ;	calc.c:163: case 0x88: op_cal(); break;	// -
      00050A 80 03            [24] 1497 	sjmp	00118$
      00050C                       1498 00117$:
      00050C 12 03 3D         [24] 1499 	lcall	_op_cal
                                   1500 ;	calc.c:164: }
      00050F                       1501 00118$:
                                   1502 ;	calc.c:165: num2seg();
      00050F 12 02 55         [24] 1503 	lcall	_num2seg
                                   1504 ;	calc.c:179: }
      000512 02 04 08         [24] 1505 	ljmp	00122$
                                   1506 	.area CSEG    (CODE)
                                   1507 	.area CONST   (CODE)
      000710                       1508 _segfmt:
      000710 3F                    1509 	.db #0x3f	; 63
      000711 06                    1510 	.db #0x06	; 6
      000712 5B                    1511 	.db #0x5b	; 91
      000713 4F                    1512 	.db #0x4f	; 79	'O'
      000714 66                    1513 	.db #0x66	; 102	'f'
      000715 6D                    1514 	.db #0x6d	; 109	'm'
      000716 7D                    1515 	.db #0x7d	; 125
      000717 27                    1516 	.db #0x27	; 39
      000718 7F                    1517 	.db #0x7f	; 127
      000719 6F                    1518 	.db #0x6f	; 111	'o'
      00071A 77                    1519 	.db #0x77	; 119	'w'
      00071B 7C                    1520 	.db #0x7c	; 124
      00071C 58                    1521 	.db #0x58	; 88	'X'
      00071D 5E                    1522 	.db #0x5e	; 94
      00071E 79                    1523 	.db #0x79	; 121	'y'
      00071F 71                    1524 	.db #0x71	; 113	'q'
                                   1525 	.area XINIT   (CODE)
                                   1526 	.area CABS    (ABS,CODE)
