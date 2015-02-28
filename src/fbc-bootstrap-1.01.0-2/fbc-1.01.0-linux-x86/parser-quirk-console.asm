	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/parser-quirk-console.bas' compilation started at 15:27:36 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl CVIEWSTMT
CVIEWSTMT:
.type CVIEWSTMT, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
mov dword ptr [ebp-4], 0
.Lt_0060:
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp+8], 0
je .Lt_0062
mov dword ptr [ebp-24], -1
jmp .Lt_0078
.Lt_0062:
mov dword ptr [ebp-24], 0
.Lt_0078:
mov eax, dword ptr [ebp-24]
mov dword ptr [ebp-20], eax
push 0
push 1
call LEXGETLOOKAHEAD
add esp, 8
cmp eax, 459
je .Lt_0065
jmp .Lt_0061
.Lt_0065:
.Lt_0064:
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXSKIPTOKEN
add esp, 4
cmp dword ptr [ebp+8], 0
jne .Lt_0067
call CEXPRESSION
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
je .Lt_0069
push 284
call HMATCH
add esp, 4
test eax, eax
jne .Lt_006B
push 0
push 0
push 17
call ERRREPORT
add esp, 12
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-8], eax
.Lt_006B:
.Lt_006A:
push 7
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_006D
jmp .Lt_0061
.Lt_006D:
.Lt_006C:
jmp .Lt_0068
.Lt_0069:
mov dword ptr [ebp-16], -1
.Lt_0068:
.Lt_0067:
.Lt_0066:
cmp dword ptr [ebp-16], 0
je .Lt_006F
cmp dword ptr [ebp+8], 0
je .Lt_0071
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
je .Lt_0073
push 0
push 0
push 6
call ERRREPORT
add esp, 12
jmp .Lt_0072
.Lt_0073:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0072:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_0075
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
jmp .Lt_0074
.Lt_0075:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0074:
.Lt_0071:
.Lt_0070:
push 0
push 7
mov ebx, dword ptr [ebp-20]
mov eax, ebx
sar eax, 31
push eax
push ebx
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-8], eax
push 0
push 7
mov ebx, dword ptr [ebp-20]
mov eax, ebx
sar eax, 31
push eax
push ebx
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-12], eax
.Lt_006F:
.Lt_006E:
push dword ptr [ebp-12]
push dword ptr [ebp-8]
call RTLCONSOLEVIEW
add esp, 8
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp+8], 0
jne .Lt_0077
push dword ptr [ebp-8]
call ASTADD
add esp, 4
.Lt_0077:
.Lt_0076:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0061:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CVIEWSTMT, .-CVIEWSTMT
.balign 16

.globl CWIDTHSTMT
CWIDTHSTMT:
.type CWIDTHSTMT, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
mov dword ptr [ebp-4], 0
.Lt_0079:
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-4], 0
push 0
call LEXSKIPTOKEN
add esp, 4
cmp dword ptr [ebp+8], 0
je .Lt_007C
push 40
call HMATCH
add esp, 4
mov dword ptr [ebp-24], eax
jmp .Lt_007B
.Lt_007C:
mov dword ptr [ebp-24], 0
.Lt_007B:
cmp dword ptr [ebp+8], 0
je .Lt_007E
cmp dword ptr [ebp-24], 0
jne .Lt_0080
push dword ptr [ebp+8]
push 0
push 0
call RTLWIDTHSCREEN
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_007A
jmp .Lt_007F
.Lt_0080:
push 41
call HMATCH
add esp, 4
test eax, eax
je .Lt_0081
push dword ptr [ebp+8]
push 0
push 0
call RTLWIDTHSCREEN
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_007A
.Lt_0081:
.Lt_007F:
.Lt_007E:
.Lt_007D:
push 460
call HMATCH
add esp, 4
test eax, eax
je .Lt_0083
push offset Lt_0084
call ASTNEWCONSTSTR
add esp, 4
mov dword ptr [ebp-20], eax
push 7
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_0086
jmp .Lt_007A
.Lt_0086:
.Lt_0085:
push dword ptr [ebp+8]
push dword ptr [ebp-12]
push dword ptr [ebp-20]
call RTLWIDTHDEV
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_0082
.Lt_0083:
push 35
call HMATCH
add esp, 4
test eax, eax
je .Lt_0087
push 7
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0089
jmp .Lt_007A
.Lt_0089:
.Lt_0088:
push 44
call HMATCH
add esp, 4
test eax, eax
je .Lt_008B
push 7
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_008D
jmp .Lt_007A
.Lt_008D:
.Lt_008C:
jmp .Lt_008A
.Lt_008B:
push 0
push 7
push 4294967295
push 4294967295
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-12], eax
.Lt_008A:
push dword ptr [ebp+8]
push dword ptr [ebp-12]
push dword ptr [ebp-8]
call RTLWIDTHFILE
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_0082
.Lt_0087:
push 44
call HMATCH
add esp, 4
test eax, eax
je .Lt_008E
push 0
push 7
push 4294967295
push 4294967295
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-12], eax
push 7
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 0
jne .Lt_0090
jmp .Lt_007A
.Lt_0090:
.Lt_008F:
push dword ptr [ebp+8]
push dword ptr [ebp-16]
push dword ptr [ebp-12]
call RTLWIDTHSCREEN
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_0082
.Lt_008E:
push 16
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 0
jne .Lt_0092
jmp .Lt_007A
.Lt_0092:
.Lt_0091:
mov eax, dword ptr [ebp-20]
mov ebx, dword ptr [eax+4]
and ebx, 511
push ebx
call SYMBISSTRING
add esp, 4
test eax, eax
je .Lt_0094
push 44
call HMATCH
add esp, 4
test eax, eax
je .Lt_0096
push 7
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_0098
jmp .Lt_007A
.Lt_0098:
.Lt_0097:
jmp .Lt_0095
.Lt_0096:
push 0
push 7
push 4294967295
push 4294967295
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-12], eax
.Lt_0095:
push dword ptr [ebp+8]
push dword ptr [ebp-12]
push dword ptr [ebp-20]
call RTLWIDTHDEV
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_0093
.Lt_0094:
mov eax, dword ptr [ebp-20]
mov dword ptr [ebp-12], eax
mov dword ptr [ebp-20], 0
push 44
call HMATCH
add esp, 4
test eax, eax
je .Lt_009A
push 7
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 0
jne .Lt_009C
jmp .Lt_007A
.Lt_009C:
.Lt_009B:
jmp .Lt_0099
.Lt_009A:
push 0
push 7
push 4294967295
push 4294967295
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-16], eax
.Lt_0099:
push dword ptr [ebp+8]
push dword ptr [ebp-16]
push dword ptr [ebp-12]
call RTLWIDTHSCREEN
add esp, 12
mov dword ptr [ebp-4], eax
.Lt_0093:
.Lt_0082:
cmp dword ptr [ebp-24], 0
je .Lt_009E
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_00A0
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
jmp .Lt_009F
.Lt_00A0:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_009F:
.Lt_009E:
.Lt_009D:
.Lt_007A:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CWIDTHSTMT, .-CWIDTHSTMT
.balign 16

.globl CCOLORSTMT
CCOLORSTMT:
.type CCOLORSTMT, @function
push ebp
mov ebp, esp
sub esp, 12
mov dword ptr [ebp-4], 0
.Lt_00A1:
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-4], 0
push 0
call LEXSKIPTOKEN
add esp, 4
cmp dword ptr [ebp+8], 0
je .Lt_00A4
push 40
call HMATCH
add esp, 4
cmp eax, -1
jne .Lt_00A6
call CEXPRESSION
mov dword ptr [ebp-8], eax
push 44
call HMATCH
add esp, 4
cmp eax, -1
jne .Lt_00A8
push -1
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_00AA
jmp .Lt_00A2
.Lt_00AA:
.Lt_00A9:
.Lt_00A8:
.Lt_00A7:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_00AC
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
jmp .Lt_00AB
.Lt_00AC:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_00AB:
.Lt_00A6:
.Lt_00A5:
jmp .Lt_00A3
.Lt_00A4:
push 40
call HMATCH
add esp, 4
cmp eax, -1
jne .Lt_00AE
call CEXPRESSION
mov dword ptr [ebp-8], eax
push 44
call HMATCH
add esp, 4
cmp eax, -1
jne .Lt_00B0
push -1
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_00B2
jmp .Lt_00A2
.Lt_00B2:
.Lt_00B1:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_00B4
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
jmp .Lt_00B3
.Lt_00B4:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_00B3:
jmp .Lt_00AF
.Lt_00B0:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_00B6
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
jmp .Lt_00B5
.Lt_00B6:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_00B5:
push 44
call HMATCH
add esp, 4
cmp eax, -1
jne .Lt_00B8
push -1
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_00BA
jmp .Lt_00A2
.Lt_00BA:
.Lt_00B9:
.Lt_00B8:
.Lt_00B7:
.Lt_00AF:
jmp .Lt_00AD
.Lt_00AE:
call CEXPRESSION
mov dword ptr [ebp-8], eax
push 44
call HMATCH
add esp, 4
cmp eax, -1
jne .Lt_00BC
push -1
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_00BE
jmp .Lt_00A2
.Lt_00BE:
.Lt_00BD:
.Lt_00BC:
.Lt_00BB:
.Lt_00AD:
.Lt_00A3:
push dword ptr [ebp+8]
push dword ptr [ebp-12]
push dword ptr [ebp-8]
call RTLCOLOR
add esp, 12
mov dword ptr [ebp-4], eax
.Lt_00A2:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size CCOLORSTMT, .-CCOLORSTMT
.balign 16

.globl CSCREENFUNCT
CSCREENFUNCT:
.type CSCREENFUNCT, @function
push ebp
mov ebp, esp
sub esp, 20
mov dword ptr [ebp-4], 0
.Lt_00BF:
mov dword ptr [ebp-4], 0
push 0
call LEXSKIPTOKEN
add esp, 4
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-12], 0
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
jne .Lt_00C2
push 0
call LEXSKIPTOKEN
add esp, 4
mov dword ptr [ebp-8], -1
call CEXPRESSION
mov dword ptr [ebp-12], eax
.Lt_00C2:
.Lt_00C1:
cmp dword ptr [ebp-12], 0
jne .Lt_00C4
push -1
push 0
push 0
call RTLPAGESET
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_00C3
.Lt_00C4:
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-20], 0
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
je .Lt_00C6
push 0
push 0
push 16
call ERRREPORT
add esp, 12
jmp .Lt_00C5
.Lt_00C6:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_00C5:
push 7
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 0
jne .Lt_00C8
jmp .Lt_00C0
.Lt_00C8:
.Lt_00C7:
mov dword ptr [ebp-20], 0
push 44
call HMATCH
add esp, 4
test eax, eax
je .Lt_00CA
push 7
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 0
jne .Lt_00CC
jmp .Lt_00C0
.Lt_00CC:
.Lt_00CB:
.Lt_00CA:
.Lt_00C9:
push dword ptr [ebp-20]
push dword ptr [ebp-16]
push dword ptr [ebp-12]
call RTLCONSOLEREADXY
add esp, 12
mov dword ptr [ebp-4], eax
.Lt_00C3:
cmp dword ptr [ebp-8], 0
je .Lt_00CE
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_00D0
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
jmp .Lt_00CF
.Lt_00D0:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_00CF:
.Lt_00CE:
.Lt_00CD:
.Lt_00C0:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size CSCREENFUNCT, .-CSCREENFUNCT
.balign 16
fb_ctor__parserzquirkzconsole:
.type fb_ctor__parserzquirkzconsole, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__parserzquirkzconsole, .-fb_ctor__parserzquirkzconsole
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
	#fbc-1.01.0/src/compiler/parser-quirk-console.bas' compilation took 0.03239301848225296 secs

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
Lt_0084:	.ascii	"LPT1:\0"

.section .ctors, "aw", @progbits
.int fb_ctor__parserzquirkzconsole
