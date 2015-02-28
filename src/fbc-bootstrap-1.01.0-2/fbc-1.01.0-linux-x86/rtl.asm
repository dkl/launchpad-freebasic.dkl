	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/rtl.bas' compilation started at 15:27:37 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl RTLINIT
RTLINIT:
.type RTLINIT, @function
.Lt_0058:
push 6
push 12
push 32
lea eax, [CTX]
push eax
call LISTINIT
add esp, 16
call RTLARRAYMODINIT
call RTLCONSOLEMODINIT
call RTLDATAMODINIT
call RTLERRORMODINIT
call RTLFILEMODINIT
call RTLGFXMODINIT
call RTLMACROMODINIT
call RTLMATHMODINIT
call RTLMEMMODINIT
call RTLPRINTMODINIT
call RTLPROFILEMODINIT
call RTLSTRINGMODINIT
call RTLSYSTEMMODINIT
call RTLGOSUBMODINIT
call RTLOOPMODINIT
.Lt_0059:
ret
.size RTLINIT, .-RTLINIT
.balign 16

.globl RTLEND
RTLEND:
.type RTLEND, @function
.Lt_005A:
call RTLOOPMODEND
call RTLGOSUBMODEND
call RTLSYSTEMMODEND
call RTLSTRINGMODEND
call RTLPROFILEMODEND
call RTLPRINTMODEND
call RTLMEMMODEND
call RTLMATHMODEND
call RTLMACROMODEND
call RTLGFXMODEND
call RTLFILEMODEND
call RTLERRORMODEND
call RTLDATAMODEND
call RTLCONSOLEMODEND
call RTLARRAYMODEND
lea eax, [CTX]
push eax
call LISTEND
add esp, 4
push 0
push offset Lt_0057
call fb_ArrayClear
add esp, 8
.Lt_005B:
ret
.size RTLEND, .-RTLEND
.balign 16

.globl RTLADDINTRINSICPROCS
RTLADDINTRINSICPROCS:
.type RTLADDINTRINSICPROCS, @function
push ebp
mov ebp, esp
sub esp, 96
push ebx
.Lt_005C:
.Lt_005E:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 0
jne .Lt_0062
jmp .Lt_005F
.Lt_0062:
.Lt_0061:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+12]
mov dword ptr [ebp-8], ebx
cmp dword ptr [ebp-8], -1
jne .Lt_0064
mov ebx, dword ptr [ENV+216]
mov dword ptr [ebp-8], ebx
.Lt_0064:
.Lt_0063:
mov dword ptr [ebp-12], -1
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+20]
and eax, 4
je .Lt_0066
mov eax, dword ptr [ENV+840]
and eax, 1
test eax, eax
setne al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-12], eax
.Lt_0066:
.Lt_0065:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+20]
and ebx, 16384
je .Lt_0068
call FBGETCPUFAMILY
test eax, eax
sete al
shr eax, 1
sbb eax, eax
and dword ptr [ebp-12], eax
.Lt_0068:
.Lt_0067:
cmp dword ptr [ebp-12], 0
je .Lt_006A
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+20]
and ebx, 256
test ebx, ebx
je .Lt_006C
mov ebx, dword ptr [ENV+136]
cmp ebx, 3
sete bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-12], ebx
.Lt_006C:
.Lt_006B:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+20]
and eax, 1024
test eax, eax
je .Lt_006E
mov eax, dword ptr [ENV+136]
test eax, eax
sete al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-12], eax
.Lt_006E:
.Lt_006D:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+20]
and ebx, 512
test ebx, ebx
je .Lt_0070
mov ebx, dword ptr [ENV+136]
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-12], ebx
.Lt_0070:
.Lt_006F:
.Lt_006A:
.Lt_0069:
cmp dword ptr [ebp-12], 0
je .Lt_0072
push 0
call SYMBPREADDPROC
add esp, 4
mov dword ptr [ebp-16], eax
mov dword ptr [ebp-32], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+24]
dec ebx
mov dword ptr [ebp-36], ebx
jmp .Lt_0074
.Lt_0077:
mov ebx, dword ptr [ebp-32]
imul ebx, 20
mov eax, dword ptr [ebp+8]
add eax, ebx
lea ebx, [eax+28]
mov dword ptr [ebp-40], ebx
mov dword ptr [ebp-44], 0
mov ebx, dword ptr [ebp-40]
cmp dword ptr [ebx+8], 0
je .Lt_007A
mov dword ptr [ebp-48], 2097152
mov ebx, dword ptr [ebp-40]
mov eax, dword ptr [ebx]
mov dword ptr [ebp-64], eax
jmp .Lt_007C
.Lt_007E:
push offset Lt_0000
call ASTNEWCONSTSTR
add esp, 4
mov dword ptr [ebp-56], eax
jmp .Lt_007B
.Lt_007F:
mov eax, dword ptr [ebp-40]
push dword ptr [eax]
mov eax, dword ptr [ebp-40]
fild dword ptr [eax+12]
sub esp,8
fstp qword ptr [esp]
call ASTNEWCONSTF
add esp, 12
mov dword ptr [ebp-56], eax
jmp .Lt_007B
.Lt_0080:
push 0
call SYMBPREADDPROC
add esp, 4
mov dword ptr [ebp-80], eax
mov dword ptr [ebp-72], 0
mov eax, dword ptr [ebp-40]
mov ebx, dword ptr [eax+12]
dec ebx
mov dword ptr [ebp-84], ebx
jmp .Lt_0082
.Lt_0085:
inc dword ptr [ebp-32]
mov ebx, dword ptr [ebp-32]
imul ebx, 20
mov eax, dword ptr [ebp+8]
add eax, ebx
lea ebx, [eax+28]
mov dword ptr [ebp-88], ebx
mov ebx, dword ptr [ebp-88]
cmp dword ptr [ebx+8], 0
je .Lt_0088
mov dword ptr [ebp-68], 2097152
mov ebx, dword ptr [ebp-88]
mov eax, dword ptr [ebx]
mov dword ptr [ebp-96], eax
jmp .Lt_008A
.Lt_008C:
push offset Lt_0000
call ASTNEWCONSTSTR
add esp, 4
mov dword ptr [ebp-76], eax
jmp .Lt_0089
.Lt_008D:
mov eax, dword ptr [ebp-88]
push dword ptr [eax]
mov eax, dword ptr [ebp-88]
fild dword ptr [eax+12]
sub esp,8
fstp qword ptr [esp]
call ASTNEWCONSTF
add esp, 12
mov dword ptr [ebp-76], eax
jmp .Lt_0089
.Lt_008E:
push 0
mov eax, dword ptr [ebp-88]
push dword ptr [eax]
mov eax, dword ptr [ebp-88]
mov ecx, dword ptr [eax+12]
mov ebx, ecx
sar ebx, 31
push ebx
push ecx
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-76], eax
jmp .Lt_0089
.Lt_008A:
mov eax, dword ptr [ebp-96]
add eax, 4294967282
cmp eax, 2
ja .Lt_008E
mov eax, dword ptr [ebp-96]
jmp dword ptr [.LT_008F+eax*4-56]
.LT_008F:
.int .Lt_008D
.int .Lt_008D
.int .Lt_008C
.Lt_0089:
jmp .Lt_0087
.Lt_0088:
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-68], 0
.Lt_0087:
push dword ptr [ebp-68]
mov eax, dword ptr [ebp-88]
push dword ptr [eax+4]
mov eax, dword ptr [ebp-88]
cmp dword ptr [eax+4], 3
jne .Lt_0090
mov dword ptr [ebp-92], -1
jmp .Lt_00B1
.Lt_0090:
mov dword ptr [ebp-92], 0
.Lt_00B1:
push dword ptr [ebp-92]
push 0
mov eax, dword ptr [ebp-88]
push dword ptr [eax]
push 0
push dword ptr [ebp-80]
call SYMBADDPROCPARAM
add esp, 28
mov dword ptr [ebp-4], eax
push dword ptr [ebp-76]
push dword ptr [ebp-4]
push dword ptr [ebp-80]
call SYMBMAKEPARAMOPTIONAL
add esp, 12
.Lt_0083:
inc dword ptr [ebp-72]
.Lt_0082:
mov eax, dword ptr [ebp-84]
cmp dword ptr [ebp-72], eax
jle .Lt_0085
.Lt_0084:
inc dword ptr [ebp-32]
mov eax, dword ptr [ebp-32]
imul eax, 20
mov ecx, dword ptr [ebp+8]
add ecx, eax
lea eax, [ecx+28]
mov dword ptr [ebp-84], eax
push dword ptr [ENV+216]
push 0
push 0
mov eax, dword ptr [ebp-84]
push dword ptr [eax]
push dword ptr [ebp-80]
call SYMBADDPROCPTR
add esp, 20
mov dword ptr [ebp-44], eax
mov eax, dword ptr [ebp-84]
cmp dword ptr [eax+8], 0
jne .Lt_0094
mov dword ptr [ebp-48], 0
.Lt_0094:
.Lt_0093:
mov dword ptr [ebp-56], 0
jmp .Lt_007B
.Lt_0095:
push 0
mov eax, dword ptr [ebp-40]
push dword ptr [eax]
mov eax, dword ptr [ebp-40]
mov ebx, dword ptr [eax+12]
mov ecx, ebx
sar ecx, 31
push ecx
push ebx
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-56], eax
jmp .Lt_007B
.Lt_007C:
mov eax, dword ptr [ebp-64]
add eax, 4294967282
cmp eax, 38
ja .Lt_0095
mov eax, dword ptr [ebp-64]
jmp dword ptr [.LT_0096+eax*4-56]
.LT_0096:
.int .Lt_007F
.int .Lt_007F
.int .Lt_007E
.int .Lt_0095
.int .Lt_0095
.int .Lt_0095
.int .Lt_0095
.int .Lt_0095
.int .Lt_0095
.int .Lt_0095
.int .Lt_0095
.int .Lt_0095
.int .Lt_0095
.int .Lt_0095
.int .Lt_0095
.int .Lt_0095
.int .Lt_0095
.int .Lt_0095
.int .Lt_0095
.int .Lt_0095
.int .Lt_0095
.int .Lt_0095
.int .Lt_0095
.int .Lt_0095
.int .Lt_0095
.int .Lt_0095
.int .Lt_0095
.int .Lt_0095
.int .Lt_0095
.int .Lt_0095
.int .Lt_0095
.int .Lt_0095
.int .Lt_0095
.int .Lt_0095
.int .Lt_0095
.int .Lt_0095
.int .Lt_0095
.int .Lt_0095
.int .Lt_0080
.Lt_007B:
jmp .Lt_0079
.Lt_007A:
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-56], 0
.Lt_0079:
mov eax, dword ptr [ebp-40]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-52], ebx
cmp dword ptr [ebp-52], -2147483648
jne .Lt_0098
mov dword ptr [ebp-52], 32
.Lt_0098:
.Lt_0097:
push dword ptr [ebp-48]
mov ebx, dword ptr [ebp-40]
push dword ptr [ebx+4]
mov ebx, dword ptr [ebp-40]
cmp dword ptr [ebx+4], 3
jne .Lt_0099
mov dword ptr [ebp-60], -1
jmp .Lt_00B2
.Lt_0099:
mov dword ptr [ebp-60], 0
.Lt_00B2:
push dword ptr [ebp-60]
push dword ptr [ebp-44]
push dword ptr [ebp-52]
push 0
push dword ptr [ebp-16]
call SYMBADDPROCPARAM
add esp, 28
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp-40]
cmp dword ptr [eax+16], 0
je .Lt_009C
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+8]
or ebx, 33554432
mov eax, ebx
mov ebx, dword ptr [ebp-4]
mov dword ptr [ebx+8], eax
.Lt_009C:
.Lt_009B:
push dword ptr [ebp-56]
push dword ptr [ebp-4]
push dword ptr [ebp-16]
call SYMBMAKEPARAMOPTIONAL
add esp, 12
.Lt_0075:
inc dword ptr [ebp-32]
.Lt_0074:
mov eax, dword ptr [ebp-36]
cmp dword ptr [ebp-32], eax
jle .Lt_0077
.Lt_0076:
mov dword ptr [ebp-20], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+20]
and ebx, 1
test ebx, ebx
je .Lt_009E
mov dword ptr [ebp-20], 1024
.Lt_009E:
.Lt_009D:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+20]
and eax, 64
test eax, eax
je .Lt_00A0
mov eax, dword ptr [ebp-20]
or eax, 268435456
mov ebx, eax
mov dword ptr [ebp-20], ebx
.Lt_00A0:
.Lt_009F:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx]
mov dword ptr [ebp-24], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-28], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+20]
and eax, 128
test eax, eax
je .Lt_00A2
cmp dword ptr [ENV+136], 3
jne .Lt_00A4
cmp dword ptr [ebp-28], 0
jne .Lt_00A6
push 0
push 0
push dword ptr [ebp-24]
push -1
push offset Lt_00B8
call fb_StrAssign
add esp, 20
mov eax, dword ptr [Lt_00B8]
mov dword ptr [ebp-28], eax
.Lt_00A6:
.Lt_00A5:
push 0
push -1
push 0
push dword ptr [ebp-24]
push 3
push offset Lt_00A7
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
lea eax, [ebp-40]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_00B9
call fb_StrAssign
add esp, 20
mov eax, dword ptr [Lt_00B9]
mov dword ptr [ebp-24], eax
.Lt_00A4:
.Lt_00A3:
.Lt_00A2:
.Lt_00A1:
cmp dword ptr [ebp-28], 0
jne .Lt_00AA
mov eax, dword ptr [ebp-24]
mov dword ptr [ebp-28], eax
.Lt_00AA:
.Lt_00A9:
push 20
push dword ptr [ebp-8]
push dword ptr [ebp-20]
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax+8]
push dword ptr [ebp-28]
push dword ptr [ebp-24]
push dword ptr [ebp-16]
call SYMBADDPROC
add esp, 32
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 0
je .Lt_00AC
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-16]
mov ecx, dword ptr [eax+16]
mov dword ptr [ebx+96], ecx
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ecx+20]
and ebx, 2
test ebx, ebx
je .Lt_00AE
mov ebx, dword ptr [ebp-16]
mov ecx, dword ptr [ebx+8]
or ecx, 64
mov ebx, ecx
mov ecx, dword ptr [ebp-16]
mov dword ptr [ecx+8], ebx
.Lt_00AE:
.Lt_00AD:
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebx+20]
and ecx, 2048
je .Lt_00B0
mov ecx, dword ptr [ebp-16]
mov ebx, dword ptr [ecx+8]
or ebx, 524288
mov ecx, ebx
mov ebx, dword ptr [ebp-16]
mov dword ptr [ebx+8], ecx
.Lt_00B0:
.Lt_00AF:
jmp .Lt_00AB
.Lt_00AC:
push 0
push 1
push 0
mov ecx, dword ptr [ebp+8]
push dword ptr [ecx]
push 4
call ERRREPORTEX
add esp, 20
.Lt_00AB:
.Lt_0072:
.Lt_0071:
add dword ptr [ebp+8], 348
.Lt_0060:
jmp .Lt_005E
.Lt_005F:
.Lt_005D:
pop ebx
mov esp, ebp
pop ebp
ret
.size RTLADDINTRINSICPROCS, .-RTLADDINTRINSICPROCS

.section .bss
.balign 4
	.lcomm	Lt_00B8,12
.balign 4
	.lcomm	Lt_00B9,12

.section .text
.balign 16

.globl RTLPROCLOOKUP
RTLPROCLOOKUP:
.type RTLPROCLOOKUP, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
mov dword ptr [ebp-4], 0
.Lt_00BA:
mov eax, dword ptr [ebp+12]
cmp dword ptr [RTLLOOKUPTB+eax*4], 0
jne .Lt_00BD
push 0
push 0
push dword ptr [ebp+8]
lea eax, [SYMB+98352]
push eax
call SYMBLOOKUPAT
add esp, 16
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_00BF
cmp dword ptr [ENV+136], 3
jne .Lt_00C1
push 0
push -1
push 0
push dword ptr [ebp+8]
push 3
push offset Lt_00A7
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
lea eax, [ebp-20]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_00C5
call fb_StrAssign
add esp, 20
mov eax, dword ptr [Lt_00C5]
mov dword ptr [ebp+8], eax
push 0
push 0
push dword ptr [ebp+8]
lea eax, [SYMB+98352]
push eax
call SYMBLOOKUPAT
add esp, 16
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_00C4
push 0
push 1
push 0
push dword ptr [ebp+8]
push 8
call ERRREPORTEX
add esp, 20
mov eax, dword ptr [ebp+12]
mov dword ptr [RTLLOOKUPTB+eax*4], 0
jmp .Lt_00C3
.Lt_00C4:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+12]
mov ecx, dword ptr [eax]
mov dword ptr [RTLLOOKUPTB+ebx*4], ecx
.Lt_00C3:
jmp .Lt_00C0
.Lt_00C1:
push 0
push 1
push 0
push dword ptr [ebp+8]
push 8
call ERRREPORTEX
add esp, 20
mov ecx, dword ptr [ebp+12]
mov dword ptr [RTLLOOKUPTB+ecx*4], 0
.Lt_00C0:
jmp .Lt_00BE
.Lt_00BF:
mov ecx, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ecx]
mov dword ptr [RTLLOOKUPTB+ebx*4], eax
.Lt_00BE:
.Lt_00BD:
.Lt_00BC:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [RTLLOOKUPTB+eax*4]
mov dword ptr [ebp-4], ebx
.Lt_00BB:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size RTLPROCLOOKUP, .-RTLPROCLOOKUP

.section .bss
.balign 4
	.lcomm	Lt_00C5,12

.section .text
.balign 16

.globl RTLOVLPROCCALL
RTLOVLPROCCALL:
.type RTLOVLPROCCALL, @function
push ebp
mov ebp, esp
sub esp, 40
push ebx
mov dword ptr [ebp-4], 0
.Lt_00C6:
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-24], 0
lea eax, [ebp-24]
add eax, 4
mov dword ptr [eax], 0
lea eax, [ebp-24]
add eax, 8
mov dword ptr [eax], 0
push 0
lea eax, [ebp-24]
push eax
lea eax, [CTX]
push eax
call SYMBALLOCOVLCALLARG
add esp, 12
mov dword ptr [ebp-28], eax
mov eax, dword ptr [ebp-28]
mov ebx, dword ptr [ebp+12]
mov dword ptr [eax], ebx
mov ebx, dword ptr [ebp-28]
mov dword ptr [ebx+4], 1
inc dword ptr [ebp-12]
cmp dword ptr [ebp+16], 0
je .Lt_00C9
push 0
lea ebx, [ebp-24]
push ebx
lea ebx, [CTX]
push ebx
call SYMBALLOCOVLCALLARG
add esp, 12
mov dword ptr [ebp-28], eax
mov eax, dword ptr [ebp-28]
mov ebx, dword ptr [ebp+16]
mov dword ptr [eax], ebx
mov ebx, dword ptr [ebp-28]
mov dword ptr [ebx+4], 1
inc dword ptr [ebp-12]
.Lt_00C9:
.Lt_00C8:
push 0
lea ebx, [ebp-8]
push ebx
push dword ptr [ebp-20]
push dword ptr [ebp-12]
push dword ptr [ebp+8]
call SYMBFINDCLOSESTOVLPROC
add esp, 20
mov dword ptr [ebp-32], eax
cmp dword ptr [ebp-32], 0
jne .Lt_00CB
lea eax, [ebp-24]
push eax
lea eax, [CTX]
push eax
call SYMBFREEOVLCALLARGS
add esp, 8
mov dword ptr [ebp-4], 0
jmp .Lt_00C7
.Lt_00CB:
.Lt_00CA:
push 0
push dword ptr [ebp-32]
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-36], eax
mov eax, dword ptr [ebp-20]
mov dword ptr [ebp-28], eax
.Lt_00CC:
cmp dword ptr [ebp-28], 0
je .Lt_00CD
mov eax, dword ptr [ebp-28]
mov ebx, dword ptr [eax+8]
mov dword ptr [ebp-40], ebx
mov ebx, dword ptr [ebp-28]
push dword ptr [ebx+4]
push -2147483648
mov ebx, dword ptr [ebp-28]
push dword ptr [ebx]
push dword ptr [ebp-36]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00CF
mov dword ptr [ebp-4], 0
jmp .Lt_00C7
.Lt_00CF:
.Lt_00CE:
push dword ptr [ebp-28]
lea eax, [CTX]
push eax
call LISTDELNODE
add esp, 8
mov eax, dword ptr [ebp-40]
mov dword ptr [ebp-28], eax
jmp .Lt_00CC
.Lt_00CD:
mov eax, dword ptr [ebp-36]
mov dword ptr [ebp-4], eax
.Lt_00C7:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size RTLOVLPROCCALL, .-RTLOVLPROCCALL
.balign 16

.globl RTLCALCEXPRLEN
RTLCALCEXPRLEN:
.type RTLCALCEXPRLEN, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_00D0:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 511
mov dword ptr [ebp-16], ebx
mov ebx, dword ptr [ebp-16]
mov dword ptr [ebp-20], ebx
jmp .Lt_00D3
.Lt_00D5:
push dword ptr [ebp-16]
push dword ptr [ebp+8]
call RTLCALCSTRLEN
add esp, 8
mov dword ptr [ebp-8], eax
mov dword ptr [ebp-4], edx
jmp .Lt_00D2
.Lt_00D6:
mov eax, dword ptr [ebp+8]
push dword ptr [eax+8]
push dword ptr [ebp-16]
call SYMBCALCLEN
add esp, 8
mov dword ptr [ebp-8], eax
mov dword ptr [ebp-4], edx
jmp .Lt_00D2
.Lt_00D3:
mov eax, dword ptr [ebp-20]
add eax, 4294967293
cmp eax, 14
ja .Lt_00D6
mov eax, dword ptr [ebp-20]
jmp dword ptr [.LT_00D7+eax*4-12]
.LT_00D7:
.int .Lt_00D5
.int .Lt_00D6
.int .Lt_00D6
.int .Lt_00D5
.int .Lt_00D6
.int .Lt_00D6
.int .Lt_00D6
.int .Lt_00D6
.int .Lt_00D6
.int .Lt_00D6
.int .Lt_00D6
.int .Lt_00D6
.int .Lt_00D6
.int .Lt_00D6
.int .Lt_00D5
.Lt_00D2:
.Lt_00D1:
mov eax, dword ptr [ebp-8]
mov edx, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size RTLCALCEXPRLEN, .-RTLCALCEXPRLEN
.balign 16

.globl RTLCALCSTRLEN
RTLCALCSTRLEN:
.type RTLCALCSTRLEN, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_00D8:
mov dword ptr [ebp-12], 0
mov eax, dword ptr [ebp+12]
and eax, 480
je .Lt_00DA
mov dword ptr [ebp-16], 22
jmp .Lt_00EC
.Lt_00DA:
mov eax, dword ptr [ebp+12]
and eax, 31
mov dword ptr [ebp-16], eax
.Lt_00EC:
mov eax, dword ptr [ebp-16]
mov dword ptr [ebp-20], eax
jmp .Lt_00DD
.Lt_00DF:
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
jmp .Lt_00DC
.Lt_00E0:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+12]
mov dword ptr [ebp-12], ebx
cmp dword ptr [ebp-12], 0
jne .Lt_00E2
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
jmp .Lt_00E1
.Lt_00E2:
mov ebx, dword ptr [ebp-12]
mov eax, dword ptr [ebx+24]
and eax, 511
mov ebx, dword ptr [ebp+12]
and ebx, 511
cmp eax, ebx
je .Lt_00E4
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
jmp .Lt_00E3
.Lt_00E4:
mov ebx, dword ptr [ebp-12]
mov ecx, dword ptr [ebx+36]
mov eax, dword ptr [ebx+40]
mov dword ptr [ebp-8], ecx
mov dword ptr [ebp-4], eax
.Lt_00E3:
.Lt_00E1:
jmp .Lt_00DC
.Lt_00E5:
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ecx+12]
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_00E7
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
jmp .Lt_00E6
.Lt_00E7:
mov eax, dword ptr [ebp-12]
mov ecx, dword ptr [eax+24]
and ecx, 511
mov eax, dword ptr [ebp+12]
and eax, 511
cmp ecx, eax
je .Lt_00E9
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
jmp .Lt_00E8
.Lt_00E9:
mov ecx, dword ptr [SYMB_DTYPETB+172]
mov eax, ecx
sar eax, 31
push eax
push ecx
mov ecx, dword ptr [ebp-12]
push dword ptr [ecx+40]
push dword ptr [ecx+36]
call __divdi3
add esp, 16
mov dword ptr [ebp-8], eax
mov dword ptr [ebp-4], edx
.Lt_00E8:
.Lt_00E6:
jmp .Lt_00DC
.Lt_00EA:
mov dword ptr [ebp-8], 4294967295
mov dword ptr [ebp-4], 4294967295
jmp .Lt_00DC
.Lt_00DD:
mov eax, dword ptr [ebp-20]
add eax, 4294967295
cmp eax, 16
ja .Lt_00EA
mov eax, dword ptr [ebp-20]
jmp dword ptr [.LT_00EB+eax*4-4]
.LT_00EB:
.int .Lt_00DF
.int .Lt_00DF
.int .Lt_00E0
.int .Lt_00EA
.int .Lt_00EA
.int .Lt_00E5
.int .Lt_00EA
.int .Lt_00EA
.int .Lt_00EA
.int .Lt_00EA
.int .Lt_00EA
.int .Lt_00EA
.int .Lt_00EA
.int .Lt_00EA
.int .Lt_00EA
.int .Lt_00EA
.int .Lt_00E0
.Lt_00DC:
.Lt_00D9:
mov eax, dword ptr [ebp-8]
mov edx, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size RTLCALCSTRLEN, .-RTLCALCSTRLEN
.balign 16
fb_ctor__rtl:
.type fb_ctor__rtl, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__rtl, .-fb_ctor__rtl
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
	#fbc-1.01.0/src/compiler/rtl.bas' compilation took 0.03137994289863855 secs

.section .rodata
.balign 4
Lt_0000:	.ascii	"\0"

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
.balign 4
	.lcomm	CTX,32
.balign 4
	.lcomm	RTLLOOKUPTB,1424

.section .data
.balign 4
Lt_0057:
.int RTLLOOKUPTB
.int RTLLOOKUPTB
.int 1424
.int 4
.int 1
.int 356
.int 0
.int 355

.section .rodata
.balign 4
Lt_00A7:	.ascii	"__\0"

.section .ctors, "aw", @progbits
.int fb_ctor__rtl
