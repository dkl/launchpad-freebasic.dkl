	.intel_syntax noprefix

	#FreeBASIC-1.01.0-source/src/compiler/rtl-macro.bas' compilation started at 16:30:07 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl RTLMACROMODINIT
RTLMACROMODINIT:
.type RTLMACROMODINIT, @function
.Lt_00E3:
cmp dword ptr [ENV+136], 3
jne .Lt_00E6
push offset MACRODATAQB
call HADDMACROS
add esp, 4
jmp .Lt_00E5
.Lt_00E6:
push offset MACRODATA
call HADDMACROS
add esp, 4
.Lt_00E5:
.Lt_00E4:
ret
.size RTLMACROMODINIT, .-RTLMACROMODINIT
.balign 16

.globl RTLMACROMODEND
RTLMACROMODEND:
.type RTLMACROMODEND, @function
.Lt_00E7:
.Lt_00E8:
ret
.size RTLMACROMODEND, .-RTLMACROMODEND
.balign 16
fb_ctor__rtlzmacro:
.type fb_ctor__rtlzmacro, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__rtlzmacro, .-fb_ctor__rtlzmacro
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
HADDMACRO:
.type HADDMACRO, @function
push ebp
mov ebp, esp
sub esp, 32
push ebx
.Lt_00BC:
mov dword ptr [ebp-4], -1
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-24], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+8]
dec ebx
mov dword ptr [ebp-28], ebx
jmp .Lt_00BF
.Lt_00C2:
mov ebx, dword ptr [ebp-24]
sal ebx, 2
mov eax, dword ptr [ebp+8]
add eax, ebx
push dword ptr [eax+12]
push dword ptr [ebp-16]
call SYMBADDDEFINEPARAM
add esp, 8
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-12], 0
jne .Lt_00C4
mov eax, dword ptr [ebp-16]
mov dword ptr [ebp-12], eax
.Lt_00C4:
.Lt_00C3:
.Lt_00C0:
inc dword ptr [ebp-24]
.Lt_00BF:
mov eax, dword ptr [ebp-28]
cmp dword ptr [ebp-24], eax
jle .Lt_00C2
.Lt_00C1:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 16
test ebx, ebx
je .Lt_00C6
cmp dword ptr [ENV+144], 0
jne .Lt_00C8
mov dword ptr [ebp-4], 0
.Lt_00C8:
.Lt_00C7:
.Lt_00C6:
.Lt_00C5:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 8192
test eax, eax
je .Lt_00CA
cmp dword ptr [ENV+104], 1
jne .Lt_00CC
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp-8]
or eax, 2
mov ebx, eax
mov dword ptr [ebp-8], ebx
.Lt_00CC:
.Lt_00CB:
.Lt_00CA:
.Lt_00C9:
mov dword ptr [ebp-20], 0
cmp dword ptr [ebp-4], 0
je .Lt_00CE
mov dword ptr [ebp-24], 0
mov ebx, dword ptr [ebp+8]
lea eax, [ebx+28]
mov dword ptr [ebp-28], eax
.Lt_00CF:
mov eax, dword ptr [ebp-28]
cmp dword ptr [eax], -1
je .Lt_00D0
mov eax, dword ptr [ebp-28]
push dword ptr [eax]
push dword ptr [ebp-24]
call SYMBADDDEFINETOK
add esp, 8
mov dword ptr [ebp-24], eax
cmp dword ptr [ebp-20], 0
jne .Lt_00D2
mov eax, dword ptr [ebp-24]
mov dword ptr [ebp-20], eax
.Lt_00D2:
.Lt_00D1:
mov eax, dword ptr [ebp-28]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-32], ebx
cmp dword ptr [ebp-32], 0
je .Lt_00D6
.Lt_00D7:
cmp dword ptr [ebp-32], 1
jne .Lt_00D5
.Lt_00D6:
mov ebx, dword ptr [ebp-28]
mov eax, dword ptr [ebp-24]
mov ecx, dword ptr [ebx+4]
mov dword ptr [eax+4], ecx
jmp .Lt_00D3
.Lt_00D5:
cmp dword ptr [ebp-32], 2
jne .Lt_00D8
.Lt_00D9:
mov ecx, dword ptr [ebp-28]
push dword ptr [ecx+4]
mov ecx, dword ptr [ebp-24]
lea eax, [ecx+4]
push eax
call ZSTRASSIGN
add esp, 8
.Lt_00D8:
.Lt_00D3:
add dword ptr [ebp-28], 8
jmp .Lt_00CF
.Lt_00D0:
.Lt_00CE:
.Lt_00CD:
push dword ptr [ebp-8]
push dword ptr [ebp-12]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+8]
push dword ptr [ebp-20]
mov eax, dword ptr [ebp+8]
push dword ptr [eax]
call SYMBADDDEFINEMACRO
add esp, 20
.Lt_00BD:
pop ebx
mov esp, ebp
pop ebp
ret
.size HADDMACRO, .-HADDMACRO
.balign 16
HADDMACROS:
.type HADDMACROS, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_00DA:
.Lt_00DC:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 0
je .Lt_00DD
mov dword ptr [ebp-4], -1
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 32768
je .Lt_00DF
call FBIS64BIT
not eax
and dword ptr [ebp-4], eax
jmp .Lt_00DE
.Lt_00DF:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 65536
je .Lt_00E0
call FBIS64BIT
and dword ptr [ebp-4], eax
.Lt_00E0:
.Lt_00DE:
cmp dword ptr [ebp-4], 0
je .Lt_00E2
push dword ptr [ebp+8]
call HADDMACRO
add esp, 4
.Lt_00E2:
.Lt_00E1:
add dword ptr [ebp+8], 124
jmp .Lt_00DC
.Lt_00DD:
.Lt_00DB:
pop ebx
mov esp, ebp
pop ebp
ret
.size HADDMACROS, .-HADDMACROS
	#FreeBASIC-1.01.0-source/src/compiler/rtl-macro.bas' compilation took 0.04177804884966463 secs

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
MACRODATA:
.int Lt_0057
.int 0
.int 3
.int Lt_0058
.int Lt_0059
.int Lt_005A
.skip 4,0
.int 2
.int Lt_005B
.int 0
.long 0
.int 2
.int Lt_005C
.int 0
.long 1
.int 2
.int Lt_005D
.int 0
.long 2
.int 2
.int Lt_005E
.int -1
.skip 4,0
.skip 32,0
.int Lt_005F
.int 0
.int 4
.int Lt_0058
.int Lt_0059
.int Lt_005A
.int Lt_0060
.int 2
.int Lt_005B
.int 0
.long 0
.int 2
.int Lt_005C
.int 0
.long 1
.int 2
.int Lt_005D
.int 0
.long 2
.int 2
.int Lt_0061
.int 0
.long 3
.int 2
.int Lt_0062
.int -1
.skip 4,0
.skip 16,0
.int Lt_0063
.int 8192
.int 2
.int Lt_0060
.int Lt_0064
.skip 8,0
.int 2
.int Lt_0065
.int 0
.long 1
.int 2
.int Lt_0066
.int 0
.long 0
.int 2
.int Lt_0067
.int -1
.skip 4,0
.skip 48,0
.int Lt_0068
.int 8192
.int 2
.int Lt_0060
.int Lt_0064
.skip 8,0
.int 2
.int Lt_0069
.int 0
.long 1
.int 2
.int Lt_006A
.int 0
.long 0
.int 2
.int Lt_006B
.int 0
.long 1
.int 2
.int Lt_006C
.int -1
.skip 4,0
.skip 32,0
.int Lt_006D
.int 16
.int 1
.int Lt_006E
.skip 12,0
.int 2
.int Lt_006F
.int 0
.long 0
.int 2
.int Lt_0070
.int 1
.long 0
.int 2
.int Lt_0071
.int -1
.skip 4,0
.skip 48,0
.int Lt_0072
.int 16
.int 1
.int Lt_006E
.skip 12,0
.int 2
.int Lt_006F
.int 0
.long 0
.int 2
.int Lt_0073
.int 1
.long 0
.int 2
.int Lt_0071
.int -1
.skip 4,0
.skip 48,0
.int Lt_0074
.int 0
.int 2
.int Lt_0064
.int Lt_0075
.skip 8,0
.int 2
.int Lt_0076
.int 0
.long 0
.int 2
.int Lt_0077
.int 0
.long 1
.int 2
.int Lt_0078
.int -1
.skip 4,0
.skip 48,0
.int Lt_0079
.int 0
.int 3
.int Lt_007A
.int Lt_007B
.int Lt_007C
.skip 4,0
.int 2
.int Lt_007D
.int 0
.long 0
.int 2
.int Lt_007E
.int 0
.long 0
.int 2
.int Lt_007F
.int 0
.long 1
.int 2
.int Lt_0080
.int 0
.long 1
.int 2
.int Lt_0081
.int 0
.long 2
.int 2
.int Lt_0082
.int -1
.skip 4,0
.int Lt_0083
.int 0
.int 1
.int Lt_0084
.skip 12,0
.int 2
.int Lt_0085
.int 0
.long 0
.int 2
.int Lt_0086
.int -1
.skip 4,0
.skip 64,0
.int Lt_0087
.int 32768
.int 1
.int Lt_0084
.skip 12,0
.int 2
.int Lt_0085
.int 0
.long 0
.int 2
.int Lt_0088
.int -1
.skip 4,0
.skip 64,0
.int Lt_0087
.int 65536
.int 1
.int Lt_0084
.skip 12,0
.int 2
.int Lt_005B
.int 0
.long 0
.int 2
.int Lt_0089
.int -1
.skip 4,0
.skip 64,0
.int Lt_008A
.int 0
.int 1
.int Lt_0084
.skip 12,0
.int 2
.int Lt_0085
.int 0
.long 0
.int 2
.int Lt_008B
.int -1
.skip 4,0
.skip 64,0
.int Lt_008C
.int 0
.int 1
.int Lt_0084
.skip 12,0
.int 2
.int Lt_005B
.int 0
.long 0
.int 2
.int Lt_008D
.int -1
.skip 4,0
.skip 64,0
.int Lt_008E
.int 0
.int 2
.int Lt_0084
.int Lt_008F
.skip 8,0
.int 2
.int Lt_0090
.int 0
.long 0
.int 2
.int Lt_0091
.int 0
.long 0
.int 2
.int Lt_0092
.int 0
.long 1
.int 2
.int Lt_0093
.int -1
.skip 4,0
.skip 32,0
.int Lt_0094
.int 0
.int 2
.int Lt_0084
.int Lt_008F
.skip 8,0
.int 2
.int Lt_0095
.int 0
.long 0
.int 2
.int Lt_0096
.int 0
.long 0
.int 2
.int Lt_0092
.int 0
.long 1
.int 2
.int Lt_0097
.int -1
.skip 4,0
.skip 32,0
.int Lt_0098
.int 0
.int 2
.int Lt_0084
.int Lt_008F
.skip 8,0
.int 2
.int Lt_0095
.int 0
.long 0
.int 2
.int Lt_0099
.int 0
.long 0
.int 2
.int Lt_0092
.int 0
.long 1
.int 2
.int Lt_0097
.int -1
.skip 4,0
.skip 32,0
.long 0
.skip 120,0

.section .rodata
.balign 4
Lt_0057:	.ascii	"RGB\0"
.balign 4
Lt_0058:	.ascii	"R\0"
.balign 4
Lt_0059:	.ascii	"G\0"
.balign 4
Lt_005A:	.ascii	"B\0"
.balign 4
Lt_005B:	.ascii	"((cuint(\0"
.balign 4
Lt_005C:	.ascii	") shl 16) or (cuint(\0"
.balign 4
Lt_005D:	.ascii	") shl 8) or cuint(\0"
.balign 4
Lt_005E:	.ascii	") or &hFF000000)\0"
.balign 4
Lt_005F:	.ascii	"RGBA\0"
.balign 4
Lt_0060:	.ascii	"A\0"
.balign 4
Lt_0061:	.ascii	") or (cuint(\0"
.balign 4
Lt_0062:	.ascii	") shl 24))\0"
.balign 4
Lt_0063:	.ascii	"VA_ARG\0"
.balign 4
Lt_0064:	.ascii	"T\0"
.balign 4
Lt_0065:	.ascii	"peek(\0"
.balign 4
Lt_0066:	.ascii	",\0"
.balign 4
Lt_0067:	.ascii	")\0"
.balign 4
Lt_0068:	.ascii	"VA_NEXT\0"
.balign 4
Lt_0069:	.ascii	"(cptr(\0"
.balign 4
Lt_006A:	.ascii	" ptr, cptr(byte ptr, \0"
.balign 4
Lt_006B:	.ascii	") + (sizeof(\0"
.balign 4
Lt_006C:	.ascii	") + sizeof(any ptr)-1 and -sizeof(any ptr)) ) )\0"
.balign 4
Lt_006D:	.ascii	"ASSERT\0"
.balign 4
Lt_006E:	.ascii	"E\0"
.balign 4
Lt_006F:	.ascii	"if (\0"
.balign 4
Lt_0070:	.ascii	") = 0 then fb_Assert(__FILE__, __LINE__, __FUNCTION__, \0"
.balign 4
Lt_0071:	.ascii	") end if\0"
.balign 4
Lt_0072:	.ascii	"ASSERTWARN\0"
.balign 4
Lt_0073:	.ascii	") = 0 then fb_AssertWarn(__FILE__, __LINE__, __FUNCTION__, \0"
.balign 4
Lt_0074:	.ascii	"OFFSETOF\0"
.balign 4
Lt_0075:	.ascii	"F\0"
.balign 4
Lt_0076:	.ascii	"cint( @cast( \0"
.balign 4
Lt_0077:	.ascii	" ptr, 0 )->\0"
.balign 4
Lt_0078:	.ascii	" )\0"
.balign 4
Lt_0079:	.ascii	"__FB_MIN_VERSION__\0"
.balign 4
Lt_007A:	.ascii	"MAJOR\0"
.balign 4
Lt_007B:	.ascii	"MINOR\0"
.balign 4
Lt_007C:	.ascii	"PATCH_LEVEL\0"
.balign 4
Lt_007D:	.ascii	"((__FB_VER_MAJOR__ > (\0"
.balign 4
Lt_007E:	.ascii	")) or ((__FB_VER_MAJOR__ = (\0"
.balign 4
Lt_007F:	.ascii	")) and ((__FB_VER_MINOR__ > (\0"
.balign 4
Lt_0080:	.ascii	")) or (__FB_VER_MINOR__ = (\0"
.balign 4
Lt_0081:	.ascii	") and __FB_VER_PATCH__ >= (\0"
.balign 4
Lt_0082:	.ascii	")))))\0"
.balign 4
Lt_0083:	.ascii	"LOWORD\0"
.balign 4
Lt_0084:	.ascii	"X\0"
.balign 4
Lt_0085:	.ascii	"(cuint(\0"
.balign 4
Lt_0086:	.ascii	") and &h0000FFFF)\0"
.balign 4
Lt_0087:	.ascii	"HIWORD\0"
.balign 4
Lt_0088:	.ascii	") shr 16)\0"
.balign 4
Lt_0089:	.ascii	") and &hFFFF0000u) shr 16)\0"
.balign 4
Lt_008A:	.ascii	"LOBYTE\0"
.balign 4
Lt_008B:	.ascii	") and &h000000FF)\0"
.balign 4
Lt_008C:	.ascii	"HIBYTE\0"
.balign 4
Lt_008D:	.ascii	") and &h0000FF00) shr 8)\0"
.balign 4
Lt_008E:	.ascii	"BIT\0"
.balign 4
Lt_008F:	.ascii	"Y\0"
.balign 4
Lt_0090:	.ascii	"(((\0"
.balign 4
Lt_0091:	.ascii	") and (cast(typeof(\0"
.balign 4
Lt_0092:	.ascii	"), 1) shl (\0"
.balign 4
Lt_0093:	.ascii	"))) <> 0)\0"
.balign 4
Lt_0094:	.ascii	"BITSET\0"
.balign 4
Lt_0095:	.ascii	"((\0"
.balign 4
Lt_0096:	.ascii	") or (cast(typeof(\0"
.balign 4
Lt_0097:	.ascii	")))\0"
.balign 4
Lt_0098:	.ascii	"BITRESET\0"
.balign 4
Lt_0099:	.ascii	") and not (cast(typeof(\0"

.section .data
.balign 4
MACRODATAQB:
.int Lt_009B
.int 0
.int 3
.int Lt_0058
.int Lt_0059
.int Lt_005A
.skip 4,0
.int 2
.int Lt_009C
.int 0
.long 0
.int 2
.int Lt_009D
.int 0
.long 1
.int 2
.int Lt_009E
.int 0
.long 2
.int 2
.int Lt_005E
.int -1
.skip 4,0
.skip 32,0
.int Lt_009F
.int 0
.int 4
.int Lt_0058
.int Lt_0059
.int Lt_005A
.int Lt_0060
.int 2
.int Lt_009C
.int 0
.long 0
.int 2
.int Lt_009D
.int 0
.long 1
.int 2
.int Lt_009E
.int 0
.long 2
.int 2
.int Lt_00A0
.int 0
.long 3
.int 2
.int Lt_00A1
.int -1
.skip 4,0
.skip 16,0
.int Lt_00A2
.int 8192
.int 2
.int Lt_0060
.int Lt_0064
.skip 8,0
.int 2
.int Lt_0065
.int 0
.long 1
.int 2
.int Lt_0066
.int 0
.long 0
.int 2
.int Lt_0067
.int -1
.skip 4,0
.skip 48,0
.int Lt_00A3
.int 8192
.int 2
.int Lt_0060
.int Lt_0064
.skip 8,0
.int 2
.int Lt_00A4
.int 0
.long 1
.int 2
.int Lt_00A5
.int 0
.long 0
.int 2
.int Lt_00A6
.int 0
.long 1
.int 2
.int Lt_00A7
.int -1
.skip 4,0
.skip 32,0
.int Lt_00A8
.int 16
.int 1
.int Lt_006E
.skip 12,0
.int 2
.int Lt_006F
.int 0
.long 0
.int 2
.int Lt_0070
.int 1
.long 0
.int 2
.int Lt_0071
.int -1
.skip 4,0
.skip 48,0
.int Lt_00A9
.int 16
.int 1
.int Lt_006E
.skip 12,0
.int 2
.int Lt_006F
.int 0
.long 0
.int 2
.int Lt_0073
.int 1
.long 0
.int 2
.int Lt_0071
.int -1
.skip 4,0
.skip 48,0
.int Lt_00AA
.int 0
.int 2
.int Lt_0064
.int Lt_0075
.skip 8,0
.int 2
.int Lt_00AB
.int 0
.long 0
.int 2
.int Lt_00AC
.int 0
.long 1
.int 2
.int Lt_0078
.int -1
.skip 4,0
.skip 48,0
.int Lt_0079
.int 0
.int 3
.int Lt_007A
.int Lt_007B
.int Lt_007C
.skip 4,0
.int 2
.int Lt_007D
.int 0
.long 0
.int 2
.int Lt_007E
.int 0
.long 0
.int 2
.int Lt_007F
.int 0
.long 1
.int 2
.int Lt_0080
.int 0
.long 1
.int 2
.int Lt_0081
.int 0
.long 2
.int 2
.int Lt_0082
.int -1
.skip 4,0
.int Lt_00AD
.int 0
.int 1
.int Lt_0084
.skip 12,0
.int 2
.int Lt_00AE
.int 0
.long 0
.int 2
.int Lt_0086
.int -1
.skip 4,0
.skip 64,0
.int Lt_00AF
.int 0
.int 1
.int Lt_0084
.skip 12,0
.int 2
.int Lt_00AE
.int 0
.long 0
.int 2
.int Lt_00B0
.int -1
.skip 4,0
.skip 64,0
.int Lt_00B1
.int 0
.int 1
.int Lt_0084
.skip 12,0
.int 2
.int Lt_00AE
.int 0
.long 0
.int 2
.int Lt_008B
.int -1
.skip 4,0
.skip 64,0
.int Lt_00B2
.int 0
.int 1
.int Lt_0084
.skip 12,0
.int 2
.int Lt_009C
.int 0
.long 0
.int 2
.int Lt_00B3
.int -1
.skip 4,0
.skip 64,0
.int Lt_00B4
.int 0
.int 2
.int Lt_0084
.int Lt_008F
.skip 8,0
.int 2
.int Lt_0090
.int 0
.long 0
.int 2
.int Lt_00B5
.int 0
.long 0
.int 2
.int Lt_00B6
.int 0
.long 1
.int 2
.int Lt_0093
.int -1
.skip 4,0
.skip 32,0
.int Lt_00B7
.int 0
.int 2
.int Lt_0084
.int Lt_008F
.skip 8,0
.int 2
.int Lt_0095
.int 0
.long 0
.int 2
.int Lt_00B8
.int 0
.long 0
.int 2
.int Lt_00B6
.int 0
.long 1
.int 2
.int Lt_0097
.int -1
.skip 4,0
.skip 32,0
.int Lt_00B9
.int 0
.int 2
.int Lt_0084
.int Lt_008F
.skip 8,0
.int 2
.int Lt_0095
.int 0
.long 0
.int 2
.int Lt_00BA
.int 0
.long 0
.int 2
.int Lt_00B6
.int 0
.long 1
.int 2
.int Lt_0097
.int -1
.skip 4,0
.skip 32,0
.long 0
.skip 120,0

.section .rodata
.balign 4
Lt_009B:	.ascii	"__RGB\0"
.balign 4
Lt_009C:	.ascii	"((__cuint(\0"
.balign 4
Lt_009D:	.ascii	") __shl 16) or (__cuint(\0"
.balign 4
Lt_009E:	.ascii	") __shl 8) or __cuint(\0"
.balign 4
Lt_009F:	.ascii	"__RGBA\0"
.balign 4
Lt_00A0:	.ascii	") or (__cuint(\0"
.balign 4
Lt_00A1:	.ascii	") __shl 24))\0"
.balign 4
Lt_00A2:	.ascii	"__VA_ARG\0"
.balign 4
Lt_00A3:	.ascii	"__VA_NEXT\0"
.balign 4
Lt_00A4:	.ascii	"(__cptr(\0"
.balign 4
Lt_00A5:	.ascii	" __ptr, __cptr(__byte __ptr, \0"
.balign 4
Lt_00A6:	.ascii	") + (__sizeof(\0"
.balign 4
Lt_00A7:	.ascii	") + __sizeof(any __ptr)-1 and -__sizeof(any __ptr)) ) )\0"
.balign 4
Lt_00A8:	.ascii	"__ASSERT\0"
.balign 4
Lt_00A9:	.ascii	"__ASSERTWARN\0"
.balign 4
Lt_00AA:	.ascii	"__OFFSETOF\0"
.balign 4
Lt_00AB:	.ascii	"cint( @__cast( \0"
.balign 4
Lt_00AC:	.ascii	" __ptr, 0 )->\0"
.balign 4
Lt_00AD:	.ascii	"__LOWORD\0"
.balign 4
Lt_00AE:	.ascii	"(__cuint(\0"
.balign 4
Lt_00AF:	.ascii	"__HIWORD\0"
.balign 4
Lt_00B0:	.ascii	") __shr 16)\0"
.balign 4
Lt_00B1:	.ascii	"__LOBYTE\0"
.balign 4
Lt_00B2:	.ascii	"__HIBYTE\0"
.balign 4
Lt_00B3:	.ascii	") and &h0000FF00) __shr 8)\0"
.balign 4
Lt_00B4:	.ascii	"__BIT\0"
.balign 4
Lt_00B5:	.ascii	") and (__cast(__typeof(\0"
.balign 4
Lt_00B6:	.ascii	"), 1) __shl (\0"
.balign 4
Lt_00B7:	.ascii	"__BITSET\0"
.balign 4
Lt_00B8:	.ascii	") or (__cast(__typeof(\0"
.balign 4
Lt_00B9:	.ascii	"__BITRESET\0"
.balign 4
Lt_00BA:	.ascii	") and not (__cast(__typeof(\0"

.section .ctors, "aw", @progbits
.int fb_ctor__rtlzmacro
