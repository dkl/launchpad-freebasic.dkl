	.intel_syntax noprefix

	#FreeBASIC-1.01.0-source/src/compiler/parser-compound-for.bas' compilation started at 16:30:04 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl CFORSTMTBEGIN
CFORSTMTBEGIN:
.type CFORSTMTBEGIN, @function
push ebp
mov ebp, esp
sub esp, 64
push ebx
.Lt_00F1:
mov dword ptr [ebp-4], 0
push 0
call LEXSKIPTOKEN
add esp, 4
push 38
lea eax, [ebp-16]
push eax
call CIDENTIFIER
add esp, 8
mov dword ptr [ebp-12], eax
call ASTSCOPEBEGIN
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 0
jne .Lt_00F4
push 0
push 0
push 27
call ERRREPORT
add esp, 12
.Lt_00F4:
.Lt_00F3:
push 0
push 1
call LEXGETLOOKAHEAD
add esp, 8
cmp eax, 375
jne .Lt_00F6
push -1
push 0
call LEXGETTOKEN
add esp, 4
push eax
push 0
push 0
call CVARDECL
add esp, 16
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_00F8
push 0
push -2147483648
push 0
push 0
push 0
push 7
call SYMBADDTEMPVAR
add esp, 8
push eax
call ASTNEWVAR
add esp, 20
mov dword ptr [ebp-24], eax
jmp .Lt_00F7
.Lt_00F8:
mov eax, dword ptr [ebp-4]
or eax, 4
mov ebx, eax
mov dword ptr [ebp-4], ebx
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp-8]
call ASTNEWVAR
add esp, 20
mov dword ptr [ebp-24], eax
.Lt_00F7:
jmp .Lt_00F5
.Lt_00F6:
push 0
push 1
call LEXGETLOOKAHEAD
add esp, 8
cmp eax, 40
jne .Lt_00F9
push 0
push -1
push 51
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push 41
call HSKIPUNTIL
add esp, 16
push 0
push -2147483648
push 0
push 0
push 0
push 7
call SYMBADDTEMPVAR
add esp, 8
push eax
call ASTNEWVAR
add esp, 20
mov dword ptr [ebp-24], eax
jmp .Lt_00F5
.Lt_00F9:
push -1
push dword ptr [ebp-12]
call CVARIABLE
add esp, 8
mov dword ptr [ebp-24], eax
cmp dword ptr [ebp-24], 0
jne .Lt_00FB
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
push 7
call SYMBADDTEMPVAR
add esp, 8
push eax
call ASTNEWVAR
add esp, 20
mov dword ptr [ebp-24], eax
.Lt_00FB:
.Lt_00FA:
mov eax, dword ptr [ebp-24]
mov ebx, dword ptr [eax]
cmp ebx, 17
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_00FD
push 0
push -1
push 51
call ERRREPORT
add esp, 12
push dword ptr [ebp-24]
call ASTDELTREE
add esp, 4
push 0
push -2147483648
push 0
push 0
push 0
push 7
call SYMBADDTEMPVAR
add esp, 8
push eax
call ASTNEWVAR
add esp, 20
mov dword ptr [ebp-24], eax
.Lt_00FD:
.Lt_00FC:
.Lt_00F5:
mov eax, dword ptr [ebp-24]
mov ebx, dword ptr [eax+4]
and ebx, 511
mov dword ptr [ebp-32], ebx
mov ebx, dword ptr [ebp-24]
mov eax, dword ptr [ebx+8]
mov dword ptr [ebp-36], eax
mov eax, dword ptr [ebp-24]
mov ebx, dword ptr [eax+4]
and ebx, 512
test ebx, ebx
je .Lt_00FF
push 0
push 0
push 118
call ERRREPORT
add esp, 12
.Lt_00FF:
.Lt_00FE:
mov ebx, dword ptr [ebp-32]
mov dword ptr [ebp-64], ebx
jmp .Lt_0101
.Lt_0103:
jmp .Lt_0100
.Lt_0104:
mov ebx, dword ptr [ebp-4]
or ebx, 1
mov eax, ebx
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp-24]
push dword ptr [eax+12]
call SYMBHASCTOR
add esp, 4
test eax, eax
je .Lt_0106
mov eax, dword ptr [ebp-4]
or eax, 2
mov ebx, eax
mov dword ptr [ebp-4], ebx
.Lt_0106:
.Lt_0105:
jmp .Lt_0100
.Lt_0107:
mov ebx, dword ptr [ebp-32]
and ebx, 480
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_0109
push 0
push -1
push 51
call ERRREPORT
add esp, 12
push dword ptr [ebp-24]
call ASTDELTREE
add esp, 4
push 0
push -2147483648
push 0
push 0
push 0
push 7
call SYMBADDTEMPVAR
add esp, 8
push eax
call ASTNEWVAR
add esp, 20
mov dword ptr [ebp-24], eax
mov eax, dword ptr [ebp-24]
mov ebx, dword ptr [eax+4]
and ebx, 511
mov dword ptr [ebp-32], ebx
.Lt_0109:
.Lt_0108:
jmp .Lt_0100
.Lt_0101:
mov ebx, dword ptr [ebp-64]
add ebx, 4294967295
cmp ebx, 17
ja .Lt_0107
mov ebx, dword ptr [ebp-64]
jmp dword ptr [.LT_010A+ebx*4-4]
.LT_010A:
.int .Lt_0103
.int .Lt_0103
.int .Lt_0103
.int .Lt_0103
.int .Lt_0103
.int .Lt_0103
.int .Lt_0103
.int .Lt_0103
.int .Lt_0103
.int .Lt_0103
.int .Lt_0103
.int .Lt_0103
.int .Lt_0103
.int .Lt_0103
.int .Lt_0103
.int .Lt_0107
.int .Lt_0107
.int .Lt_0104
.Lt_0100:
push 1
push 281
call CCOMPSTMTPUSH
add esp, 8
mov dword ptr [ebp-40], eax
mov eax, dword ptr [ebp-24]
mov ebx, dword ptr [ebp-40]
mov ecx, dword ptr [eax+12]
mov dword ptr [ebx+16], ecx
mov ecx, dword ptr [ebp-40]
mov ebx, dword ptr [ebp-32]
mov dword ptr [ecx+28], ebx
mov dword ptr [ebp-44], 0
push dword ptr [ebp-24]
push dword ptr [ebp-4]
push dword ptr [ebp-36]
push dword ptr [ebp-32]
lea ebx, [ebp-44]
push ebx
push dword ptr [ebp-40]
call HFORASSIGN
add esp, 24
push dword ptr [ebp-4]
push dword ptr [ebp-36]
push dword ptr [ebp-32]
lea ebx, [ebp-44]
push ebx
push dword ptr [ebp-40]
call HFORTO
add esp, 20
push dword ptr [ebp-4]
push dword ptr [ebp-36]
push dword ptr [ebp-32]
lea ebx, [ebp-44]
push ebx
push dword ptr [ebp-40]
call HFORSTEP
add esp, 20
push 0
push 0
call SYMBADDLABEL
add esp, 8
mov dword ptr [ebp-52], eax
push 0
push 0
call SYMBADDLABEL
add esp, 8
mov dword ptr [ebp-60], eax
push 0
push 0
call SYMBADDLABEL
add esp, 8
mov dword ptr [ebp-56], eax
mov eax, dword ptr [ebp-40]
mov ebx, dword ptr [ebp-56]
mov dword ptr [eax+92], ebx
mov ebx, dword ptr [ebp-4]
and ebx, 1
test ebx, ebx
je .Lt_010C
push dword ptr [ebp-40]
call HUDTFOR
add esp, 4
.Lt_010C:
.Lt_010B:
cmp dword ptr [ebp-44], 3
jne .Lt_010E
push 1
push 0
push 0
mov ebx, dword ptr [ebp-40]
push dword ptr [ebx+44]
mov ebx, dword ptr [ebp-40]
lea eax, [ebx+36]
push eax
call ASTNEWCONST
add esp, 12
push eax
push 0
mov eax, dword ptr [ebp-40]
push dword ptr [eax+28]
mov eax, dword ptr [ebp-40]
lea ebx, [eax+20]
push ebx
call ASTNEWCONST
add esp, 12
push eax
mov eax, dword ptr [ebp-40]
cmp dword ptr [eax+72], 0
jne .Lt_0116
cmp dword ptr [eax+68], 0
je .Lt_010F
.Lt_0116:
mov dword ptr [ebp-64], 50
jmp .Lt_0113
.Lt_010F:
mov dword ptr [ebp-64], 49
.Lt_0113:
push dword ptr [ebp-64]
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp-28], eax
push dword ptr [ebp-28]
call ASTCONSTFLUSHTOINT
add esp, 4
cmp edx, 0
jne .Lt_0112
cmp eax, 0
jne .Lt_0112
.Lt_0117:
push 0
push dword ptr [ebp-56]
push 97
call ASTNEWBRANCH
add esp, 12
push eax
call ASTADD
add esp, 4
.Lt_0112:
.Lt_0111:
jmp .Lt_010D
.Lt_010E:
push 0
push dword ptr [ebp-52]
push 97
call ASTNEWBRANCH
add esp, 12
push eax
call ASTADD
add esp, 4
.Lt_010D:
push 4
push 0
call SYMBADDLABEL
add esp, 8
mov dword ptr [ebp-48], eax
push -1
push dword ptr [ebp-48]
call ASTNEWLABEL
add esp, 8
push eax
call ASTADD
add esp, 4
call ASTSCOPEBEGIN
mov edx, dword ptr [ebp-40]
mov dword ptr [edx+8], eax
mov eax, dword ptr [ebp-40]
mov edx, dword ptr [ebp-20]
mov dword ptr [eax+12], edx
mov edx, dword ptr [ebp-40]
mov eax, dword ptr [ebp-52]
mov dword ptr [edx+80], eax
mov eax, dword ptr [ebp-40]
mov edx, dword ptr [ebp-48]
mov dword ptr [eax+84], edx
mov edx, dword ptr [ebp-40]
mov eax, dword ptr [ebp-60]
mov dword ptr [edx+88], eax
.Lt_00F2:
pop ebx
mov esp, ebp
pop ebp
ret
.size CFORSTMTBEGIN, .-CFORSTMTBEGIN
.balign 16

.globl CFORSTMTEND
CFORSTMTEND:
.type CFORSTMTEND, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
.Lt_0142:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0144:
push -1
push 281
call CCOMPSTMTGETTOS
add esp, 8
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
jne .Lt_0148
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_0143
.Lt_0148:
.Lt_0147:
push dword ptr [ebp-4]
call HFORSTMTCLOSE
add esp, 4
push 0
call LEXGETCLASS
add esp, 4
test eax, eax
je .Lt_014A
push dword ptr [ebp-4]
call CCOMPSTMTPOP
add esp, 4
jmp .Lt_0145
.Lt_014A:
.Lt_0149:
push 38
lea eax, [ebp-12]
push eax
call CIDENTIFIER
add esp, 8
mov dword ptr [ebp-8], eax
push -1
push dword ptr [ebp-8]
call CVARIABLE
add esp, 8
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 0
jne .Lt_014C
push 0
push 0
push 14
call ERRREPORT
add esp, 12
jmp .Lt_014B
.Lt_014C:
mov eax, dword ptr [ebp-16]
mov ebx, dword ptr [ebp-4]
mov ecx, dword ptr [ebx+16]
cmp dword ptr [eax+12], ecx
je .Lt_014E
push 0
push 0
push 282
call ERRREPORT
add esp, 12
.Lt_014E:
.Lt_014D:
mov ecx, dword ptr [ENV+176]
and ecx, 8
test ecx, ecx
je .Lt_0150
push 1
mov ecx, dword ptr [ebp-16]
mov eax, dword ptr [ecx+12]
push dword ptr [eax+12]
push 26
call ERRREPORTWARN
add esp, 12
.Lt_0150:
.Lt_014F:
push dword ptr [ebp-16]
call ASTDELTREE
add esp, 4
.Lt_014B:
push dword ptr [ebp-4]
call CCOMPSTMTPOP
add esp, 4
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
je .Lt_0152
jmp .Lt_0145
.Lt_0152:
.Lt_0151:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0146:
jmp .Lt_0144
.Lt_0145:
.Lt_0143:
pop ebx
mov esp, ebp
pop ebp
ret
.size CFORSTMTEND, .-CFORSTMTEND
.balign 16
fb_ctor__parserzcompoundzfor:
.type fb_ctor__parserzcompoundzfor, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__parserzcompoundzfor, .-fb_ctor__parserzcompoundzfor
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
HELMTOEXPR:
.type HELMTOEXPR, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_005F:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 0
je .Lt_0062
push 0
push -2147483648
push 0
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax]
call ASTNEWVAR
add esp, 20
mov dword ptr [ebp-4], eax
jmp .Lt_0061
.Lt_0062:
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax+12]
mov eax, dword ptr [ebp+8]
lea ebx, [eax+4]
push ebx
call ASTNEWCONST
add esp, 12
mov dword ptr [ebp-4], eax
.Lt_0061:
.Lt_0060:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HELMTOEXPR, .-HELMTOEXPR
.balign 16
HUDTFOR:
.type HUDTFOR, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_0063:
mov dword ptr [ebp-8], 0
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+100], 0
je .Lt_0066
mov eax, dword ptr [ebp+8]
lea ebx, [eax+48]
push ebx
call HELMTOEXPR
add esp, 4
mov dword ptr [ebp-8], eax
.Lt_0066:
.Lt_0065:
push 0
push dword ptr [ebp-8]
mov eax, dword ptr [ebp+8]
lea ebx, [eax+16]
push ebx
call HELMTOEXPR
add esp, 4
push eax
push 24
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+16]
push dword ptr [ebx+28]
call HUDTCALLOPOVL
add esp, 20
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
je .Lt_0068
push dword ptr [ebp-4]
call ASTADD
add esp, 4
.Lt_0068:
.Lt_0067:
.Lt_0064:
pop ebx
mov esp, ebp
pop ebp
ret
.size HUDTFOR, .-HUDTFOR
.balign 16
HUDTSTEP:
.type HUDTSTEP, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_0069:
mov dword ptr [ebp-8], 0
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+100], 0
je .Lt_006C
mov eax, dword ptr [ebp+8]
lea ebx, [eax+48]
push ebx
call HELMTOEXPR
add esp, 4
mov dword ptr [ebp-8], eax
.Lt_006C:
.Lt_006B:
push 0
push dword ptr [ebp-8]
mov eax, dword ptr [ebp+8]
lea ebx, [eax+16]
push ebx
call HELMTOEXPR
add esp, 4
push eax
push 25
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+16]
push dword ptr [ebx+28]
call HUDTCALLOPOVL
add esp, 20
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
je .Lt_006E
push dword ptr [ebp-4]
call ASTADD
add esp, 4
.Lt_006E:
.Lt_006D:
.Lt_006A:
pop ebx
mov esp, ebp
pop ebp
ret
.size HUDTSTEP, .-HUDTSTEP
.balign 16
HUDTNEXT:
.type HUDTNEXT, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_006F:
mov dword ptr [ebp-8], 0
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+100], 0
je .Lt_0072
mov eax, dword ptr [ebp+8]
lea ebx, [eax+48]
push ebx
call HELMTOEXPR
add esp, 4
mov dword ptr [ebp-8], eax
.Lt_0072:
.Lt_0071:
push dword ptr [ebp-8]
mov eax, dword ptr [ebp+8]
lea ebx, [eax+32]
push ebx
call HELMTOEXPR
add esp, 4
push eax
mov eax, dword ptr [ebp+8]
lea ebx, [eax+16]
push ebx
call HELMTOEXPR
add esp, 4
push eax
push 26
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+16]
push dword ptr [ebx+28]
call HUDTCALLOPOVL
add esp, 20
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
je .Lt_0074
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax+84]
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp-4]
push 48
call ASTNEWBOP
add esp, 20
push eax
call ASTADD
add esp, 4
.Lt_0074:
.Lt_0073:
.Lt_0070:
pop ebx
mov esp, ebp
pop ebp
ret
.size HUDTNEXT, .-HUDTNEXT
.balign 16
HSCALARSTEP:
.type HSCALARSTEP, @function
push ebp
mov ebp, esp
push ebx
.Lt_0075:
mov eax, dword ptr [ebp+8]
lea ebx, [eax+48]
push ebx
mov ebx, dword ptr [ebp+8]
lea eax, [ebx+16]
push eax
push 1
call HFLUSHSELFBOP
add esp, 12
.Lt_0076:
pop ebx
mov esp, ebp
pop ebp
ret
.size HSCALARSTEP, .-HSCALARSTEP
.balign 16
HSCALARNEXT:
.type HSCALARNEXT, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0077:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+64], 0
jne .Lt_007A
mov eax, dword ptr [ebp+8]
push dword ptr [eax+84]
mov eax, dword ptr [ebp+8]
lea ebx, [eax+32]
push ebx
mov ebx, dword ptr [ebp+8]
lea eax, [ebx+16]
push eax
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+72], 0
jne .Lt_0154
cmp dword ptr [eax+68], 0
je .Lt_007B
.Lt_0154:
mov dword ptr [ebp-4], 50
jmp .Lt_0153
.Lt_007B:
mov dword ptr [ebp-4], 49
.Lt_0153:
push dword ptr [ebp-4]
call HFLUSHBOP
add esp, 16
jmp .Lt_0079
.Lt_007A:
push 4
push 0
call SYMBADDLABEL
add esp, 8
mov dword ptr [ebp-4], eax
push 0
push dword ptr [ebp-4]
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
push eax
mov eax, dword ptr [ebp+8]
lea ebx, [eax+64]
push ebx
call HELMTOEXPR
add esp, 4
push eax
push 48
call ASTNEWBOP
add esp, 20
push eax
call ASTADD
add esp, 4
mov eax, dword ptr [ebp+8]
push dword ptr [eax+84]
mov eax, dword ptr [ebp+8]
lea ebx, [eax+32]
push ebx
mov ebx, dword ptr [ebp+8]
lea eax, [ebx+16]
push eax
push 49
call HFLUSHBOP
add esp, 16
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax+92]
push 97
call ASTNEWBRANCH
add esp, 12
push eax
call ASTADD
add esp, 4
push 0
push dword ptr [ebp-4]
call ASTNEWLABEL
add esp, 8
push eax
call ASTADD
add esp, 4
mov eax, dword ptr [ebp+8]
push dword ptr [eax+84]
mov eax, dword ptr [ebp+8]
lea ebx, [eax+32]
push ebx
mov ebx, dword ptr [ebp+8]
lea eax, [ebx+16]
push eax
push 50
call HFLUSHBOP
add esp, 16
.Lt_0079:
.Lt_0078:
pop ebx
mov esp, ebp
pop ebp
ret
.size HSCALARNEXT, .-HSCALARNEXT
.balign 16
HADDIMPLICITVAR:
.type HADDIMPLICITVAR, @function
push ebp
mov ebp, esp
sub esp, 12
mov dword ptr [ebp-4], 0
.Lt_007D:
mov dword ptr [ebp-12], 0
mov eax, dword ptr [ENV+840]
and eax, 2
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_0080
or dword ptr [ebp-12], 2
.Lt_0080:
.Lt_007F:
push dword ptr [ebp-12]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call SYMBADDIMPLICITVAR
add esp, 12
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-12]
and eax, 2
je .Lt_0082
push -1
push dword ptr [ebp-8]
call ASTNEWDECL
add esp, 8
push eax
call ASTADDUNSCOPED
add esp, 4
jmp .Lt_0081
.Lt_0082:
push 0
push dword ptr [ebp-8]
call ASTNEWDECL
add esp, 8
push eax
call ASTADD
add esp, 4
.Lt_0081:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_007E:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size HADDIMPLICITVAR, .-HADDIMPLICITVAR
.balign 16
HSTORETEMP:
.type HSTORETEMP, @function
push ebp
mov ebp, esp
sub esp, 24
mov dword ptr [ebp-4], 0
.Lt_0083:
mov dword ptr [ebp-8], 0
mov eax, dword ptr [ENV+840]
and eax, 2
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_0086
or dword ptr [ebp-8], 2
.Lt_0086:
.Lt_0085:
push dword ptr [ebp-8]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call SYMBADDIMPLICITVAR
add esp, 12
mov dword ptr [ebp-12], eax
mov dword ptr [ebp-16], 0
mov eax, dword ptr [ebp-8]
and eax, 2
je .Lt_0088
push -1
push dword ptr [ebp-12]
call ASTNEWDECL
add esp, 8
push eax
call ASTADDUNSCOPED
add esp, 4
jmp .Lt_0087
.Lt_0088:
push 0
push dword ptr [ebp-12]
call ASTNEWDECL
add esp, 8
mov dword ptr [ebp-16], eax
.Lt_0087:
push 0
push dword ptr [ebp+16]
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp-12]
call ASTNEWVAR
add esp, 20
push eax
call ASTNEWASSIGN
add esp, 12
mov dword ptr [ebp+16], eax
cmp dword ptr [ebp+16], 0
jne .Lt_008A
mov eax, dword ptr [ebp+8]
and eax, 480
je .Lt_008B
mov dword ptr [ebp-20], 22
jmp .Lt_0156
.Lt_008B:
mov eax, dword ptr [ebp+8]
and eax, 31
mov dword ptr [ebp-20], eax
.Lt_0156:
mov eax, dword ptr [ebp-20]
mov dword ptr [ebp-24], eax
jmp .Lt_008E
.Lt_0090:
push 0
push 0
push 24
call ERRREPORT
add esp, 12
jmp .Lt_008D
.Lt_0091:
push dword ptr [AST_OPTB+8]
push -1
push 197
call ERRREPORT
add esp, 12
jmp .Lt_008D
.Lt_008E:
mov eax, dword ptr [ebp-24]
add eax, 4294967278
test eax, eax
ja .Lt_0091
mov eax, dword ptr [ebp-24]
jmp dword ptr [.LT_0092+eax*4-72]
.LT_0092:
.int .Lt_0090
.Lt_008D:
.Lt_008A:
.Lt_0089:
push -1
push dword ptr [ebp+16]
push dword ptr [ebp-16]
call ASTNEWLINK
add esp, 12
push eax
call ASTADD
add esp, 4
mov eax, dword ptr [ebp-12]
mov dword ptr [ebp-4], eax
.Lt_0084:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size HSTORETEMP, .-HSTORETEMP
.balign 16
HFLUSHBOP:
.type HFLUSHBOP, @function
push ebp
mov ebp, esp
sub esp, 12
.Lt_0093:
push dword ptr [ebp+12]
call HELMTOEXPR
add esp, 4
mov dword ptr [ebp-4], eax
push dword ptr [ebp+16]
call HELMTOEXPR
add esp, 4
mov dword ptr [ebp-8], eax
push 0
push dword ptr [ebp+20]
push dword ptr [ebp-8]
push dword ptr [ebp-4]
push dword ptr [ebp+8]
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_0096
mov eax, dword ptr [ebp+8]
sal eax, 4
push dword ptr [AST_OPTB+eax+8]
push -1
push 197
call ERRREPORT
add esp, 12
jmp .Lt_0094
.Lt_0096:
.Lt_0095:
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax+12], 18
jne .Lt_0098
push 0
push -1
push dword ptr [ebp+20]
push dword ptr [ebp-12]
call ASTBUILDBRANCH
add esp, 16
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_009A
mov eax, dword ptr [ebp+8]
sal eax, 4
push dword ptr [AST_OPTB+eax+8]
push -1
push 197
call ERRREPORT
add esp, 12
jmp .Lt_0094
.Lt_009A:
.Lt_0099:
.Lt_0098:
.Lt_0097:
push dword ptr [ebp-12]
call ASTADD
add esp, 4
.Lt_0094:
mov esp, ebp
pop ebp
ret
.size HFLUSHBOP, .-HFLUSHBOP
.balign 16
HSTEPEXPRESSION:
.type HSTEPEXPRESSION, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_009B:
mov eax, dword ptr [ebp+8]
and eax, 480
test eax, eax
je .Lt_009E
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call SYMBCALCDEREFLEN
add esp, 8
mov dword ptr [ebp-12], eax
mov dword ptr [ebp-8], edx
cmp dword ptr [ebp-8], 0
jg .Lt_00A0
jl .Lt_0158
cmp dword ptr [ebp-12], 0
ja .Lt_00A0
.Lt_0158:
push 0
push 0
push 70
call ERRREPORT
add esp, 12
mov dword ptr [ebp-12], 1
mov dword ptr [ebp-8], 0
.Lt_00A0:
.Lt_009F:
mov eax, dword ptr [ebp+16]
cmp dword ptr [eax], 0
je .Lt_00A2
push 1
push 0
push 0
push 7
push dword ptr [ebp-8]
push dword ptr [ebp-12]
call ASTNEWCONSTI
add esp, 16
push eax
push 0
push 7
push 0
push 0
mov eax, dword ptr [ebp+16]
push dword ptr [eax]
call ASTNEWVAR
add esp, 20
push eax
push 30
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp-4], eax
jmp .Lt_00A1
.Lt_00A2:
push 0
push 7
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [ebp-12]
mov edx, dword ptr [ebp-8]
push dword ptr [eax+8]
push dword ptr [eax+4]
push edx
push ebx
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
pop ebx
pop edx
add esp, 8
push edx
push ebx
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-4], eax
.Lt_00A1:
jmp .Lt_009D
.Lt_009E:
push dword ptr [ebp+16]
call HELMTOEXPR
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_009D:
.Lt_009C:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HSTEPEXPRESSION, .-HSTEPEXPRESSION
.balign 16
HFLUSHSELFBOP:
.type HFLUSHSELFBOP, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
.Lt_00A3:
push 0
push -2147483648
push 0
push 0
mov eax, dword ptr [ebp+12]
push dword ptr [eax]
call ASTNEWVAR
add esp, 20
mov dword ptr [ebp-4], eax
push dword ptr [ebp+16]
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax]
push dword ptr [ebx+28]
mov ebx, dword ptr [ebp+12]
push dword ptr [ebx+12]
call HSTEPEXPRESSION
add esp, 12
mov dword ptr [ebp-8], eax
push 1
push 0
push dword ptr [ebp-8]
push dword ptr [ebp-4]
push dword ptr [ebp+8]
call ASTNEWSELFBOP
add esp, 20
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_00A6
mov eax, dword ptr [ebp+8]
sal eax, 4
push dword ptr [AST_OPTB+eax+8]
push -1
push 197
call ERRREPORT
add esp, 12
jmp .Lt_00A4
.Lt_00A6:
.Lt_00A5:
push dword ptr [ebp-12]
call ASTADD
add esp, 4
.Lt_00A4:
pop ebx
mov esp, ebp
pop ebp
ret
.size HFLUSHSELFBOP, .-HFLUSHSELFBOP
.balign 16
HCALLCTOR:
.type HCALLCTOR, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_00A7:
push 0
push -2147483648
push 1
push dword ptr [ebp+8]
call CINITIALIZER
add esp, 16
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_00AA
jmp .Lt_00A8
.Lt_00AA:
.Lt_00A9:
push 64
push 0
push dword ptr [ebp-8]
push dword ptr [ebp+8]
call _Z15ASTTYPEINIFLUSHP8FBSYMBOLP7ASTNODEii
add esp, 16
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_00AC
jmp .Lt_00A8
.Lt_00AC:
.Lt_00AB:
push dword ptr [ebp-8]
call ASTADD
add esp, 4
mov dword ptr [ebp-4], -1
.Lt_00A8:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size HCALLCTOR, .-HCALLCTOR
.balign 16
HFORASSIGN:
.type HFORASSIGN, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_00AD:
call CASSIGNTOKEN
test eax, eax
jne .Lt_00B0
push 0
push 0
push 10
call ERRREPORT
add esp, 12
.Lt_00B0:
.Lt_00AF:
mov eax, dword ptr [ebp+24]
and eax, 2
test eax, eax
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp+24]
and ebx, 4
test ebx, ebx
sete bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
je .Lt_00B2
call CEXPRESSION
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
jne .Lt_00B4
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
mov dword ptr [ebp-4], eax
.Lt_00B4:
.Lt_00B3:
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax]
cmp ebx, 16
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+24]
and eax, 1
test eax, eax
sete al
shr eax, 1
sbb eax, eax
and ebx, eax
je .Lt_00B6
push 0
push 0
push dword ptr [ebp-4]
push dword ptr [ebp+20]
push dword ptr [ebp+16]
call ASTNEWCONV
add esp, 20
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
jne .Lt_00B8
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
mov dword ptr [ebp-4], eax
.Lt_00B8:
.Lt_00B7:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-4]
mov ecx, dword ptr [ebx+20]
mov dword ptr [eax+20], ecx
mov ecx, dword ptr [ebx+24]
mov dword ptr [eax+24], ecx
mov ebx, dword ptr [ebp+12]
inc dword ptr [ebx]
.Lt_00B6:
.Lt_00B5:
push 0
push dword ptr [ebp-4]
push dword ptr [ebp+28]
call ASTNEWASSIGN
add esp, 12
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
jne .Lt_00BA
mov eax, dword ptr [ebp+24]
and eax, 1
test eax, eax
je .Lt_00BC
push 0
push 0
push 24
call ERRREPORT
add esp, 12
jmp .Lt_00BB
.Lt_00BC:
push offset Lt_00BD
push -1
push 197
call ERRREPORT
add esp, 12
.Lt_00BB:
jmp .Lt_00B9
.Lt_00BA:
push dword ptr [ebp-4]
call ASTADD
add esp, 4
.Lt_00B9:
jmp .Lt_00B1
.Lt_00B2:
mov eax, dword ptr [ebp+8]
push dword ptr [eax+16]
call HCALLCTOR
add esp, 4
test eax, eax
jne .Lt_00BF
push 0
push 0
push 9
call ERRREPORT
add esp, 12
.Lt_00BF:
.Lt_00BE:
.Lt_00B1:
.Lt_00AE:
pop ebx
mov esp, ebp
pop ebp
ret
.size HFORASSIGN, .-HFORASSIGN
.balign 16
HFORTO:
.type HFORTO, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_00C0:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 284
je .Lt_00C3
push 0
push 0
push 12
call ERRREPORT
add esp, 12
jmp .Lt_00C2
.Lt_00C3:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_00C2:
mov eax, dword ptr [ebp+24]
and eax, 2
test eax, eax
jne .Lt_00C5
call CEXPRESSION
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
jne .Lt_00C7
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
mov dword ptr [ebp-4], eax
.Lt_00C7:
.Lt_00C6:
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax]
cmp ebx, 16
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+24]
and eax, 1
test eax, eax
sete al
shr eax, 1
sbb eax, eax
and ebx, eax
je .Lt_00C9
push 0
push 0
push dword ptr [ebp-4]
push dword ptr [ebp+20]
push dword ptr [ebp+16]
call ASTNEWCONV
add esp, 20
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
jne .Lt_00CB
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
mov dword ptr [ebp-4], eax
.Lt_00CB:
.Lt_00CA:
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+32], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+16]
mov dword ptr [eax+44], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp-4]
mov ecx, dword ptr [eax+20]
mov dword ptr [ebx+36], ecx
mov ecx, dword ptr [eax+24]
mov dword ptr [ebx+40], ecx
push dword ptr [ebp-4]
call ASTDELNODE
add esp, 4
mov eax, dword ptr [ebp+12]
inc dword ptr [eax]
jmp .Lt_00C8
.Lt_00C9:
push dword ptr [ebp-4]
push dword ptr [ebp+20]
push dword ptr [ebp+16]
call HSTORETEMP
add esp, 12
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+32], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+32]
mov eax, dword ptr [ebx+24]
and eax, 511
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+44], eax
.Lt_00C8:
jmp .Lt_00C4
.Lt_00C5:
push dword ptr [ebp+20]
push dword ptr [ebp+16]
call HADDIMPLICITVAR
add esp, 8
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+32], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+32]
mov eax, dword ptr [ebx+24]
and eax, 511
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+44], eax
mov eax, dword ptr [ebp+8]
push dword ptr [eax+32]
call HCALLCTOR
add esp, 4
test eax, eax
jne .Lt_00CD
push 0
push 0
push 24
call ERRREPORT
add esp, 12
.Lt_00CD:
.Lt_00CC:
.Lt_00C4:
.Lt_00C1:
pop ebx
mov esp, ebp
pop ebp
ret
.size HFORTO, .-HFORTO
.balign 16
HFORSTEP:
.type HFORSTEP, @function
push ebp
mov ebp, esp
sub esp, 28
push ebx
.Lt_00CE:
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+100], 0
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 282
jne .Lt_00D1
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+100], -1
.Lt_00D1:
.Lt_00D0:
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+24]
and eax, 2
test eax, eax
jne .Lt_00D3
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+100], 0
je .Lt_00D5
call CEXPRESSION
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_00D7
push 0
push 0
push 9
call ERRREPORT
add esp, 12
push 0
push 7
push 0
push 1
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-12], eax
.Lt_00D7:
.Lt_00D6:
jmp .Lt_00D4
.Lt_00D5:
push 0
push 7
push 0
push 1
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-12], eax
.Lt_00D4:
mov eax, dword ptr [ebp+24]
and eax, 1
test eax, eax
jne .Lt_00D9
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_00DA
mov dword ptr [ebp-16], 22
jmp .Lt_015F
.Lt_00DA:
mov ebx, dword ptr [ebp-12]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-16], eax
.Lt_015F:
mov eax, dword ptr [ebp-16]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+8], 0
je .Lt_00DD
push dword ptr [ebp+16]
call TYPETOSIGNED
add esp, 4
mov dword ptr [ebp+16], eax
jmp .Lt_00DC
.Lt_00DD:
push dword ptr [ebp+16]
call TYPETOUNSIGNED
add esp, 4
mov dword ptr [ebp+16], eax
.Lt_00DC:
.Lt_00D9:
.Lt_00D8:
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax]
cmp ebx, 16
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+24]
and eax, 1
test eax, eax
sete al
shr eax, 1
sbb eax, eax
and ebx, eax
je .Lt_00DF
push 0
push 0
push dword ptr [ebp-12]
push dword ptr [ebp+20]
push dword ptr [ebp+16]
call ASTNEWCONV
add esp, 20
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_00E1
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
mov dword ptr [ebp-12], eax
.Lt_00E1:
.Lt_00E0:
push dword ptr [ebp-12]
call ASTCONSTGEZERO
add esp, 4
mov ecx, eax
mov ebx, ecx
sar ebx, 31
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+68], ecx
mov dword ptr [eax+72], ebx
mov ecx, dword ptr [ebp+8]
mov dword ptr [ecx+48], 0
mov ecx, dword ptr [ebp+16]
and ecx, 480
test ecx, ecx
je .Lt_00E3
mov ecx, dword ptr [ebp+8]
mov dword ptr [ecx+60], 10
jmp .Lt_00E2
.Lt_00E3:
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+16]
mov dword ptr [ecx+60], ebx
.Lt_00E2:
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebp-12]
mov eax, dword ptr [ecx+20]
mov dword ptr [ebx+52], eax
mov eax, dword ptr [ecx+24]
mov dword ptr [ebx+56], eax
push dword ptr [ebp-12]
call ASTDELNODE
add esp, 4
mov ecx, dword ptr [ebp+12]
inc dword ptr [ecx]
jmp .Lt_00DE
.Lt_00DF:
mov dword ptr [ebp-4], -1
mov ecx, dword ptr [ebp+16]
mov dword ptr [ebp-16], ecx
mov ecx, dword ptr [ebp+20]
mov dword ptr [ebp-20], ecx
mov ecx, dword ptr [ebp+16]
and ecx, 480
test ecx, ecx
je .Lt_00E5
mov dword ptr [ebp-16], 10
mov dword ptr [ebp-20], 0
.Lt_00E5:
.Lt_00E4:
push dword ptr [ebp-12]
push dword ptr [ebp-20]
push dword ptr [ebp-16]
call HSTORETEMP
add esp, 12
mov ecx, dword ptr [ebp+8]
mov dword ptr [ecx+48], eax
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+48]
mov eax, dword ptr [ecx+24]
and eax, 511
mov ecx, dword ptr [ebp+8]
mov dword ptr [ecx+60], eax
.Lt_00DE:
jmp .Lt_00D2
.Lt_00D3:
mov dword ptr [ebp-4], -1
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+100], 0
je .Lt_00E7
push dword ptr [ebp+20]
push dword ptr [ebp+16]
call HADDIMPLICITVAR
add esp, 8
mov ecx, dword ptr [ebp+8]
mov dword ptr [ecx+48], eax
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+48]
mov eax, dword ptr [ecx+24]
and eax, 511
mov ecx, dword ptr [ebp+8]
mov dword ptr [ecx+60], eax
mov eax, dword ptr [ebp+8]
push dword ptr [eax+48]
call HCALLCTOR
add esp, 4
test eax, eax
jne .Lt_00E9
push 0
push 0
push 24
call ERRREPORT
add esp, 12
.Lt_00E9:
.Lt_00E8:
.Lt_00E7:
.Lt_00E6:
.Lt_00D2:
mov eax, dword ptr [ebp+16]
and eax, 480
je .Lt_00EA
mov dword ptr [ebp-8], 22
jmp .Lt_0160
.Lt_00EA:
mov eax, dword ptr [ebp+16]
and eax, 31
mov dword ptr [ebp-8], eax
.Lt_0160:
mov eax, dword ptr [ebp-8]
imul eax, 28
mov ecx, dword ptr [SYMB_DTYPETB+eax+8]
test ecx, ecx
sete cl
shr ecx, 1
sbb ecx, ecx
mov eax, dword ptr [ebp+24]
and eax, 1
test eax, eax
sete al
shr eax, 1
sbb eax, eax
and ecx, eax
je .Lt_00ED
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+64], 0
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+76], 7
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+68], 4294967295
mov dword ptr [eax+72], 4294967295
jmp .Lt_00EC
.Lt_00ED:
mov eax, dword ptr [ebp+24]
and eax, 1
test eax, eax
sete al
shr eax, 1
sbb eax, eax
and eax, dword ptr [ebp-4]
je .Lt_00EE
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+60]
mov dword ptr [ebp-12], ecx
push 0
push 7
call HADDIMPLICITVAR
add esp, 8
mov ecx, dword ptr [ebp+8]
mov dword ptr [ecx+64], eax
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+76], 7
push 1
push 0
lea eax, [ebp-24]
push eax
call HELMTOEXPR
add esp, 4
push eax
mov eax, dword ptr [ebp+8]
lea ecx, [eax+48]
push ecx
call HELMTOEXPR
add esp, 4
push eax
push 49
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp-28], eax
cmp dword ptr [ebp-28], 0
jne .Lt_00F0
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
mov dword ptr [ebp-28], eax
.Lt_00F0:
.Lt_00EF:
push 0
push dword ptr [ebp-28]
push 0
push -2147483648
push 0
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax+64]
call ASTNEWVAR
add esp, 20
push eax
call ASTNEWASSIGN
add esp, 12
push eax
call ASTADD
add esp, 4
jmp .Lt_00EC
.Lt_00EE:
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+64], 0
.Lt_00EC:
.Lt_00CF:
pop ebx
mov esp, ebp
pop ebp
ret
.size HFORSTEP, .-HFORSTEP
.balign 16
HUDTCALLOPOVL:
.type HUDTCALLOPOVL, @function
push ebp
mov ebp, esp
sub esp, 76
push ebx
mov dword ptr [ebp-4], 0
.Lt_0118:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call SYMBGETCOMPOPOVLHEAD
add esp, 8
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_011B
mov eax, dword ptr [ebp+12]
sal eax, 4
push dword ptr [AST_OPTB+eax+8]
push -1
push 197
call ERRREPORT
add esp, 12
mov dword ptr [ebp-4], 0
jmp .Lt_0119
.Lt_011B:
.Lt_011A:
cmp dword ptr [ebp+20], 0
jne .Lt_011D
push 0
lea eax, [ebp-12]
push eax
push 0
push 0
push dword ptr [ebp-8]
call SYMBFINDCLOSESTOVLPROC
add esp, 20
mov dword ptr [ebp-8], eax
jmp .Lt_011C
.Lt_011D:
lea eax, [ebp-36]
mov dword ptr [ebp-68], eax
lea eax, [ebp-36]
lea ebx, [ebp-68]
add ebx, 4
mov dword ptr [ebx], eax
lea eax, [ebp-68]
add eax, 8
mov dword ptr [eax], 24
lea eax, [ebp-68]
add eax, 12
mov dword ptr [eax], 12
lea eax, [ebp-68]
add eax, 16
mov dword ptr [eax], 1
lea eax, [ebp-68]
add eax, 20
mov dword ptr [eax], 2
lea eax, [ebp-68]
add eax, 24
mov dword ptr [eax], 0
lea eax, [ebp-68]
add eax, 28
mov dword ptr [eax], 1
mov dword ptr [ebp-72], 1
lea eax, [ebp-36]
mov dword ptr [ebp-76], eax
mov eax, dword ptr [ebp-76]
mov ebx, dword ptr [ebp+20]
mov dword ptr [eax], ebx
mov ebx, dword ptr [ebp-76]
mov dword ptr [ebx+4], -1
mov ebx, dword ptr [ebp-76]
mov dword ptr [ebx+8], 0
cmp dword ptr [ebp+12], 26
jne .Lt_0121
cmp dword ptr [ebp+24], 0
je .Lt_0123
lea ebx, [ebp-24]
mov dword ptr [ebp-28], ebx
inc dword ptr [ebp-72]
lea ebx, [ebp-24]
mov dword ptr [ebp-76], ebx
mov ebx, dword ptr [ebp-76]
mov eax, dword ptr [ebp+24]
mov dword ptr [ebx], eax
mov eax, dword ptr [ebp-76]
mov dword ptr [eax+4], -1
mov eax, dword ptr [ebp-76]
mov dword ptr [eax+8], 0
.Lt_0123:
.Lt_0122:
.Lt_0121:
.Lt_0120:
push 0
lea eax, [ebp-12]
push eax
lea eax, [ebp-36]
push eax
push dword ptr [ebp-72]
push dword ptr [ebp-8]
call SYMBFINDCLOSESTOVLPROC
add esp, 20
mov dword ptr [ebp-8], eax
.Lt_011C:
cmp dword ptr [ebp-8], 0
jne .Lt_0126
cmp dword ptr [ebp-12], 0
je .Lt_0128
push 0
push -1
push dword ptr [ebp-12]
call ERRREPORT
add esp, 12
jmp .Lt_0127
.Lt_0128:
push 0
push -1
push 7
push offset Lt_0129
push 0
mov eax, dword ptr [ebp+12]
sal eax, 4
push dword ptr [AST_OPTB+eax+8]
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
lea eax, [ebp-36]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrInit
add esp, 20
mov eax, dword ptr [ebp+12]
mov dword ptr [ebp-40], eax
jmp .Lt_012C
.Lt_012E:
cmp dword ptr [ebp+20], 0
jne .Lt_0130
push 0
push 4
push offset Lt_0131
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_0130:
.Lt_012F:
jmp .Lt_012B
.Lt_0132:
cmp dword ptr [ebp+24], 0
jne .Lt_0134
push 0
push 4
push offset Lt_0131
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_0134:
.Lt_0133:
jmp .Lt_012B
.Lt_012C:
mov eax, dword ptr [ebp-40]
add eax, 4294967272
cmp eax, 2
ja .Lt_012B
mov eax, dword ptr [ebp-40]
jmp dword ptr [.LT_0135+eax*4-96]
.LT_0135:
.int .Lt_012E
.int .Lt_012E
.int .Lt_0132
.Lt_012B:
push 0
push 7
push offset Lt_0136
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
push dword ptr [ebp-24]
push -1
push 197
call ERRREPORT
add esp, 12
lea eax, [ebp-24]
push eax
call fb_StrDelete
add esp, 4
.Lt_0127:
mov dword ptr [ebp-4], 0
jmp .Lt_0119
.Lt_0126:
.Lt_0125:
push dword ptr [ebp+24]
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp-8]
call ASTBUILDCALL
add esp, 16
mov dword ptr [ebp-4], eax
.Lt_0119:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HUDTCALLOPOVL, .-HUDTCALLOPOVL
.balign 16
HFORSTMTCLOSE:
.type HFORSTMTCLOSE, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0137:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+8], 0
je .Lt_013A
mov eax, dword ptr [ebp+8]
push dword ptr [eax+8]
call ASTSCOPEEND
add esp, 4
.Lt_013A:
.Lt_0139:
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+88]
call ASTNEWLABEL
add esp, 8
push eax
call ASTADD
add esp, 4
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+16]
mov eax, dword ptr [ebx+24]
and eax, 511
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 18
jne .Lt_013D
.Lt_013E:
push dword ptr [ebp+8]
call HUDTSTEP
add esp, 4
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+80]
call ASTNEWLABEL
add esp, 8
push eax
call ASTADD
add esp, 4
push dword ptr [ebp+8]
call HUDTNEXT
add esp, 4
jmp .Lt_013B
.Lt_013D:
push dword ptr [ebp+8]
call HSCALARSTEP
add esp, 4
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+80]
call ASTNEWLABEL
add esp, 8
push eax
call ASTADD
add esp, 4
push dword ptr [ebp+8]
call HSCALARNEXT
add esp, 4
.Lt_013F:
.Lt_013B:
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+92]
call ASTNEWLABEL
add esp, 8
push eax
call ASTADD
add esp, 4
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+12], 0
je .Lt_0141
mov eax, dword ptr [ebp+8]
push dword ptr [eax+12]
call ASTSCOPEEND
add esp, 4
.Lt_0141:
.Lt_0140:
.Lt_0138:
pop ebx
mov esp, ebp
pop ebp
ret
.size HFORSTMTCLOSE, .-HFORSTMTCLOSE
	#FreeBASIC-1.01.0-source/src/compiler/parser-compound-for.bas' compilation took 0.03398889175150543 secs

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
Lt_00BD:	.ascii	"let\0"
.balign 4
Lt_0129:	.ascii	" (with\0"
.balign 4
Lt_0131:	.ascii	"out\0"
.balign 4
Lt_0136:	.ascii	" step)\0"

.section .ctors, "aw", @progbits
.int fb_ctor__parserzcompoundzfor
