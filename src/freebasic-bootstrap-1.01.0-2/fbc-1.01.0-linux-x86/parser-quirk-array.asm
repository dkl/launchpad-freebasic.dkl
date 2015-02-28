	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/parser-quirk-array.bas' compilation started at 14:16:37 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl CERASESTMT
CERASESTMT:
.type CERASESTMT, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_0060:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0062:
push 1
call CVARORDEREF
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0066
push 0
push 0
push 14
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push 44
call HSKIPUNTIL
add esp, 16
jmp .Lt_0065
.Lt_0066:
push dword ptr [ebp-8]
call ASTREMOVENIDXARRAY
add esp, 4
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+12]
mov dword ptr [ebp-12], ebx
cmp dword ptr [ebp-12], 0
je .Lt_0068
push dword ptr [ebp-12]
call SYMBISARRAY
add esp, 4
test eax, eax
jne .Lt_006A
mov dword ptr [ebp-12], 0
.Lt_006A:
.Lt_0069:
.Lt_0068:
.Lt_0067:
cmp dword ptr [ebp-12], 0
jne .Lt_006C
push 0
push 0
push 62
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push 44
call HSKIPUNTIL
add esp, 16
jmp .Lt_006B
.Lt_006C:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+4]
and ebx, 512
test ebx, ebx
je .Lt_006E
push 0
push 0
push 118
call ERRREPORT
add esp, 12
.Lt_006E:
.Lt_006D:
mov ebx, dword ptr [ebp-12]
mov eax, dword ptr [ebx+4]
and eax, 65540
test eax, eax
je .Lt_0070
push -1
push -1
push dword ptr [ebp-8]
call RTLARRAYERASE
add esp, 12
push eax
call ASTADD
add esp, 4
jmp .Lt_006F
.Lt_0070:
push dword ptr [ebp-8]
call RTLARRAYCLEAR
add esp, 4
push eax
call ASTADD
add esp, 4
.Lt_006F:
.Lt_006B:
.Lt_0065:
.Lt_0064:
push 44
call HMATCH
add esp, 4
test eax, eax
jne .Lt_0062
.Lt_0063:
mov dword ptr [ebp-4], -1
.Lt_0061:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CERASESTMT, .-CERASESTMT
.balign 16

.globl CSWAPSTMT
CSWAPSTMT:
.type CSWAPSTMT, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_00A2:
call ASTSCOPEBEGIN
mov dword ptr [ebp-8], eax
call HSCOPEDSWAP
mov dword ptr [ebp-4], eax
push dword ptr [ebp-8]
call ASTSCOPEEND
add esp, 4
.Lt_00A3:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size CSWAPSTMT, .-CSWAPSTMT
.balign 16

.globl CARRAYFUNCT
CARRAYFUNCT:
.type CARRAYFUNCT, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
mov dword ptr [ebp-4], 0
.Lt_00A4:
mov dword ptr [ebp-4], 0
cmp dword ptr [ebp+8], 491
je .Lt_00A8
.Lt_00A9:
cmp dword ptr [ebp+8], 492
jne .Lt_00A7
.Lt_00A8:
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
je .Lt_00AB
push 0
push 0
push 6
call ERRREPORT
add esp, 12
jmp .Lt_00AA
.Lt_00AB:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_00AA:
push 1
call CVARORDEREF
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_00AD
push 0
push 0
push 14
call ERRREPORT
add esp, 12
push 0
push 0
push -1
push 41
call HSKIPUNTIL
add esp, 16
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-4], eax
jmp .Lt_00A5
.Lt_00AD:
.Lt_00AC:
push dword ptr [ebp-8]
call ASTREMOVENIDXARRAY
add esp, 4
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+12]
mov dword ptr [ebp-16], ebx
cmp dword ptr [ebp-16], 0
je .Lt_00AF
push dword ptr [ebp-16]
call SYMBISARRAY
add esp, 4
test eax, eax
jne .Lt_00B1
mov dword ptr [ebp-16], 0
.Lt_00B1:
.Lt_00B0:
.Lt_00AF:
.Lt_00AE:
cmp dword ptr [ebp-16], 0
jne .Lt_00B3
push 0
push -1
push 62
call ERRREPORT
add esp, 12
push 0
push 0
push -1
push 41
call HSKIPUNTIL
add esp, 16
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-4], eax
jmp .Lt_00A5
.Lt_00B3:
.Lt_00B2:
push 44
call HMATCH
add esp, 4
test eax, eax
je .Lt_00B5
push 7
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_00B7
jmp .Lt_00A5
.Lt_00B7:
.Lt_00B6:
jmp .Lt_00B4
.Lt_00B5:
push 0
push 7
push 0
push 1
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-12], eax
.Lt_00B4:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_00B9
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
jmp .Lt_00B8
.Lt_00B9:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_00B8:
push dword ptr [ebp+8]
push dword ptr [ebp-12]
push dword ptr [ebp-8]
call ASTBUILDARRAYBOUND
add esp, 12
mov dword ptr [ebp-4], eax
.Lt_00A7:
.Lt_00A6:
.Lt_00A5:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CARRAYFUNCT, .-CARRAYFUNCT
.balign 16
fb_ctor__parserzquirkzarray:
.type fb_ctor__parserzquirkzarray, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__parserzquirkzarray, .-fb_ctor__parserzquirkzarray
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
HSCOPEDSWAP:
.type HSCOPEDSWAP, @function
push ebp
mov ebp, esp
sub esp, 60
push ebx
mov dword ptr [ebp-4], 0
.Lt_0071:
push 0
call LEXSKIPTOKEN
add esp, 4
push 16
call CVARORDEREF
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0074
push 0
push 0
push 14
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
mov dword ptr [ebp-4], -1
jmp .Lt_0072
.Lt_0074:
.Lt_0073:
push dword ptr [ebp-8]
call ASTISCONSTANT
add esp, 4
test eax, eax
je .Lt_0076
push 0
push -1
push 118
call ERRREPORT
add esp, 12
.Lt_0076:
.Lt_0075:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
je .Lt_0078
push 0
push 0
push 16
call ERRREPORT
add esp, 12
jmp .Lt_0077
.Lt_0078:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0077:
push 16
call CVARORDEREF
add esp, 4
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_007A
push 0
push 0
push 14
call ERRREPORT
add esp, 12
push dword ptr [ebp-8]
call ASTDELTREE
add esp, 4
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
mov dword ptr [ebp-4], -1
jmp .Lt_0072
.Lt_007A:
.Lt_0079:
push dword ptr [ebp-12]
call ASTISCONSTANT
add esp, 4
test eax, eax
je .Lt_007C
push 0
push -1
push 118
call ERRREPORT
add esp, 12
.Lt_007C:
.Lt_007B:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+4]
and ebx, 511
mov dword ptr [ebp-16], ebx
mov ebx, dword ptr [ebp-12]
mov eax, dword ptr [ebx+4]
and eax, 511
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-16], 16
je .Lt_007F
.Lt_0080:
cmp dword ptr [ebp-16], 17
je .Lt_007F
.Lt_0081:
cmp dword ptr [ebp-16], 3
jne .Lt_007E
.Lt_007F:
cmp dword ptr [ebp-20], 16
je .Lt_0084
.Lt_0085:
cmp dword ptr [ebp-20], 17
je .Lt_0084
.Lt_0086:
cmp dword ptr [ebp-20], 3
jne .Lt_0083
.Lt_0084:
push dword ptr [ebp-12]
push dword ptr [ebp-8]
call RTLSTRSWAP
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_0082
.Lt_0083:
push 0
push 0
push 20
call ERRREPORT
add esp, 12
.Lt_0087:
.Lt_0082:
jmp .Lt_0072
jmp .Lt_007D
.Lt_007E:
cmp dword ptr [ebp-16], 6
jne .Lt_0088
.Lt_0089:
cmp dword ptr [ebp-20], 6
jne .Lt_008B
push dword ptr [ebp-12]
push dword ptr [ebp-8]
call RTLWSTRSWAP
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_008A
.Lt_008B:
push 0
push 0
push 20
call ERRREPORT
add esp, 12
.Lt_008A:
jmp .Lt_0072
.Lt_0088:
.Lt_007D:
push dword ptr [ebp-12]
push dword ptr [ebp-8]
call ASTCHECKASSIGN
add esp, 8
test eax, eax
sete al
shr eax, 1
sbb eax, eax
push dword ptr [ebp-8]
push dword ptr [ebp-12]
mov ebx, eax
call ASTCHECKASSIGN
add esp, 8
test eax, eax
sete al
shr eax, 1
sbb eax, eax
or ebx, eax
je .Lt_008D
push 0
push 0
push 20
call ERRREPORT
add esp, 12
jmp .Lt_0072
.Lt_008D:
.Lt_008C:
mov eax, dword ptr [ebp-16]
cmp eax, 18
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp-20]
cmp ebx, 18
sete bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
je .Lt_008F
push dword ptr [ebp-12]
push dword ptr [ebp-8]
call RTLMEMSWAP
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_0072
.Lt_008F:
.Lt_008E:
mov dword ptr [ebp-24], -1
mov eax, dword ptr [ENV+104]
test eax, eax
sete al
shr eax, 1
sbb eax, eax
and dword ptr [ebp-24], eax
mov eax, dword ptr [ebp-16]
and eax, 480
je .Lt_0090
mov dword ptr [ebp-28], 22
jmp .Lt_00BA
.Lt_0090:
mov eax, dword ptr [ebp-16]
and eax, 31
mov dword ptr [ebp-28], eax
.Lt_00BA:
mov eax, dword ptr [ebp-28]
imul eax, 28
mov dword ptr [ebp-56], eax
mov eax, dword ptr [ebp-20]
and eax, 480
je .Lt_0092
mov dword ptr [ebp-32], 22
jmp .Lt_00BB
.Lt_0092:
mov eax, dword ptr [ebp-20]
and eax, 31
mov dword ptr [ebp-32], eax
.Lt_00BB:
mov eax, dword ptr [ebp-32]
imul eax, 28
mov ebx, dword ptr [ebp-56]
mov ecx, dword ptr [SYMB_DTYPETB+eax+4]
cmp ecx, dword ptr [SYMB_DTYPETB+ebx+4]
sete cl
shr ecx, 1
sbb ecx, ecx
and dword ptr [ebp-24], ecx
mov ecx, dword ptr [ebp-16]
and ecx, 480
je .Lt_0094
mov dword ptr [ebp-36], 22
jmp .Lt_00BC
.Lt_0094:
mov ecx, dword ptr [ebp-16]
and ecx, 31
mov dword ptr [ebp-36], ecx
.Lt_00BC:
mov ecx, dword ptr [ebp-36]
imul ecx, 28
mov dword ptr [ebp-60], ecx
mov ecx, dword ptr [ebp-20]
and ecx, 480
je .Lt_0096
mov dword ptr [ebp-40], 22
jmp .Lt_00BD
.Lt_0096:
mov ecx, dword ptr [ebp-20]
and ecx, 31
mov dword ptr [ebp-40], ecx
.Lt_00BD:
mov ecx, dword ptr [ebp-40]
imul ecx, 28
mov ebx, dword ptr [ebp-60]
mov eax, dword ptr [SYMB_DTYPETB+ecx]
cmp eax, dword ptr [SYMB_DTYPETB+ebx]
sete al
shr eax, 1
sbb eax, eax
and dword ptr [ebp-24], eax
mov eax, dword ptr [ebp-8]
cmp dword ptr [eax], 19
jne .Lt_0098
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+12]
mov eax, dword ptr [ebx+108]
test eax, eax
setg al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-44], eax
jmp .Lt_00BE
.Lt_0098:
mov dword ptr [ebp-44], 0
.Lt_00BE:
mov eax, dword ptr [ebp-44]
test eax, eax
sete al
shr eax, 1
sbb eax, eax
and dword ptr [ebp-24], eax
mov eax, dword ptr [ebp-12]
cmp dword ptr [eax], 19
jne .Lt_009A
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax+12]
mov eax, dword ptr [ebx+108]
test eax, eax
setg al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-48], eax
jmp .Lt_00BF
.Lt_009A:
mov dword ptr [ebp-48], 0
.Lt_00BF:
mov eax, dword ptr [ebp-48]
test eax, eax
sete al
shr eax, 1
sbb eax, eax
and dword ptr [ebp-24], eax
mov dword ptr [ebp-52], 0
push dword ptr [ebp-8]
call ASTHASSIDEFX
add esp, 4
test eax, eax
je .Lt_009D
push -1
lea eax, [ebp-8]
push eax
call ASTMAKEREF
add esp, 4
push eax
push dword ptr [ebp-52]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-52], eax
.Lt_009D:
.Lt_009C:
push dword ptr [ebp-12]
call ASTHASSIDEFX
add esp, 4
test eax, eax
je .Lt_009F
push -1
lea eax, [ebp-12]
push eax
call ASTMAKEREF
add esp, 4
push eax
push dword ptr [ebp-52]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-52], eax
.Lt_009F:
.Lt_009E:
cmp dword ptr [ebp-24], 0
je .Lt_00A1
push -1
push dword ptr [ebp-8]
call ASTCLONETREE
add esp, 4
push eax
push 87
call ASTNEWSTACK
add esp, 8
push eax
push dword ptr [ebp-52]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-52], eax
push -1
push 0
push dword ptr [ebp-12]
call ASTCLONETREE
add esp, 4
push eax
push dword ptr [ebp-8]
call ASTNEWASSIGN
add esp, 12
push eax
push dword ptr [ebp-52]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-52], eax
push -1
push dword ptr [ebp-12]
push 88
call ASTNEWSTACK
add esp, 8
push eax
push dword ptr [ebp-52]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-52], eax
jmp .Lt_00A0
.Lt_00A1:
mov eax, dword ptr [ebp-8]
push dword ptr [eax+8]
mov eax, dword ptr [ebp-8]
push dword ptr [eax+4]
call SYMBADDTEMPVAR
add esp, 8
mov dword ptr [ebp-56], eax
push -1
push 0
push dword ptr [ebp-8]
call ASTCLONETREE
add esp, 4
push eax
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp-56]
call ASTNEWVAR
add esp, 20
push eax
call ASTNEWASSIGN
add esp, 12
push eax
push dword ptr [ebp-52]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-52], eax
push -1
push 0
push dword ptr [ebp-12]
call ASTCLONETREE
add esp, 4
push eax
push dword ptr [ebp-8]
call ASTNEWASSIGN
add esp, 12
push eax
push dword ptr [ebp-52]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-52], eax
push -1
push 0
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp-56]
call ASTNEWVAR
add esp, 20
push eax
push dword ptr [ebp-12]
call ASTNEWASSIGN
add esp, 12
push eax
push dword ptr [ebp-52]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-52], eax
.Lt_00A0:
push dword ptr [ebp-52]
call ASTADD
add esp, 4
mov dword ptr [ebp-4], -1
.Lt_0072:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HSCOPEDSWAP, .-HSCOPEDSWAP
	#fbc-1.01.0/src/compiler/parser-quirk-array.bas' compilation took 0.03388499573338777 secs

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
.int fb_ctor__parserzquirkzarray
