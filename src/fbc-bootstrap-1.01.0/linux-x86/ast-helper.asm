	.intel_syntax noprefix

	#FreeBASIC-1.01.0-source/src/compiler/ast-helper.bas' compilation started at 16:30:02 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl _Z17ASTBUILDVARASSIGNP8FBSYMBOLii
_Z17ASTBUILDVARASSIGNP8FBSYMBOLii:
.type _Z17ASTBUILDVARASSIGNP8FBSYMBOLii, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_005F:
push dword ptr [ebp+16]
push 0
push 7
mov ebx, dword ptr [ebp+12]
mov eax, ebx
sar eax, 31
push eax
push ebx
call ASTNEWCONSTI
add esp, 16
push eax
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp+8]
call ASTNEWVAR
add esp, 20
push eax
call ASTNEWASSIGN
add esp, 12
mov dword ptr [ebp-4], eax
.Lt_0060:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size _Z17ASTBUILDVARASSIGNP8FBSYMBOLii, .-_Z17ASTBUILDVARASSIGNP8FBSYMBOLii
.balign 16

.globl _Z17ASTBUILDVARASSIGNP8FBSYMBOLP7ASTNODEi
_Z17ASTBUILDVARASSIGNP8FBSYMBOLP7ASTNODEi:
.type _Z17ASTBUILDVARASSIGNP8FBSYMBOLP7ASTNODEi, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_0061:
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
call ASTNEWASSIGN
add esp, 12
mov dword ptr [ebp-4], eax
.Lt_0062:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size _Z17ASTBUILDVARASSIGNP8FBSYMBOLP7ASTNODEi, .-_Z17ASTBUILDVARASSIGNP8FBSYMBOLP7ASTNODEi
.balign 16

.globl ASTBUILDFAKEWSTRINGACCESS
ASTBUILDFAKEWSTRINGACCESS:
.type ASTBUILDFAKEWSTRINGACCESS, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_0063:
push 0
push 0
push 0
push -2147483648
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp+8]
call ASTNEWVAR
add esp, 20
push eax
call ASTNEWDEREF
add esp, 20
mov dword ptr [ebp-4], eax
.Lt_0064:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size ASTBUILDFAKEWSTRINGACCESS, .-ASTBUILDFAKEWSTRINGACCESS
.balign 16

.globl ASTBUILDFAKEWSTRINGASSIGN
ASTBUILDFAKEWSTRINGASSIGN:
.type ASTBUILDFAKEWSTRINGASSIGN, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_0065:
mov dword ptr [ebp-8], 0
push dword ptr [ebp+12]
call ASTHASSIDEFX
add esp, 4
test eax, eax
je .Lt_0068
push 0
lea eax, [ebp+12]
push eax
call ASTREMSIDEFX
add esp, 4
push eax
push dword ptr [ebp-8]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-8], eax
.Lt_0068:
.Lt_0067:
push 0
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call ASTCLONETREE
add esp, 4
push eax
call RTLWSTRLEN
add esp, 4
push eax
call RTLWSTRALLOC
add esp, 4
push eax
push dword ptr [ebp+8]
call _Z17ASTBUILDVARASSIGNP8FBSYMBOLP7ASTNODEi
add esp, 12
push eax
push dword ptr [ebp-8]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-8], eax
push 0
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call ASTBUILDFAKEWSTRINGACCESS
add esp, 4
push eax
call ASTNEWASSIGN
add esp, 12
push eax
push dword ptr [ebp-8]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0066:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size ASTBUILDFAKEWSTRINGASSIGN, .-ASTBUILDFAKEWSTRINGASSIGN
.balign 16

.globl ASTBUILDVARINC
ASTBUILDVARINC:
.type ASTBUILDVARINC, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_0069:
mov dword ptr [ebp-8], 1
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+24]
and ebx, 511
and ebx, 480
test ebx, ebx
je .Lt_006C
mov ebx, dword ptr [ebp-8]
or ebx, 2
mov eax, ebx
mov dword ptr [ebp-8], eax
.Lt_006C:
.Lt_006B:
cmp dword ptr [ebp+12], 0
jle .Lt_006E
mov dword ptr [ebp-12], 1
jmp .Lt_006D
.Lt_006E:
mov dword ptr [ebp-12], 2
neg dword ptr [ebp+12]
.Lt_006D:
push dword ptr [ebp-8]
push 0
push 0
push 7
mov ebx, dword ptr [ebp+12]
mov eax, ebx
sar eax, 31
push eax
push ebx
call ASTNEWCONSTI
add esp, 16
push eax
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp+8]
call ASTNEWVAR
add esp, 20
push eax
push dword ptr [ebp-12]
call ASTNEWSELFBOP
add esp, 20
mov dword ptr [ebp-4], eax
.Lt_006A:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTBUILDVARINC, .-ASTBUILDVARINC
.balign 16

.globl ASTBUILDVARDEREF
ASTBUILDVARDEREF:
.type ASTBUILDVARDEREF, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_006F:
push 0
push 0
push 0
push -2147483648
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp+8]
call ASTNEWVAR
add esp, 20
push eax
call ASTNEWDEREF
add esp, 20
mov dword ptr [ebp-4], eax
.Lt_0070:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size ASTBUILDVARDEREF, .-ASTBUILDVARDEREF
.balign 16

.globl ASTBUILDVARADDROF
ASTBUILDVARADDROF:
.type ASTBUILDVARADDROF, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_0071:
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp+8]
call ASTNEWVAR
add esp, 20
push eax
call ASTNEWADDROF
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_0072:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size ASTBUILDVARADDROF, .-ASTBUILDVARADDROF
.balign 16

.globl _Z19ASTBUILDVARDTORCALLP7ASTNODE
_Z19ASTBUILDVARDTORCALLP7ASTNODE:
.type _Z19ASTBUILDVARDTORCALLP7ASTNODE, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_0073:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 511
cmp ebx, 16
jne .Lt_0076
push dword ptr [ebp+8]
call RTLSTRDELETE
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_0075
.Lt_0076:
mov eax, dword ptr [ebp+8]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+4]
call TYPEHASDTOR
add esp, 8
test eax, eax
je .Lt_0077
push 0
push dword ptr [ebp+8]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+8]
call ASTBUILDDTORCALL
add esp, 12
mov dword ptr [ebp-4], eax
.Lt_0077:
.Lt_0075:
.Lt_0074:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size _Z19ASTBUILDVARDTORCALLP7ASTNODE, .-_Z19ASTBUILDVARDTORCALLP7ASTNODE
.balign 16

.globl _Z19ASTBUILDVARDTORCALLP8FBSYMBOLi
_Z19ASTBUILDVARDTORCALLP8FBSYMBOLi:
.type _Z19ASTBUILDVARDTORCALLP8FBSYMBOLi, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0078:
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+56], 0
je .Lt_007B
push dword ptr [ebp+12]
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 4
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
push ebx
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp+8]
call ASTNEWVAR
add esp, 20
push eax
call RTLARRAYERASE
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_007A
.Lt_007B:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+24]
and ebx, 511
mov dword ptr [ebp-8], ebx
cmp dword ptr [ebp-8], 16
jne .Lt_007E
.Lt_007F:
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp+8]
call ASTNEWVAR
add esp, 20
push eax
call RTLSTRDELETE
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_007C
.Lt_007E:
cmp dword ptr [ebp-8], 38
jne .Lt_0080
.Lt_0081:
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp+8]
call ASTNEWVAR
add esp, 20
push eax
call RTLSTRDELETE
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_007C
.Lt_0080:
push dword ptr [ebp+8]
call SYMBHASDTOR
add esp, 4
test eax, eax
je .Lt_0084
cmp dword ptr [ebp+12], 0
je .Lt_0086
mov eax, dword ptr [ebp+8]
push dword ptr [eax+28]
call SYMBGETCOMPDTOR
add esp, 4
push eax
call SYMBCHECKACCESS
add esp, 4
test eax, eax
jne .Lt_0088
push 0
push 0
push 205
call ERRREPORT
add esp, 12
.Lt_0088:
.Lt_0087:
.Lt_0086:
.Lt_0085:
push 0
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp+8]
call ASTNEWVAR
add esp, 20
push eax
mov eax, dword ptr [ebp+8]
push dword ptr [eax+28]
call ASTBUILDDTORCALL
add esp, 12
mov dword ptr [ebp-4], eax
.Lt_0084:
.Lt_0083:
.Lt_0082:
.Lt_007C:
.Lt_007A:
.Lt_0079:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size _Z19ASTBUILDVARDTORCALLP8FBSYMBOLi, .-_Z19ASTBUILDVARDTORCALLP8FBSYMBOLi
.balign 16

.globl _Z19ASTBUILDDEREFADDROFP7ASTNODES0_iP8FBSYMBOLS2_
_Z19ASTBUILDDEREFADDROFP7ASTNODES0_iP8FBSYMBOLS2_:
.type _Z19ASTBUILDDEREFADDROFP7ASTNODES0_iP8FBSYMBOLS2_, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_008A:
push dword ptr [ebp+8]
call ASTNEWADDROF
add esp, 4
mov dword ptr [ebp+8], eax
cmp dword ptr [ebp+12], 0
je .Lt_008D
push 1
push 0
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 28
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp+8], eax
.Lt_008D:
.Lt_008C:
push 0
push 8
push dword ptr [ebp+8]
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
call ASTNEWCONV
add esp, 20
mov dword ptr [ebp+8], eax
push 0
push 0
push 0
push -2147483648
push dword ptr [ebp+8]
call ASTNEWDEREF
add esp, 20
mov dword ptr [ebp+8], eax
cmp dword ptr [ebp+24], 0
je .Lt_008F
mov eax, dword ptr [ebp+24]
cmp dword ptr [eax], 12
jne .Lt_0091
push dword ptr [ebp+24]
push dword ptr [ebp+8]
call ASTNEWFIELD
add esp, 8
mov dword ptr [ebp+8], eax
.Lt_0091:
.Lt_0090:
.Lt_008F:
.Lt_008E:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
.Lt_008B:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size _Z19ASTBUILDDEREFADDROFP7ASTNODES0_iP8FBSYMBOLS2_, .-_Z19ASTBUILDDEREFADDROFP7ASTNODES0_iP8FBSYMBOLS2_
.balign 16

.globl _Z19ASTBUILDDEREFADDROFP7ASTNODExiP8FBSYMBOLS2_
_Z19ASTBUILDDEREFADDROFP7ASTNODExiP8FBSYMBOLS2_:
.type _Z19ASTBUILDDEREFADDROFP7ASTNODExiP8FBSYMBOLS2_, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_0092:
cmp dword ptr [ebp+16], 0
jne .Lt_0095
cmp dword ptr [ebp+12], 0
jne .Lt_0095
.Lt_0096:
mov dword ptr [ebp-8], 0
jmp .Lt_0094
.Lt_0095:
push 0
push 7
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-8], eax
.Lt_0094:
push dword ptr [ebp+28]
push dword ptr [ebp+24]
push dword ptr [ebp+20]
push dword ptr [ebp-8]
push dword ptr [ebp+8]
call _Z19ASTBUILDDEREFADDROFP7ASTNODES0_iP8FBSYMBOLS2_
add esp, 20
mov dword ptr [ebp-4], eax
.Lt_0093:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size _Z19ASTBUILDDEREFADDROFP7ASTNODExiP8FBSYMBOLS2_, .-_Z19ASTBUILDDEREFADDROFP7ASTNODExiP8FBSYMBOLS2_
.balign 16

.globl ASTBUILDVARFIELD
ASTBUILDVARFIELD:
.type ASTBUILDVARFIELD, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0097:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 2048
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+4]
and ecx, 262144
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
or ebx, ecx
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ecx+4]
and eax, 512
test eax, eax
setne al
shr eax, 1
sbb eax, eax
or ebx, eax
je .Lt_009A
push 0
push 0
push 0
push -2147483648
mov eax, dword ptr [ebp+8]
push dword ptr [eax+28]
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+24]
and ebx, 31
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+24]
and ecx, 480
add ecx, 32
or ebx, ecx
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ecx+24]
and eax, 261632
sal eax, 1
or ebx, eax
push ebx
push 0
push 0
push dword ptr [ebp+8]
call ASTNEWVAR
add esp, 20
push eax
call ASTNEWDEREF
add esp, 20
mov dword ptr [ebp-8], eax
jmp .Lt_0099
.Lt_009A:
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp+8]
call ASTNEWVAR
add esp, 20
mov dword ptr [ebp-8], eax
.Lt_0099:
cmp dword ptr [ebp+12], 0
je .Lt_009C
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax+44]
mov ebx, dword ptr [eax+48]
add dword ptr [ebp+16], ecx
adc dword ptr [ebp+20], ebx
push dword ptr [ebp+12]
mov ecx, dword ptr [ebp+12]
push dword ptr [ecx+28]
mov ecx, dword ptr [ebp+12]
push dword ptr [ecx+24]
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp-8]
call _Z19ASTBUILDDEREFADDROFP7ASTNODExiP8FBSYMBOLS2_
add esp, 24
mov dword ptr [ebp-8], eax
jmp .Lt_009B
.Lt_009C:
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax+28]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+24]
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp-8]
call _Z19ASTBUILDDEREFADDROFP7ASTNODExiP8FBSYMBOLS2_
add esp, 24
mov dword ptr [ebp-8], eax
.Lt_009B:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0098:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTBUILDVARFIELD, .-ASTBUILDVARFIELD
.balign 16

.globl ASTBUILDTEMPVARCLEAR
ASTBUILDTEMPVARCLEAR:
.type ASTBUILDTEMPVARCLEAR, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_00A0:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 2
test ebx, ebx
je .Lt_00A3
mov dword ptr [ebp-4], 0
jmp .Lt_00A1
.Lt_00A3:
.Lt_00A2:
push 0
push 0
push 0
push 7
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+40]
push dword ptr [ebx+36]
call ASTNEWCONSTI
add esp, 16
push eax
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp+8]
call ASTNEWVAR
add esp, 20
push eax
push 106
call ASTNEWMEM
add esp, 20
mov dword ptr [ebp-4], eax
.Lt_00A1:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTBUILDTEMPVARCLEAR, .-ASTBUILDTEMPVARCLEAR
.balign 16

.globl ASTBUILDFORBEGIN
ASTBUILDFORBEGIN:
.type ASTBUILDFORBEGIN, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_00A4:
push -1
push 0
push dword ptr [ebp+20]
push dword ptr [ebp+12]
call _Z17ASTBUILDVARASSIGNP8FBSYMBOLii
add esp, 12
push eax
push dword ptr [ebp+8]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp+8], eax
push -1
push dword ptr [ebp+24]
push dword ptr [ebp+16]
call ASTNEWLABEL
add esp, 8
push eax
push dword ptr [ebp+8]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp+8], eax
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
.Lt_00A5:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size ASTBUILDFORBEGIN, .-ASTBUILDFORBEGIN
.balign 16

.globl ASTBUILDFOREND
ASTBUILDFOREND:
.type ASTBUILDFOREND, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_00A6:
push -1
push 1
push dword ptr [ebp+12]
call ASTBUILDVARINC
add esp, 8
push eax
push dword ptr [ebp+8]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp+8], eax
push -1
push 0
push 0
push dword ptr [ebp+16]
push 1
push 0
push dword ptr [ebp+20]
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp+12]
call ASTNEWVAR
add esp, 20
push eax
push 45
call ASTNEWBOP
add esp, 20
push eax
call ASTBUILDBRANCH
add esp, 16
push eax
push dword ptr [ebp+8]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp+8], eax
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
.Lt_00A7:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size ASTBUILDFOREND, .-ASTBUILDFOREND
.balign 16

.globl ASTBUILDVTABLELOOKUP
ASTBUILDVTABLELOOKUP:
.type ASTBUILDVTABLELOOKUP, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_00A8:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 536870912
test ebx, ebx
je .Lt_00AB
push dword ptr [ebp+8]
call SYMBPROCGETVTABLEINDEX
add esp, 4
mov dword ptr [ebp-12], eax
push dword ptr [ebp+12]
call ASTCLONETREE
add esp, 4
mov dword ptr [ebp-8], eax
push dword ptr [ebp-8]
call ASTNEWADDROF
add esp, 4
mov dword ptr [ebp-8], eax
push 0
push 8
push dword ptr [ebp-8]
push 0
push 96
call ASTNEWCONV
add esp, 20
mov dword ptr [ebp-8], eax
push 0
push 0
push 0
push -2147483648
push dword ptr [ebp-8]
call ASTNEWDEREF
add esp, 20
mov dword ptr [ebp-8], eax
push 7
push 0
push 0
push 7
mov eax, dword ptr [ebp-12]
add eax, -2
mov ecx, eax
mov ebx, ecx
sar ebx, 31
push ebx
push ecx
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp-8]
push 28
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp-8], eax
push 0
push 0
push 0
push -2147483648
push dword ptr [ebp-8]
call ASTNEWDEREF
add esp, 20
mov dword ptr [ebp-8], eax
push 0
push 0
push dword ptr [ebp-8]
push dword ptr [ebp+8]
call SYMBADDPROCPTRFROMFUNCTION
add esp, 4
push eax
push 52
call ASTNEWCONV
add esp, 20
mov dword ptr [ebp-8], eax
cmp dword ptr [ENV+156], 0
je .Lt_00AD
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+4]
and ecx, 1073741824
test ecx, ecx
je .Lt_00AF
push dword ptr [ebp-8]
call ASTBUILDPTRCHK
add esp, 4
mov dword ptr [ebp-8], eax
.Lt_00AF:
.Lt_00AE:
.Lt_00AD:
.Lt_00AC:
jmp .Lt_00AA
.Lt_00AB:
mov dword ptr [ebp-8], 0
.Lt_00AA:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_00A9:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTBUILDVTABLELOOKUP, .-ASTBUILDVTABLELOOKUP
.balign 16

.globl ASTBUILDCALL
ASTBUILDCALL:
.type ASTBUILDCALL, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_00B0:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 536870912
test ebx, ebx
je .Lt_00B3
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call ASTBUILDVTABLELOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_00B2
.Lt_00B3:
mov dword ptr [ebp-12], 0
.Lt_00B2:
push dword ptr [ebp-12]
push dword ptr [ebp+8]
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp+12], 0
je .Lt_00B5
push -1
push -2147483648
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00B7
mov dword ptr [ebp-4], 0
jmp .Lt_00B1
.Lt_00B7:
.Lt_00B6:
.Lt_00B5:
.Lt_00B4:
cmp dword ptr [ebp+16], 0
je .Lt_00B9
push -1
push -2147483648
push dword ptr [ebp+16]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00BB
mov dword ptr [ebp-4], 0
jmp .Lt_00B1
.Lt_00BB:
.Lt_00BA:
.Lt_00B9:
.Lt_00B8:
cmp dword ptr [ebp+20], 0
je .Lt_00BD
push -1
push -2147483648
push dword ptr [ebp+20]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00BF
mov dword ptr [ebp-4], 0
jmp .Lt_00B1
.Lt_00BF:
.Lt_00BE:
.Lt_00BD:
.Lt_00BC:
push dword ptr [ebp-8]
call ASTBUILDBYREFRESULTDEREF
add esp, 4
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_00B1:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTBUILDCALL, .-ASTBUILDCALL
.balign 16

.globl ASTBUILDCTORCALL
ASTBUILDCTORCALL:
.type ASTBUILDCTORCALL, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
mov dword ptr [ebp-4], 0
.Lt_00C0:
push dword ptr [ebp+8]
call SYMBGETCOMPDEFCTOR
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_00C3
mov dword ptr [ebp-4], 0
jmp .Lt_00C1
.Lt_00C3:
.Lt_00C2:
push 0
push dword ptr [ebp-8]
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-12], eax
push -1
push -2147483648
push dword ptr [ebp+12]
push dword ptr [ebp-12]
call ASTNEWARG
add esp, 16
mov eax, dword ptr [ebp-8]
movsx ebx, word ptr [eax+64]
dec ebx
mov dword ptr [ebp-16], ebx
.Lt_00C4:
cmp dword ptr [ebp-16], 0
jle .Lt_00C5
push -1
push -2147483648
push 0
push dword ptr [ebp-12]
call ASTNEWARG
add esp, 16
dec dword ptr [ebp-16]
jmp .Lt_00C4
.Lt_00C5:
mov ebx, dword ptr [ebp-12]
mov dword ptr [ebp-4], ebx
.Lt_00C1:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTBUILDCTORCALL, .-ASTBUILDCTORCALL
.balign 16

.globl ASTBUILDDTORCALL
ASTBUILDDTORCALL:
.type ASTBUILDDTORCALL, @function
push ebp
mov ebp, esp
sub esp, 12
mov dword ptr [ebp-4], 0
.Lt_00C6:
push dword ptr [ebp+8]
call SYMBGETCOMPDTOR
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp+16], 0
je .Lt_00C9
push 0
push dword ptr [ebp-8]
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_00C8
.Lt_00C9:
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call ASTBUILDVTABLELOOKUP
add esp, 8
push eax
push dword ptr [ebp-8]
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-12], eax
.Lt_00C8:
push -1
push -2147483648
push dword ptr [ebp+12]
push dword ptr [ebp-12]
call ASTNEWARG
add esp, 16
mov eax, dword ptr [ebp-12]
mov dword ptr [ebp-4], eax
.Lt_00C7:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size ASTBUILDDTORCALL, .-ASTBUILDDTORCALL
.balign 16

.globl ASTPATCHCTORCALL
ASTPATCHCTORCALL:
.type ASTPATCHCTORCALL, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_00CC:
push -1
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call ASTREPLACEINSTANCEARG
add esp, 12
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
.Lt_00CD:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size ASTPATCHCTORCALL, .-ASTPATCHCTORCALL
.balign 16

.globl ASTCALLCTORTOCALL
ASTCALLCTORTOCALL:
.type ASTCALLCTORTOCALL, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_00CE:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+60]
mov eax, dword ptr [ebx+12]
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-12], ebx
push 1
mov ebx, dword ptr [ebp-8]
push dword ptr [ebx+28]
call ASTFAKEINSTPTR
add esp, 4
push eax
push dword ptr [ebp-12]
call ASTREPLACEINSTANCEARG
add esp, 12
mov eax, dword ptr [ebp+8]
push dword ptr [eax+60]
call ASTDELTREE
add esp, 4
push dword ptr [ebp-8]
call ASTDTORLISTDEL
add esp, 4
push 0
push dword ptr [ebp-8]
call SYMBDELSYMBOL
add esp, 8
push dword ptr [ebp+8]
call ASTDELNODE
add esp, 4
mov eax, dword ptr [ebp-12]
mov dword ptr [ebp-4], eax
.Lt_00CF:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTCALLCTORTOCALL, .-ASTCALLCTORTOCALL
.balign 16

.globl ASTBUILDIMPLICITCTORCALL
ASTBUILDIMPLICITCTORCALL:
.type ASTBUILDIMPLICITCTORCALL, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
mov dword ptr [ebp-4], 0
.Lt_00D0:
lea eax, [ebp-8]
push eax
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call SYMBFINDCTOROVLPROC
add esp, 16
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_00D3
mov eax, dword ptr [ebp+20]
mov dword ptr [eax], 0
cmp dword ptr [ebp-8], 0
je .Lt_00D5
push dword ptr [ebp-8]
push 0
push 0
push dword ptr [ebp+8]
call SYMBGETCOMPCTORHEAD
add esp, 4
push eax
call ERRREPORTPARAM
add esp, 16
mov dword ptr [ebp-4], 0
jmp .Lt_00D1
.Lt_00D5:
.Lt_00D4:
mov eax, dword ptr [ebp+12]
mov dword ptr [ebp-4], eax
jmp .Lt_00D1
.Lt_00D3:
.Lt_00D2:
push dword ptr [ebp-12]
call SYMBCHECKACCESS
add esp, 4
test eax, eax
jne .Lt_00D7
push 0
push 0
push 204
call ERRREPORT
add esp, 12
.Lt_00D7:
.Lt_00D6:
push 0
push dword ptr [ebp-12]
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-16], eax
push 1
push -2147483648
push dword ptr [ebp+8]
call ASTFAKEINSTPTR
add esp, 4
push eax
push dword ptr [ebp-16]
call ASTNEWARG
add esp, 16
push dword ptr [ebp+16]
push -2147483648
push dword ptr [ebp+12]
push dword ptr [ebp-16]
call ASTNEWARG
add esp, 16
mov eax, dword ptr [ebp-12]
movsx ebx, word ptr [eax+64]
add ebx, -2
mov dword ptr [ebp-20], ebx
.Lt_00D8:
cmp dword ptr [ebp-20], 0
jle .Lt_00D9
push -1
push -2147483648
push 0
push dword ptr [ebp-16]
call ASTNEWARG
add esp, 16
dec dword ptr [ebp-20]
jmp .Lt_00D8
.Lt_00D9:
mov ebx, dword ptr [ebp+20]
mov dword ptr [ebx], -1
mov ebx, dword ptr [ebp-16]
mov dword ptr [ebp-4], ebx
.Lt_00D1:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTBUILDIMPLICITCTORCALL, .-ASTBUILDIMPLICITCTORCALL
.balign 16

.globl ASTBUILDIMPLICITCTORCALLEX
ASTBUILDIMPLICITCTORCALLEX:
.type ASTBUILDIMPLICITCTORCALLEX, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_00DA:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+28]
mov dword ptr [ebp-8], ebx
mov ebx, dword ptr [ebp+12]
cmp dword ptr [ebx], 10
jne .Lt_00DD
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebp-8]
cmp dword ptr [ebx+8], eax
jne .Lt_00DF
mov eax, dword ptr [ebp+20]
mov dword ptr [eax], -1
push dword ptr [ebp+12]
call ASTCALLCTORTOCALL
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_00DB
.Lt_00DF:
.Lt_00DE:
.Lt_00DD:
.Lt_00DC:
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call ASTBUILDIMPLICITCTORCALL
add esp, 16
mov dword ptr [ebp-4], eax
.Lt_00DB:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTBUILDIMPLICITCTORCALLEX, .-ASTBUILDIMPLICITCTORCALLEX
.balign 16

.globl ASTBUILDPROCADDROF
ASTBUILDPROCADDROF:
.type ASTBUILDPROCADDROF, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_00E0:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+8]
or ebx, 2
mov eax, ebx
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+8], eax
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp+8]
call ASTNEWVAR
add esp, 20
push eax
call ASTNEWADDROF
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_00E1:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTBUILDPROCADDROF, .-ASTBUILDPROCADDROF
.balign 16

.globl ASTBUILDPROCRESULTVAR
ASTBUILDPROCRESULTVAR:
.type ASTBUILDPROCRESULTVAR, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_00E2:
push dword ptr [ebp+8]
call SYMBPROCRETURNSONSTACK
add esp, 4
test eax, eax
je .Lt_00E5
push 0
push 0
push 0
push -2147483648
mov eax, dword ptr [ebp+12]
push dword ptr [eax+28]
push 50
push 0
push 0
push dword ptr [ebp+12]
call ASTNEWVAR
add esp, 20
push eax
call ASTNEWDEREF
add esp, 20
mov dword ptr [ebp-4], eax
jmp .Lt_00E4
.Lt_00E5:
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp+12]
call ASTNEWVAR
add esp, 20
mov dword ptr [ebp-4], eax
.Lt_00E4:
.Lt_00E3:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size ASTBUILDPROCRESULTVAR, .-ASTBUILDPROCRESULTVAR
.balign 16

.globl ASTBUILDTYPEINICTORLIST
ASTBUILDTYPEINICTORLIST:
.type ASTBUILDTYPEINICTORLIST, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_00E6:
mov dword ptr [ebp-8], 0
push 0
push 0
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+28]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+24]
call ASTTYPEINIBEGIN
add esp, 20
mov dword ptr [ebp-8], eax
push 0
push -2147483648
mov eax, dword ptr [ebp+8]
push dword ptr [eax+76]
push dword ptr [eax+72]
push dword ptr [ebp+8]
push dword ptr [ebp-8]
call ASTTYPEINIADDCTORLIST
add esp, 24
push -1
push dword ptr [ebp-8]
call ASTTYPEINIEND
add esp, 8
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_00E7:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size ASTBUILDTYPEINICTORLIST, .-ASTBUILDTYPEINICTORLIST
.balign 16

.globl ASTBUILDMULTIDEREF
ASTBUILDMULTIDEREF:
.type ASTBUILDMULTIDEREF, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_00E8:
.Lt_00EA:
cmp dword ptr [ebp+8], 0
jle .Lt_00EB
mov eax, dword ptr [ebp+16]
and eax, 480
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_00ED
cmp dword ptr [SYMB+99400], 0
jne .Lt_00EF
push 0
push -1
push 28
call ERRREPORT
add esp, 12
jmp .Lt_00EB
.Lt_00EF:
.Lt_00EE:
lea eax, [ebp-12]
push eax
push dword ptr [ebp+12]
push 76
call SYMBFINDUOPOVLPROC
add esp, 12
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
je .Lt_00F1
push 0
push 0
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call ASTBUILDCALL
add esp, 16
mov dword ptr [ebp+12], eax
cmp dword ptr [ebp+12], 0
jne .Lt_00F3
mov dword ptr [ebp-4], 0
jmp .Lt_00E9
.Lt_00F3:
.Lt_00F2:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp+16], ebx
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+8]
mov dword ptr [ebp+20], eax
jmp .Lt_00F0
.Lt_00F1:
push 0
push -1
push 28
call ERRREPORT
add esp, 12
jmp .Lt_00EB
.Lt_00F0:
jmp .Lt_00EC
.Lt_00ED:
mov eax, dword ptr [ebp+16]
and eax, 31
mov ebx, dword ptr [ebp+16]
and ebx, 480
add ebx, -32
or eax, ebx
mov ebx, dword ptr [ebp+16]
and ebx, 261632
sar ebx, 1
and ebx, 261632
or eax, ebx
mov dword ptr [ebp+16], eax
mov eax, dword ptr [ebp+16]
and eax, 480
je .Lt_00F4
mov dword ptr [ebp-8], 22
jmp .Lt_00FF
.Lt_00F4:
mov eax, dword ptr [ebp+16]
and eax, 31
mov dword ptr [ebp-8], eax
.Lt_00FF:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
je .Lt_00F9
.Lt_00FA:
cmp dword ptr [ebp-12], 21
jne .Lt_00F8
.Lt_00F9:
push 0
push -1
push 70
call ERRREPORT
add esp, 12
mov dword ptr [ebp+16], 1
jmp .Lt_00F6
.Lt_00F8:
cmp dword ptr [ebp-12], 20
jne .Lt_00FB
.Lt_00FC:
push 0
push -1
push 20
call ERRREPORT
add esp, 12
mov dword ptr [ebp+16], 1
.Lt_00FB:
.Lt_00F6:
cmp dword ptr [ENV+156], 0
je .Lt_00FE
push dword ptr [ebp+12]
call ASTBUILDPTRCHK
add esp, 4
mov dword ptr [ebp+12], eax
.Lt_00FE:
.Lt_00FD:
push 0
push 0
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call ASTNEWDEREF
add esp, 20
mov dword ptr [ebp+12], eax
.Lt_00EC:
dec dword ptr [ebp+8]
jmp .Lt_00EA
.Lt_00EB:
mov eax, dword ptr [ebp+12]
mov dword ptr [ebp-4], eax
.Lt_00E9:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTBUILDMULTIDEREF, .-ASTBUILDMULTIDEREF
.balign 16

.globl ASTBUILDARRAYDESCINITREE
ASTBUILDARRAYDESCINITREE:
.type ASTBUILDARRAYDESCINITREE, @function
push ebp
mov ebp, esp
sub esp, 52
push ebx
push esi
mov dword ptr [ebp-4], 0
.Lt_0101:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 8
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax+4]
and ecx, 16
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
or ebx, ecx
je .Lt_0104
mov dword ptr [ebp-4], 0
jmp .Lt_0102
.Lt_0104:
.Lt_0103:
mov ecx, dword ptr [ebp+8]
push dword ptr [ecx+48]
push dword ptr [ecx+44]
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ecx]
cmp ebx, 12
sete bl
shr ebx, 1
sbb ebx, ebx
not ebx
push ebx
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+28]
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+24]
call ASTTYPEINIBEGIN
add esp, 20
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+24]
mov dword ptr [ebp-12], ebx
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+28]
mov dword ptr [ebp-28], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+28]
mov eax, dword ptr [ebx+56]
mov dword ptr [ebp-20], eax
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 4
test ebx, ebx
je .Lt_0106
push dword ptr [ebp-28]
mov ebx, dword ptr [ebp-12]
and ebx, 31
mov eax, dword ptr [ebp-12]
and eax, 480
add eax, 32
or ebx, eax
mov eax, dword ptr [ebp-12]
and eax, 261632
sal eax, 1
or ebx, eax
push ebx
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp+16], eax
jmp .Lt_0105
.Lt_0106:
cmp dword ptr [ebp+16], 0
je .Lt_0108
jmp .Lt_0107
.Lt_0108:
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp+12]
call ASTNEWVAR
add esp, 20
mov dword ptr [ebp+16], eax
.Lt_0107:
push dword ptr [ebp+16]
call ASTNEWADDROF
add esp, 4
mov dword ptr [ebp+16], eax
.Lt_0105:
push 0
push dword ptr [ebp-8]
call ASTTYPEINISCOPEBEGIN
add esp, 8
push 0
push -2147483648
push dword ptr [ebp-20]
push 1
push 0
push 0
push 7
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 4
test ebx, ebx
je .Lt_0109
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
jmp .Lt_0118
.Lt_0109:
mov ebx, dword ptr [ebp+12]
mov ecx, dword ptr [ebx+64]
mov eax, dword ptr [ebx+68]
mov dword ptr [ebp-36], ecx
mov dword ptr [ebp-32], eax
.Lt_0118:
push dword ptr [ebp-32]
push dword ptr [ebp-36]
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp+16]
call ASTCLONETREE
add esp, 4
push eax
push 28
call ASTNEWBOP
add esp, 20
push eax
push dword ptr [ebp-8]
call ASTTYPEINIADDASSIGN
add esp, 20
mov eax, dword ptr [ebp-20]
mov ecx, dword ptr [eax+160]
mov dword ptr [ebp-20], ecx
push 0
push -2147483648
push dword ptr [ebp-20]
push dword ptr [ebp+16]
push dword ptr [ebp-8]
call ASTTYPEINIADDASSIGN
add esp, 20
mov ecx, dword ptr [ebp-20]
mov eax, dword ptr [ecx+160]
mov dword ptr [ebp-20], eax
push 0
push -2147483648
push dword ptr [ebp-20]
push 0
push 7
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax+4]
and ecx, 4
test ecx, ecx
je .Lt_010B
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
jmp .Lt_0119
.Lt_010B:
mov ecx, dword ptr [ebp+12]
mov eax, dword ptr [ebp+12]
mov esi, dword ptr [eax+72]
mov ebx, dword ptr [eax+76]
push dword ptr [ecx+40]
push dword ptr [ecx+36]
push ebx
push esi
mov eax, [esp+0]
mul dword ptr [esp+8]
xchg eax, [esp+0]
imul eax, [esp+12]
add eax, edx
mov edx, [esp+4]
imul edx, [esp+8]
add edx, eax
mov [esp+4], edx
pop esi
pop ebx
add esp, 8
mov dword ptr [ebp-44], esi
mov dword ptr [ebp-40], ebx
.Lt_0119:
push dword ptr [ebp-40]
push dword ptr [ebp-44]
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp-8]
call ASTTYPEINIADDASSIGN
add esp, 20
mov eax, dword ptr [ebp-20]
mov esi, dword ptr [eax+160]
mov dword ptr [ebp-20], esi
push 0
push -2147483648
push dword ptr [ebp-20]
push 0
push 7
mov esi, dword ptr [ebp+12]
push dword ptr [esi+40]
push dword ptr [esi+36]
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp-8]
call ASTTYPEINIADDASSIGN
add esp, 20
mov eax, dword ptr [ebp-20]
mov esi, dword ptr [eax+160]
mov dword ptr [ebp-20], esi
mov esi, dword ptr [ebp+12]
mov eax, dword ptr [esi+56]
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], -1
jne .Lt_010E
mov dword ptr [ebp-16], 0
.Lt_010E:
.Lt_010D:
push 0
push -2147483648
push dword ptr [ebp-20]
push 0
push 7
mov esi, dword ptr [ebp-16]
mov eax, esi
sar eax, 31
push eax
push esi
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp-8]
call ASTTYPEINIADDASSIGN
add esp, 20
mov eax, dword ptr [ebp-20]
mov esi, dword ptr [eax+160]
mov dword ptr [ebp-20], esi
mov esi, dword ptr [ebp-20]
mov eax, dword ptr [esi+28]
mov esi, dword ptr [eax+56]
mov dword ptr [ebp-24], esi
push 0
push dword ptr [ebp-8]
call ASTTYPEINISCOPEBEGIN
add esp, 8
mov esi, dword ptr [ebp+12]
mov eax, dword ptr [esi+4]
and eax, 65540
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_0110
mov dword ptr [ebp-48], 0
mov eax, dword ptr [ebp+12]
mov esi, dword ptr [eax+56]
dec esi
mov dword ptr [ebp-52], esi
jmp .Lt_0112
.Lt_0115:
mov esi, dword ptr [ebp-24]
mov dword ptr [ebp-20], esi
push 0
push dword ptr [ebp-8]
call ASTTYPEINISCOPEBEGIN
add esp, 8
push 0
push -2147483648
push dword ptr [ebp-20]
push 0
push 7
mov esi, dword ptr [ebp+12]
mov eax, dword ptr [ebp-48]
sal eax, 4
mov ebx, dword ptr [esi+60]
add ebx, eax
mov eax, dword ptr [ebp+12]
mov esi, dword ptr [ebp-48]
sal esi, 4
mov ecx, dword ptr [eax+60]
add ecx, esi
mov eax, dword ptr [ebx+8]
mov esi, dword ptr [ebx+12]
sub eax, dword ptr [ecx]
sbb esi, dword ptr [ecx+4]
add eax, 1
adc esi, 0
push esi
push eax
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp-8]
call ASTTYPEINIADDASSIGN
add esp, 20
mov eax, dword ptr [ebp-20]
mov esi, dword ptr [eax+160]
mov dword ptr [ebp-20], esi
push 0
push -2147483648
push dword ptr [ebp-20]
push 0
push 7
mov esi, dword ptr [ebp+12]
mov eax, dword ptr [ebp-48]
sal eax, 4
mov ecx, dword ptr [esi+60]
add ecx, eax
push dword ptr [ecx+4]
push dword ptr [ecx]
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp-8]
call ASTTYPEINIADDASSIGN
add esp, 20
mov eax, dword ptr [ebp-20]
mov ecx, dword ptr [eax+160]
mov dword ptr [ebp-20], ecx
push 0
push -2147483648
push dword ptr [ebp-20]
push 0
push 7
mov ecx, dword ptr [ebp+12]
mov eax, dword ptr [ebp-48]
sal eax, 4
mov esi, dword ptr [ecx+60]
add esi, eax
push dword ptr [esi+12]
push dword ptr [esi+8]
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp-8]
call ASTTYPEINIADDASSIGN
add esp, 20
push 0
push dword ptr [ebp-8]
call ASTTYPEINISCOPEEND
add esp, 8
.Lt_0113:
inc dword ptr [ebp-48]
.Lt_0112:
mov eax, dword ptr [ebp-52]
cmp dword ptr [ebp-48], eax
jle .Lt_0115
.Lt_0114:
jmp .Lt_010F
.Lt_0110:
mov eax, dword ptr [ebp+12]
mov esi, dword ptr [eax+56]
mov dword ptr [ebp-16], esi
cmp dword ptr [ebp-16], -1
jne .Lt_0117
mov dword ptr [ebp-16], 8
.Lt_0117:
.Lt_0116:
mov eax, dword ptr [ebp-16]
mov esi, eax
sar esi, 31
mov ecx, dword ptr [SYMB+99576]
push dword ptr [ecx+40]
push dword ptr [ecx+36]
push esi
push eax
mov eax, [esp+0]
mul dword ptr [esp+8]
xchg eax, [esp+0]
imul eax, [esp+12]
add eax, edx
mov edx, [esp+4]
imul edx, [esp+8]
add edx, eax
mov [esp+4], edx
pop eax
pop esi
add esp, 8
push esi
push eax
push dword ptr [ebp-8]
call ASTTYPEINIADDPAD
add esp, 12
.Lt_010F:
push 0
push dword ptr [ebp-8]
call ASTTYPEINISCOPEEND
add esp, 8
push 0
push dword ptr [ebp-8]
call ASTTYPEINISCOPEEND
add esp, 8
push -1
push dword ptr [ebp-8]
call ASTTYPEINIEND
add esp, 8
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0102:
mov eax, dword ptr [ebp-4]
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTBUILDARRAYDESCINITREE, .-ASTBUILDARRAYDESCINITREE
.balign 16

.globl ASTBUILDARRAYBOUND
ASTBUILDARRAYBOUND:
.type ASTBUILDARRAYBOUND, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_0138:
push offset Lt_013A
push 2
push dword ptr [ebp+16]
push 0
call ERRPUSHPARAMLOCATION
add esp, 16
push 0
push 0
push dword ptr [ebp+12]
push 0
push 7
call ASTNEWCONV
add esp, 20
mov dword ptr [ebp+12], eax
call ERRPOPPARAMLOCATION
mov eax, dword ptr [ebp+16]
cmp eax, 491
sete al
shr eax, 1
sbb eax, eax
push eax
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HCONSTBOUND
add esp, 12
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_013C
mov eax, dword ptr [ebp+16]
cmp eax, 491
sete al
shr eax, 1
sbb eax, eax
push eax
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call RTLARRAYBOUND
add esp, 12
mov dword ptr [ebp-8], eax
.Lt_013C:
.Lt_013B:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0139:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size ASTBUILDARRAYBOUND, .-ASTBUILDARRAYBOUND
.balign 16

.globl ASTBUILDSTRPTR
ASTBUILDSTRPTR:
.type ASTBUILDSTRPTR, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_013F:
mov dword ptr [ebp-12], 3
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 512
test ebx, ebx
je .Lt_0142
or dword ptr [ebp-12], 512
.Lt_0142:
.Lt_0141:
mov ebx, dword ptr [ebp-12]
and ebx, 31
mov eax, dword ptr [ebp-12]
and eax, 480
add eax, 32
or ebx, eax
mov eax, dword ptr [ebp-12]
and eax, 261632
sal eax, 1
or ebx, eax
or ebx, 512
mov dword ptr [ebp-12], ebx
mov ebx, dword ptr [ebp-12]
and ebx, 31
mov eax, dword ptr [ebp-12]
and eax, 480
add eax, 32
or ebx, eax
mov eax, dword ptr [ebp-12]
and eax, 261632
sal eax, 1
or ebx, eax
mov dword ptr [ebp-12], ebx
push 0
push 0
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp+8]
call ASTNEWADDROF
add esp, 4
push eax
push 0
push dword ptr [ebp-12]
call ASTNEWCONV
add esp, 20
push eax
call ASTNEWDEREF
add esp, 20
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0140:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTBUILDSTRPTR, .-ASTBUILDSTRPTR
.balign 16
fb_ctor__astzhelper:
.type fb_ctor__astzhelper, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__astzhelper, .-fb_ctor__astzhelper
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
ASTFAKEINSTPTR:
.type ASTFAKEINSTPTR, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_00CA:
push dword ptr [ebp+8]
push 50
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-4], eax
.Lt_00CB:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size ASTFAKEINSTPTR, .-ASTFAKEINSTPTR
.balign 16
HCONSTBOUND:
.type HCONSTBOUND, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
mov dword ptr [ebp-4], 0
.Lt_011E:
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-24], ebx
cmp dword ptr [ebp-24], 17
je .Lt_0123
.Lt_0124:
cmp dword ptr [ebp-24], 19
jne .Lt_0122
.Lt_0123:
jmp .Lt_0120
.Lt_0122:
jmp .Lt_011F
.Lt_0125:
.Lt_0120:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+12]
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0127
jmp .Lt_011F
.Lt_0127:
.Lt_0126:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+4]
and ebx, 65540
test ebx, ebx
je .Lt_0129
jmp .Lt_011F
.Lt_0129:
.Lt_0128:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx]
cmp eax, 16
sete al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_012B
jmp .Lt_011F
.Lt_012B:
.Lt_012A:
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax+20]
mov ebx, dword ptr [eax+24]
add ecx, 4294967295
adc ebx, 4294967295
mov eax, ecx
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp-12]
test eax, eax
setge al
shr eax, 1
sbb eax, eax
mov ecx, dword ptr [ebp-8]
mov ebx, dword ptr [ebp-12]
cmp ebx, dword ptr [ecx+56]
setl bl
shr ebx, 1
sbb ebx, ebx
and eax, ebx
je .Lt_012D
cmp dword ptr [ebp+16], 0
je .Lt_012F
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebp-12]
sal eax, 4
mov ecx, dword ptr [ebx+60]
add ecx, eax
mov ebx, dword ptr [ecx]
mov eax, dword ptr [ecx+4]
mov dword ptr [ebp-20], ebx
mov dword ptr [ebp-16], eax
jmp .Lt_012E
.Lt_012F:
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebp-12]
sal eax, 4
mov ecx, dword ptr [ebx+60]
add ecx, eax
mov ebx, dword ptr [ecx+8]
mov eax, dword ptr [ecx+12]
mov dword ptr [ebp-20], ebx
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 2147483648
jne .Lt_0131
cmp dword ptr [ebp-20], 0
jne .Lt_0131
.Lt_0148:
jmp .Lt_011F
.Lt_0131:
.Lt_0130:
.Lt_012E:
jmp .Lt_012C
.Lt_012D:
cmp dword ptr [ebp-12], -1
jne .Lt_0133
cmp dword ptr [ebp+16], 0
je .Lt_0134
mov dword ptr [ebp-24], 1
jmp .Lt_0143
.Lt_0134:
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx+56]
mov dword ptr [ebp-24], eax
.Lt_0143:
mov ebx, dword ptr [ebp-24]
mov eax, ebx
sar eax, 31
mov dword ptr [ebp-20], ebx
mov dword ptr [ebp-16], eax
jmp .Lt_0132
.Lt_0133:
cmp dword ptr [ebp+16], 0
je .Lt_0136
mov dword ptr [ebp-24], 0
jmp .Lt_0144
.Lt_0136:
mov dword ptr [ebp-24], -1
.Lt_0144:
mov eax, dword ptr [ebp-24]
mov ebx, eax
sar ebx, 31
mov dword ptr [ebp-20], eax
mov dword ptr [ebp-16], ebx
.Lt_0132:
.Lt_012C:
push 0
push 7
push dword ptr [ebp-16]
push dword ptr [ebp-20]
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-4], eax
.Lt_011F:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HCONSTBOUND, .-HCONSTBOUND
	#FreeBASIC-1.01.0-source/src/compiler/ast-helper.bas' compilation took 0.03954408399295062 secs

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
Lt_013A:	.ascii	"dimension\0"

.section .ctors, "aw", @progbits
.int fb_ctor__astzhelper
