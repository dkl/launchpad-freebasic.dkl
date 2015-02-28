	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/rtl-data.bas' compilation started at 15:27:37 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl RTLDATAMODINIT
RTLDATAMODINIT:
.type RTLDATAMODINIT, @function
.Lt_0065:
push offset FUNCDATA
call RTLADDINTRINSICPROCS
add esp, 4
.Lt_0066:
ret
.size RTLDATAMODINIT, .-RTLDATAMODINIT
.balign 16

.globl RTLDATAMODEND
RTLDATAMODEND:
.type RTLDATAMODEND, @function
.Lt_0067:
.Lt_0068:
ret
.size RTLDATAMODEND, .-RTLDATAMODEND
.balign 16

.globl RTLDATAREAD
RTLDATAREAD:
.type RTLDATAREAD, @function
push ebp
mov ebp, esp
sub esp, 44
push ebx
mov dword ptr [ebp-4], 0
.Lt_0069:
mov dword ptr [ebp-4], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-16], 1
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 511
mov dword ptr [ebp-20], ebx
mov ebx, dword ptr [ebp-20]
and ebx, 480
je .Lt_006B
mov dword ptr [ebp-32], 22
jmp .Lt_0094
.Lt_006B:
mov ebx, dword ptr [ebp-20]
and ebx, 31
mov dword ptr [ebp-32], ebx
.Lt_0094:
mov ebx, dword ptr [ebp-32]
mov dword ptr [ebp-36], ebx
jmp .Lt_006E
.Lt_0070:
push 142
push offset Lt_0058
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
mov dword ptr [ebp-16], 3
jmp .Lt_006D
.Lt_0071:
push 143
push offset Lt_0059
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
mov dword ptr [ebp-16], 2
jmp .Lt_006D
.Lt_0072:
mov eax, dword ptr [ebp-20]
and eax, 480
je .Lt_0073
mov dword ptr [ebp-40], 22
jmp .Lt_0095
.Lt_0073:
mov eax, dword ptr [ebp-20]
and eax, 31
mov dword ptr [ebp-40], eax
.Lt_0095:
mov eax, dword ptr [ebp-40]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+20]
mov dword ptr [ebp-44], ebx
jmp .Lt_0076
.Lt_0078:
push 144
push offset Lt_005A
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_0075
.Lt_0079:
push 148
push offset Lt_005E
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_0075
.Lt_007A:
push 145
push offset Lt_005B
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_0075
.Lt_007B:
push 149
push offset Lt_005F
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_0075
.Lt_007C:
push 146
push offset Lt_005C
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_0075
.Lt_007D:
push 150
push offset Lt_0060
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_0075
.Lt_007E:
push 147
push offset Lt_005D
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_0075
.Lt_007F:
push 151
push offset Lt_0061
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_0075
.Lt_0076:
cmp dword ptr [ebp-44], 7
ja .Lt_0075
mov eax, dword ptr [ebp-44]
jmp dword ptr [.LT_0080+eax*4]
.LT_0080:
.int .Lt_0078
.int .Lt_0079
.int .Lt_007A
.int .Lt_007B
.int .Lt_007C
.int .Lt_007D
.int .Lt_007E
.int .Lt_007F
.Lt_0075:
jmp .Lt_006D
.Lt_0081:
push 152
push offset Lt_0062
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_006D
.Lt_0082:
push 153
push offset Lt_0063
call RTLPROCLOOKUP
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_006D
.Lt_0083:
jmp .Lt_006A
jmp .Lt_006D
.Lt_0084:
jmp .Lt_006A
jmp .Lt_006D
.Lt_006E:
mov eax, dword ptr [ebp-36]
add eax, 4294967295
cmp eax, 21
ja .Lt_0084
mov eax, dword ptr [ebp-36]
jmp dword ptr [.LT_0085+eax*4-4]
.LT_0085:
.int .Lt_0072
.int .Lt_0072
.int .Lt_0070
.int .Lt_0072
.int .Lt_0072
.int .Lt_0071
.int .Lt_0072
.int .Lt_0072
.int .Lt_0072
.int .Lt_0072
.int .Lt_0072
.int .Lt_0072
.int .Lt_0072
.int .Lt_0081
.int .Lt_0082
.int .Lt_0070
.int .Lt_0070
.int .Lt_0083
.int .Lt_0084
.int .Lt_0084
.int .Lt_0084
.int .Lt_0072
.Lt_006D:
cmp dword ptr [ebp-12], 0
jne .Lt_0087
jmp .Lt_006A
.Lt_0087:
.Lt_0086:
push 0
push dword ptr [ebp-12]
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-16], 1
jle .Lt_0089
push dword ptr [ebp-20]
push dword ptr [ebp+8]
call RTLCALCSTRLEN
add esp, 8
mov dword ptr [ebp-28], eax
mov dword ptr [ebp-24], edx
jmp .Lt_0088
.Lt_0089:
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
.Lt_0088:
push -1
push -2147483648
push dword ptr [ebp+8]
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_008B
jmp .Lt_006A
.Lt_008B:
.Lt_008A:
cmp dword ptr [ebp-16], 1
jle .Lt_008D
push -1
push -2147483648
push 0
push 7
push dword ptr [ebp-24]
push dword ptr [ebp-28]
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_008F
jmp .Lt_006A
.Lt_008F:
.Lt_008E:
cmp dword ptr [ebp-16], 2
jle .Lt_0091
push -1
push -2147483648
push 0
push 7
mov eax, dword ptr [ebp-20]
cmp eax, 17
sete al
shr eax, 1
sbb eax, eax
mov ebx, eax
mov edx, ebx
sar edx, 31
push edx
push ebx
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0093
jmp .Lt_006A
.Lt_0093:
.Lt_0092:
.Lt_0091:
.Lt_0090:
.Lt_008D:
.Lt_008C:
push dword ptr [ebp-8]
call ASTADD
add esp, 4
mov dword ptr [ebp-4], -1
.Lt_006A:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size RTLDATAREAD, .-RTLDATAREAD
.balign 16

.globl RTLDATARESTORE
RTLDATARESTORE:
.type RTLDATARESTORE, @function
push ebp
mov ebp, esp
sub esp, 16
mov dword ptr [ebp-4], 0
.Lt_0097:
mov dword ptr [ebp-4], 0
push 0
push 141
push offset Lt_0057
call RTLPROCLOOKUP
add esp, 8
push eax
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp+8], 0
jne .Lt_009A
mov eax, dword ptr [AST+124]
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 0
jne .Lt_009C
call ASTDATASTMTBEGIN
mov dword ptr [ebp-12], eax
push dword ptr [ebp-12]
call ASTDATASTMTEND
add esp, 4
push dword ptr [ebp-12]
call ASTDELNODE
add esp, 4
mov eax, dword ptr [AST+124]
mov dword ptr [ebp-16], eax
.Lt_009C:
.Lt_009B:
jmp .Lt_0099
.Lt_009A:
push 0
push dword ptr [ebp+8]
call ASTDATASTMTADD
add esp, 8
mov dword ptr [ebp-16], eax
.Lt_0099:
push -1
push -2147483648
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
push eax
push dword ptr [ebp-8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_009E
jmp .Lt_0098
.Lt_009E:
.Lt_009D:
cmp dword ptr [ebp+12], 0
jne .Lt_00A0
push dword ptr [ebp-8]
call ASTADD
add esp, 4
jmp .Lt_009F
.Lt_00A0:
push dword ptr [ebp+12]
push dword ptr [ebp-8]
call ASTADDAFTER
add esp, 8
.Lt_009F:
mov dword ptr [ebp-4], -1
.Lt_0098:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size RTLDATARESTORE, .-RTLDATARESTORE
.balign 16
fb_ctor__rtlzdata:
.type fb_ctor__rtlzdata, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__rtlzdata, .-fb_ctor__rtlzdata
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
	#fbc-1.01.0/src/compiler/rtl-data.bas' compilation took 0.02881400403566658 secs

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
.int 0
.int -1
.long 0
.int 0
.int 1
.int 32
.int 1
.int 0
.skip 8,0
.skip 300,0
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
.int 7
.int 1
.int 0
.skip 8,0
.int 10
.int 1
.int -1
.int 1
.skip 4,0
.skip 260,0
.int Lt_0059
.long 0
.int 0
.int -1
.long 0
.int 0
.int 2
.int 38
.int 1
.int 0
.skip 8,0
.int 7
.int 1
.int 0
.skip 8,0
.skip 280,0
.int Lt_005A
.long 0
.int 0
.int -1
.long 0
.int 0
.int 1
.int 1
.int 2
.int 0
.skip 8,0
.skip 300,0
.int Lt_005B
.long 0
.int 0
.int -1
.long 0
.int 0
.int 1
.int 4
.int 2
.int 0
.skip 8,0
.skip 300,0
.int Lt_005C
.long 0
.int 0
.int -1
.long 0
.int 0
.int 1
.int 10
.int 2
.int 0
.skip 8,0
.skip 300,0
.int Lt_005D
.long 0
.int 0
.int -1
.long 0
.int 0
.int 1
.int 12
.int 2
.int 0
.skip 8,0
.skip 300,0
.int Lt_005E
.long 0
.int 0
.int -1
.long 0
.int 0
.int 1
.int 2
.int 2
.int 0
.skip 8,0
.skip 300,0
.int Lt_005F
.long 0
.int 0
.int -1
.long 0
.int 0
.int 1
.int 5
.int 2
.int 0
.skip 8,0
.skip 300,0
.int Lt_0060
.long 0
.int 0
.int -1
.long 0
.int 0
.int 1
.int 11
.int 2
.int 0
.skip 8,0
.skip 300,0
.int Lt_0061
.long 0
.int 0
.int -1
.long 0
.int 0
.int 1
.int 13
.int 2
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
.int 14
.int 2
.int 0
.skip 8,0
.skip 300,0
.int Lt_0063
.long 0
.int 0
.int -1
.long 0
.int 0
.int 1
.int 15
.int 2
.int 0
.skip 8,0
.skip 300,0
.long 0
.skip 344,0

.section .rodata
.balign 4
Lt_0057:	.ascii	"fb_DataRestore\0"
.balign 4
Lt_0058:	.ascii	"fb_DataReadStr\0"
.balign 4
Lt_0059:	.ascii	"fb_DataReadWstr\0"
.balign 4
Lt_005A:	.ascii	"fb_DataReadByte\0"
.balign 4
Lt_005B:	.ascii	"fb_DataReadShort\0"
.balign 4
Lt_005C:	.ascii	"fb_DataReadInt\0"
.balign 4
Lt_005D:	.ascii	"fb_DataReadLongint\0"
.balign 4
Lt_005E:	.ascii	"fb_DataReadUByte\0"
.balign 4
Lt_005F:	.ascii	"fb_DataReadUShort\0"
.balign 4
Lt_0060:	.ascii	"fb_DataReadUInt\0"
.balign 4
Lt_0061:	.ascii	"fb_DataReadULongint\0"
.balign 4
Lt_0062:	.ascii	"fb_DataReadSingle\0"
.balign 4
Lt_0063:	.ascii	"fb_DataReadDouble\0"

.section .ctors, "aw", @progbits
.int fb_ctor__rtlzdata
