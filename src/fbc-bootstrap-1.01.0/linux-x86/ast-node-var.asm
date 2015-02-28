	.intel_syntax noprefix

	#FreeBASIC-1.01.0-source/src/compiler/ast-node-var.bas' compilation started at 16:30:03 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl ASTNEWVAR
ASTNEWVAR:
.type ASTNEWVAR, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_0056:
cmp dword ptr [ebp+20], -2147483648
jne .Lt_0059
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-12], ebx
cmp dword ptr [ebp-12], 7
jne .Lt_005C
.Lt_005D:
mov dword ptr [ebp+20], 0
mov dword ptr [ebp+24], 0
jmp .Lt_005A
.Lt_005C:
cmp dword ptr [ebp-12], 3
jne .Lt_005E
.Lt_005F:
mov dword ptr [ebp+20], 20
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+8]
and eax, 16384
test eax, eax
je .Lt_0061
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp+24], eax
jmp .Lt_0060
.Lt_0061:
push dword ptr [ebp+8]
call SYMBADDPROCPTRFROMFUNCTION
add esp, 4
mov dword ptr [ebp+24], eax
.Lt_0060:
jmp .Lt_005A
.Lt_005E:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+24]
mov dword ptr [ebp+20], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+28]
mov dword ptr [ebp+24], eax
.Lt_0062:
.Lt_005A:
.Lt_0059:
.Lt_0058:
push dword ptr [ebp+24]
push dword ptr [ebp+20]
push 17
call ASTNEWNODE
add esp, 12
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp+8], 0
je .Lt_0064
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
cmp ebx, 1
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+4]
and ecx, 4194304
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
and ebx, ecx
je .Lt_0066
push dword ptr [ebp+8]
call ASTDTORLISTADDREF
add esp, 4
.Lt_0066:
.Lt_0065:
.Lt_0064:
.Lt_0063:
mov ecx, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+8]
mov dword ptr [ecx+12], ebx
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [ebp+16]
mov dword ptr [ebx+20], eax
mov dword ptr [ebx+24], ecx
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0057:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTNEWVAR, .-ASTNEWVAR
.balign 16

.globl ASTLOADVAR
ASTLOADVAR:
.type ASTLOADVAR, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
mov dword ptr [ebp-4], 0
.Lt_0069:
mov dword ptr [ebp-20], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+12]
mov dword ptr [ebp-8], ebx
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebx+20]
mov eax, dword ptr [ebx+24]
mov dword ptr [ebp-16], ecx
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-8], 0
je .Lt_006C
mov ecx, dword ptr [ebp-8]
mov eax, dword ptr [ecx+8]
or eax, 2
mov ecx, eax
mov eax, dword ptr [ebp-8]
mov dword ptr [eax+8], ecx
mov ecx, dword ptr [ebp-8]
mov ebx, dword ptr [ecx+44]
mov eax, dword ptr [ecx+48]
add dword ptr [ebp-16], ebx
adc dword ptr [ebp-12], eax
.Lt_006C:
.Lt_006B:
cmp dword ptr [AST+136], 0
je .Lt_006E
push dword ptr [ebp-12]
push dword ptr [ebp-16]
push dword ptr [ebp-8]
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+8]
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 511
push eax
call dword ptr [IR+248]
add esp, 20
mov dword ptr [ebp-20], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-20]
mov ecx, dword ptr [eax+16]
mov dword ptr [ebx+20], ecx
.Lt_006E:
.Lt_006D:
mov ecx, dword ptr [ebp-20]
mov dword ptr [ebp-4], ecx
.Lt_006A:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTLOADVAR, .-ASTLOADVAR
.balign 16
fb_ctor__astznodezvar:
.type fb_ctor__astznodezvar, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__astznodezvar, .-fb_ctor__astznodezvar
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
	#FreeBASIC-1.01.0-source/src/compiler/ast-node-var.bas' compilation took 0.02329509949777275 secs

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
.int fb_ctor__astznodezvar
