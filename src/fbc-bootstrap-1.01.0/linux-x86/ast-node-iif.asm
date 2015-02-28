	.intel_syntax noprefix

	#FreeBASIC-1.01.0-source/src/compiler/ast-node-iif.bas' compilation started at 16:30:03 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl HCHECKTYPES
HCHECKTYPES:
.type HCHECKTYPES, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
mov dword ptr [ebp-4], 0
.Lt_0057:
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+8]
and eax, 480
test eax, eax
setne al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp+16]
and eax, 480
test eax, eax
setne al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp-12]
or eax, dword ptr [ebp-8]
je .Lt_005A
mov eax, dword ptr [ebp-12]
and eax, dword ptr [ebp-8]
je .Lt_005C
mov eax, dword ptr [ebp+8]
and eax, 511
mov ebx, dword ptr [ebp+16]
and ebx, 511
cmp eax, ebx
setne al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp+12]
cmp ebx, dword ptr [ebp+20]
setne cl
shr ecx, 1
sbb ecx, ecx
or eax, ecx
je .Lt_005E
jmp .Lt_0058
.Lt_005E:
.Lt_005D:
mov ecx, dword ptr [ebp+24]
mov eax, dword ptr [ebp+8]
mov dword ptr [ecx], eax
mov eax, dword ptr [ebp+28]
mov ecx, dword ptr [ebp+12]
mov dword ptr [eax], ecx
jmp .Lt_005B
.Lt_005C:
cmp dword ptr [ebp-8], 0
je .Lt_0060
mov ecx, dword ptr [ebp+24]
mov eax, dword ptr [ebp+8]
mov dword ptr [ecx], eax
mov eax, dword ptr [ebp+28]
mov ecx, dword ptr [ebp+12]
mov dword ptr [eax], ecx
mov ecx, dword ptr [ebp+16]
mov dword ptr [ebp-16], ecx
jmp .Lt_005F
.Lt_0060:
mov ecx, dword ptr [ebp+24]
mov eax, dword ptr [ebp+16]
mov dword ptr [ecx], eax
mov eax, dword ptr [ebp+28]
mov ecx, dword ptr [ebp+20]
mov dword ptr [eax], ecx
mov ecx, dword ptr [ebp+8]
mov dword ptr [ebp-16], ecx
.Lt_005F:
mov ecx, dword ptr [ebp-16]
and ecx, 480
je .Lt_0061
mov dword ptr [ebp-20], 22
jmp .Lt_0080
.Lt_0061:
mov ecx, dword ptr [ebp-16]
and ecx, 31
mov dword ptr [ebp-20], ecx
.Lt_0080:
mov ecx, dword ptr [ebp-20]
imul ecx, 28
cmp dword ptr [SYMB_DTYPETB+ecx], 0
je .Lt_0064
jmp .Lt_0058
.Lt_0064:
.Lt_0063:
mov ecx, dword ptr [ebp-16]
and ecx, 31
mov dword ptr [ebp-24], ecx
cmp dword ptr [ebp-24], 3
je .Lt_0068
.Lt_0069:
cmp dword ptr [ebp-24], 6
jne .Lt_0067
.Lt_0068:
jmp .Lt_0058
.Lt_0067:
.Lt_0065:
.Lt_005B:
mov dword ptr [ebp-4], -1
jmp .Lt_0058
.Lt_005A:
.Lt_0059:
mov ecx, dword ptr [ebp+8]
and ecx, 31
cmp ecx, 16
sete cl
shr ecx, 1
sbb ecx, ecx
mov eax, dword ptr [ebp+8]
and eax, 31
cmp eax, 17
sete al
shr eax, 1
sbb eax, eax
or ecx, eax
mov eax, dword ptr [ebp+8]
and eax, 31
cmp eax, 3
sete al
shr eax, 1
sbb eax, eax
or ecx, eax
mov dword ptr [ebp-8], ecx
mov ecx, dword ptr [ebp+16]
and ecx, 31
cmp ecx, 16
sete cl
shr ecx, 1
sbb ecx, ecx
mov eax, dword ptr [ebp+16]
and eax, 31
cmp eax, 17
sete al
shr eax, 1
sbb eax, eax
or ecx, eax
mov eax, dword ptr [ebp+16]
and eax, 31
cmp eax, 3
sete al
shr eax, 1
sbb eax, eax
or ecx, eax
mov dword ptr [ebp-12], ecx
mov ecx, dword ptr [ebp-12]
or ecx, dword ptr [ebp-8]
je .Lt_006B
mov ecx, dword ptr [ebp-12]
cmp dword ptr [ebp-8], ecx
je .Lt_006D
jmp .Lt_0058
.Lt_006D:
.Lt_006C:
mov ecx, dword ptr [ebp+24]
mov dword ptr [ecx], 16
mov ecx, dword ptr [ebp+28]
mov dword ptr [ecx], 0
mov dword ptr [ebp-4], -1
jmp .Lt_0058
.Lt_006B:
.Lt_006A:
mov ecx, dword ptr [ebp+8]
and ecx, 31
cmp ecx, 6
sete cl
shr ecx, 1
sbb ecx, ecx
mov dword ptr [ebp-8], ecx
mov ecx, dword ptr [ebp+16]
and ecx, 31
cmp ecx, 6
sete cl
shr ecx, 1
sbb ecx, ecx
mov dword ptr [ebp-12], ecx
mov ecx, dword ptr [ebp-12]
or ecx, dword ptr [ebp-8]
je .Lt_006F
mov ecx, dword ptr [ebp-12]
cmp dword ptr [ebp-8], ecx
je .Lt_0071
jmp .Lt_0058
.Lt_0071:
.Lt_0070:
mov ecx, dword ptr [ebp+24]
mov dword ptr [ecx], 6
mov ecx, dword ptr [ebp+28]
mov dword ptr [ecx], 0
mov dword ptr [ebp-4], -1
jmp .Lt_0058
.Lt_006F:
.Lt_006E:
mov ecx, dword ptr [ebp+8]
and ecx, 31
cmp ecx, 18
sete cl
shr ecx, 1
sbb ecx, ecx
mov dword ptr [ebp-8], ecx
mov ecx, dword ptr [ebp+16]
and ecx, 31
cmp ecx, 18
sete cl
shr ecx, 1
sbb ecx, ecx
mov dword ptr [ebp-12], ecx
mov ecx, dword ptr [ebp-12]
or ecx, dword ptr [ebp-8]
je .Lt_0073
mov ecx, dword ptr [ebp-12]
cmp dword ptr [ebp-8], ecx
je .Lt_0075
jmp .Lt_0058
.Lt_0075:
.Lt_0074:
mov ecx, dword ptr [ebp+20]
cmp dword ptr [ebp+12], ecx
je .Lt_0077
jmp .Lt_0058
.Lt_0077:
.Lt_0076:
mov ecx, dword ptr [ebp+24]
mov dword ptr [ecx], 18
mov ecx, dword ptr [ebp+28]
mov eax, dword ptr [ebp+12]
mov dword ptr [ecx], eax
mov dword ptr [ebp-4], -1
jmp .Lt_0058
.Lt_0073:
.Lt_0072:
mov eax, dword ptr [ebp+8]
and eax, 31
cmp eax, 9
sete al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp+16]
and eax, 31
cmp eax, 9
sete al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp-12]
or eax, dword ptr [ebp-8]
je .Lt_0079
mov eax, dword ptr [ebp-12]
and eax, dword ptr [ebp-8]
je .Lt_007B
mov eax, dword ptr [ebp+20]
cmp dword ptr [ebp+12], eax
jne .Lt_007D
mov eax, dword ptr [ebp+24]
mov dword ptr [eax], 9
mov eax, dword ptr [ebp+28]
mov ecx, dword ptr [ebp+12]
mov dword ptr [eax], ecx
jmp .Lt_007C
.Lt_007D:
mov ecx, dword ptr [ebp+24]
mov dword ptr [ecx], 7
mov ecx, dword ptr [ebp+28]
mov dword ptr [ecx], 0
.Lt_007C:
mov dword ptr [ebp-4], -1
jmp .Lt_0058
.Lt_007B:
.Lt_007A:
cmp dword ptr [ebp-8], 0
je .Lt_007F
mov dword ptr [ebp+8], 7
mov dword ptr [ebp+12], 0
jmp .Lt_007E
.Lt_007F:
mov dword ptr [ebp+16], 7
mov dword ptr [ebp+20], 0
.Lt_007E:
.Lt_0079:
.Lt_0078:
push dword ptr [ebp+28]
push dword ptr [ebp+24]
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call TYPEMAX
add esp, 24
mov dword ptr [ebp-4], -1
.Lt_0058:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HCHECKTYPES, .-HCHECKTYPES
.balign 16

.globl ASTNEWIIF
ASTNEWIIF:
.type ASTNEWIIF, @function
push ebp
mov ebp, esp
sub esp, 48
push ebx
mov dword ptr [ebp-4], 0
.Lt_0091:
mov dword ptr [ebp-4], 0
cmp dword ptr [ebp+8], 0
jne .Lt_0094
jmp .Lt_0092
.Lt_0094:
.Lt_0093:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 16
jne .Lt_0096
push dword ptr [ebp+8]
call ASTCONSTEQZERO
add esp, 4
test eax, eax
je .Lt_0098
push dword ptr [ebp+12]
call ASTDELTREE
add esp, 4
mov eax, dword ptr [ebp+20]
mov dword ptr [ebp-4], eax
push dword ptr [ebp+24]
call ASTDTORLISTUNSCOPE
add esp, 4
jmp .Lt_0097
.Lt_0098:
push dword ptr [ebp+20]
call ASTDELTREE
add esp, 4
mov eax, dword ptr [ebp+12]
mov dword ptr [ebp-4], eax
push dword ptr [ebp+16]
call ASTDTORLISTUNSCOPE
add esp, 4
.Lt_0097:
push dword ptr [ebp+8]
call ASTDELTREE
add esp, 4
jmp .Lt_0092
.Lt_0096:
.Lt_0095:
mov dword ptr [ebp-16], -2147483648
mov dword ptr [ebp-40], 0
lea eax, [ebp-40]
push eax
lea eax, [ebp-16]
push eax
mov eax, dword ptr [ebp+20]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+20]
push dword ptr [eax+4]
mov eax, dword ptr [ebp+12]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+12]
push dword ptr [eax+4]
call HCHECKTYPES
add esp, 24
test eax, eax
jne .Lt_009A
jmp .Lt_0092
.Lt_009A:
.Lt_0099:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 261632
mov eax, dword ptr [ebp+20]
mov ecx, dword ptr [eax+4]
and ecx, 261632
or ebx, ecx
or dword ptr [ebp-16], ebx
push 4
push 0
call SYMBADDLABEL
add esp, 8
mov dword ptr [ebp-36], eax
push -1
push 0
push dword ptr [ebp-36]
push dword ptr [ebp+8]
call ASTBUILDBRANCH
add esp, 16
mov dword ptr [ebp+8], eax
cmp dword ptr [ebp+8], 0
jne .Lt_009C
jmp .Lt_0092
.Lt_009C:
.Lt_009B:
mov eax, dword ptr [ebp-16]
and eax, 511
mov dword ptr [ebp-48], eax
cmp dword ptr [ebp-48], 17
je .Lt_00A0
.Lt_00A1:
cmp dword ptr [ebp-48], 3
jne .Lt_009F
.Lt_00A0:
mov dword ptr [ebp-16], 16
.Lt_009F:
.Lt_009D:
mov eax, dword ptr [ebp-16]
and eax, 511
cmp eax, 6
jne .Lt_00A3
push 0
push 38
call SYMBADDTEMPVAR
add esp, 8
mov dword ptr [ebp-44], eax
mov eax, dword ptr [ebp-44]
mov ebx, dword ptr [eax+8]
or ebx, 16777216
mov eax, ebx
mov ebx, dword ptr [ebp-44]
mov dword ptr [ebx+8], eax
push dword ptr [ebp-44]
call ASTDTORLISTADD
add esp, 4
push dword ptr [ebp-44]
call ASTBUILDFAKEWSTRINGACCESS
add esp, 4
mov dword ptr [ebp-12], eax
push dword ptr [ebp+16]
call ASTDTORLISTSCOPEBEGIN
add esp, 4
push 64
push dword ptr [ebp+12]
push dword ptr [ebp-44]
call ASTBUILDFAKEWSTRINGASSIGN
add esp, 12
mov dword ptr [ebp+12], eax
call ASTDTORLISTSCOPEEND
push dword ptr [ebp+24]
call ASTDTORLISTSCOPEBEGIN
add esp, 4
push 64
push dword ptr [ebp+20]
push dword ptr [ebp-44]
call ASTBUILDFAKEWSTRINGASSIGN
add esp, 12
mov dword ptr [ebp+20], eax
call ASTDTORLISTSCOPEEND
jmp .Lt_00A2
.Lt_00A3:
push dword ptr [ebp-40]
push dword ptr [ebp-16]
call SYMBADDTEMPVAR
add esp, 8
mov dword ptr [ebp-44], eax
push dword ptr [ebp-44]
call ASTDTORLISTADD
add esp, 4
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp-44]
call ASTNEWVAR
add esp, 20
mov dword ptr [ebp-12], eax
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-32], 0
push dword ptr [ebp-44]
call SYMBHASCTOR
add esp, 4
test eax, eax
je .Lt_00A5
push dword ptr [ebp+16]
call ASTDTORLISTSCOPEBEGIN
add esp, 4
lea eax, [ebp-20]
push eax
push -1
push dword ptr [ebp+12]
push dword ptr [ebp-44]
call ASTBUILDIMPLICITCTORCALLEX
add esp, 16
mov dword ptr [ebp+12], eax
call ASTDTORLISTSCOPEEND
push dword ptr [ebp+24]
call ASTDTORLISTSCOPEBEGIN
add esp, 4
lea eax, [ebp-24]
push eax
push -1
push dword ptr [ebp+20]
push dword ptr [ebp-44]
call ASTBUILDIMPLICITCTORCALLEX
add esp, 16
mov dword ptr [ebp+20], eax
call ASTDTORLISTSCOPEEND
mov eax, dword ptr [ebp-24]
or eax, dword ptr [ebp-20]
je .Lt_00A7
cmp dword ptr [ebp-20], 0
je .Lt_00A9
push dword ptr [ebp+16]
call ASTDTORLISTSCOPEBEGIN
add esp, 4
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp-44]
call ASTNEWVAR
add esp, 20
push eax
push dword ptr [ebp+12]
call ASTPATCHCTORCALL
add esp, 8
mov dword ptr [ebp+12], eax
call ASTDTORLISTSCOPEEND
jmp .Lt_00A8
.Lt_00A9:
mov dword ptr [ebp-28], -1
.Lt_00A8:
cmp dword ptr [ebp-24], 0
je .Lt_00AB
push dword ptr [ebp+24]
call ASTDTORLISTSCOPEBEGIN
add esp, 4
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp-44]
call ASTNEWVAR
add esp, 20
push eax
push dword ptr [ebp+20]
call ASTPATCHCTORCALL
add esp, 8
mov dword ptr [ebp+20], eax
call ASTDTORLISTSCOPEEND
jmp .Lt_00AA
.Lt_00AB:
mov dword ptr [ebp-32], -1
.Lt_00AA:
jmp .Lt_00A6
.Lt_00A7:
push -1
push dword ptr [ebp+8]
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp-44]
call ASTNEWVAR
add esp, 20
push eax
push dword ptr [ebp-40]
call ASTBUILDCTORCALL
add esp, 8
push eax
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp+8], eax
.Lt_00A6:
push dword ptr [ebp-44]
call SYMBHASDEFCTOR
add esp, 4
test eax, eax
jne .Lt_00AD
mov eax, dword ptr [ebp-20]
test eax, eax
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp-24]
test ebx, ebx
sete bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
je .Lt_00AF
jmp .Lt_0092
.Lt_00AF:
.Lt_00AE:
.Lt_00AD:
.Lt_00AC:
.Lt_00A5:
.Lt_00A4:
cmp dword ptr [ebp-20], 0
jne .Lt_00B1
push dword ptr [ebp+16]
call ASTDTORLISTSCOPEBEGIN
add esp, 4
push 64
push dword ptr [ebp+12]
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp-44]
call ASTNEWVAR
add esp, 20
push eax
call ASTNEWASSIGN
add esp, 12
mov dword ptr [ebp+12], eax
cmp dword ptr [ebp-28], 0
je .Lt_00B3
push -1
push dword ptr [ebp+12]
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp-44]
call ASTNEWVAR
add esp, 20
push eax
push dword ptr [ebp-40]
call ASTBUILDCTORCALL
add esp, 8
push eax
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp+12], eax
.Lt_00B3:
.Lt_00B2:
call ASTDTORLISTSCOPEEND
.Lt_00B1:
.Lt_00B0:
cmp dword ptr [ebp-24], 0
jne .Lt_00B5
push dword ptr [ebp+24]
call ASTDTORLISTSCOPEBEGIN
add esp, 4
push 64
push dword ptr [ebp+20]
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp-44]
call ASTNEWVAR
add esp, 20
push eax
call ASTNEWASSIGN
add esp, 12
mov dword ptr [ebp+20], eax
cmp dword ptr [ebp-32], 0
je .Lt_00B7
push -1
push dword ptr [ebp+20]
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp-44]
call ASTNEWVAR
add esp, 20
push eax
push dword ptr [ebp-40]
call ASTBUILDCTORCALL
add esp, 8
push eax
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp+20], eax
.Lt_00B7:
.Lt_00B6:
call ASTDTORLISTSCOPEEND
.Lt_00B5:
.Lt_00B4:
.Lt_00A2:
push dword ptr [ebp+16]
call ASTDTORLISTSCOPEBEGIN
add esp, 4
push dword ptr [ebp+12]
call ASTTYPEINIUPDATE
add esp, 4
mov dword ptr [ebp+12], eax
call ASTDTORLISTSCOPEEND
push dword ptr [ebp+24]
call ASTDTORLISTSCOPEBEGIN
add esp, 4
push dword ptr [ebp+20]
call ASTTYPEINIUPDATE
add esp, 4
mov dword ptr [ebp+20], eax
call ASTDTORLISTSCOPEEND
cmp dword ptr [ebp+16], 0
je .Lt_00B9
push -1
push dword ptr [ebp+16]
call ASTDTORLISTFLUSH
add esp, 4
push eax
push dword ptr [ebp+12]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp+12], eax
.Lt_00B9:
.Lt_00B8:
cmp dword ptr [ebp+24], 0
je .Lt_00BB
push -1
push dword ptr [ebp+24]
call ASTDTORLISTFLUSH
add esp, 4
push eax
push dword ptr [ebp+20]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp+20], eax
.Lt_00BB:
.Lt_00BA:
push dword ptr [ebp-40]
push dword ptr [ebp-16]
push 26
call ASTNEWNODE
add esp, 12
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp-44]
mov dword ptr [eax+12], ebx
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebp-12]
mov dword ptr [ebx+56], eax
push -1
push -1
push dword ptr [ebp+20]
push dword ptr [ebp+12]
call ASTNEWLINK
add esp, 12
push eax
push dword ptr [ebp+8]
call ASTNEWLINK
add esp, 12
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+60], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp-36]
mov dword ptr [eax+20], ebx
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ebx
.Lt_0092:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTNEWIIF, .-ASTNEWIIF
.balign 16

.globl ASTLOADIIF
ASTLOADIIF:
.type ASTLOADIIF, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
mov dword ptr [ebp-4], 0
.Lt_00BE:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+60]
mov eax, dword ptr [ebx+56]
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+60]
mov eax, dword ptr [ebx+60]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-12], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+60]
mov ebx, dword ptr [eax+60]
mov eax, dword ptr [ebx+60]
mov dword ptr [ebp-16], eax
cmp dword ptr [AST+136], 0
je .Lt_00C1
call dword ptr [IR+120]
.Lt_00C1:
.Lt_00C0:
push dword ptr [ebp-8]
call ASTLOAD
add esp, 4
push dword ptr [ebp-8]
call ASTDELNODE
add esp, 4
push 4
push 0
call SYMBADDLABEL
add esp, 8
mov dword ptr [ebp-20], eax
push dword ptr [ebp-12]
call ASTLOAD
add esp, 4
push dword ptr [ebp-12]
call ASTDELNODE
add esp, 4
cmp dword ptr [AST+136], 0
je .Lt_00C3
push dword ptr [ebp-20]
push 97
call dword ptr [IR+156]
add esp, 8
.Lt_00C3:
.Lt_00C2:
cmp dword ptr [AST+136], 0
je .Lt_00C5
mov eax, dword ptr [ebp+8]
push dword ptr [eax+20]
call dword ptr [IR+68]
add esp, 4
.Lt_00C5:
.Lt_00C4:
cmp dword ptr [AST+136], 0
je .Lt_00C7
call dword ptr [IR+120]
.Lt_00C7:
.Lt_00C6:
push dword ptr [ebp-16]
call ASTLOAD
add esp, 4
push dword ptr [ebp-16]
call ASTDELNODE
add esp, 4
cmp dword ptr [AST+136], 0
je .Lt_00C9
push dword ptr [ebp-20]
call dword ptr [IR+68]
add esp, 4
.Lt_00C9:
.Lt_00C8:
mov eax, dword ptr [ebp+8]
push dword ptr [eax+56]
call ASTLOAD
add esp, 4
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp+8]
push dword ptr [eax+56]
call ASTDELNODE
add esp, 4
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+60]
push dword ptr [ebx+60]
call ASTDELNODE
add esp, 4
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+60]
call ASTDELNODE
add esp, 4
.Lt_00BF:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTLOADIIF, .-ASTLOADIIF
.balign 16
fb_ctor__astznodeziif:
.type fb_ctor__astznodeziif, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__astznodeziif, .-fb_ctor__astznodeziif
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
	#FreeBASIC-1.01.0-source/src/compiler/ast-node-iif.bas' compilation took 0.03277894691564143 secs

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
.int fb_ctor__astznodeziif
