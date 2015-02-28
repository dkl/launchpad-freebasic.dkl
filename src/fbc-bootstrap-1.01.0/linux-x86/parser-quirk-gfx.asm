	.intel_syntax noprefix

	#FreeBASIC-1.01.0-source/src/compiler/parser-quirk-gfx.bas' compilation started at 16:30:06 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl CGFXPSET
CGFXPSET:
.type CGFXPSET, @function
push ebp
mov ebp, esp
sub esp, 24
mov dword ptr [ebp-4], 0
.Lt_00D7:
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-4], 0
push 0
call HFBIMAGEEXPRINFRONTOFCOORD
add esp, 4
mov dword ptr [ebp-24], eax
push 282
call HMATCH
add esp, 4
test eax, eax
je .Lt_00DA
mov dword ptr [ebp-8], 5
jmp .Lt_00D9
.Lt_00DA:
mov dword ptr [ebp-8], 4
.Lt_00D9:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
je .Lt_00DC
push 0
push 0
push 6
call ERRREPORT
add esp, 12
jmp .Lt_00DB
.Lt_00DC:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_00DB:
push -1
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_00DE
jmp .Lt_00D8
.Lt_00DE:
.Lt_00DD:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
je .Lt_00E0
push 0
push 0
push 16
call ERRREPORT
add esp, 12
jmp .Lt_00DF
.Lt_00E0:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_00DF:
push -1
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 0
jne .Lt_00E2
jmp .Lt_00D8
.Lt_00E2:
.Lt_00E1:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_00E4
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
jmp .Lt_00E3
.Lt_00E4:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_00E3:
push 44
call HMATCH
add esp, 4
test eax, eax
je .Lt_00E6
push -1
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 0
jne .Lt_00E8
jmp .Lt_00D8
.Lt_00E8:
.Lt_00E7:
jmp .Lt_00E5
.Lt_00E6:
push 0
push 8
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-20], eax
or dword ptr [ebp-8], -2147483648
.Lt_00E5:
push dword ptr [ebp+8]
push dword ptr [ebp-8]
push dword ptr [ebp-20]
push dword ptr [ebp-16]
push dword ptr [ebp-12]
push dword ptr [ebp-24]
call RTLGFXPSET
add esp, 24
mov dword ptr [ebp-4], eax
.Lt_00D8:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size CGFXPSET, .-CGFXPSET
.balign 16

.globl CGFXLINE
CGFXLINE:
.type CGFXLINE, @function
push ebp
mov ebp, esp
sub esp, 52
mov dword ptr [ebp-4], 0
.Lt_00E9:
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-4], 0
push 45
call HMATCH
add esp, 4
test eax, eax
je .Lt_00EC
mov dword ptr [ebp-8], 5
push 14
push dword ptr [Lt_011D+4]
push dword ptr [Lt_011D]
call ASTNEWCONSTF
add esp, 12
mov dword ptr [ebp-20], eax
push 14
push dword ptr [Lt_011D+4]
push dword ptr [Lt_011D]
call ASTNEWCONSTF
add esp, 12
mov dword ptr [ebp-24], eax
jmp .Lt_00EB
.Lt_00EC:
push 0
call HFBIMAGEEXPRINFRONTOFCOORD
add esp, 4
mov dword ptr [ebp-40], eax
push 282
call HMATCH
add esp, 4
test eax, eax
je .Lt_00EE
mov dword ptr [ebp-8], 5
jmp .Lt_00ED
.Lt_00EE:
mov dword ptr [ebp-8], 4
.Lt_00ED:
push 40
call HMATCH
add esp, 4
test eax, eax
je .Lt_00F0
push -1
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 0
jne .Lt_00F2
jmp .Lt_00EA
.Lt_00F2:
.Lt_00F1:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
je .Lt_00F4
push 0
push 0
push 16
call ERRREPORT
add esp, 12
jmp .Lt_00F3
.Lt_00F4:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_00F3:
push -1
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-24], eax
cmp dword ptr [ebp-24], 0
jne .Lt_00F6
jmp .Lt_00EA
.Lt_00F6:
.Lt_00F5:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_00F8
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
jmp .Lt_00F7
.Lt_00F8:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_00F7:
jmp .Lt_00EF
.Lt_00F0:
mov dword ptr [ebp-8], 5
push 14
push dword ptr [Lt_011D+4]
push dword ptr [Lt_011D]
call ASTNEWCONSTF
add esp, 12
mov dword ptr [ebp-20], eax
push 14
push dword ptr [Lt_011D+4]
push dword ptr [Lt_011D]
call ASTNEWCONSTF
add esp, 12
mov dword ptr [ebp-24], eax
.Lt_00EF:
push 45
call HMATCH
add esp, 4
test eax, eax
jne .Lt_00FA
push 0
push 0
push 15
call ERRREPORT
add esp, 12
jmp .Lt_00EA
.Lt_00FA:
.Lt_00F9:
.Lt_00EB:
push 282
call HMATCH
add esp, 4
test eax, eax
je .Lt_00FC
cmp dword ptr [ebp-8], 5
jne .Lt_00FE
mov dword ptr [ebp-8], 3
jmp .Lt_00FD
.Lt_00FE:
mov dword ptr [ebp-8], 1
.Lt_00FD:
jmp .Lt_00FB
.Lt_00FC:
cmp dword ptr [ebp-8], 5
jne .Lt_0100
mov dword ptr [ebp-8], 2
jmp .Lt_00FF
.Lt_0100:
mov dword ptr [ebp-8], 0
.Lt_00FF:
.Lt_00FB:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
je .Lt_0102
push 0
push 0
push 6
call ERRREPORT
add esp, 12
jmp .Lt_0101
.Lt_0102:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0101:
push -1
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-28], eax
cmp dword ptr [ebp-28], 0
jne .Lt_0104
jmp .Lt_00EA
.Lt_0104:
.Lt_0103:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
je .Lt_0106
push 0
push 0
push 16
call ERRREPORT
add esp, 12
jmp .Lt_0105
.Lt_0106:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0105:
push -1
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-32], eax
cmp dword ptr [ebp-32], 0
jne .Lt_0108
jmp .Lt_00EA
.Lt_0108:
.Lt_0107:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_010A
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
jmp .Lt_0109
.Lt_010A:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0109:
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-16], 0
push 44
call HMATCH
add esp, 4
test eax, eax
je .Lt_010C
call CEXPRESSION
mov dword ptr [ebp-36], eax
cmp dword ptr [ebp-36], 0
jne .Lt_010E
push 0
push 8
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-36], eax
or dword ptr [ebp-8], -2147483648
.Lt_010E:
.Lt_010D:
push 44
call HMATCH
add esp, 4
test eax, eax
je .Lt_0110
push 0
push -1
push 0
call LEXGETTEXT
push eax
call fb_StrAllocTempDescZ
add esp, 4
push eax
call fb_StrUcase2
add esp, 8
push eax
push -1
lea eax, [ebp-52]
push eax
call fb_StrInit
add esp, 20
push 2
push offset Lt_0114
push -1
lea eax, [ebp-52]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_0113
.Lt_0115:
push 0
call LEXSKIPTOKEN
add esp, 4
mov dword ptr [ebp-12], 1
jmp .Lt_0111
.Lt_0113:
push 3
push offset Lt_0117
push -1
lea eax, [ebp-52]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_0116
.Lt_0118:
push 0
call LEXSKIPTOKEN
add esp, 4
mov dword ptr [ebp-12], 2
.Lt_0116:
.Lt_0111:
lea eax, [ebp-52]
push eax
call fb_StrDelete
add esp, 4
push 44
call HMATCH
add esp, 4
test eax, eax
je .Lt_011A
push -1
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 0
jne .Lt_011C
jmp .Lt_00EA
.Lt_011C:
.Lt_011B:
.Lt_011A:
.Lt_0119:
.Lt_0110:
.Lt_010F:
jmp .Lt_010B
.Lt_010C:
push 0
push 8
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-36], eax
or dword ptr [ebp-8], -2147483648
.Lt_010B:
push dword ptr [ebp-8]
push dword ptr [ebp-16]
push dword ptr [ebp-12]
push dword ptr [ebp-36]
push dword ptr [ebp-32]
push dword ptr [ebp-28]
push dword ptr [ebp-24]
push dword ptr [ebp-20]
push dword ptr [ebp-40]
call RTLGFXLINE
add esp, 36
mov dword ptr [ebp-4], eax
.Lt_00EA:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size CGFXLINE, .-CGFXLINE
.balign 16

.globl CGFXCIRCLE
CGFXCIRCLE:
.type CGFXCIRCLE, @function
push ebp
mov ebp, esp
sub esp, 44
mov dword ptr [ebp-4], 0
.Lt_011E:
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-4], 0
push 0
call HFBIMAGEEXPRINFRONTOFCOORD
add esp, 4
mov dword ptr [ebp-44], eax
push 282
call HMATCH
add esp, 4
test eax, eax
je .Lt_0121
mov dword ptr [ebp-8], 5
jmp .Lt_0120
.Lt_0121:
mov dword ptr [ebp-8], 4
.Lt_0120:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
je .Lt_0123
push 0
push 0
push 6
call ERRREPORT
add esp, 12
jmp .Lt_0122
.Lt_0123:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0122:
push -1
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 0
jne .Lt_0125
jmp .Lt_011F
.Lt_0125:
.Lt_0124:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
je .Lt_0127
push 0
push 0
push 16
call ERRREPORT
add esp, 12
jmp .Lt_0126
.Lt_0127:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0126:
push -1
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 0
jne .Lt_0129
jmp .Lt_011F
.Lt_0129:
.Lt_0128:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_012B
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
jmp .Lt_012A
.Lt_012B:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_012A:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
je .Lt_012D
push 0
push 0
push 16
call ERRREPORT
add esp, 12
jmp .Lt_012C
.Lt_012D:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_012C:
push -1
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-28], eax
cmp dword ptr [ebp-28], 0
jne .Lt_012F
jmp .Lt_011F
.Lt_012F:
.Lt_012E:
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-12], 0
push 44
call HMATCH
add esp, 4
test eax, eax
je .Lt_0131
call CEXPRESSION
mov dword ptr [ebp-24], eax
cmp dword ptr [ebp-24], 0
jne .Lt_0133
push 0
push 8
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-24], eax
or dword ptr [ebp-8], -2147483648
.Lt_0133:
.Lt_0132:
push 44
call HMATCH
add esp, 4
test eax, eax
je .Lt_0135
call CEXPRESSION
mov dword ptr [ebp-32], eax
push 44
call HMATCH
add esp, 4
test eax, eax
je .Lt_0137
call CEXPRESSION
mov dword ptr [ebp-36], eax
push 44
call HMATCH
add esp, 4
test eax, eax
je .Lt_0139
call CEXPRESSION
mov dword ptr [ebp-40], eax
push 44
call HMATCH
add esp, 4
test eax, eax
je .Lt_013B
push 2
push offset Lt_013C
push -1
push 0
call LEXGETTEXT
push eax
call fb_StrAllocTempDescZ
add esp, 4
push eax
call fb_StrUcase2
add esp, 8
push eax
call fb_StrCompare
add esp, 16
test eax, eax
je .Lt_013E
push 0
push 0
push 9
call ERRREPORT
add esp, 12
jmp .Lt_011F
.Lt_013E:
.Lt_013D:
push 0
call LEXSKIPTOKEN
add esp, 4
mov dword ptr [ebp-12], -1
.Lt_013B:
.Lt_013A:
.Lt_0139:
.Lt_0138:
.Lt_0137:
.Lt_0136:
.Lt_0135:
.Lt_0134:
jmp .Lt_0130
.Lt_0131:
push 0
push 8
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-24], eax
or dword ptr [ebp-8], -2147483648
.Lt_0130:
push dword ptr [ebp-8]
push dword ptr [ebp-12]
push dword ptr [ebp-36]
push dword ptr [ebp-32]
push dword ptr [ebp-40]
push dword ptr [ebp-24]
push dword ptr [ebp-28]
push dword ptr [ebp-20]
push dword ptr [ebp-16]
push dword ptr [ebp-44]
call RTLGFXCIRCLE
add esp, 40
mov dword ptr [ebp-4], eax
.Lt_011F:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size CGFXCIRCLE, .-CGFXCIRCLE
.balign 16

.globl CGFXPAINT
CGFXPAINT:
.type CGFXPAINT, @function
push ebp
mov ebp, esp
sub esp, 28
mov dword ptr [ebp-4], 0
.Lt_013F:
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-4], 0
push 0
call HFBIMAGEEXPRINFRONTOFCOORD
add esp, 4
mov dword ptr [ebp-24], eax
push 282
call HMATCH
add esp, 4
test eax, eax
je .Lt_0142
mov dword ptr [ebp-28], 5
jmp .Lt_0141
.Lt_0142:
mov dword ptr [ebp-28], 4
.Lt_0141:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
je .Lt_0144
push 0
push 0
push 6
call ERRREPORT
add esp, 12
jmp .Lt_0143
.Lt_0144:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0143:
push -1
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0146
jmp .Lt_0140
.Lt_0146:
.Lt_0145:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
je .Lt_0148
push 0
push 0
push 16
call ERRREPORT
add esp, 12
jmp .Lt_0147
.Lt_0148:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0147:
push -1
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_014A
jmp .Lt_0140
.Lt_014A:
.Lt_0149:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_014C
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
jmp .Lt_014B
.Lt_014C:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_014B:
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-20], 0
push 44
call HMATCH
add esp, 4
test eax, eax
je .Lt_014E
call CEXPRESSION
mov dword ptr [ebp-16], eax
push 44
call HMATCH
add esp, 4
test eax, eax
je .Lt_0150
push -1
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 0
jne .Lt_0152
jmp .Lt_0140
.Lt_0152:
.Lt_0151:
.Lt_0150:
.Lt_014F:
.Lt_014E:
.Lt_014D:
cmp dword ptr [ebp-16], 0
jne .Lt_0154
push 0
push 8
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-16], eax
or dword ptr [ebp-28], -2147483648
.Lt_0154:
.Lt_0153:
cmp dword ptr [ebp-20], 0
jne .Lt_0156
push 0
push 8
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-20], eax
or dword ptr [ebp-28], 1073741824
.Lt_0156:
.Lt_0155:
push dword ptr [ebp-28]
push dword ptr [ebp-20]
push dword ptr [ebp-16]
push dword ptr [ebp-12]
push dword ptr [ebp-8]
push dword ptr [ebp-24]
call RTLGFXPAINT
add esp, 24
mov dword ptr [ebp-4], eax
.Lt_0140:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size CGFXPAINT, .-CGFXPAINT
.balign 16

.globl CGFXDRAWSTRING
CGFXDRAWSTRING:
.type CGFXDRAWSTRING, @function
push ebp
mov ebp, esp
sub esp, 48
mov dword ptr [ebp-4], 0
.Lt_0157:
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-4], 0
push 0
call HFBIMAGEEXPRINFRONTOFCOORD
add esp, 4
mov dword ptr [ebp-8], eax
push 282
call HMATCH
add esp, 4
test eax, eax
je .Lt_015A
mov dword ptr [ebp-44], 5
jmp .Lt_0159
.Lt_015A:
mov dword ptr [ebp-44], 4
.Lt_0159:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
je .Lt_015C
push 0
push 0
push 6
call ERRREPORT
add esp, 12
jmp .Lt_015B
.Lt_015C:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_015B:
push -1
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_015E
jmp .Lt_0158
.Lt_015E:
.Lt_015D:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
je .Lt_0160
push 0
push 0
push 16
call ERRREPORT
add esp, 12
jmp .Lt_015F
.Lt_0160:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_015F:
push -1
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 0
jne .Lt_0162
jmp .Lt_0158
.Lt_0162:
.Lt_0161:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_0164
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
jmp .Lt_0163
.Lt_0164:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0163:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
je .Lt_0166
push 0
push 0
push 16
call ERRREPORT
add esp, 12
jmp .Lt_0165
.Lt_0166:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0165:
push -1
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 0
jne .Lt_0168
jmp .Lt_0158
.Lt_0168:
.Lt_0167:
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-48], 0
push 44
call HMATCH
add esp, 4
test eax, eax
je .Lt_016A
call CEXPRESSION
mov dword ptr [ebp-24], eax
push 44
call HMATCH
add esp, 4
test eax, eax
je .Lt_016C
push 0
push -1
call HFBIMAGEEXPR
add esp, 8
mov dword ptr [ebp-28], eax
push 44
call HMATCH
add esp, 4
test eax, eax
je .Lt_016E
lea eax, [ebp-40]
push eax
lea eax, [ebp-36]
push eax
lea eax, [ebp-32]
push eax
lea eax, [ebp-48]
push eax
call HGETMODE
add esp, 16
test eax, eax
jne .Lt_0170
jmp .Lt_0158
.Lt_0170:
.Lt_016F:
.Lt_016E:
.Lt_016D:
.Lt_016C:
.Lt_016B:
.Lt_016A:
.Lt_0169:
cmp dword ptr [ebp-24], 0
jne .Lt_0172
push 0
push 8
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-24], eax
or dword ptr [ebp-44], -2147483648
.Lt_0172:
.Lt_0171:
push dword ptr [ebp-40]
push dword ptr [ebp-36]
push dword ptr [ebp-32]
push dword ptr [ebp-48]
push dword ptr [ebp-44]
push dword ptr [ebp-28]
push dword ptr [ebp-24]
push dword ptr [ebp-20]
push dword ptr [ebp-16]
push dword ptr [ebp-12]
push dword ptr [ebp-8]
call RTLGFXDRAWSTRING
add esp, 44
mov dword ptr [ebp-4], eax
.Lt_0158:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size CGFXDRAWSTRING, .-CGFXDRAWSTRING
.balign 16

.globl CGFXDRAW
CGFXDRAW:
.type CGFXDRAW, @function
push ebp
mov ebp, esp
sub esp, 12
mov dword ptr [ebp-4], 0
.Lt_0173:
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-4], 0
push 368
call HMATCH
add esp, 4
test eax, eax
je .Lt_0176
call CGFXDRAWSTRING
mov dword ptr [ebp-4], eax
jmp .Lt_0174
.Lt_0176:
.Lt_0175:
push -1
call CEXPRESSIONWITHNIDXARRAY
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0178
push 0
push 0
push 9
call ERRREPORT
add esp, 12
jmp .Lt_0174
.Lt_0178:
.Lt_0177:
push 44
call HMATCH
add esp, 4
test eax, eax
je .Lt_017A
push 0
push 0
push dword ptr [ebp-8]
call HCHECKFBIMAGEEXPR
add esp, 12
mov dword ptr [ebp-8], eax
push -1
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_017C
jmp .Lt_0174
.Lt_017C:
.Lt_017B:
jmp .Lt_0179
.Lt_017A:
mov eax, dword ptr [ebp-8]
cmp dword ptr [eax], 25
jne .Lt_017E
push 0
push -1
push 72
call ERRREPORT
add esp, 12
jmp .Lt_0174
.Lt_017E:
.Lt_017D:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-12], eax
mov dword ptr [ebp-8], 0
.Lt_0179:
push dword ptr [ebp-12]
push dword ptr [ebp-8]
call RTLGFXDRAW
add esp, 8
mov dword ptr [ebp-4], eax
.Lt_0174:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size CGFXDRAW, .-CGFXDRAW
.balign 16

.globl CGFXVIEW
CGFXVIEW:
.type CGFXVIEW, @function
push ebp
mov ebp, esp
sub esp, 36
mov dword ptr [ebp-4], 0
.Lt_017F:
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-4], 0
push 0
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-36], eax
cmp dword ptr [ebp-36], 506
je .Lt_0184
.Lt_0185:
cmp dword ptr [ebp-36], 507
jne .Lt_0183
.Lt_0184:
push 0
call LEXSKIPTOKEN
add esp, 4
mov dword ptr [ebp-8], 1
jmp .Lt_0181
.Lt_0183:
mov dword ptr [ebp-8], 0
.Lt_0186:
.Lt_0181:
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-32], 0
push 40
call HMATCH
add esp, 4
test eax, eax
je .Lt_0188
push -1
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_018A
jmp .Lt_0180
.Lt_018A:
.Lt_0189:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
je .Lt_018C
push 0
push 0
push 16
call ERRREPORT
add esp, 12
jmp .Lt_018B
.Lt_018C:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_018B:
push -1
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 0
jne .Lt_018E
jmp .Lt_0180
.Lt_018E:
.Lt_018D:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_0190
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
jmp .Lt_018F
.Lt_0190:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_018F:
push 45
call HMATCH
add esp, 4
test eax, eax
jne .Lt_0192
push 0
push 0
push 15
call ERRREPORT
add esp, 12
jmp .Lt_0180
.Lt_0192:
.Lt_0191:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
je .Lt_0194
push 0
push 0
push 6
call ERRREPORT
add esp, 12
jmp .Lt_0193
.Lt_0194:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0193:
push -1
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 0
jne .Lt_0196
jmp .Lt_0180
.Lt_0196:
.Lt_0195:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
je .Lt_0198
push 0
push 0
push 16
call ERRREPORT
add esp, 12
jmp .Lt_0197
.Lt_0198:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0197:
push -1
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-24], eax
cmp dword ptr [ebp-24], 0
jne .Lt_019A
jmp .Lt_0180
.Lt_019A:
.Lt_0199:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_019C
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
jmp .Lt_019B
.Lt_019C:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_019B:
cmp dword ptr [ebp+8], 0
je .Lt_019E
or dword ptr [ebp-8], -1073741824
push 44
call HMATCH
add esp, 4
test eax, eax
je .Lt_01A0
call CEXPRESSION
mov dword ptr [ebp-28], eax
cmp dword ptr [ebp-28], 0
je .Lt_01A2
and dword ptr [ebp-8], 2147483647
.Lt_01A2:
.Lt_01A1:
push 44
call HMATCH
add esp, 4
test eax, eax
je .Lt_01A4
push -1
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-32], eax
cmp dword ptr [ebp-32], 0
jne .Lt_01A6
jmp .Lt_0180
.Lt_01A6:
.Lt_01A5:
and dword ptr [ebp-8], -1073741825
.Lt_01A4:
.Lt_01A3:
.Lt_01A0:
.Lt_019F:
.Lt_019E:
.Lt_019D:
.Lt_0188:
.Lt_0187:
cmp dword ptr [ebp+8], 0
je .Lt_01A8
push dword ptr [ebp-8]
push dword ptr [ebp-32]
push dword ptr [ebp-28]
push dword ptr [ebp-24]
push dword ptr [ebp-20]
push dword ptr [ebp-16]
push dword ptr [ebp-12]
call RTLGFXVIEW
add esp, 28
mov dword ptr [ebp-4], eax
jmp .Lt_01A7
.Lt_01A8:
push dword ptr [ebp-8]
push dword ptr [ebp-24]
push dword ptr [ebp-20]
push dword ptr [ebp-16]
push dword ptr [ebp-12]
call RTLGFXWINDOW
add esp, 20
mov dword ptr [ebp-4], eax
.Lt_01A7:
.Lt_0180:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size CGFXVIEW, .-CGFXVIEW
.balign 16

.globl CGFXPALETTE
CGFXPALETTE:
.type CGFXPALETTE, @function
push ebp
mov ebp, esp
sub esp, 44
push ebx
mov dword ptr [ebp-4], 0
.Lt_01A9:
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-4], 0
push offset Lt_01AB
call HMATCHTEXT
add esp, 4
mov dword ptr [ebp-28], eax
push 287
call HMATCH
add esp, 4
test eax, eax
je .Lt_01AD
push 0
mov eax, dword ptr [ebp-28]
not eax
push eax
call HFBIMAGEEXPR
add esp, 8
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_01AF
push 0
push 0
push 14
call ERRREPORT
add esp, 12
jmp .Lt_01AA
.Lt_01AF:
.Lt_01AE:
push dword ptr [ebp-28]
push dword ptr [ebp-8]
call RTLGFXPALETTEUSING
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_01AC
.Lt_01AD:
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-24], 0
call CEXPRESSION
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
je .Lt_01B1
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
je .Lt_01B3
push 0
push 0
push 16
call ERRREPORT
add esp, 12
jmp .Lt_01B2
.Lt_01B3:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_01B2:
cmp dword ptr [ebp-28], 0
je .Lt_01B5
push 0
call CVARORDEREF
add esp, 4
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 0
jne .Lt_01B7
push 0
push 0
push 14
call ERRREPORT
add esp, 12
jmp .Lt_01AA
.Lt_01B7:
.Lt_01B6:
jmp .Lt_01B4
.Lt_01B5:
push -1
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 0
jne .Lt_01B9
jmp .Lt_01AA
.Lt_01B9:
.Lt_01B8:
.Lt_01B4:
push 44
call HMATCH
add esp, 4
test eax, eax
je .Lt_01BB
cmp dword ptr [ebp-28], 0
je .Lt_01BD
push 0
call CVARORDEREF
add esp, 4
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 0
jne .Lt_01BF
push 0
push 0
push 14
call ERRREPORT
add esp, 12
jmp .Lt_01AA
.Lt_01BF:
.Lt_01BE:
jmp .Lt_01BC
.Lt_01BD:
push -1
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 0
jne .Lt_01C1
jmp .Lt_01AA
.Lt_01C1:
.Lt_01C0:
.Lt_01BC:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
je .Lt_01C3
push 0
push 0
push 16
call ERRREPORT
add esp, 12
jmp .Lt_01C2
.Lt_01C3:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_01C2:
cmp dword ptr [ebp-28], 0
je .Lt_01C5
push 0
call CVARORDEREF
add esp, 4
mov dword ptr [ebp-24], eax
cmp dword ptr [ebp-24], 0
jne .Lt_01C7
push 0
push 0
push 14
call ERRREPORT
add esp, 12
jmp .Lt_01AA
.Lt_01C7:
.Lt_01C6:
jmp .Lt_01C4
.Lt_01C5:
push -1
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-24], eax
cmp dword ptr [ebp-24], 0
jne .Lt_01C9
jmp .Lt_01AA
.Lt_01C9:
.Lt_01C8:
.Lt_01C4:
.Lt_01BB:
.Lt_01BA:
jmp .Lt_01B0
.Lt_01B1:
cmp dword ptr [ebp-28], 0
je .Lt_01CB
push 0
push 0
push 9
call ERRREPORT
add esp, 12
jmp .Lt_01AA
.Lt_01CB:
.Lt_01CA:
.Lt_01B0:
mov dword ptr [ebp-32], 0
cmp dword ptr [ebp-28], 0
je .Lt_01CD
cmp dword ptr [ebp-16], 0
je .Lt_01CE
mov eax, dword ptr [ebp-16]
mov ebx, dword ptr [eax+4]
and ebx, 512
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-36], ebx
jmp .Lt_01D6
.Lt_01CE:
mov dword ptr [ebp-36], 0
.Lt_01D6:
mov ebx, dword ptr [ebp-36]
or dword ptr [ebp-32], ebx
cmp dword ptr [ebp-20], 0
je .Lt_01D0
mov ebx, dword ptr [ebp-20]
mov eax, dword ptr [ebx+4]
and eax, 512
test eax, eax
setne al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-40], eax
jmp .Lt_01D7
.Lt_01D0:
mov dword ptr [ebp-40], 0
.Lt_01D7:
mov eax, dword ptr [ebp-40]
or dword ptr [ebp-32], eax
cmp dword ptr [ebp-24], 0
je .Lt_01D2
mov eax, dword ptr [ebp-24]
mov ebx, dword ptr [eax+4]
and ebx, 512
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-44], ebx
jmp .Lt_01D8
.Lt_01D2:
mov dword ptr [ebp-44], 0
.Lt_01D8:
mov ebx, dword ptr [ebp-44]
or dword ptr [ebp-32], ebx
.Lt_01CD:
.Lt_01CC:
cmp dword ptr [ebp-32], 0
je .Lt_01D5
push 0
push -1
push 118
call ERRREPORT
add esp, 12
.Lt_01D5:
.Lt_01D4:
push dword ptr [ebp-28]
push dword ptr [ebp-24]
push dword ptr [ebp-20]
push dword ptr [ebp-16]
push dword ptr [ebp-12]
call RTLGFXPALETTE
add esp, 20
mov dword ptr [ebp-4], eax
.Lt_01AC:
.Lt_01AA:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CGFXPALETTE, .-CGFXPALETTE
.balign 16

.globl CGFXPUT
CGFXPUT:
.type CGFXPUT, @function
push ebp
mov ebp, esp
sub esp, 68
mov dword ptr [ebp-4], 0
.Lt_01DC:
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-64], 0
mov dword ptr [ebp-68], 0
mov dword ptr [ebp-4], 0
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-48], 0
push 0
call HFBIMAGEEXPRINFRONTOFCOORD
add esp, 4
mov dword ptr [ebp-32], eax
push 282
call HMATCH
add esp, 4
test eax, eax
je .Lt_01DF
mov dword ptr [ebp-8], 2
jmp .Lt_01DE
.Lt_01DF:
mov dword ptr [ebp-8], 0
.Lt_01DE:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
je .Lt_01E1
push 0
push 0
push 6
call ERRREPORT
add esp, 12
jmp .Lt_01E0
.Lt_01E1:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_01E0:
push -1
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 0
jne .Lt_01E3
jmp .Lt_01DD
.Lt_01E3:
.Lt_01E2:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
je .Lt_01E5
push 0
push 0
push 16
call ERRREPORT
add esp, 12
jmp .Lt_01E4
.Lt_01E5:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_01E4:
push -1
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-24], eax
cmp dword ptr [ebp-24], 0
jne .Lt_01E7
jmp .Lt_01DD
.Lt_01E7:
.Lt_01E6:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_01E9
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
jmp .Lt_01E8
.Lt_01E9:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_01E8:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
je .Lt_01EB
push 0
push 0
push 16
call ERRREPORT
add esp, 12
jmp .Lt_01EA
.Lt_01EB:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_01EA:
push 0
push -1
call HFBIMAGEEXPR
add esp, 8
mov dword ptr [ebp-28], eax
cmp dword ptr [ebp-28], 0
jne .Lt_01ED
push 0
push 0
push 14
call ERRREPORT
add esp, 12
jmp .Lt_01DD
.Lt_01ED:
.Lt_01EC:
mov dword ptr [ebp-12], 5
push 44
call HMATCH
add esp, 4
test eax, eax
je .Lt_01EF
mov dword ptr [ebp-16], -1
push 40
call HMATCH
add esp, 4
test eax, eax
je .Lt_01F1
push -1
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-48], eax
cmp dword ptr [ebp-48], 0
jne .Lt_01F3
jmp .Lt_01DD
.Lt_01F3:
.Lt_01F2:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
je .Lt_01F5
push 0
push 0
push 16
call ERRREPORT
add esp, 12
jmp .Lt_01F4
.Lt_01F5:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_01F4:
push -1
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-52], eax
cmp dword ptr [ebp-52], 0
jne .Lt_01F7
jmp .Lt_01DD
.Lt_01F7:
.Lt_01F6:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_01F9
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
jmp .Lt_01F8
.Lt_01F9:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_01F8:
push 45
call HMATCH
add esp, 4
test eax, eax
jne .Lt_01FB
push 0
push 0
push 15
call ERRREPORT
add esp, 12
jmp .Lt_01DD
.Lt_01FB:
.Lt_01FA:
push 282
call HMATCH
add esp, 4
test eax, eax
je .Lt_01FD
cmp dword ptr [ebp-8], 2
jne .Lt_01FF
mov dword ptr [ebp-8], 3
jmp .Lt_01FE
.Lt_01FF:
mov dword ptr [ebp-8], 1
.Lt_01FE:
.Lt_01FD:
.Lt_01FC:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
je .Lt_0201
push 0
push 0
push 6
call ERRREPORT
add esp, 12
jmp .Lt_0200
.Lt_0201:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0200:
push -1
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-56], eax
cmp dword ptr [ebp-56], 0
jne .Lt_0203
jmp .Lt_01DD
.Lt_0203:
.Lt_0202:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
je .Lt_0205
push 0
push 0
push 16
call ERRREPORT
add esp, 12
jmp .Lt_0204
.Lt_0205:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0204:
push -1
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-60], eax
cmp dword ptr [ebp-60], 0
jne .Lt_0207
jmp .Lt_01DD
.Lt_0207:
.Lt_0206:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_0209
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
jmp .Lt_0208
.Lt_0209:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0208:
push 44
call HMATCH
add esp, 4
test eax, eax
jne .Lt_020B
mov dword ptr [ebp-16], 0
.Lt_020B:
.Lt_020A:
.Lt_01F1:
.Lt_01F0:
cmp dword ptr [ebp-16], 0
je .Lt_020D
lea eax, [ebp-44]
push eax
lea eax, [ebp-40]
push eax
lea eax, [ebp-36]
push eax
lea eax, [ebp-12]
push eax
call HGETMODE
add esp, 16
test eax, eax
jne .Lt_020F
jmp .Lt_01DD
.Lt_020F:
.Lt_020E:
.Lt_020D:
.Lt_020C:
.Lt_01EF:
.Lt_01EE:
push dword ptr [ebp-8]
push dword ptr [ebp-44]
push dword ptr [ebp-40]
push dword ptr [ebp-36]
push dword ptr [ebp-12]
push dword ptr [ebp-60]
push dword ptr [ebp-56]
push dword ptr [ebp-52]
push dword ptr [ebp-48]
push dword ptr [ebp-28]
push dword ptr [ebp-24]
push dword ptr [ebp-20]
push dword ptr [ebp-32]
call RTLGFXPUT
add esp, 52
mov dword ptr [ebp-4], eax
.Lt_01DD:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size CGFXPUT, .-CGFXPUT
.balign 16

.globl CGFXGET
CGFXGET:
.type CGFXGET, @function
push ebp
mov ebp, esp
sub esp, 36
mov dword ptr [ebp-4], 0
.Lt_0210:
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-4], 0
push -1
call HFBIMAGEEXPRINFRONTOFCOORD
add esp, 4
mov dword ptr [ebp-32], eax
push 282
call HMATCH
add esp, 4
test eax, eax
je .Lt_0213
mov dword ptr [ebp-8], 5
jmp .Lt_0212
.Lt_0213:
mov dword ptr [ebp-8], 4
.Lt_0212:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
je .Lt_0215
push 0
push 0
push 6
call ERRREPORT
add esp, 12
jmp .Lt_0214
.Lt_0215:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0214:
push -1
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_0217
jmp .Lt_0211
.Lt_0217:
.Lt_0216:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
je .Lt_0219
push 0
push 0
push 16
call ERRREPORT
add esp, 12
jmp .Lt_0218
.Lt_0219:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0218:
push -1
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 0
jne .Lt_021B
jmp .Lt_0211
.Lt_021B:
.Lt_021A:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_021D
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
jmp .Lt_021C
.Lt_021D:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_021C:
push 45
call HMATCH
add esp, 4
test eax, eax
jne .Lt_021F
push 0
push 0
push 15
call ERRREPORT
add esp, 12
jmp .Lt_0211
.Lt_021F:
.Lt_021E:
push 282
call HMATCH
add esp, 4
test eax, eax
je .Lt_0221
cmp dword ptr [ebp-8], 5
jne .Lt_0223
mov dword ptr [ebp-8], 3
jmp .Lt_0222
.Lt_0223:
mov dword ptr [ebp-8], 1
.Lt_0222:
jmp .Lt_0220
.Lt_0221:
cmp dword ptr [ebp-8], 5
jne .Lt_0225
mov dword ptr [ebp-8], 2
jmp .Lt_0224
.Lt_0225:
mov dword ptr [ebp-8], 0
.Lt_0224:
.Lt_0220:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
je .Lt_0227
push 0
push 0
push 6
call ERRREPORT
add esp, 12
jmp .Lt_0226
.Lt_0227:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0226:
push -1
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 0
jne .Lt_0229
jmp .Lt_0211
.Lt_0229:
.Lt_0228:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
je .Lt_022B
push 0
push 0
push 16
call ERRREPORT
add esp, 12
jmp .Lt_022A
.Lt_022B:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_022A:
push -1
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-24], eax
cmp dword ptr [ebp-24], 0
jne .Lt_022D
jmp .Lt_0211
.Lt_022D:
.Lt_022C:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_022F
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
jmp .Lt_022E
.Lt_022F:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_022E:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
je .Lt_0231
push 0
push 0
push 16
call ERRREPORT
add esp, 12
jmp .Lt_0230
.Lt_0231:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0230:
lea eax, [ebp-36]
push eax
push 0
call HFBIMAGEEXPR
add esp, 8
mov dword ptr [ebp-28], eax
cmp dword ptr [ebp-28], 0
jne .Lt_0233
push 0
push 0
push 14
call ERRREPORT
add esp, 12
jmp .Lt_0211
.Lt_0233:
.Lt_0232:
push dword ptr [ebp-36]
push dword ptr [ebp-8]
push dword ptr [ebp-28]
push dword ptr [ebp-24]
push dword ptr [ebp-20]
push dword ptr [ebp-16]
push dword ptr [ebp-12]
push dword ptr [ebp-32]
call RTLGFXGET
add esp, 32
mov dword ptr [ebp-4], eax
.Lt_0211:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size CGFXGET, .-CGFXGET
.balign 16

.globl CGFXSCREEN
CGFXSCREEN:
.type CGFXSCREEN, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
mov dword ptr [ebp-4], 0
.Lt_0234:
mov dword ptr [ebp-4], 0
cmp dword ptr [ebp+8], 0
jne .Lt_0237
call CEXPRESSION
mov dword ptr [ebp-8], eax
mov dword ptr [ebp-12], 0
push 44
call HMATCH
add esp, 4
test eax, eax
je .Lt_0239
call CEXPRESSION
mov dword ptr [ebp-12], eax
.Lt_0239:
.Lt_0238:
mov dword ptr [ebp-16], 0
push 44
call HMATCH
add esp, 4
test eax, eax
je .Lt_023B
call CEXPRESSION
mov dword ptr [ebp-16], eax
.Lt_023B:
.Lt_023A:
cmp dword ptr [ebp-8], 0
jne .Lt_023D
push 0
push dword ptr [ebp-16]
push dword ptr [ebp-12]
call RTLPAGESET
add esp, 12
test eax, eax
setne bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-4], ebx
jmp .Lt_0235
.Lt_023D:
.Lt_023C:
mov dword ptr [ebp-20], 0
push 44
call HMATCH
add esp, 4
test eax, eax
je .Lt_023F
call CEXPRESSION
mov dword ptr [ebp-20], eax
.Lt_023F:
.Lt_023E:
mov dword ptr [ebp-24], 0
push 44
call HMATCH
add esp, 4
test eax, eax
je .Lt_0241
call CEXPRESSION
mov dword ptr [ebp-24], eax
.Lt_0241:
.Lt_0240:
push dword ptr [ebp-24]
push dword ptr [ebp-20]
push dword ptr [ebp-16]
push dword ptr [ebp-12]
push dword ptr [ebp-8]
call RTLGFXSCREENSET
add esp, 20
mov dword ptr [ebp-4], eax
jmp .Lt_0236
.Lt_0237:
call CEXPRESSION
mov dword ptr [ebp-8], eax
push 44
call HMATCH
add esp, 4
test eax, eax
je .Lt_0243
call CEXPRESSION
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 0
je .Lt_0245
push dword ptr [ebp-20]
call ASTDELTREE
add esp, 4
.Lt_0245:
.Lt_0244:
.Lt_0243:
.Lt_0242:
mov dword ptr [ebp-12], 0
push 44
call HMATCH
add esp, 4
test eax, eax
je .Lt_0247
call CEXPRESSION
mov dword ptr [ebp-12], eax
.Lt_0247:
.Lt_0246:
mov dword ptr [ebp-16], 0
push 44
call HMATCH
add esp, 4
test eax, eax
je .Lt_0249
call CEXPRESSION
mov dword ptr [ebp-16], eax
.Lt_0249:
.Lt_0248:
cmp dword ptr [ebp-8], 0
jne .Lt_024B
push 0
push dword ptr [ebp-16]
push dword ptr [ebp-12]
call RTLPAGESET
add esp, 12
test eax, eax
setne bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-4], ebx
jmp .Lt_024A
.Lt_024B:
push dword ptr [ebp-16]
push dword ptr [ebp-12]
push dword ptr [ebp-8]
call RTLGFXSCREENSETQB
add esp, 12
mov dword ptr [ebp-4], eax
.Lt_024A:
.Lt_0236:
.Lt_0235:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CGFXSCREEN, .-CGFXSCREEN
.balign 16

.globl CGFXPOINT
CGFXPOINT:
.type CGFXPOINT, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
mov dword ptr [ebp-4], 0
.Lt_024E:
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-4], 0
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
je .Lt_0251
push 0
push 0
push 6
call ERRREPORT
add esp, 12
jmp .Lt_0250
.Lt_0251:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0250:
push -1
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0253
jmp .Lt_024F
.Lt_0253:
.Lt_0252:
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-16], 0
push 44
call HMATCH
add esp, 4
test eax, eax
je .Lt_0255
push -1
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_0257
jmp .Lt_024F
.Lt_0257:
.Lt_0256:
push 44
call HMATCH
add esp, 4
test eax, eax
je .Lt_0259
push 0
push -1
call HFBIMAGEEXPR
add esp, 8
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 0
jne .Lt_025B
push 0
push 0
push 9
call ERRREPORT
add esp, 12
jmp .Lt_024F
.Lt_025B:
.Lt_025A:
.Lt_0259:
.Lt_0258:
.Lt_0255:
.Lt_0254:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_025D
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
jmp .Lt_025C
.Lt_025D:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_025C:
push dword ptr [ebp-12]
push dword ptr [ebp-8]
push dword ptr [ebp-16]
call RTLGFXPOINT
add esp, 12
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx], eax
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 0
setne bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-4], ebx
.Lt_024F:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CGFXPOINT, .-CGFXPOINT
.balign 16

.globl CGFXIMAGECREATE
CGFXIMAGECREATE:
.type CGFXIMAGECREATE, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
mov dword ptr [ebp-4], 0
.Lt_025F:
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-4], 0
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
je .Lt_0262
push 0
push 0
push 6
call ERRREPORT
add esp, 12
jmp .Lt_0261
.Lt_0262:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0261:
push -1
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0264
jmp .Lt_0260
.Lt_0264:
.Lt_0263:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
je .Lt_0266
push 0
push 0
push 16
call ERRREPORT
add esp, 12
jmp .Lt_0265
.Lt_0266:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0265:
push -1
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_0268
jmp .Lt_0260
.Lt_0268:
.Lt_0267:
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-24], -2147483648
push 44
call HMATCH
add esp, 4
test eax, eax
je .Lt_026A
call CEXPRESSION
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 0
je .Lt_026C
mov dword ptr [ebp-24], 0
.Lt_026C:
.Lt_026B:
push 44
call HMATCH
add esp, 4
test eax, eax
je .Lt_026E
push -1
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 0
jne .Lt_0270
jmp .Lt_0260
.Lt_0270:
.Lt_026F:
.Lt_026E:
.Lt_026D:
.Lt_026A:
.Lt_0269:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_0272
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
jmp .Lt_0271
.Lt_0272:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0271:
push dword ptr [ebp-24]
push dword ptr [ebp-20]
push dword ptr [ebp-16]
push dword ptr [ebp-12]
push dword ptr [ebp-8]
call RTLGFXIMAGECREATE
add esp, 20
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx], eax
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 0
setne bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-4], ebx
.Lt_0260:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CGFXIMAGECREATE, .-CGFXIMAGECREATE
.balign 16

.globl CGFXSTMT
CGFXSTMT:
.type CGFXSTMT, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_0274:
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-8], eax
jmp .Lt_0277
.Lt_0279:
push 1
call CCOMPSTMTISALLOWED
add esp, 4
test eax, eax
jne .Lt_027B
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_0275
.Lt_027B:
.Lt_027A:
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call CGFXPSET
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_0276
.Lt_027C:
push 1
call CCOMPSTMTISALLOWED
add esp, 4
test eax, eax
jne .Lt_027E
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_0275
.Lt_027E:
.Lt_027D:
push 0
call LEXSKIPTOKEN
add esp, 4
push -1
call CGFXPSET
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_0276
.Lt_027F:
push 1
call CCOMPSTMTISALLOWED
add esp, 4
test eax, eax
jne .Lt_0281
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_0275
.Lt_0281:
.Lt_0280:
push 0
call LEXSKIPTOKEN
add esp, 4
call CGFXLINE
mov dword ptr [ebp-4], eax
jmp .Lt_0276
.Lt_0282:
push 1
call CCOMPSTMTISALLOWED
add esp, 4
test eax, eax
jne .Lt_0284
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_0275
.Lt_0284:
.Lt_0283:
push 0
call LEXSKIPTOKEN
add esp, 4
call CGFXCIRCLE
mov dword ptr [ebp-4], eax
jmp .Lt_0276
.Lt_0285:
push 1
call CCOMPSTMTISALLOWED
add esp, 4
test eax, eax
jne .Lt_0287
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_0275
.Lt_0287:
.Lt_0286:
push 0
call LEXSKIPTOKEN
add esp, 4
call CGFXPAINT
mov dword ptr [ebp-4], eax
jmp .Lt_0276
.Lt_0288:
push 1
call CCOMPSTMTISALLOWED
add esp, 4
test eax, eax
jne .Lt_028A
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_0275
.Lt_028A:
.Lt_0289:
push 0
call LEXSKIPTOKEN
add esp, 4
call CGFXDRAW
mov dword ptr [ebp-4], eax
jmp .Lt_0276
.Lt_028B:
push 1
call CCOMPSTMTISALLOWED
add esp, 4
test eax, eax
jne .Lt_028D
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_0275
.Lt_028D:
.Lt_028C:
push 0
call LEXSKIPTOKEN
add esp, 4
push -1
call CGFXVIEW
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_0276
.Lt_028E:
push 1
call CCOMPSTMTISALLOWED
add esp, 4
test eax, eax
jne .Lt_0290
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_0275
.Lt_0290:
.Lt_028F:
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call CGFXVIEW
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_0276
.Lt_0291:
push 1
call CCOMPSTMTISALLOWED
add esp, 4
test eax, eax
jne .Lt_0293
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_0275
.Lt_0293:
.Lt_0292:
push 0
call LEXSKIPTOKEN
add esp, 4
call CGFXPALETTE
mov dword ptr [ebp-4], eax
jmp .Lt_0276
.Lt_0294:
push 1
call CCOMPSTMTISALLOWED
add esp, 4
test eax, eax
jne .Lt_0296
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_0275
.Lt_0296:
.Lt_0295:
push 0
call LEXSKIPTOKEN
add esp, 4
call CGFXPUT
mov dword ptr [ebp-4], eax
jmp .Lt_0276
.Lt_0297:
push 1
call CCOMPSTMTISALLOWED
add esp, 4
test eax, eax
jne .Lt_0299
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_0275
.Lt_0299:
.Lt_0298:
push 0
call LEXSKIPTOKEN
add esp, 4
call CGFXGET
mov dword ptr [ebp-4], eax
jmp .Lt_0276
.Lt_029A:
push 1
call CCOMPSTMTISALLOWED
add esp, 4
test eax, eax
jne .Lt_029C
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_0275
.Lt_029C:
.Lt_029B:
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call CGFXSCREEN
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_0276
.Lt_029D:
push 1
call CCOMPSTMTISALLOWED
add esp, 4
test eax, eax
jne .Lt_029F
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_0275
.Lt_029F:
.Lt_029E:
push 0
call LEXSKIPTOKEN
add esp, 4
push -1
call CGFXSCREEN
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_0276
.Lt_0277:
mov eax, dword ptr [ebp-8]
add eax, 4294966827
cmp eax, 40
ja .Lt_0276
mov eax, dword ptr [ebp-8]
jmp dword ptr [.LT_02A0+eax*4-1876]
.LT_02A0:
.int .Lt_0294
.int .Lt_0297
.int .Lt_0276
.int .Lt_0276
.int .Lt_0276
.int .Lt_0276
.int .Lt_0276
.int .Lt_0276
.int .Lt_0276
.int .Lt_0276
.int .Lt_0276
.int .Lt_0276
.int .Lt_0276
.int .Lt_0276
.int .Lt_0276
.int .Lt_027F
.int .Lt_028B
.int .Lt_0276
.int .Lt_0276
.int .Lt_0276
.int .Lt_0276
.int .Lt_0276
.int .Lt_0276
.int .Lt_0276
.int .Lt_0276
.int .Lt_0276
.int .Lt_0276
.int .Lt_0276
.int .Lt_0276
.int .Lt_0276
.int .Lt_0276
.int .Lt_0279
.int .Lt_027C
.int .Lt_0276
.int .Lt_0282
.int .Lt_028E
.int .Lt_0291
.int .Lt_029A
.int .Lt_029D
.int .Lt_0285
.int .Lt_0288
.Lt_0276:
.Lt_0275:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size CGFXSTMT, .-CGFXSTMT
.balign 16

.globl CGFXFUNCT
CGFXFUNCT:
.type CGFXFUNCT, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_02A1:
mov dword ptr [ebp-8], 0
cmp dword ptr [ebp+8], 502
jne .Lt_02A4
.Lt_02A5:
push 0
call LEXSKIPTOKEN
add esp, 4
lea eax, [ebp-8]
push eax
call CGFXPOINT
add esp, 4
jmp .Lt_02A3
.Lt_02A4:
cmp dword ptr [ebp+8], 510
jne .Lt_02A6
.Lt_02A7:
push 0
call LEXSKIPTOKEN
add esp, 4
lea eax, [ebp-8]
push eax
call CGFXIMAGECREATE
add esp, 4
.Lt_02A6:
.Lt_02A3:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_02A2:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size CGFXFUNCT, .-CGFXFUNCT
.balign 16
fb_ctor__parserzquirkzgfx:
.type fb_ctor__parserzquirkzgfx, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__parserzquirkzgfx, .-fb_ctor__parserzquirkzgfx
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
HMAYBEUDT2PTR:
.type HMAYBEUDT2PTR, @function
push ebp
mov ebp, esp
sub esp, 12
mov dword ptr [ebp-4], 0
.Lt_0060:
lea eax, [ebp-8]
push eax
push dword ptr [ebp+8]
push 0
push 32
call SYMBFINDCASTOVLPROC
add esp, 16
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
je .Lt_0063
push 0
push 0
push dword ptr [ebp+8]
push dword ptr [ebp-12]
call ASTBUILDCALL
add esp, 16
mov dword ptr [ebp+8], eax
jmp .Lt_0062
.Lt_0063:
cmp dword ptr [ebp-8], 0
je .Lt_0065
push dword ptr [ebp+8]
call ASTDELTREE
add esp, 4
push 0
push 32
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp+8], eax
.Lt_0065:
.Lt_0064:
.Lt_0062:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
.Lt_0061:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size HMAYBEUDT2PTR, .-HMAYBEUDT2PTR
.balign 16
HNIDXARRAY2ARRAYACCESS:
.type HNIDXARRAY2ARRAYACCESS, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
mov dword ptr [ebp-4], 0
.Lt_0066:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-8], ebx
push dword ptr [ebp+8]
call ASTDELNODE
add esp, 4
mov ebx, dword ptr [ebp-8]
cmp dword ptr [ebx], 19
jne .Lt_0069
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ebx
jmp .Lt_0067
.Lt_0069:
.Lt_0068:
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx+12]
mov dword ptr [ebp-20], eax
mov eax, dword ptr [ebp-20]
mov ebx, dword ptr [eax+4]
and ebx, 65536
test ebx, ebx
je .Lt_006B
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
push dword ptr [ebp-20]
call ASTNEWVAR
add esp, 20
push eax
call ASTNEWDEREF
add esp, 20
mov dword ptr [ebp-12], eax
mov eax, dword ptr [SYMB+99580]
add eax, dword ptr [SYMB+99572]
mov ecx, eax
mov ebx, ecx
sar ebx, 31
push ebx
push ecx
push 0
push 7
push 0
push 7
push 0
push 0
push dword ptr [ebp-20]
call ASTNEWVAR
add esp, 20
push eax
call ASTNEWDEREF
add esp, 20
mov dword ptr [ebp-16], eax
push 1
push 0
push 0
push 8
mov eax, dword ptr [ebp-20]
push dword ptr [eax+40]
push dword ptr [eax+36]
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp-16]
push 30
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp-16], eax
push 1
push 0
push dword ptr [ebp-16]
push dword ptr [ebp-12]
push 28
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp-12], eax
push 0
push 7
push dword ptr [ebp-12]
call ASTNEWLOAD
add esp, 12
push dword ptr [ebp-8]
call ASTDELTREE
add esp, 4
push 0
push 7
push 0
push 0
push dword ptr [ebp-20]
call ASTNEWVAR
add esp, 20
mov dword ptr [ebp-8], eax
jmp .Lt_006A
.Lt_006B:
mov eax, dword ptr [ebp-20]
mov ecx, dword ptr [eax+4]
and ecx, 65540
test ecx, ecx
je .Lt_006C
push 0
push 7
mov eax, dword ptr [SYMB+99560]
mov ecx, eax
sar ecx, 31
push ecx
push eax
mov eax, dword ptr [ebp-20]
push dword ptr [eax+80]
call ASTNEWVAR
add esp, 20
mov dword ptr [ebp-12], eax
push 0
push 7
mov eax, dword ptr [SYMB+99580]
add eax, dword ptr [SYMB+99572]
mov ebx, eax
mov ecx, ebx
sar ecx, 31
push ecx
push ebx
mov ebx, dword ptr [ebp-20]
push dword ptr [ebx+80]
call ASTNEWVAR
add esp, 20
mov dword ptr [ebp-16], eax
push 1
push 0
push 0
push 8
mov eax, dword ptr [ebp-20]
push dword ptr [eax+40]
push dword ptr [eax+36]
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp-16]
push 30
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp-16], eax
push 1
push 0
push dword ptr [ebp-16]
push dword ptr [ebp-12]
push 28
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp-12], eax
push 0
push 7
push dword ptr [ebp-12]
call ASTNEWLOAD
add esp, 12
mov dword ptr [ebp-12], eax
jmp .Lt_006A
.Lt_006C:
push 1
push 0
push 0
push 8
mov eax, dword ptr [ebp-8]
push dword ptr [eax+8]
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+4]
and ebx, 511
push ebx
call SYMBCALCLEN
add esp, 8
push edx
push eax
call ASTNEWCONSTI
add esp, 16
push eax
push 0
push 7
mov eax, dword ptr [ebp-20]
mov edx, dword ptr [eax+60]
push dword ptr [edx+4]
push dword ptr [edx]
call ASTNEWCONSTI
add esp, 16
push eax
push 30
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp-12], eax
.Lt_006A:
mov eax, dword ptr [ebp-8]
push dword ptr [eax+8]
mov eax, dword ptr [ebp-8]
push dword ptr [eax+4]
push dword ptr [ebp-12]
push dword ptr [ebp-8]
call ASTNEWIDX
add esp, 16
mov dword ptr [ebp-4], eax
.Lt_0067:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HNIDXARRAY2ARRAYACCESS, .-HNIDXARRAY2ARRAYACCESS
.balign 16
HMAYBEARRAYACCESS2PTR:
.type HMAYBEARRAYACCESS2PTR, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_006D:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-8], ebx
cmp dword ptr [ebp-8], 18
jne .Lt_0071
.Lt_0072:
cmp dword ptr [ebp+12], 0
je .Lt_0074
push 0
push -2147483648
push 0
push 0
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+12]
call ASTNEWVAR
add esp, 20
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx], eax
.Lt_0074:
.Lt_0073:
push dword ptr [ebp+8]
call ASTNEWADDROF
add esp, 4
mov dword ptr [ebp+8], eax
jmp .Lt_006F
.Lt_0071:
cmp dword ptr [ebp-8], 19
jne .Lt_0075
.Lt_0076:
mov eax, dword ptr [ebp+8]
push dword ptr [eax+12]
call SYMBISARRAY
add esp, 4
test eax, eax
je .Lt_0078
cmp dword ptr [ebp+12], 0
je .Lt_007A
push dword ptr [ebp+8]
call ASTHASSIDEFX
add esp, 4
test eax, eax
je .Lt_007C
push 0
push -1
push 28
call ERRREPORT
add esp, 12
push dword ptr [ebp+8]
call ASTDELTREE
add esp, 4
push 0
push 32
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp+8], eax
jmp .Lt_007B
.Lt_007C:
push dword ptr [ebp+8]
call ASTCLONETREE
add esp, 4
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx], eax
push dword ptr [ebp+8]
call ASTNEWADDROF
add esp, 4
mov dword ptr [ebp+8], eax
.Lt_007B:
jmp .Lt_0079
.Lt_007A:
push dword ptr [ebp+8]
call ASTNEWADDROF
add esp, 4
mov dword ptr [ebp+8], eax
.Lt_0079:
.Lt_0078:
.Lt_0077:
.Lt_0075:
.Lt_006F:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
.Lt_006E:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HMAYBEARRAYACCESS2PTR, .-HMAYBEARRAYACCESS2PTR
.balign 16
HCHECKFBIMAGEEXPR:
.type HCHECKFBIMAGEEXPR, @function
push ebp
mov ebp, esp
sub esp, 40
push ebx
mov dword ptr [ebp-4], 0
.Lt_007D:
push dword ptr [ebp+8]
call ASTREMOVENOCONVCAST
add esp, 4
mov dword ptr [ebp+8], eax
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 25
jne .Lt_0080
push dword ptr [ebp+16]
push dword ptr [ebp+8]
call HNIDXARRAY2ARRAYACCESS
add esp, 4
push eax
call HMAYBEARRAYACCESS2PTR
add esp, 8
mov dword ptr [ebp+8], eax
jmp .Lt_007F
.Lt_0080:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 511
cmp ebx, 18
jne .Lt_0082
push dword ptr [ebp+8]
call HMAYBEUDT2PTR
add esp, 4
mov dword ptr [ebp+8], eax
.Lt_0082:
.Lt_0081:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_0084
push dword ptr [ebp+16]
push dword ptr [ebp+8]
call HMAYBEARRAYACCESS2PTR
add esp, 8
mov dword ptr [ebp+8], eax
.Lt_0084:
.Lt_0083:
.Lt_007F:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_0086
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 511
cmp eax, 18
jne .Lt_0088
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
push 0
push -1
push 20
push offset Lt_008A
push -1
push 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+8]
push dword ptr [ebx+12]
push 3
push offset Lt_0089
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
lea ebx, [ebp-16]
push ebx
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
lea eax, [ebp-28]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-40]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-40]
push -1
push 98
call ERRREPORT
add esp, 12
lea eax, [ebp-40]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0087
.Lt_0088:
push 0
push -1
push 28
call ERRREPORT
add esp, 12
.Lt_0087:
push dword ptr [ebp+8]
call ASTNEWADDROF
add esp, 4
mov dword ptr [ebp+8], eax
.Lt_0086:
.Lt_0085:
cmp dword ptr [ebp+12], 0
jne .Lt_008F
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 31
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+4]
and ecx, 480
add ecx, -32
or ebx, ecx
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ecx+4]
and eax, 261632
sar eax, 1
and eax, 261632
or ebx, eax
and ebx, 512
test ebx, ebx
je .Lt_0091
push 0
push -1
push 118
call ERRREPORT
add esp, 12
.Lt_0091:
.Lt_0090:
.Lt_008F:
.Lt_008E:
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebp-4], ebx
.Lt_007E:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HCHECKFBIMAGEEXPR, .-HCHECKFBIMAGEEXPR
.balign 16
HFBIMAGEEXPR:
.type HFBIMAGEEXPR, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_0092:
push -1
call CEXPRESSIONWITHNIDXARRAY
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0095
jmp .Lt_0093
.Lt_0095:
.Lt_0094:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push dword ptr [ebp-8]
call HCHECKFBIMAGEEXPR
add esp, 12
mov dword ptr [ebp-4], eax
.Lt_0093:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size HFBIMAGEEXPR, .-HFBIMAGEEXPR
.balign 16
HFBIMAGEEXPRINFRONTOFCOORD:
.type HFBIMAGEEXPRINFRONTOFCOORD, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_0096:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
jne .Lt_0099
jmp .Lt_0097
.Lt_0099:
.Lt_0098:
push 0
push dword ptr [ebp+8]
call HFBIMAGEEXPR
add esp, 8
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_009B
jmp .Lt_0097
.Lt_009B:
.Lt_009A:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
je .Lt_009D
push 0
push 0
push 16
call ERRREPORT
add esp, 12
jmp .Lt_009C
.Lt_009D:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_009C:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0097:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size HFBIMAGEEXPRINFRONTOFCOORD, .-HFBIMAGEEXPRINFRONTOFCOORD
.balign 16
HGETMODE:
.type HGETMODE, @function
push ebp
mov ebp, esp
sub esp, 36
push ebx
mov dword ptr [ebp-4], 0
.Lt_009E:
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-4], 0
push 0
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-24], eax
jmp .Lt_00A1
.Lt_00A3:
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 3
jmp .Lt_00A0
.Lt_00A4:
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 4
jmp .Lt_00A0
.Lt_00A5:
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 5
jmp .Lt_00A0
.Lt_00A6:
push 0
push -1
push 0
call LEXGETTEXT
push eax
call fb_StrAllocTempDescZ
add esp, 4
push eax
call fb_StrUcase2
add esp, 8
push eax
push -1
lea eax, [ebp-36]
push eax
call fb_StrInit
add esp, 20
push 5
push offset Lt_00AA
push -1
lea eax, [ebp-36]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_00A9
.Lt_00AB:
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 1
jmp .Lt_00A7
.Lt_00A9:
push 7
push offset Lt_00AD
push -1
lea eax, [ebp-36]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_00AC
.Lt_00AE:
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 2
jmp .Lt_00A7
.Lt_00AC:
push 6
push offset Lt_00B0
push -1
lea eax, [ebp-36]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_00AF
.Lt_00B1:
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 0
jmp .Lt_00A7
.Lt_00AF:
push 4
push offset Lt_00B3
push -1
lea eax, [ebp-36]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_00B2
.Lt_00B4:
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 7
push 44
call HMATCH
add esp, 4
test eax, eax
je .Lt_00B6
push -1
call HMATCHEXPR
add esp, 4
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx], eax
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax], 0
jne .Lt_00B8
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_009F
.Lt_00B8:
.Lt_00B7:
jmp .Lt_00B5
.Lt_00B6:
push 0
push 8
push 0
push 255
call ASTNEWCONSTI
add esp, 16
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx], eax
.Lt_00B5:
jmp .Lt_00A7
.Lt_00B2:
push 6
push offset Lt_00BA
push -1
lea eax, [ebp-36]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_00B9
.Lt_00BB:
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 6
push 44
call HMATCH
add esp, 4
test eax, eax
je .Lt_00BD
push -1
call HMATCHEXPR
add esp, 4
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx], eax
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax], 0
jne .Lt_00BF
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_009F
.Lt_00BF:
.Lt_00BE:
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 9
.Lt_00BD:
.Lt_00BC:
jmp .Lt_00A7
.Lt_00B9:
push 7
push offset Lt_00C1
push -1
lea eax, [ebp-36]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_00C0
.Lt_00C2:
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 8
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
je .Lt_00C4
push 0
push 0
push 16
call ERRREPORT
add esp, 12
jmp .Lt_00C3
.Lt_00C4:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_00C3:
push -1
call HMATCHEXPR
add esp, 4
mov ebx, dword ptr [ebp+16]
mov dword ptr [ebx], eax
mov eax, dword ptr [ebp+16]
cmp dword ptr [eax], 0
jne .Lt_00C6
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_009F
.Lt_00C6:
.Lt_00C5:
push 44
call HMATCH
add esp, 4
test eax, eax
je .Lt_00C8
push -1
call HMATCHEXPR
add esp, 4
mov ebx, dword ptr [ebp+20]
mov dword ptr [ebx], eax
mov eax, dword ptr [ebp+20]
cmp dword ptr [eax], 0
jne .Lt_00CA
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_009F
.Lt_00CA:
.Lt_00C9:
.Lt_00C8:
.Lt_00C7:
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax]
mov eax, dword ptr [ebx+8]
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_00CC
push 0
push 0
push 20
call ERRREPORT
add esp, 12
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_009F
.Lt_00CC:
.Lt_00CB:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax]
cmp ebx, 3
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_00CE
push 0
push 0
push 20
call ERRREPORT
add esp, 12
lea ebx, [ebp-36]
push ebx
call fb_StrDelete
add esp, 4
jmp .Lt_009F
.Lt_00CE:
.Lt_00CD:
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx+24]
and eax, 511
cmp eax, 8
setne al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp-8]
movsx ecx, word ptr [ebx+64]
cmp ecx, 3
setne cl
shr ecx, 1
sbb ecx, ecx
or eax, ecx
je .Lt_00D0
push 0
push 0
push 20
call ERRREPORT
add esp, 12
lea ecx, [ebp-36]
push ecx
call fb_StrDelete
add esp, 4
jmp .Lt_009F
.Lt_00D0:
.Lt_00CF:
mov ecx, dword ptr [ebp-8]
mov eax, dword ptr [ecx+72]
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp-12]
mov ecx, dword ptr [eax+160]
mov dword ptr [ebp-16], ecx
mov ecx, dword ptr [ebp-16]
mov eax, dword ptr [ecx+160]
mov dword ptr [ebp-20], eax
mov eax, dword ptr [ebp-8]
cmp dword ptr [eax+80], 4
jne .Lt_00D2
push dword ptr [ebp-12]
mov eax, dword ptr [ebp-20]
mov dword ptr [ebp-12], eax
pop dword ptr [ebp-20]
.Lt_00D2:
.Lt_00D1:
mov eax, dword ptr [ebp-12]
mov ecx, dword ptr [eax+24]
and ecx, 511
cmp ecx, 8
setne cl
shr ecx, 1
sbb ecx, ecx
mov eax, dword ptr [ebp-16]
mov ebx, dword ptr [eax+24]
and ebx, 511
cmp ebx, 8
setne bl
shr ebx, 1
sbb ebx, ebx
or ecx, ebx
mov ebx, dword ptr [ebp-20]
mov eax, dword ptr [ebx+24]
and eax, 511
and eax, 480
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
sete al
shr eax, 1
sbb eax, eax
or ecx, eax
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax+52]
cmp ebx, 1
setne bl
shr ebx, 1
sbb ebx, ebx
or ecx, ebx
mov ebx, dword ptr [ebp-16]
mov eax, dword ptr [ebx+52]
cmp eax, 1
setne al
shr eax, 1
sbb eax, eax
or ecx, eax
mov eax, dword ptr [ebp-20]
mov ebx, dword ptr [eax+52]
cmp ebx, 1
setne bl
shr ebx, 1
sbb ebx, ebx
or ecx, ebx
je .Lt_00D4
push 0
push 0
push 20
call ERRREPORT
add esp, 12
lea ebx, [ebp-36]
push ebx
call fb_StrDelete
add esp, 4
jmp .Lt_009F
.Lt_00D4:
.Lt_00D3:
jmp .Lt_00A7
.Lt_00C0:
push 0
push 0
push 17
call ERRREPORT
add esp, 12
lea ebx, [ebp-36]
push ebx
call fb_StrDelete
add esp, 4
jmp .Lt_009F
.Lt_00D5:
.Lt_00A7:
lea ebx, [ebp-36]
push ebx
call fb_StrDelete
add esp, 4
jmp .Lt_00A0
.Lt_00A1:
mov ebx, dword ptr [ebp-24]
add ebx, 4294967008
cmp ebx, 4
ja .Lt_00A6
mov ebx, dword ptr [ebp-24]
jmp dword ptr [.LT_00D6+ebx*4-1152]
.LT_00D6:
.int .Lt_00A3
.int .Lt_00A4
.int .Lt_00A6
.int .Lt_00A6
.int .Lt_00A5
.Lt_00A0:
mov dword ptr [ebp-4], -1
.Lt_009F:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HGETMODE, .-HGETMODE
	#FreeBASIC-1.01.0-source/src/compiler/parser-quirk-gfx.bas' compilation took 0.04709311225451529 secs

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
Lt_0089:	.ascii	" \"\0"
.balign 4
Lt_008A:	.ascii	".cast() as any ptr\"\0"
.balign 4
Lt_00AA:	.ascii	"PSET\0"
.balign 4
Lt_00AD:	.ascii	"PRESET\0"
.balign 4
Lt_00B0:	.ascii	"TRANS\0"
.balign 4
Lt_00B3:	.ascii	"ADD\0"
.balign 4
Lt_00BA:	.ascii	"ALPHA\0"
.balign 4
Lt_00C1:	.ascii	"CUSTOM\0"
.balign 4
Lt_0114:	.ascii	"B\0"
.balign 4
Lt_0117:	.ascii	"BF\0"
.balign 8
Lt_011D:	.quad	0x0000000000000000
.balign 4
Lt_013C:	.ascii	"F\0"
.balign 4
Lt_01AB:	.ascii	"GET\0"

.section .ctors, "aw", @progbits
.int fb_ctor__parserzquirkzgfx
