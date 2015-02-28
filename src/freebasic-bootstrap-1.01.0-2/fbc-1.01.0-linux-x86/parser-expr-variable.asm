	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/parser-expr-variable.bas' compilation started at 14:16:36 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl CUDTMEMBER
CUDTMEMBER:
.type CUDTMEMBER, @function
push ebp
mov ebp, esp
sub esp, 28
push ebx
mov dword ptr [ebp-4], 0
.Lt_00B7:
mov dword ptr [ebp-8], -1
mov eax, dword ptr [ebp+8]
and eax, 261632
mov dword ptr [ebp-12], eax
.Lt_00B9:
push dword ptr [ebp+12]
call HMEMBERID
add esp, 4
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 0
jne .Lt_00BD
mov dword ptr [ebp-4], 0
jmp .Lt_00B8
.Lt_00BD:
.Lt_00BC:
mov eax, dword ptr [ebp-16]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-20], ebx
jmp .Lt_00BF
.Lt_00C1:
push 0
call LEXSKIPTOKEN
add esp, 4
push dword ptr [ebp+16]
call ASTDELTREE
add esp, 4
push dword ptr [ebp-16]
call ASTBUILDCONST
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_00B8
jmp .Lt_00BE
.Lt_00C2:
push 0
call LEXSKIPTOKEN
add esp, 4
push dword ptr [ebp+16]
call ASTDELTREE
add esp, 4
mov dword ptr [ebp+16], 0
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 46
je .Lt_00C4
mov dword ptr [ebp-4], 0
jmp .Lt_00B8
.Lt_00C4:
.Lt_00C3:
jmp .Lt_00BE
.Lt_00C5:
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [ebp-16]
mov ebx, dword ptr [ebp-12]
or ebx, dword ptr [eax+24]
mov dword ptr [ebp+8], ebx
mov ebx, dword ptr [ebp-16]
mov eax, dword ptr [ebx+28]
mov dword ptr [ebp+12], eax
cmp dword ptr [ebp-8], 0
jne .Lt_00C7
push dword ptr [ebp+16]
call ASTNEWADDROF
add esp, 4
mov dword ptr [ebp+16], eax
.Lt_00C7:
.Lt_00C6:
push dword ptr [ebp+20]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push dword ptr [ebp-16]
push dword ptr [ebp+16]
call HFIELDACCESS
add esp, 20
mov dword ptr [ebp+16], eax
mov eax, dword ptr [ebp+8]
and eax, 511
cmp eax, 18
setne al
shr eax, 1
sbb eax, eax
push 0
mov ebx, eax
call LEXGETTOKEN
add esp, 4
cmp eax, 46
setne al
shr eax, 1
sbb eax, eax
or ebx, eax
mov eax, dword ptr [ebp+16]
mov ecx, dword ptr [eax]
cmp ecx, 25
sete cl
shr ecx, 1
sbb ecx, ecx
or ebx, ecx
je .Lt_00C9
mov ecx, dword ptr [ebp+16]
mov dword ptr [ebp-4], ecx
jmp .Lt_00B8
.Lt_00C9:
.Lt_00C8:
mov dword ptr [ebp-8], 0
jmp .Lt_00BE
.Lt_00CA:
push dword ptr [ebp+16]
call ASTDELTREE
add esp, 4
push dword ptr [ebp+20]
push dword ptr [ebp-16]
call _Z11CVARIABLEEXP8FBSYMBOLi
add esp, 8
mov dword ptr [ebp+16], eax
mov eax, dword ptr [ebp-16]
mov ecx, dword ptr [ebp-12]
or ecx, dword ptr [eax+24]
mov dword ptr [ebp+8], ecx
mov ecx, dword ptr [ebp-16]
mov eax, dword ptr [ecx+28]
mov dword ptr [ebp+12], eax
mov eax, dword ptr [ebp+8]
and eax, 480
je .Lt_00CB
mov dword ptr [ebp-24], 22
jmp .Lt_00DA
.Lt_00CB:
mov eax, dword ptr [ebp+8]
and eax, 31
mov dword ptr [ebp-24], eax
.Lt_00DA:
mov eax, dword ptr [ebp-24]
mov dword ptr [ebp-28], eax
cmp dword ptr [ebp-28], 18
jne .Lt_00CF
.Lt_00D0:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 46
je .Lt_00D2
mov eax, dword ptr [ebp+16]
mov dword ptr [ebp-4], eax
jmp .Lt_00B8
.Lt_00D2:
.Lt_00D1:
jmp .Lt_00CD
.Lt_00CF:
mov eax, dword ptr [ebp+16]
mov dword ptr [ebp-4], eax
jmp .Lt_00B8
.Lt_00D3:
.Lt_00CD:
mov dword ptr [ebp-8], 0
jmp .Lt_00BE
.Lt_00D4:
cmp dword ptr [ebp-8], 0
je .Lt_00D6
push 0
push 0
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push dword ptr [ebp+16]
call ASTNEWDEREF
add esp, 20
mov dword ptr [ebp+16], eax
.Lt_00D6:
.Lt_00D5:
push dword ptr [ebp+24]
push dword ptr [ebp+16]
push dword ptr [ebp-16]
call CMETHODCALL
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_00B8
jmp .Lt_00BE
.Lt_00D7:
push 0
push 1
push 0
push offset Lt_00D8
push 21
call ERRREPORTEX
add esp, 20
mov dword ptr [ebp-4], 0
jmp .Lt_00B8
jmp .Lt_00BE
.Lt_00BF:
mov eax, dword ptr [ebp-20]
add eax, 4294967295
cmp eax, 11
ja .Lt_00D7
mov eax, dword ptr [ebp-20]
jmp dword ptr [.LT_00D9+eax*4-4]
.LT_00D9:
.int .Lt_00CA
.int .Lt_00C1
.int .Lt_00D4
.int .Lt_00D7
.int .Lt_00D7
.int .Lt_00D7
.int .Lt_00D7
.int .Lt_00D7
.int .Lt_00C2
.int .Lt_00D7
.int .Lt_00D7
.int .Lt_00C5
.Lt_00BE:
push 64
call LEXSKIPTOKEN
add esp, 4
.Lt_00BB:
jmp .Lt_00B9
.Lt_00BA:
mov eax, dword ptr [ebp+16]
mov dword ptr [ebp-4], eax
.Lt_00B8:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CUDTMEMBER, .-CUDTMEMBER
.balign 16

.globl CMEMBERACCESS
CMEMBERACCESS:
.type CMEMBERACCESS, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_00DE:
mov eax, dword ptr [ebp+16]
cmp dword ptr [eax], 9
jne .Lt_00E1
push dword ptr [ebp+16]
call ASTBUILDCALLRESULTUDT
add esp, 4
mov dword ptr [ebp+16], eax
.Lt_00E1:
.Lt_00E0:
push 0
push -1
push dword ptr [ebp+16]
call ASTNEWADDROF
add esp, 4
push eax
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call CUDTMEMBER
add esp, 20
mov dword ptr [ebp-4], eax
.Lt_00DF:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size CMEMBERACCESS, .-CMEMBERACCESS
.balign 16

.globl CMEMBERDEREF
CMEMBERDEREF:
.type CMEMBERDEREF, @function
push ebp
mov ebp, esp
sub esp, 36
push ebx
mov dword ptr [ebp-4], 0
.Lt_00F8:
mov dword ptr [ebp-4], 0
.Lt_00FA:
mov dword ptr [ebp-20], 0
push 0
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-24], eax
cmp dword ptr [ebp-24], 397
jne .Lt_00FF
.Lt_0100:
mov dword ptr [ebp-8], 0
mov eax, dword ptr [ebp+8]
and eax, 480
test eax, eax
je .Lt_0102
push 64
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [ebp+8]
and eax, 31
mov ebx, dword ptr [ebp+8]
and ebx, 480
add ebx, -32
or eax, ebx
mov ebx, dword ptr [ebp+8]
and ebx, 261632
sar ebx, 1
and ebx, 261632
or eax, ebx
mov dword ptr [ebp+8], eax
mov eax, dword ptr [ebp+8]
and eax, 511
mov dword ptr [ebp-28], eax
cmp dword ptr [ebp-28], 0
je .Lt_0106
.Lt_0107:
cmp dword ptr [ebp-28], 21
jne .Lt_0105
.Lt_0106:
push 0
push -1
push 70
call ERRREPORT
add esp, 12
mov dword ptr [ebp+8], 7
mov dword ptr [ebp+12], 0
jmp .Lt_0103
.Lt_0105:
cmp dword ptr [ebp-28], 18
jne .Lt_0108
.Lt_0109:
jmp .Lt_0103
.Lt_0108:
push 0
push -1
push 24
call ERRREPORT
add esp, 12
mov dword ptr [ebp+8], 7
mov dword ptr [ebp+12], 0
.Lt_010A:
.Lt_0103:
cmp dword ptr [ENV+156], 0
je .Lt_010C
push dword ptr [ebp+16]
call ASTBUILDPTRCHK
add esp, 4
mov dword ptr [ebp+16], eax
.Lt_010C:
.Lt_010B:
call HMULTIDEREF
add dword ptr [ebp-8], eax
push 0
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call CUDTMEMBER
add esp, 20
mov dword ptr [ebp+16], eax
jmp .Lt_0101
.Lt_0102:
cmp dword ptr [SYMB+99404], 0
jne .Lt_010E
push 0
push -1
push 28
call ERRREPORT
add esp, 12
jmp .Lt_00FB
.Lt_010E:
.Lt_010D:
lea eax, [ebp-32]
push eax
push dword ptr [ebp+16]
push 77
call SYMBFINDUOPOVLPROC
add esp, 12
mov dword ptr [ebp-28], eax
cmp dword ptr [ebp-28], 0
jne .Lt_0110
push 0
push -1
push 28
call ERRREPORT
add esp, 12
jmp .Lt_00FB
.Lt_0110:
.Lt_010F:
push 0
push 0
push dword ptr [ebp+16]
push dword ptr [ebp-28]
call ASTBUILDCALL
add esp, 16
mov dword ptr [ebp+16], eax
cmp dword ptr [ebp+16], 0
jne .Lt_0112
jmp .Lt_00F9
.Lt_0112:
.Lt_0111:
push 64
call LEXSKIPTOKEN
add esp, 4
call HMULTIDEREF
add dword ptr [ebp-8], eax
push dword ptr [ebp+16]
mov eax, dword ptr [ebp+16]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+16]
push dword ptr [eax+4]
call CMEMBERACCESS
add esp, 12
mov dword ptr [ebp+16], eax
.Lt_0101:
cmp dword ptr [ebp+16], 0
jne .Lt_0114
jmp .Lt_00F9
.Lt_0114:
.Lt_0113:
mov eax, dword ptr [ebp+16]
cmp dword ptr [eax], 25
jne .Lt_0116
cmp dword ptr [ebp-8], 0
jle .Lt_0118
push 0
push -1
push 28
call ERRREPORT
add esp, 12
.Lt_0118:
.Lt_0117:
jmp .Lt_00FB
.Lt_0116:
.Lt_0115:
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp+8], ebx
mov ebx, dword ptr [ebp+16]
mov eax, dword ptr [ebx+8]
mov dword ptr [ebp+12], eax
cmp dword ptr [ebp-8], 0
jle .Lt_011A
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push dword ptr [ebp+16]
push dword ptr [ebp-8]
call ASTBUILDMULTIDEREF
add esp, 16
mov dword ptr [ebp+16], eax
cmp dword ptr [ebp+16], 0
jne .Lt_011C
jmp .Lt_00F9
.Lt_011C:
.Lt_011B:
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp+8], ebx
mov ebx, dword ptr [ebp+16]
mov eax, dword ptr [ebx+8]
mov dword ptr [ebp+12], eax
.Lt_011A:
.Lt_0119:
jmp .Lt_00FD
.Lt_00FF:
cmp dword ptr [ebp-24], 91
jne .Lt_011D
.Lt_011E:
push 0
call LEXSKIPTOKEN
add esp, 4
call HINDEXEXPR
mov dword ptr [ebp-20], eax
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 93
je .Lt_0120
push 0
push 0
push 17
call ERRREPORT
add esp, 12
push 0
push 0
push -1
push 93
call HSKIPUNTIL
add esp, 16
jmp .Lt_011F
.Lt_0120:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_011F:
mov eax, dword ptr [ebp+8]
and eax, 511
mov dword ptr [ebp-28], eax
cmp dword ptr [ebp-28], 16
je .Lt_0124
.Lt_0125:
cmp dword ptr [ebp-28], 17
je .Lt_0124
.Lt_0126:
cmp dword ptr [ebp-28], 3
je .Lt_0124
.Lt_0127:
cmp dword ptr [ebp-28], 6
jne .Lt_0123
.Lt_0124:
push dword ptr [ebp-20]
call HCHECKINTEGERINDEX
add esp, 4
push eax
push dword ptr [ebp+16]
push dword ptr [ebp+8]
call HSTRINDEXING
add esp, 12
mov dword ptr [ebp+16], eax
mov dword ptr [ebp-20], 0
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp+8], ebx
mov ebx, dword ptr [ebp+16]
mov eax, dword ptr [ebx+8]
mov dword ptr [ebp+12], eax
jmp .Lt_0121
.Lt_0123:
cmp dword ptr [ebp-28], 18
jne .Lt_0128
.Lt_0129:
lea eax, [ebp-32]
push eax
push dword ptr [ebp-20]
push dword ptr [ebp+16]
push 23
call SYMBFINDSELFBOPOVLPROC
add esp, 16
mov dword ptr [ebp-36], eax
cmp dword ptr [ebp-36], 0
je .Lt_012B
push 0
push dword ptr [ebp-20]
push dword ptr [ebp+16]
push dword ptr [ebp-36]
call ASTBUILDCALL
add esp, 16
mov dword ptr [ebp+16], eax
jmp .Lt_012A
.Lt_012B:
cmp dword ptr [ebp-32], 0
jne .Lt_012D
push 0
push -1
push 28
call ERRREPORT
add esp, 12
.Lt_012D:
.Lt_012C:
.Lt_012A:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 46
jne .Lt_012F
push 64
call LEXSKIPTOKEN
add esp, 4
push dword ptr [ebp+16]
mov eax, dword ptr [ebp+16]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+16]
push dword ptr [eax+4]
call CMEMBERACCESS
add esp, 12
mov dword ptr [ebp+16], eax
cmp dword ptr [ebp+16], 0
jne .Lt_0131
jmp .Lt_00F9
.Lt_0131:
.Lt_0130:
mov eax, dword ptr [ebp+16]
cmp dword ptr [eax], 25
jne .Lt_0133
jmp .Lt_00FB
.Lt_0133:
.Lt_0132:
.Lt_012F:
.Lt_012E:
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp+8], ebx
mov ebx, dword ptr [ebp+16]
mov eax, dword ptr [ebx+8]
mov dword ptr [ebp+12], eax
jmp .Lt_0121
.Lt_0128:
mov eax, dword ptr [ebp+8]
and eax, 511
mov dword ptr [ebp-32], eax
cmp dword ptr [ebp-32], 0
je .Lt_0138
.Lt_0139:
cmp dword ptr [ebp-32], 21
jne .Lt_0137
.Lt_0138:
push 0
push -1
push 70
call ERRREPORT
add esp, 12
mov dword ptr [ebp+8], 39
mov dword ptr [ebp+12], 0
jmp .Lt_0135
.Lt_0137:
mov eax, dword ptr [ebp+8]
and eax, 480
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_013C
push 0
push -1
push 28
call ERRREPORT
add esp, 12
jmp .Lt_00FB
.Lt_013C:
.Lt_013B:
.Lt_013A:
.Lt_0135:
mov eax, dword ptr [ebp+8]
and eax, 31
mov ebx, dword ptr [ebp+8]
and ebx, 480
add ebx, -32
or eax, ebx
mov ebx, dword ptr [ebp+8]
and ebx, 261632
sar ebx, 1
and ebx, 261632
or eax, ebx
mov dword ptr [ebp+8], eax
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call SYMBCALCLEN
add esp, 8
mov dword ptr [ebp-16], eax
mov dword ptr [ebp-12], edx
cmp dword ptr [ebp-12], 0
jne .Lt_013E
cmp dword ptr [ebp-16], 0
jne .Lt_013E
.Lt_0149:
push 0
push -1
push 70
call ERRREPORT
add esp, 12
mov dword ptr [ebp+8], 7
mov dword ptr [ebp+12], 0
mov edx, dword ptr [SYMB_DTYPETB+200]
mov eax, edx
sar eax, 31
mov dword ptr [ebp-16], edx
mov dword ptr [ebp-12], eax
.Lt_013E:
.Lt_013D:
push dword ptr [ebp-20]
call HCHECKINTEGERINDEX
add esp, 4
mov dword ptr [ebp-20], eax
cmp dword ptr [ENV+156], 0
je .Lt_0140
push dword ptr [ebp+16]
call ASTBUILDPTRCHK
add esp, 4
mov dword ptr [ebp+16], eax
.Lt_0140:
.Lt_013F:
push 1
push 0
push 1
push 0
push 0
push 7
push dword ptr [ebp-12]
push dword ptr [ebp-16]
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp-20]
push 30
call ASTNEWBOP
add esp, 20
push eax
push dword ptr [ebp+16]
push 28
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp+16], eax
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 46
jne .Lt_0142
push 64
call LEXSKIPTOKEN
add esp, 4
push 0
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call CUDTMEMBER
add esp, 20
mov dword ptr [ebp+16], eax
cmp dword ptr [ebp+16], 0
jne .Lt_0144
jmp .Lt_00F9
.Lt_0144:
.Lt_0143:
mov eax, dword ptr [ebp+16]
cmp dword ptr [eax], 25
jne .Lt_0146
jmp .Lt_00FB
.Lt_0146:
.Lt_0145:
mov eax, dword ptr [ebp+16]
mov edx, dword ptr [eax+4]
mov dword ptr [ebp+8], edx
mov edx, dword ptr [ebp+16]
mov eax, dword ptr [edx+8]
mov dword ptr [ebp+12], eax
jmp .Lt_0141
.Lt_0142:
push 0
push 0
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push dword ptr [ebp+16]
call ASTNEWDEREF
add esp, 20
mov dword ptr [ebp+16], eax
.Lt_0141:
.Lt_0134:
.Lt_0121:
jmp .Lt_00FD
.Lt_011D:
jmp .Lt_00FB
.Lt_0147:
.Lt_00FD:
.Lt_00FC:
jmp .Lt_00FA
.Lt_00FB:
mov eax, dword ptr [ebp+16]
mov dword ptr [ebp-4], eax
.Lt_00F9:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CMEMBERDEREF, .-CMEMBERDEREF
.balign 16

.globl CFUNCPTRORMEMBERDEREF
CFUNCPTRORMEMBERDEREF:
.type CFUNCPTRORMEMBERDEREF, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_014A:
mov dword ptr [ebp-4], 0
cmp dword ptr [ebp+20], 0
jne .Lt_014D
push dword ptr [ebp+24]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call CMEMBERDEREF
add esp, 16
mov dword ptr [ebp+16], eax
cmp dword ptr [ebp+16], 0
jne .Lt_014F
jmp .Lt_014B
.Lt_014F:
.Lt_014E:
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+4]
and ebx, 511
mov dword ptr [ebp+8], ebx
mov ebx, dword ptr [ebp+16]
mov eax, dword ptr [ebx+8]
mov dword ptr [ebp+12], eax
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
jne .Lt_0151
cmp dword ptr [ebp+8], 52
jne .Lt_0153
mov dword ptr [ebp+20], -1
.Lt_0153:
.Lt_0152:
.Lt_0151:
.Lt_0150:
.Lt_014D:
.Lt_014C:
cmp dword ptr [ebp+20], 0
jne .Lt_0155
mov eax, dword ptr [ebp+16]
mov dword ptr [ebp-4], eax
jmp .Lt_014B
.Lt_0155:
.Lt_0154:
cmp dword ptr [ENV+156], 0
je .Lt_0157
push dword ptr [ebp+16]
call ASTBUILDPTRCHK
add esp, 4
mov dword ptr [ebp+16], eax
.Lt_0157:
.Lt_0156:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+24]
and ebx, 511
test ebx, ebx
je .Lt_0159
push 0
push 0
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push 0
call CFUNCTIONCALL
add esp, 20
mov dword ptr [ebp+16], eax
cmp dword ptr [ebp+16], 0
jne .Lt_015B
jmp .Lt_014B
.Lt_015B:
.Lt_015A:
jmp .Lt_0158
.Lt_0159:
mov eax, dword ptr [PARSER+144]
and eax, 4
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_015D
push 0
push 0
push 0
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push 0
call CPROCCALL
add esp, 24
mov dword ptr [ebp+16], eax
jmp .Lt_015C
.Lt_015D:
push 0
push 0
push 17
call ERRREPORT
add esp, 12
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp+16], eax
.Lt_015C:
.Lt_0158:
mov eax, dword ptr [ebp+16]
mov dword ptr [ebp-4], eax
.Lt_014B:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CFUNCPTRORMEMBERDEREF, .-CFUNCPTRORMEMBERDEREF
.balign 16

.globl _Z11CVARIABLEEXP8FBSYMBOLi
_Z11CVARIABLEEXP8FBSYMBOLi:
.type _Z11CVARIABLEEXP8FBSYMBOLi, @function
push ebp
mov ebp, esp
sub esp, 52
push ebx
mov dword ptr [ebp-4], 0
.Lt_0185:
mov dword ptr [ebp-4], 0
push dword ptr [ebp+8]
call SYMBCHECKACCESS
add esp, 4
test eax, eax
jne .Lt_0188
push 0
push 0
push 201
call ERRREPORT
add esp, 12
.Lt_0188:
.Lt_0187:
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+24]
mov dword ptr [ebp-8], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+28]
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 262144
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+4]
and ecx, 512
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
or ebx, ecx
mov dword ptr [ebp-28], ebx
push dword ptr [ebp+8]
call SYMBISARRAY
add esp, 4
mov dword ptr [ebp-36], eax
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-40], -1
mov dword ptr [ebp-44], 0
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [PARSER+144]
and ebx, 4096
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
not ebx
and eax, ebx
je .Lt_018A
push 0
push 1
call LEXGETLOOKAHEAD
add esp, 8
cmp eax, 41
je .Lt_018C
cmp dword ptr [ebp-36], 0
je .Lt_018E
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 65540
test ebx, ebx
je .Lt_0190
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 65536
test eax, eax
je .Lt_0192
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp+8]
call ASTNEWVAR
add esp, 20
mov dword ptr [ebp-24], eax
mov eax, dword ptr [ebp+8]
push dword ptr [eax+84]
push 50
push dword ptr [ebp-24]
call ASTSETTYPE
add esp, 12
push 0
push 0
push 0
push -2147483648
push dword ptr [ebp-24]
call ASTNEWDEREF
add esp, 20
mov dword ptr [ebp-24], eax
jmp .Lt_0191
.Lt_0192:
push 0
push -2147483648
push 0
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax+80]
call ASTNEWVAR
add esp, 20
mov dword ptr [ebp-24], eax
.Lt_0191:
push dword ptr [ebp-24]
call ASTCLONETREE
add esp, 4
push eax
push dword ptr [ebp+8]
call CDYNAMICARRAYINDEX
add esp, 8
mov dword ptr [ebp-20], eax
push 1
push 0
push 0
push 0
push 7
mov ebx, dword ptr [SYMB+99560]
mov eax, ebx
sar eax, 31
push eax
push ebx
push dword ptr [ebp-24]
call _Z19ASTBUILDDEREFADDROFP7ASTNODExiP8FBSYMBOLS2_
add esp, 24
push eax
push dword ptr [ebp-20]
push 28
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp-20], eax
jmp .Lt_018F
.Lt_0190:
push dword ptr [ebp+8]
call CFIXEDSIZEARRAYINDEX
add esp, 4
mov dword ptr [ebp-20], eax
.Lt_018F:
push 41
call HMATCH
add esp, 4
test eax, eax
jne .Lt_0194
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
.Lt_0194:
.Lt_0193:
jmp .Lt_018D
.Lt_018E:
mov eax, dword ptr [ebp-8]
and eax, 511
cmp eax, 52
sete al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-32], eax
mov eax, dword ptr [ebp-36]
test eax, eax
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp-32]
test ebx, ebx
sete bl
shr ebx, 1
sbb ebx, ebx
and eax, ebx
je .Lt_0196
push 0
push -1
push 71
call ERRREPORT
add esp, 12
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
push 0
push -1
push 41
call HSKIPUNTIL
add esp, 16
.Lt_0196:
.Lt_0195:
.Lt_018D:
jmp .Lt_018B
.Lt_018C:
cmp dword ptr [ebp-36], 0
je .Lt_0198
mov dword ptr [ebp-40], 0
.Lt_0198:
.Lt_0197:
.Lt_018B:
jmp .Lt_0189
.Lt_018A:
cmp dword ptr [ebp-36], 0
je .Lt_019A
cmp dword ptr [ebp+12], 0
je .Lt_019C
push 0
push -1
push 72
call ERRREPORT
add esp, 12
push dword ptr [ebp+8]
call HMAKEARRAYIDX
add esp, 4
mov dword ptr [ebp-20], eax
jmp .Lt_019B
.Lt_019C:
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-44], -1
.Lt_019B:
.Lt_019A:
.Lt_0199:
.Lt_0189:
cmp dword ptr [ebp-28], 0
je .Lt_019E
push dword ptr [ebp-12]
mov eax, dword ptr [ebp-8]
and eax, 31
mov ebx, dword ptr [ebp-8]
and ebx, 480
add ebx, 32
or eax, ebx
mov ebx, dword ptr [ebp-8]
and ebx, 261632
sal ebx, 1
or eax, ebx
push eax
push 0
push 0
push dword ptr [ebp+8]
call ASTNEWVAR
add esp, 20
mov dword ptr [ebp-16], eax
jmp .Lt_019D
.Lt_019E:
push dword ptr [ebp-12]
push dword ptr [ebp-8]
push 0
push 0
push dword ptr [ebp+8]
call ASTNEWVAR
add esp, 20
mov dword ptr [ebp-16], eax
.Lt_019D:
cmp dword ptr [ebp-20], 0
je .Lt_01A0
cmp dword ptr [ebp-28], 0
je .Lt_01A2
push 1
push 0
push dword ptr [ebp-20]
push dword ptr [ebp-16]
push 28
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp-16], eax
jmp .Lt_01A1
.Lt_01A2:
push dword ptr [ebp-12]
push dword ptr [ebp-8]
push dword ptr [ebp-20]
push dword ptr [ebp-16]
call ASTNEWIDX
add esp, 16
mov dword ptr [ebp-16], eax
.Lt_01A1:
.Lt_01A0:
.Lt_019F:
cmp dword ptr [ebp-28], 0
je .Lt_01A4
push 0
push 0
push dword ptr [ebp-12]
push dword ptr [ebp-8]
push dword ptr [ebp-16]
call ASTNEWDEREF
add esp, 20
mov dword ptr [ebp-16], eax
.Lt_01A4:
.Lt_01A3:
cmp dword ptr [ebp-32], 0
jne .Lt_01A6
cmp dword ptr [ebp-40], 0
je .Lt_01A8
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 46
jne .Lt_01AA
mov eax, dword ptr [ebp-8]
and eax, 480
je .Lt_01AB
mov dword ptr [ebp-48], 22
jmp .Lt_01BC
.Lt_01AB:
mov eax, dword ptr [ebp-8]
and eax, 31
mov dword ptr [ebp-48], eax
.Lt_01BC:
mov eax, dword ptr [ebp-48]
mov dword ptr [ebp-52], eax
cmp dword ptr [ebp-52], 18
jne .Lt_01AF
.Lt_01B0:
jmp .Lt_01AD
.Lt_01AF:
push 0
push -1
push 264
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
mov eax, dword ptr [ebp-16]
mov dword ptr [ebp-4], eax
jmp .Lt_0186
.Lt_01B1:
.Lt_01AD:
push 64
call LEXSKIPTOKEN
add esp, 4
push 0
push dword ptr [ebp+12]
push dword ptr [ebp-16]
call ASTNEWADDROF
add esp, 4
push eax
push dword ptr [ebp-12]
push dword ptr [ebp-8]
call CUDTMEMBER
add esp, 20
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 0
jne .Lt_01B3
jmp .Lt_0186
.Lt_01B3:
.Lt_01B2:
mov eax, dword ptr [ebp-16]
cmp dword ptr [eax], 25
jne .Lt_01B5
mov eax, dword ptr [ebp-16]
mov dword ptr [ebp-4], eax
jmp .Lt_0186
.Lt_01B5:
.Lt_01B4:
mov eax, dword ptr [ebp-16]
mov ebx, dword ptr [eax+4]
and ebx, 511
mov dword ptr [ebp-8], ebx
mov ebx, dword ptr [ebp-16]
mov eax, dword ptr [ebx+8]
mov dword ptr [ebp-12], eax
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
jne .Lt_01B7
mov eax, dword ptr [ebp-8]
cmp eax, 52
sete al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-32], eax
.Lt_01B7:
.Lt_01B6:
.Lt_01AA:
.Lt_01A9:
.Lt_01A8:
.Lt_01A7:
.Lt_01A6:
.Lt_01A5:
cmp dword ptr [ebp-40], 0
je .Lt_01B9
push dword ptr [ebp+12]
push dword ptr [ebp-32]
push dword ptr [ebp-16]
push dword ptr [ebp-12]
push dword ptr [ebp-8]
call CFUNCPTRORMEMBERDEREF
add esp, 20
mov dword ptr [ebp-16], eax
jmp .Lt_01B8
.Lt_01B9:
cmp dword ptr [ebp-44], 0
je .Lt_01BB
push dword ptr [ebp-16]
call ASTNEWNIDXARRAY
add esp, 4
mov dword ptr [ebp-16], eax
.Lt_01BB:
.Lt_01BA:
.Lt_01B8:
mov eax, dword ptr [ebp-16]
mov dword ptr [ebp-4], eax
.Lt_0186:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size _Z11CVARIABLEEXP8FBSYMBOLi, .-_Z11CVARIABLEEXP8FBSYMBOLi
.balign 16

.globl _Z11CVARIABLEEXP10FBSYMCHAINi
_Z11CVARIABLEEXP10FBSYMCHAINi:
.type _Z11CVARIABLEEXP10FBSYMCHAINi, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
mov dword ptr [ebp-4], 0
.Lt_01C5:
call LEXGETTEXT
mov dword ptr [ebp-8], eax
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [eax+16532]
mov eax, dword ptr [ebx+8]
mov dword ptr [ebp-12], eax
cmp dword ptr [ENV+136], 3
jne .Lt_01C8
push 0
call LEXGETCLASS
add esp, 4
cmp eax, 1
jne .Lt_01CA
cmp dword ptr [ebp-12], -2147483648
jne .Lt_01CC
mov dword ptr [ebp-4], 0
jmp .Lt_01C6
.Lt_01CC:
.Lt_01CB:
.Lt_01CA:
.Lt_01C9:
.Lt_01C8:
.Lt_01C7:
mov eax, dword ptr [ENV+840]
and eax, 8388608
test eax, eax
je .Lt_01CE
cmp dword ptr [ebp-12], -2147483648
jne .Lt_01D0
push dword ptr [ebp-8]
call SYMBGETDEFTYPE
add esp, 4
push eax
push dword ptr [ebp+8]
call SYMBFINDVARBYDEFTYPE
add esp, 8
mov dword ptr [ebp-16], eax
jmp .Lt_01CF
.Lt_01D0:
push dword ptr [ebp-12]
push dword ptr [ebp+8]
call SYMBFINDVARBYSUFFIX
add esp, 8
mov dword ptr [ebp-16], eax
.Lt_01CF:
jmp .Lt_01CD
.Lt_01CE:
cmp dword ptr [ebp-12], -2147483648
je .Lt_01D2
push 0
push 147
push 8388608
call ERRREPORTNOTALLOWED
add esp, 12
.Lt_01D2:
.Lt_01D1:
push 1
push dword ptr [ebp+8]
call SYMBFINDBYCLASS
add esp, 8
mov dword ptr [ebp-16], eax
.Lt_01CD:
cmp dword ptr [ebp-16], 0
jne .Lt_01D4
cmp dword ptr [ENV+876], 0
je .Lt_01D6
push dword ptr [ebp-8]
push 41
call ERRREPORTUNDEF
add esp, 8
.Lt_01D6:
.Lt_01D5:
cmp dword ptr [ebp+8], 0
je .Lt_01D8
mov eax, dword ptr [ENV+840]
and eax, 8388608
test eax, eax
je .Lt_01DA
push 1
push dword ptr [ebp+8]
call SYMBFINDBYCLASS
add esp, 8
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 0
je .Lt_01DC
mov eax, dword ptr [ebp-16]
mov ebx, dword ptr [eax+128]
mov eax, dword ptr [SYMB+98516]
cmp dword ptr [ebx], eax
je .Lt_01DE
push 0
push 0
push 130
call ERRREPORT
add esp, 12
.Lt_01DE:
.Lt_01DD:
.Lt_01DC:
.Lt_01DB:
.Lt_01DA:
.Lt_01D9:
.Lt_01D8:
.Lt_01D7:
push dword ptr [ebp-12]
push dword ptr [ebp-8]
call HVARADDUNDECL
add esp, 8
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 0
jne .Lt_01E0
mov dword ptr [ebp-4], 0
jmp .Lt_01C6
.Lt_01E0:
.Lt_01DF:
mov eax, dword ptr [PARSER+144]
and eax, 4
test eax, eax
je .Lt_01E2
mov eax, dword ptr [ENV+840]
and eax, 2
test eax, eax
je .Lt_01E4
cmp dword ptr [ENV+876], 0
jne .Lt_01E6
push 1
push dword ptr [ebp-8]
push 11
call ERRREPORTWARN
add esp, 12
.Lt_01E6:
.Lt_01E5:
.Lt_01E4:
.Lt_01E3:
.Lt_01E2:
.Lt_01E1:
.Lt_01D4:
.Lt_01D3:
push dword ptr [ebp+12]
push dword ptr [ebp-16]
call _Z11CVARIABLEEXP8FBSYMBOLi
add esp, 8
mov dword ptr [ebp-4], eax
.Lt_01C6:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size _Z11CVARIABLEEXP10FBSYMCHAINi, .-_Z11CVARIABLEEXP10FBSYMCHAINi
.balign 16

.globl CWITHVARIABLE
CWITHVARIABLE:
.type CWITHVARIABLE, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_01F1:
push 64
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [PARSER+52]
mov ebx, dword ptr [eax+12]
mov dword ptr [ebp-8], ebx
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx+24]
mov dword ptr [ebp-12], eax
mov eax, dword ptr [PARSER+52]
cmp dword ptr [eax+16], 0
je .Lt_01F4
mov eax, dword ptr [ebp-12]
and eax, 31
mov ebx, dword ptr [ebp-12]
and ebx, 480
add ebx, -32
or eax, ebx
mov ebx, dword ptr [ebp-12]
and ebx, 261632
sar ebx, 1
and ebx, 261632
or eax, ebx
mov dword ptr [ebp-12], eax
.Lt_01F4:
.Lt_01F3:
push 0
mov eax, dword ptr [PARSER+52]
push dword ptr [eax+16]
push dword ptr [ebp+8]
mov eax, dword ptr [ebp-8]
push dword ptr [eax+28]
push dword ptr [ebp-12]
push dword ptr [ebp-8]
call HIMPFIELD
add esp, 24
mov dword ptr [ebp-4], eax
.Lt_01F2:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CWITHVARIABLE, .-CWITHVARIABLE
.balign 16

.globl CVARIABLE
CVARIABLE:
.type CVARIABLE, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_01F5:
push 0
call LEXGETCLASS
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
je .Lt_01FA
.Lt_01FB:
cmp dword ptr [ebp-8], 2
jne .Lt_01F9
.Lt_01FA:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call _Z11CVARIABLEEXP10FBSYMCHAINi
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_01F6
jmp .Lt_01F7
.Lt_01F9:
cmp dword ptr [PARSER+52], 0
jne .Lt_01FE
mov dword ptr [ebp-4], 0
jmp .Lt_01F6
.Lt_01FE:
.Lt_01FD:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 46
je .Lt_0200
mov dword ptr [ebp-4], 0
jmp .Lt_01F6
.Lt_0200:
.Lt_01FF:
push dword ptr [ebp+12]
call CWITHVARIABLE
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_01FC:
.Lt_01F7:
.Lt_01F6:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size CVARIABLE, .-CVARIABLE
.balign 16

.globl CIMPLICITDATAMEMBER
CIMPLICITDATAMEMBER:
.type CIMPLICITDATAMEMBER, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_0201:
mov dword ptr [ebp-8], 0
mov eax, dword ptr [PARSER+100]
mov ebx, dword ptr [eax+72]
mov dword ptr [ebp-12], ebx
mov ebx, dword ptr [PARSER+100]
mov eax, dword ptr [ebx+4]
and eax, 2048
test eax, eax
setne al
shr eax, 1
sbb eax, eax
cmp dword ptr [ebp-12], 0
setne bl
shr ebx, 1
sbb ebx, ebx
and eax, ebx
je .Lt_0204
mov ebx, dword ptr [ebp-12]
mov eax, dword ptr [ebx+56]
mov dword ptr [ebp-8], eax
.Lt_0204:
.Lt_0203:
cmp dword ptr [ebp-8], 0
jne .Lt_0206
push 0
push 0
push 214
call ERRREPORT
add esp, 12
mov dword ptr [ebp-4], 0
jmp .Lt_0202
.Lt_0206:
.Lt_0205:
cmp dword ptr [ebp+8], 0
jne .Lt_0208
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+28]
mov dword ptr [ebp+8], ebx
.Lt_0208:
.Lt_0207:
push dword ptr [ebp+20]
push -1
push dword ptr [ebp+16]
push dword ptr [ebp+8]
mov ebx, dword ptr [ebp-8]
push dword ptr [ebx+24]
push dword ptr [ebp-8]
call HIMPFIELD
add esp, 24
mov dword ptr [ebp-4], eax
.Lt_0202:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CIMPLICITDATAMEMBER, .-CIMPLICITDATAMEMBER
.balign 16

.globl CVARORDEREF
CVARORDEREF:
.type CVARORDEREF, @function
push ebp
mov ebp, esp
sub esp, 28
push ebx
mov dword ptr [ebp-4], 0
.Lt_020B:
mov eax, dword ptr [ebp+8]
and eax, 4
je .Lt_020E
mov eax, dword ptr [PARSER+144]
and eax, 4
test eax, eax
setne al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-8], eax
mov eax, dword ptr [PARSER+144]
or eax, 4
mov ebx, eax
mov dword ptr [PARSER+144], ebx
jmp .Lt_020F
.Lt_0210:
mov ebx, dword ptr [PARSER+144]
and ebx, -5
mov eax, ebx
mov dword ptr [PARSER+144], eax
.Lt_020F:
.Lt_020E:
.Lt_020D:
mov eax, dword ptr [PARSER+144]
and eax, 2
test eax, eax
setne al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp+8]
and eax, 1
test eax, eax
jne .Lt_0212
mov eax, dword ptr [PARSER+144]
or eax, 2
mov ebx, eax
mov dword ptr [PARSER+144], ebx
jmp .Lt_0211
.Lt_0212:
mov ebx, dword ptr [PARSER+144]
and ebx, -3
mov eax, ebx
mov dword ptr [PARSER+144], eax
.Lt_0211:
push 0
push 0
call CHIGHESTPRECEXPR
add esp, 8
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-12], 0
je .Lt_0214
mov eax, dword ptr [PARSER+144]
or eax, 2
mov ebx, eax
mov dword ptr [PARSER+144], ebx
jmp .Lt_0213
.Lt_0214:
mov ebx, dword ptr [PARSER+144]
and ebx, -3
mov eax, ebx
mov dword ptr [PARSER+144], eax
.Lt_0213:
mov eax, dword ptr [ebp+8]
and eax, 4
je .Lt_0216
cmp dword ptr [ebp-8], 0
je .Lt_0218
mov eax, dword ptr [PARSER+144]
or eax, 4
mov ebx, eax
mov dword ptr [PARSER+144], ebx
jmp .Lt_0217
.Lt_0218:
mov ebx, dword ptr [PARSER+144]
and ebx, -5
mov eax, ebx
mov dword ptr [PARSER+144], eax
.Lt_0217:
.Lt_0216:
.Lt_0215:
cmp dword ptr [ebp-16], 0
je .Lt_021A
push dword ptr [ebp-16]
call ASTSKIPNOCONVCAST
add esp, 4
mov dword ptr [ebp-20], eax
mov dword ptr [ebp-24], -1
mov eax, dword ptr [ebp-20]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-28], ebx
jmp .Lt_021C
.Lt_021E:
mov dword ptr [ebp-24], 0
jmp .Lt_021B
.Lt_021F:
mov ebx, dword ptr [ebp+8]
and ebx, 16
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-24], ebx
jmp .Lt_021B
.Lt_021C:
mov ebx, dword ptr [ebp-28]
add ebx, 4294967287
cmp ebx, 16
ja .Lt_021B
mov ebx, dword ptr [ebp-28]
jmp dword ptr [.LT_0220+ebx*4-36]
.LT_0220:
.int .Lt_021F
.int .Lt_021B
.int .Lt_021B
.int .Lt_021B
.int .Lt_021B
.int .Lt_021B
.int .Lt_021B
.int .Lt_021B
.int .Lt_021E
.int .Lt_021E
.int .Lt_021E
.int .Lt_021E
.int .Lt_021B
.int .Lt_021B
.int .Lt_021B
.int .Lt_021B
.int .Lt_021F
.Lt_021B:
cmp dword ptr [ebp-24], 0
je .Lt_0222
push 0
push 0
push 24
call ERRREPORT
add esp, 12
push dword ptr [ebp-16]
call ASTDELTREE
add esp, 4
mov dword ptr [ebp-16], 0
.Lt_0222:
.Lt_0221:
.Lt_021A:
.Lt_0219:
mov ebx, dword ptr [ebp-16]
mov dword ptr [ebp-4], ebx
.Lt_020C:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CVARORDEREF, .-CVARORDEREF
.balign 16
fb_ctor__parserzexprzvariable:
.type fb_ctor__parserzexprzvariable, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__parserzexprzvariable, .-fb_ctor__parserzexprzvariable
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
HINDEXEXPR:
.type HINDEXEXPR, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_005F:
push 0
call CEXPRESSIONWITHNIDXARRAY
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
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
mov dword ptr [ebp-8], eax
.Lt_0062:
.Lt_0061:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0060:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size HINDEXEXPR, .-HINDEXEXPR
.balign 16
HCHECKINTEGERINDEX:
.type HCHECKINTEGERINDEX, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_0063:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 511
and ebx, 480
je .Lt_0065
mov dword ptr [ebp-8], 22
jmp .Lt_0226
.Lt_0065:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 511
and eax, 31
mov dword ptr [ebp-8], eax
.Lt_0226:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 7
jne .Lt_0069
.Lt_006A:
jmp .Lt_0067
.Lt_0069:
cmp dword ptr [ebp-12], 22
jne .Lt_006B
.Lt_006C:
push 0
push -1
push 150
call ERRREPORT
add esp, 12
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp+8], eax
jmp .Lt_0067
.Lt_006B:
push 0
push 0
push dword ptr [ebp+8]
push 0
push 7
call ASTNEWCONV
add esp, 20
mov dword ptr [ebp+8], eax
cmp dword ptr [ebp+8], 0
jne .Lt_006F
push 0
push -1
push 150
call ERRREPORT
add esp, 12
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp+8], eax
.Lt_006F:
.Lt_006E:
.Lt_006D:
.Lt_0067:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
.Lt_0064:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HCHECKINTEGERINDEX, .-HCHECKINTEGERINDEX
.balign 16
CFIXEDSIZEARRAYINDEX:
.type CFIXEDSIZEARRAYINDEX, @function
push ebp
mov ebp, esp
sub esp, 32
push ebx
mov dword ptr [ebp-4], 0
.Lt_0070:
mov dword ptr [ebp-16], -1
mov dword ptr [ebp-8], 0
.Lt_0072:
inc dword ptr [ebp-16]
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
cmp dword ptr [ebp-16], ebx
jl .Lt_0076
push 0
push 0
push 36
call ERRREPORT
add esp, 12
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-4], eax
jmp .Lt_0071
.Lt_0076:
.Lt_0075:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-16]
sal ebx, 4
mov ecx, dword ptr [eax+60]
add ecx, ebx
mov eax, dword ptr [ecx]
mov ebx, dword ptr [ecx+4]
mov dword ptr [ebp-24], eax
mov dword ptr [ebp-20], ebx
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-16]
sal ebx, 4
mov ecx, dword ptr [eax+60]
add ecx, ebx
mov eax, dword ptr [ecx+8]
mov ebx, dword ptr [ecx+12]
mov dword ptr [ebp-32], eax
mov dword ptr [ebp-28], ebx
call HINDEXEXPR
push eax
call HCHECKINTEGERINDEX
add esp, 4
mov dword ptr [ebp-12], eax
cmp dword ptr [ENV+156], 0
je .Lt_0078
push 0
push 7
push dword ptr [ebp-28]
push dword ptr [ebp-32]
call ASTNEWCONSTI
add esp, 16
push eax
push 0
push 7
push dword ptr [ebp-20]
push dword ptr [ebp-24]
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp-12]
call ASTBUILDBOUNDCHK
add esp, 12
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_007A
push 0
push 0
push 91
call ERRREPORT
add esp, 12
push 0
push 7
push dword ptr [ebp-20]
push dword ptr [ebp-24]
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-12], eax
.Lt_007A:
.Lt_0079:
.Lt_0078:
.Lt_0077:
cmp dword ptr [ebp-8], 0
jne .Lt_007C
mov eax, dword ptr [ebp-12]
mov dword ptr [ebp-8], eax
jmp .Lt_007B
.Lt_007C:
push 1
push 0
push 0
push 7
mov ebx, dword ptr [ebp-32]
mov eax, dword ptr [ebp-28]
sub ebx, dword ptr [ebp-24]
sbb eax, dword ptr [ebp-20]
add ebx, 1
adc eax, 0
push eax
push ebx
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp-8]
push 30
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp-8], eax
push 1
push 0
push dword ptr [ebp-12]
push dword ptr [ebp-8]
push 28
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp-8], eax
.Lt_007B:
.Lt_0074:
push 44
call HMATCH
add esp, 4
test eax, eax
jne .Lt_0072
.Lt_0073:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
dec ebx
cmp dword ptr [ebp-16], ebx
jge .Lt_007E
push 0
push 0
push 36
call ERRREPORT
add esp, 12
.Lt_007E:
.Lt_007D:
push 1
push 0
push 0
push 7
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+40]
push dword ptr [ebx+36]
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp-8]
push 30
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0071:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CFIXEDSIZEARRAYINDEX, .-CFIXEDSIZEARRAYINDEX
.balign 16
HBUILDFIELD:
.type HBUILDFIELD, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_007F:
push 1
push 0
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 28
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp+8], eax
push 0
push 0
push dword ptr [ebp+24]
push dword ptr [ebp+20]
push dword ptr [ebp+8]
call ASTNEWDEREF
add esp, 20
mov dword ptr [ebp+8], eax
push dword ptr [ebp+16]
push dword ptr [ebp+8]
call ASTNEWFIELD
add esp, 8
mov dword ptr [ebp+8], eax
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
.Lt_0080:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size HBUILDFIELD, .-HBUILDFIELD
.balign 16
HFIELDACCESS:
.type HFIELDACCESS, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
mov dword ptr [ebp-4], 0
.Lt_0081:
push 0
push 7
mov eax, dword ptr [ebp+12]
push dword ptr [eax+48]
push dword ptr [eax+44]
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax+56], 0
je .Lt_0084
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
setne al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [PARSER+144]
and ebx, 4096
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
je .Lt_0086
cmp dword ptr [ebp+24], 0
je .Lt_0088
push 0
push 0
push 72
call ERRREPORT
add esp, 12
.Lt_0088:
.Lt_0087:
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp-8]
push dword ptr [ebp+8]
call HBUILDFIELD
add esp, 20
push eax
call ASTNEWNIDXARRAY
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_0082
.Lt_0086:
.Lt_0085:
push 0
push 1
call LEXGETLOOKAHEAD
add esp, 8
cmp eax, 41
jne .Lt_008A
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp-8]
push dword ptr [ebp+8]
call HBUILDFIELD
add esp, 20
mov dword ptr [ebp-4], eax
jmp .Lt_0082
.Lt_008A:
.Lt_0089:
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 4
test ebx, ebx
je .Lt_008C
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+80]
mov dword ptr [ebp-20], eax
push 1
push 0
push dword ptr [ebp-8]
push dword ptr [ebp+8]
push 28
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp+8], eax
push 0
push 8
push dword ptr [ebp+8]
mov eax, dword ptr [ebp-20]
push dword ptr [eax+28]
mov eax, dword ptr [ebp-20]
mov ebx, dword ptr [eax+24]
and ebx, 31
mov eax, dword ptr [ebp-20]
mov ecx, dword ptr [eax+24]
and ecx, 480
add ecx, 32
or ebx, ecx
mov ecx, dword ptr [ebp-20]
mov eax, dword ptr [ecx+24]
and eax, 261632
sal eax, 1
or ebx, eax
push ebx
call ASTNEWCONV
add esp, 20
mov dword ptr [ebp+8], eax
mov dword ptr [ebp-16], 0
push dword ptr [ebp+8]
call ASTHASSIDEFX
add esp, 4
test eax, eax
je .Lt_008E
push 0
lea eax, [ebp+8]
push eax
call ASTREMSIDEFX
add esp, 4
push eax
push dword ptr [ebp-16]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-16], eax
.Lt_008E:
.Lt_008D:
push 0
push 0
push 0
push -2147483648
push dword ptr [ebp+8]
call ASTCLONETREE
add esp, 4
push eax
call ASTNEWDEREF
add esp, 20
push eax
push dword ptr [ebp+12]
call CDYNAMICARRAYINDEX
add esp, 8
mov dword ptr [ebp-12], eax
push 1
push 0
push 0
push 7
mov ebx, dword ptr [SYMB+99560]
mov eax, ebx
sar eax, 31
push eax
push ebx
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp+8]
push 28
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp+8], eax
push 0
push 8
push dword ptr [ebp+8]
push dword ptr [ebp+20]
mov eax, dword ptr [ebp+16]
and eax, 31
mov ebx, dword ptr [ebp+16]
and ebx, 480
add ebx, 64
or eax, ebx
mov ebx, dword ptr [ebp+16]
and ebx, 261632
sal ebx, 2
or eax, ebx
push eax
call ASTNEWCONV
add esp, 20
mov dword ptr [ebp+8], eax
push 0
push 0
push 0
push -2147483648
push dword ptr [ebp+8]
call ASTNEWDEREF
add esp, 20
mov dword ptr [ebp+8], eax
push 1
push 0
push dword ptr [ebp-12]
push dword ptr [ebp+8]
push 28
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp+8], eax
push 0
push 0
push 0
push -2147483648
push dword ptr [ebp+8]
call ASTNEWDEREF
add esp, 20
mov dword ptr [ebp+8], eax
push 0
push dword ptr [ebp+8]
push dword ptr [ebp-16]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp+8], eax
jmp .Lt_008B
.Lt_008C:
push dword ptr [ebp+12]
call CFIXEDSIZEARRAYINDEX
add esp, 4
mov dword ptr [ebp-12], eax
push 1
push 0
push 0
push 7
mov eax, dword ptr [ebp+12]
push dword ptr [eax+68]
push dword ptr [eax+64]
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp-12]
push 28
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp-12], eax
push 1
push 0
push dword ptr [ebp-12]
push dword ptr [ebp-8]
push 28
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp-8], eax
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp-8]
push dword ptr [ebp+8]
call HBUILDFIELD
add esp, 20
mov dword ptr [ebp+8], eax
.Lt_008B:
push 41
call HMATCH
add esp, 4
test eax, eax
jne .Lt_0090
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
.Lt_0090:
.Lt_008F:
jmp .Lt_0083
.Lt_0084:
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp-8]
push dword ptr [ebp+8]
call HBUILDFIELD
add esp, 20
mov dword ptr [ebp+8], eax
.Lt_0083:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
.Lt_0082:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HFIELDACCESS, .-HFIELDACCESS
.balign 16
HMEMBERID:
.type HMEMBERID, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
mov dword ptr [ebp-4], 0
.Lt_0091:
cmp dword ptr [ebp+8], 0
jne .Lt_0094
push 0
push -1
push 264
call ERRREPORT
add esp, 12
mov dword ptr [ebp-4], 0
jmp .Lt_0092
.Lt_0094:
.Lt_0093:
push 0
call LEXGETCLASS
add esp, 4
mov dword ptr [ebp-16], eax
jmp .Lt_0096
.Lt_0098:
jmp .Lt_0095
.Lt_0099:
push 0
push 0
push 14
call ERRREPORT
add esp, 12
mov dword ptr [ebp-4], 0
jmp .Lt_0092
jmp .Lt_0095
.Lt_0096:
cmp dword ptr [ebp-16], 2
ja .Lt_0099
mov eax, dword ptr [ebp-16]
jmp dword ptr [.LT_009A+eax*4]
.LT_009A:
.int .Lt_0098
.int .Lt_0098
.int .Lt_0098
.Lt_0095:
mov dword ptr [ebp-8], 0
push 0
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 347
jne .Lt_009D
.Lt_009E:
push dword ptr [ebp+8]
call SYMBGETCOMPCTORHEAD
add esp, 4
mov dword ptr [ebp-8], eax
jmp .Lt_009B
.Lt_009D:
cmp dword ptr [ebp-16], 348
jne .Lt_009F
.Lt_00A0:
push dword ptr [ebp+8]
call SYMBGETCOMPDTOR
add esp, 4
mov dword ptr [ebp-8], eax
.Lt_009F:
.Lt_009B:
cmp dword ptr [ebp-8], 0
je .Lt_00A2
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
jmp .Lt_0092
.Lt_00A2:
.Lt_00A1:
push -1
push 0
call LEXGETTEXT
push eax
push dword ptr [ebp+8]
call SYMBLOOKUPAT
add esp, 16
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_00A4
call LEXGETTEXT
push eax
push 18
call ERRREPORTUNDEF
add esp, 8
push 0
call LEXSKIPTOKEN
add esp, 4
mov dword ptr [ebp-4], 0
jmp .Lt_0092
.Lt_00A4:
.Lt_00A3:
.Lt_00A5:
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-16], ebx
.Lt_00A8:
mov ebx, dword ptr [ebp-16]
movzx eax, word ptr [ebx+32]
mov ebx, dword ptr [ebp+8]
movzx ecx, word ptr [ebx+32]
cmp eax, ecx
jne .Lt_00AC
mov ecx, dword ptr [ebp-16]
mov eax, dword ptr [ecx]
mov dword ptr [ebp-20], eax
jmp .Lt_00AE
.Lt_00B0:
push dword ptr [ebp-16]
call SYMBCHECKACCESS
add esp, 4
test eax, eax
jne .Lt_00B2
push 0
push 0
push 201
call ERRREPORT
add esp, 12
.Lt_00B2:
.Lt_00B1:
jmp .Lt_00AD
.Lt_00B3:
jmp .Lt_00AD
.Lt_00B4:
push 0
push 1
push 0
push offset Lt_00B5
push 21
call ERRREPORTEX
add esp, 20
mov dword ptr [ebp-4], 0
jmp .Lt_0092
jmp .Lt_00AD
.Lt_00AE:
mov eax, dword ptr [ebp-20]
add eax, 4294967295
cmp eax, 11
ja .Lt_00B4
mov eax, dword ptr [ebp-20]
jmp dword ptr [.LT_00B6+eax*4-4]
.LT_00B6:
.int .Lt_00B0
.int .Lt_00B0
.int .Lt_00B3
.int .Lt_00B4
.int .Lt_00B4
.int .Lt_00B4
.int .Lt_00B4
.int .Lt_00B4
.int .Lt_00B0
.int .Lt_00B4
.int .Lt_00B4
.int .Lt_00B0
.Lt_00AD:
mov eax, dword ptr [ebp-16]
mov dword ptr [ebp-4], eax
jmp .Lt_0092
.Lt_00AC:
.Lt_00AB:
mov eax, dword ptr [ebp-16]
mov ecx, dword ptr [eax+144]
mov dword ptr [ebp-16], ecx
.Lt_00AA:
cmp dword ptr [ebp-16], 0
jne .Lt_00A8
.Lt_00A9:
mov ecx, dword ptr [ebp-12]
mov eax, dword ptr [ecx+4]
mov dword ptr [ebp-12], eax
.Lt_00A7:
cmp dword ptr [ebp-12], 0
jne .Lt_00A5
.Lt_00A6:
call LEXGETTEXT
push eax
push 18
call ERRREPORTUNDEF
add esp, 8
push 0
call LEXSKIPTOKEN
add esp, 4
mov dword ptr [ebp-4], 0
.Lt_0092:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HMEMBERID, .-HMEMBERID
.balign 16
HSTRINDEXING:
.type HSTRINDEXING, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
mov dword ptr [ebp-4], 0
.Lt_00E2:
push dword ptr [ebp+12]
call ASTUPDSTRCONCAT
add esp, 4
mov dword ptr [ebp+12], eax
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax], 9
jne .Lt_00E5
push 0
push -1
push 17
call ERRREPORT
add esp, 12
.Lt_00E5:
.Lt_00E4:
mov eax, dword ptr [ebp+8]
and eax, 480
je .Lt_00E6
mov dword ptr [ebp-8], 22
jmp .Lt_0229
.Lt_00E6:
mov eax, dword ptr [ebp+8]
and eax, 31
mov dword ptr [ebp-8], eax
.Lt_0229:
cmp dword ptr [ebp-8], 16
jne .Lt_00E9
push dword ptr [ebp+12]
call ASTBUILDSTRPTR
add esp, 4
mov dword ptr [ebp+12], eax
jmp .Lt_00E8
.Lt_00E9:
push dword ptr [ebp+12]
call ASTNEWADDROF
add esp, 4
mov dword ptr [ebp+12], eax
.Lt_00E8:
mov eax, dword ptr [ebp+8]
and eax, 480
je .Lt_00EA
mov dword ptr [ebp-12], 22
jmp .Lt_022A
.Lt_00EA:
mov eax, dword ptr [ebp+8]
and eax, 31
mov dword ptr [ebp-12], eax
.Lt_022A:
cmp dword ptr [ebp-12], 6
jne .Lt_00ED
push 1
push 0
push 0
push 7
mov ebx, dword ptr [SYMB_DTYPETB+172]
mov eax, ebx
sar eax, 31
push eax
push ebx
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp+16]
push 30
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp+16], eax
.Lt_00ED:
.Lt_00EC:
cmp dword ptr [ENV+156], 0
je .Lt_00EF
push dword ptr [ebp+12]
call ASTBUILDPTRCHK
add esp, 4
mov dword ptr [ebp+12], eax
.Lt_00EF:
.Lt_00EE:
push 1
push 0
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push 28
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp+12], eax
mov eax, dword ptr [ebp+8]
and eax, 480
je .Lt_00F0
mov dword ptr [ebp-16], 22
jmp .Lt_022B
.Lt_00F0:
mov eax, dword ptr [ebp+8]
and eax, 31
mov dword ptr [ebp-16], eax
.Lt_022B:
cmp dword ptr [ebp-16], 6
jne .Lt_00F3
mov eax, dword ptr [ebp+8]
and eax, -512
mov ebx, dword ptr [ENV+212]
and ebx, 511
or eax, ebx
mov dword ptr [ebp+8], eax
jmp .Lt_00F2
.Lt_00F3:
mov eax, dword ptr [ebp+8]
and eax, -512
or eax, 2
mov dword ptr [ebp+8], eax
.Lt_00F2:
push 0
push 0
push 0
push dword ptr [ebp+8]
push dword ptr [ebp+12]
call ASTNEWDEREF
add esp, 20
mov dword ptr [ebp-4], eax
.Lt_00E3:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HSTRINDEXING, .-HSTRINDEXING
.balign 16
HMULTIDEREF:
.type HMULTIDEREF, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_00F4:
mov dword ptr [ebp-8], 0
.Lt_00F6:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 42
jne .Lt_00F7
push 64
call LEXSKIPTOKEN
add esp, 4
inc dword ptr [ebp-8]
jmp .Lt_00F6
.Lt_00F7:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_00F5:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size HMULTIDEREF, .-HMULTIDEREF
.balign 16
CDYNAMICARRAYINDEX:
.type CDYNAMICARRAYINDEX, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
push esi
push edi
mov dword ptr [ebp-4], 0
.Lt_015F:
mov dword ptr [ebp-16], -1
mov dword ptr [ebp-8], 0
.Lt_0161:
inc dword ptr [ebp-16]
mov ebx, dword ptr [SYMB+99572]
mov eax, ebx
sar eax, 31
mov esi, dword ptr [ebp-16]
mov ecx, esi
sar ecx, 31
mov edi, dword ptr [SYMB+99576]
push dword ptr [edi+40]
push dword ptr [edi+36]
push ecx
push esi
push eax
mov eax, [esp+4]
mul dword ptr [esp+12]
xchg eax, [esp+4]
imul eax, [esp+16]
add eax, edx
mov edx, [esp+8]
imul edx, [esp+12]
add edx, eax
mov [esp+8], edx
pop eax
pop esi
pop ecx
add esp, 8
add ebx, esi
adc eax, ecx
mov dword ptr [ebp-24], ebx
mov dword ptr [ebp-20], eax
call HINDEXEXPR
push eax
call HCHECKINTEGERINDEX
add esp, 4
mov dword ptr [ebp-12], eax
cmp dword ptr [ENV+156], 0
je .Lt_0165
push 0
push 0
push 7
mov ebx, dword ptr [SYMB+99584]
mov eax, ebx
sar eax, 31
add ebx, dword ptr [ebp-24]
adc eax, dword ptr [ebp-20]
push eax
push ebx
push dword ptr [ebp+12]
call ASTCLONETREE
add esp, 4
push eax
call _Z19ASTBUILDDEREFADDROFP7ASTNODExiP8FBSYMBOLS2_
add esp, 24
push eax
push 0
push 0
push 7
mov ebx, dword ptr [SYMB+99580]
mov eax, ebx
sar eax, 31
add ebx, dword ptr [ebp-24]
adc eax, dword ptr [ebp-20]
push eax
push ebx
push dword ptr [ebp+12]
call ASTCLONETREE
add esp, 4
push eax
call _Z19ASTBUILDDEREFADDROFP7ASTNODExiP8FBSYMBOLS2_
add esp, 24
push eax
push dword ptr [ebp-12]
call ASTBUILDBOUNDCHK
add esp, 12
mov dword ptr [ebp-12], eax
.Lt_0165:
.Lt_0164:
cmp dword ptr [ebp-8], 0
jne .Lt_0167
mov eax, dword ptr [ebp-12]
mov dword ptr [ebp-8], eax
jmp .Lt_0166
.Lt_0167:
push 1
push 0
push 0
push 0
push 7
push dword ptr [ebp-20]
push dword ptr [ebp-24]
push dword ptr [ebp+12]
call ASTCLONETREE
add esp, 4
push eax
call _Z19ASTBUILDDEREFADDROFP7ASTNODExiP8FBSYMBOLS2_
add esp, 24
push eax
push dword ptr [ebp-8]
push 30
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp-8], eax
push 1
push 0
push dword ptr [ebp-12]
push dword ptr [ebp-8]
push 28
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp-8], eax
.Lt_0166:
.Lt_0163:
push 44
call HMATCH
add esp, 4
test eax, eax
jne .Lt_0161
.Lt_0162:
push 1
push 0
push 0
push 7
mov eax, dword ptr [ebp+8]
push dword ptr [eax+40]
push dword ptr [eax+36]
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp-8]
push 30
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp-8], eax
push dword ptr [ebp+12]
call ASTDELTREE
add esp, 4
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 4
test ebx, ebx
je .Lt_0169
mov ebx, dword ptr [ebp-16]
inc ebx
push ebx
push dword ptr [ebp+8]
call SYMBCHECKDYNAMICARRAYDIMENSIONS
add esp, 8
.Lt_0169:
.Lt_0168:
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ebx
.Lt_0160:
mov eax, dword ptr [ebp-4]
pop edi
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size CDYNAMICARRAYINDEX, .-CDYNAMICARRAYINDEX
.balign 16
HVARADDUNDECL:
.type HVARADDUNDECL, @function
push ebp
mov ebp, esp
sub esp, 68
push ebx
mov dword ptr [ebp-4], 0
.Lt_016A:
lea eax, [ebp-24]
mov dword ptr [ebp-56], eax
lea eax, [ebp-24]
lea ebx, [ebp-56]
add ebx, 4
mov dword ptr [ebx], eax
lea eax, [ebp-56]
add eax, 8
mov dword ptr [eax], 16
lea eax, [ebp-56]
add eax, 12
mov dword ptr [eax], 16
lea eax, [ebp-56]
add eax, 16
mov dword ptr [eax], 1
lea eax, [ebp-56]
add eax, 20
mov dword ptr [eax], 1
lea eax, [ebp-56]
add eax, 24
mov dword ptr [eax], 0
lea eax, [ebp-56]
add eax, 28
mov dword ptr [eax], 0
mov dword ptr [ebp-4], 0
mov eax, dword ptr [PARSER+100]
mov ebx, dword ptr [eax+4]
and ebx, 2097152
test ebx, ebx
je .Lt_016E
mov dword ptr [ebp-60], 2
jmp .Lt_016D
.Lt_016E:
mov dword ptr [ebp-60], 0
lea ebx, [SYMB+98352]
cmp dword ptr [SYMB+98516], ebx
sete al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_0170
mov eax, dword ptr [ENV+832]
cmp dword ptr [PARSER+100], eax
jne .Lt_0172
mov eax, dword ptr [ebp-60]
and eax, 57
test eax, eax
jne .Lt_0174
or dword ptr [ebp-60], 2
.Lt_0174:
.Lt_0173:
.Lt_0172:
.Lt_0171:
.Lt_0170:
.Lt_016F:
.Lt_016D:
cmp dword ptr [ebp+12], -2147483648
jne .Lt_0176
push dword ptr [ebp+8]
call SYMBGETDEFTYPE
add esp, 4
mov dword ptr [ebp+12], eax
jmp .Lt_0175
.Lt_0176:
or dword ptr [ebp-60], 268435456
.Lt_0175:
mov dword ptr [ebp-64], 0
mov eax, dword ptr [ENV+840]
and eax, 2
test eax, eax
je .Lt_0178
mov eax, dword ptr [PARSER+144]
and eax, 8
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_017A
or dword ptr [ebp-64], 2
.Lt_017A:
.Lt_0179:
jmp .Lt_0177
.Lt_0178:
or dword ptr [ebp-64], 2
.Lt_0177:
push dword ptr [ebp-64]
push dword ptr [ebp-60]
lea eax, [ebp-56]
push eax
push 0
push 0
push 0
push 0
push dword ptr [ebp+12]
push 0
push dword ptr [ebp+8]
call SYMBADDVAR
add esp, 40
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_017C
push 0
push 1
push 0
push dword ptr [ebp+8]
push 4
call ERRREPORTEX
add esp, 20
push 0
push dword ptr [ebp-60]
lea eax, [ebp-56]
push eax
push 0
push 0
push 0
push 0
push dword ptr [ebp+12]
push 0
call SYMBUNIQUELABEL
push eax
call SYMBADDVAR
add esp, 40
mov dword ptr [ebp-8], eax
jmp .Lt_017B
.Lt_017C:
push -1
push dword ptr [ebp-8]
call ASTNEWDECL
add esp, 8
mov dword ptr [ebp-68], eax
mov eax, dword ptr [ebp-64]
and eax, 2
test eax, eax
je .Lt_017E
push dword ptr [ebp-68]
call ASTADDUNSCOPED
add esp, 4
jmp .Lt_017D
.Lt_017E:
push dword ptr [ebp-68]
call ASTADD
add esp, 4
.Lt_017D:
.Lt_017B:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_016B:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HVARADDUNDECL, .-HVARADDUNDECL
.balign 16
HMAKEARRAYIDX:
.type HMAKEARRAYIDX, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_017F:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 65536
test ebx, ebx
je .Lt_0182
mov eax, dword ptr [SYMB+99560]
mov ebx, eax
sar ebx, 31
push ebx
push eax
push 0
push 7
push 0
push 7
push 0
push 0
push dword ptr [ebp+8]
call ASTNEWVAR
add esp, 20
push eax
call ASTNEWDEREF
add esp, 20
mov dword ptr [ebp-4], eax
jmp .Lt_0180
.Lt_0182:
.Lt_0181:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 4
test ebx, ebx
je .Lt_0184
push 0
push 7
mov eax, dword ptr [SYMB+99560]
mov ebx, eax
sar ebx, 31
push ebx
push eax
mov eax, dword ptr [ebp+8]
push dword ptr [eax+80]
call ASTNEWVAR
add esp, 20
mov dword ptr [ebp-4], eax
jmp .Lt_0180
.Lt_0184:
.Lt_0183:
push 0
push 7
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+60]
push dword ptr [ebx+4]
push dword ptr [ebx]
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-4], eax
.Lt_0180:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HMAKEARRAYIDX, .-HMAKEARRAYIDX
.balign 16
HIMPFIELD:
.type HIMPFIELD, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_01E7:
cmp dword ptr [ebp+24], 0
je .Lt_01EA
push dword ptr [ebp+16]
mov eax, dword ptr [ebp+12]
and eax, 31
mov ebx, dword ptr [ebp+12]
and ebx, 480
add ebx, 32
or eax, ebx
mov ebx, dword ptr [ebp+12]
and ebx, 261632
sal ebx, 1
or eax, ebx
push eax
push 0
push 0
push dword ptr [ebp+8]
call ASTNEWVAR
add esp, 20
mov dword ptr [ebp-8], eax
jmp .Lt_01E9
.Lt_01EA:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push 0
push 0
push dword ptr [ebp+8]
call ASTNEWVAR
add esp, 20
push eax
call ASTNEWADDROF
add esp, 4
mov dword ptr [ebp-8], eax
.Lt_01E9:
push dword ptr [ebp+28]
push dword ptr [ebp+20]
push dword ptr [ebp-8]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call CUDTMEMBER
add esp, 20
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_01EC
mov dword ptr [ebp-4], 0
jmp .Lt_01E8
.Lt_01EC:
.Lt_01EB:
mov eax, dword ptr [ebp-8]
cmp dword ptr [eax], 25
jne .Lt_01EE
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
jmp .Lt_01E8
.Lt_01EE:
.Lt_01ED:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp+12], ebx
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx+8]
mov dword ptr [ebp+16], eax
mov dword ptr [ebp-12], 0
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
jne .Lt_01F0
mov eax, dword ptr [ebp+12]
and eax, 511
cmp eax, 52
sete al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-12], eax
.Lt_01F0:
.Lt_01EF:
push dword ptr [ebp+20]
push dword ptr [ebp-12]
push dword ptr [ebp-8]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call CFUNCPTRORMEMBERDEREF
add esp, 20
mov dword ptr [ebp-4], eax
.Lt_01E8:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HIMPFIELD, .-HIMPFIELD
	#fbc-1.01.0/src/compiler/parser-expr-variable.bas' compilation took 0.03689793613739312 secs

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

.section .rodata
.balign 4
Lt_00B5:	.ascii	"HMEMBERID\0"
.balign 4
Lt_00D8:	.ascii	"CUDTMEMBER\0"

.section .ctors, "aw", @progbits
.int fb_ctor__parserzexprzvariable
