	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/ast-optimize.bas' compilation started at 15:27:33 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl ASTOPTASSIGNMENT
ASTOPTASSIGNMENT:
.type ASTOPTASSIGNMENT, @function
push ebp
mov ebp, esp
sub esp, 44
push ebx
mov dword ptr [ebp-4], 0
.Lt_02AA:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp+8], 0
jne .Lt_02AD
jmp .Lt_02AB
.Lt_02AD:
.Lt_02AC:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-40], ebx
cmp dword ptr [ebp-40], 2
jne .Lt_02B0
.Lt_02B1:
jmp .Lt_02AE
.Lt_02B0:
cmp dword ptr [ebp-40], 15
je .Lt_02B3
.Lt_02B4:
cmp dword ptr [ebp-40], 13
jne .Lt_02B2
.Lt_02B3:
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+56]
call ASTOPTASSIGNMENT
add esp, 4
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+56], eax
mov eax, dword ptr [ebp+8]
push dword ptr [eax+60]
call ASTOPTASSIGNMENT
add esp, 4
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+60], eax
jmp .Lt_02AB
jmp .Lt_02AE
.Lt_02B2:
jmp .Lt_02AB
.Lt_02B5:
.Lt_02AE:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-8], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+60]
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-16], ebx
mov ebx, dword ptr [ebp-16]
and ebx, 480
je .Lt_02B6
mov dword ptr [ebp-40], 22
jmp .Lt_02ED
.Lt_02B6:
mov ebx, dword ptr [ebp-16]
and ebx, 31
mov dword ptr [ebp-40], ebx
.Lt_02ED:
mov ebx, dword ptr [ebp-40]
mov dword ptr [ebp-44], ebx
cmp dword ptr [ebp-44], 16
je .Lt_02BB
.Lt_02BC:
cmp dword ptr [ebp-44], 17
je .Lt_02BB
.Lt_02BD:
cmp dword ptr [ebp-44], 6
jne .Lt_02BA
.Lt_02BB:
push dword ptr [ebp-12]
push dword ptr [ebp-8]
push dword ptr [ebp+8]
call HOPTSTRASSIGNMENT
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_02AB
.Lt_02BA:
.Lt_02B8:
mov eax, dword ptr [ebp-16]
and eax, 480
je .Lt_02BE
mov dword ptr [ebp-24], 22
jmp .Lt_02EE
.Lt_02BE:
mov eax, dword ptr [ebp-16]
and eax, 31
mov dword ptr [ebp-24], eax
.Lt_02EE:
mov eax, dword ptr [ebp-24]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax]
mov dword ptr [ebp-20], ebx
cmp dword ptr [ebp-20], 0
jne .Lt_02C1
mov ebx, dword ptr [IR+284]
and ebx, 512
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_02C3
jmp .Lt_02AB
.Lt_02C3:
.Lt_02C2:
jmp .Lt_02C0
.Lt_02C1:
mov ebx, dword ptr [IR+284]
and ebx, 8
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_02C5
mov ebx, dword ptr [ebp-12]
cmp dword ptr [ebx], 16
jne .Lt_02C7
cmp dword ptr [ebp-20], 1
jne .Lt_02C9
mov ebx, dword ptr [ebp-12]
mov eax, dword ptr [ebx+4]
and eax, 511
and eax, 480
je .Lt_02CA
mov dword ptr [ebp-40], 22
jmp .Lt_02EF
.Lt_02CA:
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax+4]
and ebx, 511
and ebx, 31
mov dword ptr [ebp-40], ebx
.Lt_02EF:
mov ebx, dword ptr [ebp-40]
imul ebx, 28
cmp dword ptr [SYMB_DTYPETB+ebx], 1
je .Lt_02CD
push 0
push 0
push dword ptr [ebp-12]
push 0
push dword ptr [ebp-16]
call ASTNEWCONV
add esp, 20
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+60], eax
.Lt_02CD:
.Lt_02CC:
.Lt_02C9:
.Lt_02C8:
.Lt_02C7:
.Lt_02C6:
jmp .Lt_02AB
.Lt_02C5:
.Lt_02C4:
.Lt_02C0:
mov eax, dword ptr [ebp-16]
and eax, 480
je .Lt_02CE
mov dword ptr [ebp-28], 22
jmp .Lt_02F0
.Lt_02CE:
mov eax, dword ptr [ebp-16]
and eax, 31
mov dword ptr [ebp-28], eax
.Lt_02F0:
mov eax, dword ptr [ebp-28]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+4], 1
jne .Lt_02D1
jmp .Lt_02AB
.Lt_02D1:
.Lt_02D0:
push dword ptr [ebp-8]
call ASTSKIPNOCONVCAST
add esp, 4
mov dword ptr [ebp-32], eax
mov eax, dword ptr [ebp-32]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-40], ebx
jmp .Lt_02D3
.Lt_02D5:
jmp .Lt_02D2
.Lt_02D6:
mov ebx, dword ptr [ebp-32]
mov eax, dword ptr [ebx+12]
cmp dword ptr [eax+108], 0
jle .Lt_02D8
jmp .Lt_02AB
.Lt_02D8:
.Lt_02D7:
jmp .Lt_02D2
.Lt_02D9:
jmp .Lt_02AB
jmp .Lt_02D2
.Lt_02D3:
mov eax, dword ptr [ebp-40]
add eax, 4294967279
cmp eax, 9
ja .Lt_02D9
mov eax, dword ptr [ebp-40]
jmp dword ptr [.LT_02DA+eax*4-68]
.LT_02DA:
.int .Lt_02D5
.int .Lt_02D5
.int .Lt_02D6
.int .Lt_02D5
.int .Lt_02D9
.int .Lt_02D9
.int .Lt_02D9
.int .Lt_02D9
.int .Lt_02D9
.int .Lt_02D5
.Lt_02D2:
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-40], ebx
cmp dword ptr [ebp-40], 4
jne .Lt_02DD
.Lt_02DE:
jmp .Lt_02DB
.Lt_02DD:
cmp dword ptr [ebp-40], 3
jne .Lt_02DF
.Lt_02E0:
mov ebx, dword ptr [ebp-12]
mov eax, dword ptr [ebx+20]
mov dword ptr [ebp-44], eax
jmp .Lt_02E2
.Lt_02E4:
jmp .Lt_02AB
jmp .Lt_02E1
.Lt_02E2:
mov eax, dword ptr [ebp-44]
add eax, 4294967251
cmp eax, 5
ja .Lt_02E1
mov eax, dword ptr [ebp-44]
jmp dword ptr [.LT_02E5+eax*4-180]
.LT_02E5:
.int .Lt_02E4
.int .Lt_02E4
.int .Lt_02E4
.int .Lt_02E4
.int .Lt_02E4
.int .Lt_02E4
.Lt_02E1:
jmp .Lt_02DB
.Lt_02DF:
jmp .Lt_02AB
.Lt_02E6:
.Lt_02DB:
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax+4]
and ebx, 511
and ebx, 480
je .Lt_02E7
mov dword ptr [ebp-36], 22
jmp .Lt_02F1
.Lt_02E7:
mov ebx, dword ptr [ebp-12]
mov eax, dword ptr [ebx+4]
and eax, 511
and eax, 31
mov dword ptr [ebp-36], eax
.Lt_02F1:
mov eax, dword ptr [ebp-36]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax], 0
je .Lt_02EA
jmp .Lt_02AB
.Lt_02EA:
.Lt_02E9:
mov eax, dword ptr [ebp-12]
push dword ptr [eax+56]
push dword ptr [ebp-8]
call ASTISTREEEQUAL
add esp, 8
test eax, eax
jne .Lt_02EC
jmp .Lt_02AB
.Lt_02EC:
.Lt_02EB:
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax+24]
and ebx, -2
mov eax, ebx
mov ebx, dword ptr [ebp-12]
mov dword ptr [ebx+24], eax
push dword ptr [ebp+8]
call ASTDELNODE
add esp, 4
push dword ptr [ebp-8]
call ASTDELTREE
add esp, 4
mov eax, dword ptr [ebp-12]
mov dword ptr [ebp-4], eax
.Lt_02AB:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTOPTASSIGNMENT, .-ASTOPTASSIGNMENT
.balign 16

.globl HOPTSELFASSIGN
HOPTSELFASSIGN:
.type HOPTSELFASSIGN, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
mov dword ptr [ebp-4], 0
.Lt_02F4:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp+8], 0
jne .Lt_02F7
jmp .Lt_02F5
.Lt_02F7:
.Lt_02F6:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 2
je .Lt_02F9
jmp .Lt_02F5
.Lt_02F9:
.Lt_02F8:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-8], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+60]
mov dword ptr [ebp-12], eax
push dword ptr [ebp-12]
push dword ptr [ebp-8]
call ASTISTREEEQUAL
add esp, 8
test eax, eax
jne .Lt_02FB
jmp .Lt_02F5
.Lt_02FB:
.Lt_02FA:
push dword ptr [ebp+8]
call ASTDELNODE
add esp, 4
push dword ptr [ebp-8]
call ASTDELTREE
add esp, 4
push dword ptr [ebp-12]
call ASTDELTREE
add esp, 4
call ASTNEWNOP
mov dword ptr [ebp-4], eax
.Lt_02F5:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HOPTSELFASSIGN, .-HOPTSELFASSIGN
.balign 16

.globl HOPTSELFCOMPARE
HOPTSELFCOMPARE:
.type HOPTSELFCOMPARE, @function
push ebp
mov ebp, esp
sub esp, 28
push ebx
mov dword ptr [ebp-4], 0
.Lt_02FC:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp+8], 0
jne .Lt_02FF
jmp .Lt_02FD
.Lt_02FF:
.Lt_02FE:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 3
je .Lt_0301
jmp .Lt_02FD
.Lt_0301:
.Lt_0300:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-8], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+60]
mov dword ptr [ebp-12], eax
push dword ptr [ebp-12]
push dword ptr [ebp-8]
call ASTISTREEEQUAL
add esp, 8
test eax, eax
jne .Lt_0303
jmp .Lt_02FD
.Lt_0303:
.Lt_0302:
mov dword ptr [ebp-24], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+20]
mov dword ptr [ebp-28], ebx
jmp .Lt_0305
.Lt_0307:
mov dword ptr [ebp-24], -1
jmp .Lt_0304
.Lt_0308:
mov dword ptr [ebp-24], 0
jmp .Lt_0304
.Lt_0309:
jmp .Lt_02FD
jmp .Lt_0304
.Lt_0305:
mov ebx, dword ptr [ebp-28]
add ebx, 4294967251
cmp ebx, 5
ja .Lt_0309
mov ebx, dword ptr [ebp-28]
jmp dword ptr [.LT_030A+ebx*4-180]
.LT_030A:
.int .Lt_0307
.int .Lt_0308
.int .Lt_0308
.int .Lt_0308
.int .Lt_0307
.int .Lt_0307
.Lt_0304:
push dword ptr [ebp+8]
call ASTDELNODE
add esp, 4
push dword ptr [ebp-8]
call ASTDELTREE
add esp, 4
push dword ptr [ebp-12]
call ASTDELTREE
add esp, 4
push 0
push 7
mov eax, dword ptr [ebp-24]
mov ebx, eax
sar ebx, 31
push ebx
push eax
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-4], eax
.Lt_02FD:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HOPTSELFCOMPARE, .-HOPTSELFCOMPARE
.balign 16

.globl ASTOPTIMIZETREE
ASTOPTIMIZETREE:
.type ASTOPTIMIZETREE, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_0322:
inc dword ptr [AST+232]
push dword ptr [ebp+8]
call HMERGENESTEDFIELDS
add esp, 4
mov dword ptr [ebp+8], eax
push dword ptr [ebp+8]
call HOPTASSOCADD
add esp, 4
mov dword ptr [ebp+8], eax
push dword ptr [ebp+8]
call HOPTASSOCMUL
add esp, 4
mov dword ptr [ebp+8], eax
push dword ptr [ebp+8]
call HOPTCONSTDISTMUL
add esp, 4
mov dword ptr [ebp+8], eax
push dword ptr [ebp+8]
call HOPTCONSTACCUM1
add esp, 4
mov dword ptr [ebp+8], eax
push dword ptr [ebp+8]
call HOPTCONSTACCUM2
add esp, 4
mov dword ptr [ebp+8], eax
push dword ptr [ebp+8]
call HOPTCONSTREMNEG
add esp, 4
push dword ptr [ebp+8]
call HOPTCONSTIDX
add esp, 4
mov dword ptr [ebp+8], eax
push dword ptr [ebp+8]
call HOPTTOSHIFT
add esp, 4
push dword ptr [ebp+8]
call HOPTLOGIC
add esp, 4
mov dword ptr [ebp+8], eax
push dword ptr [ebp+8]
call HOPTNULLOP
add esp, 4
mov dword ptr [ebp+8], eax
push dword ptr [ebp+8]
call HOPTSELFASSIGN
add esp, 4
mov dword ptr [ebp+8], eax
push dword ptr [ebp+8]
call HOPTSELFCOMPARE
add esp, 4
mov dword ptr [ebp+8], eax
mov eax, dword ptr [IR+284]
and eax, 1
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ENV+104]
test ebx, ebx
sete bl
shr ebx, 1
sbb ebx, ebx
and eax, ebx
je .Lt_0325
push dword ptr [ebp+8]
call HDOOPTREMCONV
add esp, 4
mov dword ptr [ebp+8], eax
.Lt_0325:
.Lt_0324:
mov eax, dword ptr [IR+284]
and eax, 131072
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_0327
cmp dword ptr [ENV+120], 1
jne .Lt_0329
push dword ptr [ebp+8]
call HOPTRECIPROCAL
add esp, 4
mov dword ptr [ebp+8], eax
.Lt_0329:
.Lt_0328:
.Lt_0327:
.Lt_0326:
dec dword ptr [AST+232]
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
.Lt_0323:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTOPTIMIZETREE, .-ASTOPTIMIZETREE
.balign 16
fb_ctor__astzoptimize:
.type fb_ctor__astzoptimize, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__astzoptimize, .-fb_ctor__astzoptimize
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
HOPTCONSTREMNEG:
.type HOPTCONSTREMNEG, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
.Lt_0057:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-4], ebx
cmp dword ptr [ebp-4], 0
je .Lt_005A
push dword ptr [ebp-4]
call HOPTCONSTREMNEG
add esp, 4
.Lt_005A:
.Lt_0059:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+60]
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
je .Lt_005C
push dword ptr [ebp-8]
call HOPTCONSTREMNEG
add esp, 4
.Lt_005C:
.Lt_005B:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
cmp ebx, 3
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
je .Lt_005D
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+20]
cmp eax, 28
sete al
shr eax, 1
sbb eax, eax
test eax, eax
setne al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-16], eax
jmp .Lt_032E
.Lt_005D:
mov dword ptr [ebp-16], 0
.Lt_032E:
cmp dword ptr [ebp-16], 0
je .Lt_0060
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-4], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+60]
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax]
cmp ebx, 4
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
je .Lt_0061
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebx+20]
cmp eax, 54
sete al
shr eax, 1
sbb eax, eax
test eax, eax
setne al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-20], eax
jmp .Lt_032F
.Lt_0061:
mov dword ptr [ebp-20], 0
.Lt_032F:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax]
cmp ebx, 16
sete bl
shr ebx, 1
sbb ebx, ebx
and ebx, dword ptr [ebp-20]
je .Lt_0064
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+56]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-12], ebx
mov ebx, dword ptr [ebp-12]
cmp dword ptr [ebx], 17
jne .Lt_0066
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+20], 29
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp-8]
mov dword ptr [ebx+56], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-12]
mov dword ptr [eax+60], ebx
push dword ptr [ebp-4]
call ASTDELNODE
add esp, 4
.Lt_0066:
.Lt_0065:
.Lt_0064:
.Lt_0063:
.Lt_0060:
.Lt_005F:
.Lt_0058:
pop ebx
mov esp, ebp
pop ebp
ret
.size HOPTCONSTREMNEG, .-HOPTCONSTREMNEG
.balign 16
HCONSTACCUMADDSUB:
.type HCONSTACCUMADDSUB, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
mov dword ptr [ebp-4], 0
.Lt_0067:
cmp dword ptr [ebp+8], 0
jne .Lt_006A
mov dword ptr [ebp-4], 0
jmp .Lt_0068
.Lt_006A:
.Lt_0069:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 3
je .Lt_006C
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
jmp .Lt_0068
.Lt_006C:
.Lt_006B:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+20]
mov dword ptr [ebp-20], ebx
cmp dword ptr [ebp-20], 28
je .Lt_006F
.Lt_0070:
cmp dword ptr [ebp-20], 29
jne .Lt_006E
.Lt_006F:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+56]
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+60]
mov dword ptr [ebp-12], ebx
cmp dword ptr [ebp-20], 29
jne .Lt_0072
mov ebx, dword ptr [ebp+16]
neg ebx
mov dword ptr [ebp-24], ebx
jmp .Lt_0071
.Lt_0072:
mov ebx, dword ptr [ebp+16]
mov dword ptr [ebp-24], ebx
.Lt_0071:
mov ebx, dword ptr [ebp-12]
cmp dword ptr [ebx], 16
jne .Lt_0074
mov ebx, dword ptr [ebp+12]
cmp dword ptr [ebx], 0
je .Lt_0076
cmp dword ptr [ebp-24], 0
jge .Lt_0078
cmp dword ptr [ebp-20], 28
jne .Lt_007A
mov dword ptr [ebp-20], 29
jmp .Lt_0079
.Lt_007A:
mov dword ptr [ebp-20], 28
.Lt_0079:
.Lt_0078:
.Lt_0077:
push 1
push 0
push dword ptr [ebp-12]
mov ebx, dword ptr [ebp+12]
push dword ptr [ebx]
push dword ptr [ebp-20]
call ASTNEWBOP
add esp, 20
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx], eax
jmp .Lt_0075
.Lt_0076:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [ebp-12]
mov dword ptr [eax], ebx
cmp dword ptr [ebp-24], 0
jge .Lt_007C
mov ebx, dword ptr [ebp+12]
push dword ptr [ebx]
push 54
call ASTNEWUOP
add esp, 8
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx], eax
.Lt_007C:
.Lt_007B:
.Lt_0075:
push dword ptr [ebp+8]
call ASTDELNODE
add esp, 4
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call HCONSTACCUMADDSUB
add esp, 12
mov dword ptr [ebp+8], eax
jmp .Lt_0073
.Lt_0074:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call HCONSTACCUMADDSUB
add esp, 12
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+56], eax
push dword ptr [ebp-24]
push dword ptr [ebp+12]
push dword ptr [ebp-12]
call HCONSTACCUMADDSUB
add esp, 12
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+60], eax
.Lt_0073:
.Lt_006E:
.Lt_006D:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
.Lt_0068:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HCONSTACCUMADDSUB, .-HCONSTACCUMADDSUB
.balign 16
HCONSTACCUMMUL:
.type HCONSTACCUMMUL, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
mov dword ptr [ebp-4], 0
.Lt_007D:
cmp dword ptr [ebp+8], 0
jne .Lt_0080
mov dword ptr [ebp-4], 0
jmp .Lt_007E
.Lt_0080:
.Lt_007F:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
cmp ebx, 3
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
je .Lt_0081
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+20]
cmp eax, 30
sete al
shr eax, 1
sbb eax, eax
test eax, eax
setne al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-20], eax
jmp .Lt_0337
.Lt_0081:
mov dword ptr [ebp-20], 0
.Lt_0337:
cmp dword ptr [ebp-20], 0
je .Lt_0084
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-8], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+60]
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp-12]
cmp dword ptr [eax], 16
jne .Lt_0086
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax], 0
je .Lt_0088
push 1
push 0
push dword ptr [ebp-12]
mov eax, dword ptr [ebp+12]
push dword ptr [eax]
push 30
call ASTNEWBOP
add esp, 20
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx], eax
jmp .Lt_0087
.Lt_0088:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [ebp-12]
mov dword ptr [eax], ebx
.Lt_0087:
push dword ptr [ebp+8]
call ASTDELNODE
add esp, 4
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call HCONSTACCUMMUL
add esp, 8
mov dword ptr [ebp+8], eax
jmp .Lt_0085
.Lt_0086:
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call HCONSTACCUMMUL
add esp, 8
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+56], eax
push dword ptr [ebp+12]
push dword ptr [ebp-12]
call HCONSTACCUMMUL
add esp, 8
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+60], eax
.Lt_0085:
.Lt_0084:
.Lt_0083:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
.Lt_007E:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HCONSTACCUMMUL, .-HCONSTACCUMMUL
.balign 16
HOPTCONSTACCUM1:
.type HOPTCONSTACCUM1, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
mov dword ptr [ebp-4], 0
.Lt_0089:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+56], 0
je .Lt_008C
mov eax, dword ptr [ebp+8]
push dword ptr [eax+56]
call HOPTCONSTACCUM1
add esp, 4
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+56], eax
.Lt_008C:
.Lt_008B:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+60], 0
je .Lt_008E
mov eax, dword ptr [ebp+8]
push dword ptr [eax+60]
call HOPTCONSTACCUM1
add esp, 4
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+60], eax
.Lt_008E:
.Lt_008D:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 3
jne .Lt_0090
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+60]
mov dword ptr [ebp-12], ebx
mov ebx, dword ptr [ebp-12]
cmp dword ptr [ebx], 16
jne .Lt_0092
mov dword ptr [ebp-16], 0
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+20]
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 28
je .Lt_0095
.Lt_0096:
cmp dword ptr [ebp-20], 29
jne .Lt_0094
.Lt_0095:
push 1
lea eax, [ebp-16]
push eax
push dword ptr [ebp+8]
call HCONSTACCUMADDSUB
add esp, 12
mov dword ptr [ebp+8], eax
cmp dword ptr [ebp-16], 0
je .Lt_0098
push 1
push 0
push dword ptr [ebp-16]
push dword ptr [ebp+8]
push dword ptr [ebp-20]
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp+8], eax
.Lt_0098:
.Lt_0097:
jmp .Lt_0093
.Lt_0094:
cmp dword ptr [ebp-20], 30
jne .Lt_0099
.Lt_009A:
lea eax, [ebp-16]
push eax
push dword ptr [ebp+8]
call HCONSTACCUMMUL
add esp, 8
mov dword ptr [ebp+8], eax
cmp dword ptr [ebp-16], 0
je .Lt_009C
push 1
push 0
push dword ptr [ebp-16]
push dword ptr [ebp+8]
push 30
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp+8], eax
.Lt_009C:
.Lt_009B:
.Lt_0099:
.Lt_0093:
.Lt_0092:
.Lt_0091:
.Lt_0090:
.Lt_008F:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
.Lt_008A:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HOPTCONSTACCUM1, .-HOPTCONSTACCUM1
.balign 16
HOPTCONSTACCUM2:
.type HOPTCONSTACCUM2, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
mov dword ptr [ebp-4], 0
.Lt_009D:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+56], 0
je .Lt_00A0
mov eax, dword ptr [ebp+8]
push dword ptr [eax+56]
call HOPTCONSTACCUM2
add esp, 4
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+56], eax
.Lt_00A0:
.Lt_009F:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+60], 0
je .Lt_00A2
mov eax, dword ptr [ebp+8]
push dword ptr [eax+60]
call HOPTCONSTACCUM2
add esp, 4
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+60], eax
.Lt_00A2:
.Lt_00A1:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 3
jne .Lt_00A4
mov dword ptr [ebp-16], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+20]
mov dword ptr [ebp-20], ebx
cmp dword ptr [ebp-20], 28
jne .Lt_00A7
.Lt_00A8:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 511
mov ebx, eax
mov dword ptr [ebp-24], ebx
jmp .Lt_00AA
.Lt_00AC:
jmp .Lt_00A9
.Lt_00AD:
push 1
lea ebx, [ebp-16]
push ebx
push dword ptr [ebp+8]
call HCONSTACCUMADDSUB
add esp, 12
mov dword ptr [ebp+8], eax
cmp dword ptr [ebp-16], 0
je .Lt_00AF
push 1
push 0
push dword ptr [ebp-16]
push dword ptr [ebp+8]
push 28
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp+8], eax
.Lt_00AF:
.Lt_00AE:
jmp .Lt_00A9
.Lt_00AA:
mov eax, dword ptr [ebp-24]
add eax, 4294967290
cmp eax, 11
ja .Lt_00AD
mov eax, dword ptr [ebp-24]
jmp dword ptr [.LT_00B0+eax*4-24]
.LT_00B0:
.int .Lt_00AC
.int .Lt_00AD
.int .Lt_00AD
.int .Lt_00AD
.int .Lt_00AD
.int .Lt_00AD
.int .Lt_00AD
.int .Lt_00AD
.int .Lt_00AD
.int .Lt_00AD
.int .Lt_00AC
.int .Lt_00AC
.Lt_00A9:
jmp .Lt_00A5
.Lt_00A7:
cmp dword ptr [ebp-20], 30
jne .Lt_00B1
.Lt_00B2:
lea eax, [ebp-16]
push eax
push dword ptr [ebp+8]
call HCONSTACCUMMUL
add esp, 8
mov dword ptr [ebp+8], eax
cmp dword ptr [ebp-16], 0
je .Lt_00B4
push 1
push 0
push dword ptr [ebp-16]
push dword ptr [ebp+8]
push 30
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp+8], eax
.Lt_00B4:
.Lt_00B3:
.Lt_00B1:
.Lt_00A5:
.Lt_00A4:
.Lt_00A3:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
.Lt_009E:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HOPTCONSTACCUM2, .-HOPTCONSTACCUM2
.balign 16
HCONSTDISTMUL:
.type HCONSTDISTMUL, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
mov dword ptr [ebp-4], 0
.Lt_00B5:
cmp dword ptr [ebp+8], 0
jne .Lt_00B8
mov dword ptr [ebp-4], 0
jmp .Lt_00B6
.Lt_00B8:
.Lt_00B7:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
cmp ebx, 3
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
je .Lt_00B9
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+20]
cmp eax, 28
sete al
shr eax, 1
sbb eax, eax
test eax, eax
setne al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-20], eax
jmp .Lt_033B
.Lt_00B9:
mov dword ptr [ebp-20], 0
.Lt_033B:
cmp dword ptr [ebp-20], 0
je .Lt_00BC
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-8], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+60]
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp-12]
cmp dword ptr [eax], 16
jne .Lt_00BE
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax], 0
je .Lt_00C0
push 1
push 0
push dword ptr [ebp-12]
mov eax, dword ptr [ebp+12]
push dword ptr [eax]
push 28
call ASTNEWBOP
add esp, 20
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx], eax
jmp .Lt_00BF
.Lt_00C0:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [ebp-12]
mov dword ptr [eax], ebx
.Lt_00BF:
push dword ptr [ebp+8]
call ASTDELNODE
add esp, 4
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call HCONSTDISTMUL
add esp, 8
mov dword ptr [ebp+8], eax
jmp .Lt_00BD
.Lt_00BE:
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call HCONSTDISTMUL
add esp, 8
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+56], eax
push dword ptr [ebp+12]
push dword ptr [ebp-12]
call HCONSTDISTMUL
add esp, 8
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+60], eax
.Lt_00BD:
.Lt_00BC:
.Lt_00BB:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
.Lt_00B6:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HCONSTDISTMUL, .-HCONSTDISTMUL
.balign 16
HOPTCONSTDISTMUL:
.type HOPTCONSTDISTMUL, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_00C1:
cmp dword ptr [ebp+8], 0
jne .Lt_00C4
mov dword ptr [ebp-4], 0
jmp .Lt_00C2
.Lt_00C4:
.Lt_00C3:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+56], 0
je .Lt_00C6
mov eax, dword ptr [ebp+8]
push dword ptr [eax+56]
call HOPTCONSTDISTMUL
add esp, 4
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+56], eax
.Lt_00C6:
.Lt_00C5:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+60], 0
je .Lt_00C8
mov eax, dword ptr [ebp+8]
push dword ptr [eax+60]
call HOPTCONSTDISTMUL
add esp, 4
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+60], eax
.Lt_00C8:
.Lt_00C7:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 3
jne .Lt_00CA
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+60]
cmp dword ptr [ebx], 16
jne .Lt_00CC
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx+20], 30
jne .Lt_00CE
mov dword ptr [ebp-8], 0
lea ebx, [ebp-8]
push ebx
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+56]
call HCONSTDISTMUL
add esp, 8
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+56], eax
cmp dword ptr [ebp-8], 0
je .Lt_00D0
push 1
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax+60]
call ASTCLONETREE
add esp, 4
push eax
push dword ptr [ebp-8]
push 30
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp-8], eax
push 1
push 0
push dword ptr [ebp-8]
push dword ptr [ebp+8]
push 28
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp+8], eax
.Lt_00D0:
.Lt_00CF:
.Lt_00CE:
.Lt_00CD:
.Lt_00CC:
.Lt_00CB:
.Lt_00CA:
.Lt_00C9:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
.Lt_00C2:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HOPTCONSTDISTMUL, .-HOPTCONSTDISTMUL
.balign 16
HOPTCONSTIDXMULT:
.type HOPTCONSTIDXMULT, @function
push ebp
mov ebp, esp
sub esp, 36
push ebx
.Lt_00D1:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-12], ebx
mov ebx, dword ptr [ebp-12]
mov eax, dword ptr [ebx]
cmp eax, 3
sete al
shr eax, 1
sbb eax, eax
test eax, eax
je .Lt_00D3
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax+20]
cmp ebx, 30
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-16], ebx
jmp .Lt_033F
.Lt_00D3:
mov dword ptr [ebp-16], 0
.Lt_033F:
cmp dword ptr [ebp-16], 0
je .Lt_00D6
mov ebx, dword ptr [ebp-12]
mov eax, dword ptr [ebx+60]
mov dword ptr [ebp-28], eax
mov eax, dword ptr [ebp-28]
cmp dword ptr [eax], 16
jne .Lt_00D8
mov eax, dword ptr [IR+284]
and eax, 65536
test eax, eax
je .Lt_00DA
mov eax, dword ptr [ebp-28]
mov ebx, dword ptr [eax+20]
mov dword ptr [ebp-8], ebx
mov ebx, dword ptr [ebp-8]
cmp ebx, 1
setge bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp-8]
cmp eax, 9
setle al
shr eax, 1
sbb eax, eax
and ebx, eax
je .Lt_00DC
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-32], eax
jmp .Lt_00DE
.Lt_00E0:
mov dword ptr [ebp-4], -1
jmp .Lt_00DD
.Lt_00E1:
mov dword ptr [ebp-4], -1
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+60]
mov eax, dword ptr [ebx+12]
mov dword ptr [ebp-36], eax
mov eax, dword ptr [ebp-36]
mov ebx, dword ptr [eax+4]
and ebx, 458752
test ebx, ebx
je .Lt_00E3
mov dword ptr [ebp-4], 0
jmp .Lt_00E2
.Lt_00E3:
mov ebx, dword ptr [ebp-36]
mov eax, dword ptr [ebx+4]
and eax, 128
test eax, eax
je .Lt_00E4
mov eax, dword ptr [ebp-36]
mov ebx, dword ptr [eax+4]
and ebx, 2
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_00E6
mov dword ptr [ebp-4], 0
.Lt_00E6:
.Lt_00E5:
.Lt_00E4:
.Lt_00E2:
jmp .Lt_00DD
.Lt_00E7:
mov dword ptr [ebp-4], 0
jmp .Lt_00DD
.Lt_00DE:
mov ebx, dword ptr [ebp-32]
add ebx, 4294967295
cmp ebx, 8
ja .Lt_00E7
mov ebx, dword ptr [ebp-32]
jmp dword ptr [.LT_00E8+ebx*4-4]
.LT_00E8:
.int .Lt_00E0
.int .Lt_00E0
.int .Lt_00E1
.int .Lt_00E0
.int .Lt_00E1
.int .Lt_00E7
.int .Lt_00E7
.int .Lt_00E0
.int .Lt_00E1
.Lt_00DD:
cmp dword ptr [ebp-4], 0
je .Lt_00EA
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp-8]
mov dword ptr [ebx+28], eax
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [eax+56]
mov dword ptr [ebx+56], ecx
push dword ptr [ebp-28]
call ASTDELNODE
add esp, 4
push dword ptr [ebp-12]
call ASTDELNODE
add esp, 4
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ecx+56]
mov dword ptr [ebp-12], ebx
.Lt_00EA:
.Lt_00E9:
.Lt_00DC:
.Lt_00DB:
.Lt_00DA:
.Lt_00D9:
.Lt_00D8:
.Lt_00D7:
.Lt_00D6:
.Lt_00D5:
mov ebx, dword ptr [ebp-12]
mov ecx, dword ptr [ebx+4]
and ecx, 511
and ecx, 480
je .Lt_00EB
mov dword ptr [ebp-20], 22
jmp .Lt_0340
.Lt_00EB:
mov ecx, dword ptr [ebp-12]
mov ebx, dword ptr [ecx+4]
and ebx, 511
and ebx, 31
mov dword ptr [ebp-20], ebx
.Lt_0340:
mov ebx, dword ptr [ebp-20]
imul ebx, 28
mov ecx, dword ptr [SYMB_DTYPETB+ebx]
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
mov dword ptr [ebp-28], ecx
mov ecx, dword ptr [ebp-12]
mov ebx, dword ptr [ecx+4]
and ebx, 511
and ebx, 480
je .Lt_00ED
mov dword ptr [ebp-24], 22
jmp .Lt_0341
.Lt_00ED:
mov ebx, dword ptr [ebp-12]
mov ecx, dword ptr [ebx+4]
and ecx, 511
and ecx, 31
mov dword ptr [ebp-24], ecx
.Lt_0341:
mov ecx, dword ptr [ebp-24]
imul ecx, 28
mov ebx, dword ptr [ENV+236]
cmp ebx, dword ptr [SYMB_DTYPETB+ecx+4]
setne bl
shr ebx, 1
sbb ebx, ebx
or ebx, dword ptr [ebp-28]
je .Lt_00F0
push 0
push 0
push dword ptr [ebp-12]
push 0
push 7
call ASTNEWCONV
add esp, 20
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+56], eax
.Lt_00F0:
.Lt_00EF:
.Lt_00D2:
pop ebx
mov esp, ebp
pop ebp
ret
.size HOPTCONSTIDXMULT, .-HOPTCONSTIDXMULT
.balign 16
ASTINCOFFSET:
.type ASTINCOFFSET, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_00F1:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-8], ebx
jmp .Lt_00F4
.Lt_00F6:
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebp+12]
mov eax, dword ptr [ebp+16]
add dword ptr [ebx+20], ecx
adc dword ptr [ebx+24], eax
mov dword ptr [ebp-4], -1
jmp .Lt_00F3
.Lt_00F7:
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebp+16]
add dword ptr [ecx+20], ebx
adc dword ptr [ecx+24], eax
mov dword ptr [ebp-4], -1
jmp .Lt_00F3
.Lt_00F8:
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebp+12]
mov eax, dword ptr [ebp+16]
add dword ptr [ebx+20], ecx
adc dword ptr [ebx+24], eax
mov dword ptr [ebp-4], -1
jmp .Lt_00F3
.Lt_00F9:
mov ecx, dword ptr [ebp+8]
cmp dword ptr [ecx+20], 0
je .Lt_00FB
push dword ptr [ebp+16]
push dword ptr [ebp+12]
mov ecx, dword ptr [ebp+8]
push dword ptr [ecx+56]
call ASTINCOFFSET
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_00FA
.Lt_00FB:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+60]
call ASTINCOFFSET
add esp, 12
mov dword ptr [ebp-4], eax
.Lt_00FA:
jmp .Lt_00F3
.Lt_00FC:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+56]
call ASTINCOFFSET
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_00F3
.Lt_00FD:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+20], 0
jne .Lt_00FF
push dword ptr [ebp+16]
push dword ptr [ebp+12]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+56]
call ASTINCOFFSET
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_00FE
.Lt_00FF:
mov dword ptr [ebp-4], 0
.Lt_00FE:
jmp .Lt_00F3
.Lt_0100:
mov dword ptr [ebp-4], 0
jmp .Lt_00F3
.Lt_00F4:
mov eax, dword ptr [ebp-8]
add eax, 4294967291
cmp eax, 21
ja .Lt_0100
mov eax, dword ptr [ebp-8]
jmp dword ptr [.LT_0101+eax*4-20]
.LT_0101:
.int .Lt_00FD
.int .Lt_0100
.int .Lt_0100
.int .Lt_0100
.int .Lt_0100
.int .Lt_0100
.int .Lt_0100
.int .Lt_0100
.int .Lt_0100
.int .Lt_0100
.int .Lt_00F9
.int .Lt_0100
.int .Lt_00F6
.int .Lt_00F7
.int .Lt_00FC
.int .Lt_00F8
.int .Lt_0100
.int .Lt_0100
.int .Lt_0100
.int .Lt_0100
.int .Lt_0100
.int .Lt_00FC
.Lt_00F3:
.Lt_00F2:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTINCOFFSET, .-ASTINCOFFSET
.balign 16
HOPTDEREFADDR:
.type HOPTDEREFADDR, @function
push ebp
mov ebp, esp
sub esp, 28
push ebx
push esi
mov dword ptr [ebp-4], 0
.Lt_0102:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-8], ebx
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx]
mov dword ptr [ebp-28], eax
cmp dword ptr [ebp-28], 23
jne .Lt_0106
.Lt_0107:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp-8]
push dword ptr [ebx+56]
mov ebx, eax
call ASTGETOFFSETCHILDOFS
add esp, 4
mov esi, dword ptr [ebx+20]
mov ecx, dword ptr [ebx+24]
sub esi, eax
sbb ecx, edx
mov dword ptr [ebp-16], esi
mov dword ptr [ebp-12], ecx
jmp .Lt_0104
.Lt_0106:
cmp dword ptr [ebp-28], 6
jne .Lt_0108
.Lt_0109:
jmp .Lt_0104
.Lt_0108:
mov esi, dword ptr [ebp+8]
mov dword ptr [ebp-4], esi
jmp .Lt_0103
.Lt_010A:
.Lt_0104:
mov esi, dword ptr [ebp+8]
mov eax, dword ptr [esi+20]
mov ecx, dword ptr [esi+24]
add dword ptr [ebp-16], eax
adc dword ptr [ebp-12], ecx
push dword ptr [ebp-12]
push dword ptr [ebp-16]
mov eax, dword ptr [ebp-8]
push dword ptr [eax+56]
call ASTINCOFFSET
add esp, 12
test eax, eax
jne .Lt_010C
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
jmp .Lt_0103
.Lt_010C:
.Lt_010B:
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+4]
mov dword ptr [ebp-20], ecx
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ecx+8]
mov dword ptr [ebp-24], eax
push dword ptr [ebp+8]
call ASTDELNODE
add esp, 4
mov eax, dword ptr [ebp-8]
mov ecx, dword ptr [eax+56]
mov dword ptr [ebp+8], ecx
push dword ptr [ebp-8]
call ASTDELNODE
add esp, 4
push dword ptr [ebp-24]
push dword ptr [ebp-20]
push dword ptr [ebp+8]
call ASTSETTYPE
add esp, 12
mov ecx, dword ptr [ebp+8]
mov dword ptr [ebp-4], ecx
.Lt_0103:
mov eax, dword ptr [ebp-4]
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size HOPTDEREFADDR, .-HOPTDEREFADDR
.balign 16
HOPTCONSTIDX:
.type HOPTCONSTIDX, @function
push ebp
mov ebp, esp
sub esp, 28
push ebx
mov dword ptr [ebp-4], 0
.Lt_010D:
cmp dword ptr [ebp+8], 0
jne .Lt_0110
mov dword ptr [ebp-4], 0
jmp .Lt_010E
.Lt_0110:
.Lt_010F:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-8], ebx
cmp dword ptr [ebp-8], 0
je .Lt_0112
push dword ptr [ebp-8]
call HOPTCONSTIDX
add esp, 4
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+56], eax
.Lt_0112:
.Lt_0111:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+60]
mov dword ptr [ebp-12], ebx
cmp dword ptr [ebp-12], 0
je .Lt_0114
push dword ptr [ebp-12]
call HOPTCONSTIDX
add esp, 4
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+60], eax
.Lt_0114:
.Lt_0113:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-28], ebx
cmp dword ptr [ebp-28], 18
je .Lt_0118
.Lt_0119:
cmp dword ptr [ebp-28], 20
jne .Lt_0117
.Lt_0118:
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx+56], 0
je .Lt_011B
mov dword ptr [ebp-16], 0
push 1
lea ebx, [ebp-16]
push ebx
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+56]
call HCONSTACCUMADDSUB
add esp, 12
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+56], eax
cmp dword ptr [ebp-16], 0
je .Lt_011D
push dword ptr [ebp-16]
call ASTCONSTFLUSHTOINT
add esp, 4
mov dword ptr [ebp-24], eax
mov dword ptr [ebp-20], edx
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 18
jne .Lt_011F
mov eax, dword ptr [ebp+8]
mov edx, dword ptr [ebp+8]
mov ecx, dword ptr [edx+28]
mov ebx, ecx
sar ebx, 31
push dword ptr [ebp-20]
push dword ptr [ebp-24]
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
add dword ptr [eax+20], ecx
adc dword ptr [eax+24], ebx
jmp .Lt_011E
.Lt_011F:
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ebp-24]
mov ebx, dword ptr [ebp-20]
add dword ptr [ecx+20], eax
adc dword ptr [ecx+24], ebx
.Lt_011E:
.Lt_011D:
.Lt_011C:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
cmp dword ptr [ebx], 16
jne .Lt_0121
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+56]
call ASTCONSTFLUSHTOINT
add esp, 4
mov dword ptr [ebp-24], eax
mov dword ptr [ebp-20], edx
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+56], 0
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 18
jne .Lt_0123
mov eax, dword ptr [ebp+8]
mov edx, dword ptr [ebp+8]
mov ecx, dword ptr [edx+28]
mov ebx, ecx
sar ebx, 31
push dword ptr [ebp-20]
push dword ptr [ebp-24]
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
add dword ptr [eax+20], ecx
adc dword ptr [eax+24], ebx
jmp .Lt_0122
.Lt_0123:
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ebp-24]
mov ebx, dword ptr [ebp-20]
add dword ptr [ecx+20], eax
adc dword ptr [ecx+24], ebx
.Lt_0122:
jmp .Lt_0120
.Lt_0121:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 18
jne .Lt_0125
push dword ptr [ebp+8]
call HOPTCONSTIDXMULT
add esp, 4
jmp .Lt_0124
.Lt_0125:
push dword ptr [ebp+8]
call HOPTDEREFADDR
add esp, 4
mov dword ptr [ebp+8], eax
.Lt_0124:
.Lt_0120:
.Lt_011B:
.Lt_011A:
.Lt_0117:
.Lt_0115:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
.Lt_010E:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HOPTCONSTIDX, .-HOPTCONSTIDX
.balign 16
HMERGENESTEDFIELDS:
.type HMERGENESTEDFIELDS, @function
push ebp
mov ebp, esp
sub esp, 28
push ebx
mov dword ptr [ebp-4], 0
.Lt_0126:
cmp dword ptr [ebp+8], 0
jne .Lt_0129
mov dword ptr [ebp-4], 0
jmp .Lt_0127
.Lt_0129:
.Lt_0128:
mov eax, dword ptr [ebp+8]
push dword ptr [eax+56]
call HMERGENESTEDFIELDS
add esp, 4
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+56], eax
mov eax, dword ptr [ebp+8]
push dword ptr [eax+60]
call HMERGENESTEDFIELDS
add esp, 4
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+60], eax
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 19
jne .Lt_012B
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-8], ebx
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx+56]
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax]
cmp ebx, 20
sete bl
shr ebx, 1
sbb ebx, ebx
cmp dword ptr [ebp-12], 0
setne al
shr eax, 1
sbb eax, eax
and ebx, eax
je .Lt_012D
mov eax, dword ptr [ebp-12]
cmp dword ptr [eax], 3
jne .Lt_012F
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-16], ebx
mov ebx, dword ptr [ebp-16]
cmp dword ptr [ebx], 6
jne .Lt_0131
mov ebx, dword ptr [ebp-16]
mov eax, dword ptr [ebx+56]
mov dword ptr [ebp-20], eax
mov eax, dword ptr [ebp-20]
cmp dword ptr [eax], 19
jne .Lt_0133
mov eax, dword ptr [ebp-20]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-24], ebx
mov ebx, dword ptr [ebp-24]
mov eax, dword ptr [ebx+56]
mov dword ptr [ebp-28], eax
mov eax, dword ptr [ebp-24]
mov ebx, dword ptr [eax]
cmp ebx, 20
sete bl
shr ebx, 1
sbb ebx, ebx
cmp dword ptr [ebp-28], 0
setne al
shr eax, 1
sbb eax, eax
and ebx, eax
je .Lt_0135
push 1
push 0
mov eax, dword ptr [ebp-12]
push dword ptr [eax+60]
push dword ptr [ebp-28]
push 28
call ASTNEWBOP
add esp, 20
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+56], eax
push dword ptr [ebp-12]
call ASTDELNODE
add esp, 4
push dword ptr [ebp-16]
call ASTDELNODE
add esp, 4
push dword ptr [ebp-20]
call ASTDELNODE
add esp, 4
push dword ptr [ebp-24]
call ASTDELNODE
add esp, 4
.Lt_0135:
.Lt_0134:
.Lt_0133:
.Lt_0132:
.Lt_0131:
.Lt_0130:
.Lt_012F:
.Lt_012E:
.Lt_012D:
.Lt_012C:
.Lt_012B:
.Lt_012A:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
.Lt_0127:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HMERGENESTEDFIELDS, .-HMERGENESTEDFIELDS
.balign 16
HOPTASSOCADD:
.type HOPTASSOCADD, @function
push ebp
mov ebp, esp
sub esp, 28
push ebx
mov dword ptr [ebp-4], 0
.Lt_0136:
cmp dword ptr [ebp+8], 0
jne .Lt_0139
mov dword ptr [ebp-4], 0
jmp .Lt_0137
.Lt_0139:
.Lt_0138:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 3
jne .Lt_013B
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+20]
mov dword ptr [ebp-20], ebx
cmp dword ptr [ebp-20], 28
je .Lt_013E
.Lt_013F:
cmp dword ptr [ebp-20], 29
jne .Lt_013D
.Lt_013E:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 511
mov dword ptr [ebp-28], eax
cmp dword ptr [ebp-28], 16
je .Lt_0143
.Lt_0144:
cmp dword ptr [ebp-28], 17
je .Lt_0143
.Lt_0145:
cmp dword ptr [ebp-28], 6
jne .Lt_0142
.Lt_0143:
jmp .Lt_0140
.Lt_0142:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+60]
mov dword ptr [ebp-12], ebx
mov ebx, dword ptr [ebp-12]
cmp dword ptr [ebx], 3
jne .Lt_0148
mov ebx, dword ptr [ebp-12]
mov eax, dword ptr [ebx+20]
mov dword ptr [ebp-24], eax
cmp dword ptr [ebp-24], 28
je .Lt_014B
.Lt_014C:
cmp dword ptr [ebp-24], 29
jne .Lt_014A
.Lt_014B:
cmp dword ptr [ebp-20], 29
jne .Lt_014E
cmp dword ptr [ebp-24], 29
jne .Lt_0150
mov dword ptr [ebp-20], 28
jmp .Lt_014F
.Lt_0150:
mov dword ptr [ebp-24], 29
.Lt_014F:
jmp .Lt_014D
.Lt_014E:
cmp dword ptr [ebp-24], 29
jne .Lt_0152
mov dword ptr [ebp-20], 29
mov dword ptr [ebp-24], 28
.Lt_0152:
.Lt_0151:
.Lt_014D:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-16], eax
push 1
push 0
mov eax, dword ptr [ebp-12]
push dword ptr [eax+60]
push 1
push 0
mov eax, dword ptr [ebp-12]
push dword ptr [eax+56]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+56]
push dword ptr [ebp-24]
call ASTNEWBOP
add esp, 20
push eax
push dword ptr [ebp-20]
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp+8], eax
push dword ptr [ebp-12]
call ASTDELNODE
add esp, 4
push dword ptr [ebp-16]
call ASTDELNODE
add esp, 4
.Lt_014A:
.Lt_0149:
.Lt_0148:
.Lt_0147:
.Lt_0146:
.Lt_0140:
.Lt_013D:
.Lt_013C:
.Lt_013B:
.Lt_013A:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-8], ebx
cmp dword ptr [ebp-8], 0
je .Lt_0154
push dword ptr [ebp-8]
call HOPTASSOCADD
add esp, 4
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+56], eax
.Lt_0154:
.Lt_0153:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+60]
mov dword ptr [ebp-12], ebx
cmp dword ptr [ebp-12], 0
je .Lt_0156
push dword ptr [ebp-12]
call HOPTASSOCADD
add esp, 4
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+60], eax
.Lt_0156:
.Lt_0155:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
.Lt_0137:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HOPTASSOCADD, .-HOPTASSOCADD
.balign 16
HOPTASSOCMUL:
.type HOPTASSOCMUL, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
mov dword ptr [ebp-4], 0
.Lt_0157:
cmp dword ptr [ebp+8], 0
jne .Lt_015A
mov dword ptr [ebp-4], 0
jmp .Lt_0158
.Lt_015A:
.Lt_0159:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
cmp ebx, 3
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
je .Lt_015B
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+20]
cmp eax, 30
sete al
shr eax, 1
sbb eax, eax
test eax, eax
setne al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-20], eax
jmp .Lt_034F
.Lt_015B:
mov dword ptr [ebp-20], 0
.Lt_034F:
cmp dword ptr [ebp-20], 0
je .Lt_015E
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+60]
mov dword ptr [ebp-12], ebx
mov ebx, dword ptr [ebp-12]
mov eax, dword ptr [ebx]
cmp eax, 3
sete al
shr eax, 1
sbb eax, eax
test eax, eax
je .Lt_015F
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax+20]
cmp ebx, 30
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-24], ebx
jmp .Lt_0350
.Lt_015F:
mov dword ptr [ebp-24], 0
.Lt_0350:
cmp dword ptr [ebp-24], 0
je .Lt_0162
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebp-16], ebx
push 1
push 0
mov ebx, dword ptr [ebp-12]
push dword ptr [ebx+60]
push 1
push 0
mov ebx, dword ptr [ebp-12]
push dword ptr [ebx+56]
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+56]
push 30
call ASTNEWBOP
add esp, 20
push eax
push 30
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp+8], eax
push dword ptr [ebp-12]
call ASTDELNODE
add esp, 4
push dword ptr [ebp-16]
call ASTDELNODE
add esp, 4
.Lt_0162:
.Lt_0161:
.Lt_015E:
.Lt_015D:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-8], ebx
cmp dword ptr [ebp-8], 0
je .Lt_0164
push dword ptr [ebp-8]
call HOPTASSOCMUL
add esp, 4
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+56], eax
.Lt_0164:
.Lt_0163:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+60]
mov dword ptr [ebp-12], ebx
cmp dword ptr [ebp-12], 0
je .Lt_0166
push dword ptr [ebp-12]
call HOPTASSOCMUL
add esp, 4
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+60], eax
.Lt_0166:
.Lt_0165:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
.Lt_0158:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HOPTASSOCMUL, .-HOPTASSOCMUL
.balign 16
HDIVTOSHIFT_SIGNED:
.type HDIVTOSHIFT_SIGNED, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
push esi
.Lt_0167:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-4], ebx
mov ebx, dword ptr [ebp-4]
cmp dword ptr [ebx], 17
je .Lt_016A
jmp .Lt_0168
.Lt_016A:
.Lt_0169:
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebx+4]
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp-12]
and eax, 480
je .Lt_016B
mov dword ptr [ebp-20], 22
jmp .Lt_0357
.Lt_016B:
mov eax, dword ptr [ebp-12]
and eax, 31
mov dword ptr [ebp-20], eax
.Lt_0357:
mov eax, dword ptr [ebp-20]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+4]
sal ebx, 3
dec ebx
mov dword ptr [ebp-16], ebx
cmp dword ptr [ebp-16], 7
jne .Lt_016E
mov ebx, dword ptr [SYMB_DTYPETB+200]
sal ebx, 3
dec ebx
mov dword ptr [ebp-16], ebx
.Lt_016E:
.Lt_016D:
push dword ptr [ebp-4]
call ASTCLONETREE
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp+12], 1
jne .Lt_0170
push 0
push 1
push 1
push 0
push 1
push 0
push 0
push 7
mov ebx, dword ptr [ebp-16]
mov eax, ebx
sar eax, 31
push eax
push ebx
call ASTNEWCONSTI
add esp, 16
push eax
push 0
push 1
push dword ptr [ebp-4]
push 0
push dword ptr [ebp-12]
call TYPETOUNSIGNED
add esp, 4
push eax
call ASTNEWCONV
add esp, 20
push eax
push 42
call ASTNEWBOP
add esp, 20
push eax
push dword ptr [ebp-8]
push 28
call ASTNEWBOP
add esp, 20
push eax
push 0
push dword ptr [ebp-12]
call ASTNEWCONV
add esp, 20
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+56], eax
jmp .Lt_016F
.Lt_0170:
push 0
push 1
push 1
push 0
push 1
push 0
push 0
push 7
mov eax, 1
mov cl, byte ptr [ebp+12]
sal eax, cl
dec eax
mov ecx, eax
mov ebx, ecx
sar ebx, 31
push ebx
push ecx
call ASTNEWCONSTI
add esp, 16
push eax
push 1
push 0
push 0
push 7
mov ecx, dword ptr [ebp-16]
mov eax, ecx
sar eax, 31
push eax
push ecx
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp-4]
push 42
call ASTNEWBOP
add esp, 20
push eax
push 34
call ASTNEWBOP
add esp, 20
push eax
push dword ptr [ebp-8]
push 28
call ASTNEWBOP
add esp, 20
push eax
push 0
push dword ptr [ebp-12]
call ASTNEWCONV
add esp, 20
mov ecx, dword ptr [ebp+8]
mov dword ptr [ecx+56], eax
.Lt_016F:
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+20], 42
mov ecx, dword ptr [ebp+12]
mov eax, ecx
sar eax, 31
mov ebx, dword ptr [ebp+8]
mov esi, dword ptr [ebx+60]
mov dword ptr [esi+20], ecx
mov dword ptr [esi+24], eax
.Lt_0168:
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size HDIVTOSHIFT_SIGNED, .-HDIVTOSHIFT_SIGNED
.balign 16
HTOPOW2:
.type HTOPOW2, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0171:
mov dword ptr [ebp-8], 1
.Lt_0176:
mov ebx, 1
mov eax, 0
push eax
push ebx
mov ecx, dword ptr [ebp-8]
mov eax, [esp+0]
mov edx, [esp+4]
shld edx, eax, cl
shl  eax, cl
test cl, 32
jz .Lt_0358
mov edx, eax
xor eax, eax
.Lt_0358:
mov [esp+4], edx
mov [esp+0], eax
pop ebx
pop eax
cmp dword ptr [ebp+12], eax
jne .Lt_0178
cmp dword ptr [ebp+8], ebx
jne .Lt_0178
.Lt_0359:
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ebx
jmp .Lt_0172
.Lt_0178:
.Lt_0177:
.Lt_0174:
inc dword ptr [ebp-8]
.Lt_0173:
cmp dword ptr [ebp-8], 63
jle .Lt_0176
.Lt_0175:
mov dword ptr [ebp-4], 0
.Lt_0172:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HTOPOW2, .-HTOPOW2
.balign 16
HOPTTOSHIFT:
.type HOPTTOSHIFT, @function
push ebp
mov ebp, esp
sub esp, 40
push ebx
.Lt_0179:
cmp dword ptr [ebp+8], 0
jne .Lt_017C
jmp .Lt_017A
.Lt_017C:
.Lt_017B:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 3
jne .Lt_017E
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+20]
mov dword ptr [ebp-12], ebx
cmp dword ptr [ebp-12], 30
je .Lt_0181
.Lt_0182:
cmp dword ptr [ebp-12], 32
je .Lt_0181
.Lt_0183:
cmp dword ptr [ebp-12], 33
jne .Lt_0180
.Lt_0181:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+60]
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_0184
mov dword ptr [ebp-28], 22
jmp .Lt_035A
.Lt_0184:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-28], eax
.Lt_035A:
mov eax, dword ptr [ebp-28]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax], 0
je .Lt_0187
jmp .Lt_017F
.Lt_0187:
.Lt_0186:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax]
cmp ebx, 16
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_0189
jmp .Lt_017F
.Lt_0189:
.Lt_0188:
mov ebx, dword ptr [ebp-8]
mov ecx, dword ptr [ebx+20]
mov eax, dword ptr [ebx+24]
mov dword ptr [ebp-24], ecx
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 0
mov ecx, -1
jne .Lt_0364
cmp dword ptr [ebp-24], 0
je .Lt_0363
.Lt_0364:
xor ecx, ecx
.Lt_0363:
cmp dword ptr [ebp-20], 0
mov eax, -1
jl .Lt_0365
jg .Lt_0366
cmp dword ptr [ebp-24], 0
jb .Lt_0365
.Lt_0366:
xor eax, eax
.Lt_0365:
mov dword ptr [ebp-36], ecx
mov dword ptr [ebp-40], eax
mov eax, dword ptr [ebp-8]
mov ecx, dword ptr [eax+4]
and ecx, 480
je .Lt_018A
mov dword ptr [ebp-32], 22
jmp .Lt_035B
.Lt_018A:
mov ecx, dword ptr [ebp-8]
mov eax, dword ptr [ecx+4]
and eax, 31
mov dword ptr [ebp-32], eax
.Lt_035B:
mov eax, dword ptr [ebp-32]
imul eax, 28
mov ecx, dword ptr [SYMB_DTYPETB+eax+8]
and ecx, dword ptr [ebp-40]
or ecx, dword ptr [ebp-36]
je .Lt_018D
jmp .Lt_017F
.Lt_018D:
.Lt_018C:
push dword ptr [ebp-20]
push dword ptr [ebp-24]
call HTOPOW2
add esp, 8
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 0
jg .Lt_018F
jmp .Lt_017F
.Lt_018F:
.Lt_018E:
cmp dword ptr [ebp-12], 30
jne .Lt_0191
.Lt_0192:
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+56]
mov eax, dword ptr [ecx+4]
and eax, 480
je .Lt_0193
mov dword ptr [ebp-36], 22
jmp .Lt_035E
.Lt_0193:
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+56]
mov eax, dword ptr [ecx+4]
and eax, 31
mov dword ptr [ebp-36], eax
.Lt_035E:
mov eax, dword ptr [ebp-36]
imul eax, 28
mov ecx, dword ptr [SYMB_DTYPETB+eax+4]
sal ecx, 3
cmp dword ptr [ebp-16], ecx
jle .Lt_0196
jmp .Lt_017F
.Lt_0196:
.Lt_0195:
mov ecx, dword ptr [ebp+8]
mov dword ptr [ecx+20], 41
mov eax, dword ptr [ebp-16]
mov ecx, eax
sar ecx, 31
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+20], eax
mov dword ptr [ebx+24], ecx
jmp .Lt_0190
.Lt_0191:
cmp dword ptr [ebp-12], 32
jne .Lt_0197
.Lt_0198:
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+56]
mov eax, dword ptr [ecx+4]
and eax, 480
je .Lt_0199
mov dword ptr [ebp-36], 22
jmp .Lt_035F
.Lt_0199:
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+56]
mov eax, dword ptr [ecx+4]
and eax, 31
mov dword ptr [ebp-36], eax
.Lt_035F:
mov eax, dword ptr [ebp-36]
imul eax, 28
mov ecx, dword ptr [SYMB_DTYPETB+eax+4]
sal ecx, 3
cmp dword ptr [ebp-16], ecx
jle .Lt_019C
jmp .Lt_017F
.Lt_019C:
.Lt_019B:
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ecx+56]
mov ecx, dword ptr [eax+4]
and ecx, 480
je .Lt_019D
mov dword ptr [ebp-40], 22
jmp .Lt_0360
.Lt_019D:
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ecx+56]
mov ecx, dword ptr [eax+4]
and ecx, 31
mov dword ptr [ebp-40], ecx
.Lt_0360:
mov ecx, dword ptr [ebp-40]
imul ecx, 28
cmp dword ptr [SYMB_DTYPETB+ecx+8], 0
jne .Lt_01A0
mov ecx, dword ptr [ebp+8]
mov dword ptr [ecx+20], 42
mov eax, dword ptr [ebp-16]
mov ecx, eax
sar ecx, 31
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+20], eax
mov dword ptr [ebx+24], ecx
jmp .Lt_019F
.Lt_01A0:
push dword ptr [ebp-16]
push dword ptr [ebp+8]
call HDIVTOSHIFT_SIGNED
add esp, 8
.Lt_019F:
jmp .Lt_0190
.Lt_0197:
cmp dword ptr [ebp-12], 33
jne .Lt_01A1
.Lt_01A2:
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+56]
mov eax, dword ptr [ecx+4]
and eax, 511
and eax, 480
je .Lt_01A3
mov dword ptr [ebp-36], 22
jmp .Lt_0361
.Lt_01A3:
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+56]
mov eax, dword ptr [ecx+4]
and eax, 511
and eax, 31
mov dword ptr [ebp-36], eax
.Lt_0361:
mov eax, dword ptr [ebp-36]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+8], 0
je .Lt_01A6
jmp .Lt_017F
.Lt_01A6:
.Lt_01A5:
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+20], 34
mov eax, dword ptr [ebp-8]
add dword ptr [eax+20], 4294967295
adc dword ptr [eax+24], 4294967295
.Lt_01A1:
.Lt_0190:
.Lt_0180:
.Lt_017F:
.Lt_017E:
.Lt_017D:
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+56]
mov dword ptr [ebp-4], ecx
cmp dword ptr [ebp-4], 0
je .Lt_01A8
push dword ptr [ebp-4]
call HOPTTOSHIFT
add esp, 4
.Lt_01A8:
.Lt_01A7:
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ecx+60]
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
je .Lt_01AA
push dword ptr [ebp-8]
call HOPTTOSHIFT
add esp, 4
.Lt_01AA:
.Lt_01A9:
.Lt_017A:
pop ebx
mov esp, ebp
pop ebp
ret
.size HOPTTOSHIFT, .-HOPTTOSHIFT
.balign 16
HOPTNULLOP:
.type HOPTNULLOP, @function
push ebp
mov ebp, esp
sub esp, 52
push ebx
mov dword ptr [ebp-4], 0
.Lt_01AB:
cmp dword ptr [ebp+8], 0
jne .Lt_01AE
mov dword ptr [ebp-4], 0
jmp .Lt_01AC
.Lt_01AE:
.Lt_01AD:
mov eax, dword ptr [ebp+8]
push dword ptr [eax+56]
call HOPTNULLOP
add esp, 4
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+56], eax
mov eax, dword ptr [ebp+8]
push dword ptr [eax+60]
call HOPTNULLOP
add esp, 4
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+60], eax
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 3
jne .Lt_01B0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+20]
mov dword ptr [ebp-16], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+56]
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+60]
mov dword ptr [ebp-12], ebx
push dword ptr [ebp-8]
call ASTHASSIDEFX
add esp, 4
mov dword ptr [ebp-28], eax
push dword ptr [ebp-12]
call ASTHASSIDEFX
add esp, 4
mov dword ptr [ebp-32], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 511
and ebx, 480
je .Lt_01B1
mov dword ptr [ebp-36], 22
jmp .Lt_0367
.Lt_01B1:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 511
and eax, 31
mov dword ptr [ebp-36], eax
.Lt_0367:
mov eax, dword ptr [ebp-36]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax], 0
jne .Lt_01B4
mov eax, dword ptr [ebp-12]
cmp dword ptr [eax], 16
jne .Lt_01B6
mov eax, dword ptr [ebp-12]
mov ecx, dword ptr [eax+20]
mov ebx, dword ptr [eax+24]
mov dword ptr [ebp-24], ecx
mov dword ptr [ebp-20], ebx
mov ecx, dword ptr [ebp-16]
mov dword ptr [ebp-40], ecx
jmp .Lt_01B8
.Lt_01BA:
cmp dword ptr [ebp-20], 0
jne .Lt_01BC
cmp dword ptr [ebp-24], 0
jne .Lt_01BC
.Lt_036B:
cmp dword ptr [ebp-28], 0
jne .Lt_01BE
push dword ptr [ebp-8]
call ASTDELTREE
add esp, 4
push dword ptr [ebp+8]
call ASTDELNODE
add esp, 4
mov ecx, dword ptr [ebp-12]
mov dword ptr [ebp-4], ecx
jmp .Lt_01AC
jmp .Lt_01BD
.Lt_01BE:
mov ecx, dword ptr [ebp+8]
mov dword ptr [ecx+20], 34
.Lt_01BD:
jmp .Lt_01BB
.Lt_01BC:
cmp dword ptr [ebp-20], 0
jne .Lt_01BF
cmp dword ptr [ebp-24], 1
jne .Lt_01BF
.Lt_036C:
push dword ptr [ebp-12]
call ASTDELNODE
add esp, 4
push dword ptr [ebp+8]
call ASTDELNODE
add esp, 4
mov ecx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ecx
jmp .Lt_01AC
.Lt_01BF:
.Lt_01BB:
jmp .Lt_01B7
.Lt_01C0:
cmp dword ptr [ebp-20], 0
mov ecx, -1
jne .Lt_036E
cmp dword ptr [ebp-24], 1
je .Lt_036D
.Lt_036E:
xor ecx, ecx
.Lt_036D:
cmp dword ptr [ebp-20], 4294967295
mov ebx, -1
jne .Lt_0370
cmp dword ptr [ebp-24], 4294967295
je .Lt_036F
.Lt_0370:
xor ebx, ebx
.Lt_036F:
mov dword ptr [ebp-48], ecx
mov dword ptr [ebp-52], ebx
mov ebx, dword ptr [ebp-12]
mov ecx, dword ptr [ebx+4]
and ecx, 511
and ecx, 480
je .Lt_01C1
mov dword ptr [ebp-44], 22
jmp .Lt_0368
.Lt_01C1:
mov ecx, dword ptr [ebp-12]
mov ebx, dword ptr [ecx+4]
and ebx, 511
and ebx, 31
mov dword ptr [ebp-44], ebx
.Lt_0368:
mov ebx, dword ptr [ebp-44]
imul ebx, 28
mov ecx, dword ptr [SYMB_DTYPETB+ebx+8]
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
and ecx, dword ptr [ebp-52]
or ecx, dword ptr [ebp-48]
je .Lt_01C4
cmp dword ptr [ebp-28], 0
jne .Lt_01C6
mov ecx, dword ptr [ebp-12]
mov dword ptr [ecx+20], 0
mov dword ptr [ecx+24], 0
push dword ptr [ebp-8]
call ASTDELTREE
add esp, 4
push dword ptr [ebp+8]
call ASTDELNODE
add esp, 4
mov ecx, dword ptr [ebp-12]
mov dword ptr [ebp-4], ecx
jmp .Lt_01AC
.Lt_01C6:
.Lt_01C5:
.Lt_01C4:
.Lt_01C3:
jmp .Lt_01B7
.Lt_01C7:
cmp dword ptr [ebp-20], 0
jne .Lt_01C9
cmp dword ptr [ebp-24], 1
jne .Lt_01C9
.Lt_0372:
push dword ptr [ebp-12]
call ASTDELNODE
add esp, 4
push dword ptr [ebp+8]
call ASTDELNODE
add esp, 4
mov ecx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ecx
jmp .Lt_01AC
.Lt_01C9:
.Lt_01C8:
jmp .Lt_01B7
.Lt_01CA:
cmp dword ptr [ebp-20], 0
jne .Lt_01CC
cmp dword ptr [ebp-24], 0
jne .Lt_01CC
.Lt_0373:
push dword ptr [ebp-12]
call ASTDELNODE
add esp, 4
push dword ptr [ebp+8]
call ASTDELNODE
add esp, 4
mov ecx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ecx
jmp .Lt_01AC
.Lt_01CC:
.Lt_01CB:
jmp .Lt_01B7
.Lt_01CD:
cmp dword ptr [ebp-20], 4294967295
jne .Lt_01CF
cmp dword ptr [ebp-24], 4294967295
jne .Lt_01CF
.Lt_0374:
cmp dword ptr [ebp-28], 0
jne .Lt_01D1
push dword ptr [ebp-8]
call ASTDELTREE
add esp, 4
push dword ptr [ebp+8]
call ASTDELNODE
add esp, 4
mov ecx, dword ptr [ebp-12]
mov dword ptr [ebp-4], ecx
jmp .Lt_01AC
.Lt_01D1:
.Lt_01D0:
.Lt_01CF:
.Lt_01CE:
jmp .Lt_01B7
.Lt_01D2:
cmp dword ptr [ebp-20], 0
jne .Lt_01D4
cmp dword ptr [ebp-24], 0
jne .Lt_01D4
.Lt_0375:
push dword ptr [ebp-12]
call ASTDELNODE
add esp, 4
push dword ptr [ebp+8]
call ASTDELNODE
add esp, 4
mov ecx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ecx
jmp .Lt_01AC
jmp .Lt_01D3
.Lt_01D4:
cmp dword ptr [ebp-20], 4294967295
jne .Lt_01D5
cmp dword ptr [ebp-24], 4294967295
jne .Lt_01D5
.Lt_0376:
cmp dword ptr [ebp-28], 0
jne .Lt_01D7
push dword ptr [ebp-8]
call ASTDELTREE
add esp, 4
push dword ptr [ebp+8]
call ASTDELNODE
add esp, 4
mov ecx, dword ptr [ebp-12]
mov dword ptr [ebp-4], ecx
jmp .Lt_01AC
.Lt_01D7:
.Lt_01D6:
.Lt_01D5:
.Lt_01D3:
jmp .Lt_01B7
.Lt_01D8:
cmp dword ptr [ebp-20], 4294967295
jne .Lt_01DA
cmp dword ptr [ebp-24], 4294967295
jne .Lt_01DA
.Lt_0377:
push dword ptr [ebp-12]
call ASTDELNODE
add esp, 4
push dword ptr [ebp+8]
call ASTDELNODE
add esp, 4
mov ecx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ecx
jmp .Lt_01AC
jmp .Lt_01D9
.Lt_01DA:
cmp dword ptr [ebp-20], 0
jne .Lt_01DB
cmp dword ptr [ebp-24], 0
jne .Lt_01DB
.Lt_0378:
cmp dword ptr [ebp-28], 0
jne .Lt_01DD
push dword ptr [ebp-8]
call ASTDELTREE
add esp, 4
push dword ptr [ebp+8]
call ASTDELNODE
add esp, 4
mov ecx, dword ptr [ebp-12]
mov dword ptr [ebp-4], ecx
jmp .Lt_01AC
.Lt_01DD:
.Lt_01DC:
.Lt_01DB:
.Lt_01D9:
jmp .Lt_01B7
.Lt_01B8:
mov ecx, dword ptr [ebp-40]
add ecx, 4294967268
cmp ecx, 14
ja .Lt_01B7
mov ecx, dword ptr [ebp-40]
jmp dword ptr [.LT_01DE+ecx*4-112]
.LT_01DE:
.int .Lt_01CA
.int .Lt_01CA
.int .Lt_01BA
.int .Lt_01B7
.int .Lt_01C7
.int .Lt_01C0
.int .Lt_01D8
.int .Lt_01D2
.int .Lt_01B7
.int .Lt_01B7
.int .Lt_01CA
.int .Lt_01B7
.int .Lt_01CD
.int .Lt_01CA
.int .Lt_01CA
.Lt_01B7:
jmp .Lt_01B5
.Lt_01B6:
mov ecx, dword ptr [ebp-8]
cmp dword ptr [ecx], 16
jne .Lt_01DF
mov ecx, dword ptr [ebp-8]
mov eax, dword ptr [ecx+20]
mov ebx, dword ptr [ecx+24]
mov dword ptr [ebp-24], eax
mov dword ptr [ebp-20], ebx
mov eax, dword ptr [ebp-16]
mov dword ptr [ebp-40], eax
jmp .Lt_01E1
.Lt_01E3:
cmp dword ptr [ebp-20], 0
jne .Lt_01E5
cmp dword ptr [ebp-24], 0
jne .Lt_01E5
.Lt_0379:
cmp dword ptr [ebp-32], 0
jne .Lt_01E7
push dword ptr [ebp-12]
call ASTDELTREE
add esp, 4
push dword ptr [ebp+8]
call ASTDELNODE
add esp, 4
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
jmp .Lt_01AC
.Lt_01E7:
.Lt_01E6:
.Lt_01E5:
.Lt_01E4:
jmp .Lt_01E0
.Lt_01E1:
mov eax, dword ptr [ebp-40]
add eax, 4294967266
cmp eax, 12
ja .Lt_01E0
mov eax, dword ptr [ebp-40]
jmp dword ptr [.LT_01E8+eax*4-120]
.LT_01E8:
.int .Lt_01E3
.int .Lt_01E0
.int .Lt_01E3
.int .Lt_01E3
.int .Lt_01E0
.int .Lt_01E0
.int .Lt_01E0
.int .Lt_01E0
.int .Lt_01E0
.int .Lt_01E0
.int .Lt_01E0
.int .Lt_01E3
.int .Lt_01E3
.Lt_01E0:
.Lt_01DF:
.Lt_01B5:
.Lt_01B4:
.Lt_01B3:
.Lt_01B0:
.Lt_01AF:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
.Lt_01AC:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HOPTNULLOP, .-HOPTNULLOP
.balign 16
HOPTLOGIC:
.type HOPTLOGIC, @function
push ebp
mov ebp, esp
sub esp, 68
push ebx
mov dword ptr [ebp-4], 0
.Lt_01E9:
cmp dword ptr [ebp+8], 0
jne .Lt_01EC
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
jmp .Lt_01EA
.Lt_01EC:
.Lt_01EB:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-12], ebx
cmp dword ptr [ebp-12], 0
je .Lt_01EE
push dword ptr [ebp-12]
call HOPTLOGIC
add esp, 4
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+56], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-12], ebx
.Lt_01EE:
.Lt_01ED:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+60]
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 0
je .Lt_01F0
push dword ptr [ebp-16]
call HOPTLOGIC
add esp, 4
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+60], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+60]
mov dword ptr [ebp-16], ebx
.Lt_01F0:
.Lt_01EF:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 511
and eax, 480
je .Lt_01F1
mov dword ptr [ebp-32], 22
jmp .Lt_037A
.Lt_01F1:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 511
and ebx, 31
mov dword ptr [ebp-32], ebx
.Lt_037A:
mov ebx, dword ptr [ebp-32]
imul ebx, 28
cmp dword ptr [SYMB_DTYPETB+ebx], 0
jne .Lt_01F4
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx]
cmp eax, 4
sete al
shr eax, 1
sbb eax, eax
test eax, eax
je .Lt_01F5
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+20]
cmp ebx, 52
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-36], ebx
jmp .Lt_037B
.Lt_01F5:
mov dword ptr [ebp-36], 0
.Lt_037B:
cmp dword ptr [ebp-36], 0
je .Lt_01F8
mov ebx, dword ptr [ebp-12]
mov eax, dword ptr [ebx]
cmp eax, 4
sete al
shr eax, 1
sbb eax, eax
test eax, eax
je .Lt_01F9
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax+20]
cmp ebx, 52
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-40], ebx
jmp .Lt_037C
.Lt_01F9:
mov dword ptr [ebp-40], 0
.Lt_037C:
cmp dword ptr [ebp-40], 0
je .Lt_01FC
mov ebx, dword ptr [ebp-12]
mov eax, dword ptr [ebx+56]
mov dword ptr [ebp-8], eax
push dword ptr [ebp-12]
call ASTDELNODE
add esp, 4
push dword ptr [ebp+8]
call ASTDELNODE
add esp, 4
push dword ptr [ebp-8]
call HOPTLOGIC
add esp, 4
mov dword ptr [ebp+8], eax
jmp .Lt_01FB
.Lt_01FC:
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax]
cmp ebx, 3
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
je .Lt_01FE
mov ebx, dword ptr [ebp-12]
mov eax, dword ptr [ebx+20]
cmp eax, 38
sete al
shr eax, 1
sbb eax, eax
test eax, eax
setne al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-44], eax
jmp .Lt_037D
.Lt_01FE:
mov dword ptr [ebp-44], 0
.Lt_037D:
cmp dword ptr [ebp-44], 0
je .Lt_01FD
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 511
and ebx, 480
je .Lt_0200
mov dword ptr [ebp-48], 22
jmp .Lt_037E
.Lt_0200:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 511
and eax, 31
mov dword ptr [ebp-48], eax
.Lt_037E:
mov eax, dword ptr [ebp-48]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax], 0
jne .Lt_0203
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax+56]
cmp dword ptr [ebx], 16
jne .Lt_0205
mov ebx, dword ptr [ebp-12]
mov eax, dword ptr [ebx+56]
not dword ptr [eax+20]
not dword ptr [eax+24]
push dword ptr [ebp+8]
call ASTDELNODE
add esp, 4
push dword ptr [ebp-12]
call HOPTLOGIC
add esp, 4
mov dword ptr [ebp+8], eax
jmp .Lt_0204
.Lt_0205:
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax+60]
cmp dword ptr [ebx], 16
jne .Lt_0206
mov ebx, dword ptr [ebp-12]
mov eax, dword ptr [ebx+60]
not dword ptr [eax+20]
not dword ptr [eax+24]
push dword ptr [ebp+8]
call ASTDELNODE
add esp, 4
push dword ptr [ebp-12]
call HOPTLOGIC
add esp, 4
mov dword ptr [ebp+8], eax
.Lt_0206:
.Lt_0204:
.Lt_0203:
.Lt_0202:
.Lt_01FD:
.Lt_01FB:
jmp .Lt_01F7
.Lt_01F8:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 3
jne .Lt_0207
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 511
and ebx, 480
je .Lt_0208
mov dword ptr [ebp-40], 22
jmp .Lt_037F
.Lt_0208:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 511
and eax, 31
mov dword ptr [ebp-40], eax
.Lt_037F:
mov eax, dword ptr [ebp-40]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax], 0
jne .Lt_020B
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+20]
mov dword ptr [ebp-20], ebx
cmp dword ptr [ebp-20], 35
je .Lt_020E
.Lt_020F:
cmp dword ptr [ebp-20], 34
je .Lt_020E
.Lt_0210:
cmp dword ptr [ebp-20], 38
jne .Lt_020D
.Lt_020E:
cmp dword ptr [ebp-20], 34
jne .Lt_0212
mov dword ptr [ebp-20], 35
jmp .Lt_0211
.Lt_0212:
cmp dword ptr [ebp-20], 35
jne .Lt_0213
mov dword ptr [ebp-20], 34
.Lt_0213:
.Lt_0211:
mov ebx, dword ptr [ebp-12]
mov eax, dword ptr [ebx]
cmp eax, 4
sete al
shr eax, 1
sbb eax, eax
test eax, eax
je .Lt_0214
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax+20]
cmp ebx, 52
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-44], ebx
jmp .Lt_0380
.Lt_0214:
mov dword ptr [ebp-44], 0
.Lt_0380:
mov ebx, dword ptr [ebp-16]
mov eax, dword ptr [ebx]
cmp eax, 4
sete al
shr eax, 1
sbb eax, eax
test eax, eax
je .Lt_0216
mov eax, dword ptr [ebp-16]
mov ebx, dword ptr [eax+20]
cmp ebx, 52
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-48], ebx
jmp .Lt_0381
.Lt_0216:
mov dword ptr [ebp-48], 0
.Lt_0381:
mov ebx, dword ptr [ebp-48]
and ebx, dword ptr [ebp-44]
je .Lt_0219
mov ebx, dword ptr [ebp-12]
push dword ptr [ebx+56]
call HOPTLOGIC
add esp, 4
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp-16]
push dword ptr [eax+56]
call HOPTLOGIC
add esp, 4
mov dword ptr [ebp-16], eax
push 1
push 0
push dword ptr [ebp-16]
push dword ptr [ebp-12]
push dword ptr [ebp-20]
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-20], 38
je .Lt_021B
push dword ptr [ebp-8]
push 52
call ASTNEWUOP
add esp, 8
mov dword ptr [ebp-8], eax
.Lt_021B:
.Lt_021A:
mov eax, dword ptr [ebp+8]
push dword ptr [eax+56]
call ASTDELNODE
add esp, 4
mov eax, dword ptr [ebp+8]
push dword ptr [eax+60]
call ASTDELNODE
add esp, 4
push dword ptr [ebp+8]
call ASTDELNODE
add esp, 4
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp+8], eax
jmp .Lt_0218
.Lt_0219:
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax]
cmp ebx, 16
sete bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-68], ebx
mov ebx, dword ptr [ebp-16]
mov eax, dword ptr [ebx]
cmp eax, 4
sete al
shr eax, 1
sbb eax, eax
test eax, eax
je .Lt_021D
mov eax, dword ptr [ebp-16]
mov ebx, dword ptr [eax+20]
cmp ebx, 52
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-52], ebx
jmp .Lt_0382
.Lt_021D:
mov dword ptr [ebp-52], 0
.Lt_0382:
mov ebx, dword ptr [ebp-52]
and ebx, dword ptr [ebp-68]
je .Lt_021C
mov ebx, dword ptr [ebp-12]
mov ecx, dword ptr [ebx+20]
mov eax, dword ptr [ebx+24]
mov dword ptr [ebp-28], ecx
mov dword ptr [ebp-24], eax
push 1
push 0
mov ecx, dword ptr [ebp-16]
push dword ptr [ecx+56]
push dword ptr [ebp-12]
push dword ptr [ebp-20]
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp-8], eax
mov ecx, dword ptr [ebp-28]
mov eax, dword ptr [ebp-24]
not ecx
not eax
mov ebx, dword ptr [ebp-12]
mov dword ptr [ebx+20], ecx
mov dword ptr [ebx+24], eax
cmp dword ptr [ebp-20], 38
je .Lt_0220
push dword ptr [ebp-8]
push 52
call ASTNEWUOP
add esp, 8
mov dword ptr [ebp-8], eax
.Lt_0220:
.Lt_021F:
push dword ptr [ebp-16]
call ASTDELNODE
add esp, 4
push dword ptr [ebp+8]
call ASTDELNODE
add esp, 4
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp+8], eax
jmp .Lt_0218
.Lt_021C:
mov eax, dword ptr [ebp-16]
mov ecx, dword ptr [eax]
cmp ecx, 16
sete cl
shr ecx, 1
sbb ecx, ecx
mov dword ptr [ebp-68], ecx
mov ecx, dword ptr [ebp-12]
mov eax, dword ptr [ecx]
cmp eax, 4
sete al
shr eax, 1
sbb eax, eax
test eax, eax
je .Lt_0222
mov eax, dword ptr [ebp-12]
mov ecx, dword ptr [eax+20]
cmp ecx, 52
sete cl
shr ecx, 1
sbb ecx, ecx
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
mov dword ptr [ebp-56], ecx
jmp .Lt_0384
.Lt_0222:
mov dword ptr [ebp-56], 0
.Lt_0384:
mov ecx, dword ptr [ebp-56]
and ecx, dword ptr [ebp-68]
je .Lt_0221
mov ecx, dword ptr [ebp-16]
mov ebx, dword ptr [ecx+20]
mov eax, dword ptr [ecx+24]
mov dword ptr [ebp-28], ebx
mov dword ptr [ebp-24], eax
push 1
push 0
push dword ptr [ebp-16]
mov ebx, dword ptr [ebp-12]
push dword ptr [ebx+56]
push dword ptr [ebp-20]
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp-8], eax
mov ebx, dword ptr [ebp-28]
mov eax, dword ptr [ebp-24]
not ebx
not eax
mov ecx, dword ptr [ebp-16]
mov dword ptr [ecx+20], ebx
mov dword ptr [ecx+24], eax
cmp dword ptr [ebp-20], 38
je .Lt_0225
push dword ptr [ebp-8]
push 52
call ASTNEWUOP
add esp, 8
mov dword ptr [ebp-8], eax
.Lt_0225:
.Lt_0224:
push dword ptr [ebp-12]
call ASTDELNODE
add esp, 4
push dword ptr [ebp+8]
call ASTDELNODE
add esp, 4
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp+8], eax
jmp .Lt_0218
.Lt_0221:
mov eax, dword ptr [ebp-20]
cmp eax, 38
sete al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-68], eax
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax]
cmp ebx, 4
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
je .Lt_0227
mov ebx, dword ptr [ebp-12]
mov eax, dword ptr [ebx+20]
cmp eax, 52
sete al
shr eax, 1
sbb eax, eax
test eax, eax
setne al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-60], eax
jmp .Lt_0386
.Lt_0227:
mov dword ptr [ebp-60], 0
.Lt_0386:
mov eax, dword ptr [ebp-60]
and eax, dword ptr [ebp-68]
je .Lt_0226
push dword ptr [ebp+8]
push 52
call ASTNEWUOP
add esp, 8
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [eax+56]
mov dword ptr [ebx+56], ecx
push dword ptr [ebp-12]
call ASTDELNODE
add esp, 4
mov ecx, dword ptr [ebp-8]
mov dword ptr [ebp+8], ecx
jmp .Lt_0218
.Lt_0226:
mov ecx, dword ptr [ebp-20]
cmp ecx, 38
sete cl
shr ecx, 1
sbb ecx, ecx
mov dword ptr [ebp-68], ecx
mov ecx, dword ptr [ebp-16]
mov ebx, dword ptr [ecx]
cmp ebx, 4
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
je .Lt_022A
mov ebx, dword ptr [ebp-16]
mov ecx, dword ptr [ebx+20]
cmp ecx, 52
sete cl
shr ecx, 1
sbb ecx, ecx
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
mov dword ptr [ebp-64], ecx
jmp .Lt_0388
.Lt_022A:
mov dword ptr [ebp-64], 0
.Lt_0388:
mov ecx, dword ptr [ebp-64]
and ecx, dword ptr [ebp-68]
je .Lt_0229
push dword ptr [ebp+8]
push 52
call ASTNEWUOP
add esp, 8
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-16]
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ecx+60], ebx
push dword ptr [ebp-16]
call ASTDELNODE
add esp, 4
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebp+8], ebx
.Lt_0229:
.Lt_0218:
.Lt_020D:
.Lt_020C:
.Lt_020B:
.Lt_020A:
.Lt_0207:
.Lt_01F7:
.Lt_01F4:
.Lt_01F3:
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebp-4], ebx
.Lt_01EA:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HOPTLOGIC, .-HOPTLOGIC
.balign 16
HDOOPTREMCONV:
.type HDOOPTREMCONV, @function
push ebp
mov ebp, esp
sub esp, 40
push ebx
mov dword ptr [ebp-4], 0
.Lt_022C:
cmp dword ptr [ebp+8], 0
jne .Lt_022F
mov dword ptr [ebp-4], 0
jmp .Lt_022D
.Lt_022F:
.Lt_022E:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 3
jne .Lt_0231
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 511
mov dword ptr [ebp-20], ebx
cmp dword ptr [ebp-20], 14
je .Lt_0235
.Lt_0236:
cmp dword ptr [ebp-20], 15
jne .Lt_0234
.Lt_0235:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+60]
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp-12]
cmp dword ptr [eax], 5
jne .Lt_0238
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
cmp dword ptr [ebx], 5
je .Lt_023A
mov ebx, dword ptr [ebp-12]
mov eax, dword ptr [ebx+4]
and eax, 511
mov dword ptr [ebp-24], eax
cmp dword ptr [ebp-24], 14
je .Lt_023E
.Lt_023F:
cmp dword ptr [ebp-24], 15
jne .Lt_023D
.Lt_023E:
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-8], ebx
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx+4]
and eax, 511
and eax, 480
je .Lt_0240
mov dword ptr [ebp-28], 22
jmp .Lt_03A9
.Lt_0240:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+4]
and ebx, 511
and ebx, 31
mov dword ptr [ebp-28], ebx
.Lt_03A9:
mov ebx, dword ptr [ebp-28]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx+4]
mov dword ptr [ebp-32], eax
cmp dword ptr [ebp-32], 2
je .Lt_0245
.Lt_0246:
cmp dword ptr [ebp-32], 4
jne .Lt_0244
.Lt_0245:
mov dword ptr [ebp-16], 0
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-36], ebx
cmp dword ptr [ebp-36], 17
je .Lt_024A
.Lt_024B:
cmp dword ptr [ebp-36], 18
je .Lt_024A
.Lt_024C:
cmp dword ptr [ebp-36], 19
je .Lt_024A
.Lt_024D:
cmp dword ptr [ebp-36], 20
jne .Lt_0249
.Lt_024A:
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx+4]
and eax, 511
and eax, 480
je .Lt_024E
mov dword ptr [ebp-40], 22
jmp .Lt_03AA
.Lt_024E:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+4]
and ebx, 511
and ebx, 31
mov dword ptr [ebp-40], ebx
.Lt_03AA:
mov ebx, dword ptr [ebp-40]
imul ebx, 28
cmp dword ptr [SYMB_DTYPETB+ebx+8], 0
je .Lt_0251
mov dword ptr [ebp-16], -1
.Lt_0251:
.Lt_0250:
.Lt_0249:
.Lt_0247:
cmp dword ptr [ebp-16], 0
je .Lt_0253
push dword ptr [ebp-12]
call ASTDELNODE
add esp, 4
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp-8]
mov dword ptr [ebx+60], eax
.Lt_0253:
.Lt_0252:
.Lt_0244:
.Lt_0242:
.Lt_023D:
.Lt_023B:
.Lt_023A:
.Lt_0239:
.Lt_0238:
.Lt_0237:
.Lt_0234:
.Lt_0232:
.Lt_0231:
.Lt_0230:
mov eax, dword ptr [ebp+8]
push dword ptr [eax+56]
call HDOOPTREMCONV
add esp, 4
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+56], eax
mov eax, dword ptr [ebp+8]
push dword ptr [eax+60]
call HDOOPTREMCONV
add esp, 4
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+60], eax
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
.Lt_022D:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HDOOPTREMCONV, .-HDOOPTREMCONV
.balign 16
HOPTSTRMULTCONCAT:
.type HOPTSTRMULTCONCAT, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_0254:
cmp dword ptr [ebp+16], 0
jne .Lt_0257
mov dword ptr [ebp-4], 0
jmp .Lt_0255
.Lt_0257:
.Lt_0256:
mov eax, dword ptr [ebp+16]
cmp dword ptr [eax+56], 0
je .Lt_0259
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+56]
cmp dword ptr [ebx], 3
jne .Lt_025B
push dword ptr [ebp+20]
mov ebx, dword ptr [ebp+16]
push dword ptr [ebx+56]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HOPTSTRMULTCONCAT
add esp, 16
mov dword ptr [ebp+8], eax
mov eax, dword ptr [ebp+16]
mov dword ptr [eax+56], 0
.Lt_025B:
.Lt_025A:
.Lt_0259:
.Lt_0258:
mov eax, dword ptr [ebp+16]
cmp dword ptr [eax], 3
jne .Lt_025D
mov eax, dword ptr [ebp+16]
cmp dword ptr [eax+56], 0
je .Lt_025F
cmp dword ptr [ebp+8], 0
jne .Lt_0261
cmp dword ptr [ebp+20], 0
jne .Lt_0263
push 0
mov eax, dword ptr [ebp+16]
push dword ptr [eax+56]
push dword ptr [ebp+12]
call ASTCLONETREE
add esp, 4
push eax
call RTLSTRASSIGN
add esp, 12
mov dword ptr [ebp+8], eax
jmp .Lt_0262
.Lt_0263:
push 0
mov eax, dword ptr [ebp+16]
push dword ptr [eax+56]
push dword ptr [ebp+12]
call ASTCLONETREE
add esp, 4
push eax
call RTLWSTRASSIGN
add esp, 12
mov dword ptr [ebp+8], eax
.Lt_0262:
jmp .Lt_0260
.Lt_0261:
cmp dword ptr [ebp+20], 0
jne .Lt_0265
push -1
mov eax, dword ptr [ebp+16]
push dword ptr [eax+56]
push dword ptr [ebp+12]
call ASTCLONETREE
add esp, 4
push eax
call RTLSTRCONCATASSIGN
add esp, 8
push eax
push dword ptr [ebp+8]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp+8], eax
jmp .Lt_0264
.Lt_0265:
push -1
mov eax, dword ptr [ebp+16]
push dword ptr [eax+56]
push dword ptr [ebp+12]
call ASTCLONETREE
add esp, 4
push eax
call RTLWSTRCONCATASSIGN
add esp, 8
push eax
push dword ptr [ebp+8]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp+8], eax
.Lt_0264:
.Lt_0260:
.Lt_025F:
.Lt_025E:
mov eax, dword ptr [ebp+16]
cmp dword ptr [eax+60], 0
je .Lt_0267
cmp dword ptr [ebp+20], 0
jne .Lt_0269
push -1
mov eax, dword ptr [ebp+16]
push dword ptr [eax+60]
push dword ptr [ebp+12]
call ASTCLONETREE
add esp, 4
push eax
call RTLSTRCONCATASSIGN
add esp, 8
push eax
push dword ptr [ebp+8]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp+8], eax
jmp .Lt_0268
.Lt_0269:
push -1
mov eax, dword ptr [ebp+16]
push dword ptr [eax+60]
push dword ptr [ebp+12]
call ASTCLONETREE
add esp, 4
push eax
call RTLWSTRCONCATASSIGN
add esp, 8
push eax
push dword ptr [ebp+8]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp+8], eax
.Lt_0268:
.Lt_0267:
.Lt_0266:
push dword ptr [ebp+16]
call ASTDELNODE
add esp, 4
jmp .Lt_025C
.Lt_025D:
cmp dword ptr [ebp+8], 0
jne .Lt_026B
cmp dword ptr [ebp+20], 0
jne .Lt_026D
push 0
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call ASTCLONETREE
add esp, 4
push eax
call RTLSTRASSIGN
add esp, 12
mov dword ptr [ebp+8], eax
jmp .Lt_026C
.Lt_026D:
push 0
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call ASTCLONETREE
add esp, 4
push eax
call RTLWSTRASSIGN
add esp, 12
mov dword ptr [ebp+8], eax
.Lt_026C:
jmp .Lt_026A
.Lt_026B:
cmp dword ptr [ebp+20], 0
jne .Lt_026F
push -1
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call ASTCLONETREE
add esp, 4
push eax
call RTLSTRCONCATASSIGN
add esp, 8
push eax
push dword ptr [ebp+8]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp+8], eax
jmp .Lt_026E
.Lt_026F:
push -1
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call ASTCLONETREE
add esp, 4
push eax
call RTLWSTRCONCATASSIGN
add esp, 8
push eax
push dword ptr [ebp+8]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp+8], eax
.Lt_026E:
.Lt_026A:
.Lt_025C:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
.Lt_0255:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HOPTSTRMULTCONCAT, .-HOPTSTRMULTCONCAT
.balign 16
HISMULTSTRCONCAT:
.type HISMULTSTRCONCAT, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
mov dword ptr [ebp-4], 0
.Lt_0270:
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax], 3
jne .Lt_0273
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-12], ebx
cmp dword ptr [ebp-12], 17
je .Lt_0277
.Lt_0278:
cmp dword ptr [ebp-12], 18
jne .Lt_0276
.Lt_0277:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+12]
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
je .Lt_027A
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+4]
and ebx, 327680
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_027C
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call ASTISSYMBOLONTREE
add esp, 8
test eax, eax
sete al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-4], eax
.Lt_027C:
.Lt_027B:
.Lt_027A:
.Lt_0279:
jmp .Lt_0274
.Lt_0276:
cmp dword ptr [ebp-12], 19
je .Lt_027E
.Lt_027F:
cmp dword ptr [ebp-12], 26
jne .Lt_027D
.Lt_027E:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov eax, dword ptr [ebx]
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 17
je .Lt_0283
.Lt_0284:
cmp dword ptr [ebp-16], 18
jne .Lt_0282
.Lt_0283:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+12]
mov dword ptr [ebp-8], ebx
cmp dword ptr [ebp-8], 0
je .Lt_0286
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call ASTISSYMBOLONTREE
add esp, 8
test eax, eax
sete al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-4], eax
.Lt_0286:
.Lt_0285:
.Lt_0282:
.Lt_0280:
.Lt_027D:
.Lt_0274:
.Lt_0273:
.Lt_0272:
.Lt_0271:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HISMULTSTRCONCAT, .-HISMULTSTRCONCAT
.balign 16
HOPTSTRASSIGNMENT:
.type HOPTSTRASSIGNMENT, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
mov dword ptr [ebp-4], 0
.Lt_0287:
mov dword ptr [ebp-8], 0
mov eax, dword ptr [ebp+16]
cmp dword ptr [eax], 3
jne .Lt_028A
mov dword ptr [ebp-16], 0
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-20], ebx
jmp .Lt_028C
.Lt_028E:
mov ebx, dword ptr [ebp+16]
push dword ptr [ebx+56]
push dword ptr [ebp+12]
call ASTISTREEEQUAL
add esp, 8
test eax, eax
je .Lt_0290
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+12]
mov dword ptr [ebp-16], ebx
cmp dword ptr [ebp-16], 0
je .Lt_0292
mov ebx, dword ptr [ebp-16]
mov eax, dword ptr [ebx+4]
and eax, 327680
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_0294
mov eax, dword ptr [ebp+16]
push dword ptr [eax+60]
push dword ptr [ebp-16]
call ASTISSYMBOLONTREE
add esp, 8
test eax, eax
sete al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-8], eax
.Lt_0294:
.Lt_0293:
.Lt_0292:
.Lt_0291:
.Lt_0290:
.Lt_028F:
jmp .Lt_028B
.Lt_0295:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+56]
mov eax, dword ptr [ebx]
mov dword ptr [ebp-24], eax
jmp .Lt_0297
.Lt_0299:
mov eax, dword ptr [ebp+16]
push dword ptr [eax+56]
push dword ptr [ebp+12]
call ASTISTREEEQUAL
add esp, 8
test eax, eax
je .Lt_029B
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+12]
mov dword ptr [ebp-16], ebx
cmp dword ptr [ebp-16], 0
je .Lt_029D
mov ebx, dword ptr [ebp+16]
push dword ptr [ebx+60]
push dword ptr [ebp-16]
call ASTISSYMBOLONTREE
add esp, 8
test eax, eax
sete al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-8], eax
.Lt_029D:
.Lt_029C:
.Lt_029B:
.Lt_029A:
jmp .Lt_0296
.Lt_0297:
mov eax, dword ptr [ebp-24]
add eax, 4294967279
cmp eax, 1
ja .Lt_0296
mov eax, dword ptr [ebp-24]
jmp dword ptr [.LT_029E+eax*4-68]
.LT_029E:
.int .Lt_0299
.int .Lt_0299
.Lt_0296:
jmp .Lt_028B
.Lt_028C:
mov eax, dword ptr [ebp-20]
add eax, 4294967279
cmp eax, 9
ja .Lt_028B
mov eax, dword ptr [ebp-20]
jmp dword ptr [.LT_029F+eax*4-68]
.LT_029F:
.int .Lt_028E
.int .Lt_028E
.int .Lt_0295
.int .Lt_028B
.int .Lt_028B
.int .Lt_028B
.int .Lt_028B
.int .Lt_028B
.int .Lt_028B
.int .Lt_0295
.Lt_028B:
.Lt_028A:
.Lt_0289:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 511
cmp ebx, 6
sete bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-12], ebx
cmp dword ptr [ebp-8], 0
je .Lt_02A1
push dword ptr [ebp+8]
call ASTDELNODE
add esp, 4
mov ebx, dword ptr [ebp+16]
mov dword ptr [ebp+8], ebx
push dword ptr [ebp+12]
call ASTDELTREE
add esp, 4
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+56]
mov dword ptr [ebp+12], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+60]
mov dword ptr [ebp+16], ebx
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call HISMULTSTRCONCAT
add esp, 8
test eax, eax
je .Lt_02A3
push dword ptr [ebp-12]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+12]
call HOPTSTRMULTCONCAT
add esp, 16
mov dword ptr [ebp-4], eax
jmp .Lt_02A2
.Lt_02A3:
cmp dword ptr [ebp-12], 0
jne .Lt_02A5
push dword ptr [ebp+16]
call ASTUPDSTRCONCAT
add esp, 4
push eax
push dword ptr [ebp+12]
call RTLSTRCONCATASSIGN
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_02A4
.Lt_02A5:
push dword ptr [ebp+16]
call ASTUPDSTRCONCAT
add esp, 4
push eax
push dword ptr [ebp+12]
call RTLWSTRCONCATASSIGN
add esp, 8
mov dword ptr [ebp-4], eax
.Lt_02A4:
.Lt_02A2:
jmp .Lt_02A0
.Lt_02A1:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call HISMULTSTRCONCAT
add esp, 8
test eax, eax
je .Lt_02A7
push dword ptr [ebp-12]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push 0
call HOPTSTRMULTCONCAT
add esp, 16
mov dword ptr [ebp-4], eax
jmp .Lt_02A6
.Lt_02A7:
cmp dword ptr [ebp-12], 0
jne .Lt_02A9
push 0
push dword ptr [ebp+16]
call ASTUPDSTRCONCAT
add esp, 4
push eax
push dword ptr [ebp+12]
call RTLSTRASSIGN
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_02A8
.Lt_02A9:
push 0
push dword ptr [ebp+16]
call ASTUPDSTRCONCAT
add esp, 4
push eax
push dword ptr [ebp+12]
call RTLWSTRASSIGN
add esp, 12
mov dword ptr [ebp-4], eax
.Lt_02A8:
.Lt_02A6:
.Lt_02A0:
push dword ptr [ebp+8]
call ASTDELNODE
add esp, 4
.Lt_0288:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HOPTSTRASSIGNMENT, .-HOPTSTRASSIGNMENT
.balign 16
HOPTRECIPROCAL:
.type HOPTRECIPROCAL, @function
push ebp
mov ebp, esp
sub esp, 28
push ebx
mov dword ptr [ebp-4], 0
.Lt_030B:
cmp dword ptr [ebp+8], 0
jne .Lt_030E
mov dword ptr [ebp-4], 0
jmp .Lt_030C
.Lt_030E:
.Lt_030D:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
cmp ebx, 3
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
je .Lt_030F
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+20]
cmp eax, 31
sete al
shr eax, 1
sbb eax, eax
test eax, eax
setne al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-20], eax
jmp .Lt_03B2
.Lt_030F:
mov dword ptr [ebp-20], 0
.Lt_03B2:
cmp dword ptr [ebp-20], 0
je .Lt_0312
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-8], ebx
mov ebx, dword ptr [ebp-8]
cmp dword ptr [ebx], 16
jne .Lt_0314
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx+4]
and eax, 511
cmp eax, 14
sete al
shr eax, 1
sbb eax, eax
test eax, eax
je .Lt_0315
mov eax, dword ptr [ebp-8]
fld qword ptr [eax+20]
fcomp qword ptr [Lt_03B4]
fnstsw ax
test ah, 0b01000000
setnz al
shr eax, 1
sbb eax, eax
test eax, eax
setne al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-24], eax
jmp .Lt_03B3
.Lt_0315:
mov dword ptr [ebp-24], 0
.Lt_03B3:
cmp dword ptr [ebp-24], 0
je .Lt_0318
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+60]
mov dword ptr [ebp-12], ebx
mov ebx, dword ptr [ebp-12]
mov eax, dword ptr [ebx]
cmp eax, 4
sete al
shr eax, 1
sbb eax, eax
test eax, eax
je .Lt_0319
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax+20]
cmp ebx, 65
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-28], ebx
jmp .Lt_03B5
.Lt_0319:
mov dword ptr [ebp-28], 0
.Lt_03B5:
cmp dword ptr [ebp-28], 0
je .Lt_031C
push edi
push esi
mov edi, dword ptr [ebp+8]
mov esi, dword ptr [ebp-12]
mov ecx, 18
rep movsd
pop esi
pop edi
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx], 4
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+20], 66
push dword ptr [ebp-12]
call ASTDELNODE
add esp, 4
push dword ptr [ebp-8]
call ASTDELNODE
add esp, 4
jmp .Lt_031B
.Lt_031C:
mov ebx, dword ptr [ebp-12]
mov eax, dword ptr [ebx+4]
and eax, 511
cmp eax, 14
jne .Lt_031D
push dword ptr [ebp+8]
call ASTDELNODE
add esp, 4
push dword ptr [ebp-12]
push 67
call ASTNEWUOP
add esp, 8
mov dword ptr [ebp+8], eax
push dword ptr [ebp-8]
call ASTDELNODE
add esp, 4
.Lt_031D:
.Lt_031B:
.Lt_0318:
.Lt_0317:
.Lt_0314:
.Lt_0313:
.Lt_0312:
.Lt_0311:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-8], ebx
cmp dword ptr [ebp-8], 0
je .Lt_031F
push dword ptr [ebp-8]
call HOPTRECIPROCAL
add esp, 4
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+56], eax
.Lt_031F:
.Lt_031E:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+60]
mov dword ptr [ebp-12], ebx
cmp dword ptr [ebp-12], 0
je .Lt_0321
push dword ptr [ebp-12]
call HOPTRECIPROCAL
add esp, 4
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+60], eax
.Lt_0321:
.Lt_0320:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
.Lt_030C:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HOPTRECIPROCAL, .-HOPTRECIPROCAL
	#fbc-1.01.0/src/compiler/ast-optimize.bas' compilation took 0.04492908425163478 secs

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
Lt_03B4:	.quad	0x3FF0000000000000

.section .ctors, "aw", @progbits
.int fb_ctor__astzoptimize
