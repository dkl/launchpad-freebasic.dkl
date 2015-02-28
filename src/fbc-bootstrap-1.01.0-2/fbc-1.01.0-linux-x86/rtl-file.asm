	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/rtl-file.bas' compilation started at 15:27:37 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl RTLFILEMODINIT
RTLFILEMODINIT:
.type RTLFILEMODINIT, @function
.Lt_00AA:
push offset FUNCDATA
call RTLADDINTRINSICPROCS
add esp, 4
.Lt_00AB:
ret
.size RTLFILEMODINIT, .-RTLFILEMODINIT
.balign 16

.globl RTLFILEMODEND
RTLFILEMODEND:
.type RTLFILEMODEND, @function
.Lt_00AC:
.Lt_00AD:
ret
.size RTLFILEMODEND, .-RTLFILEMODEND
.balign 16

.globl RTLFILEOPEN
RTLFILEOPEN:
.type RTLFILEOPEN, @function
push ebp
mov ebp, esp
sub esp, 20
mov dword ptr [ebp-4], 0
.Lt_00AE:
mov dword ptr [ebp-4], 0
mov dword ptr [ebp-16], -1
cmp dword ptr [ebp+40], 0
jne .Lt_00B1
.Lt_00B2:
cmp dword ptr [ebp+32], 0
jne .Lt_00B4
push 214
push offset Lt_0060
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
mov dword ptr [ebp-16], 0
jmp .Lt_00B3
.Lt_00B4:
push 215
push offset Lt_0061
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
.Lt_00B3:
jmp .Lt_00B0
.Lt_00B1:
cmp dword ptr [ebp+40], 1
jne .Lt_00B5
.Lt_00B6:
push 217
push offset Lt_0063
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_00B0
.Lt_00B5:
cmp dword ptr [ebp+40], 2
jne .Lt_00B7
.Lt_00B8:
push 218
push offset Lt_0064
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_00B0
.Lt_00B7:
cmp dword ptr [ebp+40], 3
jne .Lt_00B9
.Lt_00BA:
push 219
push offset Lt_0065
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_00B0
.Lt_00B9:
cmp dword ptr [ebp+40], 4
jne .Lt_00BB
.Lt_00BC:
push 220
push offset Lt_0066
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_00B0
.Lt_00BB:
cmp dword ptr [ebp+40], 5
jne .Lt_00BD
.Lt_00BE:
push 221
push offset Lt_0067
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_00B0
.Lt_00BD:
cmp dword ptr [ebp+40], 6
jne .Lt_00BF
.Lt_00C0:
push 222
push offset Lt_0068
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_00B0
.Lt_00BF:
push 223
push offset Lt_0069
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
mov dword ptr [ebp-16], 0
mov eax, dword ptr [ENV+108]
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 0
je .Lt_00C5
.Lt_00C6:
cmp dword ptr [ebp-20], 1
jne .Lt_00C4
.Lt_00C5:
push offset Lt_00C7
call FBADDLIB
add esp, 4
push offset Lt_00C8
call FBADDLIB
add esp, 4
.Lt_00C4:
.Lt_00C2:
.Lt_00C1:
.Lt_00B0:
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
jne .Lt_00CA
jmp .Lt_00AF
.Lt_00CA:
.Lt_00C9:
push -1
push -2147483648
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00CC
jmp .Lt_00AF
.Lt_00CC:
.Lt_00CB:
push -1
push -2147483648
push dword ptr [ebp+16]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00CE
jmp .Lt_00AF
.Lt_00CE:
.Lt_00CD:
push -1
push -2147483648
push dword ptr [ebp+20]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00D0
jmp .Lt_00AF
.Lt_00D0:
.Lt_00CF:
push -1
push -2147483648
push dword ptr [ebp+24]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00D2
jmp .Lt_00AF
.Lt_00D2:
.Lt_00D1:
push -1
push -2147483648
push dword ptr [ebp+28]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00D4
jmp .Lt_00AF
.Lt_00D4:
.Lt_00D3:
cmp dword ptr [ebp-16], 0
je .Lt_00D6
cmp dword ptr [ebp+32], 0
jne .Lt_00D8
push 0
push 35
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp+32], eax
.Lt_00D8:
.Lt_00D7:
push -1
push -2147483648
push dword ptr [ebp+32]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00DA
jmp .Lt_00AF
.Lt_00DA:
.Lt_00D9:
.Lt_00D6:
.Lt_00D5:
cmp dword ptr [ebp+36], 0
jne .Lt_00DC
push dword ptr [ebp-8]
call RTLERRORCHECK
add esp, 4
push eax
call ASTADD
add esp, 4
.Lt_00DC:
.Lt_00DB:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_00AF:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size RTLFILEOPEN, .-RTLFILEOPEN
.balign 16

.globl RTLFILEOPENSHORT
RTLFILEOPENSHORT:
.type RTLFILEOPENSHORT, @function
push ebp
mov ebp, esp
sub esp, 12
mov dword ptr [ebp-4], 0
.Lt_00DD:
mov dword ptr [ebp-4], 0
push 0
push 216
push offset Lt_0062
call RTLPROCLOOKUP
add esp, 8
push eax
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-8], eax
push -1
push -2147483648
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00E0
jmp .Lt_00DE
.Lt_00E0:
.Lt_00DF:
push -1
push -2147483648
push dword ptr [ebp+24]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00E2
jmp .Lt_00DE
.Lt_00E2:
.Lt_00E1:
push -1
push -2147483648
push dword ptr [ebp+8]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00E4
jmp .Lt_00DE
.Lt_00E4:
.Lt_00E3:
push -1
push -2147483648
push dword ptr [ebp+28]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00E6
jmp .Lt_00DE
.Lt_00E6:
.Lt_00E5:
push -1
push -2147483648
push dword ptr [ebp+16]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00E8
jmp .Lt_00DE
.Lt_00E8:
.Lt_00E7:
push -1
push -2147483648
push dword ptr [ebp+20]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00EA
jmp .Lt_00DE
.Lt_00EA:
.Lt_00E9:
cmp dword ptr [ebp+32], 0
jne .Lt_00EC
push dword ptr [ebp-8]
call RTLERRORCHECK
add esp, 4
push eax
call ASTADD
add esp, 4
.Lt_00EC:
.Lt_00EB:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_00DE:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size RTLFILEOPENSHORT, .-RTLFILEOPENSHORT
.balign 16

.globl RTLFILECLOSE
RTLFILECLOSE:
.type RTLFILECLOSE, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_00ED:
mov dword ptr [ebp-4], 0
cmp dword ptr [ebp+8], 0
je .Lt_00F0
push 0
push 224
push offset Lt_006A
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
jne .Lt_00F2
jmp .Lt_00EE
.Lt_00F2:
.Lt_00F1:
jmp .Lt_00EF
.Lt_00F0:
push 0
push 225
push offset Lt_006B
call RTLPROCLOOKUP
add esp, 8
push eax
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-8], eax
.Lt_00EF:
cmp dword ptr [ebp+12], 0
jne .Lt_00F4
push dword ptr [ebp-8]
call RTLERRORCHECK
add esp, 4
push eax
call ASTADD
add esp, 4
.Lt_00F4:
.Lt_00F3:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_00EE:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size RTLFILECLOSE, .-RTLFILECLOSE
.balign 16

.globl RTLFILESEEK
RTLFILESEEK:
.type RTLFILESEEK, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
mov dword ptr [ebp-4], 0
.Lt_00F5:
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 511
mov dword ptr [ebp-16], ebx
mov ebx, dword ptr [ebp-16]
and ebx, 480
je .Lt_00F7
mov dword ptr [ebp-20], 22
jmp .Lt_00FF
.Lt_00F7:
mov ebx, dword ptr [ebp-16]
and ebx, 31
mov dword ptr [ebp-20], ebx
.Lt_00FF:
mov ebx, dword ptr [ebp-20]
imul ebx, 28
cmp dword ptr [SYMB_DTYPETB+ebx+4], 8
jne .Lt_00FA
push 252
push offset Lt_0080
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_00F9
.Lt_00FA:
push 251
push offset Lt_007F
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
.Lt_00F9:
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
jne .Lt_00FC
jmp .Lt_00F6
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
jmp .Lt_00F6
.Lt_00FE:
.Lt_00FD:
push dword ptr [ebp-8]
call RTLERRORCHECK
add esp, 4
push eax
call ASTADD
add esp, 4
mov dword ptr [ebp-4], -1
.Lt_00F6:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size RTLFILESEEK, .-RTLFILESEEK
.balign 16

.globl RTLFILETELL
RTLFILETELL:
.type RTLFILETELL, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_0100:
mov dword ptr [ebp-4], 0
push 0
push 250
push offset Lt_007E
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
jne .Lt_0103
jmp .Lt_0101
.Lt_0103:
.Lt_0102:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0101:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size RTLFILETELL, .-RTLFILETELL
.balign 16

.globl RTLFILEPUT
RTLFILEPUT:
.type RTLFILEPUT, @function
push ebp
mov ebp, esp
sub esp, 44
push ebx
mov dword ptr [ebp-4], 0
.Lt_0104:
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+4]
and ebx, 511
mov dword ptr [ebp-16], ebx
push dword ptr [ebp-16]
call SYMBISSTRING
add esp, 4
mov dword ptr [ebp-24], eax
cmp dword ptr [ebp+12], 0
jne .Lt_0107
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp+12], eax
.Lt_0107:
.Lt_0106:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 511
mov dword ptr [ebp-20], ebx
mov ebx, dword ptr [ebp-20]
and ebx, 480
je .Lt_0108
mov dword ptr [ebp-44], 22
jmp .Lt_0123
.Lt_0108:
mov ebx, dword ptr [ebp-20]
and ebx, 31
mov dword ptr [ebp-44], ebx
.Lt_0123:
mov ebx, dword ptr [ebp-44]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx+4]
cmp eax, 8
sete al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-28], eax
cmp dword ptr [ebp-24], 0
je .Lt_010B
cmp dword ptr [ebp-28], 0
je .Lt_010D
push 229
push offset Lt_006F
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-40], eax
jmp .Lt_010C
.Lt_010D:
push 228
push offset Lt_006E
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-40], eax
.Lt_010C:
jmp .Lt_010A
.Lt_010B:
cmp dword ptr [ebp-28], 0
je .Lt_010F
push 227
push offset Lt_006D
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-40], eax
jmp .Lt_010E
.Lt_010F:
push 226
push offset Lt_006C
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-40], eax
.Lt_010E:
.Lt_010A:
push 0
push dword ptr [ebp-40]
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
jne .Lt_0111
jmp .Lt_0105
.Lt_0111:
.Lt_0110:
push -1
push -2147483648
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0113
jmp .Lt_0105
.Lt_0113:
.Lt_0112:
cmp dword ptr [ebp-24], 0
je .Lt_0115
push dword ptr [ebp-16]
push dword ptr [ebp+16]
call RTLCALCSTRLEN
add esp, 8
mov dword ptr [ebp-36], eax
mov dword ptr [ebp-32], edx
jmp .Lt_0114
.Lt_0115:
push dword ptr [ebp+16]
call RTLCALCEXPRLEN
add esp, 4
mov dword ptr [ebp-36], eax
mov dword ptr [ebp-32], edx
.Lt_0114:
cmp dword ptr [ebp+20], 0
jne .Lt_0117
push 0
push 7
push dword ptr [ebp-32]
push dword ptr [ebp-36]
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-12], eax
jmp .Lt_0116
.Lt_0117:
push 1
push 0
push 0
push 7
push dword ptr [ebp-32]
push dword ptr [ebp-36]
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp+20]
push 30
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp-12], eax
.Lt_0116:
mov eax, dword ptr [ebp+16]
mov edx, dword ptr [eax+4]
and edx, 511
cmp edx, 18
jne .Lt_0119
mov edx, dword ptr [ebp+16]
mov eax, dword ptr [edx+8]
movsx edx, word ptr [eax+112]
and edx, 4
test edx, edx
je .Lt_011B
push 10
push 0
push 3
mov edx, dword ptr [ebp-8]
push dword ptr [edx+12]
call ERRREPORTPARAMWARN
add esp, 16
.Lt_011B:
.Lt_011A:
jmp .Lt_0118
.Lt_0119:
mov edx, dword ptr [ebp+16]
mov eax, dword ptr [edx+4]
and eax, 511
and eax, 480
test eax, eax
je .Lt_011C
push 29
push 0
push 3
mov eax, dword ptr [ebp-8]
push dword ptr [eax+12]
call ERRREPORTPARAMWARN
add esp, 16
.Lt_011C:
.Lt_0118:
push -1
push -2147483648
push dword ptr [ebp+16]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_011E
jmp .Lt_0105
.Lt_011E:
.Lt_011D:
push -1
push -2147483648
push dword ptr [ebp-12]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0120
jmp .Lt_0105
.Lt_0120:
.Lt_011F:
cmp dword ptr [ebp+24], 0
jne .Lt_0122
push dword ptr [ebp-8]
call RTLERRORCHECK
add esp, 4
push eax
call ASTADD
add esp, 4
.Lt_0122:
.Lt_0121:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0105:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size RTLFILEPUT, .-RTLFILEPUT
.balign 16

.globl RTLFILEPUTARRAY
RTLFILEPUTARRAY:
.type RTLFILEPUTARRAY, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
mov dword ptr [ebp-4], 0
.Lt_0125:
mov dword ptr [ebp-4], 0
cmp dword ptr [ebp+12], 0
jne .Lt_0128
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp+12], eax
.Lt_0128:
.Lt_0127:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 511
mov dword ptr [ebp-16], ebx
mov ebx, dword ptr [ebp-16]
and ebx, 480
je .Lt_0129
mov dword ptr [ebp-20], 22
jmp .Lt_013A
.Lt_0129:
mov ebx, dword ptr [ebp-16]
and ebx, 31
mov dword ptr [ebp-20], ebx
.Lt_013A:
mov ebx, dword ptr [ebp-20]
imul ebx, 28
cmp dword ptr [SYMB_DTYPETB+ebx+4], 8
jne .Lt_012C
push 233
push offset Lt_0071
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_012B
.Lt_012C:
push 232
push offset Lt_0070
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
.Lt_012B:
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
jne .Lt_012E
jmp .Lt_0126
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
jmp .Lt_0126
.Lt_0130:
.Lt_012F:
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+4]
and ebx, 511
cmp ebx, 18
jne .Lt_0132
mov ebx, dword ptr [ebp+16]
mov eax, dword ptr [ebx+8]
movsx ebx, word ptr [eax+112]
and ebx, 4
test ebx, ebx
je .Lt_0134
push 10
push 0
push 3
mov ebx, dword ptr [ebp-8]
push dword ptr [ebx+12]
call ERRREPORTPARAMWARN
add esp, 16
.Lt_0134:
.Lt_0133:
jmp .Lt_0131
.Lt_0132:
mov ebx, dword ptr [ebp+16]
mov eax, dword ptr [ebx+4]
and eax, 511
and eax, 480
test eax, eax
je .Lt_0135
push 29
push 0
push 3
mov eax, dword ptr [ebp-8]
push dword ptr [eax+12]
call ERRREPORTPARAMWARN
add esp, 16
.Lt_0135:
.Lt_0131:
push -1
push -2147483648
push dword ptr [ebp+16]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0137
jmp .Lt_0126
.Lt_0137:
.Lt_0136:
cmp dword ptr [ebp+20], 0
jne .Lt_0139
push dword ptr [ebp-8]
call RTLERRORCHECK
add esp, 4
push eax
call ASTADD
add esp, 4
.Lt_0139:
.Lt_0138:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0126:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size RTLFILEPUTARRAY, .-RTLFILEPUTARRAY
.balign 16

.globl RTLFILEGET
RTLFILEGET:
.type RTLFILEGET, @function
push ebp
mov ebp, esp
sub esp, 44
push ebx
mov dword ptr [ebp-4], 0
.Lt_013B:
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+4]
and ebx, 511
mov dword ptr [ebp-16], ebx
push dword ptr [ebp-16]
call SYMBISSTRING
add esp, 4
mov dword ptr [ebp-24], eax
cmp dword ptr [ebp+12], 0
jne .Lt_013E
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp+12], eax
.Lt_013E:
.Lt_013D:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 511
mov dword ptr [ebp-20], ebx
mov ebx, dword ptr [ebp-20]
and ebx, 480
je .Lt_013F
mov dword ptr [ebp-44], 22
jmp .Lt_0166
.Lt_013F:
mov ebx, dword ptr [ebp-20]
and ebx, 31
mov dword ptr [ebp-44], ebx
.Lt_0166:
mov ebx, dword ptr [ebp-44]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx+4]
cmp eax, 8
sete al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-28], eax
cmp dword ptr [ebp+24], 0
je .Lt_0142
cmp dword ptr [ebp-24], 0
je .Lt_0144
cmp dword ptr [ebp-28], 0
je .Lt_0146
push 245
push offset Lt_007B
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-40], eax
jmp .Lt_0145
.Lt_0146:
push 244
push offset Lt_007A
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-40], eax
.Lt_0145:
jmp .Lt_0143
.Lt_0144:
cmp dword ptr [ebp-28], 0
je .Lt_0148
push 243
push offset Lt_0079
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-40], eax
jmp .Lt_0147
.Lt_0148:
push 242
push offset Lt_0078
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-40], eax
.Lt_0147:
.Lt_0143:
jmp .Lt_0141
.Lt_0142:
cmp dword ptr [ebp-24], 0
je .Lt_014A
cmp dword ptr [ebp-28], 0
je .Lt_014C
push 237
push offset Lt_0075
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-40], eax
jmp .Lt_014B
.Lt_014C:
push 236
push offset Lt_0074
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-40], eax
.Lt_014B:
jmp .Lt_0149
.Lt_014A:
cmp dword ptr [ebp-28], 0
je .Lt_014E
push 235
push offset Lt_0073
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-40], eax
jmp .Lt_014D
.Lt_014E:
push 234
push offset Lt_0072
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-40], eax
.Lt_014D:
.Lt_0149:
.Lt_0141:
push 0
push dword ptr [ebp-40]
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
jne .Lt_0150
jmp .Lt_013C
.Lt_0150:
.Lt_014F:
push -1
push -2147483648
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0152
jmp .Lt_013C
.Lt_0152:
.Lt_0151:
cmp dword ptr [ebp-24], 0
je .Lt_0154
push dword ptr [ebp-16]
push dword ptr [ebp+16]
call RTLCALCSTRLEN
add esp, 8
mov dword ptr [ebp-36], eax
mov dword ptr [ebp-32], edx
jmp .Lt_0153
.Lt_0154:
push dword ptr [ebp+16]
call RTLCALCEXPRLEN
add esp, 4
mov dword ptr [ebp-36], eax
mov dword ptr [ebp-32], edx
.Lt_0153:
cmp dword ptr [ebp+20], 0
jne .Lt_0156
push 0
push 7
push dword ptr [ebp-32]
push dword ptr [ebp-36]
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-12], eax
jmp .Lt_0155
.Lt_0156:
push 1
push 0
push 0
push 7
push dword ptr [ebp-32]
push dword ptr [ebp-36]
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp+20]
push 30
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp-12], eax
.Lt_0155:
cmp dword ptr [ebp-16], 18
jne .Lt_0158
mov eax, dword ptr [ebp+16]
mov edx, dword ptr [eax+8]
movsx eax, word ptr [edx+112]
and eax, 4
test eax, eax
je .Lt_015A
push 10
push 0
push 3
mov eax, dword ptr [ebp-8]
push dword ptr [eax+12]
call ERRREPORTPARAMWARN
add esp, 16
.Lt_015A:
.Lt_0159:
jmp .Lt_0157
.Lt_0158:
mov eax, dword ptr [ebp+16]
mov edx, dword ptr [eax+4]
and edx, 511
and edx, 480
test edx, edx
je .Lt_015B
push 29
push 0
push 3
mov edx, dword ptr [ebp-8]
push dword ptr [edx+12]
call ERRREPORTPARAMWARN
add esp, 16
.Lt_015B:
.Lt_0157:
push -1
push -2147483648
push dword ptr [ebp+16]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_015D
jmp .Lt_013C
.Lt_015D:
.Lt_015C:
push -1
push -2147483648
push dword ptr [ebp-12]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_015F
jmp .Lt_013C
.Lt_015F:
.Lt_015E:
cmp dword ptr [ebp+24], 0
je .Lt_0161
push -1
push -2147483648
push dword ptr [ebp+24]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0163
jmp .Lt_013C
.Lt_0163:
.Lt_0162:
.Lt_0161:
.Lt_0160:
cmp dword ptr [ebp+28], 0
jne .Lt_0165
push dword ptr [ebp-8]
call RTLERRORCHECK
add esp, 4
push eax
call ASTADD
add esp, 4
.Lt_0165:
.Lt_0164:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_013C:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size RTLFILEGET, .-RTLFILEGET
.balign 16

.globl RTLFILEGETARRAY
RTLFILEGETARRAY:
.type RTLFILEGETARRAY, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
mov dword ptr [ebp-4], 0
.Lt_0168:
mov dword ptr [ebp-4], 0
cmp dword ptr [ebp+12], 0
jne .Lt_016B
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp+12], eax
.Lt_016B:
.Lt_016A:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 511
mov dword ptr [ebp-16], ebx
mov ebx, dword ptr [ebp-16]
and ebx, 480
je .Lt_016C
mov dword ptr [ebp-24], 22
jmp .Lt_0185
.Lt_016C:
mov ebx, dword ptr [ebp-16]
and ebx, 31
mov dword ptr [ebp-24], ebx
.Lt_0185:
mov ebx, dword ptr [ebp-24]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx+4]
cmp eax, 8
sete al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp+20], 0
je .Lt_016F
cmp dword ptr [ebp-20], 0
je .Lt_0171
push 249
push offset Lt_007D
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_0170
.Lt_0171:
push 248
push offset Lt_007C
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
.Lt_0170:
jmp .Lt_016E
.Lt_016F:
cmp dword ptr [ebp-20], 0
je .Lt_0173
push 241
push offset Lt_0077
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_0172
.Lt_0173:
push 240
push offset Lt_0076
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
.Lt_0172:
.Lt_016E:
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
jne .Lt_0175
jmp .Lt_0169
.Lt_0175:
.Lt_0174:
push -1
push -2147483648
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0177
jmp .Lt_0169
.Lt_0177:
.Lt_0176:
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+4]
and ebx, 511
cmp ebx, 18
jne .Lt_0179
mov ebx, dword ptr [ebp+16]
mov eax, dword ptr [ebx+8]
movsx ebx, word ptr [eax+112]
and ebx, 4
test ebx, ebx
je .Lt_017B
push 10
push 0
push 3
mov ebx, dword ptr [ebp-8]
push dword ptr [ebx+12]
call ERRREPORTPARAMWARN
add esp, 16
.Lt_017B:
.Lt_017A:
jmp .Lt_0178
.Lt_0179:
mov ebx, dword ptr [ebp+16]
mov eax, dword ptr [ebx+4]
and eax, 511
and eax, 480
test eax, eax
je .Lt_017C
push 29
push 0
push 3
mov eax, dword ptr [ebp-8]
push dword ptr [eax+12]
call ERRREPORTPARAMWARN
add esp, 16
.Lt_017C:
.Lt_0178:
push -1
push -2147483648
push dword ptr [ebp+16]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_017E
jmp .Lt_0169
.Lt_017E:
.Lt_017D:
cmp dword ptr [ebp+20], 0
je .Lt_0180
push -1
push -2147483648
push dword ptr [ebp+20]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0182
jmp .Lt_0169
.Lt_0182:
.Lt_0181:
.Lt_0180:
.Lt_017F:
cmp dword ptr [ebp+24], 0
jne .Lt_0184
push dword ptr [ebp-8]
call RTLERRORCHECK
add esp, 4
push eax
call ASTADD
add esp, 4
.Lt_0184:
.Lt_0183:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0169:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size RTLFILEGETARRAY, .-RTLFILEGETARRAY
.balign 16

.globl RTLFILESTRINPUT
RTLFILESTRINPUT:
.type RTLFILESTRINPUT, @function
push ebp
mov ebp, esp
sub esp, 12
mov dword ptr [ebp-4], 0
.Lt_0187:
mov dword ptr [ebp-4], 0
push 0
cmp dword ptr [ebp+16], 475
jne .Lt_0189
push 254
push offset Lt_009A
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_018F
.Lt_0189:
push 253
push offset Lt_0081
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
.Lt_018F:
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
jne .Lt_018C
jmp .Lt_0188
.Lt_018C:
.Lt_018B:
push -1
push -2147483648
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_018E
jmp .Lt_0188
.Lt_018E:
.Lt_018D:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0188:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size RTLFILESTRINPUT, .-RTLFILESTRINPUT
.balign 16

.globl RTLFILELINEINPUT
RTLFILELINEINPUT:
.type RTLFILELINEINPUT, @function
push ebp
mov ebp, esp
sub esp, 28
push ebx
mov dword ptr [ebp-4], 0
.Lt_0190:
mov dword ptr [ebp-4], 0
cmp dword ptr [ebp+8], 0
je .Lt_0193
push 255
push offset Lt_0082
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
mov dword ptr [ebp-16], 4
jmp .Lt_0192
.Lt_0193:
push 257
push offset Lt_0084
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
mov dword ptr [ebp-16], 6
.Lt_0192:
push 0
push dword ptr [ebp-12]
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp+8]
test eax, eax
sete al
shr eax, 1
sbb eax, eax
cmp dword ptr [ebp+12], 0
sete bl
shr ebx, 1
sbb ebx, ebx
and eax, ebx
je .Lt_0195
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
mov dword ptr [ebp+12], eax
.Lt_0195:
.Lt_0194:
push -1
push -2147483648
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0197
jmp .Lt_0191
.Lt_0197:
.Lt_0196:
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+4]
and ebx, 511
mov dword ptr [ebp-20], ebx
push dword ptr [ebp-20]
push dword ptr [ebp+16]
call RTLCALCSTRLEN
add esp, 8
mov dword ptr [ebp-28], eax
mov dword ptr [ebp-24], edx
push -1
push -2147483648
push dword ptr [ebp+16]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0199
jmp .Lt_0191
.Lt_0199:
.Lt_0198:
push -1
push -2147483648
push 0
push 7
push dword ptr [ebp-24]
push dword ptr [ebp-28]
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_019B
jmp .Lt_0191
.Lt_019B:
.Lt_019A:
push -1
push -2147483648
push 0
push 7
mov eax, dword ptr [ebp-20]
cmp eax, 17
sete al
shr eax, 1
sbb eax, eax
mov ebx, eax
mov edx, ebx
sar edx, 31
push edx
push ebx
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_019D
jmp .Lt_0191
.Lt_019D:
.Lt_019C:
cmp dword ptr [ebp-16], 6
jne .Lt_019F
push -1
push -2147483648
push 0
push 7
mov ebx, dword ptr [ebp+20]
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
jne .Lt_01A1
jmp .Lt_0191
.Lt_01A1:
.Lt_01A0:
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
jne .Lt_01A3
jmp .Lt_0191
.Lt_01A3:
.Lt_01A2:
.Lt_019F:
.Lt_019E:
push dword ptr [ebp-8]
call ASTADD
add esp, 4
mov dword ptr [ebp-4], -1
.Lt_0191:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size RTLFILELINEINPUT, .-RTLFILELINEINPUT
.balign 16

.globl RTLFILELINEINPUTWSTR
RTLFILELINEINPUTWSTR:
.type RTLFILELINEINPUTWSTR, @function
push ebp
mov ebp, esp
sub esp, 28
push ebx
mov dword ptr [ebp-4], 0
.Lt_01A7:
mov dword ptr [ebp-4], 0
cmp dword ptr [ebp+8], 0
je .Lt_01AA
push 256
push offset Lt_0083
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
mov dword ptr [ebp-16], 3
jmp .Lt_01A9
.Lt_01AA:
push 258
push offset Lt_0085
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
mov dword ptr [ebp-16], 5
.Lt_01A9:
push 0
push dword ptr [ebp-12]
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp+8]
test eax, eax
sete al
shr eax, 1
sbb eax, eax
cmp dword ptr [ebp+12], 0
sete bl
shr ebx, 1
sbb ebx, ebx
and eax, ebx
je .Lt_01AC
push 0
push -2147483648
push 0
push 0
push 0
push offset Lt_01AD
call SYMBALLOCWSTRCONST
add esp, 8
push eax
call ASTNEWVAR
add esp, 20
mov dword ptr [ebp+12], eax
.Lt_01AC:
.Lt_01AB:
push -1
push -2147483648
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_01AF
jmp .Lt_01A8
.Lt_01AF:
.Lt_01AE:
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+4]
and ebx, 511
mov dword ptr [ebp-20], ebx
push dword ptr [ebp-20]
push dword ptr [ebp+16]
call RTLCALCSTRLEN
add esp, 8
mov dword ptr [ebp-28], eax
mov dword ptr [ebp-24], edx
push -1
push -2147483648
push dword ptr [ebp+16]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_01B1
jmp .Lt_01A8
.Lt_01B1:
.Lt_01B0:
push -1
push -2147483648
push 0
push 7
push dword ptr [ebp-24]
push dword ptr [ebp-28]
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_01B3
jmp .Lt_01A8
.Lt_01B3:
.Lt_01B2:
cmp dword ptr [ebp-16], 5
jne .Lt_01B5
push -1
push -2147483648
push 0
push 7
mov edx, dword ptr [ebp+20]
mov eax, edx
sar eax, 31
push eax
push edx
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_01B7
jmp .Lt_01A8
.Lt_01B7:
.Lt_01B6:
push -1
push -2147483648
push 0
push 7
mov edx, dword ptr [ebp+24]
mov eax, edx
sar eax, 31
push eax
push edx
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_01B9
jmp .Lt_01A8
.Lt_01B9:
.Lt_01B8:
.Lt_01B5:
.Lt_01B4:
push dword ptr [ebp-8]
call ASTADD
add esp, 4
mov dword ptr [ebp-4], -1
.Lt_01A8:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size RTLFILELINEINPUTWSTR, .-RTLFILELINEINPUTWSTR
.balign 16

.globl RTLFILEINPUT
RTLFILEINPUT:
.type RTLFILEINPUT, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
mov dword ptr [ebp-4], 0
.Lt_01BC:
mov dword ptr [ebp-4], 0
cmp dword ptr [ebp+8], 0
je .Lt_01BF
push 259
push offset Lt_0086
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
mov dword ptr [ebp-16], 1
jmp .Lt_01BE
.Lt_01BF:
push 260
push offset Lt_0087
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
mov dword ptr [ebp-16], 3
.Lt_01BE:
push 0
push dword ptr [ebp-12]
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp+8]
test eax, eax
sete al
shr eax, 1
sbb eax, eax
cmp dword ptr [ebp+12], 0
sete bl
shr ebx, 1
sbb ebx, ebx
and eax, ebx
je .Lt_01C1
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
mov dword ptr [ebp+12], eax
.Lt_01C1:
.Lt_01C0:
push -1
push -2147483648
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_01C3
jmp .Lt_01BD
.Lt_01C3:
.Lt_01C2:
cmp dword ptr [ebp-16], 3
jne .Lt_01C5
push -1
push -2147483648
push 0
push 7
mov ebx, dword ptr [ebp+16]
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
jne .Lt_01C7
jmp .Lt_01BD
.Lt_01C7:
.Lt_01C6:
push -1
push -2147483648
push 0
push 7
mov ebx, dword ptr [ebp+20]
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
jne .Lt_01C9
jmp .Lt_01BD
.Lt_01C9:
.Lt_01C8:
.Lt_01C5:
.Lt_01C4:
push dword ptr [ebp-8]
call ASTADD
add esp, 4
mov dword ptr [ebp-4], -1
.Lt_01BD:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size RTLFILEINPUT, .-RTLFILEINPUT
.balign 16

.globl RTLFILEINPUTGET
RTLFILEINPUTGET:
.type RTLFILEINPUTGET, @function
push ebp
mov ebp, esp
sub esp, 44
push ebx
mov dword ptr [ebp-4], 0
.Lt_01CC:
mov dword ptr [ebp-4], 0
mov dword ptr [ebp-16], 1
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 511
mov dword ptr [ebp-20], ebx
mov ebx, dword ptr [ebp-20]
and ebx, 480
je .Lt_01CE
mov dword ptr [ebp-32], 22
jmp .Lt_01F4
.Lt_01CE:
mov ebx, dword ptr [ebp-20]
and ebx, 31
mov dword ptr [ebp-32], ebx
.Lt_01F4:
mov ebx, dword ptr [ebp-32]
mov dword ptr [ebp-36], ebx
jmp .Lt_01D1
.Lt_01D3:
push 271
push offset Lt_0092
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
mov dword ptr [ebp-16], 3
jmp .Lt_01D0
.Lt_01D4:
push 272
push offset Lt_0093
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
mov dword ptr [ebp-16], 2
jmp .Lt_01D0
.Lt_01D5:
mov eax, dword ptr [ebp-20]
and eax, 480
je .Lt_01D6
mov dword ptr [ebp-40], 22
jmp .Lt_01F5
.Lt_01D6:
mov eax, dword ptr [ebp-20]
and eax, 31
mov dword ptr [ebp-40], eax
.Lt_01F5:
mov eax, dword ptr [ebp-40]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+20]
mov dword ptr [ebp-44], ebx
jmp .Lt_01D9
.Lt_01DB:
push 261
push offset Lt_0088
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_01D8
.Lt_01DC:
push 262
push offset Lt_0089
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_01D8
.Lt_01DD:
push 263
push offset Lt_008A
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_01D8
.Lt_01DE:
push 264
push offset Lt_008B
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_01D8
.Lt_01DF:
push 265
push offset Lt_008C
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_01D8
.Lt_01E0:
push 266
push offset Lt_008D
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_01D8
.Lt_01E1:
push 267
push offset Lt_008E
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_01D8
.Lt_01E2:
push 268
push offset Lt_008F
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_01D8
.Lt_01D9:
cmp dword ptr [ebp-44], 7
ja .Lt_01D8
mov eax, dword ptr [ebp-44]
jmp dword ptr [.LT_01E3+eax*4]
.LT_01E3:
.int .Lt_01DB
.int .Lt_01DC
.int .Lt_01DD
.int .Lt_01DE
.int .Lt_01DF
.int .Lt_01E0
.int .Lt_01E1
.int .Lt_01E2
.Lt_01D8:
jmp .Lt_01D0
.Lt_01E4:
push 269
push offset Lt_0090
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_01D0
.Lt_01E5:
push 270
push offset Lt_0091
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_01D0
.Lt_01E6:
push 0
push 0
push 24
call ERRREPORT
add esp, 12
jmp .Lt_01CD
jmp .Lt_01D0
.Lt_01D1:
mov eax, dword ptr [ebp-36]
add eax, 4294967295
cmp eax, 21
ja .Lt_01E6
mov eax, dword ptr [ebp-36]
jmp dword ptr [.LT_01E7+eax*4-4]
.LT_01E7:
.int .Lt_01D5
.int .Lt_01D5
.int .Lt_01D3
.int .Lt_01D5
.int .Lt_01D5
.int .Lt_01D4
.int .Lt_01D5
.int .Lt_01D5
.int .Lt_01D5
.int .Lt_01D5
.int .Lt_01D5
.int .Lt_01D5
.int .Lt_01D5
.int .Lt_01E4
.int .Lt_01E5
.int .Lt_01D3
.int .Lt_01D3
.int .Lt_01E6
.int .Lt_01E6
.int .Lt_01E6
.int .Lt_01E6
.int .Lt_01D5
.Lt_01D0:
push 0
push dword ptr [ebp-12]
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-16], 1
jle .Lt_01E9
push dword ptr [ebp-20]
push dword ptr [ebp+8]
call RTLCALCSTRLEN
add esp, 8
mov dword ptr [ebp-28], eax
mov dword ptr [ebp-24], edx
.Lt_01E9:
.Lt_01E8:
push -1
push -2147483648
push dword ptr [ebp+8]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_01EB
jmp .Lt_01CD
.Lt_01EB:
.Lt_01EA:
cmp dword ptr [ebp-16], 1
jle .Lt_01ED
push -1
push -2147483648
push 0
push 7
push dword ptr [ebp-24]
push dword ptr [ebp-28]
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_01EF
jmp .Lt_01CD
.Lt_01EF:
.Lt_01EE:
cmp dword ptr [ebp-16], 2
jle .Lt_01F1
push -1
push -2147483648
push 0
push 7
mov eax, dword ptr [ebp-20]
cmp eax, 17
sete al
shr eax, 1
sbb eax, eax
mov ebx, eax
mov edx, ebx
sar edx, 31
push edx
push ebx
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_01F3
jmp .Lt_01CD
.Lt_01F3:
.Lt_01F2:
.Lt_01F1:
.Lt_01F0:
.Lt_01ED:
.Lt_01EC:
push dword ptr [ebp-8]
call ASTADD
add esp, 4
mov dword ptr [ebp-4], -1
.Lt_01CD:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size RTLFILEINPUTGET, .-RTLFILEINPUTGET
.balign 16

.globl RTLFILELOCK
RTLFILELOCK:
.type RTLFILELOCK, @function
push ebp
mov ebp, esp
sub esp, 36
push ebx
mov dword ptr [ebp-4], 0
.Lt_01F7:
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+4]
and ebx, 511
mov dword ptr [ebp-20], ebx
mov ebx, dword ptr [ebp+20]
mov eax, dword ptr [ebx+4]
and eax, 511
mov dword ptr [ebp-24], eax
mov eax, dword ptr [ebp-20]
and eax, 480
je .Lt_01F9
mov dword ptr [ebp-28], 22
jmp .Lt_0209
.Lt_01F9:
mov eax, dword ptr [ebp-20]
and eax, 31
mov dword ptr [ebp-28], eax
.Lt_0209:
mov eax, dword ptr [ebp-28]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+4]
cmp ebx, 8
sete bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-36], ebx
mov ebx, dword ptr [ebp-24]
and ebx, 480
je .Lt_01FB
mov dword ptr [ebp-32], 22
jmp .Lt_020A
.Lt_01FB:
mov ebx, dword ptr [ebp-24]
and ebx, 31
mov dword ptr [ebp-32], ebx
.Lt_020A:
mov ebx, dword ptr [ebp-32]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx+4]
cmp eax, 8
sete al
shr eax, 1
sbb eax, eax
or eax, dword ptr [ebp-36]
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp+8], 0
je .Lt_01FE
cmp dword ptr [ebp-16], 0
je .Lt_0200
push 274
push offset Lt_0095
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_01FF
.Lt_0200:
push 273
push offset Lt_0094
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
.Lt_01FF:
jmp .Lt_01FD
.Lt_01FE:
cmp dword ptr [ebp-16], 0
je .Lt_0202
push 276
push offset Lt_0097
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_0201
.Lt_0202:
push 275
push offset Lt_0096
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
.Lt_0201:
.Lt_01FD:
push 0
push dword ptr [ebp-12]
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-8], eax
push -1
push -2147483648
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0204
jmp .Lt_01F8
.Lt_0204:
.Lt_0203:
push -1
push -2147483648
push dword ptr [ebp+16]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0206
jmp .Lt_01F8
.Lt_0206:
.Lt_0205:
push -1
push -2147483648
push dword ptr [ebp+20]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0208
jmp .Lt_01F8
.Lt_0208:
.Lt_0207:
push dword ptr [ebp-8]
call ASTADD
add esp, 4
mov dword ptr [ebp-4], -1
.Lt_01F8:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size RTLFILELOCK, .-RTLFILELOCK
.balign 16

.globl RTLFILERENAME
RTLFILERENAME:
.type RTLFILERENAME, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_020E:
mov dword ptr [ebp-4], 0
push 0
push 277
push offset Lt_0098
call RTLPROCLOOKUP
add esp, 8
push eax
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-8], eax
push -1
push -2147483648
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0211
jmp .Lt_020F
.Lt_0211:
.Lt_0210:
push -1
push -2147483648
push dword ptr [ebp+8]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0213
jmp .Lt_020F
.Lt_0213:
.Lt_0212:
cmp dword ptr [ebp+16], 0
jne .Lt_0215
push dword ptr [ebp-8]
call RTLERRORCHECK
add esp, 4
push eax
call ASTADD
add esp, 4
.Lt_0215:
.Lt_0214:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_020F:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size RTLFILERENAME, .-RTLFILERENAME
.balign 16

.globl RTLWIDTHFILE
RTLWIDTHFILE:
.type RTLWIDTHFILE, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_0216:
mov dword ptr [ebp-4], 0
push 0
push 280
push offset Lt_0218
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
jne .Lt_021A
jmp .Lt_0217
.Lt_021A:
.Lt_0219:
push -1
push -2147483648
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_021C
jmp .Lt_0217
.Lt_021C:
.Lt_021B:
cmp dword ptr [ebp+16], 0
jne .Lt_021E
push dword ptr [ebp-8]
call RTLERRORCHECK
add esp, 4
push eax
call ASTADD
add esp, 4
.Lt_021E:
.Lt_021D:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0217:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size RTLWIDTHFILE, .-RTLWIDTHFILE
.balign 16
fb_ctor__rtlzfile:
.type fb_ctor__rtlzfile, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__rtlzfile, .-fb_ctor__rtlzfile
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
	#fbc-1.01.0/src/compiler/rtl-file.bas' compilation took 0.04171697807032615 secs

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
.int Lt_0060
.long 0
.int 10
.int -1
.long 0
.int 0
.int 6
.int 16
.int 2
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
.int Lt_0061
.long 0
.int 10
.int -1
.long 0
.int 0
.int 7
.int 16
.int 2
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
.int 35
.int 1
.int 0
.skip 8,0
.skip 180,0
.int Lt_0062
.long 0
.int 10
.int -1
.long 0
.int 0
.int 6
.int 16
.int 2
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
.int 10
.int 1
.int 0
.skip 8,0
.int 16
.int 2
.int 0
.skip 8,0
.int 16
.int 2
.int 0
.skip 8,0
.skip 200,0
.int Lt_0063
.long 0
.int 10
.int -1
.long 0
.int 0
.int 7
.int 16
.int 2
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
.int 35
.int 1
.int 0
.skip 8,0
.skip 180,0
.int Lt_0064
.long 0
.int 10
.int -1
.long 0
.int 0
.int 7
.int 16
.int 2
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
.int 35
.int 1
.int 0
.skip 8,0
.skip 180,0
.int Lt_0065
.long 0
.int 10
.int -1
.long 0
.int 0
.int 7
.int 16
.int 2
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
.int 35
.int 1
.int 0
.skip 8,0
.skip 180,0
.int Lt_0066
.long 0
.int 10
.int -1
.long 0
.int 0
.int 7
.int 16
.int 2
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
.int 35
.int 1
.int 0
.skip 8,0
.skip 180,0
.int Lt_0067
.long 0
.int 10
.int -1
.int RTLPRINTER_CB
.int 0
.int 7
.int 16
.int 2
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
.int 35
.int 1
.int 0
.skip 8,0
.skip 180,0
.int Lt_0068
.long 0
.int 10
.int -1
.long 0
.int 0
.int 7
.int 16
.int 2
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
.int 35
.int 1
.int 0
.skip 8,0
.skip 180,0
.int Lt_0069
.long 0
.int 10
.int -1
.long 0
.int 0
.int 6
.int 16
.int 2
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
.int Lt_006A
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
.int Lt_006B
.long 0
.int 10
.int -1
.long 0
.int 0
.int 0
.skip 320,0
.int Lt_006C
.long 0
.int 10
.int -1
.long 0
.int 0
.int 4
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 0
.int 2
.int 0
.skip 8,0
.int 8
.int 1
.int 0
.skip 8,0
.skip 240,0
.int Lt_006D
.long 0
.int 10
.int -1
.long 0
.int 0
.int 4
.int 10
.int 1
.int 0
.skip 8,0
.int 12
.int 1
.int 0
.skip 8,0
.int 0
.int 2
.int 0
.skip 8,0
.int 8
.int 1
.int 0
.skip 8,0
.skip 240,0
.int Lt_006E
.long 0
.int 10
.int -1
.long 0
.int 0
.int 4
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 0
.int 2
.int 0
.skip 8,0
.int 7
.int 1
.int 0
.skip 8,0
.skip 240,0
.int Lt_006F
.long 0
.int 10
.int -1
.long 0
.int 0
.int 4
.int 10
.int 1
.int 0
.skip 8,0
.int 12
.int 1
.int 0
.skip 8,0
.int 0
.int 2
.int 0
.skip 8,0
.int 7
.int 1
.int 0
.skip 8,0
.skip 240,0
.int Lt_0070
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
.int 10
.int 1
.int 0
.skip 8,0
.int 0
.int 3
.int 0
.skip 8,0
.skip 260,0
.int Lt_0071
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
.int 0
.int 3
.int 0
.skip 8,0
.skip 260,0
.int Lt_0072
.long 0
.int 10
.int -1
.long 0
.int 0
.int 4
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 0
.int 2
.int 0
.skip 8,0
.int 8
.int 1
.int 0
.skip 8,0
.skip 240,0
.int Lt_0073
.long 0
.int 10
.int -1
.long 0
.int 0
.int 4
.int 10
.int 1
.int 0
.skip 8,0
.int 12
.int 1
.int 0
.skip 8,0
.int 0
.int 2
.int 0
.skip 8,0
.int 8
.int 1
.int 0
.skip 8,0
.skip 240,0
.int Lt_0074
.long 0
.int 10
.int -1
.long 0
.int 0
.int 4
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 0
.int 2
.int 0
.skip 8,0
.int 7
.int 1
.int 0
.skip 8,0
.skip 240,0
.int Lt_0075
.long 0
.int 10
.int -1
.long 0
.int 0
.int 4
.int 10
.int 1
.int 0
.skip 8,0
.int 12
.int 1
.int 0
.skip 8,0
.int 0
.int 2
.int 0
.skip 8,0
.int 7
.int 1
.int 0
.skip 8,0
.skip 240,0
.int Lt_0076
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
.int 10
.int 1
.int 0
.skip 8,0
.int 0
.int 3
.int 0
.skip 8,0
.skip 260,0
.int Lt_0077
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
.int 0
.int 3
.int 0
.skip 8,0
.skip 260,0
.int Lt_0078
.long 0
.int 10
.int -1
.long 0
.int 0
.int 5
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 0
.int 2
.int 0
.skip 8,0
.int 8
.int 1
.int 0
.skip 8,0
.int 8
.int 2
.int 0
.skip 8,0
.skip 220,0
.int Lt_0079
.long 0
.int 10
.int -1
.long 0
.int 0
.int 5
.int 10
.int 1
.int 0
.skip 8,0
.int 12
.int 1
.int 0
.skip 8,0
.int 0
.int 2
.int 0
.skip 8,0
.int 8
.int 1
.int 0
.skip 8,0
.int 8
.int 2
.int 0
.skip 8,0
.skip 220,0
.int Lt_007A
.long 0
.int 10
.int -1
.long 0
.int 0
.int 5
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 0
.int 2
.int 0
.skip 8,0
.int 7
.int 1
.int 0
.skip 8,0
.int 8
.int 2
.int 0
.skip 8,0
.skip 220,0
.int Lt_007B
.long 0
.int 10
.int -1
.long 0
.int 0
.int 5
.int 10
.int 1
.int 0
.skip 8,0
.int 12
.int 1
.int 0
.skip 8,0
.int 0
.int 2
.int 0
.skip 8,0
.int 7
.int 1
.int 0
.skip 8,0
.int 8
.int 2
.int 0
.skip 8,0
.skip 220,0
.int Lt_007C
.long 0
.int 10
.int -1
.long 0
.int 0
.int 4
.int 10
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
.int 8
.int 2
.int 0
.skip 8,0
.skip 240,0
.int Lt_007D
.long 0
.int 10
.int -1
.long 0
.int 0
.int 4
.int 10
.int 1
.int 0
.skip 8,0
.int 12
.int 1
.int 0
.skip 8,0
.int 0
.int 3
.int 0
.skip 8,0
.int 8
.int 2
.int 0
.skip 8,0
.skip 240,0
.int Lt_007E
.long 0
.int 12
.int -1
.long 0
.int 0
.int 1
.int 10
.int 1
.int 0
.skip 8,0
.skip 300,0
.int Lt_007F
.long 0
.int 10
.int -1
.long 0
.int 0
.int 2
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.skip 280,0
.int Lt_0080
.long 0
.int 10
.int -1
.long 0
.int 0
.int 2
.int 10
.int 1
.int 0
.skip 8,0
.int 12
.int 1
.int 0
.skip 8,0
.skip 280,0
.int Lt_0081
.long 0
.int 16
.int -1
.long 0
.int 0
.int 2
.int 7
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int -1
.int 0
.skip 4,0
.skip 280,0
.int Lt_0082
.long 0
.int 10
.int -1
.long 0
.int 0
.int 4
.int 10
.int 1
.int 0
.skip 8,0
.int 0
.int 2
.int 0
.skip 8,0
.int 7
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int -1
.int 1
.skip 4,0
.skip 240,0
.int Lt_0083
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
.int 7
.int 1
.int 0
.skip 8,0
.skip 260,0
.int Lt_0084
.long 0
.int 10
.int -1
.long 0
.int 0
.int 6
.int 16
.int 2
.int 0
.skip 8,0
.int 0
.int 2
.int 0
.skip 8,0
.int 7
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
.int Lt_0085
.long 0
.int 10
.int -1
.long 0
.int 0
.int 5
.int 38
.int 1
.int 0
.skip 8,0
.int 38
.int 1
.int 0
.skip 8,0
.int 7
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
.skip 220,0
.int Lt_0086
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
.int Lt_0087
.long 0
.int 10
.int -1
.long 0
.int 0
.int 3
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
.skip 260,0
.int Lt_0088
.long 0
.int 10
.int -1
.long 0
.int 0
.int 1
.int 1
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
.int 1
.int 2
.int 2
.int 0
.skip 8,0
.skip 300,0
.int Lt_008A
.long 0
.int 10
.int -1
.long 0
.int 0
.int 1
.int 4
.int 2
.int 0
.skip 8,0
.skip 300,0
.int Lt_008B
.long 0
.int 10
.int -1
.long 0
.int 0
.int 1
.int 5
.int 2
.int 0
.skip 8,0
.skip 300,0
.int Lt_008C
.long 0
.int 10
.int -1
.long 0
.int 0
.int 1
.int 10
.int 2
.int 0
.skip 8,0
.skip 300,0
.int Lt_008D
.long 0
.int 10
.int -1
.long 0
.int 0
.int 1
.int 11
.int 2
.int 0
.skip 8,0
.skip 300,0
.int Lt_008E
.long 0
.int 10
.int -1
.long 0
.int 0
.int 1
.int 12
.int 2
.int 0
.skip 8,0
.skip 300,0
.int Lt_008F
.long 0
.int 10
.int -1
.long 0
.int 0
.int 1
.int 13
.int 2
.int 0
.skip 8,0
.skip 300,0
.int Lt_0090
.long 0
.int 10
.int -1
.long 0
.int 0
.int 1
.int 14
.int 2
.int 0
.skip 8,0
.skip 300,0
.int Lt_0091
.long 0
.int 10
.int -1
.long 0
.int 0
.int 1
.int 15
.int 2
.int 0
.skip 8,0
.skip 300,0
.int Lt_0092
.long 0
.int 10
.int -1
.long 0
.int 0
.int 3
.int 0
.int 2
.int 0
.skip 8,0
.int 7
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int -1
.int 1
.skip 4,0
.skip 260,0
.int Lt_0093
.long 0
.int 10
.int -1
.long 0
.int 0
.int 2
.int 38
.int 1
.int 0
.skip 8,0
.int 7
.int 1
.int 0
.skip 8,0
.skip 280,0
.int Lt_0094
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
.int 11
.int 1
.int 0
.skip 8,0
.int 11
.int 1
.int -1
.int 0
.skip 4,0
.skip 260,0
.int Lt_0095
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
.int 12
.int 1
.int -1
.int 0
.skip 4,0
.skip 260,0
.int Lt_0096
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
.int 11
.int 1
.int 0
.skip 8,0
.int 11
.int 1
.int -1
.int 0
.skip 4,0
.skip 260,0
.int Lt_0097
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
.int 12
.int 1
.int -1
.int 0
.skip 4,0
.skip 260,0
.int Lt_0098
.int Lt_0099
.int 10
.int 3
.long 0
.int 0
.int 2
.int 35
.int 1
.int 0
.skip 8,0
.int 35
.int 1
.int 0
.skip 8,0
.skip 280,0
.int Lt_009A
.long 0
.int 6
.int -1
.long 0
.int 0
.int 2
.int 7
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int -1
.int 0
.skip 4,0
.skip 280,0
.int Lt_009B
.int Lt_009C
.int 10
.int -1
.long 0
.int 0
.int 0
.skip 320,0
.int Lt_009D
.int Lt_009E
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
.int Lt_009F
.int Lt_00A0
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
.int Lt_00A1
.int Lt_00A2
.int 0
.int -1
.long 0
.int 1
.int 0
.skip 320,0
.int Lt_00A1
.int Lt_00A3
.int 0
.int -1
.long 0
.int 1
.int 1
.int 10
.int 1
.int 0
.skip 8,0
.skip 300,0
.int Lt_00A4
.int Lt_00A5
.int 12
.int -1
.long 0
.int 0
.int 1
.int 10
.int 1
.int 0
.skip 8,0
.skip 300,0
.int Lt_00A6
.int Lt_00A7
.int 12
.int -1
.long 0
.int 0
.int 1
.int 10
.int 1
.int 0
.skip 8,0
.skip 300,0
.int Lt_00A8
.int Lt_00A9
.int 10
.int -1
.int RTLPRINTER_CB
.int 0
.int 1
.int 10
.int 1
.int 0
.skip 8,0
.skip 300,0
.long 0
.skip 344,0

.section .rodata
.balign 4
Lt_0060:	.ascii	"fb_FileOpen\0"
.balign 4
Lt_0061:	.ascii	"fb_FileOpenEncod\0"
.balign 4
Lt_0062:	.ascii	"fb_FileOpenShort\0"
.balign 4
Lt_0063:	.ascii	"fb_FileOpenCons\0"
.balign 4
Lt_0064:	.ascii	"fb_FileOpenErr\0"
.balign 4
Lt_0065:	.ascii	"fb_FileOpenPipe\0"
.balign 4
Lt_0066:	.ascii	"fb_FileOpenScrn\0"
.balign 4
Lt_0067:	.ascii	"fb_FileOpenLpt\0"
.balign 4
Lt_0068:	.ascii	"fb_FileOpenCom\0"
.balign 4
Lt_0069:	.ascii	"fb_FileOpenQB\0"
.balign 4
Lt_006A:	.ascii	"fb_FileClose\0"
.balign 4
Lt_006B:	.ascii	"fb_FileCloseAll\0"
.balign 4
Lt_006C:	.ascii	"fb_FilePut\0"
.balign 4
Lt_006D:	.ascii	"fb_FilePutLarge\0"
.balign 4
Lt_006E:	.ascii	"fb_FilePutStr\0"
.balign 4
Lt_006F:	.ascii	"fb_FilePutStrLarge\0"
.balign 4
Lt_0070:	.ascii	"fb_FilePutArray\0"
.balign 4
Lt_0071:	.ascii	"fb_FilePutArrayLarge\0"
.balign 4
Lt_0072:	.ascii	"fb_FileGet\0"
.balign 4
Lt_0073:	.ascii	"fb_FileGetLarge\0"
.balign 4
Lt_0074:	.ascii	"fb_FileGetStr\0"
.balign 4
Lt_0075:	.ascii	"fb_FileGetStrLarge\0"
.balign 4
Lt_0076:	.ascii	"fb_FileGetArray\0"
.balign 4
Lt_0077:	.ascii	"fb_FileGetArrayLarge\0"
.balign 4
Lt_0078:	.ascii	"fb_FileGetIOB\0"
.balign 4
Lt_0079:	.ascii	"fb_FileGetLargeIOB\0"
.balign 4
Lt_007A:	.ascii	"fb_FileGetStrIOB\0"
.balign 4
Lt_007B:	.ascii	"fb_FileGetStrLargeIOB\0"
.balign 4
Lt_007C:	.ascii	"fb_FileGetArrayIOB\0"
.balign 4
Lt_007D:	.ascii	"fb_FileGetArrayLargeIOB\0"
.balign 4
Lt_007E:	.ascii	"fb_FileTell\0"
.balign 4
Lt_007F:	.ascii	"fb_FileSeek\0"
.balign 4
Lt_0080:	.ascii	"fb_FileSeekLarge\0"
.balign 4
Lt_0081:	.ascii	"fb_FileStrInput\0"
.balign 4
Lt_0082:	.ascii	"fb_FileLineInput\0"
.balign 4
Lt_0083:	.ascii	"fb_FileLineInputWstr\0"
.balign 4
Lt_0084:	.ascii	"fb_LineInput\0"
.balign 4
Lt_0085:	.ascii	"fb_LineInputWstr\0"
.balign 4
Lt_0086:	.ascii	"fb_FileInput\0"
.balign 4
Lt_0087:	.ascii	"fb_ConsoleInput\0"
.balign 4
Lt_0088:	.ascii	"fb_InputByte\0"
.balign 4
Lt_0089:	.ascii	"fb_InputUbyte\0"
.balign 4
Lt_008A:	.ascii	"fb_InputShort\0"
.balign 4
Lt_008B:	.ascii	"fb_InputUshort\0"
.balign 4
Lt_008C:	.ascii	"fb_InputInt\0"
.balign 4
Lt_008D:	.ascii	"fb_InputUint\0"
.balign 4
Lt_008E:	.ascii	"fb_InputLongint\0"
.balign 4
Lt_008F:	.ascii	"fb_InputUlongint\0"
.balign 4
Lt_0090:	.ascii	"fb_InputSingle\0"
.balign 4
Lt_0091:	.ascii	"fb_InputDouble\0"
.balign 4
Lt_0092:	.ascii	"fb_InputString\0"
.balign 4
Lt_0093:	.ascii	"fb_InputWstr\0"
.balign 4
Lt_0094:	.ascii	"fb_FileLock\0"
.balign 4
Lt_0095:	.ascii	"fb_FileLockLarge\0"
.balign 4
Lt_0096:	.ascii	"fb_FileUnlock\0"
.balign 4
Lt_0097:	.ascii	"fb_FileUnlockLarge\0"
.balign 4
Lt_0098:	.ascii	"fb_rename\0"
.balign 4
Lt_0099:	.ascii	"rename\0"
.balign 4
Lt_009A:	.ascii	"fb_FileWstrInput\0"
.balign 4
Lt_009B:	.ascii	"freefile\0"
.balign 4
Lt_009C:	.ascii	"fb_FileFree\0"
.balign 4
Lt_009D:	.ascii	"eof\0"
.balign 4
Lt_009E:	.ascii	"fb_FileEof\0"
.balign 4
Lt_009F:	.ascii	"kill\0"
.balign 4
Lt_00A0:	.ascii	"fb_FileKill\0"
.balign 4
Lt_00A1:	.ascii	"reset\0"
.balign 4
Lt_00A2:	.ascii	"fb_FileReset\0"
.balign 4
Lt_00A3:	.ascii	"fb_FileResetEx\0"
.balign 4
Lt_00A4:	.ascii	"lof\0"
.balign 4
Lt_00A5:	.ascii	"fb_FileSize\0"
.balign 4
Lt_00A6:	.ascii	"loc\0"
.balign 4
Lt_00A7:	.ascii	"fb_FileLocation\0"
.balign 4
Lt_00A8:	.ascii	"lpos\0"
.balign 4
Lt_00A9:	.ascii	"fb_LPos\0"
.balign 4
Lt_00C7:	.ascii	"gdi32\0"
.balign 4
Lt_00C8:	.ascii	"winspool\0"
.balign 4
Lt_01AD:	.ascii	"\0\0\0\0"
.balign 4
Lt_0218:	.ascii	"fb_WidthFile\0"

.section .ctors, "aw", @progbits
.int fb_ctor__rtlzfile
