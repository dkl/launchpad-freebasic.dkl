	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/ir.bas' compilation started at 15:27:34 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl IRINIT
IRINIT:
.type IRINIT, @function
push ebp
mov ebp, esp
sub esp, 4
.Lt_006C:
mov eax, dword ptr [ENV+104]
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 1
jne .Lt_0070
.Lt_0071:
lea eax, [IR+4]
push edi
push esi
mov edi, eax
mov esi, offset IRHLC_VTBL
mov ecx, 70
rep movsd
pop esi
pop edi
jmp .Lt_006E
.Lt_0070:
cmp dword ptr [ebp-4], 2
jne .Lt_0072
.Lt_0073:
lea eax, [IR+4]
push edi
push esi
mov edi, eax
mov esi, offset IRLLVM_VTBL
mov ecx, 70
rep movsd
pop esi
pop edi
jmp .Lt_006E
.Lt_0072:
lea eax, [IR+4]
push edi
push esi
mov edi, eax
mov esi, offset IRTAC_VTBL
mov ecx, 70
rep movsd
pop esi
pop edi
.Lt_0074:
.Lt_006E:
call dword ptr [IR+4]
.Lt_006D:
mov esp, ebp
pop ebp
ret
.size IRINIT, .-IRINIT
.balign 16

.globl IREND
IREND:
.type IREND, @function
.Lt_0075:
call dword ptr [IR+8]
.Lt_0076:
ret
.size IREND, .-IREND
.balign 16

.globl IRHLINIT
IRHLINIT:
.type IRHLINIT, @function
.Lt_0077:
push 68
push 6144
lea eax, [HL+4]
push eax
call FLISTINIT
add esp, 12
.Lt_0078:
ret
.size IRHLINIT, .-IRHLINIT
.balign 16

.globl IRHLEND
IRHLEND:
.type IRHLEND, @function
.Lt_0079:
lea eax, [HL+4]
push eax
call FLISTEND
add esp, 4
.Lt_007A:
ret
.size IRHLEND, .-IRHLEND
.balign 16

.globl IRHLEMITPROCBEGIN
IRHLEMITPROCBEGIN:
.type IRHLEMITPROCBEGIN, @function
.Lt_007B:
mov dword ptr [HL], 0
.Lt_007C:
ret
.size IRHLEMITPROCBEGIN, .-IRHLEMITPROCBEGIN
.balign 16

.globl IRHLEMITPROCEND
IRHLEMITPROCEND:
.type IRHLEMITPROCEND, @function
.Lt_007D:
lea eax, [HL+4]
push eax
call FLISTRESET
add esp, 4
.Lt_007E:
ret
.size IRHLEMITPROCEND, .-IRHLEMITPROCEND
.balign 16

.globl IRHLNEWVREG
IRHLNEWVREG:
.type IRHLNEWVREG, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_007F:
lea eax, [HL+4]
push eax
call FLISTNEWITEM
add esp, 4
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+16]
mov dword ptr [eax], ebx
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebp+8]
mov dword ptr [ebx+4], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+12]
mov dword ptr [eax+8], ebx
cmp dword ptr [ebp+16], 4
jne .Lt_0082
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [HL]
mov dword ptr [ebx+12], eax
inc dword ptr [HL]
jmp .Lt_0081
.Lt_0082:
mov eax, dword ptr [ebp-8]
mov dword ptr [eax+12], -1
.Lt_0081:
mov eax, dword ptr [ebp-8]
mov dword ptr [eax+16], 0
mov eax, dword ptr [ebp-8]
mov dword ptr [eax+20], 0
mov eax, dword ptr [ebp-8]
mov dword ptr [eax+32], 0
mov eax, dword ptr [ebp-8]
mov dword ptr [eax+36], 0
mov dword ptr [eax+40], 0
mov eax, dword ptr [ebp-8]
mov dword ptr [eax+44], 0
mov eax, dword ptr [ebp-8]
mov dword ptr [eax+48], 0
mov eax, dword ptr [ebp-8]
mov dword ptr [eax+52], 0
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0080:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size IRHLNEWVREG, .-IRHLNEWVREG
.balign 16

.globl IRHLALLOCVREG
IRHLALLOCVREG:
.type IRHLALLOCVREG, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_0083:
push 4
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call IRHLNEWVREG
add esp, 12
mov dword ptr [ebp-4], eax
.Lt_0084:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size IRHLALLOCVREG, .-IRHLALLOCVREG
.balign 16

.globl IRHLALLOCVRIMM
IRHLALLOCVRIMM:
.type IRHLALLOCVRIMM, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0085:
push 0
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call IRHLNEWVREG
add esp, 12
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov ecx, dword ptr [ebp+16]
mov ebx, dword ptr [ebp+20]
mov dword ptr [eax+24], ecx
mov dword ptr [eax+28], ebx
mov ecx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ecx
.Lt_0086:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size IRHLALLOCVRIMM, .-IRHLALLOCVRIMM
.balign 16

.globl IRHLALLOCVRIMMF
IRHLALLOCVRIMMF:
.type IRHLALLOCVRIMMF, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_0087:
push 0
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call IRHLNEWVREG
add esp, 12
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
push dword ptr [ebp+16]
push dword ptr [ebp+20]
pop dword ptr [eax+28]
pop dword ptr [eax+24]
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0088:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size IRHLALLOCVRIMMF, .-IRHLALLOCVRIMMF
.balign 16

.globl IRHLALLOCVRVAR
IRHLALLOCVRVAR:
.type IRHLALLOCVRVAR, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0089:
push 1
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call IRHLNEWVREG
add esp, 12
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+16]
mov dword ptr [eax+32], ebx
mov ebx, dword ptr [ebp-8]
mov ecx, dword ptr [ebp+20]
mov eax, dword ptr [ebp+24]
mov dword ptr [ebx+36], ecx
mov dword ptr [ebx+40], eax
mov ecx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ecx
.Lt_008A:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size IRHLALLOCVRVAR, .-IRHLALLOCVRVAR
.balign 16

.globl IRHLALLOCVRIDX
IRHLALLOCVRIDX:
.type IRHLALLOCVRIDX, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_008B:
push 2
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call IRHLNEWVREG
add esp, 12
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+16]
mov dword ptr [eax+32], ebx
mov ebx, dword ptr [ebp-8]
mov ecx, dword ptr [ebp+20]
mov eax, dword ptr [ebp+24]
mov dword ptr [ebx+36], ecx
mov dword ptr [ebx+40], eax
mov ecx, dword ptr [ebp-8]
mov eax, dword ptr [ebp+32]
mov dword ptr [ecx+48], eax
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_008C:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size IRHLALLOCVRIDX, .-IRHLALLOCVRIDX
.balign 16

.globl IRHLALLOCVRPTR
IRHLALLOCVRPTR:
.type IRHLALLOCVRPTR, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_008D:
push 3
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call IRHLNEWVREG
add esp, 12
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov ecx, dword ptr [ebp+16]
mov ebx, dword ptr [ebp+20]
mov dword ptr [eax+36], ecx
mov dword ptr [eax+40], ebx
mov ecx, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+24]
mov dword ptr [ecx+48], ebx
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ebx
.Lt_008E:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size IRHLALLOCVRPTR, .-IRHLALLOCVRPTR
.balign 16

.globl IRHLALLOCVROFS
IRHLALLOCVROFS:
.type IRHLALLOCVROFS, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_008F:
push 5
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call IRHLNEWVREG
add esp, 12
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+16]
mov dword ptr [eax+32], ebx
mov ebx, dword ptr [ebp-8]
mov ecx, dword ptr [ebp+20]
mov eax, dword ptr [ebp+24]
mov dword ptr [ebx+36], ecx
mov dword ptr [ebx+40], eax
mov ecx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ecx
.Lt_0090:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size IRHLALLOCVROFS, .-IRHLALLOCVROFS
.balign 16

.globl IRFOREACHDATASTMT
IRFOREACHDATASTMT:
.type IRFOREACHDATASTMT, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0091:
mov eax, dword ptr [AST+120]
mov dword ptr [ebp-4], eax
.Lt_0093:
cmp dword ptr [ebp-4], 0
je .Lt_0094
push dword ptr [ebp-4]
call dword ptr [ebp+8]
add esp, 4
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+100]
mov dword ptr [ebp-4], ebx
jmp .Lt_0093
.Lt_0094:
.Lt_0092:
pop ebx
mov esp, ebp
pop ebp
ret
.size IRFOREACHDATASTMT, .-IRFOREACHDATASTMT
.balign 16

.globl IRHLFLUSHSTATICINITIALIZER
IRHLFLUSHSTATICINITIALIZER:
.type IRHLFLUSHSTATICINITIALIZER, @function
push ebp
mov ebp, esp
.Lt_0095:
push dword ptr [ebp+8]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+52]
call ASTLOADSTATICINITIALIZER
add esp, 8
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+52], 0
.Lt_0096:
mov esp, ebp
pop ebp
ret
.size IRHLFLUSHSTATICINITIALIZER, .-IRHLFLUSHSTATICINITIALIZER
.balign 16
fb_ctor__ir:
.type fb_ctor__ir, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__ir, .-fb_ctor__ir
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
	#fbc-1.01.0/src/compiler/ir.bas' compilation took 0.02588907326571643 secs

.section .bss

.globl IR
.balign 4
	.lcomm	IR,288
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
	.lcomm	Lt_006B,32
.balign 4
	.lcomm	HL,60

.section .ctors, "aw", @progbits
.int fb_ctor__ir
