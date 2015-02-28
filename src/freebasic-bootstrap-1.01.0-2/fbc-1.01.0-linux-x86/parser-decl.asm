	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/parser-decl.bas' compilation started at 14:16:36 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl CDECLARATION
CDECLARATION:
.type CDECLARATION, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
mov dword ptr [ebp-4], 0
.Lt_005F:
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
cmp dword ptr [ENV+136], 3
jne .Lt_0062
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [eax+16532]
cmp dword ptr [ebx+8], -2147483648
je .Lt_0064
mov dword ptr [ebp-4], 0
jmp .Lt_0060
.Lt_0064:
.Lt_0063:
.Lt_0062:
.Lt_0061:
push 0
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-16], eax
jmp .Lt_0066
.Lt_0068:
call HCHECKSCOPE
test eax, eax
je .Lt_006A
mov dword ptr [ebp-8], 32
.Lt_006A:
.Lt_0069:
push 0
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_0065
.Lt_006B:
call HCHECKSCOPE
test eax, eax
je .Lt_006D
mov dword ptr [ebp-8], 64
.Lt_006D:
.Lt_006C:
push 0
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_0065
.Lt_006E:
call CPROCDECL
mov dword ptr [ebp-4], -1
jmp .Lt_0060
jmp .Lt_0065
.Lt_006F:
call CDEFDECL
mov dword ptr [ebp-4], -1
jmp .Lt_0060
jmp .Lt_0065
.Lt_0070:
call COPTDECL
mov dword ptr [ebp-4], -1
jmp .Lt_0060
jmp .Lt_0065
.Lt_0066:
mov eax, dword ptr [ebp-16]
add eax, 4294966975
cmp eax, 57
ja .Lt_0065
mov eax, dword ptr [ebp-16]
jmp dword ptr [.LT_0071+eax*4-1284]
.LT_0071:
.int .Lt_006F
.int .Lt_006F
.int .Lt_006F
.int .Lt_006F
.int .Lt_006F
.int .Lt_006F
.int .Lt_006F
.int .Lt_006F
.int .Lt_006F
.int .Lt_006F
.int .Lt_006F
.int .Lt_006F
.int .Lt_006F
.int .Lt_006E
.int .Lt_0065
.int .Lt_0065
.int .Lt_0065
.int .Lt_0065
.int .Lt_0065
.int .Lt_0065
.int .Lt_0065
.int .Lt_0065
.int .Lt_0070
.int .Lt_0065
.int .Lt_0065
.int .Lt_0065
.int .Lt_0065
.int .Lt_0065
.int .Lt_0065
.int .Lt_0065
.int .Lt_0065
.int .Lt_0065
.int .Lt_0065
.int .Lt_0065
.int .Lt_0065
.int .Lt_0065
.int .Lt_0065
.int .Lt_0065
.int .Lt_0065
.int .Lt_0065
.int .Lt_0065
.int .Lt_0065
.int .Lt_0065
.int .Lt_0065
.int .Lt_0065
.int .Lt_0065
.int .Lt_0065
.int .Lt_0065
.int .Lt_0065
.int .Lt_0065
.int .Lt_0065
.int .Lt_0065
.int .Lt_0065
.int .Lt_0065
.int .Lt_0065
.int .Lt_0065
.int .Lt_0068
.int .Lt_006B
.Lt_0065:
push 0
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp-12]
mov dword ptr [ebp-16], eax
jmp .Lt_0073
.Lt_0075:
push 0
push 1
call LEXGETLOOKAHEAD
add esp, 8
mov dword ptr [ebp-20], eax
jmp .Lt_0077
.Lt_0079:
push dword ptr [ebp-8]
call CPROCSTMTBEGIN
add esp, 4
mov dword ptr [ebp-4], -1
jmp .Lt_0076
.Lt_007A:
cmp dword ptr [ebp-12], 335
jne .Lt_007C
.Lt_007D:
push dword ptr [ebp-8]
call CCONSTDECL
add esp, 4
mov dword ptr [ebp-4], -1
jmp .Lt_007B
.Lt_007C:
cmp dword ptr [ebp-12], 307
jne .Lt_007E
.Lt_007F:
push dword ptr [ebp-8]
call CVARIABLEDECL
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_007B
.Lt_007E:
push 0
push 0
push 17
call ERRREPORT
add esp, 12
.Lt_0080:
.Lt_007B:
jmp .Lt_0076
.Lt_0077:
mov eax, dword ptr [ebp-20]
add eax, 4294966951
cmp eax, 10
ja .Lt_007A
mov eax, dword ptr [ebp-20]
jmp dword ptr [.LT_0081+eax*4-1380]
.LT_0081:
.int .Lt_0079
.int .Lt_0079
.int .Lt_0079
.int .Lt_0079
.int .Lt_0079
.int .Lt_0079
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_0079
.int .Lt_0079
.Lt_0076:
jmp .Lt_0072
.Lt_0082:
cmp dword ptr [ebp-8], 0
je .Lt_0084
push dword ptr [ebp-8]
call CPROCSTMTBEGIN
add esp, 4
mov dword ptr [ebp-4], -1
jmp .Lt_0083
.Lt_0084:
push 0
push 1
call LEXGETLOOKAHEAD
add esp, 8
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 299
je .Lt_0088
.Lt_0089:
cmp dword ptr [ebp-20], 305
jne .Lt_0087
.Lt_0088:
jmp .Lt_0085
.Lt_0087:
push 0
call CPROCSTMTBEGIN
add esp, 4
mov dword ptr [ebp-4], -1
.Lt_008A:
.Lt_0085:
.Lt_0083:
jmp .Lt_0072
.Lt_008B:
cmp dword ptr [ebp-8], 0
je .Lt_008D
push dword ptr [ebp-8]
call CPROCSTMTBEGIN
add esp, 4
mov dword ptr [ebp-4], -1
jmp .Lt_008C
.Lt_008D:
mov eax, dword ptr [ENV+832]
cmp dword ptr [PARSER+100], eax
jne .Lt_008F
push 0
call CPROCSTMTBEGIN
add esp, 4
mov dword ptr [ebp-4], -1
.Lt_008F:
.Lt_008E:
.Lt_008C:
jmp .Lt_0072
.Lt_0090:
cmp dword ptr [ebp-8], 0
je .Lt_0092
push dword ptr [ebp-8]
call CPROCSTMTBEGIN
add esp, 4
mov dword ptr [ebp-4], -1
jmp .Lt_0091
.Lt_0092:
mov eax, dword ptr [ENV+832]
cmp dword ptr [PARSER+100], eax
jne .Lt_0094
push 0
call CPROCSTMTBEGIN
add esp, 4
mov dword ptr [ebp-4], -1
jmp .Lt_0093
.Lt_0094:
push 0
push 1
call LEXGETLOOKAHEAD
add esp, 8
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 299
je .Lt_0098
.Lt_0099:
cmp dword ptr [ebp-20], 305
jne .Lt_0097
.Lt_0098:
jmp .Lt_0095
.Lt_0097:
push 0
call CPROCSTMTBEGIN
add esp, 4
mov dword ptr [ebp-4], -1
.Lt_009A:
.Lt_0095:
.Lt_0093:
.Lt_0091:
jmp .Lt_0072
.Lt_009B:
push dword ptr [ebp-8]
call CTYPEDECL
add esp, 4
mov dword ptr [ebp-4], -1
jmp .Lt_0072
.Lt_009C:
push dword ptr [ebp-8]
call CENUMDECL
add esp, 4
mov dword ptr [ebp-4], -1
jmp .Lt_0072
.Lt_009D:
push dword ptr [ebp-8]
call CVARIABLEDECL
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_0072
.Lt_009E:
cmp dword ptr [ebp-8], 0
je .Lt_00A0
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
.Lt_00A0:
.Lt_009F:
jmp .Lt_0072
.Lt_0073:
mov eax, dword ptr [ebp-16]
add eax, 4294966990
cmp eax, 49
ja .Lt_009E
mov eax, dword ptr [ebp-16]
jmp dword ptr [.LT_00A1+eax*4-1224]
.LT_00A1:
.int .Lt_009D
.int .Lt_0075
.int .Lt_009D
.int .Lt_009D
.int .Lt_009D
.int .Lt_009D
.int .Lt_009E
.int .Lt_009E
.int .Lt_009E
.int .Lt_009E
.int .Lt_009E
.int .Lt_009E
.int .Lt_009E
.int .Lt_009E
.int .Lt_009E
.int .Lt_009E
.int .Lt_009E
.int .Lt_009E
.int .Lt_009E
.int .Lt_009E
.int .Lt_009E
.int .Lt_009E
.int .Lt_009E
.int .Lt_009E
.int .Lt_009E
.int .Lt_009E
.int .Lt_009E
.int .Lt_009E
.int .Lt_009E
.int .Lt_0075
.int .Lt_009B
.int .Lt_009B
.int .Lt_009C
.int .Lt_009E
.int .Lt_009E
.int .Lt_009E
.int .Lt_009E
.int .Lt_009E
.int .Lt_009E
.int .Lt_0082
.int .Lt_0082
.int .Lt_008B
.int .Lt_0082
.int .Lt_0090
.int .Lt_0082
.int .Lt_009E
.int .Lt_009E
.int .Lt_009E
.int .Lt_0075
.int .Lt_0075
.Lt_0072:
.Lt_0060:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CDECLARATION, .-CDECLARATION
.balign 16
fb_ctor__parserzdecl:
.type fb_ctor__parserzdecl, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__parserzdecl, .-fb_ctor__parserzdecl
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
	#fbc-1.01.0/src/compiler/parser-decl.bas' compilation took 0.02611604181583971 secs

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
.int fb_ctor__parserzdecl
