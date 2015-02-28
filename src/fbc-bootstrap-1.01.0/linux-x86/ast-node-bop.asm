	.intel_syntax noprefix

	#FreeBASIC-1.01.0-source/src/compiler/ast-node-bop.bas' compilation started at 16:30:02 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl ASTNEWBOP
ASTNEWBOP:
.type ASTNEWBOP, @function
push ebp
mov ebp, esp
sub esp, 140
push ebx
push esi
mov dword ptr [ebp-4], 0
.Lt_0178:
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+8]
sal eax, 2
mov ebx, offset SYMB
add ebx, eax
cmp dword ptr [ebx+99096], 0
je .Lt_017B
lea ebx, [ebp-120]
push ebx
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call SYMBFINDBOPOVLPROC
add esp, 16
mov dword ptr [ebp-116], eax
cmp dword ptr [ebp-116], 0
je .Lt_017D
push 0
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp-116]
call ASTBUILDCALL
add esp, 16
mov dword ptr [ebp-4], eax
jmp .Lt_0179
jmp .Lt_017C
.Lt_017D:
cmp dword ptr [ebp-120], 0
je .Lt_017F
mov dword ptr [ebp-4], 0
jmp .Lt_0179
.Lt_017F:
.Lt_017E:
.Lt_017C:
.Lt_017B:
.Lt_017A:
mov dword ptr [ebp-56], 0
cmp dword ptr [ebp+8], 44
jne .Lt_0181
.Lt_0182:
lea eax, [ebp+16]
push eax
lea eax, [ebp+12]
push eax
call HTOSTR
add esp, 8
mov dword ptr [ebp+8], 28
jmp .Lt_0180
.Lt_0181:
cmp dword ptr [ebp+8], 51
jne .Lt_0183
.Lt_0184:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call RTLOOPISTYPEOF
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_0179
.Lt_0183:
.Lt_0180:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-20], ebx
mov ebx, dword ptr [ebp+16]
mov eax, dword ptr [ebx+4]
mov dword ptr [ebp-24], eax
mov eax, dword ptr [ebp-20]
and eax, 480
je .Lt_0185
mov dword ptr [ebp-68], 22
jmp .Lt_02F8
.Lt_0185:
mov eax, dword ptr [ebp-20]
and eax, 31
mov dword ptr [ebp-68], eax
.Lt_02F8:
mov eax, dword ptr [ebp-68]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax]
mov dword ptr [ebp-32], ebx
mov ebx, dword ptr [ebp-24]
and ebx, 480
je .Lt_0187
mov dword ptr [ebp-72], 22
jmp .Lt_02F9
.Lt_0187:
mov ebx, dword ptr [ebp-24]
and ebx, 31
mov dword ptr [ebp-72], ebx
.Lt_02F9:
mov ebx, dword ptr [ebp-72]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx]
mov dword ptr [ebp-36], eax
mov eax, dword ptr [ebp-20]
and eax, 480
je .Lt_0189
mov dword ptr [ebp-76], 22
jmp .Lt_02FA
.Lt_0189:
mov eax, dword ptr [ebp-20]
and eax, 31
mov dword ptr [ebp-76], eax
.Lt_02FA:
mov eax, dword ptr [ebp-76]
cmp eax, 18
sete al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-116], eax
mov eax, dword ptr [ebp-24]
and eax, 480
je .Lt_018B
mov dword ptr [ebp-80], 22
jmp .Lt_02FB
.Lt_018B:
mov eax, dword ptr [ebp-24]
and eax, 31
mov dword ptr [ebp-80], eax
.Lt_02FB:
mov eax, dword ptr [ebp-80]
cmp eax, 18
sete al
shr eax, 1
sbb eax, eax
or eax, dword ptr [ebp-116]
je .Lt_018E
mov eax, dword ptr [ebp+24]
and eax, 8
test eax, eax
je .Lt_0190
jmp .Lt_0179
.Lt_0190:
.Lt_018F:
mov eax, dword ptr [ebp-20]
and eax, 480
je .Lt_0191
mov dword ptr [ebp-120], 22
jmp .Lt_02FD
.Lt_0191:
mov eax, dword ptr [ebp-20]
and eax, 31
mov dword ptr [ebp-120], eax
.Lt_02FD:
cmp dword ptr [ebp-120], 18
jne .Lt_0194
push dword ptr [ebp+24]
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HCONVERTUDT_L
add esp, 20
mov dword ptr [ebp-4], eax
jmp .Lt_0179
jmp .Lt_0193
.Lt_0194:
push dword ptr [ebp+24]
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HCONVERTUDT_R
add esp, 20
mov dword ptr [ebp-4], eax
jmp .Lt_0179
.Lt_0193:
.Lt_018E:
.Lt_018D:
mov eax, dword ptr [ebp-20]
and eax, 480
test eax, eax
je .Lt_0196
mov eax, dword ptr [ebp+24]
and eax, 2
test eax, eax
je .Lt_0198
push 0
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HDOPOINTERARITH
add esp, 16
mov dword ptr [ebp-4], eax
jmp .Lt_0179
jmp .Lt_0197
.Lt_0198:
push dword ptr [ebp-36]
push dword ptr [ebp-24]
push dword ptr [ebp+8]
call HCHECKPOINTER
add esp, 12
test eax, eax
jne .Lt_019A
jmp .Lt_0179
.Lt_019A:
.Lt_0199:
.Lt_0197:
jmp .Lt_0195
.Lt_0196:
mov eax, dword ptr [ebp-24]
and eax, 480
test eax, eax
je .Lt_019B
mov eax, dword ptr [ebp+24]
and eax, 4
test eax, eax
je .Lt_019D
push -1
push dword ptr [ebp+12]
push dword ptr [ebp+16]
push dword ptr [ebp+8]
call HDOPOINTERARITH
add esp, 16
mov dword ptr [ebp-4], eax
jmp .Lt_0179
jmp .Lt_019C
.Lt_019D:
push dword ptr [ebp-32]
push dword ptr [ebp-20]
push dword ptr [ebp+8]
call HCHECKPOINTER
add esp, 12
test eax, eax
jne .Lt_019F
jmp .Lt_0179
.Lt_019F:
.Lt_019E:
.Lt_019C:
.Lt_019B:
.Lt_0195:
mov eax, dword ptr [ebp-20]
and eax, 480
je .Lt_01A0
mov dword ptr [ebp-84], 22
jmp .Lt_02FE
.Lt_01A0:
mov eax, dword ptr [ebp-20]
and eax, 31
mov dword ptr [ebp-84], eax
.Lt_02FE:
cmp dword ptr [ebp-84], 9
jne .Lt_01A3
lea eax, [ebp+12]
push eax
lea eax, [ebp-32]
push eax
lea eax, [ebp-20]
push eax
push 7
call HCONVOPERAND
add esp, 16
.Lt_01A3:
.Lt_01A2:
mov eax, dword ptr [ebp-24]
and eax, 480
je .Lt_01A4
mov dword ptr [ebp-88], 22
jmp .Lt_02FF
.Lt_01A4:
mov eax, dword ptr [ebp-24]
and eax, 31
mov dword ptr [ebp-88], eax
.Lt_02FF:
cmp dword ptr [ebp-88], 9
jne .Lt_01A7
lea eax, [ebp+16]
push eax
lea eax, [ebp-36]
push eax
lea eax, [ebp-24]
push eax
push 7
call HCONVOPERAND
add esp, 16
.Lt_01A7:
.Lt_01A6:
mov eax, dword ptr [ebp-20]
and eax, 480
je .Lt_01A8
mov dword ptr [ebp-92], 22
jmp .Lt_0300
.Lt_01A8:
mov eax, dword ptr [ebp-20]
and eax, 31
mov dword ptr [ebp-92], eax
.Lt_0300:
mov eax, dword ptr [ebp-92]
cmp eax, 3
sete al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-116], eax
mov eax, dword ptr [ebp-24]
and eax, 480
je .Lt_01AA
mov dword ptr [ebp-96], 22
jmp .Lt_0301
.Lt_01AA:
mov eax, dword ptr [ebp-24]
and eax, 31
mov dword ptr [ebp-96], eax
.Lt_0301:
mov eax, dword ptr [ebp-96]
cmp eax, 3
sete al
shr eax, 1
sbb eax, eax
and eax, dword ptr [ebp-116]
je .Lt_01AD
mov dword ptr [ebp-32], 2
mov eax, dword ptr [ebp-32]
mov dword ptr [ebp-36], eax
.Lt_01AD:
.Lt_01AC:
mov eax, dword ptr [ebp-20]
and eax, 480
je .Lt_01AE
mov dword ptr [ebp-100], 22
jmp .Lt_0303
.Lt_01AE:
mov eax, dword ptr [ebp-20]
and eax, 31
mov dword ptr [ebp-100], eax
.Lt_0303:
mov eax, dword ptr [ebp-100]
cmp eax, 6
sete al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-116], eax
mov eax, dword ptr [ebp-24]
and eax, 480
je .Lt_01B0
mov dword ptr [ebp-104], 22
jmp .Lt_0304
.Lt_01B0:
mov eax, dword ptr [ebp-24]
and eax, 31
mov dword ptr [ebp-104], eax
.Lt_0304:
mov eax, dword ptr [ebp-104]
cmp eax, 6
sete al
shr eax, 1
sbb eax, eax
or eax, dword ptr [ebp-116]
je .Lt_01B3
mov eax, dword ptr [ebp-20]
and eax, 511
mov ebx, dword ptr [ebp-24]
and ebx, 511
cmp eax, ebx
je .Lt_01B5
mov ebx, dword ptr [ebp-20]
and ebx, 480
je .Lt_01B6
mov dword ptr [ebp-120], 22
jmp .Lt_0306
.Lt_01B6:
mov ebx, dword ptr [ebp-20]
and ebx, 31
mov dword ptr [ebp-120], ebx
.Lt_0306:
cmp dword ptr [ebp-120], 6
jne .Lt_01B9
mov ebx, dword ptr [ebp-36]
cmp ebx, 2
sete bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-128], ebx
mov ebx, dword ptr [ebp-24]
and ebx, 480
je .Lt_01BA
mov dword ptr [ebp-124], 22
jmp .Lt_0307
.Lt_01BA:
mov ebx, dword ptr [ebp-24]
and ebx, 31
mov dword ptr [ebp-124], ebx
.Lt_0307:
mov ebx, dword ptr [ebp-124]
cmp ebx, 3
sete bl
shr ebx, 1
sbb ebx, ebx
or ebx, dword ptr [ebp-128]
mov dword ptr [ebp-56], ebx
jmp .Lt_01B8
.Lt_01B9:
mov ebx, dword ptr [ebp-32]
cmp ebx, 2
sete bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-128], ebx
mov ebx, dword ptr [ebp-20]
and ebx, 480
je .Lt_01BC
mov dword ptr [ebp-124], 22
jmp .Lt_0309
.Lt_01BC:
mov ebx, dword ptr [ebp-20]
and ebx, 31
mov dword ptr [ebp-124], ebx
.Lt_0309:
mov ebx, dword ptr [ebp-124]
cmp ebx, 3
sete bl
shr ebx, 1
sbb ebx, ebx
or ebx, dword ptr [ebp-128]
mov dword ptr [ebp-56], ebx
.Lt_01B8:
jmp .Lt_01B4
.Lt_01B5:
mov dword ptr [ebp-56], -1
.Lt_01B4:
cmp dword ptr [ebp-56], 0
je .Lt_01BF
mov dword ptr [ebp-60], 0
mov ebx, dword ptr [ebp-20]
and ebx, 480
je .Lt_01C0
mov dword ptr [ebp-120], 22
jmp .Lt_030B
.Lt_01C0:
mov ebx, dword ptr [ebp-20]
and ebx, 31
mov dword ptr [ebp-120], ebx
.Lt_030B:
mov ebx, dword ptr [ebp-120]
mov dword ptr [ebp-124], ebx
cmp dword ptr [ebp-124], 3
je .Lt_01C5
.Lt_01C6:
cmp dword ptr [ebp-124], 6
jne .Lt_01C4
.Lt_01C5:
push dword ptr [ebp+12]
call ASTGETSTRLITSYMBOL
add esp, 4
mov dword ptr [ebp-60], eax
cmp dword ptr [ebp-60], 0
je .Lt_01C8
cmp dword ptr [ebp-24], 3
je .Lt_01CB
.Lt_01CC:
cmp dword ptr [ebp-24], 6
jne .Lt_01CA
.Lt_01CB:
push dword ptr [ebp+16]
call ASTGETSTRLITSYMBOL
add esp, 4
mov dword ptr [ebp-60], eax
jmp .Lt_01C9
.Lt_01CA:
mov dword ptr [ebp-60], 0
.Lt_01CD:
.Lt_01C9:
.Lt_01C8:
.Lt_01C7:
.Lt_01C4:
.Lt_01C2:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-120], eax
jmp .Lt_01CF
.Lt_01D1:
cmp dword ptr [ebp-60], 0
je .Lt_01D3
mov eax, dword ptr [ebp-20]
and eax, 511
mov ebx, dword ptr [ebp-24]
and ebx, 511
cmp eax, ebx
sete al
shr eax, 1
sbb eax, eax
or eax, dword ptr [ENV+228]
je .Lt_01D5
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call HWSTRLITERALCONCAT
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_0179
.Lt_01D5:
.Lt_01D4:
.Lt_01D3:
.Lt_01D2:
mov eax, dword ptr [ebp-20]
and eax, 511
mov ebx, dword ptr [ebp-24]
and ebx, 511
cmp eax, ebx
je .Lt_01D7
push dword ptr [ebp-24]
push dword ptr [ebp+16]
push dword ptr [ebp-20]
push dword ptr [ebp+12]
call RTLWSTRCONCAT
add esp, 16
mov dword ptr [ebp-4], eax
jmp .Lt_0179
.Lt_01D7:
.Lt_01D6:
mov eax, dword ptr [ebp-20]
and eax, -512
or eax, 6
and eax, -513
mov dword ptr [ebp-20], eax
mov dword ptr [ebp-32], 0
mov eax, dword ptr [ebp-24]
and eax, -512
mov ebx, dword ptr [ebp-20]
and ebx, 511
or eax, ebx
mov dword ptr [ebp-24], eax
mov eax, dword ptr [ebp-32]
mov dword ptr [ebp-36], eax
mov dword ptr [ebp-56], -1
jmp .Lt_01CE
.Lt_01D8:
cmp dword ptr [ebp-60], 0
je .Lt_01DA
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HWSTRLITERALCOMPARE
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_0179
.Lt_01DA:
.Lt_01D9:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call RTLWSTRCOMPARE
add esp, 8
mov dword ptr [ebp+12], eax
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp+16], eax
mov eax, dword ptr [ebp-20]
and eax, -512
mov ebx, dword ptr [ebp+12]
mov ecx, dword ptr [ebx+4]
and ecx, 511
or eax, ecx
mov dword ptr [ebp-20], eax
mov eax, dword ptr [ebp-24]
and eax, -512
mov ecx, dword ptr [ebp+16]
mov ebx, dword ptr [ecx+4]
and ebx, 511
or eax, ebx
mov dword ptr [ebp-24], eax
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-36], 0
jmp .Lt_01CE
.Lt_01DB:
jmp .Lt_0179
jmp .Lt_01CE
.Lt_01CF:
mov eax, dword ptr [ebp-120]
add eax, 4294967268
cmp eax, 22
ja .Lt_01DB
mov eax, dword ptr [ebp-120]
jmp dword ptr [.LT_01DC+eax*4-112]
.LT_01DC:
.int .Lt_01D1
.int .Lt_01DB
.int .Lt_01DB
.int .Lt_01DB
.int .Lt_01DB
.int .Lt_01DB
.int .Lt_01DB
.int .Lt_01DB
.int .Lt_01DB
.int .Lt_01DB
.int .Lt_01DB
.int .Lt_01DB
.int .Lt_01DB
.int .Lt_01DB
.int .Lt_01DB
.int .Lt_01DB
.int .Lt_01DB
.int .Lt_01D8
.int .Lt_01D8
.int .Lt_01D8
.int .Lt_01D8
.int .Lt_01D8
.int .Lt_01D8
.Lt_01CE:
jmp .Lt_01BE
.Lt_01BF:
mov eax, dword ptr [ebp-20]
and eax, 480
je .Lt_01DD
mov dword ptr [ebp-120], 22
jmp .Lt_030C
.Lt_01DD:
mov eax, dword ptr [ebp-20]
and eax, 31
mov dword ptr [ebp-120], eax
.Lt_030C:
cmp dword ptr [ebp-120], 6
jne .Lt_01E0
push dword ptr [ebp-24]
push dword ptr [ebp+16]
lea eax, [ebp-20]
push eax
push dword ptr [ebp+12]
call HCHECKDEREFWCHARPTR
add esp, 16
test eax, eax
jne .Lt_01E2
jmp .Lt_0179
.Lt_01E2:
.Lt_01E1:
jmp .Lt_01DF
.Lt_01E0:
push dword ptr [ebp-20]
push dword ptr [ebp+12]
lea eax, [ebp-24]
push eax
push dword ptr [ebp+16]
call HCHECKDEREFWCHARPTR
add esp, 16
test eax, eax
jne .Lt_01E4
jmp .Lt_0179
.Lt_01E4:
.Lt_01E3:
.Lt_01DF:
.Lt_01BE:
jmp .Lt_01B2
.Lt_01B3:
mov eax, dword ptr [ebp-32]
cmp eax, 2
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp-36]
cmp ebx, 2
sete bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
je .Lt_01E5
mov ebx, dword ptr [ebp-36]
cmp dword ptr [ebp-32], ebx
je .Lt_01E7
cmp dword ptr [ebp-32], 2
jne .Lt_01E9
mov ebx, dword ptr [ebp-24]
and ebx, 480
je .Lt_01EA
mov dword ptr [ebp-120], 22
jmp .Lt_030D
.Lt_01EA:
mov ebx, dword ptr [ebp-24]
and ebx, 31
mov dword ptr [ebp-120], ebx
.Lt_030D:
cmp dword ptr [ebp-120], 3
je .Lt_01ED
jmp .Lt_0179
.Lt_01ED:
.Lt_01EC:
jmp .Lt_01E8
.Lt_01E9:
mov ebx, dword ptr [ebp-20]
and ebx, 480
je .Lt_01EE
mov dword ptr [ebp-120], 22
jmp .Lt_030E
.Lt_01EE:
mov ebx, dword ptr [ebp-20]
and ebx, 31
mov dword ptr [ebp-120], ebx
.Lt_030E:
cmp dword ptr [ebp-120], 3
je .Lt_01F1
jmp .Lt_0179
.Lt_01F1:
.Lt_01F0:
.Lt_01E8:
.Lt_01E7:
.Lt_01E6:
mov dword ptr [ebp-60], 0
mov ebx, dword ptr [ebp-20]
and ebx, 480
je .Lt_01F2
mov dword ptr [ebp-116], 22
jmp .Lt_030F
.Lt_01F2:
mov ebx, dword ptr [ebp-20]
and ebx, 31
mov dword ptr [ebp-116], ebx
.Lt_030F:
cmp dword ptr [ebp-116], 3
jne .Lt_01F5
mov ebx, dword ptr [ebp-24]
and ebx, 480
je .Lt_01F6
mov dword ptr [ebp-120], 22
jmp .Lt_0310
.Lt_01F6:
mov ebx, dword ptr [ebp-24]
and ebx, 31
mov dword ptr [ebp-120], ebx
.Lt_0310:
cmp dword ptr [ebp-120], 3
jne .Lt_01F9
push dword ptr [ebp+12]
call ASTGETSTRLITSYMBOL
add esp, 4
mov dword ptr [ebp-60], eax
cmp dword ptr [ebp-60], 0
je .Lt_01FB
push dword ptr [ebp+16]
call ASTGETSTRLITSYMBOL
add esp, 4
mov dword ptr [ebp-60], eax
.Lt_01FB:
.Lt_01FA:
.Lt_01F9:
.Lt_01F8:
.Lt_01F5:
.Lt_01F4:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-120], eax
jmp .Lt_01FD
.Lt_01FF:
cmp dword ptr [ebp-60], 0
je .Lt_0201
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call HSTRLITERALCONCAT
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_0179
.Lt_0201:
.Lt_0200:
mov eax, dword ptr [ebp-20]
and eax, -512
or eax, 16
and eax, -513
mov dword ptr [ebp-20], eax
mov dword ptr [ebp-32], 2
mov eax, dword ptr [ebp-24]
and eax, -512
mov ebx, dword ptr [ebp-20]
and ebx, 511
or eax, ebx
mov dword ptr [ebp-24], eax
mov eax, dword ptr [ebp-32]
mov dword ptr [ebp-36], eax
mov dword ptr [ebp-56], -1
jmp .Lt_01FC
.Lt_0202:
cmp dword ptr [ebp-60], 0
je .Lt_0204
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HSTRLITERALCOMPARE
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_0179
.Lt_0204:
.Lt_0203:
push dword ptr [ebp-24]
push dword ptr [ebp+16]
push dword ptr [ebp-20]
push dword ptr [ebp+12]
call RTLSTRCOMPARE
add esp, 16
mov dword ptr [ebp+12], eax
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp+16], eax
mov eax, dword ptr [ebp-20]
and eax, -512
mov ebx, dword ptr [ebp+12]
mov ecx, dword ptr [ebx+4]
and ecx, 511
or eax, ecx
mov dword ptr [ebp-20], eax
mov dword ptr [ebp-32], 0
mov eax, dword ptr [ebp-24]
and eax, -512
mov ecx, dword ptr [ebp+16]
mov ebx, dword ptr [ecx+4]
and ebx, 511
or eax, ebx
mov dword ptr [ebp-24], eax
mov dword ptr [ebp-36], 0
jmp .Lt_01FC
.Lt_0205:
jmp .Lt_0179
jmp .Lt_01FC
.Lt_01FD:
mov eax, dword ptr [ebp-120]
add eax, 4294967268
cmp eax, 22
ja .Lt_0205
mov eax, dword ptr [ebp-120]
jmp dword ptr [.LT_0206+eax*4-112]
.LT_0206:
.int .Lt_01FF
.int .Lt_0205
.int .Lt_0205
.int .Lt_0205
.int .Lt_0205
.int .Lt_0205
.int .Lt_0205
.int .Lt_0205
.int .Lt_0205
.int .Lt_0205
.int .Lt_0205
.int .Lt_0205
.int .Lt_0205
.int .Lt_0205
.int .Lt_0205
.int .Lt_0205
.int .Lt_0205
.int .Lt_0202
.int .Lt_0202
.int .Lt_0202
.int .Lt_0202
.int .Lt_0202
.int .Lt_0202
.Lt_01FC:
jmp .Lt_01B2
.Lt_01E5:
mov eax, dword ptr [ebp-20]
and eax, 480
je .Lt_0208
mov dword ptr [ebp-108], 22
jmp .Lt_0311
.Lt_0208:
mov eax, dword ptr [ebp-20]
and eax, 31
mov dword ptr [ebp-108], eax
.Lt_0311:
mov eax, dword ptr [ebp-108]
cmp eax, 3
sete al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-116], eax
mov eax, dword ptr [ebp-24]
and eax, 480
je .Lt_020A
mov dword ptr [ebp-112], 22
jmp .Lt_0312
.Lt_020A:
mov eax, dword ptr [ebp-24]
and eax, 31
mov dword ptr [ebp-112], eax
.Lt_0312:
mov eax, dword ptr [ebp-112]
cmp eax, 3
sete al
shr eax, 1
sbb eax, eax
or eax, dword ptr [ebp-116]
je .Lt_0207
mov eax, dword ptr [ebp-20]
and eax, 480
je .Lt_020C
mov dword ptr [ebp-120], 22
jmp .Lt_0314
.Lt_020C:
mov eax, dword ptr [ebp-20]
and eax, 31
mov dword ptr [ebp-120], eax
.Lt_0314:
cmp dword ptr [ebp-120], 3
jne .Lt_020F
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax], 20
je .Lt_0211
jmp .Lt_0179
.Lt_0211:
.Lt_0210:
mov eax, dword ptr [ebp-20]
and eax, -512
or eax, 2
mov dword ptr [ebp-20], eax
jmp .Lt_020E
.Lt_020F:
mov eax, dword ptr [ebp+16]
cmp dword ptr [eax], 20
je .Lt_0213
jmp .Lt_0179
.Lt_0213:
.Lt_0212:
mov eax, dword ptr [ebp-24]
and eax, -512
or eax, 2
mov dword ptr [ebp-24], eax
.Lt_020E:
.Lt_0207:
.Lt_01B2:
mov eax, dword ptr [ebp-20]
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp-24]
mov dword ptr [ebp-16], eax
mov eax, dword ptr [ENV+136]
cmp eax, 3
setne al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp-56]
test ebx, ebx
sete bl
shr ebx, 1
sbb ebx, ebx
and eax, ebx
je .Lt_0215
mov ebx, dword ptr [SYMB_DTYPETB+208]
mov dword ptr [ebp-48], ebx
mov ebx, dword ptr [SYMB_DTYPETB+236]
mov dword ptr [ebp-52], ebx
cmp dword ptr [ebp-32], 0
jne .Lt_0217
mov ebx, dword ptr [ebp-20]
and ebx, 480
je .Lt_0218
mov dword ptr [ebp-116], 22
jmp .Lt_0315
.Lt_0218:
mov ebx, dword ptr [ebp-20]
and ebx, 31
mov dword ptr [ebp-116], ebx
.Lt_0315:
mov ebx, dword ptr [ebp-116]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx+16]
and eax, 480
je .Lt_021C
mov dword ptr [ebp-124], 22
jmp .Lt_0316
.Lt_021C:
mov eax, dword ptr [ebp-20]
and eax, 480
je .Lt_021A
mov dword ptr [ebp-120], 22
jmp .Lt_0317
.Lt_021A:
mov eax, dword ptr [ebp-20]
and eax, 31
mov dword ptr [ebp-120], eax
.Lt_0317:
mov eax, dword ptr [ebp-120]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+16]
and ebx, 31
mov dword ptr [ebp-124], ebx
.Lt_0316:
mov ebx, dword ptr [ebp-124]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx+12]
mov dword ptr [ebp-40], eax
mov eax, dword ptr [ebp-48]
cmp dword ptr [ebp-40], eax
jge .Lt_021F
lea eax, [ebp+12]
push eax
lea eax, [ebp-32]
push eax
lea eax, [ebp-20]
push eax
push 7
call HCONVOPERAND
add esp, 16
jmp .Lt_021E
.Lt_021F:
mov eax, dword ptr [ebp-48]
cmp eax, dword ptr [ebp-40]
setl al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp-40]
cmp ebx, dword ptr [ebp-52]
setl bl
shr ebx, 1
sbb ebx, ebx
and eax, ebx
je .Lt_0221
lea ebx, [ebp+12]
push ebx
lea ebx, [ebp-32]
push ebx
lea ebx, [ebp-20]
push ebx
push 8
call HCONVOPERAND
add esp, 16
.Lt_0221:
.Lt_0220:
.Lt_021E:
.Lt_0217:
.Lt_0216:
cmp dword ptr [ebp-36], 0
jne .Lt_0223
mov ebx, dword ptr [ebp-24]
and ebx, 480
je .Lt_0224
mov dword ptr [ebp-116], 22
jmp .Lt_0318
.Lt_0224:
mov ebx, dword ptr [ebp-24]
and ebx, 31
mov dword ptr [ebp-116], ebx
.Lt_0318:
mov ebx, dword ptr [ebp-116]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx+16]
and eax, 480
je .Lt_0228
mov dword ptr [ebp-124], 22
jmp .Lt_0319
.Lt_0228:
mov eax, dword ptr [ebp-24]
and eax, 480
je .Lt_0226
mov dword ptr [ebp-120], 22
jmp .Lt_031A
.Lt_0226:
mov eax, dword ptr [ebp-24]
and eax, 31
mov dword ptr [ebp-120], eax
.Lt_031A:
mov eax, dword ptr [ebp-120]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+16]
and ebx, 31
mov dword ptr [ebp-124], ebx
.Lt_0319:
mov ebx, dword ptr [ebp-124]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx+12]
mov dword ptr [ebp-44], eax
mov eax, dword ptr [ebp-48]
cmp dword ptr [ebp-44], eax
jge .Lt_022B
lea eax, [ebp+16]
push eax
lea eax, [ebp-36]
push eax
lea eax, [ebp-24]
push eax
push 7
call HCONVOPERAND
add esp, 16
jmp .Lt_022A
.Lt_022B:
mov eax, dword ptr [ebp-48]
cmp eax, dword ptr [ebp-44]
setl al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp-44]
cmp ebx, dword ptr [ebp-52]
setl bl
shr ebx, 1
sbb ebx, ebx
and eax, ebx
je .Lt_022D
lea ebx, [ebp+16]
push ebx
lea ebx, [ebp-36]
push ebx
lea ebx, [ebp-24]
push ebx
push 8
call HCONVOPERAND
add esp, 16
.Lt_022D:
.Lt_022C:
.Lt_022A:
.Lt_0223:
.Lt_0222:
.Lt_0215:
.Lt_0214:
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebp-116], ebx
jmp .Lt_022F
.Lt_0231:
cmp dword ptr [ebp-32], 1
je .Lt_0233
mov ebx, dword ptr [ebp-20]
and ebx, -512
or ebx, 15
mov dword ptr [ebp-20], ebx
push 0
push 0
push dword ptr [ebp+12]
push 0
push dword ptr [ebp-20]
call ASTNEWCONV
add esp, 20
mov dword ptr [ebp+12], eax
mov dword ptr [ebp-32], 1
.Lt_0233:
.Lt_0232:
cmp dword ptr [ebp-36], 1
je .Lt_0235
mov eax, dword ptr [ebp-24]
and eax, -512
or eax, 15
mov dword ptr [ebp-24], eax
mov eax, dword ptr [IR+284]
and eax, 1
test eax, eax
je .Lt_0237
push 0
push 0
push dword ptr [ebp+16]
push 0
push dword ptr [ebp-24]
call ASTNEWCONV
add esp, 20
mov dword ptr [ebp+16], eax
jmp .Lt_0236
.Lt_0237:
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax]
cmp ebx, 17
setne bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp-24]
cmp eax, 7
setne al
shr eax, 1
sbb eax, eax
or ebx, eax
je .Lt_0239
push 0
push 0
push dword ptr [ebp+16]
push 0
push dword ptr [ebp-24]
call ASTNEWCONV
add esp, 20
mov dword ptr [ebp+16], eax
.Lt_0239:
.Lt_0238:
.Lt_0236:
mov dword ptr [ebp-36], 1
.Lt_0235:
.Lt_0234:
jmp .Lt_022E
.Lt_023A:
cmp dword ptr [ebp-32], 0
je .Lt_023C
mov eax, dword ptr [ebp-20]
and eax, -512
or eax, 7
mov dword ptr [ebp-20], eax
push 0
push 0
push dword ptr [ebp+12]
push 0
push dword ptr [ebp-20]
call ASTNEWCONV
add esp, 20
mov dword ptr [ebp+12], eax
mov dword ptr [ebp-32], 0
.Lt_023C:
.Lt_023B:
cmp dword ptr [ebp-36], 0
je .Lt_023E
mov eax, dword ptr [ebp-24]
and eax, -512
or eax, 7
mov dword ptr [ebp-24], eax
push 0
push 0
push dword ptr [ebp+16]
push 0
push dword ptr [ebp-24]
call ASTNEWCONV
add esp, 20
mov dword ptr [ebp+16], eax
mov dword ptr [ebp-36], 0
.Lt_023E:
.Lt_023D:
jmp .Lt_022E
.Lt_023F:
cmp dword ptr [ebp-32], 1
je .Lt_0241
mov eax, dword ptr [ebp-20]
and eax, -512
or eax, 15
mov dword ptr [ebp-20], eax
push 0
push 0
push dword ptr [ebp+12]
push 0
push dword ptr [ebp-20]
call ASTNEWCONV
add esp, 20
mov dword ptr [ebp+12], eax
mov dword ptr [ebp-32], 1
.Lt_0241:
.Lt_0240:
cmp dword ptr [ebp-36], 1
je .Lt_0243
mov eax, dword ptr [ebp-24]
and eax, -512
or eax, 15
mov dword ptr [ebp-24], eax
push 0
push 0
push dword ptr [ebp+16]
push 0
push dword ptr [ebp-24]
call ASTNEWCONV
add esp, 20
mov dword ptr [ebp+16], eax
mov dword ptr [ebp-36], 1
.Lt_0243:
.Lt_0242:
jmp .Lt_022E
.Lt_022F:
mov eax, dword ptr [ebp-116]
add eax, 4294967265
cmp eax, 33
ja .Lt_022E
mov eax, dword ptr [ebp-116]
jmp dword ptr [.LT_0244+eax*4-124]
.LT_0244:
.int .Lt_0231
.int .Lt_023A
.int .Lt_023A
.int .Lt_023A
.int .Lt_023A
.int .Lt_022E
.int .Lt_022E
.int .Lt_023A
.int .Lt_023A
.int .Lt_023A
.int .Lt_023A
.int .Lt_023A
.int .Lt_023F
.int .Lt_022E
.int .Lt_022E
.int .Lt_022E
.int .Lt_022E
.int .Lt_022E
.int .Lt_022E
.int .Lt_022E
.int .Lt_022E
.int .Lt_022E
.int .Lt_022E
.int .Lt_022E
.int .Lt_022E
.int .Lt_022E
.int .Lt_022E
.int .Lt_022E
.int .Lt_022E
.int .Lt_022E
.int .Lt_022E
.int .Lt_022E
.int .Lt_022E
.int .Lt_023F
.Lt_022E:
mov eax, dword ptr [ebp-24]
cmp eax, dword ptr [ebp-20]
setne al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp+12]
mov ecx, dword ptr [ebp+16]
mov esi, dword ptr [ebx+8]
cmp esi, dword ptr [ecx+8]
setne bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
je .Lt_0246
mov ebx, dword ptr [ebp-20]
and ebx, 480
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp-24]
and eax, 480
test eax, eax
setne al
shr eax, 1
sbb eax, eax
or ebx, eax
mov eax, dword ptr [ebp+8]
cmp eax, 28
sete al
shr eax, 1
sbb eax, eax
mov ecx, dword ptr [ebp+8]
cmp ecx, 29
sete cl
shr ecx, 1
sbb ecx, ecx
or eax, ecx
and ebx, eax
je .Lt_0248
mov eax, dword ptr [ebp-20]
and eax, 480
test eax, eax
je .Lt_024A
mov eax, dword ptr [ebp-20]
mov dword ptr [ebp-28], eax
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+8]
mov dword ptr [ebp-64], ebx
jmp .Lt_0249
.Lt_024A:
mov ebx, dword ptr [ebp-24]
mov dword ptr [ebp-28], ebx
mov ebx, dword ptr [ebp+16]
mov eax, dword ptr [ebx+8]
mov dword ptr [ebp-64], eax
.Lt_0249:
jmp .Lt_0247
.Lt_0248:
lea eax, [ebp-64]
push eax
lea eax, [ebp-28]
push eax
mov eax, dword ptr [ebp+16]
push dword ptr [eax+8]
push dword ptr [ebp-24]
mov eax, dword ptr [ebp+12]
push dword ptr [eax+8]
push dword ptr [ebp-20]
call TYPEMAX
add esp, 24
mov eax, dword ptr [ebp-28]
and eax, 511
mov ebx, dword ptr [ebp-20]
and ebx, 511
cmp eax, ebx
setne al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp+12]
mov ecx, dword ptr [ebp-64]
cmp ecx, dword ptr [ebx+8]
setne dl
mov esi, edx
shr esi, 1
sbb esi, esi
or eax, esi
je .Lt_024C
push 0
push 0
push dword ptr [ebp+12]
push dword ptr [ebp-64]
push dword ptr [ebp-28]
call ASTNEWCONV
add esp, 20
mov dword ptr [ebp+12], eax
cmp dword ptr [ebp+12], 0
jne .Lt_024E
jmp .Lt_0179
.Lt_024E:
mov eax, dword ptr [ebp-28]
mov dword ptr [ebp-20], eax
mov eax, dword ptr [ebp-28]
and eax, 480
je .Lt_024F
mov dword ptr [ebp-116], 22
jmp .Lt_031B
.Lt_024F:
mov eax, dword ptr [ebp-28]
and eax, 31
mov dword ptr [ebp-116], eax
.Lt_031B:
mov eax, dword ptr [ebp-116]
imul eax, 28
mov esi, dword ptr [SYMB_DTYPETB+eax]
mov dword ptr [ebp-32], esi
.Lt_024C:
.Lt_024B:
mov esi, dword ptr [ebp-28]
and esi, 511
mov eax, dword ptr [ebp-24]
and eax, 511
cmp esi, eax
setne dl
mov esi, edx
shr esi, 1
sbb esi, esi
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [ebp-64]
cmp ebx, dword ptr [eax+8]
setne cl
shr ecx, 1
sbb ecx, ecx
or esi, ecx
je .Lt_0252
cmp dword ptr [ebp+8], 41
je .Lt_0255
.Lt_0256:
cmp dword ptr [ebp+8], 42
jne .Lt_0254
.Lt_0255:
jmp .Lt_0253
.Lt_0254:
push 0
push 0
push dword ptr [ebp+16]
push dword ptr [ebp-64]
push dword ptr [ebp-28]
call ASTNEWCONV
add esp, 20
mov dword ptr [ebp+16], eax
cmp dword ptr [ebp+16], 0
jne .Lt_0259
jmp .Lt_0179
.Lt_0259:
mov eax, dword ptr [ebp-28]
mov dword ptr [ebp-24], eax
mov eax, dword ptr [ebp-28]
and eax, 480
je .Lt_025A
mov dword ptr [ebp-116], 22
jmp .Lt_031C
.Lt_025A:
mov eax, dword ptr [ebp-28]
and eax, 31
mov dword ptr [ebp-116], eax
.Lt_031C:
mov eax, dword ptr [ebp-116]
imul eax, 28
mov ecx, dword ptr [SYMB_DTYPETB+eax]
mov dword ptr [ebp-36], ecx
.Lt_0257:
.Lt_0253:
.Lt_0252:
.Lt_0251:
.Lt_0247:
jmp .Lt_0245
.Lt_0246:
mov ecx, dword ptr [ebp-20]
mov dword ptr [ebp-28], ecx
mov ecx, dword ptr [ebp+12]
mov eax, dword ptr [ecx+8]
mov dword ptr [ebp-64], eax
.Lt_0245:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-116], eax
jmp .Lt_025D
.Lt_025F:
mov dword ptr [ebp-120], 0
mov eax, dword ptr [ebp-12]
and eax, 480
je .Lt_0260
mov dword ptr [ebp-124], 22
jmp .Lt_031D
.Lt_0260:
mov eax, dword ptr [ebp-12]
and eax, 31
mov dword ptr [ebp-124], eax
.Lt_031D:
mov eax, dword ptr [ebp-124]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+8], 0
je .Lt_0263
mov eax, dword ptr [ebp-20]
and eax, 480
je .Lt_0264
mov dword ptr [ebp-140], 22
jmp .Lt_031E
.Lt_0264:
mov eax, dword ptr [ebp-20]
and eax, 31
mov dword ptr [ebp-140], eax
.Lt_031E:
mov eax, dword ptr [ebp-140]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+8], 0
jne .Lt_0267
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax], 16
jne .Lt_0269
push dword ptr [ebp+12]
call ASTCONSTGETASINT64
add esp, 4
cmp edx, 0
jg .Lt_026B
jl .Lt_034C
cmp eax, 0
jae .Lt_026B
.Lt_034C:
mov dword ptr [ebp-120], 35
.Lt_026B:
.Lt_026A:
jmp .Lt_0268
.Lt_0269:
mov eax, dword ptr [ENV+176]
and eax, 32
test eax, eax
je .Lt_026D
mov dword ptr [ebp-120], 35
.Lt_026D:
.Lt_026C:
.Lt_0268:
.Lt_0267:
.Lt_0266:
.Lt_0263:
.Lt_0262:
mov eax, dword ptr [ebp-120]
test eax, eax
sete al
shr eax, 1
sbb eax, eax
test eax, eax
je .Lt_026E
mov eax, dword ptr [ebp+8]
cmp eax, 42
setne al
shr eax, 1
sbb eax, eax
test eax, eax
setne al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-128], eax
jmp .Lt_031F
.Lt_026E:
mov dword ptr [ebp-128], 0
.Lt_031F:
cmp dword ptr [ebp-128], 0
je .Lt_0272
mov eax, dword ptr [ebp-16]
and eax, 480
je .Lt_0270
mov dword ptr [ebp-132], 22
jmp .Lt_0321
.Lt_0270:
mov eax, dword ptr [ebp-16]
and eax, 31
mov dword ptr [ebp-132], eax
.Lt_0321:
mov eax, dword ptr [ebp-132]
imul eax, 28
mov edx, dword ptr [SYMB_DTYPETB+eax+8]
test edx, edx
setne dl
shr edx, 1
sbb edx, edx
mov dword ptr [ebp-136], edx
jmp .Lt_0320
.Lt_0272:
mov dword ptr [ebp-136], 0
.Lt_0320:
cmp dword ptr [ebp-136], 0
je .Lt_0275
mov edx, dword ptr [ebp-24]
and edx, 480
je .Lt_0276
mov dword ptr [ebp-140], 22
jmp .Lt_0322
.Lt_0276:
mov edx, dword ptr [ebp-24]
and edx, 31
mov dword ptr [ebp-140], edx
.Lt_0322:
mov edx, dword ptr [ebp-140]
imul edx, 28
cmp dword ptr [SYMB_DTYPETB+edx+8], 0
jne .Lt_0279
mov edx, dword ptr [ebp+16]
cmp dword ptr [edx], 16
jne .Lt_027B
push dword ptr [ebp+16]
call ASTCONSTGETASINT64
add esp, 4
cmp edx, 0
jg .Lt_027D
jl .Lt_0351
cmp eax, 0
jae .Lt_027D
.Lt_0351:
mov dword ptr [ebp-120], 35
.Lt_027D:
.Lt_027C:
jmp .Lt_027A
.Lt_027B:
mov eax, dword ptr [ENV+176]
and eax, 32
test eax, eax
je .Lt_027F
mov dword ptr [ebp-120], 35
.Lt_027F:
.Lt_027E:
.Lt_027A:
.Lt_0279:
.Lt_0278:
.Lt_0275:
.Lt_0274:
cmp dword ptr [ebp-120], 0
je .Lt_0281
push 1
push 0
push dword ptr [ebp-120]
call ERRREPORTWARN
add esp, 12
.Lt_0281:
.Lt_0280:
jmp .Lt_025C
.Lt_025D:
mov eax, dword ptr [ebp-116]
add eax, 4294967264
cmp eax, 18
ja .Lt_025C
mov eax, dword ptr [ebp-116]
jmp dword ptr [.LT_0282+eax*4-128]
.LT_0282:
.int .Lt_025F
.int .Lt_025F
.int .Lt_025C
.int .Lt_025C
.int .Lt_025C
.int .Lt_025C
.int .Lt_025C
.int .Lt_025C
.int .Lt_025C
.int .Lt_025C
.int .Lt_025F
.int .Lt_025C
.int .Lt_025C
.int .Lt_025F
.int .Lt_025F
.int .Lt_025F
.int .Lt_025F
.int .Lt_025F
.int .Lt_025F
.Lt_025C:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-116], eax
jmp .Lt_0284
.Lt_0286:
mov dword ptr [ebp-28], 7
mov dword ptr [ebp-64], 0
jmp .Lt_0283
.Lt_0287:
mov eax, dword ptr [ebp+16]
cmp dword ptr [eax], 16
jne .Lt_0289
mov eax, dword ptr [ebp+16]
mov dword ptr [ebp-124], eax
mov eax, dword ptr [ebp-20]
and eax, 480
je .Lt_028A
mov dword ptr [ebp-120], 22
jmp .Lt_0323
.Lt_028A:
mov eax, dword ptr [ebp-20]
and eax, 31
mov dword ptr [ebp-120], eax
.Lt_0323:
mov eax, dword ptr [ebp-120]
imul eax, 28
mov edx, dword ptr [SYMB_DTYPETB+eax+4]
sal edx, 3
mov ecx, edx
mov eax, ecx
sar eax, 31
mov edx, dword ptr [ebp-124]
cmp dword ptr [edx+24], eax
jb .Lt_028D
ja .Lt_0352
cmp dword ptr [edx+20], ecx
jb .Lt_028D
.Lt_0352:
push 1
push 0
push 33
call ERRREPORTWARN
add esp, 12
push 1
push 0
push 0
push 7
mov ecx, dword ptr [ebp-20]
and ecx, 480
je .Lt_028E
mov dword ptr [ebp-128], 22
jmp .Lt_0325
.Lt_028E:
mov ecx, dword ptr [ebp-20]
and ecx, 31
mov dword ptr [ebp-128], ecx
.Lt_0325:
mov ecx, dword ptr [ebp-128]
imul ecx, 28
mov eax, dword ptr [SYMB_DTYPETB+ecx+4]
sal eax, 3
dec eax
mov edx, eax
mov ecx, edx
sar ecx, 31
push ecx
push edx
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp+16]
push 34
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp+16], eax
.Lt_028D:
.Lt_028C:
.Lt_0289:
.Lt_0288:
mov eax, dword ptr [ebp-24]
and eax, 511
cmp eax, 7
je .Lt_0291
mov eax, dword ptr [ebp-24]
and eax, 511
cmp eax, 8
je .Lt_0293
mov eax, dword ptr [ebp-24]
and eax, -512
or eax, 7
mov dword ptr [ebp-24], eax
push 0
push 0
push dword ptr [ebp+16]
push 0
push dword ptr [ebp-24]
call ASTNEWCONV
add esp, 20
mov dword ptr [ebp+16], eax
mov dword ptr [ebp-36], 0
.Lt_0293:
.Lt_0292:
.Lt_0291:
.Lt_0290:
jmp .Lt_0283
.Lt_0284:
mov eax, dword ptr [ebp-116]
add eax, 4294967260
cmp eax, 14
ja .Lt_0283
mov eax, dword ptr [ebp-116]
jmp dword ptr [.LT_0294+eax*4-144]
.LT_0294:
.int .Lt_0286
.int .Lt_0286
.int .Lt_0283
.int .Lt_0283
.int .Lt_0283
.int .Lt_0287
.int .Lt_0287
.int .Lt_0283
.int .Lt_0283
.int .Lt_0286
.int .Lt_0286
.int .Lt_0286
.int .Lt_0286
.int .Lt_0286
.int .Lt_0286
.Lt_0283:
mov eax, dword ptr [ebp+12]
mov edx, dword ptr [eax]
cmp edx, 16
sete dl
shr edx, 1
sbb edx, edx
mov eax, dword ptr [ebp+16]
mov ecx, dword ptr [eax]
cmp ecx, 16
sete cl
shr ecx, 1
sbb ecx, ecx
and edx, ecx
je .Lt_0296
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp-64]
push dword ptr [ebp-28]
push dword ptr [ebp+8]
call HCONSTBOP
add esp, 20
mov dword ptr [ebp+12], eax
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [ebp-28]
mov dword ptr [eax+4], ecx
mov ecx, dword ptr [ebp+12]
mov eax, dword ptr [ebp-64]
mov dword ptr [ecx+8], eax
push dword ptr [ebp+16]
call ASTDELNODE
add esp, 4
mov eax, dword ptr [ebp+12]
mov dword ptr [ebp-4], eax
jmp .Lt_0179
jmp .Lt_0295
.Lt_0296:
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax]
cmp ecx, 16
sete cl
shr ecx, 1
sbb ecx, ecx
mov eax, dword ptr [ebp-24]
cmp eax, dword ptr [ebp-20]
sete al
shr eax, 1
sbb eax, eax
and ecx, eax
mov eax, dword ptr [ebp-56]
test eax, eax
sete al
shr eax, 1
sbb eax, eax
and ecx, eax
je .Lt_0297
cmp dword ptr [ebp+8], 28
je .Lt_029A
.Lt_029B:
cmp dword ptr [ebp+8], 30
je .Lt_029A
.Lt_029C:
cmp dword ptr [ebp+8], 34
je .Lt_029A
.Lt_029D:
cmp dword ptr [ebp+8], 35
je .Lt_029A
.Lt_029E:
cmp dword ptr [ebp+8], 38
je .Lt_029A
.Lt_029F:
cmp dword ptr [ebp+8], 39
je .Lt_029A
.Lt_02A0:
cmp dword ptr [ebp+8], 45
je .Lt_029A
.Lt_02A1:
cmp dword ptr [ebp+8], 48
jne .Lt_0299
.Lt_029A:
push 72
push dword ptr [ebp+12]
push dword ptr [ebp+16]
call fb_MemSwap
add esp, 12
jmp .Lt_0298
.Lt_0299:
cmp dword ptr [ebp+8], 49
jne .Lt_02A2
.Lt_02A3:
mov dword ptr [ebp+8], 50
push 72
push dword ptr [ebp+12]
push dword ptr [ebp+16]
call fb_MemSwap
add esp, 12
jmp .Lt_0298
.Lt_02A2:
cmp dword ptr [ebp+8], 46
jne .Lt_02A4
.Lt_02A5:
mov dword ptr [ebp+8], 47
push 72
push dword ptr [ebp+12]
push dword ptr [ebp+16]
call fb_MemSwap
add esp, 12
jmp .Lt_0298
.Lt_02A4:
cmp dword ptr [ebp+8], 50
jne .Lt_02A6
.Lt_02A7:
mov dword ptr [ebp+8], 49
push 72
push dword ptr [ebp+12]
push dword ptr [ebp+16]
call fb_MemSwap
add esp, 12
jmp .Lt_0298
.Lt_02A6:
cmp dword ptr [ebp+8], 47
jne .Lt_02A8
.Lt_02A9:
mov dword ptr [ebp+8], 46
push 72
push dword ptr [ebp+12]
push dword ptr [ebp+16]
call fb_MemSwap
add esp, 12
jmp .Lt_0298
.Lt_02A8:
cmp dword ptr [ebp+8], 29
jne .Lt_02AA
.Lt_02AB:
inc dword ptr [AST+232]
push dword ptr [ebp+16]
push 54
call ASTNEWUOP
add esp, 8
mov dword ptr [ebp+16], eax
dec dword ptr [AST+232]
cmp dword ptr [ebp+16], 0
jne .Lt_02AD
mov dword ptr [ebp-4], 0
jmp .Lt_0179
.Lt_02AD:
.Lt_02AC:
push 72
push dword ptr [ebp+12]
push dword ptr [ebp+16]
call fb_MemSwap
add esp, 12
mov dword ptr [ebp+8], 28
.Lt_02AA:
.Lt_0298:
jmp .Lt_0295
.Lt_0297:
mov eax, dword ptr [ebp+16]
cmp dword ptr [eax], 16
jne .Lt_02AE
cmp dword ptr [ebp+8], 28
jne .Lt_02B0
.Lt_02B1:
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax], 23
jne .Lt_02B3
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [ebp+16]
mov esi, dword ptr [ecx+20]
mov edx, dword ptr [ecx+24]
add dword ptr [eax+20], esi
adc dword ptr [eax+24], edx
push dword ptr [ebp+16]
call ASTDELNODE
add esp, 4
mov esi, dword ptr [ebp+12]
mov dword ptr [ebp-4], esi
jmp .Lt_0179
.Lt_02B3:
.Lt_02B2:
jmp .Lt_02AF
.Lt_02B0:
cmp dword ptr [ebp+8], 29
jne .Lt_02B4
.Lt_02B5:
mov esi, dword ptr [ebp+12]
cmp dword ptr [esi], 23
jne .Lt_02B7
mov esi, dword ptr [ebp+12]
mov edx, dword ptr [ebp+16]
mov ecx, dword ptr [edx+20]
mov eax, dword ptr [edx+24]
sub dword ptr [esi+20], ecx
sbb dword ptr [esi+24], eax
push dword ptr [ebp+16]
call ASTDELNODE
add esp, 4
mov ecx, dword ptr [ebp+12]
mov dword ptr [ebp-4], ecx
jmp .Lt_0179
.Lt_02B7:
.Lt_02B6:
inc dword ptr [AST+232]
push dword ptr [ebp+16]
push 54
call ASTNEWUOP
add esp, 8
mov dword ptr [ebp+16], eax
dec dword ptr [AST+232]
mov dword ptr [ebp+8], 28
jmp .Lt_02AF
.Lt_02B4:
cmp dword ptr [ebp+8], 32
je .Lt_02B9
.Lt_02BA:
cmp dword ptr [ebp+8], 33
jne .Lt_02B8
.Lt_02B9:
mov eax, dword ptr [ebp+16]
cmp dword ptr [eax+24], 0
jne .Lt_02BC
cmp dword ptr [eax+20], 0
jne .Lt_02BC
.Lt_0358:
push 0
push 0
push 99
call ERRREPORT
add esp, 12
.Lt_02BC:
.Lt_02BB:
jmp .Lt_02AF
.Lt_02B8:
cmp dword ptr [ebp+8], 43
jne .Lt_02BD
.Lt_02BE:
mov eax, dword ptr [ebp+16]
fld qword ptr [eax+20]
fcomp qword ptr [Lt_0326]
fnstsw ax
test ah, 0b01000000
jz .Lt_02C0
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax], 5
jne .Lt_02C2
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax+56]
mov eax, dword ptr [ecx]
mov dword ptr [ebp-116], eax
cmp dword ptr [ebp-116], 17
je .Lt_02C6
.Lt_02C7:
cmp dword ptr [ebp-116], 18
je .Lt_02C6
.Lt_02C8:
cmp dword ptr [ebp-116], 19
je .Lt_02C6
.Lt_02C9:
cmp dword ptr [ebp-116], 20
jne .Lt_02C5
.Lt_02C6:
mov eax, dword ptr [ebp+12]
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax+56]
mov dword ptr [ebp+12], ecx
push dword ptr [ebp-8]
call ASTDELNODE
add esp, 4
mov ecx, dword ptr [ebp-20]
and ecx, -512
mov eax, dword ptr [ebp+12]
mov esi, dword ptr [eax+4]
and esi, 511
or ecx, esi
mov dword ptr [ebp-20], ecx
.Lt_02C5:
.Lt_02C3:
.Lt_02C2:
.Lt_02C1:
mov ecx, dword ptr [ebp+12]
mov esi, dword ptr [ecx]
mov dword ptr [ebp-116], esi
cmp dword ptr [ebp-116], 17
je .Lt_02CD
.Lt_02CE:
cmp dword ptr [ebp-116], 18
je .Lt_02CD
.Lt_02CF:
cmp dword ptr [ebp-116], 19
je .Lt_02CD
.Lt_02D0:
cmp dword ptr [ebp-116], 20
jne .Lt_02CC
.Lt_02CD:
push dword ptr [ebp+12]
call ASTHASSIDEFX
add esp, 4
test eax, eax
jne .Lt_02D2
mov eax, dword ptr [ebp+12]
mov esi, dword ptr [eax+4]
and esi, 511
and esi, 480
je .Lt_02D3
mov dword ptr [ebp-120], 22
jmp .Lt_0327
.Lt_02D3:
mov esi, dword ptr [ebp+12]
mov eax, dword ptr [esi+4]
and eax, 511
and eax, 31
mov dword ptr [ebp-120], eax
.Lt_0327:
mov eax, dword ptr [ebp-120]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax], 1
je .Lt_02D6
push 0
push 0
push dword ptr [ebp+12]
push 0
push 15
call ASTNEWCONV
add esp, 20
mov dword ptr [ebp+12], eax
.Lt_02D6:
.Lt_02D5:
push dword ptr [ebp+16]
call ASTDELNODE
add esp, 4
push dword ptr [ebp+12]
call ASTCLONETREE
add esp, 4
mov dword ptr [ebp+16], eax
mov dword ptr [ebp+8], 30
.Lt_02D2:
.Lt_02D1:
.Lt_02CC:
.Lt_02CA:
.Lt_02C0:
.Lt_02BF:
.Lt_02BD:
.Lt_02AF:
.Lt_02AE:
.Lt_0295:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-116], eax
jmp .Lt_02D8
.Lt_02DA:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call RTLMATHPOW
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_0179
jmp .Lt_02D7
.Lt_02DB:
mov eax, dword ptr [IR+284]
and eax, 131072
test eax, eax
je .Lt_02DD
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call RTLMATHBOP
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_0179
.Lt_02DD:
.Lt_02DC:
jmp .Lt_02D7
.Lt_02DE:
mov eax, dword ptr [ebp-28]
and eax, 480
je .Lt_02DF
mov dword ptr [ebp-120], 22
jmp .Lt_0328
.Lt_02DF:
mov eax, dword ptr [ebp-28]
and eax, 31
mov dword ptr [ebp-120], eax
.Lt_0328:
mov eax, dword ptr [ebp-120]
mov dword ptr [ebp-124], eax
cmp dword ptr [ebp-124], 12
je .Lt_02E4
.Lt_02E5:
cmp dword ptr [ebp-124], 13
jne .Lt_02E3
.Lt_02E4:
push dword ptr [ebp-24]
push dword ptr [ebp+16]
push dword ptr [ebp-20]
push dword ptr [ebp+12]
push dword ptr [ebp-28]
call RTLMATHLONGINTDIV
add esp, 20
mov dword ptr [ebp-4], eax
jmp .Lt_0179
.Lt_02E3:
.Lt_02E1:
jmp .Lt_02D7
.Lt_02E6:
mov eax, dword ptr [ebp-28]
and eax, 480
je .Lt_02E7
mov dword ptr [ebp-120], 22
jmp .Lt_0329
.Lt_02E7:
mov eax, dword ptr [ebp-28]
and eax, 31
mov dword ptr [ebp-120], eax
.Lt_0329:
mov eax, dword ptr [ebp-120]
mov dword ptr [ebp-124], eax
cmp dword ptr [ebp-124], 12
je .Lt_02EC
.Lt_02ED:
cmp dword ptr [ebp-124], 13
jne .Lt_02EB
.Lt_02EC:
push dword ptr [ebp-24]
push dword ptr [ebp+16]
push dword ptr [ebp-20]
push dword ptr [ebp+12]
push dword ptr [ebp-28]
call RTLMATHLONGINTMOD
add esp, 20
mov dword ptr [ebp-4], eax
jmp .Lt_0179
.Lt_02EB:
.Lt_02E9:
jmp .Lt_02D7
.Lt_02EE:
mov dword ptr [ebp-120], 0
mov dword ptr [ebp-124], 0
mov dword ptr [ebp-128], 0
cmp dword ptr [ebp-32], 1
jne .Lt_02F0
push 14
push dword ptr [Lt_032A+4]
push dword ptr [Lt_032A]
call ASTNEWCONSTF
add esp, 12
mov dword ptr [ebp-124], eax
push 14
push dword ptr [Lt_032A+4]
push dword ptr [Lt_032A]
call ASTNEWCONSTF
add esp, 12
mov dword ptr [ebp-128], eax
jmp .Lt_02EF
.Lt_02F0:
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-124], eax
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-128], eax
.Lt_02EF:
cmp dword ptr [ebp+8], 36
jne .Lt_02F2
mov dword ptr [ebp-120], 48
jmp .Lt_02F1
.Lt_02F2:
mov dword ptr [ebp-120], 45
.Lt_02F1:
push 1
push 0
push dword ptr [ebp-124]
push dword ptr [ebp+12]
push dword ptr [ebp-120]
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp+12], eax
push 1
push 0
push dword ptr [ebp-128]
push dword ptr [ebp+16]
push 48
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp+16], eax
cmp dword ptr [ebp+8], 36
jne .Lt_02F4
push 0
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call ASTNEWIIF
add esp, 20
mov dword ptr [ebp-4], eax
jmp .Lt_0179
jmp .Lt_02F3
.Lt_02F4:
push 0
push 0
push 7
push 4294967295
push 4294967295
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call ASTNEWIIF
add esp, 20
mov dword ptr [ebp-4], eax
jmp .Lt_0179
.Lt_02F3:
jmp .Lt_02D7
.Lt_02D8:
mov eax, dword ptr [ebp-116]
add eax, 4294967264
cmp eax, 32
ja .Lt_02D7
mov eax, dword ptr [ebp-116]
jmp dword ptr [.LT_02F5+eax*4-128]
.LT_02F5:
.int .Lt_02DE
.int .Lt_02E6
.int .Lt_02D7
.int .Lt_02D7
.int .Lt_02EE
.int .Lt_02EE
.int .Lt_02D7
.int .Lt_02D7
.int .Lt_02D7
.int .Lt_02D7
.int .Lt_02D7
.int .Lt_02DA
.int .Lt_02D7
.int .Lt_02D7
.int .Lt_02D7
.int .Lt_02D7
.int .Lt_02D7
.int .Lt_02D7
.int .Lt_02D7
.int .Lt_02D7
.int .Lt_02D7
.int .Lt_02D7
.int .Lt_02D7
.int .Lt_02D7
.int .Lt_02D7
.int .Lt_02D7
.int .Lt_02D7
.int .Lt_02D7
.int .Lt_02D7
.int .Lt_02D7
.int .Lt_02D7
.int .Lt_02D7
.int .Lt_02DB
.Lt_02D7:
push dword ptr [ebp-64]
push dword ptr [ebp-28]
push 3
call ASTNEWNODE
add esp, 12
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov esi, dword ptr [ebp+12]
mov dword ptr [eax+56], esi
mov esi, dword ptr [ebp-8]
mov eax, dword ptr [ebp+16]
mov dword ptr [esi+60], eax
mov eax, dword ptr [ebp-8]
mov esi, dword ptr [ebp+20]
mov dword ptr [eax+28], esi
mov esi, dword ptr [ebp-8]
mov eax, dword ptr [ebp+8]
mov dword ptr [esi+20], eax
cmp dword ptr [ENV+104], 1
jne .Lt_02F7
mov eax, dword ptr [ebp+24]
or eax, 1
mov esi, eax
mov dword ptr [ebp+24], esi
.Lt_02F7:
.Lt_02F6:
mov esi, dword ptr [ebp-8]
mov eax, dword ptr [ebp+24]
mov dword ptr [esi+24], eax
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0179:
mov eax, dword ptr [ebp-4]
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTNEWBOP, .-ASTNEWBOP
.balign 16

.globl ASTNEWSELFBOP
ASTNEWSELFBOP:
.type ASTNEWSELFBOP, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
mov dword ptr [ebp-4], 0
.Lt_0359:
mov dword ptr [ebp-4], 0
lea eax, [ebp-16]
push eax
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call SYMBFINDSELFBOPOVLPROC
add esp, 16
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
je .Lt_035C
push 0
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp-12]
call ASTBUILDCALL
add esp, 16
mov dword ptr [ebp-4], eax
jmp .Lt_035A
.Lt_035C:
.Lt_035B:
cmp dword ptr [ebp-16], 0
je .Lt_035E
mov dword ptr [ebp-4], 0
jmp .Lt_035A
.Lt_035E:
.Lt_035D:
mov dword ptr [ebp-8], 0
push dword ptr [ebp+12]
call ASTHASSIDEFX
add esp, 4
test eax, eax
je .Lt_0360
push 0
lea eax, [ebp+12]
push eax
call ASTMAKEREF
add esp, 4
push eax
push dword ptr [ebp-8]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-8], eax
.Lt_0360:
.Lt_035F:
mov eax, dword ptr [ebp+24]
or eax, 1
mov ebx, eax
push ebx
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call ASTCLONETREE
add esp, 4
push eax
mov eax, dword ptr [ebp+8]
sal eax, 4
push dword ptr [AST_OPTB+eax+12]
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp+16], eax
cmp dword ptr [ebp+16], 0
jne .Lt_0362
push dword ptr [ebp-8]
call ASTDELTREE
add esp, 4
jmp .Lt_035A
.Lt_0362:
.Lt_0361:
push 0
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call ASTNEWASSIGN
add esp, 12
mov dword ptr [ebp+12], eax
cmp dword ptr [ebp+12], 0
jne .Lt_0364
push dword ptr [ebp-8]
call ASTDELTREE
add esp, 4
jmp .Lt_035A
.Lt_0364:
.Lt_0363:
push 0
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_035A:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTNEWSELFBOP, .-ASTNEWSELFBOP
.balign 16

.globl ASTLOADBOP
ASTLOADBOP:
.type ASTLOADBOP, @function
push ebp
mov ebp, esp
sub esp, 28
push ebx
mov dword ptr [ebp-4], 0
.Lt_0365:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+20]
mov dword ptr [ebp-16], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+56]
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+60]
mov dword ptr [ebp-12], ebx
cmp dword ptr [ebp-8], 0
sete bl
shr ebx, 1
sbb ebx, ebx
cmp dword ptr [ebp-12], 0
sete al
shr eax, 1
sbb eax, eax
or ebx, eax
je .Lt_0368
mov dword ptr [ebp-4], 0
jmp .Lt_0366
.Lt_0368:
.Lt_0367:
mov eax, dword ptr [ebp-8]
cmp dword ptr [eax], 5
jne .Lt_036A
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+4]
push dword ptr [ebp-8]
call ASTUPDATECONVFD2FS
add esp, 12
.Lt_036A:
.Lt_0369:
mov eax, dword ptr [ebp-12]
cmp dword ptr [eax], 5
jne .Lt_036C
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+4]
push dword ptr [ebp-12]
call ASTUPDATECONVFD2FS
add esp, 12
.Lt_036C:
.Lt_036B:
push dword ptr [ebp-8]
call ASTLOAD
add esp, 4
mov dword ptr [ebp-20], eax
push dword ptr [ebp-12]
call ASTLOAD
add esp, 4
mov dword ptr [ebp-24], eax
cmp dword ptr [AST+136], 0
je .Lt_036E
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+24]
and ebx, 1
test ebx, ebx
je .Lt_0370
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+8]
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 511
push eax
call dword ptr [IR+236]
add esp, 8
mov dword ptr [ebp-28], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-28]
mov ecx, dword ptr [eax+16]
mov dword ptr [ebx+20], ecx
jmp .Lt_036F
.Lt_0370:
mov dword ptr [ebp-28], 0
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-20]
mov eax, dword ptr [ecx+16]
mov dword ptr [ebx+20], eax
.Lt_036F:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+28], 0
je .Lt_0372
mov eax, dword ptr [ebp+8]
push dword ptr [eax+28]
push 0
push dword ptr [ebp-24]
push dword ptr [ebp-20]
push dword ptr [ebp-16]
call dword ptr [IR+108]
add esp, 20
jmp .Lt_0371
.Lt_0372:
push 0
push dword ptr [ebp-28]
push dword ptr [ebp-24]
push dword ptr [ebp-20]
push dword ptr [ebp-16]
call dword ptr [IR+108]
add esp, 20
.Lt_0371:
cmp dword ptr [ebp-28], 0
jne .Lt_0374
mov eax, dword ptr [ebp-20]
mov dword ptr [ebp-28], eax
.Lt_0374:
.Lt_0373:
.Lt_036E:
.Lt_036D:
push dword ptr [ebp-8]
call ASTDELNODE
add esp, 4
push dword ptr [ebp-12]
call ASTDELNODE
add esp, 4
mov eax, dword ptr [ebp-28]
mov dword ptr [ebp-4], eax
.Lt_0366:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTLOADBOP, .-ASTLOADBOP
.balign 16
fb_ctor__astznodezbop:
.type fb_ctor__astznodezbop, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__astznodezbop, .-fb_ctor__astznodezbop
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
HSTRLITERALCONCAT:
.type HSTRLITERALCONCAT, @function
push ebp
mov ebp, esp
sub esp, 40
push ebx
push esi
mov dword ptr [ebp-4], 0
.Lt_0057:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+12]
mov dword ptr [ebp-12], ebx
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+12]
mov dword ptr [ebp-16], eax
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [ebp-16]
mov esi, dword ptr [ebx+36]
mov ecx, dword ptr [ebx+40]
add esi, dword ptr [eax+36]
adc ecx, dword ptr [eax+40]
add esi, 4294967294
adc ecx, 4294967295
mov eax, esi
push eax
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
push 0
push -1
push 0
mov eax, dword ptr [ebp-16]
push dword ptr [eax+52]
push 0
mov eax, dword ptr [ebp-12]
push dword ptr [eax+52]
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
call SYMBALLOCSTRCONST
add esp, 8
mov dword ptr [ebp-8], eax
lea eax, [ebp-40]
push eax
call fb_StrDelete
add esp, 4
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp-8]
call ASTNEWVAR
add esp, 20
mov dword ptr [ebp-4], eax
push dword ptr [ebp+12]
call ASTDELNODE
add esp, 4
push dword ptr [ebp+8]
call ASTDELNODE
add esp, 4
.Lt_0058:
mov eax, dword ptr [ebp-4]
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size HSTRLITERALCONCAT, .-HSTRLITERALCONCAT
.balign 16
HWSTRLITERALCONCAT:
.type HWSTRLITERALCONCAT, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
push esi
mov dword ptr [ebp-4], 0
.Lt_005B:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+12]
mov dword ptr [ebp-12], ebx
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+12]
mov dword ptr [ebp-16], eax
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax+24]
and ebx, 511
cmp ebx, 6
je .Lt_005E
mov ebx, dword ptr [ebp-12]
mov ecx, dword ptr [SYMB_DTYPETB+172]
mov eax, ecx
sar eax, 31
push eax
push ecx
mov ecx, dword ptr [ebp-16]
push dword ptr [ecx+40]
push dword ptr [ecx+36]
call __divdi3
add esp, 16
add eax, dword ptr [ebx+36]
adc edx, dword ptr [ebx+40]
add eax, 4294967294
adc edx, 4294967295
mov ebx, eax
push ebx
mov ebx, dword ptr [ebp-16]
push dword ptr [ebx+52]
mov ebx, dword ptr [ebp-12]
push dword ptr [ebx+52]
call fb_StrToWstr
add esp, 4
mov dword ptr [ebp-20], eax
push dword ptr [ebp-20]
call fb_WstrConcat
add esp, 8
mov dword ptr [ebp-24], eax
push dword ptr [ebp-24]
call SYMBALLOCWSTRCONST
add esp, 8
mov dword ptr [ebp-8], eax
push dword ptr [ebp-24]
call fb_WstrDelete
add esp, 4
push dword ptr [ebp-20]
call fb_WstrDelete
add esp, 4
jmp .Lt_005D
.Lt_005E:
mov eax, dword ptr [ebp-16]
mov ebx, dword ptr [eax+24]
and ebx, 511
cmp ebx, 6
je .Lt_0061
mov eax, dword ptr [SYMB_DTYPETB+172]
mov ebx, eax
sar ebx, 31
push ebx
push eax
mov eax, dword ptr [ebp-12]
push dword ptr [eax+40]
push dword ptr [eax+36]
call __divdi3
add esp, 16
mov ebx, dword ptr [ebp-16]
add eax, dword ptr [ebx+36]
adc edx, dword ptr [ebx+40]
add eax, 4294967294
adc edx, 4294967295
mov ebx, eax
push ebx
mov ebx, dword ptr [ebp-16]
push dword ptr [ebx+52]
call fb_StrToWstr
add esp, 4
mov dword ptr [ebp-20], eax
push dword ptr [ebp-20]
mov eax, dword ptr [ebp-12]
push dword ptr [eax+52]
call fb_WstrConcat
add esp, 8
mov dword ptr [ebp-24], eax
push dword ptr [ebp-24]
call SYMBALLOCWSTRCONST
add esp, 8
mov dword ptr [ebp-8], eax
push dword ptr [ebp-24]
call fb_WstrDelete
add esp, 4
push dword ptr [ebp-20]
call fb_WstrDelete
add esp, 4
jmp .Lt_005D
.Lt_0061:
mov ebx, dword ptr [SYMB_DTYPETB+172]
mov eax, ebx
sar eax, 31
push eax
push ebx
mov ebx, dword ptr [ebp-12]
push dword ptr [ebx+40]
push dword ptr [ebx+36]
call __divdi3
add esp, 16
mov ecx, dword ptr [SYMB_DTYPETB+172]
mov ebx, ecx
sar ebx, 31
push ebx
push ecx
mov ecx, dword ptr [ebp-16]
push dword ptr [ecx+40]
push dword ptr [ecx+36]
mov ebx, eax
mov esi, edx
call __divdi3
add esp, 16
add ebx, eax
adc esi, edx
add ebx, 4294967294
adc esi, 4294967295
mov eax, ebx
push eax
mov eax, dword ptr [ebp-16]
push dword ptr [eax+52]
mov eax, dword ptr [ebp-12]
push dword ptr [eax+52]
call fb_WstrConcat
add esp, 8
mov dword ptr [ebp-20], eax
push dword ptr [ebp-20]
call SYMBALLOCWSTRCONST
add esp, 8
mov dword ptr [ebp-8], eax
push dword ptr [ebp-20]
call fb_WstrDelete
add esp, 4
.Lt_005D:
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp-8]
call ASTNEWVAR
add esp, 20
mov dword ptr [ebp-4], eax
push dword ptr [ebp+12]
call ASTDELNODE
add esp, 4
push dword ptr [ebp+8]
call ASTDELNODE
add esp, 4
.Lt_005C:
mov eax, dword ptr [ebp-4]
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size HWSTRLITERALCONCAT, .-HWSTRLITERALCONCAT
.balign 16
HSTRLITERALCOMPARE:
.type HSTRLITERALCOMPARE, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_0065:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+12]
push dword ptr [ebx+52]
call HUNESCAPE
add esp, 4
push eax
push offset Lt_0377
call DZSTRASSIGN
add esp, 8
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+12]
push dword ptr [ebx+52]
call HUNESCAPE
add esp, 4
push eax
push offset Lt_0378
call DZSTRASSIGN
add esp, 8
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-12], eax
jmp .Lt_0068
.Lt_006A:
push 0
push dword ptr [Lt_0378]
push 0
push dword ptr [Lt_0377]
call fb_StrCompare
add esp, 16
test eax, eax
sete al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-8], eax
jmp .Lt_0067
.Lt_006B:
push 0
push dword ptr [Lt_0378]
push 0
push dword ptr [Lt_0377]
call fb_StrCompare
add esp, 16
test eax, eax
setg al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-8], eax
jmp .Lt_0067
.Lt_006C:
push 0
push dword ptr [Lt_0378]
push 0
push dword ptr [Lt_0377]
call fb_StrCompare
add esp, 16
test eax, eax
setl al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-8], eax
jmp .Lt_0067
.Lt_006D:
push 0
push dword ptr [Lt_0378]
push 0
push dword ptr [Lt_0377]
call fb_StrCompare
add esp, 16
test eax, eax
setne al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-8], eax
jmp .Lt_0067
.Lt_006E:
push 0
push dword ptr [Lt_0378]
push 0
push dword ptr [Lt_0377]
call fb_StrCompare
add esp, 16
test eax, eax
setle al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-8], eax
jmp .Lt_0067
.Lt_006F:
push 0
push dword ptr [Lt_0378]
push 0
push dword ptr [Lt_0377]
call fb_StrCompare
add esp, 16
test eax, eax
setge al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-8], eax
jmp .Lt_0067
.Lt_0068:
mov eax, dword ptr [ebp-12]
add eax, 4294967251
cmp eax, 5
ja .Lt_0067
mov eax, dword ptr [ebp-12]
jmp dword ptr [.LT_0070+eax*4-180]
.LT_0070:
.int .Lt_006A
.int .Lt_006B
.int .Lt_006C
.int .Lt_006D
.int .Lt_006F
.int .Lt_006E
.Lt_0067:
push 0
push 7
mov ebx, dword ptr [ebp-8]
mov eax, ebx
sar eax, 31
push eax
push ebx
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-4], eax
push dword ptr [ebp+16]
call ASTDELNODE
add esp, 4
push dword ptr [ebp+12]
call ASTDELNODE
add esp, 4
.Lt_0066:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HSTRLITERALCOMPARE, .-HSTRLITERALCOMPARE

.section .bss
.balign 4
	.lcomm	Lt_0377,12
.balign 4
	.lcomm	Lt_0378,12

.section .text
.balign 16
HWSTRLITERALCOMPARE:
.type HWSTRLITERALCOMPARE, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
mov dword ptr [ebp-4], 0
.Lt_0071:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+12]
mov dword ptr [ebp-8], ebx
mov ebx, dword ptr [ebp+16]
mov eax, dword ptr [ebx+12]
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+24]
and ebx, 511
cmp ebx, 6
je .Lt_0074
mov ebx, dword ptr [ebp-8]
push dword ptr [ebx+52]
call HUNESCAPE
add esp, 4
push eax
push offset Lt_037F
call DZSTRASSIGN
add esp, 8
mov eax, dword ptr [ebp-12]
push dword ptr [eax+52]
call HUNESCAPEW
add esp, 4
push eax
push offset Lt_0380
call DWSTRASSIGN
add esp, 8
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-20], eax
jmp .Lt_0076
.Lt_0078:
push dword ptr [Lt_0380]
push dword ptr [Lt_037F]
call fb_StrToWstr
add esp, 4
mov dword ptr [ebp-24], eax
push dword ptr [ebp-24]
call fb_WstrCompare
add esp, 8
test eax, eax
sete al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-16], eax
push dword ptr [ebp-24]
call fb_WstrDelete
add esp, 4
jmp .Lt_0075
.Lt_007A:
push dword ptr [Lt_0380]
push dword ptr [Lt_037F]
call fb_StrToWstr
add esp, 4
mov dword ptr [ebp-24], eax
push dword ptr [ebp-24]
call fb_WstrCompare
add esp, 8
test eax, eax
setg al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-16], eax
push dword ptr [ebp-24]
call fb_WstrDelete
add esp, 4
jmp .Lt_0075
.Lt_007C:
push dword ptr [Lt_0380]
push dword ptr [Lt_037F]
call fb_StrToWstr
add esp, 4
mov dword ptr [ebp-24], eax
push dword ptr [ebp-24]
call fb_WstrCompare
add esp, 8
test eax, eax
setl al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-16], eax
push dword ptr [ebp-24]
call fb_WstrDelete
add esp, 4
jmp .Lt_0075
.Lt_007E:
push dword ptr [Lt_0380]
push dword ptr [Lt_037F]
call fb_StrToWstr
add esp, 4
mov dword ptr [ebp-24], eax
push dword ptr [ebp-24]
call fb_WstrCompare
add esp, 8
test eax, eax
setne al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-16], eax
push dword ptr [ebp-24]
call fb_WstrDelete
add esp, 4
jmp .Lt_0075
.Lt_0080:
push dword ptr [Lt_0380]
push dword ptr [Lt_037F]
call fb_StrToWstr
add esp, 4
mov dword ptr [ebp-24], eax
push dword ptr [ebp-24]
call fb_WstrCompare
add esp, 8
test eax, eax
setle al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-16], eax
push dword ptr [ebp-24]
call fb_WstrDelete
add esp, 4
jmp .Lt_0075
.Lt_0082:
push dword ptr [Lt_0380]
push dword ptr [Lt_037F]
call fb_StrToWstr
add esp, 4
mov dword ptr [ebp-24], eax
push dword ptr [ebp-24]
call fb_WstrCompare
add esp, 8
test eax, eax
setge al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-16], eax
push dword ptr [ebp-24]
call fb_WstrDelete
add esp, 4
jmp .Lt_0075
.Lt_0076:
mov eax, dword ptr [ebp-20]
add eax, 4294967251
cmp eax, 5
ja .Lt_0075
mov eax, dword ptr [ebp-20]
jmp dword ptr [.LT_0084+eax*4-180]
.LT_0084:
.int .Lt_0078
.int .Lt_007A
.int .Lt_007C
.int .Lt_007E
.int .Lt_0082
.int .Lt_0080
.Lt_0075:
jmp .Lt_0073
.Lt_0074:
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax+24]
and ebx, 511
cmp ebx, 6
je .Lt_0085
mov ebx, dword ptr [ebp-8]
push dword ptr [ebx+52]
call HUNESCAPEW
add esp, 4
push eax
push offset Lt_0387
call DWSTRASSIGN
add esp, 8
mov eax, dword ptr [ebp-12]
push dword ptr [eax+52]
call HUNESCAPE
add esp, 4
push eax
push offset Lt_037F
call DZSTRASSIGN
add esp, 8
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-20], eax
jmp .Lt_0087
.Lt_0089:
push dword ptr [Lt_037F]
call fb_StrToWstr
add esp, 4
mov dword ptr [ebp-24], eax
push dword ptr [ebp-24]
push dword ptr [Lt_0387]
call fb_WstrCompare
add esp, 8
test eax, eax
sete al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-16], eax
push dword ptr [ebp-24]
call fb_WstrDelete
add esp, 4
jmp .Lt_0086
.Lt_008B:
push dword ptr [Lt_037F]
call fb_StrToWstr
add esp, 4
mov dword ptr [ebp-24], eax
push dword ptr [ebp-24]
push dword ptr [Lt_0387]
call fb_WstrCompare
add esp, 8
test eax, eax
setg al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-16], eax
push dword ptr [ebp-24]
call fb_WstrDelete
add esp, 4
jmp .Lt_0086
.Lt_008D:
push dword ptr [Lt_037F]
call fb_StrToWstr
add esp, 4
mov dword ptr [ebp-24], eax
push dword ptr [ebp-24]
push dword ptr [Lt_0387]
call fb_WstrCompare
add esp, 8
test eax, eax
setl al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-16], eax
push dword ptr [ebp-24]
call fb_WstrDelete
add esp, 4
jmp .Lt_0086
.Lt_008F:
push dword ptr [Lt_037F]
call fb_StrToWstr
add esp, 4
mov dword ptr [ebp-24], eax
push dword ptr [ebp-24]
push dword ptr [Lt_0387]
call fb_WstrCompare
add esp, 8
test eax, eax
setne al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-16], eax
push dword ptr [ebp-24]
call fb_WstrDelete
add esp, 4
jmp .Lt_0086
.Lt_0091:
push dword ptr [Lt_037F]
call fb_StrToWstr
add esp, 4
mov dword ptr [ebp-24], eax
push dword ptr [ebp-24]
push dword ptr [Lt_0387]
call fb_WstrCompare
add esp, 8
test eax, eax
setle al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-16], eax
push dword ptr [ebp-24]
call fb_WstrDelete
add esp, 4
jmp .Lt_0086
.Lt_0093:
push dword ptr [Lt_037F]
call fb_StrToWstr
add esp, 4
mov dword ptr [ebp-24], eax
push dword ptr [ebp-24]
push dword ptr [Lt_0387]
call fb_WstrCompare
add esp, 8
test eax, eax
setge al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-16], eax
push dword ptr [ebp-24]
call fb_WstrDelete
add esp, 4
jmp .Lt_0086
.Lt_0087:
mov eax, dword ptr [ebp-20]
add eax, 4294967251
cmp eax, 5
ja .Lt_0086
mov eax, dword ptr [ebp-20]
jmp dword ptr [.LT_0095+eax*4-180]
.LT_0095:
.int .Lt_0089
.int .Lt_008B
.int .Lt_008D
.int .Lt_008F
.int .Lt_0093
.int .Lt_0091
.Lt_0086:
jmp .Lt_0073
.Lt_0085:
mov eax, dword ptr [ebp-8]
push dword ptr [eax+52]
call HUNESCAPEW
add esp, 4
push eax
push offset Lt_0387
call DWSTRASSIGN
add esp, 8
mov eax, dword ptr [ebp-12]
push dword ptr [eax+52]
call HUNESCAPEW
add esp, 4
push eax
push offset Lt_0380
call DWSTRASSIGN
add esp, 8
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-20], eax
jmp .Lt_0097
.Lt_0099:
push dword ptr [Lt_0380]
push dword ptr [Lt_0387]
call fb_WstrCompare
add esp, 8
test eax, eax
sete al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-16], eax
jmp .Lt_0096
.Lt_009A:
push dword ptr [Lt_0380]
push dword ptr [Lt_0387]
call fb_WstrCompare
add esp, 8
test eax, eax
setg al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-16], eax
jmp .Lt_0096
.Lt_009B:
push dword ptr [Lt_0380]
push dword ptr [Lt_0387]
call fb_WstrCompare
add esp, 8
test eax, eax
setl al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-16], eax
jmp .Lt_0096
.Lt_009C:
push dword ptr [Lt_0380]
push dword ptr [Lt_0387]
call fb_WstrCompare
add esp, 8
test eax, eax
setne al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-16], eax
jmp .Lt_0096
.Lt_009D:
push dword ptr [Lt_0380]
push dword ptr [Lt_0387]
call fb_WstrCompare
add esp, 8
test eax, eax
setle al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-16], eax
jmp .Lt_0096
.Lt_009E:
push dword ptr [Lt_0380]
push dword ptr [Lt_0387]
call fb_WstrCompare
add esp, 8
test eax, eax
setge al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-16], eax
jmp .Lt_0096
.Lt_0097:
mov eax, dword ptr [ebp-20]
add eax, 4294967251
cmp eax, 5
ja .Lt_0096
mov eax, dword ptr [ebp-20]
jmp dword ptr [.LT_009F+eax*4-180]
.LT_009F:
.int .Lt_0099
.int .Lt_009A
.int .Lt_009B
.int .Lt_009C
.int .Lt_009E
.int .Lt_009D
.Lt_0096:
.Lt_0073:
push 0
push 7
mov ebx, dword ptr [ebp-16]
mov eax, ebx
sar eax, 31
push eax
push ebx
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-4], eax
push dword ptr [ebp+16]
call ASTDELNODE
add esp, 4
push dword ptr [ebp+12]
call ASTDELNODE
add esp, 4
.Lt_0072:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HWSTRLITERALCOMPARE, .-HWSTRLITERALCOMPARE

.section .bss
.balign 4
	.lcomm	Lt_037F,12
.balign 4
	.lcomm	Lt_0387,12
.balign 4
	.lcomm	Lt_0380,12

.section .text
.balign 16
HTOSTR:
.type HTOSTR, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
.Lt_00A0:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov eax, dword ptr [ebx+4]
and eax, 511
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax]
mov eax, dword ptr [ebx+4]
and eax, 511
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-4]
mov dword ptr [ebp-12], eax
jmp .Lt_00A3
.Lt_00A5:
jmp .Lt_00A2
.Lt_00A6:
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax]
call RTLTOSTR
add esp, 8
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx], eax
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 0
jne .Lt_00A8
push 0
push 0
push 20
call ERRREPORT
add esp, 12
push 0
call ASTNEWCONSTSTR
add esp, 4
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx], eax
.Lt_00A8:
.Lt_00A7:
jmp .Lt_00A2
.Lt_00A3:
mov eax, dword ptr [ebp-12]
add eax, 4294967293
cmp eax, 14
ja .Lt_00A6
mov eax, dword ptr [ebp-12]
jmp dword ptr [.LT_00A9+eax*4-12]
.LT_00A9:
.int .Lt_00A5
.int .Lt_00A6
.int .Lt_00A6
.int .Lt_00A5
.int .Lt_00A6
.int .Lt_00A6
.int .Lt_00A6
.int .Lt_00A6
.int .Lt_00A6
.int .Lt_00A6
.int .Lt_00A6
.int .Lt_00A6
.int .Lt_00A6
.int .Lt_00A5
.int .Lt_00A5
.Lt_00A2:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-12], eax
jmp .Lt_00AB
.Lt_00AD:
jmp .Lt_00AA
.Lt_00AE:
cmp dword ptr [ebp-4], 6
je .Lt_00B0
push 0
mov eax, dword ptr [ebp+12]
push dword ptr [eax]
call RTLTOSTR
add esp, 8
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx], eax
jmp .Lt_00AF
.Lt_00B0:
mov eax, dword ptr [ebp+12]
push dword ptr [eax]
call RTLTOWSTR
add esp, 4
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx], eax
.Lt_00AF:
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax], 0
jne .Lt_00B2
push 0
push 0
push 20
call ERRREPORT
add esp, 12
push 0
call ASTNEWCONSTSTR
add esp, 4
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx], eax
.Lt_00B2:
.Lt_00B1:
jmp .Lt_00AA
.Lt_00AB:
mov eax, dword ptr [ebp-12]
add eax, 4294967293
cmp eax, 14
ja .Lt_00AE
mov eax, dword ptr [ebp-12]
jmp dword ptr [.LT_00B3+eax*4-12]
.LT_00B3:
.int .Lt_00AD
.int .Lt_00AE
.int .Lt_00AE
.int .Lt_00AD
.int .Lt_00AE
.int .Lt_00AE
.int .Lt_00AE
.int .Lt_00AE
.int .Lt_00AE
.int .Lt_00AE
.int .Lt_00AE
.int .Lt_00AE
.int .Lt_00AE
.int .Lt_00AD
.int .Lt_00AD
.Lt_00AA:
.Lt_00A1:
pop ebx
mov esp, ebp
pop ebp
ret
.size HTOSTR, .-HTOSTR
.balign 16
HCONSTBOP:
.type HCONSTBOP, @function
push ebp
mov ebp, esp
sub esp, 32
push ebx
push esi
mov dword ptr [ebp-4], 0
.Lt_00B4:
mov eax, dword ptr [ebp+20]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_00B6
mov dword ptr [ebp-8], 22
jmp .Lt_0394
.Lt_00B6:
mov ebx, dword ptr [ebp+20]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-8], eax
.Lt_0394:
mov eax, dword ptr [ebp-8]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax], 1
jne .Lt_00B9
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-16], eax
jmp .Lt_00BB
.Lt_00BD:
mov eax, dword ptr [ebp+20]
mov ebx, dword ptr [ebp+24]
fld qword ptr [ebx+20]
fadd qword ptr [eax+20]
mov eax, dword ptr [ebp+20]
fstp qword ptr [eax+20]
jmp .Lt_00BA
.Lt_00BE:
mov eax, dword ptr [ebp+20]
mov ebx, dword ptr [ebp+24]
fld qword ptr [eax+20]
fsub qword ptr [ebx+20]
mov ebx, dword ptr [ebp+20]
fstp qword ptr [ebx+20]
jmp .Lt_00BA
.Lt_00BF:
mov ebx, dword ptr [ebp+20]
mov eax, dword ptr [ebp+24]
fld qword ptr [eax+20]
fmul qword ptr [ebx+20]
mov ebx, dword ptr [ebp+20]
fstp qword ptr [ebx+20]
jmp .Lt_00BA
.Lt_00C0:
mov ebx, dword ptr [ebp+20]
mov eax, dword ptr [ebp+24]
fld qword ptr [ebx+20]
fdiv qword ptr [eax+20]
mov eax, dword ptr [ebp+20]
fstp qword ptr [eax+20]
jmp .Lt_00BA
.Lt_00C1:
mov eax, dword ptr [ebp+24]
push dword ptr [eax+24]
push dword ptr [eax+20]
mov eax, dword ptr [ebp+20]
push dword ptr [eax+24]
push dword ptr [eax+20]
call pow
add esp, 16
mov eax, dword ptr [ebp+20]
fstp qword ptr [eax+20]
jmp .Lt_00BA
.Lt_00C2:
mov eax, dword ptr [ebp+20]
mov ebx, dword ptr [ebp+24]
fld qword ptr [eax+20]
fcomp qword ptr [ebx+20]
fnstsw ax
test ah, 0b01000000
setz al
shr eax, 1
sbb eax, eax
mov ecx, eax
mov ebx, ecx
sar ebx, 31
mov eax, dword ptr [ebp+20]
mov dword ptr [eax+20], ecx
mov dword ptr [eax+24], ebx
jmp .Lt_00BA
.Lt_00C3:
mov ecx, dword ptr [ebp+20]
mov ebx, dword ptr [ebp+24]
fld qword ptr [ecx+20]
fcomp qword ptr [ebx+20]
push eax
fnstsw ax
test ah, 0b01000000
pop eax
setnz cl
shr ecx, 1
sbb ecx, ecx
mov eax, ecx
mov ebx, eax
sar ebx, 31
mov ecx, dword ptr [ebp+20]
mov dword ptr [ecx+20], eax
mov dword ptr [ecx+24], ebx
jmp .Lt_00BA
.Lt_00C4:
mov eax, dword ptr [ebp+20]
mov ebx, dword ptr [ebp+24]
fld qword ptr [eax+20]
fcomp qword ptr [ebx+20]
fnstsw ax
test ah, 0b01000001
setz al
shr eax, 1
sbb eax, eax
mov ecx, eax
mov ebx, ecx
sar ebx, 31
mov eax, dword ptr [ebp+20]
mov dword ptr [eax+20], ecx
mov dword ptr [eax+24], ebx
jmp .Lt_00BA
.Lt_00C5:
mov ecx, dword ptr [ebp+20]
mov ebx, dword ptr [ebp+24]
fld qword ptr [ecx+20]
fcomp qword ptr [ebx+20]
push eax
fnstsw ax
test ah, 0b00000001
pop eax
setnz cl
shr ecx, 1
sbb ecx, ecx
mov eax, ecx
mov ebx, eax
sar ebx, 31
mov ecx, dword ptr [ebp+20]
mov dword ptr [ecx+20], eax
mov dword ptr [ecx+24], ebx
jmp .Lt_00BA
.Lt_00C6:
mov eax, dword ptr [ebp+20]
mov ebx, dword ptr [ebp+24]
fld qword ptr [eax+20]
fcomp qword ptr [ebx+20]
fnstsw ax
test ah, 0b01000001
setnz al
shr eax, 1
sbb eax, eax
mov ecx, eax
mov ebx, ecx
sar ebx, 31
mov eax, dword ptr [ebp+20]
mov dword ptr [eax+20], ecx
mov dword ptr [eax+24], ebx
jmp .Lt_00BA
.Lt_00C7:
mov ecx, dword ptr [ebp+20]
mov ebx, dword ptr [ebp+24]
fld qword ptr [ecx+20]
fcomp qword ptr [ebx+20]
push eax
fnstsw ax
sahf
pop eax
setae cl
shr ecx, 1
sbb ecx, ecx
mov eax, ecx
mov ebx, eax
sar ebx, 31
mov ecx, dword ptr [ebp+20]
mov dword ptr [ecx+20], eax
mov dword ptr [ecx+24], ebx
jmp .Lt_00BA
.Lt_00C8:
mov eax, dword ptr [ebp+20]
mov ebx, dword ptr [ebp+24]
fld qword ptr [eax+20]
fld qword ptr [ebx+20]
fpatan
mov ebx, dword ptr [ebp+20]
fstp qword ptr [ebx+20]
jmp .Lt_00BA
.Lt_00C9:
mov ebx, dword ptr [ebp+20]
fld qword ptr [ebx+20]
fcomp qword ptr [Lt_032A]
fnstsw ax
test ah, 0b01000000
jnz .Lt_00CB
mov ebx, dword ptr [ebp+24]
fld qword ptr [ebx+20]
fcomp qword ptr [Lt_032A]
push eax
fnstsw ax
test ah, 0b01000000
pop eax
setz bl
shr ebx, 1
sbb ebx, ebx
mov ecx, ebx
mov eax, ecx
sar eax, 31
mov ebx, dword ptr [ebp+20]
mov dword ptr [ebx+20], ecx
mov dword ptr [ebx+24], eax
jmp .Lt_00CA
.Lt_00CB:
mov ecx, dword ptr [ebp+20]
mov dword ptr [ecx+20], 0
mov dword ptr [ecx+24], 0
.Lt_00CA:
jmp .Lt_00BA
.Lt_00CC:
mov ecx, dword ptr [ebp+20]
fld qword ptr [ecx+20]
fcomp qword ptr [Lt_032A]
fnstsw ax
test ah, 0b01000000
jnz .Lt_00CE
mov ecx, dword ptr [ebp+20]
mov dword ptr [ecx+20], 4294967295
mov dword ptr [ecx+24], 4294967295
jmp .Lt_00CD
.Lt_00CE:
mov ecx, dword ptr [ebp+24]
fld qword ptr [ecx+20]
fcomp qword ptr [Lt_032A]
push eax
fnstsw ax
test ah, 0b01000000
pop eax
setz cl
shr ecx, 1
sbb ecx, ecx
mov ebx, ecx
mov eax, ebx
sar eax, 31
mov ecx, dword ptr [ebp+20]
mov dword ptr [ecx+20], ebx
mov dword ptr [ecx+24], eax
.Lt_00CD:
jmp .Lt_00BA
.Lt_00CF:
jmp .Lt_00BA
.Lt_00BB:
mov ebx, dword ptr [ebp-16]
add ebx, 4294967268
cmp ebx, 36
ja .Lt_00CF
mov ebx, dword ptr [ebp-16]
jmp dword ptr [.LT_00D0+ebx*4-112]
.LT_00D0:
.int .Lt_00BD
.int .Lt_00BE
.int .Lt_00BF
.int .Lt_00C0
.int .Lt_00CF
.int .Lt_00CF
.int .Lt_00CF
.int .Lt_00CF
.int .Lt_00C9
.int .Lt_00CC
.int .Lt_00CF
.int .Lt_00CF
.int .Lt_00CF
.int .Lt_00CF
.int .Lt_00CF
.int .Lt_00C1
.int .Lt_00CF
.int .Lt_00C3
.int .Lt_00C4
.int .Lt_00C5
.int .Lt_00C2
.int .Lt_00C7
.int .Lt_00C6
.int .Lt_00CF
.int .Lt_00CF
.int .Lt_00CF
.int .Lt_00CF
.int .Lt_00CF
.int .Lt_00CF
.int .Lt_00CF
.int .Lt_00CF
.int .Lt_00CF
.int .Lt_00CF
.int .Lt_00CF
.int .Lt_00CF
.int .Lt_00CF
.int .Lt_00C8
.Lt_00BA:
jmp .Lt_00B8
.Lt_00B9:
mov ebx, dword ptr [ebp+20]
mov eax, dword ptr [ebx+4]
and eax, 480
je .Lt_00D2
mov dword ptr [ebp-12], 22
jmp .Lt_0395
.Lt_00D2:
mov eax, dword ptr [ebp+20]
mov ebx, dword ptr [eax+4]
and ebx, 31
mov dword ptr [ebp-12], ebx
.Lt_0395:
mov ebx, dword ptr [ebp-12]
imul ebx, 28
cmp dword ptr [SYMB_DTYPETB+ebx+8], 0
je .Lt_00D1
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebp-16], ebx
jmp .Lt_00D5
.Lt_00D7:
mov ebx, dword ptr [ebp+20]
mov eax, dword ptr [ebp+24]
mov esi, dword ptr [eax+20]
mov ecx, dword ptr [eax+24]
add dword ptr [ebx+20], esi
adc dword ptr [ebx+24], ecx
jmp .Lt_00D4
.Lt_00D8:
mov esi, dword ptr [ebp+20]
mov ecx, dword ptr [ebp+24]
mov eax, dword ptr [ecx+20]
mov ebx, dword ptr [ecx+24]
sub dword ptr [esi+20], eax
sbb dword ptr [esi+24], ebx
jmp .Lt_00D4
.Lt_00D9:
mov eax, dword ptr [ebp+20]
mov ebx, dword ptr [ebp+24]
mov ecx, dword ptr [ebx+20]
mov esi, dword ptr [ebx+24]
push esi
push ecx
push dword ptr [eax+24]
push dword ptr [eax+20]
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
pop dword ptr [eax+20]
pop dword ptr [eax+24]
add esp, 8
jmp .Lt_00D4
.Lt_00DA:
mov ecx, dword ptr [ebp+20]
mov esi, dword ptr [ebp+24]
mov eax, dword ptr [esi+20]
push dword ptr [ecx+24]
push dword ptr [ecx+20]
push eax
xchg ecx, [esp]
xchg eax, [esp+4]
mov edx, [esp+8]
shld edx, eax, cl
shl  eax, cl
test cl, 32
jz .Lt_03A6
mov edx, eax
xor eax, eax
.Lt_03A6:
pop ecx
mov [esp+4], edx
xchg eax, [esp+0]
pop dword ptr [ecx+20]
pop dword ptr [ecx+24]
jmp .Lt_00D4
.Lt_00DB:
mov eax, dword ptr [ebp+20]
mov ecx, dword ptr [ebp+24]
mov esi, dword ptr [ecx+20]
push dword ptr [eax+24]
push dword ptr [eax+20]
mov ecx, esi
xchg eax, [esp+0]
mov edx, [esp+4]
shrd eax, edx, cl
sar  edx, cl
test cl, 32
jz .Lt_03A7
mov eax, edx
sar edx, 31
.Lt_03A7:
mov [esp+4], edx
xchg eax, [esp+0]
pop dword ptr [eax+20]
pop dword ptr [eax+24]
jmp .Lt_00D4
.Lt_00DC:
mov esi, dword ptr [ebp+20]
mov eax, dword ptr [ebp+24]
mov ebx, dword ptr [eax+20]
mov ecx, dword ptr [eax+24]
and dword ptr [esi+20], ebx
and dword ptr [esi+24], ecx
jmp .Lt_00D4
.Lt_00DD:
mov ebx, dword ptr [ebp+20]
mov ecx, dword ptr [ebp+24]
mov eax, dword ptr [ecx+20]
mov esi, dword ptr [ecx+24]
or dword ptr [ebx+20], eax
or dword ptr [ebx+24], esi
jmp .Lt_00D4
.Lt_00DE:
mov eax, dword ptr [ebp+20]
mov esi, dword ptr [ebp+24]
mov ecx, dword ptr [esi+20]
mov ebx, dword ptr [esi+24]
xor dword ptr [eax+20], ecx
xor dword ptr [eax+24], ebx
jmp .Lt_00D4
.Lt_00DF:
mov ecx, dword ptr [ebp+20]
mov ebx, dword ptr [ebp+24]
mov esi, dword ptr [ebx+20]
mov eax, dword ptr [ebx+24]
xor dword ptr [ecx+20], esi
xor dword ptr [ecx+24], eax
not dword ptr [ecx+20]
not dword ptr [ecx+24]
jmp .Lt_00D4
.Lt_00E0:
mov esi, dword ptr [ebp+20]
mov eax, dword ptr [ebp+24]
mov ebx, dword ptr [eax+20]
mov ecx, dword ptr [eax+24]
not dword ptr [esi+20]
not dword ptr [esi+24]
or dword ptr [esi+20], ebx
or dword ptr [esi+24], ecx
jmp .Lt_00D4
.Lt_00E1:
mov ebx, dword ptr [ebp+20]
mov ecx, dword ptr [ebp+24]
mov eax, dword ptr [ebx+20]
mov esi, dword ptr [ebx+24]
cmp esi, dword ptr [ecx+24]
mov ebx, -1
jne .Lt_03A8
cmp eax, dword ptr [ecx+20]
jne .Lt_03A8
.Lt_03A9:
xor ebx, ebx
.Lt_03A8:
mov eax, ebx
mov ecx, eax
sar ecx, 31
mov ebx, dword ptr [ebp+20]
mov dword ptr [ebx+20], eax
mov dword ptr [ebx+24], ecx
jmp .Lt_00D4
.Lt_00E2:
mov eax, dword ptr [ebp+20]
mov ecx, dword ptr [ebp+24]
mov esi, dword ptr [eax+20]
mov ebx, dword ptr [eax+24]
cmp ebx, dword ptr [ecx+24]
mov eax, -1
jne .Lt_03AB
cmp esi, dword ptr [ecx+20]
je .Lt_03AA
.Lt_03AB:
xor eax, eax
.Lt_03AA:
mov esi, eax
mov ecx, esi
sar ecx, 31
mov eax, dword ptr [ebp+20]
mov dword ptr [eax+20], esi
mov dword ptr [eax+24], ecx
jmp .Lt_00D4
.Lt_00E3:
mov esi, dword ptr [ebp+20]
mov ecx, dword ptr [ebp+24]
mov ebx, dword ptr [esi+20]
mov eax, dword ptr [esi+24]
cmp eax, dword ptr [ecx+24]
mov esi, -1
jg .Lt_03AC
jl .Lt_03AD
cmp ebx, dword ptr [ecx+20]
ja .Lt_03AC
.Lt_03AD:
xor esi, esi
.Lt_03AC:
mov ebx, esi
mov ecx, ebx
sar ecx, 31
mov esi, dword ptr [ebp+20]
mov dword ptr [esi+20], ebx
mov dword ptr [esi+24], ecx
jmp .Lt_00D4
.Lt_00E4:
mov ebx, dword ptr [ebp+20]
mov ecx, dword ptr [ebp+24]
mov eax, dword ptr [ebx+20]
mov esi, dword ptr [ebx+24]
cmp esi, dword ptr [ecx+24]
mov ebx, -1
jl .Lt_03AE
jg .Lt_03AF
cmp eax, dword ptr [ecx+20]
jb .Lt_03AE
.Lt_03AF:
xor ebx, ebx
.Lt_03AE:
mov eax, ebx
mov ecx, eax
sar ecx, 31
mov ebx, dword ptr [ebp+20]
mov dword ptr [ebx+20], eax
mov dword ptr [ebx+24], ecx
jmp .Lt_00D4
.Lt_00E5:
mov eax, dword ptr [ebp+20]
mov ecx, dword ptr [ebp+24]
mov esi, dword ptr [eax+20]
mov ebx, dword ptr [eax+24]
cmp ebx, dword ptr [ecx+24]
mov eax, -1
jl .Lt_03B0
jg .Lt_03B1
cmp esi, dword ptr [ecx+20]
jbe .Lt_03B0
.Lt_03B1:
xor eax, eax
.Lt_03B0:
mov esi, eax
mov ecx, esi
sar ecx, 31
mov eax, dword ptr [ebp+20]
mov dword ptr [eax+20], esi
mov dword ptr [eax+24], ecx
jmp .Lt_00D4
.Lt_00E6:
mov esi, dword ptr [ebp+20]
mov ecx, dword ptr [ebp+24]
mov ebx, dword ptr [esi+20]
mov eax, dword ptr [esi+24]
cmp eax, dword ptr [ecx+24]
mov esi, -1
jg .Lt_03B2
jl .Lt_03B3
cmp ebx, dword ptr [ecx+20]
jae .Lt_03B2
.Lt_03B3:
xor esi, esi
.Lt_03B2:
mov ebx, esi
mov ecx, ebx
sar ecx, 31
mov esi, dword ptr [ebp+20]
mov dword ptr [esi+20], ebx
mov dword ptr [esi+24], ecx
jmp .Lt_00D4
.Lt_00E7:
mov ebx, dword ptr [ebp+20]
cmp dword ptr [ebx+24], 0
jne .Lt_03B4
cmp dword ptr [ebx+20], 0
je .Lt_00E8
.Lt_03B4:
mov ebx, dword ptr [ebp+24]
cmp dword ptr [ebx+24], 0
mov ecx, -1
jne .Lt_03B5
cmp dword ptr [ebx+20], 0
jne .Lt_03B5
.Lt_03B6:
xor ecx, ecx
.Lt_03B5:
mov dword ptr [ebp-20], ecx
jmp .Lt_0396
.Lt_00E8:
mov dword ptr [ebp-20], 0
.Lt_0396:
mov ebx, dword ptr [ebp-20]
mov ecx, ebx
sar ecx, 31
mov esi, dword ptr [ebp+20]
mov dword ptr [esi+20], ebx
mov dword ptr [esi+24], ecx
jmp .Lt_00D4
.Lt_00EA:
mov ebx, dword ptr [ebp+20]
cmp dword ptr [ebx+24], 0
jne .Lt_03B7
cmp dword ptr [ebx+20], 0
je .Lt_00EB
.Lt_03B7:
mov dword ptr [ebp-20], -1
jmp .Lt_0397
.Lt_00EB:
mov ebx, dword ptr [ebp+24]
cmp dword ptr [ebx+24], 0
mov ecx, -1
jne .Lt_03B8
cmp dword ptr [ebx+20], 0
jne .Lt_03B8
.Lt_03B9:
xor ecx, ecx
.Lt_03B8:
mov dword ptr [ebp-20], ecx
.Lt_0397:
mov ebx, dword ptr [ebp-20]
mov ecx, ebx
sar ecx, 31
mov esi, dword ptr [ebp+20]
mov dword ptr [esi+20], ebx
mov dword ptr [esi+24], ecx
jmp .Lt_00D4
.Lt_00ED:
mov ebx, dword ptr [ebp+24]
cmp dword ptr [ebx+24], 0
jne .Lt_00EF
cmp dword ptr [ebx+20], 0
jne .Lt_00EF
.Lt_03BA:
mov ebx, dword ptr [ebp+20]
mov dword ptr [ebx+20], 0
mov dword ptr [ebx+24], 0
push 0
push 0
push 99
call ERRREPORT
add esp, 12
jmp .Lt_00EE
.Lt_00EF:
mov ebx, dword ptr [ebp+24]
cmp dword ptr [ebx+24], 4294967295
mov ecx, -1
jne .Lt_03BC
cmp dword ptr [ebx+20], 4294967295
je .Lt_03BB
.Lt_03BC:
xor ecx, ecx
.Lt_03BB:
mov dword ptr [ebp-28], ecx
mov ecx, dword ptr [ebp+20]
mov ebx, dword ptr [ecx+4]
and ebx, 480
je .Lt_00F1
mov dword ptr [ebp-20], 22
jmp .Lt_0398
.Lt_00F1:
mov ebx, dword ptr [ebp+20]
mov ecx, dword ptr [ebx+4]
and ecx, 31
mov dword ptr [ebp-20], ecx
.Lt_0398:
mov ecx, dword ptr [ebp-20]
imul ecx, 28
mov ebx, dword ptr [SYMB_DTYPETB+ecx+4]
cmp ebx, 8
sete bl
shr ebx, 1
sbb ebx, ebx
mov ecx, dword ptr [ebp+20]
cmp dword ptr [ecx+24], 2147483648
mov esi, -1
jne .Lt_03BF
cmp dword ptr [ecx+20], 0
je .Lt_03BE
.Lt_03BF:
xor esi, esi
.Lt_03BE:
and ebx, esi
mov dword ptr [ebp-32], ebx
mov ebx, dword ptr [ebp+20]
mov esi, dword ptr [ebx+4]
and esi, 480
je .Lt_00F3
mov dword ptr [ebp-24], 22
jmp .Lt_0399
.Lt_00F3:
mov esi, dword ptr [ebp+20]
mov ebx, dword ptr [esi+4]
and ebx, 31
mov dword ptr [ebp-24], ebx
.Lt_0399:
mov ebx, dword ptr [ebp-24]
imul ebx, 28
mov esi, dword ptr [SYMB_DTYPETB+ebx+4]
cmp esi, 4
sete dl
mov esi, edx
shr esi, 1
sbb esi, esi
mov ebx, dword ptr [ebp+20]
cmp dword ptr [ebx+24], 4294967295
mov ecx, -1
jne .Lt_03C2
cmp dword ptr [ebx+20], 2147483648
je .Lt_03C1
.Lt_03C2:
xor ecx, ecx
.Lt_03C1:
and esi, ecx
or esi, dword ptr [ebp-32]
and esi, dword ptr [ebp-28]
je .Lt_00F0
mov esi, dword ptr [ebp+20]
mov dword ptr [esi+20], 0
mov dword ptr [esi+24], 0
cmp dword ptr [AST+232], 0
jne .Lt_00F6
push 1
push 0
push 25
call ERRREPORTWARN
add esp, 12
.Lt_00F6:
.Lt_00F5:
jmp .Lt_00EE
.Lt_00F0:
cmp dword ptr [ebp+8], 32
jne .Lt_00F7
mov esi, dword ptr [ebp+24]
push dword ptr [esi+24]
push dword ptr [esi+20]
mov esi, dword ptr [ebp+20]
push dword ptr [esi+24]
push dword ptr [esi+20]
call __divdi3
add esp, 16
mov esi, dword ptr [ebp+20]
mov dword ptr [esi+20], eax
mov dword ptr [esi+24], edx
jmp .Lt_00EE
.Lt_00F7:
mov eax, dword ptr [ebp+24]
push dword ptr [eax+24]
push dword ptr [eax+20]
mov eax, dword ptr [ebp+20]
push dword ptr [eax+24]
push dword ptr [eax+20]
call __moddi3
add esp, 16
mov esi, dword ptr [ebp+20]
mov dword ptr [esi+20], eax
mov dword ptr [esi+24], edx
.Lt_00EE:
jmp .Lt_00D4
.Lt_00F8:
jmp .Lt_00D4
.Lt_00D5:
mov eax, dword ptr [ebp-16]
add eax, 4294967268
cmp eax, 22
ja .Lt_00F8
mov eax, dword ptr [ebp-16]
jmp dword ptr [.LT_00F9+eax*4-112]
.LT_00F9:
.int .Lt_00D7
.int .Lt_00D8
.int .Lt_00D9
.int .Lt_00F8
.int .Lt_00ED
.int .Lt_00ED
.int .Lt_00DC
.int .Lt_00DD
.int .Lt_00E7
.int .Lt_00EA
.int .Lt_00DE
.int .Lt_00DF
.int .Lt_00E0
.int .Lt_00DA
.int .Lt_00DB
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00E2
.int .Lt_00E3
.int .Lt_00E4
.int .Lt_00E1
.int .Lt_00E6
.int .Lt_00E5
.Lt_00D4:
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call ASTCONVERTRAWCONSTI
add esp, 12
mov dword ptr [ebp+20], eax
jmp .Lt_00B8
.Lt_00D1:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-16], eax
jmp .Lt_00FB
.Lt_00FD:
mov eax, dword ptr [ebp+20]
mov edx, dword ptr [ebp+24]
mov ecx, dword ptr [eax+20]
mov esi, dword ptr [eax+24]
add ecx, dword ptr [edx+20]
adc esi, dword ptr [edx+24]
mov ebx, ecx
mov eax, esi
mov edx, dword ptr [ebp+20]
mov dword ptr [edx+20], ebx
mov dword ptr [edx+24], eax
jmp .Lt_00FA
.Lt_00FE:
mov ebx, dword ptr [ebp+20]
mov eax, dword ptr [ebp+24]
mov ecx, dword ptr [ebx+20]
mov edx, dword ptr [ebx+24]
sub ecx, dword ptr [eax+20]
sbb edx, dword ptr [eax+24]
mov esi, ecx
mov ebx, edx
mov eax, dword ptr [ebp+20]
mov dword ptr [eax+20], esi
mov dword ptr [eax+24], ebx
jmp .Lt_00FA
.Lt_00FF:
mov esi, dword ptr [ebp+20]
mov ebx, dword ptr [ebp+24]
mov ecx, dword ptr [esi+20]
mov eax, dword ptr [esi+24]
push dword ptr [ebx+24]
push dword ptr [ebx+20]
push eax
push ecx
mov eax, [esp+0]
mul dword ptr [esp+8]
xchg eax, [esp+0]
imul eax, [esp+12]
add eax, edx
mov edx, [esp+4]
imul edx, [esp+8]
add edx, eax
mov [esp+4], edx
pop ecx
pop eax
add esp, 8
mov edx, ecx
mov esi, eax
mov ebx, dword ptr [ebp+20]
mov dword ptr [ebx+20], edx
mov dword ptr [ebx+24], esi
jmp .Lt_00FA
.Lt_0100:
mov edx, dword ptr [ebp+20]
mov esi, dword ptr [ebp+24]
mov ebx, dword ptr [esi+20]
mov ecx, dword ptr [edx+20]
mov esi, dword ptr [edx+24]
push esi
push ecx
mov ecx, ebx
mov eax, [esp+0]
mov edx, [esp+4]
shld edx, eax, cl
shl  eax, cl
test cl, 32
jz .Lt_03C3
mov edx, eax
xor eax, eax
.Lt_03C3:
mov [esp+4], edx
mov [esp+0], eax
pop ecx
pop esi
mov eax, ecx
mov edx, esi
mov ebx, dword ptr [ebp+20]
mov dword ptr [ebx+20], eax
mov dword ptr [ebx+24], edx
jmp .Lt_00FA
.Lt_0101:
mov eax, dword ptr [ebp+20]
mov edx, dword ptr [ebp+24]
mov ebx, dword ptr [edx+20]
mov ecx, dword ptr [eax+20]
mov edx, dword ptr [eax+24]
push edx
push ecx
mov ecx, ebx
mov eax, [esp+0]
mov edx, [esp+4]
shrd eax, edx, cl
shr  edx, cl
test cl, 32
jz .Lt_03C4
mov eax, edx
xor edx, edx
.Lt_03C4:
mov [esp+4], edx
mov [esp+0], eax
pop ecx
pop edx
mov esi, ecx
mov eax, edx
mov ebx, dword ptr [ebp+20]
mov dword ptr [ebx+20], esi
mov dword ptr [ebx+24], eax
jmp .Lt_00FA
.Lt_0102:
mov esi, dword ptr [ebp+20]
mov eax, dword ptr [ebp+24]
mov ecx, dword ptr [esi+20]
mov ebx, dword ptr [esi+24]
and ecx, dword ptr [eax+20]
and ebx, dword ptr [eax+24]
mov edx, ecx
mov esi, ebx
mov eax, dword ptr [ebp+20]
mov dword ptr [eax+20], edx
mov dword ptr [eax+24], esi
jmp .Lt_00FA
.Lt_0103:
mov edx, dword ptr [ebp+20]
mov esi, dword ptr [ebp+24]
mov ecx, dword ptr [edx+20]
mov eax, dword ptr [edx+24]
or ecx, dword ptr [esi+20]
or eax, dword ptr [esi+24]
mov ebx, ecx
mov edx, eax
mov esi, dword ptr [ebp+20]
mov dword ptr [esi+20], ebx
mov dword ptr [esi+24], edx
jmp .Lt_00FA
.Lt_0104:
mov ebx, dword ptr [ebp+20]
mov edx, dword ptr [ebp+24]
mov ecx, dword ptr [ebx+20]
mov esi, dword ptr [ebx+24]
xor ecx, dword ptr [edx+20]
xor esi, dword ptr [edx+24]
mov eax, ecx
mov ebx, esi
mov edx, dword ptr [ebp+20]
mov dword ptr [edx+20], eax
mov dword ptr [edx+24], ebx
jmp .Lt_00FA
.Lt_0105:
mov eax, dword ptr [ebp+20]
mov ebx, dword ptr [ebp+24]
mov ecx, dword ptr [eax+20]
mov edx, dword ptr [eax+24]
xor ecx, dword ptr [ebx+20]
xor edx, dword ptr [ebx+24]
not ecx
not edx
mov esi, ecx
mov eax, edx
mov ebx, dword ptr [ebp+20]
mov dword ptr [ebx+20], esi
mov dword ptr [ebx+24], eax
jmp .Lt_00FA
.Lt_0106:
mov esi, dword ptr [ebp+20]
mov eax, dword ptr [ebp+24]
mov ecx, dword ptr [esi+20]
mov ebx, dword ptr [esi+24]
not ecx
not ebx
or ecx, dword ptr [eax+20]
or ebx, dword ptr [eax+24]
mov edx, ecx
mov esi, ebx
mov eax, dword ptr [ebp+20]
mov dword ptr [eax+20], edx
mov dword ptr [eax+24], esi
jmp .Lt_00FA
.Lt_0107:
mov edx, dword ptr [ebp+20]
mov esi, dword ptr [ebp+24]
mov ecx, dword ptr [edx+20]
mov eax, dword ptr [edx+24]
cmp eax, dword ptr [esi+24]
mov edx, -1
jne .Lt_03C5
cmp ecx, dword ptr [esi+20]
jne .Lt_03C5
.Lt_03C6:
xor edx, edx
.Lt_03C5:
mov ecx, edx
mov esi, ecx
sar esi, 31
mov edx, dword ptr [ebp+20]
mov dword ptr [edx+20], ecx
mov dword ptr [edx+24], esi
jmp .Lt_00FA
.Lt_0108:
mov ecx, dword ptr [ebp+20]
mov esi, dword ptr [ebp+24]
mov eax, dword ptr [ecx+20]
mov edx, dword ptr [ecx+24]
cmp edx, dword ptr [esi+24]
mov ecx, -1
jne .Lt_03C8
cmp eax, dword ptr [esi+20]
je .Lt_03C7
.Lt_03C8:
xor ecx, ecx
.Lt_03C7:
mov eax, ecx
mov esi, eax
sar esi, 31
mov ecx, dword ptr [ebp+20]
mov dword ptr [ecx+20], eax
mov dword ptr [ecx+24], esi
jmp .Lt_00FA
.Lt_0109:
mov eax, dword ptr [ebp+20]
mov esi, dword ptr [ebp+24]
mov edx, dword ptr [eax+20]
mov ecx, dword ptr [eax+24]
cmp ecx, dword ptr [esi+24]
mov eax, -1
ja .Lt_03C9
jb .Lt_03CA
cmp edx, dword ptr [esi+20]
ja .Lt_03C9
.Lt_03CA:
xor eax, eax
.Lt_03C9:
mov edx, eax
mov esi, edx
sar esi, 31
mov eax, dword ptr [ebp+20]
mov dword ptr [eax+20], edx
mov dword ptr [eax+24], esi
jmp .Lt_00FA
.Lt_010A:
mov edx, dword ptr [ebp+20]
mov esi, dword ptr [ebp+24]
mov ecx, dword ptr [edx+20]
mov eax, dword ptr [edx+24]
cmp eax, dword ptr [esi+24]
mov edx, -1
jb .Lt_03CB
ja .Lt_03CC
cmp ecx, dword ptr [esi+20]
jb .Lt_03CB
.Lt_03CC:
xor edx, edx
.Lt_03CB:
mov ecx, edx
mov esi, ecx
sar esi, 31
mov edx, dword ptr [ebp+20]
mov dword ptr [edx+20], ecx
mov dword ptr [edx+24], esi
jmp .Lt_00FA
.Lt_010B:
mov ecx, dword ptr [ebp+20]
mov esi, dword ptr [ebp+24]
mov eax, dword ptr [ecx+20]
mov edx, dword ptr [ecx+24]
cmp edx, dword ptr [esi+24]
mov ecx, -1
jb .Lt_03CD
ja .Lt_03CE
cmp eax, dword ptr [esi+20]
jbe .Lt_03CD
.Lt_03CE:
xor ecx, ecx
.Lt_03CD:
mov eax, ecx
mov esi, eax
sar esi, 31
mov ecx, dword ptr [ebp+20]
mov dword ptr [ecx+20], eax
mov dword ptr [ecx+24], esi
jmp .Lt_00FA
.Lt_010C:
mov eax, dword ptr [ebp+20]
mov esi, dword ptr [ebp+24]
mov edx, dword ptr [eax+20]
mov ecx, dword ptr [eax+24]
cmp ecx, dword ptr [esi+24]
mov eax, -1
ja .Lt_03CF
jb .Lt_03D0
cmp edx, dword ptr [esi+20]
jae .Lt_03CF
.Lt_03D0:
xor eax, eax
.Lt_03CF:
mov edx, eax
mov esi, edx
sar esi, 31
mov eax, dword ptr [ebp+20]
mov dword ptr [eax+20], edx
mov dword ptr [eax+24], esi
jmp .Lt_00FA
.Lt_010D:
mov edx, dword ptr [ebp+20]
cmp dword ptr [edx+24], 0
jne .Lt_03D1
cmp dword ptr [edx+20], 0
je .Lt_010E
.Lt_03D1:
mov edx, dword ptr [ebp+24]
cmp dword ptr [edx+24], 0
mov esi, -1
jne .Lt_03D2
cmp dword ptr [edx+20], 0
jne .Lt_03D2
.Lt_03D3:
xor esi, esi
.Lt_03D2:
mov dword ptr [ebp-20], esi
jmp .Lt_039C
.Lt_010E:
mov dword ptr [ebp-20], 0
.Lt_039C:
mov edx, dword ptr [ebp-20]
mov esi, edx
sar esi, 31
mov eax, dword ptr [ebp+20]
mov dword ptr [eax+20], edx
mov dword ptr [eax+24], esi
jmp .Lt_00FA
.Lt_0110:
mov edx, dword ptr [ebp+20]
cmp dword ptr [edx+24], 0
jne .Lt_03D4
cmp dword ptr [edx+20], 0
je .Lt_0111
.Lt_03D4:
mov dword ptr [ebp-20], -1
jmp .Lt_039D
.Lt_0111:
mov edx, dword ptr [ebp+24]
cmp dword ptr [edx+24], 0
mov esi, -1
jne .Lt_03D5
cmp dword ptr [edx+20], 0
jne .Lt_03D5
.Lt_03D6:
xor esi, esi
.Lt_03D5:
mov dword ptr [ebp-20], esi
.Lt_039D:
mov edx, dword ptr [ebp-20]
mov esi, edx
sar esi, 31
mov eax, dword ptr [ebp+20]
mov dword ptr [eax+20], edx
mov dword ptr [eax+24], esi
jmp .Lt_00FA
.Lt_0113:
mov edx, dword ptr [ebp+24]
cmp dword ptr [edx+24], 0
jne .Lt_0115
cmp dword ptr [edx+20], 0
jne .Lt_0115
.Lt_03D7:
mov edx, dword ptr [ebp+20]
mov dword ptr [edx+20], 0
mov dword ptr [edx+24], 0
push 0
push 0
push 99
call ERRREPORT
add esp, 12
jmp .Lt_0114
.Lt_0115:
cmp dword ptr [ebp+8], 32
jne .Lt_0116
mov edx, dword ptr [ebp+24]
push dword ptr [edx+24]
push dword ptr [edx+20]
mov edx, dword ptr [ebp+20]
push dword ptr [edx+24]
push dword ptr [edx+20]
call __udivdi3
add esp, 16
mov esi, dword ptr [ebp+20]
mov dword ptr [esi+20], eax
mov dword ptr [esi+24], edx
jmp .Lt_0114
.Lt_0116:
mov eax, dword ptr [ebp+24]
push dword ptr [eax+24]
push dword ptr [eax+20]
mov eax, dword ptr [ebp+20]
push dword ptr [eax+24]
push dword ptr [eax+20]
call __umoddi3
add esp, 16
mov esi, dword ptr [ebp+20]
mov dword ptr [esi+20], eax
mov dword ptr [esi+24], edx
.Lt_0114:
jmp .Lt_00FA
.Lt_0117:
jmp .Lt_00FA
.Lt_00FB:
mov eax, dword ptr [ebp-16]
add eax, 4294967268
cmp eax, 22
ja .Lt_0117
mov eax, dword ptr [ebp-16]
jmp dword ptr [.LT_0118+eax*4-112]
.LT_0118:
.int .Lt_00FD
.int .Lt_00FE
.int .Lt_00FF
.int .Lt_0117
.int .Lt_0113
.int .Lt_0113
.int .Lt_0102
.int .Lt_0103
.int .Lt_010D
.int .Lt_0110
.int .Lt_0104
.int .Lt_0105
.int .Lt_0106
.int .Lt_0100
.int .Lt_0101
.int .Lt_0117
.int .Lt_0117
.int .Lt_0108
.int .Lt_0109
.int .Lt_010A
.int .Lt_0107
.int .Lt_010C
.int .Lt_010B
.Lt_00FA:
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call ASTCONVERTRAWCONSTI
add esp, 12
mov dword ptr [ebp+20], eax
.Lt_00B8:
mov eax, dword ptr [ebp+20]
mov dword ptr [ebp-4], eax
.Lt_00B5:
mov eax, dword ptr [ebp-4]
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size HCONSTBOP, .-HCONSTBOP
.balign 16
HCHECKPOINTER:
.type HCHECKPOINTER, @function
push ebp
mov ebp, esp
sub esp, 12
mov dword ptr [ebp-4], 0
.Lt_0119:
cmp dword ptr [ebp+16], 0
je .Lt_011C
mov dword ptr [ebp-4], 0
jmp .Lt_011A
jmp .Lt_011B
.Lt_011C:
mov eax, dword ptr [ebp+12]
and eax, 480
je .Lt_011D
mov dword ptr [ebp-8], 22
jmp .Lt_03D8
.Lt_011D:
mov eax, dword ptr [ebp+12]
and eax, 31
mov dword ptr [ebp-8], eax
.Lt_03D8:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 3
je .Lt_0122
.Lt_0123:
cmp dword ptr [ebp-12], 6
jne .Lt_0121
.Lt_0122:
mov dword ptr [ebp-4], 0
jmp .Lt_011A
.Lt_0121:
.Lt_011F:
.Lt_011B:
cmp dword ptr [ebp+8], 28
je .Lt_0126
.Lt_0127:
cmp dword ptr [ebp+8], 29
jne .Lt_0125
.Lt_0126:
mov eax, dword ptr [ebp+12]
and eax, 480
test eax, eax
je .Lt_0129
mov dword ptr [ebp-4], 0
jmp .Lt_011A
.Lt_0129:
.Lt_0128:
mov dword ptr [ebp-4], -1
jmp .Lt_011A
jmp .Lt_0124
.Lt_0125:
cmp dword ptr [ebp+8], 36
je .Lt_012B
.Lt_012C:
cmp dword ptr [ebp+8], 37
jne .Lt_012A
.Lt_012B:
mov dword ptr [ebp-4], -1
jmp .Lt_011A
jmp .Lt_0124
.Lt_012A:
cmp dword ptr [ebp+8], 45
je .Lt_012E
.Lt_012F:
cmp dword ptr [ebp+8], 46
je .Lt_012E
.Lt_0130:
cmp dword ptr [ebp+8], 47
je .Lt_012E
.Lt_0131:
cmp dword ptr [ebp+8], 48
je .Lt_012E
.Lt_0132:
cmp dword ptr [ebp+8], 50
je .Lt_012E
.Lt_0133:
cmp dword ptr [ebp+8], 49
jne .Lt_012D
.Lt_012E:
mov dword ptr [ebp-4], -1
jmp .Lt_011A
jmp .Lt_0124
.Lt_012D:
mov dword ptr [ebp-4], 0
.Lt_0134:
.Lt_0124:
.Lt_011A:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size HCHECKPOINTER, .-HCHECKPOINTER
.balign 16
HDOPOINTERARITH:
.type HDOPOINTERARITH, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
mov dword ptr [ebp-4], 0
.Lt_0135:
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+4]
and ebx, 511
mov dword ptr [ebp-8], ebx
mov ebx, dword ptr [ebp-8]
and ebx, 480
je .Lt_0137
mov dword ptr [ebp-20], 22
jmp .Lt_03D9
.Lt_0137:
mov ebx, dword ptr [ebp-8]
and ebx, 31
mov dword ptr [ebp-20], ebx
.Lt_03D9:
mov ebx, dword ptr [ebp-20]
imul ebx, 28
cmp dword ptr [SYMB_DTYPETB+ebx], 0
je .Lt_013A
jmp .Lt_0136
jmp .Lt_0139
.Lt_013A:
cmp dword ptr [ebp-8], 3
je .Lt_013D
.Lt_013E:
cmp dword ptr [ebp-8], 6
jne .Lt_013C
.Lt_013D:
jmp .Lt_0136
.Lt_013C:
.Lt_013B:
.Lt_0139:
mov ebx, dword ptr [ebp+12]
push dword ptr [ebx+8]
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 511
push eax
call SYMBCALCDEREFLEN
add esp, 8
mov dword ptr [ebp-16], eax
mov dword ptr [ebp-12], edx
cmp dword ptr [ebp-12], 0
jg .Lt_0140
jl .Lt_03DB
cmp dword ptr [ebp-16], 0
ja .Lt_0140
.Lt_03DB:
jmp .Lt_0136
.Lt_0140:
.Lt_013F:
mov eax, dword ptr [ebp-8]
and eax, 480
test eax, eax
je .Lt_0142
cmp dword ptr [ebp+8], 29
jne .Lt_0144
mov eax, dword ptr [ebp+12]
mov edx, dword ptr [eax+4]
and edx, 511
cmp edx, dword ptr [ebp-8]
setne dl
shr edx, 1
sbb edx, edx
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [ebp+12]
mov ecx, dword ptr [eax+8]
cmp ecx, dword ptr [ebx+8]
setne al
shr eax, 1
sbb eax, eax
or edx, eax
je .Lt_0146
jmp .Lt_0136
.Lt_0146:
.Lt_0145:
push 0
push 0
push dword ptr [ebp+12]
push 0
push 7
call ASTNEWCONV
add esp, 20
mov dword ptr [ebp+12], eax
push 0
push 0
push dword ptr [ebp+16]
push 0
push 7
call ASTNEWCONV
add esp, 20
mov dword ptr [ebp+16], eax
push 1
push 0
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push 29
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp+16], eax
push 1
push 0
push 0
push 7
push dword ptr [ebp-12]
push dword ptr [ebp-16]
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp+16]
push 32
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp-4], eax
.Lt_0144:
.Lt_0143:
jmp .Lt_0136
.Lt_0142:
.Lt_0141:
cmp dword ptr [ebp-8], 7
je .Lt_0148
push 0
push 0
push dword ptr [ebp+16]
push 0
push 7
call ASTNEWCONV
add esp, 20
mov dword ptr [ebp+16], eax
.Lt_0148:
.Lt_0147:
cmp dword ptr [ebp+8], 28
je .Lt_014B
.Lt_014C:
cmp dword ptr [ebp+8], 29
jne .Lt_014A
.Lt_014B:
mov eax, dword ptr [ebp+8]
cmp eax, 29
sete al
shr eax, 1
sbb eax, eax
test eax, eax
je .Lt_014D
mov eax, dword ptr [ebp+20]
test eax, eax
setne al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-24], eax
jmp .Lt_03DA
.Lt_014D:
mov dword ptr [ebp-24], 0
.Lt_03DA:
cmp dword ptr [ebp-24], 0
je .Lt_0150
jmp .Lt_0136
.Lt_0150:
.Lt_014F:
push 1
push 0
push 0
push 7
push dword ptr [ebp-12]
push dword ptr [ebp-16]
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp+16]
push 30
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp+16], eax
push 1
push 0
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp-4], eax
jmp .Lt_0149
.Lt_014A:
.Lt_0151:
.Lt_0149:
.Lt_0136:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HDOPOINTERARITH, .-HDOPOINTERARITH
.balign 16
HCONVERTUDT_L:
.type HCONVERTUDT_L, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0152:
push 0
push 0
push dword ptr [ebp+16]
mov eax, dword ptr [ebp+12]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+12]
push dword ptr [eax+4]
call ASTNEWCONV
add esp, 20
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
je .Lt_0155
mov eax, dword ptr [ebp+24]
or eax, 8
mov ebx, eax
push ebx
push dword ptr [ebp+20]
push dword ptr [ebp-8]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
je .Lt_0157
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
jmp .Lt_0153
.Lt_0157:
.Lt_0156:
.Lt_0155:
.Lt_0154:
push 0
push 0
push dword ptr [ebp+12]
mov eax, dword ptr [ebp+16]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+16]
push dword ptr [eax+4]
call ASTNEWCONV
add esp, 20
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
je .Lt_0159
mov eax, dword ptr [ebp+24]
or eax, 8
mov ebx, eax
push ebx
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp-8]
push dword ptr [ebp+8]
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
je .Lt_015B
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
jmp .Lt_0153
.Lt_015B:
.Lt_015A:
.Lt_0159:
.Lt_0158:
push 0
push 0
push dword ptr [ebp+12]
push 0
push 0
call ASTNEWCONV
add esp, 20
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
je .Lt_015D
push dword ptr [ebp+24]
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp-8]
push dword ptr [ebp+8]
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp-4], eax
jmp .Lt_0153
.Lt_015D:
.Lt_015C:
mov dword ptr [ebp-4], 0
.Lt_0153:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HCONVERTUDT_L, .-HCONVERTUDT_L
.balign 16
HCONVERTUDT_R:
.type HCONVERTUDT_R, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_015E:
push 0
push 0
push dword ptr [ebp+12]
mov eax, dword ptr [ebp+16]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+16]
push dword ptr [eax+4]
call ASTNEWCONV
add esp, 20
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
je .Lt_0161
mov eax, dword ptr [ebp+24]
or eax, 8
mov ebx, eax
push ebx
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp-8]
push dword ptr [ebp+8]
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
je .Lt_0163
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
jmp .Lt_015F
.Lt_0163:
.Lt_0162:
.Lt_0161:
.Lt_0160:
push 0
push 0
push dword ptr [ebp+16]
mov eax, dword ptr [ebp+12]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+12]
push dword ptr [eax+4]
call ASTNEWCONV
add esp, 20
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
je .Lt_0165
mov eax, dword ptr [ebp+24]
or eax, 8
mov ebx, eax
push ebx
push dword ptr [ebp+20]
push dword ptr [ebp-8]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
je .Lt_0167
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
jmp .Lt_015F
.Lt_0167:
.Lt_0166:
.Lt_0165:
.Lt_0164:
push 0
push 0
push dword ptr [ebp+16]
push 0
push 0
call ASTNEWCONV
add esp, 20
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
je .Lt_0169
mov eax, dword ptr [ebp+24]
or eax, 8
mov ebx, eax
push ebx
push dword ptr [ebp+20]
push dword ptr [ebp-8]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp-4], eax
jmp .Lt_015F
.Lt_0169:
.Lt_0168:
mov dword ptr [ebp-4], 0
.Lt_015F:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HCONVERTUDT_R, .-HCONVERTUDT_R
.balign 16
HCHECKDEREFWCHARPTR:
.type HCHECKDEREFWCHARPTR, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_016A:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 20
je .Lt_016D
jmp .Lt_016B
.Lt_016D:
.Lt_016C:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-8], ebx
cmp dword ptr [ebp-8], 0
je .Lt_016F
mov ebx, dword ptr [ebp-8]
cmp dword ptr [ebx], 17
jne .Lt_0171
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx+12]
mov ebx, dword ptr [eax+8]
and ebx, 16777216
test ebx, ebx
je .Lt_0173
jmp .Lt_016B
.Lt_0173:
.Lt_0172:
.Lt_0171:
.Lt_0170:
.Lt_016F:
.Lt_016E:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx]
and eax, -512
mov ebx, dword ptr [ENV+212]
and ebx, 511
or eax, ebx
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx], eax
mov dword ptr [ebp-4], -1
.Lt_016B:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HCHECKDEREFWCHARPTR, .-HCHECKDEREFWCHARPTR
.balign 16
HCONVOPERAND:
.type HCONVOPERAND, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0174:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax]
and ebx, -512
mov eax, dword ptr [ebp+8]
and eax, 511
or ebx, eax
mov eax, dword ptr [ebp+12]
mov dword ptr [eax], ebx
mov ebx, dword ptr [ebp+8]
and ebx, 480
je .Lt_0176
mov dword ptr [ebp-4], 22
jmp .Lt_03E0
.Lt_0176:
mov ebx, dword ptr [ebp+8]
and ebx, 31
mov dword ptr [ebp-4], ebx
.Lt_03E0:
mov ebx, dword ptr [ebp-4]
imul ebx, 28
mov eax, dword ptr [ebp+16]
mov ecx, dword ptr [SYMB_DTYPETB+ebx]
mov dword ptr [eax], ecx
push 0
push 0
mov ecx, dword ptr [ebp+20]
push dword ptr [ecx]
push 0
mov ecx, dword ptr [ebp+12]
push dword ptr [ecx]
call ASTNEWCONV
add esp, 20
mov ecx, dword ptr [ebp+20]
mov dword ptr [ecx], eax
.Lt_0175:
pop ebx
mov esp, ebp
pop ebp
ret
.size HCONVOPERAND, .-HCONVOPERAND
	#FreeBASIC-1.01.0-source/src/compiler/ast-node-bop.bas' compilation took 0.04857706045731902 secs

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

.section .rodata
.balign 8
Lt_0326:	.quad	0x4000000000000000
.balign 8
Lt_032A:	.quad	0x0000000000000000

.section .ctors, "aw", @progbits
.int fb_ctor__astznodezbop
