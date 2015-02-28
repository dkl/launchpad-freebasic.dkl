	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/symb-const.bas' compilation started at 15:27:37 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl SYMBADDCONST
SYMBADDCONST:
.type SYMBADDCONST, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0056:
mov dword ptr [ebp-4], 0
push dword ptr [ebp+24]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push 0
push dword ptr [ebp+8]
push 2
push 0
push 0
push 0
push 32
call SYMBNEWSYMBOL
add esp, 40
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0059
jmp .Lt_0057
.Lt_0059:
.Lt_0058:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+20]
mov ecx, dword ptr [ebx]
mov dword ptr [eax+52], ecx
mov ecx, dword ptr [ebx+4]
mov dword ptr [eax+56], ecx
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ebx
.Lt_0057:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBADDCONST, .-SYMBADDCONST
.balign 16

.globl SYMBALLOCFLOATCONST
SYMBALLOCFLOATCONST:
.type SYMBALLOCFLOATCONST, @function
push ebp
mov ebp, esp
sub esp, 32
push ebx
mov dword ptr [ebp-4], 0
.Lt_005A:
mov dword ptr [ebp-4], 0
push 0
push -1
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HFLOATTOHEX
add esp, 12
push eax
push -1
lea eax, [ebp-20]
push eax
call fb_StrInit
add esp, 20
push 0
push 7
push offset Lt_005D
push 134
push offset Lt_0061
call fb_StrAssign
add esp, 20
push 0
push -1
push -1
lea eax, [ebp-20]
push eax
push 134
push offset Lt_0061
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
lea eax, [ebp-32]
push eax
call fb_StrConcat
add esp, 20
push eax
push 134
push offset Lt_0061
call fb_StrAssign
add esp, 20
push 0
push -1
push dword ptr [ebp+16]
push offset Lt_0061
lea eax, [SYMB+98352]
push eax
call SYMBLOOKUPBYNAMEANDSUFFIX
add esp, 20
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
je .Lt_0060
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
lea eax, [ebp-20]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_005B
.Lt_0060:
.Lt_005F:
push 0
push 0
call SYMBUNIQUEID
push eax
push 134
push offset Lt_0062
call fb_StrAssign
add esp, 20
push 137
push 1572865
push offset Lt_0063
push 0
push 0
push 0
push 0
push dword ptr [ebp+16]
push offset Lt_0062
push offset Lt_0061
call SYMBADDVAR
add esp, 40
mov dword ptr [ebp-8], eax
push -1
lea eax, [ebp-20]
push eax
call fb_StrLen
add esp, 8
inc eax
mov ebx, eax
push ebx
call XALLOCATE
add esp, 4
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+52], eax
push 0
push -1
lea eax, [ebp-20]
push eax
push 0
mov eax, dword ptr [ebp-8]
push dword ptr [eax+52]
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
lea eax, [ebp-20]
push eax
call fb_StrDelete
add esp, 4
.Lt_005B:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBALLOCFLOATCONST, .-SYMBALLOCFLOATCONST

.section .bss
.balign 4
	.lcomm	Lt_0061,134
.balign 4
	.lcomm	Lt_0062,134
.balign 4
	.lcomm	Lt_0064,16

.section .data
.balign 4
Lt_0063:
.int Lt_0064
.int Lt_0064
.int 16
.int 16
.int 1
.int 1
.int 0
.int 0

.section .text
.balign 16

.globl SYMBALLOCINTCONST
SYMBALLOCINTCONST:
.type SYMBALLOCINTCONST, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
mov dword ptr [ebp-4], 0
.Lt_0065:
mov dword ptr [ebp-4], 0
push 0
push 3
push offset Lt_0068
push -1
push offset Lt_0071
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ebp+16]
and eax, 480
je .Lt_0069
mov dword ptr [ebp-8], 22
jmp .Lt_0070
.Lt_0069:
mov eax, dword ptr [ebp+16]
and eax, 31
mov dword ptr [ebp-8], eax
.Lt_0070:
mov eax, dword ptr [ebp-8]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+4], 8
jne .Lt_006C
push 0
push -1
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call fb_HEX_l
add esp, 8
push eax
push -1
push offset Lt_0071
call fb_StrConcatAssign
add esp, 20
jmp .Lt_006B
.Lt_006C:
push 0
push -1
mov eax, dword ptr [ebp+8]
push eax
call fb_HEX_i
add esp, 4
push eax
push -1
push offset Lt_0071
call fb_StrConcatAssign
add esp, 20
.Lt_006B:
push 0
push 7
push offset Lt_005D
push 134
push offset Lt_0072
call fb_StrAssign
add esp, 20
push 0
push -1
push -1
push offset Lt_0071
push 134
push offset Lt_0072
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
lea eax, [ebp-20]
push eax
call fb_StrConcat
add esp, 20
push eax
push 134
push offset Lt_0072
call fb_StrAssign
add esp, 20
push 0
push -1
push dword ptr [ebp+16]
push offset Lt_0072
lea eax, [SYMB+98352]
push eax
call SYMBLOOKUPBYNAMEANDSUFFIX
add esp, 20
mov dword ptr [Lt_0073], eax
cmp dword ptr [Lt_0073], 0
je .Lt_006F
mov eax, dword ptr [Lt_0073]
mov dword ptr [ebp-4], eax
jmp .Lt_0066
.Lt_006F:
.Lt_006E:
push 0
push 0
call SYMBUNIQUEID
push eax
push 134
push offset Lt_0074
call fb_StrAssign
add esp, 20
push 9
push 1572865
push offset Lt_0075
push 0
push 0
push 0
push 0
push dword ptr [ebp+16]
push offset Lt_0074
push offset Lt_0072
call SYMBADDVAR
add esp, 40
mov dword ptr [Lt_0073], eax
push -1
push offset Lt_0071
call fb_StrLen
add esp, 8
inc eax
mov ebx, eax
push ebx
call XALLOCATE
add esp, 4
mov ebx, dword ptr [Lt_0073]
mov dword ptr [ebx+52], eax
push 0
push -1
push offset Lt_0071
push 0
mov eax, dword ptr [Lt_0073]
push dword ptr [eax+52]
call fb_StrAssign
add esp, 20
mov eax, dword ptr [Lt_0073]
mov dword ptr [ebp-4], eax
.Lt_0066:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBALLOCINTCONST, .-SYMBALLOCINTCONST

.section .bss
.balign 4
	.lcomm	Lt_0072,134
.balign 4
	.lcomm	Lt_0074,134
.balign 4
	.lcomm	Lt_0073,4
.balign 4
	.lcomm	Lt_0076,16

.section .data
.balign 4
Lt_0075:
.int Lt_0076
.int Lt_0076
.int 16
.int 16
.int 1
.int 1
.int 0
.int 0

.section .bss
.balign 4
	.lcomm	Lt_0071,12

.section .text
.balign 16

.globl SYMBALLOCSTRCONST
SYMBALLOCSTRCONST:
.type SYMBALLOCSTRCONST, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
mov dword ptr [ebp-4], 0
.Lt_0077:
mov dword ptr [ebp-4], 0
push 0
push dword ptr [ebp+8]
call fb_StrLen
add esp, 8
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp+12], 0
jge .Lt_007B
mov eax, dword ptr [ebp-12]
mov dword ptr [ebp+12], eax
.Lt_007B:
.Lt_007A:
cmp dword ptr [ebp-12], 122
jg .Lt_007D
push 0
push 7
push offset Lt_007E
push 134
push offset Lt_0082
call fb_StrAssign
add esp, 20
push 0
push -1
push 0
push dword ptr [ebp+8]
push 134
push offset Lt_0082
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ebp-24]
push eax
call fb_StrConcat
add esp, 20
push eax
push 134
push offset Lt_0082
call fb_StrAssign
add esp, 20
jmp .Lt_007C
.Lt_007D:
push 0
push 0
call SYMBUNIQUEID
push eax
push 134
push offset Lt_0082
call fb_StrAssign
add esp, 20
.Lt_007C:
push 0
push -1
push 1
push offset Lt_0082
lea eax, [SYMB+98352]
push eax
call SYMBLOOKUPBYNAMEANDCLASS
add esp, 20
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
je .Lt_0081
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
jmp .Lt_0078
.Lt_0081:
.Lt_0080:
push 0
push 0
call SYMBUNIQUEID
push eax
push 134
push offset Lt_0083
call fb_StrAssign
add esp, 20
push 137
push 1572865
push offset Lt_0084
push 0
mov eax, dword ptr [ebp+12]
inc eax
mov ecx, eax
mov ebx, ecx
sar ebx, 31
push ebx
push ecx
push 0
push 3
push offset Lt_0083
push offset Lt_0082
call SYMBADDVAR
add esp, 40
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-12]
inc eax
mov ecx, eax
push ecx
call XALLOCATE
add esp, 4
mov ecx, dword ptr [ebp-8]
mov dword ptr [ecx+52], eax
push 0
push 0
push dword ptr [ebp+8]
push 0
mov eax, dword ptr [ebp-8]
push dword ptr [eax+52]
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0078:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBALLOCSTRCONST, .-SYMBALLOCSTRCONST

.section .bss
.balign 4
	.lcomm	Lt_0082,134
.balign 4
	.lcomm	Lt_0083,134
.balign 4
	.lcomm	Lt_0085,16

.section .data
.balign 4
Lt_0084:
.int Lt_0085
.int Lt_0085
.int 16
.int 16
.int 1
.int 1
.int 0
.int 0

.section .text
.balign 16

.globl SYMBALLOCWSTRCONST
SYMBALLOCWSTRCONST:
.type SYMBALLOCWSTRCONST, @function
push ebp
mov ebp, esp
sub esp, 28
push ebx
mov dword ptr [ebp-4], 0
.Lt_0086:
mov dword ptr [ebp-4], 0
push dword ptr [ebp+8]
call fb_WstrLen
add esp, 4
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp+12], 0
jge .Lt_008A
mov eax, dword ptr [ebp-12]
mov dword ptr [ebp+12], eax
.Lt_008A:
.Lt_0089:
mov eax, dword ptr [SYMB_DTYPETB+172]
mov dword ptr [ebp-16], eax
mov eax, dword ptr [ebp-16]
imul eax, dword ptr [ebp-12]
sal eax, 2
cmp eax, 122
jg .Lt_008C
push 0
push 7
push offset Lt_008D
push 134
push offset Lt_0091
call fb_StrAssign
add esp, 20
push 0
push -1
push 0
push dword ptr [ebp+8]
call HESCAPEW
add esp, 4
push eax
push 134
push offset Lt_0091
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
lea eax, [ebp-28]
push eax
call fb_StrConcat
add esp, 20
push eax
push 134
push offset Lt_0091
call fb_StrAssign
add esp, 20
jmp .Lt_008B
.Lt_008C:
push 0
push 0
call SYMBUNIQUEID
push eax
push 134
push offset Lt_0091
call fb_StrAssign
add esp, 20
.Lt_008B:
push 0
push -1
push 1
push offset Lt_0091
lea eax, [SYMB+98352]
push eax
call SYMBLOOKUPBYNAMEANDCLASS
add esp, 20
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
je .Lt_0090
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
jmp .Lt_0087
.Lt_0090:
.Lt_008F:
push 0
push 0
call SYMBUNIQUEID
push eax
push 134
push offset Lt_0092
call fb_StrAssign
add esp, 20
push 137
push 1572865
push offset Lt_0093
push 0
mov eax, dword ptr [ebp+12]
sal eax, 2
add eax, 4
mov ecx, eax
mov ebx, ecx
sar ebx, 31
push ebx
push ecx
push 0
push 6
push offset Lt_0092
push offset Lt_0091
call SYMBADDVAR
add esp, 40
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-12]
sal eax, 2
add eax, 4
mov ecx, eax
push ecx
call XALLOCATE
add esp, 4
mov ecx, dword ptr [ebp-8]
mov dword ptr [ecx+52], eax
push dword ptr [ebp+8]
push 0
mov eax, dword ptr [ebp-8]
push dword ptr [eax+52]
call fb_WstrAssign
add esp, 12
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0087:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBALLOCWSTRCONST, .-SYMBALLOCWSTRCONST

.section .bss
.balign 4
	.lcomm	Lt_0091,134
.balign 4
	.lcomm	Lt_0092,134
.balign 4
	.lcomm	Lt_0094,16

.section .data
.balign 4
Lt_0093:
.int Lt_0094
.int Lt_0094
.int 16
.int 16
.int 1
.int 1
.int 0
.int 0

.section .text
.balign 16

.globl SYMBDELCONST
SYMBDELCONST:
.type SYMBDELCONST, @function
push ebp
mov ebp, esp
.Lt_0095:
cmp dword ptr [ebp+8], 0
jne .Lt_0098
jmp .Lt_0096
.Lt_0098:
.Lt_0097:
push dword ptr [ebp+8]
call SYMBFREESYMBOL
add esp, 4
.Lt_0096:
mov esp, ebp
pop ebp
ret
.size SYMBDELCONST, .-SYMBDELCONST
.balign 16

.globl SYMBGETCONSTVALUEASSTR
SYMBGETCONSTVALUEASSTR:
.type SYMBGETCONSTVALUEASSTR, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_0099:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+24]
and ebx, 511
mov dword ptr [ebp-16], ebx
cmp dword ptr [ebp-16], 16
je .Lt_009E
.Lt_009F:
cmp dword ptr [ebp-16], 17
je .Lt_009E
.Lt_00A0:
cmp dword ptr [ebp-16], 3
jne .Lt_009D
.Lt_009E:
push 0
push 0
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+52]
push dword ptr [eax+52]
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
jmp .Lt_009B
.Lt_009D:
cmp dword ptr [ebp-16], 15
jne .Lt_00A1
.Lt_00A2:
push 0
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+56]
push dword ptr [eax+52]
call fb_DoubleToStr
add esp, 8
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
jmp .Lt_009B
.Lt_00A1:
cmp dword ptr [ebp-16], 14
jne .Lt_00A3
.Lt_00A4:
push 0
push -1
mov eax, dword ptr [ebp+8]
fld qword ptr [eax+52]
sub esp,4
fstp dword ptr [esp]
call fb_FloatToStr
add esp, 4
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
jmp .Lt_009B
.Lt_00A3:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+24]
and ebx, 480
je .Lt_00A6
mov dword ptr [ebp-20], 22
jmp .Lt_00AA
.Lt_00A6:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+24]
and eax, 31
mov dword ptr [ebp-20], eax
.Lt_00AA:
mov eax, dword ptr [ebp-20]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+8], 0
je .Lt_00A9
push 0
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+56]
push dword ptr [eax+52]
call fb_LongintToStr
add esp, 8
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
jmp .Lt_00A8
.Lt_00A9:
push 0
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+56]
push dword ptr [eax+52]
call fb_ULongintToStr
add esp, 8
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
.Lt_00A8:
.Lt_00A5:
.Lt_009B:
.Lt_009A:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBGETCONSTVALUEASSTR, .-SYMBGETCONSTVALUEASSTR
.balign 16

.globl SYMBCLONECONST
SYMBCLONECONST:
.type SYMBCLONECONST, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_00AB:
mov eax, dword ptr [ebp+8]
push dword ptr [eax+4]
mov eax, dword ptr [ebp+8]
lea ebx, [eax+52]
push ebx
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+28]
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+24]
and eax, 511
push eax
push 0
call SYMBADDCONST
add esp, 20
mov dword ptr [ebp-4], eax
.Lt_00AC:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBCLONECONST, .-SYMBCLONECONST
.balign 16
fb_ctor__symbzconst:
.type fb_ctor__symbzconst, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__symbzconst, .-fb_ctor__symbzconst
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
	#fbc-1.01.0/src/compiler/symb-const.bas' compilation took 0.0244788994314149 secs

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
Lt_005D:	.ascii	"{fbnc}\0"
.balign 4
Lt_0068:	.ascii	"0x\0"
.balign 4
Lt_007E:	.ascii	"{fbsc}\0"
.balign 4
Lt_008D:	.ascii	"{fbwc}\0"

.section .ctors, "aw", @progbits
.int fb_ctor__symbzconst
