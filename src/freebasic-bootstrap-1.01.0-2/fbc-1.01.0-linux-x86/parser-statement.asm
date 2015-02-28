	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/parser-statement.bas' compilation started at 14:16:37 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl CSTATEMENT
CSTATEMENT:
.type CSTATEMENT, @function
.Lt_005F:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 258
jne .Lt_0062
inc dword ptr [PARSER+28]
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0062:
.Lt_0061:
.Lt_0063:
call CDECLARATION
test eax, eax
jne .Lt_0067
call CCOMPOUNDSTMT
test eax, eax
jne .Lt_0069
call CPROCCALLORASSIGN
test eax, eax
jne .Lt_006B
push -1
call CQUIRKSTMT
add esp, 4
test eax, eax
jne .Lt_006D
call CASMBLOCK
test eax, eax
jne .Lt_006F
call CASSIGNMENTORPTRCALL
.Lt_006F:
.Lt_006E:
.Lt_006D:
.Lt_006C:
.Lt_006B:
.Lt_006A:
.Lt_0069:
.Lt_0068:
.Lt_0067:
.Lt_0066:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 258
je .Lt_0071
jmp .Lt_0064
.Lt_0071:
.Lt_0070:
inc dword ptr [PARSER+28]
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0065:
jmp .Lt_0063
.Lt_0064:
.Lt_0060:
ret
.size CSTATEMENT, .-CSTATEMENT
.balign 16

.globl CSTMTSEPARATOR
CSTMTSEPARATOR:
.type CSTMTSEPARATOR, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_0072:
mov dword ptr [ebp-4], 0
.Lt_0074:
push dword ptr [ebp+8]
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 258
je .Lt_007A
.Lt_007B:
cmp dword ptr [ebp-8], 257
jne .Lt_0079
.Lt_007A:
inc dword ptr [PARSER+28]
push dword ptr [ebp+8]
call LEXSKIPTOKEN
add esp, 4
mov dword ptr [ebp-4], -1
jmp .Lt_0077
.Lt_0079:
cmp dword ptr [ebp-8], 256
jne .Lt_007C
.Lt_007D:
mov dword ptr [ebp-4], -1
jmp .Lt_0075
jmp .Lt_0077
.Lt_007C:
jmp .Lt_0075
.Lt_007E:
.Lt_0077:
.Lt_0076:
jmp .Lt_0074
.Lt_0075:
.Lt_0073:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size CSTMTSEPARATOR, .-CSTMTSEPARATOR
.balign 16
fb_ctor__parserzstatement:
.type fb_ctor__parserzstatement, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__parserzstatement, .-fb_ctor__parserzstatement
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
	#fbc-1.01.0/src/compiler/parser-statement.bas' compilation took 0.02500097348820418 secs

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
.int fb_ctor__parserzstatement
