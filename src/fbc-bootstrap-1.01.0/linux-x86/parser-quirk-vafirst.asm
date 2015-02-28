	.intel_syntax noprefix

	#FreeBASIC-1.01.0-source/src/compiler/parser-quirk-vafirst.bas' compilation started at 16:30:06 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl CVAFUNCT
CVAFUNCT:
.type CVAFUNCT, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
mov dword ptr [ebp-4], 0
.Lt_005F:
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ENV+832]
cmp dword ptr [PARSER+100], eax
jne .Lt_0062
jmp .Lt_0060
.Lt_0062:
.Lt_0061:
mov eax, dword ptr [PARSER+100]
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
cmp dword ptr [eax+80], 3
je .Lt_0064
jmp .Lt_0060
.Lt_0064:
.Lt_0063:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+76]
mov dword ptr [ebp-12], ebx
cmp dword ptr [ebp-12], 0
jne .Lt_0066
jmp .Lt_0060
.Lt_0066:
.Lt_0065:
mov ebx, dword ptr [ebp-12]
cmp dword ptr [ebx+52], 4
je .Lt_0068
jmp .Lt_0060
.Lt_0068:
.Lt_0067:
mov ebx, dword ptr [ebp-12]
mov eax, dword ptr [ebx+156]
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_006A
jmp .Lt_0060
.Lt_006A:
.Lt_0069:
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-16], ebx
cmp dword ptr [ebp-16], 0
jne .Lt_006C
jmp .Lt_0060
.Lt_006C:
.Lt_006B:
push 0
call LEXSKIPTOKEN
add esp, 4
push 40
call HMATCH
add esp, 4
test eax, eax
je .Lt_006E
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_0070
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
jmp .Lt_006F
.Lt_0070:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_006F:
.Lt_006E:
.Lt_006D:
cmp dword ptr [ENV+104], 1
jne .Lt_0072
push 0
push -1
push 285
call ERRREPORT
add esp, 12
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-4], eax
jmp .Lt_0071
.Lt_0072:
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp-16]
call ASTNEWVAR
add esp, 20
push eax
call ASTNEWADDROF
add esp, 4
mov dword ptr [ebp-20], eax
push 0
push 0
push dword ptr [ebp-20]
push 0
push 32
call ASTNEWCONV
add esp, 20
mov dword ptr [ebp-20], eax
push 1
push 0
push 0
push 8
mov eax, dword ptr [ebp-12]
push dword ptr [eax+40]
push dword ptr [eax+36]
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp-20]
push 28
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp-4], eax
.Lt_0071:
.Lt_0060:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CVAFUNCT, .-CVAFUNCT
.balign 16
fb_ctor__parserzquirkzvafirst:
.type fb_ctor__parserzquirkzvafirst, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__parserzquirkzvafirst, .-fb_ctor__parserzquirkzvafirst
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
	#FreeBASIC-1.01.0-source/src/compiler/parser-quirk-vafirst.bas' compilation took 0.02914293389767408 secs

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
.int fb_ctor__parserzquirkzvafirst
