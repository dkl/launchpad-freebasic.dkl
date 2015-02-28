	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/ast-node-conv.bas' compilation started at 15:27:33 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl ASTCHECKCONVNONPTRTOPTR
ASTCHECKCONVNONPTRTOPTR:
.type ASTCHECKCONVNONPTRTOPTR, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_0098:
mov eax, dword ptr [ebp+12]
and eax, 480
je .Lt_009A
mov dword ptr [ebp-8], 22
jmp .Lt_00A6
.Lt_009A:
mov eax, dword ptr [ebp+12]
and eax, 31
mov dword ptr [ebp-8], eax
.Lt_00A6:
mov eax, dword ptr [ebp-8]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax], 0
jne .Lt_009D
mov eax, dword ptr [ebp+16]
cmp dword ptr [eax], 16
jne .Lt_009F
push dword ptr [ebp+16]
call ASTCONSTEQZERO
add esp, 4
test eax, eax
je .Lt_00A1
mov dword ptr [ebp-4], 0
jmp .Lt_0099
.Lt_00A1:
.Lt_00A0:
.Lt_009F:
.Lt_009E:
mov eax, dword ptr [ebp+12]
and eax, 480
je .Lt_00A2
mov dword ptr [ebp-12], 22
jmp .Lt_00A7
.Lt_00A2:
mov eax, dword ptr [ebp+12]
and eax, 31
mov dword ptr [ebp-12], eax
.Lt_00A7:
mov eax, dword ptr [ebp-12]
imul eax, 28
mov ebx, dword ptr [ENV+236]
cmp dword ptr [SYMB_DTYPETB+eax+4], ebx
jne .Lt_00A5
mov dword ptr [ebp-4], 0
jmp .Lt_0099
.Lt_00A5:
.Lt_00A4:
.Lt_009D:
.Lt_009C:
push dword ptr [ebp+20]
call HGETTYPEMISMATCHERRMSG
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_0099:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTCHECKCONVNONPTRTOPTR, .-ASTCHECKCONVNONPTRTOPTR
.balign 16

.globl ASTCHECKCONV
ASTCHECKCONV:
.type ASTCHECKCONV, @function
push ebp
mov ebp, esp
sub esp, 36
push ebx
mov dword ptr [ebp-4], 0
.Lt_00D3:
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-8], ebx
mov ebx, dword ptr [ebp+8]
and ebx, 480
je .Lt_00D5
mov dword ptr [ebp-12], 22
jmp .Lt_00F0
.Lt_00D5:
mov ebx, dword ptr [ebp+8]
and ebx, 31
mov dword ptr [ebp-12], ebx
.Lt_00F0:
mov ebx, dword ptr [ebp-12]
cmp ebx, 18
sete bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-24], ebx
mov ebx, dword ptr [ebp-8]
and ebx, 480
je .Lt_00D7
mov dword ptr [ebp-16], 22
jmp .Lt_00F1
.Lt_00D7:
mov ebx, dword ptr [ebp-8]
and ebx, 31
mov dword ptr [ebp-16], ebx
.Lt_00F1:
mov ebx, dword ptr [ebp-16]
cmp ebx, 18
sete bl
shr ebx, 1
sbb ebx, ebx
or ebx, dword ptr [ebp-24]
je .Lt_00DA
mov ebx, dword ptr [ebp+8]
and ebx, 480
je .Lt_00DB
mov dword ptr [ebp-28], 22
jmp .Lt_00F3
.Lt_00DB:
mov ebx, dword ptr [ebp+8]
and ebx, 31
mov dword ptr [ebp-28], ebx
.Lt_00F3:
mov ebx, dword ptr [ebp-28]
cmp ebx, 18
sete bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-36], ebx
mov ebx, dword ptr [ebp-8]
and ebx, 480
je .Lt_00DD
mov dword ptr [ebp-32], 22
jmp .Lt_00F4
.Lt_00DD:
mov ebx, dword ptr [ebp-8]
and ebx, 31
mov dword ptr [ebp-32], ebx
.Lt_00F4:
mov ebx, dword ptr [ebp-32]
cmp ebx, 18
sete bl
shr ebx, 1
sbb ebx, ebx
and ebx, dword ptr [ebp-36]
je .Lt_00E0
push dword ptr [ebp+12]
mov ebx, dword ptr [ebp+16]
push dword ptr [ebx+8]
call SYMBGETUDTBASELEVEL
add esp, 8
test eax, eax
setg al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-4], eax
.Lt_00E0:
.Lt_00DF:
jmp .Lt_00D4
.Lt_00DA:
.Lt_00D9:
mov eax, dword ptr [ebp-8]
and eax, 480
je .Lt_00E1
mov dword ptr [ebp-20], 22
jmp .Lt_00F6
.Lt_00E1:
mov eax, dword ptr [ebp-8]
and eax, 31
mov dword ptr [ebp-20], eax
.Lt_00F6:
mov eax, dword ptr [ebp-20]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax], 2
jne .Lt_00E4
jmp .Lt_00D4
.Lt_00E4:
.Lt_00E3:
push 0
push dword ptr [ebp+16]
push dword ptr [ebp-8]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HCHECKPTR
add esp, 20
test eax, eax
je .Lt_00E6
jmp .Lt_00D4
.Lt_00E6:
.Lt_00E5:
mov eax, dword ptr [ebp-8]
and eax, 480
je .Lt_00E7
mov dword ptr [ebp-24], 22
jmp .Lt_00F7
.Lt_00E7:
mov eax, dword ptr [ebp-8]
and eax, 31
mov dword ptr [ebp-24], eax
.Lt_00F7:
mov eax, dword ptr [ebp-24]
mov dword ptr [ebp-28], eax
cmp dword ptr [ebp-28], 3
je .Lt_00EC
.Lt_00ED:
cmp dword ptr [ebp-28], 6
jne .Lt_00EB
.Lt_00EC:
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax]
cmp ebx, 20
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_00EF
jmp .Lt_00D4
.Lt_00EF:
.Lt_00EE:
.Lt_00EB:
.Lt_00E9:
mov dword ptr [ebp-4], -1
.Lt_00D4:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTCHECKCONV, .-ASTCHECKCONV
.balign 16

.globl ASTNEWCONV
ASTNEWCONV:
.type ASTNEWCONV, @function
push ebp
mov ebp, esp
sub esp, 52
push ebx
mov dword ptr [ebp-4], 0
.Lt_00FE:
cmp dword ptr [ebp+24], 0
je .Lt_0101
mov eax, dword ptr [ebp+24]
mov dword ptr [eax], 0
.Lt_0101:
.Lt_0100:
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-16], ebx
mov ebx, dword ptr [ebp-16]
and ebx, 511
mov eax, dword ptr [ebp+8]
and eax, 511
cmp ebx, eax
jne .Lt_0103
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [ebp+12]
cmp dword ptr [eax+8], ebx
jne .Lt_0105
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebp-16], ebx
je .Lt_0107
mov ebx, dword ptr [ebp+16]
cmp dword ptr [ebx], 16
jne .Lt_0109
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push dword ptr [ebp+16]
call ASTSETTYPE
add esp, 12
mov ebx, dword ptr [ebp+16]
mov dword ptr [ebp-8], ebx
jmp .Lt_0108
.Lt_0109:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 5
call ASTNEWNODE
add esp, 12
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+16]
mov dword ptr [eax+56], ebx
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+20], 0
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+24], 0
.Lt_0108:
jmp .Lt_0106
.Lt_0107:
mov ebx, dword ptr [ebp+16]
mov dword ptr [ebp-8], ebx
.Lt_0106:
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ebx
jmp .Lt_00FF
.Lt_0105:
.Lt_0104:
.Lt_0103:
.Lt_0102:
lea ebx, [ebp-40]
push ebx
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call SYMBFINDCASTOVLPROC
add esp, 16
mov dword ptr [ebp-36], eax
cmp dword ptr [ebp-36], 0
je .Lt_010B
push 0
push 0
push dword ptr [ebp+16]
push dword ptr [ebp-36]
call ASTBUILDCALL
add esp, 16
mov dword ptr [ebp-4], eax
jmp .Lt_00FF
jmp .Lt_010A
.Lt_010B:
cmp dword ptr [ebp-40], 0
je .Lt_010D
mov dword ptr [ebp-4], 0
jmp .Lt_00FF
.Lt_010D:
.Lt_010C:
.Lt_010A:
mov eax, dword ptr [ebp+8]
and eax, 480
je .Lt_010E
mov dword ptr [ebp-36], 22
jmp .Lt_0170
.Lt_010E:
mov eax, dword ptr [ebp+8]
and eax, 31
mov dword ptr [ebp-36], eax
.Lt_0170:
mov eax, dword ptr [ebp-36]
mov dword ptr [ebp-40], eax
jmp .Lt_0111
.Lt_0113:
jmp .Lt_00FF
jmp .Lt_0110
.Lt_0114:
mov eax, dword ptr [ebp-16]
and eax, 480
je .Lt_0115
mov dword ptr [ebp-44], 22
jmp .Lt_0171
.Lt_0115:
mov eax, dword ptr [ebp-16]
and eax, 31
mov dword ptr [ebp-44], eax
.Lt_0171:
cmp dword ptr [ebp-44], 18
je .Lt_0118
jmp .Lt_00FF
.Lt_0118:
.Lt_0117:
push dword ptr [ebp+12]
mov eax, dword ptr [ebp+16]
push dword ptr [eax+8]
call SYMBGETUDTBASELEVEL
add esp, 8
test eax, eax
jne .Lt_011A
jmp .Lt_00FF
.Lt_011A:
.Lt_0119:
jmp .Lt_0110
.Lt_011B:
mov eax, dword ptr [ebp-16]
and eax, 480
je .Lt_011C
mov dword ptr [ebp-44], 22
jmp .Lt_0172
.Lt_011C:
mov eax, dword ptr [ebp-16]
and eax, 31
mov dword ptr [ebp-44], eax
.Lt_0172:
cmp dword ptr [ebp-44], 18
jne .Lt_011F
jmp .Lt_00FF
.Lt_011F:
.Lt_011E:
jmp .Lt_0110
.Lt_0111:
cmp dword ptr [ebp-40], 18
ja .Lt_011B
mov eax, dword ptr [ebp-40]
jmp dword ptr [.LT_0120+eax*4]
.LT_0120:
.int .Lt_0113
.int .Lt_011B
.int .Lt_011B
.int .Lt_0113
.int .Lt_011B
.int .Lt_011B
.int .Lt_0113
.int .Lt_011B
.int .Lt_011B
.int .Lt_011B
.int .Lt_011B
.int .Lt_011B
.int .Lt_011B
.int .Lt_011B
.int .Lt_011B
.int .Lt_011B
.int .Lt_0113
.int .Lt_0113
.int .Lt_0114
.Lt_0110:
mov eax, dword ptr [ebp-16]
and eax, 480
je .Lt_0121
mov dword ptr [ebp-28], 22
jmp .Lt_0173
.Lt_0121:
mov eax, dword ptr [ebp-16]
and eax, 31
mov dword ptr [ebp-28], eax
.Lt_0173:
mov eax, dword ptr [ebp-28]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax]
mov dword ptr [ebp-12], ebx
mov ebx, dword ptr [ebp+20]
and ebx, 1
je .Lt_0124
cmp dword ptr [ebp-12], 0
je .Lt_0126
jmp .Lt_00FF
.Lt_0126:
.Lt_0125:
.Lt_0124:
.Lt_0123:
mov ebx, dword ptr [ebp+20]
and ebx, 8
test ebx, ebx
jne .Lt_0128
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp-16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HCHECKPTR
add esp, 20
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 0
je .Lt_012A
cmp dword ptr [ebp+24], 0
je .Lt_012C
mov eax, dword ptr [ebp+24]
mov ebx, dword ptr [ebp-20]
mov dword ptr [eax], ebx
.Lt_012C:
.Lt_012B:
jmp .Lt_00FF
.Lt_012A:
.Lt_0129:
.Lt_0128:
.Lt_0127:
mov ebx, dword ptr [ebp+20]
and ebx, 2
je .Lt_012E
mov ebx, dword ptr [ebp-16]
and ebx, 480
je .Lt_012F
mov dword ptr [ebp-36], 22
jmp .Lt_0174
.Lt_012F:
mov ebx, dword ptr [ebp-16]
and ebx, 31
mov dword ptr [ebp-36], ebx
.Lt_0174:
mov ebx, dword ptr [ebp-36]
mov dword ptr [ebp-40], ebx
jmp .Lt_0132
.Lt_0134:
push dword ptr [ebp+8]
push dword ptr [ebp+16]
call RTLSTRTOVAL
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_00FF
jmp .Lt_0131
.Lt_0132:
mov eax, dword ptr [ebp-40]
add eax, 4294967293
cmp eax, 14
ja .Lt_0131
mov eax, dword ptr [ebp-40]
jmp dword ptr [.LT_0135+eax*4-12]
.LT_0135:
.int .Lt_0134
.int .Lt_0131
.int .Lt_0131
.int .Lt_0134
.int .Lt_0131
.int .Lt_0131
.int .Lt_0131
.int .Lt_0131
.int .Lt_0131
.int .Lt_0131
.int .Lt_0131
.int .Lt_0131
.int .Lt_0131
.int .Lt_0134
.int .Lt_0134
.Lt_0131:
jmp .Lt_012D
.Lt_012E:
cmp dword ptr [ebp-12], 2
jne .Lt_0137
jmp .Lt_00FF
jmp .Lt_0136
.Lt_0137:
mov eax, dword ptr [ebp-16]
and eax, 480
je .Lt_0138
mov dword ptr [ebp-36], 22
jmp .Lt_0175
.Lt_0138:
mov eax, dword ptr [ebp-16]
and eax, 31
mov dword ptr [ebp-36], eax
.Lt_0175:
mov eax, dword ptr [ebp-36]
mov dword ptr [ebp-40], eax
cmp dword ptr [ebp-40], 3
je .Lt_013D
.Lt_013E:
cmp dword ptr [ebp-40], 6
jne .Lt_013C
.Lt_013D:
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax]
cmp ebx, 20
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_0140
jmp .Lt_00FF
.Lt_0140:
.Lt_013F:
.Lt_013C:
.Lt_013A:
.Lt_0136:
.Lt_012D:
mov ebx, dword ptr [ebp+16]
cmp dword ptr [ebx], 16
jne .Lt_0142
push dword ptr [ebp+16]
push dword ptr [ebp+8]
call ASTCHECKCONST
add esp, 8
push dword ptr [ebp+16]
push dword ptr [ebp+8]
call HCONSTCONV
add esp, 8
mov ebx, dword ptr [ebp+16]
mov eax, dword ptr [ebp+8]
mov dword ptr [ebx+4], eax
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [ebp+12]
mov dword ptr [eax+8], ebx
mov ebx, dword ptr [ebp+16]
mov dword ptr [ebp-4], ebx
jmp .Lt_00FF
.Lt_0142:
.Lt_0141:
mov dword ptr [ebp-24], -1
mov ebx, dword ptr [ebp+8]
and ebx, 480
je .Lt_0143
mov dword ptr [ebp-32], 22
jmp .Lt_0176
.Lt_0143:
mov ebx, dword ptr [ebp+8]
and ebx, 31
mov dword ptr [ebp-32], ebx
.Lt_0176:
mov ebx, dword ptr [ebp-32]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx]
cmp dword ptr [ebp-12], eax
jne .Lt_0146
mov eax, dword ptr [ebp+8]
and eax, 480
je .Lt_0147
mov dword ptr [ebp-36], 22
jmp .Lt_0177
.Lt_0147:
mov eax, dword ptr [ebp+8]
and eax, 31
mov dword ptr [ebp-36], eax
.Lt_0177:
mov eax, dword ptr [ebp-36]
mov dword ptr [ebp-40], eax
cmp dword ptr [ebp-40], 18
jne .Lt_014B
.Lt_014C:
mov dword ptr [ebp-24], 0
jmp .Lt_0149
.Lt_014B:
mov eax, dword ptr [ebp-16]
and eax, 480
je .Lt_014E
mov dword ptr [ebp-44], 22
jmp .Lt_0178
.Lt_014E:
mov eax, dword ptr [ebp-16]
and eax, 31
mov dword ptr [ebp-44], eax
.Lt_0178:
mov eax, dword ptr [ebp-44]
imul eax, 28
mov dword ptr [ebp-52], eax
mov eax, dword ptr [ebp+8]
and eax, 480
je .Lt_0150
mov dword ptr [ebp-48], 22
jmp .Lt_0179
.Lt_0150:
mov eax, dword ptr [ebp+8]
and eax, 31
mov dword ptr [ebp-48], eax
.Lt_0179:
mov eax, dword ptr [ebp-48]
imul eax, 28
mov ebx, dword ptr [ebp-52]
mov ecx, dword ptr [SYMB_DTYPETB+eax+4]
cmp dword ptr [SYMB_DTYPETB+ebx+4], ecx
jne .Lt_0153
mov dword ptr [ebp-24], 0
.Lt_0153:
.Lt_0152:
.Lt_014D:
.Lt_0149:
.Lt_0146:
.Lt_0145:
mov ecx, dword ptr [IR+284]
and ecx, 1
test ecx, ecx
je .Lt_0155
mov ecx, dword ptr [ebp-12]
cmp ecx, 1
sete cl
shr ecx, 1
sbb ecx, ecx
mov dword ptr [ebp-40], ecx
mov ecx, dword ptr [ebp+8]
and ecx, 480
je .Lt_0156
mov dword ptr [ebp-36], 22
jmp .Lt_017B
.Lt_0156:
mov ecx, dword ptr [ebp+8]
and ecx, 31
mov dword ptr [ebp-36], ecx
.Lt_017B:
mov ecx, dword ptr [ebp-36]
imul ecx, 28
mov ebx, dword ptr [SYMB_DTYPETB+ecx]
cmp ebx, 1
sete bl
shr ebx, 1
sbb ebx, ebx
and ebx, dword ptr [ebp-40]
je .Lt_0159
mov ebx, dword ptr [ebp-16]
and ebx, 480
je .Lt_015A
mov dword ptr [ebp-44], 22
jmp .Lt_017D
.Lt_015A:
mov ebx, dword ptr [ebp-16]
and ebx, 31
mov dword ptr [ebp-44], ebx
.Lt_017D:
mov ebx, dword ptr [ebp-44]
imul ebx, 28
mov dword ptr [ebp-52], ebx
mov ebx, dword ptr [ebp+8]
and ebx, 480
je .Lt_015C
mov dword ptr [ebp-48], 22
jmp .Lt_017E
.Lt_015C:
mov ebx, dword ptr [ebp+8]
and ebx, 31
mov dword ptr [ebp-48], ebx
.Lt_017E:
mov ebx, dword ptr [ebp-48]
imul ebx, 28
mov ecx, dword ptr [ebp-52]
mov eax, dword ptr [SYMB_DTYPETB+ebx+4]
cmp dword ptr [SYMB_DTYPETB+ecx+4], eax
je .Lt_015F
mov dword ptr [ebp-24], -1
.Lt_015F:
.Lt_015E:
.Lt_0159:
.Lt_0158:
.Lt_0155:
.Lt_0154:
mov eax, dword ptr [ebp+16]
cmp dword ptr [eax], 5
jne .Lt_0161
mov eax, dword ptr [ebp+16]
cmp dword ptr [eax+20], 0
jne .Lt_0163
cmp dword ptr [ebp-24], 0
jne .Lt_0165
mov eax, dword ptr [ebp+16]
mov ecx, dword ptr [ebp+8]
mov dword ptr [eax+4], ecx
mov ecx, dword ptr [ebp+16]
mov eax, dword ptr [ebp+12]
mov dword ptr [ecx+8], eax
mov eax, dword ptr [ebp+16]
mov dword ptr [ebp-4], eax
jmp .Lt_00FF
.Lt_0165:
.Lt_0164:
.Lt_0163:
.Lt_0162:
.Lt_0161:
.Lt_0160:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 5
call ASTNEWNODE
add esp, 12
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov ecx, dword ptr [ebp+16]
mov dword ptr [eax+56], ecx
mov ecx, dword ptr [ebp-8]
mov eax, dword ptr [ebp-24]
mov dword ptr [ecx+20], eax
mov eax, dword ptr [ebp-8]
mov dword ptr [eax+24], 0
cmp dword ptr [ENV+104], 0
jne .Lt_0167
cmp dword ptr [ebp-24], 0
je .Lt_0169
mov eax, dword ptr [ebp-16]
and eax, 480
je .Lt_016A
mov dword ptr [ebp-36], 22
jmp .Lt_0180
.Lt_016A:
mov eax, dword ptr [ebp-16]
and eax, 31
mov dword ptr [ebp-36], eax
.Lt_0180:
cmp dword ptr [ebp-36], 15
jne .Lt_016D
mov eax, dword ptr [ebp+8]
and eax, 480
je .Lt_016E
mov dword ptr [ebp-40], 22
jmp .Lt_0181
.Lt_016E:
mov eax, dword ptr [ebp+8]
and eax, 31
mov dword ptr [ebp-40], eax
.Lt_0181:
mov eax, dword ptr [ebp-40]
cmp eax, 14
sete al
shr eax, 1
sbb eax, eax
mov ecx, dword ptr [ebp-8]
mov dword ptr [ecx+24], eax
.Lt_016D:
.Lt_016C:
.Lt_0169:
.Lt_0168:
.Lt_0167:
.Lt_0166:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_00FF:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTNEWCONV, .-ASTNEWCONV
.balign 16

.globl ASTNEWOVLCONV
ASTNEWOVLCONV:
.type ASTNEWOVLCONV, @function
push ebp
mov ebp, esp
sub esp, 12
mov dword ptr [ebp-4], 0
.Lt_0186:
lea eax, [ebp-12]
push eax
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call SYMBFINDCASTOVLPROC
add esp, 16
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
je .Lt_0189
push 0
push 0
push dword ptr [ebp+16]
push dword ptr [ebp-8]
call ASTBUILDCALL
add esp, 16
mov dword ptr [ebp-4], eax
jmp .Lt_0187
jmp .Lt_0188
.Lt_0189:
cmp dword ptr [ebp-12], 0
je .Lt_018B
mov dword ptr [ebp-4], 0
jmp .Lt_0187
.Lt_018B:
.Lt_018A:
.Lt_0188:
mov eax, dword ptr [ebp+16]
mov dword ptr [ebp-4], eax
.Lt_0187:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size ASTNEWOVLCONV, .-ASTNEWOVLCONV
.balign 16

.globl ASTUPDATECONVFD2FS
ASTUPDATECONVFD2FS:
.type ASTUPDATECONVFD2FS, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_018C:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+24], 0
jne .Lt_018F
jmp .Lt_018D
.Lt_018F:
.Lt_018E:
mov eax, dword ptr [ebp+12]
and eax, 480
je .Lt_0190
mov dword ptr [ebp-4], 22
jmp .Lt_0196
.Lt_0190:
mov eax, dword ptr [ebp+12]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0196:
mov eax, dword ptr [ebp-4]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+4]
cmp ebx, 4
setge bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+24], ebx
mov ebx, dword ptr [ebp+12]
and ebx, 480
je .Lt_0192
mov dword ptr [ebp-8], 22
jmp .Lt_0197
.Lt_0192:
mov ebx, dword ptr [ebp+12]
and ebx, 31
mov dword ptr [ebp-8], ebx
.Lt_0197:
cmp dword ptr [ebp-8], 14
jne .Lt_0195
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp+16]
mov dword ptr [ebx+24], eax
.Lt_0195:
.Lt_0194:
.Lt_018D:
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTUPDATECONVFD2FS, .-ASTUPDATECONVFD2FS
.balign 16

.globl ASTLOADCONV
ASTLOADCONV:
.type ASTLOADCONV, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
mov dword ptr [ebp-4], 0
.Lt_0199:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-8], ebx
cmp dword ptr [ebp-8], 0
jne .Lt_019C
mov dword ptr [ebp-4], 0
jmp .Lt_019A
.Lt_019C:
.Lt_019B:
push dword ptr [ebp-8]
call ASTLOAD
add esp, 4
mov dword ptr [ebp-12], eax
cmp dword ptr [AST+136], 0
je .Lt_019E
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-12]
mov ecx, dword ptr [eax+16]
mov dword ptr [ebx+20], ecx
mov ecx, dword ptr [ebp+8]
cmp dword ptr [ecx+20], 0
je .Lt_01A0
mov ecx, dword ptr [ebp+8]
push dword ptr [ecx+8]
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ecx+4]
and ebx, 511
push ebx
call dword ptr [IR+236]
add esp, 8
mov dword ptr [ebp-16], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-16]
mov ecx, dword ptr [eax+16]
mov dword ptr [ebx+20], ecx
push dword ptr [ebp-12]
push dword ptr [ebp-16]
call dword ptr [IR+60]
add esp, 8
mov ecx, dword ptr [ebp+8]
cmp dword ptr [ecx+24], 0
je .Lt_01A2
mov ecx, dword ptr [ebp-12]
cmp dword ptr [ecx+4], 15
jne .Lt_01A4
mov ecx, dword ptr [ebp-16]
cmp dword ptr [ecx+4], 14
jne .Lt_01A6
mov ecx, dword ptr [ebp-16]
cmp dword ptr [ecx+16], 0
jne .Lt_01A8
push 0
push dword ptr [ebp-16]
push 74
call dword ptr [IR+112]
add esp, 12
.Lt_01A8:
.Lt_01A7:
.Lt_01A6:
.Lt_01A5:
.Lt_01A4:
.Lt_01A3:
.Lt_01A2:
.Lt_01A1:
jmp .Lt_019F
.Lt_01A0:
mov ecx, dword ptr [ebp-12]
mov dword ptr [ebp-16], ecx
mov ecx, dword ptr [ebp+8]
push dword ptr [ecx+8]
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ecx+4]
and ebx, 511
push ebx
push dword ptr [ebp-16]
call dword ptr [IR+264]
add esp, 12
.Lt_019F:
.Lt_019E:
.Lt_019D:
push dword ptr [ebp-8]
call ASTDELNODE
add esp, 4
mov ebx, dword ptr [ebp-16]
mov dword ptr [ebp-4], ebx
.Lt_019A:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTLOADCONV, .-ASTLOADCONV
.balign 16

.globl ASTSKIPNOCONVCAST
ASTSKIPNOCONVCAST:
.type ASTSKIPNOCONVCAST, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_01A9:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 5
jne .Lt_01AC
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+20], 0
jne .Lt_01AE
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-4], ebx
.Lt_01AE:
.Lt_01AD:
.Lt_01AC:
.Lt_01AB:
.Lt_01AA:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTSKIPNOCONVCAST, .-ASTSKIPNOCONVCAST
.balign 16

.globl ASTREMOVENOCONVCAST
ASTREMOVENOCONVCAST:
.type ASTREMOVENOCONVCAST, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_01AF:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 5
jne .Lt_01B2
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+20], 0
jne .Lt_01B4
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-4], ebx
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+56], 0
push dword ptr [ebp+8]
call ASTDELTREE
add esp, 4
.Lt_01B4:
.Lt_01B3:
.Lt_01B2:
.Lt_01B1:
.Lt_01B0:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTREMOVENOCONVCAST, .-ASTREMOVENOCONVCAST
.balign 16
fb_ctor__astznodezconv:
.type fb_ctor__astznodezconv, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__astznodezconv, .-fb_ctor__astznodezconv
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
HCONSTCONV:
.type HCONSTCONV, @function
push ebp
mov ebp, esp
sub esp, 28
push ebx
push esi
.Lt_0057:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-4], ebx
mov ebx, dword ptr [ebp-4]
and ebx, 480
je .Lt_0059
mov dword ptr [ebp-8], 22
jmp .Lt_01B5
.Lt_0059:
mov ebx, dword ptr [ebp-4]
and ebx, 31
mov dword ptr [ebp-8], ebx
.Lt_01B5:
mov ebx, dword ptr [ebp-8]
imul ebx, 28
cmp dword ptr [SYMB_DTYPETB+ebx], 1
jne .Lt_005C
mov ebx, dword ptr [ebp+8]
and ebx, 480
je .Lt_005D
mov dword ptr [ebp-16], 22
jmp .Lt_01B6
.Lt_005D:
mov ebx, dword ptr [ebp+8]
and ebx, 31
mov dword ptr [ebp-16], ebx
.Lt_01B6:
mov ebx, dword ptr [ebp-16]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx+20]
mov dword ptr [ebp-20], eax
jmp .Lt_0060
.Lt_0062:
mov eax, dword ptr [ebp-4]
and eax, 511
cmp eax, 15
jne .Lt_0064
mov eax, dword ptr [ebp+12]
fld qword ptr [eax+20]
fstp dword ptr [ebp-24]
mov eax, dword ptr [ebp+12]
fld dword ptr [ebp-24]
fstp qword ptr [eax+20]
.Lt_0064:
.Lt_0063:
jmp .Lt_005F
.Lt_0065:
jmp .Lt_005F
.Lt_0066:
mov eax, dword ptr [ebp+12]
fld qword ptr [eax+20]
sub esp, 4
fistp dword ptr [esp]
mov bl, byte ptr [esp]
add esp, 4
movsx ecx, bl
mov eax, ecx
sar eax, 31
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx+20], ecx
mov dword ptr [ebx+24], eax
jmp .Lt_005F
.Lt_0067:
mov ecx, dword ptr [ebp+12]
fld qword ptr [ecx+20]
sub esp, 4
fistp dword ptr [esp]
mov al, byte ptr [esp]
add esp, 4
movzx ebx, al
mov ecx, 0
mov eax, dword ptr [ebp+12]
mov dword ptr [eax+20], ebx
mov dword ptr [eax+24], ecx
jmp .Lt_005F
.Lt_0068:
mov ebx, dword ptr [ebp+12]
fld qword ptr [ebx+20]
sub esp, 4
fistp word ptr [esp]
pop ecx
movsx eax, cx
mov ebx, eax
sar ebx, 31
mov ecx, dword ptr [ebp+12]
mov dword ptr [ecx+20], eax
mov dword ptr [ecx+24], ebx
jmp .Lt_005F
.Lt_0069:
mov eax, dword ptr [ebp+12]
fld qword ptr [eax+20]
sub esp, 4
fistp dword ptr [esp]
pop bx
add esp, 2
movzx ecx, bx
mov eax, 0
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx+20], ecx
mov dword ptr [ebx+24], eax
jmp .Lt_005F
.Lt_006A:
mov ecx, dword ptr [ebp+12]
fld qword ptr [ecx+20]
sub esp, 4
fistp dword ptr [esp]
pop eax
mov ebx, eax
mov ecx, ebx
sar ecx, 31
mov eax, dword ptr [ebp+12]
mov dword ptr [eax+20], ebx
mov dword ptr [eax+24], ecx
jmp .Lt_005F
.Lt_006B:
mov ebx, dword ptr [ebp+12]
fld qword ptr [ebx+20]
sub esp, 8
fistp qword ptr [esp]
pop ecx
add esp, 4
mov eax, ecx
mov ebx, 0
mov ecx, dword ptr [ebp+12]
mov dword ptr [ecx+20], eax
mov dword ptr [ecx+24], ebx
jmp .Lt_005F
.Lt_006C:
mov eax, dword ptr [ebp+12]
fld qword ptr [eax+20]
sub esp, 8
fistp qword ptr [esp]
pop ecx
pop ebx
mov eax, dword ptr [ebp+12]
mov dword ptr [eax+20], ecx
mov dword ptr [eax+24], ebx
jmp .Lt_005F
.Lt_006D:
mov ecx, dword ptr [ebp+12]
fld qword ptr [ecx+20]
fcomp qword ptr [Lt_01B7]
fnstsw ax
test ah, 0b00000001
jnz .Lt_006E
mov ecx, dword ptr [ebp+12]
fld qword ptr [Lt_01B9]
fmul qword ptr [ecx+20]
sub esp, 8
fistp qword ptr [esp]
pop ebx
pop ecx
shld ecx, ebx, 1
shl ebx, 1
mov dword ptr [ebp-28], ebx
mov dword ptr [ebp-24], ecx
jmp .Lt_01B8
.Lt_006E:
mov ebx, dword ptr [ebp+12]
fld qword ptr [ebx+20]
sub esp, 8
fistp qword ptr [esp]
pop eax
pop ecx
mov dword ptr [ebp-28], eax
mov dword ptr [ebp-24], ecx
.Lt_01B8:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [ebp-28]
mov ecx, dword ptr [ebp-24]
mov dword ptr [eax+20], ebx
mov dword ptr [eax+24], ecx
jmp .Lt_005F
.Lt_0060:
cmp dword ptr [ebp-20], 9
ja .Lt_005F
mov ebx, dword ptr [ebp-20]
jmp dword ptr [.LT_0070+ebx*4]
.LT_0070:
.int .Lt_0066
.int .Lt_0067
.int .Lt_0068
.int .Lt_0069
.int .Lt_006A
.int .Lt_006B
.int .Lt_006C
.int .Lt_006D
.int .Lt_0062
.int .Lt_0065
.Lt_005F:
jmp .Lt_005B
.Lt_005C:
mov ebx, dword ptr [ebp-4]
and ebx, 480
je .Lt_0072
mov dword ptr [ebp-12], 22
jmp .Lt_01BA
.Lt_0072:
mov ebx, dword ptr [ebp-4]
and ebx, 31
mov dword ptr [ebp-12], ebx
.Lt_01BA:
mov ebx, dword ptr [ebp-12]
imul ebx, 28
cmp dword ptr [SYMB_DTYPETB+ebx+8], 0
je .Lt_0071
mov ebx, dword ptr [ebp+8]
and ebx, 480
je .Lt_0074
mov dword ptr [ebp-16], 22
jmp .Lt_01BB
.Lt_0074:
mov ebx, dword ptr [ebp+8]
and ebx, 31
mov dword ptr [ebp-16], ebx
.Lt_01BB:
mov ebx, dword ptr [ebp-16]
imul ebx, 28
mov ecx, dword ptr [SYMB_DTYPETB+ebx+20]
mov dword ptr [ebp-20], ecx
jmp .Lt_0077
.Lt_0079:
mov ecx, dword ptr [ebp+12]
fild qword ptr [ecx+20]
mov ecx, dword ptr [ebp+12]
fstp qword ptr [ecx+20]
jmp .Lt_0076
.Lt_007A:
mov ecx, dword ptr [ebp+12]
fild qword ptr [ecx+20]
mov ecx, dword ptr [ebp+12]
fstp qword ptr [ecx+20]
jmp .Lt_0076
.Lt_007B:
mov ecx, dword ptr [ebp+12]
mov bl, byte ptr [ecx+20]
movsx eax, bl
mov ecx, eax
sar ecx, 31
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx+20], eax
mov dword ptr [ebx+24], ecx
jmp .Lt_0076
.Lt_007C:
mov eax, dword ptr [ebp+12]
mov cl, byte ptr [eax+20]
movzx ebx, cl
mov eax, 0
mov ecx, dword ptr [ebp+12]
mov dword ptr [ecx+20], ebx
mov dword ptr [ecx+24], eax
jmp .Lt_0076
.Lt_007D:
mov ebx, dword ptr [ebp+12]
mov ax, word ptr [ebx+20]
movsx ecx, ax
mov ebx, ecx
sar ebx, 31
mov eax, dword ptr [ebp+12]
mov dword ptr [eax+20], ecx
mov dword ptr [eax+24], ebx
jmp .Lt_0076
.Lt_007E:
mov ecx, dword ptr [ebp+12]
mov bx, word ptr [ecx+20]
movzx eax, bx
mov ecx, 0
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx+20], eax
mov dword ptr [ebx+24], ecx
jmp .Lt_0076
.Lt_007F:
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax+20]
mov ebx, ecx
mov eax, ebx
sar eax, 31
mov ecx, dword ptr [ebp+12]
mov dword ptr [ecx+20], ebx
mov dword ptr [ecx+24], eax
jmp .Lt_0076
.Lt_0080:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+20]
mov ecx, eax
mov ebx, 0
mov eax, dword ptr [ebp+12]
mov dword ptr [eax+20], ecx
mov dword ptr [eax+24], ebx
jmp .Lt_0076
.Lt_0081:
jmp .Lt_0076
.Lt_0082:
mov ecx, dword ptr [ebp+12]
mov ebx, dword ptr [ebp+12]
mov esi, dword ptr [ecx+20]
mov eax, dword ptr [ecx+24]
mov dword ptr [ebx+20], esi
mov dword ptr [ebx+24], eax
jmp .Lt_0076
.Lt_0077:
cmp dword ptr [ebp-20], 9
ja .Lt_0076
mov esi, dword ptr [ebp-20]
jmp dword ptr [.LT_0083+esi*4]
.LT_0083:
.int .Lt_007B
.int .Lt_007C
.int .Lt_007D
.int .Lt_007E
.int .Lt_007F
.int .Lt_0080
.int .Lt_0081
.int .Lt_0082
.int .Lt_0079
.int .Lt_007A
.Lt_0076:
jmp .Lt_005B
.Lt_0071:
mov esi, dword ptr [ebp+8]
and esi, 480
je .Lt_0084
mov dword ptr [ebp-16], 22
jmp .Lt_01BC
.Lt_0084:
mov esi, dword ptr [ebp+8]
and esi, 31
mov dword ptr [ebp-16], esi
.Lt_01BC:
mov esi, dword ptr [ebp-16]
imul esi, 28
mov eax, dword ptr [SYMB_DTYPETB+esi+20]
mov dword ptr [ebp-20], eax
jmp .Lt_0087
.Lt_0089:
mov eax, dword ptr [ebp+12]
fild qword ptr [eax+20]
cmp dword ptr [eax+24], 0
jns .Lt_01BD
push 0x403f
push 0x80000000
push 0
fldt [esp]
add esp, 12
faddp
.Lt_01BD:
mov eax, dword ptr [ebp+12]
fstp qword ptr [eax+20]
jmp .Lt_0086
.Lt_008A:
mov eax, dword ptr [ebp+12]
fild qword ptr [eax+20]
cmp dword ptr [eax+24], 0
jns .Lt_01BE
push 0x403f
push 0x80000000
push 0
fldt [esp]
add esp, 12
faddp
.Lt_01BE:
mov eax, dword ptr [ebp+12]
fstp qword ptr [eax+20]
jmp .Lt_0086
.Lt_008B:
mov eax, dword ptr [ebp+12]
mov bl, byte ptr [eax+20]
movsx esi, bl
mov eax, esi
sar eax, 31
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx+20], esi
mov dword ptr [ebx+24], eax
jmp .Lt_0086
.Lt_008C:
mov esi, dword ptr [ebp+12]
mov al, byte ptr [esi+20]
movzx ebx, al
mov esi, 0
mov eax, dword ptr [ebp+12]
mov dword ptr [eax+20], ebx
mov dword ptr [eax+24], esi
jmp .Lt_0086
.Lt_008D:
mov ebx, dword ptr [ebp+12]
mov si, word ptr [ebx+20]
movsx eax, si
mov ebx, eax
sar ebx, 31
mov esi, dword ptr [ebp+12]
mov dword ptr [esi+20], eax
mov dword ptr [esi+24], ebx
jmp .Lt_0086
.Lt_008E:
mov eax, dword ptr [ebp+12]
mov bx, word ptr [eax+20]
movzx esi, bx
mov eax, 0
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx+20], esi
mov dword ptr [ebx+24], eax
jmp .Lt_0086
.Lt_008F:
mov esi, dword ptr [ebp+12]
mov eax, dword ptr [esi+20]
mov ebx, eax
mov esi, ebx
sar esi, 31
mov eax, dword ptr [ebp+12]
mov dword ptr [eax+20], ebx
mov dword ptr [eax+24], esi
jmp .Lt_0086
.Lt_0090:
mov ebx, dword ptr [ebp+12]
mov esi, dword ptr [ebx+20]
mov eax, esi
mov ebx, 0
mov esi, dword ptr [ebp+12]
mov dword ptr [esi+20], eax
mov dword ptr [esi+24], ebx
jmp .Lt_0086
.Lt_0091:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [ebp+12]
mov ecx, dword ptr [eax+20]
mov esi, dword ptr [eax+24]
mov dword ptr [ebx+20], ecx
mov dword ptr [ebx+24], esi
jmp .Lt_0086
.Lt_0092:
mov ecx, dword ptr [ebp+12]
mov esi, dword ptr [ebp+12]
mov eax, dword ptr [ecx+20]
mov ebx, dword ptr [ecx+24]
mov dword ptr [esi+20], eax
mov dword ptr [esi+24], ebx
jmp .Lt_0086
.Lt_0087:
cmp dword ptr [ebp-20], 9
ja .Lt_0086
mov eax, dword ptr [ebp-20]
jmp dword ptr [.LT_0093+eax*4]
.LT_0093:
.int .Lt_008B
.int .Lt_008C
.int .Lt_008D
.int .Lt_008E
.int .Lt_008F
.int .Lt_0090
.int .Lt_0091
.int .Lt_0092
.int .Lt_0089
.int .Lt_008A
.Lt_0086:
.Lt_005B:
.Lt_0058:
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size HCONSTCONV, .-HCONSTCONV
.balign 16
HGETTYPEMISMATCHERRMSG:
.type HGETTYPEMISMATCHERRMSG, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_0094:
mov eax, dword ptr [ebp+8]
and eax, 4
je .Lt_0097
mov dword ptr [ebp-4], 28
jmp .Lt_0096
.Lt_0097:
mov dword ptr [ebp-4], 20
.Lt_0096:
.Lt_0095:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size HGETTYPEMISMATCHERRMSG, .-HGETTYPEMISMATCHERRMSG
.balign 16
HCHECKPTR:
.type HCHECKPTR, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_00A8:
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+8]
and eax, 480
test eax, eax
je .Lt_00AB
mov eax, dword ptr [ebp+16]
and eax, 480
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_00AD
push dword ptr [ebp+24]
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+8]
call ASTCHECKCONVNONPTRTOPTR
add esp, 16
mov dword ptr [ebp-4], eax
jmp .Lt_00A9
.Lt_00AD:
.Lt_00AC:
jmp .Lt_00AA
.Lt_00AB:
mov eax, dword ptr [ebp+16]
and eax, 480
test eax, eax
je .Lt_00AE
mov eax, dword ptr [ebp+8]
and eax, 480
je .Lt_00AF
mov dword ptr [ebp-8], 22
jmp .Lt_01BF
.Lt_00AF:
mov eax, dword ptr [ebp+8]
and eax, 31
mov dword ptr [ebp-8], eax
.Lt_01BF:
mov eax, dword ptr [ebp-8]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax], 0
jne .Lt_00B2
mov eax, dword ptr [ebp+20]
cmp dword ptr [eax], 16
jne .Lt_00B4
push dword ptr [ebp+20]
call ASTCONSTEQZERO
add esp, 4
test eax, eax
je .Lt_00B6
jmp .Lt_00A9
.Lt_00B6:
.Lt_00B5:
.Lt_00B4:
.Lt_00B3:
mov eax, dword ptr [ebp+8]
and eax, 480
je .Lt_00B7
mov dword ptr [ebp-12], 22
jmp .Lt_01C0
.Lt_00B7:
mov eax, dword ptr [ebp+8]
and eax, 31
mov dword ptr [ebp-12], eax
.Lt_01C0:
mov eax, dword ptr [ebp-12]
imul eax, 28
mov ebx, dword ptr [ENV+236]
cmp dword ptr [SYMB_DTYPETB+eax+4], ebx
jne .Lt_00BA
jmp .Lt_00A9
.Lt_00BA:
.Lt_00B9:
.Lt_00B2:
.Lt_00B1:
push dword ptr [ebp+24]
call HGETTYPEMISMATCHERRMSG
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_00A9
jmp .Lt_00AA
.Lt_00AE:
jmp .Lt_00A9
.Lt_00AA:
mov eax, dword ptr [ebp+8]
and eax, 31
cmp eax, 18
jne .Lt_00BC
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax+92], 0
je .Lt_00BE
mov eax, dword ptr [ebp+16]
and eax, 31
cmp eax, 18
je .Lt_00C0
mov eax, dword ptr [ebp+16]
and eax, 31
test eax, eax
je .Lt_00C2
mov dword ptr [ebp-4], 299
jmp .Lt_00A9
.Lt_00C2:
.Lt_00C1:
jmp .Lt_00BF
.Lt_00C0:
push dword ptr [ebp+12]
mov eax, dword ptr [ebp+20]
push dword ptr [eax+8]
call SYMBGETUDTBASELEVEL
add esp, 8
test eax, eax
jne .Lt_00C4
mov eax, dword ptr [ebp+20]
push dword ptr [eax+8]
push dword ptr [ebp+12]
call SYMBGETUDTBASELEVEL
add esp, 8
test eax, eax
jne .Lt_00C6
mov dword ptr [ebp-4], 300
jmp .Lt_00A9
.Lt_00C6:
.Lt_00C5:
.Lt_00C4:
.Lt_00C3:
.Lt_00BF:
.Lt_00BE:
.Lt_00BD:
.Lt_00BC:
.Lt_00BB:
mov eax, dword ptr [ebp+16]
and eax, 31
cmp eax, 18
jne .Lt_00C8
mov eax, dword ptr [ebp+20]
mov ebx, dword ptr [eax+8]
cmp dword ptr [ebx+92], 0
je .Lt_00CA
mov ebx, dword ptr [ebp+8]
and ebx, 31
cmp ebx, 18
je .Lt_00CC
mov ebx, dword ptr [ebp+8]
and ebx, 31
test ebx, ebx
je .Lt_00CE
mov dword ptr [ebp-4], 301
jmp .Lt_00A9
.Lt_00CE:
.Lt_00CD:
jmp .Lt_00CB
.Lt_00CC:
mov ebx, dword ptr [ebp+20]
push dword ptr [ebx+8]
push dword ptr [ebp+12]
call SYMBGETUDTBASELEVEL
add esp, 8
test eax, eax
jne .Lt_00D0
push dword ptr [ebp+12]
mov eax, dword ptr [ebp+20]
push dword ptr [eax+8]
call SYMBGETUDTBASELEVEL
add esp, 8
test eax, eax
jne .Lt_00D2
mov dword ptr [ebp-4], 302
.Lt_00D2:
.Lt_00D1:
.Lt_00D0:
.Lt_00CF:
.Lt_00CB:
.Lt_00CA:
.Lt_00C9:
.Lt_00C8:
.Lt_00C7:
.Lt_00A9:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HCHECKPTR, .-HCHECKPTR
	#fbc-1.01.0/src/compiler/ast-node-conv.bas' compilation took 0.03516401059459895 secs

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
Lt_01B7:	.quad	0x4341C37937E08000
.balign 8
Lt_01B9:	.quad	0x3FE0000000000000

.section .ctors, "aw", @progbits
.int fb_ctor__astznodezconv
