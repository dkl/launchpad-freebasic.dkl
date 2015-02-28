	.intel_syntax noprefix

	#FreeBASIC-1.01.0-source/src/compiler/lex-utf.bas' compilation started at 16:30:04 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl LEXREADUTF8
LEXREADUTF8:
.type LEXREADUTF8, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_009E:
mov dword ptr [ebp-4], 0
jmp .Lt_00A1
call HUTF8TOCHAR
mov dword ptr [ebp-4], eax
jmp .Lt_00A0
.Lt_00A1:
jmp .Lt_00A2
call HUTF8TOUTF16LE
mov dword ptr [ebp-4], eax
jmp .Lt_00A0
.Lt_00A2:
call HUTF8TOUTF32LE
mov dword ptr [ebp-4], eax
.Lt_00A0:
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [ebp-4]
mov dword ptr [eax+16588], ebx
mov ebx, dword ptr [LEX+839664]
lea eax, [ebx+16596]
mov ebx, dword ptr [LEX+839664]
mov dword ptr [ebx+16592], eax
.Lt_009F:
pop ebx
mov esp, ebp
pop ebp
ret
.size LEXREADUTF8, .-LEXREADUTF8
.balign 16

.globl LEXREADUTF16LE
LEXREADUTF16LE:
.type LEXREADUTF16LE, @function
push ebx
.Lt_00CC:
jmp .Lt_00CF
call HUTF16LETOCHAR
mov dword ptr [Lt_00D1], eax
jmp .Lt_00CE
.Lt_00CF:
jmp .Lt_00D0
call HUTF16LETOUTF16LE
mov dword ptr [Lt_00D1], eax
jmp .Lt_00CE
.Lt_00D0:
call HUTF16LETOUTF32LE
mov dword ptr [Lt_00D1], eax
.Lt_00CE:
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [Lt_00D1]
mov dword ptr [eax+16588], ebx
mov ebx, dword ptr [LEX+839664]
lea eax, [ebx+16596]
mov ebx, dword ptr [LEX+839664]
mov dword ptr [ebx+16592], eax
.Lt_00CD:
pop ebx
ret
.size LEXREADUTF16LE, .-LEXREADUTF16LE

.section .bss
.balign 4
	.lcomm	Lt_00D1,4

.section .text
.balign 16

.globl LEXREADUTF16BE
LEXREADUTF16BE:
.type LEXREADUTF16BE, @function
push ebx
.Lt_00F9:
jmp .Lt_00FC
call HUTF16BETOCHAR
mov dword ptr [Lt_00FE], eax
jmp .Lt_00FB
.Lt_00FC:
jmp .Lt_00FD
call HUTF16BETOUTF16LE
mov dword ptr [Lt_00FE], eax
jmp .Lt_00FB
.Lt_00FD:
call HUTF16BETOUTF32LE
mov dword ptr [Lt_00FE], eax
.Lt_00FB:
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [Lt_00FE]
mov dword ptr [eax+16588], ebx
mov ebx, dword ptr [LEX+839664]
lea eax, [ebx+16596]
mov ebx, dword ptr [LEX+839664]
mov dword ptr [ebx+16592], eax
.Lt_00FA:
pop ebx
ret
.size LEXREADUTF16BE, .-LEXREADUTF16BE

.section .bss
.balign 4
	.lcomm	Lt_00FE,4

.section .text
.balign 16

.globl LEXREADUTF32LE
LEXREADUTF32LE:
.type LEXREADUTF32LE, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0120:
mov dword ptr [ebp-4], 0
jmp .Lt_0123
call HUTF32LETOCHAR
mov dword ptr [ebp-4], eax
jmp .Lt_0122
.Lt_0123:
jmp .Lt_0124
call HUTF32LETOUTF16LE
mov dword ptr [ebp-4], eax
jmp .Lt_0122
.Lt_0124:
call HUTF32LETOUTF32LE
mov dword ptr [ebp-4], eax
.Lt_0122:
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [ebp-4]
mov dword ptr [eax+16588], ebx
mov ebx, dword ptr [LEX+839664]
lea eax, [ebx+16596]
mov ebx, dword ptr [LEX+839664]
mov dword ptr [ebx+16592], eax
.Lt_0121:
pop ebx
mov esp, ebp
pop ebp
ret
.size LEXREADUTF32LE, .-LEXREADUTF32LE
.balign 16

.globl LEXREADUTF32BE
LEXREADUTF32BE:
.type LEXREADUTF32BE, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0144:
mov dword ptr [ebp-4], 0
jmp .Lt_0147
call HUTF32BETOCHAR
mov dword ptr [ebp-4], eax
jmp .Lt_0146
.Lt_0147:
jmp .Lt_0148
call HUTF32BETOUTF16LE
mov dword ptr [ebp-4], eax
jmp .Lt_0146
.Lt_0148:
call HUTF32BETOUTF32LE
mov dword ptr [ebp-4], eax
.Lt_0146:
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [ebp-4]
mov dword ptr [eax+16588], ebx
mov ebx, dword ptr [LEX+839664]
lea eax, [ebx+16596]
mov ebx, dword ptr [LEX+839664]
mov dword ptr [ebx+16592], eax
.Lt_0145:
pop ebx
mov esp, ebp
pop ebp
ret
.size LEXREADUTF32BE, .-LEXREADUTF32BE
.balign 16
fb_ctor__lexzutf:
.type fb_ctor__lexzutf, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__lexzutf, .-fb_ctor__lexzutf
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
HUTF8TOCHAR:
.type HUTF8TOCHAR, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_0060:
mov eax, dword ptr [LEX+839664]
lea ebx, [eax+16596]
mov dword ptr [Lt_0149], ebx
mov dword ptr [Lt_014A], 0
.Lt_0063:
cmp dword ptr [Lt_014A], 8192
jge .Lt_0064
push dword ptr [ENV+240]
call fb_FileEof
add esp, 4
test eax, eax
je .Lt_0066
jmp .Lt_0064
.Lt_0066:
.Lt_0065:
push 1
push offset Lt_014B
push 0
push dword ptr [ENV+240]
call fb_FileGet
add esp, 16
test eax, eax
je .Lt_0068
jmp .Lt_0064
.Lt_0068:
.Lt_0067:
movzx eax, byte ptr [Lt_014B]
movzx ebx, byte ptr [UTF8_TRAILINGTB+eax]
mov dword ptr [Lt_014C], ebx
mov dword ptr [Lt_014D], 0
mov ebx, offset Lt_014B
mov dword ptr [Lt_014E], ebx
cmp dword ptr [Lt_014C], 0
jle .Lt_006A
push dword ptr [Lt_014C]
push offset Lt_014B + 1
push 0
push dword ptr [ENV+240]
call fb_FileGet
add esp, 16
test eax, eax
je .Lt_006C
jmp .Lt_0064
.Lt_006C:
.Lt_006B:
mov eax, dword ptr [Lt_014C]
mov dword ptr [Lt_014F], eax
.Lt_006D:
mov eax, dword ptr [Lt_014E]
movzx ebx, byte ptr [eax]
add dword ptr [Lt_014D], ebx
inc dword ptr [Lt_014E]
shl dword ptr [Lt_014D], 6
dec dword ptr [Lt_014F]
.Lt_006F:
cmp dword ptr [Lt_014F], 0
jg .Lt_006D
.Lt_006E:
.Lt_006A:
.Lt_0069:
mov ebx, dword ptr [Lt_014E]
movzx eax, byte ptr [ebx]
add dword ptr [Lt_014D], eax
mov eax, dword ptr [Lt_014C]
mov ebx, dword ptr [UTF8_OFFSETSTB+eax*4]
sub dword ptr [Lt_014D], ebx
cmp dword ptr [Lt_014D], 255
jbe .Lt_0071
mov dword ptr [Lt_014D], 63
.Lt_0071:
.Lt_0070:
mov bl, byte ptr [Lt_014D]
mov eax, dword ptr [Lt_0149]
mov byte ptr [eax], bl
inc dword ptr [Lt_0149]
inc dword ptr [Lt_014A]
jmp .Lt_0063
.Lt_0064:
mov ebx, dword ptr [Lt_014A]
mov dword ptr [ebp-4], ebx
.Lt_0061:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HUTF8TOCHAR, .-HUTF8TOCHAR

.section .bss
.balign 4
	.lcomm	Lt_014B,7
.balign 4
	.lcomm	Lt_014E,4
.balign 4
	.lcomm	Lt_014D,4
.balign 4
	.lcomm	Lt_0149,4
.balign 4
	.lcomm	Lt_014A,4
.balign 4
	.lcomm	Lt_014C,4
.balign 4
	.lcomm	Lt_014F,4

.section .text
.balign 16
HUTF8TOUTF16LE:
.type HUTF8TOUTF16LE, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_0073:
mov eax, dword ptr [LEX+839664]
lea ebx, [eax+16596]
mov dword ptr [Lt_0150], ebx
mov dword ptr [Lt_0151], 0
.Lt_0076:
cmp dword ptr [Lt_0151], 8192
jge .Lt_0077
push dword ptr [ENV+240]
call fb_FileEof
add esp, 4
test eax, eax
je .Lt_0079
jmp .Lt_0077
.Lt_0079:
.Lt_0078:
push 1
push offset Lt_0152
push 0
push dword ptr [ENV+240]
call fb_FileGet
add esp, 16
test eax, eax
je .Lt_007B
jmp .Lt_0077
.Lt_007B:
.Lt_007A:
movzx eax, byte ptr [Lt_0152]
movzx ebx, byte ptr [UTF8_TRAILINGTB+eax]
mov dword ptr [Lt_0153], ebx
mov dword ptr [Lt_0154], 0
mov ebx, offset Lt_0152
mov dword ptr [Lt_0155], ebx
cmp dword ptr [Lt_0153], 0
jle .Lt_007D
push dword ptr [Lt_0153]
push offset Lt_0152 + 1
push 0
push dword ptr [ENV+240]
call fb_FileGet
add esp, 16
test eax, eax
je .Lt_007F
jmp .Lt_0077
.Lt_007F:
.Lt_007E:
mov eax, dword ptr [Lt_0153]
mov dword ptr [Lt_0156], eax
.Lt_0080:
mov eax, dword ptr [Lt_0155]
movzx ebx, byte ptr [eax]
add dword ptr [Lt_0154], ebx
inc dword ptr [Lt_0155]
shl dword ptr [Lt_0154], 6
dec dword ptr [Lt_0156]
.Lt_0082:
cmp dword ptr [Lt_0156], 0
jg .Lt_0080
.Lt_0081:
.Lt_007D:
.Lt_007C:
mov ebx, dword ptr [Lt_0155]
movzx eax, byte ptr [ebx]
add dword ptr [Lt_0154], eax
mov eax, dword ptr [Lt_0153]
mov ebx, dword ptr [UTF8_OFFSETSTB+eax*4]
sub dword ptr [Lt_0154], ebx
cmp dword ptr [Lt_0154], 65535
jbe .Lt_0084
cmp dword ptr [Lt_0151], 8191
jge .Lt_0086
mov ebx, dword ptr [Lt_0154]
shr ebx, 10
add ebx, 55296
mov eax, dword ptr [Lt_0150]
mov word ptr [eax], bx
add dword ptr [Lt_0150], 2
inc dword ptr [Lt_0151]
.Lt_0086:
.Lt_0085:
mov ebx, dword ptr [Lt_0154]
and ebx, 1023
add ebx, 56320
mov dword ptr [Lt_0154], ebx
.Lt_0084:
.Lt_0083:
mov bx, word ptr [Lt_0154]
mov eax, dword ptr [Lt_0150]
mov word ptr [eax], bx
add dword ptr [Lt_0150], 2
inc dword ptr [Lt_0151]
jmp .Lt_0076
.Lt_0077:
mov ebx, dword ptr [Lt_0151]
mov dword ptr [ebp-4], ebx
.Lt_0074:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HUTF8TOUTF16LE, .-HUTF8TOUTF16LE

.section .bss
.balign 4
	.lcomm	Lt_0152,7
.balign 4
	.lcomm	Lt_0155,4
.balign 4
	.lcomm	Lt_0154,4
.balign 4
	.lcomm	Lt_0150,4
.balign 4
	.lcomm	Lt_0151,4
.balign 4
	.lcomm	Lt_0153,4
.balign 4
	.lcomm	Lt_0156,4

.section .text
.balign 16
HUTF8TOUTF32LE:
.type HUTF8TOUTF32LE, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_0087:
mov eax, dword ptr [LEX+839664]
lea ebx, [eax+16596]
mov dword ptr [Lt_0157], ebx
mov dword ptr [Lt_0158], 0
.Lt_008A:
cmp dword ptr [Lt_0158], 8192
jge .Lt_008B
push dword ptr [ENV+240]
call fb_FileEof
add esp, 4
test eax, eax
je .Lt_008D
jmp .Lt_008B
.Lt_008D:
.Lt_008C:
push 1
push offset Lt_0159
push 0
push dword ptr [ENV+240]
call fb_FileGet
add esp, 16
test eax, eax
je .Lt_008F
jmp .Lt_008B
.Lt_008F:
.Lt_008E:
movzx eax, byte ptr [Lt_0159]
movzx ebx, byte ptr [UTF8_TRAILINGTB+eax]
mov dword ptr [Lt_015A], ebx
mov dword ptr [Lt_015B], 0
mov ebx, offset Lt_0159
mov dword ptr [Lt_015C], ebx
cmp dword ptr [Lt_015A], 0
jle .Lt_0091
push dword ptr [Lt_015A]
push offset Lt_0159 + 1
push 0
push dword ptr [ENV+240]
call fb_FileGet
add esp, 16
test eax, eax
je .Lt_0093
jmp .Lt_008B
.Lt_0093:
.Lt_0092:
mov eax, dword ptr [Lt_015A]
mov dword ptr [Lt_015D], eax
.Lt_0094:
mov eax, dword ptr [Lt_015C]
movzx ebx, byte ptr [eax]
add dword ptr [Lt_015B], ebx
inc dword ptr [Lt_015C]
shl dword ptr [Lt_015B], 6
dec dword ptr [Lt_015D]
.Lt_0096:
cmp dword ptr [Lt_015D], 0
jg .Lt_0094
.Lt_0095:
.Lt_0091:
.Lt_0090:
mov ebx, dword ptr [Lt_015C]
movzx eax, byte ptr [ebx]
add dword ptr [Lt_015B], eax
mov eax, dword ptr [Lt_015A]
mov ebx, dword ptr [UTF8_OFFSETSTB+eax*4]
sub dword ptr [Lt_015B], ebx
mov ebx, dword ptr [Lt_0157]
mov eax, dword ptr [Lt_015B]
mov dword ptr [ebx], eax
add dword ptr [Lt_0157], 4
inc dword ptr [Lt_0158]
jmp .Lt_008A
.Lt_008B:
mov eax, dword ptr [Lt_0158]
mov dword ptr [ebp-4], eax
.Lt_0088:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HUTF8TOUTF32LE, .-HUTF8TOUTF32LE

.section .bss
.balign 4
	.lcomm	Lt_0159,7
.balign 4
	.lcomm	Lt_015C,4
.balign 4
	.lcomm	Lt_015B,4
.balign 4
	.lcomm	Lt_0157,4
.balign 4
	.lcomm	Lt_0158,4
.balign 4
	.lcomm	Lt_015A,4
.balign 4
	.lcomm	Lt_015D,4

.section .text
.balign 16
HUTF16LETOCHAR:
.type HUTF16LETOCHAR, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_00A3:
mov eax, dword ptr [LEX+839664]
lea ebx, [eax+16596]
mov dword ptr [Lt_015E], ebx
mov dword ptr [Lt_015F], 0
.Lt_00A5:
cmp dword ptr [Lt_015F], 8192
jge .Lt_00A6
push dword ptr [ENV+240]
call fb_FileEof
add esp, 4
test eax, eax
je .Lt_00A8
jmp .Lt_00A6
.Lt_00A8:
.Lt_00A7:
push 2
push offset Lt_0160
push 0
push dword ptr [ENV+240]
call fb_FileGet
add esp, 16
test eax, eax
je .Lt_00AA
jmp .Lt_00A6
.Lt_00AA:
.Lt_00A9:
movzx eax, word ptr [Lt_0160]
cmp eax, 255
jle .Lt_00AC
movzx eax, word ptr [Lt_0160]
cmp eax, 55296
jl .Lt_00AE
movzx eax, word ptr [Lt_0160]
cmp eax, 56319
jg .Lt_00B0
push 2
push offset Lt_0160
push 0
push dword ptr [ENV+240]
call fb_FileGet
add esp, 16
test eax, eax
je .Lt_00B2
jmp .Lt_00A6
.Lt_00B2:
.Lt_00B1:
.Lt_00B0:
.Lt_00AF:
.Lt_00AE:
.Lt_00AD:
mov word ptr [Lt_0160], 63
.Lt_00AC:
.Lt_00AB:
mov al, byte ptr [Lt_0160]
mov ebx, dword ptr [Lt_015E]
mov byte ptr [ebx], al
inc dword ptr [Lt_015E]
inc dword ptr [Lt_015F]
jmp .Lt_00A5
.Lt_00A6:
mov eax, dword ptr [Lt_015F]
mov dword ptr [ebp-4], eax
.Lt_00A4:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HUTF16LETOCHAR, .-HUTF16LETOCHAR

.section .bss
.balign 4
	.lcomm	Lt_0160,2
.balign 4
	.lcomm	Lt_015E,4
.balign 4
	.lcomm	Lt_015F,4

.section .text
.balign 16
HUTF16LETOUTF16LE:
.type HUTF16LETOUTF16LE, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
push esi
push edi
mov dword ptr [ebp-4], 0
.Lt_00B3:
push 8193
mov eax, dword ptr [LEX+839664]
lea ebx, [eax+16596]
push ebx
push 0
push dword ptr [ENV+240]
call fb_FileGetStr
add esp, 16
test eax, eax
jne .Lt_00B6
push 0
push 2
push dword ptr [ENV+240]
call fb_FileTell
add esp, 4
mov ebx, dword ptr [LEX+839664]
mov esi, dword ptr [ebx+49368]
mov ecx, esi
sar ecx, 31
sub eax, esi
sbb edx, ecx
mov edi, eax
mov ebx, edx
push ebx
push edi
call __udivdi3
add esp, 16
mov edi, eax
mov dword ptr [ebp-4], edi
jmp .Lt_00B5
.Lt_00B6:
mov dword ptr [ebp-4], 0
.Lt_00B5:
.Lt_00B4:
mov eax, dword ptr [ebp-4]
pop edi
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size HUTF16LETOUTF16LE, .-HUTF16LETOUTF16LE
.balign 16
HUTF16LETOUTF32LE:
.type HUTF16LETOUTF32LE, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_00B7:
mov eax, dword ptr [LEX+839664]
lea ebx, [eax+16596]
mov dword ptr [Lt_0161], ebx
mov dword ptr [Lt_0162], 0
.Lt_00B9:
cmp dword ptr [Lt_0162], 8192
jge .Lt_00BA
push dword ptr [ENV+240]
call fb_FileEof
add esp, 4
test eax, eax
je .Lt_00BC
jmp .Lt_00BA
.Lt_00BC:
.Lt_00BB:
push 2
push offset Lt_0163
push 0
push dword ptr [ENV+240]
call fb_FileGet
add esp, 16
test eax, eax
je .Lt_00BE
jmp .Lt_00BA
.Lt_00BE:
.Lt_00BD:
movzx eax, word ptr [Lt_0163]
mov dword ptr [Lt_0164], eax
cmp dword ptr [Lt_0164], 55296
jb .Lt_00C0
cmp dword ptr [Lt_0164], 56319
ja .Lt_00C2
push 2
push offset Lt_0163
push 0
push dword ptr [ENV+240]
call fb_FileGet
add esp, 16
test eax, eax
je .Lt_00C4
jmp .Lt_00BA
.Lt_00C4:
.Lt_00C3:
mov eax, dword ptr [Lt_0164]
add eax, 4294912000
shl eax, 10
movzx ebx, word ptr [Lt_0163]
add eax, ebx
add eax, 9216
mov dword ptr [Lt_0164], eax
.Lt_00C2:
.Lt_00C1:
.Lt_00C0:
.Lt_00BF:
mov eax, dword ptr [Lt_0161]
mov ebx, dword ptr [Lt_0164]
mov dword ptr [eax], ebx
add dword ptr [Lt_0161], 4
inc dword ptr [Lt_0162]
jmp .Lt_00B9
.Lt_00BA:
mov ebx, dword ptr [Lt_0162]
mov dword ptr [ebp-4], ebx
.Lt_00B8:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HUTF16LETOUTF32LE, .-HUTF16LETOUTF32LE

.section .bss
.balign 4
	.lcomm	Lt_0163,2
.balign 4
	.lcomm	Lt_0164,4
.balign 4
	.lcomm	Lt_0161,4
.balign 4
	.lcomm	Lt_0162,4

.section .text
.balign 16
HUTF16BETOCHAR:
.type HUTF16BETOCHAR, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_00D2:
mov eax, dword ptr [LEX+839664]
lea ebx, [eax+16596]
mov dword ptr [Lt_0165], ebx
mov dword ptr [Lt_0166], 0
.Lt_00D4:
cmp dword ptr [Lt_0166], 8192
jge .Lt_00D5
push dword ptr [ENV+240]
call fb_FileEof
add esp, 4
test eax, eax
je .Lt_00D7
jmp .Lt_00D5
.Lt_00D7:
.Lt_00D6:
push 2
push offset Lt_0167
push 0
push dword ptr [ENV+240]
call fb_FileGet
add esp, 16
test eax, eax
je .Lt_00D9
jmp .Lt_00D5
.Lt_00D9:
.Lt_00D8:
movzx eax, word ptr [Lt_0167]
sar eax, 8
movzx ebx, word ptr [Lt_0167]
sal ebx, 8
and ebx, 65280
or eax, ebx
mov word ptr [Lt_0167], ax
movzx eax, word ptr [Lt_0167]
cmp eax, 255
jle .Lt_00DB
movzx eax, word ptr [Lt_0167]
cmp eax, 55296
jl .Lt_00DD
movzx eax, word ptr [Lt_0167]
cmp eax, 56319
jg .Lt_00DF
push 2
push offset Lt_0167
push 0
push dword ptr [ENV+240]
call fb_FileGet
add esp, 16
test eax, eax
je .Lt_00E1
jmp .Lt_00D5
.Lt_00E1:
.Lt_00E0:
.Lt_00DF:
.Lt_00DE:
.Lt_00DD:
.Lt_00DC:
mov word ptr [Lt_0167], 63
.Lt_00DB:
.Lt_00DA:
mov al, byte ptr [Lt_0167]
mov ebx, dword ptr [Lt_0165]
mov byte ptr [ebx], al
inc dword ptr [Lt_0165]
inc dword ptr [Lt_0166]
jmp .Lt_00D4
.Lt_00D5:
mov eax, dword ptr [Lt_0166]
mov dword ptr [ebp-4], eax
.Lt_00D3:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HUTF16BETOCHAR, .-HUTF16BETOCHAR

.section .bss
.balign 4
	.lcomm	Lt_0167,2
.balign 4
	.lcomm	Lt_0165,4
.balign 4
	.lcomm	Lt_0166,4

.section .text
.balign 16
HUTF16BETOUTF16LE:
.type HUTF16BETOUTF16LE, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_00E2:
call HUTF16LETOUTF16LE
mov dword ptr [Lt_0168], eax
mov eax, dword ptr [LEX+839664]
lea ebx, [eax+16596]
mov dword ptr [Lt_0169], ebx
mov dword ptr [Lt_016A], 1
mov ebx, dword ptr [Lt_0168]
mov dword ptr [ebp-8], ebx
jmp .Lt_00E5
.Lt_00E8:
mov ebx, dword ptr [Lt_0169]
mov ax, word ptr [ebx]
mov word ptr [Lt_016B], ax
movzx eax, word ptr [Lt_016B]
sar eax, 8
movzx ebx, word ptr [Lt_016B]
sal ebx, 8
and ebx, 65280
or eax, ebx
mov ebx, dword ptr [Lt_0169]
mov word ptr [ebx], ax
add dword ptr [Lt_0169], 2
.Lt_00E6:
inc dword ptr [Lt_016A]
.Lt_00E5:
mov eax, dword ptr [ebp-8]
cmp dword ptr [Lt_016A], eax
jle .Lt_00E8
.Lt_00E7:
mov eax, dword ptr [Lt_0168]
mov dword ptr [ebp-4], eax
.Lt_00E3:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HUTF16BETOUTF16LE, .-HUTF16BETOUTF16LE

.section .bss
.balign 4
	.lcomm	Lt_0169,4
.balign 4
	.lcomm	Lt_016B,2
.balign 4
	.lcomm	Lt_016A,4
.balign 4
	.lcomm	Lt_0168,4

.section .text
.balign 16
HUTF16BETOUTF32LE:
.type HUTF16BETOUTF32LE, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
push esi
mov dword ptr [ebp-4], 0
.Lt_00E9:
mov eax, dword ptr [LEX+839664]
lea ebx, [eax+16596]
mov dword ptr [Lt_016C], ebx
mov dword ptr [Lt_016D], 0
.Lt_00EB:
cmp dword ptr [Lt_016D], 8192
jge .Lt_00EC
push dword ptr [ENV+240]
call fb_FileEof
add esp, 4
test eax, eax
je .Lt_00EE
jmp .Lt_00EC
.Lt_00EE:
.Lt_00ED:
push 2
push offset Lt_016E
push 0
push dword ptr [ENV+240]
call fb_FileGet
add esp, 16
test eax, eax
je .Lt_00F0
jmp .Lt_00EC
.Lt_00F0:
.Lt_00EF:
movzx eax, word ptr [Lt_016E]
sar eax, 8
movzx ebx, word ptr [Lt_016E]
sal ebx, 8
and ebx, 65280
or eax, ebx
mov ecx, eax
mov dword ptr [Lt_016F], ecx
cmp dword ptr [Lt_016F], 55296
jb .Lt_00F2
cmp dword ptr [Lt_016F], 56319
ja .Lt_00F4
push 2
push offset Lt_016E
push 0
push dword ptr [ENV+240]
call fb_FileGet
add esp, 16
test eax, eax
je .Lt_00F6
jmp .Lt_00EC
.Lt_00F6:
.Lt_00F5:
mov eax, dword ptr [Lt_016F]
add eax, 4294912000
shl eax, 10
movzx ecx, word ptr [Lt_016E]
sar ecx, 8
movzx ebx, word ptr [Lt_016E]
sal ebx, 8
and ebx, 65280
or ecx, ebx
mov esi, ecx
add eax, esi
add eax, 9216
mov dword ptr [Lt_016F], eax
.Lt_00F4:
.Lt_00F3:
.Lt_00F2:
.Lt_00F1:
mov eax, dword ptr [Lt_016C]
mov esi, dword ptr [Lt_016F]
mov dword ptr [eax], esi
add dword ptr [Lt_016C], 4
inc dword ptr [Lt_016D]
jmp .Lt_00EB
.Lt_00EC:
mov esi, dword ptr [Lt_016D]
mov dword ptr [ebp-4], esi
.Lt_00EA:
mov eax, dword ptr [ebp-4]
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size HUTF16BETOUTF32LE, .-HUTF16BETOUTF32LE

.section .bss
.balign 4
	.lcomm	Lt_016E,2
.balign 4
	.lcomm	Lt_016F,4
.balign 4
	.lcomm	Lt_016C,4
.balign 4
	.lcomm	Lt_016D,4

.section .text
.balign 16
HUTF32LETOCHAR:
.type HUTF32LETOCHAR, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_00FF:
mov eax, dword ptr [LEX+839664]
lea ebx, [eax+16596]
mov dword ptr [Lt_0170], ebx
mov dword ptr [Lt_0171], 0
.Lt_0101:
cmp dword ptr [Lt_0171], 8192
jge .Lt_0102
push dword ptr [ENV+240]
call fb_FileEof
add esp, 4
test eax, eax
je .Lt_0104
jmp .Lt_0102
.Lt_0104:
.Lt_0103:
push 4
push offset Lt_0172
push 0
push dword ptr [ENV+240]
call fb_FileGet
add esp, 16
test eax, eax
je .Lt_0106
jmp .Lt_0102
.Lt_0106:
.Lt_0105:
cmp dword ptr [Lt_0172], 255
jbe .Lt_0108
mov dword ptr [Lt_0172], 63
.Lt_0108:
.Lt_0107:
mov al, byte ptr [Lt_0172]
mov ebx, dword ptr [Lt_0170]
mov byte ptr [ebx], al
inc dword ptr [Lt_0170]
inc dword ptr [Lt_0171]
jmp .Lt_0101
.Lt_0102:
mov eax, dword ptr [Lt_0171]
mov dword ptr [ebp-4], eax
.Lt_0100:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HUTF32LETOCHAR, .-HUTF32LETOCHAR

.section .bss
.balign 4
	.lcomm	Lt_0172,4
.balign 4
	.lcomm	Lt_0170,4
.balign 4
	.lcomm	Lt_0171,4

.section .text
.balign 16
HUTF32LETOUTF16LE:
.type HUTF32LETOUTF16LE, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_0109:
mov eax, dword ptr [LEX+839664]
lea ebx, [eax+16596]
mov dword ptr [Lt_0173], ebx
mov dword ptr [Lt_0174], 0
.Lt_010B:
cmp dword ptr [Lt_0174], 8192
jge .Lt_010C
push dword ptr [ENV+240]
call fb_FileEof
add esp, 4
test eax, eax
je .Lt_010E
jmp .Lt_010C
.Lt_010E:
.Lt_010D:
push 4
push offset Lt_0175
push 0
push dword ptr [ENV+240]
call fb_FileGet
add esp, 16
test eax, eax
je .Lt_0110
jmp .Lt_010C
.Lt_0110:
.Lt_010F:
cmp dword ptr [Lt_0175], 65535
jbe .Lt_0112
cmp dword ptr [Lt_0174], 8191
jge .Lt_0114
mov eax, dword ptr [Lt_0175]
shr eax, 10
add eax, 55296
mov ebx, dword ptr [Lt_0173]
mov word ptr [ebx], ax
add dword ptr [Lt_0173], 2
inc dword ptr [Lt_0174]
.Lt_0114:
.Lt_0113:
mov eax, dword ptr [Lt_0175]
and eax, 1023
add eax, 56320
mov dword ptr [Lt_0175], eax
.Lt_0112:
.Lt_0111:
mov ax, word ptr [Lt_0175]
mov ebx, dword ptr [Lt_0173]
mov word ptr [ebx], ax
add dword ptr [Lt_0173], 2
inc dword ptr [Lt_0174]
jmp .Lt_010B
.Lt_010C:
mov eax, dword ptr [Lt_0174]
mov dword ptr [ebp-4], eax
.Lt_010A:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HUTF32LETOUTF16LE, .-HUTF32LETOUTF16LE

.section .bss
.balign 4
	.lcomm	Lt_0175,4
.balign 4
	.lcomm	Lt_0173,4
.balign 4
	.lcomm	Lt_0174,4

.section .text
.balign 16
HUTF32LETOUTF32LE:
.type HUTF32LETOUTF32LE, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
push esi
push edi
mov dword ptr [ebp-4], 0
.Lt_0115:
push 8193
mov eax, dword ptr [LEX+839664]
lea ebx, [eax+16596]
push ebx
push 0
push dword ptr [ENV+240]
call fb_FileGetStr
add esp, 16
test eax, eax
jne .Lt_0118
push 0
push 4
push dword ptr [ENV+240]
call fb_FileTell
add esp, 4
mov ebx, dword ptr [LEX+839664]
mov esi, dword ptr [ebx+49368]
mov ecx, esi
sar ecx, 31
sub eax, esi
sbb edx, ecx
mov edi, eax
mov ebx, edx
push ebx
push edi
call __udivdi3
add esp, 16
mov edi, eax
mov dword ptr [ebp-4], edi
jmp .Lt_0117
.Lt_0118:
mov dword ptr [ebp-4], 0
.Lt_0117:
.Lt_0116:
mov eax, dword ptr [ebp-4]
pop edi
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size HUTF32LETOUTF32LE, .-HUTF32LETOUTF32LE
.balign 16
HUTF32BETOCHAR:
.type HUTF32BETOCHAR, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_0125:
mov eax, dword ptr [LEX+839664]
lea ebx, [eax+16596]
mov dword ptr [Lt_0176], ebx
mov dword ptr [Lt_0177], 0
.Lt_0127:
cmp dword ptr [Lt_0177], 8192
jge .Lt_0128
push dword ptr [ENV+240]
call fb_FileEof
add esp, 4
test eax, eax
je .Lt_012A
jmp .Lt_0128
.Lt_012A:
.Lt_0129:
push 4
push offset Lt_0178
push 0
push dword ptr [ENV+240]
call fb_FileGet
add esp, 16
test eax, eax
je .Lt_012C
jmp .Lt_0128
.Lt_012C:
.Lt_012B:
mov eax, dword ptr [Lt_0178]
shr eax, 24
mov ebx, dword ptr [Lt_0178]
shl ebx, 8
and ebx, 16711680
or eax, ebx
mov ebx, dword ptr [Lt_0178]
shr ebx, 8
and ebx, 65280
or eax, ebx
mov ebx, dword ptr [Lt_0178]
shl ebx, 24
or eax, ebx
mov dword ptr [Lt_0178], eax
cmp dword ptr [Lt_0178], 255
jbe .Lt_012E
mov dword ptr [Lt_0178], 63
.Lt_012E:
.Lt_012D:
mov al, byte ptr [Lt_0178]
mov ebx, dword ptr [Lt_0176]
mov byte ptr [ebx], al
inc dword ptr [Lt_0176]
inc dword ptr [Lt_0177]
jmp .Lt_0127
.Lt_0128:
mov eax, dword ptr [Lt_0177]
mov dword ptr [ebp-4], eax
.Lt_0126:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HUTF32BETOCHAR, .-HUTF32BETOCHAR

.section .bss
.balign 4
	.lcomm	Lt_0178,4
.balign 4
	.lcomm	Lt_0176,4
.balign 4
	.lcomm	Lt_0177,4

.section .text
.balign 16
HUTF32BETOUTF16LE:
.type HUTF32BETOUTF16LE, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_012F:
mov eax, dword ptr [LEX+839664]
lea ebx, [eax+16596]
mov dword ptr [Lt_0179], ebx
mov dword ptr [Lt_017A], 0
.Lt_0131:
cmp dword ptr [Lt_017A], 8192
jge .Lt_0132
push dword ptr [ENV+240]
call fb_FileEof
add esp, 4
test eax, eax
je .Lt_0134
jmp .Lt_0132
.Lt_0134:
.Lt_0133:
push 4
push offset Lt_017B
push 0
push dword ptr [ENV+240]
call fb_FileGet
add esp, 16
test eax, eax
je .Lt_0136
jmp .Lt_0132
.Lt_0136:
.Lt_0135:
mov eax, dword ptr [Lt_017B]
shr eax, 24
mov ebx, dword ptr [Lt_017B]
shl ebx, 8
and ebx, 16711680
or eax, ebx
mov ebx, dword ptr [Lt_017B]
shr ebx, 8
and ebx, 65280
or eax, ebx
mov ebx, dword ptr [Lt_017B]
shl ebx, 24
or eax, ebx
mov dword ptr [Lt_017B], eax
cmp dword ptr [Lt_017B], 65535
jbe .Lt_0138
cmp dword ptr [Lt_017A], 8191
jge .Lt_013A
mov eax, dword ptr [Lt_017B]
shr eax, 10
add eax, 55296
mov ebx, dword ptr [Lt_0179]
mov word ptr [ebx], ax
add dword ptr [Lt_0179], 2
inc dword ptr [Lt_017A]
.Lt_013A:
.Lt_0139:
mov eax, dword ptr [Lt_017B]
and eax, 1023
add eax, 56320
mov dword ptr [Lt_017B], eax
.Lt_0138:
.Lt_0137:
mov ax, word ptr [Lt_017B]
mov ebx, dword ptr [Lt_0179]
mov word ptr [ebx], ax
add dword ptr [Lt_0179], 2
inc dword ptr [Lt_017A]
jmp .Lt_0131
.Lt_0132:
mov eax, dword ptr [Lt_017A]
mov dword ptr [ebp-4], eax
.Lt_0130:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HUTF32BETOUTF16LE, .-HUTF32BETOUTF16LE

.section .bss
.balign 4
	.lcomm	Lt_017B,4
.balign 4
	.lcomm	Lt_0179,4
.balign 4
	.lcomm	Lt_017A,4

.section .text
.balign 16
HUTF32BETOUTF32LE:
.type HUTF32BETOUTF32LE, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_013B:
call HUTF32LETOUTF32LE
mov dword ptr [Lt_017C], eax
mov eax, dword ptr [LEX+839664]
lea ebx, [eax+16596]
mov dword ptr [Lt_017D], ebx
mov dword ptr [Lt_017E], 1
mov ebx, dword ptr [Lt_017C]
mov dword ptr [ebp-8], ebx
jmp .Lt_013E
.Lt_0141:
mov ebx, dword ptr [Lt_017D]
mov eax, dword ptr [ebx]
mov dword ptr [Lt_017F], eax
mov eax, dword ptr [Lt_017F]
shr eax, 24
mov ebx, dword ptr [Lt_017F]
shl ebx, 8
and ebx, 16711680
or eax, ebx
mov ebx, dword ptr [Lt_017F]
shr ebx, 8
and ebx, 65280
or eax, ebx
mov ebx, dword ptr [Lt_017F]
shl ebx, 24
or eax, ebx
mov ecx, eax
mov ebx, dword ptr [Lt_017D]
mov dword ptr [ebx], ecx
add dword ptr [Lt_017D], 4
.Lt_013F:
inc dword ptr [Lt_017E]
.Lt_013E:
mov ecx, dword ptr [ebp-8]
cmp dword ptr [Lt_017E], ecx
jle .Lt_0141
.Lt_0140:
mov ecx, dword ptr [Lt_017C]
mov dword ptr [ebp-4], ecx
.Lt_013C:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HUTF32BETOUTF32LE, .-HUTF32BETOUTF32LE

.section .bss
.balign 4
	.lcomm	Lt_017D,4
.balign 4
	.lcomm	Lt_017F,4
.balign 4
	.lcomm	Lt_017E,4
.balign 4
	.lcomm	Lt_017C,4
	#FreeBASIC-1.01.0-source/src/compiler/lex-utf.bas' compilation took 0.02834907337091863 secs
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

.section .data
.balign 4
UTF8_TRAILINGTB:
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.byte 1
.byte 1
.byte 1
.byte 1
.byte 1
.byte 1
.byte 1
.byte 1
.byte 1
.byte 1
.byte 1
.byte 1
.byte 1
.byte 1
.byte 1
.byte 1
.byte 1
.byte 1
.byte 1
.byte 1
.byte 1
.byte 1
.byte 1
.byte 1
.byte 1
.byte 1
.byte 1
.byte 1
.byte 1
.byte 1
.byte 1
.byte 1
.byte 2
.byte 2
.byte 2
.byte 2
.byte 2
.byte 2
.byte 2
.byte 2
.byte 2
.byte 2
.byte 2
.byte 2
.byte 2
.byte 2
.byte 2
.byte 2
.byte 3
.byte 3
.byte 3
.byte 3
.byte 3
.byte 3
.byte 3
.byte 3
.byte 4
.byte 4
.byte 4
.byte 4
.byte 5
.byte 5
.byte 5
.byte 5
.balign 4
UTF8_OFFSETSTB:
.int 0
.int 12416
.int 925824
.int 63447168
.int 4194836608
.int 2181570688

.section .ctors, "aw", @progbits
.int fb_ctor__lexzutf
