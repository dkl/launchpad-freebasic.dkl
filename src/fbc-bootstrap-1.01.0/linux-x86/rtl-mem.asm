	.intel_syntax noprefix

	#FreeBASIC-1.01.0-source/src/compiler/rtl-mem.bas' compilation started at 16:30:07 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl RTLMEMMODINIT
RTLMEMMODINIT:
.type RTLMEMMODINIT, @function
.Lt_0067:
push offset FUNCDATA
call RTLADDINTRINSICPROCS
add esp, 4
.Lt_0068:
ret
.size RTLMEMMODINIT, .-RTLMEMMODINIT
.balign 16

.globl RTLMEMMODEND
RTLMEMMODEND:
.type RTLMEMMODEND, @function
.Lt_0069:
.Lt_006A:
ret
.size RTLMEMMODEND, .-RTLMEMMODEND
.balign 16

.globl RTLNULLPTRCHECK
RTLNULLPTRCHECK:
.type RTLNULLPTRCHECK, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_006B:
mov dword ptr [ebp-4], 0
push 0
push 133
push offset Lt_0057
call RTLPROCLOOKUP
add esp, 8
push eax
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-8], eax
push -1
push 32
push 0
push 0
push dword ptr [ebp+8]
push 0
push 32
call ASTNEWCONV
add esp, 20
push eax
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_006E
jmp .Lt_006C
.Lt_006E:
.Lt_006D:
push -1
push -2147483648
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
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0070
jmp .Lt_006C
.Lt_0070:
.Lt_006F:
push -1
push -2147483648
push dword ptr [ebp+16]
call ASTNEWCONSTSTR
add esp, 4
push eax
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0072
jmp .Lt_006C
.Lt_0072:
.Lt_0071:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_006C:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size RTLNULLPTRCHECK, .-RTLNULLPTRCHECK
.balign 16

.globl RTLMEMSWAP
RTLMEMSWAP:
.type RTLMEMSWAP, @function
push ebp
mov ebp, esp
sub esp, 16
mov dword ptr [ebp-4], 0
.Lt_0073:
mov dword ptr [ebp-4], 0
push 0
push 210
push offset Lt_0058
call RTLPROCLOOKUP
add esp, 8
push eax
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-8], eax
push dword ptr [ebp+8]
call RTLCALCEXPRLEN
add esp, 4
mov dword ptr [ebp-16], eax
mov dword ptr [ebp-12], edx
push -1
push -2147483648
push dword ptr [ebp+8]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0076
jmp .Lt_0074
.Lt_0076:
.Lt_0075:
push -1
push -2147483648
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0078
jmp .Lt_0074
.Lt_0078:
.Lt_0077:
push -1
push -2147483648
push 0
push 7
push dword ptr [ebp-12]
push dword ptr [ebp-16]
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_007A
jmp .Lt_0074
.Lt_007A:
.Lt_0079:
push dword ptr [ebp-8]
call ASTADD
add esp, 4
mov dword ptr [ebp-4], -1
.Lt_0074:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size RTLMEMSWAP, .-RTLMEMSWAP
.balign 16

.globl RTLMEMCOPYCLEAR
RTLMEMCOPYCLEAR:
.type RTLMEMCOPYCLEAR, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_007B:
mov dword ptr [ebp-4], 0
push 0
push 211
push offset Lt_0059
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
jne .Lt_007E
jmp .Lt_007C
.Lt_007E:
.Lt_007D:
push -1
push -2147483648
push 0
push 7
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0080
jmp .Lt_007C
.Lt_0080:
.Lt_007F:
push -1
push -2147483648
push dword ptr [ebp+20]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0082
jmp .Lt_007C
.Lt_0082:
.Lt_0081:
push -1
push -2147483648
push 0
push 7
push dword ptr [ebp+28]
push dword ptr [ebp+24]
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0084
jmp .Lt_007C
.Lt_0084:
.Lt_0083:
push dword ptr [ebp-8]
call ASTADD
add esp, 4
mov dword ptr [ebp-4], -1
.Lt_007C:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size RTLMEMCOPYCLEAR, .-RTLMEMCOPYCLEAR
.balign 16

.globl RTLMEMNEWOP
RTLMEMNEWOP:
.type RTLMEMNEWOP, @function
push ebp
mov ebp, esp
sub esp, 16
mov dword ptr [ebp-4], 0
.Lt_0085:
mov eax, dword ptr [ebp+16]
and eax, 480
je .Lt_0087
mov dword ptr [ebp-16], 22
jmp .Lt_0093
.Lt_0087:
mov eax, dword ptr [ebp+16]
and eax, 31
mov dword ptr [ebp-16], eax
.Lt_0093:
cmp dword ptr [ebp-16], 18
jne .Lt_008A
mov eax, dword ptr [ebp+8]
sal eax, 4
push dword ptr [AST_OPTB+eax+12]
push dword ptr [ebp+20]
call SYMBGETCOMPOPOVLHEAD
add esp, 8
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
je .Lt_008C
push dword ptr [ebp-12]
call SYMBCHECKACCESS
add esp, 4
test eax, eax
jne .Lt_008E
push 0
push 0
push 201
call ERRREPORT
add esp, 12
.Lt_008E:
.Lt_008D:
.Lt_008C:
.Lt_008B:
jmp .Lt_0089
.Lt_008A:
mov dword ptr [ebp-12], 0
.Lt_0089:
cmp dword ptr [ebp-12], 0
jne .Lt_0090
push 212
push offset Lt_005C
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
.Lt_0090:
.Lt_008F:
push 0
push dword ptr [ebp-12]
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-8], eax
push -1
push -2147483648
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0092
jmp .Lt_0086
.Lt_0092:
.Lt_0091:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0086:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size RTLMEMNEWOP, .-RTLMEMNEWOP
.balign 16

.globl RTLMEMDELETEOP
RTLMEMDELETEOP:
.type RTLMEMDELETEOP, @function
push ebp
mov ebp, esp
sub esp, 16
mov dword ptr [ebp-4], 0
.Lt_0094:
mov eax, dword ptr [ebp+16]
and eax, 480
je .Lt_0096
mov dword ptr [ebp-16], 22
jmp .Lt_00A2
.Lt_0096:
mov eax, dword ptr [ebp+16]
and eax, 31
mov dword ptr [ebp-16], eax
.Lt_00A2:
cmp dword ptr [ebp-16], 18
jne .Lt_0099
mov eax, dword ptr [ebp+8]
sal eax, 4
push dword ptr [AST_OPTB+eax+12]
push dword ptr [ebp+20]
call SYMBGETCOMPOPOVLHEAD
add esp, 8
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
je .Lt_009B
push dword ptr [ebp-12]
call SYMBCHECKACCESS
add esp, 4
test eax, eax
jne .Lt_009D
push 0
push 0
push 201
call ERRREPORT
add esp, 12
.Lt_009D:
.Lt_009C:
.Lt_009B:
.Lt_009A:
jmp .Lt_0098
.Lt_0099:
mov dword ptr [ebp-12], 0
.Lt_0098:
cmp dword ptr [ebp-12], 0
jne .Lt_009F
push 213
push offset Lt_0062
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
.Lt_009F:
.Lt_009E:
push 0
push dword ptr [ebp-12]
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-8], eax
push -1
push -2147483648
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00A1
jmp .Lt_0095
.Lt_00A1:
.Lt_00A0:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0095:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size RTLMEMDELETEOP, .-RTLMEMDELETEOP
.balign 16
fb_ctor__rtlzmem:
.type fb_ctor__rtlzmem, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__rtlzmem, .-fb_ctor__rtlzmem
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
	#FreeBASIC-1.01.0-source/src/compiler/rtl-mem.bas' compilation took 0.03569197107572109 secs

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
.int Lt_0057
.long 0
.int 32
.int -1
.long 0
.int 2048
.int 3
.int 32
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 35
.int 1
.int 0
.skip 8,0
.skip 260,0
.int Lt_0058
.long 0
.int 0
.int -1
.long 0
.int 0
.int 3
.int 0
.int 2
.int 0
.skip 8,0
.int 0
.int 2
.int 0
.skip 8,0
.int 7
.int 1
.int 0
.skip 8,0
.skip 260,0
.int Lt_0059
.long 0
.int 0
.int -1
.long 0
.int 0
.int 4
.int 0
.int 2
.int 0
.skip 8,0
.int 7
.int 1
.int 0
.skip 8,0
.int 0
.int 2
.int 0
.skip 8,0
.int 7
.int 1
.int 0
.skip 8,0
.skip 240,0
.int Lt_005A
.int Lt_005B
.int 8
.int -1
.long 0
.int 0
.int 1
.int 10
.int 1
.int -1
.int 0
.skip 4,0
.skip 300,0
.int Lt_005C
.int Lt_005D
.int 32
.int 3
.long 0
.int 128
.int 1
.int 8
.int 1
.int 0
.skip 8,0
.skip 300,0
.int Lt_005E
.int Lt_005F
.int 32
.int 3
.long 0
.int 128
.int 2
.int 8
.int 1
.int 0
.skip 8,0
.int 8
.int 1
.int -1
.int 1
.skip 4,0
.skip 280,0
.int Lt_0060
.int Lt_0061
.int 32
.int 3
.long 0
.int 128
.int 2
.int 32
.int 1
.int 0
.skip 8,0
.int 8
.int 1
.int 0
.skip 8,0
.skip 280,0
.int Lt_0062
.int Lt_0063
.int 0
.int 3
.long 0
.int 128
.int 1
.int 32
.int 1
.int 0
.skip 8,0
.skip 300,0
.int Lt_0064
.int Lt_0065
.int 32
.int 3
.long 0
.int 0
.int 3
.int 0
.int 2
.int 0
.skip 8,0
.int 10
.int 1
.int -1
.int 0
.skip 4,0
.int 8
.int 1
.int 0
.skip 8,0
.skip 260,0
.long 0
.skip 344,0

.section .rodata
.balign 4
Lt_0057:	.ascii	"fb_NullPtrChk\0"
.balign 4
Lt_0058:	.ascii	"fb_MemSwap\0"
.balign 4
Lt_0059:	.ascii	"fb_MemCopyClear\0"
.balign 4
Lt_005A:	.ascii	"fre\0"
.balign 4
Lt_005B:	.ascii	"fb_GetMemAvail\0"
.balign 4
Lt_005C:	.ascii	"allocate\0"
.balign 4
Lt_005D:	.ascii	"malloc\0"
.balign 4
Lt_005E:	.ascii	"callocate\0"
.balign 4
Lt_005F:	.ascii	"calloc\0"
.balign 4
Lt_0060:	.ascii	"reallocate\0"
.balign 4
Lt_0061:	.ascii	"realloc\0"
.balign 4
Lt_0062:	.ascii	"deallocate\0"
.balign 4
Lt_0063:	.ascii	"free\0"
.balign 4
Lt_0064:	.ascii	"clear\0"
.balign 4
Lt_0065:	.ascii	"memset\0"

.section .ctors, "aw", @progbits
.int fb_ctor__rtlzmem
