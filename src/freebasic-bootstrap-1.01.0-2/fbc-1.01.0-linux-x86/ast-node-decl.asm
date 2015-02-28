	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/ast-node-decl.bas' compilation started at 14:16:33 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl ASTNEWDECL
ASTNEWDECL:
.type ASTNEWDECL, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0064:
push 0
push -2147483648
push 24
call ASTNEWNODE
add esp, 12
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+8]
mov dword ptr [eax+12], ebx
cmp dword ptr [ebp+12], 0
je .Lt_0067
push dword ptr [ebp+8]
call HDEFAULTINIT
add esp, 4
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+56], eax
.Lt_0067:
.Lt_0066:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0065:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTNEWDECL, .-ASTNEWDECL
.balign 16

.globl ASTLOADDECL
ASTLOADDECL:
.type ASTLOADDECL, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_0068:
cmp dword ptr [AST+136], 0
je .Lt_006B
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+12]
mov eax, dword ptr [ebx+4]
and eax, 128
test eax, eax
je .Lt_006D
mov eax, dword ptr [ebp+8]
push dword ptr [eax+12]
call dword ptr [IR+176]
add esp, 4
.Lt_006D:
.Lt_006C:
.Lt_006B:
.Lt_006A:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+56], 0
je .Lt_006F
mov eax, dword ptr [ebp+8]
push dword ptr [eax+56]
call ASTLOAD
add esp, 4
mov eax, dword ptr [ebp+8]
push dword ptr [eax+56]
call ASTDELNODE
add esp, 4
.Lt_006F:
.Lt_006E:
mov dword ptr [ebp-4], 0
.Lt_0069:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTLOADDECL, .-ASTLOADDECL
.balign 16
fb_ctor__astznodezdecl:
.type fb_ctor__astznodezdecl, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__astznodezdecl, .-fb_ctor__astznodezdecl
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
HCTORLIST:
.type HCTORLIST, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
mov dword ptr [ebp-4], 0
.Lt_0056:
mov dword ptr [ebp-24], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+28]
mov dword ptr [ebp-20], ebx
push 0
push 7
call SYMBADDTEMPVAR
add esp, 8
mov dword ptr [ebp-8], eax
push 4
push 0
call SYMBADDLABEL
add esp, 8
mov dword ptr [ebp-12], eax
push dword ptr [ebp-20]
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+24]
and ebx, 511
and ebx, 31
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+24]
and ecx, 511
and ecx, 480
add ecx, 32
or ebx, ecx
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ecx+24]
and eax, 511
and eax, 261632
sal eax, 1
or ebx, eax
push ebx
call SYMBADDTEMPVAR
add esp, 8
mov dword ptr [ebp-16], eax
push -1
push 64
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp+8]
call ASTNEWVAR
add esp, 20
push eax
call ASTNEWADDROF
add esp, 4
push eax
push dword ptr [ebp-16]
call _Z17ASTBUILDVARASSIGNP8FBSYMBOLP7ASTNODEi
add esp, 12
push eax
push dword ptr [ebp-24]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-24], eax
push -1
push 0
push dword ptr [ebp-12]
push dword ptr [ebp-8]
push dword ptr [ebp-24]
call ASTBUILDFORBEGIN
add esp, 20
mov dword ptr [ebp-24], eax
push -1
push dword ptr [ebp-16]
call ASTBUILDVARDEREF
add esp, 4
push eax
mov eax, dword ptr [ebp+8]
push dword ptr [eax+28]
call ASTBUILDCTORCALL
add esp, 8
push eax
push dword ptr [ebp-24]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-24], eax
push -1
push 1
push dword ptr [ebp-16]
call ASTBUILDVARINC
add esp, 8
push eax
push dword ptr [ebp-24]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-24], eax
push 0
push 7
mov eax, dword ptr [ebp+8]
push dword ptr [eax+76]
push dword ptr [eax+72]
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp-12]
push dword ptr [ebp-8]
push dword ptr [ebp-24]
call ASTBUILDFOREND
add esp, 16
mov dword ptr [ebp-24], eax
mov eax, dword ptr [ebp-24]
mov dword ptr [ebp-4], eax
.Lt_0057:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HCTORLIST, .-HCTORLIST
.balign 16
HDEFAULTINIT:
.type HDEFAULTINIT, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
push esi
mov dword ptr [ebp-4], 0
.Lt_0058:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 15
test ebx, ebx
je .Lt_005B
jmp .Lt_0059
.Lt_005B:
.Lt_005A:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+8]
and eax, 2048
test eax, eax
je .Lt_005D
jmp .Lt_0059
.Lt_005D:
.Lt_005C:
push dword ptr [ebp+8]
call SYMBHASDEFCTOR
add esp, 4
test eax, eax
je .Lt_005F
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 16777216
test ebx, ebx
je .Lt_0061
jmp .Lt_0059
.Lt_0061:
.Lt_0060:
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx+56], 0
jne .Lt_0063
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp+8]
call ASTNEWVAR
add esp, 20
push eax
mov eax, dword ptr [ebp+8]
push dword ptr [eax+28]
call ASTBUILDCTORCALL
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_0062
.Lt_0063:
push dword ptr [ebp+8]
call HCTORLIST
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_0062:
jmp .Lt_0059
.Lt_005F:
.Lt_005E:
push 0
push 0
push 0
push 7
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+8]
mov esi, dword ptr [ebx+72]
mov ecx, dword ptr [ebx+76]
push dword ptr [eax+40]
push dword ptr [eax+36]
push ecx
push esi
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
pop esi
pop ecx
add esp, 8
push ecx
push esi
call ASTNEWCONSTI
add esp, 16
push eax
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp+8]
call ASTNEWVAR
add esp, 20
push eax
push 106
call ASTNEWMEM
add esp, 20
mov dword ptr [ebp-4], eax
.Lt_0059:
mov eax, dword ptr [ebp-4]
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size HDEFAULTINIT, .-HDEFAULTINIT
	#fbc-1.01.0/src/compiler/ast-node-decl.bas' compilation took 0.02562910330016166 secs

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
.int fb_ctor__astznodezdecl
