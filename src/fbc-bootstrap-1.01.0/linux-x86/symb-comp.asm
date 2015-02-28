	.intel_syntax noprefix

	#FreeBASIC-1.01.0-source/src/compiler/symb-comp.bas' compilation started at 16:30:08 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl SYMBCOMPINIT
SYMBCOMPINIT:
.type SYMBCOMPINIT, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0057:
mov dword ptr [ebp-4], 0
.Lt_005C:
mov eax, dword ptr [ebp-4]
sal eax, 2
mov ebx, offset SYMB
add ebx, eax
mov dword ptr [ebx+99096], 0
.Lt_005A:
inc dword ptr [ebp-4]
.Lt_0059:
cmp dword ptr [ebp-4], 115
jle .Lt_005C
.Lt_005B:
push 0
push 16
push 16
lea ebx, [SYMB+98528]
push ebx
call STACKNEW
add esp, 16
.Lt_0058:
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBCOMPINIT, .-SYMBCOMPINIT
.balign 16

.globl SYMBCOMPEND
SYMBCOMPEND:
.type SYMBCOMPEND, @function
.Lt_005D:
lea eax, [SYMB+98528]
push eax
call STACKFREE
add esp, 4
.Lt_005E:
ret
.size SYMBCOMPEND, .-SYMBCOMPEND
.balign 16

.globl SYMBUDTALLOCEXT
SYMBUDTALLOCEXT:
.type SYMBUDTALLOCEXT, @function
push ebp
mov ebp, esp
push ebx
.Lt_005F:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+124], 0
jne .Lt_0062
push 156
call XCALLOCATE
add esp, 4
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+124], eax
.Lt_0062:
.Lt_0061:
.Lt_0060:
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBUDTALLOCEXT, .-SYMBUDTALLOCEXT
.balign 16

.globl SYMBUDTDECLAREDEFAULTMEMBERS
SYMBUDTDECLAREDEFAULTMEMBERS:
.type SYMBUDTDECLAREDEFAULTMEMBERS, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_00A7:
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax+92], 0
je .Lt_00AA
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+92]
push dword ptr [ebx+28]
call SYMBGETCOMPDEFCTOR
add esp, 4
test eax, eax
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax+92]
push dword ptr [ecx+28]
call SYMBGETCOMPCTORHEAD
add esp, 4
test eax, eax
setne cl
shr ecx, 1
sbb ecx, ecx
and ebx, ecx
mov dword ptr [ebp-4], ebx
jmp .Lt_00A9
.Lt_00AA:
mov dword ptr [ebp-4], 0
.Lt_00A9:
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx], 0
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+8], 0
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+12], 0
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+16], 0
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+4], 0
mov ebx, dword ptr [ebp+12]
movsx ecx, word ptr [ebx+112]
and ecx, 8
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
mov ebx, dword ptr [ebp+12]
movsx eax, word ptr [ebx+112]
and eax, 4096
test eax, eax
setne al
shr eax, 1
sbb eax, eax
or ecx, eax
push dword ptr [ebp+12]
mov ebx, ecx
call SYMBGETCOMPCTORHEAD
add esp, 4
test eax, eax
sete cl
shr ecx, 1
sbb ecx, ecx
and ebx, ecx
je .Lt_00AC
cmp dword ptr [ebp-4], 0
je .Lt_00AE
push 0
push 0
push 185
call ERRREPORT
add esp, 12
jmp .Lt_00AD
.Lt_00AE:
push 5120
push -2147483648
push -1
push dword ptr [ebp+12]
call HDECLAREPROC
add esp, 16
mov ecx, dword ptr [ebp+8]
mov dword ptr [ecx], eax
.Lt_00AD:
.Lt_00AC:
.Lt_00AB:
mov eax, dword ptr [ebp+12]
movsx ecx, word ptr [eax+112]
and ecx, 8
test ecx, ecx
je .Lt_00B0
push dword ptr [ebp+12]
call SYMBUDTALLOCEXT
add esp, 4
mov ecx, dword ptr [ebp+12]
mov eax, dword ptr [ecx+124]
cmp dword ptr [eax+24], 0
jne .Lt_00B2
push 17408
push 530
push 0
push dword ptr [ebp+12]
call HDECLAREPROC
add esp, 16
mov ecx, dword ptr [ebp+8]
mov dword ptr [ecx+16], eax
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+16]
call SYMBPROCCHECKOVERRIDDEN
add esp, 8
.Lt_00B2:
.Lt_00B1:
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax+124]
cmp dword ptr [ecx+12], 0
jne .Lt_00B4
cmp dword ptr [ebp-4], 0
je .Lt_00B6
push 0
push 0
push 187
call ERRREPORT
add esp, 12
jmp .Lt_00B5
.Lt_00B6:
push 5120
push 530
push -1
push dword ptr [ebp+12]
call HDECLAREPROC
add esp, 16
mov ecx, dword ptr [ebp+8]
mov dword ptr [ecx+12], eax
.Lt_00B5:
.Lt_00B4:
.Lt_00B3:
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax+124]
cmp dword ptr [ecx+20], 0
setne al
shr eax, 1
sbb eax, eax
mov ecx, dword ptr [ebp+12]
mov ebx, dword ptr [ecx+124]
cmp dword ptr [ebx+8], 0
sete cl
shr ecx, 1
sbb ecx, ecx
and eax, ecx
je .Lt_00B8
cmp dword ptr [ebp-4], 0
je .Lt_00BA
push 0
push 0
push 186
call ERRREPORT
add esp, 12
jmp .Lt_00B9
.Lt_00BA:
push 5120
push 18
push -1
push dword ptr [ebp+12]
call HDECLAREPROC
add esp, 16
mov ecx, dword ptr [ebp+8]
mov dword ptr [ecx+8], eax
.Lt_00B9:
.Lt_00B8:
.Lt_00B7:
.Lt_00B0:
.Lt_00AF:
mov eax, dword ptr [ebp+12]
movsx ecx, word ptr [eax+112]
and ecx, 16
test ecx, ecx
je .Lt_00BC
push dword ptr [ebp+12]
call SYMBUDTALLOCEXT
add esp, 4
mov ecx, dword ptr [ebp+12]
mov eax, dword ptr [ecx+124]
cmp dword ptr [eax+16], 0
jne .Lt_00BE
push 8192
push -2147483648
push -1
push dword ptr [ebp+12]
call HDECLAREPROC
add esp, 16
mov ecx, dword ptr [ebp+8]
mov dword ptr [ecx+4], eax
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+4]
call SYMBPROCCHECKOVERRIDDEN
add esp, 8
.Lt_00BE:
.Lt_00BD:
.Lt_00BC:
.Lt_00BB:
.Lt_00A8:
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBUDTDECLAREDEFAULTMEMBERS, .-SYMBUDTDECLAREDEFAULTMEMBERS
.balign 16

.globl SYMBUDTIMPLEMENTDEFAULTMEMBERS
SYMBUDTIMPLEMENTDEFAULTMEMBERS:
.type SYMBUDTIMPLEMENTDEFAULTMEMBERS, @function
push ebp
mov ebp, esp
push ebx
.Lt_00C6:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+8]
and ebx, 4194304
test ebx, ebx
je .Lt_00C9
push dword ptr [ebp+12]
call SYMBUDTALLOCEXT
add esp, 4
push dword ptr [ebp+12]
call HSETMINIMUMVTABLESIZE
add esp, 4
mov ebx, dword ptr [SYMB+99592]
cmp dword ptr [ebp+12], ebx
je .Lt_00CB
push dword ptr [ebp+12]
call HBUILDRTTI
add esp, 4
push dword ptr [ebp+12]
call HBUILDVTABLE
add esp, 4
.Lt_00CB:
.Lt_00CA:
.Lt_00C9:
.Lt_00C8:
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx], 0
je .Lt_00CD
push 0
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx]
push dword ptr [ebp+12]
call HADDCTORBODY
add esp, 12
.Lt_00CD:
.Lt_00CC:
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx+16], 0
je .Lt_00CF
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+16]
push dword ptr [ebp+12]
call HADDLETOPBODY
add esp, 8
.Lt_00CF:
.Lt_00CE:
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx+12], 0
je .Lt_00D1
push -1
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+12]
push dword ptr [ebp+12]
call HADDCTORBODY
add esp, 12
.Lt_00D1:
.Lt_00D0:
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx+8], 0
je .Lt_00D3
push -1
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+8]
push dword ptr [ebp+12]
call HADDCTORBODY
add esp, 12
.Lt_00D3:
.Lt_00D2:
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx+4], 0
je .Lt_00D5
push 0
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+4]
push dword ptr [ebp+12]
call HADDCTORBODY
add esp, 12
.Lt_00D5:
.Lt_00D4:
.Lt_00C7:
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBUDTIMPLEMENTDEFAULTMEMBERS, .-SYMBUDTIMPLEMENTDEFAULTMEMBERS
.balign 16

.globl SYMBCOMPISTRIVIAL
SYMBCOMPISTRIVIAL:
.type SYMBCOMPISTRIVIAL, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_00E0:
push dword ptr [ebp+8]
call SYMBGETCOMPCOPYCTOR
add esp, 4
test eax, eax
sete bl
shr ebx, 1
sbb ebx, ebx
push dword ptr [ebp+8]
call SYMBGETCOMPDTOR
add esp, 4
test eax, eax
sete cl
shr ecx, 1
sbb ecx, ecx
and ebx, ecx
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ecx+8]
and eax, 4194304
test eax, eax
setne al
shr eax, 1
sbb eax, eax
not eax
and ebx, eax
mov dword ptr [ebp-4], ebx
.Lt_00E1:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBCOMPISTRIVIAL, .-SYMBCOMPISTRIVIAL
.balign 16

.globl SYMBSETCOMPCTORHEAD
SYMBSETCOMPCTORHEAD:
.type SYMBSETCOMPCTORHEAD, @function
push ebp
mov ebp, esp
push ebx
.Lt_00E5:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 10
jne .Lt_00E8
push dword ptr [ebp+8]
call SYMBUDTALLOCEXT
add esp, 4
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+124]
cmp dword ptr [ebx], 0
jne .Lt_00EA
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+124]
mov ebx, dword ptr [ebp+12]
mov dword ptr [eax], ebx
.Lt_00EA:
.Lt_00E9:
.Lt_00E8:
.Lt_00E7:
.Lt_00E6:
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBSETCOMPCTORHEAD, .-SYMBSETCOMPCTORHEAD
.balign 16

.globl SYMBCHECKCOMPCTOR
SYMBCHECKCOMPCTOR:
.type SYMBCHECKCOMPCTOR, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_00EB:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 10
jne .Lt_00EE
mov eax, dword ptr [ebp+12]
mov bx, word ptr [eax+64]
mov word ptr [ebp-4], bx
movsx ebx, word ptr [ebp-4]
cmp ebx, 1
jne .Lt_00F1
.Lt_00F2:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+124]
mov ebx, dword ptr [ebp+12]
mov dword ptr [eax+4], ebx
jmp .Lt_00EF
.Lt_00F1:
movsx ebx, word ptr [ebp-4]
cmp ebx, 2
jne .Lt_00F3
.Lt_00F4:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+124]
cmp dword ptr [eax+8], 0
jne .Lt_00F6
push dword ptr [ebp+8]
push 18
push dword ptr [ebp+12]
call HHASBYREFSELFPARAM
add esp, 12
test eax, eax
je .Lt_00F8
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+124]
mov eax, dword ptr [ebp+12]
mov dword ptr [ebx+8], eax
.Lt_00F8:
.Lt_00F7:
.Lt_00F6:
.Lt_00F5:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+124]
cmp dword ptr [ebx+12], 0
jne .Lt_00FA
push dword ptr [ebp+8]
push 530
push dword ptr [ebp+12]
call HHASBYREFSELFPARAM
add esp, 12
test eax, eax
je .Lt_00FC
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+124]
mov eax, dword ptr [ebp+12]
mov dword ptr [ebx+12], eax
.Lt_00FC:
.Lt_00FB:
.Lt_00FA:
.Lt_00F9:
.Lt_00F3:
.Lt_00EF:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+124]
cmp dword ptr [ebx+4], 0
jne .Lt_00FE
mov ebx, dword ptr [ebp+12]
movsx eax, word ptr [ebx+66]
mov ebx, dword ptr [ebp+12]
movsx ecx, word ptr [ebx+64]
dec ecx
cmp eax, ecx
jne .Lt_0100
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ecx+124]
mov ecx, dword ptr [ebp+12]
mov dword ptr [eax+4], ecx
.Lt_0100:
.Lt_00FF:
.Lt_00FE:
.Lt_00FD:
.Lt_00EE:
.Lt_00ED:
.Lt_00EC:
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBCHECKCOMPCTOR, .-SYMBCHECKCOMPCTOR
.balign 16

.globl SYMBSETCOMPDTOR
SYMBSETCOMPDTOR:
.type SYMBSETCOMPDTOR, @function
push ebp
mov ebp, esp
push ebx
.Lt_0101:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 10
jne .Lt_0104
push dword ptr [ebp+8]
call SYMBUDTALLOCEXT
add esp, 4
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+124]
cmp dword ptr [ebx+16], 0
jne .Lt_0106
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+124]
mov ebx, dword ptr [ebp+12]
mov dword ptr [eax+16], ebx
.Lt_0106:
.Lt_0105:
.Lt_0104:
.Lt_0103:
.Lt_0102:
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBSETCOMPDTOR, .-SYMBSETCOMPDTOR
.balign 16

.globl SYMBGETCOMPCTORHEAD
SYMBGETCOMPCTORHEAD:
.type SYMBGETCOMPCTORHEAD, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_0107:
cmp dword ptr [ebp+8], 0
je .Lt_010A
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 10
jne .Lt_010C
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+124], 0
je .Lt_010E
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+124]
mov eax, dword ptr [ebx]
mov dword ptr [ebp-4], eax
.Lt_010E:
.Lt_010D:
.Lt_010C:
.Lt_010B:
.Lt_010A:
.Lt_0109:
.Lt_0108:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBGETCOMPCTORHEAD, .-SYMBGETCOMPCTORHEAD
.balign 16

.globl SYMBGETCOMPDEFCTOR
SYMBGETCOMPDEFCTOR:
.type SYMBGETCOMPDEFCTOR, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_010F:
cmp dword ptr [ebp+8], 0
je .Lt_0112
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 10
jne .Lt_0114
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+124], 0
je .Lt_0116
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+124]
mov eax, dword ptr [ebx+4]
mov dword ptr [ebp-4], eax
.Lt_0116:
.Lt_0115:
.Lt_0114:
.Lt_0113:
.Lt_0112:
.Lt_0111:
.Lt_0110:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBGETCOMPDEFCTOR, .-SYMBGETCOMPDEFCTOR
.balign 16

.globl SYMBGETCOMPDTOR
SYMBGETCOMPDTOR:
.type SYMBGETCOMPDTOR, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_011B:
cmp dword ptr [ebp+8], 0
je .Lt_011E
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 10
jne .Lt_0120
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+124], 0
je .Lt_0122
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+124]
mov eax, dword ptr [ebx+16]
mov dword ptr [ebp-4], eax
.Lt_0122:
.Lt_0121:
.Lt_0120:
.Lt_011F:
.Lt_011E:
.Lt_011D:
.Lt_011C:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBGETCOMPDTOR, .-SYMBGETCOMPDTOR
.balign 16

.globl SYMBCHECKCOMPLETOP
SYMBCHECKCOMPLETOP:
.type SYMBCHECKCOMPLETOP, @function
push ebp
mov ebp, esp
push ebx
.Lt_0123:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 10
jne .Lt_0126
push dword ptr [ebp+8]
push 18
push dword ptr [ebp+12]
call HHASBYREFSELFPARAM
add esp, 12
test eax, eax
je .Lt_0128
push dword ptr [ebp+8]
call SYMBUDTALLOCEXT
add esp, 4
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+124]
mov eax, dword ptr [ebp+12]
mov dword ptr [ebx+20], eax
.Lt_0128:
.Lt_0127:
push dword ptr [ebp+8]
push 530
push dword ptr [ebp+12]
call HHASBYREFSELFPARAM
add esp, 12
test eax, eax
je .Lt_012A
push dword ptr [ebp+8]
call SYMBUDTALLOCEXT
add esp, 4
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+124]
mov eax, dword ptr [ebp+12]
mov dword ptr [ebx+24], eax
.Lt_012A:
.Lt_0129:
.Lt_0126:
.Lt_0125:
.Lt_0124:
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBCHECKCOMPLETOP, .-SYMBCHECKCOMPLETOP
.balign 16

.globl SYMBCOMPHASCOPYLETOPS
SYMBCOMPHASCOPYLETOPS:
.type SYMBCOMPHASCOPYLETOPS, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_012B:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+124], 0
je .Lt_012E
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+124]
cmp dword ptr [ebx+20], 0
setne al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebx+124]
cmp dword ptr [ecx+24], 0
setne bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
mov dword ptr [ebp-4], eax
.Lt_012E:
.Lt_012D:
.Lt_012C:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBCOMPHASCOPYLETOPS, .-SYMBCOMPHASCOPYLETOPS
.balign 16

.globl SYMBGETCOMPOPOVLHEAD
SYMBGETCOMPOPOVLHEAD:
.type SYMBGETCOMPOPOVLHEAD, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0131:
mov eax, dword ptr [ebp+12]
sal eax, 4
mov ebx, dword ptr [AST_OPTB+eax+4]
and ebx, 1
test ebx, ebx
je .Lt_0134
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx]
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 10
jne .Lt_0137
.Lt_0138:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+124], 0
jne .Lt_013A
mov dword ptr [ebp-4], 0
jmp .Lt_0132
.Lt_013A:
.Lt_0139:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+12]
sal ebx, 2
mov ecx, dword ptr [eax+124]
add ecx, ebx
mov ebx, dword ptr [ecx+28]
mov dword ptr [ebp-4], ebx
jmp .Lt_0135
.Lt_0137:
cmp dword ptr [ebp-8], 9
jne .Lt_013B
.Lt_013C:
mov dword ptr [ebp-4], 0
jmp .Lt_0135
.Lt_013B:
cmp dword ptr [ebp-8], 11
jne .Lt_013D
.Lt_013E:
.Lt_013D:
.Lt_0135:
jmp .Lt_0133
.Lt_0134:
mov ebx, dword ptr [ebp+12]
sal ebx, 2
mov ecx, offset SYMB
add ecx, ebx
mov ebx, dword ptr [ecx+99096]
mov dword ptr [ebp-4], ebx
.Lt_0133:
.Lt_0132:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBGETCOMPOPOVLHEAD, .-SYMBGETCOMPOPOVLHEAD
.balign 16

.globl SYMBSETCOMPOPOVLHEAD
SYMBSETCOMPOPOVLHEAD:
.type SYMBSETCOMPOPOVLHEAD, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_013F:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+108]
mov eax, dword ptr [ebx+40]
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp-4]
sal eax, 4
mov ebx, dword ptr [AST_OPTB+eax+4]
and ebx, 1
test ebx, ebx
je .Lt_0142
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx], 10
jne .Lt_0144
push dword ptr [ebp+8]
call SYMBUDTALLOCEXT
add esp, 4
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp-4]
sal eax, 2
mov ecx, dword ptr [ebx+124]
add ecx, eax
mov eax, dword ptr [ebp+12]
mov dword ptr [ecx+28], eax
.Lt_0144:
.Lt_0143:
cmp dword ptr [ebp-4], 0
jne .Lt_0146
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call SYMBCHECKCOMPLETOP
add esp, 8
.Lt_0146:
.Lt_0145:
jmp .Lt_0141
.Lt_0142:
mov eax, dword ptr [ebp-4]
sal eax, 2
mov ecx, offset SYMB
add ecx, eax
mov eax, dword ptr [ebp+12]
mov dword ptr [ecx+99096], eax
.Lt_0141:
.Lt_0140:
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBSETCOMPOPOVLHEAD, .-SYMBSETCOMPOPOVLHEAD
.balign 16

.globl SYMBCOMPADDVIRTUAL
SYMBCOMPADDVIRTUAL:
.type SYMBCOMPADDVIRTUAL, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_0147:
push dword ptr [ebp+8]
call SYMBUDTALLOCEXT
add esp, 4
push dword ptr [ebp+8]
call HSETMINIMUMVTABLESIZE
add esp, 4
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+124]
mov eax, dword ptr [ebx+140]
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+124]
inc dword ptr [ebx+140]
.Lt_0148:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBCOMPADDVIRTUAL, .-SYMBCOMPADDVIRTUAL
.balign 16

.globl SYMBCOMPGETABSTRACTCOUNT
SYMBCOMPGETABSTRACTCOUNT:
.type SYMBCOMPGETABSTRACTCOUNT, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_0149:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+124], 0
je .Lt_014C
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+124]
mov eax, dword ptr [ebx+152]
mov dword ptr [ebp-4], eax
.Lt_014C:
.Lt_014B:
.Lt_014A:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBCOMPGETABSTRACTCOUNT, .-SYMBCOMPGETABSTRACTCOUNT
.balign 16

.globl SYMBNESTBEGIN
SYMBNESTBEGIN:
.type SYMBNESTBEGIN, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
.Lt_016F:
lea eax, [SYMB+98528]
push eax
call STACKPUSH
add esp, 4
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [ebp+8]
mov dword ptr [eax], ebx
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [SYMB+98524]
mov dword ptr [ebx+4], eax
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [SYMB+98520]
mov dword ptr [eax+8], ebx
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx], 3
jne .Lt_0172
mov ebx, dword ptr [ebp+8]
lea eax, [ebx+52]
mov dword ptr [ebp-12], eax
mov dword ptr [ebp-8], 0
jmp .Lt_0171
.Lt_0172:
mov eax, dword ptr [ebp+8]
lea ebx, [eax+52]
mov dword ptr [ebp-12], ebx
mov ebx, dword ptr [ebp+8]
lea eax, [ebx+64]
mov dword ptr [ebp-8], eax
.Lt_0171:
mov eax, dword ptr [ebp-12]
mov dword ptr [SYMB+98524], eax
cmp dword ptr [ebp-8], 0
je .Lt_0174
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [SYMB+98516]
mov dword ptr [eax+12], ebx
mov ebx, dword ptr [ebp+8]
mov dword ptr [SYMB+98516], ebx
mov ebx, dword ptr [ebp-8]
mov dword ptr [SYMB+98520], ebx
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx+88], 0
jne .Lt_0176
lea ebx, [SYMB+98640]
push ebx
call LISTNEWNODE
add esp, 4
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+88], eax
.Lt_0176:
.Lt_0175:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+88]
inc dword ptr [ebx+16]
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+88]
cmp dword ptr [eax+16], 1
je .Lt_0178
push dword ptr [ebp+8]
call SYMBHASHLISTREMOVENAMESPACE
add esp, 4
.Lt_0178:
.Lt_0177:
push dword ptr [ebp-8]
call SYMBHASHLISTADD
add esp, 4
cmp dword ptr [ebp+12], 0
je .Lt_017A
mov eax, dword ptr [ebp-4]
push dword ptr [eax+12]
push dword ptr [ebp-8]
push dword ptr [ebp+8]
call HINSERTNESTED
add esp, 12
.Lt_017A:
.Lt_0179:
push dword ptr [ebp+8]
call HINSERTIMPORTED
add esp, 4
.Lt_0174:
.Lt_0173:
.Lt_0170:
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBNESTBEGIN, .-SYMBNESTBEGIN
.balign 16

.globl SYMBNESTEND
SYMBNESTEND:
.type SYMBNESTEND, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
.Lt_017B:
lea eax, [SYMB+98528]
push eax
call STACKGETTOS
add esp, 4
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-12], ebx
mov ebx, dword ptr [ebp-12]
cmp dword ptr [ebx], 3
jne .Lt_017E
mov dword ptr [ebp-8], 0
jmp .Lt_017D
.Lt_017E:
mov ebx, dword ptr [ebp-12]
lea eax, [ebx+64]
mov dword ptr [ebp-8], eax
.Lt_017D:
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+4]
mov dword ptr [SYMB+98524], ebx
cmp dword ptr [ebp-8], 0
je .Lt_0180
push dword ptr [ebp-12]
call HREMOVEIMPORTED
add esp, 4
cmp dword ptr [ebp+8], 0
je .Lt_0182
mov ebx, dword ptr [ebp-4]
push dword ptr [ebx+12]
push dword ptr [ebp-12]
call HREMOVENESTED
add esp, 8
.Lt_0182:
.Lt_0181:
mov ebx, dword ptr [ebp-12]
mov eax, dword ptr [ebx+88]
dec dword ptr [eax+16]
push dword ptr [ebp-8]
call SYMBHASHLISTDEL
add esp, 4
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax+88]
cmp dword ptr [ebx+16], 0
je .Lt_0184
mov ebx, dword ptr [ebp-12]
push dword ptr [ebx+56]
push dword ptr [ebp-12]
call SYMBHASHLISTINSERTNAMESPACE
add esp, 8
.Lt_0184:
.Lt_0183:
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebx+8]
mov dword ptr [SYMB+98520], eax
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+12]
mov dword ptr [SYMB+98516], ebx
.Lt_0180:
.Lt_017F:
lea ebx, [SYMB+98528]
push ebx
call STACKPOP
add esp, 4
.Lt_017C:
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBNESTEND, .-SYMBNESTEND
.balign 16

.globl SYMBCOMPADDTOIMPORTLIST
SYMBCOMPADDTOIMPORTLIST:
.type SYMBCOMPADDTOIMPORTLIST, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0185:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+64]
mov dword ptr [ebp-4], ebx
mov ebx, dword ptr [ebp-4]
cmp dword ptr [ebx+88], 0
jne .Lt_0188
lea ebx, [SYMB+98640]
push ebx
call LISTNEWNODE
add esp, 4
mov ebx, dword ptr [ebp-4]
mov dword ptr [ebx+88], eax
.Lt_0188:
.Lt_0187:
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+88]
cmp dword ptr [ebx+4], 0
je .Lt_018A
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebx+88]
mov ebx, dword ptr [eax+4]
mov eax, dword ptr [ebp+8]
mov dword ptr [ebx+60], eax
jmp .Lt_0189
.Lt_018A:
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+88]
mov eax, dword ptr [ebp+8]
mov dword ptr [ebx], eax
.Lt_0189:
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+88]
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [ebx+4]
mov dword ptr [eax+56], ecx
mov ecx, dword ptr [ebp+8]
mov dword ptr [ecx+60], 0
mov ecx, dword ptr [ebp-4]
mov eax, dword ptr [ecx+88]
mov ecx, dword ptr [ebp+8]
mov dword ptr [eax+4], ecx
.Lt_0186:
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBCOMPADDTOIMPORTLIST, .-SYMBCOMPADDTOIMPORTLIST
.balign 16

.globl SYMBCOMPDELFROMIMPORTLIST
SYMBCOMPDELFROMIMPORTLIST:
.type SYMBCOMPDELFROMIMPORTLIST, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_018B:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+64]
mov dword ptr [ebp-4], ebx
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx+56], 0
jne .Lt_018E
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp-4]
mov ecx, dword ptr [eax+88]
mov eax, dword ptr [ebx+60]
mov dword ptr [ecx], eax
jmp .Lt_018D
.Lt_018E:
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ecx+56]
mov ecx, dword ptr [eax+60]
mov dword ptr [ebx+60], ecx
.Lt_018D:
mov ecx, dword ptr [ebp+8]
cmp dword ptr [ecx+60], 0
jne .Lt_0190
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebx+88]
mov ebx, dword ptr [ecx+56]
mov dword ptr [eax+4], ebx
jmp .Lt_018F
.Lt_0190:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+60]
mov eax, dword ptr [ebx+56]
mov dword ptr [ecx+56], eax
.Lt_018F:
.Lt_018C:
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBCOMPDELFROMIMPORTLIST, .-SYMBCOMPDELFROMIMPORTLIST
.balign 16

.globl SYMBCOMPADDTOEXPORTLIST
SYMBCOMPADDTOEXPORTLIST:
.type SYMBCOMPADDTOEXPORTLIST, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0191:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+52]
mov dword ptr [ebp-4], ebx
mov ebx, dword ptr [ebp-4]
cmp dword ptr [ebx+88], 0
jne .Lt_0194
lea ebx, [SYMB+98640]
push ebx
call LISTNEWNODE
add esp, 4
mov ebx, dword ptr [ebp-4]
mov dword ptr [ebx+88], eax
.Lt_0194:
.Lt_0193:
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+88]
cmp dword ptr [ebx+12], 0
je .Lt_0196
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebx+88]
mov ebx, dword ptr [eax+12]
mov eax, dword ptr [ebp+8]
mov dword ptr [ebx+72], eax
jmp .Lt_0195
.Lt_0196:
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+88]
mov eax, dword ptr [ebp+8]
mov dword ptr [ebx+8], eax
.Lt_0195:
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+88]
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [ebx+12]
mov dword ptr [eax+68], ecx
mov ecx, dword ptr [ebp+8]
mov dword ptr [ecx+72], 0
mov ecx, dword ptr [ebp-4]
mov eax, dword ptr [ecx+88]
mov ecx, dword ptr [ebp+8]
mov dword ptr [eax+12], ecx
.Lt_0192:
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBCOMPADDTOEXPORTLIST, .-SYMBCOMPADDTOEXPORTLIST
.balign 16

.globl SYMBCOMPDELFROMEXPORTLIST
SYMBCOMPDELFROMEXPORTLIST:
.type SYMBCOMPDELFROMEXPORTLIST, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0197:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+52]
mov dword ptr [ebp-4], ebx
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx+68], 0
jne .Lt_019A
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp-4]
mov ecx, dword ptr [eax+88]
mov eax, dword ptr [ebx+72]
mov dword ptr [ecx+8], eax
jmp .Lt_0199
.Lt_019A:
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ecx+68]
mov ecx, dword ptr [eax+72]
mov dword ptr [ebx+72], ecx
.Lt_0199:
mov ecx, dword ptr [ebp+8]
cmp dword ptr [ecx+72], 0
jne .Lt_019C
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebx+88]
mov ebx, dword ptr [ecx+68]
mov dword ptr [eax+12], ebx
jmp .Lt_019B
.Lt_019C:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+72]
mov eax, dword ptr [ebx+68]
mov dword ptr [ecx+68], eax
.Lt_019B:
.Lt_0198:
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBCOMPDELFROMEXPORTLIST, .-SYMBCOMPDELFROMEXPORTLIST
.balign 16

.globl SYMBCOMPDELIMPORTLIST
SYMBCOMPDELIMPORTLIST:
.type SYMBCOMPDELIMPORTLIST, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_019D:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+88], 0
jne .Lt_01A0
jmp .Lt_019E
.Lt_01A0:
.Lt_019F:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+88]
mov eax, dword ptr [ebx+8]
mov dword ptr [ebp-4], eax
.Lt_01A1:
cmp dword ptr [ebp-4], 0
je .Lt_01A2
push dword ptr [ebp-4]
call SYMBCOMPDELFROMIMPORTLIST
add esp, 4
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+72]
mov dword ptr [ebp-8], ebx
push dword ptr [ebp-4]
call SYMBCOMPDELFROMEXPORTLIST
add esp, 4
mov ebx, dword ptr [ebp-4]
mov dword ptr [ebx+52], 0
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ebx
jmp .Lt_01A1
.Lt_01A2:
.Lt_019E:
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBCOMPDELIMPORTLIST, .-SYMBCOMPDELIMPORTLIST
.balign 16

.globl SYMBCOMPRTTIINIT
SYMBCOMPRTTIINIT:
.type SYMBCOMPRTTIINIT, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
.Lt_01A3:
push 0
push 0
push 0
push 0
push 0
push offset Lt_01A6
push offset Lt_01A6
push 0
push 0
push 0
call SYMBSTRUCTBEGIN
add esp, 40
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp-4]
mov dword ptr [SYMB+99588], eax
push 0
push 0
push 0
push 0
push 0
push 32
push offset Lt_01B1
push 0
push offset Lt_01A7
push dword ptr [ebp-4]
call SYMBADDFIELD
add esp, 40
push 0
push 0
push 0
push 0
push 0
push 35
push offset Lt_01B1
push 0
push offset Lt_01A8
push dword ptr [ebp-4]
call SYMBADDFIELD
add esp, 40
push 0
push 0
push 0
push 0
push dword ptr [ebp-4]
push 50
push offset Lt_01B1
push 0
push offset Lt_01A9
push dword ptr [ebp-4]
call SYMBADDFIELD
add esp, 40
push 0
push dword ptr [ebp-4]
call SYMBSTRUCTEND
add esp, 8
cmp dword ptr [ENV+136], 3
jne .Lt_01AB
mov eax, offset Lt_01AC
mov dword ptr [ebp-20], eax
jmp .Lt_01AA
.Lt_01AB:
mov eax, offset Lt_01AD
mov dword ptr [ebp-20], eax
.Lt_01AA:
push 0
push 0
push 0
push 0
push 0
push offset Lt_01AE
push dword ptr [ebp-20]
push 0
push 0
push 0
call SYMBSTRUCTBEGIN
add esp, 40
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov dword ptr [SYMB+99592], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+8]
or ebx, 4194304
mov eax, ebx
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+8], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+8]
or ebx, 262144
mov eax, ebx
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+8], eax
push 0
push dword ptr [ebp-8]
call SYMBNESTBEGIN
add esp, 8
push 0
push 0
push 0
push 0
push 0
push 32
push offset Lt_01B1
push 0
push offset Lt_01AF
push dword ptr [ebp-8]
call SYMBADDFIELD
add esp, 40
push 0
call SYMBPREADDPROC
add esp, 4
mov dword ptr [ebp-16], eax
push dword ptr [ebp-16]
push dword ptr [ebp-8]
call SYMBADDPROCINSTANCEPTR
add esp, 8
push 0
push 3
push 7168
push 0
push dword ptr [ebp-16]
call SYMBADDCTOR
add esp, 20
push 0
call SYMBPREADDPROC
add esp, 4
mov dword ptr [ebp-16], eax
push dword ptr [ebp-16]
push dword ptr [ebp-8]
call SYMBADDPROCINSTANCEPTR
add esp, 8
push 0
push 2
push 0
push dword ptr [ebp-8]
push 530
push offset Lt_0067
push dword ptr [ebp-16]
call SYMBADDPROCPARAM
add esp, 28
push 0
push 3
push 7168
push 0
push dword ptr [ebp-16]
call SYMBADDCTOR
add esp, 20
push -1
push dword ptr [ebp-8]
call SYMBSTRUCTEND
add esp, 8
push 1
push 17
push offset Lt_01B1
push 0
push 0
push 0
push dword ptr [SYMB+99588]
push 18
push offset Lt_01B0
push 0
call SYMBADDVAR
add esp, 40
mov dword ptr [ebp-12], eax
push dword ptr [ebp-8]
call SYMBUDTALLOCEXT
add esp, 4
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+124]
mov eax, dword ptr [ebp-12]
mov dword ptr [ebx+148], eax
.Lt_01A4:
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBCOMPRTTIINIT, .-SYMBCOMPRTTIINIT

.section .bss
.balign 4
	.lcomm	Lt_01B2,16

.section .data
.balign 4
Lt_01B1:
.int Lt_01B2
.int Lt_01B2
.int 16
.int 16
.int 1
.int 1
.int 0
.int 0

.section .text
.balign 16

.globl SYMBCOMPRTTIEND
SYMBCOMPRTTIEND:
.type SYMBCOMPRTTIEND, @function
.Lt_01B3:
.Lt_01B4:
ret
.size SYMBCOMPRTTIEND, .-SYMBCOMPRTTIEND
.balign 16
fb_ctor__symbzcomp:
.type fb_ctor__symbzcomp, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__symbzcomp, .-fb_ctor__symbzcomp
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
HDECLAREPROC:
.type HDECLAREPROC, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0063:
push -1
push dword ptr [ebp+8]
call SYMBNESTBEGIN
add esp, 8
push 0
call SYMBPREADDPROC
add esp, 4
mov dword ptr [ebp-8], eax
push dword ptr [ebp-8]
push dword ptr [ebp+8]
call SYMBADDPROCINSTANCEPTR
add esp, 8
cmp dword ptr [ebp+16], -2147483648
je .Lt_0066
push 0
push 2
push 0
push dword ptr [ebp+8]
push dword ptr [ebp+16]
push offset Lt_0067
push dword ptr [ebp-8]
call SYMBADDPROCPARAM
add esp, 28
.Lt_0066:
.Lt_0065:
mov eax, dword ptr [ebp+20]
or eax, 2048
mov ebx, eax
mov dword ptr [ebp+20], ebx
mov ebx, dword ptr [ebp+20]
or ebx, 64
mov eax, ebx
mov dword ptr [ebp+20], eax
cmp dword ptr [ebp+12], -1
jne .Lt_0069
push 4
push 3
push dword ptr [ebp+20]
push 0
push dword ptr [ebp-8]
call SYMBADDCTOR
add esp, 20
mov dword ptr [ebp-8], eax
jmp .Lt_0068
.Lt_0069:
push 4
push 3
push dword ptr [ebp+20]
push 0
push 0
push 0
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call SYMBADDOPERATOR
add esp, 32
mov dword ptr [ebp-8], eax
.Lt_0068:
push -1
call SYMBNESTEND
add esp, 4
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0064:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HDECLAREPROC, .-HDECLAREPROC
.balign 16
HSETMINIMUMVTABLESIZE:
.type HSETMINIMUMVTABLESIZE, @function
push ebp
mov ebp, esp
push ebx
.Lt_006A:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+124]
cmp dword ptr [ebx+140], 0
jne .Lt_006D
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+124]
mov dword ptr [eax+140], 2
.Lt_006D:
.Lt_006C:
.Lt_006B:
pop ebx
mov esp, ebp
pop ebp
ret
.size HSETMINIMUMVTABLESIZE, .-HSETMINIMUMVTABLESIZE
.balign 16
HBUILDRTTI:
.type HBUILDRTTI, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
.Lt_006E:
push -1
push dword ptr [ebp+8]
call SYMBNESTBEGIN
add esp, 8
push 1
push 1048579
push offset Lt_01B5
push 0
push 0
push 0
push dword ptr [SYMB+99588]
push 18
push 0
push 0
call SYMBADDVAR
add esp, 40
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax+8]
or ebx, 256
mov eax, ebx
mov ebx, dword ptr [ebp-12]
mov dword ptr [ebx+8], eax
push -1
call SYMBNESTEND
add esp, 4
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+124]
mov eax, dword ptr [ebp-12]
mov dword ptr [ebx+148], eax
push 0
push 0
push 0
push dword ptr [SYMB+99588]
push 18
call ASTTYPEINIBEGIN
add esp, 20
mov dword ptr [ebp-4], eax
push dword ptr [ebp-12]
push dword ptr [ebp-4]
call ASTTYPEINISCOPEBEGIN
add esp, 8
push dword ptr [SYMB+99588]
call SYMBUDTGETFIRSTFIELD
add esp, 4
mov dword ptr [ebp-16], eax
push 0
push -2147483648
push dword ptr [ebp-16]
push 0
push 32
push 0
push 0
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp-4]
call ASTTYPEINIADDASSIGN
add esp, 20
push dword ptr [ebp-16]
call SYMBUDTGETNEXTINITABLEFIELD
add esp, 4
mov dword ptr [ebp-16], eax
push 0
push -2147483648
push dword ptr [ebp-16]
push 0
push -2147483648
push 0
push 0
push -1
push dword ptr [ebp+8]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
call SYMBALLOCSTRCONST
add esp, 8
push eax
call ASTNEWVAR
add esp, 20
push eax
call ASTNEWADDROF
add esp, 4
push eax
push dword ptr [ebp-4]
call ASTTYPEINIADDASSIGN
add esp, 20
push dword ptr [ebp-16]
call SYMBUDTGETNEXTINITABLEFIELD
add esp, 4
mov dword ptr [ebp-16], eax
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+92], 0
je .Lt_0072
push 0
push -2147483648
push 0
push 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+92]
mov eax, dword ptr [ebx+28]
mov ebx, dword ptr [eax+124]
push dword ptr [ebx+148]
call ASTNEWVAR
add esp, 20
push eax
call ASTNEWADDROF
add esp, 4
mov dword ptr [ebp-8], eax
jmp .Lt_0071
.Lt_0072:
push 0
push 32
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-8], eax
.Lt_0071:
push 0
push -2147483648
push dword ptr [ebp-16]
push dword ptr [ebp-8]
push dword ptr [ebp-4]
call ASTTYPEINIADDASSIGN
add esp, 20
push dword ptr [ebp-12]
push dword ptr [ebp-4]
call ASTTYPEINISCOPEEND
add esp, 8
push -1
push dword ptr [ebp-4]
call ASTTYPEINIEND
add esp, 8
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [ebp-4]
mov dword ptr [eax+52], ebx
.Lt_006F:
pop ebx
mov esp, ebp
pop ebp
ret
.size HBUILDRTTI, .-HBUILDRTTI

.section .bss
.balign 4
	.lcomm	Lt_01B6,16

.section .data
.balign 4
Lt_01B5:
.int Lt_01B6
.int Lt_01B6
.int 16
.int 16
.int 1
.int 1
.int 0
.int 0

.section .text
.balign 16
HBUILDVTABLE:
.type HBUILDVTABLE, @function
push ebp
mov ebp, esp
sub esp, 28
push ebx
push esi
.Lt_0073:
push -1
push dword ptr [ebp+8]
call SYMBNESTBEGIN
add esp, 8
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+124]
mov eax, dword ptr [ebx+140]
dec eax
mov ecx, eax
mov ebx, ecx
sar ebx, 31
mov dword ptr [Lt_01B7+8], ecx
mov dword ptr [Lt_01B7+12], ebx
push 1
push 1048579
push offset Lt_01B8
push 1
push 0
push 0
push 0
push 32
push 0
push 0
call SYMBADDVAR
add esp, 40
mov dword ptr [ebp-20], eax
mov eax, dword ptr [ebp-20]
mov ecx, dword ptr [eax+8]
or ecx, 1024
mov eax, ecx
mov ecx, dword ptr [ebp-20]
mov dword ptr [ecx+8], eax
push -1
call SYMBNESTEND
add esp, 4
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+92]
mov eax, dword ptr [ecx+28]
mov ecx, dword ptr [eax+124]
mov eax, dword ptr [ecx+140]
mov dword ptr [ebp-28], eax
cmp dword ptr [ebp-28], 2
jle .Lt_0077
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+92]
mov eax, dword ptr [ecx+28]
mov ecx, dword ptr [eax+124]
mov eax, dword ptr [ecx+144]
mov ecx, dword ptr [eax+52]
mov dword ptr [ebp-8], ecx
jmp .Lt_0076
.Lt_0077:
mov dword ptr [ebp-8], 0
.Lt_0076:
push 0
push 0
push 0
push 0
push 32
call ASTTYPEINIBEGIN
add esp, 20
mov dword ptr [ebp-4], eax
push dword ptr [ebp-20]
push dword ptr [ebp-4]
call ASTTYPEINISCOPEBEGIN
add esp, 8
push 0
push -2147483648
push dword ptr [ebp-20]
push 0
push 32
push 0
push 0
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp-4]
call ASTTYPEINIADDASSIGN
add esp, 20
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+124]
mov eax, dword ptr [ecx+148]
mov dword ptr [ebp-16], eax
push 0
push -2147483648
push dword ptr [ebp-20]
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp-16]
call ASTNEWVAR
add esp, 20
push eax
call ASTNEWADDROF
add esp, 4
push eax
push dword ptr [ebp-4]
call ASTTYPEINIADDASSIGN
add esp, 20
mov dword ptr [ebp-24], 2
cmp dword ptr [ebp-8], 0
je .Lt_0079
push 2
push dword ptr [ebp-8]
push dword ptr [ebp-4]
call ASTTYPEINICOPYELEMENTS
add esp, 12
mov eax, dword ptr [ebp-28]
add eax, dword ptr [ebp-24]
add eax, -2
mov dword ptr [ebp-24], eax
.Lt_0079:
.Lt_0078:
.Lt_007A:
mov ecx, dword ptr [ebp-24]
mov eax, ecx
sar eax, 31
mov esi, dword ptr [Lt_01B7+8]
mov ebx, dword ptr [Lt_01B7+12]
cmp eax, ebx
jg .Lt_007B
jl .Lt_01B9
cmp ecx, esi
ja .Lt_007B
.Lt_01B9:
push 0
push -2147483648
push dword ptr [ebp-20]
push 0
push 32
push 0
push 0
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp-4]
call ASTTYPEINIADDASSIGN
add esp, 20
inc dword ptr [ebp-24]
jmp .Lt_007A
.Lt_007B:
push dword ptr [ebp-20]
push dword ptr [ebp-4]
call ASTTYPEINISCOPEEND
add esp, 8
push -1
push dword ptr [ebp-4]
call ASTTYPEINIEND
add esp, 8
mov eax, dword ptr [ebp-20]
mov esi, dword ptr [ebp-4]
mov dword ptr [eax+52], esi
mov esi, dword ptr [ebp+8]
mov eax, dword ptr [esi+56]
mov dword ptr [ebp-12], eax
.Lt_007C:
cmp dword ptr [ebp-12], 0
je .Lt_007D
mov eax, dword ptr [ebp-12]
cmp dword ptr [eax], 3
jne .Lt_007F
push dword ptr [ebp-12]
call SYMBPROCGETVTABLEINDEX
add esp, 4
mov dword ptr [ebp-24], eax
mov eax, dword ptr [ebp-24]
test eax, eax
setg al
shr eax, 1
sbb eax, eax
mov esi, dword ptr [ebp-12]
mov ebx, dword ptr [esi+4]
and ebx, 1073741824
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
not ebx
and eax, ebx
je .Lt_0081
push dword ptr [ebp-12]
call ASTBUILDPROCADDROF
add esp, 4
push eax
push dword ptr [ebp-24]
push dword ptr [ebp-4]
call ASTTYPEINIREPLACEELEMENT
add esp, 12
.Lt_0081:
.Lt_0080:
.Lt_007F:
.Lt_007E:
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax+160]
mov dword ptr [ebp-12], ebx
jmp .Lt_007C
.Lt_007D:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+124]
mov ebx, dword ptr [ebp-20]
mov dword ptr [eax+144], ebx
.Lt_0074:
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size HBUILDVTABLE, .-HBUILDVTABLE

.section .bss
.balign 4
	.lcomm	Lt_01B7,16

.section .data
.balign 4
Lt_01B8:
.int Lt_01B7
.int Lt_01B7
.int 16
.int 16
.int 1
.int 1
.int 0
.int 0

.section .text
.balign 16
HPROCBEGIN:
.type HPROCBEGIN, @function
push ebp
mov ebp, esp
.Lt_0082:
push -1
push dword ptr [ebp+8]
call SYMBNESTBEGIN
add esp, 8
push 0
push dword ptr [ebp+12]
call ASTPROCBEGIN
add esp, 8
.Lt_0083:
mov esp, ebp
pop ebp
ret
.size HPROCBEGIN, .-HPROCBEGIN
.balign 16
HPROCEND:
.type HPROCEND, @function
.Lt_0084:
push 0
call ASTPROCEND
add esp, 4
push -1
call SYMBNESTEND
add esp, 4
.Lt_0085:
ret
.size HPROCEND, .-HPROCEND
.balign 16
HADDCTORBODY:
.type HADDCTORBODY, @function
push ebp
mov ebp, esp
push ebx
.Lt_0086:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HPROCBEGIN
add esp, 8
cmp dword ptr [ebp+16], 0
je .Lt_0089
push 0
push 0
push 0
push 0
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+76]
push dword ptr [ebx+56]
call ASTBUILDVARFIELD
add esp, 16
push eax
push 0
push 0
push 0
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+72]
push dword ptr [ebx+56]
call ASTBUILDVARFIELD
add esp, 16
push eax
call ASTNEWASSIGN
add esp, 12
push eax
call ASTADD
add esp, 4
.Lt_0089:
.Lt_0088:
call HPROCEND
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+8]
or ebx, 8388608
mov eax, ebx
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+8], eax
.Lt_0087:
pop ebx
mov esp, ebp
pop ebp
ret
.size HADDCTORBODY, .-HADDCTORBODY
.balign 16
HASSIGNDYNAMICARRAY:
.type HASSIGNDYNAMICARRAY, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
.Lt_008C:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+24]
mov dword ptr [ebp-4], ebx
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+28]
push dword ptr [ebp-4]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call RTLARRAYREDIMTO
add esp, 16
push eax
call ASTADD
add esp, 4
mov eax, dword ptr [ebp-4]
and eax, 31
mov ebx, dword ptr [ebp-4]
and ebx, 480
add ebx, 32
or eax, ebx
mov ebx, dword ptr [ebp-4]
and ebx, 261632
sal ebx, 1
or eax, ebx
mov dword ptr [ebp-4], eax
push 4
push 0
call SYMBADDLABEL
add esp, 8
mov dword ptr [ebp-20], eax
push 4
push 0
call SYMBADDLABEL
add esp, 8
mov dword ptr [ebp-24], eax
mov eax, dword ptr [ebp+8]
push dword ptr [eax+28]
push dword ptr [ebp-4]
call SYMBADDTEMPVAR
add esp, 8
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp+8]
push dword ptr [eax+28]
push dword ptr [ebp-4]
call SYMBADDTEMPVAR
add esp, 8
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp+8]
push dword ptr [eax+28]
push dword ptr [ebp-4]
call SYMBADDTEMPVAR
add esp, 8
mov dword ptr [ebp-16], eax
push 64
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax+28]
push dword ptr [ebp-4]
mov ebx, dword ptr [SYMB+99564]
mov eax, ebx
sar eax, 31
push eax
push ebx
push dword ptr [ebp+12]
call _Z19ASTBUILDDEREFADDROFP7ASTNODExiP8FBSYMBOLS2_
add esp, 24
push eax
push dword ptr [ebp-8]
call _Z17ASTBUILDVARASSIGNP8FBSYMBOLP7ASTNODEi
add esp, 12
push eax
call ASTADD
add esp, 4
push 64
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax+28]
push dword ptr [ebp-4]
mov ebx, dword ptr [SYMB+99564]
mov eax, ebx
sar eax, 31
push eax
push ebx
push dword ptr [ebp+16]
call _Z19ASTBUILDDEREFADDROFP7ASTNODExiP8FBSYMBOLS2_
add esp, 24
push eax
push dword ptr [ebp-12]
call _Z17ASTBUILDVARASSIGNP8FBSYMBOLP7ASTNODEi
add esp, 12
push eax
call ASTADD
add esp, 4
push 64
push 1
push 0
push 0
push 0
push 8
mov ebx, dword ptr [SYMB+99568]
mov eax, ebx
sar eax, 31
push eax
push ebx
push dword ptr [ebp+16]
call _Z19ASTBUILDDEREFADDROFP7ASTNODExiP8FBSYMBOLS2_
add esp, 24
push eax
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp-12]
call ASTNEWVAR
add esp, 20
push eax
push 28
call ASTNEWBOP
add esp, 20
push eax
push dword ptr [ebp-16]
call _Z17ASTBUILDVARASSIGNP8FBSYMBOLP7ASTNODEi
add esp, 12
push eax
call ASTADD
add esp, 4
push -1
push dword ptr [ebp-20]
call ASTNEWLABEL
add esp, 8
push eax
call ASTADD
add esp, 4
push 0
push -1
push dword ptr [ebp-24]
push 1
push 0
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp-16]
call ASTNEWVAR
add esp, 20
push eax
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp-12]
call ASTNEWVAR
add esp, 20
push eax
push 49
call ASTNEWBOP
add esp, 20
push eax
call ASTBUILDBRANCH
add esp, 16
push eax
call ASTADD
add esp, 4
push 0
push dword ptr [ebp-12]
call ASTBUILDVARDEREF
add esp, 4
push eax
push dword ptr [ebp-8]
call ASTBUILDVARDEREF
add esp, 4
push eax
call ASTNEWASSIGN
add esp, 12
push eax
call ASTADD
add esp, 4
push 1
push dword ptr [ebp-8]
call ASTBUILDVARINC
add esp, 8
push eax
call ASTADD
add esp, 4
push 1
push dword ptr [ebp-12]
call ASTBUILDVARINC
add esp, 8
push eax
call ASTADD
add esp, 4
push 0
push dword ptr [ebp-20]
push 97
call ASTNEWBRANCH
add esp, 12
push eax
call ASTADD
add esp, 4
push -1
push dword ptr [ebp-24]
call ASTNEWLABEL
add esp, 8
push eax
call ASTADD
add esp, 4
.Lt_008D:
pop ebx
mov esp, ebp
pop ebp
ret
.size HASSIGNDYNAMICARRAY, .-HASSIGNDYNAMICARRAY
.balign 16
HASSIGNLIST:
.type HASSIGNLIST, @function
push ebp
mov ebp, esp
push ebx
.Lt_008E:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+28]
mov dword ptr [Lt_01BC], ebx
push 0
push 7
call SYMBADDTEMPVAR
add esp, 8
mov dword ptr [Lt_01BD], eax
push 4
push 0
call SYMBADDLABEL
add esp, 8
mov dword ptr [Lt_01BE], eax
push dword ptr [Lt_01BC]
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+24]
and ebx, 511
and ebx, 31
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+24]
and ecx, 511
and ecx, 480
add ecx, 32
or ebx, ecx
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ecx+24]
and eax, 511
and eax, 261632
sal eax, 1
or ebx, eax
push ebx
call SYMBADDTEMPVAR
add esp, 8
mov dword ptr [Lt_01BF], eax
push dword ptr [Lt_01BC]
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+24]
and ebx, 511
and ebx, 31
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+24]
and ecx, 511
and ecx, 480
add ecx, 32
or ebx, ecx
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ecx+24]
and eax, 511
and eax, 261632
sal eax, 1
or ebx, eax
push ebx
call SYMBADDTEMPVAR
add esp, 8
mov dword ptr [Lt_01C0], eax
push 64
push dword ptr [ebp+12]
call ASTNEWADDROF
add esp, 4
push eax
push dword ptr [Lt_01BF]
call _Z17ASTBUILDVARASSIGNP8FBSYMBOLP7ASTNODEi
add esp, 12
push eax
call ASTADD
add esp, 4
push 64
push dword ptr [ebp+16]
call ASTNEWADDROF
add esp, 4
push eax
push dword ptr [Lt_01C0]
call _Z17ASTBUILDVARASSIGNP8FBSYMBOLP7ASTNODEi
add esp, 12
push eax
call ASTADD
add esp, 4
push -1
push 0
push dword ptr [Lt_01BE]
push dword ptr [Lt_01BD]
push 0
call ASTBUILDFORBEGIN
add esp, 20
push eax
call ASTADD
add esp, 4
push 0
push dword ptr [Lt_01C0]
call ASTBUILDVARDEREF
add esp, 4
push eax
push dword ptr [Lt_01BF]
call ASTBUILDVARDEREF
add esp, 4
push eax
call ASTNEWASSIGN
add esp, 12
push eax
call ASTADD
add esp, 4
push 1
push dword ptr [Lt_01BF]
call ASTBUILDVARINC
add esp, 8
push eax
call ASTADD
add esp, 4
push 1
push dword ptr [Lt_01C0]
call ASTBUILDVARINC
add esp, 8
push eax
call ASTADD
add esp, 4
push 0
push 7
mov eax, dword ptr [ebp+8]
push dword ptr [eax+76]
push dword ptr [eax+72]
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [Lt_01BE]
push dword ptr [Lt_01BD]
push 0
call ASTBUILDFOREND
add esp, 16
push eax
call ASTADD
add esp, 4
.Lt_008F:
pop ebx
mov esp, ebp
pop ebp
ret
.size HASSIGNLIST, .-HASSIGNLIST

.section .bss
.balign 4
	.lcomm	Lt_01BD,4
.balign 4
	.lcomm	Lt_01BE,4
.balign 4
	.lcomm	Lt_01BF,4
.balign 4
	.lcomm	Lt_01C0,4
.balign 4
	.lcomm	Lt_01BC,4

.section .text
.balign 16
HCOPYUNIONFIELDS:
.type HCOPYUNIONFIELDS, @function
push ebp
mov ebp, esp
sub esp, 32
push ebx
push esi
mov dword ptr [ebp-4], 0
.Lt_0090:
mov eax, dword ptr [ebp+16]
mov dword ptr [ebp-8], eax
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov eax, dword ptr [ebp+16]
mov ecx, dword ptr [eax+44]
mov ebx, dword ptr [eax+48]
mov dword ptr [ebp-32], ecx
mov dword ptr [ebp-28], ebx
.Lt_0092:
mov ecx, dword ptr [ebp-8]
mov ebx, dword ptr [ebp-8]
mov esi, dword ptr [ebx+72]
mov eax, dword ptr [ebx+76]
push dword ptr [ecx+40]
push dword ptr [ecx+36]
push eax
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
pop eax
add esp, 8
mov ecx, dword ptr [ebp-8]
add esi, dword ptr [ecx+44]
adc eax, dword ptr [ecx+48]
sub esi, dword ptr [ebp-32]
sbb eax, dword ptr [ebp-28]
mov dword ptr [ebp-24], esi
mov dword ptr [ebp-20], eax
mov eax, dword ptr [ebp-16]
mov esi, dword ptr [ebp-12]
cmp dword ptr [ebp-20], esi
jl .Lt_0096
jg .Lt_01C1
cmp dword ptr [ebp-24], eax
jbe .Lt_0096
.Lt_01C1:
mov esi, dword ptr [ebp-24]
mov eax, dword ptr [ebp-20]
mov dword ptr [ebp-16], esi
mov dword ptr [ebp-12], eax
.Lt_0096:
.Lt_0095:
mov esi, dword ptr [ebp-8]
mov eax, dword ptr [esi+160]
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0098
jmp .Lt_0093
.Lt_0098:
.Lt_0097:
.Lt_0094:
mov eax, dword ptr [ebp-8]
mov esi, dword ptr [eax+8]
and esi, 16777216
test esi, esi
jne .Lt_0092
.Lt_0093:
push dword ptr [ebp-12]
push dword ptr [ebp-16]
push 0
push 0
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call ASTBUILDVARFIELD
add esp, 16
push eax
push 0
push 0
push dword ptr [ebp+16]
push dword ptr [ebp+8]
call ASTBUILDVARFIELD
add esp, 16
push eax
push 104
call ASTNEWMEM
add esp, 20
push eax
call ASTADD
add esp, 4
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0091:
mov eax, dword ptr [ebp-4]
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size HCOPYUNIONFIELDS, .-HCOPYUNIONFIELDS
.balign 16
HADDLETOPBODY:
.type HADDLETOPBODY, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
.Lt_0099:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HPROCBEGIN
add esp, 8
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+72]
mov eax, dword ptr [ebx+56]
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+76]
mov eax, dword ptr [ebx+56]
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-4], ebx
.Lt_009B:
cmp dword ptr [ebp-4], 0
je .Lt_009C
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebx]
cmp eax, 12
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp-4]
mov ecx, dword ptr [ebx+4]
and ecx, 8388608
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
not ecx
and eax, ecx
mov dword ptr [ebp-24], eax
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+92], 0
je .Lt_009E
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [ebp-4]
cmp ecx, dword ptr [eax+92]
setne bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+92]
mov eax, dword ptr [ecx+28]
cmp eax, dword ptr [SYMB+99592]
setne cl
shr ecx, 1
sbb ecx, ecx
or ebx, ecx
and dword ptr [ebp-24], ebx
.Lt_009E:
.Lt_009D:
cmp dword ptr [ebp-24], 0
je .Lt_00A0
mov ebx, dword ptr [ebp-4]
mov ecx, dword ptr [ebx+8]
and ecx, 16777216
test ecx, ecx
je .Lt_00A2
push dword ptr [ebp-4]
push dword ptr [ebp-12]
push dword ptr [ebp-8]
call HCOPYUNIONFIELDS
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_009B
.Lt_00A2:
.Lt_00A1:
push 0
push 0
push dword ptr [ebp-4]
push dword ptr [ebp-8]
call ASTBUILDVARFIELD
add esp, 16
mov dword ptr [ebp-16], eax
push 0
push 0
push dword ptr [ebp-4]
push dword ptr [ebp-12]
call ASTBUILDVARFIELD
add esp, 16
mov dword ptr [ebp-20], eax
mov eax, dword ptr [ebp-4]
mov ecx, dword ptr [eax+4]
and ecx, 4
test ecx, ecx
je .Lt_00A4
push dword ptr [ebp-20]
push dword ptr [ebp-16]
push dword ptr [ebp-4]
call HASSIGNDYNAMICARRAY
add esp, 12
jmp .Lt_00A3
.Lt_00A4:
mov ecx, dword ptr [ebp-4]
cmp dword ptr [ecx+56], 0
jne .Lt_00A6
push 0
push dword ptr [ebp-20]
push dword ptr [ebp-16]
call ASTNEWASSIGN
add esp, 12
push eax
call ASTADD
add esp, 4
jmp .Lt_00A5
.Lt_00A6:
push dword ptr [ebp-20]
push dword ptr [ebp-16]
push dword ptr [ebp-4]
call HASSIGNLIST
add esp, 12
.Lt_00A5:
.Lt_00A3:
.Lt_00A0:
.Lt_009F:
mov eax, dword ptr [ebp-4]
mov ecx, dword ptr [eax+160]
mov dword ptr [ebp-4], ecx
jmp .Lt_009B
.Lt_009C:
call HPROCEND
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ecx+8]
or eax, 8388608
mov ecx, eax
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+8], ecx
.Lt_009A:
pop ebx
mov esp, ebp
pop ebp
ret
.size HADDLETOPBODY, .-HADDLETOPBODY
.balign 16
HHASBYREFSELFPARAM:
.type HHASBYREFSELFPARAM, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_00D6:
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+76]
mov dword ptr [ebp-8], ebx
mov ebx, dword ptr [ebp-8]
cmp dword ptr [ebx+52], 2
je .Lt_00D9
jmp .Lt_00D7
.Lt_00D9:
.Lt_00D8:
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebp+12]
and eax, -512
or eax, 21
cmp dword ptr [ebx+24], eax
jne .Lt_00DB
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+28]
mov eax, dword ptr [ebp+16]
mov ecx, dword ptr [eax+136]
cmp dword ptr [ebx+136], ecx
jne .Lt_00DD
push 0
mov ecx, dword ptr [ebp+16]
mov ebx, dword ptr [ecx+132]
push dword ptr [ebx]
push 0
mov ebx, dword ptr [ebp-8]
mov ecx, dword ptr [ebx+28]
mov ebx, dword ptr [ecx+132]
push dword ptr [ebx]
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_00DF
mov dword ptr [ebp-4], -1
jmp .Lt_00D7
.Lt_00DF:
.Lt_00DE:
.Lt_00DD:
.Lt_00DC:
.Lt_00DB:
.Lt_00DA:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+12]
cmp ebx, dword ptr [eax+24]
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp-8]
mov ecx, dword ptr [eax+28]
cmp ecx, dword ptr [ebp+16]
sete al
shr eax, 1
sbb eax, eax
and ebx, eax
mov dword ptr [ebp-4], ebx
.Lt_00D7:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HHASBYREFSELFPARAM, .-HHASBYREFSELFPARAM
.balign 16
SYMBGETCOMPCOPYCTOR:
.type SYMBGETCOMPCOPYCTOR, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_0117:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+124], 0
je .Lt_011A
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+124]
mov eax, dword ptr [ebx+8]
mov dword ptr [ebp-4], eax
.Lt_011A:
.Lt_0119:
.Lt_0118:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBGETCOMPCOPYCTOR, .-SYMBGETCOMPCOPYCTOR
.balign 16
HINSERTNESTED:
.type HINSERTNESTED, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_014D:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+128]
mov eax, dword ptr [ebx]
mov dword ptr [ebp-8], eax
.Lt_014F:
mov eax, dword ptr [ebp+16]
cmp dword ptr [ebp-8], eax
je .Lt_0150
mov eax, dword ptr [ebp-8]
lea ebx, [eax+64]
mov dword ptr [ebp-4], ebx
mov ebx, dword ptr [ebp-8]
cmp dword ptr [ebx+88], 0
jne .Lt_0152
lea ebx, [SYMB+98640]
push ebx
call LISTNEWNODE
add esp, 4
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+88], eax
.Lt_0152:
.Lt_0151:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+88]
inc dword ptr [ebx+16]
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx+88]
cmp dword ptr [eax+16], 1
je .Lt_0154
push dword ptr [ebp-8]
call SYMBHASHLISTREMOVENAMESPACE
add esp, 4
.Lt_0154:
.Lt_0153:
push dword ptr [ebp-4]
push dword ptr [ebp+12]
call SYMBHASHLISTADDBEFORE
add esp, 8
mov eax, dword ptr [ebp-4]
mov dword ptr [ebp+12], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+128]
mov eax, dword ptr [ebx]
mov dword ptr [ebp-8], eax
jmp .Lt_014F
.Lt_0150:
.Lt_014E:
pop ebx
mov esp, ebp
pop ebp
ret
.size HINSERTNESTED, .-HINSERTNESTED
.balign 16
HREMOVENESTED:
.type HREMOVENESTED, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0155:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+128]
mov eax, dword ptr [ebx]
mov dword ptr [ebp-4], eax
.Lt_0157:
mov eax, dword ptr [ebp+12]
cmp dword ptr [ebp-4], eax
je .Lt_0158
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+88]
dec dword ptr [ebx+16]
mov ebx, dword ptr [ebp-4]
lea eax, [ebx+64]
push eax
call SYMBHASHLISTDEL
add esp, 4
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+88]
cmp dword ptr [ebx+16], 0
je .Lt_015A
mov ebx, dword ptr [ebp-4]
push dword ptr [ebx+56]
push dword ptr [ebp-4]
call SYMBHASHLISTINSERTNAMESPACE
add esp, 8
.Lt_015A:
.Lt_0159:
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebx+128]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-4], ebx
jmp .Lt_0157
.Lt_0158:
.Lt_0156:
pop ebx
mov esp, ebp
pop ebp
ret
.size HREMOVENESTED, .-HREMOVENESTED
.balign 16
HINSERTIMPORTED:
.type HINSERTIMPORTED, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_015B:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+88], 0
jne .Lt_015E
jmp .Lt_015C
.Lt_015E:
.Lt_015D:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+88]
mov eax, dword ptr [ebx]
mov dword ptr [ebp-4], eax
.Lt_015F:
cmp dword ptr [ebp-4], 0
je .Lt_0160
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+52]
mov dword ptr [ebp-8], ebx
cmp dword ptr [ebp-8], 0
je .Lt_0162
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx+88]
inc dword ptr [eax+16]
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+88]
cmp dword ptr [ebx+16], 1
jne .Lt_0164
mov ebx, dword ptr [ebp-8]
push dword ptr [ebx+56]
push dword ptr [ebp-8]
call SYMBHASHLISTINSERTNAMESPACE
add esp, 8
.Lt_0164:
.Lt_0163:
.Lt_0162:
.Lt_0161:
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebx+60]
mov dword ptr [ebp-4], eax
jmp .Lt_015F
.Lt_0160:
.Lt_015C:
pop ebx
mov esp, ebp
pop ebp
ret
.size HINSERTIMPORTED, .-HINSERTIMPORTED
.balign 16
HREMOVEIMPORTED:
.type HREMOVEIMPORTED, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_0165:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+88], 0
jne .Lt_0168
jmp .Lt_0166
.Lt_0168:
.Lt_0167:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+88]
mov eax, dword ptr [ebx]
mov dword ptr [ebp-4], eax
.Lt_0169:
cmp dword ptr [ebp-4], 0
je .Lt_016A
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+52]
mov dword ptr [ebp-8], ebx
cmp dword ptr [ebp-8], 0
je .Lt_016C
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx+88]
dec dword ptr [eax+16]
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+88]
cmp dword ptr [ebx+16], 0
jne .Lt_016E
push dword ptr [ebp-8]
call SYMBHASHLISTREMOVENAMESPACE
add esp, 4
.Lt_016E:
.Lt_016D:
.Lt_016C:
.Lt_016B:
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebx+60]
mov dword ptr [ebp-4], eax
jmp .Lt_0169
.Lt_016A:
.Lt_0166:
pop ebx
mov esp, ebp
pop ebp
ret
.size HREMOVEIMPORTED, .-HREMOVEIMPORTED
	#FreeBASIC-1.01.0-source/src/compiler/symb-comp.bas' compilation took 0.0402438819874078 secs

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
Lt_0067:	.ascii	"__FB_RHS__\0"
.balign 4
Lt_01A6:	.ascii	"fb_RTTI$\0"
.balign 4
Lt_01A7:	.ascii	"stdlibvtable\0"
.balign 4
Lt_01A8:	.ascii	"id\0"
.balign 4
Lt_01A9:	.ascii	"rttibase\0"
.balign 4
Lt_01AC:	.ascii	"__OBJECT\0"
.balign 4
Lt_01AD:	.ascii	"OBJECT\0"
.balign 4
Lt_01AE:	.ascii	"fb_Object$\0"
.balign 4
Lt_01AF:	.ascii	"vptr$\0"
.balign 4
Lt_01B0:	.ascii	"__fb_ZTS6Object\0"

.section .ctors, "aw", @progbits
.int fb_ctor__symbzcomp
