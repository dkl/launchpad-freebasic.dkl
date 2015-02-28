	.intel_syntax noprefix

	#FreeBASIC-1.01.0-source/src/compiler/parser-quirk-error.bas' compilation started at 16:30:06 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl CERRORSTMT
CERRORSTMT:
.type CERRORSTMT, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_0060:
mov dword ptr [ebp-4], 0
push 0
call LEXSKIPTOKEN
add esp, 4
mov dword ptr [ebp-8], 0
push 7
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0063
jmp .Lt_0061
.Lt_0063:
.Lt_0062:
lea eax, [ENV+244]
push eax
mov eax, dword ptr [LEX+839664]
push dword ptr [eax+16548]
push dword ptr [ebp-8]
call RTLERRORTHROW
add esp, 12
mov dword ptr [ebp-4], -1
.Lt_0061:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size CERRORSTMT, .-CERRORSTMT
.balign 16

.globl CERRSETSTMT
CERRSETSTMT:
.type CERRSETSTMT, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_0064:
mov dword ptr [ebp-4], 0
push 0
call LEXSKIPTOKEN
add esp, 4
call CASSIGNTOKEN
test eax, eax
jne .Lt_0067
push 0
push 0
push 10
call ERRREPORT
add esp, 12
.Lt_0067:
.Lt_0066:
mov dword ptr [ebp-8], 0
push 7
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0069
jmp .Lt_0065
.Lt_0069:
.Lt_0068:
push dword ptr [ebp-8]
call RTLERRORSETNUM
add esp, 4
mov dword ptr [ebp-4], -1
.Lt_0065:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size CERRSETSTMT, .-CERRSETSTMT
.balign 16

.globl CERRORFUNCT
CERRORFUNCT:
.type CERRORFUNCT, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_006A:
push 0
call LEXSKIPTOKEN
add esp, 4
push 40
call HMATCH
add esp, 4
test eax, eax
je .Lt_006D
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_006F
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
jmp .Lt_006E
.Lt_006F:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_006E:
.Lt_006D:
.Lt_006C:
call RTLERRORGETNUM
mov dword ptr [ebp-4], eax
.Lt_006B:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size CERRORFUNCT, .-CERRORFUNCT
.balign 16
fb_ctor__parserzquirkzerror:
.type fb_ctor__parserzquirkzerror, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__parserzquirkzerror, .-fb_ctor__parserzquirkzerror
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
	#FreeBASIC-1.01.0-source/src/compiler/parser-quirk-error.bas' compilation took 0.03495590412057936 secs

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
.int fb_ctor__parserzquirkzerror
