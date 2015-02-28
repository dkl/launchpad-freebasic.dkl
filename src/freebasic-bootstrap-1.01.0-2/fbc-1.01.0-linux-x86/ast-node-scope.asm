	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/ast-node-scope.bas' compilation started at 14:16:34 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl ASTSCOPEBEGIN
ASTSCOPEBEGIN:
.type ASTSCOPEBEGIN, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_005F:
cmp dword ptr [PARSER+92], 128
jb .Lt_0062
mov dword ptr [ebp-4], 0
jmp .Lt_0060
.Lt_0062:
.Lt_0061:
push 0
push -2147483648
push 33
call ASTNEWNODE
add esp, 12
mov dword ptr [ebp-8], eax
push dword ptr [ebp-8]
call ASTADD
add esp, 4
push dword ptr [ebp-8]
call SYMBADDSCOPE
add esp, 4
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp-12]
mov dword ptr [eax+12], ebx
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [AST+132]
mov dword ptr [ebx+20], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [PARSER+28]
mov dword ptr [eax+24], ebx
inc dword ptr [PARSER+28]
inc dword ptr [PARSER+92]
mov ebx, dword ptr [ebp-12]
mov dword ptr [PARSER+104], ebx
mov ebx, dword ptr [ebp-8]
mov dword ptr [AST+132], ebx
mov ebx, dword ptr [ebp-12]
lea eax, [ebx+56]
mov dword ptr [SYMB+98524], eax
push dword ptr [ebp-12]
call dword ptr [IR+48]
add esp, 4
push dword ptr [ebp-12]
push 110
call ASTNEWDBG
add esp, 8
push eax
call ASTADD
add esp, 4
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0060:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTSCOPEBEGIN, .-ASTSCOPEBEGIN
.balign 16

.globl ASTSCOPEBREAK
ASTSCOPEBREAK:
.type ASTSCOPEBREAK, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0067:
push 0
push -2147483648
push 35
call ASTNEWNODE
add esp, 12
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [ebp+8]
mov dword ptr [eax+12], ebx
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [AST+132]
mov dword ptr [ebx+20], eax
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [PARSER+92]
mov dword ptr [eax+24], ebx
mov ebx, dword ptr [LEX+839664]
mov eax, dword ptr [ebp-4]
mov ecx, dword ptr [ebx+16548]
mov dword ptr [eax+28], ecx
mov ecx, dword ptr [ebp-4]
mov eax, dword ptr [PARSER+28]
mov dword ptr [ecx+32], eax
push 0
push dword ptr [ebp+8]
push 97
call ASTNEWBRANCH
add esp, 12
mov ecx, dword ptr [ebp-4]
mov dword ptr [ecx+56], eax
mov eax, dword ptr [ebp-4]
push dword ptr [eax+56]
call ASTADD
add esp, 4
push dword ptr [ebp-4]
mov eax, dword ptr [AST+40]
lea ecx, [eax+40]
push ecx
call HADDTOBREAKLIST
add esp, 8
.Lt_0068:
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTSCOPEBREAK, .-ASTSCOPEBREAK
.balign 16

.globl ASTSCOPEEND
ASTSCOPEEND:
.type ASTSCOPEEND, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0069:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+12]
mov dword ptr [ebp-4], ebx
inc dword ptr [PARSER+28]
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [PARSER+28]
mov dword ptr [ebx+28], eax
mov eax, dword ptr [ebp-4]
push dword ptr [eax+64]
call ASTSCOPEDESTROYVARS
add esp, 4
push dword ptr [ebp-4]
call SYMBDELSCOPETB
add esp, 4
push dword ptr [ebp-4]
call dword ptr [IR+52]
add esp, 4
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+148]
mov dword ptr [SYMB+98524], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+20]
mov dword ptr [AST+132], eax
mov eax, dword ptr [AST+132]
mov ebx, dword ptr [eax+12]
mov dword ptr [PARSER+104], ebx
add dword ptr [PARSER+92], 4294967295
push dword ptr [ebp-4]
push 111
call ASTNEWDBG
add esp, 8
push eax
call ASTADD
add esp, 4
push 0
push -2147483648
push 34
call ASTNEWNODE
add esp, 12
mov dword ptr [ebp+8], eax
push dword ptr [ebp+8]
call ASTADD
add esp, 4
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-4]
mov dword ptr [eax+12], ebx
.Lt_006A:
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTSCOPEEND, .-ASTSCOPEEND
.balign 16

.globl ASTSCOPEUPDBREAKLIST
ASTSCOPEUPDBREAKLIST:
.type ASTSCOPEUPDBREAKLIST, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_006B:
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+40]
mov dword ptr [ebp-8], ebx
.Lt_006D:
cmp dword ptr [ebp-8], 0
je .Lt_006E
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+36]
cmp dword ptr [ebx+12], ecx
jne .Lt_0070
push 0
push dword ptr [ebp-8]
call HDELLOCALS
add esp, 8
jmp .Lt_006F
.Lt_0070:
push dword ptr [ebp-8]
push dword ptr [ebp+8]
call HCHECKBRANCH
add esp, 8
test eax, eax
jne .Lt_0072
jmp .Lt_006C
.Lt_0072:
.Lt_0071:
.Lt_006F:
mov eax, dword ptr [ebp-8]
mov ecx, dword ptr [eax+68]
mov dword ptr [ebp-8], ecx
jmp .Lt_006D
.Lt_006E:
mov dword ptr [ebp-4], -1
.Lt_006C:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTSCOPEUPDBREAKLIST, .-ASTSCOPEUPDBREAKLIST
.balign 16

.globl ASTSCOPEDESTROYVARS
ASTSCOPEDESTROYVARS:
.type ASTSCOPEDESTROYVARS, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_00FA:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
.Lt_00FC:
cmp dword ptr [ebp-4], 0
je .Lt_00FD
mov eax, dword ptr [ebp-4]
cmp dword ptr [eax], 1
jne .Lt_00FF
push dword ptr [ebp-4]
call SYMBGETVARHASDTOR
add esp, 4
test eax, eax
je .Lt_0101
push -1
push dword ptr [ebp-4]
call _Z19ASTBUILDVARDTORCALLP8FBSYMBOLi
add esp, 8
push eax
call ASTADD
add esp, 4
.Lt_0101:
.Lt_0100:
.Lt_00FF:
.Lt_00FE:
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+156]
mov dword ptr [ebp-4], ebx
jmp .Lt_00FC
.Lt_00FD:
.Lt_00FB:
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTSCOPEDESTROYVARS, .-ASTSCOPEDESTROYVARS
.balign 16

.globl ASTSCOPEALLOCLOCALS
ASTSCOPEALLOCLOCALS:
.type ASTSCOPEALLOCLOCALS, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0102:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
cmp dword ptr [ENV+104], 1
jne .Lt_0105
.Lt_0106:
cmp dword ptr [ebp-4], 0
je .Lt_0107
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax]
cmp ebx, 1
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp-4]
mov ecx, dword ptr [eax+4]
and ecx, 4194304
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
and ebx, ecx
je .Lt_0109
push dword ptr [ebp-4]
call dword ptr [IR+176]
add esp, 4
.Lt_0109:
.Lt_0108:
mov ecx, dword ptr [ebp-4]
mov ebx, dword ptr [ecx+160]
mov dword ptr [ebp-4], ebx
jmp .Lt_0106
.Lt_0107:
jmp .Lt_0104
.Lt_0105:
.Lt_010A:
cmp dword ptr [ebp-4], 0
je .Lt_010B
mov ebx, dword ptr [ebp-4]
mov ecx, dword ptr [ebx]
cmp ecx, 1
sete cl
shr ecx, 1
sbb ecx, ecx
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebx+4]
and eax, 3
test eax, eax
sete al
shr eax, 1
sbb eax, eax
and ecx, eax
je .Lt_010D
mov eax, dword ptr [ebp-4]
mov ecx, dword ptr [eax+4]
and ecx, 458752
test ecx, ecx
je .Lt_010F
push dword ptr [ebp-4]
push dword ptr [PARSER+100]
call dword ptr [IR+36]
add esp, 8
jmp .Lt_010E
.Lt_010F:
push dword ptr [ebp-4]
push dword ptr [PARSER+100]
call dword ptr [IR+40]
add esp, 8
.Lt_010E:
.Lt_010D:
.Lt_010C:
mov ecx, dword ptr [ebp-4]
mov eax, dword ptr [ecx+160]
mov dword ptr [ebp-4], eax
jmp .Lt_010A
.Lt_010B:
.Lt_0104:
.Lt_0103:
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTSCOPEALLOCLOCALS, .-ASTSCOPEALLOCLOCALS
.balign 16

.globl ASTLOADSCOPEBEGIN
ASTLOADSCOPEBEGIN:
.type ASTLOADSCOPEBEGIN, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0114:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+12]
mov dword ptr [ebp-8], ebx
mov ebx, dword ptr [PARSER+100]
mov eax, dword ptr [ebx+108]
mov ebx, dword ptr [ebp-8]
mov ecx, dword ptr [eax+8]
mov dword ptr [ebx+84], ecx
cmp dword ptr [AST+136], 0
je .Lt_0117
push dword ptr [ebp-8]
call dword ptr [IR+168]
add esp, 4
mov ecx, dword ptr [ebp-8]
push dword ptr [ecx+60]
call ASTSCOPEALLOCLOCALS
add esp, 4
.Lt_0117:
.Lt_0116:
mov dword ptr [ebp-4], 0
.Lt_0115:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTLOADSCOPEBEGIN, .-ASTLOADSCOPEBEGIN
.balign 16

.globl ASTLOADSCOPEEND
ASTLOADSCOPEEND:
.type ASTLOADSCOPEEND, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0118:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+12]
mov dword ptr [ebp-8], ebx
cmp dword ptr [AST+136], 0
je .Lt_011B
push dword ptr [ebp-8]
call dword ptr [IR+172]
add esp, 4
.Lt_011B:
.Lt_011A:
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [PARSER+100]
mov ecx, dword ptr [eax+108]
mov eax, dword ptr [ebx+84]
mov dword ptr [ecx+8], eax
mov dword ptr [ebp-4], 0
.Lt_0119:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTLOADSCOPEEND, .-ASTLOADSCOPEEND
.balign 16

.globl ASTTEMPSCOPEBEGIN
ASTTEMPSCOPEBEGIN:
.type ASTTEMPSCOPEBEGIN, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_011C:
push dword ptr [ebp+12]
call SYMBADDSCOPE
add esp, 4
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [PARSER+104]
mov dword ptr [eax], ebx
inc dword ptr [PARSER+92]
mov ebx, dword ptr [ebp-8]
mov dword ptr [PARSER+104], ebx
mov ebx, dword ptr [ebp-8]
lea eax, [ebx+56]
mov dword ptr [SYMB+98524], eax
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_011D:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTTEMPSCOPEBEGIN, .-ASTTEMPSCOPEBEGIN
.balign 16

.globl ASTTEMPSCOPEEND
ASTTEMPSCOPEEND:
.type ASTTEMPSCOPEEND, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_011E:
push dword ptr [ebp+8]
call SYMBDELSCOPETB
add esp, 4
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+148]
mov dword ptr [SYMB+98524], ebx
push dword ptr [ebp+8]
call SYMBFREESYMBOL_UNLINKONLY
add esp, 4
mov ebx, dword ptr [ebp+12]
mov dword ptr [PARSER+104], ebx
add dword ptr [PARSER+92], 4294967295
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+60]
mov dword ptr [ebp-4], eax
.Lt_0120:
cmp dword ptr [ebp-4], 0
je .Lt_0121
mov eax, dword ptr [ebp-4]
cmp dword ptr [eax], 1
jne .Lt_0123
push dword ptr [ebp-4]
call ASTDTORLISTDEL
add esp, 4
.Lt_0123:
.Lt_0122:
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+160]
mov dword ptr [ebp-4], ebx
jmp .Lt_0120
.Lt_0121:
.Lt_011F:
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTTEMPSCOPEEND, .-ASTTEMPSCOPEEND
.balign 16

.globl ASTTEMPSCOPECLONE
ASTTEMPSCOPECLONE:
.type ASTTEMPSCOPECLONE, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_0124:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+60]
mov dword ptr [ebp-4], ebx
.Lt_0126:
cmp dword ptr [ebp-4], 0
je .Lt_0127
push dword ptr [ebp-4]
call SYMBCLONESYMBOL
add esp, 4
mov dword ptr [ebp-8], eax
push dword ptr [ebp-8]
push dword ptr [ebp-4]
push dword ptr [ebp+12]
call ASTREPLACESYMBOLONTREE
add esp, 12
mov eax, dword ptr [ebp-8]
cmp dword ptr [eax], 1
jne .Lt_0129
push dword ptr [ebp-8]
call ASTDTORLISTADD
add esp, 4
.Lt_0129:
.Lt_0128:
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+160]
mov dword ptr [ebp-4], ebx
jmp .Lt_0126
.Lt_0127:
.Lt_0125:
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTTEMPSCOPECLONE, .-ASTTEMPSCOPECLONE
.balign 16

.globl ASTTEMPSCOPEDELETE
ASTTEMPSCOPEDELETE:
.type ASTTEMPSCOPEDELETE, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_012A:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+60]
mov dword ptr [ebp-4], ebx
.Lt_012C:
cmp dword ptr [ebp-4], 0
je .Lt_012D
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebx+160]
mov dword ptr [ebp-8], eax
push dword ptr [ebp-4]
call SYMBFREESYMBOL_REMONLY
add esp, 4
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
jmp .Lt_012C
.Lt_012D:
push dword ptr [ebp+8]
call SYMBFREESYMBOL_REMONLY
add esp, 4
.Lt_012B:
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTTEMPSCOPEDELETE, .-ASTTEMPSCOPEDELETE
.balign 16
fb_ctor__astznodezscope:
.type fb_ctor__astznodezscope, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__astznodezscope, .-fb_ctor__astznodezscope
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
HADDTOBREAKLIST:
.type HADDTOBREAKLIST, @function
push ebp
mov ebp, esp
push ebx
.Lt_0063:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+4], 0
je .Lt_0066
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
mov eax, dword ptr [ebp+12]
mov dword ptr [ebx+68], eax
jmp .Lt_0065
.Lt_0066:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+12]
mov dword ptr [eax], ebx
.Lt_0065:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [ebx+4]
mov dword ptr [eax+64], ecx
mov ecx, dword ptr [ebp+12]
mov dword ptr [ecx+68], 0
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ebp+12]
mov dword ptr [ecx+4], eax
.Lt_0064:
pop ebx
mov esp, ebp
pop ebp
ret
.size HADDTOBREAKLIST, .-HADDTOBREAKLIST
.balign 16
HBRANCHERROR:
.type HBRANCHERROR, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
.Lt_0073:
mov eax, dword ptr [ENV+168]
mov dword ptr [Lt_012E], eax
mov dword ptr [ENV+168], 0
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+12]
cmp dword ptr [ebx+12], 0
je .Lt_0076
push 0
push -1
push 0
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+12]
push dword ptr [eax+12]
push 11
push offset Lt_0077
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_012F
call fb_StrAssign
add esp, 20
cmp dword ptr [ebp+16], 0
je .Lt_007A
push 0
push 3
push offset Lt_007B
push -1
push offset Lt_012F
call fb_StrConcatAssign
add esp, 20
.Lt_007A:
.Lt_0079:
.Lt_0076:
.Lt_0075:
cmp dword ptr [ebp+16], 0
je .Lt_007D
push 0
push 7
push offset Lt_007E
push -1
push offset Lt_012F
call fb_StrConcatAssign
add esp, 20
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+24]
and ebx, 511
cmp ebx, 16
jne .Lt_0080
push 0
push 9
push offset Lt_0081
push -1
push offset Lt_012F
call fb_StrConcatAssign
add esp, 20
jmp .Lt_007F
.Lt_0080:
mov eax, dword ptr [ebp+16]
cmp dword ptr [eax+56], 0
je .Lt_0082
push 0
push 8
push offset Lt_0083
push -1
push offset Lt_012F
call fb_StrConcatAssign
add esp, 20
jmp .Lt_007F
.Lt_0082:
push 0
push 9
push offset Lt_0084
push -1
push offset Lt_012F
call fb_StrConcatAssign
add esp, 20
.Lt_007F:
push 0
push -1
push 0
mov eax, dword ptr [ebp+16]
push dword ptr [eax+12]
push -1
push offset Lt_012F
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_012F
call fb_StrAssign
add esp, 20
.Lt_007D:
.Lt_007C:
push 0
push 1
mov eax, dword ptr [ebp+12]
push dword ptr [eax+28]
push dword ptr [Lt_012F]
push dword ptr [ebp+8]
call ERRREPORTEX
add esp, 20
mov eax, dword ptr [Lt_012E]
mov dword ptr [ENV+168], eax
.Lt_0074:
pop ebx
mov esp, ebp
pop ebp
ret
.size HBRANCHERROR, .-HBRANCHERROR

.section .bss
.balign 4
	.lcomm	Lt_012E,4
.balign 4
	.lcomm	Lt_012F,12

.section .text
.balign 16
HBRANCHWARNING:
.type HBRANCHWARNING, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
.Lt_0086:
mov eax, dword ptr [ENV+168]
mov dword ptr [Lt_0130], eax
mov dword ptr [ENV+168], 0
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+12]
cmp dword ptr [ebx+12], 0
je .Lt_0089
push 0
push -1
push 0
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+12]
push dword ptr [eax+12]
push 11
push offset Lt_0077
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_0131
call fb_StrAssign
add esp, 20
cmp dword ptr [ebp+16], 0
je .Lt_008C
push 0
push 3
push offset Lt_007B
push -1
push offset Lt_0131
call fb_StrConcatAssign
add esp, 20
.Lt_008C:
.Lt_008B:
.Lt_0089:
.Lt_0088:
cmp dword ptr [ebp+16], 0
je .Lt_008E
push 0
push 11
push offset Lt_008F
push -1
push offset Lt_0131
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push 0
mov eax, dword ptr [ebp+16]
push dword ptr [eax+12]
push -1
push offset Lt_0131
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_0131
call fb_StrAssign
add esp, 20
.Lt_008E:
.Lt_008D:
push 1
mov eax, dword ptr [ebp+12]
push dword ptr [eax+28]
push dword ptr [Lt_0131]
push dword ptr [ebp+8]
call ERRREPORTWARNEX
add esp, 16
mov eax, dword ptr [Lt_0130]
mov dword ptr [ENV+168], eax
.Lt_0087:
pop ebx
mov esp, ebp
pop ebp
ret
.size HBRANCHWARNING, .-HBRANCHWARNING

.section .bss
.balign 4
	.lcomm	Lt_0130,4
.balign 4
	.lcomm	Lt_0131,12

.section .text
.balign 16
HFINDCOMMONPARENT:
.type HFINDCOMMONPARENT, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
mov dword ptr [ebp-4], 0
.Lt_0091:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+52]
mov dword ptr [ebp-8], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+12]
movzx ebx, word ptr [eax+32]
mov dword ptr [ebp-12], ebx
mov ebx, dword ptr [ebp+12]
movzx eax, word ptr [ebx+32]
mov dword ptr [ebp-16], eax
mov eax, dword ptr [ebp-16]
cmp dword ptr [ebp-12], eax
jle .Lt_0094
.Lt_0095:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+20]
mov dword ptr [ebp+8], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+12]
movzx ebx, word ptr [eax+32]
mov dword ptr [ebp-12], ebx
.Lt_0097:
mov ebx, dword ptr [ebp-16]
cmp dword ptr [ebp-12], ebx
jne .Lt_0095
.Lt_0096:
jmp .Lt_0093
.Lt_0094:
mov ebx, dword ptr [ebp-16]
cmp dword ptr [ebp-12], ebx
jge .Lt_0098
.Lt_0099:
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx+20]
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+12]
movzx eax, word ptr [ebx+32]
mov dword ptr [ebp-16], eax
.Lt_009B:
mov eax, dword ptr [ebp-12]
cmp dword ptr [ebp-16], eax
jne .Lt_0099
.Lt_009A:
.Lt_0098:
.Lt_0093:
.Lt_009C:
mov eax, dword ptr [ebp-8]
cmp dword ptr [ebp+8], eax
je .Lt_009D
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+20]
mov dword ptr [ebp+8], ebx
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx+20]
mov dword ptr [ebp-8], eax
jmp .Lt_009C
.Lt_009D:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+12]
mov dword ptr [ebp-4], ebx
.Lt_0092:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HFINDCOMMONPARENT, .-HFINDCOMMONPARENT
.balign 16
HCHECKCROSSING:
.type HCHECKCROSSING, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_009E:
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax], 15
jne .Lt_00A1
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+60]
mov dword ptr [ebp-4], ebx
jmp .Lt_00A0
.Lt_00A1:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+56]
mov dword ptr [ebp-4], eax
.Lt_00A0:
.Lt_00A2:
cmp dword ptr [ebp-4], 0
je .Lt_00A3
mov eax, dword ptr [ebp-4]
cmp dword ptr [eax], 1
jne .Lt_00A5
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+92]
mov dword ptr [ebp-8], ebx
mov ebx, dword ptr [ebp+16]
cmp dword ptr [ebp-8], ebx
jle .Lt_00A7
mov ebx, dword ptr [ebp+20]
cmp dword ptr [ebp-8], ebx
jge .Lt_00A9
push dword ptr [ebp-4]
call SYMBGETVARHASCTOR
add esp, 4
test eax, eax
je .Lt_00AB
push dword ptr [ebp-4]
push dword ptr [ebp+8]
push 104
call HBRANCHERROR
add esp, 12
jmp .Lt_00AA
.Lt_00AB:
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+4]
and ebx, 4194307
test ebx, ebx
jne .Lt_00AD
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebx+8]
and eax, 2048
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_00AF
push dword ptr [ebp-4]
push dword ptr [ebp+8]
push 14
call HBRANCHWARNING
add esp, 12
.Lt_00AF:
.Lt_00AE:
.Lt_00AD:
.Lt_00AC:
.Lt_00AA:
.Lt_00A9:
.Lt_00A8:
.Lt_00A7:
.Lt_00A6:
.Lt_00A5:
.Lt_00A4:
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+160]
mov dword ptr [ebp-4], ebx
jmp .Lt_00A2
.Lt_00A3:
.Lt_009F:
pop ebx
mov esp, ebp
pop ebp
ret
.size HCHECKCROSSING, .-HCHECKCROSSING
.balign 16
HCHECKSCOPELOCALS:
.type HCHECKSCOPELOCALS, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
.Lt_00B0:
cmp dword ptr [ebp+12], 0
jne .Lt_00B3
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+20]
mov eax, dword ptr [ebx+12]
mov dword ptr [ebp+12], eax
.Lt_00B3:
.Lt_00B2:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+32]
mov dword ptr [ebp-16], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+12]
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+60]
mov dword ptr [ebp-12], ebx
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebx+52]
mov dword ptr [ebp-8], eax
.Lt_00B4:
push dword ptr [ebp-12]
push 0
push dword ptr [ebp-8]
push dword ptr [ebp+8]
call HCHECKCROSSING
add esp, 16
mov eax, dword ptr [ebp-8]
cmp dword ptr [eax+148], 0
jne .Lt_00B8
jmp .Lt_00B5
.Lt_00B8:
.Lt_00B7:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+148]
mov eax, dword ptr [ebx]
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp+12]
cmp dword ptr [ebp-8], eax
jne .Lt_00BA
mov eax, dword ptr [ebp-16]
cmp dword ptr [ebp-12], eax
jle .Lt_00BC
push dword ptr [ebp-12]
push dword ptr [ebp-16]
push dword ptr [ebp-8]
push dword ptr [ebp+8]
call HCHECKCROSSING
add esp, 16
.Lt_00BC:
.Lt_00BB:
jmp .Lt_00B5
.Lt_00BA:
.Lt_00B9:
.Lt_00B6:
jmp .Lt_00B4
.Lt_00B5:
.Lt_00B1:
pop ebx
mov esp, ebp
pop ebp
ret
.size HCHECKSCOPELOCALS, .-HCHECKSCOPELOCALS
.balign 16
HDESTROYBLOCKLOCALS:
.type HDESTROYBLOCKLOCALS, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
.Lt_00BD:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 15
jne .Lt_00C0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+64]
mov dword ptr [ebp-4], ebx
jmp .Lt_00BF
.Lt_00C0:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+60]
mov dword ptr [ebp-4], eax
.Lt_00BF:
.Lt_00C1:
cmp dword ptr [ebp-4], 0
je .Lt_00C2
mov eax, dword ptr [ebp-4]
cmp dword ptr [eax], 1
jne .Lt_00C4
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+92]
mov dword ptr [ebp-12], ebx
mov ebx, dword ptr [ebp+12]
cmp dword ptr [ebp-12], ebx
jle .Lt_00C6
mov ebx, dword ptr [ebp+16]
cmp dword ptr [ebp-12], ebx
jge .Lt_00C8
push dword ptr [ebp-4]
call SYMBGETVARHASDTOR
add esp, 4
test eax, eax
je .Lt_00CA
push -1
push dword ptr [ebp-4]
call _Z19ASTBUILDVARDTORCALLP8FBSYMBOLi
add esp, 8
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
je .Lt_00CC
push dword ptr [ebp+20]
push dword ptr [ebp-8]
call ASTADDAFTER
add esp, 8
mov dword ptr [ebp+20], eax
.Lt_00CC:
.Lt_00CB:
.Lt_00CA:
.Lt_00C9:
.Lt_00C8:
.Lt_00C7:
.Lt_00C6:
.Lt_00C5:
.Lt_00C4:
.Lt_00C3:
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+156]
mov dword ptr [ebp-4], ebx
jmp .Lt_00C1
.Lt_00C2:
.Lt_00BE:
pop ebx
mov esp, ebp
pop ebp
ret
.size HDESTROYBLOCKLOCALS, .-HDESTROYBLOCKLOCALS
.balign 16
HDELBACKWARDLOCALS:
.type HDELBACKWARDLOCALS, @function
push ebp
mov ebp, esp
push ebx
.Lt_00CD:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
push dword ptr [ebx+64]
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+32]
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+12]
push dword ptr [eax+60]
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+20]
push dword ptr [ebx+12]
call HDESTROYBLOCKLOCALS
add esp, 16
.Lt_00CE:
pop ebx
mov esp, ebp
pop ebp
ret
.size HDELBACKWARDLOCALS, .-HDELBACKWARDLOCALS
.balign 16
HDELLOCALS:
.type HDELLOCALS, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
.Lt_00CF:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+12]
mov eax, dword ptr [ebx+60]
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+32]
mov dword ptr [ebp-12], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+20]
mov dword ptr [ebp-16], eax
.Lt_00D1:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
push dword ptr [ebx+64]
push dword ptr [ebp-12]
push 0
mov ebx, dword ptr [ebp-16]
push dword ptr [ebx+12]
call HDESTROYBLOCKLOCALS
add esp, 16
mov ebx, dword ptr [ebp-16]
mov eax, dword ptr [ebx+20]
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 0
jne .Lt_00D5
jmp .Lt_00D2
.Lt_00D5:
.Lt_00D4:
mov eax, dword ptr [ebp-16]
mov ebx, dword ptr [ebp-8]
cmp ebx, dword ptr [eax+24]
setge bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
je .Lt_00D6
mov ebx, dword ptr [ebp-16]
mov eax, dword ptr [ebp-8]
cmp eax, dword ptr [ebx+28]
setl al
shr eax, 1
sbb eax, eax
test eax, eax
setne al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-20], eax
jmp .Lt_0133
.Lt_00D6:
mov dword ptr [ebp-20], 0
.Lt_0133:
cmp dword ptr [ebp-20], 0
je .Lt_00D9
cmp dword ptr [ebp+12], 0
je .Lt_00DB
mov eax, dword ptr [ebp-12]
cmp dword ptr [ebp-8], eax
jg .Lt_00DD
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
push dword ptr [ebx+64]
push dword ptr [ebp-12]
push dword ptr [ebp-8]
mov ebx, dword ptr [ebp-16]
push dword ptr [ebx+12]
call HDESTROYBLOCKLOCALS
add esp, 16
.Lt_00DD:
.Lt_00DC:
.Lt_00DB:
.Lt_00DA:
jmp .Lt_00D2
.Lt_00D9:
.Lt_00D8:
.Lt_00D3:
jmp .Lt_00D1
.Lt_00D2:
.Lt_00D0:
pop ebx
mov esp, ebp
pop ebp
ret
.size HDELLOCALS, .-HDELLOCALS
.balign 16
HISTARGETOUTSIDE:
.type HISTARGETOUTSIDE, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_00DE:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+8]
and ebx, 12288
test ebx, ebx
je .Lt_00E1
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+148]
lea ebx, [SYMB+98352]
cmp dword ptr [eax], ebx
setne cl
shr ecx, 1
sbb ecx, ecx
mov dword ptr [ebp-4], ecx
jmp .Lt_00E0
.Lt_00E1:
mov ecx, dword ptr [ebp+12]
mov ebx, dword ptr [ecx+148]
mov ecx, dword ptr [ebx]
cmp ecx, dword ptr [ebp+8]
setne bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-4], ebx
.Lt_00E0:
.Lt_00DF:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HISTARGETOUTSIDE, .-HISTARGETOUTSIDE
.balign 16
HCHECKBRANCH:
.type HCHECKBRANCH, @function
push ebp
mov ebp, esp
sub esp, 40
push ebx
push esi
mov dword ptr [ebp-4], 0
.Lt_00E2:
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+12]
mov dword ptr [ebp-12], ebx
mov ebx, dword ptr [ebp-12]
cmp dword ptr [ebx+56], 0
jne .Lt_00E5
push 0
push dword ptr [ebp+12]
push 103
call HBRANCHERROR
add esp, 12
jmp .Lt_00E3
.Lt_00E5:
.Lt_00E4:
push dword ptr [ebp-12]
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+12]
call HISTARGETOUTSIDE
add esp, 8
test eax, eax
je .Lt_00E7
push 0
push dword ptr [ebp+12]
push 103
call HBRANCHERROR
add esp, 12
jmp .Lt_00E3
.Lt_00E7:
.Lt_00E6:
mov eax, dword ptr [ebp-12]
movzx ebx, word ptr [eax+32]
mov dword ptr [ebp-24], ebx
mov ebx, dword ptr [ebp-12]
mov eax, dword ptr [ebx+52]
mov dword ptr [ebp-16], eax
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax+60]
mov dword ptr [ebp-32], ebx
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+24]
mov dword ptr [ebp-20], eax
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+20]
mov dword ptr [ebp-8], ebx
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+32]
mov dword ptr [ebp-28], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp-32]
cmp ebx, dword ptr [eax+24]
setge bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
je .Lt_00E8
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebp-32]
cmp eax, dword ptr [ebx+28]
setl al
shr eax, 1
sbb eax, eax
test eax, eax
setne al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-40], eax
jmp .Lt_0139
.Lt_00E8:
mov dword ptr [ebp-40], 0
.Lt_0139:
cmp dword ptr [ebp-40], 0
je .Lt_00EB
mov eax, dword ptr [ebp-20]
cmp dword ptr [ebp-24], eax
jle .Lt_00ED
push 0
push dword ptr [ebp+12]
call HCHECKSCOPELOCALS
add esp, 8
mov eax, dword ptr [ebp-28]
cmp dword ptr [ebp-32], eax
jg .Lt_00EF
push dword ptr [ebp+12]
call HDELBACKWARDLOCALS
add esp, 4
.Lt_00EF:
.Lt_00EE:
jmp .Lt_00EC
.Lt_00ED:
mov eax, dword ptr [ebp-28]
cmp dword ptr [ebp-32], eax
jg .Lt_00F1
push dword ptr [ebp+12]
call HDELBACKWARDLOCALS
add esp, 4
jmp .Lt_00F0
.Lt_00F1:
push dword ptr [ebp-32]
push dword ptr [ebp-28]
push dword ptr [ebp-16]
push dword ptr [ebp+12]
call HCHECKCROSSING
add esp, 16
.Lt_00F0:
.Lt_00EC:
mov dword ptr [ebp-4], -1
jmp .Lt_00E3
.Lt_00EB:
.Lt_00EA:
mov eax, dword ptr [ebp-16]
cmp dword ptr [eax], 15
jne .Lt_00F3
mov eax, dword ptr [ebp-16]
mov ebx, dword ptr [eax+52]
mov eax, dword ptr [ebp-8]
mov ecx, dword ptr [ebx+24]
cmp ecx, dword ptr [eax+24]
setle cl
shr ecx, 1
sbb ecx, ecx
mov eax, dword ptr [ebp-16]
mov ebx, dword ptr [eax+52]
mov eax, dword ptr [ebp-8]
mov esi, dword ptr [ebx+28]
cmp esi, dword ptr [eax+28]
setge dl
mov esi, edx
shr esi, 1
sbb esi, esi
and ecx, esi
mov dword ptr [ebp-36], ecx
cmp dword ptr [ebp-36], 0
jne .Lt_00F5
push dword ptr [ebp-16]
push dword ptr [ebp-8]
call HFINDCOMMONPARENT
add esp, 8
push eax
push dword ptr [ebp+12]
call HCHECKSCOPELOCALS
add esp, 8
.Lt_00F5:
.Lt_00F4:
jmp .Lt_00F2
.Lt_00F3:
mov dword ptr [ebp-36], -1
.Lt_00F2:
cmp dword ptr [ebp-36], 0
je .Lt_00F7
mov eax, dword ptr [ebp-28]
cmp dword ptr [ebp-32], eax
jle .Lt_00F9
push dword ptr [ebp-32]
push dword ptr [ebp-28]
push dword ptr [ebp-16]
push dword ptr [ebp+12]
call HCHECKCROSSING
add esp, 16
.Lt_00F9:
.Lt_00F8:
.Lt_00F7:
.Lt_00F6:
push -1
push dword ptr [ebp+12]
call HDELLOCALS
add esp, 8
mov dword ptr [ebp-4], -1
.Lt_00E3:
mov eax, dword ptr [ebp-4]
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size HCHECKBRANCH, .-HCHECKBRANCH
	#fbc-1.01.0/src/compiler/ast-node-scope.bas' compilation took 0.03419202694203705 secs

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
Lt_0077:	.ascii	"to label: \0"
.balign 4
Lt_007B:	.ascii	", \0"
.balign 4
Lt_007E:	.ascii	"local \0"
.balign 4
Lt_0081:	.ascii	"string: \0"
.balign 4
Lt_0083:	.ascii	"array: \0"
.balign 4
Lt_0084:	.ascii	"object: \0"
.balign 4
Lt_008F:	.ascii	"variable: \0"

.section .ctors, "aw", @progbits
.int fb_ctor__astznodezscope
