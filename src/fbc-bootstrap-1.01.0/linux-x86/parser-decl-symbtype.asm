	.intel_syntax noprefix

	#FreeBASIC-1.01.0-source/src/compiler/parser-decl-symbtype.bas' compilation started at 16:30:05 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl CCONSTINTEXPR
CCONSTINTEXPR:
.type CCONSTINTEXPR, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_0060:
cmp dword ptr [ebp+8], 0
jne .Lt_0063
push 0
push 0
push 9
call ERRREPORT
add esp, 12
push 0
push 7
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp+8], eax
.Lt_0063:
.Lt_0062:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
cmp ebx, 16
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_0065
push 0
push 0
push 11
call ERRREPORT
add esp, 12
push dword ptr [ebp+8]
call ASTDELTREE
add esp, 4
push 0
push 7
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp+8], eax
.Lt_0065:
.Lt_0064:
push dword ptr [ebp+8]
call ASTCONSTFLUSHTOINT
add esp, 4
mov dword ptr [ebp-8], eax
mov dword ptr [ebp-4], edx
.Lt_0061:
mov eax, dword ptr [ebp-8]
mov edx, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CCONSTINTEXPR, .-CCONSTINTEXPR
.balign 16

.globl CTYPEOREXPRESSION
CTYPEOREXPRESSION:
.type CTYPEOREXPRESSION, @function
push ebp
mov ebp, esp
sub esp, 28
push ebx
mov dword ptr [ebp-4], 0
.Lt_006F:
mov dword ptr [ebp-12], -1
push 0
push 1
call LEXGETLOOKAHEADCLASS
add esp, 8
cmp eax, 5
sete al
shr eax, 1
sbb eax, eax
test eax, eax
je .Lt_0071
push 0
push 1
call LEXGETLOOKAHEAD
add esp, 8
cmp eax, 42
setne al
shr eax, 1
sbb eax, eax
test eax, eax
setne al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-16], eax
jmp .Lt_008C
.Lt_0071:
mov dword ptr [ebp-16], 0
.Lt_008C:
cmp dword ptr [ebp-16], 0
je .Lt_0073
push 0
push 1
call LEXGETLOOKAHEAD
add esp, 8
cmp eax, 301
setne al
shr eax, 1
sbb eax, eax
test eax, eax
setne al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-20], eax
jmp .Lt_008D
.Lt_0073:
mov dword ptr [ebp-20], 0
.Lt_008D:
cmp dword ptr [ebp-20], 0
je .Lt_0076
mov dword ptr [ebp-12], 0
jmp .Lt_0075
.Lt_0076:
push 0
push 1
call LEXGETLOOKAHEAD
add esp, 8
mov dword ptr [ebp-24], eax
cmp dword ptr [ebp-24], 91
jne .Lt_0079
.Lt_007A:
mov dword ptr [ebp-12], 0
jmp .Lt_0077
.Lt_0079:
cmp dword ptr [ebp-24], 40
jne .Lt_007B
.Lt_007C:
push 0
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-28], eax
cmp dword ptr [ebp-28], 376
je .Lt_0080
.Lt_0081:
cmp dword ptr [ebp-28], 345
je .Lt_0080
.Lt_0082:
cmp dword ptr [ebp-28], 346
jne .Lt_007F
.Lt_0080:
jmp .Lt_007D
.Lt_007F:
mov dword ptr [ebp-12], 0
.Lt_0083:
.Lt_007D:
.Lt_007B:
.Lt_0077:
.Lt_0075:
mov eax, dword ptr [ebp+8]
and eax, dword ptr [ebp-12]
mov ebx, dword ptr [ENV+136]
cmp ebx, 3
sete bl
shr ebx, 1
sbb ebx, ebx
and eax, ebx
je .Lt_0085
mov dword ptr [ebp-12], 0
.Lt_0085:
.Lt_0084:
cmp dword ptr [ebp-12], 0
je .Lt_0087
push 0
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call CSYMBOLTYPE
add esp, 16
test eax, eax
je .Lt_0089
mov dword ptr [ebp-4], 0
jmp .Lt_0070
.Lt_0089:
.Lt_0088:
.Lt_0087:
.Lt_0086:
push -1
call CEXPRESSIONWITHNIDXARRAY
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_008B
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
.Lt_008B:
.Lt_008A:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0070:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CTYPEOREXPRESSION, .-CTYPEOREXPRESSION
.balign 16

.globl CTYPEOF
CTYPEOF:
.type CTYPEOF, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0094:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 0
call CTYPEOREXPRESSION
add esp, 16
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
jne .Lt_0097
jmp .Lt_0095
.Lt_0097:
.Lt_0096:
push dword ptr [ebp-4]
call ASTREMOVENIDXARRAY
add esp, 4
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [eax+4]
mov dword ptr [ebx], ecx
mov ecx, dword ptr [ebp-4]
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ecx+8]
mov dword ptr [ebx], eax
push dword ptr [ebp-4]
call ASTSIZEOF
add esp, 4
mov ebx, dword ptr [ebp+16]
mov dword ptr [ebx], eax
mov dword ptr [ebx+4], edx
push dword ptr [ebp-4]
call ASTDELTREE
add esp, 4
.Lt_0095:
pop ebx
mov esp, ebp
pop ebp
ret
.size CTYPEOF, .-CTYPEOF
.balign 16

.globl HINTEGERTYPEFROMBITSIZE
HINTEGERTYPEFROMBITSIZE:
.type HINTEGERTYPEFROMBITSIZE, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_0098:
mov dword ptr [ebp-8], 0
cmp dword ptr [ebp+12], 0
jne .Lt_009B
cmp dword ptr [ebp+8], 8
jne .Lt_009B
.Lt_00A6:
.Lt_009C:
mov dword ptr [ebp-8], 1
jmp .Lt_009A
.Lt_009B:
cmp dword ptr [ebp+12], 0
jne .Lt_009D
cmp dword ptr [ebp+8], 16
jne .Lt_009D
.Lt_00A7:
.Lt_009E:
mov dword ptr [ebp-8], 4
jmp .Lt_009A
.Lt_009D:
cmp dword ptr [ebp+12], 0
jne .Lt_009F
cmp dword ptr [ebp+8], 32
jne .Lt_009F
.Lt_00A8:
.Lt_00A0:
mov dword ptr [ebp-8], 10
jmp .Lt_009A
.Lt_009F:
cmp dword ptr [ebp+12], 0
jne .Lt_00A1
cmp dword ptr [ebp+8], 64
jne .Lt_00A1
.Lt_00A9:
.Lt_00A2:
mov dword ptr [ebp-8], 12
jmp .Lt_009A
.Lt_00A1:
push 0
push -1
push 309
call ERRREPORT
add esp, 12
mov dword ptr [ebp-8], 7
.Lt_00A3:
.Lt_009A:
cmp dword ptr [ebp+16], 0
je .Lt_00A5
push dword ptr [ebp-8]
call TYPETOUNSIGNED
add esp, 4
mov dword ptr [ebp-8], eax
.Lt_00A5:
.Lt_00A4:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0099:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size HINTEGERTYPEFROMBITSIZE, .-HINTEGERTYPEFROMBITSIZE
.balign 16

.globl CSYMBOLTYPE
CSYMBOLTYPE:
.type CSYMBOLTYPE, @function
push ebp
mov ebp, esp
sub esp, 40
push ebx
mov dword ptr [ebp-4], 0
.Lt_00AA:
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+16]
mov dword ptr [eax], 0
mov dword ptr [eax+4], 0
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], -2147483648
mov eax, dword ptr [ebp+12]
mov dword ptr [eax], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-20], 0
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 376
jne .Lt_00AD
push 0
call LEXSKIPTOKEN
add esp, 4
push 40
call HMATCH
add esp, 4
test eax, eax
jne .Lt_00AF
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
.Lt_00AF:
.Lt_00AE:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call CTYPEOF
add esp, 12
push 41
call HMATCH
add esp, 4
test eax, eax
jne .Lt_00B1
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
.Lt_00B1:
.Lt_00B0:
jmp .Lt_00AC
.Lt_00AD:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 335
jne .Lt_00B3
push 0
call LEXSKIPTOKEN
add esp, 4
mov dword ptr [ebp-16], -1
.Lt_00B3:
.Lt_00B2:
push 374
call HMATCH
add esp, 4
mov dword ptr [ebp-8], eax
push 0
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-24], eax
jmp .Lt_00B5
.Lt_00B7:
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 0
jmp .Lt_00B4
.Lt_00B8:
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 1
jmp .Lt_00B4
.Lt_00B9:
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 2
jmp .Lt_00B4
.Lt_00BA:
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 4
jmp .Lt_00B4
.Lt_00BB:
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 5
jmp .Lt_00B4
.Lt_00BC:
push 0
call LEXSKIPTOKEN
add esp, 4
push 301
call HMATCH
add esp, 4
test eax, eax
je .Lt_00BE
push 0
push 0
call CGTINPARENSONLYEXPR
push eax
call CCONSTINTEXPR
add esp, 12
mov ebx, dword ptr [ebp+16]
mov dword ptr [ebx], eax
mov dword ptr [ebx+4], edx
push 0
mov eax, dword ptr [ebp+16]
push dword ptr [eax+4]
push dword ptr [eax]
call HINTEGERTYPEFROMBITSIZE
add esp, 12
mov edx, dword ptr [ebp+8]
mov dword ptr [edx], eax
push 300
call HMATCH
add esp, 4
test eax, eax
jne .Lt_00C0
push 0
push -1
push 308
call ERRREPORT
add esp, 12
.Lt_00C0:
.Lt_00BF:
jmp .Lt_00BD
.Lt_00BE:
mov eax, dword ptr [ebp+8]
mov edx, dword ptr [ENV+844]
mov dword ptr [eax], edx
.Lt_00BD:
jmp .Lt_00B4
.Lt_00C1:
push 0
call LEXSKIPTOKEN
add esp, 4
push 301
call HMATCH
add esp, 4
test eax, eax
je .Lt_00C3
push 0
push 0
call CGTINPARENSONLYEXPR
push eax
call CCONSTINTEXPR
add esp, 12
mov ebx, dword ptr [ebp+16]
mov dword ptr [ebx], eax
mov dword ptr [ebx+4], edx
push -1
mov eax, dword ptr [ebp+16]
push dword ptr [eax+4]
push dword ptr [eax]
call HINTEGERTYPEFROMBITSIZE
add esp, 12
mov edx, dword ptr [ebp+8]
mov dword ptr [edx], eax
push 300
call HMATCH
add esp, 4
test eax, eax
jne .Lt_00C5
push 0
push -1
push 308
call ERRREPORT
add esp, 12
.Lt_00C5:
.Lt_00C4:
jmp .Lt_00C2
.Lt_00C3:
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 8
.Lt_00C2:
jmp .Lt_00B4
.Lt_00C6:
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 10
jmp .Lt_00B4
.Lt_00C7:
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 11
jmp .Lt_00B4
.Lt_00C8:
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 12
jmp .Lt_00B4
.Lt_00C9:
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 13
jmp .Lt_00B4
.Lt_00CA:
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 14
jmp .Lt_00B4
.Lt_00CB:
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 15
jmp .Lt_00B4
.Lt_00CC:
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 16
jmp .Lt_00B4
.Lt_00CD:
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 3
jmp .Lt_00B4
.Lt_00CE:
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 6
jmp .Lt_00B4
.Lt_00CF:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 346
sete al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-12], eax
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 52
inc dword ptr [ebp-20]
push dword ptr [ebp-12]
call CSYMBOLTYPEFUNCPTR
add esp, 4
mov edx, dword ptr [ebp+12]
mov dword ptr [edx], eax
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax], 0
jne .Lt_00D1
jmp .Lt_00AB
.Lt_00D1:
.Lt_00D0:
jmp .Lt_00B4
.Lt_00B5:
mov eax, dword ptr [ebp-24]
add eax, 4294966951
cmp eax, 26
ja .Lt_00B4
mov eax, dword ptr [ebp-24]
jmp dword ptr [.LT_00D2+eax*4-1380]
.LT_00D2:
.int .Lt_00CF
.int .Lt_00CF
.int .Lt_00B4
.int .Lt_00B4
.int .Lt_00B4
.int .Lt_00B4
.int .Lt_00B4
.int .Lt_00B4
.int .Lt_00B4
.int .Lt_00B4
.int .Lt_00B4
.int .Lt_00B8
.int .Lt_00B9
.int .Lt_00BA
.int .Lt_00BB
.int .Lt_00BC
.int .Lt_00C1
.int .Lt_00C6
.int .Lt_00C7
.int .Lt_00C8
.int .Lt_00C9
.int .Lt_00CA
.int .Lt_00CB
.int .Lt_00CC
.int .Lt_00CD
.int .Lt_00CE
.int .Lt_00B7
.Lt_00B4:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], -2147483648
je .Lt_00D4
mov eax, dword ptr [ebp+8]
mov edx, dword ptr [eax]
and edx, 511
mov dword ptr [ebp-24], edx
cmp dword ptr [ebp-24], 3
je .Lt_00D8
.Lt_00D9:
cmp dword ptr [ebp-24], 6
jne .Lt_00D7
.Lt_00D8:
mov edx, dword ptr [ebp+16]
mov dword ptr [edx], 0
mov dword ptr [edx+4], 0
jmp .Lt_00D5
.Lt_00D7:
mov edx, dword ptr [ebp+8]
mov eax, dword ptr [edx]
and eax, 480
je .Lt_00DB
mov dword ptr [ebp-28], 22
jmp .Lt_0146
.Lt_00DB:
mov eax, dword ptr [ebp+8]
mov edx, dword ptr [eax]
and edx, 31
mov dword ptr [ebp-28], edx
.Lt_0146:
mov edx, dword ptr [ebp-28]
imul edx, 28
mov ebx, dword ptr [SYMB_DTYPETB+edx+4]
mov eax, ebx
sar eax, 31
mov edx, dword ptr [ebp+16]
mov dword ptr [edx], ebx
mov dword ptr [edx+4], eax
.Lt_00DA:
.Lt_00D5:
jmp .Lt_00D3
.Lt_00D4:
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-32], -1
cmp dword ptr [PARSER+52], 0
je .Lt_00DE
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 46
jne .Lt_00E0
push 64
push 1
call LEXGETLOOKAHEAD
add esp, 8
cmp eax, 46
sete al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-32], eax
.Lt_00E0:
.Lt_00DF:
.Lt_00DE:
.Lt_00DD:
cmp dword ptr [ebp-32], 0
je .Lt_00E2
push 50
lea eax, [ebp-28]
push eax
call CIDENTIFIER
add esp, 8
mov dword ptr [ebp-24], eax
.Lt_00E2:
.Lt_00E1:
cmp dword ptr [ebp-24], 0
je .Lt_00E4
.Lt_00E5:
mov eax, dword ptr [ebp-24]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-36], ebx
.Lt_00E8:
mov ebx, dword ptr [ebp-36]
mov eax, dword ptr [ebx]
mov dword ptr [ebp-40], eax
cmp dword ptr [ebp-40], 10
jne .Lt_00ED
.Lt_00EE:
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 18
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [ebp-36]
mov dword ptr [eax], ebx
mov ebx, dword ptr [ebp-36]
mov eax, dword ptr [ebp+16]
mov ecx, dword ptr [ebx+36]
mov edx, dword ptr [ebx+40]
mov dword ptr [eax], ecx
mov dword ptr [eax+4], edx
jmp .Lt_00E6
jmp .Lt_00EB
.Lt_00ED:
cmp dword ptr [ebp-40], 9
jne .Lt_00EF
.Lt_00F0:
push 0
call LEXSKIPTOKEN
add esp, 4
mov ecx, dword ptr [ebp+8]
mov dword ptr [ecx], 9
mov ecx, dword ptr [ebp+12]
mov edx, dword ptr [ebp-36]
mov dword ptr [ecx], edx
mov ecx, dword ptr [SYMB_DTYPETB+256]
mov edx, ecx
sar edx, 31
mov eax, dword ptr [ebp+16]
mov dword ptr [eax], ecx
mov dword ptr [eax+4], edx
jmp .Lt_00E6
jmp .Lt_00EB
.Lt_00EF:
cmp dword ptr [ebp-40], 13
jne .Lt_00F1
.Lt_00F2:
push 0
call LEXSKIPTOKEN
add esp, 4
mov ecx, dword ptr [ebp-36]
mov edx, dword ptr [ebp+8]
mov eax, dword ptr [ecx+24]
mov dword ptr [edx], eax
mov eax, dword ptr [ebp-36]
mov edx, dword ptr [ebp+12]
mov ecx, dword ptr [eax+28]
mov dword ptr [edx], ecx
mov ecx, dword ptr [ebp-36]
mov edx, dword ptr [ebp+16]
mov ebx, dword ptr [ecx+36]
mov eax, dword ptr [ecx+40]
mov dword ptr [edx], ebx
mov dword ptr [edx+4], eax
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx]
and eax, 480
sar eax, 5
add dword ptr [ebp-20], eax
jmp .Lt_00E6
.Lt_00F1:
.Lt_00EB:
mov eax, dword ptr [ebp-36]
mov ebx, dword ptr [eax+144]
mov dword ptr [ebp-36], ebx
.Lt_00EA:
cmp dword ptr [ebp-36], 0
jne .Lt_00E8
.Lt_00E9:
mov ebx, dword ptr [ebp-24]
mov eax, dword ptr [ebx+4]
mov dword ptr [ebp-24], eax
.Lt_00E7:
cmp dword ptr [ebp-24], 0
jne .Lt_00E5
.Lt_00E6:
.Lt_00E4:
.Lt_00E3:
.Lt_00D3:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], -2147483648
jne .Lt_00F4
cmp dword ptr [ebp-8], 0
je .Lt_00F6
push 0
push 0
push 17
call ERRREPORT
add esp, 12
.Lt_00F6:
.Lt_00F5:
cmp dword ptr [ebp-16], 0
je .Lt_00F8
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 512
.Lt_00F8:
.Lt_00F7:
mov dword ptr [ebp-4], 0
jmp .Lt_00AB
.Lt_00F4:
.Lt_00F3:
cmp dword ptr [ebp-8], 0
je .Lt_00FA
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
and ebx, 480
je .Lt_00FB
mov dword ptr [ebp-24], 22
jmp .Lt_0147
.Lt_00FB:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx]
and eax, 31
mov dword ptr [ebp-24], eax
.Lt_0147:
mov eax, dword ptr [ebp-24]
mov dword ptr [ebp-28], eax
jmp .Lt_00FE
.Lt_0100:
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 2
jmp .Lt_00FD
.Lt_0101:
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 5
jmp .Lt_00FD
.Lt_0102:
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 8
jmp .Lt_00FD
.Lt_0103:
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 11
jmp .Lt_00FD
.Lt_0104:
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 13
jmp .Lt_00FD
.Lt_0105:
push 0
push -1
push 17
call ERRREPORT
add esp, 12
jmp .Lt_00FD
.Lt_00FE:
mov eax, dword ptr [ebp-28]
add eax, 4294967295
cmp eax, 11
ja .Lt_0105
mov eax, dword ptr [ebp-28]
jmp dword ptr [.LT_0106+eax*4-4]
.LT_0106:
.int .Lt_0100
.int .Lt_0105
.int .Lt_0105
.int .Lt_0101
.int .Lt_0105
.int .Lt_0105
.int .Lt_0102
.int .Lt_0105
.int .Lt_0105
.int .Lt_0103
.int .Lt_0105
.int .Lt_0104
.Lt_00FD:
.Lt_00FA:
.Lt_00F9:
.Lt_00AC:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 42
jne .Lt_0108
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
push 0
call CEQINPARENSONLYEXPR
push eax
call CCONSTINTEXPR
add esp, 12
mov ebx, dword ptr [ebp+16]
mov dword ptr [ebx], eax
mov dword ptr [ebx+4], edx
mov eax, dword ptr [ebp+8]
mov edx, dword ptr [eax]
and edx, 480
je .Lt_0109
mov dword ptr [ebp-24], 22
jmp .Lt_0148
.Lt_0109:
mov edx, dword ptr [ebp+8]
mov eax, dword ptr [edx]
and eax, 31
mov dword ptr [ebp-24], eax
.Lt_0148:
mov eax, dword ptr [ebp-24]
mov dword ptr [ebp-28], eax
jmp .Lt_010C
.Lt_010E:
mov eax, dword ptr [ebp+16]
add dword ptr [eax], 1
adc dword ptr [eax+4], 0
mov eax, dword ptr [ebp+16]
cmp dword ptr [eax+4], 0
jg .Lt_0110
jl .Lt_014F
cmp dword ptr [eax], 1
ja .Lt_0110
.Lt_014F:
push 0
push -1
push 17
call ERRREPORT
add esp, 12
mov eax, dword ptr [ebp+16]
mov dword ptr [eax], 2
mov dword ptr [eax+4], 0
.Lt_0110:
.Lt_010F:
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 17
jmp .Lt_010B
.Lt_0111:
mov eax, dword ptr [ebp+16]
cmp dword ptr [eax+4], 0
jg .Lt_0113
jl .Lt_0150
cmp dword ptr [eax], 1
jae .Lt_0113
.Lt_0150:
push 0
push -1
push 17
call ERRREPORT
add esp, 12
mov eax, dword ptr [ebp+16]
mov dword ptr [eax], 1
mov dword ptr [eax+4], 0
.Lt_0113:
.Lt_0112:
mov eax, dword ptr [ebp+8]
mov edx, dword ptr [eax]
and edx, 480
je .Lt_0114
mov dword ptr [ebp-32], 22
jmp .Lt_0149
.Lt_0114:
mov edx, dword ptr [ebp+8]
mov eax, dword ptr [edx]
and eax, 31
mov dword ptr [ebp-32], eax
.Lt_0149:
cmp dword ptr [ebp-32], 6
jne .Lt_0117
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [SYMB_DTYPETB+172]
mov edx, ebx
sar edx, 31
push edx
push ebx
push dword ptr [eax+4]
push dword ptr [eax]
push edx
push eax
mov eax, [esp+8]
mul dword ptr [esp+16]
xchg eax, [esp+8]
imul eax, [esp+20]
add eax, edx
mov edx, [esp+12]
imul edx, [esp+16]
add edx, eax
mov [esp+12], edx
pop eax
pop edx
pop dword ptr [eax]
pop dword ptr [eax+4]
add esp, 8
.Lt_0117:
.Lt_0116:
jmp .Lt_010B
.Lt_0118:
push 0
push -1
push 17
call ERRREPORT
add esp, 12
jmp .Lt_010B
.Lt_010C:
mov ebx, dword ptr [ebp-28]
add ebx, 4294967293
cmp ebx, 13
ja .Lt_0118
mov ebx, dword ptr [ebp-28]
jmp dword ptr [.LT_0119+ebx*4-12]
.LT_0119:
.int .Lt_0111
.int .Lt_0118
.int .Lt_0118
.int .Lt_0111
.int .Lt_0118
.int .Lt_0118
.int .Lt_0118
.int .Lt_0118
.int .Lt_0118
.int .Lt_0118
.int .Lt_0118
.int .Lt_0118
.int .Lt_0118
.int .Lt_010E
.Lt_010B:
cmp dword ptr [ebp-16], 0
je .Lt_011B
mov ebx, dword ptr [ebp+8]
or dword ptr [ebx], 512
.Lt_011B:
.Lt_011A:
jmp .Lt_0107
.Lt_0108:
cmp dword ptr [ebp-16], 0
je .Lt_011D
mov ebx, dword ptr [ebp+8]
or dword ptr [ebx], 512
.Lt_011D:
.Lt_011C:
.Lt_011E:
push 0
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-24], eax
jmp .Lt_0122
.Lt_0124:
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-28], eax
cmp dword ptr [ebp-28], 372
je .Lt_0128
.Lt_0129:
cmp dword ptr [ebp-28], 373
jne .Lt_0127
.Lt_0128:
cmp dword ptr [ebp-20], 8
jl .Lt_012B
push 0
push 0
push 273
call ERRREPORT
add esp, 12
jmp .Lt_012A
.Lt_012B:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
and ebx, 31
mov eax, dword ptr [ebp+8]
mov edx, dword ptr [eax]
and edx, 480
add edx, 32
or ebx, edx
mov edx, dword ptr [ebp+8]
mov eax, dword ptr [edx]
and eax, 261632
sal eax, 1
or ebx, eax
or ebx, 512
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], ebx
inc dword ptr [ebp-20]
.Lt_012A:
push 0
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_0125
.Lt_0127:
push 0
push 0
push 272
call ERRREPORT
add esp, 12
jmp .Lt_011F
.Lt_012C:
.Lt_0125:
jmp .Lt_0121
.Lt_012D:
cmp dword ptr [ebp-20], 8
jl .Lt_012F
push 0
push 0
push 273
call ERRREPORT
add esp, 12
jmp .Lt_012E
.Lt_012F:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx]
and eax, 31
mov ebx, dword ptr [ebp+8]
mov edx, dword ptr [ebx]
and edx, 480
add edx, 32
or eax, edx
mov edx, dword ptr [ebp+8]
mov ebx, dword ptr [edx]
and ebx, 261632
sal ebx, 1
or eax, ebx
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx], eax
inc dword ptr [ebp-20]
.Lt_012E:
push 0
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_0121
.Lt_0130:
jmp .Lt_011F
jmp .Lt_0121
.Lt_0122:
mov eax, dword ptr [ebp-24]
add eax, 4294966961
cmp eax, 38
ja .Lt_0130
mov eax, dword ptr [ebp-24]
jmp dword ptr [.LT_0131+eax*4-1340]
.LT_0131:
.int .Lt_0124
.int .Lt_0130
.int .Lt_0130
.int .Lt_0130
.int .Lt_0130
.int .Lt_0130
.int .Lt_0130
.int .Lt_0130
.int .Lt_0130
.int .Lt_0130
.int .Lt_0130
.int .Lt_0130
.int .Lt_0130
.int .Lt_0130
.int .Lt_0130
.int .Lt_0130
.int .Lt_0130
.int .Lt_0130
.int .Lt_0130
.int .Lt_0130
.int .Lt_0130
.int .Lt_0130
.int .Lt_0130
.int .Lt_0130
.int .Lt_0130
.int .Lt_0130
.int .Lt_0130
.int .Lt_0130
.int .Lt_0130
.int .Lt_0130
.int .Lt_0130
.int .Lt_0130
.int .Lt_0130
.int .Lt_0130
.int .Lt_0130
.int .Lt_0130
.int .Lt_0130
.int .Lt_012D
.int .Lt_012D
.Lt_0121:
.Lt_0120:
jmp .Lt_011E
.Lt_011F:
.Lt_0107:
cmp dword ptr [ebp-20], 0
jle .Lt_0133
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
and ebx, 480
je .Lt_0134
mov dword ptr [ebp-24], 22
jmp .Lt_014A
.Lt_0134:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx]
and eax, 31
mov dword ptr [ebp-24], eax
.Lt_014A:
mov eax, dword ptr [ebp-24]
imul eax, 28
mov edx, dword ptr [SYMB_DTYPETB+eax+4]
mov ebx, edx
sar ebx, 31
mov eax, dword ptr [ebp+16]
mov dword ptr [eax], edx
mov dword ptr [eax+4], ebx
jmp .Lt_0132
.Lt_0133:
mov edx, dword ptr [ebp+8]
mov ebx, dword ptr [edx]
and ebx, 480
je .Lt_0136
mov dword ptr [ebp-24], 22
jmp .Lt_014B
.Lt_0136:
mov ebx, dword ptr [ebp+8]
mov edx, dword ptr [ebx]
and edx, 31
mov dword ptr [ebp-24], edx
.Lt_014B:
cmp dword ptr [ebp-24], 21
jne .Lt_0139
mov edx, dword ptr [ebp+20]
and edx, 2
test edx, edx
jne .Lt_013B
push 0
push -1
push 70
call ERRREPORT
add esp, 12
mov edx, dword ptr [ebp+8]
mov dword ptr [edx], 32
mov edx, dword ptr [ebp+12]
mov dword ptr [edx], 0
.Lt_013B:
.Lt_013A:
jmp .Lt_0138
.Lt_0139:
mov edx, dword ptr [ebp+16]
cmp dword ptr [edx+4], 0
jg .Lt_013C
jl .Lt_0151
cmp dword ptr [edx], 0
ja .Lt_013C
.Lt_0151:
mov edx, dword ptr [ebp+8]
mov ebx, dword ptr [edx]
and ebx, 511
mov dword ptr [ebp-28], ebx
cmp dword ptr [ebp-28], 3
je .Lt_0140
.Lt_0141:
cmp dword ptr [ebp-28], 6
jne .Lt_013F
.Lt_0140:
mov ebx, dword ptr [ebp+20]
and ebx, 1
test ebx, ebx
je .Lt_0143
push 0
push 0
push 28
call ERRREPORT
add esp, 12
mov ebx, dword ptr [ebp+8]
mov edx, dword ptr [ebx]
and edx, 31
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx]
and eax, 480
add eax, 32
or edx, eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
and ebx, 261632
sal ebx, 1
or edx, ebx
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx], edx
.Lt_0143:
.Lt_0142:
mov edx, dword ptr [ebp+8]
mov ebx, dword ptr [edx]
and ebx, 480
je .Lt_0144
mov dword ptr [ebp-32], 22
jmp .Lt_014C
.Lt_0144:
mov ebx, dword ptr [ebp+8]
mov edx, dword ptr [ebx]
and edx, 31
mov dword ptr [ebp-32], edx
.Lt_014C:
mov edx, dword ptr [ebp-32]
imul edx, 28
mov eax, dword ptr [SYMB_DTYPETB+edx+4]
mov ebx, eax
sar ebx, 31
mov edx, dword ptr [ebp+16]
mov dword ptr [edx], eax
mov dword ptr [edx+4], ebx
.Lt_013F:
.Lt_013D:
.Lt_013C:
.Lt_0138:
.Lt_0132:
mov dword ptr [ebp-4], -1
.Lt_00AB:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CSYMBOLTYPE, .-CSYMBOLTYPE
.balign 16
fb_ctor__parserzdeclzsymbtype:
.type fb_ctor__parserzdeclzsymbtype, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__parserzdeclzsymbtype, .-fb_ctor__parserzdeclzsymbtype
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
CSYMBOLTYPEFUNCPTR:
.type CSYMBOLTYPEFUNCPTR, @function
push ebp
mov ebp, esp
sub esp, 24
mov dword ptr [ebp-4], 0
.Lt_0067:
mov dword ptr [ebp-4], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-24], 0
push -1
call CPROCCALLINGCONV
add esp, 4
mov dword ptr [ebp-12], eax
push 0
call SYMBPREADDPROC
add esp, 4
mov dword ptr [ebp-20], eax
push -1
push dword ptr [ebp-12]
push dword ptr [ebp-20]
push 0
call CPARAMETERS
add esp, 16
push dword ptr [ebp+8]
lea eax, [ebp-16]
push eax
call CBYREFATTRIBUTE
add esp, 8
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 375
jne .Lt_006A
cmp dword ptr [ebp+8], 0
jne .Lt_006C
push 0
push 0
push 17
call ERRREPORT
add esp, 12
mov dword ptr [ebp-8], 0
jmp .Lt_006B
.Lt_006C:
lea eax, [ebp-24]
push eax
lea eax, [ebp-8]
push eax
push -1
push dword ptr [ebp-20]
push dword ptr [ebp-16]
call CPROCRETTYPE
add esp, 20
.Lt_006B:
jmp .Lt_0069
.Lt_006A:
cmp dword ptr [ebp+8], 0
je .Lt_006E
push 0
push 0
push 67
call ERRREPORT
add esp, 12
mov dword ptr [ebp-8], 7
jmp .Lt_006D
.Lt_006E:
mov dword ptr [ebp-8], 0
.Lt_006D:
.Lt_0069:
push dword ptr [ebp-12]
push dword ptr [ebp-16]
push dword ptr [ebp-24]
push dword ptr [ebp-8]
push dword ptr [ebp-20]
call SYMBADDPROCPTR
add esp, 20
mov dword ptr [ebp-4], eax
.Lt_0068:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size CSYMBOLTYPEFUNCPTR, .-CSYMBOLTYPEFUNCPTR
	#FreeBASIC-1.01.0-source/src/compiler/parser-decl-symbtype.bas' compilation took 0.0432420652359724 secs

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
.int fb_ctor__parserzdeclzsymbtype
