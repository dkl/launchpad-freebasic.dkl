	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/parser-comment.bas' compilation started at 14:16:35 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl CCOMMENT
CCOMMENT:
.type CCOMMENT, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_005F:
push dword ptr [ebp+8]
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 259
je .Lt_0064
.Lt_0065:
cmp dword ptr [ebp-8], 260
jne .Lt_0063
.Lt_0064:
mov eax, dword ptr [LEX+839664]
inc dword ptr [eax+16556]
push 523
call LEXSKIPTOKEN
add esp, 4
push 523
call LEXGETTOKEN
add esp, 4
cmp eax, 36
jne .Lt_0067
push 523
call LEXSKIPTOKEN
add esp, 4
call CDIRECTIVE
jmp .Lt_0066
.Lt_0067:
call LEXSKIPLINE
.Lt_0066:
mov eax, dword ptr [LEX+839664]
dec dword ptr [eax+16556]
mov dword ptr [ebp-4], -1
jmp .Lt_0061
.Lt_0063:
mov dword ptr [ebp-4], 0
.Lt_0068:
.Lt_0061:
.Lt_0060:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size CCOMMENT, .-CCOMMENT
.balign 16
fb_ctor__parserzcomment:
.type fb_ctor__parserzcomment, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__parserzcomment, .-fb_ctor__parserzcomment
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
CDIRECTIVE:
.type CDIRECTIVE, @function
push ebp
mov ebp, esp
sub esp, 44
.Lt_0069:
push 0
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_006C
.Lt_006E:
mov eax, dword ptr [ENV+840]
and eax, 16777216
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_0070
push 0
push 145
push 16777216
call ERRREPORTNOTALLOWED
add esp, 12
jmp .Lt_006F
.Lt_0070:
push 0
call LEXSKIPTOKEN
add esp, 4
mov dword ptr [ENV+888], -1
cmp dword ptr [ENV+800], 0
jle .Lt_0072
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
push 0
push 10
push offset Lt_0073
push -1
lea eax, [ebp-16]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-16]
push eax
call LEXPPONLYEMITTEXT
add esp, 4
lea eax, [ebp-16]
push eax
call fb_StrDelete
add esp, 4
.Lt_0072:
.Lt_0071:
.Lt_006F:
jmp .Lt_006B
.Lt_0075:
mov eax, dword ptr [ENV+840]
and eax, 16777216
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_0077
push 0
push 145
push 16777216
call ERRREPORTNOTALLOWED
add esp, 12
jmp .Lt_0076
.Lt_0077:
push 0
call LEXSKIPTOKEN
add esp, 4
mov dword ptr [ENV+888], 0
cmp dword ptr [ENV+800], 0
jle .Lt_0079
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
push 0
push 9
push offset Lt_007A
push -1
lea eax, [ebp-16]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-16]
push eax
call LEXPPONLYEMITTEXT
add esp, 4
lea eax, [ebp-16]
push eax
call fb_StrDelete
add esp, 4
.Lt_0079:
.Lt_0078:
.Lt_0076:
jmp .Lt_006B
.Lt_007C:
mov eax, dword ptr [ENV+840]
and eax, 16777216
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_007E
push 0
push 145
push 16777216
call ERRREPORTNOTALLOWED
add esp, 12
jmp .Lt_007D
.Lt_007E:
push 0
call LEXSKIPTOKEN
add esp, 4
mov dword ptr [Lt_00AF], 0
push offset Lt_007F
call HMATCHTEXT
add esp, 4
test eax, eax
je .Lt_0081
mov dword ptr [Lt_00AF], -1
.Lt_0081:
.Lt_0080:
push 258
call HMATCH
add esp, 4
test eax, eax
jne .Lt_0083
push 0
push 0
push 17
call ERRREPORT
add esp, 12
jmp .Lt_006B
.Lt_0083:
.Lt_0082:
push 0
call LEXGETCLASS
add esp, 4
cmp eax, 4
jne .Lt_0085
push 0
push offset Lt_00B0
call LEXEATTOKEN
add esp, 8
jmp .Lt_0084
.Lt_0085:
push 527
call LEXGETTOKEN
add esp, 4
cmp eax, 259
je .Lt_0087
push 0
push 0
push 17
call ERRREPORT
add esp, 12
jmp .Lt_006B
jmp .Lt_0086
.Lt_0087:
push 527
call LEXSKIPTOKEN
add esp, 4
.Lt_0086:
push 0
push offset Lt_00B0
push 39
call LEXREADLINE
add esp, 12
push 39
call HMATCH
add esp, 4
test eax, eax
jne .Lt_0089
push 0
push 0
push 17
call ERRREPORT
add esp, 12
jmp .Lt_006B
.Lt_0089:
.Lt_0088:
.Lt_0084:
push dword ptr [Lt_00AF]
push offset Lt_00B0
call FBINCLUDEFILE
add esp, 8
.Lt_007D:
jmp .Lt_006B
.Lt_008A:
push 0
call LEXGETCLASS
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 1
je .Lt_008E
.Lt_008F:
cmp dword ptr [ebp-8], 2
jne .Lt_008D
.Lt_008E:
mov eax, dword ptr [ENV+840]
and eax, 16777216
test eax, eax
je .Lt_0091
push 0
push 0
push 17
call ERRREPORT
add esp, 12
.Lt_0091:
.Lt_0090:
jmp .Lt_008B
.Lt_008D:
push offset Lt_0093
call HMATCHTEXT
add esp, 4
test eax, eax
je .Lt_0095
push 258
call HMATCH
add esp, 4
test eax, eax
jne .Lt_0097
push 0
push -1
push 202
call ERRREPORT
add esp, 12
jmp .Lt_008B
.Lt_0097:
.Lt_0096:
push 0
call LEXGETCLASS
add esp, 4
cmp eax, 4
jne .Lt_0099
push 0
push offset Lt_00B0
call LEXEATTOKEN
add esp, 8
push offset Lt_00B0
call FBGETLANGID
add esp, 4
mov dword ptr [Lt_00B1], eax
cmp dword ptr [Lt_00B1], -1
jne .Lt_009B
push 0
push 0
push 278
call ERRREPORT
add esp, 12
jmp .Lt_009A
.Lt_009B:
push dword ptr [Lt_00B1]
push 10
call FBCHANGEOPTION
add esp, 8
cmp dword ptr [ENV+800], 0
jle .Lt_009D
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
push 0
push -1
push 2
push offset Lt_009F
push -1
push -1
push dword ptr [Lt_00B1]
call FBGETLANGNAME
add esp, 4
push eax
push 10
push offset Lt_009E
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
lea eax, [ebp-20]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
lea eax, [ebp-32]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-44]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-44]
push eax
call LEXPPONLYEMITTEXT
add esp, 4
lea eax, [ebp-44]
push eax
call fb_StrDelete
add esp, 4
.Lt_009D:
.Lt_009C:
.Lt_009A:
jmp .Lt_0098
.Lt_0099:
push 0
push 0
push 17
call ERRREPORT
add esp, 12
.Lt_0098:
.Lt_0095:
.Lt_0094:
.Lt_0092:
.Lt_008B:
jmp .Lt_006B
.Lt_006C:
mov eax, dword ptr [ebp-4]
add eax, 4294966989
cmp eax, 10
ja .Lt_008A
mov eax, dword ptr [ebp-4]
jmp dword ptr [.LT_00A3+eax*4-1228]
.LT_00A3:
.int .Lt_0075
.int .Lt_008A
.int .Lt_008A
.int .Lt_008A
.int .Lt_008A
.int .Lt_008A
.int .Lt_008A
.int .Lt_008A
.int .Lt_008A
.int .Lt_007C
.int .Lt_006E
.Lt_006B:
.Lt_00A4:
push 0
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 257
je .Lt_00AA
.Lt_00AB:
cmp dword ptr [ebp-4], 256
jne .Lt_00A9
.Lt_00AA:
jmp .Lt_00A5
.Lt_00A9:
.Lt_00A7:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_00A6:
jmp .Lt_00A4
.Lt_00A5:
.Lt_006A:
mov esp, ebp
pop ebp
ret
.size CDIRECTIVE, .-CDIRECTIVE

.section .bss
.balign 4
	.lcomm	Lt_00B0,261
.balign 4
	.lcomm	Lt_00AF,4
.balign 4
	.lcomm	Lt_00B1,4
	#fbc-1.01.0/src/compiler/parser-comment.bas' compilation took 0.02581802185159177 secs
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
Lt_0073:	.ascii	"'$dynamic\0"
.balign 4
Lt_007A:	.ascii	"'$static\0"
.balign 4
Lt_007F:	.ascii	"ONCE\0"
.balign 4
Lt_0093:	.ascii	"LANG\0"
.balign 4
Lt_009E:	.ascii	"'$lang: \"\0"
.balign 4
Lt_009F:	.ascii	"\"\0"

.section .ctors, "aw", @progbits
.int fb_ctor__parserzcomment
