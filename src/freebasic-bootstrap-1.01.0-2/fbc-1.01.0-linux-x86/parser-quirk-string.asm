	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/parser-quirk-string.bas' compilation started at 14:16:37 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl CMIDSTMT
CMIDSTMT:
.type CMIDSTMT, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
mov dword ptr [ebp-4], 0
.Lt_0060:
mov dword ptr [ebp-4], 0
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
je .Lt_0063
push 0
push 0
push 6
call ERRREPORT
add esp, 12
jmp .Lt_0062
.Lt_0063:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0062:
push 16
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0065
jmp .Lt_0061
.Lt_0065:
.Lt_0064:
push dword ptr [ebp-8]
call ASTISCONSTANT
add esp, 4
test eax, eax
je .Lt_0067
push 0
push -1
push 118
call ERRREPORT
add esp, 12
.Lt_0067:
.Lt_0066:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
je .Lt_0069
push 0
push 0
push 16
call ERRREPORT
add esp, 12
jmp .Lt_0068
.Lt_0069:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0068:
push 7
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_006B
jmp .Lt_0061
.Lt_006B:
.Lt_006A:
push 44
call HMATCH
add esp, 4
test eax, eax
je .Lt_006D
push 7
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 0
jne .Lt_006F
jmp .Lt_0061
.Lt_006F:
.Lt_006E:
jmp .Lt_006C
.Lt_006D:
push 0
push 7
push 4294967295
push 4294967295
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-16], eax
.Lt_006C:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_0071
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
jmp .Lt_0070
.Lt_0071:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0070:
call CASSIGNTOKEN
test eax, eax
jne .Lt_0073
push 0
push 0
push 10
call ERRREPORT
add esp, 12
.Lt_0073:
.Lt_0072:
push 16
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 0
jne .Lt_0075
jmp .Lt_0061
.Lt_0075:
.Lt_0074:
push dword ptr [ebp-20]
push dword ptr [ebp-16]
push dword ptr [ebp-12]
push dword ptr [ebp-8]
call RTLSTRASSIGNMID
add esp, 16
test eax, eax
setne bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-4], ebx
.Lt_0061:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CMIDSTMT, .-CMIDSTMT
.balign 16

.globl CLRSETSTMT
CLRSETSTMT:
.type CLRSETSTMT, @function
push ebp
mov ebp, esp
sub esp, 44
push ebx
mov dword ptr [ebp-4], 0
.Lt_0077:
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+8]
cmp eax, 415
sete al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-32], eax
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call CVARORDEREF
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_007A
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
push 16
call SYMBADDTEMPVAR
add esp, 8
push eax
call ASTNEWVAR
add esp, 20
mov dword ptr [ebp-8], eax
.Lt_007A:
.Lt_0079:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+4]
and ebx, 511
mov dword ptr [ebp-16], ebx
mov ebx, dword ptr [ebp-16]
mov dword ptr [ebp-36], ebx
jmp .Lt_007C
.Lt_007E:
mov ebx, dword ptr [ebp-16]
cmp ebx, 18
sete bl
shr ebx, 1
sbb ebx, ebx
and ebx, dword ptr [ebp-32]
je .Lt_0080
push 0
push 0
push 24
call ERRREPORT
add esp, 12
mov dword ptr [ebp-32], 0
.Lt_0080:
.Lt_007F:
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx+12]
mov dword ptr [ebp-40], eax
cmp dword ptr [ebp-40], 0
jne .Lt_0082
mov eax, dword ptr [ebp-8]
cmp dword ptr [eax], 20
jne .Lt_0084
mov eax, dword ptr [ebp-8]
cmp dword ptr [eax+56], 0
je .Lt_0085
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+56]
mov eax, dword ptr [ebx+12]
mov dword ptr [ebp-44], eax
jmp .Lt_009F
.Lt_0085:
mov dword ptr [ebp-44], 0
.Lt_009F:
mov eax, dword ptr [ebp-44]
mov dword ptr [ebp-40], eax
.Lt_0084:
.Lt_0083:
.Lt_0082:
.Lt_0081:
cmp dword ptr [ebp-40], 0
jne .Lt_0088
push 0
push -1
push 14
call ERRREPORT
add esp, 12
jmp .Lt_0087
.Lt_0088:
mov eax, dword ptr [ebp-40]
mov ebx, dword ptr [eax+4]
and ebx, 1048576
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp-8]
mov ecx, dword ptr [eax+4]
and ecx, 512
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
or ebx, ecx
je .Lt_008A
push 0
push -1
push 118
call ERRREPORT
add esp, 12
.Lt_008A:
.Lt_0089:
.Lt_0087:
jmp .Lt_007B
.Lt_008B:
push 0
push 0
push 24
call ERRREPORT
add esp, 12
push dword ptr [ebp-8]
call ASTDELTREE
add esp, 4
push 0
push -2147483648
push 0
push 0
push 0
push 16
call SYMBADDTEMPVAR
add esp, 8
push eax
call ASTNEWVAR
add esp, 20
mov dword ptr [ebp-8], eax
jmp .Lt_007B
.Lt_007C:
mov eax, dword ptr [ebp-36]
add eax, 4294967293
cmp eax, 15
ja .Lt_008B
mov eax, dword ptr [ebp-36]
jmp dword ptr [.LT_008C+eax*4-12]
.LT_008C:
.int .Lt_007E
.int .Lt_008B
.int .Lt_008B
.int .Lt_007E
.int .Lt_008B
.int .Lt_008B
.int .Lt_008B
.int .Lt_008B
.int .Lt_008B
.int .Lt_008B
.int .Lt_008B
.int .Lt_008B
.int .Lt_008B
.int .Lt_007E
.int .Lt_007E
.int .Lt_007E
.Lt_007B:
push 44
call HMATCH
add esp, 4
test eax, eax
jne .Lt_008E
call CASSIGNTOKEN
test eax, eax
jne .Lt_0090
push 0
push 0
push 16
call ERRREPORT
add esp, 12
.Lt_0090:
.Lt_008F:
.Lt_008E:
.Lt_008D:
push dword ptr [ebp-16]
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_0092
jmp .Lt_0078
.Lt_0092:
.Lt_0091:
mov eax, dword ptr [ebp-12]
mov ecx, dword ptr [eax+4]
and ecx, 511
mov dword ptr [ebp-20], ecx
mov ecx, dword ptr [ebp-20]
mov dword ptr [ebp-36], ecx
jmp .Lt_0094
.Lt_0096:
jmp .Lt_0093
.Lt_0097:
push 0
push 0
push 24
call ERRREPORT
add esp, 12
push dword ptr [ebp-12]
call ASTDELTREE
add esp, 4
push 0
push -2147483648
push 0
push 0
push 0
push 16
call SYMBADDTEMPVAR
add esp, 8
push eax
call ASTNEWVAR
add esp, 20
mov dword ptr [ebp-12], eax
jmp .Lt_0093
.Lt_0094:
mov eax, dword ptr [ebp-36]
add eax, 4294967293
cmp eax, 15
ja .Lt_0097
mov eax, dword ptr [ebp-36]
jmp dword ptr [.LT_0098+eax*4-12]
.LT_0098:
.int .Lt_0096
.int .Lt_0097
.int .Lt_0097
.int .Lt_0096
.int .Lt_0097
.int .Lt_0097
.int .Lt_0097
.int .Lt_0097
.int .Lt_0097
.int .Lt_0097
.int .Lt_0097
.int .Lt_0097
.int .Lt_0097
.int .Lt_0096
.int .Lt_0096
.int .Lt_0096
.Lt_0093:
mov eax, dword ptr [ebp-16]
cmp eax, 18
sete al
shr eax, 1
sbb eax, eax
mov ecx, dword ptr [ebp-20]
cmp ecx, 18
sete cl
shr ecx, 1
sbb ecx, ecx
or eax, ecx
je .Lt_009A
mov ecx, dword ptr [ebp-20]
cmp dword ptr [ebp-16], ecx
je .Lt_009C
push 0
push 0
push 24
call ERRREPORT
add esp, 12
push dword ptr [ebp-12]
call ASTDELTREE
add esp, 4
push dword ptr [ebp-8]
call ASTDELTREE
add esp, 4
mov dword ptr [ebp-4], -1
jmp .Lt_0078
.Lt_009C:
.Lt_009B:
mov ecx, dword ptr [ebp-8]
mov eax, dword ptr [ecx+12]
mov dword ptr [ebp-24], eax
mov eax, dword ptr [ebp-12]
mov ecx, dword ptr [eax+12]
mov dword ptr [ebp-28], ecx
cmp dword ptr [ebp-24], 0
sete cl
shr ecx, 1
sbb ecx, ecx
cmp dword ptr [ebp-28], 0
sete al
shr eax, 1
sbb eax, eax
or ecx, eax
je .Lt_009E
push 0
push 0
push 14
call ERRREPORT
add esp, 12
push dword ptr [ebp-12]
call ASTDELTREE
add esp, 4
push dword ptr [ebp-8]
call ASTDELTREE
add esp, 4
mov dword ptr [ebp-4], -1
jmp .Lt_0078
.Lt_009E:
.Lt_009D:
mov eax, dword ptr [ebp-28]
mov ecx, dword ptr [eax+28]
push dword ptr [ecx+40]
push dword ptr [ecx+36]
push dword ptr [ebp-12]
mov ecx, dword ptr [ebp-24]
mov eax, dword ptr [ecx+28]
push dword ptr [eax+40]
push dword ptr [eax+36]
push dword ptr [ebp-8]
call RTLMEMCOPYCLEAR
add esp, 24
mov dword ptr [ebp-4], eax
jmp .Lt_0099
.Lt_009A:
push dword ptr [ebp-32]
push dword ptr [ebp-12]
push dword ptr [ebp-8]
call RTLSTRLRSET
add esp, 12
mov dword ptr [ebp-4], eax
.Lt_0099:
.Lt_0078:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CLRSETSTMT, .-CLRSETSTMT
.balign 16

.globl CCVXFUNCT
CCVXFUNCT:
.type CCVXFUNCT, @function
push ebp
mov ebp, esp
sub esp, 60
push ebx
mov dword ptr [ebp-4], 0
.Lt_00FE:
push 0
call LEXSKIPTOKEN
add esp, 4
mov dword ptr [ebp-8], -2147483648
mov eax, dword ptr [ebp+8]
cmp eax, 422
sete al
shr eax, 1
sbb eax, eax
test eax, eax
je .Lt_0100
push 301
call HMATCH
add esp, 4
test eax, eax
setne al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-12], eax
jmp .Lt_0167
.Lt_0100:
mov dword ptr [ebp-12], 0
.Lt_0167:
cmp dword ptr [ebp-12], 0
je .Lt_0103
push 0
push 0
call CGTINPARENSONLYEXPR
push eax
call CCONSTINTEXPR
add esp, 12
mov dword ptr [ebp-56], eax
mov dword ptr [ebp-52], edx
cmp dword ptr [ebp-52], 0
jne .Lt_0105
cmp dword ptr [ebp-56], 8
jne .Lt_0105
.Lt_016F:
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
.Lt_0105:
push 0
push dword ptr [ebp-52]
push dword ptr [ebp-56]
call HINTEGERTYPEFROMBITSIZE
add esp, 12
mov dword ptr [ebp-8], eax
push 300
call HMATCH
add esp, 4
test eax, eax
jne .Lt_0107
push 0
push 0
push 308
call ERRREPORT
add esp, 12
.Lt_0107:
.Lt_0106:
.Lt_0103:
.Lt_0102:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
je .Lt_0109
push 0
push 0
push 6
call ERRREPORT
add esp, 12
jmp .Lt_0108
.Lt_0109:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0108:
push 16
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 0
jne .Lt_010B
jmp .Lt_00FF
.Lt_010B:
.Lt_010A:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_010D
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
jmp .Lt_010C
.Lt_010D:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_010C:
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-24], 0
mov eax, dword ptr [ebp-16]
mov edx, dword ptr [eax+4]
and edx, 511
mov dword ptr [ebp-52], edx
cmp dword ptr [ebp-52], 3
jne .Lt_0110
.Lt_0111:
push dword ptr [ebp-16]
call ASTGETSTRLITSYMBOL
add esp, 4
mov dword ptr [ebp-20], eax
mov dword ptr [ebp-24], -1
jmp .Lt_010E
.Lt_0110:
cmp dword ptr [ebp-52], 16
je .Lt_0113
.Lt_0114:
cmp dword ptr [ebp-52], 17
je .Lt_0113
.Lt_0115:
cmp dword ptr [ebp-52], 6
jne .Lt_0112
.Lt_0113:
mov dword ptr [ebp-24], -1
.Lt_0112:
.Lt_010E:
mov dword ptr [ebp-28], -1
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-52], eax
jmp .Lt_0117
.Lt_0119:
mov dword ptr [ebp-32], 15
mov dword ptr [ebp-28], 0
jmp .Lt_0116
.Lt_011A:
mov dword ptr [ebp-32], 14
mov dword ptr [ebp-28], 0
jmp .Lt_0116
.Lt_011B:
cmp dword ptr [ebp-8], -2147483648
je .Lt_011D
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-32], eax
jmp .Lt_011C
.Lt_011D:
mov eax, dword ptr [ENV+844]
mov dword ptr [ebp-32], eax
.Lt_011C:
jmp .Lt_0116
.Lt_011E:
mov dword ptr [ebp-32], 10
jmp .Lt_0116
.Lt_011F:
mov dword ptr [ebp-32], 4
jmp .Lt_0116
.Lt_0120:
mov dword ptr [ebp-32], 12
jmp .Lt_0116
.Lt_0117:
mov eax, dword ptr [ebp-52]
add eax, 4294966876
cmp eax, 4
ja .Lt_0120
mov eax, dword ptr [ebp-52]
jmp dword ptr [.LT_0121+eax*4-1680]
.LT_0121:
.int .Lt_0119
.int .Lt_011A
.int .Lt_011B
.int .Lt_011E
.int .Lt_011F
.Lt_0116:
mov eax, dword ptr [ebp-28]
test eax, eax
setne al
shr eax, 1
sbb eax, eax
cmp dword ptr [ebp-20], 0
setne dl
shr edx, 1
sbb edx, edx
and eax, edx
je .Lt_0123
mov edx, dword ptr [ebp-20]
push dword ptr [edx+52]
call HUNESCAPE
add esp, 4
mov dword ptr [ebp-36], eax
push 0
push dword ptr [ebp-36]
call fb_StrLen
add esp, 8
mov dword ptr [ebp-40], eax
jmp .Lt_0122
.Lt_0123:
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-40], 0
.Lt_0122:
mov dword ptr [ebp-44], 0
cmp dword ptr [ebp-24], 0
jne .Lt_0124
mov eax, dword ptr [ebp-32]
cmp eax, 4
sete al
shr eax, 1
sbb eax, eax
test eax, eax
setne al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-48], eax
jmp .Lt_0168
.Lt_0124:
mov dword ptr [ebp-48], -1
.Lt_0168:
cmp dword ptr [ebp-48], 0
je .Lt_0127
mov eax, dword ptr [ebp-32]
and eax, 480
je .Lt_0128
mov dword ptr [ebp-52], 22
jmp .Lt_0169
.Lt_0128:
mov eax, dword ptr [ebp-32]
and eax, 31
mov dword ptr [ebp-52], eax
.Lt_0169:
mov eax, dword ptr [ebp-52]
imul eax, 28
mov edx, dword ptr [SYMB_DTYPETB+eax+4]
cmp dword ptr [ebp-40], edx
jl .Lt_012B
cmp dword ptr [ebp-32], 15
jne .Lt_012D
.Lt_012E:
push 15
push dword ptr [ebp-36]
call fb_StrAllocTempDescZ
add esp, 4
push eax
call fb_CVD
add esp, 4
sub esp,8
fstp qword ptr [esp]
call ASTNEWCONSTF
add esp, 12
mov dword ptr [ebp-44], eax
jmp .Lt_012C
.Lt_012D:
cmp dword ptr [ebp-32], 14
jne .Lt_012F
.Lt_0130:
push 14
push dword ptr [ebp-36]
call fb_StrAllocTempDescZ
add esp, 4
push eax
call fb_CVS
add esp, 4
sub esp,8
fstp qword ptr [esp]
call ASTNEWCONSTF
add esp, 12
mov dword ptr [ebp-44], eax
jmp .Lt_012C
.Lt_012F:
mov eax, dword ptr [ebp-32]
and eax, 480
je .Lt_0132
mov dword ptr [ebp-56], 22
jmp .Lt_016A
.Lt_0132:
mov eax, dword ptr [ebp-32]
and eax, 31
mov dword ptr [ebp-56], eax
.Lt_016A:
mov eax, dword ptr [ebp-56]
imul eax, 28
mov edx, dword ptr [SYMB_DTYPETB+eax+4]
mov dword ptr [ebp-60], edx
cmp dword ptr [ebp-60], 2
jne .Lt_0136
.Lt_0137:
push 0
push 4
push dword ptr [ebp-36]
call fb_StrAllocTempDescZ
add esp, 4
push eax
call fb_CVSHORT
add esp, 4
movsx ebx, ax
mov edx, ebx
sar edx, 31
push edx
push ebx
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-44], eax
jmp .Lt_0134
.Lt_0136:
cmp dword ptr [ebp-60], 4
jne .Lt_0138
.Lt_0139:
push 0
push dword ptr [ebp-32]
push dword ptr [ebp-36]
call fb_StrAllocTempDescZ
add esp, 4
push eax
call fb_CVL
add esp, 4
mov edx, eax
mov ebx, edx
sar ebx, 31
push ebx
push edx
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-44], eax
jmp .Lt_0134
.Lt_0138:
push 0
push dword ptr [ebp-32]
push dword ptr [ebp-36]
call fb_StrAllocTempDescZ
add esp, 4
push eax
call fb_CVLONGINT
add esp, 4
push edx
push eax
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-44], eax
.Lt_013A:
.Lt_0134:
.Lt_0131:
.Lt_012C:
push dword ptr [ebp-16]
call ASTDELNODE
add esp, 4
jmp .Lt_012A
.Lt_012B:
cmp dword ptr [ebp-32], 15
jne .Lt_013C
.Lt_013D:
push 0
push 35
push offset Lt_013E
call RTLPROCLOOKUP
add esp, 8
push eax
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-44], eax
jmp .Lt_013B
.Lt_013C:
cmp dword ptr [ebp-32], 14
jne .Lt_013F
.Lt_0140:
push 0
push 36
push offset Lt_0141
call RTLPROCLOOKUP
add esp, 8
push eax
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-44], eax
jmp .Lt_013B
.Lt_013F:
mov eax, dword ptr [ebp-32]
and eax, 480
je .Lt_0143
mov dword ptr [ebp-56], 22
jmp .Lt_016B
.Lt_0143:
mov eax, dword ptr [ebp-32]
and eax, 31
mov dword ptr [ebp-56], eax
.Lt_016B:
mov eax, dword ptr [ebp-56]
imul eax, 28
mov edx, dword ptr [SYMB_DTYPETB+eax+4]
mov dword ptr [ebp-60], edx
cmp dword ptr [ebp-60], 2
jne .Lt_0147
.Lt_0148:
push 0
push 38
push offset Lt_0149
call RTLPROCLOOKUP
add esp, 8
push eax
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-44], eax
jmp .Lt_0145
.Lt_0147:
cmp dword ptr [ebp-60], 4
jne .Lt_014A
.Lt_014B:
push 0
push 37
push offset Lt_014C
call RTLPROCLOOKUP
add esp, 8
push eax
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-44], eax
jmp .Lt_0145
.Lt_014A:
push 0
push 39
push offset Lt_014E
call RTLPROCLOOKUP
add esp, 8
push eax
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-44], eax
.Lt_014D:
.Lt_0145:
.Lt_0142:
.Lt_013B:
push -1
push -2147483648
push dword ptr [ebp-16]
push dword ptr [ebp-44]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0150
mov dword ptr [ebp-44], 0
.Lt_0150:
.Lt_014F:
.Lt_012A:
jmp .Lt_0126
.Lt_0127:
cmp dword ptr [ebp-32], 15
jne .Lt_0152
.Lt_0153:
push 0
push 40
push offset Lt_0154
call RTLPROCLOOKUP
add esp, 8
push eax
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-44], eax
jmp .Lt_0151
.Lt_0152:
cmp dword ptr [ebp-32], 14
jne .Lt_0155
.Lt_0156:
push 0
push 41
push offset Lt_0157
call RTLPROCLOOKUP
add esp, 8
push eax
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-44], eax
jmp .Lt_0151
.Lt_0155:
mov eax, dword ptr [ebp-32]
and eax, 480
je .Lt_0159
mov dword ptr [ebp-52], 22
jmp .Lt_016C
.Lt_0159:
mov eax, dword ptr [ebp-32]
and eax, 31
mov dword ptr [ebp-52], eax
.Lt_016C:
mov eax, dword ptr [ebp-52]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+4], 4
jne .Lt_015C
push 0
push 42
push offset Lt_015D
call RTLPROCLOOKUP
add esp, 8
push eax
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-44], eax
jmp .Lt_015B
.Lt_015C:
push 0
push 43
push offset Lt_015E
call RTLPROCLOOKUP
add esp, 8
push eax
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-44], eax
.Lt_015B:
.Lt_0158:
.Lt_0151:
cmp dword ptr [ebp-44], 0
je .Lt_0160
push -1
push -2147483648
push dword ptr [ebp-16]
push dword ptr [ebp-44]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0162
mov dword ptr [ebp-44], 0
.Lt_0162:
.Lt_0161:
.Lt_0160:
.Lt_015F:
.Lt_0126:
cmp dword ptr [ebp-44], 0
je .Lt_0164
push 0
push 0
push dword ptr [ebp-44]
push 0
push dword ptr [ebp-32]
call ASTNEWCONV
add esp, 20
mov dword ptr [ebp-44], eax
.Lt_0164:
.Lt_0163:
cmp dword ptr [ebp-44], 0
jne .Lt_0166
push 0
push 0
push 24
call ERRREPORT
add esp, 12
.Lt_0166:
.Lt_0165:
mov eax, dword ptr [ebp-44]
mov dword ptr [ebp-4], eax
.Lt_00FF:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CCVXFUNCT, .-CCVXFUNCT
.balign 16

.globl CMKXFUNCT
CMKXFUNCT:
.type CMKXFUNCT, @function
push ebp
mov ebp, esp
sub esp, 32
mov dword ptr [ebp-4], 0
.Lt_0174:
push 0
call LEXSKIPTOKEN
add esp, 4
mov dword ptr [ebp-8], -2147483648
mov eax, dword ptr [ebp+8]
cmp eax, 428
sete al
shr eax, 1
sbb eax, eax
test eax, eax
je .Lt_0176
push 301
call HMATCH
add esp, 4
test eax, eax
setne al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-12], eax
jmp .Lt_01A8
.Lt_0176:
mov dword ptr [ebp-12], 0
.Lt_01A8:
cmp dword ptr [ebp-12], 0
je .Lt_0179
push 0
push 0
call CGTINPARENSONLYEXPR
push eax
call CCONSTINTEXPR
add esp, 12
mov dword ptr [ebp-28], eax
mov dword ptr [ebp-24], edx
cmp dword ptr [ebp-24], 0
jne .Lt_017B
cmp dword ptr [ebp-28], 8
jne .Lt_017B
.Lt_01AC:
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
.Lt_017B:
push 0
push dword ptr [ebp-24]
push dword ptr [ebp-28]
call HINTEGERTYPEFROMBITSIZE
add esp, 12
mov dword ptr [ebp-8], eax
push 300
call HMATCH
add esp, 4
test eax, eax
jne .Lt_017D
push 0
push 0
push 308
call ERRREPORT
add esp, 12
.Lt_017D:
.Lt_017C:
.Lt_0179:
.Lt_0178:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
je .Lt_017F
push 0
push 0
push 6
call ERRREPORT
add esp, 12
jmp .Lt_017E
.Lt_017F:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_017E:
push 16
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 0
jne .Lt_0181
jmp .Lt_0175
.Lt_0181:
.Lt_0180:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_0183
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
jmp .Lt_0182
.Lt_0183:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0182:
mov dword ptr [ebp-20], 0
cmp dword ptr [ebp-16], 0
je .Lt_0185
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-24], eax
jmp .Lt_0187
.Lt_0189:
push 0
push 29
push offset Lt_018A
call RTLPROCLOOKUP
add esp, 8
push eax
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-20], eax
jmp .Lt_0186
.Lt_018B:
push 0
push 30
push offset Lt_018C
call RTLPROCLOOKUP
add esp, 8
push eax
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-20], eax
jmp .Lt_0186
.Lt_018D:
cmp dword ptr [ebp-8], -2147483648
jne .Lt_018F
mov eax, dword ptr [ENV+844]
mov dword ptr [ebp-8], eax
.Lt_018F:
.Lt_018E:
mov eax, dword ptr [ebp-8]
and eax, 511
cmp eax, 7
jne .Lt_0191
push 0
push 31
push offset Lt_0192
call RTLPROCLOOKUP
add esp, 8
push eax
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-20], eax
jmp .Lt_0190
.Lt_0191:
mov eax, dword ptr [ebp-8]
and eax, 480
je .Lt_0193
mov dword ptr [ebp-28], 22
jmp .Lt_01A9
.Lt_0193:
mov eax, dword ptr [ebp-8]
and eax, 31
mov dword ptr [ebp-28], eax
.Lt_01A9:
mov eax, dword ptr [ebp-28]
imul eax, 28
mov edx, dword ptr [SYMB_DTYPETB+eax+20]
mov dword ptr [ebp-32], edx
cmp dword ptr [ebp-32], 2
jne .Lt_0197
.Lt_0198:
push 0
push 33
push offset Lt_0199
call RTLPROCLOOKUP
add esp, 8
push eax
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-20], eax
jmp .Lt_0195
.Lt_0197:
cmp dword ptr [ebp-32], 4
jne .Lt_019A
.Lt_019B:
push 0
push 32
push offset Lt_019C
call RTLPROCLOOKUP
add esp, 8
push eax
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-20], eax
jmp .Lt_0195
.Lt_019A:
cmp dword ptr [ebp-32], 6
jne .Lt_019D
.Lt_019E:
push 0
push 34
push offset Lt_019F
call RTLPROCLOOKUP
add esp, 8
push eax
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-20], eax
.Lt_019D:
.Lt_0195:
.Lt_0190:
jmp .Lt_0186
.Lt_01A0:
push 0
push 32
push offset Lt_019C
call RTLPROCLOOKUP
add esp, 8
push eax
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-20], eax
jmp .Lt_0186
.Lt_01A1:
push 0
push 33
push offset Lt_0199
call RTLPROCLOOKUP
add esp, 8
push eax
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-20], eax
jmp .Lt_0186
.Lt_01A2:
push 0
push 34
push offset Lt_019F
call RTLPROCLOOKUP
add esp, 8
push eax
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-20], eax
jmp .Lt_0186
.Lt_0187:
mov eax, dword ptr [ebp-24]
add eax, 4294966870
cmp eax, 4
ja .Lt_01A2
mov eax, dword ptr [ebp-24]
jmp dword ptr [.LT_01A3+eax*4-1704]
.LT_01A3:
.int .Lt_0189
.int .Lt_018B
.int .Lt_018D
.int .Lt_01A0
.int .Lt_01A1
.Lt_0186:
push -1
push -2147483648
push dword ptr [ebp-16]
push dword ptr [ebp-20]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_01A5
mov dword ptr [ebp-20], 0
.Lt_01A5:
.Lt_01A4:
.Lt_0185:
.Lt_0184:
cmp dword ptr [ebp-20], 0
jne .Lt_01A7
push 0
push 0
push 24
call ERRREPORT
add esp, 12
.Lt_01A7:
.Lt_01A6:
mov eax, dword ptr [ebp-20]
mov dword ptr [ebp-4], eax
.Lt_0175:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size CMKXFUNCT, .-CMKXFUNCT
.balign 16

.globl CSTRINGFUNCT
CSTRINGFUNCT:
.type CSTRINGFUNCT, @function
push ebp
mov ebp, esp
sub esp, 32
mov dword ptr [ebp-4], 0
.Lt_01AD:
mov dword ptr [ebp-4], 0
cmp dword ptr [ebp+8], 419
je .Lt_01B1
.Lt_01B2:
cmp dword ptr [ebp+8], 432
jne .Lt_01B0
.Lt_01B1:
mov eax, dword ptr [ebp+8]
cmp eax, 432
sete al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-32], eax
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
je .Lt_01B4
push 0
push 0
push 6
call ERRREPORT
add esp, 12
jmp .Lt_01B3
.Lt_01B4:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_01B3:
push 7
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_01B6
jmp .Lt_01AE
.Lt_01B6:
.Lt_01B5:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_01B8
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
jmp .Lt_01B7
.Lt_01B8:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_01B7:
cmp dword ptr [ebp-32], 0
jne .Lt_01BA
mov eax, dword ptr [ENV+136]
cmp eax, 3
sete al
shr eax, 1
sbb eax, eax
push eax
push dword ptr [ebp-8]
call RTLTOSTR
add esp, 8
mov dword ptr [ebp-8], eax
jmp .Lt_01B9
.Lt_01BA:
push dword ptr [ebp-8]
call RTLTOWSTR
add esp, 4
mov dword ptr [ebp-8], eax
.Lt_01B9:
cmp dword ptr [ebp-8], 0
jne .Lt_01BC
push 0
push 0
push 24
call ERRREPORT
add esp, 12
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-8], eax
.Lt_01BC:
.Lt_01BB:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
jmp .Lt_01AF
.Lt_01B0:
cmp dword ptr [ebp+8], 433
jne .Lt_01BD
.Lt_01BE:
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
je .Lt_01C0
push 0
push 0
push 6
call ERRREPORT
add esp, 12
jmp .Lt_01BF
.Lt_01C0:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_01BF:
push 16
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_01C2
jmp .Lt_01AE
.Lt_01C2:
.Lt_01C1:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
je .Lt_01C4
push 0
push 0
push 16
call ERRREPORT
add esp, 12
jmp .Lt_01C3
.Lt_01C4:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_01C3:
push 7
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_01C6
jmp .Lt_01AE
.Lt_01C6:
.Lt_01C5:
push 44
call HMATCH
add esp, 4
test eax, eax
je .Lt_01C8
push 7
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 0
jne .Lt_01CA
jmp .Lt_01AE
.Lt_01CA:
.Lt_01C9:
jmp .Lt_01C7
.Lt_01C8:
push 0
push 7
push 4294967295
push 4294967295
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-16], eax
.Lt_01C7:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_01CC
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
jmp .Lt_01CB
.Lt_01CC:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_01CB:
push dword ptr [ebp-16]
push dword ptr [ebp-12]
push dword ptr [ebp-8]
call RTLSTRMID
add esp, 12
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_01CE
push 0
push 0
push 24
call ERRREPORT
add esp, 12
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-8], eax
.Lt_01CE:
.Lt_01CD:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
jmp .Lt_01AF
.Lt_01BD:
cmp dword ptr [ebp+8], 368
je .Lt_01D0
.Lt_01D1:
cmp dword ptr [ebp+8], 370
jne .Lt_01CF
.Lt_01D0:
mov eax, dword ptr [ebp+8]
cmp eax, 370
sete al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-32], eax
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
je .Lt_01D3
push 0
push 0
push 6
call ERRREPORT
add esp, 12
jmp .Lt_01D2
.Lt_01D3:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_01D2:
push 7
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_01D5
jmp .Lt_01AE
.Lt_01D5:
.Lt_01D4:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
je .Lt_01D7
push 0
push 0
push 16
call ERRREPORT
add esp, 12
jmp .Lt_01D6
.Lt_01D7:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_01D6:
push 7
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_01D9
jmp .Lt_01AE
.Lt_01D9:
.Lt_01D8:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_01DB
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
jmp .Lt_01DA
.Lt_01DB:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_01DA:
cmp dword ptr [ebp-32], 0
jne .Lt_01DD
push dword ptr [ebp-12]
push dword ptr [ebp-8]
call RTLSTRFILL
add esp, 8
mov dword ptr [ebp-8], eax
jmp .Lt_01DC
.Lt_01DD:
push dword ptr [ebp-12]
push dword ptr [ebp-8]
call RTLWSTRFILL
add esp, 8
mov dword ptr [ebp-8], eax
.Lt_01DC:
cmp dword ptr [ebp-8], 0
jne .Lt_01DF
push 0
push 0
push 24
call ERRREPORT
add esp, 12
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-8], eax
.Lt_01DF:
.Lt_01DE:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
jmp .Lt_01AF
.Lt_01CF:
cmp dword ptr [ebp+8], 417
je .Lt_01E1
.Lt_01E2:
cmp dword ptr [ebp+8], 418
jne .Lt_01E0
.Lt_01E1:
mov eax, dword ptr [ebp+8]
cmp eax, 418
sete al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-32], eax
push 0
call LEXSKIPTOKEN
add esp, 4
push dword ptr [ebp-32]
call CSTRCHR
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_01AF
.Lt_01E0:
cmp dword ptr [ebp+8], 416
jne .Lt_01E3
.Lt_01E4:
push 0
call LEXSKIPTOKEN
add esp, 4
call CSTRASC
mov dword ptr [ebp-4], eax
jmp .Lt_01AF
.Lt_01E3:
cmp dword ptr [ebp+8], 434
jne .Lt_01E5
.Lt_01E6:
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
je .Lt_01E8
push 0
push 0
push 6
call ERRREPORT
add esp, 12
jmp .Lt_01E7
.Lt_01E8:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_01E7:
push 7
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_01EA
jmp .Lt_01AE
.Lt_01EA:
.Lt_01E9:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
je .Lt_01EC
push 0
push 0
push 16
call ERRREPORT
add esp, 12
jmp .Lt_01EB
.Lt_01EC:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_01EB:
push 371
call HMATCH
add esp, 4
mov dword ptr [ebp-28], eax
push 16
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_01EE
jmp .Lt_01AE
.Lt_01EE:
.Lt_01ED:
mov dword ptr [ebp-16], 0
cmp dword ptr [ebp-28], 0
jne .Lt_01F0
push 44
call HMATCH
add esp, 4
test eax, eax
je .Lt_01F2
push 371
call HMATCH
add esp, 4
mov dword ptr [ebp-28], eax
push 16
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 0
jne .Lt_01F4
jmp .Lt_01AE
.Lt_01F4:
.Lt_01F3:
.Lt_01F2:
.Lt_01F1:
.Lt_01F0:
.Lt_01EF:
cmp dword ptr [ebp-16], 0
jne .Lt_01F6
mov eax, dword ptr [ebp-12]
mov dword ptr [ebp-16], eax
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-12], eax
push 0
push 7
push 0
push 1
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-8], eax
.Lt_01F6:
.Lt_01F5:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_01F8
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
jmp .Lt_01F7
.Lt_01F8:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_01F7:
push dword ptr [ebp-28]
push dword ptr [ebp-16]
push dword ptr [ebp-12]
push dword ptr [ebp-8]
call RTLSTRINSTR
add esp, 16
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_01FA
push 0
push 0
push 24
call ERRREPORT
add esp, 12
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-8], eax
.Lt_01FA:
.Lt_01F9:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
jmp .Lt_01AF
.Lt_01E5:
cmp dword ptr [ebp+8], 435
jne .Lt_01FB
.Lt_01FC:
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
je .Lt_01FE
push 0
push 0
push 6
call ERRREPORT
add esp, 12
jmp .Lt_01FD
.Lt_01FE:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_01FD:
push 16
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0200
jmp .Lt_01AE
.Lt_0200:
.Lt_01FF:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
je .Lt_0202
push 0
push 0
push 16
call ERRREPORT
add esp, 12
jmp .Lt_0201
.Lt_0202:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0201:
push 371
call HMATCH
add esp, 4
mov dword ptr [ebp-28], eax
push 16
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_0204
jmp .Lt_01AE
.Lt_0204:
.Lt_0203:
push 44
call HMATCH
add esp, 4
test eax, eax
je .Lt_0206
push 7
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 0
jne .Lt_0208
jmp .Lt_01AE
.Lt_0208:
.Lt_0207:
jmp .Lt_0205
.Lt_0206:
push 0
push 7
push 4294967295
push 4294967295
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-16], eax
.Lt_0205:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_020A
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
jmp .Lt_0209
.Lt_020A:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0209:
push dword ptr [ebp-28]
push dword ptr [ebp-12]
push dword ptr [ebp-8]
push dword ptr [ebp-16]
call RTLSTRINSTRREV
add esp, 16
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_020C
push 0
push 0
push 24
call ERRREPORT
add esp, 12
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-8], eax
.Lt_020C:
.Lt_020B:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
jmp .Lt_01AF
.Lt_01FB:
cmp dword ptr [ebp+8], 436
je .Lt_020E
.Lt_020F:
cmp dword ptr [ebp+8], 438
je .Lt_020E
.Lt_0210:
cmp dword ptr [ebp+8], 437
jne .Lt_020D
.Lt_020E:
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
je .Lt_0212
push 0
push 0
push 6
call ERRREPORT
add esp, 12
jmp .Lt_0211
.Lt_0212:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0211:
push 16
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0214
jmp .Lt_01AE
.Lt_0214:
.Lt_0213:
push 44
call HMATCH
add esp, 4
test eax, eax
je .Lt_0216
push 371
call HMATCH
add esp, 4
mov dword ptr [ebp-28], eax
push 16
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_0218
jmp .Lt_01AE
.Lt_0218:
.Lt_0217:
jmp .Lt_0215
.Lt_0216:
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-12], 0
.Lt_0215:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_021A
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
jmp .Lt_0219
.Lt_021A:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0219:
cmp dword ptr [ebp+8], 436
jne .Lt_021C
.Lt_021D:
push dword ptr [ebp-28]
push dword ptr [ebp-12]
push dword ptr [ebp-8]
call RTLSTRTRIM
add esp, 12
mov dword ptr [ebp-8], eax
jmp .Lt_021B
.Lt_021C:
cmp dword ptr [ebp+8], 438
jne .Lt_021E
.Lt_021F:
push dword ptr [ebp-28]
push dword ptr [ebp-12]
push dword ptr [ebp-8]
call RTLSTRLTRIM
add esp, 12
mov dword ptr [ebp-8], eax
jmp .Lt_021B
.Lt_021E:
cmp dword ptr [ebp+8], 437
jne .Lt_0220
.Lt_0221:
push dword ptr [ebp-28]
push dword ptr [ebp-12]
push dword ptr [ebp-8]
call RTLSTRRTRIM
add esp, 12
mov dword ptr [ebp-8], eax
.Lt_0220:
.Lt_021B:
cmp dword ptr [ebp-8], 0
jne .Lt_0223
push 0
push 0
push 24
call ERRREPORT
add esp, 12
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-8], eax
.Lt_0223:
.Lt_0222:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
jmp .Lt_01AF
.Lt_020D:
cmp dword ptr [ebp+8], 439
je .Lt_0225
.Lt_0226:
cmp dword ptr [ebp+8], 440
jne .Lt_0224
.Lt_0225:
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
je .Lt_0228
push 0
push 0
push 6
call ERRREPORT
add esp, 12
jmp .Lt_0227
.Lt_0228:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0227:
push 16
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_022A
jmp .Lt_01AE
.Lt_022A:
.Lt_0229:
push 44
call HMATCH
add esp, 4
test eax, eax
je .Lt_022C
push 7
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_022E
jmp .Lt_01AE
.Lt_022E:
.Lt_022D:
jmp .Lt_022B
.Lt_022C:
mov dword ptr [ebp-12], 0
.Lt_022B:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_0230
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
jmp .Lt_022F
.Lt_0230:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_022F:
mov eax, dword ptr [ebp+8]
cmp eax, 439
sete al
shr eax, 1
sbb eax, eax
push eax
push dword ptr [ebp-12]
push dword ptr [ebp-8]
call RTLSTRCASE
add esp, 12
mov dword ptr [ebp-4], eax
.Lt_0224:
.Lt_01AF:
.Lt_01AE:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size CSTRINGFUNCT, .-CSTRINGFUNCT
.balign 16
fb_ctor__parserzquirkzstring:
.type fb_ctor__parserzquirkzstring, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__parserzquirkzstring, .-fb_ctor__parserzquirkzstring
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
CSTRCHR:
.type CSTRCHR, @function
push ebp
mov ebp, esp
sub esp, 240
push ebx
mov dword ptr [ebp-4], 0
.Lt_00A8:
lea eax, [ebp-164]
mov dword ptr [ebp-196], eax
lea eax, [ebp-164]
lea ebx, [ebp-196]
add ebx, 4
mov dword ptr [ebx], eax
lea eax, [ebp-196]
add eax, 8
mov dword ptr [eax], 128
lea eax, [ebp-196]
add eax, 12
mov dword ptr [eax], 4
lea eax, [ebp-196]
add eax, 16
mov dword ptr [eax], 1
lea eax, [ebp-196]
add eax, 20
mov dword ptr [eax], 32
lea eax, [ebp-196]
add eax, 24
mov dword ptr [eax], 0
lea eax, [ebp-196]
add eax, 28
mov dword ptr [eax], 31
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
je .Lt_00AC
push 0
push 0
push 6
call ERRREPORT
add esp, 12
jmp .Lt_00AB
.Lt_00AC:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_00AB:
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
.Lt_00AD:
push 7
call HMATCHEXPR
add esp, 4
mov ebx, dword ptr [ebp-28]
mov dword ptr [ebp+ebx*4-164], eax
mov eax, dword ptr [ebp-28]
cmp dword ptr [ebp+eax*4-164], 0
jne .Lt_00B1
jmp .Lt_00A9
.Lt_00B1:
.Lt_00B0:
add dword ptr [ebp-28], 1
adc dword ptr [ebp-24], 0
cmp dword ptr [ebp-24], 0
jl .Lt_00B3
jg .Lt_0236
cmp dword ptr [ebp-28], 32
jb .Lt_00B3
.Lt_0236:
jmp .Lt_00AE
.Lt_00B3:
.Lt_00B2:
.Lt_00AF:
push 44
call HMATCH
add esp, 4
test eax, eax
jne .Lt_00AD
.Lt_00AE:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_00B5
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
jmp .Lt_00B4
.Lt_00B5:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_00B4:
mov eax, dword ptr [ENV+228]
test eax, eax
sete al
shr eax, 1
sbb eax, eax
and eax, dword ptr [ebp+8]
je .Lt_00B7
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
jmp .Lt_00B6
.Lt_00B7:
mov dword ptr [ebp-36], 4294967295
mov dword ptr [ebp-32], 4294967295
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
mov ebx, dword ptr [ebp-28]
mov eax, dword ptr [ebp-24]
add ebx, 4294967295
adc eax, 4294967295
mov dword ptr [ebp-204], ebx
mov dword ptr [ebp-200], eax
jmp .Lt_00B9
.Lt_00BC:
mov ebx, dword ptr [ebp-20]
mov eax, dword ptr [ebp+ebx*4-164]
mov ebx, dword ptr [eax]
cmp ebx, 16
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_00BE
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
jmp .Lt_00BB
.Lt_00BE:
.Lt_00BD:
mov ebx, dword ptr [ebp-20]
push dword ptr [ebp+ebx*4-164]
call ASTCONSTEQZERO
add esp, 4
test eax, eax
je .Lt_00C0
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
jmp .Lt_00BB
.Lt_00C0:
.Lt_00BF:
.Lt_00BA:
add dword ptr [ebp-20], 1
adc dword ptr [ebp-16], 0
.Lt_00B9:
mov ebx, dword ptr [ebp-204]
mov eax, dword ptr [ebp-200]
cmp dword ptr [ebp-16], eax
jl .Lt_00BC
jg .Lt_0239
cmp dword ptr [ebp-20], ebx
jbe .Lt_00BC
.Lt_0239:
.Lt_00BB:
.Lt_00B6:
cmp dword ptr [ebp-32], 0
jne .Lt_023A
cmp dword ptr [ebp-36], 0
je .Lt_00C2
.Lt_023A:
cmp dword ptr [ebp+8], 0
jne .Lt_00C4
push 0
push 1
push offset Lt_0000
push 193
push offset Lt_023B
call fb_StrAssign
add esp, 20
jmp .Lt_00C3
.Lt_00C4:
push 1
push offset Lt_0000
push 193
push offset Lt_023C
call fb_WstrAssignFromA
add esp, 16
.Lt_00C3:
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
mov eax, dword ptr [ebp-28]
mov ebx, dword ptr [ebp-24]
add eax, 4294967295
adc ebx, 4294967295
mov dword ptr [ebp-204], eax
mov dword ptr [ebp-200], ebx
jmp .Lt_00C6
.Lt_00C9:
mov eax, dword ptr [ebp-20]
push dword ptr [ebp+eax*4-164]
call ASTCONSTFLUSHTOINT
add esp, 4
mov dword ptr [ebp-12], eax
mov dword ptr [ebp-8], edx
mov eax, dword ptr [ebp-20]
mov dword ptr [ebp+eax*4-164], 0
cmp dword ptr [ebp+8], 0
jne .Lt_00CB
cmp dword ptr [ebp-8], 0
jb .Lt_00CD
ja .Lt_023D
cmp dword ptr [ebp-12], 255
jbe .Lt_00CD
.Lt_023D:
mov dword ptr [ebp-12], 255
mov dword ptr [ebp-8], 0
.Lt_00CD:
.Lt_00CC:
cmp dword ptr [ebp-8], 0
mov eax, -1
jl .Lt_023E
jg .Lt_023F
cmp dword ptr [ebp-12], 32
jb .Lt_023E
.Lt_023F:
xor eax, eax
.Lt_023E:
cmp dword ptr [ebp-8], 0
mov edx, -1
jg .Lt_0240
jl .Lt_0241
cmp dword ptr [ebp-12], 127
ja .Lt_0240
.Lt_0241:
xor edx, edx
.Lt_0240:
or eax, edx
je .Lt_00CF
push 0
push -1
push 2
push offset Lt_00D0
push 193
push offset Lt_023B
mov dword ptr [ebp-216], 0
mov dword ptr [ebp-212], 0
mov dword ptr [ebp-208], 0
lea edx, [ebp-216]
push edx
call fb_StrConcat
add esp, 20
push eax
push 193
push offset Lt_023B
call fb_StrAssign
add esp, 20
push 0
push -1
push dword ptr [ebp-8]
push dword ptr [ebp-12]
call fb_OCT_l
add esp, 8
push eax
push 9
push offset Lt_0242
call fb_StrAssign
add esp, 20
push 0
push -1
push -1
push 9
push offset Lt_0242
call fb_StrLen
add esp, 8
push eax
push 1
call fb_CHR
add esp, 8
push eax
push 193
push offset Lt_023B
mov dword ptr [ebp-228], 0
mov dword ptr [ebp-224], 0
mov dword ptr [ebp-220], 0
lea eax, [ebp-228]
push eax
call fb_StrConcat
add esp, 20
push eax
push 193
push offset Lt_023B
call fb_StrAssign
add esp, 20
push 0
push -1
push 9
push offset Lt_0242
push 193
push offset Lt_023B
mov dword ptr [ebp-240], 0
mov dword ptr [ebp-236], 0
mov dword ptr [ebp-232], 0
lea eax, [ebp-240]
push eax
call fb_StrConcat
add esp, 20
push eax
push 193
push offset Lt_023B
call fb_StrAssign
add esp, 20
jmp .Lt_00CE
.Lt_00CF:
push 0
push -1
push -1
mov eax, dword ptr [ebp-12]
push eax
push 1
call fb_CHR
add esp, 8
push eax
push 193
push offset Lt_023B
mov dword ptr [ebp-216], 0
mov dword ptr [ebp-212], 0
mov dword ptr [ebp-208], 0
lea eax, [ebp-216]
push eax
call fb_StrConcat
add esp, 20
push eax
push 193
push offset Lt_023B
call fb_StrAssign
add esp, 20
.Lt_00CE:
jmp .Lt_00CA
.Lt_00CB:
cmp dword ptr [ebp-8], 0
mov eax, -1
jl .Lt_0243
jg .Lt_0244
cmp dword ptr [ebp-12], 32
jb .Lt_0243
.Lt_0244:
xor eax, eax
.Lt_0243:
cmp dword ptr [ebp-8], 0
mov edx, -1
jg .Lt_0245
jl .Lt_0246
cmp dword ptr [ebp-12], 127
ja .Lt_0245
.Lt_0246:
xor edx, edx
.Lt_0245:
or eax, edx
je .Lt_00D6
push 2
push offset Lt_00D0
push offset Lt_023C
call fb_WstrConcatWA
add esp, 12
mov dword ptr [ebp-208], eax
push dword ptr [ebp-208]
push 193
push offset Lt_023C
call fb_WstrAssign
add esp, 12
push dword ptr [ebp-208]
call fb_WstrDelete
add esp, 4
push 0
push -1
push dword ptr [ebp-8]
push dword ptr [ebp-12]
call fb_OCT_l
add esp, 8
push eax
push 9
push offset Lt_0242
call fb_StrAssign
add esp, 20
push 9
push offset Lt_0242
call fb_StrLen
add esp, 8
push eax
push 1
call fb_WstrChr
add esp, 8
mov dword ptr [ebp-212], eax
push dword ptr [ebp-212]
push 193
push offset Lt_023C
call fb_WstrConcatAssign
add esp, 12
push dword ptr [ebp-212]
call fb_WstrDelete
add esp, 4
push 9
push offset Lt_0242
push offset Lt_023C
call fb_WstrConcatWA
add esp, 12
mov dword ptr [ebp-216], eax
push dword ptr [ebp-216]
push 193
push offset Lt_023C
call fb_WstrAssign
add esp, 12
push dword ptr [ebp-216]
call fb_WstrDelete
add esp, 4
jmp .Lt_00D5
.Lt_00D6:
mov eax, dword ptr [ebp-12]
push eax
push 1
call fb_WstrChr
add esp, 8
mov dword ptr [ebp-208], eax
push dword ptr [ebp-208]
push 193
push offset Lt_023C
call fb_WstrConcatAssign
add esp, 12
push dword ptr [ebp-208]
call fb_WstrDelete
add esp, 4
.Lt_00D5:
.Lt_00CA:
.Lt_00C7:
add dword ptr [ebp-20], 1
adc dword ptr [ebp-16], 0
.Lt_00C6:
mov edx, dword ptr [ebp-204]
mov eax, dword ptr [ebp-200]
cmp dword ptr [ebp-16], eax
jl .Lt_00C9
jg .Lt_0247
cmp dword ptr [ebp-20], edx
jbe .Lt_00C9
.Lt_0247:
.Lt_00C8:
cmp dword ptr [ebp+8], 0
jne .Lt_00DC
push 0
push -2147483648
push 0
push 0
mov edx, dword ptr [ebp-28]
push edx
push offset Lt_023B
call SYMBALLOCSTRCONST
add esp, 8
push eax
call ASTNEWVAR
add esp, 20
mov dword ptr [ebp-4], eax
jmp .Lt_00DB
.Lt_00DC:
push 0
push -2147483648
push 0
push 0
mov eax, dword ptr [ebp-28]
push eax
push offset Lt_023C
call SYMBALLOCWSTRCONST
add esp, 8
push eax
call ASTNEWVAR
add esp, 20
mov dword ptr [ebp-4], eax
.Lt_00DB:
jmp .Lt_00C1
.Lt_00C2:
push dword ptr [ebp+8]
lea eax, [ebp-196]
push eax
mov eax, dword ptr [ebp-28]
push eax
call RTLSTRCHR
add esp, 12
mov dword ptr [ebp-4], eax
.Lt_00C1:
.Lt_00A9:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CSTRCHR, .-CSTRCHR

.section .bss
.balign 4
	.lcomm	Lt_023B,193
.balign 4
	.lcomm	Lt_023C,772
.balign 4
	.lcomm	Lt_0242,9

.section .text
.balign 16
CSTRASC:
.type CSTRASC, @function
push ebp
mov ebp, esp
sub esp, 28
push ebx
mov dword ptr [ebp-4], 0
.Lt_00DD:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
je .Lt_00E0
push 0
push 0
push 6
call ERRREPORT
add esp, 12
jmp .Lt_00DF
.Lt_00E0:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_00DF:
push 16
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_00E2
jmp .Lt_00DE
.Lt_00E2:
.Lt_00E1:
push 44
call HMATCH
add esp, 4
test eax, eax
je .Lt_00E4
push 7
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_00E6
jmp .Lt_00DE
.Lt_00E6:
.Lt_00E5:
jmp .Lt_00E3
.Lt_00E4:
mov dword ptr [ebp-12], 0
.Lt_00E3:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_00E8
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
jmp .Lt_00E7
.Lt_00E8:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_00E7:
mov dword ptr [ebp-24], 0
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+4]
and ebx, 511
mov dword ptr [ebp-28], ebx
cmp dword ptr [ebp-28], 3
je .Lt_00EC
.Lt_00ED:
cmp dword ptr [ebp-28], 6
jne .Lt_00EB
.Lt_00EC:
push dword ptr [ebp-8]
call ASTGETSTRLITSYMBOL
add esp, 4
mov dword ptr [ebp-24], eax
.Lt_00EB:
.Lt_00E9:
cmp dword ptr [ebp-24], 0
je .Lt_00EF
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+4]
and ebx, 511
cmp ebx, 6
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ENV+228]
test eax, eax
sete al
shr eax, 1
sbb eax, eax
and ebx, eax
je .Lt_00F1
mov dword ptr [ebp-20], 4294967295
mov dword ptr [ebp-16], 4294967295
jmp .Lt_00F0
.Lt_00F1:
cmp dword ptr [ebp-12], 0
je .Lt_00F3
mov eax, dword ptr [ebp-12]
cmp dword ptr [eax], 16
jne .Lt_00F5
push dword ptr [ebp-12]
call ASTCONSTFLUSHTOINT
add esp, 4
mov dword ptr [ebp-20], eax
mov dword ptr [ebp-16], edx
mov dword ptr [ebp-12], 0
cmp dword ptr [ebp-16], 0
jg .Lt_00F7
jl .Lt_024A
cmp dword ptr [ebp-20], 0
jae .Lt_00F7
.Lt_024A:
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
.Lt_00F7:
.Lt_00F6:
jmp .Lt_00F4
.Lt_00F5:
mov dword ptr [ebp-20], 4294967295
mov dword ptr [ebp-16], 4294967295
.Lt_00F4:
jmp .Lt_00F2
.Lt_00F3:
mov dword ptr [ebp-20], 1
mov dword ptr [ebp-16], 0
.Lt_00F2:
.Lt_00F0:
cmp dword ptr [ebp-16], 0
jl .Lt_00F9
jg .Lt_024B
cmp dword ptr [ebp-20], 0
jb .Lt_00F9
.Lt_024B:
mov eax, dword ptr [ebp-8]
mov edx, dword ptr [eax+4]
and edx, 511
cmp edx, 6
je .Lt_00FB
mov edx, dword ptr [ebp-24]
push dword ptr [edx+52]
call HUNESCAPE
add esp, 4
mov dword ptr [ebp-28], eax
push 0
push 8
mov eax, dword ptr [ebp-20]
push eax
push dword ptr [ebp-28]
call fb_StrAllocTempDescZ
add esp, 4
push eax
call fb_ASC
add esp, 8
mov ebx, eax
mov edx, 0
push edx
push ebx
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-4], eax
jmp .Lt_00FA
.Lt_00FB:
mov eax, dword ptr [ebp-24]
push dword ptr [eax+52]
call HUNESCAPEW
add esp, 4
mov dword ptr [ebp-28], eax
push 0
push 8
mov eax, dword ptr [ebp-20]
push eax
push dword ptr [ebp-28]
call fb_WstrAsc
add esp, 8
mov edx, eax
mov ebx, 0
push ebx
push edx
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-4], eax
.Lt_00FA:
push dword ptr [ebp-8]
call ASTDELNODE
add esp, 4
mov dword ptr [ebp-8], 0
.Lt_00F9:
.Lt_00F8:
.Lt_00EF:
.Lt_00EE:
cmp dword ptr [ebp-8], 0
je .Lt_00FD
push dword ptr [ebp-12]
push dword ptr [ebp-8]
call RTLSTRASC
add esp, 8
mov dword ptr [ebp-4], eax
.Lt_00FD:
.Lt_00FC:
.Lt_00DE:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CSTRASC, .-CSTRASC
	#fbc-1.01.0/src/compiler/parser-quirk-string.bas' compilation took 0.04058997612446547 secs

.section .rodata
.balign 4
Lt_0000:	.ascii	"\0"

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
Lt_00D0:	.ascii	"\33""\0"
.balign 4
Lt_013E:	.ascii	"fb_CVD\0"
.balign 4
Lt_0141:	.ascii	"fb_CVS\0"
.balign 4
Lt_0149:	.ascii	"fb_CVSHORT\0"
.balign 4
Lt_014C:	.ascii	"fb_CVL\0"
.balign 4
Lt_014E:	.ascii	"fb_CVLONGINT\0"
.balign 4
Lt_0154:	.ascii	"fb_CVDFROMLONGINT\0"
.balign 4
Lt_0157:	.ascii	"fb_CVSFROML\0"
.balign 4
Lt_015D:	.ascii	"fb_CVLFROMS\0"
.balign 4
Lt_015E:	.ascii	"fb_CVLONGINTFROMD\0"
.balign 4
Lt_018A:	.ascii	"fb_MKD\0"
.balign 4
Lt_018C:	.ascii	"fb_MKS\0"
.balign 4
Lt_0192:	.ascii	"fb_MKI\0"
.balign 4
Lt_0199:	.ascii	"fb_MKSHORT\0"
.balign 4
Lt_019C:	.ascii	"fb_MKL\0"
.balign 4
Lt_019F:	.ascii	"fb_MKLONGINT\0"

.section .ctors, "aw", @progbits
.int fb_ctor__parserzquirkzstring
