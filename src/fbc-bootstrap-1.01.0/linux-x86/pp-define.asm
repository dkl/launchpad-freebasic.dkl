	.intel_syntax noprefix

	#FreeBASIC-1.01.0-source/src/compiler/pp-define.bas' compilation started at 16:30:07 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl PPDEFINEINIT
PPDEFINEINIT:
.type PPDEFINEINIT, @function
.Lt_0060:
push 6
push 384
push 8
lea eax, [PP+164]
push eax
call LISTINIT
add esp, 16
.Lt_0061:
ret
.size PPDEFINEINIT, .-PPDEFINEINIT
.balign 16

.globl PPDEFINEEND
PPDEFINEEND:
.type PPDEFINEEND, @function
.Lt_0062:
lea eax, [PP+164]
push eax
call LISTEND
add esp, 4
.Lt_0063:
ret
.size PPDEFINEEND, .-PPDEFINEEND
.balign 16

.globl PPDEFINELOAD
PPDEFINELOAD:
.type PPDEFINELOAD, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_0155:
mov eax, dword ptr [ebp+12]
cmp dword ptr [ebp+8], eax
jne .Lt_0158
push 0
push 0
push 88
call ERRREPORT
add esp, 12
push 0
push 62
push 0
push -1
call HSKIPUNTIL
add esp, 16
mov dword ptr [ebp-4], -1
jmp .Lt_0156
.Lt_0158:
.Lt_0157:
cmp dword ptr [ENV+516], 0
jne .Lt_015A
push dword ptr [ebp+8]
call HLOADDEFINE
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_0159
.Lt_015A:
push dword ptr [ebp+8]
call HLOADDEFINEW
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_0159:
mov eax, dword ptr [LEX+839664]
cmp dword ptr [eax+16568], 0
jle .Lt_015C
mov eax, dword ptr [LEX+839664]
cmp dword ptr [eax+16560], 0
jne .Lt_015E
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [ebp+8]
mov dword ptr [eax+16560], ebx
.Lt_015E:
.Lt_015D:
.Lt_015C:
.Lt_015B:
mov ebx, dword ptr [LEX+839664]
mov dword ptr [ebx+16540], 4294967295
.Lt_0156:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size PPDEFINELOAD, .-PPDEFINELOAD
.balign 16

.globl PPDEFINE
PPDEFINE:
.type PPDEFINE, @function
push ebp
mov ebp, esp
sub esp, 44
push ebx
.Lt_01CD:
push 38
lea eax, [ebp-36]
push eax
call CIDENTIFIER
add esp, 8
mov dword ptr [ebp-32], eax
mov dword ptr [ebp-12], 62
cmp dword ptr [ebp+8], 0
je .Lt_01D0
and dword ptr [ebp-12], -5
.Lt_01D0:
.Lt_01CF:
push dword ptr [ebp-12]
push offset Lt_01FB
call LEXEATTOKEN
add esp, 8
push offset Lt_01FB
call HISVALIDSYMBOLNAME
add esp, 4
test eax, eax
jne .Lt_01D2
push 0
push 0
push 14
call ERRREPORT
add esp, 12
jmp .Lt_01CE
.Lt_01D2:
.Lt_01D1:
push dword ptr [ebp-12]
call LEXGETTOKEN
add esp, 4
cmp eax, 46
jne .Lt_01D4
push 0
push 0
push 89
call ERRREPORT
add esp, 12
.Lt_01D4:
.Lt_01D3:
cmp dword ptr [ebp-32], 0
je .Lt_01D6
mov eax, dword ptr [ebp-32]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-28], ebx
mov ebx, dword ptr [ebp-28]
mov eax, dword ptr [ebx]
cmp eax, 5
sete al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_01D8
push 0
push 1
push 0
push offset Lt_01FB
push 4
call ERRREPORTEX
add esp, 20
push 0
push 0
call SYMBUNIQUELABEL
push eax
push 129
push offset Lt_01FB
call fb_StrAssign
add esp, 20
.Lt_01D8:
.Lt_01D7:
jmp .Lt_01D5
.Lt_01D6:
mov dword ptr [ebp-28], 0
.Lt_01D5:
mov dword ptr [ebp-4], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-16], 0
push dword ptr [ebp-12]
call LEXGETTOKEN
add esp, 4
cmp eax, 40
jne .Lt_01DA
push 34
call LEXSKIPTOKEN
add esp, 4
push 34
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_01DC
mov dword ptr [ebp-24], 0
.Lt_01DD:
push 0
call LEXGETCLASS
add esp, 4
mov dword ptr [ebp-44], eax
jmp .Lt_01E1
.Lt_01E3:
call LEXGETTEXT
push eax
push dword ptr [ebp-24]
call SYMBADDDEFINEPARAM
add esp, 8
mov dword ptr [ebp-24], eax
jmp .Lt_01E0
.Lt_01E4:
push 0
push 0
push 14
call ERRREPORT
add esp, 12
call SYMBUNIQUELABEL
push eax
push dword ptr [ebp-24]
call SYMBADDDEFINEPARAM
add esp, 8
mov dword ptr [ebp-24], eax
jmp .Lt_01E0
.Lt_01E1:
cmp dword ptr [ebp-44], 2
ja .Lt_01E4
mov eax, dword ptr [ebp-44]
jmp dword ptr [.LT_01E5+eax*4]
.LT_01E5:
.int .Lt_01E3
.int .Lt_01E3
.int .Lt_01E3
.Lt_01E0:
cmp dword ptr [ebp-24], 0
jne .Lt_01E7
push 0
push 0
push 4
call ERRREPORT
add esp, 12
.Lt_01E7:
.Lt_01E6:
push 34
call LEXSKIPTOKEN
add esp, 4
inc dword ptr [ebp-4]
cmp dword ptr [ebp-4], 32
jl .Lt_01E9
push 0
push 0
push 78
call ERRREPORT
add esp, 12
push 0
push 0
push -1
push 41
call HSKIPUNTIL
add esp, 16
jmp .Lt_01CE
.Lt_01E9:
.Lt_01E8:
cmp dword ptr [ebp-20], 0
jne .Lt_01EB
mov eax, dword ptr [ebp-24]
mov dword ptr [ebp-20], eax
.Lt_01EB:
.Lt_01EA:
push 34
call LEXGETTOKEN
add esp, 4
cmp eax, 44
je .Lt_01ED
jmp .Lt_01DE
.Lt_01ED:
.Lt_01EC:
push 34
call LEXSKIPTOKEN
add esp, 4
.Lt_01DF:
jmp .Lt_01DD
.Lt_01DE:
call HMATCHPARAMELLIPSIS
mov dword ptr [ebp-16], eax
jmp .Lt_01DB
.Lt_01DC:
mov dword ptr [ebp-8], -1
.Lt_01DB:
push 62
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_01EF
push 0
push 0
push 7
call ERRREPORT
add esp, 12
push 0
push 62
push -1
push 41
call HSKIPUNTIL
add esp, 16
jmp .Lt_01EE
.Lt_01EF:
push 58
call LEXSKIPTOKEN
add esp, 4
.Lt_01EE:
jmp .Lt_01D9
.Lt_01DA:
cmp dword ptr [ebp+8], 0
jne .Lt_01F1
push 62
call LEXGETTOKEN
add esp, 4
cmp eax, 32
jne .Lt_01F3
push 58
call LEXSKIPTOKEN
add esp, 4
.Lt_01F3:
.Lt_01F2:
.Lt_01F1:
.Lt_01F0:
.Lt_01D9:
cmp dword ptr [ebp-4], 0
jne .Lt_01F5
push dword ptr [ebp+8]
push dword ptr [ebp-8]
push offset Lt_01FB
push dword ptr [ebp-28]
call HREADDEFINETEXT
add esp, 16
jmp .Lt_01CE
.Lt_01F5:
.Lt_01F4:
cmp dword ptr [ebp-28], 0
je .Lt_01F7
push 0
push 1
push 0
push offset Lt_01FB
push 4
call ERRREPORTEX
add esp, 20
jmp .Lt_01F6
.Lt_01F7:
push dword ptr [ebp+8]
push dword ptr [ebp-20]
push dword ptr [ebp-4]
call HREADMACROTEXT
add esp, 12
mov dword ptr [ebp-40], eax
cmp dword ptr [ebp-16], 0
je .Lt_01F8
mov dword ptr [ebp-44], 4
jmp .Lt_01FA
.Lt_01F8:
mov dword ptr [ebp-44], 0
.Lt_01FA:
push dword ptr [ebp-44]
push dword ptr [ebp-20]
push dword ptr [ebp-4]
push dword ptr [ebp-40]
push offset Lt_01FB
call SYMBADDDEFINEMACRO
add esp, 20
.Lt_01F6:
.Lt_01CE:
pop ebx
mov esp, ebp
pop ebp
ret
.size PPDEFINE, .-PPDEFINE

.section .bss
.balign 4
	.lcomm	Lt_01FB,129

.section .text
.balign 16
fb_ctor__ppzdefine:
.type fb_ctor__ppzdefine, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__ppzdefine, .-fb_ctor__ppzdefine
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
HREPORTMACROERROR:
.type HREPORTMACROERROR, @function
push ebp
mov ebp, esp
sub esp, 24
.Lt_0064:
push 0
push 1
push 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
push 0
push -1
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax+12]
push 12
push offset Lt_0066
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
push dword ptr [ebp+12]
call ERRREPORTEX
add esp, 20
lea eax, [ebp-24]
push eax
call fb_StrDelete
add esp, 4
.Lt_0065:
mov esp, ebp
pop ebp
ret
.size HREPORTMACROERROR, .-HREPORTMACROERROR
.balign 16
ISMACROALLOWED:
.type ISMACROALLOWED, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_0069:
cmp dword ptr [PP+200], 0
jne .Lt_006C
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+68]
and ebx, 2
je .Lt_006E
cmp dword ptr [ENV+104], 1
jne .Lt_0070
push 0
push 0
push 285
call ERRREPORT
add esp, 12
mov dword ptr [ebp-4], 0
jmp .Lt_006A
.Lt_0070:
.Lt_006F:
.Lt_006E:
.Lt_006D:
.Lt_006C:
.Lt_006B:
mov dword ptr [ebp-4], -1
.Lt_006A:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ISMACROALLOWED, .-ISMACROALLOWED
.balign 16
HLOADMACRO:
.type HLOADMACRO, @function
push ebp
mov ebp, esp
sub esp, 4196
push ebx
push esi
mov dword ptr [ebp-4], 0
.Lt_0071:
mov dword ptr [ebp-4], -1
push -1
call LEXCURRENTCHAR
add esp, 4
cmp eax, 40
je .Lt_0074
jmp .Lt_0072
.Lt_0074:
.Lt_0073:
push dword ptr [ebp+8]
call ISMACROALLOWED
add esp, 4
test eax, eax
jne .Lt_0076
jmp .Lt_0072
.Lt_0076:
.Lt_0075:
call LEXEATCHAR
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-8], ebx
cmp dword ptr [ebp-8], 0
je .Lt_0078
lea ebx, [PP+164]
push ebx
call LISTNEWNODE
add esp, 4
mov dword ptr [ebp-4152], eax
jmp .Lt_0077
.Lt_0078:
mov dword ptr [ebp-4152], 0
.Lt_0077:
mov dword ptr [ebp-4156], 1
mov dword ptr [ebp-4164], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+68]
and ebx, 4
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-4168], ebx
mov dword ptr [ebp-4160], 0
.Lt_0079:
cmp dword ptr [ebp-4152], 0
je .Lt_007D
mov ebx, dword ptr [ebp-4160]
imul ebx, 12
mov eax, dword ptr [ebp-4152]
add eax, ebx
lea ebx, [eax]
push ebx
call DZSTRZERO
add esp, 4
.Lt_007D:
.Lt_007C:
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx+8]
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_007F
mov eax, dword ptr [ebp-4168]
mov dword ptr [ebp-4164], eax
.Lt_007F:
.Lt_007E:
.Lt_0080:
push 92
lea eax, [ebp-4148]
push eax
call LEXNEXTTOKEN
add esp, 8
mov eax, dword ptr [ebp-4148]
mov dword ptr [ebp-4176], eax
jmp .Lt_0084
.Lt_0086:
inc dword ptr [ebp-4156]
jmp .Lt_0083
.Lt_0087:
dec dword ptr [ebp-4156]
cmp dword ptr [ebp-4156], 0
jne .Lt_0089
jmp .Lt_0081
.Lt_0089:
.Lt_0088:
jmp .Lt_0083
.Lt_008A:
cmp dword ptr [ebp-4156], 1
jne .Lt_008C
cmp dword ptr [ebp-4164], 0
jne .Lt_008E
jmp .Lt_0081
.Lt_008E:
.Lt_008D:
.Lt_008C:
.Lt_008B:
jmp .Lt_0083
.Lt_008F:
push 7
push dword ptr [ebp+8]
call HREPORTMACROERROR
add esp, 8
mov dword ptr [ebp-4156], 0
jmp .Lt_0081
jmp .Lt_0083
.Lt_0084:
mov eax, dword ptr [ebp-4176]
add eax, 4294967256
cmp eax, 217
ja .Lt_0083
mov eax, dword ptr [ebp-4176]
jmp dword ptr [.LT_0090+eax*4-160]
.LT_0090:
.int .Lt_0086
.int .Lt_0087
.int .Lt_0083
.int .Lt_0083
.int .Lt_008A
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_0083
.int .Lt_008F
.int .Lt_008F
.Lt_0083:
cmp dword ptr [ebp-4152], 0
je .Lt_0092
cmp dword ptr [ebp-4140], 6
je .Lt_0094
lea eax, [ebp-4136]
push eax
mov eax, dword ptr [ebp-4160]
imul eax, 12
mov ebx, dword ptr [ebp-4152]
add ebx, eax
lea eax, [ebx]
push eax
call DZSTRCONCATASSIGN
add esp, 8
jmp .Lt_0093
.Lt_0094:
lea eax, [ebp-4136]
push eax
mov eax, dword ptr [ebp-4160]
imul eax, 12
mov ebx, dword ptr [ebp-4152]
add ebx, eax
lea eax, [ebx]
push eax
call DZSTRCONCATASSIGNW
add esp, 8
.Lt_0093:
.Lt_0092:
.Lt_0091:
.Lt_0082:
jmp .Lt_0080
.Lt_0081:
cmp dword ptr [ebp-4152], 0
je .Lt_0096
mov eax, dword ptr [ebp-4160]
imul eax, 12
mov ebx, dword ptr [ebp-4152]
add ebx, eax
lea eax, [ebx]
mov dword ptr [ebp-4176], eax
mov eax, dword ptr [ebp-4176]
cmp dword ptr [eax], 0
je .Lt_0099
mov eax, dword ptr [ebp-4176]
mov ebx, dword ptr [eax]
movzx eax, byte ptr [ebx]
cmp eax, 32
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp-4176]
push 0
mov ecx, dword ptr [ebp-4176]
push dword ptr [ecx]
mov esi, eax
call fb_StrLen
add esp, 8
mov ecx, dword ptr [ebx]
add ecx, eax
movzx eax, byte ptr [ecx-1]
cmp eax, 32
sete al
shr eax, 1
sbb eax, eax
or esi, eax
je .Lt_009B
mov dword ptr [ebp-4188], 0
mov dword ptr [ebp-4184], 0
mov dword ptr [ebp-4180], 0
push 0
push -1
mov eax, dword ptr [ebp-4176]
push dword ptr [eax]
call fb_StrAllocTempDescZ
add esp, 4
push eax
call fb_TRIM
add esp, 4
push eax
push -1
lea eax, [ebp-4188]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-4188]
mov eax, dword ptr [ebp-4176]
lea esi, [eax]
push esi
call DZSTRASSIGN
add esp, 8
lea esi, [ebp-4188]
push esi
call fb_StrDelete
add esp, 4
.Lt_009B:
.Lt_009A:
.Lt_0099:
.Lt_0098:
.Lt_0096:
.Lt_0095:
cmp dword ptr [ebp-4156], 0
jne .Lt_009E
cmp dword ptr [ebp-12], 0
je .Lt_00A0
mov esi, dword ptr [ebp-12]
cmp dword ptr [esi+8], 0
setne al
shr eax, 1
sbb eax, eax
mov esi, dword ptr [ebp-4168]
not esi
or eax, esi
je .Lt_00A2
push 1
push dword ptr [ebp+8]
call HREPORTMACROERROR
add esp, 8
.Lt_00A2:
.Lt_00A1:
.Lt_00A3:
inc dword ptr [ebp-4160]
mov esi, dword ptr [ebp-4160]
imul esi, 12
mov eax, dword ptr [ebp-4152]
add eax, esi
lea esi, [eax]
push esi
call DZSTRZERO
add esp, 4
.Lt_00A5:
mov esi, dword ptr [ebp+8]
mov eax, dword ptr [esi+52]
dec eax
cmp dword ptr [ebp-4160], eax
jl .Lt_00A3
.Lt_00A4:
.Lt_00A0:
.Lt_009F:
jmp .Lt_007A
.Lt_009E:
.Lt_009D:
cmp dword ptr [ebp-12], 0
jne .Lt_00A7
push 1
push dword ptr [ebp+8]
call HREPORTMACROERROR
add esp, 8
push 0
push 62
push -1
push 41
call HSKIPUNTIL
add esp, 16
jmp .Lt_007A
.Lt_00A7:
.Lt_00A6:
mov eax, dword ptr [ebp-12]
mov dword ptr [ebp-8], eax
inc dword ptr [ebp-4160]
.Lt_007B:
jmp .Lt_0079
.Lt_007A:
push 0
push 1
push offset Lt_0000
push -1
push offset Lt_0201
call fb_StrAssign
add esp, 20
cmp dword ptr [ebp-4152], 0
je .Lt_00A9
mov eax, dword ptr [ebp+8]
mov esi, dword ptr [eax+60]
mov dword ptr [ebp-16], esi
.Lt_00AA:
cmp dword ptr [ebp-16], 0
je .Lt_00AB
mov esi, dword ptr [ebp-16]
mov eax, dword ptr [esi]
mov dword ptr [ebp-4176], eax
jmp .Lt_00AD
.Lt_00AF:
mov eax, dword ptr [ebp-16]
mov esi, dword ptr [eax+4]
imul esi, 12
mov eax, dword ptr [ebp-4152]
add eax, esi
mov esi, dword ptr [eax]
mov dword ptr [ebp-4172], esi
cmp dword ptr [ebp-4172], 0
je .Lt_00B1
push 0
push -1
push 0
push dword ptr [ebp-4172]
push -1
push offset Lt_0201
mov dword ptr [ebp-4188], 0
mov dword ptr [ebp-4184], 0
mov dword ptr [ebp-4180], 0
lea esi, [ebp-4188]
push esi
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_0201
call fb_StrAssign
add esp, 20
.Lt_00B1:
.Lt_00B0:
jmp .Lt_00AC
.Lt_00B3:
mov eax, dword ptr [ebp-16]
mov esi, dword ptr [eax+4]
imul esi, 12
mov eax, dword ptr [ebp-4152]
add eax, esi
mov esi, dword ptr [eax]
mov dword ptr [ebp-4172], esi
cmp dword ptr [ebp-4172], 0
je .Lt_00B5
push 0
push 3
push offset Lt_00B8
push -1
push offset Lt_0201
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_00B9
push offset Lt_00B7
push dword ptr [ebp-4172]
call HREPLACE
add esp, 12
push eax
push -1
push offset Lt_0201
call fb_StrConcatAssign
add esp, 20
push 0
push 2
push offset Lt_00B7
push -1
push offset Lt_0201
call fb_StrConcatAssign
add esp, 20
jmp .Lt_00B4
.Lt_00B5:
push 0
push 3
push offset Lt_00BA
push -1
push offset Lt_0201
call fb_StrConcatAssign
add esp, 20
.Lt_00B4:
jmp .Lt_00AC
.Lt_00BB:
push 0
push -1
push 0
mov eax, dword ptr [ebp-16]
push dword ptr [eax+4]
push -1
push offset Lt_0201
mov dword ptr [ebp-4188], 0
mov dword ptr [ebp-4184], 0
mov dword ptr [ebp-4180], 0
lea eax, [ebp-4188]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_0201
call fb_StrAssign
add esp, 20
jmp .Lt_00AC
.Lt_00BD:
push 0
push -1
push -1
mov eax, dword ptr [ebp-16]
push dword ptr [eax+4]
call fb_WstrToStr
add esp, 4
push eax
push -1
push offset Lt_0201
mov dword ptr [ebp-4188], 0
mov dword ptr [ebp-4184], 0
mov dword ptr [ebp-4180], 0
lea eax, [ebp-4188]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_0201
call fb_StrAssign
add esp, 20
jmp .Lt_00AC
.Lt_00AD:
cmp dword ptr [ebp-4176], 3
ja .Lt_00AC
mov eax, dword ptr [ebp-4176]
jmp dword ptr [.LT_00BF+eax*4]
.LT_00BF:
.int .Lt_00AF
.int .Lt_00B3
.int .Lt_00BB
.int .Lt_00BD
.Lt_00AC:
mov eax, dword ptr [ebp-16]
mov esi, dword ptr [eax+12]
mov dword ptr [ebp-16], esi
jmp .Lt_00AA
.Lt_00AB:
.Lt_00C0:
cmp dword ptr [ebp-4160], 0
jle .Lt_00C1
dec dword ptr [ebp-4160]
push 0
mov esi, dword ptr [ebp-4160]
imul esi, 12
mov eax, dword ptr [ebp-4152]
add eax, esi
lea esi, [eax]
push esi
call DZSTRASSIGN
add esp, 8
jmp .Lt_00C0
.Lt_00C1:
push dword ptr [ebp-4152]
lea esi, [PP+164]
push esi
call LISTDELNODE
add esp, 8
.Lt_00A9:
.Lt_00A8:
mov esi, dword ptr [LEX+839664]
cmp dword ptr [esi+16568], 0
jne .Lt_00C3
push dword ptr [Lt_0201]
mov esi, dword ptr [LEX+839664]
lea eax, [esi+16576]
push eax
call DZSTRASSIGN
add esp, 8
jmp .Lt_00C2
.Lt_00C3:
mov dword ptr [ebp-4196], 0
mov dword ptr [ebp-4192], 0
mov dword ptr [ebp-4188], 0
push 0
push -1
push 0
mov eax, dword ptr [LEX+839664]
push dword ptr [eax+16572]
push -1
push offset Lt_0201
mov dword ptr [ebp-4184], 0
mov dword ptr [ebp-4180], 0
mov dword ptr [ebp-4176], 0
lea eax, [ebp-4184]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-4196]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-4196]
mov eax, dword ptr [LEX+839664]
lea esi, [eax+16576]
push esi
call DZSTRASSIGN
add esp, 8
lea esi, [ebp-4196]
push esi
call fb_StrDelete
add esp, 4
.Lt_00C2:
push -1
push offset Lt_0201
call fb_StrLen
add esp, 8
mov dword ptr [ebp-4], eax
.Lt_0072:
mov eax, dword ptr [ebp-4]
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size HLOADMACRO, .-HLOADMACRO

.section .bss
.balign 4
	.lcomm	Lt_0201,12

.section .text
.balign 16
HLOADDEFINE:
.type HLOADDEFINE, @function
push ebp
mov ebp, esp
sub esp, 32
push ebx
mov dword ptr [ebp-4], 0
.Lt_00C6:
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+52], 0
jle .Lt_00C9
push dword ptr [ebp+8]
call HLOADMACRO
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], -1
jne .Lt_00CB
jmp .Lt_00C7
.Lt_00CB:
.Lt_00CA:
jmp .Lt_00C8
.Lt_00C9:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+72], 0
je .Lt_00CD
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+68]
and ebx, 1
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_00CF
push 0
push -1
push 2
push offset Lt_00B7
push -1
push -1
mov ebx, dword ptr [ebp+8]
call dword ptr [ebx+72]
push eax
push 3
push offset Lt_00B8
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
lea eax, [ebp-20]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
lea eax, [ebp-32]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_0203
call fb_StrAssign
add esp, 20
jmp .Lt_00CE
.Lt_00CF:
push 0
push -1
mov eax, dword ptr [ebp+8]
call dword ptr [eax+72]
push eax
push -1
push offset Lt_0203
call fb_StrAssign
add esp, 20
.Lt_00CE:
mov eax, dword ptr [LEX+839664]
cmp dword ptr [eax+16568], 0
jne .Lt_00D3
push dword ptr [Lt_0203]
mov eax, dword ptr [LEX+839664]
lea ebx, [eax+16576]
push ebx
call DZSTRASSIGN
add esp, 8
jmp .Lt_00D2
.Lt_00D3:
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
push 0
push -1
push 0
mov ebx, dword ptr [LEX+839664]
push dword ptr [ebx+16572]
push -1
push offset Lt_0203
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
lea ebx, [ebp-20]
push ebx
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-32]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-32]
mov eax, dword ptr [LEX+839664]
lea ebx, [eax+16576]
push ebx
call DZSTRASSIGN
add esp, 8
lea ebx, [ebp-32]
push ebx
call fb_StrDelete
add esp, 4
.Lt_00D2:
push -1
push offset Lt_0203
call fb_StrLen
add esp, 8
mov dword ptr [ebp-8], eax
jmp .Lt_00CC
.Lt_00CD:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+64], 0
je .Lt_00D7
push -1
call LEXCURRENTCHAR
add esp, 4
cmp eax, 40
je .Lt_00D9
jmp .Lt_00C7
.Lt_00D9:
.Lt_00D8:
call LEXEATCHAR
push -1
call LEXCURRENTCHAR
add esp, 4
cmp eax, 41
je .Lt_00DB
push 0
push 0
push 7
call ERRREPORT
add esp, 12
jmp .Lt_00DA
.Lt_00DB:
call LEXEATCHAR
.Lt_00DA:
.Lt_00D7:
.Lt_00D6:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+24]
and ebx, 511
cmp ebx, 6
je .Lt_00DD
mov ebx, dword ptr [LEX+839664]
cmp dword ptr [ebx+16568], 0
jne .Lt_00DF
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+60]
mov ebx, dword ptr [LEX+839664]
lea eax, [ebx+16576]
push eax
call DZSTRASSIGN
add esp, 8
jmp .Lt_00DE
.Lt_00DF:
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
push 0
push -1
push 0
mov eax, dword ptr [LEX+839664]
push dword ptr [eax+16572]
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax+60]
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
lea eax, [ebp-20]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-32]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-32]
mov eax, dword ptr [LEX+839664]
lea ebx, [eax+16576]
push ebx
call DZSTRASSIGN
add esp, 8
lea ebx, [ebp-32]
push ebx
call fb_StrDelete
add esp, 4
.Lt_00DE:
jmp .Lt_00DC
.Lt_00DD:
mov ebx, dword ptr [LEX+839664]
cmp dword ptr [ebx+16568], 0
jne .Lt_00E3
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+60]
mov ebx, dword ptr [LEX+839664]
lea eax, [ebx+16576]
push eax
call DZSTRASSIGNW
add esp, 8
jmp .Lt_00E2
.Lt_00E3:
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
push 0
push -1
push 0
mov eax, dword ptr [LEX+839664]
push dword ptr [eax+16572]
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+60]
call fb_WstrToStr
add esp, 4
push eax
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
lea eax, [ebp-20]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-32]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-32]
mov eax, dword ptr [LEX+839664]
lea ebx, [eax+16576]
push ebx
call DZSTRASSIGN
add esp, 8
lea ebx, [ebp-32]
push ebx
call fb_StrDelete
add esp, 4
.Lt_00E2:
.Lt_00DC:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+36]
mov dword ptr [ebp-8], eax
.Lt_00CC:
.Lt_00C8:
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [LEX+839664]
mov ecx, dword ptr [eax+16576]
mov dword ptr [ebx+16572], ecx
mov ecx, dword ptr [LEX+839664]
mov ebx, dword ptr [ebp-8]
add dword ptr [ecx+16568], ebx
mov ebx, dword ptr [LEX+839664]
mov dword ptr [ebx+16540], 4294967295
mov dword ptr [ebp-4], -1
.Lt_00C7:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HLOADDEFINE, .-HLOADDEFINE

.section .bss
.balign 4
	.lcomm	Lt_0203,12

.section .text
.balign 16
HLOADMACROW:
.type HLOADMACROW, @function
push ebp
mov ebp, esp
sub esp, 4184
push ebx
push esi
mov dword ptr [ebp-4], 0
.Lt_00E6:
mov dword ptr [ebp-4], -1
push -1
call LEXCURRENTCHAR
add esp, 4
cmp eax, 40
je .Lt_00E9
jmp .Lt_00E7
.Lt_00E9:
.Lt_00E8:
push dword ptr [ebp+8]
call ISMACROALLOWED
add esp, 4
test eax, eax
jne .Lt_00EB
jmp .Lt_00E7
.Lt_00EB:
.Lt_00EA:
call LEXEATCHAR
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-8], ebx
cmp dword ptr [ebp-8], 0
je .Lt_00ED
lea ebx, [PP+164]
push ebx
call LISTNEWNODE
add esp, 4
mov dword ptr [ebp-4152], eax
jmp .Lt_00EC
.Lt_00ED:
mov dword ptr [ebp-4152], 0
.Lt_00EC:
mov dword ptr [ebp-4156], 1
mov dword ptr [ebp-4168], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+68]
and ebx, 4
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-4172], ebx
mov dword ptr [ebp-4164], 0
.Lt_00EE:
cmp dword ptr [ebp-4152], 0
je .Lt_00F2
mov ebx, dword ptr [ebp-4164]
imul ebx, 12
mov eax, dword ptr [ebp-4152]
add eax, ebx
lea ebx, [eax]
push ebx
call DWSTRZERO
add esp, 4
.Lt_00F2:
.Lt_00F1:
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx+8]
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_00F4
mov eax, dword ptr [ebp-4172]
mov dword ptr [ebp-4168], eax
.Lt_00F4:
.Lt_00F3:
.Lt_00F5:
push 92
lea eax, [ebp-4148]
push eax
call LEXNEXTTOKEN
add esp, 8
mov eax, dword ptr [ebp-4148]
mov dword ptr [ebp-4180], eax
jmp .Lt_00F9
.Lt_00FB:
inc dword ptr [ebp-4156]
jmp .Lt_00F8
.Lt_00FC:
dec dword ptr [ebp-4156]
cmp dword ptr [ebp-4156], 0
jne .Lt_00FE
jmp .Lt_00F6
.Lt_00FE:
.Lt_00FD:
jmp .Lt_00F8
.Lt_00FF:
cmp dword ptr [ebp-4156], 1
jne .Lt_0101
cmp dword ptr [ebp-4168], 0
jne .Lt_0103
jmp .Lt_00F6
.Lt_0103:
.Lt_0102:
.Lt_0101:
.Lt_0100:
jmp .Lt_00F8
.Lt_0104:
push 7
push dword ptr [ebp+8]
call HREPORTMACROERROR
add esp, 8
mov dword ptr [ebp-4156], 0
jmp .Lt_00F6
jmp .Lt_00F8
.Lt_00F9:
mov eax, dword ptr [ebp-4180]
add eax, 4294967256
cmp eax, 217
ja .Lt_00F8
mov eax, dword ptr [ebp-4180]
jmp dword ptr [.LT_0105+eax*4-160]
.LT_0105:
.int .Lt_00FB
.int .Lt_00FC
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00FF
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_00F8
.int .Lt_0104
.int .Lt_0104
.Lt_00F8:
cmp dword ptr [ebp-4152], 0
je .Lt_0107
cmp dword ptr [ebp-4140], 6
je .Lt_0109
lea eax, [ebp-4136]
push eax
mov eax, dword ptr [ebp-4164]
imul eax, 12
mov ebx, dword ptr [ebp-4152]
add ebx, eax
lea eax, [ebx]
push eax
call DWSTRCONCATASSIGNA
add esp, 8
jmp .Lt_0108
.Lt_0109:
lea eax, [ebp-4136]
push eax
mov eax, dword ptr [ebp-4164]
imul eax, 12
mov ebx, dword ptr [ebp-4152]
add ebx, eax
lea eax, [ebx]
push eax
call DWSTRCONCATASSIGN
add esp, 8
.Lt_0108:
.Lt_0107:
.Lt_0106:
.Lt_00F7:
jmp .Lt_00F5
.Lt_00F6:
cmp dword ptr [ebp-4152], 0
je .Lt_010B
mov eax, dword ptr [ebp-4164]
imul eax, 12
mov ebx, dword ptr [ebp-4152]
add ebx, eax
lea eax, [ebx]
mov dword ptr [ebp-4180], eax
mov eax, dword ptr [ebp-4180]
cmp dword ptr [eax], 0
je .Lt_010E
mov eax, dword ptr [ebp-4180]
mov ebx, dword ptr [eax]
cmp dword ptr [ebx], 32
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp-4180]
mov ecx, dword ptr [ebp-4180]
push dword ptr [ecx]
mov esi, eax
call fb_WstrLen
add esp, 4
sal eax, 2
mov ecx, dword ptr [ebx]
add ecx, eax
cmp dword ptr [ecx-4], 32
sete al
shr eax, 1
sbb eax, eax
or esi, eax
je .Lt_0110
mov eax, dword ptr [ebp-4180]
push dword ptr [eax]
call fb_WstrTrim
add esp, 4
mov dword ptr [ebp-4184], eax
push dword ptr [ebp-4184]
mov eax, dword ptr [ebp-4180]
lea esi, [eax]
push esi
call DWSTRASSIGN
add esp, 8
push dword ptr [ebp-4184]
call fb_WstrDelete
add esp, 4
.Lt_0110:
.Lt_010F:
.Lt_010E:
.Lt_010D:
.Lt_010B:
.Lt_010A:
cmp dword ptr [ebp-4156], 0
jne .Lt_0113
cmp dword ptr [ebp-12], 0
je .Lt_0115
mov esi, dword ptr [ebp-12]
cmp dword ptr [esi+8], 0
setne al
shr eax, 1
sbb eax, eax
mov esi, dword ptr [ebp-4172]
not esi
or eax, esi
je .Lt_0117
push 1
push dword ptr [ebp+8]
call HREPORTMACROERROR
add esp, 8
.Lt_0117:
.Lt_0116:
.Lt_0118:
inc dword ptr [ebp-4164]
mov esi, dword ptr [ebp-4164]
imul esi, 12
mov eax, dword ptr [ebp-4152]
add eax, esi
lea esi, [eax]
push esi
call DWSTRZERO
add esp, 4
.Lt_011A:
mov esi, dword ptr [ebp+8]
mov eax, dword ptr [esi+52]
dec eax
cmp dword ptr [ebp-4164], eax
jl .Lt_0118
.Lt_0119:
.Lt_0115:
.Lt_0114:
jmp .Lt_00EF
.Lt_0113:
.Lt_0112:
cmp dword ptr [ebp-12], 0
jne .Lt_011C
push 1
push dword ptr [ebp+8]
call HREPORTMACROERROR
add esp, 8
push 0
push 62
push -1
push 41
call HSKIPUNTIL
add esp, 16
jmp .Lt_00EF
.Lt_011C:
.Lt_011B:
mov eax, dword ptr [ebp-12]
mov dword ptr [ebp-8], eax
inc dword ptr [ebp-4164]
.Lt_00F0:
jmp .Lt_00EE
.Lt_00EF:
push 0
push offset Lt_0208
call DWSTRASSIGN
add esp, 8
cmp dword ptr [ebp-4152], 0
je .Lt_011E
mov eax, dword ptr [ebp+8]
mov esi, dword ptr [eax+60]
mov dword ptr [ebp-16], esi
.Lt_011F:
cmp dword ptr [ebp-16], 0
je .Lt_0120
mov esi, dword ptr [ebp-16]
mov eax, dword ptr [esi]
mov dword ptr [ebp-4180], eax
jmp .Lt_0122
.Lt_0124:
mov eax, dword ptr [ebp-16]
mov esi, dword ptr [eax+4]
imul esi, 12
mov eax, dword ptr [ebp-4152]
add eax, esi
mov esi, dword ptr [eax]
mov dword ptr [ebp-4176], esi
cmp dword ptr [ebp-4176], 0
je .Lt_0126
push dword ptr [ebp-4176]
push offset Lt_0208
call DWSTRCONCATASSIGN
add esp, 8
.Lt_0126:
.Lt_0125:
jmp .Lt_0121
.Lt_0127:
mov esi, dword ptr [ebp-16]
mov eax, dword ptr [esi+4]
imul eax, 12
mov esi, dword ptr [ebp-4152]
add esi, eax
mov eax, dword ptr [esi]
mov dword ptr [ebp-4176], eax
cmp dword ptr [ebp-4176], 0
je .Lt_0129
push offset Lt_012A
push offset Lt_0208
call DWSTRCONCATASSIGN
add esp, 8
push offset Lt_012C
push offset Lt_012B
push dword ptr [ebp-4176]
call HREPLACEW
add esp, 12
push eax
push offset Lt_0208
call DWSTRCONCATASSIGN
add esp, 8
push offset Lt_012B
push offset Lt_0208
call DWSTRCONCATASSIGN
add esp, 8
.Lt_0129:
.Lt_0128:
jmp .Lt_0121
.Lt_012D:
mov eax, dword ptr [ebp-16]
push dword ptr [eax+4]
push offset Lt_0208
call DWSTRCONCATASSIGNA
add esp, 8
jmp .Lt_0121
.Lt_012E:
mov eax, dword ptr [ebp-16]
push dword ptr [eax+4]
push offset Lt_0208
call DWSTRCONCATASSIGN
add esp, 8
jmp .Lt_0121
.Lt_0122:
cmp dword ptr [ebp-4180], 3
ja .Lt_0121
mov eax, dword ptr [ebp-4180]
jmp dword ptr [.LT_012F+eax*4]
.LT_012F:
.int .Lt_0124
.int .Lt_0127
.int .Lt_012D
.int .Lt_012E
.Lt_0121:
mov eax, dword ptr [ebp-16]
mov esi, dword ptr [eax+12]
mov dword ptr [ebp-16], esi
jmp .Lt_011F
.Lt_0120:
.Lt_0130:
cmp dword ptr [ebp-4164], 0
jle .Lt_0131
dec dword ptr [ebp-4164]
push 0
mov esi, dword ptr [ebp-4164]
imul esi, 12
mov eax, dword ptr [ebp-4152]
add eax, esi
lea esi, [eax]
push esi
call DWSTRASSIGN
add esp, 8
jmp .Lt_0130
.Lt_0131:
push dword ptr [ebp-4152]
lea esi, [PP+164]
push esi
call LISTDELNODE
add esp, 8
.Lt_011E:
.Lt_011D:
mov esi, dword ptr [LEX+839664]
cmp dword ptr [esi+16568], 0
jne .Lt_0133
push dword ptr [Lt_0208]
mov esi, dword ptr [LEX+839664]
lea eax, [esi+16576]
push eax
call DWSTRASSIGN
add esp, 8
jmp .Lt_0132
.Lt_0133:
mov eax, dword ptr [LEX+839664]
push dword ptr [eax+16572]
push dword ptr [Lt_0208]
call fb_WstrConcat
add esp, 8
mov dword ptr [ebp-4180], eax
push dword ptr [ebp-4180]
mov eax, dword ptr [LEX+839664]
lea esi, [eax+16576]
push esi
call DWSTRASSIGN
add esp, 8
push dword ptr [ebp-4180]
call fb_WstrDelete
add esp, 4
.Lt_0132:
push dword ptr [Lt_0208]
call fb_WstrLen
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_00E7:
mov eax, dword ptr [ebp-4]
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size HLOADMACROW, .-HLOADMACROW

.section .bss
.balign 4
	.lcomm	Lt_0208,12

.section .text
.balign 16
HLOADDEFINEW:
.type HLOADDEFINEW, @function
push ebp
mov ebp, esp
sub esp, 44
push ebx
mov dword ptr [ebp-4], 0
.Lt_0135:
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+52], 0
jle .Lt_0138
push dword ptr [ebp+8]
call HLOADMACROW
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], -1
jne .Lt_013A
jmp .Lt_0136
.Lt_013A:
.Lt_0139:
jmp .Lt_0137
.Lt_0138:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+72], 0
je .Lt_013C
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+68]
and ebx, 1
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_013E
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
push 0
push -1
push 2
push offset Lt_00B7
push -1
push -1
mov ebx, dword ptr [ebp+8]
call dword ptr [ebx+72]
push eax
push 3
push offset Lt_00B8
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
lea eax, [ebp-20]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
lea eax, [ebp-32]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-44]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-44]
push offset Lt_020A
call DWSTRASSIGNA
add esp, 8
lea eax, [ebp-44]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_013D
.Lt_013E:
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
push 0
push -1
mov eax, dword ptr [ebp+8]
call dword ptr [eax+72]
push eax
push -1
lea eax, [ebp-20]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-20]
push offset Lt_020A
call DWSTRASSIGNA
add esp, 8
lea eax, [ebp-20]
push eax
call fb_StrDelete
add esp, 4
.Lt_013D:
mov eax, dword ptr [LEX+839664]
cmp dword ptr [eax+16568], 0
jne .Lt_0144
push dword ptr [Lt_020A]
mov eax, dword ptr [LEX+839664]
lea ebx, [eax+16576]
push ebx
call DWSTRASSIGN
add esp, 8
jmp .Lt_0143
.Lt_0144:
mov ebx, dword ptr [LEX+839664]
push dword ptr [ebx+16572]
push dword ptr [Lt_020A]
call fb_WstrConcat
add esp, 8
mov dword ptr [ebp-12], eax
push dword ptr [ebp-12]
mov eax, dword ptr [LEX+839664]
lea ebx, [eax+16576]
push ebx
call DWSTRASSIGN
add esp, 8
push dword ptr [ebp-12]
call fb_WstrDelete
add esp, 4
.Lt_0143:
push dword ptr [Lt_020A]
call fb_WstrLen
add esp, 4
mov dword ptr [ebp-8], eax
jmp .Lt_013B
.Lt_013C:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+64], 0
je .Lt_0147
push -1
call LEXCURRENTCHAR
add esp, 4
cmp eax, 40
je .Lt_0149
jmp .Lt_0136
.Lt_0149:
.Lt_0148:
call LEXEATCHAR
push -1
call LEXCURRENTCHAR
add esp, 4
cmp eax, 41
je .Lt_014B
push 0
push 0
push 7
call ERRREPORT
add esp, 12
jmp .Lt_014A
.Lt_014B:
call LEXEATCHAR
.Lt_014A:
.Lt_0147:
.Lt_0146:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+24]
and ebx, 511
cmp ebx, 6
je .Lt_014D
mov ebx, dword ptr [LEX+839664]
cmp dword ptr [ebx+16568], 0
jne .Lt_014F
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+60]
mov ebx, dword ptr [LEX+839664]
lea eax, [ebx+16576]
push eax
call DWSTRASSIGNA
add esp, 8
jmp .Lt_014E
.Lt_014F:
mov eax, dword ptr [LEX+839664]
push dword ptr [eax+16572]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+60]
call fb_StrToWstr
add esp, 4
mov dword ptr [ebp-12], eax
push dword ptr [ebp-12]
call fb_WstrConcat
add esp, 8
mov dword ptr [ebp-16], eax
push dword ptr [ebp-16]
mov eax, dword ptr [LEX+839664]
lea ebx, [eax+16576]
push ebx
call DWSTRASSIGN
add esp, 8
push dword ptr [ebp-16]
call fb_WstrDelete
add esp, 4
push dword ptr [ebp-12]
call fb_WstrDelete
add esp, 4
.Lt_014E:
jmp .Lt_014C
.Lt_014D:
mov ebx, dword ptr [LEX+839664]
cmp dword ptr [ebx+16568], 0
jne .Lt_0153
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+60]
mov ebx, dword ptr [LEX+839664]
lea eax, [ebx+16576]
push eax
call DWSTRASSIGN
add esp, 8
jmp .Lt_0152
.Lt_0153:
mov eax, dword ptr [LEX+839664]
push dword ptr [eax+16572]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+60]
call fb_WstrConcat
add esp, 8
mov dword ptr [ebp-12], eax
push dword ptr [ebp-12]
mov eax, dword ptr [LEX+839664]
lea ebx, [eax+16576]
push ebx
call DWSTRASSIGN
add esp, 8
push dword ptr [ebp-12]
call fb_WstrDelete
add esp, 4
.Lt_0152:
.Lt_014C:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+36]
mov dword ptr [ebp-8], eax
.Lt_013B:
.Lt_0137:
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [LEX+839664]
mov ecx, dword ptr [eax+16576]
mov dword ptr [ebx+16572], ecx
mov ecx, dword ptr [LEX+839664]
mov ebx, dword ptr [ebp-8]
add dword ptr [ecx+16568], ebx
mov dword ptr [ebp-4], -1
.Lt_0136:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HLOADDEFINEW, .-HLOADDEFINEW

.section .bss
.balign 4
	.lcomm	Lt_020A,12

.section .text
.balign 16
HRTRIMMACROTEXT:
.type HRTRIMMACROTEXT, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_015F:
.Lt_0161:
cmp dword ptr [ebp+12], 0
je .Lt_0162
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax], 2
je .Lt_0164
jmp .Lt_0162
.Lt_0164:
.Lt_0163:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
movzx eax, byte ptr [ebx]
mov dword ptr [ebp-8], eax
jmp .Lt_0166
.Lt_0168:
push dword ptr [ebp+12]
call SYMBDELDEFINETOK
add esp, 4
mov dword ptr [ebp+12], eax
jmp .Lt_0165
.Lt_0169:
jmp .Lt_0162
jmp .Lt_0165
.Lt_0166:
mov eax, dword ptr [ebp-8]
add eax, 4294967287
cmp eax, 23
ja .Lt_0169
mov eax, dword ptr [ebp-8]
jmp dword ptr [.LT_016A+eax*4-36]
.LT_016A:
.int .Lt_0168
.int .Lt_0168
.int .Lt_0169
.int .Lt_0169
.int .Lt_0169
.int .Lt_0169
.int .Lt_0169
.int .Lt_0169
.int .Lt_0169
.int .Lt_0169
.int .Lt_0169
.int .Lt_0169
.int .Lt_0169
.int .Lt_0169
.int .Lt_0169
.int .Lt_0169
.int .Lt_0169
.int .Lt_0169
.int .Lt_0169
.int .Lt_0169
.int .Lt_0169
.int .Lt_0169
.int .Lt_0169
.int .Lt_0168
.Lt_0165:
jmp .Lt_0161
.Lt_0162:
cmp dword ptr [ebp+12], 0
jne .Lt_016C
mov dword ptr [ebp-4], 0
jmp .Lt_016B
.Lt_016C:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
.Lt_016B:
.Lt_0160:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HRTRIMMACROTEXT, .-HRTRIMMACROTEXT
.balign 16
HREADMACROTEXT:
.type HREADMACROTEXT, @function
push ebp
mov ebp, esp
sub esp, 32
push ebx
mov dword ptr [ebp-4], 0
.Lt_016D:
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-24], 0
.Lt_016F:
mov dword ptr [ebp-20], 0
push 62
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-28], eax
jmp .Lt_0173
.Lt_0175:
cmp dword ptr [ebp+16], 0
je .Lt_0177
push 0
push 0
push 133
call ERRREPORT
add esp, 12
.Lt_0177:
.Lt_0176:
jmp .Lt_0170
jmp .Lt_0172
.Lt_0178:
cmp dword ptr [ebp+16], 0
jne .Lt_017A
jmp .Lt_0170
.Lt_017A:
.Lt_0179:
cmp dword ptr [ebp-16], 0
je .Lt_017C
push 2
push dword ptr [ebp-12]
call SYMBADDDEFINETOK
add esp, 8
mov dword ptr [ebp-12], eax
push offset Lt_017D
mov eax, dword ptr [ebp-12]
lea ebx, [eax+4]
push ebx
call ZSTRASSIGN
add esp, 8
.Lt_017C:
.Lt_017B:
push 62
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_0171
jmp .Lt_0172
.Lt_017E:
cmp dword ptr [ebp+16], 0
jne .Lt_0180
jmp .Lt_0170
.Lt_0180:
.Lt_017F:
.Lt_0181:
push 62
call LEXSKIPTOKEN
add esp, 4
push 62
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-32], eax
cmp dword ptr [ebp-32], 257
je .Lt_0187
.Lt_0188:
cmp dword ptr [ebp-32], 256
jne .Lt_0186
.Lt_0187:
jmp .Lt_0182
.Lt_0186:
.Lt_0184:
.Lt_0183:
jmp .Lt_0181
.Lt_0182:
jmp .Lt_0171
jmp .Lt_0172
.Lt_0189:
push 314
push 1
call LEXGETLOOKAHEAD
add esp, 8
mov dword ptr [ebp-32], eax
cmp dword ptr [ebp-32], 35
jne .Lt_018C
.Lt_018D:
push 62
call LEXSKIPTOKEN
add esp, 4
push 62
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_0171
jmp .Lt_018A
.Lt_018C:
cmp dword ptr [ebp-32], 274
jne .Lt_018E
.Lt_018F:
cmp dword ptr [ebp+16], 0
je .Lt_0191
inc dword ptr [ebp-24]
.Lt_0191:
.Lt_0190:
jmp .Lt_018A
.Lt_018E:
cmp dword ptr [ebp-32], 275
jne .Lt_0192
.Lt_0193:
cmp dword ptr [ebp+16], 0
je .Lt_0195
cmp dword ptr [ebp-24], 0
jne .Lt_0197
push 62
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXSKIPTOKEN
add esp, 4
push dword ptr [ebp-12]
push dword ptr [ebp-16]
call HRTRIMMACROTEXT
add esp, 8
mov dword ptr [ebp-16], eax
jmp .Lt_0170
.Lt_0197:
.Lt_0196:
dec dword ptr [ebp-24]
.Lt_0195:
.Lt_0194:
jmp .Lt_018A
.Lt_0192:
cmp dword ptr [ebp-32], 265
jne .Lt_0198
.Lt_0199:
push 62
call LEXSKIPTOKEN
add esp, 4
mov dword ptr [ebp-20], -1
.Lt_0198:
.Lt_018A:
jmp .Lt_0172
.Lt_019A:
cmp dword ptr [ebp-16], 0
je .Lt_019C
push 2
push dword ptr [ebp-12]
call SYMBADDDEFINETOK
add esp, 8
mov dword ptr [ebp-12], eax
push offset Lt_019D
mov eax, dword ptr [ebp-12]
lea ebx, [eax+4]
push ebx
call ZSTRASSIGN
add esp, 8
.Lt_019C:
.Lt_019B:
push 62
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_0171
jmp .Lt_0172
.Lt_0173:
mov ebx, dword ptr [ebp-28]
add ebx, 4294967287
cmp ebx, 251
ja .Lt_0172
mov ebx, dword ptr [ebp-28]
jmp dword ptr [.LT_019E+ebx*4-36]
.LT_019E:
.int .Lt_019A
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_019A
.int .Lt_0172
.int .Lt_0172
.int .Lt_0189
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0172
.int .Lt_0175
.int .Lt_0178
.int .Lt_0172
.int .Lt_017E
.int .Lt_017E
.Lt_0172:
push 62
call LEXGETCLASS
add esp, 4
mov dword ptr [ebp-28], eax
jmp .Lt_01A0
.Lt_01A2:
cmp dword ptr [ENV+516], 0
jne .Lt_01A4
push 2
push dword ptr [ebp-12]
call SYMBADDDEFINETOK
add esp, 8
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-16], 0
jne .Lt_01A6
mov eax, dword ptr [ebp-12]
mov dword ptr [ebp-16], eax
.Lt_01A6:
.Lt_01A5:
call LEXGETTEXT
push eax
mov eax, dword ptr [ebp-12]
lea ebx, [eax+4]
push ebx
call ZSTRASSIGN
add esp, 8
jmp .Lt_01A3
.Lt_01A4:
push 3
push dword ptr [ebp-12]
call SYMBADDDEFINETOK
add esp, 8
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-16], 0
jne .Lt_01A8
mov eax, dword ptr [ebp-12]
mov dword ptr [ebp-16], eax
.Lt_01A8:
.Lt_01A7:
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [eax+16532]
lea eax, [ebx+12]
push eax
mov eax, dword ptr [ebp-12]
lea ebx, [eax+4]
push ebx
call WSTRASSIGN
add esp, 8
.Lt_01A3:
push 62
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_019F
.Lt_01A9:
push 2
push dword ptr [ebp-12]
call SYMBADDDEFINETOK
add esp, 8
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-16], 0
jne .Lt_01AB
mov eax, dword ptr [ebp-12]
mov dword ptr [ebp-16], eax
.Lt_01AB:
.Lt_01AA:
push 0
push -1
push 0
call LEXGETTEXT
push eax
call fb_StrAllocTempDescZ
add esp, 4
push eax
call fb_StrUcase2
add esp, 8
push eax
push 129
push offset Lt_020B
call fb_StrAssign
add esp, 20
push offset Lt_020B
lea eax, [SYMB+98744]
push eax
call HASHLOOKUP
add esp, 8
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
je .Lt_01AD
cmp dword ptr [ebp-20], 0
jne .Lt_01AF
mov eax, dword ptr [ebp-12]
mov dword ptr [eax], 0
jmp .Lt_01AE
.Lt_01AF:
mov eax, dword ptr [ebp-12]
mov dword ptr [eax], 1
.Lt_01AE:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp-12]
mov ecx, dword ptr [eax+4]
mov dword ptr [ebx+4], ecx
jmp .Lt_01AC
.Lt_01AD:
cmp dword ptr [ebp-20], 0
je .Lt_01B1
push offset Lt_01B2
mov ecx, dword ptr [ebp-12]
lea ebx, [ecx+4]
push ebx
call ZSTRASSIGN
add esp, 8
call LEXGETTEXT
push eax
mov eax, dword ptr [ebp-12]
lea ebx, [eax+4]
push ebx
call ZSTRCONCATASSIGN
add esp, 8
jmp .Lt_01B0
.Lt_01B1:
call LEXGETTEXT
push eax
mov eax, dword ptr [ebp-12]
lea ebx, [eax+4]
push ebx
call ZSTRASSIGN
add esp, 8
.Lt_01B0:
.Lt_01AC:
push 62
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_019F
.Lt_01B3:
push 2
push dword ptr [ebp-12]
call SYMBADDDEFINETOK
add esp, 8
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-16], 0
jne .Lt_01B5
mov eax, dword ptr [ebp-12]
mov dword ptr [ebp-16], eax
.Lt_01B5:
.Lt_01B4:
call LEXGETTEXT
push eax
mov eax, dword ptr [ebp-12]
lea ebx, [eax+4]
push ebx
call ZSTRASSIGN
add esp, 8
push 62
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_019F
.Lt_01A0:
cmp dword ptr [ebp-28], 4
ja .Lt_01B3
mov ebx, dword ptr [ebp-28]
jmp dword ptr [.LT_01B6+ebx*4]
.LT_01B6:
.int .Lt_01A9
.int .Lt_01A9
.int .Lt_01A9
.int .Lt_01B3
.int .Lt_01A2
.Lt_019F:
.Lt_0171:
jmp .Lt_016F
.Lt_0170:
mov ebx, dword ptr [ebp-16]
mov dword ptr [ebp-4], ebx
.Lt_016E:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HREADMACROTEXT, .-HREADMACROTEXT

.section .bss
.balign 4
	.lcomm	Lt_020B,129

.section .text
.balign 16
HREADDEFINETEXT:
.type HREADDEFINETEXT, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_01B7:
cmp dword ptr [ENV+516], 0
jne .Lt_01BA
push dword ptr [ebp+20]
call PPREADLITERAL
add esp, 4
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp+8], 0
je .Lt_01BC
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+52]
test ebx, ebx
setg bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+24]
and ecx, 511
cmp ecx, 3
setne cl
shr ecx, 1
sbb ecx, ecx
or ebx, ecx
je .Lt_01BE
push 0
push 1
push 0
push dword ptr [ebp+12]
push 4
call ERRREPORTEX
add esp, 20
jmp .Lt_01BD
.Lt_01BE:
push 0
push dword ptr [ebp-4]
push 0
mov ecx, dword ptr [ebp+8]
push dword ptr [ecx+60]
call fb_StrCompare
add esp, 16
test eax, eax
je .Lt_01BF
push 0
push 1
push 0
push dword ptr [ebp+12]
push 4
call ERRREPORTEX
add esp, 20
.Lt_01BF:
.Lt_01BD:
jmp .Lt_01BB
.Lt_01BC:
push 0
push 0
push dword ptr [ebp+16]
push 0
push dword ptr [ebp-4]
call fb_StrLen
add esp, 8
push eax
push dword ptr [ebp-4]
push dword ptr [ebp+12]
call SYMBADDDEFINE
add esp, 24
.Lt_01BB:
jmp .Lt_01B9
.Lt_01BA:
push dword ptr [ebp+20]
call PPREADLITERALW
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp+8], 0
je .Lt_01C1
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+52]
test ecx, ecx
setg cl
shr ecx, 1
sbb ecx, ecx
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+24]
and ebx, 511
cmp ebx, 6
setne bl
shr ebx, 1
sbb ebx, ebx
or ecx, ebx
je .Lt_01C3
push 0
push 1
push 0
push dword ptr [ebp+12]
push 4
call ERRREPORTEX
add esp, 20
jmp .Lt_01C2
.Lt_01C3:
push dword ptr [ebp-8]
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+60]
call fb_WstrCompare
add esp, 8
test eax, eax
je .Lt_01C4
push 0
push 1
push 0
push dword ptr [ebp+12]
push 4
call ERRREPORTEX
add esp, 20
.Lt_01C4:
.Lt_01C2:
jmp .Lt_01C0
.Lt_01C1:
push 0
push 0
push dword ptr [ebp+16]
push dword ptr [ebp-8]
call fb_WstrLen
add esp, 4
push eax
push dword ptr [ebp-8]
push dword ptr [ebp+12]
call SYMBADDDEFINEW
add esp, 24
.Lt_01C0:
.Lt_01B9:
.Lt_01B8:
pop ebx
mov esp, ebp
pop ebp
ret
.size HREADDEFINETEXT, .-HREADDEFINETEXT
.balign 16
HMATCHPARAMELLIPSIS:
.type HMATCHPARAMELLIPSIS, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_01C5:
mov dword ptr [ebp-4], 0
push 34
call LEXGETTOKEN
add esp, 4
cmp eax, 46
jne .Lt_01C8
push 34
push 1
call LEXGETLOOKAHEAD
add esp, 8
cmp eax, 46
jne .Lt_01CA
push 34
push 2
call LEXGETLOOKAHEAD
add esp, 8
cmp eax, 46
jne .Lt_01CC
push 34
call LEXSKIPTOKEN
add esp, 4
push 34
call LEXSKIPTOKEN
add esp, 4
push 34
call LEXSKIPTOKEN
add esp, 4
mov dword ptr [ebp-4], -1
.Lt_01CC:
.Lt_01CB:
.Lt_01CA:
.Lt_01C9:
.Lt_01C8:
.Lt_01C7:
.Lt_01C6:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size HMATCHPARAMELLIPSIS, .-HMATCHPARAMELLIPSIS
	#FreeBASIC-1.01.0-source/src/compiler/pp-define.bas' compilation took 0.03804707387462258 secs

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

.section .rodata
.balign 4
Lt_0066:	.ascii	"expanding: \0"
.balign 4
Lt_00B7:	.ascii	"\"\0"
.balign 4
Lt_00B8:	.ascii	"$\"\0"
.balign 4
Lt_00B9:	.ascii	"\"\"\0"
.balign 4
Lt_00BA:	.ascii	"\"\"\0"
.balign 4
Lt_012A:	.ascii	"\44\0\0\0\42\0\0\0\0\0\0\0"
.balign 4
Lt_012B:	.ascii	"\42\0\0\0\0\0\0\0"
.balign 4
Lt_012C:	.ascii	"\42\0\0\0\42\0\0\0\0\0\0\0"
.balign 4
Lt_017D:	.ascii	"\n\0"
.balign 4
Lt_019D:	.ascii	" \0"
.balign 4
Lt_01B2:	.ascii	"#\0"

.section .ctors, "aw", @progbits
.int fb_ctor__ppzdefine
