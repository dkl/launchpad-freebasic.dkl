	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/lex.bas' compilation started at 15:27:34 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl LEXPUSHCTX
LEXPUSHCTX:
.type LEXPUSHCTX, @function
.Lt_005F:
add dword ptr [LEX+839664], 49392
.Lt_0060:
ret
.size LEXPUSHCTX, .-LEXPUSHCTX
.balign 16

.globl LEXPOPCTX
LEXPOPCTX:
.type LEXPOPCTX, @function
push ebx
.Lt_0061:
cmp dword ptr [ENV+828], 0
jne .Lt_0064
push 0
mov eax, dword ptr [LEX+839664]
lea ebx, [eax+49376]
push ebx
call DZSTRALLOCATE
add esp, 8
.Lt_0064:
.Lt_0063:
cmp dword ptr [ENV+516], 0
jne .Lt_0066
push 0
mov ebx, dword ptr [LEX+839664]
lea eax, [ebx+16576]
push eax
call DZSTRALLOCATE
add esp, 8
jmp .Lt_0065
.Lt_0066:
push 0
mov eax, dword ptr [LEX+839664]
lea ebx, [eax+16576]
push ebx
call DWSTRALLOCATE
add esp, 8
.Lt_0065:
add dword ptr [LEX+839664], -49392
.Lt_0062:
pop ebx
ret
.size LEXPOPCTX, .-LEXPOPCTX
.balign 16

.globl LEXINIT
LEXINIT:
.type LEXINIT, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_0067:
mov dword ptr [ebp-4], 0
mov dword ptr [ebp-8], 0
cmp dword ptr [ENV+828], 0
jne .Lt_006A
lea eax, [LEX]
mov dword ptr [LEX+839664], eax
.Lt_006A:
.Lt_0069:
mov eax, dword ptr [LEX+839664]
mov dword ptr [eax+16528], 0
mov eax, dword ptr [LEX+839664]
lea ebx, [eax]
mov eax, dword ptr [LEX+839664]
mov dword ptr [eax+16532], ebx
mov ebx, dword ptr [LEX+839664]
mov eax, dword ptr [LEX+839664]
mov ecx, dword ptr [ebx+16532]
mov dword ptr [eax+16536], ecx
mov ecx, dword ptr [LEX+839664]
mov eax, dword ptr [ecx+16532]
mov dword ptr [ebp-8], eax
mov dword ptr [ebp-4], 0
.Lt_006E:
mov eax, dword ptr [ebp-4]
imul eax, 4132
mov ecx, dword ptr [LEX+839664]
add ecx, eax
lea eax, [ecx+4132]
mov ecx, dword ptr [ebp-8]
mov dword ptr [ecx+4128], eax
mov eax, dword ptr [ebp-8]
mov ecx, dword ptr [eax+4128]
mov dword ptr [ebp-8], ecx
.Lt_006C:
inc dword ptr [ebp-4]
.Lt_006B:
cmp dword ptr [ebp-4], 2
jle .Lt_006E
.Lt_006D:
mov ecx, dword ptr [LEX+839664]
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ecx+16532]
mov dword ptr [eax+4128], ebx
mov dword ptr [ebp-4], 0
.Lt_0072:
mov ebx, dword ptr [ebp-4]
imul ebx, 4132
mov eax, dword ptr [LEX+839664]
add eax, ebx
mov dword ptr [eax], -1
.Lt_0070:
inc dword ptr [ebp-4]
.Lt_006F:
cmp dword ptr [ebp-4], 3
jle .Lt_0072
.Lt_0071:
mov eax, dword ptr [LEX+839664]
mov dword ptr [eax+16540], 4294967295
mov eax, dword ptr [LEX+839664]
mov dword ptr [eax+16544], 4294967295
mov eax, dword ptr [LEX+839664]
mov dword ptr [eax+16548], 1
mov eax, dword ptr [LEX+839664]
mov dword ptr [eax+16552], -1
mov eax, dword ptr [LEX+839664]
mov dword ptr [eax+16556], 0
mov eax, dword ptr [LEX+839664]
mov dword ptr [eax+16560], 0
mov eax, dword ptr [LEX+839664]
mov dword ptr [eax+16588], 0
mov eax, dword ptr [LEX+839664]
mov dword ptr [eax+16568], 0
cmp dword ptr [ENV+516], 0
jne .Lt_0074
mov eax, dword ptr [LEX+839664]
mov dword ptr [eax+16592], 0
mov eax, dword ptr [LEX+839664]
mov dword ptr [eax+16572], 0
push 0
mov eax, dword ptr [LEX+839664]
lea ebx, [eax+16576]
push ebx
call DZSTRALLOCATE
add esp, 8
jmp .Lt_0073
.Lt_0074:
mov ebx, dword ptr [LEX+839664]
mov dword ptr [ebx+16592], 0
mov ebx, dword ptr [LEX+839664]
mov dword ptr [ebx+16572], 0
push 0
mov ebx, dword ptr [LEX+839664]
lea eax, [ebx+16576]
push eax
call DWSTRALLOCATE
add esp, 8
.Lt_0073:
mov eax, dword ptr [LEX+839664]
mov dword ptr [eax+49368], 0
mov eax, dword ptr [LEX+839664]
mov dword ptr [eax+49372], 0
cmp dword ptr [ENV+828], 0
jne .Lt_0076
push 0
mov eax, dword ptr [LEX+839664]
lea ebx, [eax+49376]
push ebx
call DZSTRALLOCATE
add esp, 8
mov dword ptr [LEX+839668], 0
.Lt_0076:
.Lt_0075:
mov ebx, dword ptr [LEX+839664]
mov dword ptr [ebx+49388], 0
cmp dword ptr [ebp+8], 0
jne .Lt_0078
call PPINIT
.Lt_0078:
.Lt_0077:
.Lt_0068:
pop ebx
mov esp, ebp
pop ebp
ret
.size LEXINIT, .-LEXINIT
.balign 16

.globl LEXEND
LEXEND:
.type LEXEND, @function
.Lt_0079:
push 0
push 1
push offset Lt_0000
push -1
push offset PPONLY_LN
call fb_StrAssign
add esp, 20
call PPEND
.Lt_007A:
ret
.size LEXEND, .-LEXEND
.balign 16

.globl LEXEATCHAR
LEXEATCHAR:
.type LEXEATCHAR, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_00B0:
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [eax+16540]
mov dword ptr [ebp-4], ebx
mov ebx, dword ptr [LEX+839664]
cmp dword ptr [ebx+16544], 4294967295
jne .Lt_00B3
call HSKIPCHAR
mov ebx, dword ptr [LEX+839664]
mov dword ptr [ebx+16540], 4294967295
jmp .Lt_00B2
.Lt_00B3:
mov ebx, dword ptr [LEX+839664]
mov eax, dword ptr [LEX+839664]
mov ecx, dword ptr [ebx+16544]
mov dword ptr [eax+16540], ecx
mov ecx, dword ptr [LEX+839664]
mov dword ptr [ecx+16544], 4294967295
.Lt_00B2:
.Lt_00B1:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size LEXEATCHAR, .-LEXEATCHAR
.balign 16

.globl LEXCURRENTCHAR
LEXCURRENTCHAR:
.type LEXCURRENTCHAR, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_00BF:
mov eax, dword ptr [LEX+839664]
cmp dword ptr [eax+16540], 4294967295
jne .Lt_00C2
call HREADCHAR
mov ebx, dword ptr [LEX+839664]
mov dword ptr [ebx+16540], eax
.Lt_00C2:
.Lt_00C1:
cmp dword ptr [ebp+8], 0
je .Lt_00C4
.Lt_00C5:
mov eax, dword ptr [LEX+839664]
cmp dword ptr [eax+16540], 9
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [LEX+839664]
cmp dword ptr [eax+16540], 32
sete cl
shr ecx, 1
sbb ecx, ecx
or ebx, ecx
je .Lt_00C6
mov ecx, dword ptr [LEX+839664]
mov dword ptr [ecx+49388], -1
call LEXEATCHAR
call HREADCHAR
mov ecx, dword ptr [LEX+839664]
mov dword ptr [ecx+16540], eax
jmp .Lt_00C5
.Lt_00C6:
.Lt_00C4:
.Lt_00C3:
mov eax, dword ptr [LEX+839664]
mov ecx, dword ptr [eax+16540]
mov dword ptr [ebp-4], ecx
.Lt_00C0:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size LEXCURRENTCHAR, .-LEXCURRENTCHAR
.balign 16

.globl LEXGETLOOKAHEADCHAR
LEXGETLOOKAHEADCHAR:
.type LEXGETLOOKAHEADCHAR, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_00C9:
mov eax, dword ptr [LEX+839664]
cmp dword ptr [eax+16544], 4294967295
jne .Lt_00CC
call HSKIPCHAR
call HREADCHAR
mov ebx, dword ptr [LEX+839664]
mov dword ptr [ebx+16544], eax
.Lt_00CC:
.Lt_00CB:
cmp dword ptr [ebp+8], 0
je .Lt_00CE
.Lt_00CF:
mov eax, dword ptr [LEX+839664]
cmp dword ptr [eax+16544], 9
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [LEX+839664]
cmp dword ptr [eax+16544], 32
sete cl
shr ecx, 1
sbb ecx, ecx
or ebx, ecx
je .Lt_00D0
mov ecx, dword ptr [LEX+839664]
mov dword ptr [ecx+49388], -1
call HSKIPCHAR
call HREADCHAR
mov ecx, dword ptr [LEX+839664]
mov dword ptr [ecx+16544], eax
jmp .Lt_00CF
.Lt_00D0:
.Lt_00CE:
.Lt_00CD:
mov eax, dword ptr [LEX+839664]
mov ecx, dword ptr [eax+16544]
mov dword ptr [ebp-4], ecx
.Lt_00CA:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size LEXGETLOOKAHEADCHAR, .-LEXGETLOOKAHEADCHAR
.balign 16

.globl LEXNEXTTOKEN
LEXNEXTTOKEN:
.type LEXNEXTTOKEN, @function
push ebp
mov ebp, esp
sub esp, 28
push ebx
push esi
.Lt_02A4:
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [eax+49388]
mov dword ptr [ebx+4124], ecx
mov ecx, dword ptr [LEX+839664]
mov dword ptr [ecx+49388], 0
.Lt_02A6:
mov ecx, dword ptr [ebp+8]
mov byte ptr [ecx+12], 0
mov ecx, dword ptr [ebp+8]
mov dword ptr [ecx+4112], 0
mov ecx, dword ptr [ebp+8]
mov dword ptr [ecx+4116], 0
mov dword ptr [ebp-8], 0
.Lt_02A7:
push 0
call LEXCURRENTCHAR
add esp, 4
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp-4]
mov dword ptr [ebp-20], eax
jmp .Lt_02AB
.Lt_02AD:
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 256
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+4], 6
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+8], -2147483648
jmp .Lt_02A5
jmp .Lt_02AA
.Lt_02AE:
cmp dword ptr [ebp-8], 0
je .Lt_02B0
call LEXEATCHAR
jmp .Lt_02A9
.Lt_02B0:
.Lt_02AF:
mov eax, dword ptr [ebp+12]
and eax, 1
test eax, eax
jne .Lt_02B2
push 0
call LEXGETLOOKAHEADCHAR
add esp, 4
mov dword ptr [ebp-24], eax
jmp .Lt_02B4
.Lt_02B6:
jmp .Lt_02B7
jmp .Lt_02B3
.Lt_02B8:
call LEXEATCHAR
mov dword ptr [ebp-8], -1
jmp .Lt_02A9
jmp .Lt_02B3
.Lt_02B4:
mov eax, dword ptr [ebp-24]
add eax, 4294967248
cmp eax, 74
ja .Lt_02B8
mov eax, dword ptr [ebp-24]
jmp dword ptr [.LT_02B9+eax*4-192]
.LT_02B9:
.int .Lt_02B6
.int .Lt_02B6
.int .Lt_02B6
.int .Lt_02B6
.int .Lt_02B6
.int .Lt_02B6
.int .Lt_02B6
.int .Lt_02B6
.int .Lt_02B6
.int .Lt_02B6
.int .Lt_02B8
.int .Lt_02B8
.int .Lt_02B8
.int .Lt_02B8
.int .Lt_02B8
.int .Lt_02B8
.int .Lt_02B8
.int .Lt_02B6
.int .Lt_02B6
.int .Lt_02B6
.int .Lt_02B6
.int .Lt_02B6
.int .Lt_02B6
.int .Lt_02B6
.int .Lt_02B6
.int .Lt_02B6
.int .Lt_02B6
.int .Lt_02B6
.int .Lt_02B6
.int .Lt_02B6
.int .Lt_02B6
.int .Lt_02B6
.int .Lt_02B6
.int .Lt_02B6
.int .Lt_02B6
.int .Lt_02B6
.int .Lt_02B6
.int .Lt_02B6
.int .Lt_02B6
.int .Lt_02B6
.int .Lt_02B6
.int .Lt_02B6
.int .Lt_02B6
.int .Lt_02B8
.int .Lt_02B8
.int .Lt_02B8
.int .Lt_02B8
.int .Lt_02B6
.int .Lt_02B8
.int .Lt_02B6
.int .Lt_02B6
.int .Lt_02B6
.int .Lt_02B6
.int .Lt_02B6
.int .Lt_02B6
.int .Lt_02B6
.int .Lt_02B6
.int .Lt_02B6
.int .Lt_02B6
.int .Lt_02B6
.int .Lt_02B6
.int .Lt_02B6
.int .Lt_02B6
.int .Lt_02B6
.int .Lt_02B6
.int .Lt_02B6
.int .Lt_02B6
.int .Lt_02B6
.int .Lt_02B6
.int .Lt_02B6
.int .Lt_02B6
.int .Lt_02B6
.int .Lt_02B6
.int .Lt_02B6
.int .Lt_02B6
.Lt_02B3:
jmp .Lt_02B1
.Lt_02B2:
jmp .Lt_02A8
.Lt_02B1:
jmp .Lt_02AA
.Lt_02BA:
call LEXEATCHAR
cmp dword ptr [ebp-4], 13
jne .Lt_02BC
push 0
call LEXCURRENTCHAR
add esp, 4
cmp eax, 10
jne .Lt_02BE
call LEXEATCHAR
.Lt_02BE:
.Lt_02BD:
.Lt_02BC:
.Lt_02BB:
cmp dword ptr [ebp-8], 0
jne .Lt_02C0
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 257
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+4], 6
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+8], -2147483648
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+4112], 1
mov eax, dword ptr [ebp+8]
mov byte ptr [eax+12], 10
mov eax, dword ptr [ebp+8]
mov byte ptr [eax+13], 0
jmp .Lt_02A5
jmp .Lt_02BF
.Lt_02C0:
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+4124], -1
mov eax, dword ptr [LEX+839664]
cmp dword ptr [eax+16568], 0
jne .Lt_02C2
mov eax, dword ptr [LEX+839664]
inc dword ptr [eax+16548]
.Lt_02C2:
.Lt_02C1:
mov dword ptr [ebp-8], 0
jmp .Lt_02A9
.Lt_02BF:
jmp .Lt_02AA
.Lt_02C3:
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+4124], -1
cmp dword ptr [ebp-8], 0
jne .Lt_02C5
mov eax, dword ptr [ebp+12]
and eax, 4
test eax, eax
je .Lt_02C7
jmp .Lt_02A8
.Lt_02C7:
.Lt_02C6:
.Lt_02C5:
.Lt_02C4:
call LEXEATCHAR
jmp .Lt_02AA
.Lt_02C8:
cmp dword ptr [ebp-8], 0
jne .Lt_02CA
jmp .Lt_02A8
.Lt_02CA:
.Lt_02C9:
call LEXEATCHAR
jmp .Lt_02AA
.Lt_02AB:
cmp dword ptr [ebp-20], 95
ja .Lt_02C8
mov eax, dword ptr [ebp-20]
jmp dword ptr [.LT_02CB+eax*4]
.LT_02CB:
.int .Lt_02AD
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C3
.int .Lt_02BA
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02BA
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C3
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02C8
.int .Lt_02AE
.Lt_02AA:
.Lt_02A9:
jmp .Lt_02A7
.Lt_02A8:
mov eax, dword ptr [LEX+839664]
mov ecx, dword ptr [LEX+839664]
mov ebx, dword ptr [LEX+839664]
lea esi, [ebx+16596]
mov ebx, dword ptr [ecx+16592]
sub ebx, esi
add ebx, dword ptr [eax+49368]
dec ebx
mov eax, dword ptr [LEX+839664]
mov dword ptr [eax+49372], ebx
mov ebx, dword ptr [ebp-4]
mov dword ptr [ebp-20], ebx
jmp .Lt_02CD
.Lt_02CF:
mov ebx, dword ptr [ebp+12]
and ebx, 9
test ebx, ebx
jne .Lt_02D1
push -1
call LEXGETLOOKAHEADCHAR
add esp, 4
mov dword ptr [ebp-24], eax
cmp dword ptr [ebp-24], 48
setae al
shr eax, 1
sbb eax, eax
cmp dword ptr [ebp-24], 57
setbe bl
shr ebx, 1
sbb ebx, ebx
and eax, ebx
je .Lt_02D3
jmp .Lt_02D4
.Lt_02D3:
.Lt_02D2:
.Lt_02D1:
.Lt_02D0:
jmp .Lt_02D5
jmp .Lt_02CC
.Lt_02D6:
push 0
call LEXGETLOOKAHEADCHAR
add esp, 4
mov dword ptr [ebp-24], eax
cmp dword ptr [ebp-24], 72
je .Lt_02DA
.Lt_02DB:
cmp dword ptr [ebp-24], 104
je .Lt_02DA
.Lt_02DC:
cmp dword ptr [ebp-24], 79
je .Lt_02DA
.Lt_02DD:
cmp dword ptr [ebp-24], 111
je .Lt_02DA
.Lt_02DE:
cmp dword ptr [ebp-24], 66
je .Lt_02DA
.Lt_02DF:
cmp dword ptr [ebp-24], 98
jne .Lt_02D9
.Lt_02DA:
jmp .Lt_02D4
.Lt_02D9:
.Lt_02D7:
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+4], 5
call LEXEATCHAR
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+8]
mov esi, dword ptr [eax]
mov dword ptr [ebx+8], esi
mov esi, dword ptr [ebp+8]
mov dword ptr [esi+4112], 1
mov bl, byte ptr [ebp-4]
mov esi, dword ptr [ebp+8]
mov byte ptr [esi+12], bl
mov ebx, dword ptr [ebp+8]
mov byte ptr [ebx+13], 0
jmp .Lt_02CC
.Lt_02E0:
.Lt_02D4:
push dword ptr [ebp+12]
mov ebx, dword ptr [ebp+8]
lea esi, [ebx+4112]
push esi
mov esi, dword ptr [ebp+8]
lea ebx, [esi]
push ebx
mov ebx, dword ptr [ebp+8]
lea esi, [ebx+12]
push esi
call HREADNUMBER
add esp, 16
mov esi, dword ptr [ebp+8]
mov dword ptr [esi+4], 3
mov esi, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [esi]
mov dword ptr [ebx+8], eax
jmp .Lt_02CC
.Lt_02E1:
.Lt_02B7:
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [eax+16560]
mov dword ptr [ebp-24], ebx
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+4112], 0
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+4120], 0
push dword ptr [ebp+12]
mov ebx, dword ptr [ebp+8]
lea eax, [ebx+8]
push eax
mov eax, dword ptr [ebp+8]
lea ebx, [eax+4112]
push ebx
mov ebx, dword ptr [ebp+8]
lea eax, [ebx+12]
push eax
call HREADIDENTIFIER
add esp, 16
mov eax, dword ptr [ebp+12]
and eax, 256
test eax, eax
je .Lt_02E3
push 0
push 0
mov eax, dword ptr [ebp+8]
lea ebx, [eax+12]
push ebx
mov ebx, dword ptr [LEX+839664]
push dword ptr [ebx+16564]
call SYMBLOOKUPAT
add esp, 16
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+4116], eax
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+4116], 0
jne .Lt_02E5
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 265
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+4], 0
jmp .Lt_02E4
.Lt_02E5:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4116]
mov eax, dword ptr [ebx]
mov ebx, dword ptr [ebp+8]
mov esi, dword ptr [eax+52]
mov dword ptr [ebx], esi
mov esi, dword ptr [ebp+8]
mov ebx, dword ptr [esi+4116]
mov esi, dword ptr [ebx]
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [esi+56]
mov dword ptr [ebx+4], eax
.Lt_02E4:
jmp .Lt_02A5
.Lt_02E3:
.Lt_02E2:
mov eax, dword ptr [ebp+12]
and eax, 32
test eax, eax
je .Lt_02E7
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 265
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+4], 0
jmp .Lt_02A5
.Lt_02E7:
.Lt_02E6:
push 0
mov eax, dword ptr [ebp+8]
lea ebx, [eax+4]
push ebx
mov ebx, dword ptr [ebp+8]
lea eax, [ebx]
push eax
mov eax, dword ptr [ebp+8]
lea ebx, [eax+12]
push ebx
call SYMBLOOKUP
add esp, 16
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+4116], eax
mov eax, dword ptr [ebp+12]
and eax, 2
test eax, eax
je .Lt_02E9
jmp .Lt_02A5
.Lt_02E9:
.Lt_02E8:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4116]
mov dword ptr [ebp-16], ebx
cmp dword ptr [ebp-16], 0
je .Lt_02EB
mov ebx, dword ptr [ebp-16]
mov eax, dword ptr [ebx]
cmp dword ptr [eax], 5
jne .Lt_02ED
push dword ptr [ebp-24]
mov eax, dword ptr [ebp-16]
push dword ptr [eax]
call PPDEFINELOAD
add esp, 8
test eax, eax
je .Lt_02EF
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+4124], -1
jmp .Lt_02A6
.Lt_02EF:
.Lt_02EE:
.Lt_02ED:
.Lt_02EC:
.Lt_02EB:
.Lt_02EA:
mov eax, dword ptr [ENV+840]
and eax, 524288
test eax, eax
je .Lt_02F1
mov eax, dword ptr [ebp+12]
and eax, 64
test eax, eax
je .Lt_02F3
jmp .Lt_02A5
.Lt_02F3:
.Lt_02F2:
push dword ptr [ebp-16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HCHECKPERIODS
add esp, 12
.Lt_02F1:
.Lt_02F0:
jmp .Lt_02CC
.Lt_02F4:
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+4], 4
cmp dword ptr [ENV+884], 0
je .Lt_02F5
mov dword ptr [ebp-24], 263
jmp .Lt_0336
.Lt_02F5:
mov dword ptr [ebp-24], 262
.Lt_0336:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-24]
mov dword ptr [eax], ebx
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+8], -2147483648
cmp dword ptr [ENV+516], 0
jne .Lt_02F8
push dword ptr [ebp+12]
mov ebx, dword ptr [ebp+8]
lea eax, [ebx+12]
push eax
push dword ptr [ebp+8]
call HREADSTRING
add esp, 12
jmp .Lt_02F7
.Lt_02F8:
push dword ptr [ebp+12]
mov eax, dword ptr [ebp+8]
lea ebx, [eax+12]
push ebx
push dword ptr [ebp+8]
call HREADWSTR
add esp, 12
.Lt_02F7:
jmp .Lt_02CC
.Lt_02F9:
push 0
call LEXGETLOOKAHEADCHAR
add esp, 4
cmp eax, 34
je .Lt_02FB
jmp .Lt_02D5
.Lt_02FB:
.Lt_02FA:
call LEXEATCHAR
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+4], 4
cmp dword ptr [ebp-4], 33
jne .Lt_02FC
mov dword ptr [ebp-24], 263
jmp .Lt_0337
.Lt_02FC:
mov dword ptr [ebp-24], 264
.Lt_0337:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-24]
mov dword ptr [eax], ebx
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+8], -2147483648
cmp dword ptr [ENV+516], 0
jne .Lt_02FF
mov ebx, dword ptr [ebp+12]
and ebx, 16
test ebx, ebx
jne .Lt_0301
mov ebx, dword ptr [ebp+8]
lea eax, [ebx+12]
mov dword ptr [ebp-28], eax
jmp .Lt_0300
.Lt_0301:
mov al, byte ptr [ebp-4]
mov ebx, dword ptr [ebp+8]
mov byte ptr [ebx+12], al
mov eax, dword ptr [ebp+8]
lea ebx, [eax+12]
inc ebx
mov dword ptr [ebp-28], ebx
.Lt_0300:
push dword ptr [ebp+12]
push dword ptr [ebp-28]
push dword ptr [ebp+8]
call HREADSTRING
add esp, 12
jmp .Lt_02FE
.Lt_02FF:
mov ebx, dword ptr [ebp+12]
and ebx, 16
test ebx, ebx
jne .Lt_0303
mov ebx, dword ptr [ebp+8]
lea eax, [ebx+12]
mov dword ptr [ebp-28], eax
jmp .Lt_0302
.Lt_0303:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-4]
mov dword ptr [eax+12], ebx
mov ebx, dword ptr [ebp+8]
lea eax, [ebx+12]
add eax, 4
mov dword ptr [ebp-28], eax
.Lt_0302:
push dword ptr [ebp+12]
push dword ptr [ebp-28]
push dword ptr [ebp+8]
call HREADWSTR
add esp, 12
.Lt_02FE:
jmp .Lt_02CC
.Lt_0304:
.Lt_02D5:
call LEXEATCHAR
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+8]
mov esi, dword ptr [eax]
mov dword ptr [ebx+8], esi
mov esi, dword ptr [ebp+8]
mov dword ptr [esi+4112], 1
mov bl, byte ptr [ebp-4]
mov esi, dword ptr [ebp+8]
mov byte ptr [esi+12], bl
mov ebx, dword ptr [ebp+8]
mov byte ptr [ebx+13], 0
mov ebx, dword ptr [ebp-4]
mov dword ptr [ebp-24], ebx
jmp .Lt_0306
.Lt_0308:
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+4], 5
cmp dword ptr [ebp-4], 60
jne .Lt_030A
.Lt_030B:
push -1
call LEXCURRENTCHAR
add esp, 4
mov dword ptr [ebp-28], eax
cmp dword ptr [ebp-28], 61
jne .Lt_030E
.Lt_030F:
call LEXEATCHAR
mov bl, al
mov eax, dword ptr [ebp+8]
lea esi, [eax+12]
mov eax, dword ptr [ebp+8]
add esi, dword ptr [eax+4112]
mov byte ptr [esi], bl
mov ebx, dword ptr [ebp+8]
lea esi, [ebx+12]
mov ebx, dword ptr [ebp+8]
add esi, dword ptr [ebx+4112]
mov byte ptr [esi+1], 0
mov esi, dword ptr [ebp+8]
inc dword ptr [esi+4112]
mov esi, dword ptr [ebp+8]
mov dword ptr [esi], 303
jmp .Lt_030C
.Lt_030E:
cmp dword ptr [ebp-28], 62
jne .Lt_0310
.Lt_0311:
call LEXEATCHAR
mov bl, al
mov eax, dword ptr [ebp+8]
lea esi, [eax+12]
mov eax, dword ptr [ebp+8]
add esi, dword ptr [eax+4112]
mov byte ptr [esi], bl
mov ebx, dword ptr [ebp+8]
lea esi, [ebx+12]
mov ebx, dword ptr [ebp+8]
add esi, dword ptr [ebx+4112]
mov byte ptr [esi+1], 0
mov esi, dword ptr [ebp+8]
inc dword ptr [esi+4112]
mov esi, dword ptr [ebp+8]
mov dword ptr [esi], 302
jmp .Lt_030C
.Lt_0310:
mov esi, dword ptr [ebp+8]
mov dword ptr [esi], 301
.Lt_0312:
.Lt_030C:
jmp .Lt_0309
.Lt_030A:
cmp dword ptr [ebp-4], 62
jne .Lt_0313
.Lt_0314:
mov esi, dword ptr [PARSER+144]
and esi, 512
test esi, esi
setne dl
mov esi, edx
shr esi, 1
sbb esi, esi
test esi, esi
sete dl
mov esi, edx
shr esi, 1
sbb esi, esi
test esi, esi
je .Lt_0315
push -1
call LEXCURRENTCHAR
add esp, 4
cmp eax, 61
sete dl
mov esi, edx
shr esi, 1
sbb esi, esi
test esi, esi
setne dl
mov esi, edx
shr esi, 1
sbb esi, esi
mov dword ptr [ebp-28], esi
jmp .Lt_0338
.Lt_0315:
mov dword ptr [ebp-28], 0
.Lt_0338:
cmp dword ptr [ebp-28], 0
je .Lt_0318
call LEXEATCHAR
mov bl, al
mov eax, dword ptr [ebp+8]
lea esi, [eax+12]
mov eax, dword ptr [ebp+8]
add esi, dword ptr [eax+4112]
mov byte ptr [esi], bl
mov ebx, dword ptr [ebp+8]
lea esi, [ebx+12]
mov ebx, dword ptr [ebp+8]
add esi, dword ptr [ebx+4112]
mov byte ptr [esi+1], 0
mov esi, dword ptr [ebp+8]
inc dword ptr [esi+4112]
mov esi, dword ptr [ebp+8]
mov dword ptr [esi], 304
jmp .Lt_0317
.Lt_0318:
mov esi, dword ptr [ebp+8]
mov dword ptr [esi], 300
.Lt_0317:
jmp .Lt_0309
.Lt_0313:
cmp dword ptr [ebp-4], 61
jne .Lt_0319
.Lt_031A:
push -1
call LEXCURRENTCHAR
add esp, 4
cmp eax, 62
jne .Lt_031C
call LEXEATCHAR
mov bl, al
mov eax, dword ptr [ebp+8]
lea esi, [eax+12]
mov eax, dword ptr [ebp+8]
add esi, dword ptr [eax+4112]
mov byte ptr [esi], bl
mov ebx, dword ptr [ebp+8]
lea esi, [ebx+12]
mov ebx, dword ptr [ebp+8]
add esi, dword ptr [ebx+4112]
mov byte ptr [esi+1], 0
mov esi, dword ptr [ebp+8]
inc dword ptr [esi+4112]
mov esi, dword ptr [ebp+8]
mov dword ptr [esi], 305
jmp .Lt_031B
.Lt_031C:
mov esi, dword ptr [ebp+8]
mov dword ptr [esi], 299
.Lt_031B:
.Lt_0319:
.Lt_0309:
jmp .Lt_0305
.Lt_031D:
mov esi, dword ptr [ebp+8]
mov dword ptr [esi+4], 5
jmp .Lt_0305
.Lt_031E:
mov esi, dword ptr [ebp+8]
mov dword ptr [esi+4], 5
push -1
call LEXCURRENTCHAR
add esp, 4
cmp eax, 62
jne .Lt_0320
call LEXEATCHAR
mov bl, al
mov eax, dword ptr [ebp+8]
lea esi, [eax+12]
mov eax, dword ptr [ebp+8]
add esi, dword ptr [eax+4112]
mov byte ptr [esi], bl
mov ebx, dword ptr [ebp+8]
lea esi, [ebx+12]
mov ebx, dword ptr [ebp+8]
add esi, dword ptr [ebx+4112]
mov byte ptr [esi+1], 0
mov esi, dword ptr [ebp+8]
inc dword ptr [esi+4112]
mov esi, dword ptr [ebp+8]
mov dword ptr [esi], 397
.Lt_0320:
.Lt_031F:
jmp .Lt_0305
.Lt_0321:
mov esi, dword ptr [ebp+8]
mov dword ptr [esi+4], 5
mov esi, dword ptr [ebp+12]
and esi, 512
test esi, esi
sete dl
mov esi, edx
shr esi, 1
sbb esi, esi
mov ebx, dword ptr [ENV+136]
test ebx, ebx
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
sete bl
shr ebx, 1
sbb ebx, ebx
or esi, ebx
je .Lt_0323
push 0
call LEXCURRENTCHAR
add esp, 4
cmp eax, 39
jne .Lt_0325
call HMULTILINECOMMENT
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+4124], -1
jmp .Lt_02A6
.Lt_0325:
.Lt_0324:
.Lt_0323:
.Lt_0322:
jmp .Lt_0305
.Lt_0326:
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+4], 6
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 259
jmp .Lt_0305
.Lt_0327:
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+4], 6
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 258
jmp .Lt_0305
.Lt_0328:
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+4], 6
jmp .Lt_0305
.Lt_0329:
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+4], 6
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 32
.Lt_032A:
push 0
call LEXCURRENTCHAR
add esp, 4
mov dword ptr [ebp-28], eax
jmp .Lt_032E
.Lt_0330:
call LEXEATCHAR
mov eax, dword ptr [ebp+8]
lea ebx, [eax+12]
mov eax, dword ptr [ebp+8]
add ebx, dword ptr [eax+4112]
mov byte ptr [ebx], 32
mov ebx, dword ptr [ebp+8]
inc dword ptr [ebx+4112]
jmp .Lt_032D
.Lt_0331:
mov ebx, dword ptr [ebp+8]
lea eax, [ebx+12]
mov ebx, dword ptr [ebp+8]
add eax, dword ptr [ebx+4112]
mov byte ptr [eax], 0
jmp .Lt_032B
jmp .Lt_032D
.Lt_032E:
mov eax, dword ptr [ebp-28]
add eax, 4294967287
cmp eax, 23
ja .Lt_0331
mov eax, dword ptr [ebp-28]
jmp dword ptr [.LT_0332+eax*4-36]
.LT_0332:
.int .Lt_0330
.int .Lt_0331
.int .Lt_0331
.int .Lt_0331
.int .Lt_0331
.int .Lt_0331
.int .Lt_0331
.int .Lt_0331
.int .Lt_0331
.int .Lt_0331
.int .Lt_0331
.int .Lt_0331
.int .Lt_0331
.int .Lt_0331
.int .Lt_0331
.int .Lt_0331
.int .Lt_0331
.int .Lt_0331
.int .Lt_0331
.int .Lt_0331
.int .Lt_0331
.int .Lt_0331
.int .Lt_0331
.int .Lt_0330
.Lt_032D:
.Lt_032C:
jmp .Lt_032A
.Lt_032B:
jmp .Lt_0305
.Lt_0333:
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+4], 7
jmp .Lt_0305
.Lt_0306:
mov eax, dword ptr [ebp-24]
add eax, 4294967287
cmp eax, 116
ja .Lt_0333
mov eax, dword ptr [ebp-24]
jmp dword ptr [.LT_0334+eax*4-36]
.LT_0334:
.int .Lt_0329
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0329
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0326
.int .Lt_0328
.int .Lt_0328
.int .Lt_031D
.int .Lt_031D
.int .Lt_0328
.int .Lt_031E
.int .Lt_0328
.int .Lt_0321
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0327
.int .Lt_0328
.int .Lt_0308
.int .Lt_0308
.int .Lt_0308
.int .Lt_0333
.int .Lt_031D
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0328
.int .Lt_031D
.int .Lt_0328
.int .Lt_031D
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0333
.int .Lt_0328
.int .Lt_0333
.int .Lt_0328
.Lt_0305:
jmp .Lt_02CC
.Lt_02CD:
mov eax, dword ptr [ebp-20]
add eax, 4294967263
cmp eax, 89
ja .Lt_0304
mov eax, dword ptr [ebp-20]
jmp dword ptr [.LT_0335+eax*4-132]
.LT_0335:
.int .Lt_02F9
.int .Lt_02F4
.int .Lt_0304
.int .Lt_02F9
.int .Lt_0304
.int .Lt_02D6
.int .Lt_0304
.int .Lt_0304
.int .Lt_0304
.int .Lt_0304
.int .Lt_0304
.int .Lt_0304
.int .Lt_0304
.int .Lt_02CF
.int .Lt_0304
.int .Lt_02E0
.int .Lt_02E0
.int .Lt_02E0
.int .Lt_02E0
.int .Lt_02E0
.int .Lt_02E0
.int .Lt_02E0
.int .Lt_02E0
.int .Lt_02E0
.int .Lt_02E0
.int .Lt_0304
.int .Lt_0304
.int .Lt_0304
.int .Lt_0304
.int .Lt_0304
.int .Lt_0304
.int .Lt_0304
.int .Lt_02E1
.int .Lt_02E1
.int .Lt_02E1
.int .Lt_02E1
.int .Lt_02E1
.int .Lt_02E1
.int .Lt_02E1
.int .Lt_02E1
.int .Lt_02E1
.int .Lt_02E1
.int .Lt_02E1
.int .Lt_02E1
.int .Lt_02E1
.int .Lt_02E1
.int .Lt_02E1
.int .Lt_02E1
.int .Lt_02E1
.int .Lt_02E1
.int .Lt_02E1
.int .Lt_02E1
.int .Lt_02E1
.int .Lt_02E1
.int .Lt_02E1
.int .Lt_02E1
.int .Lt_02E1
.int .Lt_02E1
.int .Lt_0304
.int .Lt_0304
.int .Lt_0304
.int .Lt_0304
.int .Lt_0304
.int .Lt_0304
.int .Lt_02E1
.int .Lt_02E1
.int .Lt_02E1
.int .Lt_02E1
.int .Lt_02E1
.int .Lt_02E1
.int .Lt_02E1
.int .Lt_02E1
.int .Lt_02E1
.int .Lt_02E1
.int .Lt_02E1
.int .Lt_02E1
.int .Lt_02E1
.int .Lt_02E1
.int .Lt_02E1
.int .Lt_02E1
.int .Lt_02E1
.int .Lt_02E1
.int .Lt_02E1
.int .Lt_02E1
.int .Lt_02E1
.int .Lt_02E1
.int .Lt_02E1
.int .Lt_02E1
.int .Lt_02E1
.int .Lt_02E1
.Lt_02CC:
.Lt_02A5:
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size LEXNEXTTOKEN, .-LEXNEXTTOKEN
.balign 16

.globl LEXGETTOKEN
LEXGETTOKEN:
.type LEXGETTOKEN, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_035D:
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [eax+16532]
cmp dword ptr [ebx], -1
jne .Lt_0360
push dword ptr [ebp+8]
mov ebx, dword ptr [LEX+839664]
push dword ptr [ebx+16532]
call LEXNEXTTOKEN
add esp, 8
call PPCHECK
.Lt_0360:
.Lt_035F:
mov ebx, dword ptr [LEX+839664]
mov eax, dword ptr [ebx+16532]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-4], ebx
.Lt_035E:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size LEXGETTOKEN, .-LEXGETTOKEN
.balign 16

.globl LEXGETCLASS
LEXGETCLASS:
.type LEXGETCLASS, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_0361:
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [eax+16532]
cmp dword ptr [ebx], -1
jne .Lt_0364
push dword ptr [ebp+8]
mov ebx, dword ptr [LEX+839664]
push dword ptr [ebx+16532]
call LEXNEXTTOKEN
add esp, 8
call PPCHECK
.Lt_0364:
.Lt_0363:
mov ebx, dword ptr [LEX+839664]
mov eax, dword ptr [ebx+16532]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-4], ebx
.Lt_0362:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size LEXGETCLASS, .-LEXGETCLASS
.balign 16

.globl LEXGETLOOKAHEAD
LEXGETLOOKAHEAD:
.type LEXGETLOOKAHEAD, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_0365:
cmp dword ptr [ebp+8], 3
jle .Lt_0368
jmp .Lt_0366
.Lt_0368:
.Lt_0367:
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [eax+16528]
cmp dword ptr [ebp+8], ebx
jle .Lt_036A
mov ebx, dword ptr [LEX+839664]
mov eax, dword ptr [ebp+8]
mov dword ptr [ebx+16528], eax
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [eax+16536]
mov eax, dword ptr [LEX+839664]
mov ecx, dword ptr [ebx+4128]
mov dword ptr [eax+16536], ecx
.Lt_036A:
.Lt_0369:
mov ecx, dword ptr [LEX+839664]
mov eax, dword ptr [ecx+16536]
cmp dword ptr [eax], -1
jne .Lt_036C
push dword ptr [ebp+12]
mov eax, dword ptr [LEX+839664]
push dword ptr [eax+16536]
call LEXNEXTTOKEN
add esp, 8
.Lt_036C:
.Lt_036B:
mov eax, dword ptr [LEX+839664]
mov ecx, dword ptr [eax+16536]
mov eax, dword ptr [ecx]
mov dword ptr [ebp-4], eax
.Lt_0366:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size LEXGETLOOKAHEAD, .-LEXGETLOOKAHEAD
.balign 16

.globl LEXGETLOOKAHEADCLASS
LEXGETLOOKAHEADCLASS:
.type LEXGETLOOKAHEADCLASS, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_036D:
cmp dword ptr [ebp+8], 3
jle .Lt_0370
jmp .Lt_036E
.Lt_0370:
.Lt_036F:
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [eax+16528]
cmp dword ptr [ebp+8], ebx
jle .Lt_0372
mov ebx, dword ptr [LEX+839664]
mov eax, dword ptr [ebp+8]
mov dword ptr [ebx+16528], eax
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [eax+16536]
mov eax, dword ptr [LEX+839664]
mov ecx, dword ptr [ebx+4128]
mov dword ptr [eax+16536], ecx
.Lt_0372:
.Lt_0371:
mov ecx, dword ptr [LEX+839664]
mov eax, dword ptr [ecx+16536]
cmp dword ptr [eax], -1
jne .Lt_0374
push dword ptr [ebp+12]
mov eax, dword ptr [LEX+839664]
push dword ptr [eax+16536]
call LEXNEXTTOKEN
add esp, 8
.Lt_0374:
.Lt_0373:
mov eax, dword ptr [LEX+839664]
mov ecx, dword ptr [eax+16536]
mov eax, dword ptr [ecx+4]
mov dword ptr [ebp-4], eax
.Lt_036E:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size LEXGETLOOKAHEADCLASS, .-LEXGETLOOKAHEADCLASS
.balign 16

.globl LEXPPONLYEMITTOKEN
LEXPPONLYEMITTOKEN:
.type LEXPPONLYEMITTOKEN, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
.Lt_0394:
push 0
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 259
je .Lt_0399
.Lt_039A:
cmp dword ptr [ebp-4], 260
jne .Lt_0398
.Lt_0399:
jmp .Lt_0395
jmp .Lt_0396
.Lt_0398:
cmp dword ptr [ebp-4], 256
je .Lt_039C
.Lt_039D:
cmp dword ptr [ebp-4], 257
jne .Lt_039B
.Lt_039C:
push -1
push offset PPONLY_LN
call fb_StrLen
add esp, 8
test eax, eax
jle .Lt_039F
mov eax, dword ptr [ENV+800]
mov dword ptr [ebp-8], eax
push 1
push offset PPONLY_LN
push dword ptr [ebp-8]
call fb_PrintString
add esp, 12
push 0
push 1
push offset Lt_0000
push -1
push offset PPONLY_LN
call fb_StrAssign
add esp, 20
jmp .Lt_039E
.Lt_039F:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 257
jne .Lt_03A1
mov eax, dword ptr [LEX+839664]
cmp dword ptr [eax+16552], 257
jne .Lt_03A3
mov eax, dword ptr [ENV+800]
mov dword ptr [ebp-8], eax
push 1
push 0
push offset Lt_0000
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push dword ptr [ebp-8]
call fb_PrintString
add esp, 12
.Lt_03A3:
.Lt_03A2:
.Lt_03A1:
.Lt_039E:
jmp .Lt_0395
.Lt_039B:
.Lt_0396:
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [eax+16532]
cmp dword ptr [ebx+4124], 0
je .Lt_03A6
push 0
push 2
push offset Lt_03A7
push -1
push offset PPONLY_LN
call fb_StrConcatAssign
add esp, 20
.Lt_03A6:
.Lt_03A5:
push 0
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 262
je .Lt_03AB
.Lt_03AC:
cmp dword ptr [ebp-4], 263
je .Lt_03AB
.Lt_03AD:
cmp dword ptr [ebp-4], 264
jne .Lt_03AA
.Lt_03AB:
push 0
push -1
push 0
call LEXGETTOKEN
add esp, 4
push eax
call LEXGETSTRLITTEXT
add esp, 4
push eax
push -1
push offset PPONLY_LN
call fb_StrConcatAssign
add esp, 20
jmp .Lt_03A8
.Lt_03AA:
push 0
push -1
push 0
call LEXGETTEXT
push eax
push -1
push offset PPONLY_LN
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
lea eax, [ebp-16]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset PPONLY_LN
call fb_StrAssign
add esp, 20
.Lt_03AE:
.Lt_03A8:
.Lt_0395:
pop ebx
mov esp, ebp
pop ebp
ret
.size LEXPPONLYEMITTOKEN, .-LEXPPONLYEMITTOKEN
.balign 16

.globl LEXPPONLYEMITTEXT
LEXPPONLYEMITTEXT:
.type LEXPPONLYEMITTEXT, @function
push ebp
mov ebp, esp
sub esp, 12
.Lt_03B0:
push 0
push -1
push -1
push dword ptr [ebp+8]
push -1
push offset PPONLY_LN
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset PPONLY_LN
call fb_StrAssign
add esp, 20
.Lt_03B1:
mov esp, ebp
pop ebp
ret
.size LEXPPONLYEMITTEXT, .-LEXPPONLYEMITTEXT
.balign 16

.globl LEXSKIPTOKEN
LEXSKIPTOKEN:
.type LEXSKIPTOKEN, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_03B3:
cmp dword ptr [ENV+800], 0
jle .Lt_03B6
mov eax, dword ptr [LEX+839664]
cmp dword ptr [eax+16556], 0
jne .Lt_03B8
call LEXPPONLYEMITTOKEN
.Lt_03B8:
.Lt_03B7:
.Lt_03B6:
.Lt_03B5:
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [eax+16532]
mov eax, dword ptr [ebx]
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 257
jne .Lt_03BB
.Lt_03BC:
mov eax, dword ptr [LEX+839664]
cmp dword ptr [eax+16568], 0
jne .Lt_03BE
mov eax, dword ptr [LEX+839664]
inc dword ptr [eax+16548]
.Lt_03BE:
.Lt_03BD:
.Lt_03BB:
.Lt_03B9:
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [eax+16532]
mov eax, dword ptr [LEX+839664]
mov ecx, dword ptr [ebx]
mov dword ptr [eax+16552], ecx
mov ecx, dword ptr [LEX+839664]
cmp dword ptr [ecx+16528], 0
jne .Lt_03C0
push dword ptr [ebp+8]
mov ecx, dword ptr [LEX+839664]
push dword ptr [ecx+16532]
call LEXNEXTTOKEN
add esp, 8
jmp .Lt_03BF
.Lt_03C0:
call HMOVEKDOWN
.Lt_03BF:
call PPCHECK
.Lt_03B4:
pop ebx
mov esp, ebp
pop ebp
ret
.size LEXSKIPTOKEN, .-LEXSKIPTOKEN
.balign 16

.globl LEXEATTOKEN
LEXEATTOKEN:
.type LEXEATTOKEN, @function
push ebp
mov ebp, esp
push ebx
.Lt_03C1:
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [eax+16532]
cmp dword ptr [ebx+8], 6
je .Lt_03C4
push 0
push 1025
mov ebx, dword ptr [LEX+839664]
mov eax, dword ptr [ebx+16532]
lea ebx, [eax+12]
push ebx
push 0
push dword ptr [ebp+8]
call fb_StrAssign
add esp, 20
jmp .Lt_03C3
.Lt_03C4:
push 0
push -1
mov ebx, dword ptr [LEX+839664]
mov eax, dword ptr [ebx+16532]
lea ebx, [eax+12]
push ebx
call fb_WstrToStr
add esp, 4
push eax
push 0
push dword ptr [ebp+8]
call fb_StrAssign
add esp, 20
.Lt_03C3:
push dword ptr [ebp+12]
call LEXSKIPTOKEN
add esp, 4
.Lt_03C2:
pop ebx
mov esp, ebp
pop ebp
ret
.size LEXEATTOKEN, .-LEXEATTOKEN
.balign 16

.globl LEXGETTEXT
LEXGETTEXT:
.type LEXGETTEXT, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_03C5:
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [eax+16532]
cmp dword ptr [ebx+8], 6
je .Lt_03C8
mov ebx, dword ptr [LEX+839664]
mov eax, dword ptr [ebx+16532]
lea ebx, [eax+12]
mov dword ptr [ebp-4], ebx
jmp .Lt_03C7
.Lt_03C8:
push 0
push -1
mov ebx, dword ptr [LEX+839664]
mov eax, dword ptr [ebx+16532]
lea ebx, [eax+12]
push ebx
call fb_WstrToStr
add esp, 4
push eax
push 1025
push offset Lt_03C9
call fb_StrAssign
add esp, 20
mov eax, offset Lt_03C9
mov dword ptr [ebp-4], eax
.Lt_03C7:
.Lt_03C6:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size LEXGETTEXT, .-LEXGETTEXT

.section .bss
.balign 4
	.lcomm	Lt_03C9,1025

.section .text
.balign 16

.globl LEXREADLINE
LEXREADLINE:
.type LEXREADLINE, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
.Lt_03CA:
cmp dword ptr [ebp+16], 0
jne .Lt_03CD
push 0
push 1
push offset Lt_0000
push 0
push dword ptr [ebp+12]
call fb_StrAssign
add esp, 20
.Lt_03CD:
.Lt_03CC:
.Lt_03CE:
mov eax, dword ptr [LEX+839664]
cmp dword ptr [eax+16528], 0
jle .Lt_03CF
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [eax+16532]
mov eax, dword ptr [ebx]
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 256
je .Lt_03D3
.Lt_03D4:
cmp dword ptr [ebp-4], 257
je .Lt_03D3
.Lt_03D5:
mov eax, dword ptr [ebp+8]
cmp dword ptr [ebp-4], eax
jne .Lt_03D2
.Lt_03D3:
jmp .Lt_03CB
jmp .Lt_03D0
.Lt_03D2:
cmp dword ptr [ebp+16], 0
jne .Lt_03D8
push 0
push -1
push 1025
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [eax+16532]
lea eax, [ebx+12]
push eax
push 0
push dword ptr [ebp+12]
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
lea eax, [ebp-16]
push eax
call fb_StrConcat
add esp, 20
push eax
push 0
push dword ptr [ebp+12]
call fb_StrAssign
add esp, 20
.Lt_03D8:
.Lt_03D7:
.Lt_03D6:
.Lt_03D0:
call HMOVEKDOWN
jmp .Lt_03CE
.Lt_03CF:
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [eax+16532]
mov eax, dword ptr [ebx]
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 256
je .Lt_03DD
.Lt_03DE:
cmp dword ptr [ebp-4], 257
je .Lt_03DD
.Lt_03DF:
mov eax, dword ptr [ebp+8]
cmp dword ptr [ebp-4], eax
jne .Lt_03DC
.Lt_03DD:
jmp .Lt_03CB
jmp .Lt_03DA
.Lt_03DC:
cmp dword ptr [ebp+16], 0
jne .Lt_03E2
push 0
push -1
push 1025
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [eax+16532]
lea eax, [ebx+12]
push eax
push 0
push dword ptr [ebp+12]
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
lea eax, [ebp-16]
push eax
call fb_StrConcat
add esp, 20
push eax
push 0
push dword ptr [ebp+12]
call fb_StrAssign
add esp, 20
.Lt_03E2:
.Lt_03E1:
.Lt_03E0:
.Lt_03DA:
.Lt_03E4:
push 0
call LEXCURRENTCHAR
add esp, 4
mov dword ptr [Lt_03F7], eax
mov eax, dword ptr [Lt_03F7]
mov dword ptr [ebp-4], eax
jmp .Lt_03E8
.Lt_03EA:
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [eax+16532]
mov dword ptr [ebx], 256
mov ebx, dword ptr [LEX+839664]
mov eax, dword ptr [ebx+16532]
mov dword ptr [eax+4], 6
jmp .Lt_03CB
jmp .Lt_03E7
.Lt_03EB:
call LEXEATCHAR
cmp dword ptr [Lt_03F7], 13
jne .Lt_03ED
push 0
call LEXCURRENTCHAR
add esp, 4
cmp eax, 10
jne .Lt_03EF
call LEXEATCHAR
.Lt_03EF:
.Lt_03ED:
.Lt_03EC:
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [eax+16532]
mov dword ptr [ebx], 257
mov ebx, dword ptr [LEX+839664]
mov eax, dword ptr [ebx+16532]
mov dword ptr [eax+4], 6
jmp .Lt_03CB
jmp .Lt_03E7
.Lt_03F0:
mov eax, dword ptr [ebp+8]
cmp dword ptr [Lt_03F7], eax
jne .Lt_03F2
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [eax+16532]
mov eax, dword ptr [ebp+8]
mov dword ptr [ebx], eax
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [eax+16532]
mov dword ptr [ebx+4], 6
jmp .Lt_03CB
.Lt_03F2:
.Lt_03F1:
jmp .Lt_03E7
.Lt_03E8:
cmp dword ptr [ebp-4], 13
ja .Lt_03F0
mov ebx, dword ptr [ebp-4]
jmp dword ptr [.LT_03F3+ebx*4]
.LT_03F3:
.int .Lt_03EA
.int .Lt_03F0
.int .Lt_03F0
.int .Lt_03F0
.int .Lt_03F0
.int .Lt_03F0
.int .Lt_03F0
.int .Lt_03F0
.int .Lt_03F0
.int .Lt_03F0
.int .Lt_03EB
.int .Lt_03F0
.int .Lt_03F0
.int .Lt_03EB
.Lt_03E7:
call LEXEATCHAR
cmp dword ptr [ebp+16], 0
jne .Lt_03F5
push 0
push -1
push -1
push dword ptr [Lt_03F7]
push 1
call fb_CHR
add esp, 8
push eax
push 0
push dword ptr [ebp+12]
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
push 0
push dword ptr [ebp+12]
call fb_StrAssign
add esp, 20
.Lt_03F5:
.Lt_03F4:
.Lt_03E6:
jmp .Lt_03E4
.Lt_03E5:
.Lt_03CB:
pop ebx
mov esp, ebp
pop ebp
ret
.size LEXREADLINE, .-LEXREADLINE

.section .bss
.balign 4
	.lcomm	Lt_03F7,4

.section .text
.balign 16

.globl LEXSKIPLINE
LEXSKIPLINE:
.type LEXSKIPLINE, @function
.Lt_03F8:
push -1
push 0
push 4294967295
call LEXREADLINE
add esp, 12
.Lt_03F9:
ret
.size LEXSKIPLINE, .-LEXSKIPLINE
.balign 16

.globl LEXPEEKCURRENTLINE
LEXPEEKCURRENTLINE:
.type LEXPEEKCURRENTLINE, @function
push ebp
mov ebp, esp
sub esp, 76
push ebx
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_03FA:
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-48], 0
push 0
push 1
push offset Lt_0000
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
cmp dword ptr [ENV+516], 0
je .Lt_03FD
lea eax, [ebp-24]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_03FB
.Lt_03FD:
.Lt_03FC:
push dword ptr [ENV+240]
call fb_FileTell
add esp, 4
mov ebx, eax
mov dword ptr [ebp-32], ebx
mov ebx, dword ptr [LEX+839664]
mov eax, dword ptr [ebx+49372]
add eax, -512
mov dword ptr [ebp-28], eax
mov dword ptr [ebp-36], 512
cmp dword ptr [ebp-28], 0
jge .Lt_03FF
mov eax, dword ptr [ebp-28]
add dword ptr [ebp-36], eax
mov dword ptr [ebp-28], 0
.Lt_03FF:
.Lt_03FE:
push 1025
push offset Lt_0439
mov eax, dword ptr [ebp-28]
inc eax
mov ebx, eax
push ebx
push dword ptr [ENV+240]
call fb_FileGetStr
add esp, 16
test eax, eax
je .Lt_0400
push 0
push 0
push offset Lt_0401
push 2370
call fb_ErrorThrowAt
add esp, 16
jmp eax
.Lt_0400:
push dword ptr [ebp-32]
push dword ptr [ENV+240]
call fb_FileSeek
add esp, 8
test eax, eax
je .Lt_0402
push 0
push 0
push offset Lt_0401
push 2371
call fb_ErrorThrowAt
add esp, 16
jmp eax
.Lt_0402:
mov eax, offset Lt_0439
add eax, dword ptr [ebp-36]
mov dword ptr [ebp-44], eax
mov dword ptr [ebp-40], 0
cmp dword ptr [ebp-36], 0
jle .Lt_0404
dec dword ptr [ebp-44]
.Lt_0405:
mov eax, dword ptr [ebp-44]
movzx ebx, byte ptr [eax]
mov dword ptr [ebp-48], ebx
cmp dword ptr [ebp-48], 13
je .Lt_040A
.Lt_040B:
cmp dword ptr [ebp-48], 10
jne .Lt_0409
.Lt_040A:
jmp .Lt_0406
.Lt_0409:
.Lt_0408:
cmp dword ptr [ebp-36], 0
jg .Lt_040D
jmp .Lt_0406
.Lt_040D:
.Lt_040C:
inc dword ptr [ebp-40]
dec dword ptr [ebp-44]
dec dword ptr [ebp-36]
.Lt_0407:
jmp .Lt_0405
.Lt_0406:
inc dword ptr [ebp-44]
.Lt_0404:
.Lt_0403:
push 0
push 1
push offset Lt_0000
push -1
lea ebx, [ebp-24]
push ebx
call fb_StrAssign
add esp, 20
push 0
push 1
push offset Lt_0000
push -1
push dword ptr [ebp+8]
call fb_StrAssign
add esp, 20
.Lt_040E:
mov ebx, dword ptr [ebp-44]
movzx eax, byte ptr [ebx]
mov dword ptr [ebp-48], eax
cmp dword ptr [ebp-48], 0
je .Lt_0413
.Lt_0414:
cmp dword ptr [ebp-48], 13
je .Lt_0413
.Lt_0415:
cmp dword ptr [ebp-48], 10
jne .Lt_0412
.Lt_0413:
jmp .Lt_040F
.Lt_0412:
.Lt_0411:
push 0
push -1
push dword ptr [ebp-48]
push 1
call fb_CHR
add esp, 8
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
cmp dword ptr [ebp-40], 0
jle .Lt_0417
push 0
push -1
push -1
cmp dword ptr [ebp-48], 9
jne .Lt_0418
mov dword ptr [ebp-64], 9
jmp .Lt_0438
.Lt_0418:
mov dword ptr [ebp-64], 32
.Lt_0438:
push dword ptr [ebp-64]
push 1
call fb_CHR
add esp, 8
push eax
push -1
push dword ptr [ebp+8]
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
lea eax, [ebp-76]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+8]
call fb_StrAssign
add esp, 20
dec dword ptr [ebp-40]
.Lt_0417:
.Lt_0416:
inc dword ptr [ebp-44]
.Lt_0410:
jmp .Lt_040E
.Lt_040F:
cmp dword ptr [ebp+12], 0
je .Lt_041C
mov dword ptr [ebp-64], 0
mov dword ptr [ebp-64], 0
push -1
lea eax, [ebp-24]
push eax
call fb_StrLen
add esp, 8
dec eax
mov dword ptr [ebp-68], eax
jmp .Lt_041E
.Lt_0421:
mov eax, dword ptr [ebp-24]
add eax, dword ptr [ebp-64]
mov bl, byte ptr [eax]
mov byte ptr [ebp-72], bl
movzx ebx, byte ptr [ebp-72]
cmp ebx, 9
je .Lt_0425
.Lt_0426:
movzx ebx, byte ptr [ebp-72]
cmp ebx, 32
jne .Lt_0424
.Lt_0425:
jmp .Lt_0422
.Lt_0424:
jmp .Lt_0420
.Lt_0427:
.Lt_0422:
.Lt_041F:
inc dword ptr [ebp-64]
.Lt_041E:
mov ebx, dword ptr [ebp-68]
cmp dword ptr [ebp-64], ebx
jle .Lt_0421
.Lt_0420:
push -1
lea ebx, [ebp-24]
push ebx
call fb_StrLen
add esp, 8
cmp dword ptr [ebp-64], eax
jge .Lt_0429
push 0
push -1
push -1
mov eax, dword ptr [ebp-64]
inc eax
push eax
lea eax, [ebp-24]
push eax
call fb_StrMid
add esp, 12
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
jmp .Lt_0428
.Lt_0429:
push 0
push 1
push offset Lt_0000
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
.Lt_0428:
push -1
lea eax, [ebp-24]
push eax
call fb_StrLen
add esp, 8
dec eax
mov dword ptr [ebp-64], eax
jmp .Lt_042A
.Lt_042D:
mov eax, dword ptr [ebp-24]
add eax, dword ptr [ebp-64]
mov bl, byte ptr [eax]
mov byte ptr [ebp-68], bl
movzx ebx, byte ptr [ebp-68]
cmp ebx, 9
je .Lt_0431
.Lt_0432:
movzx ebx, byte ptr [ebp-68]
cmp ebx, 32
jne .Lt_0430
.Lt_0431:
jmp .Lt_042E
.Lt_0430:
jmp .Lt_042C
.Lt_0433:
.Lt_042E:
.Lt_042B:
dec dword ptr [ebp-64]
.Lt_042A:
cmp dword ptr [ebp-64], 0
jge .Lt_042D
.Lt_042C:
cmp dword ptr [ebp-64], 0
jle .Lt_0435
push 0
push -1
mov ebx, dword ptr [ebp-64]
inc ebx
push ebx
lea ebx, [ebp-24]
push ebx
call fb_LEFT
add esp, 8
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
.Lt_0435:
.Lt_0434:
.Lt_041C:
.Lt_041B:
push 0
push -1
push 2
push offset Lt_0436
push -1
push dword ptr [ebp+8]
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
lea eax, [ebp-60]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+8]
call fb_StrAssign
add esp, 20
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
.Lt_03FB:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
pop ebx
mov esp, ebp
pop ebp
ret
.size LEXPEEKCURRENTLINE, .-LEXPEEKCURRENTLINE

.section .bss
.balign 4
	.lcomm	Lt_0439,1025

.section .text
.balign 16
fb_ctor__lex:
.type fb_ctor__lex, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__lex, .-fb_ctor__lex
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
HCOLLECTCHARFORDEBUGOUTPUT:
.type HCOLLECTCHARFORDEBUGOUTPUT, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_007B:
cmp dword ptr [ebp+8], 32
jae .Lt_007E
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
jmp .Lt_0080
.Lt_0082:
jmp .Lt_007C
jmp .Lt_007F
.Lt_0083:
jmp .Lt_007F
.Lt_0084:
mov dword ptr [ebp+8], 63
jmp .Lt_007F
.Lt_0080:
cmp dword ptr [ebp-4], 13
ja .Lt_0084
mov eax, dword ptr [ebp-4]
jmp dword ptr [.LT_0086+eax*4]
.LT_0086:
.int .Lt_0082
.int .Lt_0084
.int .Lt_0084
.int .Lt_0084
.int .Lt_0084
.int .Lt_0084
.int .Lt_0084
.int .Lt_0084
.int .Lt_0084
.int .Lt_0083
.int .Lt_0082
.int .Lt_0083
.int .Lt_0083
.int .Lt_0082
.Lt_007F:
jmp .Lt_007D
.Lt_007E:
cmp dword ptr [ebp+8], 255
jbe .Lt_0087
mov dword ptr [ebp+8], 63
.Lt_0087:
.Lt_007D:
push dword ptr [ebp+8]
mov eax, dword ptr [LEX+839664]
lea ebx, [eax+49376]
push ebx
call DZSTRCONCATASSIGNC
add esp, 8
.Lt_007C:
pop ebx
mov esp, ebp
pop ebp
ret
.size HCOLLECTCHARFORDEBUGOUTPUT, .-HCOLLECTCHARFORDEBUGOUTPUT
.balign 16
HREADCHAR:
.type HREADCHAR, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
push esi
mov dword ptr [ebp-4], 0
.Lt_0088:
mov eax, dword ptr [LEX+839664]
cmp dword ptr [eax+16568], 0
jle .Lt_008B
cmp dword ptr [ENV+516], 0
jne .Lt_008D
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [eax+16572]
movzx eax, byte ptr [ebx]
mov dword ptr [ebp-8], eax
jmp .Lt_008C
.Lt_008D:
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [eax+16572]
mov eax, dword ptr [ebx]
mov dword ptr [ebp-8], eax
.Lt_008C:
cmp dword ptr [ENV+144], 0
je .Lt_008F
cmp dword ptr [ENV+828], 0
jne .Lt_0091
cmp dword ptr [LEX+839668], 0
jne .Lt_0093
mov dword ptr [LEX+839668], -1
push offset Lt_0094
mov eax, dword ptr [LEX+839664]
lea ebx, [eax+49376]
push ebx
call DZSTRCONCATASSIGN
add esp, 8
.Lt_0093:
.Lt_0092:
push dword ptr [ebp-8]
call HCOLLECTCHARFORDEBUGOUTPUT
add esp, 4
.Lt_0091:
.Lt_0090:
.Lt_008F:
.Lt_008E:
jmp .Lt_008A
.Lt_008B:
mov ebx, dword ptr [LEX+839664]
cmp dword ptr [ebx+16588], 0
jne .Lt_0096
push dword ptr [ENV+240]
call fb_FileEof
add esp, 4
test eax, eax
jne .Lt_0098
push dword ptr [ENV+240]
call fb_FileTell
add esp, 4
mov ebx, eax
mov eax, dword ptr [LEX+839664]
mov dword ptr [eax+49368], ebx
mov ebx, dword ptr [ENV+516]
mov dword ptr [ebp-12], ebx
jmp .Lt_009A
.Lt_009C:
push 8193
mov ebx, dword ptr [LEX+839664]
lea eax, [ebx+16596]
push eax
push 0
push dword ptr [ENV+240]
call fb_FileGetStr
add esp, 16
test eax, eax
jne .Lt_009E
push dword ptr [ENV+240]
call fb_FileTell
add esp, 4
mov ebx, dword ptr [LEX+839664]
mov esi, dword ptr [ebx+49368]
mov ecx, esi
sar ecx, 31
sub eax, esi
sbb edx, ecx
mov esi, eax
mov eax, dword ptr [LEX+839664]
mov dword ptr [eax+16588], esi
mov esi, dword ptr [LEX+839664]
lea eax, [esi+16596]
mov esi, dword ptr [LEX+839664]
mov dword ptr [esi+16592], eax
.Lt_009E:
.Lt_009D:
jmp .Lt_0099
.Lt_009F:
call LEXREADUTF8
jmp .Lt_0099
.Lt_00A0:
call LEXREADUTF16LE
jmp .Lt_0099
.Lt_00A1:
call LEXREADUTF16BE
jmp .Lt_0099
.Lt_00A2:
call LEXREADUTF32LE
jmp .Lt_0099
.Lt_00A3:
call LEXREADUTF32BE
jmp .Lt_0099
.Lt_009A:
cmp dword ptr [ebp-12], 5
ja .Lt_0099
mov eax, dword ptr [ebp-12]
jmp dword ptr [.LT_00A4+eax*4]
.LT_00A4:
.int .Lt_009C
.int .Lt_009F
.int .Lt_00A0
.int .Lt_00A1
.int .Lt_00A2
.int .Lt_00A3
.Lt_0099:
.Lt_0098:
.Lt_0097:
.Lt_0096:
.Lt_0095:
mov eax, dword ptr [LEX+839664]
cmp dword ptr [eax+16588], 0
jle .Lt_00A6
cmp dword ptr [ENV+516], 0
jne .Lt_00A8
mov eax, dword ptr [LEX+839664]
mov esi, dword ptr [eax+16592]
movzx eax, byte ptr [esi]
mov dword ptr [ebp-8], eax
jmp .Lt_00A7
.Lt_00A8:
mov eax, dword ptr [LEX+839664]
mov esi, dword ptr [eax+16592]
mov eax, dword ptr [esi]
mov dword ptr [ebp-8], eax
.Lt_00A7:
jmp .Lt_00A5
.Lt_00A6:
mov dword ptr [ebp-8], 0
.Lt_00A5:
cmp dword ptr [ENV+144], 0
je .Lt_00AA
cmp dword ptr [ENV+828], 0
jne .Lt_00AC
cmp dword ptr [LEX+839668], 0
je .Lt_00AE
mov dword ptr [LEX+839668], 0
push offset Lt_00AF
mov eax, dword ptr [LEX+839664]
lea esi, [eax+49376]
push esi
call DZSTRCONCATASSIGN
add esp, 8
.Lt_00AE:
.Lt_00AD:
push dword ptr [ebp-8]
call HCOLLECTCHARFORDEBUGOUTPUT
add esp, 4
.Lt_00AC:
.Lt_00AB:
.Lt_00AA:
.Lt_00A9:
.Lt_008A:
mov esi, dword ptr [ebp-8]
mov dword ptr [ebp-4], esi
.Lt_0089:
mov eax, dword ptr [ebp-4]
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size HREADCHAR, .-HREADCHAR
.balign 16
HSKIPCHAR:
.type HSKIPCHAR, @function
.Lt_00B4:
mov eax, dword ptr [LEX+839664]
cmp dword ptr [eax+16568], 0
jle .Lt_00B7
mov eax, dword ptr [LEX+839664]
dec dword ptr [eax+16568]
cmp dword ptr [ENV+516], 0
jne .Lt_00B9
mov eax, dword ptr [LEX+839664]
inc dword ptr [eax+16572]
jmp .Lt_00B8
.Lt_00B9:
mov eax, dword ptr [LEX+839664]
add dword ptr [eax+16572], 4
.Lt_00B8:
mov eax, dword ptr [LEX+839664]
cmp dword ptr [eax+16568], 0
jne .Lt_00BB
mov eax, dword ptr [LEX+839664]
mov dword ptr [eax+16560], 0
.Lt_00BB:
.Lt_00BA:
jmp .Lt_00B6
.Lt_00B7:
mov eax, dword ptr [LEX+839664]
cmp dword ptr [eax+16540], 0
je .Lt_00BC
mov eax, dword ptr [LEX+839664]
dec dword ptr [eax+16588]
cmp dword ptr [ENV+516], 0
jne .Lt_00BE
mov eax, dword ptr [LEX+839664]
inc dword ptr [eax+16592]
jmp .Lt_00BD
.Lt_00BE:
mov eax, dword ptr [LEX+839664]
add dword ptr [eax+16592], 4
.Lt_00BD:
.Lt_00BC:
.Lt_00B6:
.Lt_00B5:
ret
.size HSKIPCHAR, .-HSKIPCHAR
.balign 16
HREADIDENTIFIER:
.type HREADIDENTIFIER, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
.Lt_00D3:
call LEXEATCHAR
mov bl, al
mov eax, dword ptr [ebp+8]
mov byte ptr [eax], bl
inc dword ptr [ebp+8]
mov ebx, dword ptr [ebp+12]
inc dword ptr [ebx]
mov dword ptr [ebp-8], 0
.Lt_00D5:
push 0
call LEXCURRENTCHAR
add esp, 4
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp-4]
mov dword ptr [ebp-12], eax
jmp .Lt_00D9
.Lt_00DB:
jmp .Lt_00D8
.Lt_00DC:
mov eax, dword ptr [ebp+20]
and eax, 128
test eax, eax
jne .Lt_00DE
jmp .Lt_00D6
.Lt_00DE:
.Lt_00DD:
jmp .Lt_00D8
.Lt_00DF:
jmp .Lt_00D6
jmp .Lt_00D8
.Lt_00D9:
mov eax, dword ptr [ebp-12]
add eax, 4294967250
cmp eax, 76
ja .Lt_00DF
mov eax, dword ptr [ebp-12]
jmp dword ptr [.LT_00E0+eax*4-184]
.LT_00E0:
.int .Lt_00DC
.int .Lt_00DF
.int .Lt_00DB
.int .Lt_00DB
.int .Lt_00DB
.int .Lt_00DB
.int .Lt_00DB
.int .Lt_00DB
.int .Lt_00DB
.int .Lt_00DB
.int .Lt_00DB
.int .Lt_00DB
.int .Lt_00DF
.int .Lt_00DF
.int .Lt_00DF
.int .Lt_00DF
.int .Lt_00DF
.int .Lt_00DF
.int .Lt_00DF
.int .Lt_00DB
.int .Lt_00DB
.int .Lt_00DB
.int .Lt_00DB
.int .Lt_00DB
.int .Lt_00DB
.int .Lt_00DB
.int .Lt_00DB
.int .Lt_00DB
.int .Lt_00DB
.int .Lt_00DB
.int .Lt_00DB
.int .Lt_00DB
.int .Lt_00DB
.int .Lt_00DB
.int .Lt_00DB
.int .Lt_00DB
.int .Lt_00DB
.int .Lt_00DB
.int .Lt_00DB
.int .Lt_00DB
.int .Lt_00DB
.int .Lt_00DB
.int .Lt_00DB
.int .Lt_00DB
.int .Lt_00DB
.int .Lt_00DF
.int .Lt_00DF
.int .Lt_00DF
.int .Lt_00DF
.int .Lt_00DB
.int .Lt_00DF
.int .Lt_00DB
.int .Lt_00DB
.int .Lt_00DB
.int .Lt_00DB
.int .Lt_00DB
.int .Lt_00DB
.int .Lt_00DB
.int .Lt_00DB
.int .Lt_00DB
.int .Lt_00DB
.int .Lt_00DB
.int .Lt_00DB
.int .Lt_00DB
.int .Lt_00DB
.int .Lt_00DB
.int .Lt_00DB
.int .Lt_00DB
.int .Lt_00DB
.int .Lt_00DB
.int .Lt_00DB
.int .Lt_00DB
.int .Lt_00DB
.int .Lt_00DB
.int .Lt_00DB
.int .Lt_00DB
.int .Lt_00DB
.Lt_00D8:
call LEXEATCHAR
cmp dword ptr [ebp-8], 0
jne .Lt_00E2
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax], 128
jne .Lt_00E4
mov eax, dword ptr [ebp+20]
and eax, 1
test eax, eax
jne .Lt_00E6
mov eax, dword ptr [ebp+20]
or eax, 1
mov ebx, eax
mov dword ptr [ebp+20], ebx
push 1
push 0
push 7
call ERRREPORTWARN
add esp, 12
.Lt_00E6:
.Lt_00E5:
mov dword ptr [ebp-8], -1
jmp .Lt_00E3
.Lt_00E4:
mov bl, byte ptr [ebp-4]
mov eax, dword ptr [ebp+8]
mov byte ptr [eax], bl
inc dword ptr [ebp+8]
mov ebx, dword ptr [ebp+12]
inc dword ptr [ebx]
.Lt_00E3:
.Lt_00E2:
.Lt_00E1:
.Lt_00D7:
jmp .Lt_00D5
.Lt_00D6:
mov ebx, dword ptr [ebp+8]
mov byte ptr [ebx], 0
mov ebx, dword ptr [ebp+16]
mov dword ptr [ebx], -2147483648
mov ebx, dword ptr [ebp+20]
and ebx, 8
test ebx, ebx
jne .Lt_00E8
push 0
call LEXCURRENTCHAR
add esp, 4
mov dword ptr [ebp-12], eax
jmp .Lt_00EA
.Lt_00EC:
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [ENV+844]
mov dword ptr [eax], ebx
call LEXEATCHAR
mov dword ptr [ebp-4], eax
jmp .Lt_00E9
.Lt_00ED:
mov eax, dword ptr [ebp+16]
mov dword ptr [eax], 10
call LEXEATCHAR
mov dword ptr [ebp-4], eax
jmp .Lt_00E9
.Lt_00EE:
mov eax, dword ptr [ebp+16]
mov dword ptr [eax], 14
call LEXEATCHAR
mov dword ptr [ebp-4], eax
jmp .Lt_00E9
.Lt_00EF:
push 0
call LEXGETLOOKAHEADCHAR
add esp, 4
cmp eax, 35
je .Lt_00F1
mov eax, dword ptr [ebp+16]
mov dword ptr [eax], 15
call LEXEATCHAR
mov dword ptr [ebp-4], eax
.Lt_00F1:
.Lt_00F0:
jmp .Lt_00E9
.Lt_00F2:
mov eax, dword ptr [ebp+16]
mov dword ptr [eax], 16
call LEXEATCHAR
mov dword ptr [ebp-4], eax
jmp .Lt_00E9
.Lt_00EA:
mov eax, dword ptr [ebp-12]
add eax, 4294967263
cmp eax, 5
ja .Lt_00E9
mov eax, dword ptr [ebp-12]
jmp dword ptr [.LT_00F3+eax*4-132]
.LT_00F3:
.int .Lt_00EE
.int .Lt_00E9
.int .Lt_00EF
.int .Lt_00F2
.int .Lt_00EC
.int .Lt_00ED
.Lt_00E9:
.Lt_00E8:
.Lt_00E7:
.Lt_00D4:
pop ebx
mov esp, ebp
pop ebp
ret
.size HREADIDENTIFIER, .-HREADIDENTIFIER
.balign 16
HREADNONDECNUMBER:
.type HREADNONDECNUMBER, @function
push ebp
mov ebp, esp
sub esp, 56
push ebx
push esi
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_00F4:
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-36], 0
push 0
call LEXCURRENTCHAR
add esp, 4
mov dword ptr [ebp-16], eax
mov eax, dword ptr [ebp-16]
mov dword ptr [ebp-44], eax
jmp .Lt_00F7
.Lt_00F9:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov byte ptr [ebx], 38
mov bl, byte ptr [ebp-16]
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax]
mov byte ptr [ecx+1], bl
mov ebx, dword ptr [ebp+8]
add dword ptr [ebx], 2
mov ebx, dword ptr [ebp+12]
add dword ptr [ebx], 2
call LEXEATCHAR
mov ebx, dword ptr [ebp+20]
and ebx, 9
test ebx, ebx
jne .Lt_00FB
.Lt_00FC:
push 0
call LEXCURRENTCHAR
add esp, 4
cmp eax, 48
jne .Lt_00FD
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov byte ptr [ebx], 48
mov ebx, dword ptr [ebp+8]
inc dword ptr [ebx]
mov ebx, dword ptr [ebp+12]
inc dword ptr [ebx]
call LEXEATCHAR
jmp .Lt_00FC
.Lt_00FD:
.Lt_00FB:
.Lt_00FA:
.Lt_00FE:
push 0
call LEXCURRENTCHAR
add esp, 4
mov dword ptr [ebp-48], eax
cmp dword ptr [ebp-48], 97
jb .Lt_0105
cmp dword ptr [ebp-48], 102
jbe .Lt_0104
.Lt_0105:
cmp dword ptr [ebp-48], 65
jb .Lt_0106
cmp dword ptr [ebp-48], 70
jbe .Lt_0104
.Lt_0106:
cmp dword ptr [ebp-48], 48
jb .Lt_0103
cmp dword ptr [ebp-48], 57
ja .Lt_0103
.Lt_0104:
call LEXEATCHAR
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-36], 0
jne .Lt_0108
mov al, byte ptr [ebp-16]
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebx]
mov byte ptr [ecx], al
mov eax, dword ptr [ebp+8]
inc dword ptr [eax]
mov eax, dword ptr [ebp+12]
inc dword ptr [eax]
add dword ptr [ebp-16], 4294967248
cmp dword ptr [ebp-16], 9
jbe .Lt_010A
add dword ptr [ebp-16], 4294967289
.Lt_010A:
.Lt_0109:
cmp dword ptr [ebp-16], 16
jbe .Lt_010C
add dword ptr [ebp-16], 4294967264
.Lt_010C:
.Lt_010B:
inc dword ptr [ebp-32]
cmp dword ptr [ebp-32], 8
jle .Lt_010E
cmp dword ptr [ebp-32], 9
jne .Lt_0110
mov eax, dword ptr [ebp+16]
mov dword ptr [eax], 12
mov ecx, dword ptr [ebp-12]
mov eax, 0
shld eax, ecx, 4
shl ecx, 4
mov esi, dword ptr [ebp-16]
mov ebx, 0
add ecx, esi
adc eax, ebx
mov dword ptr [ebp-28], ecx
mov dword ptr [ebp-24], eax
jmp .Lt_010F
.Lt_0110:
cmp dword ptr [ebp-32], 17
jne .Lt_0111
mov ecx, dword ptr [ebp+20]
and ecx, 1
test ecx, ecx
jne .Lt_0113
push 1
push 0
push 8
call ERRREPORTWARN
add esp, 12
.Lt_0113:
.Lt_0112:
mov dword ptr [ebp-36], -1
jmp .Lt_010F
.Lt_0111:
mov eax, dword ptr [ebp-28]
mov ecx, dword ptr [ebp-24]
shld ecx, eax, 4
shl eax, 4
mov ebx, dword ptr [ebp-16]
mov esi, 0
add eax, ebx
adc ecx, esi
mov dword ptr [ebp-28], eax
mov dword ptr [ebp-24], ecx
.Lt_010F:
jmp .Lt_010D
.Lt_010E:
cmp dword ptr [ebp-32], 5
jne .Lt_0115
mov eax, dword ptr [ebp+16]
mov dword ptr [eax], 10
.Lt_0115:
.Lt_0114:
mov eax, dword ptr [ebp-12]
shl eax, 4
add eax, dword ptr [ebp-16]
mov dword ptr [ebp-12], eax
.Lt_010D:
.Lt_0108:
.Lt_0107:
jmp .Lt_0101
.Lt_0103:
jmp .Lt_00FF
.Lt_0116:
.Lt_0101:
.Lt_0100:
jmp .Lt_00FE
.Lt_00FF:
jmp .Lt_00F6
.Lt_0117:
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax]
mov byte ptr [ecx], 38
mov cl, byte ptr [ebp-16]
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov byte ptr [ebx+1], cl
mov ecx, dword ptr [ebp+8]
add dword ptr [ecx], 2
mov ecx, dword ptr [ebp+12]
add dword ptr [ecx], 2
call LEXEATCHAR
mov ecx, dword ptr [ebp+20]
and ecx, 9
test ecx, ecx
jne .Lt_0119
.Lt_011A:
push 0
call LEXCURRENTCHAR
add esp, 4
cmp eax, 48
jne .Lt_011B
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax]
mov byte ptr [ecx], 48
mov ecx, dword ptr [ebp+8]
inc dword ptr [ecx]
mov ecx, dword ptr [ebp+12]
inc dword ptr [ecx]
call LEXEATCHAR
jmp .Lt_011A
.Lt_011B:
.Lt_0119:
.Lt_0118:
push 0
call LEXCURRENTCHAR
add esp, 4
mov dword ptr [ebp-20], eax
.Lt_011C:
push 0
call LEXCURRENTCHAR
add esp, 4
mov dword ptr [ebp-48], eax
cmp dword ptr [ebp-48], 48
jb .Lt_0121
cmp dword ptr [ebp-48], 55
ja .Lt_0121
.Lt_0122:
call LEXEATCHAR
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-36], 0
jne .Lt_0124
mov al, byte ptr [ebp-16]
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ecx]
mov byte ptr [ebx], al
mov eax, dword ptr [ebp+8]
inc dword ptr [eax]
mov eax, dword ptr [ebp+12]
inc dword ptr [eax]
add dword ptr [ebp-16], 4294967248
inc dword ptr [ebp-32]
cmp dword ptr [ebp-32], 10
jle .Lt_0126
mov eax, dword ptr [ebp-32]
mov dword ptr [ebp-52], eax
jmp .Lt_0128
.Lt_012A:
cmp dword ptr [ebp-20], 51
jbe .Lt_012C
mov eax, dword ptr [ebp+16]
mov dword ptr [eax], 12
mov ebx, dword ptr [ebp-12]
mov eax, 0
shld eax, ebx, 3
shl ebx, 3
mov esi, dword ptr [ebp-16]
mov ecx, 0
add ebx, esi
adc eax, ecx
mov dword ptr [ebp-28], ebx
mov dword ptr [ebp-24], eax
jmp .Lt_012B
.Lt_012C:
mov ebx, dword ptr [ebp-12]
shl ebx, 3
add ebx, dword ptr [ebp-16]
mov dword ptr [ebp-12], ebx
.Lt_012B:
jmp .Lt_0127
.Lt_012D:
mov ebx, dword ptr [ebp+16]
mov eax, dword ptr [ebx]
and eax, 480
je .Lt_012E
mov dword ptr [ebp-56], 22
jmp .Lt_043A
.Lt_012E:
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax]
and ebx, 31
mov dword ptr [ebp-56], ebx
.Lt_043A:
mov ebx, dword ptr [ebp-56]
imul ebx, 28
cmp dword ptr [SYMB_DTYPETB+ebx+4], 8
jge .Lt_0131
mov ebx, dword ptr [ebp+16]
mov dword ptr [ebx], 12
mov eax, dword ptr [ebp-12]
mov ebx, 0
mov dword ptr [ebp-28], eax
mov dword ptr [ebp-24], ebx
.Lt_0131:
.Lt_0130:
mov ebx, dword ptr [ebp-28]
mov eax, dword ptr [ebp-24]
shld eax, ebx, 3
shl ebx, 3
mov ecx, dword ptr [ebp-16]
mov esi, 0
add ebx, ecx
adc eax, esi
mov dword ptr [ebp-28], ebx
mov dword ptr [ebp-24], eax
jmp .Lt_0127
.Lt_0132:
cmp dword ptr [ebp-20], 49
jbe .Lt_0134
mov ebx, dword ptr [ebp+20]
and ebx, 1
test ebx, ebx
jne .Lt_0136
push 1
push 0
push 8
call ERRREPORTWARN
add esp, 12
.Lt_0136:
.Lt_0135:
mov dword ptr [ebp-36], -1
jmp .Lt_0133
.Lt_0134:
mov eax, dword ptr [ebp-28]
mov ebx, dword ptr [ebp-24]
shld ebx, eax, 3
shl eax, 3
mov esi, dword ptr [ebp-16]
mov ecx, 0
add eax, esi
adc ebx, ecx
mov dword ptr [ebp-28], eax
mov dword ptr [ebp-24], ebx
.Lt_0133:
jmp .Lt_0127
.Lt_0137:
mov eax, dword ptr [ebp+20]
and eax, 1
test eax, eax
jne .Lt_0139
push 1
push 0
push 8
call ERRREPORTWARN
add esp, 12
.Lt_0139:
.Lt_0138:
mov dword ptr [ebp-36], -1
jmp .Lt_0127
.Lt_013A:
mov ebx, dword ptr [ebp-28]
mov eax, dword ptr [ebp-24]
shld eax, ebx, 3
shl ebx, 3
mov ecx, dword ptr [ebp-16]
mov esi, 0
add ebx, ecx
adc eax, esi
mov dword ptr [ebp-28], ebx
mov dword ptr [ebp-24], eax
jmp .Lt_0127
.Lt_0128:
mov ebx, dword ptr [ebp-52]
add ebx, 4294967285
cmp ebx, 12
ja .Lt_013A
mov ebx, dword ptr [ebp-52]
jmp dword ptr [.LT_013B+ebx*4-44]
.LT_013B:
.int .Lt_012A
.int .Lt_012D
.int .Lt_013A
.int .Lt_013A
.int .Lt_013A
.int .Lt_013A
.int .Lt_013A
.int .Lt_013A
.int .Lt_013A
.int .Lt_013A
.int .Lt_013A
.int .Lt_0132
.int .Lt_0137
.Lt_0127:
jmp .Lt_0125
.Lt_0126:
cmp dword ptr [ebp-32], 6
jne .Lt_013D
cmp dword ptr [ebp-20], 49
jbe .Lt_013F
mov ebx, dword ptr [ebp+16]
mov dword ptr [ebx], 10
.Lt_013F:
.Lt_013E:
jmp .Lt_013C
.Lt_013D:
cmp dword ptr [ebp-32], 7
jne .Lt_0140
mov ebx, dword ptr [ebp+16]
mov dword ptr [ebx], 10
.Lt_0140:
.Lt_013C:
mov ebx, dword ptr [ebp-12]
shl ebx, 3
add ebx, dword ptr [ebp-16]
mov dword ptr [ebp-12], ebx
.Lt_0125:
.Lt_0124:
.Lt_0123:
jmp .Lt_011F
.Lt_0121:
jmp .Lt_011D
.Lt_0141:
.Lt_011F:
.Lt_011E:
jmp .Lt_011C
.Lt_011D:
jmp .Lt_00F6
.Lt_0142:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx]
mov byte ptr [eax], 38
mov al, byte ptr [ebp-16]
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebx]
mov byte ptr [ecx+1], al
mov eax, dword ptr [ebp+8]
add dword ptr [eax], 2
mov eax, dword ptr [ebp+12]
add dword ptr [eax], 2
call LEXEATCHAR
mov eax, dword ptr [ebp+20]
and eax, 9
test eax, eax
jne .Lt_0144
.Lt_0145:
push 0
call LEXCURRENTCHAR
add esp, 4
cmp eax, 48
jne .Lt_0146
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax]
mov byte ptr [ecx], 48
mov ecx, dword ptr [ebp+8]
inc dword ptr [ecx]
mov ecx, dword ptr [ebp+12]
inc dword ptr [ecx]
call LEXEATCHAR
jmp .Lt_0145
.Lt_0146:
.Lt_0144:
.Lt_0143:
.Lt_0147:
push 0
call LEXCURRENTCHAR
add esp, 4
mov dword ptr [ebp-48], eax
cmp dword ptr [ebp-48], 48
je .Lt_014D
.Lt_014E:
cmp dword ptr [ebp-48], 49
jne .Lt_014C
.Lt_014D:
call LEXEATCHAR
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-36], 0
jne .Lt_0150
mov al, byte ptr [ebp-16]
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ecx]
mov byte ptr [ebx], al
mov eax, dword ptr [ebp+8]
inc dword ptr [eax]
mov eax, dword ptr [ebp+12]
inc dword ptr [eax]
add dword ptr [ebp-16], 4294967248
inc dword ptr [ebp-32]
cmp dword ptr [ebp-32], 32
jle .Lt_0152
cmp dword ptr [ebp-32], 33
jne .Lt_0154
mov eax, dword ptr [ebp+16]
mov dword ptr [eax], 12
mov ebx, dword ptr [ebp-12]
mov eax, 0
shld eax, ebx, 1
shl ebx, 1
mov esi, dword ptr [ebp-16]
mov ecx, 0
add ebx, esi
adc eax, ecx
mov dword ptr [ebp-28], ebx
mov dword ptr [ebp-24], eax
jmp .Lt_0153
.Lt_0154:
cmp dword ptr [ebp-32], 65
jne .Lt_0155
mov ebx, dword ptr [ebp+20]
and ebx, 1
test ebx, ebx
jne .Lt_0157
push 1
push 0
push 8
call ERRREPORTWARN
add esp, 12
.Lt_0157:
.Lt_0156:
mov dword ptr [ebp-36], -1
jmp .Lt_0153
.Lt_0155:
mov eax, dword ptr [ebp-28]
mov ebx, dword ptr [ebp-24]
shld ebx, eax, 1
shl eax, 1
mov ecx, dword ptr [ebp-16]
mov esi, 0
add eax, ecx
adc ebx, esi
mov dword ptr [ebp-28], eax
mov dword ptr [ebp-24], ebx
.Lt_0153:
jmp .Lt_0151
.Lt_0152:
cmp dword ptr [ebp-32], 17
jne .Lt_0159
mov eax, dword ptr [ebp+16]
mov dword ptr [eax], 10
.Lt_0159:
.Lt_0158:
mov eax, dword ptr [ebp-12]
shl eax, 1
add eax, dword ptr [ebp-16]
mov dword ptr [ebp-12], eax
.Lt_0151:
.Lt_0150:
.Lt_014F:
jmp .Lt_014A
.Lt_014C:
jmp .Lt_0148
.Lt_015A:
.Lt_014A:
.Lt_0149:
jmp .Lt_0147
.Lt_0148:
jmp .Lt_00F6
.Lt_015B:
jmp .Lt_00F5
jmp .Lt_00F6
.Lt_00F7:
mov eax, dword ptr [ebp-44]
add eax, 4294967230
cmp eax, 45
ja .Lt_015B
mov eax, dword ptr [ebp-44]
jmp dword ptr [.LT_015C+eax*4-264]
.LT_015C:
.int .Lt_0142
.int .Lt_015B
.int .Lt_015B
.int .Lt_015B
.int .Lt_015B
.int .Lt_015B
.int .Lt_00F9
.int .Lt_015B
.int .Lt_015B
.int .Lt_015B
.int .Lt_015B
.int .Lt_015B
.int .Lt_015B
.int .Lt_0117
.int .Lt_015B
.int .Lt_015B
.int .Lt_015B
.int .Lt_015B
.int .Lt_015B
.int .Lt_015B
.int .Lt_015B
.int .Lt_015B
.int .Lt_015B
.int .Lt_015B
.int .Lt_015B
.int .Lt_015B
.int .Lt_015B
.int .Lt_015B
.int .Lt_015B
.int .Lt_015B
.int .Lt_015B
.int .Lt_015B
.int .Lt_0142
.int .Lt_015B
.int .Lt_015B
.int .Lt_015B
.int .Lt_015B
.int .Lt_015B
.int .Lt_00F9
.int .Lt_015B
.int .Lt_015B
.int .Lt_015B
.int .Lt_015B
.int .Lt_015B
.int .Lt_015B
.int .Lt_0117
.Lt_00F6:
cmp dword ptr [ebp-32], 0
jne .Lt_015E
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov byte ptr [ebx], 48
mov ebx, dword ptr [ebp+8]
inc dword ptr [ebx]
mov ebx, dword ptr [ebp+12]
inc dword ptr [ebx]
.Lt_015E:
.Lt_015D:
mov ebx, dword ptr [ebp+16]
mov eax, dword ptr [ebx]
and eax, 480
je .Lt_015F
mov dword ptr [ebp-40], 22
jmp .Lt_043B
.Lt_015F:
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax]
and ebx, 31
mov dword ptr [ebp-40], ebx
.Lt_043B:
mov ebx, dword ptr [ebp-40]
imul ebx, 28
cmp dword ptr [SYMB_DTYPETB+ebx+4], 8
jge .Lt_0162
mov eax, dword ptr [ebp-12]
mov ebx, 0
mov dword ptr [ebp-8], eax
mov dword ptr [ebp-4], ebx
jmp .Lt_0161
.Lt_0162:
mov ebx, dword ptr [ebp-28]
mov eax, dword ptr [ebp-24]
mov dword ptr [ebp-8], ebx
mov dword ptr [ebp-4], eax
.Lt_0161:
.Lt_00F5:
mov eax, dword ptr [ebp-8]
mov edx, dword ptr [ebp-4]
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size HREADNONDECNUMBER, .-HREADNONDECNUMBER
.balign 16
HREADFLOATNUMBER:
.type HREADFLOATNUMBER, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
.Lt_0163:
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [ENV+864]
mov dword ptr [eax], ebx
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx]
mov dword ptr [ebp-8], eax
mov dword ptr [ebp-12], 0
.Lt_0165:
push 0
call LEXCURRENTCHAR
add esp, 4
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 48
jb .Lt_0169
cmp dword ptr [ebp-4], 57
ja .Lt_0169
.Lt_016A:
call LEXEATCHAR
cmp dword ptr [ebp-12], 0
jne .Lt_016C
mov al, byte ptr [ebp-4]
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebx]
mov byte ptr [ecx], al
mov eax, dword ptr [ebp+8]
inc dword ptr [eax]
mov eax, dword ptr [ebp+12]
inc dword ptr [eax]
.Lt_016C:
.Lt_016B:
jmp .Lt_0168
.Lt_0169:
jmp .Lt_0166
.Lt_016D:
.Lt_0168:
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax], 64
jne .Lt_016F
cmp dword ptr [ebp-12], 0
jne .Lt_0171
mov dword ptr [ebp-12], -1
jmp .Lt_0170
.Lt_0171:
mov eax, dword ptr [ebp+24]
and eax, 1
test eax, eax
jne .Lt_0173
mov eax, dword ptr [ebp+24]
or eax, 1
mov ecx, eax
mov dword ptr [ebp+24], ecx
push 1
push 0
push 8
call ERRREPORTWARN
add esp, 12
.Lt_0173:
.Lt_0172:
.Lt_0170:
.Lt_016F:
.Lt_016E:
.Lt_0167:
jmp .Lt_0165
.Lt_0166:
mov ecx, dword ptr [ebp+12]
mov dword ptr [ebp-20], ecx
cmp dword ptr [ebp+20], 0
je .Lt_0174
mov dword ptr [ebp-16], 1
jmp .Lt_043C
.Lt_0174:
mov dword ptr [ebp-16], 0
.Lt_043C:
mov ecx, dword ptr [ebp-16]
add ecx, 7
mov eax, dword ptr [ebp-20]
cmp dword ptr [eax], ecx
jle .Lt_0177
mov ecx, dword ptr [ebp+16]
mov dword ptr [ecx], 15
.Lt_0177:
.Lt_0176:
push 0
call LEXCURRENTCHAR
add esp, 4
mov dword ptr [ebp-20], eax
jmp .Lt_0179
.Lt_017B:
call LEXEATCHAR
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 100
sete al
shr eax, 1
sbb eax, eax
cmp dword ptr [ebp-4], 68
sete cl
shr ecx, 1
sbb ecx, ecx
or eax, ecx
je .Lt_017D
mov ecx, dword ptr [ebp+16]
mov dword ptr [ecx], 15
.Lt_017D:
.Lt_017C:
cmp dword ptr [ebp-12], 0
jne .Lt_017F
cmp dword ptr [ebp+24], 0
jne .Lt_0181
mov dword ptr [ebp-4], 101
.Lt_0181:
.Lt_0180:
mov cl, byte ptr [ebp-4]
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov byte ptr [ebx], cl
mov ecx, dword ptr [ebp+8]
inc dword ptr [ecx]
mov ecx, dword ptr [ebp+12]
inc dword ptr [ecx]
.Lt_017F:
.Lt_017E:
push 0
call LEXCURRENTCHAR
add esp, 4
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 43
sete al
shr eax, 1
sbb eax, eax
cmp dword ptr [ebp-4], 45
sete cl
shr ecx, 1
sbb ecx, ecx
or eax, ecx
je .Lt_0183
call LEXEATCHAR
cmp dword ptr [ebp-12], 0
jne .Lt_0185
mov cl, byte ptr [ebp-4]
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov byte ptr [ebx], cl
mov ecx, dword ptr [ebp+8]
inc dword ptr [ecx]
mov ecx, dword ptr [ebp+12]
inc dword ptr [ecx]
.Lt_0185:
.Lt_0184:
.Lt_0183:
.Lt_0182:
.Lt_0186:
push 0
call LEXCURRENTCHAR
add esp, 4
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp-4]
mov dword ptr [ebp-24], eax
jmp .Lt_018A
.Lt_018C:
call LEXEATCHAR
cmp dword ptr [ebp-12], 0
jne .Lt_018E
mov al, byte ptr [ebp-4]
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ecx]
mov byte ptr [ebx], al
mov eax, dword ptr [ebp+8]
inc dword ptr [eax]
mov eax, dword ptr [ebp+12]
inc dword ptr [eax]
.Lt_018E:
.Lt_018D:
jmp .Lt_0189
.Lt_018F:
jmp .Lt_0187
jmp .Lt_0189
.Lt_018A:
mov eax, dword ptr [ebp-24]
add eax, 4294967248
cmp eax, 9
ja .Lt_018F
mov eax, dword ptr [ebp-24]
jmp dword ptr [.LT_0190+eax*4-192]
.LT_0190:
.int .Lt_018C
.int .Lt_018C
.int .Lt_018C
.int .Lt_018C
.int .Lt_018C
.int .Lt_018C
.int .Lt_018C
.int .Lt_018C
.int .Lt_018C
.int .Lt_018C
.Lt_0189:
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax], 64
jne .Lt_0192
cmp dword ptr [ebp-12], 0
jne .Lt_0194
mov dword ptr [ebp-12], -1
jmp .Lt_0193
.Lt_0194:
mov eax, dword ptr [ebp+24]
and eax, 1
test eax, eax
jne .Lt_0196
mov eax, dword ptr [ebp+24]
or eax, 1
mov ebx, eax
mov dword ptr [ebp+24], ebx
push 1
push 0
push 8
call ERRREPORTWARN
add esp, 12
.Lt_0196:
.Lt_0195:
.Lt_0193:
.Lt_0192:
.Lt_0191:
.Lt_0188:
jmp .Lt_0186
.Lt_0187:
jmp .Lt_0178
.Lt_0179:
mov ebx, dword ptr [ebp-20]
add ebx, 4294967228
cmp ebx, 33
ja .Lt_0178
mov ebx, dword ptr [ebp-20]
jmp dword ptr [.LT_0197+ebx*4-272]
.LT_0197:
.int .Lt_017B
.int .Lt_017B
.int .Lt_0178
.int .Lt_0178
.int .Lt_0178
.int .Lt_0178
.int .Lt_0178
.int .Lt_0178
.int .Lt_0178
.int .Lt_0178
.int .Lt_0178
.int .Lt_0178
.int .Lt_0178
.int .Lt_0178
.int .Lt_0178
.int .Lt_0178
.int .Lt_0178
.int .Lt_0178
.int .Lt_0178
.int .Lt_0178
.int .Lt_0178
.int .Lt_0178
.int .Lt_0178
.int .Lt_0178
.int .Lt_0178
.int .Lt_0178
.int .Lt_0178
.int .Lt_0178
.int .Lt_0178
.int .Lt_0178
.int .Lt_0178
.int .Lt_0178
.int .Lt_017B
.int .Lt_017B
.Lt_0178:
push 0
call LEXCURRENTCHAR
add esp, 4
mov dword ptr [ebp-20], eax
jmp .Lt_0199
.Lt_019B:
mov eax, dword ptr [ebp+16]
mov dword ptr [eax], 14
mov eax, dword ptr [ebp+24]
and eax, 1032
test eax, eax
jne .Lt_019D
call LEXEATCHAR
mov dword ptr [ebp-4], eax
.Lt_019D:
.Lt_019C:
jmp .Lt_0198
.Lt_019E:
mov eax, dword ptr [ebp+16]
mov dword ptr [eax], 14
mov eax, dword ptr [ebp+24]
and eax, 8
test eax, eax
jne .Lt_01A0
call LEXEATCHAR
mov dword ptr [ebp-4], eax
.Lt_01A0:
.Lt_019F:
jmp .Lt_0198
.Lt_01A1:
mov eax, dword ptr [ebp+16]
mov dword ptr [eax], 15
mov eax, dword ptr [ebp+24]
and eax, 8
test eax, eax
jne .Lt_01A3
call LEXEATCHAR
mov dword ptr [ebp-4], eax
.Lt_01A3:
.Lt_01A2:
jmp .Lt_0198
.Lt_0199:
mov eax, dword ptr [ebp-20]
add eax, 4294967263
cmp eax, 69
ja .Lt_0198
mov eax, dword ptr [ebp-20]
jmp dword ptr [.LT_01A4+eax*4-132]
.LT_01A4:
.int .Lt_019E
.int .Lt_0198
.int .Lt_01A1
.int .Lt_0198
.int .Lt_0198
.int .Lt_0198
.int .Lt_0198
.int .Lt_0198
.int .Lt_0198
.int .Lt_0198
.int .Lt_0198
.int .Lt_0198
.int .Lt_0198
.int .Lt_0198
.int .Lt_0198
.int .Lt_0198
.int .Lt_0198
.int .Lt_0198
.int .Lt_0198
.int .Lt_0198
.int .Lt_0198
.int .Lt_0198
.int .Lt_0198
.int .Lt_0198
.int .Lt_0198
.int .Lt_0198
.int .Lt_0198
.int .Lt_0198
.int .Lt_0198
.int .Lt_0198
.int .Lt_0198
.int .Lt_0198
.int .Lt_0198
.int .Lt_0198
.int .Lt_0198
.int .Lt_0198
.int .Lt_0198
.int .Lt_019B
.int .Lt_0198
.int .Lt_0198
.int .Lt_0198
.int .Lt_0198
.int .Lt_0198
.int .Lt_0198
.int .Lt_0198
.int .Lt_0198
.int .Lt_0198
.int .Lt_0198
.int .Lt_0198
.int .Lt_0198
.int .Lt_0198
.int .Lt_0198
.int .Lt_0198
.int .Lt_0198
.int .Lt_0198
.int .Lt_0198
.int .Lt_0198
.int .Lt_0198
.int .Lt_0198
.int .Lt_0198
.int .Lt_0198
.int .Lt_0198
.int .Lt_0198
.int .Lt_0198
.int .Lt_0198
.int .Lt_0198
.int .Lt_0198
.int .Lt_0198
.int .Lt_0198
.int .Lt_019B
.Lt_0198:
cmp dword ptr [ebp+24], 0
jne .Lt_01A6
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax]
sub ebx, dword ptr [ebp-8]
test ebx, ebx
jne .Lt_01A8
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx]
mov byte ptr [eax], 48
mov eax, dword ptr [ebp+8]
inc dword ptr [eax]
mov eax, dword ptr [ebp+12]
inc dword ptr [eax]
.Lt_01A8:
.Lt_01A7:
.Lt_01A6:
.Lt_01A5:
.Lt_0164:
pop ebx
mov esp, ebp
pop ebp
ret
.size HREADFLOATNUMBER, .-HREADFLOATNUMBER
.balign 16
HREADNUMBER:
.type HREADNUMBER, @function
push ebp
mov ebp, esp
sub esp, 52
push ebx
push esi
push edi
.Lt_01A9:
mov eax, dword ptr [ebp+12]
mov dword ptr [eax], 4
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov eax, dword ptr [ebp+8]
mov byte ptr [eax], 0
mov eax, dword ptr [ebp+16]
mov dword ptr [eax], 0
mov dword ptr [ebp-28], 0
call LEXEATCHAR
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp-4]
mov dword ptr [ebp-44], eax
jmp .Lt_01AC
.Lt_01AE:
mov eax, dword ptr [ebp+20]
and eax, 9
test eax, eax
je .Lt_01B0
mov eax, dword ptr [ebp+8]
mov byte ptr [eax], 48
inc dword ptr [ebp+8]
mov eax, dword ptr [ebp+16]
inc dword ptr [eax]
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
.Lt_01B0:
.Lt_01AF:
jmp .Lt_01B1
jmp .Lt_01AB
.Lt_01B2:
mov al, byte ptr [ebp-4]
mov ebx, dword ptr [ebp+8]
mov byte ptr [ebx], al
inc dword ptr [ebp+8]
mov eax, dword ptr [ebp+16]
inc dword ptr [eax]
mov eax, dword ptr [ebp-4]
add eax, 4294967248
mov ecx, eax
mov ebx, 0
mov dword ptr [ebp-16], ecx
mov dword ptr [ebp-12], ebx
.Lt_01B1:
.Lt_01B3:
push 0
call LEXCURRENTCHAR
add esp, 4
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp-4]
mov dword ptr [ebp-48], eax
jmp .Lt_01B7
.Lt_01B9:
call LEXEATCHAR
mov eax, dword ptr [ebp+16]
cmp dword ptr [eax], 0
jle .Lt_01BB
cmp dword ptr [ebp-28], 0
jne .Lt_01BD
mov eax, dword ptr [ebp+8]
mov byte ptr [eax], 48
inc dword ptr [ebp+8]
mov eax, dword ptr [ebp+16]
inc dword ptr [eax]
mov ecx, dword ptr [ebp-16]
mov eax, dword ptr [ebp-12]
shld eax, ecx, 3
shl ecx, 3
mov esi, dword ptr [ebp-16]
mov ebx, dword ptr [ebp-12]
shld ebx, esi, 1
shl esi, 1
add ecx, esi
adc eax, ebx
mov dword ptr [ebp-16], ecx
mov dword ptr [ebp-12], eax
.Lt_01BD:
.Lt_01BC:
.Lt_01BB:
.Lt_01BA:
jmp .Lt_01B6
.Lt_01BE:
call LEXEATCHAR
cmp dword ptr [ebp-28], 0
jne .Lt_01C0
mov cl, byte ptr [ebp-4]
mov eax, dword ptr [ebp+8]
mov byte ptr [eax], cl
inc dword ptr [ebp+8]
mov ecx, dword ptr [ebp+16]
inc dword ptr [ecx]
mov eax, dword ptr [ebp-16]
mov ecx, dword ptr [ebp-12]
shld ecx, eax, 3
shl eax, 3
mov ebx, dword ptr [ebp-16]
mov esi, dword ptr [ebp-12]
shld esi, ebx, 1
shl ebx, 1
add eax, ebx
adc ecx, esi
mov ebx, dword ptr [ebp-4]
add ebx, 4294967248
mov edi, ebx
mov esi, 0
add eax, edi
adc ecx, esi
mov dword ptr [ebp-16], eax
mov dword ptr [ebp-12], ecx
.Lt_01C0:
.Lt_01BF:
jmp .Lt_01B6
.Lt_01C1:
cmp dword ptr [ebp-4], 46
jne .Lt_01C3
call LEXEATCHAR
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-28], 0
jne .Lt_01C5
mov eax, dword ptr [ebp+8]
mov byte ptr [eax], 46
inc dword ptr [ebp+8]
mov eax, dword ptr [ebp+16]
inc dword ptr [eax]
.Lt_01C5:
.Lt_01C4:
mov dword ptr [ebp-32], -1
jmp .Lt_01C2
.Lt_01C3:
mov dword ptr [ebp-32], 0
.Lt_01C2:
push dword ptr [ebp+20]
push dword ptr [ebp-32]
push dword ptr [ebp+12]
push dword ptr [ebp+16]
lea eax, [ebp+8]
push eax
call HREADFLOATNUMBER
add esp, 20
jmp .Lt_01B4
jmp .Lt_01B6
.Lt_01C6:
jmp .Lt_01B4
jmp .Lt_01B6
.Lt_01B7:
mov eax, dword ptr [ebp-48]
add eax, 4294967250
cmp eax, 55
ja .Lt_01C6
mov eax, dword ptr [ebp-48]
jmp dword ptr [.LT_01C7+eax*4-184]
.LT_01C7:
.int .Lt_01C1
.int .Lt_01C6
.int .Lt_01B9
.int .Lt_01BE
.int .Lt_01BE
.int .Lt_01BE
.int .Lt_01BE
.int .Lt_01BE
.int .Lt_01BE
.int .Lt_01BE
.int .Lt_01BE
.int .Lt_01BE
.int .Lt_01C6
.int .Lt_01C6
.int .Lt_01C6
.int .Lt_01C6
.int .Lt_01C6
.int .Lt_01C6
.int .Lt_01C6
.int .Lt_01C6
.int .Lt_01C6
.int .Lt_01C6
.int .Lt_01C1
.int .Lt_01C1
.int .Lt_01C6
.int .Lt_01C6
.int .Lt_01C6
.int .Lt_01C6
.int .Lt_01C6
.int .Lt_01C6
.int .Lt_01C6
.int .Lt_01C6
.int .Lt_01C6
.int .Lt_01C6
.int .Lt_01C6
.int .Lt_01C6
.int .Lt_01C6
.int .Lt_01C6
.int .Lt_01C6
.int .Lt_01C6
.int .Lt_01C6
.int .Lt_01C6
.int .Lt_01C6
.int .Lt_01C6
.int .Lt_01C6
.int .Lt_01C6
.int .Lt_01C6
.int .Lt_01C6
.int .Lt_01C6
.int .Lt_01C6
.int .Lt_01C6
.int .Lt_01C6
.int .Lt_01C6
.int .Lt_01C6
.int .Lt_01C1
.int .Lt_01C1
.Lt_01B6:
mov eax, dword ptr [ebp+20]
and eax, 8
test eax, eax
jne .Lt_01C9
cmp dword ptr [ebp-28], 0
jne .Lt_01CB
mov eax, dword ptr [ebp+16]
mov ecx, dword ptr [eax]
mov dword ptr [ebp-48], ecx
jmp .Lt_01CD
.Lt_01CF:
cmp dword ptr [ebp-12], 0
jb .Lt_01D1
ja .Lt_0447
cmp dword ptr [ebp-16], 32767
jbe .Lt_01D1
.Lt_0447:
mov ecx, dword ptr [ebp+12]
mov dword ptr [ecx], 10
.Lt_01D1:
.Lt_01D0:
jmp .Lt_01CC
.Lt_01D2:
mov ecx, dword ptr [ebp+12]
mov dword ptr [ecx], 10
jmp .Lt_01CC
.Lt_01D3:
cmp dword ptr [ebp-12], 0
jb .Lt_01D5
ja .Lt_0448
cmp dword ptr [ebp-16], 2147483647
jbe .Lt_01D5
.Lt_0448:
cmp dword ptr [ebp-12], 0
jb .Lt_01D7
ja .Lt_0449
cmp dword ptr [ebp-16], 4294967295
jbe .Lt_01D7
.Lt_0449:
mov ecx, dword ptr [ebp+12]
mov dword ptr [ecx], 12
jmp .Lt_01D6
.Lt_01D7:
mov ecx, dword ptr [ebp+12]
mov dword ptr [ecx], 11
.Lt_01D6:
.Lt_01D5:
.Lt_01D4:
jmp .Lt_01CC
.Lt_01D8:
mov ecx, dword ptr [ebp+12]
mov dword ptr [ecx], 12
jmp .Lt_01CC
.Lt_01D9:
cmp dword ptr [ebp-12], 2147483647
jb .Lt_01DB
ja .Lt_044A
cmp dword ptr [ebp-16], 4294967295
jbe .Lt_01DB
.Lt_044A:
mov ecx, dword ptr [ebp+12]
mov dword ptr [ecx], 13
.Lt_01DB:
.Lt_01DA:
mov eax, dword ptr [ebp-16]
mov ecx, dword ptr [ebp-12]
mov dword ptr [ebp-24], eax
mov dword ptr [ebp-20], ecx
jmp .Lt_01CC
.Lt_01DC:
mov eax, dword ptr [ebp+12]
mov dword ptr [eax], 13
mov eax, dword ptr [ebp+20]
and eax, 1
test eax, eax
jne .Lt_01DE
cmp dword ptr [ebp-20], 429496729
mov eax, -1
ja .Lt_044B
jb .Lt_044C
cmp dword ptr [ebp-24], 2576980377
ja .Lt_044B
.Lt_044C:
xor eax, eax
.Lt_044B:
mov edi, dword ptr [ebp-16]
mov ecx, dword ptr [ebp-12]
and edi, 0
and ecx, 2147483648
cmp ecx, 0
mov esi, -1
jne .Lt_044E
cmp edi, 0
je .Lt_044D
.Lt_044E:
xor esi, esi
.Lt_044D:
or eax, esi
je .Lt_01E0
push 1
push 0
push 8
call ERRREPORTWARN
add esp, 12
mov dword ptr [ebp-28], -1
.Lt_01E0:
.Lt_01DF:
.Lt_01DE:
.Lt_01DD:
jmp .Lt_01CC
.Lt_01E1:
mov esi, dword ptr [ebp+20]
and esi, 1
test esi, esi
jne .Lt_01E3
push 1
push 0
push 8
call ERRREPORTWARN
add esp, 12
mov dword ptr [ebp-28], -1
.Lt_01E3:
.Lt_01E2:
jmp .Lt_01CC
.Lt_01CD:
mov esi, dword ptr [ebp-48]
add esi, 4294967291
cmp esi, 16
ja .Lt_01CC
mov esi, dword ptr [ebp-48]
jmp dword ptr [.LT_01E4+esi*4-20]
.LT_01E4:
.int .Lt_01CF
.int .Lt_01D2
.int .Lt_01CC
.int .Lt_01CC
.int .Lt_01CC
.int .Lt_01D3
.int .Lt_01D8
.int .Lt_01CC
.int .Lt_01CC
.int .Lt_01CC
.int .Lt_01CC
.int .Lt_01CC
.int .Lt_01CC
.int .Lt_01CC
.int .Lt_01D9
.int .Lt_01DC
.int .Lt_01E1
.Lt_01CC:
mov esi, dword ptr [ebp+16]
cmp dword ptr [esi], 64
jne .Lt_01E6
cmp dword ptr [ebp-28], 0
jne .Lt_01E8
mov dword ptr [ebp-28], -1
jmp .Lt_01E7
.Lt_01E8:
mov esi, dword ptr [ebp+20]
and esi, 1
test esi, esi
jne .Lt_01EA
mov esi, dword ptr [ebp+20]
or esi, 1
mov eax, esi
mov dword ptr [ebp+20], eax
push 1
push 0
push 8
call ERRREPORTWARN
add esp, 12
.Lt_01EA:
.Lt_01E9:
.Lt_01E7:
.Lt_01E6:
.Lt_01E5:
.Lt_01CB:
.Lt_01CA:
.Lt_01C9:
.Lt_01C8:
.Lt_01B5:
jmp .Lt_01B3
.Lt_01B4:
mov eax, dword ptr [ebp+16]
cmp dword ptr [eax], 0
jne .Lt_01EC
mov eax, dword ptr [ebp+8]
mov byte ptr [eax], 48
inc dword ptr [ebp+8]
mov eax, dword ptr [ebp+16]
mov dword ptr [eax], 1
.Lt_01EC:
.Lt_01EB:
jmp .Lt_01AB
.Lt_01ED:
mov eax, dword ptr [ebp+8]
mov byte ptr [eax], 46
inc dword ptr [ebp+8]
mov eax, dword ptr [ebp+16]
mov dword ptr [eax], 1
push dword ptr [ebp+20]
push -1
push dword ptr [ebp+12]
push dword ptr [ebp+16]
lea eax, [ebp+8]
push eax
call HREADFLOATNUMBER
add esp, 20
jmp .Lt_01AB
.Lt_01EE:
mov eax, dword ptr [ebp+16]
mov dword ptr [eax], 0
push dword ptr [ebp+20]
push dword ptr [ebp+12]
push dword ptr [ebp+16]
lea eax, [ebp+8]
push eax
call HREADNONDECNUMBER
add esp, 16
mov dword ptr [ebp-16], eax
mov dword ptr [ebp-12], edx
jmp .Lt_01AB
.Lt_01AC:
mov eax, dword ptr [ebp-44]
add eax, 4294967258
cmp eax, 19
ja .Lt_01AB
mov eax, dword ptr [ebp-44]
jmp dword ptr [.LT_01EF+eax*4-152]
.LT_01EF:
.int .Lt_01EE
.int .Lt_01AB
.int .Lt_01AB
.int .Lt_01AB
.int .Lt_01AB
.int .Lt_01AB
.int .Lt_01AB
.int .Lt_01AB
.int .Lt_01ED
.int .Lt_01AB
.int .Lt_01AE
.int .Lt_01B2
.int .Lt_01B2
.int .Lt_01B2
.int .Lt_01B2
.int .Lt_01B2
.int .Lt_01B2
.int .Lt_01B2
.int .Lt_01B2
.int .Lt_01B2
.Lt_01AB:
mov eax, dword ptr [ebp+8]
mov byte ptr [eax], 0
mov eax, dword ptr [ebp+12]
mov edx, dword ptr [eax]
mov dword ptr [ebp-44], edx
cmp dword ptr [ebp-44], 4
jne .Lt_01F2
.Lt_01F3:
mov edx, dword ptr [ebp+12]
mov eax, dword ptr [ENV+848]
mov dword ptr [edx], eax
jmp .Lt_01F0
.Lt_01F2:
cmp dword ptr [ebp-44], 5
jne .Lt_01F4
.Lt_01F5:
mov eax, dword ptr [ebp+12]
mov edx, dword ptr [ENV+852]
mov dword ptr [eax], edx
jmp .Lt_01F0
.Lt_01F4:
cmp dword ptr [ebp-44], 10
jne .Lt_01F6
.Lt_01F7:
mov edx, dword ptr [ebp+12]
mov eax, dword ptr [ENV+856]
mov dword ptr [edx], eax
jmp .Lt_01F0
.Lt_01F6:
cmp dword ptr [ebp-44], 11
jne .Lt_01F8
.Lt_01F9:
mov eax, dword ptr [ebp+12]
mov edx, dword ptr [ENV+860]
mov dword ptr [eax], edx
.Lt_01F8:
.Lt_01F0:
mov edx, dword ptr [ebp+12]
mov eax, dword ptr [edx]
and eax, 480
je .Lt_01FA
mov dword ptr [ebp-40], 22
jmp .Lt_0442
.Lt_01FA:
mov eax, dword ptr [ebp+12]
mov edx, dword ptr [eax]
and edx, 31
mov dword ptr [ebp-40], edx
.Lt_0442:
mov edx, dword ptr [ebp-40]
imul edx, 28
cmp dword ptr [SYMB_DTYPETB+edx], 1
je .Lt_01FD
mov edx, dword ptr [ebp+20]
and edx, 8
test edx, edx
jne .Lt_01FF
mov edx, dword ptr [ebp+20]
and edx, 1024
test edx, edx
jne .Lt_0201
push 0
call LEXCURRENTCHAR
add esp, 4
mov dword ptr [ebp-44], eax
cmp dword ptr [ebp-44], 85
je .Lt_0205
.Lt_0206:
cmp dword ptr [ebp-44], 117
jne .Lt_0204
.Lt_0205:
call LEXEATCHAR
mov eax, dword ptr [ebp+12]
push dword ptr [eax]
call TYPETOUNSIGNED
add esp, 4
mov edx, dword ptr [ebp+12]
mov dword ptr [edx], eax
mov dword ptr [ebp-8], -1
.Lt_0204:
.Lt_0202:
.Lt_0201:
.Lt_0200:
push 0
call LEXCURRENTCHAR
add esp, 4
mov dword ptr [ebp-44], eax
jmp .Lt_0208
.Lt_020A:
mov eax, dword ptr [ebp+20]
and eax, 1024
test eax, eax
jne .Lt_020C
call LEXEATCHAR
push 0
call LEXCURRENTCHAR
add esp, 4
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 76
sete al
shr eax, 1
sbb eax, eax
cmp dword ptr [ebp-4], 108
sete dl
shr edx, 1
sbb edx, edx
or eax, edx
je .Lt_020E
call LEXEATCHAR
cmp dword ptr [ebp-8], 0
je .Lt_020F
mov dword ptr [ebp-48], 13
jmp .Lt_0443
.Lt_020F:
mov dword ptr [ebp-48], 12
.Lt_0443:
mov edx, dword ptr [ebp+12]
mov eax, dword ptr [ebp-48]
mov dword ptr [edx], eax
jmp .Lt_020D
.Lt_020E:
cmp dword ptr [ebp-12], 0
jb .Lt_0212
ja .Lt_0451
cmp dword ptr [ebp-16], 4294967295
jbe .Lt_0212
.Lt_0451:
cmp dword ptr [ebp-28], 0
jne .Lt_0214
mov eax, dword ptr [ebp+20]
and eax, 1
test eax, eax
jne .Lt_0216
push 1
push 0
push 8
call ERRREPORTWARN
add esp, 12
.Lt_0216:
.Lt_0215:
.Lt_0214:
.Lt_0213:
.Lt_0212:
.Lt_0211:
cmp dword ptr [ebp-8], 0
je .Lt_0217
mov dword ptr [ebp-48], 11
jmp .Lt_0444
.Lt_0217:
mov dword ptr [ebp-48], 10
.Lt_0444:
mov eax, dword ptr [ebp+12]
mov edx, dword ptr [ebp-48]
mov dword ptr [eax], edx
.Lt_020D:
.Lt_020C:
.Lt_020B:
jmp .Lt_0207
.Lt_0219:
mov edx, dword ptr [ebp+20]
and edx, 1024
test edx, edx
jne .Lt_021B
cmp dword ptr [ebp-8], 0
jne .Lt_021D
mov edx, dword ptr [ebp+12]
mov dword ptr [edx], 14
call LEXEATCHAR
.Lt_021D:
.Lt_021C:
.Lt_021B:
.Lt_021A:
jmp .Lt_0207
.Lt_021E:
mov edx, dword ptr [ebp+20]
and edx, 1024
test edx, edx
jne .Lt_0220
cmp dword ptr [ebp-8], 0
jne .Lt_0222
mov edx, dword ptr [ebp+12]
mov dword ptr [edx], 15
call LEXEATCHAR
.Lt_0222:
.Lt_0221:
.Lt_0220:
.Lt_021F:
jmp .Lt_0207
.Lt_0223:
mov edx, dword ptr [ENV+844]
and edx, 480
je .Lt_0224
mov dword ptr [ebp-48], 22
jmp .Lt_0445
.Lt_0224:
mov edx, dword ptr [ENV+844]
and edx, 31
mov dword ptr [ebp-48], edx
.Lt_0445:
mov edx, dword ptr [ebp-48]
imul edx, 28
mov eax, dword ptr [SYMB_DTYPETB+edx+4]
mov dword ptr [ebp-52], eax
cmp dword ptr [ebp-52], 2
jne .Lt_0228
.Lt_0229:
cmp dword ptr [ebp-12], 0
mov eax, -1
ja .Lt_0452
jb .Lt_0453
cmp dword ptr [ebp-16], 65535
ja .Lt_0452
.Lt_0453:
xor eax, eax
.Lt_0452:
mov dword ptr [ebp-36], eax
jmp .Lt_0226
.Lt_0228:
cmp dword ptr [ebp-52], 4
jne .Lt_022A
.Lt_022B:
cmp dword ptr [ebp-12], 0
mov eax, -1
ja .Lt_0454
jb .Lt_0455
cmp dword ptr [ebp-16], 4294967295
ja .Lt_0454
.Lt_0455:
xor eax, eax
.Lt_0454:
mov dword ptr [ebp-36], eax
jmp .Lt_0226
.Lt_022A:
mov dword ptr [ebp-36], 0
.Lt_022C:
.Lt_0226:
cmp dword ptr [ebp-36], 0
je .Lt_022E
cmp dword ptr [ebp-28], 0
jne .Lt_0230
mov eax, dword ptr [ebp+20]
and eax, 1
test eax, eax
jne .Lt_0232
push 1
push 0
push 8
call ERRREPORTWARN
add esp, 12
.Lt_0232:
.Lt_0231:
.Lt_0230:
.Lt_022F:
.Lt_022E:
.Lt_022D:
mov eax, dword ptr [ebp+12]
mov edx, dword ptr [ENV+844]
mov dword ptr [eax], edx
call LEXEATCHAR
jmp .Lt_0207
.Lt_0233:
mov edx, dword ptr [ebp+12]
mov eax, dword ptr [edx]
and eax, 480
je .Lt_0234
mov dword ptr [ebp-48], 22
jmp .Lt_0446
.Lt_0234:
mov eax, dword ptr [ebp+12]
mov edx, dword ptr [eax]
and edx, 31
mov dword ptr [ebp-48], edx
.Lt_0446:
mov edx, dword ptr [ebp-48]
imul edx, 28
cmp dword ptr [SYMB_DTYPETB+edx+4], 4
jle .Lt_0237
cmp dword ptr [ebp-28], 0
jne .Lt_0239
mov edx, dword ptr [ebp+20]
and edx, 1
test edx, edx
jne .Lt_023B
push 1
push 0
push 8
call ERRREPORTWARN
add esp, 12
.Lt_023B:
.Lt_023A:
.Lt_0239:
.Lt_0238:
.Lt_0237:
.Lt_0236:
mov edx, dword ptr [ebp+12]
mov dword ptr [edx], 10
call LEXEATCHAR
jmp .Lt_0207
.Lt_023C:
cmp dword ptr [ebp-8], 0
jne .Lt_023E
mov edx, dword ptr [ebp+12]
mov dword ptr [edx], 14
call LEXEATCHAR
.Lt_023E:
.Lt_023D:
jmp .Lt_0207
.Lt_023F:
cmp dword ptr [ebp-8], 0
jne .Lt_0241
push 0
call LEXGETLOOKAHEADCHAR
add esp, 4
cmp eax, 35
je .Lt_0243
mov eax, dword ptr [ebp+12]
mov dword ptr [eax], 15
call LEXEATCHAR
.Lt_0243:
.Lt_0242:
.Lt_0241:
.Lt_0240:
jmp .Lt_0207
.Lt_0208:
mov eax, dword ptr [ebp-44]
add eax, 4294967263
cmp eax, 75
ja .Lt_0207
mov eax, dword ptr [ebp-44]
jmp dword ptr [.LT_0244+eax*4-132]
.LT_0244:
.int .Lt_023C
.int .Lt_0207
.int .Lt_023F
.int .Lt_0207
.int .Lt_0223
.int .Lt_0233
.int .Lt_0207
.int .Lt_0207
.int .Lt_0207
.int .Lt_0207
.int .Lt_0207
.int .Lt_0207
.int .Lt_0207
.int .Lt_0207
.int .Lt_0207
.int .Lt_0207
.int .Lt_0207
.int .Lt_0207
.int .Lt_0207
.int .Lt_0207
.int .Lt_0207
.int .Lt_0207
.int .Lt_0207
.int .Lt_0207
.int .Lt_0207
.int .Lt_0207
.int .Lt_0207
.int .Lt_0207
.int .Lt_0207
.int .Lt_0207
.int .Lt_0207
.int .Lt_0207
.int .Lt_0207
.int .Lt_0207
.int .Lt_0207
.int .Lt_021E
.int .Lt_0207
.int .Lt_0219
.int .Lt_0207
.int .Lt_0207
.int .Lt_0207
.int .Lt_0207
.int .Lt_0207
.int .Lt_020A
.int .Lt_0207
.int .Lt_0207
.int .Lt_0207
.int .Lt_0207
.int .Lt_0207
.int .Lt_0207
.int .Lt_0207
.int .Lt_0207
.int .Lt_0207
.int .Lt_0207
.int .Lt_0207
.int .Lt_0207
.int .Lt_0207
.int .Lt_0207
.int .Lt_0207
.int .Lt_0207
.int .Lt_0207
.int .Lt_0207
.int .Lt_0207
.int .Lt_0207
.int .Lt_0207
.int .Lt_0207
.int .Lt_0207
.int .Lt_021E
.int .Lt_0207
.int .Lt_0219
.int .Lt_0207
.int .Lt_0207
.int .Lt_0207
.int .Lt_0207
.int .Lt_0207
.int .Lt_020A
.Lt_0207:
.Lt_01FF:
.Lt_01FE:
.Lt_01FD:
.Lt_01FC:
.Lt_01AA:
pop edi
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size HREADNUMBER, .-HREADNUMBER
.balign 16
HREADSTRING:
.type HREADSTRING, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
.Lt_0245:
mov eax, dword ptr [ebp+12]
mov byte ptr [eax], 0
mov dword ptr [ebp-4], 0
mov dword ptr [ebp-8], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
cmp ebx, 263
sete bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-12], ebx
mov dword ptr [ebp-16], 0
mov ebx, dword ptr [ebp+16]
and ebx, 16
test ebx, ebx
jne .Lt_0248
call LEXEATCHAR
jmp .Lt_0247
.Lt_0248:
call LEXEATCHAR
mov bl, al
mov eax, dword ptr [ebp+12]
mov byte ptr [eax], bl
inc dword ptr [ebp+12]
inc dword ptr [ebp-4]
.Lt_0247:
.Lt_0249:
push 0
call LEXCURRENTCHAR
add esp, 4
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 34
jne .Lt_024D
call LEXEATCHAR
mov eax, dword ptr [ebp+16]
and eax, 16
test eax, eax
je .Lt_024F
cmp dword ptr [ebp-16], 0
jne .Lt_0251
mov eax, dword ptr [ebp+12]
mov byte ptr [eax], 34
inc dword ptr [ebp+12]
inc dword ptr [ebp-4]
.Lt_0251:
.Lt_0250:
.Lt_024F:
.Lt_024E:
push 0
call LEXCURRENTCHAR
add esp, 4
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 34
je .Lt_0253
jmp .Lt_024A
.Lt_0253:
jmp .Lt_024C
.Lt_024D:
cmp dword ptr [ebp-20], 27
jne .Lt_0254
mov eax, dword ptr [ebp+16]
and eax, 16
test eax, eax
jne .Lt_0256
cmp dword ptr [ebp-16], 0
jne .Lt_0258
mov eax, dword ptr [ebp+12]
mov byte ptr [eax], 27
inc dword ptr [ebp+12]
inc dword ptr [ebp-4]
.Lt_0258:
.Lt_0257:
.Lt_0256:
.Lt_0255:
jmp .Lt_024C
.Lt_0254:
cmp dword ptr [ebp-20], 92
jne .Lt_0259
mov dword ptr [ebp-8], -1
cmp dword ptr [ebp-12], 0
je .Lt_025B
call LEXEATCHAR
cmp dword ptr [ebp-16], 0
jne .Lt_025D
mov eax, dword ptr [ebp+12]
mov byte ptr [eax], 92
inc dword ptr [ebp+12]
inc dword ptr [ebp-4]
.Lt_025D:
.Lt_025C:
push 0
call LEXCURRENTCHAR
add esp, 4
mov dword ptr [ebp-20], eax
.Lt_025B:
.Lt_025A:
.Lt_0259:
.Lt_024C:
cmp dword ptr [ebp-20], 0
je .Lt_0260
.Lt_0261:
cmp dword ptr [ebp-20], 13
je .Lt_0260
.Lt_0262:
cmp dword ptr [ebp-20], 10
jne .Lt_025F
.Lt_0260:
mov eax, dword ptr [ebp+16]
and eax, 9
test eax, eax
jne .Lt_0264
push 1
push 0
push 12
call ERRREPORTWARN
add esp, 12
.Lt_0264:
.Lt_0263:
jmp .Lt_024A
.Lt_025F:
.Lt_025E:
call LEXEATCHAR
cmp dword ptr [ebp-16], 0
jne .Lt_0266
cmp dword ptr [ebp-4], 1024
jne .Lt_0268
mov eax, dword ptr [ebp+16]
and eax, 1
test eax, eax
jne .Lt_026A
mov eax, dword ptr [ebp+16]
or eax, 1
mov ebx, eax
mov dword ptr [ebp+16], ebx
push 1
push 0
push 9
call ERRREPORTWARN
add esp, 12
.Lt_026A:
.Lt_0269:
mov dword ptr [ebp-16], -1
jmp .Lt_0267
.Lt_0268:
mov bl, byte ptr [ebp-20]
mov eax, dword ptr [ebp+12]
mov byte ptr [eax], bl
inc dword ptr [ebp+12]
inc dword ptr [ebp-4]
.Lt_0267:
.Lt_0266:
.Lt_0265:
.Lt_024B:
jmp .Lt_0249
.Lt_024A:
mov ebx, dword ptr [ebp+12]
mov byte ptr [ebx], 0
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+8], 3
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp-4]
mov dword ptr [ebx+4112], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-8]
mov dword ptr [eax+4120], ebx
.Lt_0246:
pop ebx
mov esp, ebp
pop ebp
ret
.size HREADSTRING, .-HREADSTRING
.balign 16
HREADWSTR:
.type HREADWSTR, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
.Lt_026B:
mov eax, dword ptr [ebp+12]
mov dword ptr [eax], 0
mov dword ptr [ebp-4], 0
mov dword ptr [ebp-8], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
cmp ebx, 263
sete bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-12], ebx
mov dword ptr [ebp-16], 0
mov ebx, dword ptr [ebp+16]
and ebx, 16
test ebx, ebx
jne .Lt_026E
call LEXEATCHAR
jmp .Lt_026D
.Lt_026E:
call LEXEATCHAR
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx], eax
add dword ptr [ebp+12], 4
inc dword ptr [ebp-4]
.Lt_026D:
.Lt_026F:
push 0
call LEXCURRENTCHAR
add esp, 4
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 34
jne .Lt_0273
call LEXEATCHAR
mov eax, dword ptr [ebp+16]
and eax, 16
test eax, eax
je .Lt_0275
cmp dword ptr [ebp-16], 0
jne .Lt_0277
mov eax, dword ptr [ebp+12]
mov dword ptr [eax], 34
add dword ptr [ebp+12], 4
inc dword ptr [ebp-4]
.Lt_0277:
.Lt_0276:
.Lt_0275:
.Lt_0274:
push 0
call LEXCURRENTCHAR
add esp, 4
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 34
je .Lt_0279
jmp .Lt_0270
.Lt_0279:
jmp .Lt_0272
.Lt_0273:
cmp dword ptr [ebp-20], 27
jne .Lt_027A
mov eax, dword ptr [ebp+16]
and eax, 16
test eax, eax
jne .Lt_027C
cmp dword ptr [ebp-16], 0
jne .Lt_027E
mov eax, dword ptr [ebp+12]
mov dword ptr [eax], 27
add dword ptr [ebp+12], 4
inc dword ptr [ebp-4]
.Lt_027E:
.Lt_027D:
.Lt_027C:
.Lt_027B:
jmp .Lt_0272
.Lt_027A:
cmp dword ptr [ebp-20], 92
jne .Lt_027F
mov dword ptr [ebp-8], -1
cmp dword ptr [ebp-12], 0
je .Lt_0281
call LEXEATCHAR
cmp dword ptr [ebp-16], 0
jne .Lt_0283
mov eax, dword ptr [ebp+12]
mov dword ptr [eax], 92
add dword ptr [ebp+12], 4
inc dword ptr [ebp-4]
.Lt_0283:
.Lt_0282:
push 0
call LEXCURRENTCHAR
add esp, 4
mov dword ptr [ebp-20], eax
.Lt_0281:
.Lt_0280:
.Lt_027F:
.Lt_0272:
cmp dword ptr [ebp-20], 0
je .Lt_0286
.Lt_0287:
cmp dword ptr [ebp-20], 13
je .Lt_0286
.Lt_0288:
cmp dword ptr [ebp-20], 10
jne .Lt_0285
.Lt_0286:
mov eax, dword ptr [ebp+16]
and eax, 9
test eax, eax
jne .Lt_028A
push 1
push 0
push 12
call ERRREPORTWARN
add esp, 12
.Lt_028A:
.Lt_0289:
jmp .Lt_0270
.Lt_0285:
.Lt_0284:
call LEXEATCHAR
cmp dword ptr [ebp-16], 0
jne .Lt_028C
cmp dword ptr [ebp-4], 1024
jne .Lt_028E
mov eax, dword ptr [ebp+16]
and eax, 1
test eax, eax
jne .Lt_0290
mov eax, dword ptr [ebp+16]
or eax, 1
mov ebx, eax
mov dword ptr [ebp+16], ebx
push 1
push 0
push 9
call ERRREPORTWARN
add esp, 12
.Lt_0290:
.Lt_028F:
mov dword ptr [ebp-16], -1
jmp .Lt_028D
.Lt_028E:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebp-20]
mov dword ptr [ebx], eax
add dword ptr [ebp+12], 4
inc dword ptr [ebp-4]
.Lt_028D:
.Lt_028C:
.Lt_028B:
.Lt_0271:
jmp .Lt_026F
.Lt_0270:
mov eax, dword ptr [ebp+12]
mov dword ptr [eax], 0
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+8], 6
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-4]
mov dword ptr [eax+4112], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp-8]
mov dword ptr [ebx+4120], eax
.Lt_026C:
pop ebx
mov esp, ebp
pop ebp
ret
.size HREADWSTR, .-HREADWSTR
.balign 16
HCHECKPERIODS:
.type HCHECKPERIODS, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_0291:
cmp dword ptr [ebp+16], 0
je .Lt_0294
mov dword ptr [ebp-4], 0
push 0
call LEXCURRENTCHAR
add esp, 4
cmp eax, 46
jne .Lt_0296
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax]
cmp dword ptr [ebx], 8
je .Lt_0298
mov dword ptr [ebp-4], -1
.Lt_0299:
cmp dword ptr [ebp+16], 0
je .Lt_029A
mov ebx, dword ptr [ebp+16]
mov eax, dword ptr [ebx]
mov dword ptr [ebp-8], eax
.Lt_029B:
mov eax, dword ptr [ebp-8]
cmp dword ptr [eax], 1
jne .Lt_029F
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+24]
and ebx, 511
cmp ebx, 18
jne .Lt_02A1
jmp .Lt_0292
.Lt_02A1:
.Lt_02A0:
.Lt_029F:
.Lt_029E:
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx+144]
mov dword ptr [ebp-8], eax
.Lt_029D:
cmp dword ptr [ebp-8], 0
jne .Lt_029B
.Lt_029C:
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp+16], ebx
jmp .Lt_0299
.Lt_029A:
.Lt_0298:
.Lt_0297:
.Lt_0296:
.Lt_0295:
jmp .Lt_0293
.Lt_0294:
push 0
call LEXCURRENTCHAR
add esp, 4
cmp eax, 46
sete bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-4], ebx
.Lt_0293:
cmp dword ptr [ebp-4], 0
je .Lt_02A3
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [ebx+4112]
mov dword ptr [eax+4120], ecx
mov ecx, dword ptr [ebp+12]
or ecx, 128
mov eax, ecx
push eax
mov eax, dword ptr [ebp+8]
lea ecx, [eax+8]
push ecx
mov ecx, dword ptr [ebp+8]
lea eax, [ecx+4112]
push eax
mov eax, dword ptr [ebp+8]
lea ecx, [eax+12]
mov eax, dword ptr [ebp+8]
add ecx, dword ptr [eax+4112]
push ecx
call HREADIDENTIFIER
add esp, 16
push 0
mov ecx, dword ptr [ebp+8]
lea eax, [ecx+4]
push eax
mov eax, dword ptr [ebp+8]
lea ecx, [eax]
push ecx
mov ecx, dword ptr [ebp+8]
lea eax, [ecx+12]
push eax
call SYMBLOOKUP
add esp, 16
mov ecx, dword ptr [ebp+8]
mov dword ptr [ecx+4116], eax
.Lt_02A3:
.Lt_02A2:
.Lt_0292:
pop ebx
mov esp, ebp
pop ebp
ret
.size HCHECKPERIODS, .-HCHECKPERIODS
.balign 16
HMULTILINECOMMENT:
.type HMULTILINECOMMENT, @function
push ebp
mov ebp, esp
sub esp, 4
.Lt_0342:
call LEXEATCHAR
mov dword ptr [Lt_0459], 0
.Lt_0344:
push -1
call LEXCURRENTCHAR
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_0348
.Lt_034A:
push 0
push 1
push 0
push 0
push 131
call ERRREPORTEX
add esp, 20
jmp .Lt_0343
jmp .Lt_0347
.Lt_034B:
call LEXEATCHAR
push 0
call LEXCURRENTCHAR
add esp, 4
cmp eax, 10
jne .Lt_034D
call LEXEATCHAR
.Lt_034D:
.Lt_034C:
mov eax, dword ptr [LEX+839664]
cmp dword ptr [eax+16568], 0
jne .Lt_034F
mov eax, dword ptr [LEX+839664]
inc dword ptr [eax+16548]
.Lt_034F:
.Lt_034E:
jmp .Lt_0347
.Lt_0350:
call LEXEATCHAR
mov eax, dword ptr [LEX+839664]
cmp dword ptr [eax+16568], 0
jne .Lt_0352
mov eax, dword ptr [LEX+839664]
inc dword ptr [eax+16548]
.Lt_0352:
.Lt_0351:
jmp .Lt_0347
.Lt_0353:
call LEXEATCHAR
push 0
call LEXCURRENTCHAR
add esp, 4
cmp eax, 39
jne .Lt_0355
call LEXEATCHAR
inc dword ptr [Lt_0459]
.Lt_0355:
.Lt_0354:
jmp .Lt_0347
.Lt_0356:
call LEXEATCHAR
push 0
call LEXCURRENTCHAR
add esp, 4
cmp eax, 47
jne .Lt_0358
call LEXEATCHAR
cmp dword ptr [Lt_0459], 0
jne .Lt_035A
jmp .Lt_0345
.Lt_035A:
.Lt_0359:
dec dword ptr [Lt_0459]
.Lt_0358:
.Lt_0357:
jmp .Lt_0347
.Lt_035B:
call LEXEATCHAR
jmp .Lt_0347
.Lt_0348:
cmp dword ptr [ebp-4], 47
ja .Lt_035B
mov eax, dword ptr [ebp-4]
jmp dword ptr [.LT_035C+eax*4]
.LT_035C:
.int .Lt_034A
.int .Lt_035B
.int .Lt_035B
.int .Lt_035B
.int .Lt_035B
.int .Lt_035B
.int .Lt_035B
.int .Lt_035B
.int .Lt_035B
.int .Lt_035B
.int .Lt_0350
.int .Lt_035B
.int .Lt_035B
.int .Lt_034B
.int .Lt_035B
.int .Lt_035B
.int .Lt_035B
.int .Lt_035B
.int .Lt_035B
.int .Lt_035B
.int .Lt_035B
.int .Lt_035B
.int .Lt_035B
.int .Lt_035B
.int .Lt_035B
.int .Lt_035B
.int .Lt_035B
.int .Lt_035B
.int .Lt_035B
.int .Lt_035B
.int .Lt_035B
.int .Lt_035B
.int .Lt_035B
.int .Lt_035B
.int .Lt_035B
.int .Lt_035B
.int .Lt_035B
.int .Lt_035B
.int .Lt_035B
.int .Lt_0356
.int .Lt_035B
.int .Lt_035B
.int .Lt_035B
.int .Lt_035B
.int .Lt_035B
.int .Lt_035B
.int .Lt_035B
.int .Lt_0353
.Lt_0347:
.Lt_0346:
jmp .Lt_0344
.Lt_0345:
.Lt_0343:
mov esp, ebp
pop ebp
ret
.size HMULTILINECOMMENT, .-HMULTILINECOMMENT

.section .bss
.balign 4
	.lcomm	Lt_0459,4

.section .text
.balign 16
HMOVEKDOWN:
.type HMOVEKDOWN, @function
push ebx
.Lt_0375:
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [eax+16532]
mov dword ptr [ebx], -1
mov ebx, dword ptr [LEX+839664]
dec dword ptr [ebx+16528]
mov ebx, dword ptr [LEX+839664]
mov eax, dword ptr [ebx+16532]
mov ebx, dword ptr [LEX+839664]
mov ecx, dword ptr [eax+4128]
mov dword ptr [ebx+16532], ecx
.Lt_0376:
pop ebx
ret
.size HMOVEKDOWN, .-HMOVEKDOWN
.balign 16
LEXGETSTRLITTEXT:
.type LEXGETSTRLITTEXT, @function
push ebp
mov ebp, esp
sub esp, 52
push ebx
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_0377:
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
cmp dword ptr [ebp+8], 262
jne .Lt_037A
.Lt_037B:
mov dword ptr [ebp-28], 0
jmp .Lt_0379
.Lt_037A:
cmp dword ptr [ebp+8], 263
jne .Lt_037C
.Lt_037D:
push 0
push 2
push offset Lt_037E
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
mov dword ptr [ebp-28], -1
jmp .Lt_0379
.Lt_037C:
cmp dword ptr [ebp+8], 264
jne .Lt_037F
.Lt_0380:
push 0
push 2
push offset Lt_0381
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
mov dword ptr [ebp-28], 0
.Lt_037F:
.Lt_0379:
push 0
push 2
push offset Lt_0382
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
mov dword ptr [ebp-32], 0
call LEXGETTEXT
mov dword ptr [ebp-36], eax
.Lt_0383:
mov eax, dword ptr [ebp-36]
mov bl, byte ptr [eax]
mov byte ptr [ebp-40], bl
movzx ebx, byte ptr [ebp-40]
test ebx, ebx
jne .Lt_0388
.Lt_0389:
jmp .Lt_0384
jmp .Lt_0386
.Lt_0388:
movzx ebx, byte ptr [ebp-40]
cmp ebx, 34
jne .Lt_038A
.Lt_038B:
cmp dword ptr [ebp-32], 0
je .Lt_038D
push 0
push 2
push offset Lt_0382
push -1
lea ebx, [ebp-24]
push ebx
call fb_StrConcatAssign
add esp, 20
jmp .Lt_038C
.Lt_038D:
push 0
push 3
push offset Lt_038E
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_038C:
mov dword ptr [ebp-32], 0
jmp .Lt_0386
.Lt_038A:
movzx eax, byte ptr [ebp-40]
cmp eax, 92
jne .Lt_038F
.Lt_0391:
mov eax, dword ptr [ebp-28]
mov dword ptr [ebp-32], eax
push 0
push 2
push offset Lt_0390
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_0386
.Lt_038F:
mov dword ptr [ebp-32], 0
push 0
push -1
push -1
mov eax, dword ptr [ebp-36]
movzx ebx, byte ptr [eax]
push ebx
push 1
call fb_CHR
add esp, 8
push eax
push -1
lea eax, [ebp-24]
push eax
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
lea eax, [ebp-52]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
.Lt_0392:
.Lt_0386:
inc dword ptr [ebp-36]
.Lt_0385:
jmp .Lt_0383
.Lt_0384:
push 0
push 2
push offset Lt_0382
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
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
.Lt_0378:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
pop ebx
mov esp, ebp
pop ebp
ret
.size LEXGETSTRLITTEXT, .-LEXGETSTRLITTEXT
	#fbc-1.01.0/src/compiler/lex.bas' compilation took 0.04212706990074366 secs

.section .rodata
.balign 4
Lt_0000:	.ascii	"\0"

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

.globl LEX
.balign 4
	.lcomm	LEX,839672
.balign 4
	.lcomm	PPONLY_LN,12

.section .rodata
.balign 4
Lt_0094:	.ascii	" [Macro Expansion: \0"
.balign 4
Lt_00AF:	.ascii	" ] \0"
.balign 4
Lt_037E:	.ascii	"!\0"
.balign 4
Lt_0381:	.ascii	"$\0"
.balign 4
Lt_0382:	.ascii	"\"\0"
.balign 4
Lt_038E:	.ascii	"\"\"\0"
.balign 4
Lt_0390:	.ascii	"\\\0"
.balign 4
Lt_03A7:	.ascii	" \0"
.balign 4
Lt_0401:	.ascii	"fbc-1.01.0/src/compiler/lex.bas\0"
.balign 4
Lt_0436:	.ascii	"^\0"

.section .ctors, "aw", @progbits
.int fb_ctor__lex
