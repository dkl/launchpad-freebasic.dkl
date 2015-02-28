	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/ast-node-mem.bas' compilation started at 15:27:33 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl ASTNEWMEM
ASTNEWMEM:
.type ASTNEWMEM, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
mov dword ptr [ebp-4], 0
.Lt_0057:
push 1
call dword ptr [IR+20]
add esp, 4
mov dword ptr [ebp-12], eax
mov ebx, dword ptr [ebp+20]
mov eax, dword ptr [ebp+24]
mov dword ptr [ebp-20], ebx
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp+8], 106
jne .Lt_005A
mov ebx, dword ptr [ebp+16]
cmp dword ptr [ebx], 16
jne .Lt_005C
mov ebx, dword ptr [ebp+16]
mov ecx, dword ptr [ebx+20]
mov eax, dword ptr [ebx+24]
mov dword ptr [ebp-20], ecx
mov dword ptr [ebp-16], eax
jmp .Lt_005B
.Lt_005C:
mov ecx, dword ptr [ebp-12]
inc ecx
mov ebx, ecx
mov eax, 0
mov dword ptr [ebp-20], ebx
mov dword ptr [ebp-16], eax
.Lt_005B:
.Lt_005A:
.Lt_0059:
mov eax, dword ptr [ebp-12]
mov ebx, 0
cmp dword ptr [ebp-16], ebx
jb .Lt_005E
ja .Lt_0061
cmp dword ptr [ebp-20], eax
jbe .Lt_005E
.Lt_0061:
push dword ptr [ebp+12]
call ASTNEWADDROF
add esp, 4
mov dword ptr [ebp+12], eax
cmp dword ptr [ebp+8], 104
jne .Lt_0060
push dword ptr [ebp+16]
call ASTNEWADDROF
add esp, 4
mov dword ptr [ebp+16], eax
.Lt_0060:
.Lt_005F:
.Lt_005E:
.Lt_005D:
push 0
push -2147483648
push 12
call ASTNEWNODE
add esp, 12
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+8]
mov dword ptr [eax+28], ebx
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebp+12]
mov dword ptr [ebx+56], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+16]
mov dword ptr [eax+60], ebx
mov ebx, dword ptr [ebp-8]
mov ecx, dword ptr [ebp+20]
mov eax, dword ptr [ebp+24]
mov dword ptr [ebx+20], ecx
mov dword ptr [ebx+24], eax
mov ecx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ecx
.Lt_0058:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTNEWMEM, .-ASTNEWMEM
.balign 16

.globl ASTBUILDNEWOP
ASTBUILDNEWOP:
.type ASTBUILDNEWOP, @function
push ebp
mov ebp, esp
sub esp, 28
mov dword ptr [ebp-4], 0
.Lt_0068:
mov dword ptr [ebp-20], 5
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-24], 0
cmp dword ptr [ebp+20], 0
je .Lt_006C
push dword ptr [ebp+28]
push dword ptr [ebp+24]
call TYPEHASCTOR
add esp, 8
test eax, eax
jne .Lt_006E
mov dword ptr [ebp-20], 0
jmp .Lt_006D
.Lt_006E:
mov eax, dword ptr [ebp+20]
cmp dword ptr [eax], 10
jne .Lt_006F
mov dword ptr [ebp-20], 1
.Lt_006F:
.Lt_006D:
jmp .Lt_006B
.Lt_006C:
push dword ptr [ebp+28]
push dword ptr [ebp+24]
call TYPEHASDEFCTOR
add esp, 8
test eax, eax
je .Lt_0071
cmp dword ptr [ebp+8], 79
jne .Lt_0073
mov dword ptr [ebp-20], 3
inc dword ptr [ebp-24]
jmp .Lt_0072
.Lt_0073:
mov dword ptr [ebp-20], 2
.Lt_0072:
jmp .Lt_0070
.Lt_0071:
cmp dword ptr [ebp+32], 0
je .Lt_0074
mov dword ptr [ebp-20], 4
inc dword ptr [ebp-24]
.Lt_0074:
.Lt_0070:
.Lt_006B:
cmp dword ptr [ebp+8], 79
jne .Lt_0076
cmp dword ptr [ebp+36], 0
jne .Lt_0078
push dword ptr [ebp+28]
push dword ptr [ebp+24]
call TYPENEEDSDTORCALL
add esp, 8
mov dword ptr [ebp-16], eax
.Lt_0078:
.Lt_0077:
.Lt_0076:
.Lt_0075:
cmp dword ptr [ebp+36], 0
jne .Lt_007A
inc dword ptr [ebp-24]
.Lt_007A:
.Lt_0079:
cmp dword ptr [ebp-16], 0
je .Lt_007C
inc dword ptr [ebp-24]
.Lt_007C:
.Lt_007B:
cmp dword ptr [ebp-24], 1
jle .Lt_007E
push dword ptr [ebp+16]
call ASTHASSIDEFX
add esp, 4
test eax, eax
je .Lt_0080
lea eax, [ebp+16]
push eax
call ASTREMSIDEFX
add esp, 4
mov dword ptr [ebp-12], eax
.Lt_0080:
.Lt_007F:
.Lt_007E:
.Lt_007D:
cmp dword ptr [ebp+36], 0
jne .Lt_0082
push 1
push 0
push 0
push 8
push dword ptr [ebp+28]
push dword ptr [ebp+24]
call SYMBCALCLEN
add esp, 8
push edx
push eax
call ASTNEWCONSTI
add esp, 16
push eax
lea eax, [ebp-24]
push eax
push dword ptr [ebp+16]
call HELEMENTS
add esp, 8
push eax
push 30
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-16], 0
je .Lt_0084
push 1
push 0
push 0
push 8
mov edx, dword ptr [SYMB_DTYPETB+200]
mov eax, edx
sar eax, 31
push eax
push edx
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp-8]
push 28
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp-8], eax
.Lt_0084:
.Lt_0083:
push dword ptr [ebp+28]
push dword ptr [ebp+24]
push dword ptr [ebp-8]
push dword ptr [ebp+8]
call RTLMEMNEWOP
add esp, 16
mov dword ptr [ebp+36], eax
cmp dword ptr [ebp+36], 0
jne .Lt_0086
mov dword ptr [ebp-4], 0
jmp .Lt_0069
.Lt_0086:
.Lt_0085:
.Lt_0082:
.Lt_0081:
push -1
push 64
push dword ptr [ebp+36]
push dword ptr [ebp+12]
call _Z17ASTBUILDVARASSIGNP8FBSYMBOLP7ASTNODEi
add esp, 12
push eax
push dword ptr [ebp-12]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-16], 0
je .Lt_0088
push -1
push 64
lea eax, [ebp-24]
push eax
push dword ptr [ebp+16]
call HELEMENTS
add esp, 8
push eax
push 0
push 0
push 0
push -2147483648
push 0
push 39
push 0
push 0
push dword ptr [ebp+12]
call ASTNEWVAR
add esp, 20
push eax
call ASTNEWDEREF
add esp, 20
push eax
call ASTNEWASSIGN
add esp, 12
push eax
push dword ptr [ebp-12]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-12], eax
push -1
push 1
push 0
push 0
push 7
mov edx, dword ptr [SYMB_DTYPETB+200]
mov eax, edx
sar eax, 31
push eax
push edx
call ASTNEWCONSTI
add esp, 16
push eax
push 0
push 32
push 0
push 0
push dword ptr [ebp+12]
call ASTNEWVAR
add esp, 20
push eax
push 1
call ASTNEWSELFBOP
add esp, 20
push eax
push dword ptr [ebp-12]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-12], eax
.Lt_0088:
.Lt_0087:
mov eax, dword ptr [ebp-20]
mov dword ptr [ebp-28], eax
jmp .Lt_008A
.Lt_008C:
push 64
push 0
push dword ptr [ebp+20]
push 0
push 0
push 0
push -2147483648
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp+12]
call ASTNEWVAR
add esp, 20
push eax
call ASTNEWDEREF
add esp, 20
push eax
call _Z15ASTTYPEINIFLUSHP7ASTNODES0_ii
add esp, 16
mov dword ptr [ebp+20], eax
jmp .Lt_0089
.Lt_008D:
push 0
push 0
push 0
push -2147483648
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp+12]
call ASTNEWVAR
add esp, 20
push eax
call ASTNEWDEREF
add esp, 20
push eax
push dword ptr [ebp+20]
call ASTCALLCTORTOCALL
add esp, 4
push eax
call ASTPATCHCTORCALL
add esp, 8
mov dword ptr [ebp+20], eax
jmp .Lt_0089
.Lt_008E:
push 0
push 0
push 0
push -2147483648
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp+12]
call ASTNEWVAR
add esp, 20
push eax
call ASTNEWDEREF
add esp, 20
push eax
push dword ptr [ebp+28]
call ASTBUILDCTORCALL
add esp, 8
mov dword ptr [ebp+20], eax
jmp .Lt_0089
.Lt_008F:
push dword ptr [ebp+28]
push dword ptr [ebp+24]
lea eax, [ebp-24]
push eax
push dword ptr [ebp+16]
call HELEMENTS
add esp, 8
push eax
push dword ptr [ebp+12]
call HCALLCTORLIST
add esp, 16
mov dword ptr [ebp+20], eax
jmp .Lt_0089
.Lt_0090:
push 1
push 0
push 0
push 8
push dword ptr [ebp+28]
push dword ptr [ebp+24]
call SYMBCALCLEN
add esp, 8
push edx
push eax
call ASTNEWCONSTI
add esp, 16
push eax
lea eax, [ebp-24]
push eax
push dword ptr [ebp+16]
call HELEMENTS
add esp, 8
push eax
push 30
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp-8], eax
push 0
push 0
push 0
push 0
push dword ptr [ebp-8]
push 0
push 8
call ASTNEWCONV
add esp, 20
push eax
push 0
push 0
push 0
push -2147483648
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp+12]
call ASTNEWVAR
add esp, 20
push eax
call ASTNEWDEREF
add esp, 20
push eax
push 106
call ASTNEWMEM
add esp, 20
mov dword ptr [ebp+20], eax
jmp .Lt_0089
.Lt_0091:
mov dword ptr [ebp+20], 0
jmp .Lt_0089
.Lt_008A:
cmp dword ptr [ebp-28], 4
ja .Lt_0091
mov eax, dword ptr [ebp-28]
jmp dword ptr [.LT_0092+eax*4]
.LT_0092:
.int .Lt_008C
.int .Lt_008D
.int .Lt_008E
.int .Lt_008F
.int .Lt_0090
.Lt_0089:
push -1
push dword ptr [ebp+20]
push dword ptr [ebp-12]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-4], eax
.Lt_0069:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size ASTBUILDNEWOP, .-ASTBUILDNEWOP
.balign 16

.globl ASTBUILDDELETEOP
ASTBUILDDELETEOP:
.type ASTBUILDDELETEOP, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
mov dword ptr [ebp-4], 0
.Lt_0095:
mov dword ptr [ebp-8], 0
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-20], ebx
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+8]
mov dword ptr [ebp-16], eax
mov eax, dword ptr [ebp-20]
and eax, 31
mov ebx, dword ptr [ebp-20]
and ebx, 480
add ebx, -32
or eax, ebx
mov ebx, dword ptr [ebp-20]
and ebx, 261632
sar ebx, 1
and ebx, 261632
or eax, ebx
mov dword ptr [ebp-20], eax
push dword ptr [ebp+12]
call ASTHASSIDEFX
add esp, 4
test eax, eax
je .Lt_0098
lea eax, [ebp+12]
push eax
call ASTREMSIDEFX
add esp, 4
mov dword ptr [ebp-8], eax
.Lt_0098:
.Lt_0097:
push 4
push 0
call SYMBADDLABEL
add esp, 8
mov dword ptr [ebp-12], eax
push -1
push 0
push dword ptr [ebp-12]
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp+12]
call ASTCLONETREE
add esp, 4
push eax
push 45
call ASTNEWBOP
add esp, 20
push eax
push dword ptr [ebp-8]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-8], eax
push dword ptr [ebp-16]
push dword ptr [ebp-20]
call TYPENEEDSDTORCALL
add esp, 8
test eax, eax
je .Lt_009A
cmp dword ptr [ebp+8], 81
jne .Lt_009C
push -1
push dword ptr [ebp+12]
call ASTCLONETREE
add esp, 4
push eax
call HCALLDTORLIST
add esp, 4
push eax
push dword ptr [ebp-8]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-8], eax
push 1
push 0
push 0
push 7
mov ebx, dword ptr [SYMB_DTYPETB+200]
mov eax, ebx
sar eax, 31
push eax
push ebx
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp+12]
push 29
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp+12], eax
jmp .Lt_009B
.Lt_009C:
push -1
push 0
push 0
push 0
push -2147483648
push dword ptr [ebp+12]
call ASTCLONETREE
add esp, 4
push eax
call ASTNEWDEREF
add esp, 20
push eax
call _Z19ASTBUILDVARDTORCALLP7ASTNODE
add esp, 4
push eax
push dword ptr [ebp-8]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-8], eax
.Lt_009B:
.Lt_009A:
.Lt_0099:
push -1
push dword ptr [ebp-16]
push dword ptr [ebp-20]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call RTLMEMDELETEOP
add esp, 16
push eax
push dword ptr [ebp-8]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-8], eax
push -1
push -1
push dword ptr [ebp-12]
call ASTNEWLABEL
add esp, 8
push eax
push dword ptr [ebp-8]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0096:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTBUILDDELETEOP, .-ASTBUILDDELETEOP
.balign 16

.globl ASTLOADMEM
ASTLOADMEM:
.type ASTLOADMEM, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
mov dword ptr [ebp-4], 0
.Lt_009D:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-8], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+60]
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-8], 0
jne .Lt_00A0
mov dword ptr [ebp-4], 0
jmp .Lt_009E
.Lt_00A0:
.Lt_009F:
push dword ptr [ebp-8]
call ASTLOAD
add esp, 4
mov dword ptr [ebp-16], eax
push dword ptr [ebp-8]
call ASTDELNODE
add esp, 4
cmp dword ptr [ebp-12], 0
je .Lt_00A2
push dword ptr [ebp-12]
call ASTLOAD
add esp, 4
mov dword ptr [ebp-20], eax
push dword ptr [ebp-12]
call ASTDELNODE
add esp, 4
jmp .Lt_00A1
.Lt_00A2:
mov dword ptr [ebp-20], 0
.Lt_00A1:
cmp dword ptr [AST+136], 0
je .Lt_00A4
mov eax, dword ptr [ebp+8]
push dword ptr [eax+24]
push dword ptr [eax+20]
push dword ptr [ebp-20]
push dword ptr [ebp-16]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+28]
call dword ptr [IR+164]
add esp, 20
.Lt_00A4:
.Lt_00A3:
mov dword ptr [ebp-4], 0
.Lt_009E:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTLOADMEM, .-ASTLOADMEM
.balign 16
fb_ctor__astznodezmem:
.type fb_ctor__astznodezmem, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__astznodezmem, .-fb_ctor__astznodezmem
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
HCALLCTORLIST:
.type HCALLCTORLIST, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
mov dword ptr [ebp-4], 0
.Lt_0062:
push 0
push 7
call SYMBADDTEMPVAR
add esp, 8
mov dword ptr [ebp-8], eax
push 4
push 0
call SYMBADDLABEL
add esp, 8
mov dword ptr [ebp-12], eax
push dword ptr [ebp+20]
mov eax, dword ptr [ebp+16]
and eax, 31
mov ebx, dword ptr [ebp+16]
and ebx, 480
add ebx, 32
or eax, ebx
mov ebx, dword ptr [ebp+16]
and ebx, 261632
sal ebx, 1
or eax, ebx
push eax
call SYMBADDTEMPVAR
add esp, 8
mov dword ptr [ebp-16], eax
push 64
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp+8]
call ASTNEWVAR
add esp, 20
push eax
push dword ptr [ebp-16]
call _Z17ASTBUILDVARASSIGNP8FBSYMBOLP7ASTNODEi
add esp, 12
mov dword ptr [ebp-20], eax
push 0
push 0
push dword ptr [ebp-12]
push dword ptr [ebp-8]
push dword ptr [ebp-20]
call ASTBUILDFORBEGIN
add esp, 20
mov dword ptr [ebp-20], eax
push -1
push dword ptr [ebp-16]
call ASTBUILDVARDEREF
add esp, 4
push eax
push dword ptr [ebp+20]
call ASTBUILDCTORCALL
add esp, 8
push eax
push dword ptr [ebp-20]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-20], eax
push -1
push 1
push dword ptr [ebp-16]
call ASTBUILDVARINC
add esp, 8
push eax
push dword ptr [ebp-20]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-20], eax
push dword ptr [ebp+12]
push dword ptr [ebp-12]
push dword ptr [ebp-8]
push dword ptr [ebp-20]
call ASTBUILDFOREND
add esp, 16
mov dword ptr [ebp-20], eax
push dword ptr [ebp-20]
push dword ptr [ebp-12]
call ASTNEWLOOP
add esp, 8
mov dword ptr [ebp-4], eax
.Lt_0063:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HCALLCTORLIST, .-HCALLCTORLIST
.balign 16
HELEMENTS:
.type HELEMENTS, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_0064:
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax], 1
jle .Lt_0067
push dword ptr [ebp+8]
call ASTCLONETREE
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_0066
.Lt_0067:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
.Lt_0066:
mov eax, dword ptr [ebp+12]
dec dword ptr [eax]
.Lt_0065:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size HELEMENTS, .-HELEMENTS
.balign 16
HCALLDTORLIST:
.type HCALLDTORLIST, @function
push ebp
mov ebp, esp
sub esp, 28
push ebx
mov dword ptr [ebp-4], 0
.Lt_0093:
push 0
push 7
call SYMBADDTEMPVAR
add esp, 8
mov dword ptr [ebp-8], eax
push 4
push 0
call SYMBADDLABEL
add esp, 8
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp+8]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+4]
call SYMBADDTEMPVAR
add esp, 8
mov dword ptr [ebp-16], eax
push 0
push 7
call SYMBADDTEMPVAR
add esp, 8
mov dword ptr [ebp-20], eax
push 64
push 0
push 0
push 0
push -2147483648
push 0
push 8
push 1
push 0
push 0
push 7
mov eax, dword ptr [SYMB_DTYPETB+200]
neg eax
mov ecx, eax
mov ebx, ecx
sar ebx, 31
push ebx
push ecx
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp+8]
call ASTCLONETREE
add esp, 4
push eax
push 28
call ASTNEWBOP
add esp, 20
push eax
push 0
push 39
call ASTNEWCONV
add esp, 20
push eax
call ASTNEWDEREF
add esp, 20
push eax
push dword ptr [ebp-20]
call _Z17ASTBUILDVARASSIGNP8FBSYMBOLP7ASTNODEi
add esp, 12
mov dword ptr [ebp-24], eax
push -1
push 64
push 7
push 0
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp-20]
call ASTNEWVAR
add esp, 20
push eax
push dword ptr [ebp+8]
push 28
call ASTNEWBOP
add esp, 20
push eax
push dword ptr [ebp-16]
call _Z17ASTBUILDVARASSIGNP8FBSYMBOLP7ASTNODEi
add esp, 12
push eax
push dword ptr [ebp-24]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-24], eax
push -1
push 0
push dword ptr [ebp-12]
push dword ptr [ebp-8]
push dword ptr [ebp-24]
call ASTBUILDFORBEGIN
add esp, 20
mov dword ptr [ebp-24], eax
push -1
push -1
push dword ptr [ebp-16]
call ASTBUILDVARINC
add esp, 8
push eax
push dword ptr [ebp-24]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-24], eax
push -1
push dword ptr [ebp-16]
call ASTBUILDVARDEREF
add esp, 4
push eax
call _Z19ASTBUILDVARDTORCALLP7ASTNODE
add esp, 4
push eax
push dword ptr [ebp-24]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-24], eax
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp-20]
call ASTNEWVAR
add esp, 20
push eax
push dword ptr [ebp-12]
push dword ptr [ebp-8]
push dword ptr [ebp-24]
call ASTBUILDFOREND
add esp, 16
mov dword ptr [ebp-24], eax
mov eax, dword ptr [ebp-24]
mov dword ptr [ebp-4], eax
.Lt_0094:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HCALLDTORLIST, .-HCALLDTORLIST
	#fbc-1.01.0/src/compiler/ast-node-mem.bas' compilation took 0.03401408425997943 secs

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
.int fb_ctor__astznodezmem
