	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/pp.bas' compilation started at 15:27:36 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl PPINIT
PPINIT:
.type PPINIT, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0073:
mov dword ptr [ebp-4], 0
mov dword ptr [PP], 8
mov word ptr [PP+32], 0
lea eax, [PP]
mov dword ptr [PP+52], eax
mov dword ptr [PP+56], 0
mov dword ptr [PP+60], 0
lea eax, [PP]
mov dword ptr [PP+64], eax
mov dword ptr [PP+80], 0
mov dword ptr [PP+84], 0
push 0
push 24
lea eax, [PP+68]
push eax
call HASHINIT
add esp, 12
jmp .Lt_0075
.Lt_0076:
push 12
push 0
lea eax, [PP+68]
push eax
call memset
add esp, 12
.Lt_0075:
lea eax, [SYMB+98640]
push eax
call LISTNEWNODE
add esp, 4
mov dword ptr [PP+88], eax
mov dword ptr [ebp-4], 0
.Lt_007A:
mov eax, dword ptr [ebp-4]
imul eax, 12
cmp dword ptr [KWDTB+eax], 0
jne .Lt_007C
jmp .Lt_0079
.Lt_007C:
.Lt_007B:
push 0
push -2147483648
lea eax, [PP+64]
push eax
push 1
mov eax, dword ptr [ebp-4]
imul eax, 12
push dword ptr [KWDTB+eax+4]
mov eax, dword ptr [ebp-4]
imul eax, 12
push dword ptr [KWDTB+eax]
call SYMBADDKEYWORD
add esp, 24
mov ebx, dword ptr [ebp-4]
imul ebx, 12
mov dword ptr [KWDTB+ebx+8], eax
mov eax, dword ptr [ebp-4]
imul eax, 12
cmp dword ptr [KWDTB+eax+8], 0
jne .Lt_007E
jmp .Lt_0074
.Lt_007E:
.Lt_007D:
.Lt_0078:
inc dword ptr [ebp-4]
.Lt_0077:
cmp dword ptr [ebp-4], 23
jle .Lt_007A
.Lt_0079:
mov dword ptr [PP+200], 0
call PPDEFINEINIT
call PPCONDINIT
call PPPRAGMAINIT
.Lt_0074:
pop ebx
mov esp, ebp
pop ebp
ret
.size PPINIT, .-PPINIT
.balign 16

.globl PPEND
PPEND:
.type PPEND, @function
push ebp
mov ebp, esp
sub esp, 4
.Lt_007F:
mov dword ptr [ebp-4], 0
call PPPRAGMAEND
call PPCONDEND
call PPDEFINEEND
mov dword ptr [ebp-4], 0
.Lt_0084:
mov eax, dword ptr [ebp-4]
imul eax, 12
cmp dword ptr [KWDTB+eax+8], 0
jne .Lt_0086
jmp .Lt_0083
.Lt_0086:
.Lt_0085:
mov eax, dword ptr [ebp-4]
imul eax, 12
push dword ptr [KWDTB+eax+8]
call SYMBFREESYMBOL
add esp, 4
mov eax, dword ptr [ebp-4]
imul eax, 12
mov dword ptr [KWDTB+eax+8], 0
.Lt_0082:
inc dword ptr [ebp-4]
.Lt_0081:
cmp dword ptr [ebp-4], 23
jle .Lt_0084
.Lt_0083:
push dword ptr [PP+88]
lea eax, [SYMB+98640]
push eax
call LISTDELNODE
add esp, 8
lea eax, [PP+68]
push eax
call HASHEND
add esp, 4
.Lt_0080:
mov esp, ebp
pop ebp
ret
.size PPEND, .-PPEND
.balign 16

.globl PPCHECK
PPCHECK:
.type PPCHECK, @function
push ebx
.Lt_0087:
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [eax+16532]
cmp dword ptr [ebx], 35
je .Lt_008A
jmp .Lt_0088
.Lt_008A:
.Lt_0089:
mov ebx, dword ptr [LEX+839664]
cmp dword ptr [ebx+16556], 0
je .Lt_008C
jmp .Lt_0088
.Lt_008C:
.Lt_008B:
mov ebx, dword ptr [LEX+839664]
cmp dword ptr [ebx+16552], 257
je .Lt_008E
mov ebx, dword ptr [LEX+839664]
cmp dword ptr [ebx+16552], -1
je .Lt_0090
jmp .Lt_0088
.Lt_0090:
.Lt_008F:
.Lt_008E:
.Lt_008D:
mov ebx, dword ptr [LEX+839664]
inc dword ptr [ebx+16556]
lea ebx, [PP]
mov eax, dword ptr [LEX+839664]
mov dword ptr [eax+16564], ebx
push 256
call LEXSKIPTOKEN
add esp, 4
call PPPARSE
mov ebx, dword ptr [LEX+839664]
dec dword ptr [ebx+16556]
.Lt_0088:
pop ebx
ret
.size PPCHECK, .-PPCHECK
.balign 16

.globl PPPARSE
PPPARSE:
.type PPPARSE, @function
push ebp
mov ebp, esp
sub esp, 28
push ebx
.Lt_0091:
push 256
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_0094
.Lt_0096:
push 2
call LEXSKIPTOKEN
add esp, 4
push 0
call PPDEFINE
add esp, 4
jmp .Lt_0093
.Lt_0097:
push 2
call LEXSKIPTOKEN
add esp, 4
push -1
call PPDEFINE
add esp, 4
jmp .Lt_0093
.Lt_0098:
push 2
call LEXSKIPTOKEN
add esp, 4
push 0
lea eax, [ebp-12]
push eax
call CIDENTIFIER
add esp, 8
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
je .Lt_009A
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-16], ebx
mov ebx, dword ptr [ebp-16]
mov eax, dword ptr [ebx+128]
lea ebx, [SYMB+98352]
cmp dword ptr [eax], ebx
je .Lt_009C
push 0
push 0
push 122
call ERRREPORT
add esp, 12
jmp .Lt_009B
.Lt_009C:
mov ebx, dword ptr [ebp-16]
mov eax, dword ptr [ebx+8]
and eax, 8388608
test eax, eax
je .Lt_009E
push 0
push 0
push 176
call ERRREPORT
add esp, 12
jmp .Lt_009D
.Lt_009E:
cmp dword ptr [ENV+800], 0
jle .Lt_00A0
mov eax, dword ptr [ebp-16]
mov ebx, dword ptr [eax]
cmp ebx, 5
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_00A2
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
push 0
push 7
push offset Lt_00A3
push -1
lea ebx, [ebp-28]
push ebx
call fb_StrAssign
add esp, 20
lea eax, [ebp-28]
push eax
call LEXPPONLYEMITTEXT
add esp, 4
lea eax, [ebp-28]
push eax
call fb_StrDelete
add esp, 4
call LEXPPONLYEMITTOKEN
.Lt_00A2:
.Lt_00A1:
.Lt_00A0:
.Lt_009F:
push dword ptr [ebp-16]
call SYMBDELFROMHASH
add esp, 4
.Lt_009D:
.Lt_009B:
.Lt_009A:
.Lt_0099:
push 0
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_0093
.Lt_00A5:
call PPCONDIF
jmp .Lt_0093
.Lt_00A6:
call PPCONDELSE
jmp .Lt_0093
.Lt_00A7:
call PPCONDENDIF
jmp .Lt_0093
.Lt_00A8:
push 0
call LEXSKIPTOKEN
add esp, 4
call PPASSERT
jmp .Lt_0093
.Lt_00A9:
push 0
call LEXSKIPTOKEN
add esp, 4
push 1
push 0
call PPREADLITERAL
add esp, 4
push eax
call fb_StrAllocTempDescZ
add esp, 4
push eax
push 0
call fb_PrintString
add esp, 12
jmp .Lt_0093
.Lt_00AA:
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
push 1
push 0
push 0
call PPREADLITERAL
add esp, 4
push eax
push -1
call ERRREPORTEX
add esp, 20
jmp .Lt_0093
.Lt_00AB:
push 0
call LEXSKIPTOKEN
add esp, 4
call PPINCLUDE
jmp .Lt_0093
.Lt_00AC:
push 0
call LEXSKIPTOKEN
add esp, 4
call PPINCLIB
jmp .Lt_0093
.Lt_00AD:
push 0
call LEXSKIPTOKEN
add esp, 4
call PPLIBPATH
jmp .Lt_0093
.Lt_00AE:
push 0
call LEXSKIPTOKEN
add esp, 4
call PPPRAGMA
jmp .Lt_0093
.Lt_00AF:
push 0
call LEXSKIPTOKEN
add esp, 4
call PPLINE
jmp .Lt_0093
.Lt_00B0:
push 0
call LEXSKIPTOKEN
add esp, 4
call PPLANG
jmp .Lt_0093
.Lt_00B1:
push 0
push 0
push 17
call ERRREPORT
add esp, 12
jmp .Lt_0093
.Lt_0094:
mov eax, dword ptr [ebp-4]
add eax, 4294967030
cmp eax, 18
ja .Lt_00B1
mov eax, dword ptr [ebp-4]
jmp dword ptr [.LT_00B2+eax*4-1064]
.LT_00B2:
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A5
.int .Lt_00A6
.int .Lt_00A6
.int .Lt_00A7
.int .Lt_0096
.int .Lt_0098
.int .Lt_0097
.int .Lt_00B1
.int .Lt_00AB
.int .Lt_00AC
.int .Lt_00AD
.int .Lt_00AE
.int .Lt_00A9
.int .Lt_00AA
.int .Lt_00AF
.int .Lt_00B0
.int .Lt_00A8
.Lt_0093:
push 0
call CCOMMENT
add esp, 4
cmp dword ptr [ENV+144], 0
je .Lt_00B4
cmp dword ptr [ENV+828], 0
jne .Lt_00B6
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
.Lt_00B6:
.Lt_00B5:
.Lt_00B4:
.Lt_00B3:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 257
je .Lt_00B8
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 256
je .Lt_00BA
push 0
push 0
push 3
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push 257
call HSKIPUNTIL
add esp, 16
.Lt_00BA:
.Lt_00B9:
.Lt_00B8:
.Lt_00B7:
.Lt_0092:
pop ebx
mov esp, ebp
pop ebp
ret
.size PPPARSE, .-PPPARSE
.balign 16

.globl PPREADLITERAL
PPREADLITERAL:
.type PPREADLITERAL, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
mov dword ptr [ebp-4], 0
.Lt_00F5:
mov dword ptr [ebp-8], 0
push offset Lt_0127
call DZSTRRESET
add esp, 4
.Lt_00F7:
push 62
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-12], eax
jmp .Lt_00FB
.Lt_00FD:
cmp dword ptr [ebp+8], 0
je .Lt_00FF
push 0
push 0
push 133
call ERRREPORT
add esp, 12
.Lt_00FF:
.Lt_00FE:
jmp .Lt_00F8
jmp .Lt_00FA
.Lt_0100:
cmp dword ptr [ebp+8], 0
jne .Lt_0102
jmp .Lt_00F8
.Lt_0102:
.Lt_0101:
cmp dword ptr [Lt_0127+4], 0
jle .Lt_0104
push offset Lt_0105
push offset Lt_0127
call DZSTRCONCATASSIGN
add esp, 8
.Lt_0104:
.Lt_0103:
push 62
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_00F9
jmp .Lt_00FA
.Lt_0106:
cmp dword ptr [ebp+8], 0
jne .Lt_0108
jmp .Lt_00F8
.Lt_0108:
.Lt_0107:
.Lt_0109:
push 62
call LEXSKIPTOKEN
add esp, 4
push 62
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 257
je .Lt_010F
.Lt_0110:
cmp dword ptr [ebp-16], 256
jne .Lt_010E
.Lt_010F:
jmp .Lt_010A
.Lt_010E:
.Lt_010C:
.Lt_010B:
jmp .Lt_0109
.Lt_010A:
jmp .Lt_00F9
jmp .Lt_00FA
.Lt_0111:
push 314
push 1
call LEXGETLOOKAHEAD
add esp, 8
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 274
jne .Lt_0114
.Lt_0115:
cmp dword ptr [ebp+8], 0
je .Lt_0117
inc dword ptr [ebp-8]
.Lt_0117:
.Lt_0116:
jmp .Lt_0112
.Lt_0114:
cmp dword ptr [ebp-16], 275
jne .Lt_0118
.Lt_0119:
cmp dword ptr [ebp+8], 0
je .Lt_011B
cmp dword ptr [ebp-8], 0
jne .Lt_011D
push 62
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXSKIPTOKEN
add esp, 4
push offset Lt_0127
call HRTRIMMACROTEXT
add esp, 4
jmp .Lt_00F8
.Lt_011D:
.Lt_011C:
dec dword ptr [ebp-8]
.Lt_011B:
.Lt_011A:
.Lt_0118:
.Lt_0112:
jmp .Lt_00FA
.Lt_011E:
cmp dword ptr [Lt_0127+4], 0
jle .Lt_0120
push offset Lt_0121
push offset Lt_0127
call DZSTRCONCATASSIGN
add esp, 8
.Lt_0120:
.Lt_011F:
push 62
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_00F9
jmp .Lt_00FA
.Lt_0122:
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
push 0
push -1
call PPTYPEOF
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-24]
push offset Lt_0127
call DZSTRCONCATASSIGN
add esp, 8
lea eax, [ebp-24]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_00F8
jmp .Lt_00FA
.Lt_00FB:
mov eax, dword ptr [ebp-12]
add eax, 4294967287
cmp eax, 367
ja .Lt_00FA
mov eax, dword ptr [ebp-12]
jmp dword ptr [.LT_0124+eax*4-36]
.LT_0124:
.int .Lt_011E
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_011E
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_0111
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FD
.int .Lt_0100
.int .Lt_00FA
.int .Lt_0106
.int .Lt_0106
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_0122
.Lt_00FA:
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [eax+16532]
cmp dword ptr [ebx+8], 6
je .Lt_0126
call LEXGETTEXT
push eax
push offset Lt_0127
call DZSTRCONCATASSIGN
add esp, 8
jmp .Lt_0125
.Lt_0126:
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [eax+16532]
lea eax, [ebx+12]
push eax
push offset Lt_0127
call DZSTRCONCATASSIGNW
add esp, 8
.Lt_0125:
push 62
call LEXSKIPTOKEN
add esp, 4
.Lt_00F9:
jmp .Lt_00F7
.Lt_00F8:
mov eax, dword ptr [Lt_0127]
mov dword ptr [ebp-4], eax
.Lt_00F6:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size PPREADLITERAL, .-PPREADLITERAL

.section .bss
.balign 4
	.lcomm	Lt_0127,12

.section .text
.balign 16

.globl PPREADLITERALW
PPREADLITERALW:
.type PPREADLITERALW, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
mov dword ptr [ebp-4], 0
.Lt_0132:
mov dword ptr [ebp-8], 0
push 0
push offset Lt_0164
call DWSTRALLOCATE
add esp, 8
.Lt_0134:
push 62
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-12], eax
jmp .Lt_0138
.Lt_013A:
cmp dword ptr [ebp+8], 0
je .Lt_013C
push 0
push 0
push 133
call ERRREPORT
add esp, 12
.Lt_013C:
.Lt_013B:
jmp .Lt_0135
jmp .Lt_0137
.Lt_013D:
cmp dword ptr [ebp+8], 0
jne .Lt_013F
jmp .Lt_0135
.Lt_013F:
.Lt_013E:
cmp dword ptr [Lt_0164+4], 0
jle .Lt_0141
push offset Lt_0142
push offset Lt_0164
call DWSTRCONCATASSIGN
add esp, 8
.Lt_0141:
.Lt_0140:
push 62
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_0136
jmp .Lt_0137
.Lt_0143:
cmp dword ptr [ebp+8], 0
jne .Lt_0145
jmp .Lt_0135
.Lt_0145:
.Lt_0144:
.Lt_0146:
push 62
call LEXSKIPTOKEN
add esp, 4
push 62
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 257
je .Lt_014C
.Lt_014D:
cmp dword ptr [ebp-16], 256
jne .Lt_014B
.Lt_014C:
jmp .Lt_0147
.Lt_014B:
.Lt_0149:
.Lt_0148:
jmp .Lt_0146
.Lt_0147:
jmp .Lt_0136
jmp .Lt_0137
.Lt_014E:
push 314
push 1
call LEXGETLOOKAHEAD
add esp, 8
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 274
jne .Lt_0151
.Lt_0152:
cmp dword ptr [ebp+8], 0
je .Lt_0154
inc dword ptr [ebp-8]
.Lt_0154:
.Lt_0153:
jmp .Lt_014F
.Lt_0151:
cmp dword ptr [ebp-16], 275
jne .Lt_0155
.Lt_0156:
cmp dword ptr [ebp+8], 0
je .Lt_0158
cmp dword ptr [ebp-8], 0
jne .Lt_015A
push 62
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXSKIPTOKEN
add esp, 4
push offset Lt_0164
call HRTRIMMACROTEXTW
add esp, 4
jmp .Lt_0135
.Lt_015A:
.Lt_0159:
dec dword ptr [ebp-8]
.Lt_0158:
.Lt_0157:
.Lt_0155:
.Lt_014F:
jmp .Lt_0137
.Lt_015B:
cmp dword ptr [Lt_0164+4], 0
jle .Lt_015D
push offset Lt_015E
push offset Lt_0164
call DWSTRCONCATASSIGN
add esp, 8
.Lt_015D:
.Lt_015C:
push 62
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_0136
jmp .Lt_0137
.Lt_015F:
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
push 0
push -1
call PPTYPEOF
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-24]
push offset Lt_0164
call DWSTRCONCATASSIGNA
add esp, 8
lea eax, [ebp-24]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0135
jmp .Lt_0137
.Lt_0138:
mov eax, dword ptr [ebp-12]
add eax, 4294967287
cmp eax, 367
ja .Lt_0137
mov eax, dword ptr [ebp-12]
jmp dword ptr [.LT_0161+eax*4-36]
.LT_0161:
.int .Lt_015B
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_015B
.int .Lt_0137
.int .Lt_0137
.int .Lt_014E
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_013A
.int .Lt_013D
.int .Lt_0137
.int .Lt_0143
.int .Lt_0143
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_0137
.int .Lt_015F
.Lt_0137:
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [eax+16532]
cmp dword ptr [ebx+8], 6
jne .Lt_0163
mov ebx, dword ptr [LEX+839664]
mov eax, dword ptr [ebx+16532]
lea ebx, [eax+12]
push ebx
push offset Lt_0164
call DWSTRCONCATASSIGN
add esp, 8
jmp .Lt_0162
.Lt_0163:
call LEXGETTEXT
push eax
push offset Lt_0164
call DWSTRCONCATASSIGNA
add esp, 8
.Lt_0162:
push 62
call LEXSKIPTOKEN
add esp, 4
.Lt_0136:
jmp .Lt_0134
.Lt_0135:
mov eax, dword ptr [Lt_0164]
mov dword ptr [ebp-4], eax
.Lt_0133:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size PPREADLITERALW, .-PPREADLITERALW

.section .bss
.balign 4
	.lcomm	Lt_0164,12

.section .text
.balign 16

.globl PPTYPEOF
PPTYPEOF:
.type PPTYPEOF, @function
push ebp
mov ebp, esp
sub esp, 28
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_0165:
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
je .Lt_0168
push 0
push 0
push 6
call ERRREPORT
add esp, 12
jmp .Lt_0167
.Lt_0168:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0167:
lea eax, [ebp-24]
push eax
lea eax, [ebp-28]
push eax
lea eax, [ebp-16]
push eax
call CTYPEOF
add esp, 12
push 0
push -1
push 0
push dword ptr [ebp-20]
push dword ptr [ebp-24]
push dword ptr [ebp-28]
push dword ptr [ebp-16]
call SYMBTYPETOSTR
add esp, 16
push eax
call fb_StrUcase2
add esp, 8
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_016A
push 0
push 0
push 7
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push 41
call HSKIPUNTIL
add esp, 16
jmp .Lt_0169
.Lt_016A:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0169:
.Lt_0166:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
mov esp, ebp
pop ebp
ret
.size PPTYPEOF, .-PPTYPEOF
.balign 16
fb_ctor__pp:
.type fb_ctor__pp, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__pp, .-fb_ctor__pp
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
PPINCLUDE:
.type PPINCLUDE, @function
push ebp
mov ebp, esp
sub esp, 4
.Lt_00BC:
mov dword ptr [ebp-4], 0
push 0
call LEXGETCLASS
add esp, 4
test eax, eax
jne .Lt_00BF
push offset Lt_00C0
call HMATCHTEXT
add esp, 4
test eax, eax
je .Lt_00C2
mov dword ptr [ebp-4], -1
.Lt_00C2:
.Lt_00C1:
.Lt_00BF:
.Lt_00BE:
push 0
call LEXGETCLASS
add esp, 4
cmp eax, 4
je .Lt_00C4
push 0
push 0
push 17
call ERRREPORT
add esp, 12
push 0
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_00BD
.Lt_00C4:
.Lt_00C3:
push 0
push offset Lt_016B
call LEXEATTOKEN
add esp, 8
push dword ptr [ebp-4]
push offset Lt_016B
call FBINCLUDEFILE
add esp, 8
.Lt_00BD:
mov esp, ebp
pop ebp
ret
.size PPINCLUDE, .-PPINCLUDE

.section .bss
.balign 4
	.lcomm	Lt_016B,261

.section .text
.balign 16
PPINCLIB:
.type PPINCLIB, @function
push ebp
mov ebp, esp
sub esp, 12
.Lt_00C5:
push 0
call LEXGETCLASS
add esp, 4
cmp eax, 4
je .Lt_00C8
push 0
push 0
push 17
call ERRREPORT
add esp, 12
push 0
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_00C6
.Lt_00C8:
.Lt_00C7:
cmp dword ptr [ENV+800], 0
jle .Lt_00CA
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
push 0
push 8
push offset Lt_00CB
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-12]
push eax
call LEXPPONLYEMITTEXT
add esp, 4
lea eax, [ebp-12]
push eax
call fb_StrDelete
add esp, 4
call LEXPPONLYEMITTOKEN
.Lt_00CA:
.Lt_00C9:
call LEXGETTEXT
push eax
call FBADDLIB
add esp, 4
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_00C6:
mov esp, ebp
pop ebp
ret
.size PPINCLIB, .-PPINCLIB
.balign 16
PPLIBPATH:
.type PPLIBPATH, @function
push ebp
mov ebp, esp
sub esp, 12
.Lt_00CD:
push 0
call LEXGETCLASS
add esp, 4
cmp eax, 4
je .Lt_00D0
push 0
push 0
push 17
call ERRREPORT
add esp, 12
push 0
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_00CE
.Lt_00D0:
.Lt_00CF:
cmp dword ptr [ENV+800], 0
jle .Lt_00D2
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
push 0
push 9
push offset Lt_00D3
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-12]
push eax
call LEXPPONLYEMITTEXT
add esp, 4
lea eax, [ebp-12]
push eax
call fb_StrDelete
add esp, 4
call LEXPPONLYEMITTOKEN
.Lt_00D2:
.Lt_00D1:
call LEXGETTEXT
push eax
call FBADDLIBPATH
add esp, 4
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_00CE:
mov esp, ebp
pop ebp
ret
.size PPLIBPATH, .-PPLIBPATH
.balign 16
PPLINE:
.type PPLINE, @function
push ebx
.Lt_00D5:
push 0
call LEXGETCLASS
add esp, 4
cmp eax, 3
je .Lt_00D8
push 0
push 0
push 17
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push 257
call HSKIPUNTIL
add esp, 16
jmp .Lt_00D7
.Lt_00D8:
call LEXGETTEXT
push eax
call fb_StrAllocTempDescZ
add esp, 4
push eax
call fb_VALINT
add esp, 4
mov ebx, dword ptr [LEX+839664]
mov dword ptr [ebx+16548], eax
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXGETCLASS
add esp, 4
cmp eax, 4
jne .Lt_00DA
push 0
push 0
call LEXGETTEXT
push eax
push 261
lea eax, [ENV+244]
push eax
call fb_StrAssign
add esp, 20
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_00DA:
.Lt_00D9:
.Lt_00D7:
.Lt_00D6:
pop ebx
ret
.size PPLINE, .-PPLINE
.balign 16
PPLANG:
.type PPLANG, @function
push ebp
mov ebp, esp
sub esp, 40
.Lt_00DB:
push 0
call LEXGETCLASS
add esp, 4
cmp eax, 4
je .Lt_00DE
push 0
push 0
push 17
call ERRREPORT
add esp, 12
push 0
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_00DC
.Lt_00DE:
.Lt_00DD:
call LEXGETTEXT
push eax
call FBGETLANGID
add esp, 4
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], -1
jne .Lt_00E0
push 0
push 0
push 278
call ERRREPORT
add esp, 12
push 0
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_00DC
.Lt_00E0:
.Lt_00DF:
cmp dword ptr [ENV+800], 0
jle .Lt_00E2
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
push 0
push -1
push 2
push offset Lt_00E4
push -1
push -1
push dword ptr [ebp-4]
call FBGETLANGNAME
add esp, 4
push eax
push 8
push offset Lt_00E3
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
lea eax, [ebp-16]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
lea eax, [ebp-28]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-40]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-40]
push eax
call LEXPPONLYEMITTEXT
add esp, 4
lea eax, [ebp-40]
push eax
call fb_StrDelete
add esp, 4
.Lt_00E2:
.Lt_00E1:
push dword ptr [ebp-4]
push 10
call FBCHANGEOPTION
add esp, 8
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_00DC:
mov esp, ebp
pop ebp
ret
.size PPLANG, .-PPLANG
.balign 16
HRTRIMMACROTEXT:
.type HRTRIMMACROTEXT, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_00E8:
cmp dword ptr [ebp+8], 0
jne .Lt_00EB
jmp .Lt_00E9
jmp .Lt_00EA
.Lt_00EB:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 0
jne .Lt_00EC
jmp .Lt_00E9
.Lt_00EC:
.Lt_00EA:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [eax]
add ecx, dword ptr [ebx+4]
dec ecx
mov dword ptr [Lt_016C], ecx
.Lt_00ED:
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ecx]
cmp dword ptr [Lt_016C], ebx
jbe .Lt_00EE
mov ebx, dword ptr [Lt_016C]
movzx ecx, byte ptr [ebx]
mov dword ptr [ebp-4], ecx
jmp .Lt_00F0
.Lt_00F2:
mov ecx, dword ptr [ebp+8]
dec dword ptr [ecx+4]
mov ecx, dword ptr [Lt_016C]
mov byte ptr [ecx], 0
jmp .Lt_00EF
.Lt_00F3:
jmp .Lt_00EE
jmp .Lt_00EF
.Lt_00F0:
mov ecx, dword ptr [ebp-4]
add ecx, 4294967287
cmp ecx, 23
ja .Lt_00F3
mov ecx, dword ptr [ebp-4]
jmp dword ptr [.LT_00F4+ecx*4-36]
.LT_00F4:
.int .Lt_00F2
.int .Lt_00F2
.int .Lt_00F3
.int .Lt_00F3
.int .Lt_00F3
.int .Lt_00F3
.int .Lt_00F3
.int .Lt_00F3
.int .Lt_00F3
.int .Lt_00F3
.int .Lt_00F3
.int .Lt_00F3
.int .Lt_00F3
.int .Lt_00F3
.int .Lt_00F3
.int .Lt_00F3
.int .Lt_00F3
.int .Lt_00F3
.int .Lt_00F3
.int .Lt_00F3
.int .Lt_00F3
.int .Lt_00F3
.int .Lt_00F3
.int .Lt_00F2
.Lt_00EF:
dec dword ptr [Lt_016C]
jmp .Lt_00ED
.Lt_00EE:
.Lt_00E9:
pop ebx
mov esp, ebp
pop ebp
ret
.size HRTRIMMACROTEXT, .-HRTRIMMACROTEXT

.section .bss
.balign 4
	.lcomm	Lt_016C,4

.section .text
.balign 16
HRTRIMMACROTEXTW:
.type HRTRIMMACROTEXTW, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0128:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebx+4]
sal ecx, 2
mov ebx, dword ptr [eax]
add ebx, ecx
add ebx, -4
mov dword ptr [Lt_016D], ebx
.Lt_012A:
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebx]
cmp dword ptr [Lt_016D], ecx
jbe .Lt_012B
mov ecx, dword ptr [Lt_016D]
mov ebx, dword ptr [ecx]
mov dword ptr [ebp-4], ebx
jmp .Lt_012D
.Lt_012F:
mov ebx, dword ptr [ebp+8]
dec dword ptr [ebx+4]
mov ebx, dword ptr [Lt_016D]
mov dword ptr [ebx], 0
jmp .Lt_012C
.Lt_0130:
jmp .Lt_012B
jmp .Lt_012C
.Lt_012D:
mov ebx, dword ptr [ebp-4]
add ebx, 4294967287
cmp ebx, 23
ja .Lt_0130
mov ebx, dword ptr [ebp-4]
jmp dword ptr [.LT_0131+ebx*4-36]
.LT_0131:
.int .Lt_012F
.int .Lt_012F
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
.int .Lt_012F
.Lt_012C:
add dword ptr [Lt_016D], -4
jmp .Lt_012A
.Lt_012B:
.Lt_0129:
pop ebx
mov esp, ebp
pop ebp
ret
.size HRTRIMMACROTEXTW, .-HRTRIMMACROTEXTW

.section .bss
.balign 4
	.lcomm	Lt_016D,4
	#fbc-1.01.0/src/compiler/pp.bas' compilation took 0.03054698370397091 secs
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

.globl PP
.balign 4
	.lcomm	PP,204

.section .data
.balign 4
KWDTB:
.int Lt_0060
.int 266
.skip 4,0
.int Lt_0061
.int 267
.skip 4,0
.int Lt_0062
.int 268
.skip 4,0
.int Lt_0063
.int 269
.skip 4,0
.int Lt_0064
.int 270
.skip 4,0
.int Lt_0065
.int 271
.skip 4,0
.int Lt_0066
.int 272
.skip 4,0
.int Lt_0067
.int 273
.skip 4,0
.int Lt_0068
.int 274
.skip 4,0
.int Lt_0069
.int 275
.skip 4,0
.int Lt_006A
.int 276
.skip 4,0
.int Lt_006B
.int 278
.skip 4,0
.int Lt_006C
.int 277
.skip 4,0
.int Lt_006D
.int 279
.skip 4,0
.int Lt_006E
.int 280
.skip 4,0
.int Lt_006F
.int 281
.skip 4,0
.int Lt_0070
.int 282
.skip 4,0
.int Lt_0071
.int 283
.skip 4,0
.int Lt_0072
.int 284
.skip 4,0
.long 0
.skip 8,0
.skip 48,0

.section .rodata
.balign 4
Lt_0060:	.ascii	"IF\0"
.balign 4
Lt_0061:	.ascii	"IFDEF\0"
.balign 4
Lt_0062:	.ascii	"IFNDEF\0"
.balign 4
Lt_0063:	.ascii	"ELSE\0"
.balign 4
Lt_0064:	.ascii	"ELSEIF\0"
.balign 4
Lt_0065:	.ascii	"ENDIF\0"
.balign 4
Lt_0066:	.ascii	"DEFINE\0"
.balign 4
Lt_0067:	.ascii	"UNDEF\0"
.balign 4
Lt_0068:	.ascii	"MACRO\0"
.balign 4
Lt_0069:	.ascii	"ENDMACRO\0"
.balign 4
Lt_006A:	.ascii	"INCLUDE\0"
.balign 4
Lt_006B:	.ascii	"LIBPATH\0"
.balign 4
Lt_006C:	.ascii	"INCLIB\0"
.balign 4
Lt_006D:	.ascii	"PRAGMA\0"
.balign 4
Lt_006E:	.ascii	"PRINT\0"
.balign 4
Lt_006F:	.ascii	"ERROR\0"
.balign 4
Lt_0070:	.ascii	"LINE\0"
.balign 4
Lt_0071:	.ascii	"LANG\0"
.balign 4
Lt_0072:	.ascii	"ASSERT\0"
.balign 4
Lt_00A3:	.ascii	"#undef\0"
.balign 4
Lt_00C0:	.ascii	"ONCE\0"
.balign 4
Lt_00CB:	.ascii	"#inclib\0"
.balign 4
Lt_00D3:	.ascii	"#libpath\0"
.balign 4
Lt_00E3:	.ascii	"#lang \"\0"
.balign 4
Lt_00E4:	.ascii	"\"\0"
.balign 4
Lt_0105:	.ascii	"\n\0"
.balign 4
Lt_0121:	.ascii	" \0"
.balign 4
Lt_0142:	.ascii	"\12\0\0\0\0\0\0\0"
.balign 4
Lt_015E:	.ascii	"\40\0\0\0\0\0\0\0"

.section .ctors, "aw", @progbits
.int fb_ctor__pp
