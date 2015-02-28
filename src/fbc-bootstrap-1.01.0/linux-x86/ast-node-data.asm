	.intel_syntax noprefix

	#FreeBASIC-1.01.0-source/src/compiler/ast-node-data.bas' compilation started at 16:30:03 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl ASTDATASTMTINIT
ASTDATASTMTINIT:
.type ASTDATASTMTINIT, @function
.Lt_0056:
mov dword ptr [AST+120], 0
mov dword ptr [AST+124], 0
mov dword ptr [AST+128], 0
call HCREATEDATADESC
.Lt_0057:
ret
.size ASTDATASTMTINIT, .-ASTDATASTMTINIT
.balign 16

.globl ASTDATASTMTBEGIN
ASTDATASTMTBEGIN:
.type ASTDATASTMTBEGIN, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_0058:
push 0
push -2147483648
push 29
call ASTNEWNODE
add esp, 12
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov dword ptr [eax+20], 0
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0059:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size ASTDATASTMTBEGIN, .-ASTDATASTMTBEGIN
.balign 16

.globl ASTDATASTMTSTORE
ASTDATASTMTSTORE:
.type ASTDATASTMTSTORE, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
mov dword ptr [ebp-4], 0
.Lt_005A:
push 0
push -2147483648
push 29
call ASTNEWNODE
add esp, 12
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+12]
mov dword ptr [eax+56], ebx
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+60], 0
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx+56], 0
jne .Lt_005D
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp-8]
mov dword ptr [ebx+56], eax
jmp .Lt_005C
.Lt_005D:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+60]
mov eax, dword ptr [ebp-8]
mov dword ptr [ebx+60], eax
.Lt_005C:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-8]
mov dword ptr [eax+60], ebx
cmp dword ptr [ebp+12], 0
jne .Lt_005F
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+20], 65535
jmp .Lt_005E
.Lt_005F:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 511
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 3
je .Lt_0063
.Lt_0064:
cmp dword ptr [ebp-16], 6
jne .Lt_0062
.Lt_0063:
push dword ptr [ebp+12]
call ASTGETSTRLITSYMBOL
add esp, 4
mov dword ptr [ebp-12], eax
jmp .Lt_0060
.Lt_0062:
mov dword ptr [ebp-12], 0
.Lt_0065:
.Lt_0060:
cmp dword ptr [ebp-12], 0
je .Lt_0067
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 511
cmp ebx, 6
je .Lt_0069
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+20], 1
jmp .Lt_0068
.Lt_0069:
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+20], 32768
.Lt_0068:
jmp .Lt_0066
.Lt_0067:
mov ebx, dword ptr [ebp+12]
cmp dword ptr [ebx], 23
jne .Lt_006B
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+20], 65534
jmp .Lt_006A
.Lt_006B:
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+20], 2
.Lt_006A:
.Lt_0066:
.Lt_005E:
mov ebx, dword ptr [ebp+8]
inc dword ptr [ebx+20]
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ebx
.Lt_005B:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTDATASTMTSTORE, .-ASTDATASTMTSTORE
.balign 16

.globl ASTDATASTMTEND
ASTDATASTMTEND:
.type ASTDATASTMTEND, @function
push ebp
mov ebp, esp
sub esp, 52
push ebx
.Lt_006C:
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
push 0
push dword ptr [ebp+8]
call ASTDATASTMTSTORE
add esp, 8
mov eax, dword ptr [ebp+8]
push dword ptr [eax+20]
push 0
call ASTDATASTMTADD
add esp, 8
mov dword ptr [ebp-4], eax
push 0
push 0
push -1
push dword ptr [AST+116]
push 18
call ASTTYPEINIBEGIN
add esp, 20
mov dword ptr [ebp-28], eax
push 0
push dword ptr [ebp-28]
call ASTTYPEINISCOPEBEGIN
add esp, 8
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-20], ebx
mov dword ptr [ebp-12], 0
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+20]
dec eax
mov dword ptr [ebp-44], eax
jmp .Lt_006F
.Lt_0072:
mov eax, dword ptr [ebp-20]
mov ebx, dword ptr [eax+20]
mov dword ptr [ebp-16], ebx
mov ebx, dword ptr [ebp-20]
mov eax, dword ptr [ebx+56]
mov dword ptr [ebp-24], eax
push 0
push dword ptr [ebp-28]
call ASTTYPEINISCOPEBEGIN
add esp, 8
mov eax, dword ptr [ebp-20]
mov ebx, dword ptr [eax+20]
mov dword ptr [ebp-52], ebx
cmp dword ptr [ebp-52], 1
jne .Lt_0075
.Lt_0076:
push dword ptr [ebp-24]
call ASTGETSTRLITSYMBOL
add esp, 4
mov ecx, dword ptr [eax+36]
mov ebx, dword ptr [eax+40]
add ecx, 4294967295
adc ebx, 4294967295
mov eax, ecx
mov dword ptr [ebp-16], eax
push dword ptr [ebp-24]
call ASTNEWADDROF
add esp, 4
mov dword ptr [ebp-24], eax
jmp .Lt_0073
.Lt_0075:
cmp dword ptr [ebp-52], 32768
jne .Lt_0077
.Lt_0078:
mov ecx, dword ptr [SYMB_DTYPETB+172]
mov eax, ecx
sar eax, 31
push eax
push ecx
push dword ptr [ebp-24]
call ASTGETSTRLITSYMBOL
add esp, 4
push dword ptr [eax+40]
push dword ptr [eax+36]
call __divdi3
add esp, 16
add eax, 32767
adc edx, 0
mov ecx, eax
mov dword ptr [ebp-16], ecx
push dword ptr [ebp-24]
call ASTNEWADDROF
add esp, 4
mov dword ptr [ebp-24], eax
jmp .Lt_0073
.Lt_0077:
cmp dword ptr [ebp-52], 2
jne .Lt_0079
.Lt_007A:
push 0
push -1
push dword ptr [ebp-24]
call ASTCONSTFLUSHTOSTR
add esp, 4
push eax
push -1
lea eax, [ebp-40]
push eax
call fb_StrAssign
add esp, 20
push -1
lea eax, [ebp-40]
push eax
call fb_StrLen
add esp, 8
mov dword ptr [ebp-16], eax
push dword ptr [ebp-40]
call ASTNEWCONSTSTR
add esp, 4
push eax
call ASTNEWADDROF
add esp, 4
mov dword ptr [ebp-24], eax
jmp .Lt_0073
.Lt_0079:
cmp dword ptr [ebp-52], 0
je .Lt_007C
.Lt_007D:
cmp dword ptr [ebp-52], 65535
jne .Lt_007B
.Lt_007C:
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-24], eax
.Lt_007B:
.Lt_0073:
mov eax, dword ptr [AST+116]
mov ecx, dword ptr [eax+56]
mov dword ptr [ebp-8], ecx
push 0
push -2147483648
push dword ptr [ebp-8]
push 0
push 4
mov eax, dword ptr [ebp-16]
mov ecx, eax
sar ecx, 31
push ecx
push eax
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp-28]
call ASTTYPEINIADDASSIGN
add esp, 20
mov eax, dword ptr [ebp-8]
mov ecx, dword ptr [eax+160]
mov dword ptr [ebp-8], ecx
push 0
push -2147483648
push dword ptr [ebp-8]
push dword ptr [ebp-24]
push dword ptr [ebp-28]
call ASTTYPEINIADDASSIGN
add esp, 20
push 0
push dword ptr [ebp-28]
call ASTTYPEINISCOPEEND
add esp, 8
mov ecx, dword ptr [ebp-20]
mov eax, dword ptr [ecx+60]
mov dword ptr [ebp-48], eax
push dword ptr [ebp-20]
call ASTDELNODE
add esp, 4
mov eax, dword ptr [ebp-48]
mov dword ptr [ebp-20], eax
.Lt_0070:
inc dword ptr [ebp-12]
.Lt_006F:
mov eax, dword ptr [ebp-44]
cmp dword ptr [ebp-12], eax
jle .Lt_0072
.Lt_0071:
push 0
push dword ptr [ebp-28]
call ASTTYPEINISCOPEEND
add esp, 8
push -1
push dword ptr [ebp-28]
call ASTTYPEINIEND
add esp, 8
mov eax, dword ptr [ebp-4]
mov ecx, dword ptr [ebp-28]
mov dword ptr [eax+52], ecx
cmp dword ptr [AST+120], 0
je .Lt_007F
mov ecx, dword ptr [AST+120]
mov eax, dword ptr [ecx+52]
mov dword ptr [ebp-28], eax
mov eax, dword ptr [ebp-28]
mov ecx, dword ptr [eax+56]
mov dword ptr [ebp-20], ecx
mov ecx, dword ptr [ebp-20]
mov dword ptr [ebp-44], ecx
.Lt_0080:
mov ecx, dword ptr [ebp-20]
cmp dword ptr [ecx+60], 0
je .Lt_0081
mov ecx, dword ptr [ebp-20]
cmp dword ptr [ecx], 38
jne .Lt_0083
mov ecx, dword ptr [ebp-20]
mov dword ptr [ebp-44], ecx
.Lt_0083:
.Lt_0082:
mov ecx, dword ptr [ebp-20]
mov eax, dword ptr [ecx+60]
mov dword ptr [ebp-20], eax
jmp .Lt_0080
.Lt_0081:
mov eax, dword ptr [ebp-44]
push dword ptr [eax+56]
call ASTDELNODE
add esp, 4
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp-4]
call ASTNEWVAR
add esp, 20
push eax
call ASTNEWADDROF
add esp, 4
mov ecx, dword ptr [ebp-44]
mov dword ptr [ecx+56], eax
.Lt_007F:
.Lt_007E:
mov eax, dword ptr [ebp-4]
mov ecx, dword ptr [AST+120]
mov dword ptr [eax+100], ecx
mov ecx, dword ptr [ebp-4]
mov dword ptr [AST+120], ecx
cmp dword ptr [AST+124], 0
jne .Lt_0085
mov ecx, dword ptr [ebp-4]
mov dword ptr [AST+124], ecx
.Lt_0085:
.Lt_0084:
lea ecx, [ebp-40]
push ecx
call fb_StrDelete
add esp, 4
.Lt_006D:
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTDATASTMTEND, .-ASTDATASTMTEND
.balign 16

.globl ASTDATASTMTADD
ASTDATASTMTADD:
.type ASTDATASTMTADD, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
mov dword ptr [ebp-4], 0
.Lt_0086:
cmp dword ptr [ebp+8], 0
jne .Lt_008A
mov eax, dword ptr [SYMB+99012]
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [AST+128]
cmp ebx, dword ptr [ebp-12]
sete cl
shr ecx, 1
sbb ecx, ecx
or eax, ecx
je .Lt_008C
push 0
push 0
call SYMBUNIQUELABEL
push eax
push -1
push offset Lt_0095
call fb_StrAssign
add esp, 20
jmp .Lt_008B
.Lt_008C:
mov eax, dword ptr [ebp-12]
mov dword ptr [AST+128], eax
push 0
push -1
push 0
mov eax, dword ptr [ebp-12]
push dword ptr [eax+12]
push 11
push offset Lt_001C
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ebp-24]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_0095
call fb_StrAssign
add esp, 20
.Lt_008B:
mov eax, dword ptr [ebp+12]
dec eax
mov ebx, eax
mov ecx, ebx
sar ecx, 31
mov dword ptr [Lt_0096+8], ebx
mov dword ptr [Lt_0096+12], ecx
jmp .Lt_0089
.Lt_008A:
push 0
push -1
push 0
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+12]
push 11
push offset Lt_001C
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea ebx, [ebp-24]
push ebx
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_0095
call fb_StrAssign
add esp, 20
mov dword ptr [Lt_0096+8], 0
mov dword ptr [Lt_0096+12], 0
.Lt_0089:
push 0
push -1
push 1
push dword ptr [Lt_0095]
lea eax, [SYMB+98352]
push eax
call SYMBLOOKUPBYNAMEANDCLASS
add esp, 20
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
je .Lt_0090
cmp dword ptr [ebp+8], 0
jne .Lt_0092
push offset Lt_0097
push 1
push dword ptr [ebp-8]
call SYMBSETARRAYDIMTB
add esp, 12
push dword ptr [ebp-8]
call SYMBMAYBEADDARRAYDESC
add esp, 4
.Lt_0092:
.Lt_0091:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
jmp .Lt_0087
.Lt_0090:
.Lt_008F:
push 9
push 3
push offset Lt_0097
push 1
push 0
push 0
push dword ptr [AST+116]
push 18
call SYMBUNIQUELABEL
push eax
push dword ptr [Lt_0095]
call SYMBADDVAR
add esp, 40
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov dword ptr [eax+100], 0
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0087:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTDATASTMTADD, .-ASTDATASTMTADD

.section .bss
.balign 4
	.lcomm	Lt_0095,12
.balign 4
	.lcomm	Lt_0096,16

.section .data
.balign 4
Lt_0097:
.int Lt_0096
.int Lt_0096
.int 16
.int 16
.int 1
.int 1
.int 0
.int 0

.section .text
.balign 16
fb_ctor__astznodezdata:
.type fb_ctor__astznodezdata, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__astznodezdata, .-fb_ctor__astznodezdata
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
HCREATEDATADESC:
.type HCREATEDATADESC, @function
.Lt_0098:
push 0
push 0
push 0
push 1
push 0
push 0
push offset Lt_009B
push 0
push 0
push 0
call SYMBSTRUCTBEGIN
add esp, 40
mov dword ptr [AST+116], eax
push 0
push 0
push 0
push 0
push 0
push 4
push offset Lt_009E
push 0
push offset Lt_009C
push dword ptr [AST+116]
call SYMBADDFIELD
add esp, 40
push 0
push 0
push 0
push 0
push 0
push 32
push offset Lt_009E
push 0
push offset Lt_009D
push dword ptr [AST+116]
call SYMBADDFIELD
add esp, 40
push 0
push dword ptr [AST+116]
call SYMBSTRUCTEND
add esp, 8
.Lt_0099:
ret
.size HCREATEDATADESC, .-HCREATEDATADESC

.section .bss
.balign 4
	.lcomm	Lt_009F,16

.section .data
.balign 4
Lt_009E:
.int Lt_009F
.int Lt_009F
.int 16
.int 16
.int 1
.int 1
.int 0
.int 0
	#FreeBASIC-1.01.0-source/src/compiler/ast-node-data.bas' compilation took 0.026442940114066 secs

.section .rodata
.balign 4
Lt_001C:	.ascii	"_{fbdata}_\0"

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
Lt_009B:	.ascii	"__FB_DATADESC$\0"
.balign 4
Lt_009C:	.ascii	"type\0"
.balign 4
Lt_009D:	.ascii	"node\0"

.section .ctors, "aw", @progbits
.int fb_ctor__astznodezdata
