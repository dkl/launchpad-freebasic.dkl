	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/ast-node-idx.bas' compilation started at 15:27:33 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl ASTNEWIDX
ASTNEWIDX:
.type ASTNEWIDX, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0056:
cmp dword ptr [ebp+16], -2147483648
jne .Lt_0059
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp+16], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+8]
mov dword ptr [ebp+20], eax
.Lt_0059:
.Lt_0058:
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push 18
call ASTNEWNODE
add esp, 12
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+12]
mov dword ptr [eax+56], ebx
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebp+8]
mov dword ptr [ebx+60], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-8]
mov ecx, dword ptr [eax+12]
mov dword ptr [ebx+12], ecx
mov ecx, dword ptr [ebp-8]
mov dword ptr [ecx+28], 1
mov ecx, dword ptr [ebp-8]
mov dword ptr [ecx+20], 0
mov dword ptr [ecx+24], 0
mov ecx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ecx
.Lt_0057:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTNEWIDX, .-ASTNEWIDX
.balign 16

.globl ASTLOADIDX
ASTLOADIDX:
.type ASTLOADIDX, @function
push ebp
mov ebp, esp
sub esp, 32
push ebx
mov dword ptr [ebp-4], 0
.Lt_005A:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+60]
mov dword ptr [ebp-8], ebx
cmp dword ptr [ebp-8], 0
jne .Lt_005D
mov dword ptr [ebp-4], 0
jmp .Lt_005B
.Lt_005D:
.Lt_005C:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+56]
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
je .Lt_005F
push dword ptr [ebp-12]
call ASTLOAD
add esp, 4
mov dword ptr [ebp-16], eax
jmp .Lt_005E
.Lt_005F:
mov dword ptr [ebp-16], 0
.Lt_005E:
cmp dword ptr [AST+136], 0
je .Lt_0061
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+12]
mov dword ptr [ebp-24], ebx
mov ebx, dword ptr [ebp-24]
mov eax, dword ptr [ebx+8]
or eax, 2
mov ebx, eax
mov eax, dword ptr [ebp-24]
mov dword ptr [eax+8], ebx
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebx+20]
mov eax, dword ptr [ebx+24]
mov dword ptr [ebp-32], ecx
mov dword ptr [ebp-28], eax
mov ecx, dword ptr [ebp-24]
mov eax, dword ptr [ecx+4]
and eax, 65540
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_0063
mov eax, dword ptr [ebp-24]
mov ebx, dword ptr [eax+64]
mov ecx, dword ptr [eax+68]
add ebx, dword ptr [ebp-32]
adc ecx, dword ptr [ebp-28]
mov eax, dword ptr [ebp-24]
add ebx, dword ptr [eax+44]
adc ecx, dword ptr [eax+48]
mov eax, dword ptr [ebp-8]
add ebx, dword ptr [eax+20]
adc ecx, dword ptr [eax+24]
mov dword ptr [ebp-32], ebx
mov dword ptr [ebp-28], ecx
jmp .Lt_0062
.Lt_0063:
mov dword ptr [ebp-24], 0
.Lt_0062:
cmp dword ptr [ebp-16], 0
je .Lt_0065
mov ebx, dword ptr [ebp-16]
mov ecx, dword ptr [ebx]
cmp ecx, 4
sete cl
shr ecx, 1
sbb ecx, ecx
test ecx, ecx
jne .Lt_0067
push dword ptr [ebp-16]
call dword ptr [IR+124]
add esp, 4
.Lt_0067:
.Lt_0066:
push dword ptr [ebp-16]
mov ecx, dword ptr [ebp+8]
push dword ptr [ecx+28]
push dword ptr [ebp-28]
push dword ptr [ebp-32]
push dword ptr [ebp-24]
mov ecx, dword ptr [ebp+8]
push dword ptr [ecx+8]
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ecx+4]
and ebx, 511
push ebx
call dword ptr [IR+252]
add esp, 28
mov dword ptr [ebp-20], eax
jmp .Lt_0064
.Lt_0065:
push dword ptr [ebp-28]
push dword ptr [ebp-32]
push dword ptr [ebp-24]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 511
push ebx
call dword ptr [IR+248]
add esp, 20
mov dword ptr [ebp-20], eax
.Lt_0064:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-20]
mov ecx, dword ptr [eax+16]
mov dword ptr [ebx+20], ecx
.Lt_0061:
.Lt_0060:
push dword ptr [ebp-12]
call ASTDELNODE
add esp, 4
push dword ptr [ebp-8]
call ASTDELNODE
add esp, 4
mov ecx, dword ptr [ebp-20]
mov dword ptr [ebp-4], ecx
.Lt_005B:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTLOADIDX, .-ASTLOADIDX
.balign 16
fb_ctor__astznodezidx:
.type fb_ctor__astznodezidx, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__astznodezidx, .-fb_ctor__astznodezidx
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
	#fbc-1.01.0/src/compiler/ast-node-idx.bas' compilation took 0.02305097877979279 secs

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
.int fb_ctor__astznodezidx
