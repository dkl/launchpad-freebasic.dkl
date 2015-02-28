	.intel_syntax noprefix

	#FreeBASIC-1.01.0-source/src/compiler/parser-label.bas' compilation started at 16:30:05 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl CLABEL
CLABEL:
.type CLABEL, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
mov dword ptr [ebp-4], 0
.Lt_005F:
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
push 0
call LEXGETCLASS
add esp, 4
mov dword ptr [ebp-16], eax
jmp .Lt_0062
.Lt_0064:
mov eax, dword ptr [ENV+840]
and eax, 1048576
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_0066
push 0
push 145
push 1048576
call ERRREPORTNOTALLOWED
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_0065
.Lt_0066:
push 68
call LEXGETTEXT
push eax
call SYMBADDLABEL
add esp, 8
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0068
push 0
push 0
push 4
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_0067
.Lt_0068:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0067:
inc dword ptr [PARSER+28]
.Lt_0065:
jmp .Lt_0061
.Lt_0069:
push 0
push 1
call LEXGETLOOKAHEAD
add esp, 8
cmp eax, 258
jne .Lt_006B
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [eax+16532]
mov eax, dword ptr [ebx+4116]
mov dword ptr [ebp-12], eax
push 3
push dword ptr [ebp-12]
call SYMBFINDBYCLASS
add esp, 8
test eax, eax
je .Lt_006D
jmp .Lt_0060
.Lt_006D:
.Lt_006C:
push 68
call LEXGETTEXT
push eax
call SYMBADDLABEL
add esp, 8
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_006F
push 0
push 0
push 4
call ERRREPORT
add esp, 12
.Lt_006F:
.Lt_006E:
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_006B:
.Lt_006A:
jmp .Lt_0061
.Lt_0062:
cmp dword ptr [ebp-16], 3
ja .Lt_0061
mov eax, dword ptr [ebp-16]
jmp dword ptr [.LT_0070+eax*4]
.LT_0070:
.int .Lt_0069
.int .Lt_0061
.int .Lt_0061
.int .Lt_0064
.Lt_0061:
cmp dword ptr [ebp-8], 0
je .Lt_0072
push -1
push dword ptr [ebp-8]
call ASTNEWLABEL
add esp, 8
push eax
call ASTADD
add esp, 4
mov eax, dword ptr [ebp-8]
mov dword ptr [SYMB+99012], eax
mov dword ptr [ebp-4], -1
.Lt_0072:
.Lt_0071:
.Lt_0060:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CLABEL, .-CLABEL
.balign 16
fb_ctor__parserzlabel:
.type fb_ctor__parserzlabel, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__parserzlabel, .-fb_ctor__parserzlabel
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
	#FreeBASIC-1.01.0-source/src/compiler/parser-label.bas' compilation took 0.0307090220740065 secs

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
.int fb_ctor__parserzlabel
