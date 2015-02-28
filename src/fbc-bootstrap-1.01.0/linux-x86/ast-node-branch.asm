	.intel_syntax noprefix

	#FreeBASIC-1.01.0-source/src/compiler/ast-node-branch.bas' compilation started at 16:30:02 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl ASTNEWBRANCH
ASTNEWBRANCH:
.type ASTNEWBRANCH, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_0056:
cmp dword ptr [ebp+16], 0
jne .Lt_0059
mov dword ptr [ebp-12], -2147483648
jmp .Lt_0058
.Lt_0059:
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-12], ebx
.Lt_0058:
push 0
push dword ptr [ebp-12]
push 7
call ASTNEWNODE
add esp, 12
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+16]
mov dword ptr [eax+56], ebx
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebp+8]
mov dword ptr [ebx+20], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+12]
mov dword ptr [eax+28], ebx
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+24], 1
.Lt_0057:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTNEWBRANCH, .-ASTNEWBRANCH
.balign 16

.globl ASTLOADBRANCH
ASTLOADBRANCH:
.type ASTLOADBRANCH, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
mov dword ptr [ebp-4], 0
.Lt_005A:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-8], ebx
cmp dword ptr [ebp-8], 0
je .Lt_005D
push dword ptr [ebp-8]
call ASTLOAD
add esp, 4
mov dword ptr [ebp-12], eax
push dword ptr [ebp-8]
call ASTDELNODE
add esp, 4
jmp .Lt_005C
.Lt_005D:
mov dword ptr [ebp-12], 0
.Lt_005C:
cmp dword ptr [AST+136], 0
je .Lt_005F
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+28], 0
jne .Lt_0061
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+20]
mov dword ptr [ebp-16], ebx
cmp dword ptr [ebp-16], 103
jne .Lt_0064
.Lt_0065:
push dword ptr [ebp-12]
call dword ptr [IR+152]
add esp, 4
jmp .Lt_0062
.Lt_0064:
cmp dword ptr [ebp-16], 100
jne .Lt_0066
.Lt_0067:
push 0
call dword ptr [IR+72]
add esp, 4
.Lt_0066:
.Lt_0068:
.Lt_0062:
jmp .Lt_0060
.Lt_0061:
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+28]
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+20]
call dword ptr [IR+156]
add esp, 8
.Lt_0060:
.Lt_005F:
.Lt_005E:
mov ebx, dword ptr [ebp-12]
mov dword ptr [ebp-4], ebx
.Lt_005B:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTLOADBRANCH, .-ASTLOADBRANCH
.balign 16

.globl ASTLOADJMPTB
ASTLOADJMPTB:
.type ASTLOADJMPTB, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_0072:
mov eax, dword ptr [ebp+8]
push dword ptr [eax+56]
call ASTLOAD
add esp, 4
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp+8]
push dword ptr [eax+56]
call ASTDELNODE
add esp, 4
cmp dword ptr [AST+136], 0
je .Lt_0075
mov eax, dword ptr [ebp+8]
push dword ptr [eax+48]
push dword ptr [eax+44]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+40]
push dword ptr [eax+36]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+32]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+28]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+24]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+20]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+12]
push dword ptr [ebp-8]
call dword ptr [IR+160]
add esp, 40
.Lt_0075:
.Lt_0074:
mov eax, dword ptr [ebp+8]
push dword ptr [eax+20]
call free
add esp, 4
mov eax, dword ptr [ebp+8]
push dword ptr [eax+24]
call free
add esp, 4
mov dword ptr [ebp-4], 0
.Lt_0073:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size ASTLOADJMPTB, .-ASTLOADJMPTB
.balign 16

.globl ASTBUILDJMPTB
ASTBUILDJMPTB:
.type ASTBUILDJMPTB, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
push esi
push edi
mov dword ptr [ebp-4], 0
.Lt_0076:
mov dword ptr [ebp-8], 0
mov eax, dword ptr [ENV+104]
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 0
je .Lt_007C
.Lt_007D:
cmp dword ptr [ebp-20], 2
jne .Lt_007B
.Lt_007C:
cmp dword ptr [ebp+20], 0
jg .Lt_007F
push 0
push dword ptr [ebp+24]
push 97
call ASTNEWBRANCH
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_0077
.Lt_007F:
.Lt_007E:
.Lt_007B:
.Lt_0079:
cmp dword ptr [ENV+104], 0
jne .Lt_0081
push 0
push 1
push offset Lt_0082
push 0
push 0
push 0
push 0
push 32
push 0
call SYMBUNIQUELABEL
push eax
call SYMBADDVAR
add esp, 40
mov dword ptr [ebp-16], eax
mov eax, dword ptr [ebp-16]
mov ebx, dword ptr [eax+8]
or ebx, 32768
mov eax, ebx
mov ebx, dword ptr [ebp-16]
mov dword ptr [ebx+8], eax
push -1
push 0
push dword ptr [ebp+24]
push 0
push 8
mov ebx, dword ptr [ebp+36]
mov eax, dword ptr [ebp+40]
sub ebx, dword ptr [ebp+28]
sbb eax, dword ptr [ebp+32]
mov esi, ebx
mov ecx, eax
push ecx
push esi
call ASTNEWCONSTI
add esp, 16
push eax
push 1
push 0
push 0
push 8
push dword ptr [ebp+32]
push dword ptr [ebp+28]
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
push 29
call ASTNEWBOP
add esp, 20
push eax
push 46
call ASTNEWBOP
add esp, 20
push eax
push dword ptr [ebp-8]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-8], eax
push -1
push 0
push 32
push 1
push 0
push 0
push 8
mov esi, dword ptr [ENV+236]
mov eax, esi
sar eax, 31
push eax
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
push 30
call ASTNEWBOP
add esp, 20
push eax
push 0
push -2147483648
mov esi, dword ptr [ebp+28]
mov eax, dword ptr [ebp+32]
neg esi
adc eax, 0
neg eax
mov ebx, dword ptr [ENV+236]
mov ecx, ebx
sar ecx, 31
push ecx
push ebx
push eax
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
pop eax
add esp, 8
mov edx, esi
mov edi, eax
push edi
push edx
push dword ptr [ebp-16]
call ASTNEWVAR
add esp, 20
push eax
call ASTNEWIDX
add esp, 16
push eax
push 0
push 103
call ASTNEWBRANCH
add esp, 12
push eax
push dword ptr [ebp-8]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-8], eax
jmp .Lt_0080
.Lt_0081:
mov dword ptr [ebp-16], 0
.Lt_0080:
push -1
push dword ptr [ebp+40]
push dword ptr [ebp+36]
push dword ptr [ebp+32]
push dword ptr [ebp+28]
push dword ptr [ebp+24]
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp-16]
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp+8]
call ASTNEWVAR
add esp, 20
push eax
call ASTNEWJMPTB
add esp, 40
push eax
push dword ptr [ebp-8]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0077:
mov eax, dword ptr [ebp-4]
pop edi
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTBUILDJMPTB, .-ASTBUILDJMPTB

.section .bss
.balign 4
	.lcomm	Lt_0083,16

.section .data
.balign 4
Lt_0082:
.int Lt_0083
.int Lt_0083
.int 16
.int 16
.int 1
.int 1
.int 0
.int 0

.section .text
.balign 16

.globl ASTNEWLOOP
ASTNEWLOOP:
.type ASTNEWLOOP, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0084:
push 0
push -2147483648
push 13
call ASTNEWNODE
add esp, 12
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+12]
mov dword ptr [eax+56], ebx
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebp+8]
mov dword ptr [ebx+28], eax
mov eax, dword ptr [ebp-8]
mov dword ptr [eax+20], 24
mov eax, dword ptr [ebp-8]
mov dword ptr [eax+24], 0
.Lt_0085:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTNEWLOOP, .-ASTNEWLOOP
.balign 16

.globl ASTLOADLOOP
ASTLOADLOOP:
.type ASTLOADLOOP, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_0086:
mov eax, dword ptr [ebp+8]
push dword ptr [eax+56]
call ASTLOAD
add esp, 4
mov eax, dword ptr [ebp+8]
push dword ptr [eax+56]
call ASTDELNODE
add esp, 4
mov dword ptr [ebp-4], 0
.Lt_0087:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size ASTLOADLOOP, .-ASTLOADLOOP
.balign 16
fb_ctor__astznodezbranch:
.type fb_ctor__astznodezbranch, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__astznodezbranch, .-fb_ctor__astznodezbranch
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
ASTNEWJMPTB:
.type ASTNEWJMPTB, @function
push ebp
mov ebp, esp
sub esp, 28
push ebx
push esi
mov dword ptr [ebp-4], 0
.Lt_0069:
mov dword ptr [ebp-12], 0
cmp dword ptr [ebp+24], 0
jle .Lt_006C
push 1
mov eax, dword ptr [ebp+24]
sal eax, 3
mov ebx, eax
push ebx
call calloc
add esp, 8
mov dword ptr [ebp-16], eax
push 1
mov eax, dword ptr [ebp+24]
sal eax, 2
mov ebx, eax
push ebx
call calloc
add esp, 8
mov dword ptr [ebp-20], eax
mov dword ptr [ebp-24], 0
mov eax, dword ptr [ebp+24]
dec eax
mov dword ptr [ebp-28], eax
jmp .Lt_006E
.Lt_0071:
mov eax, dword ptr [ebp-24]
sal eax, 3
mov ebx, dword ptr [ebp+16]
add ebx, eax
mov eax, dword ptr [ebp-24]
sal eax, 3
mov ecx, dword ptr [ebp-16]
add ecx, eax
mov esi, dword ptr [ebx]
mov eax, dword ptr [ebx+4]
mov dword ptr [ecx], esi
mov dword ptr [ecx+4], eax
mov esi, dword ptr [ebp-24]
sal esi, 2
mov eax, dword ptr [ebp+20]
add eax, esi
mov esi, dword ptr [ebp-24]
sal esi, 2
mov ecx, dword ptr [ebp-20]
add ecx, esi
mov esi, dword ptr [eax]
mov dword ptr [ecx], esi
.Lt_006F:
inc dword ptr [ebp-24]
.Lt_006E:
mov esi, dword ptr [ebp-28]
cmp dword ptr [ebp-24], esi
jle .Lt_0071
.Lt_0070:
jmp .Lt_006B
.Lt_006C:
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-20], 0
.Lt_006B:
push 0
push -2147483648
push 8
call ASTNEWNODE
add esp, 12
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov esi, dword ptr [ebp+8]
mov dword ptr [eax+56], esi
mov esi, dword ptr [ebp-8]
mov eax, dword ptr [ebp+12]
mov dword ptr [esi+12], eax
mov eax, dword ptr [ebp-8]
mov esi, dword ptr [ebp-16]
mov dword ptr [eax+20], esi
mov esi, dword ptr [ebp-8]
mov eax, dword ptr [ebp-20]
mov dword ptr [esi+24], eax
mov eax, dword ptr [ebp-8]
mov esi, dword ptr [ebp+24]
mov dword ptr [eax+28], esi
mov esi, dword ptr [ebp-8]
mov eax, dword ptr [ebp+28]
mov dword ptr [esi+32], eax
mov eax, dword ptr [ebp-8]
mov ecx, dword ptr [ebp+32]
mov esi, dword ptr [ebp+36]
mov dword ptr [eax+36], ecx
mov dword ptr [eax+40], esi
mov ecx, dword ptr [ebp-8]
mov eax, dword ptr [ebp+40]
mov esi, dword ptr [ebp+44]
mov dword ptr [ecx+44], eax
mov dword ptr [ecx+48], esi
push -1
push dword ptr [ebp-8]
push dword ptr [ebp-12]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-4], eax
.Lt_006A:
mov eax, dword ptr [ebp-4]
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTNEWJMPTB, .-ASTNEWJMPTB
	#FreeBASIC-1.01.0-source/src/compiler/ast-node-branch.bas' compilation took 0.02532006485853344 secs

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
.int fb_ctor__astznodezbranch
