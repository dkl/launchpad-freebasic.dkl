	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/ast-node-assign.bas' compilation started at 15:27:32 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl ASTCHECKASSIGN
ASTCHECKASSIGN:
.type ASTCHECKASSIGN, @function
push ebp
mov ebp, esp
sub esp, 68
push ebx
push esi
mov dword ptr [ebp-4], 0
.Lt_00A7:
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-20], ebx
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
mov dword ptr [ebp-24], eax
mov eax, dword ptr [ebp-20]
and eax, 480
je .Lt_00A9
mov dword ptr [ebp-36], 22
jmp .Lt_00E3
.Lt_00A9:
mov eax, dword ptr [ebp-20]
and eax, 31
mov dword ptr [ebp-36], eax
.Lt_00E3:
mov eax, dword ptr [ebp-36]
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp-24]
and eax, 480
je .Lt_00AB
mov dword ptr [ebp-40], 22
jmp .Lt_00E4
.Lt_00AB:
mov eax, dword ptr [ebp-24]
and eax, 31
mov dword ptr [ebp-40], eax
.Lt_00E4:
mov eax, dword ptr [ebp-40]
mov dword ptr [ebp-16], eax
mov eax, dword ptr [ebp-12]
and eax, 480
je .Lt_00AD
mov dword ptr [ebp-44], 22
jmp .Lt_00E5
.Lt_00AD:
mov eax, dword ptr [ebp-12]
and eax, 31
mov dword ptr [ebp-44], eax
.Lt_00E5:
mov eax, dword ptr [ebp-44]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax]
mov dword ptr [ebp-28], ebx
mov ebx, dword ptr [ebp-16]
and ebx, 480
je .Lt_00AF
mov dword ptr [ebp-48], 22
jmp .Lt_00E6
.Lt_00AF:
mov ebx, dword ptr [ebp-16]
and ebx, 31
mov dword ptr [ebp-48], ebx
.Lt_00E6:
mov ebx, dword ptr [ebp-48]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx]
mov dword ptr [ebp-32], eax
mov eax, dword ptr [ebp-28]
cmp eax, 2
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp-32]
cmp ebx, 2
sete bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
je .Lt_00B2
mov ebx, dword ptr [ebp-32]
cmp dword ptr [ebp-28], ebx
je .Lt_00B4
push dword ptr [ebp-32]
push dword ptr [ebp+12]
push dword ptr [ebp-28]
push dword ptr [ebp+8]
call HCHECKSTRINGOPS
add esp, 16
test eax, eax
jne .Lt_00B6
jmp .Lt_00A8
.Lt_00B6:
.Lt_00B5:
.Lt_00B4:
.Lt_00B3:
mov dword ptr [ebp-4], -1
jmp .Lt_00A8
jmp .Lt_00B1
.Lt_00B2:
mov eax, dword ptr [ebp-12]
cmp eax, 18
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp-16]
cmp ebx, 18
sete bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
je .Lt_00B7
push -1
push dword ptr [ebp-32]
lea ebx, [ebp+12]
push ebx
push dword ptr [ebp-28]
push dword ptr [ebp+8]
call HCHECKUDTOPS
add esp, 20
test eax, eax
jne .Lt_00B9
jmp .Lt_00A8
.Lt_00B9:
.Lt_00B8:
mov dword ptr [ebp-4], -1
jmp .Lt_00A8
jmp .Lt_00B1
.Lt_00B7:
mov eax, dword ptr [ebp-12]
cmp eax, 6
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp-16]
cmp ebx, 6
sete bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
je .Lt_00BA
mov ebx, dword ptr [ebp-16]
cmp dword ptr [ebp-12], ebx
je .Lt_00BC
mov dword ptr [ebp-52], 0
lea ebx, [ebp-52]
push ebx
lea ebx, [ebp-24]
push ebx
push dword ptr [ebp+12]
lea ebx, [ebp-20]
push ebx
push dword ptr [ebp+8]
call HCHECKWSTRINGOPS
add esp, 20
test eax, eax
jne .Lt_00BE
jmp .Lt_00A8
.Lt_00BE:
.Lt_00BD:
cmp dword ptr [ebp-52], 0
je .Lt_00C0
mov dword ptr [ebp-4], -1
jmp .Lt_00A8
.Lt_00C0:
.Lt_00BF:
mov eax, dword ptr [ebp-20]
and eax, 480
je .Lt_00C1
mov dword ptr [ebp-56], 22
jmp .Lt_00E7
.Lt_00C1:
mov eax, dword ptr [ebp-20]
and eax, 31
mov dword ptr [ebp-56], eax
.Lt_00E7:
mov eax, dword ptr [ebp-56]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax]
mov dword ptr [ebp-28], ebx
mov ebx, dword ptr [ebp-24]
and ebx, 480
je .Lt_00C3
mov dword ptr [ebp-60], 22
jmp .Lt_00E8
.Lt_00C3:
mov ebx, dword ptr [ebp-24]
and ebx, 31
mov dword ptr [ebp-60], ebx
.Lt_00E8:
mov ebx, dword ptr [ebp-60]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx]
mov dword ptr [ebp-32], eax
mov eax, dword ptr [ebp-20]
and eax, 480
je .Lt_00C5
mov dword ptr [ebp-64], 22
jmp .Lt_00E9
.Lt_00C5:
mov eax, dword ptr [ebp-20]
and eax, 31
mov dword ptr [ebp-64], eax
.Lt_00E9:
mov eax, dword ptr [ebp-64]
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp-24]
and eax, 480
je .Lt_00C7
mov dword ptr [ebp-68], 22
jmp .Lt_00EA
.Lt_00C7:
mov eax, dword ptr [ebp-24]
and eax, 31
mov dword ptr [ebp-68], eax
.Lt_00EA:
mov eax, dword ptr [ebp-68]
mov dword ptr [ebp-16], eax
.Lt_00BC:
.Lt_00BB:
jmp .Lt_00B1
.Lt_00BA:
mov eax, dword ptr [ebp-12]
cmp eax, 3
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp-16]
cmp ebx, 3
sete bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
je .Lt_00C9
mov ebx, dword ptr [ebp-16]
cmp dword ptr [ebp-12], ebx
jne .Lt_00CB
mov dword ptr [ebp-4], -1
jmp .Lt_00A8
.Lt_00CB:
.Lt_00CA:
lea ebx, [ebp-24]
push ebx
push dword ptr [ebp+12]
lea ebx, [ebp-20]
push ebx
push dword ptr [ebp+8]
call HCHECKZSTRINGOPS
add esp, 16
test eax, eax
jne .Lt_00CD
jmp .Lt_00A8
.Lt_00CD:
.Lt_00CC:
mov eax, dword ptr [ebp-20]
and eax, 480
je .Lt_00CE
mov dword ptr [ebp-52], 22
jmp .Lt_00EB
.Lt_00CE:
mov eax, dword ptr [ebp-20]
and eax, 31
mov dword ptr [ebp-52], eax
.Lt_00EB:
mov eax, dword ptr [ebp-52]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax]
mov dword ptr [ebp-28], ebx
mov ebx, dword ptr [ebp-24]
and ebx, 480
je .Lt_00D0
mov dword ptr [ebp-56], 22
jmp .Lt_00EC
.Lt_00D0:
mov ebx, dword ptr [ebp-24]
and ebx, 31
mov dword ptr [ebp-56], ebx
.Lt_00EC:
mov ebx, dword ptr [ebp-56]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx]
mov dword ptr [ebp-32], eax
mov eax, dword ptr [ebp-20]
and eax, 480
je .Lt_00D2
mov dword ptr [ebp-60], 22
jmp .Lt_00ED
.Lt_00D2:
mov eax, dword ptr [ebp-20]
and eax, 31
mov dword ptr [ebp-60], eax
.Lt_00ED:
mov eax, dword ptr [ebp-60]
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp-24]
and eax, 480
je .Lt_00D4
mov dword ptr [ebp-64], 22
jmp .Lt_00EE
.Lt_00D4:
mov eax, dword ptr [ebp-24]
and eax, 31
mov dword ptr [ebp-64], eax
.Lt_00EE:
mov eax, dword ptr [ebp-64]
mov dword ptr [ebp-16], eax
jmp .Lt_00B1
.Lt_00C9:
mov eax, dword ptr [ebp-12]
cmp eax, 9
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp-16]
cmp ebx, 9
sete bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
je .Lt_00D6
push dword ptr [ebp-32]
push dword ptr [ebp+12]
push dword ptr [ebp-28]
push dword ptr [ebp+8]
call HCHECKENUMOPS
add esp, 16
.Lt_00D6:
.Lt_00B1:
push dword ptr [ebp-24]
push dword ptr [ebp+12]
push dword ptr [ebp-20]
push dword ptr [ebp+8]
call HCHECKCONSTANDPOINTEROPS
add esp, 16
test eax, eax
jne .Lt_00D8
jmp .Lt_00A8
.Lt_00D8:
.Lt_00D7:
mov eax, dword ptr [ebp-16]
cmp eax, dword ptr [ebp-12]
setne al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebp+12]
mov esi, dword ptr [ebx+8]
cmp esi, dword ptr [ecx+8]
setne bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
je .Lt_00DA
cmp dword ptr [ebp-32], 2
je .Lt_00DC
mov ebx, dword ptr [ebp+12]
cmp dword ptr [ebx], 16
jne .Lt_00DE
push 0
push 0
push dword ptr [ebp+12]
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+8]
push dword ptr [ebp-20]
call ASTNEWCONV
add esp, 20
mov dword ptr [ebp+12], eax
cmp dword ptr [ebp+12], 0
jne .Lt_00E0
jmp .Lt_00A8
.Lt_00E0:
.Lt_00DF:
.Lt_00DE:
.Lt_00DD:
push dword ptr [ebp+12]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+8]
push dword ptr [ebp-20]
call ASTCHECKCONV
add esp, 12
test eax, eax
jne .Lt_00E2
jmp .Lt_00A8
.Lt_00E2:
.Lt_00E1:
.Lt_00DC:
.Lt_00DB:
.Lt_00DA:
.Lt_00D9:
mov dword ptr [ebp-4], -1
.Lt_00A8:
mov eax, dword ptr [ebp-4]
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTCHECKASSIGN, .-ASTCHECKASSIGN
.balign 16

.globl ASTCHECKASSIGNTOTYPE
ASTCHECKASSIGNTOTYPE:
.type ASTCHECKASSIGNTOTYPE, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_00FB:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 0
push 0
push 0
call ASTNEWVAR
add esp, 20
mov dword ptr [ebp-8], eax
push dword ptr [ebp+16]
push dword ptr [ebp-8]
call ASTCHECKASSIGN
add esp, 8
mov dword ptr [ebp-4], eax
push dword ptr [ebp-8]
call ASTDELTREE
add esp, 4
.Lt_00FC:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size ASTCHECKASSIGNTOTYPE, .-ASTCHECKASSIGNTOTYPE
.balign 16

.globl ASTNEWASSIGN
ASTNEWASSIGN:
.type ASTNEWASSIGN, @function
push ebp
mov ebp, esp
sub esp, 96
push ebx
push esi
mov dword ptr [ebp-4], 0
.Lt_0109:
mov dword ptr [ebp-4], 0
cmp dword ptr [ebp+8], 0
sete al
shr eax, 1
sbb eax, eax
cmp dword ptr [ebp+12], 0
sete bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
je .Lt_010C
jmp .Lt_010A
.Lt_010C:
.Lt_010B:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
mov dword ptr [ebp-24], eax
mov eax, dword ptr [ebp-24]
and eax, 480
je .Lt_010D
mov dword ptr [ebp-56], 22
jmp .Lt_0186
.Lt_010D:
mov eax, dword ptr [ebp-24]
and eax, 31
mov dword ptr [ebp-56], eax
.Lt_0186:
mov eax, dword ptr [ebp-56]
mov dword ptr [ebp-16], eax
mov eax, dword ptr [ebp-16]
and eax, 480
je .Lt_010F
mov dword ptr [ebp-60], 22
jmp .Lt_0187
.Lt_010F:
mov eax, dword ptr [ebp-16]
and eax, 31
mov dword ptr [ebp-60], eax
.Lt_0187:
mov eax, dword ptr [ebp-60]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax]
mov dword ptr [ebp-32], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+8]
mov dword ptr [ebp-40], eax
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-28], ebx
mov ebx, dword ptr [ebp-28]
and ebx, 480
je .Lt_0111
mov dword ptr [ebp-64], 22
jmp .Lt_0188
.Lt_0111:
mov ebx, dword ptr [ebp-28]
and ebx, 31
mov dword ptr [ebp-64], ebx
.Lt_0188:
mov ebx, dword ptr [ebp-64]
mov dword ptr [ebp-20], ebx
mov ebx, dword ptr [ebp-20]
and ebx, 480
je .Lt_0113
mov dword ptr [ebp-68], 22
jmp .Lt_0189
.Lt_0113:
mov ebx, dword ptr [ebp-20]
and ebx, 31
mov dword ptr [ebp-68], ebx
.Lt_0189:
mov ebx, dword ptr [ebp-68]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx]
mov dword ptr [ebp-36], eax
mov eax, dword ptr [ebp+16]
and eax, 32
test eax, eax
jne .Lt_0116
mov dword ptr [ebp-80], -1
mov eax, dword ptr [ebp-16]
mov dword ptr [ebp-84], eax
jmp .Lt_0118
.Lt_011A:
mov eax, dword ptr [ebp-20]
cmp dword ptr [ebp-16], eax
jne .Lt_011C
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+12]
mov ecx, dword ptr [ebx+8]
cmp dword ptr [eax+8], ecx
jne .Lt_011E
mov ecx, dword ptr [ebp+16]
and ecx, 64
test ecx, ecx
jne .Lt_0120
mov ecx, dword ptr [ebp+8]
push dword ptr [ecx+8]
call SYMBCOMPHASCOPYLETOPS
add esp, 4
mov dword ptr [ebp-80], eax
jmp .Lt_011F
.Lt_0120:
mov dword ptr [ebp-80], 0
.Lt_011F:
.Lt_011E:
.Lt_011D:
.Lt_011C:
.Lt_011B:
jmp .Lt_0117
.Lt_0118:
mov eax, dword ptr [ebp-84]
add eax, 4294967278
test eax, eax
ja .Lt_0117
mov eax, dword ptr [ebp-84]
jmp dword ptr [.LT_0121+eax*4-72]
.LT_0121:
.int .Lt_011A
.Lt_0117:
cmp dword ptr [ebp-80], 0
je .Lt_0123
lea eax, [ebp-48]
push eax
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 0
call SYMBFINDSELFBOPOVLPROC
add esp, 16
mov dword ptr [ebp-44], eax
cmp dword ptr [ebp-44], 0
je .Lt_0125
mov eax, dword ptr [ebp+16]
and eax, 64
test eax, eax
je .Lt_0127
mov eax, dword ptr [ebp+8]
push dword ptr [eax+8]
call SYMBGETCOMPDEFCTOR
add esp, 4
test eax, eax
je .Lt_0129
push dword ptr [ebp+8]
call ASTCLONETREE
add esp, 4
push eax
mov eax, dword ptr [ebp+8]
push dword ptr [eax+8]
call ASTBUILDCTORCALL
add esp, 8
mov dword ptr [ebp-84], eax
jmp .Lt_0128
.Lt_0129:
push 0
push 0
push 0
push 7
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+8]
push dword ptr [ecx+40]
push dword ptr [ecx+36]
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp+8]
call ASTCLONETREE
add esp, 4
push eax
push 106
call ASTNEWMEM
add esp, 20
mov dword ptr [ebp-84], eax
.Lt_0128:
jmp .Lt_0126
.Lt_0127:
mov dword ptr [ebp-84], 0
.Lt_0126:
push -1
push 0
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push dword ptr [ebp-44]
call ASTBUILDCALL
add esp, 16
push eax
push dword ptr [ebp-84]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_010A
.Lt_0125:
.Lt_0124:
cmp dword ptr [ebp-48], 0
je .Lt_012B
mov dword ptr [ebp-4], 0
jmp .Lt_010A
.Lt_012B:
.Lt_012A:
.Lt_0123:
.Lt_0122:
.Lt_0116:
.Lt_0115:
mov eax, dword ptr [ebp+16]
and eax, 32
test eax, eax
jne .Lt_012D
lea eax, [ebp-48]
push eax
push dword ptr [ebp+12]
push dword ptr [ebp-40]
push dword ptr [ebp-24]
call SYMBFINDCASTOVLPROC
add esp, 16
mov dword ptr [ebp-44], eax
cmp dword ptr [ebp-44], 0
je .Lt_012F
push 0
push 0
push dword ptr [ebp+12]
push dword ptr [ebp-44]
call ASTBUILDCALL
add esp, 16
mov dword ptr [ebp+12], eax
jmp .Lt_012E
.Lt_012F:
cmp dword ptr [ebp-48], 0
je .Lt_0131
mov dword ptr [ebp-4], 0
jmp .Lt_010A
.Lt_0131:
.Lt_0130:
.Lt_012E:
.Lt_012D:
.Lt_012C:
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax+4]
mov dword ptr [ebp-28], ecx
mov ecx, dword ptr [ebp-28]
and ecx, 480
je .Lt_0132
mov dword ptr [ebp-72], 22
jmp .Lt_018A
.Lt_0132:
mov ecx, dword ptr [ebp-28]
and ecx, 31
mov dword ptr [ebp-72], ecx
.Lt_018A:
mov ecx, dword ptr [ebp-72]
mov dword ptr [ebp-20], ecx
mov ecx, dword ptr [ebp-20]
and ecx, 480
je .Lt_0134
mov dword ptr [ebp-76], 22
jmp .Lt_018B
.Lt_0134:
mov ecx, dword ptr [ebp-20]
and ecx, 31
mov dword ptr [ebp-76], ecx
.Lt_018B:
mov ecx, dword ptr [ebp-76]
imul ecx, 28
mov eax, dword ptr [SYMB_DTYPETB+ecx]
mov dword ptr [ebp-36], eax
mov eax, dword ptr [ebp-32]
cmp eax, 2
sete al
shr eax, 1
sbb eax, eax
mov ecx, dword ptr [ebp-36]
cmp ecx, 2
sete cl
shr ecx, 1
sbb ecx, ecx
or eax, ecx
je .Lt_0137
mov ecx, dword ptr [ebp-36]
cmp dword ptr [ebp-32], ecx
je .Lt_0139
push dword ptr [ebp-36]
push dword ptr [ebp+12]
push dword ptr [ebp-32]
push dword ptr [ebp+8]
call HCHECKSTRINGOPS
add esp, 16
test eax, eax
jne .Lt_013B
jmp .Lt_010A
.Lt_013B:
.Lt_013A:
mov eax, dword ptr [ebp+16]
and eax, 64
test eax, eax
setne al
shr eax, 1
sbb eax, eax
push eax
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call RTLSTRASSIGN
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_010A
.Lt_0139:
.Lt_0138:
mov eax, dword ptr [ebp+16]
and eax, 64
test eax, eax
je .Lt_013D
push -1
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call RTLSTRASSIGN
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_010A
.Lt_013D:
.Lt_013C:
jmp .Lt_0136
.Lt_0137:
mov eax, dword ptr [ebp-16]
cmp eax, 18
sete al
shr eax, 1
sbb eax, eax
mov ecx, dword ptr [ebp-20]
cmp ecx, 18
sete cl
shr ecx, 1
sbb ecx, ecx
or eax, ecx
je .Lt_013E
push 0
push dword ptr [ebp-36]
lea ecx, [ebp+12]
push ecx
push dword ptr [ebp-32]
push dword ptr [ebp+8]
call HCHECKUDTOPS
add esp, 20
test eax, eax
jne .Lt_0140
jmp .Lt_010A
.Lt_0140:
.Lt_013F:
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax], 36
jne .Lt_0142
mov eax, dword ptr [ebp+8]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+4]
call TYPEHASCTOR
add esp, 8
mov ecx, dword ptr [ebp+8]
push dword ptr [ecx+8]
mov ecx, dword ptr [ebp+8]
push dword ptr [ecx+4]
mov ebx, eax
call TYPEHASDTOR
add esp, 8
or ebx, eax
test ebx, ebx
jne .Lt_0144
mov ebx, dword ptr [ebp+16]
and ebx, 64
push ebx
push -1
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call ASTREMOVENOCONVCAST
add esp, 4
push eax
call _Z15ASTTYPEINIFLUSHP7ASTNODES0_ii
add esp, 16
mov dword ptr [ebp-4], eax
jmp .Lt_010A
.Lt_0144:
.Lt_0143:
.Lt_0142:
.Lt_0141:
push dword ptr [ebp+12]
call ASTSKIPNOCONVCAST
add esp, 4
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax]
cmp ebx, 9
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_0146
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HSHALLOWCOPY
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_010A
.Lt_0146:
.Lt_0145:
mov eax, dword ptr [ebp-12]
push dword ptr [eax+12]
call SYMBPROCRETURNSONSTACK
add esp, 4
test eax, eax
je .Lt_0148
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call ASTREMOVENOCONVCAST
add esp, 4
push eax
call ASTBUILDCALLRESULTVAR
add esp, 4
push eax
push dword ptr [ebp+8]
call HSHALLOWCOPY
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_010A
.Lt_0148:
.Lt_0147:
push dword ptr [ebp+8]
call ASTREMOVENOCONVCAST
add esp, 4
mov dword ptr [ebp+8], eax
push dword ptr [ebp+12]
call ASTREMOVENOCONVCAST
add esp, 4
mov dword ptr [ebp+12], eax
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+12]
mov eax, dword ptr [ebx+84]
mov dword ptr [ebp-24], eax
mov eax, dword ptr [ebp-24]
and eax, 480
je .Lt_0149
mov dword ptr [ebp-80], 22
jmp .Lt_018C
.Lt_0149:
mov eax, dword ptr [ebp-24]
and eax, 31
mov dword ptr [ebp-80], eax
.Lt_018C:
mov eax, dword ptr [ebp-80]
mov dword ptr [ebp-16], eax
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+12]
mov eax, dword ptr [ebx+88]
mov dword ptr [ebp-40], eax
mov eax, dword ptr [ebp-16]
and eax, 480
je .Lt_014B
mov dword ptr [ebp-84], 22
jmp .Lt_018D
.Lt_014B:
mov eax, dword ptr [ebp-16]
and eax, 31
mov dword ptr [ebp-84], eax
.Lt_018D:
mov eax, dword ptr [ebp-84]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax]
mov dword ptr [ebp-32], ebx
push dword ptr [ebp-40]
push dword ptr [ebp-24]
push dword ptr [ebp+8]
call ASTSETTYPE
add esp, 12
mov ebx, dword ptr [ebp-24]
mov dword ptr [ebp-28], ebx
mov ebx, dword ptr [ebp-16]
mov dword ptr [ebp-20], ebx
mov ebx, dword ptr [ebp-32]
mov dword ptr [ebp-36], ebx
push dword ptr [ebp-40]
push dword ptr [ebp-28]
push dword ptr [ebp+12]
call ASTSETTYPE
add esp, 12
jmp .Lt_0136
.Lt_013E:
mov ebx, dword ptr [ebp-16]
cmp ebx, 6
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp-20]
cmp eax, 6
sete al
shr eax, 1
sbb eax, eax
or ebx, eax
je .Lt_014D
mov eax, dword ptr [ebp-20]
cmp dword ptr [ebp-16], eax
jne .Lt_014F
mov eax, dword ptr [ebp+16]
and eax, 64
test eax, eax
je .Lt_0151
push -1
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call RTLWSTRASSIGN
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_010A
.Lt_0151:
.Lt_0150:
jmp .Lt_014E
.Lt_014F:
mov dword ptr [ebp-80], 0
lea eax, [ebp-80]
push eax
lea eax, [ebp-28]
push eax
push dword ptr [ebp+12]
lea eax, [ebp-24]
push eax
push dword ptr [ebp+8]
call HCHECKWSTRINGOPS
add esp, 20
test eax, eax
jne .Lt_0153
jmp .Lt_010A
.Lt_0153:
.Lt_0152:
cmp dword ptr [ebp-80], 0
je .Lt_0155
mov eax, dword ptr [ebp+16]
and eax, 64
test eax, eax
setne al
shr eax, 1
sbb eax, eax
push eax
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call RTLWSTRASSIGN
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_010A
.Lt_0155:
.Lt_0154:
mov eax, dword ptr [ebp-24]
and eax, 480
je .Lt_0156
mov dword ptr [ebp-84], 22
jmp .Lt_018E
.Lt_0156:
mov eax, dword ptr [ebp-24]
and eax, 31
mov dword ptr [ebp-84], eax
.Lt_018E:
mov eax, dword ptr [ebp-84]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax]
mov dword ptr [ebp-32], ebx
mov ebx, dword ptr [ebp-28]
and ebx, 480
je .Lt_0158
mov dword ptr [ebp-88], 22
jmp .Lt_018F
.Lt_0158:
mov ebx, dword ptr [ebp-28]
and ebx, 31
mov dword ptr [ebp-88], ebx
.Lt_018F:
mov ebx, dword ptr [ebp-88]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx]
mov dword ptr [ebp-36], eax
mov eax, dword ptr [ebp-24]
and eax, 480
je .Lt_015A
mov dword ptr [ebp-92], 22
jmp .Lt_0190
.Lt_015A:
mov eax, dword ptr [ebp-24]
and eax, 31
mov dword ptr [ebp-92], eax
.Lt_0190:
mov eax, dword ptr [ebp-92]
mov dword ptr [ebp-16], eax
mov eax, dword ptr [ebp-28]
and eax, 480
je .Lt_015C
mov dword ptr [ebp-96], 22
jmp .Lt_0191
.Lt_015C:
mov eax, dword ptr [ebp-28]
and eax, 31
mov dword ptr [ebp-96], eax
.Lt_0191:
mov eax, dword ptr [ebp-96]
mov dword ptr [ebp-20], eax
.Lt_014E:
jmp .Lt_0136
.Lt_014D:
mov eax, dword ptr [ebp-16]
cmp eax, 3
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp-20]
cmp ebx, 3
sete bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
je .Lt_015E
mov ebx, dword ptr [ebp-20]
cmp dword ptr [ebp-16], ebx
jne .Lt_0160
push 0
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call RTLSTRASSIGN
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_010A
.Lt_0160:
.Lt_015F:
lea eax, [ebp-28]
push eax
push dword ptr [ebp+12]
lea eax, [ebp-24]
push eax
push dword ptr [ebp+8]
call HCHECKZSTRINGOPS
add esp, 16
test eax, eax
jne .Lt_0162
jmp .Lt_010A
.Lt_0162:
.Lt_0161:
mov eax, dword ptr [ebp-24]
and eax, 480
je .Lt_0163
mov dword ptr [ebp-80], 22
jmp .Lt_0192
.Lt_0163:
mov eax, dword ptr [ebp-24]
and eax, 31
mov dword ptr [ebp-80], eax
.Lt_0192:
mov eax, dword ptr [ebp-80]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax]
mov dword ptr [ebp-32], ebx
mov ebx, dword ptr [ebp-28]
and ebx, 480
je .Lt_0165
mov dword ptr [ebp-84], 22
jmp .Lt_0193
.Lt_0165:
mov ebx, dword ptr [ebp-28]
and ebx, 31
mov dword ptr [ebp-84], ebx
.Lt_0193:
mov ebx, dword ptr [ebp-84]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx]
mov dword ptr [ebp-36], eax
mov eax, dword ptr [ebp-24]
and eax, 480
je .Lt_0167
mov dword ptr [ebp-88], 22
jmp .Lt_0194
.Lt_0167:
mov eax, dword ptr [ebp-24]
and eax, 31
mov dword ptr [ebp-88], eax
.Lt_0194:
mov eax, dword ptr [ebp-88]
mov dword ptr [ebp-16], eax
mov eax, dword ptr [ebp-28]
and eax, 480
je .Lt_0169
mov dword ptr [ebp-92], 22
jmp .Lt_0195
.Lt_0169:
mov eax, dword ptr [ebp-28]
and eax, 31
mov dword ptr [ebp-92], eax
.Lt_0195:
mov eax, dword ptr [ebp-92]
mov dword ptr [ebp-20], eax
jmp .Lt_0136
.Lt_015E:
mov eax, dword ptr [ebp-16]
cmp eax, 9
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp-20]
cmp ebx, 9
sete bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
je .Lt_016B
push dword ptr [ebp-36]
push dword ptr [ebp+12]
push dword ptr [ebp-32]
push dword ptr [ebp+8]
call HCHECKENUMOPS
add esp, 16
.Lt_016B:
.Lt_0136:
mov ebx, dword ptr [ebp+16]
and ebx, 16
test ebx, ebx
jne .Lt_016D
push dword ptr [ebp-28]
push dword ptr [ebp+12]
push dword ptr [ebp-24]
push dword ptr [ebp+8]
call HCHECKCONSTANDPOINTEROPS
add esp, 16
test eax, eax
jne .Lt_016F
jmp .Lt_010A
.Lt_016F:
.Lt_016E:
.Lt_016D:
.Lt_016C:
mov eax, dword ptr [ebp-20]
cmp eax, dword ptr [ebp-16]
setne al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebp+12]
mov esi, dword ptr [ebx+8]
cmp esi, dword ptr [ecx+8]
setne bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
je .Lt_0171
cmp dword ptr [ebp-36], 2
je .Lt_0173
mov ebx, dword ptr [ebp+12]
cmp dword ptr [ebx], 16
jne .Lt_0175
push 0
mov ebx, dword ptr [ebp+16]
and ebx, 16
je .Lt_0176
mov dword ptr [ebp-84], 8
jmp .Lt_0196
.Lt_0176:
mov dword ptr [ebp-84], 0
.Lt_0196:
push dword ptr [ebp-84]
push dword ptr [ebp+12]
push dword ptr [ebp-40]
push dword ptr [ebp-24]
call ASTNEWCONV
add esp, 20
mov dword ptr [ebp+12], eax
cmp dword ptr [ebp+12], 0
jne .Lt_0179
jmp .Lt_010A
.Lt_0179:
.Lt_0178:
.Lt_0175:
.Lt_0174:
mov dword ptr [ebp-80], -1
cmp dword ptr [ENV+104], 0
jne .Lt_017B
mov eax, dword ptr [ebp-32]
cmp eax, 1
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp-36]
cmp ebx, 1
sete bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
je .Lt_017D
cmp dword ptr [ebp-16], 13
je .Lt_017F
mov ebx, dword ptr [IR+284]
and ebx, 1
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-80], ebx
.Lt_017F:
.Lt_017E:
.Lt_017D:
.Lt_017C:
.Lt_017B:
.Lt_017A:
cmp dword ptr [ebp-80], 0
je .Lt_0181
push 0
mov ebx, dword ptr [ebp+16]
and ebx, 16
je .Lt_0182
mov dword ptr [ebp-84], 8
jmp .Lt_0197
.Lt_0182:
mov dword ptr [ebp-84], 0
.Lt_0197:
push dword ptr [ebp-84]
push dword ptr [ebp+12]
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+8]
push dword ptr [ebp-24]
call ASTNEWCONV
add esp, 20
mov dword ptr [ebp+12], eax
cmp dword ptr [ebp+12], 0
jne .Lt_0185
jmp .Lt_010A
.Lt_0185:
.Lt_0184:
.Lt_0181:
.Lt_0180:
.Lt_0173:
.Lt_0172:
.Lt_0171:
.Lt_0170:
push dword ptr [ebp-40]
push dword ptr [ebp-24]
push 2
call ASTNEWNODE
add esp, 12
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+8]
mov dword ptr [eax+56], ebx
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebp+12]
mov dword ptr [ebx+60], eax
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_010A:
mov eax, dword ptr [ebp-4]
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTNEWASSIGN, .-ASTNEWASSIGN
.balign 16

.globl ASTLOADASSIGN
ASTLOADASSIGN:
.type ASTLOADASSIGN, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
mov dword ptr [ebp-4], 0
.Lt_01AC:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-8], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+60]
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-8], 0
sete al
shr eax, 1
sbb eax, eax
cmp dword ptr [ebp-12], 0
sete bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
je .Lt_01AF
mov dword ptr [ebp-4], 0
jmp .Lt_01AD
.Lt_01AF:
.Lt_01AE:
mov ebx, dword ptr [ebp-12]
cmp dword ptr [ebx], 5
jne .Lt_01B1
push 0
mov ebx, dword ptr [ebp-8]
push dword ptr [ebx+4]
push dword ptr [ebp-12]
call ASTUPDATECONVFD2FS
add esp, 12
.Lt_01B1:
.Lt_01B0:
push dword ptr [ebp-12]
call ASTLOAD
add esp, 4
mov dword ptr [ebp-16], eax
push dword ptr [ebp-8]
call ASTLOAD
add esp, 4
mov dword ptr [ebp-20], eax
cmp dword ptr [AST+136], 0
je .Lt_01B3
push dword ptr [ebp-16]
push dword ptr [ebp-20]
call dword ptr [IR+116]
add esp, 8
.Lt_01B3:
.Lt_01B2:
push dword ptr [ebp-8]
call ASTDELNODE
add esp, 4
push dword ptr [ebp-12]
call ASTDELNODE
add esp, 4
mov eax, dword ptr [ebp-20]
mov dword ptr [ebp-4], eax
.Lt_01AD:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTLOADASSIGN, .-ASTLOADASSIGN
.balign 16
fb_ctor__astznodezassign:
.type fb_ctor__astznodezassign, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__astznodezassign, .-fb_ctor__astznodezassign
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
HCHECKSTRINGOPS:
.type HCHECKSTRINGOPS, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_0057:
mov dword ptr [ebp-4], 0
cmp dword ptr [ebp+12], 2
jne .Lt_005A
mov eax, dword ptr [ebp+16]
mov dword ptr [ebp-8], eax
jmp .Lt_0059
.Lt_005A:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-8], eax
.Lt_0059:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+4]
and ebx, 511
mov dword ptr [ebp-12], ebx
cmp dword ptr [ebp-12], 3
je .Lt_005E
.Lt_005F:
cmp dword ptr [ebp-12], 6
jne .Lt_005D
.Lt_005E:
jmp .Lt_005B
.Lt_005D:
jmp .Lt_0058
.Lt_0060:
.Lt_005B:
mov dword ptr [ebp-4], -1
.Lt_0058:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HCHECKSTRINGOPS, .-HCHECKSTRINGOPS
.balign 16
HCHECKUDTOPS:
.type HCHECKUDTOPS, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0061:
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 511
cmp ebx, 18
je .Lt_0064
jmp .Lt_0062
jmp .Lt_0063
.Lt_0064:
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx], 9
jne .Lt_0066
jmp .Lt_0062
.Lt_0066:
.Lt_0065:
.Lt_0063:
mov ebx, dword ptr [ebp+16]
mov eax, dword ptr [ebx]
mov ebx, dword ptr [eax+4]
and ebx, 511
cmp ebx, 18
je .Lt_0068
jmp .Lt_0062
.Lt_0068:
.Lt_0067:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp+16]
mov ecx, dword ptr [eax]
mov eax, dword ptr [ecx+8]
cmp dword ptr [ebx+8], eax
je .Lt_006A
mov eax, dword ptr [ebp+8]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax]
push dword ptr [ebx+8]
call SYMBGETUDTBASELEVEL
add esp, 8
test eax, eax
jne .Lt_006C
jmp .Lt_0062
.Lt_006C:
.Lt_006B:
cmp dword ptr [ebp+24], 0
jne .Lt_006E
push 0
push 0
mov eax, dword ptr [ebp+16]
push dword ptr [eax]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 511
push ebx
call ASTNEWCONV
add esp, 20
mov ebx, dword ptr [ebp+16]
mov dword ptr [ebx], eax
.Lt_006E:
.Lt_006D:
.Lt_006A:
.Lt_0069:
mov dword ptr [ebp-4], -1
.Lt_0062:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HCHECKUDTOPS, .-HCHECKUDTOPS
.balign 16
HCHECKWSTRINGOPS:
.type HCHECKWSTRINGOPS, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
mov dword ptr [ebp-4], 0
.Lt_006F:
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax]
and ebx, 480
je .Lt_0071
mov dword ptr [ebp-16], 22
jmp .Lt_01B6
.Lt_0071:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx]
and eax, 31
mov dword ptr [ebp-16], eax
.Lt_01B6:
mov eax, dword ptr [ebp-16]
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp+20]
mov ebx, dword ptr [eax]
and ebx, 480
je .Lt_0073
mov dword ptr [ebp-20], 22
jmp .Lt_01B7
.Lt_0073:
mov ebx, dword ptr [ebp+20]
mov eax, dword ptr [ebx]
and eax, 31
mov dword ptr [ebp-20], eax
.Lt_01B7:
mov eax, dword ptr [ebp-20]
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-8], 6
jne .Lt_0076
mov eax, dword ptr [ebp-12]
cmp eax, 3
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp+24]
mov dword ptr [ebx], eax
jmp .Lt_0075
.Lt_0076:
mov eax, dword ptr [ebp-8]
cmp eax, 3
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp+24]
mov dword ptr [ebx], eax
.Lt_0075:
mov eax, dword ptr [ebp+24]
cmp dword ptr [eax], 0
je .Lt_0078
mov dword ptr [ebp-4], -1
jmp .Lt_0070
.Lt_0078:
.Lt_0077:
cmp dword ptr [ebp-8], 6
jne .Lt_007A
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
cmp ebx, 20
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_007C
jmp .Lt_0070
.Lt_007C:
.Lt_007B:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx]
and eax, -512
mov ebx, dword ptr [ENV+212]
and ebx, 511
or eax, ebx
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx], eax
jmp .Lt_0079
.Lt_007A:
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax]
cmp ebx, 20
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_007E
jmp .Lt_0070
.Lt_007E:
.Lt_007D:
mov ebx, dword ptr [ebp+20]
mov eax, dword ptr [ebx]
and eax, -512
mov ebx, dword ptr [ENV+212]
and ebx, 511
or eax, ebx
mov ebx, dword ptr [ebp+20]
mov dword ptr [ebx], eax
.Lt_0079:
mov dword ptr [ebp-4], -1
.Lt_0070:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HCHECKWSTRINGOPS, .-HCHECKWSTRINGOPS
.balign 16
HCHECKZSTRINGOPS:
.type HCHECKZSTRINGOPS, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_007F:
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax]
and ebx, 480
je .Lt_0081
mov dword ptr [ebp-8], 22
jmp .Lt_01BC
.Lt_0081:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx]
and eax, 31
mov dword ptr [ebp-8], eax
.Lt_01BC:
cmp dword ptr [ebp-8], 3
jne .Lt_0084
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
cmp ebx, 20
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_0086
jmp .Lt_0080
.Lt_0086:
.Lt_0085:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx]
and eax, -512
or eax, 2
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx], eax
jmp .Lt_0083
.Lt_0084:
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax]
cmp ebx, 20
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_0088
jmp .Lt_0080
.Lt_0088:
.Lt_0087:
mov ebx, dword ptr [ebp+20]
mov eax, dword ptr [ebx]
and eax, -512
or eax, 2
mov ebx, dword ptr [ebp+20]
mov dword ptr [ebx], eax
.Lt_0083:
mov dword ptr [ebp-4], -1
.Lt_0080:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HCHECKZSTRINGOPS, .-HCHECKZSTRINGOPS
.balign 16
HCHECKENUMOPS:
.type HCHECKENUMOPS, @function
push ebp
mov ebp, esp
push ebx
.Lt_0089:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 511
mov eax, dword ptr [ebp+16]
mov ecx, dword ptr [eax+4]
and ecx, 511
cmp ebx, ecx
je .Lt_008C
mov ecx, dword ptr [ebp+12]
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
mov ebx, dword ptr [ebp+20]
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
or ecx, ebx
je .Lt_008E
push 1
push 0
push 5
call ERRREPORTWARN
add esp, 12
.Lt_008E:
.Lt_008D:
.Lt_008C:
.Lt_008B:
.Lt_008A:
pop ebx
mov esp, ebp
pop ebp
ret
.size HCHECKENUMOPS, .-HCHECKENUMOPS
.balign 16
HCHECKCONSTANDPOINTEROPS:
.type HCHECKCONSTANDPOINTEROPS, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_008F:
mov dword ptr [ebp-4], 0
mov dword ptr [ebp-8], 0
lea eax, [ebp-8]
push eax
push 0
mov eax, dword ptr [ebp+16]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+8]
push dword ptr [ebp+20]
push dword ptr [ebp+12]
call SYMBCHECKCONSTASSIGN
add esp, 24
test eax, eax
jne .Lt_0093
push 0
push -1
push 180
call ERRREPORT
add esp, 12
jmp .Lt_0090
.Lt_0093:
.Lt_0092:
mov eax, dword ptr [ebp+12]
and eax, 480
test eax, eax
je .Lt_0095
mov eax, dword ptr [ebp+20]
and eax, 480
je .Lt_0096
mov dword ptr [ebp-12], 22
jmp .Lt_01C1
.Lt_0096:
mov eax, dword ptr [ebp+20]
and eax, 31
mov dword ptr [ebp-12], eax
.Lt_01C1:
mov eax, dword ptr [ebp-12]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax], 1
jne .Lt_0099
jmp .Lt_0090
.Lt_0099:
.Lt_0098:
push 0
push dword ptr [ebp+16]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+8]
push dword ptr [ebp+12]
call ASTPTRCHECK
add esp, 16
test eax, eax
jne .Lt_009B
mov eax, dword ptr [ebp+12]
and eax, 31
cmp eax, 18
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp+20]
and ebx, 31
cmp ebx, 18
sete bl
shr ebx, 1
sbb ebx, ebx
and eax, ebx
je .Lt_009D
mov ebx, dword ptr [ebp+16]
push dword ptr [ebx+8]
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+8]
call SYMBGETUDTBASELEVEL
add esp, 8
test eax, eax
jle .Lt_009F
push 0
push -1
push 180
call ERRREPORT
add esp, 12
jmp .Lt_0090
.Lt_009F:
.Lt_009E:
.Lt_009D:
.Lt_009C:
push dword ptr [ebp+16]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+4]
call ASTCHECKCONV
add esp, 12
test eax, eax
je .Lt_00A1
push 1
push 0
push 4
call ERRREPORTWARN
add esp, 12
.Lt_00A1:
.Lt_00A0:
.Lt_009B:
.Lt_009A:
jmp .Lt_0094
.Lt_0095:
mov eax, dword ptr [ebp+20]
and eax, 480
test eax, eax
je .Lt_00A2
mov eax, dword ptr [ebp+12]
and eax, 480
je .Lt_00A3
mov dword ptr [ebp-12], 22
jmp .Lt_01C2
.Lt_00A3:
mov eax, dword ptr [ebp+12]
and eax, 31
mov dword ptr [ebp-12], eax
.Lt_01C2:
mov eax, dword ptr [ebp-12]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax], 1
jne .Lt_00A6
jmp .Lt_0090
.Lt_00A6:
.Lt_00A5:
push 1
push 0
push 5
call ERRREPORTWARN
add esp, 12
.Lt_00A2:
.Lt_0094:
mov dword ptr [ebp-4], -1
.Lt_0090:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HCHECKCONSTANDPOINTEROPS, .-HCHECKCONSTANDPOINTEROPS
.balign 16
HSHALLOWCOPY:
.type HSHALLOWCOPY, @function
push ebp
mov ebp, esp
sub esp, 28
push ebx
mov dword ptr [ebp-4], 0
.Lt_00FD:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+8]
mov ecx, dword ptr [ebx+36]
mov eax, dword ptr [ebx+40]
mov dword ptr [ebp-24], ecx
mov dword ptr [ebp-20], eax
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ecx+8]
mov ecx, dword ptr [eax+8]
and ecx, 4194304
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
mov dword ptr [ebp-28], ecx
push dword ptr [ebp+8]
call ASTREMOVENOCONVCAST
add esp, 4
mov dword ptr [ebp+8], eax
push dword ptr [ebp+12]
call ASTREMOVENOCONVCAST
add esp, 4
mov dword ptr [ebp+12], eax
cmp dword ptr [ebp-28], 0
je .Lt_0100
mov ecx, dword ptr [ENV+236]
mov eax, ecx
sar eax, 31
sub dword ptr [ebp-24], ecx
sbb dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 0
jne .Lt_0102
cmp dword ptr [ebp-24], 0
jne .Lt_0102
.Lt_01C6:
mov dword ptr [ebp-8], 0
push dword ptr [ebp+8]
call ASTHASSIDEFX
add esp, 4
test eax, eax
je .Lt_0104
push -1
lea eax, [ebp+8]
push eax
call ASTREMSIDEFX
add esp, 4
push eax
push dword ptr [ebp-8]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-8], eax
.Lt_0104:
.Lt_0103:
push dword ptr [ebp+12]
call ASTHASSIDEFX
add esp, 4
test eax, eax
je .Lt_0106
push -1
lea eax, [ebp+12]
push eax
call ASTREMSIDEFX
add esp, 4
push eax
push dword ptr [ebp-8]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-8], eax
.Lt_0106:
.Lt_0105:
push dword ptr [ebp+8]
call ASTDELTREE
add esp, 4
push dword ptr [ebp+12]
call ASTDELTREE
add esp, 4
cmp dword ptr [ebp-8], 0
jne .Lt_0108
call ASTNEWNOP
mov dword ptr [ebp-8], eax
.Lt_0108:
.Lt_0107:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
jmp .Lt_00FE
.Lt_0102:
.Lt_0101:
push 0
push 0
push 1
mov ecx, dword ptr [ENV+236]
mov eax, ecx
sar eax, 31
push eax
push ecx
push dword ptr [ebp+8]
call _Z19ASTBUILDDEREFADDROFP7ASTNODExiP8FBSYMBOLS2_
add esp, 24
mov dword ptr [ebp+8], eax
push 0
push 0
push 1
mov ecx, dword ptr [ENV+236]
mov eax, ecx
sar eax, 31
push eax
push ecx
push dword ptr [ebp+12]
call _Z19ASTBUILDDEREFADDROFP7ASTNODExiP8FBSYMBOLS2_
add esp, 24
mov dword ptr [ebp+12], eax
.Lt_0100:
.Lt_00FF:
push dword ptr [ebp-20]
push dword ptr [ebp-24]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 104
call ASTNEWMEM
add esp, 20
mov dword ptr [ebp-4], eax
.Lt_00FE:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HSHALLOWCOPY, .-HSHALLOWCOPY
	#fbc-1.01.0/src/compiler/ast-node-assign.bas' compilation took 0.03903492435347289 secs

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

.section .ctors, "aw", @progbits
.int fb_ctor__astznodezassign
