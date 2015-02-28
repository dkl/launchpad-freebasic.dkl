	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/parser-expr-constant.bas' compilation started at 14:16:36 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl CCONSTANT
CCONSTANT:
.type CCONSTANT, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_005F:
push dword ptr [ebp+8]
call SYMBCHECKACCESS
add esp, 4
test eax, eax
jne .Lt_0062
push 0
push 0
push 201
call ERRREPORT
add esp, 12
.Lt_0062:
.Lt_0061:
push 0
call LEXSKIPTOKEN
add esp, 4
push dword ptr [ebp+8]
call ASTBUILDCONST
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_0060:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size CCONSTANT, .-CCONSTANT
.balign 16

.globl CSTRLITERAL
CSTRLITERAL:
.type CSTRLITERAL, @function
push ebp
mov ebp, esp
sub esp, 32
push ebx
mov dword ptr [ebp-4], 0
.Lt_0063:
mov dword ptr [ebp-28], 0
.Lt_0065:
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [eax+16532]
mov eax, dword ptr [ebx+4112]
mov dword ptr [ebp-12], eax
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [eax+16532]
cmp dword ptr [ebx+8], 6
je .Lt_0069
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 263
jne .Lt_006B
lea eax, [ebp-16]
push eax
lea eax, [ebp-12]
push eax
call LEXGETTEXT
push eax
call HREESCAPE
add esp, 12
mov dword ptr [ebp-20], eax
jmp .Lt_006A
.Lt_006B:
call LEXGETTEXT
mov dword ptr [ebp-20], eax
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [eax+16532]
cmp dword ptr [ebx+4120], 0
je .Lt_006D
mov ebx, dword ptr [ENV+176]
and ebx, 1
test ebx, ebx
je .Lt_006F
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 264
je .Lt_0071
push dword ptr [ebp-20]
call HHASESCAPE
add esp, 4
test eax, eax
je .Lt_0073
push 6
push dword ptr [ebp-20]
push 16
call ERRREPORTWARN
add esp, 12
.Lt_0073:
.Lt_0072:
.Lt_0071:
.Lt_0070:
.Lt_006F:
.Lt_006E:
.Lt_006D:
.Lt_006C:
mov dword ptr [ebp-16], 0
.Lt_006A:
cmp dword ptr [ebp-16], 0
jne .Lt_0075
push dword ptr [ebp-12]
push dword ptr [ebp-20]
call SYMBALLOCSTRCONST
add esp, 8
mov dword ptr [ebp-8], eax
jmp .Lt_0074
.Lt_0075:
push dword ptr [ebp-12]
push dword ptr [ebp-20]
call fb_StrToWstr
add esp, 4
mov dword ptr [ebp-32], eax
push dword ptr [ebp-32]
call SYMBALLOCWSTRCONST
add esp, 8
mov dword ptr [ebp-8], eax
push dword ptr [ebp-32]
call fb_WstrDelete
add esp, 4
.Lt_0074:
jmp .Lt_0068
.Lt_0069:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 263
jne .Lt_0078
lea eax, [ebp-12]
push eax
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [eax+16532]
lea eax, [ebx+12]
push eax
call HREESCAPEW
add esp, 8
mov dword ptr [ebp-24], eax
jmp .Lt_0077
.Lt_0078:
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [eax+16532]
lea eax, [ebx+12]
mov dword ptr [ebp-24], eax
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [eax+16532]
cmp dword ptr [ebx+4120], 0
je .Lt_007A
mov ebx, dword ptr [ENV+176]
and ebx, 1
test ebx, ebx
je .Lt_007C
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 264
je .Lt_007E
push dword ptr [ebp-24]
call HHASESCAPEW
add esp, 4
test eax, eax
je .Lt_0080
push 1
push 0
push 16
call ERRREPORTWARN
add esp, 12
.Lt_0080:
.Lt_007F:
.Lt_007E:
.Lt_007D:
.Lt_007C:
.Lt_007B:
.Lt_007A:
.Lt_0079:
.Lt_0077:
push dword ptr [ebp-12]
push dword ptr [ebp-24]
call SYMBALLOCWSTRCONST
add esp, 8
mov dword ptr [ebp-8], eax
.Lt_0068:
cmp dword ptr [ebp-28], 0
jne .Lt_0082
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp-8]
call ASTNEWVAR
add esp, 20
mov dword ptr [ebp-28], eax
jmp .Lt_0081
.Lt_0082:
push 1
push 0
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp-8]
call ASTNEWVAR
add esp, 20
push eax
push dword ptr [ebp-28]
push 28
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp-28], eax
.Lt_0081:
cmp dword ptr [ebp+8], 0
je .Lt_0084
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXGETCLASS
add esp, 4
cmp eax, 4
je .Lt_0086
jmp .Lt_0066
.Lt_0086:
.Lt_0085:
jmp .Lt_0083
.Lt_0084:
jmp .Lt_0066
.Lt_0083:
.Lt_0067:
jmp .Lt_0065
.Lt_0066:
mov eax, dword ptr [ebp-28]
mov dword ptr [ebp-4], eax
.Lt_0064:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CSTRLITERAL, .-CSTRLITERAL
.balign 16

.globl CNUMLITERAL
CNUMLITERAL:
.type CNUMLITERAL, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_0087:
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [eax+16532]
mov eax, dword ptr [ebx+8]
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 15
jne .Lt_008A
.Lt_008B:
push dword ptr [ebp-8]
call LEXGETTEXT
push eax
call fb_StrAllocTempDescZ
add esp, 4
push eax
call fb_VAL
add esp, 4
sub esp,8
fstp qword ptr [esp]
call ASTNEWCONSTF
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_0089
.Lt_008A:
cmp dword ptr [ebp-8], 14
jne .Lt_008C
.Lt_008D:
call LEXGETTEXT
push eax
call fb_StrAllocTempDescZ
add esp, 4
push eax
call fb_VAL
add esp, 4
fstp dword ptr [ebp-12]
push dword ptr [ebp-8]
fld dword ptr [ebp-12]
sub esp,8
fstp qword ptr [esp]
call ASTNEWCONSTF
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_0089
.Lt_008C:
mov eax, dword ptr [ebp-8]
and eax, 480
je .Lt_008F
mov dword ptr [ebp-12], 22
jmp .Lt_0095
.Lt_008F:
mov eax, dword ptr [ebp-8]
and eax, 31
mov dword ptr [ebp-12], eax
.Lt_0095:
mov eax, dword ptr [ebp-12]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+8], 0
je .Lt_0092
push 0
push dword ptr [ebp-8]
call LEXGETTEXT
push eax
call fb_StrAllocTempDescZ
add esp, 4
push eax
call fb_VALLNG
add esp, 4
push edx
push eax
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-4], eax
jmp .Lt_0091
.Lt_0092:
push 0
push dword ptr [ebp-8]
call LEXGETTEXT
push eax
call fb_StrAllocTempDescZ
add esp, 4
push eax
call fb_VALULNG
add esp, 4
push edx
push eax
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-4], eax
.Lt_0091:
.Lt_008E:
.Lt_0089:
cmp dword ptr [ebp+8], 0
je .Lt_0094
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0094:
.Lt_0093:
.Lt_0088:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CNUMLITERAL, .-CNUMLITERAL
.balign 16
fb_ctor__parserzexprzconstant:
.type fb_ctor__parserzexprzconstant, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__parserzexprzconstant, .-fb_ctor__parserzexprzconstant
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
	#fbc-1.01.0/src/compiler/parser-expr-constant.bas' compilation took 0.02594395086634904 secs

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

.section .ctors, "aw", @progbits
.int fb_ctor__parserzexprzconstant
