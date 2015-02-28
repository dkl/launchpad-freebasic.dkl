	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/ast-node-addr.bas' compilation started at 15:27:32 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl ASTGETOFFSETCHILDOFS
ASTGETOFFSETCHILDOFS:
.type ASTGETOFFSETCHILDOFS, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
push esi
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_0056:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 17
jne .Lt_0059
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+20]
mov ebx, dword ptr [eax+24]
mov dword ptr [ebp-8], ecx
mov dword ptr [ebp-4], ebx
jmp .Lt_0058
.Lt_0059:
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+60]
mov esi, dword ptr [eax+20]
mov ebx, dword ptr [eax+24]
add esi, dword ptr [ecx+20]
adc ebx, dword ptr [ecx+24]
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ecx+12]
add esi, dword ptr [eax+64]
adc ebx, dword ptr [eax+68]
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+12]
add esi, dword ptr [ecx+44]
adc ebx, dword ptr [ecx+48]
mov dword ptr [ebp-8], esi
mov dword ptr [ebp-4], ebx
.Lt_0058:
.Lt_0057:
mov eax, dword ptr [ebp-8]
mov edx, dword ptr [ebp-4]
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTGETOFFSETCHILDOFS, .-ASTGETOFFSETCHILDOFS
.balign 16

.globl ASTLOADOFFSET
ASTLOADOFFSET:
.type ASTLOADOFFSET, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
mov dword ptr [ebp-4], 0
.Lt_0060:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+12]
mov dword ptr [ebp-12], ebx
cmp dword ptr [ebp-12], 0
je .Lt_0063
mov ebx, dword ptr [ebp-12]
mov eax, dword ptr [ebx+8]
or eax, 2
mov ebx, eax
mov eax, dword ptr [ebp-12]
mov dword ptr [eax+8], ebx
.Lt_0063:
.Lt_0062:
cmp dword ptr [AST+136], 0
je .Lt_0065
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+24]
push dword ptr [ebx+20]
push dword ptr [ebp-12]
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+8]
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 511
push eax
call dword ptr [IR+260]
add esp, 20
mov dword ptr [ebp-8], eax
.Lt_0065:
.Lt_0064:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-16], ebx
mov ebx, dword ptr [ebp-16]
cmp dword ptr [ebx], 18
jne .Lt_0067
mov ebx, dword ptr [ebp-16]
push dword ptr [ebx+56]
call ASTDELNODE
add esp, 4
mov ebx, dword ptr [ebp-16]
push dword ptr [ebx+60]
call ASTDELNODE
add esp, 4
.Lt_0067:
.Lt_0066:
push dword ptr [ebp-16]
call ASTDELNODE
add esp, 4
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ebx
.Lt_0061:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTLOADOFFSET, .-ASTLOADOFFSET
.balign 16

.globl ASTNEWADDROF
ASTNEWADDROF:
.type ASTNEWADDROF, @function
push ebp
mov ebp, esp
sub esp, 28
push ebx
mov dword ptr [ebp-4], 0
.Lt_007C:
cmp dword ptr [ebp+8], 0
jne .Lt_007F
mov dword ptr [ebp-4], 0
jmp .Lt_007D
.Lt_007F:
.Lt_007E:
push dword ptr [ebp+8]
call ASTSKIPNOCONVCAST
add esp, 4
mov dword ptr [ebp-20], eax
mov dword ptr [ebp-8], 0
mov eax, dword ptr [ebp-20]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-24], ebx
cmp dword ptr [ebp-24], 20
jne .Lt_0082
.Lt_0083:
cmp dword ptr [ENV+156], 0
je .Lt_0085
push dword ptr [ebp-20]
call HREMOVENULLPTRCHECK
add esp, 4
.Lt_0085:
.Lt_0084:
mov ebx, dword ptr [ebp-20]
cmp dword ptr [ebx+56], 0
je .Lt_0087
mov ebx, dword ptr [ebp-20]
cmp dword ptr [ebx+24], 0
jne .Lt_0089
cmp dword ptr [ebx+20], 0
jne .Lt_0089
.Lt_00A6:
mov ebx, dword ptr [ebp-20]
mov eax, dword ptr [ebx+56]
mov dword ptr [ebp-8], eax
push dword ptr [ebp-20]
call ASTDELNODE
add esp, 4
.Lt_0089:
.Lt_0088:
jmp .Lt_0086
.Lt_0087:
push 0
push 7
mov eax, dword ptr [ebp-20]
push dword ptr [eax+24]
push dword ptr [eax+20]
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-8], eax
push dword ptr [ebp-20]
call ASTDELNODE
add esp, 4
.Lt_0086:
jmp .Lt_0080
.Lt_0082:
cmp dword ptr [ebp-24], 19
jne .Lt_008A
.Lt_008B:
mov eax, dword ptr [ebp-20]
mov ebx, dword ptr [eax+56]
cmp dword ptr [ebx], 20
jne .Lt_008D
cmp dword ptr [ENV+156], 0
je .Lt_008F
mov ebx, dword ptr [ebp-20]
push dword ptr [ebx+56]
call HREMOVENULLPTRCHECK
add esp, 4
.Lt_008F:
.Lt_008E:
mov ebx, dword ptr [ebp-20]
mov eax, dword ptr [ebx+56]
cmp dword ptr [eax+56], 0
jne .Lt_0091
push 0
push 7
mov eax, dword ptr [ebp-20]
mov ebx, dword ptr [eax+56]
push dword ptr [ebx+24]
push dword ptr [ebx+20]
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-20]
push dword ptr [eax+56]
call ASTDELNODE
add esp, 4
push dword ptr [ebp-20]
call ASTDELNODE
add esp, 4
.Lt_0091:
.Lt_0090:
.Lt_008D:
.Lt_008C:
jmp .Lt_0080
.Lt_008A:
cmp dword ptr [ebp-24], 17
jne .Lt_0092
.Lt_0093:
mov eax, dword ptr [ebp-20]
mov ebx, dword ptr [eax+12]
mov dword ptr [ebp-28], ebx
cmp dword ptr [ebp-28], 0
je .Lt_0095
mov ebx, dword ptr [ebp-28]
mov eax, dword ptr [ebx+4]
and eax, 128
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp-28]
mov ecx, dword ptr [ebx+4]
and ecx, 11
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
or eax, ecx
je .Lt_0097
push dword ptr [ebp-20]
call ASTNEWOFFSET
add esp, 4
mov dword ptr [ebp-8], eax
.Lt_0097:
.Lt_0096:
.Lt_0095:
.Lt_0094:
jmp .Lt_0080
.Lt_0092:
cmp dword ptr [ebp-24], 18
jne .Lt_0098
.Lt_0099:
mov eax, dword ptr [ebp+8]
cmp dword ptr [ebp-20], eax
je .Lt_009B
push dword ptr [ebp-20]
call ASTOPTIMIZETREE
add esp, 4
mov dword ptr [ebp-20], eax
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [ebp-20]
mov dword ptr [eax+56], ecx
jmp .Lt_009A
.Lt_009B:
push dword ptr [ebp-20]
call ASTOPTIMIZETREE
add esp, 4
mov dword ptr [ebp-20], eax
mov eax, dword ptr [ebp-20]
mov dword ptr [ebp+8], eax
.Lt_009A:
mov eax, dword ptr [ebp-20]
cmp dword ptr [eax+56], 0
jne .Lt_009D
mov eax, dword ptr [ebp-20]
mov ecx, dword ptr [eax+12]
mov dword ptr [ebp-28], ecx
mov ecx, dword ptr [ebp-28]
mov eax, dword ptr [ecx+4]
and eax, 128
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
sete al
shr eax, 1
sbb eax, eax
mov ecx, dword ptr [ebp-28]
mov ebx, dword ptr [ecx+4]
and ebx, 11
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
je .Lt_009F
mov ebx, dword ptr [ebp-28]
mov eax, dword ptr [ebx+4]
and eax, 65540
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_00A1
push dword ptr [ebp-20]
call ASTNEWOFFSET
add esp, 4
mov dword ptr [ebp-8], eax
.Lt_00A1:
.Lt_00A0:
.Lt_009F:
.Lt_009E:
.Lt_009D:
.Lt_009C:
.Lt_0098:
.Lt_0080:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 31
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+4]
and ecx, 480
add ecx, 32
or ebx, ecx
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ecx+4]
and eax, 261632
sal eax, 1
or ebx, eax
mov dword ptr [ebp-12], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+8]
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-8], 0
je .Lt_00A3
mov eax, dword ptr [ebp+8]
cmp dword ptr [ebp-20], eax
je .Lt_00A5
push dword ptr [ebp+8]
call ASTDELNODE
add esp, 4
.Lt_00A5:
.Lt_00A4:
push 0
push 8
push dword ptr [ebp-8]
push dword ptr [ebp-16]
push dword ptr [ebp-12]
call ASTNEWCONV
add esp, 20
mov dword ptr [ebp-4], eax
jmp .Lt_007D
.Lt_00A3:
.Lt_00A2:
push dword ptr [ebp-16]
push dword ptr [ebp-12]
push 6
call ASTNEWNODE
add esp, 12
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov dword ptr [eax+20], 22
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+8]
mov dword ptr [eax+56], ebx
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ebx
.Lt_007D:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTNEWADDROF, .-ASTNEWADDROF
.balign 16

.globl ASTLOADADDROF
ASTLOADADDROF:
.type ASTLOADADDROF, @function
push ebp
mov ebp, esp
sub esp, 32
push ebx
mov dword ptr [ebp-4], 0
.Lt_00AE:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-8], ebx
cmp dword ptr [ebp-8], 0
jne .Lt_00B1
mov dword ptr [ebp-4], 0
jmp .Lt_00AF
.Lt_00B1:
.Lt_00B0:
push dword ptr [ebp-8]
call ASTLOAD
add esp, 4
mov dword ptr [ebp-12], eax
cmp dword ptr [AST+136], 0
je .Lt_00B3
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax]
cmp ebx, 4
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
sete bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-28], ebx
mov ebx, dword ptr [ebp-12]
mov eax, dword ptr [ebx+4]
and eax, 480
je .Lt_00B4
mov dword ptr [ebp-20], 22
jmp .Lt_00BA
.Lt_00B4:
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax+4]
and ebx, 31
mov dword ptr [ebp-20], ebx
.Lt_00BA:
mov ebx, dword ptr [ebp-20]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx]
test eax, eax
setne al
shr eax, 1
sbb eax, eax
or eax, dword ptr [ebp-28]
mov dword ptr [ebp-32], eax
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_00B6
mov dword ptr [ebp-24], 22
jmp .Lt_00BB
.Lt_00B6:
mov ebx, dword ptr [ebp-12]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-24], eax
.Lt_00BB:
mov eax, dword ptr [ebp-24]
imul eax, 28
mov ebx, dword ptr [ENV+236]
cmp ebx, dword ptr [SYMB_DTYPETB+eax+4]
setne bl
shr ebx, 1
sbb ebx, ebx
or ebx, dword ptr [ebp-32]
je .Lt_00B9
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+8]
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 511
push eax
call dword ptr [IR+236]
add esp, 8
mov dword ptr [ebp-16], eax
push dword ptr [ebp-16]
push dword ptr [ebp-12]
push 22
call dword ptr [IR+136]
add esp, 12
jmp .Lt_00B8
.Lt_00B9:
mov eax, dword ptr [ebp-12]
mov dword ptr [ebp-16], eax
.Lt_00B8:
.Lt_00B3:
.Lt_00B2:
push dword ptr [ebp-8]
call ASTDELNODE
add esp, 4
mov eax, dword ptr [ebp-16]
mov dword ptr [ebp-4], eax
.Lt_00AF:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTLOADADDROF, .-ASTLOADADDROF
.balign 16
fb_ctor__astznodezaddr:
.type fb_ctor__astznodezaddr, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__astznodezaddr, .-fb_ctor__astznodezaddr
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
ASTNEWOFFSET:
.type ASTNEWOFFSET, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_005A:
cmp dword ptr [ebp+8], 0
jne .Lt_005D
mov dword ptr [ebp-4], 0
jmp .Lt_005B
.Lt_005D:
.Lt_005C:
mov eax, dword ptr [ebp+8]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 31
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+4]
and ecx, 480
add ecx, 32
or ebx, ecx
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ecx+4]
and eax, 261632
sal eax, 1
or ebx, eax
push ebx
push 23
call ASTNEWNODE
add esp, 12
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+8]
mov dword ptr [eax+56], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp-8]
mov ecx, dword ptr [ebx+12]
mov dword ptr [eax+12], ecx
push dword ptr [ebp+8]
call ASTGETOFFSETCHILDOFS
add esp, 4
mov ecx, dword ptr [ebp-8]
mov dword ptr [ecx+20], eax
mov dword ptr [ecx+24], edx
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+12], 0
je .Lt_005F
mov eax, dword ptr [ebp+8]
mov edx, dword ptr [eax+12]
mov eax, dword ptr [edx+8]
or eax, 2
mov edx, eax
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+12]
mov dword ptr [ecx+8], edx
.Lt_005F:
.Lt_005E:
mov edx, dword ptr [ebp-8]
mov dword ptr [ebp-4], edx
.Lt_005B:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTNEWOFFSET, .-ASTNEWOFFSET
.balign 16
HREMOVENULLPTRCHECK:
.type HREMOVENULLPTRCHECK, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
.Lt_0068:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-4], ebx
cmp dword ptr [ebp-4], 0
jne .Lt_006B
jmp .Lt_0069
.Lt_006B:
.Lt_006A:
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebx]
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 32
jne .Lt_006E
.Lt_006F:
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [eax+56]
mov dword ptr [ebx+56], ecx
mov ecx, dword ptr [ebp-4]
push dword ptr [ecx+60]
call ASTDELTREE
add esp, 4
push dword ptr [ebp-4]
call ASTDELNODE
add esp, 4
jmp .Lt_006C
.Lt_006E:
cmp dword ptr [ebp-12], 3
jne .Lt_0070
.Lt_0071:
.Lt_0072:
mov ecx, dword ptr [ebp-4]
mov ebx, dword ptr [ecx+56]
mov dword ptr [ebp-8], ebx
mov ebx, dword ptr [ebp-8]
mov ecx, dword ptr [ebx]
mov dword ptr [ebp-16], ecx
cmp dword ptr [ebp-16], 32
jne .Lt_0077
.Lt_0078:
mov ecx, dword ptr [ebp-8]
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ecx+56]
mov dword ptr [ebx+56], eax
mov eax, dword ptr [ebp-8]
push dword ptr [eax+60]
call ASTDELTREE
add esp, 4
push dword ptr [ebp-8]
call ASTDELNODE
add esp, 4
jmp .Lt_0073
jmp .Lt_0075
.Lt_0077:
cmp dword ptr [ebp-16], 3
jne .Lt_0079
.Lt_007A:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
jmp .Lt_0075
.Lt_0079:
jmp .Lt_0073
.Lt_007B:
.Lt_0075:
.Lt_0074:
jmp .Lt_0072
.Lt_0073:
.Lt_0070:
.Lt_006C:
.Lt_0069:
pop ebx
mov esp, ebp
pop ebp
ret
.size HREMOVENULLPTRCHECK, .-HREMOVENULLPTRCHECK
	#fbc-1.01.0/src/compiler/ast-node-addr.bas' compilation took 0.0275268986588344 secs

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
.int fb_ctor__astznodezaddr
