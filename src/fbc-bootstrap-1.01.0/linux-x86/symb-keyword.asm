	.intel_syntax noprefix

	#FreeBASIC-1.01.0-source/src/compiler/symb-keyword.bas' compilation started at 16:30:08 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl SYMBKEYWORDINIT
SYMBKEYWORDINIT:
.type SYMBKEYWORDINIT, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
.Lt_0145:
mov dword ptr [ebp-4], 0
.Lt_0147:
mov eax, dword ptr [ebp-4]
sal eax, 4
cmp dword ptr [KWDTB+eax], 0
je .Lt_0148
mov eax, dword ptr [ebp-4]
sal eax, 4
mov ebx, dword ptr [KWDTB+eax]
mov dword ptr [ebp-8], ebx
mov ebx, dword ptr [ebp-4]
sal ebx, 4
mov eax, dword ptr [KWDTB+ebx+12]
and eax, 1
test eax, eax
je .Lt_014A
cmp dword ptr [ENV+136], 3
jne .Lt_014C
push 0
push -1
push 0
push dword ptr [ebp-8]
push 3
push offset Lt_014D
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
lea eax, [ebp-20]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_0155
call fb_StrAssign
add esp, 20
mov eax, dword ptr [Lt_0155]
mov dword ptr [ebp-8], eax
.Lt_014C:
.Lt_014B:
.Lt_014A:
.Lt_0149:
mov eax, dword ptr [ebp-4]
sal eax, 4
mov ebx, dword ptr [KWDTB+eax+12]
and ebx, 4
test ebx, ebx
je .Lt_0150
mov ebx, dword ptr [ENV+136]
cmp ebx, 3
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_0152
inc dword ptr [ebp-4]
jmp .Lt_0147
.Lt_0152:
.Lt_0151:
.Lt_0150:
.Lt_014F:
mov ebx, dword ptr [ebp-4]
sal ebx, 4
mov eax, dword ptr [KWDTB+ebx+12]
and eax, 2
test eax, eax
je .Lt_0154
push 268435456
push 16
push 0
mov eax, dword ptr [ebp-4]
sal eax, 4
push dword ptr [KWDTB+eax+8]
mov eax, dword ptr [ebp-4]
sal eax, 4
push dword ptr [KWDTB+eax+4]
push dword ptr [ebp-8]
call SYMBADDKEYWORD
add esp, 24
jmp .Lt_0153
.Lt_0154:
push 0
push -2147483648
push 0
mov eax, dword ptr [ebp-4]
sal eax, 4
push dword ptr [KWDTB+eax+8]
mov eax, dword ptr [ebp-4]
sal eax, 4
push dword ptr [KWDTB+eax+4]
push dword ptr [ebp-8]
call SYMBADDKEYWORD
add esp, 24
.Lt_0153:
inc dword ptr [ebp-4]
jmp .Lt_0147
.Lt_0148:
.Lt_0146:
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBKEYWORDINIT, .-SYMBKEYWORDINIT

.section .bss
.balign 4
	.lcomm	Lt_0155,12

.section .text
.balign 16

.globl SYMBADDKEYWORD
SYMBADDKEYWORD:
.type SYMBADDKEYWORD, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0157:
push dword ptr [ebp+28]
push 0
push dword ptr [ebp+24]
push 0
push dword ptr [ebp+8]
push 6
push dword ptr [ebp+20]
lea eax, [SYMB+98404]
push eax
push 0
push 33
call SYMBNEWSYMBOL
add esp, 40
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_015A
mov dword ptr [ebp-4], 0
jmp .Lt_0158
.Lt_015A:
.Lt_0159:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+12]
mov dword ptr [eax+52], ebx
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebp+16]
mov dword ptr [ebx+56], eax
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0158:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBADDKEYWORD, .-SYMBADDKEYWORD
.balign 16

.globl SYMBKEYWORDGETTEXT
SYMBKEYWORDGETTEXT:
.type SYMBKEYWORDGETTEXT, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_015B:
mov dword ptr [ebp-8], 0
.Lt_0160:
mov eax, dword ptr [ebp-8]
sal eax, 4
mov ebx, dword ptr [ebp+8]
cmp dword ptr [KWDTB+eax+4], ebx
jne .Lt_0162
mov ebx, dword ptr [ebp-8]
sal ebx, 4
mov eax, dword ptr [KWDTB+ebx]
mov dword ptr [ebp-4], eax
jmp .Lt_015C
.Lt_0162:
.Lt_0161:
.Lt_015E:
inc dword ptr [ebp-8]
.Lt_015D:
cmp dword ptr [ebp-8], 254
jle .Lt_0160
.Lt_015F:
mov eax, offset Lt_0000
mov dword ptr [ebp-4], eax
.Lt_015C:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBKEYWORDGETTEXT, .-SYMBKEYWORDGETTEXT
.balign 16
fb_ctor__symbzkeyword:
.type fb_ctor__symbzkeyword, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__symbzkeyword, .-fb_ctor__symbzkeyword
.balign 16
_ZN11TSTRSETITEMaSERKS_:
.type _ZN11TSTRSETITEMaSERKS_, @function
push ebp
mov ebp, esp
push ebx
.Lt_0011:
push 0
push -1
mov eax, dword ptr [ebp+12]
lea ebx, [eax]
push ebx
push -1
mov ebx, dword ptr [ebp+8]
lea eax, [ebx]
push eax
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ebp+12]
add eax, 12
mov ebx, dword ptr [ebp+8]
add ebx, 12
mov ecx, dword ptr [eax]
mov dword ptr [ebx], ecx
.Lt_0012:
pop ebx
mov esp, ebp
pop ebp
ret
.size _ZN11TSTRSETITEMaSERKS_, .-_ZN11TSTRSETITEMaSERKS_
	#FreeBASIC-1.01.0-source/src/compiler/symb-keyword.bas' compilation took 0.02541996201034635 secs

.section .rodata
.balign 4
Lt_0000:	.ascii	"\0"

.section .bss
.balign 4
	.lcomm	Lt_0052,32
.balign 4
	.lcomm	Lt_0053,32
.balign 4
	.lcomm	Lt_0054,32
.balign 4
	.lcomm	Lt_0055,44

.globl ENV
.balign 4
	.comm	ENV,996

.section .data
.balign 4
KWDTB:
.int Lt_0057
.int 288
.int 5
.skip 4,0
.int Lt_0058
.int 289
.int 5
.skip 4,0
.int Lt_0059
.int 290
.int 5
.skip 4,0
.int Lt_005A
.int 291
.int 5
.skip 4,0
.int Lt_005B
.int 292
.int 5
.skip 4,0
.int Lt_005C
.int 293
.int 5
.skip 4,0
.int Lt_005D
.int 294
.int 5
.skip 4,0
.int Lt_005E
.int 295
.int 5
.skip 4,0
.int Lt_005F
.int 296
.int 5
.skip 4,0
.int Lt_0060
.int 297
.int 5
.int 1
.int Lt_0061
.int 298
.int 5
.int 1
.int Lt_0062
.int 386
.int 5
.int 1
.int Lt_0063
.int 387
.int 5
.int 1
.int Lt_0064
.int 260
.int 1
.skip 4,0
.int Lt_0065
.int 308
.int 1
.skip 4,0
.int Lt_0066
.int 444
.int 1
.skip 4,0
.int Lt_0067
.int 445
.int 1
.skip 4,0
.int Lt_0068
.int 446
.int 1
.skip 4,0
.int Lt_0069
.int 447
.int 1
.int 1
.int Lt_006A
.int 457
.int 1
.skip 4,0
.int Lt_006B
.int 307
.int 1
.skip 4,0
.int Lt_006C
.int 312
.int 1
.skip 4,0
.int Lt_006D
.int 356
.int 1
.int 1
.int Lt_006E
.int 357
.int 1
.int 1
.int Lt_006F
.int 358
.int 1
.int 1
.int Lt_0070
.int 359
.int 1
.int 1
.int Lt_0071
.int 360
.int 1
.skip 4,0
.int Lt_0072
.int 361
.int 1
.int 1
.int Lt_0073
.int 362
.int 1
.skip 4,0
.int Lt_0074
.int 363
.int 1
.int 1
.int Lt_0075
.int 364
.int 1
.int 1
.int Lt_0076
.int 365
.int 1
.int 1
.int Lt_0077
.int 366
.int 1
.skip 4,0
.int Lt_0078
.int 367
.int 1
.skip 4,0
.int Lt_0079
.int 368
.int 1
.int 2
.int Lt_007A
.int 369
.int 1
.int 1
.int Lt_007B
.int 370
.int 1
.int 1
.int Lt_007C
.int 374
.int 1
.int 1
.int Lt_007D
.int 371
.int 1
.skip 4,0
.int Lt_007E
.int 372
.int 1
.int 1
.int Lt_007F
.int 373
.int 1
.int 1
.int Lt_0080
.int 376
.int 1
.int 1
.int Lt_0081
.int 273
.int 1
.skip 4,0
.int Lt_0082
.int 274
.int 1
.skip 4,0
.int Lt_0083
.int 275
.int 1
.skip 4,0
.int Lt_0084
.int 276
.int 1
.int 1
.int Lt_0085
.int 398
.int 1
.int 1
.int Lt_0086
.int 400
.int 1
.int 1
.int Lt_0087
.int 402
.int 1
.skip 4,0
.int Lt_0088
.int 404
.int 1
.skip 4,0
.int Lt_0089
.int 406
.int 1
.int 1
.int Lt_008A
.int 399
.int 1
.int 1
.int Lt_008B
.int 401
.int 1
.int 1
.int Lt_008C
.int 403
.int 1
.int 1
.int Lt_008D
.int 405
.int 1
.int 1
.int Lt_008E
.int 407
.int 1
.int 1
.int Lt_008F
.int 408
.int 1
.skip 4,0
.int Lt_0090
.int 409
.int 1
.skip 4,0
.int Lt_0091
.int 410
.int 1
.int 1
.int Lt_0092
.int 411
.int 1
.int 1
.int Lt_0093
.int 412
.int 1
.int 1
.int Lt_0094
.int 413
.int 1
.int 1
.int Lt_0095
.int 392
.int 1
.skip 4,0
.int Lt_0096
.int 319
.int 1
.skip 4,0
.int Lt_0097
.int 320
.int 1
.skip 4,0
.int Lt_0098
.int 375
.int 1
.skip 4,0
.int Lt_0099
.int 334
.int 1
.skip 4,0
.int Lt_009A
.int 390
.int 1
.skip 4,0
.int Lt_009B
.int 335
.int 1
.skip 4,0
.int Lt_009C
.int 281
.int 1
.skip 4,0
.int Lt_009D
.int 282
.int 1
.skip 4,0
.int Lt_009E
.int 283
.int 1
.skip 4,0
.int Lt_009F
.int 284
.int 1
.skip 4,0
.int Lt_00A0
.int 336
.int 1
.skip 4,0
.int Lt_00A1
.int 337
.int 1
.int 1
.int Lt_00A2
.int 340
.int 1
.skip 4,0
.int Lt_00A3
.int 345
.int 1
.skip 4,0
.int Lt_00A4
.int 346
.int 1
.skip 4,0
.int Lt_00A5
.int 381
.int 1
.skip 4,0
.int Lt_00A6
.int 382
.int 1
.skip 4,0
.int Lt_00A7
.int 380
.int 1
.skip 4,0
.int Lt_00A8
.int 383
.int 1
.skip 4,0
.int Lt_00A9
.int 384
.int 1
.skip 4,0
.int Lt_00AA
.int 388
.int 1
.skip 4,0
.int Lt_00AB
.int 277
.int 1
.skip 4,0
.int Lt_00AC
.int 278
.int 1
.skip 4,0
.int Lt_00AD
.int 279
.int 1
.skip 4,0
.int Lt_00AE
.int 389
.int 1
.skip 4,0
.int Lt_00AF
.int 266
.int 1
.skip 4,0
.int Lt_00B0
.int 267
.int 1
.skip 4,0
.int Lt_00B1
.int 268
.int 1
.skip 4,0
.int Lt_00B2
.int 269
.int 1
.skip 4,0
.int Lt_00B3
.int 314
.int 1
.skip 4,0
.int Lt_00B4
.int 270
.int 1
.skip 4,0
.int Lt_00B5
.int 271
.int 1
.skip 4,0
.int Lt_00B6
.int 272
.int 1
.skip 4,0
.int Lt_00B7
.int 287
.int 1
.skip 4,0
.int Lt_00B8
.int 461
.int 2
.skip 4,0
.int Lt_00B9
.int 463
.int 1
.skip 4,0
.int Lt_00BA
.int 464
.int 1
.skip 4,0
.int Lt_00BB
.int 465
.int 1
.skip 4,0
.int Lt_00BC
.int 311
.int 1
.skip 4,0
.int Lt_00BD
.int 338
.int 1
.skip 4,0
.int Lt_00BE
.int 344
.int 1
.int 1
.int Lt_00BF
.int 306
.int 1
.int 1
.int Lt_00C0
.int 280
.int 1
.int 1
.int Lt_00C1
.int 285
.int 1
.int 1
.int Lt_00C2
.int 377
.int 1
.int 1
.int Lt_00C3
.int 378
.int 1
.int 1
.int Lt_00C4
.int 379
.int 1
.int 1
.int Lt_00C5
.int 395
.int 1
.int 1
.int Lt_00C6
.int 286
.int 1
.int 1
.int Lt_00C7
.int 341
.int 1
.int 1
.int Lt_00C8
.int 342
.int 1
.int 1
.int Lt_00C9
.int 385
.int 1
.int 1
.int Lt_00CA
.int 347
.int 1
.int 1
.int Lt_00CB
.int 348
.int 1
.int 1
.int Lt_00CC
.int 349
.int 1
.int 1
.int Lt_00CD
.int 350
.int 1
.int 1
.int Lt_00CE
.int 339
.int 1
.int 1
.int Lt_00CF
.int 351
.int 1
.int 1
.int Lt_00D0
.int 352
.int 1
.int 1
.int Lt_00D1
.int 353
.int 1
.int 1
.int Lt_00D2
.int 354
.int 1
.int 1
.int Lt_00D3
.int 355
.int 1
.int 1
.int Lt_00D4
.int 309
.int 1
.int 1
.int Lt_00D5
.int 499
.int 1
.int 1
.int Lt_00D6
.int 493
.int 1
.int 1
.int Lt_00D7
.int 443
.int 2
.skip 4,0
.int Lt_00D8
.int 489
.int 2
.skip 4,0
.int Lt_00D9
.int 496
.int 2
.skip 4,0
.int Lt_00DA
.int 315
.int 2
.skip 4,0
.int Lt_00DB
.int 462
.int 2
.int 1
.int Lt_00DC
.int 394
.int 2
.skip 4,0
.int Lt_00DD
.int 393
.int 2
.skip 4,0
.int Lt_00DE
.int 317
.int 2
.skip 4,0
.int Lt_00DF
.int 316
.int 2
.skip 4,0
.int Lt_00E0
.int 391
.int 2
.skip 4,0
.int Lt_00E1
.int 321
.int 2
.int 1
.int Lt_00E2
.int 322
.int 2
.int 1
.int Lt_00E3
.int 323
.int 2
.int 1
.int Lt_00E4
.int 324
.int 2
.int 1
.int Lt_00E5
.int 325
.int 2
.skip 4,0
.int Lt_00E6
.int 326
.int 2
.int 1
.int Lt_00E7
.int 327
.int 2
.skip 4,0
.int Lt_00E8
.int 328
.int 2
.int 1
.int Lt_00E9
.int 329
.int 2
.int 1
.int Lt_00EA
.int 330
.int 2
.int 1
.int Lt_00EB
.int 331
.int 2
.skip 4,0
.int Lt_00EC
.int 332
.int 2
.skip 4,0
.int Lt_00ED
.int 333
.int 2
.skip 4,0
.int Lt_00EE
.int 343
.int 2
.skip 4,0
.int Lt_00EF
.int 318
.int 2
.int 1
.int Lt_00F0
.int 396
.int 2
.skip 4,0
.int Lt_00F1
.int 494
.int 2
.skip 4,0
.int Lt_00F2
.int 495
.int 2
.skip 4,0
.int Lt_00F3
.int 448
.int 2
.skip 4,0
.int Lt_00F4
.int 449
.int 2
.int 1
.int Lt_00F5
.int 450
.int 2
.skip 4,0
.int Lt_00F6
.int 451
.int 2
.int 1
.int Lt_00F7
.int 452
.int 2
.skip 4,0
.int Lt_00F8
.int 453
.int 2
.skip 4,0
.int Lt_00F9
.int 454
.int 2
.skip 4,0
.int Lt_00FA
.int 455
.int 2
.skip 4,0
.int Lt_00FB
.int 456
.int 2
.skip 4,0
.int Lt_00FC
.int 458
.int 2
.int 1
.int Lt_00FD
.int 498
.int 2
.skip 4,0
.int Lt_00FE
.int 497
.int 2
.skip 4,0
.int Lt_00FF
.int 310
.int 2
.skip 4,0
.int Lt_0100
.int 490
.int 2
.skip 4,0
.int Lt_0101
.int 491
.int 2
.skip 4,0
.int Lt_0102
.int 492
.int 2
.skip 4,0
.int Lt_0103
.int 419
.int 2
.int 2
.int Lt_0104
.int 420
.int 2
.skip 4,0
.int Lt_0105
.int 421
.int 2
.skip 4,0
.int Lt_0106
.int 422
.int 2
.skip 4,0
.int Lt_0107
.int 423
.int 2
.skip 4,0
.int Lt_0108
.int 424
.int 2
.int 1
.int Lt_0109
.int 425
.int 2
.int 1
.int Lt_010A
.int 426
.int 2
.int 2
.int Lt_010B
.int 427
.int 2
.int 2
.int Lt_010C
.int 428
.int 2
.int 2
.int Lt_010D
.int 429
.int 2
.int 2
.int Lt_010E
.int 430
.int 2
.int 1
.int Lt_010F
.int 431
.int 2
.int 1
.int Lt_0110
.int 432
.int 2
.int 1
.int Lt_0111
.int 433
.int 2
.int 2
.int Lt_0112
.int 434
.int 2
.skip 4,0
.int Lt_0113
.int 435
.int 2
.int 1
.int Lt_0114
.int 436
.int 2
.int 1
.int Lt_0115
.int 437
.int 2
.int 2
.int Lt_0116
.int 438
.int 2
.int 2
.int Lt_0117
.int 439
.int 2
.int 2
.int Lt_0118
.int 440
.int 2
.int 2
.int Lt_0119
.int 441
.int 2
.skip 4,0
.int Lt_011A
.int 442
.int 2
.skip 4,0
.int Lt_011B
.int 459
.int 2
.skip 4,0
.int Lt_011C
.int 460
.int 2
.skip 4,0
.int Lt_011D
.int 466
.int 2
.skip 4,0
.int Lt_011E
.int 467
.int 2
.skip 4,0
.int Lt_011F
.int 468
.int 2
.skip 4,0
.int Lt_0120
.int 469
.int 2
.skip 4,0
.int Lt_0121
.int 470
.int 2
.skip 4,0
.int Lt_0122
.int 471
.int 2
.skip 4,0
.int Lt_0123
.int 472
.int 2
.skip 4,0
.int Lt_0124
.int 473
.int 2
.skip 4,0
.int Lt_0125
.int 474
.int 2
.skip 4,0
.int Lt_0126
.int 475
.int 2
.int 1
.int Lt_0127
.int 476
.int 2
.skip 4,0
.int Lt_0128
.int 477
.int 2
.skip 4,0
.int Lt_0129
.int 478
.int 2
.skip 4,0
.int Lt_012A
.int 479
.int 2
.skip 4,0
.int Lt_012B
.int 480
.int 2
.int 1
.int Lt_012C
.int 481
.int 2
.skip 4,0
.int Lt_012D
.int 487
.int 2
.skip 4,0
.int Lt_012E
.int 488
.int 2
.skip 4,0
.int Lt_012F
.int 313
.int 2
.skip 4,0
.int Lt_0130
.int 482
.int 2
.skip 4,0
.int Lt_0131
.int 483
.int 2
.skip 4,0
.int Lt_0132
.int 484
.int 2
.skip 4,0
.int Lt_0133
.int 485
.int 2
.skip 4,0
.int Lt_0134
.int 486
.int 2
.skip 4,0
.int Lt_0135
.int 417
.int 2
.int 2
.int Lt_0136
.int 418
.int 2
.int 1
.int Lt_0137
.int 416
.int 2
.skip 4,0
.int Lt_0138
.int 414
.int 2
.skip 4,0
.int Lt_0139
.int 415
.int 2
.skip 4,0
.int Lt_013A
.int 500
.int 2
.skip 4,0
.int Lt_013B
.int 501
.int 2
.skip 4,0
.int Lt_013C
.int 502
.int 2
.skip 4,0
.int Lt_013D
.int 503
.int 2
.skip 4,0
.int Lt_013E
.int 504
.int 2
.skip 4,0
.int Lt_013F
.int 505
.int 2
.skip 4,0
.int Lt_0140
.int 506
.int 2
.int 1
.int Lt_0140
.int 507
.int 2
.int 4
.int Lt_0141
.int 508
.int 2
.skip 4,0
.int Lt_0142
.int 509
.int 2
.skip 4,0
.int Lt_0143
.int 510
.int 2
.int 1
.int Lt_0144
.int 511
.int 2
.int 1
.long 0
.skip 12,0
.skip 240,0

.section .rodata
.balign 4
Lt_0057:	.ascii	"AND\0"
.balign 4
Lt_0058:	.ascii	"OR\0"
.balign 4
Lt_0059:	.ascii	"ANDALSO\0"
.balign 4
Lt_005A:	.ascii	"ORELSE\0"
.balign 4
Lt_005B:	.ascii	"XOR\0"
.balign 4
Lt_005C:	.ascii	"EQV\0"
.balign 4
Lt_005D:	.ascii	"IMP\0"
.balign 4
Lt_005E:	.ascii	"NOT\0"
.balign 4
Lt_005F:	.ascii	"MOD\0"
.balign 4
Lt_0060:	.ascii	"SHL\0"
.balign 4
Lt_0061:	.ascii	"SHR\0"
.balign 4
Lt_0062:	.ascii	"NEW\0"
.balign 4
Lt_0063:	.ascii	"DELETE\0"
.balign 4
Lt_0064:	.ascii	"REM\0"
.balign 4
Lt_0065:	.ascii	"DIM\0"
.balign 4
Lt_0066:	.ascii	"ABS\0"
.balign 4
Lt_0067:	.ascii	"SGN\0"
.balign 4
Lt_0068:	.ascii	"FIX\0"
.balign 4
Lt_0069:	.ascii	"FRAC\0"
.balign 4
Lt_006A:	.ascii	"INT\0"
.balign 4
Lt_006B:	.ascii	"STATIC\0"
.balign 4
Lt_006C:	.ascii	"SHARED\0"
.balign 4
Lt_006D:	.ascii	"BYTE\0"
.balign 4
Lt_006E:	.ascii	"UBYTE\0"
.balign 4
Lt_006F:	.ascii	"SHORT\0"
.balign 4
Lt_0070:	.ascii	"USHORT\0"
.balign 4
Lt_0071:	.ascii	"INTEGER\0"
.balign 4
Lt_0072:	.ascii	"UINTEGER\0"
.balign 4
Lt_0073:	.ascii	"LONG\0"
.balign 4
Lt_0074:	.ascii	"ULONG\0"
.balign 4
Lt_0075:	.ascii	"LONGINT\0"
.balign 4
Lt_0076:	.ascii	"ULONGINT\0"
.balign 4
Lt_0077:	.ascii	"SINGLE\0"
.balign 4
Lt_0078:	.ascii	"DOUBLE\0"
.balign 4
Lt_0079:	.ascii	"STRING\0"
.balign 4
Lt_007A:	.ascii	"ZSTRING\0"
.balign 4
Lt_007B:	.ascii	"WSTRING\0"
.balign 4
Lt_007C:	.ascii	"UNSIGNED\0"
.balign 4
Lt_007D:	.ascii	"ANY\0"
.balign 4
Lt_007E:	.ascii	"PTR\0"
.balign 4
Lt_007F:	.ascii	"POINTER\0"
.balign 4
Lt_0080:	.ascii	"TYPEOF\0"
.balign 4
Lt_0081:	.ascii	"WHILE\0"
.balign 4
Lt_0082:	.ascii	"UNTIL\0"
.balign 4
Lt_0083:	.ascii	"WEND\0"
.balign 4
Lt_0084:	.ascii	"CONTINUE\0"
.balign 4
Lt_0085:	.ascii	"CBYTE\0"
.balign 4
Lt_0086:	.ascii	"CSHORT\0"
.balign 4
Lt_0087:	.ascii	"CINT\0"
.balign 4
Lt_0088:	.ascii	"CLNG\0"
.balign 4
Lt_0089:	.ascii	"CLNGINT\0"
.balign 4
Lt_008A:	.ascii	"CUBYTE\0"
.balign 4
Lt_008B:	.ascii	"CUSHORT\0"
.balign 4
Lt_008C:	.ascii	"CUINT\0"
.balign 4
Lt_008D:	.ascii	"CULNG\0"
.balign 4
Lt_008E:	.ascii	"CULNGINT\0"
.balign 4
Lt_008F:	.ascii	"CSNG\0"
.balign 4
Lt_0090:	.ascii	"CDBL\0"
.balign 4
Lt_0091:	.ascii	"CSIGN\0"
.balign 4
Lt_0092:	.ascii	"CUNSG\0"
.balign 4
Lt_0093:	.ascii	"CPTR\0"
.balign 4
Lt_0094:	.ascii	"CAST\0"
.balign 4
Lt_0095:	.ascii	"CALL\0"
.balign 4
Lt_0096:	.ascii	"BYVAL\0"
.balign 4
Lt_0097:	.ascii	"BYREF\0"
.balign 4
Lt_0098:	.ascii	"AS\0"
.balign 4
Lt_0099:	.ascii	"DECLARE\0"
.balign 4
Lt_009A:	.ascii	"GOTO\0"
.balign 4
Lt_009B:	.ascii	"CONST\0"
.balign 4
Lt_009C:	.ascii	"FOR\0"
.balign 4
Lt_009D:	.ascii	"STEP\0"
.balign 4
Lt_009E:	.ascii	"NEXT\0"
.balign 4
Lt_009F:	.ascii	"TO\0"
.balign 4
Lt_00A0:	.ascii	"TYPE\0"
.balign 4
Lt_00A1:	.ascii	"UNION\0"
.balign 4
Lt_00A2:	.ascii	"END\0"
.balign 4
Lt_00A3:	.ascii	"SUB\0"
.balign 4
Lt_00A4:	.ascii	"FUNCTION\0"
.balign 4
Lt_00A5:	.ascii	"CDECL\0"
.balign 4
Lt_00A6:	.ascii	"STDCALL\0"
.balign 4
Lt_00A7:	.ascii	"PASCAL\0"
.balign 4
Lt_00A8:	.ascii	"ALIAS\0"
.balign 4
Lt_00A9:	.ascii	"LIB\0"
.balign 4
Lt_00AA:	.ascii	"LET\0"
.balign 4
Lt_00AB:	.ascii	"EXIT\0"
.balign 4
Lt_00AC:	.ascii	"DO\0"
.balign 4
Lt_00AD:	.ascii	"LOOP\0"
.balign 4
Lt_00AE:	.ascii	"RETURN\0"
.balign 4
Lt_00AF:	.ascii	"IF\0"
.balign 4
Lt_00B0:	.ascii	"THEN\0"
.balign 4
Lt_00B1:	.ascii	"ELSE\0"
.balign 4
Lt_00B2:	.ascii	"ELSEIF\0"
.balign 4
Lt_00B3:	.ascii	"ENDIF\0"
.balign 4
Lt_00B4:	.ascii	"SELECT\0"
.balign 4
Lt_00B5:	.ascii	"CASE\0"
.balign 4
Lt_00B6:	.ascii	"IS\0"
.balign 4
Lt_00B7:	.ascii	"USING\0"
.balign 4
Lt_00B8:	.ascii	"LEN\0"
.balign 4
Lt_00B9:	.ascii	"PEEK\0"
.balign 4
Lt_00BA:	.ascii	"POKE\0"
.balign 4
Lt_00BB:	.ascii	"SWAP\0"
.balign 4
Lt_00BC:	.ascii	"COMMON\0"
.balign 4
Lt_00BD:	.ascii	"ENUM\0"
.balign 4
Lt_00BE:	.ascii	"ASM\0"
.balign 4
Lt_00BF:	.ascii	"EXTERN\0"
.balign 4
Lt_00C0:	.ascii	"WITH\0"
.balign 4
Lt_00C1:	.ascii	"SCOPE\0"
.balign 4
Lt_00C2:	.ascii	"PUBLIC\0"
.balign 4
Lt_00C3:	.ascii	"PRIVATE\0"
.balign 4
Lt_00C4:	.ascii	"PROTECTED\0"
.balign 4
Lt_00C5:	.ascii	"PROCPTR\0"
.balign 4
Lt_00C6:	.ascii	"NAMESPACE\0"
.balign 4
Lt_00C7:	.ascii	"EXPORT\0"
.balign 4
Lt_00C8:	.ascii	"IMPORT\0"
.balign 4
Lt_00C9:	.ascii	"OVERLOAD\0"
.balign 4
Lt_00CA:	.ascii	"CONSTRUCTOR\0"
.balign 4
Lt_00CB:	.ascii	"DESTRUCTOR\0"
.balign 4
Lt_00CC:	.ascii	"OPERATOR\0"
.balign 4
Lt_00CD:	.ascii	"PROPERTY\0"
.balign 4
Lt_00CE:	.ascii	"CLASS\0"
.balign 4
Lt_00CF:	.ascii	"EXTENDS\0"
.balign 4
Lt_00D0:	.ascii	"IMPLEMENTS\0"
.balign 4
Lt_00D1:	.ascii	"BASE\0"
.balign 4
Lt_00D2:	.ascii	"VIRTUAL\0"
.balign 4
Lt_00D3:	.ascii	"ABSTRACT\0"
.balign 4
Lt_00D4:	.ascii	"VAR\0"
.balign 4
Lt_00D5:	.ascii	"IIF\0"
.balign 4
Lt_00D6:	.ascii	"VA_FIRST\0"
.balign 4
Lt_00D7:	.ascii	"DATA\0"
.balign 4
Lt_00D8:	.ascii	"FIELD\0"
.balign 4
Lt_00D9:	.ascii	"LOCAL\0"
.balign 4
Lt_00DA:	.ascii	"DEFINED\0"
.balign 4
Lt_00DB:	.ascii	"SIZEOF\0"
.balign 4
Lt_00DC:	.ascii	"STRPTR\0"
.balign 4
Lt_00DD:	.ascii	"VARPTR\0"
.balign 4
Lt_00DE:	.ascii	"DYNAMIC\0"
.balign 4
Lt_00DF:	.ascii	"INCLUDE\0"
.balign 4
Lt_00E0:	.ascii	"GOSUB\0"
.balign 4
Lt_00E1:	.ascii	"DEFBYTE\0"
.balign 4
Lt_00E2:	.ascii	"DEFUBYTE\0"
.balign 4
Lt_00E3:	.ascii	"DEFSHORT\0"
.balign 4
Lt_00E4:	.ascii	"DEFUSHORT\0"
.balign 4
Lt_00E5:	.ascii	"DEFINT\0"
.balign 4
Lt_00E6:	.ascii	"DEFUINT\0"
.balign 4
Lt_00E7:	.ascii	"DEFLNG\0"
.balign 4
Lt_00E8:	.ascii	"DEFULNG\0"
.balign 4
Lt_00E9:	.ascii	"DEFLONGINT\0"
.balign 4
Lt_00EA:	.ascii	"DEFULONGINT\0"
.balign 4
Lt_00EB:	.ascii	"DEFSNG\0"
.balign 4
Lt_00EC:	.ascii	"DEFDBL\0"
.balign 4
Lt_00ED:	.ascii	"DEFSTR\0"
.balign 4
Lt_00EE:	.ascii	"OPTION\0"
.balign 4
Lt_00EF:	.ascii	"EXPLICIT\0"
.balign 4
Lt_00F0:	.ascii	"SADD\0"
.balign 4
Lt_00F1:	.ascii	"ON\0"
.balign 4
Lt_00F2:	.ascii	"ERROR\0"
.balign 4
Lt_00F3:	.ascii	"SIN\0"
.balign 4
Lt_00F4:	.ascii	"ASIN\0"
.balign 4
Lt_00F5:	.ascii	"COS\0"
.balign 4
Lt_00F6:	.ascii	"ACOS\0"
.balign 4
Lt_00F7:	.ascii	"TAN\0"
.balign 4
Lt_00F8:	.ascii	"ATN\0"
.balign 4
Lt_00F9:	.ascii	"SQR\0"
.balign 4
Lt_00FA:	.ascii	"LOG\0"
.balign 4
Lt_00FB:	.ascii	"EXP\0"
.balign 4
Lt_00FC:	.ascii	"ATAN2\0"
.balign 4
Lt_00FD:	.ascii	"RESUME\0"
.balign 4
Lt_00FE:	.ascii	"ERR\0"
.balign 4
Lt_00FF:	.ascii	"REDIM\0"
.balign 4
Lt_0100:	.ascii	"ERASE\0"
.balign 4
Lt_0101:	.ascii	"LBOUND\0"
.balign 4
Lt_0102:	.ascii	"UBOUND\0"
.balign 4
Lt_0103:	.ascii	"STR\0"
.balign 4
Lt_0104:	.ascii	"CVD\0"
.balign 4
Lt_0105:	.ascii	"CVS\0"
.balign 4
Lt_0106:	.ascii	"CVI\0"
.balign 4
Lt_0107:	.ascii	"CVL\0"
.balign 4
Lt_0108:	.ascii	"CVSHORT\0"
.balign 4
Lt_0109:	.ascii	"CVLONGINT\0"
.balign 4
Lt_010A:	.ascii	"MKD\0"
.balign 4
Lt_010B:	.ascii	"MKS\0"
.balign 4
Lt_010C:	.ascii	"MKI\0"
.balign 4
Lt_010D:	.ascii	"MKL\0"
.balign 4
Lt_010E:	.ascii	"MKSHORT\0"
.balign 4
Lt_010F:	.ascii	"MKLONGINT\0"
.balign 4
Lt_0110:	.ascii	"WSTR\0"
.balign 4
Lt_0111:	.ascii	"MID\0"
.balign 4
Lt_0112:	.ascii	"INSTR\0"
.balign 4
Lt_0113:	.ascii	"INSTRREV\0"
.balign 4
Lt_0114:	.ascii	"TRIM\0"
.balign 4
Lt_0115:	.ascii	"RTRIM\0"
.balign 4
Lt_0116:	.ascii	"LTRIM\0"
.balign 4
Lt_0117:	.ascii	"LCASE\0"
.balign 4
Lt_0118:	.ascii	"UCASE\0"
.balign 4
Lt_0119:	.ascii	"RESTORE\0"
.balign 4
Lt_011A:	.ascii	"READ\0"
.balign 4
Lt_011B:	.ascii	"PRINT\0"
.balign 4
Lt_011C:	.ascii	"LPRINT\0"
.balign 4
Lt_011D:	.ascii	"OPEN\0"
.balign 4
Lt_011E:	.ascii	"CLOSE\0"
.balign 4
Lt_011F:	.ascii	"SEEK\0"
.balign 4
Lt_0120:	.ascii	"PUT\0"
.balign 4
Lt_0121:	.ascii	"GET\0"
.balign 4
Lt_0122:	.ascii	"ACCESS\0"
.balign 4
Lt_0123:	.ascii	"WRITE\0"
.balign 4
Lt_0124:	.ascii	"LOCK\0"
.balign 4
Lt_0125:	.ascii	"INPUT\0"
.balign 4
Lt_0126:	.ascii	"WINPUT\0"
.balign 4
Lt_0127:	.ascii	"OUTPUT\0"
.balign 4
Lt_0128:	.ascii	"BINARY\0"
.balign 4
Lt_0129:	.ascii	"RANDOM\0"
.balign 4
Lt_012A:	.ascii	"APPEND\0"
.balign 4
Lt_012B:	.ascii	"ENCODING\0"
.balign 4
Lt_012C:	.ascii	"NAME\0"
.balign 4
Lt_012D:	.ascii	"WIDTH\0"
.balign 4
Lt_012E:	.ascii	"COLOR\0"
.balign 4
Lt_012F:	.ascii	"PRESERVE\0"
.balign 4
Lt_0130:	.ascii	"SPC\0"
.balign 4
Lt_0131:	.ascii	"TAB\0"
.balign 4
Lt_0132:	.ascii	"LINE\0"
.balign 4
Lt_0133:	.ascii	"VIEW\0"
.balign 4
Lt_0134:	.ascii	"UNLOCK\0"
.balign 4
Lt_0135:	.ascii	"CHR\0"
.balign 4
Lt_0136:	.ascii	"WCHR\0"
.balign 4
Lt_0137:	.ascii	"ASC\0"
.balign 4
Lt_0138:	.ascii	"LSET\0"
.balign 4
Lt_0139:	.ascii	"RSET\0"
.balign 4
Lt_013A:	.ascii	"PSET\0"
.balign 4
Lt_013B:	.ascii	"PRESET\0"
.balign 4
Lt_013C:	.ascii	"POINT\0"
.balign 4
Lt_013D:	.ascii	"CIRCLE\0"
.balign 4
Lt_013E:	.ascii	"WINDOW\0"
.balign 4
Lt_013F:	.ascii	"PALETTE\0"
.balign 4
Lt_0140:	.ascii	"SCREEN\0"
.balign 4
Lt_0141:	.ascii	"PAINT\0"
.balign 4
Lt_0142:	.ascii	"DRAW\0"
.balign 4
Lt_0143:	.ascii	"IMAGECREATE\0"
.balign 4
Lt_0144:	.ascii	"THREADCALL\0"
.balign 4
Lt_014D:	.ascii	"__\0"

.section .ctors, "aw", @progbits
.int fb_ctor__symbzkeyword
