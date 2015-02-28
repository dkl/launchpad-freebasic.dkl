	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/symb-mangling.bas' compilation started at 14:16:39 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl SYMBMANGLEINIT
SYMBMANGLEINIT:
.type SYMBMANGLEINIT, @function
.Lt_0056:
push 12
push 96
lea eax, [CTX]
push eax
call FLISTINIT
add esp, 12
mov dword ptr [CTX+56], 0
mov dword ptr [CTX+80], 0
mov dword ptr [CTX+84], 0
mov dword ptr [CTX+88], 0
.Lt_0057:
ret
.size SYMBMANGLEINIT, .-SYMBMANGLEINIT
.balign 16

.globl SYMBMANGLEEND
SYMBMANGLEEND:
.type SYMBMANGLEEND, @function
.Lt_0058:
lea eax, [CTX]
push eax
call FLISTEND
add esp, 4
.Lt_0059:
ret
.size SYMBMANGLEEND, .-SYMBMANGLEEND
.balign 16

.globl SYMBUNIQUEID
SYMBUNIQUEID:
.type SYMBUNIQUEID, @function
push ebp
mov ebp, esp
sub esp, 16
mov dword ptr [ebp-4], 0
.Lt_005A:
cmp dword ptr [ENV+104], 1
jne .Lt_005D
push 0
push 5
push offset Lt_005E
push 17
lea eax, [CTX+60]
push eax
call fb_StrAssign
add esp, 20
push 0
push -1
push -1
push dword ptr [CTX+80]
call fb_IntToStr
add esp, 4
push eax
push 17
lea eax, [CTX+60]
push eax
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
lea eax, [ebp-16]
push eax
call fb_StrConcat
add esp, 20
push eax
push 17
lea eax, [CTX+60]
push eax
call fb_StrAssign
add esp, 20
jmp .Lt_005C
.Lt_005D:
push 0
push 4
push offset Lt_0060
push 17
lea eax, [CTX+60]
push eax
call fb_StrAssign
add esp, 20
push 0
push -1
push 0
push dword ptr [CTX+80]
call HHEXUINT
add esp, 4
push eax
push 17
lea eax, [CTX+60]
push eax
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
lea eax, [ebp-16]
push eax
call fb_StrConcat
add esp, 20
push eax
push 17
lea eax, [CTX+60]
push eax
call fb_StrAssign
add esp, 20
.Lt_005C:
inc dword ptr [CTX+80]
lea eax, [CTX+60]
mov dword ptr [ebp-4], eax
.Lt_005B:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size SYMBUNIQUEID, .-SYMBUNIQUEID
.balign 16

.globl SYMBUNIQUELABEL
SYMBUNIQUELABEL:
.type SYMBUNIQUELABEL, @function
push ebp
mov ebp, esp
sub esp, 16
mov dword ptr [ebp-4], 0
.Lt_0062:
cmp dword ptr [ENV+104], 1
jne .Lt_0065
push 0
push 7
push offset Lt_0066
push 17
lea eax, [CTX+60]
push eax
call fb_StrAssign
add esp, 20
push 0
push -1
push -1
push dword ptr [CTX+84]
call fb_IntToStr
add esp, 4
push eax
push 17
lea eax, [CTX+60]
push eax
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
lea eax, [ebp-16]
push eax
call fb_StrConcat
add esp, 20
push eax
push 17
lea eax, [CTX+60]
push eax
call fb_StrAssign
add esp, 20
inc dword ptr [CTX+84]
jmp .Lt_0064
.Lt_0065:
push 0
push 5
push offset Lt_0068
push 17
lea eax, [CTX+60]
push eax
call fb_StrAssign
add esp, 20
push 0
push -1
push 0
push dword ptr [CTX+80]
call HHEXUINT
add esp, 4
push eax
push 17
lea eax, [CTX+60]
push eax
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
lea eax, [ebp-16]
push eax
call fb_StrConcat
add esp, 20
push eax
push 17
lea eax, [CTX+60]
push eax
call fb_StrAssign
add esp, 20
inc dword ptr [CTX+80]
.Lt_0064:
lea eax, [CTX+60]
mov dword ptr [ebp-4], eax
.Lt_0063:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size SYMBUNIQUELABEL, .-SYMBUNIQUELABEL
.balign 16

.globl SYMBMAKEPROFILELABELNAME
SYMBMAKEPROFILELABELNAME:
.type SYMBMAKEPROFILELABELNAME, @function
push ebp
mov ebp, esp
sub esp, 16
mov dword ptr [ebp-4], 0
.Lt_006A:
push 0
push -1
push 0
push dword ptr [CTX+88]
call HHEXUINT
add esp, 4
push eax
push 4
push offset Lt_006C
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
lea eax, [ebp-16]
push eax
call fb_StrConcat
add esp, 20
push eax
push 17
lea eax, [CTX+60]
push eax
call fb_StrAssign
add esp, 20
inc dword ptr [CTX+88]
lea eax, [CTX+60]
mov dword ptr [ebp-4], eax
.Lt_006B:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size SYMBMAKEPROFILELABELNAME, .-SYMBMAKEPROFILELABELNAME
.balign 16

.globl SYMBGETDBGNAME
SYMBGETDBGNAME:
.type SYMBGETDBGNAME, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_006E:
push dword ptr [ebp+8]
call HDOCPPMANGLING
add esp, 4
test eax, eax
je .Lt_0071
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-8], ebx
jmp .Lt_0073
.Lt_0075:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+16]
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_0077
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+12]
mov dword ptr [ebp-12], ebx
.Lt_0077:
.Lt_0076:
mov ebx, dword ptr [ebp-12]
mov dword ptr [ebp-4], ebx
jmp .Lt_006F
jmp .Lt_0072
.Lt_0078:
push dword ptr [ebp+8]
call SYMBGETMANGLEDNAME
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_006F
jmp .Lt_0072
.Lt_0073:
mov eax, dword ptr [ebp-8]
add eax, 4294967288
cmp eax, 3
ja .Lt_0078
mov eax, dword ptr [ebp-8]
jmp dword ptr [.LT_0079+eax*4-32]
.LT_0079:
.int .Lt_0075
.int .Lt_0075
.int .Lt_0075
.int .Lt_0075
.Lt_0072:
.Lt_0071:
.Lt_0070:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
cmp ebx, 10
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+4]
and ecx, 8388608
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
and ebx, ecx
je .Lt_007B
mov ecx, dword ptr [ebp+8]
cmp dword ptr [ecx+16], 0
je .Lt_007D
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ecx+16]
mov dword ptr [ebp-4], ebx
jmp .Lt_006F
.Lt_007D:
.Lt_007C:
.Lt_007B:
.Lt_007A:
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebx+12]
mov dword ptr [ebp-4], ecx
.Lt_006F:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBGETDBGNAME, .-SYMBGETDBGNAME
.balign 16

.globl SYMBSETNAME
SYMBSETNAME:
.type SYMBSETNAME, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0080:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+12], 0
je .Lt_0083
mov eax, dword ptr [ebp+8]
push dword ptr [eax+12]
lea eax, [SYMB+98596]
push eax
call POOLDELITEM
add esp, 8
.Lt_0083:
.Lt_0082:
push 0
push dword ptr [ebp+12]
call fb_StrLen
add esp, 8
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
jne .Lt_0085
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+12], 0
jmp .Lt_0084
.Lt_0085:
mov eax, dword ptr [ebp-4]
inc eax
push eax
lea eax, [SYMB+98596]
push eax
call POOLNEWITEM
add esp, 8
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+12], eax
push 0
push 0
push dword ptr [ebp+12]
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax+12]
call fb_StrAssign
add esp, 20
.Lt_0084:
.Lt_0081:
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBSETNAME, .-SYMBSETNAME
.balign 16

.globl SYMBGETMANGLEDNAME
SYMBGETMANGLEDNAME:
.type SYMBGETMANGLEDNAME, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
mov dword ptr [ebp-4], 0
.Lt_0096:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+20], 0
je .Lt_0099
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+20]
mov dword ptr [ebp-4], ebx
jmp .Lt_0097
.Lt_0099:
.Lt_0098:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx]
mov dword ptr [ebp-8], eax
jmp .Lt_009B
.Lt_009D:
push dword ptr [ebp+8]
call HMANGLEPROC
add esp, 4
jmp .Lt_009A
.Lt_009E:
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
push 0
push -1
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+128]
push dword ptr [ebx]
lea ebx, [ebp-20]
push ebx
call HMANGLENAMESPACE
add esp, 16
push dword ptr [ebp+8]
lea ebx, [ebp-20]
push ebx
call HMANGLEUDTID
add esp, 8
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+128]
lea ebx, [SYMB+98352]
cmp dword ptr [eax], ebx
je .Lt_00A0
push 0
push 2
push offset Lt_0094
push -1
lea ebx, [ebp-20]
push ebx
call fb_StrConcatAssign
add esp, 20
.Lt_00A0:
.Lt_009F:
lea eax, [ebp-20]
push eax
push dword ptr [ebp+8]
call SYMBSETMANGLEDID
add esp, 8
lea eax, [ebp-20]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_009A
.Lt_00A1:
push dword ptr [ebp+8]
call HMANGLEVARIABLE
add esp, 4
jmp .Lt_009A
.Lt_00A2:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+16]
mov dword ptr [ebp-4], ebx
jmp .Lt_0097
jmp .Lt_009A
.Lt_009B:
mov ebx, dword ptr [ebp-8]
add ebx, 4294967295
cmp ebx, 13
ja .Lt_00A2
mov ebx, dword ptr [ebp-8]
jmp dword ptr [.LT_00A3+ebx*4-4]
.LT_00A3:
.int .Lt_00A1
.int .Lt_00A2
.int .Lt_009D
.int .Lt_00A2
.int .Lt_00A2
.int .Lt_00A2
.int .Lt_00A2
.int .Lt_009E
.int .Lt_009E
.int .Lt_009E
.int .Lt_009E
.int .Lt_00A2
.int .Lt_00A2
.int .Lt_009E
.Lt_009A:
call SYMBMANGLERESETABBREV
cmp dword ptr [ENV+104], 1
jne .Lt_00A5
mov ebx, dword ptr [ENV+840]
and ebx, 524288
test ebx, ebx
je .Lt_00A7
push 36
push 46
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+20]
call HREPLACECHAR
add esp, 12
.Lt_00A7:
.Lt_00A6:
.Lt_00A5:
.Lt_00A4:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+20]
mov dword ptr [ebp-4], eax
.Lt_0097:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBGETMANGLEDNAME, .-SYMBGETMANGLEDNAME
.balign 16

.globl SYMBMANGLERESETABBREV
SYMBMANGLERESETABBREV:
.type SYMBMANGLERESETABBREV, @function
.Lt_00A9:
lea eax, [CTX]
push eax
call FLISTRESET
add esp, 4
mov dword ptr [CTX+56], 0
.Lt_00AA:
ret
.size SYMBMANGLERESETABBREV, .-SYMBMANGLERESETABBREV
.balign 16

.globl HMANGLEBUILTINTYPE
HMANGLEBUILTINTYPE:
.type HMANGLEBUILTINTYPE, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_00D3:
mov eax, dword ptr [ebp+12]
mov dword ptr [eax], 0
cmp dword ptr [ebp+8], 16
jne .Lt_00D6
mov eax, dword ptr [ebp+12]
mov dword ptr [eax], -1
mov eax, offset Lt_00D7
mov dword ptr [ebp-4], eax
jmp .Lt_00D4
.Lt_00D6:
.Lt_00D5:
call FBIS64BIT
test eax, eax
je .Lt_00D9
mov eax, dword ptr [ENV+224]
and eax, 1
je .Lt_00DB
cmp dword ptr [ebp+8], 7
jne .Lt_00DD
.Lt_00DE:
mov eax, offset Lt_00DF
mov dword ptr [ebp-4], eax
jmp .Lt_00D4
jmp .Lt_00DC
.Lt_00DD:
cmp dword ptr [ebp+8], 8
jne .Lt_00E0
.Lt_00E1:
mov eax, offset Lt_00E2
mov dword ptr [ebp-4], eax
jmp .Lt_00D4
.Lt_00E0:
.Lt_00DC:
jmp .Lt_00DA
.Lt_00DB:
cmp dword ptr [ebp+8], 7
jne .Lt_00E4
.Lt_00E5:
mov eax, dword ptr [ebp+12]
mov dword ptr [eax], -1
mov eax, offset Lt_00E6
mov dword ptr [ebp-4], eax
jmp .Lt_00D4
jmp .Lt_00E3
.Lt_00E4:
cmp dword ptr [ebp+8], 8
jne .Lt_00E7
.Lt_00E8:
mov eax, dword ptr [ebp+12]
mov dword ptr [eax], -1
mov eax, offset Lt_00E9
mov dword ptr [ebp-4], eax
jmp .Lt_00D4
.Lt_00E7:
.Lt_00E3:
.Lt_00DA:
cmp dword ptr [ebp+8], 10
jne .Lt_00EB
.Lt_00EC:
mov eax, offset Lt_00ED
mov dword ptr [ebp-4], eax
jmp .Lt_00D4
jmp .Lt_00EA
.Lt_00EB:
cmp dword ptr [ebp+8], 11
jne .Lt_00EE
.Lt_00EF:
mov eax, offset Lt_00F0
mov dword ptr [ebp-4], eax
jmp .Lt_00D4
.Lt_00EE:
.Lt_00EA:
jmp .Lt_00D8
.Lt_00D9:
cmp dword ptr [ebp+8], 7
jne .Lt_00F2
.Lt_00F3:
mov eax, offset Lt_00ED
mov dword ptr [ebp-4], eax
jmp .Lt_00D4
jmp .Lt_00F1
.Lt_00F2:
cmp dword ptr [ebp+8], 8
jne .Lt_00F4
.Lt_00F5:
mov eax, offset Lt_00F0
mov dword ptr [ebp-4], eax
jmp .Lt_00D4
jmp .Lt_00F1
.Lt_00F4:
cmp dword ptr [ebp+8], 10
jne .Lt_00F6
.Lt_00F7:
mov eax, offset Lt_00DF
mov dword ptr [ebp-4], eax
jmp .Lt_00D4
jmp .Lt_00F1
.Lt_00F6:
cmp dword ptr [ebp+8], 11
jne .Lt_00F8
.Lt_00F9:
mov eax, offset Lt_00E2
mov dword ptr [ebp-4], eax
jmp .Lt_00D4
.Lt_00F8:
.Lt_00F1:
.Lt_00D8:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [Lt_0106+eax*4]
mov dword ptr [ebp-4], ebx
.Lt_00D4:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HMANGLEBUILTINTYPE, .-HMANGLEBUILTINTYPE

.section .data
.balign 4
Lt_0106:
.int Lt_00FB
.int Lt_00FC
.int Lt_00FD
.int Lt_00FE
.int Lt_00FF
.int Lt_0100
.int Lt_0101
.long 0
.long 0
.long 0
.long 0
.long 0
.int Lt_0102
.int Lt_0103
.int Lt_0104
.int Lt_0105
.long 0
.long 0
.long 0
.long 0
.long 0
.long 0
.long 0
.skip 4,0

.section .text
.balign 16

.globl SYMBMANGLETYPE
SYMBMANGLETYPE:
.type SYMBMANGLETYPE, @function
push ebp
mov ebp, esp
sub esp, 52
push ebx
.Lt_0107:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call HABBREVFIND
add esp, 8
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], -1
je .Lt_010A
push dword ptr [ebp-12]
push dword ptr [ebp+8]
call HABBREVGET
add esp, 8
jmp .Lt_0108
.Lt_010A:
.Lt_0109:
mov eax, dword ptr [ebp+12]
and eax, 480
je .Lt_010B
mov dword ptr [ebp-16], 22
jmp .Lt_0140
.Lt_010B:
mov eax, dword ptr [ebp+12]
and eax, 31
mov dword ptr [ebp-16], eax
.Lt_0140:
cmp dword ptr [ebp-16], 21
jne .Lt_010E
mov eax, dword ptr [ebp+12]
and eax, 2147483647
and eax, -512
or eax, 18
mov dword ptr [ebp+12], eax
.Lt_010E:
.Lt_010D:
mov eax, dword ptr [ebp+12]
and eax, 524288
test eax, eax
je .Lt_0110
mov eax, dword ptr [ebp+12]
and eax, 512
test eax, eax
je .Lt_0112
push 0
push -1
push 3
push offset Lt_0113
push -1
push dword ptr [ebp+8]
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
lea eax, [ebp-28]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+8]
call fb_StrAssign
add esp, 20
jmp .Lt_0111
.Lt_0112:
push 0
push -1
push 2
push offset Lt_0115
push -1
push dword ptr [ebp+8]
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
lea eax, [ebp-28]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+8]
call fb_StrAssign
add esp, 20
.Lt_0111:
push dword ptr [ebp+16]
mov eax, dword ptr [ebp+12]
and eax, -524289
push eax
push dword ptr [ebp+8]
call SYMBMANGLETYPE
add esp, 12
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call HABBREVADD
add esp, 8
jmp .Lt_0108
.Lt_0110:
.Lt_010F:
mov eax, dword ptr [ebp+12]
and eax, 480
test eax, eax
je .Lt_0118
mov eax, dword ptr [ebp+12]
and eax, 1024
test eax, eax
je .Lt_011A
push 0
push -1
push 3
push offset Lt_011B
push -1
push dword ptr [ebp+8]
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
lea eax, [ebp-28]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+8]
call fb_StrAssign
add esp, 20
jmp .Lt_0119
.Lt_011A:
push 0
push -1
push 2
push offset Lt_011D
push -1
push dword ptr [ebp+8]
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
lea eax, [ebp-28]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+8]
call fb_StrAssign
add esp, 20
.Lt_0119:
push dword ptr [ebp+16]
mov eax, dword ptr [ebp+12]
and eax, 31
mov ebx, dword ptr [ebp+12]
and ebx, 480
add ebx, -32
or eax, ebx
mov ebx, dword ptr [ebp+12]
and ebx, 261632
sar ebx, 1
and ebx, 261632
or eax, ebx
push eax
push dword ptr [ebp+8]
call SYMBMANGLETYPE
add esp, 12
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call HABBREVADD
add esp, 8
jmp .Lt_0108
.Lt_0118:
.Lt_0117:
mov eax, dword ptr [ebp+12]
and eax, 261632
je .Lt_0120
push dword ptr [ebp+16]
mov eax, dword ptr [ebp+12]
and eax, -513
push eax
push dword ptr [ebp+8]
call SYMBMANGLETYPE
add esp, 12
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call HABBREVADD
add esp, 8
jmp .Lt_0108
.Lt_0120:
.Lt_011F:
cmp dword ptr [ebp+12], 18
je .Lt_0123
.Lt_0124:
cmp dword ptr [ebp+12], 9
jne .Lt_0122
.Lt_0123:
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+128]
mov eax, dword ptr [ebx]
mov dword ptr [ebp-4], eax
lea eax, [SYMB+98352]
cmp dword ptr [ebp-4], eax
jne .Lt_0126
push dword ptr [ebp+16]
push dword ptr [ebp+8]
call HMANGLEUDTID
add esp, 8
jmp .Lt_0125
.Lt_0126:
push 0
push -1
push 2
push offset Lt_0127
push -1
push dword ptr [ebp+8]
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
lea eax, [ebp-28]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+8]
call fb_StrAssign
add esp, 20
push dword ptr [ebp-4]
mov eax, dword ptr [ebp-4]
push dword ptr [eax+24]
push dword ptr [ebp+8]
call SYMBMANGLETYPE
add esp, 12
push dword ptr [ebp+16]
push dword ptr [ebp+8]
call HMANGLEUDTID
add esp, 8
push 0
push -1
push 2
push offset Lt_0094
push -1
push dword ptr [ebp+8]
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
lea eax, [ebp-40]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+8]
call fb_StrAssign
add esp, 20
.Lt_0125:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call HABBREVADD
add esp, 8
jmp .Lt_0121
.Lt_0122:
cmp dword ptr [ebp+12], 19
jne .Lt_012A
.Lt_012B:
lea eax, [SYMB+98352]
cmp dword ptr [ebp+16], eax
jne .Lt_012D
jmp .Lt_0108
.Lt_012D:
.Lt_012C:
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+128]
mov eax, dword ptr [ebx]
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
je .Lt_012F
push dword ptr [ebp-4]
push 19
push dword ptr [ebp+8]
call SYMBMANGLETYPE
add esp, 12
.Lt_012F:
.Lt_012E:
push dword ptr [ebp+16]
push dword ptr [ebp+8]
call HMANGLEUDTID
add esp, 8
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call HABBREVADD
add esp, 8
jmp .Lt_0121
.Lt_012A:
cmp dword ptr [ebp+12], 20
jne .Lt_0130
.Lt_0131:
push 0
push -1
push 2
push offset Lt_0132
push -1
push dword ptr [ebp+8]
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
lea eax, [ebp-28]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+8]
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+4]
and ebx, 33554432
test ebx, ebx
je .Lt_0135
push 0
push -1
push 2
push offset Lt_0115
push -1
push dword ptr [ebp+8]
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
lea ebx, [ebp-52]
push ebx
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+8]
call fb_StrAssign
add esp, 20
.Lt_0135:
.Lt_0134:
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+24]
and ebx, 512
test ebx, ebx
je .Lt_0138
push 0
push -1
push 2
push offset Lt_0139
push -1
push dword ptr [ebp+8]
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
lea ebx, [ebp-52]
push ebx
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+8]
call fb_StrAssign
add esp, 20
.Lt_0138:
.Lt_0137:
mov eax, dword ptr [ebp+16]
push dword ptr [eax+28]
mov eax, dword ptr [ebp+16]
push dword ptr [eax+24]
push dword ptr [ebp+8]
call SYMBMANGLETYPE
add esp, 12
push 0
push dword ptr [ebp+16]
push dword ptr [ebp+8]
call HGETPROCPARAMSTYPECODE
add esp, 12
push 0
push -1
push 2
push offset Lt_0094
push -1
push dword ptr [ebp+8]
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
lea eax, [ebp-40]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+8]
call fb_StrAssign
add esp, 20
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call HABBREVADD
add esp, 8
jmp .Lt_0121
.Lt_0130:
push 0
push -1
push 0
lea eax, [ebp-8]
push eax
push dword ptr [ebp+12]
call HMANGLEBUILTINTYPE
add esp, 8
push eax
push -1
push dword ptr [ebp+8]
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
lea eax, [ebp-28]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+8]
call fb_StrAssign
add esp, 20
cmp dword ptr [ebp-8], 0
je .Lt_013F
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call HABBREVADD
add esp, 8
.Lt_013F:
.Lt_013E:
.Lt_013C:
.Lt_0121:
.Lt_0108:
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBMANGLETYPE, .-SYMBMANGLETYPE
.balign 16

.globl SYMBMANGLEPARAM
SYMBMANGLEPARAM:
.type SYMBMANGLEPARAM, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
.Lt_0141:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+52]
mov dword ptr [ebp-4], ebx
jmp .Lt_0144
.Lt_0146:
mov ebx, dword ptr [ebp+12]
push dword ptr [ebx+28]
mov ebx, dword ptr [ebp+12]
push dword ptr [ebx+24]
push dword ptr [ebp+8]
call SYMBMANGLETYPE
add esp, 12
jmp .Lt_0143
.Lt_0147:
mov ebx, dword ptr [ebp+12]
push dword ptr [ebx+28]
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+24]
or eax, 524288
push eax
push dword ptr [ebp+8]
call SYMBMANGLETYPE
add esp, 12
jmp .Lt_0143
.Lt_0148:
mov eax, dword ptr [ebp+12]
push dword ptr [eax+68]
push 524306
push dword ptr [ebp+8]
call SYMBMANGLETYPE
add esp, 12
jmp .Lt_0143
.Lt_0149:
push 0
push -1
push 2
push offset Lt_014A
push -1
push dword ptr [ebp+8]
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
lea eax, [ebp-16]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+8]
call fb_StrAssign
add esp, 20
jmp .Lt_0143
.Lt_0144:
mov eax, dword ptr [ebp-4]
add eax, 4294967295
cmp eax, 3
ja .Lt_0143
mov eax, dword ptr [ebp-4]
jmp dword ptr [.LT_014C+eax*4-4]
.LT_014C:
.int .Lt_0146
.int .Lt_0147
.int .Lt_0148
.int .Lt_0149
.Lt_0143:
.Lt_0142:
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBMANGLEPARAM, .-SYMBMANGLEPARAM
.balign 16
fb_ctor__symbzmangling:
.type fb_ctor__symbzmangling, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__symbzmangling, .-fb_ctor__symbzmangling
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
SYMBSETMANGLEDID:
.type SYMBSETMANGLEDID, @function
push ebp
mov ebp, esp
push ebx
.Lt_0086:
push -1
push dword ptr [ebp+12]
call fb_StrLen
add esp, 8
inc eax
mov ebx, eax
push ebx
call XALLOCATE
add esp, 4
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+20], eax
push 0
push -1
push dword ptr [ebp+12]
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax+20]
call fb_StrAssign
add esp, 20
.Lt_0087:
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBSETMANGLEDID, .-SYMBSETMANGLEDID
.balign 16
HMANGLEUDTID:
.type HMANGLEUDTID, @function
push ebp
mov ebp, esp
sub esp, 32
push ebx
.Lt_0088:
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax+16], 0
je .Lt_008B
push 0
push -1
push -1
push 0
mov eax, dword ptr [ebp+12]
push dword ptr [eax+16]
call fb_StrLen
add esp, 8
push eax
call fb_IntToStr
add esp, 4
push eax
push -1
push dword ptr [ebp+8]
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
lea eax, [ebp-20]
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
push 0
mov eax, dword ptr [ebp+12]
push dword ptr [eax+16]
push -1
push dword ptr [ebp+8]
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
lea eax, [ebp-32]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+8]
call fb_StrAssign
add esp, 20
jmp .Lt_008A
.Lt_008B:
push 0
push -1
push -1
push 0
mov eax, dword ptr [ebp+12]
push dword ptr [eax+12]
call fb_StrLen
add esp, 8
push eax
call fb_IntToStr
add esp, 4
push eax
push -1
push dword ptr [ebp+8]
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
lea eax, [ebp-20]
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
push 0
mov eax, dword ptr [ebp+12]
push dword ptr [eax+12]
push -1
push dword ptr [ebp+8]
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
lea eax, [ebp-32]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+8]
call fb_StrAssign
add esp, 20
.Lt_008A:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax]
cmp ebx, 10
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax+4]
and ecx, 8388608
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
and ebx, ecx
je .Lt_0091
push 0
push -1
push 2
push offset Lt_0092
push -1
push dword ptr [ebp+8]
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
lea ecx, [ebp-20]
push ecx
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+8]
call fb_StrAssign
add esp, 20
lea eax, [ebp-8]
push eax
lea eax, [ebp-4]
push eax
push dword ptr [ebp+12]
call SYMBGETDESCTYPEARRAYDTYPE
add esp, 12
push dword ptr [ebp-8]
push dword ptr [ebp-4]
push dword ptr [ebp+8]
call SYMBMANGLETYPE
add esp, 12
push 0
push -1
push 2
push offset Lt_0094
push -1
push dword ptr [ebp+8]
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
lea eax, [ebp-32]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+8]
call fb_StrAssign
add esp, 20
.Lt_0091:
.Lt_0090:
.Lt_0089:
pop ebx
mov esp, ebp
pop ebp
ret
.size HMANGLEUDTID, .-HMANGLEUDTID
.balign 16
HABBREVFIND:
.type HABBREVFIND, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_00AB:
cmp dword ptr [CTX+56], 0
jne .Lt_00AE
mov dword ptr [ebp-4], -1
jmp .Lt_00AC
.Lt_00AE:
.Lt_00AD:
cmp dword ptr [ebp+12], 0
jne .Lt_00B0
mov eax, dword ptr [ebp+8]
and eax, 480
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_00B2
mov eax, dword ptr [ebp+8]
and eax, 480
je .Lt_00B3
mov dword ptr [ebp-12], 22
jmp .Lt_0297
.Lt_00B3:
mov eax, dword ptr [ebp+8]
and eax, 31
mov dword ptr [ebp-12], eax
.Lt_0297:
cmp dword ptr [ebp-12], 16
je .Lt_00B6
mov dword ptr [ebp-4], -1
jmp .Lt_00AC
.Lt_00B6:
.Lt_00B5:
.Lt_00B2:
.Lt_00B1:
.Lt_00B0:
.Lt_00AF:
lea eax, [CTX]
push eax
call FLISTGETHEAD
add esp, 4
mov dword ptr [ebp-8], eax
.Lt_00B7:
cmp dword ptr [ebp-8], 0
je .Lt_00B8
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+12]
cmp dword ptr [eax+8], ebx
jne .Lt_00BA
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebp+8]
cmp dword ptr [ebx+4], eax
jne .Lt_00BC
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-4], ebx
jmp .Lt_00AC
.Lt_00BC:
.Lt_00BB:
.Lt_00BA:
.Lt_00B9:
push dword ptr [ebp-8]
call FLISTGETNEXT
add esp, 4
mov dword ptr [ebp-8], eax
jmp .Lt_00B7
.Lt_00B8:
mov dword ptr [ebp-4], -1
.Lt_00AC:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HABBREVFIND, .-HABBREVFIND
.balign 16
HABBREVADD:
.type HABBREVADD, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_00BD:
lea eax, [CTX]
push eax
call FLISTNEWITEM
add esp, 4
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [CTX+56]
mov dword ptr [eax], ebx
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebp+8]
mov dword ptr [ebx+4], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+12]
mov dword ptr [eax+8], ebx
inc dword ptr [CTX+56]
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ebx
.Lt_00BE:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HABBREVADD, .-HABBREVADD
.balign 16
HABBREVGET:
.type HABBREVGET, @function
push ebp
mov ebp, esp
sub esp, 48
push ebx
.Lt_00BF:
push 0
push -1
push 2
push offset Lt_00C1
push -1
push dword ptr [ebp+8]
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+8]
call fb_StrAssign
add esp, 20
cmp dword ptr [ebp+12], 0
jle .Lt_00C4
cmp dword ptr [ebp+12], 10
jg .Lt_00C6
push 0
push -1
push -1
mov eax, dword ptr [ebp+12]
dec eax
mov ebx, eax
add ebx, 48
mov eax, ebx
push eax
push 1
call fb_CHR
add esp, 8
push eax
push -1
push dword ptr [ebp+8]
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
lea eax, [ebp-36]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+8]
call fb_StrAssign
add esp, 20
jmp .Lt_00C5
.Lt_00C6:
cmp dword ptr [ebp+12], 33
jg .Lt_00C8
push 0
push -1
push -1
mov eax, dword ptr [ebp+12]
add eax, -11
mov ebx, eax
add ebx, 65
mov eax, ebx
push eax
push 1
call fb_CHR
add esp, 8
push eax
push -1
push dword ptr [ebp+8]
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
lea eax, [ebp-36]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+8]
call fb_StrAssign
add esp, 20
jmp .Lt_00C5
.Lt_00C8:
push 0
push -1
push -1
mov eax, dword ptr [ebp+12]
mov ecx, 33
cdq
idiv ecx
push eax
push 1
call fb_CHR
add esp, 8
push eax
push -1
push dword ptr [ebp+8]
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
lea eax, [ebp-36]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+8]
call fb_StrAssign
add esp, 20
mov ecx, 33
mov eax, dword ptr [ebp+12]
cdq
idiv ecx
mov eax, edx
mov dword ptr [ebp+12], eax
cmp dword ptr [ebp+12], 10
jg .Lt_00CD
push 0
push -1
push -1
mov eax, dword ptr [ebp+12]
dec eax
mov ebx, eax
add ebx, 48
mov eax, ebx
push eax
push 1
call fb_CHR
add esp, 8
push eax
push -1
push dword ptr [ebp+8]
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
lea eax, [ebp-48]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+8]
call fb_StrAssign
add esp, 20
jmp .Lt_00CC
.Lt_00CD:
cmp dword ptr [ebp+12], 33
jg .Lt_00CF
push 0
push -1
push -1
mov eax, dword ptr [ebp+12]
add eax, -11
mov ebx, eax
add ebx, 65
mov eax, ebx
push eax
push 1
call fb_CHR
add esp, 8
push eax
push -1
push dword ptr [ebp+8]
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
lea eax, [ebp-48]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+8]
call fb_StrAssign
add esp, 20
.Lt_00CF:
.Lt_00CC:
.Lt_00C5:
.Lt_00C4:
.Lt_00C3:
push 0
push -1
push 2
push offset Lt_00D1
push -1
push dword ptr [ebp+8]
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ebp-24]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+8]
call fb_StrAssign
add esp, 20
.Lt_00C0:
pop ebx
mov esp, ebp
pop ebp
ret
.size HABBREVGET, .-HABBREVGET
.balign 16
HADDUNDERSCORE:
.type HADDUNDERSCORE, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_014D:
cmp dword ptr [ENV+104], 1
jne .Lt_0150
mov dword ptr [ebp-4], 0
jmp .Lt_014F
.Lt_0150:
mov eax, dword ptr [ENV+232]
mov dword ptr [ebp-4], eax
.Lt_014F:
.Lt_014E:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size HADDUNDERSCORE, .-HADDUNDERSCORE
.balign 16
HDOCPPMANGLING:
.type HDOCPPMANGLING, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_0151:
mov eax, dword ptr [ebp+8]
movsx ebx, word ptr [eax+34]
cmp ebx, 4
jne .Lt_0154
mov dword ptr [ebp-4], -1
jmp .Lt_0152
.Lt_0154:
.Lt_0153:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+8]
and eax, 2080
test eax, eax
je .Lt_0156
mov dword ptr [ebp-4], 0
jmp .Lt_0152
.Lt_0156:
.Lt_0155:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+128]
lea eax, [SYMB+98352]
cmp dword ptr [ebx], eax
je .Lt_0158
mov dword ptr [ebp-4], -1
jmp .Lt_0152
.Lt_0158:
.Lt_0157:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 3
jne .Lt_015A
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 1024
test ebx, ebx
je .Lt_015C
mov dword ptr [ebp-4], -1
jmp .Lt_0152
.Lt_015C:
.Lt_015B:
.Lt_015A:
.Lt_0159:
mov dword ptr [ebp-4], 0
.Lt_0152:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HDOCPPMANGLING, .-HDOCPPMANGLING
.balign 16
HMANGLENAMESPACE:
.type HMANGLENAMESPACE, @function
push ebp
mov ebp, esp
sub esp, 28
push ebx
.Lt_015D:
cmp dword ptr [ebp+12], 0
jne .Lt_0161
jmp .Lt_015E
.Lt_0161:
.Lt_0160:
lea eax, [SYMB+98352]
cmp dword ptr [ebp+12], eax
jne .Lt_0163
jmp .Lt_015E
.Lt_0163:
.Lt_0162:
cmp dword ptr [ebp+16], 0
je .Lt_0165
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
push dword ptr [ebp+12]
mov eax, dword ptr [ebp+12]
push dword ptr [eax+24]
lea eax, [ebp-28]
push eax
call SYMBMANGLETYPE
add esp, 12
lea eax, [ebp-28]
push eax
call fb_StrDelete
add esp, 4
.Lt_0165:
.Lt_0164:
mov dword ptr [ebp-4], -1
.Lt_0166:
inc dword ptr [ebp-4]
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [ebp+12]
mov dword ptr [Lt_0299+eax*4], ebx
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+128]
mov ebx, dword ptr [eax]
mov dword ptr [ebp+12], ebx
.Lt_0168:
lea ebx, [SYMB+98352]
cmp dword ptr [ebp+12], ebx
jne .Lt_0166
.Lt_0167:
push 0
push -1
push 2
push offset Lt_0127
push -1
push dword ptr [ebp+8]
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
lea ebx, [ebp-16]
push ebx
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+8]
call fb_StrAssign
add esp, 20
cmp dword ptr [ebp+20], 0
je .Lt_016B
push 0
push -1
push 2
push offset Lt_0139
push -1
push dword ptr [ebp+8]
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
lea eax, [ebp-28]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+8]
call fb_StrAssign
add esp, 20
.Lt_016B:
.Lt_016A:
.Lt_016D:
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [Lt_0299+eax*4]
mov dword ptr [ebp+12], ebx
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HMANGLEUDTID
add esp, 8
dec dword ptr [ebp-4]
.Lt_016F:
cmp dword ptr [ebp-4], 0
jge .Lt_016D
.Lt_016E:
.Lt_015E:
pop ebx
mov esp, ebp
pop ebp
ret
.size HMANGLENAMESPACE, .-HMANGLENAMESPACE

.section .bss
.balign 4
	.lcomm	Lt_0299,256

.section .text
.balign 16
HMANGLEVARIABLE:
.type HMANGLEVARIABLE, @function
push ebp
mov ebp, esp
sub esp, 56
push ebx
.Lt_0170:
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+8]
movzx ebx, word ptr [eax+32]
test ebx, ebx
jle .Lt_0173
mov dword ptr [ebp-20], 0
jmp .Lt_0172
.Lt_0173:
push dword ptr [ebp+8]
call HDOCPPMANGLING
add esp, 4
mov dword ptr [ebp-20], eax
.Lt_0172:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 59
je .Lt_0175
cmp dword ptr [ENV+104], 2
jne .Lt_0177
push 0
push 2
push offset Lt_0178
push -1
lea ebx, [ebp-12]
push ebx
call fb_StrConcatAssign
add esp, 20
.Lt_0177:
.Lt_0176:
mov eax, dword ptr [ENV+108]
mov dword ptr [ebp-28], eax
cmp dword ptr [ebp-28], 0
je .Lt_017C
.Lt_017D:
cmp dword ptr [ebp-28], 1
jne .Lt_017B
.Lt_017C:
mov eax, dword ptr [ENV+104]
test eax, eax
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebx+4]
and ecx, 512
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
and eax, ecx
je .Lt_017F
push 0
push 7
push offset Lt_0180
push -1
lea ecx, [ebp-12]
push ecx
call fb_StrConcatAssign
add esp, 20
.Lt_017F:
.Lt_017E:
.Lt_017B:
.Lt_0179:
call HADDUNDERSCORE
test eax, eax
je .Lt_0182
push 0
push 2
push offset Lt_00D1
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_0182:
.Lt_0181:
cmp dword ptr [ebp-20], 0
je .Lt_0184
push 0
push 3
push offset Lt_0185
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+8]
and ecx, 256
je .Lt_0187
push 0
push 3
push offset Lt_0188
push -1
lea ecx, [ebp-12]
push ecx
call fb_StrConcatAssign
add esp, 20
jmp .Lt_0186
.Lt_0187:
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+8]
and ecx, 1024
je .Lt_0189
push 0
push 3
push offset Lt_018A
push -1
lea ecx, [ebp-12]
push ecx
call fb_StrConcatAssign
add esp, 20
.Lt_0189:
.Lt_0186:
.Lt_0184:
.Lt_0183:
jmp .Lt_0174
.Lt_0175:
cmp dword ptr [ENV+104], 2
jne .Lt_018C
push 0
push 2
push offset Lt_018D
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_018C:
.Lt_018B:
.Lt_0174:
cmp dword ptr [ebp-20], 0
je .Lt_018F
push 0
push 0
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+128]
push dword ptr [ecx]
lea ecx, [ebp-12]
push ecx
call HMANGLENAMESPACE
add esp, 16
.Lt_018F:
.Lt_018E:
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ecx+8]
and eax, 1280
je .Lt_0191
push 0
push 1
push offset Lt_0000
push -1
push offset Lt_029C
call fb_StrAssign
add esp, 20
jmp .Lt_0190
.Lt_0191:
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+8]
and ecx, 512
je .Lt_0192
push 0
push 0
mov ecx, dword ptr [ebp+8]
push dword ptr [ecx+16]
push -1
push offset Lt_029C
call fb_StrAssign
add esp, 20
jmp .Lt_0190
.Lt_0192:
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ecx+4]
and eax, 57
test eax, eax
setne al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-24], eax
mov eax, dword ptr [ebp-20]
or eax, dword ptr [ebp-24]
je .Lt_0194
mov eax, dword ptr [ebp+8]
movsx ecx, word ptr [eax+34]
test ecx, ecx
jne .Lt_0196
push 0
push 0
mov ecx, dword ptr [ebp+8]
push dword ptr [ecx+12]
push -1
push offset Lt_029C
call fb_StrAssign
add esp, 20
cmp dword ptr [ENV+104], 1
jne .Lt_0198
push 0
push 2
push offset Lt_00A8
push -1
push offset Lt_029C
call fb_StrConcatAssign
add esp, 20
.Lt_0198:
.Lt_0197:
jmp .Lt_0195
.Lt_0196:
push 0
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax+16]
push -1
push offset Lt_029C
call fb_StrAssign
add esp, 20
.Lt_0195:
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+4]
and ecx, 268435456
test ecx, ecx
je .Lt_019A
push 0
push -1
push 0
mov dword ptr [ebp-28], 0
lea ecx, [ebp-28]
push ecx
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ecx+24]
and eax, 511
push eax
call HMANGLEBUILTINTYPE
add esp, 8
push eax
push -1
push offset Lt_029C
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
lea eax, [ebp-40]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_029C
call fb_StrAssign
add esp, 20
cmp dword ptr [ENV+104], 1
jne .Lt_019E
push 0
push 2
push offset Lt_00A8
push -1
push offset Lt_029C
call fb_StrConcatAssign
add esp, 20
.Lt_019E:
.Lt_019D:
.Lt_019A:
.Lt_0199:
jmp .Lt_0193
.Lt_0194:
mov eax, dword ptr [ENV+104]
mov dword ptr [ebp-28], eax
cmp dword ptr [ebp-28], 1
jne .Lt_01A1
.Lt_01A2:
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+4]
and ecx, 2
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
push dword ptr [ebp+8]
mov ebx, ecx
call SYMBHASDTOR
add esp, 4
and ebx, eax
je .Lt_01A4
push 0
push 0
call SYMBUNIQUEID
push eax
push -1
push offset Lt_029C
call fb_StrAssign
add esp, 20
jmp .Lt_01A3
.Lt_01A4:
mov eax, dword ptr [ebp+8]
movsx ebx, word ptr [eax+34]
test ebx, ebx
jne .Lt_01A6
push 0
push 0
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+12]
push -1
push offset Lt_029C
call fb_StrAssign
add esp, 20
push 0
push 2
push offset Lt_00A8
push -1
push offset Lt_029C
call fb_StrConcatAssign
add esp, 20
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 268435456
test ebx, ebx
je .Lt_01A8
push 0
push -1
push 0
mov dword ptr [ebp-44], 0
lea ebx, [ebp-44]
push ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+24]
and eax, 511
push eax
call HMANGLEBUILTINTYPE
add esp, 8
push eax
push -1
push offset Lt_029C
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
lea eax, [ebp-56]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_029C
call fb_StrAssign
add esp, 20
push 0
push 2
push offset Lt_00A8
push -1
push offset Lt_029C
call fb_StrConcatAssign
add esp, 20
.Lt_01A8:
.Lt_01A7:
push 0
push -1
push -1
mov eax, dword ptr [ebp+8]
movzx ebx, word ptr [eax+32]
push ebx
call fb_UIntToStr
add esp, 4
push eax
push -1
push offset Lt_029C
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
lea eax, [ebp-40]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_029C
call fb_StrAssign
add esp, 20
jmp .Lt_01A5
.Lt_01A6:
push 0
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax+16]
push -1
push offset Lt_029C
call fb_StrAssign
add esp, 20
.Lt_01A5:
.Lt_01A3:
jmp .Lt_019F
.Lt_01A1:
cmp dword ptr [ebp-28], 2
jne .Lt_01AC
.Lt_01AD:
mov eax, dword ptr [ebp+8]
movsx ebx, word ptr [eax+34]
test ebx, ebx
jne .Lt_01AF
push 0
push 0
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+12]
push -1
push offset Lt_029C
call fb_StrAssign
add esp, 20
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 268435456
test eax, eax
je .Lt_01B1
push 0
push -1
push 0
mov dword ptr [ebp-32], 0
lea eax, [ebp-32]
push eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+24]
and ebx, 511
push ebx
call HMANGLEBUILTINTYPE
add esp, 8
push eax
push -1
push offset Lt_029C
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
lea eax, [ebp-44]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_029C
call fb_StrAssign
add esp, 20
.Lt_01B1:
.Lt_01B0:
push 0
push 2
push offset Lt_0007
push -1
push offset Lt_029C
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push dword ptr [Lt_029F]
call fb_IntToStr
add esp, 4
push eax
push -1
push offset Lt_029C
call fb_StrConcatAssign
add esp, 20
inc dword ptr [Lt_029F]
jmp .Lt_01AE
.Lt_01AF:
push 0
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax+16]
push -1
push offset Lt_029C
call fb_StrAssign
add esp, 20
.Lt_01AE:
jmp .Lt_019F
.Lt_01AC:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 2
test ebx, ebx
je .Lt_01B6
push 0
push 0
call SYMBUNIQUEID
push eax
push -1
push offset Lt_029C
call fb_StrAssign
add esp, 20
jmp .Lt_01B5
.Lt_01B6:
push 0
push 0
call dword ptr [IR+44]
push eax
push -1
push offset Lt_029C
call fb_StrAssign
add esp, 20
.Lt_01B5:
.Lt_01B4:
.Lt_019F:
.Lt_0193:
.Lt_0190:
push -1
push offset Lt_029C
call fb_StrLen
add esp, 8
test eax, eax
jle .Lt_01B8
cmp dword ptr [ebp-20], 0
je .Lt_01BA
push 0
push -1
push -1
push offset Lt_029C
call fb_StrLen
add esp, 8
push eax
call fb_IntToStr
add esp, 4
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_01BA:
.Lt_01B9:
push 0
push -1
push offset Lt_029C
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_01B8:
.Lt_01B7:
cmp dword ptr [ebp-20], 0
je .Lt_01BC
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+128]
lea eax, [SYMB+98352]
cmp dword ptr [ebx], eax
je .Lt_01BE
push 0
push 2
push offset Lt_0094
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_01BE:
.Lt_01BD:
.Lt_01BC:
.Lt_01BB:
lea eax, [ebp-12]
push eax
push dword ptr [ebp+8]
call SYMBSETMANGLEDID
add esp, 8
lea eax, [ebp-12]
push eax
call fb_StrDelete
add esp, 4
.Lt_0171:
pop ebx
mov esp, ebp
pop ebp
ret
.size HMANGLEVARIABLE, .-HMANGLEVARIABLE

.section .bss
.balign 4
	.lcomm	Lt_029C,12
.balign 4
	.lcomm	Lt_029F,4

.section .text
.balign 16
HGETPROCPARAMSTYPECODE:
.type HGETPROCPARAMSTYPECODE, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
.Lt_01BF:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+72]
mov dword ptr [ebp-4], ebx
cmp dword ptr [ebp-4], 0
je .Lt_01C2
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebx+4]
and eax, 2048
test eax, eax
setne al
shr eax, 1
sbb eax, eax
and eax, dword ptr [ebp+16]
je .Lt_01C4
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+160]
mov dword ptr [ebp-4], ebx
.Lt_01C4:
.Lt_01C3:
.Lt_01C2:
.Lt_01C1:
cmp dword ptr [ebp-4], 0
jne .Lt_01C6
push 0
push -1
push 2
push offset Lt_00FB
push -1
push dword ptr [ebp+8]
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
lea ebx, [ebp-16]
push ebx
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+8]
call fb_StrAssign
add esp, 20
jmp .Lt_01C0
.Lt_01C6:
.Lt_01C5:
.Lt_01C8:
push dword ptr [ebp-4]
push dword ptr [ebp+8]
call SYMBMANGLEPARAM
add esp, 8
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+160]
mov dword ptr [ebp-4], ebx
.Lt_01CA:
cmp dword ptr [ebp-4], 0
jne .Lt_01C8
.Lt_01C9:
.Lt_01C0:
pop ebx
mov esp, ebp
pop ebp
ret
.size HGETPROCPARAMSTYPECODE, .-HGETPROCPARAMSTYPECODE
.balign 16
HGETOPERATORNAME:
.type HGETOPERATORNAME, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_01CB:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+108]
mov eax, dword ptr [ebx+40]
mov dword ptr [ebp-8], eax
jmp .Lt_01CE
.Lt_01D0:
mov eax, offset Lt_01D1
mov dword ptr [ebp-4], eax
jmp .Lt_01CD
.Lt_01D2:
mov eax, offset Lt_01D3
mov dword ptr [ebp-4], eax
jmp .Lt_01CD
.Lt_01D4:
mov eax, offset Lt_01D5
mov dword ptr [ebp-4], eax
jmp .Lt_01CD
.Lt_01D6:
mov eax, offset Lt_01D7
mov dword ptr [ebp-4], eax
jmp .Lt_01CD
.Lt_01D8:
mov eax, offset Lt_01D9
mov dword ptr [ebp-4], eax
jmp .Lt_01CD
.Lt_01DA:
mov eax, offset Lt_01DB
mov dword ptr [ebp-4], eax
jmp .Lt_01CD
.Lt_01DC:
mov eax, offset Lt_01DD
mov dword ptr [ebp-4], eax
jmp .Lt_01CD
.Lt_01DE:
mov eax, offset Lt_01DF
mov dword ptr [ebp-4], eax
jmp .Lt_01CD
.Lt_01E0:
mov eax, offset Lt_01E1
mov dword ptr [ebp-4], eax
jmp .Lt_01CD
.Lt_01E2:
mov eax, offset Lt_01E3
mov dword ptr [ebp-4], eax
jmp .Lt_01CD
.Lt_01E4:
mov eax, offset Lt_01E5
mov dword ptr [ebp-4], eax
jmp .Lt_01CD
.Lt_01E6:
mov eax, offset Lt_01E7
mov dword ptr [ebp-4], eax
jmp .Lt_01CD
.Lt_01E8:
mov eax, offset Lt_01E9
mov dword ptr [ebp-4], eax
jmp .Lt_01CD
.Lt_01EA:
mov eax, offset Lt_01EB
mov dword ptr [ebp-4], eax
jmp .Lt_01CD
.Lt_01EC:
mov eax, offset Lt_01ED
mov dword ptr [ebp-4], eax
jmp .Lt_01CD
.Lt_01EE:
mov eax, offset Lt_01EF
mov dword ptr [ebp-4], eax
jmp .Lt_01CD
.Lt_01F0:
mov eax, offset Lt_01F1
mov dword ptr [ebp-4], eax
jmp .Lt_01CD
.Lt_01F2:
mov eax, offset Lt_01F3
mov dword ptr [ebp-4], eax
jmp .Lt_01CD
.Lt_01F4:
mov eax, offset Lt_01F5
mov dword ptr [ebp-4], eax
jmp .Lt_01CD
.Lt_01F6:
mov eax, offset Lt_01F7
mov dword ptr [ebp-4], eax
jmp .Lt_01CD
.Lt_01F8:
mov eax, offset Lt_01F9
mov dword ptr [ebp-4], eax
jmp .Lt_01CD
.Lt_01FA:
mov eax, offset Lt_01FB
mov dword ptr [ebp-4], eax
jmp .Lt_01CD
.Lt_01FC:
mov eax, offset Lt_01FD
mov dword ptr [ebp-4], eax
jmp .Lt_01CD
.Lt_01FE:
mov eax, offset Lt_01FF
mov dword ptr [ebp-4], eax
jmp .Lt_01CD
.Lt_0200:
mov eax, offset Lt_0201
mov dword ptr [ebp-4], eax
jmp .Lt_01CD
.Lt_0202:
mov eax, offset Lt_0203
mov dword ptr [ebp-4], eax
jmp .Lt_01CD
.Lt_0204:
mov eax, offset Lt_0205
mov dword ptr [ebp-4], eax
jmp .Lt_01CD
.Lt_0206:
mov eax, offset Lt_0207
mov dword ptr [ebp-4], eax
jmp .Lt_01CD
.Lt_0208:
mov eax, offset Lt_0209
mov dword ptr [ebp-4], eax
jmp .Lt_01CD
.Lt_020A:
mov eax, offset Lt_020B
mov dword ptr [ebp-4], eax
jmp .Lt_01CD
.Lt_020C:
mov eax, offset Lt_020D
mov dword ptr [ebp-4], eax
jmp .Lt_01CD
.Lt_020E:
mov eax, offset Lt_020F
mov dword ptr [ebp-4], eax
jmp .Lt_01CD
.Lt_0210:
mov eax, offset Lt_0211
mov dword ptr [ebp-4], eax
jmp .Lt_01CD
.Lt_0212:
mov eax, offset Lt_0213
mov dword ptr [ebp-4], eax
jmp .Lt_01CD
.Lt_0214:
mov eax, offset Lt_0215
mov dword ptr [ebp-4], eax
jmp .Lt_01CD
.Lt_0216:
mov eax, offset Lt_0217
mov dword ptr [ebp-4], eax
jmp .Lt_01CD
.Lt_0218:
mov eax, offset Lt_0219
mov dword ptr [ebp-4], eax
jmp .Lt_01CD
.Lt_021A:
mov eax, offset Lt_021B
mov dword ptr [ebp-4], eax
jmp .Lt_01CD
.Lt_021C:
mov eax, offset Lt_021D
mov dword ptr [ebp-4], eax
jmp .Lt_01CD
.Lt_021E:
mov eax, offset Lt_021F
mov dword ptr [ebp-4], eax
jmp .Lt_01CD
.Lt_0220:
mov eax, offset Lt_0221
mov dword ptr [ebp-4], eax
jmp .Lt_01CD
.Lt_0222:
mov eax, offset Lt_0223
mov dword ptr [ebp-4], eax
jmp .Lt_01CD
.Lt_0224:
mov eax, offset Lt_0225
mov dword ptr [ebp-4], eax
jmp .Lt_01CD
.Lt_0226:
mov eax, offset Lt_0227
mov dword ptr [ebp-4], eax
jmp .Lt_01CD
.Lt_0228:
mov eax, offset Lt_0229
mov dword ptr [ebp-4], eax
jmp .Lt_01CD
.Lt_022A:
mov eax, offset Lt_022B
mov dword ptr [ebp-4], eax
jmp .Lt_01CD
.Lt_022C:
mov eax, offset Lt_022D
mov dword ptr [ebp-4], eax
jmp .Lt_01CD
.Lt_022E:
mov eax, offset Lt_022F
mov dword ptr [ebp-4], eax
jmp .Lt_01CD
.Lt_0230:
mov eax, offset Lt_0231
mov dword ptr [ebp-4], eax
jmp .Lt_01CD
.Lt_0232:
mov eax, offset Lt_0233
mov dword ptr [ebp-4], eax
jmp .Lt_01CD
.Lt_0234:
mov eax, offset Lt_0235
mov dword ptr [ebp-4], eax
jmp .Lt_01CD
.Lt_0236:
mov eax, offset Lt_0237
mov dword ptr [ebp-4], eax
jmp .Lt_01CD
.Lt_0238:
mov eax, offset Lt_0239
mov dword ptr [ebp-4], eax
jmp .Lt_01CD
.Lt_023A:
mov eax, offset Lt_023B
mov dword ptr [ebp-4], eax
jmp .Lt_01CD
.Lt_023C:
mov eax, offset Lt_023D
mov dword ptr [ebp-4], eax
jmp .Lt_01CD
.Lt_023E:
mov eax, offset Lt_023F
mov dword ptr [ebp-4], eax
jmp .Lt_01CD
.Lt_0240:
mov eax, offset Lt_0241
mov dword ptr [ebp-4], eax
jmp .Lt_01CD
.Lt_0242:
mov eax, offset Lt_0243
mov dword ptr [ebp-4], eax
jmp .Lt_01CD
.Lt_0244:
mov eax, offset Lt_0245
mov dword ptr [ebp-4], eax
jmp .Lt_01CD
.Lt_0246:
mov eax, offset Lt_0247
mov dword ptr [ebp-4], eax
jmp .Lt_01CD
.Lt_0248:
mov eax, offset Lt_0249
mov dword ptr [ebp-4], eax
jmp .Lt_01CD
.Lt_024A:
mov eax, offset Lt_024B
mov dword ptr [ebp-4], eax
jmp .Lt_01CD
.Lt_024C:
mov eax, offset Lt_024D
mov dword ptr [ebp-4], eax
jmp .Lt_01CD
.Lt_024E:
mov eax, offset Lt_024F
mov dword ptr [ebp-4], eax
jmp .Lt_01CD
.Lt_0250:
mov eax, offset Lt_0251
mov dword ptr [ebp-4], eax
jmp .Lt_01CD
.Lt_0252:
mov eax, offset Lt_0253
mov dword ptr [ebp-4], eax
jmp .Lt_01CD
.Lt_0254:
mov eax, dword ptr [ebp+8]
movsx ebx, word ptr [eax+64]
cmp ebx, 2
jne .Lt_0256
mov ebx, offset Lt_0257
mov dword ptr [ebp-4], ebx
jmp .Lt_0255
.Lt_0256:
mov ebx, offset Lt_0258
mov dword ptr [ebp-4], ebx
.Lt_0255:
jmp .Lt_01CD
.Lt_0259:
mov ebx, dword ptr [ebp+8]
movsx eax, word ptr [ebx+64]
cmp eax, 2
jne .Lt_025B
mov eax, offset Lt_025C
mov dword ptr [ebp-4], eax
jmp .Lt_025A
.Lt_025B:
mov eax, offset Lt_025D
mov dword ptr [ebp-4], eax
.Lt_025A:
jmp .Lt_01CD
.Lt_025E:
mov eax, dword ptr [ebp+8]
movsx ebx, word ptr [eax+64]
cmp ebx, 3
jne .Lt_0260
mov ebx, offset Lt_0261
mov dword ptr [ebp-4], ebx
jmp .Lt_025F
.Lt_0260:
mov ebx, offset Lt_0262
mov dword ptr [ebp-4], ebx
.Lt_025F:
jmp .Lt_01CD
.Lt_01CE:
cmp dword ptr [ebp-8], 81
ja .Lt_01CD
mov ebx, dword ptr [ebp-8]
jmp dword ptr [.LT_0263+ebx*4]
.LT_0263:
.int .Lt_01D0
.int .Lt_01D4
.int .Lt_01D8
.int .Lt_01DC
.int .Lt_01E0
.int .Lt_01E4
.int .Lt_01E8
.int .Lt_01EC
.int .Lt_01F0
.int .Lt_01F4
.int .Lt_01F8
.int .Lt_01FC
.int .Lt_0200
.int .Lt_0204
.int .Lt_0208
.int .Lt_020C
.int .Lt_0210
.int .Lt_0214
.int .Lt_0244
.int .Lt_0246
.int .Lt_0248
.int .Lt_024A
.int .Lt_0252
.int .Lt_0250
.int .Lt_0254
.int .Lt_0259
.int .Lt_025E
.int .Lt_01CD
.int .Lt_01D2
.int .Lt_01D6
.int .Lt_01DA
.int .Lt_01DE
.int .Lt_01E2
.int .Lt_01E6
.int .Lt_01EA
.int .Lt_01EE
.int .Lt_01F2
.int .Lt_01F6
.int .Lt_01FA
.int .Lt_01FE
.int .Lt_0202
.int .Lt_0206
.int .Lt_020A
.int .Lt_020E
.int .Lt_0212
.int .Lt_0216
.int .Lt_0218
.int .Lt_021A
.int .Lt_021C
.int .Lt_021E
.int .Lt_0220
.int .Lt_01CD
.int .Lt_0222
.int .Lt_0226
.int .Lt_0224
.int .Lt_01CD
.int .Lt_0228
.int .Lt_0230
.int .Lt_0238
.int .Lt_023A
.int .Lt_023C
.int .Lt_023E
.int .Lt_0240
.int .Lt_0242
.int .Lt_01CD
.int .Lt_01CD
.int .Lt_01CD
.int .Lt_01CD
.int .Lt_0236
.int .Lt_0234
.int .Lt_0232
.int .Lt_022A
.int .Lt_022C
.int .Lt_022E
.int .Lt_01CD
.int .Lt_01CD
.int .Lt_024C
.int .Lt_024E
.int .Lt_0244
.int .Lt_0246
.int .Lt_0248
.int .Lt_024A
.Lt_01CD:
.Lt_01CC:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HGETOPERATORNAME, .-HGETOPERATORNAME
.balign 16
HMANGLEPROC:
.type HMANGLEPROC, @function
push ebp
mov ebp, esp
sub esp, 52
push ebx
.Lt_0264:
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
push dword ptr [ebp+8]
call HDOCPPMANGLING
add esp, 4
mov dword ptr [ebp-20], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+80]
cmp ebx, 1
sete bl
shr ebx, 1
sbb ebx, ebx
call FBGETCPUFAMILY
test eax, eax
sete al
shr eax, 1
sbb eax, eax
and ebx, eax
mov eax, dword ptr [ENV+104]
cmp eax, 1
setne al
shr eax, 1
sbb eax, eax
and ebx, eax
mov dword ptr [ebp-24], ebx
cmp dword ptr [ENV+104], 2
jne .Lt_0267
push 0
push 2
push offset Lt_0178
push -1
lea ebx, [ebp-12]
push ebx
call fb_StrConcatAssign
add esp, 20
cmp dword ptr [ebp-24], 0
je .Lt_0269
push 0
push 2
push offset Lt_026A
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_0269:
.Lt_0268:
.Lt_0267:
.Lt_0266:
call HADDUNDERSCORE
test eax, eax
je .Lt_026C
push 0
push 2
push offset Lt_00D1
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_026C:
.Lt_026B:
cmp dword ptr [ebp-20], 0
je .Lt_026E
push 0
push 3
push offset Lt_0185
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_026E:
.Lt_026D:
cmp dword ptr [ebp-20], 0
je .Lt_0270
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 1048576
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
push ebx
push -1
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+128]
push dword ptr [eax]
lea eax, [ebp-12]
push eax
call HMANGLENAMESPACE
add esp, 16
.Lt_0270:
.Lt_026F:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+8]
and ebx, 512
test ebx, ebx
je .Lt_0272
cmp dword ptr [ebp-20], 0
je .Lt_0274
push 0
push -1
push -1
push 0
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+16]
call fb_StrLen
add esp, 8
push eax
call fb_IntToStr
add esp, 4
push eax
push -1
lea eax, [ebp-12]
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
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
.Lt_0274:
.Lt_0273:
push 0
push -1
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax+16]
push -1
lea eax, [ebp-12]
push eax
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
lea eax, [ebp-40]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
jmp .Lt_0271
.Lt_0272:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 16384
test ebx, ebx
je .Lt_0277
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+108]
cmp dword ptr [eax+40], 27
jne .Lt_0279
push 0
push 3
push offset Lt_027A
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
mov eax, dword ptr [ebp+8]
push dword ptr [eax+28]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+24]
lea eax, [ebp-12]
push eax
call SYMBMANGLETYPE
add esp, 12
jmp .Lt_0278
.Lt_0279:
push 0
push -1
push 0
push dword ptr [ebp+8]
call HGETOPERATORNAME
add esp, 4
push eax
push -1
lea eax, [ebp-12]
push eax
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
lea eax, [ebp-40]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
.Lt_0278:
jmp .Lt_0271
.Lt_0277:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 4096
test ebx, ebx
je .Lt_027C
push 0
push 3
push offset Lt_027D
push -1
lea ebx, [ebp-12]
push ebx
call fb_StrConcatAssign
add esp, 20
jmp .Lt_0271
.Lt_027C:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 8192
test ebx, ebx
je .Lt_027E
push 0
push 3
push offset Lt_027F
push -1
lea ebx, [ebp-12]
push ebx
call fb_StrConcatAssign
add esp, 20
jmp .Lt_0271
.Lt_027E:
mov eax, dword ptr [ebp+8]
movsx ebx, word ptr [eax+34]
test ebx, ebx
jne .Lt_0281
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+12]
mov dword ptr [ebp-28], eax
jmp .Lt_0280
.Lt_0281:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+16]
mov dword ptr [ebp-28], ebx
.Lt_0280:
cmp dword ptr [ebp-20], 0
je .Lt_0283
push 0
push dword ptr [ebp-28]
call fb_StrLen
add esp, 8
mov dword ptr [ebp-16], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 32768
test ebx, ebx
je .Lt_0285
add dword ptr [ebp-16], 7
.Lt_0285:
.Lt_0284:
push 0
push -1
push dword ptr [ebp-16]
call fb_IntToStr
add esp, 4
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_0283:
.Lt_0282:
push 0
push -1
push 0
push dword ptr [ebp-28]
push -1
lea eax, [ebp-12]
push eax
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
lea eax, [ebp-40]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 32768
test ebx, ebx
je .Lt_0288
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+24]
and eax, 511
test eax, eax
jne .Lt_028A
push 0
push 8
push offset Lt_028B
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_0289
.Lt_028A:
push 0
push 8
push offset Lt_028C
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_0289:
.Lt_0288:
.Lt_0287:
.Lt_0271:
cmp dword ptr [ebp-20], 0
je .Lt_028E
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+128]
lea eax, [SYMB+98352]
cmp dword ptr [ebx], eax
je .Lt_0290
push 0
push 2
push offset Lt_0094
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_0290:
.Lt_028F:
push -1
push dword ptr [ebp+8]
lea eax, [ebp-12]
push eax
call HGETPROCPARAMSTYPECODE
add esp, 12
.Lt_028E:
.Lt_028D:
cmp dword ptr [ebp-24], 0
je .Lt_0292
push 0
push 2
push offset Lt_0178
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push dword ptr [ebp+8]
call SYMBCALCPROCPARAMSLEN
add esp, 4
push edx
push eax
call fb_LongintToStr
add esp, 8
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
cmp dword ptr [ENV+104], 2
jne .Lt_0294
push 0
push 2
push offset Lt_026A
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_0294:
.Lt_0293:
.Lt_0292:
.Lt_0291:
lea eax, [ebp-12]
push eax
push dword ptr [ebp+8]
call SYMBSETMANGLEDID
add esp, 8
lea eax, [ebp-12]
push eax
call fb_StrDelete
add esp, 4
.Lt_0265:
pop ebx
mov esp, ebp
pop ebp
ret
.size HMANGLEPROC, .-HMANGLEPROC
	#fbc-1.01.0/src/compiler/symb-mangling.bas' compilation took 0.03133296268060803 secs

.section .rodata
.balign 4
Lt_0000:	.ascii	"\0"
.balign 4
Lt_0007:	.ascii	".\0"

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
.balign 4
	.lcomm	CTX,92

.section .rodata
.balign 4
Lt_005E:	.ascii	"tmp$\0"
.balign 4
Lt_0060:	.ascii	"Lt_\0"
.balign 4
Lt_0066:	.ascii	"label$\0"
.balign 4
Lt_0068:	.ascii	".Lt_\0"
.balign 4
Lt_006C:	.ascii	"LP_\0"
.balign 4
Lt_0092:	.ascii	"I\0"
.balign 4
Lt_0094:	.ascii	"E\0"
.balign 4
Lt_00A8:	.ascii	"$\0"
.balign 4
Lt_00C1:	.ascii	"S\0"
.balign 4
Lt_00D1:	.ascii	"_\0"
.balign 4
Lt_00D7:	.ascii	"8FBSTRING\0"
.balign 4
Lt_00DF:	.ascii	"l\0"
.balign 4
Lt_00E2:	.ascii	"m\0"
.balign 4
Lt_00E6:	.ascii	"u7INTEGER\0"
.balign 4
Lt_00E9:	.ascii	"u8UINTEGER\0"
.balign 4
Lt_00ED:	.ascii	"i\0"
.balign 4
Lt_00F0:	.ascii	"j\0"
.balign 4
Lt_00FB:	.ascii	"v\0"
.balign 4
Lt_00FC:	.ascii	"a\0"
.balign 4
Lt_00FD:	.ascii	"h\0"
.balign 4
Lt_00FE:	.ascii	"c\0"
.balign 4
Lt_00FF:	.ascii	"s\0"
.balign 4
Lt_0100:	.ascii	"t\0"
.balign 4
Lt_0101:	.ascii	"w\0"
.balign 4
Lt_0102:	.ascii	"x\0"
.balign 4
Lt_0103:	.ascii	"y\0"
.balign 4
Lt_0104:	.ascii	"f\0"
.balign 4
Lt_0105:	.ascii	"d\0"
.balign 4
Lt_0113:	.ascii	"RK\0"
.balign 4
Lt_0115:	.ascii	"R\0"
.balign 4
Lt_011B:	.ascii	"PK\0"
.balign 4
Lt_011D:	.ascii	"P\0"
.balign 4
Lt_0127:	.ascii	"N\0"
.balign 4
Lt_0132:	.ascii	"F\0"
.balign 4
Lt_0139:	.ascii	"K\0"
.balign 4
Lt_014A:	.ascii	"z\0"
.balign 4
Lt_0178:	.ascii	"@\0"
.balign 4
Lt_0180:	.ascii	"__imp_\0"
.balign 4
Lt_0185:	.ascii	"_Z\0"
.balign 4
Lt_0188:	.ascii	"TS\0"
.balign 4
Lt_018A:	.ascii	"TV\0"
.balign 4
Lt_018D:	.ascii	"%\0"
.balign 4
Lt_01D1:	.ascii	"aS\0"
.balign 4
Lt_01D3:	.ascii	"pl\0"
.balign 4
Lt_01D5:	.ascii	"pL\0"
.balign 4
Lt_01D7:	.ascii	"mi\0"
.balign 4
Lt_01D9:	.ascii	"mI\0"
.balign 4
Lt_01DB:	.ascii	"ml\0"
.balign 4
Lt_01DD:	.ascii	"mL\0"
.balign 4
Lt_01DF:	.ascii	"dv\0"
.balign 4
Lt_01E1:	.ascii	"dV\0"
.balign 4
Lt_01E3:	.ascii	"v24idiv\0"
.balign 4
Lt_01E5:	.ascii	"v28selfidiv\0"
.balign 4
Lt_01E7:	.ascii	"rm\0"
.balign 4
Lt_01E9:	.ascii	"rM\0"
.balign 4
Lt_01EB:	.ascii	"an\0"
.balign 4
Lt_01ED:	.ascii	"aN\0"
.balign 4
Lt_01EF:	.ascii	"or\0"
.balign 4
Lt_01F1:	.ascii	"oR\0"
.balign 4
Lt_01F3:	.ascii	"aa\0"
.balign 4
Lt_01F5:	.ascii	"aA\0"
.balign 4
Lt_01F7:	.ascii	"oo\0"
.balign 4
Lt_01F9:	.ascii	"oO\0"
.balign 4
Lt_01FB:	.ascii	"eo\0"
.balign 4
Lt_01FD:	.ascii	"eO\0"
.balign 4
Lt_01FF:	.ascii	"v23eqv\0"
.balign 4
Lt_0201:	.ascii	"v27selfeqv\0"
.balign 4
Lt_0203:	.ascii	"v23imp\0"
.balign 4
Lt_0205:	.ascii	"v27selfimp\0"
.balign 4
Lt_0207:	.ascii	"ls\0"
.balign 4
Lt_0209:	.ascii	"lS\0"
.balign 4
Lt_020B:	.ascii	"rs\0"
.balign 4
Lt_020D:	.ascii	"rS\0"
.balign 4
Lt_020F:	.ascii	"v23pow\0"
.balign 4
Lt_0211:	.ascii	"v27selfpow\0"
.balign 4
Lt_0213:	.ascii	"v23cat\0"
.balign 4
Lt_0215:	.ascii	"v27selfcat\0"
.balign 4
Lt_0217:	.ascii	"eq\0"
.balign 4
Lt_0219:	.ascii	"gt\0"
.balign 4
Lt_021B:	.ascii	"lt\0"
.balign 4
Lt_021D:	.ascii	"ne\0"
.balign 4
Lt_021F:	.ascii	"ge\0"
.balign 4
Lt_0221:	.ascii	"le\0"
.balign 4
Lt_0223:	.ascii	"co\0"
.balign 4
Lt_0225:	.ascii	"ng\0"
.balign 4
Lt_0227:	.ascii	"ps\0"
.balign 4
Lt_0229:	.ascii	"v13abs\0"
.balign 4
Lt_022B:	.ascii	"v13fix\0"
.balign 4
Lt_022D:	.ascii	"v14frac\0"
.balign 4
Lt_022F:	.ascii	"v13len\0"
.balign 4
Lt_0231:	.ascii	"v13sgn\0"
.balign 4
Lt_0233:	.ascii	"v13int\0"
.balign 4
Lt_0235:	.ascii	"v13exp\0"
.balign 4
Lt_0237:	.ascii	"v13log\0"
.balign 4
Lt_0239:	.ascii	"v13sin\0"
.balign 4
Lt_023B:	.ascii	"v14asin\0"
.balign 4
Lt_023D:	.ascii	"v13cos\0"
.balign 4
Lt_023F:	.ascii	"v14acos\0"
.balign 4
Lt_0241:	.ascii	"v13tan\0"
.balign 4
Lt_0243:	.ascii	"v13atn\0"
.balign 4
Lt_0245:	.ascii	"nw\0"
.balign 4
Lt_0247:	.ascii	"na\0"
.balign 4
Lt_0249:	.ascii	"dl\0"
.balign 4
Lt_024B:	.ascii	"da\0"
.balign 4
Lt_024D:	.ascii	"de\0"
.balign 4
Lt_024F:	.ascii	"pt\0"
.balign 4
Lt_0251:	.ascii	"ix\0"
.balign 4
Lt_0253:	.ascii	"ad\0"
.balign 4
Lt_0257:	.ascii	"v13for\0"
.balign 4
Lt_0258:	.ascii	"v03for\0"
.balign 4
Lt_025C:	.ascii	"v14step\0"
.balign 4
Lt_025D:	.ascii	"v04step\0"
.balign 4
Lt_0261:	.ascii	"v24next\0"
.balign 4
Lt_0262:	.ascii	"v14next\0"
.balign 4
Lt_026A:	.ascii	"\"\0"
.balign 4
Lt_027A:	.ascii	"cv\0"
.balign 4
Lt_027D:	.ascii	"C1\0"
.balign 4
Lt_027F:	.ascii	"D1\0"
.balign 4
Lt_028B:	.ascii	"__set__\0"
.balign 4
Lt_028C:	.ascii	"__get__\0"

.section .ctors, "aw", @progbits
.int fb_ctor__symbzmangling
