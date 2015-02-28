	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/ast-node-uop.bas' compilation started at 15:27:33 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl ASTNEWUOP
ASTNEWUOP:
.type ASTNEWUOP, @function
push ebp
mov ebp, esp
sub esp, 52
push ebx
mov dword ptr [ebp-4], 0
.Lt_008C:
mov dword ptr [ebp-4], 0
cmp dword ptr [ebp+12], 0
jne .Lt_008F
jmp .Lt_008D
.Lt_008F:
.Lt_008E:
mov eax, dword ptr [ebp+8]
sal eax, 2
mov ebx, offset SYMB
add ebx, eax
cmp dword ptr [ebx+99096], 0
je .Lt_0091
lea ebx, [ebp-44]
push ebx
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call SYMBFINDUOPOVLPROC
add esp, 12
mov dword ptr [ebp-40], eax
cmp dword ptr [ebp-40], 0
je .Lt_0093
push 0
push 0
push dword ptr [ebp+12]
push dword ptr [ebp-40]
call ASTBUILDCALL
add esp, 16
mov dword ptr [ebp-4], eax
jmp .Lt_008D
jmp .Lt_0092
.Lt_0093:
cmp dword ptr [ebp-44], 0
je .Lt_0095
jmp .Lt_008D
.Lt_0095:
.Lt_0094:
.Lt_0092:
.Lt_0091:
.Lt_0090:
cmp dword ptr [ebp+8], 75
jne .Lt_0097
mov eax, dword ptr [ebp+12]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+12]
push dword ptr [eax+4]
push 4
call ASTNEWNODE
add esp, 12
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+12]
mov dword ptr [eax+56], ebx
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+60], 0
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebp+8]
mov dword ptr [ebx+20], eax
mov eax, dword ptr [ebp-8]
mov dword ptr [eax+28], 0
mov eax, dword ptr [ebp-8]
mov dword ptr [eax+24], 1
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
jmp .Lt_008D
.Lt_0097:
.Lt_0096:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_0098
mov dword ptr [ebp-32], 22
jmp .Lt_00EA
.Lt_0098:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-32], eax
.Lt_00EA:
mov eax, dword ptr [ebp-32]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax], 2
jne .Lt_009B
jmp .Lt_008D
.Lt_009B:
.Lt_009A:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_009C
mov dword ptr [ebp-40], 22
jmp .Lt_00EB
.Lt_009C:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-40], eax
.Lt_00EB:
mov eax, dword ptr [ebp-40]
mov dword ptr [ebp-44], eax
jmp .Lt_009F
.Lt_00A1:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax]
cmp ebx, 20
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_00A3
jmp .Lt_008D
.Lt_00A3:
.Lt_00A2:
jmp .Lt_009E
.Lt_00A4:
push 0
push 0
push dword ptr [ebp+12]
push 0
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, -512
push eax
call ASTNEWCONV
add esp, 20
mov dword ptr [ebp+12], eax
cmp dword ptr [ebp+12], 0
jne .Lt_00A6
jmp .Lt_008D
.Lt_00A6:
.Lt_00A5:
jmp .Lt_009E
.Lt_00A7:
push 0
push 0
push dword ptr [ebp+12]
push 0
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, -512
or ebx, 7
push ebx
call ASTNEWCONV
add esp, 20
mov dword ptr [ebp+12], eax
jmp .Lt_009E
.Lt_00A8:
cmp dword ptr [ebp+8], 52
je .Lt_00AA
jmp .Lt_008D
.Lt_00AA:
.Lt_00A9:
jmp .Lt_009E
.Lt_009F:
mov eax, dword ptr [ebp-44]
add eax, 4294967293
cmp eax, 19
ja .Lt_009E
mov eax, dword ptr [ebp-44]
jmp dword ptr [.LT_00AB+eax*4-12]
.LT_00AB:
.int .Lt_00A1
.int .Lt_009E
.int .Lt_009E
.int .Lt_00A1
.int .Lt_009E
.int .Lt_009E
.int .Lt_00A7
.int .Lt_009E
.int .Lt_009E
.int .Lt_009E
.int .Lt_009E
.int .Lt_009E
.int .Lt_009E
.int .Lt_009E
.int .Lt_009E
.int .Lt_00A4
.int .Lt_009E
.int .Lt_009E
.int .Lt_009E
.int .Lt_00A8
.Lt_009E:
mov eax, dword ptr [ENV+136]
cmp eax, 3
setne al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-40], eax
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_00AC
mov dword ptr [ebp-36], 22
jmp .Lt_00EC
.Lt_00AC:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-36], eax
.Lt_00EC:
mov eax, dword ptr [ebp-36]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax]
test ebx, ebx
sete bl
shr ebx, 1
sbb ebx, ebx
and ebx, dword ptr [ebp-40]
je .Lt_00AF
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 480
je .Lt_00B0
mov dword ptr [ebp-44], 22
jmp .Lt_00EE
.Lt_00B0:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 31
mov dword ptr [ebp-44], ebx
.Lt_00EE:
mov ebx, dword ptr [ebp-44]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx+16]
and eax, 480
je .Lt_00B4
mov dword ptr [ebp-52], 22
jmp .Lt_00EF
.Lt_00B4:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_00B2
mov dword ptr [ebp-48], 22
jmp .Lt_00F0
.Lt_00B2:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-48], eax
.Lt_00F0:
mov eax, dword ptr [ebp-48]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+16]
and ebx, 31
mov dword ptr [ebp-52], ebx
.Lt_00EF:
mov ebx, dword ptr [ebp-52]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx+12]
mov dword ptr [ebp-16], eax
mov eax, dword ptr [SYMB_DTYPETB+208]
mov dword ptr [ebp-20], eax
mov eax, dword ptr [SYMB_DTYPETB+236]
mov dword ptr [ebp-24], eax
mov eax, dword ptr [ebp-20]
cmp dword ptr [ebp-16], eax
jge .Lt_00B7
push 0
push 0
push dword ptr [ebp+12]
push 0
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, -512
or ebx, 7
push ebx
call ASTNEWCONV
add esp, 20
mov dword ptr [ebp+12], eax
jmp .Lt_00B6
.Lt_00B7:
mov eax, dword ptr [ebp-20]
cmp eax, dword ptr [ebp-16]
setl al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp-16]
cmp ebx, dword ptr [ebp-24]
setl bl
shr ebx, 1
sbb ebx, ebx
and eax, ebx
je .Lt_00B9
push 0
push 0
push dword ptr [ebp+12]
push 0
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, -512
or eax, 8
push eax
call ASTNEWCONV
add esp, 20
mov dword ptr [ebp+12], eax
.Lt_00B9:
.Lt_00B8:
.Lt_00B6:
.Lt_00AF:
.Lt_00AE:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-12], ebx
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+8]
mov dword ptr [ebp-28], eax
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-40], eax
jmp .Lt_00BB
.Lt_00BD:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_00BE
mov dword ptr [ebp-44], 22
jmp .Lt_00F1
.Lt_00BE:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-44], eax
.Lt_00F1:
mov eax, dword ptr [ebp-44]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax], 0
je .Lt_00C1
push 0
push 0
push dword ptr [ebp+12]
push 0
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, -512
or ebx, 7
push ebx
call ASTNEWCONV
add esp, 20
mov dword ptr [ebp+12], eax
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-12], ebx
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+8]
mov dword ptr [ebp-28], eax
.Lt_00C1:
.Lt_00C0:
jmp .Lt_00BA
.Lt_00C2:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_00C3
mov dword ptr [ebp-44], 22
jmp .Lt_00F2
.Lt_00C3:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-44], eax
.Lt_00F2:
mov eax, dword ptr [ebp-44]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax], 0
jne .Lt_00C6
push dword ptr [ebp-12]
call TYPETOSIGNED
add esp, 4
mov dword ptr [ebp-12], eax
.Lt_00C6:
.Lt_00C5:
jmp .Lt_00BA
.Lt_00C7:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_00C8
mov dword ptr [ebp-44], 22
jmp .Lt_00F3
.Lt_00C8:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-44], eax
.Lt_00F3:
mov eax, dword ptr [ebp-44]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax], 1
je .Lt_00CB
push 0
push 0
push dword ptr [ebp+12]
push 0
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, -512
or ebx, 15
push ebx
call ASTNEWCONV
add esp, 20
mov dword ptr [ebp+12], eax
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-12], ebx
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+8]
mov dword ptr [ebp-28], eax
.Lt_00CB:
.Lt_00CA:
jmp .Lt_00BA
.Lt_00CC:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_00CD
mov dword ptr [ebp-44], 22
jmp .Lt_00F4
.Lt_00CD:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-44], eax
.Lt_00F4:
mov eax, dword ptr [ebp-44]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax], 0
jne .Lt_00D0
push 1
push 0
push 0
push dword ptr [ebp-12]
push 0
push 0
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp+12]
push 28
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp-4], eax
jmp .Lt_008D
.Lt_00D0:
.Lt_00CF:
jmp .Lt_00BA
.Lt_00D1:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_00D2
mov dword ptr [ebp-44], 22
jmp .Lt_00F5
.Lt_00D2:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-44], eax
.Lt_00F5:
mov eax, dword ptr [ebp-44]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax], 0
jne .Lt_00D5
push 1
push 0
push 0
push dword ptr [ebp-12]
push 0
push 0
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp+12]
push 34
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp-4], eax
jmp .Lt_008D
.Lt_00D5:
.Lt_00D4:
jmp .Lt_00BA
.Lt_00D6:
mov eax, dword ptr [ebp+12]
mov dword ptr [ebp-4], eax
jmp .Lt_008D
jmp .Lt_00BA
.Lt_00BB:
mov eax, dword ptr [ebp-40]
add eax, 4294967244
cmp eax, 20
ja .Lt_00BA
mov eax, dword ptr [ebp-40]
jmp dword ptr [.LT_00D7+eax*4-208]
.LT_00D7:
.int .Lt_00BD
.int .Lt_00D6
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00C2
.int .Lt_00C7
.int .Lt_00C7
.int .Lt_00C7
.int .Lt_00C7
.int .Lt_00C7
.int .Lt_00C7
.int .Lt_00BA
.int .Lt_00C7
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00C7
.int .Lt_00C7
.int .Lt_00CC
.int .Lt_00CC
.int .Lt_00D1
.Lt_00BA:
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax], 16
jne .Lt_00D9
cmp dword ptr [ebp+8], 54
jne .Lt_00DB
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_00DC
mov dword ptr [ebp-40], 22
jmp .Lt_00F6
.Lt_00DC:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-40], eax
.Lt_00F6:
mov eax, dword ptr [ebp-40]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+8], 0
jne .Lt_00DF
cmp dword ptr [AST+232], 0
jne .Lt_00E1
mov eax, dword ptr [ebp+12]
mov dword ptr [ebp-48], eax
mov eax, dword ptr [ebp-12]
and eax, 480
je .Lt_00E2
mov dword ptr [ebp-44], 22
jmp .Lt_00F7
.Lt_00E2:
mov eax, dword ptr [ebp-12]
and eax, 31
mov dword ptr [ebp-44], eax
.Lt_00F7:
mov eax, dword ptr [ebp-44]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+4]
sal ebx, 3
dec ebx
mov ecx, 1
mov eax, 0
push eax
push ecx
mov ecx, ebx
mov eax, [esp+0]
mov edx, [esp+4]
shld edx, eax, cl
shl  eax, cl
test cl, 32
jz .Lt_00FE
mov edx, eax
xor eax, eax
.Lt_00FE:
mov [esp+4], edx
mov [esp+0], eax
pop ecx
pop eax
mov ebx, dword ptr [ebp-48]
cmp dword ptr [ebx+24], eax
jb .Lt_00E5
ja .Lt_00FF
cmp dword ptr [ebx+20], ecx
jbe .Lt_00E5
.Lt_00FF:
push 1
push 0
push 5
call ERRREPORTWARN
add esp, 12
.Lt_00E5:
.Lt_00E4:
.Lt_00E1:
.Lt_00E0:
push dword ptr [ebp-12]
call TYPETOSIGNED
add esp, 4
mov dword ptr [ebp-12], eax
.Lt_00DF:
.Lt_00DE:
.Lt_00DB:
.Lt_00DA:
push dword ptr [ebp+12]
push dword ptr [ebp-28]
push dword ptr [ebp-12]
push dword ptr [ebp+8]
call HCONSTUOP
add esp, 16
mov dword ptr [ebp+12], eax
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [ebp-12]
mov dword ptr [eax+4], ecx
mov ecx, dword ptr [ebp+12]
mov dword ptr [ebp-4], ecx
jmp .Lt_008D
.Lt_00D9:
.Lt_00D8:
mov ecx, dword ptr [IR+284]
and ecx, 131072
test ecx, ecx
je .Lt_00E7
push dword ptr [ebp-12]
push dword ptr [ebp+8]
call dword ptr [IR+24]
add esp, 8
test eax, eax
jne .Lt_00E9
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call RTLMATHUOP
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_008D
.Lt_00E9:
.Lt_00E8:
.Lt_00E7:
.Lt_00E6:
push dword ptr [ebp-28]
push dword ptr [ebp-12]
push 4
call ASTNEWNODE
add esp, 12
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov ecx, dword ptr [ebp+12]
mov dword ptr [eax+56], ecx
mov ecx, dword ptr [ebp-8]
mov dword ptr [ecx+60], 0
mov ecx, dword ptr [ebp-8]
mov eax, dword ptr [ebp+8]
mov dword ptr [ecx+20], eax
mov eax, dword ptr [ebp-8]
mov dword ptr [eax+28], 0
mov eax, dword ptr [ebp-8]
mov dword ptr [eax+24], 1
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_008D:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTNEWUOP, .-ASTNEWUOP
.balign 16

.globl ASTLOADUOP
ASTLOADUOP:
.type ASTLOADUOP, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
mov dword ptr [ebp-4], 0
.Lt_0100:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-8], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+20]
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0103
mov dword ptr [ebp-4], 0
jmp .Lt_0101
.Lt_0103:
.Lt_0102:
mov eax, dword ptr [ebp-8]
cmp dword ptr [eax], 5
jne .Lt_0105
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+4]
push dword ptr [ebp-8]
call ASTUPDATECONVFD2FS
add esp, 12
.Lt_0105:
.Lt_0104:
push dword ptr [ebp-8]
call ASTLOAD
add esp, 4
mov dword ptr [ebp-16], eax
cmp dword ptr [AST+136], 0
je .Lt_0107
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+24]
and ebx, 1
test ebx, ebx
je .Lt_0109
mov ebx, dword ptr [ebp-8]
push dword ptr [ebx+8]
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx+4]
and eax, 511
push eax
call dword ptr [IR+236]
add esp, 8
mov dword ptr [ebp-20], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-16]
mov ecx, dword ptr [eax+16]
mov dword ptr [ebx+20], ecx
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-20]
mov eax, dword ptr [ecx+16]
mov dword ptr [ebx+20], eax
jmp .Lt_0108
.Lt_0109:
mov dword ptr [ebp-20], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-16]
mov ecx, dword ptr [eax+16]
mov dword ptr [ebx+20], ecx
.Lt_0108:
push dword ptr [ebp-20]
push dword ptr [ebp-16]
push dword ptr [ebp-12]
call dword ptr [IR+112]
add esp, 12
cmp dword ptr [ebp-20], 0
jne .Lt_010B
mov ecx, dword ptr [ebp-16]
mov dword ptr [ebp-20], ecx
.Lt_010B:
.Lt_010A:
.Lt_0107:
.Lt_0106:
push dword ptr [ebp-8]
call ASTDELNODE
add esp, 4
mov ecx, dword ptr [ebp-20]
mov dword ptr [ebp-4], ecx
.Lt_0101:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTLOADUOP, .-ASTLOADUOP
.balign 16
fb_ctor__astznodezuop:
.type fb_ctor__astznodezuop, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__astznodezuop, .-fb_ctor__astznodezuop
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
HSGNLONGINT:
.type HSGNLONGINT, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_0057:
cmp dword ptr [ebp+12], 0
jne .Lt_005A
cmp dword ptr [ebp+8], 0
jne .Lt_005A
.Lt_010C:
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
jmp .Lt_0059
.Lt_005A:
cmp dword ptr [ebp+12], 0
jl .Lt_005B
jg .Lt_010D
cmp dword ptr [ebp+8], 0
jbe .Lt_005B
.Lt_010D:
mov dword ptr [ebp-8], 1
mov dword ptr [ebp-4], 0
jmp .Lt_0059
.Lt_005B:
mov dword ptr [ebp-8], 4294967295
mov dword ptr [ebp-4], 4294967295
.Lt_0059:
.Lt_0058:
mov eax, dword ptr [ebp-8]
mov edx, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size HSGNLONGINT, .-HSGNLONGINT
.balign 16
HCONSTUOP:
.type HCONSTUOP, @function
push ebp
mov ebp, esp
sub esp, 32
push ebx
mov dword ptr [ebp-4], 0
.Lt_005C:
mov eax, dword ptr [ebp+20]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_005E
mov dword ptr [ebp-24], 22
jmp .Lt_010E
.Lt_005E:
mov ebx, dword ptr [ebp+20]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-24], eax
.Lt_010E:
mov eax, dword ptr [ebp-24]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax], 1
jne .Lt_0061
mov eax, dword ptr [ebp+20]
push dword ptr [eax+20]
push dword ptr [eax+24]
pop dword ptr [ebp-8]
pop dword ptr [ebp-12]
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-28], eax
jmp .Lt_0063
.Lt_0065:
fld qword ptr [ebp-12]
fchs
fstp qword ptr [ebp-12]
jmp .Lt_0062
.Lt_0066:
fld qword ptr [ebp-12]
fabs
fstp qword ptr [ebp-12]
jmp .Lt_0062
.Lt_0067:
fld qword ptr [ebp-12]
ftst
fnstsw ax
sahf
jz .Lt_0110
fstp st(0)
fld1
ja .Lt_0110
fchs
.Lt_0110:
fstp qword ptr [ebp-12]
jmp .Lt_0062
.Lt_0068:
fld qword ptr [ebp-12]
fsin
fstp qword ptr [ebp-12]
jmp .Lt_0062
.Lt_0069:
fld qword ptr [ebp-12]
fld st(0)
fmul st(0), st(0)
fld1
fsubrp
fsqrt
fpatan
fstp qword ptr [ebp-12]
jmp .Lt_0062
.Lt_006A:
fld qword ptr [ebp-12]
fcos
fstp qword ptr [ebp-12]
jmp .Lt_0062
.Lt_006B:
fld qword ptr [ebp-12]
fld st(0)
fmul st(0), st(0)
fld1
fsubrp
fsqrt
fxch
fpatan
fstp qword ptr [ebp-12]
jmp .Lt_0062
.Lt_006C:
fld qword ptr [ebp-12]
fptan
fstp st(0)
fstp qword ptr [ebp-12]
jmp .Lt_0062
.Lt_006D:
fld qword ptr [ebp-12]
fld1
fpatan
fstp qword ptr [ebp-12]
jmp .Lt_0062
.Lt_006E:
fld qword ptr [ebp-12]
fsqrt
fstp qword ptr [ebp-12]
jmp .Lt_0062
.Lt_006F:
fld qword ptr [ebp-12]
fldln2
fxch
fyl2x
fstp qword ptr [ebp-12]
jmp .Lt_0062
.Lt_0070:
fld qword ptr [ebp-12]
fldl2e
fmulp st(1), st
fld st
frndint
fsub st(1), st
fxch
f2xm1
push 0x3f800000
fadd dword ptr [esp]
add esp, 4
fscale
fstp st(1)
fstp qword ptr [ebp-12]
jmp .Lt_0062
.Lt_0071:
fld qword ptr [ebp-12]
sub esp, 4
fnstcw [esp]
mov eax, [esp]
and eax, 0b1111001111111111
or eax, 0b0000010000000000
push eax
fldcw [esp]
add esp, 4
frndint
fldcw [esp]
add esp, 4
fstp qword ptr [ebp-12]
jmp .Lt_0062
.Lt_0072:
fld qword ptr [ebp-12]
sub esp, 4
fnstcw [esp]
mov eax, [esp]
or eax, 0b0000110000000000
push eax
fldcw [esp]
add esp, 4
frndint
fldcw [esp]
add esp, 4
fstp qword ptr [ebp-12]
jmp .Lt_0062
.Lt_0073:
fld qword ptr [ebp-12]
sub esp, 4
fnstcw [esp]
mov eax, [esp]
or eax, 0b0000110000000000
push eax
fldcw [esp]
add esp, 4
fld st(0)
frndint
fsubp
fldcw [esp]
add esp, 4
fstp qword ptr [ebp-12]
jmp .Lt_0062
.Lt_0074:
jmp .Lt_0062
.Lt_0063:
mov eax, dword ptr [ebp-28]
add eax, 4294967242
cmp eax, 18
ja .Lt_0074
mov eax, dword ptr [ebp-28]
jmp dword ptr [.LT_0075+eax*4-216]
.LT_0075:
.int .Lt_0065
.int .Lt_0074
.int .Lt_0066
.int .Lt_0067
.int .Lt_0068
.int .Lt_0069
.int .Lt_006A
.int .Lt_006B
.int .Lt_006C
.int .Lt_006D
.int .Lt_0074
.int .Lt_006E
.int .Lt_0074
.int .Lt_0074
.int .Lt_006F
.int .Lt_0070
.int .Lt_0071
.int .Lt_0072
.int .Lt_0073
.Lt_0062:
mov eax, dword ptr [ebp+20]
push dword ptr [ebp-12]
push dword ptr [ebp-8]
pop dword ptr [eax+24]
pop dword ptr [eax+20]
jmp .Lt_0060
.Lt_0061:
mov eax, dword ptr [ebp+20]
mov ecx, dword ptr [eax+20]
mov ebx, dword ptr [eax+24]
mov dword ptr [ebp-20], ecx
mov dword ptr [ebp-16], ebx
mov ecx, dword ptr [ebp+20]
mov ebx, dword ptr [ecx+4]
and ebx, 480
je .Lt_0076
mov dword ptr [ebp-28], 22
jmp .Lt_010F
.Lt_0076:
mov ebx, dword ptr [ebp+20]
mov ecx, dword ptr [ebx+4]
and ecx, 31
mov dword ptr [ebp-28], ecx
.Lt_010F:
mov ecx, dword ptr [ebp-28]
imul ecx, 28
cmp dword ptr [SYMB_DTYPETB+ecx+4], 8
jne .Lt_0079
mov ecx, dword ptr [ebp+8]
mov dword ptr [ebp-32], ecx
jmp .Lt_007B
.Lt_007D:
not dword ptr [ebp-20]
not dword ptr [ebp-16]
jmp .Lt_007A
.Lt_007E:
neg dword ptr [ebp-20]
adc dword ptr [ebp-16], 0
neg dword ptr [ebp-16]
jmp .Lt_007A
.Lt_007F:
mov eax, dword ptr [ebp-16]
sar eax, 31
xor dword ptr [ebp-20], eax
xor dword ptr [ebp-16], eax
sub dword ptr [ebp-20], eax
sbb dword ptr [ebp-16], eax
jmp .Lt_007A
.Lt_0080:
push dword ptr [ebp-16]
push dword ptr [ebp-20]
call HSGNLONGINT
add esp, 8
mov dword ptr [ebp-20], eax
mov dword ptr [ebp-16], edx
jmp .Lt_007A
.Lt_0081:
jmp .Lt_007A
.Lt_007B:
mov eax, dword ptr [ebp-32]
add eax, 4294967244
cmp eax, 5
ja .Lt_0081
mov eax, dword ptr [ebp-32]
jmp dword ptr [.LT_0082+eax*4-208]
.LT_0082:
.int .Lt_007D
.int .Lt_0081
.int .Lt_007E
.int .Lt_0081
.int .Lt_007F
.int .Lt_0080
.Lt_007A:
jmp .Lt_0078
.Lt_0079:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-32], eax
jmp .Lt_0084
.Lt_0086:
mov eax, dword ptr [ebp-20]
not eax
mov ecx, eax
mov edx, ecx
sar edx, 31
mov dword ptr [ebp-20], ecx
mov dword ptr [ebp-16], edx
jmp .Lt_0083
.Lt_0087:
mov ecx, dword ptr [ebp-20]
neg ecx
mov eax, ecx
mov edx, eax
sar edx, 31
mov dword ptr [ebp-20], eax
mov dword ptr [ebp-16], edx
jmp .Lt_0083
.Lt_0088:
mov eax, dword ptr [ebp-20]
mov ebx, eax
sar ebx, 31
xor eax, ebx
sub eax, ebx
mov ecx, eax
mov edx, ecx
sar edx, 31
mov dword ptr [ebp-20], ecx
mov dword ptr [ebp-16], edx
jmp .Lt_0083
.Lt_0089:
mov ecx, dword ptr [ebp-20]
cmp ecx, 0
je .Lt_0111
mov ecx, 1
jg .Lt_0111
mov ecx, -1
.Lt_0111:
mov eax, ecx
mov edx, eax
sar edx, 31
mov dword ptr [ebp-20], eax
mov dword ptr [ebp-16], edx
jmp .Lt_0083
.Lt_008A:
jmp .Lt_0083
.Lt_0084:
mov eax, dword ptr [ebp-32]
add eax, 4294967244
cmp eax, 5
ja .Lt_008A
mov eax, dword ptr [ebp-32]
jmp dword ptr [.LT_008B+eax*4-208]
.LT_008B:
.int .Lt_0086
.int .Lt_008A
.int .Lt_0087
.int .Lt_008A
.int .Lt_0088
.int .Lt_0089
.Lt_0083:
.Lt_0078:
mov eax, dword ptr [ebp+20]
mov ecx, dword ptr [ebp-20]
mov edx, dword ptr [ebp-16]
mov dword ptr [eax+20], ecx
mov dword ptr [eax+24], edx
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call ASTCONVERTRAWCONSTI
add esp, 12
mov dword ptr [ebp+20], eax
.Lt_0060:
mov eax, dword ptr [ebp+20]
mov dword ptr [ebp-4], eax
.Lt_005D:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HCONSTUOP, .-HCONSTUOP
	#fbc-1.01.0/src/compiler/ast-node-uop.bas' compilation took 0.03567903011571616 secs

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
.int fb_ctor__astznodezuop
