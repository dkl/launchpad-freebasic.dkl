	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/parser-quirk-file.bas' compilation started at 14:16:37 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl CPRINTSTMT
CPRINTSTMT:
.type CPRINTSTMT, @function
push ebp
mov ebp, esp
sub esp, 44
push ebx
mov dword ptr [ebp-4], 0
.Lt_0060:
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
cmp dword ptr [ebp+8], 459
je .Lt_0064
.Lt_0065:
cmp dword ptr [ebp+8], 63
jne .Lt_0063
.Lt_0064:
mov dword ptr [ebp-44], 0
jmp .Lt_0062
.Lt_0063:
cmp dword ptr [ebp+8], 460
jne .Lt_0066
.Lt_0067:
mov eax, dword ptr [ENV+840]
and eax, 33554432
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_0069
push 0
push 145
push 33554432
call ERRREPORTNOTALLOWED
add esp, 12
jmp .Lt_0068
.Lt_0069:
mov dword ptr [ebp-44], -1
.Lt_0068:
jmp .Lt_0062
.Lt_0066:
jmp .Lt_0061
.Lt_006A:
.Lt_0062:
push 0
call LEXSKIPTOKEN
add esp, 4
cmp dword ptr [ebp-44], 0
je .Lt_006C
push 0
push 7
push 4294967295
push 4294967295
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-12], eax
jmp .Lt_006B
.Lt_006C:
push 35
call HMATCH
add esp, 4
test eax, eax
je .Lt_006E
push 7
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_0070
jmp .Lt_0061
.Lt_0070:
.Lt_006F:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
je .Lt_0072
push 0
push 0
push 16
call ERRREPORT
add esp, 12
jmp .Lt_0071
.Lt_0072:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0071:
jmp .Lt_006D
.Lt_006E:
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-12], eax
.Lt_006D:
.Lt_006B:
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax]
cmp ebx, 16
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_0074
lea ebx, [ebp-12]
push ebx
call ASTREMSIDEFX
add esp, 4
push eax
call ASTADD
add esp, 4
.Lt_0074:
.Lt_0073:
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-24], 0
.Lt_0075:
push 287
call HMATCH
add esp, 4
test eax, eax
je .Lt_0079
cmp dword ptr [ebp-8], 0
je .Lt_007B
push 0
push 0
push 3
call ERRREPORT
add esp, 12
push dword ptr [ebp-12]
call ASTCLONETREE
add esp, 4
mov dword ptr [ebp-16], eax
push dword ptr [ebp-44]
push dword ptr [ebp-16]
call RTLPRINTUSINGEND
add esp, 8
test eax, eax
jne .Lt_007D
jmp .Lt_0061
.Lt_007D:
.Lt_007C:
.Lt_007B:
.Lt_007A:
push 16
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_007F
jmp .Lt_0061
.Lt_007F:
.Lt_007E:
push 59
call HMATCH
add esp, 4
test eax, eax
jne .Lt_0081
push 0
push 0
push 46
call ERRREPORT
add esp, 12
.Lt_0081:
.Lt_0080:
push dword ptr [ebp-44]
push dword ptr [ebp-8]
call RTLPRINTUSINGINIT
add esp, 8
test eax, eax
jne .Lt_0083
jmp .Lt_0061
.Lt_0083:
.Lt_0082:
.Lt_0079:
.Lt_0078:
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
push 482
call HMATCH
add esp, 4
test eax, eax
je .Lt_0085
mov dword ptr [ebp-40], -1
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
je .Lt_0087
push 0
push 0
push 6
call ERRREPORT
add esp, 12
jmp .Lt_0086
.Lt_0087:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0086:
push 7
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 0
jne .Lt_0089
jmp .Lt_0061
.Lt_0089:
.Lt_0088:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_008B
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
jmp .Lt_008A
.Lt_008B:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_008A:
jmp .Lt_0084
.Lt_0085:
push 483
call HMATCH
add esp, 4
test eax, eax
je .Lt_008C
mov dword ptr [ebp-36], -1
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
je .Lt_008E
push 0
push 0
push 6
call ERRREPORT
add esp, 12
jmp .Lt_008D
.Lt_008E:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_008D:
push 7
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 0
jne .Lt_0090
jmp .Lt_0061
.Lt_0090:
.Lt_008F:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_0092
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
jmp .Lt_0091
.Lt_0092:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0091:
jmp .Lt_0084
.Lt_008C:
call CEXPRESSION
mov dword ptr [ebp-20], eax
.Lt_0084:
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 44
call HMATCH
add esp, 4
test eax, eax
je .Lt_0094
cmp dword ptr [ebp-8], 0
je .Lt_0096
push 0
push 0
push 46
call ERRREPORT
add esp, 12
.Lt_0096:
.Lt_0095:
mov dword ptr [ebp-32], -1
jmp .Lt_0093
.Lt_0094:
push 59
call HMATCH
add esp, 4
test eax, eax
je .Lt_0097
mov dword ptr [ebp-28], -1
.Lt_0097:
.Lt_0093:
mov eax, dword ptr [ebp-36]
or eax, dword ptr [ebp-40]
mov ebx, dword ptr [ebp-28]
test ebx, ebx
sete bl
shr ebx, 1
sbb ebx, ebx
and eax, ebx
je .Lt_0099
push 0
push 0
push 46
call ERRREPORT
add esp, 12
.Lt_0099:
.Lt_0098:
mov ebx, dword ptr [ebp-32]
test ebx, ebx
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp-28]
test eax, eax
sete al
shr eax, 1
sbb eax, eax
and ebx, eax
cmp dword ptr [ebp-20], 0
sete al
shr eax, 1
sbb eax, eax
and ebx, eax
je .Lt_009B
jmp .Lt_0076
.Lt_009B:
.Lt_009A:
mov eax, dword ptr [ebp-36]
or eax, dword ptr [ebp-40]
je .Lt_009D
push dword ptr [ebp-12]
call ASTCLONETREE
add esp, 4
mov dword ptr [ebp-16], eax
push dword ptr [ebp-44]
push dword ptr [ebp-36]
push dword ptr [ebp-20]
push dword ptr [ebp-16]
call RTLPRINTSPCTAB
add esp, 16
test eax, eax
jne .Lt_009F
jmp .Lt_0061
.Lt_009F:
.Lt_009E:
jmp .Lt_009C
.Lt_009D:
cmp dword ptr [ebp-8], 0
jne .Lt_00A1
push dword ptr [ebp-12]
call ASTCLONETREE
add esp, 4
mov dword ptr [ebp-16], eax
push dword ptr [ebp-44]
push dword ptr [ebp-20]
push dword ptr [ebp-28]
push dword ptr [ebp-32]
push dword ptr [ebp-16]
call RTLPRINT
add esp, 20
test eax, eax
jne .Lt_00A3
push 0
push 0
push 24
call ERRREPORT
add esp, 12
.Lt_00A3:
.Lt_00A2:
jmp .Lt_00A0
.Lt_00A1:
push dword ptr [ebp-12]
call ASTCLONETREE
add esp, 4
mov dword ptr [ebp-16], eax
push dword ptr [ebp-44]
push dword ptr [ebp-28]
push dword ptr [ebp-32]
push dword ptr [ebp-20]
push dword ptr [ebp-16]
call RTLPRINTUSING
add esp, 20
test eax, eax
jne .Lt_00A5
push 0
push 0
push 24
call ERRREPORT
add esp, 12
.Lt_00A5:
.Lt_00A4:
.Lt_00A0:
.Lt_009C:
inc dword ptr [ebp-24]
.Lt_0077:
mov eax, dword ptr [ebp-28]
or eax, dword ptr [ebp-32]
jne .Lt_0075
.Lt_0076:
cmp dword ptr [ebp-8], 0
jne .Lt_00A7
cmp dword ptr [ebp-24], 0
jne .Lt_00A9
push dword ptr [ebp-12]
call ASTCLONETREE
add esp, 4
mov dword ptr [ebp-16], eax
push dword ptr [ebp-44]
push 0
push 0
push 0
push dword ptr [ebp-16]
call RTLPRINT
add esp, 20
test eax, eax
jne .Lt_00AB
jmp .Lt_0061
.Lt_00AB:
.Lt_00AA:
.Lt_00A9:
.Lt_00A8:
jmp .Lt_00A6
.Lt_00A7:
push dword ptr [ebp-12]
call ASTCLONETREE
add esp, 4
mov dword ptr [ebp-16], eax
push dword ptr [ebp-44]
push dword ptr [ebp-16]
call RTLPRINTUSINGEND
add esp, 8
test eax, eax
jne .Lt_00AD
jmp .Lt_0061
.Lt_00AD:
.Lt_00AC:
.Lt_00A6:
push dword ptr [ebp-12]
call ASTDELTREE
add esp, 4
mov dword ptr [ebp-4], -1
.Lt_0061:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CPRINTSTMT, .-CPRINTSTMT
.balign 16

.globl CWRITESTMT
CWRITESTMT:
.type CWRITESTMT, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
mov dword ptr [ebp-4], 0
.Lt_00B4:
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-4], 0
push 0
call LEXSKIPTOKEN
add esp, 4
push 35
call HMATCH
add esp, 4
test eax, eax
je .Lt_00B7
push 7
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_00B9
jmp .Lt_00B5
.Lt_00B9:
.Lt_00B8:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
je .Lt_00BB
push 0
push 0
push 16
call ERRREPORT
add esp, 12
jmp .Lt_00BA
.Lt_00BB:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_00BA:
jmp .Lt_00B6
.Lt_00B7:
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-8], eax
.Lt_00B6:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax]
cmp ebx, 16
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_00BD
lea ebx, [ebp-8]
push ebx
call ASTREMSIDEFX
add esp, 4
push eax
call ASTADD
add esp, 4
.Lt_00BD:
.Lt_00BC:
mov dword ptr [ebp-20], 0
.Lt_00BE:
call CEXPRESSION
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 0
jne .Lt_00C2
mov dword ptr [ebp-16], 0
.Lt_00C2:
.Lt_00C1:
mov dword ptr [ebp-24], 0
push 44
call HMATCH
add esp, 4
test eax, eax
je .Lt_00C4
mov dword ptr [ebp-24], -1
.Lt_00C4:
.Lt_00C3:
push dword ptr [ebp-8]
call ASTCLONETREE
add esp, 4
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp-24]
test eax, eax
sete al
shr eax, 1
sbb eax, eax
cmp dword ptr [ebp-16], 0
sete bl
shr ebx, 1
sbb ebx, ebx
and eax, ebx
je .Lt_00C6
cmp dword ptr [ebp-20], 0
jne .Lt_00C8
push 0
push 0
push dword ptr [ebp-12]
call RTLWRITE
add esp, 12
.Lt_00C8:
.Lt_00C7:
jmp .Lt_00BF
.Lt_00C6:
.Lt_00C5:
push dword ptr [ebp-16]
push dword ptr [ebp-24]
push dword ptr [ebp-12]
call RTLWRITE
add esp, 12
test eax, eax
jne .Lt_00CA
push 0
push 0
push 24
call ERRREPORT
add esp, 12
.Lt_00CA:
.Lt_00C9:
inc dword ptr [ebp-20]
.Lt_00C0:
cmp dword ptr [ebp-24], 0
jne .Lt_00BE
.Lt_00BF:
push dword ptr [ebp-8]
call ASTDELTREE
add esp, 4
mov dword ptr [ebp-4], -1
.Lt_00B5:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CWRITESTMT, .-CWRITESTMT
.balign 16

.globl CLINEINPUTSTMT
CLINEINPUTSTMT:
.type CLINEINPUTSTMT, @function
push ebp
mov ebp, esp
sub esp, 32
push ebx
mov dword ptr [ebp-4], 0
.Lt_00CE:
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-4], 0
push 0
push 1
call LEXGETLOOKAHEAD
add esp, 8
cmp eax, 474
je .Lt_00D1
jmp .Lt_00CF
.Lt_00D1:
.Lt_00D0:
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXSKIPTOKEN
add esp, 4
push 59
call HMATCH
add esp, 4
test eax, eax
sete al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-20], eax
mov dword ptr [ebp-16], 0
push 35
call HMATCH
add esp, 4
test eax, eax
je .Lt_00D3
mov dword ptr [ebp-16], -1
.Lt_00D3:
.Lt_00D2:
call CEXPRESSION
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_00D5
cmp dword ptr [ebp-16], 0
je .Lt_00D7
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
mov dword ptr [ebp-8], eax
jmp .Lt_00D6
.Lt_00D7:
mov dword ptr [ebp-8], 0
.Lt_00D6:
.Lt_00D5:
.Lt_00D4:
mov dword ptr [ebp-24], -1
push 44
call HMATCH
add esp, 4
test eax, eax
jne .Lt_00D9
push 59
call HMATCH
add esp, 4
test eax, eax
jne .Lt_00DB
mov dword ptr [ebp-24], 0
cmp dword ptr [ebp-8], 0
sete al
shr eax, 1
sbb eax, eax
or eax, dword ptr [ebp-16]
je .Lt_00DD
push 0
push 0
push 16
call ERRREPORT
add esp, 12
.Lt_00DD:
.Lt_00DC:
jmp .Lt_00DA
.Lt_00DB:
mov dword ptr [ebp-28], -1
.Lt_00DA:
jmp .Lt_00D8
.Lt_00D9:
mov dword ptr [ebp-28], 0
.Lt_00D8:
push 0
call CVARORDEREF
add esp, 4
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_00DF
cmp dword ptr [ebp-8], 0
sete al
shr eax, 1
sbb eax, eax
or eax, dword ptr [ebp-16]
je .Lt_00E1
push 0
push 0
push 14
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
mov dword ptr [ebp-4], -1
jmp .Lt_00CF
jmp .Lt_00E0
.Lt_00E1:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-12], eax
mov dword ptr [ebp-8], 0
.Lt_00E0:
jmp .Lt_00DE
.Lt_00DF:
cmp dword ptr [ebp-24], 0
jne .Lt_00E3
push 0
push 0
push 16
call ERRREPORT
add esp, 12
.Lt_00E3:
.Lt_00E2:
.Lt_00DE:
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax+4]
and ebx, 512
test ebx, ebx
je .Lt_00E5
push 0
push 0
push 118
call ERRREPORT
add esp, 12
.Lt_00E5:
.Lt_00E4:
mov ebx, dword ptr [ebp-12]
mov eax, dword ptr [ebx+4]
and eax, 511
mov dword ptr [ebp-32], eax
cmp dword ptr [ebp-32], 16
je .Lt_00E9
.Lt_00EA:
cmp dword ptr [ebp-32], 17
je .Lt_00E9
.Lt_00EB:
cmp dword ptr [ebp-32], 3
jne .Lt_00E8
.Lt_00E9:
push dword ptr [ebp-20]
push dword ptr [ebp-28]
push dword ptr [ebp-12]
push dword ptr [ebp-8]
push dword ptr [ebp-16]
call RTLFILELINEINPUT
add esp, 20
mov dword ptr [ebp-4], eax
jmp .Lt_00E6
.Lt_00E8:
cmp dword ptr [ebp-32], 6
jne .Lt_00EC
.Lt_00ED:
push dword ptr [ebp-20]
push dword ptr [ebp-28]
push dword ptr [ebp-12]
push dword ptr [ebp-8]
push dword ptr [ebp-16]
call RTLFILELINEINPUTWSTR
add esp, 20
mov dword ptr [ebp-4], eax
jmp .Lt_00E6
.Lt_00EC:
push dword ptr [ebp-12]
call ASTDELTREE
add esp, 4
push 0
push 0
push 24
call ERRREPORT
add esp, 12
mov dword ptr [ebp-4], -1
.Lt_00EE:
.Lt_00E6:
.Lt_00CF:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CLINEINPUTSTMT, .-CLINEINPUTSTMT
.balign 16

.globl CINPUTSTMT
CINPUTSTMT:
.type CINPUTSTMT, @function
push ebp
mov ebp, esp
sub esp, 28
push ebx
mov dword ptr [ebp-4], 0
.Lt_00F2:
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-4], 0
push 0
call LEXSKIPTOKEN
add esp, 4
push 59
call HMATCH
add esp, 4
test eax, eax
sete al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-24], eax
mov dword ptr [ebp-28], 0
push 35
call HMATCH
add esp, 4
test eax, eax
je .Lt_00F5
mov dword ptr [ebp-20], -1
push 7
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_00F7
jmp .Lt_00F3
.Lt_00F7:
.Lt_00F6:
jmp .Lt_00F4
.Lt_00F5:
mov dword ptr [ebp-20], 0
push 0
call LEXGETCLASS
add esp, 4
cmp eax, 4
jne .Lt_00F9
push 0
push -2147483648
push 0
push 0
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [eax+16532]
push dword ptr [ebx+4112]
call LEXGETTEXT
push eax
call SYMBALLOCSTRCONST
add esp, 8
push eax
call ASTNEWVAR
add esp, 20
mov dword ptr [ebp-8], eax
push 0
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_00F8
.Lt_00F9:
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-28], -1
.Lt_00F8:
.Lt_00F4:
cmp dword ptr [ebp-8], 0
setne al
shr eax, 1
sbb eax, eax
or eax, dword ptr [ebp-20]
je .Lt_00FB
push 44
call HMATCH
add esp, 4
test eax, eax
jne .Lt_00FD
push 59
call HMATCH
add esp, 4
test eax, eax
jne .Lt_00FF
push 0
push 0
push 16
call ERRREPORT
add esp, 12
jmp .Lt_00FE
.Lt_00FF:
mov dword ptr [ebp-28], -1
.Lt_00FE:
.Lt_00FD:
.Lt_00FC:
.Lt_00FB:
.Lt_00FA:
push dword ptr [ebp-24]
push dword ptr [ebp-28]
push dword ptr [ebp-8]
push dword ptr [ebp-20]
call RTLFILEINPUT
add esp, 16
test eax, eax
jne .Lt_0101
jmp .Lt_00F3
.Lt_0101:
.Lt_0100:
.Lt_0102:
push 0
call CVARORDEREF
add esp, 4
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_0106
push 0
push 0
push 14
call ERRREPORT
add esp, 12
mov dword ptr [ebp-12], 0
push 0
push 0
push 0
push 44
call HSKIPUNTIL
add esp, 16
.Lt_0106:
.Lt_0105:
push 44
call HMATCH
add esp, 4
test eax, eax
je .Lt_0108
mov dword ptr [ebp-16], 0
jmp .Lt_0107
.Lt_0108:
mov dword ptr [ebp-16], -1
.Lt_0107:
cmp dword ptr [ebp-12], 0
je .Lt_010A
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax+4]
and ebx, 512
test ebx, ebx
je .Lt_010C
push 0
push 0
push 118
call ERRREPORT
add esp, 12
.Lt_010C:
.Lt_010B:
push dword ptr [ebp-12]
call RTLFILEINPUTGET
add esp, 4
test eax, eax
jne .Lt_010E
jmp .Lt_00F3
.Lt_010E:
.Lt_010D:
.Lt_010A:
.Lt_0109:
.Lt_0104:
cmp dword ptr [ebp-16], 0
je .Lt_0102
.Lt_0103:
mov dword ptr [ebp-4], -1
.Lt_00F3:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CINPUTSTMT, .-CINPUTSTMT
.balign 16

.globl CFILESTMT
CFILESTMT:
.type CFILESTMT, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
mov dword ptr [ebp-4], 0
.Lt_026A:
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-24], eax
jmp .Lt_026D
.Lt_026F:
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call HFILEOPEN
add esp, 4
test eax, eax
setne bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-4], ebx
jmp .Lt_026C
.Lt_0270:
push 0
call HFILECLOSE
add esp, 4
test eax, eax
setne bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-4], ebx
jmp .Lt_026C
.Lt_0271:
push 0
call LEXSKIPTOKEN
add esp, 4
push 35
call HMATCH
add esp, 4
push 7
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0273
jmp .Lt_026B
.Lt_0273:
.Lt_0272:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
je .Lt_0275
push 0
push 0
push 16
call ERRREPORT
add esp, 12
jmp .Lt_0274
.Lt_0275:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0274:
push 7
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_0277
jmp .Lt_026B
.Lt_0277:
.Lt_0276:
push dword ptr [ebp-12]
push dword ptr [ebp-8]
call RTLFILESEEK
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_026C
.Lt_0278:
push 0
push 1
call LEXGETLOOKAHEAD
add esp, 8
cmp eax, 35
je .Lt_027A
jmp .Lt_026B
.Lt_027A:
.Lt_0279:
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call HFILEPUT
add esp, 4
test eax, eax
setne bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-4], ebx
jmp .Lt_026C
.Lt_027B:
push 0
push 1
call LEXGETLOOKAHEAD
add esp, 8
cmp eax, 35
je .Lt_027D
jmp .Lt_026B
.Lt_027D:
.Lt_027C:
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call HFILEGET
add esp, 4
test eax, eax
setne bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-4], ebx
jmp .Lt_026C
.Lt_027E:
cmp dword ptr [ebp+8], 473
jne .Lt_0280
mov dword ptr [ebp-20], -1
jmp .Lt_027F
.Lt_0280:
mov dword ptr [ebp-20], 0
.Lt_027F:
push 0
call LEXSKIPTOKEN
add esp, 4
push 35
call HMATCH
add esp, 4
push 7
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0282
jmp .Lt_026B
.Lt_0282:
.Lt_0281:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
je .Lt_0284
push 0
push 0
push 16
call ERRREPORT
add esp, 12
jmp .Lt_0283
.Lt_0284:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0283:
push 7
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_0286
jmp .Lt_026B
.Lt_0286:
.Lt_0285:
push 284
call HMATCH
add esp, 4
test eax, eax
je .Lt_0288
push 7
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 0
jne .Lt_028A
jmp .Lt_026B
.Lt_028A:
.Lt_0289:
jmp .Lt_0287
.Lt_0288:
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-16], eax
.Lt_0287:
push dword ptr [ebp-16]
push dword ptr [ebp-12]
push dword ptr [ebp-8]
push dword ptr [ebp-20]
call RTLFILELOCK
add esp, 16
mov dword ptr [ebp-4], eax
jmp .Lt_026C
.Lt_028B:
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call HFILERENAME
add esp, 4
test eax, eax
setne bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-4], ebx
jmp .Lt_026C
.Lt_026D:
mov ebx, dword ptr [ebp-24]
add ebx, 4294966830
cmp ebx, 20
ja .Lt_026C
mov ebx, dword ptr [ebp-24]
jmp dword ptr [.LT_028C+ebx*4-1864]
.LT_028C:
.int .Lt_026F
.int .Lt_0270
.int .Lt_0271
.int .Lt_0278
.int .Lt_027B
.int .Lt_026C
.int .Lt_026C
.int .Lt_027E
.int .Lt_026C
.int .Lt_026C
.int .Lt_026C
.int .Lt_026C
.int .Lt_026C
.int .Lt_026C
.int .Lt_026C
.int .Lt_028B
.int .Lt_026C
.int .Lt_026C
.int .Lt_026C
.int .Lt_026C
.int .Lt_027E
.Lt_026C:
.Lt_026B:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CFILESTMT, .-CFILESTMT
.balign 16

.globl CFILEFUNCT
CFILEFUNCT:
.type CFILEFUNCT, @function
push ebp
mov ebp, esp
sub esp, 16
mov dword ptr [ebp-4], 0
.Lt_0292:
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-16], eax
jmp .Lt_0295
.Lt_0297:
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
je .Lt_0299
push 0
push 0
push 6
call ERRREPORT
add esp, 12
jmp .Lt_0298
.Lt_0299:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0298:
push 7
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_029B
jmp .Lt_0293
.Lt_029B:
.Lt_029A:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_029D
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
jmp .Lt_029C
.Lt_029D:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_029C:
push dword ptr [ebp-8]
call RTLFILETELL
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_0294
.Lt_029E:
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
je .Lt_02A0
push 0
push 0
push 6
call ERRREPORT
add esp, 12
jmp .Lt_029F
.Lt_02A0:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_029F:
push 7
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_02A2
jmp .Lt_0293
.Lt_02A2:
.Lt_02A1:
push 44
call HMATCH
add esp, 4
test eax, eax
je .Lt_02A4
push 35
call HMATCH
add esp, 4
push 7
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_02A6
jmp .Lt_0293
.Lt_02A6:
.Lt_02A5:
jmp .Lt_02A3
.Lt_02A4:
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-8], eax
.Lt_02A3:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_02A8
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
jmp .Lt_02A7
.Lt_02A8:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_02A7:
push dword ptr [ebp+8]
push dword ptr [ebp-8]
push dword ptr [ebp-12]
call RTLFILESTRINPUT
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_0294
.Lt_02A9:
push 0
call LEXSKIPTOKEN
add esp, 4
push -1
call HFILEOPEN
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_0294
.Lt_02AA:
push -1
call HFILECLOSE
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_0294
.Lt_02AB:
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
je .Lt_02AD
push 0
push 0
push 6
call ERRREPORT
add esp, 12
jmp .Lt_02AC
.Lt_02AD:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_02AC:
push -1
call HFILEPUT
add esp, 4
mov dword ptr [ebp-4], eax
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_02AF
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
jmp .Lt_02AE
.Lt_02AF:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_02AE:
jmp .Lt_0294
.Lt_02B0:
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
je .Lt_02B2
push 0
push 0
push 6
call ERRREPORT
add esp, 12
jmp .Lt_02B1
.Lt_02B2:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_02B1:
push -1
call HFILEGET
add esp, 4
mov dword ptr [ebp-4], eax
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_02B4
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
jmp .Lt_02B3
.Lt_02B4:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_02B3:
jmp .Lt_0294
.Lt_02B5:
push 0
call LEXSKIPTOKEN
add esp, 4
push -1
call HFILERENAME
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_0294
.Lt_0295:
mov eax, dword ptr [ebp-16]
add eax, 4294966830
cmp eax, 15
ja .Lt_0294
mov eax, dword ptr [ebp-16]
jmp dword ptr [.LT_02B6+eax*4-1864]
.LT_02B6:
.int .Lt_02A9
.int .Lt_02AA
.int .Lt_0297
.int .Lt_02AB
.int .Lt_02B0
.int .Lt_0294
.int .Lt_0294
.int .Lt_0294
.int .Lt_029E
.int .Lt_029E
.int .Lt_0294
.int .Lt_0294
.int .Lt_0294
.int .Lt_0294
.int .Lt_0294
.int .Lt_02B5
.Lt_0294:
.Lt_0293:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size CFILEFUNCT, .-CFILEFUNCT
.balign 16
fb_ctor__parserzquirkzfile:
.type fb_ctor__parserzquirkzfile, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__parserzquirkzfile, .-fb_ctor__parserzquirkzfile
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
HFILECLOSE:
.type HFILECLOSE, @function
push ebp
mov ebp, esp
sub esp, 16
mov dword ptr [ebp-4], 0
.Lt_0111:
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-4], 0
push 0
call LEXSKIPTOKEN
add esp, 4
cmp dword ptr [ebp+8], 0
je .Lt_0114
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
je .Lt_0116
push 0
push 0
push 6
call ERRREPORT
add esp, 12
jmp .Lt_0115
.Lt_0116:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0115:
.Lt_0114:
.Lt_0113:
mov dword ptr [ebp-8], 0
.Lt_0117:
push 35
call HMATCH
add esp, 4
call CEXPRESSION
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_011B
cmp dword ptr [ebp-8], 0
jne .Lt_011D
jmp .Lt_011C
.Lt_011D:
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
mov dword ptr [ebp-12], eax
.Lt_011C:
.Lt_011B:
.Lt_011A:
push dword ptr [ebp+8]
push dword ptr [ebp-12]
call RTLFILECLOSE
add esp, 8
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 0
jne .Lt_011F
jmp .Lt_0112
.Lt_011F:
.Lt_011E:
cmp dword ptr [ebp+8], 0
je .Lt_0121
jmp .Lt_0118
.Lt_0121:
.Lt_0120:
inc dword ptr [ebp-8]
.Lt_0119:
push 44
call HMATCH
add esp, 4
test eax, eax
jne .Lt_0117
.Lt_0118:
cmp dword ptr [ebp+8], 0
je .Lt_0123
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_0125
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
jmp .Lt_0124
.Lt_0125:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0124:
.Lt_0123:
.Lt_0122:
mov eax, dword ptr [ebp-16]
mov dword ptr [ebp-4], eax
.Lt_0112:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size HFILECLOSE, .-HFILECLOSE
.balign 16
HFILEPUT:
.type HFILEPUT, @function
push ebp
mov ebp, esp
sub esp, 32
push ebx
mov dword ptr [ebp-4], 0
.Lt_0126:
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-4], 0
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 35
jne .Lt_0129
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0129:
.Lt_0128:
push 7
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_012B
jmp .Lt_0127
.Lt_012B:
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
call CEXPRESSION
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_012F
mov dword ptr [ebp-12], 0
.Lt_012F:
.Lt_012E:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
je .Lt_0131
push 0
push 0
push 16
call ERRREPORT
add esp, 12
jmp .Lt_0130
.Lt_0131:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0130:
push 7
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 0
jne .Lt_0133
jmp .Lt_0127
.Lt_0133:
.Lt_0132:
mov eax, dword ptr [ebp-16]
mov ebx, dword ptr [eax]
cmp ebx, 16
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp-16]
mov ecx, dword ptr [eax]
cmp ecx, 23
sete cl
shr ecx, 1
sbb ecx, ecx
or ebx, ecx
je .Lt_0135
push dword ptr [ebp-16]
call ASTDELTREE
add esp, 4
push 0
push -1
push 14
call ERRREPORT
add esp, 12
cmp dword ptr [ebp+8], 0
je .Lt_0137
push 0
push 0
push 0
push 41
call HSKIPUNTIL
add esp, 16
jmp .Lt_0136
.Lt_0137:
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
.Lt_0136:
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-4], eax
jmp .Lt_0127
.Lt_0135:
.Lt_0134:
mov dword ptr [ebp-24], 0
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
jne .Lt_0139
push 0
push 1
call LEXGETLOOKAHEAD
add esp, 8
cmp eax, 41
jne .Lt_013B
mov eax, dword ptr [ebp-16]
mov ecx, dword ptr [eax+12]
mov dword ptr [ebp-28], ecx
cmp dword ptr [ebp-28], 0
je .Lt_013D
push dword ptr [ebp-28]
call SYMBISARRAY
add esp, 4
mov dword ptr [ebp-24], eax
cmp dword ptr [ebp-24], 0
je .Lt_013F
mov eax, dword ptr [ebp-28]
mov ecx, dword ptr [eax+24]
and ecx, 511
cmp ecx, 16
jne .Lt_0141
push dword ptr [ebp-16]
call ASTDELTREE
add esp, 4
push 0
push -1
push 24
call ERRREPORT
add esp, 12
cmp dword ptr [ebp+8], 0
je .Lt_0143
push 0
push 0
push 0
push 41
call HSKIPUNTIL
add esp, 16
jmp .Lt_0142
.Lt_0143:
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
.Lt_0142:
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-4], eax
jmp .Lt_0127
.Lt_0141:
.Lt_0140:
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_013F:
.Lt_013E:
.Lt_013D:
.Lt_013C:
.Lt_013B:
.Lt_013A:
.Lt_0139:
.Lt_0138:
push 44
call HMATCH
add esp, 4
test eax, eax
je .Lt_0145
cmp dword ptr [ebp-24], 0
je .Lt_0147
push 0
push 0
push 276
call ERRREPORT
add esp, 12
call CEXPRESSION
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 0
je .Lt_0149
push dword ptr [ebp-20]
call ASTDELTREE
add esp, 4
mov dword ptr [ebp-20], 0
.Lt_0149:
.Lt_0148:
jmp .Lt_0146
.Lt_0147:
mov eax, dword ptr [ebp-16]
mov ecx, dword ptr [eax+4]
and ecx, 511
mov dword ptr [ebp-32], ecx
cmp dword ptr [ebp-32], 16
je .Lt_014D
.Lt_014E:
cmp dword ptr [ebp-32], 17
jne .Lt_014C
.Lt_014D:
push 0
push 0
push 276
call ERRREPORT
add esp, 12
call CEXPRESSION
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 0
je .Lt_0150
push dword ptr [ebp-20]
call ASTDELTREE
add esp, 4
mov dword ptr [ebp-20], 0
.Lt_0150:
.Lt_014F:
jmp .Lt_014A
.Lt_014C:
call CEXPRESSION
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 0
jne .Lt_0153
push 0
push 0
push 9
call ERRREPORT
add esp, 12
.Lt_0153:
.Lt_0152:
.Lt_0151:
.Lt_014A:
.Lt_0146:
cmp dword ptr [ebp-20], 0
je .Lt_0155
mov eax, dword ptr [ebp-20]
mov ecx, dword ptr [eax+4]
and ecx, 511
and ecx, 480
test ecx, ecx
je .Lt_0157
push 1
push 0
push 2
call ERRREPORTWARN
add esp, 12
.Lt_0157:
.Lt_0156:
mov ecx, dword ptr [ebp-20]
mov eax, dword ptr [ecx+4]
and eax, 511
cmp eax, 7
je .Lt_0159
push 0
push 0
push dword ptr [ebp-20]
push 0
push 7
call ASTNEWCONV
add esp, 20
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 0
jne .Lt_015B
push 0
push -1
push 17
call ERRREPORT
add esp, 12
.Lt_015B:
.Lt_015A:
.Lt_0159:
.Lt_0158:
.Lt_0155:
.Lt_0154:
jmp .Lt_0144
.Lt_0145:
mov dword ptr [ebp-20], 0
.Lt_0144:
cmp dword ptr [ebp-24], 0
jne .Lt_015D
push dword ptr [ebp+8]
push dword ptr [ebp-20]
push dword ptr [ebp-16]
push dword ptr [ebp-12]
push dword ptr [ebp-8]
call RTLFILEPUT
add esp, 20
mov dword ptr [ebp-4], eax
jmp .Lt_015C
.Lt_015D:
push dword ptr [ebp+8]
push dword ptr [ebp-16]
push dword ptr [ebp-12]
push dword ptr [ebp-8]
call RTLFILEPUTARRAY
add esp, 16
mov dword ptr [ebp-4], eax
.Lt_015C:
.Lt_0127:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HFILEPUT, .-HFILEPUT
.balign 16
HFILEGET:
.type HFILEGET, @function
push ebp
mov ebp, esp
sub esp, 48
push ebx
mov dword ptr [ebp-4], 0
.Lt_015E:
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
cmp eax, 35
jne .Lt_0161
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0161:
.Lt_0160:
push 7
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0163
jmp .Lt_015F
.Lt_0163:
.Lt_0162:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
je .Lt_0165
push 0
push 0
push 16
call ERRREPORT
add esp, 12
jmp .Lt_0164
.Lt_0165:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0164:
call CEXPRESSION
mov dword ptr [ebp-12], eax
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
je .Lt_0167
push 0
push 0
push 16
call ERRREPORT
add esp, 12
jmp .Lt_0166
.Lt_0167:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0166:
push 0
call CVARORDEREF
add esp, 4
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 0
jne .Lt_0169
push 0
push 0
push 14
call ERRREPORT
add esp, 12
cmp dword ptr [ebp+8], 0
je .Lt_016B
push 0
push 0
push 0
push 41
call HSKIPUNTIL
add esp, 16
jmp .Lt_016A
.Lt_016B:
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
.Lt_016A:
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-4], eax
jmp .Lt_015F
.Lt_0169:
.Lt_0168:
mov dword ptr [ebp-28], 0
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
jne .Lt_016D
push 0
push 1
call LEXGETLOOKAHEAD
add esp, 8
cmp eax, 41
jne .Lt_016F
mov eax, dword ptr [ebp-16]
mov ebx, dword ptr [eax+12]
mov dword ptr [ebp-32], ebx
cmp dword ptr [ebp-32], 0
je .Lt_0171
push dword ptr [ebp-32]
call SYMBISARRAY
add esp, 4
mov dword ptr [ebp-28], eax
cmp dword ptr [ebp-28], 0
je .Lt_0173
mov eax, dword ptr [ebp-32]
mov ebx, dword ptr [eax+24]
and ebx, 511
cmp ebx, 16
jne .Lt_0175
push 0
push -1
push 24
call ERRREPORT
add esp, 12
cmp dword ptr [ebp+8], 0
je .Lt_0177
push 0
push 0
push 0
push 41
call HSKIPUNTIL
add esp, 16
jmp .Lt_0176
.Lt_0177:
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
.Lt_0176:
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-4], eax
jmp .Lt_015F
.Lt_0175:
.Lt_0174:
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0173:
.Lt_0172:
.Lt_0171:
.Lt_0170:
.Lt_016F:
.Lt_016E:
.Lt_016D:
.Lt_016C:
push 44
call HMATCH
add esp, 4
test eax, eax
je .Lt_0179
call CEXPRESSION
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-28], 0
je .Lt_017B
cmp dword ptr [ebp-20], 0
je .Lt_017D
push 0
push 0
push 276
call ERRREPORT
add esp, 12
push dword ptr [ebp-20]
call ASTDELTREE
add esp, 4
mov dword ptr [ebp-20], 0
.Lt_017D:
.Lt_017C:
jmp .Lt_017A
.Lt_017B:
cmp dword ptr [ebp-20], 0
je .Lt_017F
mov eax, dword ptr [ebp-16]
mov ebx, dword ptr [eax+4]
and ebx, 511
mov dword ptr [ebp-36], ebx
cmp dword ptr [ebp-36], 16
je .Lt_0183
.Lt_0184:
cmp dword ptr [ebp-36], 17
jne .Lt_0182
.Lt_0183:
push 0
push 0
push 276
call ERRREPORT
add esp, 12
push dword ptr [ebp-20]
call ASTDELTREE
add esp, 4
mov dword ptr [ebp-20], 0
jmp .Lt_0180
.Lt_0182:
mov ebx, dword ptr [ebp-20]
mov eax, dword ptr [ebx+4]
and eax, 511
and eax, 480
test eax, eax
je .Lt_0187
push 1
push 0
push 2
call ERRREPORTWARN
add esp, 12
.Lt_0187:
.Lt_0186:
mov eax, dword ptr [ebp-20]
mov ebx, dword ptr [eax+4]
and ebx, 511
cmp ebx, 7
je .Lt_0189
push 0
push 0
push dword ptr [ebp-20]
push 0
push 7
call ASTNEWCONV
add esp, 20
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 0
jne .Lt_018B
push 0
push -1
push 17
call ERRREPORT
add esp, 12
.Lt_018B:
.Lt_018A:
.Lt_0189:
.Lt_0188:
.Lt_0185:
.Lt_0180:
.Lt_017F:
.Lt_017E:
.Lt_017A:
jmp .Lt_0178
.Lt_0179:
mov dword ptr [ebp-20], 0
.Lt_0178:
push 44
call HMATCH
add esp, 4
test eax, eax
je .Lt_018D
push 0
call CVARORDEREF
add esp, 4
mov dword ptr [ebp-24], eax
cmp dword ptr [ebp-24], 0
je .Lt_018F
mov eax, dword ptr [ebp-24]
mov ebx, dword ptr [eax+12]
mov dword ptr [ebp-32], ebx
cmp dword ptr [ebp-32], 0
je .Lt_0191
mov ebx, dword ptr [ebp-32]
mov eax, dword ptr [ebx+24]
and eax, 511
mov dword ptr [ebp-36], eax
mov eax, dword ptr [ebp-36]
and eax, 480
je .Lt_0192
mov dword ptr [ebp-40], 22
jmp .Lt_02B9
.Lt_0192:
mov eax, dword ptr [ebp-36]
and eax, 31
mov dword ptr [ebp-40], eax
.Lt_02B9:
mov eax, dword ptr [ebp-40]
imul eax, 28
mov ebx, dword ptr [ENV+236]
cmp ebx, dword ptr [SYMB_DTYPETB+eax+4]
setne bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-48], ebx
mov ebx, dword ptr [ebp-36]
and ebx, 480
je .Lt_0194
mov dword ptr [ebp-44], 22
jmp .Lt_02BA
.Lt_0194:
mov ebx, dword ptr [ebp-36]
and ebx, 31
mov dword ptr [ebp-44], ebx
.Lt_02BA:
mov ebx, dword ptr [ebp-44]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx]
test eax, eax
setne al
shr eax, 1
sbb eax, eax
or eax, dword ptr [ebp-48]
mov ebx, dword ptr [ebp-36]
and ebx, 480
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
je .Lt_0197
push 0
push 0
push 24
call ERRREPORT
add esp, 12
.Lt_0197:
.Lt_0196:
.Lt_0191:
.Lt_0190:
jmp .Lt_018E
.Lt_018F:
push 0
push 0
push 14
call ERRREPORT
add esp, 12
.Lt_018E:
jmp .Lt_018C
.Lt_018D:
mov dword ptr [ebp-24], 0
.Lt_018C:
mov ebx, dword ptr [ebp-16]
mov eax, dword ptr [ebx+4]
and eax, 512
test eax, eax
je .Lt_0199
push 0
push 0
push 118
call ERRREPORT
add esp, 12
.Lt_0199:
.Lt_0198:
cmp dword ptr [ebp-24], 0
je .Lt_019B
mov eax, dword ptr [ebp-24]
mov ebx, dword ptr [eax+4]
and ebx, 512
test ebx, ebx
je .Lt_019D
push 0
push 0
push 118
call ERRREPORT
add esp, 12
.Lt_019D:
.Lt_019C:
.Lt_019B:
.Lt_019A:
cmp dword ptr [ebp-28], 0
jne .Lt_019F
push dword ptr [ebp+8]
push dword ptr [ebp-24]
push dword ptr [ebp-20]
push dword ptr [ebp-16]
push dword ptr [ebp-12]
push dword ptr [ebp-8]
call RTLFILEGET
add esp, 24
mov dword ptr [ebp-4], eax
jmp .Lt_019E
.Lt_019F:
push dword ptr [ebp+8]
push dword ptr [ebp-24]
push dword ptr [ebp-16]
push dword ptr [ebp-12]
push dword ptr [ebp-8]
call RTLFILEGETARRAY
add esp, 20
mov dword ptr [ebp-4], eax
.Lt_019E:
.Lt_015F:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HFILEGET, .-HFILEGET
.balign 16
HFILEOPEN:
.type HFILEOPEN, @function
push ebp
mov ebp, esp
sub esp, 68
push ebx
mov dword ptr [ebp-4], 0
.Lt_01A0:
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
mov dword ptr [ebp-4], 0
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-36], 0
mov eax, dword ptr [ENV+136]
cmp eax, 3
sete al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_01A3
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
lea eax, [ebp-68]
push eax
call fb_StrInit
add esp, 20
push 5
push offset Lt_01A7
push -1
lea eax, [ebp-68]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_01A6
.Lt_01A8:
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [eax+16532]
cmp dword ptr [ebx+4116], 0
jne .Lt_01AA
push 0
call LEXSKIPTOKEN
add esp, 4
mov dword ptr [ebp-56], 1
.Lt_01AA:
.Lt_01A9:
jmp .Lt_01A4
.Lt_01A6:
push 4
push offset Lt_01AC
push -1
lea ebx, [ebp-68]
push ebx
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_01AB
.Lt_01AD:
push 0
call LEXSKIPTOKEN
add esp, 4
mov dword ptr [ebp-56], 2
jmp .Lt_01A4
.Lt_01AB:
push 5
push offset Lt_01AF
push -1
lea eax, [ebp-68]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_01AE
.Lt_01B0:
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [eax+16532]
cmp dword ptr [ebx+4116], 0
jne .Lt_01B2
push 0
call LEXSKIPTOKEN
add esp, 4
mov dword ptr [ebp-56], 3
.Lt_01B2:
.Lt_01B1:
jmp .Lt_01A4
.Lt_01AE:
push 5
push offset Lt_01B4
push -1
lea ebx, [ebp-68]
push ebx
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_01B3
.Lt_01B5:
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [eax+16532]
cmp dword ptr [ebx+4116], 0
jne .Lt_01B7
push 0
call LEXSKIPTOKEN
add esp, 4
mov dword ptr [ebp-56], 4
.Lt_01B7:
.Lt_01B6:
jmp .Lt_01A4
.Lt_01B3:
push 4
push offset Lt_01B9
push -1
lea ebx, [ebp-68]
push ebx
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_01B8
.Lt_01BA:
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [eax+16532]
cmp dword ptr [ebx+4116], 0
jne .Lt_01BC
push 0
call LEXSKIPTOKEN
add esp, 4
mov dword ptr [ebp-56], 5
.Lt_01BC:
.Lt_01BB:
jmp .Lt_01A4
.Lt_01B8:
push 4
push offset Lt_01BE
push -1
lea ebx, [ebp-68]
push ebx
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_01BD
.Lt_01BF:
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [eax+16532]
cmp dword ptr [ebx+4116], 0
jne .Lt_01C1
push 0
call LEXSKIPTOKEN
add esp, 4
mov dword ptr [ebp-56], 6
.Lt_01C1:
.Lt_01C0:
.Lt_01BD:
.Lt_01A4:
lea ebx, [ebp-68]
push ebx
call fb_StrDelete
add esp, 4
.Lt_01A3:
.Lt_01A2:
cmp dword ptr [ebp+8], 0
je .Lt_01C3
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
je .Lt_01C5
push 0
push 0
push 6
call ERRREPORT
add esp, 12
jmp .Lt_01C4
.Lt_01C5:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_01C4:
.Lt_01C3:
.Lt_01C2:
cmp dword ptr [ENV+136], 3
jne .Lt_01C7
mov dword ptr [ebp-56], 7
.Lt_01C7:
.Lt_01C6:
mov eax, dword ptr [ebp-56]
mov dword ptr [ebp-60], eax
jmp .Lt_01C9
.Lt_01CB:
push 16
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_01CD
jmp .Lt_01A1
.Lt_01CD:
.Lt_01CC:
cmp dword ptr [ebp+8], 0
je .Lt_01CF
push 44
call HMATCH
add esp, 4
.Lt_01CF:
.Lt_01CE:
cmp dword ptr [ebp-56], 0
je .Lt_01D2
.Lt_01D3:
cmp dword ptr [ebp-56], 7
jne .Lt_01D1
.Lt_01D2:
cmp dword ptr [ebp+8], 0
je .Lt_01D5
push 0
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-64], eax
cmp dword ptr [ebp-64], 281
je .Lt_01D9
.Lt_01DA:
cmp dword ptr [ebp-64], 471
je .Lt_01D9
.Lt_01DB:
cmp dword ptr [ebp-64], 375
jne .Lt_01D8
.Lt_01D9:
jmp .Lt_01D6
.Lt_01D8:
mov dword ptr [ebp-36], -1
.Lt_01DC:
.Lt_01D6:
jmp .Lt_01D4
.Lt_01D5:
push 44
call HMATCH
add esp, 4
test eax, eax
je .Lt_01DE
mov dword ptr [ebp-36], -1
.Lt_01DE:
.Lt_01DD:
.Lt_01D4:
.Lt_01D1:
.Lt_01D0:
jmp .Lt_01C8
.Lt_01DF:
push offset Lt_0000
call ASTNEWCONSTSTR
add esp, 4
mov dword ptr [ebp-12], eax
jmp .Lt_01C8
.Lt_01C9:
cmp dword ptr [ebp-60], 7
ja .Lt_01DF
mov eax, dword ptr [ebp-60]
jmp dword ptr [.LT_01E0+eax*4]
.LT_01E0:
.int .Lt_01CB
.int .Lt_01DF
.int .Lt_01DF
.int .Lt_01CB
.int .Lt_01DF
.int .Lt_01CB
.int .Lt_01CB
.int .Lt_01CB
.Lt_01C8:
cmp dword ptr [ebp-36], 0
je .Lt_01E2
mov eax, dword ptr [ebp-12]
mov dword ptr [ebp-16], eax
mov dword ptr [ebp-12], 0
push 35
call HMATCH
add esp, 4
push 7
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_01E4
jmp .Lt_01A1
.Lt_01E4:
.Lt_01E3:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
je .Lt_01E6
push 0
push 0
push 16
call ERRREPORT
add esp, 12
jmp .Lt_01E5
.Lt_01E6:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_01E5:
push 16
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_01E8
jmp .Lt_01A1
.Lt_01E8:
.Lt_01E7:
push 44
call HMATCH
add esp, 4
test eax, eax
je .Lt_01EA
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
je .Lt_01EC
push 7
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-28], eax
cmp dword ptr [ebp-28], 0
jne .Lt_01EE
jmp .Lt_01A1
.Lt_01EE:
.Lt_01ED:
.Lt_01EC:
.Lt_01EB:
push 44
call HMATCH
add esp, 4
test eax, eax
je .Lt_01F0
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
je .Lt_01F2
push 16
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 0
jne .Lt_01F4
jmp .Lt_01A1
.Lt_01F4:
.Lt_01F3:
.Lt_01F2:
.Lt_01F1:
push 44
call HMATCH
add esp, 4
test eax, eax
je .Lt_01F6
push 16
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-24], eax
cmp dword ptr [ebp-24], 0
jne .Lt_01F8
jmp .Lt_01A1
.Lt_01F8:
.Lt_01F7:
.Lt_01F6:
.Lt_01F5:
.Lt_01F0:
.Lt_01EF:
.Lt_01EA:
.Lt_01E9:
cmp dword ptr [ebp-28], 0
jne .Lt_01FA
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-28], eax
.Lt_01FA:
.Lt_01F9:
cmp dword ptr [ebp-20], 0
jne .Lt_01FC
push offset Lt_0000
call ASTNEWCONSTSTR
add esp, 4
mov dword ptr [ebp-20], eax
.Lt_01FC:
.Lt_01FB:
cmp dword ptr [ebp-24], 0
jne .Lt_01FE
push offset Lt_0000
call ASTNEWCONSTSTR
add esp, 4
mov dword ptr [ebp-24], eax
.Lt_01FE:
.Lt_01FD:
cmp dword ptr [ebp+8], 0
je .Lt_0200
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_0202
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
jmp .Lt_0201
.Lt_0202:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0201:
.Lt_0200:
.Lt_01FF:
push dword ptr [ebp+8]
push dword ptr [ebp-28]
push dword ptr [ebp-8]
push dword ptr [ebp-24]
push dword ptr [ebp-20]
push dword ptr [ebp-16]
push dword ptr [ebp-12]
call RTLFILEOPENSHORT
add esp, 28
mov dword ptr [ebp-4], eax
jmp .Lt_01A1
.Lt_01E2:
.Lt_01E1:
push 281
call HMATCH
add esp, 4
test eax, eax
je .Lt_0204
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
lea eax, [ebp-68]
push eax
call fb_StrInit
add esp, 20
push 6
push offset Lt_0208
push -1
lea eax, [ebp-68]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_0207
.Lt_0209:
mov dword ptr [ebp-40], 2
jmp .Lt_0205
.Lt_0207:
push 7
push offset Lt_020B
push -1
lea eax, [ebp-68]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_020A
.Lt_020C:
mov dword ptr [ebp-40], 3
jmp .Lt_0205
.Lt_020A:
push 7
push offset Lt_020E
push -1
lea eax, [ebp-68]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_020D
.Lt_020F:
mov dword ptr [ebp-40], 0
jmp .Lt_0205
.Lt_020D:
push 7
push offset Lt_0211
push -1
lea eax, [ebp-68]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_0210
.Lt_0212:
mov dword ptr [ebp-40], 1
jmp .Lt_0205
.Lt_0210:
push 7
push offset Lt_0214
push -1
lea eax, [ebp-68]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_0213
.Lt_0215:
mov dword ptr [ebp-40], 4
jmp .Lt_0205
.Lt_0213:
lea eax, [ebp-68]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_01A1
.Lt_0216:
.Lt_0205:
lea eax, [ebp-68]
push eax
call fb_StrDelete
add esp, 4
push 0
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_0203
.Lt_0204:
mov dword ptr [ebp-40], 1
.Lt_0203:
push 0
push 7
mov ebx, dword ptr [ebp-40]
mov eax, ebx
sar eax, 31
push eax
push ebx
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp+8], 0
je .Lt_0218
push 44
call HMATCH
add esp, 4
.Lt_0218:
.Lt_0217:
mov dword ptr [ebp-32], 0
mov eax, dword ptr [ENV+136]
cmp eax, 3
sete al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_021A
cmp dword ptr [ebp-40], 2
je .Lt_021D
.Lt_021E:
cmp dword ptr [ebp-40], 3
je .Lt_021D
.Lt_021F:
cmp dword ptr [ebp-40], 4
jne .Lt_021C
.Lt_021D:
push 480
call HMATCH
add esp, 4
test eax, eax
je .Lt_0221
push 16
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-32], eax
cmp dword ptr [ebp-32], 0
jne .Lt_0223
jmp .Lt_01A1
.Lt_0223:
.Lt_0222:
cmp dword ptr [ebp+8], 0
je .Lt_0225
push 44
call HMATCH
add esp, 4
.Lt_0225:
.Lt_0224:
.Lt_0221:
.Lt_0220:
.Lt_021C:
.Lt_021B:
.Lt_021A:
.Lt_0219:
push offset Lt_0226
call HMATCHTEXT
add esp, 4
test eax, eax
je .Lt_0228
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
lea eax, [ebp-68]
push eax
call fb_StrInit
add esp, 20
push 6
push offset Lt_022C
push -1
lea eax, [ebp-68]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_022B
.Lt_022D:
push 0
call LEXSKIPTOKEN
add esp, 4
mov dword ptr [ebp-44], 2
jmp .Lt_0229
.Lt_022B:
push 5
push offset Lt_022F
push -1
lea eax, [ebp-68]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_022E
.Lt_0230:
push 0
call LEXSKIPTOKEN
add esp, 4
push 472
call HMATCH
add esp, 4
test eax, eax
je .Lt_0232
mov dword ptr [ebp-44], 3
jmp .Lt_0231
.Lt_0232:
mov dword ptr [ebp-44], 1
.Lt_0231:
.Lt_022E:
.Lt_0229:
lea eax, [ebp-68]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0227
.Lt_0228:
mov dword ptr [ebp-44], 0
.Lt_0227:
push 0
push 7
mov ebx, dword ptr [ebp-44]
mov eax, ebx
sar eax, 31
push eax
push ebx
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp+8], 0
je .Lt_0234
push 44
call HMATCH
add esp, 4
.Lt_0234:
.Lt_0233:
push 312
call HMATCH
add esp, 4
test eax, eax
je .Lt_0236
mov dword ptr [ebp-48], 0
jmp .Lt_0235
.Lt_0236:
push offset Lt_0238
call HMATCHTEXT
add esp, 4
test eax, eax
je .Lt_0237
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
lea eax, [ebp-68]
push eax
call fb_StrInit
add esp, 20
push 6
push offset Lt_022C
push -1
lea eax, [ebp-68]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_023B
.Lt_023C:
push 0
call LEXSKIPTOKEN
add esp, 4
mov dword ptr [ebp-48], 2
jmp .Lt_0239
.Lt_023B:
push 5
push offset Lt_022F
push -1
lea eax, [ebp-68]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_023D
.Lt_023E:
push 0
call LEXSKIPTOKEN
add esp, 4
push 472
call HMATCH
add esp, 4
test eax, eax
je .Lt_0240
mov dword ptr [ebp-48], 3
jmp .Lt_023F
.Lt_0240:
mov dword ptr [ebp-48], 1
.Lt_023F:
.Lt_023D:
.Lt_0239:
lea eax, [ebp-68]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0235
.Lt_0237:
mov dword ptr [ebp-48], 0
.Lt_0235:
push 0
push 7
mov ebx, dword ptr [ebp-48]
mov eax, ebx
sar eax, 31
push eax
push ebx
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-24], eax
cmp dword ptr [ebp+8], 0
je .Lt_0242
push 44
call HMATCH
add esp, 4
.Lt_0242:
.Lt_0241:
push 375
call HMATCH
add esp, 4
test eax, eax
jne .Lt_0244
push 0
push 0
push 5
call ERRREPORT
add esp, 12
.Lt_0244:
.Lt_0243:
push 35
call HMATCH
add esp, 4
push 7
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0246
jmp .Lt_01A1
.Lt_0246:
.Lt_0245:
cmp dword ptr [ebp+8], 0
je .Lt_0248
push 44
call HMATCH
add esp, 4
.Lt_0248:
.Lt_0247:
push offset Lt_0249
call HMATCHTEXT
add esp, 4
test eax, eax
je .Lt_024B
call CASSIGNTOKEN
test eax, eax
jne .Lt_024D
push 0
push 0
push 10
call ERRREPORT
add esp, 12
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-28], eax
jmp .Lt_024C
.Lt_024D:
push 7
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-28], eax
cmp dword ptr [ebp-28], 0
jne .Lt_024F
jmp .Lt_01A1
.Lt_024F:
.Lt_024E:
.Lt_024C:
jmp .Lt_024A
.Lt_024B:
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-28], eax
.Lt_024A:
cmp dword ptr [ebp+8], 0
je .Lt_0251
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_0253
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
jmp .Lt_0252
.Lt_0253:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0252:
.Lt_0251:
.Lt_0250:
push dword ptr [ebp-56]
push dword ptr [ebp+8]
push dword ptr [ebp-32]
push dword ptr [ebp-28]
push dword ptr [ebp-8]
push dword ptr [ebp-24]
push dword ptr [ebp-20]
push dword ptr [ebp-16]
push dword ptr [ebp-12]
call RTLFILEOPEN
add esp, 36
mov dword ptr [ebp-4], eax
.Lt_01A1:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HFILEOPEN, .-HFILEOPEN
.balign 16
HFILERENAME:
.type HFILERENAME, @function
push ebp
mov ebp, esp
sub esp, 16
mov dword ptr [ebp-4], 0
.Lt_0254:
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-4], 0
cmp dword ptr [ebp+8], 0
je .Lt_0257
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
je .Lt_0259
push 0
push 0
push 6
call ERRREPORT
add esp, 12
jmp .Lt_0258
.Lt_0259:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0258:
jmp .Lt_0256
.Lt_0257:
push 40
call HMATCH
add esp, 4
mov dword ptr [ebp-16], eax
.Lt_0256:
push 16
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_025B
jmp .Lt_0255
.Lt_025B:
.Lt_025A:
cmp dword ptr [ebp+8], 0
je .Lt_025D
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
je .Lt_025F
push 0
push 0
push 16
call ERRREPORT
add esp, 12
jmp .Lt_025E
.Lt_025F:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_025E:
jmp .Lt_025C
.Lt_025D:
push 375
call HMATCH
add esp, 4
test eax, eax
jne .Lt_0261
push 44
call HMATCH
add esp, 4
test eax, eax
jne .Lt_0263
push 0
push 0
push 5
call ERRREPORT
add esp, 12
.Lt_0263:
.Lt_0262:
.Lt_0261:
.Lt_0260:
.Lt_025C:
push 16
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_0265
jmp .Lt_0255
.Lt_0265:
.Lt_0264:
mov eax, dword ptr [ebp-16]
or eax, dword ptr [ebp+8]
je .Lt_0267
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_0269
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
jmp .Lt_0268
.Lt_0269:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0268:
.Lt_0267:
.Lt_0266:
push dword ptr [ebp+8]
push dword ptr [ebp-8]
push dword ptr [ebp-12]
call RTLFILERENAME
add esp, 12
mov dword ptr [ebp-4], eax
.Lt_0255:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size HFILERENAME, .-HFILERENAME
	#fbc-1.01.0/src/compiler/parser-quirk-file.bas' compilation took 0.04113297443836927 secs

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
Lt_01A7:	.ascii	"CONS\0"
.balign 4
Lt_01AC:	.ascii	"ERR\0"
.balign 4
Lt_01AF:	.ascii	"PIPE\0"
.balign 4
Lt_01B4:	.ascii	"SCRN\0"
.balign 4
Lt_01B9:	.ascii	"LPT\0"
.balign 4
Lt_01BE:	.ascii	"COM\0"
.balign 4
Lt_0208:	.ascii	"INPUT\0"
.balign 4
Lt_020B:	.ascii	"OUTPUT\0"
.balign 4
Lt_020E:	.ascii	"BINARY\0"
.balign 4
Lt_0211:	.ascii	"RANDOM\0"
.balign 4
Lt_0214:	.ascii	"APPEND\0"
.balign 4
Lt_0226:	.ascii	"ACCESS\0"
.balign 4
Lt_022C:	.ascii	"WRITE\0"
.balign 4
Lt_022F:	.ascii	"READ\0"
.balign 4
Lt_0238:	.ascii	"LOCK\0"
.balign 4
Lt_0249:	.ascii	"LEN\0"

.section .ctors, "aw", @progbits
.int fb_ctor__parserzquirkzfile
