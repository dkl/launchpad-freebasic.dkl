	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/symb.bas' compilation started at 14:16:38 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl SYMBINITSYMBOLS
SYMBINITSYMBOLS:
.type SYMBINITSYMBOLS, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0062:
push 6
push 164
push 8000
lea eax, [SYMB+4]
push eax
call LISTINIT
add esp, 16
push 129
push 17
push 1000
lea eax, [SYMB+98596]
push eax
call POOLINIT
add esp, 16
mov dword ptr [SYMB+98348], 0
push 7
push 28
push 500
lea eax, [SYMB+98640]
push eax
call LISTINIT
add esp, 16
mov dword ptr [SYMB+98352], 8
mov word ptr [SYMB+98384], 0
lea eax, [SYMB+98404]
mov dword ptr [ebp-4], eax
lea eax, [SYMB+98352]
mov ebx, dword ptr [ebp-4]
mov dword ptr [ebx], eax
mov eax, dword ptr [ebp-4]
mov dword ptr [eax+4], 0
mov eax, dword ptr [ebp-4]
mov dword ptr [eax+8], 0
lea eax, [SYMB+98352]
mov ebx, dword ptr [ebp-4]
mov dword ptr [ebx+12], eax
mov eax, dword ptr [ebp-4]
mov dword ptr [eax+28], 0
mov eax, dword ptr [ebp-4]
mov dword ptr [eax+32], 0
push 0
push 8000
mov eax, dword ptr [ebp-4]
lea ebx, [eax+16]
push ebx
call HASHINIT
add esp, 12
jmp .Lt_0065
.Lt_0066:
push 12
push 0
mov ebx, dword ptr [ebp-4]
lea eax, [ebx+16]
push eax
call memset
add esp, 12
.Lt_0065:
lea eax, [SYMB+98640]
push eax
call LISTNEWNODE
add esp, 4
mov ebx, dword ptr [ebp-4]
mov dword ptr [ebx+36], eax
lea eax, [SYMB+98352]
mov dword ptr [SYMB+98516], eax
lea eax, [SYMB+98404]
mov dword ptr [SYMB+98524], eax
lea eax, [SYMB+98416]
mov dword ptr [SYMB+98520], eax
mov dword ptr [SYMB+36], 0
mov dword ptr [SYMB+40], 0
push dword ptr [SYMB+98520]
call SYMBHASHLISTADD
add esp, 4
push 0
push 8000
lea eax, [SYMB+98552]
push eax
call HASHINIT
add esp, 12
push 6
push 24
push 4000
lea eax, [SYMB+98564]
push eax
call LISTINIT
add esp, 16
mov dword ptr [SYMB+99012], 0
call SYMBDATAINIT
.Lt_0063:
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBINITSYMBOLS, .-SYMBINITSYMBOLS
.balign 16

.globl SYMBINIT
SYMBINIT:
.type SYMBINIT, @function
push ebp
mov ebp, esp
.Lt_006F:
cmp dword ptr [SYMB], 0
je .Lt_0072
jmp .Lt_0070
.Lt_0072:
.Lt_0071:
call SYMBINITSYMBOLS
call SYMBCOMPINIT
call SYMBMANGLEINIT
call SYMBKEYWORDINIT
push dword ptr [ebp+8]
call SYMBDEFINEINIT
add esp, 4
call SYMBFWDREFINIT
call SYMBVARINIT
call SYMBPROCINIT
call HINITDEFTYPETB
call SYMBCOMPRTTIINIT
mov dword ptr [SYMB], -1
.Lt_0070:
mov esp, ebp
pop ebp
ret
.size SYMBINIT, .-SYMBINIT
.balign 16

.globl SYMBEND
SYMBEND:
.type SYMBEND, @function
.Lt_0073:
cmp dword ptr [SYMB], 0
jne .Lt_0076
jmp .Lt_0074
.Lt_0076:
.Lt_0075:
call SYMBDELGLOBALTB
mov dword ptr [SYMB+98408], 0
mov dword ptr [SYMB+98412], 0
mov dword ptr [SYMB+98524], 0
lea eax, [SYMB+98564]
push eax
call LISTEND
add esp, 4
lea eax, [SYMB+98552]
push eax
call HASHEND
add esp, 4
lea eax, [SYMB+98420]
push eax
call HASHEND
add esp, 4
call SYMBCOMPRTTIEND
call SYMBPROCEND
call SYMBVAREND
call SYMBFWDREFEND
call SYMBDEFINEEND
call SYMBMANGLEEND
call SYMBCOMPEND
push dword ptr [SYMB+98440]
lea eax, [SYMB+98640]
push eax
call LISTDELNODE
add esp, 8
lea eax, [SYMB+98640]
push eax
call LISTEND
add esp, 4
lea eax, [SYMB+98596]
push eax
call POOLEND
add esp, 4
lea eax, [SYMB+4]
push eax
call LISTEND
add esp, 4
mov dword ptr [SYMB], 0
.Lt_0074:
ret
.size SYMBEND, .-SYMBEND
.balign 16

.globl SYMBCANDUPLICATE
SYMBCANDUPLICATE:
.type SYMBCANDUPLICATE, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_0077:
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-8], ebx
jmp .Lt_007A
.Lt_007C:
jmp .Lt_0078
jmp .Lt_0079
.Lt_007D:
.Lt_007E:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx]
mov dword ptr [ebp-12], eax
jmp .Lt_0082
.Lt_0084:
jmp .Lt_0078
jmp .Lt_0081
.Lt_0082:
mov eax, dword ptr [ebp-12]
add eax, 4294967291
cmp eax, 8
ja .Lt_0081
mov eax, dword ptr [ebp-12]
jmp dword ptr [.LT_0085+eax*4-20]
.LT_0085:
.int .Lt_0084
.int .Lt_0081
.int .Lt_0081
.int .Lt_0084
.int .Lt_0084
.int .Lt_0084
.int .Lt_0084
.int .Lt_0084
.int .Lt_0084
.Lt_0081:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+144]
mov dword ptr [ebp+8], ebx
.Lt_0080:
cmp dword ptr [ebp+8], 0
jne .Lt_007E
.Lt_007F:
jmp .Lt_0079
.Lt_0086:
.Lt_0087:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx]
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 5
je .Lt_008D
.Lt_008E:
cmp dword ptr [ebp-12], 8
je .Lt_008D
.Lt_008F:
cmp dword ptr [ebp-12], 14
je .Lt_008D
.Lt_0090:
cmp dword ptr [ebp-12], 11
jne .Lt_008C
.Lt_008D:
jmp .Lt_0078
jmp .Lt_008A
.Lt_008C:
cmp dword ptr [ebp-12], 10
jne .Lt_0091
.Lt_0092:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+8]
and ebx, 262144
test ebx, ebx
je .Lt_0094
jmp .Lt_0078
.Lt_0094:
.Lt_0093:
.Lt_0091:
.Lt_008A:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+144]
mov dword ptr [ebp+8], eax
.Lt_0089:
cmp dword ptr [ebp+8], 0
jne .Lt_0087
.Lt_0088:
jmp .Lt_0079
.Lt_0095:
.Lt_0096:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-12], ebx
jmp .Lt_009A
.Lt_009C:
jmp .Lt_0099
.Lt_009D:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+8]
and eax, 262144
test eax, eax
je .Lt_009F
jmp .Lt_0078
.Lt_009F:
.Lt_009E:
jmp .Lt_0099
.Lt_00A0:
cmp dword ptr [ENV+136], 3
je .Lt_00A2
jmp .Lt_0078
.Lt_00A2:
.Lt_00A1:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 3
jne .Lt_00A4
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+8]
and ebx, 32
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_00A6
jmp .Lt_0078
jmp .Lt_00A5
.Lt_00A6:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+8]
and eax, 32
test eax, eax
je .Lt_00A8
jmp .Lt_0078
.Lt_00A8:
.Lt_00A7:
.Lt_00A5:
.Lt_00A4:
.Lt_00A3:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 268435456
test ebx, ebx
je .Lt_00AA
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+24]
and eax, 511
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebx+24]
and ecx, 511
cmp eax, ecx
jne .Lt_00AC
jmp .Lt_0078
.Lt_00AC:
.Lt_00AB:
jmp .Lt_00A9
.Lt_00AA:
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ecx+24]
and eax, 511
cmp eax, 16
je .Lt_00AE
jmp .Lt_0078
.Lt_00AE:
.Lt_00AD:
.Lt_00A9:
jmp .Lt_0099
.Lt_00AF:
jmp .Lt_0078
jmp .Lt_0099
.Lt_009A:
mov eax, dword ptr [ebp-12]
add eax, 4294967293
cmp eax, 11
ja .Lt_00AF
mov eax, dword ptr [ebp-12]
jmp dword ptr [.LT_00B0+eax*4-12]
.LT_00B0:
.int .Lt_00A0
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00A0
.int .Lt_009C
.int .Lt_00AF
.int .Lt_009C
.int .Lt_009D
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_009C
.int .Lt_009C
.Lt_0099:
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+144]
mov dword ptr [ebp+8], ecx
.Lt_0098:
cmp dword ptr [ebp+8], 0
jne .Lt_0096
.Lt_0097:
jmp .Lt_0079
.Lt_00B1:
.Lt_00B2:
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ecx]
mov dword ptr [ebp-12], eax
jmp .Lt_00B6
.Lt_00B8:
jmp .Lt_00B5
.Lt_00B9:
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+8]
and ecx, 262144
test ecx, ecx
je .Lt_00BB
jmp .Lt_0078
.Lt_00BB:
.Lt_00BA:
jmp .Lt_00B5
.Lt_00BC:
cmp dword ptr [ENV+136], 3
je .Lt_00BE
jmp .Lt_0078
.Lt_00BE:
.Lt_00BD:
mov ecx, dword ptr [ebp+8]
cmp dword ptr [ecx], 3
jne .Lt_00C0
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ecx+8]
and eax, 32
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_00C2
jmp .Lt_0078
.Lt_00C2:
.Lt_00C1:
.Lt_00C0:
.Lt_00BF:
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax+4]
and ecx, 268435456
test ecx, ecx
je .Lt_00C4
mov ecx, dword ptr [ebp+12]
mov eax, dword ptr [ecx+24]
and eax, 511
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ecx+24]
and ebx, 511
cmp eax, ebx
jne .Lt_00C6
jmp .Lt_0078
.Lt_00C6:
.Lt_00C5:
jmp .Lt_00C3
.Lt_00C4:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+24]
and eax, 511
cmp eax, 16
je .Lt_00C8
jmp .Lt_0078
.Lt_00C8:
.Lt_00C7:
.Lt_00C3:
jmp .Lt_00B5
.Lt_00C9:
mov eax, dword ptr [ebp+12]
movzx ebx, word ptr [eax+32]
mov eax, dword ptr [ebp+8]
movzx ecx, word ptr [eax+32]
cmp ebx, ecx
jne .Lt_00CB
jmp .Lt_0078
.Lt_00CB:
.Lt_00CA:
jmp .Lt_00B5
.Lt_00CC:
mov ecx, dword ptr [ebp+12]
movzx ebx, word ptr [ecx+32]
mov ecx, dword ptr [ebp+8]
movzx eax, word ptr [ecx+32]
cmp ebx, eax
jne .Lt_00CE
cmp dword ptr [ENV+136], 0
jne .Lt_00D0
jmp .Lt_0078
.Lt_00D0:
.Lt_00CF:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+24]
and ebx, 511
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax+24]
and ecx, 511
cmp ebx, ecx
jne .Lt_00D2
jmp .Lt_0078
.Lt_00D2:
.Lt_00D1:
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ecx+4]
and ebx, 268435456
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
sete bl
shr ebx, 1
sbb ebx, ebx
mov ecx, dword ptr [ebp+12]
mov eax, dword ptr [ecx+4]
and eax, 268435456
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
sete al
shr eax, 1
sbb eax, eax
and ebx, eax
je .Lt_00D4
jmp .Lt_0078
.Lt_00D4:
.Lt_00D3:
.Lt_00CE:
.Lt_00CD:
jmp .Lt_00B5
.Lt_00D5:
jmp .Lt_0078
jmp .Lt_00B5
.Lt_00B6:
mov eax, dword ptr [ebp-12]
add eax, 4294967295
cmp eax, 13
ja .Lt_00D5
mov eax, dword ptr [ebp-12]
jmp dword ptr [.LT_00D6+eax*4-4]
.LT_00D6:
.int .Lt_00CC
.int .Lt_00D5
.int .Lt_00BC
.int .Lt_00D5
.int .Lt_00D5
.int .Lt_00BC
.int .Lt_00B8
.int .Lt_00D5
.int .Lt_00B8
.int .Lt_00B9
.int .Lt_00D5
.int .Lt_00C9
.int .Lt_00B8
.int .Lt_00B8
.Lt_00B5:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+144]
mov dword ptr [ebp+8], ebx
.Lt_00B4:
cmp dword ptr [ebp+8], 0
jne .Lt_00B2
.Lt_00B3:
jmp .Lt_0079
.Lt_00D7:
.Lt_00D8:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx]
mov dword ptr [ebp-12], eax
jmp .Lt_00DC
.Lt_00DE:
jmp .Lt_0078
jmp .Lt_00DB
.Lt_00DF:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+8]
and ebx, 262144
test ebx, ebx
je .Lt_00E1
jmp .Lt_0078
.Lt_00E1:
.Lt_00E0:
jmp .Lt_00DB
.Lt_00DC:
mov ebx, dword ptr [ebp-12]
add ebx, 4294967291
cmp ebx, 6
ja .Lt_00DB
mov ebx, dword ptr [ebp-12]
jmp dword ptr [.LT_00E2+ebx*4-20]
.LT_00E2:
.int .Lt_00DE
.int .Lt_00DE
.int .Lt_00DE
.int .Lt_00DE
.int .Lt_00DB
.int .Lt_00DF
.int .Lt_00DE
.Lt_00DB:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+144]
mov dword ptr [ebp+8], eax
.Lt_00DA:
cmp dword ptr [ebp+8], 0
jne .Lt_00D8
.Lt_00D9:
jmp .Lt_0079
.Lt_00E3:
jmp .Lt_0079
.Lt_007A:
mov eax, dword ptr [ebp-8]
add eax, 4294967295
cmp eax, 13
ja .Lt_0079
mov eax, dword ptr [ebp-8]
jmp dword ptr [.LT_00E4+eax*4-4]
.LT_00E4:
.int .Lt_00B1
.int .Lt_0095
.int .Lt_0095
.int .Lt_00E3
.int .Lt_007C
.int .Lt_007C
.int .Lt_00D7
.int .Lt_007C
.int .Lt_007D
.int .Lt_007D
.int .Lt_007C
.int .Lt_007C
.int .Lt_007D
.int .Lt_0086
.Lt_0079:
mov dword ptr [ebp-4], -1
.Lt_0078:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBCANDUPLICATE, .-SYMBCANDUPLICATE
.balign 16

.globl SYMBNEWSYMBOL
SYMBNEWSYMBOL:
.type SYMBNEWSYMBOL, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
mov dword ptr [ebp-4], 0
.Lt_00EB:
mov dword ptr [ebp-4], 0
cmp dword ptr [ebp+16], 0
jne .Lt_00EE
mov eax, dword ptr [SYMB+98524]
mov dword ptr [ebp+16], eax
mov eax, dword ptr [ENV+832]
cmp dword ptr [PARSER+100], eax
jne .Lt_00F0
cmp dword ptr [PARSER+92], 0
jne .Lt_00F2
lea eax, [SYMB+98352]
cmp dword ptr [SYMB+98516], eax
jne .Lt_00F4
lea eax, [SYMB+98404]
mov dword ptr [ebp+16], eax
.Lt_00F4:
.Lt_00F3:
mov eax, dword ptr [ebp+44]
and eax, -129
mov ebx, eax
mov dword ptr [ebp+44], ebx
jmp .Lt_00F1
.Lt_00F2:
mov ebx, dword ptr [ebp+44]
or ebx, 128
mov eax, ebx
mov dword ptr [ebp+44], eax
.Lt_00F1:
jmp .Lt_00EF
.Lt_00F0:
mov eax, dword ptr [ebp+44]
or eax, 128
mov ebx, eax
mov dword ptr [ebp+44], ebx
.Lt_00EF:
.Lt_00EE:
.Lt_00ED:
cmp dword ptr [ebp+20], 0
jne .Lt_00F6
mov ebx, dword ptr [SYMB+98520]
mov dword ptr [ebp+20], ebx
.Lt_00F6:
.Lt_00F5:
mov dword ptr [ebp-12], 0
cmp dword ptr [ebp+12], 0
jne .Lt_00F8
mov dword ptr [ebp-12], -1
lea ebx, [SYMB+4]
push ebx
call LISTNEWNODE
add esp, 4
mov dword ptr [ebp+12], eax
.Lt_00F8:
.Lt_00F7:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [ebp+24]
mov dword ptr [eax], ebx
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebp+44]
mov dword ptr [ebx+4], eax
mov eax, dword ptr [ebp+12]
mov dword ptr [eax+8], 0
mov ax, word ptr [PARSER+96]
mov ebx, dword ptr [ebp+12]
mov word ptr [ebx+34], ax
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [ebp+36]
mov dword ptr [eax+24], ebx
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebp+40]
mov dword ptr [ebx+28], eax
mov eax, dword ptr [ebp+8]
and eax, 2
test eax, eax
je .Lt_00FA
mov eax, dword ptr [PARSER+100]
mov ebx, dword ptr [eax+8]
and ebx, 12288
test ebx, ebx
je .Lt_00FC
mov ebx, dword ptr [ebp+12]
mov word ptr [ebx+32], 0
jmp .Lt_00FB
.Lt_00FC:
mov ebx, dword ptr [PARSER+100]
movzx eax, word ptr [ebx+32]
inc eax
mov ebx, dword ptr [ebp+12]
mov word ptr [ebx+32], ax
.Lt_00FB:
jmp .Lt_00F9
.Lt_00FA:
mov ax, word ptr [PARSER+92]
mov ebx, dword ptr [ebp+12]
mov word ptr [ebx+32], ax
.Lt_00F9:
cmp dword ptr [ebp+28], 0
je .Lt_00FD
push 0
push dword ptr [ebp+28]
call fb_StrLen
add esp, 8
mov dword ptr [ebp-16], eax
jmp .Lt_0122
.Lt_00FD:
mov dword ptr [ebp-16], 0
.Lt_0122:
mov eax, dword ptr [ebp-16]
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jle .Lt_0100
mov eax, dword ptr [ebp-8]
inc eax
push eax
lea eax, [SYMB+98596]
push eax
call POOLNEWITEM
add esp, 8
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx+12], eax
mov eax, dword ptr [ebp+8]
and eax, 1
test eax, eax
jne .Lt_0102
mov eax, dword ptr [ebp+12]
push dword ptr [eax+12]
push dword ptr [ebp+28]
call HUCASE
add esp, 8
jmp .Lt_0101
.Lt_0102:
push 0
push 0
push dword ptr [ebp+28]
push 0
mov eax, dword ptr [ebp+12]
push dword ptr [eax+12]
call fb_StrAssign
add esp, 20
.Lt_0101:
jmp .Lt_00FF
.Lt_0100:
mov eax, dword ptr [ebp+12]
mov dword ptr [eax+12], 0
mov eax, dword ptr [ebp+8]
and eax, -33
mov ebx, eax
mov dword ptr [ebp+8], ebx
.Lt_00FF:
cmp dword ptr [ebp+32], 0
je .Lt_0104
push 0
push dword ptr [ebp+32]
call fb_StrLen
add esp, 8
inc eax
mov ebx, eax
push ebx
call XALLOCATE
add esp, 4
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx+16], eax
push 0
push 0
push dword ptr [ebp+32]
push 0
mov eax, dword ptr [ebp+12]
push dword ptr [eax+16]
call fb_StrAssign
add esp, 20
jmp .Lt_0103
.Lt_0104:
mov eax, dword ptr [ebp+12]
mov dword ptr [eax+16], 0
.Lt_0103:
mov eax, dword ptr [ebp+12]
mov dword ptr [eax+20], 0
mov eax, dword ptr [ebp+12]
mov dword ptr [eax+36], 0
mov dword ptr [eax+40], 0
mov eax, dword ptr [ebp+12]
mov dword ptr [eax+44], 0
mov dword ptr [eax+48], 0
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [ebp+20]
mov dword ptr [eax+128], ebx
mov ebx, dword ptr [ebp+8]
and ebx, 32
test ebx, ebx
je .Lt_0106
mov ebx, dword ptr [ebp+12]
push dword ptr [ebx+12]
call HASHHASH
add esp, 4
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx+136], eax
mov eax, dword ptr [ebp+12]
push dword ptr [eax+136]
mov eax, dword ptr [ebp+12]
push dword ptr [eax+12]
mov eax, dword ptr [ebp+20]
lea ebx, [eax+4]
push ebx
call HASHLOOKUPEX
add esp, 12
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 0
jne .Lt_0108
mov eax, dword ptr [ebp+12]
push dword ptr [eax+136]
push dword ptr [ebp+12]
mov eax, dword ptr [ebp+12]
push dword ptr [eax+12]
mov eax, dword ptr [ebp+20]
lea ebx, [eax+4]
push ebx
call HASHADD
add esp, 16
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx+132], eax
mov eax, dword ptr [ebp+12]
mov dword ptr [eax+140], 0
mov eax, dword ptr [ebp+12]
mov dword ptr [eax+144], 0
jmp .Lt_0107
.Lt_0108:
mov eax, dword ptr [ebp+8]
and eax, 128
test eax, eax
jne .Lt_010A
push dword ptr [ebp+12]
push dword ptr [ebp-20]
call SYMBCANDUPLICATE
add esp, 8
test eax, eax
jne .Lt_010C
mov eax, dword ptr [ebp+12]
push dword ptr [eax+12]
lea eax, [SYMB+98596]
push eax
call POOLDELITEM
add esp, 8
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax+16], 0
je .Lt_010E
mov eax, dword ptr [ebp+12]
push dword ptr [eax+16]
call free
add esp, 4
.Lt_010E:
.Lt_010D:
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax+20], 0
je .Lt_0110
mov eax, dword ptr [ebp+12]
push dword ptr [eax+20]
call free
add esp, 4
.Lt_0110:
.Lt_010F:
cmp dword ptr [ebp-12], 0
je .Lt_0112
push dword ptr [ebp+12]
lea eax, [SYMB+4]
push eax
call LISTDELNODE
add esp, 8
.Lt_0112:
.Lt_0111:
jmp .Lt_00EC
.Lt_010C:
.Lt_010B:
.Lt_010A:
.Lt_0109:
mov eax, dword ptr [ebp-20]
mov ebx, dword ptr [ebp+12]
mov ecx, dword ptr [eax+132]
mov dword ptr [ebx+132], ecx
cmp dword ptr [ENV+136], 3
jne .Lt_0114
mov dword ptr [ebp-24], 0
.Lt_0115:
mov ecx, dword ptr [ebp-20]
cmp dword ptr [ecx], 6
jne .Lt_0116
mov ecx, dword ptr [ebp-20]
mov dword ptr [ebp-24], ecx
mov ecx, dword ptr [ebp-20]
mov ebx, dword ptr [ecx+144]
mov dword ptr [ebp-20], ebx
cmp dword ptr [ebp-20], 0
jne .Lt_0118
jmp .Lt_0116
.Lt_0118:
.Lt_0117:
jmp .Lt_0115
.Lt_0116:
cmp dword ptr [ebp-24], 0
jne .Lt_011A
jmp .Lt_011B
.Lt_011A:
.Lt_0119:
mov ebx, dword ptr [ebp-24]
mov ecx, dword ptr [ebp+12]
mov dword ptr [ebx+144], ecx
mov ecx, dword ptr [ebp+12]
mov ebx, dword ptr [ebp-24]
mov dword ptr [ecx+140], ebx
mov ebx, dword ptr [ebp+12]
mov ecx, dword ptr [ebp-20]
mov dword ptr [ebx+144], ecx
cmp dword ptr [ebp-20], 0
je .Lt_011D
mov ecx, dword ptr [ebp-20]
mov ebx, dword ptr [ebp+12]
mov dword ptr [ecx+140], ebx
.Lt_011D:
.Lt_011C:
jmp .Lt_0113
.Lt_0114:
.Lt_011B:
mov ebx, dword ptr [ebp-20]
mov ecx, dword ptr [ebx+132]
mov ebx, dword ptr [ebp+12]
mov dword ptr [ecx+4], ebx
mov ebx, dword ptr [ebp+12]
mov ecx, dword ptr [ebp-20]
mov eax, dword ptr [ecx+132]
mov ecx, dword ptr [ebx+12]
mov dword ptr [eax], ecx
mov ecx, dword ptr [ebp-20]
mov eax, dword ptr [ebp+12]
mov dword ptr [ecx+140], eax
mov eax, dword ptr [ebp+12]
mov dword ptr [eax+140], 0
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [ebp-20]
mov dword ptr [eax+144], ecx
.Lt_0113:
.Lt_0107:
jmp .Lt_0105
.Lt_0106:
mov ecx, dword ptr [ebp+12]
mov dword ptr [ecx+132], 0
mov ecx, dword ptr [ebp+12]
mov dword ptr [ecx+140], 0
mov ecx, dword ptr [ebp+12]
mov dword ptr [ecx+144], 0
.Lt_0105:
mov ecx, dword ptr [ebp+16]
cmp dword ptr [ecx+8], 0
je .Lt_011F
mov ecx, dword ptr [ebp+16]
mov eax, dword ptr [ecx+8]
mov ecx, dword ptr [ebp+12]
mov dword ptr [eax+160], ecx
jmp .Lt_011E
.Lt_011F:
mov ecx, dword ptr [ebp+16]
mov eax, dword ptr [ebp+12]
mov dword ptr [ecx+4], eax
.Lt_011E:
mov eax, dword ptr [ebp+16]
mov ecx, dword ptr [ebp+12]
mov ebx, dword ptr [eax+8]
mov dword ptr [ecx+156], ebx
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx+160], 0
mov ebx, dword ptr [ebp+12]
mov ecx, dword ptr [ebp+16]
mov dword ptr [ebx+148], ecx
mov ecx, dword ptr [ebp+16]
mov ebx, dword ptr [ebp+12]
mov dword ptr [ecx+8], ebx
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx+152], 0
mov ebx, dword ptr [ebp+36]
and ebx, 31
cmp ebx, 21
jne .Lt_0121
push dword ptr [ebp+12]
push dword ptr [ebp+40]
call SYMBADDTOFWDREF
add esp, 8
.Lt_0121:
.Lt_0120:
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebp-4], ebx
.Lt_00EC:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBNEWSYMBOL, .-SYMBNEWSYMBOL
.balign 16

.globl SYMBHASHLISTADD
SYMBHASHLISTADD:
.type SYMBHASHLISTADD, @function
push ebp
mov ebp, esp
push ebx
.Lt_0123:
cmp dword ptr [SYMB+40], 0
je .Lt_0126
mov eax, dword ptr [SYMB+40]
mov ebx, dword ptr [ebp+8]
mov dword ptr [eax+20], ebx
jmp .Lt_0125
.Lt_0126:
mov ebx, dword ptr [ebp+8]
mov dword ptr [SYMB+36], ebx
.Lt_0125:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [SYMB+40]
mov dword ptr [ebx+16], eax
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+20], 0
mov eax, dword ptr [ebp+8]
mov dword ptr [SYMB+40], eax
.Lt_0124:
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBHASHLISTADD, .-SYMBHASHLISTADD
.balign 16

.globl SYMBHASHLISTADDBEFORE
SYMBHASHLISTADDBEFORE:
.type SYMBHASHLISTADDBEFORE, @function
push ebp
mov ebp, esp
push ebx
.Lt_0127:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+16], 0
jne .Lt_012A
mov eax, dword ptr [ebp+12]
mov dword ptr [SYMB+36], eax
jmp .Lt_0129
.Lt_012A:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+16]
mov eax, dword ptr [ebp+12]
mov dword ptr [ebx+20], eax
.Lt_0129:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+12]
mov ecx, dword ptr [eax+16]
mov dword ptr [ebx+16], ecx
mov ecx, dword ptr [ebp+12]
mov ebx, dword ptr [ebp+8]
mov dword ptr [ecx+20], ebx
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebp+12]
mov dword ptr [ebx+16], ecx
.Lt_0128:
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBHASHLISTADDBEFORE, .-SYMBHASHLISTADDBEFORE
.balign 16

.globl SYMBHASHLISTDEL
SYMBHASHLISTDEL:
.type SYMBHASHLISTDEL, @function
push ebp
mov ebp, esp
push ebx
.Lt_012B:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+16], 0
je .Lt_012E
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebx+16]
mov ebx, dword ptr [eax+20]
mov dword ptr [ecx+20], ebx
jmp .Lt_012D
.Lt_012E:
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebx+20]
mov dword ptr [SYMB+36], ecx
.Lt_012D:
mov ecx, dword ptr [ebp+8]
cmp dword ptr [ecx+20], 0
je .Lt_0130
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+20]
mov ebx, dword ptr [ecx+16]
mov dword ptr [eax+16], ebx
jmp .Lt_012F
.Lt_0130:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+16]
mov dword ptr [SYMB+40], eax
.Lt_012F:
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+16], 0
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+20], 0
.Lt_012C:
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBHASHLISTDEL, .-SYMBHASHLISTDEL
.balign 16

.globl SYMBHASHLISTINSERTNAMESPACE
SYMBHASHLISTINSERTNAMESPACE:
.type SYMBHASHLISTINSERTNAMESPACE, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
.Lt_0131:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+88]
mov eax, dword ptr [ebx+20]
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+88]
mov eax, dword ptr [ebx+24]
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp+12]
mov dword ptr [ebp-12], eax
.Lt_0133:
cmp dword ptr [ebp-12], 0
je .Lt_0134
mov eax, dword ptr [ebp-12]
cmp dword ptr [eax+132], 0
je .Lt_0136
mov eax, dword ptr [ebp-12]
cmp dword ptr [eax+140], 0
jne .Lt_0138
lea eax, [SYMB+98564]
push eax
call LISTNEWNODE
add esp, 4
mov dword ptr [ebp-16], eax
mov eax, dword ptr [ebp-16]
mov ebx, dword ptr [ebp-12]
mov dword ptr [eax], ebx
mov ebx, dword ptr [ebp-16]
mov dword ptr [ebx+12], 0
mov ebx, dword ptr [ebp-16]
mov dword ptr [ebx+8], -1
mov ebx, dword ptr [ebp-12]
push dword ptr [ebx+136]
mov ebx, dword ptr [ebp-12]
push dword ptr [ebx+12]
lea ebx, [SYMB+98552]
push ebx
call HASHLOOKUPEX
add esp, 12
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 0
jne .Lt_013A
mov eax, dword ptr [ebp-12]
push dword ptr [eax+136]
push dword ptr [ebp-16]
mov eax, dword ptr [ebp-12]
push dword ptr [eax+12]
lea eax, [SYMB+98552]
push eax
call HASHADD
add esp, 16
mov ebx, dword ptr [ebp-16]
mov dword ptr [ebx+16], eax
mov eax, dword ptr [ebp-16]
mov dword ptr [eax+4], 0
jmp .Lt_0139
.Lt_013A:
mov eax, dword ptr [ebp-20]
mov ebx, dword ptr [ebp-16]
mov ecx, dword ptr [eax+16]
mov dword ptr [ebx+16], ecx
mov ecx, dword ptr [ebp-20]
mov ebx, dword ptr [ecx+16]
mov ecx, dword ptr [ebp-16]
mov dword ptr [ebx+4], ecx
mov ecx, dword ptr [ebp-20]
mov ebx, dword ptr [ebp-16]
mov dword ptr [ecx+12], ebx
mov ebx, dword ptr [ebp-16]
mov ecx, dword ptr [ebp-20]
mov dword ptr [ebx+4], ecx
.Lt_0139:
cmp dword ptr [ebp-8], 0
je .Lt_013C
mov ecx, dword ptr [ebp-8]
mov ebx, dword ptr [ebp-16]
mov dword ptr [ecx+20], ebx
jmp .Lt_013B
.Lt_013C:
mov ebx, dword ptr [ebp-16]
mov dword ptr [ebp-4], ebx
.Lt_013B:
mov ebx, dword ptr [ebp-16]
mov dword ptr [ebx+20], 0
mov ebx, dword ptr [ebp-16]
mov dword ptr [ebp-8], ebx
.Lt_0138:
.Lt_0137:
.Lt_0136:
.Lt_0135:
mov ebx, dword ptr [ebp-12]
mov ecx, dword ptr [ebx+160]
mov dword ptr [ebp-12], ecx
jmp .Lt_0133
.Lt_0134:
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ecx+88]
mov ecx, dword ptr [ebp-4]
mov dword ptr [ebx+20], ecx
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ecx+88]
mov ecx, dword ptr [ebp-8]
mov dword ptr [ebx+24], ecx
.Lt_0132:
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBHASHLISTINSERTNAMESPACE, .-SYMBHASHLISTINSERTNAMESPACE
.balign 16

.globl SYMBHASHLISTREMOVENAMESPACE
SYMBHASHLISTREMOVENAMESPACE:
.type SYMBHASHLISTREMOVENAMESPACE, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
.Lt_013D:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+88]
mov eax, dword ptr [ebx+20]
mov dword ptr [ebp-4], eax
.Lt_013F:
cmp dword ptr [ebp-4], 0
je .Lt_0140
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+12]
mov dword ptr [ebp-8], ebx
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebx+4]
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-8], 0
je .Lt_0142
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp-12]
mov dword ptr [eax+4], ebx
cmp dword ptr [ebp-12], 0
je .Lt_0144
mov ebx, dword ptr [ebp-12]
mov eax, dword ptr [ebp-8]
mov dword ptr [ebx+12], eax
.Lt_0144:
.Lt_0143:
jmp .Lt_0141
.Lt_0142:
cmp dword ptr [ebp-12], 0
je .Lt_0146
mov eax, dword ptr [ebp-12]
mov dword ptr [eax+12], 0
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+16]
mov eax, dword ptr [ebp-12]
mov dword ptr [ebx+4], eax
jmp .Lt_0145
.Lt_0146:
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax]
push dword ptr [ebx+136]
mov ebx, dword ptr [ebp-4]
push dword ptr [ebx+16]
lea ebx, [SYMB+98552]
push ebx
call HASHDEL
add esp, 12
.Lt_0145:
.Lt_0141:
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebx+20]
mov dword ptr [ebp-12], eax
push dword ptr [ebp-4]
lea eax, [SYMB+98564]
push eax
call LISTDELNODE
add esp, 8
mov eax, dword ptr [ebp-12]
mov dword ptr [ebp-4], eax
jmp .Lt_013F
.Lt_0140:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+88]
mov dword ptr [ebx+20], 0
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+88]
mov dword ptr [eax+24], 0
.Lt_013E:
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBHASHLISTREMOVENAMESPACE, .-SYMBHASHLISTREMOVENAMESPACE
.balign 16

.globl SYMBLOOKUP
SYMBLOOKUP:
.type SYMBLOOKUP, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
mov dword ptr [ebp-4], 0
.Lt_014B:
mov eax, dword ptr [ebp+12]
mov dword ptr [eax], 265
mov eax, dword ptr [ebp+16]
mov dword ptr [eax], 0
cmp dword ptr [ebp+20], 0
jne .Lt_014E
push offset Lt_015E
push dword ptr [ebp+8]
call HUCASE
add esp, 8
mov eax, offset Lt_015E
mov dword ptr [ebp+8], eax
.Lt_014E:
.Lt_014D:
push dword ptr [ebp+8]
call HASHHASH
add esp, 4
mov dword ptr [ebp-8], eax
mov dword ptr [ebp-12], 0
mov eax, dword ptr [SYMB+40]
mov dword ptr [ebp-16], eax
.Lt_014F:
push dword ptr [ebp-8]
push dword ptr [ebp+8]
mov eax, dword ptr [ebp-16]
lea ebx, [eax+4]
push ebx
call HASHLOOKUPEX
add esp, 12
mov dword ptr [ebp-24], eax
cmp dword ptr [ebp-24], 0
je .Lt_0153
call CHAINPOOLNEXT
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [ebp-24]
mov dword ptr [eax], ebx
mov ebx, dword ptr [ebp-12]
mov dword ptr [ebx+4], 0
mov ebx, dword ptr [ebp-12]
mov dword ptr [ebx+8], 0
mov ebx, dword ptr [ebp-24]
cmp dword ptr [ebx], 6
jne .Lt_0155
mov ebx, dword ptr [ebp-24]
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [ebx+52]
mov dword ptr [eax], ecx
mov ecx, dword ptr [ebp-24]
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [ecx+56]
mov dword ptr [eax], ebx
mov ebx, dword ptr [ebp+16]
cmp dword ptr [ebx], 2
je .Lt_0157
mov ebx, dword ptr [ebp-12]
mov dword ptr [ebp-4], ebx
jmp .Lt_014C
.Lt_0157:
.Lt_0156:
.Lt_0155:
.Lt_0154:
mov ebx, dword ptr [ebp-16]
lea eax, [SYMB+98352]
cmp dword ptr [ebx], eax
je .Lt_0159
mov eax, dword ptr [ebp-12]
mov dword ptr [ebp-4], eax
jmp .Lt_014C
jmp .Lt_0158
.Lt_0159:
lea eax, [SYMB+98352]
cmp dword ptr [SYMB+98516], eax
jne .Lt_015B
mov eax, dword ptr [ebp-12]
mov dword ptr [ebp-4], eax
jmp .Lt_014C
.Lt_015B:
.Lt_015A:
jmp .Lt_0150
.Lt_0158:
.Lt_0153:
.Lt_0152:
mov eax, dword ptr [ebp-16]
mov ebx, dword ptr [eax+16]
mov dword ptr [ebp-16], ebx
.Lt_0151:
cmp dword ptr [ebp-16], 0
jne .Lt_014F
.Lt_0150:
push dword ptr [ebp-8]
push dword ptr [ebp+8]
lea ebx, [SYMB+98552]
push ebx
call HASHLOOKUPEX
add esp, 12
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-12], 0
jne .Lt_015D
mov eax, dword ptr [ebp-20]
mov dword ptr [ebp-4], eax
jmp .Lt_014C
.Lt_015D:
.Lt_015C:
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [ebp-20]
mov dword ptr [eax+4], ebx
mov ebx, dword ptr [ebp-12]
mov dword ptr [ebp-4], ebx
.Lt_014C:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBLOOKUP, .-SYMBLOOKUP

.section .bss
.balign 4
	.lcomm	Lt_015E,129

.section .text
.balign 16

.globl SYMBLOOKUPAT
SYMBLOOKUPAT:
.type SYMBLOOKUPAT, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
mov dword ptr [ebp-4], 0
.Lt_0175:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
cmp ebx, 9
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+72]
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
not ecx
and ebx, ecx
je .Lt_0178
jmp .Lt_0176
.Lt_0178:
.Lt_0177:
cmp dword ptr [ebp+16], 0
jne .Lt_017A
push offset Lt_0187
push dword ptr [ebp+12]
call HUCASE
add esp, 8
mov ecx, offset Lt_0187
mov dword ptr [ebp+12], ecx
.Lt_017A:
.Lt_0179:
push dword ptr [ebp+12]
call HASHHASH
add esp, 4
mov dword ptr [ebp-8], eax
push dword ptr [ebp-8]
push dword ptr [ebp+12]
mov eax, dword ptr [ebp+8]
lea ecx, [eax+68]
push ecx
call HASHLOOKUPEX
add esp, 12
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_017C
cmp dword ptr [ebp+20], 0
jne .Lt_017E
mov dword ptr [ebp-4], 0
jmp .Lt_0176
.Lt_017E:
.Lt_017D:
jmp .Lt_017B
.Lt_017C:
call CHAINPOOLNEXT
mov dword ptr [ebp-16], eax
mov eax, dword ptr [ebp-16]
mov ecx, dword ptr [ebp-12]
mov dword ptr [eax], ecx
mov ecx, dword ptr [ebp-16]
mov dword ptr [ecx+4], 0
mov ecx, dword ptr [ebp-16]
mov dword ptr [ecx+8], 0
mov ecx, dword ptr [ebp-16]
mov dword ptr [ebp-4], ecx
jmp .Lt_0176
.Lt_017B:
mov ecx, dword ptr [ebp+8]
cmp dword ptr [ecx+88], 0
jne .Lt_0180
mov dword ptr [ebp-4], 0
jmp .Lt_0176
.Lt_0180:
.Lt_017F:
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ecx+88]
cmp dword ptr [eax], 0
jne .Lt_0182
mov dword ptr [ebp-4], 0
jmp .Lt_0176
.Lt_0182:
.Lt_0181:
lea eax, [SYMB+98352]
cmp dword ptr [ebp+8], eax
jne .Lt_0184
push dword ptr [ebp-8]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HLOOKUPIMPORTHASH
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_0176
jmp .Lt_0183
.Lt_0184:
push dword ptr [ebp-8]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HLOOKUPIMPORTLIST
add esp, 12
mov dword ptr [ebp-4], eax
.Lt_0183:
.Lt_0176:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBLOOKUPAT, .-SYMBLOOKUPAT

.section .bss
.balign 4
	.lcomm	Lt_0187,129

.section .text
.balign 16

.globl SYMBLOOKUPBYNAMEANDCLASS
SYMBLOOKUPBYNAMEANDCLASS:
.type SYMBLOOKUPBYNAMEANDCLASS, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_0188:
push dword ptr [ebp+24]
push dword ptr [ebp+20]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call SYMBLOOKUPAT
add esp, 16
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
je .Lt_018B
push dword ptr [ebp+16]
push dword ptr [ebp-8]
call SYMBFINDBYCLASS
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_018A
.Lt_018B:
mov dword ptr [ebp-4], 0
.Lt_018A:
.Lt_0189:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size SYMBLOOKUPBYNAMEANDCLASS, .-SYMBLOOKUPBYNAMEANDCLASS
.balign 16

.globl SYMBLOOKUPBYNAMEANDSUFFIX
SYMBLOOKUPBYNAMEANDSUFFIX:
.type SYMBLOOKUPBYNAMEANDSUFFIX, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_018C:
push dword ptr [ebp+24]
push dword ptr [ebp+20]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call SYMBLOOKUPAT
add esp, 16
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
je .Lt_018F
cmp dword ptr [ebp+16], -2147483648
jne .Lt_0191
push dword ptr [ebp+12]
call SYMBGETDEFTYPE
add esp, 4
push eax
push dword ptr [ebp-8]
call SYMBFINDVARBYDEFTYPE
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_0190
.Lt_0191:
push dword ptr [ebp+16]
push dword ptr [ebp-8]
call SYMBFINDVARBYSUFFIX
add esp, 8
mov dword ptr [ebp-4], eax
.Lt_0190:
jmp .Lt_018E
.Lt_018F:
mov dword ptr [ebp-4], 0
.Lt_018E:
.Lt_018D:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size SYMBLOOKUPBYNAMEANDSUFFIX, .-SYMBLOOKUPBYNAMEANDSUFFIX
.balign 16

.globl SYMBFINDBYCLASS
SYMBFINDBYCLASS:
.type SYMBFINDBYCLASS, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_0192:
mov dword ptr [ebp-12], 0
.Lt_0194:
cmp dword ptr [ebp+8], 0
je .Lt_0195
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-8], ebx
.Lt_0196:
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebp+12]
cmp dword ptr [ebx], eax
jne .Lt_019A
mov dword ptr [ebp-12], -1
jmp .Lt_0195
.Lt_019A:
.Lt_0199:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+144]
mov dword ptr [ebp-8], ebx
.Lt_0198:
cmp dword ptr [ebp-8], 0
jne .Lt_0196
.Lt_0197:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
mov dword ptr [ebp+8], eax
jmp .Lt_0194
.Lt_0195:
cmp dword ptr [ebp-12], 0
jne .Lt_019C
mov dword ptr [ebp-4], 0
jmp .Lt_0193
.Lt_019C:
.Lt_019B:
mov eax, dword ptr [ebp-8]
cmp dword ptr [eax], 1
jne .Lt_019E
push dword ptr [ebp-8]
call SYMBVARCHECKACCESS
add esp, 4
test eax, eax
je .Lt_01A0
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
jmp .Lt_0193
jmp .Lt_019F
.Lt_01A0:
mov dword ptr [ebp-4], 0
jmp .Lt_0193
.Lt_019F:
.Lt_019E:
.Lt_019D:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0193:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBFINDBYCLASS, .-SYMBFINDBYCLASS
.balign 16

.globl SYMBFINDVARBYSUFFIX
SYMBFINDVARBYSUFFIX:
.type SYMBFINDVARBYSUFFIX, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_01A1:
cmp dword ptr [ebp+12], 16
jne .Lt_01A4
.Lt_01A5:
cmp dword ptr [ebp+8], 0
je .Lt_01A6
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-8], ebx
.Lt_01A7:
mov ebx, dword ptr [ebp-8]
cmp dword ptr [ebx], 1
jne .Lt_01AB
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx+24]
and eax, 511
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 16
je .Lt_01AF
.Lt_01B0:
cmp dword ptr [ebp-12], 17
je .Lt_01AF
.Lt_01B1:
cmp dword ptr [ebp-12], 3
jne .Lt_01AE
.Lt_01AF:
jmp .Lt_01B2
.Lt_01AE:
.Lt_01AC:
.Lt_01AB:
.Lt_01AA:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+144]
mov dword ptr [ebp-8], ebx
.Lt_01A9:
cmp dword ptr [ebp-8], 0
jne .Lt_01A7
.Lt_01A8:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
mov dword ptr [ebp+8], eax
jmp .Lt_01A5
.Lt_01A6:
jmp .Lt_01A3
.Lt_01A4:
.Lt_01B3:
cmp dword ptr [ebp+8], 0
je .Lt_01B4
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-8], ebx
.Lt_01B5:
mov ebx, dword ptr [ebp-8]
cmp dword ptr [ebx], 1
jne .Lt_01B9
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx+24]
and eax, 511
mov ebx, dword ptr [ebp+12]
cmp eax, ebx
jne .Lt_01BB
jmp .Lt_01B2
.Lt_01BB:
.Lt_01BA:
.Lt_01B9:
.Lt_01B8:
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx+144]
mov dword ptr [ebp-8], eax
.Lt_01B7:
cmp dword ptr [ebp-8], 0
jne .Lt_01B5
.Lt_01B6:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp+8], ebx
jmp .Lt_01B3
.Lt_01B4:
.Lt_01A3:
mov dword ptr [ebp-4], 0
jmp .Lt_01A2
.Lt_01B2:
push dword ptr [ebp-8]
call SYMBVARCHECKACCESS
add esp, 4
test eax, eax
je .Lt_01BD
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
jmp .Lt_01BC
.Lt_01BD:
mov dword ptr [ebp-4], 0
.Lt_01BC:
.Lt_01A2:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBFINDVARBYSUFFIX, .-SYMBFINDVARBYSUFFIX
.balign 16

.globl SYMBFINDVARBYDEFTYPE
SYMBFINDVARBYDEFTYPE:
.type SYMBFINDVARBYDEFTYPE, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_01BE:
cmp dword ptr [ebp+12], 16
jne .Lt_01C1
.Lt_01C2:
cmp dword ptr [ebp+8], 0
je .Lt_01C3
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-8], ebx
.Lt_01C4:
mov ebx, dword ptr [ebp-8]
cmp dword ptr [ebx], 1
jne .Lt_01C8
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx+4]
and eax, 268435456
test eax, eax
je .Lt_01CA
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+24]
mov dword ptr [ebp-12], ebx
cmp dword ptr [ebp-12], 16
je .Lt_01CE
.Lt_01CF:
cmp dword ptr [ebp-12], 17
je .Lt_01CE
.Lt_01D0:
cmp dword ptr [ebp-12], 3
jne .Lt_01CD
.Lt_01CE:
jmp .Lt_01D1
.Lt_01CD:
.Lt_01CB:
jmp .Lt_01C9
.Lt_01CA:
jmp .Lt_01D1
.Lt_01C9:
.Lt_01C8:
.Lt_01C7:
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx+144]
mov dword ptr [ebp-8], eax
.Lt_01C6:
cmp dword ptr [ebp-8], 0
jne .Lt_01C4
.Lt_01C5:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp+8], ebx
jmp .Lt_01C2
.Lt_01C3:
jmp .Lt_01C0
.Lt_01C1:
.Lt_01D2:
cmp dword ptr [ebp+8], 0
je .Lt_01D3
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx]
mov dword ptr [ebp-8], eax
.Lt_01D4:
mov eax, dword ptr [ebp-8]
cmp dword ptr [eax], 1
jne .Lt_01D8
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+4]
and ebx, 268435456
test ebx, ebx
je .Lt_01DA
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx+24]
and eax, 511
mov ebx, dword ptr [ebp+12]
cmp eax, ebx
jne .Lt_01DC
jmp .Lt_01D1
.Lt_01DC:
.Lt_01DB:
jmp .Lt_01D9
.Lt_01DA:
jmp .Lt_01D1
.Lt_01D9:
.Lt_01D8:
.Lt_01D7:
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx+144]
mov dword ptr [ebp-8], eax
.Lt_01D6:
cmp dword ptr [ebp-8], 0
jne .Lt_01D4
.Lt_01D5:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp+8], ebx
jmp .Lt_01D2
.Lt_01D3:
.Lt_01C0:
mov dword ptr [ebp-4], 0
jmp .Lt_01BF
.Lt_01D1:
push dword ptr [ebp-8]
call SYMBVARCHECKACCESS
add esp, 4
test eax, eax
je .Lt_01DE
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
jmp .Lt_01DD
.Lt_01DE:
mov dword ptr [ebp-4], 0
.Lt_01DD:
.Lt_01BF:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBFINDVARBYDEFTYPE, .-SYMBFINDVARBYDEFTYPE
.balign 16

.globl SYMBFINDVARBYTYPE
SYMBFINDVARBYTYPE:
.type SYMBFINDVARBYTYPE, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_01DF:
.Lt_01E1:
cmp dword ptr [ebp+8], 0
je .Lt_01E2
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-8], ebx
.Lt_01E3:
mov ebx, dword ptr [ebp-8]
cmp dword ptr [ebx], 1
jne .Lt_01E7
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebp+12]
cmp dword ptr [ebx+24], eax
jne .Lt_01E9
jmp .Lt_01EA
.Lt_01E9:
.Lt_01E8:
.Lt_01E7:
.Lt_01E6:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+144]
mov dword ptr [ebp-8], ebx
.Lt_01E5:
cmp dword ptr [ebp-8], 0
jne .Lt_01E3
.Lt_01E4:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
mov dword ptr [ebp+8], eax
jmp .Lt_01E1
.Lt_01E2:
mov dword ptr [ebp-4], 0
jmp .Lt_01E0
.Lt_01EA:
push dword ptr [ebp-8]
call SYMBVARCHECKACCESS
add esp, 4
test eax, eax
je .Lt_01EC
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
jmp .Lt_01EB
.Lt_01EC:
mov dword ptr [ebp-4], 0
.Lt_01EB:
.Lt_01E0:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBFINDVARBYTYPE, .-SYMBFINDVARBYTYPE
.balign 16

.globl SYMBDELFROMCHAINLIST
SYMBDELFROMCHAINLIST:
.type SYMBDELFROMCHAINLIST, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_01ED:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+140]
mov dword ptr [ebp-4], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+144]
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-4], 0
je .Lt_01F0
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [ebp-8]
mov dword ptr [eax+144], ebx
cmp dword ptr [ebp-8], 0
je .Lt_01F2
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebp-4]
mov dword ptr [ebx+140], eax
.Lt_01F2:
.Lt_01F1:
jmp .Lt_01EF
.Lt_01F0:
cmp dword ptr [ebp-8], 0
je .Lt_01F4
mov eax, dword ptr [ebp-8]
mov dword ptr [eax+140], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+132]
mov eax, dword ptr [ebp-8]
mov dword ptr [ebx+4], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebx+132]
mov ebx, dword ptr [eax+12]
mov dword ptr [ecx], ebx
jmp .Lt_01F3
.Lt_01F4:
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+136]
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+132]
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebx+128]
lea ebx, [ecx+4]
push ebx
call HASHDEL
add esp, 12
.Lt_01F3:
.Lt_01EF:
.Lt_01EE:
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBDELFROMCHAINLIST, .-SYMBDELFROMCHAINLIST
.balign 16

.globl SYMBDELFROMHASH
SYMBDELFROMHASH:
.type SYMBDELFROMHASH, @function
push ebp
mov ebp, esp
.Lt_01F5:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+132], 0
jne .Lt_01F8
jmp .Lt_01F6
.Lt_01F8:
.Lt_01F7:
push dword ptr [ebp+8]
call SYMBDELFROMCHAINLIST
add esp, 4
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+132], 0
.Lt_01F6:
mov esp, ebp
pop ebp
ret
.size SYMBDELFROMHASH, .-SYMBDELFROMHASH
.balign 16

.globl SYMBFREESYMBOL
SYMBFREESYMBOL:
.type SYMBFREESYMBOL, @function
push ebp
mov ebp, esp
push ebx
.Lt_01F9:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+24]
and ebx, 31
cmp ebx, 21
jne .Lt_01FC
push dword ptr [ebp+8]
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+28]
call SYMBREMOVEFROMFWDREF
add esp, 8
.Lt_01FC:
.Lt_01FB:
push dword ptr [ebp+8]
call SYMBDELFROMHASH
add esp, 4
push dword ptr [ebp+8]
call SYMBFREESYMBOL_UNLINKONLY
add esp, 4
push dword ptr [ebp+8]
call SYMBFREESYMBOL_REMONLY
add esp, 4
.Lt_01FA:
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBFREESYMBOL, .-SYMBFREESYMBOL
.balign 16

.globl SYMBFREESYMBOL_REMONLY
SYMBFREESYMBOL_REMONLY:
.type SYMBFREESYMBOL_REMONLY, @function
push ebp
mov ebp, esp
.Lt_01FD:
mov eax, dword ptr [ebp+8]
push dword ptr [eax+12]
lea eax, [SYMB+98596]
push eax
call POOLDELITEM
add esp, 8
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+16], 0
je .Lt_0200
mov eax, dword ptr [ebp+8]
push dword ptr [eax+16]
call free
add esp, 4
.Lt_0200:
.Lt_01FF:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+20], 0
je .Lt_0202
mov eax, dword ptr [ebp+8]
push dword ptr [eax+20]
call free
add esp, 4
.Lt_0202:
.Lt_0201:
push dword ptr [ebp+8]
lea eax, [SYMB+4]
push eax
call LISTDELNODE
add esp, 8
.Lt_01FE:
mov esp, ebp
pop ebp
ret
.size SYMBFREESYMBOL_REMONLY, .-SYMBFREESYMBOL_REMONLY
.balign 16

.globl SYMBFREESYMBOL_UNLINKONLY
SYMBFREESYMBOL_UNLINKONLY:
.type SYMBFREESYMBOL_UNLINKONLY, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
.Lt_0203:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+148]
mov dword ptr [ebp-4], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+156]
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+160]
mov dword ptr [ebp-12], ebx
cmp dword ptr [ebp-8], 0
je .Lt_0206
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebp-12]
mov dword ptr [ebx+160], eax
jmp .Lt_0205
.Lt_0206:
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [ebp-12]
mov dword ptr [eax+4], ebx
.Lt_0205:
cmp dword ptr [ebp-12], 0
je .Lt_0208
mov ebx, dword ptr [ebp-12]
mov eax, dword ptr [ebp-8]
mov dword ptr [ebx+156], eax
jmp .Lt_0207
.Lt_0208:
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [ebp-8]
mov dword ptr [eax+8], ebx
.Lt_0207:
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+156], 0
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+160], 0
.Lt_0204:
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBFREESYMBOL_UNLINKONLY, .-SYMBFREESYMBOL_UNLINKONLY
.balign 16

.globl SYMBDELSYMBOL
SYMBDELSYMBOL:
.type SYMBDELSYMBOL, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0209:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-4], ebx
jmp .Lt_020C
.Lt_020E:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call SYMBDELVAR
add esp, 8
jmp .Lt_020B
.Lt_020F:
push dword ptr [ebp+8]
call SYMBDELCONST
add esp, 4
jmp .Lt_020B
.Lt_0210:
push dword ptr [ebp+8]
call SYMBDELPROTOTYPE
add esp, 4
jmp .Lt_020B
.Lt_0211:
push dword ptr [ebp+8]
call SYMBDELDEFINE
add esp, 4
jmp .Lt_020B
.Lt_0212:
push dword ptr [ebp+8]
call SYMBDELLABEL
add esp, 4
jmp .Lt_020B
.Lt_0213:
push dword ptr [ebp+8]
call SYMBDELENUM
add esp, 4
jmp .Lt_020B
.Lt_0214:
push dword ptr [ebp+8]
call SYMBDELSTRUCT
add esp, 4
jmp .Lt_020B
.Lt_0215:
push dword ptr [ebp+8]
call SYMBDELSCOPE
add esp, 4
jmp .Lt_020B
.Lt_0216:
push dword ptr [ebp+8]
call SYMBDELNAMESPACE
add esp, 4
jmp .Lt_020B
.Lt_0217:
push 0
push dword ptr [ebp+8]
call SYMBNAMESPACEREMOVE
add esp, 8
jmp .Lt_020B
.Lt_0218:
push dword ptr [ebp+8]
call SYMBFREESYMBOL
add esp, 4
jmp .Lt_020B
.Lt_020C:
mov ebx, dword ptr [ebp-4]
add ebx, 4294967295
cmp ebx, 15
ja .Lt_0218
mov ebx, dword ptr [ebp-4]
jmp dword ptr [.LT_0219+ebx*4-4]
.LT_0219:
.int .Lt_020E
.int .Lt_020F
.int .Lt_0210
.int .Lt_0218
.int .Lt_0211
.int .Lt_0218
.int .Lt_0212
.int .Lt_0216
.int .Lt_0213
.int .Lt_0214
.int .Lt_0218
.int .Lt_020E
.int .Lt_0218
.int .Lt_0218
.int .Lt_0215
.int .Lt_0217
.Lt_020B:
.Lt_020A:
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBDELSYMBOL, .-SYMBDELSYMBOL
.balign 16

.globl SYMBCLONESYMBOL
SYMBCLONESYMBOL:
.type SYMBCLONESYMBOL, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
mov dword ptr [ebp-4], 0
.Lt_021A:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-16], ebx
jmp .Lt_021D
.Lt_021F:
push dword ptr [ebp+8]
call SYMBADDPROCPTRFROMFUNCTION
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_021C
.Lt_0220:
push dword ptr [ebp+8]
call SYMBCLONEVAR
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_021C
.Lt_0221:
push dword ptr [ebp+8]
call SYMBCLONECONST
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_021C
.Lt_0222:
push dword ptr [ebp+8]
call SYMBCLONELABEL
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_021C
.Lt_0223:
lea eax, [ebp-12]
push eax
lea eax, [ebp-8]
push eax
push dword ptr [ebp+8]
call SYMBGETDESCTYPEARRAYDTYPE
add esp, 12
push dword ptr [ebp-12]
push dword ptr [ebp-8]
push dword ptr [ebp+8]
call SYMBGETDESCTYPEDIMENSIONS
add esp, 4
push eax
call SYMBADDARRAYDESCRIPTORTYPE
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_021C
.Lt_0224:
mov dword ptr [ebp-4], 0
jmp .Lt_021C
.Lt_021D:
mov eax, dword ptr [ebp-16]
add eax, 4294967295
cmp eax, 9
ja .Lt_0224
mov eax, dword ptr [ebp-16]
jmp dword ptr [.LT_0225+eax*4-4]
.LT_0225:
.int .Lt_0220
.int .Lt_0221
.int .Lt_021F
.int .Lt_0224
.int .Lt_0224
.int .Lt_0224
.int .Lt_0222
.int .Lt_0224
.int .Lt_0224
.int .Lt_0223
.Lt_021C:
.Lt_021B:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBCLONESYMBOL, .-SYMBCLONESYMBOL
.balign 16

.globl SYMBDELGLOBALTB
SYMBDELGLOBALTB:
.type SYMBDELGLOBALTB, @function
push ebp
mov ebp, esp
sub esp, 4
.Lt_0226:
.Lt_0228:
mov eax, dword ptr [SYMB+98412]
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
jne .Lt_022C
jmp .Lt_0229
.Lt_022C:
.Lt_022B:
push -1
push dword ptr [ebp-4]
call SYMBDELSYMBOL
add esp, 8
.Lt_022A:
jmp .Lt_0228
.Lt_0229:
.Lt_0227:
mov esp, ebp
pop ebp
ret
.size SYMBDELGLOBALTB, .-SYMBDELGLOBALTB
.balign 16

.globl SYMBDELSYMBOLTB
SYMBDELSYMBOLTB:
.type SYMBDELSYMBOLTB, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_022D:
cmp dword ptr [ebp+12], 0
je .Lt_0230
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-4], ebx
.Lt_0231:
cmp dword ptr [ebp-4], 0
je .Lt_0232
push dword ptr [ebp-4]
call SYMBDELFROMHASH
add esp, 4
mov ebx, dword ptr [ebp-4]
cmp dword ptr [ebx], 16
jne .Lt_0234
push -1
push dword ptr [ebp-4]
call SYMBNAMESPACEREMOVE
add esp, 8
.Lt_0234:
.Lt_0233:
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebx+160]
mov dword ptr [ebp-4], eax
jmp .Lt_0231
.Lt_0232:
jmp .Lt_022F
.Lt_0230:
.Lt_0235:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+8]
mov dword ptr [ebp-4], ebx
cmp dword ptr [ebp-4], 0
jne .Lt_0239
jmp .Lt_0236
.Lt_0239:
.Lt_0238:
push -1
push dword ptr [ebp-4]
call SYMBDELSYMBOL
add esp, 8
.Lt_0237:
jmp .Lt_0235
.Lt_0236:
.Lt_022F:
.Lt_022E:
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBDELSYMBOLTB, .-SYMBDELSYMBOLTB
.balign 16

.globl SYMBHASCTOR
SYMBHASCTOR:
.type SYMBHASCTOR, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_023A:
mov eax, dword ptr [ebp+8]
push dword ptr [eax+28]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+24]
call TYPEHASCTOR
add esp, 8
mov dword ptr [ebp-4], eax
.Lt_023B:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size SYMBHASCTOR, .-SYMBHASCTOR
.balign 16

.globl SYMBHASDEFCTOR
SYMBHASDEFCTOR:
.type SYMBHASDEFCTOR, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_023C:
mov eax, dword ptr [ebp+8]
push dword ptr [eax+28]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+24]
call TYPEHASDEFCTOR
add esp, 8
mov dword ptr [ebp-4], eax
.Lt_023D:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size SYMBHASDEFCTOR, .-SYMBHASDEFCTOR
.balign 16

.globl SYMBHASDTOR
SYMBHASDTOR:
.type SYMBHASDTOR, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_023E:
mov eax, dword ptr [ebp+8]
push dword ptr [eax+28]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+24]
call TYPEHASDTOR
add esp, 8
mov dword ptr [ebp-4], eax
.Lt_023F:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size SYMBHASDTOR, .-SYMBHASDTOR
.balign 16

.globl SYMBISDATADESC
SYMBISDATADESC:
.type SYMBISDATADESC, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_0240:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+24]
and ebx, 511
cmp ebx, 18
jne .Lt_0243
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+28]
cmp eax, dword ptr [AST+116]
sete bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-4], ebx
.Lt_0243:
.Lt_0242:
.Lt_0241:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBISDATADESC, .-SYMBISDATADESC
.balign 16

.globl SYMBISARRAY
SYMBISARRAY:
.type SYMBISARRAY, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0245:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-8], ebx
cmp dword ptr [ebp-8], 1
je .Lt_024A
.Lt_024B:
cmp dword ptr [ebp-8], 12
jne .Lt_0249
.Lt_024A:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+56]
test eax, eax
setne al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-4], eax
jmp .Lt_0247
.Lt_0249:
mov dword ptr [ebp-4], 0
.Lt_024C:
.Lt_0247:
.Lt_0246:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBISARRAY, .-SYMBISARRAY
.balign 16

.globl SYMBISSTRING
SYMBISSTRING:
.type SYMBISSTRING, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_024E:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-8], eax
jmp .Lt_0251
.Lt_0253:
mov dword ptr [ebp-4], -1
jmp .Lt_0250
.Lt_0254:
mov dword ptr [ebp-4], 0
jmp .Lt_0250
.Lt_0251:
mov eax, dword ptr [ebp-8]
add eax, 4294967293
cmp eax, 14
ja .Lt_0254
mov eax, dword ptr [ebp-8]
jmp dword ptr [.LT_0255+eax*4-12]
.LT_0255:
.int .Lt_0253
.int .Lt_0254
.int .Lt_0254
.int .Lt_0253
.int .Lt_0254
.int .Lt_0254
.int .Lt_0254
.int .Lt_0254
.int .Lt_0254
.int .Lt_0254
.int .Lt_0254
.int .Lt_0254
.int .Lt_0254
.int .Lt_0253
.int .Lt_0253
.Lt_0250:
.Lt_024F:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size SYMBISSTRING, .-SYMBISSTRING
.balign 16

.globl SYMBISEQUAL
SYMBISEQUAL:
.type SYMBISEQUAL, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
mov dword ptr [ebp-4], 0
.Lt_0256:
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+12]
cmp dword ptr [ebp+8], eax
jne .Lt_0259
mov dword ptr [ebp-4], -1
jmp .Lt_0257
.Lt_0259:
.Lt_0258:
cmp dword ptr [ebp+8], 0
sete al
shr eax, 1
sbb eax, eax
cmp dword ptr [ebp+12], 0
sete bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
je .Lt_025B
jmp .Lt_0257
.Lt_025B:
.Lt_025A:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax]
cmp dword ptr [ebx], ecx
je .Lt_025D
jmp .Lt_0257
.Lt_025D:
.Lt_025C:
mov ecx, dword ptr [ebp+8]
cmp dword ptr [ecx], 14
jne .Lt_025F
mov dword ptr [ebp-4], 0
jmp .Lt_0257
.Lt_025F:
.Lt_025E:
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+24]
cmp dword ptr [ecx+24], eax
je .Lt_0261
jmp .Lt_0257
.Lt_0261:
.Lt_0260:
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax]
mov dword ptr [ebp-16], ecx
cmp dword ptr [ebp-16], 10
jne .Lt_0264
.Lt_0265:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call SYMBGETUDTBASELEVEL
add esp, 8
test eax, eax
setg al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-4], eax
jmp .Lt_0257
jmp .Lt_0262
.Lt_0264:
cmp dword ptr [ebp-16], 9
jne .Lt_0266
.Lt_0267:
jmp .Lt_0257
jmp .Lt_0262
.Lt_0266:
cmp dword ptr [ebp-16], 3
jne .Lt_0268
.Lt_0269:
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+4]
and ecx, 33554432
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 33554432
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
cmp ecx, ebx
je .Lt_026B
jmp .Lt_0257
.Lt_026B:
.Lt_026A:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call SYMBAREPROCMODESEQUAL
add esp, 8
test eax, eax
jne .Lt_026D
jmp .Lt_0257
.Lt_026D:
.Lt_026C:
mov eax, dword ptr [ebp+8]
movsx ebx, word ptr [eax+64]
mov eax, dword ptr [ebp+12]
movsx ecx, word ptr [eax+64]
cmp ebx, ecx
je .Lt_026F
jmp .Lt_0257
.Lt_026F:
.Lt_026E:
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ecx+72]
mov dword ptr [ebp-8], ebx
mov ebx, dword ptr [ebp+12]
mov ecx, dword ptr [ebx+72]
mov dword ptr [ebp-12], ecx
.Lt_0270:
cmp dword ptr [ebp-8], 0
je .Lt_0271
push dword ptr [ebp-12]
push dword ptr [ebp-8]
call SYMBPARAMISSAME
add esp, 8
test eax, eax
jne .Lt_0273
jmp .Lt_0257
.Lt_0273:
.Lt_0272:
mov eax, dword ptr [ebp-8]
mov ecx, dword ptr [eax+160]
mov dword ptr [ebp-8], ecx
mov ecx, dword ptr [ebp-12]
mov eax, dword ptr [ecx+160]
mov dword ptr [ebp-12], eax
jmp .Lt_0270
.Lt_0271:
.Lt_0268:
.Lt_0262:
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [ebp+12]
mov ebx, dword ptr [ecx+28]
cmp dword ptr [eax+28], ebx
je .Lt_0275
mov ebx, dword ptr [ebp+12]
push dword ptr [ebx+28]
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+28]
call SYMBISEQUAL
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_0274
.Lt_0275:
mov dword ptr [ebp-4], -1
.Lt_0274:
.Lt_0257:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBISEQUAL, .-SYMBISEQUAL
.balign 16

.globl SYMBTYPETOSTR
SYMBTYPETOSTR:
.type SYMBTYPETOSTR, @function
push ebp
mov ebp, esp
sub esp, 48
push ebx
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_027B:
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
cmp dword ptr [ebp+8], -2147483648
jne .Lt_027E
lea eax, [ebp-24]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_027C
.Lt_027E:
.Lt_027D:
mov eax, dword ptr [ebp+8]
and eax, 480
sar eax, 5
mov dword ptr [ebp-32], eax
mov eax, dword ptr [ebp-32]
add eax, 9
mov ebx, 1
mov ecx, eax
sal ebx, cl
and ebx, dword ptr [ebp+8]
test ebx, ebx
je .Lt_0280
push 0
push 7
push offset Lt_0281
push -1
lea ebx, [ebp-24]
push ebx
call fb_StrAssign
add esp, 20
jmp .Lt_027F
.Lt_0280:
push 0
push 1
push offset Lt_0000
push -1
lea ebx, [ebp-24]
push ebx
call fb_StrAssign
add esp, 20
.Lt_027F:
mov ebx, dword ptr [ebp+8]
and ebx, 31
mov dword ptr [ebp-28], ebx
mov ebx, dword ptr [ebp-28]
mov dword ptr [ebp-36], ebx
jmp .Lt_0283
.Lt_0285:
push 0
push -1
push 0
mov ebx, dword ptr [ebp+12]
push dword ptr [ebx+12]
push -1
lea ebx, [ebp-24]
push ebx
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
lea ebx, [ebp-48]
push ebx
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
jmp .Lt_0282
.Lt_0287:
push 0
push -1
push 0
mov eax, dword ptr [ebp-28]
imul eax, 28
push dword ptr [SYMB_DTYPETB+eax+24]
push -1
lea eax, [ebp-24]
push eax
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
lea eax, [ebp-48]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
cmp dword ptr [ebp+20], 0
jl .Lt_028A
jg .Lt_02A3
cmp dword ptr [ebp+16], 0
jbe .Lt_028A
.Lt_02A3:
cmp dword ptr [ebp-28], 17
jne .Lt_028C
.Lt_028D:
add dword ptr [ebp+16], 4294967295
adc dword ptr [ebp+20], 4294967295
jmp .Lt_028B
.Lt_028C:
cmp dword ptr [ebp-28], 6
jne .Lt_028E
.Lt_028F:
mov ebx, dword ptr [SYMB_DTYPETB+172]
mov eax, ebx
sar eax, 31
push eax
push ebx
push dword ptr [ebp+20]
push dword ptr [ebp+16]
call __divdi3
add esp, 16
mov dword ptr [ebp+16], eax
mov dword ptr [ebp+20], edx
.Lt_028E:
.Lt_028B:
push 0
push 4
push offset Lt_0290
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push dword ptr [ebp+20]
push dword ptr [ebp+16]
call fb_LongintToStr
add esp, 8
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_028A:
.Lt_0289:
jmp .Lt_0282
.Lt_0291:
dec dword ptr [ebp-32]
cmp dword ptr [ebp-32], 0
jle .Lt_0293
push 0
push 8
push offset Lt_0294
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_0293:
.Lt_0292:
push 0
push -1
push dword ptr [ebp+12]
call SYMBPROCPTRTOSTR
add esp, 4
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
cmp dword ptr [ebp-32], 0
jle .Lt_0296
push 0
push 2
push offset Lt_0297
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_0296:
.Lt_0295:
jmp .Lt_0282
.Lt_0298:
push 0
push -1
push 0
mov eax, dword ptr [ebp-28]
imul eax, 28
push dword ptr [SYMB_DTYPETB+eax+24]
push -1
lea eax, [ebp-24]
push eax
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
lea eax, [ebp-48]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
jmp .Lt_0282
.Lt_0283:
mov eax, dword ptr [ebp-36]
add eax, 4294967293
cmp eax, 18
ja .Lt_0298
mov eax, dword ptr [ebp-36]
jmp dword ptr [.LT_029A+eax*4-12]
.LT_029A:
.int .Lt_0287
.int .Lt_0298
.int .Lt_0298
.int .Lt_0287
.int .Lt_0298
.int .Lt_0298
.int .Lt_0285
.int .Lt_0298
.int .Lt_0298
.int .Lt_0298
.int .Lt_0298
.int .Lt_0298
.int .Lt_0298
.int .Lt_0298
.int .Lt_0287
.int .Lt_0285
.int .Lt_0298
.int .Lt_0291
.int .Lt_0285
.Lt_0282:
mov eax, dword ptr [ebp-32]
dec eax
mov dword ptr [ebp-36], eax
jmp .Lt_029B
.Lt_029E:
mov eax, dword ptr [ebp-36]
add eax, 9
mov edx, 1
mov ecx, eax
sal edx, cl
and edx, dword ptr [ebp+8]
test edx, edx
je .Lt_02A0
push 0
push 7
push offset Lt_02A1
push -1
lea edx, [ebp-24]
push edx
call fb_StrConcatAssign
add esp, 20
.Lt_02A0:
.Lt_029F:
push 0
push 5
push offset Lt_02A2
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_029C:
dec dword ptr [ebp-36]
.Lt_029B:
cmp dword ptr [ebp-36], 0
jge .Lt_029E
.Lt_029D:
push 0
push -1
lea eax, [ebp-24]
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-24]
push eax
call fb_StrDelete
add esp, 4
.Lt_027C:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBTYPETOSTR, .-SYMBTYPETOSTR
.balign 16

.globl SYMBGETDEFTYPE
SYMBGETDEFTYPE:
.type SYMBGETDEFTYPE, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_02A4:
mov eax, dword ptr [ebp+8]
movzx ebx, byte ptr [eax]
mov dword ptr [ebp-8], ebx
cmp dword ptr [ebp-8], 97
setae bl
shr ebx, 1
sbb ebx, ebx
cmp dword ptr [ebp-8], 122
setbe al
shr eax, 1
sbb eax, eax
and ebx, eax
je .Lt_02A9
mov eax, dword ptr [ebp-8]
add eax, 4294967264
mov ebx, eax
mov dword ptr [ebp-8], ebx
.Lt_02A9:
.Lt_02A8:
mov ebx, dword ptr [ebp-8]
add ebx, 4294967231
mov eax, ebx
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp-12]
test eax, eax
setl al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp-12]
cmp ebx, 30
setg bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
je .Lt_02AB
cmp dword ptr [ENV+136], 3
jne .Lt_02AD
mov dword ptr [ebp-4], 14
jmp .Lt_02AC
.Lt_02AD:
mov dword ptr [ebp-4], 7
.Lt_02AC:
jmp .Lt_02AA
.Lt_02AB:
mov ebx, dword ptr [ebp-12]
mov eax, dword ptr [DEFTYPETB+ebx*4]
mov dword ptr [ebp-4], eax
.Lt_02AA:
.Lt_02A5:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBGETDEFTYPE, .-SYMBGETDEFTYPE
.balign 16

.globl SYMBSETDEFTYPE
SYMBSETDEFTYPE:
.type SYMBSETDEFTYPE, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_02B2:
cmp dword ptr [ebp+8], 65
jae .Lt_02B5
mov dword ptr [ebp+8], 65
jmp .Lt_02B4
.Lt_02B5:
cmp dword ptr [ebp+8], 95
jbe .Lt_02B6
mov dword ptr [ebp+8], 95
.Lt_02B6:
.Lt_02B4:
cmp dword ptr [ebp+12], 65
jae .Lt_02B8
mov dword ptr [ebp+12], 65
jmp .Lt_02B7
.Lt_02B8:
cmp dword ptr [ebp+12], 95
jbe .Lt_02B9
mov dword ptr [ebp+12], 95
.Lt_02B9:
.Lt_02B7:
mov eax, dword ptr [ebp+12]
cmp dword ptr [ebp+8], eax
jle .Lt_02BB
push dword ptr [ebp+8]
mov eax, dword ptr [ebp+12]
mov dword ptr [ebp+8], eax
pop dword ptr [ebp+12]
.Lt_02BB:
.Lt_02BA:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp+12]
mov dword ptr [ebp-8], eax
jmp .Lt_02BD
.Lt_02C0:
mov eax, dword ptr [ebp-4]
add eax, 4294967231
mov ebx, eax
mov eax, dword ptr [ebp+16]
mov dword ptr [DEFTYPETB+ebx*4], eax
.Lt_02BE:
inc dword ptr [ebp-4]
.Lt_02BD:
mov eax, dword ptr [ebp-8]
cmp dword ptr [ebp-4], eax
jle .Lt_02C0
.Lt_02BF:
.Lt_02B3:
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBSETDEFTYPE, .-SYMBSETDEFTYPE
.balign 16

.globl SYMBRECALCLEN
SYMBRECALCLEN:
.type SYMBRECALCLEN, @function
push ebp
mov ebp, esp
push ebx
.Lt_02C1:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 4
jne .Lt_02C4
mov eax, dword ptr [ebp+8]
push dword ptr [eax+52]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+28]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+24]
call SYMBCALCPARAMLEN
add esp, 12
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+36], eax
mov dword ptr [ebx+40], edx
jmp .Lt_02C3
.Lt_02C4:
mov eax, dword ptr [ebp+8]
push dword ptr [eax+28]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+24]
call SYMBCALCLEN
add esp, 8
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+36], eax
mov dword ptr [ebx+40], edx
.Lt_02C3:
.Lt_02C2:
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBRECALCLEN, .-SYMBRECALCLEN
.balign 16

.globl SYMBSETTYPE
SYMBSETTYPE:
.type SYMBSETTYPE, @function
push ebp
mov ebp, esp
push ebx
.Lt_02C5:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+12]
mov dword ptr [eax+24], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp+16]
mov dword ptr [ebx+28], eax
push dword ptr [ebp+8]
call SYMBRECALCLEN
add esp, 4
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 3
jne .Lt_02C8
push dword ptr [ebp+8]
call SYMBPROCRECALCREALTYPE
add esp, 4
.Lt_02C8:
.Lt_02C7:
mov eax, dword ptr [ebp+12]
and eax, 31
cmp eax, 21
jne .Lt_02CA
push dword ptr [ebp+8]
push dword ptr [ebp+16]
call SYMBADDTOFWDREF
add esp, 8
.Lt_02CA:
.Lt_02C9:
.Lt_02C6:
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBSETTYPE, .-SYMBSETTYPE
.balign 16

.globl SYMBCALCLEN
SYMBCALCLEN:
.type SYMBCALCLEN, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_02CB:
mov eax, dword ptr [ebp+8]
and eax, 480
je .Lt_02CD
mov dword ptr [ebp-12], 22
jmp .Lt_02D8
.Lt_02CD:
mov eax, dword ptr [ebp+8]
and eax, 31
mov dword ptr [ebp-12], eax
.Lt_02D8:
mov eax, dword ptr [ebp-12]
mov dword ptr [ebp+8], eax
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-16], eax
jmp .Lt_02D0
.Lt_02D2:
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
jmp .Lt_02CF
.Lt_02D3:
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax+36]
mov ebx, dword ptr [eax+40]
mov dword ptr [ebp-8], ecx
mov dword ptr [ebp-4], ebx
jmp .Lt_02CF
.Lt_02D4:
mov ecx, dword ptr [ebp+8]
and ecx, 480
je .Lt_02D5
mov dword ptr [ebp-20], 22
jmp .Lt_02D9
.Lt_02D5:
mov ecx, dword ptr [ebp+8]
and ecx, 31
mov dword ptr [ebp-20], ecx
.Lt_02D9:
mov ecx, dword ptr [ebp-20]
imul ecx, 28
mov eax, dword ptr [SYMB_DTYPETB+ecx+4]
mov ebx, eax
sar ebx, 31
mov dword ptr [ebp-8], eax
mov dword ptr [ebp-4], ebx
jmp .Lt_02CF
.Lt_02D0:
mov eax, dword ptr [ebp-16]
add eax, 4294967279
cmp eax, 1
ja .Lt_02D4
mov eax, dword ptr [ebp-16]
jmp dword ptr [.LT_02D7+eax*4-68]
.LT_02D7:
.int .Lt_02D2
.int .Lt_02D3
.Lt_02CF:
.Lt_02CC:
mov eax, dword ptr [ebp-8]
mov edx, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBCALCLEN, .-SYMBCALCLEN
.balign 16

.globl SYMBCALCDEREFLEN
SYMBCALCDEREFLEN:
.type SYMBCALCDEREFLEN, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_02DA:
push dword ptr [ebp+12]
mov eax, dword ptr [ebp+8]
and eax, 31
mov ebx, dword ptr [ebp+8]
and ebx, 480
add ebx, -32
or eax, ebx
mov ebx, dword ptr [ebp+8]
and ebx, 261632
sar ebx, 1
and ebx, 261632
or eax, ebx
push eax
call SYMBCALCLEN
add esp, 8
mov dword ptr [ebp-16], eax
mov dword ptr [ebp-12], edx
cmp dword ptr [ebp-12], 0
jne .Lt_02DD
cmp dword ptr [ebp-16], 0
jne .Lt_02DD
.Lt_02E0:
cmp dword ptr [ebp+8], 32
jne .Lt_02DF
mov dword ptr [ebp-16], 1
mov dword ptr [ebp-12], 0
.Lt_02DF:
.Lt_02DE:
.Lt_02DD:
.Lt_02DC:
mov edx, dword ptr [ebp-16]
mov eax, dword ptr [ebp-12]
mov dword ptr [ebp-8], edx
mov dword ptr [ebp-4], eax
.Lt_02DB:
mov eax, dword ptr [ebp-8]
mov edx, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBCALCDEREFLEN, .-SYMBCALCDEREFLEN
.balign 16

.globl SYMBCHECKACCESS
SYMBCHECKACCESS:
.type SYMBCHECKACCESS, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_02E1:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 201326592
test ebx, ebx
jne .Lt_02E4
mov dword ptr [ebp-4], -1
jmp .Lt_02E2
.Lt_02E4:
.Lt_02E3:
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebp-8], ebx
.Lt_02E5:
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx+128]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-8], ebx
.Lt_02E7:
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx]
cmp eax, 10
sete al
shr eax, 1
sbb eax, eax
not eax
test eax, eax
jne .Lt_02E5
.Lt_02E6:
mov eax, dword ptr [SYMB+98516]
mov dword ptr [ebp-12], eax
.Lt_02E8:
lea eax, [SYMB+98352]
cmp dword ptr [ebp-12], eax
je .Lt_02E9
mov eax, dword ptr [ebp-12]
cmp dword ptr [eax], 10
jne .Lt_02EB
mov eax, dword ptr [ebp-8]
cmp dword ptr [ebp-12], eax
jne .Lt_02ED
mov dword ptr [ebp-4], -1
jmp .Lt_02E2
.Lt_02ED:
.Lt_02EC:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 134217728
je .Lt_02EF
push dword ptr [ebp-8]
push dword ptr [ebp-12]
call SYMBGETUDTBASELEVEL
add esp, 8
test eax, eax
jle .Lt_02F1
mov dword ptr [ebp-4], -1
jmp .Lt_02E2
.Lt_02F1:
.Lt_02F0:
.Lt_02EF:
.Lt_02EE:
.Lt_02EB:
.Lt_02EA:
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax+128]
mov eax, dword ptr [ebx]
mov dword ptr [ebp-12], eax
jmp .Lt_02E8
.Lt_02E9:
mov dword ptr [ebp-4], 0
.Lt_02E2:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBCHECKACCESS, .-SYMBCHECKACCESS
.balign 16

.globl SYMBCHECKCONSTASSIGN
SYMBCHECKCONSTASSIGN:
.type SYMBCHECKCONSTASSIGN, @function
push ebp
mov ebp, esp
sub esp, 28
push ebx
mov dword ptr [ebp-4], 0
.Lt_02F3:
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+28]
mov dword ptr [eax], 0
mov eax, dword ptr [ebp+8]
and eax, 261632
mov ebx, dword ptr [ebp+12]
and ebx, 261632
or eax, ebx
test eax, eax
jne .Lt_02F6
mov dword ptr [ebp-4], -1
jmp .Lt_02F4
.Lt_02F6:
.Lt_02F5:
cmp dword ptr [ebp+24], 4
jne .Lt_02F8
mov dword ptr [ebp-4], -1
jmp .Lt_02F4
.Lt_02F8:
.Lt_02F7:
mov eax, dword ptr [ebp+8]
and eax, 480
sar eax, 5
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp+12]
and eax, 480
sar eax, 5
mov dword ptr [ebp-16], eax
mov dword ptr [ebp-8], 0
mov eax, dword ptr [ebp-16]
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp+24], 1
jne .Lt_02FA
.Lt_02FB:
mov dword ptr [ebp-8], 1
mov eax, dword ptr [ebp-16]
inc eax
mov ebx, dword ptr [ebp+28]
mov dword ptr [ebx], eax
mov eax, dword ptr [ebp+8]
and eax, 512
test eax, eax
je .Lt_02FD
mov eax, dword ptr [ebp+28]
inc dword ptr [eax]
.Lt_02FD:
.Lt_02FC:
jmp .Lt_02F9
.Lt_02FA:
cmp dword ptr [ebp+24], 0
jne .Lt_02FE
.Lt_02FF:
mov dword ptr [ebp-8], 1
jmp .Lt_02F9
.Lt_02FE:
inc dword ptr [ebp-20]
.Lt_0300:
.Lt_02F9:
.Lt_0301:
mov eax, dword ptr [ebp-8]
cmp eax, dword ptr [ebp-12]
setle al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp-8]
cmp ebx, dword ptr [ebp-16]
setle bl
shr ebx, 1
sbb ebx, ebx
and eax, ebx
je .Lt_0302
mov ebx, dword ptr [ebp-8]
add ebx, 9
mov eax, 1
mov ecx, ebx
sal eax, cl
and eax, dword ptr [ebp+8]
test eax, eax
setne al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-24], eax
mov eax, dword ptr [ebp-8]
add eax, 9
mov ebx, 1
mov ecx, eax
sal ebx, cl
and ebx, dword ptr [ebp+12]
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-28], ebx
mov ebx, dword ptr [ebp-28]
cmp dword ptr [ebp-24], ebx
jne .Lt_0304
mov ebx, dword ptr [ebp+28]
mov eax, dword ptr [ebp-20]
cmp dword ptr [ebx], eax
jge .Lt_0306
mov eax, dword ptr [ebp+28]
mov ebx, dword ptr [ebp-20]
mov dword ptr [eax], ebx
.Lt_0306:
.Lt_0305:
.Lt_0304:
.Lt_0303:
mov ebx, dword ptr [ebp-24]
not ebx
and ebx, dword ptr [ebp-28]
je .Lt_0308
jmp .Lt_02F4
.Lt_0308:
.Lt_0307:
dec dword ptr [ebp-20]
inc dword ptr [ebp-8]
jmp .Lt_0301
.Lt_0302:
mov dword ptr [ebp-4], -1
.Lt_02F4:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBCHECKCONSTASSIGN, .-SYMBCHECKCONSTASSIGN
.balign 16

.globl SYMBFOREACHGLOBAL
SYMBFOREACHGLOBAL:
.type SYMBFOREACHGLOBAL, @function
push ebp
mov ebp, esp
.Lt_031B:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push dword ptr [SYMB+98408]
call HFOREACHGLOBAL
add esp, 12
.Lt_031C:
mov esp, ebp
pop ebp
ret
.size SYMBFOREACHGLOBAL, .-SYMBFOREACHGLOBAL
.balign 16
fb_ctor__symb:
.type fb_ctor__symb, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__symb, .-fb_ctor__symb
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
HINITDEFTYPETB:
.type HINITDEFTYPETB, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_0067:
mov dword ptr [ebp-4], 0
mov dword ptr [ebp-8], 0
cmp dword ptr [ENV+136], 3
jne .Lt_006A
mov dword ptr [ebp-4], 14
jmp .Lt_0069
.Lt_006A:
mov dword ptr [ebp-4], 7
.Lt_0069:
mov dword ptr [ebp-8], 0
.Lt_006E:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp-4]
mov dword ptr [DEFTYPETB+eax*4], ebx
.Lt_006C:
inc dword ptr [ebp-8]
.Lt_006B:
cmp dword ptr [ebp-8], 30
jle .Lt_006E
.Lt_006D:
.Lt_0068:
pop ebx
mov esp, ebp
pop ebp
ret
.size HINITDEFTYPETB, .-HINITDEFTYPETB
.balign 16
CHAINPOOLNEXT:
.type CHAINPOOLNEXT, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_0147:
inc dword ptr [SYMB+98348]
cmp dword ptr [SYMB+98348], 4096
jl .Lt_014A
mov dword ptr [SYMB+98348], 0
.Lt_014A:
.Lt_0149:
mov eax, dword ptr [SYMB+98348]
imul eax, 24
mov ebx, offset SYMB
add ebx, eax
lea eax, [ebx+44]
mov dword ptr [ebp-4], eax
.Lt_0148:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CHAINPOOLNEXT, .-CHAINPOOLNEXT
.balign 16
HLOOKUPIMPORTHASH:
.type HLOOKUPIMPORTHASH, @function
push ebp
mov ebp, esp
sub esp, 28
push ebx
mov dword ptr [ebp-4], 0
.Lt_015F:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
lea eax, [SYMB+98552]
push eax
call HASHLOOKUPEX
add esp, 12
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0162
mov dword ptr [ebp-4], 0
jmp .Lt_0160
.Lt_0162:
.Lt_0161:
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-16], 0
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-20], eax
.Lt_0163:
mov eax, dword ptr [ebp-20]
mov ebx, dword ptr [eax]
mov eax, dword ptr [ebx+128]
mov ebx, dword ptr [eax]
mov eax, dword ptr [ebx+88]
mov ebx, dword ptr [eax+8]
mov dword ptr [ebp-24], ebx
.Lt_0166:
mov ebx, dword ptr [ebp-24]
mov eax, dword ptr [ebp+8]
cmp dword ptr [ebx+64], eax
jne .Lt_016A
call CHAINPOOLNEXT
mov dword ptr [ebp-28], eax
mov eax, dword ptr [ebp-20]
mov ebx, dword ptr [ebp-28]
mov ecx, dword ptr [eax]
mov dword ptr [ebx], ecx
mov ecx, dword ptr [ebp-28]
mov dword ptr [ecx+4], 0
mov ecx, dword ptr [ebp-28]
mov dword ptr [ecx+8], -1
cmp dword ptr [ebp-12], 0
jne .Lt_016C
mov ecx, dword ptr [ebp-28]
mov dword ptr [ebp-12], ecx
jmp .Lt_016B
.Lt_016C:
mov ecx, dword ptr [ebp-16]
mov ebx, dword ptr [ebp-28]
mov dword ptr [ecx+4], ebx
mov ebx, dword ptr [ebp-12]
mov dword ptr [ebp-4], ebx
jmp .Lt_0160
.Lt_016B:
mov ebx, dword ptr [ebp-28]
mov dword ptr [ebp-16], ebx
.Lt_016A:
.Lt_0169:
mov ebx, dword ptr [ebp-24]
mov ecx, dword ptr [ebx+72]
mov dword ptr [ebp-24], ecx
.Lt_0168:
cmp dword ptr [ebp-24], 0
jne .Lt_0166
.Lt_0167:
mov ecx, dword ptr [ebp-20]
mov ebx, dword ptr [ecx+4]
mov dword ptr [ebp-20], ebx
.Lt_0165:
cmp dword ptr [ebp-20], 0
jne .Lt_0163
.Lt_0164:
mov ebx, dword ptr [ebp-12]
mov dword ptr [ebp-4], ebx
.Lt_0160:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HLOOKUPIMPORTHASH, .-HLOOKUPIMPORTHASH
.balign 16
HLOOKUPIMPORTLIST:
.type HLOOKUPIMPORTLIST, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
mov dword ptr [ebp-4], 0
.Lt_016D:
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-12], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+88]
mov eax, dword ptr [ebx]
mov dword ptr [ebp-16], eax
.Lt_016F:
cmp dword ptr [ebp-16], 0
je .Lt_0170
push dword ptr [ebp+16]
push dword ptr [ebp+12]
mov eax, dword ptr [ebp-16]
mov ebx, dword ptr [eax+52]
lea eax, [ebx+68]
push eax
call HASHLOOKUPEX
add esp, 12
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 0
je .Lt_0172
call CHAINPOOLNEXT
mov dword ptr [ebp-24], eax
mov eax, dword ptr [ebp-24]
mov ebx, dword ptr [ebp-20]
mov dword ptr [eax], ebx
mov ebx, dword ptr [ebp-24]
mov dword ptr [ebx+4], 0
mov ebx, dword ptr [ebp-24]
mov dword ptr [ebx+8], -1
cmp dword ptr [ebp-8], 0
jne .Lt_0174
mov ebx, dword ptr [ebp-24]
mov dword ptr [ebp-8], ebx
jmp .Lt_0173
.Lt_0174:
mov ebx, dword ptr [ebp-12]
mov eax, dword ptr [ebp-24]
mov dword ptr [ebx+4], eax
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
jmp .Lt_016E
.Lt_0173:
mov eax, dword ptr [ebp-24]
mov dword ptr [ebp-12], eax
.Lt_0172:
.Lt_0171:
mov eax, dword ptr [ebp-16]
mov ebx, dword ptr [eax+60]
mov dword ptr [ebp-16], ebx
jmp .Lt_016F
.Lt_0170:
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ebx
.Lt_016E:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HLOOKUPIMPORTLIST, .-HLOOKUPIMPORTLIST
.balign 16
HFOREACHGLOBAL:
.type HFOREACHGLOBAL, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_030D:
.Lt_030F:
cmp dword ptr [ebp+8], 0
je .Lt_0310
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-4], ebx
cmp dword ptr [ebp-4], 8
jne .Lt_0313
.Lt_0314:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+56]
call HFOREACHGLOBAL
add esp, 12
jmp .Lt_0311
.Lt_0313:
cmp dword ptr [ebp-4], 10
jne .Lt_0315
.Lt_0316:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+56]
call HFOREACHGLOBAL
add esp, 12
jmp .Lt_0311
.Lt_0315:
cmp dword ptr [ebp-4], 15
jne .Lt_0317
.Lt_0318:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+60]
call HFOREACHGLOBAL
add esp, 12
jmp .Lt_0311
.Lt_0317:
mov ebx, dword ptr [ebp+12]
cmp dword ptr [ebp-4], ebx
jne .Lt_0319
.Lt_031A:
push dword ptr [ebp+8]
call dword ptr [ebp+16]
add esp, 4
.Lt_0319:
.Lt_0311:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+160]
mov dword ptr [ebp+8], eax
jmp .Lt_030F
.Lt_0310:
.Lt_030E:
pop ebx
mov esp, ebp
pop ebp
ret
.size HFOREACHGLOBAL, .-HFOREACHGLOBAL
	#fbc-1.01.0/src/compiler/symb.bas' compilation took 0.04349398741032928 secs

.section .rodata
.balign 4
Lt_0000:	.ascii	"\0"

.section .bss
.balign 4
	.lcomm	Lt_0052,32
.balign 4
	.lcomm	Lt_0053,32

.globl SYMB
.balign 4
	.lcomm	SYMB,99596
.balign 4
	.lcomm	Lt_0054,32
.balign 4
	.lcomm	Lt_0055,44

.globl ENV
.balign 4
	.comm	ENV,996
.balign 4
	.lcomm	DEFTYPETB,124

.section .rodata
.balign 4
Lt_0281:	.ascii	"const \0"
.balign 4
Lt_0290:	.ascii	" * \0"
.balign 4
Lt_0294:	.ascii	"typeof(\0"
.balign 4
Lt_0297:	.ascii	")\0"
.balign 4
Lt_02A1:	.ascii	" const\0"
.balign 4
Lt_02A2:	.ascii	" ptr\0"

.section .ctors, "aw", @progbits
.int fb_ctor__symb
