	.intel_syntax noprefix

	#FreeBASIC-1.01.0-source/src/compiler/parser-compound-namespace.bas' compilation started at 16:30:04 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl CNAMESPACESTMTBEGIN
CNAMESPACESTMTBEGIN:
.type CNAMESPACESTMTBEGIN, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
.Lt_0063:
mov eax, dword ptr [ENV+840]
and eax, 4
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_0066
push 0
push 145
push 4
call ERRREPORTNOTALLOWED
add esp, 12
push 0
push -1
push 286
call HSKIPCOMPOUND
add esp, 12
jmp .Lt_0064
.Lt_0066:
.Lt_0065:
push 4
call CCOMPSTMTISALLOWED
add esp, 4
test eax, eax
jne .Lt_0068
push 0
push -1
push 286
call HSKIPCOMPOUND
add esp, 12
jmp .Lt_0064
.Lt_0068:
.Lt_0067:
push 64
call LEXSKIPTOKEN
add esp, 4
mov dword ptr [ebp-4], 0
push 0
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-24], eax
jmp .Lt_006A
.Lt_006C:
push -50
push 286
call CCOMPSTMTPUSH
add esp, 8
mov dword ptr [ebp-16], eax
push 0
push dword ptr [ebp-16]
call NAMESPACEBEGIN
add esp, 8
jmp .Lt_0064
jmp .Lt_0069
.Lt_006A:
mov eax, dword ptr [ebp-24]
add eax, 4294967040
cmp eax, 4
ja .Lt_0069
mov eax, dword ptr [ebp-24]
jmp dword ptr [.LT_006D+eax*4-1024]
.LT_006D:
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.int .Lt_006C
.Lt_0069:
mov dword ptr [ebp-20], 0
.Lt_006E:
mov eax, dword ptr [ebp-20]
add eax, dword ptr [PARSER+88]
cmp eax, 64
jl .Lt_0072
push 0
push 0
push 27
call ERRREPORT
add esp, 12
jmp .Lt_0064
.Lt_0072:
.Lt_0071:
inc dword ptr [ebp-20]
push 0
call LEXGETCLASS
add esp, 4
mov dword ptr [ebp-24], eax
cmp dword ptr [ebp-24], 0
jne .Lt_0075
.Lt_0076:
push 0
push 0
call LEXGETTEXT
push eax
push 129
push offset Lt_008F
call fb_StrAssign
add esp, 20
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [eax+16532]
mov eax, dword ptr [ebx+4116]
mov dword ptr [ebp-12], eax
jmp .Lt_0073
.Lt_0075:
cmp dword ptr [ebp-24], 2
jne .Lt_0077
.Lt_0078:
lea eax, [SYMB+98352]
cmp dword ptr [SYMB+98516], eax
jne .Lt_007A
push 0
push 0
push 4
call ERRREPORT
add esp, 12
mov byte ptr [Lt_008F], 0
mov dword ptr [ebp-12], 0
jmp .Lt_0079
.Lt_007A:
push 0
push 0
call LEXGETTEXT
push eax
push 129
push offset Lt_008F
call fb_StrAssign
add esp, 20
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [eax+16532]
mov eax, dword ptr [ebx+4116]
mov dword ptr [ebp-12], eax
.Lt_0079:
jmp .Lt_0073
.Lt_0077:
push 0
push 0
push 14
call ERRREPORT
add esp, 12
mov byte ptr [Lt_008F], 0
mov dword ptr [ebp-12], 0
.Lt_007B:
.Lt_0073:
cmp dword ptr [ebp-12], 0
je .Lt_007D
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-8], ebx
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx]
cmp eax, 8
sete al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_007F
push 0
push 1
push 0
push offset Lt_008F
push 4
call ERRREPORTEX
add esp, 20
push 0
push 0
call SYMBUNIQUELABEL
push eax
push 129
push offset Lt_008F
call fb_StrAssign
add esp, 20
mov dword ptr [ebp-8], 0
jmp .Lt_007E
.Lt_007F:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [SYMB+98520]
cmp dword ptr [eax+128], ebx
je .Lt_0081
mov dword ptr [ebp-8], 0
.Lt_0081:
.Lt_0080:
.Lt_007E:
jmp .Lt_007C
.Lt_007D:
mov dword ptr [ebp-8], 0
.Lt_007C:
movzx ebx, byte ptr [Lt_008F]
test ebx, ebx
je .Lt_0083
push 64
call LEXSKIPTOKEN
add esp, 4
.Lt_0083:
.Lt_0082:
cmp dword ptr [ebp-8], 0
jne .Lt_0085
cmp dword ptr [ebp-20], 1
jne .Lt_0087
call CALIASATTRIBUTE
mov dword ptr [ebp-4], eax
.Lt_0087:
.Lt_0086:
push dword ptr [ebp-4]
push offset Lt_008F
call SYMBADDNAMESPACE
add esp, 8
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0089
push 0
push 1
push 0
push offset Lt_008F
push 4
call ERRREPORTEX
add esp, 20
.Lt_0089:
.Lt_0088:
.Lt_0085:
.Lt_0084:
push -34
push 286
call CCOMPSTMTPUSH
add esp, 8
mov dword ptr [ebp-16], eax
push dword ptr [ebp-8]
push dword ptr [ebp-16]
call NAMESPACEBEGIN
add esp, 8
cmp dword ptr [ebp-4], 0
je .Lt_008B
jmp .Lt_006F
.Lt_008B:
.Lt_008A:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 46
je .Lt_008D
jmp .Lt_006F
.Lt_008D:
.Lt_008C:
push 64
call LEXSKIPTOKEN
add esp, 4
.Lt_0070:
jmp .Lt_006E
.Lt_006F:
mov eax, dword ptr [ebp-16]
mov ebx, dword ptr [ebp-20]
mov dword ptr [eax+16], ebx
mov ebx, dword ptr [ebp-20]
add dword ptr [PARSER+88], ebx
.Lt_0064:
pop ebx
mov esp, ebp
pop ebp
ret
.size CNAMESPACESTMTBEGIN, .-CNAMESPACESTMTBEGIN

.section .bss
.balign 4
	.lcomm	Lt_008F,129

.section .text
.balign 16

.globl CNAMESPACESTMTEND
CNAMESPACESTMTEND:
.type CNAMESPACESTMTEND, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
.Lt_0091:
push -1
push 286
call CCOMPSTMTGETTOS
add esp, 8
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
jne .Lt_0094
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_0092
.Lt_0094:
.Lt_0093:
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+16]
mov dword ptr [ebp-8], ebx
mov ebx, dword ptr [ebp-8]
sub dword ptr [PARSER+88], ebx
.Lt_0095:
cmp dword ptr [ebp-8], 0
jle .Lt_0096
push 0
call SYMBNESTEND
add esp, 4
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebx+12]
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp-12]
inc dword ptr [eax+92]
mov eax, dword ptr [ebp-12]
cmp dword ptr [eax+92], 1
jle .Lt_0098
push dword ptr [ebp-12]
call SYMBNAMESPACEREIMPORT
add esp, 4
.Lt_0098:
.Lt_0097:
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [ebp-12]
mov ecx, dword ptr [eax+60]
mov dword ptr [ebx+96], ecx
push dword ptr [ebp-4]
call CCOMPSTMTPOP
add esp, 4
push 0
push 286
call CCOMPSTMTGETTOS
add esp, 8
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
jne .Lt_009A
jmp .Lt_0096
.Lt_009A:
.Lt_0099:
dec dword ptr [ebp-8]
jmp .Lt_0095
.Lt_0096:
.Lt_0092:
pop ebx
mov esp, ebp
pop ebp
ret
.size CNAMESPACESTMTEND, .-CNAMESPACESTMTEND
.balign 16

.globl CUSINGSTMT
CUSINGSTMT:
.type CUSINGSTMT, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_009B:
mov eax, dword ptr [ENV+840]
and eax, 4
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_009E
push 0
push 145
push 4
call ERRREPORTNOTALLOWED
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_009C
.Lt_009E:
.Lt_009D:
push 64
call LEXSKIPTOKEN
add esp, 4
.Lt_009F:
push 1
call CPARENTID
add esp, 4
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
jne .Lt_00A3
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 265
je .Lt_00A5
push 0
push 0
push 14
call ERRREPORT
add esp, 12
jmp .Lt_00A4
.Lt_00A5:
push 0
push 0
push 8
call ERRREPORT
add esp, 12
.Lt_00A4:
push 0
push 0
push 0
push 44
call HSKIPUNTIL
add esp, 16
jmp .Lt_00A2
.Lt_00A3:
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax]
cmp ebx, 8
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_00A7
push 0
push 0
push 20
call ERRREPORT
add esp, 12
jmp .Lt_00A6
.Lt_00A7:
push dword ptr [ebp-4]
call SYMBNAMESPACEIMPORT
add esp, 4
.Lt_00A6:
.Lt_00A2:
.Lt_00A1:
push 44
call HMATCH
add esp, 4
test eax, eax
jne .Lt_009F
.Lt_00A0:
.Lt_009C:
pop ebx
mov esp, ebp
pop ebp
ret
.size CUSINGSTMT, .-CUSINGSTMT
.balign 16
fb_ctor__parserzcompoundznamespace:
.type fb_ctor__parserzcompoundznamespace, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__parserzcompoundznamespace, .-fb_ctor__parserzcompoundznamespace
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
NAMESPACEBEGIN:
.type NAMESPACEBEGIN, @function
push ebp
mov ebp, esp
push ebx
.Lt_005F:
cmp dword ptr [ebp+12], 0
jne .Lt_0062
push 0
call SYMBUNIQUELABEL
push eax
call SYMBADDNAMESPACE
add esp, 8
mov dword ptr [ebp+12], eax
.Lt_0062:
.Lt_0061:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+12]
mov dword ptr [eax+12], ebx
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+16], 1
push 0
push dword ptr [ebp+12]
call SYMBNESTBEGIN
add esp, 8
.Lt_0060:
pop ebx
mov esp, ebp
pop ebp
ret
.size NAMESPACEBEGIN, .-NAMESPACEBEGIN
	#FreeBASIC-1.01.0-source/src/compiler/parser-compound-namespace.bas' compilation took 0.02922397037036717 secs

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
.int fb_ctor__parserzcompoundznamespace
