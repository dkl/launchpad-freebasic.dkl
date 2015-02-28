	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/parser-decl-def.bas' compilation started at 14:16:36 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl CDEFDECL
CDEFDECL:
.type CDEFDECL, @function
push ebp
mov ebp, esp
sub esp, 20
.Lt_005F:
mov eax, dword ptr [ENV+840]
and eax, 4194304
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_0062
push 0
push 145
push 4194304
call ERRREPORTNOTALLOWED
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_0060
.Lt_0062:
.Lt_0061:
cmp dword ptr [ENV+136], 3
jne .Lt_0063
mov dword ptr [ebp-16], 9
jmp .Lt_0083
.Lt_0063:
mov dword ptr [ebp-16], 8
.Lt_0083:
push dword ptr [ebp-16]
call CCOMPSTMTISALLOWED
add esp, 4
test eax, eax
jne .Lt_0066
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_0060
.Lt_0066:
.Lt_0065:
mov dword ptr [ebp-4], -2147483648
push 0
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-20], eax
jmp .Lt_0068
.Lt_006A:
mov dword ptr [ebp-4], 1
jmp .Lt_0067
.Lt_006B:
mov dword ptr [ebp-4], 2
jmp .Lt_0067
.Lt_006C:
mov dword ptr [ebp-4], 4
jmp .Lt_0067
.Lt_006D:
mov dword ptr [ebp-4], 5
jmp .Lt_0067
.Lt_006E:
mov eax, dword ptr [ENV+844]
mov dword ptr [ebp-4], eax
jmp .Lt_0067
.Lt_006F:
mov dword ptr [ebp-4], 8
jmp .Lt_0067
.Lt_0070:
mov dword ptr [ebp-4], 10
jmp .Lt_0067
.Lt_0071:
mov dword ptr [ebp-4], 11
jmp .Lt_0067
.Lt_0072:
mov dword ptr [ebp-4], 12
jmp .Lt_0067
.Lt_0073:
mov dword ptr [ebp-4], 13
jmp .Lt_0067
.Lt_0074:
mov dword ptr [ebp-4], 14
jmp .Lt_0067
.Lt_0075:
mov dword ptr [ebp-4], 15
jmp .Lt_0067
.Lt_0076:
mov dword ptr [ebp-4], 16
jmp .Lt_0067
.Lt_0068:
mov eax, dword ptr [ebp-20]
add eax, 4294966975
cmp eax, 12
ja .Lt_0067
mov eax, dword ptr [ebp-20]
jmp dword ptr [.LT_0077+eax*4-1284]
.LT_0077:
.int .Lt_006A
.int .Lt_006B
.int .Lt_006C
.int .Lt_006D
.int .Lt_006E
.int .Lt_006F
.int .Lt_0070
.int .Lt_0071
.int .Lt_0072
.int .Lt_0073
.int .Lt_0074
.int .Lt_0075
.int .Lt_0076
.Lt_0067:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0078:
push 0
push -1
push 0
call LEXGETTEXT
push eax
call fb_StrAllocTempDescZ
add esp, 4
push eax
call fb_StrUcase2
add esp, 8
push eax
push 33
push offset Lt_0085
call fb_StrAssign
add esp, 20
push 33
push offset Lt_0085
call fb_StrLen
add esp, 8
cmp eax, 1
je .Lt_007C
push 0
push 0
push 16
call ERRREPORT
add esp, 12
.Lt_007C:
.Lt_007B:
push 1
push offset Lt_0085
call fb_StrAllocTempDescZ
add esp, 4
push eax
call fb_ASC
add esp, 8
mov dword ptr [ebp-8], eax
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 45
jne .Lt_007E
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
push -1
push 0
call LEXGETTEXT
push eax
call fb_StrAllocTempDescZ
add esp, 4
push eax
call fb_StrUcase2
add esp, 8
push eax
push 33
push offset Lt_0085
call fb_StrAssign
add esp, 20
push 33
push offset Lt_0085
call fb_StrLen
add esp, 8
cmp eax, 1
je .Lt_0080
push 0
push 0
push 16
call ERRREPORT
add esp, 12
.Lt_0080:
.Lt_007F:
push 1
push offset Lt_0085
call fb_StrAllocTempDescZ
add esp, 4
push eax
call fb_ASC
add esp, 8
mov dword ptr [ebp-12], eax
push 0
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_007D
.Lt_007E:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-12], eax
.Lt_007D:
push dword ptr [ebp-4]
push dword ptr [ebp-12]
push dword ptr [ebp-8]
call SYMBSETDEFTYPE
add esp, 12
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
je .Lt_0082
jmp .Lt_0079
.Lt_0082:
.Lt_0081:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_007A:
jmp .Lt_0078
.Lt_0079:
.Lt_0060:
mov esp, ebp
pop ebp
ret
.size CDEFDECL, .-CDEFDECL

.section .bss
.balign 4
	.lcomm	Lt_0085,33

.section .text
.balign 16
fb_ctor__parserzdeclzdef:
.type fb_ctor__parserzdeclzdef, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__parserzdeclzdef, .-fb_ctor__parserzdeclzdef
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
	#fbc-1.01.0/src/compiler/parser-decl-def.bas' compilation took 0.02569610334467143 secs

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
.int fb_ctor__parserzdeclzdef
