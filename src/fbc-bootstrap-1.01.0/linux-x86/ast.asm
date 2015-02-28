	.intel_syntax noprefix

	#FreeBASIC-1.01.0-source/src/compiler/ast.bas' compilation started at 16:30:02 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl ASTINIT
ASTINIT:
.type ASTINIT, @function
.Lt_00C0:
push 6
push 72
push 8192
lea eax, [AST]
push eax
call LISTINIT
add esp, 16
mov dword ptr [AST+136], -1
mov dword ptr [AST+140], 0
mov dword ptr [AST+144], 0
mov dword ptr [AST+132], 0
mov dword ptr [AST+232], 0
call ASTCALLINIT
call ASTPROCLISTINIT
call ASTDATASTMTINIT
call ASTMISCINIT
push 6
push 12
push 16
lea eax, [AST+200]
push eax
call LISTINIT
add esp, 16
.Lt_00C1:
ret
.size ASTINIT, .-ASTINIT
.balign 16

.globl ASTEND
ASTEND:
.type ASTEND, @function
.Lt_00C2:
lea eax, [AST+200]
push eax
call LISTEND
add esp, 4
call ASTMISCEND
call ASTPROCLISTEND
call ASTCALLEND
lea eax, [AST]
push eax
call LISTEND
add esp, 4
.Lt_00C3:
ret
.size ASTEND, .-ASTEND
.balign 16

.globl ASTCLONETREE
ASTCLONETREE:
.type ASTCLONETREE, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
mov dword ptr [ebp-4], 0
.Lt_00C4:
cmp dword ptr [ebp+8], 0
jne .Lt_00C7
mov dword ptr [ebp-4], 0
jmp .Lt_00C5
.Lt_00C7:
.Lt_00C6:
push 0
push -2147483648
push -1
call ASTNEWNODE
add esp, 12
mov dword ptr [ebp-8], eax
push edi
push esi
mov edi, dword ptr [ebp-8]
mov esi, dword ptr [ebp+8]
mov ecx, 18
rep movsd
pop esi
pop edi
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-12], ebx
cmp dword ptr [ebp-12], 0
je .Lt_00C9
push dword ptr [ebp-12]
call ASTCLONETREE
add esp, 4
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+56], eax
.Lt_00C9:
.Lt_00C8:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+60]
mov dword ptr [ebp-12], ebx
cmp dword ptr [ebp-12], 0
je .Lt_00CB
push dword ptr [ebp-12]
call ASTCLONETREE
add esp, 4
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+60], eax
.Lt_00CB:
.Lt_00CA:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-16], ebx
cmp dword ptr [ebp-16], 17
jne .Lt_00CE
.Lt_00CF:
mov ebx, dword ptr [ebp-8]
cmp dword ptr [ebx+12], 0
je .Lt_00D1
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx+12]
mov ebx, dword ptr [eax]
cmp ebx, 1
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp-8]
mov ecx, dword ptr [eax+12]
mov eax, dword ptr [ecx+4]
and eax, 4194304
test eax, eax
setne al
shr eax, 1
sbb eax, eax
and ebx, eax
je .Lt_00D3
mov eax, dword ptr [ebp-8]
push dword ptr [eax+12]
call ASTDTORLISTADDREF
add esp, 4
.Lt_00D3:
.Lt_00D2:
.Lt_00D1:
.Lt_00D0:
jmp .Lt_00CC
.Lt_00CE:
cmp dword ptr [ebp-16], 9
jne .Lt_00D4
.Lt_00D5:
push dword ptr [ebp-8]
push dword ptr [ebp+8]
call ASTCLONECALL
add esp, 8
jmp .Lt_00CC
.Lt_00D4:
cmp dword ptr [ebp-16], 26
jne .Lt_00D6
.Lt_00D7:
push 4
push 0
call SYMBADDLABEL
add esp, 8
push eax
mov eax, dword ptr [ebp-8]
push dword ptr [eax+20]
push dword ptr [ebp-8]
call ASTREPLACESYMBOLONTREE
add esp, 12
jmp .Lt_00CC
.Lt_00D6:
cmp dword ptr [ebp-16], 13
jne .Lt_00D8
.Lt_00D9:
push 4
push 0
call SYMBADDLABEL
add esp, 8
push eax
mov eax, dword ptr [ebp-8]
push dword ptr [eax+28]
push dword ptr [ebp-8]
call ASTREPLACESYMBOLONTREE
add esp, 12
jmp .Lt_00CC
.Lt_00D8:
cmp dword ptr [ebp-16], 36
jne .Lt_00DA
.Lt_00DB:
inc dword ptr [AST+140]
mov eax, dword ptr [ebp-8]
mov dword ptr [eax+36], 0
jmp .Lt_00CC
.Lt_00DA:
cmp dword ptr [ebp-16], 19
jne .Lt_00DC
.Lt_00DD:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+12]
cmp dword ptr [ebx+108], 0
jle .Lt_00DF
inc dword ptr [AST+144]
.Lt_00DF:
.Lt_00DE:
.Lt_00DC:
.Lt_00CC:
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ebx
.Lt_00C5:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTCLONETREE, .-ASTCLONETREE
.balign 16

.globl ASTGETEFFECTIVENODE
ASTGETEFFECTIVENODE:
.type ASTGETEFFECTIVENODE, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_00E2:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 15
jne .Lt_00E5
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+20], 0
je .Lt_00E7
mov eax, dword ptr [ebp+8]
push dword ptr [eax+56]
call ASTGETEFFECTIVENODE
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_00E6
.Lt_00E7:
mov eax, dword ptr [ebp+8]
push dword ptr [eax+60]
call ASTGETEFFECTIVENODE
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_00E6:
jmp .Lt_00E4
.Lt_00E5:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
.Lt_00E4:
.Lt_00E3:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size ASTGETEFFECTIVENODE, .-ASTGETEFFECTIVENODE
.balign 16

.globl ASTGETEFFECTIVECLASS
ASTGETEFFECTIVECLASS:
.type ASTGETEFFECTIVECLASS, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_00E8:
push dword ptr [ebp+8]
call ASTGETEFFECTIVENODE
add esp, 4
mov ebx, dword ptr [eax]
mov dword ptr [ebp-4], ebx
.Lt_00E9:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTGETEFFECTIVECLASS, .-ASTGETEFFECTIVECLASS
.balign 16

.globl ASTREBUILDWITHOUTEFFECTIVEPART
ASTREBUILDWITHOUTEFFECTIVEPART:
.type ASTREBUILDWITHOUTEFFECTIVEPART, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_00EA:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 15
jne .Lt_00ED
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-8], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+60]
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+20], 0
je .Lt_00EF
push dword ptr [ebp-8]
call ASTREBUILDWITHOUTEFFECTIVEPART
add esp, 4
mov dword ptr [ebp-8], eax
jmp .Lt_00EE
.Lt_00EF:
push dword ptr [ebp-12]
call ASTREBUILDWITHOUTEFFECTIVEPART
add esp, 4
mov dword ptr [ebp-12], eax
.Lt_00EE:
mov eax, dword ptr [ebp+8]
push dword ptr [eax+20]
push dword ptr [ebp-12]
push dword ptr [ebp-8]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-4], eax
push dword ptr [ebp+8]
call ASTDELNODE
add esp, 4
jmp .Lt_00EC
.Lt_00ED:
push dword ptr [ebp+8]
call ASTDELTREE
add esp, 4
mov dword ptr [ebp-4], 0
.Lt_00EC:
.Lt_00EB:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTREBUILDWITHOUTEFFECTIVEPART, .-ASTREBUILDWITHOUTEFFECTIVEPART
.balign 16

.globl ASTCANTAKEADDROF
ASTCANTAKEADDROF:
.type ASTCANTAKEADDROF, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_00F0:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-8], ebx
jmp .Lt_00F3
.Lt_00F5:
mov dword ptr [ebp-4], -1
jmp .Lt_00F2
.Lt_00F6:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+12]
mov ebx, dword ptr [eax+108]
test ebx, ebx
setg bl
shr ebx, 1
sbb ebx, ebx
not ebx
mov dword ptr [ebp-4], ebx
jmp .Lt_00F2
.Lt_00F7:
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx+20], 0
je .Lt_00F9
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+56]
call ASTCANTAKEADDROF
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_00F8
.Lt_00F9:
mov eax, dword ptr [ebp+8]
push dword ptr [eax+60]
call ASTCANTAKEADDROF
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_00F8:
jmp .Lt_00F2
.Lt_00FA:
mov dword ptr [ebp-4], 0
jmp .Lt_00F2
.Lt_00F3:
mov eax, dword ptr [ebp-8]
add eax, 4294967286
cmp eax, 26
ja .Lt_00FA
mov eax, dword ptr [ebp-8]
jmp dword ptr [.LT_00FB+eax*4-40]
.LT_00FB:
.int .Lt_00F5
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00F7
.int .Lt_00FA
.int .Lt_00F5
.int .Lt_00F5
.int .Lt_00F6
.int .Lt_00F5
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00F5
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00FA
.int .Lt_00F5
.Lt_00F2:
.Lt_00F1:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTCANTAKEADDROF, .-ASTCANTAKEADDROF
.balign 16

.globl ASTMAKEREF
ASTMAKEREF:
.type ASTMAKEREF, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
mov dword ptr [ebp-4], 0
.Lt_00FD:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
cmp dword ptr [ebx], 19
jne .Lt_00FF
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx]
mov ebx, dword ptr [eax+12]
mov eax, dword ptr [ebx+108]
test eax, eax
setg al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-16], eax
jmp .Lt_010A
.Lt_00FF:
mov dword ptr [ebp-16], 0
.Lt_010A:
cmp dword ptr [ebp-16], 0
je .Lt_0102
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov eax, dword ptr [ebx+56]
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov eax, dword ptr [ebx+12]
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp+8]
push dword ptr [eax]
call ASTDELNODE
add esp, 4
lea eax, [ebp-12]
push eax
call ASTMAKEREF
add esp, 4
mov dword ptr [ebp-4], eax
push dword ptr [ebp-8]
push dword ptr [ebp-12]
call ASTNEWFIELD
add esp, 8
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx], eax
jmp .Lt_00FE
.Lt_0102:
.Lt_0101:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
cmp dword ptr [ebx], 9
jne .Lt_0104
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx]
mov ebx, dword ptr [eax+4]
and ebx, 511
mov dword ptr [ebp-20], ebx
cmp dword ptr [ebp-20], 16
je .Lt_0108
.Lt_0109:
cmp dword ptr [ebp-20], 6
jne .Lt_0107
.Lt_0108:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov eax, dword ptr [ebx+4]
and eax, 31
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebx]
mov ebx, dword ptr [ecx+4]
and ebx, 480
add ebx, 32
or eax, ebx
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebx]
mov ebx, dword ptr [ecx+4]
and ebx, 261632
sal ebx, 1
or eax, ebx
push eax
mov eax, dword ptr [ebp+8]
push dword ptr [eax]
call ASTSETTYPE
add esp, 12
push dword ptr [ebp+8]
call ASTREMSIDEFX
add esp, 4
mov dword ptr [ebp-4], eax
push 0
push 0
push 0
push -2147483648
mov eax, dword ptr [ebp+8]
push dword ptr [eax]
call ASTNEWDEREF
add esp, 20
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx], eax
jmp .Lt_00FE
.Lt_0107:
.Lt_0105:
.Lt_0104:
.Lt_0103:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
push dword ptr [ebx+8]
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx]
mov ebx, dword ptr [eax+4]
and ebx, 31
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax]
mov eax, dword ptr [ecx+4]
and eax, 480
add eax, 32
or ebx, eax
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax]
mov eax, dword ptr [ecx+4]
and eax, 261632
sal eax, 1
or ebx, eax
push ebx
call SYMBADDTEMPVAR
add esp, 8
mov dword ptr [ebp-8], eax
push 64
mov eax, dword ptr [ebp+8]
push dword ptr [eax]
call ASTNEWADDROF
add esp, 4
push eax
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp-8]
call ASTNEWVAR
add esp, 20
push eax
call ASTNEWASSIGN
add esp, 12
mov dword ptr [ebp-4], eax
push 0
push 0
push 0
push -2147483648
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp-8]
call ASTNEWVAR
add esp, 20
push eax
call ASTNEWDEREF
add esp, 20
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx], eax
.Lt_00FE:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTMAKEREF, .-ASTMAKEREF
.balign 16

.globl ASTREMSIDEFX
ASTREMSIDEFX:
.type ASTREMSIDEFX, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_010C:
mov eax, dword ptr [ebp+8]
push dword ptr [eax]
call ASTUPDSTRCONCAT
add esp, 4
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov eax, dword ptr [ebx+4]
and eax, 511
mov ebx, eax
mov dword ptr [ebp-12], ebx
jmp .Lt_010F
.Lt_0111:
push dword ptr [ebp+8]
call ASTMAKEREF
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_010E
.Lt_0112:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
push dword ptr [ebx+8]
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx]
push dword ptr [eax+4]
call SYMBADDTEMPVAR
add esp, 8
mov dword ptr [ebp-8], eax
push 64
mov eax, dword ptr [ebp+8]
push dword ptr [eax]
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp-8]
call ASTNEWVAR
add esp, 20
push eax
call ASTNEWASSIGN
add esp, 12
mov dword ptr [ebp-4], eax
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp-8]
call ASTNEWVAR
add esp, 20
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx], eax
jmp .Lt_010E
.Lt_010F:
mov eax, dword ptr [ebp-12]
add eax, 4294967293
cmp eax, 15
ja .Lt_0112
mov eax, dword ptr [ebp-12]
jmp dword ptr [.LT_0113+eax*4-12]
.LT_0113:
.int .Lt_0111
.int .Lt_0112
.int .Lt_0112
.int .Lt_0111
.int .Lt_0112
.int .Lt_0112
.int .Lt_0112
.int .Lt_0112
.int .Lt_0112
.int .Lt_0112
.int .Lt_0112
.int .Lt_0112
.int .Lt_0112
.int .Lt_0111
.int .Lt_0111
.int .Lt_0111
.Lt_010E:
.Lt_010D:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTREMSIDEFX, .-ASTREMSIDEFX
.balign 16

.globl ASTDELTREE
ASTDELTREE:
.type ASTDELTREE, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0114:
cmp dword ptr [ebp+8], 0
jne .Lt_0117
jmp .Lt_0115
.Lt_0117:
.Lt_0116:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 9
jne .Lt_0119
push dword ptr [ebp+8]
call ASTDELCALL
add esp, 4
.Lt_0119:
.Lt_0118:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-4], ebx
cmp dword ptr [ebp-4], 0
je .Lt_011B
push dword ptr [ebp-4]
call ASTDELTREE
add esp, 4
.Lt_011B:
.Lt_011A:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+60]
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
je .Lt_011D
push dword ptr [ebp-4]
call ASTDELTREE
add esp, 4
.Lt_011D:
.Lt_011C:
push dword ptr [ebp+8]
call ASTDELNODE
add esp, 4
.Lt_0115:
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTDELTREE, .-ASTDELTREE
.balign 16

.globl ASTNEWNODE
ASTNEWNODE:
.type ASTNEWNODE, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_011E:
lea eax, [AST]
push eax
call LISTNEWNODE
add esp, 4
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+8]
mov dword ptr [eax], ebx
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebp+12]
mov dword ptr [ebx+4], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+16]
mov dword ptr [eax+8], ebx
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+56], 0
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+60], 0
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+12], 0
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+16], 0
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ebx
.Lt_011F:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTNEWNODE, .-ASTNEWNODE
.balign 16

.globl ASTDELNODE
ASTDELNODE:
.type ASTDELNODE, @function
push ebp
mov ebp, esp
push ebx
.Lt_0120:
cmp dword ptr [ebp+8], 0
jne .Lt_0123
jmp .Lt_0121
.Lt_0123:
.Lt_0122:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 17
jne .Lt_0125
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+12], 0
je .Lt_0127
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+12]
mov eax, dword ptr [ebx]
cmp eax, 1
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebx+12]
mov ebx, dword ptr [ecx+4]
and ebx, 4194304
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
and eax, ebx
je .Lt_0129
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+12]
call ASTDTORLISTREMOVEREF
add esp, 4
.Lt_0129:
.Lt_0128:
.Lt_0127:
.Lt_0126:
.Lt_0125:
.Lt_0124:
push dword ptr [ebp+8]
lea ebx, [AST]
push ebx
call LISTDELNODE
add esp, 8
.Lt_0121:
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTDELNODE, .-ASTDELNODE
.balign 16

.globl ASTGETINVERSELOGOP
ASTGETINVERSELOGOP:
.type ASTGETINVERSELOGOP, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_012C:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-8], eax
jmp .Lt_012F
.Lt_0131:
mov dword ptr [ebp+8], 48
jmp .Lt_012E
.Lt_0132:
mov dword ptr [ebp+8], 45
jmp .Lt_012E
.Lt_0133:
mov dword ptr [ebp+8], 50
jmp .Lt_012E
.Lt_0134:
mov dword ptr [ebp+8], 49
jmp .Lt_012E
.Lt_0135:
mov dword ptr [ebp+8], 47
jmp .Lt_012E
.Lt_0136:
mov dword ptr [ebp+8], 46
jmp .Lt_012E
.Lt_012F:
mov eax, dword ptr [ebp-8]
add eax, 4294967251
cmp eax, 5
ja .Lt_012E
mov eax, dword ptr [ebp-8]
jmp dword ptr [.LT_0137+eax*4-180]
.LT_0137:
.int .Lt_0131
.int .Lt_0133
.int .Lt_0134
.int .Lt_0132
.int .Lt_0135
.int .Lt_0136
.Lt_012E:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
.Lt_012D:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size ASTGETINVERSELOGOP, .-ASTGETINVERSELOGOP
.balign 16

.globl ASTLOAD
ASTLOAD:
.type ASTLOAD, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_0138:
cmp dword ptr [ebp+8], 0
je .Lt_013B
push dword ptr [ebp+8]
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
call dword ptr [AST_LOADCALLBACKS+ebx*4]
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_013B:
.Lt_013A:
.Lt_0139:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTLOAD, .-ASTLOAD
.balign 16
fb_ctor__ast:
.type fb_ctor__ast, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__ast, .-fb_ctor__ast
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
	#FreeBASIC-1.01.0-source/src/compiler/ast.bas' compilation took 0.02997099806088954 secs

.section .rodata
.balign 4
Lt_0018:	.ascii	"/\0"

.section .bss

.globl AST
.balign 4
	.lcomm	AST,236

.section .data
.balign 4

.globl AST_BITMASKTB
AST_BITMASKTB:
.int 0
.int 1
.int 3
.int 7
.int 15
.int 31
.int 63
.int 127
.int 255
.int 511
.int 1023
.int 2047
.int 4095
.int 8191
.int 16383
.int 32767
.int 65535
.int 131071
.int 262143
.int 524287
.int 1048575
.int 2097151
.int 4194303
.int 8388607
.int 16777215
.int 33554431
.int 67108863
.int 134217727
.int 268435455
.int 536870911
.int 1073741823
.int 2147483647
.int 4294967295
.balign 4

.globl AST_OPTB
AST_OPTB:
.int 2
.int 5
.int Lt_0058
.skip 4,0
.int 3
.int 5
.int Lt_0059
.int 28
.int 3
.int 5
.int Lt_005A
.int 29
.int 3
.int 5
.int Lt_005B
.int 30
.int 3
.int 5
.int Lt_005C
.int 31
.int 3
.int 5
.int Lt_005C
.int 32
.int 3
.int 5
.int Lt_005D
.int 33
.int 3
.int 5
.int Lt_005E
.int 34
.int 3
.int 5
.int Lt_005F
.int 35
.int 3
.int 5
.int Lt_0060
.int 36
.int 3
.int 5
.int Lt_0061
.int 37
.int 3
.int 5
.int Lt_0062
.int 38
.int 3
.int 5
.int Lt_0063
.int 39
.int 3
.int 5
.int Lt_0064
.int 40
.int 3
.int 5
.int Lt_0065
.int 41
.int 3
.int 5
.int Lt_0066
.int 42
.int 3
.int 5
.int Lt_0067
.int 43
.int 3
.int 5
.int Lt_0068
.int 44
.int 12
.int 1
.int Lt_0069
.skip 4,0
.int 12
.int 1
.int Lt_006A
.skip 4,0
.int 12
.int 5
.int Lt_006B
.skip 4,0
.int 12
.int 5
.int Lt_006C
.skip 4,0
.int 6
.int 1
.int Lt_006D
.skip 4,0
.int 3
.int 1
.int Lt_006E
.skip 4,0
.int 14
.int 5
.int Lt_006F
.skip 4,0
.int 14
.int 5
.int Lt_0070
.skip 4,0
.int 14
.int 1
.int Lt_0071
.skip 4,0
.int 5
.int 1
.int Lt_0072
.skip 4,0
.int 3
.int 2
.int Lt_0073
.int 1
.int 3
.int 0
.int Lt_0074
.int 2
.int 3
.int 2
.int Lt_0075
.int 3
.int 3
.int 0
.int Lt_0018
.int 4
.int 3
.int 0
.int Lt_0018
.int 5
.int 3
.int 0
.int Lt_0076
.int 6
.int 3
.int 2
.int Lt_0077
.int 7
.int 3
.int 2
.int Lt_0078
.int 8
.int 3
.int 2
.int Lt_0079
.int 9
.int 3
.int 2
.int Lt_007A
.int 10
.int 3
.int 2
.int Lt_007B
.int 11
.int 3
.int 0
.int Lt_007C
.int 12
.int 3
.int 0
.int Lt_007D
.int 13
.int 3
.int 0
.int Lt_007E
.int 14
.int 3
.int 0
.int Lt_007F
.int 15
.int 3
.int 0
.int Lt_0080
.int 16
.int 3
.int 0
.int Lt_0081
.int 17
.int 14
.int 2
.int Lt_0082
.skip 4,0
.int 14
.int 0
.int Lt_0083
.skip 4,0
.int 14
.int 0
.int Lt_0084
.skip 4,0
.int 14
.int 2
.int Lt_0085
.skip 4,0
.int 14
.int 0
.int Lt_0086
.skip 4,0
.int 14
.int 0
.int Lt_0087
.skip 4,0
.int 14
.int 0
.int Lt_0088
.skip 4,0
.int 4
.int 0
.int Lt_0089
.skip 4,0
.int 4
.int 0
.int Lt_0073
.skip 4,0
.int 4
.int 0
.int Lt_0074
.skip 4,0
.int 4
.int 0
.int Lt_008A
.skip 4,0
.int 4
.int 0
.int Lt_008B
.skip 4,0
.int 4
.int 0
.int Lt_008C
.skip 4,0
.int 4
.int 0
.int Lt_008D
.skip 4,0
.int 4
.int 0
.int Lt_008E
.skip 4,0
.int 4
.int 0
.int Lt_008F
.skip 4,0
.int 4
.int 0
.int Lt_0090
.skip 4,0
.int 4
.int 0
.int Lt_0091
.skip 4,0
.int 4
.int 0
.int Lt_0092
.skip 4,0
.int 3
.int 0
.int Lt_0093
.skip 4,0
.int 4
.int 0
.int Lt_0094
.skip 4,0
.int 4
.int 0
.int Lt_0095
.skip 4,0
.int 4
.int 0
.int Lt_0096
.skip 4,0
.int 4
.int 0
.int Lt_0097
.skip 4,0
.int 4
.int 0
.int Lt_0098
.skip 4,0
.int 4
.int 0
.int Lt_0099
.skip 4,0
.int 4
.int 0
.int Lt_009A
.skip 4,0
.int 4
.int 0
.int Lt_009B
.skip 4,0
.int 4
.int 0
.int Lt_009C
.skip 4,0
.int 4
.int 0
.int Lt_009D
.skip 4,0
.int 4
.int 0
.int Lt_009E
.skip 4,0
.int 6
.int 0
.int Lt_0075
.skip 4,0
.int 6
.int 0
.int Lt_009F
.skip 4,0
.int 12
.int 0
.int Lt_0069
.int 18
.int 12
.int 0
.int Lt_006A
.int 19
.int 12
.int 0
.int Lt_006B
.int 20
.int 12
.int 0
.int Lt_006C
.int 21
.int 5
.int 0
.int Lt_00A0
.skip 4,0
.int 5
.int 0
.int Lt_00A1
.skip 4,0
.int 1
.int 0
.int Lt_00A2
.skip 4,0
.int 1
.int 0
.int Lt_00A3
.skip 4,0
.int 2
.int 0
.int Lt_00A4
.skip 4,0
.int 11
.int 0
.int Lt_00A5
.skip 4,0
.int 11
.int 0
.int Lt_00A6
.skip 4,0
.int 11
.int 0
.int Lt_00A7
.skip 4,0
.int 11
.int 0
.int Lt_00A8
.skip 4,0
.int 7
.int 0
.int Lt_00A9
.skip 4,0
.int 7
.int 0
.int Lt_00AA
.skip 4,0
.int 7
.int 0
.int Lt_00AB
.skip 4,0
.int 7
.int 0
.int Lt_00AC
.skip 4,0
.int 7
.int 0
.int Lt_00AD
.skip 4,0
.int 7
.int 0
.int Lt_00AE
.skip 4,0
.int 7
.int 0
.int Lt_00AF
.skip 4,0
.int 7
.int 0
.int Lt_00B0
.skip 4,0
.int 7
.int 0
.int Lt_00B1
.skip 4,0
.int 7
.int 0
.int Lt_00B2
.skip 4,0
.int 9
.int 0
.int Lt_00B3
.skip 4,0
.int 9
.int 0
.int Lt_00B4
.skip 4,0
.int 9
.int 0
.int Lt_00B5
.skip 4,0
.int 12
.int 0
.int Lt_00B6
.skip 4,0
.int 12
.int 0
.int Lt_00B7
.skip 4,0
.int 12
.int 0
.int Lt_00B8
.skip 4,0
.int 12
.int 0
.int Lt_00B9
.skip 4,0
.int 30
.int 0
.int Lt_00BA
.skip 4,0
.int 30
.int 0
.int Lt_00BB
.skip 4,0
.int 30
.int 0
.int Lt_00BC
.skip 4,0
.int 30
.int 0
.int Lt_00BD
.skip 4,0
.int 27
.int 0
.int Lt_00BE
.skip 4,0
.int 27
.int 0
.int Lt_00BF
.skip 4,0
.skip 32,0

.section .bss
.balign 4
	.lcomm	Lt_0054,32
.balign 4
	.lcomm	Lt_0055,44

.globl ENV
.balign 4
	.comm	ENV,996

.section .data
.balign 4
AST_LOADCALLBACKS:
.int ASTLOADNOP
.int ASTLOADLOAD
.int ASTLOADASSIGN
.int ASTLOADBOP
.int ASTLOADUOP
.int ASTLOADCONV
.int ASTLOADADDROF
.int ASTLOADBRANCH
.int ASTLOADJMPTB
.int ASTLOADCALL
.int ASTLOADCALLCTOR
.int ASTLOADSTACK
.int ASTLOADMEM
.int ASTLOADLOOP
.long 0
.int ASTLOADLINK
.int ASTLOADCONST
.int ASTLOADVAR
.int ASTLOADIDX
.int ASTLOADFIELD
.int ASTLOADDEREF
.int ASTLOADLABEL
.long 0
.int ASTLOADOFFSET
.int ASTLOADDECL
.int ASTLOADNIDXARRAY
.int ASTLOADIIF
.int ASTLOADLIT
.int ASTLOADASM
.long 0
.int ASTLOADDBG
.int ASTLOADBOUNDCHK
.int ASTLOADPTRCHK
.int ASTLOADSCOPEBEGIN
.int ASTLOADSCOPEEND
.long 0
.long 0
.long 0
.long 0
.long 0
.long 0
.long 0
.long 0
.long 0

.section .rodata
.balign 4
Lt_0058:	.ascii	"let\0"
.balign 4
Lt_0059:	.ascii	"+=\0"
.balign 4
Lt_005A:	.ascii	"-=\0"
.balign 4
Lt_005B:	.ascii	"*=\0"
.balign 4
Lt_005C:	.ascii	"/=\0"
.balign 4
Lt_005D:	.ascii	"mod=\0"
.balign 4
Lt_005E:	.ascii	"and=\0"
.balign 4
Lt_005F:	.ascii	"or=\0"
.balign 4
Lt_0060:	.ascii	"andalso=\0"
.balign 4
Lt_0061:	.ascii	"orelse=\0"
.balign 4
Lt_0062:	.ascii	"xor=\0"
.balign 4
Lt_0063:	.ascii	"eqv=\0"
.balign 4
Lt_0064:	.ascii	"imp=\0"
.balign 4
Lt_0065:	.ascii	"shl=\0"
.balign 4
Lt_0066:	.ascii	"shr=\0"
.balign 4
Lt_0067:	.ascii	"pow=\0"
.balign 4
Lt_0068:	.ascii	"&=\0"
.balign 4
Lt_0069:	.ascii	"new\0"
.balign 4
Lt_006A:	.ascii	"new[]\0"
.balign 4
Lt_006B:	.ascii	"delete\0"
.balign 4
Lt_006C:	.ascii	"delete[]\0"
.balign 4
Lt_006D:	.ascii	"@\0"
.balign 4
Lt_006E:	.ascii	"[]\0"
.balign 4
Lt_006F:	.ascii	"for\0"
.balign 4
Lt_0070:	.ascii	"step\0"
.balign 4
Lt_0071:	.ascii	"next\0"
.balign 4
Lt_0072:	.ascii	"cast\0"
.balign 4
Lt_0073:	.ascii	"+\0"
.balign 4
Lt_0074:	.ascii	"-\0"
.balign 4
Lt_0075:	.ascii	"*\0"
.balign 4
Lt_0076:	.ascii	"mod\0"
.balign 4
Lt_0077:	.ascii	"and\0"
.balign 4
Lt_0078:	.ascii	"or\0"
.balign 4
Lt_0079:	.ascii	"andalso\0"
.balign 4
Lt_007A:	.ascii	"orelse\0"
.balign 4
Lt_007B:	.ascii	"xor\0"
.balign 4
Lt_007C:	.ascii	"eqv\0"
.balign 4
Lt_007D:	.ascii	"imp\0"
.balign 4
Lt_007E:	.ascii	"shl\0"
.balign 4
Lt_007F:	.ascii	"shr\0"
.balign 4
Lt_0080:	.ascii	"pow\0"
.balign 4
Lt_0081:	.ascii	"&\0"
.balign 4
Lt_0082:	.ascii	"=\0"
.balign 4
Lt_0083:	.ascii	">\0"
.balign 4
Lt_0084:	.ascii	"<\0"
.balign 4
Lt_0085:	.ascii	"<>\0"
.balign 4
Lt_0086:	.ascii	">=\0"
.balign 4
Lt_0087:	.ascii	"<=\0"
.balign 4
Lt_0088:	.ascii	"is\0"
.balign 4
Lt_0089:	.ascii	"not\0"
.balign 4
Lt_008A:	.ascii	"HADD\0"
.balign 4
Lt_008B:	.ascii	"abs\0"
.balign 4
Lt_008C:	.ascii	"sgn\0"
.balign 4
Lt_008D:	.ascii	"sin\0"
.balign 4
Lt_008E:	.ascii	"asin\0"
.balign 4
Lt_008F:	.ascii	"cos\0"
.balign 4
Lt_0090:	.ascii	"acos\0"
.balign 4
Lt_0091:	.ascii	"tan\0"
.balign 4
Lt_0092:	.ascii	"atan\0"
.balign 4
Lt_0093:	.ascii	"atn2\0"
.balign 4
Lt_0094:	.ascii	"sqr\0"
.balign 4
Lt_0095:	.ascii	"rsqrt\0"
.balign 4
Lt_0096:	.ascii	"rcp\0"
.balign 4
Lt_0097:	.ascii	"log\0"
.balign 4
Lt_0098:	.ascii	"exp\0"
.balign 4
Lt_0099:	.ascii	"int\0"
.balign 4
Lt_009A:	.ascii	"fix\0"
.balign 4
Lt_009B:	.ascii	"frac\0"
.balign 4
Lt_009C:	.ascii	"len\0"
.balign 4
Lt_009D:	.ascii	"convd2s\0"
.balign 4
Lt_009E:	.ascii	"swzrep\0"
.balign 4
Lt_009F:	.ascii	"->\0"
.balign 4
Lt_00A0:	.ascii	"cint\0"
.balign 4
Lt_00A1:	.ascii	"cflt\0"
.balign 4
Lt_00A2:	.ascii	"load\0"
.balign 4
Lt_00A3:	.ascii	"lres\0"
.balign 4
Lt_00A4:	.ascii	"spill\0"
.balign 4
Lt_00A5:	.ascii	"push\0"
.balign 4
Lt_00A6:	.ascii	"pop\0"
.balign 4
Lt_00A7:	.ascii	"pudt\0"
.balign 4
Lt_00A8:	.ascii	"stka\0"
.balign 4
Lt_00A9:	.ascii	"jeq\0"
.balign 4
Lt_00AA:	.ascii	"jgt\0"
.balign 4
Lt_00AB:	.ascii	"jlt\0"
.balign 4
Lt_00AC:	.ascii	"jne\0"
.balign 4
Lt_00AD:	.ascii	"jge\0"
.balign 4
Lt_00AE:	.ascii	"jle\0"
.balign 4
Lt_00AF:	.ascii	"jmp\0"
.balign 4
Lt_00B0:	.ascii	"call\0"
.balign 4
Lt_00B1:	.ascii	"lbl\0"
.balign 4
Lt_00B2:	.ascii	"ret\0"
.balign 4
Lt_00B3:	.ascii	"calf\0"
.balign 4
Lt_00B4:	.ascii	"calp\0"
.balign 4
Lt_00B5:	.ascii	"jmpp\0"
.balign 4
Lt_00B6:	.ascii	"mmov\0"
.balign 4
Lt_00B7:	.ascii	"mswp\0"
.balign 4
Lt_00B8:	.ascii	"mclr\0"
.balign 4
Lt_00B9:	.ascii	"stkc\0"
.balign 4
Lt_00BA:	.ascii	"lini\0"
.balign 4
Lt_00BB:	.ascii	"lend\0"
.balign 4
Lt_00BC:	.ascii	"sini\0"
.balign 4
Lt_00BD:	.ascii	"send\0"
.balign 4
Lt_00BE:	.ascii	"rem\0"
.balign 4
Lt_00BF:	.ascii	"asm\0"

.section .ctors, "aw", @progbits
.int fb_ctor__ast
