	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/parser-quirk.bas' compilation started at 15:27:36 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl CQUIRKSTMT
CQUIRKSTMT:
.type CQUIRKSTMT, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_005F:
mov dword ptr [ebp-4], 0
cmp dword ptr [ebp+8], -1
jne .Lt_0062
push 0
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp+8], eax
push 0
call LEXGETCLASS
add esp, 4
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 1
je .Lt_0066
.Lt_0067:
cmp dword ptr [ebp-12], 2
jne .Lt_0065
.Lt_0066:
cmp dword ptr [ENV+136], 3
jne .Lt_0069
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [eax+16532]
cmp dword ptr [ebx+8], -2147483648
je .Lt_006B
mov dword ptr [ebp-4], 0
jmp .Lt_0060
.Lt_006B:
.Lt_006A:
.Lt_0069:
.Lt_0068:
jmp .Lt_0063
.Lt_0065:
cmp dword ptr [ebp+8], 63
jne .Lt_006E
push 1
call CCOMPSTMTISALLOWED
add esp, 4
test eax, eax
jne .Lt_0070
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_0060
.Lt_0070:
.Lt_006F:
push dword ptr [ebp+8]
call CPRINTSTMT
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_006E:
.Lt_006D:
jmp .Lt_0060
.Lt_006C:
.Lt_0063:
.Lt_0062:
.Lt_0061:
mov dword ptr [ebp-8], 0
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-12], eax
jmp .Lt_0072
.Lt_0074:
push 1
call CCOMPSTMTISALLOWED
add esp, 4
test eax, eax
jne .Lt_0076
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_0060
.Lt_0076:
.Lt_0075:
push dword ptr [ebp+8]
call CGOTOSTMT
add esp, 4
mov dword ptr [ebp-8], eax
jmp .Lt_0071
.Lt_0077:
push 1
call CCOMPSTMTISALLOWED
add esp, 4
test eax, eax
jne .Lt_0079
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_0060
.Lt_0079:
.Lt_0078:
push dword ptr [ebp+8]
call CPRINTSTMT
add esp, 4
mov dword ptr [ebp-8], eax
jmp .Lt_0071
.Lt_007A:
push 1
call CCOMPSTMTISALLOWED
add esp, 4
test eax, eax
jne .Lt_007C
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_0060
.Lt_007C:
.Lt_007B:
push dword ptr [ebp+8]
call CDATASTMT
add esp, 4
mov dword ptr [ebp-8], eax
jmp .Lt_0071
.Lt_007D:
push 1
call CCOMPSTMTISALLOWED
add esp, 4
test eax, eax
jne .Lt_007F
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_0060
.Lt_007F:
.Lt_007E:
call CERASESTMT
mov dword ptr [ebp-8], eax
jmp .Lt_0071
.Lt_0080:
push 1
call CCOMPSTMTISALLOWED
add esp, 4
test eax, eax
jne .Lt_0082
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_0060
.Lt_0082:
.Lt_0081:
call CSWAPSTMT
mov dword ptr [ebp-8], eax
jmp .Lt_0071
.Lt_0083:
push 1
call CCOMPSTMTISALLOWED
add esp, 4
test eax, eax
jne .Lt_0085
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_0060
.Lt_0085:
.Lt_0084:
call CLINEINPUTSTMT
mov dword ptr [ebp-8], eax
jmp .Lt_0071
.Lt_0086:
push 1
call CCOMPSTMTISALLOWED
add esp, 4
test eax, eax
jne .Lt_0088
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_0060
.Lt_0088:
.Lt_0087:
call CINPUTSTMT
mov dword ptr [ebp-8], eax
jmp .Lt_0071
.Lt_0089:
push 1
call CCOMPSTMTISALLOWED
add esp, 4
test eax, eax
jne .Lt_008B
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_0060
.Lt_008B:
.Lt_008A:
call CPOKESTMT
mov dword ptr [ebp-8], eax
jmp .Lt_0071
.Lt_008C:
push 1
call CCOMPSTMTISALLOWED
add esp, 4
test eax, eax
jne .Lt_008E
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_0060
.Lt_008E:
.Lt_008D:
push dword ptr [ebp+8]
call CFILESTMT
add esp, 4
mov dword ptr [ebp-8], eax
jmp .Lt_0071
.Lt_008F:
push 1
call CCOMPSTMTISALLOWED
add esp, 4
test eax, eax
jne .Lt_0091
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_0060
.Lt_0091:
.Lt_0090:
call CONSTMT
mov dword ptr [ebp-8], eax
jmp .Lt_0071
.Lt_0092:
push 1
call CCOMPSTMTISALLOWED
add esp, 4
test eax, eax
jne .Lt_0094
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_0060
.Lt_0094:
.Lt_0093:
call CWRITESTMT
mov dword ptr [ebp-8], eax
jmp .Lt_0071
.Lt_0095:
push 1
call CCOMPSTMTISALLOWED
add esp, 4
test eax, eax
jne .Lt_0097
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_0060
.Lt_0097:
.Lt_0096:
call CERRORSTMT
mov dword ptr [ebp-8], eax
jmp .Lt_0071
.Lt_0098:
push 1
call CCOMPSTMTISALLOWED
add esp, 4
test eax, eax
jne .Lt_009A
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_0060
.Lt_009A:
.Lt_0099:
call CERRSETSTMT
mov dword ptr [ebp-8], eax
jmp .Lt_0071
.Lt_009B:
push 1
call CCOMPSTMTISALLOWED
add esp, 4
test eax, eax
jne .Lt_009D
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_0060
.Lt_009D:
.Lt_009C:
push 0
call CVIEWSTMT
add esp, 4
test eax, eax
setne bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-8], ebx
jmp .Lt_0071
.Lt_009E:
push 1
call CCOMPSTMTISALLOWED
add esp, 4
test eax, eax
jne .Lt_00A0
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_0060
.Lt_00A0:
.Lt_009F:
call CMIDSTMT
mov dword ptr [ebp-8], eax
jmp .Lt_0071
.Lt_00A1:
push 1
call CCOMPSTMTISALLOWED
add esp, 4
test eax, eax
jne .Lt_00A3
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_0060
.Lt_00A3:
.Lt_00A2:
push dword ptr [ebp+8]
call CLRSETSTMT
add esp, 4
mov dword ptr [ebp-8], eax
jmp .Lt_0071
.Lt_00A4:
push 1
call CCOMPSTMTISALLOWED
add esp, 4
test eax, eax
jne .Lt_00A6
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_0060
.Lt_00A6:
.Lt_00A5:
push 0
call CWIDTHSTMT
add esp, 4
test eax, eax
setne bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-8], ebx
jmp .Lt_0071
.Lt_00A7:
push 1
call CCOMPSTMTISALLOWED
add esp, 4
test eax, eax
jne .Lt_00A9
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_0060
.Lt_00A9:
.Lt_00A8:
push 0
call CCOLORSTMT
add esp, 4
test eax, eax
setne bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-8], ebx
jmp .Lt_0071
.Lt_00AA:
cmp dword ptr [ENV+136], 3
jne .Lt_00AC
push 0
call CCOMMENT
add esp, 4
mov dword ptr [ebp-8], eax
.Lt_00AC:
.Lt_00AB:
jmp .Lt_0071
.Lt_0072:
mov eax, dword ptr [ebp-12]
add eax, 4294967036
cmp eax, 238
ja .Lt_0071
mov eax, dword ptr [ebp-12]
jmp dword ptr [.LT_00AD+eax*4-1040]
.LT_00AD:
.int .Lt_00AA
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0074
.int .Lt_0074
.int .Lt_0074
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_00A1
.int .Lt_00A1
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_009E
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0077
.int .Lt_0077
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0089
.int .Lt_0080
.int .Lt_008C
.int .Lt_008C
.int .Lt_008C
.int .Lt_008C
.int .Lt_008C
.int .Lt_0071
.int .Lt_0092
.int .Lt_008C
.int .Lt_0086
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_008C
.int .Lt_0071
.int .Lt_0071
.int .Lt_0083
.int .Lt_009B
.int .Lt_008C
.int .Lt_00A4
.int .Lt_00A7
.int .Lt_0071
.int .Lt_007D
.int .Lt_0071
.int .Lt_0071
.int .Lt_0071
.int .Lt_008F
.int .Lt_0095
.int .Lt_0071
.int .Lt_0098
.int .Lt_0074
.Lt_0071:
cmp dword ptr [ebp-8], 0
jne .Lt_00AF
push dword ptr [ebp+8]
call CGFXSTMT
add esp, 4
mov dword ptr [ebp-8], eax
.Lt_00AF:
.Lt_00AE:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0060:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CQUIRKSTMT, .-CQUIRKSTMT
.balign 16

.globl CQUIRKFUNCTION
CQUIRKFUNCTION:
.type CQUIRKFUNCTION, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
push esi
mov dword ptr [ebp-4], 0
.Lt_00B3:
mov dword ptr [ebp-8], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+52]
mov dword ptr [ebp-12], ebx
mov ebx, dword ptr [PARSER+144]
and ebx, 1024
test ebx, ebx
je .Lt_00B6
push 0
push 1
call LEXGETLOOKAHEAD
add esp, 8
cmp eax, 40
setne al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp-12]
cmp ebx, 336
setne bl
shr ebx, 1
sbb ebx, ebx
push 0
push 1
mov esi, eax
call LEXGETLOOKAHEAD
add esp, 8
cmp eax, 301
setne al
shr eax, 1
sbb eax, eax
or ebx, eax
and esi, ebx
je .Lt_00B8
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
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
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-24]
call ASTNEWCONSTSTR
add esp, 4
mov dword ptr [ebp-8], eax
lea eax, [ebp-24]
push eax
call fb_StrDelete
add esp, 4
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
jmp .Lt_00B4
.Lt_00B8:
.Lt_00B7:
.Lt_00B6:
.Lt_00B5:
mov eax, dword ptr [ebp-12]
mov dword ptr [ebp-16], eax
jmp .Lt_00BB
.Lt_00BD:
push dword ptr [ebp-12]
call CMKXFUNCT
add esp, 4
mov dword ptr [ebp-8], eax
jmp .Lt_00BA
.Lt_00BE:
push dword ptr [ebp-12]
call CCVXFUNCT
add esp, 4
mov dword ptr [ebp-8], eax
jmp .Lt_00BA
.Lt_00BF:
push dword ptr [ebp-12]
call CSTRINGFUNCT
add esp, 4
mov dword ptr [ebp-8], eax
jmp .Lt_00BA
.Lt_00C0:
push 0
push dword ptr [ebp-12]
call CMATHFUNCT
add esp, 8
mov dword ptr [ebp-8], eax
jmp .Lt_00BA
.Lt_00C1:
call CPEEKFUNCT
mov dword ptr [ebp-8], eax
jmp .Lt_00BA
.Lt_00C2:
push dword ptr [ebp-12]
call CARRAYFUNCT
add esp, 4
mov dword ptr [ebp-8], eax
jmp .Lt_00BA
.Lt_00C3:
push dword ptr [ebp-12]
call CFILEFUNCT
add esp, 4
mov dword ptr [ebp-8], eax
jmp .Lt_00BA
.Lt_00C4:
call CERRORFUNCT
mov dword ptr [ebp-8], eax
jmp .Lt_00BA
.Lt_00C5:
call CIIFFUNCT
push eax
call CSTRIDXORMEMBERDEREF
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_00B4
jmp .Lt_00BA
.Lt_00C6:
call CVAFUNCT
mov dword ptr [ebp-8], eax
jmp .Lt_00BA
.Lt_00C7:
push 0
push dword ptr [ebp-12]
call CTYPECONVEXPR
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_00B4
jmp .Lt_00BA
.Lt_00C8:
call CANONTYPE
push eax
call CSTRIDXORMEMBERDEREF
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_00B4
jmp .Lt_00BA
.Lt_00C9:
push -1
call CVIEWSTMT
add esp, 4
mov dword ptr [ebp-8], eax
jmp .Lt_00BA
.Lt_00CA:
push -1
call CWIDTHSTMT
add esp, 4
mov dword ptr [ebp-8], eax
jmp .Lt_00BA
.Lt_00CB:
push -1
call CCOLORSTMT
add esp, 4
mov dword ptr [ebp-8], eax
jmp .Lt_00BA
.Lt_00CC:
call CSCREENFUNCT
mov dword ptr [ebp-8], eax
jmp .Lt_00BA
.Lt_00CD:
call CTHREADCALLFUNC
mov dword ptr [ebp-8], eax
jmp .Lt_00BA
.Lt_00BB:
mov eax, dword ptr [ebp-16]
add eax, 4294966960
cmp eax, 175
ja .Lt_00BA
mov eax, dword ptr [ebp-16]
jmp dword ptr [.LT_00CE+eax*4-1344]
.LT_00CE:
.int .Lt_00C8
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BF
.int .Lt_00BA
.int .Lt_00BF
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00C7
.int .Lt_00C7
.int .Lt_00C7
.int .Lt_00C7
.int .Lt_00C7
.int .Lt_00C7
.int .Lt_00C7
.int .Lt_00C7
.int .Lt_00C7
.int .Lt_00C7
.int .Lt_00C7
.int .Lt_00C7
.int .Lt_00C7
.int .Lt_00C7
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BF
.int .Lt_00BF
.int .Lt_00BF
.int .Lt_00BF
.int .Lt_00BE
.int .Lt_00BE
.int .Lt_00BE
.int .Lt_00BE
.int .Lt_00BE
.int .Lt_00BE
.int .Lt_00BD
.int .Lt_00BD
.int .Lt_00BD
.int .Lt_00BD
.int .Lt_00BD
.int .Lt_00BD
.int .Lt_00BF
.int .Lt_00BF
.int .Lt_00BF
.int .Lt_00BF
.int .Lt_00BF
.int .Lt_00BF
.int .Lt_00BF
.int .Lt_00BF
.int .Lt_00BF
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
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
.int .Lt_00C0
.int .Lt_00C0
.int .Lt_00C0
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00C0
.int .Lt_00C0
.int .Lt_00C1
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00C3
.int .Lt_00C3
.int .Lt_00C3
.int .Lt_00C3
.int .Lt_00C3
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00C3
.int .Lt_00C3
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00C3
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00C9
.int .Lt_00BA
.int .Lt_00CA
.int .Lt_00CB
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00C2
.int .Lt_00C2
.int .Lt_00C6
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00C4
.int .Lt_00BA
.int .Lt_00C5
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00CC
.int .Lt_00CC
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00BA
.int .Lt_00CD
.Lt_00BA:
cmp dword ptr [ebp-8], 0
jne .Lt_00D0
push dword ptr [ebp-12]
call CGFXFUNCT
add esp, 4
mov dword ptr [ebp-8], eax
.Lt_00D0:
.Lt_00CF:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_00B4:
mov eax, dword ptr [ebp-4]
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size CQUIRKFUNCTION, .-CQUIRKFUNCTION
.balign 16
fb_ctor__parserzquirk:
.type fb_ctor__parserzquirk, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__parserzquirk, .-fb_ctor__parserzquirk
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
	#fbc-1.01.0/src/compiler/parser-quirk.bas' compilation took 0.02728690626099706 secs

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
.int fb_ctor__parserzquirk
