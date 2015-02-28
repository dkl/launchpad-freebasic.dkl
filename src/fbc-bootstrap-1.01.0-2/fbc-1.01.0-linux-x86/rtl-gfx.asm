	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/rtl-gfx.bas' compilation started at 15:27:37 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl RTLGFXMODINIT
RTLGFXMODINIT:
.type RTLGFXMODINIT, @function
.Lt_00C0:
push offset FUNCDATA
call RTLADDINTRINSICPROCS
add esp, 4
.Lt_00C1:
ret
.size RTLGFXMODINIT, .-RTLGFXMODINIT
.balign 16

.globl RTLGFXMODEND
RTLGFXMODEND:
.type RTLGFXMODEND, @function
.Lt_00C2:
.Lt_00C3:
ret
.size RTLGFXMODEND, .-RTLGFXMODEND
.balign 16

.globl RTLGFXPSET
RTLGFXPSET:
.type RTLGFXPSET, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_00E0:
mov dword ptr [ebp-4], 0
push 0
push 290
push offset Lt_005F
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
jne .Lt_00E3
jmp .Lt_00E1
.Lt_00E3:
.Lt_00E2:
push -1
push -2147483648
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00E5
jmp .Lt_00E1
.Lt_00E5:
.Lt_00E4:
push -1
push -2147483648
push dword ptr [ebp+16]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00E7
jmp .Lt_00E1
.Lt_00E7:
.Lt_00E6:
push -1
push -2147483648
push dword ptr [ebp+20]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00E9
jmp .Lt_00E1
.Lt_00E9:
.Lt_00E8:
push -1
push -2147483648
push 0
push 7
mov ebx, dword ptr [ebp+24]
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
jne .Lt_00EB
jmp .Lt_00E1
.Lt_00EB:
.Lt_00EA:
push -1
push -2147483648
push 0
push 7
mov ebx, dword ptr [ebp+28]
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
jne .Lt_00ED
jmp .Lt_00E1
.Lt_00ED:
.Lt_00EC:
push dword ptr [ebp-8]
call ASTADD
add esp, 4
mov dword ptr [ebp-4], -1
.Lt_00E1:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size RTLGFXPSET, .-RTLGFXPSET
.balign 16

.globl RTLGFXPOINT
RTLGFXPOINT:
.type RTLGFXPOINT, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_00EE:
mov dword ptr [ebp-4], 0
push 0
push 291
push offset Lt_0060
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
jne .Lt_00F1
jmp .Lt_00EF
.Lt_00F1:
.Lt_00F0:
push -1
push -2147483648
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00F3
jmp .Lt_00EF
.Lt_00F3:
.Lt_00F2:
cmp dword ptr [ebp+16], 0
jne .Lt_00F5
push 14
push dword ptr [Lt_00F8+4]
push dword ptr [Lt_00F8]
call ASTNEWCONSTF
add esp, 12
mov dword ptr [ebp+16], eax
.Lt_00F5:
.Lt_00F4:
push -1
push -2147483648
push dword ptr [ebp+16]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00F7
jmp .Lt_00EF
.Lt_00F7:
.Lt_00F6:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_00EF:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size RTLGFXPOINT, .-RTLGFXPOINT
.balign 16

.globl RTLGFXLINE
RTLGFXLINE:
.type RTLGFXLINE, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_00F9:
mov dword ptr [ebp-4], 0
push 0
push 292
push offset Lt_0061
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
jne .Lt_00FC
jmp .Lt_00FA
.Lt_00FC:
.Lt_00FB:
push -1
push -2147483648
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00FE
jmp .Lt_00FA
.Lt_00FE:
.Lt_00FD:
push -1
push -2147483648
push dword ptr [ebp+16]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0100
jmp .Lt_00FA
.Lt_0100:
.Lt_00FF:
push -1
push -2147483648
push dword ptr [ebp+20]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0102
jmp .Lt_00FA
.Lt_0102:
.Lt_0101:
push -1
push -2147483648
push dword ptr [ebp+24]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0104
jmp .Lt_00FA
.Lt_0104:
.Lt_0103:
push -1
push -2147483648
push dword ptr [ebp+28]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0106
jmp .Lt_00FA
.Lt_0106:
.Lt_0105:
push -1
push -2147483648
push 0
push 7
mov ebx, dword ptr [ebp+32]
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
jne .Lt_0108
jmp .Lt_00FA
.Lt_0108:
.Lt_0107:
push -1
push -2147483648
push dword ptr [ebp+36]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_010A
jmp .Lt_00FA
.Lt_010A:
.Lt_0109:
push -1
push -2147483648
push 0
push 7
mov ebx, dword ptr [ebp+40]
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
jne .Lt_010C
jmp .Lt_00FA
.Lt_010C:
.Lt_010B:
push dword ptr [ebp-8]
call ASTADD
add esp, 4
mov dword ptr [ebp-4], -1
.Lt_00FA:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size RTLGFXLINE, .-RTLGFXLINE
.balign 16

.globl RTLGFXCIRCLE
RTLGFXCIRCLE:
.type RTLGFXCIRCLE, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_010D:
mov dword ptr [ebp-4], 0
push 0
push 293
push offset Lt_0062
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
jne .Lt_0110
jmp .Lt_010E
.Lt_0110:
.Lt_010F:
push -1
push -2147483648
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0112
jmp .Lt_010E
.Lt_0112:
.Lt_0111:
push -1
push -2147483648
push dword ptr [ebp+16]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0114
jmp .Lt_010E
.Lt_0114:
.Lt_0113:
push -1
push -2147483648
push dword ptr [ebp+20]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0116
jmp .Lt_010E
.Lt_0116:
.Lt_0115:
push -1
push -2147483648
push dword ptr [ebp+24]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0118
jmp .Lt_010E
.Lt_0118:
.Lt_0117:
cmp dword ptr [ebp+28], 0
jne .Lt_011A
push 14
push dword ptr [Lt_0129+4]
push dword ptr [Lt_0129]
call ASTNEWCONSTF
add esp, 12
mov dword ptr [ebp+28], eax
.Lt_011A:
.Lt_0119:
push -1
push -2147483648
push dword ptr [ebp+28]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_011C
jmp .Lt_010E
.Lt_011C:
.Lt_011B:
cmp dword ptr [ebp+32], 0
jne .Lt_011E
push 14
push dword ptr [Lt_0129+4]
push dword ptr [Lt_0129]
call ASTNEWCONSTF
add esp, 12
mov dword ptr [ebp+32], eax
.Lt_011E:
.Lt_011D:
push -1
push -2147483648
push dword ptr [ebp+32]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0120
jmp .Lt_010E
.Lt_0120:
.Lt_011F:
cmp dword ptr [ebp+36], 0
jne .Lt_0122
push 14
push dword ptr [Lt_012A+4]
push dword ptr [Lt_012A]
call ASTNEWCONSTF
add esp, 12
mov dword ptr [ebp+36], eax
.Lt_0122:
.Lt_0121:
push -1
push -2147483648
push dword ptr [ebp+36]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0124
jmp .Lt_010E
.Lt_0124:
.Lt_0123:
push -1
push -2147483648
push 0
push 7
mov ebx, dword ptr [ebp+40]
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
jne .Lt_0126
jmp .Lt_010E
.Lt_0126:
.Lt_0125:
push -1
push -2147483648
push 0
push 7
mov ebx, dword ptr [ebp+44]
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
jne .Lt_0128
jmp .Lt_010E
.Lt_0128:
.Lt_0127:
push dword ptr [ebp-8]
call ASTADD
add esp, 4
mov dword ptr [ebp-4], -1
.Lt_010E:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size RTLGFXCIRCLE, .-RTLGFXCIRCLE
.balign 16

.globl RTLGFXPAINT
RTLGFXPAINT:
.type RTLGFXPAINT, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
mov dword ptr [ebp-4], 0
.Lt_012B:
mov dword ptr [ebp-4], 0
push 0
push 294
push offset Lt_0063
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
jne .Lt_012E
jmp .Lt_012C
.Lt_012E:
.Lt_012D:
push -1
push -2147483648
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0130
jmp .Lt_012C
.Lt_0130:
.Lt_012F:
push -1
push -2147483648
push dword ptr [ebp+16]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0132
jmp .Lt_012C
.Lt_0132:
.Lt_0131:
mov eax, dword ptr [ebp+20]
mov ebx, dword ptr [eax+4]
and ebx, 511
push ebx
call SYMBISSTRING
add esp, 4
test eax, eax
je .Lt_0134
mov dword ptr [ebp-12], -1
push -1
push -2147483648
push 0
push 7
push 4294967295
push 4294901760
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0136
jmp .Lt_012C
.Lt_0136:
.Lt_0135:
jmp .Lt_0133
.Lt_0134:
mov dword ptr [ebp-12], 0
push -1
push -2147483648
push dword ptr [ebp+20]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0138
jmp .Lt_012C
.Lt_0138:
.Lt_0137:
.Lt_0133:
push -1
push -2147483648
push dword ptr [ebp+24]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_013A
jmp .Lt_012C
.Lt_013A:
.Lt_0139:
cmp dword ptr [ebp-12], 0
je .Lt_013C
push -1
push -2147483648
push dword ptr [ebp+20]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_013E
jmp .Lt_012C
.Lt_013E:
.Lt_013D:
jmp .Lt_013B
.Lt_013C:
push -1
push -2147483648
push 0
push -2147483648
push 0
push 0
push 0
push offset Lt_0000
call SYMBALLOCSTRCONST
add esp, 8
push eax
call ASTNEWVAR
add esp, 20
push eax
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0140
jmp .Lt_012C
.Lt_0140:
.Lt_013F:
.Lt_013B:
push -1
push -2147483648
push 0
push 7
cmp dword ptr [ebp-12], 0
je .Lt_0141
mov dword ptr [ebp-16], 1
jmp .Lt_0147
.Lt_0141:
mov dword ptr [ebp-16], 0
.Lt_0147:
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
jne .Lt_0144
jmp .Lt_012C
.Lt_0144:
.Lt_0143:
push -1
push -2147483648
push 0
push 7
mov ebx, dword ptr [ebp+28]
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
jne .Lt_0146
jmp .Lt_012C
.Lt_0146:
.Lt_0145:
push dword ptr [ebp-8]
call ASTADD
add esp, 4
mov dword ptr [ebp-4], -1
.Lt_012C:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size RTLGFXPAINT, .-RTLGFXPAINT
.balign 16

.globl RTLGFXDRAW
RTLGFXDRAW:
.type RTLGFXDRAW, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_0148:
mov dword ptr [ebp-4], 0
push 0
push 295
push offset Lt_0064
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
jne .Lt_014B
jmp .Lt_0149
.Lt_014B:
.Lt_014A:
push -1
push -2147483648
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_014D
jmp .Lt_0149
.Lt_014D:
.Lt_014C:
push dword ptr [ebp-8]
call ASTADD
add esp, 4
mov dword ptr [ebp-4], -1
.Lt_0149:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size RTLGFXDRAW, .-RTLGFXDRAW
.balign 16

.globl RTLGFXDRAWSTRING
RTLGFXDRAWSTRING:
.type RTLGFXDRAWSTRING, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
mov dword ptr [ebp-4], 0
.Lt_014E:
mov dword ptr [ebp-4], 0
push 0
push 296
push offset Lt_0065
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
jne .Lt_0151
jmp .Lt_014F
.Lt_0151:
.Lt_0150:
push -1
push -2147483648
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0153
jmp .Lt_014F
.Lt_0153:
.Lt_0152:
push -1
push -2147483648
push dword ptr [ebp+16]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0155
jmp .Lt_014F
.Lt_0155:
.Lt_0154:
push -1
push -2147483648
push 0
push 7
mov ebx, dword ptr [ebp+32]
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
jne .Lt_0157
jmp .Lt_014F
.Lt_0157:
.Lt_0156:
push -1
push -2147483648
push dword ptr [ebp+20]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0159
jmp .Lt_014F
.Lt_0159:
.Lt_0158:
cmp dword ptr [ebp+40], 0
je .Lt_015B
mov eax, dword ptr [ebp+40]
mov dword ptr [ebp+24], eax
.Lt_015B:
.Lt_015A:
push -1
push -2147483648
push dword ptr [ebp+24]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_015D
jmp .Lt_014F
.Lt_015D:
.Lt_015C:
push -1
push -2147483648
push dword ptr [ebp+28]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_015F
jmp .Lt_014F
.Lt_015F:
.Lt_015E:
push -1
push -2147483648
push 0
push 7
mov ebx, dword ptr [ebp+36]
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
jne .Lt_0161
jmp .Lt_014F
.Lt_0161:
.Lt_0160:
push -1
push -2147483648
cmp dword ptr [ebp+28], 0
je .Lt_0162
push dword ptr [ebp+36]
call HGETPUTTER
add esp, 4
mov dword ptr [ebp-16], eax
jmp .Lt_016C
.Lt_0162:
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-16], eax
.Lt_016C:
push dword ptr [ebp-16]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0165
jmp .Lt_014F
.Lt_0165:
.Lt_0164:
push -1
push -2147483648
push dword ptr [ebp+44]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0167
jmp .Lt_014F
.Lt_0167:
.Lt_0166:
cmp dword ptr [ebp+48], 0
jne .Lt_0169
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp+48], eax
.Lt_0169:
.Lt_0168:
push -1
push -2147483648
push dword ptr [ebp+48]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_016B
jmp .Lt_014F
.Lt_016B:
.Lt_016A:
push dword ptr [ebp-8]
call RTLERRORCHECK
add esp, 4
push eax
call ASTADD
add esp, 4
mov dword ptr [ebp-4], -1
.Lt_014F:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size RTLGFXDRAWSTRING, .-RTLGFXDRAWSTRING
.balign 16

.globl RTLGFXVIEW
RTLGFXVIEW:
.type RTLGFXVIEW, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_016D:
mov dword ptr [ebp-4], 0
push 0
push 297
push offset Lt_0066
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
jne .Lt_0170
jmp .Lt_016E
.Lt_0170:
.Lt_016F:
push -1
push -2147483648
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0172
jmp .Lt_016E
.Lt_0172:
.Lt_0171:
push -1
push -2147483648
push dword ptr [ebp+16]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0174
jmp .Lt_016E
.Lt_0174:
.Lt_0173:
push -1
push -2147483648
push dword ptr [ebp+20]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0176
jmp .Lt_016E
.Lt_0176:
.Lt_0175:
push -1
push -2147483648
push dword ptr [ebp+24]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0178
jmp .Lt_016E
.Lt_0178:
.Lt_0177:
push -1
push -2147483648
push dword ptr [ebp+28]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_017A
jmp .Lt_016E
.Lt_017A:
.Lt_0179:
push -1
push -2147483648
push 0
push 7
mov ebx, dword ptr [ebp+32]
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
jne .Lt_017C
jmp .Lt_016E
.Lt_017C:
.Lt_017B:
push dword ptr [ebp-8]
call ASTADD
add esp, 4
mov dword ptr [ebp-4], -1
.Lt_016E:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size RTLGFXVIEW, .-RTLGFXVIEW
.balign 16

.globl RTLGFXWINDOW
RTLGFXWINDOW:
.type RTLGFXWINDOW, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_017D:
mov dword ptr [ebp-4], 0
push 0
push 298
push offset Lt_0067
call RTLPROCLOOKUP
add esp, 8
push eax
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp+8], 0
jne .Lt_0180
push 14
push dword ptr [Lt_0129+4]
push dword ptr [Lt_0129]
call ASTNEWCONSTF
add esp, 12
mov dword ptr [ebp+8], eax
.Lt_0180:
.Lt_017F:
push -1
push -2147483648
push dword ptr [ebp+8]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0182
jmp .Lt_017E
.Lt_0182:
.Lt_0181:
cmp dword ptr [ebp+12], 0
jne .Lt_0184
push 14
push dword ptr [Lt_0129+4]
push dword ptr [Lt_0129]
call ASTNEWCONSTF
add esp, 12
mov dword ptr [ebp+12], eax
.Lt_0184:
.Lt_0183:
push -1
push -2147483648
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0186
jmp .Lt_017E
.Lt_0186:
.Lt_0185:
cmp dword ptr [ebp+16], 0
jne .Lt_0188
push 14
push dword ptr [Lt_0129+4]
push dword ptr [Lt_0129]
call ASTNEWCONSTF
add esp, 12
mov dword ptr [ebp+16], eax
.Lt_0188:
.Lt_0187:
push -1
push -2147483648
push dword ptr [ebp+16]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_018A
jmp .Lt_017E
.Lt_018A:
.Lt_0189:
cmp dword ptr [ebp+20], 0
jne .Lt_018C
push 14
push dword ptr [Lt_0129+4]
push dword ptr [Lt_0129]
call ASTNEWCONSTF
add esp, 12
mov dword ptr [ebp+20], eax
.Lt_018C:
.Lt_018B:
push -1
push -2147483648
push dword ptr [ebp+20]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_018E
jmp .Lt_017E
.Lt_018E:
.Lt_018D:
push -1
push -2147483648
push 0
push 7
mov ebx, dword ptr [ebp+24]
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
jne .Lt_0190
jmp .Lt_017E
.Lt_0190:
.Lt_018F:
push dword ptr [ebp-8]
call ASTADD
add esp, 4
mov dword ptr [ebp-4], -1
.Lt_017E:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size RTLGFXWINDOW, .-RTLGFXWINDOW
.balign 16

.globl RTLGFXPALETTE
RTLGFXPALETTE:
.type RTLGFXPALETTE, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
mov dword ptr [ebp-4], 0
.Lt_0191:
mov dword ptr [ebp-4], 0
cmp dword ptr [ebp+24], 0
je .Lt_0194
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 511
and ebx, 480
je .Lt_0195
mov dword ptr [ebp-24], 22
jmp .Lt_01A7
.Lt_0195:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 511
and eax, 31
mov dword ptr [ebp-24], eax
.Lt_01A7:
mov eax, dword ptr [ebp-24]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+4], 8
jne .Lt_0198
push 303
push offset Lt_006C
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_0197
.Lt_0198:
push 302
push offset Lt_006B
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
.Lt_0197:
jmp .Lt_0193
.Lt_0194:
push 299
push offset Lt_0068
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
.Lt_0193:
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
jne .Lt_019A
jmp .Lt_0192
.Lt_019A:
.Lt_0199:
cmp dword ptr [ebp+12], 0
jne .Lt_019C
push 0
push 7
push 4294967295
push 4294967295
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp+12], eax
.Lt_019C:
.Lt_019B:
push -1
push -2147483648
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_019E
jmp .Lt_0192
.Lt_019E:
.Lt_019D:
cmp dword ptr [ebp+16], 0
je .Lt_01A0
mov dword ptr [ebp-20], -1
jmp .Lt_019F
.Lt_01A0:
cmp dword ptr [ebp+24], 0
je .Lt_01A2
mov dword ptr [ebp-16], 0
jmp .Lt_01A1
.Lt_01A2:
mov dword ptr [ebp-16], -1
.Lt_01A1:
push 0
push 7
mov ebx, dword ptr [ebp-16]
mov eax, ebx
sar eax, 31
push eax
push ebx
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp+16], eax
push 0
push 7
mov ebx, dword ptr [ebp-16]
mov eax, ebx
sar eax, 31
push eax
push ebx
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp+20], eax
mov dword ptr [ebp-20], 1
.Lt_019F:
push dword ptr [ebp-20]
push -2147483648
push dword ptr [ebp+16]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_01A4
jmp .Lt_0192
.Lt_01A4:
.Lt_01A3:
push dword ptr [ebp-20]
push -2147483648
push dword ptr [ebp+20]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_01A6
jmp .Lt_0192
.Lt_01A6:
.Lt_01A5:
push dword ptr [ebp-8]
call ASTADD
add esp, 4
mov dword ptr [ebp-4], -1
.Lt_0192:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size RTLGFXPALETTE, .-RTLGFXPALETTE
.balign 16

.globl RTLGFXPALETTEUSING
RTLGFXPALETTEUSING:
.type RTLGFXPALETTEUSING, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
mov dword ptr [ebp-4], 0
.Lt_01A8:
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 511
and ebx, 480
je .Lt_01AA
mov dword ptr [ebp-16], 22
jmp .Lt_01B4
.Lt_01AA:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 511
and eax, 31
mov dword ptr [ebp-16], eax
.Lt_01B4:
mov eax, dword ptr [ebp-16]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+4], 8
jne .Lt_01AD
cmp dword ptr [ebp+12], 0
je .Lt_01AF
push 305
push offset Lt_006E
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_01AE
.Lt_01AF:
push 301
push offset Lt_006A
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
.Lt_01AE:
jmp .Lt_01AC
.Lt_01AD:
cmp dword ptr [ebp+12], 0
je .Lt_01B1
push 304
push offset Lt_006D
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_01B0
.Lt_01B1:
push 300
push offset Lt_0069
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
.Lt_01B0:
.Lt_01AC:
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
jne .Lt_01B3
jmp .Lt_01A9
.Lt_01B3:
.Lt_01B2:
push dword ptr [ebp-8]
call ASTADD
add esp, 4
mov dword ptr [ebp-4], -1
.Lt_01A9:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size RTLGFXPALETTEUSING, .-RTLGFXPALETTEUSING
.balign 16

.globl RTLGFXPUT
RTLGFXPUT:
.type RTLGFXPUT, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_01B5:
mov dword ptr [ebp-4], 0
push 0
push 306
push offset Lt_006F
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
jne .Lt_01B8
jmp .Lt_01B6
.Lt_01B8:
.Lt_01B7:
push -1
push -2147483648
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_01BA
jmp .Lt_01B6
.Lt_01BA:
.Lt_01B9:
push -1
push -2147483648
push dword ptr [ebp+16]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_01BC
jmp .Lt_01B6
.Lt_01BC:
.Lt_01BB:
push -1
push -2147483648
push dword ptr [ebp+20]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_01BE
jmp .Lt_01B6
.Lt_01BE:
.Lt_01BD:
push -1
push -2147483648
push dword ptr [ebp+24]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_01C0
jmp .Lt_01B6
.Lt_01C0:
.Lt_01BF:
push -1
push -2147483648
push dword ptr [ebp+28]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_01C2
jmp .Lt_01B6
.Lt_01C2:
.Lt_01C1:
push -1
push -2147483648
push dword ptr [ebp+32]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_01C4
jmp .Lt_01B6
.Lt_01C4:
.Lt_01C3:
push -1
push -2147483648
push dword ptr [ebp+36]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_01C6
jmp .Lt_01B6
.Lt_01C6:
.Lt_01C5:
push -1
push -2147483648
push 0
push 7
mov ebx, dword ptr [ebp+56]
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
jne .Lt_01C8
jmp .Lt_01B6
.Lt_01C8:
.Lt_01C7:
push -1
push -2147483648
push 0
push 7
mov ebx, dword ptr [ebp+40]
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
jne .Lt_01CA
jmp .Lt_01B6
.Lt_01CA:
.Lt_01C9:
push -1
push -2147483648
push dword ptr [ebp+40]
call HGETPUTTER
add esp, 4
push eax
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_01CC
jmp .Lt_01B6
.Lt_01CC:
.Lt_01CB:
push -1
push -2147483648
push dword ptr [ebp+44]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_01CE
jmp .Lt_01B6
.Lt_01CE:
.Lt_01CD:
push -1
push -2147483648
push dword ptr [ebp+48]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_01D0
jmp .Lt_01B6
.Lt_01D0:
.Lt_01CF:
push -1
push -2147483648
push dword ptr [ebp+52]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_01D2
jmp .Lt_01B6
.Lt_01D2:
.Lt_01D1:
push dword ptr [ebp-8]
call RTLERRORCHECK
add esp, 4
push eax
call ASTADD
add esp, 4
mov dword ptr [ebp-4], -1
.Lt_01B6:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size RTLGFXPUT, .-RTLGFXPUT
.balign 16

.globl RTLGFXGET
RTLGFXGET:
.type RTLGFXGET, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_01D3:
mov dword ptr [ebp-4], 0
push 0
cmp dword ptr [ENV+136], 0
jne .Lt_01D5
push 317
push offset Lt_0070
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_01EB
.Lt_01D5:
push 318
push offset Lt_0071
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
.Lt_01EB:
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
jne .Lt_01D8
jmp .Lt_01D4
.Lt_01D8:
.Lt_01D7:
push -1
push -2147483648
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_01DA
jmp .Lt_01D4
.Lt_01DA:
.Lt_01D9:
push -1
push -2147483648
push dword ptr [ebp+16]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_01DC
jmp .Lt_01D4
.Lt_01DC:
.Lt_01DB:
push -1
push -2147483648
push dword ptr [ebp+20]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_01DE
jmp .Lt_01D4
.Lt_01DE:
.Lt_01DD:
push -1
push -2147483648
push dword ptr [ebp+24]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_01E0
jmp .Lt_01D4
.Lt_01E0:
.Lt_01DF:
push -1
push -2147483648
push dword ptr [ebp+28]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_01E2
jmp .Lt_01D4
.Lt_01E2:
.Lt_01E1:
push -1
push -2147483648
push 0
push 7
mov ebx, dword ptr [ebp+32]
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
jne .Lt_01E4
jmp .Lt_01D4
.Lt_01E4:
.Lt_01E3:
cmp dword ptr [ebp+36], 0
je .Lt_01E6
push -1
push -2147483648
push dword ptr [ebp+36]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_01E8
jmp .Lt_01D4
.Lt_01E8:
.Lt_01E7:
jmp .Lt_01E5
.Lt_01E6:
push 1
push -2147483648
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_01EA
jmp .Lt_01D4
.Lt_01EA:
.Lt_01E9:
.Lt_01E5:
push dword ptr [ebp-8]
call RTLERRORCHECK
add esp, 4
push eax
call ASTADD
add esp, 4
mov dword ptr [ebp-4], -1
.Lt_01D4:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size RTLGFXGET, .-RTLGFXGET
.balign 16

.globl RTLGFXSCREENSET
RTLGFXSCREENSET:
.type RTLGFXSCREENSET, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_01EC:
mov dword ptr [ebp-4], 0
push 0
push 319
push offset Lt_0072
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
jne .Lt_01EF
jmp .Lt_01ED
.Lt_01EF:
.Lt_01EE:
push -1
push -2147483648
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_01F1
jmp .Lt_01ED
.Lt_01F1:
.Lt_01F0:
push -1
push -2147483648
push dword ptr [ebp+16]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_01F3
jmp .Lt_01ED
.Lt_01F3:
.Lt_01F2:
push -1
push -2147483648
push dword ptr [ebp+20]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_01F5
jmp .Lt_01ED
.Lt_01F5:
.Lt_01F4:
push -1
push -2147483648
push dword ptr [ebp+24]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_01F7
jmp .Lt_01ED
.Lt_01F7:
.Lt_01F6:
push dword ptr [ebp-8]
call RTLERRORCHECK
add esp, 4
push eax
call ASTADD
add esp, 4
mov dword ptr [ebp-4], -1
.Lt_01ED:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size RTLGFXSCREENSET, .-RTLGFXSCREENSET
.balign 16

.globl RTLGFXSCREENSETQB
RTLGFXSCREENSETQB:
.type RTLGFXSCREENSETQB, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_01F8:
mov dword ptr [ebp-4], 0
push 0
push 320
push offset Lt_0073
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
jne .Lt_01FB
jmp .Lt_01F9
.Lt_01FB:
.Lt_01FA:
push -1
push -2147483648
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_01FD
jmp .Lt_01F9
.Lt_01FD:
.Lt_01FC:
push -1
push -2147483648
push dword ptr [ebp+16]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_01FF
jmp .Lt_01F9
.Lt_01FF:
.Lt_01FE:
push dword ptr [ebp-8]
call RTLERRORCHECK
add esp, 4
push eax
call ASTADD
add esp, 4
mov dword ptr [ebp-4], -1
.Lt_01F9:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size RTLGFXSCREENSETQB, .-RTLGFXSCREENSETQB
.balign 16

.globl RTLGFXIMAGECREATE
RTLGFXIMAGECREATE:
.type RTLGFXIMAGECREATE, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_0200:
mov dword ptr [ebp-4], 0
push 0
cmp dword ptr [ENV+136], 0
jne .Lt_0202
push 321
push offset Lt_00A6
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_020E
.Lt_0202:
push 322
push offset Lt_00A7
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
.Lt_020E:
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
jne .Lt_0205
jmp .Lt_0201
.Lt_0205:
.Lt_0204:
push -1
push -2147483648
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0207
jmp .Lt_0201
.Lt_0207:
.Lt_0206:
push -1
push -2147483648
push dword ptr [ebp+16]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0209
jmp .Lt_0201
.Lt_0209:
.Lt_0208:
push -1
push -2147483648
push dword ptr [ebp+20]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_020B
jmp .Lt_0201
.Lt_020B:
.Lt_020A:
push -1
push -2147483648
push 0
push 7
mov ebx, dword ptr [ebp+24]
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
jne .Lt_020D
jmp .Lt_0201
.Lt_020D:
.Lt_020C:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0201:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size RTLGFXIMAGECREATE, .-RTLGFXIMAGECREATE
.balign 16
fb_ctor__rtlzgfx:
.type fb_ctor__rtlzgfx, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__rtlzgfx, .-fb_ctor__rtlzgfx
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
HPORTS_CB:
.type HPORTS_CB, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_00C4:
cmp dword ptr [Lt_020F], 0
jne .Lt_00C7
mov dword ptr [Lt_020F], -1
mov eax, dword ptr [ENV+108]
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
je .Lt_00CB
.Lt_00CC:
cmp dword ptr [ebp-8], 1
jne .Lt_00CA
.Lt_00CB:
push offset Lt_00CD
call FBADDLIB
add esp, 4
.Lt_00CA:
.Lt_00C8:
.Lt_00C7:
.Lt_00C6:
mov dword ptr [ebp-4], -1
.Lt_00C5:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size HPORTS_CB, .-HPORTS_CB

.section .data
.balign 4
Lt_020F:
.int 0

.section .text
.balign 16
HGFXLIB_CB:
.type HGFXLIB_CB, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_00CE:
mov dword ptr [ENV+196], -1
mov dword ptr [ebp-4], -1
.Lt_00CF:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size HGFXLIB_CB, .-HGFXLIB_CB
.balign 16
HGETPUTTER:
.type HGETPUTTER, @function
push ebp
mov ebp, esp
sub esp, 12
mov dword ptr [ebp-4], 0
.Lt_00D0:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-12], eax
jmp .Lt_00D3
.Lt_00D5:
push 307
push offset Lt_00B5
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-8], eax
jmp .Lt_00D2
.Lt_00D6:
push 308
push offset Lt_00B6
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-8], eax
jmp .Lt_00D2
.Lt_00D7:
push 309
push offset Lt_00B7
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-8], eax
jmp .Lt_00D2
.Lt_00D8:
push 310
push offset Lt_00B8
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-8], eax
jmp .Lt_00D2
.Lt_00D9:
push 311
push offset Lt_00B9
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-8], eax
jmp .Lt_00D2
.Lt_00DA:
push 312
push offset Lt_00BA
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-8], eax
jmp .Lt_00D2
.Lt_00DB:
push 313
push offset Lt_00BB
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-8], eax
jmp .Lt_00D2
.Lt_00DC:
push 314
push offset Lt_00BC
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-8], eax
jmp .Lt_00D2
.Lt_00DD:
push 315
push offset Lt_00BD
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-8], eax
jmp .Lt_00D2
.Lt_00DE:
push 316
push offset Lt_00BE
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-8], eax
jmp .Lt_00D2
.Lt_00D3:
cmp dword ptr [ebp-12], 9
ja .Lt_00DE
mov eax, dword ptr [ebp-12]
jmp dword ptr [.LT_00DF+eax*4]
.LT_00DF:
.int .Lt_00D5
.int .Lt_00D6
.int .Lt_00D7
.int .Lt_00D8
.int .Lt_00D9
.int .Lt_00DA
.int .Lt_00DB
.int .Lt_00DD
.int .Lt_00DE
.int .Lt_00DC
.Lt_00D2:
push dword ptr [ebp-8]
call ASTBUILDPROCADDROF
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_00D1:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size HGETPUTTER, .-HGETPUTTER
	#fbc-1.01.0/src/compiler/rtl-gfx.bas' compilation took 0.04337901249527931 secs

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

.section .data
.balign 4
FUNCDATA:
.int Lt_005F
.long 0
.int 0
.int -1
.int HGFXLIB_CB
.int 0
.int 6
.int 32
.int 1
.int -1
.int 0
.skip 4,0
.int 14
.int 1
.int 0
.skip 8,0
.int 14
.int 1
.int 0
.skip 8,0
.int 11
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.skip 200,0
.int Lt_0060
.long 0
.int 7
.int -1
.int HGFXLIB_CB
.int 0
.int 3
.int 32
.int 1
.int -1
.int 0
.skip 4,0
.int 14
.int 1
.int 0
.skip 8,0
.int 14
.int 1
.int 0
.skip 8,0
.skip 260,0
.int Lt_0061
.long 0
.int 0
.int -1
.int HGFXLIB_CB
.int 0
.int 9
.int 32
.int 1
.int -1
.int 0
.skip 4,0
.int 14
.int 1
.int 0
.skip 8,0
.int 14
.int 1
.int 0
.skip 8,0
.int 14
.int 1
.int 0
.skip 8,0
.int 14
.int 1
.int 0
.skip 8,0
.int 11
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 11
.int 1
.int -1
.int 65535
.skip 4,0
.int 10
.int 1
.int 0
.skip 8,0
.skip 140,0
.int Lt_0062
.long 0
.int 0
.int -1
.int HGFXLIB_CB
.int 0
.int 10
.int 32
.int 1
.int -1
.int 0
.skip 4,0
.int 14
.int 1
.int 0
.skip 8,0
.int 14
.int 1
.int 0
.skip 8,0
.int 14
.int 1
.int 0
.skip 8,0
.int 11
.int 1
.int 0
.skip 8,0
.int 14
.int 1
.int 0
.skip 8,0
.int 14
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
.int 10
.int 1
.int 0
.skip 8,0
.skip 120,0
.int Lt_0063
.long 0
.int 0
.int -1
.int HGFXLIB_CB
.int 0
.int 8
.int 32
.int 1
.int -1
.int 0
.skip 4,0
.int 14
.int 1
.int 0
.skip 8,0
.int 14
.int 1
.int 0
.skip 8,0
.int 11
.int 1
.int 0
.skip 8,0
.int 11
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
.int 10
.int 1
.int 0
.skip 8,0
.skip 160,0
.int Lt_0064
.long 0
.int 0
.int -1
.int HGFXLIB_CB
.int 0
.int 2
.int 32
.int 1
.int -1
.int 0
.skip 4,0
.int 16
.int 2
.int 0
.skip 8,0
.skip 280,0
.int Lt_0065
.long 0
.int 7
.int -1
.int HGFXLIB_CB
.int 2
.int 11
.int 32
.int 1
.int -1
.int 0
.skip 4,0
.int 14
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
.int 16
.int 2
.int 0
.skip 8,0
.int 11
.int 1
.int 0
.skip 8,0
.int 32
.int 1
.int -1
.int 0
.skip 4,0
.int 10
.int 1
.int 0
.skip 8,0
.int 32
.int 1
.int 0
.skip 8,0
.int 32
.int 1
.int -1
.int 0
.skip 4,0
.int 32
.int 1
.int 0
.skip 8,0
.skip 100,0
.int Lt_0066
.long 0
.int 0
.int -1
.int HGFXLIB_CB
.int 0
.int 7
.int 10
.int 1
.int -1
.int -32768
.skip 4,0
.int 10
.int 1
.int -1
.int -32768
.skip 4,0
.int 10
.int 1
.int -1
.int -32768
.skip 4,0
.int 10
.int 1
.int -1
.int -32768
.skip 4,0
.int 11
.int 1
.int -1
.int 0
.skip 4,0
.int 11
.int 1
.int -1
.int 0
.skip 4,0
.int 10
.int 1
.int 0
.skip 8,0
.skip 180,0
.int Lt_0067
.long 0
.int 0
.int -1
.int HGFXLIB_CB
.int 0
.int 5
.int 14
.int 1
.int -1
.int 0
.skip 4,0
.int 14
.int 1
.int -1
.int 0
.skip 4,0
.int 14
.int 1
.int -1
.int 0
.skip 4,0
.int 14
.int 1
.int -1
.int 0
.skip 4,0
.int 10
.int 1
.int -1
.int 0
.skip 4,0
.skip 220,0
.int Lt_0068
.long 0
.int 0
.int -1
.int HGFXLIB_CB
.int 0
.int 4
.int 10
.int 1
.int -1
.int -1
.skip 4,0
.int 10
.int 1
.int -1
.int -1
.skip 4,0
.int 10
.int 1
.int -1
.int -1
.skip 4,0
.int 10
.int 1
.int -1
.int -1
.skip 4,0
.skip 240,0
.int Lt_0069
.long 0
.int 0
.int -1
.int HGFXLIB_CB
.int 0
.int 1
.int 42
.int 1
.int 0
.skip 8,0
.skip 300,0
.int Lt_006A
.long 0
.int 0
.int -1
.int HGFXLIB_CB
.int 0
.int 1
.int 44
.int 1
.int 0
.skip 8,0
.skip 300,0
.int Lt_006B
.long 0
.int 0
.int -1
.int HGFXLIB_CB
.int 0
.int 4
.int 10
.int 1
.int -1
.int -1
.skip 4,0
.int 10
.int 2
.int 0
.skip 8,0
.int 10
.int 2
.int 0
.skip 8,0
.int 10
.int 2
.int 0
.skip 8,0
.skip 240,0
.int Lt_006C
.long 0
.int 0
.int -1
.int HGFXLIB_CB
.int 0
.int 4
.int 10
.int 1
.int -1
.int -1
.skip 4,0
.int 12
.int 2
.int 0
.skip 8,0
.int 12
.int 2
.int 0
.skip 8,0
.int 12
.int 2
.int 0
.skip 8,0
.skip 240,0
.int Lt_006D
.long 0
.int 0
.int -1
.int HGFXLIB_CB
.int 0
.int 1
.int 42
.int 1
.int 0
.skip 8,0
.skip 300,0
.int Lt_006E
.long 0
.int 0
.int -1
.int HGFXLIB_CB
.int 0
.int 1
.int 44
.int 1
.int 0
.skip 8,0
.skip 300,0
.int Lt_006F
.long 0
.int 10
.int -1
.int HGFXLIB_CB
.int 2
.int 14
.int 32
.int 1
.int -1
.int 0
.skip 4,0
.int 14
.int 1
.int 0
.skip 8,0
.int 14
.int 1
.int 0
.skip 8,0
.int 32
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int -1
.int -65536
.skip 4,0
.int 10
.int 1
.int -1
.int -65536
.skip 4,0
.int 10
.int 1
.int -1
.int -65536
.skip 4,0
.int 10
.int 1
.int -1
.int -65536
.skip 4,0
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 32
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int -1
.int -1
.skip 4,0
.int 32
.int 1
.int -1
.int 0
.skip 4,0
.int 32
.int 1
.int -1
.int 0
.skip 4,0
.skip 40,0
.int Lt_0070
.long 0
.int 10
.int -1
.int HGFXLIB_CB
.int 1026
.int 8
.int 32
.int 1
.int -1
.int 0
.skip 4,0
.int 14
.int 1
.int 0
.skip 8,0
.int 14
.int 1
.int 0
.skip 8,0
.int 14
.int 1
.int 0
.skip 8,0
.int 14
.int 1
.int 0
.skip 8,0
.int 32
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 0
.int 3
.int 0
.skip 8,0
.skip 160,0
.int Lt_0071
.long 0
.int 10
.int -1
.int HGFXLIB_CB
.int 514
.int 8
.int 32
.int 1
.int -1
.int 0
.skip 4,0
.int 14
.int 1
.int 0
.skip 8,0
.int 14
.int 1
.int 0
.skip 8,0
.int 14
.int 1
.int 0
.skip 8,0
.int 14
.int 1
.int 0
.skip 8,0
.int 32
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 0
.int 3
.int 0
.skip 8,0
.skip 160,0
.int Lt_0072
.long 0
.int 10
.int -1
.int HGFXLIB_CB
.int 0
.int 5
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int -1
.int 8
.skip 4,0
.int 10
.int 1
.int -1
.int 0
.skip 4,0
.int 10
.int 1
.int -1
.int 0
.skip 4,0
.int 10
.int 1
.int -1
.int 0
.skip 4,0
.skip 220,0
.int Lt_0073
.long 0
.int 10
.int -1
.int HGFXLIB_CB
.int 0
.int 3
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int -1
.int -1
.skip 4,0
.int 10
.int 1
.int -1
.int -1
.skip 4,0
.skip 260,0
.int Lt_0074
.int Lt_0075
.int 10
.int -1
.int HGFXLIB_CB
.int 130
.int 6
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int -1
.int 8
.skip 4,0
.int 10
.int 1
.int -1
.int 1
.skip 4,0
.int 10
.int 1
.int -1
.int 0
.skip 4,0
.int 10
.int 1
.int -1
.int 0
.skip 4,0
.skip 200,0
.int Lt_0076
.int Lt_0077
.int 10
.int -1
.int HGFXLIB_CB
.int 1026
.int 3
.int 16
.int 2
.int 0
.skip 8,0
.int 32
.int 1
.int -1
.int 0
.skip 4,0
.int 32
.int 1
.int -1
.int 0
.skip 4,0
.skip 260,0
.int Lt_0076
.int Lt_0078
.int 10
.int -1
.int HGFXLIB_CB
.int 514
.int 3
.int 16
.int 2
.int 0
.skip 8,0
.int 32
.int 1
.int -1
.int 0
.skip 4,0
.int 32
.int 1
.int -1
.int 0
.skip 4,0
.skip 260,0
.int Lt_0079
.int Lt_007A
.int 10
.int -1
.int HGFXLIB_CB
.int 3
.int 4
.int 16
.int 2
.int 0
.skip 8,0
.int 32
.int 1
.int 0
.skip 8,0
.int 11
.int 1
.int -1
.int 0
.skip 4,0
.int 32
.int 1
.int -1
.int 0
.skip 4,0
.skip 240,0
.int Lt_0079
.int Lt_007B
.int 10
.int -1
.int HGFXLIB_CB
.int 3
.int 5
.int 16
.int 2
.int 0
.skip 8,0
.int 32
.int 1
.int 0
.skip 8,0
.int 11
.int 1
.int -1
.int 0
.skip 4,0
.int 32
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.skip 220,0
.int Lt_007C
.int Lt_007D
.int 10
.int -1
.int HGFXLIB_CB
.int 128
.int 2
.int 10
.int 1
.int -1
.int -1
.skip 4,0
.int 10
.int 1
.int -1
.int -1
.skip 4,0
.skip 280,0
.int Lt_007E
.int Lt_007D
.int 10
.int -1
.int HGFXLIB_CB
.int 128
.int 2
.int 10
.int 1
.int -1
.int -1
.skip 4,0
.int 10
.int 1
.int -1
.int -1
.skip 4,0
.skip 280,0
.int Lt_007F
.int Lt_0080
.int 14
.int -1
.int HGFXLIB_CB
.int 128
.int 1
.int 10
.int 1
.int 0
.skip 8,0
.skip 300,0
.int Lt_0081
.int Lt_0082
.int 14
.int -1
.int HGFXLIB_CB
.int 0
.int 2
.int 14
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.skip 280,0
.int Lt_0083
.int Lt_0084
.int 10
.int -1
.int HPORTS_CB
.int 2
.int 2
.int 5
.int 1
.int 0
.skip 8,0
.int 2
.int 1
.int 0
.skip 8,0
.skip 280,0
.int Lt_0085
.int Lt_0086
.int 10
.int -1
.int HPORTS_CB
.int 0
.int 1
.int 5
.int 1
.int 0
.skip 8,0
.skip 300,0
.int Lt_0087
.int Lt_0088
.int 10
.int -1
.int HPORTS_CB
.int 2
.int 3
.int 5
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int -1
.int 0
.skip 4,0
.skip 260,0
.int Lt_0089
.int Lt_008A
.int 10
.int -1
.int HGFXLIB_CB
.int 128
.int 0
.skip 320,0
.int Lt_008B
.int Lt_008C
.int 10
.int 3
.int HGFXLIB_CB
.int 128
.int 2
.int 10
.int 1
.int -1
.int -1
.skip 4,0
.int 10
.int 1
.int -1
.int -1
.skip 4,0
.skip 280,0
.int Lt_008D
.int Lt_008E
.int 0
.int -1
.int HGFXLIB_CB
.int 128
.int 0
.skip 320,0
.int Lt_008F
.int Lt_0090
.int 0
.int -1
.int HGFXLIB_CB
.int 128
.int 2
.int 10
.int 1
.int -1
.int -1
.skip 4,0
.int 10
.int 1
.int -1
.int -1
.skip 4,0
.skip 280,0
.int Lt_0091
.int Lt_0092
.int 32
.int -1
.int HGFXLIB_CB
.int 128
.int 0
.skip 320,0
.int Lt_0093
.int Lt_0094
.int 0
.int -1
.int HGFXLIB_CB
.int 128
.int 1
.int 16
.int 2
.int 0
.skip 8,0
.skip 300,0
.int Lt_0095
.int Lt_0096
.int 10
.int -1
.long 0
.int 128
.int 1
.int 10
.int 1
.int 0
.skip 8,0
.skip 300,0
.int Lt_0097
.int Lt_0098
.int 10
.int -1
.long 0
.int 129
.int 5
.int 10
.int 2
.int 0
.int 0
.int -1
.int 10
.int 2
.int 0
.int 0
.int -1
.int 10
.int 2
.int -1
.int 0
.int -1
.int 10
.int 2
.int -1
.int 0
.int -1
.int 10
.int 2
.int -1
.int 0
.int -1
.skip 220,0
.int Lt_0097
.int Lt_0099
.int 10
.int -1
.long 0
.int 129
.int 5
.int 12
.int 2
.int 0
.int 0
.int -1
.int 12
.int 2
.int 0
.int 0
.int -1
.int 12
.int 2
.int -1
.int 0
.int -1
.int 12
.int 2
.int -1
.int 0
.int -1
.int 12
.int 2
.int -1
.int 0
.int -1
.skip 220,0
.int Lt_009A
.int Lt_009B
.int 10
.int -1
.long 0
.int 128
.int 4
.int 10
.int 1
.int -1
.int -2147483648
.skip 4,0
.int 10
.int 1
.int -1
.int -2147483648
.skip 4,0
.int 10
.int 1
.int -1
.int -1
.skip 4,0
.int 10
.int 1
.int -1
.int -1
.skip 4,0
.skip 240,0
.int Lt_009C
.int Lt_009D
.int 10
.int -1
.int HGFXLIB_CB
.int 128
.int 10
.int 10
.int 1
.int 0
.int 0
.int -1
.int 7
.int 2
.int -1
.int 0
.int -1
.int 14
.int 2
.int -1
.int 0
.int -1
.int 14
.int 2
.int -1
.int 0
.int -1
.int 14
.int 2
.int -1
.int 0
.int -1
.int 14
.int 2
.int -1
.int 0
.int -1
.int 14
.int 2
.int -1
.int 0
.int -1
.int 14
.int 2
.int -1
.int 0
.int -1
.int 14
.int 2
.int -1
.int 0
.int -1
.int 14
.int 2
.int -1
.int 0
.int -1
.skip 120,0
.int Lt_009E
.int Lt_009F
.int 10
.int -1
.int HGFXLIB_CB
.int 256
.int 1
.int 10
.int 1
.int 0
.skip 8,0
.skip 300,0
.int Lt_00A0
.int Lt_00A1
.int 10
.int -1
.int HGFXLIB_CB
.int 256
.int 1
.int 10
.int 1
.int 0
.skip 8,0
.skip 300,0
.int Lt_00A2
.int Lt_00A3
.int 0
.int -1
.int HGFXLIB_CB
.int 128
.int 7
.int 7
.int 2
.int -1
.int 0
.skip 4,0
.int 7
.int 2
.int -1
.int 0
.skip 4,0
.int 7
.int 2
.int -1
.int 0
.skip 4,0
.int 7
.int 2
.int -1
.int 0
.skip 4,0
.int 7
.int 2
.int -1
.int 0
.skip 4,0
.int 7
.int 2
.int -1
.int 0
.skip 4,0
.int 16
.int 2
.int -1
.int 0
.skip 4,0
.skip 180,0
.int Lt_00A4
.int Lt_00A5
.int 10
.int -1
.int HGFXLIB_CB
.int 128
.int 1
.int 10
.int 1
.int -1
.int 0
.skip 4,0
.skip 300,0
.int Lt_00A6
.long 0
.int 32
.int -1
.int HGFXLIB_CB
.int 1024
.int 5
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int -1
.int 0
.skip 4,0
.int 10
.int 1
.int -1
.int 0
.skip 4,0
.int 10
.int 1
.int -1
.int 0
.skip 4,0
.skip 220,0
.int Lt_00A7
.long 0
.int 32
.int -1
.int HGFXLIB_CB
.int 128
.int 5
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int -1
.int 0
.skip 4,0
.int 10
.int 1
.int -1
.int 0
.skip 4,0
.int 10
.int 1
.int -1
.int 0
.skip 4,0
.skip 220,0
.int Lt_00A8
.int Lt_00A9
.int 0
.int -1
.int HGFXLIB_CB
.int 128
.int 1
.int 32
.int 1
.int 0
.skip 8,0
.skip 300,0
.int Lt_00AA
.int Lt_00AB
.int 10
.int -1
.int HGFXLIB_CB
.int 128
.int 7
.int 32
.int 1
.int 0
.skip 8,0
.int 7
.int 2
.int -1
.int 0
.skip 4,0
.int 7
.int 2
.int -1
.int 0
.skip 4,0
.int 7
.int 2
.int -1
.int 0
.skip 4,0
.int 7
.int 2
.int -1
.int 0
.skip 4,0
.int 32
.int 2
.int -1
.int 0
.skip 4,0
.int 7
.int 2
.int -1
.int 0
.skip 4,0
.skip 180,0
.int Lt_00AC
.int Lt_00AD
.int 0
.int -1
.int HGFXLIB_CB
.int 128
.int 6
.int 32
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 32
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int -1
.int 1
.skip 4,0
.skip 200,0
.int Lt_00AE
.int Lt_00AF
.int 10
.int -1
.int HGFXLIB_CB
.int 128
.int 1
.int 32
.int 1
.int -1
.int 0
.int -1
.skip 300,0
.int Lt_00B0
.int Lt_00B1
.int 0
.int -1
.int HGFXLIB_CB
.int 129
.int 2
.int 10
.int 1
.int 0
.skip 8,0
.int 16
.int 2
.skip 12,0
.skip 280,0
.int Lt_00B0
.int Lt_00B2
.int 0
.int -1
.int HGFXLIB_CB
.int 129
.int 5
.int 10
.int 1
.int 0
.skip 8,0
.int 7
.int 2
.int -1
.int -2147483648
.skip 4,0
.int 7
.int 2
.int -1
.int -2147483648
.skip 4,0
.int 7
.int 2
.int -1
.int -2147483648
.skip 4,0
.int 7
.int 2
.int -1
.int -2147483648
.skip 4,0
.skip 220,0
.int Lt_00B3
.int Lt_00B4
.int 32
.int -1
.int HGFXLIB_CB
.int 129
.int 1
.int 35
.int 1
.int 0
.skip 8,0
.skip 300,0
.int Lt_00B5
.long 0
.int 0
.int 3
.int HGFXLIB_CB
.int 0
.int 9
.int 34
.int 1
.int 0
.skip 8,0
.int 34
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 32
.int 1
.int 0
.skip 8,0
.int 32
.int 1
.int 0
.skip 8,0
.skip 140,0
.int Lt_00B6
.long 0
.int 0
.int 3
.int HGFXLIB_CB
.int 0
.int 9
.int 34
.int 1
.int 0
.skip 8,0
.int 34
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 32
.int 1
.int 0
.skip 8,0
.int 32
.int 1
.int 0
.skip 8,0
.skip 140,0
.int Lt_00B7
.long 0
.int 0
.int 3
.int HGFXLIB_CB
.int 0
.int 9
.int 34
.int 1
.int 0
.skip 8,0
.int 34
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 32
.int 1
.int 0
.skip 8,0
.int 32
.int 1
.int 0
.skip 8,0
.skip 140,0
.int Lt_00B8
.long 0
.int 0
.int 3
.int HGFXLIB_CB
.int 0
.int 9
.int 34
.int 1
.int 0
.skip 8,0
.int 34
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 32
.int 1
.int 0
.skip 8,0
.int 32
.int 1
.int 0
.skip 8,0
.skip 140,0
.int Lt_00B9
.long 0
.int 0
.int 3
.int HGFXLIB_CB
.int 0
.int 9
.int 34
.int 1
.int 0
.skip 8,0
.int 34
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 32
.int 1
.int 0
.skip 8,0
.int 32
.int 1
.int 0
.skip 8,0
.skip 140,0
.int Lt_00BA
.long 0
.int 0
.int 3
.int HGFXLIB_CB
.int 0
.int 9
.int 34
.int 1
.int 0
.skip 8,0
.int 34
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 32
.int 1
.int 0
.skip 8,0
.int 32
.int 1
.int 0
.skip 8,0
.skip 140,0
.int Lt_00BB
.long 0
.int 0
.int 3
.int HGFXLIB_CB
.int 0
.int 9
.int 34
.int 1
.int 0
.skip 8,0
.int 34
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 32
.int 1
.int 0
.skip 8,0
.int 32
.int 1
.int 0
.skip 8,0
.skip 140,0
.int Lt_00BC
.long 0
.int 0
.int 3
.int HGFXLIB_CB
.int 0
.int 9
.int 34
.int 1
.int 0
.skip 8,0
.int 34
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 32
.int 1
.int 0
.skip 8,0
.int 32
.int 1
.int 0
.skip 8,0
.skip 140,0
.int Lt_00BD
.long 0
.int 0
.int 3
.int HGFXLIB_CB
.int 0
.int 9
.int 34
.int 1
.int 0
.skip 8,0
.int 34
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 32
.int 1
.int 0
.skip 8,0
.int 32
.int 1
.int 0
.skip 8,0
.skip 140,0
.int Lt_00BE
.long 0
.int 0
.int 3
.int HGFXLIB_CB
.int 0
.int 9
.int 34
.int 1
.int 0
.skip 8,0
.int 34
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 32
.int 1
.int 0
.skip 8,0
.int 32
.int 1
.int 0
.skip 8,0
.skip 140,0
.long 0
.skip 344,0

.section .rodata
.balign 4
Lt_005F:	.ascii	"fb_GfxPset\0"
.balign 4
Lt_0060:	.ascii	"fb_GfxPoint\0"
.balign 4
Lt_0061:	.ascii	"fb_GfxLine\0"
.balign 4
Lt_0062:	.ascii	"fb_GfxEllipse\0"
.balign 4
Lt_0063:	.ascii	"fb_GfxPaint\0"
.balign 4
Lt_0064:	.ascii	"fb_GfxDraw\0"
.balign 4
Lt_0065:	.ascii	"fb_GfxDrawString\0"
.balign 4
Lt_0066:	.ascii	"fb_GfxView\0"
.balign 4
Lt_0067:	.ascii	"fb_GfxWindow\0"
.balign 4
Lt_0068:	.ascii	"fb_GfxPalette\0"
.balign 4
Lt_0069:	.ascii	"fb_GfxPaletteUsing\0"
.balign 4
Lt_006A:	.ascii	"fb_GfxPaletteUsing64\0"
.balign 4
Lt_006B:	.ascii	"fb_GfxPaletteGet\0"
.balign 4
Lt_006C:	.ascii	"fb_GfxPaletteGet64\0"
.balign 4
Lt_006D:	.ascii	"fb_GfxPaletteGetUsing\0"
.balign 4
Lt_006E:	.ascii	"fb_GfxPaletteGetUsing64\0"
.balign 4
Lt_006F:	.ascii	"fb_GfxPut\0"
.balign 4
Lt_0070:	.ascii	"fb_GfxGet\0"
.balign 4
Lt_0071:	.ascii	"fb_GfxGetQB\0"
.balign 4
Lt_0072:	.ascii	"fb_GfxScreen\0"
.balign 4
Lt_0073:	.ascii	"fb_GfxScreenQB\0"
.balign 4
Lt_0074:	.ascii	"screenres\0"
.balign 4
Lt_0075:	.ascii	"fb_GfxScreenRes\0"
.balign 4
Lt_0076:	.ascii	"bload\0"
.balign 4
Lt_0077:	.ascii	"fb_GfxBload\0"
.balign 4
Lt_0078:	.ascii	"fb_GfxBloadQB\0"
.balign 4
Lt_0079:	.ascii	"bsave\0"
.balign 4
Lt_007A:	.ascii	"fb_GfxBsave\0"
.balign 4
Lt_007B:	.ascii	"fb_GfxBsaveEx\0"
.balign 4
Lt_007C:	.ascii	"flip\0"
.balign 4
Lt_007D:	.ascii	"fb_GfxFlip\0"
.balign 4
Lt_007E:	.ascii	"screencopy\0"
.balign 4
Lt_007F:	.ascii	"pointcoord\0"
.balign 4
Lt_0080:	.ascii	"fb_GfxCursor\0"
.balign 4
Lt_0081:	.ascii	"pmap\0"
.balign 4
Lt_0082:	.ascii	"fb_GfxPMap\0"
.balign 4
Lt_0083:	.ascii	"out\0"
.balign 4
Lt_0084:	.ascii	"fb_Out\0"
.balign 4
Lt_0085:	.ascii	"inp\0"
.balign 4
Lt_0086:	.ascii	"fb_In\0"
.balign 4
Lt_0087:	.ascii	"wait\0"
.balign 4
Lt_0088:	.ascii	"fb_Wait\0"
.balign 4
Lt_0089:	.ascii	"screensync\0"
.balign 4
Lt_008A:	.ascii	"fb_GfxWaitVSync\0"
.balign 4
Lt_008B:	.ascii	"screenset\0"
.balign 4
Lt_008C:	.ascii	"fb_GfxPageSet\0"
.balign 4
Lt_008D:	.ascii	"screenlock\0"
.balign 4
Lt_008E:	.ascii	"fb_GfxLock\0"
.balign 4
Lt_008F:	.ascii	"screenunlock\0"
.balign 4
Lt_0090:	.ascii	"fb_GfxUnlock\0"
.balign 4
Lt_0091:	.ascii	"screenptr\0"
.balign 4
Lt_0092:	.ascii	"fb_GfxScreenPtr\0"
.balign 4
Lt_0093:	.ascii	"windowtitle\0"
.balign 4
Lt_0094:	.ascii	"fb_GfxSetWindowTitle\0"
.balign 4
Lt_0095:	.ascii	"multikey\0"
.balign 4
Lt_0096:	.ascii	"fb_Multikey\0"
.balign 4
Lt_0097:	.ascii	"getmouse\0"
.balign 4
Lt_0098:	.ascii	"fb_GetMouse\0"
.balign 4
Lt_0099:	.ascii	"fb_GetMouse64\0"
.balign 4
Lt_009A:	.ascii	"setmouse\0"
.balign 4
Lt_009B:	.ascii	"fb_SetMouse\0"
.balign 4
Lt_009C:	.ascii	"getjoystick\0"
.balign 4
Lt_009D:	.ascii	"fb_GfxGetJoystick\0"
.balign 4
Lt_009E:	.ascii	"stick\0"
.balign 4
Lt_009F:	.ascii	"fb_GfxStickQB\0"
.balign 4
Lt_00A0:	.ascii	"strig\0"
.balign 4
Lt_00A1:	.ascii	"fb_GfxStrigQB\0"
.balign 4
Lt_00A2:	.ascii	"screeninfo\0"
.balign 4
Lt_00A3:	.ascii	"fb_GfxScreenInfo\0"
.balign 4
Lt_00A4:	.ascii	"screenlist\0"
.balign 4
Lt_00A5:	.ascii	"fb_GfxScreenList\0"
.balign 4
Lt_00A6:	.ascii	"fb_GfxImageCreate\0"
.balign 4
Lt_00A7:	.ascii	"fb_GfxImageCreateQB\0"
.balign 4
Lt_00A8:	.ascii	"imagedestroy\0"
.balign 4
Lt_00A9:	.ascii	"fb_GfxImageDestroy\0"
.balign 4
Lt_00AA:	.ascii	"imageinfo\0"
.balign 4
Lt_00AB:	.ascii	"fb_GfxImageInfo\0"
.balign 4
Lt_00AC:	.ascii	"imageconvertrow\0"
.balign 4
Lt_00AD:	.ascii	"fb_GfxImageConvertRow\0"
.balign 4
Lt_00AE:	.ascii	"screenevent\0"
.balign 4
Lt_00AF:	.ascii	"fb_GfxEvent\0"
.balign 4
Lt_00B0:	.ascii	"screencontrol\0"
.balign 4
Lt_00B1:	.ascii	"fb_GfxControl_s\0"
.balign 4
Lt_00B2:	.ascii	"fb_GfxControl_i\0"
.balign 4
Lt_00B3:	.ascii	"screenglproc\0"
.balign 4
Lt_00B4:	.ascii	"fb_GfxGetGLProcAddress\0"
.balign 4
Lt_00B5:	.ascii	"fb_hPutTrans\0"
.balign 4
Lt_00B6:	.ascii	"fb_hPutPSet\0"
.balign 4
Lt_00B7:	.ascii	"fb_hPutPReset\0"
.balign 4
Lt_00B8:	.ascii	"fb_hPutAnd\0"
.balign 4
Lt_00B9:	.ascii	"fb_hPutOr\0"
.balign 4
Lt_00BA:	.ascii	"fb_hPutXor\0"
.balign 4
Lt_00BB:	.ascii	"fb_hPutAlpha\0"
.balign 4
Lt_00BC:	.ascii	"fb_hPutBlend\0"
.balign 4
Lt_00BD:	.ascii	"fb_hPutAdd\0"
.balign 4
Lt_00BE:	.ascii	"fb_hPutCustom\0"
.balign 4
Lt_00CD:	.ascii	"advapi32\0"
.balign 8
Lt_00F8:	.quad	0xC15FFFFFC0000000
.balign 8
Lt_0129:	.quad	0x0000000000000000
.balign 8
Lt_012A:	.quad	0x401921FB82C2BD7F

.section .ctors, "aw", @progbits
.int fb_ctor__rtlzgfx
