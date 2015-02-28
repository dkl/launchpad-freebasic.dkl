	.intel_syntax noprefix

	#FreeBASIC-1.01.0-source/src/compiler/parser-decl-enum.bas' compilation started at 16:30:05 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl CENUMBODY
CENUMBODY:
.type CENUMBODY, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
.Lt_006B:
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_006D:
.Lt_0070:
push 0
call CCOMMENT
add esp, 4
push 0
mov ebx, eax
call CSTMTSEPARATOR
add esp, 4
or ebx, eax
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 256
setne al
shr eax, 1
sbb eax, eax
and ebx, eax
je .Lt_0071
jmp .Lt_0070
.Lt_0071:
push 0
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 256
jne .Lt_0074
.Lt_0075:
jmp .Lt_006E
jmp .Lt_0072
.Lt_0074:
cmp dword ptr [ebp-12], 340
jne .Lt_0076
.Lt_0077:
jmp .Lt_006E
jmp .Lt_0072
.Lt_0076:
.Lt_0079:
push 0
call LEXGETCLASS
add esp, 4
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 0
jne .Lt_007E
.Lt_007F:
mov eax, dword ptr [ENV+840]
and eax, 524288
test eax, eax
je .Lt_0081
lea eax, [SYMB+98352]
cmp dword ptr [SYMB+98516], eax
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_0083
mov ebx, dword ptr [LEX+839664]
mov eax, dword ptr [ebx+16532]
cmp dword ptr [eax+4120], 0
jle .Lt_0085
push 0
push 0
push 89
call ERRREPORT
add esp, 12
.Lt_0085:
.Lt_0084:
.Lt_0083:
.Lt_0082:
.Lt_0081:
.Lt_0080:
push 0
push 0
call LEXGETTEXT
push eax
push 129
push offset Lt_0099
call fb_StrAssign
add esp, 20
jmp .Lt_007C
.Lt_007E:
cmp dword ptr [ebp-16], 2
jne .Lt_0086
.Lt_0087:
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
je .Lt_0089
push 0
push 0
push 4
call ERRREPORT
add esp, 12
push 0
push 0
call SYMBUNIQUELABEL
push eax
push 129
push offset Lt_0099
call fb_StrAssign
add esp, 20
jmp .Lt_0088
.Lt_0089:
push 0
push 0
call LEXGETTEXT
push eax
push 129
push offset Lt_0099
call fb_StrAssign
add esp, 20
.Lt_0088:
jmp .Lt_007C
.Lt_0086:
jmp .Lt_007A
.Lt_008A:
.Lt_007C:
push 0
call LEXSKIPTOKEN
add esp, 4
lea eax, [ebp-8]
push eax
push offset Lt_0099
call HENUMCONSTDECL
add esp, 8
push dword ptr [ebp+12]
push dword ptr [ebp-4]
push dword ptr [ebp-8]
push offset Lt_0099
push dword ptr [ebp+8]
call SYMBADDENUMELEMENT
add esp, 20
test eax, eax
jne .Lt_008C
push 0
push 1
push 0
push offset Lt_0099
push 4
call ERRREPORTEX
add esp, 20
.Lt_008C:
.Lt_008B:
add dword ptr [ebp-8], 1
adc dword ptr [ebp-4], 0
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
je .Lt_008E
jmp .Lt_007A
.Lt_008E:
.Lt_008D:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_007B:
jmp .Lt_0079
.Lt_007A:
push 0
call CCOMMENT
add esp, 4
cmp dword ptr [ENV+144], 0
je .Lt_0090
cmp dword ptr [ENV+828], 0
jne .Lt_0092
mov eax, dword ptr [LEX+839664]
push dword ptr [eax+49376]
call ASTNEWLIT
add esp, 4
push eax
call ASTADD
add esp, 4
mov eax, dword ptr [LEX+839664]
lea ebx, [eax+49376]
push ebx
call DZSTRRESET
add esp, 4
.Lt_0092:
.Lt_0091:
.Lt_0090:
.Lt_008F:
push 0
call CSTMTSEPARATOR
add esp, 4
test eax, eax
jne .Lt_0094
push 0
push 0
push 3
call ERRREPORT
add esp, 12
push 0
push 0
push -1
push -1
call HSKIPUNTIL
add esp, 16
.Lt_0094:
.Lt_0093:
.Lt_0078:
.Lt_0072:
.Lt_006F:
jmp .Lt_006D
.Lt_006E:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+92], 0
jne .Lt_0096
push 0
push 0
push 255
call ERRREPORT
add esp, 12
.Lt_0096:
.Lt_0095:
.Lt_006C:
pop ebx
mov esp, ebp
pop ebp
ret
.size CENUMBODY, .-CENUMBODY

.section .bss
.balign 4
	.lcomm	Lt_0099,129

.section .text
.balign 16

.globl CENUMDECL
CENUMDECL:
.type CENUMDECL, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
.Lt_009C:
push 0
call LEXSKIPTOKEN
add esp, 4
call CCURRENTPARENTID
push 0
call LEXGETCLASS
add esp, 4
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 0
je .Lt_00A1
.Lt_00A2:
cmp dword ptr [ebp-20], 2
jne .Lt_00A0
.Lt_00A1:
mov eax, dword ptr [ENV+840]
and eax, 524288
test eax, eax
je .Lt_00A4
lea eax, [SYMB+98352]
cmp dword ptr [SYMB+98516], eax
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_00A6
mov ebx, dword ptr [LEX+839664]
mov eax, dword ptr [ebx+16532]
cmp dword ptr [eax+4120], 0
jle .Lt_00A8
push 0
push 0
push 89
call ERRREPORT
add esp, 12
.Lt_00A8:
.Lt_00A7:
.Lt_00A6:
.Lt_00A5:
.Lt_00A4:
.Lt_00A3:
push 0
push 0
call LEXGETTEXT
push eax
push 129
push offset Lt_00C1
call fb_StrAssign
add esp, 20
push 0
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_009E
.Lt_00A0:
push 0
push 0
call SYMBUNIQUEID
push eax
push 129
push offset Lt_00C1
call fb_StrAssign
add esp, 20
.Lt_00A9:
.Lt_009E:
call CALIASATTRIBUTE
mov dword ptr [ebp-8], eax
mov dword ptr [ebp-12], 0
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 318
jne .Lt_00AB
push 0
call LEXSKIPTOKEN
add esp, 4
mov dword ptr [ebp-12], -1
.Lt_00AB:
.Lt_00AA:
mov eax, dword ptr [PARSER+96]
test eax, eax
sete al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-16], eax
mov eax, dword ptr [ebp-12]
or dword ptr [ebp-16], eax
push dword ptr [ebp-16]
push dword ptr [ebp+8]
push dword ptr [ebp-8]
push offset Lt_00C1
call SYMBADDENUM
add esp, 16
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
jne .Lt_00AD
push 0
push 1
push 0
push offset Lt_00C1
push 4
call ERRREPORTEX
add esp, 20
push dword ptr [ebp-16]
push 0
push 0
call SYMBUNIQUELABEL
push eax
call SYMBADDENUM
add esp, 16
mov dword ptr [ebp-4], eax
.Lt_00AD:
.Lt_00AC:
push 0
call CCOMMENT
add esp, 4
cmp dword ptr [ENV+144], 0
je .Lt_00AF
cmp dword ptr [ENV+828], 0
jne .Lt_00B1
mov eax, dword ptr [LEX+839664]
push dword ptr [eax+49376]
call ASTNEWLIT
add esp, 4
push eax
call ASTADD
add esp, 4
mov eax, dword ptr [LEX+839664]
lea ebx, [eax+49376]
push ebx
call DZSTRRESET
add esp, 4
.Lt_00B1:
.Lt_00B0:
.Lt_00AF:
.Lt_00AE:
push 0
call CSTMTSEPARATOR
add esp, 4
test eax, eax
jne .Lt_00B3
push 0
push 0
push 17
call ERRREPORT
add esp, 12
push 0
push 0
push -1
push -1
call HSKIPUNTIL
add esp, 16
.Lt_00B3:
.Lt_00B2:
cmp dword ptr [ebp-16], 0
je .Lt_00B5
push 0
push dword ptr [ebp-4]
call SYMBNESTBEGIN
add esp, 8
.Lt_00B5:
.Lt_00B4:
push dword ptr [ebp+8]
push dword ptr [ebp-4]
call CENUMBODY
add esp, 8
cmp dword ptr [ebp-16], 0
je .Lt_00B7
push 0
call SYMBNESTEND
add esp, 4
.Lt_00B7:
.Lt_00B6:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 340
je .Lt_00B9
push 0
push 0
push 73
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_00B8
.Lt_00B9:
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 338
je .Lt_00BB
push 0
push 0
push 73
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_00BA
.Lt_00BB:
push 0
call LEXSKIPTOKEN
add esp, 4
cmp dword ptr [ebp-12], 0
jne .Lt_00BD
cmp dword ptr [ebp-16], 0
je .Lt_00BF
push dword ptr [ebp-4]
call SYMBNAMESPACEIMPORT
add esp, 4
.Lt_00BF:
.Lt_00BE:
.Lt_00BD:
.Lt_00BC:
.Lt_00BA:
.Lt_00B8:
.Lt_009D:
pop ebx
mov esp, ebp
pop ebp
ret
.size CENUMDECL, .-CENUMDECL

.section .bss
.balign 4
	.lcomm	Lt_00C1,129

.section .text
.balign 16
fb_ctor__parserzdeclzenum:
.type fb_ctor__parserzdeclzenum, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__parserzdeclzenum, .-fb_ctor__parserzdeclzenum
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
HENUMCONSTDECL:
.type HENUMCONSTDECL, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_005F:
call CASSIGNTOKEN
test eax, eax
je .Lt_0062
call CEXPRESSION
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
jne .Lt_0064
push 0
push 0
push 11
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push 44
call HSKIPUNTIL
add esp, 16
jmp .Lt_0060
.Lt_0064:
.Lt_0063:
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax]
cmp ebx, 16
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_0066
push 0
push 0
push 11
call ERRREPORT
add esp, 12
push dword ptr [ebp-4]
call ASTDELTREE
add esp, 4
jmp .Lt_0060
.Lt_0066:
.Lt_0065:
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebx+4]
and eax, 511
and eax, 480
je .Lt_0067
mov dword ptr [ebp-8], 22
jmp .Lt_00C3
.Lt_0067:
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+4]
and ebx, 511
and ebx, 31
mov dword ptr [ebp-8], ebx
.Lt_00C3:
mov ebx, dword ptr [ebp-8]
imul ebx, 28
cmp dword ptr [SYMB_DTYPETB+ebx], 0
je .Lt_006A
push 1
push dword ptr [ebp+8]
push 5
call ERRREPORTWARN
add esp, 12
.Lt_006A:
.Lt_0069:
push dword ptr [ebp-4]
call ASTCONSTFLUSHTOINT
add esp, 4
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx], eax
mov dword ptr [ebx+4], edx
.Lt_0062:
.Lt_0061:
.Lt_0060:
pop ebx
mov esp, ebp
pop ebp
ret
.size HENUMCONSTDECL, .-HENUMCONSTDECL
	#FreeBASIC-1.01.0-source/src/compiler/parser-decl-enum.bas' compilation took 0.02883609640412033 secs

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
.int fb_ctor__parserzdeclzenum
