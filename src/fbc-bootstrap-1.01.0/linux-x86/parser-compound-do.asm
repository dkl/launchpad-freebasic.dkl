	.intel_syntax noprefix

	#FreeBASIC-1.01.0-source/src/compiler/parser-compound-do.bas' compilation started at 16:30:04 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl CDOSTMTBEGIN
CDOSTMTBEGIN:
.type CDOSTMTBEGIN, @function
push ebp
mov ebp, esp
sub esp, 32
push ebx
.Lt_005F:
push 0
call LEXSKIPTOKEN
add esp, 4
push 4
push 0
call SYMBADDLABEL
add esp, 8
mov dword ptr [ebp-16], eax
push 0
push 0
call SYMBADDLABEL
add esp, 8
mov dword ptr [ebp-20], eax
push -1
push dword ptr [ebp-16]
call ASTNEWLABEL
add esp, 8
push eax
call ASTADD
add esp, 4
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-12], 0
push 0
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-32], eax
cmp dword ptr [ebp-32], 273
jne .Lt_0063
.Lt_0064:
mov dword ptr [ebp-8], -1
jmp .Lt_0061
.Lt_0063:
cmp dword ptr [ebp-32], 274
jne .Lt_0065
.Lt_0066:
mov dword ptr [ebp-12], -1
.Lt_0065:
.Lt_0061:
mov eax, dword ptr [ebp-12]
or eax, dword ptr [ebp-8]
je .Lt_0068
push 0
call LEXSKIPTOKEN
add esp, 4
call CEXPRESSION
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
jne .Lt_006A
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
.Lt_006A:
.Lt_0069:
push 0
mov eax, dword ptr [ebp-8]
not eax
push eax
push dword ptr [ebp-20]
push dword ptr [ebp-4]
call ASTBUILDBRANCH
add esp, 16
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
jne .Lt_006C
push 0
push 0
push 24
call ERRREPORT
add esp, 12
call ASTNEWNOP
mov dword ptr [ebp-4], eax
.Lt_006C:
.Lt_006B:
push dword ptr [ebp-4]
call ASTADD
add esp, 4
mov eax, dword ptr [ebp-16]
mov dword ptr [ebp-24], eax
jmp .Lt_0067
.Lt_0068:
mov dword ptr [ebp-4], 0
push 0
push 0
call SYMBADDLABEL
add esp, 8
mov dword ptr [ebp-24], eax
.Lt_0067:
push 1
push 278
call CCOMPSTMTPUSH
add esp, 8
mov dword ptr [ebp-28], eax
call ASTSCOPEBEGIN
mov ebx, dword ptr [ebp-28]
mov dword ptr [ebx+8], eax
cmp dword ptr [ebp-4], 0
setne al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp-28]
mov dword ptr [ebx+12], eax
mov eax, dword ptr [ebp-28]
mov ebx, dword ptr [ebp-16]
mov dword ptr [eax+16], ebx
mov ebx, dword ptr [ebp-28]
mov eax, dword ptr [ebp-24]
mov dword ptr [ebx+20], eax
mov eax, dword ptr [ebp-28]
mov ebx, dword ptr [ebp-20]
mov dword ptr [eax+24], ebx
.Lt_0060:
pop ebx
mov esp, ebp
pop ebp
ret
.size CDOSTMTBEGIN, .-CDOSTMTBEGIN
.balign 16

.globl CDOSTMTEND
CDOSTMTEND:
.type CDOSTMTEND, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
.Lt_006E:
push -1
push 278
call CCOMPSTMTGETTOS
add esp, 8
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 0
jne .Lt_0071
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_006F
.Lt_0071:
.Lt_0070:
push 0
call LEXSKIPTOKEN
add esp, 4
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-12], 0
push 0
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 273
jne .Lt_0074
.Lt_0075:
mov dword ptr [ebp-8], -1
jmp .Lt_0072
.Lt_0074:
cmp dword ptr [ebp-20], 274
jne .Lt_0076
.Lt_0077:
mov dword ptr [ebp-12], -1
.Lt_0076:
.Lt_0072:
mov eax, dword ptr [ebp-12]
or eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp-16]
and eax, dword ptr [ebx+12]
je .Lt_0079
push 0
push 0
push 17
call ERRREPORT
add esp, 12
.Lt_0079:
.Lt_0078:
mov ebx, dword ptr [ebp-16]
cmp dword ptr [ebx+8], 0
je .Lt_007B
mov ebx, dword ptr [ebp-16]
push dword ptr [ebx+8]
call ASTSCOPEEND
add esp, 4
.Lt_007B:
.Lt_007A:
mov ebx, dword ptr [ebp-16]
mov eax, dword ptr [ebp-16]
mov ecx, dword ptr [eax+16]
cmp dword ptr [ebx+20], ecx
je .Lt_007D
push -1
mov ecx, dword ptr [ebp-16]
push dword ptr [ecx+20]
call ASTNEWLABEL
add esp, 8
push eax
call ASTADD
add esp, 4
.Lt_007D:
.Lt_007C:
mov eax, dword ptr [ebp-12]
or eax, dword ptr [ebp-8]
je .Lt_007F
push 0
call LEXSKIPTOKEN
add esp, 4
call CEXPRESSION
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
jne .Lt_0081
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
.Lt_0081:
.Lt_0080:
push 0
push dword ptr [ebp-8]
mov eax, dword ptr [ebp-16]
push dword ptr [eax+16]
push dword ptr [ebp-4]
call ASTBUILDBRANCH
add esp, 16
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
jne .Lt_0083
push 0
push 0
push 24
call ERRREPORT
add esp, 12
call ASTNEWNOP
mov dword ptr [ebp-4], eax
.Lt_0083:
.Lt_0082:
push dword ptr [ebp-4]
call ASTADD
add esp, 4
jmp .Lt_007E
.Lt_007F:
push 0
mov eax, dword ptr [ebp-16]
push dword ptr [eax+16]
push 97
call ASTNEWBRANCH
add esp, 12
push eax
call ASTADD
add esp, 4
.Lt_007E:
push -1
mov eax, dword ptr [ebp-16]
push dword ptr [eax+24]
call ASTNEWLABEL
add esp, 8
push eax
call ASTADD
add esp, 4
push dword ptr [ebp-16]
call CCOMPSTMTPOP
add esp, 4
.Lt_006F:
pop ebx
mov esp, ebp
pop ebp
ret
.size CDOSTMTEND, .-CDOSTMTEND
.balign 16
fb_ctor__parserzcompoundzdo:
.type fb_ctor__parserzcompoundzdo, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__parserzcompoundzdo, .-fb_ctor__parserzcompoundzdo
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
	#FreeBASIC-1.01.0-source/src/compiler/parser-compound-do.bas' compilation took 0.02764011931139976 secs

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
.int fb_ctor__parserzcompoundzdo
