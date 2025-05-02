                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 4.1.0 #12072 (MINGW64)
                                      4 ;--------------------------------------------------------
                                      5 	.module led
                                      6 	.optsdcc -mmcs51 --model-small
                                      7 	
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _main2
                                     12 	.globl _main
                                     13 	.globl _rx_uart
                                     14 	.globl _tx_uart
                                     15 	.globl _wait_TM
                                     16 	.globl _wait_TM0
                                     17 	.globl _wait_TM2
                                     18 	.globl _init_uart
                                     19 	.globl _set_TM2
                                     20 	.globl _timer2_isr
                                     21 	.globl _seg_opr
                                     22 	.globl _Flicka
                                     23 	.globl _dlay
                                     24 	.globl _CCF0
                                     25 	.globl _CCF1
                                     26 	.globl _CCF2
                                     27 	.globl _CR
                                     28 	.globl _CF
                                     29 	.globl _PADC
                                     30 	.globl _PLVD
                                     31 	.globl _PPCA
                                     32 	.globl _EADC
                                     33 	.globl _ELVD
                                     34 	.globl _P5_7
                                     35 	.globl _P5_6
                                     36 	.globl _P5_5
                                     37 	.globl _P5_4
                                     38 	.globl _P5_3
                                     39 	.globl _P5_2
                                     40 	.globl _P5_1
                                     41 	.globl _P5_0
                                     42 	.globl _P4_7
                                     43 	.globl _P4_6
                                     44 	.globl _P4_5
                                     45 	.globl _P4_4
                                     46 	.globl _P4_3
                                     47 	.globl _P4_2
                                     48 	.globl _P4_1
                                     49 	.globl _P4_0
                                     50 	.globl _CY
                                     51 	.globl _AC
                                     52 	.globl _F0
                                     53 	.globl _RS1
                                     54 	.globl _RS0
                                     55 	.globl _OV
                                     56 	.globl _F1
                                     57 	.globl _P
                                     58 	.globl _PS
                                     59 	.globl _PT1
                                     60 	.globl _PX1
                                     61 	.globl _PT0
                                     62 	.globl _PX0
                                     63 	.globl _RD
                                     64 	.globl _WR
                                     65 	.globl _T1
                                     66 	.globl _T0
                                     67 	.globl _INT1
                                     68 	.globl _INT0
                                     69 	.globl _TXD
                                     70 	.globl _RXD
                                     71 	.globl _P3_7
                                     72 	.globl _P3_6
                                     73 	.globl _P3_5
                                     74 	.globl _P3_4
                                     75 	.globl _P3_3
                                     76 	.globl _P3_2
                                     77 	.globl _P3_1
                                     78 	.globl _P3_0
                                     79 	.globl _EA
                                     80 	.globl _ES
                                     81 	.globl _ET1
                                     82 	.globl _EX1
                                     83 	.globl _ET0
                                     84 	.globl _EX0
                                     85 	.globl _P2_7
                                     86 	.globl _P2_6
                                     87 	.globl _P2_5
                                     88 	.globl _P2_4
                                     89 	.globl _P2_3
                                     90 	.globl _P2_2
                                     91 	.globl _P2_1
                                     92 	.globl _P2_0
                                     93 	.globl _SM0
                                     94 	.globl _SM1
                                     95 	.globl _SM2
                                     96 	.globl _REN
                                     97 	.globl _TB8
                                     98 	.globl _RB8
                                     99 	.globl _TI
                                    100 	.globl _RI
                                    101 	.globl _P1_7
                                    102 	.globl _P1_6
                                    103 	.globl _P1_5
                                    104 	.globl _P1_4
                                    105 	.globl _P1_3
                                    106 	.globl _P1_2
                                    107 	.globl _P1_1
                                    108 	.globl _P1_0
                                    109 	.globl _TF1
                                    110 	.globl _TR1
                                    111 	.globl _TF0
                                    112 	.globl _TR0
                                    113 	.globl _IE1
                                    114 	.globl _IT1
                                    115 	.globl _IE0
                                    116 	.globl _IT0
                                    117 	.globl _P0_7
                                    118 	.globl _P0_6
                                    119 	.globl _P0_5
                                    120 	.globl _P0_4
                                    121 	.globl _P0_3
                                    122 	.globl _P0_2
                                    123 	.globl _P0_1
                                    124 	.globl _P0_0
                                    125 	.globl _PWMFDCR
                                    126 	.globl _PWMIF
                                    127 	.globl _PWMCR
                                    128 	.globl _PWMCFG
                                    129 	.globl _CMPCR2
                                    130 	.globl _CMPCR1
                                    131 	.globl _CCAP2H
                                    132 	.globl _CCAP1H
                                    133 	.globl _CCAP0H
                                    134 	.globl _PCA_PWM2
                                    135 	.globl _PCA_PWM1
                                    136 	.globl _PCA_PWM0
                                    137 	.globl _CCAP2L
                                    138 	.globl _CCAP1L
                                    139 	.globl _CCAP0L
                                    140 	.globl _CCAPM2
                                    141 	.globl _CCAPM1
                                    142 	.globl _CCAPM0
                                    143 	.globl _CH
                                    144 	.globl _CL
                                    145 	.globl _CMOD
                                    146 	.globl _CCON
                                    147 	.globl _IAP_CONTR
                                    148 	.globl _IAP_TRIG
                                    149 	.globl _IAP_CMD
                                    150 	.globl _IAP_ADDRL
                                    151 	.globl _IAP_ADDRH
                                    152 	.globl _IAP_DATA
                                    153 	.globl _SPDAT
                                    154 	.globl _SPCTL
                                    155 	.globl _SPSTAT
                                    156 	.globl _ADC_RESL
                                    157 	.globl _ADC_RES
                                    158 	.globl _ADC_CONTR
                                    159 	.globl _SADEN
                                    160 	.globl _SADDR
                                    161 	.globl _S4BUF
                                    162 	.globl _S4CON
                                    163 	.globl _S3BUF
                                    164 	.globl _S3CON
                                    165 	.globl _S2BUF
                                    166 	.globl _S2CON
                                    167 	.globl _WDT_CONTR
                                    168 	.globl _WKTCH
                                    169 	.globl _WKTCL
                                    170 	.globl _T2L
                                    171 	.globl _T2H
                                    172 	.globl _T3L
                                    173 	.globl _T3H
                                    174 	.globl _T4L
                                    175 	.globl _T4H
                                    176 	.globl _T3T4M
                                    177 	.globl _T4T3M
                                    178 	.globl _INT_CLKO
                                    179 	.globl _IP2
                                    180 	.globl _IE2
                                    181 	.globl _P_SW2
                                    182 	.globl _P1ASF
                                    183 	.globl _BUS_SPEED
                                    184 	.globl _CLK_DIV
                                    185 	.globl _P_SW1
                                    186 	.globl _AUXR1
                                    187 	.globl _AUXR
                                    188 	.globl _P7M1
                                    189 	.globl _P7M0
                                    190 	.globl _P6M1
                                    191 	.globl _P6M0
                                    192 	.globl _P5M1
                                    193 	.globl _P5M0
                                    194 	.globl _P4M1
                                    195 	.globl _P4M0
                                    196 	.globl _P3M1
                                    197 	.globl _P3M0
                                    198 	.globl _P2M1
                                    199 	.globl _P2M0
                                    200 	.globl _P1M1
                                    201 	.globl _P1M0
                                    202 	.globl _P0M1
                                    203 	.globl _P0M0
                                    204 	.globl _P5
                                    205 	.globl _P4
                                    206 	.globl _B
                                    207 	.globl _ACC
                                    208 	.globl _PSW
                                    209 	.globl _IP
                                    210 	.globl _P3
                                    211 	.globl _IE
                                    212 	.globl _P2
                                    213 	.globl _SBUF
                                    214 	.globl _SCON
                                    215 	.globl _P1
                                    216 	.globl _TH1
                                    217 	.globl _TH0
                                    218 	.globl _TL1
                                    219 	.globl _TL0
                                    220 	.globl _TMOD
                                    221 	.globl _TCON
                                    222 	.globl _PCON
                                    223 	.globl _DPH
                                    224 	.globl _DPL
                                    225 	.globl _SP
                                    226 	.globl _P0
                                    227 	.globl _tm2d
                                    228 	.globl _tm2c
                                    229 	.globl _tm2f
                                    230 	.globl _Flicka_PARM_2
                                    231 ;--------------------------------------------------------
                                    232 ; special function registers
                                    233 ;--------------------------------------------------------
                                    234 	.area RSEG    (ABS,DATA)
      000000                        235 	.org 0x0000
                           000080   236 _P0	=	0x0080
                           000081   237 _SP	=	0x0081
                           000082   238 _DPL	=	0x0082
                           000083   239 _DPH	=	0x0083
                           000087   240 _PCON	=	0x0087
                           000088   241 _TCON	=	0x0088
                           000089   242 _TMOD	=	0x0089
                           00008A   243 _TL0	=	0x008a
                           00008B   244 _TL1	=	0x008b
                           00008C   245 _TH0	=	0x008c
                           00008D   246 _TH1	=	0x008d
                           000090   247 _P1	=	0x0090
                           000098   248 _SCON	=	0x0098
                           000099   249 _SBUF	=	0x0099
                           0000A0   250 _P2	=	0x00a0
                           0000A8   251 _IE	=	0x00a8
                           0000B0   252 _P3	=	0x00b0
                           0000B8   253 _IP	=	0x00b8
                           0000D0   254 _PSW	=	0x00d0
                           0000E0   255 _ACC	=	0x00e0
                           0000F0   256 _B	=	0x00f0
                           0000C0   257 _P4	=	0x00c0
                           0000C8   258 _P5	=	0x00c8
                           000094   259 _P0M0	=	0x0094
                           000093   260 _P0M1	=	0x0093
                           000092   261 _P1M0	=	0x0092
                           000091   262 _P1M1	=	0x0091
                           000096   263 _P2M0	=	0x0096
                           000095   264 _P2M1	=	0x0095
                           0000B2   265 _P3M0	=	0x00b2
                           0000B1   266 _P3M1	=	0x00b1
                           0000B4   267 _P4M0	=	0x00b4
                           0000B3   268 _P4M1	=	0x00b3
                           0000CA   269 _P5M0	=	0x00ca
                           0000C9   270 _P5M1	=	0x00c9
                           0000CC   271 _P6M0	=	0x00cc
                           0000CB   272 _P6M1	=	0x00cb
                           0000E2   273 _P7M0	=	0x00e2
                           0000E1   274 _P7M1	=	0x00e1
                           00008E   275 _AUXR	=	0x008e
                           0000A2   276 _AUXR1	=	0x00a2
                           0000A2   277 _P_SW1	=	0x00a2
                           000097   278 _CLK_DIV	=	0x0097
                           0000A1   279 _BUS_SPEED	=	0x00a1
                           00009D   280 _P1ASF	=	0x009d
                           0000BA   281 _P_SW2	=	0x00ba
                           0000AF   282 _IE2	=	0x00af
                           0000B5   283 _IP2	=	0x00b5
                           00008F   284 _INT_CLKO	=	0x008f
                           0000D1   285 _T4T3M	=	0x00d1
                           0000D1   286 _T3T4M	=	0x00d1
                           0000D2   287 _T4H	=	0x00d2
                           0000D3   288 _T4L	=	0x00d3
                           0000D4   289 _T3H	=	0x00d4
                           0000D5   290 _T3L	=	0x00d5
                           0000D6   291 _T2H	=	0x00d6
                           0000D7   292 _T2L	=	0x00d7
                           0000AA   293 _WKTCL	=	0x00aa
                           0000AB   294 _WKTCH	=	0x00ab
                           0000C1   295 _WDT_CONTR	=	0x00c1
                           00009A   296 _S2CON	=	0x009a
                           00009B   297 _S2BUF	=	0x009b
                           0000AC   298 _S3CON	=	0x00ac
                           0000AD   299 _S3BUF	=	0x00ad
                           000084   300 _S4CON	=	0x0084
                           000085   301 _S4BUF	=	0x0085
                           0000A9   302 _SADDR	=	0x00a9
                           0000B9   303 _SADEN	=	0x00b9
                           0000BC   304 _ADC_CONTR	=	0x00bc
                           0000BD   305 _ADC_RES	=	0x00bd
                           0000BE   306 _ADC_RESL	=	0x00be
                           0000CD   307 _SPSTAT	=	0x00cd
                           0000CE   308 _SPCTL	=	0x00ce
                           0000CF   309 _SPDAT	=	0x00cf
                           0000C2   310 _IAP_DATA	=	0x00c2
                           0000C3   311 _IAP_ADDRH	=	0x00c3
                           0000C4   312 _IAP_ADDRL	=	0x00c4
                           0000C5   313 _IAP_CMD	=	0x00c5
                           0000C6   314 _IAP_TRIG	=	0x00c6
                           0000C7   315 _IAP_CONTR	=	0x00c7
                           0000D8   316 _CCON	=	0x00d8
                           0000D9   317 _CMOD	=	0x00d9
                           0000E9   318 _CL	=	0x00e9
                           0000F9   319 _CH	=	0x00f9
                           0000DA   320 _CCAPM0	=	0x00da
                           0000DB   321 _CCAPM1	=	0x00db
                           0000DC   322 _CCAPM2	=	0x00dc
                           0000EA   323 _CCAP0L	=	0x00ea
                           0000EB   324 _CCAP1L	=	0x00eb
                           0000EC   325 _CCAP2L	=	0x00ec
                           0000F2   326 _PCA_PWM0	=	0x00f2
                           0000F3   327 _PCA_PWM1	=	0x00f3
                           0000F4   328 _PCA_PWM2	=	0x00f4
                           0000FA   329 _CCAP0H	=	0x00fa
                           0000FB   330 _CCAP1H	=	0x00fb
                           0000FC   331 _CCAP2H	=	0x00fc
                           0000E6   332 _CMPCR1	=	0x00e6
                           0000E7   333 _CMPCR2	=	0x00e7
                           0000F1   334 _PWMCFG	=	0x00f1
                           0000F5   335 _PWMCR	=	0x00f5
                           0000F6   336 _PWMIF	=	0x00f6
                           0000F7   337 _PWMFDCR	=	0x00f7
                                    338 ;--------------------------------------------------------
                                    339 ; special function bits
                                    340 ;--------------------------------------------------------
                                    341 	.area RSEG    (ABS,DATA)
      000000                        342 	.org 0x0000
                           000080   343 _P0_0	=	0x0080
                           000081   344 _P0_1	=	0x0081
                           000082   345 _P0_2	=	0x0082
                           000083   346 _P0_3	=	0x0083
                           000084   347 _P0_4	=	0x0084
                           000085   348 _P0_5	=	0x0085
                           000086   349 _P0_6	=	0x0086
                           000087   350 _P0_7	=	0x0087
                           000088   351 _IT0	=	0x0088
                           000089   352 _IE0	=	0x0089
                           00008A   353 _IT1	=	0x008a
                           00008B   354 _IE1	=	0x008b
                           00008C   355 _TR0	=	0x008c
                           00008D   356 _TF0	=	0x008d
                           00008E   357 _TR1	=	0x008e
                           00008F   358 _TF1	=	0x008f
                           000090   359 _P1_0	=	0x0090
                           000091   360 _P1_1	=	0x0091
                           000092   361 _P1_2	=	0x0092
                           000093   362 _P1_3	=	0x0093
                           000094   363 _P1_4	=	0x0094
                           000095   364 _P1_5	=	0x0095
                           000096   365 _P1_6	=	0x0096
                           000097   366 _P1_7	=	0x0097
                           000098   367 _RI	=	0x0098
                           000099   368 _TI	=	0x0099
                           00009A   369 _RB8	=	0x009a
                           00009B   370 _TB8	=	0x009b
                           00009C   371 _REN	=	0x009c
                           00009D   372 _SM2	=	0x009d
                           00009E   373 _SM1	=	0x009e
                           00009F   374 _SM0	=	0x009f
                           0000A0   375 _P2_0	=	0x00a0
                           0000A1   376 _P2_1	=	0x00a1
                           0000A2   377 _P2_2	=	0x00a2
                           0000A3   378 _P2_3	=	0x00a3
                           0000A4   379 _P2_4	=	0x00a4
                           0000A5   380 _P2_5	=	0x00a5
                           0000A6   381 _P2_6	=	0x00a6
                           0000A7   382 _P2_7	=	0x00a7
                           0000A8   383 _EX0	=	0x00a8
                           0000A9   384 _ET0	=	0x00a9
                           0000AA   385 _EX1	=	0x00aa
                           0000AB   386 _ET1	=	0x00ab
                           0000AC   387 _ES	=	0x00ac
                           0000AF   388 _EA	=	0x00af
                           0000B0   389 _P3_0	=	0x00b0
                           0000B1   390 _P3_1	=	0x00b1
                           0000B2   391 _P3_2	=	0x00b2
                           0000B3   392 _P3_3	=	0x00b3
                           0000B4   393 _P3_4	=	0x00b4
                           0000B5   394 _P3_5	=	0x00b5
                           0000B6   395 _P3_6	=	0x00b6
                           0000B7   396 _P3_7	=	0x00b7
                           0000B0   397 _RXD	=	0x00b0
                           0000B1   398 _TXD	=	0x00b1
                           0000B2   399 _INT0	=	0x00b2
                           0000B3   400 _INT1	=	0x00b3
                           0000B4   401 _T0	=	0x00b4
                           0000B5   402 _T1	=	0x00b5
                           0000B6   403 _WR	=	0x00b6
                           0000B7   404 _RD	=	0x00b7
                           0000B8   405 _PX0	=	0x00b8
                           0000B9   406 _PT0	=	0x00b9
                           0000BA   407 _PX1	=	0x00ba
                           0000BB   408 _PT1	=	0x00bb
                           0000BC   409 _PS	=	0x00bc
                           0000D0   410 _P	=	0x00d0
                           0000D1   411 _F1	=	0x00d1
                           0000D2   412 _OV	=	0x00d2
                           0000D3   413 _RS0	=	0x00d3
                           0000D4   414 _RS1	=	0x00d4
                           0000D5   415 _F0	=	0x00d5
                           0000D6   416 _AC	=	0x00d6
                           0000D7   417 _CY	=	0x00d7
                           0000C0   418 _P4_0	=	0x00c0
                           0000C1   419 _P4_1	=	0x00c1
                           0000C2   420 _P4_2	=	0x00c2
                           0000C3   421 _P4_3	=	0x00c3
                           0000C4   422 _P4_4	=	0x00c4
                           0000C5   423 _P4_5	=	0x00c5
                           0000C6   424 _P4_6	=	0x00c6
                           0000C7   425 _P4_7	=	0x00c7
                           0000C8   426 _P5_0	=	0x00c8
                           0000C9   427 _P5_1	=	0x00c9
                           0000CA   428 _P5_2	=	0x00ca
                           0000CB   429 _P5_3	=	0x00cb
                           0000CC   430 _P5_4	=	0x00cc
                           0000CD   431 _P5_5	=	0x00cd
                           0000CE   432 _P5_6	=	0x00ce
                           0000CF   433 _P5_7	=	0x00cf
                           0000AE   434 _ELVD	=	0x00ae
                           0000AD   435 _EADC	=	0x00ad
                           0000BF   436 _PPCA	=	0x00bf
                           0000BE   437 _PLVD	=	0x00be
                           0000BD   438 _PADC	=	0x00bd
                           0000DF   439 _CF	=	0x00df
                           0000DE   440 _CR	=	0x00de
                           0000DA   441 _CCF2	=	0x00da
                           0000D9   442 _CCF1	=	0x00d9
                           0000D8   443 _CCF0	=	0x00d8
                                    444 ;--------------------------------------------------------
                                    445 ; overlayable register banks
                                    446 ;--------------------------------------------------------
                                    447 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        448 	.ds 8
                                    449 ;--------------------------------------------------------
                                    450 ; overlayable bit register bank
                                    451 ;--------------------------------------------------------
                                    452 	.area BIT_BANK	(REL,OVR,DATA)
      000020                        453 bits:
      000020                        454 	.ds 1
                           008000   455 	b0 = bits[0]
                           008100   456 	b1 = bits[1]
                           008200   457 	b2 = bits[2]
                           008300   458 	b3 = bits[3]
                           008400   459 	b4 = bits[4]
                           008500   460 	b5 = bits[5]
                           008600   461 	b6 = bits[6]
                           008700   462 	b7 = bits[7]
                                    463 ;--------------------------------------------------------
                                    464 ; internal ram data
                                    465 ;--------------------------------------------------------
                                    466 	.area DSEG    (DATA)
      000008                        467 _Flicka_PARM_2:
      000008                        468 	.ds 1
      000009                        469 _tm2f::
      000009                        470 	.ds 1
      00000A                        471 _tm2c::
      00000A                        472 	.ds 1
      00000B                        473 _tm2d::
      00000B                        474 	.ds 1
                                    475 ;--------------------------------------------------------
                                    476 ; overlayable items in internal ram 
                                    477 ;--------------------------------------------------------
                                    478 	.area	OSEG    (OVR,DATA)
                                    479 	.area	OSEG    (OVR,DATA)
                                    480 ;--------------------------------------------------------
                                    481 ; Stack segment in internal ram 
                                    482 ;--------------------------------------------------------
                                    483 	.area	SSEG
      000021                        484 __start__stack:
      000021                        485 	.ds	1
                                    486 
                                    487 ;--------------------------------------------------------
                                    488 ; indirectly addressable internal ram data
                                    489 ;--------------------------------------------------------
                                    490 	.area ISEG    (DATA)
                                    491 ;--------------------------------------------------------
                                    492 ; absolute internal ram data
                                    493 ;--------------------------------------------------------
                                    494 	.area IABS    (ABS,DATA)
                                    495 	.area IABS    (ABS,DATA)
                                    496 ;--------------------------------------------------------
                                    497 ; bit data
                                    498 ;--------------------------------------------------------
                                    499 	.area BSEG    (BIT)
                                    500 ;--------------------------------------------------------
                                    501 ; paged external ram data
                                    502 ;--------------------------------------------------------
                                    503 	.area PSEG    (PAG,XDATA)
                                    504 ;--------------------------------------------------------
                                    505 ; external ram data
                                    506 ;--------------------------------------------------------
                                    507 	.area XSEG    (XDATA)
                                    508 ;--------------------------------------------------------
                                    509 ; absolute external ram data
                                    510 ;--------------------------------------------------------
                                    511 	.area XABS    (ABS,XDATA)
                                    512 ;--------------------------------------------------------
                                    513 ; external initialized ram data
                                    514 ;--------------------------------------------------------
                                    515 	.area XISEG   (XDATA)
                                    516 	.area HOME    (CODE)
                                    517 	.area GSINIT0 (CODE)
                                    518 	.area GSINIT1 (CODE)
                                    519 	.area GSINIT2 (CODE)
                                    520 	.area GSINIT3 (CODE)
                                    521 	.area GSINIT4 (CODE)
                                    522 	.area GSINIT5 (CODE)
                                    523 	.area GSINIT  (CODE)
                                    524 	.area GSFINAL (CODE)
                                    525 	.area CSEG    (CODE)
                                    526 ;--------------------------------------------------------
                                    527 ; interrupt vector 
                                    528 ;--------------------------------------------------------
                                    529 	.area HOME    (CODE)
      000000                        530 __interrupt_vect:
      000000 02 00 69         [24]  531 	ljmp	__sdcc_gsinit_startup
      000003 32               [24]  532 	reti
      000004                        533 	.ds	7
      00000B 32               [24]  534 	reti
      00000C                        535 	.ds	7
      000013 32               [24]  536 	reti
      000014                        537 	.ds	7
      00001B 32               [24]  538 	reti
      00001C                        539 	.ds	7
      000023 32               [24]  540 	reti
      000024                        541 	.ds	7
      00002B 32               [24]  542 	reti
      00002C                        543 	.ds	7
      000033 32               [24]  544 	reti
      000034                        545 	.ds	7
      00003B 32               [24]  546 	reti
      00003C                        547 	.ds	7
      000043 32               [24]  548 	reti
      000044                        549 	.ds	7
      00004B 32               [24]  550 	reti
      00004C                        551 	.ds	7
      000053 32               [24]  552 	reti
      000054                        553 	.ds	7
      00005B 32               [24]  554 	reti
      00005C                        555 	.ds	7
      000063 02 01 11         [24]  556 	ljmp	_timer2_isr
                                    557 ;--------------------------------------------------------
                                    558 ; global & static initialisations
                                    559 ;--------------------------------------------------------
                                    560 	.area HOME    (CODE)
                                    561 	.area GSINIT  (CODE)
                                    562 	.area GSFINAL (CODE)
                                    563 	.area GSINIT  (CODE)
                                    564 	.globl __sdcc_gsinit_startup
                                    565 	.globl __sdcc_program_startup
                                    566 	.globl __start__stack
                                    567 	.globl __mcs51_genXINIT
                                    568 	.globl __mcs51_genXRAMCLEAR
                                    569 	.globl __mcs51_genRAMCLEAR
                                    570 ;	led.c:19: volatile uchar tm2f = 0;
      0000C2 75 09 00         [24]  571 	mov	_tm2f,#0x00
                                    572 ;	led.c:20: volatile uchar tm2c = 0;
      0000C5 75 0A 00         [24]  573 	mov	_tm2c,#0x00
                                    574 ;	led.c:21: volatile uchar tm2d = 0;
      0000C8 75 0B 00         [24]  575 	mov	_tm2d,#0x00
                                    576 	.area GSFINAL (CODE)
      0000CB 02 00 66         [24]  577 	ljmp	__sdcc_program_startup
                                    578 ;--------------------------------------------------------
                                    579 ; Home
                                    580 ;--------------------------------------------------------
                                    581 	.area HOME    (CODE)
                                    582 	.area HOME    (CODE)
      000066                        583 __sdcc_program_startup:
      000066 02 01 D5         [24]  584 	ljmp	_main
                                    585 ;	return from main will return to caller
                                    586 ;--------------------------------------------------------
                                    587 ; code
                                    588 ;--------------------------------------------------------
                                    589 	.area CSEG    (CODE)
                                    590 ;------------------------------------------------------------
                                    591 ;Allocation info for local variables in function 'dlay'
                                    592 ;------------------------------------------------------------
                                    593 ;wt                        Allocated to registers 
                                    594 ;tt                        Allocated to registers r5 r6 
                                    595 ;------------------------------------------------------------
                                    596 ;	led.c:8: void dlay(unsigned char wt){
                                    597 ;	-----------------------------------------
                                    598 ;	 function dlay
                                    599 ;	-----------------------------------------
      0000CE                        600 _dlay:
                           000007   601 	ar7 = 0x07
                           000006   602 	ar6 = 0x06
                           000005   603 	ar5 = 0x05
                           000004   604 	ar4 = 0x04
                           000003   605 	ar3 = 0x03
                           000002   606 	ar2 = 0x02
                           000001   607 	ar1 = 0x01
                           000000   608 	ar0 = 0x00
      0000CE AF 82            [24]  609 	mov	r7,dpl
                                    610 ;	led.c:10: while((wt--)!=0)
      0000D0                        611 00102$:
      0000D0 8F 06            [24]  612 	mov	ar6,r7
      0000D2 1F               [12]  613 	dec	r7
      0000D3 EE               [12]  614 	mov	a,r6
      0000D4 60 0F            [24]  615 	jz	00108$
                                    616 ;	led.c:11: for(tt=0; tt<0xfff; tt++) ;
      0000D6 7D FF            [12]  617 	mov	r5,#0xff
      0000D8 7E 0F            [12]  618 	mov	r6,#0x0f
      0000DA                        619 00107$:
      0000DA 1D               [12]  620 	dec	r5
      0000DB BD FF 01         [24]  621 	cjne	r5,#0xff,00129$
      0000DE 1E               [12]  622 	dec	r6
      0000DF                        623 00129$:
      0000DF ED               [12]  624 	mov	a,r5
      0000E0 4E               [12]  625 	orl	a,r6
      0000E1 70 F7            [24]  626 	jnz	00107$
      0000E3 80 EB            [24]  627 	sjmp	00102$
      0000E5                        628 00108$:
                                    629 ;	led.c:12: }
      0000E5 22               [24]  630 	ret
                                    631 ;------------------------------------------------------------
                                    632 ;Allocation info for local variables in function 'Flicka'
                                    633 ;------------------------------------------------------------
                                    634 ;wt                        Allocated with name '_Flicka_PARM_2'
                                    635 ;ct                        Allocated to registers r7 
                                    636 ;lp                        Allocated to registers r6 
                                    637 ;------------------------------------------------------------
                                    638 ;	led.c:14: void Flicka(uchar ct, uchar wt){
                                    639 ;	-----------------------------------------
                                    640 ;	 function Flicka
                                    641 ;	-----------------------------------------
      0000E6                        642 _Flicka:
      0000E6 AF 82            [24]  643 	mov	r7,dpl
                                    644 ;	led.c:16: for(lp=0; lp<ct; lp++) { P1_0 ^= 1;dlay(wt);}
      0000E8 7E 00            [12]  645 	mov	r6,#0x00
      0000EA                        646 00103$:
      0000EA C3               [12]  647 	clr	c
      0000EB EE               [12]  648 	mov	a,r6
      0000EC 9F               [12]  649 	subb	a,r7
      0000ED 50 13            [24]  650 	jnc	00105$
      0000EF B2 90            [12]  651 	cpl	_P1_0
      0000F1 85 08 82         [24]  652 	mov	dpl,_Flicka_PARM_2
      0000F4 C0 07            [24]  653 	push	ar7
      0000F6 C0 06            [24]  654 	push	ar6
      0000F8 12 00 CE         [24]  655 	lcall	_dlay
      0000FB D0 06            [24]  656 	pop	ar6
      0000FD D0 07            [24]  657 	pop	ar7
      0000FF 0E               [12]  658 	inc	r6
      000100 80 E8            [24]  659 	sjmp	00103$
      000102                        660 00105$:
                                    661 ;	led.c:17: }
      000102 22               [24]  662 	ret
                                    663 ;------------------------------------------------------------
                                    664 ;Allocation info for local variables in function 'seg_opr'
                                    665 ;------------------------------------------------------------
                                    666 ;	led.c:22: void seg_opr(){	// 436Hz?
                                    667 ;	-----------------------------------------
                                    668 ;	 function seg_opr
                                    669 ;	-----------------------------------------
      000103                        670 _seg_opr:
                                    671 ;	led.c:23: P1_0 ^= 1;
      000103 B2 90            [12]  672 	cpl	_P1_0
                                    673 ;	led.c:24: tm2c += 1; if(tm2c==0) P1_1 ^= 1;
      000105 E5 0A            [12]  674 	mov	a,_tm2c
      000107 04               [12]  675 	inc	a
      000108 F5 0A            [12]  676 	mov	_tm2c,a
      00010A E5 0A            [12]  677 	mov	a,_tm2c
      00010C 70 02            [24]  678 	jnz	00103$
      00010E B2 91            [12]  679 	cpl	_P1_1
      000110                        680 00103$:
                                    681 ;	led.c:25: }
      000110 22               [24]  682 	ret
                                    683 ;------------------------------------------------------------
                                    684 ;Allocation info for local variables in function 'timer2_isr'
                                    685 ;------------------------------------------------------------
                                    686 ;	led.c:27: void timer2_isr(void) __interrupt(12) {
                                    687 ;	-----------------------------------------
                                    688 ;	 function timer2_isr
                                    689 ;	-----------------------------------------
      000111                        690 _timer2_isr:
      000111 C0 20            [24]  691 	push	bits
      000113 C0 E0            [24]  692 	push	acc
      000115 C0 F0            [24]  693 	push	b
      000117 C0 82            [24]  694 	push	dpl
      000119 C0 83            [24]  695 	push	dph
      00011B C0 07            [24]  696 	push	(0+7)
      00011D C0 06            [24]  697 	push	(0+6)
      00011F C0 05            [24]  698 	push	(0+5)
      000121 C0 04            [24]  699 	push	(0+4)
      000123 C0 03            [24]  700 	push	(0+3)
      000125 C0 02            [24]  701 	push	(0+2)
      000127 C0 01            [24]  702 	push	(0+1)
      000129 C0 00            [24]  703 	push	(0+0)
      00012B C0 D0            [24]  704 	push	psw
      00012D 75 D0 00         [24]  705 	mov	psw,#0x00
                                    706 ;	led.c:29: tm2d += 1; if(tm2d==0) seg_opr();
      000130 E5 0B            [12]  707 	mov	a,_tm2d
      000132 04               [12]  708 	inc	a
      000133 F5 0B            [12]  709 	mov	_tm2d,a
      000135 E5 0B            [12]  710 	mov	a,_tm2d
      000137 70 03            [24]  711 	jnz	00102$
      000139 12 01 03         [24]  712 	lcall	_seg_opr
      00013C                        713 00102$:
                                    714 ;	led.c:32: __endasm;
                                    715 ;	led.c:34: }
      00013C D0 D0            [24]  716 	pop	psw
      00013E D0 00            [24]  717 	pop	(0+0)
      000140 D0 01            [24]  718 	pop	(0+1)
      000142 D0 02            [24]  719 	pop	(0+2)
      000144 D0 03            [24]  720 	pop	(0+3)
      000146 D0 04            [24]  721 	pop	(0+4)
      000148 D0 05            [24]  722 	pop	(0+5)
      00014A D0 06            [24]  723 	pop	(0+6)
      00014C D0 07            [24]  724 	pop	(0+7)
      00014E D0 83            [24]  725 	pop	dph
      000150 D0 82            [24]  726 	pop	dpl
      000152 D0 F0            [24]  727 	pop	b
      000154 D0 E0            [24]  728 	pop	acc
      000156 D0 20            [24]  729 	pop	bits
      000158 32               [24]  730 	reti
                                    731 ;------------------------------------------------------------
                                    732 ;Allocation info for local variables in function 'set_TM2'
                                    733 ;------------------------------------------------------------
                                    734 ;	led.c:38: void set_TM2(){	// Timer 2
                                    735 ;	-----------------------------------------
                                    736 ;	 function set_TM2
                                    737 ;	-----------------------------------------
      000159                        738 _set_TM2:
                                    739 ;	led.c:39: AUXR = 0x00; // Enable Write [T2L, T2H] & [RL_TL2, RL_TH2]
      000159 75 8E 00         [24]  740 	mov	_AUXR,#0x00
                                    741 ;	led.c:40: T2L  = (unsigned char)(65536 - (FOSC/4/BAUD));   //Set auto-reload vaule
      00015C 75 D7 E8         [24]  742 	mov	_T2L,#0xe8
                                    743 ;	led.c:41: T2H  = 0xff;//(65536 - (FOSC/4/BAUD))>>8;
      00015F 75 D6 FF         [24]  744 	mov	_T2H,#0xff
                                    745 ;	led.c:42: AUXR = 0x14; //B4:T2R B2:T2x12 T2 in 1T mode, strat up Timer 2
      000162 75 8E 14         [24]  746 	mov	_AUXR,#0x14
                                    747 ;	led.c:44: EA = 1; 			// (IE) enable all interrupts
                                    748 ;	assignBit
      000165 D2 AF            [12]  749 	setb	_EA
                                    750 ;	led.c:45: IE2 = 0x04;	// Timer 2 interrupt enable
      000167 75 AF 04         [24]  751 	mov	_IE2,#0x04
                                    752 ;	led.c:46: }
      00016A 22               [24]  753 	ret
                                    754 ;------------------------------------------------------------
                                    755 ;Allocation info for local variables in function 'init_uart'
                                    756 ;------------------------------------------------------------
                                    757 ;	led.c:48: void init_uart(){
                                    758 ;	-----------------------------------------
                                    759 ;	 function init_uart
                                    760 ;	-----------------------------------------
      00016B                        761 _init_uart:
                                    762 ;	led.c:49: SCON = 0x5A;	//8-bit variable UART
      00016B 75 98 5A         [24]  763 	mov	_SCON,#0x5a
                                    764 ;	led.c:50: AUXR = 0x00;
      00016E 75 8E 00         [24]  765 	mov	_AUXR,#0x00
                                    766 ;	led.c:51: T2L  = (unsigned char)(65536 - (FOSC/4/BAUD));   //Set auto-reload vaule
      000171 75 D7 E8         [24]  767 	mov	_T2L,#0xe8
                                    768 ;	led.c:52: T2H  = 0xff;//(65536 - (FOSC/4/BAUD))>>8;
      000174 75 D6 FF         [24]  769 	mov	_T2H,#0xff
                                    770 ;	led.c:53: AUXR = 0x14; //T2 in 1T mode, strat up Timer 2
      000177 75 8E 14         [24]  771 	mov	_AUXR,#0x14
                                    772 ;	led.c:54: AUXR |= 0x01; //Timer 2 as baud-rate Generator of UART1
      00017A 43 8E 01         [24]  773 	orl	_AUXR,#0x01
                                    774 ;	led.c:56: EA = 1; 			// (IE) enable all interrupts
                                    775 ;	assignBit
      00017D D2 AF            [12]  776 	setb	_EA
                                    777 ;	led.c:57: IE2 = 0x04;	// Timer 2 interrupt enable
      00017F 75 AF 04         [24]  778 	mov	_IE2,#0x04
                                    779 ;	led.c:58: }
      000182 22               [24]  780 	ret
                                    781 ;------------------------------------------------------------
                                    782 ;Allocation info for local variables in function 'wait_TM2'
                                    783 ;------------------------------------------------------------
                                    784 ;	led.c:60: void wait_TM2(){
                                    785 ;	-----------------------------------------
                                    786 ;	 function wait_TM2
                                    787 ;	-----------------------------------------
      000183                        788 _wait_TM2:
                                    789 ;	led.c:61: tm2f = 0;
      000183 75 09 00         [24]  790 	mov	_tm2f,#0x00
                                    791 ;	led.c:62: set_TM2();
      000186 12 01 59         [24]  792 	lcall	_set_TM2
                                    793 ;	led.c:63: while(tm2f==0) ;
      000189                        794 00101$:
      000189 E5 09            [12]  795 	mov	a,_tm2f
      00018B 60 FC            [24]  796 	jz	00101$
                                    797 ;	led.c:64: }
      00018D 22               [24]  798 	ret
                                    799 ;------------------------------------------------------------
                                    800 ;Allocation info for local variables in function 'wait_TM0'
                                    801 ;------------------------------------------------------------
                                    802 ;	led.c:66: void wait_TM0(){	// Timer 0
                                    803 ;	-----------------------------------------
                                    804 ;	 function wait_TM0
                                    805 ;	-----------------------------------------
      00018E                        806 _wait_TM0:
                                    807 ;	led.c:67: TCON &= ~(TCON & 0x30);	// TM0 TR0=0 TF0=0 stop & clear overflow
      00018E E5 88            [12]  808 	mov	a,_TCON
      000190 54 30            [12]  809 	anl	a,#0x30
      000192 F4               [12]  810 	cpl	a
      000193 FF               [12]  811 	mov	r7,a
      000194 52 88            [12]  812 	anl	_TCON,a
                                    813 ;	led.c:68: TMOD = 0x01; 			// TM0 Mode 1: 16-bit Timer/Counter
      000196 75 89 01         [24]  814 	mov	_TMOD,#0x01
                                    815 ;	led.c:69: TL0 = 0x00;
      000199 75 8A 00         [24]  816 	mov	_TL0,#0x00
                                    817 ;	led.c:70: TH0 = 0x00;
      00019C 75 8C 00         [24]  818 	mov	_TH0,#0x00
                                    819 ;	led.c:71: TCON |= 0x10; 					// TR0: start counting
      00019F 43 88 10         [24]  820 	orl	_TCON,#0x10
                                    821 ;	led.c:72: while((TCON & 0x20) != 0x20);	// TF0: Timer/Counter 0 Overflow Flag
      0001A2                        822 00101$:
      0001A2 AE 88            [24]  823 	mov	r6,_TCON
      0001A4 53 06 20         [24]  824 	anl	ar6,#0x20
      0001A7 7F 00            [12]  825 	mov	r7,#0x00
      0001A9 BE 20 F6         [24]  826 	cjne	r6,#0x20,00101$
      0001AC BF 00 F3         [24]  827 	cjne	r7,#0x00,00101$
                                    828 ;	led.c:73: }
      0001AF 22               [24]  829 	ret
                                    830 ;------------------------------------------------------------
                                    831 ;Allocation info for local variables in function 'wait_TM'
                                    832 ;------------------------------------------------------------
                                    833 ;wt                        Allocated to registers 
                                    834 ;------------------------------------------------------------
                                    835 ;	led.c:75: void wait_TM(uchar wt){
                                    836 ;	-----------------------------------------
                                    837 ;	 function wait_TM
                                    838 ;	-----------------------------------------
      0001B0                        839 _wait_TM:
      0001B0 AF 82            [24]  840 	mov	r7,dpl
                                    841 ;	led.c:76: while((wt--)!=0){
      0001B2                        842 00101$:
      0001B2 8F 06            [24]  843 	mov	ar6,r7
      0001B4 1F               [12]  844 	dec	r7
      0001B5 EE               [12]  845 	mov	a,r6
      0001B6 60 09            [24]  846 	jz	00104$
                                    847 ;	led.c:78: wait_TM2();
      0001B8 C0 07            [24]  848 	push	ar7
      0001BA 12 01 83         [24]  849 	lcall	_wait_TM2
      0001BD D0 07            [24]  850 	pop	ar7
      0001BF 80 F1            [24]  851 	sjmp	00101$
      0001C1                        852 00104$:
                                    853 ;	led.c:80: }
      0001C1 22               [24]  854 	ret
                                    855 ;------------------------------------------------------------
                                    856 ;Allocation info for local variables in function 'tx_uart'
                                    857 ;------------------------------------------------------------
                                    858 ;ch                        Allocated to registers r7 
                                    859 ;------------------------------------------------------------
                                    860 ;	led.c:82: void tx_uart( char ch){
                                    861 ;	-----------------------------------------
                                    862 ;	 function tx_uart
                                    863 ;	-----------------------------------------
      0001C2                        864 _tx_uart:
      0001C2 AF 82            [24]  865 	mov	r7,dpl
                                    866 ;	led.c:83: while (!TI);
      0001C4                        867 00101$:
                                    868 ;	led.c:84: TI = 0;
                                    869 ;	assignBit
      0001C4 10 99 02         [24]  870 	jbc	_TI,00114$
      0001C7 80 FB            [24]  871 	sjmp	00101$
      0001C9                        872 00114$:
                                    873 ;	led.c:85: SBUF = ch;
      0001C9 8F 99            [24]  874 	mov	_SBUF,r7
                                    875 ;	led.c:86: }
      0001CB 22               [24]  876 	ret
                                    877 ;------------------------------------------------------------
                                    878 ;Allocation info for local variables in function 'rx_uart'
                                    879 ;------------------------------------------------------------
                                    880 ;	led.c:87: char rx_uart(){
                                    881 ;	-----------------------------------------
                                    882 ;	 function rx_uart
                                    883 ;	-----------------------------------------
      0001CC                        884 _rx_uart:
                                    885 ;	led.c:88: while(!RI);
      0001CC                        886 00101$:
                                    887 ;	led.c:89: RI= 0;
                                    888 ;	assignBit
      0001CC 10 98 02         [24]  889 	jbc	_RI,00114$
      0001CF 80 FB            [24]  890 	sjmp	00101$
      0001D1                        891 00114$:
                                    892 ;	led.c:90: return SBUF;
      0001D1 85 99 82         [24]  893 	mov	dpl,_SBUF
                                    894 ;	led.c:91: }
      0001D4 22               [24]  895 	ret
                                    896 ;------------------------------------------------------------
                                    897 ;Allocation info for local variables in function 'main'
                                    898 ;------------------------------------------------------------
                                    899 ;	led.c:93: void main()	// LED
                                    900 ;	-----------------------------------------
                                    901 ;	 function main
                                    902 ;	-----------------------------------------
      0001D5                        903 _main:
                                    904 ;	led.c:95: while(1) {
      0001D5                        905 00102$:
                                    906 ;	led.c:96: Flicka(10,20); 
      0001D5 75 08 14         [24]  907 	mov	_Flicka_PARM_2,#0x14
      0001D8 75 82 0A         [24]  908 	mov	dpl,#0x0a
      0001DB 12 00 E6         [24]  909 	lcall	_Flicka
                                    910 ;	led.c:97: P1_0 ^= 1; dlay(1000);
      0001DE B2 90            [12]  911 	cpl	_P1_0
      0001E0 75 82 E8         [24]  912 	mov	dpl,#0xe8
      0001E3 12 00 CE         [24]  913 	lcall	_dlay
                                    914 ;	led.c:100: }
      0001E6 80 ED            [24]  915 	sjmp	00102$
                                    916 ;------------------------------------------------------------
                                    917 ;Allocation info for local variables in function 'main2'
                                    918 ;------------------------------------------------------------
                                    919 ;ch                        Allocated to registers 
                                    920 ;------------------------------------------------------------
                                    921 ;	led.c:102: void main2()	// UART
                                    922 ;	-----------------------------------------
                                    923 ;	 function main2
                                    924 ;	-----------------------------------------
      0001E8                        925 _main2:
                                    926 ;	led.c:105: init_uart();
      0001E8 12 01 6B         [24]  927 	lcall	_init_uart
                                    928 ;	led.c:107: while(1) {
      0001EB                        929 00104$:
                                    930 ;	led.c:108: if(RI) {
      0001EB 30 98 FD         [24]  931 	jnb	_RI,00104$
                                    932 ;	led.c:109: ch = rx_uart();
      0001EE 12 01 CC         [24]  933 	lcall	_rx_uart
                                    934 ;	led.c:110: tx_uart(ch);
      0001F1 12 01 C2         [24]  935 	lcall	_tx_uart
                                    936 ;	led.c:114: }
      0001F4 80 F5            [24]  937 	sjmp	00104$
                                    938 	.area CSEG    (CODE)
                                    939 	.area CONST   (CODE)
                                    940 	.area XINIT   (CODE)
                                    941 	.area CABS    (ABS,CODE)
