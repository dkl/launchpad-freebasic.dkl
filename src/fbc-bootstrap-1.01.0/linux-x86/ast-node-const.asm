	.intel_syntax noprefix

	#FreeBASIC-1.01.0-source/src/compiler/ast-node-const.bas' compilation started at 16:30:02 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl ASTCONSTEQZERO
ASTCONSTEQZERO:
.type ASTCONSTEQZERO, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0056:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_0058
mov dword ptr [ebp-8], 22
jmp .Lt_005C
.Lt_0058:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-8], eax
.Lt_005C:
mov eax, dword ptr [ebp-8]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax], 1
jne .Lt_005B
mov eax, dword ptr [ebp+8]
fld qword ptr [eax+20]
fcomp qword ptr [Lt_005D]
fnstsw ax
test ah, 0b01000000
setnz al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-4], eax
jmp .Lt_005A
.Lt_005B:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+24], 0
mov ebx, -1
jne .Lt_0060
cmp dword ptr [eax+20], 0
je .Lt_005F
.Lt_0060:
xor ebx, ebx
.Lt_005F:
mov dword ptr [ebp-4], ebx
.Lt_005A:
.Lt_0057:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTCONSTEQZERO, .-ASTCONSTEQZERO
.balign 16

.globl ASTCONSTGEZERO
ASTCONSTGEZERO:
.type ASTCONSTGEZERO, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_0061:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_0063
mov dword ptr [ebp-8], 22
jmp .Lt_006A
.Lt_0063:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-8], eax
.Lt_006A:
mov eax, dword ptr [ebp-8]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax], 1
jne .Lt_0066
mov eax, dword ptr [ebp+8]
fld qword ptr [eax+20]
fcomp qword ptr [Lt_005D]
fnstsw ax
sahf
setae al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-4], eax
jmp .Lt_0065
.Lt_0066:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_0068
mov dword ptr [ebp-12], 22
jmp .Lt_006B
.Lt_0068:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-12], eax
.Lt_006B:
mov eax, dword ptr [ebp-12]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+8], 0
je .Lt_0067
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+24], 0
mov ebx, -1
jg .Lt_006D
jl .Lt_006E
cmp dword ptr [eax+20], 0
jae .Lt_006D
.Lt_006E:
xor ebx, ebx
.Lt_006D:
mov dword ptr [ebp-4], ebx
jmp .Lt_0065
.Lt_0067:
mov dword ptr [ebp-4], -1
.Lt_0065:
.Lt_0062:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTCONSTGEZERO, .-ASTCONSTGEZERO
.balign 16

.globl ASTNEWCONSTSTR
ASTNEWCONSTSTR:
.type ASTNEWCONSTSTR, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_006F:
push -1
push dword ptr [ebp+8]
call SYMBALLOCSTRCONST
add esp, 8
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0072
jmp .Lt_0070
.Lt_0072:
.Lt_0071:
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp-8]
call ASTNEWVAR
add esp, 20
mov dword ptr [ebp-4], eax
.Lt_0070:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size ASTNEWCONSTSTR, .-ASTNEWCONSTSTR
.balign 16

.globl ASTNEWCONSTWSTR
ASTNEWCONSTWSTR:
.type ASTNEWCONSTWSTR, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_0073:
push -1
push dword ptr [ebp+8]
call SYMBALLOCWSTRCONST
add esp, 8
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0076
jmp .Lt_0074
.Lt_0076:
.Lt_0075:
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp-8]
call ASTNEWVAR
add esp, 20
mov dword ptr [ebp-4], eax
.Lt_0074:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size ASTNEWCONSTWSTR, .-ASTNEWCONSTWSTR
.balign 16

.globl ASTNEWCONSTI
ASTNEWCONSTI:
.type ASTNEWCONSTI, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0077:
push 0
push 12
push 16
call ASTNEWNODE
add esp, 12
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+12]
mov dword ptr [eax+20], ecx
mov dword ptr [eax+24], ebx
push 0
push 8
push dword ptr [ebp-8]
push dword ptr [ebp+20]
push dword ptr [ebp+16]
call ASTNEWCONV
add esp, 20
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0078:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTNEWCONSTI, .-ASTNEWCONSTI
.balign 16

.globl ASTNEWCONSTF
ASTNEWCONSTF:
.type ASTNEWCONSTF, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_0079:
push 0
push 15
push 16
call ASTNEWNODE
add esp, 12
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
push dword ptr [ebp+8]
push dword ptr [ebp+12]
pop dword ptr [eax+24]
pop dword ptr [eax+20]
push 0
push 0
push dword ptr [ebp-8]
push 0
push dword ptr [ebp+16]
call ASTNEWCONV
add esp, 20
mov dword ptr [ebp-4], eax
.Lt_007A:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size ASTNEWCONSTF, .-ASTNEWCONSTF
.balign 16

.globl ASTNEWCONST
ASTNEWCONST:
.type ASTNEWCONST, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_007B:
mov eax, dword ptr [ebp+12]
and eax, 480
je .Lt_007D
mov dword ptr [ebp-8], 22
jmp .Lt_0081
.Lt_007D:
mov eax, dword ptr [ebp+12]
and eax, 31
mov dword ptr [ebp-8], eax
.Lt_0081:
mov eax, dword ptr [ebp-8]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax], 1
jne .Lt_0080
push dword ptr [ebp+12]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+4]
push dword ptr [eax]
call ASTNEWCONSTF
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_007F
.Lt_0080:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+4]
push dword ptr [eax]
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-4], eax
.Lt_007F:
.Lt_007C:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size ASTNEWCONST, .-ASTNEWCONST
.balign 16

.globl ASTNEWCONSTZ
ASTNEWCONSTZ:
.type ASTNEWCONSTZ, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
mov dword ptr [ebp-4], 0
.Lt_0082:
mov eax, dword ptr [ebp+8]
and eax, 511
mov ebx, eax
mov dword ptr [ebp-16], ebx
jmp .Lt_0085
.Lt_0087:
mov dword ptr [ebp-4], 0
jmp .Lt_0084
.Lt_0088:
push 0
call ASTNEWCONSTSTR
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_0084
.Lt_0089:
push 0
call ASTNEWCONSTWSTR
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_0084
.Lt_008A:
push 0
push 0
push -1
push dword ptr [ebp+12]
push 18
call ASTTYPEINIBEGIN
add esp, 20
mov dword ptr [ebp-8], eax
push 0
push dword ptr [ebp-8]
call ASTTYPEINISCOPEBEGIN
add esp, 8
push dword ptr [ebp+12]
call SYMBUDTGETFIRSTFIELD
add esp, 4
mov dword ptr [ebp-12], eax
.Lt_008B:
cmp dword ptr [ebp-12], 0
je .Lt_008C
push 0
push -2147483648
push dword ptr [ebp-12]
mov eax, dword ptr [ebp-12]
push dword ptr [eax+28]
mov eax, dword ptr [ebp-12]
push dword ptr [eax+24]
call ASTNEWCONSTZ
add esp, 8
push eax
push dword ptr [ebp-8]
call ASTTYPEINIADDASSIGN
add esp, 20
push dword ptr [ebp-12]
call SYMBUDTGETNEXTINITABLEFIELD
add esp, 4
mov dword ptr [ebp-12], eax
jmp .Lt_008B
.Lt_008C:
push 0
push dword ptr [ebp-8]
call ASTTYPEINISCOPEEND
add esp, 8
push 0
push dword ptr [ebp-8]
call ASTTYPEINIEND
add esp, 8
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
jmp .Lt_0084
.Lt_008D:
cmp dword ptr [ebp+8], -2147483648
jne .Lt_008F
mov dword ptr [ebp+8], 7
.Lt_008F:
.Lt_008E:
mov eax, dword ptr [ebp+8]
and eax, 480
je .Lt_0090
mov dword ptr [ebp-20], 22
jmp .Lt_0095
.Lt_0090:
mov eax, dword ptr [ebp+8]
and eax, 31
mov dword ptr [ebp-20], eax
.Lt_0095:
mov eax, dword ptr [ebp-20]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax], 1
jne .Lt_0093
push dword ptr [ebp+8]
push dword ptr [Lt_005D+4]
push dword ptr [Lt_005D]
call ASTNEWCONSTF
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_0092
.Lt_0093:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-4], eax
.Lt_0092:
jmp .Lt_0084
.Lt_0085:
cmp dword ptr [ebp-16], 18
ja .Lt_008D
mov eax, dword ptr [ebp-16]
jmp dword ptr [.LT_0094+eax*4]
.LT_0094:
.int .Lt_0087
.int .Lt_008D
.int .Lt_008D
.int .Lt_0088
.int .Lt_008D
.int .Lt_008D
.int .Lt_0089
.int .Lt_008D
.int .Lt_008D
.int .Lt_008D
.int .Lt_008D
.int .Lt_008D
.int .Lt_008D
.int .Lt_008D
.int .Lt_008D
.int .Lt_008D
.int .Lt_0088
.int .Lt_0088
.int .Lt_008A
.Lt_0084:
.Lt_0083:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTNEWCONSTZ, .-ASTNEWCONSTZ
.balign 16

.globl ASTLOADCONST
ASTLOADCONST:
.type ASTLOADCONST, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_0096:
cmp dword ptr [AST+136], 0
je .Lt_0099
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 511
mov dword ptr [ebp-8], ebx
mov ebx, dword ptr [ebp-8]
and ebx, 480
je .Lt_009A
mov dword ptr [ebp-12], 22
jmp .Lt_009E
.Lt_009A:
mov ebx, dword ptr [ebp-8]
and ebx, 31
mov dword ptr [ebp-12], ebx
.Lt_009E:
mov ebx, dword ptr [ebp-12]
imul ebx, 28
cmp dword ptr [SYMB_DTYPETB+ebx], 1
jne .Lt_009D
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+24]
push dword ptr [ebx+20]
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+8]
push dword ptr [ebp-8]
call dword ptr [IR+244]
add esp, 16
mov dword ptr [ebp-4], eax
jmp .Lt_009C
.Lt_009D:
mov eax, dword ptr [ebp+8]
push dword ptr [eax+24]
push dword ptr [eax+20]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+8]
push dword ptr [ebp-8]
call dword ptr [IR+240]
add esp, 16
mov dword ptr [ebp-4], eax
.Lt_009C:
.Lt_0099:
.Lt_0098:
.Lt_0097:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTLOADCONST, .-ASTLOADCONST
.balign 16

.globl ASTCONSTFLUSHTOINT
ASTCONSTFLUSHTOINT:
.type ASTCONSTFLUSHTOINT, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_009F:
push 0
push 0
push dword ptr [ebp+8]
push 0
push 7
call ASTNEWCONV
add esp, 20
mov dword ptr [ebp+8], eax
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+20]
mov ebx, dword ptr [eax+24]
mov dword ptr [ebp-8], ecx
mov dword ptr [ebp-4], ebx
push dword ptr [ebp+8]
call ASTDELNODE
add esp, 4
.Lt_00A0:
mov eax, dword ptr [ebp-8]
mov edx, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTCONSTFLUSHTOINT, .-ASTCONSTFLUSHTOINT
.balign 16

.globl ASTCONSTFLUSHTOSTR
ASTCONSTFLUSHTOSTR:
.type ASTCONSTFLUSHTOSTR, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_00A1:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_00A3
mov dword ptr [ebp-16], 22
jmp .Lt_00AC
.Lt_00A3:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-16], eax
.Lt_00AC:
mov eax, dword ptr [ebp-16]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax], 1
jne .Lt_00A6
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 511
cmp ebx, 15
jne .Lt_00A8
push 0
push -1
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+24]
push dword ptr [ebx+20]
call fb_DoubleToStr
add esp, 8
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
jmp .Lt_00A7
.Lt_00A8:
push 0
push -1
mov eax, dword ptr [ebp+8]
fld qword ptr [eax+20]
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
.Lt_00A7:
jmp .Lt_00A5
.Lt_00A6:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_00AA
mov dword ptr [ebp-20], 22
jmp .Lt_00AD
.Lt_00AA:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-20], eax
.Lt_00AD:
mov eax, dword ptr [ebp-20]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+8], 0
je .Lt_00A9
push 0
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+24]
push dword ptr [eax+20]
call fb_LongintToStr
add esp, 8
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
jmp .Lt_00A5
.Lt_00A9:
push 0
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+24]
push dword ptr [eax+20]
call fb_ULongintToStr
add esp, 8
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
.Lt_00A5:
push dword ptr [ebp+8]
call ASTDELNODE
add esp, 4
.Lt_00A2:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTCONSTFLUSHTOSTR, .-ASTCONSTFLUSHTOSTR
.balign 16

.globl ASTCONSTFLUSHTOWSTR
ASTCONSTFLUSHTOWSTR:
.type ASTCONSTFLUSHTOWSTR, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
mov dword ptr [ebp-4], 0
.Lt_00AE:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_00B0
mov dword ptr [ebp-8], 22
jmp .Lt_00BD
.Lt_00B0:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-8], eax
.Lt_00BD:
mov eax, dword ptr [ebp-8]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax], 1
jne .Lt_00B3
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 511
cmp ebx, 15
jne .Lt_00B5
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+24]
push dword ptr [ebx+20]
call fb_DoubleToWstr
add esp, 8
mov dword ptr [ebp-16], eax
push dword ptr [ebp-16]
push 65
push offset Lt_00BF
call fb_WstrAssign
add esp, 12
push dword ptr [ebp-16]
call fb_WstrDelete
add esp, 4
jmp .Lt_00B4
.Lt_00B5:
mov eax, dword ptr [ebp+8]
fld qword ptr [eax+20]
sub esp,4
fstp dword ptr [esp]
call fb_FloatToWstr
add esp, 4
mov dword ptr [ebp-16], eax
push dword ptr [ebp-16]
push 65
push offset Lt_00BF
call fb_WstrAssign
add esp, 12
push dword ptr [ebp-16]
call fb_WstrDelete
add esp, 4
.Lt_00B4:
jmp .Lt_00B2
.Lt_00B3:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_00B9
mov dword ptr [ebp-12], 22
jmp .Lt_00BE
.Lt_00B9:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-12], eax
.Lt_00BE:
mov eax, dword ptr [ebp-12]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+8], 0
je .Lt_00B8
mov eax, dword ptr [ebp+8]
push dword ptr [eax+24]
push dword ptr [eax+20]
call fb_LongintToWstr
add esp, 8
mov dword ptr [ebp-16], eax
push dword ptr [ebp-16]
push 65
push offset Lt_00BF
call fb_WstrAssign
add esp, 12
push dword ptr [ebp-16]
call fb_WstrDelete
add esp, 4
jmp .Lt_00B2
.Lt_00B8:
mov eax, dword ptr [ebp+8]
push dword ptr [eax+24]
push dword ptr [eax+20]
call fb_ULongintToWstr
add esp, 8
mov dword ptr [ebp-16], eax
push dword ptr [ebp-16]
push 65
push offset Lt_00BF
call fb_WstrAssign
add esp, 12
push dword ptr [ebp-16]
call fb_WstrDelete
add esp, 4
.Lt_00B2:
push dword ptr [ebp+8]
call ASTDELNODE
add esp, 4
mov eax, offset Lt_00BF
mov dword ptr [ebp-4], eax
.Lt_00AF:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTCONSTFLUSHTOWSTR, .-ASTCONSTFLUSHTOWSTR

.section .bss
.balign 4
	.lcomm	Lt_00BF,260

.section .text
.balign 16

.globl ASTCONSTGETASINT64
ASTCONSTGETASINT64:
.type ASTCONSTGETASINT64, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_00C0:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_00C2
mov dword ptr [ebp-12], 22
jmp .Lt_00C6
.Lt_00C2:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-12], eax
.Lt_00C6:
mov eax, dword ptr [ebp-12]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax], 1
jne .Lt_00C5
mov eax, dword ptr [ebp+8]
fld qword ptr [eax+20]
sub esp, 8
fistp qword ptr [esp]
pop ecx
pop ebx
mov dword ptr [ebp-8], ecx
mov dword ptr [ebp-4], ebx
jmp .Lt_00C4
.Lt_00C5:
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ecx+20]
mov ebx, dword ptr [ecx+24]
mov dword ptr [ebp-8], eax
mov dword ptr [ebp-4], ebx
.Lt_00C4:
.Lt_00C1:
mov eax, dword ptr [ebp-8]
mov edx, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTCONSTGETASINT64, .-ASTCONSTGETASINT64
.balign 16

.globl ASTCONSTGETASDOUBLE
ASTCONSTGETASDOUBLE:
.type ASTCONSTGETASDOUBLE, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_00C7:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_00C9
mov dword ptr [ebp-12], 22
jmp .Lt_00D0
.Lt_00C9:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-12], eax
.Lt_00D0:
mov eax, dword ptr [ebp-12]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax], 1
jne .Lt_00CC
mov eax, dword ptr [ebp+8]
push dword ptr [eax+20]
push dword ptr [eax+24]
pop dword ptr [ebp-4]
pop dword ptr [ebp-8]
jmp .Lt_00CB
.Lt_00CC:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_00CE
mov dword ptr [ebp-16], 22
jmp .Lt_00D1
.Lt_00CE:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-16], eax
.Lt_00D1:
mov eax, dword ptr [ebp-16]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+8], 0
je .Lt_00CD
mov eax, dword ptr [ebp+8]
fild qword ptr [eax+20]
fstp qword ptr [ebp-8]
jmp .Lt_00CB
.Lt_00CD:
mov eax, dword ptr [ebp+8]
fild qword ptr [eax+20]
cmp dword ptr [eax+24], 0
jns .Lt_00D2
push 0x403f
push 0x80000000
push 0
fldt [esp]
add esp, 12
faddp
.Lt_00D2:
fstp qword ptr [ebp-8]
.Lt_00CB:
.Lt_00C8:
fld qword ptr [ebp-8]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTCONSTGETASDOUBLE, .-ASTCONSTGETASDOUBLE
.balign 16

.globl ASTBUILDCONST
ASTBUILDCONST:
.type ASTBUILDCONST, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
mov dword ptr [ebp-4], 0
.Lt_00D3:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+24]
mov dword ptr [ebp-8], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+28]
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp-8]
and eax, 511
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 3
je .Lt_00D8
.Lt_00D9:
cmp dword ptr [ebp-16], 6
jne .Lt_00D7
.Lt_00D8:
push 0
push -2147483648
push 0
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax+52]
call ASTNEWVAR
add esp, 20
mov dword ptr [ebp-4], eax
jmp .Lt_00D5
.Lt_00D7:
push dword ptr [ebp-12]
push dword ptr [ebp-8]
mov eax, dword ptr [ebp+8]
lea ebx, [eax+52]
push ebx
call ASTNEWCONST
add esp, 12
mov dword ptr [ebp-4], eax
.Lt_00DA:
.Lt_00D5:
.Lt_00D4:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTBUILDCONST, .-ASTBUILDCONST
.balign 16

.globl ASTCONVERTRAWCONSTI
ASTCONVERTRAWCONSTI:
.type ASTCONVERTRAWCONSTI, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_00DB:
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_00DD
mov dword ptr [ebp-8], 22
jmp .Lt_00E1
.Lt_00DD:
mov ebx, dword ptr [ebp+16]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-8], eax
.Lt_00E1:
mov eax, dword ptr [ebp-8]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+8], 0
je .Lt_00DF
mov dword ptr [ebp-12], 12
jmp .Lt_00E2
.Lt_00DF:
mov dword ptr [ebp-12], 13
.Lt_00E2:
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [ebp-12]
mov dword ptr [eax+4], ebx
mov ebx, dword ptr [ebp+16]
mov dword ptr [ebx+8], 0
inc dword ptr [AST+232]
push 0
push 8
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call ASTNEWCONV
add esp, 20
mov dword ptr [ebp+16], eax
dec dword ptr [AST+232]
mov eax, dword ptr [ebp+16]
mov dword ptr [ebp-4], eax
.Lt_00DC:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTCONVERTRAWCONSTI, .-ASTCONVERTRAWCONSTI
.balign 16
fb_ctor__astznodezconst:
.type fb_ctor__astznodezconst, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__astznodezconst, .-fb_ctor__astznodezconst
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
	#FreeBASIC-1.01.0-source/src/compiler/ast-node-const.bas' compilation took 0.02770796266850084 secs

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
.balign 8
Lt_005D:	.quad	0x0000000000000000

.section .ctors, "aw", @progbits
.int fb_ctor__astznodezconst
