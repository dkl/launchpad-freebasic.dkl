	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/parser-quirk-goto-return.bas' compilation started at 14:16:37 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl CGOTOSTMT
CGOTOSTMT:
.type CGOTOSTMT, @function
push ebp
mov ebp, esp
sub esp, 12
mov dword ptr [ebp-4], 0
.Lt_008D:
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-12], eax
jmp .Lt_0090
.Lt_0092:
push 0
call LEXSKIPTOKEN
add esp, 4
call HGETLABELID
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
je .Lt_0094
push dword ptr [ebp-8]
call ASTSCOPEBREAK
add esp, 4
.Lt_0094:
.Lt_0093:
mov dword ptr [ebp-4], -1
jmp .Lt_008F
.Lt_0095:
mov eax, dword ptr [ENV+840]
and eax, 65536
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_0097
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
jmp .Lt_008E
.Lt_0097:
.Lt_0096:
cmp dword ptr [ENV+892], 0
je .Lt_0099
call HGOSUBBRANCH
jmp .Lt_0098
.Lt_0099:
push 0
push 0
push 277
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
.Lt_0098:
mov dword ptr [ebp-4], -1
jmp .Lt_008E
jmp .Lt_008F
.Lt_009A:
mov eax, dword ptr [ENV+840]
and eax, 65536
test eax, eax
je .Lt_009C
cmp dword ptr [ENV+892], 0
je .Lt_009E
call HGOSUBRETURN
mov dword ptr [ebp-4], eax
jmp .Lt_008E
.Lt_009E:
.Lt_009D:
.Lt_009C:
.Lt_009B:
call HFUNCRETURN
mov dword ptr [ebp-4], eax
jmp .Lt_008E
jmp .Lt_008F
.Lt_009F:
mov eax, dword ptr [ENV+840]
and eax, 134217728
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_00A1
push 0
push 145
push 134217728
call ERRREPORTNOTALLOWED
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
mov dword ptr [ebp-4], -1
jmp .Lt_008E
.Lt_00A1:
.Lt_00A0:
push 0
call LEXSKIPTOKEN
add esp, 4
push 283
call HMATCH
add esp, 4
push eax
call RTLERRORRESUME
add esp, 4
mov dword ptr [ebp-4], -1
jmp .Lt_008F
.Lt_0090:
mov eax, dword ptr [ebp-12]
add eax, 4294966907
cmp eax, 109
ja .Lt_008F
mov eax, dword ptr [ebp-12]
jmp dword ptr [.LT_00A2+eax*4-1556]
.LT_00A2:
.int .Lt_009A
.int .Lt_0092
.int .Lt_0095
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_009F
.Lt_008F:
.Lt_008E:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size CGOTOSTMT, .-CGOTOSTMT
.balign 16
fb_ctor__parserzquirkzgotozreturn:
.type fb_ctor__parserzquirkzgotozreturn, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__parserzquirkzgotozreturn, .-fb_ctor__parserzquirkzgotozreturn
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
HFUNCRETURN:
.type HFUNCRETURN, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
mov dword ptr [ebp-4], 0
.Lt_0060:
mov dword ptr [ebp-4], 0
mov dword ptr [ebp-12], 0
cmp dword ptr [PARSER+48], 0
je .Lt_0063
mov eax, dword ptr [PARSER+48]
mov ebx, dword ptr [eax+20]
mov dword ptr [ebp-12], ebx
.Lt_0063:
.Lt_0062:
cmp dword ptr [ebp-12], 0
jne .Lt_0065
push 0
push 0
push 52
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
mov dword ptr [ebp-4], -1
jmp .Lt_0061
.Lt_0065:
.Lt_0064:
push 0
call LEXSKIPTOKEN
add esp, 4
mov ebx, dword ptr [PARSER+100]
mov eax, dword ptr [ebx+24]
and eax, 511
test eax, eax
je .Lt_0067
mov dword ptr [ebp-8], -1
jmp .Lt_0066
.Lt_0067:
push 0
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-16], eax
jmp .Lt_0069
.Lt_006B:
mov dword ptr [ebp-8], 0
jmp .Lt_0068
.Lt_006C:
mov dword ptr [ebp-8], -1
jmp .Lt_0068
.Lt_0069:
mov eax, dword ptr [ebp-16]
add eax, 4294967040
cmp eax, 84
ja .Lt_006C
mov eax, dword ptr [ebp-16]
jmp dword ptr [.LT_006D+eax*4-1024]
.LT_006D:
.int .Lt_006B
.int .Lt_006B
.int .Lt_006B
.int .Lt_006B
.int .Lt_006B
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006B
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006B
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006B
.Lt_0068:
.Lt_0066:
cmp dword ptr [ebp-8], 0
je .Lt_006F
push -1
call CASSIGNFUNCTRESULT
add esp, 4
test eax, eax
jne .Lt_0071
jmp .Lt_0061
.Lt_0071:
.Lt_0070:
.Lt_006F:
.Lt_006E:
push dword ptr [ebp-12]
call ASTSCOPEBREAK
add esp, 4
mov dword ptr [ebp-4], -1
.Lt_0061:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HFUNCRETURN, .-HFUNCRETURN
.balign 16
HGETLABELID:
.type HGETLABELID, @function
push ebp
mov ebp, esp
sub esp, 20
mov dword ptr [ebp-4], 0
.Lt_0072:
push 0
call LEXGETCLASS
add esp, 4
mov dword ptr [ebp-12], eax
jmp .Lt_0075
.Lt_0077:
push 0
push 0
push 7
call LEXGETTEXT
push eax
push dword ptr [SYMB+98516]
call SYMBLOOKUPBYNAMEANDCLASS
add esp, 20
mov dword ptr [ebp-8], eax
jmp .Lt_0074
.Lt_0078:
push 38
lea eax, [ebp-16]
push eax
call CIDENTIFIER
add esp, 8
mov dword ptr [ebp-20], eax
push 7
push dword ptr [ebp-20]
call SYMBFINDBYCLASS
add esp, 8
mov dword ptr [ebp-8], eax
jmp .Lt_0074
.Lt_0079:
push 0
push 0
push 14
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
mov dword ptr [ebp-4], 0
jmp .Lt_0073
jmp .Lt_0074
.Lt_0075:
cmp dword ptr [ebp-12], 3
ja .Lt_0079
mov eax, dword ptr [ebp-12]
jmp dword ptr [.LT_007A+eax*4]
.LT_007A:
.int .Lt_0078
.int .Lt_0078
.int .Lt_0078
.int .Lt_0077
.Lt_0074:
cmp dword ptr [ebp-8], 0
jne .Lt_007C
push 64
call LEXGETTEXT
push eax
call SYMBADDLABEL
add esp, 8
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_007E
push 0
push 0
push 14
call ERRREPORT
add esp, 12
.Lt_007E:
.Lt_007D:
.Lt_007C:
.Lt_007B:
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0073:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size HGETLABELID, .-HGETLABELID
.balign 16
HGOSUBBRANCH:
.type HGOSUBBRANCH, @function
push ebp
mov ebp, esp
sub esp, 4
.Lt_007F:
push 0
call LEXSKIPTOKEN
add esp, 4
call HGETLABELID
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
je .Lt_0082
push dword ptr [ebp-4]
push dword ptr [PARSER+100]
call ASTGOSUBADDJMP
add esp, 8
.Lt_0082:
.Lt_0081:
.Lt_0080:
mov esp, ebp
pop ebp
ret
.size HGOSUBBRANCH, .-HGOSUBBRANCH
.balign 16
HGOSUBRETURN:
.type HGOSUBRETURN, @function
push ebp
mov ebp, esp
sub esp, 12
mov dword ptr [ebp-4], 0
.Lt_0083:
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-12], eax
jmp .Lt_0086
.Lt_0088:
push 0
push dword ptr [PARSER+100]
call ASTGOSUBADDRETURN
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_0085
.Lt_0089:
call HGETLABELID
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
je .Lt_008B
push dword ptr [ebp-8]
push dword ptr [PARSER+100]
call ASTGOSUBADDRETURN
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_008A
.Lt_008B:
mov dword ptr [ebp-4], -1
.Lt_008A:
jmp .Lt_0085
.Lt_0086:
mov eax, dword ptr [ebp-12]
add eax, 4294967040
cmp eax, 84
ja .Lt_0089
mov eax, dword ptr [ebp-12]
jmp dword ptr [.LT_008C+eax*4-1024]
.LT_008C:
.int .Lt_0088
.int .Lt_0088
.int .Lt_0088
.int .Lt_0088
.int .Lt_0088
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0088
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0088
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0089
.int .Lt_0088
.Lt_0085:
.Lt_0084:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size HGOSUBRETURN, .-HGOSUBRETURN
	#fbc-1.01.0/src/compiler/parser-quirk-goto-return.bas' compilation took 0.04041891754604876 secs

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
.int fb_ctor__parserzquirkzgotozreturn
