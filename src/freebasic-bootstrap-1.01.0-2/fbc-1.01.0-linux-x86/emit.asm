	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/emit.bas' compilation started at 14:16:34 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl EMITINIT
EMITINIT:
.type EMITINIT, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_006D:
cmp dword ptr [EMIT], 0
je .Lt_0070
mov dword ptr [ebp-4], -1
jmp .Lt_006E
.Lt_0070:
.Lt_006F:
call EMITGASX86_CTOR
push 48
push 2048
lea eax, [EMIT+16]
push eax
call FLISTINIT
add esp, 12
push 68
push 6144
lea eax, [EMIT+72]
push eax
call FLISTINIT
add esp, 12
mov dword ptr [EMIT], -1
mov dword ptr [EMIT+4], 0
call dword ptr [EMIT+164]
mov dword ptr [ebp-4], eax
.Lt_006E:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size EMITINIT, .-EMITINIT
.balign 16

.globl EMITEND
EMITEND:
.type EMITEND, @function
.Lt_0071:
cmp dword ptr [EMIT], 0
jne .Lt_0074
jmp .Lt_0072
.Lt_0074:
.Lt_0073:
call dword ptr [EMIT+168]
mov dword ptr [EMIT], 0
.Lt_0072:
ret
.size EMITEND, .-EMITEND
.balign 16

.globl EMITWRITESTR
EMITWRITESTR:
.type EMITWRITESTR, @function
push ebp
mov ebp, esp
sub esp, 12
.Lt_0075:
cmp dword ptr [ebp+12], 0
je .Lt_0078
push 0
push 2
push offset Lt_0079
push -1
push offset Lt_007E
call fb_StrAssign
add esp, 20
push 0
push -1
push 0
push dword ptr [ebp+8]
push -1
push offset Lt_007E
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_007E
call fb_StrAssign
add esp, 20
jmp .Lt_0077
.Lt_0078:
push 0
push 0
push dword ptr [ebp+8]
push -1
push offset Lt_007E
call fb_StrAssign
add esp, 20
.Lt_0077:
push 0
push 2
push offset Lt_007B
push -1
push offset Lt_007E
call fb_StrConcatAssign
add esp, 20
push -1
push offset Lt_007E
push 0
push dword ptr [ENV+520]
call fb_FilePutStr
add esp, 16
test eax, eax
je .Lt_007D
.Lt_007D:
.Lt_007C:
.Lt_0076:
mov esp, ebp
pop ebp
ret
.size EMITWRITESTR, .-EMITWRITESTR

.section .bss
.balign 4
	.lcomm	Lt_007E,12

.section .text
.balign 16

.globl EMITRESET
EMITRESET:
.type EMITRESET, @function
push ebx
.Lt_007F:
lea eax, [EMIT+16]
push eax
call FLISTRESET
add esp, 4
lea eax, [EMIT+72]
push eax
call FLISTRESET
add esp, 4
mov dword ptr [EMIT+128], 0
mov dword ptr [Lt_0085], 0
.Lt_0084:
mov eax, dword ptr [Lt_0085]
sal eax, 2
mov ebx, offset EMIT
add ebx, eax
mov dword ptr [ebx+132], 0
.Lt_0082:
inc dword ptr [Lt_0085]
.Lt_0081:
cmp dword ptr [Lt_0085], 1
jle .Lt_0084
.Lt_0083:
.Lt_0080:
pop ebx
ret
.size EMITRESET, .-EMITRESET

.section .bss
.balign 4
	.lcomm	Lt_0085,4

.section .text
.balign 16

.globl EMITFLUSH
EMITFLUSH:
.type EMITFLUSH, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_00A5:
call HPEEPHOLEOPT
lea eax, [EMIT+16]
push eax
call FLISTGETHEAD
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_00A7:
cmp dword ptr [ebp-4], 0
je .Lt_00A8
mov eax, dword ptr [ebp-4]
mov dword ptr [EMIT+128], eax
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-8], ebx
jmp .Lt_00AA
.Lt_00AC:
jmp .Lt_00A9
.Lt_00AD:
mov ebx, dword ptr [ebp-4]
push dword ptr [ebx+12]
mov ebx, dword ptr [ebp-4]
push dword ptr [ebx+8]
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebx+4]
sal eax, 2
mov ebx, dword ptr [EMIT+252]
add ebx, eax
call dword ptr [ebx]
add esp, 8
jmp .Lt_00A9
.Lt_00AE:
mov ebx, dword ptr [ebp-4]
push dword ptr [ebx+8]
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebx+4]
sal eax, 2
mov ebx, dword ptr [EMIT+252]
add ebx, eax
call dword ptr [ebx]
add esp, 4
jmp .Lt_00A9
.Lt_00AF:
mov ebx, dword ptr [ebp-4]
push dword ptr [ebx+20]
mov ebx, dword ptr [ebp-4]
push dword ptr [ebx+16]
mov ebx, dword ptr [ebp-4]
push dword ptr [ebx+12]
mov ebx, dword ptr [ebp-4]
push dword ptr [ebx+8]
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebx+4]
sal eax, 2
mov ebx, dword ptr [EMIT+252]
add ebx, eax
call dword ptr [ebx]
add esp, 16
jmp .Lt_00A9
.Lt_00B0:
mov ebx, dword ptr [ebp-4]
push dword ptr [ebx+12]
mov ebx, dword ptr [ebp-4]
push dword ptr [ebx+8]
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebx+4]
sal eax, 2
mov ebx, dword ptr [EMIT+252]
add ebx, eax
call dword ptr [ebx]
add esp, 8
jmp .Lt_00A9
.Lt_00B1:
mov ebx, dword ptr [ebp-4]
push dword ptr [ebx+16]
mov ebx, dword ptr [ebp-4]
push dword ptr [ebx+12]
mov ebx, dword ptr [ebp-4]
push dword ptr [ebx+8]
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebx+4]
sal eax, 2
mov ebx, dword ptr [EMIT+252]
add ebx, eax
call dword ptr [ebx]
add esp, 12
jmp .Lt_00A9
.Lt_00B2:
mov ebx, dword ptr [ebp-4]
push dword ptr [ebx+8]
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebx+4]
sal eax, 2
mov ebx, dword ptr [EMIT+252]
add ebx, eax
call dword ptr [ebx]
add esp, 4
jmp .Lt_00A9
.Lt_00B3:
mov ebx, dword ptr [ebp-4]
push dword ptr [ebx+8]
mov ebx, dword ptr [EMIT+252]
call dword ptr [ebx+476]
add esp, 4
mov ebx, dword ptr [ebp-4]
cmp dword ptr [ebx+8], 0
je .Lt_00B5
mov ebx, dword ptr [ebp-4]
push dword ptr [ebx+8]
call free
add esp, 4
.Lt_00B5:
.Lt_00B4:
jmp .Lt_00A9
.Lt_00B6:
mov ebx, dword ptr [ebp-4]
push dword ptr [ebx+36]
push dword ptr [ebx+32]
mov ebx, dword ptr [ebp-4]
push dword ptr [ebx+28]
push dword ptr [ebx+24]
mov ebx, dword ptr [ebp-4]
push dword ptr [ebx+20]
mov ebx, dword ptr [ebp-4]
push dword ptr [ebx+16]
mov ebx, dword ptr [ebp-4]
push dword ptr [ebx+12]
mov ebx, dword ptr [ebp-4]
push dword ptr [ebx+8]
mov ebx, dword ptr [ebp-4]
push dword ptr [ebx+4]
mov ebx, dword ptr [EMIT+252]
call dword ptr [ebx+480]
add esp, 36
mov ebx, dword ptr [ebp-4]
push dword ptr [ebx+8]
call free
add esp, 4
mov ebx, dword ptr [ebp-4]
push dword ptr [ebx+12]
call free
add esp, 4
jmp .Lt_00A9
.Lt_00B7:
mov ebx, dword ptr [ebp-4]
push dword ptr [ebx+20]
mov ebx, dword ptr [ebp-4]
push dword ptr [ebx+16]
mov ebx, dword ptr [ebp-4]
push dword ptr [ebx+12]
mov ebx, dword ptr [ebp-4]
push dword ptr [ebx+8]
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebx+4]
sal eax, 2
mov ebx, dword ptr [EMIT+252]
add ebx, eax
call dword ptr [ebx]
add esp, 16
jmp .Lt_00A9
.Lt_00B8:
mov ebx, dword ptr [ebp-4]
push dword ptr [ebx+16]
mov ebx, dword ptr [ebp-4]
push dword ptr [ebx+12]
mov ebx, dword ptr [ebp-4]
push dword ptr [ebx+8]
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebx+4]
sal eax, 2
mov ebx, dword ptr [EMIT+252]
add ebx, eax
call dword ptr [ebx]
add esp, 12
jmp .Lt_00A9
.Lt_00AA:
cmp dword ptr [ebp-8], 10
ja .Lt_00A9
mov ebx, dword ptr [ebp-8]
jmp dword ptr [.LT_00B9+ebx*4]
.LT_00B9:
.int .Lt_00AC
.int .Lt_00AD
.int .Lt_00AE
.int .Lt_00AF
.int .Lt_00B0
.int .Lt_00B1
.int .Lt_00B3
.int .Lt_00B6
.int .Lt_00B2
.int .Lt_00B7
.int .Lt_00B8
.Lt_00A9:
push dword ptr [ebp-4]
call FLISTGETNEXT
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_00A7
.Lt_00A8:
.Lt_00A6:
pop ebx
mov esp, ebp
pop ebp
ret
.size EMITFLUSH, .-EMITFLUSH
.balign 16

.globl EMITGETREGCLASS
EMITGETREGCLASS:
.type EMITGETREGCLASS, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_00BA:
mov eax, dword ptr [ebp+8]
sal eax, 2
mov ebx, offset EMIT
add ebx, eax
mov eax, dword ptr [ebx+8]
mov dword ptr [ebp-4], eax
.Lt_00BB:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size EMITGETREGCLASS, .-EMITGETREGCLASS
.balign 16

.globl EMITLOAD
EMITLOAD:
.type EMITLOAD, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_00DE:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-8], ebx
jmp .Lt_00E1
.Lt_00E3:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
mov dword ptr [ebp-12], eax
jmp .Lt_00E5
.Lt_00E7:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 9
call HNEWBOP
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_00E4
.Lt_00E8:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 8
call HNEWBOP
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_00E4
.Lt_00E9:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 7
call HNEWBOP
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_00E4
.Lt_00E5:
mov eax, dword ptr [ebp-12]
add eax, 4294967284
cmp eax, 3
ja .Lt_00E9
mov eax, dword ptr [ebp-12]
jmp dword ptr [.LT_00EA+eax*4-48]
.LT_00EA:
.int .Lt_00E7
.int .Lt_00E7
.int .Lt_00E8
.int .Lt_00E8
.Lt_00E4:
jmp .Lt_00E0
.Lt_00EB:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-12], ebx
jmp .Lt_00ED
.Lt_00EF:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 6
call HNEWBOP
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_00EC
.Lt_00F0:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 5
call HNEWBOP
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_00EC
.Lt_00F1:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 4
call HNEWBOP
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_00EC
.Lt_00ED:
mov eax, dword ptr [ebp-12]
add eax, 4294967284
cmp eax, 3
ja .Lt_00F1
mov eax, dword ptr [ebp-12]
jmp dword ptr [.LT_00F2+eax*4-48]
.LT_00F2:
.int .Lt_00EF
.int .Lt_00EF
.int .Lt_00F0
.int .Lt_00F0
.Lt_00EC:
jmp .Lt_00E0
.Lt_00F3:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-12], ebx
jmp .Lt_00F5
.Lt_00F7:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 3
call HNEWBOP
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_00F4
.Lt_00F8:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 2
call HNEWBOP
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_00F4
.Lt_00F9:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 1
call HNEWBOP
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_00F4
.Lt_00F5:
mov eax, dword ptr [ebp-12]
add eax, 4294967284
cmp eax, 3
ja .Lt_00F9
mov eax, dword ptr [ebp-12]
jmp dword ptr [.LT_00FA+eax*4-48]
.LT_00FA:
.int .Lt_00F7
.int .Lt_00F7
.int .Lt_00F8
.int .Lt_00F8
.Lt_00F4:
jmp .Lt_00E0
.Lt_00E1:
mov eax, dword ptr [ebp-8]
add eax, 4294967284
cmp eax, 3
ja .Lt_00F3
mov eax, dword ptr [ebp-8]
jmp dword ptr [.LT_00FB+eax*4-48]
.LT_00FB:
.int .Lt_00E3
.int .Lt_00E3
.int .Lt_00EB
.int .Lt_00EB
.Lt_00E0:
.Lt_00DF:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size EMITLOAD, .-EMITLOAD
.balign 16

.globl EMITSTORE
EMITSTORE:
.type EMITSTORE, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_00FC:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-8], ebx
jmp .Lt_00FF
.Lt_0101:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
mov dword ptr [ebp-12], eax
jmp .Lt_0103
.Lt_0105:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 18
call HNEWBOP
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_0102
.Lt_0106:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 17
call HNEWBOP
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_0102
.Lt_0107:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 16
call HNEWBOP
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_0102
.Lt_0103:
mov eax, dword ptr [ebp-12]
add eax, 4294967284
cmp eax, 3
ja .Lt_0107
mov eax, dword ptr [ebp-12]
jmp dword ptr [.LT_0108+eax*4-48]
.LT_0108:
.int .Lt_0105
.int .Lt_0105
.int .Lt_0106
.int .Lt_0106
.Lt_0102:
jmp .Lt_00FE
.Lt_0109:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-12], ebx
jmp .Lt_010B
.Lt_010D:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 15
call HNEWBOP
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_010A
.Lt_010E:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 14
call HNEWBOP
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_010A
.Lt_010F:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 13
call HNEWBOP
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_010A
.Lt_010B:
mov eax, dword ptr [ebp-12]
add eax, 4294967284
cmp eax, 3
ja .Lt_010F
mov eax, dword ptr [ebp-12]
jmp dword ptr [.LT_0110+eax*4-48]
.LT_0110:
.int .Lt_010D
.int .Lt_010D
.int .Lt_010E
.int .Lt_010E
.Lt_010A:
jmp .Lt_00FE
.Lt_0111:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-12], ebx
jmp .Lt_0113
.Lt_0115:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 12
call HNEWBOP
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_0112
.Lt_0116:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 11
call HNEWBOP
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_0112
.Lt_0117:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 10
call HNEWBOP
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_0112
.Lt_0113:
mov eax, dword ptr [ebp-12]
add eax, 4294967284
cmp eax, 3
ja .Lt_0117
mov eax, dword ptr [ebp-12]
jmp dword ptr [.LT_0118+eax*4-48]
.LT_0118:
.int .Lt_0115
.int .Lt_0115
.int .Lt_0116
.int .Lt_0116
.Lt_0112:
jmp .Lt_00FE
.Lt_00FF:
mov eax, dword ptr [ebp-8]
add eax, 4294967284
cmp eax, 3
ja .Lt_0111
mov eax, dword ptr [ebp-8]
jmp dword ptr [.LT_0119+eax*4-48]
.LT_0119:
.int .Lt_0101
.int .Lt_0101
.int .Lt_0109
.int .Lt_0109
.Lt_00FE:
.Lt_00FD:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size EMITSTORE, .-EMITSTORE
.balign 16

.globl EMITMOV
EMITMOV:
.type EMITMOV, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_011A:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-8], ebx
jmp .Lt_011D
.Lt_011F:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 21
call HNEWBOP
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_011C
.Lt_0120:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 20
call HNEWBOP
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_011C
.Lt_0121:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 19
call HNEWBOP
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_011C
.Lt_011D:
mov eax, dword ptr [ebp-8]
add eax, 4294967284
cmp eax, 3
ja .Lt_0121
mov eax, dword ptr [ebp-8]
jmp dword ptr [.LT_0122+eax*4-48]
.LT_0122:
.int .Lt_011F
.int .Lt_011F
.int .Lt_0120
.int .Lt_0120
.Lt_011C:
.Lt_011B:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size EMITMOV, .-EMITMOV
.balign 16

.globl EMITADD
EMITADD:
.type EMITADD, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0123:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-8], ebx
jmp .Lt_0126
.Lt_0128:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 24
call HNEWBOP
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_0125
.Lt_0129:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 23
call HNEWBOP
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_0125
.Lt_012A:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 22
call HNEWBOP
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_0125
.Lt_0126:
mov eax, dword ptr [ebp-8]
add eax, 4294967284
cmp eax, 3
ja .Lt_012A
mov eax, dword ptr [ebp-8]
jmp dword ptr [.LT_012B+eax*4-48]
.LT_012B:
.int .Lt_0128
.int .Lt_0128
.int .Lt_0129
.int .Lt_0129
.Lt_0125:
.Lt_0124:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size EMITADD, .-EMITADD
.balign 16

.globl EMITSUB
EMITSUB:
.type EMITSUB, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_012C:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-8], ebx
jmp .Lt_012F
.Lt_0131:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 27
call HNEWBOP
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_012E
.Lt_0132:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 26
call HNEWBOP
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_012E
.Lt_0133:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 25
call HNEWBOP
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_012E
.Lt_012F:
mov eax, dword ptr [ebp-8]
add eax, 4294967284
cmp eax, 3
ja .Lt_0133
mov eax, dword ptr [ebp-8]
jmp dword ptr [.LT_0134+eax*4-48]
.LT_0134:
.int .Lt_0131
.int .Lt_0131
.int .Lt_0132
.int .Lt_0132
.Lt_012E:
.Lt_012D:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size EMITSUB, .-EMITSUB
.balign 16

.globl EMITMUL
EMITMUL:
.type EMITMUL, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0135:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-8], ebx
jmp .Lt_0138
.Lt_013A:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 30
call HNEWBOP
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_0137
.Lt_013B:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 29
call HNEWBOP
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_0137
.Lt_013C:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 28
call HNEWBOP
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_0137
.Lt_0138:
mov eax, dword ptr [ebp-8]
add eax, 4294967284
cmp eax, 3
ja .Lt_013C
mov eax, dword ptr [ebp-8]
jmp dword ptr [.LT_013D+eax*4-48]
.LT_013D:
.int .Lt_013A
.int .Lt_013A
.int .Lt_013B
.int .Lt_013B
.Lt_0137:
.Lt_0136:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size EMITMUL, .-EMITMUL
.balign 16

.globl EMITDIV
EMITDIV:
.type EMITDIV, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_013E:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 32
call HNEWBOP
add esp, 12
mov dword ptr [ebp-4], eax
.Lt_013F:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size EMITDIV, .-EMITDIV
.balign 16

.globl EMITINTDIV
EMITINTDIV:
.type EMITINTDIV, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_0140:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 31
call HNEWBOP
add esp, 12
mov dword ptr [ebp-4], eax
.Lt_0141:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size EMITINTDIV, .-EMITINTDIV
.balign 16

.globl EMITMOD
EMITMOD:
.type EMITMOD, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_0142:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 34
call HNEWBOP
add esp, 12
mov dword ptr [ebp-4], eax
.Lt_0143:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size EMITMOD, .-EMITMOD
.balign 16

.globl EMITSHL
EMITSHL:
.type EMITSHL, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0144:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-8], ebx
cmp dword ptr [ebp-8], 12
je .Lt_0149
.Lt_014A:
cmp dword ptr [ebp-8], 13
jne .Lt_0148
.Lt_0149:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 38
call HNEWBOP
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_0146
.Lt_0148:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 37
call HNEWBOP
add esp, 12
mov dword ptr [ebp-4], eax
.Lt_014B:
.Lt_0146:
.Lt_0145:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size EMITSHL, .-EMITSHL
.balign 16

.globl EMITSHR
EMITSHR:
.type EMITSHR, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_014C:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-8], ebx
cmp dword ptr [ebp-8], 12
je .Lt_0151
.Lt_0152:
cmp dword ptr [ebp-8], 13
jne .Lt_0150
.Lt_0151:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 40
call HNEWBOP
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_014E
.Lt_0150:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 39
call HNEWBOP
add esp, 12
mov dword ptr [ebp-4], eax
.Lt_0153:
.Lt_014E:
.Lt_014D:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size EMITSHR, .-EMITSHR
.balign 16

.globl EMITAND
EMITAND:
.type EMITAND, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0154:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-8], ebx
cmp dword ptr [ebp-8], 12
je .Lt_0159
.Lt_015A:
cmp dword ptr [ebp-8], 13
jne .Lt_0158
.Lt_0159:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 42
call HNEWBOP
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_0156
.Lt_0158:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 41
call HNEWBOP
add esp, 12
mov dword ptr [ebp-4], eax
.Lt_015B:
.Lt_0156:
.Lt_0155:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size EMITAND, .-EMITAND
.balign 16

.globl EMITOR
EMITOR:
.type EMITOR, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_015C:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-8], ebx
cmp dword ptr [ebp-8], 12
je .Lt_0161
.Lt_0162:
cmp dword ptr [ebp-8], 13
jne .Lt_0160
.Lt_0161:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 44
call HNEWBOP
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_015E
.Lt_0160:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 43
call HNEWBOP
add esp, 12
mov dword ptr [ebp-4], eax
.Lt_0163:
.Lt_015E:
.Lt_015D:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size EMITOR, .-EMITOR
.balign 16

.globl EMITXOR
EMITXOR:
.type EMITXOR, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0164:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-8], ebx
cmp dword ptr [ebp-8], 12
je .Lt_0169
.Lt_016A:
cmp dword ptr [ebp-8], 13
jne .Lt_0168
.Lt_0169:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 46
call HNEWBOP
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_0166
.Lt_0168:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 45
call HNEWBOP
add esp, 12
mov dword ptr [ebp-4], eax
.Lt_016B:
.Lt_0166:
.Lt_0165:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size EMITXOR, .-EMITXOR
.balign 16

.globl EMITEQV
EMITEQV:
.type EMITEQV, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_016C:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-8], ebx
cmp dword ptr [ebp-8], 12
je .Lt_0171
.Lt_0172:
cmp dword ptr [ebp-8], 13
jne .Lt_0170
.Lt_0171:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 48
call HNEWBOP
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_016E
.Lt_0170:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 47
call HNEWBOP
add esp, 12
mov dword ptr [ebp-4], eax
.Lt_0173:
.Lt_016E:
.Lt_016D:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size EMITEQV, .-EMITEQV
.balign 16

.globl EMITIMP
EMITIMP:
.type EMITIMP, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0174:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-8], ebx
cmp dword ptr [ebp-8], 12
je .Lt_0179
.Lt_017A:
cmp dword ptr [ebp-8], 13
jne .Lt_0178
.Lt_0179:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 50
call HNEWBOP
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_0176
.Lt_0178:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 49
call HNEWBOP
add esp, 12
mov dword ptr [ebp-4], eax
.Lt_017B:
.Lt_0176:
.Lt_0175:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size EMITIMP, .-EMITIMP
.balign 16

.globl EMITATN2
EMITATN2:
.type EMITATN2, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_017C:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 51
call HNEWBOP
add esp, 12
mov dword ptr [ebp-4], eax
.Lt_017D:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size EMITATN2, .-EMITATN2
.balign 16

.globl EMITPOW
EMITPOW:
.type EMITPOW, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_017E:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 52
call HNEWBOP
add esp, 12
mov dword ptr [ebp-4], eax
.Lt_017F:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size EMITPOW, .-EMITPOW
.balign 16

.globl EMITADDROF
EMITADDROF:
.type EMITADDROF, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_0180:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 53
call HNEWBOP
add esp, 12
mov dword ptr [ebp-4], eax
.Lt_0181:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size EMITADDROF, .-EMITADDROF
.balign 16

.globl EMITDEREF
EMITDEREF:
.type EMITDEREF, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_0182:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 54
call HNEWBOP
add esp, 12
mov dword ptr [ebp-4], eax
.Lt_0183:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size EMITDEREF, .-EMITDEREF
.balign 16

.globl EMITGT
EMITGT:
.type EMITGT, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0184:
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-8], ebx
jmp .Lt_0187
.Lt_0189:
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 57
call HNEWREL
add esp, 20
mov dword ptr [ebp-4], eax
jmp .Lt_0186
.Lt_018A:
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 56
call HNEWREL
add esp, 20
mov dword ptr [ebp-4], eax
jmp .Lt_0186
.Lt_018B:
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 55
call HNEWREL
add esp, 20
mov dword ptr [ebp-4], eax
jmp .Lt_0186
.Lt_0187:
mov eax, dword ptr [ebp-8]
add eax, 4294967284
cmp eax, 3
ja .Lt_018B
mov eax, dword ptr [ebp-8]
jmp dword ptr [.LT_018C+eax*4-48]
.LT_018C:
.int .Lt_0189
.int .Lt_0189
.int .Lt_018A
.int .Lt_018A
.Lt_0186:
.Lt_0185:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size EMITGT, .-EMITGT
.balign 16

.globl EMITLT
EMITLT:
.type EMITLT, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_018D:
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-8], ebx
jmp .Lt_0190
.Lt_0192:
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 60
call HNEWREL
add esp, 20
mov dword ptr [ebp-4], eax
jmp .Lt_018F
.Lt_0193:
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 59
call HNEWREL
add esp, 20
mov dword ptr [ebp-4], eax
jmp .Lt_018F
.Lt_0194:
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 58
call HNEWREL
add esp, 20
mov dword ptr [ebp-4], eax
jmp .Lt_018F
.Lt_0190:
mov eax, dword ptr [ebp-8]
add eax, 4294967284
cmp eax, 3
ja .Lt_0194
mov eax, dword ptr [ebp-8]
jmp dword ptr [.LT_0195+eax*4-48]
.LT_0195:
.int .Lt_0192
.int .Lt_0192
.int .Lt_0193
.int .Lt_0193
.Lt_018F:
.Lt_018E:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size EMITLT, .-EMITLT
.balign 16

.globl EMITEQ
EMITEQ:
.type EMITEQ, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0196:
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-8], ebx
jmp .Lt_0199
.Lt_019B:
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 63
call HNEWREL
add esp, 20
mov dword ptr [ebp-4], eax
jmp .Lt_0198
.Lt_019C:
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 62
call HNEWREL
add esp, 20
mov dword ptr [ebp-4], eax
jmp .Lt_0198
.Lt_019D:
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 61
call HNEWREL
add esp, 20
mov dword ptr [ebp-4], eax
jmp .Lt_0198
.Lt_0199:
mov eax, dword ptr [ebp-8]
add eax, 4294967284
cmp eax, 3
ja .Lt_019D
mov eax, dword ptr [ebp-8]
jmp dword ptr [.LT_019E+eax*4-48]
.LT_019E:
.int .Lt_019B
.int .Lt_019B
.int .Lt_019C
.int .Lt_019C
.Lt_0198:
.Lt_0197:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size EMITEQ, .-EMITEQ
.balign 16

.globl EMITNE
EMITNE:
.type EMITNE, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_019F:
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-8], ebx
jmp .Lt_01A2
.Lt_01A4:
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 66
call HNEWREL
add esp, 20
mov dword ptr [ebp-4], eax
jmp .Lt_01A1
.Lt_01A5:
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 65
call HNEWREL
add esp, 20
mov dword ptr [ebp-4], eax
jmp .Lt_01A1
.Lt_01A6:
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 64
call HNEWREL
add esp, 20
mov dword ptr [ebp-4], eax
jmp .Lt_01A1
.Lt_01A2:
mov eax, dword ptr [ebp-8]
add eax, 4294967284
cmp eax, 3
ja .Lt_01A6
mov eax, dword ptr [ebp-8]
jmp dword ptr [.LT_01A7+eax*4-48]
.LT_01A7:
.int .Lt_01A4
.int .Lt_01A4
.int .Lt_01A5
.int .Lt_01A5
.Lt_01A1:
.Lt_01A0:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size EMITNE, .-EMITNE
.balign 16

.globl EMITGE
EMITGE:
.type EMITGE, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_01A8:
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-8], ebx
jmp .Lt_01AB
.Lt_01AD:
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 69
call HNEWREL
add esp, 20
mov dword ptr [ebp-4], eax
jmp .Lt_01AA
.Lt_01AE:
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 68
call HNEWREL
add esp, 20
mov dword ptr [ebp-4], eax
jmp .Lt_01AA
.Lt_01AF:
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 67
call HNEWREL
add esp, 20
mov dword ptr [ebp-4], eax
jmp .Lt_01AA
.Lt_01AB:
mov eax, dword ptr [ebp-8]
add eax, 4294967284
cmp eax, 3
ja .Lt_01AF
mov eax, dword ptr [ebp-8]
jmp dword ptr [.LT_01B0+eax*4-48]
.LT_01B0:
.int .Lt_01AD
.int .Lt_01AD
.int .Lt_01AE
.int .Lt_01AE
.Lt_01AA:
.Lt_01A9:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size EMITGE, .-EMITGE
.balign 16

.globl EMITLE
EMITLE:
.type EMITLE, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_01B1:
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-8], ebx
jmp .Lt_01B4
.Lt_01B6:
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 72
call HNEWREL
add esp, 20
mov dword ptr [ebp-4], eax
jmp .Lt_01B3
.Lt_01B7:
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 71
call HNEWREL
add esp, 20
mov dword ptr [ebp-4], eax
jmp .Lt_01B3
.Lt_01B8:
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 70
call HNEWREL
add esp, 20
mov dword ptr [ebp-4], eax
jmp .Lt_01B3
.Lt_01B4:
mov eax, dword ptr [ebp-8]
add eax, 4294967284
cmp eax, 3
ja .Lt_01B8
mov eax, dword ptr [ebp-8]
jmp dword ptr [.LT_01B9+eax*4-48]
.LT_01B9:
.int .Lt_01B6
.int .Lt_01B6
.int .Lt_01B7
.int .Lt_01B7
.Lt_01B3:
.Lt_01B2:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size EMITLE, .-EMITLE
.balign 16

.globl EMITNEG
EMITNEG:
.type EMITNEG, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_01BA:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-8], ebx
jmp .Lt_01BD
.Lt_01BF:
push dword ptr [ebp+8]
push 75
call HNEWUOP
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_01BC
.Lt_01C0:
push dword ptr [ebp+8]
push 74
call HNEWUOP
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_01BC
.Lt_01C1:
push dword ptr [ebp+8]
push 73
call HNEWUOP
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_01BC
.Lt_01BD:
mov eax, dword ptr [ebp-8]
add eax, 4294967284
cmp eax, 3
ja .Lt_01C1
mov eax, dword ptr [ebp-8]
jmp dword ptr [.LT_01C2+eax*4-48]
.LT_01C2:
.int .Lt_01BF
.int .Lt_01BF
.int .Lt_01C0
.int .Lt_01C0
.Lt_01BC:
.Lt_01BB:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size EMITNEG, .-EMITNEG
.balign 16

.globl EMITNOT
EMITNOT:
.type EMITNOT, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_01C3:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-8], ebx
cmp dword ptr [ebp-8], 12
je .Lt_01C8
.Lt_01C9:
cmp dword ptr [ebp-8], 13
jne .Lt_01C7
.Lt_01C8:
push dword ptr [ebp+8]
push 77
call HNEWUOP
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_01C5
.Lt_01C7:
push dword ptr [ebp+8]
push 76
call HNEWUOP
add esp, 8
mov dword ptr [ebp-4], eax
.Lt_01CA:
.Lt_01C5:
.Lt_01C4:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size EMITNOT, .-EMITNOT
.balign 16

.globl EMITHADD
EMITHADD:
.type EMITHADD, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_01CB:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-8], ebx
jmp .Lt_01CE
.Lt_01D0:
push dword ptr [ebp+8]
push 78
call HNEWUOP
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_01CD
.Lt_01D1:
jmp .Lt_01CD
.Lt_01CE:
mov eax, dword ptr [ebp-8]
add eax, 4294967282
cmp eax, 1
ja .Lt_01D1
mov eax, dword ptr [ebp-8]
jmp dword ptr [.LT_01D2+eax*4-56]
.LT_01D2:
.int .Lt_01D0
.int .Lt_01D0
.Lt_01CD:
.Lt_01CC:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size EMITHADD, .-EMITHADD
.balign 16

.globl EMITABS
EMITABS:
.type EMITABS, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_01D3:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-8], ebx
jmp .Lt_01D6
.Lt_01D8:
push dword ptr [ebp+8]
push 81
call HNEWUOP
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_01D5
.Lt_01D9:
push dword ptr [ebp+8]
push 80
call HNEWUOP
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_01D5
.Lt_01DA:
push dword ptr [ebp+8]
push 79
call HNEWUOP
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_01D5
.Lt_01D6:
mov eax, dword ptr [ebp-8]
add eax, 4294967284
cmp eax, 3
ja .Lt_01DA
mov eax, dword ptr [ebp-8]
jmp dword ptr [.LT_01DB+eax*4-48]
.LT_01DB:
.int .Lt_01D8
.int .Lt_01D8
.int .Lt_01D9
.int .Lt_01D9
.Lt_01D5:
.Lt_01D4:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size EMITABS, .-EMITABS
.balign 16

.globl EMITSGN
EMITSGN:
.type EMITSGN, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_01DC:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-8], ebx
jmp .Lt_01DF
.Lt_01E1:
push dword ptr [ebp+8]
push 84
call HNEWUOP
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_01DE
.Lt_01E2:
push dword ptr [ebp+8]
push 83
call HNEWUOP
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_01DE
.Lt_01E3:
push dword ptr [ebp+8]
push 82
call HNEWUOP
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_01DE
.Lt_01DF:
mov eax, dword ptr [ebp-8]
add eax, 4294967284
cmp eax, 3
ja .Lt_01E3
mov eax, dword ptr [ebp-8]
jmp dword ptr [.LT_01E4+eax*4-48]
.LT_01E4:
.int .Lt_01E1
.int .Lt_01E1
.int .Lt_01E2
.int .Lt_01E2
.Lt_01DE:
.Lt_01DD:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size EMITSGN, .-EMITSGN
.balign 16

.globl EMITFIX
EMITFIX:
.type EMITFIX, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_01E5:
push dword ptr [ebp+8]
push 85
call HNEWUOP
add esp, 8
mov dword ptr [ebp-4], eax
.Lt_01E6:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size EMITFIX, .-EMITFIX
.balign 16

.globl EMITFRAC
EMITFRAC:
.type EMITFRAC, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_01E7:
push dword ptr [ebp+8]
push 86
call HNEWUOP
add esp, 8
mov dword ptr [ebp-4], eax
.Lt_01E8:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size EMITFRAC, .-EMITFRAC
.balign 16

.globl EMITCONVFD2FS
EMITCONVFD2FS:
.type EMITCONVFD2FS, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_01E9:
push dword ptr [ebp+8]
push 87
call HNEWUOP
add esp, 8
mov dword ptr [ebp-4], eax
.Lt_01EA:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size EMITCONVFD2FS, .-EMITCONVFD2FS
.balign 16

.globl EMITSIN
EMITSIN:
.type EMITSIN, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_01EB:
push dword ptr [ebp+8]
push 89
call HNEWUOP
add esp, 8
mov dword ptr [ebp-4], eax
.Lt_01EC:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size EMITSIN, .-EMITSIN
.balign 16

.globl EMITASIN
EMITASIN:
.type EMITASIN, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_01ED:
push dword ptr [ebp+8]
push 90
call HNEWUOP
add esp, 8
mov dword ptr [ebp-4], eax
.Lt_01EE:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size EMITASIN, .-EMITASIN
.balign 16

.globl EMITCOS
EMITCOS:
.type EMITCOS, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_01EF:
push dword ptr [ebp+8]
push 91
call HNEWUOP
add esp, 8
mov dword ptr [ebp-4], eax
.Lt_01F0:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size EMITCOS, .-EMITCOS
.balign 16

.globl EMITACOS
EMITACOS:
.type EMITACOS, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_01F1:
push dword ptr [ebp+8]
push 92
call HNEWUOP
add esp, 8
mov dword ptr [ebp-4], eax
.Lt_01F2:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size EMITACOS, .-EMITACOS
.balign 16

.globl EMITTAN
EMITTAN:
.type EMITTAN, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_01F3:
push dword ptr [ebp+8]
push 93
call HNEWUOP
add esp, 8
mov dword ptr [ebp-4], eax
.Lt_01F4:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size EMITTAN, .-EMITTAN
.balign 16

.globl EMITATAN
EMITATAN:
.type EMITATAN, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_01F5:
push dword ptr [ebp+8]
push 94
call HNEWUOP
add esp, 8
mov dword ptr [ebp-4], eax
.Lt_01F6:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size EMITATAN, .-EMITATAN
.balign 16

.globl EMITSQRT
EMITSQRT:
.type EMITSQRT, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_01F7:
push dword ptr [ebp+8]
push 95
call HNEWUOP
add esp, 8
mov dword ptr [ebp-4], eax
.Lt_01F8:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size EMITSQRT, .-EMITSQRT
.balign 16

.globl EMITRSQRT
EMITRSQRT:
.type EMITRSQRT, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_01F9:
push dword ptr [ebp+8]
push 96
call HNEWUOP
add esp, 8
mov dword ptr [ebp-4], eax
.Lt_01FA:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size EMITRSQRT, .-EMITRSQRT
.balign 16

.globl EMITRCP
EMITRCP:
.type EMITRCP, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_01FB:
push dword ptr [ebp+8]
push 97
call HNEWUOP
add esp, 8
mov dword ptr [ebp-4], eax
.Lt_01FC:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size EMITRCP, .-EMITRCP
.balign 16

.globl EMITLOG
EMITLOG:
.type EMITLOG, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_01FD:
push dword ptr [ebp+8]
push 98
call HNEWUOP
add esp, 8
mov dword ptr [ebp-4], eax
.Lt_01FE:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size EMITLOG, .-EMITLOG
.balign 16

.globl EMITEXP
EMITEXP:
.type EMITEXP, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_01FF:
push dword ptr [ebp+8]
push 99
call HNEWUOP
add esp, 8
mov dword ptr [ebp-4], eax
.Lt_0200:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size EMITEXP, .-EMITEXP
.balign 16

.globl EMITFLOOR
EMITFLOOR:
.type EMITFLOOR, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_0201:
push dword ptr [ebp+8]
push 100
call HNEWUOP
add esp, 8
mov dword ptr [ebp-4], eax
.Lt_0202:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size EMITFLOOR, .-EMITFLOOR
.balign 16

.globl EMITXCHGTOS
EMITXCHGTOS:
.type EMITXCHGTOS, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_0203:
push dword ptr [ebp+8]
push 101
call HNEWUOP
add esp, 8
mov dword ptr [ebp-4], eax
.Lt_0204:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size EMITXCHGTOS, .-EMITXCHGTOS
.balign 16

.globl EMITSWZREP
EMITSWZREP:
.type EMITSWZREP, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_0205:
push dword ptr [ebp+8]
push 88
call HNEWUOP
add esp, 8
mov dword ptr [ebp-4], eax
.Lt_0206:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size EMITSWZREP, .-EMITSWZREP
.balign 16

.globl EMITSTACKALIGN
EMITSTACKALIGN:
.type EMITSTACKALIGN, @function
push ebp
mov ebp, esp
sub esp, 72
push ebx
mov dword ptr [ebp-4], 0
.Lt_0207:
lea eax, [ebp-72]
push eax
push edi
mov edi, eax
xor eax, eax
mov ecx, 17
rep stosd
pop edi
pop eax
mov dword ptr [ebp-72], 0
mov ebx, dword ptr [ebp+8]
mov eax, ebx
sar eax, 31
mov dword ptr [ebp-48], ebx
mov dword ptr [ebp-44], eax
push 0
lea ebx, [ebp-72]
push ebx
push 102
call HNEWSTK
add esp, 12
mov dword ptr [ebp-4], eax
.Lt_0208:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size EMITSTACKALIGN, .-EMITSTACKALIGN
.balign 16

.globl EMITPUSH
EMITPUSH:
.type EMITPUSH, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0209:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-8], ebx
jmp .Lt_020C
.Lt_020E:
push 0
push dword ptr [ebp+8]
push 105
call HNEWSTK
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_020B
.Lt_020F:
push 0
push dword ptr [ebp+8]
push 104
call HNEWSTK
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_020B
.Lt_0210:
push 0
push dword ptr [ebp+8]
push 103
call HNEWSTK
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_020B
.Lt_020C:
mov eax, dword ptr [ebp-8]
add eax, 4294967284
cmp eax, 3
ja .Lt_0210
mov eax, dword ptr [ebp-8]
jmp dword ptr [.LT_0211+eax*4-48]
.LT_0211:
.int .Lt_020E
.int .Lt_020E
.int .Lt_020F
.int .Lt_020F
.Lt_020B:
.Lt_020A:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size EMITPUSH, .-EMITPUSH
.balign 16

.globl EMITPOP
EMITPOP:
.type EMITPOP, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0212:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-8], ebx
jmp .Lt_0215
.Lt_0217:
push 0
push dword ptr [ebp+8]
push 108
call HNEWSTK
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_0214
.Lt_0218:
push 0
push dword ptr [ebp+8]
push 107
call HNEWSTK
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_0214
.Lt_0219:
push 0
push dword ptr [ebp+8]
push 106
call HNEWSTK
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_0214
.Lt_0215:
mov eax, dword ptr [ebp-8]
add eax, 4294967284
cmp eax, 3
ja .Lt_0219
mov eax, dword ptr [ebp-8]
jmp dword ptr [.LT_021A+eax*4-48]
.LT_021A:
.int .Lt_0217
.int .Lt_0217
.int .Lt_0218
.int .Lt_0218
.Lt_0214:
.Lt_0213:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size EMITPOP, .-EMITPOP
.balign 16

.globl EMITPUSHUDT
EMITPUSHUDT:
.type EMITPUSHUDT, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_021B:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 109
call HNEWSTK
add esp, 12
mov dword ptr [ebp-4], eax
.Lt_021C:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size EMITPUSHUDT, .-EMITPUSHUDT
.balign 16

.globl EMITPOPST0
EMITPOPST0:
.type EMITPOPST0, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_021D:
push 0
push 0
push 110
call HNEWSTK
add esp, 12
mov dword ptr [ebp-4], eax
.Lt_021E:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size EMITPOPST0, .-EMITPOPST0
.balign 16

.globl EMITCOMMENT
EMITCOMMENT:
.type EMITCOMMENT, @function
push ebp
mov ebp, esp
sub esp, 24
.Lt_021F:
push 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
push 0
push -1
push 0
push dword ptr [ebp+8]
push 3
push offset Lt_0221
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-24]
call HNEWLIT
add esp, 8
lea eax, [ebp-24]
push eax
call fb_StrDelete
add esp, 4
.Lt_0220:
mov esp, ebp
pop ebp
ret
.size EMITCOMMENT, .-EMITCOMMENT
.balign 16

.globl EMITASM
EMITASM:
.type EMITASM, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0224:
push -1
push dword ptr [ebp+8]
call HNEWLIT
add esp, 8
mov dword ptr [ebp-4], 0
.Lt_0229:
mov eax, dword ptr [ebp-4]
sal eax, 2
mov ebx, offset EMIT
add ebx, eax
mov dword ptr [ebx+132], -1
.Lt_0227:
inc dword ptr [ebp-4]
.Lt_0226:
cmp dword ptr [ebp-4], 1
jle .Lt_0229
.Lt_0228:
.Lt_0225:
pop ebx
mov esp, ebp
pop ebp
ret
.size EMITASM, .-EMITASM
.balign 16

.globl EMITJMPTB
EMITJMPTB:
.type EMITJMPTB, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
push esi
mov dword ptr [ebp-4], 0
.Lt_022A:
push 1
mov eax, dword ptr [ebp+20]
sal eax, 3
mov ebx, eax
push ebx
call calloc
add esp, 8
mov dword ptr [ebp-12], eax
push 1
mov eax, dword ptr [ebp+20]
sal eax, 2
mov ebx, eax
push ebx
call calloc
add esp, 8
mov dword ptr [ebp-16], eax
mov dword ptr [ebp-20], 0
mov eax, dword ptr [ebp+20]
dec eax
mov dword ptr [ebp-24], eax
jmp .Lt_022D
.Lt_0230:
mov eax, dword ptr [ebp-20]
sal eax, 3
mov ebx, dword ptr [ebp+12]
add ebx, eax
mov eax, dword ptr [ebp-20]
sal eax, 3
mov ecx, dword ptr [ebp-12]
add ecx, eax
mov esi, dword ptr [ebx]
mov eax, dword ptr [ebx+4]
mov dword ptr [ecx], esi
mov dword ptr [ecx+4], eax
mov esi, dword ptr [ebp-20]
sal esi, 2
mov eax, dword ptr [ebp+16]
add eax, esi
mov esi, dword ptr [ebp-20]
sal esi, 2
mov ecx, dword ptr [ebp-16]
add ecx, esi
mov esi, dword ptr [eax]
mov dword ptr [ecx], esi
.Lt_022E:
inc dword ptr [ebp-20]
.Lt_022D:
mov esi, dword ptr [ebp-24]
cmp dword ptr [ebp-20], esi
jle .Lt_0230
.Lt_022F:
push 0
push 7
call HNEWNODE
add esp, 8
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov esi, dword ptr [ebp+8]
mov dword ptr [eax+4], esi
mov esi, dword ptr [ebp-8]
mov eax, dword ptr [ebp-12]
mov dword ptr [esi+8], eax
mov eax, dword ptr [ebp-8]
mov esi, dword ptr [ebp-16]
mov dword ptr [eax+12], esi
mov esi, dword ptr [ebp-8]
mov eax, dword ptr [ebp+20]
mov dword ptr [esi+16], eax
mov eax, dword ptr [ebp-8]
mov esi, dword ptr [ebp+24]
mov dword ptr [eax+20], esi
mov esi, dword ptr [ebp-8]
mov ecx, dword ptr [ebp+28]
mov eax, dword ptr [ebp+32]
mov dword ptr [esi+24], ecx
mov dword ptr [esi+28], eax
mov ecx, dword ptr [ebp-8]
mov esi, dword ptr [ebp+36]
mov eax, dword ptr [ebp+40]
mov dword ptr [ecx+32], esi
mov dword ptr [ecx+36], eax
mov esi, dword ptr [ebp-8]
mov dword ptr [ebp-4], esi
.Lt_022B:
mov eax, dword ptr [ebp-4]
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size EMITJMPTB, .-EMITJMPTB
.balign 16

.globl EMITCALL
EMITCALL:
.type EMITCALL, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_0231:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 0
push 111
call HNEWBRANCH
add esp, 16
mov dword ptr [ebp-4], eax
.Lt_0232:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size EMITCALL, .-EMITCALL
.balign 16

.globl EMITCALLPTR
EMITCALLPTR:
.type EMITCALLPTR, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_0233:
push dword ptr [ebp+12]
push 0
push dword ptr [ebp+8]
push 112
call HNEWBRANCH
add esp, 16
mov dword ptr [ebp-4], eax
.Lt_0234:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size EMITCALLPTR, .-EMITCALLPTR
.balign 16

.globl EMITBRANCH
EMITBRANCH:
.type EMITBRANCH, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_0235:
push dword ptr [ebp+8]
push dword ptr [ebp+12]
push 0
push 113
call HNEWBRANCH
add esp, 16
mov dword ptr [ebp-4], eax
.Lt_0236:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size EMITBRANCH, .-EMITBRANCH
.balign 16

.globl EMITJUMP
EMITJUMP:
.type EMITJUMP, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_0237:
push 0
push dword ptr [ebp+8]
push 0
push 114
call HNEWBRANCH
add esp, 16
mov dword ptr [ebp-4], eax
.Lt_0238:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size EMITJUMP, .-EMITJUMP
.balign 16

.globl EMITJUMPPTR
EMITJUMPPTR:
.type EMITJUMPPTR, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_0239:
push 0
push 0
push dword ptr [ebp+8]
push 115
call HNEWBRANCH
add esp, 16
mov dword ptr [ebp-4], eax
.Lt_023A:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size EMITJUMPPTR, .-EMITJUMPPTR
.balign 16

.globl EMITRET
EMITRET:
.type EMITRET, @function
push ebp
mov ebp, esp
sub esp, 72
push ebx
mov dword ptr [ebp-4], 0
.Lt_023B:
lea eax, [ebp-72]
push eax
push edi
mov edi, eax
xor eax, eax
mov ecx, 17
rep stosd
pop edi
pop eax
mov dword ptr [ebp-72], 0
mov ebx, dword ptr [ebp+8]
mov eax, ebx
sar eax, 31
mov dword ptr [ebp-48], ebx
mov dword ptr [ebp-44], eax
lea ebx, [ebp-72]
push ebx
push 116
call HNEWUOP
add esp, 8
mov dword ptr [ebp-4], eax
.Lt_023C:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size EMITRET, .-EMITRET
.balign 16

.globl EMITLABEL
EMITLABEL:
.type EMITLABEL, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_023D:
push dword ptr [ebp+8]
push 117
call HNEWSYMOP
add esp, 8
mov dword ptr [ebp-4], eax
.Lt_023E:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size EMITLABEL, .-EMITLABEL
.balign 16

.globl EMITPUBLIC
EMITPUBLIC:
.type EMITPUBLIC, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_023F:
push dword ptr [ebp+8]
push 118
call HNEWSYMOP
add esp, 8
mov dword ptr [ebp-4], eax
.Lt_0240:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size EMITPUBLIC, .-EMITPUBLIC
.balign 16

.globl EMITMEMMOVE
EMITMEMMOVE:
.type EMITMEMMOVE, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_0241:
push 0
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 121
call HNEWMEM
add esp, 20
mov dword ptr [ebp-4], eax
.Lt_0242:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size EMITMEMMOVE, .-EMITMEMMOVE
.balign 16

.globl EMITMEMSWAP
EMITMEMSWAP:
.type EMITMEMSWAP, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_0243:
push 0
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 122
call HNEWMEM
add esp, 20
mov dword ptr [ebp-4], eax
.Lt_0244:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size EMITMEMSWAP, .-EMITMEMSWAP
.balign 16

.globl EMITMEMCLEAR
EMITMEMCLEAR:
.type EMITMEMCLEAR, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_0245:
push 0
push 0
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 123
call HNEWMEM
add esp, 20
mov dword ptr [ebp-4], eax
.Lt_0246:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size EMITMEMCLEAR, .-EMITMEMCLEAR
.balign 16

.globl EMITSTKCLEAR
EMITSTKCLEAR:
.type EMITSTKCLEAR, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_0247:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 0
push 0
push 124
call HNEWMEM
add esp, 20
mov dword ptr [ebp-4], eax
.Lt_0248:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size EMITSTKCLEAR, .-EMITSTKCLEAR
.balign 16

.globl EMITDBGLINEBEGIN
EMITDBGLINEBEGIN:
.type EMITDBGLINEBEGIN, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_0249:
push dword ptr [EMIT+4]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 125
call HNEWDBG
add esp, 16
mov dword ptr [ebp-4], eax
.Lt_024A:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size EMITDBGLINEBEGIN, .-EMITDBGLINEBEGIN
.balign 16

.globl EMITDBGLINEEND
EMITDBGLINEEND:
.type EMITDBGLINEEND, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_024B:
push dword ptr [EMIT+4]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 126
call HNEWDBG
add esp, 16
mov dword ptr [ebp-4], eax
.Lt_024C:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size EMITDBGLINEEND, .-EMITDBGLINEEND
.balign 16

.globl EMITDBGSCOPEBEGIN
EMITDBGSCOPEBEGIN:
.type EMITDBGSCOPEBEGIN, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_024D:
push 0
push 0
push dword ptr [ebp+8]
push 127
call HNEWDBG
add esp, 16
mov dword ptr [ebp-4], eax
.Lt_024E:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size EMITDBGSCOPEBEGIN, .-EMITDBGSCOPEBEGIN
.balign 16

.globl EMITDBGSCOPEEND
EMITDBGSCOPEEND:
.type EMITDBGSCOPEEND, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_024F:
push 0
push 0
push dword ptr [ebp+8]
push 128
call HNEWDBG
add esp, 16
mov dword ptr [ebp-4], eax
.Lt_0250:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size EMITDBGSCOPEEND, .-EMITDBGSCOPEEND
.balign 16
fb_ctor__emit:
.type fb_ctor__emit, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__emit, .-fb_ctor__emit
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
HOPTSYMOP:
.type HOPTSYMOP, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_0086:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-8], ebx
cmp dword ptr [ebp-8], 117
jne .Lt_008A
.Lt_008B:
cmp dword ptr [ebp+8], 0
je .Lt_008D
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx], 5
jne .Lt_008F
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 113
je .Lt_0093
.Lt_0094:
cmp dword ptr [ebp-12], 114
jne .Lt_0092
.Lt_0093:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+12]
mov ecx, dword ptr [ebx+8]
cmp dword ptr [eax+12], ecx
jne .Lt_0096
mov ecx, dword ptr [ebp+8]
mov dword ptr [ecx], 0
.Lt_0096:
.Lt_0095:
.Lt_0092:
.Lt_0090:
.Lt_008F:
.Lt_008E:
.Lt_008D:
.Lt_008C:
mov ecx, dword ptr [ebp+8]
mov dword ptr [ebp-4], ecx
jmp .Lt_0087
.Lt_008A:
.Lt_0088:
mov ecx, dword ptr [ebp+12]
mov dword ptr [ebp-4], ecx
.Lt_0087:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HOPTSYMOP, .-HOPTSYMOP
.balign 16
HPEEPHOLEOPT:
.type HPEEPHOLEOPT, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
.Lt_0097:
mov dword ptr [ebp-8], 0
lea eax, [EMIT+16]
push eax
call FLISTGETHEAD
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_0099:
cmp dword ptr [ebp-4], 0
je .Lt_009A
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-12], ebx
jmp .Lt_009C
.Lt_009E:
push dword ptr [ebp-4]
push dword ptr [ebp-8]
call HOPTSYMOP
add esp, 8
mov dword ptr [ebp-8], eax
jmp .Lt_009B
.Lt_009F:
jmp .Lt_009B
.Lt_00A0:
mov eax, dword ptr [ebp-4]
cmp dword ptr [eax+4], 0
je .Lt_00A2
mov eax, dword ptr [ebp-4]
mov dword ptr [ebp-8], eax
.Lt_00A2:
.Lt_00A1:
jmp .Lt_009B
.Lt_00A3:
mov eax, dword ptr [ebp-4]
mov dword ptr [ebp-8], eax
jmp .Lt_009B
.Lt_009C:
mov eax, dword ptr [ebp-12]
add eax, 4294967290
cmp eax, 4
ja .Lt_00A3
mov eax, dword ptr [ebp-12]
jmp dword ptr [.LT_00A4+eax*4-24]
.LT_00A4:
.int .Lt_00A0
.int .Lt_00A3
.int .Lt_009E
.int .Lt_00A3
.int .Lt_009F
.Lt_009B:
push dword ptr [ebp-4]
call FLISTGETNEXT
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_0099
.Lt_009A:
.Lt_0098:
pop ebx
mov esp, ebp
pop ebp
ret
.size HPEEPHOLEOPT, .-HPEEPHOLEOPT
.balign 16
HNEWVR:
.type HNEWVR, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
push esi
mov dword ptr [ebp-4], 0
.Lt_00BC:
cmp dword ptr [ebp+8], 0
jne .Lt_00BF
mov dword ptr [ebp-4], 0
jmp .Lt_00BD
.Lt_00BF:
.Lt_00BE:
lea eax, [EMIT+72]
push eax
call FLISTNEWITEM
add esp, 4
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-8]
mov ecx, dword ptr [eax]
mov dword ptr [ebx], ecx
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ecx+4]
mov dword ptr [ebx+4], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-8]
mov ecx, dword ptr [eax+32]
mov dword ptr [ebx+32], ecx
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-8]
mov esi, dword ptr [ecx+36]
mov eax, dword ptr [ecx+40]
mov dword ptr [ebx+36], esi
mov dword ptr [ebx+40], eax
mov esi, dword ptr [ebp+8]
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [esi+44]
mov dword ptr [eax+44], ebx
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+24]
mov dword ptr [ebx+24], ecx
mov ecx, dword ptr [eax+28]
mov dword ptr [ebx+28], ecx
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-8]
mov esi, dword ptr [eax+16]
mov dword ptr [ebx+16], esi
mov esi, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [esi+20]
mov dword ptr [ebx+20], eax
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 4
jne .Lt_00C1
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_00C2
mov dword ptr [ebp-16], 22
jmp .Lt_0251
.Lt_00C2:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-16], eax
.Lt_0251:
mov eax, dword ptr [ebp-16]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax]
mov dword ptr [ebp-12], ebx
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+12]
mov ebx, dword ptr [ebp-12]
sal ebx, 2
mov eax, offset EMIT
add eax, ebx
push dword ptr [eax+8]
mov eax, dword ptr [ebp-12]
sal eax, 2
mov ebx, offset EMIT
add ebx, eax
mov eax, dword ptr [ebx+8]
call dword ptr [eax+40]
add esp, 8
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+12], eax
mov eax, dword ptr [ebp-12]
sal eax, 2
mov ebx, offset EMIT
add ebx, eax
mov eax, dword ptr [ebp-8]
mov esi, 1
mov cl, byte ptr [eax+12]
sal esi, cl
or dword ptr [ebx+132], esi
.Lt_00C1:
.Lt_00C0:
mov esi, dword ptr [ebp+8]
push dword ptr [esi+52]
call HNEWVR
add esp, 4
mov esi, dword ptr [ebp-8]
mov dword ptr [esi+52], eax
mov eax, dword ptr [ebp+8]
push dword ptr [eax+48]
call HNEWVR
add esp, 4
mov esi, dword ptr [ebp-8]
mov dword ptr [esi+48], eax
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_00BD:
mov eax, dword ptr [ebp-4]
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size HNEWVR, .-HNEWVR
.balign 16
HNEWNODE:
.type HNEWNODE, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_00C4:
lea eax, [EMIT+16]
push eax
call FLISTNEWITEM
add esp, 4
mov dword ptr [Lt_0252], eax
mov eax, dword ptr [Lt_0252]
mov ebx, dword ptr [ebp+8]
mov dword ptr [eax], ebx
mov dword ptr [Lt_0253], 0
.Lt_00C9:
mov ebx, dword ptr [Lt_0253]
sal ebx, 2
mov eax, offset EMIT
add eax, ebx
mov ebx, dword ptr [eax+8]
mov eax, dword ptr [Lt_0253]
sal eax, 2
mov ecx, dword ptr [Lt_0252]
add ecx, eax
mov eax, dword ptr [ebx+136]
mov dword ptr [ecx+40], eax
.Lt_00C7:
inc dword ptr [Lt_0253]
.Lt_00C6:
cmp dword ptr [Lt_0253], 1
jle .Lt_00C9
.Lt_00C8:
cmp dword ptr [ebp+12], 0
je .Lt_00CB
inc dword ptr [EMIT+4]
.Lt_00CB:
.Lt_00CA:
mov eax, dword ptr [Lt_0252]
mov dword ptr [ebp-4], eax
.Lt_00C5:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HNEWNODE, .-HNEWNODE

.section .bss
.balign 4
	.lcomm	Lt_0252,4
.balign 4
	.lcomm	Lt_0253,4

.section .text
.balign 16
HNEWBOP:
.type HNEWBOP, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_00CC:
push -1
push 1
call HNEWNODE
add esp, 8
mov dword ptr [Lt_0254], eax
mov eax, dword ptr [Lt_0254]
mov ebx, dword ptr [ebp+8]
mov dword ptr [eax+4], ebx
push dword ptr [ebp+12]
call HNEWVR
add esp, 4
mov ebx, dword ptr [Lt_0254]
mov dword ptr [ebx+8], eax
push dword ptr [ebp+16]
call HNEWVR
add esp, 4
mov ebx, dword ptr [Lt_0254]
mov dword ptr [ebx+12], eax
mov eax, dword ptr [Lt_0254]
mov dword ptr [ebp-4], eax
.Lt_00CD:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HNEWBOP, .-HNEWBOP

.section .bss
.balign 4
	.lcomm	Lt_0254,4

.section .text
.balign 16
HNEWUOP:
.type HNEWUOP, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_00CE:
push -1
push 2
call HNEWNODE
add esp, 8
mov dword ptr [Lt_0255], eax
mov eax, dword ptr [Lt_0255]
mov ebx, dword ptr [ebp+8]
mov dword ptr [eax+4], ebx
push dword ptr [ebp+12]
call HNEWVR
add esp, 4
mov ebx, dword ptr [Lt_0255]
mov dword ptr [ebx+8], eax
mov eax, dword ptr [Lt_0255]
mov dword ptr [ebp-4], eax
.Lt_00CF:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HNEWUOP, .-HNEWUOP

.section .bss
.balign 4
	.lcomm	Lt_0255,4

.section .text
.balign 16
HNEWREL:
.type HNEWREL, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_00D0:
push -1
push 3
call HNEWNODE
add esp, 8
mov dword ptr [Lt_0256], eax
mov eax, dword ptr [Lt_0256]
mov ebx, dword ptr [ebp+8]
mov dword ptr [eax+4], ebx
push dword ptr [ebp+12]
call HNEWVR
add esp, 4
mov ebx, dword ptr [Lt_0256]
mov dword ptr [ebx+8], eax
mov eax, dword ptr [Lt_0256]
mov ebx, dword ptr [ebp+16]
mov dword ptr [eax+12], ebx
push dword ptr [ebp+20]
call HNEWVR
add esp, 4
mov ebx, dword ptr [Lt_0256]
mov dword ptr [ebx+16], eax
push dword ptr [ebp+24]
call HNEWVR
add esp, 4
mov ebx, dword ptr [Lt_0256]
mov dword ptr [ebx+20], eax
mov eax, dword ptr [Lt_0256]
mov dword ptr [ebp-4], eax
.Lt_00D1:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HNEWREL, .-HNEWREL

.section .bss
.balign 4
	.lcomm	Lt_0256,4

.section .text
.balign 16
HNEWSTK:
.type HNEWSTK, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_00D2:
push -1
push 4
call HNEWNODE
add esp, 8
mov dword ptr [Lt_0257], eax
mov eax, dword ptr [Lt_0257]
mov ebx, dword ptr [ebp+8]
mov dword ptr [eax+4], ebx
push dword ptr [ebp+12]
call HNEWVR
add esp, 4
mov ebx, dword ptr [Lt_0257]
mov dword ptr [ebx+8], eax
mov eax, dword ptr [Lt_0257]
mov ebx, dword ptr [ebp+16]
mov dword ptr [eax+12], ebx
mov ebx, dword ptr [Lt_0257]
mov dword ptr [ebp-4], ebx
.Lt_00D3:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HNEWSTK, .-HNEWSTK

.section .bss
.balign 4
	.lcomm	Lt_0257,4

.section .text
.balign 16
HNEWBRANCH:
.type HNEWBRANCH, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_00D4:
push -1
push 5
call HNEWNODE
add esp, 8
mov dword ptr [Lt_0258], eax
mov eax, dword ptr [Lt_0258]
mov ebx, dword ptr [ebp+8]
mov dword ptr [eax+4], ebx
mov ebx, dword ptr [Lt_0258]
mov eax, dword ptr [ebp+16]
mov dword ptr [ebx+12], eax
push dword ptr [ebp+12]
call HNEWVR
add esp, 4
mov ebx, dword ptr [Lt_0258]
mov dword ptr [ebx+8], eax
mov eax, dword ptr [Lt_0258]
mov ebx, dword ptr [ebp+20]
mov dword ptr [eax+16], ebx
mov ebx, dword ptr [Lt_0258]
mov dword ptr [ebp-4], ebx
.Lt_00D5:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HNEWBRANCH, .-HNEWBRANCH

.section .bss
.balign 4
	.lcomm	Lt_0258,4

.section .text
.balign 16
HNEWSYMOP:
.type HNEWSYMOP, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_00D6:
push 0
push 8
call HNEWNODE
add esp, 8
mov dword ptr [Lt_0259], eax
mov eax, dword ptr [Lt_0259]
mov ebx, dword ptr [ebp+8]
mov dword ptr [eax+4], ebx
mov ebx, dword ptr [Lt_0259]
mov eax, dword ptr [ebp+12]
mov dword ptr [ebx+8], eax
mov eax, dword ptr [Lt_0259]
mov dword ptr [ebp-4], eax
.Lt_00D7:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HNEWSYMOP, .-HNEWSYMOP

.section .bss
.balign 4
	.lcomm	Lt_0259,4

.section .text
.balign 16
HNEWLIT:
.type HNEWLIT, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_00D8:
push dword ptr [ebp+12]
push 6
call HNEWNODE
add esp, 8
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [ebp+12]
mov dword ptr [eax+4], ebx
push 0
push dword ptr [ebp+8]
call fb_StrLen
add esp, 8
inc eax
mov ebx, eax
push ebx
call XALLOCATE
add esp, 4
mov ebx, dword ptr [ebp-4]
mov dword ptr [ebx+8], eax
push 0
push 0
push dword ptr [ebp+8]
push 0
mov eax, dword ptr [ebp-4]
push dword ptr [eax+8]
call fb_StrAssign
add esp, 20
.Lt_00D9:
pop ebx
mov esp, ebp
pop ebp
ret
.size HNEWLIT, .-HNEWLIT
.balign 16
HNEWMEM:
.type HNEWMEM, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_00DA:
push -1
push 9
call HNEWNODE
add esp, 8
mov dword ptr [Lt_025A], eax
mov eax, dword ptr [Lt_025A]
mov ebx, dword ptr [ebp+8]
mov dword ptr [eax+4], ebx
push dword ptr [ebp+12]
call HNEWVR
add esp, 4
mov ebx, dword ptr [Lt_025A]
mov dword ptr [ebx+8], eax
push dword ptr [ebp+16]
call HNEWVR
add esp, 4
mov ebx, dword ptr [Lt_025A]
mov dword ptr [ebx+12], eax
mov eax, dword ptr [Lt_025A]
mov ebx, dword ptr [ebp+20]
mov dword ptr [eax+16], ebx
mov ebx, dword ptr [Lt_025A]
mov eax, dword ptr [ebp+24]
mov dword ptr [ebx+20], eax
mov eax, dword ptr [Lt_025A]
mov dword ptr [ebp-4], eax
.Lt_00DB:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HNEWMEM, .-HNEWMEM

.section .bss
.balign 4
	.lcomm	Lt_025A,4

.section .text
.balign 16
HNEWDBG:
.type HNEWDBG, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_00DC:
push 0
push 10
call HNEWNODE
add esp, 8
mov dword ptr [Lt_025B], eax
mov eax, dword ptr [Lt_025B]
mov ebx, dword ptr [ebp+8]
mov dword ptr [eax+4], ebx
mov ebx, dword ptr [Lt_025B]
mov eax, dword ptr [ebp+12]
mov dword ptr [ebx+8], eax
mov eax, dword ptr [Lt_025B]
mov ebx, dword ptr [ebp+16]
mov dword ptr [eax+12], ebx
mov ebx, dword ptr [Lt_025B]
mov eax, dword ptr [ebp+20]
mov dword ptr [ebx+16], eax
mov eax, dword ptr [Lt_025B]
mov dword ptr [ebp-4], eax
.Lt_00DD:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HNEWDBG, .-HNEWDBG

.section .bss
.balign 4
	.lcomm	Lt_025B,4
	#fbc-1.01.0/src/compiler/emit.bas' compilation took 0.0446510057663545 secs
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

.globl EMIT
.balign 4
	.lcomm	EMIT,256
.balign 4
	.lcomm	Lt_006C,32

.section .rodata
.balign 4
Lt_0079:	.ascii	"\t\0"
.balign 4
Lt_007B:	.ascii	"\n\0"
.balign 4
Lt_0221:	.ascii	"##\0"

.section .ctors, "aw", @progbits
.int fb_ctor__emit
