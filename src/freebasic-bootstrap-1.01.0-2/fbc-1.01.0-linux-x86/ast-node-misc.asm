	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/ast-node-misc.bas' compilation started at 14:16:34 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl ASTNEWLABEL
ASTNEWLABEL:
.type ASTNEWLABEL, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0075:
push 0
push -2147483648
push 21
call ASTNEWNODE
add esp, 12
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+8]
mov dword ptr [eax+12], ebx
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebp+12]
mov dword ptr [ebx+20], eax
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 7
jne .Lt_0078
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+56], 0
jne .Lt_007A
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+56], -1
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [PARSER+28]
mov dword ptr [eax+60], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [PARSER+104]
mov dword ptr [ebx+52], eax
.Lt_007A:
.Lt_0079:
.Lt_0078:
.Lt_0077:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0076:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTNEWLABEL, .-ASTNEWLABEL
.balign 16

.globl ASTLOADLABEL
ASTLOADLABEL:
.type ASTLOADLABEL, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_007B:
cmp dword ptr [AST+136], 0
je .Lt_007E
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+20], 0
je .Lt_0080
mov eax, dword ptr [ebp+8]
push dword ptr [eax+12]
call dword ptr [IR+64]
add esp, 4
jmp .Lt_007F
.Lt_0080:
mov eax, dword ptr [ebp+8]
push dword ptr [eax+12]
call dword ptr [IR+68]
add esp, 4
.Lt_007F:
.Lt_007E:
.Lt_007D:
mov dword ptr [ebp-4], 0
.Lt_007C:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size ASTLOADLABEL, .-ASTLOADLABEL
.balign 16

.globl ASTNEWLIT
ASTNEWLIT:
.type ASTNEWLIT, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0081:
push 0
push -2147483648
push 27
call ASTNEWNODE
add esp, 12
mov dword ptr [ebp-8], eax
push 0
push dword ptr [ebp+8]
call fb_StrLen
add esp, 8
inc eax
mov ebx, eax
push ebx
call XALLOCATE
add esp, 4
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+20], eax
push 0
push 0
push dword ptr [ebp+8]
push 0
mov eax, dword ptr [ebp-8]
push dword ptr [eax+20]
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0082:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTNEWLIT, .-ASTNEWLIT
.balign 16

.globl ASTLOADLIT
ASTLOADLIT:
.type ASTLOADLIT, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_0083:
cmp dword ptr [AST+136], 0
je .Lt_0086
mov eax, dword ptr [ebp+8]
push dword ptr [eax+20]
call dword ptr [IR+104]
add esp, 4
.Lt_0086:
.Lt_0085:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+20], 0
je .Lt_0088
mov eax, dword ptr [ebp+8]
push dword ptr [eax+20]
call free
add esp, 4
.Lt_0088:
.Lt_0087:
mov dword ptr [ebp-4], 0
.Lt_0084:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size ASTLOADLIT, .-ASTLOADLIT
.balign 16

.globl ASTASMAPPENDTEXT
ASTASMAPPENDTEXT:
.type ASTASMAPPENDTEXT, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_008D:
push 0
push dword ptr [ebp+8]
call ASTASMAPPEND
add esp, 8
mov dword ptr [ebp+8], eax
push 0
push dword ptr [ebp+12]
call fb_StrLen
add esp, 8
inc eax
mov ebx, eax
push ebx
call XALLOCATE
add esp, 4
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+4], eax
push 0
push 0
push dword ptr [ebp+12]
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax+4]
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
.Lt_008E:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTASMAPPENDTEXT, .-ASTASMAPPENDTEXT
.balign 16

.globl ASTASMAPPENDSYMB
ASTASMAPPENDSYMB:
.type ASTASMAPPENDSYMB, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_008F:
push 1
push dword ptr [ebp+8]
call ASTASMAPPEND
add esp, 8
mov dword ptr [ebp+8], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+12]
mov dword ptr [eax+4], ebx
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebp-4], ebx
.Lt_0090:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTASMAPPENDSYMB, .-ASTASMAPPENDSYMB
.balign 16

.globl ASTNEWASM
ASTNEWASM:
.type ASTNEWASM, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0091:
push 0
push -2147483648
push 28
call ASTNEWNODE
add esp, 12
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+8]
mov dword ptr [eax+20], ebx
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ebx
.Lt_0092:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTNEWASM, .-ASTNEWASM
.balign 16

.globl ASTLOADASM
ASTLOADASM:
.type ASTLOADASM, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
mov dword ptr [ebp-4], 0
.Lt_0093:
cmp dword ptr [AST+136], 0
je .Lt_0096
call dword ptr [IR+88]
.Lt_0096:
.Lt_0095:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+20]
mov dword ptr [ebp-8], ebx
.Lt_0097:
cmp dword ptr [ebp-8], 0
je .Lt_0098
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx+8]
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-16], ebx
cmp dword ptr [ebp-16], 0
jne .Lt_009B
.Lt_009C:
cmp dword ptr [AST+136], 0
je .Lt_009E
mov ebx, dword ptr [ebp-8]
push dword ptr [ebx+4]
call dword ptr [IR+92]
add esp, 4
.Lt_009E:
.Lt_009D:
mov ebx, dword ptr [ebp-8]
cmp dword ptr [ebx+4], 0
je .Lt_00A0
mov ebx, dword ptr [ebp-8]
push dword ptr [ebx+4]
call free
add esp, 4
.Lt_00A0:
.Lt_009F:
jmp .Lt_0099
.Lt_009B:
cmp dword ptr [ebp-16], 1
jne .Lt_00A1
.Lt_00A2:
cmp dword ptr [AST+136], 0
je .Lt_00A4
mov ebx, dword ptr [ebp-8]
push dword ptr [ebx+4]
call dword ptr [IR+96]
add esp, 4
.Lt_00A4:
.Lt_00A3:
.Lt_00A1:
.Lt_0099:
push dword ptr [ebp-8]
lea ebx, [AST+200]
push ebx
call LISTDELNODE
add esp, 8
mov ebx, dword ptr [ebp-12]
mov dword ptr [ebp-8], ebx
jmp .Lt_0097
.Lt_0098:
cmp dword ptr [AST+136], 0
je .Lt_00A6
call dword ptr [IR+100]
.Lt_00A6:
.Lt_00A5:
mov dword ptr [ebp-4], 0
.Lt_0094:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTLOADASM, .-ASTLOADASM
.balign 16

.globl ASTNEWDBG
ASTNEWDBG:
.type ASTNEWDBG, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_00A7:
cmp dword ptr [ENV+144], 0
jne .Lt_00AA
mov dword ptr [ebp-4], 0
jmp .Lt_00A8
.Lt_00AA:
.Lt_00A9:
push 0
push -2147483648
push 30
call ASTNEWNODE
add esp, 12
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+8]
mov dword ptr [eax+24], ebx
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebp+12]
mov dword ptr [ebx+20], eax
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_00A8:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTNEWDBG, .-ASTNEWDBG
.balign 16

.globl ASTLOADDBG
ASTLOADDBG:
.type ASTLOADDBG, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_00AB:
cmp dword ptr [AST+136], 0
je .Lt_00AE
mov eax, dword ptr [ebp+8]
push dword ptr [eax+20]
mov eax, dword ptr [AST+40]
push dword ptr [eax+12]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+24]
call dword ptr [IR+180]
add esp, 12
.Lt_00AE:
.Lt_00AD:
mov dword ptr [ebp-4], 0
.Lt_00AC:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size ASTLOADDBG, .-ASTLOADDBG
.balign 16

.globl ASTNEWNOP
ASTNEWNOP:
.type ASTNEWNOP, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_00AF:
push 0
push -2147483648
push 0
call ASTNEWNODE
add esp, 12
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_00B0:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size ASTNEWNOP, .-ASTNEWNOP
.balign 16

.globl ASTLOADNOP
ASTLOADNOP:
.type ASTLOADNOP, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_00B1:
mov dword ptr [ebp-4], 0
.Lt_00B2:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size ASTLOADNOP, .-ASTLOADNOP
.balign 16

.globl ASTNEWNIDXARRAY
ASTNEWNIDXARRAY:
.type ASTNEWNIDXARRAY, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_00B3:
push 0
push -2147483648
push 25
call ASTNEWNODE
add esp, 12
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+8]
mov dword ptr [eax+56], ebx
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ebx
.Lt_00B4:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTNEWNIDXARRAY, .-ASTNEWNIDXARRAY
.balign 16

.globl ASTLOADNIDXARRAY
ASTLOADNIDXARRAY:
.type ASTLOADNIDXARRAY, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_00B5:
mov eax, dword ptr [ebp+8]
push dword ptr [eax+56]
call ASTDELTREE
add esp, 4
mov dword ptr [ebp-4], 0
.Lt_00B6:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size ASTLOADNIDXARRAY, .-ASTLOADNIDXARRAY
.balign 16

.globl ASTREMOVENIDXARRAY
ASTREMOVENIDXARRAY:
.type ASTREMOVENIDXARRAY, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_00B7:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 25
jne .Lt_00BA
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-4], ebx
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+56], 0
push dword ptr [ebp+8]
call ASTDELTREE
add esp, 4
.Lt_00BA:
.Lt_00B9:
.Lt_00B8:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTREMOVENIDXARRAY, .-ASTREMOVENIDXARRAY
.balign 16

.globl ASTNEWLINK
ASTNEWLINK:
.type ASTNEWLINK, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_00BB:
cmp dword ptr [ebp+8], 0
jne .Lt_00BE
mov eax, dword ptr [ebp+12]
mov dword ptr [ebp-4], eax
jmp .Lt_00BC
.Lt_00BE:
.Lt_00BD:
cmp dword ptr [ebp+12], 0
jne .Lt_00C0
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
jmp .Lt_00BC
.Lt_00C0:
.Lt_00BF:
cmp dword ptr [ebp+16], 0
je .Lt_00C2
mov eax, dword ptr [ebp+8]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+4]
push 15
call ASTNEWNODE
add esp, 12
mov dword ptr [ebp-8], eax
jmp .Lt_00C1
.Lt_00C2:
mov eax, dword ptr [ebp+12]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+12]
push dword ptr [eax+4]
push 15
call ASTNEWNODE
add esp, 12
mov dword ptr [ebp-8], eax
.Lt_00C1:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+16]
mov dword ptr [eax+20], ebx
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebp+8]
mov dword ptr [ebx+56], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+12]
mov dword ptr [eax+60], ebx
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ebx
.Lt_00BC:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTNEWLINK, .-ASTNEWLINK
.balign 16

.globl ASTLOADLINK
ASTLOADLINK:
.type ASTLOADLINK, @function
push ebp
mov ebp, esp
sub esp, 12
mov dword ptr [ebp-4], 0
.Lt_00C3:
mov eax, dword ptr [ebp+8]
push dword ptr [eax+56]
call ASTLOAD
add esp, 4
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp+8]
push dword ptr [eax+56]
call ASTDELNODE
add esp, 4
mov eax, dword ptr [ebp+8]
push dword ptr [eax+60]
call ASTLOAD
add esp, 4
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp+8]
push dword ptr [eax+60]
call ASTDELNODE
add esp, 4
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+20], 0
je .Lt_00C6
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
jmp .Lt_00C5
.Lt_00C6:
mov eax, dword ptr [ebp-12]
mov dword ptr [ebp-4], eax
.Lt_00C5:
.Lt_00C4:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size ASTLOADLINK, .-ASTLOADLINK
.balign 16

.globl ASTNEWLOAD
ASTNEWLOAD:
.type ASTNEWLOAD, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_00C7:
push 0
push dword ptr [ebp+12]
push 1
call ASTNEWNODE
add esp, 12
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+8]
mov dword ptr [eax+56], ebx
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebp+16]
mov dword ptr [ebx+20], eax
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_00C8:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTNEWLOAD, .-ASTNEWLOAD
.balign 16

.globl ASTLOADLOAD
ASTLOADLOAD:
.type ASTLOADLOAD, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
mov dword ptr [ebp-4], 0
.Lt_00C9:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-8], ebx
cmp dword ptr [ebp-8], 0
jne .Lt_00CC
mov dword ptr [ebp-4], 0
jmp .Lt_00CA
.Lt_00CC:
.Lt_00CB:
push dword ptr [ebp-8]
call ASTLOAD
add esp, 4
mov dword ptr [ebp-12], eax
cmp dword ptr [AST+136], 0
je .Lt_00CE
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+20], 0
je .Lt_00D0
mov eax, dword ptr [ebp-12]
push dword ptr [eax+8]
mov eax, dword ptr [ebp-12]
push dword ptr [eax+4]
call dword ptr [IR+236]
add esp, 8
mov dword ptr [ebp-16], eax
push dword ptr [ebp-16]
push dword ptr [ebp-12]
call dword ptr [IR+128]
add esp, 8
jmp .Lt_00CF
.Lt_00D0:
push dword ptr [ebp-12]
call dword ptr [IR+124]
add esp, 4
.Lt_00CF:
.Lt_00CE:
.Lt_00CD:
push dword ptr [ebp-8]
call ASTDELNODE
add esp, 4
mov eax, dword ptr [ebp-12]
mov dword ptr [ebp-4], eax
.Lt_00CA:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTLOADLOAD, .-ASTLOADLOAD
.balign 16

.globl ASTNEWFIELD
ASTNEWFIELD:
.type ASTNEWFIELD, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
mov dword ptr [ebp-4], 0
.Lt_00D1:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-12], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+8]
mov dword ptr [ebp-16], eax
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax+108], 0
jle .Lt_00D4
mov eax, dword ptr [ebp-12]
and eax, -512
or eax, 8
mov dword ptr [ebp-12], eax
mov dword ptr [ebp-16], 0
inc dword ptr [AST+144]
.Lt_00D4:
.Lt_00D3:
push dword ptr [ebp-16]
push dword ptr [ebp-12]
push 19
call ASTNEWNODE
add esp, 12
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+12]
mov dword ptr [eax+12], ebx
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebp+8]
mov dword ptr [ebx+56], eax
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_00D2:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTNEWFIELD, .-ASTNEWFIELD
.balign 16

.globl ASTFORGETBITFIELDS
ASTFORGETBITFIELDS:
.type ASTFORGETBITFIELDS, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_00D5:
cmp dword ptr [ebp+8], 0
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [AST+144]
test ebx, ebx
setle bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
je .Lt_00D8
jmp .Lt_00D6
.Lt_00D8:
.Lt_00D7:
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx], 19
jne .Lt_00D9
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+12]
mov ebx, dword ptr [eax+108]
test ebx, ebx
setg bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-4], ebx
jmp .Lt_00DD
.Lt_00D9:
mov dword ptr [ebp-4], 0
.Lt_00DD:
cmp dword ptr [ebp-4], 0
je .Lt_00DC
dec dword ptr [AST+144]
.Lt_00DC:
.Lt_00DB:
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+56]
call ASTFORGETBITFIELDS
add esp, 4
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+60]
call ASTFORGETBITFIELDS
add esp, 4
.Lt_00D6:
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTFORGETBITFIELDS, .-ASTFORGETBITFIELDS
.balign 16

.globl ASTUPDATEBITFIELDS
ASTUPDATEBITFIELDS:
.type ASTUPDATEBITFIELDS, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
mov dword ptr [ebp-4], 0
.Lt_00E9:
cmp dword ptr [AST+144], 0
jg .Lt_00EC
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
jmp .Lt_00EA
.Lt_00EC:
.Lt_00EB:
cmp dword ptr [ebp+8], 0
jne .Lt_00EE
mov dword ptr [ebp-4], 0
jmp .Lt_00EA
.Lt_00EE:
.Lt_00ED:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-16], ebx
cmp dword ptr [ebp-16], 2
jne .Lt_00F1
.Lt_00F2:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+56]
cmp dword ptr [eax], 19
jne .Lt_00F4
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov eax, dword ptr [ebx+12]
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp-12]
cmp dword ptr [eax+108], 0
jle .Lt_00F6
dec dword ptr [AST+144]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+56]
call ASTDELNODE
add esp, 4
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [ebx+56]
mov dword ptr [eax+56], ecx
mov ecx, dword ptr [ebp+8]
push dword ptr [ecx+60]
mov ecx, dword ptr [ebp+8]
push dword ptr [ecx+56]
push dword ptr [ebp-12]
call ASTSETBITFIELD
add esp, 12
mov ecx, dword ptr [ebp+8]
mov dword ptr [ecx+60], eax
.Lt_00F6:
.Lt_00F5:
.Lt_00F4:
.Lt_00F3:
jmp .Lt_00EF
.Lt_00F1:
cmp dword ptr [ebp-16], 19
jne .Lt_00F7
.Lt_00F8:
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+56]
mov dword ptr [ebp-8], ecx
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ecx+12]
cmp dword ptr [eax+108], 0
jle .Lt_00FA
push dword ptr [ebp-8]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+12]
call ASTACCESSBITFIELD
add esp, 8
mov dword ptr [ebp-8], eax
dec dword ptr [AST+144]
push dword ptr [ebp+8]
call ASTDELNODE
add esp, 4
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp+8], eax
push dword ptr [ebp+8]
call ASTUPDATEBITFIELDS
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_00EA
.Lt_00FA:
.Lt_00F9:
.Lt_00F7:
.Lt_00EF:
mov eax, dword ptr [ebp+8]
push dword ptr [eax+56]
call ASTUPDATEBITFIELDS
add esp, 4
mov ecx, dword ptr [ebp+8]
mov dword ptr [ecx+56], eax
mov eax, dword ptr [ebp+8]
push dword ptr [eax+60]
call ASTUPDATEBITFIELDS
add esp, 4
mov ecx, dword ptr [ebp+8]
mov dword ptr [ecx+60], eax
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
.Lt_00EA:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTUPDATEBITFIELDS, .-ASTUPDATEBITFIELDS
.balign 16

.globl ASTLOADFIELD
ASTLOADFIELD:
.type ASTLOADFIELD, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_00FB:
mov eax, dword ptr [ebp+8]
push dword ptr [eax+56]
call ASTLOAD
add esp, 4
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp+8]
push dword ptr [eax+56]
call ASTDELNODE
add esp, 4
cmp dword ptr [AST+136], 0
je .Lt_00FE
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-8]
mov ecx, dword ptr [eax+16]
mov dword ptr [ebx+20], ecx
.Lt_00FE:
.Lt_00FD:
mov ecx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ecx
.Lt_00FC:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTLOADFIELD, .-ASTLOADFIELD
.balign 16

.globl ASTNEWSTACK
ASTNEWSTACK:
.type ASTNEWSTACK, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_00FF:
cmp dword ptr [ebp+12], 0
jne .Lt_0102
mov dword ptr [ebp-4], 0
jmp .Lt_0100
.Lt_0102:
.Lt_0101:
push 0
mov eax, dword ptr [ebp+12]
push dword ptr [eax+4]
push 11
call ASTNEWNODE
add esp, 12
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+8]
mov dword ptr [eax+20], ebx
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebp+12]
mov dword ptr [ebx+56], eax
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0100:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTNEWSTACK, .-ASTNEWSTACK
.balign 16

.globl ASTLOADSTACK
ASTLOADSTACK:
.type ASTLOADSTACK, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_0103:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-8], ebx
cmp dword ptr [ebp-8], 0
jne .Lt_0106
mov dword ptr [ebp-4], 0
jmp .Lt_0104
.Lt_0106:
.Lt_0105:
push dword ptr [ebp-8]
call ASTLOAD
add esp, 4
mov dword ptr [ebp-12], eax
cmp dword ptr [AST+136], 0
je .Lt_0108
push dword ptr [ebp-12]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+20]
call dword ptr [IR+132]
add esp, 8
.Lt_0108:
.Lt_0107:
push dword ptr [ebp-8]
call ASTDELNODE
add esp, 4
mov eax, dword ptr [ebp-12]
mov dword ptr [ebp-4], eax
.Lt_0104:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTLOADSTACK, .-ASTLOADSTACK
.balign 16

.globl ASTDUMPOP
ASTDUMPOP:
.type ASTDUMPOP, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_01AE:
mov eax, dword ptr [ebp+8]
cmp eax, 115
setg al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp+8]
test ebx, ebx
setl bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
je .Lt_01B1
push 0
push -1
push -1
push dword ptr [ebp+8]
call fb_IntToStr
add esp, 4
push eax
push 4
push offset Lt_01B2
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ebp-24]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrInit
add esp, 20
jmp .Lt_01AF
.Lt_01B1:
.Lt_01B0:
push 0
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [DBG_ASTNODEOPNAMES+eax*4]
push -1
lea eax, [ebp-12]
push eax
call fb_StrInit
add esp, 20
.Lt_01AF:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTDUMPOP, .-ASTDUMPOP
.balign 16

.globl ASTDUMPTREE
ASTDUMPTREE:
.type ASTDUMPTREE, @function
push ebp
mov ebp, esp
.Lt_020F:
push 0
push -1
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call ASTDUMPTREEEX
add esp, 16
.Lt_0210:
mov esp, ebp
pop ebp
ret
.size ASTDUMPTREE, .-ASTDUMPTREE
.balign 16

.globl ASTDUMPLIST
ASTDUMPLIST:
.type ASTDUMPLIST, @function
push ebp
mov ebp, esp
push ebx
.Lt_0211:
.Lt_0213:
cmp dword ptr [ebp+8], 0
je .Lt_0214
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call ASTDUMPTREE
add esp, 8
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+68]
mov dword ptr [ebp+8], ebx
jmp .Lt_0213
.Lt_0214:
.Lt_0212:
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTDUMPLIST, .-ASTDUMPLIST
.balign 16
fb_ctor__astznodezmisc:
.type fb_ctor__astznodezmisc, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__astznodezmisc, .-fb_ctor__astznodezmisc
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
ASTASMAPPEND:
.type ASTASMAPPEND, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0089:
lea eax, [AST+200]
push eax
call LISTNEWNODE
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp+8], 0
je .Lt_008C
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-8]
mov dword ptr [eax+8], ebx
.Lt_008C:
.Lt_008B:
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebp+12]
mov dword ptr [ebx], eax
mov eax, dword ptr [ebp-8]
mov dword ptr [eax+8], 0
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_008A:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTASMAPPEND, .-ASTASMAPPEND
.balign 16
ASTSETBITFIELD:
.type ASTSETBITFIELD, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_00E1:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+12]
mov ecx, dword ptr [eax+24]
mov dword ptr [ebx+4], ecx
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ecx+28]
mov dword ptr [ebx+8], eax
push dword ptr [ebp+12]
call ASTCLONETREE
add esp, 4
mov dword ptr [ebp+12], eax
push 1
push 0
push 0
push 7
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+108]
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [AST_BITMASKTB+ebx*4]
push ecx
mov cl, byte ptr [eax+104]
xchg eax, [esp]
shl eax, cl
mov ecx, eax
pop eax
not ecx
mov ebx, ecx
mov eax, 0
push eax
push ebx
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp+12]
push 34
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp+12], eax
push 1
push 0
push 0
push 7
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+108]
mov ecx, dword ptr [AST_BITMASKTB+ebx*4]
mov eax, 0
push eax
push ecx
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp+16]
push 34
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp+16], eax
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+104], 0
jle .Lt_00E4
push 1
push 0
push 0
push 7
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+104]
mov ecx, ebx
sar ecx, 31
push ecx
push ebx
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp+16]
push 41
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp+16], eax
.Lt_00E4:
.Lt_00E3:
push 1
push 0
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push 35
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp-4], eax
.Lt_00E2:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTSETBITFIELD, .-ASTSETBITFIELD
.balign 16
ASTACCESSBITFIELD:
.type ASTACCESSBITFIELD, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_00E5:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, -512
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+24]
and ecx, 511
or ebx, ecx
mov ecx, dword ptr [ebp+12]
mov dword ptr [ecx+4], ebx
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+28]
mov dword ptr [ecx+8], eax
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+104], 0
jle .Lt_00E8
push 1
push 0
push 0
push 7
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+104]
mov ecx, ebx
sar ecx, 31
push ecx
push ebx
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp+12]
push 42
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp+12], eax
.Lt_00E8:
.Lt_00E7:
push 1
push 0
push 0
push 7
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+108]
mov ecx, dword ptr [AST_BITMASKTB+ebx*4]
mov eax, 0
push eax
push ecx
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp+12]
push 34
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp-4], eax
.Lt_00E6:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTACCESSBITFIELD, .-ASTACCESSBITFIELD
.balign 16
DBG_ASTOUTPUT:
.type DBG_ASTOUTPUT, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0109:
cmp dword ptr [ebp+16], -1
jne .Lt_010C
.Lt_010D:
push -1
push dword ptr [ebp+8]
call fb_StrLen
add esp, 8
mov ebx, dword ptr [ebp+12]
sub ebx, eax
mov dword ptr [ebp-4], ebx
jmp .Lt_010B
.Lt_010C:
cmp dword ptr [ebp+16], 1
jne .Lt_010E
.Lt_010F:
mov ebx, dword ptr [ebp+12]
dec ebx
mov dword ptr [ebp-4], ebx
jmp .Lt_010B
.Lt_010E:
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebp-4], ebx
.Lt_0110:
.Lt_010B:
cmp dword ptr [ebp+20], 0
jge .Lt_0112
push 0
mov ebx, dword ptr [ebp-4]
dec ebx
push ebx
call fb_SPACE
add esp, 4
push eax
push 0
call fb_PrintString
add esp, 12
push 1
push dword ptr [ebp+8]
push 0
call fb_PrintString
add esp, 12
jmp .Lt_0111
.Lt_0112:
push 0
push dword ptr [ebp+20]
call fb_IntToStr
add esp, 4
push eax
push 0
call fb_PrintString
add esp, 12
push 0
mov eax, dword ptr [ebp-4]
dec eax
push -1
push dword ptr [ebp+20]
mov ebx, eax
call fb_IntToStr
add esp, 4
push eax
call fb_StrLen
add esp, 8
sub ebx, eax
push ebx
call fb_SPACE
add esp, 4
push eax
push 0
call fb_PrintString
add esp, 12
push 1
push dword ptr [ebp+8]
push 0
call fb_PrintString
add esp, 12
.Lt_0111:
.Lt_010A:
pop ebx
mov esp, ebp
pop ebp
ret
.size DBG_ASTOUTPUT, .-DBG_ASTOUTPUT
.balign 16
HASTNODECLASSTOSTR:
.type HASTNODECLASSTOSTR, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_01B6:
mov eax, dword ptr [ebp+8]
cmp eax, 43
setg al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp+8]
test ebx, ebx
setl bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
je .Lt_01B9
push 0
push -1
push -1
push dword ptr [ebp+8]
call fb_IntToStr
add esp, 4
push eax
push 7
push offset Lt_01BA
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ebp-24]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrInit
add esp, 20
jmp .Lt_01B7
.Lt_01B9:
.Lt_01B8:
push 0
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [DBG_ASTNODECLASSNAMES+eax*4]
push -1
lea eax, [ebp-12]
push eax
call fb_StrInit
add esp, 20
.Lt_01B7:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
pop ebx
mov esp, ebp
pop ebp
ret
.size HASTNODECLASSTOSTR, .-HASTNODECLASSTOSTR
.balign 16
HSYMBTOSTR:
.type HSYMBTOSTR, @function
push ebp
mov ebp, esp
sub esp, 12
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_01BC:
cmp dword ptr [ebp+8], 0
jne .Lt_01BF
push 0
push 1
push offset Lt_0000
push -1
lea eax, [ebp-12]
push eax
call fb_StrInit
add esp, 20
jmp .Lt_01BD
.Lt_01BF:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+12], 0
je .Lt_01C1
push 0
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax+12]
push -1
lea eax, [ebp-12]
push eax
call fb_StrInit
add esp, 20
jmp .Lt_01BD
jmp .Lt_01C0
.Lt_01C1:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+16], 0
je .Lt_01C2
push 0
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax+16]
push -1
lea eax, [ebp-12]
push eax
call fb_StrInit
add esp, 20
.Lt_01C2:
.Lt_01C0:
.Lt_01BD:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
mov esp, ebp
pop ebp
ret
.size HSYMBTOSTR, .-HSYMBTOSTR
.balign 16
HASTNODETOSTR:
.type HASTNODETOSTR, @function
push ebp
mov ebp, esp
sub esp, 52
push ebx
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_01C3:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-16], ebx
jmp .Lt_01C6
.Lt_01C8:
push 0
push -1
push -1
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+28]
call HSYMBTOSTR
add esp, 4
push eax
push -1
push 6
push offset Lt_01C9
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+20]
call ASTDUMPOP
add esp, 4
push eax
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
lea eax, [ebp-28]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
lea eax, [ebp-40]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrInit
add esp, 20
jmp .Lt_01C4
jmp .Lt_01C5
.Lt_01CC:
push 0
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+20]
call ASTDUMPOP
add esp, 4
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrInit
add esp, 20
jmp .Lt_01C4
jmp .Lt_01C5
.Lt_01CD:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_01CE
mov dword ptr [ebp-20], 22
jmp .Lt_0217
.Lt_01CE:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-20], eax
.Lt_0217:
mov eax, dword ptr [ebp-20]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax], 1
jne .Lt_01D1
push 0
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+24]
push dword ptr [eax+20]
call fb_DoubleToStr
add esp, 8
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrInit
add esp, 20
jmp .Lt_01C4
.Lt_01D1:
.Lt_01D0:
push 0
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+24]
push dword ptr [eax+20]
call fb_LongintToStr
add esp, 8
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrInit
add esp, 20
jmp .Lt_01C4
jmp .Lt_01C5
.Lt_01D2:
push 0
push -1
push 3
push offset Lt_01D7
push -1
push 0
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+12], 0
je .Lt_01D5
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+12]
mov eax, dword ptr [ebx+12]
mov dword ptr [ebp-20], eax
jmp .Lt_0218
.Lt_01D5:
mov eax, offset Lt_01D4
mov dword ptr [ebp-20], eax
.Lt_0218:
push dword ptr [ebp-20]
push 6
push offset Lt_01D3
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
lea eax, [ebp-32]
push eax
call fb_StrConcat
add esp, 20
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
lea eax, [ebp-12]
push eax
call fb_StrInit
add esp, 20
jmp .Lt_01C4
jmp .Lt_01C5
.Lt_01DA:
push 0
push -1
push 3
push offset Lt_01D7
push -1
push 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+12]
push dword ptr [ebx+12]
push 8
push offset Lt_01DB
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
lea ebx, [ebp-28]
push ebx
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
lea eax, [ebp-40]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrInit
add esp, 20
jmp .Lt_01C4
jmp .Lt_01C5
.Lt_01DE:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+12], 0
je .Lt_01E0
push 0
push -1
push 3
push offset Lt_01D7
push -1
push 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+12]
push dword ptr [ebx+12]
push 7
push offset Lt_01E1
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
lea ebx, [ebp-28]
push ebx
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
lea eax, [ebp-40]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrInit
add esp, 20
jmp .Lt_01C4
.Lt_01E0:
.Lt_01DF:
push 0
push 5
push offset Lt_012C
push -1
lea eax, [ebp-12]
push eax
call fb_StrInit
add esp, 20
jmp .Lt_01C4
jmp .Lt_01C5
.Lt_01E4:
push 0
push -1
push 3
push offset Lt_01D7
push -1
push 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+12]
push dword ptr [ebx+12]
push 7
push offset Lt_01E5
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
lea ebx, [ebp-28]
push ebx
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
lea eax, [ebp-40]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrInit
add esp, 20
jmp .Lt_01C4
jmp .Lt_01C5
.Lt_01E8:
push 0
push -1
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+12]
call HSYMBTOSTR
add esp, 4
push eax
push 8
push offset Lt_01E9
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
lea eax, [ebp-28]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrInit
add esp, 20
jmp .Lt_01C4
jmp .Lt_01C5
.Lt_01EB:
push 0
push -1
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+28]
call HSYMBTOSTR
add esp, 4
push eax
push -1
push 2
push offset Lt_01ED
push -1
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+20]
call ASTDUMPOP
add esp, 4
push eax
push 9
push offset Lt_01EC
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
lea eax, [ebp-28]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
lea eax, [ebp-40]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
lea eax, [ebp-52]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrInit
add esp, 20
jmp .Lt_01C4
jmp .Lt_01C5
.Lt_01F1:
push 0
push -1
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+12]
call HSYMBTOSTR
add esp, 4
push eax
push 13
push offset Lt_01F2
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
lea eax, [ebp-28]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrInit
add esp, 20
jmp .Lt_01C4
jmp .Lt_01C5
.Lt_01F4:
push 0
push -1
push 3
push offset Lt_01D7
push -1
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+24]
push dword ptr [eax+20]
call fb_LongintToStr
add esp, 8
push eax
push 24
push offset Lt_01F5
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
lea eax, [ebp-28]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
lea eax, [ebp-40]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrInit
add esp, 20
jmp .Lt_01C4
jmp .Lt_01C5
.Lt_01F8:
push 0
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax]
call HASTNODECLASSTOSTR
add esp, 4
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrInit
add esp, 20
jmp .Lt_01C4
jmp .Lt_01C5
.Lt_01C6:
mov eax, dword ptr [ebp-16]
add eax, 4294967293
cmp eax, 35
ja .Lt_01F8
mov eax, dword ptr [ebp-16]
jmp dword ptr [.LT_01F9+eax*4-12]
.LT_01F9:
.int .Lt_01C8
.int .Lt_01CC
.int .Lt_01F8
.int .Lt_01F8
.int .Lt_01EB
.int .Lt_01F8
.int .Lt_01E4
.int .Lt_01F8
.int .Lt_01F8
.int .Lt_01F8
.int .Lt_01F8
.int .Lt_01F8
.int .Lt_01F8
.int .Lt_01CD
.int .Lt_01D2
.int .Lt_01F8
.int .Lt_01DA
.int .Lt_01F8
.int .Lt_01E8
.int .Lt_01F8
.int .Lt_01F8
.int .Lt_01DE
.int .Lt_01F8
.int .Lt_01F8
.int .Lt_01F8
.int .Lt_01F8
.int .Lt_01F8
.int .Lt_01F8
.int .Lt_01F8
.int .Lt_01F8
.int .Lt_01F1
.int .Lt_01F8
.int .Lt_01F8
.int .Lt_01F8
.int .Lt_01F8
.int .Lt_01F4
.Lt_01C5:
.Lt_01C4:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
pop ebx
mov esp, ebp
pop ebp
ret
.size HASTNODETOSTR, .-HASTNODETOSTR
.balign 16
ASTDUMPTREEEX:
.type ASTDUMPTREEEX, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
.Lt_01FA:
mov eax, dword ptr [ebp+12]
cmp eax, 4
setle al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp+12]
cmp ebx, 76
setge bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
je .Lt_01FD
mov dword ptr [ebp+12], 40
.Lt_01FD:
.Lt_01FC:
cmp dword ptr [ebp+8], 0
jne .Lt_01FF
push 1
push 6
push offset Lt_01D4
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
jmp .Lt_01FB
.Lt_01FF:
.Lt_01FE:
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
push 0
push -1
push dword ptr [ebp+8]
call HASTNODETOSTR
add esp, 4
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
lea eax, [ebp-12]
push eax
call DBG_ASTOUTPUT
add esp, 16
inc dword ptr [ebp+20]
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+56], 0
je .Lt_0201
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+60], 0
je .Lt_0203
push -1
push 0
mov eax, dword ptr [ebp+12]
add eax, -2
push eax
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
push 0
push 4
push offset Lt_0204
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-24]
push eax
call DBG_ASTOUTPUT
add esp, 16
lea eax, [ebp-24]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0202
.Lt_0203:
push -1
push 0
mov eax, dword ptr [ebp+12]
add eax, -2
push eax
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
push 0
push 2
push offset Lt_0018
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-24]
push eax
call DBG_ASTOUTPUT
add esp, 16
lea eax, [ebp-24]
push eax
call fb_StrDelete
add esp, 4
.Lt_0202:
jmp .Lt_0200
.Lt_0201:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+60], 0
je .Lt_0207
push -1
push 0
mov eax, dword ptr [ebp+12]
add eax, -2
push eax
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
push 0
push 4
push offset Lt_0208
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-24]
push eax
call DBG_ASTOUTPUT
add esp, 16
lea eax, [ebp-24]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0200
.Lt_0207:
push -1
push 0
push 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
push 0
push 1
push offset Lt_0000
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-24]
push eax
call DBG_ASTOUTPUT
add esp, 16
lea eax, [ebp-24]
push eax
call fb_StrDelete
add esp, 4
.Lt_0200:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+56], 0
je .Lt_020C
push dword ptr [ebp+20]
push -1
mov eax, dword ptr [ebp+12]
add eax, -2
push eax
mov eax, dword ptr [ebp+8]
push dword ptr [eax+56]
call ASTDUMPTREEEX
add esp, 16
.Lt_020C:
.Lt_020B:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+60], 0
je .Lt_020E
push dword ptr [ebp+20]
push 1
mov eax, dword ptr [ebp+12]
add eax, 2
push eax
mov eax, dword ptr [ebp+8]
push dword ptr [eax+60]
call ASTDUMPTREEEX
add esp, 16
.Lt_020E:
.Lt_020D:
lea eax, [ebp-12]
push eax
call fb_StrDelete
add esp, 4
.Lt_01FB:
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTDUMPTREEEX, .-ASTDUMPTREEEX
	#fbc-1.01.0/src/compiler/ast-node-misc.bas' compilation took 0.04717597481794655 secs

.section .rodata
.balign 4
Lt_0000:	.ascii	"\0"
.balign 4
Lt_0018:	.ascii	"/\0"

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
.balign 4
	.lcomm	Lt_0074,32

.section .data
.balign 4
DBG_ASTNODECLASSNAMES:
.int Lt_0114
.int Lt_0115
.int Lt_0116
.int Lt_0117
.int Lt_0118
.int Lt_0119
.int Lt_011A
.int Lt_011B
.int Lt_011C
.int Lt_011D
.int Lt_011E
.int Lt_011F
.int Lt_0120
.int Lt_0121
.int Lt_0122
.int Lt_0123
.int Lt_0124
.int Lt_0125
.int Lt_0126
.int Lt_0127
.int Lt_0128
.int Lt_0129
.int Lt_012A
.int Lt_012B
.int Lt_012C
.int Lt_012D
.int Lt_012E
.int Lt_012F
.int Lt_0130
.int Lt_0131
.int Lt_0132
.int Lt_0133
.int Lt_0134
.int Lt_0135
.int Lt_0136
.int Lt_0137
.int Lt_0138
.int Lt_0139
.int Lt_013A
.int Lt_013B
.int Lt_013C
.int Lt_013D
.int Lt_013E
.int Lt_013F

.section .rodata
.balign 4
Lt_0114:	.ascii	"NOP\0"
.balign 4
Lt_0115:	.ascii	"LOAD\0"
.balign 4
Lt_0116:	.ascii	"ASSIGN\0"
.balign 4
Lt_0117:	.ascii	"BOP\0"
.balign 4
Lt_0118:	.ascii	"UOP\0"
.balign 4
Lt_0119:	.ascii	"CONV\0"
.balign 4
Lt_011A:	.ascii	"ADDROF\0"
.balign 4
Lt_011B:	.ascii	"BRANCH\0"
.balign 4
Lt_011C:	.ascii	"JMPTB\0"
.balign 4
Lt_011D:	.ascii	"CALL\0"
.balign 4
Lt_011E:	.ascii	"CALLCTOR\0"
.balign 4
Lt_011F:	.ascii	"STACK\0"
.balign 4
Lt_0120:	.ascii	"MEM\0"
.balign 4
Lt_0121:	.ascii	"LOOP\0"
.balign 4
Lt_0122:	.ascii	"COMP\0"
.balign 4
Lt_0123:	.ascii	"LINK\0"
.balign 4
Lt_0124:	.ascii	"CONST\0"
.balign 4
Lt_0125:	.ascii	"VAR\0"
.balign 4
Lt_0126:	.ascii	"IDX\0"
.balign 4
Lt_0127:	.ascii	"FIELD\0"
.balign 4
Lt_0128:	.ascii	"DEREF\0"
.balign 4
Lt_0129:	.ascii	"LABEL\0"
.balign 4
Lt_012A:	.ascii	"ARG\0"
.balign 4
Lt_012B:	.ascii	"OFFSET\0"
.balign 4
Lt_012C:	.ascii	"DECL\0"
.balign 4
Lt_012D:	.ascii	"NIDXARRAY\0"
.balign 4
Lt_012E:	.ascii	"IIF\0"
.balign 4
Lt_012F:	.ascii	"LIT\0"
.balign 4
Lt_0130:	.ascii	"ASM\0"
.balign 4
Lt_0131:	.ascii	"DATASTMT\0"
.balign 4
Lt_0132:	.ascii	"DBG\0"
.balign 4
Lt_0133:	.ascii	"BOUNDCHK\0"
.balign 4
Lt_0134:	.ascii	"PTRCHK\0"
.balign 4
Lt_0135:	.ascii	"SCOPEBEGIN\0"
.balign 4
Lt_0136:	.ascii	"SCOPEEND\0"
.balign 4
Lt_0137:	.ascii	"SCOPE_BREAK\0"
.balign 4
Lt_0138:	.ascii	"TYPEINI\0"
.balign 4
Lt_0139:	.ascii	"TYPEINI_PAD\0"
.balign 4
Lt_013A:	.ascii	"TYPEINI_ASSIGN\0"
.balign 4
Lt_013B:	.ascii	"TYPEINI_CTORCALL\0"
.balign 4
Lt_013C:	.ascii	"TYPEINI_CTORLIST\0"
.balign 4
Lt_013D:	.ascii	"TYPEINI_SCOPEINI\0"
.balign 4
Lt_013E:	.ascii	"TYPEINI_SCOPEEND\0"
.balign 4
Lt_013F:	.ascii	"PROC\0"

.section .data
.balign 4
DBG_ASTNODEOPNAMES:
.int Lt_0141
.int Lt_0142
.int Lt_0143
.int Lt_0144
.int Lt_0145
.int Lt_0146
.int Lt_0147
.int Lt_0148
.int Lt_0149
.int Lt_014A
.int Lt_014B
.int Lt_014C
.int Lt_014D
.int Lt_014E
.int Lt_014F
.int Lt_0150
.int Lt_0151
.int Lt_0152
.int Lt_0153
.int Lt_0154
.int Lt_0155
.int Lt_0156
.int Lt_011A
.int Lt_0157
.int Lt_0158
.int Lt_0159
.int Lt_015A
.int Lt_015B
.int Lt_015C
.int Lt_015D
.int Lt_015E
.int Lt_0018
.int Lt_015F
.int Lt_0160
.int Lt_0161
.int Lt_0162
.int Lt_0163
.int Lt_0164
.int Lt_0165
.int Lt_0166
.int Lt_0167
.int Lt_0168
.int Lt_0169
.int Lt_016A
.int Lt_016B
.int Lt_016C
.int Lt_016D
.int Lt_016E
.int Lt_016F
.int Lt_0170
.int Lt_0171
.int Lt_0172
.int Lt_0173
.int Lt_015C
.int Lt_0174
.int Lt_0175
.int Lt_0176
.int Lt_0177
.int Lt_0178
.int Lt_0179
.int Lt_017A
.int Lt_017B
.int Lt_017C
.int Lt_017D
.int Lt_017E
.int Lt_017F
.int Lt_0180
.int Lt_0181
.int Lt_0182
.int Lt_0183
.int Lt_0184
.int Lt_0185
.int Lt_0186
.int Lt_0187
.int Lt_0188
.int Lt_0189
.int Lt_0128
.int Lt_018A
.int Lt_018B
.int Lt_018C
.int Lt_018D
.int Lt_018E
.int Lt_018F
.int Lt_0190
.int Lt_0115
.int Lt_0191
.int Lt_0192
.int Lt_0193
.int Lt_0194
.int Lt_0195
.int Lt_0196
.int Lt_0197
.int Lt_0198
.int Lt_0199
.int Lt_019A
.int Lt_019B
.int Lt_019C
.int Lt_019D
.int Lt_011D
.int Lt_0129
.int Lt_019E
.int Lt_019F
.int Lt_01A0
.int Lt_01A1
.int Lt_01A2
.int Lt_01A3
.int Lt_01A4
.int Lt_01A5
.int Lt_01A6
.int Lt_01A7
.int Lt_01A8
.int Lt_01A9
.int Lt_01AA
.int Lt_01AB
.int Lt_01AC
.int Lt_01AD

.section .rodata
.balign 4
Lt_0141:	.ascii	"=\0"
.balign 4
Lt_0142:	.ascii	"+=\0"
.balign 4
Lt_0143:	.ascii	"-=\0"
.balign 4
Lt_0144:	.ascii	"*=\0"
.balign 4
Lt_0145:	.ascii	"/=\0"
.balign 4
Lt_0146:	.ascii	"\\=\0"
.balign 4
Lt_0147:	.ascii	"MOD=\0"
.balign 4
Lt_0148:	.ascii	"AND=\0"
.balign 4
Lt_0149:	.ascii	"OR=\0"
.balign 4
Lt_014A:	.ascii	"ANDALSO=\0"
.balign 4
Lt_014B:	.ascii	"ORELSE=\0"
.balign 4
Lt_014C:	.ascii	"XOR=\0"
.balign 4
Lt_014D:	.ascii	"EQV=\0"
.balign 4
Lt_014E:	.ascii	"IMP=\0"
.balign 4
Lt_014F:	.ascii	"SHL=\0"
.balign 4
Lt_0150:	.ascii	"SHR=\0"
.balign 4
Lt_0151:	.ascii	"^=\0"
.balign 4
Lt_0152:	.ascii	"&=\0"
.balign 4
Lt_0153:	.ascii	"new=\0"
.balign 4
Lt_0154:	.ascii	"new[]=\0"
.balign 4
Lt_0155:	.ascii	"del=\0"
.balign 4
Lt_0156:	.ascii	"del[]=\0"
.balign 4
Lt_0157:	.ascii	"PTRINDEX\0"
.balign 4
Lt_0158:	.ascii	"FOR\0"
.balign 4
Lt_0159:	.ascii	"STEP\0"
.balign 4
Lt_015A:	.ascii	"NEXT\0"
.balign 4
Lt_015B:	.ascii	"CAST\0"
.balign 4
Lt_015C:	.ascii	"+\0"
.balign 4
Lt_015D:	.ascii	"-\0"
.balign 4
Lt_015E:	.ascii	"*\0"
.balign 4
Lt_015F:	.ascii	"\\\0"
.balign 4
Lt_0160:	.ascii	"MOD\0"
.balign 4
Lt_0161:	.ascii	"AND\0"
.balign 4
Lt_0162:	.ascii	"OR\0"
.balign 4
Lt_0163:	.ascii	"ANDALSO\0"
.balign 4
Lt_0164:	.ascii	"ORELSE\0"
.balign 4
Lt_0165:	.ascii	"XOR\0"
.balign 4
Lt_0166:	.ascii	"EQV\0"
.balign 4
Lt_0167:	.ascii	"IMP\0"
.balign 4
Lt_0168:	.ascii	"SHL\0"
.balign 4
Lt_0169:	.ascii	"SHR\0"
.balign 4
Lt_016A:	.ascii	"^\0"
.balign 4
Lt_016B:	.ascii	"&\0"
.balign 4
Lt_016C:	.ascii	"==\0"
.balign 4
Lt_016D:	.ascii	">\0"
.balign 4
Lt_016E:	.ascii	"<\0"
.balign 4
Lt_016F:	.ascii	"<>\0"
.balign 4
Lt_0170:	.ascii	">=\0"
.balign 4
Lt_0171:	.ascii	"<=\0"
.balign 4
Lt_0172:	.ascii	"IS\0"
.balign 4
Lt_0173:	.ascii	"NOT\0"
.balign 4
Lt_0174:	.ascii	"NEG\0"
.balign 4
Lt_0175:	.ascii	"HADD\0"
.balign 4
Lt_0176:	.ascii	"ABS\0"
.balign 4
Lt_0177:	.ascii	"SGN\0"
.balign 4
Lt_0178:	.ascii	"SIN\0"
.balign 4
Lt_0179:	.ascii	"ASIN\0"
.balign 4
Lt_017A:	.ascii	"COS\0"
.balign 4
Lt_017B:	.ascii	"ACOS\0"
.balign 4
Lt_017C:	.ascii	"TAN\0"
.balign 4
Lt_017D:	.ascii	"ATAN\0"
.balign 4
Lt_017E:	.ascii	"ATAN2\0"
.balign 4
Lt_017F:	.ascii	"SQRT\0"
.balign 4
Lt_0180:	.ascii	"RSQRT\0"
.balign 4
Lt_0181:	.ascii	"RCP\0"
.balign 4
Lt_0182:	.ascii	"LOG\0"
.balign 4
Lt_0183:	.ascii	"EXP\0"
.balign 4
Lt_0184:	.ascii	"FLOOR\0"
.balign 4
Lt_0185:	.ascii	"FIX\0"
.balign 4
Lt_0186:	.ascii	"FRAC\0"
.balign 4
Lt_0187:	.ascii	"LEN\0"
.balign 4
Lt_0188:	.ascii	"CONVFD2FS\0"
.balign 4
Lt_0189:	.ascii	"SWZREP\0"
.balign 4
Lt_018A:	.ascii	"FLDDEREF\0"
.balign 4
Lt_018B:	.ascii	"NEW\0"
.balign 4
Lt_018C:	.ascii	"NEW_VEC\0"
.balign 4
Lt_018D:	.ascii	"DEL\0"
.balign 4
Lt_018E:	.ascii	"DEL_VEC\0"
.balign 4
Lt_018F:	.ascii	"TOINT\0"
.balign 4
Lt_0190:	.ascii	"TOFLT\0"
.balign 4
Lt_0191:	.ascii	"LOADRES\0"
.balign 4
Lt_0192:	.ascii	"SPILLREGS\0"
.balign 4
Lt_0193:	.ascii	"PUSH\0"
.balign 4
Lt_0194:	.ascii	"POP\0"
.balign 4
Lt_0195:	.ascii	"PUSHUDT\0"
.balign 4
Lt_0196:	.ascii	"STACKALIGN\0"
.balign 4
Lt_0197:	.ascii	"JEQ\0"
.balign 4
Lt_0198:	.ascii	"JGT\0"
.balign 4
Lt_0199:	.ascii	"JLT\0"
.balign 4
Lt_019A:	.ascii	"JNE\0"
.balign 4
Lt_019B:	.ascii	"JGE\0"
.balign 4
Lt_019C:	.ascii	"JLE\0"
.balign 4
Lt_019D:	.ascii	"JMP\0"
.balign 4
Lt_019E:	.ascii	"RET\0"
.balign 4
Lt_019F:	.ascii	"CALLFUNCT\0"
.balign 4
Lt_01A0:	.ascii	"CALLPTR\0"
.balign 4
Lt_01A1:	.ascii	"JUMPPTR\0"
.balign 4
Lt_01A2:	.ascii	"MEMMOVE\0"
.balign 4
Lt_01A3:	.ascii	"MEMSWAP\0"
.balign 4
Lt_01A4:	.ascii	"MEMCLEAR\0"
.balign 4
Lt_01A5:	.ascii	"STKCLEAR\0"
.balign 4
Lt_01A6:	.ascii	"DBG_LINEINI\0"
.balign 4
Lt_01A7:	.ascii	"DBG_LINEEND\0"
.balign 4
Lt_01A8:	.ascii	"DBG_SCOPEINI\0"
.balign 4
Lt_01A9:	.ascii	"BDG_SCOPEEND\0"
.balign 4
Lt_01AA:	.ascii	"LIT_COMMENT\0"
.balign 4
Lt_01AB:	.ascii	"LIT_ASM\0"
.balign 4
Lt_01AC:	.ascii	"TOSIGNED\0"
.balign 4
Lt_01AD:	.ascii	"TOUNSIGNED\0"
.balign 4
Lt_01B2:	.ascii	"OP:\0"
.balign 4
Lt_01BA:	.ascii	"CLASS:\0"
.balign 4
Lt_01C9:	.ascii	" =-= \0"
.balign 4
Lt_01D3:	.ascii	"VAR( \0"
.balign 4
Lt_01D4:	.ascii	"<NULL>\0"
.balign 4
Lt_01D7:	.ascii	" )\0"
.balign 4
Lt_01DB:	.ascii	"FIELD( \0"
.balign 4
Lt_01E1:	.ascii	"DECL( \0"
.balign 4
Lt_01E5:	.ascii	"CALL( \0"
.balign 4
Lt_01E9:	.ascii	"LABEL: \0"
.balign 4
Lt_01EC:	.ascii	"BRANCH: \0"
.balign 4
Lt_01ED:	.ascii	" \0"
.balign 4
Lt_01F2:	.ascii	"SCOPEBEGIN: \0"
.balign 4
Lt_01F5:	.ascii	"TYPEINI_ASSIGN( offset=\0"
.balign 4
Lt_0204:	.ascii	"/ \\\0"
.balign 4
Lt_0208:	.ascii	"  \\\0"

.section .ctors, "aw", @progbits
.int fb_ctor__astznodezmisc
