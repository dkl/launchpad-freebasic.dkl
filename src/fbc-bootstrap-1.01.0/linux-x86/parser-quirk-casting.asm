	.intel_syntax noprefix

	#FreeBASIC-1.01.0-source/src/compiler/parser-quirk-casting.bas' compilation started at 16:30:06 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl CTYPECONVEXPR
CTYPECONVEXPR:
.type CTYPECONVEXPR, @function
push ebp
mov ebp, esp
sub esp, 28
push ebx
mov dword ptr [ebp-4], 0
.Lt_005F:
mov dword ptr [ebp-8], -2147483648
mov dword ptr [ebp-12], -1
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-24], eax
jmp .Lt_0062
.Lt_0064:
mov dword ptr [ebp-8], 1
jmp .Lt_0061
.Lt_0065:
mov dword ptr [ebp-8], 2
jmp .Lt_0061
.Lt_0066:
mov dword ptr [ebp-8], 4
jmp .Lt_0061
.Lt_0067:
mov dword ptr [ebp-8], 5
jmp .Lt_0061
.Lt_0068:
mov eax, dword ptr [ENV+844]
mov dword ptr [ebp-8], eax
jmp .Lt_0061
.Lt_0069:
mov dword ptr [ebp-8], 8
jmp .Lt_0061
.Lt_006A:
mov dword ptr [ebp-8], 10
jmp .Lt_0061
.Lt_006B:
mov dword ptr [ebp-8], 11
jmp .Lt_0061
.Lt_006C:
mov dword ptr [ebp-8], 12
jmp .Lt_0061
.Lt_006D:
mov dword ptr [ebp-8], 13
jmp .Lt_0061
.Lt_006E:
mov dword ptr [ebp-8], 14
jmp .Lt_0061
.Lt_006F:
mov dword ptr [ebp-8], 15
jmp .Lt_0061
.Lt_0070:
mov dword ptr [ebp-12], 114
jmp .Lt_0061
.Lt_0071:
mov dword ptr [ebp-12], 115
jmp .Lt_0061
.Lt_0062:
mov eax, dword ptr [ebp-24]
add eax, 4294966898
cmp eax, 13
ja .Lt_0061
mov eax, dword ptr [ebp-24]
jmp dword ptr [.LT_0072+eax*4-1592]
.LT_0072:
.int .Lt_0064
.int .Lt_0065
.int .Lt_0066
.int .Lt_0067
.int .Lt_0068
.int .Lt_0069
.int .Lt_006A
.int .Lt_006B
.int .Lt_006C
.int .Lt_006D
.int .Lt_006E
.int .Lt_006F
.int .Lt_0070
.int .Lt_0071
.Lt_0061:
cmp dword ptr [ebp-8], -2147483648
jne .Lt_0074
cmp dword ptr [ebp-12], -1
jne .Lt_0076
mov dword ptr [ebp-4], 0
jmp .Lt_0060
.Lt_0076:
.Lt_0075:
.Lt_0074:
.Lt_0073:
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [ebp+8]
cmp eax, 402
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp+8]
cmp ebx, 403
sete bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
je .Lt_0078
push 301
call HMATCH
add esp, 4
test eax, eax
je .Lt_007A
push 0
push 0
call CGTINPARENSONLYEXPR
push eax
call CCONSTINTEXPR
add esp, 12
mov dword ptr [ebp-28], eax
mov dword ptr [ebp-24], edx
mov eax, dword ptr [ebp+8]
cmp eax, 403
sete al
shr eax, 1
sbb eax, eax
push eax
push dword ptr [ebp-24]
push dword ptr [ebp-28]
call HINTEGERTYPEFROMBITSIZE
add esp, 12
mov dword ptr [ebp-8], eax
push 300
call HMATCH
add esp, 4
test eax, eax
jne .Lt_007C
push 0
push 0
push 308
call ERRREPORT
add esp, 12
.Lt_007C:
.Lt_007B:
.Lt_007A:
.Lt_0079:
.Lt_0078:
.Lt_0077:
push 40
call HMATCH
add esp, 4
test eax, eax
jne .Lt_007E
push 0
push 0
push 6
call ERRREPORT
add esp, 12
.Lt_007E:
.Lt_007D:
call CEXPRESSION
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 0
jne .Lt_0080
push 0
push 0
push 9
call ERRREPORT
add esp, 12
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-20], eax
.Lt_0080:
.Lt_007F:
cmp dword ptr [ebp-12], 114
jne .Lt_0082
.Lt_0083:
mov eax, dword ptr [ebp-20]
push dword ptr [eax+4]
call TYPETOSIGNED
add esp, 4
mov dword ptr [ebp-8], eax
jmp .Lt_0081
.Lt_0082:
cmp dword ptr [ebp-12], 115
jne .Lt_0084
.Lt_0085:
mov eax, dword ptr [ebp-20]
push dword ptr [eax+4]
call TYPETOUNSIGNED
add esp, 4
mov dword ptr [ebp-8], eax
.Lt_0084:
.Lt_0081:
lea eax, [ebp-16]
push eax
push 2
push dword ptr [ebp-20]
push 0
push dword ptr [ebp-8]
call ASTNEWCONV
add esp, 20
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 0
jne .Lt_0087
cmp dword ptr [ebp-16], 0
jne .Lt_0089
mov dword ptr [ebp-16], 20
.Lt_0089:
.Lt_0088:
push 0
push -1
push dword ptr [ebp-16]
call ERRREPORT
add esp, 12
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-20], eax
.Lt_0087:
.Lt_0086:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_008B
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
jmp .Lt_008A
.Lt_008B:
cmp dword ptr [ebp+12], 0
jne .Lt_008D
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_008D:
.Lt_008C:
.Lt_008A:
mov eax, dword ptr [ebp-20]
mov dword ptr [ebp-4], eax
.Lt_0060:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CTYPECONVEXPR, .-CTYPECONVEXPR
.balign 16

.globl CANONTYPE
CANONTYPE:
.type CANONTYPE, @function
push ebp
mov ebp, esp
sub esp, 32
mov dword ptr [ebp-4], 0
.Lt_0091:
push 0
call LEXSKIPTOKEN
add esp, 4
push 301
call HMATCH
add esp, 4
mov dword ptr [ebp-24], eax
cmp dword ptr [ebp-24], 0
je .Lt_0094
push 1
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
lea eax, [ebp-32]
push eax
lea eax, [ebp-16]
push eax
lea eax, [ebp-20]
push eax
call CSYMBOLTYPE
add esp, 16
test eax, eax
jne .Lt_0097
push 0
push 0
push 14
call ERRREPORT
add esp, 12
mov dword ptr [ebp-20], 7
mov dword ptr [ebp-16], 0
.Lt_0097:
.Lt_0096:
jmp .Lt_0093
.Lt_0094:
mov eax, dword ptr [PARSER+152]
mov dword ptr [ebp-16], eax
mov eax, dword ptr [PARSER+148]
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], -2147483648
jne .Lt_0099
push 0
push 0
push 70
call ERRREPORT
add esp, 12
mov dword ptr [ebp-20], 7
mov dword ptr [ebp-16], 0
.Lt_0099:
.Lt_0098:
mov eax, dword ptr [ebp-20]
and eax, 511
mov dword ptr [ebp-28], eax
cmp dword ptr [ebp-28], 0
je .Lt_009D
.Lt_009E:
cmp dword ptr [ebp-28], 21
jne .Lt_009C
.Lt_009D:
push 0
push 0
push 70
call ERRREPORT
add esp, 12
mov dword ptr [ebp-20], 7
mov dword ptr [ebp-16], 0
.Lt_009C:
.Lt_009A:
.Lt_0093:
push dword ptr [ebp-16]
push dword ptr [ebp-20]
call HCOMPLAINIFABSTRACTCLASS
add esp, 8
cmp dword ptr [ebp-24], 0
je .Lt_00A0
push 300
call HMATCH
add esp, 4
test eax, eax
jne .Lt_00A2
push 0
push 0
push 17
call ERRREPORT
add esp, 12
push 0
push 0
push -1
push 300
call HSKIPUNTIL
add esp, 16
.Lt_00A2:
.Lt_00A1:
.Lt_00A0:
.Lt_009F:
mov eax, dword ptr [ebp-20]
and eax, 511
cmp eax, 18
jne .Lt_00A4
push dword ptr [ebp-16]
call SYMBGETCOMPCTORHEAD
add esp, 4
test eax, eax
je .Lt_00A6
push dword ptr [ebp-16]
call CCTORCALL
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_00A8
push dword ptr [ebp-16]
push dword ptr [ebp-20]
call ASTNEWCONSTZ
add esp, 8
mov dword ptr [ebp-8], eax
.Lt_00A8:
.Lt_00A7:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
jmp .Lt_0092
.Lt_00A6:
.Lt_00A5:
.Lt_00A4:
.Lt_00A3:
push dword ptr [ebp-16]
push dword ptr [ebp-20]
call SYMBADDTEMPVAR
add esp, 8
mov dword ptr [ebp-12], eax
push 0
push -2147483648
push 0
push dword ptr [ebp-12]
call CINITIALIZER
add esp, 16
mov dword ptr [ebp-8], eax
push 0
push dword ptr [ebp-12]
push dword ptr [ebp-8]
call ASTREPLACESYMBOLONTREE
add esp, 12
push 0
push dword ptr [ebp-12]
call SYMBDELSYMBOL
add esp, 8
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0092:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size CANONTYPE, .-CANONTYPE
.balign 16
fb_ctor__parserzquirkzcasting:
.type fb_ctor__parserzquirkzcasting, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__parserzquirkzcasting, .-fb_ctor__parserzquirkzcasting
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
	#FreeBASIC-1.01.0-source/src/compiler/parser-quirk-casting.bas' compilation took 0.02927203522995114 secs

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
.int fb_ctor__parserzquirkzcasting
