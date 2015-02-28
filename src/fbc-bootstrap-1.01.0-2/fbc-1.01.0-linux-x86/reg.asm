	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/reg.bas' compilation started at 15:27:36 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl REGNEWCLASS
REGNEWCLASS:
.type REGNEWCLASS, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_005E:
mov dword ptr [ebp-8], 0
push 304
call XCALLOCATE
add esp, 4
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+8]
mov dword ptr [eax+52], ebx
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebp+12]
mov dword ptr [ebx+60], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+20]
mov dword ptr [eax+56], ebx
mov ebx, dword ptr [ebp-8]
cmp dword ptr [ebx+56], 0
jne .Lt_0061
push dword ptr [ebp+16]
push dword ptr [ebp-8]
call REGINITCLASS
add esp, 8
jmp .Lt_0060
.Lt_0061:
push dword ptr [ebp+16]
push dword ptr [ebp-8]
call SREGINITCLASS
add esp, 8
.Lt_0060:
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ebx
.Lt_005F:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size REGNEWCLASS, .-REGNEWCLASS
.balign 16

.globl REGDELCLASS
REGDELCLASS:
.type REGDELCLASS, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_0062:
mov dword ptr [ebp-4], 0
cmp dword ptr [ebp+8], 0
jne .Lt_0065
jmp .Lt_0063
.Lt_0065:
.Lt_0064:
push dword ptr [ebp+8]
call free
add esp, 4
mov dword ptr [ebp-4], -1
.Lt_0063:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size REGDELCLASS, .-REGDELCLASS
.balign 16
fb_ctor__reg:
.type fb_ctor__reg, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__reg, .-fb_ctor__reg
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
REGPUSH:
.type REGPUSH, @function
push ebp
mov ebp, esp
push ebx
.Lt_0066:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+132]
mov dword ptr [Lt_0126], ebx
mov ebx, dword ptr [Lt_0126]
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [ebx+4]
mov dword ptr [eax+132], ecx
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [Lt_0126]
mov ebx, dword ptr [ecx+128]
mov dword ptr [eax+4], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [Lt_0126]
mov dword ptr [ebx+128], eax
mov eax, dword ptr [Lt_0126]
mov ebx, dword ptr [ebp+12]
mov dword ptr [eax], ebx
.Lt_0067:
pop ebx
mov esp, ebp
pop ebp
ret
.size REGPUSH, .-REGPUSH

.section .bss
.balign 4
	.lcomm	Lt_0126,4

.section .text
.balign 16
REGPOP:
.type REGPOP, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_0068:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+128]
mov dword ptr [Lt_0127], ebx
.Lt_006A:
cmp dword ptr [Lt_0127], 0
je .Lt_006B
mov ebx, dword ptr [Lt_0127]
mov eax, dword ptr [ebx]
sal eax, 2
mov ebx, dword ptr [ebp+8]
add ebx, eax
mov eax, dword ptr [ebp+12]
and eax, dword ptr [ebx+204]
test eax, eax
je .Lt_006D
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [Lt_0127]
cmp dword ptr [eax+128], ebx
jne .Lt_006F
mov ebx, dword ptr [Lt_0127]
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [ebx+4]
mov dword ptr [eax+128], ecx
jmp .Lt_006E
.Lt_006F:
mov ecx, dword ptr [Lt_0127]
mov eax, dword ptr [Lt_0128]
mov ebx, dword ptr [ecx+4]
mov dword ptr [eax+4], ebx
.Lt_006E:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [Lt_0127]
mov ecx, dword ptr [ebx+132]
mov dword ptr [eax+4], ecx
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [Lt_0127]
mov dword ptr [ecx+132], eax
mov eax, dword ptr [Lt_0127]
mov ecx, dword ptr [eax]
mov dword ptr [ebp-4], ecx
jmp .Lt_0069
.Lt_006D:
.Lt_006C:
mov ecx, dword ptr [Lt_0127]
mov dword ptr [Lt_0128], ecx
mov ecx, dword ptr [Lt_0127]
mov eax, dword ptr [ecx+4]
mov dword ptr [Lt_0127], eax
jmp .Lt_006A
.Lt_006B:
mov dword ptr [ebp-4], -1
.Lt_0069:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size REGPOP, .-REGPOP

.section .bss
.balign 4
	.lcomm	Lt_0127,4
.balign 4
	.lcomm	Lt_0128,4

.section .text
.balign 16
REGPOPREG:
.type REGPOPREG, @function
push ebp
mov ebp, esp
push ebx
.Lt_0070:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+128]
mov dword ptr [Lt_0129], ebx
.Lt_0072:
cmp dword ptr [Lt_0129], 0
je .Lt_0073
mov ebx, dword ptr [Lt_0129]
mov eax, dword ptr [ebp+12]
cmp dword ptr [ebx], eax
jne .Lt_0075
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [Lt_0129]
cmp dword ptr [eax+128], ebx
jne .Lt_0077
mov ebx, dword ptr [Lt_0129]
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [ebx+4]
mov dword ptr [eax+128], ecx
jmp .Lt_0076
.Lt_0077:
mov ecx, dword ptr [Lt_0129]
mov eax, dword ptr [Lt_012A]
mov ebx, dword ptr [ecx+4]
mov dword ptr [eax+4], ebx
.Lt_0076:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [Lt_0129]
mov ecx, dword ptr [ebx+132]
mov dword ptr [eax+4], ecx
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [Lt_0129]
mov dword ptr [ecx+132], eax
jmp .Lt_0071
.Lt_0075:
.Lt_0074:
mov eax, dword ptr [Lt_0129]
mov dword ptr [Lt_012A], eax
mov eax, dword ptr [Lt_0129]
mov ecx, dword ptr [eax+4]
mov dword ptr [Lt_0129], ecx
jmp .Lt_0072
.Lt_0073:
push 0
push 1
push 0
push offset Lt_0078
push 21
call ERRREPORTEX
add esp, 20
.Lt_0071:
pop ebx
mov esp, ebp
pop ebp
ret
.size REGPOPREG, .-REGPOPREG

.section .bss
.balign 4
	.lcomm	Lt_0129,4
.balign 4
	.lcomm	Lt_012A,4

.section .text
.balign 16
REGCLEAR:
.type REGCLEAR, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0079:
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+136], -1
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+128], 0
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+132], 0
mov dword ptr [Lt_012B], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+60]
dec ebx
mov dword ptr [ebp-4], ebx
jmp .Lt_007C
.Lt_007F:
mov ebx, dword ptr [Lt_012B]
sal ebx, 2
mov eax, dword ptr [ebp+8]
add eax, ebx
mov dword ptr [eax+64], 0
mov eax, dword ptr [Lt_012B]
sal eax, 2
mov ebx, dword ptr [ebp+8]
add ebx, eax
mov dword ptr [ebx+96], 0
mov ebx, dword ptr [Lt_012B]
sal ebx, 2
mov eax, dword ptr [ebp+8]
add eax, ebx
mov dword ptr [eax+236], 0
mov eax, dword ptr [Lt_012B]
sal eax, 3
mov ebx, dword ptr [ebp+8]
add ebx, eax
lea eax, [ebx+140]
mov dword ptr [Lt_012C], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [Lt_012C]
mov ecx, dword ptr [eax+128]
mov dword ptr [ebx+4], ecx
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [Lt_012C]
mov dword ptr [ecx+128], ebx
mov ebx, dword ptr [Lt_012C]
mov ecx, dword ptr [Lt_012B]
mov dword ptr [ebx], ecx
.Lt_007D:
inc dword ptr [Lt_012B]
.Lt_007C:
mov ecx, dword ptr [ebp-4]
cmp dword ptr [Lt_012B], ecx
jle .Lt_007F
.Lt_007E:
.Lt_007A:
pop ebx
mov esp, ebp
pop ebp
ret
.size REGCLEAR, .-REGCLEAR

.section .bss
.balign 4
	.lcomm	Lt_012C,4
.balign 4
	.lcomm	Lt_012B,4

.section .text
.balign 16
REGFINDFAREST:
.type REGFINDFAREST, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0080:
mov dword ptr [Lt_012D], 0
mov dword ptr [Lt_012E], -1
mov dword ptr [Lt_012F], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+60]
dec ebx
mov dword ptr [ebp-8], ebx
jmp .Lt_0083
.Lt_0086:
mov ebx, dword ptr [Lt_012F]
sal ebx, 2
mov eax, dword ptr [ebp+8]
add eax, ebx
mov ebx, dword ptr [ebp+12]
and ebx, dword ptr [eax+204]
test ebx, ebx
je .Lt_0088
mov ebx, dword ptr [Lt_012F]
sal ebx, 2
mov eax, dword ptr [ebp+8]
add eax, ebx
mov ebx, dword ptr [Lt_012D]
cmp dword ptr [eax+236], ebx
jbe .Lt_008A
mov ebx, dword ptr [Lt_012F]
sal ebx, 2
mov eax, dword ptr [ebp+8]
add eax, ebx
mov ebx, dword ptr [eax+236]
mov dword ptr [Lt_012D], ebx
mov ebx, dword ptr [Lt_012F]
mov dword ptr [Lt_012E], ebx
.Lt_008A:
.Lt_0089:
.Lt_0088:
.Lt_0087:
.Lt_0084:
inc dword ptr [Lt_012F]
.Lt_0083:
mov ebx, dword ptr [ebp-8]
cmp dword ptr [Lt_012F], ebx
jle .Lt_0086
.Lt_0085:
mov ebx, dword ptr [Lt_012E]
mov dword ptr [ebp-4], ebx
.Lt_0081:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size REGFINDFAREST, .-REGFINDFAREST

.section .bss
.balign 4
	.lcomm	Lt_012F,4
.balign 4
	.lcomm	Lt_012E,4
.balign 4
	.lcomm	Lt_012D,4

.section .text
.balign 16
REGALLOCATE:
.type REGALLOCATE, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_008B:
push dword ptr [ebp+20]
push dword ptr [ebp+8]
call REGPOP
add esp, 8
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], -1
jne .Lt_008E
push dword ptr [ebp+20]
push dword ptr [ebp+8]
call REGFINDFAREST
add esp, 8
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
sal eax, 2
mov ebx, dword ptr [ebp+8]
add ebx, eax
push dword ptr [ebx+96]
mov ebx, dword ptr [ebp-8]
sal ebx, 2
mov eax, dword ptr [ebp+8]
add eax, ebx
push dword ptr [eax+64]
call dword ptr [IR+276]
add esp, 8
push dword ptr [ebp-8]
push dword ptr [ebp+8]
call REGPOPREG
add esp, 8
.Lt_008E:
.Lt_008D:
mov eax, dword ptr [ebp+8]
mov ebx, 1
mov cl, byte ptr [ebp-8]
sal ebx, cl
not ebx
and dword ptr [eax+136], ebx
mov ebx, dword ptr [ebp-8]
sal ebx, 2
mov eax, dword ptr [ebp+8]
add eax, ebx
mov ebx, dword ptr [ebp+12]
mov dword ptr [eax+64], ebx
mov ebx, dword ptr [ebp-8]
sal ebx, 2
mov eax, dword ptr [ebp+8]
add eax, ebx
mov ebx, dword ptr [ebp+16]
mov dword ptr [eax+96], ebx
push dword ptr [ebp+12]
call dword ptr [IR+268]
add esp, 4
mov ebx, dword ptr [ebp-8]
sal ebx, 2
mov ecx, dword ptr [ebp+8]
add ecx, ebx
mov dword ptr [ecx+236], eax
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_008C:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size REGALLOCATE, .-REGALLOCATE
.balign 16
REGALLOCATEREG:
.type REGALLOCATEREG, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_008F:
mov eax, dword ptr [ebp+8]
mov ebx, 1
mov cl, byte ptr [ebp+12]
sal ebx, cl
and ebx, dword ptr [eax+136]
test ebx, ebx
je .Lt_0092
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call REGPOPREG
add esp, 8
mov ebx, dword ptr [ebp+8]
mov eax, 1
mov cl, byte ptr [ebp+12]
sal eax, cl
not eax
and dword ptr [ebx+136], eax
.Lt_0092:
.Lt_0091:
mov eax, dword ptr [ebp+12]
sal eax, 2
mov ebx, dword ptr [ebp+8]
add ebx, eax
mov eax, dword ptr [ebp+16]
mov dword ptr [ebx+64], eax
mov eax, dword ptr [ebp+12]
sal eax, 2
mov ebx, dword ptr [ebp+8]
add ebx, eax
mov eax, dword ptr [ebp+20]
mov dword ptr [ebx+96], eax
push dword ptr [ebp+16]
call dword ptr [IR+268]
add esp, 4
mov ebx, dword ptr [ebp+12]
sal ebx, 2
mov ecx, dword ptr [ebp+8]
add ecx, ebx
mov dword ptr [ecx+236], eax
mov eax, dword ptr [ebp+12]
mov dword ptr [ebp-4], eax
.Lt_0090:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size REGALLOCATEREG, .-REGALLOCATEREG
.balign 16
REGENSURE:
.type REGENSURE, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0093:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+12]
mov dword ptr [ebp-8], ebx
cmp dword ptr [ebp-8], -1
jne .Lt_0096
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call REGALLOCATE
add esp, 16
mov dword ptr [ebp-8], eax
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call dword ptr [IR+272]
add esp, 12
.Lt_0096:
.Lt_0095:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0094:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size REGENSURE, .-REGENSURE
.balign 16
REGSETOWNER:
.type REGSETOWNER, @function
push ebp
mov ebp, esp
push ebx
.Lt_0097:
mov eax, dword ptr [ebp+8]
mov ebx, 1
mov cl, byte ptr [ebp+12]
sal ebx, cl
not ebx
and dword ptr [eax+136], ebx
mov ebx, dword ptr [ebp+12]
sal ebx, 2
mov eax, dword ptr [ebp+8]
add eax, ebx
mov ebx, dword ptr [ebp+16]
mov dword ptr [eax+64], ebx
mov ebx, dword ptr [ebp+12]
sal ebx, 2
mov eax, dword ptr [ebp+8]
add eax, ebx
mov ebx, dword ptr [ebp+20]
mov dword ptr [eax+96], ebx
push dword ptr [ebp+16]
call dword ptr [IR+268]
add esp, 4
mov ebx, dword ptr [ebp+12]
sal ebx, 2
mov ecx, dword ptr [ebp+8]
add ecx, ebx
mov dword ptr [ecx+236], eax
.Lt_0098:
pop ebx
mov esp, ebp
pop ebp
ret
.size REGSETOWNER, .-REGSETOWNER
.balign 16
REGFREE:
.type REGFREE, @function
push ebp
mov ebp, esp
push ebx
.Lt_0099:
mov eax, dword ptr [ebp+8]
mov ebx, 1
mov cl, byte ptr [ebp+12]
sal ebx, cl
and ebx, dword ptr [eax+136]
test ebx, ebx
jne .Lt_009C
mov ebx, dword ptr [ebp+8]
mov eax, 1
mov cl, byte ptr [ebp+12]
sal eax, cl
or dword ptr [ebx+136], eax
mov eax, dword ptr [ebp+12]
sal eax, 2
mov ebx, dword ptr [ebp+8]
add ebx, eax
mov dword ptr [ebx+64], 0
mov ebx, dword ptr [ebp+12]
sal ebx, 2
mov eax, dword ptr [ebp+8]
add eax, ebx
mov dword ptr [eax+96], 0
mov eax, dword ptr [ebp+12]
sal eax, 2
mov ebx, dword ptr [ebp+8]
add ebx, eax
mov dword ptr [ebx+236], 0
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call REGPUSH
add esp, 8
.Lt_009C:
.Lt_009B:
.Lt_009A:
pop ebx
mov esp, ebp
pop ebp
ret
.size REGFREE, .-REGFREE
.balign 16
REGISFREE:
.type REGISFREE, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_009D:
mov eax, dword ptr [ebp+8]
mov ebx, 1
mov cl, byte ptr [ebp+12]
sal ebx, cl
and ebx, dword ptr [eax+136]
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-4], ebx
.Lt_009E:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size REGISFREE, .-REGISFREE
.balign 16
REGGETMAXREGS:
.type REGGETMAXREGS, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_009F:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+60]
mov dword ptr [ebp-4], ebx
.Lt_00A0:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size REGGETMAXREGS, .-REGGETMAXREGS
.balign 16
REGGETFIRST:
.type REGGETFIRST, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_00A1:
mov dword ptr [ebp-4], 0
.Lt_00A2:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size REGGETFIRST, .-REGGETFIRST
.balign 16
REGGETNEXT:
.type REGGETNEXT, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_00A3:
mov dword ptr [ebp-4], -1
cmp dword ptr [ebp+12], 0
jl .Lt_00A6
inc dword ptr [ebp+12]
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+60]
cmp dword ptr [ebp+12], ebx
jge .Lt_00A8
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebp-4], ebx
.Lt_00A8:
.Lt_00A7:
.Lt_00A6:
.Lt_00A5:
.Lt_00A4:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size REGGETNEXT, .-REGGETNEXT
.balign 16
REGGETVREG:
.type REGGETVREG, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_00A9:
mov eax, dword ptr [ebp+12]
sal eax, 2
mov ebx, dword ptr [ebp+8]
add ebx, eax
mov eax, dword ptr [ebx+64]
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp+12]
sal eax, 2
mov ebx, dword ptr [ebp+8]
add ebx, eax
mov eax, dword ptr [ebp+16]
mov ecx, dword ptr [ebx+96]
mov dword ptr [eax], ecx
.Lt_00AA:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size REGGETVREG, .-REGGETVREG
.balign 16
REGGETREALREG:
.type REGGETREALREG, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_00AB:
mov eax, dword ptr [ebp+12]
mov dword ptr [ebp-4], eax
.Lt_00AC:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size REGGETREALREG, .-REGGETREALREG
.balign 16
REGDUMP:
.type REGDUMP, @function
push ebp
mov ebp, esp
.Lt_00AD:
.Lt_00AE:
mov esp, ebp
pop ebp
ret
.size REGDUMP, .-REGDUMP
.balign 16
REGINITCLASS:
.type REGINITCLASS, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_00AF:
push dword ptr [ebp+8]
call REGCLEAR
add esp, 4
mov dword ptr [Lt_0131], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+60]
dec ebx
mov dword ptr [ebp-4], ebx
jmp .Lt_00B2
.Lt_00B5:
mov ebx, dword ptr [Lt_0131]
sal ebx, 2
mov eax, dword ptr [ebp+12]
add ebx, dword ptr [eax]
mov eax, dword ptr [Lt_0131]
sal eax, 2
mov ecx, dword ptr [ebp+8]
add ecx, eax
mov eax, dword ptr [ebx]
mov dword ptr [ecx+204], eax
.Lt_00B3:
inc dword ptr [Lt_0131]
.Lt_00B2:
mov eax, dword ptr [ebp-4]
cmp dword ptr [Lt_0131], eax
jle .Lt_00B5
.Lt_00B4:
mov eax, dword ptr [ebp+8]
mov ecx, offset REGENSURE
mov dword ptr [eax], ecx
mov ecx, dword ptr [ebp+8]
mov eax, offset REGALLOCATE
mov dword ptr [ecx+4], eax
mov eax, dword ptr [ebp+8]
mov ecx, offset REGALLOCATEREG
mov dword ptr [eax+8], ecx
mov ecx, dword ptr [ebp+8]
mov eax, offset REGFREE
mov dword ptr [ecx+12], eax
mov eax, dword ptr [ebp+8]
mov ecx, offset REGISFREE
mov dword ptr [eax+16], ecx
mov ecx, dword ptr [ebp+8]
mov eax, offset REGSETOWNER
mov dword ptr [ecx+20], eax
mov eax, dword ptr [ebp+8]
mov ecx, offset REGGETMAXREGS
mov dword ptr [eax+24], ecx
mov ecx, dword ptr [ebp+8]
mov eax, offset REGGETFIRST
mov dword ptr [ecx+28], eax
mov eax, dword ptr [ebp+8]
mov ecx, offset REGGETNEXT
mov dword ptr [eax+32], ecx
mov ecx, dword ptr [ebp+8]
mov eax, offset REGGETVREG
mov dword ptr [ecx+36], eax
mov eax, dword ptr [ebp+8]
mov ecx, offset REGGETREALREG
mov dword ptr [eax+40], ecx
mov ecx, dword ptr [ebp+8]
mov eax, offset REGCLEAR
mov dword ptr [ecx+44], eax
mov eax, dword ptr [ebp+8]
mov ecx, offset REGDUMP
mov dword ptr [eax+48], ecx
.Lt_00B0:
pop ebx
mov esp, ebp
pop ebp
ret
.size REGINITCLASS, .-REGINITCLASS

.section .bss
.balign 4
	.lcomm	Lt_0131,4

.section .text
.balign 16
SREGFINDREG:
.type SREGFINDREG, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_00B6:
mov dword ptr [ebp-4], -1
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebx+60]
cmp dword ptr [eax+300], ecx
jne .Lt_00B9
jmp .Lt_00B7
.Lt_00B9:
.Lt_00B8:
mov dword ptr [Lt_0132], 0
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ecx+60]
dec eax
mov dword ptr [ebp-8], eax
jmp .Lt_00BB
.Lt_00BE:
mov eax, dword ptr [Lt_0132]
sal eax, 2
mov ecx, dword ptr [ebp+8]
add ecx, eax
cmp dword ptr [ecx+268], -1
je .Lt_00C0
mov ecx, dword ptr [Lt_0132]
sal ecx, 2
mov eax, dword ptr [ebp+8]
add eax, ecx
mov ecx, dword ptr [ebp+12]
cmp dword ptr [eax+64], ecx
jne .Lt_00C2
mov ecx, dword ptr [Lt_0132]
mov dword ptr [ebp-4], ecx
jmp .Lt_00B7
.Lt_00C2:
.Lt_00C1:
.Lt_00C0:
.Lt_00BF:
.Lt_00BC:
inc dword ptr [Lt_0132]
.Lt_00BB:
mov ecx, dword ptr [ebp-8]
cmp dword ptr [Lt_0132], ecx
jle .Lt_00BE
.Lt_00BD:
.Lt_00B7:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SREGFINDREG, .-SREGFINDREG

.section .bss
.balign 4
	.lcomm	Lt_0132,4

.section .text
.balign 16
SREGXCHG:
.type SREGXCHG, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_00C3:
push dword ptr [ebp+12]
call dword ptr [IR+280]
add esp, 4
mov dword ptr [Lt_0133], -1
mov dword ptr [Lt_0134], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+60]
dec ebx
mov dword ptr [ebp-4], ebx
jmp .Lt_00C6
.Lt_00C9:
mov ebx, dword ptr [Lt_0134]
sal ebx, 2
mov eax, dword ptr [ebp+8]
add eax, ebx
cmp dword ptr [eax+268], 0
jne .Lt_00CB
mov eax, dword ptr [Lt_0134]
mov dword ptr [Lt_0133], eax
jmp .Lt_00C8
.Lt_00CB:
.Lt_00CA:
.Lt_00C7:
inc dword ptr [Lt_0134]
.Lt_00C6:
mov eax, dword ptr [ebp-4]
cmp dword ptr [Lt_0134], eax
jle .Lt_00C9
.Lt_00C8:
mov eax, dword ptr [ebp+12]
sal eax, 2
mov ebx, dword ptr [ebp+8]
add ebx, eax
push dword ptr [ebx+268]
mov ebx, dword ptr [Lt_0133]
sal ebx, 2
mov eax, dword ptr [ebp+8]
add eax, ebx
mov ebx, dword ptr [ebp+12]
sal ebx, 2
mov ecx, dword ptr [ebp+8]
add ecx, ebx
mov ebx, dword ptr [eax+268]
mov dword ptr [ecx+268], ebx
mov ebx, dword ptr [Lt_0133]
sal ebx, 2
mov ecx, dword ptr [ebp+8]
add ecx, ebx
pop dword ptr [ecx+268]
.Lt_00C4:
pop ebx
mov esp, ebp
pop ebp
ret
.size SREGXCHG, .-SREGXCHG

.section .bss
.balign 4
	.lcomm	Lt_0134,4
.balign 4
	.lcomm	Lt_0133,4

.section .text
.balign 16
SREGFINDFREEREG:
.type SREGFINDFREEREG, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_00CC:
mov dword ptr [ebp-4], -1
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+300], 0
jne .Lt_00CF
jmp .Lt_00CD
.Lt_00CF:
.Lt_00CE:
mov dword ptr [Lt_0135], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+60]
dec ebx
mov dword ptr [ebp-8], ebx
jmp .Lt_00D1
.Lt_00D4:
mov ebx, dword ptr [Lt_0135]
sal ebx, 2
mov eax, dword ptr [ebp+8]
add eax, ebx
cmp dword ptr [eax+268], -1
jne .Lt_00D6
mov eax, dword ptr [Lt_0135]
mov dword ptr [ebp-4], eax
jmp .Lt_00CD
.Lt_00D6:
.Lt_00D5:
.Lt_00D2:
inc dword ptr [Lt_0135]
.Lt_00D1:
mov eax, dword ptr [ebp-8]
cmp dword ptr [Lt_0135], eax
jle .Lt_00D4
.Lt_00D3:
.Lt_00CD:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SREGFINDFREEREG, .-SREGFINDFREEREG

.section .bss
.balign 4
	.lcomm	Lt_0135,4

.section .text
.balign 16
SREGFINDTOSREG:
.type SREGFINDTOSREG, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_00E2:
mov dword ptr [Lt_0136], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+60]
dec ebx
mov dword ptr [ebp-8], ebx
jmp .Lt_00E5
.Lt_00E8:
mov ebx, dword ptr [Lt_0136]
sal ebx, 2
mov eax, dword ptr [ebp+8]
add eax, ebx
cmp dword ptr [eax+268], 0
jne .Lt_00EA
mov eax, dword ptr [Lt_0136]
mov dword ptr [ebp-4], eax
jmp .Lt_00E3
.Lt_00EA:
.Lt_00E9:
.Lt_00E6:
inc dword ptr [Lt_0136]
.Lt_00E5:
mov eax, dword ptr [ebp-8]
cmp dword ptr [Lt_0136], eax
jle .Lt_00E8
.Lt_00E7:
mov dword ptr [ebp-4], -1
.Lt_00E3:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SREGFINDTOSREG, .-SREGFINDTOSREG

.section .bss
.balign 4
	.lcomm	Lt_0136,4

.section .text
.balign 16
SREGALLOCATE:
.type SREGALLOCATE, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
mov dword ptr [ebp-4], 0
.Lt_00EB:
push dword ptr [ebp+8]
call SREGFINDFREEREG
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], -1
jne .Lt_00EE
push dword ptr [ebp+8]
call SREGFINDTOSREG
add esp, 4
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
sal eax, 2
mov ebx, dword ptr [ebp+8]
add ebx, eax
push dword ptr [ebx+96]
mov ebx, dword ptr [ebp-8]
sal ebx, 2
mov eax, dword ptr [ebp+8]
add eax, ebx
push dword ptr [eax+64]
call dword ptr [IR+276]
add esp, 8
jmp .Lt_00ED
.Lt_00EE:
mov eax, dword ptr [ebp+8]
dec dword ptr [eax+300]
mov dword ptr [ebp-12], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+60]
dec ebx
mov dword ptr [ebp-16], ebx
jmp .Lt_00F0
.Lt_00F3:
mov ebx, dword ptr [ebp-12]
sal ebx, 2
mov eax, dword ptr [ebp+8]
add eax, ebx
cmp dword ptr [eax+268], -1
je .Lt_00F5
mov eax, dword ptr [ebp-12]
sal eax, 2
mov ebx, dword ptr [ebp+8]
add ebx, eax
inc dword ptr [ebx+268]
.Lt_00F5:
.Lt_00F4:
.Lt_00F1:
inc dword ptr [ebp-12]
.Lt_00F0:
mov ebx, dword ptr [ebp-16]
cmp dword ptr [ebp-12], ebx
jle .Lt_00F3
.Lt_00F2:
.Lt_00ED:
mov ebx, dword ptr [ebp-8]
sal ebx, 2
mov eax, dword ptr [ebp+8]
add eax, ebx
mov ebx, dword ptr [ebp+12]
mov dword ptr [eax+64], ebx
mov ebx, dword ptr [ebp-8]
sal ebx, 2
mov eax, dword ptr [ebp+8]
add eax, ebx
mov ebx, dword ptr [ebp+16]
mov dword ptr [eax+96], ebx
mov ebx, dword ptr [ebp-8]
sal ebx, 2
mov eax, dword ptr [ebp+8]
add eax, ebx
mov dword ptr [eax+268], 0
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_00EC:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SREGALLOCATE, .-SREGALLOCATE
.balign 16
SREGALLOCATEREG:
.type SREGALLOCATEREG, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_00F6:
push 8
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+8]
call SREGALLOCATE
add esp, 16
mov dword ptr [ebp-4], eax
.Lt_00F7:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size SREGALLOCATEREG, .-SREGALLOCATEREG
.balign 16
SREGENSURE:
.type SREGENSURE, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_00F8:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call SREGFINDREG
add esp, 8
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], -1
jne .Lt_00FB
push 8
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call SREGALLOCATE
add esp, 16
mov dword ptr [ebp-8], eax
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call dword ptr [IR+272]
add esp, 12
jmp .Lt_00FA
.Lt_00FB:
mov eax, dword ptr [ebp-8]
sal eax, 2
mov ebx, dword ptr [ebp+8]
add ebx, eax
cmp dword ptr [ebx+268], 0
je .Lt_00FD
push dword ptr [ebp-8]
push dword ptr [ebp+8]
call SREGXCHG
add esp, 8
.Lt_00FD:
.Lt_00FC:
.Lt_00FA:
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ebx
.Lt_00F9:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SREGENSURE, .-SREGENSURE
.balign 16
SREGFREE:
.type SREGFREE, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
.Lt_00FE:
mov dword ptr [ebp-4], 0
mov dword ptr [ebp-8], 0
mov eax, dword ptr [ebp+12]
sal eax, 2
mov ebx, dword ptr [ebp+8]
add ebx, eax
cmp dword ptr [ebx+268], -1
jne .Lt_0101
jmp .Lt_00FF
.Lt_0101:
.Lt_0100:
mov ebx, dword ptr [ebp+12]
sal ebx, 2
mov eax, dword ptr [ebp+8]
add eax, ebx
mov ebx, dword ptr [eax+268]
mov dword ptr [ebp-8], ebx
mov ebx, dword ptr [ebp+12]
sal ebx, 2
mov eax, dword ptr [ebp+8]
add eax, ebx
mov dword ptr [eax+268], -1
mov eax, dword ptr [ebp+12]
sal eax, 2
mov ebx, dword ptr [ebp+8]
add ebx, eax
mov dword ptr [ebx+64], 0
mov ebx, dword ptr [ebp+12]
sal ebx, 2
mov eax, dword ptr [ebp+8]
add eax, ebx
mov dword ptr [eax+96], 0
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+60]
dec ebx
mov dword ptr [ebp-12], ebx
jmp .Lt_0103
.Lt_0106:
mov ebx, dword ptr [ebp-4]
sal ebx, 2
mov eax, dword ptr [ebp+8]
add eax, ebx
cmp dword ptr [eax+268], -1
je .Lt_0108
mov eax, dword ptr [ebp-4]
sal eax, 2
mov ebx, dword ptr [ebp+8]
add ebx, eax
mov eax, dword ptr [ebp-8]
cmp dword ptr [ebx+268], eax
jle .Lt_010A
mov eax, dword ptr [ebp-4]
sal eax, 2
mov ebx, dword ptr [ebp+8]
add ebx, eax
dec dword ptr [ebx+268]
.Lt_010A:
.Lt_0109:
.Lt_0108:
.Lt_0107:
.Lt_0104:
inc dword ptr [ebp-4]
.Lt_0103:
mov ebx, dword ptr [ebp-12]
cmp dword ptr [ebp-4], ebx
jle .Lt_0106
.Lt_0105:
mov ebx, dword ptr [ebp+8]
inc dword ptr [ebx+300]
.Lt_00FF:
pop ebx
mov esp, ebp
pop ebp
ret
.size SREGFREE, .-SREGFREE
.balign 16
SREGISFREE:
.type SREGISFREE, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_010B:
mov eax, dword ptr [ebp+12]
sal eax, 2
mov ebx, dword ptr [ebp+8]
add ebx, eax
mov eax, dword ptr [ebx+268]
cmp eax, -1
sete al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-4], eax
.Lt_010C:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SREGISFREE, .-SREGISFREE
.balign 16
SREGSETOWNER:
.type SREGSETOWNER, @function
push ebp
mov ebp, esp
push ebx
.Lt_010D:
mov eax, dword ptr [ebp+12]
sal eax, 2
mov ebx, dword ptr [ebp+8]
add ebx, eax
mov eax, dword ptr [ebp+16]
mov dword ptr [ebx+64], eax
mov eax, dword ptr [ebp+12]
sal eax, 2
mov ebx, dword ptr [ebp+8]
add ebx, eax
mov eax, dword ptr [ebp+20]
mov dword ptr [ebx+96], eax
.Lt_010E:
pop ebx
mov esp, ebp
pop ebp
ret
.size SREGSETOWNER, .-SREGSETOWNER
.balign 16
SREGGETREALREG:
.type SREGGETREALREG, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_010F:
mov eax, dword ptr [ebp+12]
sal eax, 2
mov ebx, dword ptr [ebp+8]
add ebx, eax
mov eax, dword ptr [ebx+268]
mov dword ptr [ebp-4], eax
.Lt_0110:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SREGGETREALREG, .-SREGGETREALREG
.balign 16
SREGGETMAXREGS:
.type SREGGETMAXREGS, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_0111:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+60]
mov dword ptr [ebp-4], ebx
.Lt_0112:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SREGGETMAXREGS, .-SREGGETMAXREGS
.balign 16
SREGGETFIRST:
.type SREGGETFIRST, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_0113:
push dword ptr [ebp+8]
call SREGFINDTOSREG
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_0114:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size SREGGETFIRST, .-SREGGETFIRST
.balign 16
SREGGETNEXT:
.type SREGGETNEXT, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_0115:
mov eax, dword ptr [ebp+12]
test eax, eax
setl al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebp+12]
cmp ecx, dword ptr [ebx+60]
setge cl
shr ecx, 1
sbb ecx, ecx
or eax, ecx
je .Lt_0118
mov dword ptr [ebp-4], -1
jmp .Lt_0117
.Lt_0118:
push dword ptr [ebp+8]
call SREGFINDTOSREG
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_0117:
.Lt_0116:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SREGGETNEXT, .-SREGGETNEXT
.balign 16
SREGGETVREG:
.type SREGGETVREG, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_0119:
mov eax, dword ptr [ebp+12]
sal eax, 2
mov ebx, dword ptr [ebp+8]
add ebx, eax
mov eax, dword ptr [ebx+64]
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp+12]
sal eax, 2
mov ebx, dword ptr [ebp+8]
add ebx, eax
mov eax, dword ptr [ebp+16]
mov ecx, dword ptr [ebx+96]
mov dword ptr [eax], ecx
.Lt_011A:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SREGGETVREG, .-SREGGETVREG
.balign 16
SREGDUMP:
.type SREGDUMP, @function
push ebp
mov ebp, esp
.Lt_011B:
.Lt_011C:
mov esp, ebp
pop ebp
ret
.size SREGDUMP, .-SREGDUMP
.balign 16
SREGCLEAR:
.type SREGCLEAR, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_011D:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [eax+60]
mov dword ptr [ebx+300], ecx
mov dword ptr [ebp-4], 0
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ecx+60]
dec ebx
mov dword ptr [ebp-8], ebx
jmp .Lt_0120
.Lt_0123:
mov ebx, dword ptr [ebp-4]
sal ebx, 2
mov ecx, dword ptr [ebp+8]
add ecx, ebx
mov dword ptr [ecx+268], -1
mov ecx, dword ptr [ebp-4]
sal ecx, 2
mov ebx, dword ptr [ebp+8]
add ebx, ecx
mov dword ptr [ebx+64], 0
mov ebx, dword ptr [ebp-4]
sal ebx, 2
mov ecx, dword ptr [ebp+8]
add ecx, ebx
mov dword ptr [ecx+96], 0
.Lt_0121:
inc dword ptr [ebp-4]
.Lt_0120:
mov ecx, dword ptr [ebp-8]
cmp dword ptr [ebp-4], ecx
jle .Lt_0123
.Lt_0122:
.Lt_011E:
pop ebx
mov esp, ebp
pop ebp
ret
.size SREGCLEAR, .-SREGCLEAR
.balign 16
SREGINITCLASS:
.type SREGINITCLASS, @function
push ebp
mov ebp, esp
push ebx
.Lt_0124:
push dword ptr [ebp+8]
call SREGCLEAR
add esp, 4
mov eax, dword ptr [ebp+8]
mov ebx, offset SREGENSURE
mov dword ptr [eax], ebx
mov ebx, dword ptr [ebp+8]
mov eax, offset SREGALLOCATE
mov dword ptr [ebx+4], eax
mov eax, dword ptr [ebp+8]
mov ebx, offset SREGALLOCATEREG
mov dword ptr [eax+8], ebx
mov ebx, dword ptr [ebp+8]
mov eax, offset SREGFREE
mov dword ptr [ebx+12], eax
mov eax, dword ptr [ebp+8]
mov ebx, offset SREGISFREE
mov dword ptr [eax+16], ebx
mov ebx, dword ptr [ebp+8]
mov eax, offset SREGSETOWNER
mov dword ptr [ebx+20], eax
mov eax, dword ptr [ebp+8]
mov ebx, offset SREGGETMAXREGS
mov dword ptr [eax+24], ebx
mov ebx, dword ptr [ebp+8]
mov eax, offset SREGGETFIRST
mov dword ptr [ebx+28], eax
mov eax, dword ptr [ebp+8]
mov ebx, offset SREGGETNEXT
mov dword ptr [eax+32], ebx
mov ebx, dword ptr [ebp+8]
mov eax, offset SREGGETVREG
mov dword ptr [ebx+36], eax
mov eax, dword ptr [ebp+8]
mov ebx, offset SREGGETREALREG
mov dword ptr [eax+40], ebx
mov ebx, dword ptr [ebp+8]
mov eax, offset SREGCLEAR
mov dword ptr [ebx+44], eax
mov eax, dword ptr [ebp+8]
mov ebx, offset SREGDUMP
mov dword ptr [eax+48], ebx
.Lt_0125:
pop ebx
mov esp, ebp
pop ebp
ret
.size SREGINITCLASS, .-SREGINITCLASS
	#fbc-1.01.0/src/compiler/reg.bas' compilation took 0.02599705359898508 secs

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
Lt_0078:	.ascii	"REGPOPREG\0"

.section .ctors, "aw", @progbits
.int fb_ctor__reg
