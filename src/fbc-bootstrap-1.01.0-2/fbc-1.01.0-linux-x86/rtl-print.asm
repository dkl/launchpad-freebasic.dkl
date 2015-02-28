	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/rtl-print.bas' compilation started at 15:27:37 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl RTLPRINTMODINIT
RTLPRINTMODINIT:
.type RTLPRINTMODINIT, @function
.Lt_0092:
push offset FUNCDATA
call RTLADDINTRINSICPROCS
add esp, 4
.Lt_0093:
ret
.size RTLPRINTMODINIT, .-RTLPRINTMODINIT
.balign 16

.globl RTLPRINTMODEND
RTLPRINTMODEND:
.type RTLPRINTMODEND, @function
.Lt_0094:
.Lt_0095:
ret
.size RTLPRINTMODEND, .-RTLPRINTMODEND
.balign 16

.globl RTLPRINT
RTLPRINT:
.type RTLPRINT, @function
push ebp
mov ebp, esp
sub esp, 32
push ebx
mov dword ptr [ebp-4], 0
.Lt_0096:
mov dword ptr [ebp-4], 0
cmp dword ptr [ebp+20], 0
jne .Lt_0099
cmp dword ptr [ebp+24], 0
je .Lt_009B
push 168
push offset Lt_006C
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_009A
.Lt_009B:
push 155
push offset Lt_005F
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
.Lt_009A:
jmp .Lt_0098
.Lt_0099:
mov eax, dword ptr [ebp+20]
mov ebx, dword ptr [eax+4]
and ebx, 511
and ebx, 480
je .Lt_009C
mov dword ptr [ebp-20], 22
jmp .Lt_00E6
.Lt_009C:
mov ebx, dword ptr [ebp+20]
mov eax, dword ptr [ebx+4]
and eax, 511
and eax, 31
mov dword ptr [ebp-20], eax
.Lt_00E6:
mov eax, dword ptr [ebp-20]
mov dword ptr [ebp-24], eax
cmp dword ptr [ebp-24], 18
je .Lt_00A1
.Lt_00A2:
cmp dword ptr [ebp-24], 9
jne .Lt_00A0
.Lt_00A1:
push dword ptr [ebp+20]
push 0
push 16
call ASTNEWOVLCONV
add esp, 12
mov dword ptr [ebp+20], eax
cmp dword ptr [ebp+20], 0
jne .Lt_00A4
jmp .Lt_0097
.Lt_00A4:
.Lt_00A3:
.Lt_00A0:
.Lt_009E:
mov eax, dword ptr [ebp+20]
mov ebx, dword ptr [eax+4]
and ebx, 480
test ebx, ebx
je .Lt_00A6
push 0
push 0
push dword ptr [ebp+20]
push 0
push 8
call ASTNEWCONV
add esp, 20
mov dword ptr [ebp+20], eax
.Lt_00A6:
.Lt_00A5:
mov eax, dword ptr [ebp+20]
mov ebx, dword ptr [eax+4]
and ebx, 511
and ebx, 480
je .Lt_00A7
mov dword ptr [ebp-20], 22
jmp .Lt_00E7
.Lt_00A7:
mov ebx, dword ptr [ebp+20]
mov eax, dword ptr [ebx+4]
and eax, 511
and eax, 31
mov dword ptr [ebp-20], eax
.Lt_00E7:
mov eax, dword ptr [ebp-20]
mov dword ptr [ebp-24], eax
jmp .Lt_00AA
.Lt_00AC:
cmp dword ptr [ebp+24], 0
je .Lt_00AE
push 179
push offset Lt_0077
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_00AD
.Lt_00AE:
push 166
push offset Lt_006A
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
.Lt_00AD:
jmp .Lt_00A9
.Lt_00AF:
cmp dword ptr [ebp+24], 0
je .Lt_00B1
push 180
push offset Lt_0078
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_00B0
.Lt_00B1:
push 167
push offset Lt_006B
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
.Lt_00B0:
jmp .Lt_00A9
.Lt_00B2:
mov eax, dword ptr [ebp+20]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_00B3
mov dword ptr [ebp-28], 22
jmp .Lt_00E8
.Lt_00B3:
mov ebx, dword ptr [ebp+20]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-28], eax
.Lt_00E8:
mov eax, dword ptr [ebp-28]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+20]
mov dword ptr [ebp-32], ebx
jmp .Lt_00B6
.Lt_00B8:
cmp dword ptr [ebp+24], 0
je .Lt_00BA
push 169
push offset Lt_006D
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_00B9
.Lt_00BA:
push 156
push offset Lt_0060
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
.Lt_00B9:
jmp .Lt_00B5
.Lt_00BB:
cmp dword ptr [ebp+24], 0
je .Lt_00BD
push 170
push offset Lt_006E
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_00BC
.Lt_00BD:
push 157
push offset Lt_0061
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
.Lt_00BC:
jmp .Lt_00B5
.Lt_00BE:
cmp dword ptr [ebp+24], 0
je .Lt_00C0
push 171
push offset Lt_006F
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_00BF
.Lt_00C0:
push 158
push offset Lt_0062
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
.Lt_00BF:
jmp .Lt_00B5
.Lt_00C1:
cmp dword ptr [ebp+24], 0
je .Lt_00C3
push 172
push offset Lt_0070
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_00C2
.Lt_00C3:
push 159
push offset Lt_0063
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
.Lt_00C2:
jmp .Lt_00B5
.Lt_00C4:
cmp dword ptr [ebp+24], 0
je .Lt_00C6
push 173
push offset Lt_0071
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_00C5
.Lt_00C6:
push 160
push offset Lt_0064
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
.Lt_00C5:
jmp .Lt_00B5
.Lt_00C7:
cmp dword ptr [ebp+24], 0
je .Lt_00C9
push 174
push offset Lt_0072
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_00C8
.Lt_00C9:
push 161
push offset Lt_0065
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
.Lt_00C8:
jmp .Lt_00B5
.Lt_00CA:
cmp dword ptr [ebp+24], 0
je .Lt_00CC
push 175
push offset Lt_0073
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_00CB
.Lt_00CC:
push 162
push offset Lt_0066
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
.Lt_00CB:
jmp .Lt_00B5
.Lt_00CD:
cmp dword ptr [ebp+24], 0
je .Lt_00CF
push 176
push offset Lt_0074
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_00CE
.Lt_00CF:
push 163
push offset Lt_0067
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
.Lt_00CE:
jmp .Lt_00B5
.Lt_00B6:
cmp dword ptr [ebp-32], 7
ja .Lt_00B5
mov eax, dword ptr [ebp-32]
jmp dword ptr [.LT_00D0+eax*4]
.LT_00D0:
.int .Lt_00B8
.int .Lt_00BB
.int .Lt_00BE
.int .Lt_00C1
.int .Lt_00C4
.int .Lt_00C7
.int .Lt_00CA
.int .Lt_00CD
.Lt_00B5:
jmp .Lt_00A9
.Lt_00D1:
cmp dword ptr [ebp+24], 0
je .Lt_00D3
push 177
push offset Lt_0075
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_00D2
.Lt_00D3:
push 164
push offset Lt_0068
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
.Lt_00D2:
jmp .Lt_00A9
.Lt_00D4:
cmp dword ptr [ebp+24], 0
je .Lt_00D6
push 178
push offset Lt_0076
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_00D5
.Lt_00D6:
push 165
push offset Lt_0069
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
.Lt_00D5:
jmp .Lt_00A9
.Lt_00D7:
jmp .Lt_0097
jmp .Lt_00A9
.Lt_00AA:
mov eax, dword ptr [ebp-24]
add eax, 4294967295
cmp eax, 16
ja .Lt_00D7
mov eax, dword ptr [ebp-24]
jmp dword ptr [.LT_00D8+eax*4-4]
.LT_00D8:
.int .Lt_00B2
.int .Lt_00B2
.int .Lt_00AC
.int .Lt_00B2
.int .Lt_00B2
.int .Lt_00AF
.int .Lt_00B2
.int .Lt_00B2
.int .Lt_00B2
.int .Lt_00B2
.int .Lt_00B2
.int .Lt_00B2
.int .Lt_00B2
.int .Lt_00D1
.int .Lt_00D4
.int .Lt_00AC
.int .Lt_00AC
.Lt_00A9:
.Lt_0098:
push 0
push dword ptr [ebp-12]
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-8], eax
push -1
push -2147483648
push dword ptr [ebp+8]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00DA
jmp .Lt_0097
.Lt_00DA:
.Lt_00D9:
cmp dword ptr [ebp+20], 0
je .Lt_00DC
push -1
push -2147483648
push dword ptr [ebp+20]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00DE
jmp .Lt_0097
.Lt_00DE:
.Lt_00DD:
.Lt_00DC:
.Lt_00DB:
mov dword ptr [ebp-16], 0
cmp dword ptr [ENV+136], 3
jne .Lt_00E0
or dword ptr [ebp-16], 16
.Lt_00E0:
cmp dword ptr [ebp+12], 0
je .Lt_00E2
or dword ptr [ebp-16], 2
jmp .Lt_00E1
.Lt_00E2:
cmp dword ptr [ebp+16], 0
jne .Lt_00E3
or dword ptr [ebp-16], 1
.Lt_00E3:
.Lt_00E1:
push -1
push -2147483648
push 0
push 7
mov ebx, dword ptr [ebp-16]
mov eax, ebx
sar eax, 31
push eax
push ebx
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00E5
jmp .Lt_0097
.Lt_00E5:
.Lt_00E4:
push dword ptr [ebp-8]
call ASTADD
add esp, 4
mov dword ptr [ebp-4], -1
.Lt_0097:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size RTLPRINT, .-RTLPRINT
.balign 16

.globl RTLPRINTSPCTAB
RTLPRINTSPCTAB:
.type RTLPRINTSPCTAB, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_00E9:
mov dword ptr [ebp-4], 0
cmp dword ptr [ebp+20], 0
je .Lt_00EC
push 0
call RTLPRINTER_CB
add esp, 4
.Lt_00EC:
.Lt_00EB:
cmp dword ptr [ebp+16], 0
je .Lt_00EE
push 0
push 182
push offset Lt_007A
call RTLPROCLOOKUP
add esp, 8
push eax
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-8], eax
jmp .Lt_00ED
.Lt_00EE:
push 0
push 181
push offset Lt_0079
call RTLPROCLOOKUP
add esp, 8
push eax
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-8], eax
.Lt_00ED:
push -1
push -2147483648
push dword ptr [ebp+8]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00F0
jmp .Lt_00EA
.Lt_00F0:
.Lt_00EF:
push -1
push -2147483648
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00F2
jmp .Lt_00EA
.Lt_00F2:
.Lt_00F1:
push dword ptr [ebp-8]
call ASTADD
add esp, 4
mov dword ptr [ebp-4], -1
.Lt_00EA:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size RTLPRINTSPCTAB, .-RTLPRINTSPCTAB
.balign 16

.globl RTLWRITE
RTLWRITE:
.type RTLWRITE, @function
push ebp
mov ebp, esp
sub esp, 32
push ebx
mov dword ptr [ebp-4], 0
.Lt_00F3:
mov dword ptr [ebp-4], 0
cmp dword ptr [ebp+16], 0
jne .Lt_00F6
push 183
push offset Lt_007B
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_00F5
.Lt_00F6:
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+4]
and ebx, 511
mov dword ptr [ebp-20], ebx
cmp dword ptr [ebp-20], 18
je .Lt_00FA
.Lt_00FB:
cmp dword ptr [ebp-20], 9
jne .Lt_00F9
.Lt_00FA:
push dword ptr [ebp+16]
push 0
push 16
call ASTNEWOVLCONV
add esp, 12
mov dword ptr [ebp+16], eax
cmp dword ptr [ebp+16], 0
jne .Lt_00FD
jmp .Lt_00F4
.Lt_00FD:
.Lt_00FC:
.Lt_00F9:
.Lt_00F7:
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+4]
and ebx, 480
test ebx, ebx
je .Lt_00FF
push 0
push 0
push dword ptr [ebp+16]
push 0
push 8
call ASTNEWCONV
add esp, 20
mov dword ptr [ebp+16], eax
.Lt_00FF:
.Lt_00FE:
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+4]
and ebx, 511
and ebx, 480
je .Lt_0100
mov dword ptr [ebp-20], 22
jmp .Lt_0124
.Lt_0100:
mov ebx, dword ptr [ebp+16]
mov eax, dword ptr [ebx+4]
and eax, 511
and eax, 31
mov dword ptr [ebp-20], eax
.Lt_0124:
mov eax, dword ptr [ebp-20]
mov dword ptr [ebp-24], eax
jmp .Lt_0103
.Lt_0105:
push 194
push offset Lt_0086
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_0102
.Lt_0106:
push 195
push offset Lt_0087
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_0102
.Lt_0107:
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_0108
mov dword ptr [ebp-28], 22
jmp .Lt_0125
.Lt_0108:
mov ebx, dword ptr [ebp+16]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-28], eax
.Lt_0125:
mov eax, dword ptr [ebp-28]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+20]
mov dword ptr [ebp-32], ebx
jmp .Lt_010B
.Lt_010D:
push 184
push offset Lt_007C
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_010A
.Lt_010E:
push 185
push offset Lt_007D
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_010A
.Lt_010F:
push 186
push offset Lt_007E
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_010A
.Lt_0110:
push 187
push offset Lt_007F
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_010A
.Lt_0111:
push 188
push offset Lt_0080
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_010A
.Lt_0112:
push 189
push offset Lt_0081
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_010A
.Lt_0113:
push 190
push offset Lt_0082
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_010A
.Lt_0114:
push 191
push offset Lt_0083
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_010A
.Lt_010B:
cmp dword ptr [ebp-32], 7
ja .Lt_010A
mov eax, dword ptr [ebp-32]
jmp dword ptr [.LT_0115+eax*4]
.LT_0115:
.int .Lt_010D
.int .Lt_010E
.int .Lt_010F
.int .Lt_0110
.int .Lt_0111
.int .Lt_0112
.int .Lt_0113
.int .Lt_0114
.Lt_010A:
jmp .Lt_0102
.Lt_0116:
push 192
push offset Lt_0084
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_0102
.Lt_0117:
push 193
push offset Lt_0085
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_0102
.Lt_0118:
jmp .Lt_00F4
jmp .Lt_0102
.Lt_0103:
mov eax, dword ptr [ebp-24]
add eax, 4294967295
cmp eax, 16
ja .Lt_0118
mov eax, dword ptr [ebp-24]
jmp dword ptr [.LT_0119+eax*4-4]
.LT_0119:
.int .Lt_0107
.int .Lt_0107
.int .Lt_0105
.int .Lt_0107
.int .Lt_0107
.int .Lt_0106
.int .Lt_0107
.int .Lt_0107
.int .Lt_0107
.int .Lt_0107
.int .Lt_0107
.int .Lt_0107
.int .Lt_0107
.int .Lt_0116
.int .Lt_0117
.int .Lt_0105
.int .Lt_0105
.Lt_0102:
.Lt_00F5:
push 0
push dword ptr [ebp-12]
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-8], eax
push -1
push -2147483648
push dword ptr [ebp+8]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_011B
jmp .Lt_00F4
.Lt_011B:
.Lt_011A:
cmp dword ptr [ebp+16], 0
je .Lt_011D
push -1
push -2147483648
push dword ptr [ebp+16]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_011F
jmp .Lt_00F4
.Lt_011F:
.Lt_011E:
.Lt_011D:
.Lt_011C:
mov dword ptr [ebp-16], 0
cmp dword ptr [ebp+12], 0
je .Lt_0121
or dword ptr [ebp-16], 2
jmp .Lt_0120
.Lt_0121:
or dword ptr [ebp-16], 1
.Lt_0120:
push -1
push -2147483648
push 0
push 7
mov ebx, dword ptr [ebp-16]
mov eax, ebx
sar eax, 31
push eax
push ebx
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0123
jmp .Lt_00F4
.Lt_0123:
.Lt_0122:
push dword ptr [ebp-8]
call ASTADD
add esp, 4
mov dword ptr [ebp-4], -1
.Lt_00F4:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size RTLWRITE, .-RTLWRITE
.balign 16

.globl RTLPRINTUSINGINIT
RTLPRINTUSINGINIT:
.type RTLPRINTUSINGINIT, @function
push ebp
mov ebp, esp
sub esp, 12
mov dword ptr [ebp-4], 0
.Lt_0126:
mov dword ptr [ebp-4], 0
cmp dword ptr [ebp+12], 0
je .Lt_0129
push 204
push offset Lt_0090
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_0128
.Lt_0129:
push 196
push offset Lt_0088
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
.Lt_0128:
push 0
push dword ptr [ebp-12]
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-8], eax
push -1
push -2147483648
push dword ptr [ebp+8]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_012B
jmp .Lt_0127
.Lt_012B:
.Lt_012A:
push dword ptr [ebp-8]
call ASTADD
add esp, 4
mov dword ptr [ebp-4], -1
.Lt_0127:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size RTLPRINTUSINGINIT, .-RTLPRINTUSINGINIT
.balign 16

.globl RTLPRINTUSINGEND
RTLPRINTUSINGEND:
.type RTLPRINTUSINGEND, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_012C:
mov dword ptr [ebp-4], 0
cmp dword ptr [ebp+12], 0
je .Lt_012F
push 0
call RTLPRINTER_CB
add esp, 4
.Lt_012F:
.Lt_012E:
push 0
push 203
push offset Lt_008F
call RTLPROCLOOKUP
add esp, 8
push eax
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-8], eax
push -1
push -2147483648
push dword ptr [ebp+8]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0131
jmp .Lt_012D
.Lt_0131:
.Lt_0130:
push dword ptr [ebp-8]
call ASTADD
add esp, 4
mov dword ptr [ebp-4], -1
.Lt_012D:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size RTLPRINTUSINGEND, .-RTLPRINTUSINGEND
.balign 16

.globl RTLPRINTUSING
RTLPRINTUSING:
.type RTLPRINTUSING, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
mov dword ptr [ebp-4], 0
.Lt_0132:
mov dword ptr [ebp-4], 0
cmp dword ptr [ebp+24], 0
je .Lt_0135
push 0
call RTLPRINTER_CB
add esp, 4
.Lt_0135:
.Lt_0134:
cmp dword ptr [ebp+12], 0
jne .Lt_0137
jmp .Lt_0133
.Lt_0137:
.Lt_0136:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 511
mov dword ptr [ebp-20], ebx
cmp dword ptr [ebp-20], 18
je .Lt_013B
.Lt_013C:
cmp dword ptr [ebp-20], 9
jne .Lt_013A
.Lt_013B:
push dword ptr [ebp+12]
push 0
push 15
call ASTNEWOVLCONV
add esp, 12
mov dword ptr [ebp+12], eax
cmp dword ptr [ebp+12], 0
jne .Lt_013E
jmp .Lt_0133
.Lt_013E:
.Lt_013D:
.Lt_013A:
.Lt_0138:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 511
mov dword ptr [ebp-20], ebx
cmp dword ptr [ebp-20], 17
je .Lt_0142
.Lt_0143:
cmp dword ptr [ebp-20], 16
je .Lt_0142
.Lt_0144:
cmp dword ptr [ebp-20], 3
jne .Lt_0141
.Lt_0142:
push 197
push offset Lt_0089
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_013F
.Lt_0141:
cmp dword ptr [ebp-20], 6
jne .Lt_0145
.Lt_0146:
push 198
push offset Lt_008A
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_013F
.Lt_0145:
cmp dword ptr [ebp-20], 14
jne .Lt_0147
.Lt_0148:
push 199
push offset Lt_008B
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_013F
.Lt_0147:
cmp dword ptr [ebp-20], 12
je .Lt_014A
.Lt_014B:
cmp dword ptr [ebp-20], 7
je .Lt_014A
.Lt_014C:
cmp dword ptr [ebp-20], 10
je .Lt_014A
.Lt_014D:
cmp dword ptr [ebp-20], 4
je .Lt_014A
.Lt_014E:
cmp dword ptr [ebp-20], 1
jne .Lt_0149
.Lt_014A:
push 201
push offset Lt_008D
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_013F
.Lt_0149:
cmp dword ptr [ebp-20], 13
je .Lt_0150
.Lt_0151:
cmp dword ptr [ebp-20], 8
je .Lt_0150
.Lt_0152:
cmp dword ptr [ebp-20], 11
je .Lt_0150
.Lt_0153:
cmp dword ptr [ebp-20], 5
je .Lt_0150
.Lt_0154:
cmp dword ptr [ebp-20], 2
jne .Lt_014F
.Lt_0150:
push 202
push offset Lt_008E
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_013F
.Lt_014F:
push 200
push offset Lt_008C
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
.Lt_0155:
.Lt_013F:
push 0
push dword ptr [ebp-12]
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-8], eax
push -1
push -2147483648
push dword ptr [ebp+8]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0157
jmp .Lt_0133
.Lt_0157:
.Lt_0156:
push -1
push -2147483648
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0159
jmp .Lt_0133
.Lt_0159:
.Lt_0158:
mov eax, dword ptr [ebp+20]
or eax, dword ptr [ebp+16]
je .Lt_015B
mov dword ptr [ebp-16], 0
jmp .Lt_015A
.Lt_015B:
mov dword ptr [ebp-16], -2147483647
.Lt_015A:
push -1
push -2147483648
push 0
push 7
mov ebx, dword ptr [ebp-16]
mov eax, ebx
sar eax, 31
push eax
push ebx
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_015D
jmp .Lt_0133
.Lt_015D:
.Lt_015C:
push dword ptr [ebp-8]
call ASTADD
add esp, 4
mov dword ptr [ebp-4], -1
.Lt_0133:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size RTLPRINTUSING, .-RTLPRINTUSING
.balign 16

.globl RTLWIDTHDEV
RTLWIDTHDEV:
.type RTLWIDTHDEV, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_015E:
mov dword ptr [ebp-4], 0
push 0
call RTLPRINTER_CB
add esp, 4
push 0
push 279
push offset Lt_0160
call RTLPROCLOOKUP
add esp, 8
push eax
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-8], eax
push -1
push -2147483648
push dword ptr [ebp+8]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0162
jmp .Lt_015F
.Lt_0162:
.Lt_0161:
push -1
push -2147483648
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0164
jmp .Lt_015F
.Lt_0164:
.Lt_0163:
cmp dword ptr [ebp+16], 0
jne .Lt_0166
push dword ptr [ebp-8]
call RTLERRORCHECK
add esp, 4
push eax
call ASTADD
add esp, 4
.Lt_0166:
.Lt_0165:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_015F:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size RTLWIDTHDEV, .-RTLWIDTHDEV
.balign 16

.globl RTLPRINTER_CB
RTLPRINTER_CB:
.type RTLPRINTER_CB, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_0167:
cmp dword ptr [Lt_0172], 0
jne .Lt_016A
mov dword ptr [Lt_0172], -1
mov eax, dword ptr [ENV+108]
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
je .Lt_016E
.Lt_016F:
cmp dword ptr [ebp-8], 1
jne .Lt_016D
.Lt_016E:
push offset Lt_0170
call FBADDLIB
add esp, 4
push offset Lt_0171
call FBADDLIB
add esp, 4
.Lt_016D:
.Lt_016B:
.Lt_016A:
.Lt_0169:
mov dword ptr [ebp-4], -1
.Lt_0168:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size RTLPRINTER_CB, .-RTLPRINTER_CB

.section .data
.balign 4
Lt_0172:
.int 0

.section .text
.balign 16
fb_ctor__rtlzprint:
.type fb_ctor__rtlzprint, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__rtlzprint, .-fb_ctor__rtlzprint
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
	#fbc-1.01.0/src/compiler/rtl-print.bas' compilation took 0.03530490538105369 secs

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

.section .data
.balign 4
FUNCDATA:
.int Lt_005F
.long 0
.int 0
.int -1
.long 0
.int 0
.int 2
.int 10
.int 1
.int -1
.int 0
.skip 4,0
.int 10
.int 1
.int 0
.skip 8,0
.skip 280,0
.int Lt_0060
.long 0
.int 0
.int -1
.long 0
.int 0
.int 3
.int 10
.int 1
.int -1
.int 0
.skip 4,0
.int 1
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.skip 260,0
.int Lt_0061
.long 0
.int 0
.int -1
.long 0
.int 0
.int 3
.int 10
.int 1
.int -1
.int 0
.skip 4,0
.int 2
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.skip 260,0
.int Lt_0062
.long 0
.int 0
.int -1
.long 0
.int 0
.int 3
.int 10
.int 1
.int -1
.int 0
.skip 4,0
.int 4
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.skip 260,0
.int Lt_0063
.long 0
.int 0
.int -1
.long 0
.int 0
.int 3
.int 10
.int 1
.int -1
.int 0
.skip 4,0
.int 5
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.skip 260,0
.int Lt_0064
.long 0
.int 0
.int -1
.long 0
.int 0
.int 3
.int 10
.int 1
.int -1
.int 0
.skip 4,0
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.skip 260,0
.int Lt_0065
.long 0
.int 0
.int -1
.long 0
.int 0
.int 3
.int 10
.int 1
.int -1
.int 0
.skip 4,0
.int 11
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.skip 260,0
.int Lt_0066
.long 0
.int 0
.int -1
.long 0
.int 0
.int 3
.int 10
.int 1
.int -1
.int 0
.skip 4,0
.int 12
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.skip 260,0
.int Lt_0067
.long 0
.int 0
.int -1
.long 0
.int 0
.int 3
.int 10
.int 1
.int -1
.int 0
.skip 4,0
.int 13
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.skip 260,0
.int Lt_0068
.long 0
.int 0
.int -1
.long 0
.int 0
.int 3
.int 10
.int 1
.int -1
.int 0
.skip 4,0
.int 14
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.skip 260,0
.int Lt_0069
.long 0
.int 0
.int -1
.long 0
.int 0
.int 3
.int 10
.int 1
.int -1
.int 0
.skip 4,0
.int 15
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.skip 260,0
.int Lt_006A
.long 0
.int 0
.int -1
.long 0
.int 0
.int 3
.int 10
.int 1
.int -1
.int 0
.skip 4,0
.int 16
.int 2
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.skip 260,0
.int Lt_006B
.long 0
.int 0
.int -1
.long 0
.int 0
.int 3
.int 10
.int 1
.int -1
.int 0
.skip 4,0
.int 38
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.skip 260,0
.int Lt_006C
.long 0
.int 0
.int -1
.int RTLPRINTER_CB
.int 0
.int 2
.int 10
.int 1
.int -1
.int 0
.skip 4,0
.int 10
.int 1
.int 0
.skip 8,0
.skip 280,0
.int Lt_006D
.long 0
.int 0
.int -1
.int RTLPRINTER_CB
.int 0
.int 3
.int 10
.int 1
.int -1
.int 0
.skip 4,0
.int 1
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.skip 260,0
.int Lt_006E
.long 0
.int 0
.int -1
.int RTLPRINTER_CB
.int 0
.int 3
.int 10
.int 1
.int -1
.int 0
.skip 4,0
.int 2
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.skip 260,0
.int Lt_006F
.long 0
.int 0
.int -1
.int RTLPRINTER_CB
.int 0
.int 3
.int 10
.int 1
.int -1
.int 0
.skip 4,0
.int 4
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.skip 260,0
.int Lt_0070
.long 0
.int 0
.int -1
.int RTLPRINTER_CB
.int 0
.int 3
.int 10
.int 1
.int -1
.int 0
.skip 4,0
.int 5
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.skip 260,0
.int Lt_0071
.long 0
.int 0
.int -1
.int RTLPRINTER_CB
.int 0
.int 3
.int 10
.int 1
.int -1
.int 0
.skip 4,0
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.skip 260,0
.int Lt_0072
.long 0
.int 0
.int -1
.int RTLPRINTER_CB
.int 0
.int 3
.int 10
.int 1
.int -1
.int 0
.skip 4,0
.int 11
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.skip 260,0
.int Lt_0073
.long 0
.int 0
.int -1
.int RTLPRINTER_CB
.int 0
.int 3
.int 10
.int 1
.int -1
.int 0
.skip 4,0
.int 12
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.skip 260,0
.int Lt_0074
.long 0
.int 0
.int -1
.int RTLPRINTER_CB
.int 0
.int 3
.int 10
.int 1
.int -1
.int 0
.skip 4,0
.int 13
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.skip 260,0
.int Lt_0075
.long 0
.int 0
.int -1
.int RTLPRINTER_CB
.int 0
.int 3
.int 10
.int 1
.int -1
.int 0
.skip 4,0
.int 14
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.skip 260,0
.int Lt_0076
.long 0
.int 0
.int -1
.int RTLPRINTER_CB
.int 0
.int 3
.int 10
.int 1
.int -1
.int 0
.skip 4,0
.int 15
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.skip 260,0
.int Lt_0077
.long 0
.int 0
.int -1
.int RTLPRINTER_CB
.int 0
.int 3
.int 10
.int 1
.int -1
.int 0
.skip 4,0
.int 16
.int 2
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.skip 260,0
.int Lt_0078
.long 0
.int 0
.int -1
.int RTLPRINTER_CB
.int 0
.int 3
.int 10
.int 1
.int -1
.int 0
.skip 4,0
.int 38
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.skip 260,0
.int Lt_0079
.long 0
.int 0
.int -1
.long 0
.int 0
.int 2
.int 10
.int 1
.int -1
.int 0
.skip 4,0
.int 7
.int 1
.int 0
.skip 8,0
.skip 280,0
.int Lt_007A
.long 0
.int 0
.int -1
.long 0
.int 0
.int 2
.int 10
.int 1
.int -1
.int 0
.skip 4,0
.int 10
.int 1
.int 0
.skip 8,0
.skip 280,0
.int Lt_007B
.long 0
.int 0
.int -1
.long 0
.int 0
.int 2
.int 10
.int 1
.int -1
.int 0
.skip 4,0
.int 10
.int 1
.int 0
.skip 8,0
.skip 280,0
.int Lt_007C
.long 0
.int 0
.int -1
.long 0
.int 0
.int 3
.int 10
.int 1
.int -1
.int 0
.skip 4,0
.int 1
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.skip 260,0
.int Lt_007D
.long 0
.int 0
.int -1
.long 0
.int 0
.int 3
.int 10
.int 1
.int -1
.int 0
.skip 4,0
.int 2
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.skip 260,0
.int Lt_007E
.long 0
.int 0
.int -1
.long 0
.int 0
.int 3
.int 10
.int 1
.int -1
.int 0
.skip 4,0
.int 4
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.skip 260,0
.int Lt_007F
.long 0
.int 0
.int -1
.long 0
.int 0
.int 3
.int 10
.int 1
.int -1
.int 0
.skip 4,0
.int 5
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.skip 260,0
.int Lt_0080
.long 0
.int 0
.int -1
.long 0
.int 0
.int 3
.int 10
.int 1
.int -1
.int 0
.skip 4,0
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.skip 260,0
.int Lt_0081
.long 0
.int 0
.int -1
.long 0
.int 0
.int 3
.int 10
.int 1
.int -1
.int 0
.skip 4,0
.int 11
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.skip 260,0
.int Lt_0082
.long 0
.int 0
.int -1
.long 0
.int 0
.int 3
.int 10
.int 1
.int -1
.int 0
.skip 4,0
.int 12
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.skip 260,0
.int Lt_0083
.long 0
.int 0
.int -1
.long 0
.int 0
.int 3
.int 10
.int 1
.int -1
.int 0
.skip 4,0
.int 13
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.skip 260,0
.int Lt_0084
.long 0
.int 0
.int -1
.long 0
.int 0
.int 3
.int 10
.int 1
.int -1
.int 0
.skip 4,0
.int 14
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.skip 260,0
.int Lt_0085
.long 0
.int 0
.int -1
.long 0
.int 0
.int 3
.int 10
.int 1
.int -1
.int 0
.skip 4,0
.int 15
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.skip 260,0
.int Lt_0086
.long 0
.int 0
.int -1
.long 0
.int 0
.int 3
.int 10
.int 1
.int -1
.int 0
.skip 4,0
.int 16
.int 2
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.skip 260,0
.int Lt_0087
.long 0
.int 0
.int -1
.long 0
.int 0
.int 3
.int 10
.int 1
.int -1
.int 0
.skip 4,0
.int 38
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.skip 260,0
.int Lt_0088
.long 0
.int 10
.int -1
.long 0
.int 0
.int 1
.int 16
.int 2
.int 0
.skip 8,0
.skip 300,0
.int Lt_0089
.long 0
.int 10
.int -1
.long 0
.int 0
.int 3
.int 10
.int 1
.int 0
.skip 8,0
.int 16
.int 2
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.skip 260,0
.int Lt_008A
.long 0
.int 10
.int -1
.long 0
.int 0
.int 3
.int 10
.int 1
.int 0
.skip 8,0
.int 38
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.skip 260,0
.int Lt_008B
.long 0
.int 10
.int -1
.long 0
.int 0
.int 3
.int 10
.int 1
.int 0
.skip 8,0
.int 14
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.skip 260,0
.int Lt_008C
.long 0
.int 10
.int -1
.long 0
.int 0
.int 3
.int 10
.int 1
.int 0
.skip 8,0
.int 15
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.skip 260,0
.int Lt_008D
.long 0
.int 10
.int -1
.long 0
.int 0
.int 3
.int 10
.int 1
.int 0
.skip 8,0
.int 12
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.skip 260,0
.int Lt_008E
.long 0
.int 10
.int -1
.long 0
.int 0
.int 3
.int 10
.int 1
.int 0
.skip 8,0
.int 13
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.skip 260,0
.int Lt_008F
.long 0
.int 10
.int -1
.long 0
.int 0
.int 1
.int 10
.int 1
.int 0
.skip 8,0
.skip 300,0
.int Lt_0090
.long 0
.int 10
.int -1
.int RTLPRINTER_CB
.int 0
.int 1
.int 16
.int 2
.int 0
.skip 8,0
.skip 300,0
.long 0
.skip 344,0

.section .rodata
.balign 4
Lt_005F:	.ascii	"fb_PrintVoid\0"
.balign 4
Lt_0060:	.ascii	"fb_PrintByte\0"
.balign 4
Lt_0061:	.ascii	"fb_PrintUByte\0"
.balign 4
Lt_0062:	.ascii	"fb_PrintShort\0"
.balign 4
Lt_0063:	.ascii	"fb_PrintUShort\0"
.balign 4
Lt_0064:	.ascii	"fb_PrintInt\0"
.balign 4
Lt_0065:	.ascii	"fb_PrintUInt\0"
.balign 4
Lt_0066:	.ascii	"fb_PrintLongint\0"
.balign 4
Lt_0067:	.ascii	"fb_PrintULongint\0"
.balign 4
Lt_0068:	.ascii	"fb_PrintSingle\0"
.balign 4
Lt_0069:	.ascii	"fb_PrintDouble\0"
.balign 4
Lt_006A:	.ascii	"fb_PrintString\0"
.balign 4
Lt_006B:	.ascii	"fb_PrintWstr\0"
.balign 4
Lt_006C:	.ascii	"fb_LPrintVoid\0"
.balign 4
Lt_006D:	.ascii	"fb_LPrintByte\0"
.balign 4
Lt_006E:	.ascii	"fb_LPrintUByte\0"
.balign 4
Lt_006F:	.ascii	"fb_LPrintShort\0"
.balign 4
Lt_0070:	.ascii	"fb_LPrintUShort\0"
.balign 4
Lt_0071:	.ascii	"fb_LPrintInt\0"
.balign 4
Lt_0072:	.ascii	"fb_LPrintUInt\0"
.balign 4
Lt_0073:	.ascii	"fb_LPrintLongint\0"
.balign 4
Lt_0074:	.ascii	"fb_LPrintULongint\0"
.balign 4
Lt_0075:	.ascii	"fb_LPrintSingle\0"
.balign 4
Lt_0076:	.ascii	"fb_LPrintDouble\0"
.balign 4
Lt_0077:	.ascii	"fb_LPrintString\0"
.balign 4
Lt_0078:	.ascii	"fb_LPrintWstr\0"
.balign 4
Lt_0079:	.ascii	"fb_PrintSPC\0"
.balign 4
Lt_007A:	.ascii	"fb_PrintTab\0"
.balign 4
Lt_007B:	.ascii	"fb_WriteVoid\0"
.balign 4
Lt_007C:	.ascii	"fb_WriteByte\0"
.balign 4
Lt_007D:	.ascii	"fb_WriteUByte\0"
.balign 4
Lt_007E:	.ascii	"fb_WriteShort\0"
.balign 4
Lt_007F:	.ascii	"fb_WriteUShort\0"
.balign 4
Lt_0080:	.ascii	"fb_WriteInt\0"
.balign 4
Lt_0081:	.ascii	"fb_WriteUInt\0"
.balign 4
Lt_0082:	.ascii	"fb_WriteLongint\0"
.balign 4
Lt_0083:	.ascii	"fb_WriteULongint\0"
.balign 4
Lt_0084:	.ascii	"fb_WriteSingle\0"
.balign 4
Lt_0085:	.ascii	"fb_WriteDouble\0"
.balign 4
Lt_0086:	.ascii	"fb_WriteString\0"
.balign 4
Lt_0087:	.ascii	"fb_WriteWstr\0"
.balign 4
Lt_0088:	.ascii	"fb_PrintUsingInit\0"
.balign 4
Lt_0089:	.ascii	"fb_PrintUsingStr\0"
.balign 4
Lt_008A:	.ascii	"fb_PrintUsingWstr\0"
.balign 4
Lt_008B:	.ascii	"fb_PrintUsingSingle\0"
.balign 4
Lt_008C:	.ascii	"fb_PrintUsingDouble\0"
.balign 4
Lt_008D:	.ascii	"fb_PrintUsingLongint\0"
.balign 4
Lt_008E:	.ascii	"fb_PrintUsingULongint\0"
.balign 4
Lt_008F:	.ascii	"fb_PrintUsingEnd\0"
.balign 4
Lt_0090:	.ascii	"fb_LPrintUsingInit\0"
.balign 4
Lt_0160:	.ascii	"fb_WidthDev\0"
.balign 4
Lt_0170:	.ascii	"winspool\0"
.balign 4
Lt_0171:	.ascii	"gdi32\0"

.section .ctors, "aw", @progbits
.int fb_ctor__rtlzprint
