	.intel_syntax noprefix

	#FreeBASIC-1.01.0-source/src/compiler/parser-expr-atom.bas' compilation started at 16:30:05 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl CEQINPARENSONLYEXPR
CEQINPARENSONLYEXPR:
.type CEQINPARENSONLYEXPR, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_005F:
mov eax, dword ptr [PARSER+144]
and eax, 256
test eax, eax
setne al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-12], eax
mov eax, dword ptr [PARSER+144]
or eax, 256
mov ebx, eax
mov dword ptr [PARSER+144], ebx
jmp .Lt_0061
.Lt_0062:
mov ebx, dword ptr [PARSER+144]
and ebx, -257
mov eax, ebx
mov dword ptr [PARSER+144], eax
.Lt_0061:
call CEXPRESSION
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-12], 0
je .Lt_0064
mov eax, dword ptr [PARSER+144]
or eax, 256
mov ebx, eax
mov dword ptr [PARSER+144], ebx
jmp .Lt_0063
.Lt_0064:
mov ebx, dword ptr [PARSER+144]
and ebx, -257
mov eax, ebx
mov dword ptr [PARSER+144], eax
.Lt_0063:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0060:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CEQINPARENSONLYEXPR, .-CEQINPARENSONLYEXPR
.balign 16

.globl CGTINPARENSONLYEXPR
CGTINPARENSONLYEXPR:
.type CGTINPARENSONLYEXPR, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_0066:
mov eax, dword ptr [PARSER+144]
and eax, 512
test eax, eax
setne al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-12], eax
mov eax, dword ptr [PARSER+144]
or eax, 512
mov ebx, eax
mov dword ptr [PARSER+144], ebx
jmp .Lt_0068
.Lt_0069:
mov ebx, dword ptr [PARSER+144]
and ebx, -513
mov eax, ebx
mov dword ptr [PARSER+144], eax
.Lt_0068:
call CEXPRESSION
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-12], 0
je .Lt_006B
mov eax, dword ptr [PARSER+144]
or eax, 512
mov ebx, eax
mov dword ptr [PARSER+144], ebx
jmp .Lt_006A
.Lt_006B:
mov ebx, dword ptr [PARSER+144]
and ebx, -513
mov eax, ebx
mov dword ptr [PARSER+144], eax
.Lt_006A:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0067:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CGTINPARENSONLYEXPR, .-CGTINPARENSONLYEXPR
.balign 16

.globl CPARENTEXPRESSION
CPARENTEXPRESSION:
.type CPARENTEXPRESSION, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
mov dword ptr [ebp-4], 0
.Lt_006D:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
je .Lt_0070
mov dword ptr [ebp-4], 0
jmp .Lt_006E
.Lt_0070:
.Lt_006F:
push 0
call LEXSKIPTOKEN
add esp, 4
inc dword ptr [PARSER+140]
mov eax, dword ptr [PARSER+144]
and eax, 1
test eax, eax
setne al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-24], eax
jmp .Lt_0072
mov eax, dword ptr [PARSER+144]
or eax, 1
mov ebx, eax
mov dword ptr [PARSER+144], ebx
jmp .Lt_0071
.Lt_0072:
mov ebx, dword ptr [PARSER+144]
and ebx, -2
mov eax, ebx
mov dword ptr [PARSER+144], eax
.Lt_0071:
mov eax, dword ptr [PARSER+144]
and eax, 256
test eax, eax
setne al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-12], eax
mov eax, dword ptr [PARSER+144]
and eax, 512
test eax, eax
setne al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-16], eax
mov eax, dword ptr [PARSER+144]
and eax, 4096
test eax, eax
setne al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-20], eax
jmp .Lt_0074
mov eax, dword ptr [PARSER+144]
or eax, 256
mov ebx, eax
mov dword ptr [PARSER+144], ebx
jmp .Lt_0073
.Lt_0074:
mov ebx, dword ptr [PARSER+144]
and ebx, -257
mov eax, ebx
mov dword ptr [PARSER+144], eax
.Lt_0073:
jmp .Lt_0076
mov eax, dword ptr [PARSER+144]
or eax, 512
mov ebx, eax
mov dword ptr [PARSER+144], ebx
jmp .Lt_0075
.Lt_0076:
mov ebx, dword ptr [PARSER+144]
and ebx, -513
mov eax, ebx
mov dword ptr [PARSER+144], eax
.Lt_0075:
jmp .Lt_0078
mov eax, dword ptr [PARSER+144]
or eax, 4096
mov ebx, eax
mov dword ptr [PARSER+144], ebx
jmp .Lt_0077
.Lt_0078:
mov ebx, dword ptr [PARSER+144]
and ebx, -4097
mov eax, ebx
mov dword ptr [PARSER+144], eax
.Lt_0077:
call CEXPRESSION
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-12], 0
je .Lt_007A
mov eax, dword ptr [PARSER+144]
or eax, 256
mov ebx, eax
mov dword ptr [PARSER+144], ebx
jmp .Lt_0079
.Lt_007A:
mov ebx, dword ptr [PARSER+144]
and ebx, -257
mov eax, ebx
mov dword ptr [PARSER+144], eax
.Lt_0079:
cmp dword ptr [ebp-16], 0
je .Lt_007C
mov eax, dword ptr [PARSER+144]
or eax, 512
mov ebx, eax
mov dword ptr [PARSER+144], ebx
jmp .Lt_007B
.Lt_007C:
mov ebx, dword ptr [PARSER+144]
and ebx, -513
mov eax, ebx
mov dword ptr [PARSER+144], eax
.Lt_007B:
cmp dword ptr [ebp-20], 0
je .Lt_007E
mov eax, dword ptr [PARSER+144]
or eax, 4096
mov ebx, eax
mov dword ptr [PARSER+144], ebx
jmp .Lt_007D
.Lt_007E:
mov ebx, dword ptr [PARSER+144]
and ebx, -4097
mov eax, ebx
mov dword ptr [PARSER+144], eax
.Lt_007D:
cmp dword ptr [ebp-8], 0
jne .Lt_0080
cmp dword ptr [ebp-24], 0
je .Lt_0082
mov dword ptr [ebp-4], 0
jmp .Lt_006E
.Lt_0082:
.Lt_0081:
push 0
push 0
push 9
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
jmp .Lt_006E
.Lt_0080:
.Lt_007F:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
jne .Lt_0084
push 0
call LEXSKIPTOKEN
add esp, 4
dec dword ptr [PARSER+140]
jmp .Lt_0083
.Lt_0084:
mov eax, dword ptr [ebp-24]
test eax, eax
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [PARSER+140]
test ebx, ebx
sete bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
je .Lt_0086
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
.Lt_0086:
.Lt_0085:
.Lt_0083:
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ebx
.Lt_006E:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CPARENTEXPRESSION, .-CPARENTEXPRESSION
.balign 16

.globl CATOM
CATOM:
.type CATOM, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_010F:
cmp dword ptr [ebp+12], 0
jne .Lt_0112
push 0
call LEXGETCLASS
add esp, 4
mov dword ptr [ebp-8], eax
jmp .Lt_0111
.Lt_0112:
mov dword ptr [ebp-8], 0
.Lt_0111:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-12], eax
jmp .Lt_0114
.Lt_0116:
cmp dword ptr [ebp+12], 0
jne .Lt_0118
push 50
lea eax, [ebp+8]
push eax
call CIDENTIFIER
add esp, 8
mov dword ptr [ebp+12], eax
.Lt_0118:
.Lt_0117:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HCHECKID
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_0110
jmp .Lt_0113
.Lt_0119:
cmp dword ptr [ENV+136], 3
jne .Lt_011B
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [eax+16532]
push dword ptr [ebx+4116]
push dword ptr [ebp+8]
call HCHECKID
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_0110
.Lt_011B:
.Lt_011A:
jmp .Lt_0113
.Lt_011C:
push -1
call CNUMLITERAL
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_0110
jmp .Lt_0113
.Lt_011D:
push -1
call CSTRLITERAL
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_0110
jmp .Lt_0113
.Lt_011E:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 46
je .Lt_0120
mov dword ptr [ebp-4], 0
jmp .Lt_0110
.Lt_0120:
.Lt_011F:
cmp dword ptr [PARSER+52], 0
je .Lt_0122
push 64
push 1
call LEXGETLOOKAHEAD
add esp, 8
cmp eax, 46
je .Lt_0124
mov eax, dword ptr [PARSER+144]
and eax, 2
test eax, eax
setne al
shr eax, 1
sbb eax, eax
push eax
call CWITHVARIABLE
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_0110
.Lt_0124:
.Lt_0123:
.Lt_0122:
.Lt_0121:
push 50
lea eax, [ebp+8]
push eax
call CIDENTIFIER
add esp, 8
mov dword ptr [ebp+12], eax
cmp dword ptr [ebp+12], 0
je .Lt_0126
push 0
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HFINDID
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_0110
.Lt_0126:
.Lt_0125:
jmp .Lt_0113
.Lt_0114:
cmp dword ptr [ebp-12], 6
ja .Lt_0113
mov eax, dword ptr [ebp-12]
jmp dword ptr [.LT_0127+eax*4]
.LT_0127:
.int .Lt_0116
.int .Lt_0116
.int .Lt_0116
.int .Lt_011C
.int .Lt_011D
.int .Lt_0119
.int .Lt_011E
.Lt_0113:
mov dword ptr [ebp-4], 0
.Lt_0110:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CATOM, .-CATOM
.balign 16
fb_ctor__parserzexprzatom:
.type fb_ctor__parserzexprzatom, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__parserzexprzatom, .-fb_ctor__parserzexprzatom
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
HFINDID_QB:
.type HFINDID_QB, @function
push ebp
mov ebp, esp
sub esp, 32
push ebx
mov dword ptr [ebp-4], 0
.Lt_008D:
call LEXGETTEXT
mov dword ptr [ebp-8], eax
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [eax+16532]
mov eax, dword ptr [ebx+8]
mov dword ptr [ebp-12], eax
push dword ptr [ebp-8]
call SYMBGETDEFTYPE
add esp, 4
mov dword ptr [ebp-16], eax
.Lt_008F:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-20], ebx
mov dword ptr [ebp-24], 0
cmp dword ptr [ebp-12], -2147483648
jne .Lt_0093
.Lt_0094:
mov dword ptr [ebp-28], -1
mov ebx, dword ptr [ebp-20]
mov eax, dword ptr [ebx+4]
and eax, 268435456
test eax, eax
je .Lt_0098
mov eax, dword ptr [ebp-20]
cmp dword ptr [eax], 1
jne .Lt_009A
cmp dword ptr [ebp-16], 16
jne .Lt_009C
mov eax, dword ptr [ebp-20]
mov ebx, dword ptr [eax+24]
and ebx, 511
mov eax, ebx
mov dword ptr [ebp-32], eax
jmp .Lt_009E
.Lt_00A0:
jmp .Lt_009D
.Lt_00A1:
mov dword ptr [ebp-28], 0
jmp .Lt_009D
.Lt_009E:
mov eax, dword ptr [ebp-32]
add eax, 4294967293
cmp eax, 14
ja .Lt_00A1
mov eax, dword ptr [ebp-32]
jmp dword ptr [.LT_00A2+eax*4-12]
.LT_00A2:
.int .Lt_00A0
.int .Lt_00A1
.int .Lt_00A1
.int .Lt_00A1
.int .Lt_00A1
.int .Lt_00A1
.int .Lt_00A1
.int .Lt_00A1
.int .Lt_00A1
.int .Lt_00A1
.int .Lt_00A1
.int .Lt_00A1
.int .Lt_00A1
.int .Lt_00A0
.int .Lt_00A0
.Lt_009D:
jmp .Lt_009B
.Lt_009C:
mov eax, dword ptr [ebp-20]
mov ebx, dword ptr [eax+24]
and ebx, 511
cmp ebx, dword ptr [ebp-16]
sete bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-28], ebx
.Lt_009B:
.Lt_009A:
.Lt_0099:
.Lt_0098:
.Lt_0097:
cmp dword ptr [ebp-28], 0
je .Lt_00A4
mov ebx, dword ptr [ebp-20]
mov eax, dword ptr [ebx]
mov dword ptr [ebp-32], eax
jmp .Lt_00A6
.Lt_00A8:
push dword ptr [ebp-20]
call CCONSTANT
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_008E
jmp .Lt_00A5
.Lt_00A9:
mov eax, dword ptr [ebp-20]
mov ebx, dword ptr [eax+8]
and ebx, 32
test ebx, ebx
je .Lt_00AB
mov ebx, dword ptr [ebp-20]
mov eax, dword ptr [ebx+4]
and eax, 268435456
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
sete al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-28], eax
.Lt_00AB:
.Lt_00AA:
cmp dword ptr [ebp-28], 0
je .Lt_00AD
push 0
push dword ptr [ebp-20]
push dword ptr [ebp+8]
call CFUNCTIONEX
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_008E
.Lt_00AD:
.Lt_00AC:
jmp .Lt_00A5
.Lt_00AE:
cmp dword ptr [ebp-24], 0
jne .Lt_00B0
push dword ptr [ebp-20]
call SYMBVARCHECKACCESS
add esp, 4
test eax, eax
je .Lt_00B2
mov eax, dword ptr [ebp-20]
mov dword ptr [ebp-24], eax
.Lt_00B2:
.Lt_00B1:
.Lt_00B0:
.Lt_00AF:
jmp .Lt_00A5
.Lt_00B3:
mov eax, dword ptr [ebp-20]
mov ebx, dword ptr [eax+4]
and ebx, 268435456
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_00B5
push dword ptr [ebp-20]
call CQUIRKFUNCTION
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_008E
.Lt_00B5:
.Lt_00B4:
jmp .Lt_00A5
.Lt_00A6:
mov eax, dword ptr [ebp-32]
add eax, 4294967295
cmp eax, 5
ja .Lt_00A5
mov eax, dword ptr [ebp-32]
jmp dword ptr [.LT_00B6+eax*4-4]
.LT_00B6:
.int .Lt_00AE
.int .Lt_00A8
.int .Lt_00A9
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00B3
.Lt_00A5:
.Lt_00A4:
.Lt_00A3:
mov eax, dword ptr [ebp-20]
mov ebx, dword ptr [eax+144]
mov dword ptr [ebp-20], ebx
.Lt_0096:
cmp dword ptr [ebp-20], 0
jne .Lt_0094
.Lt_0095:
jmp .Lt_0092
.Lt_0093:
.Lt_00B7:
cmp dword ptr [ebp-12], 16
jne .Lt_00BB
mov ebx, dword ptr [ebp-20]
mov eax, dword ptr [ebx+24]
and eax, 511
mov ebx, eax
mov dword ptr [ebp-32], ebx
jmp .Lt_00BD
.Lt_00BF:
mov dword ptr [ebp-28], -1
jmp .Lt_00BC
.Lt_00C0:
mov dword ptr [ebp-28], 0
jmp .Lt_00BC
.Lt_00BD:
mov ebx, dword ptr [ebp-32]
add ebx, 4294967293
cmp ebx, 14
ja .Lt_00C0
mov ebx, dword ptr [ebp-32]
jmp dword ptr [.LT_00C1+ebx*4-12]
.LT_00C1:
.int .Lt_00BF
.int .Lt_00C0
.int .Lt_00C0
.int .Lt_00C0
.int .Lt_00C0
.int .Lt_00C0
.int .Lt_00C0
.int .Lt_00C0
.int .Lt_00C0
.int .Lt_00C0
.int .Lt_00C0
.int .Lt_00C0
.int .Lt_00C0
.int .Lt_00BF
.int .Lt_00BF
.Lt_00BC:
jmp .Lt_00BA
.Lt_00BB:
mov ebx, dword ptr [ebp-20]
mov eax, dword ptr [ebx+24]
and eax, 511
cmp eax, dword ptr [ebp-12]
sete al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-28], eax
.Lt_00BA:
cmp dword ptr [ebp-28], 0
je .Lt_00C3
mov eax, dword ptr [ebp-20]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-32], ebx
jmp .Lt_00C5
.Lt_00C7:
push dword ptr [ebp-20]
call CCONSTANT
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_008E
jmp .Lt_00C4
.Lt_00C8:
push 0
push dword ptr [ebp-20]
push dword ptr [ebp+8]
call CFUNCTIONEX
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_008E
jmp .Lt_00C4
.Lt_00C9:
cmp dword ptr [ebp-24], 0
jne .Lt_00CB
push dword ptr [ebp-20]
call SYMBVARCHECKACCESS
add esp, 4
test eax, eax
je .Lt_00CD
mov eax, dword ptr [ebp-20]
mov dword ptr [ebp-24], eax
.Lt_00CD:
.Lt_00CC:
.Lt_00CB:
.Lt_00CA:
jmp .Lt_00C4
.Lt_00CE:
push dword ptr [ebp-20]
call CQUIRKFUNCTION
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_008E
jmp .Lt_00C4
.Lt_00C5:
mov eax, dword ptr [ebp-32]
add eax, 4294967295
cmp eax, 5
ja .Lt_00C4
mov eax, dword ptr [ebp-32]
jmp dword ptr [.LT_00CF+eax*4-4]
.LT_00CF:
.int .Lt_00C9
.int .Lt_00C7
.int .Lt_00C8
.int .Lt_00C4
.int .Lt_00C4
.int .Lt_00CE
.Lt_00C4:
jmp .Lt_00C2
.Lt_00C3:
mov eax, dword ptr [ebp-20]
cmp dword ptr [eax], 6
jne .Lt_00D1
mov eax, dword ptr [ebp-20]
cmp dword ptr [eax+52], 474
jne .Lt_00D3
cmp dword ptr [ebp-12], 16
jne .Lt_00D5
push dword ptr [ebp-20]
call CQUIRKFUNCTION
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_008E
.Lt_00D5:
.Lt_00D4:
.Lt_00D3:
.Lt_00D2:
.Lt_00D1:
.Lt_00D0:
.Lt_00C2:
mov eax, dword ptr [ebp-20]
mov ebx, dword ptr [eax+144]
mov dword ptr [ebp-20], ebx
.Lt_00B9:
cmp dword ptr [ebp-20], 0
jne .Lt_00B7
.Lt_00B8:
.Lt_0092:
cmp dword ptr [ebp-24], 0
je .Lt_00D7
mov ebx, dword ptr [PARSER+144]
and ebx, 2
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
push ebx
push dword ptr [ebp-24]
call _Z11CVARIABLEEXP8FBSYMBOLi
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_008E
.Lt_00D7:
.Lt_00D6:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp+12], ebx
.Lt_0091:
cmp dword ptr [ebp+12], 0
jne .Lt_008F
.Lt_0090:
mov dword ptr [ebp-4], 0
.Lt_008E:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HFINDID_QB, .-HFINDID_QB
.balign 16
HFINDID:
.type HFINDID, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_00D8:
cmp dword ptr [ENV+136], 3
jne .Lt_00DB
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HFINDID_QB
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_00D9
.Lt_00DB:
.Lt_00DA:
.Lt_00DC:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-8], ebx
.Lt_00DF:
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx]
mov dword ptr [ebp-12], eax
jmp .Lt_00E3
.Lt_00E5:
push dword ptr [ebp-8]
call CCONSTANT
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_00D9
jmp .Lt_00E2
.Lt_00E6:
push dword ptr [ebp+16]
push dword ptr [ebp-8]
push dword ptr [ebp+8]
call CFUNCTIONEX
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_00D9
jmp .Lt_00E2
.Lt_00E7:
mov eax, dword ptr [PARSER+144]
and eax, 2
test eax, eax
setne al
shr eax, 1
sbb eax, eax
push eax
push dword ptr [ebp+12]
call _Z11CVARIABLEEXP10FBSYMCHAINi
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_00D9
jmp .Lt_00E2
.Lt_00E8:
push dword ptr [ebp+16]
mov eax, dword ptr [PARSER+144]
and eax, 2
test eax, eax
setne al
shr eax, 1
sbb eax, eax
push eax
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call CIMPLICITDATAMEMBER
add esp, 16
mov dword ptr [ebp-4], eax
jmp .Lt_00D9
jmp .Lt_00E2
.Lt_00E9:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 353
jne .Lt_00EB
call HBASEMEMBERACCESS
mov dword ptr [ebp-4], eax
jmp .Lt_00D9
jmp .Lt_00EA
.Lt_00EB:
push dword ptr [ebp-8]
call CQUIRKFUNCTION
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_00D9
.Lt_00EA:
jmp .Lt_00E2
.Lt_00EC:
push dword ptr [ebp-8]
call SYMBGETCOMPCTORHEAD
add esp, 4
test eax, eax
je .Lt_00EE
push 0
call LEXSKIPTOKEN
add esp, 4
push dword ptr [ebp-8]
call CCTORCALL
add esp, 4
push eax
call CSTRIDXORMEMBERDEREF
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_00D9
.Lt_00EE:
.Lt_00ED:
jmp .Lt_00E2
.Lt_00EF:
push dword ptr [ebp-8]
call SYMBHASCTOR
add esp, 4
test eax, eax
je .Lt_00F1
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [ebp-8]
push dword ptr [eax+28]
call CCTORCALL
add esp, 4
push eax
call CSTRIDXORMEMBERDEREF
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_00D9
.Lt_00F1:
.Lt_00F0:
jmp .Lt_00E2
.Lt_00E3:
mov eax, dword ptr [ebp-12]
add eax, 4294967295
cmp eax, 12
ja .Lt_00E2
mov eax, dword ptr [ebp-12]
jmp dword ptr [.LT_00F2+eax*4-4]
.LT_00F2:
.int .Lt_00E7
.int .Lt_00E5
.int .Lt_00E6
.int .Lt_00E2
.int .Lt_00E2
.int .Lt_00E9
.int .Lt_00E2
.int .Lt_00E2
.int .Lt_00E2
.int .Lt_00EC
.int .Lt_00EC
.int .Lt_00E8
.int .Lt_00EF
.Lt_00E2:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+144]
mov dword ptr [ebp-8], ebx
.Lt_00E1:
cmp dword ptr [ebp-8], 0
jne .Lt_00DF
.Lt_00E0:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
mov dword ptr [ebp+12], eax
.Lt_00DE:
cmp dword ptr [ebp+12], 0
jne .Lt_00DC
.Lt_00DD:
mov dword ptr [ebp-4], 0
.Lt_00D9:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HFINDID, .-HFINDID
.balign 16
HBASEMEMBERACCESS:
.type HBASEMEMBERACCESS, @function
push ebp
mov ebp, esp
sub esp, 40
push ebx
mov dword ptr [ebp-4], 0
.Lt_00F3:
mov eax, dword ptr [PARSER+100]
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+4]
and ebx, 2048
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_00F6
push 0
push 0
push 293
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-4], eax
jmp .Lt_00F4
.Lt_00F6:
.Lt_00F5:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+128]
mov eax, dword ptr [ebx]
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax+92]
mov dword ptr [ebp-16], ebx
.Lt_00F7:
cmp dword ptr [ebp-16], 0
jne .Lt_00FB
push 0
push 0
push 294
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-4], eax
jmp .Lt_00F4
.Lt_00FB:
.Lt_00FA:
push 64
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 353
je .Lt_00FD
jmp .Lt_00F8
.Lt_00FD:
.Lt_00FC:
push 0
push 1
call LEXGETLOOKAHEAD
add esp, 8
cmp eax, 46
je .Lt_00FF
push 0
push 0
push 119
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-4], eax
jmp .Lt_00F4
.Lt_00FF:
.Lt_00FE:
mov eax, dword ptr [ebp-16]
mov ebx, dword ptr [eax+28]
mov eax, dword ptr [ebx+92]
mov dword ptr [ebp-16], eax
.Lt_00F9:
jmp .Lt_00F7
.Lt_00F8:
mov eax, dword ptr [ebp-16]
mov dword ptr [ebp-40], eax
lea eax, [ebp-40]
add eax, 4
mov dword ptr [eax], 0
lea eax, [ebp-40]
add eax, 8
mov dword ptr [eax], 0
lea eax, [ebp-40]
add eax, 12
mov dword ptr [eax], 0
mov dword ptr [eax+4], 0
mov dword ptr [eax+8], 0
push 2048
lea eax, [ebp-40]
push eax
mov eax, dword ptr [ebp-16]
push dword ptr [eax+28]
call HFINDID
add esp, 12
mov dword ptr [ebp-4], eax
.Lt_00F4:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HBASEMEMBERACCESS, .-HBASEMEMBERACCESS
.balign 16
HCHECKID:
.type HCHECKID, @function
push ebp
mov ebp, esp
sub esp, 20
mov dword ptr [ebp-4], 0
.Lt_0100:
cmp dword ptr [ebp+12], 0
je .Lt_0103
push 0
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HFINDID
add esp, 12
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
je .Lt_0105
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
jmp .Lt_0101
.Lt_0105:
.Lt_0104:
.Lt_0103:
.Lt_0102:
mov eax, dword ptr [PARSER+144]
and eax, 1024
test eax, eax
je .Lt_0107
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
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
lea eax, [ebp-20]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-20]
call ASTNEWCONSTSTR
add esp, 4
mov dword ptr [ebp-8], eax
lea eax, [ebp-20]
push eax
call fb_StrDelete
add esp, 4
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
jmp .Lt_0101
.Lt_0107:
.Lt_0106:
cmp dword ptr [ENV+136], 3
je .Lt_010A
push 0
call LEXGETCLASS
add esp, 4
test eax, eax
je .Lt_010C
mov dword ptr [ebp-4], 0
jmp .Lt_0101
.Lt_010C:
.Lt_010B:
.Lt_010A:
.Lt_0109:
jmp .Lt_010E
push 0
push 148
push 2097152
call ERRREPORTNOTALLOWED
add esp, 12
mov dword ptr [ebp-4], 0
jmp .Lt_0101
.Lt_010E:
.Lt_010D:
mov eax, dword ptr [PARSER+144]
and eax, 2
test eax, eax
setne al
shr eax, 1
sbb eax, eax
push eax
push 0
call _Z11CVARIABLEEXP10FBSYMCHAINi
add esp, 8
mov dword ptr [ebp-4], eax
.Lt_0101:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size HCHECKID, .-HCHECKID
	#FreeBASIC-1.01.0-source/src/compiler/parser-expr-atom.bas' compilation took 0.03940208465792239 secs

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
.int fb_ctor__parserzexprzatom
