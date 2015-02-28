	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/parser-expr-function.bas' compilation started at 15:27:35 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl CFUNCTIONCALL
CFUNCTIONCALL:
.type CFUNCTIONCALL, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
mov dword ptr [ebp-4], 0
.Lt_005F:
mov dword ptr [ebp-20], 0
lea eax, [ebp-20]
add eax, 4
mov dword ptr [eax], 0
lea eax, [ebp-20]
add eax, 8
mov dword ptr [eax], 0
mov dword ptr [ebp-4], 0
cmp dword ptr [ebp+12], 0
jne .Lt_0062
jmp .Lt_0060
.Lt_0062:
.Lt_0061:
mov eax, dword ptr [ebp+24]
or eax, 16
mov ebx, eax
mov dword ptr [ebp+24], ebx
lea ebx, [ebp+24]
push ebx
lea ebx, [ebp-20]
push ebx
push dword ptr [ebp+20]
push dword ptr [ebp+12]
call HMETHODCALLADDINSTPTROVLARG
add esp, 16
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 32768
test eax, eax
je .Lt_0064
mov eax, dword ptr [ebp+24]
or eax, 128
mov ebx, eax
mov dword ptr [ebp+24], ebx
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
jne .Lt_0066
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+148]
mov eax, dword ptr [ebx]
movsx ebx, word ptr [eax+112]
and ebx, 512
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_0068
push 0
push -1
push 195
call ERRREPORT
add esp, 12
.Lt_0068:
.Lt_0067:
push 0
call LEXSKIPTOKEN
add esp, 4
push dword ptr [ebp+24]
lea ebx, [ebp-20]
push ebx
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call CPROCARGLIST
add esp, 20
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_006A
jmp .Lt_0060
.Lt_006A:
.Lt_0069:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_006C
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
jmp .Lt_006B
.Lt_006C:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_006B:
jmp .Lt_0065
.Lt_0066:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+148]
mov eax, dword ptr [ebx]
movsx ebx, word ptr [eax+112]
and ebx, 128
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_006E
push 0
push 0
push 193
call ERRREPORT
add esp, 12
.Lt_006E:
.Lt_006D:
mov ebx, dword ptr [ebp+24]
or ebx, 32
mov eax, ebx
push eax
lea eax, [ebp-20]
push eax
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call CPROCARGLIST
add esp, 20
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0070
jmp .Lt_0060
.Lt_0070:
.Lt_006F:
.Lt_0065:
jmp .Lt_0063
.Lt_0064:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
jne .Lt_0072
push 0
call LEXSKIPTOKEN
add esp, 4
push dword ptr [ebp+24]
lea eax, [ebp-20]
push eax
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call CPROCARGLIST
add esp, 20
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0074
jmp .Lt_0060
.Lt_0074:
.Lt_0073:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_0076
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
jmp .Lt_0075
.Lt_0076:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0075:
jmp .Lt_0071
.Lt_0072:
mov eax, dword ptr [ebp+24]
or eax, 32
mov ebx, eax
push ebx
lea ebx, [ebp-20]
push ebx
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call CPROCARGLIST
add esp, 20
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0078
jmp .Lt_0060
.Lt_0078:
.Lt_0077:
.Lt_0071:
.Lt_0063:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+4]
and ebx, 511
test ebx, ebx
jne .Lt_007A
push 0
push 0
push 17
call ERRREPORT
add esp, 12
push dword ptr [ebp-8]
call ASTDELTREE
add esp, 4
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-4], eax
jmp .Lt_0060
.Lt_007A:
.Lt_0079:
push dword ptr [ebp-8]
call ASTBUILDBYREFRESULTDEREF
add esp, 4
mov dword ptr [ebp-8], eax
push dword ptr [ebp-8]
call CSTRIDXORMEMBERDEREF
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_0060:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CFUNCTIONCALL, .-CFUNCTIONCALL
.balign 16

.globl CFUNCTIONEX
CFUNCTIONEX:
.type CFUNCTIONEX, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_007D:
push 0
call LEXSKIPTOKEN
add esp, 4
push dword ptr [ebp+16]
push 0
push 0
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call CFUNCTIONCALL
add esp, 20
mov dword ptr [ebp-4], eax
.Lt_007E:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size CFUNCTIONEX, .-CFUNCTIONEX
.balign 16

.globl CMETHODCALL
CMETHODCALL:
.type CMETHODCALL, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_007F:
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [PARSER+144]
and eax, 4
test eax, eax
je .Lt_0082
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push 0
push dword ptr [ebp+8]
push 0
call CFUNCTIONCALL
add esp, 20
mov dword ptr [ebp-8], eax
jmp .Lt_0081
.Lt_0082:
push dword ptr [ebp+16]
push 0
push dword ptr [ebp+12]
push 0
push dword ptr [ebp+8]
push 0
call CPROCCALL
add esp, 24
mov dword ptr [ebp-8], eax
.Lt_0081:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0080:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size CMETHODCALL, .-CMETHODCALL
.balign 16

.globl CCTORCALL
CCTORCALL:
.type CCTORCALL, @function
push ebp
mov ebp, esp
sub esp, 36
push ebx
mov dword ptr [ebp-4], 0
.Lt_0083:
mov dword ptr [ebp-28], 0
lea eax, [ebp-28]
add eax, 4
mov dword ptr [eax], 0
lea eax, [ebp-28]
add eax, 8
mov dword ptr [eax], 0
push dword ptr [ebp+8]
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+24]
and ebx, 511
push ebx
call SYMBADDTEMPVAR
add esp, 8
mov dword ptr [ebp-8], eax
push dword ptr [ebp-8]
call ASTDTORLISTADD
add esp, 4
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
jne .Lt_0086
push 0
call LEXSKIPTOKEN
add esp, 4
mov dword ptr [ebp-12], -1
jmp .Lt_0085
.Lt_0086:
mov dword ptr [ebp-12], 0
.Lt_0085:
push 0
lea eax, [ebp-28]
push eax
lea eax, [PARSER+108]
push eax
call SYMBALLOCOVLCALLARG
add esp, 12
mov dword ptr [ebp-32], eax
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp-8]
call ASTNEWVAR
add esp, 20
mov ebx, dword ptr [ebp-32]
mov dword ptr [ebx], eax
mov eax, dword ptr [ebp-32]
mov dword ptr [eax+4], -1
cmp dword ptr [ebp-12], 0
jne .Lt_0087
mov dword ptr [ebp-36], 32
jmp .Lt_0090
.Lt_0087:
mov dword ptr [ebp-36], 0
.Lt_0090:
mov eax, dword ptr [ebp-36]
or eax, 80
mov ebx, eax
push ebx
lea ebx, [ebp-28]
push ebx
push 0
push dword ptr [ebp+8]
call SYMBGETCOMPCTORHEAD
add esp, 4
push eax
push 0
call CPROCARGLIST
add esp, 20
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-12], 0
je .Lt_008A
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_008C
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
jmp .Lt_008B
.Lt_008C:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_008B:
.Lt_008A:
.Lt_0089:
cmp dword ptr [ebp-16], 0
jne .Lt_008E
mov dword ptr [ebp-4], 0
jmp .Lt_008D
.Lt_008E:
mov eax, dword ptr [ebp-16]
mov ebx, dword ptr [eax]
cmp ebx, 9
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_008F
mov ebx, dword ptr [ebp-16]
mov dword ptr [ebp-4], ebx
jmp .Lt_008D
.Lt_008F:
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp-8]
call ASTNEWVAR
add esp, 20
push eax
push dword ptr [ebp-16]
call ASTNEWCALLCTOR
add esp, 8
mov dword ptr [ebp-4], eax
.Lt_008D:
.Lt_0084:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CCTORCALL, .-CCTORCALL
.balign 16
fb_ctor__parserzexprzfunction:
.type fb_ctor__parserzexprzfunction, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__parserzexprzfunction, .-fb_ctor__parserzexprzfunction
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
	#fbc-1.01.0/src/compiler/parser-expr-function.bas' compilation took 0.02663610724266618 secs

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
.int fb_ctor__parserzexprzfunction
