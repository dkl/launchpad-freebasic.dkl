	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/parser-expr-binary.bas' compilation started at 14:16:36 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl CEXPRESSION
CEXPRESSION:
.type CEXPRESSION, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0060:
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
jmp .Lt_0062
.Lt_0063:
mov ebx, dword ptr [PARSER+144]
and ebx, -5
mov eax, ebx
mov dword ptr [PARSER+144], eax
.Lt_0062:
call CBOOLEXPRESSION
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-8], 0
je .Lt_0065
mov eax, dword ptr [PARSER+144]
or eax, 4
mov ebx, eax
mov dword ptr [PARSER+144], ebx
jmp .Lt_0064
.Lt_0065:
mov ebx, dword ptr [PARSER+144]
and ebx, -5
mov eax, ebx
mov dword ptr [PARSER+144], eax
.Lt_0064:
.Lt_0061:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CEXPRESSION, .-CEXPRESSION
.balign 16

.globl CEXPRESSIONWITHNIDXARRAY
CEXPRESSIONWITHNIDXARRAY:
.type CEXPRESSIONWITHNIDXARRAY, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0067:
mov eax, dword ptr [PARSER+144]
and eax, 2
test eax, eax
setne al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp+8]
not eax
test eax, eax
je .Lt_006A
mov eax, dword ptr [PARSER+144]
or eax, 2
mov ebx, eax
mov dword ptr [PARSER+144], ebx
jmp .Lt_0069
.Lt_006A:
mov ebx, dword ptr [PARSER+144]
and ebx, -3
mov eax, ebx
mov dword ptr [PARSER+144], eax
.Lt_0069:
call CEXPRESSION
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-8], 0
je .Lt_006C
mov eax, dword ptr [PARSER+144]
or eax, 2
mov ebx, eax
mov dword ptr [PARSER+144], ebx
jmp .Lt_006B
.Lt_006C:
mov ebx, dword ptr [PARSER+144]
and ebx, -3
mov eax, ebx
mov dword ptr [PARSER+144], eax
.Lt_006B:
.Lt_0068:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CEXPRESSIONWITHNIDXARRAY, .-CEXPRESSIONWITHNIDXARRAY
.balign 16

.globl CBOOLEXPRESSION
CBOOLEXPRESSION:
.type CBOOLEXPRESSION, @function
push ebp
mov ebp, esp
sub esp, 24
mov dword ptr [ebp-4], 0
.Lt_006E:
call CLOGEXPRESSION
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 0
jne .Lt_0071
mov dword ptr [ebp-4], 0
jmp .Lt_006F
.Lt_0071:
.Lt_0070:
.Lt_0072:
push 0
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-24], eax
jmp .Lt_0076
.Lt_0078:
mov dword ptr [ebp-8], 36
jmp .Lt_0075
.Lt_0079:
mov dword ptr [ebp-8], 37
jmp .Lt_0075
.Lt_007A:
jmp .Lt_0073
jmp .Lt_0075
.Lt_0076:
mov eax, dword ptr [ebp-24]
add eax, 4294967006
cmp eax, 1
ja .Lt_007A
mov eax, dword ptr [ebp-24]
jmp dword ptr [.LT_007B+eax*4-1160]
.LT_007B:
.int .Lt_0078
.int .Lt_0079
.Lt_0075:
push 0
push 1
call LEXGETLOOKAHEAD
add esp, 8
push eax
call HISASSIGNTOKEN
add esp, 4
test eax, eax
je .Lt_007D
jmp .Lt_0073
.Lt_007D:
.Lt_007C:
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call ASTDTORLISTSCOPEBEGIN
add esp, 4
call CLOGEXPRESSION
mov dword ptr [ebp-16], eax
call ASTDTORLISTSCOPEEND
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-16], 0
jne .Lt_007F
push 0
push 0
push 9
call ERRREPORT
add esp, 12
jmp .Lt_0073
.Lt_007F:
.Lt_007E:
push 1
push dword ptr [ebp-12]
push dword ptr [ebp-16]
push dword ptr [ebp-20]
push dword ptr [ebp-8]
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 0
jne .Lt_0081
push 0
push 0
push 20
call ERRREPORT
add esp, 12
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-20], eax
.Lt_0081:
.Lt_0080:
.Lt_0074:
jmp .Lt_0072
.Lt_0073:
mov eax, dword ptr [ebp-20]
mov dword ptr [ebp-4], eax
.Lt_006F:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size CBOOLEXPRESSION, .-CBOOLEXPRESSION
.balign 16

.globl CLOGEXPRESSION
CLOGEXPRESSION:
.type CLOGEXPRESSION, @function
push ebp
mov ebp, esp
sub esp, 20
mov dword ptr [ebp-4], 0
.Lt_0082:
call CLOGOREXPRESSION
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 0
jne .Lt_0085
mov dword ptr [ebp-4], 0
jmp .Lt_0083
.Lt_0085:
.Lt_0084:
.Lt_0086:
push 0
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-20], eax
jmp .Lt_008A
.Lt_008C:
mov dword ptr [ebp-8], 38
jmp .Lt_0089
.Lt_008D:
mov dword ptr [ebp-8], 39
jmp .Lt_0089
.Lt_008E:
mov dword ptr [ebp-8], 40
jmp .Lt_0089
.Lt_008F:
jmp .Lt_0087
jmp .Lt_0089
.Lt_008A:
mov eax, dword ptr [ebp-20]
add eax, 4294967004
cmp eax, 2
ja .Lt_008F
mov eax, dword ptr [ebp-20]
jmp dword ptr [.LT_0090+eax*4-1168]
.LT_0090:
.int .Lt_008C
.int .Lt_008D
.int .Lt_008E
.Lt_0089:
push 0
push 1
call LEXGETLOOKAHEAD
add esp, 8
push eax
call HISASSIGNTOKEN
add esp, 4
test eax, eax
je .Lt_0092
jmp .Lt_0087
.Lt_0092:
.Lt_0091:
push 0
call LEXSKIPTOKEN
add esp, 4
call CLOGOREXPRESSION
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_0094
push 0
push 0
push 9
call ERRREPORT
add esp, 12
jmp .Lt_0087
.Lt_0094:
.Lt_0093:
push 1
push 0
push dword ptr [ebp-12]
push dword ptr [ebp-16]
push dword ptr [ebp-8]
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 0
jne .Lt_0096
push 0
push 0
push 20
call ERRREPORT
add esp, 12
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-16], eax
.Lt_0096:
.Lt_0095:
.Lt_0088:
jmp .Lt_0086
.Lt_0087:
mov eax, dword ptr [ebp-16]
mov dword ptr [ebp-4], eax
.Lt_0083:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size CLOGEXPRESSION, .-CLOGEXPRESSION
.balign 16

.globl CLOGOREXPRESSION
CLOGOREXPRESSION:
.type CLOGOREXPRESSION, @function
push ebp
mov ebp, esp
sub esp, 12
mov dword ptr [ebp-4], 0
.Lt_0097:
call CLOGANDEXPRESSION
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_009A
mov dword ptr [ebp-4], 0
jmp .Lt_0098
.Lt_009A:
.Lt_0099:
.Lt_009B:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 289
je .Lt_009F
jmp .Lt_009C
.Lt_009F:
.Lt_009E:
push 0
push 1
call LEXGETLOOKAHEAD
add esp, 8
push eax
call HISASSIGNTOKEN
add esp, 4
test eax, eax
je .Lt_00A1
jmp .Lt_009C
.Lt_00A1:
.Lt_00A0:
push 0
call LEXSKIPTOKEN
add esp, 4
call CLOGANDEXPRESSION
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_00A3
push 0
push 0
push 9
call ERRREPORT
add esp, 12
jmp .Lt_009C
.Lt_00A3:
.Lt_00A2:
push 1
push 0
push dword ptr [ebp-8]
push dword ptr [ebp-12]
push 35
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_00A5
push 0
push 0
push 20
call ERRREPORT
add esp, 12
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-12], eax
.Lt_00A5:
.Lt_00A4:
.Lt_009D:
jmp .Lt_009B
.Lt_009C:
mov eax, dword ptr [ebp-12]
mov dword ptr [ebp-4], eax
.Lt_0098:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size CLOGOREXPRESSION, .-CLOGOREXPRESSION
.balign 16

.globl CLOGANDEXPRESSION
CLOGANDEXPRESSION:
.type CLOGANDEXPRESSION, @function
push ebp
mov ebp, esp
sub esp, 12
mov dword ptr [ebp-4], 0
.Lt_00A6:
call CRELEXPRESSION
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_00A9
mov dword ptr [ebp-4], 0
jmp .Lt_00A7
.Lt_00A9:
.Lt_00A8:
.Lt_00AA:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 288
je .Lt_00AE
jmp .Lt_00AB
.Lt_00AE:
.Lt_00AD:
push 0
push 1
call LEXGETLOOKAHEAD
add esp, 8
push eax
call HISASSIGNTOKEN
add esp, 4
test eax, eax
je .Lt_00B0
jmp .Lt_00AB
.Lt_00B0:
.Lt_00AF:
push 0
call LEXSKIPTOKEN
add esp, 4
call CRELEXPRESSION
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_00B2
push 0
push 0
push 9
call ERRREPORT
add esp, 12
jmp .Lt_00AB
.Lt_00B2:
.Lt_00B1:
push 1
push 0
push dword ptr [ebp-8]
push dword ptr [ebp-12]
push 34
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_00B4
push 0
push 0
push 20
call ERRREPORT
add esp, 12
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-12], eax
.Lt_00B4:
.Lt_00B3:
.Lt_00AC:
jmp .Lt_00AA
.Lt_00AB:
mov eax, dword ptr [ebp-12]
mov dword ptr [ebp-4], eax
.Lt_00A7:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size CLOGANDEXPRESSION, .-CLOGANDEXPRESSION
.balign 16

.globl CRELEXPRESSION
CRELEXPRESSION:
.type CRELEXPRESSION, @function
push ebp
mov ebp, esp
sub esp, 20
mov dword ptr [ebp-4], 0
.Lt_00B5:
call CISEXPRESSION
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 0
jne .Lt_00B8
mov dword ptr [ebp-4], 0
jmp .Lt_00B6
.Lt_00B8:
.Lt_00B7:
.Lt_00B9:
push 0
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-20], eax
jmp .Lt_00BD
.Lt_00BF:
mov eax, dword ptr [PARSER+140]
test eax, eax
sete al
shr eax, 1
sbb eax, eax
mov dword ptr [PARSER+156], eax
mov eax, dword ptr [PARSER+144]
and eax, 256
test eax, eax
je .Lt_00C1
jmp .Lt_00BA
.Lt_00C1:
.Lt_00C0:
mov dword ptr [ebp-8], 45
jmp .Lt_00BC
.Lt_00C2:
mov eax, dword ptr [PARSER+144]
and eax, 512
test eax, eax
je .Lt_00C4
jmp .Lt_00BA
.Lt_00C4:
.Lt_00C3:
mov dword ptr [ebp-8], 46
jmp .Lt_00BC
.Lt_00C5:
mov dword ptr [ebp-8], 47
jmp .Lt_00BC
.Lt_00C6:
mov dword ptr [ebp-8], 48
jmp .Lt_00BC
.Lt_00C7:
mov dword ptr [ebp-8], 50
jmp .Lt_00BC
.Lt_00C8:
mov dword ptr [ebp-8], 49
jmp .Lt_00BC
.Lt_00C9:
jmp .Lt_00BA
jmp .Lt_00BC
.Lt_00BD:
mov eax, dword ptr [ebp-20]
add eax, 4294966997
cmp eax, 5
ja .Lt_00C9
mov eax, dword ptr [ebp-20]
jmp dword ptr [.LT_00CA+eax*4-1196]
.LT_00CA:
.int .Lt_00BF
.int .Lt_00C2
.int .Lt_00C5
.int .Lt_00C6
.int .Lt_00C7
.int .Lt_00C8
.Lt_00BC:
push 0
call LEXSKIPTOKEN
add esp, 4
call CISEXPRESSION
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_00CC
push 0
push 0
push 9
call ERRREPORT
add esp, 12
jmp .Lt_00BA
.Lt_00CC:
.Lt_00CB:
push 1
push 0
push dword ptr [ebp-12]
push dword ptr [ebp-16]
push dword ptr [ebp-8]
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 0
jne .Lt_00CE
push 0
push 0
push 20
call ERRREPORT
add esp, 12
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-16], eax
.Lt_00CE:
.Lt_00CD:
.Lt_00BB:
jmp .Lt_00B9
.Lt_00BA:
mov eax, dword ptr [ebp-16]
mov dword ptr [ebp-4], eax
.Lt_00B6:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size CRELEXPRESSION, .-CRELEXPRESSION
.balign 16

.globl CISEXPRESSION
CISEXPRESSION:
.type CISEXPRESSION, @function
push ebp
mov ebp, esp
sub esp, 28
push ebx
mov dword ptr [ebp-4], 0
.Lt_00D0:
call CCATEXPRESSION
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_00D3
mov dword ptr [ebp-4], 0
jmp .Lt_00D1
.Lt_00D3:
.Lt_00D2:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 272
je .Lt_00D5
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
jmp .Lt_00D1
.Lt_00D5:
.Lt_00D4:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+4]
and ebx, 511
cmp ebx, 18
jne .Lt_00D7
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx+8]
mov ebx, dword ptr [eax+8]
and ebx, 4194304
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_00D9
push 0
push 0
push 296
call ERRREPORT
add esp, 12
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-8], eax
.Lt_00D9:
.Lt_00D8:
jmp .Lt_00D6
.Lt_00D7:
push 0
push 0
push 298
call ERRREPORT
add esp, 12
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-8], eax
.Lt_00D6:
push 0
call LEXSKIPTOKEN
add esp, 4
push 1
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
lea eax, [ebp-24]
push eax
lea eax, [ebp-16]
push eax
lea eax, [ebp-12]
push eax
call CSYMBOLTYPE
add esp, 16
test eax, eax
jne .Lt_00DC
mov dword ptr [ebp-4], 0
jmp .Lt_00D1
.Lt_00DC:
.Lt_00DB:
mov eax, dword ptr [ebp-12]
and eax, 511
cmp eax, 18
jne .Lt_00DE
mov eax, dword ptr [ebp-16]
mov ebx, dword ptr [eax+8]
and ebx, 4194304
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_00E0
push 0
push 0
push 296
call ERRREPORT
add esp, 12
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-4], eax
jmp .Lt_00D1
jmp .Lt_00DF
.Lt_00E0:
mov eax, dword ptr [ebp-8]
push dword ptr [eax+8]
push dword ptr [ebp-16]
call SYMBGETUDTBASELEVEL
add esp, 8
test eax, eax
jne .Lt_00E1
push 0
push 0
push 297
call ERRREPORT
add esp, 12
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-4], eax
jmp .Lt_00D1
.Lt_00E1:
.Lt_00DF:
jmp .Lt_00DD
.Lt_00DE:
push 0
push 0
push 298
call ERRREPORT
add esp, 12
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-4], eax
jmp .Lt_00D1
.Lt_00DD:
push 0
push -2147483648
push 0
push 0
mov eax, dword ptr [ebp-16]
mov ebx, dword ptr [eax+124]
push dword ptr [ebx+148]
call ASTNEWVAR
add esp, 20
mov dword ptr [ebp-28], eax
push 1
push 0
push dword ptr [ebp-28]
push dword ptr [ebp-8]
push 51
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_00E3
push 0
push 0
push 20
call ERRREPORT
add esp, 12
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-8], eax
.Lt_00E3:
.Lt_00E2:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_00D1:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CISEXPRESSION, .-CISEXPRESSION
.balign 16

.globl CCATEXPRESSION
CCATEXPRESSION:
.type CCATEXPRESSION, @function
push ebp
mov ebp, esp
sub esp, 12
mov dword ptr [ebp-4], 0
.Lt_00E6:
call CADDEXPRESSION
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_00E9
mov dword ptr [ebp-4], 0
jmp .Lt_00E7
.Lt_00E9:
.Lt_00E8:
.Lt_00EA:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 38
je .Lt_00EE
jmp .Lt_00EB
.Lt_00EE:
.Lt_00ED:
push 0
push 1
call LEXGETLOOKAHEAD
add esp, 8
push eax
call HISASSIGNTOKEN
add esp, 4
test eax, eax
je .Lt_00F0
jmp .Lt_00EB
.Lt_00F0:
.Lt_00EF:
push 0
call LEXSKIPTOKEN
add esp, 4
call CADDEXPRESSION
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_00F2
push 0
push 0
push 9
call ERRREPORT
add esp, 12
jmp .Lt_00EB
.Lt_00F2:
.Lt_00F1:
push 1
push 0
push dword ptr [ebp-8]
push dword ptr [ebp-12]
push 44
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_00F4
push 0
push 0
push 20
call ERRREPORT
add esp, 12
push 0
call ASTNEWCONSTSTR
add esp, 4
mov dword ptr [ebp-12], eax
.Lt_00F4:
.Lt_00F3:
.Lt_00EC:
jmp .Lt_00EA
.Lt_00EB:
mov eax, dword ptr [ebp-12]
mov dword ptr [ebp-4], eax
.Lt_00E7:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size CCATEXPRESSION, .-CCATEXPRESSION
.balign 16

.globl CADDEXPRESSION
CADDEXPRESSION:
.type CADDEXPRESSION, @function
push ebp
mov ebp, esp
sub esp, 20
mov dword ptr [ebp-4], 0
.Lt_00F5:
call CSHIFTEXPRESSION
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 0
jne .Lt_00F8
mov dword ptr [ebp-4], 0
jmp .Lt_00F6
.Lt_00F8:
.Lt_00F7:
.Lt_00F9:
push 0
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 43
jne .Lt_00FE
.Lt_00FF:
mov dword ptr [ebp-8], 28
jmp .Lt_00FC
.Lt_00FE:
cmp dword ptr [ebp-20], 45
jne .Lt_0100
.Lt_0101:
mov dword ptr [ebp-8], 29
jmp .Lt_00FC
.Lt_0100:
jmp .Lt_00FA
.Lt_0102:
.Lt_00FC:
push 0
push 1
call LEXGETLOOKAHEAD
add esp, 8
push eax
call HISASSIGNTOKEN
add esp, 4
test eax, eax
je .Lt_0104
jmp .Lt_00FA
.Lt_0104:
.Lt_0103:
push 0
call LEXSKIPTOKEN
add esp, 4
call CSHIFTEXPRESSION
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_0106
push 0
push 0
push 9
call ERRREPORT
add esp, 12
jmp .Lt_00FA
.Lt_0106:
.Lt_0105:
push 7
push 0
push dword ptr [ebp-12]
push dword ptr [ebp-16]
push dword ptr [ebp-8]
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 0
jne .Lt_0108
push 0
push 0
push 20
call ERRREPORT
add esp, 12
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-16], eax
.Lt_0108:
.Lt_0107:
.Lt_00FB:
jmp .Lt_00F9
.Lt_00FA:
mov eax, dword ptr [ebp-16]
mov dword ptr [ebp-4], eax
.Lt_00F6:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size CADDEXPRESSION, .-CADDEXPRESSION
.balign 16

.globl CSHIFTEXPRESSION
CSHIFTEXPRESSION:
.type CSHIFTEXPRESSION, @function
push ebp
mov ebp, esp
sub esp, 20
mov dword ptr [ebp-4], 0
.Lt_0109:
call CMODEXPRESSION
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 0
jne .Lt_010C
mov dword ptr [ebp-4], 0
jmp .Lt_010A
.Lt_010C:
.Lt_010B:
.Lt_010D:
push 0
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 297
jne .Lt_0112
.Lt_0113:
mov dword ptr [ebp-8], 41
jmp .Lt_0110
.Lt_0112:
cmp dword ptr [ebp-20], 298
jne .Lt_0114
.Lt_0115:
mov dword ptr [ebp-8], 42
jmp .Lt_0110
.Lt_0114:
jmp .Lt_010E
.Lt_0116:
.Lt_0110:
push 0
push 1
call LEXGETLOOKAHEAD
add esp, 8
push eax
call HISASSIGNTOKEN
add esp, 4
test eax, eax
je .Lt_0118
jmp .Lt_010E
.Lt_0118:
.Lt_0117:
push 0
call LEXSKIPTOKEN
add esp, 4
call CMODEXPRESSION
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_011A
push 0
push 0
push 9
call ERRREPORT
add esp, 12
jmp .Lt_010E
.Lt_011A:
.Lt_0119:
push 1
push 0
push dword ptr [ebp-12]
push dword ptr [ebp-16]
push dword ptr [ebp-8]
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 0
jne .Lt_011C
push 0
push 0
push 20
call ERRREPORT
add esp, 12
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-16], eax
.Lt_011C:
.Lt_011B:
.Lt_010F:
jmp .Lt_010D
.Lt_010E:
mov eax, dword ptr [ebp-16]
mov dword ptr [ebp-4], eax
.Lt_010A:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size CSHIFTEXPRESSION, .-CSHIFTEXPRESSION
.balign 16

.globl CMODEXPRESSION
CMODEXPRESSION:
.type CMODEXPRESSION, @function
push ebp
mov ebp, esp
sub esp, 12
mov dword ptr [ebp-4], 0
.Lt_011D:
call CINTDIVEXPRESSION
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_0120
mov dword ptr [ebp-4], 0
jmp .Lt_011E
.Lt_0120:
.Lt_011F:
.Lt_0121:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 296
je .Lt_0125
jmp .Lt_0122
.Lt_0125:
.Lt_0124:
push 0
push 1
call LEXGETLOOKAHEAD
add esp, 8
push eax
call HISASSIGNTOKEN
add esp, 4
test eax, eax
je .Lt_0127
jmp .Lt_0122
.Lt_0127:
.Lt_0126:
push 0
call LEXSKIPTOKEN
add esp, 4
call CINTDIVEXPRESSION
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0129
push 0
push 0
push 9
call ERRREPORT
add esp, 12
jmp .Lt_0122
.Lt_0129:
.Lt_0128:
push 1
push 0
push dword ptr [ebp-8]
push dword ptr [ebp-12]
push 33
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_012B
push 0
push 0
push 20
call ERRREPORT
add esp, 12
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-12], eax
.Lt_012B:
.Lt_012A:
.Lt_0123:
jmp .Lt_0121
.Lt_0122:
mov eax, dword ptr [ebp-12]
mov dword ptr [ebp-4], eax
.Lt_011E:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size CMODEXPRESSION, .-CMODEXPRESSION
.balign 16

.globl CINTDIVEXPRESSION
CINTDIVEXPRESSION:
.type CINTDIVEXPRESSION, @function
push ebp
mov ebp, esp
sub esp, 12
mov dword ptr [ebp-4], 0
.Lt_012C:
call CMULTEXPRESSION
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_012F
mov dword ptr [ebp-4], 0
jmp .Lt_012D
.Lt_012F:
.Lt_012E:
.Lt_0130:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 92
je .Lt_0134
jmp .Lt_0131
.Lt_0134:
.Lt_0133:
push 0
push 1
call LEXGETLOOKAHEAD
add esp, 8
push eax
call HISASSIGNTOKEN
add esp, 4
test eax, eax
je .Lt_0136
jmp .Lt_0131
.Lt_0136:
.Lt_0135:
push 0
call LEXSKIPTOKEN
add esp, 4
call CMULTEXPRESSION
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0138
push 0
push 0
push 9
call ERRREPORT
add esp, 12
jmp .Lt_0131
.Lt_0138:
.Lt_0137:
push 1
push 0
push dword ptr [ebp-8]
push dword ptr [ebp-12]
push 32
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_013A
push 0
push 0
push 20
call ERRREPORT
add esp, 12
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-12], eax
.Lt_013A:
.Lt_0139:
.Lt_0132:
jmp .Lt_0130
.Lt_0131:
mov eax, dword ptr [ebp-12]
mov dword ptr [ebp-4], eax
.Lt_012D:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size CINTDIVEXPRESSION, .-CINTDIVEXPRESSION
.balign 16

.globl CMULTEXPRESSION
CMULTEXPRESSION:
.type CMULTEXPRESSION, @function
push ebp
mov ebp, esp
sub esp, 20
mov dword ptr [ebp-4], 0
.Lt_013B:
call CEXPEXPRESSION
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 0
jne .Lt_013E
mov dword ptr [ebp-4], 0
jmp .Lt_013C
.Lt_013E:
.Lt_013D:
.Lt_013F:
push 0
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 42
jne .Lt_0144
.Lt_0145:
mov dword ptr [ebp-8], 30
jmp .Lt_0142
.Lt_0144:
cmp dword ptr [ebp-20], 47
jne .Lt_0146
.Lt_0147:
mov dword ptr [ebp-8], 31
jmp .Lt_0142
.Lt_0146:
jmp .Lt_0140
.Lt_0148:
.Lt_0142:
push 0
push 1
call LEXGETLOOKAHEAD
add esp, 8
push eax
call HISASSIGNTOKEN
add esp, 4
test eax, eax
je .Lt_014A
jmp .Lt_0140
.Lt_014A:
.Lt_0149:
push 0
call LEXSKIPTOKEN
add esp, 4
call CEXPEXPRESSION
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_014C
push 0
push 0
push 9
call ERRREPORT
add esp, 12
jmp .Lt_0140
.Lt_014C:
.Lt_014B:
push 1
push 0
push dword ptr [ebp-12]
push dword ptr [ebp-16]
push dword ptr [ebp-8]
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 0
jne .Lt_014E
push 0
push 0
push 20
call ERRREPORT
add esp, 12
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-16], eax
.Lt_014E:
.Lt_014D:
.Lt_0141:
jmp .Lt_013F
.Lt_0140:
mov eax, dword ptr [ebp-16]
mov dword ptr [ebp-4], eax
.Lt_013C:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size CMULTEXPRESSION, .-CMULTEXPRESSION
.balign 16

.globl CEXPEXPRESSION
CEXPEXPRESSION:
.type CEXPEXPRESSION, @function
push ebp
mov ebp, esp
sub esp, 12
mov dword ptr [ebp-4], 0
.Lt_014F:
call CNEGNOTEXPRESSION
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_0152
mov dword ptr [ebp-4], 0
jmp .Lt_0150
.Lt_0152:
.Lt_0151:
.Lt_0153:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 94
je .Lt_0157
jmp .Lt_0154
.Lt_0157:
.Lt_0156:
push 0
push 1
call LEXGETLOOKAHEAD
add esp, 8
push eax
call HISASSIGNTOKEN
add esp, 4
test eax, eax
je .Lt_0159
jmp .Lt_0154
.Lt_0159:
.Lt_0158:
push 0
call LEXSKIPTOKEN
add esp, 4
call CNEGNOTEXPRESSION
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_015B
push 0
push 0
push 9
call ERRREPORT
add esp, 12
jmp .Lt_0154
.Lt_015B:
.Lt_015A:
push 1
push 0
push dword ptr [ebp-8]
push dword ptr [ebp-12]
push 43
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_015D
push 0
push 0
push 20
call ERRREPORT
add esp, 12
push 15
push dword ptr [Lt_015E+4]
push dword ptr [Lt_015E]
call ASTNEWCONSTF
add esp, 12
mov dword ptr [ebp-12], eax
.Lt_015D:
.Lt_015C:
.Lt_0155:
jmp .Lt_0153
.Lt_0154:
mov eax, dword ptr [ebp-12]
mov dword ptr [ebp-4], eax
.Lt_0150:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size CEXPEXPRESSION, .-CEXPEXPRESSION
.balign 16
fb_ctor__parserzexprzbinary:
.type fb_ctor__parserzexprzbinary, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__parserzexprzbinary, .-fb_ctor__parserzexprzbinary
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
	#fbc-1.01.0/src/compiler/parser-expr-binary.bas' compilation took 0.03549397177994251 secs

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
.balign 8
Lt_015E:	.quad	0x0000000000000000

.section .ctors, "aw", @progbits
.int fb_ctor__parserzexprzbinary
