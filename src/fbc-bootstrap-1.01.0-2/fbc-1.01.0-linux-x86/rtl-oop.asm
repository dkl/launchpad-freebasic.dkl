	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/rtl-oop.bas' compilation started at 15:27:37 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl RTLOOPMODINIT
RTLOOPMODINIT:
.type RTLOOPMODINIT, @function
.Lt_0059:
push offset FUNCDATA
call RTLADDINTRINSICPROCS
add esp, 4
.Lt_005A:
ret
.size RTLOOPMODINIT, .-RTLOOPMODINIT
.balign 16

.globl RTLOOPMODEND
RTLOOPMODEND:
.type RTLOOPMODEND, @function
.Lt_005B:
.Lt_005C:
ret
.size RTLOOPMODEND, .-RTLOOPMODEND
.balign 16

.globl RTLOOPISTYPEOF
RTLOOPISTYPEOF:
.type RTLOOPISTYPEOF, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_005D:
push 0
push 134
push offset Lt_0058
call RTLPROCLOOKUP
add esp, 8
push eax
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-8], eax
push -1
push -2147483648
push dword ptr [ebp+8]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0060
jmp .Lt_005E
.Lt_0060:
.Lt_005F:
push -1
push -2147483648
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0062
jmp .Lt_005E
.Lt_0062:
.Lt_0061:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_005E:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size RTLOOPISTYPEOF, .-RTLOOPISTYPEOF
.balign 16
fb_ctor__rtlzoop:
.type fb_ctor__rtlzoop, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__rtlzoop, .-fb_ctor__rtlzoop
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
	#fbc-1.01.0/src/compiler/rtl-oop.bas' compilation took 0.02687609975691885 secs

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

.section .data
.balign 4
FUNCDATA:
.int Lt_0058
.long 0
.int 10
.int -1
.long 0
.int 0
.int 2
.int 0
.int 2
.int 0
.skip 8,0
.int 0
.int 2
.int 0
.skip 8,0
.skip 280,0
.long 0
.skip 344,0
.skip 696,0

.section .rodata
.balign 4
Lt_0058:	.ascii	"fb_IsTypeOf\0"

.section .ctors, "aw", @progbits
.int fb_ctor__rtlzoop
