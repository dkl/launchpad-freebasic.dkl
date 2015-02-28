	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/rtl-gosub.bas' compilation started at 14:16:38 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl RTLGOSUBMODINIT
RTLGOSUBMODINIT:
.type RTLGOSUBMODINIT, @function
.Lt_0069:
mov eax, dword ptr [ENV+840]
and eax, 65536
test eax, eax
je .Lt_006C
push offset FUNCDATA
call RTLADDINTRINSICPROCS
add esp, 4
cmp dword ptr [ENV+108], 0
jne .Lt_006E
push offset FUNCDATA1
call RTLADDINTRINSICPROCS
add esp, 4
jmp .Lt_006D
.Lt_006E:
push offset FUNCDATA2
call RTLADDINTRINSICPROCS
add esp, 4
.Lt_006D:
.Lt_006C:
.Lt_006B:
.Lt_006A:
ret
.size RTLGOSUBMODINIT, .-RTLGOSUBMODINIT
.balign 16

.globl RTLGOSUBMODEND
RTLGOSUBMODEND:
.type RTLGOSUBMODEND, @function
.Lt_006F:
.Lt_0070:
ret
.size RTLGOSUBMODEND, .-RTLGOSUBMODEND
.balign 16

.globl RTLGOSUBPUSH
RTLGOSUBPUSH:
.type RTLGOSUBPUSH, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_0071:
mov dword ptr [ebp-4], 0
push 0
push 325
push offset Lt_005F
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
jne .Lt_0074
jmp .Lt_0072
.Lt_0074:
.Lt_0073:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0072:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size RTLGOSUBPUSH, .-RTLGOSUBPUSH
.balign 16

.globl RTLGOSUBPOP
RTLGOSUBPOP:
.type RTLGOSUBPOP, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_0075:
mov dword ptr [ebp-4], 0
push 0
push 326
push offset Lt_0060
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
jne .Lt_0078
jmp .Lt_0076
.Lt_0078:
.Lt_0077:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0076:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size RTLGOSUBPOP, .-RTLGOSUBPOP
.balign 16

.globl RTLGOSUBRETURN
RTLGOSUBRETURN:
.type RTLGOSUBRETURN, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_0079:
push 0
push 327
push offset Lt_0061
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
jne .Lt_007C
jmp .Lt_007A
.Lt_007C:
.Lt_007B:
push dword ptr [ebp-8]
call RTLERRORCHECK
add esp, 4
push eax
call ASTADD
add esp, 4
mov dword ptr [ebp-4], -1
.Lt_007A:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size RTLGOSUBRETURN, .-RTLGOSUBRETURN
.balign 16

.globl RTLGOSUBEXIT
RTLGOSUBEXIT:
.type RTLGOSUBEXIT, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_007D:
mov dword ptr [ebp-4], 0
push 0
push 328
push offset Lt_0062
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
jne .Lt_0080
jmp .Lt_007E
.Lt_0080:
.Lt_007F:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_007E:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size RTLGOSUBEXIT, .-RTLGOSUBEXIT
.balign 16

.globl RTLSETJMP
RTLSETJMP:
.type RTLSETJMP, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_0081:
mov dword ptr [ebp-4], 0
push 0
push 329
push offset Lt_0064
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
jne .Lt_0084
jmp .Lt_0082
.Lt_0084:
.Lt_0083:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0082:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size RTLSETJMP, .-RTLSETJMP
.balign 16
fb_ctor__rtlzgosub:
.type fb_ctor__rtlzgosub, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__rtlzgosub, .-fb_ctor__rtlzgosub
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
	#fbc-1.01.0/src/compiler/rtl-gosub.bas' compilation took 0.02945599576923996 secs

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
.int Lt_005F
.long 0
.int 32
.int -1
.long 0
.int 0
.int 1
.int 64
.int 1
.int 0
.skip 8,0
.skip 300,0
.int Lt_0060
.long 0
.int 10
.int -1
.long 0
.int 0
.int 1
.int 64
.int 1
.int 0
.skip 8,0
.skip 300,0
.int Lt_0061
.long 0
.int 10
.int -1
.long 0
.int 0
.int 1
.int 64
.int 1
.int 0
.skip 8,0
.skip 300,0
.int Lt_0062
.long 0
.int 0
.int -1
.long 0
.int 0
.int 1
.int 64
.int 1
.int 0
.skip 8,0
.skip 300,0
.long 0
.skip 344,0

.section .rodata
.balign 4
Lt_005F:	.ascii	"fb_GosubPush\0"
.balign 4
Lt_0060:	.ascii	"fb_GosubPop\0"
.balign 4
Lt_0061:	.ascii	"fb_GosubReturn\0"
.balign 4
Lt_0062:	.ascii	"fb_GosubExit\0"

.section .data
.balign 4
FUNCDATA1:
.int Lt_0064
.int Lt_0065
.int 10
.int 3
.long 0
.int 0
.int 1
.int 32
.int 1
.int 0
.skip 8,0
.skip 300,0
.long 0
.skip 344,0

.section .rodata
.balign 4
Lt_0064:	.ascii	"fb_SetJmp\0"
.balign 4
Lt_0065:	.ascii	"_setjmp\0"

.section .data
.balign 4
FUNCDATA2:
.int Lt_0064
.int Lt_0067
.int 10
.int 3
.long 0
.int 0
.int 1
.int 32
.int 1
.int 0
.skip 8,0
.skip 300,0
.long 0
.skip 344,0

.section .rodata
.balign 4
Lt_0067:	.ascii	"setjmp\0"

.section .ctors, "aw", @progbits
.int fb_ctor__rtlzgosub
