	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/ast-node-ptr.bas' compilation started at 15:27:33 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl ASTNEWDEREF
ASTNEWDEREF:
.type ASTNEWDEREF, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
mov dword ptr [ebp-4], 0
.Lt_0056:
cmp dword ptr [ebp+8], 0
je .Lt_0059
cmp dword ptr [ebp+12], -2147483648
jne .Lt_005B
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 31
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+4]
and ecx, 480
add ecx, -32
or ebx, ecx
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ecx+4]
and eax, 261632
sar eax, 1
and eax, 261632
or ebx, eax
mov dword ptr [ebp+12], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+8]
mov dword ptr [ebp+16], eax
.Lt_005B:
.Lt_005A:
cmp dword ptr [ebp+24], 0
jne .Lt_005D
cmp dword ptr [ebp+20], 0
jne .Lt_005D
.Lt_006B:
push dword ptr [ebp+8]
call ASTSKIPNOCONVCAST
add esp, 4
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-20], ebx
cmp dword ptr [ebp-20], 6
jne .Lt_0060
.Lt_0061:
mov dword ptr [ebp-16], -1
jmp .Lt_005E
.Lt_0060:
cmp dword ptr [ebp-20], 23
jne .Lt_0062
.Lt_0063:
mov ebx, dword ptr [ebp-12]
cmp dword ptr [ebx+24], 0
mov eax, -1
jne .Lt_006D
cmp dword ptr [ebx+20], 0
je .Lt_006C
.Lt_006D:
xor eax, eax
.Lt_006C:
mov dword ptr [ebp-16], eax
jmp .Lt_005E
.Lt_0062:
mov dword ptr [ebp-16], 0
.Lt_0064:
.Lt_005E:
cmp dword ptr [ebp-16], 0
je .Lt_0066
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-8], ebx
push dword ptr [ebp-12]
call ASTDELNODE
add esp, 4
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebp-12], ebx
je .Lt_0068
push dword ptr [ebp+8]
call ASTDELNODE
add esp, 4
.Lt_0068:
.Lt_0067:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call ASTSETTYPE
add esp, 12
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ebx
jmp .Lt_0057
.Lt_0066:
.Lt_0065:
.Lt_005D:
.Lt_005C:
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx], 16
jne .Lt_006A
push dword ptr [ebp+8]
call ASTCONSTFLUSHTOINT
add esp, 4
add dword ptr [ebp+20], eax
adc dword ptr [ebp+24], edx
mov dword ptr [ebp+8], 0
.Lt_006A:
.Lt_0069:
.Lt_0059:
.Lt_0058:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push 20
call ASTNEWNODE
add esp, 12
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov edx, dword ptr [ebp+8]
mov dword ptr [eax+56], edx
mov edx, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+20]
mov eax, dword ptr [ebp+24]
mov dword ptr [edx+20], ebx
mov dword ptr [edx+24], eax
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ebx
.Lt_0057:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTNEWDEREF, .-ASTNEWDEREF
.balign 16

.globl ASTLOADDEREF
ASTLOADDEREF:
.type ASTLOADDEREF, @function
push ebp
mov ebp, esp
sub esp, 36
push ebx
mov dword ptr [ebp-4], 0
.Lt_006E:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-8], ebx
cmp dword ptr [ebp-8], 0
jne .Lt_0071
cmp dword ptr [AST+136], 0
je .Lt_0073
push 0
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+24]
push dword ptr [ebx+20]
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+8]
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 511
push eax
call dword ptr [IR+256]
add esp, 20
mov dword ptr [ebp-20], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-20]
mov ecx, dword ptr [eax+16]
mov dword ptr [ebx+20], ecx
.Lt_0073:
.Lt_0072:
mov ecx, dword ptr [ebp-20]
mov dword ptr [ebp-4], ecx
jmp .Lt_006F
.Lt_0071:
.Lt_0070:
push dword ptr [ebp-8]
call ASTLOAD
add esp, 4
mov dword ptr [ebp-12], eax
cmp dword ptr [AST+136], 0
je .Lt_0075
mov eax, dword ptr [ebp-12]
mov ecx, dword ptr [eax]
cmp ecx, 4
sete cl
shr ecx, 1
sbb ecx, ecx
test ecx, ecx
sete cl
shr ecx, 1
sbb ecx, ecx
mov dword ptr [ebp-32], ecx
mov ecx, dword ptr [ebp-12]
mov eax, dword ptr [ecx+4]
and eax, 480
je .Lt_0076
mov dword ptr [ebp-24], 22
jmp .Lt_007C
.Lt_0076:
mov eax, dword ptr [ebp-12]
mov ecx, dword ptr [eax+4]
and ecx, 31
mov dword ptr [ebp-24], ecx
.Lt_007C:
mov ecx, dword ptr [ebp-24]
imul ecx, 28
mov eax, dword ptr [SYMB_DTYPETB+ecx]
test eax, eax
setne al
shr eax, 1
sbb eax, eax
or eax, dword ptr [ebp-32]
mov dword ptr [ebp-36], eax
mov eax, dword ptr [ebp-12]
mov ecx, dword ptr [eax+4]
and ecx, 480
je .Lt_0078
mov dword ptr [ebp-28], 22
jmp .Lt_007D
.Lt_0078:
mov ecx, dword ptr [ebp-12]
mov eax, dword ptr [ecx+4]
and eax, 31
mov dword ptr [ebp-28], eax
.Lt_007D:
mov eax, dword ptr [ebp-28]
imul eax, 28
mov ecx, dword ptr [ENV+236]
cmp ecx, dword ptr [SYMB_DTYPETB+eax+4]
setne cl
shr ecx, 1
sbb ecx, ecx
or ecx, dword ptr [ebp-36]
je .Lt_007B
mov ecx, dword ptr [ebp+8]
push dword ptr [ecx+8]
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ecx+4]
and eax, 511
and eax, 31
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ecx+4]
and ebx, 511
and ebx, 480
add ebx, 32
or eax, ebx
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebx+4]
and ecx, 511
and ecx, 261632
sal ecx, 1
or eax, ecx
push eax
call dword ptr [IR+236]
add esp, 8
mov dword ptr [ebp-16], eax
push dword ptr [ebp-16]
push dword ptr [ebp-12]
push 76
call dword ptr [IR+136]
add esp, 12
jmp .Lt_007A
.Lt_007B:
mov eax, dword ptr [ebp-12]
mov dword ptr [ebp-16], eax
.Lt_007A:
push dword ptr [ebp-16]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+24]
push dword ptr [eax+20]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+4]
and ecx, 511
push ecx
call dword ptr [IR+256]
add esp, 20
mov dword ptr [ebp-20], eax
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [ebp-20]
mov ebx, dword ptr [eax+16]
mov dword ptr [ecx+20], ebx
.Lt_0075:
.Lt_0074:
push dword ptr [ebp-8]
call ASTDELNODE
add esp, 4
mov ebx, dword ptr [ebp-20]
mov dword ptr [ebp-4], ebx
.Lt_006F:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTLOADDEREF, .-ASTLOADDEREF
.balign 16
fb_ctor__astznodezptr:
.type fb_ctor__astznodezptr, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__astznodezptr, .-fb_ctor__astznodezptr
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
	#fbc-1.01.0/src/compiler/ast-node-ptr.bas' compilation took 0.02374203258659691 secs

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
.int fb_ctor__astznodezptr
