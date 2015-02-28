	.intel_syntax noprefix

	#FreeBASIC-1.01.0-source/src/compiler/parser-quirk-iif.bas' compilation started at 16:30:06 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl CIIFFUNCT
CIIFFUNCT:
.type CIIFFUNCT, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
mov dword ptr [ebp-4], 0
.Lt_005F:
mov dword ptr [ebp-4], 0
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
je .Lt_0062
push 0
push 0
push 6
call ERRREPORT
add esp, 12
jmp .Lt_0061
.Lt_0062:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0061:
push 7
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0064
jmp .Lt_0060
.Lt_0064:
.Lt_0063:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
je .Lt_0066
push 0
push 0
push 16
call ERRREPORT
add esp, 12
jmp .Lt_0065
.Lt_0066:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0065:
push 0
call ASTDTORLISTSCOPEBEGIN
add esp, 4
push 7
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_0068
jmp .Lt_0060
.Lt_0068:
.Lt_0067:
call ASTDTORLISTSCOPEEND
mov dword ptr [ebp-20], eax
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
je .Lt_006A
push 0
push 0
push 16
call ERRREPORT
add esp, 12
jmp .Lt_0069
.Lt_006A:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0069:
push 0
call ASTDTORLISTSCOPEBEGIN
add esp, 4
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax+4]
and ebx, 511
push ebx
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 0
jne .Lt_006C
jmp .Lt_0060
.Lt_006C:
.Lt_006B:
call ASTDTORLISTSCOPEEND
mov dword ptr [ebp-24], eax
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_006E
push 0
push 0
push 7
call ERRREPORT
add esp, 12
push 0
push 0
push -1
push 41
call HSKIPUNTIL
add esp, 16
jmp .Lt_006D
.Lt_006E:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_006D:
push dword ptr [ebp-24]
push dword ptr [ebp-16]
push dword ptr [ebp-20]
push dword ptr [ebp-12]
push dword ptr [ebp-8]
call ASTNEWIIF
add esp, 20
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0070
push 0
push -1
push 24
call ERRREPORT
add esp, 12
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-8], eax
.Lt_0070:
.Lt_006F:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0060:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CIIFFUNCT, .-CIIFFUNCT
.balign 16
fb_ctor__parserzquirkziif:
.type fb_ctor__parserzquirkziif, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__parserzquirkziif, .-fb_ctor__parserzquirkziif
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
	#FreeBASIC-1.01.0-source/src/compiler/parser-quirk-iif.bas' compilation took 0.02702192484866828 secs

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
.int fb_ctor__parserzquirkziif
