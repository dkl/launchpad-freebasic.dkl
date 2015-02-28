	.intel_syntax noprefix

	#FreeBASIC-1.01.0-source/src/compiler/parser-quirk-on.bas' compilation started at 16:30:06 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl CONSTMT
CONSTMT:
.type CONSTMT, @function
push ebp
mov ebp, esp
sub esp, 36
mov dword ptr [ebp-4], 0
.Lt_0081:
mov dword ptr [ebp-4], 0
push 0
call LEXSKIPTOKEN
add esp, 4
push 496
call HMATCH
add esp, 4
test eax, eax
je .Lt_0084
mov eax, dword ptr [ENV+832]
cmp dword ptr [PARSER+100], eax
jne .Lt_0086
push 0
push -1
push 17
call ERRREPORT
add esp, 12
jmp .Lt_0082
.Lt_0086:
.Lt_0085:
mov dword ptr [ebp-16], -1
jmp .Lt_0083
.Lt_0084:
mov dword ptr [ebp-16], 0
.Lt_0083:
mov dword ptr [ebp-8], 0
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 495
jne .Lt_0088
push 0
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_0087
.Lt_0088:
push 7
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_008A
jmp .Lt_0082
.Lt_008A:
.Lt_0089:
.Lt_0087:
push 0
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-36], eax
cmp dword ptr [ebp-36], 390
jne .Lt_008D
.Lt_008E:
mov dword ptr [ebp-12], -1
jmp .Lt_008B
.Lt_008D:
cmp dword ptr [ebp-36], 391
jne .Lt_008F
.Lt_0090:
cmp dword ptr [ebp-8], 0
jne .Lt_0092
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
.Lt_0092:
.Lt_0091:
mov eax, dword ptr [ENV+840]
and eax, 65536
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_0094
push 0
push 145
push 65536
call ERRREPORTNOTALLOWED
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
mov dword ptr [ebp-4], -1
jmp .Lt_0082
.Lt_0094:
.Lt_0093:
cmp dword ptr [ENV+892], 0
jne .Lt_0096
push 0
push 0
push 17
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
mov dword ptr [ebp-4], -1
jmp .Lt_0082
.Lt_0096:
.Lt_0095:
mov dword ptr [ebp-12], 0
jmp .Lt_008B
.Lt_008F:
push 0
push 0
push 17
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
mov dword ptr [ebp-4], -1
jmp .Lt_0082
.Lt_0097:
.Lt_008B:
cmp dword ptr [ebp-8], 0
jne .Lt_0099
push 0
call LEXSKIPTOKEN
add esp, 4
mov dword ptr [ebp-20], 0
push 0
call LEXGETCLASS
add esp, 4
cmp eax, 3
jne .Lt_009B
push 2
push offset Lt_0006
push 0
call LEXGETTEXT
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_009D
push 0
call LEXSKIPTOKEN
add esp, 4
mov dword ptr [ebp-20], -1
.Lt_009D:
.Lt_009C:
.Lt_009B:
.Lt_009A:
cmp dword ptr [ebp-20], 0
jne .Lt_009F
push 34
lea eax, [ebp-32]
push eax
call CIDENTIFIER
add esp, 8
mov dword ptr [ebp-28], eax
push 7
push dword ptr [ebp-28]
call SYMBFINDBYCLASS
add esp, 8
mov dword ptr [ebp-24], eax
cmp dword ptr [ebp-24], 0
jne .Lt_00A1
push 64
call LEXGETTEXT
push eax
call SYMBADDLABEL
add esp, 8
mov dword ptr [ebp-24], eax
.Lt_00A1:
.Lt_00A0:
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp-24]
call ASTNEWVAR
add esp, 20
push eax
call ASTNEWADDROF
add esp, 4
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-16]
cmp eax, -1
sete al
shr eax, 1
sbb eax, eax
push eax
push dword ptr [ebp-8]
call RTLERRORSETHANDLER
add esp, 8
jmp .Lt_009E
.Lt_009F:
mov eax, dword ptr [ebp-16]
cmp eax, -1
sete al
shr eax, 1
sbb eax, eax
push eax
push 0
push 8
push 0
push 0
call ASTNEWCONSTI
add esp, 16
push eax
call RTLERRORSETHANDLER
add esp, 8
.Lt_009E:
mov dword ptr [ebp-4], -1
jmp .Lt_0098
.Lt_0099:
push dword ptr [ebp-12]
push dword ptr [ebp-8]
call CGOTBSTMT
add esp, 8
mov dword ptr [ebp-4], eax
.Lt_0098:
.Lt_0082:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size CONSTMT, .-CONSTMT
.balign 16
fb_ctor__parserzquirkzon:
.type fb_ctor__parserzquirkzon, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__parserzquirkzon, .-fb_ctor__parserzquirkzon
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
CGOTBSTMT:
.type CGOTBSTMT, @function
push ebp
mov ebp, esp
sub esp, 864
push ebx
mov dword ptr [ebp-4], 0
.Lt_0060:
lea eax, [ebp-528]
mov dword ptr [ebp-560], eax
lea eax, [ebp-528]
lea ebx, [ebp-560]
add ebx, 4
mov dword ptr [ebx], eax
lea eax, [ebp-560]
add eax, 8
mov dword ptr [eax], 512
lea eax, [ebp-560]
add eax, 12
mov dword ptr [eax], 8
lea eax, [ebp-560]
add eax, 16
mov dword ptr [eax], 1
lea eax, [ebp-560]
add eax, 20
mov dword ptr [eax], 64
lea eax, [ebp-560]
add eax, 24
mov dword ptr [eax], 0
lea eax, [ebp-560]
add eax, 28
mov dword ptr [eax], 63
lea eax, [ebp-816]
mov dword ptr [ebp-848], eax
lea eax, [ebp-816]
lea ebx, [ebp-848]
add ebx, 4
mov dword ptr [ebx], eax
lea eax, [ebp-848]
add eax, 8
mov dword ptr [eax], 256
lea eax, [ebp-848]
add eax, 12
mov dword ptr [eax], 4
lea eax, [ebp-848]
add eax, 16
mov dword ptr [eax], 1
lea eax, [ebp-848]
add eax, 20
mov dword ptr [eax], 64
lea eax, [ebp-848]
add eax, 24
mov dword ptr [eax], 0
lea eax, [ebp-848]
add eax, 28
mov dword ptr [eax], 63
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 511
cmp ebx, 8
je .Lt_0065
push 0
push 0
push dword ptr [ebp+8]
push 0
push 8
call ASTNEWCONV
add esp, 20
mov dword ptr [ebp+8], eax
cmp dword ptr [ebp+8], 0
jne .Lt_0067
push 0
push -1
push 20
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_0061
.Lt_0067:
.Lt_0066:
.Lt_0065:
.Lt_0064:
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
push 8
call SYMBADDTEMPVAR
add esp, 8
mov dword ptr [ebp-12], eax
push 64
push dword ptr [ebp+8]
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
push eax
call ASTADD
add esp, 4
mov dword ptr [ebp-8], 0
.Lt_0068:
push 0
call LEXGETCLASS
add esp, 4
mov dword ptr [ebp-860], eax
cmp dword ptr [ebp-860], 3
je .Lt_006E
.Lt_006F:
cmp dword ptr [ebp-860], 0
jne .Lt_006D
.Lt_006E:
push 34
lea eax, [ebp-856]
push eax
call CIDENTIFIER
add esp, 8
mov dword ptr [ebp-852], eax
cmp dword ptr [ebp-8], 64
jge .Lt_0071
push 7
push dword ptr [ebp-852]
call SYMBFINDBYCLASS
add esp, 8
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebp+ebx*4-816], eax
mov eax, dword ptr [ebp-8]
cmp dword ptr [ebp+eax*4-816], 0
jne .Lt_0073
push 64
call LEXGETTEXT
push eax
call SYMBADDLABEL
add esp, 8
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebp+ebx*4-816], eax
.Lt_0073:
.Lt_0072:
jmp .Lt_0070
.Lt_0071:
cmp dword ptr [ebp-8], 64
jne .Lt_0074
push 0
push 0
push 286
call ERRREPORT
add esp, 12
.Lt_0074:
.Lt_0070:
push 0
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_006B
.Lt_006D:
push 0
push 0
push 14
call ERRREPORT
add esp, 12
cmp dword ptr [ebp-8], 64
jge .Lt_0077
push 0
call SYMBUNIQUELABEL
push eax
call SYMBADDLABEL
add esp, 8
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebp+ebx*4-816], eax
.Lt_0077:
.Lt_0076:
.Lt_0075:
.Lt_006B:
inc dword ptr [ebp-8]
.Lt_006A:
push 44
call HMATCH
add esp, 4
test eax, eax
jne .Lt_0068
.Lt_0069:
cmp dword ptr [ebp-8], 64
jl .Lt_0079
mov dword ptr [ebp-8], 63
.Lt_0079:
.Lt_0078:
push 4
push 0
call SYMBADDLABEL
add esp, 8
mov dword ptr [ebp-16], eax
mov dword ptr [ebp-860], 0
mov eax, dword ptr [ebp-8]
dec eax
mov dword ptr [ebp-864], eax
jmp .Lt_007B
.Lt_007E:
mov eax, dword ptr [ebp-860]
inc eax
mov ecx, eax
mov ebx, ecx
sar ebx, 31
mov eax, dword ptr [ebp-860]
mov dword ptr [ebp+eax*8-528], ecx
mov dword ptr [ebp+eax*8-524], ebx
.Lt_007C:
inc dword ptr [ebp-860]
.Lt_007B:
mov ecx, dword ptr [ebp-864]
cmp dword ptr [ebp-860], ecx
jle .Lt_007E
.Lt_007D:
mov ebx, dword ptr [ebp-8]
mov ecx, ebx
sar ecx, 31
push ecx
push ebx
push 0
push 1
push dword ptr [ebp-16]
push dword ptr [ebp-8]
lea ebx, [ebp-816]
push ebx
lea ebx, [ebp-528]
push ebx
push dword ptr [ebp-12]
call ASTBUILDJMPTB
add esp, 36
mov dword ptr [ebp+8], eax
cmp dword ptr [ebp+12], 0
je .Lt_0080
push dword ptr [ebp+8]
call ASTADD
add esp, 4
jmp .Lt_007F
.Lt_0080:
push dword ptr [ebp-16]
push dword ptr [ebp+8]
push dword ptr [PARSER+100]
call ASTGOSUBADDJUMPPTR
add esp, 12
.Lt_007F:
push -1
push dword ptr [ebp-16]
call ASTNEWLABEL
add esp, 8
push eax
call ASTADD
add esp, 4
mov dword ptr [ebp-4], -1
.Lt_0061:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CGOTBSTMT, .-CGOTBSTMT
	#FreeBASIC-1.01.0-source/src/compiler/parser-quirk-on.bas' compilation took 0.0346650849096477 secs

.section .rodata
.balign 4
Lt_0006:	.ascii	"0\0"

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
.int fb_ctor__parserzquirkzon
