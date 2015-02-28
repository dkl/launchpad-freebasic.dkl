	.intel_syntax noprefix

	#FreeBASIC-1.01.0-source/src/compiler/parser-decl-const.bas' compilation started at 16:30:05 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl CCONSTDECL
CCONSTDECL:
.type CCONSTDECL, @function
push ebp
mov ebp, esp
sub esp, 8
.Lt_00AF:
push 0
call LEXSKIPTOKEN
add esp, 4
lea eax, [ebp-8]
push eax
lea eax, [ebp-4]
push eax
call HGETTYPE
add esp, 8
.Lt_00B1:
push dword ptr [ebp+8]
push dword ptr [ebp-8]
push dword ptr [ebp-4]
call CCONSTASSIGN
add esp, 12
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
je .Lt_00B5
jmp .Lt_00B2
.Lt_00B5:
.Lt_00B4:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_00B3:
jmp .Lt_00B1
.Lt_00B2:
.Lt_00B0:
mov esp, ebp
pop ebp
ret
.size CCONSTDECL, .-CCONSTDECL
.balign 16
fb_ctor__parserzdeclzconst:
.type fb_ctor__parserzdeclzconst, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__parserzdeclzconst, .-fb_ctor__parserzdeclzconst
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
HGETTYPE:
.type HGETTYPE, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
.Lt_005F:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 375
jne .Lt_0062
push 0
call LEXSKIPTOKEN
add esp, 4
push 1
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-8]
push eax
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call CSYMBOLTYPE
add esp, 16
test eax, eax
jne .Lt_0065
push 0
push 0
push 14
call ERRREPORT
add esp, 12
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 7
mov eax, dword ptr [ebp+12]
mov dword ptr [eax], 0
.Lt_0065:
.Lt_0064:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
and ebx, 511
mov dword ptr [ebp-12], ebx
cmp dword ptr [ebp-12], 0
je .Lt_0069
.Lt_006A:
cmp dword ptr [ebp-12], 17
je .Lt_0069
.Lt_006B:
cmp dword ptr [ebp-12], 3
je .Lt_0069
.Lt_006C:
cmp dword ptr [ebp-12], 6
je .Lt_0069
.Lt_006D:
cmp dword ptr [ebp-12], 18
je .Lt_0069
.Lt_006E:
cmp dword ptr [ebp-12], 21
jne .Lt_0068
.Lt_0069:
push 0
push -1
push 24
call ERRREPORT
add esp, 12
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx], -2147483648
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx], 0
.Lt_0068:
.Lt_0066:
jmp .Lt_0061
.Lt_0062:
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx], -2147483648
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx], 0
.Lt_0061:
.Lt_0060:
pop ebx
mov esp, ebp
pop ebp
ret
.size HGETTYPE, .-HGETTYPE
.balign 16
CCONSTASSIGN:
.type CCONSTASSIGN, @function
push ebp
mov ebp, esp
sub esp, 32
push ebx
push esi
.Lt_006F:
call CCURRENTPARENTID
push 0
call LEXGETCLASS
add esp, 4
mov dword ptr [ebp-32], eax
jmp .Lt_0072
.Lt_0074:
mov eax, dword ptr [ENV+840]
and eax, 524288
test eax, eax
je .Lt_0076
lea eax, [SYMB+98352]
cmp dword ptr [SYMB+98516], eax
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_0078
mov ebx, dword ptr [LEX+839664]
mov eax, dword ptr [ebx+16532]
cmp dword ptr [eax+4120], 0
jle .Lt_007A
push 0
push 0
push 89
call ERRREPORT
add esp, 12
.Lt_007A:
.Lt_0079:
.Lt_0078:
.Lt_0077:
.Lt_0076:
.Lt_0075:
jmp .Lt_0071
.Lt_007B:
cmp dword ptr [ENV+136], 3
je .Lt_007D
lea eax, [SYMB+98352]
cmp dword ptr [SYMB+98516], eax
sete bl
shr ebx, 1
sbb ebx, ebx
cmp dword ptr [PARSER+92], 0
seta al
shr eax, 1
sbb eax, eax
or ebx, eax
je .Lt_007F
push 0
push 0
push 4
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push 44
call HSKIPUNTIL
add esp, 16
jmp .Lt_0070
.Lt_007F:
.Lt_007E:
.Lt_007D:
.Lt_007C:
jmp .Lt_0071
.Lt_0080:
cmp dword ptr [ENV+136], 3
je .Lt_0082
push 0
push 0
push 4
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push 44
call HSKIPUNTIL
add esp, 16
jmp .Lt_0070
.Lt_0082:
.Lt_0081:
jmp .Lt_0071
.Lt_0083:
push 0
push 0
push 14
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push 44
call HSKIPUNTIL
add esp, 16
jmp .Lt_0070
jmp .Lt_0071
.Lt_0072:
cmp dword ptr [ebp-32], 5
ja .Lt_0083
mov eax, dword ptr [ebp-32]
jmp dword ptr [.LT_0084+eax*4]
.LT_0084:
.int .Lt_0074
.int .Lt_0080
.int .Lt_007B
.int .Lt_0083
.int .Lt_0083
.int .Lt_0080
.Lt_0071:
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [eax+16532]
mov eax, dword ptr [ebx+8]
mov dword ptr [ebp-8], eax
push 0
push 0
call LEXGETTEXT
push eax
push 129
push offset Lt_00B9
call fb_StrAssign
add esp, 20
cmp dword ptr [ebp-8], -2147483648
je .Lt_0086
mov eax, dword ptr [ENV+840]
and eax, 8388608
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_0088
push 0
push 147
push 8388608
call ERRREPORTNOTALLOWED
add esp, 12
.Lt_0088:
.Lt_0087:
.Lt_0086:
.Lt_0085:
push 0
call LEXSKIPTOKEN
add esp, 4
cmp dword ptr [ebp+8], -2147483648
jne .Lt_008A
lea eax, [ebp+12]
push eax
lea eax, [ebp+8]
push eax
call HGETTYPE
add esp, 8
.Lt_008A:
.Lt_0089:
cmp dword ptr [ebp-8], -2147483648
je .Lt_008C
cmp dword ptr [ebp+8], -2147483648
je .Lt_008E
push 0
push 1
push 0
push offset Lt_00B9
push 17
call ERRREPORTEX
add esp, 20
.Lt_008E:
.Lt_008D:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp+8], eax
mov dword ptr [ebp+12], 0
mov eax, dword ptr [ebp+16]
or eax, 268435456
mov ebx, eax
mov dword ptr [ebp+16], ebx
.Lt_008C:
.Lt_008B:
mov dword ptr [ebp-4], 0
call CASSIGNTOKEN
test eax, eax
jne .Lt_0090
push 0
push 0
push 10
call ERRREPORT
add esp, 12
mov dword ptr [ebp-4], -1
.Lt_0090:
.Lt_008F:
call CEXPRESSION
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_0092
push 0
push 1
push 0
push offset Lt_00B9
push 11
call ERRREPORTEX
add esp, 20
mov dword ptr [ebp-4], -1
cmp dword ptr [ebp+8], -2147483648
jne .Lt_0094
mov dword ptr [ebp+8], 7
.Lt_0094:
.Lt_0093:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call ASTNEWCONSTZ
add esp, 8
mov dword ptr [ebp-12], eax
.Lt_0092:
.Lt_0091:
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax+4]
and ebx, 511
mov dword ptr [ebp-28], ebx
mov dword ptr [ebp-16], 0
cmp dword ptr [ebp-28], 3
je .Lt_0097
.Lt_0098:
cmp dword ptr [ebp-28], 6
jne .Lt_0096
.Lt_0097:
push dword ptr [ebp-12]
call ASTGETSTRLITSYMBOL
add esp, 4
mov dword ptr [ebp-16], eax
.Lt_0096:
.Lt_0095:
cmp dword ptr [ebp-16], 0
je .Lt_009A
cmp dword ptr [ebp+8], -2147483648
je .Lt_009C
mov eax, dword ptr [ebp+8]
and eax, 511
cmp eax, 16
je .Lt_009E
push 0
push 1
push 0
push offset Lt_00B9
push 24
call ERRREPORTEX
add esp, 20
.Lt_009E:
.Lt_009D:
.Lt_009C:
.Lt_009B:
mov eax, dword ptr [ebp-16]
mov dword ptr [ebp-24], eax
push dword ptr [ebp+16]
lea eax, [ebp-24]
push eax
push 0
push dword ptr [ebp-28]
push offset Lt_00B9
call SYMBADDCONST
add esp, 20
test eax, eax
jne .Lt_00A0
push 0
push 1
push 0
push offset Lt_00B9
push 4
call ERRREPORTEX
add esp, 20
.Lt_00A0:
.Lt_009F:
jmp .Lt_0099
.Lt_009A:
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax]
cmp ebx, 16
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_00A2
push 0
push 1
push 0
push offset Lt_00B9
push 11
call ERRREPORTEX
add esp, 20
push dword ptr [ebp-12]
call ASTDELTREE
add esp, 4
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-12], eax
mov dword ptr [ebp-28], 7
.Lt_00A2:
.Lt_00A1:
cmp dword ptr [ebp+8], -2147483648
je .Lt_00A4
push dword ptr [ebp-12]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call ASTCHECKASSIGNTOTYPE
add esp, 12
test eax, eax
jne .Lt_00A6
push 0
push 1
push 0
push offset Lt_00B9
push 20
call ERRREPORTEX
add esp, 20
push dword ptr [ebp-12]
call ASTDELTREE
add esp, 4
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-28], eax
mov dword ptr [ebp+12], 0
push 0
call ASTNEWCONSTSTR
add esp, 4
mov dword ptr [ebp-12], eax
.Lt_00A6:
.Lt_00A5:
mov eax, dword ptr [ebp-28]
cmp eax, dword ptr [ebp+8]
setne al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp-12]
mov ecx, dword ptr [ebp+12]
cmp ecx, dword ptr [ebx+8]
setne dl
mov esi, edx
shr esi, 1
sbb esi, esi
or eax, esi
je .Lt_00A8
push 0
push 0
push dword ptr [ebp-12]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call ASTNEWCONV
add esp, 20
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_00AA
push 0
push 1
push 0
push offset Lt_00B9
push 24
call ERRREPORTEX
add esp, 20
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-12], eax
mov dword ptr [ebp+8], 7
mov dword ptr [ebp+12], 0
.Lt_00AA:
.Lt_00A9:
.Lt_00A8:
.Lt_00A7:
jmp .Lt_00A3
.Lt_00A4:
mov eax, dword ptr [ebp-28]
mov dword ptr [ebp+8], eax
mov eax, dword ptr [ebp-12]
mov esi, dword ptr [eax+8]
mov dword ptr [ebp+12], esi
.Lt_00A3:
push dword ptr [ebp+16]
mov esi, dword ptr [ebp-12]
lea eax, [esi+20]
push eax
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push offset Lt_00B9
call SYMBADDCONST
add esp, 20
test eax, eax
jne .Lt_00AC
push 0
push 1
push 0
push offset Lt_00B9
push 4
call ERRREPORTEX
add esp, 20
.Lt_00AC:
.Lt_00AB:
.Lt_0099:
push dword ptr [ebp-12]
call ASTDELNODE
add esp, 4
cmp dword ptr [ebp-4], 0
je .Lt_00AE
push 0
push 0
push 0
push 44
call HSKIPUNTIL
add esp, 16
.Lt_00AE:
.Lt_00AD:
.Lt_0070:
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size CCONSTASSIGN, .-CCONSTASSIGN

.section .bss
.balign 4
	.lcomm	Lt_00B9,129
	#FreeBASIC-1.01.0-source/src/compiler/parser-decl-const.bas' compilation took 0.02856606640852988 secs
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
.int fb_ctor__parserzdeclzconst
