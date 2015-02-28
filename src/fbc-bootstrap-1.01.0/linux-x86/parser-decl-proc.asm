	.intel_syntax noprefix

	#FreeBASIC-1.01.0-source/src/compiler/parser-decl-proc.bas' compilation started at 16:30:05 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl CPROCDECL
CPROCDECL:
.type CPROCDECL, @function
push ebp
mov ebp, esp
sub esp, 8
.Lt_005F:
push 8
call CCOMPSTMTISALLOWED
add esp, 4
test eax, eax
jne .Lt_0062
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_0060
.Lt_0062:
.Lt_0061:
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 345
je .Lt_0065
.Lt_0066:
cmp dword ptr [ebp-4], 346
je .Lt_0065
.Lt_0067:
cmp dword ptr [ebp-4], 349
jne .Lt_0064
.Lt_0065:
push 0
call LEXSKIPTOKEN
add esp, 4
push dword ptr [ebp-4]
push 1
mov dword ptr [ebp-8], 0
lea eax, [ebp-8]
push eax
push 0
call CPROCHEADER
add esp, 16
jmp .Lt_0063
.Lt_0064:
push 0
push 0
push 17
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
.Lt_0069:
.Lt_0063:
.Lt_0060:
mov esp, ebp
pop ebp
ret
.size CPROCDECL, .-CPROCDECL
.balign 16
fb_ctor__parserzdeclzproc:
.type fb_ctor__parserzdeclzproc, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__parserzdeclzproc, .-fb_ctor__parserzdeclzproc
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
	#FreeBASIC-1.01.0-source/src/compiler/parser-decl-proc.bas' compilation took 0.03008303418755531 secs

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
.int fb_ctor__parserzdeclzproc
