	.intel_syntax noprefix

	#FreeBASIC-1.01.0-source/src/compiler/symb-scope.bas' compilation started at 16:30:08 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl SYMBADDSCOPE
SYMBADDSCOPE:
.type SYMBADDSCOPE, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0060:
mov dword ptr [ebp-8], 0
push 0
push 0
push -2147483648
push 0
push 0
push 15
push 0
push dword ptr [SYMB+98524]
push 0
push 0
call SYMBNEWSYMBOL
add esp, 40
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp-8]
mov dword ptr [eax+56], ebx
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+60], 0
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+64], 0
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebp+8]
mov dword ptr [ebx+52], eax
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0061:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBADDSCOPE, .-SYMBADDSCOPE
.balign 16

.globl SYMBDELSCOPE
SYMBDELSCOPE:
.type SYMBDELSCOPE, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0062:
cmp dword ptr [ebp+8], 0
jne .Lt_0065
jmp .Lt_0063
.Lt_0065:
.Lt_0064:
.Lt_0066:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+64]
mov dword ptr [ebp-4], ebx
cmp dword ptr [ebp-4], 0
jne .Lt_006A
jmp .Lt_0067
.Lt_006A:
.Lt_0069:
push -1
push dword ptr [ebp-4]
call SYMBDELSYMBOL
add esp, 8
.Lt_0068:
jmp .Lt_0066
.Lt_0067:
push dword ptr [ebp+8]
call SYMBFREESYMBOL
add esp, 4
.Lt_0063:
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBDELSCOPE, .-SYMBDELSCOPE
.balign 16

.globl SYMBDELSCOPETB
SYMBDELSCOPETB:
.type SYMBDELSCOPETB, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_006B:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+64]
mov dword ptr [ebp-4], ebx
.Lt_006D:
cmp dword ptr [ebp-4], 0
je .Lt_006E
mov ebx, dword ptr [ebp-4]
cmp dword ptr [ebx], 16
je .Lt_0070
push dword ptr [ebp-4]
call SYMBDELFROMHASH
add esp, 4
jmp .Lt_006F
.Lt_0070:
push -1
push dword ptr [ebp-4]
call SYMBNAMESPACEREMOVE
add esp, 8
.Lt_006F:
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebx+156]
mov dword ptr [ebp-4], eax
jmp .Lt_006D
.Lt_006E:
.Lt_006C:
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBDELSCOPETB, .-SYMBDELSCOPETB
.balign 16
fb_ctor__symbzscope:
.type fb_ctor__symbzscope, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__symbzscope, .-fb_ctor__symbzscope
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
	#FreeBASIC-1.01.0-source/src/compiler/symb-scope.bas' compilation took 0.03270603460259736 secs

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
.int fb_ctor__symbzscope
