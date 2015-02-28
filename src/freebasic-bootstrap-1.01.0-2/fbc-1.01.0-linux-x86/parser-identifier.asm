	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/parser-identifier.bas' compilation started at 14:16:36 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl CIDENTIFIER
CIDENTIFIER:
.type CIDENTIFIER, @function
push ebp
mov ebp, esp
sub esp, 28
push ebx
mov dword ptr [ebp-4], 0
.Lt_0086:
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 0
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [eax+16532]
mov eax, dword ptr [ebx+4116]
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ENV+840]
and eax, 4
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_0089
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
jmp .Lt_0087
.Lt_0089:
.Lt_0088:
cmp dword ptr [ebp-8], 0
jne .Lt_008B
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 46
je .Lt_008D
mov dword ptr [ebp-4], 0
jmp .Lt_0087
.Lt_008D:
.Lt_008C:
push dword ptr [ebp+12]
call HGLOBALID
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_008F
mov eax, dword ptr [ebp+12]
and eax, 2
test eax, eax
je .Lt_0091
call LEXGETTEXT
push eax
push 8
call ERRREPORTUNDEF
add esp, 8
jmp .Lt_0090
.Lt_0091:
call HSKIPSYMBOL
.Lt_0090:
mov dword ptr [ebp-4], 0
jmp .Lt_0087
.Lt_008F:
.Lt_008E:
.Lt_008B:
.Lt_008A:
mov dword ptr [ebp-12], 0
.Lt_0092:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-16], ebx
mov ebx, dword ptr [ebp-16]
mov eax, dword ptr [ebx]
mov dword ptr [ebp-20], eax
jmp .Lt_0096
.Lt_0098:
jmp .Lt_0095
.Lt_0099:
push dword ptr [ebp+12]
push dword ptr [ebp-16]
call HISSTRUCTALLOWED
add esp, 8
test eax, eax
jne .Lt_009B
jmp .Lt_0093
.Lt_009B:
.Lt_009A:
jmp .Lt_0095
.Lt_009C:
mov eax, dword ptr [ebp-16]
mov ebx, dword ptr [eax+24]
and ebx, 511
mov dword ptr [ebp-24], ebx
cmp dword ptr [ebp-24], 18
jne .Lt_009F
.Lt_00A0:
mov ebx, dword ptr [ebp-16]
mov eax, dword ptr [ebx+28]
mov dword ptr [ebp-16], eax
push dword ptr [ebp+12]
push dword ptr [ebp-16]
call HISSTRUCTALLOWED
add esp, 8
test eax, eax
jne .Lt_00A2
jmp .Lt_0093
.Lt_00A2:
.Lt_00A1:
jmp .Lt_009D
.Lt_009F:
cmp dword ptr [ebp-24], 9
jne .Lt_00A3
.Lt_00A4:
mov eax, dword ptr [ebp-16]
mov ebx, dword ptr [eax+28]
mov dword ptr [ebp-16], ebx
jmp .Lt_009D
.Lt_00A3:
jmp .Lt_0093
.Lt_00A5:
.Lt_009D:
jmp .Lt_0095
.Lt_00A6:
jmp .Lt_0093
jmp .Lt_0095
.Lt_0096:
mov ebx, dword ptr [ebp-20]
add ebx, 4294967288
cmp ebx, 5
ja .Lt_00A6
mov ebx, dword ptr [ebp-20]
jmp dword ptr [.LT_00A7+ebx*4-32]
.LT_00A7:
.int .Lt_0098
.int .Lt_0098
.int .Lt_0099
.int .Lt_0098
.int .Lt_00A6
.int .Lt_009C
.Lt_0095:
cmp dword ptr [ebp-12], 0
je .Lt_00A9
push dword ptr [ebp-16]
call SYMBCHECKACCESS
add esp, 4
test eax, eax
jne .Lt_00AB
mov eax, dword ptr [ebp+12]
and eax, 2
test eax, eax
je .Lt_00AD
push 0
push 0
push 201
call ERRREPORT
add esp, 12
.Lt_00AD:
.Lt_00AC:
.Lt_00AB:
.Lt_00AA:
.Lt_00A9:
.Lt_00A8:
push 64
push 1
call LEXGETLOOKAHEAD
add esp, 8
cmp eax, 46
je .Lt_00AF
mov eax, dword ptr [ebp-16]
cmp dword ptr [eax], 8
jne .Lt_00B1
mov eax, dword ptr [ebp+12]
and eax, 2
test eax, eax
je .Lt_00B3
push 64
call LEXSKIPTOKEN
add esp, 4
push 0
push 0
push 119
call ERRREPORT
add esp, 12
.Lt_00B3:
.Lt_00B2:
.Lt_00B1:
.Lt_00B0:
jmp .Lt_0093
.Lt_00AF:
.Lt_00AE:
mov eax, dword ptr [ebp-16]
cmp dword ptr [eax], 9
jne .Lt_00B5
mov eax, dword ptr [ebp-16]
mov ebx, dword ptr [eax+72]
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_00B7
mov ebx, dword ptr [ebp+12]
and ebx, 2
test ebx, ebx
je .Lt_00B9
push 0
push 0
push 256
call ERRREPORT
add esp, 12
.Lt_00B9:
.Lt_00B8:
jmp .Lt_0093
.Lt_00B7:
.Lt_00B6:
.Lt_00B5:
.Lt_00B4:
push 64
call LEXSKIPTOKEN
add esp, 4
push 64
call LEXSKIPTOKEN
add esp, 4
mov ebx, dword ptr [ebp-16]
mov dword ptr [ebp-12], ebx
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx], 0
jne .Lt_00BB
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp-12]
mov dword ptr [ebx], eax
.Lt_00BB:
.Lt_00BA:
push 0
call LEXGETCLASS
add esp, 4
mov dword ptr [ebp-20], eax
jmp .Lt_00BD
.Lt_00BF:
jmp .Lt_00BC
.Lt_00C0:
mov eax, dword ptr [ebp+12]
and eax, 8
test eax, eax
je .Lt_00C2
jmp .Lt_0093
.Lt_00C2:
.Lt_00C1:
mov eax, dword ptr [ebp+12]
and eax, 2
test eax, eax
je .Lt_00C4
push 0
push 0
push 14
call ERRREPORT
add esp, 12
.Lt_00C4:
.Lt_00C3:
mov dword ptr [ebp-4], 0
jmp .Lt_0087
jmp .Lt_00BC
.Lt_00C5:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 91
jne .Lt_00C7
mov eax, dword ptr [ebp+12]
and eax, 8
test eax, eax
je .Lt_00C9
jmp .Lt_0093
.Lt_00C9:
.Lt_00C8:
.Lt_00C7:
.Lt_00C6:
mov eax, dword ptr [ebp+12]
and eax, 2
test eax, eax
je .Lt_00CB
push 0
push 0
push 14
call ERRREPORT
add esp, 12
.Lt_00CB:
.Lt_00CA:
mov dword ptr [ebp-4], 0
jmp .Lt_0087
jmp .Lt_00BC
.Lt_00BD:
cmp dword ptr [ebp-20], 5
ja .Lt_00C5
mov eax, dword ptr [ebp-20]
jmp dword ptr [.LT_00CC+eax*4]
.LT_00CC:
.int .Lt_00BF
.int .Lt_00C0
.int .Lt_00BF
.int .Lt_00C5
.int .Lt_00C5
.int .Lt_00C0
.Lt_00BC:
push -1
push 0
call LEXGETTEXT
push eax
push dword ptr [ebp-12]
call SYMBLOOKUPAT
add esp, 16
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_00CE
mov eax, dword ptr [ebp+12]
and eax, 2
test eax, eax
je .Lt_00D0
call LEXGETTEXT
push eax
push 8
call ERRREPORTUNDEF
add esp, 8
jmp .Lt_00CF
.Lt_00D0:
call HSKIPSYMBOL
.Lt_00CF:
mov dword ptr [ebp-4], 0
jmp .Lt_0087
.Lt_00CE:
.Lt_00CD:
mov eax, dword ptr [ebp+12]
and eax, 32
test eax, eax
je .Lt_00D2
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-20], ebx
cmp dword ptr [ebp-20], 10
je .Lt_00D6
.Lt_00D7:
cmp dword ptr [ebp-20], 11
jne .Lt_00D5
.Lt_00D6:
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebp-24], ebx
.Lt_00D8:
mov ebx, dword ptr [ebp-24]
mov eax, dword ptr [ebx]
mov dword ptr [ebp-28], eax
.Lt_00DB:
mov eax, dword ptr [ebp-28]
cmp dword ptr [eax], 12
jne .Lt_00DF
push 0
push 0
push 208
call ERRREPORT
add esp, 12
jmp .Lt_00D9
.Lt_00DF:
.Lt_00DE:
mov eax, dword ptr [ebp-28]
mov ebx, dword ptr [eax+144]
mov dword ptr [ebp-28], ebx
.Lt_00DD:
cmp dword ptr [ebp-28], 0
jne .Lt_00DB
.Lt_00DC:
mov ebx, dword ptr [ebp-24]
mov eax, dword ptr [ebx+4]
mov dword ptr [ebp-24], eax
.Lt_00DA:
cmp dword ptr [ebp-24], 0
jne .Lt_00D8
.Lt_00D9:
.Lt_00D5:
.Lt_00D3:
.Lt_00D2:
.Lt_00D1:
.Lt_0094:
jmp .Lt_0092
.Lt_0093:
mov eax, dword ptr [ebp+12]
and eax, 2
test eax, eax
je .Lt_00E1
mov eax, dword ptr [ebp+12]
and eax, 4
test eax, eax
je .Lt_00E3
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 0
je .Lt_00E5
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov eax, dword ptr [ebx+148]
mov ebx, dword ptr [SYMB+98516]
cmp dword ptr [eax], ebx
je .Lt_00E7
push 0
push 0
push 130
call ERRREPORT
add esp, 12
mov dword ptr [ebp-4], 0
jmp .Lt_0087
.Lt_00E7:
.Lt_00E6:
.Lt_00E5:
.Lt_00E4:
jmp .Lt_00E2
.Lt_00E3:
cmp dword ptr [ebp-8], 0
je .Lt_00E9
mov ebx, dword ptr [ebp-8]
cmp dword ptr [ebx+4], 0
je .Lt_00EB
mov ebx, dword ptr [ebp-8]
cmp dword ptr [ebx+8], 0
je .Lt_00ED
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx]
mov ebx, dword ptr [eax+128]
mov eax, dword ptr [ebx]
mov dword ptr [ebp-16], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+4]
mov eax, dword ptr [ebx]
mov ebx, dword ptr [eax+128]
mov eax, dword ptr [ebx]
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-12], 0
je .Lt_00EE
mov eax, dword ptr [ebp-16]
cmp eax, dword ptr [ebp-12]
setne bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-24], ebx
jmp .Lt_00F2
.Lt_00EE:
mov ebx, dword ptr [ebp-16]
cmp ebx, dword ptr [ebp-20]
setne al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-24], eax
.Lt_00F2:
cmp dword ptr [ebp-24], 0
je .Lt_00F1
push 0
push 0
push 254
call ERRREPORT
add esp, 12
.Lt_00F1:
.Lt_00F0:
.Lt_00ED:
.Lt_00EC:
.Lt_00EB:
.Lt_00EA:
.Lt_00E9:
.Lt_00E8:
.Lt_00E2:
.Lt_00E1:
.Lt_00E0:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0087:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CIDENTIFIER, .-CIDENTIFIER
.balign 16

.globl CPARENTID
CPARENTID:
.type CPARENTID, @function
push ebp
mov ebp, esp
sub esp, 32
push ebx
mov dword ptr [ebp-4], 0
.Lt_00F7:
mov eax, dword ptr [ENV+840]
and eax, 4
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_00FA
mov dword ptr [ebp-4], 0
jmp .Lt_00F8
.Lt_00FA:
.Lt_00F9:
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [eax+16532]
mov eax, dword ptr [ebx+4116]
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_00FC
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 46
jne .Lt_00FE
push 2
call HGLOBALID
add esp, 4
mov dword ptr [ebp-8], eax
.Lt_00FE:
.Lt_00FD:
.Lt_00FC:
.Lt_00FB:
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-20], 0
.Lt_00FF:
cmp dword ptr [ebp-8], 0
je .Lt_0100
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-12], ebx
mov ebx, dword ptr [ebp-12]
mov eax, dword ptr [ebx]
mov dword ptr [ebp-24], eax
jmp .Lt_0102
.Lt_0104:
jmp .Lt_0101
.Lt_0105:
push dword ptr [ebp+8]
push dword ptr [ebp-12]
call HISSTRUCTALLOWED
add esp, 8
test eax, eax
jne .Lt_0107
mov eax, dword ptr [ebp-16]
mov dword ptr [ebp-12], eax
jmp .Lt_0100
.Lt_0107:
.Lt_0106:
jmp .Lt_0101
.Lt_0108:
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax+24]
and ebx, 511
mov dword ptr [ebp-28], ebx
cmp dword ptr [ebp-28], 18
jne .Lt_010B
.Lt_010C:
mov ebx, dword ptr [ebp-12]
mov eax, dword ptr [ebx+28]
mov dword ptr [ebp-12], eax
push dword ptr [ebp+8]
push dword ptr [ebp-12]
call HISSTRUCTALLOWED
add esp, 8
test eax, eax
jne .Lt_010E
mov eax, dword ptr [ebp-16]
mov dword ptr [ebp-12], eax
jmp .Lt_0100
.Lt_010E:
.Lt_010D:
jmp .Lt_0109
.Lt_010B:
cmp dword ptr [ebp-28], 9
jne .Lt_010F
.Lt_0110:
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax+28]
mov dword ptr [ebp-12], ebx
jmp .Lt_0109
.Lt_010F:
mov ebx, dword ptr [ebp-16]
mov dword ptr [ebp-12], ebx
jmp .Lt_0100
.Lt_0111:
.Lt_0109:
jmp .Lt_0101
.Lt_0112:
mov ebx, dword ptr [ebp-16]
mov dword ptr [ebp-12], ebx
jmp .Lt_0100
jmp .Lt_0101
.Lt_0102:
mov ebx, dword ptr [ebp-24]
add ebx, 4294967288
cmp ebx, 5
ja .Lt_0112
mov ebx, dword ptr [ebp-24]
jmp dword ptr [.LT_0113+ebx*4-32]
.LT_0113:
.int .Lt_0104
.int .Lt_0104
.int .Lt_0105
.int .Lt_0104
.int .Lt_0112
.int .Lt_0108
.Lt_0101:
cmp dword ptr [ebp-16], 0
je .Lt_0115
push dword ptr [ebp-12]
call SYMBCHECKACCESS
add esp, 4
test eax, eax
jne .Lt_0117
push 0
push 0
push 201
call ERRREPORT
add esp, 12
.Lt_0117:
.Lt_0116:
.Lt_0115:
.Lt_0114:
push 64
push 1
call LEXGETLOOKAHEAD
add esp, 8
cmp eax, 46
je .Lt_0119
push 64
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [ebp+8]
and eax, 1
test eax, eax
je .Lt_011B
jmp .Lt_0100
.Lt_011B:
.Lt_011A:
push 0
push 0
push 119
call ERRREPORT
add esp, 12
jmp .Lt_0100
.Lt_0119:
.Lt_0118:
mov eax, dword ptr [ebp-12]
cmp dword ptr [eax], 9
jne .Lt_011D
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax+72]
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_011F
push 0
push 0
push 256
call ERRREPORT
add esp, 12
jmp .Lt_0100
.Lt_011F:
.Lt_011E:
.Lt_011D:
.Lt_011C:
push 64
call LEXSKIPTOKEN
add esp, 4
push 64
call LEXSKIPTOKEN
add esp, 4
mov ebx, dword ptr [ebp-12]
mov dword ptr [ebp-16], ebx
cmp dword ptr [ebp-20], 0
jne .Lt_0121
mov ebx, dword ptr [ebp-16]
mov dword ptr [ebp-20], ebx
.Lt_0121:
.Lt_0120:
push 0
call LEXGETCLASS
add esp, 4
mov dword ptr [ebp-24], eax
jmp .Lt_0123
.Lt_0125:
jmp .Lt_0122
.Lt_0126:
mov eax, dword ptr [ebp+8]
and eax, 8
test eax, eax
je .Lt_0128
jmp .Lt_0100
.Lt_0128:
.Lt_0127:
push 0
push 0
push 14
call ERRREPORT
add esp, 12
jmp .Lt_0100
jmp .Lt_0122
.Lt_0129:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 91
jne .Lt_012B
mov eax, dword ptr [ebp+8]
and eax, 8
test eax, eax
je .Lt_012D
jmp .Lt_0100
.Lt_012D:
.Lt_012C:
.Lt_012B:
.Lt_012A:
push 0
push 0
push 14
call ERRREPORT
add esp, 12
jmp .Lt_0100
jmp .Lt_0122
.Lt_0123:
cmp dword ptr [ebp-24], 5
ja .Lt_0129
mov eax, dword ptr [ebp-24]
jmp dword ptr [.LT_012E+eax*4]
.LT_012E:
.int .Lt_0125
.int .Lt_0126
.int .Lt_0125
.int .Lt_0129
.int .Lt_0129
.int .Lt_0126
.Lt_0122:
push -1
push 0
call LEXGETTEXT
push eax
push dword ptr [ebp-12]
call SYMBLOOKUPAT
add esp, 16
mov dword ptr [ebp-8], eax
jmp .Lt_00FF
.Lt_0100:
mov eax, dword ptr [ebp+8]
and eax, 2
test eax, eax
je .Lt_0130
mov eax, dword ptr [ebp+8]
and eax, 4
test eax, eax
je .Lt_0132
cmp dword ptr [ebp-20], 0
je .Lt_0134
mov eax, dword ptr [ebp-20]
mov ebx, dword ptr [eax+148]
mov eax, dword ptr [SYMB+98516]
cmp dword ptr [ebx], eax
je .Lt_0136
push 0
push 0
push 130
call ERRREPORT
add esp, 12
mov dword ptr [ebp-4], 0
jmp .Lt_00F8
.Lt_0136:
.Lt_0135:
.Lt_0134:
.Lt_0133:
jmp .Lt_0131
.Lt_0132:
cmp dword ptr [ebp-8], 0
je .Lt_0138
mov eax, dword ptr [ebp-8]
cmp dword ptr [eax+4], 0
je .Lt_013A
mov eax, dword ptr [ebp-8]
cmp dword ptr [eax+8], 0
je .Lt_013C
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax]
mov eax, dword ptr [ebx+128]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-24], ebx
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx+4]
mov ebx, dword ptr [eax]
mov eax, dword ptr [ebx+128]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-28], ebx
cmp dword ptr [ebp-16], 0
je .Lt_013D
mov ebx, dword ptr [ebp-24]
cmp ebx, dword ptr [ebp-16]
setne al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-32], eax
jmp .Lt_0141
.Lt_013D:
mov eax, dword ptr [ebp-24]
cmp eax, dword ptr [ebp-28]
setne bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-32], ebx
.Lt_0141:
cmp dword ptr [ebp-32], 0
je .Lt_0140
push 0
push 0
push 254
call ERRREPORT
add esp, 12
.Lt_0140:
.Lt_013F:
.Lt_013C:
.Lt_013B:
.Lt_013A:
.Lt_0139:
.Lt_0138:
.Lt_0137:
.Lt_0131:
.Lt_0130:
.Lt_012F:
mov ebx, dword ptr [ebp-12]
mov dword ptr [ebp-4], ebx
.Lt_00F8:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CPARENTID, .-CPARENTID
.balign 16

.globl CCURRENTPARENTID
CCURRENTPARENTID:
.type CCURRENTPARENTID, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_0146:
push 0
call CPARENTID
add esp, 4
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
jne .Lt_0149
jmp .Lt_0147
.Lt_0149:
.Lt_0148:
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-8], ebx
cmp dword ptr [ebp-8], 8
jne .Lt_014C
.Lt_014D:
mov ebx, dword ptr [SYMB+98516]
cmp dword ptr [ebp-4], ebx
je .Lt_014F
push 0
push 0
push 130
call ERRREPORT
add esp, 12
.Lt_014F:
.Lt_014E:
jmp .Lt_014A
.Lt_014C:
cmp dword ptr [ebp-8], 11
jne .Lt_0150
.Lt_0151:
mov ebx, dword ptr [SYMB+98516]
cmp dword ptr [ebp-4], ebx
je .Lt_0153
push 0
push 0
push 157
call ERRREPORT
add esp, 12
.Lt_0153:
.Lt_0152:
.Lt_0150:
.Lt_014A:
.Lt_0147:
pop ebx
mov esp, ebp
pop ebp
ret
.size CCURRENTPARENTID, .-CCURRENTPARENTID
.balign 16
fb_ctor__parserzidentifier:
.type fb_ctor__parserzidentifier, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__parserzidentifier, .-fb_ctor__parserzidentifier
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
HSKIPSYMBOL:
.type HSKIPSYMBOL, @function
push ebp
mov ebp, esp
sub esp, 4
.Lt_005F:
.Lt_0061:
push 64
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 46
je .Lt_0065
jmp .Lt_0062
.Lt_0065:
.Lt_0064:
push 0
call LEXGETCLASS
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_0067
.Lt_0069:
jmp .Lt_0066
.Lt_006A:
jmp .Lt_0062
jmp .Lt_0066
.Lt_0067:
cmp dword ptr [ebp-4], 2
ja .Lt_006A
mov eax, dword ptr [ebp-4]
jmp dword ptr [.LT_006B+eax*4]
.LT_006B:
.int .Lt_0069
.int .Lt_0069
.int .Lt_0069
.Lt_0066:
.Lt_0063:
jmp .Lt_0061
.Lt_0062:
.Lt_0060:
mov esp, ebp
pop ebp
ret
.size HSKIPSYMBOL, .-HSKIPSYMBOL
.balign 16
HGLOBALID:
.type HGLOBALID, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_006C:
mov dword ptr [ebp-4], 0
push 64
push 1
call LEXGETLOOKAHEAD
add esp, 8
cmp eax, 46
jne .Lt_006F
push 64
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_006E
.Lt_006F:
cmp dword ptr [PARSER+52], 0
je .Lt_0071
jmp .Lt_006D
.Lt_0071:
.Lt_0070:
.Lt_006E:
mov eax, dword ptr [ebp+8]
and eax, 4
test eax, eax
je .Lt_0073
lea eax, [SYMB+98352]
cmp dword ptr [SYMB+98516], eax
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_0075
push 0
push 0
push 130
call ERRREPORT
add esp, 12
.Lt_0075:
.Lt_0074:
.Lt_0073:
.Lt_0072:
push 64
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXGETCLASS
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
je .Lt_0079
.Lt_007A:
cmp dword ptr [ebp-8], 2
jne .Lt_0078
.Lt_0079:
jmp .Lt_0076
.Lt_0078:
mov eax, dword ptr [ebp+8]
and eax, 2
test eax, eax
je .Lt_007D
push 0
push 0
push 14
call ERRREPORT
add esp, 12
.Lt_007D:
.Lt_007C:
jmp .Lt_006D
.Lt_007B:
.Lt_0076:
push -1
push 0
call LEXGETTEXT
push eax
lea eax, [SYMB+98352]
push eax
call SYMBLOOKUPAT
add esp, 16
mov dword ptr [ebp-4], eax
.Lt_006D:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HGLOBALID, .-HGLOBALID
.balign 16
HISSTRUCTALLOWED:
.type HISSTRUCTALLOWED, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_007E:
mov eax, dword ptr [ebp+12]
and eax, 16
test eax, eax
jne .Lt_0081
mov dword ptr [ebp-4], 0
jmp .Lt_007F
.Lt_0081:
.Lt_0080:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+8]
and ebx, 262144
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_0083
mov dword ptr [ebp-4], 0
jmp .Lt_007F
.Lt_0083:
.Lt_0082:
mov ebx, dword ptr [ebp+12]
and ebx, 64
je .Lt_0085
mov ebx, dword ptr [ebp+8]
movsx eax, word ptr [ebx+112]
and eax, 16384
test eax, eax
setne al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-4], eax
jmp .Lt_007F
.Lt_0085:
.Lt_0084:
mov dword ptr [ebp-4], -1
.Lt_007F:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HISSTRUCTALLOWED, .-HISSTRUCTALLOWED
	#fbc-1.01.0/src/compiler/parser-identifier.bas' compilation took 0.02932199777569622 secs

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
.int fb_ctor__parserzidentifier
