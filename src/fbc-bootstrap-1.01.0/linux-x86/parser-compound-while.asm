	.intel_syntax noprefix

	#FreeBASIC-1.01.0-source/src/compiler/parser-compound-while.bas' compilation started at 16:30:05 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl CWHILESTMTBEGIN
CWHILESTMTBEGIN:
.type CWHILESTMTBEGIN, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
.Lt_005F:
push 0
call LEXSKIPTOKEN
add esp, 4
push 4
push 0
call SYMBADDLABEL
add esp, 8
mov dword ptr [ebp-8], eax
push 0
push 0
call SYMBADDLABEL
add esp, 8
mov dword ptr [ebp-12], eax
push -1
push dword ptr [ebp-8]
call ASTNEWLABEL
add esp, 8
push eax
call ASTADD
add esp, 4
call CEXPRESSION
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
jne .Lt_0062
push 0
push 0
push 9
call ERRREPORT
add esp, 12
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-4], eax
.Lt_0062:
.Lt_0061:
push 0
push 0
push dword ptr [ebp-12]
push dword ptr [ebp-4]
call ASTBUILDBRANCH
add esp, 16
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
jne .Lt_0064
push 0
push 0
push 24
call ERRREPORT
add esp, 12
jmp .Lt_0063
.Lt_0064:
push dword ptr [ebp-4]
call ASTADD
add esp, 4
.Lt_0063:
push 1
push 273
call CCOMPSTMTPUSH
add esp, 8
mov dword ptr [ebp-16], eax
call ASTSCOPEBEGIN
mov ebx, dword ptr [ebp-16]
mov dword ptr [ebx+8], eax
mov eax, dword ptr [ebp-16]
mov ebx, dword ptr [ebp-8]
mov dword ptr [eax+12], ebx
mov ebx, dword ptr [ebp-16]
mov eax, dword ptr [ebp-12]
mov dword ptr [ebx+16], eax
.Lt_0060:
pop ebx
mov esp, ebp
pop ebp
ret
.size CWHILESTMTBEGIN, .-CWHILESTMTBEGIN
.balign 16

.globl CWHILESTMTEND
CWHILESTMTEND:
.type CWHILESTMTEND, @function
push ebp
mov ebp, esp
sub esp, 4
.Lt_0065:
push -1
push 273
call CCOMPSTMTGETTOS
add esp, 8
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
jne .Lt_0068
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_0066
.Lt_0068:
.Lt_0067:
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [ebp-4]
cmp dword ptr [eax+8], 0
je .Lt_006A
mov eax, dword ptr [ebp-4]
push dword ptr [eax+8]
call ASTSCOPEEND
add esp, 4
.Lt_006A:
.Lt_0069:
push 0
mov eax, dword ptr [ebp-4]
push dword ptr [eax+12]
push 97
call ASTNEWBRANCH
add esp, 12
push eax
call ASTADD
add esp, 4
push -1
mov eax, dword ptr [ebp-4]
push dword ptr [eax+16]
call ASTNEWLABEL
add esp, 8
push eax
call ASTADD
add esp, 4
push dword ptr [ebp-4]
call CCOMPSTMTPOP
add esp, 4
.Lt_0066:
mov esp, ebp
pop ebp
ret
.size CWHILESTMTEND, .-CWHILESTMTEND
.balign 16
fb_ctor__parserzcompoundzwhile:
.type fb_ctor__parserzcompoundzwhile, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__parserzcompoundzwhile, .-fb_ctor__parserzcompoundzwhile
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
	#FreeBASIC-1.01.0-source/src/compiler/parser-compound-while.bas' compilation took 0.02953492035157979 secs

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
.int fb_ctor__parserzcompoundzwhile
