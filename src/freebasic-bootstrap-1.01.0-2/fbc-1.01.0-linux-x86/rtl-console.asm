	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/rtl-console.bas' compilation started at 14:16:38 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl RTLCONSOLEMODINIT
RTLCONSOLEMODINIT:
.type RTLCONSOLEMODINIT, @function
.Lt_0077:
push offset FUNCDATA
call RTLADDINTRINSICPROCS
add esp, 4
.Lt_0078:
ret
.size RTLCONSOLEMODINIT, .-RTLCONSOLEMODINIT
.balign 16

.globl RTLCONSOLEMODEND
RTLCONSOLEMODEND:
.type RTLCONSOLEMODEND, @function
.Lt_0079:
.Lt_007A:
ret
.size RTLCONSOLEMODEND, .-RTLCONSOLEMODEND
.balign 16

.globl RTLCONSOLEVIEW
RTLCONSOLEVIEW:
.type RTLCONSOLEVIEW, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_007B:
mov dword ptr [ebp-4], 0
push 0
push 205
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
jne .Lt_007E
jmp .Lt_007C
.Lt_007E:
.Lt_007D:
push -1
push -2147483648
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0080
jmp .Lt_007C
.Lt_0080:
.Lt_007F:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_007C:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size RTLCONSOLEVIEW, .-RTLCONSOLEVIEW
.balign 16

.globl RTLWIDTHSCREEN
RTLWIDTHSCREEN:
.type RTLWIDTHSCREEN, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_0081:
mov dword ptr [ebp-4], 0
push 0
push 278
push offset Lt_0061
call RTLPROCLOOKUP
add esp, 8
push eax
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp+8], 0
jne .Lt_0084
push 0
push 7
push 4294967295
push 4294967295
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp+8], eax
.Lt_0084:
.Lt_0083:
push -1
push -2147483648
push dword ptr [ebp+8]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0086
jmp .Lt_0082
.Lt_0086:
.Lt_0085:
cmp dword ptr [ebp+12], 0
jne .Lt_0088
push 0
push 7
push 4294967295
push 4294967295
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp+12], eax
.Lt_0088:
.Lt_0087:
push -1
push -2147483648
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_008A
jmp .Lt_0082
.Lt_008A:
.Lt_0089:
cmp dword ptr [ebp+16], 0
jne .Lt_008C
push dword ptr [ebp-8]
call RTLERRORCHECK
add esp, 4
push eax
call ASTADD
add esp, 4
.Lt_008C:
.Lt_008B:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0082:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size RTLWIDTHSCREEN, .-RTLWIDTHSCREEN
.balign 16

.globl RTLCOLOR
RTLCOLOR:
.type RTLCOLOR, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_008D:
mov dword ptr [ebp-4], 0
mov dword ptr [ebp-12], 0
push 0
push 207
push offset Lt_006D
call RTLPROCLOOKUP
add esp, 8
push eax
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp+8], 0
jne .Lt_0090
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp+8], eax
or dword ptr [ebp-12], 1
.Lt_0090:
.Lt_008F:
push -1
push -2147483648
push dword ptr [ebp+8]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0092
jmp .Lt_008E
.Lt_0092:
.Lt_0091:
cmp dword ptr [ebp+12], 0
jne .Lt_0094
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp+12], eax
or dword ptr [ebp-12], 2
.Lt_0094:
.Lt_0093:
push -1
push -2147483648
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0096
jmp .Lt_008E
.Lt_0096:
.Lt_0095:
push -1
push -2147483648
push 0
push 7
mov ebx, dword ptr [ebp-12]
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
jne .Lt_0098
jmp .Lt_008E
.Lt_0098:
.Lt_0097:
cmp dword ptr [ebp+16], 0
jne .Lt_009A
push dword ptr [ebp-8]
call ASTADD
add esp, 4
.Lt_009A:
.Lt_0099:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_008E:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size RTLCOLOR, .-RTLCOLOR
.balign 16

.globl RTLPAGESET
RTLPAGESET:
.type RTLPAGESET, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_009B:
mov dword ptr [ebp-4], 0
push 0
push 208
push offset Lt_0075
call RTLPROCLOOKUP
add esp, 8
push eax
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp+8], 0
jne .Lt_009E
push 0
push 7
push 4294967295
push 4294967295
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp+8], eax
.Lt_009E:
.Lt_009D:
push -1
push -2147483648
push dword ptr [ebp+8]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00A0
jmp .Lt_009C
.Lt_00A0:
.Lt_009F:
cmp dword ptr [ebp+12], 0
jne .Lt_00A2
push 0
push 7
push 4294967295
push 4294967295
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp+12], eax
.Lt_00A2:
.Lt_00A1:
push -1
push -2147483648
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00A4
jmp .Lt_009C
.Lt_00A4:
.Lt_00A3:
cmp dword ptr [ebp+16], 0
jne .Lt_00A6
push dword ptr [ebp-8]
call ASTADD
add esp, 4
.Lt_00A6:
.Lt_00A5:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_009C:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size RTLPAGESET, .-RTLPAGESET
.balign 16

.globl RTLCONSOLEREADXY
RTLCONSOLEREADXY:
.type RTLCONSOLEREADXY, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_00A7:
mov dword ptr [ebp-4], 0
push 0
push 206
push offset Lt_0060
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
jne .Lt_00AA
jmp .Lt_00A8
.Lt_00AA:
.Lt_00A9:
push -1
push -2147483648
push dword ptr [ebp+8]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00AC
jmp .Lt_00A8
.Lt_00AC:
.Lt_00AB:
cmp dword ptr [ebp+16], 0
jne .Lt_00AE
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp+16], eax
.Lt_00AE:
.Lt_00AD:
push -1
push -2147483648
push dword ptr [ebp+16]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00B0
jmp .Lt_00A8
.Lt_00B0:
.Lt_00AF:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_00A8:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size RTLCONSOLEREADXY, .-RTLCONSOLEREADXY
.balign 16
fb_ctor__rtlzconsole:
.type fb_ctor__rtlzconsole, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__rtlzconsole, .-fb_ctor__rtlzconsole
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
	#fbc-1.01.0/src/compiler/rtl-console.bas' compilation took 0.02981103677302599 secs

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
.int 10
.int -1
.long 0
.int 0
.int 2
.int 10
.int 1
.int -1
.int 0
.skip 4,0
.int 10
.int 1
.int -1
.int 0
.skip 4,0
.skip 280,0
.int Lt_0060
.long 0
.int 11
.int -1
.long 0
.int 0
.int 3
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int -1
.int 0
.skip 4,0
.skip 260,0
.int Lt_0061
.long 0
.int 10
.int -1
.long 0
.int 0
.int 2
.int 10
.int 1
.int -1
.int -1
.skip 4,0
.int 10
.int 1
.int -1
.int -1
.skip 4,0
.skip 280,0
.int Lt_0062
.long 0
.int 10
.int -1
.long 0
.int 0
.int 2
.int 16
.int 2
.int 0
.skip 8,0
.int 10
.int 1
.int -1
.int -1
.skip 4,0
.skip 280,0
.int Lt_0063
.long 0
.int 10
.int -1
.long 0
.int 0
.int 2
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int -1
.int -1
.skip 4,0
.skip 280,0
.int Lt_0064
.int Lt_0065
.int 10
.int -1
.long 0
.int 0
.int 5
.int 10
.int 1
.int -1
.int 0
.skip 4,0
.int 10
.int 1
.int -1
.int 0
.skip 4,0
.int 10
.int 1
.int -1
.int -1
.skip 4,0
.int 10
.int 1
.int -1
.int 0
.skip 4,0
.int 10
.int 1
.int -1
.int 0
.skip 4,0
.skip 220,0
.int Lt_0066
.int Lt_0067
.int 10
.int -1
.long 0
.int 1
.int 0
.skip 320,0
.int Lt_0066
.int Lt_0068
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
.int Lt_0069
.int Lt_006A
.int 10
.int -1
.long 0
.int 0
.int 0
.skip 320,0
.int Lt_006B
.int Lt_006C
.int 0
.int -1
.long 0
.int 0
.int 1
.int 10
.int 1
.int -1
.int -65536
.skip 4,0
.skip 300,0
.int Lt_006D
.long 0
.int 10
.int -1
.long 0
.int 0
.int 3
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int 0
.skip 8,0
.skip 260,0
.int Lt_006E
.int Lt_006F
.int 16
.int -1
.long 0
.int 192
.int 0
.skip 320,0
.int Lt_006E
.int Lt_0070
.int 16
.int -1
.long 0
.int 320
.int 0
.skip 320,0
.int Lt_0071
.int Lt_0072
.int 10
.int -1
.long 0
.int 128
.int 0
.skip 320,0
.int Lt_0073
.int Lt_0074
.int 10
.int -1
.long 0
.int 0
.int 2
.int 10
.int 1
.int -1
.int -1
.skip 4,0
.int 10
.int 1
.int -1
.int -1
.skip 4,0
.skip 280,0
.int Lt_0075
.long 0
.int 10
.int -1
.long 0
.int 0
.int 2
.int 10
.int 1
.int -1
.int -1
.skip 4,0
.int 10
.int 1
.int -1
.int -1
.skip 4,0
.skip 280,0
.long 0
.skip 344,0

.section .rodata
.balign 4
Lt_005F:	.ascii	"fb_ConsoleView\0"
.balign 4
Lt_0060:	.ascii	"fb_ReadXY\0"
.balign 4
Lt_0061:	.ascii	"fb_Width\0"
.balign 4
Lt_0062:	.ascii	"fb_WidthDev\0"
.balign 4
Lt_0063:	.ascii	"fb_WidthFile\0"
.balign 4
Lt_0064:	.ascii	"locate\0"
.balign 4
Lt_0065:	.ascii	"fb_Locate\0"
.balign 4
Lt_0066:	.ascii	"pos\0"
.balign 4
Lt_0067:	.ascii	"fb_GetX\0"
.balign 4
Lt_0068:	.ascii	"fb_Pos\0"
.balign 4
Lt_0069:	.ascii	"csrlin\0"
.balign 4
Lt_006A:	.ascii	"fb_GetY\0"
.balign 4
Lt_006B:	.ascii	"cls\0"
.balign 4
Lt_006C:	.ascii	"fb_Cls\0"
.balign 4
Lt_006D:	.ascii	"fb_Color\0"
.balign 4
Lt_006E:	.ascii	"inkey\0"
.balign 4
Lt_006F:	.ascii	"fb_Inkey\0"
.balign 4
Lt_0070:	.ascii	"fb_InkeyQB\0"
.balign 4
Lt_0071:	.ascii	"getkey\0"
.balign 4
Lt_0072:	.ascii	"fb_Getkey\0"
.balign 4
Lt_0073:	.ascii	"pcopy\0"
.balign 4
Lt_0074:	.ascii	"fb_PageCopy\0"
.balign 4
Lt_0075:	.ascii	"fb_PageSet\0"

.section .ctors, "aw", @progbits
.int fb_ctor__rtlzconsole
