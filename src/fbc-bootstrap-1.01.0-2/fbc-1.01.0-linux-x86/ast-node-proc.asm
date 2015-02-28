	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/ast-node-proc.bas' compilation started at 15:27:33 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl ASTPROCLISTINIT
ASTPROCLISTINIT:
.type ASTPROCLISTINIT, @function
.Lt_0060:
mov dword ptr [AST+32], 0
mov dword ptr [AST+36], 0
mov dword ptr [AST+40], 0
push 6
push 12
push 32
lea eax, [AST+76]
push eax
call LISTINIT
add esp, 16
mov dword ptr [AST+108], 0
mov dword ptr [AST+112], 0
.Lt_0061:
ret
.size ASTPROCLISTINIT, .-ASTPROCLISTINIT
.balign 16

.globl ASTPROCLISTEND
ASTPROCLISTEND:
.type ASTPROCLISTEND, @function
.Lt_0062:
mov dword ptr [AST+112], 0
mov dword ptr [AST+108], 0
lea eax, [AST+76]
push eax
call LISTEND
add esp, 4
mov dword ptr [AST+32], 0
mov dword ptr [AST+36], 0
mov dword ptr [AST+40], 0
.Lt_0063:
ret
.size ASTPROCLISTEND, .-ASTPROCLISTEND
.balign 16

.globl ASTADD
ASTADD:
.type ASTADD, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_0094:
push dword ptr [ebp+8]
call ASTUPDATE
add esp, 4
mov dword ptr [ebp+8], eax
cmp dword ptr [ebp+8], 0
jne .Lt_0097
mov dword ptr [ebp-4], 0
jmp .Lt_0095
.Lt_0097:
.Lt_0096:
mov eax, dword ptr [AST+40]
cmp dword ptr [eax+60], 0
je .Lt_0099
mov eax, dword ptr [AST+40]
mov ebx, dword ptr [eax+60]
mov eax, dword ptr [ebp+8]
mov dword ptr [ebx+68], eax
jmp .Lt_0098
.Lt_0099:
mov eax, dword ptr [AST+40]
mov ebx, dword ptr [ebp+8]
mov dword ptr [eax+56], ebx
.Lt_0098:
mov ebx, dword ptr [AST+40]
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [ebx+60]
mov dword ptr [eax+64], ecx
mov ecx, dword ptr [ebp+8]
mov dword ptr [ecx+68], 0
mov ecx, dword ptr [AST+40]
mov eax, dword ptr [ebp+8]
mov dword ptr [ecx+60], eax
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
.Lt_0095:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTADD, .-ASTADD
.balign 16

.globl ASTADDAFTER
ASTADDAFTER:
.type ASTADDAFTER, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_009A:
push dword ptr [ebp+8]
call ASTUPDATE
add esp, 4
mov dword ptr [ebp+8], eax
cmp dword ptr [ebp+8], 0
jne .Lt_009D
mov dword ptr [ebp-4], 0
jmp .Lt_009B
.Lt_009D:
.Lt_009C:
cmp dword ptr [ebp+12], 0
je .Lt_009F
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+12]
mov dword ptr [eax+64], ebx
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [ebx+68]
mov dword ptr [eax+68], ecx
mov ecx, dword ptr [ebp+12]
cmp dword ptr [ecx+68], 0
je .Lt_00A1
mov ecx, dword ptr [ebp+12]
mov eax, dword ptr [ecx+68]
cmp dword ptr [eax+64], 0
je .Lt_00A3
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax+68]
mov eax, dword ptr [ebp+8]
mov dword ptr [ecx+64], eax
.Lt_00A3:
.Lt_00A2:
jmp .Lt_00A0
.Lt_00A1:
mov eax, dword ptr [AST+40]
mov ecx, dword ptr [ebp+8]
mov dword ptr [eax+60], ecx
.Lt_00A0:
mov ecx, dword ptr [ebp+12]
mov eax, dword ptr [ebp+8]
mov dword ptr [ecx+68], eax
jmp .Lt_009E
.Lt_009F:
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+64], 0
mov eax, dword ptr [AST+40]
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ecx+68], ebx
mov ebx, dword ptr [AST+40]
cmp dword ptr [ebx+56], 0
je .Lt_00A5
mov ebx, dword ptr [AST+40]
mov ecx, dword ptr [ebx+56]
mov ebx, dword ptr [ebp+8]
mov dword ptr [ecx+64], ebx
jmp .Lt_00A4
.Lt_00A5:
mov ebx, dword ptr [AST+40]
mov ecx, dword ptr [ebp+8]
mov dword ptr [ebx+60], ecx
.Lt_00A4:
mov ecx, dword ptr [AST+40]
mov ebx, dword ptr [ebp+8]
mov dword ptr [ecx+56], ebx
.Lt_009E:
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebp-4], ebx
.Lt_009B:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTADDAFTER, .-ASTADDAFTER
.balign 16

.globl ASTADDUNSCOPED
ASTADDUNSCOPED:
.type ASTADDUNSCOPED, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_00A6:
cmp dword ptr [ebp+8], 0
jne .Lt_00A9
jmp .Lt_00A7
.Lt_00A9:
.Lt_00A8:
mov eax, dword ptr [AST+40]
mov ebx, dword ptr [eax+52]
mov dword ptr [ebp-4], ebx
cmp dword ptr [ebp-4], 0
jne .Lt_00AB
mov ebx, dword ptr [AST+40]
mov eax, dword ptr [ebx+56]
mov dword ptr [ebp-4], eax
.Lt_00AB:
.Lt_00AA:
mov dword ptr [AST+196], 0
cmp dword ptr [ebp-4], 0
jne .Lt_00AD
push dword ptr [ebp+8]
call ASTADD
add esp, 4
mov dword ptr [ebp+8], eax
jmp .Lt_00AC
.Lt_00AD:
push dword ptr [ebp-4]
push dword ptr [ebp+8]
call ASTADDAFTER
add esp, 8
mov dword ptr [ebp+8], eax
.Lt_00AC:
mov dword ptr [AST+196], -1
mov eax, dword ptr [AST+40]
mov ebx, dword ptr [ebp+8]
mov dword ptr [eax+52], ebx
.Lt_00A7:
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTADDUNSCOPED, .-ASTADDUNSCOPED
.balign 16

.globl ASTFINDFIRSTCODE
ASTFINDFIRSTCODE:
.type ASTFINDFIRSTCODE, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_00AE:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-8], ebx
.Lt_00B0:
cmp dword ptr [ebp-8], 0
je .Lt_00B1
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx]
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
je .Lt_00B5
.Lt_00B6:
cmp dword ptr [ebp-12], 21
je .Lt_00B5
.Lt_00B7:
cmp dword ptr [ebp-12], 24
je .Lt_00B5
.Lt_00B8:
cmp dword ptr [ebp-12], 27
je .Lt_00B5
.Lt_00B9:
cmp dword ptr [ebp-12], 29
je .Lt_00B5
.Lt_00BA:
cmp dword ptr [ebp-12], 30
jne .Lt_00B4
.Lt_00B5:
jmp .Lt_00B2
.Lt_00B4:
jmp .Lt_00B1
.Lt_00BB:
.Lt_00B2:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+68]
mov dword ptr [ebp-8], ebx
jmp .Lt_00B0
.Lt_00B1:
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ebx
.Lt_00AF:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTFINDFIRSTCODE, .-ASTFINDFIRSTCODE
.balign 16

.globl ASTPROCBEGIN
ASTPROCBEGIN:
.type ASTPROCBEGIN, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
.Lt_00BC:
call HNEWPROCNODE
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+8]
mov dword ptr [eax+52], ebx
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+56], 0
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+60], 0
push dword ptr [ebp+8]
call SYMBPROCALLOCEXT
add esp, 4
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+108]
mov ebx, dword ptr [ENV+508]
mov dword ptr [eax+24], ebx
mov ebx, dword ptr [ebp-4]
mov dword ptr [AST+40], ebx
mov ebx, dword ptr [ebp-4]
mov dword ptr [AST+132], ebx
cmp dword ptr [ebp+12], 0
je .Lt_00BE
mov dword ptr [ebp-12], 0
jmp .Lt_00C8
.Lt_00BE:
mov dword ptr [ebp-12], 1
.Lt_00C8:
mov ebx, dword ptr [ebp-12]
mov dword ptr [PARSER+92], ebx
mov ebx, dword ptr [ebp+8]
mov dword ptr [PARSER+100], ebx
mov ebx, dword ptr [ebp+8]
mov dword ptr [PARSER+104], ebx
push 0
push dword ptr [ebp+8]
call SYMBNESTBEGIN
add esp, 8
push 4
push 0
call SYMBADDLABEL
add esp, 8
mov ebx, dword ptr [ebp-4]
mov dword ptr [ebx+32], eax
push 0
push 0
call SYMBADDLABEL
add esp, 8
mov ebx, dword ptr [ebp-4]
mov dword ptr [ebx+36], eax
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [ebp+8]
mov dword ptr [eax+12], ebx
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebp+12]
mov dword ptr [ebx+48], eax
mov eax, dword ptr [ebp-4]
mov dword ptr [eax+20], 0
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [PARSER+28]
mov dword ptr [eax+24], ebx
mov ebx, dword ptr [ebp-4]
mov dword ptr [ebx+40], 0
mov ebx, dword ptr [ebp-4]
mov dword ptr [ebx+44], 0
mov ebx, dword ptr [ebp-4]
mov dword ptr [ebx+52], 0
push dword ptr [ebp+8]
call dword ptr [IR+28]
add esp, 4
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 268435456
test eax, eax
setne al
shr eax, 1
sbb eax, eax
not eax
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
je .Lt_00C1
push dword ptr [ebp+8]
call HDECLPROCPARAMS
add esp, 4
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+24]
and ebx, 511
test ebx, ebx
je .Lt_00C3
push dword ptr [ebp+8]
call SYMBADDPROCRESULT
add esp, 4
.Lt_00C3:
.Lt_00C2:
.Lt_00C1:
.Lt_00C0:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+108]
lea ebx, [eax+28]
mov dword ptr [ebp-16], ebx
mov ebx, dword ptr [ebp-16]
mov dword ptr [ebx], 0
mov ebx, dword ptr [ebp-16]
mov dword ptr [ebx+4], 0
mov ebx, dword ptr [ebp-16]
mov dword ptr [ebx+8], 0
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+108]
mov ebx, dword ptr [PARSER+28]
mov dword ptr [eax+52], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+8]
and eax, 4096
test eax, eax
je .Lt_00C6
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+72]
mov dword ptr [ebp-16], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+76]
mov dword ptr [ebp-20], eax
push 0
push -2147483648
push 0
push 0
mov eax, dword ptr [ebp-20]
push dword ptr [eax+56]
call ASTNEWVAR
add esp, 20
push eax
push 0
push -2147483648
push 0
push 0
mov eax, dword ptr [ebp-16]
push dword ptr [eax+56]
call ASTNEWVAR
add esp, 20
push eax
call RTLINITAPP
add esp, 8
mov dword ptr [ENV+836], eax
jmp .Lt_00C5
.Lt_00C6:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 8192
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
and ebx, dword ptr [ebp-8]
je .Lt_00C7
push dword ptr [ebp+8]
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+128]
push dword ptr [eax]
call HINITVPTR
add esp, 8
push eax
call ASTADD
add esp, 4
.Lt_00C7:
.Lt_00C5:
push -1
mov eax, dword ptr [ebp-4]
push dword ptr [eax+32]
call ASTNEWLABEL
add esp, 8
push eax
call ASTADD
add esp, 4
.Lt_00BD:
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTPROCBEGIN, .-ASTPROCBEGIN
.balign 16

.globl ASTPROCEND
ASTPROCEND:
.type ASTPROCEND, @function
push ebp
mov ebp, esp
sub esp, 28
push ebx
mov dword ptr [ebp-4], 0
.Lt_00E8:
mov eax, dword ptr [AST+40]
mov dword ptr [ebp-24], eax
inc dword ptr [Lt_010E]
mov eax, dword ptr [ebp-24]
mov ebx, dword ptr [eax+12]
mov dword ptr [ebp-20], ebx
mov ebx, dword ptr [ebp-24]
mov eax, dword ptr [PARSER+28]
mov dword ptr [ebx+28], eax
mov eax, dword ptr [ebp-20]
mov ebx, dword ptr [eax+4]
and ebx, 268435456
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
not ebx
mov dword ptr [ebp-16], ebx
call ERRGETCOUNT
test eax, eax
jne .Lt_00EB
mov eax, dword ptr [ebp-20]
mov ebx, dword ptr [eax+4]
and ebx, 4096
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
and ebx, dword ptr [ebp-16]
je .Lt_00ED
mov ebx, dword ptr [ebp-20]
mov eax, dword ptr [ebx+8]
and eax, 4
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_00EF
mov eax, dword ptr [ebp-20]
mov ebx, dword ptr [eax+8]
or ebx, 4
mov eax, ebx
mov ebx, dword ptr [ebp-20]
mov dword ptr [ebx+8], eax
push dword ptr [ebp-20]
push dword ptr [ebp-24]
call HCALLCTORS
add esp, 8
.Lt_00EF:
.Lt_00EE:
.Lt_00ED:
.Lt_00EC:
mov eax, dword ptr [ebp-20]
push dword ptr [eax+60]
call ASTSCOPEDESTROYVARS
add esp, 4
.Lt_00EB:
.Lt_00EA:
push -1
mov eax, dword ptr [ebp-24]
push dword ptr [eax+36]
call ASTNEWLABEL
add esp, 8
push eax
call ASTADD
add esp, 4
mov eax, dword ptr [PARSER+100]
push dword ptr [eax+56]
call SYMBCHECKLABELS
add esp, 4
test eax, eax
sete al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
je .Lt_00F1
mov eax, dword ptr [ebp-20]
mov ebx, dword ptr [eax+4]
and ebx, 8192
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
and ebx, dword ptr [ebp-16]
je .Lt_00F3
push dword ptr [ebp-20]
call HCALLDTORS
add esp, 4
.Lt_00F3:
.Lt_00F2:
mov ebx, dword ptr [ebp-24]
cmp dword ptr [ebx+40], 0
je .Lt_00F5
push dword ptr [ebp-24]
call ASTSCOPEUPDBREAKLIST
add esp, 4
mov dword ptr [ebp-8], eax
.Lt_00F5:
.Lt_00F4:
push dword ptr [ebp-20]
call ASTGOSUBADDEXIT
add esp, 4
mov eax, dword ptr [ebp-24]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-28], ebx
cmp dword ptr [ebp-16], 0
je .Lt_00F7
push dword ptr [ebp-28]
call HCALLPROFILER
add esp, 4
mov dword ptr [ebp-28], eax
push dword ptr [ebp-20]
push dword ptr [ebp-28]
call HCHECKERRHND
add esp, 8
mov dword ptr [ebp-28], eax
.Lt_00F7:
.Lt_00F6:
cmp dword ptr [ebp+8], 0
je .Lt_00F9
mov eax, dword ptr [ebp-24]
cmp dword ptr [eax+48], 0
je .Lt_00FB
push 0
call RTLEXITAPP
add esp, 4
.Lt_00FB:
.Lt_00FA:
.Lt_00F9:
.Lt_00F8:
cmp dword ptr [ebp-16], 0
je .Lt_00FD
mov eax, dword ptr [ebp-20]
mov ebx, dword ptr [eax+24]
and ebx, 511
test ebx, ebx
je .Lt_00FF
push dword ptr [ebp-20]
push dword ptr [ebp-28]
call HMAYBECALLRESULTCTOR
add esp, 8
mov dword ptr [ebp-28], eax
push dword ptr [ebp-20]
call HLOADPROCRESULT
add esp, 4
.Lt_00FF:
.Lt_00FE:
.Lt_00FD:
.Lt_00FC:
.Lt_00F1:
.Lt_00F0:
push dword ptr [ebp-20]
call dword ptr [IR+32]
add esp, 4
mov dword ptr [ebp-12], 0
call ERRGETCOUNT
test eax, eax
sete al
shr eax, 1
sbb eax, eax
and eax, dword ptr [ebp-8]
je .Lt_0101
mov eax, dword ptr [ebp-20]
mov ebx, dword ptr [eax+8]
or ebx, 128
mov eax, ebx
mov ebx, dword ptr [ebp-20]
mov dword ptr [ebx+8], eax
cmp dword ptr [Lt_010E], 1
jne .Lt_0103
mov eax, dword ptr [ebp-24]
cmp dword ptr [eax+48], 0
jne .Lt_0105
mov eax, dword ptr [ebp-20]
mov ebx, dword ptr [eax+4]
and ebx, 64
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
not ebx
push dword ptr [ebp-20]
call SYMBPROCHASFWDREFINSIGNATURE
add esp, 4
not eax
mov ecx, dword ptr [ENV+104]
test ecx, ecx
sete cl
shr ecx, 1
sbb ecx, ecx
or eax, ecx
and ebx, eax
je .Lt_0107
mov dword ptr [ebp-12], -1
jmp .Lt_0106
.Lt_0107:
push -1
mov eax, dword ptr [ebp-20]
lea ebx, [eax+52]
push ebx
call SYMBDELSYMBOLTB
add esp, 8
.Lt_0106:
jmp .Lt_0104
.Lt_0105:
mov dword ptr [ebp-12], -1
.Lt_0104:
.Lt_0103:
.Lt_0102:
jmp .Lt_0100
.Lt_0101:
push 0
mov ebx, dword ptr [ebp-20]
lea eax, [ebx+52]
push eax
call SYMBDELSYMBOLTB
add esp, 8
.Lt_0100:
push 0
call SYMBNESTEND
add esp, 4
cmp dword ptr [ENV+124], 1
jl .Lt_0109
mov eax, dword ptr [ebp-24]
push dword ptr [eax+56]
call ASTPROCVECTORIZE
add esp, 4
.Lt_0109:
.Lt_0108:
cmp dword ptr [ebp-12], 0
je .Lt_010B
mov eax, dword ptr [ebp-24]
cmp dword ptr [eax+48], 0
jne .Lt_010D
push -1
push dword ptr [ebp-24]
call HPROCFLUSH
add esp, 8
jmp .Lt_010C
.Lt_010D:
call HPROCFLUSHALL
.Lt_010C:
.Lt_010B:
.Lt_010A:
mov eax, dword ptr [AST+32]
mov dword ptr [AST+40], eax
mov eax, dword ptr [AST+32]
mov dword ptr [AST+132], eax
mov dword ptr [PARSER+92], 0
mov eax, dword ptr [ENV+832]
mov dword ptr [PARSER+100], eax
mov eax, dword ptr [ENV+832]
mov dword ptr [PARSER+104], eax
dec dword ptr [Lt_010E]
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_00E9:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTPROCEND, .-ASTPROCEND

.section .data
.balign 4
Lt_010E:
.int 0

.section .text
.balign 16

.globl ASTPROCADDSTATICINSTANCE
ASTPROCADDSTATICINSTANCE:
.type ASTPROCADDSTATICINSTANCE, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
mov dword ptr [ebp-4], 0
.Lt_01AD:
mov eax, dword ptr [PARSER+100]
mov ebx, dword ptr [eax+108]
mov eax, dword ptr [ebx+44]
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_01B0
push 32
call XCALLOCATE
add esp, 4
mov dword ptr [ebp-8], eax
mov eax, dword ptr [PARSER+100]
mov ebx, dword ptr [eax+108]
mov eax, dword ptr [ebp-8]
mov dword ptr [ebx+44], eax
push 6
push 8
push 16
push dword ptr [ebp-8]
call LISTINIT
add esp, 16
.Lt_01B0:
.Lt_01AF:
push dword ptr [ebp-8]
call LISTNEWNODE
add esp, 4
mov dword ptr [ebp-12], eax
push 4
push 3
push 64
push 0
push 0
push 0
call SYMBUNIQUELABEL
push eax
push 0
call SYMBPREADDPROC
add esp, 4
push eax
call SYMBADDPROC
add esp, 32
mov dword ptr [ebp-16], eax
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [ebp-16]
mov dword ptr [eax], ebx
mov ebx, dword ptr [ebp-12]
mov eax, dword ptr [ebp+8]
mov dword ptr [ebx+4], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+8]
or ebx, 8388608
mov eax, ebx
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+8], eax
mov eax, dword ptr [ebp-16]
mov dword ptr [ebp-4], eax
.Lt_01AE:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTPROCADDSTATICINSTANCE, .-ASTPROCADDSTATICINSTANCE
.balign 16

.globl ASTPROCADDGLOBALINSTANCE
ASTPROCADDGLOBALINSTANCE:
.type ASTPROCADDGLOBALINSTANCE, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_01B1:
lea eax, [AST+76]
push eax
call LISTNEWNODE
add esp, 4
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [ebp+8]
mov dword ptr [eax], ebx
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebp+12]
mov dword ptr [ebx+4], eax
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [ebp+16]
mov dword ptr [eax+8], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+8]
or eax, 8388608
mov ebx, eax
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+8], ebx
cmp dword ptr [ebp+12], 0
je .Lt_01B4
inc dword ptr [AST+108]
.Lt_01B4:
.Lt_01B3:
cmp dword ptr [ebp+16], 0
je .Lt_01B6
inc dword ptr [AST+112]
.Lt_01B6:
.Lt_01B5:
.Lt_01B2:
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTPROCADDGLOBALINSTANCE, .-ASTPROCADDGLOBALINSTANCE
.balign 16
fb_ctor__astznodezproc:
.type fb_ctor__astznodezproc, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__astznodezproc, .-fb_ctor__astznodezproc
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
HNEWPROCNODE:
.type HNEWPROCNODE, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0064:
push 0
push -2147483648
push 43
call ASTNEWNODE
add esp, 12
mov dword ptr [ebp-8], eax
cmp dword ptr [AST+36], 0
je .Lt_0067
mov eax, dword ptr [AST+36]
mov ebx, dword ptr [ebp-8]
mov dword ptr [eax+68], ebx
jmp .Lt_0066
.Lt_0067:
mov ebx, dword ptr [ebp-8]
mov dword ptr [AST+32], ebx
.Lt_0066:
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [AST+36]
mov dword ptr [ebx+64], eax
mov eax, dword ptr [ebp-8]
mov dword ptr [eax+68], 0
mov eax, dword ptr [ebp-8]
mov dword ptr [AST+36], eax
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0065:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HNEWPROCNODE, .-HNEWPROCNODE
.balign 16
HDELPROCNODE:
.type HDELPROCNODE, @function
push ebp
mov ebp, esp
push ebx
.Lt_0068:
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+56], 0
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+60], 0
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+64], 0
je .Lt_006B
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebx+64]
mov ebx, dword ptr [eax+68]
mov dword ptr [ecx+68], ebx
jmp .Lt_006A
.Lt_006B:
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebx+68]
mov dword ptr [AST+32], ecx
.Lt_006A:
mov ecx, dword ptr [ebp+8]
cmp dword ptr [ecx+68], 0
je .Lt_006D
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+68]
mov ebx, dword ptr [ecx+64]
mov dword ptr [eax+64], ebx
jmp .Lt_006C
.Lt_006D:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+64]
mov dword ptr [AST+36], eax
.Lt_006C:
push dword ptr [ebp+8]
call ASTDELNODE
add esp, 4
.Lt_0069:
pop ebx
mov esp, ebp
pop ebp
ret
.size HDELPROCNODE, .-HDELPROCNODE
.balign 16
HPROCFLUSH:
.type HPROCFLUSH, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
.Lt_006E:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+12]
mov dword ptr [ebp-12], ebx
cmp dword ptr [ebp+12], 0
je .Lt_0071
push dword ptr [ebp-12]
call HGENSTATICINSTANCESDTORS
add esp, 4
.Lt_0071:
.Lt_0070:
mov ebx, dword ptr [ebp+8]
mov dword ptr [AST+40], ebx
mov ebx, dword ptr [ebp+8]
mov dword ptr [AST+132], ebx
mov ebx, dword ptr [ebp+12]
mov dword ptr [AST+136], ebx
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx+48], 0
je .Lt_0072
mov dword ptr [ebp-16], 0
jmp .Lt_01CB
.Lt_0072:
mov dword ptr [ebp-16], 1
.Lt_01CB:
mov ebx, dword ptr [ebp-16]
mov dword ptr [PARSER+92], ebx
mov ebx, dword ptr [ebp-12]
mov dword ptr [PARSER+100], ebx
mov ebx, dword ptr [ebp-12]
mov dword ptr [PARSER+104], ebx
push 0
push dword ptr [ebp-12]
call SYMBNESTBEGIN
add esp, 8
cmp dword ptr [AST+136], 0
je .Lt_0075
mov ebx, dword ptr [ebp-12]
mov eax, dword ptr [ebx+8]
or eax, 16777216
mov ebx, eax
mov eax, dword ptr [ebp-12]
mov dword ptr [eax+8], ebx
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+32]
push dword ptr [ebp-12]
call dword ptr [IR+76]
add esp, 8
mov ebx, dword ptr [ebp-12]
push dword ptr [ebx+56]
call ASTSCOPEALLOCLOCALS
add esp, 4
.Lt_0075:
.Lt_0074:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+56]
mov dword ptr [ebp-4], eax
.Lt_0076:
cmp dword ptr [ebp-4], 0
je .Lt_0077
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+68]
mov dword ptr [ebp-8], ebx
push dword ptr [ebp-4]
call ASTLOAD
add esp, 4
push dword ptr [ebp-4]
call ASTDELNODE
add esp, 4
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ebx
jmp .Lt_0076
.Lt_0077:
cmp dword ptr [AST+136], 0
je .Lt_0079
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+36]
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+32]
push dword ptr [ebp-12]
call dword ptr [IR+80]
add esp, 12
mov ebx, dword ptr [ebp-12]
push dword ptr [ebx+56]
call dword ptr [IR+56]
add esp, 4
.Lt_0079:
.Lt_0078:
push 0
mov ebx, dword ptr [ebp-12]
lea eax, [ebx+52]
push eax
call SYMBDELSYMBOLTB
add esp, 8
push 0
call SYMBNESTEND
add esp, 4
push dword ptr [ebp+8]
call HDELPROCNODE
add esp, 4
mov dword ptr [AST+136], -1
.Lt_006F:
pop ebx
mov esp, ebp
pop ebp
ret
.size HPROCFLUSH, .-HPROCFLUSH
.balign 16
HPROCFLUSHALL:
.type HPROCFLUSHALL, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
.Lt_007A:
call HGENGLOBALINSTANCESCTOR
.Lt_007C:
mov eax, dword ptr [AST+32]
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
jne .Lt_0080
jmp .Lt_007D
.Lt_0080:
.Lt_007F:
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+12]
mov dword ptr [ebp-12], ebx
mov ebx, dword ptr [ebp-12]
mov eax, dword ptr [ebx+8]
and eax, 128
test eax, eax
je .Lt_0082
mov dword ptr [ebp-8], -1
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax+4]
and ebx, 64
test ebx, ebx
je .Lt_0084
mov ebx, dword ptr [ebp-12]
mov eax, dword ptr [ebx+8]
and eax, 2
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_0086
mov dword ptr [ebp-8], 0
jmp .Lt_0085
.Lt_0086:
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax+8]
and ebx, 8192
test ebx, ebx
je .Lt_0087
push dword ptr [ebp-4]
call HMODLEVELISEMPTY
add esp, 4
test eax, eax
sete al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-8], eax
.Lt_0087:
.Lt_0085:
.Lt_0084:
.Lt_0083:
jmp .Lt_0081
.Lt_0082:
mov dword ptr [ebp-8], 0
.Lt_0081:
push dword ptr [ebp-8]
push dword ptr [ebp-4]
call HPROCFLUSH
add esp, 8
.Lt_007E:
jmp .Lt_007C
.Lt_007D:
.Lt_007B:
pop ebx
mov esp, ebp
pop ebp
ret
.size HPROCFLUSHALL, .-HPROCFLUSHALL
.balign 16
ASTUPDATE:
.type ASTUPDATE, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_0088:
cmp dword ptr [ebp+8], 0
jne .Lt_008B
mov dword ptr [ebp-4], 0
jmp .Lt_0089
.Lt_008B:
.Lt_008A:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 9
jne .Lt_008D
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+20], 0
je .Lt_008F
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+4], 0
je .Lt_0091
push 0
push 0
push dword ptr [ebp+8]
call ASTSETTYPE
add esp, 12
.Lt_0091:
.Lt_0090:
.Lt_008F:
.Lt_008E:
.Lt_008D:
.Lt_008C:
push dword ptr [ebp+8]
call ASTTYPEINIUPDATE
add esp, 4
mov dword ptr [ebp+8], eax
push dword ptr [ebp+8]
call ASTUPDATEBITFIELDS
add esp, 4
mov dword ptr [ebp+8], eax
push dword ptr [ebp+8]
call ASTOPTIMIZETREE
add esp, 4
mov dword ptr [ebp+8], eax
push dword ptr [ebp+8]
call ASTOPTASSIGNMENT
add esp, 4
mov dword ptr [ebp+8], eax
push dword ptr [ebp+8]
call ASTUPDSTRCONCAT
add esp, 4
mov dword ptr [ebp+8], eax
cmp dword ptr [AST+196], 0
je .Lt_0093
push -1
push 0
call ASTDTORLISTFLUSH
add esp, 4
push eax
push dword ptr [ebp+8]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp+8], eax
.Lt_0093:
.Lt_0092:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
.Lt_0089:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size ASTUPDATE, .-ASTUPDATE
.balign 16
HCHECKERRHND:
.type HCHECKERRHND, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_00CB:
cmp dword ptr [ENV+156], 0
je .Lt_00CE
push dword ptr [ebp+8]
lea eax, [ENV+244]
push eax
call ASTNEWCONSTSTR
add esp, 4
push eax
push dword ptr [ebp+12]
call RTLERRORSETMODNAME
add esp, 8
push eax
call ASTADDAFTER
add esp, 8
mov dword ptr [ebp+8], eax
push dword ptr [ebp+8]
mov eax, dword ptr [ebp+12]
push dword ptr [eax+12]
call ASTNEWCONSTSTR
add esp, 4
push eax
push dword ptr [ebp+12]
call RTLERRORSETFUNCNAME
add esp, 8
push eax
call ASTADDAFTER
add esp, 8
mov dword ptr [ebp+8], eax
.Lt_00CE:
.Lt_00CD:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+108]
lea eax, [ebx+28]
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
cmp dword ptr [eax+8], 0
je .Lt_00D1
push 0
push -2147483648
push 0
push 0
mov eax, dword ptr [ebp-8]
push dword ptr [eax+8]
call ASTNEWVAR
add esp, 20
push eax
push 0
call RTLERRORSETFUNCNAME
add esp, 8
push eax
call ASTADD
add esp, 4
mov eax, dword ptr [ebp-8]
mov dword ptr [eax+8], 0
.Lt_00D1:
.Lt_00D0:
mov eax, dword ptr [ebp-8]
cmp dword ptr [eax+4], 0
je .Lt_00D3
push 0
push -2147483648
push 0
push 0
mov eax, dword ptr [ebp-8]
push dword ptr [eax+4]
call ASTNEWVAR
add esp, 20
push eax
push 0
call RTLERRORSETMODNAME
add esp, 8
push eax
call ASTADD
add esp, 4
mov eax, dword ptr [ebp-8]
mov dword ptr [eax+4], 0
.Lt_00D3:
.Lt_00D2:
mov eax, dword ptr [ebp-8]
cmp dword ptr [eax], 0
je .Lt_00D5
push 0
push 0
push -2147483648
push 0
push 0
mov eax, dword ptr [ebp-8]
push dword ptr [eax]
call ASTNEWVAR
add esp, 20
push eax
call RTLERRORSETHANDLER
add esp, 8
mov eax, dword ptr [ebp-8]
mov dword ptr [eax], 0
.Lt_00D5:
.Lt_00D4:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
.Lt_00CC:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HCHECKERRHND, .-HCHECKERRHND
.balign 16
HMAYBECALLRESULTCTOR:
.type HMAYBECALLRESULTCTOR, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_00D6:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 33554432
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax+24]
and ecx, 511
cmp ecx, 18
setne cl
shr ecx, 1
sbb ecx, ecx
or ebx, ecx
je .Lt_00D9
mov ecx, dword ptr [ebp+8]
mov dword ptr [ebp-4], ecx
jmp .Lt_00D7
.Lt_00D9:
.Lt_00D8:
mov ecx, dword ptr [ebp+12]
mov ebx, dword ptr [ecx+108]
mov ecx, dword ptr [ebx+48]
and ecx, 2
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
not ecx
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+108]
mov ebx, dword ptr [eax+48]
and ebx, 1
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
and ecx, ebx
je .Lt_00DB
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebp-4], ebx
jmp .Lt_00D7
.Lt_00DB:
.Lt_00DA:
mov ebx, dword ptr [ebp+12]
push dword ptr [ebx+28]
call SYMBGETCOMPDEFCTOR
add esp, 4
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_00DD
push dword ptr [ebp+12]
call SYMBHASCTOR
add esp, 4
test eax, eax
je .Lt_00DF
push 0
push 0
push 183
call ERRREPORT
add esp, 12
.Lt_00DF:
.Lt_00DE:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
jmp .Lt_00D7
.Lt_00DD:
.Lt_00DC:
push dword ptr [ebp+12]
call SYMBGETPROCRESULT
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_00E1
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
jmp .Lt_00D7
.Lt_00E1:
.Lt_00E0:
push dword ptr [ebp+8]
push dword ptr [ebp-8]
push dword ptr [ebp+12]
call ASTBUILDPROCRESULTVAR
add esp, 8
push eax
mov eax, dword ptr [ebp+12]
push dword ptr [eax+28]
call ASTBUILDCTORCALL
add esp, 8
push eax
call ASTADDAFTER
add esp, 8
mov dword ptr [ebp-4], eax
.Lt_00D7:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HMAYBECALLRESULTCTOR, .-HMAYBECALLRESULTCTOR
.balign 16
HCALLPROFILER:
.type HCALLPROFILER, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_00E2:
cmp dword ptr [ENV+160], 0
je .Lt_00E5
cmp dword ptr [ENV+108], 3
je .Lt_00E7
push dword ptr [ebp+8]
call RTLPROFILECALL_MCOUNT
push eax
call ASTADDAFTER
add esp, 8
mov dword ptr [ebp+8], eax
.Lt_00E7:
.Lt_00E6:
.Lt_00E5:
.Lt_00E4:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
.Lt_00E3:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size HCALLPROFILER, .-HCALLPROFILER
.balign 16
HDECLPROCPARAMS:
.type HDECLPROCPARAMS, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
mov dword ptr [ebp-4], 0
.Lt_0117:
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+24]
and ebx, 511
cmp ebx, 18
jne .Lt_011A
push dword ptr [ebp+8]
call SYMBADDPROCRESULTPARAM
add esp, 4
.Lt_011A:
.Lt_0119:
mov dword ptr [ebp-8], 1
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx+80], 4
jne .Lt_011B
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+76]
mov dword ptr [ebp-16], eax
jmp .Lt_01D2
.Lt_011B:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+72]
mov dword ptr [ebp-16], ebx
.Lt_01D2:
mov ebx, dword ptr [ebp-16]
mov dword ptr [ebp-12], ebx
.Lt_011D:
cmp dword ptr [ebp-12], 0
je .Lt_011E
mov ebx, dword ptr [ebp-12]
cmp dword ptr [ebx+52], 4
je .Lt_0120
push dword ptr [ebp-12]
call SYMBADDVARFORPARAM
add esp, 4
mov ebx, dword ptr [ebp-12]
mov dword ptr [ebx+56], eax
mov eax, dword ptr [ebp-12]
cmp dword ptr [eax+56], 0
jne .Lt_0122
push 4
push 0
push dword ptr [ebp-8]
push dword ptr [ebp+8]
call ERRREPORTPARAM
add esp, 16
jmp .Lt_0118
.Lt_0122:
.Lt_0121:
.Lt_0120:
.Lt_011F:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+80], 4
jne .Lt_0123
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax+156]
mov dword ptr [ebp-20], ebx
jmp .Lt_01D3
.Lt_0123:
mov ebx, dword ptr [ebp-12]
mov eax, dword ptr [ebx+160]
mov dword ptr [ebp-20], eax
.Lt_01D3:
mov eax, dword ptr [ebp-20]
mov dword ptr [ebp-12], eax
inc dword ptr [ebp-8]
jmp .Lt_011D
.Lt_011E:
mov dword ptr [ebp-4], -1
.Lt_0118:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HDECLPROCPARAMS, .-HDECLPROCPARAMS
.balign 16
HLOADPROCRESULT:
.type HLOADPROCRESULT, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_0125:
push dword ptr [ebp+8]
call SYMBGETPROCRESULT
add esp, 4
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+24]
and ebx, 511
cmp ebx, 16
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+4]
and ecx, 33554432
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
not ecx
and ebx, ecx
je .Lt_0128
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp-4]
call ASTNEWVAR
add esp, 20
push eax
call RTLSTRALLOCTMPRESULT
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ENV+104], 1
jne .Lt_012A
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+24]
push dword ptr [ebp-8]
call ASTNEWLOAD
add esp, 12
mov dword ptr [ebp-8], eax
.Lt_012A:
.Lt_0129:
jmp .Lt_0127
.Lt_0128:
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+84]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+88]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+84]
push 0
push 0
push dword ptr [ebp-4]
call ASTNEWVAR
add esp, 20
push eax
call ASTNEWLOAD
add esp, 12
mov dword ptr [ebp-8], eax
.Lt_0127:
push dword ptr [ebp-8]
call ASTADD
add esp, 4
.Lt_0126:
pop ebx
mov esp, ebp
pop ebp
ret
.size HLOADPROCRESULT, .-HLOADPROCRESULT
.balign 16
HMODLEVELISEMPTY:
.type HMODLEVELISEMPTY, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_012B:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-8], ebx
cmp dword ptr [ebp-8], 0
jne .Lt_012E
mov dword ptr [ebp-4], -1
jmp .Lt_012C
.Lt_012E:
.Lt_012D:
mov ebx, dword ptr [ebp-8]
cmp dword ptr [ebx], 21
je .Lt_0130
mov dword ptr [ebp-4], 0
jmp .Lt_012C
.Lt_0130:
.Lt_012F:
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx+68]
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0132
mov dword ptr [ebp-4], -1
jmp .Lt_012C
.Lt_0132:
.Lt_0131:
mov eax, dword ptr [ebp-8]
cmp dword ptr [eax], 21
je .Lt_0134
mov dword ptr [ebp-4], 0
jmp .Lt_012C
.Lt_0134:
.Lt_0133:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+68]
mov dword ptr [ebp-8], ebx
cmp dword ptr [ebp-8], 0
jne .Lt_0136
mov dword ptr [ebp-4], -1
jmp .Lt_012C
.Lt_0136:
.Lt_0135:
mov dword ptr [ebp-4], 0
.Lt_012C:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HMODLEVELISEMPTY, .-HMODLEVELISEMPTY
.balign 16
HCALLCTORLIST:
.type HCALLCTORLIST, @function
push ebp
mov ebp, esp
sub esp, 44
push ebx
mov dword ptr [ebp-4], 0
.Lt_0137:
cmp dword ptr [ebp+16], 0
je .Lt_013A
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+24]
and ebx, 511
mov dword ptr [ebp-32], ebx
mov ebx, dword ptr [ebp+16]
mov eax, dword ptr [ebx+28]
mov dword ptr [ebp-20], eax
mov eax, dword ptr [ebp+16]
mov ecx, dword ptr [eax+72]
mov ebx, dword ptr [eax+76]
mov dword ptr [ebp-40], ecx
mov dword ptr [ebp-36], ebx
jmp .Lt_0139
.Lt_013A:
mov ecx, dword ptr [ebp+12]
mov ebx, dword ptr [ecx+24]
and ebx, 511
mov dword ptr [ebp-32], ebx
mov ebx, dword ptr [ebp+12]
mov ecx, dword ptr [ebx+28]
mov dword ptr [ebp-20], ecx
mov ecx, dword ptr [ebp+12]
mov eax, dword ptr [ecx+72]
mov ebx, dword ptr [ecx+76]
mov dword ptr [ebp-40], eax
mov dword ptr [ebp-36], ebx
.Lt_0139:
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
push dword ptr [ebp-20]
mov eax, dword ptr [ebp-32]
and eax, 31
mov ebx, dword ptr [ebp-32]
and ebx, 480
add ebx, 32
or eax, ebx
mov ebx, dword ptr [ebp-32]
and ebx, 261632
sal ebx, 1
or eax, ebx
push eax
call SYMBADDTEMPVAR
add esp, 8
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp+16], 0
je .Lt_013C
cmp dword ptr [ebp+8], 0
je .Lt_013E
push 0
push 0
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call ASTBUILDVARFIELD
add esp, 16
mov dword ptr [ebp-24], eax
jmp .Lt_013D
.Lt_013E:
mov ebx, dword ptr [ebp-40]
mov eax, dword ptr [ebp-36]
add ebx, 4294967295
adc eax, 4294967295
mov ecx, dword ptr [ebp+16]
push dword ptr [ecx+40]
push dword ptr [ecx+36]
push eax
push ebx
mov eax, [esp+0]
mul dword ptr [esp+8]
xchg eax, [esp+0]
imul eax, [esp+12]
add eax, edx
mov edx, [esp+4]
imul edx, [esp+8]
add edx, eax
mov [esp+4], edx
pop ebx
pop eax
add esp, 8
push eax
push ebx
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call ASTBUILDVARFIELD
add esp, 16
mov dword ptr [ebp-24], eax
.Lt_013D:
jmp .Lt_013B
.Lt_013C:
cmp dword ptr [ebp+8], 0
je .Lt_0140
push 0
push 0
push 0
push dword ptr [ebp+12]
call ASTBUILDVARFIELD
add esp, 16
mov dword ptr [ebp-24], eax
jmp .Lt_013F
.Lt_0140:
mov ebx, dword ptr [ebp-40]
mov eax, dword ptr [ebp-36]
add ebx, 4294967295
adc eax, 4294967295
mov ecx, dword ptr [ebp-20]
push dword ptr [ecx+40]
push dword ptr [ecx+36]
push eax
push ebx
mov eax, [esp+0]
mul dword ptr [esp+8]
xchg eax, [esp+0]
imul eax, [esp+12]
add eax, edx
mov edx, [esp+4]
imul edx, [esp+8]
add edx, eax
mov [esp+4], edx
pop ebx
pop eax
add esp, 8
push eax
push ebx
push 0
push dword ptr [ebp+12]
call ASTBUILDVARFIELD
add esp, 16
mov dword ptr [ebp-24], eax
.Lt_013F:
.Lt_013B:
push 64
push dword ptr [ebp-24]
call ASTNEWADDROF
add esp, 4
push eax
push dword ptr [ebp-16]
call _Z17ASTBUILDVARASSIGNP8FBSYMBOLP7ASTNODEi
add esp, 12
mov dword ptr [ebp-28], eax
push -1
push 0
push dword ptr [ebp-12]
push dword ptr [ebp-8]
push dword ptr [ebp-28]
call ASTBUILDFORBEGIN
add esp, 20
mov dword ptr [ebp-28], eax
cmp dword ptr [ebp+8], 0
je .Lt_0142
push -1
push dword ptr [ebp-16]
call ASTBUILDVARDEREF
add esp, 4
push eax
push dword ptr [ebp-20]
call ASTBUILDCTORCALL
add esp, 8
push eax
push dword ptr [ebp-28]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-28], eax
jmp .Lt_0141
.Lt_0142:
push -1
push 0
push dword ptr [ebp-16]
call ASTBUILDVARDEREF
add esp, 4
push eax
push dword ptr [ebp-20]
call ASTBUILDDTORCALL
add esp, 12
push eax
push dword ptr [ebp-28]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-28], eax
.Lt_0141:
push -1
cmp dword ptr [ebp+8], 0
je .Lt_0143
mov dword ptr [ebp-44], 1
jmp .Lt_01D6
.Lt_0143:
mov dword ptr [ebp-44], -1
.Lt_01D6:
push dword ptr [ebp-44]
push dword ptr [ebp-16]
call ASTBUILDVARINC
add esp, 8
push eax
push dword ptr [ebp-28]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-28], eax
push 0
push 7
push dword ptr [ebp-36]
push dword ptr [ebp-40]
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp-12]
push dword ptr [ebp-8]
push dword ptr [ebp-28]
call ASTBUILDFOREND
add esp, 16
mov dword ptr [ebp-28], eax
mov eax, dword ptr [ebp-28]
mov dword ptr [ebp-4], eax
.Lt_0138:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HCALLCTORLIST, .-HCALLCTORLIST
.balign 16
HCALLFIELDCTOR:
.type HCALLFIELDCTOR, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
push esi
mov dword ptr [ebp-4], 0
.Lt_0145:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 4
test ebx, ebx
je .Lt_0148
jmp .Lt_0146
.Lt_0148:
.Lt_0147:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+8]
and eax, 2048
test eax, eax
je .Lt_014A
jmp .Lt_0146
.Lt_014A:
.Lt_0149:
push dword ptr [ebp+12]
call SYMBHASDEFCTOR
add esp, 4
test eax, eax
je .Lt_014C
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax+56], 0
jne .Lt_014E
push 0
push 0
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call ASTBUILDVARFIELD
add esp, 16
push eax
mov eax, dword ptr [ebp+12]
push dword ptr [eax+28]
call ASTBUILDCTORCALL
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_014D
.Lt_014E:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push -1
call HCALLCTORLIST
add esp, 12
mov dword ptr [ebp-4], eax
.Lt_014D:
jmp .Lt_0146
.Lt_014C:
.Lt_014B:
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax+108], 0
jle .Lt_0150
push 64
push 0
push 8
push 0
push 0
call ASTNEWCONSTI
add esp, 16
push eax
push 0
push 0
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call ASTBUILDVARFIELD
add esp, 16
push eax
call ASTNEWASSIGN
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_014F
.Lt_0150:
push 0
push 0
push 0
push 7
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [ebp+12]
mov esi, dword ptr [ebx+72]
mov ecx, dword ptr [ebx+76]
push dword ptr [eax+40]
push dword ptr [eax+36]
push ecx
push esi
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
pop esi
pop ecx
add esp, 8
push ecx
push esi
call ASTNEWCONSTI
add esp, 16
push eax
push 0
push 0
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call ASTBUILDVARFIELD
add esp, 16
push eax
push 106
call ASTNEWMEM
add esp, 20
mov dword ptr [ebp-4], eax
.Lt_014F:
.Lt_0146:
mov eax, dword ptr [ebp-4]
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size HCALLFIELDCTOR, .-HCALLFIELDCTOR
.balign 16
HCLEARUNIONFIELDS:
.type HCLEARUNIONFIELDS, @function
push ebp
mov ebp, esp
sub esp, 32
push ebx
push esi
mov dword ptr [ebp-4], 0
.Lt_0151:
mov eax, dword ptr [ebp+12]
mov dword ptr [ebp-8], eax
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax+44]
mov ebx, dword ptr [eax+48]
mov dword ptr [ebp-32], ecx
mov dword ptr [ebp-28], ebx
.Lt_0153:
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
jl .Lt_0157
jg .Lt_01D7
cmp dword ptr [ebp-24], eax
jbe .Lt_0157
.Lt_01D7:
mov esi, dword ptr [ebp-24]
mov eax, dword ptr [ebp-20]
mov dword ptr [ebp-16], esi
mov dword ptr [ebp-12], eax
.Lt_0157:
.Lt_0156:
mov esi, dword ptr [ebp-8]
mov eax, dword ptr [esi+160]
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0159
jmp .Lt_0154
.Lt_0159:
.Lt_0158:
.Lt_0155:
mov eax, dword ptr [ebp-8]
mov esi, dword ptr [eax+8]
and esi, 16777216
test esi, esi
jne .Lt_0153
.Lt_0154:
mov esi, dword ptr [ebp+16]
mov eax, dword ptr [ebp-8]
mov dword ptr [esi], eax
push 0
push 0
push 0
push 7
push dword ptr [ebp-12]
push dword ptr [ebp-16]
call ASTNEWCONSTI
add esp, 16
push eax
push 0
push 0
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call ASTBUILDVARFIELD
add esp, 16
push eax
push 106
call ASTNEWMEM
add esp, 20
mov dword ptr [ebp-4], eax
.Lt_0152:
mov eax, dword ptr [ebp-4]
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size HCLEARUNIONFIELDS, .-HCLEARUNIONFIELDS
.balign 16
HINITDYNAMICARRAYFIELD:
.type HINITDYNAMICARRAYFIELD, @function
push ebp
mov ebp, esp
sub esp, 124
push ebx
mov dword ptr [ebp-4], 0
.Lt_015A:
lea eax, [ebp-68]
push eax
push edi
mov edi, eax
xor eax, eax
mov ecx, 16
rep stosd
pop edi
pop eax
lea eax, [ebp-68]
mov dword ptr [ebp-112], eax
lea eax, [ebp-68]
lea ebx, [ebp-112]
add ebx, 4
mov dword ptr [ebx], eax
lea eax, [ebp-112]
add eax, 8
mov dword ptr [eax], 64
lea eax, [ebp-112]
add eax, 12
mov dword ptr [eax], 4
lea eax, [ebp-112]
add eax, 16
mov dword ptr [eax], 2
lea eax, [ebp-112]
add eax, 20
mov dword ptr [eax], 8
lea eax, [ebp-112]
add eax, 24
mov dword ptr [eax], 0
lea eax, [ebp-112]
add eax, 28
mov dword ptr [eax], 7
lea eax, [ebp-112]
add eax, 32
mov dword ptr [eax], 2
lea eax, [ebp-112]
add eax, 36
mov dword ptr [eax], 0
lea eax, [ebp-112]
add eax, 40
mov dword ptr [eax], 1
mov eax, dword ptr [ebp+12]
push dword ptr [eax+52]
call ASTTYPEINICLONE
add esp, 4
mov dword ptr [ebp-116], eax
mov dword ptr [ebp-124], 0
mov eax, dword ptr [ebp-116]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-120], ebx
.Lt_015D:
mov ebx, dword ptr [ebp-120]
mov eax, dword ptr [ebp-124]
mov ecx, dword ptr [ebx+56]
mov dword ptr [ebp+eax*8-68], ecx
mov ecx, dword ptr [ebp-120]
mov dword ptr [ecx+56], 0
mov ecx, dword ptr [ebp-120]
mov eax, dword ptr [ecx+60]
mov dword ptr [ebp-120], eax
mov eax, dword ptr [ebp-120]
mov ecx, dword ptr [ebp-124]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp+ecx*8-64], ebx
mov ebx, dword ptr [ebp-120]
mov dword ptr [ebx+56], 0
mov ebx, dword ptr [ebp-120]
mov ecx, dword ptr [ebx+60]
mov dword ptr [ebp-120], ecx
inc dword ptr [ebp-124]
.Lt_015F:
cmp dword ptr [ebp-120], 0
jne .Lt_015D
.Lt_015E:
push dword ptr [ebp-116]
call ASTDELTREE
add esp, 4
mov ecx, dword ptr [ebp+12]
mov ebx, dword ptr [ecx+8]
and ebx, 2048
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
not ebx
push ebx
push 0
lea ebx, [ebp-112]
push ebx
push dword ptr [ebp-124]
push 0
push 0
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call ASTBUILDVARFIELD
add esp, 16
push eax
call RTLARRAYREDIM
add esp, 20
mov dword ptr [ebp-4], eax
.Lt_015B:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HINITDYNAMICARRAYFIELD, .-HINITDYNAMICARRAYFIELD
.balign 16
HCALLFIELDCTORS:
.type HCALLFIELDCTORS, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
mov dword ptr [ebp-4], 0
.Lt_0160:
mov dword ptr [ebp-16], 0
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+72]
mov eax, dword ptr [ebx+56]
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-8], ebx
.Lt_0162:
cmp dword ptr [ebp-8], 0
je .Lt_0163
mov ebx, dword ptr [ebp-8]
cmp dword ptr [ebx], 12
jne .Lt_0165
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+92]
cmp dword ptr [ebp-8], eax
je .Lt_0167
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+8]
and ebx, 16777216
test ebx, ebx
je .Lt_0169
push -1
lea ebx, [ebp-8]
push ebx
push dword ptr [ebp-8]
push dword ptr [ebp-12]
call HCLEARUNIONFIELDS
add esp, 12
push eax
push dword ptr [ebp-16]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-16], eax
jmp .Lt_0162
jmp .Lt_0168
.Lt_0169:
mov eax, dword ptr [ebp-8]
cmp dword ptr [eax+52], 0
jne .Lt_016B
push -1
push dword ptr [ebp-8]
push dword ptr [ebp-12]
call HCALLFIELDCTOR
add esp, 8
push eax
push dword ptr [ebp-16]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-16], eax
jmp .Lt_016A
.Lt_016B:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+4]
and ebx, 4
test ebx, ebx
je .Lt_016C
push -1
push dword ptr [ebp-8]
push dword ptr [ebp-12]
call HINITDYNAMICARRAYFIELD
add esp, 8
push eax
push dword ptr [ebp-16]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-16], eax
jmp .Lt_016A
.Lt_016C:
push -1
push 64
push 0
mov eax, dword ptr [ebp-8]
push dword ptr [eax+52]
call ASTTYPEINICLONE
add esp, 4
push eax
push 0
push 0
push 0
push dword ptr [ebp-12]
call ASTBUILDVARFIELD
add esp, 16
push eax
call _Z15ASTTYPEINIFLUSHP7ASTNODES0_ii
add esp, 16
push eax
push dword ptr [ebp-16]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-16], eax
.Lt_016A:
.Lt_0168:
.Lt_0167:
.Lt_0166:
.Lt_0165:
.Lt_0164:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+160]
mov dword ptr [ebp-8], ebx
jmp .Lt_0162
.Lt_0163:
mov ebx, dword ptr [ebp-16]
mov dword ptr [ebp-4], ebx
.Lt_0161:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HCALLFIELDCTORS, .-HCALLFIELDCTORS
.balign 16
HCALLBASECTOR:
.type HCALLBASECTOR, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
mov dword ptr [ebp-4], 0
.Lt_016D:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+92]
mov dword ptr [ebp-12], ebx
cmp dword ptr [ebp-12], 0
jne .Lt_0170
jmp .Lt_016E
.Lt_0170:
.Lt_016F:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+72]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-16], ebx
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+108]
mov ebx, dword ptr [eax+64]
mov dword ptr [ebp-8], ebx
cmp dword ptr [ebp-8], 0
je .Lt_0172
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+108]
mov dword ptr [eax+64], 0
push 64
push 0
push dword ptr [ebp-8]
push 0
push 0
push 0
push dword ptr [ebp-16]
call ASTBUILDVARFIELD
add esp, 16
push eax
call _Z15ASTTYPEINIFLUSHP7ASTNODES0_ii
add esp, 16
mov dword ptr [ebp-4], eax
jmp .Lt_016E
.Lt_0172:
.Lt_0171:
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax+28]
mov dword ptr [ebp-20], ebx
push dword ptr [ebp-20]
call SYMBGETCOMPDEFCTOR
add esp, 4
mov dword ptr [ebp-24], eax
cmp dword ptr [ebp-24], 0
je .Lt_0174
push dword ptr [ebp-24]
call SYMBCHECKACCESS
add esp, 4
test eax, eax
jne .Lt_0176
push 0
push 0
push 206
call ERRREPORT
add esp, 12
.Lt_0176:
.Lt_0175:
jmp .Lt_0173
.Lt_0174:
push dword ptr [ebp-20]
call SYMBGETCOMPCTORHEAD
add esp, 4
test eax, eax
je .Lt_0177
push 0
push 0
push 184
call ERRREPORT
add esp, 12
.Lt_0177:
.Lt_0173:
push dword ptr [ebp-12]
push dword ptr [ebp-16]
call HCALLFIELDCTOR
add esp, 8
mov dword ptr [ebp-4], eax
.Lt_016E:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HCALLBASECTOR, .-HCALLBASECTOR
.balign 16
HINITVPTR:
.type HINITVPTR, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0178:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+8]
and ebx, 4194304
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_017B
jmp .Lt_0179
.Lt_017B:
.Lt_017A:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+72]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-8], ebx
push 64
push 0
push 0
push 0
push -2147483648
mov ebx, dword ptr [ENV+236]
sal ebx, 1
mov ecx, ebx
mov eax, ecx
sar eax, 31
push eax
push ecx
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ecx+124]
push dword ptr [eax+144]
call ASTNEWVAR
add esp, 20
push eax
call ASTNEWADDROF
add esp, 4
push eax
push 0
push 32
call ASTNEWCONV
add esp, 20
push eax
push 0
push 0
push dword ptr [SYMB+99592]
call SYMBUDTGETFIRSTFIELD
add esp, 4
push eax
push dword ptr [ebp-8]
call ASTBUILDVARFIELD
add esp, 16
push eax
call ASTNEWASSIGN
add esp, 12
mov dword ptr [ebp-4], eax
.Lt_0179:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HINITVPTR, .-HINITVPTR
.balign 16
HCALLCTORS:
.type HCALLCTORS, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_017C:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+128]
mov eax, dword ptr [ebx]
mov dword ptr [ebp-8], eax
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call HCALLBASECTOR
add esp, 8
mov dword ptr [ebp-4], eax
push -1
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call HCALLFIELDCTORS
add esp, 8
push eax
push dword ptr [ebp-4]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-4], eax
push -1
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call HINITVPTR
add esp, 8
push eax
push dword ptr [ebp-4]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-4], eax
push dword ptr [ebp+8]
call ASTFINDFIRSTCODE
add esp, 4
mov dword ptr [ebp+8], eax
cmp dword ptr [ebp+8], 0
je .Lt_017F
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+64]
mov dword ptr [ebp+8], ebx
.Lt_017F:
.Lt_017E:
push dword ptr [ebp+8]
push dword ptr [ebp-4]
call ASTADDAFTER
add esp, 8
.Lt_017D:
pop ebx
mov esp, ebp
pop ebp
ret
.size HCALLCTORS, .-HCALLCTORS
.balign 16
HCALLFIELDDTOR:
.type HCALLFIELDDTOR, @function
push ebp
mov ebp, esp
push ebx
.Lt_0180:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 4
test ebx, ebx
je .Lt_0183
push 0
push -1
push 0
push 0
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call ASTBUILDVARFIELD
add esp, 16
push eax
call RTLARRAYERASE
add esp, 12
push eax
call ASTADD
add esp, 4
jmp .Lt_0182
.Lt_0183:
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax+56], 0
jne .Lt_0184
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+24]
and ebx, 511
cmp ebx, 16
jne .Lt_0186
push 0
push 0
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call ASTBUILDVARFIELD
add esp, 16
push eax
call RTLSTRDELETE
add esp, 4
push eax
call ASTADD
add esp, 4
jmp .Lt_0185
.Lt_0186:
push dword ptr [ebp+12]
call SYMBHASDTOR
add esp, 4
test eax, eax
je .Lt_0187
push 0
push 0
push 0
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call ASTBUILDVARFIELD
add esp, 16
push eax
mov eax, dword ptr [ebp+12]
push dword ptr [eax+28]
call ASTBUILDDTORCALL
add esp, 12
push eax
call ASTADD
add esp, 4
.Lt_0187:
.Lt_0185:
jmp .Lt_0182
.Lt_0184:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+24]
and ebx, 511
cmp ebx, 16
jne .Lt_0189
push 0
push 0
push 0
push 0
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call ASTBUILDVARFIELD
add esp, 16
push eax
call RTLARRAYERASE
add esp, 12
push eax
call ASTADD
add esp, 4
jmp .Lt_0188
.Lt_0189:
push dword ptr [ebp+12]
call SYMBHASDTOR
add esp, 4
test eax, eax
je .Lt_018A
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 0
call HCALLCTORLIST
add esp, 12
push eax
call ASTADD
add esp, 4
.Lt_018A:
.Lt_0188:
.Lt_0182:
.Lt_0181:
pop ebx
mov esp, ebp
pop ebp
ret
.size HCALLFIELDDTOR, .-HCALLFIELDDTOR
.balign 16
HCALLFIELDDTORS:
.type HCALLFIELDDTORS, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
push esi
.Lt_018B:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+72]
mov eax, dword ptr [ebx+56]
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+60]
mov dword ptr [ebp-4], ebx
.Lt_018D:
cmp dword ptr [ebp-4], 0
je .Lt_018E
mov ebx, dword ptr [ebp-4]
cmp dword ptr [ebx], 12
jne .Lt_0190
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebx+4]
and eax, 8388608
test eax, eax
setne al
shr eax, 1
sbb eax, eax
not eax
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebp-4]
cmp ecx, dword ptr [ebx+92]
setne dl
mov esi, edx
shr esi, 1
sbb esi, esi
and eax, esi
je .Lt_0192
push dword ptr [ebp-4]
push dword ptr [ebp-8]
call HCALLFIELDDTOR
add esp, 8
.Lt_0192:
.Lt_0191:
.Lt_0190:
.Lt_018F:
mov esi, dword ptr [ebp-4]
mov eax, dword ptr [esi+156]
mov dword ptr [ebp-4], eax
jmp .Lt_018D
.Lt_018E:
.Lt_018C:
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size HCALLFIELDDTORS, .-HCALLFIELDDTORS
.balign 16
HCALLBASEDTOR:
.type HCALLBASEDTOR, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
.Lt_0193:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+92]
mov dword ptr [ebp-4], ebx
cmp dword ptr [ebp-4], 0
jne .Lt_0196
jmp .Lt_0194
.Lt_0196:
.Lt_0195:
mov ebx, dword ptr [ebp-4]
push dword ptr [ebx+28]
call SYMBGETCOMPDTOR
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0198
jmp .Lt_0194
.Lt_0198:
.Lt_0197:
push dword ptr [ebp-8]
call SYMBCHECKACCESS
add esp, 4
test eax, eax
jne .Lt_019A
push 0
push 0
push 207
call ERRREPORT
add esp, 12
.Lt_019A:
.Lt_0199:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+4]
and ebx, 1073741824
test ebx, ebx
je .Lt_019C
jmp .Lt_0194
.Lt_019C:
.Lt_019B:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+72]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-12], ebx
push -1
push 0
push 0
push dword ptr [ebp-4]
push dword ptr [ebp-12]
call ASTBUILDVARFIELD
add esp, 16
push eax
mov eax, dword ptr [ebp-4]
push dword ptr [eax+28]
call ASTBUILDDTORCALL
add esp, 12
push eax
call ASTADD
add esp, 4
.Lt_0194:
pop ebx
mov esp, ebp
pop ebp
ret
.size HCALLBASEDTOR, .-HCALLBASEDTOR
.balign 16
HCALLDTORS:
.type HCALLDTORS, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_019D:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+128]
mov eax, dword ptr [ebx]
mov dword ptr [ebp-4], eax
push dword ptr [ebp+8]
push dword ptr [ebp-4]
call HCALLFIELDDTORS
add esp, 8
push dword ptr [ebp+8]
push dword ptr [ebp-4]
call HCALLBASEDTOR
add esp, 8
.Lt_019E:
pop ebx
mov esp, ebp
pop ebp
ret
.size HCALLDTORS, .-HCALLDTORS
.balign 16
HCALLSTATICCTOR:
.type HCALLSTATICCTOR, @function
push ebp
mov ebp, esp
.Lt_019F:
push 64
push 0
push dword ptr [ebp+12]
call ASTTYPEINICLONE
add esp, 4
push eax
push dword ptr [ebp+8]
call _Z15ASTTYPEINIFLUSHP8FBSYMBOLP7ASTNODEii
add esp, 16
push eax
call ASTADD
add esp, 4
push dword ptr [ebp+12]
call ASTTYPEINIDELETE
add esp, 4
.Lt_01A0:
mov esp, ebp
pop ebp
ret
.size HCALLSTATICCTOR, .-HCALLSTATICCTOR
.balign 16
HCALLSTATICDTOR:
.type HCALLSTATICDTOR, @function
push ebp
mov ebp, esp
push ebx
.Lt_01A1:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 4
test ebx, ebx
je .Lt_01A4
push 0
push -1
push 0
push 0
push 0
push dword ptr [ebp+8]
call ASTBUILDVARFIELD
add esp, 16
push eax
call RTLARRAYERASE
add esp, 12
push eax
call ASTADD
add esp, 4
jmp .Lt_01A3
.Lt_01A4:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+56], 0
jne .Lt_01A6
push 0
push 0
push 0
push 0
push dword ptr [ebp+8]
call ASTBUILDVARFIELD
add esp, 16
push eax
mov eax, dword ptr [ebp+8]
push dword ptr [eax+28]
call ASTBUILDDTORCALL
add esp, 12
push eax
call ASTADD
add esp, 4
jmp .Lt_01A5
.Lt_01A6:
push 0
push dword ptr [ebp+8]
push 0
call HCALLCTORLIST
add esp, 12
push eax
call ASTADD
add esp, 4
.Lt_01A5:
.Lt_01A3:
.Lt_01A2:
pop ebx
mov esp, ebp
pop ebp
ret
.size HCALLSTATICDTOR, .-HCALLSTATICDTOR
.balign 16
HGENSTATICINSTANCESDTORS:
.type HGENSTATICINSTANCESDTORS, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
.Lt_01A7:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+108]
mov eax, dword ptr [ebx+44]
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
jne .Lt_01AA
jmp .Lt_01A8
.Lt_01AA:
.Lt_01A9:
push dword ptr [ebp-4]
call LISTGETHEAD
add esp, 4
mov dword ptr [ebp-8], eax
.Lt_01AB:
cmp dword ptr [ebp-8], 0
je .Lt_01AC
push 0
mov eax, dword ptr [ebp-8]
push dword ptr [eax]
call ASTPROCBEGIN
add esp, 8
mov eax, dword ptr [AST+40]
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp-8]
push dword ptr [eax+4]
call HCALLSTATICDTOR
add esp, 4
push 0
call ASTPROCEND
add esp, 4
push -1
push dword ptr [ebp-12]
call HPROCFLUSH
add esp, 8
push dword ptr [ebp-8]
call LISTGETNEXT
add esp, 4
mov dword ptr [ebp-8], eax
jmp .Lt_01AB
.Lt_01AC:
push dword ptr [ebp-4]
call LISTEND
add esp, 4
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+108]
push dword ptr [ebx+44]
call free
add esp, 4
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+108]
mov dword ptr [eax+44], 0
.Lt_01A8:
pop ebx
mov esp, ebp
pop ebp
ret
.size HGENSTATICINSTANCESDTORS, .-HGENSTATICINSTANCESDTORS
.balign 16
HGLOBCTORBEGIN:
.type HGLOBCTORBEGIN, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_01B7:
push 4
push 3
push 64
push 0
push 0
cmp dword ptr [ebp+8], 0
je .Lt_01B9
mov eax, offset Lt_001F
mov dword ptr [ebp-8], eax
jmp .Lt_01DC
.Lt_01B9:
mov eax, offset Lt_0020
mov dword ptr [ebp-8], eax
.Lt_01DC:
push dword ptr [ebp-8]
call SYMBUNIQUELABEL
push eax
push 0
call SYMBPREADDPROC
add esp, 4
push eax
call SYMBADDPROC
add esp, 32
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp+8], 0
je .Lt_01BC
push dword ptr [ebp-4]
call SYMBADDGLOBALCTOR
add esp, 4
jmp .Lt_01BB
.Lt_01BC:
push dword ptr [ebp-4]
call SYMBADDGLOBALDTOR
add esp, 4
.Lt_01BB:
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+8]
or ebx, 2
mov eax, ebx
mov ebx, dword ptr [ebp-4]
mov dword ptr [ebx+8], eax
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+8]
or ebx, 128
mov eax, ebx
mov ebx, dword ptr [ebp-4]
mov dword ptr [ebx+8], eax
push 0
push dword ptr [ebp-4]
call ASTPROCBEGIN
add esp, 8
.Lt_01B8:
pop ebx
mov esp, ebp
pop ebp
ret
.size HGLOBCTORBEGIN, .-HGLOBCTORBEGIN
.balign 16
HGENGLOBALINSTANCESCTOR:
.type HGENGLOBALINSTANCESCTOR, @function
push ebp
mov ebp, esp
sub esp, 8
.Lt_01BD:
cmp dword ptr [AST+108], 0
jle .Lt_01C0
push -1
call HGLOBCTORBEGIN
add esp, 4
lea eax, [AST+76]
push eax
call LISTGETHEAD
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_01C1:
cmp dword ptr [ebp-4], 0
je .Lt_01C2
mov eax, dword ptr [ebp-4]
cmp dword ptr [eax+4], 0
je .Lt_01C4
mov eax, dword ptr [ebp-4]
push dword ptr [eax+4]
mov eax, dword ptr [ebp-4]
push dword ptr [eax]
call HCALLSTATICCTOR
add esp, 8
mov eax, dword ptr [ebp-4]
mov dword ptr [eax+4], 0
.Lt_01C4:
.Lt_01C3:
push dword ptr [ebp-4]
call LISTGETNEXT
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_01C1
.Lt_01C2:
push 0
call ASTPROCEND
add esp, 4
.Lt_01C0:
.Lt_01BF:
cmp dword ptr [AST+112], 0
jle .Lt_01C6
push 0
call HGLOBCTORBEGIN
add esp, 4
lea eax, [AST+76]
push eax
call LISTGETTAIL
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_01C7:
cmp dword ptr [ebp-4], 0
je .Lt_01C8
mov eax, dword ptr [ebp-4]
cmp dword ptr [eax+8], 0
je .Lt_01CA
mov eax, dword ptr [ebp-4]
push dword ptr [eax]
call HCALLSTATICDTOR
add esp, 4
.Lt_01CA:
.Lt_01C9:
push dword ptr [ebp-4]
call LISTGETPREV
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_01C7
.Lt_01C8:
push 0
call ASTPROCEND
add esp, 4
.Lt_01C6:
.Lt_01C5:
.Lt_01BE:
mov esp, ebp
pop ebp
ret
.size HGENGLOBALINSTANCESCTOR, .-HGENGLOBALINSTANCESCTOR
	#fbc-1.01.0/src/compiler/ast-node-proc.bas' compilation took 0.04302290047053248 secs

.section .rodata
.balign 4
Lt_001F:	.ascii	"_GLOBAL__I\0"
.balign 4
Lt_0020:	.ascii	"_GLOBAL__D\0"

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
.int fb_ctor__astznodezproc
