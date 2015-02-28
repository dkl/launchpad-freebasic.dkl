	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/parser-expr-unary.bas' compilation started at 14:16:36 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl CNEGNOTEXPRESSION
CNEGNOTEXPRESSION:
.type CNEGNOTEXPRESSION, @function
push ebp
mov ebp, esp
sub esp, 12
mov dword ptr [ebp-4], 0
.Lt_0065:
push 0
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 45
jne .Lt_0069
.Lt_006A:
push 0
call LEXSKIPTOKEN
add esp, 4
call CEXPEXPRESSION
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_006C
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
jmp .Lt_006B
.Lt_006C:
push dword ptr [ebp-8]
push 54
call ASTNEWUOP
add esp, 8
mov dword ptr [ebp-8], eax
.Lt_006B:
cmp dword ptr [ebp-8], 0
jne .Lt_006E
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
.Lt_006E:
.Lt_006D:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
jmp .Lt_0066
jmp .Lt_0067
.Lt_0069:
cmp dword ptr [ebp-12], 43
jne .Lt_006F
.Lt_0070:
push 0
call LEXSKIPTOKEN
add esp, 4
call CEXPEXPRESSION
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0072
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
jmp .Lt_0071
.Lt_0072:
push dword ptr [ebp-8]
push 53
call ASTNEWUOP
add esp, 8
mov dword ptr [ebp-8], eax
.Lt_0071:
cmp dword ptr [ebp-8], 0
jne .Lt_0074
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
.Lt_0074:
.Lt_0073:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
jmp .Lt_0066
jmp .Lt_0067
.Lt_006F:
cmp dword ptr [ebp-12], 295
jne .Lt_0075
.Lt_0076:
push 0
call LEXSKIPTOKEN
add esp, 4
call CRELEXPRESSION
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0078
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
jmp .Lt_0077
.Lt_0078:
push dword ptr [ebp-8]
push 52
call ASTNEWUOP
add esp, 8
mov dword ptr [ebp-8], eax
.Lt_0077:
cmp dword ptr [ebp-8], 0
jne .Lt_007A
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
.Lt_007A:
.Lt_0079:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
jmp .Lt_0066
.Lt_0075:
.Lt_0067:
push 0
push 0
call CHIGHESTPRECEXPR
add esp, 8
mov dword ptr [ebp-4], eax
.Lt_0066:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size CNEGNOTEXPRESSION, .-CNEGNOTEXPRESSION
.balign 16

.globl CSTRIDXORMEMBERDEREF
CSTRIDXORMEMBERDEREF:
.type CSTRIDXORMEMBERDEREF, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
mov dword ptr [ebp-4], 0
.Lt_007B:
cmp dword ptr [ebp+8], 0
jne .Lt_007E
jmp .Lt_007C
.Lt_007E:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-12], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+8]
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-12]
and eax, 480
je .Lt_007F
mov dword ptr [ebp-16], 22
jmp .Lt_009D
.Lt_007F:
mov eax, dword ptr [ebp-12]
and eax, 31
mov dword ptr [ebp-16], eax
.Lt_009D:
mov eax, dword ptr [ebp-16]
mov dword ptr [ebp-20], eax
jmp .Lt_0082
.Lt_0084:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 91
jne .Lt_0086
push -1
push dword ptr [ebp+8]
push dword ptr [ebp-8]
push dword ptr [ebp-12]
call CMEMBERDEREF
add esp, 16
mov dword ptr [ebp+8], eax
.Lt_0086:
.Lt_0085:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
jmp .Lt_007C
jmp .Lt_0081
.Lt_0087:
push 0
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-24], eax
cmp dword ptr [ebp-24], 46
jne .Lt_008A
.Lt_008B:
push 64
call LEXSKIPTOKEN
add esp, 4
push dword ptr [ebp+8]
push dword ptr [ebp-8]
push dword ptr [ebp-12]
call CMEMBERACCESS
add esp, 12
mov dword ptr [ebp+8], eax
cmp dword ptr [ebp+8], 0
jne .Lt_008D
mov dword ptr [ebp-4], 0
jmp .Lt_007C
.Lt_008D:
.Lt_008C:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-12], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+8]
mov dword ptr [ebp-8], eax
jmp .Lt_0088
.Lt_008A:
cmp dword ptr [ebp-24], 397
je .Lt_008F
.Lt_0090:
cmp dword ptr [ebp-24], 91
jne .Lt_008E
.Lt_008F:
push -1
push dword ptr [ebp+8]
push dword ptr [ebp-8]
push dword ptr [ebp-12]
call CMEMBERDEREF
add esp, 16
mov dword ptr [ebp+8], eax
.Lt_008E:
.Lt_0088:
jmp .Lt_0081
.Lt_0082:
mov eax, dword ptr [ebp-20]
add eax, 4294967293
cmp eax, 15
ja .Lt_0081
mov eax, dword ptr [ebp-20]
jmp dword ptr [.LT_0091+eax*4-12]
.LT_0091:
.int .Lt_0084
.int .Lt_0081
.int .Lt_0081
.int .Lt_0084
.int .Lt_0081
.int .Lt_0081
.int .Lt_0081
.int .Lt_0081
.int .Lt_0081
.int .Lt_0081
.int .Lt_0081
.int .Lt_0081
.int .Lt_0081
.int .Lt_0084
.int .Lt_0084
.int .Lt_0087
.Lt_0081:
mov eax, dword ptr [ebp-12]
and eax, 480
test eax, eax
je .Lt_0093
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-20], 0
push 0
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-24], eax
cmp dword ptr [ebp-24], 40
jne .Lt_0096
.Lt_0097:
mov eax, dword ptr [ebp-12]
and eax, 511
cmp eax, 52
sete al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-16], eax
mov eax, dword ptr [ebp-16]
mov dword ptr [ebp-20], eax
jmp .Lt_0094
.Lt_0096:
cmp dword ptr [ebp-24], 397
je .Lt_0099
.Lt_009A:
cmp dword ptr [ebp-24], 91
jne .Lt_0098
.Lt_0099:
mov dword ptr [ebp-20], -1
.Lt_0098:
.Lt_0094:
cmp dword ptr [ebp-20], 0
je .Lt_009C
push -1
push dword ptr [ebp-16]
push dword ptr [ebp+8]
push dword ptr [ebp-8]
push dword ptr [ebp-12]
call CFUNCPTRORMEMBERDEREF
add esp, 20
mov dword ptr [ebp+8], eax
.Lt_009C:
.Lt_009B:
.Lt_0093:
.Lt_0092:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
.Lt_007C:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CSTRIDXORMEMBERDEREF, .-CSTRIDXORMEMBERDEREF
.balign 16

.globl CHIGHESTPRECEXPR
CHIGHESTPRECEXPR:
.type CHIGHESTPRECEXPR, @function
push ebp
mov ebp, esp
sub esp, 32
mov dword ptr [ebp-4], 0
.Lt_009F:
push 0
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 64
jne .Lt_00A3
.Lt_00A4:
call CADDROFEXPRESSION
mov dword ptr [ebp-4], eax
jmp .Lt_00A0
jmp .Lt_00A1
.Lt_00A3:
cmp dword ptr [ebp-12], 42
jne .Lt_00A5
.Lt_00A6:
call CDEREFEXPRESSION
mov dword ptr [ebp-8], eax
jmp .Lt_00A1
.Lt_00A5:
cmp dword ptr [ebp-12], 40
jne .Lt_00A7
.Lt_00A8:
mov eax, dword ptr [PARSER+144]
and eax, 1
test eax, eax
setne al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-16], eax
call CPARENTEXPRESSION
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-16], 0
je .Lt_00AA
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
jmp .Lt_00A0
.Lt_00AA:
.Lt_00A9:
jmp .Lt_00A1
.Lt_00A7:
push 0
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-16], eax
jmp .Lt_00AD
.Lt_00AF:
call CADDROFEXPRESSION
mov dword ptr [ebp-4], eax
jmp .Lt_00A0
jmp .Lt_00AC
.Lt_00B0:
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call HCAST
add esp, 4
mov dword ptr [ebp-8], eax
jmp .Lt_00AC
.Lt_00B1:
push 0
call LEXSKIPTOKEN
add esp, 4
push 4
call HCAST
add esp, 4
mov dword ptr [ebp-8], eax
jmp .Lt_00AC
.Lt_00B2:
call COPERATORNEW
mov dword ptr [ebp-8], eax
jmp .Lt_00AC
.Lt_00B3:
mov eax, dword ptr [PARSER+144]
and eax, 1024
test eax, eax
je .Lt_00B5
push 0
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 376
jne .Lt_00B8
.Lt_00B9:
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
push 0
push -1
call PPTYPEOF
push eax
push -1
lea eax, [ebp-32]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-32]
call ASTNEWCONSTSTR
add esp, 4
mov dword ptr [ebp-4], eax
lea eax, [ebp-32]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_00A0
jmp .Lt_00B6
.Lt_00B8:
cmp dword ptr [ebp-20], 315
jne .Lt_00BB
.Lt_00BC:
call HPPDEFINEDEXPR
mov dword ptr [ebp-4], eax
jmp .Lt_00A0
.Lt_00BB:
.Lt_00B6:
.Lt_00B5:
.Lt_00B4:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call CATOM
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_00A0
jmp .Lt_00AC
.Lt_00AD:
mov eax, dword ptr [ebp-16]
add eax, 4294966910
cmp eax, 27
ja .Lt_00B3
mov eax, dword ptr [ebp-16]
jmp dword ptr [.LT_00BD+eax*4-1544]
.LT_00BD:
.int .Lt_00B2
.int .Lt_00B3
.int .Lt_00B3
.int .Lt_00B3
.int .Lt_00B3
.int .Lt_00B3
.int .Lt_00B3
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00B3
.int .Lt_00B3
.int .Lt_00B3
.int .Lt_00B3
.int .Lt_00B3
.int .Lt_00B3
.int .Lt_00B3
.int .Lt_00B3
.int .Lt_00B3
.int .Lt_00B3
.int .Lt_00B3
.int .Lt_00B3
.int .Lt_00B3
.int .Lt_00B3
.int .Lt_00B3
.int .Lt_00B1
.int .Lt_00B0
.Lt_00AC:
.Lt_00AB:
.Lt_00A1:
push dword ptr [ebp-8]
call CSTRIDXORMEMBERDEREF
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_00A0:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size CHIGHESTPRECEXPR, .-CHIGHESTPRECEXPR
.balign 16

.globl CDEREFEXPRESSION
CDEREFEXPRESSION:
.type CDEREFEXPRESSION, @function
push ebp
mov ebp, esp
sub esp, 12
mov dword ptr [ebp-4], 0
.Lt_00E6:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 42
je .Lt_00E9
mov dword ptr [ebp-4], 0
jmp .Lt_00E7
.Lt_00E9:
.Lt_00E8:
mov dword ptr [ebp-8], 0
.Lt_00EA:
push 0
call LEXSKIPTOKEN
add esp, 4
inc dword ptr [ebp-8]
.Lt_00EC:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 42
je .Lt_00EA
.Lt_00EB:
push 0
push 0
call CHIGHESTPRECEXPR
add esp, 8
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_00EE
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
jmp .Lt_00E7
.Lt_00EE:
.Lt_00ED:
mov eax, dword ptr [ebp-12]
push dword ptr [eax+8]
mov eax, dword ptr [ebp-12]
push dword ptr [eax+4]
push dword ptr [ebp-12]
push dword ptr [ebp-8]
call ASTBUILDMULTIDEREF
add esp, 16
mov dword ptr [ebp-4], eax
.Lt_00E7:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size CDEREFEXPRESSION, .-CDEREFEXPRESSION
.balign 16

.globl CADDROFEXPRESSION
CADDROFEXPRESSION:
.type CADDROFEXPRESSION, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
mov dword ptr [ebp-4], 0
.Lt_0117:
mov dword ptr [ebp-8], 0
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 64
jne .Lt_011A
push 0
call LEXSKIPTOKEN
add esp, 4
mov dword ptr [ebp-12], -1
cmp dword ptr [PARSER+52], 0
je .Lt_011C
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 46
jne .Lt_011E
push 64
push 1
call LEXGETLOOKAHEAD
add esp, 8
cmp eax, 46
sete al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-12], eax
.Lt_011E:
.Lt_011D:
.Lt_011C:
.Lt_011B:
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-24], 0
cmp dword ptr [ebp-12], 0
je .Lt_0120
push 50
lea eax, [ebp-24]
push eax
call CIDENTIFIER
add esp, 8
mov dword ptr [ebp-16], eax
push 3
push dword ptr [ebp-16]
call SYMBFINDBYCLASS
add esp, 8
mov dword ptr [ebp-20], eax
.Lt_0120:
.Lt_011F:
cmp dword ptr [ebp-20], 0
je .Lt_0122
push 0
call LEXSKIPTOKEN
add esp, 4
push dword ptr [ebp-20]
push dword ptr [ebp-24]
call HPROCPTRBODY
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_0118
jmp .Lt_0121
.Lt_0122:
push dword ptr [ebp-16]
push dword ptr [ebp-24]
call HVARPTRBODY
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_0118
.Lt_0121:
.Lt_011A:
.Lt_0119:
push 0
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-12], eax
jmp .Lt_0124
.Lt_0126:
push 0
call LEXSKIPTOKEN
add esp, 4
push 40
call HMATCH
add esp, 4
test eax, eax
jne .Lt_0128
push 0
push 0
push 6
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
jmp .Lt_0118
.Lt_0128:
.Lt_0127:
push 0
push 0
call HVARPTRBODY
add esp, 8
mov dword ptr [ebp-8], eax
push 41
call HMATCH
add esp, 4
test eax, eax
jne .Lt_012A
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
.Lt_012A:
.Lt_0129:
jmp .Lt_0123
.Lt_012B:
push 0
call LEXSKIPTOKEN
add esp, 4
push 40
call HMATCH
add esp, 4
test eax, eax
jne .Lt_012D
push 0
push 0
push 6
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
jmp .Lt_0118
.Lt_012D:
.Lt_012C:
push 50
lea eax, [ebp-24]
push eax
call CIDENTIFIER
add esp, 8
mov dword ptr [ebp-16], eax
push 3
push dword ptr [ebp-16]
call SYMBFINDBYCLASS
add esp, 8
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 0
jne .Lt_012F
push 0
push 0
push 8
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
jmp .Lt_0118
jmp .Lt_012E
.Lt_012F:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_012E:
push dword ptr [ebp-20]
push dword ptr [ebp-24]
call HPROCPTRBODY
add esp, 8
mov dword ptr [ebp-8], eax
push 41
call HMATCH
add esp, 4
test eax, eax
jne .Lt_0131
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
.Lt_0131:
.Lt_0130:
jmp .Lt_0123
.Lt_0132:
push 0
call LEXSKIPTOKEN
add esp, 4
push 40
call HMATCH
add esp, 4
test eax, eax
jne .Lt_0134
push 0
push 0
push 6
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
jmp .Lt_0118
.Lt_0134:
.Lt_0133:
push 0
push 0
call CHIGHESTPRECEXPR
add esp, 8
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0136
push 0
push 0
push 24
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
jmp .Lt_0118
.Lt_0136:
.Lt_0135:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+4]
and ebx, 511
mov dword ptr [ebp-16], ebx
push dword ptr [ebp-16]
call SYMBISSTRING
add esp, 4
test eax, eax
jne .Lt_0138
push 0
push 0
push 24
call ERRREPORT
add esp, 12
push 0
push 0
push -1
push 41
call HSKIPUNTIL
add esp, 16
push dword ptr [ebp-8]
call ASTDELTREE
add esp, 4
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-4], eax
jmp .Lt_0118
.Lt_0138:
.Lt_0137:
push dword ptr [ebp-8]
call ASTSKIPNOCONVCAST
add esp, 4
mov dword ptr [ebp-20], eax
mov eax, dword ptr [ebp-20]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-24], ebx
jmp .Lt_013A
.Lt_013C:
jmp .Lt_0139
.Lt_013D:
push 0
push 1
push 0
push offset Lt_013E
push 24
call ERRREPORTEX
add esp, 20
jmp .Lt_0139
.Lt_013A:
mov ebx, dword ptr [ebp-24]
add ebx, 4294967279
cmp ebx, 19
ja .Lt_013D
mov ebx, dword ptr [ebp-24]
jmp dword ptr [.LT_013F+ebx*4-68]
.LT_013F:
.int .Lt_013C
.int .Lt_013C
.int .Lt_013C
.int .Lt_013C
.int .Lt_013D
.int .Lt_013D
.int .Lt_013D
.int .Lt_013D
.int .Lt_013D
.int .Lt_013D
.int .Lt_013D
.int .Lt_013D
.int .Lt_013D
.int .Lt_013D
.int .Lt_013D
.int .Lt_013D
.int .Lt_013D
.int .Lt_013D
.int .Lt_013D
.int .Lt_013C
.Lt_0139:
cmp dword ptr [ebp-16], 16
jne .Lt_0141
push dword ptr [ebp-8]
call ASTBUILDSTRPTR
add esp, 4
mov dword ptr [ebp-8], eax
jmp .Lt_0140
.Lt_0141:
push 0
push 0
push dword ptr [ebp-8]
call ASTNEWADDROF
add esp, 4
push eax
push 0
push 35
call ASTNEWCONV
add esp, 20
mov dword ptr [ebp-8], eax
.Lt_0140:
push 41
call HMATCH
add esp, 4
test eax, eax
jne .Lt_0143
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
.Lt_0143:
.Lt_0142:
jmp .Lt_0123
.Lt_0124:
mov eax, dword ptr [ebp-12]
add eax, 4294966903
cmp eax, 3
ja .Lt_0123
mov eax, dword ptr [ebp-12]
jmp dword ptr [.LT_0144+eax*4-1572]
.LT_0144:
.int .Lt_0126
.int .Lt_0132
.int .Lt_012B
.int .Lt_0132
.Lt_0123:
push dword ptr [ebp-8]
call CSTRIDXORMEMBERDEREF
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_0118:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CADDROFEXPRESSION, .-CADDROFEXPRESSION
.balign 16
fb_ctor__parserzexprzunary:
.type fb_ctor__parserzexprzunary, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__parserzexprzunary, .-fb_ctor__parserzexprzunary
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
HPPDEFINEDEXPR:
.type HPPDEFINEDEXPR, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_005F:
push 2
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
je .Lt_0062
push 0
push 0
push 6
call ERRREPORT
add esp, 12
jmp .Lt_0061
.Lt_0062:
push 2
call LEXSKIPTOKEN
add esp, 4
.Lt_0061:
push 0
lea eax, [ebp-8]
push eax
call CIDENTIFIER
add esp, 8
test eax, eax
setne bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-12], ebx
push 0
call LEXSKIPTOKEN
add esp, 4
push 41
call HMATCH
add esp, 4
test eax, eax
jne .Lt_0064
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
.Lt_0064:
.Lt_0063:
push 0
push 7
mov ebx, dword ptr [ebp-12]
mov eax, ebx
sar eax, 31
push eax
push ebx
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-4], eax
.Lt_0060:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HPPDEFINEDEXPR, .-HPPDEFINEDEXPR
.balign 16
HCAST:
.type HCAST, @function
push ebp
mov ebp, esp
sub esp, 36
push ebx
mov dword ptr [ebp-4], 0
.Lt_00BF:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
je .Lt_00C2
push 0
push 0
push 6
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
jmp .Lt_00C0
.Lt_00C2:
.Lt_00C1:
push 0
call LEXSKIPTOKEN
add esp, 4
push 1
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
lea eax, [ebp-28]
push eax
lea eax, [ebp-16]
push eax
lea eax, [ebp-8]
push eax
call CSYMBOLTYPE
add esp, 16
test eax, eax
jne .Lt_00C5
push 0
push 0
push 17
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push 44
call HSKIPUNTIL
add esp, 16
mov eax, dword ptr [ebp+8]
and eax, 4
je .Lt_00C7
mov dword ptr [ebp-8], 32
jmp .Lt_00C6
.Lt_00C7:
mov dword ptr [ebp-8], 7
.Lt_00C6:
mov dword ptr [ebp-16], 0
.Lt_00C5:
.Lt_00C4:
mov eax, dword ptr [ebp-8]
and eax, 480
je .Lt_00C8
mov dword ptr [ebp-32], 22
jmp .Lt_0147
.Lt_00C8:
mov eax, dword ptr [ebp-8]
and eax, 31
mov dword ptr [ebp-32], eax
.Lt_0147:
mov eax, dword ptr [ebp-32]
mov dword ptr [ebp-36], eax
jmp .Lt_00CB
.Lt_00CD:
push 0
push -1
push 24
call ERRREPORT
add esp, 12
mov eax, dword ptr [ebp+8]
and eax, 4
je .Lt_00CF
mov dword ptr [ebp-8], 32
jmp .Lt_00CE
.Lt_00CF:
mov dword ptr [ebp-8], 7
.Lt_00CE:
mov dword ptr [ebp-16], 0
jmp .Lt_00CA
.Lt_00D0:
mov eax, dword ptr [ebp+8]
and eax, 4
je .Lt_00D2
mov eax, dword ptr [ENV+176]
and eax, 16
test eax, eax
je .Lt_00D4
push 1
push 0
push 27
call ERRREPORTWARN
add esp, 12
.Lt_00D4:
.Lt_00D3:
.Lt_00D2:
.Lt_00D1:
jmp .Lt_00CA
.Lt_00D5:
mov eax, dword ptr [ebp+8]
or eax, 4
mov ebx, eax
mov dword ptr [ebp+8], ebx
jmp .Lt_00CA
.Lt_00D6:
mov ebx, dword ptr [ebp+8]
and ebx, 4
je .Lt_00D8
push 1
push 0
push 27
call ERRREPORTWARN
add esp, 12
.Lt_00D8:
.Lt_00D7:
jmp .Lt_00CA
.Lt_00CB:
cmp dword ptr [ebp-36], 22
ja .Lt_00D6
mov ebx, dword ptr [ebp-36]
jmp dword ptr [.LT_00D9+ebx*4]
.LT_00D9:
.int .Lt_00CD
.int .Lt_00D6
.int .Lt_00D6
.int .Lt_00D6
.int .Lt_00D6
.int .Lt_00D6
.int .Lt_00D6
.int .Lt_00D0
.int .Lt_00D0
.int .Lt_00D0
.int .Lt_00D0
.int .Lt_00D0
.int .Lt_00D0
.int .Lt_00D0
.int .Lt_00D6
.int .Lt_00D6
.int .Lt_00D6
.int .Lt_00CD
.int .Lt_00D6
.int .Lt_00D6
.int .Lt_00D6
.int .Lt_00D6
.int .Lt_00D5
.Lt_00CA:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
je .Lt_00DB
push 0
push 0
push 16
call ERRREPORT
add esp, 12
jmp .Lt_00DA
.Lt_00DB:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_00DA:
call CEXPRESSION
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 0
jne .Lt_00DD
push 0
push 0
push 9
call ERRREPORT
add esp, 12
push dword ptr [ebp-16]
push dword ptr [ebp-8]
call ASTNEWCONSTZ
add esp, 8
mov dword ptr [ebp-20], eax
.Lt_00DD:
.Lt_00DC:
mov eax, dword ptr [ebp+8]
or eax, 2
mov ebx, eax
mov dword ptr [ebp+8], ebx
lea ebx, [ebp-12]
push ebx
push dword ptr [ebp+8]
push dword ptr [ebp-20]
push dword ptr [ebp-16]
push dword ptr [ebp-8]
call ASTNEWCONV
add esp, 20
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 0
jne .Lt_00DF
cmp dword ptr [ebp-12], 0
jne .Lt_00E1
mov eax, dword ptr [ebp+8]
and eax, 4
je .Lt_00E3
mov dword ptr [ebp-12], 28
jmp .Lt_00E2
.Lt_00E3:
mov dword ptr [ebp-12], 20
.Lt_00E2:
.Lt_00E1:
.Lt_00E0:
push 0
push -1
push dword ptr [ebp-12]
call ERRREPORT
add esp, 12
push dword ptr [ebp-16]
push dword ptr [ebp-8]
call ASTNEWCONSTZ
add esp, 8
mov dword ptr [ebp-20], eax
.Lt_00DF:
.Lt_00DE:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_00E5
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
jmp .Lt_00E4
.Lt_00E5:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_00E4:
mov eax, dword ptr [ebp-20]
mov dword ptr [ebp-4], eax
.Lt_00C0:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HCAST, .-HCAST
.balign 16
HPROCPTRBODY:
.type HPROCPTRBODY, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_00EF:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
jne .Lt_00F2
push 0
call LEXSKIPTOKEN
add esp, 4
push 41
call HMATCH
add esp, 4
test eax, eax
jne .Lt_00F4
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
.Lt_00F4:
.Lt_00F3:
.Lt_00F2:
.Lt_00F1:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 1024
test ebx, ebx
je .Lt_00F6
cmp dword ptr [PARSER+152], 0
je .Lt_00F8
mov ebx, dword ptr [PARSER+152]
cmp dword ptr [ebx], 3
jne .Lt_00FA
push 0
push dword ptr [PARSER+152]
push dword ptr [ebp+12]
call SYMBFINDOVERLOADPROC
add esp, 12
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
je .Lt_00FC
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp+12], eax
.Lt_00FC:
.Lt_00FB:
.Lt_00FA:
.Lt_00F9:
.Lt_00F8:
.Lt_00F7:
.Lt_00F6:
.Lt_00F5:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 2048
test ebx, ebx
je .Lt_00FE
push 0
push 1
push 0
push dword ptr [ebp+12]
call SYMBGETFULLPROCNAME
add esp, 4
push eax
push 208
call ERRREPORTEX
add esp, 20
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-4], eax
jmp .Lt_00F0
.Lt_00FE:
.Lt_00FD:
push dword ptr [ebp+12]
call SYMBCHECKACCESS
add esp, 4
test eax, eax
jne .Lt_0100
push 0
push 1
push 0
push dword ptr [ebp+12]
call SYMBGETFULLPROCNAME
add esp, 4
push eax
push 201
call ERRREPORTEX
add esp, 20
.Lt_0100:
.Lt_00FF:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+96]
mov dword ptr [ebp-12], ebx
cmp dword ptr [ebp-12], 0
je .Lt_0102
push dword ptr [ebp+12]
call dword ptr [ebp-12]
add esp, 4
.Lt_0102:
.Lt_0101:
push dword ptr [ebp+12]
call ASTBUILDPROCADDROF
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_00F0:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HPROCPTRBODY, .-HPROCPTRBODY
.balign 16
HVARPTRBODY:
.type HVARPTRBODY, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
mov dword ptr [ebp-4], 0
.Lt_0103:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call CHIGHESTPRECEXPR
add esp, 8
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0106
push 0
push 0
push 14
call ERRREPORT
add esp, 12
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-4], eax
jmp .Lt_0104
.Lt_0106:
.Lt_0105:
push dword ptr [ebp-8]
call ASTSKIPNOCONVCAST
add esp, 4
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-16], ebx
jmp .Lt_0108
.Lt_010A:
jmp .Lt_0107
.Lt_010B:
mov ebx, dword ptr [ebp-12]
mov eax, dword ptr [ebx+12]
cmp dword ptr [eax+108], 0
jle .Lt_010D
push 0
push 0
push 24
call ERRREPORT
add esp, 12
push dword ptr [ebp-8]
call ASTDELTREE
add esp, 4
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-4], eax
jmp .Lt_0104
.Lt_010D:
.Lt_010C:
jmp .Lt_0107
.Lt_010E:
push 0
push 1
push 0
push offset Lt_010F
push 24
call ERRREPORTEX
add esp, 20
push dword ptr [ebp-8]
call ASTDELTREE
add esp, 4
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-4], eax
jmp .Lt_0104
jmp .Lt_0107
.Lt_0108:
mov eax, dword ptr [ebp-16]
add eax, 4294967286
cmp eax, 26
ja .Lt_010E
mov eax, dword ptr [ebp-16]
jmp dword ptr [.LT_0110+eax*4-40]
.LT_0110:
.int .Lt_010A
.int .Lt_010E
.int .Lt_010E
.int .Lt_010E
.int .Lt_010E
.int .Lt_010E
.int .Lt_010E
.int .Lt_010A
.int .Lt_010A
.int .Lt_010B
.int .Lt_010A
.int .Lt_010E
.int .Lt_010E
.int .Lt_010E
.int .Lt_010E
.int .Lt_010E
.int .Lt_010E
.int .Lt_010E
.int .Lt_010E
.int .Lt_010E
.int .Lt_010E
.int .Lt_010E
.int .Lt_010E
.int .Lt_010E
.int .Lt_010E
.int .Lt_010E
.int .Lt_010A
.Lt_0107:
lea eax, [ebp-20]
push eax
push dword ptr [ebp-8]
push 22
call SYMBFINDSELFUOPOVLPROC
add esp, 12
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 0
je .Lt_0112
push 0
push 0
push dword ptr [ebp-8]
push dword ptr [ebp-16]
call ASTBUILDCALL
add esp, 16
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0114
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-8], eax
.Lt_0114:
.Lt_0113:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
jmp .Lt_0104
jmp .Lt_0111
.Lt_0112:
cmp dword ptr [ebp-20], 0
je .Lt_0116
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-4], eax
jmp .Lt_0104
.Lt_0116:
.Lt_0115:
.Lt_0111:
push dword ptr [ebp-8]
call ASTNEWADDROF
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_0104:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HVARPTRBODY, .-HVARPTRBODY
	#fbc-1.01.0/src/compiler/parser-expr-unary.bas' compilation took 0.03040498669724911 secs

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
Lt_010F:	.ascii	"for @ or VARPTR\0"
.balign 4
Lt_013E:	.ascii	"for STRPTR\0"

.section .ctors, "aw", @progbits
.int fb_ctor__parserzexprzunary
