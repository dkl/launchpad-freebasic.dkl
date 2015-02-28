	.intel_syntax noprefix

	#FreeBASIC-1.01.0-source/src/compiler/parser-decl-symb-init.bas' compilation started at 16:30:05 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl CINITIALIZER
CINITIALIZER:
.type CINITIALIZER, @function
push ebp
mov ebp, esp
sub esp, 44
push ebx
mov dword ptr [ebp-4], 0
.Lt_00E1:
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 65540
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+4]
and ecx, 8
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
or ebx, ecx
je .Lt_00E4
push 0
push -1
push 74
call ERRREPORT
add esp, 12
jmp .Lt_00E2
.Lt_00E4:
.Lt_00E3:
mov ecx, dword ptr [ebp+8]
cmp dword ptr [ecx], 1
jne .Lt_00E6
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ecx+4]
and ebx, 128
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-8], ebx
jmp .Lt_00E5
.Lt_00E6:
mov dword ptr [ebp-8], 0
.Lt_00E5:
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebp-20], ebx
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebp-40], ebx
mov dword ptr [ebp-28], -1
mov dword ptr [ebp-16], 0
push dword ptr [ebp+20]
push dword ptr [ebp+16]
lea ebx, [ebp-40]
push ebx
call HUPDATECONTEXTDTYPE
add esp, 12
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+48]
push dword ptr [ebx+44]
push dword ptr [ebp-8]
push dword ptr [ebp-32]
push dword ptr [ebp-36]
call ASTTYPEINIBEGIN
add esp, 20
mov dword ptr [ebp-24], eax
push dword ptr [ebp-32]
push dword ptr [ebp-36]
call TYPEHASCTOR
add esp, 8
test eax, eax
je .Lt_00E8
mov eax, dword ptr [ebp-20]
or eax, 2
mov ebx, eax
mov dword ptr [ebp-20], ebx
.Lt_00E8:
.Lt_00E7:
mov ebx, dword ptr [ebp-40]
mov eax, dword ptr [ebx]
cmp eax, 1
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp-40]
mov ecx, dword ptr [ebx]
cmp ecx, 12
sete cl
shr ecx, 1
sbb ecx, ecx
or eax, ecx
je .Lt_00EA
push 0
lea ecx, [ebp-40]
push ecx
call HARRAYINIT
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_00E9
.Lt_00EA:
mov eax, dword ptr [ebp-36]
and eax, 511
cmp eax, 18
jne .Lt_00EC
lea eax, [ebp-40]
push eax
call HUDTINIT
add esp, 4
mov dword ptr [ebp-12], eax
jmp .Lt_00EB
.Lt_00EC:
push 0
lea eax, [ebp-40]
push eax
call HELMINIT
add esp, 8
mov dword ptr [ebp-12], eax
.Lt_00EB:
.Lt_00E9:
mov eax, dword ptr [ebp+12]
and eax, 1
test eax, eax
setne al
shr eax, 1
sbb eax, eax
push eax
push dword ptr [ebp-24]
call ASTTYPEINIEND
add esp, 8
cmp dword ptr [ebp-12], 0
je .Lt_00ED
mov eax, dword ptr [ebp-24]
mov dword ptr [ebp-44], eax
jmp .Lt_00EF
.Lt_00ED:
mov dword ptr [ebp-44], 0
.Lt_00EF:
mov eax, dword ptr [ebp-44]
mov dword ptr [ebp-4], eax
.Lt_00E2:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CINITIALIZER, .-CINITIALIZER
.balign 16
fb_ctor__parserzdeclzsymbzinit:
.type fb_ctor__parserzdeclzsymbzinit, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__parserzdeclzsymbzinit, .-fb_ctor__parserzdeclzsymbzinit
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
HUPDATECONTEXTDTYPE:
.type HUPDATECONTEXTDTYPE, @function
push ebp
mov ebp, esp
push ebx
.Lt_005F:
cmp dword ptr [ebp+12], -2147483648
jne .Lt_0062
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [ebx+24]
mov dword ptr [eax+4], ecx
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ecx]
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [eax+28]
mov dword ptr [ecx+8], ebx
jmp .Lt_0061
.Lt_0062:
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebp+12]
mov dword ptr [ebx+4], ecx
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+16]
mov dword ptr [ecx+8], ebx
.Lt_0061:
.Lt_0060:
pop ebx
mov esp, ebp
pop ebp
ret
.size HUPDATECONTEXTDTYPE, .-HUPDATECONTEXTDTYPE
.balign 16
HDOASSIGN:
.type HDOASSIGN, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_0063:
push dword ptr [ebp+12]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+4]
call ASTCHECKASSIGNTOTYPE
add esp, 12
test eax, eax
jne .Lt_0066
push 0
push 0
push dword ptr [ebp+12]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+4]
call ASTNEWCONV
add esp, 20
mov dword ptr [ebp+12], eax
cmp dword ptr [ebp+12], 0
jne .Lt_0068
cmp dword ptr [ebp+16], 0
je .Lt_006A
jmp .Lt_0064
.Lt_006A:
.Lt_0069:
push 0
push -1
push 24
call ERRREPORT
add esp, 12
push dword ptr [ebp+12]
call ASTDELTREE
add esp, 4
mov eax, dword ptr [ebp+8]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+4]
call ASTNEWCONSTZ
add esp, 8
mov dword ptr [ebp+12], eax
.Lt_0068:
.Lt_0067:
.Lt_0066:
.Lt_0065:
mov eax, dword ptr [ebp+8]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+4]
mov eax, dword ptr [ebp+8]
push dword ptr [eax]
push dword ptr [ebp+12]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+16]
call ASTTYPEINIADDASSIGN
add esp, 20
mov dword ptr [ebp-4], -1
.Lt_0064:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size HDOASSIGN, .-HDOASSIGN
.balign 16
HELMINIT:
.type HELMINIT, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
mov dword ptr [ebp-4], 0
.Lt_006B:
mov dword ptr [ebp-4], 0
mov eax, dword ptr [PARSER+152]
mov dword ptr [ebp-12], eax
mov eax, dword ptr [PARSER+148]
mov dword ptr [ebp-16], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov eax, dword ptr [ebx+28]
mov dword ptr [PARSER+152], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov eax, dword ptr [ebx+24]
and eax, 511
mov dword ptr [PARSER+148], eax
call CEXPRESSION
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_006E
push 0
push 0
push 9
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push 44
call HSKIPUNTIL
add esp, 16
mov eax, dword ptr [ebp+8]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+4]
call ASTNEWCONSTZ
add esp, 8
mov dword ptr [ebp-8], eax
.Lt_006E:
.Lt_006D:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-8]
mov dword ptr [eax+24], ebx
mov ebx, dword ptr [ebp-12]
mov dword ptr [PARSER+152], ebx
mov ebx, dword ptr [ebp-16]
mov dword ptr [PARSER+148], ebx
push dword ptr [ebp+12]
push dword ptr [ebp-8]
push dword ptr [ebp+8]
call HDOASSIGN
add esp, 12
mov dword ptr [ebp-4], eax
.Lt_006C:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HELMINIT, .-HELMINIT
.balign 16
HARRAYINIT:
.type HARRAYINIT, @function
push ebp
mov ebp, esp
sub esp, 36
push ebx
push esi
mov dword ptr [ebp-4], 0
.Lt_006F:
mov dword ptr [ebp-4], 0
mov dword ptr [ebp-20], 0
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 123
jne .Lt_0072
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [ebp+8]
inc dword ptr [eax+12]
mov dword ptr [ebp-20], -1
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebx]
mov ebx, dword ptr [ecx+56]
cmp dword ptr [eax+12], ebx
jl .Lt_0074
push 0
push 0
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx]
cmp dword ptr [eax+56], 0
jle .Lt_0075
mov dword ptr [ebp-24], 66
jmp .Lt_00F6
.Lt_0075:
mov dword ptr [ebp-24], 62
.Lt_00F6:
push dword ptr [ebp-24]
call ERRREPORT
add esp, 12
push 0
push 0
push -1
push 125
call HSKIPUNTIL
add esp, 16
mov eax, dword ptr [ebp+8]
dec dword ptr [eax+12]
jmp .Lt_0070
.Lt_0074:
.Lt_0073:
jmp .Lt_0071
.Lt_0072:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebx]
mov ebx, dword ptr [ecx+56]
dec ebx
cmp dword ptr [eax+12], ebx
jge .Lt_0078
push 0
push 0
push 63
call ERRREPORT
add esp, 12
mov ebx, dword ptr [ebp+8]
inc dword ptr [ebx+12]
mov dword ptr [ebp-20], -1
.Lt_0078:
.Lt_0077:
.Lt_0071:
cmp dword ptr [ebp-20], 0
je .Lt_007A
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx]
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+16]
call ASTTYPEINISCOPEBEGIN
add esp, 8
.Lt_007A:
.Lt_0079:
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx+12], 0
jl .Lt_007C
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx]
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebx+12]
sal ecx, 4
mov ebx, dword ptr [eax+60]
add ebx, ecx
cmp dword ptr [ebx+12], 2147483648
jne .Lt_007E
cmp dword ptr [ebx+8], 0
jne .Lt_007E
.Lt_00F7:
mov dword ptr [ebp-16], 4294967295
mov dword ptr [ebp-12], 4294967295
jmp .Lt_007D
.Lt_007E:
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebx]
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+12]
sal eax, 4
mov ebx, dword ptr [ecx+60]
add ebx, eax
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax]
mov eax, dword ptr [ebp+8]
mov esi, dword ptr [eax+12]
sal esi, 4
mov eax, dword ptr [ecx+60]
add eax, esi
mov ecx, dword ptr [ebx+8]
mov esi, dword ptr [ebx+12]
sub ecx, dword ptr [eax]
sbb esi, dword ptr [eax+4]
add ecx, 1
adc esi, 0
mov dword ptr [ebp-16], ecx
mov dword ptr [ebp-12], esi
.Lt_007D:
jmp .Lt_007B
.Lt_007C:
mov dword ptr [ebp-16], 1
mov dword ptr [ebp-12], 0
.Lt_007B:
mov dword ptr [ebp-8], 0
.Lt_007F:
mov ecx, dword ptr [ebp+8]
mov esi, dword ptr [ebp+8]
mov eax, dword ptr [esi]
mov esi, dword ptr [eax+56]
dec esi
cmp dword ptr [ecx+12], esi
jge .Lt_0083
push 0
push dword ptr [ebp+8]
call HARRAYINIT
add esp, 8
test eax, eax
jne .Lt_0085
jmp .Lt_0070
.Lt_0085:
.Lt_0084:
jmp .Lt_0082
.Lt_0083:
mov eax, dword ptr [ebp+8]
mov esi, dword ptr [eax+4]
and esi, 511
cmp esi, 18
jne .Lt_0087
push dword ptr [ebp+8]
call HUDTINIT
add esp, 4
test eax, eax
jne .Lt_0089
jmp .Lt_0070
.Lt_0089:
.Lt_0088:
jmp .Lt_0086
.Lt_0087:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HELMINIT
add esp, 8
test eax, eax
jne .Lt_008B
jmp .Lt_0070
.Lt_008B:
.Lt_008A:
.Lt_0086:
.Lt_0082:
inc dword ptr [ebp-8]
mov esi, dword ptr [ebp-8]
mov eax, esi
sar eax, 31
cmp eax, dword ptr [ebp-12]
mov ecx, -1
jg .Lt_00F8
jl .Lt_00F9
cmp esi, dword ptr [ebp-16]
jae .Lt_00F8
.Lt_00F9:
xor ecx, ecx
.Lt_00F8:
cmp dword ptr [ebp-12], 4294967295
mov esi, -1
jne .Lt_00FA
cmp dword ptr [ebp-16], 4294967295
jne .Lt_00FA
.Lt_00FB:
xor esi, esi
.Lt_00FA:
and ecx, esi
je .Lt_008D
jmp .Lt_0080
.Lt_008D:
.Lt_008C:
.Lt_0081:
push 44
call HMATCH
add esp, 4
test eax, eax
jne .Lt_007F
.Lt_0080:
cmp dword ptr [ebp-12], 4294967295
jne .Lt_008F
cmp dword ptr [ebp-16], 4294967295
jne .Lt_008F
.Lt_00FC:
mov esi, dword ptr [ebp-8]
mov eax, esi
sar eax, 31
mov dword ptr [ebp-16], esi
mov dword ptr [ebp-12], eax
push dword ptr [ebp-12]
push dword ptr [ebp-16]
mov esi, dword ptr [ebp+8]
push dword ptr [esi+12]
mov esi, dword ptr [ebp+8]
push dword ptr [esi]
call SYMBSETFIXEDSIZEARRAYDIMENSIONELEMENTS
add esp, 16
mov esi, dword ptr [ebp+8]
push dword ptr [esi]
call SYMBMAYBEADDARRAYDESC
add esp, 4
mov esi, dword ptr [ebp+8]
mov eax, dword ptr [esi]
mov esi, dword ptr [eax+4]
and esi, 3
test esi, esi
sete dl
mov esi, edx
shr esi, 1
sbb esi, esi
push esi
mov esi, dword ptr [ebp+8]
mov eax, dword ptr [esi]
push dword ptr [eax+40]
push dword ptr [eax+36]
mov eax, dword ptr [ebp+8]
mov esi, dword ptr [eax]
push dword ptr [esi+60]
mov esi, dword ptr [ebp+8]
mov eax, dword ptr [esi]
push dword ptr [eax+56]
call SYMBCHECKARRAYSIZE
add esp, 20
test eax, eax
jne .Lt_0091
push 0
push 0
push 49
call ERRREPORT
add esp, 12
push 0
push 1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+12]
mov eax, dword ptr [ebp+8]
push dword ptr [eax]
call SYMBSETFIXEDSIZEARRAYDIMENSIONELEMENTS
add esp, 16
.Lt_0091:
.Lt_0090:
.Lt_008F:
.Lt_008E:
mov esi, dword ptr [ebp-8]
mov eax, esi
sar eax, 31
sub dword ptr [ebp-16], esi
sbb dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jl .Lt_0093
jg .Lt_00FE
cmp dword ptr [ebp-16], 0
jbe .Lt_0093
.Lt_00FE:
mov esi, dword ptr [ebp+8]
mov eax, dword ptr [esi+12]
inc eax
push eax
mov eax, dword ptr [ebp+8]
push dword ptr [eax]
call SYMBCALCARRAYELEMENTS
add esp, 8
push edx
push eax
push dword ptr [ebp-12]
push dword ptr [ebp-16]
push edx
push eax
mov eax, [esp+8]
mul dword ptr [esp+16]
xchg eax, [esp+8]
imul eax, [esp+20]
add eax, edx
mov edx, [esp+12]
imul edx, [esp+16]
add edx, eax
mov [esp+12], edx
pop eax
pop edx
pop dword ptr [ebp-16]
pop dword ptr [ebp-12]
add esp, 8
mov dword ptr [ebp-24], 0
mov eax, dword ptr [ebp+8]
mov edx, dword ptr [eax+20]
and edx, 2
test edx, edx
je .Lt_0095
mov edx, dword ptr [ebp+8]
push dword ptr [edx+8]
call SYMBGETCOMPDEFCTOR
add esp, 4
mov dword ptr [ebp-24], eax
cmp dword ptr [ebp-24], 0
jne .Lt_0097
push 0
push 0
push 182
call ERRREPORT
add esp, 12
jmp .Lt_0096
.Lt_0097:
push dword ptr [ebp-24]
call SYMBCHECKACCESS
add esp, 4
test eax, eax
jne .Lt_0099
push 0
push 0
push 203
call ERRREPORT
add esp, 12
.Lt_0099:
.Lt_0098:
.Lt_0096:
.Lt_0095:
.Lt_0094:
cmp dword ptr [ebp-24], 0
je .Lt_009B
mov eax, dword ptr [ebp+8]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+4]
push dword ptr [ebp-12]
push dword ptr [ebp-16]
mov eax, dword ptr [ebp+8]
push dword ptr [eax]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+16]
call ASTTYPEINIADDCTORLIST
add esp, 24
jmp .Lt_009A
.Lt_009B:
mov eax, dword ptr [ebp+8]
mov edx, dword ptr [eax+4]
and edx, 511
mov eax, edx
mov dword ptr [ebp-36], eax
jmp .Lt_009D
.Lt_009F:
mov eax, dword ptr [ebp+8]
mov edx, dword ptr [eax]
mov esi, dword ptr [edx+36]
mov eax, dword ptr [edx+40]
mov dword ptr [ebp-32], esi
mov dword ptr [ebp-28], eax
jmp .Lt_009C
.Lt_00A0:
mov esi, dword ptr [ebp+8]
push dword ptr [esi+8]
mov esi, dword ptr [ebp+8]
push dword ptr [esi+4]
call SYMBCALCLEN
add esp, 8
mov dword ptr [ebp-32], eax
mov dword ptr [ebp-28], edx
jmp .Lt_009C
.Lt_009D:
mov eax, dword ptr [ebp-36]
add eax, 4294967293
cmp eax, 14
ja .Lt_00A0
mov eax, dword ptr [ebp-36]
jmp dword ptr [.LT_00A1+eax*4-12]
.LT_00A1:
.int .Lt_009F
.int .Lt_00A0
.int .Lt_00A0
.int .Lt_009F
.int .Lt_00A0
.int .Lt_00A0
.int .Lt_00A0
.int .Lt_00A0
.int .Lt_00A0
.int .Lt_00A0
.int .Lt_00A0
.int .Lt_00A0
.int .Lt_00A0
.int .Lt_00A0
.int .Lt_009F
.Lt_009C:
mov edx, dword ptr [ebp-16]
mov eax, dword ptr [ebp-12]
push eax
push edx
push dword ptr [ebp-28]
push dword ptr [ebp-32]
push edx
push eax
mov eax, [esp+8]
mul dword ptr [esp+16]
xchg eax, [esp+8]
imul eax, [esp+20]
add eax, edx
mov edx, [esp+12]
imul edx, [esp+16]
add edx, eax
mov [esp+12], edx
pop eax
pop edx
pop dword ptr [ebp-32]
pop dword ptr [ebp-28]
add esp, 8
push dword ptr [ebp-28]
push dword ptr [ebp-32]
mov edx, dword ptr [ebp+8]
push dword ptr [edx+16]
call ASTTYPEINIADDPAD
add esp, 12
mov edx, dword ptr [ebp+8]
mov eax, dword ptr [edx+16]
mov esi, dword ptr [ebp-32]
mov edx, dword ptr [ebp-28]
add dword ptr [eax+20], esi
adc dword ptr [eax+24], edx
.Lt_009A:
.Lt_0093:
.Lt_0092:
cmp dword ptr [ebp-20], 0
je .Lt_00A3
mov esi, dword ptr [ebp+8]
push dword ptr [esi]
mov esi, dword ptr [ebp+8]
push dword ptr [esi+16]
call ASTTYPEINISCOPEEND
add esp, 8
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 125
je .Lt_00A5
push 0
push 0
push 64
call ERRREPORT
add esp, 12
push 0
push 0
push -1
push 125
call HSKIPUNTIL
add esp, 16
jmp .Lt_00A4
.Lt_00A5:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_00A4:
mov eax, dword ptr [ebp+8]
dec dword ptr [eax+12]
.Lt_00A3:
.Lt_00A2:
mov dword ptr [ebp-4], -1
.Lt_0070:
mov eax, dword ptr [ebp-4]
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size HARRAYINIT, .-HARRAYINIT
.balign 16
HUDTINIT:
.type HUDTINIT, @function
push ebp
mov ebp, esp
sub esp, 100
push ebx
push esi
mov dword ptr [ebp-4], 0
.Lt_00A6:
mov dword ptr [ebp-4], 0
inc dword ptr [Lt_00FF]
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+20]
and ebx, 2
test ebx, ebx
je .Lt_00A9
mov ebx, dword ptr [PARSER+152]
mov dword ptr [ebp-44], ebx
mov ebx, dword ptr [PARSER+148]
mov dword ptr [ebp-48], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
mov dword ptr [PARSER+148], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+8]
mov dword ptr [PARSER+152], ebx
call CEXPRESSION
mov dword ptr [ebp-96], eax
mov eax, dword ptr [ebp-48]
mov dword ptr [PARSER+148], eax
mov eax, dword ptr [ebp-44]
mov dword ptr [PARSER+152], eax
cmp dword ptr [ebp-96], 0
jne .Lt_00AB
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
mov dword ptr [ebp-96], eax
.Lt_00AB:
.Lt_00AA:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
cmp dword ptr [ebx], 4
jne .Lt_00AD
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx]
cmp dword ptr [eax+52], 2
jne .Lt_00AF
mov eax, dword ptr [ebp-96]
mov ebx, dword ptr [eax+4]
and ebx, 511
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+4]
and ecx, 511
cmp ebx, ecx
sete bl
shr ebx, 1
sbb ebx, ebx
mov ecx, dword ptr [ebp-96]
mov eax, dword ptr [ebp+8]
mov esi, dword ptr [ecx+8]
cmp esi, dword ptr [eax+8]
sete cl
shr ecx, 1
sbb ecx, ecx
and ebx, ecx
je .Lt_00B1
dec dword ptr [Lt_00FF]
push 0
push dword ptr [ebp-96]
push dword ptr [ebp+8]
call HDOASSIGN
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_00A7
.Lt_00B1:
.Lt_00B0:
.Lt_00AF:
.Lt_00AE:
.Lt_00AD:
.Lt_00AC:
lea eax, [ebp-100]
push eax
push dword ptr [ebp-96]
call CBYDESCARRAYARGPARENS
add esp, 4
push eax
push dword ptr [ebp-96]
mov eax, dword ptr [ebp+8]
push dword ptr [eax]
call ASTBUILDIMPLICITCTORCALLEX
add esp, 16
mov dword ptr [ebp-96], eax
cmp dword ptr [ebp-96], 0
jne .Lt_00B3
dec dword ptr [Lt_00FF]
jmp .Lt_00A7
.Lt_00B3:
.Lt_00B2:
cmp dword ptr [ebp-100], 0
je .Lt_00B5
dec dword ptr [Lt_00FF]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+4]
push dword ptr [ebp-96]
mov eax, dword ptr [ebp+8]
push dword ptr [eax]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+16]
call ASTTYPEINIADDCTORCALL
add esp, 20
test eax, eax
setne cl
shr ecx, 1
sbb ecx, ecx
mov dword ptr [ebp-4], ecx
jmp .Lt_00A7
jmp .Lt_00B4
.Lt_00B5:
dec dword ptr [Lt_00FF]
push 0
push dword ptr [ebp-96]
push dword ptr [ebp+8]
call HDOASSIGN
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_00A7
.Lt_00B4:
.Lt_00A9:
.Lt_00A8:
mov dword ptr [ebp-80], -1
mov dword ptr [ebp-84], 0
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
je .Lt_00B7
cmp dword ptr [Lt_00FF], 1
jg .Lt_00B9
dec dword ptr [Lt_00FF]
push 0
push dword ptr [ebp+8]
call HELMINIT
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_00A7
.Lt_00B9:
.Lt_00B8:
push 0
push 1
call LEXGETLOOKAHEAD
add esp, 8
cmp eax, 44
sete al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-84], eax
mov dword ptr [ebp-80], 0
jmp .Lt_00B6
.Lt_00B7:
mov eax, dword ptr [ebp+8]
push dword ptr [eax]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+16]
call ASTTYPEINISCOPEBEGIN
add esp, 8
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_00B6:
mov eax, dword ptr [ebp+8]
push dword ptr [eax+8]
call SYMBUDTGETFIRSTFIELD
add esp, 4
mov dword ptr [ebp-40], eax
mov eax, dword ptr [ebp-40]
mov dword ptr [ebp-36], eax
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+16]
mov ebx, dword ptr [ecx+20]
mov eax, dword ptr [ecx+24]
mov dword ptr [ebp-24], ebx
mov dword ptr [ebp-20], eax
lea ebx, [ebp-76]
push edi
mov edi, ebx
mov esi, dword ptr [ebp+8]
mov ecx, 7
rep movsd
pop edi
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+12], -1
.Lt_00BA:
cmp dword ptr [ebp-36], 0
jne .Lt_00BE
push 0
push 0
push 66
call ERRREPORT
add esp, 12
jmp .Lt_00BB
.Lt_00BE:
.Lt_00BD:
cmp dword ptr [ebp-12], 0
jl .Lt_00C0
jg .Lt_0104
cmp dword ptr [ebp-16], 0
jbe .Lt_00C0
.Lt_0104:
mov ebx, dword ptr [ebp-36]
mov ecx, dword ptr [ebx+44]
mov eax, dword ptr [ebx+48]
sub ecx, dword ptr [ebp-16]
sbb eax, dword ptr [ebp-12]
mov dword ptr [ebp-32], ecx
mov dword ptr [ebp-28], eax
cmp dword ptr [ebp-28], 0
jl .Lt_00C2
jg .Lt_0105
cmp dword ptr [ebp-32], 0
jbe .Lt_00C2
.Lt_0105:
push dword ptr [ebp-28]
push dword ptr [ebp-32]
mov ecx, dword ptr [ebp+8]
push dword ptr [ecx+16]
call ASTTYPEINIADDPAD
add esp, 12
mov eax, dword ptr [ebp-32]
mov ecx, dword ptr [ebp-28]
add dword ptr [ebp-16], eax
adc dword ptr [ebp-12], ecx
.Lt_00C2:
.Lt_00C1:
.Lt_00C0:
.Lt_00BF:
mov eax, dword ptr [ebp-36]
mov ebx, dword ptr [eax+44]
mov ecx, dword ptr [eax+48]
add ebx, dword ptr [ebp-24]
adc ecx, dword ptr [ebp-20]
mov eax, dword ptr [ebp+8]
mov esi, dword ptr [eax+16]
mov dword ptr [esi+20], ebx
mov dword ptr [esi+24], ecx
push dword ptr [ebp-36]
call SYMBCHECKACCESS
add esp, 4
test eax, eax
jne .Lt_00C4
push 0
push 0
push 201
call ERRREPORT
add esp, 12
.Lt_00C4:
.Lt_00C3:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-36]
mov dword ptr [eax], ebx
push 0
push -2147483648
push dword ptr [ebp+8]
call HUPDATECONTEXTDTYPE
add esp, 12
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+20]
and eax, -3
mov ebx, eax
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+20], ebx
push dword ptr [ebp-36]
call SYMBHASCTOR
add esp, 4
test eax, eax
je .Lt_00C6
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+20]
or ebx, 2
mov eax, ebx
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+20], eax
.Lt_00C6:
.Lt_00C5:
push -1
push dword ptr [ebp+8]
call HARRAYINIT
add esp, 8
test eax, eax
jne .Lt_00C8
mov eax, dword ptr [ebp-36]
cmp eax, dword ptr [ebp-40]
setne bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+24], 0
sete cl
shr ecx, 1
sbb ecx, ecx
or ebx, ecx
je .Lt_00CA
push 0
push -1
push 24
call ERRREPORT
add esp, 12
dec dword ptr [Lt_00FF]
jmp .Lt_00A7
.Lt_00CA:
.Lt_00C9:
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ecx+24]
mov dword ptr [ebp-100], ebx
lea ebx, [ebp-76]
push edi
mov edi, dword ptr [ebp+8]
mov esi, ebx
mov ecx, 7
rep movsd
pop edi
lea ebx, [ebp-96]
push ebx
push -1
push dword ptr [ebp-100]
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx]
call ASTBUILDIMPLICITCTORCALLEX
add esp, 16
mov dword ptr [ebp-100], eax
cmp dword ptr [ebp-100], 0
jne .Lt_00CC
dec dword ptr [Lt_00FF]
jmp .Lt_00A7
.Lt_00CC:
.Lt_00CB:
cmp dword ptr [ebp-80], 0
je .Lt_00CE
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_00D0
push 0
push 0
push 7
call ERRREPORT
add esp, 12
push 0
push 0
push -1
push 41
call HSKIPUNTIL
add esp, 16
.Lt_00D0:
.Lt_00CF:
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [ebp+8]
push dword ptr [eax+16]
call ASTTYPEINIREMOVELASTNODE
add esp, 4
.Lt_00CE:
.Lt_00CD:
dec dword ptr [Lt_00FF]
cmp dword ptr [ebp-96], 0
je .Lt_00D2
mov eax, dword ptr [ebp+8]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+4]
push dword ptr [ebp-100]
mov eax, dword ptr [ebp+8]
push dword ptr [eax]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+16]
call ASTTYPEINIADDCTORCALL
add esp, 20
test eax, eax
setne bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-4], ebx
jmp .Lt_00A7
jmp .Lt_00D1
.Lt_00D2:
push 0
push dword ptr [ebp-100]
push dword ptr [ebp+8]
call HDOASSIGN
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_00A7
.Lt_00D1:
.Lt_00C8:
.Lt_00C7:
mov eax, dword ptr [ebp-36]
mov ebx, dword ptr [ebp-36]
mov esi, dword ptr [ebx+72]
mov ecx, dword ptr [ebx+76]
push dword ptr [eax+40]
push dword ptr [eax+36]
push ecx
push esi
push eax
mov eax, [esp+4]
mul dword ptr [esp+12]
xchg eax, [esp+4]
imul eax, [esp+16]
add eax, edx
mov edx, [esp+8]
imul edx, [esp+12]
add edx, eax
mov [esp+8], edx
pop eax
pop esi
pop ecx
add esp, 8
add dword ptr [ebp-16], esi
adc dword ptr [ebp-12], ecx
push dword ptr [ebp-36]
call SYMBUDTGETNEXTINITABLEFIELD
add esp, 4
mov dword ptr [ebp-36], eax
cmp dword ptr [Lt_00FF], 1
jle .Lt_00D4
cmp dword ptr [ebp-84], 0
je .Lt_00D6
cmp dword ptr [ebp-36], 0
jne .Lt_00D8
jmp .Lt_00BB
.Lt_00D8:
.Lt_00D7:
.Lt_00D6:
.Lt_00D5:
.Lt_00D4:
.Lt_00D3:
push 44
call HMATCH
add esp, 4
test eax, eax
jne .Lt_00DA
jmp .Lt_00BB
.Lt_00DA:
.Lt_00D9:
.Lt_00BC:
jmp .Lt_00BA
.Lt_00BB:
cmp dword ptr [ebp-80], 0
je .Lt_00DC
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_00DE
push 0
push 0
push 7
call ERRREPORT
add esp, 12
push 0
push 0
push -1
push 41
call HSKIPUNTIL
add esp, 16
jmp .Lt_00DD
.Lt_00DE:
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [ebp+8]
push dword ptr [eax]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+16]
call ASTTYPEINISCOPEEND
add esp, 8
.Lt_00DD:
.Lt_00DC:
.Lt_00DB:
lea eax, [ebp-76]
push edi
mov edi, dword ptr [ebp+8]
mov esi, eax
mov ecx, 7
rep movsd
pop edi
mov eax, dword ptr [ebp+8]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+4]
call SYMBCALCLEN
add esp, 8
mov dword ptr [ebp-92], eax
mov dword ptr [ebp-88], edx
mov edx, dword ptr [ebp-92]
mov eax, dword ptr [ebp-88]
sub edx, dword ptr [ebp-16]
sbb eax, dword ptr [ebp-12]
mov dword ptr [ebp-32], edx
mov dword ptr [ebp-28], eax
cmp dword ptr [ebp-28], 0
jl .Lt_00E0
jg .Lt_0109
cmp dword ptr [ebp-32], 0
jbe .Lt_00E0
.Lt_0109:
push dword ptr [ebp-28]
push dword ptr [ebp-32]
mov edx, dword ptr [ebp+8]
push dword ptr [edx+16]
call ASTTYPEINIADDPAD
add esp, 12
.Lt_00E0:
.Lt_00DF:
mov eax, dword ptr [ebp-92]
mov edx, dword ptr [ebp-88]
add eax, dword ptr [ebp-24]
adc edx, dword ptr [ebp-20]
mov esi, dword ptr [ebp+8]
mov ecx, dword ptr [esi+16]
mov dword ptr [ecx+20], eax
mov dword ptr [ecx+24], edx
dec dword ptr [Lt_00FF]
mov dword ptr [ebp-4], -1
.Lt_00A7:
mov eax, dword ptr [ebp-4]
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size HUDTINIT, .-HUDTINIT

.section .bss
.balign 4
	.lcomm	Lt_00FF,4
	#FreeBASIC-1.01.0-source/src/compiler/parser-decl-symb-init.bas' compilation took 0.03435298835393041 secs
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
.int fb_ctor__parserzdeclzsymbzinit
