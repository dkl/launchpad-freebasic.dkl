	.intel_syntax noprefix

	#FreeBASIC-1.01.0-source/src/compiler/ast-node-typeini.bas' compilation started at 16:30:03 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl ASTTYPEINIBEGIN
ASTTYPEINIBEGIN:
.type ASTTYPEINIBEGIN, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_005F:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 36
call ASTNEWNODE
add esp, 12
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp-8]
mov ecx, dword ptr [ebp+20]
mov ebx, dword ptr [ebp+24]
mov dword ptr [eax+20], ecx
mov dword ptr [eax+24], ebx
mov dword ptr [ebp-12], 0
cmp dword ptr [ebp+16], 0
jne .Lt_0062
mov ecx, dword ptr [PARSER+104]
cmp dword ptr [ecx], 15
jne .Lt_0064
mov ecx, dword ptr [PARSER+104]
mov ebx, dword ptr [ecx+52]
mov ecx, dword ptr [ebx]
cmp ecx, 36
sete cl
shr ecx, 1
sbb ecx, ecx
not ecx
mov dword ptr [ebp-12], ecx
jmp .Lt_0063
.Lt_0064:
mov dword ptr [ebp-12], -1
.Lt_0063:
.Lt_0062:
.Lt_0061:
cmp dword ptr [ebp-12], 0
je .Lt_0066
push dword ptr [ebp-8]
mov ecx, dword ptr [ebp-8]
lea ebx, [ecx+40]
push ebx
call ASTTEMPSCOPEBEGIN
add esp, 8
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+36], eax
jmp .Lt_0065
.Lt_0066:
mov eax, dword ptr [ebp-8]
mov dword ptr [eax+36], 0
.Lt_0065:
.Lt_0060:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTTYPEINIBEGIN, .-ASTTYPEINIBEGIN
.balign 16

.globl ASTTYPEINIEND
ASTTYPEINIEND:
.type ASTTYPEINIEND, @function
push ebp
mov ebp, esp
sub esp, 28
push ebx
.Lt_0068:
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+60], 0
cmp dword ptr [ebp+12], 0
jne .Lt_006B
inc dword ptr [AST+140]
.Lt_006B:
.Lt_006A:
mov dword ptr [ebp-8], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-4], ebx
.Lt_006C:
cmp dword ptr [ebp-4], 0
je .Lt_006D
mov ebx, dword ptr [ebp-4]
cmp dword ptr [ebx], 38
jne .Lt_006F
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebx+56]
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp-12]
cmp dword ptr [eax], 36
jne .Lt_0071
dec dword ptr [AST+140]
mov eax, dword ptr [ebp-4]
mov ecx, dword ptr [eax+20]
mov ebx, dword ptr [eax+24]
mov dword ptr [ebp-24], ecx
mov dword ptr [ebp-20], ebx
mov ecx, dword ptr [ebp-4]
mov ebx, dword ptr [ecx+60]
mov dword ptr [ebp-16], ebx
push dword ptr [ebp-4]
call ASTDELNODE
add esp, 4
mov ebx, dword ptr [ebp-12]
mov ecx, dword ptr [ebx+56]
mov dword ptr [ebp-4], ecx
push dword ptr [ebp-12]
call ASTDELNODE
add esp, 4
cmp dword ptr [ebp-8], 0
je .Lt_0073
mov ecx, dword ptr [ebp-8]
mov ebx, dword ptr [ebp-4]
mov dword ptr [ecx+60], ebx
jmp .Lt_0072
.Lt_0073:
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebp-4]
mov dword ptr [ebx+56], ecx
.Lt_0072:
.Lt_0074:
mov ecx, dword ptr [ebp-4]
cmp dword ptr [ecx+60], 0
je .Lt_0075
mov ecx, dword ptr [ebp-4]
mov eax, dword ptr [ebp-24]
mov ebx, dword ptr [ebp-20]
add dword ptr [ecx+20], eax
adc dword ptr [ecx+24], ebx
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+60]
mov dword ptr [ebp-4], ebx
jmp .Lt_0074
.Lt_0075:
mov ebx, dword ptr [ebp-4]
mov ecx, dword ptr [ebp-24]
mov eax, dword ptr [ebp-20]
add dword ptr [ebx+20], ecx
adc dword ptr [ebx+24], eax
mov ecx, dword ptr [ebp-4]
mov eax, dword ptr [ebp-16]
mov dword ptr [ecx+60], eax
.Lt_0071:
.Lt_0070:
.Lt_006F:
.Lt_006E:
mov eax, dword ptr [ebp-4]
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-4]
mov ecx, dword ptr [eax+60]
mov dword ptr [ebp-4], ecx
jmp .Lt_006C
.Lt_006D:
mov ecx, dword ptr [ebp+8]
cmp dword ptr [ecx+36], 0
je .Lt_0077
mov ecx, dword ptr [ebp+8]
push dword ptr [ecx+40]
mov ecx, dword ptr [ebp+8]
push dword ptr [ecx+36]
call ASTTEMPSCOPEEND
add esp, 8
.Lt_0077:
.Lt_0076:
.Lt_0069:
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTTYPEINIEND, .-ASTTYPEINIEND
.balign 16

.globl ASTTYPEINIREMOVELASTNODE
ASTTYPEINIREMOVELASTNODE:
.type ASTTYPEINIREMOVELASTNODE, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_007E:
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-8], ebx
.Lt_0080:
cmp dword ptr [ebp-8], 0
je .Lt_0081
mov ebx, dword ptr [ebp-8]
cmp dword ptr [ebx+60], 0
jne .Lt_0083
cmp dword ptr [ebp-4], 0
je .Lt_0085
mov ebx, dword ptr [ebp-4]
mov dword ptr [ebx+60], 0
jmp .Lt_0084
.Lt_0085:
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+56], 0
.Lt_0084:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp-4]
mov dword ptr [ebx+60], eax
push dword ptr [ebp-8]
call ASTDELTREE
add esp, 4
jmp .Lt_0081
.Lt_0083:
.Lt_0082:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+60]
mov dword ptr [ebp-8], ebx
jmp .Lt_0080
.Lt_0081:
.Lt_007F:
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTTYPEINIREMOVELASTNODE, .-ASTTYPEINIREMOVELASTNODE
.balign 16

.globl ASTTYPEINIADDPAD
ASTTYPEINIADDPAD:
.type ASTTYPEINIADDPAD, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
push esi
mov dword ptr [ebp-4], 0
.Lt_0086:
push 0
push -2147483648
push 0
push 37
push dword ptr [ebp+8]
call HADDNODE
add esp, 20
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov ecx, dword ptr [ebp+12]
mov ebx, dword ptr [ebp+16]
mov dword ptr [eax+28], ecx
mov dword ptr [eax+32], ebx
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-8]
mov esi, dword ptr [ecx+20]
mov eax, dword ptr [ecx+24]
mov dword ptr [ebx+20], esi
mov dword ptr [ebx+24], eax
mov esi, dword ptr [ebp-8]
mov dword ptr [ebp-4], esi
.Lt_0087:
mov eax, dword ptr [ebp-4]
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTTYPEINIADDPAD, .-ASTTYPEINIADDPAD
.balign 16

.globl ASTTYPEINIADDASSIGN
ASTTYPEINIADDASSIGN:
.type ASTTYPEINIADDASSIGN, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
push esi
mov dword ptr [ebp-4], 0
.Lt_0088:
push dword ptr [ebp+24]
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push 38
push dword ptr [ebp+8]
call HADDNODE
add esp, 20
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+12]
mov dword ptr [eax+56], ebx
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebp+16]
mov dword ptr [ebx+12], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-8]
mov esi, dword ptr [eax+20]
mov ecx, dword ptr [eax+24]
mov dword ptr [ebx+20], esi
mov dword ptr [ebx+24], ecx
cmp dword ptr [ebp+16], 0
je .Lt_008B
mov esi, dword ptr [ebp+8]
mov ecx, dword ptr [ebp+16]
mov eax, dword ptr [ecx+36]
mov ebx, dword ptr [ecx+40]
add dword ptr [esi+20], eax
adc dword ptr [esi+24], ebx
.Lt_008B:
.Lt_008A:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0089:
mov eax, dword ptr [ebp-4]
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTTYPEINIADDASSIGN, .-ASTTYPEINIADDASSIGN
.balign 16

.globl ASTTYPEINIADDCTORCALL
ASTTYPEINIADDCTORCALL:
.type ASTTYPEINIADDCTORCALL, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
push esi
mov dword ptr [ebp-4], 0
.Lt_008C:
push dword ptr [ebp+24]
push dword ptr [ebp+20]
push dword ptr [ebp+12]
push 39
push dword ptr [ebp+8]
call HADDNODE
add esp, 20
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+12]
mov dword ptr [eax+12], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp-8]
mov esi, dword ptr [ebx+20]
mov ecx, dword ptr [ebx+24]
mov dword ptr [eax+20], esi
mov dword ptr [eax+24], ecx
mov esi, dword ptr [ebp-8]
mov ecx, dword ptr [ebp+16]
mov dword ptr [esi+56], ecx
mov ecx, dword ptr [ebp+8]
mov esi, dword ptr [ebp+12]
mov ebx, dword ptr [esi+36]
mov eax, dword ptr [esi+40]
add dword ptr [ecx+20], ebx
adc dword ptr [ecx+24], eax
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ebx
.Lt_008D:
mov eax, dword ptr [ebp-4]
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTTYPEINIADDCTORCALL, .-ASTTYPEINIADDCTORCALL
.balign 16

.globl ASTTYPEINIADDCTORLIST
ASTTYPEINIADDCTORLIST:
.type ASTTYPEINIADDCTORLIST, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
push esi
mov dword ptr [ebp-4], 0
.Lt_008E:
push dword ptr [ebp+28]
push dword ptr [ebp+24]
push dword ptr [ebp+12]
push 40
push dword ptr [ebp+8]
call HADDNODE
add esp, 20
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+12]
mov dword ptr [eax+12], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp-8]
mov esi, dword ptr [ebx+20]
mov ecx, dword ptr [ebx+24]
mov dword ptr [eax+20], esi
mov dword ptr [eax+24], ecx
mov esi, dword ptr [ebp-8]
mov eax, dword ptr [ebp+16]
mov ecx, dword ptr [ebp+20]
mov dword ptr [esi+28], eax
mov dword ptr [esi+32], ecx
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [ebp+12]
mov ebx, dword ptr [ebp+16]
mov esi, dword ptr [ebp+20]
push dword ptr [ecx+40]
push dword ptr [ecx+36]
push esi
push ebx
push eax
mov eax, [esp+4]
mul dword ptr [esp+12]
xchg eax, [esp+4]
imul eax, [esp+16]
add eax, edx
mov edx, [esp+8]
imul edx, [esp+12]
add edx, eax
mov [esp+8], edx
pop eax
pop ebx
pop esi
add esp, 8
add dword ptr [eax+20], ebx
adc dword ptr [eax+24], esi
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ebx
.Lt_008F:
mov eax, dword ptr [ebp-4]
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTTYPEINIADDCTORLIST, .-ASTTYPEINIADDCTORLIST
.balign 16

.globl ASTTYPEINISCOPEBEGIN
ASTTYPEINISCOPEBEGIN:
.type ASTTYPEINISCOPEBEGIN, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0090:
push 0
push -2147483648
push 0
push 41
push dword ptr [ebp+8]
call HADDNODE
add esp, 20
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+12]
mov dword ptr [eax+12], ebx
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ebx
.Lt_0091:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTTYPEINISCOPEBEGIN, .-ASTTYPEINISCOPEBEGIN
.balign 16

.globl ASTTYPEINISCOPEEND
ASTTYPEINISCOPEEND:
.type ASTTYPEINISCOPEEND, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0092:
push 0
push -2147483648
push 0
push 42
push dword ptr [ebp+8]
call HADDNODE
add esp, 20
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+12]
mov dword ptr [eax+12], ebx
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ebx
.Lt_0093:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTTYPEINISCOPEEND, .-ASTTYPEINISCOPEEND
.balign 16

.globl ASTTYPEINICOPYELEMENTS
ASTTYPEINICOPYELEMENTS:
.type ASTTYPEINICOPYELEMENTS, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0094:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp+12], ebx
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+60]
mov dword ptr [ebp+12], eax
mov dword ptr [ebp-4], 0
.Lt_0096:
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax], 38
jne .Lt_0097
mov eax, dword ptr [ebp+16]
cmp dword ptr [ebp-4], eax
jl .Lt_0099
push 0
push -2147483648
mov eax, dword ptr [ebp+12]
push dword ptr [eax+12]
mov eax, dword ptr [ebp+12]
push dword ptr [eax+56]
call ASTCLONETREE
add esp, 4
push eax
push dword ptr [ebp+8]
call ASTTYPEINIADDASSIGN
add esp, 20
.Lt_0099:
.Lt_0098:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+60]
mov dword ptr [ebp+12], ebx
inc dword ptr [ebp-4]
jmp .Lt_0096
.Lt_0097:
.Lt_0095:
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTTYPEINICOPYELEMENTS, .-ASTTYPEINICOPYELEMENTS
.balign 16

.globl ASTTYPEINIREPLACEELEMENT
ASTTYPEINIREPLACEELEMENT:
.type ASTTYPEINIREPLACEELEMENT, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_009A:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp+8], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+60]
mov dword ptr [ebp+8], eax
mov dword ptr [ebp-4], 0
.Lt_009C:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 38
jne .Lt_009D
mov eax, dword ptr [ebp+12]
cmp dword ptr [ebp-4], eax
jne .Lt_009F
mov eax, dword ptr [ebp+8]
push dword ptr [eax+56]
call ASTDELTREE
add esp, 4
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+16]
mov dword ptr [eax+56], ebx
jmp .Lt_009B
.Lt_009F:
.Lt_009E:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+60]
mov dword ptr [ebp+8], eax
inc dword ptr [ebp-4]
jmp .Lt_009C
.Lt_009D:
.Lt_009B:
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTTYPEINIREPLACEELEMENT, .-ASTTYPEINIREPLACEELEMENT
.balign 16

.globl _Z15ASTTYPEINIFLUSHP7ASTNODES0_ii
_Z15ASTTYPEINIFLUSHP7ASTNODES0_ii:
.type _Z15ASTTYPEINIFLUSHP7ASTNODES0_ii, @function
push ebp
mov ebp, esp
sub esp, 28
push ebx
mov dword ptr [ebp-4], 0
.Lt_00A4:
cmp dword ptr [ebp+16], 0
je .Lt_00A7
dec dword ptr [AST+140]
.Lt_00A7:
.Lt_00A6:
mov dword ptr [ebp-16], 0
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-8], ebx
cmp dword ptr [ebp-8], 0
je .Lt_00A9
mov ebx, dword ptr [ebp-8]
cmp dword ptr [ebx+60], 0
je .Lt_00AB
push dword ptr [ebp+8]
call ASTHASSIDEFX
add esp, 4
test eax, eax
je .Lt_00AD
lea eax, [ebp+8]
push eax
call ASTREMSIDEFX
add esp, 4
mov dword ptr [ebp-16], eax
.Lt_00AD:
.Lt_00AC:
.Lt_00AB:
.Lt_00AA:
.Lt_00A9:
.Lt_00A8:
.Lt_00AE:
cmp dword ptr [ebp-8], 0
je .Lt_00AF
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-24], ebx
cmp dword ptr [ebp-24], 38
jne .Lt_00B2
.Lt_00B3:
mov ebx, dword ptr [ebp-8]
cmp dword ptr [ebx+12], 0
je .Lt_00B5
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx+12]
cmp dword ptr [eax], 12
jne .Lt_00B7
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+12]
cmp dword ptr [ebx+108], 0
jle .Lt_00B9
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx+12]
cmp dword ptr [eax+104], 0
jne .Lt_00BB
push 0
mov eax, dword ptr [ebp-8]
push dword ptr [eax+8]
mov eax, dword ptr [ebp-8]
push dword ptr [eax+4]
mov eax, dword ptr [ebp-8]
push dword ptr [eax+24]
push dword ptr [eax+20]
push dword ptr [ebp+8]
call ASTCLONETREE
add esp, 4
push eax
call _Z19ASTBUILDDEREFADDROFP7ASTNODExiP8FBSYMBOLS2_
add esp, 24
mov dword ptr [ebp-20], eax
push 0
push 0
push 0
push 7
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+12]
mov eax, dword ptr [ebx+24]
and eax, 480
je .Lt_00BC
mov dword ptr [ebp-28], 22
jmp .Lt_00C4
.Lt_00BC:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+12]
mov eax, dword ptr [ebx+24]
and eax, 31
mov dword ptr [ebp-28], eax
.Lt_00C4:
mov eax, dword ptr [ebp-28]
imul eax, 28
mov ecx, dword ptr [SYMB_DTYPETB+eax+4]
mov ebx, ecx
sar ebx, 31
push ebx
push ecx
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp-20]
push 106
call ASTNEWMEM
add esp, 20
mov dword ptr [ebp-20], eax
push -1
push dword ptr [ebp-20]
push dword ptr [ebp-16]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-16], eax
.Lt_00BB:
.Lt_00BA:
.Lt_00B9:
.Lt_00B8:
.Lt_00B7:
.Lt_00B6:
.Lt_00B5:
.Lt_00B4:
mov eax, dword ptr [ebp-8]
push dword ptr [eax+12]
mov eax, dword ptr [ebp-8]
push dword ptr [eax+8]
mov eax, dword ptr [ebp-8]
push dword ptr [eax+4]
mov eax, dword ptr [ebp-8]
push dword ptr [eax+24]
push dword ptr [eax+20]
push dword ptr [ebp+8]
call ASTCLONETREE
add esp, 4
push eax
call _Z19ASTBUILDDEREFADDROFP7ASTNODExiP8FBSYMBOLS2_
add esp, 24
mov dword ptr [ebp-20], eax
mov eax, dword ptr [ebp+20]
or eax, 16
mov ecx, eax
push ecx
mov ecx, dword ptr [ebp-8]
push dword ptr [ecx+56]
push dword ptr [ebp-20]
call ASTNEWASSIGN
add esp, 12
mov dword ptr [ebp-20], eax
push -1
push dword ptr [ebp-20]
push dword ptr [ebp-16]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-16], eax
jmp .Lt_00B0
.Lt_00B2:
cmp dword ptr [ebp-24], 37
jne .Lt_00BE
.Lt_00BF:
push 0
mov eax, dword ptr [ebp-8]
push dword ptr [eax+8]
mov eax, dword ptr [ebp-8]
push dword ptr [eax+4]
mov eax, dword ptr [ebp-8]
push dword ptr [eax+24]
push dword ptr [eax+20]
push dword ptr [ebp+8]
call ASTCLONETREE
add esp, 4
push eax
call _Z19ASTBUILDDEREFADDROFP7ASTNODExiP8FBSYMBOLS2_
add esp, 24
mov dword ptr [ebp-20], eax
push 0
push 0
push 0
push 7
mov eax, dword ptr [ebp-8]
push dword ptr [eax+32]
push dword ptr [eax+28]
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp-20]
push 106
call ASTNEWMEM
add esp, 20
mov dword ptr [ebp-20], eax
push -1
push dword ptr [ebp-20]
push dword ptr [ebp-16]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-16], eax
jmp .Lt_00B0
.Lt_00BE:
cmp dword ptr [ebp-24], 39
jne .Lt_00C0
.Lt_00C1:
mov eax, dword ptr [ebp-8]
push dword ptr [eax+12]
mov eax, dword ptr [ebp-8]
push dword ptr [eax+8]
mov eax, dword ptr [ebp-8]
push dword ptr [eax+4]
mov eax, dword ptr [ebp-8]
push dword ptr [eax+24]
push dword ptr [eax+20]
push dword ptr [ebp+8]
call ASTCLONETREE
add esp, 4
push eax
call _Z19ASTBUILDDEREFADDROFP7ASTNODExiP8FBSYMBOLS2_
add esp, 24
mov dword ptr [ebp-20], eax
push dword ptr [ebp-20]
mov eax, dword ptr [ebp-8]
push dword ptr [eax+56]
call ASTPATCHCTORCALL
add esp, 8
mov dword ptr [ebp-20], eax
push -1
push dword ptr [ebp-20]
push dword ptr [ebp-16]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-16], eax
jmp .Lt_00B0
.Lt_00C0:
cmp dword ptr [ebp-24], 40
jne .Lt_00C2
.Lt_00C3:
push dword ptr [ebp+8]
push dword ptr [ebp-8]
push dword ptr [ebp-16]
call HCALLCTORLIST
add esp, 12
mov dword ptr [ebp-16], eax
.Lt_00C2:
.Lt_00B0:
mov eax, dword ptr [ebp-8]
mov ecx, dword ptr [eax+60]
mov dword ptr [ebp-12], ecx
push dword ptr [ebp-8]
call ASTDELNODE
add esp, 4
mov ecx, dword ptr [ebp-12]
mov dword ptr [ebp-8], ecx
jmp .Lt_00AE
.Lt_00AF:
push dword ptr [ebp+12]
call ASTDELNODE
add esp, 4
push dword ptr [ebp+8]
call ASTDELTREE
add esp, 4
mov ecx, dword ptr [ebp-16]
mov dword ptr [ebp-4], ecx
.Lt_00A5:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size _Z15ASTTYPEINIFLUSHP7ASTNODES0_ii, .-_Z15ASTTYPEINIFLUSHP7ASTNODES0_ii
.balign 16

.globl _Z15ASTTYPEINIFLUSHP8FBSYMBOLP7ASTNODEii
_Z15ASTTYPEINIFLUSHP8FBSYMBOLP7ASTNODEii:
.type _Z15ASTTYPEINIFLUSHP8FBSYMBOLP7ASTNODEii, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_00C5:
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp+8]
call ASTNEWVAR
add esp, 20
push eax
call _Z15ASTTYPEINIFLUSHP7ASTNODES0_ii
add esp, 16
mov dword ptr [ebp-4], eax
.Lt_00C6:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size _Z15ASTTYPEINIFLUSHP8FBSYMBOLP7ASTNODEii, .-_Z15ASTTYPEINIFLUSHP8FBSYMBOLP7ASTNODEii
.balign 16

.globl ASTLOADSTATICINITIALIZER
ASTLOADSTATICINITIALIZER:
.type ASTLOADSTATICINITIALIZER, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
.Lt_00DF:
push dword ptr [ebp+12]
call dword ptr [IR+184]
add esp, 4
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-4], ebx
.Lt_00E1:
cmp dword ptr [ebp-4], 0
je .Lt_00E2
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebx+60]
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-12], ebx
jmp .Lt_00E4
.Lt_00E6:
mov ebx, dword ptr [ebp-4]
push dword ptr [ebx+32]
push dword ptr [ebx+28]
call dword ptr [IR+212]
add esp, 8
jmp .Lt_00E3
.Lt_00E7:
call dword ptr [IR+216]
jmp .Lt_00E3
.Lt_00E8:
call dword ptr [IR+220]
jmp .Lt_00E3
.Lt_00E9:
push dword ptr [ebp+12]
push dword ptr [ebp-4]
call HFLUSHEXPRSTATIC
add esp, 8
jmp .Lt_00E3
.Lt_00E4:
mov ebx, dword ptr [ebp-12]
add ebx, 4294967259
cmp ebx, 5
ja .Lt_00E9
mov ebx, dword ptr [ebp-12]
jmp dword ptr [.LT_00EA+ebx*4-148]
.LT_00EA:
.int .Lt_00E6
.int .Lt_00E9
.int .Lt_00E9
.int .Lt_00E9
.int .Lt_00E7
.int .Lt_00E8
.Lt_00E3:
push dword ptr [ebp-4]
call ASTDELNODE
add esp, 4
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ebx
jmp .Lt_00E1
.Lt_00E2:
push dword ptr [ebp+12]
call dword ptr [IR+188]
add esp, 4
push dword ptr [ebp+8]
call ASTDELNODE
add esp, 4
.Lt_00E0:
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTLOADSTATICINITIALIZER, .-ASTLOADSTATICINITIALIZER
.balign 16

.globl ASTTYPEINIISCONST
ASTTYPEINIISCONST:
.type ASTTYPEINIISCONST, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_010A:
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-8], ebx
.Lt_010C:
cmp dword ptr [ebp-8], 0
je .Lt_010D
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx]
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 38
jne .Lt_0110
.Lt_0111:
push dword ptr [ebp-8]
call HEXPRISCONST
add esp, 4
test eax, eax
jne .Lt_0113
jmp .Lt_010B
.Lt_0113:
.Lt_0112:
jmp .Lt_010E
.Lt_0110:
cmp dword ptr [ebp-12], 39
je .Lt_0115
.Lt_0116:
cmp dword ptr [ebp-12], 40
jne .Lt_0114
.Lt_0115:
jmp .Lt_010B
.Lt_0114:
.Lt_010E:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+60]
mov dword ptr [ebp-8], ebx
jmp .Lt_010C
.Lt_010D:
mov dword ptr [ebp-4], -1
.Lt_010B:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTTYPEINIISCONST, .-ASTTYPEINIISCONST
.balign 16

.globl ASTTYPEINIUSESLOCALS
ASTTYPEINIUSESLOCALS:
.type ASTTYPEINIUSESLOCALS, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_0117:
cmp dword ptr [ebp+8], 0
jne .Lt_011A
mov dword ptr [ebp-4], 0
jmp .Lt_0118
.Lt_011A:
.Lt_0119:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 17
jne .Lt_011C
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+12]
mov eax, dword ptr [ebx+4]
and eax, 128
test eax, eax
setne al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebx+12]
mov ebx, dword ptr [ebp+12]
and ebx, dword ptr [ecx+4]
test ebx, ebx
sete bl
shr ebx, 1
sbb ebx, ebx
and eax, ebx
je .Lt_011E
mov dword ptr [ebp-4], -1
jmp .Lt_0118
.Lt_011E:
.Lt_011D:
.Lt_011C:
.Lt_011B:
push dword ptr [ebp+12]
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+56]
call ASTTYPEINIUSESLOCALS
add esp, 8
push dword ptr [ebp+12]
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+60]
mov ebx, eax
call ASTTYPEINIUSESLOCALS
add esp, 8
or ebx, eax
mov dword ptr [ebp-4], ebx
.Lt_0118:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTTYPEINIUSESLOCALS, .-ASTTYPEINIUSESLOCALS
.balign 16

.globl ASTTYPEINIUPDATE
ASTTYPEINIUPDATE:
.type ASTTYPEINIUPDATE, @function
push ebp
mov ebp, esp
sub esp, 80
mov dword ptr [ebp-4], 0
.Lt_0129:
cmp dword ptr [AST+140], 0
jg .Lt_012C
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
jmp .Lt_012A
.Lt_012C:
.Lt_012B:
mov dword ptr [ebp-80], 0
mov dword ptr [ebp-76], -2147483648
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-68], 0
mov dword ptr [ebp-64], 0
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-24], eax
lea eax, [ebp-80]
push eax
push dword ptr [ebp+8]
call HWALK
add esp, 8
mov dword ptr [ebp-8], eax
push 0
push dword ptr [ebp-24]
push dword ptr [ebp-8]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-4], eax
.Lt_012A:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size ASTTYPEINIUPDATE, .-ASTTYPEINIUPDATE
.balign 16

.globl ASTTYPEINICLONE
ASTTYPEINICLONE:
.type ASTTYPEINICLONE, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_012D:
push dword ptr [ebp+8]
call ASTCLONETREE
add esp, 4
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+36], 0
je .Lt_0130
push dword ptr [ebp-8]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+36]
call ASTTEMPSCOPECLONE
add esp, 8
.Lt_0130:
.Lt_012F:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_012E:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size ASTTYPEINICLONE, .-ASTTYPEINICLONE
.balign 16

.globl ASTTYPEINITRYREMOVE
ASTTYPEINITRYREMOVE:
.type ASTTYPEINITRYREMOVE, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
push esi
mov dword ptr [ebp-4], 0
.Lt_0131:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
cmp dword ptr [ebx+60], 0
je .Lt_0134
jmp .Lt_0132
.Lt_0134:
.Lt_0133:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+56]
cmp dword ptr [eax], 38
je .Lt_0136
jmp .Lt_0132
.Lt_0136:
.Lt_0135:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 511
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+56]
mov eax, dword ptr [ecx+4]
and eax, 511
cmp ebx, eax
setne bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [ebp+8]
mov esi, dword ptr [ecx+56]
mov ecx, dword ptr [eax+8]
cmp ecx, dword ptr [esi+8]
setne al
shr eax, 1
sbb eax, eax
or ebx, eax
je .Lt_0138
jmp .Lt_0132
.Lt_0138:
.Lt_0137:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov eax, dword ptr [ebx+56]
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp+8]
push dword ptr [eax+56]
call ASTDELNODE
add esp, 4
push dword ptr [ebp+8]
call ASTDELNODE
add esp, 4
dec dword ptr [AST+140]
.Lt_0132:
mov eax, dword ptr [ebp-4]
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTTYPEINITRYREMOVE, .-ASTTYPEINITRYREMOVE
.balign 16

.globl ASTTYPEINIDELETE
ASTTYPEINIDELETE:
.type ASTTYPEINIDELETE, @function
push ebp
mov ebp, esp
.Lt_013B:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+36], 0
je .Lt_013E
mov eax, dword ptr [ebp+8]
push dword ptr [eax+36]
call ASTTEMPSCOPEDELETE
add esp, 4
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+36], 0
.Lt_013E:
.Lt_013D:
push dword ptr [ebp+8]
call ASTDELTREE
add esp, 4
.Lt_013C:
mov esp, ebp
pop ebp
ret
.size ASTTYPEINIDELETE, .-ASTTYPEINIDELETE
.balign 16
fb_ctor__astznodeztypeini:
.type fb_ctor__astznodeztypeini, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__astznodeztypeini, .-fb_ctor__astznodeztypeini
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
HADDNODE:
.type HADDNODE, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0078:
mov eax, dword ptr [ebp+20]
cmp eax, -2147483648
sete al
shr eax, 1
sbb eax, eax
cmp dword ptr [ebp+16], 0
setne bl
shr ebx, 1
sbb ebx, ebx
and eax, ebx
je .Lt_007B
mov ebx, dword ptr [ebp+16]
mov eax, dword ptr [ebx+24]
mov dword ptr [ebp+20], eax
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+28]
mov dword ptr [ebp+24], ebx
.Lt_007B:
.Lt_007A:
push dword ptr [ebp+24]
push dword ptr [ebp+20]
push dword ptr [ebp+12]
call ASTNEWNODE
add esp, 12
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+60], 0
je .Lt_007D
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+60]
mov eax, dword ptr [ebp-8]
mov dword ptr [ebx+60], eax
jmp .Lt_007C
.Lt_007D:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-8]
mov dword ptr [eax+56], ebx
.Lt_007C:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp-8]
mov dword ptr [ebx+60], eax
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0079:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HADDNODE, .-HADDNODE
.balign 16
HCALLCTORLIST:
.type HCALLCTORLIST, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
mov dword ptr [ebp-4], 0
.Lt_00A0:
mov eax, dword ptr [ebp+12]
push dword ptr [eax+12]
mov eax, dword ptr [ebp+12]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+12]
push dword ptr [eax+4]
mov eax, dword ptr [ebp+12]
push dword ptr [eax+24]
push dword ptr [eax+20]
push dword ptr [ebp+16]
call ASTCLONETREE
add esp, 4
push eax
call _Z19ASTBUILDDEREFADDROFP7ASTNODExiP8FBSYMBOLS2_
add esp, 24
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax+32], 0
jl .Lt_00A3
jg .Lt_0141
cmp dword ptr [eax+28], 1
jbe .Lt_00A3
.Lt_0141:
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-20], 0
push 0
push 7
call SYMBADDTEMPVAR
add esp, 8
mov dword ptr [ebp-12], eax
push 4
push 0
call SYMBADDLABEL
add esp, 8
mov dword ptr [ebp-16], eax
mov eax, dword ptr [ebp+12]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 31
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax+4]
and ecx, 480
add ecx, 32
or ebx, ecx
mov ecx, dword ptr [ebp+12]
mov eax, dword ptr [ecx+4]
and eax, 261632
sal eax, 1
or ebx, eax
push ebx
call SYMBADDTEMPVAR
add esp, 8
mov dword ptr [ebp-20], eax
push -1
push 64
push dword ptr [ebp-8]
call ASTNEWADDROF
add esp, 4
push eax
push dword ptr [ebp-20]
call _Z17ASTBUILDVARASSIGNP8FBSYMBOLP7ASTNODEi
add esp, 12
push eax
push dword ptr [ebp+8]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp+8], eax
push -1
push 0
push dword ptr [ebp-16]
push dword ptr [ebp-12]
push dword ptr [ebp+8]
call ASTBUILDFORBEGIN
add esp, 20
mov dword ptr [ebp+8], eax
push -1
push dword ptr [ebp-20]
call ASTBUILDVARDEREF
add esp, 4
push eax
mov eax, dword ptr [ebp+12]
push dword ptr [eax+8]
call ASTBUILDCTORCALL
add esp, 8
push eax
push dword ptr [ebp+8]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp+8], eax
push -1
push 1
push dword ptr [ebp-20]
call ASTBUILDVARINC
add esp, 8
push eax
push dword ptr [ebp+8]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp+8], eax
push 0
push 7
mov eax, dword ptr [ebp+12]
push dword ptr [eax+32]
push dword ptr [eax+28]
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp-16]
push dword ptr [ebp-12]
push dword ptr [ebp+8]
call ASTBUILDFOREND
add esp, 16
mov dword ptr [ebp+8], eax
jmp .Lt_00A2
.Lt_00A3:
push -1
push dword ptr [ebp-8]
mov eax, dword ptr [ebp+12]
push dword ptr [eax+8]
call ASTBUILDCTORCALL
add esp, 8
push eax
push dword ptr [ebp+8]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp+8], eax
.Lt_00A2:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
.Lt_00A1:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HCALLCTORLIST, .-HCALLCTORLIST
.balign 16
HFLUSHEXPRSTATIC:
.type HFLUSHEXPRSTATIC, @function
push ebp
mov ebp, esp
sub esp, 36
push ebx
mov dword ptr [ebp-4], 0
.Lt_00C7:
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-8], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+12]
mov dword ptr [ebp-20], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+4]
and ebx, 511
mov dword ptr [ebp-12], ebx
mov ebx, dword ptr [ebp-20]
mov eax, dword ptr [ebx+24]
and eax, 511
mov dword ptr [ebp-16], eax
mov dword ptr [ebp-24], 0
cmp dword ptr [ebp-12], 3
je .Lt_00CB
.Lt_00CC:
cmp dword ptr [ebp-12], 6
jne .Lt_00CA
.Lt_00CB:
push dword ptr [ebp-8]
call ASTGETSTRLITSYMBOL
add esp, 4
mov dword ptr [ebp-24], eax
.Lt_00CA:
.Lt_00C9:
cmp dword ptr [ebp-24], 0
jne .Lt_00CE
mov eax, dword ptr [ebp-8]
cmp dword ptr [eax], 23
jne .Lt_00D0
mov eax, dword ptr [ebp-8]
push dword ptr [eax+24]
push dword ptr [eax+20]
mov eax, dword ptr [ebp-8]
push dword ptr [eax+12]
push dword ptr [ebp-20]
call dword ptr [IR+200]
add esp, 16
jmp .Lt_00CF
.Lt_00D0:
mov eax, dword ptr [ebp-16]
cmp dword ptr [ebp-12], eax
je .Lt_00D2
push 0
push 8
push dword ptr [ebp-8]
mov eax, dword ptr [ebp-20]
push dword ptr [eax+28]
mov eax, dword ptr [ebp-20]
push dword ptr [eax+24]
call ASTNEWCONV
add esp, 20
mov dword ptr [ebp-8], eax
.Lt_00D2:
.Lt_00D1:
mov eax, dword ptr [ebp-16]
and eax, 480
je .Lt_00D3
mov dword ptr [ebp-28], 22
jmp .Lt_0142
.Lt_00D3:
mov eax, dword ptr [ebp-16]
and eax, 31
mov dword ptr [ebp-28], eax
.Lt_0142:
mov eax, dword ptr [ebp-28]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax], 1
jne .Lt_00D6
mov eax, dword ptr [ebp-8]
push dword ptr [eax+24]
push dword ptr [eax+20]
push dword ptr [ebp-20]
call dword ptr [IR+196]
add esp, 12
jmp .Lt_00D5
.Lt_00D6:
mov eax, dword ptr [ebp-8]
push dword ptr [eax+24]
push dword ptr [eax+20]
push dword ptr [ebp-20]
call dword ptr [IR+192]
add esp, 12
.Lt_00D5:
.Lt_00CF:
jmp .Lt_00CD
.Lt_00CE:
cmp dword ptr [ebp-16], 6
je .Lt_00D8
cmp dword ptr [ebp-12], 6
je .Lt_00DA
mov eax, dword ptr [ebp-24]
mov ecx, dword ptr [eax+36]
mov ebx, dword ptr [eax+40]
add ecx, 4294967295
adc ebx, 4294967295
push ebx
push ecx
mov ecx, dword ptr [ebp-24]
push dword ptr [ecx+52]
mov ecx, dword ptr [ebp-20]
mov eax, dword ptr [ecx+36]
mov ebx, dword ptr [ecx+40]
add eax, 4294967295
adc ebx, 4294967295
push ebx
push eax
call dword ptr [IR+204]
add esp, 20
jmp .Lt_00D9
.Lt_00DA:
mov ebx, dword ptr [SYMB_DTYPETB+172]
mov eax, ebx
sar eax, 31
push eax
push ebx
mov ebx, dword ptr [ebp-24]
push dword ptr [ebx+40]
push dword ptr [ebx+36]
call __divdi3
add esp, 16
add eax, 4294967295
adc edx, 4294967295
push edx
push eax
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 0
push -1
mov eax, dword ptr [ebp-24]
push dword ptr [eax+52]
call fb_WstrToStr
add esp, 4
push eax
push -1
lea eax, [ebp-36]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-36]
mov eax, dword ptr [ebp-20]
mov ebx, dword ptr [eax+36]
mov edx, dword ptr [eax+40]
add ebx, 4294967295
adc edx, 4294967295
push edx
push ebx
call dword ptr [IR+204]
add esp, 20
lea ebx, [ebp-36]
push ebx
call fb_StrDelete
add esp, 4
.Lt_00D9:
jmp .Lt_00D7
.Lt_00D8:
cmp dword ptr [ebp-12], 6
je .Lt_00DD
mov ebx, dword ptr [ebp-24]
mov eax, dword ptr [ebx+36]
mov edx, dword ptr [ebx+40]
add eax, 4294967295
adc edx, 4294967295
push edx
push eax
mov eax, dword ptr [ebp-24]
push dword ptr [eax+52]
call fb_StrToWstr
add esp, 4
mov dword ptr [ebp-28], eax
push dword ptr [ebp-28]
mov edx, dword ptr [SYMB_DTYPETB+172]
mov eax, edx
sar eax, 31
push eax
push edx
mov edx, dword ptr [ebp-20]
push dword ptr [edx+40]
push dword ptr [edx+36]
call __divdi3
add esp, 16
add eax, 4294967295
adc edx, 4294967295
push edx
push eax
call dword ptr [IR+208]
add esp, 20
push dword ptr [ebp-28]
call fb_WstrDelete
add esp, 4
jmp .Lt_00DC
.Lt_00DD:
mov edx, dword ptr [SYMB_DTYPETB+172]
mov eax, edx
sar eax, 31
push eax
push edx
mov edx, dword ptr [ebp-24]
push dword ptr [edx+40]
push dword ptr [edx+36]
call __divdi3
add esp, 16
add eax, 4294967295
adc edx, 4294967295
push edx
push eax
mov eax, dword ptr [ebp-24]
push dword ptr [eax+52]
mov edx, dword ptr [SYMB_DTYPETB+172]
mov eax, edx
sar eax, 31
push eax
push edx
mov edx, dword ptr [ebp-20]
push dword ptr [edx+40]
push dword ptr [edx+36]
call __divdi3
add esp, 16
add eax, 4294967295
adc edx, 4294967295
push edx
push eax
call dword ptr [IR+208]
add esp, 20
.Lt_00DC:
.Lt_00D7:
.Lt_00CD:
mov eax, dword ptr [ebp+8]
push dword ptr [eax+56]
call ASTDELTREE
add esp, 4
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+56], 0
mov dword ptr [ebp-4], -1
.Lt_00C8:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HFLUSHEXPRSTATIC, .-HFLUSHEXPRSTATIC
.balign 16
HEXPRISCONST:
.type HEXPRISCONST, @function
push ebp
mov ebp, esp
sub esp, 40
push ebx
mov dword ptr [ebp-4], 0
.Lt_00EB:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+12]
mov dword ptr [ebp-8], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+56]
mov dword ptr [ebp-16], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+24]
and ebx, 511
mov dword ptr [ebp-20], ebx
mov ebx, dword ptr [ebp-16]
mov eax, dword ptr [ebx+4]
and eax, 511
mov dword ptr [ebp-24], eax
mov dword ptr [ebp-12], 0
cmp dword ptr [ebp-24], 3
je .Lt_00EF
.Lt_00F0:
cmp dword ptr [ebp-24], 6
jne .Lt_00EE
.Lt_00EF:
push dword ptr [ebp-16]
call ASTGETSTRLITSYMBOL
add esp, 4
mov dword ptr [ebp-12], eax
.Lt_00EE:
.Lt_00ED:
cmp dword ptr [ebp-12], 0
jne .Lt_00F2
push dword ptr [ebp-20]
call SYMBISSTRING
add esp, 4
test eax, eax
je .Lt_00F4
push dword ptr [ebp-24]
call SYMBISSTRING
add esp, 4
test eax, eax
je .Lt_00F6
push 0
push -1
push 11
call ERRREPORT
add esp, 12
jmp .Lt_00F5
.Lt_00F6:
push 0
push -1
push 24
call ERRREPORT
add esp, 12
.Lt_00F5:
jmp .Lt_00EC
jmp .Lt_00F3
.Lt_00F4:
push dword ptr [ebp-24]
call SYMBISSTRING
add esp, 4
test eax, eax
je .Lt_00F7
push 0
push -1
push 24
call ERRREPORT
add esp, 12
jmp .Lt_00EC
.Lt_00F7:
.Lt_00F3:
mov eax, dword ptr [ebp-8]
cmp dword ptr [eax], 12
jne .Lt_00F8
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+108]
test ebx, ebx
setg bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-28], ebx
jmp .Lt_0143
.Lt_00F8:
mov dword ptr [ebp-28], 0
.Lt_0143:
cmp dword ptr [ebp-28], 0
je .Lt_00FB
push 0
push -1
push 24
call ERRREPORT
add esp, 12
jmp .Lt_00EC
.Lt_00FB:
.Lt_00FA:
mov ebx, dword ptr [ebp-16]
cmp dword ptr [ebx], 23
jne .Lt_00FD
mov ebx, dword ptr [ebp-20]
and ebx, 480
je .Lt_00FE
mov dword ptr [ebp-32], 22
jmp .Lt_0144
.Lt_00FE:
mov ebx, dword ptr [ebp-20]
and ebx, 31
mov dword ptr [ebp-32], ebx
.Lt_0144:
mov ebx, dword ptr [ebp-32]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx]
test eax, eax
setne al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-40], eax
mov eax, dword ptr [ebp-20]
and eax, 480
je .Lt_0100
mov dword ptr [ebp-36], 22
jmp .Lt_0145
.Lt_0100:
mov eax, dword ptr [ebp-20]
and eax, 31
mov dword ptr [ebp-36], eax
.Lt_0145:
mov eax, dword ptr [ebp-36]
imul eax, 28
mov ebx, dword ptr [ENV+236]
cmp ebx, dword ptr [SYMB_DTYPETB+eax+4]
setne bl
shr ebx, 1
sbb ebx, ebx
or ebx, dword ptr [ebp-40]
je .Lt_0103
push 0
push -1
push 24
call ERRREPORT
add esp, 12
jmp .Lt_00EC
.Lt_0103:
.Lt_0102:
jmp .Lt_00FC
.Lt_00FD:
mov ebx, dword ptr [ebp-16]
mov eax, dword ptr [ebx]
cmp eax, 16
sete al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_0105
push 0
push -1
push 11
call ERRREPORT
add esp, 12
jmp .Lt_00EC
.Lt_0105:
.Lt_0104:
.Lt_00FC:
jmp .Lt_00F1
.Lt_00F2:
push dword ptr [ebp-20]
call SYMBISSTRING
add esp, 4
test eax, eax
jne .Lt_0107
push 0
push -1
push 24
call ERRREPORT
add esp, 12
jmp .Lt_00EC
.Lt_0107:
.Lt_0106:
cmp dword ptr [ebp-20], 16
jne .Lt_0109
push 0
push -1
push 86
call ERRREPORT
add esp, 12
jmp .Lt_00EC
.Lt_0109:
.Lt_0108:
.Lt_00F1:
mov dword ptr [ebp-4], -1
.Lt_00EC:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HEXPRISCONST, .-HEXPRISCONST
.balign 16
HWALK:
.type HWALK, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_0121:
cmp dword ptr [ebp+8], 0
jne .Lt_0124
mov dword ptr [ebp-4], 0
jmp .Lt_0122
.Lt_0124:
.Lt_0123:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 36
jne .Lt_0126
mov eax, dword ptr [ebp+8]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+4]
call SYMBADDTEMPVAR
add esp, 8
mov dword ptr [ebp-12], eax
push dword ptr [ebp-12]
call ASTDTORLISTADD
add esp, 4
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp-12]
call ASTNEWVAR
add esp, 20
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [ebp+8]
cmp dword ptr [eax+56], ebx
jne .Lt_0128
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebp-8]
mov dword ptr [ebx+56], eax
jmp .Lt_0127
.Lt_0128:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [ebp-8]
mov dword ptr [eax+60], ebx
.Lt_0127:
push 64
push -1
push dword ptr [ebp+8]
push dword ptr [ebp-12]
call _Z15ASTTYPEINIFLUSHP8FBSYMBOLP7ASTNODEii
add esp, 16
mov dword ptr [ebp+8], eax
push dword ptr [ebp+8]
call ASTTYPEINIUPDATE
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_0122
.Lt_0126:
.Lt_0125:
push -1
push dword ptr [ebp+8]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+60]
call HWALK
add esp, 8
push eax
push dword ptr [ebp+8]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+56]
call HWALK
add esp, 8
push eax
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-4], eax
.Lt_0122:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HWALK, .-HWALK
	#FreeBASIC-1.01.0-source/src/compiler/ast-node-typeini.bas' compilation took 0.03613703232258558 secs

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
.int fb_ctor__astznodeztypeini
