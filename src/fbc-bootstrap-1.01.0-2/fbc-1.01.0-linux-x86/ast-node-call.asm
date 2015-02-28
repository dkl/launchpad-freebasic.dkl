	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/ast-node-call.bas' compilation started at 15:27:33 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl ASTCALLINIT
ASTCALLINIT:
.type ASTCALLINIT, @function
.Lt_0057:
push 6
push 12
push 32
lea eax, [AST+44]
push eax
call LISTINIT
add esp, 16
.Lt_0058:
ret
.size ASTCALLINIT, .-ASTCALLINIT
.balign 16

.globl ASTCALLEND
ASTCALLEND:
.type ASTCALLEND, @function
.Lt_0059:
lea eax, [AST+44]
push eax
call LISTEND
add esp, 4
.Lt_005A:
ret
.size ASTCALLEND, .-ASTCALLEND
.balign 16

.globl ASTNEWCALL
ASTNEWCALL:
.type ASTNEWCALL, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
mov dword ptr [ebp-4], 0
.Lt_005B:
cmp dword ptr [ebp+12], 0
je .Lt_005E
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+8]
mov dword ptr [ebp+8], ebx
.Lt_005E:
.Lt_005D:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+24]
mov dword ptr [ebp-16], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+28]
mov dword ptr [ebp-20], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+8]
or eax, 2
mov ebx, eax
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+8], ebx
push dword ptr [ebp-20]
push dword ptr [ebp-16]
push 9
call ASTNEWNODE
add esp, 12
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+8]
mov dword ptr [eax+12], ebx
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebp+12]
mov dword ptr [ebx+56], eax
mov eax, dword ptr [ebp-8]
mov dword ptr [eax+24], 0
cmp dword ptr [ebp+8], 0
je .Lt_0060
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-8]
mov ecx, dword ptr [eax+72]
mov dword ptr [ebx+28], ecx
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ecx+8]
and ebx, 32
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
mov ecx, dword ptr [ebp-8]
mov dword ptr [ecx+20], ebx
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebx+96]
mov dword ptr [ebp-12], ecx
cmp dword ptr [ebp-12], 0
je .Lt_0062
push dword ptr [ebp+8]
call dword ptr [ebp-12]
add esp, 4
.Lt_0062:
.Lt_0061:
jmp .Lt_005F
.Lt_0060:
mov ecx, dword ptr [ebp-8]
mov dword ptr [ecx+28], 0
mov ecx, dword ptr [ebp-8]
mov dword ptr [ecx+20], 0
.Lt_005F:
mov ecx, dword ptr [ebp-8]
mov dword ptr [ecx+32], 0
mov ecx, dword ptr [ebp-8]
mov dword ptr [ecx+36], 0
push dword ptr [ebp+8]
call SYMBPROCRETURNSONSTACK
add esp, 4
test eax, eax
je .Lt_0064
mov eax, dword ptr [ebp+8]
push dword ptr [eax+28]
push 18
call SYMBADDTEMPVAR
add esp, 8
mov ecx, dword ptr [ebp-8]
mov dword ptr [ecx+40], eax
mov eax, dword ptr [ebp-8]
push dword ptr [eax+40]
call ASTDTORLISTADD
add esp, 4
jmp .Lt_0063
.Lt_0064:
mov eax, dword ptr [ebp-8]
mov dword ptr [eax+40], 0
.Lt_0063:
.Lt_005C:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTNEWCALL, .-ASTNEWCALL
.balign 16

.globl ASTNEWCALLCTOR
ASTNEWCALLCTOR:
.type ASTNEWCALLCTOR, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0066:
mov eax, dword ptr [ebp+12]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+12]
push dword ptr [eax+4]
push 10
call ASTNEWNODE
add esp, 12
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+8]
mov dword ptr [eax+56], ebx
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebp+12]
mov dword ptr [ebx+60], eax
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0067:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTNEWCALLCTOR, .-ASTNEWCALLCTOR
.balign 16

.globl ASTLOADCALL
ASTLOADCALL:
.type ASTLOADCALL, @function
push ebp
mov ebp, esp
sub esp, 36
push ebx
push esi
mov dword ptr [ebp-4], 0
.Lt_006C:
inc dword ptr [Lt_008A]
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+12]
mov dword ptr [ebp-20], ebx
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+60]
mov dword ptr [ebp-8], eax
.Lt_006E:
cmp dword ptr [ebp-8], 0
je .Lt_006F
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+60]
mov dword ptr [ebp-12], ebx
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx+56]
mov dword ptr [ebp-16], eax
mov eax, dword ptr [ebp-20]
cmp dword ptr [eax+80], 3
jne .Lt_0071
mov ebx, dword ptr [ebp-24]
mov eax, ebx
sar eax, 31
mov ecx, dword ptr [ebp-8]
push dword ptr [ecx+20]
mov ecx, dword ptr [ebp-16]
push dword ptr [ecx+8]
mov ecx, dword ptr [ebp-16]
push dword ptr [ecx+4]
mov esi, eax
call SYMBCALCARGLEN
add esp, 12
add ebx, eax
adc esi, edx
mov eax, ebx
mov dword ptr [ebp-24], eax
.Lt_0071:
.Lt_0070:
mov eax, dword ptr [ebp-16]
cmp dword ptr [eax], 5
jne .Lt_0073
push 0
mov eax, dword ptr [ebp-8]
push dword ptr [eax+4]
push dword ptr [ebp-16]
call ASTUPDATECONVFD2FS
add esp, 12
.Lt_0073:
.Lt_0072:
push dword ptr [ebp-16]
call ASTLOAD
add esp, 4
mov dword ptr [ebp-36], eax
push dword ptr [ebp-16]
call ASTDELNODE
add esp, 4
cmp dword ptr [AST+136], 0
je .Lt_0075
push dword ptr [Lt_008A]
mov eax, dword ptr [ebp-8]
push dword ptr [eax+28]
push dword ptr [eax+24]
push dword ptr [ebp-36]
mov eax, dword ptr [ebp-8]
push dword ptr [eax+12]
call dword ptr [IR+84]
add esp, 20
.Lt_0075:
.Lt_0074:
push dword ptr [ebp-8]
call ASTDELNODE
add esp, 4
mov eax, dword ptr [ebp-12]
mov dword ptr [ebp-8], eax
jmp .Lt_006E
.Lt_006F:
push dword ptr [ebp-20]
call SYMBPROCRETURNSONSTACK
add esp, 4
test eax, eax
je .Lt_0077
mov eax, dword ptr [ebp-20]
mov ebx, dword ptr [eax+80]
cmp ebx, 3
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ENV+224]
and eax, 8
test eax, eax
sete al
shr eax, 1
sbb eax, eax
and ebx, eax
je .Lt_0079
mov eax, dword ptr [ENV+236]
add dword ptr [ebp-24], eax
.Lt_0079:
.Lt_0078:
cmp dword ptr [AST+136], 0
je .Lt_007B
mov eax, dword ptr [ebp+8]
push dword ptr [eax+40]
call SYMBHASCTOR
add esp, 4
test eax, eax
jne .Lt_007D
mov eax, dword ptr [ebp+8]
push dword ptr [eax+40]
call ASTBUILDTEMPVARCLEAR
add esp, 4
push eax
call ASTLOAD
add esp, 4
.Lt_007D:
.Lt_007C:
push 0
push -2147483648
push 0
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax+40]
call ASTNEWVAR
add esp, 20
mov dword ptr [ebp-16], eax
push dword ptr [ebp-16]
call ASTNEWADDROF
add esp, 4
mov dword ptr [ebp-16], eax
push dword ptr [ebp-16]
call ASTLOAD
add esp, 4
mov dword ptr [ebp-36], eax
push dword ptr [Lt_008A]
push 0
push 0
push dword ptr [ebp-36]
push 0
call dword ptr [IR+84]
add esp, 20
.Lt_007B:
.Lt_007A:
.Lt_0077:
.Lt_0076:
cmp dword ptr [AST+136], 0
je .Lt_007F
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 511
test ebx, ebx
jne .Lt_0081
mov dword ptr [ebp-32], 0
jmp .Lt_0080
.Lt_0081:
mov ebx, dword ptr [ebp-20]
push dword ptr [ebx+88]
mov ebx, dword ptr [ebp-20]
mov eax, dword ptr [ebx+84]
and eax, 511
push eax
call dword ptr [IR+236]
add esp, 8
mov dword ptr [ebp-32], eax
mov eax, dword ptr [ebp-20]
cmp dword ptr [eax+92], 1
je .Lt_0083
mov eax, dword ptr [ebp-32]
mov dword ptr [eax+16], 0
.Lt_0083:
.Lt_0082:
.Lt_0080:
.Lt_007F:
.Lt_007E:
mov eax, dword ptr [ebp-28]
add dword ptr [ebp-24], eax
mov dword ptr [ebp-28], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-16], ebx
cmp dword ptr [ebp-16], 0
je .Lt_0085
push dword ptr [ebp-16]
call ASTLOAD
add esp, 4
mov dword ptr [ebp-36], eax
push dword ptr [ebp-16]
call ASTDELNODE
add esp, 4
cmp dword ptr [AST+136], 0
je .Lt_0087
push dword ptr [Lt_008A]
push dword ptr [ebp-24]
push dword ptr [ebp-32]
push dword ptr [ebp-36]
push dword ptr [ebp-20]
call dword ptr [IR+144]
add esp, 20
.Lt_0087:
.Lt_0086:
jmp .Lt_0084
.Lt_0085:
cmp dword ptr [AST+136], 0
je .Lt_0089
push dword ptr [Lt_008A]
push dword ptr [ebp-32]
push dword ptr [ebp-24]
push dword ptr [ebp-20]
call dword ptr [IR+140]
add esp, 16
.Lt_0089:
.Lt_0088:
.Lt_0084:
push dword ptr [ebp+8]
call HCOPYSTRINGSBACK
add esp, 4
dec dword ptr [Lt_008A]
mov eax, dword ptr [ebp-32]
mov dword ptr [ebp-4], eax
.Lt_006D:
mov eax, dword ptr [ebp-4]
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTLOADCALL, .-ASTLOADCALL

.section .data
.balign 4
Lt_008A:
.int 0

.section .text
.balign 16

.globl ASTLOADCALLCTOR
ASTLOADCALLCTOR:
.type ASTLOADCALLCTOR, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_008D:
mov eax, dword ptr [ebp+8]
push dword ptr [eax+56]
call ASTLOAD
add esp, 4
mov eax, dword ptr [ebp+8]
push dword ptr [eax+56]
call ASTDELNODE
add esp, 4
mov eax, dword ptr [ebp+8]
push dword ptr [eax+60]
call ASTLOAD
add esp, 4
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp+8]
push dword ptr [eax+60]
call ASTDELNODE
add esp, 4
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_008E:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size ASTLOADCALLCTOR, .-ASTLOADCALLCTOR
.balign 16

.globl ASTCLONECALL
ASTCLONECALL:
.type ASTCLONECALL, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_008F:
mov eax, dword ptr [ebp+12]
mov dword ptr [eax+36], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+36]
mov dword ptr [ebp-4], ebx
.Lt_0091:
cmp dword ptr [ebp-4], 0
je .Lt_0092
lea ebx, [AST+44]
push ebx
call LISTNEWNODE
add esp, 4
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [ebp-8]
mov ecx, dword ptr [eax]
mov dword ptr [ebx], ecx
mov ecx, dword ptr [ebp-4]
push dword ptr [ecx+4]
call ASTCLONETREE
add esp, 4
mov ecx, dword ptr [ebp-8]
mov dword ptr [ecx+4], eax
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [ebp-8]
mov ebx, dword ptr [eax+36]
mov dword ptr [ecx+8], ebx
mov ebx, dword ptr [ebp+12]
mov ecx, dword ptr [ebp-8]
mov dword ptr [ebx+36], ecx
mov ecx, dword ptr [ebp-4]
mov ebx, dword ptr [ecx+8]
mov dword ptr [ebp-4], ebx
jmp .Lt_0091
.Lt_0092:
mov ebx, dword ptr [ebp+12]
mov ecx, dword ptr [ebx+60]
mov dword ptr [ebp+8], ecx
.Lt_0093:
cmp dword ptr [ebp+8], 0
je .Lt_0094
mov ecx, dword ptr [ebp+8]
cmp dword ptr [ecx+60], 0
jne .Lt_0096
jmp .Lt_0094
.Lt_0096:
.Lt_0095:
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ecx+60]
mov dword ptr [ebp+8], ebx
jmp .Lt_0093
.Lt_0094:
mov ebx, dword ptr [ebp+12]
mov ecx, dword ptr [ebp+8]
mov dword ptr [ebx+32], ecx
.Lt_0090:
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTCLONECALL, .-ASTCLONECALL
.balign 16

.globl ASTDELCALL
ASTDELCALL:
.type ASTDELCALL, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_0097:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+36]
mov dword ptr [ebp-4], ebx
.Lt_0099:
cmp dword ptr [ebp-4], 0
je .Lt_009A
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebx+8]
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-4]
push dword ptr [eax+4]
call ASTDELTREE
add esp, 4
push dword ptr [ebp-4]
lea eax, [AST+44]
push eax
call LISTDELNODE
add esp, 8
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
jmp .Lt_0099
.Lt_009A:
.Lt_0098:
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTDELCALL, .-ASTDELCALL
.balign 16

.globl ASTREPLACESYMBOLONCALL
ASTREPLACESYMBOLONCALL:
.type ASTREPLACESYMBOLONCALL, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_009B:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+12]
cmp dword ptr [eax+40], ebx
jne .Lt_009E
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp+16]
mov dword ptr [ebx+40], eax
.Lt_009E:
.Lt_009D:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+36]
mov dword ptr [ebp-4], ebx
.Lt_009F:
cmp dword ptr [ebp-4], 0
je .Lt_00A0
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebp+12]
cmp dword ptr [ebx], eax
jne .Lt_00A2
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [ebp+16]
mov dword ptr [eax], ebx
.Lt_00A2:
.Lt_00A1:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
mov ebx, dword ptr [ebp-4]
push dword ptr [ebx+4]
call ASTREPLACESYMBOLONTREE
add esp, 12
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebx+8]
mov dword ptr [ebp-4], eax
jmp .Lt_009F
.Lt_00A0:
.Lt_009C:
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTREPLACESYMBOLONCALL, .-ASTREPLACESYMBOLONCALL
.balign 16

.globl ASTBUILDCALLRESULTVAR
ASTBUILDCALLRESULTVAR:
.type ASTBUILDCALLRESULTVAR, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_00A3:
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+4]
push 0
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax+40]
call ASTNEWVAR
add esp, 20
push eax
push dword ptr [ebp+8]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-4], eax
.Lt_00A4:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size ASTBUILDCALLRESULTVAR, .-ASTBUILDCALLRESULTVAR
.balign 16

.globl ASTBUILDCALLRESULTUDT
ASTBUILDCALLRESULTUDT:
.type ASTBUILDCALLRESULTUDT, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_00A5:
mov eax, dword ptr [ebp+8]
push dword ptr [eax+12]
call SYMBPROCRETURNSONSTACK
add esp, 4
test eax, eax
je .Lt_00A8
push dword ptr [ebp+8]
call ASTBUILDCALLRESULTVAR
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_00A7
.Lt_00A8:
mov eax, dword ptr [ebp+8]
push dword ptr [eax+8]
push 18
call SYMBADDTEMPVAR
add esp, 8
mov dword ptr [ebp-8], eax
push 96
push dword ptr [ebp+8]
push 0
push 0
push 0
push dword ptr [ebp-8]
call ASTBUILDVARFIELD
add esp, 16
push eax
call ASTNEWASSIGN
add esp, 12
mov dword ptr [ebp+8], eax
push 0
push 0
push 0
push 0
push dword ptr [ebp-8]
call ASTBUILDVARFIELD
add esp, 16
push eax
push dword ptr [ebp+8]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-4], eax
.Lt_00A7:
.Lt_00A6:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size ASTBUILDCALLRESULTUDT, .-ASTBUILDCALLRESULTUDT
.balign 16

.globl ASTBUILDBYREFRESULTDEREF
ASTBUILDBYREFRESULTDEREF:
.type ASTBUILDBYREFRESULTDEREF, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_00A9:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
cmp ebx, 9
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_00AC
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebp-4], ebx
jmp .Lt_00AA
.Lt_00AC:
.Lt_00AB:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+12]
mov ebx, dword ptr [eax+4]
and ebx, 33554432
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_00AE
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebp-4], ebx
jmp .Lt_00AA
.Lt_00AE:
.Lt_00AD:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+12]
mov ebx, dword ptr [eax+84]
mov dword ptr [ebp-8], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+12]
mov ebx, dword ptr [eax+88]
mov dword ptr [ebp-12], ebx
mov ebx, dword ptr [ebp-8]
and ebx, 31
cmp ebx, 21
jne .Lt_00B0
push 0
push 0
push 70
call ERRREPORT
add esp, 12
mov ebx, dword ptr [ebp-8]
and ebx, -32
or ebx, 7
mov dword ptr [ebp-8], ebx
mov dword ptr [ebp-12], 0
.Lt_00B0:
.Lt_00AF:
push dword ptr [ebp-12]
push dword ptr [ebp-8]
push dword ptr [ebp+8]
call ASTSETTYPE
add esp, 12
push 0
push 0
push 0
push -2147483648
push dword ptr [ebp+8]
call ASTNEWDEREF
add esp, 20
mov dword ptr [ebp-4], eax
.Lt_00AA:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTBUILDBYREFRESULTDEREF, .-ASTBUILDBYREFRESULTDEREF
.balign 16

.globl ASTISBYREFRESULTDEREF
ASTISBYREFRESULTDEREF:
.type ASTISBYREFRESULTDEREF, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_00B3:
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 20
jne .Lt_00B6
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
cmp dword ptr [ebx], 9
jne .Lt_00B8
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+56]
mov ebx, dword ptr [eax+12]
mov eax, dword ptr [ebx+4]
and eax, 33554432
test eax, eax
setne al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-4], eax
.Lt_00B8:
.Lt_00B7:
.Lt_00B6:
.Lt_00B5:
.Lt_00B4:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTISBYREFRESULTDEREF, .-ASTISBYREFRESULTDEREF
.balign 16

.globl ASTREMOVEBYREFRESULTDEREF
ASTREMOVEBYREFRESULTDEREF:
.type ASTREMOVEBYREFRESULTDEREF, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_00BA:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-4], ebx
push dword ptr [ebp+8]
call ASTDELNODE
add esp, 4
.Lt_00BB:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTREMOVEBYREFRESULTDEREF, .-ASTREMOVEBYREFRESULTDEREF
.balign 16

.globl ASTIGNORECALLRESULT
ASTIGNORECALLRESULT:
.type ASTIGNORECALLRESULT, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_00C7:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 511
mov dword ptr [ebp-8], ebx
cmp dword ptr [ebp-8], 0
jne .Lt_00CA
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebp-4], ebx
jmp .Lt_00C8
.Lt_00CA:
.Lt_00C9:
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx+12], 0
je .Lt_00CC
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+12]
mov ebx, dword ptr [eax+8]
and ebx, 64
test ebx, ebx
je .Lt_00CE
push dword ptr [ebp+8]
call RTLERRORCHECK
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_00C8
.Lt_00CE:
.Lt_00CD:
.Lt_00CC:
.Lt_00CB:
cmp dword ptr [ebp-8], 16
je .Lt_00D1
.Lt_00D2:
cmp dword ptr [ebp-8], 6
jne .Lt_00D0
.Lt_00D1:
cmp dword ptr [ebp-8], 6
jne .Lt_00D4
push 0
push 38
push dword ptr [ebp+8]
call ASTSETTYPE
add esp, 12
.Lt_00D4:
.Lt_00D3:
push dword ptr [ebp+8]
call RTLSTRDELETE
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_00C8
.Lt_00D0:
.Lt_00CF:
push 0
push 0
push dword ptr [ebp+8]
call ASTSETTYPE
add esp, 12
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
.Lt_00C8:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTIGNORECALLRESULT, .-ASTIGNORECALLRESULT
.balign 16
fb_ctor__astznodezcall:
.type fb_ctor__astznodezcall, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__astznodezcall, .-fb_ctor__astznodezcall
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
HCOPYSTRINGSBACK:
.type HCOPYSTRINGSBACK, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
.Lt_0068:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+36]
mov dword ptr [ebp-8], ebx
.Lt_006A:
cmp dword ptr [ebp-8], 0
je .Lt_006B
push 0
push 0
push -2147483648
push 0
push 0
mov ebx, dword ptr [ebp-8]
push dword ptr [ebx]
call ASTNEWVAR
add esp, 20
push eax
mov eax, dword ptr [ebp-8]
push dword ptr [eax+4]
call RTLSTRASSIGN
add esp, 12
mov dword ptr [ebp-4], eax
push dword ptr [ebp-4]
call ASTLOAD
add esp, 4
push dword ptr [ebp-4]
call ASTDELNODE
add esp, 4
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+8]
mov dword ptr [ebp-12], ebx
push dword ptr [ebp-8]
lea ebx, [AST+44]
push ebx
call LISTDELNODE
add esp, 8
mov ebx, dword ptr [ebp-12]
mov dword ptr [ebp-8], ebx
jmp .Lt_006A
.Lt_006B:
.Lt_0069:
pop ebx
mov esp, ebp
pop ebp
ret
.size HCOPYSTRINGSBACK, .-HCOPYSTRINGSBACK
	#fbc-1.01.0/src/compiler/ast-node-call.bas' compilation took 0.03299393353518099 secs

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
.int fb_ctor__astznodezcall
