	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/ast-node-check.bas' compilation started at 14:16:33 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl ASTNEWBOUNDCHK
ASTNEWBOUNDCHK:
.type ASTNEWBOUNDCHK, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
push esi
mov dword ptr [ebp-4], 0
.Lt_005F:
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax], 16
jne .Lt_0062
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 16
jne .Lt_0064
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+12]
mov esi, dword ptr [ebx+20]
mov ecx, dword ptr [ebx+24]
cmp dword ptr [eax+24], ecx
jg .Lt_0066
jl .Lt_006B
cmp dword ptr [eax+20], esi
jae .Lt_0066
.Lt_006B:
mov dword ptr [ebp-4], 0
jmp .Lt_0060
.Lt_0066:
.Lt_0065:
mov esi, dword ptr [ebp+8]
mov ecx, dword ptr [ebp+16]
mov ebx, dword ptr [ecx+20]
mov eax, dword ptr [ecx+24]
cmp dword ptr [esi+24], eax
jl .Lt_0068
jg .Lt_006C
cmp dword ptr [esi+20], ebx
jbe .Lt_0068
.Lt_006C:
mov dword ptr [ebp-4], 0
jmp .Lt_0060
.Lt_0068:
.Lt_0067:
push dword ptr [ebp+12]
call ASTDELNODE
add esp, 4
push dword ptr [ebp+16]
call ASTDELNODE
add esp, 4
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebp-4], ebx
jmp .Lt_0060
.Lt_0064:
.Lt_0063:
mov ebx, dword ptr [ebp+12]
cmp dword ptr [ebx+24], 0
jne .Lt_006A
cmp dword ptr [ebx+20], 0
jne .Lt_006A
.Lt_006D:
push dword ptr [ebp+12]
call ASTDELNODE
add esp, 4
mov dword ptr [ebp+12], 0
.Lt_006A:
.Lt_0069:
.Lt_0062:
.Lt_0061:
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+8]
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+4]
push 31
call ASTNEWNODE
add esp, 12
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+8]
mov dword ptr [eax+56], ebx
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+8]
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+4]
call SYMBADDTEMPVAR
add esp, 8
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+12], eax
push dword ptr [ebp+24]
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push 0
push -2147483648
push 0
push 0
mov eax, dword ptr [ebp-8]
push dword ptr [eax+12]
call ASTNEWVAR
add esp, 20
push eax
call RTLARRAYBOUNDSCHECK
add esp, 20
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+60], eax
.Lt_0060:
mov eax, dword ptr [ebp-4]
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTNEWBOUNDCHK, .-ASTNEWBOUNDCHK
.balign 16

.globl ASTLOADBOUNDCHK
ASTLOADBOUNDCHK:
.type ASTLOADBOUNDCHK, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
mov dword ptr [ebp-4], 0
.Lt_006E:
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
je .Lt_0071
mov dword ptr [ebp-4], 0
jmp .Lt_006F
.Lt_0071:
.Lt_0070:
push 64
push dword ptr [ebp-8]
push 0
push -2147483648
push 0
push 0
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+12]
call ASTNEWVAR
add esp, 20
push eax
call ASTNEWASSIGN
add esp, 12
mov dword ptr [ebp-16], eax
push dword ptr [ebp-16]
call ASTLOAD
add esp, 4
push dword ptr [ebp-16]
call ASTDELNODE
add esp, 4
push dword ptr [ebp-12]
call ASTLOAD
add esp, 4
mov dword ptr [ebp-24], eax
push dword ptr [ebp-12]
call ASTDELNODE
add esp, 4
cmp dword ptr [AST+136], 0
je .Lt_0073
push 4
push 0
call SYMBADDLABEL
add esp, 8
mov dword ptr [ebp-20], eax
push dword ptr [ebp-20]
push 0
push 0
push 0
push 0
push 7
call dword ptr [IR+240]
add esp, 16
push eax
push dword ptr [ebp-24]
push 45
call dword ptr [IR+108]
add esp, 20
push dword ptr [ebp-24]
call dword ptr [IR+152]
add esp, 4
push dword ptr [ebp-20]
call dword ptr [IR+68]
add esp, 4
.Lt_0073:
.Lt_0072:
push 0
push -2147483648
push 0
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax+12]
call ASTNEWVAR
add esp, 20
mov dword ptr [ebp-16], eax
push dword ptr [ebp-16]
call ASTLOAD
add esp, 4
mov dword ptr [ebp-4], eax
push dword ptr [ebp-16]
call ASTDELNODE
add esp, 4
.Lt_006F:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTLOADBOUNDCHK, .-ASTLOADBOUNDCHK
.balign 16

.globl ASTBUILDBOUNDCHK
ASTBUILDBOUNDCHK:
.type ASTBUILDBOUNDCHK, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_0076:
lea eax, [ENV+244]
push eax
mov eax, dword ptr [LEX+839664]
push dword ptr [eax+16548]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call ASTNEWBOUNDCHK
add esp, 20
mov dword ptr [ebp-4], eax
.Lt_0077:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size ASTBUILDBOUNDCHK, .-ASTBUILDBOUNDCHK
.balign 16

.globl ASTNEWPTRCHK
ASTNEWPTRCHK:
.type ASTNEWPTRCHK, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
mov dword ptr [ebp-4], 0
.Lt_0078:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 16
jne .Lt_007B
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
jmp .Lt_0079
.Lt_007B:
.Lt_007A:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-12], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+8]
mov dword ptr [ebp-16], eax
push dword ptr [ebp-16]
push dword ptr [ebp-12]
push 32
call ASTNEWNODE
add esp, 12
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+8]
mov dword ptr [eax+56], ebx
push dword ptr [ebp-16]
push dword ptr [ebp-12]
call SYMBADDTEMPVAR
add esp, 8
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+12], eax
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push 0
push -2147483648
push 0
push 0
mov eax, dword ptr [ebp-8]
push dword ptr [eax+12]
call ASTNEWVAR
add esp, 20
push eax
call RTLNULLPTRCHECK
add esp, 12
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+60], eax
.Lt_0079:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTNEWPTRCHK, .-ASTNEWPTRCHK
.balign 16

.globl ASTLOADPTRCHK
ASTLOADPTRCHK:
.type ASTLOADPTRCHK, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
mov dword ptr [ebp-4], 0
.Lt_007C:
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
je .Lt_007F
mov dword ptr [ebp-4], 0
jmp .Lt_007D
.Lt_007F:
.Lt_007E:
push 64
push dword ptr [ebp-8]
push 0
push -2147483648
push 0
push 0
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+12]
call ASTNEWVAR
add esp, 20
push eax
call ASTNEWASSIGN
add esp, 12
mov dword ptr [ebp-16], eax
push dword ptr [ebp-16]
call ASTLOAD
add esp, 4
push dword ptr [ebp-16]
call ASTDELNODE
add esp, 4
push dword ptr [ebp-12]
call ASTLOAD
add esp, 4
mov dword ptr [ebp-24], eax
push dword ptr [ebp-12]
call ASTDELNODE
add esp, 4
cmp dword ptr [AST+136], 0
je .Lt_0081
push 4
push 0
call SYMBADDLABEL
add esp, 8
mov dword ptr [ebp-20], eax
push dword ptr [ebp-20]
push 0
push 0
push 0
push 0
push 7
call dword ptr [IR+240]
add esp, 16
push eax
push dword ptr [ebp-24]
push 45
call dword ptr [IR+108]
add esp, 20
push dword ptr [ebp-24]
call dword ptr [IR+152]
add esp, 4
push dword ptr [ebp-20]
call dword ptr [IR+68]
add esp, 4
.Lt_0081:
.Lt_0080:
push 0
push -2147483648
push 0
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax+12]
call ASTNEWVAR
add esp, 20
mov dword ptr [ebp-16], eax
push dword ptr [ebp-16]
call ASTLOAD
add esp, 4
mov dword ptr [ebp-4], eax
push dword ptr [ebp-16]
call ASTDELNODE
add esp, 4
.Lt_007D:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTLOADPTRCHK, .-ASTLOADPTRCHK
.balign 16

.globl ASTBUILDPTRCHK
ASTBUILDPTRCHK:
.type ASTBUILDPTRCHK, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_0084:
lea eax, [ENV+244]
push eax
mov eax, dword ptr [LEX+839664]
push dword ptr [eax+16548]
push dword ptr [ebp+8]
call ASTNEWPTRCHK
add esp, 12
mov dword ptr [ebp-4], eax
.Lt_0085:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size ASTBUILDPTRCHK, .-ASTBUILDPTRCHK
.balign 16
fb_ctor__astznodezcheck:
.type fb_ctor__astznodezcheck, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__astznodezcheck, .-fb_ctor__astznodezcheck
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
	#fbc-1.01.0/src/compiler/ast-node-check.bas' compilation took 0.03329390741419047 secs

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
.int fb_ctor__astznodezcheck
