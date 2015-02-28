	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/symb-struct.bas' compilation started at 15:27:38 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl SYMBSTRUCTBEGIN
SYMBSTRUCTBEGIN:
.type SYMBSTRUCTBEGIN, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_005F:
mov dword ptr [ebp-4], 0
cmp dword ptr [ebp+24], 0
jne .Lt_0062
cmp dword ptr [PARSER+96], 0
je .Lt_0064
mov eax, dword ptr [ebp+20]
mov dword ptr [ebp+24], eax
.Lt_0064:
.Lt_0063:
.Lt_0062:
.Lt_0061:
push dword ptr [ebp+40]
push 0
push 18
push dword ptr [ebp+24]
push dword ptr [ebp+20]
push 10
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 0
mov eax, dword ptr [ebp+44]
or eax, 32
mov ebx, eax
push ebx
call SYMBNEWSYMBOL
add esp, 40
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0066
jmp .Lt_0060
.Lt_0066:
.Lt_0065:
mov eax, dword ptr [ebp-8]
mov word ptr [eax+112], 0
cmp dword ptr [ebp+28], 0
je .Lt_0068
mov eax, dword ptr [ebp-8]
movsx ebx, word ptr [eax+112]
or ebx, 1
mov eax, dword ptr [ebp-8]
mov word ptr [eax+112], bx
.Lt_0068:
.Lt_0067:
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebp-8]
mov dword ptr [ebx+52], eax
mov eax, dword ptr [ebp-8]
mov dword ptr [eax+56], 0
mov eax, dword ptr [ebp-8]
mov dword ptr [eax+60], 0
cmp dword ptr [ebp+16], 0
jne .Lt_006A
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp-8]
mov dword ptr [eax+64], ebx
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+80], 0
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+84], 0
push 0
push 16
mov ebx, dword ptr [ebp-8]
lea eax, [ebx+68]
push eax
call HASHINIT
add esp, 12
jmp .Lt_006B
.Lt_006C:
push 12
push 0
mov eax, dword ptr [ebp-8]
lea ebx, [eax+68]
push ebx
call memset
add esp, 12
.Lt_006B:
jmp .Lt_0069
.Lt_006A:
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebp+16]
mov dword ptr [ebx+96], eax
mov eax, dword ptr [ebp-8]
movsx ebx, word ptr [eax+112]
or ebx, 2
mov eax, dword ptr [ebp-8]
mov word ptr [eax+112], bx
.Lt_0069:
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+88], 0
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+44], 0
mov dword ptr [ebx+48], 0
cmp dword ptr [ENV+136], 3
jne .Lt_006E
cmp dword ptr [ebp+32], 0
jne .Lt_0070
mov dword ptr [ebp+32], 1
.Lt_0070:
.Lt_006F:
.Lt_006E:
.Lt_006D:
mov bl, byte ptr [ebp+32]
mov eax, dword ptr [ebp-8]
mov byte ptr [eax+115], bl
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+100], 1
mov ebx, dword ptr [ebp-8]
mov byte ptr [ebx+114], 0
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+104], 0
mov dword ptr [ebx+108], 0
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+116], -2147483648
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+120], -1
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+124], 0
cmp dword ptr [ebp+36], 0
je .Lt_0072
push 0
push 0
push 0
push 0
push dword ptr [ebp+36]
push 18
push offset Lt_0077
push 0
push offset Lt_0074
push dword ptr [ebp-8]
call SYMBADDFIELD
add esp, 40
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+92], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+8]
or ebx, 262144
mov eax, ebx
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+8], eax
push 0
push dword ptr [ebp-8]
call SYMBNESTBEGIN
add esp, 8
push dword ptr [ebp-8]
push dword ptr [ebp+36]
call SYMBNAMESPACEIMPORTEX
add esp, 8
mov eax, dword ptr [ebp+36]
mov ebx, dword ptr [eax+8]
and ebx, 4194304
test ebx, ebx
je .Lt_0076
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx+8]
or eax, 4194304
mov ebx, eax
mov eax, dword ptr [ebp-8]
mov dword ptr [eax+8], ebx
push dword ptr [ebp-8]
call SYMBUDTALLOCEXT
add esp, 4
mov ebx, dword ptr [ebp+36]
mov eax, dword ptr [ebx+124]
mov ebx, dword ptr [ebp-8]
mov ecx, dword ptr [ebx+124]
mov ebx, dword ptr [eax+140]
mov dword ptr [ecx+140], ebx
mov ebx, dword ptr [ebp+36]
mov ecx, dword ptr [ebx+124]
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx+124]
mov ebx, dword ptr [ecx+152]
mov dword ptr [eax+152], ebx
.Lt_0076:
.Lt_0075:
jmp .Lt_0071
.Lt_0072:
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+92], 0
.Lt_0071:
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ebx
.Lt_0060:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBSTRUCTBEGIN, .-SYMBSTRUCTBEGIN

.section .bss
.balign 4
	.lcomm	Lt_0078,16

.section .data
.balign 4
Lt_0077:
.int Lt_0078
.int Lt_0078
.int 16
.int 16
.int 1
.int 1
.int 0
.int 0

.section .text
.balign 16

.globl TYPECALCNATURALALIGN
TYPECALCNATURALALIGN:
.type TYPECALCNATURALALIGN, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
mov dword ptr [ebp-4], 0
.Lt_0079:
mov eax, dword ptr [ebp+8]
and eax, 480
je .Lt_007B
mov dword ptr [ebp-12], 22
jmp .Lt_008A
.Lt_007B:
mov eax, dword ptr [ebp+8]
and eax, 31
mov dword ptr [ebp-12], eax
.Lt_008A:
mov eax, dword ptr [ebp-12]
mov dword ptr [ebp-16], eax
jmp .Lt_007E
.Lt_0080:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+100]
mov dword ptr [ebp-8], ebx
jmp .Lt_007D
.Lt_0081:
mov ebx, dword ptr [ENV+236]
mov dword ptr [ebp-8], ebx
jmp .Lt_007D
.Lt_0082:
mov ebx, dword ptr [ebp+8]
and ebx, 480
je .Lt_0083
mov dword ptr [ebp-20], 22
jmp .Lt_008B
.Lt_0083:
mov ebx, dword ptr [ebp+8]
and ebx, 31
mov dword ptr [ebp-20], ebx
.Lt_008B:
mov ebx, dword ptr [ebp-20]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx+4]
mov dword ptr [ebp-8], eax
jmp .Lt_007D
.Lt_007E:
mov eax, dword ptr [ebp-16]
add eax, 4294967280
cmp eax, 2
ja .Lt_0082
mov eax, dword ptr [ebp-16]
jmp dword ptr [.LT_0085+eax*4-64]
.LT_0085:
.int .Lt_0081
.int .Lt_0082
.int .Lt_0080
.Lt_007D:
call FBGETCPUFAMILY
test eax, eax
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ENV+108]
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
and eax, ebx
je .Lt_0087
cmp dword ptr [ebp-8], 8
jne .Lt_0089
mov dword ptr [ebp-8], 4
.Lt_0089:
.Lt_0088:
.Lt_0087:
.Lt_0086:
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ebx
.Lt_007A:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size TYPECALCNATURALALIGN, .-TYPECALCNATURALALIGN
.balign 16

.globl SYMBCHECKBITFIELD
SYMBCHECKBITFIELD:
.type SYMBCHECKBITFIELD, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
push esi
push edi
mov dword ptr [ebp-4], 0
.Lt_0098:
mov eax, dword ptr [ebp+24]
test eax, eax
setle al
shr eax, 1
sbb eax, eax
mov ecx, dword ptr [ebp+24]
mov ebx, ecx
sar ebx, 31
mov edi, dword ptr [ebp+16]
mov esi, dword ptr [ebp+20]
shld esi, edi, 3
shl edi, 3
cmp ebx, esi
mov edx, -1
jg .Lt_00A7
jl .Lt_00A8
cmp ecx, edi
ja .Lt_00A7
.Lt_00A8:
xor edx, edx
.Lt_00A7:
or eax, edx
je .Lt_009B
mov dword ptr [ebp-4], 0
jmp .Lt_0099
.Lt_009B:
.Lt_009A:
mov edx, dword ptr [ebp+12]
and edx, 480
je .Lt_009C
mov dword ptr [ebp-8], 22
jmp .Lt_00A5
.Lt_009C:
mov edx, dword ptr [ebp+12]
and edx, 31
mov dword ptr [ebp-8], edx
.Lt_00A5:
mov edx, dword ptr [ebp-8]
mov dword ptr [ebp-12], edx
jmp .Lt_009F
.Lt_00A1:
mov dword ptr [ebp-4], -1
jmp .Lt_0099
jmp .Lt_009E
.Lt_00A2:
call FBIS64BIT
mov dword ptr [ebp-4], eax
jmp .Lt_009E
.Lt_00A3:
mov dword ptr [ebp-4], 0
jmp .Lt_0099
jmp .Lt_009E
.Lt_009F:
mov eax, dword ptr [ebp-12]
add eax, 4294967295
cmp eax, 12
ja .Lt_00A3
mov eax, dword ptr [ebp-12]
jmp dword ptr [.LT_00A4+eax*4-4]
.LT_00A4:
.int .Lt_00A1
.int .Lt_00A1
.int .Lt_00A3
.int .Lt_00A1
.int .Lt_00A1
.int .Lt_00A3
.int .Lt_00A1
.int .Lt_00A1
.int .Lt_00A3
.int .Lt_00A1
.int .Lt_00A1
.int .Lt_00A2
.int .Lt_00A2
.Lt_009E:
.Lt_0099:
mov eax, dword ptr [ebp-4]
pop edi
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBCHECKBITFIELD, .-SYMBCHECKBITFIELD
.balign 16

.globl SYMBADDFIELD
SYMBADDFIELD:
.type SYMBADDFIELD, @function
push ebp
mov ebp, esp
sub esp, 96
push ebx
push esi
mov dword ptr [ebp-4], 0
.Lt_00A9:
mov dword ptr [ebp-4], 0
mov dword ptr [ebp-20], 0
cmp dword ptr [ebp+36], 0
jg .Lt_00AC
jl .Lt_00FF
cmp dword ptr [ebp+32], 0
ja .Lt_00AC
.Lt_00FF:
push dword ptr [ebp+28]
push dword ptr [ebp+24]
call SYMBCALCLEN
add esp, 8
mov dword ptr [ebp+32], eax
mov dword ptr [ebp+36], edx
.Lt_00AC:
.Lt_00AB:
mov eax, dword ptr [ebp+44]
and eax, 4
je .Lt_00AE
mov dword ptr [ebp-64], 0
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
lea eax, [ebp-64]
mov dword ptr [ebp-96], eax
lea eax, [ebp-64]
lea edx, [ebp-96]
add edx, 4
mov dword ptr [edx], eax
lea eax, [ebp-96]
add eax, 8
mov dword ptr [eax], 16
lea eax, [ebp-96]
add eax, 12
mov dword ptr [eax], 16
lea eax, [ebp-96]
add eax, 16
mov dword ptr [eax], 1
lea eax, [ebp-96]
add eax, 20
mov dword ptr [eax], 1
lea eax, [ebp-96]
add eax, 24
mov dword ptr [eax], 0
lea eax, [ebp-96]
add eax, 28
mov dword ptr [eax], 0
push dword ptr [ebp+28]
push dword ptr [ebp+24]
push dword ptr [ebp+16]
call SYMBADDARRAYDESCRIPTORTYPE
add esp, 12
mov dword ptr [ebp-24], eax
push 8388608
push 0
push 0
push 0
push dword ptr [ebp-24]
push 18
lea eax, [ebp-96]
push eax
push 0
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call SYMBADDFIELD
add esp, 40
mov dword ptr [ebp-20], eax
mov eax, dword ptr [ebp-20]
mov ebx, dword ptr [eax+44]
mov edx, dword ptr [eax+48]
mov dword ptr [ebp-48], ebx
mov dword ptr [ebp-44], edx
mov dword ptr [ebp-32], 0
jmp .Lt_00AD
.Lt_00AE:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+44]
mov edx, dword ptr [ebx+48]
mov dword ptr [ebp-48], eax
mov dword ptr [ebp-44], edx
mov dword ptr [ebp-32], -1
.Lt_00AD:
cmp dword ptr [ebp+40], 0
jle .Lt_00B1
mov eax, dword ptr [ebp+8]
movsx edx, word ptr [eax+112]
or edx, 32768
mov eax, dword ptr [ebp+8]
mov word ptr [eax+112], dx
mov edx, dword ptr [ebp+8]
movzx eax, byte ptr [edx+114]
test eax, eax
jle .Lt_00B3
mov eax, dword ptr [ebp+8]
mov edx, dword ptr [eax+60]
mov dword ptr [ebp-12], edx
.Lt_00B4:
mov edx, dword ptr [ebp-12]
mov eax, dword ptr [edx]
cmp eax, 12
sete al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_00B5
mov eax, dword ptr [ebp-12]
mov edx, dword ptr [eax+156]
mov dword ptr [ebp-12], edx
jmp .Lt_00B4
.Lt_00B5:
mov edx, dword ptr [ebp+8]
movzx eax, byte ptr [edx+114]
add eax, dword ptr [ebp+40]
mov ebx, eax
mov edx, ebx
sar edx, 31
mov eax, dword ptr [ebp-12]
mov esi, dword ptr [eax+36]
mov ecx, dword ptr [eax+40]
shld ecx, esi, 3
shl esi, 3
cmp edx, ecx
jl .Lt_00B7
jg .Lt_0101
cmp ebx, esi
jbe .Lt_00B7
.Lt_0101:
mov esi, dword ptr [ebp+8]
mov byte ptr [esi+114], 0
jmp .Lt_00B6
.Lt_00B7:
mov esi, dword ptr [ebp-12]
mov ebx, dword ptr [esi+36]
mov ecx, dword ptr [esi+40]
cmp dword ptr [ebp+36], ecx
jne .Lt_0102
cmp dword ptr [ebp+32], ebx
je .Lt_00B9
.Lt_0102:
mov ebx, dword ptr [ebp-12]
mov ecx, dword ptr [ebx+24]
and ecx, 511
mov dword ptr [ebp+24], ecx
mov ecx, dword ptr [ebp-12]
mov esi, dword ptr [ecx+36]
mov ebx, dword ptr [ecx+40]
mov dword ptr [ebp+32], esi
mov dword ptr [ebp+36], ebx
.Lt_00B9:
.Lt_00B8:
mov esi, dword ptr [ebp-12]
mov ecx, dword ptr [esi+44]
mov ebx, dword ptr [esi+48]
mov dword ptr [ebp-48], ecx
mov dword ptr [ebp-44], ebx
mov dword ptr [ebp-32], 0
.Lt_00B6:
.Lt_00B3:
.Lt_00B2:
jmp .Lt_00B0
.Lt_00B1:
mov ecx, dword ptr [ebp+8]
mov byte ptr [ecx+114], 0
.Lt_00B0:
cmp dword ptr [ebp-32], 0
je .Lt_00BB
push dword ptr [ebp+28]
push dword ptr [ebp+24]
mov ecx, dword ptr [ebp+8]
movzx ebx, byte ptr [ecx+115]
push ebx
push dword ptr [ebp-44]
push dword ptr [ebp-48]
call HCALCPADDING
add esp, 20
mov dword ptr [ebp-28], eax
cmp dword ptr [ebp-28], 0
jle .Lt_00BD
cmp dword ptr [ebp+40], 0
jle .Lt_00BF
cmp dword ptr [ENV+188], 0
jne .Lt_00C1
mov eax, dword ptr [ebp-28]
sal eax, 3
cmp dword ptr [ebp+40], eax
jg .Lt_00C3
mov ebx, dword ptr [ebp-28]
mov eax, ebx
sar eax, 31
mov dword ptr [ebp+32], ebx
mov dword ptr [ebp+36], eax
mov dword ptr [ebp-28], 0
cmp dword ptr [ebp+36], 0
jne .Lt_00C5
cmp dword ptr [ebp+32], 1
jne .Lt_00C5
.Lt_0103:
.Lt_00C6:
mov ebx, dword ptr [ebp+24]
and ebx, 480
je .Lt_00C7
mov dword ptr [ebp-52], 22
jmp .Lt_00FD
.Lt_00C7:
mov ebx, dword ptr [ebp+24]
and ebx, 31
mov dword ptr [ebp-52], ebx
.Lt_00FD:
mov ebx, dword ptr [ebp-52]
imul ebx, 28
cmp dword ptr [SYMB_DTYPETB+ebx+8], 0
je .Lt_00CA
mov dword ptr [ebp+24], 1
jmp .Lt_00C9
.Lt_00CA:
mov dword ptr [ebp+24], 2
.Lt_00C9:
jmp .Lt_00C4
.Lt_00C5:
cmp dword ptr [ebp+36], 0
jne .Lt_00CB
cmp dword ptr [ebp+32], 2
jne .Lt_00CB
.Lt_0104:
.Lt_00CC:
mov ebx, dword ptr [ebp+24]
and ebx, 480
je .Lt_00CD
mov dword ptr [ebp-52], 22
jmp .Lt_00FE
.Lt_00CD:
mov ebx, dword ptr [ebp+24]
and ebx, 31
mov dword ptr [ebp-52], ebx
.Lt_00FE:
mov ebx, dword ptr [ebp-52]
imul ebx, 28
cmp dword ptr [SYMB_DTYPETB+ebx+8], 0
je .Lt_00D0
mov dword ptr [ebp+24], 4
jmp .Lt_00CF
.Lt_00D0:
mov dword ptr [ebp+24], 5
.Lt_00CF:
.Lt_00CB:
.Lt_00C4:
.Lt_00C3:
.Lt_00C2:
.Lt_00C1:
.Lt_00C0:
.Lt_00BF:
.Lt_00BE:
.Lt_00BD:
.Lt_00BC:
push dword ptr [ebp-28]
push dword ptr [ebp+36]
push dword ptr [ebp+32]
push dword ptr [ebp-44]
push dword ptr [ebp-48]
call HCHECKUDTSIZE
add esp, 20
test eax, eax
je .Lt_00D2
mov ebx, dword ptr [ebp-28]
mov eax, ebx
sar eax, 31
add dword ptr [ebp-48], ebx
adc dword ptr [ebp-44], eax
jmp .Lt_00D1
.Lt_00D2:
mov dword ptr [ebp-32], 0
.Lt_00D1:
push dword ptr [ebp+28]
push dword ptr [ebp+24]
call TYPECALCNATURALALIGN
add esp, 8
mov dword ptr [ebp-36], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+100]
cmp dword ptr [ebp-36], ebx
jle .Lt_00D4
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp-36]
mov dword ptr [ebx+100], eax
.Lt_00D4:
.Lt_00D3:
.Lt_00BB:
.Lt_00BA:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-16], eax
.Lt_00D5:
mov eax, dword ptr [ebp-16]
movsx ebx, word ptr [eax+112]
and ebx, 2
test ebx, ebx
je .Lt_00D6
mov ebx, dword ptr [ebp-16]
mov eax, dword ptr [ebx+96]
mov dword ptr [ebp-16], eax
jmp .Lt_00D5
.Lt_00D6:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 128
or dword ptr [ebp+44], ebx
mov dword ptr [ebp-40], 0
mov ebx, dword ptr [ebp+44]
and ebx, 8388608
test ebx, ebx
jne .Lt_00D8
mov dword ptr [ebp-40], 32
.Lt_00D8:
.Lt_00D7:
push dword ptr [ebp+44]
push dword ptr [ebp+28]
push dword ptr [ebp+24]
push 0
push dword ptr [ebp+12]
push 12
mov ebx, dword ptr [ebp-16]
lea eax, [ebx+64]
push eax
mov eax, dword ptr [ebp+8]
lea ebx, [eax+52]
push ebx
push 0
push dword ptr [ebp-40]
call SYMBNEWSYMBOL
add esp, 40
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_00DA
jmp .Lt_00AA
.Lt_00DA:
.Lt_00D9:
mov eax, dword ptr [ebp-8]
mov ecx, dword ptr [ebp+32]
mov ebx, dword ptr [ebp+36]
mov dword ptr [eax+36], ecx
mov dword ptr [eax+40], ebx
mov ecx, dword ptr [ebp-8]
mov eax, dword ptr [ebp-48]
mov ebx, dword ptr [ebp-44]
mov dword ptr [ecx+44], eax
mov dword ptr [ecx+48], ebx
push dword ptr [ebp-8]
call SYMBVARINITFIELDS
add esp, 4
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp-8]
call SYMBVARINITARRAYDIMENSIONS
add esp, 12
cmp dword ptr [ebp-20], 0
je .Lt_00DC
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp-20]
mov dword ptr [eax+80], ebx
mov ebx, dword ptr [ebp-20]
mov eax, dword ptr [ebp-8]
mov ecx, dword ptr [ebx+28]
mov dword ptr [eax+84], ecx
mov ecx, dword ptr [ebp-20]
mov eax, dword ptr [ebp-8]
mov dword ptr [ecx+88], eax
push 0
push dword ptr [ebp-8]
push dword ptr [ebp-20]
call ASTBUILDARRAYDESCINITREE
add esp, 12
mov ecx, dword ptr [ebp-20]
mov dword ptr [ecx+52], eax
.Lt_00DC:
.Lt_00DB:
mov eax, dword ptr [ebp+8]
movzx ecx, byte ptr [eax+114]
mov eax, dword ptr [ebp-8]
mov dword ptr [eax+104], ecx
mov ecx, dword ptr [ebp-8]
mov eax, dword ptr [ebp+40]
mov dword ptr [ecx+108], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+72]
mov ecx, dword ptr [eax+76]
push ecx
push ebx
push dword ptr [ebp+36]
push dword ptr [ebp+32]
mov eax, [esp+0]
mul dword ptr [esp+8]
xchg eax, [esp+0]
imul eax, [esp+12]
add eax, edx
mov edx, [esp+4]
imul edx, [esp+8]
add edx, eax
mov [esp+4], edx
pop dword ptr [ebp+32]
pop dword ptr [ebp+36]
add esp, 8
mov ebx, dword ptr [ebp+44]
and ebx, 4
je .Lt_00DE
mov ebx, dword ptr [ebp+8]
movsx ecx, word ptr [ebx+112]
and ecx, 3
test ecx, ecx
je .Lt_00E0
push 0
push 0
push 161
call ERRREPORT
add esp, 12
jmp .Lt_00DF
.Lt_00E0:
mov ecx, dword ptr [ebp+8]
movsx ebx, word ptr [ecx+112]
or ebx, 8
mov ecx, dword ptr [ebp+8]
mov word ptr [ecx+112], bx
mov ebx, dword ptr [ebp+8]
movsx ecx, word ptr [ebx+112]
or ecx, 16
mov ebx, dword ptr [ebp+8]
mov word ptr [ebx+112], cx
mov ecx, dword ptr [ebp+8]
movsx ebx, word ptr [ecx+112]
or ebx, 4
mov ecx, dword ptr [ebp+8]
mov word ptr [ecx+112], bx
.Lt_00DF:
jmp .Lt_00DD
.Lt_00DE:
mov ebx, dword ptr [ebp+24]
and ebx, 511
mov dword ptr [ebp-52], ebx
cmp dword ptr [ebp-52], 16
jne .Lt_00E3
.Lt_00E4:
mov ebx, dword ptr [ebp+8]
movsx ecx, word ptr [ebx+112]
and ecx, 3
test ecx, ecx
je .Lt_00E6
push 0
push 0
push 160
call ERRREPORT
add esp, 12
jmp .Lt_00E5
.Lt_00E6:
mov ecx, dword ptr [ebp+8]
movsx ebx, word ptr [ecx+112]
or ebx, 8
mov ecx, dword ptr [ebp+8]
mov word ptr [ecx+112], bx
mov ebx, dword ptr [ebp+8]
movsx ecx, word ptr [ebx+112]
or ecx, 16
mov ebx, dword ptr [ebp+8]
mov word ptr [ebx+112], cx
mov ecx, dword ptr [ebp+8]
movsx ebx, word ptr [ecx+112]
or ebx, 4
mov ecx, dword ptr [ebp+8]
mov word ptr [ecx+112], bx
.Lt_00E5:
jmp .Lt_00E1
.Lt_00E3:
cmp dword ptr [ebp-52], 18
jne .Lt_00E7
.Lt_00E8:
mov ebx, dword ptr [ebp+28]
movsx ecx, word ptr [ebx+112]
and ecx, 4
test ecx, ecx
je .Lt_00EA
mov ecx, dword ptr [ebp-16]
movsx ebx, word ptr [ecx+112]
or ebx, 4
mov ecx, dword ptr [ebp-16]
mov word ptr [ecx+112], bx
.Lt_00EA:
.Lt_00E9:
push dword ptr [ebp+28]
call SYMBGETCOMPCTORHEAD
add esp, 4
test eax, eax
je .Lt_00EC
mov eax, dword ptr [ebp+8]
movsx ebx, word ptr [eax+112]
and ebx, 3
test ebx, ebx
je .Lt_00EE
push 0
push 0
push 162
call ERRREPORT
add esp, 12
jmp .Lt_00ED
.Lt_00EE:
mov ebx, dword ptr [ebp+8]
movsx eax, word ptr [ebx+112]
or eax, 8
mov ebx, dword ptr [ebp+8]
mov word ptr [ebx+112], ax
.Lt_00ED:
.Lt_00EC:
.Lt_00EB:
push dword ptr [ebp+28]
call SYMBGETCOMPDTOR
add esp, 4
test eax, eax
je .Lt_00F0
mov eax, dword ptr [ebp+8]
movsx ebx, word ptr [eax+112]
and ebx, 3
test ebx, ebx
je .Lt_00F2
push 0
push 0
push 163
call ERRREPORT
add esp, 12
jmp .Lt_00F1
.Lt_00F2:
mov ebx, dword ptr [ebp+8]
movsx eax, word ptr [ebx+112]
or eax, 16
mov ebx, dword ptr [ebp+8]
mov word ptr [ebx+112], ax
.Lt_00F1:
.Lt_00F0:
.Lt_00EF:
.Lt_00E7:
.Lt_00E1:
.Lt_00DD:
mov eax, dword ptr [ebp+24]
and eax, 480
test eax, eax
je .Lt_00F4
mov eax, dword ptr [ebp-16]
movsx ebx, word ptr [eax+112]
or ebx, 4
mov eax, dword ptr [ebp-16]
mov word ptr [eax+112], bx
.Lt_00F4:
.Lt_00F3:
mov ebx, dword ptr [ebp+8]
movsx eax, word ptr [ebx+112]
and eax, 1
test eax, eax
je .Lt_00F6
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+8]
or ebx, 16777216
mov eax, ebx
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+8], eax
cmp dword ptr [ebp-32], 0
je .Lt_00F8
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [ebp+32]
mov ebx, dword ptr [ebp+36]
cmp dword ptr [eax+40], ebx
jg .Lt_00FA
jl .Lt_0105
cmp dword ptr [eax+36], ecx
jae .Lt_00FA
.Lt_0105:
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ebp+32]
mov ebx, dword ptr [ebp+36]
mov dword ptr [ecx+36], eax
mov dword ptr [ecx+40], ebx
.Lt_00FA:
.Lt_00F9:
.Lt_00F8:
.Lt_00F7:
jmp .Lt_00F5
.Lt_00F6:
cmp dword ptr [ebp-32], 0
je .Lt_00FC
mov ebx, dword ptr [ebp+32]
mov eax, dword ptr [ebp+36]
add dword ptr [ebp-48], ebx
adc dword ptr [ebp-44], eax
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebp-48]
mov eax, dword ptr [ebp-44]
mov dword ptr [ebx+44], ecx
mov dword ptr [ebx+48], eax
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-48]
mov eax, dword ptr [ebp-44]
mov dword ptr [ecx+36], ebx
mov dword ptr [ecx+40], eax
.Lt_00FC:
.Lt_00FB:
mov ebx, dword ptr [ebp+8]
movzx eax, byte ptr [ebx+114]
add eax, dword ptr [ebp+40]
mov bl, al
mov eax, dword ptr [ebp+8]
mov byte ptr [eax+114], bl
.Lt_00F5:
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebp+8]
mov dword ptr [ebx+152], eax
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_00AA:
mov eax, dword ptr [ebp-4]
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBADDFIELD, .-SYMBADDFIELD
.balign 16

.globl SYMBINSERTINNERUDT
SYMBINSERTINNERUDT:
.type SYMBINSERTINNERUDT, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
push esi
.Lt_0106:
mov eax, dword ptr [ebp+8]
movsx ebx, word ptr [eax+112]
and ebx, 1
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_0109
push dword ptr [ebp+12]
push 18
mov ebx, dword ptr [ebp+8]
movzx eax, byte ptr [ebx+115]
push eax
mov eax, dword ptr [ebp+8]
push dword ptr [eax+48]
push dword ptr [eax+44]
call HCALCPADDING
add esp, 20
mov dword ptr [ebp-12], eax
push dword ptr [ebp-12]
push 0
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax+48]
push dword ptr [eax+44]
call HCHECKUDTSIZE
add esp, 20
test eax, eax
je .Lt_010B
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [ebp-12]
mov ebx, ecx
sar ebx, 31
add dword ptr [eax+44], ecx
adc dword ptr [eax+48], ebx
.Lt_010B:
.Lt_010A:
.Lt_0109:
.Lt_0108:
mov ecx, dword ptr [ebp+12]
mov ebx, dword ptr [ecx+56]
mov dword ptr [ebp-4], ebx
cmp dword ptr [ebp-4], 0
jne .Lt_010D
jmp .Lt_0107
.Lt_010D:
.Lt_010C:
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebp-4]
mov eax, dword ptr [ebx+60]
mov dword ptr [ecx+156], eax
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+60], 0
jne .Lt_010F
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [ebp-4]
mov dword ptr [eax+56], ecx
jmp .Lt_010E
.Lt_010F:
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ecx+60]
mov ecx, dword ptr [ebp-4]
mov dword ptr [eax+160], ecx
.Lt_010E:
mov ecx, dword ptr [ebp+8]
lea eax, [ecx+52]
mov dword ptr [ebp-8], eax
.Lt_0110:
cmp dword ptr [ebp-4], 0
je .Lt_0111
mov eax, dword ptr [ebp-4]
mov ecx, dword ptr [ebp-8]
mov dword ptr [eax+148], ecx
mov ecx, dword ptr [ebp+8]
movsx eax, word ptr [ecx+112]
and eax, 1
test eax, eax
je .Lt_0113
mov eax, dword ptr [ebp-4]
mov ecx, dword ptr [eax+8]
or ecx, 16777216
mov eax, ecx
mov ecx, dword ptr [ebp-4]
mov dword ptr [ecx+8], eax
jmp .Lt_0112
.Lt_0113:
mov eax, dword ptr [ebp-4]
mov ecx, dword ptr [ebp+8]
mov esi, dword ptr [ecx+44]
mov ebx, dword ptr [ecx+48]
add dword ptr [eax+44], esi
adc dword ptr [eax+48], ebx
.Lt_0112:
mov esi, dword ptr [ebp-4]
mov ebx, dword ptr [esi+160]
mov dword ptr [ebp-4], ebx
jmp .Lt_0110
.Lt_0111:
mov ebx, dword ptr [ebp+12]
mov esi, dword ptr [ebp+8]
mov eax, dword ptr [ebx+60]
mov dword ptr [esi+60], eax
mov eax, dword ptr [ebp+8]
movsx esi, word ptr [eax+112]
and esi, 1
test esi, esi
setne dl
mov esi, edx
shr esi, 1
sbb esi, esi
test esi, esi
jne .Lt_0115
mov esi, dword ptr [ebp+8]
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax+36]
mov ebx, dword ptr [eax+40]
add dword ptr [esi+44], ecx
adc dword ptr [esi+48], ebx
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ecx+44]
mov esi, dword ptr [ecx+48]
mov dword ptr [ebx+36], eax
mov dword ptr [ebx+40], esi
jmp .Lt_0114
.Lt_0115:
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+44], 0
mov dword ptr [eax+48], 0
mov eax, dword ptr [ebp+12]
mov esi, dword ptr [ebp+8]
mov ecx, dword ptr [esi+36]
mov ebx, dword ptr [esi+40]
cmp dword ptr [eax+40], ebx
jl .Lt_0117
jg .Lt_011C
cmp dword ptr [eax+36], ecx
jbe .Lt_0117
.Lt_011C:
mov ecx, dword ptr [ebp+12]
mov ebx, dword ptr [ebp+8]
mov esi, dword ptr [ecx+36]
mov eax, dword ptr [ecx+40]
mov dword ptr [ebx+36], esi
mov dword ptr [ebx+40], eax
.Lt_0117:
.Lt_0116:
.Lt_0114:
mov esi, dword ptr [ebp+12]
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+100]
cmp dword ptr [esi+100], ebx
jle .Lt_0119
mov ebx, dword ptr [ebp+12]
mov esi, dword ptr [ebp+8]
mov eax, dword ptr [ebx+100]
mov dword ptr [esi+100], eax
.Lt_0119:
.Lt_0118:
mov eax, dword ptr [ebp+8]
mov byte ptr [eax+114], 0
mov eax, dword ptr [ebp+12]
mov dword ptr [eax+56], 0
mov eax, dword ptr [ebp+12]
mov dword ptr [eax+60], 0
mov eax, dword ptr [ebp+12]
mov esi, dword ptr [ebp+8]
mov dword ptr [eax+152], esi
.Lt_0107:
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBINSERTINNERUDT, .-SYMBINSERTINNERUDT
.balign 16

.globl SYMBSTRUCTEND
SYMBSTRUCTEND:
.type SYMBSTRUCTEND, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
push esi
.Lt_0151:
cmp dword ptr [ebp+12], 0
je .Lt_0154
push 0
call SYMBNESTEND
add esp, 4
.Lt_0154:
.Lt_0153:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+8]
mov esi, dword ptr [eax+36]
mov ecx, dword ptr [eax+40]
mov dword ptr [ebx+104], esi
mov dword ptr [ebx+108], ecx
push dword ptr [ebp+8]
push 18
mov esi, dword ptr [ebp+8]
movzx ecx, byte ptr [esi+115]
push ecx
mov ecx, dword ptr [ebp+8]
push dword ptr [ecx+40]
push dword ptr [ecx+36]
call HCALCPADDING
add esp, 20
mov dword ptr [ebp-24], eax
push dword ptr [ebp-24]
push 0
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax+40]
push dword ptr [eax+36]
call HCHECKUDTSIZE
add esp, 20
test eax, eax
je .Lt_0156
mov eax, dword ptr [ebp+8]
mov esi, dword ptr [ebp-24]
mov ecx, esi
sar ecx, 31
add dword ptr [eax+36], esi
adc dword ptr [eax+40], ecx
.Lt_0156:
.Lt_0155:
push dword ptr [ebp+8]
lea esi, [ebp-20]
push esi
call SYMBUDTDECLAREDEFAULTMEMBERS
add esp, 8
push dword ptr [ebp+8]
call HGETRETURNTYPE
add esp, 4
mov esi, dword ptr [ebp+8]
mov dword ptr [esi+116], eax
push dword ptr [ebp+8]
lea eax, [ebp-20]
push eax
call SYMBUDTIMPLEMENTDEFAULTMEMBERS
add esp, 8
cmp dword ptr [SYMB+98672], 0
jle .Lt_0158
push dword ptr [ebp+8]
call SYMBCHECKFWDREF
add esp, 4
.Lt_0158:
.Lt_0157:
.Lt_0152:
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBSTRUCTEND, .-SYMBSTRUCTEND
.balign 16

.globl SYMBDELSTRUCT
SYMBDELSTRUCT:
.type SYMBDELSTRUCT, @function
push ebp
mov ebp, esp
push ebx
.Lt_0159:
mov eax, dword ptr [ebp+8]
movsx ebx, word ptr [eax+112]
and ebx, 2
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
not ebx
push ebx
push dword ptr [ebp+8]
call SYMBDELNAMESPACEMEMBERS
add esp, 8
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx+124], 0
je .Lt_015C
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+124]
call free
add esp, 4
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+124], 0
.Lt_015C:
.Lt_015B:
push dword ptr [ebp+8]
call SYMBFREESYMBOL
add esp, 4
.Lt_015A:
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBDELSTRUCT, .-SYMBDELSTRUCT
.balign 16

.globl SYMBUDTGETFIRSTFIELD
SYMBUDTGETFIRSTFIELD:
.type SYMBUDTGETFIRSTFIELD, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_0164:
mov eax, dword ptr [ebp+8]
push dword ptr [eax+56]
call HSKIPTOFIELD
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_0165:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size SYMBUDTGETFIRSTFIELD, .-SYMBUDTGETFIRSTFIELD
.balign 16

.globl SYMBUDTGETNEXTFIELD
SYMBUDTGETNEXTFIELD:
.type SYMBUDTGETNEXTFIELD, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_0166:
mov eax, dword ptr [ebp+8]
push dword ptr [eax+160]
call HSKIPTOFIELD
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_0167:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size SYMBUDTGETNEXTFIELD, .-SYMBUDTGETNEXTFIELD
.balign 16

.globl SYMBUDTGETNEXTINITABLEFIELD
SYMBUDTGETNEXTINITABLEFIELD:
.type SYMBUDTGETNEXTINITABLEFIELD, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_0170:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-8], eax
.Lt_0172:
push dword ptr [ebp+8]
call SYMBUDTGETNEXTFIELD
add esp, 4
mov dword ptr [ebp+8], eax
cmp dword ptr [ebp+8], 0
jne .Lt_0176
jmp .Lt_0173
.Lt_0176:
.Lt_0175:
push dword ptr [ebp+8]
push dword ptr [ebp-8]
call HFINDCOMMONPARENT
add esp, 8
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_0178
jmp .Lt_0173
.Lt_0178:
.Lt_0177:
mov eax, dword ptr [ebp-12]
movsx ebx, word ptr [eax+112]
and ebx, 1
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_017A
jmp .Lt_0173
.Lt_017A:
.Lt_0179:
.Lt_0174:
jmp .Lt_0172
.Lt_0173:
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebp-4], ebx
.Lt_0171:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBUDTGETNEXTINITABLEFIELD, .-SYMBUDTGETNEXTINITABLEFIELD
.balign 16

.globl SYMBGETUDTBASELEVEL
SYMBGETUDTBASELEVEL:
.type SYMBGETUDTBASELEVEL, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_017C:
cmp dword ptr [ebp+8], 0
sete al
shr eax, 1
sbb eax, eax
cmp dword ptr [ebp+12], 0
sete bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
je .Lt_017F
mov dword ptr [ebp-4], 0
jmp .Lt_017D
.Lt_017F:
.Lt_017E:
mov dword ptr [ebp-8], 1
.Lt_0180:
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx+92], 0
je .Lt_0181
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+92]
mov ebx, dword ptr [ebp+12]
cmp dword ptr [eax+28], ebx
jne .Lt_0183
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ebx
jmp .Lt_017D
.Lt_0183:
.Lt_0182:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+92]
mov ebx, dword ptr [eax+28]
mov dword ptr [ebp+8], ebx
inc dword ptr [ebp-8]
jmp .Lt_0180
.Lt_0181:
mov dword ptr [ebp-4], 0
.Lt_017D:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBGETUDTBASELEVEL, .-SYMBGETUDTBASELEVEL
.balign 16
fb_ctor__symbzstruct:
.type fb_ctor__symbzstruct, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__symbzstruct, .-fb_ctor__symbzstruct
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
HCALCPADDING:
.type HCALCPADDING, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
push esi
push edi
mov dword ptr [ebp-4], 0
.Lt_008E:
push dword ptr [ebp+24]
push dword ptr [ebp+20]
call TYPECALCNATURALALIGN
add esp, 8
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp+16], 0
jne .Lt_0091
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp+16], eax
jmp .Lt_0090
.Lt_0091:
mov eax, dword ptr [ebp-8]
cmp dword ptr [ebp+16], eax
jle .Lt_0093
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp+16], eax
.Lt_0093:
.Lt_0092:
.Lt_0090:
mov ebx, dword ptr [ebp+16]
mov eax, ebx
sar eax, 31
mov ecx, dword ptr [ebp+16]
dec ecx
mov edi, ecx
mov esi, edi
sar esi, 31
and edi, dword ptr [ebp+8]
and esi, dword ptr [ebp+12]
sub ebx, edi
sbb eax, esi
mov edi, dword ptr [ebp+16]
dec edi
mov ecx, edi
mov esi, ecx
sar esi, 31
and ebx, ecx
and eax, esi
mov ecx, ebx
mov dword ptr [ebp-4], ecx
.Lt_008F:
mov eax, dword ptr [ebp-4]
pop edi
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size HCALCPADDING, .-HCALCPADDING
.balign 16
HCHECKUDTSIZE:
.type HCHECKUDTSIZE, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_0094:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp+12]
mov dword ptr [ebp-12], ebx
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [ebp+20]
add dword ptr [ebp-12], eax
adc dword ptr [ebp-8], ebx
mov ebx, dword ptr [ebp+24]
mov eax, 0
add dword ptr [ebp-12], ebx
adc dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jb .Lt_0097
ja .Lt_0186
cmp dword ptr [ebp-12], 2147483647
jbe .Lt_0097
.Lt_0186:
mov dword ptr [ebp-4], 0
push 0
push 0
push 50
call ERRREPORT
add esp, 12
jmp .Lt_0096
.Lt_0097:
mov dword ptr [ebp-4], -1
.Lt_0096:
.Lt_0095:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HCHECKUDTSIZE, .-HCHECKUDTSIZE
.balign 16
HGETRETURNTYPE:
.type HGETRETURNTYPE, @function
push ebp
mov ebp, esp
sub esp, 28
push ebx
push esi
mov dword ptr [ebp-4], 0
.Lt_011D:
push dword ptr [ebp+8]
call SYMBCOMPISTRIVIAL
add esp, 4
test eax, eax
jne .Lt_0120
mov dword ptr [ebp-4], 50
jmp .Lt_011E
.Lt_0120:
.Lt_011F:
cmp dword ptr [ENV+104], 1
jne .Lt_0122
mov dword ptr [ebp-4], 18
jmp .Lt_011E
.Lt_0122:
.Lt_0121:
mov eax, dword ptr [ENV+224]
and eax, 16
test eax, eax
jne .Lt_0124
mov dword ptr [ebp-4], 50
jmp .Lt_011E
.Lt_0124:
.Lt_0123:
mov dword ptr [ebp-12], 0
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+104]
mov ebx, dword ptr [eax+108]
mov dword ptr [ebp-24], ecx
mov dword ptr [ebp-20], ebx
mov ecx, dword ptr [ebp-24]
mov dword ptr [ebp-16], ecx
mov ebx, dword ptr [ebp-16]
mov ecx, ebx
sar ecx, 31
mov esi, dword ptr [ebp-24]
mov eax, dword ptr [ebp-20]
cmp ecx, eax
jne .Lt_0187
cmp ebx, esi
je .Lt_0126
.Lt_0187:
mov dword ptr [ebp-4], 18
jmp .Lt_011E
.Lt_0126:
.Lt_0125:
mov esi, dword ptr [ebp-16]
mov dword ptr [ebp-28], esi
jmp .Lt_0128
.Lt_012A:
mov dword ptr [ebp-12], 1
jmp .Lt_0127
.Lt_012B:
mov dword ptr [ebp-12], 4
jmp .Lt_0127
.Lt_012C:
push dword ptr [ebp+8]
call SYMBUDTGETFIRSTFIELD
add esp, 4
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
cmp dword ptr [eax+40], 0
jne .Lt_012E
cmp dword ptr [eax+36], 2
jne .Lt_012E
.Lt_0188:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+40], 0
jl .Lt_0130
jg .Lt_0189
cmp dword ptr [eax+36], 4
jb .Lt_0130
.Lt_0189:
mov dword ptr [ebp-12], 7
.Lt_0130:
.Lt_012F:
.Lt_012E:
.Lt_012D:
jmp .Lt_0127
.Lt_0131:
.Lt_0132:
push dword ptr [ebp+8]
call SYMBUDTGETFIRSTFIELD
add esp, 4
mov dword ptr [ebp-8], eax
push dword ptr [ebp-8]
call SYMBUDTGETNEXTFIELD
add esp, 4
test eax, eax
je .Lt_0136
jmp .Lt_0133
.Lt_0136:
.Lt_0135:
mov eax, dword ptr [ebp-8]
mov esi, dword ptr [eax+24]
and esi, 511
cmp esi, 14
jne .Lt_0138
mov dword ptr [ebp-12], 14
.Lt_0138:
.Lt_0137:
mov esi, dword ptr [ebp-8]
mov eax, dword ptr [esi+24]
and eax, 511
cmp eax, 18
je .Lt_013A
jmp .Lt_0133
.Lt_013A:
.Lt_0139:
mov eax, dword ptr [ebp-8]
mov esi, dword ptr [eax+28]
mov dword ptr [ebp+8], esi
.Lt_0134:
jmp .Lt_0132
.Lt_0133:
cmp dword ptr [ebp-12], 0
jne .Lt_013C
mov dword ptr [ebp-12], 7
.Lt_013C:
.Lt_013B:
jmp .Lt_0127
.Lt_013D:
push dword ptr [ebp+8]
call SYMBUDTGETFIRSTFIELD
add esp, 4
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
cmp dword ptr [eax+40], 0
jne .Lt_013F
cmp dword ptr [eax+36], 4
jne .Lt_013F
.Lt_018A:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+40], 0
jl .Lt_0141
jg .Lt_018B
cmp dword ptr [eax+36], 8
jb .Lt_0141
.Lt_018B:
mov dword ptr [ebp-12], 12
.Lt_0141:
.Lt_0140:
.Lt_013F:
.Lt_013E:
jmp .Lt_0127
.Lt_0142:
.Lt_0143:
push dword ptr [ebp+8]
call SYMBUDTGETFIRSTFIELD
add esp, 4
mov dword ptr [ebp-8], eax
push dword ptr [ebp-8]
call SYMBUDTGETNEXTFIELD
add esp, 4
test eax, eax
je .Lt_0147
jmp .Lt_0144
.Lt_0147:
.Lt_0146:
mov eax, dword ptr [ebp-8]
mov esi, dword ptr [eax+24]
and esi, 511
cmp esi, 15
jne .Lt_0149
mov dword ptr [ebp-12], 15
.Lt_0149:
.Lt_0148:
mov esi, dword ptr [ebp-8]
mov eax, dword ptr [esi+24]
and eax, 511
cmp eax, 18
je .Lt_014B
jmp .Lt_0144
.Lt_014B:
.Lt_014A:
mov eax, dword ptr [ebp-8]
mov esi, dword ptr [eax+28]
mov dword ptr [ebp+8], esi
.Lt_0145:
jmp .Lt_0143
.Lt_0144:
cmp dword ptr [ebp-12], 0
jne .Lt_014D
mov dword ptr [ebp-12], 12
.Lt_014D:
.Lt_014C:
jmp .Lt_0127
.Lt_0128:
mov esi, dword ptr [ebp-28]
add esi, 4294967295
cmp esi, 7
ja .Lt_0127
mov esi, dword ptr [ebp-28]
jmp dword ptr [.LT_014E+esi*4-4]
.LT_014E:
.int .Lt_012A
.int .Lt_012B
.int .Lt_012C
.int .Lt_0131
.int .Lt_013D
.int .Lt_013D
.int .Lt_013D
.int .Lt_0142
.Lt_0127:
cmp dword ptr [ebp-12], 0
jne .Lt_0150
mov dword ptr [ebp-12], 50
.Lt_0150:
.Lt_014F:
mov esi, dword ptr [ebp-12]
mov dword ptr [ebp-4], esi
.Lt_011E:
mov eax, dword ptr [ebp-4]
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size HGETRETURNTYPE, .-HGETRETURNTYPE
.balign 16
HSKIPTOFIELD:
.type HSKIPTOFIELD, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_015E:
.Lt_0160:
cmp dword ptr [ebp+8], 0
je .Lt_0161
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 12
jne .Lt_0163
jmp .Lt_0161
.Lt_0163:
.Lt_0162:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+160]
mov dword ptr [ebp+8], ebx
jmp .Lt_0160
.Lt_0161:
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebp-4], ebx
.Lt_015F:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HSKIPTOFIELD, .-HSKIPTOFIELD
.balign 16
HFINDCOMMONPARENT:
.type HFINDCOMMONPARENT, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0168:
mov eax, dword ptr [ebp+12]
mov dword ptr [ebp-8], eax
.Lt_016A:
cmp dword ptr [ebp+8], 0
je .Lt_016B
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp+12], eax
.Lt_016C:
cmp dword ptr [ebp+12], 0
je .Lt_016D
mov eax, dword ptr [ebp+12]
cmp dword ptr [ebp+8], eax
jne .Lt_016F
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
jmp .Lt_0169
.Lt_016F:
.Lt_016E:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+152]
mov dword ptr [ebp+12], ebx
jmp .Lt_016C
.Lt_016D:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+152]
mov dword ptr [ebp+8], eax
jmp .Lt_016A
.Lt_016B:
mov dword ptr [ebp-4], 0
.Lt_0169:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HFINDCOMMONPARENT, .-HFINDCOMMONPARENT
	#fbc-1.01.0/src/compiler/symb-struct.bas' compilation took 0.03325808013323694 secs

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
Lt_0074:	.ascii	"base$\0"

.section .ctors, "aw", @progbits
.int fb_ctor__symbzstruct
