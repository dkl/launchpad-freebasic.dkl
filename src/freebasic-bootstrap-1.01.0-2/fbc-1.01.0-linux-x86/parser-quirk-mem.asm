	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/parser-quirk-mem.bas' compilation started at 14:16:37 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl COPERATORNEW
COPERATORNEW:
.type COPERATORNEW, @function
push ebp
mov ebp, esp
sub esp, 60
push ebx
mov dword ptr [ebp-4], 0
.Lt_005F:
mov dword ptr [ebp-28], -1
mov dword ptr [ebp-48], 78
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-40], 0
push 0
call LEXSKIPTOKEN
add esp, 4
push 40
call HMATCH
add esp, 4
test eax, eax
je .Lt_0062
call CEXPRESSION
mov dword ptr [ebp-40], eax
cmp dword ptr [ebp-40], 0
jne .Lt_0064
push 0
push -1
push 9
call ERRREPORT
add esp, 12
.Lt_0064:
.Lt_0063:
push 41
call HMATCH
add esp, 4
test eax, eax
jne .Lt_0066
push 0
push 0
push 7
call ERRREPORT
add esp, 12
.Lt_0066:
.Lt_0065:
.Lt_0062:
.Lt_0061:
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
lea eax, [ebp-56]
push eax
lea eax, [ebp-12]
push eax
lea eax, [ebp-8]
push eax
call HSYMBOLTYPE
add esp, 12
mov eax, dword ptr [ebp-8]
and eax, 511
mov dword ptr [ebp-60], eax
cmp dword ptr [ebp-60], 17
je .Lt_006B
.Lt_006C:
cmp dword ptr [ebp-60], 3
je .Lt_006B
.Lt_006D:
cmp dword ptr [ebp-60], 6
jne .Lt_006A
.Lt_006B:
push 0
push -1
push 200
call ERRREPORT
add esp, 12
mov dword ptr [ebp-8], 16
.Lt_006A:
.Lt_0068:
push dword ptr [ebp-12]
push dword ptr [ebp-8]
call HCOMPLAINIFABSTRACTCLASS
add esp, 8
push dword ptr [ebp-12]
push dword ptr [ebp-8]
call TYPEHASCTOR
add esp, 8
mov dword ptr [ebp-20], eax
push dword ptr [ebp-12]
push dword ptr [ebp-8]
call TYPEHASDEFCTOR
add esp, 8
mov dword ptr [ebp-24], eax
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 91
jne .Lt_006F
push 0
call LEXSKIPTOKEN
add esp, 4
call CEXPRESSION
mov dword ptr [ebp-36], eax
cmp dword ptr [ebp-36], 0
jne .Lt_0071
push 0
push 0
push 9
call ERRREPORT
add esp, 12
jmp .Lt_0070
.Lt_0071:
mov dword ptr [ebp-48], 79
.Lt_0070:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 93
je .Lt_0073
push 0
push 0
push 65
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push 93
call HSKIPUNTIL
add esp, 16
jmp .Lt_0072
.Lt_0073:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0072:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 123
jne .Lt_0075
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 371
jne .Lt_0077
cmp dword ptr [ebp-24], 0
je .Lt_0079
push 1
push 0
push 19
call ERRREPORTWARN
add esp, 12
.Lt_0079:
.Lt_0078:
mov eax, dword ptr [ebp-8]
and eax, 511
cmp eax, 16
jne .Lt_007B
push 0
push 0
push 24
call ERRREPORT
add esp, 12
jmp .Lt_007A
.Lt_007B:
mov dword ptr [ebp-28], 0
.Lt_007A:
push 0
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_0076
.Lt_0077:
push 0
push 0
push 199
call ERRREPORT
add esp, 12
.Lt_0076:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 125
je .Lt_007D
push 0
push 0
push 64
call ERRREPORT
add esp, 12
push 0
push 0
push -1
push 125
call HSKIPUNTIL
add esp, 16
jmp .Lt_007C
.Lt_007D:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_007C:
.Lt_0075:
.Lt_0074:
.Lt_006F:
.Lt_006E:
cmp dword ptr [ebp-36], 0
jne .Lt_007F
push 0
push 8
push 0
push 1
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-36], eax
jmp .Lt_007E
.Lt_007F:
push 0
push 0
push dword ptr [ebp-36]
push 0
push 8
call ASTNEWCONV
add esp, 20
mov dword ptr [ebp-36], eax
cmp dword ptr [ebp-36], 0
jne .Lt_0081
push 0
push -1
push 20
call ERRREPORT
add esp, 12
push 0
push 8
push 0
push 1
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-36], eax
.Lt_0081:
.Lt_0080:
.Lt_007E:
push dword ptr [ebp-12]
mov eax, dword ptr [ebp-8]
and eax, 31
mov ebx, dword ptr [ebp-8]
and ebx, 480
add ebx, 32
or eax, ebx
mov ebx, dword ptr [ebp-8]
and ebx, 261632
sal ebx, 1
or eax, ebx
push eax
call SYMBADDTEMPVAR
add esp, 8
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-20], 0
je .Lt_0083
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
jne .Lt_0085
cmp dword ptr [ebp-48], 79
jne .Lt_0087
push 0
push -1
push 198
call ERRREPORT
add esp, 12
jmp .Lt_0086
.Lt_0087:
push dword ptr [ebp-12]
call CCTORCALL
add esp, 4
mov dword ptr [ebp-32], eax
cmp dword ptr [ebp-32], 0
jne .Lt_0089
mov dword ptr [ebp-4], 0
jmp .Lt_0060
.Lt_0089:
.Lt_0088:
.Lt_0086:
jmp .Lt_0084
.Lt_0085:
push dword ptr [ebp-12]
call SYMBGETCOMPDEFCTOR
add esp, 4
mov dword ptr [ebp-60], eax
cmp dword ptr [ebp-60], 0
jne .Lt_008B
push 0
push 0
push 182
call ERRREPORT
add esp, 12
jmp .Lt_008A
.Lt_008B:
cmp dword ptr [ebp-48], 79
je .Lt_008D
push dword ptr [ebp-12]
call CCTORCALL
add esp, 4
mov dword ptr [ebp-32], eax
cmp dword ptr [ebp-32], 0
jne .Lt_008F
mov dword ptr [ebp-4], 0
jmp .Lt_0060
.Lt_008F:
.Lt_008E:
jmp .Lt_008C
.Lt_008D:
push dword ptr [ebp-60]
call SYMBCHECKACCESS
add esp, 4
test eax, eax
jne .Lt_0091
push 0
push 0
push 203
call ERRREPORT
add esp, 12
.Lt_0091:
.Lt_0090:
.Lt_008C:
.Lt_008A:
.Lt_0084:
jmp .Lt_0082
.Lt_0083:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
jne .Lt_0093
cmp dword ptr [ebp-48], 79
jne .Lt_0095
push 0
push -1
push 199
call ERRREPORT
add esp, 12
.Lt_0095:
.Lt_0094:
push 0
push 1
call LEXGETLOOKAHEAD
add esp, 8
cmp eax, 371
jne .Lt_0097
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [ebp-8]
and eax, 511
cmp eax, 16
jne .Lt_0099
push 0
push 0
push 24
call ERRREPORT
add esp, 12
jmp .Lt_0098
.Lt_0099:
mov dword ptr [ebp-28], 0
.Lt_0098:
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_009B
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
jmp .Lt_009A
.Lt_009B:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_009A:
jmp .Lt_0096
.Lt_0097:
push dword ptr [ebp-12]
push dword ptr [ebp-8]
push 1
push dword ptr [ebp-16]
call CINITIALIZER
add esp, 16
mov dword ptr [ebp-32], eax
cmp dword ptr [ebp-32], 0
jne .Lt_009D
push 0
push 0
push 9
call ERRREPORT
add esp, 12
.Lt_009D:
.Lt_009C:
.Lt_0096:
.Lt_0093:
.Lt_0092:
.Lt_0082:
push dword ptr [ebp-40]
push dword ptr [ebp-28]
push dword ptr [ebp-12]
push dword ptr [ebp-8]
push dword ptr [ebp-32]
push dword ptr [ebp-36]
push dword ptr [ebp-16]
push dword ptr [ebp-48]
call ASTBUILDNEWOP
add esp, 32
mov dword ptr [ebp-44], eax
cmp dword ptr [ebp-44], 0
jne .Lt_009F
push 0
push 0
push 24
call ERRREPORT
add esp, 12
.Lt_009F:
.Lt_009E:
push 0
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp-16]
call ASTNEWVAR
add esp, 20
push eax
push dword ptr [ebp-44]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-4], eax
.Lt_0060:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size COPERATORNEW, .-COPERATORNEW
.balign 16

.globl COPERATORDELETE
COPERATORDELETE:
.type COPERATORDELETE, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
.Lt_00A0:
push 0
call LEXSKIPTOKEN
add esp, 4
mov dword ptr [ebp-12], 80
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 91
jne .Lt_00A3
push 0
call LEXSKIPTOKEN
add esp, 4
mov dword ptr [ebp-12], 81
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 93
je .Lt_00A5
push 0
push 0
push 65
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push 93
call HSKIPUNTIL
add esp, 16
jmp .Lt_00A1
.Lt_00A5:
.Lt_00A4:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_00A3:
.Lt_00A2:
push 4
call CVARORDEREF
add esp, 4
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
jne .Lt_00A7
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
jmp .Lt_00A1
.Lt_00A7:
.Lt_00A6:
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-8], ebx
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebx+8]
mov dword ptr [ebp-16], eax
mov eax, dword ptr [ebp-8]
and eax, 480
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_00A9
push 0
push 0
push 28
call ERRREPORT
add esp, 12
jmp .Lt_00A1
.Lt_00A9:
.Lt_00A8:
mov eax, dword ptr [ebp-8]
and eax, 511
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 32
jne .Lt_00AC
.Lt_00AD:
push 1
push 0
push 22
call ERRREPORTWARN
add esp, 12
jmp .Lt_00AA
.Lt_00AC:
cmp dword ptr [ebp-20], 53
jne .Lt_00AE
.Lt_00AF:
push 0
push -1
push 70
call ERRREPORT
add esp, 12
.Lt_00AE:
.Lt_00AA:
push dword ptr [ebp-16]
mov eax, dword ptr [ebp-8]
and eax, 31
mov ebx, dword ptr [ebp-8]
and ebx, 480
add ebx, -32
or eax, ebx
mov ebx, dword ptr [ebp-8]
and ebx, 261632
sar ebx, 1
and ebx, 261632
or eax, ebx
push eax
call TYPEHASDTOR
add esp, 8
test eax, eax
je .Lt_00B1
push dword ptr [ebp-16]
call SYMBGETCOMPDTOR
add esp, 4
push eax
call SYMBCHECKACCESS
add esp, 4
test eax, eax
jne .Lt_00B3
push 0
push 0
push 205
call ERRREPORT
add esp, 12
.Lt_00B3:
.Lt_00B2:
.Lt_00B1:
.Lt_00B0:
push dword ptr [ebp-4]
push dword ptr [ebp-12]
call ASTBUILDDELETEOP
add esp, 8
push eax
call ASTADD
add esp, 4
.Lt_00A1:
pop ebx
mov esp, ebp
pop ebp
ret
.size COPERATORDELETE, .-COPERATORDELETE
.balign 16
fb_ctor__parserzquirkzmem:
.type fb_ctor__parserzquirkzmem, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__parserzquirkzmem, .-fb_ctor__parserzquirkzmem
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
	#fbc-1.01.0/src/compiler/parser-quirk-mem.bas' compilation took 0.02754395839292556 secs

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
.int fb_ctor__parserzquirkzmem
