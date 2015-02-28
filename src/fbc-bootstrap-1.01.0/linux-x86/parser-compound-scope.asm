	.intel_syntax noprefix

	#FreeBASIC-1.01.0-source/src/compiler/parser-compound-scope.bas' compilation started at 16:30:04 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl CSCOPESTMTBEGIN
CSCOPESTMTBEGIN:
.type CSCOPESTMTBEGIN, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_005F:
mov eax, dword ptr [ENV+840]
and eax, 2
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_0062
push 0
push 145
push 2
call ERRREPORTNOTALLOWED
add esp, 12
push 0
push -1
push 285
call HSKIPCOMPOUND
add esp, 12
jmp .Lt_0060
.Lt_0062:
.Lt_0061:
push 0
call LEXSKIPTOKEN
add esp, 4
call ASTSCOPEBEGIN
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
jne .Lt_0064
push 0
push 0
push 27
call ERRREPORT
add esp, 12
.Lt_0064:
.Lt_0063:
push 1
push 285
call CCOMPSTMTPUSH
add esp, 8
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp-4]
mov dword ptr [eax+8], ebx
mov ebx, dword ptr [PARSER+144]
and ebx, 8
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp-8]
mov dword ptr [eax+12], ebx
mov ebx, dword ptr [PARSER+144]
or ebx, 8
mov eax, ebx
mov dword ptr [PARSER+144], eax
jmp .Lt_0065
.Lt_0066:
mov eax, dword ptr [PARSER+144]
and eax, -9
mov ebx, eax
mov dword ptr [PARSER+144], ebx
.Lt_0065:
.Lt_0060:
pop ebx
mov esp, ebp
pop ebp
ret
.size CSCOPESTMTBEGIN, .-CSCOPESTMTBEGIN
.balign 16

.globl CSCOPESTMTEND
CSCOPESTMTEND:
.type CSCOPESTMTEND, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0069:
push -1
push 285
call CCOMPSTMTGETTOS
add esp, 8
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
jne .Lt_006C
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_006A
.Lt_006C:
.Lt_006B:
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [ebp-4]
cmp dword ptr [eax+12], 0
je .Lt_006E
mov eax, dword ptr [PARSER+144]
or eax, 8
mov ebx, eax
mov dword ptr [PARSER+144], ebx
jmp .Lt_006D
.Lt_006E:
mov ebx, dword ptr [PARSER+144]
and ebx, -9
mov eax, ebx
mov dword ptr [PARSER+144], eax
.Lt_006D:
mov eax, dword ptr [ebp-4]
cmp dword ptr [eax+8], 0
je .Lt_0070
mov eax, dword ptr [ebp-4]
push dword ptr [eax+8]
call ASTSCOPEEND
add esp, 4
.Lt_0070:
.Lt_006F:
push dword ptr [ebp-4]
call CCOMPSTMTPOP
add esp, 4
.Lt_006A:
pop ebx
mov esp, ebp
pop ebp
ret
.size CSCOPESTMTEND, .-CSCOPESTMTEND
.balign 16
fb_ctor__parserzcompoundzscope:
.type fb_ctor__parserzcompoundzscope, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__parserzcompoundzscope, .-fb_ctor__parserzcompoundzscope
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
	#FreeBASIC-1.01.0-source/src/compiler/parser-compound-scope.bas' compilation took 0.02897793019656092 secs

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
.int fb_ctor__parserzcompoundzscope
