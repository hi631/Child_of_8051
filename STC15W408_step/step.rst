                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 4.1.0 #12072 (MINGW64)
                                      4 ;--------------------------------------------------------
                                      5 	.module step
                                      6 	.optsdcc -mmcs51 --model-small
                                      7 	
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _main
                                     12 	.globl _dumpmem
                                     13 	.globl _dump1l
                                     14 	.globl _gets2h
                                     15 	.globl _cbp_d
                                     16 	.globl _ishex
                                     17 	.globl _getstr
                                     18 	.globl _set_mem
                                     19 	.globl _get_mem
                                     20 	.globl _init_wk
                                     21 	.globl _puth4
                                     22 	.globl _puth2
                                     23 	.globl _puth
                                     24 	.globl _puts
                                     25 	.globl _init_uart
                                     26 	.globl _step_on
                                     27 	.globl _timer2_isr
                                     28 	.globl _loadreg
                                     29 	.globl _savereg
                                     30 	.globl _dbgprg
                                     31 	.globl _CCF0
                                     32 	.globl _CCF1
                                     33 	.globl _CCF2
                                     34 	.globl _CR
                                     35 	.globl _CF
                                     36 	.globl _PADC
                                     37 	.globl _PLVD
                                     38 	.globl _PPCA
                                     39 	.globl _EADC
                                     40 	.globl _ELVD
                                     41 	.globl _P5_7
                                     42 	.globl _P5_6
                                     43 	.globl _P5_5
                                     44 	.globl _P5_4
                                     45 	.globl _P5_3
                                     46 	.globl _P5_2
                                     47 	.globl _P5_1
                                     48 	.globl _P5_0
                                     49 	.globl _P4_7
                                     50 	.globl _P4_6
                                     51 	.globl _P4_5
                                     52 	.globl _P4_4
                                     53 	.globl _P4_3
                                     54 	.globl _P4_2
                                     55 	.globl _P4_1
                                     56 	.globl _P4_0
                                     57 	.globl _CY
                                     58 	.globl _AC
                                     59 	.globl _F0
                                     60 	.globl _RS1
                                     61 	.globl _RS0
                                     62 	.globl _OV
                                     63 	.globl _F1
                                     64 	.globl _P
                                     65 	.globl _PS
                                     66 	.globl _PT1
                                     67 	.globl _PX1
                                     68 	.globl _PT0
                                     69 	.globl _PX0
                                     70 	.globl _RD
                                     71 	.globl _WR
                                     72 	.globl _T1
                                     73 	.globl _T0
                                     74 	.globl _INT1
                                     75 	.globl _INT0
                                     76 	.globl _TXD
                                     77 	.globl _RXD
                                     78 	.globl _P3_7
                                     79 	.globl _P3_6
                                     80 	.globl _P3_5
                                     81 	.globl _P3_4
                                     82 	.globl _P3_3
                                     83 	.globl _P3_2
                                     84 	.globl _P3_1
                                     85 	.globl _P3_0
                                     86 	.globl _EA
                                     87 	.globl _ES
                                     88 	.globl _ET1
                                     89 	.globl _EX1
                                     90 	.globl _ET0
                                     91 	.globl _EX0
                                     92 	.globl _P2_7
                                     93 	.globl _P2_6
                                     94 	.globl _P2_5
                                     95 	.globl _P2_4
                                     96 	.globl _P2_3
                                     97 	.globl _P2_2
                                     98 	.globl _P2_1
                                     99 	.globl _P2_0
                                    100 	.globl _SM0
                                    101 	.globl _SM1
                                    102 	.globl _SM2
                                    103 	.globl _REN
                                    104 	.globl _TB8
                                    105 	.globl _RB8
                                    106 	.globl _TI
                                    107 	.globl _RI
                                    108 	.globl _P1_7
                                    109 	.globl _P1_6
                                    110 	.globl _P1_5
                                    111 	.globl _P1_4
                                    112 	.globl _P1_3
                                    113 	.globl _P1_2
                                    114 	.globl _P1_1
                                    115 	.globl _P1_0
                                    116 	.globl _TF1
                                    117 	.globl _TR1
                                    118 	.globl _TF0
                                    119 	.globl _TR0
                                    120 	.globl _IE1
                                    121 	.globl _IT1
                                    122 	.globl _IE0
                                    123 	.globl _IT0
                                    124 	.globl _P0_7
                                    125 	.globl _P0_6
                                    126 	.globl _P0_5
                                    127 	.globl _P0_4
                                    128 	.globl _P0_3
                                    129 	.globl _P0_2
                                    130 	.globl _P0_1
                                    131 	.globl _P0_0
                                    132 	.globl _PWMFDCR
                                    133 	.globl _PWMIF
                                    134 	.globl _PWMCR
                                    135 	.globl _PWMCFG
                                    136 	.globl _CMPCR2
                                    137 	.globl _CMPCR1
                                    138 	.globl _CCAP2H
                                    139 	.globl _CCAP1H
                                    140 	.globl _CCAP0H
                                    141 	.globl _PCA_PWM2
                                    142 	.globl _PCA_PWM1
                                    143 	.globl _PCA_PWM0
                                    144 	.globl _CCAP2L
                                    145 	.globl _CCAP1L
                                    146 	.globl _CCAP0L
                                    147 	.globl _CCAPM2
                                    148 	.globl _CCAPM1
                                    149 	.globl _CCAPM0
                                    150 	.globl _CH
                                    151 	.globl _CL
                                    152 	.globl _CMOD
                                    153 	.globl _CCON
                                    154 	.globl _IAP_CONTR
                                    155 	.globl _IAP_TRIG
                                    156 	.globl _IAP_CMD
                                    157 	.globl _IAP_ADDRL
                                    158 	.globl _IAP_ADDRH
                                    159 	.globl _IAP_DATA
                                    160 	.globl _SPDAT
                                    161 	.globl _SPCTL
                                    162 	.globl _SPSTAT
                                    163 	.globl _ADC_RESL
                                    164 	.globl _ADC_RES
                                    165 	.globl _ADC_CONTR
                                    166 	.globl _SADEN
                                    167 	.globl _SADDR
                                    168 	.globl _S4BUF
                                    169 	.globl _S4CON
                                    170 	.globl _S3BUF
                                    171 	.globl _S3CON
                                    172 	.globl _S2BUF
                                    173 	.globl _S2CON
                                    174 	.globl _WDT_CONTR
                                    175 	.globl _WKTCH
                                    176 	.globl _WKTCL
                                    177 	.globl _T2L
                                    178 	.globl _T2H
                                    179 	.globl _T3L
                                    180 	.globl _T3H
                                    181 	.globl _T4L
                                    182 	.globl _T4H
                                    183 	.globl _T3T4M
                                    184 	.globl _T4T3M
                                    185 	.globl _INT_CLKO
                                    186 	.globl _IP2
                                    187 	.globl _IE2
                                    188 	.globl _P_SW2
                                    189 	.globl _P1ASF
                                    190 	.globl _BUS_SPEED
                                    191 	.globl _CLK_DIV
                                    192 	.globl _P_SW1
                                    193 	.globl _AUXR1
                                    194 	.globl _AUXR
                                    195 	.globl _P7M1
                                    196 	.globl _P7M0
                                    197 	.globl _P6M1
                                    198 	.globl _P6M0
                                    199 	.globl _P5M1
                                    200 	.globl _P5M0
                                    201 	.globl _P4M1
                                    202 	.globl _P4M0
                                    203 	.globl _P3M1
                                    204 	.globl _P3M0
                                    205 	.globl _P2M1
                                    206 	.globl _P2M0
                                    207 	.globl _P1M1
                                    208 	.globl _P1M0
                                    209 	.globl _P0M1
                                    210 	.globl _P0M0
                                    211 	.globl _P5
                                    212 	.globl _P4
                                    213 	.globl _B
                                    214 	.globl _ACC
                                    215 	.globl _PSW
                                    216 	.globl _IP
                                    217 	.globl _P3
                                    218 	.globl _IE
                                    219 	.globl _P2
                                    220 	.globl _SBUF
                                    221 	.globl _SCON
                                    222 	.globl _P1
                                    223 	.globl _TH1
                                    224 	.globl _TH0
                                    225 	.globl _TL1
                                    226 	.globl _TL0
                                    227 	.globl _TMOD
                                    228 	.globl _TCON
                                    229 	.globl _PCON
                                    230 	.globl _DPH
                                    231 	.globl _DPL
                                    232 	.globl _SP
                                    233 	.globl _P0
                                    234 	.globl _err_f
                                    235 	.globl _cbp
                                    236 	.globl _p4dt
                                    237 	.globl _p2dt
                                    238 	.globl _p1dt
                                    239 	.globl _wokspp
                                    240 	.globl _regspp
                                    241 	.globl _retspp
                                    242 	.globl _mbase4
                                    243 	.globl _mbase3
                                    244 	.globl _mbase2
                                    245 	.globl _mbase1
                                    246 	.globl _mbase0
                                    247 	.globl _memsel
                                    248 	.globl _mdat
                                    249 	.globl _madr
                                    250 	.globl _cntdm
                                    251 	.globl _dbgsbf
                                    252 	.globl _dbgad
                                    253 	.globl _monsbf
                                    254 	.globl _monad
                                    255 	.globl _cbuf
                                    256 	.globl _tx_uart
                                    257 	.globl _rx_uart
                                    258 	.globl _disp_sp
                                    259 ;--------------------------------------------------------
                                    260 ; special function registers
                                    261 ;--------------------------------------------------------
                                    262 	.area RSEG    (ABS,DATA)
      000000                        263 	.org 0x0000
                           000080   264 _P0	=	0x0080
                           000081   265 _SP	=	0x0081
                           000082   266 _DPL	=	0x0082
                           000083   267 _DPH	=	0x0083
                           000087   268 _PCON	=	0x0087
                           000088   269 _TCON	=	0x0088
                           000089   270 _TMOD	=	0x0089
                           00008A   271 _TL0	=	0x008a
                           00008B   272 _TL1	=	0x008b
                           00008C   273 _TH0	=	0x008c
                           00008D   274 _TH1	=	0x008d
                           000090   275 _P1	=	0x0090
                           000098   276 _SCON	=	0x0098
                           000099   277 _SBUF	=	0x0099
                           0000A0   278 _P2	=	0x00a0
                           0000A8   279 _IE	=	0x00a8
                           0000B0   280 _P3	=	0x00b0
                           0000B8   281 _IP	=	0x00b8
                           0000D0   282 _PSW	=	0x00d0
                           0000E0   283 _ACC	=	0x00e0
                           0000F0   284 _B	=	0x00f0
                           0000C0   285 _P4	=	0x00c0
                           0000C8   286 _P5	=	0x00c8
                           000094   287 _P0M0	=	0x0094
                           000093   288 _P0M1	=	0x0093
                           000092   289 _P1M0	=	0x0092
                           000091   290 _P1M1	=	0x0091
                           000096   291 _P2M0	=	0x0096
                           000095   292 _P2M1	=	0x0095
                           0000B2   293 _P3M0	=	0x00b2
                           0000B1   294 _P3M1	=	0x00b1
                           0000B4   295 _P4M0	=	0x00b4
                           0000B3   296 _P4M1	=	0x00b3
                           0000CA   297 _P5M0	=	0x00ca
                           0000C9   298 _P5M1	=	0x00c9
                           0000CC   299 _P6M0	=	0x00cc
                           0000CB   300 _P6M1	=	0x00cb
                           0000E2   301 _P7M0	=	0x00e2
                           0000E1   302 _P7M1	=	0x00e1
                           00008E   303 _AUXR	=	0x008e
                           0000A2   304 _AUXR1	=	0x00a2
                           0000A2   305 _P_SW1	=	0x00a2
                           000097   306 _CLK_DIV	=	0x0097
                           0000A1   307 _BUS_SPEED	=	0x00a1
                           00009D   308 _P1ASF	=	0x009d
                           0000BA   309 _P_SW2	=	0x00ba
                           0000AF   310 _IE2	=	0x00af
                           0000B5   311 _IP2	=	0x00b5
                           00008F   312 _INT_CLKO	=	0x008f
                           0000D1   313 _T4T3M	=	0x00d1
                           0000D1   314 _T3T4M	=	0x00d1
                           0000D2   315 _T4H	=	0x00d2
                           0000D3   316 _T4L	=	0x00d3
                           0000D4   317 _T3H	=	0x00d4
                           0000D5   318 _T3L	=	0x00d5
                           0000D6   319 _T2H	=	0x00d6
                           0000D7   320 _T2L	=	0x00d7
                           0000AA   321 _WKTCL	=	0x00aa
                           0000AB   322 _WKTCH	=	0x00ab
                           0000C1   323 _WDT_CONTR	=	0x00c1
                           00009A   324 _S2CON	=	0x009a
                           00009B   325 _S2BUF	=	0x009b
                           0000AC   326 _S3CON	=	0x00ac
                           0000AD   327 _S3BUF	=	0x00ad
                           000084   328 _S4CON	=	0x0084
                           000085   329 _S4BUF	=	0x0085
                           0000A9   330 _SADDR	=	0x00a9
                           0000B9   331 _SADEN	=	0x00b9
                           0000BC   332 _ADC_CONTR	=	0x00bc
                           0000BD   333 _ADC_RES	=	0x00bd
                           0000BE   334 _ADC_RESL	=	0x00be
                           0000CD   335 _SPSTAT	=	0x00cd
                           0000CE   336 _SPCTL	=	0x00ce
                           0000CF   337 _SPDAT	=	0x00cf
                           0000C2   338 _IAP_DATA	=	0x00c2
                           0000C3   339 _IAP_ADDRH	=	0x00c3
                           0000C4   340 _IAP_ADDRL	=	0x00c4
                           0000C5   341 _IAP_CMD	=	0x00c5
                           0000C6   342 _IAP_TRIG	=	0x00c6
                           0000C7   343 _IAP_CONTR	=	0x00c7
                           0000D8   344 _CCON	=	0x00d8
                           0000D9   345 _CMOD	=	0x00d9
                           0000E9   346 _CL	=	0x00e9
                           0000F9   347 _CH	=	0x00f9
                           0000DA   348 _CCAPM0	=	0x00da
                           0000DB   349 _CCAPM1	=	0x00db
                           0000DC   350 _CCAPM2	=	0x00dc
                           0000EA   351 _CCAP0L	=	0x00ea
                           0000EB   352 _CCAP1L	=	0x00eb
                           0000EC   353 _CCAP2L	=	0x00ec
                           0000F2   354 _PCA_PWM0	=	0x00f2
                           0000F3   355 _PCA_PWM1	=	0x00f3
                           0000F4   356 _PCA_PWM2	=	0x00f4
                           0000FA   357 _CCAP0H	=	0x00fa
                           0000FB   358 _CCAP1H	=	0x00fb
                           0000FC   359 _CCAP2H	=	0x00fc
                           0000E6   360 _CMPCR1	=	0x00e6
                           0000E7   361 _CMPCR2	=	0x00e7
                           0000F1   362 _PWMCFG	=	0x00f1
                           0000F5   363 _PWMCR	=	0x00f5
                           0000F6   364 _PWMIF	=	0x00f6
                           0000F7   365 _PWMFDCR	=	0x00f7
                                    366 ;--------------------------------------------------------
                                    367 ; special function bits
                                    368 ;--------------------------------------------------------
                                    369 	.area RSEG    (ABS,DATA)
      000000                        370 	.org 0x0000
                           000080   371 _P0_0	=	0x0080
                           000081   372 _P0_1	=	0x0081
                           000082   373 _P0_2	=	0x0082
                           000083   374 _P0_3	=	0x0083
                           000084   375 _P0_4	=	0x0084
                           000085   376 _P0_5	=	0x0085
                           000086   377 _P0_6	=	0x0086
                           000087   378 _P0_7	=	0x0087
                           000088   379 _IT0	=	0x0088
                           000089   380 _IE0	=	0x0089
                           00008A   381 _IT1	=	0x008a
                           00008B   382 _IE1	=	0x008b
                           00008C   383 _TR0	=	0x008c
                           00008D   384 _TF0	=	0x008d
                           00008E   385 _TR1	=	0x008e
                           00008F   386 _TF1	=	0x008f
                           000090   387 _P1_0	=	0x0090
                           000091   388 _P1_1	=	0x0091
                           000092   389 _P1_2	=	0x0092
                           000093   390 _P1_3	=	0x0093
                           000094   391 _P1_4	=	0x0094
                           000095   392 _P1_5	=	0x0095
                           000096   393 _P1_6	=	0x0096
                           000097   394 _P1_7	=	0x0097
                           000098   395 _RI	=	0x0098
                           000099   396 _TI	=	0x0099
                           00009A   397 _RB8	=	0x009a
                           00009B   398 _TB8	=	0x009b
                           00009C   399 _REN	=	0x009c
                           00009D   400 _SM2	=	0x009d
                           00009E   401 _SM1	=	0x009e
                           00009F   402 _SM0	=	0x009f
                           0000A0   403 _P2_0	=	0x00a0
                           0000A1   404 _P2_1	=	0x00a1
                           0000A2   405 _P2_2	=	0x00a2
                           0000A3   406 _P2_3	=	0x00a3
                           0000A4   407 _P2_4	=	0x00a4
                           0000A5   408 _P2_5	=	0x00a5
                           0000A6   409 _P2_6	=	0x00a6
                           0000A7   410 _P2_7	=	0x00a7
                           0000A8   411 _EX0	=	0x00a8
                           0000A9   412 _ET0	=	0x00a9
                           0000AA   413 _EX1	=	0x00aa
                           0000AB   414 _ET1	=	0x00ab
                           0000AC   415 _ES	=	0x00ac
                           0000AF   416 _EA	=	0x00af
                           0000B0   417 _P3_0	=	0x00b0
                           0000B1   418 _P3_1	=	0x00b1
                           0000B2   419 _P3_2	=	0x00b2
                           0000B3   420 _P3_3	=	0x00b3
                           0000B4   421 _P3_4	=	0x00b4
                           0000B5   422 _P3_5	=	0x00b5
                           0000B6   423 _P3_6	=	0x00b6
                           0000B7   424 _P3_7	=	0x00b7
                           0000B0   425 _RXD	=	0x00b0
                           0000B1   426 _TXD	=	0x00b1
                           0000B2   427 _INT0	=	0x00b2
                           0000B3   428 _INT1	=	0x00b3
                           0000B4   429 _T0	=	0x00b4
                           0000B5   430 _T1	=	0x00b5
                           0000B6   431 _WR	=	0x00b6
                           0000B7   432 _RD	=	0x00b7
                           0000B8   433 _PX0	=	0x00b8
                           0000B9   434 _PT0	=	0x00b9
                           0000BA   435 _PX1	=	0x00ba
                           0000BB   436 _PT1	=	0x00bb
                           0000BC   437 _PS	=	0x00bc
                           0000D0   438 _P	=	0x00d0
                           0000D1   439 _F1	=	0x00d1
                           0000D2   440 _OV	=	0x00d2
                           0000D3   441 _RS0	=	0x00d3
                           0000D4   442 _RS1	=	0x00d4
                           0000D5   443 _F0	=	0x00d5
                           0000D6   444 _AC	=	0x00d6
                           0000D7   445 _CY	=	0x00d7
                           0000C0   446 _P4_0	=	0x00c0
                           0000C1   447 _P4_1	=	0x00c1
                           0000C2   448 _P4_2	=	0x00c2
                           0000C3   449 _P4_3	=	0x00c3
                           0000C4   450 _P4_4	=	0x00c4
                           0000C5   451 _P4_5	=	0x00c5
                           0000C6   452 _P4_6	=	0x00c6
                           0000C7   453 _P4_7	=	0x00c7
                           0000C8   454 _P5_0	=	0x00c8
                           0000C9   455 _P5_1	=	0x00c9
                           0000CA   456 _P5_2	=	0x00ca
                           0000CB   457 _P5_3	=	0x00cb
                           0000CC   458 _P5_4	=	0x00cc
                           0000CD   459 _P5_5	=	0x00cd
                           0000CE   460 _P5_6	=	0x00ce
                           0000CF   461 _P5_7	=	0x00cf
                           0000AE   462 _ELVD	=	0x00ae
                           0000AD   463 _EADC	=	0x00ad
                           0000BF   464 _PPCA	=	0x00bf
                           0000BE   465 _PLVD	=	0x00be
                           0000BD   466 _PADC	=	0x00bd
                           0000DF   467 _CF	=	0x00df
                           0000DE   468 _CR	=	0x00de
                           0000DA   469 _CCF2	=	0x00da
                           0000D9   470 _CCF1	=	0x00d9
                           0000D8   471 _CCF0	=	0x00d8
                                    472 ;--------------------------------------------------------
                                    473 ; overlayable register banks
                                    474 ;--------------------------------------------------------
                                    475 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        476 	.ds 8
                                    477 ;--------------------------------------------------------
                                    478 ; overlayable bit register bank
                                    479 ;--------------------------------------------------------
                                    480 	.area BIT_BANK	(REL,OVR,DATA)
      000020                        481 bits:
      000020                        482 	.ds 1
                           008000   483 	b0 = bits[0]
                           008100   484 	b1 = bits[1]
                           008200   485 	b2 = bits[2]
                           008300   486 	b3 = bits[3]
                           008400   487 	b4 = bits[4]
                           008500   488 	b5 = bits[5]
                           008600   489 	b6 = bits[6]
                           008700   490 	b7 = bits[7]
                                    491 ;--------------------------------------------------------
                                    492 ; internal ram data
                                    493 ;--------------------------------------------------------
                                    494 	.area DSEG    (DATA)
      000021                        495 _cbuf::
      000021                        496 	.ds 31
      000040                        497 _monad::
      000040                        498 	.ds 2
      000042                        499 _monsbf::
      000042                        500 	.ds 14
      000050                        501 _dbgad::
      000050                        502 	.ds 2
      000052                        503 _dbgsbf::
      000052                        504 	.ds 14
      000060                        505 _cntdm::
      000060                        506 	.ds 1
      000061                        507 _madr::
      000061                        508 	.ds 2
      000063                        509 _mdat::
      000063                        510 	.ds 2
      000065                        511 _memsel::
      000065                        512 	.ds 1
      000066                        513 _mbase0::
      000066                        514 	.ds 1
      000067                        515 _mbase1::
      000067                        516 	.ds 2
      000069                        517 _mbase2::
      000069                        518 	.ds 1
      00006A                        519 _mbase3::
      00006A                        520 	.ds 1
      00006B                        521 _mbase4::
      00006B                        522 	.ds 2
      00006D                        523 _retspp::
      00006D                        524 	.ds 1
      00006E                        525 _regspp::
      00006E                        526 	.ds 1
      00006F                        527 _wokspp::
      00006F                        528 	.ds 1
      000070                        529 _p1dt::
      000070                        530 	.ds 1
      000071                        531 _p2dt::
      000071                        532 	.ds 1
      000072                        533 _p4dt::
      000072                        534 	.ds 2
      000074                        535 _cbp::
      000074                        536 	.ds 3
      000077                        537 _err_f::
      000077                        538 	.ds 1
      000078                        539 _main_nadr_65536_39:
      000078                        540 	.ds 2
                                    541 ;--------------------------------------------------------
                                    542 ; overlayable items in internal ram 
                                    543 ;--------------------------------------------------------
                                    544 	.area	OSEG    (OVR,DATA)
                                    545 	.area	OSEG    (OVR,DATA)
                                    546 	.area	OSEG    (OVR,DATA)
                                    547 ;--------------------------------------------------------
                                    548 ; Stack segment in internal ram 
                                    549 ;--------------------------------------------------------
                                    550 	.area	SSEG
      00007A                        551 __start__stack:
      00007A                        552 	.ds	1
                                    553 
                                    554 ;--------------------------------------------------------
                                    555 ; indirectly addressable internal ram data
                                    556 ;--------------------------------------------------------
                                    557 	.area ISEG    (DATA)
                                    558 ;--------------------------------------------------------
                                    559 ; absolute internal ram data
                                    560 ;--------------------------------------------------------
                                    561 	.area IABS    (ABS,DATA)
                                    562 	.area IABS    (ABS,DATA)
                                    563 ;--------------------------------------------------------
                                    564 ; bit data
                                    565 ;--------------------------------------------------------
                                    566 	.area BSEG    (BIT)
                                    567 ;--------------------------------------------------------
                                    568 ; paged external ram data
                                    569 ;--------------------------------------------------------
                                    570 	.area PSEG    (PAG,XDATA)
                                    571 ;--------------------------------------------------------
                                    572 ; external ram data
                                    573 ;--------------------------------------------------------
                                    574 	.area XSEG    (XDATA)
                                    575 ;--------------------------------------------------------
                                    576 ; absolute external ram data
                                    577 ;--------------------------------------------------------
                                    578 	.area XABS    (ABS,XDATA)
                                    579 ;--------------------------------------------------------
                                    580 ; external initialized ram data
                                    581 ;--------------------------------------------------------
                                    582 	.area XISEG   (XDATA)
                                    583 	.area HOME    (CODE)
                                    584 	.area GSINIT0 (CODE)
                                    585 	.area GSINIT1 (CODE)
                                    586 	.area GSINIT2 (CODE)
                                    587 	.area GSINIT3 (CODE)
                                    588 	.area GSINIT4 (CODE)
                                    589 	.area GSINIT5 (CODE)
                                    590 	.area GSINIT  (CODE)
                                    591 	.area GSFINAL (CODE)
                                    592 	.area CSEG    (CODE)
                                    593 ;--------------------------------------------------------
                                    594 ; interrupt vector 
                                    595 ;--------------------------------------------------------
                                    596 	.area HOME    (CODE)
      000000                        597 __interrupt_vect:
      000000 02 00 69         [24]  598 	ljmp	__sdcc_gsinit_startup
      000003 32               [24]  599 	reti
      000004                        600 	.ds	7
      00000B 32               [24]  601 	reti
      00000C                        602 	.ds	7
      000013 32               [24]  603 	reti
      000014                        604 	.ds	7
      00001B 32               [24]  605 	reti
      00001C                        606 	.ds	7
      000023 32               [24]  607 	reti
      000024                        608 	.ds	7
      00002B 32               [24]  609 	reti
      00002C                        610 	.ds	7
      000033 32               [24]  611 	reti
      000034                        612 	.ds	7
      00003B 32               [24]  613 	reti
      00003C                        614 	.ds	7
      000043 32               [24]  615 	reti
      000044                        616 	.ds	7
      00004B 32               [24]  617 	reti
      00004C                        618 	.ds	7
      000053 32               [24]  619 	reti
      000054                        620 	.ds	7
      00005B 32               [24]  621 	reti
      00005C                        622 	.ds	7
      000063 02 01 22         [24]  623 	ljmp	_timer2_isr
                                    624 ;--------------------------------------------------------
                                    625 ; global & static initialisations
                                    626 ;--------------------------------------------------------
                                    627 	.area HOME    (CODE)
                                    628 	.area GSINIT  (CODE)
                                    629 	.area GSFINAL (CODE)
                                    630 	.area GSINIT  (CODE)
                                    631 	.globl __sdcc_gsinit_startup
                                    632 	.globl __sdcc_program_startup
                                    633 	.globl __start__stack
                                    634 	.globl __mcs51_genXINIT
                                    635 	.globl __mcs51_genXRAMCLEAR
                                    636 	.globl __mcs51_genRAMCLEAR
                                    637 ;	step.c:18: uint dbgad = (int)dbgprg; uchar dbgsbf[14];
      0000C2 75 50 CB         [24]  638 	mov	_dbgad,#_dbgprg
      0000C5 75 51 00         [24]  639 	mov	(_dbgad + 1),#(_dbgprg >> 8)
                                    640 	.area GSFINAL (CODE)
      0000C8 02 00 66         [24]  641 	ljmp	__sdcc_program_startup
                                    642 ;--------------------------------------------------------
                                    643 ; Home
                                    644 ;--------------------------------------------------------
                                    645 	.area HOME    (CODE)
                                    646 	.area HOME    (CODE)
      000066                        647 __sdcc_program_startup:
      000066 02 04 4D         [24]  648 	ljmp	_main
                                    649 ;	return from main will return to caller
                                    650 ;--------------------------------------------------------
                                    651 ; code
                                    652 ;--------------------------------------------------------
                                    653 	.area CSEG    (CODE)
                                    654 ;------------------------------------------------------------
                                    655 ;Allocation info for local variables in function 'dbgprg'
                                    656 ;------------------------------------------------------------
                                    657 ;	step.c:37: void dbgprg(){
                                    658 ;	-----------------------------------------
                                    659 ;	 function dbgprg
                                    660 ;	-----------------------------------------
      0000CB                        661 _dbgprg:
                           000007   662 	ar7 = 0x07
                           000006   663 	ar6 = 0x06
                           000005   664 	ar5 = 0x05
                           000004   665 	ar4 = 0x04
                           000003   666 	ar3 = 0x03
                           000002   667 	ar2 = 0x02
                           000001   668 	ar1 = 0x01
                           000000   669 	ar0 = 0x00
                                    670 ;	step.c:38: while(1){
      0000CB                        671 00102$:
                                    672 ;	step.c:39: P1_0 ^= 1;
      0000CB B2 90            [12]  673 	cpl	_P1_0
                                    674 ;	step.c:40: cntdm++;
      0000CD E5 60            [12]  675 	mov	a,_cntdm
      0000CF 04               [12]  676 	inc	a
      0000D0 F5 60            [12]  677 	mov	_cntdm,a
                                    678 ;	step.c:50: }
      0000D2 80 F7            [24]  679 	sjmp	00102$
                                    680 ;------------------------------------------------------------
                                    681 ;Allocation info for local variables in function 'savereg'
                                    682 ;------------------------------------------------------------
                                    683 ;	step.c:55: void savereg(){
                                    684 ;	-----------------------------------------
                                    685 ;	 function savereg
                                    686 ;	-----------------------------------------
      0000D4                        687 _savereg:
                                    688 ;	step.c:75: __endasm;
      0000D4 85 81 6F         [24]  689 	mov	_wokspp,SP
      0000D7 85 6E 81         [24]  690 	mov	SP,_regspp
      0000DA C0 20            [24]  691 	push	bits
      0000DC C0 E0            [24]  692 	push	acc
      0000DE C0 F0            [24]  693 	push	b
      0000E0 C0 82            [24]  694 	push	dpl
      0000E2 C0 83            [24]  695 	push	dph
      0000E4 C0 07            [24]  696 	push	(0+7)
      0000E6 C0 06            [24]  697 	push	(0+6)
      0000E8 C0 05            [24]  698 	push	(0+5)
      0000EA C0 04            [24]  699 	push	(0+4)
      0000EC C0 03            [24]  700 	push	(0+3)
      0000EE C0 02            [24]  701 	push	(0+2)
      0000F0 C0 01            [24]  702 	push	(0+1)
      0000F2 C0 00            [24]  703 	push	(0+0)
      0000F4 C0 D0            [24]  704 	push	psw
      0000F6 85 6F 81         [24]  705 	mov	SP,_wokspp
      0000F9 22               [24]  706 	ret
                                    707 ;	step.c:76: }
      0000FA 22               [24]  708 	ret
                                    709 ;------------------------------------------------------------
                                    710 ;Allocation info for local variables in function 'loadreg'
                                    711 ;------------------------------------------------------------
                                    712 ;	step.c:78: void loadreg(){
                                    713 ;	-----------------------------------------
                                    714 ;	 function loadreg
                                    715 ;	-----------------------------------------
      0000FB                        716 _loadreg:
                                    717 ;	step.c:98: __endasm;
      0000FB 85 81 6F         [24]  718 	mov	_wokspp,SP
      0000FE 85 6E 81         [24]  719 	mov	SP,_regspp
      000101 D0 D0            [24]  720 	pop	psw
      000103 D0 00            [24]  721 	pop	(0+0)
      000105 D0 01            [24]  722 	pop	(0+1)
      000107 D0 02            [24]  723 	pop	(0+2)
      000109 D0 03            [24]  724 	pop	(0+3)
      00010B D0 04            [24]  725 	pop	(0+4)
      00010D D0 05            [24]  726 	pop	(0+5)
      00010F D0 06            [24]  727 	pop	(0+6)
      000111 D0 07            [24]  728 	pop	(0+7)
      000113 D0 83            [24]  729 	pop	dph
      000115 D0 82            [24]  730 	pop	dpl
      000117 D0 F0            [24]  731 	pop	b
      000119 D0 E0            [24]  732 	pop	acc
      00011B D0 20            [24]  733 	pop	bits
      00011D 85 6F 81         [24]  734 	mov	SP,_wokspp
      000120 22               [24]  735 	ret
                                    736 ;	step.c:99: }
      000121 22               [24]  737 	ret
                                    738 ;------------------------------------------------------------
                                    739 ;Allocation info for local variables in function 'timer2_isr'
                                    740 ;------------------------------------------------------------
                                    741 ;	step.c:101: void timer2_isr(void) __interrupt(12) {
                                    742 ;	-----------------------------------------
                                    743 ;	 function timer2_isr
                                    744 ;	-----------------------------------------
      000122                        745 _timer2_isr:
      000122 C0 20            [24]  746 	push	bits
      000124 C0 E0            [24]  747 	push	acc
      000126 C0 F0            [24]  748 	push	b
      000128 C0 82            [24]  749 	push	dpl
      00012A C0 83            [24]  750 	push	dph
      00012C C0 07            [24]  751 	push	(0+7)
      00012E C0 06            [24]  752 	push	(0+6)
      000130 C0 05            [24]  753 	push	(0+5)
      000132 C0 04            [24]  754 	push	(0+4)
      000134 C0 03            [24]  755 	push	(0+3)
      000136 C0 02            [24]  756 	push	(0+2)
      000138 C0 01            [24]  757 	push	(0+1)
      00013A C0 00            [24]  758 	push	(0+0)
      00013C C0 D0            [24]  759 	push	psw
      00013E 75 D0 00         [24]  760 	mov	psw,#0x00
                                    761 ;	step.c:118: __endasm;
      000141 D0 D0            [24]  762 	pop	psw
      000143 C0 D0            [24]  763 	push	psw
      000145 75 6E 51         [24]  764 	mov	_regspp,#_dbgsbf-1
      000148 12 00 D4         [24]  765 	lcall	_savereg
      00014B 75 D0 00         [24]  766 	mov	psw,#0x00
      00014E 85 81 F0         [24]  767 	mov	b,SP
      000151 E5 81            [12]  768 	mov	a,SP
      000153 94 0E            [12]  769 	subb	a,#14
      000155 F5 81            [12]  770 	mov	SP,a
      000157 D0 E0            [24]  771 	pop	a
      000159 F5 51            [12]  772 	mov	_dbgad+1,a
      00015B D0 E0            [24]  773 	pop	a
      00015D F5 50            [12]  774 	mov	_dbgad,a
      00015F 85 F0 81         [24]  775 	mov	SP,b
      000162 75 AF 00         [24]  776 	mov	_IE2,#0x00;
                                    777 ;	step.c:125: __endasm;
      000165 75 6E 4F         [24]  778 	mov	_regspp,#_monsbf+14-1
      000168 12 00 FB         [24]  779 	lcall	_loadreg
      00016B 85 6D 81         [24]  780 	mov	SP,_retspp
      00016E 32               [24]  781 	reti
                                    782 ;	step.c:126: putch('I'); // Dumy
      00016F 75 82 49         [24]  783 	mov	dpl,#0x49
      000172 12 01 CC         [24]  784 	lcall	_tx_uart
                                    785 ;	step.c:127: }
      000175 D0 D0            [24]  786 	pop	psw
      000177 D0 00            [24]  787 	pop	(0+0)
      000179 D0 01            [24]  788 	pop	(0+1)
      00017B D0 02            [24]  789 	pop	(0+2)
      00017D D0 03            [24]  790 	pop	(0+3)
      00017F D0 04            [24]  791 	pop	(0+4)
      000181 D0 05            [24]  792 	pop	(0+5)
      000183 D0 06            [24]  793 	pop	(0+6)
      000185 D0 07            [24]  794 	pop	(0+7)
      000187 D0 83            [24]  795 	pop	dph
      000189 D0 82            [24]  796 	pop	dpl
      00018B D0 F0            [24]  797 	pop	b
      00018D D0 E0            [24]  798 	pop	acc
      00018F D0 20            [24]  799 	pop	bits
      000191 32               [24]  800 	reti
                                    801 ;------------------------------------------------------------
                                    802 ;Allocation info for local variables in function 'step_on'
                                    803 ;------------------------------------------------------------
                                    804 ;	step.c:129: void step_on(void) {
                                    805 ;	-----------------------------------------
                                    806 ;	 function step_on
                                    807 ;	-----------------------------------------
      000192                        808 _step_on:
                                    809 ;	step.c:131: AUXR = 0x00; // Enable Write [T2L, T2H] & [RL_TL2, RL_TH2]
      000192 75 8E 00         [24]  810 	mov	_AUXR,#0x00
                                    811 ;	step.c:132: T2L = 0xFE;
      000195 75 D7 FE         [24]  812 	mov	_T2L,#0xfe
                                    813 ;	step.c:133: T2H = 0xFF;
      000198 75 D6 FF         [24]  814 	mov	_T2H,#0xff
                                    815 ;	step.c:135: EA = 1; 			// (IE) enable all interrupts
                                    816 ;	assignBit
      00019B D2 AF            [12]  817 	setb	_EA
                                    818 ;	step.c:136: IE2 = 0x04;	// Timer 2 interrupt enable
      00019D 75 AF 04         [24]  819 	mov	_IE2,#0x04
                                    820 ;	step.c:142: __endasm;
      0001A0 75 6E 41         [24]  821 	mov	_regspp,#_monsbf-1
      0001A3 12 00 D4         [24]  822 	lcall	_savereg
      0001A6 85 81 6D         [24]  823 	mov	_retspp,SP
                                    824 ;	step.c:153: __endasm;
      0001A9 E5 50            [12]  825 	mov	a,_dbgad
      0001AB C0 E0            [24]  826 	push	a
      0001AD E5 51            [12]  827 	mov	a,_dbgad+1
      0001AF C0 E0            [24]  828 	push	a
      0001B1 75 6E 5F         [24]  829 	mov	_regspp,#_dbgsbf+14-1
      0001B4 12 00 FB         [24]  830 	lcall	_loadreg
      0001B7 75 8E 14         [24]  831 	mov	_AUXR,#0x14
      0001BA 22               [24]  832 	ret
                                    833 ;	step.c:155: }
      0001BB 22               [24]  834 	ret
                                    835 ;------------------------------------------------------------
                                    836 ;Allocation info for local variables in function 'init_uart'
                                    837 ;------------------------------------------------------------
                                    838 ;	step.c:163: void init_uart(){
                                    839 ;	-----------------------------------------
                                    840 ;	 function init_uart
                                    841 ;	-----------------------------------------
      0001BC                        842 _init_uart:
                                    843 ;	step.c:164: SCON = 0x5A;	//8-bit variable UART
      0001BC 75 98 5A         [24]  844 	mov	_SCON,#0x5a
                                    845 ;	step.c:165: AUXR = 0x00;
      0001BF 75 8E 00         [24]  846 	mov	_AUXR,#0x00
                                    847 ;	step.c:166: T2L  = (unsigned char)(65536 - (FOSC/4/BAUD));   //Set auto-reload vaule
      0001C2 75 D7 E8         [24]  848 	mov	_T2L,#0xe8
                                    849 ;	step.c:167: T2H  = (65536 - (FOSC/4/BAUD))>>8;
      0001C5 75 D6 FF         [24]  850 	mov	_T2H,#0xff
                                    851 ;	step.c:168: AUXR = 0x15; //T2 in 1T mode, strat up Timer 2
      0001C8 75 8E 15         [24]  852 	mov	_AUXR,#0x15
                                    853 ;	step.c:169: }
      0001CB 22               [24]  854 	ret
                                    855 ;------------------------------------------------------------
                                    856 ;Allocation info for local variables in function 'tx_uart'
                                    857 ;------------------------------------------------------------
                                    858 ;ch                        Allocated to registers r7 
                                    859 ;------------------------------------------------------------
                                    860 ;	step.c:170: void tx_uart( char ch){
                                    861 ;	-----------------------------------------
                                    862 ;	 function tx_uart
                                    863 ;	-----------------------------------------
      0001CC                        864 _tx_uart:
      0001CC AF 82            [24]  865 	mov	r7,dpl
                                    866 ;	step.c:171: while (!TI);
      0001CE                        867 00101$:
                                    868 ;	step.c:172: TI = 0;	SBUF = ch;
                                    869 ;	assignBit
      0001CE 10 99 02         [24]  870 	jbc	_TI,00114$
      0001D1 80 FB            [24]  871 	sjmp	00101$
      0001D3                        872 00114$:
      0001D3 8F 99            [24]  873 	mov	_SBUF,r7
                                    874 ;	step.c:173: }
      0001D5 22               [24]  875 	ret
                                    876 ;------------------------------------------------------------
                                    877 ;Allocation info for local variables in function 'rx_uart'
                                    878 ;------------------------------------------------------------
                                    879 ;	step.c:174: char rx_uart(){
                                    880 ;	-----------------------------------------
                                    881 ;	 function rx_uart
                                    882 ;	-----------------------------------------
      0001D6                        883 _rx_uart:
                                    884 ;	step.c:175: while(!RI);
      0001D6                        885 00101$:
                                    886 ;	step.c:176: RI= 0; return SBUF;
                                    887 ;	assignBit
      0001D6 10 98 02         [24]  888 	jbc	_RI,00114$
      0001D9 80 FB            [24]  889 	sjmp	00101$
      0001DB                        890 00114$:
      0001DB 85 99 82         [24]  891 	mov	dpl,_SBUF
                                    892 ;	step.c:177: }
      0001DE 22               [24]  893 	ret
                                    894 ;------------------------------------------------------------
                                    895 ;Allocation info for local variables in function 'puts'
                                    896 ;------------------------------------------------------------
                                    897 ;buf                       Allocated to registers 
                                    898 ;------------------------------------------------------------
                                    899 ;	step.c:179: void puts(char *buf){ while(*buf!=(char)0) putch(*buf++); }
                                    900 ;	-----------------------------------------
                                    901 ;	 function puts
                                    902 ;	-----------------------------------------
      0001DF                        903 _puts:
      0001DF AD 82            [24]  904 	mov	r5,dpl
      0001E1 AE 83            [24]  905 	mov	r6,dph
      0001E3 AF F0            [24]  906 	mov	r7,b
      0001E5                        907 00101$:
      0001E5 8D 82            [24]  908 	mov	dpl,r5
      0001E7 8E 83            [24]  909 	mov	dph,r6
      0001E9 8F F0            [24]  910 	mov	b,r7
      0001EB 12 05 F7         [24]  911 	lcall	__gptrget
      0001EE FC               [12]  912 	mov	r4,a
      0001EF 60 18            [24]  913 	jz	00104$
      0001F1 8C 82            [24]  914 	mov	dpl,r4
      0001F3 0D               [12]  915 	inc	r5
      0001F4 BD 00 01         [24]  916 	cjne	r5,#0x00,00116$
      0001F7 0E               [12]  917 	inc	r6
      0001F8                        918 00116$:
      0001F8 C0 07            [24]  919 	push	ar7
      0001FA C0 06            [24]  920 	push	ar6
      0001FC C0 05            [24]  921 	push	ar5
      0001FE 12 01 CC         [24]  922 	lcall	_tx_uart
      000201 D0 05            [24]  923 	pop	ar5
      000203 D0 06            [24]  924 	pop	ar6
      000205 D0 07            [24]  925 	pop	ar7
      000207 80 DC            [24]  926 	sjmp	00101$
      000209                        927 00104$:
      000209 22               [24]  928 	ret
                                    929 ;------------------------------------------------------------
                                    930 ;Allocation info for local variables in function 'puth'
                                    931 ;------------------------------------------------------------
                                    932 ;	step.c:180: void puth(){ if(p1dt<10) putch(0x30+p1dt); else putch(0x37+p1dt); }
                                    933 ;	-----------------------------------------
                                    934 ;	 function puth
                                    935 ;	-----------------------------------------
      00020A                        936 _puth:
      00020A 74 F6            [12]  937 	mov	a,#0x100 - 0x0a
      00020C 25 70            [12]  938 	add	a,_p1dt
      00020E 40 0A            [24]  939 	jc	00102$
      000210 AF 70            [24]  940 	mov	r7,_p1dt
      000212 74 30            [12]  941 	mov	a,#0x30
      000214 2F               [12]  942 	add	a,r7
      000215 F5 82            [12]  943 	mov	dpl,a
      000217 02 01 CC         [24]  944 	ljmp	_tx_uart
      00021A                        945 00102$:
      00021A AF 70            [24]  946 	mov	r7,_p1dt
      00021C 74 37            [12]  947 	mov	a,#0x37
      00021E 2F               [12]  948 	add	a,r7
      00021F F5 82            [12]  949 	mov	dpl,a
      000221 02 01 CC         [24]  950 	ljmp	_tx_uart
                                    951 ;------------------------------------------------------------
                                    952 ;Allocation info for local variables in function 'puth2'
                                    953 ;------------------------------------------------------------
                                    954 ;	step.c:181: void puth2() { p1dt = p2dt >> 4; puth(); p1dt = p2dt & 0xf; puth(); }
                                    955 ;	-----------------------------------------
                                    956 ;	 function puth2
                                    957 ;	-----------------------------------------
      000224                        958 _puth2:
      000224 E5 71            [12]  959 	mov	a,_p2dt
      000226 C4               [12]  960 	swap	a
      000227 54 0F            [12]  961 	anl	a,#0x0f
      000229 F5 70            [12]  962 	mov	_p1dt,a
      00022B 12 02 0A         [24]  963 	lcall	_puth
      00022E E5 71            [12]  964 	mov	a,_p2dt
      000230 54 0F            [12]  965 	anl	a,#0x0f
      000232 F5 70            [12]  966 	mov	_p1dt,a
      000234 02 02 0A         [24]  967 	ljmp	_puth
                                    968 ;------------------------------------------------------------
                                    969 ;Allocation info for local variables in function 'puth4'
                                    970 ;------------------------------------------------------------
                                    971 ;	step.c:182: void puth4() { p2dt = (p4dt >> 8) & 0xff; puth2(); p2dt = p4dt & 0xff; puth2(); }
                                    972 ;	-----------------------------------------
                                    973 ;	 function puth4
                                    974 ;	-----------------------------------------
      000237                        975 _puth4:
      000237 85 73 71         [24]  976 	mov	_p2dt,(_p4dt + 1)
      00023A 12 02 24         [24]  977 	lcall	_puth2
      00023D 85 72 71         [24]  978 	mov	_p2dt,_p4dt
      000240 02 02 24         [24]  979 	ljmp	_puth2
                                    980 ;------------------------------------------------------------
                                    981 ;Allocation info for local variables in function 'init_wk'
                                    982 ;------------------------------------------------------------
                                    983 ;	step.c:187: void init_wk(){
                                    984 ;	-----------------------------------------
                                    985 ;	 function init_wk
                                    986 ;	-----------------------------------------
      000243                        987 _init_wk:
                                    988 ;	step.c:188: *mbase0 = 0;
      000243 E5 66            [12]  989 	mov	a,_mbase0
      000245 F8               [12]  990 	mov	r0,a
      000246 76 00            [12]  991 	mov	@r0,#0x00
                                    992 ;	step.c:189: *mbase1 = 0;
      000248 85 67 82         [24]  993 	mov	dpl,_mbase1
      00024B 85 68 83         [24]  994 	mov	dph,(_mbase1 + 1)
      00024E E4               [12]  995 	clr	a
      00024F F0               [24]  996 	movx	@dptr,a
                                    997 ;	step.c:190: *mbase2 = 0;
      000250 E5 69            [12]  998 	mov	a,_mbase2
      000252 F8               [12]  999 	mov	r0,a
      000253 76 00            [12] 1000 	mov	@r0,#0x00
                                   1001 ;	step.c:191: *mbase3 = 0;
      000255 E5 6A            [12] 1002 	mov	a,_mbase3
      000257 F8               [12] 1003 	mov	r0,a
      000258 E4               [12] 1004 	clr	a
      000259 F2               [24] 1005 	movx	@r0,a
                                   1006 ;	step.c:193: memsel = 0;
                                   1007 ;	1-genFromRTrack replaced	mov	_memsel,#0x00
      00025A F5 65            [12] 1008 	mov	_memsel,a
                                   1009 ;	step.c:194: cntdm = 0x11;
      00025C 75 60 11         [24] 1010 	mov	_cntdm,#0x11
                                   1011 ;	step.c:195: }
      00025F 22               [24] 1012 	ret
                                   1013 ;------------------------------------------------------------
                                   1014 ;Allocation info for local variables in function 'get_mem'
                                   1015 ;------------------------------------------------------------
                                   1016 ;dt                        Allocated to registers r7 
                                   1017 ;------------------------------------------------------------
                                   1018 ;	step.c:197: uchar get_mem(){
                                   1019 ;	-----------------------------------------
                                   1020 ;	 function get_mem
                                   1021 ;	-----------------------------------------
      000260                       1022 _get_mem:
                                   1023 ;	step.c:199: switch(memsel){
      000260 74 01            [12] 1024 	mov	a,#0x01
      000262 B5 65 02         [24] 1025 	cjne	a,_memsel,00125$
      000265 80 15            [24] 1026 	sjmp	00101$
      000267                       1027 00125$:
      000267 74 02            [12] 1028 	mov	a,#0x02
      000269 B5 65 02         [24] 1029 	cjne	a,_memsel,00126$
      00026C 80 1E            [24] 1030 	sjmp	00102$
      00026E                       1031 00126$:
      00026E 74 03            [12] 1032 	mov	a,#0x03
      000270 B5 65 02         [24] 1033 	cjne	a,_memsel,00127$
      000273 80 20            [24] 1034 	sjmp	00103$
      000275                       1035 00127$:
      000275 74 04            [12] 1036 	mov	a,#0x04
                                   1037 ;	step.c:200: case 1: dt = mbase1[madr]; break;
      000277 B5 65 35         [24] 1038 	cjne	a,_memsel,00105$
      00027A 80 22            [24] 1039 	sjmp	00104$
      00027C                       1040 00101$:
      00027C E5 61            [12] 1041 	mov	a,_madr
      00027E 25 67            [12] 1042 	add	a,_mbase1
      000280 F5 82            [12] 1043 	mov	dpl,a
      000282 E5 62            [12] 1044 	mov	a,(_madr + 1)
      000284 35 68            [12] 1045 	addc	a,(_mbase1 + 1)
      000286 F5 83            [12] 1046 	mov	dph,a
      000288 E0               [24] 1047 	movx	a,@dptr
      000289 FF               [12] 1048 	mov	r7,a
                                   1049 ;	step.c:201: case 2: dt = mbase2[madr]; break;
      00028A 80 2A            [24] 1050 	sjmp	00106$
      00028C                       1051 00102$:
      00028C E5 61            [12] 1052 	mov	a,_madr
      00028E 25 69            [12] 1053 	add	a,_mbase2
      000290 F9               [12] 1054 	mov	r1,a
      000291 87 07            [24] 1055 	mov	ar7,@r1
                                   1056 ;	step.c:202: case 3: dt = mbase3[madr]; break;
      000293 80 21            [24] 1057 	sjmp	00106$
      000295                       1058 00103$:
      000295 E5 61            [12] 1059 	mov	a,_madr
      000297 25 6A            [12] 1060 	add	a,_mbase3
      000299 F9               [12] 1061 	mov	r1,a
      00029A E3               [24] 1062 	movx	a,@r1
      00029B FF               [12] 1063 	mov	r7,a
                                   1064 ;	step.c:203: case 4: dt = mbase4[madr]; break;
      00029C 80 18            [24] 1065 	sjmp	00106$
      00029E                       1066 00104$:
      00029E E5 61            [12] 1067 	mov	a,_madr
      0002A0 25 6B            [12] 1068 	add	a,_mbase4
      0002A2 F5 82            [12] 1069 	mov	dpl,a
      0002A4 E5 62            [12] 1070 	mov	a,(_madr + 1)
      0002A6 35 6C            [12] 1071 	addc	a,(_mbase4 + 1)
      0002A8 F5 83            [12] 1072 	mov	dph,a
      0002AA E4               [12] 1073 	clr	a
      0002AB 93               [24] 1074 	movc	a,@a+dptr
      0002AC FF               [12] 1075 	mov	r7,a
                                   1076 ;	step.c:204: default: dt = mbase0[madr]; break;
      0002AD 80 07            [24] 1077 	sjmp	00106$
      0002AF                       1078 00105$:
      0002AF E5 61            [12] 1079 	mov	a,_madr
      0002B1 25 66            [12] 1080 	add	a,_mbase0
      0002B3 F9               [12] 1081 	mov	r1,a
      0002B4 87 07            [24] 1082 	mov	ar7,@r1
                                   1083 ;	step.c:205: }
      0002B6                       1084 00106$:
                                   1085 ;	step.c:206: return dt;
      0002B6 8F 82            [24] 1086 	mov	dpl,r7
                                   1087 ;	step.c:207: }
      0002B8 22               [24] 1088 	ret
                                   1089 ;------------------------------------------------------------
                                   1090 ;Allocation info for local variables in function 'set_mem'
                                   1091 ;------------------------------------------------------------
                                   1092 ;	step.c:208: void set_mem(){
                                   1093 ;	-----------------------------------------
                                   1094 ;	 function set_mem
                                   1095 ;	-----------------------------------------
      0002B9                       1096 _set_mem:
                                   1097 ;	step.c:209: switch(memsel){
      0002B9 74 01            [12] 1098 	mov	a,#0x01
      0002BB B5 65 02         [24] 1099 	cjne	a,_memsel,00120$
      0002BE 80 0E            [24] 1100 	sjmp	00101$
      0002C0                       1101 00120$:
      0002C0 74 02            [12] 1102 	mov	a,#0x02
      0002C2 B5 65 02         [24] 1103 	cjne	a,_memsel,00121$
      0002C5 80 17            [24] 1104 	sjmp	00102$
      0002C7                       1105 00121$:
      0002C7 74 03            [12] 1106 	mov	a,#0x03
                                   1107 ;	step.c:210: case 1: mbase1[madr] = mdat; break;
      0002C9 B5 65 26         [24] 1108 	cjne	a,_memsel,00104$
      0002CC 80 1A            [24] 1109 	sjmp	00103$
      0002CE                       1110 00101$:
      0002CE E5 61            [12] 1111 	mov	a,_madr
      0002D0 25 67            [12] 1112 	add	a,_mbase1
      0002D2 F5 82            [12] 1113 	mov	dpl,a
      0002D4 E5 62            [12] 1114 	mov	a,(_madr + 1)
      0002D6 35 68            [12] 1115 	addc	a,(_mbase1 + 1)
      0002D8 F5 83            [12] 1116 	mov	dph,a
      0002DA E5 63            [12] 1117 	mov	a,_mdat
      0002DC F0               [24] 1118 	movx	@dptr,a
                                   1119 ;	step.c:211: case 2: mbase2[madr] = mdat; break;
      0002DD 22               [24] 1120 	ret
      0002DE                       1121 00102$:
      0002DE E5 61            [12] 1122 	mov	a,_madr
      0002E0 25 69            [12] 1123 	add	a,_mbase2
      0002E2 F9               [12] 1124 	mov	r1,a
      0002E3 AF 63            [24] 1125 	mov	r7,_mdat
      0002E5 A7 07            [24] 1126 	mov	@r1,ar7
                                   1127 ;	step.c:212: case 3: mbase3[madr] = mdat; break;
      0002E7 22               [24] 1128 	ret
      0002E8                       1129 00103$:
      0002E8 E5 61            [12] 1130 	mov	a,_madr
      0002EA 25 6A            [12] 1131 	add	a,_mbase3
      0002EC F9               [12] 1132 	mov	r1,a
      0002ED AF 63            [24] 1133 	mov	r7,_mdat
      0002EF EF               [12] 1134 	mov	a,r7
      0002F0 F3               [24] 1135 	movx	@r1,a
                                   1136 ;	step.c:213: default: mbase0[madr] = mdat; break;
      0002F1 22               [24] 1137 	ret
      0002F2                       1138 00104$:
      0002F2 E5 61            [12] 1139 	mov	a,_madr
      0002F4 25 66            [12] 1140 	add	a,_mbase0
      0002F6 F9               [12] 1141 	mov	r1,a
      0002F7 AF 63            [24] 1142 	mov	r7,_mdat
      0002F9 A7 07            [24] 1143 	mov	@r1,ar7
                                   1144 ;	step.c:214: }
                                   1145 ;	step.c:215: }
      0002FB 22               [24] 1146 	ret
                                   1147 ;------------------------------------------------------------
                                   1148 ;Allocation info for local variables in function 'disp_sp'
                                   1149 ;------------------------------------------------------------
                                   1150 ;	step.c:217: void disp_sp(){
                                   1151 ;	-----------------------------------------
                                   1152 ;	 function disp_sp
                                   1153 ;	-----------------------------------------
      0002FC                       1154 _disp_sp:
                                   1155 ;	step.c:218: putch('[');
      0002FC 75 82 5B         [24] 1156 	mov	dpl,#0x5b
      0002FF 12 01 CC         [24] 1157 	lcall	_tx_uart
                                   1158 ;	step.c:222: __endasm;
      000302 85 81 71         [24] 1159 	mov	_p2dt,SP
      000305 12 02 24         [24] 1160 	lcall	_puth2
                                   1161 ;	step.c:223: putch(']');
      000308 75 82 5D         [24] 1162 	mov	dpl,#0x5d
                                   1163 ;	step.c:224: }
      00030B 02 01 CC         [24] 1164 	ljmp	_tx_uart
                                   1165 ;------------------------------------------------------------
                                   1166 ;Allocation info for local variables in function 'getstr'
                                   1167 ;------------------------------------------------------------
                                   1168 ;ch                        Allocated to registers r7 
                                   1169 ;ct                        Allocated to registers r6 
                                   1170 ;------------------------------------------------------------
                                   1171 ;	step.c:226: void getstr() {
                                   1172 ;	-----------------------------------------
                                   1173 ;	 function getstr
                                   1174 ;	-----------------------------------------
      00030E                       1175 _getstr:
                                   1176 ;	step.c:228: ch = 0; ct = 0;
      00030E 7F 00            [12] 1177 	mov	r7,#0x00
                                   1178 ;	step.c:229: while(ch!=0x0d && ch!=0x0a) { 
      000310 7E 00            [12] 1179 	mov	r6,#0x00
      000312                       1180 00105$:
      000312 BF 0D 01         [24] 1181 	cjne	r7,#0x0d,00131$
      000315 22               [24] 1182 	ret
      000316                       1183 00131$:
      000316 BF 0A 01         [24] 1184 	cjne	r7,#0x0a,00132$
      000319 22               [24] 1185 	ret
      00031A                       1186 00132$:
                                   1187 ;	step.c:230: ch = getch();
      00031A C0 06            [24] 1188 	push	ar6
      00031C 12 01 D6         [24] 1189 	lcall	_rx_uart
      00031F AF 82            [24] 1190 	mov	r7,dpl
      000321 D0 06            [24] 1191 	pop	ar6
                                   1192 ;	step.c:231: if(ch>='a' && ch<'z') ch = ch - 0x20;
      000323 BF 61 00         [24] 1193 	cjne	r7,#0x61,00133$
      000326                       1194 00133$:
      000326 40 0B            [24] 1195 	jc	00102$
      000328 BF 7A 00         [24] 1196 	cjne	r7,#0x7a,00135$
      00032B                       1197 00135$:
      00032B 50 06            [24] 1198 	jnc	00102$
      00032D 8F 05            [24] 1199 	mov	ar5,r7
      00032F ED               [12] 1200 	mov	a,r5
      000330 24 E0            [12] 1201 	add	a,#0xe0
      000332 FF               [12] 1202 	mov	r7,a
      000333                       1203 00102$:
                                   1204 ;	step.c:235: putch(ch); cbuf[ct++] = ch;
      000333 8F 82            [24] 1205 	mov	dpl,r7
      000335 C0 07            [24] 1206 	push	ar7
      000337 C0 06            [24] 1207 	push	ar6
      000339 12 01 CC         [24] 1208 	lcall	_tx_uart
      00033C D0 06            [24] 1209 	pop	ar6
      00033E D0 07            [24] 1210 	pop	ar7
      000340 EE               [12] 1211 	mov	a,r6
      000341 24 21            [12] 1212 	add	a,#_cbuf
      000343 F9               [12] 1213 	mov	r1,a
      000344 0E               [12] 1214 	inc	r6
      000345 A7 07            [24] 1215 	mov	@r1,ar7
                                   1216 ;	step.c:237: }
      000347 80 C9            [24] 1217 	sjmp	00105$
                                   1218 ;------------------------------------------------------------
                                   1219 ;Allocation info for local variables in function 'ishex'
                                   1220 ;------------------------------------------------------------
                                   1221 ;ch                        Allocated to registers r7 
                                   1222 ;hd                        Allocated to registers r6 
                                   1223 ;------------------------------------------------------------
                                   1224 ;	step.c:239: uchar ishex(char ch) {
                                   1225 ;	-----------------------------------------
                                   1226 ;	 function ishex
                                   1227 ;	-----------------------------------------
      000349                       1228 _ishex:
      000349 AF 82            [24] 1229 	mov	r7,dpl
                                   1230 ;	step.c:241: if(ch>='0' && ch<='9') hd = ch - 0x30;
      00034B BF 30 00         [24] 1231 	cjne	r7,#0x30,00127$
      00034E                       1232 00127$:
      00034E 40 0D            [24] 1233 	jc	00106$
      000350 EF               [12] 1234 	mov	a,r7
      000351 24 C6            [12] 1235 	add	a,#0xff - 0x39
      000353 40 08            [24] 1236 	jc	00106$
      000355 8F 06            [24] 1237 	mov	ar6,r7
      000357 EE               [12] 1238 	mov	a,r6
      000358 24 D0            [12] 1239 	add	a,#0xd0
      00035A FE               [12] 1240 	mov	r6,a
      00035B 80 12            [24] 1241 	sjmp	00107$
      00035D                       1242 00106$:
                                   1243 ;	step.c:242: else if(ch>='A' && ch<='F') hd = ch - 0x37;
      00035D BF 41 00         [24] 1244 	cjne	r7,#0x41,00130$
      000360                       1245 00130$:
      000360 40 0B            [24] 1246 	jc	00102$
      000362 EF               [12] 1247 	mov	a,r7
      000363 24 B9            [12] 1248 	add	a,#0xff - 0x46
      000365 40 06            [24] 1249 	jc	00102$
      000367 EF               [12] 1250 	mov	a,r7
      000368 24 C9            [12] 1251 	add	a,#0xc9
      00036A FE               [12] 1252 	mov	r6,a
      00036B 80 02            [24] 1253 	sjmp	00107$
      00036D                       1254 00102$:
                                   1255 ;	step.c:243: else hd = 0xff;
      00036D 7E FF            [12] 1256 	mov	r6,#0xff
      00036F                       1257 00107$:
                                   1258 ;	step.c:244: return hd;
      00036F 8E 82            [24] 1259 	mov	dpl,r6
                                   1260 ;	step.c:245: }
      000371 22               [24] 1261 	ret
                                   1262 ;------------------------------------------------------------
                                   1263 ;Allocation info for local variables in function 'cbp_d'
                                   1264 ;------------------------------------------------------------
                                   1265 ;	step.c:246: uchar cbp_d(){ return *cbp; }
                                   1266 ;	-----------------------------------------
                                   1267 ;	 function cbp_d
                                   1268 ;	-----------------------------------------
      000372                       1269 _cbp_d:
      000372 AD 74            [24] 1270 	mov	r5,_cbp
      000374 AE 75            [24] 1271 	mov	r6,(_cbp + 1)
      000376 AF 76            [24] 1272 	mov	r7,(_cbp + 2)
      000378 8D 82            [24] 1273 	mov	dpl,r5
      00037A 8E 83            [24] 1274 	mov	dph,r6
      00037C 8F F0            [24] 1275 	mov	b,r7
      00037E 12 05 F7         [24] 1276 	lcall	__gptrget
      000381 F5 82            [12] 1277 	mov	dpl,a
      000383 22               [24] 1278 	ret
                                   1279 ;------------------------------------------------------------
                                   1280 ;Allocation info for local variables in function 'gets2h'
                                   1281 ;------------------------------------------------------------
                                   1282 ;num                       Allocated to registers r6 r7 
                                   1283 ;hd                        Allocated to registers r4 
                                   1284 ;------------------------------------------------------------
                                   1285 ;	step.c:247: uint gets2h() {
                                   1286 ;	-----------------------------------------
                                   1287 ;	 function gets2h
                                   1288 ;	-----------------------------------------
      000384                       1289 _gets2h:
                                   1290 ;	step.c:248: uint num=0; uchar hd;
      000384 7E 00            [12] 1291 	mov	r6,#0x00
      000386 7F 00            [12] 1292 	mov	r7,#0x00
                                   1293 ;	step.c:249: while(cbp_d()==' ') cbp++; /* spip sp*/
      000388                       1294 00101$:
      000388 C0 07            [24] 1295 	push	ar7
      00038A C0 06            [24] 1296 	push	ar6
      00038C 12 03 72         [24] 1297 	lcall	_cbp_d
      00038F AD 82            [24] 1298 	mov	r5,dpl
      000391 D0 06            [24] 1299 	pop	ar6
      000393 D0 07            [24] 1300 	pop	ar7
      000395 BD 20 0A         [24] 1301 	cjne	r5,#0x20,00103$
      000398 05 74            [12] 1302 	inc	_cbp
      00039A E4               [12] 1303 	clr	a
      00039B B5 74 EA         [24] 1304 	cjne	a,_cbp,00101$
      00039E 05 75            [12] 1305 	inc	(_cbp + 1)
      0003A0 80 E6            [24] 1306 	sjmp	00101$
      0003A2                       1307 00103$:
                                   1308 ;	step.c:250: if(cbp_d()==0x0d) { err_f = 1; return 0; }
      0003A2 C0 07            [24] 1309 	push	ar7
      0003A4 C0 06            [24] 1310 	push	ar6
      0003A6 12 03 72         [24] 1311 	lcall	_cbp_d
      0003A9 AD 82            [24] 1312 	mov	r5,dpl
      0003AB D0 06            [24] 1313 	pop	ar6
      0003AD D0 07            [24] 1314 	pop	ar7
      0003AF BD 0D 07         [24] 1315 	cjne	r5,#0x0d,00106$
      0003B2 75 77 01         [24] 1316 	mov	_err_f,#0x01
      0003B5 90 00 00         [24] 1317 	mov	dptr,#0x0000
                                   1318 ;	step.c:251: while( (hd=ishex(cbp_d())) != 0xff){ num = (num << 4) + (uint)hd; cbp++; }
      0003B8 22               [24] 1319 	ret
      0003B9                       1320 00106$:
      0003B9 C0 07            [24] 1321 	push	ar7
      0003BB C0 06            [24] 1322 	push	ar6
      0003BD 12 03 72         [24] 1323 	lcall	_cbp_d
      0003C0 12 03 49         [24] 1324 	lcall	_ishex
      0003C3 AD 82            [24] 1325 	mov	r5,dpl
      0003C5 D0 06            [24] 1326 	pop	ar6
      0003C7 D0 07            [24] 1327 	pop	ar7
      0003C9 8D 04            [24] 1328 	mov	ar4,r5
      0003CB BD FF 02         [24] 1329 	cjne	r5,#0xff,00136$
      0003CE 80 22            [24] 1330 	sjmp	00108$
      0003D0                       1331 00136$:
      0003D0 8E 03            [24] 1332 	mov	ar3,r6
      0003D2 EF               [12] 1333 	mov	a,r7
      0003D3 C4               [12] 1334 	swap	a
      0003D4 54 F0            [12] 1335 	anl	a,#0xf0
      0003D6 CB               [12] 1336 	xch	a,r3
      0003D7 C4               [12] 1337 	swap	a
      0003D8 CB               [12] 1338 	xch	a,r3
      0003D9 6B               [12] 1339 	xrl	a,r3
      0003DA CB               [12] 1340 	xch	a,r3
      0003DB 54 F0            [12] 1341 	anl	a,#0xf0
      0003DD CB               [12] 1342 	xch	a,r3
      0003DE 6B               [12] 1343 	xrl	a,r3
      0003DF FD               [12] 1344 	mov	r5,a
      0003E0 7A 00            [12] 1345 	mov	r2,#0x00
      0003E2 EC               [12] 1346 	mov	a,r4
      0003E3 2B               [12] 1347 	add	a,r3
      0003E4 FE               [12] 1348 	mov	r6,a
      0003E5 EA               [12] 1349 	mov	a,r2
      0003E6 3D               [12] 1350 	addc	a,r5
      0003E7 FF               [12] 1351 	mov	r7,a
      0003E8 05 74            [12] 1352 	inc	_cbp
      0003EA E4               [12] 1353 	clr	a
      0003EB B5 74 CB         [24] 1354 	cjne	a,_cbp,00106$
      0003EE 05 75            [12] 1355 	inc	(_cbp + 1)
      0003F0 80 C7            [24] 1356 	sjmp	00106$
      0003F2                       1357 00108$:
                                   1358 ;	step.c:252: err_f = 0;
      0003F2 75 77 00         [24] 1359 	mov	_err_f,#0x00
                                   1360 ;	step.c:253: return num;
      0003F5 8E 82            [24] 1361 	mov	dpl,r6
      0003F7 8F 83            [24] 1362 	mov	dph,r7
                                   1363 ;	step.c:254: }
      0003F9 22               [24] 1364 	ret
                                   1365 ;------------------------------------------------------------
                                   1366 ;Allocation info for local variables in function 'dump1l'
                                   1367 ;------------------------------------------------------------
                                   1368 ;nb                        Allocated to registers r7 
                                   1369 ;------------------------------------------------------------
                                   1370 ;	step.c:256: void dump1l(){
                                   1371 ;	-----------------------------------------
                                   1372 ;	 function dump1l
                                   1373 ;	-----------------------------------------
      0003FA                       1374 _dump1l:
                                   1375 ;	step.c:258: for( nb=0; nb<16; nb++)
      0003FA 7F 00            [12] 1376 	mov	r7,#0x00
      0003FC                       1377 00102$:
                                   1378 ;	step.c:259: { p2dt = get_mem(); madr++; puth2(); puts(" "); }
      0003FC C0 07            [24] 1379 	push	ar7
      0003FE 12 02 60         [24] 1380 	lcall	_get_mem
      000401 85 82 71         [24] 1381 	mov	_p2dt,dpl
      000404 D0 07            [24] 1382 	pop	ar7
      000406 05 61            [12] 1383 	inc	_madr
      000408 E4               [12] 1384 	clr	a
      000409 B5 61 02         [24] 1385 	cjne	a,_madr,00111$
      00040C 05 62            [12] 1386 	inc	(_madr + 1)
      00040E                       1387 00111$:
      00040E C0 07            [24] 1388 	push	ar7
      000410 12 02 24         [24] 1389 	lcall	_puth2
      000413 90 06 17         [24] 1390 	mov	dptr,#___str_0
      000416 75 F0 80         [24] 1391 	mov	b,#0x80
      000419 12 01 DF         [24] 1392 	lcall	_puts
      00041C D0 07            [24] 1393 	pop	ar7
                                   1394 ;	step.c:258: for( nb=0; nb<16; nb++)
      00041E 0F               [12] 1395 	inc	r7
      00041F BF 10 00         [24] 1396 	cjne	r7,#0x10,00112$
      000422                       1397 00112$:
      000422 40 D8            [24] 1398 	jc	00102$
                                   1399 ;	step.c:260: }
      000424 22               [24] 1400 	ret
                                   1401 ;------------------------------------------------------------
                                   1402 ;Allocation info for local variables in function 'dumpmem'
                                   1403 ;------------------------------------------------------------
                                   1404 ;nl                        Allocated to registers r7 
                                   1405 ;------------------------------------------------------------
                                   1406 ;	step.c:261: void dumpmem(){
                                   1407 ;	-----------------------------------------
                                   1408 ;	 function dumpmem
                                   1409 ;	-----------------------------------------
      000425                       1410 _dumpmem:
                                   1411 ;	step.c:263: for(nl=0; nl<8; nl++){
      000425 7F 00            [12] 1412 	mov	r7,#0x00
      000427                       1413 00102$:
                                   1414 ;	step.c:264: p4dt = (uint)madr; puth4(); puts(": ");
      000427 85 61 72         [24] 1415 	mov	_p4dt,_madr
      00042A 85 62 73         [24] 1416 	mov	(_p4dt + 1),(_madr + 1)
      00042D C0 07            [24] 1417 	push	ar7
      00042F 12 02 37         [24] 1418 	lcall	_puth4
      000432 90 06 19         [24] 1419 	mov	dptr,#___str_1
      000435 75 F0 80         [24] 1420 	mov	b,#0x80
      000438 12 01 DF         [24] 1421 	lcall	_puts
                                   1422 ;	step.c:265: dump1l(); putch(0x0d);
      00043B 12 03 FA         [24] 1423 	lcall	_dump1l
      00043E 75 82 0D         [24] 1424 	mov	dpl,#0x0d
      000441 12 01 CC         [24] 1425 	lcall	_tx_uart
      000444 D0 07            [24] 1426 	pop	ar7
                                   1427 ;	step.c:263: for(nl=0; nl<8; nl++){
      000446 0F               [12] 1428 	inc	r7
      000447 BF 08 00         [24] 1429 	cjne	r7,#0x08,00111$
      00044A                       1430 00111$:
      00044A 40 DB            [24] 1431 	jc	00102$
                                   1432 ;	step.c:267: }
      00044C 22               [24] 1433 	ret
                                   1434 ;------------------------------------------------------------
                                   1435 ;Allocation info for local variables in function 'main'
                                   1436 ;------------------------------------------------------------
                                   1437 ;nadr                      Allocated with name '_main_nadr_65536_39'
                                   1438 ;dtl                       Allocated to registers r3 r4 
                                   1439 ;ct                        Allocated to registers r6 r7 
                                   1440 ;dtr                       Allocated to registers r7 
                                   1441 ;ptn                       Allocated to registers r2 
                                   1442 ;dtb                       Allocated to registers r4 
                                   1443 ;ctb                       Allocated to registers r3 
                                   1444 ;cmd                       Allocated to registers r5 
                                   1445 ;------------------------------------------------------------
                                   1446 ;	step.c:269: void main(){
                                   1447 ;	-----------------------------------------
                                   1448 ;	 function main
                                   1449 ;	-----------------------------------------
      00044D                       1450 _main:
                                   1451 ;	step.c:270: uint nadr=0;
      00044D E4               [12] 1452 	clr	a
      00044E F5 78            [12] 1453 	mov	_main_nadr_65536_39,a
      000450 F5 79            [12] 1454 	mov	(_main_nadr_65536_39 + 1),a
                                   1455 ;	step.c:274: init_wk(); init_uart(); 
      000452 12 02 43         [24] 1456 	lcall	_init_wk
      000455 12 01 BC         [24] 1457 	lcall	_init_uart
                                   1458 ;	step.c:275: puts("\nmon");
      000458 90 06 1C         [24] 1459 	mov	dptr,#___str_2
      00045B 75 F0 80         [24] 1460 	mov	b,#0x80
      00045E 12 01 DF         [24] 1461 	lcall	_puts
      000461                       1462 00131$:
                                   1463 ;	step.c:277: puts("\r>");
      000461 90 06 21         [24] 1464 	mov	dptr,#___str_3
      000464 75 F0 80         [24] 1465 	mov	b,#0x80
      000467 12 01 DF         [24] 1466 	lcall	_puts
                                   1467 ;	step.c:278: getstr(); cmd = cbuf[0]; cbp = &cbuf[1];
      00046A 12 03 0E         [24] 1468 	lcall	_getstr
      00046D AD 21            [24] 1469 	mov	r5,_cbuf
      00046F 75 74 22         [24] 1470 	mov	_cbp,#(_cbuf + 0x0001)
      000472 75 75 00         [24] 1471 	mov	(_cbp + 1),#0x00
      000475 75 76 40         [24] 1472 	mov	(_cbp + 2),#0x40
                                   1473 ;	step.c:279: switch(cmd){
      000478 BD 44 02         [24] 1474 	cjne	r5,#0x44,00203$
      00047B 80 65            [24] 1475 	sjmp	00105$
      00047D                       1476 00203$:
      00047D BD 46 03         [24] 1477 	cjne	r5,#0x46,00204$
      000480 02 05 06         [24] 1478 	ljmp	00109$
      000483                       1479 00204$:
      000483 BD 4D 03         [24] 1480 	cjne	r5,#0x4d,00205$
      000486 02 05 5C         [24] 1481 	ljmp	00111$
      000489                       1482 00205$:
      000489 BD 54 D5         [24] 1483 	cjne	r5,#0x54,00131$
                                   1484 ;	step.c:281: dtb = 1;
      00048C 7C 01            [12] 1485 	mov	r4,#0x01
                                   1486 ;	step.c:282: if(cbuf[1]!=0x0d) {
      00048E 74 0D            [12] 1487 	mov	a,#0x0d
      000490 B5 22 02         [24] 1488 	cjne	a,(_cbuf + 0x0001),00208$
      000493 80 14            [24] 1489 	sjmp	00142$
      000495                       1490 00208$:
                                   1491 ;	step.c:283: dtb = gets2h();
      000495 12 03 84         [24] 1492 	lcall	_gets2h
      000498 AA 82            [24] 1493 	mov	r2,dpl
      00049A 8A 04            [24] 1494 	mov	ar4,r2
                                   1495 ;	step.c:284: puts("adr   bt a  b  dl dh r7 r6 r5 r4 r3 r2 r1 r0 sw\n");
      00049C 90 06 24         [24] 1496 	mov	dptr,#___str_4
      00049F 75 F0 80         [24] 1497 	mov	b,#0x80
      0004A2 C0 04            [24] 1498 	push	ar4
      0004A4 12 01 DF         [24] 1499 	lcall	_puts
      0004A7 D0 04            [24] 1500 	pop	ar4
                                   1501 ;	step.c:286: for(ctb =0; ctb<dtb; ctb++){
      0004A9                       1502 00142$:
      0004A9 7B 00            [12] 1503 	mov	r3,#0x00
      0004AB                       1504 00126$:
      0004AB C3               [12] 1505 	clr	c
      0004AC EB               [12] 1506 	mov	a,r3
      0004AD 9C               [12] 1507 	subb	a,r4
      0004AE 50 B1            [24] 1508 	jnc	00131$
                                   1509 ;	step.c:287: putch(0x00); step_on(); init_uart(); putch(0x00);
      0004B0 75 82 00         [24] 1510 	mov	dpl,#0x00
      0004B3 C0 04            [24] 1511 	push	ar4
      0004B5 C0 03            [24] 1512 	push	ar3
      0004B7 12 01 CC         [24] 1513 	lcall	_tx_uart
      0004BA 12 01 92         [24] 1514 	lcall	_step_on
      0004BD 12 01 BC         [24] 1515 	lcall	_init_uart
      0004C0 75 82 00         [24] 1516 	mov	dpl,#0x00
      0004C3 12 01 CC         [24] 1517 	lcall	_tx_uart
                                   1518 ;	step.c:288: madr = (int)&dbgad; dump1l();
      0004C6 75 61 50         [24] 1519 	mov	_madr,#_dbgad
      0004C9 75 62 00         [24] 1520 	mov	(_madr + 1),#0x00
      0004CC 12 03 FA         [24] 1521 	lcall	_dump1l
                                   1522 ;	step.c:289: putch(0x0d); putch(0x00);
      0004CF 75 82 0D         [24] 1523 	mov	dpl,#0x0d
      0004D2 12 01 CC         [24] 1524 	lcall	_tx_uart
      0004D5 75 82 00         [24] 1525 	mov	dpl,#0x00
      0004D8 12 01 CC         [24] 1526 	lcall	_tx_uart
      0004DB D0 03            [24] 1527 	pop	ar3
      0004DD D0 04            [24] 1528 	pop	ar4
                                   1529 ;	step.c:286: for(ctb =0; ctb<dtb; ctb++){
      0004DF 0B               [12] 1530 	inc	r3
                                   1531 ;	step.c:292: case 'D' : 
      0004E0 80 C9            [24] 1532 	sjmp	00126$
      0004E2                       1533 00105$:
                                   1534 ;	step.c:293: if(cbuf[1]!=0x0d) madr = gets2h();
      0004E2 74 0D            [12] 1535 	mov	a,#0x0d
      0004E4 B5 22 02         [24] 1536 	cjne	a,(_cbuf + 0x0001),00210$
      0004E7 80 0B            [24] 1537 	sjmp	00107$
      0004E9                       1538 00210$:
      0004E9 12 03 84         [24] 1539 	lcall	_gets2h
      0004EC 85 82 61         [24] 1540 	mov	_madr,dpl
      0004EF 85 83 62         [24] 1541 	mov	(_madr + 1),dph
      0004F2 80 06            [24] 1542 	sjmp	00108$
      0004F4                       1543 00107$:
                                   1544 ;	step.c:294: else              madr = nadr;
      0004F4 85 78 61         [24] 1545 	mov	_madr,_main_nadr_65536_39
      0004F7 85 79 62         [24] 1546 	mov	(_madr + 1),(_main_nadr_65536_39 + 1)
      0004FA                       1547 00108$:
                                   1548 ;	step.c:295: dumpmem(); nadr = madr;
      0004FA 12 04 25         [24] 1549 	lcall	_dumpmem
      0004FD 85 61 78         [24] 1550 	mov	_main_nadr_65536_39,_madr
      000500 85 62 79         [24] 1551 	mov	(_main_nadr_65536_39 + 1),(_madr + 1)
                                   1552 ;	step.c:296: break;
      000503 02 04 61         [24] 1553 	ljmp	00131$
                                   1554 ;	step.c:297: case 'F':
      000506                       1555 00109$:
                                   1556 ;	step.c:298: madr = gets2h(); dtl = gets2h(); ptn = gets2h();
      000506 12 03 84         [24] 1557 	lcall	_gets2h
      000509 85 82 61         [24] 1558 	mov	_madr,dpl
      00050C 85 83 62         [24] 1559 	mov	(_madr + 1),dph
      00050F 12 03 84         [24] 1560 	lcall	_gets2h
      000512 AB 82            [24] 1561 	mov	r3,dpl
      000514 AC 83            [24] 1562 	mov	r4,dph
      000516 C0 04            [24] 1563 	push	ar4
      000518 C0 03            [24] 1564 	push	ar3
      00051A 12 03 84         [24] 1565 	lcall	_gets2h
      00051D AA 82            [24] 1566 	mov	r2,dpl
      00051F D0 03            [24] 1567 	pop	ar3
      000521 D0 04            [24] 1568 	pop	ar4
                                   1569 ;	step.c:299: for(ct=0; ct<dtl; ct++) { mdat = ptn; set_mem(); madr++;}
      000523 7E 00            [12] 1570 	mov	r6,#0x00
      000525 7F 00            [12] 1571 	mov	r7,#0x00
      000527                       1572 00129$:
      000527 C3               [12] 1573 	clr	c
      000528 EE               [12] 1574 	mov	a,r6
      000529 9B               [12] 1575 	subb	a,r3
      00052A EF               [12] 1576 	mov	a,r7
      00052B 9C               [12] 1577 	subb	a,r4
      00052C 40 03            [24] 1578 	jc	00211$
      00052E 02 04 61         [24] 1579 	ljmp	00131$
      000531                       1580 00211$:
      000531 8A 63            [24] 1581 	mov	_mdat,r2
      000533 75 64 00         [24] 1582 	mov	(_mdat + 1),#0x00
      000536 C0 07            [24] 1583 	push	ar7
      000538 C0 06            [24] 1584 	push	ar6
      00053A C0 04            [24] 1585 	push	ar4
      00053C C0 03            [24] 1586 	push	ar3
      00053E C0 02            [24] 1587 	push	ar2
      000540 12 02 B9         [24] 1588 	lcall	_set_mem
      000543 D0 02            [24] 1589 	pop	ar2
      000545 D0 03            [24] 1590 	pop	ar3
      000547 D0 04            [24] 1591 	pop	ar4
      000549 D0 06            [24] 1592 	pop	ar6
      00054B D0 07            [24] 1593 	pop	ar7
      00054D 05 61            [12] 1594 	inc	_madr
      00054F E4               [12] 1595 	clr	a
      000550 B5 61 02         [24] 1596 	cjne	a,_madr,00212$
      000553 05 62            [12] 1597 	inc	(_madr + 1)
      000555                       1598 00212$:
      000555 0E               [12] 1599 	inc	r6
                                   1600 ;	step.c:301: case 'M':
      000556 BE 00 CE         [24] 1601 	cjne	r6,#0x00,00129$
      000559 0F               [12] 1602 	inc	r7
      00055A 80 CB            [24] 1603 	sjmp	00129$
      00055C                       1604 00111$:
                                   1605 ;	step.c:302: if(cbuf[1]=='S'){ cbp++; memsel = gets2h();}
      00055C 74 53            [12] 1606 	mov	a,#0x53
      00055E B5 22 14         [24] 1607 	cjne	a,(_cbuf + 0x0001),00121$
      000561 05 74            [12] 1608 	inc	_cbp
      000563 E4               [12] 1609 	clr	a
      000564 B5 74 02         [24] 1610 	cjne	a,_cbp,00216$
      000567 05 75            [12] 1611 	inc	(_cbp + 1)
      000569                       1612 00216$:
      000569 12 03 84         [24] 1613 	lcall	_gets2h
      00056C AE 82            [24] 1614 	mov	r6,dpl
      00056E AF 83            [24] 1615 	mov	r7,dph
      000570 8E 65            [24] 1616 	mov	_memsel,r6
      000572 02 04 61         [24] 1617 	ljmp	00131$
      000575                       1618 00121$:
                                   1619 ;	step.c:304: madr = gets2h();
      000575 C0 05            [24] 1620 	push	ar5
      000577 12 03 84         [24] 1621 	lcall	_gets2h
      00057A 85 82 61         [24] 1622 	mov	_madr,dpl
      00057D 85 83 62         [24] 1623 	mov	(_madr + 1),dph
      000580 D0 05            [24] 1624 	pop	ar5
                                   1625 ;	step.c:305: while(cmd!='.'){
      000582                       1626 00117$:
      000582 BD 2E 03         [24] 1627 	cjne	r5,#0x2e,00217$
      000585 02 04 61         [24] 1628 	ljmp	00131$
      000588                       1629 00217$:
                                   1630 ;	step.c:306: p4dt = madr; puth4(); putch(':');
      000588 85 61 72         [24] 1631 	mov	_p4dt,_madr
      00058B 85 62 73         [24] 1632 	mov	(_p4dt + 1),(_madr + 1)
      00058E 12 02 37         [24] 1633 	lcall	_puth4
      000591 75 82 3A         [24] 1634 	mov	dpl,#0x3a
      000594 12 01 CC         [24] 1635 	lcall	_tx_uart
                                   1636 ;	step.c:307: putch(' '); p2dt = get_mem(); puth2();
      000597 75 82 20         [24] 1637 	mov	dpl,#0x20
      00059A 12 01 CC         [24] 1638 	lcall	_tx_uart
      00059D 12 02 60         [24] 1639 	lcall	_get_mem
      0005A0 85 82 71         [24] 1640 	mov	_p2dt,dpl
      0005A3 12 02 24         [24] 1641 	lcall	_puth2
                                   1642 ;	step.c:308: putch(' '); 
      0005A6 75 82 20         [24] 1643 	mov	dpl,#0x20
      0005A9 12 01 CC         [24] 1644 	lcall	_tx_uart
                                   1645 ;	step.c:309: getstr(); cbp = &cbuf[0];
      0005AC 12 03 0E         [24] 1646 	lcall	_getstr
      0005AF 75 74 21         [24] 1647 	mov	_cbp,#_cbuf
      0005B2 75 75 00         [24] 1648 	mov	(_cbp + 1),#0x00
      0005B5 75 76 40         [24] 1649 	mov	(_cbp + 2),#0x40
                                   1650 ;	step.c:310: mdat = gets2h(); dtr = 0; cmd = cbp_d();
      0005B8 12 03 84         [24] 1651 	lcall	_gets2h
      0005BB 85 82 63         [24] 1652 	mov	_mdat,dpl
      0005BE 85 83 64         [24] 1653 	mov	(_mdat + 1),dph
      0005C1 7F 00            [12] 1654 	mov	r7,#0x00
      0005C3 C0 07            [24] 1655 	push	ar7
      0005C5 12 03 72         [24] 1656 	lcall	_cbp_d
      0005C8 AD 82            [24] 1657 	mov	r5,dpl
      0005CA D0 07            [24] 1658 	pop	ar7
                                   1659 ;	step.c:311: if(cmd==0x0d && err_f!=1){
      0005CC BD 0D 13         [24] 1660 	cjne	r5,#0x0d,00113$
      0005CF 74 01            [12] 1661 	mov	a,#0x01
      0005D1 B5 77 02         [24] 1662 	cjne	a,_err_f,00220$
      0005D4 80 0C            [24] 1663 	sjmp	00113$
      0005D6                       1664 00220$:
                                   1665 ;	step.c:312: set_mem(); dtr = get_mem();
      0005D6 C0 05            [24] 1666 	push	ar5
      0005D8 12 02 B9         [24] 1667 	lcall	_set_mem
      0005DB 12 02 60         [24] 1668 	lcall	_get_mem
      0005DE AF 82            [24] 1669 	mov	r7,dpl
      0005E0 D0 05            [24] 1670 	pop	ar5
      0005E2                       1671 00113$:
                                   1672 ;	step.c:314: if(mdat==dtr) {
      0005E2 7E 00            [12] 1673 	mov	r6,#0x00
      0005E4 EF               [12] 1674 	mov	a,r7
      0005E5 B5 63 9A         [24] 1675 	cjne	a,_mdat,00117$
      0005E8 EE               [12] 1676 	mov	a,r6
      0005E9 B5 64 96         [24] 1677 	cjne	a,(_mdat + 1),00117$
                                   1678 ;	step.c:317: madr = madr + 1;
      0005EC 05 61            [12] 1679 	inc	_madr
      0005EE E4               [12] 1680 	clr	a
      0005EF B5 61 02         [24] 1681 	cjne	a,_madr,00223$
      0005F2 05 62            [12] 1682 	inc	(_madr + 1)
      0005F4                       1683 00223$:
                                   1684 ;	step.c:322: }
                                   1685 ;	step.c:324: }
      0005F4 02 05 82         [24] 1686 	ljmp	00117$
                                   1687 	.area CSEG    (CODE)
                                   1688 	.area CONST   (CODE)
                                   1689 	.area CONST   (CODE)
      000617                       1690 ___str_0:
      000617 20                    1691 	.ascii " "
      000618 00                    1692 	.db 0x00
                                   1693 	.area CSEG    (CODE)
                                   1694 	.area CONST   (CODE)
      000619                       1695 ___str_1:
      000619 3A 20                 1696 	.ascii ": "
      00061B 00                    1697 	.db 0x00
                                   1698 	.area CSEG    (CODE)
                                   1699 	.area CONST   (CODE)
      00061C                       1700 ___str_2:
      00061C 0A                    1701 	.db 0x0a
      00061D 6D 6F 6E              1702 	.ascii "mon"
      000620 00                    1703 	.db 0x00
                                   1704 	.area CSEG    (CODE)
                                   1705 	.area CONST   (CODE)
      000621                       1706 ___str_3:
      000621 0D                    1707 	.db 0x0d
      000622 3E                    1708 	.ascii ">"
      000623 00                    1709 	.db 0x00
                                   1710 	.area CSEG    (CODE)
                                   1711 	.area CONST   (CODE)
      000624                       1712 ___str_4:
      000624 61 64 72 20 20 20 62  1713 	.ascii "adr   bt a  b  dl dh r7 r6 r5 r4 r3 r2 r1 r0 sw"
             74 20 61 20 20 62 20
             20 64 6C 20 64 68 20
             72 37 20 72 36 20 72
             35 20 72 34 20 72 33
             20 72 32 20 72 31 20
             72 30 20 73 77
      000653 0A                    1714 	.db 0x0a
      000654 00                    1715 	.db 0x00
                                   1716 	.area CSEG    (CODE)
                                   1717 	.area XINIT   (CODE)
                                   1718 	.area CABS    (ABS,CODE)
