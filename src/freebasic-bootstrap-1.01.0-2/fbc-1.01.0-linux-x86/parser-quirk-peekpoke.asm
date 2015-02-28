	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/parser-quirk-peekpoke.bas' compilation started at 14:16:37 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl CPOKESTMT
CPOKESTMT:
.type CPOKESTMT, @function
push ebp
mov ebp, esp
sub esp, 32
push ebx
mov dword ptr [ebp-4], 0
.Lt_006D:
mov dword ptr [ebp-4], 0
push 0
call LEXSKIPTOKEN
add esp, 4
lea eax, [ebp-20]
push eax
lea eax, [ebp-16]
push eax
call HOPTIONALTYPEANDFIRSTEXPR
add esp, 8
mov dword ptr [ebp-8], eax
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
je .Lt_0070
push 0
push 0
push 16
call ERRREPORT
add esp, 12
jmp .Lt_006F
.Lt_0070:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_006F:
push 7
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_0072
jmp .Lt_006E
.Lt_0072:
.Lt_0071:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+4]
and ebx, 511
and ebx, 480
je .Lt_0073
mov dword ptr [ebp-24], 22
jmp .Lt_0082
.Lt_0073:
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx+4]
and eax, 511
and eax, 31
mov dword ptr [ebp-24], eax
.Lt_0082:
mov eax, dword ptr [ebp-24]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax]
mov dword ptr [ebp-28], ebx
cmp dword ptr [ebp-28], 2
jne .Lt_0077
.Lt_0078:
push 0
push 0
push 24
call ERRREPORT
add esp, 12
push dword ptr [ebp-8]
call ASTDELTREE
add esp, 4
jmp .Lt_006E
jmp .Lt_0075
.Lt_0077:
cmp dword ptr [ebp-28], 1
jne .Lt_0079
.Lt_007A:
push 0
push 0
push dword ptr [ebp-8]
push 0
push 8
call ASTNEWCONV
add esp, 20
mov dword ptr [ebp-8], eax
jmp .Lt_0075
.Lt_0079:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+4]
and ebx, 511
and ebx, 480
je .Lt_007C
mov dword ptr [ebp-32], 22
jmp .Lt_0083
.Lt_007C:
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx+4]
and eax, 511
and eax, 31
mov dword ptr [ebp-32], eax
.Lt_0083:
mov eax, dword ptr [ebp-32]
imul eax, 28
mov ebx, dword ptr [ENV+236]
cmp dword ptr [SYMB_DTYPETB+eax+4], ebx
je .Lt_007F
push 0
push 0
push 24
call ERRREPORT
add esp, 12
push dword ptr [ebp-8]
call ASTDELTREE
add esp, 4
jmp .Lt_006E
.Lt_007F:
.Lt_007E:
.Lt_007B:
.Lt_0075:
push 0
push 0
push dword ptr [ebp-20]
push dword ptr [ebp-16]
push dword ptr [ebp-8]
call ASTNEWDEREF
add esp, 20
mov dword ptr [ebp-8], eax
push 0
push dword ptr [ebp-12]
push dword ptr [ebp-8]
call ASTNEWASSIGN
add esp, 12
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0081
push 0
push 0
push 24
call ERRREPORT
add esp, 12
jmp .Lt_0080
.Lt_0081:
push dword ptr [ebp-8]
call ASTADD
add esp, 4
.Lt_0080:
mov dword ptr [ebp-4], -1
.Lt_006E:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CPOKESTMT, .-CPOKESTMT
.balign 16

.globl CPEEKFUNCT
CPEEKFUNCT:
.type CPEEKFUNCT, @function
push ebp
mov ebp, esp
sub esp, 28
push ebx
mov dword ptr [ebp-4], 0
.Lt_0084:
mov dword ptr [ebp-4], 0
push 0
call LEXSKIPTOKEN
add esp, 4
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
lea eax, [ebp-16]
push eax
lea eax, [ebp-12]
push eax
call HOPTIONALTYPEANDFIRSTEXPR
add esp, 8
mov dword ptr [ebp-8], eax
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_0089
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
jmp .Lt_0088
.Lt_0089:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0088:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+4]
and ebx, 511
and ebx, 480
je .Lt_008A
mov dword ptr [ebp-20], 22
jmp .Lt_009F
.Lt_008A:
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx+4]
and eax, 511
and eax, 31
mov dword ptr [ebp-20], eax
.Lt_009F:
mov eax, dword ptr [ebp-20]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax]
mov dword ptr [ebp-24], ebx
cmp dword ptr [ebp-24], 2
jne .Lt_008E
.Lt_008F:
push 0
push 0
push 24
call ERRREPORT
add esp, 12
push dword ptr [ebp-8]
call ASTDELTREE
add esp, 4
mov dword ptr [ebp-8], 0
jmp .Lt_008C
.Lt_008E:
cmp dword ptr [ebp-24], 1
jne .Lt_0090
.Lt_0091:
push 0
push 0
push dword ptr [ebp-8]
push 0
push 8
call ASTNEWCONV
add esp, 20
mov dword ptr [ebp-8], eax
jmp .Lt_008C
.Lt_0090:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+4]
and ebx, 511
and ebx, 480
je .Lt_0093
mov dword ptr [ebp-28], 22
jmp .Lt_00A0
.Lt_0093:
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx+4]
and eax, 511
and eax, 31
mov dword ptr [ebp-28], eax
.Lt_00A0:
mov eax, dword ptr [ebp-28]
imul eax, 28
mov ebx, dword ptr [ENV+236]
cmp dword ptr [SYMB_DTYPETB+eax+4], ebx
je .Lt_0096
push 0
push 0
push 24
call ERRREPORT
add esp, 12
push dword ptr [ebp-8]
call ASTDELTREE
add esp, 4
mov dword ptr [ebp-8], 0
.Lt_0096:
.Lt_0095:
.Lt_0092:
.Lt_008C:
cmp dword ptr [ebp-8], 0
jne .Lt_0098
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-8], eax
.Lt_0098:
.Lt_0097:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 46
jne .Lt_009A
cmp dword ptr [ebp-12], 18
jne .Lt_009C
.Lt_009D:
jmp .Lt_009B
.Lt_009C:
push 0
push -1
push 264
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_0085
.Lt_009E:
.Lt_009B:
push 64
call LEXSKIPTOKEN
add esp, 4
push 0
push -1
push dword ptr [ebp-8]
push dword ptr [ebp-16]
push dword ptr [ebp-12]
call CUDTMEMBER
add esp, 20
mov dword ptr [ebp-4], eax
jmp .Lt_0099
.Lt_009A:
push 0
push 0
push dword ptr [ebp-16]
push dword ptr [ebp-12]
push dword ptr [ebp-8]
call ASTNEWDEREF
add esp, 20
mov dword ptr [ebp-4], eax
.Lt_0099:
.Lt_0085:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CPEEKFUNCT, .-CPEEKFUNCT
.balign 16
fb_ctor__parserzquirkzpeekpoke:
.type fb_ctor__parserzquirkzpeekpoke, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__parserzquirkzpeekpoke, .-fb_ctor__parserzquirkzpeekpoke
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
HOPTIONALTYPEANDFIRSTEXPR:
.type HOPTIONALTYPEANDFIRSTEXPR, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
mov dword ptr [ebp-4], 0
.Lt_005F:
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
lea eax, [ebp-16]
push eax
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 0
call CTYPEOREXPRESSION
add esp, 16
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0063
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-20], ebx
cmp dword ptr [ebp-20], 0
je .Lt_0067
.Lt_0068:
cmp dword ptr [ebp-20], 17
jne .Lt_0066
.Lt_0067:
push 0
push -1
push 24
call ERRREPORT
add esp, 12
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx], 2
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx], 0
.Lt_0066:
.Lt_0064:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
je .Lt_006A
push 0
push 0
push 16
call ERRREPORT
add esp, 12
jmp .Lt_0069
.Lt_006A:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0069:
call CEXPRESSION
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
.Lt_006C:
.Lt_006B:
jmp .Lt_0062
.Lt_0063:
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 2
mov eax, dword ptr [ebp+12]
mov dword ptr [eax], 0
.Lt_0062:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0060:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HOPTIONALTYPEANDFIRSTEXPR, .-HOPTIONALTYPEANDFIRSTEXPR
	#fbc-1.01.0/src/compiler/parser-quirk-peekpoke.bas' compilation took 0.02718808827921748 secs

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
.int fb_ctor__parserzquirkzpeekpoke
