	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/parser-decl-option.bas' compilation started at 14:16:36 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl COPTDECL
COPTDECL:
.type COPTDECL, @function
push ebp
mov ebp, esp
sub esp, 16
.Lt_005F:
mov eax, dword ptr [ENV+840]
and eax, 33554432
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_0062
push 0
push 145
push 33554432
call ERRREPORTNOTALLOWED
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_0060
.Lt_0062:
.Lt_0061:
push 8
call CCOMPSTMTISALLOWED
add esp, 4
test eax, eax
jne .Lt_0064
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_0060
.Lt_0064:
.Lt_0063:
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_0066
.Lt_0068:
push 0
call LEXSKIPTOKEN
add esp, 4
mov dword ptr [ENV+872], 1
jmp .Lt_0065
.Lt_0069:
push 0
call LEXSKIPTOKEN
add esp, 4
mov dword ptr [ENV+888], -1
jmp .Lt_0065
.Lt_006A:
push 0
call LEXSKIPTOKEN
add esp, 4
mov dword ptr [ENV+888], 0
jmp .Lt_0065
.Lt_006B:
mov eax, dword ptr [ENV+840]
and eax, 65536
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_006D
push 0
push 145
push 65536
call ERRREPORTNOTALLOWED
add esp, 12
jmp .Lt_006C
.Lt_006D:
mov dword ptr [ENV+892], -1
.Lt_006C:
push 0
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_0065
.Lt_006E:
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
lea eax, [ebp-16]
push eax
call fb_StrInit
add esp, 20
push 9
push offset Lt_0072
push -1
lea eax, [ebp-16]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_0071
.Lt_0073:
mov dword ptr [ENV+876], -1
push 0
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_006F
.Lt_0071:
push 8
push offset Lt_0075
push -1
lea eax, [ebp-16]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_0074
.Lt_0076:
push 0
call LEXSKIPTOKEN
add esp, 4
mov dword ptr [ENV+880], 0
jmp .Lt_006F
.Lt_0074:
push 7
push offset Lt_0078
push -1
lea eax, [ebp-16]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_0077
.Lt_0079:
push 0
call LEXSKIPTOKEN
add esp, 4
mov dword ptr [ENV+884], -1
jmp .Lt_006F
.Lt_0077:
push 5
push offset Lt_007B
push -1
lea eax, [ebp-16]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_007A
.Lt_007C:
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXGETCLASS
add esp, 4
cmp eax, 3
je .Lt_007E
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
jmp .Lt_007D
.Lt_007E:
call LEXGETTEXT
push eax
call fb_StrAllocTempDescZ
add esp, 4
push eax
call fb_VALINT
add esp, 4
mov dword ptr [ENV+868], eax
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_007D:
jmp .Lt_006F
.Lt_007A:
push 10
push offset Lt_0080
push -1
lea eax, [ebp-16]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_007F
.Lt_0081:
push 2
call LEXSKIPTOKEN
add esp, 4
.Lt_0082:
call HUNDEFSYMBOL
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
je .Lt_0086
jmp .Lt_0083
.Lt_0086:
.Lt_0085:
push 2
call LEXSKIPTOKEN
add esp, 4
.Lt_0084:
jmp .Lt_0082
.Lt_0083:
jmp .Lt_006F
.Lt_007F:
push 8
push offset Lt_0088
push -1
lea eax, [ebp-16]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_0087
.Lt_0089:
mov eax, dword ptr [ENV+840]
and eax, 65536
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_008B
push 0
push 145
push 65536
call ERRREPORTNOTALLOWED
add esp, 12
jmp .Lt_008A
.Lt_008B:
mov dword ptr [ENV+892], 0
.Lt_008A:
push 0
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_006F
.Lt_0087:
push 0
push 0
push 17
call ERRREPORT
add esp, 12
.Lt_008C:
.Lt_006F:
lea eax, [ebp-16]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0065
.Lt_0066:
mov eax, dword ptr [ebp-4]
add eax, 4294966989
cmp eax, 84
ja .Lt_006E
mov eax, dword ptr [ebp-4]
jmp dword ptr [.LT_008D+eax*4-1228]
.LT_008D:
.int .Lt_006A
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_0069
.int .Lt_006E
.int .Lt_0068
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006E
.int .Lt_006B
.Lt_0065:
.Lt_0060:
mov esp, ebp
pop ebp
ret
.size COPTDECL, .-COPTDECL
.balign 16
fb_ctor__parserzdeclzoption:
.type fb_ctor__parserzdeclzoption, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__parserzdeclzoption, .-fb_ctor__parserzdeclzoption
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
HUNDEFSYMBOL:
.type HUNDEFSYMBOL, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_0091:
mov dword ptr [ebp-4], 0
push 2
call LEXGETCLASS
add esp, 4
mov dword ptr [ebp-8], eax
jmp .Lt_0094
.Lt_0096:
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [eax+16532]
mov eax, dword ptr [ebx+4116]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-4], ebx
cmp dword ptr [ebp-4], 0
je .Lt_0098
push dword ptr [ebp-4]
call SYMBDELFROMHASH
add esp, 4
jmp .Lt_0097
.Lt_0098:
push 0
push 0
push 14
call ERRREPORT
add esp, 12
.Lt_0097:
push 0
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_0093
.Lt_0099:
push 3
mov ebx, dword ptr [LEX+839664]
mov eax, dword ptr [ebx+16532]
push dword ptr [eax+4116]
call SYMBFINDBYCLASS
add esp, 8
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
je .Lt_009B
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+8]
and ebx, 32
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_009D
push 0
push 0
push 14
call ERRREPORT
add esp, 12
jmp .Lt_009C
.Lt_009D:
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebx+128]
lea ebx, [SYMB+98352]
cmp dword ptr [eax], ebx
je .Lt_009F
push 0
push 0
push 122
call ERRREPORT
add esp, 12
jmp .Lt_009E
.Lt_009F:
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebx+8]
and eax, 8388608
test eax, eax
je .Lt_00A1
push 0
push 0
push 176
call ERRREPORT
add esp, 12
jmp .Lt_00A0
.Lt_00A1:
push dword ptr [ebp-4]
call SYMBDELFROMHASH
add esp, 4
.Lt_00A0:
.Lt_009E:
.Lt_009C:
jmp .Lt_009A
.Lt_009B:
push 5
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [eax+16532]
push dword ptr [ebx+4116]
call SYMBFINDBYCLASS
add esp, 8
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
jne .Lt_00A3
push 0
push 0
push 14
call ERRREPORT
add esp, 12
jmp .Lt_00A2
.Lt_00A3:
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+128]
lea eax, [SYMB+98352]
cmp dword ptr [ebx], eax
je .Lt_00A5
push 0
push 0
push 122
call ERRREPORT
add esp, 12
jmp .Lt_00A4
.Lt_00A5:
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+8]
and ebx, 8388608
test ebx, ebx
je .Lt_00A7
push 0
push 0
push 176
call ERRREPORT
add esp, 12
jmp .Lt_00A6
.Lt_00A7:
push dword ptr [ebp-4]
call SYMBDELFROMHASH
add esp, 4
.Lt_00A6:
.Lt_00A4:
.Lt_00A2:
.Lt_009A:
push 0
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_0093
.Lt_00A8:
push 0
push 0
push 17
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push 44
call HSKIPUNTIL
add esp, 16
jmp .Lt_0093
.Lt_0094:
cmp dword ptr [ebp-8], 2
ja .Lt_00A8
mov ebx, dword ptr [ebp-8]
jmp dword ptr [.LT_00A9+ebx*4]
.LT_00A9:
.int .Lt_0099
.int .Lt_0096
.int .Lt_0096
.Lt_0093:
.Lt_0092:
pop ebx
mov esp, ebp
pop ebp
ret
.size HUNDEFSYMBOL, .-HUNDEFSYMBOL
	#fbc-1.01.0/src/compiler/parser-decl-option.bas' compilation took 0.02647700090892613 secs

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
Lt_0072:	.ascii	"EXPLICIT\0"
.balign 4
Lt_0075:	.ascii	"PRIVATE\0"
.balign 4
Lt_0078:	.ascii	"ESCAPE\0"
.balign 4
Lt_007B:	.ascii	"BASE\0"
.balign 4
Lt_0080:	.ascii	"NOKEYWORD\0"
.balign 4
Lt_0088:	.ascii	"NOGOSUB\0"

.section .ctors, "aw", @progbits
.int fb_ctor__parserzdeclzoption
