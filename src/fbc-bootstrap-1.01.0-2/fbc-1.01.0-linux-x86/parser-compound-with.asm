	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/parser-compound-with.bas' compilation started at 15:27:35 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl CWITHSTMTBEGIN
CWITHSTMTBEGIN:
.type CWITHSTMTBEGIN, @function
push ebp
mov ebp, esp
sub esp, 32
push ebx
.Lt_0065:
push 0
call LEXSKIPTOKEN
add esp, 4
call ASTSCOPEBEGIN
mov dword ptr [ebp-24], eax
cmp dword ptr [ebp-24], 0
jne .Lt_0069
push 0
push 0
push 27
call ERRREPORT
add esp, 12
.Lt_0069:
.Lt_0068:
call CEXPRESSION
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_006B
push 0
push 0
push 14
call ERRREPORT
add esp, 12
push 0
push -2147483648
push 0
push 0
push 0
push 7
call SYMBADDTEMPVAR
add esp, 8
push eax
call ASTNEWVAR
add esp, 20
mov dword ptr [ebp-8], eax
jmp .Lt_006A
.Lt_006B:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+4]
and ebx, 511
cmp ebx, 18
je .Lt_006D
push 0
push 0
push 24
call ERRREPORT
add esp, 12
push 0
push -2147483648
push 0
push 0
push 0
push 7
call SYMBADDTEMPVAR
add esp, 8
push eax
call ASTNEWVAR
add esp, 20
mov dword ptr [ebp-8], eax
jmp .Lt_006C
.Lt_006D:
mov eax, dword ptr [ebp-8]
cmp dword ptr [eax], 9
jne .Lt_006F
push dword ptr [ebp-8]
call ASTBUILDCALLRESULTUDT
add esp, 4
mov dword ptr [ebp-8], eax
.Lt_006F:
.Lt_006E:
.Lt_006C:
.Lt_006A:
mov eax, dword ptr [ebp-24]
push dword ptr [eax+12]
call HEXTENDTEMPLIFETIME
add esp, 4
mov dword ptr [ebp-28], eax
push dword ptr [ebp-8]
call ASTGETEFFECTIVENODE
add esp, 4
mov dword ptr [ebp-32], eax
mov eax, dword ptr [ebp-32]
cmp dword ptr [eax], 17
jne .Lt_0071
mov eax, dword ptr [ebp-32]
mov ebx, dword ptr [eax+12]
mov dword ptr [ebp-4], ebx
mov dword ptr [ebp-12], 0
push 0
push dword ptr [ebp-8]
call ASTREBUILDWITHOUTEFFECTIVEPART
add esp, 4
push eax
push dword ptr [ebp-28]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-28], eax
jmp .Lt_0070
.Lt_0071:
push dword ptr [ebp-8]
call ASTNEWADDROF
add esp, 4
mov dword ptr [ebp-8], eax
mov dword ptr [ebp-16], 0
mov eax, dword ptr [ENV+840]
and eax, 2
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_0073
or dword ptr [ebp-16], 2
.Lt_0073:
.Lt_0072:
push dword ptr [ebp-16]
mov eax, dword ptr [ebp-8]
push dword ptr [eax+8]
mov eax, dword ptr [ebp-8]
push dword ptr [eax+4]
call SYMBADDIMPLICITVAR
add esp, 12
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp-16]
and eax, 2
je .Lt_0075
push -1
push dword ptr [ebp-4]
call ASTNEWDECL
add esp, 8
push eax
call ASTADDUNSCOPED
add esp, 4
push 0
push 0
push dword ptr [ebp-8]
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp-4]
call ASTNEWVAR
add esp, 20
push eax
call ASTNEWASSIGN
add esp, 12
push eax
push dword ptr [ebp-28]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-28], eax
jmp .Lt_0074
.Lt_0075:
push 0
push 0
push dword ptr [ebp-4]
call ASTNEWDECL
add esp, 8
push eax
push dword ptr [ebp-28]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-28], eax
push 0
push 64
push dword ptr [ebp-8]
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp-4]
call ASTNEWVAR
add esp, 20
push eax
call ASTNEWASSIGN
add esp, 12
push eax
push dword ptr [ebp-28]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-28], eax
.Lt_0074:
mov dword ptr [ebp-12], -1
.Lt_0070:
push dword ptr [ebp-28]
call ASTADD
add esp, 4
push 1
push 280
call CCOMPSTMTPUSH
add esp, 8
mov dword ptr [ebp-20], eax
mov eax, dword ptr [ebp-20]
mov ebx, dword ptr [ebp-4]
mov dword ptr [eax+12], ebx
mov ebx, dword ptr [ebp-20]
mov eax, dword ptr [ebp-12]
mov dword ptr [ebx+16], eax
mov eax, dword ptr [ebp-20]
mov ebx, dword ptr [ebp-24]
mov dword ptr [eax+8], ebx
.Lt_0066:
pop ebx
mov esp, ebp
pop ebp
ret
.size CWITHSTMTBEGIN, .-CWITHSTMTBEGIN

.section .bss
.balign 4
	.lcomm	Lt_0077,16

.section .text
.balign 16

.globl CWITHSTMTEND
CWITHSTMTEND:
.type CWITHSTMTEND, @function
push ebp
mov ebp, esp
sub esp, 4
.Lt_0078:
push -1
push 280
call CCOMPSTMTGETTOS
add esp, 8
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
jne .Lt_007B
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_0079
.Lt_007B:
.Lt_007A:
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [ebp-4]
cmp dword ptr [eax+8], 0
je .Lt_007D
mov eax, dword ptr [ebp-4]
push dword ptr [eax+8]
call ASTSCOPEEND
add esp, 4
.Lt_007D:
.Lt_007C:
push dword ptr [ebp-4]
call CCOMPSTMTPOP
add esp, 4
.Lt_0079:
mov esp, ebp
pop ebp
ret
.size CWITHSTMTEND, .-CWITHSTMTEND
.balign 16
fb_ctor__parserzcompoundzwith:
.type fb_ctor__parserzcompoundzwith, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__parserzcompoundzwith, .-fb_ctor__parserzcompoundzwith
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
.balign 16
HEXTENDTEMPLIFETIME:
.type HEXTENDTEMPLIFETIME, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_005F:
mov dword ptr [ebp-8], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+60]
mov dword ptr [ebp-12], ebx
.Lt_0061:
cmp dword ptr [ebp-12], 0
je .Lt_0062
mov ebx, dword ptr [ebp-12]
cmp dword ptr [ebx], 1
jne .Lt_0064
push dword ptr [ebp-12]
call ASTDTORLISTDEL
add esp, 4
mov ebx, dword ptr [ebp-12]
mov eax, dword ptr [ebx+4]
and eax, -4194305
mov ebx, eax
mov eax, dword ptr [ebp-12]
mov dword ptr [eax+4], ebx
push 0
push 0
push dword ptr [ebp-12]
call ASTNEWDECL
add esp, 8
push eax
push dword ptr [ebp-8]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-8], eax
.Lt_0064:
.Lt_0063:
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax+160]
mov dword ptr [ebp-12], ebx
jmp .Lt_0061
.Lt_0062:
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ebx
.Lt_0060:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HEXTENDTEMPLIFETIME, .-HEXTENDTEMPLIFETIME
	#fbc-1.01.0/src/compiler/parser-compound-with.bas' compilation took 0.02587504300754517 secs

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
.int fb_ctor__parserzcompoundzwith
