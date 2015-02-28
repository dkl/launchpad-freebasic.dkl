	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/symb-data.bas' compilation started at 14:16:39 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl SYMBDATAINIT
SYMBDATAINIT:
.type SYMBDATAINIT, @function
push ebp
mov ebp, esp
sub esp, 108
push ebx
.Lt_006D:
call FBIS64BIT
test eax, eax
je .Lt_0070
mov dword ptr [ENV+236], 8
mov dword ptr [SYMB_DTYPETB+200], 8
mov dword ptr [SYMB_DTYPETB+228], 8
mov dword ptr [SYMB_DTYPETB+256], 8
mov dword ptr [SYMB_DTYPETB+452], 24
mov dword ptr [SYMB_DTYPETB+620], 8
mov dword ptr [SYMB_DTYPETB+216], 6
mov dword ptr [SYMB_DTYPETB+244], 7
mov dword ptr [SYMB_DTYPETB+272], 6
mov dword ptr [SYMB_DTYPETB+636], 7
mov dword ptr [SYMB_DTYPETB+208], 81
mov dword ptr [SYMB_DTYPETB+236], 86
jmp .Lt_006F
.Lt_0070:
mov dword ptr [ENV+236], 4
mov dword ptr [SYMB_DTYPETB+200], 4
mov dword ptr [SYMB_DTYPETB+228], 4
mov dword ptr [SYMB_DTYPETB+256], 4
mov dword ptr [SYMB_DTYPETB+452], 12
mov dword ptr [SYMB_DTYPETB+620], 4
mov dword ptr [SYMB_DTYPETB+216], 4
mov dword ptr [SYMB_DTYPETB+244], 5
mov dword ptr [SYMB_DTYPETB+272], 4
mov dword ptr [SYMB_DTYPETB+636], 5
mov dword ptr [SYMB_DTYPETB+208], 41
mov dword ptr [SYMB_DTYPETB+236], 46
.Lt_006F:
mov eax, dword ptr [ENV+212]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax]
mov dword ptr [SYMB_DTYPETB+168], ebx
mov ebx, dword ptr [ENV+212]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx+4]
mov dword ptr [SYMB_DTYPETB+172], eax
mov eax, dword ptr [ENV+212]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+8]
mov dword ptr [SYMB_DTYPETB+176], ebx
mov ebx, dword ptr [ENV+212]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx+16]
mov dword ptr [SYMB_DTYPETB+184], eax
lea eax, [ebp-60]
push eax
push edi
mov edi, eax
xor eax, eax
mov ecx, 15
rep stosd
pop edi
pop eax
lea eax, [ebp-60]
mov dword ptr [ebp-92], eax
lea eax, [ebp-60]
lea ebx, [ebp-92]
add ebx, 4
mov dword ptr [ebx], eax
lea eax, [ebp-92]
add eax, 8
mov dword ptr [eax], 60
lea eax, [ebp-92]
add eax, 12
mov dword ptr [eax], 4
lea eax, [ebp-92]
add eax, 16
mov dword ptr [eax], 1
lea eax, [ebp-92]
add eax, 20
mov dword ptr [eax], 15
lea eax, [ebp-92]
add eax, 24
mov dword ptr [eax], 0
lea eax, [ebp-92]
add eax, 28
mov dword ptr [eax], 14
mov dword ptr [ebp-96], 1
.Lt_0075:
mov dword ptr [ebp-100], 1
.Lt_0079:
mov eax, dword ptr [ebp-100]
mov ebx, dword ptr [ebp-100]
mov dword ptr [ebp+eax*4-64], ebx
.Lt_0077:
mov ebx, dword ptr [ebp-100]
inc ebx
mov eax, ebx
mov dword ptr [ebp-100], eax
.Lt_0076:
cmp dword ptr [ebp-100], 15
jle .Lt_0079
.Lt_0078:
mov dword ptr [ebp-104], 0
.Lt_007D:
mov eax, dword ptr [ebp-104]
inc eax
mov dword ptr [ebp-108], eax
jmp .Lt_007E
.Lt_0081:
mov eax, dword ptr [ebp-108]
push dword ptr [ebp+eax*4-60]
mov eax, dword ptr [ebp-104]
push dword ptr [ebp+eax*4-60]
push dword ptr [ebp-96]
call CLOSESTTYPE
add esp, 12
mov ebx, dword ptr [ebp-108]
mov ecx, dword ptr [ebp+ebx*4-60]
cmp eax, ecx
jne .Lt_0083
mov ecx, dword ptr [ebp-104]
push dword ptr [ebp+ecx*4-60]
mov ecx, dword ptr [ebp-108]
mov eax, dword ptr [ebp-104]
mov ebx, dword ptr [ebp+ecx*4-60]
mov dword ptr [ebp+eax*4-60], ebx
mov ebx, dword ptr [ebp-108]
pop dword ptr [ebp+ebx*4-60]
.Lt_0083:
.Lt_0082:
.Lt_007F:
inc dword ptr [ebp-108]
.Lt_007E:
cmp dword ptr [ebp-108], 14
jle .Lt_0081
.Lt_0080:
.Lt_007B:
inc dword ptr [ebp-104]
.Lt_007A:
cmp dword ptr [ebp-104], 13
jle .Lt_007D
.Lt_007C:
mov dword ptr [ebp-104], 0
.Lt_0087:
mov ebx, dword ptr [ebp-104]
mov eax, dword ptr [ebp+ebx*4-60]
mov dword ptr [ebp-100], eax
mov eax, dword ptr [ebp-96]
imul eax, 15
add eax, dword ptr [ebp-100]
mov ebx, dword ptr [ebp-104]
mov dword ptr [SYMB_DTYPEMATCHTB+eax*4-64], ebx
.Lt_0085:
inc dword ptr [ebp-104]
.Lt_0084:
cmp dword ptr [ebp-104], 14
jle .Lt_0087
.Lt_0086:
.Lt_0073:
mov ebx, dword ptr [ebp-96]
inc ebx
mov eax, ebx
mov dword ptr [ebp-96], eax
.Lt_0072:
cmp dword ptr [ebp-96], 15
jle .Lt_0075
.Lt_0074:
.Lt_006E:
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBDATAINIT, .-SYMBDATAINIT
.balign 16

.globl TYPEMAX
TYPEMAX:
.type TYPEMAX, @function
push ebp
mov ebp, esp
sub esp, 40
push ebx
.Lt_0088:
mov eax, dword ptr [ebp+8]
and eax, 511
mov ebx, dword ptr [ebp+16]
and ebx, 511
cmp eax, ebx
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp+12]
cmp ebx, dword ptr [ebp+20]
sete cl
shr ecx, 1
sbb ecx, ecx
and eax, ecx
je .Lt_008B
mov ecx, dword ptr [ebp+24]
mov eax, dword ptr [ebp+8]
mov dword ptr [ecx], eax
mov eax, dword ptr [ebp+28]
mov ecx, dword ptr [ebp+12]
mov dword ptr [eax], ecx
jmp .Lt_0089
.Lt_008B:
.Lt_008A:
mov ecx, dword ptr [ebp+8]
and ecx, 480
je .Lt_008C
mov dword ptr [ebp-12], 22
jmp .Lt_009E
.Lt_008C:
mov ecx, dword ptr [ebp+8]
and ecx, 31
mov dword ptr [ebp-12], ecx
.Lt_009E:
mov ecx, dword ptr [ebp-12]
imul ecx, 28
mov eax, dword ptr [SYMB_DTYPETB+ecx+16]
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp+16]
and eax, 480
je .Lt_008E
mov dword ptr [ebp-16], 22
jmp .Lt_009F
.Lt_008E:
mov eax, dword ptr [ebp+16]
and eax, 31
mov dword ptr [ebp-16], eax
.Lt_009F:
mov eax, dword ptr [ebp-16]
imul eax, 28
mov ecx, dword ptr [SYMB_DTYPETB+eax+16]
mov dword ptr [ebp-8], ecx
mov ecx, dword ptr [ebp-8]
cmp dword ptr [ebp-4], ecx
jne .Lt_0091
mov ecx, dword ptr [ebp+24]
mov eax, dword ptr [ebp-4]
mov dword ptr [ecx], eax
mov eax, dword ptr [ebp+28]
mov dword ptr [eax], 0
jmp .Lt_0090
.Lt_0091:
mov eax, dword ptr [ebp-4]
and eax, 480
je .Lt_0093
mov dword ptr [ebp-20], 22
jmp .Lt_00A0
.Lt_0093:
mov eax, dword ptr [ebp-4]
and eax, 31
mov dword ptr [ebp-20], eax
.Lt_00A0:
mov eax, dword ptr [ebp-20]
imul eax, 28
mov ecx, dword ptr [SYMB_DTYPETB+eax]
test ecx, ecx
sete cl
shr ecx, 1
sbb ecx, ecx
mov dword ptr [ebp-28], ecx
mov ecx, dword ptr [ebp-8]
and ecx, 480
je .Lt_0095
mov dword ptr [ebp-24], 22
jmp .Lt_00A1
.Lt_0095:
mov ecx, dword ptr [ebp-8]
and ecx, 31
mov dword ptr [ebp-24], ecx
.Lt_00A1:
mov ecx, dword ptr [ebp-24]
imul ecx, 28
mov eax, dword ptr [SYMB_DTYPETB+ecx]
test eax, eax
sete al
shr eax, 1
sbb eax, eax
and eax, dword ptr [ebp-28]
je .Lt_0092
mov eax, dword ptr [ebp-4]
and eax, 480
je .Lt_0097
mov dword ptr [ebp-32], 22
jmp .Lt_00A3
.Lt_0097:
mov eax, dword ptr [ebp-4]
and eax, 31
mov dword ptr [ebp-32], eax
.Lt_00A3:
mov eax, dword ptr [ebp-32]
imul eax, 28
mov dword ptr [ebp-40], eax
mov eax, dword ptr [ebp-8]
and eax, 480
je .Lt_0099
mov dword ptr [ebp-36], 22
jmp .Lt_00A4
.Lt_0099:
mov eax, dword ptr [ebp-8]
and eax, 31
mov dword ptr [ebp-36], eax
.Lt_00A4:
mov eax, dword ptr [ebp-36]
imul eax, 28
mov ecx, dword ptr [ebp-40]
mov ebx, dword ptr [SYMB_DTYPETB+eax+12]
cmp dword ptr [SYMB_DTYPETB+ecx+12], ebx
jle .Lt_009C
mov ebx, dword ptr [ebp+24]
mov ecx, dword ptr [ebp+8]
mov dword ptr [ebx], ecx
mov ecx, dword ptr [ebp+28]
mov ebx, dword ptr [ebp+12]
mov dword ptr [ecx], ebx
jmp .Lt_009B
.Lt_009C:
mov ebx, dword ptr [ebp+24]
mov ecx, dword ptr [ebp+16]
mov dword ptr [ebx], ecx
mov ecx, dword ptr [ebp+28]
mov ebx, dword ptr [ebp+20]
mov dword ptr [ecx], ebx
.Lt_009B:
jmp .Lt_0090
.Lt_0092:
mov ebx, dword ptr [ebp-8]
cmp dword ptr [ebp-4], ebx
jle .Lt_009D
mov ebx, dword ptr [ebp+24]
mov ecx, dword ptr [ebp+8]
mov dword ptr [ebx], ecx
mov ecx, dword ptr [ebp+28]
mov ebx, dword ptr [ebp+12]
mov dword ptr [ecx], ebx
jmp .Lt_0090
.Lt_009D:
mov ebx, dword ptr [ebp+24]
mov ecx, dword ptr [ebp+16]
mov dword ptr [ebx], ecx
mov ecx, dword ptr [ebp+28]
mov ebx, dword ptr [ebp+20]
mov dword ptr [ecx], ebx
.Lt_0090:
.Lt_0089:
pop ebx
mov esp, ebp
pop ebp
ret
.size TYPEMAX, .-TYPEMAX
.balign 16

.globl TYPETOSIGNED
TYPETOSIGNED:
.type TYPETOSIGNED, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
mov dword ptr [ebp-4], 0
.Lt_00AA:
mov eax, dword ptr [ebp+8]
and eax, 480
je .Lt_00AC
mov dword ptr [ebp-12], 22
jmp .Lt_00BB
.Lt_00AC:
mov eax, dword ptr [ebp+8]
and eax, 31
mov dword ptr [ebp-12], eax
.Lt_00BB:
mov eax, dword ptr [ebp-12]
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax], 0
je .Lt_00AF
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
jmp .Lt_00AB
.Lt_00AF:
.Lt_00AE:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-20], eax
jmp .Lt_00B1
.Lt_00B3:
mov dword ptr [ebp-16], 1
jmp .Lt_00B0
.Lt_00B4:
mov dword ptr [ebp-16], 4
jmp .Lt_00B0
.Lt_00B5:
mov dword ptr [ebp-16], 7
jmp .Lt_00B0
.Lt_00B6:
push dword ptr [ENV+212]
call TYPETOSIGNED
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_00AB
jmp .Lt_00B0
.Lt_00B7:
mov dword ptr [ebp-16], 10
jmp .Lt_00B0
.Lt_00B8:
mov dword ptr [ebp-16], 12
jmp .Lt_00B0
.Lt_00B9:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-16], eax
jmp .Lt_00B0
.Lt_00B1:
mov eax, dword ptr [ebp-20]
add eax, 4294967294
cmp eax, 20
ja .Lt_00B9
mov eax, dword ptr [ebp-20]
jmp dword ptr [.LT_00BA+eax*4-8]
.LT_00BA:
.int .Lt_00B3
.int .Lt_00B3
.int .Lt_00B9
.int .Lt_00B4
.int .Lt_00B6
.int .Lt_00B9
.int .Lt_00B5
.int .Lt_00B9
.int .Lt_00B9
.int .Lt_00B7
.int .Lt_00B9
.int .Lt_00B8
.int .Lt_00B9
.int .Lt_00B9
.int .Lt_00B9
.int .Lt_00B9
.int .Lt_00B9
.int .Lt_00B9
.int .Lt_00B9
.int .Lt_00B9
.int .Lt_00B7
.Lt_00B0:
mov eax, dword ptr [ebp+8]
and eax, -512
mov ebx, dword ptr [ebp-16]
and ebx, 511
or eax, ebx
mov dword ptr [ebp-4], eax
.Lt_00AB:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size TYPETOSIGNED, .-TYPETOSIGNED
.balign 16

.globl TYPETOUNSIGNED
TYPETOUNSIGNED:
.type TYPETOUNSIGNED, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
mov dword ptr [ebp-4], 0
.Lt_00BC:
mov eax, dword ptr [ebp+8]
and eax, 480
je .Lt_00BE
mov dword ptr [ebp-12], 22
jmp .Lt_00CC
.Lt_00BE:
mov eax, dword ptr [ebp+8]
and eax, 31
mov dword ptr [ebp-12], eax
.Lt_00CC:
mov eax, dword ptr [ebp-12]
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax], 0
je .Lt_00C1
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
jmp .Lt_00BD
.Lt_00C1:
.Lt_00C0:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-20], eax
jmp .Lt_00C3
.Lt_00C5:
mov dword ptr [ebp-16], 2
jmp .Lt_00C2
.Lt_00C6:
mov dword ptr [ebp-16], 5
jmp .Lt_00C2
.Lt_00C7:
mov dword ptr [ebp-16], 8
jmp .Lt_00C2
.Lt_00C8:
mov dword ptr [ebp-16], 11
jmp .Lt_00C2
.Lt_00C9:
mov dword ptr [ebp-16], 13
jmp .Lt_00C2
.Lt_00CA:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-16], eax
jmp .Lt_00C2
.Lt_00C3:
mov eax, dword ptr [ebp-20]
add eax, 4294967295
cmp eax, 21
ja .Lt_00CA
mov eax, dword ptr [ebp-20]
jmp dword ptr [.LT_00CB+eax*4-4]
.LT_00CB:
.int .Lt_00C5
.int .Lt_00CA
.int .Lt_00CA
.int .Lt_00C6
.int .Lt_00CA
.int .Lt_00CA
.int .Lt_00C7
.int .Lt_00CA
.int .Lt_00C7
.int .Lt_00C8
.int .Lt_00CA
.int .Lt_00C9
.int .Lt_00CA
.int .Lt_00CA
.int .Lt_00CA
.int .Lt_00CA
.int .Lt_00CA
.int .Lt_00CA
.int .Lt_00CA
.int .Lt_00CA
.int .Lt_00CA
.int .Lt_00C8
.Lt_00C2:
mov eax, dword ptr [ebp+8]
and eax, -512
mov ebx, dword ptr [ebp-16]
and ebx, 511
or eax, ebx
mov dword ptr [ebp-4], eax
.Lt_00BD:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size TYPETOUNSIGNED, .-TYPETOUNSIGNED
.balign 16

.globl TYPEHASCTOR
TYPEHASCTOR:
.type TYPEHASCTOR, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_00CD:
mov eax, dword ptr [ebp+8]
and eax, 480
je .Lt_00CF
mov dword ptr [ebp-8], 22
jmp .Lt_00D5
.Lt_00CF:
mov eax, dword ptr [ebp+8]
and eax, 31
mov dword ptr [ebp-8], eax
.Lt_00D5:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 18
jne .Lt_00D3
.Lt_00D4:
push dword ptr [ebp+12]
call SYMBGETCOMPCTORHEAD
add esp, 4
test eax, eax
setne bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-4], ebx
.Lt_00D3:
.Lt_00D1:
.Lt_00CE:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size TYPEHASCTOR, .-TYPEHASCTOR
.balign 16

.globl TYPEHASDEFCTOR
TYPEHASDEFCTOR:
.type TYPEHASDEFCTOR, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_00D7:
mov eax, dword ptr [ebp+8]
and eax, 480
je .Lt_00D9
mov dword ptr [ebp-8], 22
jmp .Lt_00DF
.Lt_00D9:
mov eax, dword ptr [ebp+8]
and eax, 31
mov dword ptr [ebp-8], eax
.Lt_00DF:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 18
jne .Lt_00DD
.Lt_00DE:
push dword ptr [ebp+12]
call SYMBGETCOMPDEFCTOR
add esp, 4
test eax, eax
setne bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-4], ebx
.Lt_00DD:
.Lt_00DB:
.Lt_00D8:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size TYPEHASDEFCTOR, .-TYPEHASDEFCTOR
.balign 16

.globl TYPEHASDTOR
TYPEHASDTOR:
.type TYPEHASDTOR, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_00E1:
mov eax, dword ptr [ebp+8]
and eax, 480
je .Lt_00E3
mov dword ptr [ebp-8], 22
jmp .Lt_00E9
.Lt_00E3:
mov eax, dword ptr [ebp+8]
and eax, 31
mov dword ptr [ebp-8], eax
.Lt_00E9:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 18
jne .Lt_00E7
.Lt_00E8:
push dword ptr [ebp+12]
call SYMBGETCOMPDTOR
add esp, 4
test eax, eax
setne bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-4], ebx
.Lt_00E7:
.Lt_00E5:
.Lt_00E2:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size TYPEHASDTOR, .-TYPEHASDTOR
.balign 16

.globl TYPENEEDSDTORCALL
TYPENEEDSDTORCALL:
.type TYPENEEDSDTORCALL, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_00EB:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call TYPEHASDTOR
add esp, 8
mov ebx, dword ptr [ebp+8]
and ebx, 511
cmp ebx, 16
sete bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
mov dword ptr [ebp-4], eax
.Lt_00EC:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size TYPENEEDSDTORCALL, .-TYPENEEDSDTORCALL
.balign 16

.globl TYPEISTRIVIAL
TYPEISTRIVIAL:
.type TYPEISTRIVIAL, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_00EE:
mov dword ptr [ebp-4], -1
mov eax, dword ptr [ebp+8]
and eax, 511
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 16
jne .Lt_00F2
.Lt_00F3:
mov dword ptr [ebp-4], 0
jmp .Lt_00F0
.Lt_00F2:
cmp dword ptr [ebp-8], 18
jne .Lt_00F4
.Lt_00F5:
push dword ptr [ebp+12]
call SYMBCOMPISTRIVIAL
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_00F4:
.Lt_00F0:
.Lt_00EF:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size TYPEISTRIVIAL, .-TYPEISTRIVIAL
.balign 16

.globl TYPEHASFWDREFINSIGNATURE
TYPEHASFWDREFINSIGNATURE:
.type TYPEHASFWDREFINSIGNATURE, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_00F6:
mov eax, dword ptr [ebp+8]
and eax, 31
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 21
jne .Lt_00FA
.Lt_00FB:
mov dword ptr [ebp-4], -1
jmp .Lt_00F8
.Lt_00FA:
cmp dword ptr [ebp-8], 20
jne .Lt_00FC
.Lt_00FD:
push dword ptr [ebp+12]
call SYMBPROCHASFWDREFINSIGNATURE
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_00F8
.Lt_00FC:
mov dword ptr [ebp-4], 0
.Lt_00FE:
.Lt_00F8:
.Lt_00F7:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size TYPEHASFWDREFINSIGNATURE, .-TYPEHASFWDREFINSIGNATURE
.balign 16

.globl TYPEMERGE
TYPEMERGE:
.type TYPEMERGE, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_00FF:
mov eax, dword ptr [ebp+8]
and eax, 480
sar eax, 5
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp+12]
and eax, 480
sar eax, 5
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp-12]
add eax, dword ptr [ebp-8]
cmp eax, 8
jle .Lt_0102
push 0
push 0
push 273
call ERRREPORT
add esp, 12
mov eax, 8
sub eax, dword ptr [ebp-12]
mov dword ptr [ebp-8], eax
.Lt_0102:
.Lt_0101:
mov eax, dword ptr [ebp+12]
and eax, 31
mov ebx, dword ptr [ebp+12]
and ebx, 480
mov ecx, dword ptr [ebp-8]
sal ecx, 5
add ebx, ecx
or eax, ebx
mov ebx, dword ptr [ebp+12]
and ebx, 261632
mov cl, byte ptr [ebp-8]
sal ebx, cl
or eax, ebx
mov ebx, dword ptr [ebp+8]
and ebx, 261632
or eax, ebx
mov dword ptr [ebp+8], eax
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
.Lt_0100:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size TYPEMERGE, .-TYPEMERGE
.balign 16

.globl CLOSESTTYPE
CLOSESTTYPE:
.type CLOSESTTYPE, @function
push ebp
mov ebp, esp
sub esp, 124
push ebx
mov dword ptr [ebp-4], 0
.Lt_0103:
mov eax, dword ptr [ebp+12]
cmp eax, 9
setne al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp+16]
cmp ebx, 9
sete bl
shr ebx, 1
sbb ebx, ebx
and eax, ebx
je .Lt_0106
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebp-4], ebx
jmp .Lt_0104
.Lt_0106:
mov ebx, dword ptr [ebp+16]
cmp ebx, 9
setne bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+12]
cmp eax, 9
sete al
shr eax, 1
sbb eax, eax
and ebx, eax
je .Lt_0108
mov eax, dword ptr [ebp+16]
mov dword ptr [ebp-4], eax
jmp .Lt_0104
.Lt_0108:
mov eax, dword ptr [ebp+12]
cmp eax, 3
setne al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp+16]
cmp ebx, 3
sete bl
shr ebx, 1
sbb ebx, ebx
and eax, ebx
je .Lt_010A
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebp-4], ebx
jmp .Lt_0104
.Lt_010A:
mov ebx, dword ptr [ebp+16]
cmp ebx, 3
setne bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+12]
cmp eax, 3
sete al
shr eax, 1
sbb eax, eax
and ebx, eax
je .Lt_010C
mov eax, dword ptr [ebp+16]
mov dword ptr [ebp-4], eax
jmp .Lt_0104
.Lt_010C:
mov eax, dword ptr [ebp+12]
cmp eax, 6
setne al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp+16]
cmp ebx, 6
sete bl
shr ebx, 1
sbb ebx, ebx
and eax, ebx
je .Lt_010E
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebp-4], ebx
jmp .Lt_0104
.Lt_010E:
mov ebx, dword ptr [ebp+16]
cmp ebx, 6
setne bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+12]
cmp eax, 6
sete al
shr eax, 1
sbb eax, eax
and ebx, eax
je .Lt_0110
mov eax, dword ptr [ebp+16]
mov dword ptr [ebp-4], eax
jmp .Lt_0104
.Lt_0110:
mov eax, dword ptr [ebp+12]
and eax, 480
je .Lt_0111
mov dword ptr [ebp-12], 22
jmp .Lt_0149
.Lt_0111:
mov eax, dword ptr [ebp+12]
and eax, 31
mov dword ptr [ebp-12], eax
.Lt_0149:
mov eax, dword ptr [ebp-12]
imul eax, 28
mov dword ptr [ebp-120], eax
mov eax, dword ptr [ebp+8]
and eax, 480
je .Lt_0113
mov dword ptr [ebp-16], 22
jmp .Lt_014A
.Lt_0113:
mov eax, dword ptr [ebp+8]
and eax, 31
mov dword ptr [ebp-16], eax
.Lt_014A:
mov eax, dword ptr [ebp-16]
imul eax, 28
mov ebx, dword ptr [ebp-120]
mov ecx, dword ptr [SYMB_DTYPETB+eax]
cmp ecx, dword ptr [SYMB_DTYPETB+ebx]
sete cl
shr ecx, 1
sbb ecx, ecx
mov dword ptr [ebp-8], ecx
mov ecx, dword ptr [ebp+16]
and ecx, 480
je .Lt_0115
mov dword ptr [ebp-24], 22
jmp .Lt_014B
.Lt_0115:
mov ecx, dword ptr [ebp+16]
and ecx, 31
mov dword ptr [ebp-24], ecx
.Lt_014B:
mov ecx, dword ptr [ebp-24]
imul ecx, 28
mov dword ptr [ebp-124], ecx
mov ecx, dword ptr [ebp+8]
and ecx, 480
je .Lt_0117
mov dword ptr [ebp-28], 22
jmp .Lt_014C
.Lt_0117:
mov ecx, dword ptr [ebp+8]
and ecx, 31
mov dword ptr [ebp-28], ecx
.Lt_014C:
mov ecx, dword ptr [ebp-28]
imul ecx, 28
mov ebx, dword ptr [ebp-124]
mov eax, dword ptr [SYMB_DTYPETB+ecx]
cmp eax, dword ptr [SYMB_DTYPETB+ebx]
sete al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-20], eax
mov eax, dword ptr [ebp-20]
not eax
and eax, dword ptr [ebp-8]
je .Lt_011A
mov eax, dword ptr [ebp+12]
mov dword ptr [ebp-4], eax
jmp .Lt_0104
.Lt_011A:
mov eax, dword ptr [ebp-8]
not eax
and eax, dword ptr [ebp-20]
je .Lt_011C
mov eax, dword ptr [ebp+16]
mov dword ptr [ebp-4], eax
jmp .Lt_0104
.Lt_011C:
mov eax, dword ptr [ebp+12]
and eax, 480
je .Lt_011D
mov dword ptr [ebp-36], 22
jmp .Lt_014F
.Lt_011D:
mov eax, dword ptr [ebp+12]
and eax, 31
mov dword ptr [ebp-36], eax
.Lt_014F:
mov eax, dword ptr [ebp-36]
imul eax, 28
mov dword ptr [ebp-120], eax
mov eax, dword ptr [ebp+8]
and eax, 480
je .Lt_011F
mov dword ptr [ebp-40], 22
jmp .Lt_0150
.Lt_011F:
mov eax, dword ptr [ebp+8]
and eax, 31
mov dword ptr [ebp-40], eax
.Lt_0150:
mov eax, dword ptr [ebp-40]
imul eax, 28
mov ebx, dword ptr [ebp-120]
mov ecx, dword ptr [SYMB_DTYPETB+ebx+4]
cmp ecx, dword ptr [SYMB_DTYPETB+eax+4]
setge cl
shr ecx, 1
sbb ecx, ecx
mov dword ptr [ebp-32], ecx
mov ecx, dword ptr [ebp+16]
and ecx, 480
je .Lt_0121
mov dword ptr [ebp-48], 22
jmp .Lt_0151
.Lt_0121:
mov ecx, dword ptr [ebp+16]
and ecx, 31
mov dword ptr [ebp-48], ecx
.Lt_0151:
mov ecx, dword ptr [ebp-48]
imul ecx, 28
mov dword ptr [ebp-124], ecx
mov ecx, dword ptr [ebp+8]
and ecx, 480
je .Lt_0123
mov dword ptr [ebp-52], 22
jmp .Lt_0152
.Lt_0123:
mov ecx, dword ptr [ebp+8]
and ecx, 31
mov dword ptr [ebp-52], ecx
.Lt_0152:
mov ecx, dword ptr [ebp-52]
imul ecx, 28
mov eax, dword ptr [ebp-124]
mov ebx, dword ptr [SYMB_DTYPETB+eax+4]
cmp ebx, dword ptr [SYMB_DTYPETB+ecx+4]
setge bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-44], ebx
mov ebx, dword ptr [ebp-44]
not ebx
and ebx, dword ptr [ebp-32]
je .Lt_0126
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebp-4], ebx
jmp .Lt_0104
.Lt_0126:
mov ebx, dword ptr [ebp-32]
not ebx
and ebx, dword ptr [ebp-44]
je .Lt_0128
mov ebx, dword ptr [ebp+16]
mov dword ptr [ebp-4], ebx
jmp .Lt_0104
.Lt_0128:
mov ebx, dword ptr [ebp+12]
and ebx, 480
je .Lt_0129
mov dword ptr [ebp-60], 22
jmp .Lt_0155
.Lt_0129:
mov ebx, dword ptr [ebp+12]
and ebx, 31
mov dword ptr [ebp-60], ebx
.Lt_0155:
mov ebx, dword ptr [ebp-60]
imul ebx, 28
mov dword ptr [ebp-120], ebx
mov ebx, dword ptr [ebp+8]
and ebx, 480
je .Lt_012B
mov dword ptr [ebp-64], 22
jmp .Lt_0156
.Lt_012B:
mov ebx, dword ptr [ebp+8]
and ebx, 31
mov dword ptr [ebp-64], ebx
.Lt_0156:
mov ebx, dword ptr [ebp-64]
imul ebx, 28
mov ecx, dword ptr [ebp-120]
mov eax, dword ptr [SYMB_DTYPETB+ecx+4]
sub eax, dword ptr [SYMB_DTYPETB+ebx+4]
mov ebx, eax
sar ebx, 31
xor eax, ebx
sub eax, ebx
mov dword ptr [ebp-56], eax
mov eax, dword ptr [ebp+16]
and eax, 480
je .Lt_012D
mov dword ptr [ebp-72], 22
jmp .Lt_0157
.Lt_012D:
mov eax, dword ptr [ebp+16]
and eax, 31
mov dword ptr [ebp-72], eax
.Lt_0157:
mov eax, dword ptr [ebp-72]
imul eax, 28
mov dword ptr [ebp-124], eax
mov eax, dword ptr [ebp+8]
and eax, 480
je .Lt_012F
mov dword ptr [ebp-76], 22
jmp .Lt_0158
.Lt_012F:
mov eax, dword ptr [ebp+8]
and eax, 31
mov dword ptr [ebp-76], eax
.Lt_0158:
mov eax, dword ptr [ebp-76]
imul eax, 28
mov ebx, dword ptr [ebp-124]
mov ecx, dword ptr [SYMB_DTYPETB+ebx+4]
sub ecx, dword ptr [SYMB_DTYPETB+eax+4]
mov eax, ecx
sar eax, 31
xor ecx, eax
sub ecx, eax
mov dword ptr [ebp-68], ecx
mov ecx, dword ptr [ebp-68]
cmp dword ptr [ebp-56], ecx
jge .Lt_0132
mov ecx, dword ptr [ebp+12]
mov dword ptr [ebp-4], ecx
jmp .Lt_0104
.Lt_0132:
mov ecx, dword ptr [ebp-56]
cmp dword ptr [ebp-68], ecx
jge .Lt_0134
mov ecx, dword ptr [ebp+16]
mov dword ptr [ebp-4], ecx
jmp .Lt_0104
.Lt_0134:
mov ecx, dword ptr [ebp+12]
and ecx, 480
je .Lt_0135
mov dword ptr [ebp-84], 22
jmp .Lt_015B
.Lt_0135:
mov ecx, dword ptr [ebp+12]
and ecx, 31
mov dword ptr [ebp-84], ecx
.Lt_015B:
mov ecx, dword ptr [ebp-84]
imul ecx, 28
mov dword ptr [ebp-120], ecx
mov ecx, dword ptr [ebp+8]
and ecx, 480
je .Lt_0137
mov dword ptr [ebp-88], 22
jmp .Lt_015C
.Lt_0137:
mov ecx, dword ptr [ebp+8]
and ecx, 31
mov dword ptr [ebp-88], ecx
.Lt_015C:
mov ecx, dword ptr [ebp-88]
imul ecx, 28
mov eax, dword ptr [ebp-120]
mov ebx, dword ptr [SYMB_DTYPETB+ecx+8]
cmp ebx, dword ptr [SYMB_DTYPETB+eax+8]
sete bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-80], ebx
mov ebx, dword ptr [ebp+16]
and ebx, 480
je .Lt_0139
mov dword ptr [ebp-96], 22
jmp .Lt_015D
.Lt_0139:
mov ebx, dword ptr [ebp+16]
and ebx, 31
mov dword ptr [ebp-96], ebx
.Lt_015D:
mov ebx, dword ptr [ebp-96]
imul ebx, 28
mov dword ptr [ebp-124], ebx
mov ebx, dword ptr [ebp+8]
and ebx, 480
je .Lt_013B
mov dword ptr [ebp-100], 22
jmp .Lt_015E
.Lt_013B:
mov ebx, dword ptr [ebp+8]
and ebx, 31
mov dword ptr [ebp-100], ebx
.Lt_015E:
mov ebx, dword ptr [ebp-100]
imul ebx, 28
mov eax, dword ptr [ebp-124]
mov ecx, dword ptr [SYMB_DTYPETB+ebx+8]
cmp ecx, dword ptr [SYMB_DTYPETB+eax+8]
sete cl
shr ecx, 1
sbb ecx, ecx
mov dword ptr [ebp-92], ecx
mov ecx, dword ptr [ebp-92]
not ecx
and ecx, dword ptr [ebp-80]
je .Lt_013E
mov ecx, dword ptr [ebp+12]
mov dword ptr [ebp-4], ecx
jmp .Lt_0104
.Lt_013E:
mov ecx, dword ptr [ebp-80]
not ecx
and ecx, dword ptr [ebp-92]
je .Lt_0140
mov ecx, dword ptr [ebp+16]
mov dword ptr [ebp-4], ecx
jmp .Lt_0104
.Lt_0140:
push dword ptr [ebp+12]
call TYPETOSIGNED
add esp, 4
push dword ptr [ebp+8]
mov ebx, eax
call TYPETOSIGNED
add esp, 4
cmp ebx, eax
sete bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-104], ebx
push dword ptr [ebp+16]
call TYPETOSIGNED
add esp, 4
push dword ptr [ebp+8]
mov ebx, eax
call TYPETOSIGNED
add esp, 4
cmp ebx, eax
sete bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-108], ebx
mov ebx, dword ptr [ebp-108]
not ebx
and ebx, dword ptr [ebp-104]
je .Lt_0142
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebp-4], ebx
jmp .Lt_0104
.Lt_0142:
mov ebx, dword ptr [ebp-104]
not ebx
and ebx, dword ptr [ebp-108]
je .Lt_0144
mov ebx, dword ptr [ebp+16]
mov dword ptr [ebp-4], ebx
jmp .Lt_0104
.Lt_0144:
push dword ptr [ebp+12]
call TYPETOSIGNED
add esp, 4
cmp eax, 7
sete al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-112], eax
push dword ptr [ebp+16]
call TYPETOSIGNED
add esp, 4
cmp eax, 7
sete al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-116], eax
mov eax, dword ptr [ebp-116]
not eax
and eax, dword ptr [ebp-112]
je .Lt_0146
mov eax, dword ptr [ebp+12]
mov dword ptr [ebp-4], eax
jmp .Lt_0104
.Lt_0146:
mov eax, dword ptr [ebp-112]
not eax
and eax, dword ptr [ebp-116]
je .Lt_0148
mov eax, dword ptr [ebp+16]
mov dword ptr [ebp-4], eax
jmp .Lt_0104
.Lt_0148:
mov eax, dword ptr [ebp+12]
mov dword ptr [ebp-4], eax
.Lt_0104:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CLOSESTTYPE, .-CLOSESTTYPE
.balign 16
fb_ctor__symbzdata:
.type fb_ctor__symbzdata, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__symbzdata, .-fb_ctor__symbzdata
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
	#fbc-1.01.0/src/compiler/symb-data.bas' compilation took 0.02787207660730928 secs

.section .bss
.balign 4
	.lcomm	Lt_0052,32
.balign 4
	.lcomm	Lt_0053,32

.section .data
.balign 4

.globl SYMB_DTYPETB
SYMB_DTYPETB:
.int 4
.int 0
.int 0
.int 0
.int 0
.int -1
.int Lt_0056
.int 0
.int 1
.int -1
.int 10
.int 1
.int 0
.int Lt_0057
.int 0
.int 1
.int 0
.int 15
.int 2
.int 1
.int Lt_0058
.int 0
.int 1
.int 0
.int 0
.int 2
.int 1
.int Lt_0059
.int 0
.int 2
.int -1
.int 20
.int 4
.int 2
.int Lt_005A
.int 0
.int 2
.int 0
.int 25
.int 5
.int 3
.int Lt_005B
.int 0
.int 2
.int 0
.int 0
.int -1
.int -1
.int Lt_005C
.int 0
.int -1
.int -1
.int -1
.int 7
.int -1
.int Lt_005D
.int 0
.int -1
.int 0
.int -1
.int 8
.int -1
.int Lt_005E
.int 0
.int -1
.int -1
.int 0
.int 7
.int -1
.int Lt_005F
.int 0
.int 4
.int -1
.int 40
.int 10
.int 4
.int Lt_0060
.int 0
.int 4
.int 0
.int 45
.int 11
.int 5
.int Lt_0061
.int 0
.int 8
.int -1
.int 80
.int 12
.int 6
.int Lt_0062
.int 0
.int 8
.int 0
.int 85
.int 13
.int 7
.int Lt_0063
.int 1
.int 4
.int -1
.int 0
.int 14
.int 8
.int Lt_0064
.int 1
.int 8
.int -1
.int 0
.int 15
.int 9
.int Lt_0065
.int 2
.int -1
.int 0
.int 0
.int 16
.int -1
.int Lt_0066
.int 2
.int 1
.int 0
.int 0
.int 17
.int -1
.int Lt_0066
.int 3
.int 0
.int 0
.int 0
.int 18
.int -1
.int Lt_0067
.int 3
.int 0
.int 0
.int 0
.int 19
.int -1
.int Lt_0068
.int 0
.int 0
.int 0
.int 0
.int 8
.int -1
.int Lt_0069
.int 4
.int 0
.int 0
.int 0
.int 0
.int -1
.int Lt_006A
.int 0
.int -1
.int 0
.int 0
.int 8
.int -1
.int Lt_006B
.int 0
.int 16
.int 0
.int 0
.int 23
.int -1
.int Lt_006C

.section .bss

.globl SYMB_DTYPEMATCHTB
.balign 4
	.lcomm	SYMB_DTYPEMATCHTB,900

.globl ENV
.balign 4
	.comm	ENV,996

.section .rodata
.balign 4
Lt_0056:	.ascii	"any\0"
.balign 4
Lt_0057:	.ascii	"byte\0"
.balign 4
Lt_0058:	.ascii	"ubyte\0"
.balign 4
Lt_0059:	.ascii	"zstring\0"
.balign 4
Lt_005A:	.ascii	"short\0"
.balign 4
Lt_005B:	.ascii	"ushort\0"
.balign 4
Lt_005C:	.ascii	"wstring\0"
.balign 4
Lt_005D:	.ascii	"integer\0"
.balign 4
Lt_005E:	.ascii	"uinteger\0"
.balign 4
Lt_005F:	.ascii	"enum\0"
.balign 4
Lt_0060:	.ascii	"long\0"
.balign 4
Lt_0061:	.ascii	"ulong\0"
.balign 4
Lt_0062:	.ascii	"longint\0"
.balign 4
Lt_0063:	.ascii	"ulongint\0"
.balign 4
Lt_0064:	.ascii	"single\0"
.balign 4
Lt_0065:	.ascii	"double\0"
.balign 4
Lt_0066:	.ascii	"string\0"
.balign 4
Lt_0067:	.ascii	"type\0"
.balign 4
Lt_0068:	.ascii	"namepace\0"
.balign 4
Lt_0069:	.ascii	"function\0"
.balign 4
Lt_006A:	.ascii	"fwdref\0"
.balign 4
Lt_006B:	.ascii	"pointer\0"
.balign 4
Lt_006C:	.ascii	"xmmword\0"

.section .ctors, "aw", @progbits
.int fb_ctor__symbzdata
