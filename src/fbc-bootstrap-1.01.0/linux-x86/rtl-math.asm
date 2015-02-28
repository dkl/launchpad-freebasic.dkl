	.intel_syntax noprefix

	#FreeBASIC-1.01.0-source/src/compiler/rtl-math.bas' compilation started at 16:30:07 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl RTLMATHMODINIT
RTLMATHMODINIT:
.type RTLMATHMODINIT, @function
.Lt_0087:
push offset FUNCDATA
call RTLADDINTRINSICPROCS
add esp, 4
.Lt_0088:
ret
.size RTLMATHMODINIT, .-RTLMATHMODINIT
.balign 16

.globl RTLMATHMODEND
RTLMATHMODEND:
.type RTLMATHMODEND, @function
.Lt_0089:
.Lt_008A:
ret
.size RTLMATHMODEND, .-RTLMATHMODEND
.balign 16

.globl RTLMATHPOW
RTLMATHPOW:
.type RTLMATHPOW, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_008B:
mov dword ptr [ebp-4], 0
push 0
push 154
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
jne .Lt_008E
jmp .Lt_008C
.Lt_008E:
.Lt_008D:
push -1
push -2147483648
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0090
jmp .Lt_008C
.Lt_0090:
.Lt_008F:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_008C:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size RTLMATHPOW, .-RTLMATHPOW
.balign 16

.globl RTLMATHLONGINTDIV
RTLMATHLONGINTDIV:
.type RTLMATHLONGINTDIV, @function
push ebp
mov ebp, esp
sub esp, 16
mov dword ptr [ebp-4], 0
.Lt_0091:
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+8]
and eax, 480
je .Lt_0093
mov dword ptr [ebp-16], 22
jmp .Lt_009B
.Lt_0093:
mov eax, dword ptr [ebp+8]
and eax, 31
mov dword ptr [ebp-16], eax
.Lt_009B:
cmp dword ptr [ebp-16], 12
jne .Lt_0096
push 112
push offset Lt_0057
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_0095
.Lt_0096:
push 113
push offset Lt_0059
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
.Lt_0095:
push 0
push dword ptr [ebp-12]
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-8], eax
push -1
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0098
jmp .Lt_0092
.Lt_0098:
.Lt_0097:
push -1
push dword ptr [ebp+24]
push dword ptr [ebp+20]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_009A
jmp .Lt_0092
.Lt_009A:
.Lt_0099:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0092:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size RTLMATHLONGINTDIV, .-RTLMATHLONGINTDIV
.balign 16

.globl RTLMATHLONGINTMOD
RTLMATHLONGINTMOD:
.type RTLMATHLONGINTMOD, @function
push ebp
mov ebp, esp
sub esp, 16
mov dword ptr [ebp-4], 0
.Lt_009C:
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+8]
and eax, 480
je .Lt_009E
mov dword ptr [ebp-16], 22
jmp .Lt_00A6
.Lt_009E:
mov eax, dword ptr [ebp+8]
and eax, 31
mov dword ptr [ebp-16], eax
.Lt_00A6:
cmp dword ptr [ebp-16], 12
jne .Lt_00A1
push 114
push offset Lt_005B
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_00A0
.Lt_00A1:
push 115
push offset Lt_005D
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
.Lt_00A0:
push 0
push dword ptr [ebp-12]
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-8], eax
push -1
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00A3
jmp .Lt_009D
.Lt_00A3:
.Lt_00A2:
push -1
push dword ptr [ebp+24]
push dword ptr [ebp+20]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00A5
jmp .Lt_009D
.Lt_00A5:
.Lt_00A4:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_009D:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size RTLMATHLONGINTMOD, .-RTLMATHLONGINTMOD
.balign 16

.globl RTLMATHFP2ULONGINT
RTLMATHFP2ULONGINT:
.type RTLMATHFP2ULONGINT, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_00A7:
mov dword ptr [ebp-4], 0
push 0
push 116
push offset Lt_005F
call RTLPROCLOOKUP
add esp, 8
push eax
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-8], eax
push -1
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00AA
jmp .Lt_00A8
.Lt_00AA:
.Lt_00A9:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_00A8:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size RTLMATHFP2ULONGINT, .-RTLMATHFP2ULONGINT
.balign 16

.globl RTLMATHUOP
RTLMATHUOP:
.type RTLMATHUOP, @function
push ebp
mov ebp, esp
sub esp, 12
mov dword ptr [ebp-4], 0
.Lt_00AB:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-12], eax
jmp .Lt_00AE
.Lt_00B0:
push 330
push offset Lt_0078
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-8], eax
jmp .Lt_00AD
.Lt_00B1:
push 335
push offset Lt_0073
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-8], eax
jmp .Lt_00AD
.Lt_00B2:
push 336
push offset Lt_007D
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-8], eax
jmp .Lt_00AD
.Lt_00B3:
push 337
push offset Lt_0080
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-8], eax
jmp .Lt_00AD
.Lt_00B4:
push 331
push offset Lt_0067
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-8], eax
jmp .Lt_00AD
.Lt_00B5:
push 332
push offset Lt_006A
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-8], eax
jmp .Lt_00AD
.Lt_00B6:
push 333
push offset Lt_006D
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-8], eax
jmp .Lt_00AD
.Lt_00B7:
push 334
push offset Lt_0070
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-8], eax
jmp .Lt_00AD
.Lt_00B8:
jmp .Lt_00AC
jmp .Lt_00AD
.Lt_00AE:
mov eax, dword ptr [ebp-12]
add eax, 4294967240
cmp eax, 16
ja .Lt_00B8
mov eax, dword ptr [ebp-12]
jmp dword ptr [.LT_00B9+eax*4-224]
.LT_00B9:
.int .Lt_00B1
.int .Lt_00B0
.int .Lt_00B8
.int .Lt_00B4
.int .Lt_00B8
.int .Lt_00B5
.int .Lt_00B6
.int .Lt_00B7
.int .Lt_00B8
.int .Lt_00B8
.int .Lt_00B8
.int .Lt_00B8
.int .Lt_00B8
.int .Lt_00B8
.int .Lt_00B8
.int .Lt_00B2
.int .Lt_00B3
.Lt_00AD:
push 0
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call RTLOVLPROCCALL
add esp, 12
mov dword ptr [ebp-4], eax
.Lt_00AC:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size RTLMATHUOP, .-RTLMATHUOP
.balign 16

.globl RTLMATHBOP
RTLMATHBOP:
.type RTLMATHBOP, @function
push ebp
mov ebp, esp
sub esp, 12
mov dword ptr [ebp-4], 0
.Lt_00BA:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-12], eax
jmp .Lt_00BD
.Lt_00BF:
push 338
push offset Lt_0083
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-8], eax
jmp .Lt_00BC
.Lt_00C0:
jmp .Lt_00BB
jmp .Lt_00BC
.Lt_00BD:
mov eax, dword ptr [ebp-12]
add eax, 4294967232
test eax, eax
ja .Lt_00C0
mov eax, dword ptr [ebp-12]
jmp dword ptr [.LT_00C1+eax*4-256]
.LT_00C1:
.int .Lt_00BF
.Lt_00BC:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call RTLOVLPROCCALL
add esp, 12
mov dword ptr [ebp-4], eax
.Lt_00BB:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size RTLMATHBOP, .-RTLMATHBOP
.balign 16
fb_ctor__rtlzmath:
.type fb_ctor__rtlzmath, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__rtlzmath, .-fb_ctor__rtlzmath
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
HRNDCALLBACK:
.type HRNDCALLBACK, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_00C2:
cmp dword ptr [Lt_00CC], 0
jne .Lt_00C5
mov dword ptr [Lt_00CC], -1
mov eax, dword ptr [ENV+108]
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
je .Lt_00C9
.Lt_00CA:
cmp dword ptr [ebp-8], 1
jne .Lt_00C8
.Lt_00C9:
push offset Lt_00CB
call FBADDLIB
add esp, 4
.Lt_00C8:
.Lt_00C6:
.Lt_00C5:
.Lt_00C4:
mov dword ptr [ebp-4], -1
.Lt_00C3:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size HRNDCALLBACK, .-HRNDCALLBACK

.section .data
.balign 4
Lt_00CC:
.int 0
	#FreeBASIC-1.01.0-source/src/compiler/rtl-math.bas' compilation took 0.04163998609874398 secs

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
.int Lt_0058
.int 12
.int 3
.long 0
.int 0
.int 2
.int 12
.int 1
.int 0
.skip 8,0
.int 12
.int 1
.int 0
.skip 8,0
.skip 280,0
.int Lt_0059
.int Lt_005A
.int 13
.int 3
.long 0
.int 0
.int 2
.int 13
.int 1
.int 0
.skip 8,0
.int 13
.int 1
.int 0
.skip 8,0
.skip 280,0
.int Lt_005B
.int Lt_005C
.int 12
.int 3
.long 0
.int 0
.int 2
.int 12
.int 1
.int 0
.skip 8,0
.int 12
.int 1
.int 0
.skip 8,0
.skip 280,0
.int Lt_005D
.int Lt_005E
.int 13
.int 3
.long 0
.int 0
.int 2
.int 13
.int 1
.int 0
.skip 8,0
.int 13
.int 1
.int 0
.skip 8,0
.skip 280,0
.int Lt_005F
.int Lt_0060
.int 13
.int 3
.long 0
.int 0
.int 1
.int 15
.int 1
.int 0
.skip 8,0
.skip 300,0
.int Lt_0061
.int Lt_0062
.int 15
.int 3
.long 0
.int 0
.int 2
.int 15
.int 1
.int 0
.skip 8,0
.int 15
.int 1
.int 0
.skip 8,0
.skip 280,0
.int Lt_0063
.int Lt_0064
.int 0
.int -1
.int HRNDCALLBACK
.int 0
.int 2
.int 15
.int 1
.int -1
.int -1
.skip 4,0
.int 10
.int 1
.int -1
.int 0
.skip 4,0
.skip 280,0
.int Lt_0065
.int Lt_0066
.int 15
.int -1
.int HRNDCALLBACK
.int 0
.int 1
.int 14
.int 1
.int -1
.int 1
.skip 4,0
.skip 300,0
.int Lt_0067
.int Lt_0068
.int 14
.int 3
.long 0
.int 1
.int 1
.int 14
.int 1
.int 0
.skip 8,0
.skip 300,0
.int Lt_0067
.int Lt_0069
.int 15
.int 3
.long 0
.int 1
.int 1
.int 15
.int 1
.int 0
.skip 8,0
.skip 300,0
.int Lt_006A
.int Lt_006B
.int 14
.int 3
.long 0
.int 1
.int 1
.int 14
.int 1
.int 0
.skip 8,0
.skip 300,0
.int Lt_006A
.int Lt_006C
.int 15
.int 3
.long 0
.int 1
.int 1
.int 15
.int 1
.int 0
.skip 8,0
.skip 300,0
.int Lt_006D
.int Lt_006E
.int 14
.int 3
.long 0
.int 1
.int 1
.int 14
.int 1
.int 0
.skip 8,0
.skip 300,0
.int Lt_006D
.int Lt_006F
.int 15
.int 3
.long 0
.int 1
.int 1
.int 15
.int 1
.int 0
.skip 8,0
.skip 300,0
.int Lt_0070
.int Lt_0071
.int 14
.int 3
.long 0
.int 1
.int 1
.int 14
.int 1
.int 0
.skip 8,0
.skip 300,0
.int Lt_0070
.int Lt_0072
.int 15
.int 3
.long 0
.int 1
.int 1
.int 15
.int 1
.int 0
.skip 8,0
.skip 300,0
.int Lt_0073
.int Lt_0074
.int 10
.int 3
.long 0
.int 1
.int 1
.int 10
.int 1
.int 0
.skip 8,0
.skip 300,0
.int Lt_0073
.int Lt_0075
.int 12
.int 3
.long 0
.int 1
.int 1
.int 12
.int 1
.int 0
.skip 8,0
.skip 300,0
.int Lt_0073
.int Lt_0076
.int 14
.int 3
.long 0
.int 1
.int 1
.int 14
.int 1
.int 0
.skip 8,0
.skip 300,0
.int Lt_0073
.int Lt_0077
.int 15
.int 3
.long 0
.int 1
.int 1
.int 15
.int 1
.int 0
.skip 8,0
.skip 300,0
.int Lt_0078
.int Lt_0079
.int 10
.int -1
.long 0
.int 1
.int 1
.int 10
.int 1
.int 0
.skip 8,0
.skip 300,0
.int Lt_0078
.int Lt_007A
.int 10
.int -1
.long 0
.int 1
.int 1
.int 12
.int 1
.int 0
.skip 8,0
.skip 300,0
.int Lt_0078
.int Lt_007B
.int 10
.int -1
.long 0
.int 1
.int 1
.int 14
.int 1
.int 0
.skip 8,0
.skip 300,0
.int Lt_0078
.int Lt_007C
.int 10
.int -1
.long 0
.int 1
.int 1
.int 15
.int 1
.int 0
.skip 8,0
.skip 300,0
.int Lt_007D
.int Lt_007E
.int 14
.int -1
.long 0
.int 1
.int 1
.int 14
.int 1
.int 0
.skip 8,0
.skip 300,0
.int Lt_007D
.int Lt_007F
.int 15
.int -1
.long 0
.int 1
.int 1
.int 15
.int 1
.int 0
.skip 8,0
.skip 300,0
.int Lt_0080
.int Lt_0081
.int 14
.int -1
.long 0
.int 1
.int 1
.int 14
.int 1
.int 0
.skip 8,0
.skip 300,0
.int Lt_0080
.int Lt_0082
.int 15
.int -1
.long 0
.int 1
.int 1
.int 15
.int 1
.int 0
.skip 8,0
.skip 300,0
.int Lt_0083
.int Lt_0084
.int 14
.int 3
.long 0
.int 1
.int 2
.int 14
.int 1
.int 0
.skip 8,0
.int 14
.int 1
.int 0
.skip 8,0
.skip 280,0
.int Lt_0083
.int Lt_0085
.int 15
.int 3
.long 0
.int 1
.int 2
.int 15
.int 1
.int 0
.skip 8,0
.int 15
.int 1
.int 0
.skip 8,0
.skip 280,0
.long 0
.skip 344,0

.section .rodata
.balign 4
Lt_0057:	.ascii	"fb___divdi3\0"
.balign 4
Lt_0058:	.ascii	"__divdi3\0"
.balign 4
Lt_0059:	.ascii	"fb___udivdi3\0"
.balign 4
Lt_005A:	.ascii	"__udivdi3\0"
.balign 4
Lt_005B:	.ascii	"fb___moddi3\0"
.balign 4
Lt_005C:	.ascii	"__moddi3\0"
.balign 4
Lt_005D:	.ascii	"fb___umoddi3\0"
.balign 4
Lt_005E:	.ascii	"__umoddi3\0"
.balign 4
Lt_005F:	.ascii	"fb___fixunsdfdi\0"
.balign 4
Lt_0060:	.ascii	"__fixunsdfdi\0"
.balign 4
Lt_0061:	.ascii	"fb_Pow\0"
.balign 4
Lt_0062:	.ascii	"pow\0"
.balign 4
Lt_0063:	.ascii	"randomize\0"
.balign 4
Lt_0064:	.ascii	"fb_Randomize\0"
.balign 4
Lt_0065:	.ascii	"rnd\0"
.balign 4
Lt_0066:	.ascii	"fb_Rnd\0"
.balign 4
Lt_0067:	.ascii	"{asin}\0"
.balign 4
Lt_0068:	.ascii	"asinf\0"
.balign 4
Lt_0069:	.ascii	"asin\0"
.balign 4
Lt_006A:	.ascii	"{acos}\0"
.balign 4
Lt_006B:	.ascii	"acosf\0"
.balign 4
Lt_006C:	.ascii	"acos\0"
.balign 4
Lt_006D:	.ascii	"{tan}\0"
.balign 4
Lt_006E:	.ascii	"tanf\0"
.balign 4
Lt_006F:	.ascii	"tan\0"
.balign 4
Lt_0070:	.ascii	"{atan}\0"
.balign 4
Lt_0071:	.ascii	"atanf\0"
.balign 4
Lt_0072:	.ascii	"atan\0"
.balign 4
Lt_0073:	.ascii	"{abs}\0"
.balign 4
Lt_0074:	.ascii	"abs\0"
.balign 4
Lt_0075:	.ascii	"llabs\0"
.balign 4
Lt_0076:	.ascii	"fabsf\0"
.balign 4
Lt_0077:	.ascii	"fabs\0"
.balign 4
Lt_0078:	.ascii	"{sgn}\0"
.balign 4
Lt_0079:	.ascii	"fb_SGNi\0"
.balign 4
Lt_007A:	.ascii	"fb_SGNl\0"
.balign 4
Lt_007B:	.ascii	"fb_SGNSingle\0"
.balign 4
Lt_007C:	.ascii	"fb_SGNDouble\0"
.balign 4
Lt_007D:	.ascii	"{fix}\0"
.balign 4
Lt_007E:	.ascii	"fb_FIXSingle\0"
.balign 4
Lt_007F:	.ascii	"fb_FIXDouble\0"
.balign 4
Lt_0080:	.ascii	"{frac}\0"
.balign 4
Lt_0081:	.ascii	"fb_FRACf\0"
.balign 4
Lt_0082:	.ascii	"fb_FRACd\0"
.balign 4
Lt_0083:	.ascii	"{atan2}\0"
.balign 4
Lt_0084:	.ascii	"atan2f\0"
.balign 4
Lt_0085:	.ascii	"atan2\0"
.balign 4
Lt_00CB:	.ascii	"advapi32\0"

.section .ctors, "aw", @progbits
.int fb_ctor__rtlzmath
