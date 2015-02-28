	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/rtl-system.bas' compilation started at 14:16:38 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl RTLSYSTEMMODINIT
RTLSYSTEMMODINIT:
.type RTLSYSTEMMODINIT, @function
.Lt_00AD:
push offset FUNCDATA
call RTLADDINTRINSICPROCS
add esp, 4
.Lt_00AE:
ret
.size RTLSYSTEMMODINIT, .-RTLSYSTEMMODINIT
.balign 16

.globl RTLSYSTEMMODEND
RTLSYSTEMMODEND:
.type RTLSYSTEMMODEND, @function
.Lt_00AF:
.Lt_00B0:
ret
.size RTLSYSTEMMODEND, .-RTLSYSTEMMODEND
.balign 16

.globl RTLINITAPP
RTLINITAPP:
.type RTLINITAPP, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
mov dword ptr [ebp-4], 0
.Lt_00CD:
mov eax, dword ptr [ENV+96]
cmp eax, 2
setne al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-12], eax
cmp dword ptr [ENV+104], 0
jne .Lt_00D0
mov eax, dword ptr [ENV+108]
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 0
je .Lt_00D4
.Lt_00D5:
cmp dword ptr [ebp-16], 1
jne .Lt_00D3
.Lt_00D4:
cmp dword ptr [ENV+160], 0
je .Lt_00D7
call RTLPROFILECALL_MONSTARTUP
.Lt_00D7:
.Lt_00D6:
.Lt_00D3:
.Lt_00D1:
cmp dword ptr [ENV+108], 0
jne .Lt_00D9
push 0
push 138
push offset Lt_005A
call RTLPROCLOOKUP
add esp, 8
push eax
call ASTNEWCALL
add esp, 8
push eax
call ASTADD
add esp, 4
.Lt_00D9:
.Lt_00D8:
.Lt_00D0:
.Lt_00CF:
push 0
push 136
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
push -1
push -2147483648
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
push -1
push -2147483648
push 0
push 7
mov ebx, dword ptr [ENV+136]
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
push dword ptr [ebp-8]
call ASTADD
add esp, 4
mov eax, dword ptr [ebp-12]
and eax, dword ptr [ENV+148]
je .Lt_00DB
push 0
push 137
push offset Lt_0059
call RTLPROCLOOKUP
add esp, 8
push eax
call ASTNEWCALL
add esp, 8
push eax
call ASTADD
add esp, 4
call FBGETCPUFAMILY
test eax, eax
jne .Lt_00DD
call RTLX86CPUCHECK
.Lt_00DD:
.Lt_00DC:
.Lt_00DB:
.Lt_00DA:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_00CE:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size RTLINITAPP, .-RTLINITAPP
.balign 16

.globl RTLEXITAPP
RTLEXITAPP:
.type RTLEXITAPP, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_00DF:
mov dword ptr [ebp-4], 0
push 0
push 139
push offset Lt_005C
call RTLPROCLOOKUP
add esp, 8
push eax
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp+8], 0
jne .Lt_00E2
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp+8], eax
.Lt_00E2:
.Lt_00E1:
push -1
push -2147483648
push dword ptr [ebp+8]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00E4
jmp .Lt_00E0
.Lt_00E4:
.Lt_00E3:
push dword ptr [ebp-8]
call ASTADD
add esp, 4
mov dword ptr [ebp-4], -1
.Lt_00E0:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size RTLEXITAPP, .-RTLEXITAPP
.balign 16

.globl RTLATEXIT
RTLATEXIT:
.type RTLATEXIT, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_00EC:
mov dword ptr [ebp-4], 0
push 0
push 140
push offset Lt_005D
call RTLPROCLOOKUP
add esp, 8
push eax
call ASTNEWCALL
add esp, 8
mov dword ptr [Lt_00F0], eax
push -1
push -2147483648
push dword ptr [ebp+8]
push dword ptr [Lt_00F0]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00EF
jmp .Lt_00ED
.Lt_00EF:
.Lt_00EE:
mov eax, dword ptr [Lt_00F0]
mov dword ptr [ebp-4], eax
.Lt_00ED:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size RTLATEXIT, .-RTLATEXIT

.section .bss
.balign 4
	.lcomm	Lt_00F0,4

.section .text
.balign 16
fb_ctor__rtlzsystem:
.type fb_ctor__rtlzsystem, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__rtlzsystem, .-fb_ctor__rtlzsystem
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
RTLX86CPUCHECK:
.type RTLX86CPUCHECK, @function
push ebp
mov ebp, esp
sub esp, 72
push ebx
mov dword ptr [ebp-4], 0
.Lt_00B1:
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ENV+112]
mov dword ptr [ebp-24], eax
cmp dword ptr [ebp-24], 3
jle .Lt_00B4
mov dword ptr [ebp-24], 3
.Lt_00B4:
.Lt_00B3:
cmp dword ptr [ebp-24], 0
jne .Lt_00B6
.Lt_00B7:
push 0
push 4
push offset Lt_00B8
push -1
lea eax, [ebp-36]
push eax
call fb_StrAssign
add esp, 20
mov dword ptr [ebp-24], 3
jmp .Lt_00B5
.Lt_00B6:
cmp dword ptr [ebp-24], 1
jne .Lt_00B9
.Lt_00BA:
push 0
push 4
push offset Lt_00BB
push -1
lea eax, [ebp-36]
push eax
call fb_StrAssign
add esp, 20
mov dword ptr [ebp-24], 4
jmp .Lt_00B5
.Lt_00B9:
cmp dword ptr [ebp-24], 2
jne .Lt_00BC
.Lt_00BD:
push 0
push 4
push offset Lt_00BE
push -1
lea eax, [ebp-36]
push eax
call fb_StrAssign
add esp, 20
mov dword ptr [ebp-24], 5
jmp .Lt_00B5
.Lt_00BC:
push 0
push 4
push offset Lt_00C0
push -1
lea eax, [ebp-36]
push eax
call fb_StrAssign
add esp, 20
mov dword ptr [ebp-24], 6
.Lt_00BF:
.Lt_00B5:
push 0
push 135
push offset Lt_0057
call RTLPROCLOOKUP
add esp, 8
push eax
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-8], eax
push 1
push 0
push 0
push 8
push 0
push 28
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp-8]
push 42
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp-12], eax
push 4
push 0
call SYMBADDLABEL
add esp, 8
mov dword ptr [ebp-20], eax
push 0
push dword ptr [ebp-20]
push 0
push 8
mov ebx, dword ptr [ebp-24]
mov eax, ebx
sar eax, 31
push eax
push ebx
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp-12]
push 49
call ASTNEWBOP
add esp, 20
push eax
call ASTADD
add esp, 4
push -1
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
mov dword ptr [ebp-64], 0
push 0
push -1
push 9
push offset Lt_00C2
push -1
push -1
lea eax, [ebp-36]
push eax
push 34
push offset Lt_00C1
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
lea eax, [ebp-48]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
lea eax, [ebp-60]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-72]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-72]
call SYMBALLOCSTRCONST
add esp, 8
mov dword ptr [ebp-16], eax
lea eax, [ebp-72]
push eax
call fb_StrDelete
add esp, 4
push 0
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp-16]
call ASTNEWVAR
add esp, 20
push eax
push 0
push 0
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
push eax
call RTLPRINT
add esp, 20
push 0
push 139
push offset Lt_005C
call RTLPROCLOOKUP
add esp, 8
push eax
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-8], eax
push -1
push -2147483648
push 0
push 7
push 0
push 1
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00C7
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_00B2
.Lt_00C7:
.Lt_00C6:
push dword ptr [ebp-8]
call ASTADD
add esp, 4
push -1
push dword ptr [ebp-20]
call ASTNEWLABEL
add esp, 8
push eax
call ASTADD
add esp, 4
cmp dword ptr [ENV+116], 1
jne .Lt_00C9
push 0
push 135
push offset Lt_0057
call RTLPROCLOOKUP
add esp, 8
push eax
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-8], eax
push 1
push 0
push 0
push 8
push 0
push 100663296
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp-8]
push 34
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp-12], eax
push 4
push 0
call SYMBADDLABEL
add esp, 8
mov dword ptr [ebp-20], eax
push 0
push dword ptr [ebp-20]
push 0
push 8
push 0
push 100663296
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp-12]
push 45
call ASTNEWBOP
add esp, 20
push eax
call ASTADD
add esp, 4
push -1
push offset Lt_00CA
call SYMBALLOCSTRCONST
add esp, 8
mov dword ptr [ebp-16], eax
push 0
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp-16]
call ASTNEWVAR
add esp, 20
push eax
push 0
push 0
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
push eax
call RTLPRINT
add esp, 20
push 0
push 139
push offset Lt_005C
call RTLPROCLOOKUP
add esp, 8
push eax
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-8], eax
push -1
push -2147483648
push 0
push 7
push 0
push 1
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00CC
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_00B2
.Lt_00CC:
.Lt_00CB:
push dword ptr [ebp-8]
call ASTADD
add esp, 4
push -1
push dword ptr [ebp-20]
call ASTNEWLABEL
add esp, 8
push eax
call ASTADD
add esp, 4
.Lt_00C9:
.Lt_00C8:
mov dword ptr [ebp-4], -1
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
.Lt_00B2:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size RTLX86CPUCHECK, .-RTLX86CPUCHECK
.balign 16
HMULTITHREAD_CB:
.type HMULTITHREAD_CB, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_00E5:
mov dword ptr [ENV+192], -1
mov dword ptr [ebp-4], -1
.Lt_00E6:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size HMULTITHREAD_CB, .-HMULTITHREAD_CB
.balign 16
HTHREADCALL_CB:
.type HTHREADCALL_CB, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_00E7:
cmp dword ptr [Lt_00F1], 0
jne .Lt_00EA
mov dword ptr [Lt_00F1], -1
push offset Lt_00EB
call FBADDLIB
add esp, 4
.Lt_00EA:
.Lt_00E9:
push dword ptr [ebp+8]
call HMULTITHREAD_CB
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_00E8:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size HTHREADCALL_CB, .-HTHREADCALL_CB

.section .data
.balign 4
Lt_00F1:
.int 0
	#fbc-1.01.0/src/compiler/rtl-system.bas' compilation took 0.03133703023195267 secs

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
.int 11
.int 3
.long 0
.int 16384
.int 0
.skip 320,0
.int Lt_0058
.long 0
.int 0
.int -1
.long 0
.int 0
.int 3
.int 10
.int 1
.int 0
.skip 8,0
.int 67
.int 1
.int 0
.skip 8,0
.int 10
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
.int 0
.skip 320,0
.int Lt_005A
.int Lt_005B
.int 0
.int 3
.long 0
.int 0
.int 0
.skip 320,0
.int Lt_005C
.long 0
.int 0
.int -1
.long 0
.int 0
.int 1
.int 10
.int 1
.int 0
.skip 8,0
.skip 300,0
.int Lt_005D
.int Lt_005E
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
.int Lt_005F
.int Lt_0060
.int 16
.int -1
.long 0
.int 64
.int 1
.int 10
.int 1
.int -1
.int -1
.skip 4,0
.skip 300,0
.int Lt_0061
.int Lt_0062
.int 16
.int -1
.long 0
.int 128
.int 0
.skip 320,0
.int Lt_0063
.int Lt_0064
.int 16
.int -1
.long 0
.int 128
.int 0
.skip 320,0
.int Lt_0065
.int Lt_0066
.int 15
.int -1
.long 0
.int 0
.int 0
.skip 320,0
.int Lt_0067
.int Lt_0068
.int 16
.int -1
.long 0
.int 64
.int 0
.skip 320,0
.int Lt_0069
.int Lt_006A
.int 16
.int -1
.long 0
.int 64
.int 0
.skip 320,0
.int Lt_006B
.int Lt_006C
.int 10
.int -1
.long 0
.int 0
.int 1
.int 16
.int 2
.int -1
.int 0
.skip 4,0
.skip 300,0
.int Lt_006D
.int Lt_005C
.int 0
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
.int Lt_006E
.int Lt_005C
.int 0
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
.int Lt_006F
.int Lt_0070
.int 10
.int -1
.long 0
.int 0
.int 2
.int 16
.int 2
.int 0
.skip 8,0
.int 16
.int 2
.int -1
.int 0
.skip 4,0
.skip 280,0
.int Lt_0071
.int Lt_0072
.int 10
.int -1
.long 0
.int 0
.int 1
.int 16
.int 2
.int 0
.skip 8,0
.skip 300,0
.int Lt_0073
.int Lt_0074
.int 10
.int -1
.long 0
.int 128
.int 2
.int 16
.int 2
.int 0
.skip 8,0
.int 16
.int 2
.int 0
.skip 8,0
.skip 280,0
.int Lt_0075
.int Lt_0076
.int 16
.int -1
.long 0
.int 64
.int 1
.int 16
.int 2
.int 0
.skip 8,0
.skip 300,0
.int Lt_0077
.int Lt_0078
.int 10
.int -1
.long 0
.int 0
.int 1
.int 16
.int 2
.int 0
.skip 8,0
.skip 300,0
.int Lt_0079
.int Lt_007A
.int 0
.int -1
.long 0
.int 129
.int 1
.int 10
.int 1
.int -1
.int -1
.skip 4,0
.skip 300,0
.int Lt_0079
.int Lt_007B
.int 0
.int -1
.long 0
.int 257
.int 1
.int 10
.int 1
.int -1
.int -1
.skip 4,0
.skip 300,0
.int Lt_0079
.int Lt_007C
.int 10
.int -1
.long 0
.int 3
.int 2
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.skip 280,0
.int Lt_007D
.int Lt_007E
.int 16
.int -1
.long 0
.int 129
.int 1
.int 42
.int 1
.int -1
.int 0
.skip 4,0
.skip 300,0
.int Lt_007D
.int Lt_007F
.int 16
.int -1
.long 0
.int 129
.int 1
.int 44
.int 1
.int 0
.skip 8,0
.skip 300,0
.int Lt_007D
.int Lt_007E
.int 16
.int -1
.long 0
.int 129
.int 1
.int 10
.int 2
.int 0
.skip 8,0
.skip 300,0
.int Lt_007D
.int Lt_007F
.int 16
.int -1
.long 0
.int 129
.int 1
.int 12
.int 2
.int 0
.skip 8,0
.skip 300,0
.int Lt_007D
.int Lt_0080
.int 16
.int -1
.long 0
.int 129
.int 3
.int 16
.int 2
.int 0
.skip 8,0
.int 10
.int 1
.int -1
.int 33
.skip 4,0
.int 42
.int 1
.int -1
.int 0
.skip 4,0
.skip 260,0
.int Lt_007D
.int Lt_0081
.int 16
.int -1
.long 0
.int 129
.int 3
.int 16
.int 2
.int 0
.skip 8,0
.int 10
.int 1
.int -1
.int 33
.skip 4,0
.int 44
.int 1
.int 0
.skip 8,0
.skip 260,0
.int Lt_007D
.int Lt_0080
.int 16
.int -1
.long 0
.int 129
.int 3
.int 16
.int 2
.int 0
.skip 8,0
.int 10
.int 1
.int -1
.int 33
.skip 4,0
.int 10
.int 2
.int 0
.skip 8,0
.skip 260,0
.int Lt_007D
.int Lt_0081
.int 16
.int -1
.long 0
.int 129
.int 3
.int 16
.int 2
.int 0
.skip 8,0
.int 10
.int 1
.int -1
.int 33
.skip 4,0
.int 12
.int 2
.int 0
.skip 8,0
.skip 260,0
.int Lt_0082
.int Lt_0083
.int 10
.int -1
.long 0
.int 0
.int 1
.int 16
.int 2
.int 0
.skip 8,0
.skip 300,0
.int Lt_0084
.int Lt_0085
.int 10
.int -1
.long 0
.int 0
.int 1
.int 16
.int 2
.int 0
.skip 8,0
.skip 300,0
.int Lt_0086
.int Lt_0087
.int 32
.int -1
.int HMULTITHREAD_CB
.int 132
.int 5
.int 52
.int 1
.int -1
.int 1
.skip 4,0
.int 32
.int 1
.int 0
.skip 8,0
.int 0
.int 0
.int 0
.skip 8,0
.int 32
.int 1
.int -1
.int 0
.skip 4,0
.int 7
.int 1
.int -1
.int 0
.skip 4,0
.skip 220,0
.int Lt_0088
.int Lt_0089
.int 0
.int -1
.int HMULTITHREAD_CB
.int 132
.int 1
.int 32
.int 1
.int 0
.skip 8,0
.skip 300,0
.int Lt_008A
.long 0
.int 32
.int 3
.int HTHREADCALL_CB
.int 132
.int 5
.int 32
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 7
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int -2147483648
.int 4
.int 0
.skip 8,0
.skip 220,0
.int Lt_008B
.int Lt_008C
.int 32
.int -1
.long 0
.int 132
.int 0
.skip 320,0
.int Lt_008D
.int Lt_008E
.int 0
.int -1
.long 0
.int 132
.int 1
.int 32
.int 1
.int 0
.skip 8,0
.skip 300,0
.int Lt_008F
.int Lt_0090
.int 0
.int -1
.long 0
.int 132
.int 1
.int 32
.int 1
.int 0
.skip 8,0
.skip 300,0
.int Lt_0091
.int Lt_0092
.int 0
.int -1
.long 0
.int 132
.int 1
.int 32
.int 1
.int 0
.skip 8,0
.skip 300,0
.int Lt_0093
.int Lt_0094
.int 32
.int -1
.long 0
.int 132
.int 0
.skip 320,0
.int Lt_0095
.int Lt_0096
.int 0
.int -1
.long 0
.int 132
.int 1
.int 32
.int 1
.int 0
.skip 8,0
.skip 300,0
.int Lt_0097
.int Lt_0098
.int 0
.int -1
.long 0
.int 132
.int 1
.int 32
.int 1
.int 0
.skip 8,0
.skip 300,0
.int Lt_0099
.int Lt_009A
.int 0
.int -1
.long 0
.int 132
.int 1
.int 32
.int 1
.int 0
.skip 8,0
.skip 300,0
.int Lt_009B
.int Lt_009C
.int 0
.int -1
.long 0
.int 132
.int 2
.int 32
.int 1
.int 0
.skip 8,0
.int 32
.int 1
.int 0
.skip 8,0
.skip 280,0
.int Lt_009D
.int Lt_009E
.int 32
.int -1
.long 0
.int 128
.int 1
.int 16
.int 2
.int 0
.skip 8,0
.skip 300,0
.int Lt_009F
.int Lt_00A0
.int 32
.int -1
.long 0
.int 129
.int 2
.int 32
.int 1
.int 0
.skip 8,0
.int 16
.int 2
.int 0
.skip 8,0
.skip 280,0
.int Lt_009F
.int Lt_00A1
.int 32
.int -1
.long 0
.int 129
.int 2
.int 32
.int 1
.int 0
.skip 8,0
.int 4
.int 1
.int 0
.skip 8,0
.skip 280,0
.int Lt_00A2
.int Lt_00A3
.int 0
.int -1
.long 0
.int 128
.int 1
.int 32
.int 1
.int 0
.skip 8,0
.skip 300,0
.int Lt_00A4
.int Lt_00A5
.int 0
.int -1
.long 0
.int 0
.int 0
.skip 320,0
.int Lt_00A6
.int Lt_00A7
.int 10
.int -1
.long 0
.int 0
.int 1
.int 16
.int 2
.int 0
.skip 8,0
.skip 300,0
.int Lt_00A8
.int Lt_00A9
.int 10
.int -1
.long 0
.int 0
.int 1
.int 16
.int 2
.int 0
.skip 8,0
.skip 300,0
.int Lt_00AA
.int Lt_00AB
.int 10
.int -1
.long 0
.int 0
.int 1
.int 16
.int 2
.int 0
.skip 8,0
.skip 300,0
.long 0
.skip 344,0

.section .rodata
.balign 4
Lt_0057:	.ascii	"fb_CpuDetect\0"
.balign 4
Lt_0058:	.ascii	"fb_Init\0"
.balign 4
Lt_0059:	.ascii	"fb_InitSignals\0"
.balign 4
Lt_005A:	.ascii	"fb___main\0"
.balign 4
Lt_005B:	.ascii	"__main\0"
.balign 4
Lt_005C:	.ascii	"fb_End\0"
.balign 4
Lt_005D:	.ascii	"fb_atexit\0"
.balign 4
Lt_005E:	.ascii	"atexit\0"
.balign 4
Lt_005F:	.ascii	"command\0"
.balign 4
Lt_0060:	.ascii	"fb_Command\0"
.balign 4
Lt_0061:	.ascii	"curdir\0"
.balign 4
Lt_0062:	.ascii	"fb_CurDir\0"
.balign 4
Lt_0063:	.ascii	"exepath\0"
.balign 4
Lt_0064:	.ascii	"fb_ExePath\0"
.balign 4
Lt_0065:	.ascii	"timer\0"
.balign 4
Lt_0066:	.ascii	"fb_Timer\0"
.balign 4
Lt_0067:	.ascii	"time\0"
.balign 4
Lt_0068:	.ascii	"fb_Time\0"
.balign 4
Lt_0069:	.ascii	"date\0"
.balign 4
Lt_006A:	.ascii	"fb_Date\0"
.balign 4
Lt_006B:	.ascii	"shell\0"
.balign 4
Lt_006C:	.ascii	"fb_Shell\0"
.balign 4
Lt_006D:	.ascii	"system\0"
.balign 4
Lt_006E:	.ascii	"stop\0"
.balign 4
Lt_006F:	.ascii	"run\0"
.balign 4
Lt_0070:	.ascii	"fb_Run\0"
.balign 4
Lt_0071:	.ascii	"chain\0"
.balign 4
Lt_0072:	.ascii	"fb_Chain\0"
.balign 4
Lt_0073:	.ascii	"exec\0"
.balign 4
Lt_0074:	.ascii	"fb_Exec\0"
.balign 4
Lt_0075:	.ascii	"environ\0"
.balign 4
Lt_0076:	.ascii	"fb_GetEnviron\0"
.balign 4
Lt_0077:	.ascii	"setenviron\0"
.balign 4
Lt_0078:	.ascii	"fb_SetEnviron\0"
.balign 4
Lt_0079:	.ascii	"sleep\0"
.balign 4
Lt_007A:	.ascii	"fb_Sleep\0"
.balign 4
Lt_007B:	.ascii	"fb_SleepQB\0"
.balign 4
Lt_007C:	.ascii	"fb_SleepEx\0"
.balign 4
Lt_007D:	.ascii	"dir\0"
.balign 4
Lt_007E:	.ascii	"fb_DirNext\0"
.balign 4
Lt_007F:	.ascii	"fb_DirNext64\0"
.balign 4
Lt_0080:	.ascii	"fb_Dir\0"
.balign 4
Lt_0081:	.ascii	"fb_Dir64\0"
.balign 4
Lt_0082:	.ascii	"settime\0"
.balign 4
Lt_0083:	.ascii	"fb_SetTime\0"
.balign 4
Lt_0084:	.ascii	"setdate\0"
.balign 4
Lt_0085:	.ascii	"fb_SetDate\0"
.balign 4
Lt_0086:	.ascii	"threadcreate\0"
.balign 4
Lt_0087:	.ascii	"fb_ThreadCreate\0"
.balign 4
Lt_0088:	.ascii	"threadwait\0"
.balign 4
Lt_0089:	.ascii	"fb_ThreadWait\0"
.balign 4
Lt_008A:	.ascii	"fb_ThreadCall\0"
.balign 4
Lt_008B:	.ascii	"mutexcreate\0"
.balign 4
Lt_008C:	.ascii	"fb_MutexCreate\0"
.balign 4
Lt_008D:	.ascii	"mutexdestroy\0"
.balign 4
Lt_008E:	.ascii	"fb_MutexDestroy\0"
.balign 4
Lt_008F:	.ascii	"mutexlock\0"
.balign 4
Lt_0090:	.ascii	"fb_MutexLock\0"
.balign 4
Lt_0091:	.ascii	"mutexunlock\0"
.balign 4
Lt_0092:	.ascii	"fb_MutexUnlock\0"
.balign 4
Lt_0093:	.ascii	"condcreate\0"
.balign 4
Lt_0094:	.ascii	"fb_CondCreate\0"
.balign 4
Lt_0095:	.ascii	"conddestroy\0"
.balign 4
Lt_0096:	.ascii	"fb_CondDestroy\0"
.balign 4
Lt_0097:	.ascii	"condsignal\0"
.balign 4
Lt_0098:	.ascii	"fb_CondSignal\0"
.balign 4
Lt_0099:	.ascii	"condbroadcast\0"
.balign 4
Lt_009A:	.ascii	"fb_CondBroadcast\0"
.balign 4
Lt_009B:	.ascii	"condwait\0"
.balign 4
Lt_009C:	.ascii	"fb_CondWait\0"
.balign 4
Lt_009D:	.ascii	"dylibload\0"
.balign 4
Lt_009E:	.ascii	"fb_DylibLoad\0"
.balign 4
Lt_009F:	.ascii	"dylibsymbol\0"
.balign 4
Lt_00A0:	.ascii	"fb_DylibSymbol\0"
.balign 4
Lt_00A1:	.ascii	"fb_DylibSymbolByOrd\0"
.balign 4
Lt_00A2:	.ascii	"dylibfree\0"
.balign 4
Lt_00A3:	.ascii	"fb_DylibFree\0"
.balign 4
Lt_00A4:	.ascii	"beep\0"
.balign 4
Lt_00A5:	.ascii	"fb_Beep\0"
.balign 4
Lt_00A6:	.ascii	"mkdir\0"
.balign 4
Lt_00A7:	.ascii	"fb_MkDir\0"
.balign 4
Lt_00A8:	.ascii	"rmdir\0"
.balign 4
Lt_00A9:	.ascii	"fb_RmDir\0"
.balign 4
Lt_00AA:	.ascii	"chdir\0"
.balign 4
Lt_00AB:	.ascii	"fb_ChDir\0"
.balign 4
Lt_00B8:	.ascii	"386\0"
.balign 4
Lt_00BB:	.ascii	"486\0"
.balign 4
Lt_00BE:	.ascii	"586\0"
.balign 4
Lt_00C0:	.ascii	"686\0"
.balign 4
Lt_00C1:	.ascii	"This program requires at least a \0"
.balign 4
Lt_00C2:	.ascii	" to run.\0"
.balign 4
Lt_00CA:	.ascii	"This program requires SSE and SSE2 instructions to run.\0"
.balign 4
Lt_00EB:	.ascii	"ffi\0"

.section .ctors, "aw", @progbits
.int fb_ctor__rtlzsystem
