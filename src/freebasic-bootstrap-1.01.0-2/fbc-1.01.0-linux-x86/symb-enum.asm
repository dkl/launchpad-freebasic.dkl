	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/symb-enum.bas' compilation started at 14:16:39 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl SYMBADDENUM
SYMBADDENUM:
.type SYMBADDENUM, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_005F:
cmp dword ptr [ebp+12], 0
jne .Lt_0062
cmp dword ptr [PARSER+96], 0
je .Lt_0064
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp+12], eax
.Lt_0064:
.Lt_0063:
.Lt_0062:
.Lt_0061:
push dword ptr [ebp+16]
push 0
push 9
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 9
push 0
push 0
push 0
push 32
call SYMBNEWSYMBOL
add esp, 40
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0066
mov dword ptr [ebp-4], 0
jmp .Lt_0060
.Lt_0066:
.Lt_0065:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp-8]
mov dword ptr [eax+52], ebx
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+56], 0
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+60], 0
cmp dword ptr [ebp+20], 0
je .Lt_0068
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebp-8]
mov dword ptr [ebx+64], eax
mov eax, dword ptr [ebp-8]
mov dword ptr [eax+80], 0
mov eax, dword ptr [ebp-8]
mov dword ptr [eax+84], 0
push 0
push 16
mov eax, dword ptr [ebp-8]
lea ebx, [eax+68]
push ebx
call HASHINIT
add esp, 12
jmp .Lt_0069
.Lt_006A:
push 12
push 0
mov ebx, dword ptr [ebp-8]
lea eax, [ebx+68]
push eax
call memset
add esp, 12
.Lt_0069:
jmp .Lt_0067
.Lt_0068:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp-8]
mov dword ptr [eax+64], ebx
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+80], 0
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+84], 0
jmp .Lt_006C
push 0
push 0
mov ebx, dword ptr [ebp-8]
lea eax, [ebx+68]
push eax
call HASHINIT
add esp, 12
jmp .Lt_006B
.Lt_006C:
push 12
push 0
mov eax, dword ptr [ebp-8]
lea ebx, [eax+68]
push ebx
call memset
add esp, 12
.Lt_006B:
.Lt_0067:
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+88], 0
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+92], 0
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+96], -1
cmp dword ptr [SYMB+98672], 0
jle .Lt_006E
push dword ptr [ebp-8]
call SYMBCHECKFWDREF
add esp, 4
.Lt_006E:
.Lt_006D:
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ebx
.Lt_0060:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBADDENUM, .-SYMBADDENUM
.balign 16

.globl SYMBADDENUMELEMENT
SYMBADDENUMELEMENT:
.type SYMBADDENUMELEMENT, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
mov dword ptr [ebp-4], 0
.Lt_006F:
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov ebx, dword ptr [ebp+16]
mov eax, dword ptr [ebp+20]
mov dword ptr [ebp-16], ebx
mov dword ptr [ebp-12], eax
push dword ptr [ebp+24]
lea ebx, [ebp-16]
push ebx
push dword ptr [ebp+8]
push 9
push dword ptr [ebp+12]
call SYMBADDCONST
add esp, 20
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp+8]
inc dword ptr [eax+92]
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0070:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBADDENUMELEMENT, .-SYMBADDENUMELEMENT
.balign 16

.globl SYMBDELENUM
SYMBDELENUM:
.type SYMBDELENUM, @function
push ebp
mov ebp, esp
push ebx
.Lt_0071:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+72]
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
push ebx
push dword ptr [ebp+8]
call SYMBDELNAMESPACEMEMBERS
add esp, 8
push dword ptr [ebp+8]
call SYMBFREESYMBOL
add esp, 4
.Lt_0072:
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBDELENUM, .-SYMBDELENUM
.balign 16

.globl SYMBGETENUMFIRSTELM
SYMBGETENUMFIRSTELM:
.type SYMBGETENUMFIRSTELM, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0074:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-8], ebx
.Lt_0076:
cmp dword ptr [ebp-8], 0
je .Lt_0077
mov ebx, dword ptr [ebp-8]
cmp dword ptr [ebx], 2
jne .Lt_0079
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ebx
jmp .Lt_0075
.Lt_0079:
.Lt_0078:
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx+160]
mov dword ptr [ebp-8], eax
jmp .Lt_0076
.Lt_0077:
mov dword ptr [ebp-4], 0
.Lt_0075:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBGETENUMFIRSTELM, .-SYMBGETENUMFIRSTELM
.balign 16

.globl SYMBGETENUMNEXTELM
SYMBGETENUMNEXTELM:
.type SYMBGETENUMNEXTELM, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_007A:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+160]
mov dword ptr [ebp+8], ebx
.Lt_007C:
cmp dword ptr [ebp+8], 0
je .Lt_007D
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx], 2
jne .Lt_007F
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebp-4], ebx
jmp .Lt_007B
.Lt_007F:
.Lt_007E:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+160]
mov dword ptr [ebp+8], eax
jmp .Lt_007C
.Lt_007D:
mov dword ptr [ebp-4], 0
.Lt_007B:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBGETENUMNEXTELM, .-SYMBGETENUMNEXTELM
.balign 16
fb_ctor__symbzenum:
.type fb_ctor__symbzenum, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__symbzenum, .-fb_ctor__symbzenum
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
	#fbc-1.01.0/src/compiler/symb-enum.bas' compilation took 0.02626506157685071 secs

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
.int fb_ctor__symbzenum
