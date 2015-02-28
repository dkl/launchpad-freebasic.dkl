	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/emit_x86.bas' compilation started at 15:27:34 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl HISREGFREE
HISREGFREE:
.type HISREGFREE, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_02D8:
cmp dword ptr [ebp+8], 0
jne .Lt_02DB
cmp dword ptr [ebp+12], 4
je .Lt_02DE
.Lt_02DF:
cmp dword ptr [ebp+12], 2
je .Lt_02DE
.Lt_02E0:
cmp dword ptr [ebp+12], 1
jne .Lt_02DD
.Lt_02DE:
mov eax, 1
mov cl, byte ptr [ebp+12]
sal eax, cl
and eax, dword ptr [EMIT+132]
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_02E2
mov dword ptr [ebp-4], 0
jmp .Lt_02D9
.Lt_02E2:
.Lt_02E1:
.Lt_02DD:
.Lt_02DC:
.Lt_02DB:
.Lt_02DA:
mov eax, dword ptr [ebp+8]
sal eax, 2
mov ebx, offset EMIT
add ebx, eax
mov eax, 1
mov cl, byte ptr [ebp+12]
sal eax, cl
or dword ptr [ebx+132], eax
mov eax, dword ptr [ebp+8]
sal eax, 2
mov ebx, dword ptr [EMIT+128]
add ebx, eax
mov eax, 1
mov cl, byte ptr [ebp+12]
sal eax, cl
and eax, dword ptr [ebx+40]
test eax, eax
setne al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-4], eax
.Lt_02D9:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HISREGFREE, .-HISREGFREE
.balign 16

.globl HFINDREGNOTINVREG
HFINDREGNOTINVREG:
.type HFINDREGNOTINVREG, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
mov dword ptr [ebp-4], 0
.Lt_02E5:
mov dword ptr [ebp-4], -1
mov dword ptr [ebp-12], -1
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-24], ebx
cmp dword ptr [ebp-24], 4
jne .Lt_02E9
.Lt_02EA:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+12]
mov dword ptr [ebp-12], eax
jmp .Lt_02E7
.Lt_02E9:
cmp dword ptr [ebp-24], 2
je .Lt_02EC
.Lt_02ED:
cmp dword ptr [ebp-24], 3
jne .Lt_02EB
.Lt_02EC:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+48], 0
je .Lt_02EF
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+48]
cmp dword ptr [ebx], 4
jne .Lt_02F1
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+48]
mov ebx, dword ptr [eax+12]
mov dword ptr [ebp-12], ebx
.Lt_02F1:
.Lt_02F0:
.Lt_02EF:
.Lt_02EE:
.Lt_02EB:
.Lt_02E7:
mov dword ptr [ebp-16], -1
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx+52], 0
je .Lt_02F3
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+52]
cmp dword ptr [eax], 4
jne .Lt_02F5
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+52]
mov eax, dword ptr [ebx+12]
mov dword ptr [ebp-16], eax
.Lt_02F5:
.Lt_02F4:
.Lt_02F3:
.Lt_02F2:
push dword ptr [EMIT+8]
mov eax, dword ptr [EMIT+8]
call dword ptr [eax+24]
add esp, 4
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-16], -1
jne .Lt_02F7
cmp dword ptr [ebp+12], 0
jne .Lt_02F9
mov eax, dword ptr [ebp-20]
dec eax
mov dword ptr [ebp-24], eax
jmp .Lt_02FA
.Lt_02FD:
mov eax, dword ptr [ebp-12]
cmp dword ptr [ebp-24], eax
je .Lt_02FF
mov eax, dword ptr [ebp-24]
mov dword ptr [ebp-4], eax
push dword ptr [ebp-24]
push 0
call HISREGFREE
add esp, 8
test eax, eax
je .Lt_0301
jmp .Lt_02FC
.Lt_0301:
.Lt_0300:
.Lt_02FF:
.Lt_02FE:
.Lt_02FB:
dec dword ptr [ebp-24]
.Lt_02FA:
cmp dword ptr [ebp-24], 0
jge .Lt_02FD
.Lt_02FC:
jmp .Lt_02F8
.Lt_02F9:
mov eax, dword ptr [ebp-20]
dec eax
mov dword ptr [ebp-24], eax
jmp .Lt_0302
.Lt_0305:
mov eax, dword ptr [ebp-12]
cmp dword ptr [ebp-24], eax
je .Lt_0307
cmp dword ptr [ebp-24], 2
je .Lt_0309
cmp dword ptr [ebp-24], 1
je .Lt_030B
mov eax, dword ptr [ebp-24]
mov dword ptr [ebp-4], eax
push dword ptr [ebp-24]
push 0
call HISREGFREE
add esp, 8
test eax, eax
je .Lt_030D
jmp .Lt_0304
.Lt_030D:
.Lt_030C:
.Lt_030B:
.Lt_030A:
.Lt_0309:
.Lt_0308:
.Lt_0307:
.Lt_0306:
.Lt_0303:
dec dword ptr [ebp-24]
.Lt_0302:
cmp dword ptr [ebp-24], 0
jge .Lt_0305
.Lt_0304:
.Lt_02F8:
jmp .Lt_02F6
.Lt_02F7:
cmp dword ptr [ebp+12], 0
jne .Lt_030F
mov eax, dword ptr [ebp-20]
dec eax
mov dword ptr [ebp-24], eax
jmp .Lt_0310
.Lt_0313:
mov eax, dword ptr [ebp-12]
cmp eax, dword ptr [ebp-24]
setne al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp-16]
cmp ebx, dword ptr [ebp-24]
setne bl
shr ebx, 1
sbb ebx, ebx
and eax, ebx
je .Lt_0315
mov ebx, dword ptr [ebp-24]
mov dword ptr [ebp-4], ebx
push dword ptr [ebp-24]
push 0
call HISREGFREE
add esp, 8
test eax, eax
je .Lt_0317
jmp .Lt_0312
.Lt_0317:
.Lt_0316:
.Lt_0315:
.Lt_0314:
.Lt_0311:
dec dword ptr [ebp-24]
.Lt_0310:
cmp dword ptr [ebp-24], 0
jge .Lt_0313
.Lt_0312:
jmp .Lt_030E
.Lt_030F:
mov eax, dword ptr [ebp-20]
dec eax
mov dword ptr [ebp-8], eax
jmp .Lt_0318
.Lt_031B:
mov eax, dword ptr [ebp-12]
cmp eax, dword ptr [ebp-8]
setne al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp-16]
cmp ebx, dword ptr [ebp-8]
setne bl
shr ebx, 1
sbb ebx, ebx
and eax, ebx
je .Lt_031D
cmp dword ptr [ebp-8], 2
je .Lt_031F
cmp dword ptr [ebp-8], 1
je .Lt_0321
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ebx
push dword ptr [ebp-8]
push 0
call HISREGFREE
add esp, 8
test eax, eax
je .Lt_0323
jmp .Lt_031A
.Lt_0323:
.Lt_0322:
.Lt_0321:
.Lt_0320:
.Lt_031F:
.Lt_031E:
.Lt_031D:
.Lt_031C:
.Lt_0319:
dec dword ptr [ebp-8]
.Lt_0318:
cmp dword ptr [ebp-8], 0
jge .Lt_031B
.Lt_031A:
.Lt_030E:
.Lt_02F6:
.Lt_02E6:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HFINDREGNOTINVREG, .-HFINDREGNOTINVREG
.balign 16

.globl HFINDFREEREG
HFINDFREEREG:
.type HFINDFREEREG, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0328:
mov dword ptr [ebp-4], -1
mov eax, dword ptr [ebp+8]
sal eax, 2
mov ebx, offset EMIT
add ebx, eax
push dword ptr [ebx+8]
mov ebx, dword ptr [ebp+8]
sal ebx, 2
mov eax, offset EMIT
add eax, ebx
mov ebx, dword ptr [eax+8]
call dword ptr [ebx+24]
add esp, 4
dec eax
mov dword ptr [ebp-8], eax
jmp .Lt_032A
.Lt_032D:
push dword ptr [ebp-8]
push dword ptr [ebp+8]
call HISREGFREE
add esp, 8
test eax, eax
je .Lt_032F
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
jmp .Lt_0329
.Lt_032F:
.Lt_032E:
.Lt_032B:
dec dword ptr [ebp-8]
.Lt_032A:
cmp dword ptr [ebp-8], 0
jge .Lt_032D
.Lt_032C:
.Lt_0329:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HFINDFREEREG, .-HFINDFREEREG
.balign 16

.globl HISREGINVREG
HISREGINVREG:
.type HISREGINVREG, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0330:
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-8], ebx
cmp dword ptr [ebp-8], 4
jne .Lt_0334
.Lt_0335:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp+12]
cmp dword ptr [ebx+12], eax
jne .Lt_0337
mov dword ptr [ebp-4], -1
jmp .Lt_0331
.Lt_0337:
.Lt_0336:
jmp .Lt_0332
.Lt_0334:
cmp dword ptr [ebp-8], 2
je .Lt_0339
.Lt_033A:
cmp dword ptr [ebp-8], 3
jne .Lt_0338
.Lt_0339:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+48], 0
je .Lt_033C
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+48]
cmp dword ptr [ebx], 4
jne .Lt_033E
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+48]
mov ebx, dword ptr [ebp+12]
cmp dword ptr [eax+12], ebx
jne .Lt_0340
mov dword ptr [ebp-4], -1
jmp .Lt_0331
.Lt_0340:
.Lt_033F:
.Lt_033E:
.Lt_033D:
.Lt_033C:
.Lt_033B:
.Lt_0338:
.Lt_0332:
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx+52], 0
je .Lt_0342
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+52]
cmp dword ptr [eax], 4
jne .Lt_0344
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+52]
mov eax, dword ptr [ebp+12]
cmp dword ptr [ebx+12], eax
jne .Lt_0346
mov dword ptr [ebp-4], -1
.Lt_0346:
.Lt_0345:
.Lt_0344:
.Lt_0343:
.Lt_0342:
.Lt_0341:
.Lt_0331:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HISREGINVREG, .-HISREGINVREG
.balign 16

.globl HGETREGNAME
HGETREGNAME:
.type HGETREGNAME, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_0347:
cmp dword ptr [ebp+12], -1
jne .Lt_034A
mov dword ptr [ebp-4], 0
jmp .Lt_0349
.Lt_034A:
mov eax, dword ptr [ebp+8]
and eax, 480
je .Lt_034B
mov dword ptr [ebp-12], 22
jmp .Lt_034D
.Lt_034B:
mov eax, dword ptr [ebp+8]
and eax, 31
mov dword ptr [ebp-12], eax
.Lt_034D:
mov eax, dword ptr [ebp-12]
sal eax, 4
mov ebx, dword ptr [DTYPETB+eax]
mov dword ptr [ebp-8], ebx
mov ebx, dword ptr [ebp-8]
sal ebx, 3
add ebx, dword ptr [ebp+12]
lea eax, [RNAMETB+ebx*8]
mov dword ptr [ebp-4], eax
.Lt_0349:
.Lt_0348:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HGETREGNAME, .-HGETREGNAME
.balign 16

.globl HPREPOPERAND
HPREPOPERAND:
.type HPREPOPERAND, @function
push ebp
mov ebp, esp
sub esp, 40
push ebx
.Lt_0369:
cmp dword ptr [ebp+8], 0
jne .Lt_036C
push 0
push 1
push offset Lt_0000
push -1
push dword ptr [ebp+12]
call fb_StrAssign
add esp, 20
jmp .Lt_036A
.Lt_036C:
.Lt_036B:
cmp dword ptr [ebp+16], -2147483648
jne .Lt_036E
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp+16], ebx
.Lt_036E:
.Lt_036D:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx]
mov dword ptr [ebp-4], eax
jmp .Lt_0370
.Lt_0372:
cmp dword ptr [ebp+28], 0
je .Lt_0374
push 0
push 12
mov eax, dword ptr [ebp+16]
sal eax, 4
lea ebx, [DTYPETB+eax+4]
push ebx
push -1
push dword ptr [ebp+12]
call fb_StrAssign
add esp, 20
push 0
push -1
push 3
push offset Lt_0375
push -1
push dword ptr [ebp+12]
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
lea ebx, [ebp-28]
push ebx
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+12]
call fb_StrAssign
add esp, 20
jmp .Lt_0373
.Lt_0374:
push 0
push 2
push offset Lt_0377
push -1
push dword ptr [ebp+12]
call fb_StrAssign
add esp, 20
.Lt_0373:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 1
jne .Lt_0379
mov eax, dword ptr [ebp+8]
push dword ptr [eax+32]
call SYMBGETMANGLEDNAME
add esp, 4
mov dword ptr [Lt_039C], eax
jmp .Lt_0378
.Lt_0379:
push dword ptr [ebp+8]
call HGETIDXNAME
add esp, 4
mov dword ptr [Lt_039C], eax
.Lt_0378:
cmp dword ptr [Lt_039C], 0
je .Lt_037B
push 0
push -1
push 0
push dword ptr [Lt_039C]
push -1
push dword ptr [ebp+12]
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
lea eax, [ebp-28]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+12]
call fb_StrAssign
add esp, 20
.Lt_037B:
.Lt_037A:
mov ebx, dword ptr [ebp+20]
mov eax, ebx
sar eax, 31
mov ecx, dword ptr [ebp+8]
add ebx, dword ptr [ecx+36]
adc eax, dword ptr [ecx+40]
mov ecx, ebx
mov dword ptr [ebp+20], ecx
cmp dword ptr [ebp+24], 0
je .Lt_037E
add dword ptr [ebp+20], 4
.Lt_037E:
.Lt_037D:
cmp dword ptr [ebp+20], 0
jle .Lt_0380
cmp dword ptr [Lt_039C], 0
je .Lt_0382
push 0
push -1
push 2
push offset Lt_0356
push -1
push dword ptr [ebp+12]
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
lea ecx, [ebp-40]
push ecx
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+12]
call fb_StrAssign
add esp, 20
.Lt_0382:
.Lt_0381:
push 0
push -1
push -1
push dword ptr [ebp+20]
call fb_IntToStr
add esp, 4
push eax
push -1
push dword ptr [ebp+12]
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
lea eax, [ebp-28]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+12]
call fb_StrAssign
add esp, 20
jmp .Lt_037F
.Lt_0380:
cmp dword ptr [ebp+20], 0
jge .Lt_0385
push 0
push -1
push -1
push dword ptr [ebp+20]
call fb_IntToStr
add esp, 4
push eax
push -1
push dword ptr [ebp+12]
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
lea eax, [ebp-28]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+12]
call fb_StrAssign
add esp, 20
jmp .Lt_037F
.Lt_0385:
cmp dword ptr [Lt_039C], 0
jne .Lt_0388
push 0
push -1
push 2
push offset Lt_0006
push -1
push dword ptr [ebp+12]
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
lea eax, [ebp-28]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+12]
call fb_StrAssign
add esp, 20
.Lt_0388:
.Lt_0387:
.Lt_037F:
push 0
push -1
push 2
push offset Lt_038A
push -1
push dword ptr [ebp+12]
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
lea eax, [ebp-16]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+12]
call fb_StrAssign
add esp, 20
jmp .Lt_036F
.Lt_038C:
push 0
push 8
push offset Lt_038D
push -1
push dword ptr [ebp+12]
call fb_StrAssign
add esp, 20
push 0
push -1
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax+32]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
push -1
push dword ptr [ebp+12]
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
lea eax, [ebp-16]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+12]
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+40], 0
jne .Lt_039D
cmp dword ptr [eax+36], 0
je .Lt_0390
.Lt_039D:
push 0
push -1
push 4
push offset Lt_0391
push -1
push dword ptr [ebp+12]
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
lea eax, [ebp-28]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+12]
call fb_StrAssign
add esp, 20
push 0
push -1
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+40]
push dword ptr [eax+36]
call fb_LongintToStr
add esp, 8
push eax
push -1
push dword ptr [ebp+12]
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
lea eax, [ebp-40]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+12]
call fb_StrAssign
add esp, 20
.Lt_0390:
.Lt_038F:
jmp .Lt_036F
.Lt_0394:
cmp dword ptr [ebp+24], 0
jne .Lt_0396
push 0
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax+12]
push dword ptr [ebp+16]
call HGETREGNAME
add esp, 8
push eax
push -1
push dword ptr [ebp+12]
call fb_StrAssign
add esp, 20
jmp .Lt_0395
.Lt_0396:
push 0
push 0
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+52]
push dword ptr [ecx+12]
push dword ptr [ebp+16]
call HGETREGNAME
add esp, 8
push eax
push -1
push dword ptr [ebp+12]
call fb_StrAssign
add esp, 20
.Lt_0395:
jmp .Lt_036F
.Lt_0397:
cmp dword ptr [ebp+24], 0
jne .Lt_0399
push 0
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+28]
push dword ptr [eax+24]
call fb_LongintToStr
add esp, 8
push eax
push -1
push dword ptr [ebp+12]
call fb_StrAssign
add esp, 20
jmp .Lt_0398
.Lt_0399:
push 0
push -1
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+52]
push dword ptr [ecx+28]
push dword ptr [ecx+24]
call fb_LongintToStr
add esp, 8
push eax
push -1
push dword ptr [ebp+12]
call fb_StrAssign
add esp, 20
.Lt_0398:
jmp .Lt_036F
.Lt_039A:
push 0
push 1
push offset Lt_0000
push -1
push dword ptr [ebp+12]
call fb_StrAssign
add esp, 20
jmp .Lt_036F
.Lt_0370:
cmp dword ptr [ebp-4], 5
ja .Lt_039A
mov eax, dword ptr [ebp-4]
jmp dword ptr [.LT_039B+eax*4]
.LT_039B:
.int .Lt_0397
.int .Lt_0372
.int .Lt_0372
.int .Lt_0372
.int .Lt_0394
.int .Lt_038C
.Lt_036F:
.Lt_036A:
pop ebx
mov esp, ebp
pop ebp
ret
.size HPREPOPERAND, .-HPREPOPERAND

.section .bss
.balign 4
	.lcomm	Lt_039C,4

.section .text
.balign 16

.globl HPREPOPERAND64
HPREPOPERAND64:
.type HPREPOPERAND64, @function
push ebp
mov ebp, esp
.Lt_039E:
push -1
push 0
push 0
push 8
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push -1
push -1
push 0
push 7
push dword ptr [ebp+16]
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
.Lt_039F:
mov esp, ebp
pop ebp
ret
.size HPREPOPERAND64, .-HPREPOPERAND64
.balign 16

.globl OUTP
OUTP:
.type OUTP, @function
push ebp
mov ebp, esp
sub esp, 12
.Lt_03A6:
cmp dword ptr [ENV+144], 0
je .Lt_03A9
push 0
push 2
push offset Lt_03AA
push -1
push offset Lt_03AD
call fb_StrAssign
add esp, 20
push 0
push -1
push 0
push dword ptr [ebp+8]
push -1
push offset Lt_03AD
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_03AD
call fb_StrAssign
add esp, 20
jmp .Lt_03A8
.Lt_03A9:
push 0
push 0
push dword ptr [ebp+8]
push -1
push offset Lt_03AD
call fb_StrAssign
add esp, 20
.Lt_03A8:
push 0
push 2
push offset Lt_03AC
push -1
push offset Lt_03AD
call fb_StrConcatAssign
add esp, 20
push -1
push offset Lt_03AD
call fb_StrLen
add esp, 8
push eax
push dword ptr [Lt_03AD]
call OUTEX
add esp, 8
.Lt_03A7:
mov esp, ebp
pop ebp
ret
.size OUTP, .-OUTP

.section .bss
.balign 4
	.lcomm	Lt_03AD,12

.section .text
.balign 16

.globl HBRANCH
HBRANCH:
.type HBRANCH, @function
push ebp
mov ebp, esp
sub esp, 12
.Lt_03AE:
push 0
push 0
push dword ptr [ebp+8]
push -1
push offset Lt_03B2
call fb_StrAssign
add esp, 20
push 0
push 2
push offset Lt_03B0
push -1
push offset Lt_03B2
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push 0
push dword ptr [ebp+12]
push -1
push offset Lt_03B2
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_03B2
call fb_StrAssign
add esp, 20
push dword ptr [Lt_03B2]
call OUTP
add esp, 4
.Lt_03AF:
mov esp, ebp
pop ebp
ret
.size HBRANCH, .-HBRANCH

.section .bss
.balign 4
	.lcomm	Lt_03B2,12

.section .text
.balign 16

.globl HPUSH
HPUSH:
.type HPUSH, @function
push ebp
mov ebp, esp
sub esp, 12
.Lt_03B3:
push 0
push 6
push offset Lt_03B5
push -1
push offset Lt_03B7
call fb_StrAssign
add esp, 20
push 0
push -1
push 0
push dword ptr [ebp+8]
push -1
push offset Lt_03B7
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_03B7
call fb_StrAssign
add esp, 20
push dword ptr [Lt_03B7]
call OUTP
add esp, 4
.Lt_03B4:
mov esp, ebp
pop ebp
ret
.size HPUSH, .-HPUSH

.section .bss
.balign 4
	.lcomm	Lt_03B7,12

.section .text
.balign 16

.globl HPOP
HPOP:
.type HPOP, @function
push ebp
mov ebp, esp
sub esp, 12
.Lt_03B8:
push 0
push 5
push offset Lt_03BA
push -1
push offset Lt_03BC
call fb_StrAssign
add esp, 20
push 0
push -1
push 0
push dword ptr [ebp+8]
push -1
push offset Lt_03BC
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_03BC
call fb_StrAssign
add esp, 20
push dword ptr [Lt_03BC]
call OUTP
add esp, 4
.Lt_03B9:
mov esp, ebp
pop ebp
ret
.size HPOP, .-HPOP

.section .bss
.balign 4
	.lcomm	Lt_03BC,12

.section .text
.balign 16

.globl HMOV
HMOV:
.type HMOV, @function
push ebp
mov ebp, esp
sub esp, 24
.Lt_03BD:
push 0
push 5
push offset Lt_03BF
push -1
push offset Lt_03C2
call fb_StrAssign
add esp, 20
push 0
push -1
push 0
push dword ptr [ebp+8]
push -1
push offset Lt_03C2
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_03C2
call fb_StrAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_03C2
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push 0
push dword ptr [ebp+12]
push -1
push offset Lt_03C2
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ebp-24]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_03C2
call fb_StrAssign
add esp, 20
push dword ptr [Lt_03C2]
call OUTP
add esp, 4
.Lt_03BE:
mov esp, ebp
pop ebp
ret
.size HMOV, .-HMOV

.section .bss
.balign 4
	.lcomm	Lt_03C2,12

.section .text
.balign 16

.globl HLABEL
HLABEL:
.type HLABEL, @function
push ebp
mov ebp, esp
.Lt_03D2:
push 0
push 0
push dword ptr [ebp+8]
push -1
push offset Lt_03D6
call fb_StrAssign
add esp, 20
push 0
push 3
push offset Lt_03D5
push -1
push offset Lt_03D6
call fb_StrConcatAssign
add esp, 20
push 0
push dword ptr [Lt_03D6]
call OUTEX
add esp, 8
.Lt_03D3:
mov esp, ebp
pop ebp
ret
.size HLABEL, .-HLABEL

.section .bss
.balign 4
	.lcomm	Lt_03D6,12

.section .text
.balign 16

.globl EMITVARINIBEGIN
EMITVARINIBEGIN:
.type EMITVARINIBEGIN, @function
push ebp
mov ebp, esp
push ebx
.Lt_0AFC:
push 0
push 1
call _SETSECTION
add esp, 8
push 1
push dword ptr [ebp+8]
call EDBGEMITGLOBALVAR
add esp, 8
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+24]
and ebx, 511
cmp ebx, 15
jne .Lt_0AFF
push 8
call HALIGN
add esp, 4
jmp .Lt_0AFE
.Lt_0AFF:
push 4
call HALIGN
add esp, 4
.Lt_0AFE:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 32
test eax, eax
je .Lt_0B01
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 256
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
push ebx
push dword ptr [ebp+8]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
call HPUBLIC
add esp, 8
.Lt_0B01:
.Lt_0B00:
push dword ptr [ebp+8]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
call HLABEL
add esp, 4
.Lt_0AFD:
pop ebx
mov esp, ebp
pop ebp
ret
.size EMITVARINIBEGIN, .-EMITVARINIBEGIN
.balign 16

.globl EMITVARINII
EMITVARINII:
.type EMITVARINII, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
.Lt_0B03:
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
push 0
push -1
push 2
push offset Lt_03B0
push 0
push dword ptr [ebp+8]
call _GETTYPESTRING
add esp, 4
push eax
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ebp-24]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ebp+8]
cmp eax, 12
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp+8]
cmp ebx, 13
sete bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
je .Lt_0B07
push 0
push 3
push offset Lt_0B08
push -1
lea ebx, [ebp-12]
push ebx
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call fb_HEX_l
add esp, 8
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_0B06
.Lt_0B07:
push 0
push -1
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call fb_LongintToStr
add esp, 8
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_0B06:
push 0
push 2
push offset Lt_03AC
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push dword ptr [ebp-12]
call OUTEX
add esp, 8
lea eax, [ebp-12]
push eax
call fb_StrDelete
add esp, 4
.Lt_0B04:
pop ebx
mov esp, ebp
pop ebp
ret
.size EMITVARINII, .-EMITVARINII
.balign 16

.globl EMITVARINIF
EMITVARINIF:
.type EMITVARINIF, @function
push ebp
mov ebp, esp
sub esp, 48
.Lt_0B0B:
push 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
push 0
push -1
push 2
push offset Lt_03AC
push -1
push -1
push dword ptr [ebp+8]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call HFLOATTOHEX
add esp, 12
push eax
push -1
push 2
push offset Lt_03B0
push 0
push dword ptr [ebp+8]
call _GETTYPESTRING
add esp, 4
push eax
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ebp-24]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
lea eax, [ebp-36]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-48]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-48]
call OUTEX
add esp, 8
lea eax, [ebp-48]
push eax
call fb_StrDelete
add esp, 4
.Lt_0B0C:
mov esp, ebp
pop ebp
ret
.size EMITVARINIF, .-EMITVARINIF
.balign 16

.globl EMITVARINIOFS
EMITVARINIOFS:
.type EMITVARINIOFS, @function
push ebp
mov ebp, esp
sub esp, 12
.Lt_0B11:
push 0
push 6
push offset Lt_0B13
push -1
push offset Lt_0B17
call fb_StrAssign
add esp, 20
push 0
push -1
push 0
push dword ptr [ebp+8]
push -1
push offset Lt_0B17
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_0B17
call fb_StrAssign
add esp, 20
cmp dword ptr [ebp+12], 0
je .Lt_0B16
push 0
push 4
push offset Lt_0391
push -1
push offset Lt_0B17
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push dword ptr [ebp+12]
call fb_IntToStr
add esp, 4
push eax
push -1
push offset Lt_0B17
call fb_StrConcatAssign
add esp, 20
.Lt_0B16:
.Lt_0B15:
push 0
push 2
push offset Lt_03AC
push -1
push offset Lt_0B17
call fb_StrConcatAssign
add esp, 20
push 0
push dword ptr [Lt_0B17]
call OUTEX
add esp, 8
.Lt_0B12:
mov esp, ebp
pop ebp
ret
.size EMITVARINIOFS, .-EMITVARINIOFS

.section .bss
.balign 4
	.lcomm	Lt_0B17,12

.section .text
.balign 16

.globl EMITVARINISTR
EMITVARINISTR:
.type EMITVARINISTR, @function
push ebp
mov ebp, esp
sub esp, 12
.Lt_0B18:
push 0
push 9
push offset Lt_0448
push -1
push offset Lt_0B1C
call fb_StrAssign
add esp, 20
push 0
push -1
push 0
push dword ptr [ebp+8]
push -1
push offset Lt_0B1C
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_0B1C
call fb_StrAssign
add esp, 20
push 0
push 5
push offset Lt_0B1B
push -1
push offset Lt_0B1C
call fb_StrConcatAssign
add esp, 20
push 0
push dword ptr [Lt_0B1C]
call OUTEX
add esp, 8
.Lt_0B19:
mov esp, ebp
pop ebp
ret
.size EMITVARINISTR, .-EMITVARINISTR

.section .bss
.balign 4
	.lcomm	Lt_0B1C,12

.section .text
.balign 16

.globl EMITVARINIWSTR
EMITVARINIWSTR:
.type EMITVARINIWSTR, @function
push ebp
mov ebp, esp
sub esp, 20
.Lt_0B1D:
push 0
push 9
push offset Lt_0448
push -1
push offset Lt_0B25
call fb_StrAssign
add esp, 20
push 0
push -1
push 0
push dword ptr [ebp+8]
push -1
push offset Lt_0B25
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_0B25
call fb_StrAssign
add esp, 20
mov dword ptr [ebp-16], 1
mov eax, dword ptr [SYMB_DTYPETB+172]
mov dword ptr [ebp-20], eax
jmp .Lt_0B21
.Lt_0B24:
push 0
push 3
push offset Lt_0426
push -1
push offset Lt_0B25
call fb_StrConcatAssign
add esp, 20
.Lt_0B22:
inc dword ptr [ebp-16]
.Lt_0B21:
mov eax, dword ptr [ebp-20]
cmp dword ptr [ebp-16], eax
jle .Lt_0B24
.Lt_0B23:
push 0
push 3
push offset Lt_044B
push -1
push offset Lt_0B25
call fb_StrConcatAssign
add esp, 20
push 0
push dword ptr [Lt_0B25]
call OUTEX
add esp, 8
.Lt_0B1E:
mov esp, ebp
pop ebp
ret
.size EMITVARINIWSTR, .-EMITVARINIWSTR

.section .bss
.balign 4
	.lcomm	Lt_0B25,12

.section .text
.balign 16

.globl EMITVARINIPAD
EMITVARINIPAD:
.type EMITVARINIPAD, @function
push ebp
mov ebp, esp
sub esp, 48
.Lt_0B26:
push 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
push 0
push -1
push 2
push offset Lt_03AC
push -1
push 3
push offset Lt_0B29
push -1
push -1
push dword ptr [ebp+8]
call fb_IntToStr
add esp, 4
push eax
push 7
push offset Lt_0B28
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ebp-24]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
lea eax, [ebp-36]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-48]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-48]
call OUTEX
add esp, 8
lea eax, [ebp-48]
push eax
call fb_StrDelete
add esp, 4
.Lt_0B27:
mov esp, ebp
pop ebp
ret
.size EMITVARINIPAD, .-EMITVARINIPAD
.balign 16

.globl EMITFBCTINFBEGIN
EMITFBCTINFBEGIN:
.type EMITFBCTINFBEGIN, @function
.Lt_0B2E:
push 0
push 7
call _SETSECTION
add esp, 8
.Lt_0B2F:
ret
.size EMITFBCTINFBEGIN, .-EMITFBCTINFBEGIN
.balign 16

.globl EMITFBCTINFSTRING
EMITFBCTINFSTRING:
.type EMITFBCTINFSTRING, @function
push ebp
mov ebp, esp
sub esp, 36
.Lt_0B30:
push 0
push 0
push 3
call dword ptr [EMIT+244]
add esp, 4
push eax
push -1
push offset Lt_0B37
call fb_StrAssign
add esp, 20
push 0
push -1
push -1
push 4
push offset Lt_0B33
push -1
push 0
push dword ptr [ebp+8]
push 3
push offset Lt_0B32
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ebp-24]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_0B37
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
lea eax, [ebp-36]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_0B37
call fb_StrAssign
add esp, 20
push 0
push dword ptr [Lt_0B37]
call EMITWRITESTR
add esp, 8
.Lt_0B31:
mov esp, ebp
pop ebp
ret
.size EMITFBCTINFSTRING, .-EMITFBCTINFSTRING

.section .bss
.balign 4
	.lcomm	Lt_0B37,12

.section .text
.balign 16

.globl EMITFBCTINFEND
EMITFBCTINFEND:
.type EMITFBCTINFEND, @function
.Lt_0B38:
push 0
push offset Lt_0000
call EMITWRITESTR
add esp, 8
.Lt_0B39:
ret
.size EMITFBCTINFEND, .-EMITFBCTINFEND
.balign 16

.globl EMITGASX86_CTOR
EMITGASX86_CTOR:
.type EMITGASX86_CTOR, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_0C00:
lea eax, [EMIT+164]
push edi
push esi
mov edi, eax
mov esi, offset Lt_0C04
mov ecx, 22
rep movsd
pop esi
pop edi
mov eax, offset _OPFNTB
mov dword ptr [EMIT+252], eax
cmp dword ptr [ENV+116], 1
jl .Lt_0C03
push dword ptr [EMIT+252]
call _INIT_OPFNTB_SSE
add esp, 4
.Lt_0C03:
.Lt_0C02:
mov dword ptr [ebp-4], -1
.Lt_0C01:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size EMITGASX86_CTOR, .-EMITGASX86_CTOR

.section .data
.balign 4
Lt_0C04:
.int _INIT
.int _END
.int _GETOPTIONVALUE
.int _OPEN
.int _CLOSE
.int _ISKEYWORD
.int _ISREGPRESERVED
.int _GETFREEPRESERVEDREG
.int _GETRESULTREG
.int _PROCGETFRAMEREGNAME
.int _PROCBEGIN
.int _PROCEND
.int _PROCHEADER
.int _PROCFOOTER
.int _PROCALLOCARG
.int _PROCALLOCLOCAL
.int _PROCALLOCSTATICVARS
.int _SCOPEBEGIN
.int _SCOPEEND
.int _SETSECTION
.int _GETTYPESTRING
.int _GETSECTIONSTRING

.section .text
.balign 16
fb_ctor__emit_x86:
.type fb_ctor__emit_x86, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__emit_x86, .-fb_ctor__emit_x86
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
.balign 16
HGETIDXNAME:
.type HGETIDXNAME, @function
push ebp
mov ebp, esp
sub esp, 64
push ebx
mov dword ptr [ebp-4], 0
.Lt_034E:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+32]
mov dword ptr [Lt_0C05], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+48]
mov dword ptr [Lt_0C06], eax
cmp dword ptr [Lt_0C05], 0
jne .Lt_0351
cmp dword ptr [Lt_0C06], 0
jne .Lt_0353
mov dword ptr [ebp-4], 0
jmp .Lt_034F
.Lt_0353:
.Lt_0352:
push 0
push 1
push offset Lt_0000
push 154
push offset Lt_0C07
call fb_StrAssign
add esp, 20
jmp .Lt_0350
.Lt_0351:
push 0
push 0
push dword ptr [Lt_0C05]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
push 154
push offset Lt_0C07
call fb_StrAssign
add esp, 20
cmp dword ptr [Lt_0C06], 0
je .Lt_0355
push 0
push -1
push 2
push offset Lt_0356
push 154
push offset Lt_0C07
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
lea eax, [ebp-28]
push eax
call fb_StrConcat
add esp, 20
push eax
push 154
push offset Lt_0C07
call fb_StrAssign
add esp, 20
.Lt_0355:
.Lt_0354:
.Lt_0350:
mov eax, dword ptr [Lt_0C06]
push dword ptr [eax+12]
mov eax, dword ptr [Lt_0C06]
push dword ptr [eax+4]
call HGETREGNAME
add esp, 8
mov dword ptr [Lt_0C08], eax
push 0
push -1
push 0
push dword ptr [Lt_0C08]
push 154
push offset Lt_0C07
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
lea eax, [ebp-16]
push eax
call fb_StrConcat
add esp, 20
push eax
push 154
push offset Lt_0C07
call fb_StrAssign
add esp, 20
cmp dword ptr [Lt_0C06], 0
je .Lt_035A
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+44]
mov dword ptr [Lt_0C09], ebx
cmp dword ptr [Lt_0C09], 1
jle .Lt_035C
mov dword ptr [Lt_0C0A], 0
cmp dword ptr [Lt_0C09], 3
je .Lt_035F
.Lt_0360:
cmp dword ptr [Lt_0C09], 5
je .Lt_035F
.Lt_0361:
cmp dword ptr [Lt_0C09], 9
jne .Lt_035E
.Lt_035F:
dec dword ptr [Lt_0C09]
mov dword ptr [Lt_0C0A], -1
.Lt_035E:
.Lt_035D:
push 0
push -1
push 2
push offset Lt_0362
push 154
push offset Lt_0C07
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
lea ebx, [ebp-28]
push ebx
call fb_StrConcat
add esp, 20
push eax
push 154
push offset Lt_0C07
call fb_StrAssign
add esp, 20
push 0
push -1
push -1
push dword ptr [Lt_0C09]
call fb_IntToStr
add esp, 4
push eax
push 154
push offset Lt_0C07
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
lea eax, [ebp-40]
push eax
call fb_StrConcat
add esp, 20
push eax
push 154
push offset Lt_0C07
call fb_StrAssign
add esp, 20
cmp dword ptr [Lt_0C0A], 0
je .Lt_0366
push 0
push -1
push 2
push offset Lt_0356
push 154
push offset Lt_0C07
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
lea eax, [ebp-52]
push eax
call fb_StrConcat
add esp, 20
push eax
push 154
push offset Lt_0C07
call fb_StrAssign
add esp, 20
push 0
push -1
push 0
push dword ptr [Lt_0C08]
push 154
push offset Lt_0C07
mov dword ptr [ebp-64], 0
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
lea eax, [ebp-64]
push eax
call fb_StrConcat
add esp, 20
push eax
push 154
push offset Lt_0C07
call fb_StrAssign
add esp, 20
.Lt_0366:
.Lt_0365:
.Lt_035C:
.Lt_035B:
.Lt_035A:
.Lt_0359:
mov eax, offset Lt_0C07
mov dword ptr [ebp-4], eax
.Lt_034F:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HGETIDXNAME, .-HGETIDXNAME

.section .bss
.balign 4
	.lcomm	Lt_0C07,154
.balign 4
	.lcomm	Lt_0C05,4
.balign 4
	.lcomm	Lt_0C06,4
.balign 4
	.lcomm	Lt_0C0A,4
.balign 4
	.lcomm	Lt_0C09,4
.balign 4
	.lcomm	Lt_0C08,4

.section .text
.balign 16
OUTEX:
.type OUTEX, @function
push ebp
mov ebp, esp
.Lt_03A0:
cmp dword ptr [ebp+12], 0
jne .Lt_03A3
push 0
push dword ptr [ebp+8]
call fb_StrLen
add esp, 8
mov dword ptr [ebp+12], eax
.Lt_03A3:
.Lt_03A2:
push 0
push dword ptr [ebp+8]
push 0
push dword ptr [ENV+520]
call fb_FilePutStr
add esp, 16
test eax, eax
jne .Lt_03A5
.Lt_03A5:
.Lt_03A4:
.Lt_03A1:
mov esp, ebp
pop ebp
ret
.size OUTEX, .-OUTEX
.balign 16
HXCHG:
.type HXCHG, @function
push ebp
mov ebp, esp
sub esp, 24
.Lt_03C3:
push 0
push 6
push offset Lt_03C5
push -1
push offset Lt_0C0B
call fb_StrAssign
add esp, 20
push 0
push -1
push 0
push dword ptr [ebp+8]
push -1
push offset Lt_0C0B
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_0C0B
call fb_StrAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0C0B
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push 0
push dword ptr [ebp+12]
push -1
push offset Lt_0C0B
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ebp-24]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_0C0B
call fb_StrAssign
add esp, 20
push dword ptr [Lt_0C0B]
call OUTP
add esp, 4
.Lt_03C4:
mov esp, ebp
pop ebp
ret
.size HXCHG, .-HXCHG

.section .bss
.balign 4
	.lcomm	Lt_0C0B,12

.section .text
.balign 16
HCOMMENT:
.type HCOMMENT, @function
push ebp
mov ebp, esp
sub esp, 12
.Lt_03C8:
push 0
push 3
push offset Lt_03CB
push -1
push offset Lt_0C0C
call fb_StrAssign
add esp, 20
push 0
push -1
push 0
push dword ptr [ebp+8]
push -1
push offset Lt_0C0C
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_0C0C
call fb_StrAssign
add esp, 20
push 0
push 2
push offset Lt_03AC
push -1
push offset Lt_0C0C
call fb_StrConcatAssign
add esp, 20
push 0
push dword ptr [Lt_0C0C]
call OUTEX
add esp, 8
.Lt_03C9:
mov esp, ebp
pop ebp
ret
.size HCOMMENT, .-HCOMMENT

.section .bss
.balign 4
	.lcomm	Lt_0C0C,12

.section .text
.balign 16
HPUBLIC:
.type HPUBLIC, @function
push ebp
mov ebp, esp
sub esp, 12
.Lt_03CD:
push 0
push 9
push offset Lt_03D0
push -1
push offset Lt_0C0D
call fb_StrAssign
add esp, 20
push 0
push -1
push 0
push dword ptr [ebp+8]
push -1
push offset Lt_0C0D
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_0C0D
call fb_StrAssign
add esp, 20
push 0
push 2
push offset Lt_03AC
push -1
push offset Lt_0C0D
call fb_StrConcatAssign
add esp, 20
push 0
push dword ptr [Lt_0C0D]
call OUTEX
add esp, 8
.Lt_03CE:
mov esp, ebp
pop ebp
ret
.size HPUBLIC, .-HPUBLIC

.section .bss
.balign 4
	.lcomm	Lt_0C0D,12

.section .text
.balign 16
HALIGN:
.type HALIGN, @function
push ebp
mov ebp, esp
.Lt_03D7:
push 0
push 9
push offset Lt_03D9
push -1
push offset Lt_0C0E
call fb_StrAssign
add esp, 20
push 0
push -1
push dword ptr [ebp+8]
call fb_IntToStr
add esp, 4
push eax
push -1
push offset Lt_0C0E
call fb_StrConcatAssign
add esp, 20
push 0
push 2
push offset Lt_03AC
push -1
push offset Lt_0C0E
call fb_StrConcatAssign
add esp, 20
push 0
push dword ptr [Lt_0C0E]
call OUTEX
add esp, 8
.Lt_03D8:
mov esp, ebp
pop ebp
ret
.size HALIGN, .-HALIGN

.section .bss
.balign 4
	.lcomm	Lt_0C0E,12

.section .text
.balign 16
HINITREGTB:
.type HINITREGTB, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
.Lt_03DA:
mov dword ptr [ebp-4], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-12], 0
push 0
push offset Lt_0C0F
push 6
push 0
call REGNEWCLASS
add esp, 16
mov dword ptr [EMIT+8], eax
cmp dword ptr [ENV+116], 1
jne .Lt_03DF
push 0
push offset Lt_0C10
push 7
push 1
call REGNEWCLASS
add esp, 16
mov dword ptr [EMIT+12], eax
mov dword ptr [ebp-12], 0
.Lt_03E3:
push 0
push -1
push -1
push dword ptr [ebp-12]
call fb_IntToStr
add esp, 4
push eax
push 4
push offset Lt_03E4
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ebp-24]
push eax
call fb_StrConcat
add esp, 20
push eax
push 8
mov eax, dword ptr [ebp-12]
lea ebx, [RNAMETB+eax*8+192]
push ebx
call fb_StrAssign
add esp, 20
.Lt_03E1:
inc dword ptr [ebp-12]
.Lt_03E0:
cmp dword ptr [ebp-12], 7
jle .Lt_03E3
.Lt_03E2:
jmp .Lt_03DE
.Lt_03DF:
push -1
push offset Lt_0C10
push 7
push 1
call REGNEWCLASS
add esp, 16
mov dword ptr [EMIT+12], eax
.Lt_03DE:
.Lt_03DB:
pop ebx
mov esp, ebp
pop ebp
ret
.size HINITREGTB, .-HINITREGTB

.section .data
.balign 4
Lt_0C11:
.int 7
.int 6
.int 6
.int 7
.int 7
.int 7
.balign 4
Lt_0C0F:
.int Lt_0C11
.int Lt_0C11
.int 24
.int 4
.int 1
.int 6
.int 0
.int 5
.balign 4
Lt_0C12:
.int 12
.int 12
.int 12
.int 12
.int 12
.int 12
.int 12
.balign 4
Lt_0C10:
.int Lt_0C12
.int Lt_0C12
.int 28
.int 4
.int 1
.int 7
.int 0
.int 6

.section .text
.balign 16
HENDREGTB:
.type HENDREGTB, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_03E6:
mov dword ptr [ebp-4], 0
mov dword ptr [ebp-4], 0
.Lt_03EB:
mov eax, dword ptr [ebp-4]
sal eax, 2
mov ebx, offset EMIT
add ebx, eax
push dword ptr [ebx+8]
call REGDELCLASS
add esp, 4
.Lt_03E9:
inc dword ptr [ebp-4]
.Lt_03E8:
cmp dword ptr [ebp-4], 1
jle .Lt_03EB
.Lt_03EA:
.Lt_03E7:
pop ebx
mov esp, ebp
pop ebp
ret
.size HENDREGTB, .-HENDREGTB
.balign 16
HINITKEYWORDSTB:
.type HINITKEYWORDSTB, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_03EC:
mov dword ptr [ebp-4], 0
mov dword ptr [ebp-8], 0
push 0
push 600
lea eax, [EMIT+152]
push eax
call HASHINIT
add esp, 12
mov dword ptr [ebp-4], 0
.Lt_03F1:
mov dword ptr [ebp-8], 0
.Lt_03F5:
push 8
mov eax, dword ptr [ebp-4]
sal eax, 3
add eax, dword ptr [ebp-8]
lea ebx, [RNAMETB+eax*8]
push ebx
call fb_StrLen
add esp, 8
test eax, eax
jle .Lt_03F7
push 4294967295
push 4294967295
mov eax, dword ptr [ebp-4]
sal eax, 3
add eax, dword ptr [ebp-8]
lea ebx, [RNAMETB+eax*8]
push ebx
lea ebx, [EMIT+152]
push ebx
call HASHADD
add esp, 16
.Lt_03F7:
.Lt_03F6:
.Lt_03F3:
inc dword ptr [ebp-8]
.Lt_03F2:
cmp dword ptr [ebp-8], 7
jle .Lt_03F5
.Lt_03F4:
.Lt_03EF:
inc dword ptr [ebp-4]
.Lt_03EE:
cmp dword ptr [ebp-4], 3
jle .Lt_03F1
.Lt_03F0:
mov dword ptr [ebp-8], 0
.Lt_03FB:
mov ebx, dword ptr [ebp-8]
cmp dword ptr [KEYWORDTB+ebx*4], 0
jne .Lt_03FD
jmp .Lt_03FA
.Lt_03FD:
.Lt_03FC:
push 4294967295
push 4294967295
mov ebx, dword ptr [ebp-8]
push dword ptr [KEYWORDTB+ebx*4]
lea ebx, [EMIT+152]
push ebx
call HASHADD
add esp, 16
.Lt_03F9:
inc dword ptr [ebp-8]
.Lt_03F8:
cmp dword ptr [ebp-8], 599
jle .Lt_03FB
.Lt_03FA:
mov dword ptr [EMIT+148], -1
.Lt_03ED:
pop ebx
mov esp, ebp
pop ebp
ret
.size HINITKEYWORDSTB, .-HINITKEYWORDSTB
.balign 16
HENDKEYWORDSTB:
.type HENDKEYWORDSTB, @function
.Lt_03FE:
cmp dword ptr [EMIT+148], 0
je .Lt_0401
lea eax, [EMIT+152]
push eax
call HASHEND
add esp, 4
.Lt_0401:
.Lt_0400:
mov dword ptr [EMIT+148], 0
.Lt_03FF:
ret
.size HENDKEYWORDSTB, .-HENDKEYWORDSTB
.balign 16
HEMITVARBSS:
.type HEMITVARBSS, @function
push ebp
mov ebp, esp
sub esp, 36
push ebx
.Lt_0402:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
mov dword ptr [Lt_0C13], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+72]
mov dword ptr [Lt_0C14], eax
push 0
push 2
call _SETSECTION
add esp, 8
mov eax, dword ptr [Lt_0C13]
and eax, 8
test eax, eax
jne .Lt_0405
mov eax, dword ptr [Lt_0C13]
and eax, 32
test eax, eax
jle .Lt_0407
push -1
push dword ptr [ebp+8]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
call HPUBLIC
add esp, 8
.Lt_0407:
.Lt_0406:
push 0
push 7
push offset Lt_0408
push -1
push offset Lt_0C15
call fb_StrAssign
add esp, 20
jmp .Lt_0404
.Lt_0405:
push 0
push dword ptr [ebp+8]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
call HPUBLIC
add esp, 8
push 0
push 6
push offset Lt_0409
push -1
push offset Lt_0C15
call fb_StrAssign
add esp, 20
.Lt_0404:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+24]
and ebx, 511
cmp ebx, 15
jne .Lt_040B
push 8
call HALIGN
add esp, 4
push -1
push offset Lt_040C
call EMITWRITESTR
add esp, 8
jmp .Lt_040A
.Lt_040B:
push 4
call HALIGN
add esp, 4
.Lt_040A:
push 0
push -1
push offset Lt_0C15
push -1
push offset Lt_0C16
call fb_StrAssign
add esp, 20
push 0
push 2
push offset Lt_03AA
push -1
push offset Lt_0C16
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push 0
push dword ptr [ebp+8]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
push -1
push offset Lt_0C16
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_0C16
call fb_StrAssign
add esp, 20
push 0
push -1
push -1
push -1
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [Lt_0C14]
mov ebx, ecx
sar ebx, 31
push dword ptr [eax+40]
push dword ptr [eax+36]
push ebx
push ecx
push eax
mov eax, [esp+4]
mul dword ptr [esp+12]
xchg eax, [esp+4]
imul eax, [esp+16]
add eax, edx
mov edx, [esp+8]
imul edx, [esp+12]
add edx, eax
mov [esp+8], edx
pop eax
pop ecx
pop ebx
add esp, 8
push ebx
push ecx
call fb_LongintToStr
add esp, 8
push eax
push 2
push offset Lt_040E
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ebp-24]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_0C16
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
lea eax, [ebp-36]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_0C16
call fb_StrAssign
add esp, 20
push -1
push dword ptr [Lt_0C16]
call EMITWRITESTR
add esp, 8
push 2
push dword ptr [ebp+8]
call EDBGEMITGLOBALVAR
add esp, 8
.Lt_0403:
pop ebx
mov esp, ebp
pop ebp
ret
.size HEMITVARBSS, .-HEMITVARBSS

.section .bss
.balign 4
	.lcomm	Lt_0C15,12
.balign 4
	.lcomm	Lt_0C16,12
.balign 4
	.lcomm	Lt_0C13,4
.balign 4
	.lcomm	Lt_0C14,4

.section .text
.balign 16
HWRITEHEADER:
.type HWRITEHEADER, @function
push ebp
mov ebp, esp
sub esp, 72
.Lt_0411:
lea eax, [ENV+244]
push eax
call EDBGEMITHEADER
add esp, 4
push -1
push offset Lt_0413
call EMITWRITESTR
add esp, 8
push 0
push offset Lt_0000
call EMITWRITESTR
add esp, 8
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
mov dword ptr [ebp-64], 0
push 0
push -1
push 2
push offset Lt_0416
push -1
push 17
push offset Lt_000E
push -1
push 3
push offset Lt_0415
push -1
push -1
call fb_Time
push eax
push -1
push 26
push offset Lt_0414
push 261
lea eax, [ENV+244]
push eax
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ebp-24]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
lea eax, [ebp-36]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
lea eax, [ebp-48]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
lea eax, [ebp-60]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-72]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-72]
call HCOMMENT
add esp, 4
lea eax, [ebp-72]
push eax
call fb_StrDelete
add esp, 4
.Lt_0412:
mov esp, ebp
pop ebp
ret
.size HWRITEHEADER, .-HWRITEHEADER
.balign 16
HEMITVARCONST:
.type HEMITVARCONST, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
.Lt_041D:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+24]
and ebx, 511
mov dword ptr [Lt_0C17], ebx
mov ebx, dword ptr [Lt_0C17]
mov dword ptr [ebp-4], ebx
jmp .Lt_0420
.Lt_0422:
push 0
push 2
push offset Lt_0423
push -1
push offset Lt_0C18
call fb_StrAssign
add esp, 20
push 0
push -1
push 0
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+52]
call HESCAPE
add esp, 4
push eax
push -1
push offset Lt_0C18
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
lea eax, [ebp-16]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_0C18
call fb_StrAssign
add esp, 20
push 0
push 4
push offset Lt_0427
push -1
push offset Lt_0C18
call fb_StrConcatAssign
add esp, 20
jmp .Lt_041F
.Lt_0428:
push 0
push 2
push offset Lt_0423
push -1
push offset Lt_0C18
call fb_StrAssign
add esp, 20
push 0
push -1
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax+52]
call HESCAPEW
add esp, 4
push eax
push -1
push offset Lt_0C18
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
lea eax, [ebp-16]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_0C18
call fb_StrAssign
add esp, 20
mov dword ptr [ebp-20], 1
mov eax, dword ptr [SYMB_DTYPETB+172]
mov dword ptr [ebp-24], eax
jmp .Lt_042B
.Lt_042E:
push 0
push 3
push offset Lt_0426
push -1
push offset Lt_0C18
call fb_StrConcatAssign
add esp, 20
.Lt_042C:
inc dword ptr [ebp-20]
.Lt_042B:
mov eax, dword ptr [ebp-24]
cmp dword ptr [ebp-20], eax
jle .Lt_042E
.Lt_042D:
push 0
push 2
push offset Lt_0423
push -1
push offset Lt_0C18
call fb_StrConcatAssign
add esp, 20
jmp .Lt_041F
.Lt_042F:
push 0
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax+52]
push -1
push offset Lt_0C18
call fb_StrAssign
add esp, 20
jmp .Lt_041F
.Lt_0420:
mov eax, dword ptr [ebp-4]
add eax, 4294967293
cmp eax, 3
ja .Lt_042F
mov eax, dword ptr [ebp-4]
jmp dword ptr [.LT_0430+eax*4-12]
.LT_0430:
.int .Lt_0422
.int .Lt_042F
.int .Lt_042F
.int .Lt_0428
.Lt_041F:
push 0
push 0
call _SETSECTION
add esp, 8
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+96], 0
je .Lt_0432
mov eax, dword ptr [ebp+8]
push dword ptr [eax+96]
call HALIGN
add esp, 4
jmp .Lt_0431
.Lt_0432:
cmp dword ptr [Lt_0C17], 15
jne .Lt_0434
push 8
call HALIGN
add esp, 4
jmp .Lt_0433
.Lt_0434:
push 4
call HALIGN
add esp, 4
.Lt_0433:
.Lt_0431:
push 0
push 0
push dword ptr [Lt_0C17]
call _GETTYPESTRING
add esp, 4
push eax
push -1
push offset Lt_0C19
call fb_StrAssign
add esp, 20
push 0
push 0
push dword ptr [ebp+8]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
push -1
push offset Lt_0C1A
call fb_StrAssign
add esp, 20
push 0
push 3
push offset Lt_0435
push -1
push offset Lt_0C1A
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0C19
push -1
push offset Lt_0C1A
call fb_StrConcatAssign
add esp, 20
push 0
push 2
push offset Lt_03AA
push -1
push offset Lt_0C1A
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0C18
push -1
push offset Lt_0C1A
call fb_StrConcatAssign
add esp, 20
push 0
push dword ptr [Lt_0C1A]
call EMITWRITESTR
add esp, 8
.Lt_041E:
pop ebx
mov esp, ebp
pop ebp
ret
.size HEMITVARCONST, .-HEMITVARCONST

.section .bss
.balign 4
	.lcomm	Lt_0C18,12
.balign 4
	.lcomm	Lt_0C19,12
.balign 4
	.lcomm	Lt_0C1A,12
.balign 4
	.lcomm	Lt_0C17,4

.section .text
.balign 16
HWRITECTOR:
.type HWRITECTOR, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0436:
cmp dword ptr [ebp+8], 0
jne .Lt_0439
jmp .Lt_0437
.Lt_0439:
.Lt_0438:
.Lt_043A:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov eax, dword ptr [ebx+8]
and eax, 16777216
test eax, eax
je .Lt_043E
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov eax, dword ptr [ebx+108]
push dword ptr [eax+56]
cmp dword ptr [ebp+12], 0
je .Lt_043F
mov dword ptr [ebp-4], 5
jmp .Lt_0C1B
.Lt_043F:
mov dword ptr [ebp-4], 6
.Lt_0C1B:
push dword ptr [ebp-4]
call _SETSECTION
add esp, 8
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
call EMITVARINIOFS
add esp, 8
.Lt_043E:
.Lt_043D:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp+8], ebx
.Lt_043C:
cmp dword ptr [ebp+8], 0
jne .Lt_043A
.Lt_043B:
.Lt_0437:
pop ebx
mov esp, ebp
pop ebp
ret
.size HWRITECTOR, .-HWRITECTOR
.balign 16
HEMITEXPORT:
.type HEMITEXPORT, @function
push ebp
mov ebp, esp
sub esp, 40
push ebx
.Lt_0441:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 256
test ebx, ebx
je .Lt_0444
push 0
push 4
call _SETSECTION
add esp, 8
push dword ptr [ebp+8]
call SYMBGETMANGLEDNAME
add esp, 4
mov dword ptr [ebp-4], eax
cmp dword ptr [ENV+232], 0
je .Lt_0446
inc dword ptr [ebp-4]
.Lt_0446:
.Lt_0445:
push -1
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
push 0
push -1
push 3
push offset Lt_044B
push -1
push 0
push dword ptr [ebp-4]
push 18
push offset Lt_044A
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
lea eax, [ebp-16]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
lea eax, [ebp-28]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-40]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-40]
call EMITWRITESTR
add esp, 8
lea eax, [ebp-40]
push eax
call fb_StrDelete
add esp, 4
.Lt_0444:
.Lt_0443:
.Lt_0442:
pop ebx
mov esp, ebp
pop ebp
ret
.size HEMITEXPORT, .-HEMITEXPORT
.balign 16
HDECLVARIABLE:
.type HDECLVARIABLE, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_044F:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 524288
test ebx, ebx
je .Lt_0452
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+24]
and eax, 511
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 3
je .Lt_0456
.Lt_0457:
cmp dword ptr [ebp-4], 6
jne .Lt_0455
.Lt_0456:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+8]
and ebx, 2
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_0459
jmp .Lt_0450
.Lt_0459:
.Lt_0458:
.Lt_0455:
.Lt_0453:
push dword ptr [ebp+8]
call HEMITVARCONST
add esp, 4
jmp .Lt_0450
.Lt_0452:
.Lt_0451:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+8]
and eax, 32768
test eax, eax
je .Lt_045B
jmp .Lt_0450
.Lt_045B:
.Lt_045A:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 16
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+4]
and ecx, 4
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
or ebx, ecx
je .Lt_045D
jmp .Lt_0450
.Lt_045D:
.Lt_045C:
mov ecx, dword ptr [ebp+8]
cmp dword ptr [ecx+52], 0
je .Lt_045F
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ecx+8]
and ebx, 2
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_0461
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebx+4]
and ecx, 32
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
test ecx, ecx
jne .Lt_0463
jmp .Lt_0450
.Lt_0463:
.Lt_0462:
.Lt_0461:
.Lt_0460:
push 0
push 1
call _SETSECTION
add esp, 8
push dword ptr [ebp+8]
call IRHLFLUSHSTATICINITIALIZER
add esp, 4
jmp .Lt_0450
.Lt_045F:
.Lt_045E:
push dword ptr [ebp+8]
call HEMITVARBSS
add esp, 4
.Lt_0450:
pop ebx
mov esp, ebp
pop ebp
ret
.size HDECLVARIABLE, .-HDECLVARIABLE
.balign 16
HCLEARLOCALS:
.type HCLEARLOCALS, @function
push ebp
mov ebp, esp
sub esp, 84
push ebx
.Lt_0464:
cmp dword ptr [ebp+8], 0
jne .Lt_0467
jmp .Lt_0465
.Lt_0467:
.Lt_0466:
cmp dword ptr [ENV+112], 3
jl .Lt_0469
mov eax, dword ptr [ebp+8]
shr eax, 3
cmp eax, 7
jbe .Lt_046B
mov eax, dword ptr [EMIT+132]
and eax, 2
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_046D
push offset Lt_007D
call HPUSH
add esp, 4
.Lt_046D:
.Lt_046C:
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 0
push -1
push 2
push offset Lt_038A
push -1
push -1
mov eax, dword ptr [ebp+12]
add eax, dword ptr [ebp+8]
mov ebx, eax
push ebx
call fb_IntToStr
add esp, 4
push eax
push 15
push offset Lt_046E
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ebp-24]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-36]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-36]
call OUTP
add esp, 4
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
push 0
push -1
push -1
mov eax, dword ptr [ebp+8]
shr eax, 3
mov ebx, eax
push ebx
call fb_UIntToStr
add esp, 4
push eax
push 9
push offset Lt_0472
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
lea eax, [ebp-48]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-60]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-60]
call OUTP
add esp, 4
lea eax, [ebp-60]
push eax
call fb_StrDelete
add esp, 4
push offset Lt_0475
call OUTP
add esp, 4
push 0
push 0
call SYMBUNIQUELABEL
push eax
push -1
push offset Lt_0C22
call fb_StrAssign
add esp, 20
push dword ptr [Lt_0C22]
call HLABEL
add esp, 4
push offset Lt_0476
call OUTP
add esp, 4
push offset Lt_0477
call OUTP
add esp, 4
push offset Lt_0478
call OUTP
add esp, 4
mov dword ptr [ebp-84], 0
mov dword ptr [ebp-80], 0
mov dword ptr [ebp-76], 0
push 0
push -1
push -1
push offset Lt_0C22
push 5
push offset Lt_0479
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
mov dword ptr [ebp-64], 0
lea eax, [ebp-72]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-84]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-84]
call OUTP
add esp, 4
lea eax, [ebp-84]
push eax
call fb_StrDelete
add esp, 4
push offset Lt_011B
call OUTP
add esp, 4
mov eax, dword ptr [EMIT+132]
and eax, 2
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_047D
push offset Lt_007D
call HPOP
add esp, 4
.Lt_047D:
.Lt_047C:
jmp .Lt_046A
.Lt_046B:
mov eax, dword ptr [ebp+8]
shr eax, 3
test eax, eax
jbe .Lt_047E
push offset Lt_0475
call OUTP
add esp, 4
mov eax, dword ptr [ebp+8]
shr eax, 3
mov ebx, eax
mov dword ptr [Lt_0C24], ebx
jmp .Lt_047F
.Lt_0482:
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 0
push -1
push 7
push offset Lt_0484
push -1
push -1
mov ebx, dword ptr [Lt_0C24]
sal ebx, 3
mov eax, ebx
push eax
call fb_IntToStr
add esp, 4
push eax
push 11
push offset Lt_0483
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ebp-24]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-36]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-36]
call OUTP
add esp, 4
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
.Lt_0480:
dec dword ptr [Lt_0C24]
.Lt_047F:
cmp dword ptr [Lt_0C24], 1
jge .Lt_0482
.Lt_0481:
push offset Lt_011B
call OUTP
add esp, 4
.Lt_047E:
.Lt_046A:
mov eax, dword ptr [ebp+8]
and eax, 4
je .Lt_0489
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 0
push -1
push 5
push offset Lt_048B
push -1
push -1
mov eax, dword ptr [ebp+12]
add eax, dword ptr [ebp+8]
mov ebx, eax
push ebx
call fb_IntToStr
add esp, 4
push eax
push 20
push offset Lt_048A
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ebp-24]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-36]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-36]
call OUTP
add esp, 4
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
.Lt_0489:
.Lt_0488:
jmp .Lt_0465
.Lt_0469:
.Lt_0468:
mov eax, dword ptr [ebp+8]
shr eax, 2
cmp eax, 6
jbe .Lt_0490
mov eax, dword ptr [EMIT+132]
and eax, 2
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_0492
push offset Lt_007D
call HPUSH
add esp, 4
.Lt_0492:
.Lt_0491:
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 0
push -1
push 2
push offset Lt_038A
push -1
push -1
mov eax, dword ptr [ebp+12]
add eax, dword ptr [ebp+8]
mov ebx, eax
push ebx
call fb_IntToStr
add esp, 4
push eax
push 15
push offset Lt_046E
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ebp-24]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-36]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-36]
call OUTP
add esp, 4
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
push 0
push -1
push -1
mov eax, dword ptr [ebp+8]
shr eax, 2
mov ebx, eax
push ebx
call fb_UIntToStr
add esp, 4
push eax
push 9
push offset Lt_0472
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
lea eax, [ebp-48]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-60]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-60]
call OUTP
add esp, 4
lea eax, [ebp-60]
push eax
call fb_StrDelete
add esp, 4
push offset Lt_0498
call OUTP
add esp, 4
push offset Lt_0499
call OUTP
add esp, 4
mov eax, dword ptr [EMIT+132]
and eax, 2
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_049B
push offset Lt_007D
call HPOP
add esp, 4
.Lt_049B:
.Lt_049A:
jmp .Lt_048F
.Lt_0490:
mov eax, dword ptr [ebp+8]
shr eax, 2
mov ebx, eax
mov dword ptr [Lt_0C24], ebx
jmp .Lt_049C
.Lt_049F:
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 0
push -1
push 5
push offset Lt_048B
push -1
push -1
mov ebx, dword ptr [Lt_0C24]
sal ebx, 2
mov eax, dword ptr [ebp+12]
add eax, ebx
mov ecx, eax
push ecx
call fb_IntToStr
add esp, 4
push eax
push 20
push offset Lt_048A
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ebp-24]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-36]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-36]
call OUTP
add esp, 4
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
.Lt_049D:
dec dword ptr [Lt_0C24]
.Lt_049C:
cmp dword ptr [Lt_0C24], 1
jge .Lt_049F
.Lt_049E:
.Lt_048F:
.Lt_0465:
pop ebx
mov esp, ebp
pop ebp
ret
.size HCLEARLOCALS, .-HCLEARLOCALS

.section .bss
.balign 4
	.lcomm	Lt_0C24,4
.balign 4
	.lcomm	Lt_0C22,12

.section .text
.balign 16
HCREATEFRAME:
.type HCREATEFRAME, @function
push ebp
mov ebp, esp
sub esp, 72
push ebx
.Lt_04A3:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 268435456
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_04A6
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+108]
mov ebx, dword ptr [eax+12]
add ebx, 3
and ebx, -4
mov dword ptr [Lt_0C28], ebx
mov ebx, dword ptr [Lt_0C28]
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+108]
mov eax, dword ptr [ecx+4]
cmp eax, 8
setne al
shr eax, 1
sbb eax, eax
or ebx, eax
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+8]
and ecx, 4096
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
or ebx, ecx
or ebx, dword ptr [ENV+144]
or ebx, dword ptr [ENV+160]
je .Lt_04A8
push offset Lt_0082
call HPUSH
add esp, 4
push offset Lt_04A9
call OUTP
add esp, 4
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebx+8]
and ecx, 4096
test ecx, ecx
je .Lt_04AB
push offset Lt_04AC
call OUTP
add esp, 4
.Lt_04AB:
.Lt_04AA:
cmp dword ptr [Lt_0C28], 0
jle .Lt_04AE
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
push 0
push -1
push -1
push dword ptr [Lt_0C28]
call fb_IntToStr
add esp, 4
push eax
push 10
push offset Lt_04AF
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-24]
call OUTP
add esp, 4
lea eax, [ebp-24]
push eax
call fb_StrDelete
add esp, 4
.Lt_04AE:
.Lt_04AD:
.Lt_04A8:
.Lt_04A7:
cmp dword ptr [ENV+108], 3
jne .Lt_04B3
cmp dword ptr [ENV+160], 0
je .Lt_04B5
call SYMBMAKEPROFILELABELNAME
mov dword ptr [Lt_0C2C], eax
push 0
push offset Lt_04B7
call OUTEX
add esp, 8
push 0
push offset Lt_04B9
call OUTEX
add esp, 8
push 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
push 0
push -1
push 2
push offset Lt_03AC
push -1
push 2
push offset Lt_03D4
push -1
push 0
push dword ptr [Lt_0C2C]
push 2
push offset Lt_0007
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ebp-24]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
lea eax, [ebp-36]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-48]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-48]
call OUTEX
add esp, 8
lea eax, [ebp-48]
push eax
call fb_StrDelete
add esp, 4
push offset Lt_04BE
call OUTP
add esp, 4
push 0
push offset Lt_04C0
call OUTEX
add esp, 8
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
mov dword ptr [ebp-64], 0
push 0
push -1
push 0
push dword ptr [Lt_0C2C]
push 18
push offset Lt_04C1
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
lea eax, [ebp-60]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-72]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-72]
call OUTP
add esp, 4
lea eax, [ebp-72]
push eax
call fb_StrDelete
add esp, 4
push offset Lt_04C4
call OUTP
add esp, 4
.Lt_04B5:
.Lt_04B4:
.Lt_04B3:
.Lt_04B2:
mov eax, dword ptr [EMIT+132]
and eax, 16
test eax, eax
je .Lt_04C6
push offset Lt_0080
call HPUSH
add esp, 4
.Lt_04C6:
.Lt_04C5:
mov eax, dword ptr [EMIT+132]
and eax, 4
test eax, eax
je .Lt_04C8
push offset Lt_007E
call HPUSH
add esp, 4
.Lt_04C8:
.Lt_04C7:
mov eax, dword ptr [EMIT+132]
and eax, 2
test eax, eax
je .Lt_04CA
push offset Lt_007D
call HPUSH
add esp, 4
.Lt_04CA:
.Lt_04C9:
.Lt_04A6:
.Lt_04A5:
.Lt_04A4:
pop ebx
mov esp, ebp
pop ebp
ret
.size HCREATEFRAME, .-HCREATEFRAME

.section .bss
.balign 4
	.lcomm	Lt_0C28,4
.balign 4
	.lcomm	Lt_0C2D,4
.balign 4
	.lcomm	Lt_0C2C,4

.section .text
.balign 16
HDESTROYFRAME:
.type HDESTROYFRAME, @function
push ebp
mov ebp, esp
sub esp, 60
push ebx
.Lt_04CB:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 268435456
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_04CE
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+108]
mov ebx, dword ptr [eax+12]
add ebx, 3
and ebx, -4
mov dword ptr [Lt_0C2F], ebx
mov ebx, dword ptr [EMIT+132]
and ebx, 2
test ebx, ebx
je .Lt_04D0
push offset Lt_007D
call HPOP
add esp, 4
.Lt_04D0:
.Lt_04CF:
mov ebx, dword ptr [EMIT+132]
and ebx, 4
test ebx, ebx
je .Lt_04D2
push offset Lt_007E
call HPOP
add esp, 4
.Lt_04D2:
.Lt_04D1:
mov ebx, dword ptr [EMIT+132]
and ebx, 16
test ebx, ebx
je .Lt_04D4
push offset Lt_0080
call HPOP
add esp, 4
.Lt_04D4:
.Lt_04D3:
mov ebx, dword ptr [Lt_0C2F]
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+108]
mov eax, dword ptr [ecx+4]
cmp eax, 8
setne al
shr eax, 1
sbb eax, eax
or ebx, eax
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+8]
and ecx, 4096
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
or ebx, ecx
or ebx, dword ptr [ENV+144]
or ebx, dword ptr [ENV+160]
je .Lt_04D6
push offset Lt_04D7
call OUTP
add esp, 4
push offset Lt_0082
call HPOP
add esp, 4
.Lt_04D6:
.Lt_04D5:
cmp dword ptr [ebp+12], 0
jle .Lt_04D9
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
push 0
push -1
push -1
push dword ptr [ebp+12]
call fb_IntToStr
add esp, 4
push eax
push 5
push offset Lt_04DA
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-24]
call OUTP
add esp, 4
lea eax, [ebp-24]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_04D8
.Lt_04D9:
push offset Lt_025E
call OUTP
add esp, 4
.Lt_04D8:
.Lt_04CE:
.Lt_04CD:
cmp dword ptr [ENV+108], 2
jne .Lt_04DE
push 0
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
push 0
push -1
push 2
push offset Lt_03AC
push -1
push 0
push dword ptr [ebp+8]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
push -1
push 5
push offset Lt_04E0
push -1
push 0
push dword ptr [ebp+8]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
push 7
push offset Lt_04DF
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ebp-24]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
lea eax, [ebp-36]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
lea eax, [ebp-48]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-60]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-60]
call OUTEX
add esp, 8
lea eax, [ebp-60]
push eax
call fb_StrDelete
add esp, 4
.Lt_04DE:
.Lt_04DD:
.Lt_04CC:
pop ebx
mov esp, ebp
pop ebp
ret
.size HDESTROYFRAME, .-HDESTROYFRAME

.section .bss
.balign 4
	.lcomm	Lt_0C2F,4

.section .text
.balign 16
_EMITLIT:
.type _EMITLIT, @function
push ebp
mov ebp, esp
sub esp, 24
.Lt_04E6:
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
push 0
push -1
push 2
push offset Lt_03AC
push 0
push dword ptr [ebp+8]
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ebp-24]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
push 0
push dword ptr [ebp-12]
call OUTEX
add esp, 8
lea eax, [ebp-12]
push eax
call fb_StrDelete
add esp, 4
.Lt_04E7:
mov esp, ebp
pop ebp
ret
.size _EMITLIT, .-_EMITLIT
.balign 16
_EMITJMPTB:
.type _EMITJMPTB, @function
push ebp
mov ebp, esp
sub esp, 120
push ebx
.Lt_04E9:
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
push 0
push 0
push dword ptr [ebp+24]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
push -1
lea eax, [ebp-16]
push eax
call fb_StrAssign
add esp, 20
push 0
push 0
push dword ptr [ebp+8]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
push -1
lea eax, [ebp-28]
push eax
call fb_StrAssign
add esp, 20
push 0
mov dword ptr [ebp-68], 0
mov dword ptr [ebp-64], 0
mov dword ptr [ebp-60], 0
push 0
push -1
push 2
push offset Lt_03AC
push -1
push 2
push offset Lt_03D4
push -1
lea eax, [ebp-28]
push eax
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
lea eax, [ebp-44]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
lea eax, [ebp-56]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-68]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-68]
call OUTEX
add esp, 8
lea eax, [ebp-68]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-32], 0
mov ebx, dword ptr [ebp+28]
mov eax, dword ptr [ebp+32]
mov dword ptr [ebp-76], ebx
mov dword ptr [ebp-72], eax
mov eax, dword ptr [ebp+36]
mov ebx, dword ptr [ebp+40]
mov dword ptr [ebp-84], eax
mov dword ptr [ebp-80], ebx
jmp .Lt_04EF
.Lt_04F2:
mov eax, dword ptr [ebp-32]
sal eax, 3
mov ebx, dword ptr [ebp+12]
add ebx, eax
mov ecx, dword ptr [ebx]
mov eax, dword ptr [ebx+4]
cmp dword ptr [ebp-72], eax
jne .Lt_04F4
cmp dword ptr [ebp-76], ecx
jne .Lt_04F4
.Lt_0C33:
mov ecx, dword ptr [ebp-32]
sal ecx, 2
mov eax, dword ptr [ebp+16]
add eax, ecx
mov ecx, dword ptr [eax]
mov dword ptr [ebp-4], ecx
inc dword ptr [ebp-32]
jmp .Lt_04F3
.Lt_04F4:
mov ecx, dword ptr [ebp+24]
mov dword ptr [ebp-4], ecx
.Lt_04F3:
mov dword ptr [ebp-120], 0
mov dword ptr [ebp-116], 0
mov dword ptr [ebp-112], 0
push 0
push -1
push 0
push dword ptr [ebp-4]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
push -1
push 2
push offset Lt_03B0
push 0
push 8
call _GETTYPESTRING
add esp, 4
push eax
mov dword ptr [ebp-96], 0
mov dword ptr [ebp-92], 0
mov dword ptr [ebp-88], 0
lea eax, [ebp-96]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-108], 0
mov dword ptr [ebp-104], 0
mov dword ptr [ebp-100], 0
lea eax, [ebp-108]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-120]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-120]
call OUTP
add esp, 4
lea eax, [ebp-120]
push eax
call fb_StrDelete
add esp, 4
.Lt_04F0:
add dword ptr [ebp-76], 1
adc dword ptr [ebp-72], 0
.Lt_04EF:
mov ecx, dword ptr [ebp-84]
mov eax, dword ptr [ebp-80]
cmp dword ptr [ebp-72], eax
jb .Lt_04F2
ja .Lt_0C34
cmp dword ptr [ebp-76], ecx
jbe .Lt_04F2
.Lt_0C34:
.Lt_04F1:
lea ecx, [ebp-28]
push ecx
call fb_StrDelete
add esp, 4
lea ecx, [ebp-16]
push ecx
call fb_StrDelete
add esp, 4
.Lt_04EA:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITJMPTB, .-_EMITJMPTB
.balign 16
_EMITCALL:
.type _EMITCALL, @function
push ebp
mov ebp, esp
sub esp, 12
.Lt_04F8:
push 0
push 6
push offset Lt_04FA
push -1
push offset Lt_0C35
call fb_StrAssign
add esp, 20
push 0
push -1
push 0
push dword ptr [ebp+12]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
push -1
push offset Lt_0C35
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_0C35
call fb_StrAssign
add esp, 20
push dword ptr [Lt_0C35]
call OUTP
add esp, 4
cmp dword ptr [ebp+16], 0
je .Lt_04FD
push 0
push 10
push offset Lt_04FE
push -1
push offset Lt_0C35
call fb_StrAssign
add esp, 20
push 0
push -1
push dword ptr [ebp+16]
call fb_IntToStr
add esp, 4
push eax
push -1
push offset Lt_0C35
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0C35]
call OUTP
add esp, 4
.Lt_04FD:
.Lt_04FC:
.Lt_04F9:
mov esp, ebp
pop ebp
ret
.size _EMITCALL, .-_EMITCALL

.section .bss
.balign 4
	.lcomm	Lt_0C35,12

.section .text
.balign 16
_EMITCALLPTR:
.type _EMITCALLPTR, @function
push ebp
mov ebp, esp
.Lt_04FF:
push -1
push 0
push 0
push -2147483648
push offset Lt_0C36
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push 0
push 6
push offset Lt_04FA
push -1
push offset Lt_0C37
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0C36
push -1
push offset Lt_0C37
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0C37]
call OUTP
add esp, 4
cmp dword ptr [ebp+16], 0
je .Lt_0502
push 0
push 10
push offset Lt_04FE
push -1
push offset Lt_0C37
call fb_StrAssign
add esp, 20
push 0
push -1
push dword ptr [ebp+16]
call fb_IntToStr
add esp, 4
push eax
push -1
push offset Lt_0C37
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0C37]
call OUTP
add esp, 4
.Lt_0502:
.Lt_0501:
.Lt_0500:
mov esp, ebp
pop ebp
ret
.size _EMITCALLPTR, .-_EMITCALLPTR

.section .bss
.balign 4
	.lcomm	Lt_0C36,12
.balign 4
	.lcomm	Lt_0C37,12

.section .text
.balign 16
_EMITBRANCH:
.type _EMITBRANCH, @function
push ebp
mov ebp, esp
sub esp, 16
.Lt_0503:
mov eax, dword ptr [ebp+16]
mov dword ptr [ebp-16], eax
jmp .Lt_0506
.Lt_0508:
push 0
push 5
push offset Lt_0509
push -1
push offset Lt_0C38
call fb_StrAssign
add esp, 20
jmp .Lt_0505
.Lt_050A:
push 0
push 5
push offset Lt_050B
push -1
push offset Lt_0C38
call fb_StrAssign
add esp, 20
jmp .Lt_0505
.Lt_050C:
push 0
push 4
push offset Lt_050D
push -1
push offset Lt_0C38
call fb_StrAssign
add esp, 20
jmp .Lt_0505
.Lt_050E:
push 0
push 4
push offset Lt_050F
push -1
push offset Lt_0C38
call fb_StrAssign
add esp, 20
jmp .Lt_0505
.Lt_0510:
push 0
push 4
push offset Lt_0511
push -1
push offset Lt_0C38
call fb_StrAssign
add esp, 20
jmp .Lt_0505
.Lt_0512:
push 0
push 5
push offset Lt_0513
push -1
push offset Lt_0C38
call fb_StrAssign
add esp, 20
jmp .Lt_0505
.Lt_0506:
mov eax, dword ptr [ebp-16]
add eax, 4294967205
cmp eax, 5
ja .Lt_0505
mov eax, dword ptr [ebp-16]
jmp dword ptr [.LT_0514+eax*4-364]
.LT_0514:
.int .Lt_0510
.int .Lt_050E
.int .Lt_050C
.int .Lt_0512
.int .Lt_050A
.int .Lt_0508
.Lt_0505:
push 0
push -1
push 0
push dword ptr [ebp+12]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
push -1
push offset Lt_0C38
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_0C38
call fb_StrAssign
add esp, 20
push dword ptr [Lt_0C38]
call OUTP
add esp, 4
.Lt_0504:
mov esp, ebp
pop ebp
ret
.size _EMITBRANCH, .-_EMITBRANCH

.section .bss
.balign 4
	.lcomm	Lt_0C38,12

.section .text
.balign 16
_EMITJUMP:
.type _EMITJUMP, @function
push ebp
mov ebp, esp
sub esp, 12
.Lt_0516:
push 0
push 5
push offset Lt_0518
push -1
push offset Lt_0C39
call fb_StrAssign
add esp, 20
push 0
push -1
push 0
push dword ptr [ebp+12]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
push -1
push offset Lt_0C39
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_0C39
call fb_StrAssign
add esp, 20
push dword ptr [Lt_0C39]
call OUTP
add esp, 4
.Lt_0517:
mov esp, ebp
pop ebp
ret
.size _EMITJUMP, .-_EMITJUMP

.section .bss
.balign 4
	.lcomm	Lt_0C39,12

.section .text
.balign 16
_EMITJUMPPTR:
.type _EMITJUMPPTR, @function
push ebp
mov ebp, esp
.Lt_051A:
push -1
push 0
push 0
push -2147483648
push offset Lt_0C3A
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push 0
push 5
push offset Lt_0518
push -1
push offset Lt_0C3B
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0C3A
push -1
push offset Lt_0C3B
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0C3B]
call OUTP
add esp, 4
.Lt_051B:
mov esp, ebp
pop ebp
ret
.size _EMITJUMPPTR, .-_EMITJUMPPTR

.section .bss
.balign 4
	.lcomm	Lt_0C3A,12
.balign 4
	.lcomm	Lt_0C3B,12

.section .text
.balign 16
_EMITRET:
.type _EMITRET, @function
push ebp
mov ebp, esp
sub esp, 12
.Lt_051C:
push 0
push -1
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+28]
push dword ptr [eax+24]
call fb_LongintToStr
add esp, 8
push eax
push 5
push offset Lt_04DA
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_0C3C
call fb_StrAssign
add esp, 20
push dword ptr [Lt_0C3C]
call OUTP
add esp, 4
.Lt_051D:
mov esp, ebp
pop ebp
ret
.size _EMITRET, .-_EMITRET

.section .bss
.balign 4
	.lcomm	Lt_0C3C,12

.section .text
.balign 16
_EMITPUBLIC:
.type _EMITPUBLIC, @function
push ebp
mov ebp, esp
sub esp, 12
.Lt_051F:
push 0
push 9
push offset Lt_03D0
push -1
push offset Lt_0C3D
call fb_StrAssign
add esp, 20
push 0
push -1
push 0
push dword ptr [ebp+8]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
push -1
push offset Lt_0C3D
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_0C3D
call fb_StrAssign
add esp, 20
push 0
push 2
push offset Lt_03AC
push -1
push offset Lt_0C3D
call fb_StrConcatAssign
add esp, 20
push 0
push dword ptr [Lt_0C3D]
call OUTEX
add esp, 8
.Lt_0520:
mov esp, ebp
pop ebp
ret
.size _EMITPUBLIC, .-_EMITPUBLIC

.section .bss
.balign 4
	.lcomm	Lt_0C3D,12

.section .text
.balign 16
_EMITLABEL:
.type _EMITLABEL, @function
push ebp
mov ebp, esp
.Lt_0522:
push 0
push 0
push dword ptr [ebp+8]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
push -1
push offset Lt_0C3E
call fb_StrAssign
add esp, 20
push 0
push 3
push offset Lt_03D5
push -1
push offset Lt_0C3E
call fb_StrConcatAssign
add esp, 20
push 0
push dword ptr [Lt_0C3E]
call OUTEX
add esp, 8
.Lt_0523:
mov esp, ebp
pop ebp
ret
.size _EMITLABEL, .-_EMITLABEL

.section .bss
.balign 4
	.lcomm	Lt_0C3E,12

.section .text
.balign 16
_EMITNOP:
.type _EMITNOP, @function
.Lt_0524:
.Lt_0525:
ret
.size _EMITNOP, .-_EMITNOP
.balign 16
HULONG2DBL:
.type HULONG2DBL, @function
push ebp
mov ebp, esp
.Lt_0526:
push 0
push 0
call SYMBUNIQUELABEL
push eax
push -1
push offset Lt_0C3F
call fb_StrAssign
add esp, 20
push -1
push -1
push 0
push 7
push offset Lt_0C40
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push 0
push 5
push offset Lt_0528
push -1
push offset Lt_0C41
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0C40
push -1
push offset Lt_0C41
call fb_StrConcatAssign
add esp, 20
push 0
push 4
push offset Lt_0529
push -1
push offset Lt_0C41
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0C41]
call OUTP
add esp, 4
push 0
push 5
push offset Lt_052A
push -1
push offset Lt_0C41
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0C3F
push -1
push offset Lt_0C41
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0C41]
call OUTP
add esp, 4
push offset Lt_052B
call HPUSH
add esp, 4
push offset Lt_052C
call HPUSH
add esp, 4
push offset Lt_0006
call HPUSH
add esp, 4
push offset Lt_052D
call OUTP
add esp, 4
push offset Lt_052E
call OUTP
add esp, 4
push offset Lt_0120
call OUTP
add esp, 4
push dword ptr [Lt_0C3F]
call HLABEL
add esp, 4
.Lt_0527:
mov esp, ebp
pop ebp
ret
.size HULONG2DBL, .-HULONG2DBL

.section .bss
.balign 4
	.lcomm	Lt_0C3F,12
.balign 4
	.lcomm	Lt_0C40,12
.balign 4
	.lcomm	Lt_0C41,12

.section .text
.balign 16
_EMITSTORL2L:
.type _EMITSTORL2L, @function
push ebp
mov ebp, esp
.Lt_052F:
push offset Lt_0C42
push offset Lt_0C43
push dword ptr [ebp+8]
call HPREPOPERAND64
add esp, 12
push offset Lt_0C44
push offset Lt_0C45
push dword ptr [ebp+12]
call HPREPOPERAND64
add esp, 12
push 0
push 5
push offset Lt_03BF
push -1
push offset Lt_0C46
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0C43
push -1
push offset Lt_0C46
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0C46
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0C45
push -1
push offset Lt_0C46
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0C46]
call OUTP
add esp, 4
push 0
push 5
push offset Lt_03BF
push -1
push offset Lt_0C46
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0C42
push -1
push offset Lt_0C46
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0C46
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0C44
push -1
push offset Lt_0C46
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0C46]
call OUTP
add esp, 4
.Lt_0530:
mov esp, ebp
pop ebp
ret
.size _EMITSTORL2L, .-_EMITSTORL2L

.section .bss
.balign 4
	.lcomm	Lt_0C43,12
.balign 4
	.lcomm	Lt_0C42,12
.balign 4
	.lcomm	Lt_0C45,12
.balign 4
	.lcomm	Lt_0C44,12
.balign 4
	.lcomm	Lt_0C46,12

.section .text
.balign 16
_EMITSTORI2L:
.type _EMITSTORI2L, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
.Lt_0531:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_0533
mov dword ptr [ebp-4], 22
jmp .Lt_0C47
.Lt_0533:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0C47:
mov eax, dword ptr [ebp-4]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+4]
mov dword ptr [Lt_0C4B], ebx
push offset Lt_0C4C
push offset Lt_0C4D
push dword ptr [ebp+8]
call HPREPOPERAND64
add esp, 12
push -1
push 0
push 0
push -2147483648
push offset Lt_0C4E
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
mov ebx, dword ptr [ebp+12]
cmp dword ptr [ebx], 0
jne .Lt_0536
push dword ptr [Lt_0C4E]
push dword ptr [Lt_0C4D]
call HMOV
add esp, 8
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 480
je .Lt_0537
mov dword ptr [ebp-12], 22
jmp .Lt_0C48
.Lt_0537:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 31
mov dword ptr [ebp-12], ebx
.Lt_0C48:
mov ebx, dword ptr [ebp-12]
imul ebx, 28
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax+28], 0
mov ecx, -1
jl .Lt_0C4F
jg .Lt_0C50
cmp dword ptr [eax+24], 0
jb .Lt_0C4F
.Lt_0C50:
xor ecx, ecx
.Lt_0C4F:
and ecx, dword ptr [SYMB_DTYPETB+ebx+8]
je .Lt_053A
push offset Lt_053B
push dword ptr [Lt_0C4C]
call HMOV
add esp, 8
jmp .Lt_0539
.Lt_053A:
push offset Lt_0006
push dword ptr [Lt_0C4C]
call HMOV
add esp, 8
.Lt_0539:
jmp .Lt_0532
.Lt_0536:
.Lt_0535:
cmp dword ptr [Lt_0C4B], 4
jge .Lt_053D
push 0
push 0
mov ebx, dword ptr [ebp+12]
push dword ptr [ebx+12]
push 7
call HGETREGNAME
add esp, 8
push eax
push -1
push offset Lt_0C51
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_053E
mov dword ptr [ebp-12], 22
jmp .Lt_0C49
.Lt_053E:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-12], eax
.Lt_0C49:
mov eax, dword ptr [ebp-12]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+8], 0
je .Lt_0541
push 0
push 7
push offset Lt_0542
push -1
push offset Lt_0C52
call fb_StrAssign
add esp, 20
jmp .Lt_0540
.Lt_0541:
push 0
push 7
push offset Lt_0543
push -1
push offset Lt_0C52
call fb_StrAssign
add esp, 20
.Lt_0540:
push 0
push -1
push offset Lt_0C51
push -1
push offset Lt_0C52
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0C52
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0C4E
push -1
push offset Lt_0C52
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0C52]
call OUTP
add esp, 4
jmp .Lt_053C
.Lt_053D:
push 0
push -1
push offset Lt_0C4E
push -1
push offset Lt_0C51
call fb_StrAssign
add esp, 20
.Lt_053C:
push 0
push 5
push offset Lt_03BF
push -1
push offset Lt_0C52
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0C4D
push -1
push offset Lt_0C52
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0C52
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0C51
push -1
push offset Lt_0C52
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0C52]
call OUTP
add esp, 4
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_0544
mov dword ptr [ebp-8], 22
jmp .Lt_0C4A
.Lt_0544:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-8], eax
.Lt_0C4A:
mov eax, dword ptr [ebp-8]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+8], 0
je .Lt_0547
push dword ptr [Lt_0C51]
call HPUSH
add esp, 4
push 0
push 5
push offset Lt_0548
push -1
push offset Lt_0C52
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0C51
push -1
push offset Lt_0C52
call fb_StrConcatAssign
add esp, 20
push 0
push 5
push offset Lt_0549
push -1
push offset Lt_0C52
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0C52]
call OUTP
add esp, 4
push 0
push 5
push offset Lt_03BF
push -1
push offset Lt_0C52
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0C4C
push -1
push offset Lt_0C52
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0C52
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0C51
push -1
push offset Lt_0C52
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0C52]
call OUTP
add esp, 4
push dword ptr [Lt_0C51]
call HPOP
add esp, 4
jmp .Lt_0546
.Lt_0547:
push 0
push 5
push offset Lt_03BF
push -1
push offset Lt_0C52
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0C4C
push -1
push offset Lt_0C52
call fb_StrConcatAssign
add esp, 20
push 0
push 4
push offset Lt_0529
push -1
push offset Lt_0C52
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0C52]
call OUTP
add esp, 4
.Lt_0546:
.Lt_0532:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITSTORI2L, .-_EMITSTORI2L

.section .bss
.balign 4
	.lcomm	Lt_0C4D,12
.balign 4
	.lcomm	Lt_0C4C,12
.balign 4
	.lcomm	Lt_0C4E,12
.balign 4
	.lcomm	Lt_0C51,12
.balign 4
	.lcomm	Lt_0C52,12
.balign 4
	.lcomm	Lt_0C4B,4

.section .text
.balign 16
_EMITSTORF2L:
.type _EMITSTORF2L, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_054A:
push -1
push 0
push 0
push -2147483648
push offset Lt_0C54
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_054C
mov dword ptr [ebp-4], 22
jmp .Lt_0C53
.Lt_054C:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0C53:
mov eax, dword ptr [ebp-4]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+8], 0
je .Lt_054F
push 0
push 7
push offset Lt_0550
push -1
push offset Lt_0C55
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0C54
push -1
push offset Lt_0C55
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0C55]
call OUTP
add esp, 4
.Lt_054F:
.Lt_054E:
.Lt_054B:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITSTORF2L, .-_EMITSTORF2L

.section .bss
.balign 4
	.lcomm	Lt_0C54,12
.balign 4
	.lcomm	Lt_0C55,12

.section .text
.balign 16
_EMITSTORI2I:
.type _EMITSTORI2I, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
.Lt_0551:
push -1
push 0
push 0
push -2147483648
push offset Lt_0C59
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push -1
push 0
push 0
push -2147483648
push offset Lt_0C5A
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_0553
mov dword ptr [ebp-4], 22
jmp .Lt_0C56
.Lt_0553:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0C56:
mov eax, dword ptr [ebp-4]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+4]
mov dword ptr [Lt_0C5B], ebx
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 480
je .Lt_0555
mov dword ptr [ebp-8], 22
jmp .Lt_0C57
.Lt_0555:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 31
mov dword ptr [ebp-8], ebx
.Lt_0C57:
mov ebx, dword ptr [ebp-8]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx+4]
mov dword ptr [Lt_0C5C], eax
cmp dword ptr [Lt_0C5B], 1
jne .Lt_0558
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax], 0
jne .Lt_055A
mov dword ptr [Lt_0C5B], 4
.Lt_055A:
.Lt_0559:
.Lt_0558:
.Lt_0557:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax]
test ebx, ebx
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [Lt_0C5C]
cmp eax, dword ptr [Lt_0C5B]
sete al
shr eax, 1
sbb eax, eax
or ebx, eax
je .Lt_055C
push 0
push 5
push offset Lt_03BF
push -1
push offset Lt_0C5F
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0C59
push -1
push offset Lt_0C5F
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0C5F
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0C5A
push -1
push offset Lt_0C5F
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0C5F]
call OUTP
add esp, 4
jmp .Lt_055B
.Lt_055C:
push 0
push 0
mov eax, dword ptr [ebp+12]
push dword ptr [eax+12]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+4]
call HGETREGNAME
add esp, 8
push eax
push -1
push offset Lt_0C60
call fb_StrAssign
add esp, 20
mov eax, dword ptr [Lt_0C5C]
cmp dword ptr [Lt_0C5B], eax
jle .Lt_055E
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_055F
mov dword ptr [ebp-12], 22
jmp .Lt_0C58
.Lt_055F:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-12], eax
.Lt_0C58:
mov eax, dword ptr [ebp-12]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+8], 0
je .Lt_0562
push 0
push 7
push offset Lt_0542
push -1
push offset Lt_0C5F
call fb_StrAssign
add esp, 20
jmp .Lt_0561
.Lt_0562:
push 0
push 7
push offset Lt_0543
push -1
push offset Lt_0C5F
call fb_StrAssign
add esp, 20
.Lt_0561:
push 0
push -1
push offset Lt_0C60
push -1
push offset Lt_0C5F
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0C5F
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0C5A
push -1
push offset Lt_0C5F
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0C5F]
call OUTP
add esp, 4
push 0
push 5
push offset Lt_03BF
push -1
push offset Lt_0C5F
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0C59
push -1
push offset Lt_0C5F
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0C5F
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0C60
push -1
push offset Lt_0C5F
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0C5F]
call OUTP
add esp, 4
jmp .Lt_055D
.Lt_055E:
mov dword ptr [Lt_0C61], 0
cmp dword ptr [Lt_0C5B], 1
jne .Lt_0564
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax], 4
jne .Lt_0566
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+12]
cmp ebx, 2
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax+12]
cmp ecx, 1
sete cl
shr ecx, 1
sbb ecx, ecx
or ebx, ecx
mov dword ptr [Lt_0C61], ebx
.Lt_0566:
.Lt_0565:
.Lt_0564:
.Lt_0563:
cmp dword ptr [Lt_0C61], 0
je .Lt_0568
push -1
push dword ptr [ebp+8]
call HFINDREGNOTINVREG
add esp, 8
mov dword ptr [Lt_0C64], eax
push 0
push 0
push dword ptr [Lt_0C64]
push 1
call HGETREGNAME
add esp, 8
push eax
push -1
push offset Lt_0C65
call fb_StrAssign
add esp, 20
push 0
push 0
push dword ptr [Lt_0C64]
mov eax, dword ptr [ebp+12]
push dword ptr [eax+4]
call HGETREGNAME
add esp, 8
push eax
push -1
push offset Lt_0C60
call fb_StrAssign
add esp, 20
push dword ptr [Lt_0C64]
push 0
call HISREGFREE
add esp, 8
mov dword ptr [Lt_0C66], eax
cmp dword ptr [Lt_0C66], 0
jne .Lt_056A
push dword ptr [Lt_0C60]
call HPUSH
add esp, 4
.Lt_056A:
.Lt_0569:
push 0
push 5
push offset Lt_03BF
push -1
push offset Lt_0C5F
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0C60
push -1
push offset Lt_0C5F
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0C5F
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0C5A
push -1
push offset Lt_0C5F
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0C5F]
call OUTP
add esp, 4
push 0
push 5
push offset Lt_03BF
push -1
push offset Lt_0C5F
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0C59
push -1
push offset Lt_0C5F
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0C5F
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0C65
push -1
push offset Lt_0C5F
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0C5F]
call OUTP
add esp, 4
cmp dword ptr [Lt_0C66], 0
jne .Lt_056C
push dword ptr [Lt_0C60]
call HPOP
add esp, 4
.Lt_056C:
.Lt_056B:
jmp .Lt_0567
.Lt_0568:
push 0
push 5
push offset Lt_03BF
push -1
push offset Lt_0C5F
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0C59
push -1
push offset Lt_0C5F
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0C5F
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0C60
push -1
push offset Lt_0C5F
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0C5F]
call OUTP
add esp, 4
.Lt_0567:
.Lt_055D:
.Lt_055B:
.Lt_0552:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITSTORI2I, .-_EMITSTORI2I

.section .bss
.balign 4
	.lcomm	Lt_0C59,12
.balign 4
	.lcomm	Lt_0C5A,12
.balign 4
	.lcomm	Lt_0C5B,4
.balign 4
	.lcomm	Lt_0C5C,4
.balign 4
	.lcomm	Lt_0C5F,12
.balign 4
	.lcomm	Lt_0C60,12
.balign 4
	.lcomm	Lt_0C61,4
.balign 4
	.lcomm	Lt_0C65,12
.balign 4
	.lcomm	Lt_0C64,4
.balign 4
	.lcomm	Lt_0C66,4

.section .text
.balign 16
_EMITSTORL2I:
.type _EMITSTORL2I, @function
push ebp
mov ebp, esp
.Lt_056D:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call _EMITSTORI2I
add esp, 8
.Lt_056E:
mov esp, ebp
pop ebp
ret
.size _EMITSTORL2I, .-_EMITSTORL2I
.balign 16
_EMITSTORF2I:
.type _EMITSTORF2I, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_056F:
push -1
push 0
push 0
push -2147483648
push offset Lt_0C69
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push -1
push 0
push 0
push -2147483648
push offset Lt_0C6A
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_0571
mov dword ptr [ebp-4], 22
jmp .Lt_0C67
.Lt_0571:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0C67:
mov eax, dword ptr [ebp-4]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+4]
mov dword ptr [Lt_0C6B], ebx
cmp dword ptr [Lt_0C6B], 1
jne .Lt_0574
push offset Lt_0575
call OUTP
add esp, 4
push offset Lt_0576
call OUTP
add esp, 4
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx], 4
jne .Lt_0578
push offset Lt_0579
push dword ptr [Lt_0C69]
call HMOV
add esp, 8
push offset Lt_057A
call OUTP
add esp, 4
jmp .Lt_0577
.Lt_0578:
push -1
push dword ptr [ebp+8]
call HFINDREGNOTINVREG
add esp, 8
mov dword ptr [Lt_0C6C], eax
push 0
push 0
push dword ptr [Lt_0C6C]
push 1
call HGETREGNAME
add esp, 8
push eax
push -1
push offset Lt_0C6D
call fb_StrAssign
add esp, 20
push 0
push 0
push dword ptr [Lt_0C6C]
push 7
call HGETREGNAME
add esp, 8
push eax
push -1
push offset Lt_0C6E
call fb_StrAssign
add esp, 20
push dword ptr [Lt_0C6C]
push 0
call HISREGFREE
add esp, 8
mov dword ptr [Lt_0C6F], eax
cmp dword ptr [Lt_0C6F], 0
jne .Lt_057C
push offset Lt_057D
push dword ptr [Lt_0C6E]
call HXCHG
add esp, 8
jmp .Lt_057B
.Lt_057C:
push offset Lt_0579
push dword ptr [Lt_0C6D]
call HMOV
add esp, 8
.Lt_057B:
push dword ptr [Lt_0C6D]
push dword ptr [Lt_0C69]
call HMOV
add esp, 8
cmp dword ptr [Lt_0C6F], 0
jne .Lt_057F
push dword ptr [Lt_0C6E]
call HPOP
add esp, 4
jmp .Lt_057E
.Lt_057F:
push offset Lt_057A
call OUTP
add esp, 4
.Lt_057E:
.Lt_0577:
jmp .Lt_0573
.Lt_0574:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_0580
mov dword ptr [ebp-8], 22
jmp .Lt_0C68
.Lt_0580:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-8], eax
.Lt_0C68:
mov eax, dword ptr [ebp-8]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+8], 0
je .Lt_0583
push 0
push 7
push offset Lt_0550
push -1
push offset Lt_0C70
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0C69
push -1
push offset Lt_0C70
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0C70]
call OUTP
add esp, 4
jmp .Lt_0582
.Lt_0583:
cmp dword ptr [Lt_0C6B], 4
jne .Lt_0585
push offset Lt_0586
call OUTP
add esp, 4
push offset Lt_0587
call OUTP
add esp, 4
push dword ptr [Lt_0C69]
call HPOP
add esp, 4
push offset Lt_057A
call OUTP
add esp, 4
jmp .Lt_0584
.Lt_0585:
push offset Lt_0575
call OUTP
add esp, 4
push offset Lt_0576
call OUTP
add esp, 4
push dword ptr [Lt_0C69]
call HPOP
add esp, 4
push offset Lt_0588
call OUTP
add esp, 4
.Lt_0584:
.Lt_0582:
.Lt_0573:
.Lt_0570:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITSTORF2I, .-_EMITSTORF2I

.section .bss
.balign 4
	.lcomm	Lt_0C69,12
.balign 4
	.lcomm	Lt_0C6A,12
.balign 4
	.lcomm	Lt_0C6B,4
.balign 4
	.lcomm	Lt_0C70,12
.balign 4
	.lcomm	Lt_0C6C,4
.balign 4
	.lcomm	Lt_0C6F,4
.balign 4
	.lcomm	Lt_0C6E,12
.balign 4
	.lcomm	Lt_0C6D,12

.section .text
.balign 16
_EMITSTORL2F:
.type _EMITSTORL2F, @function
push ebp
mov ebp, esp
sub esp, 28
push ebx
.Lt_0589:
push -1
push 0
push 0
push -2147483648
push offset Lt_0C73
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push -1
push 0
push 0
push -2147483648
push offset Lt_0C74
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax]
cmp ebx, 4
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax]
test ecx, ecx
sete cl
shr ecx, 1
sbb ecx, ecx
or ebx, ecx
je .Lt_058C
mov ecx, dword ptr [ebp+12]
mov ebx, dword ptr [ecx+4]
and ebx, 480
je .Lt_058D
mov dword ptr [ebp-4], 22
jmp .Lt_0C71
.Lt_058D:
mov ebx, dword ptr [ebp+12]
mov ecx, dword ptr [ebx+4]
and ecx, 31
mov dword ptr [ebp-4], ecx
.Lt_0C71:
mov ecx, dword ptr [ebp-4]
imul ecx, 28
cmp dword ptr [SYMB_DTYPETB+ecx+8], 0
je .Lt_0590
push offset Lt_0C77
push offset Lt_0C74
push dword ptr [ebp+12]
call HPREPOPERAND64
add esp, 12
push dword ptr [Lt_0C77]
call HPUSH
add esp, 4
push dword ptr [Lt_0C74]
call HPUSH
add esp, 4
push 0
push -1
push 7
push offset Lt_0592
push -1
push 12
mov ecx, dword ptr [ebp+12]
mov ebx, dword ptr [ecx+4]
sal ebx, 4
lea ecx, [DTYPETB+ebx+4]
push ecx
push 6
push offset Lt_0591
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
lea ecx, [ebp-16]
push ecx
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
lea eax, [ebp-28]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_0C78
call fb_StrAssign
add esp, 20
push dword ptr [Lt_0C78]
call OUTP
add esp, 4
push offset Lt_0595
call OUTP
add esp, 4
jmp .Lt_058F
.Lt_0590:
push offset Lt_0C77
push offset Lt_0C74
push dword ptr [ebp+12]
call HPREPOPERAND64
add esp, 12
push dword ptr [Lt_0C77]
call HPUSH
add esp, 4
push dword ptr [Lt_0C74]
call HPUSH
add esp, 4
push offset Lt_0596
call OUTP
add esp, 4
push offset Lt_0595
call OUTP
add esp, 4
push dword ptr [ebp+12]
call HULONG2DBL
add esp, 4
.Lt_058F:
jmp .Lt_058B
.Lt_058C:
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax+4]
and ecx, 480
je .Lt_0597
mov dword ptr [ebp-4], 22
jmp .Lt_0C72
.Lt_0597:
mov ecx, dword ptr [ebp+12]
mov eax, dword ptr [ecx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0C72:
mov eax, dword ptr [ebp-4]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+8], 0
je .Lt_059A
push 0
push 6
push offset Lt_0591
push -1
push offset Lt_0C78
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0C74
push -1
push offset Lt_0C78
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0C78]
call OUTP
add esp, 4
jmp .Lt_0599
.Lt_059A:
push 0
push 6
push offset Lt_0591
push -1
push offset Lt_0C78
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0C74
push -1
push offset Lt_0C78
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0C78]
call OUTP
add esp, 4
push dword ptr [ebp+12]
call HULONG2DBL
add esp, 4
.Lt_0599:
.Lt_058B:
push 0
push 6
push offset Lt_059B
push -1
push offset Lt_0C78
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0C73
push -1
push offset Lt_0C78
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0C78]
call OUTP
add esp, 4
.Lt_058A:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITSTORL2F, .-_EMITSTORL2F

.section .bss
.balign 4
	.lcomm	Lt_0C73,12
.balign 4
	.lcomm	Lt_0C74,12
.balign 4
	.lcomm	Lt_0C77,12
.balign 4
	.lcomm	Lt_0C78,12

.section .text
.balign 16
_EMITSTORI2F:
.type _EMITSTORI2F, @function
push ebp
mov ebp, esp
sub esp, 32
push ebx
.Lt_059C:
push -1
push 0
push 0
push -2147483648
push offset Lt_0C7D
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push -1
push 0
push 0
push -2147483648
push offset Lt_0C7E
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_059E
mov dword ptr [ebp-4], 22
jmp .Lt_0C79
.Lt_059E:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0C79:
mov eax, dword ptr [ebp-4]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+4]
mov dword ptr [Lt_0C7F], ebx
cmp dword ptr [Lt_0C7F], 1
jne .Lt_05A1
push 0
push dword ptr [ebp+12]
call HFINDREGNOTINVREG
add esp, 8
mov dword ptr [Lt_0C80], eax
push 0
push 0
push dword ptr [Lt_0C80]
push 7
call HGETREGNAME
add esp, 8
push eax
push -1
push offset Lt_0C81
call fb_StrAssign
add esp, 20
push dword ptr [Lt_0C80]
push 0
call HISREGFREE
add esp, 8
mov dword ptr [Lt_0C82], eax
cmp dword ptr [Lt_0C82], 0
jne .Lt_05A3
push dword ptr [Lt_0C81]
call HPUSH
add esp, 4
.Lt_05A3:
.Lt_05A2:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_05A4
mov dword ptr [ebp-8], 22
jmp .Lt_0C7A
.Lt_05A4:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-8], eax
.Lt_0C7A:
mov eax, dword ptr [ebp-8]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+8], 0
je .Lt_05A7
push 0
push 7
push offset Lt_0542
push -1
push offset Lt_0C83
call fb_StrAssign
add esp, 20
jmp .Lt_05A6
.Lt_05A7:
push 0
push 7
push offset Lt_0543
push -1
push offset Lt_0C83
call fb_StrAssign
add esp, 20
.Lt_05A6:
push 0
push -1
push offset Lt_0C81
push -1
push offset Lt_0C83
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0C83
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0C7E
push -1
push offset Lt_0C83
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0C83]
call OUTP
add esp, 4
push dword ptr [Lt_0C81]
call HPUSH
add esp, 4
push offset Lt_05A8
call OUTP
add esp, 4
push offset Lt_057A
call OUTP
add esp, 4
cmp dword ptr [Lt_0C82], 0
jne .Lt_05AA
push dword ptr [Lt_0C81]
call HPOP
add esp, 4
.Lt_05AA:
.Lt_05A9:
push 0
push 6
push offset Lt_059B
push -1
push offset Lt_0C83
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0C7D
push -1
push offset Lt_0C83
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0C83]
call OUTP
add esp, 4
jmp .Lt_059D
.Lt_05A1:
.Lt_05A0:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax]
cmp ebx, 4
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax]
test ecx, ecx
sete cl
shr ecx, 1
sbb ecx, ecx
or ebx, ecx
je .Lt_05AC
mov ecx, dword ptr [ebp+12]
mov ebx, dword ptr [ecx+4]
and ebx, 480
je .Lt_05AD
mov dword ptr [ebp-8], 22
jmp .Lt_0C7B
.Lt_05AD:
mov ebx, dword ptr [ebp+12]
mov ecx, dword ptr [ebx+4]
and ecx, 31
mov dword ptr [ebp-8], ecx
.Lt_0C7B:
mov ecx, dword ptr [ebp-8]
imul ecx, 28
cmp dword ptr [SYMB_DTYPETB+ecx+8], 0
je .Lt_05B0
mov ecx, dword ptr [ebp+12]
mov ebx, dword ptr [ecx]
cmp ebx, 4
sete bl
shr ebx, 1
sbb ebx, ebx
mov ecx, dword ptr [Lt_0C7F]
cmp ecx, 4
setl cl
shr ecx, 1
sbb ecx, ecx
and ebx, ecx
je .Lt_05B2
push 0
push 0
mov ecx, dword ptr [ebp+12]
push dword ptr [ecx+12]
push 7
call HGETREGNAME
add esp, 8
push eax
push -1
push offset Lt_0C7E
call fb_StrAssign
add esp, 20
.Lt_05B2:
.Lt_05B1:
push dword ptr [Lt_0C7E]
call HPUSH
add esp, 4
push 0
push -1
push 7
push offset Lt_0592
push -1
push 12
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax+4]
sal ecx, 4
lea eax, [DTYPETB+ecx+4]
push eax
push 6
push offset Lt_0591
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
lea eax, [ebp-20]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
lea eax, [ebp-32]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_0C83
call fb_StrAssign
add esp, 20
push dword ptr [Lt_0C83]
call OUTP
add esp, 4
push offset Lt_057A
call OUTP
add esp, 4
jmp .Lt_05AF
.Lt_05B0:
cmp dword ptr [Lt_0C7F], 4
jne .Lt_05B6
push offset Lt_0006
call HPUSH
add esp, 4
push dword ptr [Lt_0C7E]
call HPUSH
add esp, 4
push offset Lt_0596
call OUTP
add esp, 4
push offset Lt_0595
call OUTP
add esp, 4
jmp .Lt_05B5
.Lt_05B6:
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax], 0
je .Lt_05B8
push offset Lt_0006
call HPUSH
add esp, 4
.Lt_05B8:
.Lt_05B7:
push dword ptr [Lt_0C7E]
call HPUSH
add esp, 4
push offset Lt_05A8
call OUTP
add esp, 4
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax], 0
je .Lt_05BA
push offset Lt_05BB
call OUTP
add esp, 4
jmp .Lt_05B9
.Lt_05BA:
push offset Lt_057A
call OUTP
add esp, 4
.Lt_05B9:
.Lt_05B5:
.Lt_05AF:
jmp .Lt_05AB
.Lt_05AC:
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax+4]
and ecx, 480
je .Lt_05BC
mov dword ptr [ebp-8], 22
jmp .Lt_0C7C
.Lt_05BC:
mov ecx, dword ptr [ebp+12]
mov eax, dword ptr [ecx+4]
and eax, 31
mov dword ptr [ebp-8], eax
.Lt_0C7C:
mov eax, dword ptr [ebp-8]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+8], 0
je .Lt_05BF
push 0
push 6
push offset Lt_0591
push -1
push offset Lt_0C83
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0C7E
push -1
push offset Lt_0C83
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0C83]
call OUTP
add esp, 4
jmp .Lt_05BE
.Lt_05BF:
cmp dword ptr [Lt_0C7F], 4
jne .Lt_05C1
push offset Lt_0006
call HPUSH
add esp, 4
push dword ptr [Lt_0C7E]
call HPUSH
add esp, 4
push offset Lt_0596
call OUTP
add esp, 4
push offset Lt_0595
call OUTP
add esp, 4
jmp .Lt_05C0
.Lt_05C1:
push offset Lt_0006
call HPUSH
add esp, 4
push dword ptr [Lt_0C7E]
call HPUSH
add esp, 4
push offset Lt_05A8
call OUTP
add esp, 4
push offset Lt_05BB
call OUTP
add esp, 4
.Lt_05C0:
.Lt_05BE:
.Lt_05AB:
push 0
push 6
push offset Lt_059B
push -1
push offset Lt_0C83
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0C7D
push -1
push offset Lt_0C83
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0C83]
call OUTP
add esp, 4
.Lt_059D:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITSTORI2F, .-_EMITSTORI2F

.section .bss
.balign 4
	.lcomm	Lt_0C7D,12
.balign 4
	.lcomm	Lt_0C7E,12
.balign 4
	.lcomm	Lt_0C7F,4
.balign 4
	.lcomm	Lt_0C83,12
.balign 4
	.lcomm	Lt_0C81,12
.balign 4
	.lcomm	Lt_0C80,4
.balign 4
	.lcomm	Lt_0C82,4

.section .text
.balign 16
_EMITSTORF2F:
.type _EMITSTORF2F, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_05C2:
push -1
push 0
push 0
push -2147483648
push offset Lt_0C8A
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push -1
push 0
push 0
push -2147483648
push offset Lt_0C8B
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_05C4
mov dword ptr [ebp-4], 22
jmp .Lt_0C88
.Lt_05C4:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0C88:
mov eax, dword ptr [ebp-4]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+4]
mov dword ptr [Lt_0C8C], ebx
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 480
je .Lt_05C6
mov dword ptr [ebp-8], 22
jmp .Lt_0C89
.Lt_05C6:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 31
mov dword ptr [ebp-8], ebx
.Lt_0C89:
mov ebx, dword ptr [ebp-8]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx+4]
mov dword ptr [Lt_0C8D], eax
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax], 4
jne .Lt_05C9
push 0
push 6
push offset Lt_059B
push -1
push offset Lt_0C8E
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0C8A
push -1
push offset Lt_0C8E
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0C8E]
call OUTP
add esp, 4
jmp .Lt_05C8
.Lt_05C9:
mov eax, dword ptr [Lt_0C8C]
cmp dword ptr [Lt_0C8D], eax
jne .Lt_05CB
push -1
push 0
push 0
push 7
push offset Lt_0C8B
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
push 0
push 6
push offset Lt_03B5
push -1
push offset Lt_0C8E
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0C8B
push -1
push offset Lt_0C8E
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0C8E]
call OUTP
add esp, 4
cmp dword ptr [Lt_0C8D], 4
jle .Lt_05CD
push -1
push 0
push 4
push 7
push offset Lt_0C8B
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
push 0
push 6
push offset Lt_03B5
push -1
push offset Lt_0C8E
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0C8B
push -1
push offset Lt_0C8E
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0C8E]
call OUTP
add esp, 4
push -1
push 0
push 4
push 7
push offset Lt_0C8A
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push 0
push 5
push offset Lt_03BA
push -1
push offset Lt_0C8E
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0C8A
push -1
push offset Lt_0C8E
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0C8E]
call OUTP
add esp, 4
.Lt_05CD:
.Lt_05CC:
push -1
push 0
push 0
push 7
push offset Lt_0C8A
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push 0
push 5
push offset Lt_03BA
push -1
push offset Lt_0C8E
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0C8A
push -1
push offset Lt_0C8E
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0C8E]
call OUTP
add esp, 4
jmp .Lt_05CA
.Lt_05CB:
push 0
push 5
push offset Lt_05CE
push -1
push offset Lt_0C8E
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0C8B
push -1
push offset Lt_0C8E
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0C8E]
call OUTP
add esp, 4
push 0
push 6
push offset Lt_059B
push -1
push offset Lt_0C8E
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0C8A
push -1
push offset Lt_0C8E
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0C8E]
call OUTP
add esp, 4
.Lt_05CA:
.Lt_05C8:
.Lt_05C3:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITSTORF2F, .-_EMITSTORF2F

.section .bss
.balign 4
	.lcomm	Lt_0C8A,12
.balign 4
	.lcomm	Lt_0C8B,12
.balign 4
	.lcomm	Lt_0C8C,4
.balign 4
	.lcomm	Lt_0C8D,4
.balign 4
	.lcomm	Lt_0C8E,12

.section .text
.balign 16
_EMITLOADL2L:
.type _EMITLOADL2L, @function
push ebp
mov ebp, esp
.Lt_05CF:
push offset Lt_0C8F
push offset Lt_0C90
push dword ptr [ebp+8]
call HPREPOPERAND64
add esp, 12
push offset Lt_0C91
push offset Lt_0C92
push dword ptr [ebp+12]
call HPREPOPERAND64
add esp, 12
push 0
push 5
push offset Lt_03BF
push -1
push offset Lt_0C93
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0C90
push -1
push offset Lt_0C93
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0C93
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0C92
push -1
push offset Lt_0C93
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0C93]
call OUTP
add esp, 4
push 0
push 5
push offset Lt_03BF
push -1
push offset Lt_0C93
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0C8F
push -1
push offset Lt_0C93
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0C93
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0C91
push -1
push offset Lt_0C93
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0C93]
call OUTP
add esp, 4
.Lt_05D0:
mov esp, ebp
pop ebp
ret
.size _EMITLOADL2L, .-_EMITLOADL2L

.section .bss
.balign 4
	.lcomm	Lt_0C90,12
.balign 4
	.lcomm	Lt_0C8F,12
.balign 4
	.lcomm	Lt_0C92,12
.balign 4
	.lcomm	Lt_0C91,12
.balign 4
	.lcomm	Lt_0C93,12

.section .text
.balign 16
_EMITLOADI2L:
.type _EMITLOADI2L, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
.Lt_05D1:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_05D3
mov dword ptr [ebp-4], 22
jmp .Lt_0C94
.Lt_05D3:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0C94:
mov eax, dword ptr [ebp-4]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+4]
mov dword ptr [Lt_0C97], ebx
push offset Lt_0C98
push offset Lt_0C99
push dword ptr [ebp+8]
call HPREPOPERAND64
add esp, 12
push -1
push 0
push 0
push -2147483648
push offset Lt_0C9A
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
mov ebx, dword ptr [ebp+12]
cmp dword ptr [ebx], 0
jne .Lt_05D6
push dword ptr [Lt_0C9A]
push dword ptr [Lt_0C99]
call HMOV
add esp, 8
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 480
je .Lt_05D7
mov dword ptr [ebp-12], 22
jmp .Lt_0C95
.Lt_05D7:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 31
mov dword ptr [ebp-12], ebx
.Lt_0C95:
mov ebx, dword ptr [ebp-12]
imul ebx, 28
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax+28], 0
mov ecx, -1
jl .Lt_0C9B
jg .Lt_0C9C
cmp dword ptr [eax+24], 0
jb .Lt_0C9B
.Lt_0C9C:
xor ecx, ecx
.Lt_0C9B:
and ecx, dword ptr [SYMB_DTYPETB+ebx+8]
je .Lt_05DA
push offset Lt_053B
push dword ptr [Lt_0C98]
call HMOV
add esp, 8
jmp .Lt_05D9
.Lt_05DA:
push offset Lt_0006
push dword ptr [Lt_0C98]
call HMOV
add esp, 8
.Lt_05D9:
jmp .Lt_05D2
.Lt_05D6:
.Lt_05D5:
mov ebx, dword ptr [ebp+12]
mov ecx, dword ptr [ebx+4]
and ecx, 480
je .Lt_05DB
mov dword ptr [ebp-8], 22
jmp .Lt_0C96
.Lt_05DB:
mov ecx, dword ptr [ebp+12]
mov ebx, dword ptr [ecx+4]
and ebx, 31
mov dword ptr [ebp-8], ebx
.Lt_0C96:
mov ebx, dword ptr [ebp-8]
imul ebx, 28
cmp dword ptr [SYMB_DTYPETB+ebx+8], 0
je .Lt_05DE
cmp dword ptr [Lt_0C97], 4
jge .Lt_05E0
push 0
push 7
push offset Lt_0542
push -1
push offset Lt_0C9D
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0C99
push -1
push offset Lt_0C9D
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0C9D
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0C9A
push -1
push offset Lt_0C9D
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0C9D]
call OUTP
add esp, 4
jmp .Lt_05DF
.Lt_05E0:
push dword ptr [Lt_0C9A]
push dword ptr [Lt_0C99]
call HMOV
add esp, 8
.Lt_05DF:
push dword ptr [Lt_0C99]
push dword ptr [Lt_0C98]
call HMOV
add esp, 8
push 0
push 5
push offset Lt_0548
push -1
push offset Lt_0C9D
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0C98
push -1
push offset Lt_0C9D
call fb_StrConcatAssign
add esp, 20
push 0
push 5
push offset Lt_0549
push -1
push offset Lt_0C9D
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0C9D]
call OUTP
add esp, 4
jmp .Lt_05DD
.Lt_05DE:
cmp dword ptr [Lt_0C97], 4
jge .Lt_05E2
push 0
push 7
push offset Lt_0543
push -1
push offset Lt_0C9D
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0C99
push -1
push offset Lt_0C9D
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0C9D
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0C9A
push -1
push offset Lt_0C9D
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0C9D]
call OUTP
add esp, 4
jmp .Lt_05E1
.Lt_05E2:
push dword ptr [Lt_0C9A]
push dword ptr [Lt_0C99]
call HMOV
add esp, 8
.Lt_05E1:
push offset Lt_0006
push dword ptr [Lt_0C98]
call HMOV
add esp, 8
.Lt_05DD:
.Lt_05D2:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITLOADI2L, .-_EMITLOADI2L

.section .bss
.balign 4
	.lcomm	Lt_0C99,12
.balign 4
	.lcomm	Lt_0C98,12
.balign 4
	.lcomm	Lt_0C9A,12
.balign 4
	.lcomm	Lt_0C97,4
.balign 4
	.lcomm	Lt_0C9D,12

.section .text
.balign 16
_EMITLOADF2L:
.type _EMITLOADF2L, @function
push ebp
mov ebp, esp
sub esp, 44
push ebx
.Lt_05E3:
push -1
push 0
push 0
push -2147483648
push offset Lt_0CA0
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push -1
push 0
push 0
push -2147483648
push offset Lt_0CA1
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax], 4
je .Lt_05E6
push 0
push 5
push offset Lt_05CE
push -1
push offset Lt_0CA2
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0CA1
push -1
push offset Lt_0CA2
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0CA2]
call OUTP
add esp, 4
.Lt_05E6:
.Lt_05E5:
push offset Lt_0CA3
push offset Lt_0CA0
push dword ptr [ebp+8]
call HPREPOPERAND64
add esp, 12
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_05E7
mov dword ptr [ebp-4], 22
jmp .Lt_0C9E
.Lt_05E7:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0C9E:
mov eax, dword ptr [ebp-4]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+8], 0
je .Lt_05EA
push offset Lt_0586
call OUTP
add esp, 4
push 0
push -1
push 7
push offset Lt_0592
push -1
push 12
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
sal ebx, 4
lea eax, [DTYPETB+ebx+4]
push eax
push 7
push offset Lt_0550
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
lea eax, [ebp-16]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
lea eax, [ebp-28]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_0CA2
call fb_StrAssign
add esp, 20
push dword ptr [Lt_0CA2]
call OUTP
add esp, 4
push dword ptr [Lt_0CA0]
call HPOP
add esp, 4
push dword ptr [Lt_0CA3]
call HPOP
add esp, 4
jmp .Lt_05E9
.Lt_05EA:
push 0
push 0
call SYMBUNIQUELABEL
push eax
push -1
push offset Lt_0CA4
call fb_StrAssign
add esp, 20
push 0
push 0
call SYMBUNIQUELABEL
push eax
push -1
push offset Lt_0CA5
call fb_StrAssign
add esp, 20
push 5
push 0
call HISREGFREE
add esp, 8
mov dword ptr [Lt_0CA6], eax
cmp dword ptr [Lt_0CA6], 0
jne .Lt_05ED
push 5
push dword ptr [ebp+8]
call HISREGINVREG
add esp, 8
test eax, eax
setne al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-8], eax
jmp .Lt_0C9F
.Lt_05ED:
mov dword ptr [ebp-8], -1
.Lt_0C9F:
mov eax, dword ptr [ebp-8]
mov dword ptr [Lt_0CA6], eax
push offset Lt_0586
call OUTP
add esp, 4
push offset Lt_05EF
call OUTP
add esp, 4
push offset Lt_05F0
call OUTP
add esp, 4
cmp dword ptr [Lt_0CA6], 0
je .Lt_05F2
push offset Lt_05F3
call OUTP
add esp, 4
push offset Lt_05F4
call OUTP
add esp, 4
jmp .Lt_05F1
.Lt_05F2:
push offset Lt_0081
call HPUSH
add esp, 4
push offset Lt_05F3
call OUTP
add esp, 4
push offset Lt_05F4
call OUTP
add esp, 4
push offset Lt_0081
call HPOP
add esp, 4
.Lt_05F1:
push dword ptr [Lt_0CA4]
push offset Lt_01A9
call HBRANCH
add esp, 8
push offset Lt_0587
call OUTP
add esp, 4
push dword ptr [Lt_0CA0]
call HPOP
add esp, 4
push dword ptr [Lt_0CA3]
call HPOP
add esp, 4
push dword ptr [Lt_0CA5]
push offset Lt_01AA
call HBRANCH
add esp, 8
push dword ptr [Lt_0CA4]
call HLABEL
add esp, 4
push offset Lt_05F5
call OUTP
add esp, 4
push offset Lt_0587
call OUTP
add esp, 4
push dword ptr [Lt_0CA0]
call HPOP
add esp, 4
push dword ptr [Lt_0CA3]
call HPOP
add esp, 4
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
push 0
push -1
push 13
push offset Lt_05F7
push -1
push -1
push offset Lt_0CA3
push 5
push offset Lt_05F6
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
lea eax, [ebp-20]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
lea eax, [ebp-32]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-44]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-44]
call OUTP
add esp, 4
lea eax, [ebp-44]
push eax
call fb_StrDelete
add esp, 4
push dword ptr [Lt_0CA5]
call HLABEL
add esp, 4
.Lt_05E9:
.Lt_05E4:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITLOADF2L, .-_EMITLOADF2L

.section .bss
.balign 4
	.lcomm	Lt_0CA0,12
.balign 4
	.lcomm	Lt_0CA1,12
.balign 4
	.lcomm	Lt_0CA3,12
.balign 4
	.lcomm	Lt_0CA2,12
.balign 4
	.lcomm	Lt_0CA4,12
.balign 4
	.lcomm	Lt_0CA5,12
.balign 4
	.lcomm	Lt_0CA6,4

.section .text
.balign 16
_EMITLOADI2I:
.type _EMITLOADI2I, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
.Lt_05FB:
push -1
push 0
push 0
push -2147483648
push offset Lt_0CAB
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push -1
push 0
push 0
push -2147483648
push offset Lt_0CAC
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_05FD
mov dword ptr [ebp-4], 22
jmp .Lt_0CA8
.Lt_05FD:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0CA8:
mov eax, dword ptr [ebp-4]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+4]
mov dword ptr [Lt_0CAD], ebx
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 480
je .Lt_05FF
mov dword ptr [ebp-8], 22
jmp .Lt_0CA9
.Lt_05FF:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 31
mov dword ptr [ebp-8], ebx
.Lt_0CA9:
mov ebx, dword ptr [ebp-8]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx+4]
mov dword ptr [Lt_0CAE], eax
cmp dword ptr [Lt_0CAD], 1
jne .Lt_0602
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax], 0
jne .Lt_0604
mov dword ptr [Lt_0CAD], 4
.Lt_0604:
.Lt_0603:
.Lt_0602:
.Lt_0601:
mov eax, dword ptr [Lt_0CAE]
cmp dword ptr [Lt_0CAD], eax
jne .Lt_0606
push 0
push 5
push offset Lt_03BF
push -1
push offset Lt_0CAF
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0CAB
push -1
push offset Lt_0CAF
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0CAF
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0CAC
push -1
push offset Lt_0CAF
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0CAF]
call OUTP
add esp, 4
jmp .Lt_0605
.Lt_0606:
mov eax, dword ptr [Lt_0CAE]
cmp dword ptr [Lt_0CAD], eax
jle .Lt_0608
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_0609
mov dword ptr [ebp-12], 22
jmp .Lt_0CAA
.Lt_0609:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-12], eax
.Lt_0CAA:
mov eax, dword ptr [ebp-12]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+8], 0
je .Lt_060C
push 0
push 7
push offset Lt_0542
push -1
push offset Lt_0CAF
call fb_StrAssign
add esp, 20
jmp .Lt_060B
.Lt_060C:
push 0
push 7
push offset Lt_0543
push -1
push offset Lt_0CAF
call fb_StrAssign
add esp, 20
.Lt_060B:
push 0
push -1
push offset Lt_0CAB
push -1
push offset Lt_0CAF
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0CAF
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0CAC
push -1
push offset Lt_0CAF
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0CAF]
call OUTP
add esp, 4
jmp .Lt_0607
.Lt_0608:
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax], 4
jne .Lt_060E
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebx+12]
cmp dword ptr [eax+12], ecx
je .Lt_0610
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ecx+4]
mov dword ptr [Lt_0CB0], eax
cmp dword ptr [Lt_0CAD], 1
jne .Lt_0612
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax+12]
cmp ecx, 2
sete cl
shr ecx, 1
sbb ecx, ecx
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+12]
cmp ebx, 1
sete bl
shr ebx, 1
sbb ebx, ebx
or ecx, ebx
je .Lt_0614
mov dword ptr [Lt_0CB0], 7
push 0
push 0
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+12]
push dword ptr [Lt_0CB0]
call HGETREGNAME
add esp, 8
push eax
push -1
push offset Lt_0CAB
call fb_StrAssign
add esp, 20
.Lt_0614:
.Lt_0613:
.Lt_0612:
.Lt_0611:
push 0
push 0
mov eax, dword ptr [ebp+12]
push dword ptr [eax+12]
push dword ptr [Lt_0CB0]
call HGETREGNAME
add esp, 8
push eax
push -1
push offset Lt_0CB3
call fb_StrAssign
add esp, 20
push 0
push 5
push offset Lt_03BF
push -1
push offset Lt_0CAF
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0CAB
push -1
push offset Lt_0CAF
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0CAF
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0CB3
push -1
push offset Lt_0CAF
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0CAF]
call OUTP
add esp, 4
.Lt_0610:
.Lt_060F:
jmp .Lt_060D
.Lt_060E:
push -1
push 0
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax+4]
push offset Lt_0CAC
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
push 0
push 5
push offset Lt_03BF
push -1
push offset Lt_0CAF
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0CAB
push -1
push offset Lt_0CAF
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0CAF
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0CAC
push -1
push offset Lt_0CAF
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0CAF]
call OUTP
add esp, 4
.Lt_060D:
.Lt_0607:
.Lt_0605:
.Lt_05FC:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITLOADI2I, .-_EMITLOADI2I

.section .bss
.balign 4
	.lcomm	Lt_0CAB,12
.balign 4
	.lcomm	Lt_0CAC,12
.balign 4
	.lcomm	Lt_0CAD,4
.balign 4
	.lcomm	Lt_0CAE,4
.balign 4
	.lcomm	Lt_0CAF,12
.balign 4
	.lcomm	Lt_0CB3,12
.balign 4
	.lcomm	Lt_0CB0,4

.section .text
.balign 16
_EMITLOADL2I:
.type _EMITLOADL2I, @function
push ebp
mov ebp, esp
.Lt_0615:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call _EMITLOADI2I
add esp, 8
.Lt_0616:
mov esp, ebp
pop ebp
ret
.size _EMITLOADL2I, .-_EMITLOADL2I
.balign 16
_EMITLOADF2I:
.type _EMITLOADF2I, @function
push ebp
mov ebp, esp
sub esp, 32
push ebx
.Lt_0617:
push -1
push 0
push 0
push -2147483648
push offset Lt_0CB6
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push -1
push 0
push 0
push -2147483648
push offset Lt_0CB7
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_0619
mov dword ptr [ebp-4], 22
jmp .Lt_0CB4
.Lt_0619:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0CB4:
mov eax, dword ptr [ebp-4]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+4]
mov dword ptr [Lt_0CB8], ebx
mov ebx, dword ptr [ebp+12]
cmp dword ptr [ebx], 4
je .Lt_061C
push 0
push 5
push offset Lt_05CE
push -1
push offset Lt_0CB9
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0CB7
push -1
push offset Lt_0CB9
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0CB9]
call OUTP
add esp, 4
.Lt_061C:
.Lt_061B:
cmp dword ptr [Lt_0CB8], 1
jne .Lt_061E
push offset Lt_0575
call OUTP
add esp, 4
push offset Lt_0576
call OUTP
add esp, 4
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 4
jne .Lt_0620
push offset Lt_0579
push dword ptr [Lt_0CB6]
call HMOV
add esp, 8
push offset Lt_057A
call OUTP
add esp, 4
jmp .Lt_061F
.Lt_0620:
push -1
push dword ptr [ebp+8]
call HFINDREGNOTINVREG
add esp, 8
mov dword ptr [Lt_0CBA], eax
push 0
push 0
push dword ptr [Lt_0CBA]
push 1
call HGETREGNAME
add esp, 8
push eax
push -1
push offset Lt_0CBB
call fb_StrAssign
add esp, 20
push 0
push 0
push dword ptr [Lt_0CBA]
push 7
call HGETREGNAME
add esp, 8
push eax
push -1
push offset Lt_0CBC
call fb_StrAssign
add esp, 20
push dword ptr [Lt_0CBA]
push 0
call HISREGFREE
add esp, 8
mov dword ptr [Lt_0CBD], eax
cmp dword ptr [Lt_0CBD], 0
jne .Lt_0622
push offset Lt_057D
push dword ptr [Lt_0CBC]
call HXCHG
add esp, 8
jmp .Lt_0621
.Lt_0622:
push offset Lt_0579
push dword ptr [Lt_0CBB]
call HMOV
add esp, 8
.Lt_0621:
push dword ptr [Lt_0CBB]
push dword ptr [Lt_0CB6]
call HMOV
add esp, 8
cmp dword ptr [Lt_0CBD], 0
jne .Lt_0624
push dword ptr [Lt_0CBC]
call HPOP
add esp, 4
jmp .Lt_0623
.Lt_0624:
push offset Lt_057A
call OUTP
add esp, 4
.Lt_0623:
.Lt_061F:
jmp .Lt_061D
.Lt_061E:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_0625
mov dword ptr [ebp-8], 22
jmp .Lt_0CB5
.Lt_0625:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-8], eax
.Lt_0CB5:
mov eax, dword ptr [ebp-8]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+8], 0
je .Lt_0628
push offset Lt_0575
call OUTP
add esp, 4
push 0
push -1
push 7
push offset Lt_0592
push -1
push 12
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
sal ebx, 4
lea eax, [DTYPETB+ebx+4]
push eax
push 7
push offset Lt_0550
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
lea eax, [ebp-20]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
lea eax, [ebp-32]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_0CB9
call fb_StrAssign
add esp, 20
push dword ptr [Lt_0CB9]
call OUTP
add esp, 4
cmp dword ptr [Lt_0CB8], 4
jge .Lt_062C
push 0
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax+12]
push 7
call HGETREGNAME
add esp, 8
push eax
push -1
push offset Lt_0CB6
call fb_StrAssign
add esp, 20
.Lt_062C:
.Lt_062B:
push dword ptr [Lt_0CB6]
call HPOP
add esp, 4
jmp .Lt_0627
.Lt_0628:
cmp dword ptr [Lt_0CB8], 4
jne .Lt_062E
push offset Lt_0586
call OUTP
add esp, 4
push offset Lt_0587
call OUTP
add esp, 4
push dword ptr [Lt_0CB6]
call HPOP
add esp, 4
push offset Lt_057A
call OUTP
add esp, 4
jmp .Lt_062D
.Lt_062E:
push offset Lt_0575
call OUTP
add esp, 4
push offset Lt_0576
call OUTP
add esp, 4
push dword ptr [Lt_0CB6]
call HPOP
add esp, 4
push offset Lt_0588
call OUTP
add esp, 4
.Lt_062D:
.Lt_0627:
.Lt_061D:
.Lt_0618:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITLOADF2I, .-_EMITLOADF2I

.section .bss
.balign 4
	.lcomm	Lt_0CB6,12
.balign 4
	.lcomm	Lt_0CB7,12
.balign 4
	.lcomm	Lt_0CB8,4
.balign 4
	.lcomm	Lt_0CB9,12
.balign 4
	.lcomm	Lt_0CBC,12
.balign 4
	.lcomm	Lt_0CBB,12
.balign 4
	.lcomm	Lt_0CBA,4
.balign 4
	.lcomm	Lt_0CBD,4

.section .text
.balign 16
_EMITLOADL2F:
.type _EMITLOADL2F, @function
push ebp
mov ebp, esp
sub esp, 28
push ebx
.Lt_062F:
push -1
push 0
push 0
push -2147483648
push offset Lt_0CC0
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push -1
push 0
push 0
push -2147483648
push offset Lt_0CC1
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax]
cmp ebx, 4
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax]
test ecx, ecx
sete cl
shr ecx, 1
sbb ecx, ecx
or ebx, ecx
je .Lt_0632
mov ecx, dword ptr [ebp+12]
mov ebx, dword ptr [ecx+4]
and ebx, 480
je .Lt_0633
mov dword ptr [ebp-4], 22
jmp .Lt_0CBE
.Lt_0633:
mov ebx, dword ptr [ebp+12]
mov ecx, dword ptr [ebx+4]
and ecx, 31
mov dword ptr [ebp-4], ecx
.Lt_0CBE:
mov ecx, dword ptr [ebp-4]
imul ecx, 28
cmp dword ptr [SYMB_DTYPETB+ecx+8], 0
je .Lt_0636
push offset Lt_0CC4
push offset Lt_0CC1
push dword ptr [ebp+12]
call HPREPOPERAND64
add esp, 12
push dword ptr [Lt_0CC4]
call HPUSH
add esp, 4
push dword ptr [Lt_0CC1]
call HPUSH
add esp, 4
push 0
push -1
push 7
push offset Lt_0592
push -1
push 12
mov ecx, dword ptr [ebp+12]
mov ebx, dword ptr [ecx+4]
sal ebx, 4
lea ecx, [DTYPETB+ebx+4]
push ecx
push 6
push offset Lt_0591
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
lea ecx, [ebp-16]
push ecx
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
lea eax, [ebp-28]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_0CC5
call fb_StrAssign
add esp, 20
push dword ptr [Lt_0CC5]
call OUTP
add esp, 4
push offset Lt_0595
call OUTP
add esp, 4
jmp .Lt_0635
.Lt_0636:
push offset Lt_0CC4
push offset Lt_0CC1
push dword ptr [ebp+12]
call HPREPOPERAND64
add esp, 12
push dword ptr [Lt_0CC4]
call HPUSH
add esp, 4
push dword ptr [Lt_0CC1]
call HPUSH
add esp, 4
push offset Lt_0596
call OUTP
add esp, 4
push offset Lt_0595
call OUTP
add esp, 4
push dword ptr [ebp+12]
call HULONG2DBL
add esp, 4
.Lt_0635:
jmp .Lt_0631
.Lt_0632:
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax+4]
and ecx, 480
je .Lt_0639
mov dword ptr [ebp-4], 22
jmp .Lt_0CBF
.Lt_0639:
mov ecx, dword ptr [ebp+12]
mov eax, dword ptr [ecx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0CBF:
mov eax, dword ptr [ebp-4]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+8], 0
je .Lt_063C
push 0
push 6
push offset Lt_0591
push -1
push offset Lt_0CC5
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0CC1
push -1
push offset Lt_0CC5
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0CC5]
call OUTP
add esp, 4
jmp .Lt_063B
.Lt_063C:
push 0
push 6
push offset Lt_0591
push -1
push offset Lt_0CC5
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0CC1
push -1
push offset Lt_0CC5
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0CC5]
call OUTP
add esp, 4
push dword ptr [ebp+12]
call HULONG2DBL
add esp, 4
.Lt_063B:
.Lt_0631:
.Lt_0630:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITLOADL2F, .-_EMITLOADL2F

.section .bss
.balign 4
	.lcomm	Lt_0CC0,12
.balign 4
	.lcomm	Lt_0CC1,12
.balign 4
	.lcomm	Lt_0CC4,12
.balign 4
	.lcomm	Lt_0CC5,12

.section .text
.balign 16
_EMITLOADI2F:
.type _EMITLOADI2F, @function
push ebp
mov ebp, esp
sub esp, 32
push ebx
.Lt_063D:
push -1
push 0
push 0
push -2147483648
push offset Lt_0CCA
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push -1
push 0
push 0
push -2147483648
push offset Lt_0CCB
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_063F
mov dword ptr [ebp-4], 22
jmp .Lt_0CC6
.Lt_063F:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0CC6:
mov eax, dword ptr [ebp-4]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+4]
mov dword ptr [Lt_0CCC], ebx
cmp dword ptr [Lt_0CCC], 1
jne .Lt_0642
push 0
push dword ptr [ebp+12]
call HFINDREGNOTINVREG
add esp, 8
mov dword ptr [Lt_0CCD], eax
push 0
push 0
push dword ptr [Lt_0CCD]
push 7
call HGETREGNAME
add esp, 8
push eax
push -1
push offset Lt_0CCE
call fb_StrAssign
add esp, 20
push dword ptr [Lt_0CCD]
push 0
call HISREGFREE
add esp, 8
mov dword ptr [Lt_0CCF], eax
cmp dword ptr [Lt_0CCF], 0
jne .Lt_0644
push dword ptr [Lt_0CCE]
call HPUSH
add esp, 4
.Lt_0644:
.Lt_0643:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_0645
mov dword ptr [ebp-8], 22
jmp .Lt_0CC7
.Lt_0645:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-8], eax
.Lt_0CC7:
mov eax, dword ptr [ebp-8]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+8], 0
je .Lt_0648
push 0
push 7
push offset Lt_0542
push -1
push offset Lt_0CD0
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0CCE
push -1
push offset Lt_0CD0
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0CD0
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0CCB
push -1
push offset Lt_0CD0
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0CD0]
call OUTP
add esp, 4
jmp .Lt_0647
.Lt_0648:
push 0
push 7
push offset Lt_0543
push -1
push offset Lt_0CD0
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0CCE
push -1
push offset Lt_0CD0
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0CD0
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0CCB
push -1
push offset Lt_0CD0
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0CD0]
call OUTP
add esp, 4
.Lt_0647:
push dword ptr [Lt_0CCE]
call HPUSH
add esp, 4
push offset Lt_05A8
call OUTP
add esp, 4
push offset Lt_057A
call OUTP
add esp, 4
cmp dword ptr [Lt_0CCF], 0
jne .Lt_064A
push dword ptr [Lt_0CCE]
call HPOP
add esp, 4
.Lt_064A:
.Lt_0649:
jmp .Lt_063E
.Lt_0642:
.Lt_0641:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax]
cmp ebx, 4
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax]
test ecx, ecx
sete cl
shr ecx, 1
sbb ecx, ecx
or ebx, ecx
je .Lt_064C
mov ecx, dword ptr [ebp+12]
mov ebx, dword ptr [ecx+4]
and ebx, 480
je .Lt_064D
mov dword ptr [ebp-8], 22
jmp .Lt_0CC8
.Lt_064D:
mov ebx, dword ptr [ebp+12]
mov ecx, dword ptr [ebx+4]
and ecx, 31
mov dword ptr [ebp-8], ecx
.Lt_0CC8:
mov ecx, dword ptr [ebp-8]
imul ecx, 28
cmp dword ptr [SYMB_DTYPETB+ecx+8], 0
je .Lt_0650
mov ecx, dword ptr [ebp+12]
mov ebx, dword ptr [ecx]
cmp ebx, 4
sete bl
shr ebx, 1
sbb ebx, ebx
mov ecx, dword ptr [Lt_0CCC]
cmp ecx, 4
setl cl
shr ecx, 1
sbb ecx, ecx
and ebx, ecx
je .Lt_0652
push 0
push 0
mov ecx, dword ptr [ebp+12]
push dword ptr [ecx+12]
push 7
call HGETREGNAME
add esp, 8
push eax
push -1
push offset Lt_0CCB
call fb_StrAssign
add esp, 20
.Lt_0652:
.Lt_0651:
push dword ptr [Lt_0CCB]
call HPUSH
add esp, 4
push 0
push -1
push 7
push offset Lt_0592
push -1
push 12
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax+4]
sal ecx, 4
lea eax, [DTYPETB+ecx+4]
push eax
push 6
push offset Lt_0591
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
lea eax, [ebp-20]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
lea eax, [ebp-32]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_0CD0
call fb_StrAssign
add esp, 20
push dword ptr [Lt_0CD0]
call OUTP
add esp, 4
push offset Lt_057A
call OUTP
add esp, 4
jmp .Lt_064F
.Lt_0650:
cmp dword ptr [Lt_0CCC], 4
jne .Lt_0656
push offset Lt_0006
call HPUSH
add esp, 4
push dword ptr [Lt_0CCB]
call HPUSH
add esp, 4
push offset Lt_0596
call OUTP
add esp, 4
push offset Lt_0595
call OUTP
add esp, 4
jmp .Lt_0655
.Lt_0656:
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax], 0
je .Lt_0658
push offset Lt_0006
call HPUSH
add esp, 4
.Lt_0658:
.Lt_0657:
push dword ptr [Lt_0CCB]
call HPUSH
add esp, 4
push offset Lt_05A8
call OUTP
add esp, 4
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax], 0
je .Lt_065A
push offset Lt_05BB
call OUTP
add esp, 4
jmp .Lt_0659
.Lt_065A:
push offset Lt_057A
call OUTP
add esp, 4
.Lt_0659:
.Lt_0655:
.Lt_064F:
jmp .Lt_064B
.Lt_064C:
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax+4]
and ecx, 480
je .Lt_065B
mov dword ptr [ebp-8], 22
jmp .Lt_0CC9
.Lt_065B:
mov ecx, dword ptr [ebp+12]
mov eax, dword ptr [ecx+4]
and eax, 31
mov dword ptr [ebp-8], eax
.Lt_0CC9:
mov eax, dword ptr [ebp-8]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+8], 0
je .Lt_065E
push 0
push 6
push offset Lt_0591
push -1
push offset Lt_0CD0
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0CCB
push -1
push offset Lt_0CD0
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0CD0]
call OUTP
add esp, 4
jmp .Lt_065D
.Lt_065E:
cmp dword ptr [Lt_0CCC], 4
jne .Lt_0660
push offset Lt_0006
call HPUSH
add esp, 4
push dword ptr [Lt_0CCB]
call HPUSH
add esp, 4
push offset Lt_0596
call OUTP
add esp, 4
push offset Lt_0595
call OUTP
add esp, 4
jmp .Lt_065F
.Lt_0660:
push offset Lt_0006
call HPUSH
add esp, 4
push dword ptr [Lt_0CCB]
call HPUSH
add esp, 4
push offset Lt_05A8
call OUTP
add esp, 4
push offset Lt_05BB
call OUTP
add esp, 4
.Lt_065F:
.Lt_065D:
.Lt_064B:
.Lt_063E:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITLOADI2F, .-_EMITLOADI2F

.section .bss
.balign 4
	.lcomm	Lt_0CCA,12
.balign 4
	.lcomm	Lt_0CCB,12
.balign 4
	.lcomm	Lt_0CCC,4
.balign 4
	.lcomm	Lt_0CD0,12
.balign 4
	.lcomm	Lt_0CCE,12
.balign 4
	.lcomm	Lt_0CCF,4
.balign 4
	.lcomm	Lt_0CCD,4

.section .text
.balign 16
_EMITLOADF2F:
.type _EMITLOADF2F, @function
push ebp
mov ebp, esp
.Lt_0661:
push -1
push 0
push 0
push -2147483648
push offset Lt_0CD5
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
push 0
push 5
push offset Lt_05CE
push -1
push offset Lt_0CD6
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0CD5
push -1
push offset Lt_0CD6
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0CD6]
call OUTP
add esp, 4
.Lt_0662:
mov esp, ebp
pop ebp
ret
.size _EMITLOADF2F, .-_EMITLOADF2F

.section .bss
.balign 4
	.lcomm	Lt_0CD5,12
.balign 4
	.lcomm	Lt_0CD6,12

.section .text
.balign 16
_EMITMOVL:
.type _EMITMOVL, @function
push ebp
mov ebp, esp
.Lt_0663:
push offset Lt_0CD7
push offset Lt_0CD8
push dword ptr [ebp+8]
call HPREPOPERAND64
add esp, 12
push offset Lt_0CD9
push offset Lt_0CDA
push dword ptr [ebp+12]
call HPREPOPERAND64
add esp, 12
push 0
push 5
push offset Lt_03BF
push -1
push offset Lt_0CDB
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0CD8
push -1
push offset Lt_0CDB
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0CDB
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0CDA
push -1
push offset Lt_0CDB
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0CDB]
call OUTP
add esp, 4
push 0
push 5
push offset Lt_03BF
push -1
push offset Lt_0CDB
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0CD7
push -1
push offset Lt_0CDB
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0CDB
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0CD9
push -1
push offset Lt_0CDB
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0CDB]
call OUTP
add esp, 4
.Lt_0664:
mov esp, ebp
pop ebp
ret
.size _EMITMOVL, .-_EMITMOVL

.section .bss
.balign 4
	.lcomm	Lt_0CD8,12
.balign 4
	.lcomm	Lt_0CD7,12
.balign 4
	.lcomm	Lt_0CDA,12
.balign 4
	.lcomm	Lt_0CD9,12
.balign 4
	.lcomm	Lt_0CDB,12

.section .text
.balign 16
_EMITMOVI:
.type _EMITMOVI, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0665:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_0667
mov dword ptr [ebp-4], 22
jmp .Lt_0CDC
.Lt_0667:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0CDC:
mov eax, dword ptr [ebp-4]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+4], 1
jne .Lt_066A
push 0
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax+12]
push 7
call HGETREGNAME
add esp, 8
push eax
push -1
push offset Lt_0CDD
call fb_StrAssign
add esp, 20
push 0
push 0
mov eax, dword ptr [ebp+12]
push dword ptr [eax+12]
push 7
call HGETREGNAME
add esp, 8
push eax
push -1
push offset Lt_0CDE
call fb_StrAssign
add esp, 20
jmp .Lt_0669
.Lt_066A:
push -1
push 0
push 0
push -2147483648
push offset Lt_0CDD
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push -1
push 0
push 0
push -2147483648
push offset Lt_0CDE
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
.Lt_0669:
push 0
push 5
push offset Lt_03BF
push -1
push offset Lt_0CDF
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0CDD
push -1
push offset Lt_0CDF
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0CDF
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0CDE
push -1
push offset Lt_0CDF
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0CDF]
call OUTP
add esp, 4
.Lt_0666:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITMOVI, .-_EMITMOVI

.section .bss
.balign 4
	.lcomm	Lt_0CDD,12
.balign 4
	.lcomm	Lt_0CDE,12
.balign 4
	.lcomm	Lt_0CDF,12

.section .text
.balign 16
_EMITMOVF:
.type _EMITMOVF, @function
push ebp
mov ebp, esp
.Lt_066B:
.Lt_066C:
mov esp, ebp
pop ebp
ret
.size _EMITMOVF, .-_EMITMOVF
.balign 16
_EMITADDL:
.type _EMITADDL, @function
push ebp
mov ebp, esp
.Lt_066D:
push offset Lt_0CE0
push offset Lt_0CE1
push dword ptr [ebp+8]
call HPREPOPERAND64
add esp, 12
push offset Lt_0CE2
push offset Lt_0CE3
push dword ptr [ebp+12]
call HPREPOPERAND64
add esp, 12
push 0
push 5
push offset Lt_066F
push -1
push offset Lt_0CE4
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0CE1
push -1
push offset Lt_0CE4
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0CE4
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0CE3
push -1
push offset Lt_0CE4
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0CE4]
call OUTP
add esp, 4
push 0
push 5
push offset Lt_0670
push -1
push offset Lt_0CE4
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0CE0
push -1
push offset Lt_0CE4
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0CE4
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0CE2
push -1
push offset Lt_0CE4
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0CE4]
call OUTP
add esp, 4
.Lt_066E:
mov esp, ebp
pop ebp
ret
.size _EMITADDL, .-_EMITADDL

.section .bss
.balign 4
	.lcomm	Lt_0CE1,12
.balign 4
	.lcomm	Lt_0CE0,12
.balign 4
	.lcomm	Lt_0CE3,12
.balign 4
	.lcomm	Lt_0CE2,12
.balign 4
	.lcomm	Lt_0CE4,12

.section .text
.balign 16
_EMITADDI:
.type _EMITADDI, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_0671:
push -1
push 0
push 0
push -2147483648
push offset Lt_0CE5
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push -1
push 0
push 0
push -2147483648
push offset Lt_0CE6
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
mov dword ptr [Lt_0CE7], 0
mov dword ptr [Lt_0CE8], 0
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax], 0
jne .Lt_0674
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax+24]
mov ebx, dword ptr [eax+28]
mov dword ptr [ebp-8], ecx
mov dword ptr [ebp-4], ebx
cmp dword ptr [ebp-4], 0
jne .Lt_0677
cmp dword ptr [ebp-8], 1
jne .Lt_0677
.Lt_0CE9:
.Lt_0678:
mov dword ptr [Lt_0CE7], -1
jmp .Lt_0675
.Lt_0677:
cmp dword ptr [ebp-4], 4294967295
jne .Lt_0679
cmp dword ptr [ebp-8], 4294967295
jne .Lt_0679
.Lt_0CEA:
.Lt_067A:
mov dword ptr [Lt_0CE8], -1
.Lt_0679:
.Lt_0675:
.Lt_0674:
.Lt_0673:
cmp dword ptr [Lt_0CE7], 0
je .Lt_067C
push 0
push 5
push offset Lt_067D
push -1
push offset Lt_0CEB
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0CE5
push -1
push offset Lt_0CEB
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0CEB]
call OUTP
add esp, 4
jmp .Lt_067B
.Lt_067C:
cmp dword ptr [Lt_0CE8], 0
je .Lt_067E
push 0
push 5
push offset Lt_067F
push -1
push offset Lt_0CEB
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0CE5
push -1
push offset Lt_0CEB
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0CEB]
call OUTP
add esp, 4
jmp .Lt_067B
.Lt_067E:
push 0
push 5
push offset Lt_066F
push -1
push offset Lt_0CEB
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0CE5
push -1
push offset Lt_0CEB
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0CEB
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0CE6
push -1
push offset Lt_0CEB
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0CEB]
call OUTP
add esp, 4
.Lt_067B:
.Lt_0672:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITADDI, .-_EMITADDI

.section .bss
.balign 4
	.lcomm	Lt_0CE5,12
.balign 4
	.lcomm	Lt_0CE6,12
.balign 4
	.lcomm	Lt_0CE7,4
.balign 4
	.lcomm	Lt_0CE8,4
.balign 4
	.lcomm	Lt_0CEB,12

.section .text
.balign 16
_EMITADDF:
.type _EMITADDF, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0680:
push -1
push 0
push 0
push -2147483648
push offset Lt_0CED
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax], 4
jne .Lt_0683
push 0
push 6
push offset Lt_0120
push -1
push offset Lt_0CEE
call fb_StrAssign
add esp, 20
push dword ptr [Lt_0CEE]
call OUTP
add esp, 4
jmp .Lt_0682
.Lt_0683:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_0684
mov dword ptr [ebp-4], 22
jmp .Lt_0CEC
.Lt_0684:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0CEC:
mov eax, dword ptr [ebp-4]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax], 1
jne .Lt_0687
push 0
push 6
push offset Lt_0688
push -1
push offset Lt_0CEE
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0CED
push -1
push offset Lt_0CEE
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0CEE]
call OUTP
add esp, 4
jmp .Lt_0686
.Lt_0687:
push 0
push 7
push offset Lt_0689
push -1
push offset Lt_0CEE
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0CED
push -1
push offset Lt_0CEE
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0CEE]
call OUTP
add esp, 4
.Lt_0686:
.Lt_0682:
.Lt_0681:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITADDF, .-_EMITADDF

.section .bss
.balign 4
	.lcomm	Lt_0CED,12
.balign 4
	.lcomm	Lt_0CEE,12

.section .text
.balign 16
_EMITSUBL:
.type _EMITSUBL, @function
push ebp
mov ebp, esp
.Lt_068A:
push offset Lt_0CEF
push offset Lt_0CF0
push dword ptr [ebp+8]
call HPREPOPERAND64
add esp, 12
push offset Lt_0CF1
push offset Lt_0CF2
push dword ptr [ebp+12]
call HPREPOPERAND64
add esp, 12
push 0
push 5
push offset Lt_068C
push -1
push offset Lt_0CF3
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0CF0
push -1
push offset Lt_0CF3
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0CF3
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0CF2
push -1
push offset Lt_0CF3
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0CF3]
call OUTP
add esp, 4
push 0
push 5
push offset Lt_068D
push -1
push offset Lt_0CF3
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0CEF
push -1
push offset Lt_0CF3
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0CF3
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0CF1
push -1
push offset Lt_0CF3
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0CF3]
call OUTP
add esp, 4
.Lt_068B:
mov esp, ebp
pop ebp
ret
.size _EMITSUBL, .-_EMITSUBL

.section .bss
.balign 4
	.lcomm	Lt_0CF0,12
.balign 4
	.lcomm	Lt_0CEF,12
.balign 4
	.lcomm	Lt_0CF2,12
.balign 4
	.lcomm	Lt_0CF1,12
.balign 4
	.lcomm	Lt_0CF3,12

.section .text
.balign 16
_EMITSUBI:
.type _EMITSUBI, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_068E:
push -1
push 0
push 0
push -2147483648
push offset Lt_0CF4
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push -1
push 0
push 0
push -2147483648
push offset Lt_0CF5
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
mov dword ptr [Lt_0CF6], 0
mov dword ptr [Lt_0CF7], 0
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax], 0
jne .Lt_0691
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax+24]
mov ebx, dword ptr [eax+28]
mov dword ptr [ebp-8], ecx
mov dword ptr [ebp-4], ebx
cmp dword ptr [ebp-4], 0
jne .Lt_0694
cmp dword ptr [ebp-8], 1
jne .Lt_0694
.Lt_0CF8:
.Lt_0695:
mov dword ptr [Lt_0CF7], -1
jmp .Lt_0692
.Lt_0694:
cmp dword ptr [ebp-4], 4294967295
jne .Lt_0696
cmp dword ptr [ebp-8], 4294967295
jne .Lt_0696
.Lt_0CF9:
.Lt_0697:
mov dword ptr [Lt_0CF6], -1
.Lt_0696:
.Lt_0692:
.Lt_0691:
.Lt_0690:
cmp dword ptr [Lt_0CF7], 0
je .Lt_0699
push 0
push 5
push offset Lt_067F
push -1
push offset Lt_0CFA
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0CF4
push -1
push offset Lt_0CFA
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0CFA]
call OUTP
add esp, 4
jmp .Lt_0698
.Lt_0699:
cmp dword ptr [Lt_0CF6], 0
je .Lt_069A
push 0
push 5
push offset Lt_067D
push -1
push offset Lt_0CFA
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0CF4
push -1
push offset Lt_0CFA
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0CFA]
call OUTP
add esp, 4
jmp .Lt_0698
.Lt_069A:
push 0
push 5
push offset Lt_068C
push -1
push offset Lt_0CFA
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0CF4
push -1
push offset Lt_0CFA
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0CFA
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0CF5
push -1
push offset Lt_0CFA
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0CFA]
call OUTP
add esp, 4
.Lt_0698:
.Lt_068F:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITSUBI, .-_EMITSUBI

.section .bss
.balign 4
	.lcomm	Lt_0CF4,12
.balign 4
	.lcomm	Lt_0CF5,12
.balign 4
	.lcomm	Lt_0CF6,4
.balign 4
	.lcomm	Lt_0CF7,4
.balign 4
	.lcomm	Lt_0CFA,12

.section .text
.balign 16
_EMITSUBF:
.type _EMITSUBF, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_069B:
push -1
push 0
push 0
push -2147483648
push offset Lt_0CFC
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax], 4
jne .Lt_069E
push offset Lt_016D
call OUTP
add esp, 4
jmp .Lt_069D
.Lt_069E:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_069F
mov dword ptr [ebp-4], 22
jmp .Lt_0CFB
.Lt_069F:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0CFB:
mov eax, dword ptr [ebp-4]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax], 1
jne .Lt_06A2
push 0
push 6
push offset Lt_06A3
push -1
push offset Lt_0CFD
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0CFC
push -1
push offset Lt_0CFD
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0CFD]
call OUTP
add esp, 4
jmp .Lt_06A1
.Lt_06A2:
push 0
push 7
push offset Lt_06A4
push -1
push offset Lt_0CFD
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0CFC
push -1
push offset Lt_0CFD
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0CFD]
call OUTP
add esp, 4
.Lt_06A1:
.Lt_069D:
.Lt_069C:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITSUBF, .-_EMITSUBF

.section .bss
.balign 4
	.lcomm	Lt_0CFC,12
.balign 4
	.lcomm	Lt_0CFE,4
.balign 4
	.lcomm	Lt_0CFF,4
.balign 4
	.lcomm	Lt_0CFD,12

.section .text
.balign 16
_EMITMULL:
.type _EMITMULL, @function
push ebp
mov ebp, esp
sub esp, 252
push ebx
.Lt_06A5:
push offset Lt_0D00
push offset Lt_0D01
push dword ptr [ebp+8]
call HPREPOPERAND64
add esp, 12
push offset Lt_0D02
push offset Lt_0D03
push dword ptr [ebp+12]
call HPREPOPERAND64
add esp, 12
push 5
push 0
call HISREGFREE
add esp, 8
mov dword ptr [Lt_0D04], eax
push 0
push 0
call HISREGFREE
add esp, 8
mov dword ptr [Lt_0D05], eax
push 5
push dword ptr [ebp+8]
call HISREGINVREG
add esp, 8
mov dword ptr [Lt_0D06], eax
push 0
push dword ptr [ebp+8]
call HISREGINVREG
add esp, 8
mov dword ptr [Lt_0D07], eax
push dword ptr [Lt_0D02]
call HPUSH
add esp, 4
push dword ptr [Lt_0D03]
call HPUSH
add esp, 4
push dword ptr [Lt_0D00]
call HPUSH
add esp, 4
push dword ptr [Lt_0D01]
call HPUSH
add esp, 4
mov dword ptr [Lt_0D08], 0
cmp dword ptr [Lt_0D07], 0
je .Lt_06A8
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 4
je .Lt_06AA
add dword ptr [Lt_0D08], 4
push offset Lt_007C
call HPUSH
add esp, 4
.Lt_06AA:
.Lt_06A9:
jmp .Lt_06A7
.Lt_06A8:
cmp dword ptr [Lt_0D05], 0
jne .Lt_06AC
add dword ptr [Lt_0D08], 4
push offset Lt_007C
call HPUSH
add esp, 4
.Lt_06AC:
.Lt_06AB:
.Lt_06A7:
cmp dword ptr [Lt_0D06], 0
je .Lt_06AE
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 4
je .Lt_06B0
add dword ptr [Lt_0D08], 4
push offset Lt_0081
call HPUSH
add esp, 4
.Lt_06B0:
.Lt_06AF:
jmp .Lt_06AD
.Lt_06AE:
cmp dword ptr [Lt_0D04], 0
jne .Lt_06B2
add dword ptr [Lt_0D08], 4
push offset Lt_0081
call HPUSH
add esp, 4
.Lt_06B2:
.Lt_06B1:
.Lt_06AD:
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 0
push -1
push 2
push offset Lt_038A
push -1
push -1
push dword ptr [Lt_0D08]
call fb_IntToStr
add esp, 4
push eax
push 15
push offset Lt_06B3
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ebp-24]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-36]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-36]
call OUTP
add esp, 4
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
mov dword ptr [ebp-64], 0
push 0
push -1
push 2
push offset Lt_038A
push -1
push -1
mov eax, dword ptr [Lt_0D08]
add eax, 8
mov ebx, eax
push ebx
call fb_IntToStr
add esp, 4
push eax
push 20
push offset Lt_06B7
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
lea eax, [ebp-48]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
lea eax, [ebp-60]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-72]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-72]
call OUTP
add esp, 4
lea eax, [ebp-72]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-108], 0
mov dword ptr [ebp-104], 0
mov dword ptr [ebp-100], 0
push 0
push -1
push 2
push offset Lt_038A
push -1
push -1
push dword ptr [Lt_0D08]
call fb_IntToStr
add esp, 4
push eax
push 16
push offset Lt_06BB
mov dword ptr [ebp-84], 0
mov dword ptr [ebp-80], 0
mov dword ptr [ebp-76], 0
lea eax, [ebp-84]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-96], 0
mov dword ptr [ebp-92], 0
mov dword ptr [ebp-88], 0
lea eax, [ebp-96]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-108]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-108]
call OUTP
add esp, 4
lea eax, [ebp-108]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-144], 0
mov dword ptr [ebp-140], 0
mov dword ptr [ebp-136], 0
push 0
push -1
push 2
push offset Lt_038A
push -1
push -1
mov eax, dword ptr [Lt_0D08]
add eax, 12
mov ebx, eax
push ebx
call fb_IntToStr
add esp, 4
push eax
push 16
push offset Lt_06BF
mov dword ptr [ebp-120], 0
mov dword ptr [ebp-116], 0
mov dword ptr [ebp-112], 0
lea eax, [ebp-120]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-132], 0
mov dword ptr [ebp-128], 0
mov dword ptr [ebp-124], 0
lea eax, [ebp-132]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-144]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-144]
call OUTP
add esp, 4
lea eax, [ebp-144]
push eax
call fb_StrDelete
add esp, 4
push offset Lt_06C3
call OUTP
add esp, 4
mov dword ptr [ebp-180], 0
mov dword ptr [ebp-176], 0
mov dword ptr [ebp-172], 0
push 0
push -1
push 2
push offset Lt_038A
push -1
push -1
mov eax, dword ptr [Lt_0D08]
add eax, 4
mov ebx, eax
push ebx
call fb_IntToStr
add esp, 4
push eax
push 15
push offset Lt_06C4
mov dword ptr [ebp-156], 0
mov dword ptr [ebp-152], 0
mov dword ptr [ebp-148], 0
lea eax, [ebp-156]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-168], 0
mov dword ptr [ebp-164], 0
mov dword ptr [ebp-160], 0
lea eax, [ebp-168]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-180]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-180]
call OUTP
add esp, 4
lea eax, [ebp-180]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-216], 0
mov dword ptr [ebp-212], 0
mov dword ptr [ebp-208], 0
push 0
push -1
push 2
push offset Lt_038A
push -1
push -1
mov eax, dword ptr [Lt_0D08]
add eax, 8
mov ebx, eax
push ebx
call fb_IntToStr
add esp, 4
push eax
push 16
push offset Lt_06C8
mov dword ptr [ebp-192], 0
mov dword ptr [ebp-188], 0
mov dword ptr [ebp-184], 0
lea eax, [ebp-192]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-204], 0
mov dword ptr [ebp-200], 0
mov dword ptr [ebp-196], 0
lea eax, [ebp-204]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-216]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-216]
call OUTP
add esp, 4
lea eax, [ebp-216]
push eax
call fb_StrDelete
add esp, 4
push offset Lt_06CC
call OUTP
add esp, 4
mov dword ptr [ebp-252], 0
mov dword ptr [ebp-248], 0
mov dword ptr [ebp-244], 0
push 0
push -1
push 7
push offset Lt_06CE
push -1
push -1
mov eax, dword ptr [Lt_0D08]
add eax, 4
mov ebx, eax
push ebx
call fb_IntToStr
add esp, 4
push eax
push 10
push offset Lt_06CD
mov dword ptr [ebp-228], 0
mov dword ptr [ebp-224], 0
mov dword ptr [ebp-220], 0
lea eax, [ebp-228]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-240], 0
mov dword ptr [ebp-236], 0
mov dword ptr [ebp-232], 0
lea eax, [ebp-240]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-252]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-252]
call OUTP
add esp, 4
lea eax, [ebp-252]
push eax
call fb_StrDelete
add esp, 4
cmp dword ptr [Lt_0D06], 0
je .Lt_06D3
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 4
je .Lt_06D5
push offset Lt_0081
call HPOP
add esp, 4
.Lt_06D5:
.Lt_06D4:
jmp .Lt_06D2
.Lt_06D3:
cmp dword ptr [Lt_0D04], 0
jne .Lt_06D7
push offset Lt_0081
call HPOP
add esp, 4
.Lt_06D7:
.Lt_06D6:
.Lt_06D2:
cmp dword ptr [Lt_0D07], 0
je .Lt_06D9
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 4
je .Lt_06DB
push offset Lt_007C
call HPOP
add esp, 4
.Lt_06DB:
.Lt_06DA:
jmp .Lt_06D8
.Lt_06D9:
cmp dword ptr [Lt_0D05], 0
jne .Lt_06DD
push offset Lt_007C
call HPOP
add esp, 4
.Lt_06DD:
.Lt_06DC:
.Lt_06D8:
push dword ptr [Lt_0D01]
call HPOP
add esp, 4
push dword ptr [Lt_0D00]
call HPOP
add esp, 4
push offset Lt_0595
call OUTP
add esp, 4
.Lt_06A6:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITMULL, .-_EMITMULL

.section .bss
.balign 4
	.lcomm	Lt_0D01,12
.balign 4
	.lcomm	Lt_0D00,12
.balign 4
	.lcomm	Lt_0D03,12
.balign 4
	.lcomm	Lt_0D02,12
.balign 4
	.lcomm	Lt_0D04,4
.balign 4
	.lcomm	Lt_0D05,4
.balign 4
	.lcomm	Lt_0D06,4
.balign 4
	.lcomm	Lt_0D07,4
.balign 4
	.lcomm	Lt_0D08,4

.section .text
.balign 16
_EMITMULI:
.type _EMITMULI, @function
push ebp
mov ebp, esp
.Lt_06DE:
push -1
push 0
push 0
push -2147483648
push offset Lt_0D09
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push -1
push 0
push 0
push -2147483648
push offset Lt_0D0A
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 4
je .Lt_06E1
push 0
push dword ptr [ebp+12]
call HFINDREGNOTINVREG
add esp, 8
mov dword ptr [Lt_0D0B], eax
push 0
push 0
push dword ptr [Lt_0D0B]
mov eax, dword ptr [ebp+12]
push dword ptr [eax+4]
call HGETREGNAME
add esp, 8
push eax
push -1
push offset Lt_0D0C
call fb_StrAssign
add esp, 20
push dword ptr [Lt_0D0B]
push 0
call HISREGFREE
add esp, 8
mov dword ptr [Lt_0D0D], eax
cmp dword ptr [Lt_0D0D], 0
jne .Lt_06E3
push dword ptr [Lt_0D0C]
call HPUSH
add esp, 4
.Lt_06E3:
.Lt_06E2:
push dword ptr [Lt_0D09]
push dword ptr [Lt_0D0C]
call HMOV
add esp, 8
push 0
push 6
push offset Lt_06E4
push -1
push offset Lt_0D0E
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0D0C
push -1
push offset Lt_0D0E
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0D0E
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0D0A
push -1
push offset Lt_0D0E
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0D0E]
call OUTP
add esp, 4
push dword ptr [Lt_0D0C]
push dword ptr [Lt_0D09]
call HMOV
add esp, 8
cmp dword ptr [Lt_0D0D], 0
jne .Lt_06E6
push dword ptr [Lt_0D0C]
call HPOP
add esp, 4
.Lt_06E6:
.Lt_06E5:
jmp .Lt_06E0
.Lt_06E1:
push 0
push 6
push offset Lt_06E4
push -1
push offset Lt_0D0E
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0D09
push -1
push offset Lt_0D0E
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0D0E
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0D0A
push -1
push offset Lt_0D0E
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0D0E]
call OUTP
add esp, 4
.Lt_06E0:
.Lt_06DF:
mov esp, ebp
pop ebp
ret
.size _EMITMULI, .-_EMITMULI

.section .bss
.balign 4
	.lcomm	Lt_0D0B,4
.balign 4
	.lcomm	Lt_0D0D,4
.balign 4
	.lcomm	Lt_0D0C,12
.balign 4
	.lcomm	Lt_0D0E,12
.balign 4
	.lcomm	Lt_0D09,12
.balign 4
	.lcomm	Lt_0D0A,12

.section .text
.balign 16
_EMITMULF:
.type _EMITMULF, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_06E7:
push -1
push 0
push 0
push -2147483648
push offset Lt_0D10
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax], 4
jne .Lt_06EA
push offset Lt_0152
call OUTP
add esp, 4
jmp .Lt_06E9
.Lt_06EA:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_06EB
mov dword ptr [ebp-4], 22
jmp .Lt_0D0F
.Lt_06EB:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0D0F:
mov eax, dword ptr [ebp-4]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax], 1
jne .Lt_06EE
push 0
push 6
push offset Lt_06EF
push -1
push offset Lt_0D11
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0D10
push -1
push offset Lt_0D11
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0D11]
call OUTP
add esp, 4
jmp .Lt_06ED
.Lt_06EE:
push 0
push 7
push offset Lt_06F0
push -1
push offset Lt_0D11
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0D10
push -1
push offset Lt_0D11
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0D11]
call OUTP
add esp, 4
.Lt_06ED:
.Lt_06E9:
.Lt_06E8:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITMULF, .-_EMITMULF

.section .bss
.balign 4
	.lcomm	Lt_0D10,12
.balign 4
	.lcomm	Lt_0D11,12

.section .text
.balign 16
_EMITDIVF:
.type _EMITDIVF, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_06F1:
push -1
push 0
push 0
push -2147483648
push offset Lt_0D13
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax], 4
jne .Lt_06F4
push offset Lt_013C
call OUTP
add esp, 4
jmp .Lt_06F3
.Lt_06F4:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_06F5
mov dword ptr [ebp-4], 22
jmp .Lt_0D12
.Lt_06F5:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0D12:
mov eax, dword ptr [ebp-4]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax], 1
jne .Lt_06F8
push 0
push 6
push offset Lt_06F9
push -1
push offset Lt_0D14
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0D13
push -1
push offset Lt_0D14
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0D14]
call OUTP
add esp, 4
jmp .Lt_06F7
.Lt_06F8:
push 0
push 7
push offset Lt_06FA
push -1
push offset Lt_0D14
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0D13
push -1
push offset Lt_0D14
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0D14]
call OUTP
add esp, 4
.Lt_06F7:
.Lt_06F3:
.Lt_06F2:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITDIVF, .-_EMITDIVF

.section .bss
.balign 4
	.lcomm	Lt_0D13,12
.balign 4
	.lcomm	Lt_0D14,12

.section .text
.balign 16
_EMITDIVI:
.type _EMITDIVI, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
.Lt_06FB:
push -1
push 0
push 0
push -2147483648
push offset Lt_0D18
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push -1
push 0
push 0
push -2147483648
push offset Lt_0D19
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_06FD
mov dword ptr [ebp-4], 22
jmp .Lt_0D15
.Lt_06FD:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0D15:
mov eax, dword ptr [ebp-4]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+4], 4
jne .Lt_0700
push 0
push 4
push offset Lt_0081
push -1
push offset Lt_0D1A
call fb_StrAssign
add esp, 20
push 0
push 4
push offset Lt_007F
push -1
push offset Lt_0D1B
call fb_StrAssign
add esp, 20
push 0
push 4
push offset Lt_007C
push -1
push offset Lt_0D1C
call fb_StrAssign
add esp, 20
jmp .Lt_06FF
.Lt_0700:
push 0
push 3
push offset Lt_007B
push -1
push offset Lt_0D1A
call fb_StrAssign
add esp, 20
push 0
push 3
push offset Lt_0079
push -1
push offset Lt_0D1B
call fb_StrAssign
add esp, 20
push 0
push 3
push offset Lt_0078
push -1
push offset Lt_0D1C
call fb_StrAssign
add esp, 20
.Lt_06FF:
mov dword ptr [Lt_0D1D], 0
push 5
push 0
call HISREGFREE
add esp, 8
mov dword ptr [Lt_0D1E], eax
push 3
push 0
call HISREGFREE
add esp, 8
mov dword ptr [Lt_0D1F], eax
push 0
push 0
call HISREGFREE
add esp, 8
mov dword ptr [Lt_0D20], eax
push 5
push dword ptr [ebp+12]
call HISREGINVREG
add esp, 8
mov dword ptr [Lt_0D21], eax
push 0
push dword ptr [ebp+12]
call HISREGINVREG
add esp, 8
mov dword ptr [Lt_0D22], eax
push 5
push dword ptr [ebp+8]
call HISREGINVREG
add esp, 8
mov dword ptr [Lt_0D23], eax
push 0
push dword ptr [ebp+8]
call HISREGINVREG
add esp, 8
mov dword ptr [Lt_0D24], eax
push 3
push dword ptr [ebp+8]
call HISREGINVREG
add esp, 8
mov dword ptr [Lt_0D25], eax
mov eax, dword ptr [Lt_0D22]
or eax, dword ptr [Lt_0D21]
mov ebx, dword ptr [ebp+12]
mov ecx, dword ptr [ebx]
test ecx, ecx
sete cl
shr ecx, 1
sbb ecx, ecx
or eax, ecx
je .Lt_0702
mov dword ptr [Lt_0D1D], -1
cmp dword ptr [Lt_0D25], 0
je .Lt_0704
push offset Lt_007F
call HPUSH
add esp, 4
mov ecx, dword ptr [ebp+8]
cmp dword ptr [ecx], 4
je .Lt_0706
push -1
push 0
push 0
push 7
push offset Lt_0D27
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push dword ptr [Lt_0D27]
call HPUSH
add esp, 4
.Lt_0706:
.Lt_0705:
jmp .Lt_0703
.Lt_0704:
cmp dword ptr [Lt_0D1F], 0
jne .Lt_0707
push offset Lt_007F
call HPUSH
add esp, 4
.Lt_0707:
.Lt_0703:
push dword ptr [Lt_0D19]
push dword ptr [Lt_0D1B]
call HMOV
add esp, 8
push 0
push -1
push offset Lt_0D1B
push -1
push offset Lt_0D19
call fb_StrAssign
add esp, 20
.Lt_0702:
.Lt_0701:
cmp dword ptr [Lt_0D23], 0
jne .Lt_0709
mov eax, dword ptr [Lt_0D1D]
and eax, dword ptr [Lt_0D25]
je .Lt_070B
cmp dword ptr [Lt_0D1E], 0
jne .Lt_070D
push offset Lt_070E
call OUTP
add esp, 4
jmp .Lt_070C
.Lt_070D:
push offset Lt_0081
call HPOP
add esp, 4
.Lt_070C:
jmp .Lt_070A
.Lt_070B:
cmp dword ptr [Lt_0D1E], 0
jne .Lt_0710
push offset Lt_0081
call HPUSH
add esp, 4
.Lt_0710:
.Lt_070F:
push dword ptr [Lt_0D18]
push dword ptr [Lt_0D1A]
call HMOV
add esp, 8
.Lt_070A:
jmp .Lt_0708
.Lt_0709:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 4
je .Lt_0712
push offset Lt_0081
call HPUSH
add esp, 4
push dword ptr [Lt_0D18]
push dword ptr [Lt_0D1A]
call HMOV
add esp, 8
.Lt_0712:
.Lt_0711:
.Lt_0708:
cmp dword ptr [Lt_0D24], 0
je .Lt_0714
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 4
je .Lt_0716
push offset Lt_007C
call HPUSH
add esp, 4
.Lt_0716:
.Lt_0715:
jmp .Lt_0713
.Lt_0714:
cmp dword ptr [Lt_0D20], 0
jne .Lt_0717
push offset Lt_007C
call HPUSH
add esp, 4
.Lt_0717:
.Lt_0713:
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+4]
and ecx, 480
je .Lt_0718
mov dword ptr [ebp-8], 22
jmp .Lt_0D16
.Lt_0718:
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ecx+4]
and eax, 31
mov dword ptr [ebp-8], eax
.Lt_0D16:
mov eax, dword ptr [ebp-8]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+8], 0
je .Lt_071B
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+4]
and ecx, 480
je .Lt_071C
mov dword ptr [ebp-12], 22
jmp .Lt_0D17
.Lt_071C:
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ecx+4]
and eax, 31
mov dword ptr [ebp-12], eax
.Lt_0D17:
mov eax, dword ptr [ebp-12]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+4], 4
jne .Lt_071F
push offset Lt_00CB
call OUTP
add esp, 4
jmp .Lt_071E
.Lt_071F:
push offset Lt_0113
call OUTP
add esp, 4
.Lt_071E:
push 0
push 6
push offset Lt_0720
push -1
push offset Lt_0D27
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0D19
push -1
push offset Lt_0D27
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0D27]
call OUTP
add esp, 4
jmp .Lt_071A
.Lt_071B:
push 0
push 5
push offset Lt_05F6
push -1
push offset Lt_0D27
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0D1C
push -1
push offset Lt_0D27
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0D27
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0D1C
push -1
push offset Lt_0D27
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0D27]
call OUTP
add esp, 4
push 0
push 5
push offset Lt_0721
push -1
push offset Lt_0D27
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0D19
push -1
push offset Lt_0D27
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0D27]
call OUTP
add esp, 4
.Lt_071A:
cmp dword ptr [Lt_0D24], 0
je .Lt_0723
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 4
je .Lt_0725
push offset Lt_007C
call HPOP
add esp, 4
.Lt_0725:
.Lt_0724:
jmp .Lt_0722
.Lt_0723:
cmp dword ptr [Lt_0D20], 0
jne .Lt_0726
push offset Lt_007C
call HPOP
add esp, 4
.Lt_0726:
.Lt_0722:
cmp dword ptr [Lt_0D23], 0
jne .Lt_0728
mov eax, dword ptr [Lt_0D1D]
and eax, dword ptr [Lt_0D25]
je .Lt_072A
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 4
je .Lt_072C
cmp dword ptr [Lt_0D1E], 0
jne .Lt_072E
push offset Lt_007F
call HPOP
add esp, 4
push offset Lt_072F
call OUTP
add esp, 4
jmp .Lt_072D
.Lt_072E:
push offset Lt_007F
call HPOP
add esp, 4
.Lt_072D:
.Lt_072C:
.Lt_072B:
.Lt_072A:
.Lt_0729:
push dword ptr [Lt_0D1A]
push dword ptr [Lt_0D18]
call HMOV
add esp, 8
cmp dword ptr [Lt_0D1E], 0
jne .Lt_0731
push offset Lt_0081
call HPOP
add esp, 4
.Lt_0731:
.Lt_0730:
jmp .Lt_0727
.Lt_0728:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 4
je .Lt_0733
mov eax, dword ptr [Lt_0D1F]
test eax, eax
sete al
shr eax, 1
sbb eax, eax
mov ecx, dword ptr [Lt_0D1D]
test ecx, ecx
sete cl
shr ecx, 1
sbb ecx, ecx
and eax, ecx
je .Lt_0735
push offset Lt_072F
call OUTP
add esp, 4
push offset Lt_0736
call OUTP
add esp, 4
jmp .Lt_0734
.Lt_0735:
push offset Lt_0081
push offset Lt_007F
call HMOV
add esp, 8
push offset Lt_0081
call HPOP
add esp, 4
.Lt_0734:
push dword ptr [Lt_0D1B]
push dword ptr [Lt_0D18]
call HMOV
add esp, 8
mov ecx, dword ptr [Lt_0D1F]
test ecx, ecx
sete cl
shr ecx, 1
sbb ecx, ecx
mov eax, dword ptr [Lt_0D1D]
test eax, eax
sete al
shr eax, 1
sbb eax, eax
and ecx, eax
je .Lt_0738
push offset Lt_007F
call HPOP
add esp, 4
.Lt_0738:
.Lt_0737:
.Lt_0733:
.Lt_0732:
.Lt_0727:
cmp dword ptr [Lt_0D1D], 0
je .Lt_073A
mov eax, dword ptr [Lt_0D1F]
test eax, eax
sete al
shr eax, 1
sbb eax, eax
mov ecx, dword ptr [Lt_0D25]
test ecx, ecx
sete cl
shr ecx, 1
sbb ecx, ecx
and eax, ecx
je .Lt_073C
push offset Lt_007F
call HPOP
add esp, 4
.Lt_073C:
.Lt_073B:
.Lt_073A:
.Lt_0739:
.Lt_06FC:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITDIVI, .-_EMITDIVI

.section .bss
.balign 4
	.lcomm	Lt_0D18,12
.balign 4
	.lcomm	Lt_0D19,12
.balign 4
	.lcomm	Lt_0D1D,4
.balign 4
	.lcomm	Lt_0D1E,4
.balign 4
	.lcomm	Lt_0D1F,4
.balign 4
	.lcomm	Lt_0D20,4
.balign 4
	.lcomm	Lt_0D23,4
.balign 4
	.lcomm	Lt_0D25,4
.balign 4
	.lcomm	Lt_0D24,4
.balign 4
	.lcomm	Lt_0D21,4
.balign 4
	.lcomm	Lt_0D22,4
.balign 4
	.lcomm	Lt_0D1A,12
.balign 4
	.lcomm	Lt_0D1B,12
.balign 4
	.lcomm	Lt_0D1C,12
.balign 4
	.lcomm	Lt_0D27,12

.section .text
.balign 16
_EMITMODI:
.type _EMITMODI, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
.Lt_073D:
push -1
push 0
push 0
push -2147483648
push offset Lt_0D31
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push -1
push 0
push 0
push -2147483648
push offset Lt_0D32
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_073F
mov dword ptr [ebp-4], 22
jmp .Lt_0D2E
.Lt_073F:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0D2E:
mov eax, dword ptr [ebp-4]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+4], 4
jne .Lt_0742
push 0
push 4
push offset Lt_0081
push -1
push offset Lt_0D33
call fb_StrAssign
add esp, 20
push 0
push 4
push offset Lt_007F
push -1
push offset Lt_0D34
call fb_StrAssign
add esp, 20
push 0
push 4
push offset Lt_007C
push -1
push offset Lt_0D35
call fb_StrAssign
add esp, 20
jmp .Lt_0741
.Lt_0742:
push 0
push 3
push offset Lt_007B
push -1
push offset Lt_0D33
call fb_StrAssign
add esp, 20
push 0
push 3
push offset Lt_0079
push -1
push offset Lt_0D34
call fb_StrAssign
add esp, 20
push 0
push 3
push offset Lt_0078
push -1
push offset Lt_0D35
call fb_StrAssign
add esp, 20
.Lt_0741:
mov dword ptr [Lt_0D36], 0
push 5
push 0
call HISREGFREE
add esp, 8
mov dword ptr [Lt_0D37], eax
push 3
push 0
call HISREGFREE
add esp, 8
mov dword ptr [Lt_0D38], eax
push 0
push 0
call HISREGFREE
add esp, 8
mov dword ptr [Lt_0D39], eax
push 5
push dword ptr [ebp+12]
call HISREGINVREG
add esp, 8
mov dword ptr [Lt_0D3A], eax
push 0
push dword ptr [ebp+12]
call HISREGINVREG
add esp, 8
mov dword ptr [Lt_0D3B], eax
push 5
push dword ptr [ebp+8]
call HISREGINVREG
add esp, 8
mov dword ptr [Lt_0D3C], eax
push 0
push dword ptr [ebp+8]
call HISREGINVREG
add esp, 8
mov dword ptr [Lt_0D3D], eax
push 3
push dword ptr [ebp+8]
call HISREGINVREG
add esp, 8
mov dword ptr [Lt_0D3E], eax
mov eax, dword ptr [Lt_0D3B]
or eax, dword ptr [Lt_0D3A]
mov ebx, dword ptr [ebp+12]
mov ecx, dword ptr [ebx]
test ecx, ecx
sete cl
shr ecx, 1
sbb ecx, ecx
or eax, ecx
je .Lt_0744
mov dword ptr [Lt_0D36], -1
cmp dword ptr [Lt_0D3E], 0
je .Lt_0746
push offset Lt_007F
call HPUSH
add esp, 4
mov ecx, dword ptr [ebp+8]
cmp dword ptr [ecx], 4
je .Lt_0748
push -1
push 0
push 0
push 7
push offset Lt_0D40
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push dword ptr [Lt_0D40]
call HPUSH
add esp, 4
.Lt_0748:
.Lt_0747:
jmp .Lt_0745
.Lt_0746:
cmp dword ptr [Lt_0D38], 0
jne .Lt_0749
push offset Lt_007F
call HPUSH
add esp, 4
.Lt_0749:
.Lt_0745:
push dword ptr [Lt_0D32]
push dword ptr [Lt_0D34]
call HMOV
add esp, 8
push 0
push -1
push offset Lt_0D34
push -1
push offset Lt_0D32
call fb_StrAssign
add esp, 20
.Lt_0744:
.Lt_0743:
cmp dword ptr [Lt_0D3C], 0
jne .Lt_074B
mov eax, dword ptr [Lt_0D36]
and eax, dword ptr [Lt_0D3E]
je .Lt_074D
cmp dword ptr [Lt_0D37], 0
jne .Lt_074F
push offset Lt_070E
call OUTP
add esp, 4
jmp .Lt_074E
.Lt_074F:
push offset Lt_0081
call HPOP
add esp, 4
.Lt_074E:
jmp .Lt_074C
.Lt_074D:
cmp dword ptr [Lt_0D37], 0
jne .Lt_0751
push offset Lt_0081
call HPUSH
add esp, 4
.Lt_0751:
.Lt_0750:
push dword ptr [Lt_0D31]
push dword ptr [Lt_0D33]
call HMOV
add esp, 8
.Lt_074C:
jmp .Lt_074A
.Lt_074B:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 4
je .Lt_0753
push offset Lt_0081
call HPUSH
add esp, 4
push dword ptr [Lt_0D31]
push dword ptr [Lt_0D33]
call HMOV
add esp, 8
.Lt_0753:
.Lt_0752:
.Lt_074A:
cmp dword ptr [Lt_0D3D], 0
je .Lt_0755
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 4
je .Lt_0757
push offset Lt_007C
call HPUSH
add esp, 4
.Lt_0757:
.Lt_0756:
jmp .Lt_0754
.Lt_0755:
cmp dword ptr [Lt_0D39], 0
jne .Lt_0758
push offset Lt_007C
call HPUSH
add esp, 4
.Lt_0758:
.Lt_0754:
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+4]
and ecx, 480
je .Lt_0759
mov dword ptr [ebp-8], 22
jmp .Lt_0D2F
.Lt_0759:
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ecx+4]
and eax, 31
mov dword ptr [ebp-8], eax
.Lt_0D2F:
mov eax, dword ptr [ebp-8]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+8], 0
je .Lt_075C
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+4]
and ecx, 480
je .Lt_075D
mov dword ptr [ebp-12], 22
jmp .Lt_0D30
.Lt_075D:
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ecx+4]
and eax, 31
mov dword ptr [ebp-12], eax
.Lt_0D30:
mov eax, dword ptr [ebp-12]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+4], 4
jne .Lt_0760
push offset Lt_00CB
call OUTP
add esp, 4
jmp .Lt_075F
.Lt_0760:
push offset Lt_0113
call OUTP
add esp, 4
.Lt_075F:
push 0
push 6
push offset Lt_0720
push -1
push offset Lt_0D40
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0D32
push -1
push offset Lt_0D40
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0D40]
call OUTP
add esp, 4
jmp .Lt_075B
.Lt_075C:
push 0
push 5
push offset Lt_05F6
push -1
push offset Lt_0D40
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0D35
push -1
push offset Lt_0D40
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0D40
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0D35
push -1
push offset Lt_0D40
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0D40]
call OUTP
add esp, 4
push 0
push 5
push offset Lt_0721
push -1
push offset Lt_0D40
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0D32
push -1
push offset Lt_0D40
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0D40]
call OUTP
add esp, 4
.Lt_075B:
push dword ptr [Lt_0D35]
push dword ptr [Lt_0D33]
call HMOV
add esp, 8
cmp dword ptr [Lt_0D3D], 0
je .Lt_0762
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 4
je .Lt_0764
push offset Lt_007C
call HPOP
add esp, 4
.Lt_0764:
.Lt_0763:
jmp .Lt_0761
.Lt_0762:
cmp dword ptr [Lt_0D39], 0
jne .Lt_0765
push offset Lt_007C
call HPOP
add esp, 4
.Lt_0765:
.Lt_0761:
cmp dword ptr [Lt_0D3C], 0
jne .Lt_0767
mov eax, dword ptr [Lt_0D36]
and eax, dword ptr [Lt_0D3E]
je .Lt_0769
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 4
je .Lt_076B
cmp dword ptr [Lt_0D37], 0
jne .Lt_076D
push offset Lt_007F
call HPOP
add esp, 4
push offset Lt_072F
call OUTP
add esp, 4
jmp .Lt_076C
.Lt_076D:
push offset Lt_007F
call HPOP
add esp, 4
.Lt_076C:
.Lt_076B:
.Lt_076A:
.Lt_0769:
.Lt_0768:
push dword ptr [Lt_0D33]
push dword ptr [Lt_0D31]
call HMOV
add esp, 8
cmp dword ptr [Lt_0D37], 0
jne .Lt_076F
push offset Lt_0081
call HPOP
add esp, 4
.Lt_076F:
.Lt_076E:
jmp .Lt_0766
.Lt_0767:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 4
je .Lt_0771
mov eax, dword ptr [Lt_0D38]
test eax, eax
sete al
shr eax, 1
sbb eax, eax
mov ecx, dword ptr [Lt_0D36]
test ecx, ecx
sete cl
shr ecx, 1
sbb ecx, ecx
and eax, ecx
je .Lt_0773
push offset Lt_072F
call OUTP
add esp, 4
push offset Lt_0736
call OUTP
add esp, 4
jmp .Lt_0772
.Lt_0773:
push offset Lt_0081
push offset Lt_007F
call HMOV
add esp, 8
push offset Lt_0081
call HPOP
add esp, 4
.Lt_0772:
push dword ptr [Lt_0D34]
push dword ptr [Lt_0D31]
call HMOV
add esp, 8
mov ecx, dword ptr [Lt_0D38]
test ecx, ecx
sete cl
shr ecx, 1
sbb ecx, ecx
mov eax, dword ptr [Lt_0D36]
test eax, eax
sete al
shr eax, 1
sbb eax, eax
and ecx, eax
je .Lt_0775
push offset Lt_007F
call HPOP
add esp, 4
.Lt_0775:
.Lt_0774:
.Lt_0771:
.Lt_0770:
.Lt_0766:
cmp dword ptr [Lt_0D36], 0
je .Lt_0777
mov eax, dword ptr [Lt_0D38]
test eax, eax
sete al
shr eax, 1
sbb eax, eax
mov ecx, dword ptr [Lt_0D3E]
test ecx, ecx
sete cl
shr ecx, 1
sbb ecx, ecx
and eax, ecx
je .Lt_0779
push offset Lt_007F
call HPOP
add esp, 4
.Lt_0779:
.Lt_0778:
.Lt_0777:
.Lt_0776:
.Lt_073E:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITMODI, .-_EMITMODI

.section .bss
.balign 4
	.lcomm	Lt_0D31,12
.balign 4
	.lcomm	Lt_0D32,12
.balign 4
	.lcomm	Lt_0D36,4
.balign 4
	.lcomm	Lt_0D37,4
.balign 4
	.lcomm	Lt_0D38,4
.balign 4
	.lcomm	Lt_0D39,4
.balign 4
	.lcomm	Lt_0D3C,4
.balign 4
	.lcomm	Lt_0D3E,4
.balign 4
	.lcomm	Lt_0D3D,4
.balign 4
	.lcomm	Lt_0D3A,4
.balign 4
	.lcomm	Lt_0D3B,4
.balign 4
	.lcomm	Lt_0D33,12
.balign 4
	.lcomm	Lt_0D34,12
.balign 4
	.lcomm	Lt_0D35,12
.balign 4
	.lcomm	Lt_0D40,12

.section .text
.balign 16
HSHIFTL:
.type HSHIFTL, @function
push ebp
mov ebp, esp
sub esp, 216
push ebx
.Lt_077A:
cmp dword ptr [ebp+8], 41
jne .Lt_077D
push 0
push 5
push offset Lt_077E
push -1
push offset Lt_0D4C
call fb_StrAssign
add esp, 20
push 0
push 6
push offset Lt_077F
push -1
push offset Lt_0D4D
call fb_StrAssign
add esp, 20
jmp .Lt_077C
.Lt_077D:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_0780
mov dword ptr [ebp-4], 22
jmp .Lt_0D47
.Lt_0780:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0D47:
mov eax, dword ptr [ebp-4]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+8], 0
je .Lt_0783
push 0
push 5
push offset Lt_0548
push -1
push offset Lt_0D4C
call fb_StrAssign
add esp, 20
jmp .Lt_0782
.Lt_0783:
push 0
push 5
push offset Lt_0784
push -1
push offset Lt_0D4C
call fb_StrAssign
add esp, 20
.Lt_0782:
push 0
push 6
push offset Lt_0785
push -1
push offset Lt_0D4D
call fb_StrAssign
add esp, 20
.Lt_077C:
push offset Lt_0D4E
push offset Lt_0D4F
push dword ptr [ebp+12]
call HPREPOPERAND64
add esp, 12
push -1
push 0
push 0
push 7
push offset Lt_0D50
push dword ptr [ebp+16]
call HPREPOPERAND
add esp, 24
cmp dword ptr [ebp+8], 41
jne .Lt_0787
push 0
push -1
push offset Lt_0D4E
push -1
push offset Lt_0D51
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+52]
mov dword ptr [Lt_0D52], ebx
push 0
push -1
push offset Lt_0D4F
push -1
push offset Lt_0D53
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ebp+12]
mov dword ptr [Lt_0D54], eax
jmp .Lt_0786
.Lt_0787:
push 0
push -1
push offset Lt_0D4F
push -1
push offset Lt_0D51
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ebp+12]
mov dword ptr [Lt_0D52], eax
push 0
push -1
push offset Lt_0D4E
push -1
push offset Lt_0D53
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+52]
mov dword ptr [Lt_0D54], ebx
.Lt_0786:
mov ebx, dword ptr [ebp+16]
cmp dword ptr [ebx], 0
jne .Lt_0789
mov ebx, dword ptr [ebp+16]
cmp dword ptr [ebx+28], 0
jl .Lt_078B
jg .Lt_0D55
cmp dword ptr [ebx+24], 64
jb .Lt_078B
.Lt_0D55:
mov ebx, dword ptr [Lt_0D54]
cmp dword ptr [ebx], 4
jne .Lt_078D
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
push 0
push -1
push -1
push offset Lt_0D53
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0D53
push 5
push offset Lt_05F6
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea ebx, [ebp-12]
push ebx
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ebp-24]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
lea eax, [ebp-36]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-48]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-48]
call OUTP
add esp, 4
lea eax, [ebp-48]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_078C
.Lt_078D:
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 0
push -1
push 4
push offset Lt_0529
push -1
push -1
push offset Lt_0D53
push 5
push offset Lt_03BF
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ebp-24]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-36]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-36]
call OUTP
add esp, 4
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
.Lt_078C:
mov eax, dword ptr [Lt_0D52]
cmp dword ptr [eax], 4
jne .Lt_0796
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
push 0
push -1
push -1
push offset Lt_0D51
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0D51
push 5
push offset Lt_05F6
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ebp-24]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
lea eax, [ebp-36]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-48]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-48]
call OUTP
add esp, 4
lea eax, [ebp-48]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0795
.Lt_0796:
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 0
push -1
push 4
push offset Lt_0529
push -1
push -1
push offset Lt_0D51
push 5
push offset Lt_03BF
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ebp-24]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-36]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-36]
call OUTP
add esp, 4
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
.Lt_0795:
jmp .Lt_078A
.Lt_078B:
mov eax, dword ptr [ebp+16]
cmp dword ptr [eax+28], 0
jl .Lt_079E
jg .Lt_0D56
cmp dword ptr [eax+24], 32
jb .Lt_079E
.Lt_0D56:
mov dword ptr [Lt_0D57], -1
mov eax, dword ptr [Lt_0D54]
mov ebx, dword ptr [eax]
cmp ebx, 4
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [Lt_0D52]
mov ecx, dword ptr [eax]
cmp ecx, 4
sete cl
shr ecx, 1
sbb ecx, ecx
or ebx, ecx
je .Lt_07A0
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
push 0
push -1
push -1
push offset Lt_0D53
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0D51
push 5
push offset Lt_03BF
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
lea ecx, [ebp-16]
push ecx
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
lea eax, [ebp-28]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
lea eax, [ebp-40]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-52]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-52]
call OUTP
add esp, 4
lea eax, [ebp-52]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_079F
.Lt_07A0:
push 0
call HFINDFREEREG
add esp, 4
mov dword ptr [Lt_0D5A], eax
cmp dword ptr [Lt_0D5A], -1
jne .Lt_07A6
push 0
push dword ptr [ebp+12]
call HFINDREGNOTINVREG
add esp, 8
mov dword ptr [Lt_0D5A], eax
mov dword ptr [Lt_0D57], 0
.Lt_07A6:
.Lt_07A5:
push 0
push 0
push dword ptr [Lt_0D5A]
push 7
call HGETREGNAME
add esp, 8
push eax
push -1
push offset Lt_0D5B
call fb_StrAssign
add esp, 20
cmp dword ptr [Lt_0D57], 0
jne .Lt_07A8
push dword ptr [Lt_0D5B]
call HPUSH
add esp, 4
.Lt_07A8:
.Lt_07A7:
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
push 0
push -1
push -1
push offset Lt_0D53
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0D5B
push 5
push offset Lt_03BF
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
lea eax, [ebp-16]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
lea eax, [ebp-28]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
lea eax, [ebp-40]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-52]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-52]
call OUTP
add esp, 4
lea eax, [ebp-52]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-100], 0
mov dword ptr [ebp-96], 0
mov dword ptr [ebp-92], 0
push 0
push -1
push -1
push offset Lt_0D5B
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0D51
push 5
push offset Lt_03BF
mov dword ptr [ebp-64], 0
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
lea eax, [ebp-64]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
lea eax, [ebp-76]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-88], 0
mov dword ptr [ebp-84], 0
mov dword ptr [ebp-80], 0
lea eax, [ebp-88]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-100]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-100]
call OUTP
add esp, 4
lea eax, [ebp-100]
push eax
call fb_StrDelete
add esp, 4
.Lt_079F:
mov eax, dword ptr [ebp+8]
cmp eax, 42
sete al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax+4]
and ecx, 480
je .Lt_07B1
mov dword ptr [ebp-4], 22
jmp .Lt_0D48
.Lt_07B1:
mov ecx, dword ptr [ebp+12]
mov eax, dword ptr [ecx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0D48:
mov eax, dword ptr [ebp-4]
imul eax, 28
mov ecx, dword ptr [SYMB_DTYPETB+eax+8]
and ecx, dword ptr [ebp-8]
je .Lt_07B4
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
push 0
push -1
push 5
push offset Lt_0549
push -1
push -1
push offset Lt_0D53
push 5
push offset Lt_0548
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
lea ecx, [ebp-20]
push ecx
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
lea eax, [ebp-32]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-44]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-44]
call OUTP
add esp, 4
lea eax, [ebp-44]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_07B3
.Lt_07B4:
mov eax, dword ptr [Lt_0D54]
cmp dword ptr [eax], 4
jne .Lt_07B8
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
push 0
push -1
push -1
push offset Lt_0D53
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0D53
push 5
push offset Lt_05F6
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
lea eax, [ebp-16]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
lea eax, [ebp-28]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
lea eax, [ebp-40]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-52]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-52]
call OUTP
add esp, 4
lea eax, [ebp-52]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_07B3
.Lt_07B8:
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
push 0
push -1
push 4
push offset Lt_0529
push -1
push -1
push offset Lt_0D53
push 5
push offset Lt_03BF
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
lea eax, [ebp-16]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
lea eax, [ebp-28]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-40]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-40]
call OUTP
add esp, 4
lea eax, [ebp-40]
push eax
call fb_StrDelete
add esp, 4
.Lt_07B3:
mov eax, dword ptr [ebp+16]
cmp dword ptr [eax+28], 0
jl .Lt_07C1
jg .Lt_0D5D
cmp dword ptr [eax+24], 32
jbe .Lt_07C1
.Lt_0D5D:
push 0
push -1
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+24]
mov ecx, dword ptr [eax+28]
add ebx, 4294967264
adc ecx, 4294967295
push ecx
push ebx
call fb_LongintToStr
add esp, 8
push eax
push -1
push offset Lt_0D50
call fb_StrAssign
add esp, 20
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
push 0
push -1
push -1
push offset Lt_0D50
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0D51
push -1
push offset Lt_0D4C
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
lea eax, [ebp-16]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
lea eax, [ebp-28]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
lea eax, [ebp-40]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-52]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-52]
call OUTP
add esp, 4
lea eax, [ebp-52]
push eax
call fb_StrDelete
add esp, 4
.Lt_07C1:
.Lt_07C0:
cmp dword ptr [Lt_0D57], 0
jne .Lt_07C7
push dword ptr [Lt_0D5B]
call HPOP
add esp, 4
.Lt_07C7:
.Lt_07C6:
jmp .Lt_078A
.Lt_079E:
mov eax, dword ptr [Lt_0D54]
cmp dword ptr [eax], 4
jne .Lt_07C9
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
mov dword ptr [ebp-64], 0
push 0
push -1
push -1
push offset Lt_0D50
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0D53
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0D51
push -1
push offset Lt_0D4D
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ebp-24]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
lea eax, [ebp-36]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
lea eax, [ebp-48]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
lea eax, [ebp-60]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-72]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-72]
call OUTP
add esp, 4
lea eax, [ebp-72]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-120], 0
mov dword ptr [ebp-116], 0
mov dword ptr [ebp-112], 0
push 0
push -1
push -1
push offset Lt_0D50
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0D53
push -1
push offset Lt_0D4C
mov dword ptr [ebp-84], 0
mov dword ptr [ebp-80], 0
mov dword ptr [ebp-76], 0
lea eax, [ebp-84]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-96], 0
mov dword ptr [ebp-92], 0
mov dword ptr [ebp-88], 0
lea eax, [ebp-96]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-108], 0
mov dword ptr [ebp-104], 0
mov dword ptr [ebp-100], 0
lea eax, [ebp-108]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-120]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-120]
call OUTP
add esp, 4
lea eax, [ebp-120]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_07C8
.Lt_07C9:
mov eax, dword ptr [Lt_0D52]
cmp dword ptr [eax], 4
jne .Lt_07D4
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
push 0
push -1
push -1
push offset Lt_0D53
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0D51
push 6
push offset Lt_03C5
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ebp-24]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
lea eax, [ebp-36]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-48]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-48]
call OUTP
add esp, 4
lea eax, [ebp-48]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-120], 0
mov dword ptr [ebp-116], 0
mov dword ptr [ebp-112], 0
push 0
push -1
push -1
push offset Lt_0D50
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0D51
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0D53
push -1
push offset Lt_0D4D
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
lea eax, [ebp-60]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
mov dword ptr [ebp-64], 0
lea eax, [ebp-72]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-84], 0
mov dword ptr [ebp-80], 0
mov dword ptr [ebp-76], 0
lea eax, [ebp-84]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-96], 0
mov dword ptr [ebp-92], 0
mov dword ptr [ebp-88], 0
lea eax, [ebp-96]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-108], 0
mov dword ptr [ebp-104], 0
mov dword ptr [ebp-100], 0
lea eax, [ebp-108]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-120]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-120]
call OUTP
add esp, 4
lea eax, [ebp-120]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-168], 0
mov dword ptr [ebp-164], 0
mov dword ptr [ebp-160], 0
push 0
push -1
push -1
push offset Lt_0D50
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0D51
push -1
push offset Lt_0D4C
mov dword ptr [ebp-132], 0
mov dword ptr [ebp-128], 0
mov dword ptr [ebp-124], 0
lea eax, [ebp-132]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-144], 0
mov dword ptr [ebp-140], 0
mov dword ptr [ebp-136], 0
lea eax, [ebp-144]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-156], 0
mov dword ptr [ebp-152], 0
mov dword ptr [ebp-148], 0
lea eax, [ebp-156]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-168]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-168]
call OUTP
add esp, 4
lea eax, [ebp-168]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-216], 0
mov dword ptr [ebp-212], 0
mov dword ptr [ebp-208], 0
push 0
push -1
push -1
push offset Lt_0D53
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0D51
push 6
push offset Lt_03C5
mov dword ptr [ebp-180], 0
mov dword ptr [ebp-176], 0
mov dword ptr [ebp-172], 0
lea eax, [ebp-180]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-192], 0
mov dword ptr [ebp-188], 0
mov dword ptr [ebp-184], 0
lea eax, [ebp-192]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-204], 0
mov dword ptr [ebp-200], 0
mov dword ptr [ebp-196], 0
lea eax, [ebp-204]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-216]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-216]
call OUTP
add esp, 4
lea eax, [ebp-216]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_07C8
.Lt_07D4:
push 0
call HFINDFREEREG
add esp, 4
mov dword ptr [Lt_0D5A], eax
cmp dword ptr [Lt_0D5A], -1
jne .Lt_07E8
push 0
push dword ptr [ebp+12]
call HFINDREGNOTINVREG
add esp, 8
mov dword ptr [Lt_0D5A], eax
mov dword ptr [Lt_0D57], 0
jmp .Lt_07E7
.Lt_07E8:
mov dword ptr [Lt_0D57], -1
.Lt_07E7:
push 0
push 0
push dword ptr [Lt_0D5A]
push 7
call HGETREGNAME
add esp, 8
push eax
push -1
push offset Lt_0D5B
call fb_StrAssign
add esp, 20
cmp dword ptr [Lt_0D57], 0
jne .Lt_07EA
push dword ptr [Lt_0D5B]
call HPUSH
add esp, 4
.Lt_07EA:
.Lt_07E9:
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
push 0
push -1
push -1
push offset Lt_0D53
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0D5B
push 5
push offset Lt_03BF
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ebp-24]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
lea eax, [ebp-36]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-48]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-48]
call OUTP
add esp, 4
lea eax, [ebp-48]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-120], 0
mov dword ptr [ebp-116], 0
mov dword ptr [ebp-112], 0
push 0
push -1
push -1
push offset Lt_0D50
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0D5B
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0D51
push -1
push offset Lt_0D4D
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
lea eax, [ebp-60]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
mov dword ptr [ebp-64], 0
lea eax, [ebp-72]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-84], 0
mov dword ptr [ebp-80], 0
mov dword ptr [ebp-76], 0
lea eax, [ebp-84]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-96], 0
mov dword ptr [ebp-92], 0
mov dword ptr [ebp-88], 0
lea eax, [ebp-96]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-108], 0
mov dword ptr [ebp-104], 0
mov dword ptr [ebp-100], 0
lea eax, [ebp-108]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-120]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-120]
call OUTP
add esp, 4
lea eax, [ebp-120]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-168], 0
mov dword ptr [ebp-164], 0
mov dword ptr [ebp-160], 0
push 0
push -1
push -1
push offset Lt_0D50
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0D5B
push -1
push offset Lt_0D4C
mov dword ptr [ebp-132], 0
mov dword ptr [ebp-128], 0
mov dword ptr [ebp-124], 0
lea eax, [ebp-132]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-144], 0
mov dword ptr [ebp-140], 0
mov dword ptr [ebp-136], 0
lea eax, [ebp-144]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-156], 0
mov dword ptr [ebp-152], 0
mov dword ptr [ebp-148], 0
lea eax, [ebp-156]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-168]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-168]
call OUTP
add esp, 4
lea eax, [ebp-168]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-216], 0
mov dword ptr [ebp-212], 0
mov dword ptr [ebp-208], 0
push 0
push -1
push -1
push offset Lt_0D5B
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0D53
push 5
push offset Lt_03BF
mov dword ptr [ebp-180], 0
mov dword ptr [ebp-176], 0
mov dword ptr [ebp-172], 0
lea eax, [ebp-180]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-192], 0
mov dword ptr [ebp-188], 0
mov dword ptr [ebp-184], 0
lea eax, [ebp-192]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-204], 0
mov dword ptr [ebp-200], 0
mov dword ptr [ebp-196], 0
lea eax, [ebp-204]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-216]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-216]
call OUTP
add esp, 4
lea eax, [ebp-216]
push eax
call fb_StrDelete
add esp, 4
cmp dword ptr [Lt_0D57], 0
jne .Lt_07FE
push offset Lt_0081
call HPOP
add esp, 4
.Lt_07FE:
.Lt_07FD:
.Lt_07C8:
.Lt_078A:
jmp .Lt_0788
.Lt_0789:
push 0
push 0
call SYMBUNIQUELABEL
push eax
push -1
push offset Lt_0D5E
call fb_StrAssign
add esp, 20
push dword ptr [Lt_0D4E]
call HPUSH
add esp, 4
push dword ptr [Lt_0D4F]
call HPUSH
add esp, 4
mov dword ptr [Lt_0D5F], 0
push 5
push 0
call HISREGFREE
add esp, 8
mov dword ptr [Lt_0D60], eax
push 0
push 0
call HISREGFREE
add esp, 8
mov dword ptr [Lt_0D61], eax
push 3
push 0
call HISREGFREE
add esp, 8
mov dword ptr [Lt_0D62], eax
push 5
push dword ptr [ebp+12]
call HISREGINVREG
add esp, 8
mov dword ptr [Lt_0D63], eax
push 0
push dword ptr [ebp+12]
call HISREGINVREG
add esp, 8
mov dword ptr [Lt_0D64], eax
push 3
push dword ptr [ebp+12]
call HISREGINVREG
add esp, 8
mov dword ptr [Lt_0D65], eax
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax]
cmp ebx, 4
setne bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+16]
mov ecx, dword ptr [eax+12]
cmp ecx, 3
setne cl
shr ecx, 1
sbb ecx, ecx
or ebx, ecx
je .Lt_0800
mov ecx, dword ptr [ebp+16]
mov ebx, dword ptr [ecx+4]
and ebx, 480
je .Lt_0801
mov dword ptr [ebp-4], 22
jmp .Lt_0D4A
.Lt_0801:
mov ebx, dword ptr [ebp+16]
mov ecx, dword ptr [ebx+4]
and ecx, 31
mov dword ptr [ebp-4], ecx
.Lt_0D4A:
mov ecx, dword ptr [ebp-4]
imul ecx, 28
cmp dword ptr [SYMB_DTYPETB+ecx+4], 4
je .Lt_0804
mov ecx, dword ptr [ebp+16]
cmp dword ptr [ecx], 4
jne .Lt_0806
push 0
push 0
mov ecx, dword ptr [ebp+16]
push dword ptr [ecx+12]
push 7
call HGETREGNAME
add esp, 8
push eax
push -1
push offset Lt_0D50
call fb_StrAssign
add esp, 20
.Lt_0806:
.Lt_0805:
.Lt_0804:
.Lt_0803:
cmp dword ptr [Lt_0D62], 0
jne .Lt_0808
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax]
cmp ecx, 4
sete cl
shr ecx, 1
sbb ecx, ecx
and ecx, dword ptr [Lt_0D65]
je .Lt_080A
push dword ptr [Lt_0D50]
push offset Lt_007F
call HMOV
add esp, 8
mov dword ptr [Lt_0D62], -1
jmp .Lt_0809
.Lt_080A:
push dword ptr [Lt_0D50]
call HPUSH
add esp, 4
push offset Lt_072F
call OUTP
add esp, 4
add dword ptr [Lt_0D5F], 4
.Lt_0809:
jmp .Lt_0807
.Lt_0808:
push dword ptr [Lt_0D50]
push offset Lt_007F
call HMOV
add esp, 8
.Lt_0807:
jmp .Lt_07FF
.Lt_0800:
mov dword ptr [Lt_0D62], -1
.Lt_07FF:
cmp dword ptr [Lt_0D63], 0
je .Lt_080C
mov ecx, dword ptr [ebp+12]
cmp dword ptr [ecx], 4
je .Lt_080E
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 0
push -1
push 2
push offset Lt_038A
push -1
push -1
push dword ptr [Lt_0D5F]
call fb_IntToStr
add esp, 4
push eax
push 16
push offset Lt_06BB
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ebp-24]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-36]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-36]
call OUTP
add esp, 4
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_080D
.Lt_080E:
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 0
push -1
push 2
push offset Lt_038A
push -1
push -1
push dword ptr [Lt_0D5F]
call fb_IntToStr
add esp, 4
push eax
push 15
push offset Lt_06B3
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ebp-24]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-36]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-36]
call OUTP
add esp, 4
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
.Lt_080D:
jmp .Lt_080B
.Lt_080C:
cmp dword ptr [Lt_0D60], 0
jne .Lt_0816
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 0
push -1
push 2
push offset Lt_038A
push -1
push -1
push dword ptr [Lt_0D5F]
call fb_IntToStr
add esp, 4
push eax
push 16
push offset Lt_06BB
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ebp-24]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-36]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-36]
call OUTP
add esp, 4
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0815
.Lt_0816:
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 0
push -1
push 2
push offset Lt_038A
push -1
push -1
push dword ptr [Lt_0D5F]
call fb_IntToStr
add esp, 4
push eax
push 15
push offset Lt_06B3
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ebp-24]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-36]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-36]
call OUTP
add esp, 4
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
.Lt_0815:
.Lt_080B:
cmp dword ptr [Lt_0D64], 0
je .Lt_081E
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax], 4
je .Lt_0820
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 0
push -1
push 2
push offset Lt_038A
push -1
push -1
mov eax, dword ptr [Lt_0D5F]
add eax, 4
mov ecx, eax
push ecx
call fb_IntToStr
add esp, 4
push eax
push 16
push offset Lt_0821
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ebp-24]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-36]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-36]
call OUTP
add esp, 4
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_081F
.Lt_0820:
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 0
push -1
push 2
push offset Lt_038A
push -1
push -1
mov eax, dword ptr [Lt_0D5F]
add eax, 4
mov ecx, eax
push ecx
call fb_IntToStr
add esp, 4
push eax
push 15
push offset Lt_06C4
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ebp-24]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-36]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-36]
call OUTP
add esp, 4
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
.Lt_081F:
jmp .Lt_081D
.Lt_081E:
cmp dword ptr [Lt_0D61], 0
jne .Lt_0829
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 0
push -1
push 2
push offset Lt_038A
push -1
push -1
mov eax, dword ptr [Lt_0D5F]
add eax, 4
mov ecx, eax
push ecx
call fb_IntToStr
add esp, 4
push eax
push 16
push offset Lt_0821
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ebp-24]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-36]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-36]
call OUTP
add esp, 4
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0828
.Lt_0829:
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 0
push -1
push 2
push offset Lt_038A
push -1
push -1
mov eax, dword ptr [Lt_0D5F]
add eax, 4
mov ecx, eax
push ecx
call fb_IntToStr
add esp, 4
push eax
push 15
push offset Lt_06C4
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ebp-24]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-36]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-36]
call OUTP
add esp, 4
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
.Lt_0828:
.Lt_081D:
cmp dword ptr [ebp+8], 41
jne .Lt_0831
push offset Lt_0832
call OUTP
add esp, 4
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
push 0
push -1
push 9
push offset Lt_0833
push -1
push offset Lt_0D4C
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-24]
call OUTP
add esp, 4
lea eax, [ebp-24]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0830
.Lt_0831:
push offset Lt_0836
call OUTP
add esp, 4
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
push 0
push -1
push 9
push offset Lt_0837
push -1
push offset Lt_0D4C
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-24]
call OUTP
add esp, 4
lea eax, [ebp-24]
push eax
call fb_StrDelete
add esp, 4
.Lt_0830:
push offset Lt_083A
call OUTP
add esp, 4
push dword ptr [Lt_0D5E]
push offset Lt_01A9
call HBRANCH
add esp, 8
cmp dword ptr [ebp+8], 41
jne .Lt_083C
push offset Lt_083D
call OUTP
add esp, 4
push offset Lt_0498
call OUTP
add esp, 4
jmp .Lt_083B
.Lt_083C:
push offset Lt_083E
call OUTP
add esp, 4
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax+4]
and ecx, 480
je .Lt_083F
mov dword ptr [ebp-4], 22
jmp .Lt_0D4B
.Lt_083F:
mov ecx, dword ptr [ebp+12]
mov eax, dword ptr [ecx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0D4B:
mov eax, dword ptr [ebp-4]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+8], 0
je .Lt_0842
push offset Lt_0843
call OUTP
add esp, 4
jmp .Lt_0841
.Lt_0842:
push offset Lt_0844
call OUTP
add esp, 4
.Lt_0841:
.Lt_083B:
push dword ptr [Lt_0D5E]
call HLABEL
add esp, 4
cmp dword ptr [Lt_0D62], 0
jne .Lt_0846
push offset Lt_007F
call HPOP
add esp, 4
.Lt_0846:
.Lt_0845:
cmp dword ptr [Lt_0D64], 0
je .Lt_0848
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax], 4
je .Lt_084A
push offset Lt_084B
call OUTP
add esp, 4
jmp .Lt_0849
.Lt_084A:
push offset Lt_084C
call OUTP
add esp, 4
.Lt_0849:
jmp .Lt_0847
.Lt_0848:
cmp dword ptr [Lt_0D61], 0
jne .Lt_084E
push offset Lt_084B
call OUTP
add esp, 4
jmp .Lt_084D
.Lt_084E:
push offset Lt_084C
call OUTP
add esp, 4
.Lt_084D:
.Lt_0847:
cmp dword ptr [Lt_0D63], 0
je .Lt_0850
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax], 4
je .Lt_0852
push offset Lt_0853
call OUTP
add esp, 4
jmp .Lt_0851
.Lt_0852:
push offset Lt_0854
call OUTP
add esp, 4
.Lt_0851:
jmp .Lt_084F
.Lt_0850:
cmp dword ptr [Lt_0D60], 0
jne .Lt_0856
push offset Lt_0853
call OUTP
add esp, 4
jmp .Lt_0855
.Lt_0856:
push offset Lt_0854
call OUTP
add esp, 4
.Lt_0855:
.Lt_084F:
push dword ptr [Lt_0D4F]
call HPOP
add esp, 4
push dword ptr [Lt_0D4E]
call HPOP
add esp, 4
.Lt_0788:
.Lt_077B:
pop ebx
mov esp, ebp
pop ebp
ret
.size HSHIFTL, .-HSHIFTL

.section .bss
.balign 4
	.lcomm	Lt_0D4F,12
.balign 4
	.lcomm	Lt_0D4E,12
.balign 4
	.lcomm	Lt_0D50,12
.balign 4
	.lcomm	Lt_0D5E,12
.balign 4
	.lcomm	Lt_0D4C,12
.balign 4
	.lcomm	Lt_0D4D,12
.balign 4
	.lcomm	Lt_0D5A,4
.balign 4
	.lcomm	Lt_0D57,4
.balign 4
	.lcomm	Lt_0D5B,12
.balign 4
	.lcomm	Lt_0D51,12
.balign 4
	.lcomm	Lt_0D53,12
.balign 4
	.lcomm	Lt_0D52,4
.balign 4
	.lcomm	Lt_0D54,4
.balign 4
	.lcomm	Lt_0D60,4
.balign 4
	.lcomm	Lt_0D61,4
.balign 4
	.lcomm	Lt_0D62,4
.balign 4
	.lcomm	Lt_0D63,4
.balign 4
	.lcomm	Lt_0D64,4
.balign 4
	.lcomm	Lt_0D65,4
.balign 4
	.lcomm	Lt_0D5F,4

.section .text
.balign 16
HSHIFTI:
.type HSHIFTI, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0857:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_0859
mov dword ptr [ebp-4], 22
jmp .Lt_0D69
.Lt_0859:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0D69:
mov eax, dword ptr [ebp-4]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+8], 0
je .Lt_085C
cmp dword ptr [ebp+8], 41
jne .Lt_085E
push 0
push 4
push offset Lt_0263
push -1
push offset Lt_0D6A
call fb_StrAssign
add esp, 20
jmp .Lt_085D
.Lt_085E:
push 0
push 4
push offset Lt_0264
push -1
push offset Lt_0D6A
call fb_StrAssign
add esp, 20
.Lt_085D:
jmp .Lt_085B
.Lt_085C:
cmp dword ptr [ebp+8], 41
jne .Lt_0860
push 0
push 4
push offset Lt_0265
push -1
push offset Lt_0D6A
call fb_StrAssign
add esp, 20
jmp .Lt_085F
.Lt_0860:
push 0
push 4
push offset Lt_0266
push -1
push offset Lt_0D6A
call fb_StrAssign
add esp, 20
.Lt_085F:
.Lt_085B:
push -1
push 0
push 0
push -2147483648
push offset Lt_0D6B
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
mov dword ptr [Lt_0D6C], 0
mov dword ptr [Lt_0D6D], 0
mov dword ptr [Lt_0D6E], 0
mov eax, dword ptr [ebp+16]
cmp dword ptr [eax], 0
jne .Lt_0862
push -1
push 0
push 0
push -2147483648
push offset Lt_0D6F
push dword ptr [ebp+16]
call HPREPOPERAND
add esp, 24
push 0
push -1
push offset Lt_0D6B
push -1
push offset Lt_0D70
call fb_StrAssign
add esp, 20
jmp .Lt_0861
.Lt_0862:
push 5
push 0
call HISREGFREE
add esp, 8
mov dword ptr [Lt_0D71], eax
push 3
push 0
call HISREGFREE
add esp, 8
mov dword ptr [Lt_0D72], eax
mov eax, dword ptr [ebp+16]
cmp dword ptr [eax], 4
jne .Lt_0864
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+12]
mov dword ptr [Lt_0D73], ebx
jmp .Lt_0863
.Lt_0864:
mov dword ptr [Lt_0D73], -1
.Lt_0863:
push 3
push dword ptr [ebp+12]
call HISREGINVREG
add esp, 8
mov dword ptr [Lt_0D6C], eax
cmp dword ptr [Lt_0D6C], 0
je .Lt_0866
push offset Lt_007F
call HPUSH
add esp, 4
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax], 4
je .Lt_0868
push -1
push 0
push 0
push 7
push offset Lt_0D74
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
push dword ptr [Lt_0D74]
call HPUSH
add esp, 4
.Lt_0868:
.Lt_0867:
jmp .Lt_0865
.Lt_0866:
mov eax, dword ptr [Lt_0D73]
cmp eax, 3
setne al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [Lt_0D72]
test ebx, ebx
sete bl
shr ebx, 1
sbb ebx, ebx
and eax, ebx
je .Lt_0869
mov dword ptr [Lt_0D6E], -1
push offset Lt_007F
call HPUSH
add esp, 4
.Lt_0869:
.Lt_0865:
mov ebx, dword ptr [ebp+16]
cmp dword ptr [ebx], 4
je .Lt_086B
push -1
push 0
push 0
push 1
push offset Lt_0D74
push dword ptr [ebp+16]
call HPREPOPERAND
add esp, 24
push dword ptr [Lt_0D74]
push offset Lt_0073
call HMOV
add esp, 8
jmp .Lt_086A
.Lt_086B:
cmp dword ptr [Lt_0D73], 3
je .Lt_086D
mov ebx, dword ptr [DTYPETB+112]
sal ebx, 3
add ebx, dword ptr [Lt_0D73]
lea eax, [RNAMETB+ebx*8]
push eax
push offset Lt_007F
call HMOV
add esp, 8
.Lt_086D:
.Lt_086C:
.Lt_086A:
cmp dword ptr [Lt_0D6C], 0
je .Lt_086F
cmp dword ptr [Lt_0D71], 0
jne .Lt_0871
mov dword ptr [Lt_0D6D], -1
push offset Lt_070E
call OUTP
add esp, 4
jmp .Lt_0870
.Lt_0871:
push offset Lt_0081
call HPOP
add esp, 4
.Lt_0870:
push 0
push 8
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
sal ebx, 4
mov eax, dword ptr [DTYPETB+ebx]
sal eax, 6
lea ebx, [RNAMETB+eax+40]
push ebx
push -1
push offset Lt_0D70
call fb_StrAssign
add esp, 20
jmp .Lt_086E
.Lt_086F:
push 0
push -1
push offset Lt_0D6B
push -1
push offset Lt_0D70
call fb_StrAssign
add esp, 20
.Lt_086E:
push 0
push 3
push offset Lt_0073
push -1
push offset Lt_0D6F
call fb_StrAssign
add esp, 20
.Lt_0861:
push 0
push -1
push offset Lt_0D6A
push -1
push offset Lt_0D74
call fb_StrAssign
add esp, 20
push 0
push 2
push offset Lt_03B0
push -1
push offset Lt_0D74
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0D70
push -1
push offset Lt_0D74
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0D74
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0D6F
push -1
push offset Lt_0D74
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0D74]
call OUTP
add esp, 4
cmp dword ptr [Lt_0D6C], 0
je .Lt_0873
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax], 4
je .Lt_0875
push offset Lt_007F
call HPOP
add esp, 4
cmp dword ptr [Lt_0D6D], 0
je .Lt_0877
push offset Lt_072F
call OUTP
add esp, 4
.Lt_0877:
.Lt_0876:
.Lt_0875:
.Lt_0874:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
sal ebx, 4
mov eax, dword ptr [DTYPETB+ebx]
sal eax, 6
lea ebx, [RNAMETB+eax+40]
push ebx
push dword ptr [Lt_0D6B]
call HMOV
add esp, 8
.Lt_0873:
.Lt_0872:
cmp dword ptr [Lt_0D6D], 0
je .Lt_0879
push offset Lt_0081
call HPOP
add esp, 4
.Lt_0879:
.Lt_0878:
cmp dword ptr [Lt_0D6E], 0
je .Lt_087B
push offset Lt_007F
call HPOP
add esp, 4
.Lt_087B:
.Lt_087A:
.Lt_0858:
pop ebx
mov esp, ebp
pop ebp
ret
.size HSHIFTI, .-HSHIFTI

.section .bss
.balign 4
	.lcomm	Lt_0D6D,4
.balign 4
	.lcomm	Lt_0D6E,4
.balign 4
	.lcomm	Lt_0D71,4
.balign 4
	.lcomm	Lt_0D72,4
.balign 4
	.lcomm	Lt_0D73,4
.balign 4
	.lcomm	Lt_0D6C,4
.balign 4
	.lcomm	Lt_0D74,12
.balign 4
	.lcomm	Lt_0D6B,12
.balign 4
	.lcomm	Lt_0D6F,12
.balign 4
	.lcomm	Lt_0D70,12
.balign 4
	.lcomm	Lt_0D6A,12

.section .text
.balign 16
_EMITSHLL:
.type _EMITSHLL, @function
push ebp
mov ebp, esp
.Lt_087C:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 41
call HSHIFTL
add esp, 12
.Lt_087D:
mov esp, ebp
pop ebp
ret
.size _EMITSHLL, .-_EMITSHLL
.balign 16
_EMITSHLI:
.type _EMITSHLI, @function
push ebp
mov ebp, esp
.Lt_087E:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 41
call HSHIFTI
add esp, 12
.Lt_087F:
mov esp, ebp
pop ebp
ret
.size _EMITSHLI, .-_EMITSHLI
.balign 16
_EMITSHRL:
.type _EMITSHRL, @function
push ebp
mov ebp, esp
.Lt_0880:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 42
call HSHIFTL
add esp, 12
.Lt_0881:
mov esp, ebp
pop ebp
ret
.size _EMITSHRL, .-_EMITSHRL
.balign 16
_EMITSHRI:
.type _EMITSHRI, @function
push ebp
mov ebp, esp
.Lt_0882:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 42
call HSHIFTI
add esp, 12
.Lt_0883:
mov esp, ebp
pop ebp
ret
.size _EMITSHRI, .-_EMITSHRI
.balign 16
_EMITANDL:
.type _EMITANDL, @function
push ebp
mov ebp, esp
.Lt_0884:
push offset Lt_0D77
push offset Lt_0D78
push dword ptr [ebp+8]
call HPREPOPERAND64
add esp, 12
push offset Lt_0D79
push offset Lt_0D7A
push dword ptr [ebp+12]
call HPREPOPERAND64
add esp, 12
push 0
push 5
push offset Lt_0886
push -1
push offset Lt_0D7B
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0D78
push -1
push offset Lt_0D7B
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0D7B
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0D7A
push -1
push offset Lt_0D7B
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0D7B]
call OUTP
add esp, 4
push 0
push 5
push offset Lt_0886
push -1
push offset Lt_0D7B
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0D77
push -1
push offset Lt_0D7B
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0D7B
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0D79
push -1
push offset Lt_0D7B
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0D7B]
call OUTP
add esp, 4
.Lt_0885:
mov esp, ebp
pop ebp
ret
.size _EMITANDL, .-_EMITANDL

.section .bss
.balign 4
	.lcomm	Lt_0D78,12
.balign 4
	.lcomm	Lt_0D77,12
.balign 4
	.lcomm	Lt_0D7A,12
.balign 4
	.lcomm	Lt_0D79,12
.balign 4
	.lcomm	Lt_0D7B,12

.section .text
.balign 16
_EMITANDI:
.type _EMITANDI, @function
push ebp
mov ebp, esp
.Lt_0887:
push -1
push 0
push 0
push -2147483648
push offset Lt_0D7C
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push -1
push 0
push 0
push -2147483648
push offset Lt_0D7D
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
push 0
push 5
push offset Lt_0886
push -1
push offset Lt_0D7E
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0D7C
push -1
push offset Lt_0D7E
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0D7E
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0D7D
push -1
push offset Lt_0D7E
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0D7E]
call OUTP
add esp, 4
.Lt_0888:
mov esp, ebp
pop ebp
ret
.size _EMITANDI, .-_EMITANDI

.section .bss
.balign 4
	.lcomm	Lt_0D7C,12
.balign 4
	.lcomm	Lt_0D7D,12
.balign 4
	.lcomm	Lt_0D7E,12

.section .text
.balign 16
_EMITORL:
.type _EMITORL, @function
push ebp
mov ebp, esp
.Lt_0889:
push offset Lt_0D7F
push offset Lt_0D80
push dword ptr [ebp+8]
call HPREPOPERAND64
add esp, 12
push offset Lt_0D81
push offset Lt_0D82
push dword ptr [ebp+12]
call HPREPOPERAND64
add esp, 12
push 0
push 4
push offset Lt_088B
push -1
push offset Lt_0D83
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0D80
push -1
push offset Lt_0D83
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0D83
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0D82
push -1
push offset Lt_0D83
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0D83]
call OUTP
add esp, 4
push 0
push 4
push offset Lt_088B
push -1
push offset Lt_0D83
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0D7F
push -1
push offset Lt_0D83
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0D83
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0D81
push -1
push offset Lt_0D83
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0D83]
call OUTP
add esp, 4
.Lt_088A:
mov esp, ebp
pop ebp
ret
.size _EMITORL, .-_EMITORL

.section .bss
.balign 4
	.lcomm	Lt_0D80,12
.balign 4
	.lcomm	Lt_0D7F,12
.balign 4
	.lcomm	Lt_0D82,12
.balign 4
	.lcomm	Lt_0D81,12
.balign 4
	.lcomm	Lt_0D83,12

.section .text
.balign 16
_EMITORI:
.type _EMITORI, @function
push ebp
mov ebp, esp
.Lt_088C:
push -1
push 0
push 0
push -2147483648
push offset Lt_0D84
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push -1
push 0
push 0
push -2147483648
push offset Lt_0D85
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
push 0
push 4
push offset Lt_088B
push -1
push offset Lt_0D86
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0D84
push -1
push offset Lt_0D86
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0D86
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0D85
push -1
push offset Lt_0D86
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0D86]
call OUTP
add esp, 4
.Lt_088D:
mov esp, ebp
pop ebp
ret
.size _EMITORI, .-_EMITORI

.section .bss
.balign 4
	.lcomm	Lt_0D84,12
.balign 4
	.lcomm	Lt_0D85,12
.balign 4
	.lcomm	Lt_0D86,12

.section .text
.balign 16
_EMITXORL:
.type _EMITXORL, @function
push ebp
mov ebp, esp
.Lt_088E:
push offset Lt_0D87
push offset Lt_0D88
push dword ptr [ebp+8]
call HPREPOPERAND64
add esp, 12
push offset Lt_0D89
push offset Lt_0D8A
push dword ptr [ebp+12]
call HPREPOPERAND64
add esp, 12
push 0
push 5
push offset Lt_05F6
push -1
push offset Lt_0D8B
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0D88
push -1
push offset Lt_0D8B
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0D8B
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0D8A
push -1
push offset Lt_0D8B
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0D8B]
call OUTP
add esp, 4
push 0
push 5
push offset Lt_05F6
push -1
push offset Lt_0D8B
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0D87
push -1
push offset Lt_0D8B
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0D8B
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0D89
push -1
push offset Lt_0D8B
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0D8B]
call OUTP
add esp, 4
.Lt_088F:
mov esp, ebp
pop ebp
ret
.size _EMITXORL, .-_EMITXORL

.section .bss
.balign 4
	.lcomm	Lt_0D88,12
.balign 4
	.lcomm	Lt_0D87,12
.balign 4
	.lcomm	Lt_0D8A,12
.balign 4
	.lcomm	Lt_0D89,12
.balign 4
	.lcomm	Lt_0D8B,12

.section .text
.balign 16
_EMITXORI:
.type _EMITXORI, @function
push ebp
mov ebp, esp
.Lt_0890:
push -1
push 0
push 0
push -2147483648
push offset Lt_0D8C
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push -1
push 0
push 0
push -2147483648
push offset Lt_0D8D
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
push 0
push 5
push offset Lt_05F6
push -1
push offset Lt_0D8E
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0D8C
push -1
push offset Lt_0D8E
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0D8E
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0D8D
push -1
push offset Lt_0D8E
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0D8E]
call OUTP
add esp, 4
.Lt_0891:
mov esp, ebp
pop ebp
ret
.size _EMITXORI, .-_EMITXORI

.section .bss
.balign 4
	.lcomm	Lt_0D8C,12
.balign 4
	.lcomm	Lt_0D8D,12
.balign 4
	.lcomm	Lt_0D8E,12

.section .text
.balign 16
_EMITEQVL:
.type _EMITEQVL, @function
push ebp
mov ebp, esp
.Lt_0892:
push offset Lt_0D8F
push offset Lt_0D90
push dword ptr [ebp+8]
call HPREPOPERAND64
add esp, 12
push offset Lt_0D91
push offset Lt_0D92
push dword ptr [ebp+12]
call HPREPOPERAND64
add esp, 12
push 0
push 5
push offset Lt_05F6
push -1
push offset Lt_0D93
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0D90
push -1
push offset Lt_0D93
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0D93
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0D92
push -1
push offset Lt_0D93
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0D93]
call OUTP
add esp, 4
push 0
push 5
push offset Lt_05F6
push -1
push offset Lt_0D93
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0D8F
push -1
push offset Lt_0D93
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0D93
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0D91
push -1
push offset Lt_0D93
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0D93]
call OUTP
add esp, 4
push 0
push 5
push offset Lt_0894
push -1
push offset Lt_0D93
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0D90
push -1
push offset Lt_0D93
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0D93]
call OUTP
add esp, 4
push 0
push 5
push offset Lt_0894
push -1
push offset Lt_0D93
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0D8F
push -1
push offset Lt_0D93
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0D93]
call OUTP
add esp, 4
.Lt_0893:
mov esp, ebp
pop ebp
ret
.size _EMITEQVL, .-_EMITEQVL

.section .bss
.balign 4
	.lcomm	Lt_0D90,12
.balign 4
	.lcomm	Lt_0D8F,12
.balign 4
	.lcomm	Lt_0D92,12
.balign 4
	.lcomm	Lt_0D91,12
.balign 4
	.lcomm	Lt_0D93,12

.section .text
.balign 16
_EMITEQVI:
.type _EMITEQVI, @function
push ebp
mov ebp, esp
.Lt_0895:
push -1
push 0
push 0
push -2147483648
push offset Lt_0D94
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push -1
push 0
push 0
push -2147483648
push offset Lt_0D95
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
push 0
push 5
push offset Lt_05F6
push -1
push offset Lt_0D96
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0D94
push -1
push offset Lt_0D96
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0D96
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0D95
push -1
push offset Lt_0D96
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0D96]
call OUTP
add esp, 4
push 0
push 5
push offset Lt_0894
push -1
push offset Lt_0D96
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0D94
push -1
push offset Lt_0D96
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0D96]
call OUTP
add esp, 4
.Lt_0896:
mov esp, ebp
pop ebp
ret
.size _EMITEQVI, .-_EMITEQVI

.section .bss
.balign 4
	.lcomm	Lt_0D94,12
.balign 4
	.lcomm	Lt_0D95,12
.balign 4
	.lcomm	Lt_0D96,12

.section .text
.balign 16
_EMITIMPL:
.type _EMITIMPL, @function
push ebp
mov ebp, esp
.Lt_0897:
push offset Lt_0D97
push offset Lt_0D98
push dword ptr [ebp+8]
call HPREPOPERAND64
add esp, 12
push offset Lt_0D99
push offset Lt_0D9A
push dword ptr [ebp+12]
call HPREPOPERAND64
add esp, 12
push 0
push 5
push offset Lt_0894
push -1
push offset Lt_0D9B
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0D98
push -1
push offset Lt_0D9B
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0D9B]
call OUTP
add esp, 4
push 0
push 5
push offset Lt_0894
push -1
push offset Lt_0D9B
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0D97
push -1
push offset Lt_0D9B
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0D9B]
call OUTP
add esp, 4
push 0
push 4
push offset Lt_088B
push -1
push offset Lt_0D9B
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0D98
push -1
push offset Lt_0D9B
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0D9B
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0D9A
push -1
push offset Lt_0D9B
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0D9B]
call OUTP
add esp, 4
push 0
push 4
push offset Lt_088B
push -1
push offset Lt_0D9B
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0D97
push -1
push offset Lt_0D9B
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0D9B
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0D99
push -1
push offset Lt_0D9B
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0D9B]
call OUTP
add esp, 4
.Lt_0898:
mov esp, ebp
pop ebp
ret
.size _EMITIMPL, .-_EMITIMPL

.section .bss
.balign 4
	.lcomm	Lt_0D98,12
.balign 4
	.lcomm	Lt_0D97,12
.balign 4
	.lcomm	Lt_0D9A,12
.balign 4
	.lcomm	Lt_0D99,12
.balign 4
	.lcomm	Lt_0D9B,12

.section .text
.balign 16
_EMITIMPI:
.type _EMITIMPI, @function
push ebp
mov ebp, esp
.Lt_0899:
push -1
push 0
push 0
push -2147483648
push offset Lt_0D9C
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push -1
push 0
push 0
push -2147483648
push offset Lt_0D9D
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
push 0
push 5
push offset Lt_0894
push -1
push offset Lt_0D9E
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0D9C
push -1
push offset Lt_0D9E
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0D9E]
call OUTP
add esp, 4
push 0
push 4
push offset Lt_088B
push -1
push offset Lt_0D9E
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0D9C
push -1
push offset Lt_0D9E
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0D9E
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0D9D
push -1
push offset Lt_0D9E
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0D9E]
call OUTP
add esp, 4
.Lt_089A:
mov esp, ebp
pop ebp
ret
.size _EMITIMPI, .-_EMITIMPI

.section .bss
.balign 4
	.lcomm	Lt_0D9C,12
.balign 4
	.lcomm	Lt_0D9D,12
.balign 4
	.lcomm	Lt_0D9E,12

.section .text
.balign 16
_EMITATN2:
.type _EMITATN2, @function
push ebp
mov ebp, esp
.Lt_089B:
push -1
push 0
push 0
push -2147483648
push offset Lt_0D9F
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax], 4
je .Lt_089E
push 0
push 5
push offset Lt_05CE
push -1
push offset Lt_0DA0
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0D9F
push -1
push offset Lt_0DA0
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0DA0]
call OUTP
add esp, 4
jmp .Lt_089D
.Lt_089E:
push offset Lt_0175
call OUTP
add esp, 4
.Lt_089D:
push offset Lt_0155
call OUTP
add esp, 4
.Lt_089C:
mov esp, ebp
pop ebp
ret
.size _EMITATN2, .-_EMITATN2

.section .bss
.balign 4
	.lcomm	Lt_0D9F,12
.balign 4
	.lcomm	Lt_0DA0,12

.section .text
.balign 16
_EMITPOW:
.type _EMITPOW, @function
push ebp
mov ebp, esp
.Lt_089F:
push -1
push 0
push 0
push -2147483648
push offset Lt_0DA1
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax], 4
je .Lt_08A2
push 0
push 5
push offset Lt_05CE
push -1
push offset Lt_0DA2
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0DA1
push -1
push offset Lt_0DA2
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0DA2]
call OUTP
add esp, 4
push offset Lt_0175
call OUTP
add esp, 4
.Lt_08A2:
.Lt_08A1:
push offset Lt_011E
call OUTP
add esp, 4
push offset Lt_0179
call OUTP
add esp, 4
push offset Lt_08A3
call OUTP
add esp, 4
push offset Lt_0159
call OUTP
add esp, 4
push offset Lt_08A4
call OUTP
add esp, 4
push offset Lt_0175
call OUTP
add esp, 4
push offset Lt_011D
call OUTP
add esp, 4
push offset Lt_0148
call OUTP
add esp, 4
push offset Lt_0120
call OUTP
add esp, 4
push offset Lt_015D
call OUTP
add esp, 4
push offset Lt_08A5
call OUTP
add esp, 4
.Lt_08A0:
mov esp, ebp
pop ebp
ret
.size _EMITPOW, .-_EMITPOW

.section .bss
.balign 4
	.lcomm	Lt_0DA1,12
.balign 4
	.lcomm	Lt_0DA2,12

.section .text
.balign 16
HCMPL:
.type HCMPL, @function
push ebp
mov ebp, esp
sub esp, 36
.Lt_08A6:
push offset Lt_0DA3
push offset Lt_0DA4
push dword ptr [ebp+28]
call HPREPOPERAND64
add esp, 12
push offset Lt_0DA5
push offset Lt_0DA6
push dword ptr [ebp+32]
call HPREPOPERAND64
add esp, 12
cmp dword ptr [ebp+12], 0
jne .Lt_08A9
push 0
push 0
call SYMBUNIQUELABEL
push eax
push -1
push offset Lt_0DA7
call fb_StrAssign
add esp, 20
jmp .Lt_08A8
.Lt_08A9:
push 0
push 0
push dword ptr [ebp+12]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
push -1
push offset Lt_0DA7
call fb_StrAssign
add esp, 20
.Lt_08A8:
push 0
push 5
push offset Lt_0528
push -1
push offset Lt_0DA8
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0DA3
push -1
push offset Lt_0DA8
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0DA8
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0DA5
push -1
push offset Lt_0DA8
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0DA8]
call OUTP
add esp, 4
push 0
push 0
call SYMBUNIQUELABEL
push eax
push -1
push offset Lt_0DA9
call fb_StrAssign
add esp, 20
cmp dword ptr [ebp+8], 0
je .Lt_08AB
push -1
push 0
push 0
push -2147483648
push offset Lt_0DAA
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push offset Lt_053B
push dword ptr [Lt_0DAA]
call HMOV
add esp, 8
.Lt_08AB:
.Lt_08AA:
push 0
push -1
push 0
push dword ptr [ebp+16]
push 2
push offset Lt_08AC
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_0DA8
call fb_StrAssign
add esp, 20
cmp dword ptr [ebp+36], 0
jne .Lt_08AF
push dword ptr [Lt_0DA7]
push dword ptr [Lt_0DA8]
call HBRANCH
add esp, 8
jmp .Lt_08AE
.Lt_08AF:
push dword ptr [Lt_0DA9]
push dword ptr [Lt_0DA8]
call HBRANCH
add esp, 8
.Lt_08AE:
push 0
push dword ptr [ebp+20]
call fb_StrLen
add esp, 8
test eax, eax
jle .Lt_08B1
push 0
push -1
push 0
push dword ptr [ebp+20]
push 2
push offset Lt_08AC
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
lea eax, [ebp-36]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_0DA8
call fb_StrAssign
add esp, 20
push dword ptr [Lt_0DA9]
push dword ptr [Lt_0DA8]
call HBRANCH
add esp, 8
.Lt_08B1:
.Lt_08B0:
push 0
push 5
push offset Lt_0528
push -1
push offset Lt_0DA8
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0DA4
push -1
push offset Lt_0DA8
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0DA8
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0DA6
push -1
push offset Lt_0DA8
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0DA8]
call OUTP
add esp, 4
push 0
push -1
push 0
push dword ptr [ebp+24]
push 2
push offset Lt_08AC
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ebp-24]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_0DA8
call fb_StrAssign
add esp, 20
push dword ptr [Lt_0DA7]
push dword ptr [Lt_0DA8]
call HBRANCH
add esp, 8
push dword ptr [Lt_0DA9]
call HLABEL
add esp, 4
cmp dword ptr [ebp+8], 0
je .Lt_08B5
push 0
push 5
push offset Lt_05F6
push -1
push offset Lt_0DA8
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0DAA
push -1
push offset Lt_0DA8
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0DA8
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0DAA
push -1
push offset Lt_0DA8
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0DA8]
call OUTP
add esp, 4
push dword ptr [Lt_0DA7]
call HLABEL
add esp, 4
.Lt_08B5:
.Lt_08B4:
.Lt_08A7:
mov esp, ebp
pop ebp
ret
.size HCMPL, .-HCMPL

.section .bss
.balign 4
	.lcomm	Lt_0DA4,12
.balign 4
	.lcomm	Lt_0DA3,12
.balign 4
	.lcomm	Lt_0DA6,12
.balign 4
	.lcomm	Lt_0DA5,12
.balign 4
	.lcomm	Lt_0DAA,12
.balign 4
	.lcomm	Lt_0DA8,12
.balign 4
	.lcomm	Lt_0DA7,12
.balign 4
	.lcomm	Lt_0DA9,12

.section .text
.balign 16
HCMPI:
.type HCMPI, @function
push ebp
mov ebp, esp
sub esp, 36
push ebx
.Lt_08B6:
push -1
push 0
push 0
push -2147483648
push offset Lt_0DAB
push dword ptr [ebp+20]
call HPREPOPERAND
add esp, 24
push -1
push 0
push 0
push -2147483648
push offset Lt_0DAC
push dword ptr [ebp+24]
call HPREPOPERAND
add esp, 24
cmp dword ptr [ebp+12], 0
jne .Lt_08B9
push 0
push 0
call SYMBUNIQUELABEL
push eax
push -1
push offset Lt_0DAD
call fb_StrAssign
add esp, 20
jmp .Lt_08B8
.Lt_08B9:
push 0
push 0
push dword ptr [ebp+12]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
push -1
push offset Lt_0DAD
call fb_StrAssign
add esp, 20
.Lt_08B8:
mov dword ptr [Lt_0DAE], 0
mov eax, dword ptr [ebp+24]
mov ebx, dword ptr [eax]
test ebx, ebx
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+20]
mov ecx, dword ptr [eax]
cmp ecx, 4
sete cl
shr ecx, 1
sbb ecx, ecx
and ebx, ecx
je .Lt_08BB
mov ecx, dword ptr [ebp+24]
cmp dword ptr [ecx+28], 0
jne .Lt_08BD
cmp dword ptr [ecx+24], 0
jne .Lt_08BD
.Lt_0DB1:
mov dword ptr [Lt_0DAE], -1
.Lt_08BD:
.Lt_08BC:
.Lt_08BB:
.Lt_08BA:
cmp dword ptr [Lt_0DAE], 0
je .Lt_08BF
push 0
push 6
push offset Lt_08C0
push -1
push offset Lt_0DB2
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0DAB
push -1
push offset Lt_0DB2
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0DB2
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0DAB
push -1
push offset Lt_0DB2
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0DB2]
call OUTP
add esp, 4
jmp .Lt_08BE
.Lt_08BF:
push 0
push 5
push offset Lt_0528
push -1
push offset Lt_0DB2
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0DAB
push -1
push offset Lt_0DB2
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0DB2
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0DAC
push -1
push offset Lt_0DB2
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0DB2]
call OUTP
add esp, 4
.Lt_08BE:
cmp dword ptr [ebp+8], 0
jne .Lt_08C2
push 0
push -1
push 0
push dword ptr [ebp+16]
push 2
push offset Lt_08AC
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_0DB2
call fb_StrAssign
add esp, 20
push dword ptr [Lt_0DAD]
push dword ptr [Lt_0DB2]
call HBRANCH
add esp, 8
jmp .Lt_08B7
.Lt_08C2:
.Lt_08C1:
push -1
push 0
push 0
push -2147483648
push offset Lt_0DB3
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
mov eax, dword ptr [ENV+112]
cmp eax, 1
setge al
shr eax, 1
sbb eax, eax
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ecx]
cmp ebx, 4
sete bl
shr ebx, 1
sbb ebx, ebx
and eax, ebx
je .Lt_08C5
push 0
push 0
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+12]
push 1
call HGETREGNAME
add esp, 8
push eax
push -1
push offset Lt_0DB6
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+12]
cmp ebx, 2
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+12]
cmp ecx, 1
sete cl
shr ecx, 1
sbb ecx, ecx
or ebx, ecx
je .Lt_08C7
push 0
push 0
call HISREGFREE
add esp, 8
mov dword ptr [Lt_0DB9], eax
cmp dword ptr [Lt_0DB9], 0
jne .Lt_08C9
push 0
push 11
push offset Lt_08CA
push -1
push offset Lt_0DB2
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0DB3
push -1
push offset Lt_0DB2
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0DB2]
call OUTP
add esp, 4
.Lt_08C9:
.Lt_08C8:
push 0
push -1
push 4
push offset Lt_08CC
push -1
push 0
push dword ptr [ebp+16]
push 4
push offset Lt_08CB
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ebp-24]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_0DB2
call fb_StrAssign
add esp, 20
push dword ptr [Lt_0DB2]
call OUTP
add esp, 4
cmp dword ptr [Lt_0DB9], 0
jne .Lt_08D0
push 0
push 11
push offset Lt_08CA
push -1
push offset Lt_0DB2
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0DB3
push -1
push offset Lt_0DB2
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0DB2]
call OUTP
add esp, 4
jmp .Lt_08CF
.Lt_08D0:
push offset Lt_007C
push dword ptr [Lt_0DB3]
call HMOV
add esp, 8
.Lt_08CF:
jmp .Lt_08C6
.Lt_08C7:
push 0
push -1
push -1
push offset Lt_0DB6
push -1
push 2
push offset Lt_03B0
push -1
push 0
push dword ptr [ebp+16]
push 4
push offset Lt_08CB
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ebp-24]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
lea eax, [ebp-36]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_0DB2
call fb_StrAssign
add esp, 20
push dword ptr [Lt_0DB2]
call OUTP
add esp, 4
.Lt_08C6:
push 0
push 5
push offset Lt_0784
push -1
push offset Lt_0DB2
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0DB3
push -1
push offset Lt_0DB2
call fb_StrConcatAssign
add esp, 20
push 0
push 4
push offset Lt_08D4
push -1
push offset Lt_0DB2
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0DB2]
call OUTP
add esp, 4
push 0
push 5
push offset Lt_068D
push -1
push offset Lt_0DB2
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0DB3
push -1
push offset Lt_0DB2
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0DB2
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0DB3
push -1
push offset Lt_0DB2
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0DB2]
call OUTP
add esp, 4
jmp .Lt_08C4
.Lt_08C5:
push 0
push 5
push offset Lt_03BF
push -1
push offset Lt_0DB2
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0DB3
push -1
push offset Lt_0DB2
call fb_StrConcatAssign
add esp, 20
push 0
push 5
push offset Lt_08D5
push -1
push offset Lt_0DB2
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0DB2]
call OUTP
add esp, 4
push 0
push -1
push 0
push dword ptr [ebp+16]
push 2
push offset Lt_08AC
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_0DB2
call fb_StrAssign
add esp, 20
push dword ptr [Lt_0DAD]
push dword ptr [Lt_0DB2]
call HBRANCH
add esp, 8
push 0
push 5
push offset Lt_05F6
push -1
push offset Lt_0DB2
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0DB3
push -1
push offset Lt_0DB2
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0DB2
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0DB3
push -1
push offset Lt_0DB2
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0DB2]
call OUTP
add esp, 4
push dword ptr [Lt_0DAD]
call HLABEL
add esp, 4
.Lt_08C4:
.Lt_08B7:
pop ebx
mov esp, ebp
pop ebp
ret
.size HCMPI, .-HCMPI

.section .bss
.balign 4
	.lcomm	Lt_0DB3,12
.balign 4
	.lcomm	Lt_0DB6,12
.balign 4
	.lcomm	Lt_0DAB,12
.balign 4
	.lcomm	Lt_0DAC,12
.balign 4
	.lcomm	Lt_0DB2,12
.balign 4
	.lcomm	Lt_0DAD,12
.balign 4
	.lcomm	Lt_0DB9,4
.balign 4
	.lcomm	Lt_0DAE,4

.section .text
.balign 16
HCMPF:
.type HCMPF, @function
push ebp
mov ebp, esp
sub esp, 36
push ebx
.Lt_08D7:
push -1
push 0
push 0
push -2147483648
push offset Lt_0DBB
push dword ptr [ebp+24]
call HPREPOPERAND
add esp, 24
push -1
push 0
push 0
push -2147483648
push offset Lt_0DBC
push dword ptr [ebp+28]
call HPREPOPERAND
add esp, 24
cmp dword ptr [ebp+12], 0
jne .Lt_08DA
push 0
push 0
call SYMBUNIQUELABEL
push eax
push -1
push offset Lt_0DBD
call fb_StrAssign
add esp, 20
jmp .Lt_08D9
.Lt_08DA:
push 0
push 0
push dword ptr [ebp+12]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
push -1
push offset Lt_0DBD
call fb_StrAssign
add esp, 20
.Lt_08D9:
mov eax, dword ptr [ebp+28]
cmp dword ptr [eax], 4
jne .Lt_08DC
push offset Lt_0131
call OUTP
add esp, 4
jmp .Lt_08DB
.Lt_08DC:
mov eax, dword ptr [ebp+28]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_08DD
mov dword ptr [ebp-4], 22
jmp .Lt_0DBA
.Lt_08DD:
mov ebx, dword ptr [ebp+28]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0DBA:
mov eax, dword ptr [ebp-4]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax], 1
jne .Lt_08E0
push 0
push 7
push offset Lt_08E1
push -1
push offset Lt_0DBE
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0DBC
push -1
push offset Lt_0DBE
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0DBE]
call OUTP
add esp, 4
jmp .Lt_08DF
.Lt_08E0:
push 0
push 8
push offset Lt_08E2
push -1
push offset Lt_0DBE
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0DBC
push -1
push offset Lt_0DBE
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0DBE]
call OUTP
add esp, 4
.Lt_08DF:
.Lt_08DB:
push 5
push 0
call HISREGFREE
add esp, 8
mov dword ptr [Lt_0DBF], eax
cmp dword ptr [ebp+8], 0
je .Lt_08E4
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+12]
cmp ebx, 5
sete bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [Lt_0DBF], ebx
.Lt_08E4:
.Lt_08E3:
cmp dword ptr [Lt_0DBF], 0
jne .Lt_08E6
push offset Lt_0081
call HPUSH
add esp, 4
.Lt_08E6:
.Lt_08E5:
push offset Lt_05F3
call OUTP
add esp, 4
push 0
push dword ptr [ebp+20]
call fb_StrLen
add esp, 8
test eax, eax
jle .Lt_08E8
push 0
push -1
push 0
push dword ptr [ebp+20]
push 10
push offset Lt_08E9
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_0DBE
call fb_StrAssign
add esp, 20
push dword ptr [Lt_0DBE]
call OUTP
add esp, 4
jmp .Lt_08E7
.Lt_08E8:
push offset Lt_0262
call OUTP
add esp, 4
.Lt_08E7:
cmp dword ptr [Lt_0DBF], 0
jne .Lt_08EC
push offset Lt_0081
call HPOP
add esp, 4
.Lt_08EC:
.Lt_08EB:
cmp dword ptr [ebp+8], 0
jne .Lt_08EE
push 0
push -1
push 0
push dword ptr [ebp+16]
push 2
push offset Lt_08AC
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_0DBE
call fb_StrAssign
add esp, 20
push dword ptr [Lt_0DBD]
push dword ptr [Lt_0DBE]
call HBRANCH
add esp, 8
jmp .Lt_08D8
.Lt_08EE:
.Lt_08ED:
push -1
push 0
push 0
push -2147483648
push offset Lt_0DC1
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
cmp dword ptr [ENV+112], 1
jl .Lt_08F1
push 0
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax+12]
push 1
call HGETREGNAME
add esp, 8
push eax
push -1
push offset Lt_0DC2
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+12]
cmp ebx, 2
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+12]
cmp ecx, 1
sete cl
shr ecx, 1
sbb ecx, ecx
or ebx, ecx
je .Lt_08F3
push 0
push 0
call HISREGFREE
add esp, 8
mov dword ptr [Lt_0DC5], eax
cmp dword ptr [Lt_0DC5], 0
jne .Lt_08F5
push 0
push 11
push offset Lt_08CA
push -1
push offset Lt_0DBE
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0DC1
push -1
push offset Lt_0DBE
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0DBE]
call OUTP
add esp, 4
.Lt_08F5:
.Lt_08F4:
push 0
push -1
push 4
push offset Lt_08F6
push -1
push 0
push dword ptr [ebp+16]
push 4
push offset Lt_08CB
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ebp-24]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_0DBE
call fb_StrAssign
add esp, 20
push dword ptr [Lt_0DBE]
call OUTP
add esp, 4
cmp dword ptr [Lt_0DC5], 0
jne .Lt_08FA
push 0
push 11
push offset Lt_08CA
push -1
push offset Lt_0DBE
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0DC1
push -1
push offset Lt_0DBE
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0DBE]
call OUTP
add esp, 4
jmp .Lt_08F9
.Lt_08FA:
push offset Lt_007C
push dword ptr [Lt_0DC1]
call HMOV
add esp, 8
.Lt_08F9:
jmp .Lt_08F2
.Lt_08F3:
push 0
push -1
push -1
push offset Lt_0DC2
push -1
push 2
push offset Lt_03B0
push -1
push 0
push dword ptr [ebp+16]
push 4
push offset Lt_08CB
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ebp-24]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
lea eax, [ebp-36]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_0DBE
call fb_StrAssign
add esp, 20
push dword ptr [Lt_0DBE]
call OUTP
add esp, 4
.Lt_08F2:
push 0
push 5
push offset Lt_0784
push -1
push offset Lt_0DBE
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0DC1
push -1
push offset Lt_0DBE
call fb_StrConcatAssign
add esp, 20
push 0
push 4
push offset Lt_08D4
push -1
push offset Lt_0DBE
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0DBE]
call OUTP
add esp, 4
push 0
push 5
push offset Lt_068D
push -1
push offset Lt_0DBE
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0DC1
push -1
push offset Lt_0DBE
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0DBE
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0DC1
push -1
push offset Lt_0DBE
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0DBE]
call OUTP
add esp, 4
jmp .Lt_08F0
.Lt_08F1:
push 0
push 5
push offset Lt_03BF
push -1
push offset Lt_0DBE
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0DC1
push -1
push offset Lt_0DBE
call fb_StrConcatAssign
add esp, 20
push 0
push 5
push offset Lt_08D5
push -1
push offset Lt_0DBE
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0DBE]
call OUTP
add esp, 4
push 0
push -1
push 0
push dword ptr [ebp+16]
push 2
push offset Lt_08AC
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_0DBE
call fb_StrAssign
add esp, 20
push dword ptr [Lt_0DBD]
push dword ptr [Lt_0DBE]
call HBRANCH
add esp, 8
push 0
push 5
push offset Lt_05F6
push -1
push offset Lt_0DBE
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0DC1
push -1
push offset Lt_0DBE
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0DBE
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0DC1
push -1
push offset Lt_0DBE
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0DBE]
call OUTP
add esp, 4
push dword ptr [Lt_0DBD]
call HLABEL
add esp, 4
.Lt_08F0:
.Lt_08D8:
pop ebx
mov esp, ebp
pop ebp
ret
.size HCMPF, .-HCMPF

.section .bss
.balign 4
	.lcomm	Lt_0DC1,12
.balign 4
	.lcomm	Lt_0DC2,12
.balign 4
	.lcomm	Lt_0DBB,12
.balign 4
	.lcomm	Lt_0DBC,12
.balign 4
	.lcomm	Lt_0DBE,12
.balign 4
	.lcomm	Lt_0DBD,12
.balign 4
	.lcomm	Lt_0DBF,4
.balign 4
	.lcomm	Lt_0DC5,4

.section .text
.balign 16
_EMITCGTL:
.type _EMITCGTL, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_08FF:
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_0901
mov dword ptr [ebp-4], 22
jmp .Lt_0DC6
.Lt_0901:
mov ebx, dword ptr [ebp+16]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0DC6:
mov eax, dword ptr [ebp-4]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+8], 0
je .Lt_0904
push 0
push 2
push offset Lt_0905
push -1
push offset Lt_0DC7
call fb_StrAssign
add esp, 20
push 0
push 2
push offset Lt_0906
push -1
push offset Lt_0DC8
call fb_StrAssign
add esp, 20
jmp .Lt_0903
.Lt_0904:
push 0
push 2
push offset Lt_0907
push -1
push offset Lt_0DC7
call fb_StrAssign
add esp, 20
push 0
push 2
push offset Lt_0908
push -1
push offset Lt_0DC8
call fb_StrAssign
add esp, 20
.Lt_0903:
push 0
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push offset Lt_0907
push dword ptr [Lt_0DC8]
push dword ptr [Lt_0DC7]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HCMPL
add esp, 32
.Lt_0900:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITCGTL, .-_EMITCGTL

.section .bss
.balign 4
	.lcomm	Lt_0DC7,12
.balign 4
	.lcomm	Lt_0DC8,12

.section .text
.balign 16
_EMITCGTI:
.type _EMITCGTI, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0909:
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_090B
mov dword ptr [ebp-4], 22
jmp .Lt_0DC9
.Lt_090B:
mov ebx, dword ptr [ebp+16]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0DC9:
mov eax, dword ptr [ebp-4]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+8], 0
je .Lt_090E
push 0
push 2
push offset Lt_0905
push -1
push offset Lt_0DCA
call fb_StrAssign
add esp, 20
jmp .Lt_090D
.Lt_090E:
push 0
push 2
push offset Lt_0907
push -1
push offset Lt_0DCA
call fb_StrAssign
add esp, 20
.Lt_090D:
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [Lt_0DCA]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HCMPI
add esp, 20
.Lt_090A:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITCGTI, .-_EMITCGTI

.section .bss
.balign 4
	.lcomm	Lt_0DCA,12

.section .text
.balign 16
_EMITCGTF:
.type _EMITCGTF, @function
push ebp
mov ebp, esp
.Lt_090F:
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push offset Lt_0912
push offset Lt_0911
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HCMPF
add esp, 24
.Lt_0910:
mov esp, ebp
pop ebp
ret
.size _EMITCGTF, .-_EMITCGTF
.balign 16
_EMITCLTL:
.type _EMITCLTL, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0913:
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_0915
mov dword ptr [ebp-4], 22
jmp .Lt_0DCB
.Lt_0915:
mov ebx, dword ptr [ebp+16]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0DCB:
mov eax, dword ptr [ebp-4]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+8], 0
je .Lt_0918
push 0
push 2
push offset Lt_0906
push -1
push offset Lt_0DCC
call fb_StrAssign
add esp, 20
push 0
push 2
push offset Lt_0905
push -1
push offset Lt_0DCD
call fb_StrAssign
add esp, 20
jmp .Lt_0917
.Lt_0918:
push 0
push 2
push offset Lt_0908
push -1
push offset Lt_0DCC
call fb_StrAssign
add esp, 20
push 0
push 2
push offset Lt_0907
push -1
push offset Lt_0DCD
call fb_StrAssign
add esp, 20
.Lt_0917:
push 0
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push offset Lt_0908
push dword ptr [Lt_0DCD]
push dword ptr [Lt_0DCC]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HCMPL
add esp, 32
.Lt_0914:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITCLTL, .-_EMITCLTL

.section .bss
.balign 4
	.lcomm	Lt_0DCC,12
.balign 4
	.lcomm	Lt_0DCD,12

.section .text
.balign 16
_EMITCLTI:
.type _EMITCLTI, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0919:
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_091B
mov dword ptr [ebp-4], 22
jmp .Lt_0DCE
.Lt_091B:
mov ebx, dword ptr [ebp+16]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0DCE:
mov eax, dword ptr [ebp-4]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+8], 0
je .Lt_091E
push 0
push 2
push offset Lt_0906
push -1
push offset Lt_0DCF
call fb_StrAssign
add esp, 20
jmp .Lt_091D
.Lt_091E:
push 0
push 2
push offset Lt_0908
push -1
push offset Lt_0DCF
call fb_StrAssign
add esp, 20
.Lt_091D:
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [Lt_0DCF]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HCMPI
add esp, 20
.Lt_091A:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITCLTI, .-_EMITCLTI

.section .bss
.balign 4
	.lcomm	Lt_0DCF,12

.section .text
.balign 16
_EMITCLTF:
.type _EMITCLTF, @function
push ebp
mov ebp, esp
.Lt_091F:
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push offset Lt_0922
push offset Lt_0921
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HCMPF
add esp, 24
.Lt_0920:
mov esp, ebp
pop ebp
ret
.size _EMITCLTF, .-_EMITCLTF
.balign 16
_EMITCEQL:
.type _EMITCEQL, @function
push ebp
mov ebp, esp
.Lt_0923:
push -1
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push offset Lt_0926
push offset Lt_0000
push offset Lt_0925
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HCMPL
add esp, 32
.Lt_0924:
mov esp, ebp
pop ebp
ret
.size _EMITCEQL, .-_EMITCEQL
.balign 16
_EMITCEQI:
.type _EMITCEQI, @function
push ebp
mov ebp, esp
.Lt_0927:
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push offset Lt_0926
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HCMPI
add esp, 20
.Lt_0928:
mov esp, ebp
pop ebp
ret
.size _EMITCEQI, .-_EMITCEQI
.balign 16
_EMITCEQF:
.type _EMITCEQF, @function
push ebp
mov ebp, esp
.Lt_0929:
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push offset Lt_092B
push offset Lt_0921
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HCMPF
add esp, 24
.Lt_092A:
mov esp, ebp
pop ebp
ret
.size _EMITCEQF, .-_EMITCEQF
.balign 16
_EMITCNEL:
.type _EMITCNEL, @function
push ebp
mov ebp, esp
.Lt_092C:
push 0
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push offset Lt_0925
push offset Lt_0000
push offset Lt_0925
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HCMPL
add esp, 32
.Lt_092D:
mov esp, ebp
pop ebp
ret
.size _EMITCNEL, .-_EMITCNEL
.balign 16
_EMITCNEI:
.type _EMITCNEI, @function
push ebp
mov ebp, esp
.Lt_092E:
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push offset Lt_0925
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HCMPI
add esp, 20
.Lt_092F:
mov esp, ebp
pop ebp
ret
.size _EMITCNEI, .-_EMITCNEI
.balign 16
_EMITCNEF:
.type _EMITCNEF, @function
push ebp
mov ebp, esp
.Lt_0930:
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push offset Lt_092B
push offset Lt_0911
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HCMPF
add esp, 24
.Lt_0931:
mov esp, ebp
pop ebp
ret
.size _EMITCNEF, .-_EMITCNEF
.balign 16
_EMITCLEL:
.type _EMITCLEL, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0932:
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_0934
mov dword ptr [ebp-4], 22
jmp .Lt_0DD0
.Lt_0934:
mov ebx, dword ptr [ebp+16]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0DD0:
mov eax, dword ptr [ebp-4]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+8], 0
je .Lt_0937
push 0
push 2
push offset Lt_0906
push -1
push offset Lt_0DD1
call fb_StrAssign
add esp, 20
push 0
push 2
push offset Lt_0905
push -1
push offset Lt_0DD2
call fb_StrAssign
add esp, 20
jmp .Lt_0936
.Lt_0937:
push 0
push 2
push offset Lt_0908
push -1
push offset Lt_0DD1
call fb_StrAssign
add esp, 20
push 0
push 2
push offset Lt_0907
push -1
push offset Lt_0DD2
call fb_StrAssign
add esp, 20
.Lt_0936:
push 0
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push offset Lt_0938
push dword ptr [Lt_0DD2]
push dword ptr [Lt_0DD1]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HCMPL
add esp, 32
.Lt_0933:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITCLEL, .-_EMITCLEL

.section .bss
.balign 4
	.lcomm	Lt_0DD1,12
.balign 4
	.lcomm	Lt_0DD2,12

.section .text
.balign 16
_EMITCLEI:
.type _EMITCLEI, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0939:
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_093B
mov dword ptr [ebp-4], 22
jmp .Lt_0DD3
.Lt_093B:
mov ebx, dword ptr [ebp+16]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0DD3:
mov eax, dword ptr [ebp-4]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+8], 0
je .Lt_093E
push 0
push 3
push offset Lt_093F
push -1
push offset Lt_0DD4
call fb_StrAssign
add esp, 20
jmp .Lt_093D
.Lt_093E:
push 0
push 3
push offset Lt_0938
push -1
push offset Lt_0DD4
call fb_StrAssign
add esp, 20
.Lt_093D:
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [Lt_0DD4]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HCMPI
add esp, 20
.Lt_093A:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITCLEI, .-_EMITCLEI

.section .bss
.balign 4
	.lcomm	Lt_0DD4,12

.section .text
.balign 16
_EMITCLEF:
.type _EMITCLEF, @function
push ebp
mov ebp, esp
.Lt_0940:
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push offset Lt_0912
push offset Lt_0921
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HCMPF
add esp, 24
.Lt_0941:
mov esp, ebp
pop ebp
ret
.size _EMITCLEF, .-_EMITCLEF
.balign 16
_EMITCGEL:
.type _EMITCGEL, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0942:
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_0944
mov dword ptr [ebp-4], 22
jmp .Lt_0DD5
.Lt_0944:
mov ebx, dword ptr [ebp+16]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0DD5:
mov eax, dword ptr [ebp-4]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+8], 0
je .Lt_0947
push 0
push 2
push offset Lt_0905
push -1
push offset Lt_0DD6
call fb_StrAssign
add esp, 20
push 0
push 2
push offset Lt_0906
push -1
push offset Lt_0DD7
call fb_StrAssign
add esp, 20
jmp .Lt_0946
.Lt_0947:
push 0
push 2
push offset Lt_0907
push -1
push offset Lt_0DD6
call fb_StrAssign
add esp, 20
push 0
push 2
push offset Lt_0908
push -1
push offset Lt_0DD7
call fb_StrAssign
add esp, 20
.Lt_0946:
push 0
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push offset Lt_0948
push dword ptr [Lt_0DD7]
push dword ptr [Lt_0DD6]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HCMPL
add esp, 32
.Lt_0943:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITCGEL, .-_EMITCGEL

.section .bss
.balign 4
	.lcomm	Lt_0DD6,12
.balign 4
	.lcomm	Lt_0DD7,12

.section .text
.balign 16
_EMITCGEI:
.type _EMITCGEI, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0949:
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_094B
mov dword ptr [ebp-4], 22
jmp .Lt_0DD8
.Lt_094B:
mov ebx, dword ptr [ebp+16]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0DD8:
mov eax, dword ptr [ebp-4]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+8], 0
je .Lt_094E
push 0
push 3
push offset Lt_094F
push -1
push offset Lt_0DD9
call fb_StrAssign
add esp, 20
jmp .Lt_094D
.Lt_094E:
push 0
push 3
push offset Lt_0948
push -1
push offset Lt_0DD9
call fb_StrAssign
add esp, 20
.Lt_094D:
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [Lt_0DD9]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HCMPI
add esp, 20
.Lt_094A:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITCGEI, .-_EMITCGEI

.section .bss
.balign 4
	.lcomm	Lt_0DD9,12

.section .text
.balign 16
_EMITCGEF:
.type _EMITCGEF, @function
push ebp
mov ebp, esp
.Lt_0950:
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push offset Lt_0000
push offset Lt_0948
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HCMPF
add esp, 24
.Lt_0951:
mov esp, ebp
pop ebp
ret
.size _EMITCGEF, .-_EMITCGEF
.balign 16
_EMITNEGL:
.type _EMITNEGL, @function
push ebp
mov ebp, esp
.Lt_0952:
push offset Lt_0DDA
push offset Lt_0DDB
push dword ptr [ebp+8]
call HPREPOPERAND64
add esp, 12
push 0
push 5
push offset Lt_0954
push -1
push offset Lt_0DDC
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0DDB
push -1
push offset Lt_0DDC
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0DDC]
call OUTP
add esp, 4
push 0
push 5
push offset Lt_0670
push -1
push offset Lt_0DDC
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0DDA
push -1
push offset Lt_0DDC
call fb_StrConcatAssign
add esp, 20
push 0
push 4
push offset Lt_0529
push -1
push offset Lt_0DDC
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0DDC]
call OUTP
add esp, 4
push 0
push 5
push offset Lt_0954
push -1
push offset Lt_0DDC
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0DDA
push -1
push offset Lt_0DDC
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0DDC]
call OUTP
add esp, 4
.Lt_0953:
mov esp, ebp
pop ebp
ret
.size _EMITNEGL, .-_EMITNEGL

.section .bss
.balign 4
	.lcomm	Lt_0DDB,12
.balign 4
	.lcomm	Lt_0DDA,12
.balign 4
	.lcomm	Lt_0DDC,12

.section .text
.balign 16
_EMITNEGI:
.type _EMITNEGI, @function
push ebp
mov ebp, esp
.Lt_0955:
push -1
push 0
push 0
push -2147483648
push offset Lt_0DDD
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push 0
push 5
push offset Lt_0954
push -1
push offset Lt_0DDE
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0DDD
push -1
push offset Lt_0DDE
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0DDE]
call OUTP
add esp, 4
.Lt_0956:
mov esp, ebp
pop ebp
ret
.size _EMITNEGI, .-_EMITNEGI

.section .bss
.balign 4
	.lcomm	Lt_0DDD,12
.balign 4
	.lcomm	Lt_0DDE,12

.section .text
.balign 16
_EMITNEGF:
.type _EMITNEGF, @function
push ebp
mov ebp, esp
.Lt_0957:
push offset Lt_0124
call OUTP
add esp, 4
.Lt_0958:
mov esp, ebp
pop ebp
ret
.size _EMITNEGF, .-_EMITNEGF
.balign 16
_EMITNOTL:
.type _EMITNOTL, @function
push ebp
mov ebp, esp
.Lt_0959:
push offset Lt_0DDF
push offset Lt_0DE0
push dword ptr [ebp+8]
call HPREPOPERAND64
add esp, 12
push 0
push 5
push offset Lt_0894
push -1
push offset Lt_0DE1
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0DE0
push -1
push offset Lt_0DE1
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0DE1]
call OUTP
add esp, 4
push 0
push 5
push offset Lt_0894
push -1
push offset Lt_0DE1
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0DDF
push -1
push offset Lt_0DE1
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0DE1]
call OUTP
add esp, 4
.Lt_095A:
mov esp, ebp
pop ebp
ret
.size _EMITNOTL, .-_EMITNOTL

.section .bss
.balign 4
	.lcomm	Lt_0DE0,12
.balign 4
	.lcomm	Lt_0DDF,12
.balign 4
	.lcomm	Lt_0DE1,12

.section .text
.balign 16
_EMITNOTI:
.type _EMITNOTI, @function
push ebp
mov ebp, esp
.Lt_095B:
push -1
push 0
push 0
push -2147483648
push offset Lt_0DE2
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push 0
push 5
push offset Lt_0894
push -1
push offset Lt_0DE3
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0DE2
push -1
push offset Lt_0DE3
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0DE3]
call OUTP
add esp, 4
.Lt_095C:
mov esp, ebp
pop ebp
ret
.size _EMITNOTI, .-_EMITNOTI

.section .bss
.balign 4
	.lcomm	Lt_0DE2,12
.balign 4
	.lcomm	Lt_0DE3,12

.section .text
.balign 16
_EMITABSL:
.type _EMITABSL, @function
push ebp
mov ebp, esp
.Lt_095D:
push offset Lt_0DE4
push offset Lt_0DE5
push dword ptr [ebp+8]
call HPREPOPERAND64
add esp, 12
push 0
push dword ptr [ebp+8]
call HFINDREGNOTINVREG
add esp, 8
mov dword ptr [Lt_0DE6], eax
push 0
push 0
push dword ptr [Lt_0DE6]
push 7
call HGETREGNAME
add esp, 8
push eax
push -1
push offset Lt_0DE7
call fb_StrAssign
add esp, 20
push dword ptr [Lt_0DE6]
push 0
call HISREGFREE
add esp, 8
mov dword ptr [Lt_0DE8], eax
cmp dword ptr [Lt_0DE8], 0
jne .Lt_0960
push dword ptr [Lt_0DE7]
call HPUSH
add esp, 4
.Lt_0960:
.Lt_095F:
push dword ptr [Lt_0DE4]
push dword ptr [Lt_0DE7]
call HMOV
add esp, 8
push 0
push 5
push offset Lt_0548
push -1
push offset Lt_0DE9
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0DE7
push -1
push offset Lt_0DE9
call fb_StrConcatAssign
add esp, 20
push 0
push 5
push offset Lt_0549
push -1
push offset Lt_0DE9
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0DE9]
call OUTP
add esp, 4
push 0
push 5
push offset Lt_05F6
push -1
push offset Lt_0DE9
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0DE5
push -1
push offset Lt_0DE9
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0DE9
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0DE7
push -1
push offset Lt_0DE9
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0DE9]
call OUTP
add esp, 4
push 0
push 5
push offset Lt_05F6
push -1
push offset Lt_0DE9
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0DE4
push -1
push offset Lt_0DE9
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0DE9
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0DE7
push -1
push offset Lt_0DE9
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0DE9]
call OUTP
add esp, 4
push 0
push 5
push offset Lt_068C
push -1
push offset Lt_0DE9
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0DE5
push -1
push offset Lt_0DE9
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0DE9
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0DE7
push -1
push offset Lt_0DE9
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0DE9]
call OUTP
add esp, 4
push 0
push 5
push offset Lt_068D
push -1
push offset Lt_0DE9
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0DE4
push -1
push offset Lt_0DE9
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0DE9
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0DE7
push -1
push offset Lt_0DE9
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0DE9]
call OUTP
add esp, 4
cmp dword ptr [Lt_0DE8], 0
jne .Lt_0962
push dword ptr [Lt_0DE7]
call HPOP
add esp, 4
.Lt_0962:
.Lt_0961:
.Lt_095E:
mov esp, ebp
pop ebp
ret
.size _EMITABSL, .-_EMITABSL

.section .bss
.balign 4
	.lcomm	Lt_0DE5,12
.balign 4
	.lcomm	Lt_0DE4,12
.balign 4
	.lcomm	Lt_0DE6,4
.balign 4
	.lcomm	Lt_0DE8,4
.balign 4
	.lcomm	Lt_0DE7,12
.balign 4
	.lcomm	Lt_0DE9,12

.section .text
.balign 16
_EMITABSI:
.type _EMITABSI, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0963:
push -1
push 0
push 0
push -2147483648
push offset Lt_0DEB
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push 0
push dword ptr [ebp+8]
call HFINDREGNOTINVREG
add esp, 8
mov dword ptr [Lt_0DEC], eax
push 0
push 0
push dword ptr [Lt_0DEC]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+4]
call HGETREGNAME
add esp, 8
push eax
push -1
push offset Lt_0DED
call fb_StrAssign
add esp, 20
push dword ptr [Lt_0DEC]
push 0
call HISREGFREE
add esp, 8
mov dword ptr [Lt_0DEE], eax
cmp dword ptr [Lt_0DEE], 0
jne .Lt_0966
push dword ptr [Lt_0DED]
call HPUSH
add esp, 4
.Lt_0966:
.Lt_0965:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_0967
mov dword ptr [ebp-4], 22
jmp .Lt_0DEA
.Lt_0967:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0DEA:
mov eax, dword ptr [ebp-4]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+4]
sal ebx, 3
dec ebx
mov dword ptr [Lt_0DEF], ebx
push dword ptr [Lt_0DEB]
push dword ptr [Lt_0DED]
call HMOV
add esp, 8
push 0
push 5
push offset Lt_0548
push -1
push offset Lt_0DF0
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0DED
push -1
push offset Lt_0DF0
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0DF0
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push dword ptr [Lt_0DEF]
call fb_IntToStr
add esp, 4
push eax
push -1
push offset Lt_0DF0
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0DF0]
call OUTP
add esp, 4
push 0
push 5
push offset Lt_05F6
push -1
push offset Lt_0DF0
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0DEB
push -1
push offset Lt_0DF0
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0DF0
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0DED
push -1
push offset Lt_0DF0
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0DF0]
call OUTP
add esp, 4
push 0
push 5
push offset Lt_068C
push -1
push offset Lt_0DF0
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0DEB
push -1
push offset Lt_0DF0
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0DF0
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0DED
push -1
push offset Lt_0DF0
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0DF0]
call OUTP
add esp, 4
cmp dword ptr [Lt_0DEE], 0
jne .Lt_096A
push dword ptr [Lt_0DED]
call HPOP
add esp, 4
.Lt_096A:
.Lt_0969:
.Lt_0964:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITABSI, .-_EMITABSI

.section .bss
.balign 4
	.lcomm	Lt_0DEB,12
.balign 4
	.lcomm	Lt_0DEC,4
.balign 4
	.lcomm	Lt_0DEE,4
.balign 4
	.lcomm	Lt_0DED,12
.balign 4
	.lcomm	Lt_0DEF,4
.balign 4
	.lcomm	Lt_0DF0,12

.section .text
.balign 16
_EMITABSF:
.type _EMITABSF, @function
push ebp
mov ebp, esp
.Lt_096B:
push offset Lt_011E
call OUTP
add esp, 4
.Lt_096C:
mov esp, ebp
pop ebp
ret
.size _EMITABSF, .-_EMITABSF
.balign 16
_EMITSGNL:
.type _EMITSGNL, @function
push ebp
mov ebp, esp
sub esp, 128
.Lt_096D:
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
lea eax, [ebp-24]
push eax
lea eax, [ebp-12]
push eax
push dword ptr [ebp+8]
call HPREPOPERAND64
add esp, 12
push 0
push 0
call SYMBUNIQUELABEL
push eax
push -1
lea eax, [ebp-36]
push eax
call fb_StrAssign
add esp, 20
push 0
push dword ptr [ebp+8]
call HFINDREGNOTINVREG
add esp, 8
mov dword ptr [ebp-52], eax
push dword ptr [ebp-52]
push 0
call HISREGFREE
add esp, 8
mov dword ptr [ebp-56], eax
push 0
push 0
push dword ptr [ebp-52]
push 7
call HGETREGNAME
add esp, 8
push eax
push -1
lea eax, [ebp-48]
push eax
call fb_StrAssign
add esp, 20
cmp dword ptr [ebp-56], 0
jne .Lt_0970
push dword ptr [ebp-48]
call HPUSH
add esp, 4
.Lt_0970:
.Lt_096F:
push dword ptr [ebp-12]
push dword ptr [ebp-48]
call HMOV
add esp, 8
mov dword ptr [ebp-92], 0
mov dword ptr [ebp-88], 0
mov dword ptr [ebp-84], 0
push 0
push -1
push 4
push offset Lt_0529
push -1
push -1
lea eax, [ebp-24]
push eax
push 5
push offset Lt_0528
mov dword ptr [ebp-68], 0
mov dword ptr [ebp-64], 0
mov dword ptr [ebp-60], 0
lea eax, [ebp-68]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-80], 0
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
lea eax, [ebp-80]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-92]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-92]
call OUTP
add esp, 4
lea eax, [ebp-92]
push eax
call fb_StrDelete
add esp, 4
push offset Lt_053B
push dword ptr [ebp-12]
call HMOV
add esp, 8
push offset Lt_053B
push dword ptr [ebp-24]
call HMOV
add esp, 8
push dword ptr [ebp-36]
push offset Lt_0194
call HBRANCH
add esp, 8
push offset Lt_0004
push dword ptr [ebp-12]
call HMOV
add esp, 8
push offset Lt_0006
push dword ptr [ebp-24]
call HMOV
add esp, 8
push dword ptr [ebp-36]
push offset Lt_0192
call HBRANCH
add esp, 8
mov dword ptr [ebp-128], 0
mov dword ptr [ebp-124], 0
mov dword ptr [ebp-120], 0
push 0
push -1
push 4
push offset Lt_0529
push -1
push -1
lea eax, [ebp-48]
push eax
push 5
push offset Lt_0528
mov dword ptr [ebp-104], 0
mov dword ptr [ebp-100], 0
mov dword ptr [ebp-96], 0
lea eax, [ebp-104]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-116], 0
mov dword ptr [ebp-112], 0
mov dword ptr [ebp-108], 0
lea eax, [ebp-116]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-128]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-128]
call OUTP
add esp, 4
lea eax, [ebp-128]
push eax
call fb_StrDelete
add esp, 4
push dword ptr [ebp-36]
push offset Lt_019B
call HBRANCH
add esp, 8
push offset Lt_0006
push dword ptr [ebp-12]
call HMOV
add esp, 8
push dword ptr [ebp-36]
call HLABEL
add esp, 4
cmp dword ptr [ebp-56], 0
jne .Lt_0978
push dword ptr [ebp-48]
call HPOP
add esp, 4
.Lt_0978:
.Lt_0977:
lea eax, [ebp-48]
push eax
call fb_StrDelete
add esp, 4
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
lea eax, [ebp-24]
push eax
call fb_StrDelete
add esp, 4
lea eax, [ebp-12]
push eax
call fb_StrDelete
add esp, 4
.Lt_096E:
mov esp, ebp
pop ebp
ret
.size _EMITSGNL, .-_EMITSGNL
.balign 16
_EMITSGNI:
.type _EMITSGNI, @function
push ebp
mov ebp, esp
sub esp, 60
.Lt_0979:
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
push -1
push 0
push 0
push -2147483648
lea eax, [ebp-12]
push eax
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push 0
push 0
call SYMBUNIQUELABEL
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
push 0
push -1
push 4
push offset Lt_0529
push -1
push -1
lea eax, [ebp-12]
push eax
push 5
push offset Lt_0528
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
lea eax, [ebp-36]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
lea eax, [ebp-48]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-60]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-60]
call OUTP
add esp, 4
lea eax, [ebp-60]
push eax
call fb_StrDelete
add esp, 4
push dword ptr [ebp-24]
push offset Lt_0191
call HBRANCH
add esp, 8
push offset Lt_0004
push dword ptr [ebp-12]
call HMOV
add esp, 8
push dword ptr [ebp-24]
push offset Lt_0192
call HBRANCH
add esp, 8
push offset Lt_053B
push dword ptr [ebp-12]
call HMOV
add esp, 8
push dword ptr [ebp-24]
call HLABEL
add esp, 4
lea eax, [ebp-24]
push eax
call fb_StrDelete
add esp, 4
lea eax, [ebp-12]
push eax
call fb_StrDelete
add esp, 4
.Lt_097A:
mov esp, ebp
pop ebp
ret
.size _EMITSGNI, .-_EMITSGNI
.balign 16
_EMITSGNF:
.type _EMITSGNF, @function
push ebp
mov ebp, esp
sub esp, 28
.Lt_097E:
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
push -1
push 0
push 0
push -2147483648
lea eax, [ebp-12]
push eax
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push 0
push 0
call SYMBUNIQUELABEL
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
push 5
push 0
call HISREGFREE
add esp, 8
mov dword ptr [ebp-28], eax
cmp dword ptr [ebp-28], 0
jne .Lt_0981
push offset Lt_0081
call HPUSH
add esp, 4
.Lt_0981:
.Lt_0980:
push offset Lt_016F
call OUTP
add esp, 4
push offset Lt_05F3
call OUTP
add esp, 4
push offset Lt_0262
call OUTP
add esp, 4
cmp dword ptr [ebp-28], 0
jne .Lt_0983
push offset Lt_0081
call HPOP
add esp, 4
.Lt_0983:
.Lt_0982:
push dword ptr [ebp-24]
push offset Lt_01A9
call HBRANCH
add esp, 8
push offset Lt_0984
call OUTP
add esp, 4
push offset Lt_0148
call OUTP
add esp, 4
push dword ptr [ebp-24]
push offset Lt_018A
call HBRANCH
add esp, 8
push offset Lt_0124
call OUTP
add esp, 4
push dword ptr [ebp-24]
call HLABEL
add esp, 4
lea eax, [ebp-24]
push eax
call fb_StrDelete
add esp, 4
lea eax, [ebp-12]
push eax
call fb_StrDelete
add esp, 4
.Lt_097F:
mov esp, ebp
pop ebp
ret
.size _EMITSGNF, .-_EMITSGNF
.balign 16
_EMITSIN:
.type _EMITSIN, @function
push ebp
mov ebp, esp
.Lt_0985:
push offset Lt_015E
call OUTP
add esp, 4
.Lt_0986:
mov esp, ebp
pop ebp
ret
.size _EMITSIN, .-_EMITSIN
.balign 16
_EMITASIN:
.type _EMITASIN, @function
push ebp
mov ebp, esp
.Lt_0987:
push offset Lt_08A3
call OUTP
add esp, 4
push offset Lt_0989
call OUTP
add esp, 4
push offset Lt_0148
call OUTP
add esp, 4
push offset Lt_016D
call OUTP
add esp, 4
push offset Lt_0160
call OUTP
add esp, 4
push offset Lt_0155
call OUTP
add esp, 4
.Lt_0988:
mov esp, ebp
pop ebp
ret
.size _EMITASIN, .-_EMITASIN
.balign 16
_EMITCOS:
.type _EMITCOS, @function
push ebp
mov ebp, esp
.Lt_098A:
push offset Lt_0136
call OUTP
add esp, 4
.Lt_098B:
mov esp, ebp
pop ebp
ret
.size _EMITCOS, .-_EMITCOS
.balign 16
_EMITACOS:
.type _EMITACOS, @function
push ebp
mov ebp, esp
.Lt_098C:
push offset Lt_08A3
call OUTP
add esp, 4
push offset Lt_0989
call OUTP
add esp, 4
push offset Lt_0148
call OUTP
add esp, 4
push offset Lt_016D
call OUTP
add esp, 4
push offset Lt_0160
call OUTP
add esp, 4
push offset Lt_0175
call OUTP
add esp, 4
push offset Lt_0155
call OUTP
add esp, 4
.Lt_098D:
mov esp, ebp
pop ebp
ret
.size _EMITACOS, .-_EMITACOS
.balign 16
_EMITTAN:
.type _EMITTAN, @function
push ebp
mov ebp, esp
.Lt_098E:
push offset Lt_0158
call OUTP
add esp, 4
push offset Lt_0984
call OUTP
add esp, 4
.Lt_098F:
mov esp, ebp
pop ebp
ret
.size _EMITTAN, .-_EMITTAN
.balign 16
_EMITATAN:
.type _EMITATAN, @function
push ebp
mov ebp, esp
.Lt_0990:
push offset Lt_0148
call OUTP
add esp, 4
push offset Lt_0155
call OUTP
add esp, 4
.Lt_0991:
mov esp, ebp
pop ebp
ret
.size _EMITATAN, .-_EMITATAN
.balign 16
_EMITSQRT:
.type _EMITSQRT, @function
push ebp
mov ebp, esp
.Lt_0992:
push offset Lt_0160
call OUTP
add esp, 4
.Lt_0993:
mov esp, ebp
pop ebp
ret
.size _EMITSQRT, .-_EMITSQRT
.balign 16
_EMITLOG:
.type _EMITLOG, @function
push ebp
mov ebp, esp
.Lt_0994:
push offset Lt_014D
call OUTP
add esp, 4
push offset Lt_0175
call OUTP
add esp, 4
push offset Lt_0179
call OUTP
add esp, 4
.Lt_0995:
mov esp, ebp
pop ebp
ret
.size _EMITLOG, .-_EMITLOG
.balign 16
_EMITEXP:
.type _EMITEXP, @function
push ebp
mov ebp, esp
.Lt_0996:
push offset Lt_014A
call OUTP
add esp, 4
push offset Lt_0998
call OUTP
add esp, 4
push offset Lt_0999
call OUTP
add esp, 4
push offset Lt_0159
call OUTP
add esp, 4
push offset Lt_099A
call OUTP
add esp, 4
push offset Lt_0175
call OUTP
add esp, 4
push offset Lt_011D
call OUTP
add esp, 4
push offset Lt_099B
call HPUSH
add esp, 4
push offset Lt_099C
call OUTP
add esp, 4
push offset Lt_057A
call OUTP
add esp, 4
push offset Lt_015D
call OUTP
add esp, 4
push offset Lt_08A5
call OUTP
add esp, 4
.Lt_0997:
mov esp, ebp
pop ebp
ret
.size _EMITEXP, .-_EMITEXP
.balign 16
HFPUCHANGERC:
.type HFPUCHANGERC, @function
push ebp
mov ebp, esp
sub esp, 96
.Lt_099D:
push offset Lt_0575
call OUTP
add esp, 4
push offset Lt_099F
call OUTP
add esp, 4
push offset Lt_09A0
mov eax, dword ptr [ebp+8]
push dword ptr [eax]
call HMOV
add esp, 8
push 3
push offset Lt_09A1
push 0
push dword ptr [ebp+12]
call fb_StrCompare
add esp, 16
test eax, eax
je .Lt_09A3
mov dword ptr [ebp-96], 0
mov dword ptr [ebp-92], 0
mov dword ptr [ebp-88], 0
push 0
push -1
push 21
push offset Lt_09A4
push -1
push -1
push dword ptr [ebp+8]
push 5
push offset Lt_0886
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
mov dword ptr [ebp-64], 0
lea eax, [ebp-72]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-84], 0
mov dword ptr [ebp-80], 0
mov dword ptr [ebp-76], 0
lea eax, [ebp-84]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-96]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-96]
call OUTP
add esp, 4
lea eax, [ebp-96]
push eax
call fb_StrDelete
add esp, 4
.Lt_09A3:
.Lt_09A2:
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
push 0
push -1
push -1
push 11
push offset Lt_09A9
push -1
push 0
push dword ptr [ebp+12]
push 9
push offset Lt_09A8
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ebp-24]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
lea eax, [ebp-36]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push -1
push dword ptr [ebp+8]
push 4
push offset Lt_088B
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
lea eax, [ebp-48]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-60]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-60]
call OUTP
add esp, 4
lea eax, [ebp-60]
push eax
call fb_StrDelete
add esp, 4
mov eax, dword ptr [ebp+8]
push dword ptr [eax]
call HPUSH
add esp, 4
push offset Lt_09AF
call OUTP
add esp, 4
push offset Lt_057A
call OUTP
add esp, 4
.Lt_099E:
mov esp, ebp
pop ebp
ret
.size HFPUCHANGERC, .-HFPUCHANGERC
.balign 16
HEMITFLOATFUNC:
.type HEMITFLOATFUNC, @function
push ebp
mov ebp, esp
sub esp, 20
.Lt_09B0:
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
push 0
call HFINDFREEREG
add esp, 4
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], -1
jne .Lt_09B3
mov dword ptr [ebp-4], 5
mov dword ptr [ebp-8], 0
jmp .Lt_09B2
.Lt_09B3:
mov dword ptr [ebp-8], -1
.Lt_09B2:
push 0
push 0
push dword ptr [ebp-4]
push 7
call HGETREGNAME
add esp, 8
push eax
push -1
lea eax, [ebp-20]
push eax
call fb_StrAssign
add esp, 20
cmp dword ptr [ebp-8], 0
jne .Lt_09B5
push dword ptr [ebp-20]
call HPUSH
add esp, 4
.Lt_09B5:
.Lt_09B4:
cmp dword ptr [ebp+8], 1
jne .Lt_09B7
.Lt_09B8:
push offset Lt_0005
lea eax, [ebp-20]
push eax
call HFPUCHANGERC
add esp, 8
push offset Lt_0159
call OUTP
add esp, 4
jmp .Lt_09B6
.Lt_09B7:
cmp dword ptr [ebp+8], 2
jne .Lt_09B9
.Lt_09BA:
push offset Lt_09A1
lea eax, [ebp-20]
push eax
call HFPUCHANGERC
add esp, 8
push offset Lt_0159
call OUTP
add esp, 4
jmp .Lt_09B6
.Lt_09B9:
cmp dword ptr [ebp+8], 3
jne .Lt_09BB
.Lt_09BC:
push offset Lt_09A1
lea eax, [ebp-20]
push eax
call HFPUCHANGERC
add esp, 8
push offset Lt_08A3
call OUTP
add esp, 4
push offset Lt_0159
call OUTP
add esp, 4
push offset Lt_016A
call OUTP
add esp, 4
.Lt_09BB:
.Lt_09B6:
push offset Lt_09AF
call OUTP
add esp, 4
push offset Lt_057A
call OUTP
add esp, 4
cmp dword ptr [ebp-8], 0
jne .Lt_09BE
push dword ptr [ebp-20]
call HPOP
add esp, 4
.Lt_09BE:
.Lt_09BD:
lea eax, [ebp-20]
push eax
call fb_StrDelete
add esp, 4
.Lt_09B1:
mov esp, ebp
pop ebp
ret
.size HEMITFLOATFUNC, .-HEMITFLOATFUNC
.balign 16
_EMITFLOOR:
.type _EMITFLOOR, @function
push ebp
mov ebp, esp
.Lt_09BF:
push 1
call HEMITFLOATFUNC
add esp, 4
.Lt_09C0:
mov esp, ebp
pop ebp
ret
.size _EMITFLOOR, .-_EMITFLOOR
.balign 16
_EMITFIX:
.type _EMITFIX, @function
push ebp
mov ebp, esp
.Lt_09C1:
push 2
call HEMITFLOATFUNC
add esp, 4
.Lt_09C2:
mov esp, ebp
pop ebp
ret
.size _EMITFIX, .-_EMITFIX
.balign 16
_EMITFRAC:
.type _EMITFRAC, @function
push ebp
mov ebp, esp
.Lt_09C3:
push 3
call HEMITFLOATFUNC
add esp, 4
.Lt_09C4:
mov esp, ebp
pop ebp
ret
.size _EMITFRAC, .-_EMITFRAC
.balign 16
_EMITCONVFD2FS:
.type _EMITCONVFD2FS, @function
push ebp
mov ebp, esp
.Lt_09C5:
push offset Lt_0575
call OUTP
add esp, 4
push offset Lt_09C7
call OUTP
add esp, 4
push offset Lt_09C8
call OUTP
add esp, 4
push offset Lt_057A
call OUTP
add esp, 4
.Lt_09C6:
mov esp, ebp
pop ebp
ret
.size _EMITCONVFD2FS, .-_EMITCONVFD2FS
.balign 16
_EMITXCHGTOS:
.type _EMITXCHGTOS, @function
push ebp
mov ebp, esp
.Lt_09C9:
push -1
push 0
push 0
push -2147483648
push offset Lt_0DF1
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push 0
push 6
push offset Lt_09CB
push -1
push offset Lt_0DF2
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0DF1
push -1
push offset Lt_0DF2
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0DF2]
call OUTP
add esp, 4
.Lt_09CA:
mov esp, ebp
pop ebp
ret
.size _EMITXCHGTOS, .-_EMITXCHGTOS

.section .bss
.balign 4
	.lcomm	Lt_0DF1,12
.balign 4
	.lcomm	Lt_0DF2,12

.section .text
.balign 16
_EMITSTACKALIGN:
.type _EMITSTACKALIGN, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
.Lt_09CC:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+28], 0
jl .Lt_09CF
jg .Lt_0DF3
cmp dword ptr [eax+24], 0
jbe .Lt_09CF
.Lt_0DF3:
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
push 0
push -1
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+28]
push dword ptr [eax+24]
call fb_LongintToStr
add esp, 8
push eax
push 10
push offset Lt_04AF
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-24]
call OUTP
add esp, 4
lea eax, [ebp-24]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_09CE
.Lt_09CF:
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
push 0
push -1
push -1
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+24]
mov ebx, dword ptr [eax+28]
neg ecx
adc ebx, 0
neg ebx
push ebx
push ecx
call fb_LongintToStr
add esp, 8
push eax
push 10
push offset Lt_04FE
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-24]
call OUTP
add esp, 4
lea eax, [ebp-24]
push eax
call fb_StrDelete
add esp, 4
.Lt_09CE:
.Lt_09CD:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITSTACKALIGN, .-_EMITSTACKALIGN
.balign 16
_EMITPUSHL:
.type _EMITPUSHL, @function
push ebp
mov ebp, esp
.Lt_09D4:
push offset Lt_0DF4
push offset Lt_0DF5
push dword ptr [ebp+8]
call HPREPOPERAND64
add esp, 12
push 0
push 6
push offset Lt_03B5
push -1
push offset Lt_0DF6
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0DF4
push -1
push offset Lt_0DF6
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0DF6]
call OUTP
add esp, 4
push 0
push 6
push offset Lt_03B5
push -1
push offset Lt_0DF6
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0DF5
push -1
push offset Lt_0DF6
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0DF6]
call OUTP
add esp, 4
.Lt_09D5:
mov esp, ebp
pop ebp
ret
.size _EMITPUSHL, .-_EMITPUSHL

.section .bss
.balign 4
	.lcomm	Lt_0DF5,12
.balign 4
	.lcomm	Lt_0DF4,12
.balign 4
	.lcomm	Lt_0DF6,12

.section .text
.balign 16
_EMITPUSHI:
.type _EMITPUSHI, @function
push ebp
mov ebp, esp
sub esp, 116
push ebx
.Lt_09D6:
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
push -1
push 0
push 0
push -2147483648
lea eax, [ebp-12]
push eax
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_09D8
mov dword ptr [ebp-40], 22
jmp .Lt_0DF7
.Lt_09D8:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-40], eax
.Lt_0DF7:
mov eax, dword ptr [ebp-40]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+4]
mov dword ptr [ebp-28], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx]
mov dword ptr [ebp-44], eax
cmp dword ptr [ebp-44], 4
jne .Lt_09DC
.Lt_09DD:
cmp dword ptr [ebp-28], 4
jge .Lt_09DF
push 0
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax+12]
push 7
call HGETREGNAME
add esp, 8
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
.Lt_09DF:
.Lt_09DE:
mov dword ptr [ebp-68], 0
mov dword ptr [ebp-64], 0
mov dword ptr [ebp-60], 0
push 0
push -1
push -1
lea eax, [ebp-12]
push eax
push 6
push offset Lt_03B5
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
lea eax, [ebp-56]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-68]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-68]
call OUTP
add esp, 4
lea eax, [ebp-68]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_09DA
.Lt_09DC:
cmp dword ptr [ebp-44], 0
jne .Lt_09E2
.Lt_09E3:
mov dword ptr [ebp-68], 0
mov dword ptr [ebp-64], 0
mov dword ptr [ebp-60], 0
push 0
push -1
push -1
lea eax, [ebp-12]
push eax
push 6
push offset Lt_03B5
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
lea eax, [ebp-56]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-68]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-68]
call OUTP
add esp, 4
lea eax, [ebp-68]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_09DA
.Lt_09E2:
cmp dword ptr [ebp-28], 4
jge .Lt_09E8
push 0
push dword ptr [ebp+8]
call HFINDREGNOTINVREG
add esp, 8
mov dword ptr [ebp-32], eax
push dword ptr [ebp-32]
push 0
call HISREGFREE
add esp, 8
mov dword ptr [ebp-36], eax
push 0
push 0
push dword ptr [ebp-32]
push 7
call HGETREGNAME
add esp, 8
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
cmp dword ptr [ebp-36], 0
jne .Lt_09EA
push dword ptr [ebp-24]
call HPUSH
add esp, 4
.Lt_09EA:
.Lt_09E9:
mov dword ptr [ebp-92], 0
mov dword ptr [ebp-88], 0
mov dword ptr [ebp-84], 0
push 0
push -1
push -1
lea eax, [ebp-12]
push eax
push -1
push 3
push offset Lt_006D
push -1
push -1
lea eax, [ebp-24]
push eax
push 7
push offset Lt_0543
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
lea eax, [ebp-56]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-68], 0
mov dword ptr [ebp-64], 0
mov dword ptr [ebp-60], 0
lea eax, [ebp-68]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-80], 0
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
lea eax, [ebp-80]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-92]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-92]
call OUTP
add esp, 4
lea eax, [ebp-92]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-116], 0
mov dword ptr [ebp-112], 0
mov dword ptr [ebp-108], 0
push 0
push -1
push -1
lea eax, [ebp-24]
push eax
push 6
push offset Lt_03B5
mov dword ptr [ebp-104], 0
mov dword ptr [ebp-100], 0
mov dword ptr [ebp-96], 0
lea eax, [ebp-104]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-116]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-116]
call OUTP
add esp, 4
lea eax, [ebp-116]
push eax
call fb_StrDelete
add esp, 4
cmp dword ptr [ebp-36], 0
jne .Lt_09F2
push dword ptr [ebp-24]
call HPOP
add esp, 4
.Lt_09F2:
.Lt_09F1:
jmp .Lt_09E7
.Lt_09E8:
mov dword ptr [ebp-68], 0
mov dword ptr [ebp-64], 0
mov dword ptr [ebp-60], 0
push 0
push -1
push -1
lea eax, [ebp-12]
push eax
push 6
push offset Lt_03B5
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
lea eax, [ebp-56]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-68]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-68]
call OUTP
add esp, 4
lea eax, [ebp-68]
push eax
call fb_StrDelete
add esp, 4
.Lt_09E7:
.Lt_09E6:
.Lt_09DA:
lea eax, [ebp-24]
push eax
call fb_StrDelete
add esp, 4
lea eax, [ebp-12]
push eax
call fb_StrDelete
add esp, 4
.Lt_09D7:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITPUSHI, .-_EMITPUSHI
.balign 16
_EMITPUSHF:
.type _EMITPUSHF, @function
push ebp
mov ebp, esp
sub esp, 28
push ebx
.Lt_09F5:
push -1
push 0
push 0
push -2147483648
push offset Lt_0DF9
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_09F7
mov dword ptr [ebp-4], 22
jmp .Lt_0DF8
.Lt_09F7:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0DF8:
mov eax, dword ptr [ebp-4]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+4]
mov dword ptr [Lt_0DFA], ebx
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx], 4
je .Lt_09FA
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx+4], 14
jne .Lt_09FC
push 0
push 6
push offset Lt_03B5
push -1
push offset Lt_0DFB
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0DF9
push -1
push offset Lt_0DFB
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0DFB]
call OUTP
add esp, 4
jmp .Lt_09FB
.Lt_09FC:
push -1
push 0
push 4
push 7
push offset Lt_0DF9
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push 0
push 6
push offset Lt_03B5
push -1
push offset Lt_0DFB
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0DF9
push -1
push offset Lt_0DFB
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0DFB]
call OUTP
add esp, 4
push -1
push 0
push 0
push 7
push offset Lt_0DF9
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push 0
push 6
push offset Lt_03B5
push -1
push offset Lt_0DFB
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0DF9
push -1
push offset Lt_0DFB
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0DFB]
call OUTP
add esp, 4
.Lt_09FB:
jmp .Lt_09F9
.Lt_09FA:
push 0
push 9
push offset Lt_09FD
push -1
push offset Lt_0DFB
call fb_StrAssign
add esp, 20
push 0
push -1
push dword ptr [Lt_0DFA]
call fb_IntToStr
add esp, 4
push eax
push -1
push offset Lt_0DFB
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0DFB]
call OUTP
add esp, 4
push 0
push -1
push 7
push offset Lt_0592
push -1
push 12
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
sal ebx, 4
lea eax, [DTYPETB+ebx+4]
push eax
push 6
push offset Lt_059B
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
lea eax, [ebp-16]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
lea eax, [ebp-28]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_0DFB
call fb_StrAssign
add esp, 20
push dword ptr [Lt_0DFB]
call OUTP
add esp, 4
.Lt_09F9:
.Lt_09F6:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITPUSHF, .-_EMITPUSHF

.section .bss
.balign 4
	.lcomm	Lt_0DF9,12
.balign 4
	.lcomm	Lt_0DFA,4
.balign 4
	.lcomm	Lt_0DFB,12

.section .text
.balign 16
_EMITPUSHUDT:
.type _EMITPUSHUDT, @function
push ebp
mov ebp, esp
sub esp, 208
.Lt_0A00:
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
mov eax, dword ptr [ebp+12]
and eax, 3
mov dword ptr [ebp-52], eax
cmp dword ptr [ebp-52], 0
jle .Lt_0A03
push 0
push dword ptr [ebp+8]
call HFINDREGNOTINVREG
add esp, 8
mov dword ptr [ebp-44], eax
push dword ptr [ebp-44]
push 0
call HISREGFREE
add esp, 8
mov dword ptr [ebp-48], eax
push 0
push 0
push dword ptr [ebp-44]
push 7
call HGETREGNAME
add esp, 8
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
cmp dword ptr [ebp-48], 0
jne .Lt_0A05
push dword ptr [ebp-24]
call HPUSH
add esp, 4
.Lt_0A05:
.Lt_0A04:
cmp dword ptr [ebp-52], 3
jne .Lt_0A07
.Lt_0A08:
push -1
push 0
mov eax, dword ptr [ebp+12]
dec eax
push eax
push 1
lea eax, [ebp-12]
push eax
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
mov dword ptr [ebp-124], 0
mov dword ptr [ebp-120], 0
mov dword ptr [ebp-116], 0
push 0
push -1
push -1
lea eax, [ebp-12]
push eax
push -1
push 3
push offset Lt_006D
push -1
push -1
lea eax, [ebp-24]
push eax
push 7
push offset Lt_0543
mov dword ptr [ebp-88], 0
mov dword ptr [ebp-84], 0
mov dword ptr [ebp-80], 0
lea eax, [ebp-88]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-100], 0
mov dword ptr [ebp-96], 0
mov dword ptr [ebp-92], 0
lea eax, [ebp-100]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-112], 0
mov dword ptr [ebp-108], 0
mov dword ptr [ebp-104], 0
lea eax, [ebp-112]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-124]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-124]
call OUTP
add esp, 4
lea eax, [ebp-124]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-160], 0
mov dword ptr [ebp-156], 0
mov dword ptr [ebp-152], 0
push 0
push -1
push 5
push offset Lt_0A0D
push -1
push -1
lea eax, [ebp-24]
push eax
push 5
push offset Lt_077E
mov dword ptr [ebp-136], 0
mov dword ptr [ebp-132], 0
mov dword ptr [ebp-128], 0
lea eax, [ebp-136]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-148], 0
mov dword ptr [ebp-144], 0
mov dword ptr [ebp-140], 0
lea eax, [ebp-148]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-160]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-160]
call OUTP
add esp, 4
lea eax, [ebp-160]
push eax
call fb_StrDelete
add esp, 4
push 0
push 0
push dword ptr [ebp-44]
push 4
call HGETREGNAME
add esp, 8
push eax
push -1
lea eax, [ebp-36]
push eax
call fb_StrAssign
add esp, 20
push -1
push 0
mov eax, dword ptr [ebp+12]
add eax, -3
push eax
push 4
lea eax, [ebp-12]
push eax
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
mov dword ptr [ebp-208], 0
mov dword ptr [ebp-204], 0
mov dword ptr [ebp-200], 0
push 0
push -1
push -1
lea eax, [ebp-12]
push eax
push -1
push 3
push offset Lt_006D
push -1
push -1
lea eax, [ebp-36]
push eax
push 5
push offset Lt_03BF
mov dword ptr [ebp-172], 0
mov dword ptr [ebp-168], 0
mov dword ptr [ebp-164], 0
lea eax, [ebp-172]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-184], 0
mov dword ptr [ebp-180], 0
mov dword ptr [ebp-176], 0
lea eax, [ebp-184]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-196], 0
mov dword ptr [ebp-192], 0
mov dword ptr [ebp-188], 0
lea eax, [ebp-196]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-208]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-208]
call OUTP
add esp, 4
lea eax, [ebp-208]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0A06
.Lt_0A07:
cmp dword ptr [ebp-52], 2
jne .Lt_0A15
.Lt_0A16:
mov eax, dword ptr [ebp+12]
add eax, -2
mov dword ptr [ebp-40], eax
push -1
push 0
push dword ptr [ebp-40]
push 4
lea eax, [ebp-12]
push eax
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
mov dword ptr [ebp-124], 0
mov dword ptr [ebp-120], 0
mov dword ptr [ebp-116], 0
push 0
push -1
push -1
lea eax, [ebp-12]
push eax
push -1
push 3
push offset Lt_006D
push -1
push -1
lea eax, [ebp-24]
push eax
push 7
push offset Lt_0543
mov dword ptr [ebp-88], 0
mov dword ptr [ebp-84], 0
mov dword ptr [ebp-80], 0
lea eax, [ebp-88]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-100], 0
mov dword ptr [ebp-96], 0
mov dword ptr [ebp-92], 0
lea eax, [ebp-100]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-112], 0
mov dword ptr [ebp-108], 0
mov dword ptr [ebp-104], 0
lea eax, [ebp-112]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-124]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-124]
call OUTP
add esp, 4
lea eax, [ebp-124]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0A06
.Lt_0A15:
cmp dword ptr [ebp-52], 1
jne .Lt_0A1B
.Lt_0A1C:
mov eax, dword ptr [ebp+12]
dec eax
mov dword ptr [ebp-40], eax
push -1
push 0
push dword ptr [ebp-40]
push 1
lea eax, [ebp-12]
push eax
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
mov dword ptr [ebp-124], 0
mov dword ptr [ebp-120], 0
mov dword ptr [ebp-116], 0
push 0
push -1
push -1
lea eax, [ebp-12]
push eax
push -1
push 3
push offset Lt_006D
push -1
push -1
lea eax, [ebp-24]
push eax
push 7
push offset Lt_0543
mov dword ptr [ebp-88], 0
mov dword ptr [ebp-84], 0
mov dword ptr [ebp-80], 0
lea eax, [ebp-88]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-100], 0
mov dword ptr [ebp-96], 0
mov dword ptr [ebp-92], 0
lea eax, [ebp-100]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-112], 0
mov dword ptr [ebp-108], 0
mov dword ptr [ebp-104], 0
lea eax, [ebp-112]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-124]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-124]
call OUTP
add esp, 4
lea eax, [ebp-124]
push eax
call fb_StrDelete
add esp, 4
.Lt_0A1B:
.Lt_0A06:
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
push 0
push -1
push -1
lea eax, [ebp-24]
push eax
push 6
push offset Lt_03B5
mov dword ptr [ebp-64], 0
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
lea eax, [ebp-64]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-76]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-76]
call OUTP
add esp, 4
lea eax, [ebp-76]
push eax
call fb_StrDelete
add esp, 4
cmp dword ptr [ebp-48], 0
jne .Lt_0A24
push dword ptr [ebp-24]
call HPOP
add esp, 4
.Lt_0A24:
.Lt_0A23:
mov eax, dword ptr [ebp-52]
sub dword ptr [ebp+12], eax
.Lt_0A03:
.Lt_0A02:
mov eax, dword ptr [ebp+12]
add eax, -4
mov dword ptr [ebp-40], eax
.Lt_0A25:
cmp dword ptr [ebp-40], 0
jl .Lt_0A26
push -1
push 0
push dword ptr [ebp-40]
push 7
lea eax, [ebp-12]
push eax
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
push 0
push -1
push -1
lea eax, [ebp-12]
push eax
push 6
push offset Lt_03B5
mov dword ptr [ebp-64], 0
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
lea eax, [ebp-64]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-76]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-76]
call OUTP
add esp, 4
lea eax, [ebp-76]
push eax
call fb_StrDelete
add esp, 4
add dword ptr [ebp-40], -4
jmp .Lt_0A25
.Lt_0A26:
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
lea eax, [ebp-24]
push eax
call fb_StrDelete
add esp, 4
lea eax, [ebp-12]
push eax
call fb_StrDelete
add esp, 4
.Lt_0A01:
mov esp, ebp
pop ebp
ret
.size _EMITPUSHUDT, .-_EMITPUSHUDT
.balign 16
_EMITPOPL:
.type _EMITPOPL, @function
push ebp
mov ebp, esp
.Lt_0A29:
push offset Lt_0DFC
push offset Lt_0DFD
push dword ptr [ebp+8]
call HPREPOPERAND64
add esp, 12
push 0
push 5
push offset Lt_03BA
push -1
push offset Lt_0DFE
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0DFD
push -1
push offset Lt_0DFE
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0DFE]
call OUTP
add esp, 4
push 0
push 5
push offset Lt_03BA
push -1
push offset Lt_0DFE
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0DFC
push -1
push offset Lt_0DFE
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0DFE]
call OUTP
add esp, 4
.Lt_0A2A:
mov esp, ebp
pop ebp
ret
.size _EMITPOPL, .-_EMITPOPL

.section .bss
.balign 4
	.lcomm	Lt_0DFD,12
.balign 4
	.lcomm	Lt_0DFC,12
.balign 4
	.lcomm	Lt_0DFE,12

.section .text
.balign 16
_EMITPOPI:
.type _EMITPOPI, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
.Lt_0A2B:
push -1
push 0
push 0
push -2147483648
push offset Lt_0E00
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_0A2D
mov dword ptr [ebp-4], 22
jmp .Lt_0DFF
.Lt_0A2D:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0DFF:
mov eax, dword ptr [ebp-4]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+4]
mov dword ptr [Lt_0E01], ebx
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx], 0
jne .Lt_0A30
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx+28], 0
jne .Lt_0A32
cmp dword ptr [ebx+24], 4
jne .Lt_0A32
.Lt_0E02:
push 5
push 0
call HISREGFREE
add esp, 8
test eax, eax
je .Lt_0A34
push offset Lt_0081
call HPOP
add esp, 4
jmp .Lt_0A33
.Lt_0A34:
push offset Lt_057A
call OUTP
add esp, 4
.Lt_0A33:
jmp .Lt_0A31
.Lt_0A32:
push 0
push -1
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+28]
push dword ptr [eax+24]
call fb_LongintToStr
add esp, 8
push eax
push 10
push offset Lt_04FE
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
lea eax, [ebp-16]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_0E03
call fb_StrAssign
add esp, 20
push dword ptr [Lt_0E03]
call OUTP
add esp, 4
.Lt_0A31:
jmp .Lt_0A2F
.Lt_0A30:
cmp dword ptr [Lt_0E01], 4
jne .Lt_0A36
push 0
push 5
push offset Lt_03BA
push -1
push offset Lt_0E03
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0E00
push -1
push offset Lt_0E03
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0E03]
call OUTP
add esp, 4
jmp .Lt_0A2F
.Lt_0A36:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 4
jne .Lt_0A38
push 0
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax+12]
push 7
call HGETREGNAME
add esp, 8
push eax
push -1
push offset Lt_0E00
call fb_StrAssign
add esp, 20
push 0
push 5
push offset Lt_03BA
push -1
push offset Lt_0E03
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0E00
push -1
push offset Lt_0E03
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0E03]
call OUTP
add esp, 4
jmp .Lt_0A37
.Lt_0A38:
push 0
push dword ptr [ebp+8]
call HFINDREGNOTINVREG
add esp, 8
mov dword ptr [Lt_0E04], eax
push 0
push 0
push dword ptr [Lt_0E04]
push 1
call HGETREGNAME
add esp, 8
push eax
push -1
push offset Lt_0E05
call fb_StrAssign
add esp, 20
push 0
push 0
push dword ptr [Lt_0E04]
push 4
call HGETREGNAME
add esp, 8
push eax
push -1
push offset Lt_0E06
call fb_StrAssign
add esp, 20
push 0
push 0
push dword ptr [Lt_0E04]
push 7
call HGETREGNAME
add esp, 8
push eax
push -1
push offset Lt_0E07
call fb_StrAssign
add esp, 20
push dword ptr [Lt_0E04]
push 0
call HISREGFREE
add esp, 8
mov dword ptr [Lt_0E08], eax
cmp dword ptr [Lt_0E08], 0
je .Lt_0A3A
push offset Lt_057D
push dword ptr [Lt_0E07]
call HMOV
add esp, 8
jmp .Lt_0A39
.Lt_0A3A:
push offset Lt_057D
push dword ptr [Lt_0E07]
call HXCHG
add esp, 8
.Lt_0A39:
cmp dword ptr [Lt_0E01], 1
jne .Lt_0A3C
push dword ptr [Lt_0E05]
push dword ptr [Lt_0E00]
call HMOV
add esp, 8
jmp .Lt_0A3B
.Lt_0A3C:
push dword ptr [Lt_0E06]
push dword ptr [Lt_0E00]
call HMOV
add esp, 8
.Lt_0A3B:
cmp dword ptr [Lt_0E08], 0
je .Lt_0A3E
push offset Lt_057A
call OUTP
add esp, 4
jmp .Lt_0A3D
.Lt_0A3E:
push dword ptr [Lt_0E07]
call HPOP
add esp, 4
.Lt_0A3D:
.Lt_0A37:
.Lt_0A2F:
.Lt_0A2C:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITPOPI, .-_EMITPOPI

.section .bss
.balign 4
	.lcomm	Lt_0E00,12
.balign 4
	.lcomm	Lt_0E03,12
.balign 4
	.lcomm	Lt_0E01,4
.balign 4
	.lcomm	Lt_0E04,4
.balign 4
	.lcomm	Lt_0E08,4
.balign 4
	.lcomm	Lt_0E05,12
.balign 4
	.lcomm	Lt_0E06,12
.balign 4
	.lcomm	Lt_0E07,12

.section .text
.balign 16
_EMITPOPF:
.type _EMITPOPF, @function
push ebp
mov ebp, esp
sub esp, 28
push ebx
.Lt_0A3F:
push -1
push 0
push 0
push -2147483648
push offset Lt_0E0A
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_0A41
mov dword ptr [ebp-4], 22
jmp .Lt_0E09
.Lt_0A41:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0E09:
mov eax, dword ptr [ebp-4]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+4]
mov dword ptr [Lt_0E0B], ebx
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx], 4
je .Lt_0A44
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx+4], 14
jne .Lt_0A46
push 0
push 5
push offset Lt_03BA
push -1
push offset Lt_0E0C
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0E0A
push -1
push offset Lt_0E0C
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0E0C]
call OUTP
add esp, 4
jmp .Lt_0A45
.Lt_0A46:
push -1
push 0
push 0
push 7
push offset Lt_0E0A
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push 0
push 5
push offset Lt_03BA
push -1
push offset Lt_0E0C
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0E0A
push -1
push offset Lt_0E0C
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0E0C]
call OUTP
add esp, 4
push -1
push 0
push 4
push 7
push offset Lt_0E0A
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push 0
push 5
push offset Lt_03BA
push -1
push offset Lt_0E0C
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0E0A
push -1
push offset Lt_0E0C
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0E0C]
call OUTP
add esp, 4
.Lt_0A45:
jmp .Lt_0A43
.Lt_0A44:
push 0
push -1
push 7
push offset Lt_0592
push -1
push 12
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
sal ebx, 4
lea eax, [DTYPETB+ebx+4]
push eax
push 5
push offset Lt_05CE
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
lea eax, [ebp-16]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
lea eax, [ebp-28]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_0E0C
call fb_StrAssign
add esp, 20
push dword ptr [Lt_0E0C]
call OUTP
add esp, 4
push 0
push 9
push offset Lt_0A49
push -1
push offset Lt_0E0C
call fb_StrAssign
add esp, 20
push 0
push -1
push dword ptr [Lt_0E0B]
call fb_IntToStr
add esp, 4
push eax
push -1
push offset Lt_0E0C
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0E0C]
call OUTP
add esp, 4
.Lt_0A43:
.Lt_0A40:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITPOPF, .-_EMITPOPF

.section .bss
.balign 4
	.lcomm	Lt_0E0A,12
.balign 4
	.lcomm	Lt_0E0C,12
.balign 4
	.lcomm	Lt_0E0B,4

.section .text
.balign 16
_EMITPOPST0:
.type _EMITPOPST0, @function
.Lt_0A4A:
push offset Lt_0984
call OUTP
add esp, 4
.Lt_0A4B:
ret
.size _EMITPOPST0, .-_EMITPOPST0
.balign 16
_EMITADDROF:
.type _EMITADDROF, @function
push ebp
mov ebp, esp
.Lt_0A4C:
push -1
push 0
push 0
push -2147483648
push offset Lt_0E0D
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push 0
push 0
push 0
push -2147483648
push offset Lt_0E0E
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
push 0
push 5
push offset Lt_0A4E
push -1
push offset Lt_0E0F
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0E0D
push -1
push offset Lt_0E0F
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0E0F
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0E0E
push -1
push offset Lt_0E0F
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0E0F]
call OUTP
add esp, 4
.Lt_0A4D:
mov esp, ebp
pop ebp
ret
.size _EMITADDROF, .-_EMITADDROF

.section .bss
.balign 4
	.lcomm	Lt_0E0D,12
.balign 4
	.lcomm	Lt_0E0E,12
.balign 4
	.lcomm	Lt_0E0F,12

.section .text
.balign 16
_EMITDEREF:
.type _EMITDEREF, @function
push ebp
mov ebp, esp
.Lt_0A4F:
push -1
push 0
push 0
push -2147483648
push offset Lt_0E10
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push -1
push 0
push 0
push 8
push offset Lt_0E11
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
push 0
push 5
push offset Lt_03BF
push -1
push offset Lt_0E12
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0E10
push -1
push offset Lt_0E12
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0E12
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0E11
push -1
push offset Lt_0E12
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0E12]
call OUTP
add esp, 4
.Lt_0A50:
mov esp, ebp
pop ebp
ret
.size _EMITDEREF, .-_EMITDEREF

.section .bss
.balign 4
	.lcomm	Lt_0E10,12
.balign 4
	.lcomm	Lt_0E11,12
.balign 4
	.lcomm	Lt_0E12,12

.section .text
.balign 16
HMEMMOVEREP:
.type HMEMMOVEREP, @function
push ebp
mov ebp, esp
push ebx
.Lt_0A51:
push -1
push 0
push 0
push -2147483648
push offset Lt_0E13
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push -1
push 0
push 0
push -2147483648
push offset Lt_0E14
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
push 3
push 0
call HISREGFREE
add esp, 8
mov dword ptr [Lt_0E15], eax
push 1
push 0
call HISREGFREE
add esp, 8
mov dword ptr [Lt_0E16], eax
push 2
push 0
call HISREGFREE
add esp, 8
mov dword ptr [Lt_0E17], eax
push 1
push dword ptr [ebp+12]
call HISREGINVREG
add esp, 8
mov dword ptr [Lt_0E18], eax
push 3
push dword ptr [ebp+12]
call HISREGINVREG
add esp, 8
mov dword ptr [Lt_0E19], eax
cmp dword ptr [Lt_0E15], 0
jne .Lt_0A54
push offset Lt_007F
call HPUSH
add esp, 4
.Lt_0A54:
.Lt_0A53:
cmp dword ptr [Lt_0E16], 0
jne .Lt_0A56
push offset Lt_007D
call HPUSH
add esp, 4
.Lt_0A56:
.Lt_0A55:
cmp dword ptr [Lt_0E17], 0
jne .Lt_0A58
push offset Lt_007E
call HPUSH
add esp, 4
.Lt_0A58:
.Lt_0A57:
cmp dword ptr [Lt_0E18], 0
jne .Lt_0A5A
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 4
je .Lt_0A5C
push dword ptr [Lt_0E13]
push offset Lt_007D
call HMOV
add esp, 8
jmp .Lt_0A5B
.Lt_0A5C:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+12], 1
je .Lt_0A5E
push dword ptr [Lt_0E13]
push offset Lt_007D
call HMOV
add esp, 8
.Lt_0A5E:
.Lt_0A5D:
.Lt_0A5B:
jmp .Lt_0A59
.Lt_0A5A:
cmp dword ptr [Lt_0E19], 0
je .Lt_0A60
push offset Lt_007F
call HPUSH
add esp, 4
.Lt_0A60:
.Lt_0A5F:
push dword ptr [Lt_0E13]
push offset Lt_007F
call HMOV
add esp, 8
cmp dword ptr [Lt_0E19], 0
je .Lt_0A62
push offset Lt_072F
call OUTP
add esp, 4
.Lt_0A62:
.Lt_0A61:
.Lt_0A59:
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax], 4
je .Lt_0A64
push dword ptr [Lt_0E14]
push offset Lt_007E
call HMOV
add esp, 8
jmp .Lt_0A63
.Lt_0A64:
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax+12], 2
je .Lt_0A66
push dword ptr [Lt_0E14]
push offset Lt_007E
call HMOV
add esp, 8
.Lt_0A66:
.Lt_0A65:
.Lt_0A63:
cmp dword ptr [Lt_0E18], 0
je .Lt_0A68
cmp dword ptr [Lt_0E19], 0
jne .Lt_0A6A
push offset Lt_007F
push offset Lt_007D
call HMOV
add esp, 8
jmp .Lt_0A69
.Lt_0A6A:
push offset Lt_007D
call HPOP
add esp, 4
.Lt_0A69:
.Lt_0A68:
.Lt_0A67:
cmp dword ptr [ebp+16], 4
jle .Lt_0A6C
push 0
push 10
push offset Lt_0A6D
push -1
push offset Lt_0E1A
call fb_StrAssign
add esp, 20
push 0
push -1
mov eax, dword ptr [ebp+16]
shr eax, 2
mov ebx, eax
push ebx
call fb_UIntToStr
add esp, 4
push eax
push -1
push offset Lt_0E1A
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0E1A]
call OUTP
add esp, 4
push offset Lt_0A6E
call OUTP
add esp, 4
jmp .Lt_0A6B
.Lt_0A6C:
cmp dword ptr [ebp+16], 4
jne .Lt_0A6F
push offset Lt_0A70
call OUTP
add esp, 4
push offset Lt_0A71
call OUTP
add esp, 4
mov eax, dword ptr [ebp+16]
and eax, 3
test eax, eax
jle .Lt_0A73
push offset Lt_0A74
call OUTP
add esp, 4
push offset Lt_0A75
call OUTP
add esp, 4
.Lt_0A73:
.Lt_0A72:
.Lt_0A6F:
.Lt_0A6B:
and dword ptr [ebp+16], 3
cmp dword ptr [ebp+16], 0
jle .Lt_0A77
cmp dword ptr [ebp+16], 2
jl .Lt_0A79
push offset Lt_0A7A
call OUTP
add esp, 4
push offset Lt_0A7B
call OUTP
add esp, 4
cmp dword ptr [ebp+16], 3
jne .Lt_0A7D
push offset Lt_0A7E
call OUTP
add esp, 4
push offset Lt_0A7F
call OUTP
add esp, 4
.Lt_0A7D:
.Lt_0A7C:
.Lt_0A79:
.Lt_0A78:
mov eax, dword ptr [ebp+16]
and eax, 1
test eax, eax
je .Lt_0A81
push offset Lt_0A82
call OUTP
add esp, 4
push offset Lt_0A83
call OUTP
add esp, 4
.Lt_0A81:
.Lt_0A80:
.Lt_0A77:
.Lt_0A76:
cmp dword ptr [Lt_0E17], 0
jne .Lt_0A85
push offset Lt_007E
call HPOP
add esp, 4
.Lt_0A85:
.Lt_0A84:
cmp dword ptr [Lt_0E16], 0
jne .Lt_0A87
push offset Lt_007D
call HPOP
add esp, 4
.Lt_0A87:
.Lt_0A86:
cmp dword ptr [Lt_0E15], 0
jne .Lt_0A89
push offset Lt_007F
call HPOP
add esp, 4
.Lt_0A89:
.Lt_0A88:
.Lt_0A52:
pop ebx
mov esp, ebp
pop ebp
ret
.size HMEMMOVEREP, .-HMEMMOVEREP

.section .bss
.balign 4
	.lcomm	Lt_0E13,12
.balign 4
	.lcomm	Lt_0E14,12
.balign 4
	.lcomm	Lt_0E1A,12
.balign 4
	.lcomm	Lt_0E15,4
.balign 4
	.lcomm	Lt_0E16,4
.balign 4
	.lcomm	Lt_0E17,4
.balign 4
	.lcomm	Lt_0E18,4
.balign 4
	.lcomm	Lt_0E19,4

.section .text
.balign 16
HMEMMOVEBLK:
.type HMEMMOVEBLK, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0A8A:
push 0
push dword ptr [ebp+8]
call HFINDREGNOTINVREG
add esp, 8
mov dword ptr [Lt_0E1B], eax
push dword ptr [Lt_0E1B]
push dword ptr [ebp+12]
call HISREGINVREG
add esp, 8
test eax, eax
je .Lt_0A8D
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HMEMMOVEREP
add esp, 12
jmp .Lt_0A8B
.Lt_0A8D:
.Lt_0A8C:
push 0
push 0
push dword ptr [Lt_0E1B]
push 7
call HGETREGNAME
add esp, 8
push eax
push -1
push offset Lt_0E1C
call fb_StrAssign
add esp, 20
push dword ptr [Lt_0E1B]
push 0
call HISREGFREE
add esp, 8
mov dword ptr [Lt_0E1D], eax
cmp dword ptr [Lt_0E1D], 0
jne .Lt_0A8F
push dword ptr [Lt_0E1C]
call HPUSH
add esp, 4
.Lt_0A8F:
.Lt_0A8E:
mov dword ptr [Lt_0E1E], 0
mov dword ptr [Lt_0E1F], 1
mov eax, dword ptr [ebp+16]
shr eax, 2
mov ebx, eax
mov dword ptr [ebp-4], ebx
jmp .Lt_0A91
.Lt_0A94:
push -1
push 0
push dword ptr [Lt_0E1E]
push 7
push offset Lt_0E20
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
push dword ptr [Lt_0E20]
push dword ptr [Lt_0E1C]
call HMOV
add esp, 8
push -1
push 0
push dword ptr [Lt_0E1E]
push 7
push offset Lt_0E21
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push dword ptr [Lt_0E1C]
push dword ptr [Lt_0E21]
call HMOV
add esp, 8
add dword ptr [Lt_0E1E], 4
.Lt_0A92:
inc dword ptr [Lt_0E1F]
.Lt_0A91:
mov ebx, dword ptr [ebp-4]
cmp dword ptr [Lt_0E1F], ebx
jle .Lt_0A94
.Lt_0A93:
mov ebx, dword ptr [ebp+16]
and ebx, 2
test ebx, ebx
je .Lt_0A96
push 0
push 0
push dword ptr [Lt_0E1B]
push 4
call HGETREGNAME
add esp, 8
push eax
push -1
push offset Lt_0E1C
call fb_StrAssign
add esp, 20
push -1
push 0
push dword ptr [Lt_0E1E]
push 4
push offset Lt_0E20
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
push dword ptr [Lt_0E20]
push dword ptr [Lt_0E1C]
call HMOV
add esp, 8
push -1
push 0
push dword ptr [Lt_0E1E]
push 4
push offset Lt_0E21
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push dword ptr [Lt_0E1C]
push dword ptr [Lt_0E21]
call HMOV
add esp, 8
add dword ptr [Lt_0E1E], 2
.Lt_0A96:
.Lt_0A95:
mov eax, dword ptr [ebp+16]
and eax, 1
test eax, eax
je .Lt_0A98
push 0
push 0
push dword ptr [Lt_0E1B]
push 1
call HGETREGNAME
add esp, 8
push eax
push -1
push offset Lt_0E1C
call fb_StrAssign
add esp, 20
push -1
push 0
push dword ptr [Lt_0E1E]
push 1
push offset Lt_0E20
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
push dword ptr [Lt_0E20]
push dword ptr [Lt_0E1C]
call HMOV
add esp, 8
push -1
push 0
push dword ptr [Lt_0E1E]
push 1
push offset Lt_0E21
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push dword ptr [Lt_0E1C]
push dword ptr [Lt_0E21]
call HMOV
add esp, 8
.Lt_0A98:
.Lt_0A97:
cmp dword ptr [Lt_0E1D], 0
jne .Lt_0A9A
push dword ptr [Lt_0E1C]
call HPOP
add esp, 4
.Lt_0A9A:
.Lt_0A99:
.Lt_0A8B:
pop ebx
mov esp, ebp
pop ebp
ret
.size HMEMMOVEBLK, .-HMEMMOVEBLK

.section .bss
.balign 4
	.lcomm	Lt_0E21,12
.balign 4
	.lcomm	Lt_0E20,12
.balign 4
	.lcomm	Lt_0E1C,12
.balign 4
	.lcomm	Lt_0E1F,4
.balign 4
	.lcomm	Lt_0E1E,4
.balign 4
	.lcomm	Lt_0E1B,4
.balign 4
	.lcomm	Lt_0E1D,4

.section .text
.balign 16
_EMITMEMMOVE:
.type _EMITMEMMOVE, @function
push ebp
mov ebp, esp
.Lt_0A9B:
cmp dword ptr [ebp+16], 16
jbe .Lt_0A9E
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HMEMMOVEREP
add esp, 12
jmp .Lt_0A9D
.Lt_0A9E:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HMEMMOVEBLK
add esp, 12
.Lt_0A9D:
.Lt_0A9C:
mov esp, ebp
pop ebp
ret
.size _EMITMEMMOVE, .-_EMITMEMMOVE
.balign 16
_EMITMEMSWAP:
.type _EMITMEMSWAP, @function
push ebp
mov ebp, esp
.Lt_0A9F:
.Lt_0AA0:
mov esp, ebp
pop ebp
ret
.size _EMITMEMSWAP, .-_EMITMEMSWAP
.balign 16
HMEMCLEARREPIMM:
.type HMEMCLEARREPIMM, @function
push ebp
mov ebp, esp
push ebx
.Lt_0AA1:
push -1
push 0
push 0
push -2147483648
push offset Lt_0E22
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push 5
push 0
call HISREGFREE
add esp, 8
mov dword ptr [Lt_0E23], eax
push 3
push 0
call HISREGFREE
add esp, 8
mov dword ptr [Lt_0E24], eax
push 1
push 0
call HISREGFREE
add esp, 8
mov dword ptr [Lt_0E25], eax
cmp dword ptr [Lt_0E23], 0
jne .Lt_0AA4
push offset Lt_0081
call HPUSH
add esp, 4
.Lt_0AA4:
.Lt_0AA3:
cmp dword ptr [Lt_0E24], 0
jne .Lt_0AA6
push offset Lt_007F
call HPUSH
add esp, 4
.Lt_0AA6:
.Lt_0AA5:
cmp dword ptr [Lt_0E25], 0
jne .Lt_0AA8
push offset Lt_007D
call HPUSH
add esp, 4
.Lt_0AA8:
.Lt_0AA7:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 4
je .Lt_0AAA
push dword ptr [Lt_0E22]
push offset Lt_007D
call HMOV
add esp, 8
jmp .Lt_0AA9
.Lt_0AAA:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+12], 1
je .Lt_0AAC
push dword ptr [Lt_0E22]
push offset Lt_007D
call HMOV
add esp, 8
.Lt_0AAC:
.Lt_0AAB:
.Lt_0AA9:
push offset Lt_0498
call OUTP
add esp, 4
cmp dword ptr [ebp+12], 4
jbe .Lt_0AAE
push 0
push 10
push offset Lt_0A6D
push -1
push offset Lt_0E26
call fb_StrAssign
add esp, 20
push 0
push -1
mov eax, dword ptr [ebp+12]
shr eax, 2
mov ebx, eax
push ebx
call fb_UIntToStr
add esp, 4
push eax
push -1
push offset Lt_0E26
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0E26]
call OUTP
add esp, 4
push offset Lt_0499
call OUTP
add esp, 4
jmp .Lt_0AAD
.Lt_0AAE:
cmp dword ptr [ebp+12], 4
jne .Lt_0AAF
push offset Lt_0AB0
call OUTP
add esp, 4
mov eax, dword ptr [ebp+12]
and eax, 3
test eax, eax
jbe .Lt_0AB2
push offset Lt_0A75
call OUTP
add esp, 4
.Lt_0AB2:
.Lt_0AB1:
.Lt_0AAF:
.Lt_0AAD:
mov eax, dword ptr [ebp+12]
and eax, 3
mov ebx, eax
mov dword ptr [ebp+12], ebx
cmp dword ptr [ebp+12], 0
jbe .Lt_0AB4
cmp dword ptr [ebp+12], 2
jb .Lt_0AB6
push offset Lt_0AB7
call OUTP
add esp, 4
cmp dword ptr [ebp+12], 3
jne .Lt_0AB9
push offset Lt_0A7F
call OUTP
add esp, 4
.Lt_0AB9:
.Lt_0AB8:
.Lt_0AB6:
.Lt_0AB5:
mov ebx, dword ptr [ebp+12]
and ebx, 1
test ebx, ebx
je .Lt_0ABB
push offset Lt_0ABC
call OUTP
add esp, 4
.Lt_0ABB:
.Lt_0ABA:
.Lt_0AB4:
.Lt_0AB3:
cmp dword ptr [Lt_0E25], 0
jne .Lt_0ABE
push offset Lt_007D
call HPOP
add esp, 4
.Lt_0ABE:
.Lt_0ABD:
cmp dword ptr [Lt_0E24], 0
jne .Lt_0AC0
push offset Lt_007F
call HPOP
add esp, 4
.Lt_0AC0:
.Lt_0ABF:
cmp dword ptr [Lt_0E23], 0
jne .Lt_0AC2
push offset Lt_0081
call HPOP
add esp, 4
.Lt_0AC2:
.Lt_0AC1:
.Lt_0AA2:
pop ebx
mov esp, ebp
pop ebp
ret
.size HMEMCLEARREPIMM, .-HMEMCLEARREPIMM

.section .bss
.balign 4
	.lcomm	Lt_0E22,12
.balign 4
	.lcomm	Lt_0E26,12
.balign 4
	.lcomm	Lt_0E23,4
.balign 4
	.lcomm	Lt_0E24,4
.balign 4
	.lcomm	Lt_0E25,4

.section .text
.balign 16
HMEMCLEARBLKIMM:
.type HMEMCLEARBLKIMM, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0AC3:
mov dword ptr [Lt_0E27], 0
mov dword ptr [Lt_0E28], 1
mov eax, dword ptr [ebp+12]
shr eax, 2
mov ebx, eax
mov dword ptr [ebp-4], ebx
jmp .Lt_0AC6
.Lt_0AC9:
push -1
push 0
push dword ptr [Lt_0E27]
push 7
push offset Lt_0E29
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push offset Lt_0006
push dword ptr [Lt_0E29]
call HMOV
add esp, 8
add dword ptr [Lt_0E27], 4
.Lt_0AC7:
inc dword ptr [Lt_0E28]
.Lt_0AC6:
mov ebx, dword ptr [ebp-4]
cmp dword ptr [Lt_0E28], ebx
jle .Lt_0AC9
.Lt_0AC8:
mov ebx, dword ptr [ebp+12]
and ebx, 2
test ebx, ebx
je .Lt_0ACB
push -1
push 0
push dword ptr [Lt_0E27]
push 4
push offset Lt_0E29
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push offset Lt_0006
push dword ptr [Lt_0E29]
call HMOV
add esp, 8
add dword ptr [Lt_0E27], 2
.Lt_0ACB:
.Lt_0ACA:
mov ebx, dword ptr [ebp+12]
and ebx, 1
test ebx, ebx
je .Lt_0ACD
push -1
push 0
push dword ptr [Lt_0E27]
push 1
push offset Lt_0E29
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push offset Lt_0006
push dword ptr [Lt_0E29]
call HMOV
add esp, 8
.Lt_0ACD:
.Lt_0ACC:
.Lt_0AC4:
pop ebx
mov esp, ebp
pop ebp
ret
.size HMEMCLEARBLKIMM, .-HMEMCLEARBLKIMM

.section .bss
.balign 4
	.lcomm	Lt_0E29,12
.balign 4
	.lcomm	Lt_0E28,4
.balign 4
	.lcomm	Lt_0E27,4

.section .text
.balign 16
HMEMCLEAR:
.type HMEMCLEAR, @function
push ebp
mov ebp, esp
.Lt_0ACE:
push -1
push 0
push 0
push -2147483648
push offset Lt_0E2A
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push -1
push 0
push 0
push -2147483648
push offset Lt_0E2B
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
push 5
push 0
call HISREGFREE
add esp, 8
mov dword ptr [Lt_0E2C], eax
push 3
push 0
call HISREGFREE
add esp, 8
mov dword ptr [Lt_0E2D], eax
push 1
push 0
call HISREGFREE
add esp, 8
mov dword ptr [Lt_0E2E], eax
cmp dword ptr [Lt_0E2C], 0
jne .Lt_0AD1
push offset Lt_0081
call HPUSH
add esp, 4
.Lt_0AD1:
.Lt_0AD0:
cmp dword ptr [Lt_0E2D], 0
jne .Lt_0AD3
push offset Lt_007F
call HPUSH
add esp, 4
.Lt_0AD3:
.Lt_0AD2:
cmp dword ptr [Lt_0E2E], 0
jne .Lt_0AD5
push offset Lt_007D
call HPUSH
add esp, 4
.Lt_0AD5:
.Lt_0AD4:
push 1
push dword ptr [ebp+12]
call HISREGINVREG
add esp, 8
test eax, eax
jne .Lt_0AD7
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 4
je .Lt_0AD9
push dword ptr [Lt_0E2A]
push offset Lt_007D
call HMOV
add esp, 8
jmp .Lt_0AD8
.Lt_0AD9:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+12], 1
je .Lt_0ADB
push dword ptr [Lt_0E2A]
push offset Lt_007D
call HMOV
add esp, 8
.Lt_0ADB:
.Lt_0ADA:
.Lt_0AD8:
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax], 4
je .Lt_0ADD
push dword ptr [Lt_0E2B]
push offset Lt_007F
call HMOV
add esp, 8
jmp .Lt_0ADC
.Lt_0ADD:
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax+12], 3
je .Lt_0ADF
push dword ptr [Lt_0E2B]
push offset Lt_007F
call HMOV
add esp, 8
.Lt_0ADF:
.Lt_0ADE:
.Lt_0ADC:
jmp .Lt_0AD6
.Lt_0AD7:
push dword ptr [Lt_0E2B]
call HPUSH
add esp, 4
push 0
push 10
push offset Lt_0AE0
push -1
push offset Lt_0E2F
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0E2A
push -1
push offset Lt_0E2F
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0E2F]
call OUTP
add esp, 4
push offset Lt_007F
call HPOP
add esp, 4
.Lt_0AD6:
push offset Lt_0498
call OUTP
add esp, 4
push offset Lt_0AE1
call OUTP
add esp, 4
push offset Lt_0AE2
call OUTP
add esp, 4
push offset Lt_0499
call OUTP
add esp, 4
push offset Lt_0AE3
call OUTP
add esp, 4
push offset Lt_0AE4
call OUTP
add esp, 4
push offset Lt_0AE5
call OUTP
add esp, 4
cmp dword ptr [Lt_0E2E], 0
jne .Lt_0AE7
push offset Lt_007D
call HPOP
add esp, 4
.Lt_0AE7:
.Lt_0AE6:
cmp dword ptr [Lt_0E2D], 0
jne .Lt_0AE9
push offset Lt_007F
call HPOP
add esp, 4
.Lt_0AE9:
.Lt_0AE8:
cmp dword ptr [Lt_0E2C], 0
jne .Lt_0AEB
push offset Lt_0081
call HPOP
add esp, 4
.Lt_0AEB:
.Lt_0AEA:
.Lt_0ACF:
mov esp, ebp
pop ebp
ret
.size HMEMCLEAR, .-HMEMCLEAR

.section .bss
.balign 4
	.lcomm	Lt_0E2A,12
.balign 4
	.lcomm	Lt_0E2B,12
.balign 4
	.lcomm	Lt_0E2F,12
.balign 4
	.lcomm	Lt_0E2C,4
.balign 4
	.lcomm	Lt_0E2D,4
.balign 4
	.lcomm	Lt_0E2E,4

.section .text
.balign 16
_EMITMEMCLEAR:
.type _EMITMEMCLEAR, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0AEC:
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax], 0
jne .Lt_0AEF
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+24]
mov dword ptr [ebp-4], ebx
cmp dword ptr [ebp-4], 16
jbe .Lt_0AF1
push dword ptr [ebp-4]
push dword ptr [ebp+8]
call HMEMCLEARREPIMM
add esp, 8
jmp .Lt_0AF0
.Lt_0AF1:
push dword ptr [ebp-4]
push dword ptr [ebp+8]
call HMEMCLEARBLKIMM
add esp, 8
.Lt_0AF0:
jmp .Lt_0AEE
.Lt_0AEF:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HMEMCLEAR
add esp, 8
.Lt_0AEE:
.Lt_0AED:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITMEMCLEAR, .-_EMITMEMCLEAR
.balign 16
_EMITSTKCLEAR:
.type _EMITSTKCLEAR, @function
push ebp
mov ebp, esp
.Lt_0AF2:
push dword ptr [ebp+20]
push dword ptr [ebp+16]
call HCLEARLOCALS
add esp, 8
.Lt_0AF3:
mov esp, ebp
pop ebp
ret
.size _EMITSTKCLEAR, .-_EMITSTKCLEAR
.balign 16
_EMITLINEINI:
.type _EMITLINEINI, @function
push ebp
mov ebp, esp
.Lt_0AF4:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call EDBGLINEBEGIN
add esp, 12
.Lt_0AF5:
mov esp, ebp
pop ebp
ret
.size _EMITLINEINI, .-_EMITLINEINI
.balign 16
_EMITLINEEND:
.type _EMITLINEEND, @function
push ebp
mov ebp, esp
.Lt_0AF6:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call EDBGLINEEND
add esp, 12
.Lt_0AF7:
mov esp, ebp
pop ebp
ret
.size _EMITLINEEND, .-_EMITLINEEND
.balign 16
_EMITSCOPEINI:
.type _EMITSCOPEINI, @function
push ebp
mov ebp, esp
.Lt_0AF8:
push dword ptr [ebp+8]
call EDBGEMITSCOPEINI
add esp, 4
.Lt_0AF9:
mov esp, ebp
pop ebp
ret
.size _EMITSCOPEINI, .-_EMITSCOPEINI
.balign 16
_EMITSCOPEEND:
.type _EMITSCOPEEND, @function
push ebp
mov ebp, esp
.Lt_0AFA:
push dword ptr [ebp+8]
call EDBGEMITSCOPEEND
add esp, 4
.Lt_0AFB:
mov esp, ebp
pop ebp
ret
.size _EMITSCOPEEND, .-_EMITSCOPEEND
.balign 16
_INIT:
.type _INIT, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0B3B:
call HINITREGTB
mov eax, dword ptr [ENV+212]
sal eax, 4
mov ebx, dword ptr [DTYPETB+eax]
mov dword ptr [DTYPETB+96], ebx
mov ebx, dword ptr [DTYPETB+eax+4]
mov dword ptr [DTYPETB+100], ebx
mov ebx, dword ptr [DTYPETB+eax+8]
mov dword ptr [DTYPETB+104], ebx
mov ebx, dword ptr [DTYPETB+eax+12]
mov dword ptr [DTYPETB+108], ebx
mov dword ptr [EMIT+148], 0
mov dword ptr [EMIT+140], -1
mov dword ptr [EMIT+144], -1
mov dword ptr [ebp-8], 66304
cmp dword ptr [ENV+116], 1
jne .Lt_0B3E
or dword ptr [ebp-8], 1
.Lt_0B3E:
.Lt_0B3D:
mov eax, dword ptr [IR+284]
or eax, dword ptr [ebp-8]
mov ebx, eax
mov dword ptr [IR+284], ebx
call EDBGINIT
mov dword ptr [ebp-4], -1
.Lt_0B3C:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size _INIT, .-_INIT
.balign 16
_END:
.type _END, @function
.Lt_0B3F:
mov dword ptr [EMIT+140], -1
mov dword ptr [EMIT+144], -1
call HENDREGTB
call HENDKEYWORDSTB
.Lt_0B40:
ret
.size _END, .-_END
.balign 16
_GETOPTIONVALUE:
.type _GETOPTIONVALUE, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_0B41:
cmp dword ptr [ebp+8], 1
jne .Lt_0B44
.Lt_0B45:
mov dword ptr [ebp-4], 16
jmp .Lt_0B42
jmp .Lt_0B43
.Lt_0B44:
push 0
push 1
push 0
push offset Lt_0B47
push 21
call ERRREPORTEX
add esp, 20
.Lt_0B46:
.Lt_0B43:
.Lt_0B42:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size _GETOPTIONVALUE, .-_GETOPTIONVALUE
.balign 16
_OPEN:
.type _OPEN, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_0B48:
lea eax, [ENV+524]
push eax
call HFILEEXISTS
add esp, 4
test eax, eax
je .Lt_0B4B
lea eax, [ENV+524]
push eax
call fb_StrAllocTempDescZ
add esp, 4
push eax
call fb_FileKill
add esp, 4
.Lt_0B4B:
.Lt_0B4A:
call fb_FileFree
mov dword ptr [ENV+520], eax
push 0
push dword ptr [ENV+520]
push 0
push 3
push 0
lea eax, [ENV+524]
push eax
call fb_StrAllocTempDescZ
add esp, 4
push eax
call fb_FileOpen
add esp, 24
test eax, eax
je .Lt_0B4D
mov dword ptr [ebp-4], 0
jmp .Lt_0B49
.Lt_0B4D:
.Lt_0B4C:
call HWRITEHEADER
mov dword ptr [ebp-4], -1
.Lt_0B49:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size _OPEN, .-_OPEN
.balign 16
_CLOSE:
.type _CLOSE, @function
push ebp
mov ebp, esp
sub esp, 48
.Lt_0B4E:
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
push 0
push -1
push 6
push offset Lt_0B51
push -1
push -1
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call fb_DoubleToStr
add esp, 8
push eax
push -1
push 20
push offset Lt_0B50
push 261
lea eax, [ENV+244]
push eax
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ebp-24]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
lea eax, [ebp-36]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-48]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-48]
call HCOMMENT
add esp, 4
lea eax, [ebp-48]
push eax
call fb_StrDelete
add esp, 4
push 0
call EDBGINCLUDE
add esp, 4
push offset HDECLVARIABLE
push 1
call SYMBFOREACHGLOBAL
add esp, 8
mov eax, dword ptr [ENV+224]
and eax, 4
and eax, dword ptr [ENV+184]
je .Lt_0B57
push offset HEMITEXPORT
push 3
call SYMBFOREACHGLOBAL
add esp, 8
.Lt_0B57:
.Lt_0B56:
push -1
push dword ptr [SYMB+99016]
call HWRITECTOR
add esp, 8
push 0
push dword ptr [SYMB+99056]
call HWRITECTOR
add esp, 8
call EDBGEMITFOOTER
push dword ptr [ENV+520]
call fb_FileClose
add esp, 4
test eax, eax
je .Lt_0B59
.Lt_0B59:
.Lt_0B58:
mov dword ptr [ENV+520], 0
.Lt_0B4F:
mov esp, ebp
pop ebp
ret
.size _CLOSE, .-_CLOSE
.balign 16
_PROCGETFRAMEREGNAME:
.type _PROCGETFRAMEREGNAME, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_0B5A:
mov eax, offset Lt_0E30
mov dword ptr [ebp-4], eax
.Lt_0B5B:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size _PROCGETFRAMEREGNAME, .-_PROCGETFRAMEREGNAME

.section .data
.balign 4
Lt_0E30:
.ascii "ebp\0"

.section .text
.balign 16
_ISREGPRESERVED:
.type _ISREGPRESERVED, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_0B5C:
cmp dword ptr [ebp+8], 1
jne .Lt_0B5F
mov dword ptr [ebp-4], 0
jmp .Lt_0B5D
.Lt_0B5F:
.Lt_0B5E:
mov eax, dword ptr [ebp+12]
mov dword ptr [ebp-8], eax
jmp .Lt_0B61
.Lt_0B63:
mov dword ptr [ebp-4], 0
jmp .Lt_0B5D
jmp .Lt_0B60
.Lt_0B64:
mov dword ptr [ebp-4], -1
jmp .Lt_0B5D
jmp .Lt_0B60
.Lt_0B61:
cmp dword ptr [ebp-8], 5
ja .Lt_0B64
mov eax, dword ptr [ebp-8]
jmp dword ptr [.LT_0B65+eax*4]
.LT_0B65:
.int .Lt_0B63
.int .Lt_0B64
.int .Lt_0B64
.int .Lt_0B63
.int .Lt_0B64
.int .Lt_0B63
.Lt_0B60:
.Lt_0B5D:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size _ISREGPRESERVED, .-_ISREGPRESERVED
.balign 16
_GETRESULTREG:
.type _GETRESULTREG, @function
push ebp
mov ebp, esp
sub esp, 12
.Lt_0B66:
cmp dword ptr [ebp+12], 0
jne .Lt_0B69
mov eax, dword ptr [ebp+16]
mov dword ptr [eax], 5
mov eax, dword ptr [ebp+8]
and eax, 480
je .Lt_0B6A
mov dword ptr [ebp-4], 22
jmp .Lt_0E31
.Lt_0B6A:
mov eax, dword ptr [ebp+8]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0E31:
mov eax, dword ptr [ebp-4]
cmp eax, 12
sete al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp+8]
and eax, 480
je .Lt_0B6C
mov dword ptr [ebp-8], 22
jmp .Lt_0E32
.Lt_0B6C:
mov eax, dword ptr [ebp+8]
and eax, 31
mov dword ptr [ebp-8], eax
.Lt_0E32:
mov eax, dword ptr [ebp-8]
cmp eax, 13
sete al
shr eax, 1
sbb eax, eax
or eax, dword ptr [ebp-12]
je .Lt_0B6F
mov eax, dword ptr [ebp+20]
mov dword ptr [eax], 0
jmp .Lt_0B6E
.Lt_0B6F:
mov eax, dword ptr [ebp+20]
mov dword ptr [eax], -1
.Lt_0B6E:
jmp .Lt_0B68
.Lt_0B69:
mov eax, dword ptr [ebp+16]
mov dword ptr [eax], 0
mov eax, dword ptr [ebp+20]
mov dword ptr [eax], -1
.Lt_0B68:
.Lt_0B67:
mov esp, ebp
pop ebp
ret
.size _GETRESULTREG, .-_GETRESULTREG
.balign 16
_GETFREEPRESERVEDREG:
.type _GETFREEPRESERVEDREG, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0B70:
mov dword ptr [ebp-4], -1
cmp dword ptr [ebp+8], 1
jne .Lt_0B73
jmp .Lt_0B71
.Lt_0B73:
.Lt_0B72:
push 4
mov eax, dword ptr [ebp+8]
sal eax, 2
mov ebx, offset EMIT
add ebx, eax
push dword ptr [ebx+8]
mov ebx, dword ptr [ebp+8]
sal ebx, 2
mov eax, offset EMIT
add eax, ebx
mov ebx, dword ptr [eax+8]
call dword ptr [ebx+16]
add esp, 8
test eax, eax
je .Lt_0B75
mov dword ptr [ebp-4], 4
jmp .Lt_0B74
.Lt_0B75:
push 2
mov eax, dword ptr [ebp+8]
sal eax, 2
mov ebx, offset EMIT
add ebx, eax
push dword ptr [ebx+8]
mov ebx, dword ptr [ebp+8]
sal ebx, 2
mov eax, offset EMIT
add eax, ebx
mov ebx, dword ptr [eax+8]
call dword ptr [ebx+16]
add esp, 8
test eax, eax
je .Lt_0B76
mov eax, dword ptr [ebp+12]
and eax, 480
je .Lt_0B77
mov dword ptr [ebp-8], 22
jmp .Lt_0E36
.Lt_0B77:
mov eax, dword ptr [ebp+12]
and eax, 31
mov dword ptr [ebp-8], eax
.Lt_0E36:
mov eax, dword ptr [ebp-8]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+4], 1
je .Lt_0B7A
mov dword ptr [ebp-4], 2
.Lt_0B7A:
.Lt_0B79:
jmp .Lt_0B74
.Lt_0B76:
push 1
mov eax, dword ptr [ebp+8]
sal eax, 2
mov ebx, offset EMIT
add ebx, eax
push dword ptr [ebx+8]
mov ebx, dword ptr [ebp+8]
sal ebx, 2
mov eax, offset EMIT
add eax, ebx
mov ebx, dword ptr [eax+8]
call dword ptr [ebx+16]
add esp, 8
test eax, eax
je .Lt_0B7B
mov eax, dword ptr [ebp+12]
and eax, 480
je .Lt_0B7C
mov dword ptr [ebp-8], 22
jmp .Lt_0E37
.Lt_0B7C:
mov eax, dword ptr [ebp+12]
and eax, 31
mov dword ptr [ebp-8], eax
.Lt_0E37:
mov eax, dword ptr [ebp-8]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+4], 1
je .Lt_0B7F
mov dword ptr [ebp-4], 1
.Lt_0B7F:
.Lt_0B7E:
.Lt_0B7B:
.Lt_0B74:
.Lt_0B71:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size _GETFREEPRESERVEDREG, .-_GETFREEPRESERVEDREG
.balign 16
_ISKEYWORD:
.type _ISKEYWORD, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_0B80:
cmp dword ptr [EMIT+148], 0
jne .Lt_0B83
call HINITKEYWORDSTB
.Lt_0B83:
.Lt_0B82:
push dword ptr [ebp+8]
lea eax, [EMIT+152]
push eax
call HASHLOOKUP
add esp, 8
test eax, eax
setne bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-4], ebx
.Lt_0B81:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size _ISKEYWORD, .-_ISKEYWORD
.balign 16
_PROCBEGIN:
.type _PROCBEGIN, @function
push ebp
mov ebp, esp
push ebx
.Lt_0B84:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+108]
mov dword ptr [ebx+8], 0
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+108]
mov dword ptr [eax+12], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+108]
mov dword ptr [ebx+4], 8
push dword ptr [ebp+8]
call EDBGPROCBEGIN
add esp, 4
.Lt_0B85:
pop ebx
mov esp, ebp
pop ebp
ret
.size _PROCBEGIN, .-_PROCBEGIN
.balign 16
_PROCEND:
.type _PROCEND, @function
push ebp
mov ebp, esp
.Lt_0B86:
push dword ptr [ebp+8]
call EDBGPROCEND
add esp, 4
.Lt_0B87:
mov esp, ebp
pop ebp
ret
.size _PROCEND, .-_PROCEND
.balign 16
_PROCALLOCSTATICVARS:
.type _PROCALLOCSTATICVARS, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0B88:
.Lt_0B8A:
cmp dword ptr [ebp+8], 0
je .Lt_0B8B
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-4], ebx
cmp dword ptr [ebp-4], 15
jne .Lt_0B8E
.Lt_0B8F:
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+60]
call _PROCALLOCSTATICVARS
add esp, 4
jmp .Lt_0B8C
.Lt_0B8E:
cmp dword ptr [ebp-4], 1
jne .Lt_0B90
.Lt_0B91:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 2
test eax, eax
je .Lt_0B93
push dword ptr [ebp+8]
call HDECLVARIABLE
add esp, 4
.Lt_0B93:
.Lt_0B92:
.Lt_0B90:
.Lt_0B8C:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+160]
mov dword ptr [ebp+8], ebx
jmp .Lt_0B8A
.Lt_0B8B:
.Lt_0B89:
pop ebx
mov esp, ebp
pop ebp
ret
.size _PROCALLOCSTATICVARS, .-_PROCALLOCSTATICVARS
.balign 16
_PROCALLOCLOCAL:
.type _PROCALLOCLOCAL, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
push esi
.Lt_0B94:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 4
test ebx, ebx
je .Lt_0B97
jmp .Lt_0B95
.Lt_0B97:
.Lt_0B96:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebp+12]
mov esi, dword ptr [eax+72]
mov ecx, dword ptr [eax+76]
push dword ptr [ebx+40]
push dword ptr [ebx+36]
push ecx
push esi
mov eax, [esp+0]
mul dword ptr [esp+8]
xchg eax, [esp+0]
imul eax, [esp+12]
add eax, edx
mov edx, [esp+4]
imul edx, [esp+8]
add edx, eax
mov [esp+4], edx
pop esi
pop ecx
add esp, 8
mov ebx, esi
mov dword ptr [ebp-8], ebx
mov ebx, dword ptr [ebp+8]
mov esi, dword ptr [ebx+108]
mov ebx, dword ptr [ebp-8]
add ebx, 3
and ebx, -4
add dword ptr [esi+8], ebx
mov ebx, dword ptr [ebp+8]
mov esi, dword ptr [ebx+108]
mov ebx, dword ptr [esi+8]
neg ebx
mov dword ptr [ebp-4], ebx
mov ebx, dword ptr [ebp-4]
neg ebx
mov esi, dword ptr [ebp+8]
mov ecx, dword ptr [esi+108]
mov esi, dword ptr [ecx+12]
cmp ebx, esi
jle .Lt_0B99
mov esi, dword ptr [ebp-4]
neg esi
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebx+108]
mov dword ptr [ecx+12], esi
.Lt_0B99:
.Lt_0B98:
mov ecx, dword ptr [ebp-4]
mov esi, ecx
sar esi, 31
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx+44], ecx
mov dword ptr [ebx+48], esi
.Lt_0B95:
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size _PROCALLOCLOCAL, .-_PROCALLOCLOCAL
.balign 16
_PROCALLOCARG:
.type _PROCALLOCARG, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0B9A:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 131072
test ebx, ebx
je .Lt_0B9D
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+36]
mov dword ptr [ebp-4], eax
jmp .Lt_0B9C
.Lt_0B9D:
mov dword ptr [ebp-4], 4
.Lt_0B9C:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+108]
mov ecx, dword ptr [ebx+4]
mov eax, ecx
sar eax, 31
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx+44], ecx
mov dword ptr [ebx+48], eax
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ecx+108]
mov ecx, dword ptr [ebp-4]
add ecx, 3
and ecx, -4
add dword ptr [eax+4], ecx
.Lt_0B9B:
pop ebx
mov esp, ebp
pop ebp
ret
.size _PROCALLOCARG, .-_PROCALLOCARG
.balign 16
_PROCHEADER:
.type _PROCHEADER, @function
push ebp
mov ebp, esp
.Lt_0B9E:
call EMITRESET
push dword ptr [ebp+8]
call EDBGPROCEMITBEGIN
add esp, 4
.Lt_0B9F:
mov esp, ebp
pop ebp
ret
.size _PROCHEADER, .-_PROCHEADER
.balign 16
_PROCFOOTER:
.type _PROCFOOTER, @function
push ebp
mov ebp, esp
sub esp, 56
push ebx
.Lt_0BA0:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 32
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-8], ebx
push 0
push 3
call _SETSECTION
add esp, 8
push dword ptr [ebp+8]
call EDBGEMITPROCHEADER
add esp, 4
push 16
call HALIGN
add esp, 4
cmp dword ptr [ebp-8], 0
je .Lt_0BA3
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 256
test eax, eax
setne al
shr eax, 1
sbb eax, eax
push eax
push dword ptr [ebp+8]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
call HPUBLIC
add esp, 8
.Lt_0BA3:
.Lt_0BA2:
push dword ptr [ebp+8]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
call HLABEL
add esp, 4
cmp dword ptr [ENV+108], 2
jne .Lt_0BA5
push 0
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
push 0
push -1
push 2
push offset Lt_03AC
push -1
push 12
push offset Lt_0BA7
push -1
push 0
push dword ptr [ebp+8]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
push 7
push offset Lt_0BA6
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
lea eax, [ebp-20]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
lea eax, [ebp-32]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
lea eax, [ebp-44]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-56]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-56]
call OUTEX
add esp, 8
lea eax, [ebp-56]
push eax
call fb_StrDelete
add esp, 4
.Lt_0BA5:
.Lt_0BA4:
push dword ptr [ebp+8]
call HCREATEFRAME
add esp, 4
push dword ptr [ebp+8]
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+108]
push dword ptr [ebx+16]
push dword ptr [ebp+8]
call EDBGEMITLINEFLUSH
add esp, 12
call EMITFLUSH
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HDESTROYFRAME
add esp, 8
push dword ptr [ebp+20]
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+108]
push dword ptr [eax+20]
push dword ptr [ebp+8]
call EDBGEMITLINEFLUSH
add esp, 12
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+8]
call EDBGEMITPROCFOOTER
add esp, 12
.Lt_0BA1:
pop ebx
mov esp, ebp
pop ebp
ret
.size _PROCFOOTER, .-_PROCFOOTER
.balign 16
_SCOPEBEGIN:
.type _SCOPEBEGIN, @function
push ebp
mov ebp, esp
.Lt_0BAC:
push dword ptr [ebp+8]
call EDBGSCOPEBEGIN
add esp, 4
.Lt_0BAD:
mov esp, ebp
pop ebp
ret
.size _SCOPEBEGIN, .-_SCOPEBEGIN
.balign 16
_SCOPEEND:
.type _SCOPEEND, @function
push ebp
mov ebp, esp
.Lt_0BAE:
push dword ptr [ebp+8]
call EDBGSCOPEEND
add esp, 4
.Lt_0BAF:
mov esp, ebp
pop ebp
ret
.size _SCOPEEND, .-_SCOPEEND
.balign 16
_SETSECTION:
.type _SETSECTION, @function
push ebp
mov ebp, esp
sub esp, 4
.Lt_0BB0:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call _GETSECTIONSTRING
add esp, 8
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
jne .Lt_0BB3
jmp .Lt_0BB1
.Lt_0BB3:
.Lt_0BB2:
push 0
push 0
push dword ptr [ebp-4]
push -1
push offset Lt_0E3B
call fb_StrAssign
add esp, 20
push 0
push 2
push offset Lt_03AC
push -1
push offset Lt_0E3B
call fb_StrConcatAssign
add esp, 20
push 0
push dword ptr [Lt_0E3B]
call OUTEX
add esp, 8
.Lt_0BB1:
mov esp, ebp
pop ebp
ret
.size _SETSECTION, .-_SETSECTION

.section .bss
.balign 4
	.lcomm	Lt_0E3B,12

.section .text
.balign 16
_GETTYPESTRING:
.type _GETTYPESTRING, @function
push ebp
mov ebp, esp
sub esp, 12
mov dword ptr [ebp-4], 0
.Lt_0BB4:
mov eax, dword ptr [ebp+8]
and eax, 480
je .Lt_0BB6
mov dword ptr [ebp-8], 22
jmp .Lt_0E3C
.Lt_0BB6:
mov eax, dword ptr [ebp+8]
and eax, 31
mov dword ptr [ebp-8], eax
.Lt_0E3C:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-12], eax
jmp .Lt_0BB9
.Lt_0BBB:
mov eax, offset Lt_0BBC
mov dword ptr [ebp-4], eax
jmp .Lt_0BB8
.Lt_0BBD:
mov eax, offset Lt_0BBE
mov dword ptr [ebp-4], eax
jmp .Lt_0BB8
.Lt_0BBF:
mov eax, offset Lt_0BC0
mov dword ptr [ebp-4], eax
jmp .Lt_0BB8
.Lt_0BC1:
mov eax, offset Lt_0BC2
mov dword ptr [ebp-4], eax
jmp .Lt_0BB8
.Lt_0BC3:
mov eax, offset Lt_0BC4
mov dword ptr [ebp-4], eax
jmp .Lt_0BB8
.Lt_0BC5:
mov eax, offset Lt_0BC6
mov dword ptr [ebp-4], eax
jmp .Lt_0BB8
.Lt_0BC7:
mov eax, offset Lt_0BC8
mov dword ptr [ebp-4], eax
jmp .Lt_0BB8
.Lt_0BC9:
mov eax, offset Lt_0BC2
mov dword ptr [ebp-4], eax
jmp .Lt_0BB8
.Lt_0BCA:
mov eax, offset Lt_0BC8
mov dword ptr [ebp-4], eax
jmp .Lt_0BB8
.Lt_0BB9:
mov eax, dword ptr [ebp-12]
add eax, 4294967295
cmp eax, 21
ja .Lt_0BCA
mov eax, dword ptr [ebp-12]
jmp dword ptr [.LT_0BCB+eax*4-4]
.LT_0BCB:
.int .Lt_0BBB
.int .Lt_0BBB
.int .Lt_0BC5
.int .Lt_0BBD
.int .Lt_0BBD
.int .Lt_0BC5
.int .Lt_0BBF
.int .Lt_0BBF
.int .Lt_0BBF
.int .Lt_0BC1
.int .Lt_0BC1
.int .Lt_0BC3
.int .Lt_0BC3
.int .Lt_0BC1
.int .Lt_0BC3
.int .Lt_0BC7
.int .Lt_0BC5
.int .Lt_0BC7
.int .Lt_0BCA
.int .Lt_0BCA
.int .Lt_0BCA
.int .Lt_0BC9
.Lt_0BB8:
.Lt_0BB5:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size _GETTYPESTRING, .-_GETTYPESTRING
.balign 16
_GETSECTIONSTRING:
.type _GETSECTIONSTRING, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
mov dword ptr [ebp-4], 0
.Lt_0BCC:
mov eax, dword ptr [EMIT+140]
cmp eax, dword ptr [ebp+8]
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [EMIT+144]
cmp ebx, dword ptr [ebp+12]
sete bl
shr ebx, 1
sbb ebx, ebx
and eax, ebx
je .Lt_0BCF
mov dword ptr [ebp-4], 0
jmp .Lt_0BCD
.Lt_0BCF:
.Lt_0BCE:
push 0
push 2
push offset Lt_03AC
push -1
push offset Lt_0E3F
call fb_StrAssign
add esp, 20
push 3
call FBGETOPTION
add esp, 4
cmp eax, 7
je .Lt_0BD1
push 0
push 10
push offset Lt_0BD2
push -1
push offset Lt_0E3F
call fb_StrConcatAssign
add esp, 20
.Lt_0BD1:
.Lt_0BD0:
push 0
push 2
push offset Lt_0007
push -1
push offset Lt_0E3F
call fb_StrConcatAssign
add esp, 20
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-8], eax
jmp .Lt_0BD4
.Lt_0BD6:
push 3
call FBGETOPTION
add esp, 4
mov dword ptr [ebp-12], eax
jmp .Lt_0BD8
.Lt_0BDA:
push 0
push 6
push offset Lt_0BDB
push -1
push offset Lt_0E3F
call fb_StrConcatAssign
add esp, 20
jmp .Lt_0BD7
.Lt_0BDC:
push 0
push 6
push offset Lt_0BDD
push -1
push offset Lt_0E3F
call fb_StrConcatAssign
add esp, 20
jmp .Lt_0BD7
.Lt_0BDE:
push 0
push 7
push offset Lt_0BDF
push -1
push offset Lt_0E3F
call fb_StrConcatAssign
add esp, 20
jmp .Lt_0BD7
.Lt_0BD8:
cmp dword ptr [ebp-12], 7
ja .Lt_0BDE
mov eax, dword ptr [ebp-12]
jmp dword ptr [.LT_0BE0+eax*4]
.LT_0BE0:
.int .Lt_0BDA
.int .Lt_0BDA
.int .Lt_0BDE
.int .Lt_0BDA
.int .Lt_0BDA
.int .Lt_0BDE
.int .Lt_0BDE
.int .Lt_0BDC
.Lt_0BD7:
jmp .Lt_0BD3
.Lt_0BE1:
push 0
push 5
push offset Lt_0BE2
push -1
push offset Lt_0E3F
call fb_StrConcatAssign
add esp, 20
jmp .Lt_0BD3
.Lt_0BE3:
push 0
push 4
push offset Lt_0BE4
push -1
push offset Lt_0E3F
call fb_StrConcatAssign
add esp, 20
jmp .Lt_0BD3
.Lt_0BE5:
push 0
push 5
push offset Lt_0BE6
push -1
push offset Lt_0E3F
call fb_StrConcatAssign
add esp, 20
jmp .Lt_0BD3
.Lt_0BE7:
push 0
push 8
push offset Lt_0BE8
push -1
push offset Lt_0E3F
call fb_StrConcatAssign
add esp, 20
jmp .Lt_0BD3
.Lt_0BE9:
push 0
push 8
push offset Lt_0019
push -1
push offset Lt_0E3F
call fb_StrConcatAssign
add esp, 20
jmp .Lt_0BD3
.Lt_0BEA:
push 0
push 6
push offset Lt_0BEB
push -1
push offset Lt_0E3F
call fb_StrConcatAssign
add esp, 20
cmp dword ptr [ebp+12], 0
jle .Lt_0BED
push 0
push 2
push offset Lt_0007
push -1
push offset Lt_0E3F
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push 5
push -1
mov eax, 65535
sub eax, dword ptr [ebp+12]
mov ebx, eax
push ebx
call fb_IntToStr
add esp, 4
push eax
push 6
push offset Lt_0BEE
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
lea eax, [ebp-20]
push eax
call fb_StrConcat
add esp, 20
push eax
call fb_RIGHT
add esp, 8
push eax
push -1
push offset Lt_0E3F
call fb_StrConcatAssign
add esp, 20
.Lt_0BED:
.Lt_0BEC:
cmp dword ptr [ENV+108], 2
jne .Lt_0BF1
push 0
push 18
push offset Lt_0BF7
push -1
push offset Lt_0E3F
call fb_StrConcatAssign
add esp, 20
.Lt_0BF1:
.Lt_0BF0:
jmp .Lt_0BD3
.Lt_0BF8:
push 0
push 6
push offset Lt_0BF9
push -1
push offset Lt_0E3F
call fb_StrConcatAssign
add esp, 20
cmp dword ptr [ebp+12], 0
jle .Lt_0BFB
push 0
push 2
push offset Lt_0007
push -1
push offset Lt_0E3F
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push 5
push -1
mov eax, 65535
sub eax, dword ptr [ebp+12]
mov ebx, eax
push ebx
call fb_IntToStr
add esp, 4
push eax
push 6
push offset Lt_0BEE
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
lea eax, [ebp-20]
push eax
call fb_StrConcat
add esp, 20
push eax
call fb_RIGHT
add esp, 8
push eax
push -1
push offset Lt_0E3F
call fb_StrConcatAssign
add esp, 20
.Lt_0BFB:
.Lt_0BFA:
cmp dword ptr [ENV+108], 2
jne .Lt_0BFE
push 0
push 18
push offset Lt_0BF7
push -1
push offset Lt_0E3F
call fb_StrConcatAssign
add esp, 20
.Lt_0BFE:
.Lt_0BFD:
jmp .Lt_0BD3
.Lt_0BD4:
cmp dword ptr [ebp-8], 7
ja .Lt_0BD3
mov eax, dword ptr [ebp-8]
jmp dword ptr [.LT_0BFF+eax*4]
.LT_0BFF:
.int .Lt_0BD6
.int .Lt_0BE1
.int .Lt_0BE3
.int .Lt_0BE5
.int .Lt_0BE7
.int .Lt_0BEA
.int .Lt_0BF8
.int .Lt_0BE9
.Lt_0BD3:
mov eax, dword ptr [Lt_0E3F]
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp+8]
mov dword ptr [EMIT+140], eax
mov eax, dword ptr [ebp+12]
mov dword ptr [EMIT+144], eax
.Lt_0BCD:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size _GETSECTIONSTRING, .-_GETSECTIONSTRING

.section .bss
.balign 4
	.lcomm	Lt_0E3F,12
	#fbc-1.01.0/src/compiler/emit_x86.bas' compilation took 0.07918010104913265 secs

.section .rodata
.balign 4
Lt_0000:	.ascii	"\0"
.balign 4
Lt_0004:	.ascii	"1\0"
.balign 4
Lt_0005:	.ascii	"01\0"
.balign 4
Lt_0006:	.ascii	"0\0"
.balign 4
Lt_0007:	.ascii	".\0"
.balign 4
Lt_000E:	.ascii	"FreeBASIC 1.01.0\0"
.balign 4
Lt_0019:	.ascii	"fbctinf\0"

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
.balign 4
	.lcomm	Lt_006C,32

.section .rodata
.balign 4
Lt_006D:	.ascii	", \0"

.section .data
.balign 4

.globl DTYPETB
DTYPETB:
.int 0
.ascii "void ptr\0"
.skip 3,0
.int 0
.ascii "byte ptr\0"
.skip 3,0
.int 0
.ascii "byte ptr\0"
.skip 3,0
.int 0
.ascii "byte ptr\0"
.skip 3,0
.int 1
.ascii "word ptr\0"
.skip 3,0
.int 1
.ascii "word ptr\0"
.skip 3,0
.int 1
.ascii "word ptr\0"
.skip 3,0
.int 2
.ascii "dword ptr\0"
.skip 2,0
.int 2
.ascii "dword ptr\0"
.skip 2,0
.int 2
.ascii "dword ptr\0"
.skip 2,0
.int 2
.ascii "dword ptr\0"
.skip 2,0
.int 2
.ascii "dword ptr\0"
.skip 2,0
.int 2
.ascii "qword ptr\0"
.skip 2,0
.int 2
.ascii "qword ptr\0"
.skip 2,0
.int 3
.ascii "dword ptr\0"
.skip 2,0
.int 3
.ascii "qword ptr\0"
.skip 2,0
.int 0
.ascii "\0"
.skip 11,0
.int 0
.ascii "byte ptr\0"
.skip 3,0
.int 2
.ascii "dword ptr\0"
.skip 2,0
.int 0
.ascii "\0"
.skip 11,0
.int 2
.ascii "dword ptr\0"
.skip 2,0
.int 0
.ascii "byte ptr\0"
.skip 3,0
.int 2
.ascii "dword ptr\0"
.skip 2,0
.int 3
.ascii "xmmword ptr\0"
.balign 4
RNAMETB:
.ascii "dl\0"
.skip 5,0
.ascii "di\0"
.skip 5,0
.ascii "si\0"
.skip 5,0
.ascii "cl\0"
.skip 5,0
.ascii "bl\0"
.skip 5,0
.ascii "al\0"
.skip 5,0
.ascii "bp\0"
.skip 5,0
.ascii "sp\0"
.skip 5,0
.ascii "dx\0"
.skip 5,0
.ascii "di\0"
.skip 5,0
.ascii "si\0"
.skip 5,0
.ascii "cx\0"
.skip 5,0
.ascii "bx\0"
.skip 5,0
.ascii "ax\0"
.skip 5,0
.ascii "bp\0"
.skip 5,0
.ascii "sp\0"
.skip 5,0
.ascii "edx\0"
.skip 4,0
.ascii "edi\0"
.skip 4,0
.ascii "esi\0"
.skip 4,0
.ascii "ecx\0"
.skip 4,0
.ascii "ebx\0"
.skip 4,0
.ascii "eax\0"
.skip 4,0
.ascii "ebp\0"
.skip 4,0
.ascii "esp\0"
.skip 4,0
.ascii "st(0)\0"
.skip 2,0
.ascii "st(1)\0"
.skip 2,0
.ascii "st(2)\0"
.skip 2,0
.ascii "st(3)\0"
.skip 2,0
.ascii "st(4)\0"
.skip 2,0
.ascii "st(5)\0"
.skip 2,0
.ascii "st(6)\0"
.skip 2,0
.ascii "st(7)\0"
.skip 2,0

.section .rodata
.balign 4
Lt_0073:	.ascii	"cl\0"
.balign 4
Lt_0078:	.ascii	"dx\0"
.balign 4
Lt_0079:	.ascii	"cx\0"
.balign 4
Lt_007B:	.ascii	"ax\0"
.balign 4
Lt_007C:	.ascii	"edx\0"
.balign 4
Lt_007D:	.ascii	"edi\0"
.balign 4
Lt_007E:	.ascii	"esi\0"
.balign 4
Lt_007F:	.ascii	"ecx\0"
.balign 4
Lt_0080:	.ascii	"ebx\0"
.balign 4
Lt_0081:	.ascii	"eax\0"
.balign 4
Lt_0082:	.ascii	"ebp\0"

.section .data
.balign 4
KEYWORDTB:
.int Lt_0093
.int Lt_0094
.int Lt_0095
.int Lt_0096
.int Lt_0097
.int Lt_0098
.int Lt_0099
.int Lt_009A
.int Lt_009B
.int Lt_009C
.int Lt_009D
.int Lt_009E
.int Lt_009F
.int Lt_00A0
.int Lt_00A1
.int Lt_00A2
.int Lt_00A3
.int Lt_00A4
.int Lt_00A5
.int Lt_00A6
.int Lt_00A7
.int Lt_00A8
.int Lt_00A9
.int Lt_00AA
.int Lt_00AB
.int Lt_00AC
.int Lt_00AD
.int Lt_00AE
.int Lt_00AF
.int Lt_00B0
.int Lt_00B1
.int Lt_00B2
.int Lt_00B3
.int Lt_00B4
.int Lt_00B5
.int Lt_00B6
.int Lt_00B7
.int Lt_00B8
.int Lt_00B9
.int Lt_00BA
.int Lt_00BB
.int Lt_00BC
.int Lt_00BD
.int Lt_00BE
.int Lt_00BF
.int Lt_00C0
.int Lt_00C1
.int Lt_00C2
.int Lt_00C3
.int Lt_00C4
.int Lt_00C5
.int Lt_00C6
.int Lt_00C7
.int Lt_00C8
.int Lt_00C9
.int Lt_00CA
.int Lt_00CB
.int Lt_00CC
.int Lt_00CD
.int Lt_00CE
.int Lt_00CF
.int Lt_00D0
.int Lt_00D1
.int Lt_00D2
.int Lt_00D3
.int Lt_00D4
.int Lt_00D5
.int Lt_00D6
.int Lt_00D7
.int Lt_00D8
.int Lt_00D9
.int Lt_00DA
.int Lt_00DB
.int Lt_00DC
.int Lt_00DD
.int Lt_00DE
.int Lt_00DF
.int Lt_00E0
.int Lt_00E1
.int Lt_00E2
.int Lt_00E3
.int Lt_00E4
.int Lt_00E5
.int Lt_00E6
.int Lt_00E7
.int Lt_00E8
.int Lt_00E9
.int Lt_00EA
.int Lt_00EB
.int Lt_00EC
.int Lt_00EC
.int Lt_00ED
.int Lt_00EE
.int Lt_00EF
.int Lt_00F0
.int Lt_00F1
.int Lt_00F2
.int Lt_00F3
.int Lt_00F4
.int Lt_00F5
.int Lt_00F6
.int Lt_00F7
.int Lt_00F8
.int Lt_00F9
.int Lt_00FA
.int Lt_00FB
.int Lt_00FC
.int Lt_00FD
.int Lt_00FE
.int Lt_00FF
.int Lt_0100
.int Lt_0101
.int Lt_0102
.int Lt_0103
.int Lt_0104
.int Lt_0105
.int Lt_0106
.int Lt_0107
.int Lt_0108
.int Lt_0109
.int Lt_010A
.int Lt_010B
.int Lt_010C
.int Lt_010D
.int Lt_010E
.int Lt_010F
.int Lt_0110
.int Lt_0111
.int Lt_0112
.int Lt_0113
.int Lt_0114
.int Lt_0115
.int Lt_0116
.int Lt_0117
.int Lt_0118
.int Lt_0119
.int Lt_011A
.int Lt_011B
.int Lt_011C
.int Lt_011D
.int Lt_011E
.int Lt_011F
.int Lt_0120
.int Lt_0121
.int Lt_0122
.int Lt_0123
.int Lt_0124
.int Lt_0125
.int Lt_0126
.int Lt_0127
.int Lt_0128
.int Lt_0129
.int Lt_012A
.int Lt_012B
.int Lt_012C
.int Lt_012D
.int Lt_012E
.int Lt_012F
.int Lt_0130
.int Lt_0131
.int Lt_0132
.int Lt_0133
.int Lt_0134
.int Lt_0135
.int Lt_0136
.int Lt_0137
.int Lt_0138
.int Lt_0139
.int Lt_013A
.int Lt_013B
.int Lt_013C
.int Lt_013D
.int Lt_013E
.int Lt_013F
.int Lt_0140
.int Lt_0141
.int Lt_0142
.int Lt_0143
.int Lt_0144
.int Lt_0145
.int Lt_0146
.int Lt_0147
.int Lt_0148
.int Lt_0149
.int Lt_014A
.int Lt_014B
.int Lt_014C
.int Lt_014D
.int Lt_014E
.int Lt_014F
.int Lt_0150
.int Lt_0151
.int Lt_0152
.int Lt_0153
.int Lt_0154
.int Lt_0155
.int Lt_0156
.int Lt_0157
.int Lt_0158
.int Lt_0159
.int Lt_015A
.int Lt_015B
.int Lt_015C
.int Lt_015D
.int Lt_015E
.int Lt_015F
.int Lt_0160
.int Lt_0161
.int Lt_0162
.int Lt_0163
.int Lt_0164
.int Lt_0165
.int Lt_0166
.int Lt_0167
.int Lt_0168
.int Lt_0169
.int Lt_016A
.int Lt_016B
.int Lt_016C
.int Lt_016D
.int Lt_016E
.int Lt_016F
.int Lt_0170
.int Lt_0171
.int Lt_0172
.int Lt_0173
.int Lt_0174
.int Lt_0175
.int Lt_0176
.int Lt_0177
.int Lt_0178
.int Lt_0179
.int Lt_017A
.int Lt_017B
.int Lt_017C
.int Lt_017D
.int Lt_017E
.int Lt_017F
.int Lt_0180
.int Lt_0181
.int Lt_0182
.int Lt_0183
.int Lt_0184
.int Lt_0185
.int Lt_0186
.int Lt_0187
.int Lt_0188
.int Lt_0189
.int Lt_018A
.int Lt_018B
.int Lt_018C
.int Lt_018D
.int Lt_018E
.int Lt_018F
.int Lt_0190
.int Lt_0191
.int Lt_0192
.int Lt_0193
.int Lt_0194
.int Lt_0195
.int Lt_0196
.int Lt_0197
.int Lt_0198
.int Lt_0199
.int Lt_019A
.int Lt_019B
.int Lt_019C
.int Lt_019D
.int Lt_019E
.int Lt_019F
.int Lt_01A0
.int Lt_01A1
.int Lt_01A2
.int Lt_01A3
.int Lt_01A4
.int Lt_01A5
.int Lt_01A6
.int Lt_01A7
.int Lt_01A8
.int Lt_01A9
.int Lt_01AA
.int Lt_01AB
.int Lt_01AC
.int Lt_01AD
.int Lt_01AE
.int Lt_01AF
.int Lt_01B0
.int Lt_01B1
.int Lt_01B2
.int Lt_01B3
.int Lt_01B4
.int Lt_01B5
.int Lt_01B6
.int Lt_01B7
.int Lt_01B8
.int Lt_01B9
.int Lt_01BA
.int Lt_01BB
.int Lt_01BC
.int Lt_01BD
.int Lt_01BE
.int Lt_01BF
.int Lt_01C0
.int Lt_01C1
.int Lt_01C2
.int Lt_01C3
.int Lt_01C4
.int Lt_01C5
.int Lt_01C6
.int Lt_01C7
.int Lt_01C8
.int Lt_01C9
.int Lt_01CA
.int Lt_01CB
.int Lt_01CC
.int Lt_01CD
.int Lt_01CE
.int Lt_01CF
.int Lt_01D0
.int Lt_01D1
.int Lt_01D2
.int Lt_01D3
.int Lt_01D4
.int Lt_01D5
.int Lt_01D6
.int Lt_01D7
.int Lt_01D8
.int Lt_01D9
.int Lt_01DA
.int Lt_01DB
.int Lt_01DC
.int Lt_01DD
.int Lt_01DE
.int Lt_01DF
.int Lt_01E0
.int Lt_01E1
.int Lt_01E2
.int Lt_01E3
.int Lt_01E4
.int Lt_01E5
.int Lt_01E6
.int Lt_01E7
.int Lt_01E8
.int Lt_01E9
.int Lt_01EA
.int Lt_01EB
.int Lt_01EC
.int Lt_01ED
.int Lt_01EE
.int Lt_01EF
.int Lt_01F0
.int Lt_01F1
.int Lt_01F2
.int Lt_01F3
.int Lt_01F4
.int Lt_01F5
.int Lt_01F6
.int Lt_01F7
.int Lt_01F8
.int Lt_01F9
.int Lt_01FA
.int Lt_01FB
.int Lt_01FC
.int Lt_01FD
.int Lt_01FE
.int Lt_01FF
.int Lt_0200
.int Lt_0201
.int Lt_0202
.int Lt_0203
.int Lt_0204
.int Lt_0205
.int Lt_0206
.int Lt_0207
.int Lt_0208
.int Lt_0209
.int Lt_020A
.int Lt_020B
.int Lt_020C
.int Lt_020D
.int Lt_020E
.int Lt_020F
.int Lt_0210
.int Lt_0211
.int Lt_0212
.int Lt_0213
.int Lt_0214
.int Lt_0215
.int Lt_0216
.int Lt_0217
.int Lt_0218
.int Lt_0219
.int Lt_021A
.int Lt_021B
.int Lt_021C
.int Lt_021D
.int Lt_021E
.int Lt_021F
.int Lt_0220
.int Lt_0221
.int Lt_0222
.int Lt_0223
.int Lt_0224
.int Lt_0225
.int Lt_0226
.int Lt_0227
.int Lt_0228
.int Lt_0229
.int Lt_022A
.int Lt_022B
.int Lt_022C
.int Lt_022D
.int Lt_022E
.int Lt_022F
.int Lt_0230
.int Lt_0231
.int Lt_0232
.int Lt_0233
.int Lt_0234
.int Lt_0235
.int Lt_0236
.int Lt_0237
.int Lt_0238
.int Lt_0239
.int Lt_023A
.int Lt_023B
.int Lt_023C
.int Lt_023D
.int Lt_023E
.int Lt_023F
.int Lt_0240
.int Lt_0241
.int Lt_0242
.int Lt_0243
.int Lt_0244
.int Lt_0245
.int Lt_0246
.int Lt_0247
.int Lt_0248
.int Lt_0249
.int Lt_024A
.int Lt_024B
.int Lt_024C
.int Lt_024D
.int Lt_024E
.int Lt_024F
.int Lt_0250
.int Lt_0251
.int Lt_0252
.int Lt_0253
.int Lt_0254
.int Lt_0255
.int Lt_0256
.int Lt_0257
.int Lt_0258
.int Lt_0259
.int Lt_025A
.int Lt_025B
.int Lt_025C
.int Lt_025D
.int Lt_025E
.int Lt_025F
.int Lt_0260
.int Lt_0261
.int Lt_0262
.int Lt_0263
.int Lt_0264
.int Lt_0265
.int Lt_0266
.int Lt_0267
.int Lt_0268
.int Lt_0269
.int Lt_026A
.int Lt_026B
.int Lt_026C
.int Lt_026D
.int Lt_026E
.int Lt_026F
.int Lt_0270
.int Lt_0271
.int Lt_0272
.int Lt_0273
.int Lt_0274
.int Lt_0275
.int Lt_0276
.int Lt_0277
.int Lt_0278
.int Lt_0279
.int Lt_027A
.int Lt_027B
.int Lt_027C
.int Lt_027D
.int Lt_027E
.int Lt_027F
.int Lt_0280
.int Lt_0281
.int Lt_0282
.int Lt_0283
.int Lt_0284
.int Lt_0285
.int Lt_0286
.int Lt_0287
.int Lt_0288
.int Lt_0289
.int Lt_028A
.int Lt_028B
.int Lt_028C
.int Lt_028D
.int Lt_028E
.int Lt_028F
.int Lt_0290
.int Lt_0291
.int Lt_0292
.int Lt_0293
.int Lt_0294
.int Lt_0295
.int Lt_0296
.int Lt_0297
.int Lt_0298
.int Lt_0299
.int Lt_029A
.int Lt_029B
.int Lt_029C
.int Lt_029D
.int Lt_029E
.int Lt_029F
.int Lt_02A0
.int Lt_02A1
.int Lt_02A2
.int Lt_02A3
.int Lt_02A4
.int Lt_02A5
.int Lt_02A6
.int Lt_02A7
.int Lt_02A8
.int Lt_02A9
.int Lt_02AA
.int Lt_02AB
.int Lt_02AC
.int Lt_02AD
.int Lt_02AE
.int Lt_02AF
.int Lt_02B0
.int Lt_02B1
.int Lt_02B2
.int Lt_02B3
.int Lt_02B4
.int Lt_02B5
.int Lt_02B6
.int Lt_02B7
.int Lt_02B8
.int Lt_02B9
.int Lt_02BA
.int Lt_02BB
.int Lt_02BC
.int Lt_02BD
.int Lt_02BE
.int Lt_02BF
.int Lt_02C0
.int Lt_02C1
.int Lt_02C2
.int Lt_02C3
.int Lt_02C4
.int Lt_02C5
.int Lt_02C6
.int Lt_02C7
.int Lt_02C8
.int Lt_02C9
.int Lt_02CA
.int Lt_02CB
.int Lt_02CC
.int Lt_02CD
.int Lt_02CE
.int Lt_02CF
.int Lt_02D0
.int Lt_02D1
.int Lt_02D2
.int Lt_02D3
.int Lt_02D4
.int Lt_02D5
.int Lt_02D6
.int Lt_02D7
.long 0
.skip 68,0

.section .rodata
.balign 4
Lt_0093:	.ascii	"st\0"
.balign 4
Lt_0094:	.ascii	"cs\0"
.balign 4
Lt_0095:	.ascii	"ds\0"
.balign 4
Lt_0096:	.ascii	"es\0"
.balign 4
Lt_0097:	.ascii	"fs\0"
.balign 4
Lt_0098:	.ascii	"gs\0"
.balign 4
Lt_0099:	.ascii	"ss\0"
.balign 4
Lt_009A:	.ascii	"mm0\0"
.balign 4
Lt_009B:	.ascii	"mm1\0"
.balign 4
Lt_009C:	.ascii	"mm2\0"
.balign 4
Lt_009D:	.ascii	"mm3\0"
.balign 4
Lt_009E:	.ascii	"mm4\0"
.balign 4
Lt_009F:	.ascii	"mm5\0"
.balign 4
Lt_00A0:	.ascii	"mm6\0"
.balign 4
Lt_00A1:	.ascii	"mm7\0"
.balign 4
Lt_00A2:	.ascii	"xmm0\0"
.balign 4
Lt_00A3:	.ascii	"xmm1\0"
.balign 4
Lt_00A4:	.ascii	"xmm2\0"
.balign 4
Lt_00A5:	.ascii	"xmm3\0"
.balign 4
Lt_00A6:	.ascii	"xmm4\0"
.balign 4
Lt_00A7:	.ascii	"xmm5\0"
.balign 4
Lt_00A8:	.ascii	"xmm6\0"
.balign 4
Lt_00A9:	.ascii	"xmm7\0"
.balign 4
Lt_00AA:	.ascii	"byte\0"
.balign 4
Lt_00AB:	.ascii	"word\0"
.balign 4
Lt_00AC:	.ascii	"dword\0"
.balign 4
Lt_00AD:	.ascii	"qword\0"
.balign 4
Lt_00AE:	.ascii	"ptr\0"
.balign 4
Lt_00AF:	.ascii	"offset\0"
.balign 4
Lt_00B0:	.ascii	"aaa\0"
.balign 4
Lt_00B1:	.ascii	"aad\0"
.balign 4
Lt_00B2:	.ascii	"aam\0"
.balign 4
Lt_00B3:	.ascii	"aas\0"
.balign 4
Lt_00B4:	.ascii	"adc\0"
.balign 4
Lt_00B5:	.ascii	"add\0"
.balign 4
Lt_00B6:	.ascii	"addpd\0"
.balign 4
Lt_00B7:	.ascii	"addps\0"
.balign 4
Lt_00B8:	.ascii	"addsd\0"
.balign 4
Lt_00B9:	.ascii	"addss\0"
.balign 4
Lt_00BA:	.ascii	"and\0"
.balign 4
Lt_00BB:	.ascii	"andpd\0"
.balign 4
Lt_00BC:	.ascii	"andps\0"
.balign 4
Lt_00BD:	.ascii	"andnpd\0"
.balign 4
Lt_00BE:	.ascii	"andnps\0"
.balign 4
Lt_00BF:	.ascii	"arpl\0"
.balign 4
Lt_00C0:	.ascii	"bound\0"
.balign 4
Lt_00C1:	.ascii	"bsf\0"
.balign 4
Lt_00C2:	.ascii	"bsr\0"
.balign 4
Lt_00C3:	.ascii	"bswap\0"
.balign 4
Lt_00C4:	.ascii	"bt\0"
.balign 4
Lt_00C5:	.ascii	"btc\0"
.balign 4
Lt_00C6:	.ascii	"btr\0"
.balign 4
Lt_00C7:	.ascii	"bts\0"
.balign 4
Lt_00C8:	.ascii	"call\0"
.balign 4
Lt_00C9:	.ascii	"cbw\0"
.balign 4
Lt_00CA:	.ascii	"cwde\0"
.balign 4
Lt_00CB:	.ascii	"cdq\0"
.balign 4
Lt_00CC:	.ascii	"clc\0"
.balign 4
Lt_00CD:	.ascii	"cld\0"
.balign 4
Lt_00CE:	.ascii	"clflush\0"
.balign 4
Lt_00CF:	.ascii	"cli\0"
.balign 4
Lt_00D0:	.ascii	"clts\0"
.balign 4
Lt_00D1:	.ascii	"cmc\0"
.balign 4
Lt_00D2:	.ascii	"cmova\0"
.balign 4
Lt_00D3:	.ascii	"cmovae\0"
.balign 4
Lt_00D4:	.ascii	"cmovb\0"
.balign 4
Lt_00D5:	.ascii	"cmovbe\0"
.balign 4
Lt_00D6:	.ascii	"cmovc\0"
.balign 4
Lt_00D7:	.ascii	"cmove\0"
.balign 4
Lt_00D8:	.ascii	"cmovg\0"
.balign 4
Lt_00D9:	.ascii	"cmovge\0"
.balign 4
Lt_00DA:	.ascii	"cmovl\0"
.balign 4
Lt_00DB:	.ascii	"cmovle\0"
.balign 4
Lt_00DC:	.ascii	"cmovna\0"
.balign 4
Lt_00DD:	.ascii	"cmovnae\0"
.balign 4
Lt_00DE:	.ascii	"cmovnb\0"
.balign 4
Lt_00DF:	.ascii	"cmovnbe\0"
.balign 4
Lt_00E0:	.ascii	"cmovnc\0"
.balign 4
Lt_00E1:	.ascii	"cmovne\0"
.balign 4
Lt_00E2:	.ascii	"cmovng\0"
.balign 4
Lt_00E3:	.ascii	"cmovnge\0"
.balign 4
Lt_00E4:	.ascii	"cmovnl\0"
.balign 4
Lt_00E5:	.ascii	"cmovnle\0"
.balign 4
Lt_00E6:	.ascii	"cmovno\0"
.balign 4
Lt_00E7:	.ascii	"cmovnp\0"
.balign 4
Lt_00E8:	.ascii	"cmovns\0"
.balign 4
Lt_00E9:	.ascii	"cmovnz\0"
.balign 4
Lt_00EA:	.ascii	"cmovo\0"
.balign 4
Lt_00EB:	.ascii	"cmovp\0"
.balign 4
Lt_00EC:	.ascii	"cmovpe\0"
.balign 4
Lt_00ED:	.ascii	"cmovpo\0"
.balign 4
Lt_00EE:	.ascii	"cmovs\0"
.balign 4
Lt_00EF:	.ascii	"cmovz\0"
.balign 4
Lt_00F0:	.ascii	"cmp\0"
.balign 4
Lt_00F1:	.ascii	"cmppd\0"
.balign 4
Lt_00F2:	.ascii	"cmpps\0"
.balign 4
Lt_00F3:	.ascii	"cmps\0"
.balign 4
Lt_00F4:	.ascii	"cmpsb\0"
.balign 4
Lt_00F5:	.ascii	"cmpsw\0"
.balign 4
Lt_00F6:	.ascii	"cmpsd\0"
.balign 4
Lt_00F7:	.ascii	"cmpss\0"
.balign 4
Lt_00F8:	.ascii	"cmpxchg\0"
.balign 4
Lt_00F9:	.ascii	"cmpxchg8b\0"
.balign 4
Lt_00FA:	.ascii	"comisd\0"
.balign 4
Lt_00FB:	.ascii	"comiss\0"
.balign 4
Lt_00FC:	.ascii	"cpuid\0"
.balign 4
Lt_00FD:	.ascii	"cvtdq2pd\0"
.balign 4
Lt_00FE:	.ascii	"cvtdq2ps\0"
.balign 4
Lt_00FF:	.ascii	"cvtpd2dq\0"
.balign 4
Lt_0100:	.ascii	"cvtpd2pi\0"
.balign 4
Lt_0101:	.ascii	"cvtpd2ps\0"
.balign 4
Lt_0102:	.ascii	"cvtpi2pd\0"
.balign 4
Lt_0103:	.ascii	"cvtpi2ps\0"
.balign 4
Lt_0104:	.ascii	"cvtps2dq\0"
.balign 4
Lt_0105:	.ascii	"cvtps2pd\0"
.balign 4
Lt_0106:	.ascii	"cvtps2pi\0"
.balign 4
Lt_0107:	.ascii	"cvtsd2si\0"
.balign 4
Lt_0108:	.ascii	"cvtsd2ss\0"
.balign 4
Lt_0109:	.ascii	"cvtsi2sd\0"
.balign 4
Lt_010A:	.ascii	"cvtsi2ss\0"
.balign 4
Lt_010B:	.ascii	"cvtss2sd\0"
.balign 4
Lt_010C:	.ascii	"cvtss2si\0"
.balign 4
Lt_010D:	.ascii	"cvttpd2pi\0"
.balign 4
Lt_010E:	.ascii	"cvttpd2dq\0"
.balign 4
Lt_010F:	.ascii	"cvttps2dq\0"
.balign 4
Lt_0110:	.ascii	"cvttps2pi\0"
.balign 4
Lt_0111:	.ascii	"cvttsd2si\0"
.balign 4
Lt_0112:	.ascii	"cvttss2si\0"
.balign 4
Lt_0113:	.ascii	"cwd\0"
.balign 4
Lt_0114:	.ascii	"daa\0"
.balign 4
Lt_0115:	.ascii	"das\0"
.balign 4
Lt_0116:	.ascii	"dec\0"
.balign 4
Lt_0117:	.ascii	"div\0"
.balign 4
Lt_0118:	.ascii	"divpd\0"
.balign 4
Lt_0119:	.ascii	"divps\0"
.balign 4
Lt_011A:	.ascii	"divss\0"
.balign 4
Lt_011B:	.ascii	"emms\0"
.balign 4
Lt_011C:	.ascii	"enter\0"
.balign 4
Lt_011D:	.ascii	"f2xm1\0"
.balign 4
Lt_011E:	.ascii	"fabs\0"
.balign 4
Lt_011F:	.ascii	"fadd\0"
.balign 4
Lt_0120:	.ascii	"faddp\0"
.balign 4
Lt_0121:	.ascii	"fiadd\0"
.balign 4
Lt_0122:	.ascii	"fbld\0"
.balign 4
Lt_0123:	.ascii	"fbstp\0"
.balign 4
Lt_0124:	.ascii	"fchs\0"
.balign 4
Lt_0125:	.ascii	"fclex\0"
.balign 4
Lt_0126:	.ascii	"fnclex\0"
.balign 4
Lt_0127:	.ascii	"fcmovb\0"
.balign 4
Lt_0128:	.ascii	"fcmove\0"
.balign 4
Lt_0129:	.ascii	"fcmovbe\0"
.balign 4
Lt_012A:	.ascii	"fcmovu\0"
.balign 4
Lt_012B:	.ascii	"fcmovnb\0"
.balign 4
Lt_012C:	.ascii	"fcmovne\0"
.balign 4
Lt_012D:	.ascii	"fcmovnbe\0"
.balign 4
Lt_012E:	.ascii	"fcmovnu\0"
.balign 4
Lt_012F:	.ascii	"fcom\0"
.balign 4
Lt_0130:	.ascii	"fcomp\0"
.balign 4
Lt_0131:	.ascii	"fcompp\0"
.balign 4
Lt_0132:	.ascii	"fcomi\0"
.balign 4
Lt_0133:	.ascii	"fcomip\0"
.balign 4
Lt_0134:	.ascii	"fucomi\0"
.balign 4
Lt_0135:	.ascii	"fucomip\0"
.balign 4
Lt_0136:	.ascii	"fcos\0"
.balign 4
Lt_0137:	.ascii	"fdecstp\0"
.balign 4
Lt_0138:	.ascii	"fdiv\0"
.balign 4
Lt_0139:	.ascii	"fdivp\0"
.balign 4
Lt_013A:	.ascii	"fidiv\0"
.balign 4
Lt_013B:	.ascii	"fdivr\0"
.balign 4
Lt_013C:	.ascii	"fdivrp\0"
.balign 4
Lt_013D:	.ascii	"fidivr\0"
.balign 4
Lt_013E:	.ascii	"ffree\0"
.balign 4
Lt_013F:	.ascii	"ficom\0"
.balign 4
Lt_0140:	.ascii	"ficomp\0"
.balign 4
Lt_0141:	.ascii	"fild\0"
.balign 4
Lt_0142:	.ascii	"fincstp\0"
.balign 4
Lt_0143:	.ascii	"finit\0"
.balign 4
Lt_0144:	.ascii	"fninit\0"
.balign 4
Lt_0145:	.ascii	"fist\0"
.balign 4
Lt_0146:	.ascii	"fistp\0"
.balign 4
Lt_0147:	.ascii	"fld\0"
.balign 4
Lt_0148:	.ascii	"fld1\0"
.balign 4
Lt_0149:	.ascii	"fldl2t\0"
.balign 4
Lt_014A:	.ascii	"fldl2e\0"
.balign 4
Lt_014B:	.ascii	"fldpi\0"
.balign 4
Lt_014C:	.ascii	"fldlg2\0"
.balign 4
Lt_014D:	.ascii	"fldln2\0"
.balign 4
Lt_014E:	.ascii	"fldz\0"
.balign 4
Lt_014F:	.ascii	"fldcw\0"
.balign 4
Lt_0150:	.ascii	"fldenv\0"
.balign 4
Lt_0151:	.ascii	"fmul\0"
.balign 4
Lt_0152:	.ascii	"fmulp\0"
.balign 4
Lt_0153:	.ascii	"fimul\0"
.balign 4
Lt_0154:	.ascii	"fnop\0"
.balign 4
Lt_0155:	.ascii	"fpatan\0"
.balign 4
Lt_0156:	.ascii	"fprem\0"
.balign 4
Lt_0157:	.ascii	"fprem1\0"
.balign 4
Lt_0158:	.ascii	"fptan\0"
.balign 4
Lt_0159:	.ascii	"frndint\0"
.balign 4
Lt_015A:	.ascii	"frstor\0"
.balign 4
Lt_015B:	.ascii	"fsave\0"
.balign 4
Lt_015C:	.ascii	"fnsave\0"
.balign 4
Lt_015D:	.ascii	"fscale\0"
.balign 4
Lt_015E:	.ascii	"fsin\0"
.balign 4
Lt_015F:	.ascii	"fsincos\0"
.balign 4
Lt_0160:	.ascii	"fsqrt\0"
.balign 4
Lt_0161:	.ascii	"fst\0"
.balign 4
Lt_0162:	.ascii	"fstp\0"
.balign 4
Lt_0163:	.ascii	"fstcw\0"
.balign 4
Lt_0164:	.ascii	"fnstcw\0"
.balign 4
Lt_0165:	.ascii	"fstenv\0"
.balign 4
Lt_0166:	.ascii	"fnstenv\0"
.balign 4
Lt_0167:	.ascii	"fstsw\0"
.balign 4
Lt_0168:	.ascii	"fnstsw\0"
.balign 4
Lt_0169:	.ascii	"fsub\0"
.balign 4
Lt_016A:	.ascii	"fsubp\0"
.balign 4
Lt_016B:	.ascii	"fisub\0"
.balign 4
Lt_016C:	.ascii	"fsubr\0"
.balign 4
Lt_016D:	.ascii	"fsubrp\0"
.balign 4
Lt_016E:	.ascii	"fisubr\0"
.balign 4
Lt_016F:	.ascii	"ftst\0"
.balign 4
Lt_0170:	.ascii	"fucom\0"
.balign 4
Lt_0171:	.ascii	"fucomp\0"
.balign 4
Lt_0172:	.ascii	"fucompp\0"
.balign 4
Lt_0173:	.ascii	"fwait\0"
.balign 4
Lt_0174:	.ascii	"fxam\0"
.balign 4
Lt_0175:	.ascii	"fxch\0"
.balign 4
Lt_0176:	.ascii	"fxrstor\0"
.balign 4
Lt_0177:	.ascii	"fxsave\0"
.balign 4
Lt_0178:	.ascii	"fxtract\0"
.balign 4
Lt_0179:	.ascii	"fyl2x\0"
.balign 4
Lt_017A:	.ascii	"fyl2xp1\0"
.balign 4
Lt_017B:	.ascii	"hlt\0"
.balign 4
Lt_017C:	.ascii	"idiv\0"
.balign 4
Lt_017D:	.ascii	"imul\0"
.balign 4
Lt_017E:	.ascii	"in\0"
.balign 4
Lt_017F:	.ascii	"inc\0"
.balign 4
Lt_0180:	.ascii	"ins\0"
.balign 4
Lt_0181:	.ascii	"insb\0"
.balign 4
Lt_0182:	.ascii	"insw\0"
.balign 4
Lt_0183:	.ascii	"insd\0"
.balign 4
Lt_0184:	.ascii	"int\0"
.balign 4
Lt_0185:	.ascii	"into\0"
.balign 4
Lt_0186:	.ascii	"invd\0"
.balign 4
Lt_0187:	.ascii	"invlpg\0"
.balign 4
Lt_0188:	.ascii	"iret\0"
.balign 4
Lt_0189:	.ascii	"iretd\0"
.balign 4
Lt_018A:	.ascii	"ja\0"
.balign 4
Lt_018B:	.ascii	"jae\0"
.balign 4
Lt_018C:	.ascii	"jb\0"
.balign 4
Lt_018D:	.ascii	"jbe\0"
.balign 4
Lt_018E:	.ascii	"jc\0"
.balign 4
Lt_018F:	.ascii	"jcxz\0"
.balign 4
Lt_0190:	.ascii	"jecxz\0"
.balign 4
Lt_0191:	.ascii	"je\0"
.balign 4
Lt_0192:	.ascii	"jg\0"
.balign 4
Lt_0193:	.ascii	"jge\0"
.balign 4
Lt_0194:	.ascii	"jl\0"
.balign 4
Lt_0195:	.ascii	"jle\0"
.balign 4
Lt_0196:	.ascii	"jna\0"
.balign 4
Lt_0197:	.ascii	"jnae\0"
.balign 4
Lt_0198:	.ascii	"jnb\0"
.balign 4
Lt_0199:	.ascii	"jnbe\0"
.balign 4
Lt_019A:	.ascii	"jnc\0"
.balign 4
Lt_019B:	.ascii	"jne\0"
.balign 4
Lt_019C:	.ascii	"jng\0"
.balign 4
Lt_019D:	.ascii	"jnge\0"
.balign 4
Lt_019E:	.ascii	"jnl\0"
.balign 4
Lt_019F:	.ascii	"jnle\0"
.balign 4
Lt_01A0:	.ascii	"jno\0"
.balign 4
Lt_01A1:	.ascii	"jnp\0"
.balign 4
Lt_01A2:	.ascii	"jns\0"
.balign 4
Lt_01A3:	.ascii	"jnz\0"
.balign 4
Lt_01A4:	.ascii	"jo\0"
.balign 4
Lt_01A5:	.ascii	"jp\0"
.balign 4
Lt_01A6:	.ascii	"jpe\0"
.balign 4
Lt_01A7:	.ascii	"jpo\0"
.balign 4
Lt_01A8:	.ascii	"js\0"
.balign 4
Lt_01A9:	.ascii	"jz\0"
.balign 4
Lt_01AA:	.ascii	"jmp\0"
.balign 4
Lt_01AB:	.ascii	"lahf\0"
.balign 4
Lt_01AC:	.ascii	"lar\0"
.balign 4
Lt_01AD:	.ascii	"ldmxcsr\0"
.balign 4
Lt_01AE:	.ascii	"lds\0"
.balign 4
Lt_01AF:	.ascii	"les\0"
.balign 4
Lt_01B0:	.ascii	"lfs\0"
.balign 4
Lt_01B1:	.ascii	"lgs\0"
.balign 4
Lt_01B2:	.ascii	"lss\0"
.balign 4
Lt_01B3:	.ascii	"lea\0"
.balign 4
Lt_01B4:	.ascii	"leave\0"
.balign 4
Lt_01B5:	.ascii	"lfence\0"
.balign 4
Lt_01B6:	.ascii	"lgdt\0"
.balign 4
Lt_01B7:	.ascii	"lidt\0"
.balign 4
Lt_01B8:	.ascii	"lldt\0"
.balign 4
Lt_01B9:	.ascii	"lmsw\0"
.balign 4
Lt_01BA:	.ascii	"lock\0"
.balign 4
Lt_01BB:	.ascii	"lods\0"
.balign 4
Lt_01BC:	.ascii	"lodsb\0"
.balign 4
Lt_01BD:	.ascii	"lodsw\0"
.balign 4
Lt_01BE:	.ascii	"lodsd\0"
.balign 4
Lt_01BF:	.ascii	"loop\0"
.balign 4
Lt_01C0:	.ascii	"loope\0"
.balign 4
Lt_01C1:	.ascii	"loopz\0"
.balign 4
Lt_01C2:	.ascii	"loopne\0"
.balign 4
Lt_01C3:	.ascii	"loopnz\0"
.balign 4
Lt_01C4:	.ascii	"lsl\0"
.balign 4
Lt_01C5:	.ascii	"ltr\0"
.balign 4
Lt_01C6:	.ascii	"maskmovdqu\0"
.balign 4
Lt_01C7:	.ascii	"maskmovq\0"
.balign 4
Lt_01C8:	.ascii	"maxpd\0"
.balign 4
Lt_01C9:	.ascii	"maxps\0"
.balign 4
Lt_01CA:	.ascii	"maxsd\0"
.balign 4
Lt_01CB:	.ascii	"maxss\0"
.balign 4
Lt_01CC:	.ascii	"mfence\0"
.balign 4
Lt_01CD:	.ascii	"minpd\0"
.balign 4
Lt_01CE:	.ascii	"minps\0"
.balign 4
Lt_01CF:	.ascii	"minsd\0"
.balign 4
Lt_01D0:	.ascii	"minss\0"
.balign 4
Lt_01D1:	.ascii	"mov\0"
.balign 4
Lt_01D2:	.ascii	"movapd\0"
.balign 4
Lt_01D3:	.ascii	"movaps\0"
.balign 4
Lt_01D4:	.ascii	"movd\0"
.balign 4
Lt_01D5:	.ascii	"movdqa\0"
.balign 4
Lt_01D6:	.ascii	"movdqu\0"
.balign 4
Lt_01D7:	.ascii	"movdq2q\0"
.balign 4
Lt_01D8:	.ascii	"movhlps\0"
.balign 4
Lt_01D9:	.ascii	"movhpd\0"
.balign 4
Lt_01DA:	.ascii	"movhps\0"
.balign 4
Lt_01DB:	.ascii	"movlhps\0"
.balign 4
Lt_01DC:	.ascii	"movlpd\0"
.balign 4
Lt_01DD:	.ascii	"movlps\0"
.balign 4
Lt_01DE:	.ascii	"movmskpd\0"
.balign 4
Lt_01DF:	.ascii	"movmskps\0"
.balign 4
Lt_01E0:	.ascii	"movntdq\0"
.balign 4
Lt_01E1:	.ascii	"movnti\0"
.balign 4
Lt_01E2:	.ascii	"movntpd\0"
.balign 4
Lt_01E3:	.ascii	"movntps\0"
.balign 4
Lt_01E4:	.ascii	"movntq\0"
.balign 4
Lt_01E5:	.ascii	"movq\0"
.balign 4
Lt_01E6:	.ascii	"movq2dq\0"
.balign 4
Lt_01E7:	.ascii	"movs\0"
.balign 4
Lt_01E8:	.ascii	"movsb\0"
.balign 4
Lt_01E9:	.ascii	"movsw\0"
.balign 4
Lt_01EA:	.ascii	"movsd\0"
.balign 4
Lt_01EB:	.ascii	"movss\0"
.balign 4
Lt_01EC:	.ascii	"movsx\0"
.balign 4
Lt_01ED:	.ascii	"movupd\0"
.balign 4
Lt_01EE:	.ascii	"movups\0"
.balign 4
Lt_01EF:	.ascii	"movzx\0"
.balign 4
Lt_01F0:	.ascii	"mul\0"
.balign 4
Lt_01F1:	.ascii	"mulpd\0"
.balign 4
Lt_01F2:	.ascii	"mulps\0"
.balign 4
Lt_01F3:	.ascii	"mulsd\0"
.balign 4
Lt_01F4:	.ascii	"mulss\0"
.balign 4
Lt_01F5:	.ascii	"neg\0"
.balign 4
Lt_01F6:	.ascii	"nop\0"
.balign 4
Lt_01F7:	.ascii	"not\0"
.balign 4
Lt_01F8:	.ascii	"or\0"
.balign 4
Lt_01F9:	.ascii	"orpd\0"
.balign 4
Lt_01FA:	.ascii	"orps\0"
.balign 4
Lt_01FB:	.ascii	"out\0"
.balign 4
Lt_01FC:	.ascii	"outs\0"
.balign 4
Lt_01FD:	.ascii	"outsb\0"
.balign 4
Lt_01FE:	.ascii	"outsw\0"
.balign 4
Lt_01FF:	.ascii	"outsd\0"
.balign 4
Lt_0200:	.ascii	"packsswb\0"
.balign 4
Lt_0201:	.ascii	"packssdw\0"
.balign 4
Lt_0202:	.ascii	"packuswb\0"
.balign 4
Lt_0203:	.ascii	"paddb\0"
.balign 4
Lt_0204:	.ascii	"paddw\0"
.balign 4
Lt_0205:	.ascii	"paddd\0"
.balign 4
Lt_0206:	.ascii	"paddq\0"
.balign 4
Lt_0207:	.ascii	"paddsb\0"
.balign 4
Lt_0208:	.ascii	"paddsw\0"
.balign 4
Lt_0209:	.ascii	"paddusb\0"
.balign 4
Lt_020A:	.ascii	"paddusw\0"
.balign 4
Lt_020B:	.ascii	"pand\0"
.balign 4
Lt_020C:	.ascii	"pandn\0"
.balign 4
Lt_020D:	.ascii	"pause\0"
.balign 4
Lt_020E:	.ascii	"pavgb\0"
.balign 4
Lt_020F:	.ascii	"pavgw\0"
.balign 4
Lt_0210:	.ascii	"pcmpeqb\0"
.balign 4
Lt_0211:	.ascii	"pcmpeqw\0"
.balign 4
Lt_0212:	.ascii	"pcmpeqd\0"
.balign 4
Lt_0213:	.ascii	"pcmpgtb\0"
.balign 4
Lt_0214:	.ascii	"pcmpgtw\0"
.balign 4
Lt_0215:	.ascii	"pcmpgtd\0"
.balign 4
Lt_0216:	.ascii	"pextrw\0"
.balign 4
Lt_0217:	.ascii	"pinsrw\0"
.balign 4
Lt_0218:	.ascii	"pmaddwd\0"
.balign 4
Lt_0219:	.ascii	"pmaxsw\0"
.balign 4
Lt_021A:	.ascii	"pmaxub\0"
.balign 4
Lt_021B:	.ascii	"pminsw\0"
.balign 4
Lt_021C:	.ascii	"pminub\0"
.balign 4
Lt_021D:	.ascii	"pmovmskb\0"
.balign 4
Lt_021E:	.ascii	"pmulhuv\0"
.balign 4
Lt_021F:	.ascii	"pmulhw\0"
.balign 4
Lt_0220:	.ascii	"pmullw\0"
.balign 4
Lt_0221:	.ascii	"pmuludq\0"
.balign 4
Lt_0222:	.ascii	"pop\0"
.balign 4
Lt_0223:	.ascii	"popa\0"
.balign 4
Lt_0224:	.ascii	"popad\0"
.balign 4
Lt_0225:	.ascii	"popf\0"
.balign 4
Lt_0226:	.ascii	"popfd\0"
.balign 4
Lt_0227:	.ascii	"por\0"
.balign 4
Lt_0228:	.ascii	"prefetcht0\0"
.balign 4
Lt_0229:	.ascii	"prefetcht1\0"
.balign 4
Lt_022A:	.ascii	"prefetcht2\0"
.balign 4
Lt_022B:	.ascii	"prefetchnta\0"
.balign 4
Lt_022C:	.ascii	"psadbw\0"
.balign 4
Lt_022D:	.ascii	"pshufd\0"
.balign 4
Lt_022E:	.ascii	"pshufhw\0"
.balign 4
Lt_022F:	.ascii	"pshuflw\0"
.balign 4
Lt_0230:	.ascii	"pshufw\0"
.balign 4
Lt_0231:	.ascii	"psllw\0"
.balign 4
Lt_0232:	.ascii	"pslld\0"
.balign 4
Lt_0233:	.ascii	"psllq\0"
.balign 4
Lt_0234:	.ascii	"psraw\0"
.balign 4
Lt_0235:	.ascii	"psrad\0"
.balign 4
Lt_0236:	.ascii	"psrldq\0"
.balign 4
Lt_0237:	.ascii	"psrlw\0"
.balign 4
Lt_0238:	.ascii	"psrld\0"
.balign 4
Lt_0239:	.ascii	"psrlq\0"
.balign 4
Lt_023A:	.ascii	"psubb\0"
.balign 4
Lt_023B:	.ascii	"psubw\0"
.balign 4
Lt_023C:	.ascii	"psubd\0"
.balign 4
Lt_023D:	.ascii	"psubq\0"
.balign 4
Lt_023E:	.ascii	"psubsb\0"
.balign 4
Lt_023F:	.ascii	"psubsw\0"
.balign 4
Lt_0240:	.ascii	"psubusb\0"
.balign 4
Lt_0241:	.ascii	"psubusw\0"
.balign 4
Lt_0242:	.ascii	"punpckhbw\0"
.balign 4
Lt_0243:	.ascii	"punpckhwd\0"
.balign 4
Lt_0244:	.ascii	"punpckhdq\0"
.balign 4
Lt_0245:	.ascii	"punpckhqdq\0"
.balign 4
Lt_0246:	.ascii	"punpcklbw\0"
.balign 4
Lt_0247:	.ascii	"punpcklwd\0"
.balign 4
Lt_0248:	.ascii	"punpckldq\0"
.balign 4
Lt_0249:	.ascii	"punpcklqdq\0"
.balign 4
Lt_024A:	.ascii	"push\0"
.balign 4
Lt_024B:	.ascii	"pusha\0"
.balign 4
Lt_024C:	.ascii	"pushad\0"
.balign 4
Lt_024D:	.ascii	"pushf\0"
.balign 4
Lt_024E:	.ascii	"pushfd\0"
.balign 4
Lt_024F:	.ascii	"pxor\0"
.balign 4
Lt_0250:	.ascii	"rcl\0"
.balign 4
Lt_0251:	.ascii	"rcr\0"
.balign 4
Lt_0252:	.ascii	"rol\0"
.balign 4
Lt_0253:	.ascii	"ror\0"
.balign 4
Lt_0254:	.ascii	"rcpps\0"
.balign 4
Lt_0255:	.ascii	"rcpss\0"
.balign 4
Lt_0256:	.ascii	"rdmsr\0"
.balign 4
Lt_0257:	.ascii	"rdpmc\0"
.balign 4
Lt_0258:	.ascii	"rdtsc\0"
.balign 4
Lt_0259:	.ascii	"rep\0"
.balign 4
Lt_025A:	.ascii	"repe\0"
.balign 4
Lt_025B:	.ascii	"repz\0"
.balign 4
Lt_025C:	.ascii	"repne\0"
.balign 4
Lt_025D:	.ascii	"repnz\0"
.balign 4
Lt_025E:	.ascii	"ret\0"
.balign 4
Lt_025F:	.ascii	"rsm\0"
.balign 4
Lt_0260:	.ascii	"rsqrtps\0"
.balign 4
Lt_0261:	.ascii	"rsqrtss\0"
.balign 4
Lt_0262:	.ascii	"sahf\0"
.balign 4
Lt_0263:	.ascii	"sal\0"
.balign 4
Lt_0264:	.ascii	"sar\0"
.balign 4
Lt_0265:	.ascii	"shl\0"
.balign 4
Lt_0266:	.ascii	"shr\0"
.balign 4
Lt_0267:	.ascii	"sbb\0"
.balign 4
Lt_0268:	.ascii	"scas\0"
.balign 4
Lt_0269:	.ascii	"scasb\0"
.balign 4
Lt_026A:	.ascii	"scasw\0"
.balign 4
Lt_026B:	.ascii	"scasd\0"
.balign 4
Lt_026C:	.ascii	"seta\0"
.balign 4
Lt_026D:	.ascii	"setae\0"
.balign 4
Lt_026E:	.ascii	"setb\0"
.balign 4
Lt_026F:	.ascii	"setbe\0"
.balign 4
Lt_0270:	.ascii	"setc\0"
.balign 4
Lt_0271:	.ascii	"sete\0"
.balign 4
Lt_0272:	.ascii	"setg\0"
.balign 4
Lt_0273:	.ascii	"setge\0"
.balign 4
Lt_0274:	.ascii	"setl\0"
.balign 4
Lt_0275:	.ascii	"setle\0"
.balign 4
Lt_0276:	.ascii	"setna\0"
.balign 4
Lt_0277:	.ascii	"setnae\0"
.balign 4
Lt_0278:	.ascii	"setnb\0"
.balign 4
Lt_0279:	.ascii	"setnbe\0"
.balign 4
Lt_027A:	.ascii	"setnc\0"
.balign 4
Lt_027B:	.ascii	"setne\0"
.balign 4
Lt_027C:	.ascii	"setng\0"
.balign 4
Lt_027D:	.ascii	"setnge\0"
.balign 4
Lt_027E:	.ascii	"setnl\0"
.balign 4
Lt_027F:	.ascii	"setnle\0"
.balign 4
Lt_0280:	.ascii	"setno\0"
.balign 4
Lt_0281:	.ascii	"setnp\0"
.balign 4
Lt_0282:	.ascii	"setns\0"
.balign 4
Lt_0283:	.ascii	"setnz\0"
.balign 4
Lt_0284:	.ascii	"seto\0"
.balign 4
Lt_0285:	.ascii	"setp\0"
.balign 4
Lt_0286:	.ascii	"setpe\0"
.balign 4
Lt_0287:	.ascii	"setpo\0"
.balign 4
Lt_0288:	.ascii	"sets\0"
.balign 4
Lt_0289:	.ascii	"setz\0"
.balign 4
Lt_028A:	.ascii	"sfence\0"
.balign 4
Lt_028B:	.ascii	"sgdt\0"
.balign 4
Lt_028C:	.ascii	"sidt\0"
.balign 4
Lt_028D:	.ascii	"shld\0"
.balign 4
Lt_028E:	.ascii	"shrd\0"
.balign 4
Lt_028F:	.ascii	"shufpd\0"
.balign 4
Lt_0290:	.ascii	"shufps\0"
.balign 4
Lt_0291:	.ascii	"sldt\0"
.balign 4
Lt_0292:	.ascii	"smsw\0"
.balign 4
Lt_0293:	.ascii	"sqrtpd\0"
.balign 4
Lt_0294:	.ascii	"sqrtps\0"
.balign 4
Lt_0295:	.ascii	"sqrtsd\0"
.balign 4
Lt_0296:	.ascii	"sqrtss\0"
.balign 4
Lt_0297:	.ascii	"stc\0"
.balign 4
Lt_0298:	.ascii	"std\0"
.balign 4
Lt_0299:	.ascii	"sti\0"
.balign 4
Lt_029A:	.ascii	"stmxcsr\0"
.balign 4
Lt_029B:	.ascii	"stos\0"
.balign 4
Lt_029C:	.ascii	"stosb\0"
.balign 4
Lt_029D:	.ascii	"stosw\0"
.balign 4
Lt_029E:	.ascii	"stosd\0"
.balign 4
Lt_029F:	.ascii	"str\0"
.balign 4
Lt_02A0:	.ascii	"sub\0"
.balign 4
Lt_02A1:	.ascii	"subpd\0"
.balign 4
Lt_02A2:	.ascii	"subps\0"
.balign 4
Lt_02A3:	.ascii	"subsd\0"
.balign 4
Lt_02A4:	.ascii	"subss\0"
.balign 4
Lt_02A5:	.ascii	"sysenter\0"
.balign 4
Lt_02A6:	.ascii	"sysexit\0"
.balign 4
Lt_02A7:	.ascii	"test\0"
.balign 4
Lt_02A8:	.ascii	"ucomisd\0"
.balign 4
Lt_02A9:	.ascii	"ucomiss\0"
.balign 4
Lt_02AA:	.ascii	"ud2\0"
.balign 4
Lt_02AB:	.ascii	"unpckhpd\0"
.balign 4
Lt_02AC:	.ascii	"unpckhps\0"
.balign 4
Lt_02AD:	.ascii	"unpcklpd\0"
.balign 4
Lt_02AE:	.ascii	"unpcklps\0"
.balign 4
Lt_02AF:	.ascii	"verr\0"
.balign 4
Lt_02B0:	.ascii	"verw\0"
.balign 4
Lt_02B1:	.ascii	"wait\0"
.balign 4
Lt_02B2:	.ascii	"wbinvd\0"
.balign 4
Lt_02B3:	.ascii	"wrmsr\0"
.balign 4
Lt_02B4:	.ascii	"xadd\0"
.balign 4
Lt_02B5:	.ascii	"xchg\0"
.balign 4
Lt_02B6:	.ascii	"xlat\0"
.balign 4
Lt_02B7:	.ascii	"xlatb\0"
.balign 4
Lt_02B8:	.ascii	"xor\0"
.balign 4
Lt_02B9:	.ascii	"xorpd\0"
.balign 4
Lt_02BA:	.ascii	"xorps\0"
.balign 4
Lt_02BB:	.ascii	"pavgusb\0"
.balign 4
Lt_02BC:	.ascii	"pfadd\0"
.balign 4
Lt_02BD:	.ascii	"pfsub\0"
.balign 4
Lt_02BE:	.ascii	"pfsubr\0"
.balign 4
Lt_02BF:	.ascii	"pfacc\0"
.balign 4
Lt_02C0:	.ascii	"pfcmpge\0"
.balign 4
Lt_02C1:	.ascii	"pfcmpgt\0"
.balign 4
Lt_02C2:	.ascii	"pfcmpeq\0"
.balign 4
Lt_02C3:	.ascii	"pfmin\0"
.balign 4
Lt_02C4:	.ascii	"pfmax\0"
.balign 4
Lt_02C5:	.ascii	"pi2fw\0"
.balign 4
Lt_02C6:	.ascii	"pi2fd\0"
.balign 4
Lt_02C7:	.ascii	"pf2iw\0"
.balign 4
Lt_02C8:	.ascii	"pf2id\0"
.balign 4
Lt_02C9:	.ascii	"pfrcp\0"
.balign 4
Lt_02CA:	.ascii	"pfrsqrt\0"
.balign 4
Lt_02CB:	.ascii	"pfmul\0"
.balign 4
Lt_02CC:	.ascii	"pfrcpit1\0"
.balign 4
Lt_02CD:	.ascii	"pfrsqit1\0"
.balign 4
Lt_02CE:	.ascii	"pfrcpit2\0"
.balign 4
Lt_02CF:	.ascii	"pmulhrw\0"
.balign 4
Lt_02D0:	.ascii	"pswapw\0"
.balign 4
Lt_02D1:	.ascii	"femms\0"
.balign 4
Lt_02D2:	.ascii	"prefetch\0"
.balign 4
Lt_02D3:	.ascii	"prefetchw\0"
.balign 4
Lt_02D4:	.ascii	"pfnacc\0"
.balign 4
Lt_02D5:	.ascii	"pfpnacc\0"
.balign 4
Lt_02D6:	.ascii	"pswapd\0"
.balign 4
Lt_02D7:	.ascii	"pmulhuw\0"
.balign 4
Lt_0356:	.ascii	"+\0"
.balign 4
Lt_0362:	.ascii	"*\0"
.balign 4
Lt_0375:	.ascii	" [\0"
.balign 4
Lt_0377:	.ascii	"[\0"
.balign 4
Lt_038A:	.ascii	"]\0"
.balign 4
Lt_038D:	.ascii	"offset \0"
.balign 4
Lt_0391:	.ascii	" + \0"
.balign 4
Lt_03AA:	.ascii	"\t\0"
.balign 4
Lt_03AC:	.ascii	"\n\0"
.balign 4
Lt_03B0:	.ascii	" \0"
.balign 4
Lt_03B5:	.ascii	"push \0"
.balign 4
Lt_03BA:	.ascii	"pop \0"
.balign 4
Lt_03BF:	.ascii	"mov \0"
.balign 4
Lt_03C5:	.ascii	"xchg \0"
.balign 4
Lt_03CB:	.ascii	"\t#\0"
.balign 4
Lt_03D0:	.ascii	"\n.globl \0"
.balign 4
Lt_03D4:	.ascii	":\0"
.balign 4
Lt_03D5:	.ascii	":\n\0"
.balign 4
Lt_03D9:	.ascii	".balign \0"
.balign 4
Lt_03E4:	.ascii	"xmm\0"
.balign 4
Lt_0408:	.ascii	".lcomm\0"
.balign 4
Lt_0409:	.ascii	".comm\0"
.balign 4
Lt_040C:	.ascii	".balign 8\0"
.balign 4
Lt_040E:	.ascii	",\0"
.balign 4
Lt_0413:	.ascii	".intel_syntax noprefix\0"
.balign 4
Lt_0414:	.ascii	"' compilation started at \0"
.balign 4
Lt_0415:	.ascii	" (\0"
.balign 4
Lt_0416:	.ascii	")\0"
.balign 4
Lt_0423:	.ascii	"\"\0"
.balign 4
Lt_0426:	.ascii	"\\0\0"
.balign 4
Lt_0427:	.ascii	"\\0\"\0"
.balign 4
Lt_0435:	.ascii	":\t\0"
.balign 4
Lt_0448:	.ascii	".ascii \"\0"
.balign 4
Lt_044A:	.ascii	".ascii \" -export:\0"
.balign 4
Lt_044B:	.ascii	"\"\n\0"
.balign 4
Lt_046E:	.ascii	"lea edi, [ebp-\0"
.balign 4
Lt_0472:	.ascii	"mov ecx,\0"
.balign 4
Lt_0475:	.ascii	"pxor mm0, mm0\0"
.balign 4
Lt_0476:	.ascii	"movq [edi], mm0\0"
.balign 4
Lt_0477:	.ascii	"add edi, 8\0"
.balign 4
Lt_0478:	.ascii	"dec ecx\0"
.balign 4
Lt_0479:	.ascii	"jnz \0"
.balign 4
Lt_0483:	.ascii	"movq [ebp-\0"
.balign 4
Lt_0484:	.ascii	"], mm0\0"
.balign 4
Lt_048A:	.ascii	"mov dword ptr [ebp-\0"
.balign 4
Lt_048B:	.ascii	"], 0\0"
.balign 4
Lt_0498:	.ascii	"xor eax, eax\0"
.balign 4
Lt_0499:	.ascii	"rep stosd\0"
.balign 4
Lt_04A9:	.ascii	"mov ebp, esp\0"
.balign 4
Lt_04AC:	.ascii	"and esp, 0xFFFFFFF0\0"
.balign 4
Lt_04AF:	.ascii	"sub esp, \0"
.balign 4
Lt_04B7:	.ascii	".section .data\n\0"
.balign 4
Lt_04B9:	.ascii	".balign 4\n\0"
.balign 4
Lt_04BE:	.ascii	".long 0\0"
.balign 4
Lt_04C0:	.ascii	".section .text\n\0"
.balign 4
Lt_04C1:	.ascii	"mov edx, offset .\0"
.balign 4
Lt_04C4:	.ascii	"call _mcount\0"
.balign 4
Lt_04D7:	.ascii	"mov esp, ebp\0"
.balign 4
Lt_04DA:	.ascii	"ret \0"
.balign 4
Lt_04DF:	.ascii	".size \0"
.balign 4
Lt_04E0:	.ascii	", .-\0"
.balign 4
Lt_04FA:	.ascii	"call \0"
.balign 4
Lt_04FE:	.ascii	"add esp, \0"
.balign 4
Lt_0509:	.ascii	"jle \0"
.balign 4
Lt_050B:	.ascii	"jge \0"
.balign 4
Lt_050D:	.ascii	"jl \0"
.balign 4
Lt_050F:	.ascii	"jg \0"
.balign 4
Lt_0511:	.ascii	"je \0"
.balign 4
Lt_0513:	.ascii	"jne \0"
.balign 4
Lt_0518:	.ascii	"jmp \0"
.balign 4
Lt_0528:	.ascii	"cmp \0"
.balign 4
Lt_0529:	.ascii	", 0\0"
.balign 4
Lt_052A:	.ascii	"jns \0"
.balign 4
Lt_052B:	.ascii	"0x403f\0"
.balign 4
Lt_052C:	.ascii	"0x80000000\0"
.balign 4
Lt_052D:	.ascii	"fldt [esp]\0"
.balign 4
Lt_052E:	.ascii	"add esp, 12\0"
.balign 4
Lt_053B:	.ascii	"-1\0"
.balign 4
Lt_0542:	.ascii	"movsx \0"
.balign 4
Lt_0543:	.ascii	"movzx \0"
.balign 4
Lt_0548:	.ascii	"sar \0"
.balign 4
Lt_0549:	.ascii	", 31\0"
.balign 4
Lt_0550:	.ascii	"fistp \0"
.balign 4
Lt_0575:	.ascii	"sub esp, 4\0"
.balign 4
Lt_0576:	.ascii	"fistp dword ptr [esp]\0"
.balign 4
Lt_0579:	.ascii	"byte ptr [esp]\0"
.balign 4
Lt_057A:	.ascii	"add esp, 4\0"
.balign 4
Lt_057D:	.ascii	"dword ptr [esp]\0"
.balign 4
Lt_0586:	.ascii	"sub esp, 8\0"
.balign 4
Lt_0587:	.ascii	"fistp qword ptr [esp]\0"
.balign 4
Lt_0588:	.ascii	"add esp, 2\0"
.balign 4
Lt_0591:	.ascii	"fild \0"
.balign 4
Lt_0592:	.ascii	" [esp]\0"
.balign 4
Lt_0595:	.ascii	"add esp, 8\0"
.balign 4
Lt_0596:	.ascii	"fild qword ptr [esp]\0"
.balign 4
Lt_059B:	.ascii	"fstp \0"
.balign 4
Lt_05A8:	.ascii	"fild dword ptr [esp]\0"
.balign 4
Lt_05BB:	.ascii	"add esp, 6\0"
.balign 4
Lt_05CE:	.ascii	"fld \0"
.balign 4
Lt_05EF:	.ascii	"mov dword ptr [esp], 0x5F000000\0"
.balign 4
Lt_05F0:	.ascii	"fcom dword ptr [esp]\0"
.balign 4
Lt_05F3:	.ascii	"fnstsw ax\0"
.balign 4
Lt_05F4:	.ascii	"test ah, 1\0"
.balign 4
Lt_05F5:	.ascii	"fsub dword ptr [esp]\0"
.balign 4
Lt_05F6:	.ascii	"xor \0"
.balign 4
Lt_05F7:	.ascii	", 0x80000000\0"
.balign 4
Lt_066F:	.ascii	"add \0"
.balign 4
Lt_0670:	.ascii	"adc \0"
.balign 4
Lt_067D:	.ascii	"inc \0"
.balign 4
Lt_067F:	.ascii	"dec \0"
.balign 4
Lt_0688:	.ascii	"fadd \0"
.balign 4
Lt_0689:	.ascii	"fiadd \0"
.balign 4
Lt_068C:	.ascii	"sub \0"
.balign 4
Lt_068D:	.ascii	"sbb \0"
.balign 4
Lt_06A3:	.ascii	"fsub \0"
.balign 4
Lt_06A4:	.ascii	"fisub \0"
.balign 4
Lt_06B3:	.ascii	"mov eax, [esp+\0"
.balign 4
Lt_06B7:	.ascii	"mul dword ptr [esp+\0"
.balign 4
Lt_06BB:	.ascii	"xchg eax, [esp+\0"
.balign 4
Lt_06BF:	.ascii	"imul eax, [esp+\0"
.balign 4
Lt_06C3:	.ascii	"add eax, edx\0"
.balign 4
Lt_06C4:	.ascii	"mov edx, [esp+\0"
.balign 4
Lt_06C8:	.ascii	"imul edx, [esp+\0"
.balign 4
Lt_06CC:	.ascii	"add edx, eax\0"
.balign 4
Lt_06CD:	.ascii	"mov [esp+\0"
.balign 4
Lt_06CE:	.ascii	"], edx\0"
.balign 4
Lt_06E4:	.ascii	"imul \0"
.balign 4
Lt_06EF:	.ascii	"fmul \0"
.balign 4
Lt_06F0:	.ascii	"fimul \0"
.balign 4
Lt_06F9:	.ascii	"fdiv \0"
.balign 4
Lt_06FA:	.ascii	"fidiv \0"
.balign 4
Lt_070E:	.ascii	"xchg eax, [esp]\0"
.balign 4
Lt_0720:	.ascii	"idiv \0"
.balign 4
Lt_0721:	.ascii	"div \0"
.balign 4
Lt_072F:	.ascii	"xchg ecx, [esp]\0"
.balign 4
Lt_0736:	.ascii	"xchg ecx, eax\0"
.balign 4
Lt_077E:	.ascii	"shl \0"
.balign 4
Lt_077F:	.ascii	"shld \0"
.balign 4
Lt_0784:	.ascii	"shr \0"
.balign 4
Lt_0785:	.ascii	"shrd \0"
.balign 4
Lt_0821:	.ascii	"xchg edx, [esp+\0"
.balign 4
Lt_0832:	.ascii	"shld edx, eax, cl\0"
.balign 4
Lt_0833:	.ascii	" eax, cl\0"
.balign 4
Lt_0836:	.ascii	"shrd eax, edx, cl\0"
.balign 4
Lt_0837:	.ascii	" edx, cl\0"
.balign 4
Lt_083A:	.ascii	"test cl, 32\0"
.balign 4
Lt_083D:	.ascii	"mov edx, eax\0"
.balign 4
Lt_083E:	.ascii	"mov eax, edx\0"
.balign 4
Lt_0843:	.ascii	"sar edx, 31\0"
.balign 4
Lt_0844:	.ascii	"xor edx, edx\0"
.balign 4
Lt_084B:	.ascii	"xchg edx, [esp+4]\0"
.balign 4
Lt_084C:	.ascii	"mov [esp+4], edx\0"
.balign 4
Lt_0853:	.ascii	"xchg eax, [esp+0]\0"
.balign 4
Lt_0854:	.ascii	"mov [esp+0], eax\0"
.balign 4
Lt_0886:	.ascii	"and \0"
.balign 4
Lt_088B:	.ascii	"or \0"
.balign 4
Lt_0894:	.ascii	"not \0"
.balign 4
Lt_08A3:	.ascii	"fld st(0)\0"
.balign 4
Lt_08A4:	.ascii	"fsub st(1), st(0)\0"
.balign 4
Lt_08A5:	.ascii	"fstp st(1)\0"
.balign 4
Lt_08AC:	.ascii	"j\0"
.balign 4
Lt_08C0:	.ascii	"test \0"
.balign 4
Lt_08CA:	.ascii	"xchg edx, \0"
.balign 4
Lt_08CB:	.ascii	"set\0"
.balign 4
Lt_08CC:	.ascii	" dl\0"
.balign 4
Lt_08D4:	.ascii	", 1\0"
.balign 4
Lt_08D5:	.ascii	", -1\0"
.balign 4
Lt_08E1:	.ascii	"fcomp \0"
.balign 4
Lt_08E2:	.ascii	"ficomp \0"
.balign 4
Lt_08E9:	.ascii	"test ah, \0"
.balign 4
Lt_08F6:	.ascii	"\tdl\0"
.balign 4
Lt_0905:	.ascii	"g\0"
.balign 4
Lt_0906:	.ascii	"l\0"
.balign 4
Lt_0907:	.ascii	"a\0"
.balign 4
Lt_0908:	.ascii	"b\0"
.balign 4
Lt_0911:	.ascii	"z\0"
.balign 4
Lt_0912:	.ascii	"0b01000001\0"
.balign 4
Lt_0921:	.ascii	"nz\0"
.balign 4
Lt_0922:	.ascii	"0b00000001\0"
.balign 4
Lt_0925:	.ascii	"ne\0"
.balign 4
Lt_0926:	.ascii	"e\0"
.balign 4
Lt_092B:	.ascii	"0b01000000\0"
.balign 4
Lt_0938:	.ascii	"be\0"
.balign 4
Lt_093F:	.ascii	"le\0"
.balign 4
Lt_0948:	.ascii	"ae\0"
.balign 4
Lt_094F:	.ascii	"ge\0"
.balign 4
Lt_0954:	.ascii	"neg \0"
.balign 4
Lt_0984:	.ascii	"fstp st(0)\0"
.balign 4
Lt_0989:	.ascii	"fmul st(0), st(0)\0"
.balign 4
Lt_0998:	.ascii	"fmulp st(1), st\0"
.balign 4
Lt_0999:	.ascii	"fld st\0"
.balign 4
Lt_099A:	.ascii	"fsub st(1), st\0"
.balign 4
Lt_099B:	.ascii	"0x3f800000\0"
.balign 4
Lt_099C:	.ascii	"fadd dword ptr [esp]\0"
.balign 4
Lt_099F:	.ascii	"fnstcw [esp]\0"
.balign 4
Lt_09A0:	.ascii	"[esp]\0"
.balign 4
Lt_09A1:	.ascii	"11\0"
.balign 4
Lt_09A4:	.ascii	", 0b1111001111111111\0"
.balign 4
Lt_09A8:	.ascii	", 0b0000\0"
.balign 4
Lt_09A9:	.ascii	"0000000000\0"
.balign 4
Lt_09AF:	.ascii	"fldcw [esp]\0"
.balign 4
Lt_09C7:	.ascii	"fstp dword ptr [esp]\0"
.balign 4
Lt_09C8:	.ascii	"fld dword ptr [esp]\0"
.balign 4
Lt_09CB:	.ascii	"fxch \0"
.balign 4
Lt_09FD:	.ascii	"sub esp,\0"
.balign 4
Lt_0A0D:	.ascii	", 16\0"
.balign 4
Lt_0A49:	.ascii	"add esp,\0"
.balign 4
Lt_0A4E:	.ascii	"lea \0"
.balign 4
Lt_0A6D:	.ascii	"mov ecx, \0"
.balign 4
Lt_0A6E:	.ascii	"rep movsd\0"
.balign 4
Lt_0A70:	.ascii	"mov ecx, [esi]\0"
.balign 4
Lt_0A71:	.ascii	"mov [edi], ecx\0"
.balign 4
Lt_0A74:	.ascii	"add esi, 4\0"
.balign 4
Lt_0A75:	.ascii	"add edi, 4\0"
.balign 4
Lt_0A7A:	.ascii	"mov cx, [esi]\0"
.balign 4
Lt_0A7B:	.ascii	"mov [edi], cx\0"
.balign 4
Lt_0A7E:	.ascii	"add esi, 2\0"
.balign 4
Lt_0A7F:	.ascii	"add edi, 2\0"
.balign 4
Lt_0A82:	.ascii	"mov cl, [esi]\0"
.balign 4
Lt_0A83:	.ascii	"mov [edi], cl\0"
.balign 4
Lt_0AB0:	.ascii	"mov dword ptr [edi], eax\0"
.balign 4
Lt_0AB7:	.ascii	"mov word ptr [edi], ax\0"
.balign 4
Lt_0ABC:	.ascii	"mov byte ptr [edi], al\0"
.balign 4
Lt_0AE0:	.ascii	"lea edi, \0"
.balign 4
Lt_0AE1:	.ascii	"push ecx\0"
.balign 4
Lt_0AE2:	.ascii	"shr ecx, 2\0"
.balign 4
Lt_0AE3:	.ascii	"pop ecx\0"
.balign 4
Lt_0AE4:	.ascii	"and ecx, 3\0"
.balign 4
Lt_0AE5:	.ascii	"rep stosb\0"
.balign 4
Lt_0B08:	.ascii	"0x\0"
.balign 4
Lt_0B13:	.ascii	".int \0"
.balign 4
Lt_0B1B:	.ascii	"\\0\"\n\0"
.balign 4
Lt_0B28:	.ascii	".skip \0"
.balign 4
Lt_0B29:	.ascii	",0\0"
.balign 4
Lt_0B32:	.ascii	" \"\0"
.balign 4
Lt_0B33:	.ascii	"\\0\"\0"

.section .data
.balign 4
_OPFNTB:
.int _EMITNOP
.int _EMITLOADI2I
.int _EMITLOADF2I
.int _EMITLOADL2I
.int _EMITLOADI2F
.int _EMITLOADF2F
.int _EMITLOADL2F
.int _EMITLOADI2L
.int _EMITLOADF2L
.int _EMITLOADL2L
.int _EMITSTORI2I
.int _EMITSTORF2I
.int _EMITSTORL2I
.int _EMITSTORI2F
.int _EMITSTORF2F
.int _EMITSTORL2F
.int _EMITSTORI2L
.int _EMITSTORF2L
.int _EMITSTORL2L
.int _EMITMOVI
.int _EMITMOVF
.int _EMITMOVL
.int _EMITADDI
.int _EMITADDF
.int _EMITADDL
.int _EMITSUBI
.int _EMITSUBF
.int _EMITSUBL
.int _EMITMULI
.int _EMITMULF
.int _EMITMULL
.int _EMITDIVI
.int _EMITDIVF
.long 0
.int _EMITMODI
.long 0
.long 0
.int _EMITSHLI
.int _EMITSHLL
.int _EMITSHRI
.int _EMITSHRL
.int _EMITANDI
.int _EMITANDL
.int _EMITORI
.int _EMITORL
.int _EMITXORI
.int _EMITXORL
.int _EMITEQVI
.int _EMITEQVL
.int _EMITIMPI
.int _EMITIMPL
.int _EMITATN2
.int _EMITPOW
.int _EMITADDROF
.int _EMITDEREF
.int _EMITCGTI
.int _EMITCGTF
.int _EMITCGTL
.int _EMITCLTI
.int _EMITCLTF
.int _EMITCLTL
.int _EMITCEQI
.int _EMITCEQF
.int _EMITCEQL
.int _EMITCNEI
.int _EMITCNEF
.int _EMITCNEL
.int _EMITCGEI
.int _EMITCGEF
.int _EMITCGEL
.int _EMITCLEI
.int _EMITCLEF
.int _EMITCLEL
.int _EMITNEGI
.int _EMITNEGF
.int _EMITNEGL
.int _EMITNOTI
.int _EMITNOTL
.long 0
.int _EMITABSI
.int _EMITABSF
.int _EMITABSL
.int _EMITSGNI
.int _EMITSGNF
.int _EMITSGNL
.int _EMITFIX
.int _EMITFRAC
.int _EMITCONVFD2FS
.long 0
.int _EMITSIN
.int _EMITASIN
.int _EMITCOS
.int _EMITACOS
.int _EMITTAN
.int _EMITATAN
.int _EMITSQRT
.long 0
.long 0
.int _EMITLOG
.int _EMITEXP
.int _EMITFLOOR
.int _EMITXCHGTOS
.int _EMITSTACKALIGN
.int _EMITPUSHI
.int _EMITPUSHF
.int _EMITPUSHL
.int _EMITPOPI
.int _EMITPOPF
.int _EMITPOPL
.int _EMITPUSHUDT
.int _EMITPOPST0
.int _EMITCALL
.int _EMITCALLPTR
.int _EMITBRANCH
.int _EMITJUMP
.int _EMITJUMPPTR
.int _EMITRET
.int _EMITLABEL
.int _EMITPUBLIC
.int _EMITLIT
.int _EMITJMPTB
.int _EMITMEMMOVE
.int _EMITMEMSWAP
.int _EMITMEMCLEAR
.int _EMITSTKCLEAR
.int _EMITLINEINI
.int _EMITLINEEND
.int _EMITSCOPEINI
.int _EMITSCOPEEND

.section .rodata
.balign 4
Lt_0B47:	.ascii	"_GETOPTIONVALUE\0"
.balign 4
Lt_0B50:	.ascii	"' compilation took \0"
.balign 4
Lt_0B51:	.ascii	" secs\0"
.balign 4
Lt_0BA6:	.ascii	".type \0"
.balign 4
Lt_0BA7:	.ascii	", @function\0"
.balign 4
Lt_0BBC:	.ascii	".byte\0"
.balign 4
Lt_0BBE:	.ascii	".short\0"
.balign 4
Lt_0BC0:	.ascii	".int\0"
.balign 4
Lt_0BC2:	.ascii	".long\0"
.balign 4
Lt_0BC4:	.ascii	".quad\0"
.balign 4
Lt_0BC6:	.ascii	".ascii\0"
.balign 4
Lt_0BC8:	.ascii	".INVALID\0"
.balign 4
Lt_0BD2:	.ascii	".section \0"
.balign 4
Lt_0BDB:	.ascii	"rdata\0"
.balign 4
Lt_0BDD:	.ascii	"const\0"
.balign 4
Lt_0BDF:	.ascii	"rodata\0"
.balign 4
Lt_0BE2:	.ascii	"data\0"
.balign 4
Lt_0BE4:	.ascii	"bss\0"
.balign 4
Lt_0BE6:	.ascii	"text\0"
.balign 4
Lt_0BE8:	.ascii	"drectve\0"
.balign 4
Lt_0BEB:	.ascii	"ctors\0"
.balign 4
Lt_0BEE:	.ascii	"00000\0"
.balign 4
Lt_0BF7:	.ascii	", \"aw\", @progbits\0"
.balign 4
Lt_0BF9:	.ascii	"dtors\0"

.section .ctors, "aw", @progbits
.int fb_ctor__emit_x86
