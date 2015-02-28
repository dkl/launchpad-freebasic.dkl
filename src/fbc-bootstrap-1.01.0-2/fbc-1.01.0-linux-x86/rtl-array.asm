	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/rtl-array.bas' compilation started at 15:27:37 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl RTLARRAYMODINIT
RTLARRAYMODINIT:
.type RTLARRAYMODINIT, @function
.Lt_0070:
push offset FUNCDATA
call RTLADDINTRINSICPROCS
add esp, 4
.Lt_0071:
ret
.size RTLARRAYMODINIT, .-RTLARRAYMODINIT
.balign 16

.globl RTLARRAYMODEND
RTLARRAYMODEND:
.type RTLARRAYMODEND, @function
.Lt_0072:
.Lt_0073:
ret
.size RTLARRAYMODEND, .-RTLARRAYMODEND
.balign 16

.globl RTLARRAYCLEAR
RTLARRAYCLEAR:
.type RTLARRAYCLEAR, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
mov dword ptr [ebp-4], 0
.Lt_0094:
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 511
mov dword ptr [ebp-12], ebx
cmp dword ptr [ebp-12], 18
jne .Lt_0097
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+8]
mov dword ptr [ebp-24], eax
push dword ptr [ebp-24]
call SYMBGETCOMPDEFCTOR
add esp, 4
mov dword ptr [ebp-16], eax
push dword ptr [ebp-24]
call SYMBGETCOMPDTOR
add esp, 4
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-16], 0
sete al
shr eax, 1
sbb eax, eax
push dword ptr [ebp-24]
mov ebx, eax
call SYMBGETCOMPCTORHEAD
add esp, 4
test eax, eax
setne cl
shr ecx, 1
sbb ecx, ecx
and ebx, ecx
je .Lt_0099
push 0
push 0
push 182
call ERRREPORT
add esp, 12
.Lt_0099:
.Lt_0098:
jmp .Lt_0096
.Lt_0097:
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-20], 0
.Lt_0096:
cmp dword ptr [ebp-16], 0
setne cl
shr ecx, 1
sbb ecx, ecx
cmp dword ptr [ebp-20], 0
setne bl
shr ebx, 1
sbb ebx, ebx
or ecx, ebx
je .Lt_009B
push -1
push -1
push dword ptr [ebp-16]
call HCHECKDEFCTOR
add esp, 12
push -1
push -1
push dword ptr [ebp-20]
call HCHECKDTOR
add esp, 12
push 0
push 120
push offset Lt_0067
call RTLPROCLOOKUP
add esp, 8
push eax
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-8], eax
push -1
push dword ptr [ebp-12]
push dword ptr [ebp+8]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_009D
jmp .Lt_0095
.Lt_009D:
.Lt_009C:
push -1
push -2147483648
push dword ptr [ebp-16]
call HBUILDPROCPTR
add esp, 4
push eax
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_009F
jmp .Lt_0095
.Lt_009F:
.Lt_009E:
push -1
push -2147483648
push dword ptr [ebp-20]
call HBUILDPROCPTR
add esp, 4
push eax
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00A1
jmp .Lt_0095
.Lt_00A1:
.Lt_00A0:
push -1
push -2147483648
push 0
push 7
push 4294967295
push 4294967295
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00A3
jmp .Lt_0095
.Lt_00A3:
.Lt_00A2:
jmp .Lt_009A
.Lt_009B:
cmp dword ptr [ebp-12], 16
jne .Lt_00A4
push 0
push 118
push offset Lt_0065
call RTLPROCLOOKUP
add esp, 8
push eax
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-8], eax
push -1
push dword ptr [ebp-12]
push dword ptr [ebp+8]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00A6
jmp .Lt_0095
.Lt_00A6:
.Lt_00A5:
jmp .Lt_009A
.Lt_00A4:
push 0
push 119
push offset Lt_0066
call RTLPROCLOOKUP
add esp, 8
push eax
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-8], eax
push -1
push dword ptr [ebp-12]
push dword ptr [ebp+8]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00A8
jmp .Lt_0095
.Lt_00A8:
.Lt_00A7:
push -1
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
jne .Lt_00AA
jmp .Lt_0095
.Lt_00AA:
.Lt_00A9:
.Lt_009A:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0095:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size RTLARRAYCLEAR, .-RTLARRAYCLEAR
.balign 16

.globl RTLARRAYERASE
RTLARRAYERASE:
.type RTLARRAYERASE, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
mov dword ptr [ebp-4], 0
.Lt_00AF:
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 511
mov dword ptr [ebp-12], ebx
cmp dword ptr [ebp-12], 18
jne .Lt_00B2
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+8]
call SYMBGETCOMPDTOR
add esp, 4
mov dword ptr [ebp-16], eax
jmp .Lt_00B1
.Lt_00B2:
mov dword ptr [ebp-16], 0
.Lt_00B1:
cmp dword ptr [ebp-16], 0
je .Lt_00B4
push -1
push dword ptr [ebp+16]
push dword ptr [ebp-16]
call HCHECKDTOR
add esp, 12
cmp dword ptr [ebp+12], 0
je .Lt_00B6
push 0
push 122
push offset Lt_0069
call RTLPROCLOOKUP
add esp, 8
push eax
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-8], eax
jmp .Lt_00B5
.Lt_00B6:
push 0
push 117
push offset Lt_0064
call RTLPROCLOOKUP
add esp, 8
push eax
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-8], eax
.Lt_00B5:
push -1
push dword ptr [ebp-12]
push dword ptr [ebp+8]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00B8
jmp .Lt_00B0
.Lt_00B8:
.Lt_00B7:
push -1
push -2147483648
push dword ptr [ebp-16]
call HBUILDPROCPTR
add esp, 4
push eax
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00BA
jmp .Lt_00B0
.Lt_00BA:
.Lt_00B9:
jmp .Lt_00B3
.Lt_00B4:
cmp dword ptr [ebp-12], 16
jne .Lt_00BB
cmp dword ptr [ebp+12], 0
je .Lt_00BD
push 0
push 123
push offset Lt_006A
call RTLPROCLOOKUP
add esp, 8
push eax
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-8], eax
jmp .Lt_00BC
.Lt_00BD:
push 0
push 118
push offset Lt_0065
call RTLPROCLOOKUP
add esp, 8
push eax
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-8], eax
.Lt_00BC:
push -1
push dword ptr [ebp-12]
push dword ptr [ebp+8]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00BF
jmp .Lt_00B0
.Lt_00BF:
.Lt_00BE:
jmp .Lt_00B3
.Lt_00BB:
cmp dword ptr [ebp+12], 0
jne .Lt_00C1
jmp .Lt_00B0
.Lt_00C1:
.Lt_00C0:
push 0
push 121
push offset Lt_0068
call RTLPROCLOOKUP
add esp, 8
push eax
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-8], eax
push -1
push dword ptr [ebp-12]
push dword ptr [ebp+8]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00C3
jmp .Lt_00B0
.Lt_00C3:
.Lt_00C2:
push -1
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
jne .Lt_00C5
jmp .Lt_00B0
.Lt_00C5:
.Lt_00C4:
.Lt_00B3:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_00B0:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size RTLARRAYERASE, .-RTLARRAYERASE
.balign 16

.globl RTLARRAYREDIM
RTLARRAYREDIM:
.type RTLARRAYREDIM, @function
push ebp
mov ebp, esp
sub esp, 52
push ebx
mov dword ptr [ebp-4], 0
.Lt_00CA:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+12]
mov dword ptr [ebp-20], ebx
mov ebx, dword ptr [ebp-20]
mov eax, dword ptr [ebx+24]
mov dword ptr [ebp-36], eax
mov eax, dword ptr [ebp-20]
mov ecx, dword ptr [eax+36]
mov ebx, dword ptr [eax+40]
mov dword ptr [ebp-44], ecx
mov dword ptr [ebp-40], ebx
lea ecx, [ebp-32]
push ecx
lea ecx, [ebp-28]
push ecx
mov ecx, dword ptr [ebp-20]
push dword ptr [ecx+28]
push dword ptr [ebp-36]
call HGETCTORDTORFORREDIM
add esp, 16
cmp dword ptr [ebp-28], 0
sete cl
shr ecx, 1
sbb ecx, ecx
cmp dword ptr [ebp-32], 0
sete bl
shr ebx, 1
sbb ebx, ebx
and ecx, ebx
je .Lt_00CD
cmp dword ptr [ebp+20], 0
jne .Lt_00CF
push 124
push offset Lt_005F
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-16], eax
jmp .Lt_00CE
.Lt_00CF:
push 126
push offset Lt_0060
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-16], eax
.Lt_00CE:
jmp .Lt_00CC
.Lt_00CD:
cmp dword ptr [ebp+20], 0
jne .Lt_00D1
push 125
push offset Lt_0061
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-16], eax
jmp .Lt_00D0
.Lt_00D1:
push 127
push offset Lt_0062
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-16], eax
.Lt_00D0:
.Lt_00CC:
push 0
push dword ptr [ebp-16]
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
jne .Lt_00D3
jmp .Lt_00CB
.Lt_00D3:
.Lt_00D2:
push -1
push -2147483648
push 0
push 7
push dword ptr [ebp-40]
push dword ptr [ebp-44]
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00D5
jmp .Lt_00CB
.Lt_00D5:
.Lt_00D4:
cmp dword ptr [ebp-28], 0
sete al
shr eax, 1
sbb eax, eax
cmp dword ptr [ebp-32], 0
sete bl
shr ebx, 1
sbb ebx, ebx
and eax, ebx
je .Lt_00D7
push -1
push -2147483648
push 0
push 7
mov eax, dword ptr [ebp+24]
mov ebx, eax
sar ebx, 31
push ebx
push eax
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00D9
jmp .Lt_00CB
.Lt_00D9:
.Lt_00D8:
push -1
push -2147483648
push 0
push 7
mov eax, dword ptr [ebp-36]
cmp eax, 16
sete al
shr eax, 1
sbb eax, eax
mov ecx, eax
mov ebx, ecx
sar ebx, 31
push ebx
push ecx
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00DB
jmp .Lt_00CB
.Lt_00DB:
.Lt_00DA:
jmp .Lt_00D6
.Lt_00D7:
push 0
push 0
push dword ptr [ebp-28]
call HCHECKDEFCTOR
add esp, 12
push 0
push 0
push dword ptr [ebp-32]
call HCHECKDTOR
add esp, 12
push -1
push -2147483648
push dword ptr [ebp-28]
call HBUILDPROCPTR
add esp, 4
push eax
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00DD
jmp .Lt_00CB
.Lt_00DD:
.Lt_00DC:
push -1
push -2147483648
push dword ptr [ebp-32]
call HBUILDPROCPTR
add esp, 4
push eax
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00DF
jmp .Lt_00CB
.Lt_00DF:
.Lt_00DE:
.Lt_00D6:
push -1
push -2147483648
push 0
push 7
mov ecx, dword ptr [ebp+12]
mov eax, ecx
sar eax, 31
push eax
push ecx
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00E1
jmp .Lt_00CB
.Lt_00E1:
.Lt_00E0:
mov dword ptr [ebp-48], 0
mov eax, dword ptr [ebp+12]
dec eax
mov dword ptr [ebp-52], eax
jmp .Lt_00E3
.Lt_00E6:
mov eax, dword ptr [ebp+16]
add eax, 32
mov ecx, dword ptr [eax]
imul ecx, dword ptr [ebp-48]
sal ecx, 2
mov eax, dword ptr [ebp+16]
add ecx, dword ptr [eax]
mov eax, dword ptr [ecx]
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp-12]
mov ecx, dword ptr [eax+4]
and ecx, 511
cmp ecx, 7
je .Lt_00E8
push 0
push 0
push dword ptr [ebp-12]
push 0
push 7
call ASTNEWCONV
add esp, 20
mov dword ptr [ebp-12], eax
.Lt_00E8:
.Lt_00E7:
push -1
push -2147483648
push dword ptr [ebp-12]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00EA
jmp .Lt_00CB
.Lt_00EA:
.Lt_00E9:
mov eax, dword ptr [ebp+16]
add eax, 32
mov ecx, dword ptr [eax]
imul ecx, dword ptr [ebp-48]
sal ecx, 2
mov eax, dword ptr [ebp+16]
add ecx, dword ptr [eax]
mov eax, dword ptr [ecx+4]
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp-12]
mov ecx, dword ptr [eax+4]
and ecx, 511
cmp ecx, 7
je .Lt_00EC
push 0
push 0
push dword ptr [ebp-12]
push 0
push 7
call ASTNEWCONV
add esp, 20
mov dword ptr [ebp-12], eax
.Lt_00EC:
.Lt_00EB:
push -1
push -2147483648
push dword ptr [ebp-12]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00EE
jmp .Lt_00CB
.Lt_00EE:
.Lt_00ED:
.Lt_00E4:
inc dword ptr [ebp-48]
.Lt_00E3:
mov eax, dword ptr [ebp-52]
cmp dword ptr [ebp-48], eax
jle .Lt_00E6
.Lt_00E5:
push dword ptr [ebp-8]
call RTLERRORCHECK
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_00CB:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size RTLARRAYREDIM, .-RTLARRAYREDIM
.balign 16

.globl RTLARRAYREDIMTO
RTLARRAYREDIMTO:
.type RTLARRAYREDIMTO, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
mov dword ptr [ebp-4], 0
.Lt_00F4:
lea eax, [ebp-16]
push eax
lea eax, [ebp-12]
push eax
push dword ptr [ebp+20]
push dword ptr [ebp+16]
call HGETCTORDTORFORREDIM
add esp, 16
push 0
push 128
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
jne .Lt_00F7
jmp .Lt_00F5
.Lt_00F7:
.Lt_00F6:
push -1
push -2147483648
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00F9
jmp .Lt_00F5
.Lt_00F9:
.Lt_00F8:
push -1
push -2147483648
push 0
push 7
mov eax, dword ptr [ebp+16]
and eax, 511
cmp eax, 16
sete al
shr eax, 1
sbb eax, eax
mov ecx, eax
mov ebx, ecx
sar ebx, 31
push ebx
push ecx
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00FB
jmp .Lt_00F5
.Lt_00FB:
.Lt_00FA:
push 0
push 0
push dword ptr [ebp-12]
call HCHECKDEFCTOR
add esp, 12
push 0
push 0
push dword ptr [ebp-16]
call HCHECKDTOR
add esp, 12
push -1
push -2147483648
push dword ptr [ebp-12]
call HBUILDPROCPTR
add esp, 4
push eax
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00FD
jmp .Lt_00F5
.Lt_00FD:
.Lt_00FC:
push -1
push -2147483648
push dword ptr [ebp-16]
call HBUILDPROCPTR
add esp, 4
push eax
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00FF
jmp .Lt_00F5
.Lt_00FF:
.Lt_00FE:
push dword ptr [ebp-8]
call RTLERRORCHECK
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_00F5:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size RTLARRAYREDIMTO, .-RTLARRAYREDIMTO
.balign 16

.globl RTLARRAYBOUND
RTLARRAYBOUND:
.type RTLARRAYBOUND, @function
push ebp
mov ebp, esp
sub esp, 12
mov dword ptr [ebp-4], 0
.Lt_0101:
mov dword ptr [ebp-4], 0
push 0
cmp dword ptr [ebp+16], 0
je .Lt_0103
push 129
push offset Lt_006B
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_0109
.Lt_0103:
push 130
push offset Lt_006C
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
.Lt_0109:
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
jne .Lt_0106
jmp .Lt_0102
.Lt_0106:
.Lt_0105:
push -1
push -2147483648
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0108
jmp .Lt_0102
.Lt_0108:
.Lt_0107:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0102:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size RTLARRAYBOUND, .-RTLARRAYBOUND
.balign 16

.globl RTLARRAYBOUNDSCHECK
RTLARRAYBOUNDSCHECK:
.type RTLARRAYBOUNDSCHECK, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_010A:
mov dword ptr [ebp-4], 0
cmp dword ptr [ebp+12], 0
jne .Lt_010D
push 131
push offset Lt_006D
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_010C
.Lt_010D:
push 132
push offset Lt_006E
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
.Lt_010C:
push 0
push dword ptr [ebp-12]
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-8], eax
push -1
push -2147483648
push 0
push 0
push dword ptr [ebp+8]
push 0
push 7
call ASTNEWCONV
add esp, 20
push eax
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_010F
jmp .Lt_010B
.Lt_010F:
.Lt_010E:
cmp dword ptr [ebp+12], 0
je .Lt_0111
push -1
push 7
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0113
jmp .Lt_010B
.Lt_0113:
.Lt_0112:
.Lt_0111:
.Lt_0110:
push -1
push 7
push dword ptr [ebp+16]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0115
jmp .Lt_010B
.Lt_0115:
.Lt_0114:
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
jne .Lt_0117
jmp .Lt_010B
.Lt_0117:
.Lt_0116:
push -1
push -2147483648
push dword ptr [ebp+24]
call ASTNEWCONSTSTR
add esp, 4
push eax
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0119
jmp .Lt_010B
.Lt_0119:
.Lt_0118:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_010B:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size RTLARRAYBOUNDSCHECK, .-RTLARRAYBOUNDSCHECK
.balign 16
fb_ctor__rtlzarray:
.type fb_ctor__rtlzarray, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__rtlzarray, .-fb_ctor__rtlzarray
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
HBUILDPROCPTR:
.type HBUILDPROCPTR, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_0074:
cmp dword ptr [ebp+8], 0
jne .Lt_0077
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-4], eax
jmp .Lt_0075
.Lt_0077:
.Lt_0076:
push dword ptr [ebp+8]
call ASTBUILDPROCADDROF
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_0075:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size HBUILDPROCPTR, .-HBUILDPROCPTR
.balign 16
HCHECKDEFCTOR:
.type HCHECKDEFCTOR, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0078:
cmp dword ptr [ebp+8], 0
jne .Lt_007B
jmp .Lt_0079
.Lt_007B:
cmp dword ptr [ebp+12], 0
je .Lt_007D
push dword ptr [ebp+8]
call SYMBCHECKACCESS
add esp, 4
test eax, eax
jne .Lt_007F
push 0
push 0
push 203
call ERRREPORT
add esp, 12
.Lt_007F:
.Lt_007E:
.Lt_007D:
.Lt_007C:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+80], 3
je .Lt_0081
push 0
push 0
cmp dword ptr [ebp+16], 0
je .Lt_0082
mov dword ptr [ebp-4], 173
jmp .Lt_011A
.Lt_0082:
mov dword ptr [ebp-4], 170
.Lt_011A:
push dword ptr [ebp-4]
call ERRREPORT
add esp, 12
.Lt_0081:
.Lt_0080:
mov eax, dword ptr [ebp+8]
movsx ebx, word ptr [eax+64]
cmp ebx, 1
je .Lt_0085
push 0
push 0
cmp dword ptr [ebp+16], 0
je .Lt_0086
mov dword ptr [ebp-4], 175
jmp .Lt_011B
.Lt_0086:
mov dword ptr [ebp-4], 172
.Lt_011B:
push dword ptr [ebp-4]
call ERRREPORT
add esp, 12
.Lt_0085:
.Lt_0084:
.Lt_0079:
pop ebx
mov esp, ebp
pop ebp
ret
.size HCHECKDEFCTOR, .-HCHECKDEFCTOR
.balign 16
HCHECKDTOR:
.type HCHECKDTOR, @function
push ebp
mov ebp, esp
sub esp, 4
.Lt_0088:
cmp dword ptr [ebp+8], 0
jne .Lt_008B
jmp .Lt_0089
.Lt_008B:
cmp dword ptr [ebp+12], 0
je .Lt_008D
push dword ptr [ebp+8]
call SYMBCHECKACCESS
add esp, 4
test eax, eax
jne .Lt_008F
push 0
push 0
push 205
call ERRREPORT
add esp, 12
.Lt_008F:
.Lt_008E:
.Lt_008D:
.Lt_008C:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+80], 3
je .Lt_0091
push 0
push 0
cmp dword ptr [ebp+16], 0
je .Lt_0092
mov dword ptr [ebp-4], 174
jmp .Lt_011C
.Lt_0092:
mov dword ptr [ebp-4], 171
.Lt_011C:
push dword ptr [ebp-4]
call ERRREPORT
add esp, 12
.Lt_0091:
.Lt_0090:
.Lt_0089:
mov esp, ebp
pop ebp
ret
.size HCHECKDTOR, .-HCHECKDTOR
.balign 16
HGETCTORDTORFORREDIM:
.type HGETCTORDTORFORREDIM, @function
push ebp
mov ebp, esp
push ebx
.Lt_00C6:
mov eax, dword ptr [ebp+8]
and eax, 511
cmp eax, 18
jne .Lt_00C9
push dword ptr [ebp+12]
call SYMBGETCOMPDEFCTOR
add esp, 4
mov ebx, dword ptr [ebp+16]
mov dword ptr [ebx], eax
push dword ptr [ebp+12]
call SYMBGETCOMPDTOR
add esp, 4
mov ebx, dword ptr [ebp+20]
mov dword ptr [ebx], eax
jmp .Lt_00C8
.Lt_00C9:
mov eax, dword ptr [ebp+16]
mov dword ptr [eax], 0
mov eax, dword ptr [ebp+20]
mov dword ptr [eax], 0
.Lt_00C8:
.Lt_00C7:
pop ebx
mov esp, ebp
pop ebp
ret
.size HGETCTORDTORFORREDIM, .-HGETCTORDTORFORREDIM
	#fbc-1.01.0/src/compiler/rtl-array.bas' compilation took 0.03334408800583333 secs

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
.int 10
.int 3
.long 0
.int 0
.int 6
.int 0
.int 3
.int 0
.skip 8,0
.int 8
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
.int 8
.int 1
.int 0
.skip 8,0
.int -2147483648
.int 4
.int 0
.skip 8,0
.skip 200,0
.int Lt_0060
.long 0
.int 10
.int 3
.long 0
.int 0
.int 6
.int 0
.int 3
.int 0
.skip 8,0
.int 8
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
.int 8
.int 1
.int 0
.skip 8,0
.int -2147483648
.int 4
.int 0
.skip 8,0
.skip 200,0
.int Lt_0061
.long 0
.int 10
.int 3
.long 0
.int 0
.int 6
.int 0
.int 3
.int 0
.skip 8,0
.int 8
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
.int 8
.int 1
.int 0
.skip 8,0
.int -2147483648
.int 4
.int 0
.skip 8,0
.skip 200,0
.int Lt_0062
.long 0
.int 10
.int 3
.long 0
.int 0
.int 6
.int 0
.int 3
.int 0
.skip 8,0
.int 8
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
.int 8
.int 1
.int 0
.skip 8,0
.int -2147483648
.int 4
.int 0
.skip 8,0
.skip 200,0
.int Lt_0063
.long 0
.int 10
.int -1
.long 0
.int 0
.int 5
.int 0
.int 3
.int 0
.skip 8,0
.int 0
.int 3
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
.skip 220,0
.int Lt_0064
.long 0
.int 0
.int -1
.long 0
.int 0
.int 2
.int 0
.int 3
.int 0
.skip 8,0
.int 32
.int 1
.int 0
.skip 8,0
.skip 280,0
.int Lt_0065
.long 0
.int 0
.int -1
.long 0
.int 0
.int 1
.int 0
.int 3
.int 0
.skip 8,0
.skip 300,0
.int Lt_0066
.long 0
.int 10
.int -1
.long 0
.int 0
.int 2
.int 0
.int 3
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.skip 280,0
.int Lt_0067
.long 0
.int 10
.int -1
.long 0
.int 0
.int 4
.int 0
.int 3
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
.int 10
.int 1
.int 0
.skip 8,0
.skip 240,0
.int Lt_0068
.long 0
.int 10
.int -1
.long 0
.int 0
.int 2
.int 0
.int 3
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.skip 280,0
.int Lt_0069
.long 0
.int 10
.int -1
.long 0
.int 0
.int 2
.int 0
.int 3
.int 0
.skip 8,0
.int 32
.int 1
.int 0
.skip 8,0
.skip 280,0
.int Lt_006A
.long 0
.int 0
.int -1
.long 0
.int 0
.int 1
.int 0
.int 3
.int 0
.skip 8,0
.skip 300,0
.int Lt_006B
.long 0
.int 7
.int -1
.long 0
.int 0
.int 2
.int 0
.int 3
.int 0
.skip 8,0
.int 7
.int 1
.int 0
.skip 8,0
.skip 280,0
.int Lt_006C
.long 0
.int 7
.int -1
.long 0
.int 0
.int 2
.int 0
.int 3
.int 0
.skip 8,0
.int 7
.int 1
.int 0
.skip 8,0
.skip 280,0
.int Lt_006D
.long 0
.int 32
.int -1
.long 0
.int 2048
.int 4
.int 8
.int 1
.int 0
.skip 8,0
.int 8
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
.skip 240,0
.int Lt_006E
.long 0
.int 32
.int -1
.long 0
.int 2048
.int 5
.int 7
.int 1
.int 0
.skip 8,0
.int 7
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
.int 35
.int 1
.int 0
.skip 8,0
.skip 220,0
.long 0
.skip 344,0

.section .rodata
.balign 4
Lt_005F:	.ascii	"fb_ArrayRedimEx\0"
.balign 4
Lt_0060:	.ascii	"fb_ArrayRedimPresvEx\0"
.balign 4
Lt_0061:	.ascii	"fb_ArrayRedimObj\0"
.balign 4
Lt_0062:	.ascii	"fb_ArrayRedimPresvObj\0"
.balign 4
Lt_0063:	.ascii	"fb_ArrayRedimTo\0"
.balign 4
Lt_0064:	.ascii	"fb_ArrayDestructObj\0"
.balign 4
Lt_0065:	.ascii	"fb_ArrayDestructStr\0"
.balign 4
Lt_0066:	.ascii	"fb_ArrayClear\0"
.balign 4
Lt_0067:	.ascii	"fb_ArrayClearObj\0"
.balign 4
Lt_0068:	.ascii	"fb_ArrayErase\0"
.balign 4
Lt_0069:	.ascii	"fb_ArrayEraseObj\0"
.balign 4
Lt_006A:	.ascii	"fb_ArrayStrErase\0"
.balign 4
Lt_006B:	.ascii	"fb_ArrayLBound\0"
.balign 4
Lt_006C:	.ascii	"fb_ArrayUBound\0"
.balign 4
Lt_006D:	.ascii	"fb_ArraySngBoundChk\0"
.balign 4
Lt_006E:	.ascii	"fb_ArrayBoundChk\0"

.section .ctors, "aw", @progbits
.int fb_ctor__rtlzarray
