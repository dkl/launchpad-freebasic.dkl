	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/parser-quirk-thread.bas' compilation started at 14:16:37 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl CTHREADCALLFUNC
CTHREADCALLFUNC:
.type CTHREADCALLFUNC, @function
push ebp
mov ebp, esp
sub esp, 44
push ebx
mov dword ptr [ebp-4], 0
.Lt_0060:
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-32], 0
lea eax, [ebp-32]
add eax, 4
mov dword ptr [eax], 0
lea eax, [ebp-32]
add eax, 8
mov dword ptr [eax], 0
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-4], 0
push 0
call LEXSKIPTOKEN
add esp, 4
push 50
mov dword ptr [ebp-40], 0
lea eax, [ebp-40]
push eax
call CIDENTIFIER
add esp, 8
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 0
jne .Lt_0064
jmp .Lt_0061
.Lt_0064:
.Lt_0063:
push 3
push dword ptr [ebp-16]
call SYMBFINDBYCLASS
add esp, 8
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0066
push 0
push 0
push 288
call ERRREPORT
add esp, 12
jmp .Lt_0061
.Lt_0066:
.Lt_0065:
push dword ptr [ebp-8]
call SYMBGETPROCRESULT
add esp, 4
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
je .Lt_0068
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax+24]
and ebx, 511
test ebx, ebx
je .Lt_006A
push 0
push 0
push 288
call ERRREPORT
add esp, 12
jmp .Lt_0061
.Lt_006A:
.Lt_0069:
.Lt_0068:
.Lt_0067:
push 0
call LEXSKIPTOKEN
add esp, 4
push 40
call HMATCH
add esp, 4
test eax, eax
jne .Lt_006C
mov dword ptr [ebp-44], 0
mov eax, dword ptr [ebp-8]
movsx ebx, word ptr [eax+64]
mov dword ptr [ebp-44], ebx
cmp dword ptr [ebp-44], 0
jle .Lt_006E
push 0
push 0
push 6
call ERRREPORT
add esp, 12
jmp .Lt_0061
.Lt_006E:
.Lt_006D:
jmp .Lt_006B
.Lt_006C:
mov dword ptr [ebp-20], -1
.Lt_006B:
push 0
lea ebx, [ebp-32]
push ebx
push 0
push dword ptr [ebp-8]
push 0
call CPROCARGLIST
add esp, 20
mov dword ptr [ebp-36], eax
cmp dword ptr [ebp-20], -1
jne .Lt_0070
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_0072
push 0
push 0
push 7
call ERRREPORT
add esp, 12
jmp .Lt_0061
.Lt_0072:
.Lt_0071:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0070:
.Lt_006F:
push dword ptr [ebp-36]
call RTLTHREADCALL
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_0061:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CTHREADCALLFUNC, .-CTHREADCALLFUNC
.balign 16
fb_ctor__parserzquirkzthread:
.type fb_ctor__parserzquirkzthread, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__parserzquirkzthread, .-fb_ctor__parserzquirkzthread
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
	#fbc-1.01.0/src/compiler/parser-quirk-thread.bas' compilation took 0.03083403827622533 secs

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
.int fb_ctor__parserzquirkzthread
