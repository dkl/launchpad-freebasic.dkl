	.intel_syntax noprefix

	#FreeBASIC-1.01.0-source/src/compiler/parser-compound-select-const.bas' compilation started at 16:30:04 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl PARSERSELCONSTSTMTINIT
PARSERSELCONSTSTMTINIT:
.type PARSERSELCONSTSTMTINIT, @function
.Lt_0060:
mov dword ptr [CTX], 0
.Lt_0061:
ret
.size PARSERSELCONSTSTMTINIT, .-PARSERSELCONSTSTMTINIT
.balign 16

.globl PARSERSELCONSTSTMTEND
PARSERSELCONSTSTMTEND:
.type PARSERSELCONSTSTMTEND, @function
.Lt_0062:
.Lt_0063:
ret
.size PARSERSELCONSTSTMTEND, .-PARSERSELCONSTSTMTEND
.balign 16

.globl CSELCONSTSTMTBEGIN
CSELCONSTSTMTBEGIN:
.type CSELCONSTSTMTBEGIN, @function
push ebp
mov ebp, esp
sub esp, 36
push ebx
.Lt_0064:
mov dword ptr [ebp-4], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-20], 0
call ASTSCOPEBEGIN
mov dword ptr [ebp-28], eax
cmp dword ptr [ebp-28], 0
jne .Lt_0067
push 0
push 0
push 27
call ERRREPORT
add esp, 12
.Lt_0067:
.Lt_0066:
call CEXPRESSION
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
jne .Lt_0069
push 0
push 0
push 9
call ERRREPORT
add esp, 12
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-4], eax
.Lt_0069:
.Lt_0068:
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+4]
and ebx, 511
and ebx, 480
je .Lt_006A
mov dword ptr [ebp-32], 22
jmp .Lt_0081
.Lt_006A:
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebx+4]
and eax, 511
and eax, 31
mov dword ptr [ebp-32], eax
.Lt_0081:
mov eax, dword ptr [ebp-32]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax], 0
je .Lt_006D
push dword ptr [ebp-4]
call ASTDELTREE
add esp, 4
mov dword ptr [ebp-4], 0
jmp .Lt_006C
.Lt_006D:
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+4]
and ebx, 511
mov dword ptr [ebp-36], ebx
cmp dword ptr [ebp-36], 3
je .Lt_0071
.Lt_0072:
cmp dword ptr [ebp-36], 6
jne .Lt_0070
.Lt_0071:
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebx]
cmp eax, 20
sete al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_0074
push dword ptr [ebp-4]
call ASTDELTREE
add esp, 4
mov dword ptr [ebp-4], 0
.Lt_0074:
.Lt_0073:
.Lt_0070:
.Lt_006E:
.Lt_006C:
cmp dword ptr [ebp-4], 0
jne .Lt_0076
push 0
push 0
push 24
call ERRREPORT
add esp, 12
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-4], eax
.Lt_0076:
.Lt_0075:
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+4]
and ebx, 511
cmp ebx, 8
je .Lt_0078
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebx+4]
and eax, 511
and eax, 480
je .Lt_0079
mov dword ptr [ebp-36], 22
jmp .Lt_0082
.Lt_0079:
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+4]
and ebx, 511
and ebx, 31
mov dword ptr [ebp-36], ebx
.Lt_0082:
mov ebx, dword ptr [ebp-36]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+228]
cmp dword ptr [SYMB_DTYPETB+ebx+4], eax
jg .Lt_007C
push 0
push 0
push dword ptr [ebp-4]
push 0
push 8
call ASTNEWCONV
add esp, 20
mov dword ptr [ebp-4], eax
jmp .Lt_007B
.Lt_007C:
push 0
push 0
push dword ptr [ebp-4]
push 0
push 13
call ASTNEWCONV
add esp, 20
mov dword ptr [ebp-4], eax
.Lt_007B:
.Lt_0078:
.Lt_0077:
push 0
push 0
call SYMBADDLABEL
add esp, 8
mov dword ptr [ebp-12], eax
push 0
push 0
call SYMBADDLABEL
add esp, 8
mov dword ptr [ebp-16], eax
mov dword ptr [ebp-24], 0
mov eax, dword ptr [ENV+840]
and eax, 2
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_007E
or dword ptr [ebp-24], 2
.Lt_007E:
.Lt_007D:
push dword ptr [ebp-24]
push 0
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+4]
and ebx, 511
push ebx
call SYMBADDIMPLICITVAR
add esp, 12
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+8]
or ebx, 2048
mov eax, ebx
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+8], eax
mov eax, dword ptr [ebp-24]
and eax, 2
je .Lt_0080
push -1
push dword ptr [ebp-8]
call ASTNEWDECL
add esp, 8
push eax
call ASTADDUNSCOPED
add esp, 4
push 0
push dword ptr [ebp-4]
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp-8]
call ASTNEWVAR
add esp, 20
push eax
call ASTNEWASSIGN
add esp, 12
push eax
call ASTADD
add esp, 4
jmp .Lt_007F
.Lt_0080:
push -1
push 64
push dword ptr [ebp-4]
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp-8]
call ASTNEWVAR
add esp, 20
push eax
call ASTNEWASSIGN
add esp, 12
push eax
push 0
push dword ptr [ebp-8]
call ASTNEWDECL
add esp, 8
push eax
call ASTNEWLINK
add esp, 12
push eax
call ASTADD
add esp, 4
.Lt_007F:
push 0
push dword ptr [ebp-16]
push 97
call ASTNEWBRANCH
add esp, 12
push eax
call ASTADD
add esp, 4
push 0
push 270
call CCOMPSTMTPUSH
add esp, 8
mov dword ptr [ebp-20], eax
mov eax, dword ptr [ebp-20]
mov dword ptr [eax+12], -1
mov eax, dword ptr [ebp-20]
mov ebx, dword ptr [ebp-8]
mov dword ptr [eax+16], ebx
mov ebx, dword ptr [ebp-20]
mov dword ptr [ebx+20], 0
mov ebx, dword ptr [ebp-20]
mov eax, dword ptr [CTX]
mov dword ptr [ebx+24], eax
mov eax, dword ptr [ebp-20]
mov dword ptr [eax+28], 0
mov eax, dword ptr [ebp-20]
mov dword ptr [eax+32], 4294967295
mov dword ptr [eax+36], 0
mov eax, dword ptr [ebp-20]
mov dword ptr [eax+40], 0
mov dword ptr [eax+44], 0
mov eax, dword ptr [ebp-20]
mov ebx, dword ptr [ebp-16]
mov dword ptr [eax+48], ebx
mov ebx, dword ptr [ebp-20]
mov eax, dword ptr [ebp-12]
mov dword ptr [ebx+52], eax
mov eax, dword ptr [ebp-20]
mov ebx, dword ptr [ebp-28]
mov dword ptr [eax+60], ebx
.Lt_0065:
pop ebx
mov esp, ebp
pop ebp
ret
.size CSELCONSTSTMTBEGIN, .-CSELCONSTSTMTBEGIN
.balign 16

.globl CSELCONSTSTMTNEXT
CSELCONSTSTMTNEXT:
.type CSELCONSTSTMTNEXT, @function
push ebp
mov ebp, esp
sub esp, 48
push ebx
.Lt_0093:
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-40], 0
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+8], 0
je .Lt_0096
mov eax, dword ptr [ebp+8]
push dword ptr [eax+8]
call ASTSCOPEEND
add esp, 4
.Lt_0096:
.Lt_0095:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+20], 0
jle .Lt_0098
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax+52]
push 97
call ASTNEWBRANCH
add esp, 12
push eax
call ASTADD
add esp, 4
.Lt_0098:
.Lt_0097:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 268
jne .Lt_009A
push 0
call LEXSKIPTOKEN
add esp, 4
push 4
push 0
call SYMBADDLABEL
add esp, 8
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+28], eax
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+28]
call ASTNEWLABEL
add esp, 8
push eax
call ASTADD
add esp, 4
call ASTSCOPEBEGIN
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+8], eax
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+20], -1
jmp .Lt_0094
.Lt_009A:
.Lt_0099:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+24]
mov dword ptr [ebp-40], ebx
push 0
push 0
call SYMBADDLABEL
add esp, 8
mov dword ptr [ebp-36], eax
.Lt_009B:
push 0
push 0
call CEXPRESSION
push eax
call CCONSTINTEXPR
add esp, 12
mov dword ptr [ebp-8], eax
mov dword ptr [ebp-4], edx
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+32]
mov edx, dword ptr [eax+36]
mov dword ptr [ebp-32], ebx
mov dword ptr [ebp-28], edx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+40]
mov edx, dword ptr [ebx+44]
mov dword ptr [ebp-24], eax
mov dword ptr [ebp-20], edx
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 284
jne .Lt_009F
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
push 0
call CEXPRESSION
push eax
call CCONSTINTEXPR
add esp, 12
mov dword ptr [ebp-16], eax
mov dword ptr [ebp-12], edx
mov edx, dword ptr [ebp-16]
mov eax, dword ptr [ebp-12]
mov dword ptr [ebp-48], edx
mov dword ptr [ebp-44], eax
jmp .Lt_00A1
.Lt_00A4:
mov eax, dword ptr [ebp-32]
mov edx, dword ptr [ebp-28]
cmp dword ptr [ebp-4], edx
ja .Lt_00A6
jb .Lt_00B5
cmp dword ptr [ebp-8], eax
jae .Lt_00A6
.Lt_00B5:
mov edx, dword ptr [ebp-8]
mov eax, dword ptr [ebp-4]
mov dword ptr [ebp-32], edx
mov dword ptr [ebp-28], eax
.Lt_00A6:
.Lt_00A5:
mov eax, dword ptr [ebp-24]
mov edx, dword ptr [ebp-20]
cmp dword ptr [ebp-4], edx
jb .Lt_00A8
ja .Lt_00B6
cmp dword ptr [ebp-8], eax
jbe .Lt_00A8
.Lt_00B6:
mov edx, dword ptr [ebp-8]
mov eax, dword ptr [ebp-4]
mov dword ptr [ebp-24], edx
mov dword ptr [ebp-20], eax
.Lt_00A8:
.Lt_00A7:
mov eax, dword ptr [ebp-32]
mov edx, dword ptr [ebp-28]
cmp edx, dword ptr [ebp-20]
mov ebx, -1
ja .Lt_00B7
jb .Lt_00B8
cmp eax, dword ptr [ebp-24]
ja .Lt_00B7
.Lt_00B8:
xor ebx, ebx
.Lt_00B7:
mov edx, dword ptr [ebp-24]
mov eax, dword ptr [ebp-20]
sub edx, dword ptr [ebp-32]
sbb eax, dword ptr [ebp-28]
cmp eax, 0
mov ecx, -1
ja .Lt_00B9
jb .Lt_00BA
cmp edx, 4096
ja .Lt_00B9
.Lt_00BA:
xor ecx, ecx
.Lt_00B9:
or ebx, ecx
mov edx, dword ptr [SYMB_DTYPETB+200]
mov ecx, edx
sar ecx, 31
push dword ptr [ebp-28]
push dword ptr [ebp-32]
push ecx
push edx
mov eax, [esp+0]
mul dword ptr [esp+8]
xchg eax, [esp+0]
imul eax, [esp+12]
add eax, edx
mov edx, [esp+4]
imul edx, [esp+8]
add edx, eax
mov [esp+4], edx
pop edx
pop ecx
add esp, 8
cmp ecx, 0
mov eax, -1
ja .Lt_00BB
jb .Lt_00BC
cmp edx, 4294967292
ja .Lt_00BB
.Lt_00BC:
xor eax, eax
.Lt_00BB:
or ebx, eax
je .Lt_00AA
push 0
push 0
push 68
call ERRREPORT
add esp, 12
mov eax, dword ptr [ebp+8]
mov edx, dword ptr [eax+32]
mov ebx, dword ptr [eax+36]
mov dword ptr [ebp-32], edx
mov dword ptr [ebp-28], ebx
mov edx, dword ptr [ebp+8]
mov eax, dword ptr [edx+40]
mov ebx, dword ptr [edx+44]
mov dword ptr [ebp-24], eax
mov dword ptr [ebp-20], ebx
jmp .Lt_00A9
.Lt_00AA:
push dword ptr [ebp-36]
push dword ptr [ebp-4]
push dword ptr [ebp-8]
push dword ptr [ebp-40]
call HSELCONSTADDCASE
add esp, 16
test eax, eax
jne .Lt_00AC
push 0
push 0
push 4
call ERRREPORT
add esp, 12
.Lt_00AC:
.Lt_00AB:
.Lt_00A9:
.Lt_00A2:
add dword ptr [ebp-8], 1
adc dword ptr [ebp-4], 0
.Lt_00A1:
mov ebx, dword ptr [ebp-48]
mov eax, dword ptr [ebp-44]
cmp dword ptr [ebp-4], eax
jb .Lt_00A4
ja .Lt_00BD
cmp dword ptr [ebp-8], ebx
jbe .Lt_00A4
.Lt_00BD:
.Lt_00A3:
jmp .Lt_009E
.Lt_009F:
mov eax, dword ptr [ebp-32]
mov ebx, dword ptr [ebp-28]
cmp dword ptr [ebp-4], ebx
ja .Lt_00AE
jb .Lt_00BE
cmp dword ptr [ebp-8], eax
jae .Lt_00AE
.Lt_00BE:
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebp-4]
mov dword ptr [ebp-32], ebx
mov dword ptr [ebp-28], eax
.Lt_00AE:
.Lt_00AD:
mov eax, dword ptr [ebp-24]
mov ebx, dword ptr [ebp-20]
cmp dword ptr [ebp-4], ebx
jb .Lt_00B0
ja .Lt_00BF
cmp dword ptr [ebp-8], eax
jbe .Lt_00B0
.Lt_00BF:
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebp-4]
mov dword ptr [ebp-24], ebx
mov dword ptr [ebp-20], eax
.Lt_00B0:
.Lt_00AF:
mov eax, dword ptr [ebp-32]
mov ebx, dword ptr [ebp-28]
cmp ebx, dword ptr [ebp-20]
mov edx, -1
ja .Lt_00C0
jb .Lt_00C1
cmp eax, dword ptr [ebp-24]
ja .Lt_00C0
.Lt_00C1:
xor edx, edx
.Lt_00C0:
mov ebx, dword ptr [ebp-24]
mov eax, dword ptr [ebp-20]
sub ebx, dword ptr [ebp-32]
sbb eax, dword ptr [ebp-28]
cmp eax, 0
mov ecx, -1
ja .Lt_00C2
jb .Lt_00C3
cmp ebx, 4096
ja .Lt_00C2
.Lt_00C3:
xor ecx, ecx
.Lt_00C2:
or edx, ecx
mov ebx, dword ptr [SYMB_DTYPETB+200]
mov ecx, ebx
sar ecx, 31
push dword ptr [ebp-28]
push dword ptr [ebp-32]
push ecx
push ebx
push edx
mov eax, [esp+4]
mul dword ptr [esp+12]
xchg eax, [esp+4]
imul eax, [esp+16]
add eax, edx
mov edx, [esp+8]
imul edx, [esp+12]
add edx, eax
mov [esp+8], edx
pop edx
pop ebx
pop ecx
add esp, 8
cmp ecx, 0
mov eax, -1
ja .Lt_00C4
jb .Lt_00C5
cmp ebx, 4294967292
ja .Lt_00C4
.Lt_00C5:
xor eax, eax
.Lt_00C4:
or edx, eax
je .Lt_00B2
push 0
push 0
push 68
call ERRREPORT
add esp, 12
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+32]
mov edx, dword ptr [eax+36]
mov dword ptr [ebp-32], ebx
mov dword ptr [ebp-28], edx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+40]
mov edx, dword ptr [ebx+44]
mov dword ptr [ebp-24], eax
mov dword ptr [ebp-20], edx
jmp .Lt_00B1
.Lt_00B2:
push dword ptr [ebp-36]
push dword ptr [ebp-4]
push dword ptr [ebp-8]
push dword ptr [ebp-40]
call HSELCONSTADDCASE
add esp, 16
test eax, eax
jne .Lt_00B4
push 0
push 0
push 4
call ERRREPORT
add esp, 12
.Lt_00B4:
.Lt_00B3:
.Lt_00B1:
.Lt_009E:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-32]
mov edx, dword ptr [ebp-28]
mov dword ptr [eax+32], ebx
mov dword ptr [eax+36], edx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp-24]
mov edx, dword ptr [ebp-20]
mov dword ptr [ebx+40], eax
mov dword ptr [ebx+44], edx
.Lt_009D:
push 44
call HMATCH
add esp, 4
test eax, eax
jne .Lt_009B
.Lt_009C:
push -1
push dword ptr [ebp-36]
call ASTNEWLABEL
add esp, 8
push eax
call ASTADD
add esp, 4
call ASTSCOPEBEGIN
mov edx, dword ptr [ebp+8]
mov dword ptr [edx+8], eax
mov eax, dword ptr [ebp+8]
inc dword ptr [eax+20]
.Lt_0094:
pop ebx
mov esp, ebp
pop ebp
ret
.size CSELCONSTSTMTNEXT, .-CSELCONSTSTMTNEXT
.balign 16

.globl CSELCONSTSTMTEND
CSELCONSTSTMTEND:
.type CSELCONSTSTMTEND, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_00C6:
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+28]
mov dword ptr [ebp-4], ebx
cmp dword ptr [ebp-4], 0
jne .Lt_00C9
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+52]
mov dword ptr [ebp-4], eax
.Lt_00C9:
.Lt_00C8:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+8], 0
je .Lt_00CB
mov eax, dword ptr [ebp+8]
push dword ptr [eax+8]
call ASTSCOPEEND
add esp, 4
.Lt_00CB:
.Lt_00CA:
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax+52]
push 97
call ASTNEWBRANCH
add esp, 12
push eax
call ASTADD
add esp, 4
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+48]
call ASTNEWLABEL
add esp, 8
push eax
call ASTADD
add esp, 4
mov eax, dword ptr [ebp+8]
push dword ptr [eax+44]
push dword ptr [eax+40]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+36]
push dword ptr [eax+32]
push dword ptr [ebp-4]
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [CTX]
sub ebx, dword ptr [eax+24]
push ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+24]
sal eax, 2
mov ebx, offset CTX
add ebx, eax
lea eax, [ebx+65540]
push eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+24]
sal ebx, 3
mov eax, offset CTX
add eax, ebx
lea ebx, [eax+4]
push ebx
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+16]
call ASTBUILDJMPTB
add esp, 36
push eax
call ASTADD
add esp, 4
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+24]
mov dword ptr [CTX], ebx
push -1
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+52]
call ASTNEWLABEL
add esp, 8
push eax
call ASTADD
add esp, 4
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+60], 0
je .Lt_00CD
mov eax, dword ptr [ebp+8]
push dword ptr [eax+60]
call ASTSCOPEEND
add esp, 4
.Lt_00CD:
.Lt_00CC:
push dword ptr [ebp+8]
call CCOMPSTMTPOP
add esp, 4
.Lt_00C7:
pop ebx
mov esp, ebp
pop ebp
ret
.size CSELCONSTSTMTEND, .-CSELCONSTSTMTEND
.balign 16
fb_ctor__parserzcompoundzselectzconst:
.type fb_ctor__parserzcompoundzselectzconst, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__parserzcompoundzselectzconst, .-fb_ctor__parserzcompoundzselectzconst
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
HSELCONSTADDCASE:
.type HSELCONSTADDCASE, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
push esi
mov dword ptr [ebp-4], 0
.Lt_0085:
cmp dword ptr [CTX], 8192
jl .Lt_0088
mov dword ptr [ebp-4], 0
jmp .Lt_0086
.Lt_0088:
.Lt_0087:
mov eax, dword ptr [CTX]
sub eax, dword ptr [ebp+8]
mov dword ptr [Lt_00CE], eax
mov dword ptr [Lt_00CF], -1
.Lt_0089:
mov eax, dword ptr [Lt_00CE]
sub eax, dword ptr [Lt_00CF]
cmp eax, 1
jle .Lt_008A
mov eax, dword ptr [Lt_00CE]
add eax, dword ptr [Lt_00CF]
mov ebx, eax
shr ebx, 1
mov eax, ebx
mov dword ptr [Lt_00D0], eax
mov eax, dword ptr [Lt_00D0]
add eax, dword ptr [ebp+8]
sal eax, 3
mov ebx, offset CTX
add ebx, eax
mov ecx, dword ptr [ebx+4]
mov eax, dword ptr [ebx+8]
mov dword ptr [Lt_00D1], ecx
mov dword ptr [Lt_00D1+4], eax
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [ebp+16]
cmp dword ptr [Lt_00D1+4], ecx
ja .Lt_008C
jb .Lt_00D2
cmp dword ptr [Lt_00D1], eax
jae .Lt_008C
.Lt_00D2:
mov eax, dword ptr [Lt_00D0]
mov dword ptr [Lt_00CF], eax
jmp .Lt_008B
.Lt_008C:
mov ecx, dword ptr [ebp+12]
mov eax, dword ptr [ebp+16]
cmp dword ptr [Lt_00D1+4], eax
jb .Lt_008D
ja .Lt_00D3
cmp dword ptr [Lt_00D1], ecx
jbe .Lt_008D
.Lt_00D3:
mov ecx, dword ptr [Lt_00D0]
mov dword ptr [Lt_00CE], ecx
jmp .Lt_008B
.Lt_008D:
jmp .Lt_0086
.Lt_008B:
jmp .Lt_0089
.Lt_008A:
mov ecx, dword ptr [CTX]
inc ecx
mov dword ptr [Lt_00D4], ecx
mov ecx, dword ptr [Lt_00CE]
add ecx, dword ptr [ebp+8]
inc ecx
mov dword ptr [ebp-8], ecx
jmp .Lt_008F
.Lt_0092:
mov ecx, dword ptr [Lt_00D4]
sal ecx, 3
mov eax, offset CTX
add eax, ecx
mov ecx, dword ptr [Lt_00D4]
sal ecx, 3
mov ebx, offset CTX
add ebx, ecx
mov esi, dword ptr [eax-4]
mov ecx, dword ptr [eax]
mov dword ptr [ebx+4], esi
mov dword ptr [ebx+8], ecx
mov esi, dword ptr [Lt_00D4]
sal esi, 2
mov ecx, offset CTX
add ecx, esi
mov esi, dword ptr [Lt_00D4]
sal esi, 2
mov ebx, offset CTX
add ebx, esi
mov esi, dword ptr [ecx+65536]
mov dword ptr [ebx+65540], esi
.Lt_0090:
dec dword ptr [Lt_00D4]
.Lt_008F:
mov esi, dword ptr [ebp-8]
cmp dword ptr [Lt_00D4], esi
jge .Lt_0092
.Lt_0091:
mov esi, dword ptr [Lt_00CE]
add esi, dword ptr [ebp+8]
sal esi, 3
mov ebx, offset CTX
add ebx, esi
mov ecx, dword ptr [ebp+12]
mov esi, dword ptr [ebp+16]
mov dword ptr [ebx+4], ecx
mov dword ptr [ebx+8], esi
mov ecx, dword ptr [Lt_00CE]
add ecx, dword ptr [ebp+8]
sal ecx, 2
mov esi, offset CTX
add esi, ecx
mov ecx, dword ptr [ebp+20]
mov dword ptr [esi+65540], ecx
inc dword ptr [CTX]
mov dword ptr [ebp-4], -1
.Lt_0086:
mov eax, dword ptr [ebp-4]
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size HSELCONSTADDCASE, .-HSELCONSTADDCASE

.section .bss
.balign 4
	.lcomm	Lt_00D0,4
.balign 4
	.lcomm	Lt_00CE,4
.balign 4
	.lcomm	Lt_00CF,4
.balign 4
	.lcomm	Lt_00D4,4
.balign 4
	.lcomm	Lt_00D1,8
	#FreeBASIC-1.01.0-source/src/compiler/parser-compound-select-const.bas' compilation took 0.03879196150228381 secs
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
.balign 4
	.lcomm	CTX,98308

.section .ctors, "aw", @progbits
.int fb_ctor__parserzcompoundzselectzconst
