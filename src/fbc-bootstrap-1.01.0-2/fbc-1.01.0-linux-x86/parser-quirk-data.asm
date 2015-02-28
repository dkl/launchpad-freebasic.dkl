	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/parser-quirk-data.bas' compilation started at 15:27:36 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl CDATASTMT
CDATASTMT:
.type CDATASTMT, @function
push ebp
mov ebp, esp
sub esp, 48
push ebx
mov dword ptr [ebp-4], 0
.Lt_0060:
mov dword ptr [ebp-4], 0
cmp dword ptr [ebp+8], 441
jne .Lt_0063
.Lt_0064:
push 0
call LEXSKIPTOKEN
add esp, 4
mov dword ptr [ebp-8], 0
push 0
call LEXGETCLASS
add esp, 4
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
je .Lt_0068
.Lt_0069:
cmp dword ptr [ebp-12], 2
je .Lt_0068
.Lt_006A:
cmp dword ptr [ebp-12], 3
jne .Lt_0067
.Lt_0068:
push 34
lea eax, [ebp-20]
push eax
call CIDENTIFIER
add esp, 8
mov dword ptr [ebp-16], eax
push 7
push dword ptr [ebp-16]
call SYMBFINDBYCLASS
add esp, 8
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_006C
push 72
call LEXGETTEXT
push eax
call SYMBADDLABEL
add esp, 8
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_006E
push 0
push 0
push 4
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
.Lt_006E:
.Lt_006D:
.Lt_006C:
.Lt_006B:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0067:
.Lt_0065:
push 0
push dword ptr [ebp-8]
call RTLDATARESTORE
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_0062
.Lt_0063:
cmp dword ptr [ebp+8], 442
jne .Lt_006F
.Lt_0070:
push 0
call LEXSKIPTOKEN
add esp, 4
mov dword ptr [ebp-8], 0
.Lt_0071:
push 0
call CVARORDEREF
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0075
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
jmp .Lt_0074
.Lt_0075:
push dword ptr [ebp-8]
call RTLDATAREAD
add esp, 4
test eax, eax
jne .Lt_0077
jmp .Lt_0061
.Lt_0077:
.Lt_0076:
.Lt_0074:
.Lt_0073:
push 44
call HMATCH
add esp, 4
test eax, eax
jne .Lt_0071
.Lt_0072:
mov dword ptr [ebp-4], -1
jmp .Lt_0062
.Lt_006F:
cmp dword ptr [ebp+8], 443
jne .Lt_0078
.Lt_0079:
cmp dword ptr [ENV+136], 3
je .Lt_007B
push 32
call CCOMPSTMTISALLOWED
add esp, 4
test eax, eax
jne .Lt_007D
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_0061
.Lt_007D:
.Lt_007C:
cmp dword ptr [PARSER+92], 0
jbe .Lt_007F
mov eax, dword ptr [PARSER+100]
cmp eax, dword ptr [ENV+832]
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_0081
push 0
push 0
push 60
call ERRREPORT
add esp, 12
jmp .Lt_0080
.Lt_0081:
push 0
push 0
push 95
call ERRREPORT
add esp, 12
.Lt_0080:
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
mov dword ptr [ebp-4], 0
jmp .Lt_0061
.Lt_007F:
.Lt_007E:
jmp .Lt_007A
.Lt_007B:
mov ebx, dword ptr [PARSER+100]
cmp ebx, dword ptr [ENV+832]
sete al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_0083
push 0
push 0
push 60
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
mov dword ptr [ebp-4], 0
jmp .Lt_0061
.Lt_0083:
.Lt_0082:
.Lt_007A:
call ASTDATASTMTBEGIN
mov dword ptr [ebp-8], eax
mov dword ptr [ebp-12], 0
cmp dword ptr [ENV+136], 3
je .Lt_0085
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0086:
push 7
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_008A
jmp .Lt_0061
.Lt_008A:
.Lt_0089:
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax]
cmp ebx, 16
sete bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-16], ebx
cmp dword ptr [ebp-16], 0
jne .Lt_008C
mov ebx, dword ptr [ebp-12]
cmp dword ptr [ebx], 23
jne .Lt_008E
mov dword ptr [ebp-16], -1
jmp .Lt_008D
.Lt_008E:
mov ebx, dword ptr [ebp-12]
mov eax, dword ptr [ebx+4]
and eax, 511
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 3
je .Lt_0092
.Lt_0093:
cmp dword ptr [ebp-20], 6
jne .Lt_0091
.Lt_0092:
push dword ptr [ebp-12]
call ASTGETSTRLITSYMBOL
add esp, 4
test eax, eax
setne bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-16], ebx
.Lt_0091:
.Lt_008F:
.Lt_008D:
.Lt_008C:
.Lt_008B:
cmp dword ptr [ebp-16], 0
jne .Lt_0095
push 0
push 0
push 11
call ERRREPORT
add esp, 12
push dword ptr [ebp-12]
call ASTDELTREE
add esp, 4
jmp .Lt_0094
.Lt_0095:
push dword ptr [ebp-12]
push dword ptr [ebp-8]
call ASTDATASTMTSTORE
add esp, 8
test eax, eax
jne .Lt_0097
jmp .Lt_0061
.Lt_0097:
.Lt_0096:
.Lt_0094:
.Lt_0088:
push 44
call HMATCH
add esp, 4
test eax, eax
jne .Lt_0086
.Lt_0087:
jmp .Lt_0084
.Lt_0085:
push 62
call LEXSKIPTOKEN
add esp, 4
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
.Lt_0098:
mov dword ptr [ebp-32], 0
push 0
push 1
push offset Lt_0000
push -1
lea eax, [ebp-28]
push eax
call fb_StrAssign
add esp, 20
.Lt_009B:
push 62
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-48], eax
jmp .Lt_009F
.Lt_00A1:
push 62
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_009C
jmp .Lt_009E
.Lt_00A2:
dec dword ptr [ebp-32]
jmp .Lt_009E
.Lt_00A3:
mov dword ptr [ebp-16], -1
jmp .Lt_009C
jmp .Lt_009E
.Lt_009F:
mov eax, dword ptr [ebp-48]
add eax, 4294967287
cmp eax, 251
ja .Lt_009E
mov eax, dword ptr [ebp-48]
jmp dword ptr [.LT_00A4+eax*4-36]
.LT_00A4:
.int .Lt_00A2
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
.int .Lt_00A2
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
.int .Lt_00A1
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
.int .Lt_009E
.int .Lt_009E
.int .Lt_009E
.int .Lt_009E
.int .Lt_00A3
.int .Lt_00A3
.int .Lt_00A3
.int .Lt_00A3
.int .Lt_00A3
.Lt_009E:
push 0
push -1
push 0
call LEXGETTEXT
push eax
push -1
lea eax, [ebp-28]
push eax
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
lea eax, [ebp-44]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-28]
push eax
call fb_StrAssign
add esp, 20
push 62
call LEXSKIPTOKEN
add esp, 4
inc dword ptr [ebp-32]
.Lt_009D:
jmp .Lt_009B
.Lt_009C:
push 0
push -1
lea eax, [ebp-28]
push eax
call fb_TRIM
add esp, 4
push eax
push -1
lea eax, [ebp-28]
push eax
call fb_StrAssign
add esp, 20
cmp dword ptr [ebp-32], 1
jne .Lt_00A7
push -1
lea eax, [ebp-28]
push eax
call fb_StrLen
add esp, 8
cmp eax, 1
jle .Lt_00A9
mov eax, dword ptr [ebp-28]
movzx ebx, byte ptr [eax]
cmp ebx, 34
jne .Lt_00AC
push -1
lea ebx, [ebp-28]
push ebx
call fb_StrLen
add esp, 8
mov ebx, dword ptr [ebp-28]
add ebx, eax
movzx eax, byte ptr [ebx-1]
cmp eax, 34
jne .Lt_00AE
push 0
push -1
push -1
lea eax, [ebp-28]
push eax
call fb_StrLen
add esp, 8
add eax, -2
push eax
push 2
lea eax, [ebp-28]
push eax
call fb_StrMid
add esp, 12
push eax
push -1
lea eax, [ebp-28]
push eax
call fb_StrAssign
add esp, 20
.Lt_00AE:
.Lt_00AD:
.Lt_00AC:
.Lt_00AB:
.Lt_00A9:
.Lt_00A8:
.Lt_00A7:
.Lt_00A6:
push dword ptr [ebp-28]
call ASTNEWCONSTSTR
add esp, 4
push eax
push dword ptr [ebp-8]
call ASTDATASTMTSTORE
add esp, 8
test eax, eax
jne .Lt_00B0
lea eax, [ebp-28]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0061
.Lt_00B0:
.Lt_00AF:
.Lt_009A:
cmp dword ptr [ebp-16], 0
je .Lt_0098
.Lt_0099:
lea eax, [ebp-28]
push eax
call fb_StrDelete
add esp, 4
.Lt_0084:
push dword ptr [ebp-8]
call ASTDATASTMTEND
add esp, 4
push dword ptr [ebp-8]
call ASTDELNODE
add esp, 4
mov dword ptr [ebp-4], -1
.Lt_0078:
.Lt_0062:
.Lt_0061:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CDATASTMT, .-CDATASTMT
.balign 16
fb_ctor__parserzquirkzdata:
.type fb_ctor__parserzquirkzdata, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__parserzquirkzdata, .-fb_ctor__parserzquirkzdata
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
	#fbc-1.01.0/src/compiler/parser-quirk-data.bas' compilation took 0.03205503732897341 secs

.section .rodata
.balign 4
Lt_0000:	.ascii	"\0"

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
.int fb_ctor__parserzquirkzdata
