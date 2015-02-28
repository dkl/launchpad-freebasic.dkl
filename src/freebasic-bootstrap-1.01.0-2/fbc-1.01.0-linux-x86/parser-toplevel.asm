	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/parser-toplevel.bas' compilation started at 14:16:37 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl PARSERSETCTX
PARSERSETCTX:
.type PARSERSETCTX, @function
.Lt_005F:
mov dword ptr [PARSER+92], 0
mov dword ptr [PARSER+100], 0
mov dword ptr [PARSER+104], 0
mov dword ptr [PARSER+88], 0
mov dword ptr [PARSER+96], 0
mov dword ptr [PARSER+28], 0
mov dword ptr [PARSER+24], 0
mov dword ptr [PARSER+140], 0
mov dword ptr [PARSER+144], 2
mov dword ptr [PARSER+152], 0
mov dword ptr [PARSER+148], -2147483648
call PARSERCOMPOUNDSTMTSETCTX
.Lt_0060:
ret
.size PARSERSETCTX, .-PARSERSETCTX
.balign 16

.globl PARSERINIT
PARSERINIT:
.type PARSERINIT, @function
.Lt_0061:
call PARSERCOMPOUNDSTMTINIT
call PARSERPROCCALLINIT
call PARSERLETINIT
.Lt_0062:
ret
.size PARSERINIT, .-PARSERINIT
.balign 16

.globl PARSEREND
PARSEREND:
.type PARSEREND, @function
.Lt_0063:
call PARSERLETEND
call PARSERPROCCALLEND
call PARSERCOMPOUNDSTMTEND
.Lt_0064:
ret
.size PARSEREND, .-PARSEREND
.balign 16

.globl CPROGRAM
CPROGRAM:
.type CPROGRAM, @function
push ebp
mov ebp, esp
sub esp, 8
.Lt_006D:
mov eax, dword ptr [PP+196]
mov dword ptr [ebp-4], eax
.Lt_006F:
mov eax, dword ptr [LEX+839664]
push dword ptr [eax+16548]
push 108
call ASTNEWDBG
add esp, 8
push eax
call ASTADD
add esp, 4
call CLABEL
call CSTATEMENT
push 0
call CCOMMENT
add esp, 4
call FBSHOULDCONTINUE
test eax, eax
jne .Lt_0073
jmp .Lt_006E
.Lt_0073:
.Lt_0072:
cmp dword ptr [ENV+144], 0
je .Lt_0075
cmp dword ptr [ENV+828], 0
jne .Lt_0077
call HEMITCURRENTLINETEXT
.Lt_0077:
.Lt_0076:
.Lt_0075:
.Lt_0074:
push 0
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 257
jne .Lt_007A
.Lt_007B:
push 0
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_0078
.Lt_007A:
cmp dword ptr [ebp-8], 256
jne .Lt_007C
.Lt_007D:
jmp .Lt_0078
.Lt_007C:
push 0
push 0
push 3
call ERRREPORT
add esp, 12
push 0
push 0
push -1
push 257
call HSKIPUNTIL
add esp, 16
.Lt_007E:
.Lt_0078:
call FBSHOULDCONTINUE
test eax, eax
jne .Lt_0080
jmp .Lt_006E
.Lt_0080:
.Lt_007F:
push 0
push 109
call ASTNEWDBG
add esp, 8
push eax
call ASTADD
add esp, 4
inc dword ptr [PARSER+28]
.Lt_0071:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 256
jne .Lt_006F
.Lt_0070:
mov eax, dword ptr [ebp-4]
cmp dword ptr [PP+196], eax
je .Lt_0082
push 0
push 0
push 289
call ERRREPORT
add esp, 12
.Lt_0082:
.Lt_0081:
push 0
call LEXSKIPTOKEN
add esp, 4
cmp dword ptr [ENV+828], 0
jne .Lt_0084
call CCOMPSTMTCHECK
.Lt_0084:
.Lt_0083:
.Lt_006E:
mov esp, ebp
pop ebp
ret
.size CPROGRAM, .-CPROGRAM
.balign 16

.globl HSKIPUNTIL
HSKIPUNTIL:
.type HSKIPUNTIL, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_0085:
mov dword ptr [ebp-4], 0
mov dword ptr [ebp-4], 0
.Lt_0087:
push dword ptr [ebp+16]
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-8], eax
jmp .Lt_008B
.Lt_008D:
jmp .Lt_0088
jmp .Lt_008A
.Lt_008E:
cmp dword ptr [ebp+8], 257
je .Lt_0090
jmp .Lt_0088
.Lt_0090:
.Lt_008F:
jmp .Lt_008A
.Lt_0091:
jmp .Lt_0086
jmp .Lt_008A
.Lt_0092:
cmp dword ptr [ebp+8], 40
jne .Lt_0094
jmp .Lt_0088
.Lt_0094:
.Lt_0093:
inc dword ptr [ebp-4]
jmp .Lt_008A
.Lt_0095:
inc dword ptr [ebp-4]
jmp .Lt_008A
.Lt_0096:
cmp dword ptr [ebp-4], 0
jle .Lt_0098
dec dword ptr [ebp-4]
jmp .Lt_0097
.Lt_0098:
cmp dword ptr [ebp+8], 41
jne .Lt_009A
jmp .Lt_0088
.Lt_009A:
.Lt_0099:
.Lt_0097:
jmp .Lt_008A
.Lt_009B:
cmp dword ptr [ebp-4], 0
jle .Lt_009D
dec dword ptr [ebp-4]
jmp .Lt_009C
.Lt_009D:
cmp dword ptr [ebp+8], 125
jne .Lt_009F
jmp .Lt_0088
.Lt_009F:
.Lt_009E:
.Lt_009C:
jmp .Lt_008A
.Lt_00A0:
mov eax, dword ptr [ebp+8]
cmp eax, 44
sete al
shr eax, 1
sbb eax, eax
or eax, dword ptr [ebp+20]
je .Lt_00A2
cmp dword ptr [ebp-4], 0
jne .Lt_00A4
jmp .Lt_0088
.Lt_00A4:
.Lt_00A3:
.Lt_00A2:
.Lt_00A1:
jmp .Lt_008A
.Lt_00A5:
push dword ptr [ebp+16]
call LEXGETTOKEN
add esp, 4
mov ebx, dword ptr [ebp+8]
cmp eax, ebx
jne .Lt_00A7
jmp .Lt_0088
.Lt_00A7:
.Lt_00A6:
jmp .Lt_008A
.Lt_008B:
mov ebx, dword ptr [ebp-8]
add ebx, 4294967256
cmp ebx, 220
ja .Lt_00A5
mov ebx, dword ptr [ebp-8]
jmp dword ptr [.LT_00A8+ebx*4-160]
.LT_00A8:
.int .Lt_0092
.int .Lt_0096
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A0
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_0095
.int .Lt_00A5
.int .Lt_009B
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_0091
.int .Lt_008D
.int .Lt_008E
.int .Lt_008E
.int .Lt_008E
.Lt_008A:
push dword ptr [ebp+16]
call LEXSKIPTOKEN
add esp, 4
.Lt_0089:
jmp .Lt_0087
.Lt_0088:
cmp dword ptr [ebp+12], 0
je .Lt_00AA
push dword ptr [ebp+16]
call LEXGETTOKEN
add esp, 4
cmp dword ptr [ebp+8], eax
jne .Lt_00AC
push dword ptr [ebp+16]
call LEXSKIPTOKEN
add esp, 4
.Lt_00AC:
.Lt_00AB:
.Lt_00AA:
.Lt_00A9:
.Lt_0086:
pop ebx
mov esp, ebp
pop ebp
ret
.size HSKIPUNTIL, .-HSKIPUNTIL
.balign 16

.globl HSKIPCOMPOUND
HSKIPCOMPOUND:
.type HSKIPCOMPOUND, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
.Lt_00AE:
mov dword ptr [ebp-4], 0
mov dword ptr [ebp-8], 0
cmp dword ptr [ebp+12], -1
jne .Lt_00B1
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp+12], eax
.Lt_00B1:
.Lt_00B0:
mov dword ptr [ebp-4], 0
mov dword ptr [ebp-8], 0
.Lt_00B2:
push dword ptr [ebp+16]
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 256
jne .Lt_00B7
.Lt_00B8:
jmp .Lt_00AF
jmp .Lt_00B5
.Lt_00B7:
cmp dword ptr [ebp-12], 257
jne .Lt_00B9
.Lt_00BA:
mov dword ptr [ebp-8], 0
jmp .Lt_00B5
.Lt_00B9:
cmp dword ptr [ebp-12], 259
je .Lt_00BC
.Lt_00BD:
cmp dword ptr [ebp-12], 260
jne .Lt_00BB
.Lt_00BC:
mov dword ptr [ebp-8], -1
jmp .Lt_00B5
.Lt_00BB:
cmp dword ptr [ebp-12], 340
jne .Lt_00BE
.Lt_00BF:
cmp dword ptr [ebp-8], 0
jne .Lt_00C1
push dword ptr [ebp+16]
push 1
call LEXGETLOOKAHEAD
add esp, 8
mov ebx, dword ptr [ebp+12]
cmp eax, ebx
jne .Lt_00C3
push dword ptr [ebp+16]
call LEXSKIPTOKEN
add esp, 4
cmp dword ptr [ebp-4], 0
jle .Lt_00C5
dec dword ptr [ebp-4]
.Lt_00C5:
.Lt_00C4:
cmp dword ptr [ebp-4], 0
jne .Lt_00C7
jmp .Lt_00B3
.Lt_00C7:
.Lt_00C6:
.Lt_00C3:
.Lt_00C2:
.Lt_00C1:
.Lt_00C0:
jmp .Lt_00B5
.Lt_00BE:
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebp-12], ebx
jne .Lt_00C8
.Lt_00C9:
cmp dword ptr [ebp-8], 0
jne .Lt_00CB
inc dword ptr [ebp-4]
.Lt_00CB:
.Lt_00CA:
.Lt_00C8:
.Lt_00B5:
push dword ptr [ebp+16]
call LEXSKIPTOKEN
add esp, 4
.Lt_00B4:
jmp .Lt_00B2
.Lt_00B3:
push dword ptr [ebp+16]
call LEXSKIPTOKEN
add esp, 4
.Lt_00AF:
pop ebx
mov esp, ebp
pop ebp
ret
.size HSKIPCOMPOUND, .-HSKIPCOMPOUND
.balign 16

.globl HMATCHEXPR
HMATCHEXPR:
.type HMATCHEXPR, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_00CC:
mov dword ptr [ebp-8], 0
call CEXPRESSION
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_00CF
push 0
push 0
push 9
call ERRREPORT
add esp, 12
cmp dword ptr [ebp+8], -2147483648
jne .Lt_00D1
mov dword ptr [ebp-4], 0
jmp .Lt_00CD
.Lt_00D1:
.Lt_00D0:
push 0
push dword ptr [ebp+8]
call ASTNEWCONSTZ
add esp, 8
mov dword ptr [ebp-8], eax
.Lt_00CF:
.Lt_00CE:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_00CD:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size HMATCHEXPR, .-HMATCHEXPR
.balign 16
fb_ctor__parserztoplevel:
.type fb_ctor__parserztoplevel, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__parserztoplevel, .-fb_ctor__parserztoplevel
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
HEMITCURRENTLINETEXT:
.type HEMITCURRENTLINETEXT, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0065:
mov eax, dword ptr [AST+40]
mov ebx, dword ptr [eax+60]
mov dword ptr [ebp-4], ebx
.Lt_0067:
cmp dword ptr [ebp-4], 0
je .Lt_0068
mov ebx, dword ptr [ebp-4]
cmp dword ptr [ebx], 30
jne .Lt_006A
mov ebx, dword ptr [ebp-4]
cmp dword ptr [ebx+24], 108
jne .Lt_006C
push dword ptr [ebp-4]
mov ebx, dword ptr [LEX+839664]
push dword ptr [ebx+49376]
call ASTNEWLIT
add esp, 4
push eax
call ASTADDAFTER
add esp, 8
jmp .Lt_0068
.Lt_006C:
.Lt_006B:
.Lt_006A:
.Lt_0069:
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+64]
mov dword ptr [ebp-4], ebx
jmp .Lt_0067
.Lt_0068:
mov ebx, dword ptr [LEX+839664]
lea eax, [ebx+49376]
push eax
call DZSTRRESET
add esp, 4
.Lt_0066:
pop ebx
mov esp, ebp
pop ebp
ret
.size HEMITCURRENTLINETEXT, .-HEMITCURRENTLINETEXT
	#fbc-1.01.0/src/compiler/parser-toplevel.bas' compilation took 0.0266438809921965 secs

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

.globl PARSER
.balign 4
	.lcomm	PARSER,160

.section .ctors, "aw", @progbits
.int fb_ctor__parserztoplevel
