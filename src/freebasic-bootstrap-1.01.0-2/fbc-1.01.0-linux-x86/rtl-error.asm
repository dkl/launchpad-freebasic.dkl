	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/rtl-error.bas' compilation started at 14:16:38 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl RTLERRORMODINIT
RTLERRORMODINIT:
.type RTLERRORMODINIT, @function
.Lt_0074:
push offset FUNCDATA
call RTLADDINTRINSICPROCS
add esp, 4
.Lt_0075:
ret
.size RTLERRORMODINIT, .-RTLERRORMODINIT
.balign 16

.globl RTLERRORMODEND
RTLERRORMODEND:
.type RTLERRORMODEND, @function
.Lt_0076:
.Lt_0077:
ret
.size RTLERRORMODEND, .-RTLERRORMODEND
.balign 16

.globl RTLERRORCHECK
RTLERRORCHECK:
.type RTLERRORCHECK, @function
push ebp
mov ebp, esp
sub esp, 16
mov dword ptr [ebp-4], 0
.Lt_007E:
mov dword ptr [ebp-16], 0
cmp dword ptr [ENV+152], 0
je .Lt_0081
push 4
push 0
call SYMBADDLABEL
add esp, 8
mov dword ptr [ebp-12], eax
push -1
push -1
push dword ptr [ebp-12]
call ASTNEWLABEL
add esp, 8
push eax
push dword ptr [ebp-16]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-16], eax
jmp .Lt_0080
.Lt_0081:
mov dword ptr [ebp-12], 0
.Lt_0080:
cmp dword ptr [ENV+148], 0
je .Lt_0083
push 4
push 0
call SYMBADDLABEL
add esp, 8
mov dword ptr [ebp-8], eax
push -1
push 0
push dword ptr [ebp-8]
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp+8]
push 45
call ASTNEWBOP
add esp, 20
push eax
push dword ptr [ebp-16]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-16], eax
push -1
push dword ptr [ebp-8]
push dword ptr [ebp-12]
call HERRORTHROW
add esp, 8
push eax
push 0
push 103
call ASTNEWBRANCH
add esp, 12
push eax
push dword ptr [ebp-16]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-16], eax
push -1
push -1
push dword ptr [ebp-8]
call ASTNEWLABEL
add esp, 8
push eax
push dword ptr [ebp-16]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-16], eax
jmp .Lt_0082
.Lt_0083:
push -1
push dword ptr [ebp+8]
push dword ptr [ebp-16]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-16], eax
.Lt_0082:
mov eax, dword ptr [ebp-16]
mov dword ptr [ebp-4], eax
.Lt_007F:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size RTLERRORCHECK, .-RTLERRORCHECK
.balign 16

.globl RTLERRORTHROW
RTLERRORTHROW:
.type RTLERRORTHROW, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
.Lt_0084:
push 0
push 282
push offset Lt_0061
call RTLPROCLOOKUP
add esp, 8
push eax
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-4], eax
push 4
push 0
call SYMBADDLABEL
add esp, 8
mov dword ptr [ebp-16], eax
push -1
push dword ptr [ebp-16]
call ASTNEWLABEL
add esp, 8
push eax
call ASTADD
add esp, 4
push 4
push 0
call SYMBADDLABEL
add esp, 8
mov dword ptr [ebp-12], eax
push -1
push -2147483648
push dword ptr [ebp+8]
push dword ptr [ebp-4]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0087
jmp .Lt_0085
.Lt_0087:
.Lt_0086:
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
push dword ptr [ebp-4]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0089
jmp .Lt_0085
.Lt_0089:
.Lt_0088:
push -1
push -2147483648
push dword ptr [ebp+16]
call ASTNEWCONSTSTR
add esp, 4
push eax
push dword ptr [ebp-4]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_008B
jmp .Lt_0085
.Lt_008B:
.Lt_008A:
cmp dword ptr [ENV+152], 0
je .Lt_008D
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp-16]
call ASTNEWVAR
add esp, 20
push eax
call ASTNEWADDROF
add esp, 4
mov dword ptr [ebp-8], eax
jmp .Lt_008C
.Lt_008D:
push 0
push 8
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-8], eax
.Lt_008C:
push -1
push -2147483648
push dword ptr [ebp-8]
push dword ptr [ebp-4]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_008F
jmp .Lt_0085
.Lt_008F:
.Lt_008E:
cmp dword ptr [ENV+152], 0
je .Lt_0091
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp-12]
call ASTNEWVAR
add esp, 20
push eax
call ASTNEWADDROF
add esp, 4
mov dword ptr [ebp-8], eax
jmp .Lt_0090
.Lt_0091:
push 0
push 8
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-8], eax
.Lt_0090:
push -1
push -2147483648
push dword ptr [ebp-8]
push dword ptr [ebp-4]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0093
jmp .Lt_0085
.Lt_0093:
.Lt_0092:
push dword ptr [ebp-4]
push 0
push 103
call ASTNEWBRANCH
add esp, 12
push eax
call ASTADD
add esp, 4
push -1
push dword ptr [ebp-12]
call ASTNEWLABEL
add esp, 8
push eax
call ASTADD
add esp, 4
.Lt_0085:
pop ebx
mov esp, ebp
pop ebp
ret
.size RTLERRORTHROW, .-RTLERRORTHROW
.balign 16

.globl RTLERRORSETHANDLER
RTLERRORSETHANDLER:
.type RTLERRORSETHANDLER, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
.Lt_0094:
push 0
push 283
push offset Lt_0062
call RTLPROCLOOKUP
add esp, 8
push eax
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-4], eax
push -1
push -2147483648
push dword ptr [ebp+8]
push dword ptr [ebp-4]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0097
jmp .Lt_0095
.Lt_0097:
.Lt_0096:
mov dword ptr [ebp-8], 0
cmp dword ptr [ebp+12], 0
je .Lt_0099
mov eax, dword ptr [PARSER+100]
cmp eax, dword ptr [ENV+832]
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_009B
mov ebx, dword ptr [PARSER+100]
mov eax, dword ptr [ebx+108]
lea ebx, [eax+28]
mov dword ptr [ebp-12], ebx
mov ebx, dword ptr [ebp-12]
cmp dword ptr [ebx], 0
jne .Lt_009E
push 0
push 32
call SYMBADDTEMPVAR
add esp, 8
mov ebx, dword ptr [ebp-12]
mov dword ptr [ebx], eax
push 0
push -2147483648
push 0
push 0
mov eax, dword ptr [ebp-12]
push dword ptr [eax]
call ASTNEWVAR
add esp, 20
mov dword ptr [ebp-8], eax
push 0
push dword ptr [ebp-4]
push dword ptr [ebp-8]
call ASTNEWASSIGN
add esp, 12
push eax
call ASTADD
add esp, 4
.Lt_009E:
.Lt_009D:
.Lt_009B:
.Lt_009A:
.Lt_0099:
.Lt_0098:
cmp dword ptr [ebp-8], 0
jne .Lt_00A0
push dword ptr [ebp-4]
call ASTADD
add esp, 4
.Lt_00A0:
.Lt_009F:
.Lt_0095:
pop ebx
mov esp, ebp
pop ebp
ret
.size RTLERRORSETHANDLER, .-RTLERRORSETHANDLER
.balign 16

.globl RTLERRORGETNUM
RTLERRORGETNUM:
.type RTLERRORGETNUM, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_00A2:
push 0
push 284
push offset Lt_0063
call RTLPROCLOOKUP
add esp, 8
push eax
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-4], eax
.Lt_00A3:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size RTLERRORGETNUM, .-RTLERRORGETNUM
.balign 16

.globl RTLERRORSETNUM
RTLERRORSETNUM:
.type RTLERRORSETNUM, @function
push ebp
mov ebp, esp
sub esp, 4
.Lt_00A4:
push 0
push 285
push offset Lt_0064
call RTLPROCLOOKUP
add esp, 8
push eax
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-4], eax
push -1
push -2147483648
push dword ptr [ebp+8]
push dword ptr [ebp-4]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00A7
jmp .Lt_00A5
.Lt_00A7:
.Lt_00A6:
push dword ptr [ebp-4]
call ASTADD
add esp, 4
.Lt_00A5:
mov esp, ebp
pop ebp
ret
.size RTLERRORSETNUM, .-RTLERRORSETNUM
.balign 16

.globl RTLERRORRESUME
RTLERRORRESUME:
.type RTLERRORRESUME, @function
push ebp
mov ebp, esp
sub esp, 8
.Lt_00A8:
cmp dword ptr [ebp+8], 0
jne .Lt_00AB
push 286
push offset Lt_0065
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-8], eax
jmp .Lt_00AA
.Lt_00AB:
push 287
push offset Lt_0066
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-8], eax
.Lt_00AA:
push 0
push dword ptr [ebp-8]
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-4], eax
push dword ptr [ebp-4]
push 0
push 103
call ASTNEWBRANCH
add esp, 12
push eax
call ASTADD
add esp, 4
.Lt_00A9:
mov esp, ebp
pop ebp
ret
.size RTLERRORRESUME, .-RTLERRORRESUME
.balign 16

.globl RTLERRORSETMODNAME
RTLERRORSETMODNAME:
.type RTLERRORSETMODNAME, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
mov dword ptr [ebp-4], 0
.Lt_00AC:
push 0
push 288
push offset Lt_006D
call RTLPROCLOOKUP
add esp, 8
push eax
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
jne .Lt_00AF
mov dword ptr [ebp-4], 0
jmp .Lt_00AD
.Lt_00AF:
.Lt_00AE:
cmp dword ptr [ebp+8], 0
je .Lt_00B1
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+108]
lea eax, [ebx+28]
mov dword ptr [ebp-16], eax
push 0
push 35
call SYMBADDTEMPVAR
add esp, 8
mov ebx, dword ptr [ebp-16]
mov dword ptr [ebx+4], eax
push 0
push -2147483648
push 0
push 0
mov eax, dword ptr [ebp-16]
push dword ptr [eax+4]
call ASTNEWVAR
add esp, 20
mov dword ptr [ebp-12], eax
push 0
push dword ptr [ebp-8]
push dword ptr [ebp-12]
call ASTNEWASSIGN
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_00B0
.Lt_00B1:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_00B0:
.Lt_00AD:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size RTLERRORSETMODNAME, .-RTLERRORSETMODNAME
.balign 16

.globl RTLERRORSETFUNCNAME
RTLERRORSETFUNCNAME:
.type RTLERRORSETFUNCNAME, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
mov dword ptr [ebp-4], 0
.Lt_00B3:
push 0
push 289
push offset Lt_006E
call RTLPROCLOOKUP
add esp, 8
push eax
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
jne .Lt_00B6
mov dword ptr [ebp-4], 0
jmp .Lt_00B4
.Lt_00B6:
.Lt_00B5:
cmp dword ptr [ebp+8], 0
je .Lt_00B8
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+108]
lea eax, [ebx+28]
mov dword ptr [ebp-16], eax
push 0
push 35
call SYMBADDTEMPVAR
add esp, 8
mov ebx, dword ptr [ebp-16]
mov dword ptr [ebx+8], eax
push 0
push -2147483648
push 0
push 0
mov eax, dword ptr [ebp-16]
push dword ptr [eax+8]
call ASTNEWVAR
add esp, 20
mov dword ptr [ebp-12], eax
push 0
push dword ptr [ebp-8]
push dword ptr [ebp-12]
call ASTNEWASSIGN
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_00B7
.Lt_00B8:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_00B7:
.Lt_00B4:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size RTLERRORSETFUNCNAME, .-RTLERRORSETFUNCNAME
.balign 16
fb_ctor__rtlzerror:
.type fb_ctor__rtlzerror, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__rtlzerror, .-fb_ctor__rtlzerror
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
HERRORTHROW:
.type HERRORTHROW, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_0078:
push 0
push 281
push offset Lt_0060
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
mov eax, dword ptr [LEX+839664]
mov ecx, dword ptr [eax+16548]
mov ebx, ecx
sar ebx, 31
push ebx
push ecx
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
push -1
push -2147483648
lea eax, [ENV+244]
push eax
call ASTNEWCONSTSTR
add esp, 4
push eax
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
cmp dword ptr [ebp+8], 0
je .Lt_007B
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp+8]
call ASTNEWVAR
add esp, 20
push eax
call ASTNEWADDROF
add esp, 4
mov dword ptr [ebp-12], eax
jmp .Lt_007A
.Lt_007B:
push 0
push 8
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-12], eax
.Lt_007A:
push -1
push -2147483648
push dword ptr [ebp-12]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
cmp dword ptr [ENV+152], 0
je .Lt_007D
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp+12]
call ASTNEWVAR
add esp, 20
push eax
call ASTNEWADDROF
add esp, 4
mov dword ptr [ebp-12], eax
jmp .Lt_007C
.Lt_007D:
push 0
push 8
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-12], eax
.Lt_007C:
push -1
push -2147483648
push dword ptr [ebp-12]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0079:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HERRORTHROW, .-HERRORTHROW
	#fbc-1.01.0/src/compiler/rtl-error.bas' compilation took 0.0388370860600844 secs

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
.long 0
.int 32
.int 3
.long 0
.int 0
.int 4
.int 10
.int 1
.int 0
.skip 8,0
.int 35
.int 1
.int 0
.skip 8,0
.int 32
.int 1
.int 0
.skip 8,0
.int 32
.int 1
.int 0
.skip 8,0
.skip 240,0
.int Lt_0061
.long 0
.int 32
.int 3
.long 0
.int 0
.int 5
.int 10
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
.int 32
.int 1
.int 0
.skip 8,0
.int 32
.int 1
.int 0
.skip 8,0
.skip 220,0
.int Lt_0062
.long 0
.int 32
.int -1
.long 0
.int 0
.int 1
.int 32
.int 1
.int 0
.skip 8,0
.skip 300,0
.int Lt_0063
.long 0
.int 10
.int -1
.long 0
.int 0
.int 0
.skip 320,0
.int Lt_0064
.long 0
.int 10
.int -1
.long 0
.int 0
.int 1
.int 10
.int 1
.int 0
.skip 8,0
.skip 300,0
.int Lt_0065
.long 0
.int 32
.int 3
.long 0
.int 0
.int 0
.skip 320,0
.int Lt_0066
.long 0
.int 32
.int 3
.long 0
.int 0
.int 0
.skip 320,0
.int Lt_0067
.int Lt_0068
.int 10
.int -1
.long 0
.int 0
.int 0
.skip 320,0
.int Lt_0069
.int Lt_006A
.int 35
.int -1
.long 0
.int 128
.int 0
.skip 320,0
.int Lt_006B
.int Lt_006C
.int 35
.int -1
.long 0
.int 128
.int 0
.skip 320,0
.int Lt_006D
.long 0
.int 35
.int -1
.long 0
.int 0
.int 1
.int 35
.int 1
.int 0
.skip 8,0
.skip 300,0
.int Lt_006E
.long 0
.int 35
.int -1
.long 0
.int 0
.int 1
.int 35
.int 1
.int 0
.skip 8,0
.skip 300,0
.int Lt_006F
.long 0
.int 0
.int -1
.long 0
.int 1
.int 4
.int 35
.int 1
.int 0
.skip 8,0
.int 7
.int 1
.int 0
.skip 8,0
.int 35
.int 1
.int 0
.skip 8,0
.int 35
.int 1
.int 0
.skip 8,0
.skip 240,0
.int Lt_006F
.int Lt_0070
.int 0
.int -1
.long 0
.int 1
.int 4
.int 35
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
.int 38
.int 1
.int 0
.skip 8,0
.skip 240,0
.int Lt_0071
.long 0
.int 0
.int -1
.long 0
.int 1
.int 4
.int 35
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
.int 35
.int 1
.int 0
.skip 8,0
.skip 240,0
.int Lt_0071
.int Lt_0072
.int 0
.int -1
.long 0
.int 1
.int 4
.int 35
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
.int 38
.int 1
.int 0
.skip 8,0
.skip 240,0
.long 0
.skip 344,0

.section .rodata
.balign 4
Lt_0060:	.ascii	"fb_ErrorThrowAt\0"
.balign 4
Lt_0061:	.ascii	"fb_ErrorThrowEx\0"
.balign 4
Lt_0062:	.ascii	"fb_ErrorSetHandler\0"
.balign 4
Lt_0063:	.ascii	"fb_ErrorGetNum\0"
.balign 4
Lt_0064:	.ascii	"fb_ErrorSetNum\0"
.balign 4
Lt_0065:	.ascii	"fb_ErrorResume\0"
.balign 4
Lt_0066:	.ascii	"fb_ErrorResumeNext\0"
.balign 4
Lt_0067:	.ascii	"erl\0"
.balign 4
Lt_0068:	.ascii	"fb_ErrorGetLineNum\0"
.balign 4
Lt_0069:	.ascii	"erfn\0"
.balign 4
Lt_006A:	.ascii	"fb_ErrorGetFuncName\0"
.balign 4
Lt_006B:	.ascii	"ermn\0"
.balign 4
Lt_006C:	.ascii	"fb_ErrorGetModName\0"
.balign 4
Lt_006D:	.ascii	"fb_ErrorSetModName\0"
.balign 4
Lt_006E:	.ascii	"fb_ErrorSetFuncName\0"
.balign 4
Lt_006F:	.ascii	"fb_Assert\0"
.balign 4
Lt_0070:	.ascii	"fb_AssertW\0"
.balign 4
Lt_0071:	.ascii	"fb_AssertWarn\0"
.balign 4
Lt_0072:	.ascii	"fb_AssertWarnW\0"

.section .ctors, "aw", @progbits
.int fb_ctor__rtlzerror
