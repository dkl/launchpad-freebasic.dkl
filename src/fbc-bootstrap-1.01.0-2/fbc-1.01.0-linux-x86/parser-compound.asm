	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/parser-compound.bas' compilation started at 15:27:34 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl PARSERCOMPOUNDSTMTSETCTX
PARSERCOMPOUNDSTMTSETCTX:
.type PARSERCOMPOUNDSTMTSETCTX, @function
.Lt_0060:
mov dword ptr [PARSER+32], 0
mov dword ptr [PARSER+36], 0
mov dword ptr [PARSER+40], 0
mov dword ptr [PARSER+44], 0
mov dword ptr [PARSER+48], 0
mov dword ptr [PARSER+52], 0
.Lt_0061:
ret
.size PARSERCOMPOUNDSTMTSETCTX, .-PARSERCOMPOUNDSTMTSETCTX
.balign 16

.globl PARSERCOMPOUNDSTMTINIT
PARSERCOMPOUNDSTMTINIT:
.type PARSERCOMPOUNDSTMTINIT, @function
.Lt_0062:
call PARSERSELECTSTMTINIT
call PARSERSELCONSTSTMTINIT
.Lt_0063:
ret
.size PARSERCOMPOUNDSTMTINIT, .-PARSERCOMPOUNDSTMTINIT
.balign 16

.globl PARSERCOMPOUNDSTMTEND
PARSERCOMPOUNDSTMTEND:
.type PARSERCOMPOUNDSTMTEND, @function
.Lt_0064:
call PARSERSELCONSTSTMTEND
call PARSERSELECTSTMTEND
.Lt_0065:
ret
.size PARSERCOMPOUNDSTMTEND, .-PARSERCOMPOUNDSTMTEND
.balign 16

.globl CCOMPOUNDSTMT
CCOMPOUNDSTMT:
.type CCOMPOUNDSTMT, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0066:
cmp dword ptr [ENV+136], 3
jne .Lt_0069
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [eax+16532]
cmp dword ptr [ebx+8], -2147483648
je .Lt_006B
mov dword ptr [ebp-4], 0
jmp .Lt_0067
.Lt_006B:
.Lt_006A:
.Lt_0069:
.Lt_0068:
push 0
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-8], eax
jmp .Lt_006D
.Lt_006F:
push 1
call CCOMPSTMTISALLOWED
add esp, 4
test eax, eax
jne .Lt_0071
push 0
push 266
push 266
call HSKIPCOMPOUND
add esp, 12
jmp .Lt_0067
.Lt_0071:
.Lt_0070:
call CIFSTMTBEGIN
jmp .Lt_006C
.Lt_0072:
push 1
call CCOMPSTMTISALLOWED
add esp, 4
test eax, eax
jne .Lt_0074
push 0
push 283
push 281
call HSKIPCOMPOUND
add esp, 12
jmp .Lt_0067
.Lt_0074:
.Lt_0073:
call CFORSTMTBEGIN
jmp .Lt_006C
.Lt_0075:
push 1
call CCOMPSTMTISALLOWED
add esp, 4
test eax, eax
jne .Lt_0077
push 0
push 279
push 278
call HSKIPCOMPOUND
add esp, 12
jmp .Lt_0067
.Lt_0077:
.Lt_0076:
call CDOSTMTBEGIN
jmp .Lt_006C
.Lt_0078:
push 1
call CCOMPSTMTISALLOWED
add esp, 4
test eax, eax
jne .Lt_007A
push 0
push 275
push 273
call HSKIPCOMPOUND
add esp, 12
jmp .Lt_0067
.Lt_007A:
.Lt_0079:
call CWHILESTMTBEGIN
jmp .Lt_006C
.Lt_007B:
push 1
call CCOMPSTMTISALLOWED
add esp, 4
test eax, eax
jne .Lt_007D
push 0
push 270
push 270
call HSKIPCOMPOUND
add esp, 12
jmp .Lt_0067
.Lt_007D:
.Lt_007C:
call CSELECTSTMTBEGIN
jmp .Lt_006C
.Lt_007E:
push 1
call CCOMPSTMTISALLOWED
add esp, 4
test eax, eax
jne .Lt_0080
push 0
push 280
push 280
call HSKIPCOMPOUND
add esp, 12
jmp .Lt_0067
.Lt_0080:
.Lt_007F:
call CWITHSTMTBEGIN
jmp .Lt_006C
.Lt_0081:
push 1
call CCOMPSTMTISALLOWED
add esp, 4
test eax, eax
jne .Lt_0083
push 0
push 285
push 285
call HSKIPCOMPOUND
add esp, 12
jmp .Lt_0067
.Lt_0083:
.Lt_0082:
call CSCOPESTMTBEGIN
jmp .Lt_006C
.Lt_0084:
call CNAMESPACESTMTBEGIN
jmp .Lt_006C
.Lt_0085:
call CEXTERNSTMTBEGIN
jmp .Lt_006C
.Lt_0086:
call CIFSTMTNEXT
jmp .Lt_006C
.Lt_0087:
call CSELECTSTMTNEXT
jmp .Lt_006C
.Lt_0088:
call CDOSTMTEND
jmp .Lt_006C
.Lt_0089:
call CFORSTMTEND
jmp .Lt_006C
.Lt_008A:
call CWHILESTMTEND
jmp .Lt_006C
.Lt_008B:
call CEXITSTATEMENT
jmp .Lt_006C
.Lt_008C:
call CCONTINUESTATEMENT
jmp .Lt_006C
.Lt_008D:
push 0
push 1
call LEXGETLOOKAHEADCLASS
add esp, 8
cmp eax, 1
je .Lt_008F
push 1
call CCOMPSTMTISALLOWED
add esp, 4
test eax, eax
jne .Lt_0091
push 0
push -1
push -1
call HSKIPCOMPOUND
add esp, 12
jmp .Lt_0067
.Lt_0091:
.Lt_0090:
call CENDSTATEMENT
jmp .Lt_008E
.Lt_008F:
call CCOMPOUNDEND
.Lt_008E:
jmp .Lt_006C
.Lt_0092:
call CIFSTMTEND
jmp .Lt_006C
.Lt_0093:
call CUSINGSTMT
jmp .Lt_006C
.Lt_0094:
mov dword ptr [ebp-4], 0
jmp .Lt_0067
jmp .Lt_006C
.Lt_006D:
mov eax, dword ptr [ebp-8]
add eax, 4294967030
cmp eax, 74
ja .Lt_0094
mov eax, dword ptr [ebp-8]
jmp dword ptr [.LT_0095+eax*4-1064]
.LT_0095:
.int .Lt_006F
.int .Lt_0094
.int .Lt_0086
.int .Lt_0086
.int .Lt_007B
.int .Lt_0087
.int .Lt_0094
.int .Lt_0078
.int .Lt_0094
.int .Lt_008A
.int .Lt_008C
.int .Lt_008B
.int .Lt_0075
.int .Lt_0088
.int .Lt_007E
.int .Lt_0072
.int .Lt_0094
.int .Lt_0089
.int .Lt_0094
.int .Lt_0081
.int .Lt_0084
.int .Lt_0093
.int .Lt_0094
.int .Lt_0094
.int .Lt_0094
.int .Lt_0094
.int .Lt_0094
.int .Lt_0094
.int .Lt_0094
.int .Lt_0094
.int .Lt_0094
.int .Lt_0094
.int .Lt_0094
.int .Lt_0094
.int .Lt_0094
.int .Lt_0094
.int .Lt_0094
.int .Lt_0094
.int .Lt_0094
.int .Lt_0094
.int .Lt_0085
.int .Lt_0094
.int .Lt_0094
.int .Lt_0094
.int .Lt_0094
.int .Lt_0094
.int .Lt_0094
.int .Lt_0094
.int .Lt_0092
.int .Lt_0094
.int .Lt_0094
.int .Lt_0094
.int .Lt_0094
.int .Lt_0094
.int .Lt_0094
.int .Lt_0094
.int .Lt_0094
.int .Lt_0094
.int .Lt_0094
.int .Lt_0094
.int .Lt_0094
.int .Lt_0094
.int .Lt_0094
.int .Lt_0094
.int .Lt_0094
.int .Lt_0094
.int .Lt_0094
.int .Lt_0094
.int .Lt_0094
.int .Lt_0094
.int .Lt_0094
.int .Lt_0094
.int .Lt_0094
.int .Lt_0094
.int .Lt_008D
.Lt_006C:
mov dword ptr [ebp-4], -1
.Lt_0067:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CCOMPOUNDSTMT, .-CCOMPOUNDSTMT
.balign 16

.globl CENDSTATEMENT
CENDSTATEMENT:
.type CENDSTATEMENT, @function
push ebp
mov ebp, esp
sub esp, 8
.Lt_0096:
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-8], eax
jmp .Lt_0099
.Lt_009B:
mov dword ptr [ebp-4], 0
jmp .Lt_0098
.Lt_009C:
call CEXPRESSION
mov dword ptr [ebp-4], eax
jmp .Lt_0098
.Lt_0099:
mov eax, dword ptr [ebp-8]
add eax, 4294967040
cmp eax, 84
ja .Lt_009C
mov eax, dword ptr [ebp-8]
jmp dword ptr [.LT_009D+eax*4-1024]
.LT_009D:
.int .Lt_009B
.int .Lt_009B
.int .Lt_009B
.int .Lt_009B
.int .Lt_009B
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009B
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009B
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009C
.int .Lt_009B
.Lt_0098:
push dword ptr [ebp-4]
call RTLEXITAPP
add esp, 4
.Lt_0097:
mov esp, ebp
pop ebp
ret
.size CENDSTATEMENT, .-CENDSTATEMENT
.balign 16

.globl CEXITSTATEMENT
CEXITSTATEMENT:
.type CEXITSTATEMENT, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
.Lt_00A4:
mov dword ptr [ebp-4], 0
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-12], eax
jmp .Lt_00A7
.Lt_00A9:
cmp dword ptr [PARSER+32], 0
jne .Lt_00AB
push 0
push 0
push 238
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_00A5
.Lt_00AB:
.Lt_00AA:
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [PARSER+32]
mov dword ptr [ebp-16], eax
.Lt_00AC:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
jne .Lt_00AD
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 281
je .Lt_00AF
push 0
push 0
push 242
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_00A5
.Lt_00AF:
.Lt_00AE:
mov eax, dword ptr [ebp-16]
mov ebx, dword ptr [eax+96]
mov dword ptr [ebp-16], ebx
cmp dword ptr [ebp-16], 0
jne .Lt_00B1
push 0
push 0
push 246
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_00A5
.Lt_00B1:
.Lt_00B0:
push 0
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_00AC
.Lt_00AD:
mov ebx, dword ptr [ebp-16]
mov eax, dword ptr [ebx+92]
mov dword ptr [ebp-4], eax
jmp .Lt_00A6
.Lt_00B2:
cmp dword ptr [PARSER+36], 0
jne .Lt_00B4
push 0
push 0
push 239
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_00A5
.Lt_00B4:
.Lt_00B3:
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [PARSER+36]
mov dword ptr [ebp-16], eax
.Lt_00B5:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
jne .Lt_00B6
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 278
je .Lt_00B8
push 0
push 0
push 243
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_00A5
.Lt_00B8:
.Lt_00B7:
mov eax, dword ptr [ebp-16]
mov ebx, dword ptr [eax+28]
mov dword ptr [ebp-16], ebx
cmp dword ptr [ebp-16], 0
jne .Lt_00BA
push 0
push 0
push 247
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_00A5
.Lt_00BA:
.Lt_00B9:
push 0
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_00B5
.Lt_00B6:
mov ebx, dword ptr [ebp-16]
mov eax, dword ptr [ebx+24]
mov dword ptr [ebp-4], eax
jmp .Lt_00A6
.Lt_00BB:
cmp dword ptr [PARSER+40], 0
jne .Lt_00BD
push 0
push 0
push 240
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_00A5
.Lt_00BD:
.Lt_00BC:
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [PARSER+40]
mov dword ptr [ebp-16], eax
.Lt_00BE:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
jne .Lt_00BF
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 273
je .Lt_00C1
push 0
push 0
push 244
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_00A5
.Lt_00C1:
.Lt_00C0:
mov eax, dword ptr [ebp-16]
mov ebx, dword ptr [eax+20]
mov dword ptr [ebp-16], ebx
cmp dword ptr [ebp-16], 0
jne .Lt_00C3
push 0
push 0
push 248
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_00A5
.Lt_00C3:
.Lt_00C2:
push 0
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_00BE
.Lt_00BF:
mov ebx, dword ptr [ebp-16]
mov eax, dword ptr [ebx+16]
mov dword ptr [ebp-4], eax
jmp .Lt_00A6
.Lt_00C4:
cmp dword ptr [PARSER+44], 0
jne .Lt_00C6
push 0
push 0
push 241
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_00A5
.Lt_00C6:
.Lt_00C5:
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [PARSER+44]
mov dword ptr [ebp-16], eax
.Lt_00C7:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
jne .Lt_00C8
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 270
je .Lt_00CA
push 0
push 0
push 245
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_00A5
.Lt_00CA:
.Lt_00C9:
mov eax, dword ptr [ebp-16]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-16], ebx
cmp dword ptr [ebp-16], 0
jne .Lt_00CC
push 0
push 0
push 249
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_00A5
.Lt_00CC:
.Lt_00CB:
push 0
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_00C7
.Lt_00C8:
mov ebx, dword ptr [ebp-16]
mov eax, dword ptr [ebx+52]
mov dword ptr [ebp-4], eax
jmp .Lt_00A6
.Lt_00CD:
cmp dword ptr [PARSER+48], 0
je .Lt_00CF
mov eax, dword ptr [PARSER+48]
mov ebx, dword ptr [eax+20]
mov dword ptr [ebp-4], ebx
.Lt_00CF:
.Lt_00CE:
cmp dword ptr [ebp-4], 0
jne .Lt_00D1
mov dword ptr [ebp-20], 0
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebp-24], ebx
jmp .Lt_00D3
.Lt_00D5:
mov dword ptr [ebp-20], 252
jmp .Lt_00D2
.Lt_00D6:
mov dword ptr [ebp-20], 192
jmp .Lt_00D2
.Lt_00D7:
mov dword ptr [ebp-20], 143
jmp .Lt_00D2
.Lt_00D8:
mov dword ptr [ebp-20], 164
jmp .Lt_00D2
.Lt_00D9:
mov dword ptr [ebp-20], 165
jmp .Lt_00D2
.Lt_00DA:
mov dword ptr [ebp-20], 253
jmp .Lt_00D2
.Lt_00D3:
mov ebx, dword ptr [ebp-24]
add ebx, 4294966951
cmp ebx, 5
ja .Lt_00DA
mov ebx, dword ptr [ebp-24]
jmp dword ptr [.LT_00DB+ebx*4-1380]
.LT_00DB:
.int .Lt_00D5
.int .Lt_00DA
.int .Lt_00D8
.int .Lt_00D9
.int .Lt_00D7
.int .Lt_00D6
.Lt_00D2:
push 0
push 0
push dword ptr [ebp-20]
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_00A5
.Lt_00D1:
.Lt_00D0:
mov dword ptr [ebp-16], 0
push 0
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-20], eax
jmp .Lt_00DD
.Lt_00DF:
mov eax, dword ptr [PARSER+100]
mov ebx, dword ptr [eax+24]
and ebx, 511
test ebx, ebx
jne .Lt_00E1
mov ebx, dword ptr [PARSER+100]
mov eax, dword ptr [ebx+4]
and eax, 61440
test eax, eax
je .Lt_00E3
mov dword ptr [ebp-16], 252
.Lt_00E3:
.Lt_00E2:
jmp .Lt_00E0
.Lt_00E1:
mov dword ptr [ebp-16], 252
.Lt_00E0:
jmp .Lt_00DC
.Lt_00E4:
mov eax, dword ptr [PARSER+100]
mov ebx, dword ptr [eax+24]
and ebx, 511
test ebx, ebx
je .Lt_00E6
mov ebx, dword ptr [PARSER+100]
mov eax, dword ptr [ebx+4]
and eax, 61440
test eax, eax
je .Lt_00E8
mov dword ptr [ebp-16], 253
jmp .Lt_00E7
.Lt_00E8:
call HCHECKFORCTORRESULT
mov dword ptr [ebp-16], eax
.Lt_00E7:
jmp .Lt_00E5
.Lt_00E6:
mov dword ptr [ebp-16], 253
.Lt_00E5:
jmp .Lt_00DC
.Lt_00E9:
mov eax, dword ptr [PARSER+100]
mov ebx, dword ptr [eax+4]
and ebx, 32768
test ebx, ebx
je .Lt_00EB
call HCHECKFORCTORRESULT
mov dword ptr [ebp-16], eax
jmp .Lt_00EA
.Lt_00EB:
mov dword ptr [ebp-16], 192
.Lt_00EA:
jmp .Lt_00DC
.Lt_00EC:
mov eax, dword ptr [PARSER+100]
mov ebx, dword ptr [eax+4]
and ebx, 16384
test ebx, ebx
je .Lt_00EE
call HCHECKFORCTORRESULT
mov dword ptr [ebp-16], eax
jmp .Lt_00ED
.Lt_00EE:
mov dword ptr [ebp-16], 143
.Lt_00ED:
jmp .Lt_00DC
.Lt_00EF:
mov eax, dword ptr [PARSER+100]
mov ebx, dword ptr [eax+4]
and ebx, 4096
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_00F1
mov dword ptr [ebp-16], 164
.Lt_00F1:
.Lt_00F0:
jmp .Lt_00DC
.Lt_00F2:
mov ebx, dword ptr [PARSER+100]
mov eax, dword ptr [ebx+4]
and eax, 8192
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_00F4
mov dword ptr [ebp-16], 165
.Lt_00F4:
.Lt_00F3:
jmp .Lt_00DC
.Lt_00DD:
mov eax, dword ptr [ebp-20]
add eax, 4294966951
cmp eax, 5
ja .Lt_00DC
mov eax, dword ptr [ebp-20]
jmp dword ptr [.LT_00F5+eax*4-1380]
.LT_00F5:
.int .Lt_00DF
.int .Lt_00E4
.int .Lt_00EF
.int .Lt_00F2
.int .Lt_00EC
.int .Lt_00E9
.Lt_00DC:
cmp dword ptr [ebp-16], 0
je .Lt_00F7
push 0
push 0
push dword ptr [ebp-16]
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_00A5
.Lt_00F7:
.Lt_00F6:
push 0
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_00A6
.Lt_00F8:
push 0
push 0
push 250
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_00A5
jmp .Lt_00A6
.Lt_00A7:
mov eax, dword ptr [ebp-12]
add eax, 4294967026
cmp eax, 80
ja .Lt_00F8
mov eax, dword ptr [ebp-12]
jmp dword ptr [.LT_00F9+eax*4-1080]
.LT_00F9:
.int .Lt_00C4
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00BB
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00B2
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00A9
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00CD
.int .Lt_00CD
.int .Lt_00CD
.int .Lt_00CD
.int .Lt_00CD
.int .Lt_00CD
.Lt_00A6:
push dword ptr [ebp-4]
call ASTSCOPEBREAK
add esp, 4
.Lt_00A5:
pop ebx
mov esp, ebp
pop ebp
ret
.size CEXITSTATEMENT, .-CEXITSTATEMENT
.balign 16

.globl CCONTINUESTATEMENT
CCONTINUESTATEMENT:
.type CCONTINUESTATEMENT, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
.Lt_00FC:
mov dword ptr [ebp-4], 0
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-8], eax
jmp .Lt_00FF
.Lt_0101:
cmp dword ptr [PARSER+32], 0
jne .Lt_0103
push 0
push 0
push 238
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_00FD
.Lt_0103:
.Lt_0102:
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [PARSER+32]
mov dword ptr [ebp-12], eax
.Lt_0104:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
jne .Lt_0105
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 281
je .Lt_0107
push 0
push 0
push 242
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_00FD
.Lt_0107:
.Lt_0106:
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax+96]
mov dword ptr [ebp-12], ebx
cmp dword ptr [ebp-12], 0
jne .Lt_0109
push 0
push 0
push 246
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_00FD
.Lt_0109:
.Lt_0108:
push 0
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_0104
.Lt_0105:
mov ebx, dword ptr [ebp-12]
mov eax, dword ptr [ebx+88]
mov dword ptr [ebp-4], eax
jmp .Lt_00FE
.Lt_010A:
cmp dword ptr [PARSER+36], 0
jne .Lt_010C
push 0
push 0
push 239
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_00FD
.Lt_010C:
.Lt_010B:
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [PARSER+36]
mov dword ptr [ebp-12], eax
.Lt_010D:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
jne .Lt_010E
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 278
je .Lt_0110
push 0
push 0
push 243
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_00FD
.Lt_0110:
.Lt_010F:
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax+28]
mov dword ptr [ebp-12], ebx
cmp dword ptr [ebp-12], 0
jne .Lt_0112
push 0
push 0
push 247
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_00FD
.Lt_0112:
.Lt_0111:
push 0
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_010D
.Lt_010E:
mov ebx, dword ptr [ebp-12]
mov eax, dword ptr [ebx+20]
mov dword ptr [ebp-4], eax
jmp .Lt_00FE
.Lt_0113:
cmp dword ptr [PARSER+40], 0
jne .Lt_0115
push 0
push 0
push 240
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_00FD
.Lt_0115:
.Lt_0114:
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [PARSER+40]
mov dword ptr [ebp-12], eax
.Lt_0116:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
jne .Lt_0117
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 273
je .Lt_0119
push 0
push 0
push 244
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_00FD
.Lt_0119:
.Lt_0118:
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax+20]
mov dword ptr [ebp-12], ebx
cmp dword ptr [ebp-12], 0
jne .Lt_011B
push 0
push 0
push 248
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_00FD
.Lt_011B:
.Lt_011A:
push 0
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_0116
.Lt_0117:
mov ebx, dword ptr [ebp-12]
mov eax, dword ptr [ebx+12]
mov dword ptr [ebp-4], eax
jmp .Lt_00FE
.Lt_011C:
push 0
push 0
push 251
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_00FD
jmp .Lt_00FE
.Lt_00FF:
mov eax, dword ptr [ebp-8]
add eax, 4294967023
cmp eax, 8
ja .Lt_011C
mov eax, dword ptr [ebp-8]
jmp dword ptr [.LT_011D+eax*4-1092]
.LT_011D:
.int .Lt_0113
.int .Lt_011C
.int .Lt_011C
.int .Lt_011C
.int .Lt_011C
.int .Lt_010A
.int .Lt_011C
.int .Lt_011C
.int .Lt_0101
.Lt_00FE:
push dword ptr [ebp-4]
call ASTSCOPEBREAK
add esp, 4
.Lt_00FD:
pop ebx
mov esp, ebp
pop ebp
ret
.size CCONTINUESTATEMENT, .-CCONTINUESTATEMENT
.balign 16

.globl CCOMPSTMTCHECK
CCOMPSTMTCHECK:
.type CCOMPSTMTCHECK, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
mov dword ptr [ebp-4], 0
.Lt_012D:
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-12], 0
lea eax, [PARSER]
push eax
call STACKGETTOS
add esp, 4
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_0130
mov dword ptr [ebp-4], -1
jmp .Lt_012E
.Lt_0130:
.Lt_012F:
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-16], ebx
jmp .Lt_0132
.Lt_0134:
mov dword ptr [ebp-8], 32
jmp .Lt_0131
.Lt_0135:
mov dword ptr [ebp-8], 35
jmp .Lt_0131
.Lt_0136:
mov dword ptr [ebp-8], 94
jmp .Lt_0131
.Lt_0137:
mov dword ptr [ebp-8], 59
jmp .Lt_0131
.Lt_0138:
mov dword ptr [ebp-8], 120
jmp .Lt_0131
.Lt_0139:
mov dword ptr [ebp-8], 123
jmp .Lt_0131
.Lt_013A:
mov ebx, dword ptr [ebp-12]
mov eax, dword ptr [ebx+12]
mov dword ptr [ebp-20], eax
jmp .Lt_013C
.Lt_013E:
mov dword ptr [ebp-8], 124
jmp .Lt_013B
.Lt_013F:
mov dword ptr [ebp-8], 125
jmp .Lt_013B
.Lt_0140:
mov dword ptr [ebp-8], 126
jmp .Lt_013B
.Lt_0141:
mov dword ptr [ebp-8], 127
jmp .Lt_013B
.Lt_0142:
mov dword ptr [ebp-8], 128
jmp .Lt_013B
.Lt_0143:
mov dword ptr [ebp-8], 129
jmp .Lt_013B
.Lt_013C:
mov eax, dword ptr [ebp-20]
add eax, 4294966951
cmp eax, 5
ja .Lt_013B
mov eax, dword ptr [ebp-20]
jmp dword ptr [.LT_0144+eax*4-1380]
.LT_0144:
.int .Lt_013E
.int .Lt_013F
.int .Lt_0140
.int .Lt_0141
.int .Lt_0142
.int .Lt_0143
.Lt_013B:
jmp .Lt_0131
.Lt_0145:
mov dword ptr [ebp-8], 29
jmp .Lt_0131
.Lt_0146:
mov dword ptr [ebp-8], 30
jmp .Lt_0131
.Lt_0147:
mov dword ptr [ebp-8], 13
jmp .Lt_0131
.Lt_0132:
mov eax, dword ptr [ebp-16]
add eax, 4294967030
cmp eax, 80
ja .Lt_0131
mov eax, dword ptr [ebp-16]
jmp dword ptr [.LT_0148+eax*4-1064]
.LT_0148:
.int .Lt_0134
.int .Lt_0131
.int .Lt_0131
.int .Lt_0131
.int .Lt_0135
.int .Lt_0131
.int .Lt_0131
.int .Lt_0146
.int .Lt_0131
.int .Lt_0131
.int .Lt_0131
.int .Lt_0131
.int .Lt_0145
.int .Lt_0131
.int .Lt_0137
.int .Lt_0147
.int .Lt_0131
.int .Lt_0131
.int .Lt_0131
.int .Lt_0136
.int .Lt_0138
.int .Lt_0131
.int .Lt_0131
.int .Lt_0131
.int .Lt_0131
.int .Lt_0131
.int .Lt_0131
.int .Lt_0131
.int .Lt_0131
.int .Lt_0131
.int .Lt_0131
.int .Lt_0131
.int .Lt_0131
.int .Lt_0131
.int .Lt_0131
.int .Lt_0131
.int .Lt_0131
.int .Lt_0131
.int .Lt_0131
.int .Lt_0131
.int .Lt_0139
.int .Lt_0131
.int .Lt_0131
.int .Lt_0131
.int .Lt_0131
.int .Lt_0131
.int .Lt_0131
.int .Lt_0131
.int .Lt_0131
.int .Lt_0131
.int .Lt_0131
.int .Lt_0131
.int .Lt_0131
.int .Lt_0131
.int .Lt_0131
.int .Lt_0131
.int .Lt_0131
.int .Lt_0131
.int .Lt_0131
.int .Lt_0131
.int .Lt_0131
.int .Lt_0131
.int .Lt_0131
.int .Lt_0131
.int .Lt_0131
.int .Lt_0131
.int .Lt_0131
.int .Lt_0131
.int .Lt_0131
.int .Lt_0131
.int .Lt_0131
.int .Lt_0131
.int .Lt_0131
.int .Lt_0131
.int .Lt_0131
.int .Lt_0131
.int .Lt_0131
.int .Lt_0131
.int .Lt_0131
.int .Lt_0131
.int .Lt_013A
.Lt_0131:
push 0
push 0
push dword ptr [ebp-8]
call ERRREPORT
add esp, 12
mov dword ptr [ebp-4], 0
.Lt_012E:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CCOMPSTMTCHECK, .-CCOMPSTMTCHECK
.balign 16

.globl CCOMPSTMTPUSH
CCOMPSTMTPUSH:
.type CCOMPSTMTPUSH, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0149:
lea eax, [PARSER]
push eax
call STACKPUSH
add esp, 4
mov dword ptr [Lt_0155], eax
mov eax, dword ptr [Lt_0155]
mov ebx, dword ptr [ebp+8]
mov dword ptr [eax], ebx
mov ebx, dword ptr [Lt_0155]
mov eax, dword ptr [ebp+12]
mov dword ptr [ebx+4], eax
mov eax, dword ptr [Lt_0155]
mov dword ptr [eax+8], 0
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-8], eax
jmp .Lt_014C
.Lt_014E:
mov eax, dword ptr [Lt_0155]
mov ebx, dword ptr [PARSER+36]
mov dword ptr [eax+28], ebx
mov ebx, dword ptr [Lt_0155]
mov dword ptr [PARSER+36], ebx
jmp .Lt_014B
.Lt_014F:
mov ebx, dword ptr [Lt_0155]
mov eax, dword ptr [PARSER+32]
mov dword ptr [ebx+96], eax
mov eax, dword ptr [Lt_0155]
mov dword ptr [PARSER+32], eax
jmp .Lt_014B
.Lt_0150:
mov eax, dword ptr [Lt_0155]
mov ebx, dword ptr [PARSER+44]
mov dword ptr [eax+56], ebx
mov ebx, dword ptr [Lt_0155]
mov dword ptr [PARSER+44], ebx
jmp .Lt_014B
.Lt_0151:
mov ebx, dword ptr [Lt_0155]
mov eax, dword ptr [PARSER+40]
mov dword ptr [ebx+20], eax
mov eax, dword ptr [Lt_0155]
mov dword ptr [PARSER+40], eax
jmp .Lt_014B
.Lt_0152:
mov eax, dword ptr [Lt_0155]
mov ebx, dword ptr [PARSER+48]
mov dword ptr [eax+24], ebx
mov ebx, dword ptr [Lt_0155]
mov dword ptr [PARSER+48], ebx
jmp .Lt_014B
.Lt_0153:
mov ebx, dword ptr [Lt_0155]
mov eax, dword ptr [PARSER+52]
mov dword ptr [ebx+20], eax
mov eax, dword ptr [Lt_0155]
mov dword ptr [PARSER+52], eax
jmp .Lt_014B
.Lt_014C:
mov eax, dword ptr [ebp-8]
add eax, 4294967026
cmp eax, 76
ja .Lt_014B
mov eax, dword ptr [ebp-8]
jmp dword ptr [.LT_0154+eax*4-1080]
.LT_0154:
.int .Lt_0150
.int .Lt_014B
.int .Lt_014B
.int .Lt_0151
.int .Lt_014B
.int .Lt_014B
.int .Lt_014B
.int .Lt_014B
.int .Lt_014E
.int .Lt_014B
.int .Lt_0153
.int .Lt_014F
.int .Lt_014B
.int .Lt_014B
.int .Lt_014B
.int .Lt_014B
.int .Lt_014B
.int .Lt_014B
.int .Lt_014B
.int .Lt_014B
.int .Lt_014B
.int .Lt_014B
.int .Lt_014B
.int .Lt_014B
.int .Lt_014B
.int .Lt_014B
.int .Lt_014B
.int .Lt_014B
.int .Lt_014B
.int .Lt_014B
.int .Lt_014B
.int .Lt_014B
.int .Lt_014B
.int .Lt_014B
.int .Lt_014B
.int .Lt_014B
.int .Lt_014B
.int .Lt_014B
.int .Lt_014B
.int .Lt_014B
.int .Lt_014B
.int .Lt_014B
.int .Lt_014B
.int .Lt_014B
.int .Lt_014B
.int .Lt_014B
.int .Lt_014B
.int .Lt_014B
.int .Lt_014B
.int .Lt_014B
.int .Lt_014B
.int .Lt_014B
.int .Lt_014B
.int .Lt_014B
.int .Lt_014B
.int .Lt_014B
.int .Lt_014B
.int .Lt_014B
.int .Lt_014B
.int .Lt_014B
.int .Lt_014B
.int .Lt_014B
.int .Lt_014B
.int .Lt_014B
.int .Lt_014B
.int .Lt_014B
.int .Lt_014B
.int .Lt_014B
.int .Lt_014B
.int .Lt_014B
.int .Lt_014B
.int .Lt_014B
.int .Lt_014B
.int .Lt_014B
.int .Lt_014B
.int .Lt_014B
.int .Lt_0152
.Lt_014B:
mov eax, dword ptr [ebp+8]
mov dword ptr [PARSER+24], eax
mov eax, dword ptr [Lt_0155]
mov dword ptr [ebp-4], eax
.Lt_014A:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CCOMPSTMTPUSH, .-CCOMPSTMTPUSH

.section .bss
.balign 4
	.lcomm	Lt_0155,4

.section .text
.balign 16

.globl CCOMPSTMTGETTOS
CCOMPSTMTGETTOS:
.type CCOMPSTMTGETTOS, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0156:
lea eax, [PARSER]
push eax
call STACKGETTOS
add esp, 4
mov dword ptr [Lt_016E], eax
cmp dword ptr [Lt_016E], 0
sete al
shr eax, 1
sbb eax, eax
mov dword ptr [Lt_0170], eax
cmp dword ptr [Lt_0170], 0
jne .Lt_0159
mov eax, dword ptr [Lt_016E]
mov ebx, dword ptr [ebp+8]
cmp ebx, dword ptr [eax]
setne bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [Lt_0170], ebx
.Lt_0159:
.Lt_0158:
cmp dword ptr [Lt_0170], 0
je .Lt_015B
cmp dword ptr [ebp+12], 0
je .Lt_015D
cmp dword ptr [Lt_016E], 0
je .Lt_015F
call CCOMPSTMTCHECK
jmp .Lt_015E
.Lt_015F:
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebp-8], ebx
jmp .Lt_0161
.Lt_0163:
mov dword ptr [Lt_0172], 105
jmp .Lt_0160
.Lt_0164:
mov dword ptr [Lt_0172], 114
jmp .Lt_0160
.Lt_0165:
mov dword ptr [Lt_0172], 106
jmp .Lt_0160
.Lt_0166:
mov dword ptr [Lt_0172], 109
jmp .Lt_0160
.Lt_0167:
mov dword ptr [Lt_0172], 112
jmp .Lt_0160
.Lt_0168:
mov dword ptr [Lt_0172], 110
jmp .Lt_0160
.Lt_0169:
mov dword ptr [Lt_0172], 107
jmp .Lt_0160
.Lt_016A:
mov dword ptr [Lt_0172], 108
jmp .Lt_0160
.Lt_016B:
mov dword ptr [Lt_0172], 111
jmp .Lt_0160
.Lt_016C:
mov dword ptr [Lt_0172], 113
jmp .Lt_0160
.Lt_0161:
mov ebx, dword ptr [ebp-8]
add ebx, 4294967030
cmp ebx, 80
ja .Lt_0160
mov ebx, dword ptr [ebp-8]
jmp dword ptr [.LT_016D+ebx*4-1064]
.LT_016D:
.int .Lt_0166
.int .Lt_0160
.int .Lt_0160
.int .Lt_0160
.int .Lt_0168
.int .Lt_0160
.int .Lt_0160
.int .Lt_0169
.int .Lt_0160
.int .Lt_0160
.int .Lt_0160
.int .Lt_0160
.int .Lt_0163
.int .Lt_0160
.int .Lt_016A
.int .Lt_0165
.int .Lt_0160
.int .Lt_0160
.int .Lt_0160
.int .Lt_0167
.int .Lt_016C
.int .Lt_0160
.int .Lt_0160
.int .Lt_0160
.int .Lt_0160
.int .Lt_0160
.int .Lt_0160
.int .Lt_0160
.int .Lt_0160
.int .Lt_0160
.int .Lt_0160
.int .Lt_0160
.int .Lt_0160
.int .Lt_0160
.int .Lt_0160
.int .Lt_0160
.int .Lt_0160
.int .Lt_0160
.int .Lt_0160
.int .Lt_0160
.int .Lt_0164
.int .Lt_0160
.int .Lt_0160
.int .Lt_0160
.int .Lt_0160
.int .Lt_0160
.int .Lt_0160
.int .Lt_0160
.int .Lt_0160
.int .Lt_0160
.int .Lt_0160
.int .Lt_0160
.int .Lt_0160
.int .Lt_0160
.int .Lt_0160
.int .Lt_0160
.int .Lt_0160
.int .Lt_0160
.int .Lt_0160
.int .Lt_0160
.int .Lt_0160
.int .Lt_0160
.int .Lt_0160
.int .Lt_0160
.int .Lt_0160
.int .Lt_0160
.int .Lt_0160
.int .Lt_0160
.int .Lt_0160
.int .Lt_0160
.int .Lt_0160
.int .Lt_0160
.int .Lt_0160
.int .Lt_0160
.int .Lt_0160
.int .Lt_0160
.int .Lt_0160
.int .Lt_0160
.int .Lt_0160
.int .Lt_0160
.int .Lt_016B
.Lt_0160:
push 0
push 0
push dword ptr [Lt_0172]
call ERRREPORT
add esp, 12
.Lt_015E:
.Lt_015D:
.Lt_015C:
mov dword ptr [ebp-4], 0
jmp .Lt_015A
.Lt_015B:
mov ebx, dword ptr [Lt_016E]
mov dword ptr [ebp-4], ebx
.Lt_015A:
.Lt_0157:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CCOMPSTMTGETTOS, .-CCOMPSTMTGETTOS

.section .bss
.balign 4
	.lcomm	Lt_016E,4
.balign 4
	.lcomm	Lt_0170,4
.balign 4
	.lcomm	Lt_0172,4

.section .text
.balign 16

.globl CCOMPSTMTPOP
CCOMPSTMTPOP:
.type CCOMPSTMTPOP, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0173:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-4], ebx
jmp .Lt_0176
.Lt_0178:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+28]
mov dword ptr [PARSER+36], eax
jmp .Lt_0175
.Lt_0179:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+96]
mov dword ptr [PARSER+32], ebx
jmp .Lt_0175
.Lt_017A:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+56]
mov dword ptr [PARSER+44], eax
jmp .Lt_0175
.Lt_017B:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+20]
mov dword ptr [PARSER+40], ebx
jmp .Lt_0175
.Lt_017C:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+24]
mov dword ptr [PARSER+48], eax
jmp .Lt_0175
.Lt_017D:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+20]
mov dword ptr [PARSER+52], ebx
jmp .Lt_0175
.Lt_0176:
mov ebx, dword ptr [ebp-4]
add ebx, 4294967026
cmp ebx, 76
ja .Lt_0175
mov ebx, dword ptr [ebp-4]
jmp dword ptr [.LT_017E+ebx*4-1080]
.LT_017E:
.int .Lt_017A
.int .Lt_0175
.int .Lt_0175
.int .Lt_017B
.int .Lt_0175
.int .Lt_0175
.int .Lt_0175
.int .Lt_0175
.int .Lt_0178
.int .Lt_0175
.int .Lt_017D
.int .Lt_0179
.int .Lt_0175
.int .Lt_0175
.int .Lt_0175
.int .Lt_0175
.int .Lt_0175
.int .Lt_0175
.int .Lt_0175
.int .Lt_0175
.int .Lt_0175
.int .Lt_0175
.int .Lt_0175
.int .Lt_0175
.int .Lt_0175
.int .Lt_0175
.int .Lt_0175
.int .Lt_0175
.int .Lt_0175
.int .Lt_0175
.int .Lt_0175
.int .Lt_0175
.int .Lt_0175
.int .Lt_0175
.int .Lt_0175
.int .Lt_0175
.int .Lt_0175
.int .Lt_0175
.int .Lt_0175
.int .Lt_0175
.int .Lt_0175
.int .Lt_0175
.int .Lt_0175
.int .Lt_0175
.int .Lt_0175
.int .Lt_0175
.int .Lt_0175
.int .Lt_0175
.int .Lt_0175
.int .Lt_0175
.int .Lt_0175
.int .Lt_0175
.int .Lt_0175
.int .Lt_0175
.int .Lt_0175
.int .Lt_0175
.int .Lt_0175
.int .Lt_0175
.int .Lt_0175
.int .Lt_0175
.int .Lt_0175
.int .Lt_0175
.int .Lt_0175
.int .Lt_0175
.int .Lt_0175
.int .Lt_0175
.int .Lt_0175
.int .Lt_0175
.int .Lt_0175
.int .Lt_0175
.int .Lt_0175
.int .Lt_0175
.int .Lt_0175
.int .Lt_0175
.int .Lt_0175
.int .Lt_0175
.int .Lt_017C
.Lt_0175:
lea ebx, [PARSER]
push ebx
call STACKPOP
add esp, 4
lea ebx, [PARSER]
push ebx
call STACKGETTOS
add esp, 4
mov dword ptr [ebp+8], eax
cmp dword ptr [ebp+8], 0
je .Lt_0180
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov dword ptr [PARSER+24], ebx
jmp .Lt_017F
.Lt_0180:
mov dword ptr [PARSER+24], 0
.Lt_017F:
.Lt_0174:
pop ebx
mov esp, ebp
pop ebp
ret
.size CCOMPSTMTPOP, .-CCOMPSTMTPOP
.balign 16

.globl CCOMPSTMTISALLOWED
CCOMPSTMTISALLOWED:
.type CCOMPSTMTISALLOWED, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_0181:
lea eax, [PARSER]
push eax
call STACKGETTOS
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0184
mov dword ptr [ebp-4], -1
jmp .Lt_0182
.Lt_0184:
.Lt_0183:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+8]
and ebx, dword ptr [eax+4]
je .Lt_0186
mov dword ptr [ebp-4], -1
jmp .Lt_0182
.Lt_0186:
.Lt_0185:
mov eax, dword ptr [PARSER+100]
cmp eax, dword ptr [ENV+832]
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_0188
mov dword ptr [ebp-12], 60
jmp .Lt_0187
.Lt_0188:
lea ebx, [SYMB+98352]
cmp dword ptr [SYMB+98516], ebx
jne .Lt_018A
mov ebx, dword ptr [ebp-8]
cmp dword ptr [ebx], 270
jne .Lt_018C
mov dword ptr [ebp-12], 61
jmp .Lt_018B
.Lt_018C:
mov dword ptr [ebp-12], 95
.Lt_018B:
jmp .Lt_0189
.Lt_018A:
mov dword ptr [ebp-12], 121
.Lt_0189:
.Lt_0187:
push 0
push 0
push dword ptr [ebp-12]
call ERRREPORT
add esp, 12
mov dword ptr [ebp-4], 0
.Lt_0182:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CCOMPSTMTISALLOWED, .-CCOMPSTMTISALLOWED
.balign 16
fb_ctor__parserzcompound:
.type fb_ctor__parserzcompound, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__parserzcompound, .-fb_ctor__parserzcompound
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
HCHECKFORCTORRESULT:
.type HCHECKFORCTORRESULT, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_009E:
mov eax, dword ptr [PARSER+100]
mov ebx, dword ptr [eax+108]
mov eax, dword ptr [ebx+48]
and eax, 1
test eax, eax
je .Lt_00A1
push dword ptr [PARSER+100]
call SYMBHASCTOR
add esp, 4
mov ebx, dword ptr [PARSER+100]
mov ecx, dword ptr [ebx+4]
and ecx, 33554432
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
not ecx
and eax, ecx
je .Lt_00A3
mov dword ptr [ebp-4], 179
jmp .Lt_009F
.Lt_00A3:
.Lt_00A2:
.Lt_00A1:
.Lt_00A0:
mov ecx, dword ptr [PARSER+100]
mov eax, dword ptr [ecx+108]
mov ecx, dword ptr [eax+48]
or ecx, 2
mov eax, ecx
mov ecx, dword ptr [PARSER+100]
mov ebx, dword ptr [ecx+108]
mov dword ptr [ebx+48], eax
mov dword ptr [ebp-4], 0
.Lt_009F:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HCHECKFORCTORRESULT, .-HCHECKFORCTORRESULT
.balign 16
CCOMPOUNDEND:
.type CCOMPOUNDEND, @function
push ebp
mov ebp, esp
sub esp, 4
.Lt_011E:
push 0
push 1
call LEXGETLOOKAHEAD
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_0121
.Lt_0123:
call CIFSTMTEND
jmp .Lt_0120
.Lt_0124:
call CSELECTSTMTEND
jmp .Lt_0120
.Lt_0125:
call CPROCSTMTEND
jmp .Lt_0120
.Lt_0126:
call CSCOPESTMTEND
jmp .Lt_0120
.Lt_0127:
call CWITHSTMTEND
jmp .Lt_0120
.Lt_0128:
call CNAMESPACESTMTEND
jmp .Lt_0120
.Lt_0129:
call CEXTERNSTMTEND
jmp .Lt_0120
.Lt_012A:
call CENDSTATEMENT
jmp .Lt_0120
.Lt_012B:
push 0
push 0
push 33
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_0120
.Lt_0121:
mov eax, dword ptr [ebp-4]
add eax, 4294967030
cmp eax, 84
ja .Lt_012B
mov eax, dword ptr [ebp-4]
jmp dword ptr [.LT_012C+eax*4-1064]
.LT_012C:
.int .Lt_0123
.int .Lt_012B
.int .Lt_012A
.int .Lt_012B
.int .Lt_0124
.int .Lt_012B
.int .Lt_012B
.int .Lt_012B
.int .Lt_012B
.int .Lt_012B
.int .Lt_012B
.int .Lt_012B
.int .Lt_012B
.int .Lt_012B
.int .Lt_0127
.int .Lt_012B
.int .Lt_012B
.int .Lt_012B
.int .Lt_012B
.int .Lt_0126
.int .Lt_0128
.int .Lt_012B
.int .Lt_012B
.int .Lt_012B
.int .Lt_012B
.int .Lt_012B
.int .Lt_012B
.int .Lt_012B
.int .Lt_012B
.int .Lt_012B
.int .Lt_012B
.int .Lt_012B
.int .Lt_012B
.int .Lt_012B
.int .Lt_012B
.int .Lt_012B
.int .Lt_012B
.int .Lt_012B
.int .Lt_012B
.int .Lt_012B
.int .Lt_0129
.int .Lt_012B
.int .Lt_012B
.int .Lt_012B
.int .Lt_012B
.int .Lt_012B
.int .Lt_012B
.int .Lt_012B
.int .Lt_012A
.int .Lt_012B
.int .Lt_012B
.int .Lt_012B
.int .Lt_012B
.int .Lt_012B
.int .Lt_012B
.int .Lt_012B
.int .Lt_012B
.int .Lt_012B
.int .Lt_012B
.int .Lt_012B
.int .Lt_012B
.int .Lt_012B
.int .Lt_012B
.int .Lt_012B
.int .Lt_012B
.int .Lt_012B
.int .Lt_012B
.int .Lt_012B
.int .Lt_012B
.int .Lt_012B
.int .Lt_012B
.int .Lt_012B
.int .Lt_012B
.int .Lt_012B
.int .Lt_012A
.int .Lt_012B
.int .Lt_012B
.int .Lt_012B
.int .Lt_012B
.int .Lt_0125
.int .Lt_0125
.int .Lt_0125
.int .Lt_0125
.int .Lt_0125
.int .Lt_0125
.Lt_0120:
.Lt_011F:
mov esp, ebp
pop ebp
ret
.size CCOMPOUNDEND, .-CCOMPOUNDEND
	#fbc-1.01.0/src/compiler/parser-compound.bas' compilation took 0.03736092720646411 secs

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
.int fb_ctor__parserzcompound
