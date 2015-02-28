	.intel_syntax noprefix

	#FreeBASIC-1.01.0-source/src/compiler/rtl-profile.bas' compilation started at 16:30:07 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl RTLPROFILEMODINIT
RTLPROFILEMODINIT:
.type RTLPROFILEMODINIT, @function
.Lt_0065:
push offset FUNCDATA
call RTLADDINTRINSICPROCS
add esp, 4
.Lt_0066:
ret
.size RTLPROFILEMODINIT, .-RTLPROFILEMODINIT
.balign 16

.globl RTLPROFILEMODEND
RTLPROFILEMODEND:
.type RTLPROFILEMODEND, @function
.Lt_0067:
.Lt_0068:
ret
.size RTLPROFILEMODEND, .-RTLPROFILEMODEND
.balign 16

.globl RTLPROFILECALL_MCOUNT
RTLPROFILECALL_MCOUNT:
.type RTLPROFILECALL_MCOUNT, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_0069:
push 0
push 323
push offset Lt_0060
call RTLPROCLOOKUP
add esp, 8
push eax
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-4], eax
.Lt_006A:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size RTLPROFILECALL_MCOUNT, .-RTLPROFILECALL_MCOUNT
.balign 16

.globl RTLPROFILECALL_MONSTARTUP
RTLPROFILECALL_MONSTARTUP:
.type RTLPROFILECALL_MONSTARTUP, @function
.Lt_006B:
push 0
push 324
push offset Lt_0062
call RTLPROCLOOKUP
add esp, 8
push eax
call ASTNEWCALL
add esp, 8
push eax
call ASTADD
add esp, 4
.Lt_006C:
ret
.size RTLPROFILECALL_MONSTARTUP, .-RTLPROFILECALL_MONSTARTUP
.balign 16
fb_ctor__rtlzprofile:
.type fb_ctor__rtlzprofile, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__rtlzprofile, .-fb_ctor__rtlzprofile
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
	#FreeBASIC-1.01.0-source/src/compiler/rtl-profile.bas' compilation took 0.03924209321849048 secs

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
.int Lt_0060
.int Lt_0061
.int 0
.int 3
.long 0
.int 0
.int 0
.skip 320,0
.int Lt_0062
.int Lt_0063
.int 0
.int 3
.long 0
.int 0
.int 0
.skip 320,0
.long 0
.skip 344,0

.section .rodata
.balign 4
Lt_0060:	.ascii	"fb_mcount\0"
.balign 4
Lt_0061:	.ascii	"mcount\0"
.balign 4
Lt_0062:	.ascii	"fb__monstartup\0"
.balign 4
Lt_0063:	.ascii	"_monstartup\0"

.section .ctors, "aw", @progbits
.int fb_ctor__rtlzprofile
