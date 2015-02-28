	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/symb-define.bas' compilation started at 15:27:37 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl SYMBDEFINEINIT
SYMBDEFINEINIT:
.type SYMBDEFINEINIT, @function
push ebp
mov ebp, esp
sub esp, 80
push ebx
.Lt_00DD:
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
push 6
push 12
push 500
lea eax, [SYMB+98676]
push eax
call LISTINIT
add esp, 16
push 6
push 16
push 1000
lea eax, [SYMB+98708]
push eax
call LISTINIT
add esp, 16
mov dword ptr [ebp-56], 0
.Lt_00E2:
mov eax, dword ptr [ebp-56]
sal eax, 4
cmp dword ptr [DEFTB+eax], 0
jne .Lt_00E4
jmp .Lt_00E1
.Lt_00E4:
.Lt_00E3:
push 0
push 0
mov eax, dword ptr [ebp-56]
sal eax, 4
push dword ptr [DEFTB+eax+4]
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ebp-56]
sal eax, 4
cmp dword ptr [DEFTB+eax+4], 0
je .Lt_00E6
mov eax, dword ptr [ebp-56]
sal eax, 4
mov ebx, dword ptr [DEFTB+eax+8]
and ebx, 1
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_00E8
push 0
push -1
push 2
push offset Lt_00E9
push -1
push -1
lea ebx, [ebp-12]
push ebx
push 2
push offset Lt_00E9
mov dword ptr [ebp-68], 0
mov dword ptr [ebp-64], 0
mov dword ptr [ebp-60], 0
lea ebx, [ebp-68]
push ebx
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-80], 0
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
lea eax, [ebp-80]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
.Lt_00E8:
.Lt_00E7:
.Lt_00E6:
.Lt_00E5:
mov eax, dword ptr [ebp-56]
sal eax, 4
push dword ptr [DEFTB+eax+8]
mov eax, dword ptr [ebp-56]
sal eax, 4
push dword ptr [DEFTB+eax+12]
push 0
push -1
lea eax, [ebp-12]
push eax
call fb_StrLen
add esp, 8
push eax
push dword ptr [ebp-12]
mov eax, dword ptr [ebp-56]
sal eax, 4
push dword ptr [DEFTB+eax]
call SYMBADDDEFINE
add esp, 24
.Lt_00E0:
inc dword ptr [ebp-56]
.Lt_00DF:
cmp dword ptr [ebp-56], 33
jle .Lt_00E2
.Lt_00E1:
push 0
push 0
push 0
push 0
push 0
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
push 0
push -1
push 3
push offset Lt_00ED
push -1
push -1
push 0
push dword ptr [ENV+208]
call fb_StrAllocTempDescZ
add esp, 4
push eax
call fb_StrUcase2
add esp, 8
push eax
push 6
push offset Lt_00EC
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
lea eax, [ebp-28]
push eax
call fb_StrConcat
add esp, 20
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
lea eax, [ebp-52]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-52]
call SYMBADDDEFINE
add esp, 24
lea eax, [ebp-52]
push eax
call fb_StrDelete
add esp, 4
mov eax, dword ptr [ENV+224]
and eax, 1
je .Lt_00F2
push 0
push 0
push 0
push 0
push 0
push offset Lt_00F3
call SYMBADDDEFINE
add esp, 24
jmp .Lt_00F1
.Lt_00F2:
push 0
push 0
push 0
push 0
push 0
push offset Lt_00F4
call SYMBADDDEFINE
add esp, 24
.Lt_00F1:
call FBIS64BIT
test eax, eax
je .Lt_00F6
push 0
push 0
push 0
push 0
push 0
push offset Lt_00F7
call SYMBADDDEFINE
add esp, 24
.Lt_00F6:
.Lt_00F5:
call FBGETCPUFAMILY
mov dword ptr [ebp-56], eax
cmp dword ptr [ebp-56], 2
je .Lt_00FB
.Lt_00FC:
cmp dword ptr [ebp-56], 3
jne .Lt_00FA
.Lt_00FB:
push 0
push 0
push 0
push 0
push 0
push offset Lt_00FD
call SYMBADDDEFINE
add esp, 24
.Lt_00FA:
.Lt_00F8:
cmp dword ptr [ebp+8], 0
je .Lt_00FF
push 0
push 0
push 0
push 0
push 0
push offset Lt_0100
call SYMBADDDEFINE
add esp, 24
.Lt_00FF:
.Lt_00FE:
cmp dword ptr [ENV+116], 1
jl .Lt_0102
push 0
push 0
push 0
push 0
push 0
push offset Lt_0103
call SYMBADDDEFINE
add esp, 24
.Lt_0102:
.Lt_0101:
push 0
push -1
push dword ptr [ENV+124]
call fb_IntToStr
add esp, 4
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
push 0
push 0
push 0
push -1
lea eax, [ebp-12]
push eax
call fb_StrLen
add esp, 8
push eax
push dword ptr [ebp-12]
push offset Lt_0104
call SYMBADDDEFINE
add esp, 24
mov dword ptr [SYMB+98740], 0
push 0
push 32
lea eax, [SYMB+98744]
push eax
call HASHINIT
add esp, 12
lea eax, [ebp-12]
push eax
call fb_StrDelete
add esp, 4
.Lt_00DE:
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBDEFINEINIT, .-SYMBDEFINEINIT
.balign 16

.globl SYMBDEFINEEND
SYMBDEFINEEND:
.type SYMBDEFINEEND, @function
.Lt_0106:
lea eax, [SYMB+98744]
push eax
call HASHEND
add esp, 4
mov dword ptr [SYMB+98740], 0
lea eax, [SYMB+98676]
push eax
call LISTEND
add esp, 4
lea eax, [SYMB+98708]
push eax
call LISTEND
add esp, 4
.Lt_0107:
ret
.size SYMBDEFINEEND, .-SYMBDEFINEEND
.balign 16

.globl SYMBADDDEFINE
SYMBADDDEFINE:
.type SYMBADDDEFINE, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0108:
mov dword ptr [ebp-4], 0
push 0
push 0
push 3
push 0
push dword ptr [ebp+8]
push 5
lea eax, [SYMB+98416]
push eax
push 0
push 0
push 32
call SYMBNEWSYMBOL
add esp, 40
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_010B
jmp .Lt_0109
.Lt_010B:
.Lt_010A:
mov eax, dword ptr [ebp+16]
inc eax
mov ebx, eax
push ebx
call XALLOCATE
add esp, 4
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+60], eax
push 0
push 0
push dword ptr [ebp+12]
push 0
mov eax, dword ptr [ebp-8]
push dword ptr [eax+60]
call fb_StrAssign
add esp, 20
mov ebx, dword ptr [ebp+16]
mov eax, ebx
sar eax, 31
mov ecx, dword ptr [ebp-8]
mov dword ptr [ecx+36], ebx
mov dword ptr [ecx+40], eax
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+52], 0
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+56], 0
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebp+20]
mov dword ptr [ebx+64], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+24]
mov dword ptr [eax+72], ebx
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebp+28]
mov dword ptr [ebx+68], eax
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0109:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBADDDEFINE, .-SYMBADDDEFINE
.balign 16

.globl SYMBADDDEFINEW
SYMBADDDEFINEW:
.type SYMBADDDEFINEW, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_010C:
mov dword ptr [ebp-4], 0
push 0
push 0
push 6
push 0
push dword ptr [ebp+8]
push 5
lea eax, [SYMB+98416]
push eax
push 0
push 0
push 32
call SYMBNEWSYMBOL
add esp, 40
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_010F
jmp .Lt_010D
.Lt_010F:
.Lt_010E:
mov eax, dword ptr [ebp+16]
sal eax, 2
add eax, 4
mov ebx, eax
push ebx
call XALLOCATE
add esp, 4
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+60], eax
push dword ptr [ebp+12]
push 0
mov eax, dword ptr [ebp-8]
push dword ptr [eax+60]
call fb_WstrAssign
add esp, 12
mov ebx, dword ptr [ebp+16]
mov eax, ebx
sar eax, 31
mov ecx, dword ptr [ebp-8]
mov dword ptr [ecx+36], ebx
mov dword ptr [ecx+40], eax
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+52], 0
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+56], 0
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebp+20]
mov dword ptr [ebx+64], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+24]
mov dword ptr [eax+72], ebx
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebp+28]
mov dword ptr [ebx+68], eax
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_010D:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBADDDEFINEW, .-SYMBADDDEFINEW
.balign 16

.globl SYMBADDDEFINEMACRO
SYMBADDDEFINEMACRO:
.type SYMBADDDEFINEMACRO, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0110:
mov dword ptr [ebp-4], 0
push 0
push 0
push -2147483648
push 0
push dword ptr [ebp+8]
push 5
lea eax, [SYMB+98416]
push eax
push 0
push 0
push 32
call SYMBNEWSYMBOL
add esp, 40
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0113
jmp .Lt_0111
.Lt_0113:
.Lt_0112:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+12]
mov dword ptr [eax+60], ebx
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebp+16]
mov dword ptr [ebx+52], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+20]
mov dword ptr [eax+56], ebx
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+64], 0
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+72], 0
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebp+24]
mov dword ptr [ebx+68], eax
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0111:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBADDDEFINEMACRO, .-SYMBADDDEFINEMACRO
.balign 16

.globl SYMBADDDEFINEPARAM
SYMBADDDEFINEPARAM:
.type SYMBADDDEFINEPARAM, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_011B:
mov dword ptr [ebp-4], 0
lea eax, [SYMB+98676]
push eax
call LISTNEWNODE
add esp, 4
mov dword ptr [Lt_0125], eax
cmp dword ptr [ebp+8], 0
je .Lt_011E
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [Lt_0125]
mov dword ptr [eax+8], ebx
jmp .Lt_011D
.Lt_011E:
cmp dword ptr [SYMB+98740], 0
jle .Lt_0120
call HRESETDEFHASH
.Lt_0120:
.Lt_011F:
.Lt_011D:
push 0
push dword ptr [ebp+12]
call fb_StrLen
add esp, 8
inc eax
mov ebx, eax
push ebx
call XALLOCATE
add esp, 4
mov ebx, dword ptr [Lt_0125]
mov dword ptr [ebx], eax
mov eax, dword ptr [Lt_0125]
push dword ptr [eax]
push dword ptr [ebp+12]
call HUCASE
add esp, 8
mov eax, dword ptr [Lt_0125]
push dword ptr [eax]
call HASHHASH
add esp, 4
mov dword ptr [Lt_0126], eax
push dword ptr [Lt_0126]
mov eax, dword ptr [Lt_0125]
push dword ptr [eax]
lea eax, [SYMB+98744]
push eax
call HASHLOOKUPEX
add esp, 12
test eax, eax
je .Lt_0122
mov eax, dword ptr [Lt_0125]
cmp dword ptr [eax], 0
je .Lt_0124
mov eax, dword ptr [Lt_0125]
push dword ptr [eax]
call free
add esp, 4
.Lt_0124:
.Lt_0123:
push dword ptr [Lt_0125]
lea eax, [SYMB+98676]
push eax
call LISTDELNODE
add esp, 8
mov dword ptr [ebp-4], 0
jmp .Lt_011C
.Lt_0122:
.Lt_0121:
push dword ptr [Lt_0126]
push dword ptr [Lt_0125]
mov eax, dword ptr [Lt_0125]
push dword ptr [eax]
lea eax, [SYMB+98744]
push eax
call HASHADD
add esp, 16
mov ebx, dword ptr [SYMB+98740]
sal ebx, 3
mov ecx, offset SYMB + 98676
add ecx, ebx
mov dword ptr [ecx+80], eax
mov eax, dword ptr [SYMB+98740]
sal eax, 3
mov ecx, offset SYMB + 98676
add ecx, eax
mov eax, dword ptr [Lt_0126]
mov dword ptr [ecx+84], eax
mov eax, dword ptr [Lt_0125]
mov ecx, dword ptr [SYMB+98740]
mov dword ptr [eax+4], ecx
mov ecx, dword ptr [Lt_0125]
mov dword ptr [ecx+8], 0
inc dword ptr [SYMB+98740]
mov ecx, dword ptr [Lt_0125]
mov dword ptr [ebp-4], ecx
.Lt_011C:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBADDDEFINEPARAM, .-SYMBADDDEFINEPARAM

.section .bss
.balign 4
	.lcomm	Lt_0125,4
.balign 4
	.lcomm	Lt_0126,4

.section .text
.balign 16

.globl SYMBADDDEFINETOK
SYMBADDDEFINETOK:
.type SYMBADDDEFINETOK, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0127:
mov dword ptr [ebp-4], 0
lea eax, [SYMB+98708]
push eax
call LISTNEWNODE
add esp, 4
mov dword ptr [Lt_0131], eax
cmp dword ptr [ebp+8], 0
je .Lt_012A
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [Lt_0131]
mov dword ptr [eax+12], ebx
.Lt_012A:
.Lt_0129:
mov ebx, dword ptr [Lt_0131]
mov eax, dword ptr [ebp+8]
mov dword ptr [ebx+8], eax
mov eax, dword ptr [Lt_0131]
mov dword ptr [eax+12], 0
mov eax, dword ptr [Lt_0131]
mov ebx, dword ptr [ebp+12]
mov dword ptr [eax], ebx
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebp-8], ebx
jmp .Lt_012C
.Lt_012E:
mov ebx, dword ptr [Lt_0131]
mov dword ptr [ebx+4], 0
jmp .Lt_012B
.Lt_012F:
mov ebx, dword ptr [Lt_0131]
mov dword ptr [ebx+4], 0
jmp .Lt_012B
.Lt_012C:
mov ebx, dword ptr [ebp-8]
add ebx, 4294967294
cmp ebx, 1
ja .Lt_012B
mov ebx, dword ptr [ebp-8]
jmp dword ptr [.LT_0130+ebx*4-8]
.LT_0130:
.int .Lt_012E
.int .Lt_012F
.Lt_012B:
mov ebx, dword ptr [Lt_0131]
mov dword ptr [ebp-4], ebx
.Lt_0128:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBADDDEFINETOK, .-SYMBADDDEFINETOK

.section .bss
.balign 4
	.lcomm	Lt_0131,4

.section .text
.balign 16

.globl SYMBDELDEFINETOK
SYMBDELDEFINETOK:
.type SYMBDELDEFINETOK, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0132:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+8], 0
je .Lt_0135
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+8]
mov dword ptr [ebx+12], 0
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+8]
mov dword ptr [ebp-4], eax
jmp .Lt_0134
.Lt_0135:
mov dword ptr [ebp-4], 0
.Lt_0134:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-8], ebx
cmp dword ptr [ebp-8], 2
jne .Lt_0138
.Lt_0139:
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx+4], 0
je .Lt_013B
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+4]
call free
add esp, 4
.Lt_013B:
.Lt_013A:
jmp .Lt_0136
.Lt_0138:
cmp dword ptr [ebp-8], 3
jne .Lt_013C
.Lt_013D:
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx+4], 0
je .Lt_013F
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+4]
call free
add esp, 4
.Lt_013F:
.Lt_013E:
.Lt_013C:
.Lt_0136:
push dword ptr [ebp+8]
lea ebx, [SYMB+98708]
push ebx
call LISTDELNODE
add esp, 8
.Lt_0133:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBDELDEFINETOK, .-SYMBDELDEFINETOK
.balign 16

.globl SYMBDELDEFINE
SYMBDELDEFINE:
.type SYMBDELDEFINE, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_014A:
mov dword ptr [ebp-4], 0
cmp dword ptr [ebp+8], 0
jne .Lt_014D
jmp .Lt_014B
.Lt_014D:
.Lt_014C:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+52], 0
jne .Lt_014F
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+24]
and ebx, 511
cmp ebx, 6
je .Lt_0151
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx+60], 0
je .Lt_0153
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+60]
call free
add esp, 4
.Lt_0153:
.Lt_0152:
jmp .Lt_0150
.Lt_0151:
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx+60], 0
je .Lt_0155
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+60]
call free
add esp, 4
.Lt_0155:
.Lt_0154:
.Lt_0150:
jmp .Lt_014E
.Lt_014F:
push dword ptr [ebp+8]
call HDELDEFINETOKENS
add esp, 4
.Lt_014E:
push dword ptr [ebp+8]
call HDELDEFINEPARAMS
add esp, 4
push dword ptr [ebp+8]
call SYMBFREESYMBOL
add esp, 4
mov dword ptr [ebp-4], -1
.Lt_014B:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBDELDEFINE, .-SYMBDELDEFINE
.balign 16
fb_ctor__symbzdefine:
.type fb_ctor__symbzdefine, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__symbzdefine, .-fb_ctor__symbzdefine
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
HDEFFILE_CB:
.type HDEFFILE_CB, @function
push ebp
mov ebp, esp
sub esp, 12
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_0083:
push 0
push 261
lea eax, [ENV+244]
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
.Lt_0084:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
mov esp, ebp
pop ebp
ret
.size HDEFFILE_CB, .-HDEFFILE_CB
.balign 16
HDEFPATH_CB:
.type HDEFPATH_CB, @function
push ebp
mov ebp, esp
sub esp, 12
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_0085:
push 0
push -1
call FBGETINPUTFILEPARENTDIR
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
.Lt_0086:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
mov esp, ebp
pop ebp
ret
.size HDEFPATH_CB, .-HDEFPATH_CB
.balign 16
HDEFFUNCTION_CB:
.type HDEFFUNCTION_CB, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_0087:
mov eax, dword ptr [PARSER+100]
mov ebx, dword ptr [eax+8]
and ebx, 4096
test ebx, ebx
je .Lt_008A
push 0
push 16
push offset Lt_001D
push -1
lea ebx, [ebp-12]
push ebx
call fb_StrAssign
add esp, 20
jmp .Lt_0089
.Lt_008A:
mov ebx, dword ptr [PARSER+100]
mov eax, dword ptr [ebx+8]
and eax, 8192
test eax, eax
je .Lt_008B
push 0
push 20
push offset Lt_001E
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
jmp .Lt_0089
.Lt_008B:
push 0
push 0
push dword ptr [PARSER+100]
call SYMBGETFULLPROCNAME
add esp, 4
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
.Lt_0089:
.Lt_0088:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
pop ebx
mov esp, ebp
pop ebp
ret
.size HDEFFUNCTION_CB, .-HDEFFUNCTION_CB
.balign 16
HDEFLINE_CB:
.type HDEFLINE_CB, @function
push ebp
mov ebp, esp
sub esp, 12
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_008C:
push 0
push -1
mov eax, dword ptr [LEX+839664]
push dword ptr [eax+16548]
call fb_IntToStr
add esp, 4
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
.Lt_008D:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
mov esp, ebp
pop ebp
ret
.size HDEFLINE_CB, .-HDEFLINE_CB
.balign 16
HDEFDATE_CB:
.type HDEFDATE_CB, @function
push ebp
mov ebp, esp
sub esp, 12
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_008E:
push 0
push -1
call fb_Date
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
.Lt_008F:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
mov esp, ebp
pop ebp
ret
.size HDEFDATE_CB, .-HDEFDATE_CB
.balign 16
HDEFDATEISO_CB:
.type HDEFDATEISO_CB, @function
push ebp
mov ebp, esp
sub esp, 24
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_0090:
push 0
push -1
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
push 0
push 11
push offset Lt_0092
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-24]
push eax
call fb_Now
sub esp,8
fstp qword ptr [esp]
call fb_StrFormat
add esp, 12
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
.Lt_0091:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
mov esp, ebp
pop ebp
ret
.size HDEFDATEISO_CB, .-HDEFDATEISO_CB
.balign 16
HDEFTIME_CB:
.type HDEFTIME_CB, @function
push ebp
mov ebp, esp
sub esp, 12
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_0094:
push 0
push -1
call fb_Time
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
.Lt_0095:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
mov esp, ebp
pop ebp
ret
.size HDEFTIME_CB, .-HDEFTIME_CB
.balign 16
HDEFMULTITHREAD_CB:
.type HDEFMULTITHREAD_CB, @function
push ebp
mov ebp, esp
sub esp, 12
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_0096:
push 0
push -1
push dword ptr [ENV+192]
call fb_IntToStr
add esp, 4
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
.Lt_0097:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
mov esp, ebp
pop ebp
ret
.size HDEFMULTITHREAD_CB, .-HDEFMULTITHREAD_CB
.balign 16
HDEFOPTBYVAL_CB:
.type HDEFOPTBYVAL_CB, @function
push ebp
mov ebp, esp
sub esp, 12
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_0098:
push 0
push -1
cmp dword ptr [ENV+872], 1
sete al
shr eax, 1
sbb eax, eax
push eax
call fb_IntToStr
add esp, 4
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
.Lt_0099:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
mov esp, ebp
pop ebp
ret
.size HDEFOPTBYVAL_CB, .-HDEFOPTBYVAL_CB
.balign 16
HDEFOPTDYNAMIC_CB:
.type HDEFOPTDYNAMIC_CB, @function
push ebp
mov ebp, esp
sub esp, 12
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_009A:
push 0
push -1
cmp dword ptr [ENV+888], -1
sete al
shr eax, 1
sbb eax, eax
push eax
call fb_IntToStr
add esp, 4
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
.Lt_009B:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
mov esp, ebp
pop ebp
ret
.size HDEFOPTDYNAMIC_CB, .-HDEFOPTDYNAMIC_CB
.balign 16
HDEFOPTESCAPE_CB:
.type HDEFOPTESCAPE_CB, @function
push ebp
mov ebp, esp
sub esp, 12
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_009C:
push 0
push -1
cmp dword ptr [ENV+884], -1
sete al
shr eax, 1
sbb eax, eax
push eax
call fb_IntToStr
add esp, 4
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
.Lt_009D:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
mov esp, ebp
pop ebp
ret
.size HDEFOPTESCAPE_CB, .-HDEFOPTESCAPE_CB
.balign 16
HDEFOPTEXPLICIT_CB:
.type HDEFOPTEXPLICIT_CB, @function
push ebp
mov ebp, esp
sub esp, 12
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_009E:
push 0
push -1
cmp dword ptr [ENV+876], -1
sete al
shr eax, 1
sbb eax, eax
push eax
call fb_IntToStr
add esp, 4
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
.Lt_009F:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
mov esp, ebp
pop ebp
ret
.size HDEFOPTEXPLICIT_CB, .-HDEFOPTEXPLICIT_CB
.balign 16
HDEFOPTPRIVATE_CB:
.type HDEFOPTPRIVATE_CB, @function
push ebp
mov ebp, esp
sub esp, 12
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_00A0:
push 0
push -1
cmp dword ptr [ENV+880], 0
sete al
shr eax, 1
sbb eax, eax
push eax
call fb_IntToStr
add esp, 4
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
.Lt_00A1:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
mov esp, ebp
pop ebp
ret
.size HDEFOPTPRIVATE_CB, .-HDEFOPTPRIVATE_CB
.balign 16
HDEFOPTGOSUB_CB:
.type HDEFOPTGOSUB_CB, @function
push ebp
mov ebp, esp
sub esp, 12
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_00A2:
push 0
push -1
cmp dword ptr [ENV+892], -1
sete al
shr eax, 1
sbb eax, eax
push eax
call fb_IntToStr
add esp, 4
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
.Lt_00A3:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
mov esp, ebp
pop ebp
ret
.size HDEFOPTGOSUB_CB, .-HDEFOPTGOSUB_CB
.balign 16
HDEFOUTEXE_CB:
.type HDEFOUTEXE_CB, @function
push ebp
mov ebp, esp
sub esp, 12
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_00A4:
push 0
push -1
cmp dword ptr [ENV+96], 0
sete al
shr eax, 1
sbb eax, eax
push eax
call fb_IntToStr
add esp, 4
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
.Lt_00A5:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
mov esp, ebp
pop ebp
ret
.size HDEFOUTEXE_CB, .-HDEFOUTEXE_CB
.balign 16
HDEFOUTLIB_CB:
.type HDEFOUTLIB_CB, @function
push ebp
mov ebp, esp
sub esp, 12
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_00A6:
push 0
push -1
cmp dword ptr [ENV+96], 1
sete al
shr eax, 1
sbb eax, eax
push eax
call fb_IntToStr
add esp, 4
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
.Lt_00A7:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
mov esp, ebp
pop ebp
ret
.size HDEFOUTLIB_CB, .-HDEFOUTLIB_CB
.balign 16
HDEFOUTDLL_CB:
.type HDEFOUTDLL_CB, @function
push ebp
mov ebp, esp
sub esp, 12
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_00A8:
push 0
push -1
cmp dword ptr [ENV+96], 2
sete al
shr eax, 1
sbb eax, eax
push eax
call fb_IntToStr
add esp, 4
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
.Lt_00A9:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
mov esp, ebp
pop ebp
ret
.size HDEFOUTDLL_CB, .-HDEFOUTDLL_CB
.balign 16
HDEFOUTOBJ_CB:
.type HDEFOUTOBJ_CB, @function
push ebp
mov ebp, esp
sub esp, 12
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_00AA:
push 0
push -1
cmp dword ptr [ENV+96], 3
sete al
shr eax, 1
sbb eax, eax
push eax
call fb_IntToStr
add esp, 4
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
.Lt_00AB:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
mov esp, ebp
pop ebp
ret
.size HDEFOUTOBJ_CB, .-HDEFOUTOBJ_CB
.balign 16
HDEFDEBUG_CB:
.type HDEFDEBUG_CB, @function
push ebp
mov ebp, esp
sub esp, 12
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_00AC:
push 0
push -1
push dword ptr [ENV+144]
call fb_IntToStr
add esp, 4
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
.Lt_00AD:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
mov esp, ebp
pop ebp
ret
.size HDEFDEBUG_CB, .-HDEFDEBUG_CB
.balign 16
HDEFERR_CB:
.type HDEFERR_CB, @function
push ebp
mov ebp, esp
sub esp, 16
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_00AE:
mov dword ptr [ebp-16], 0
cmp dword ptr [ENV+148], 0
je .Lt_00B1
mov dword ptr [ebp-16], 1
.Lt_00B1:
.Lt_00B0:
cmp dword ptr [ENV+152], 0
je .Lt_00B3
or dword ptr [ebp-16], 2
.Lt_00B3:
.Lt_00B2:
cmp dword ptr [ENV+156], 0
je .Lt_00B5
or dword ptr [ebp-16], 4
.Lt_00B5:
.Lt_00B4:
push 0
push -1
push dword ptr [ebp-16]
call fb_IntToStr
add esp, 4
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
.Lt_00AF:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
mov esp, ebp
pop ebp
ret
.size HDEFERR_CB, .-HDEFERR_CB
.balign 16
HDEFLANG_CB:
.type HDEFLANG_CB, @function
push ebp
mov ebp, esp
sub esp, 12
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_00B6:
push 0
push -1
push dword ptr [ENV+136]
call FBGETLANGNAME
add esp, 4
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
.Lt_00B7:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
mov esp, ebp
pop ebp
ret
.size HDEFLANG_CB, .-HDEFLANG_CB
.balign 16
HDEFBACKEND_CB:
.type HDEFBACKEND_CB, @function
push ebp
mov ebp, esp
sub esp, 16
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_00B8:
mov eax, dword ptr [ENV+104]
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 0
jne .Lt_00BC
.Lt_00BD:
push 0
push 4
push offset Lt_00BE
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
jmp .Lt_00BA
.Lt_00BC:
cmp dword ptr [ebp-16], 1
jne .Lt_00BF
.Lt_00C0:
push 0
push 4
push offset Lt_00C1
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
jmp .Lt_00BA
.Lt_00BF:
cmp dword ptr [ebp-16], 2
jne .Lt_00C2
.Lt_00C3:
push 0
push 5
push offset Lt_00C4
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
.Lt_00C2:
.Lt_00BA:
.Lt_00B9:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
mov esp, ebp
pop ebp
ret
.size HDEFBACKEND_CB, .-HDEFBACKEND_CB
.balign 16
HDEFFPU_CB:
.type HDEFFPU_CB, @function
push ebp
mov ebp, esp
sub esp, 16
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_00C5:
push 5
call FBGETOPTION
add esp, 4
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 0
jne .Lt_00C9
.Lt_00CA:
push 0
push 4
push offset Lt_00CB
push -1
lea eax, [ebp-12]
push eax
call fb_StrInit
add esp, 20
jmp .Lt_00C6
jmp .Lt_00C7
.Lt_00C9:
cmp dword ptr [ebp-16], 1
jne .Lt_00CC
.Lt_00CD:
push 0
push 4
push offset Lt_00CE
push -1
lea eax, [ebp-12]
push eax
call fb_StrInit
add esp, 20
jmp .Lt_00C6
.Lt_00CC:
.Lt_00CF:
.Lt_00C7:
.Lt_00C6:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
mov esp, ebp
pop ebp
ret
.size HDEFFPU_CB, .-HDEFFPU_CB
.balign 16
HDEFFPMODE_CB:
.type HDEFFPMODE_CB, @function
push ebp
mov ebp, esp
sub esp, 16
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_00D0:
push 6
call FBGETOPTION
add esp, 4
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 0
jne .Lt_00D4
.Lt_00D5:
push 0
push 8
push offset Lt_00D6
push -1
lea eax, [ebp-12]
push eax
call fb_StrInit
add esp, 20
jmp .Lt_00D1
jmp .Lt_00D2
.Lt_00D4:
cmp dword ptr [ebp-16], 1
jne .Lt_00D7
.Lt_00D8:
push 0
push 5
push offset Lt_00D9
push -1
lea eax, [ebp-12]
push eax
call fb_StrInit
add esp, 20
jmp .Lt_00D1
.Lt_00D7:
.Lt_00DA:
.Lt_00D2:
.Lt_00D1:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
mov esp, ebp
pop ebp
ret
.size HDEFFPMODE_CB, .-HDEFFPMODE_CB
.balign 16
HDEFGCC_CB:
.type HDEFGCC_CB, @function
push ebp
mov ebp, esp
sub esp, 12
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_00DB:
push 0
push -1
cmp dword ptr [ENV+104], 1
sete al
shr eax, 1
sbb eax, eax
push eax
call fb_IntToStr
add esp, 4
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
.Lt_00DC:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
mov esp, ebp
pop ebp
ret
.size HDEFGCC_CB, .-HDEFGCC_CB
.balign 16
HRESETDEFHASH:
.type HRESETDEFHASH, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_0114:
mov dword ptr [ebp-4], 0
mov dword ptr [ebp-4], 0
mov eax, dword ptr [SYMB+98740]
dec eax
mov dword ptr [ebp-8], eax
jmp .Lt_0117
.Lt_011A:
mov eax, dword ptr [ebp-4]
sal eax, 3
mov ebx, offset SYMB + 98676
add ebx, eax
push dword ptr [ebx+84]
mov ebx, dword ptr [ebp-4]
sal ebx, 3
mov eax, offset SYMB + 98676
add eax, ebx
push dword ptr [eax+80]
lea eax, [SYMB+98744]
push eax
call HASHDEL
add esp, 12
.Lt_0118:
inc dword ptr [ebp-4]
.Lt_0117:
mov eax, dword ptr [ebp-8]
cmp dword ptr [ebp-4], eax
jle .Lt_011A
.Lt_0119:
mov dword ptr [SYMB+98740], 0
.Lt_0115:
pop ebx
mov esp, ebp
pop ebp
ret
.size HRESETDEFHASH, .-HRESETDEFHASH
.balign 16
HDELDEFINEPARAMS:
.type HDELDEFINEPARAMS, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_0140:
mov dword ptr [ebp-4], 0
mov dword ptr [ebp-8], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-4], ebx
.Lt_0142:
cmp dword ptr [ebp-4], 0
je .Lt_0143
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebx+8]
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-4]
cmp dword ptr [eax], 0
je .Lt_0145
mov eax, dword ptr [ebp-4]
push dword ptr [eax]
call free
add esp, 4
.Lt_0145:
.Lt_0144:
push dword ptr [ebp-4]
lea eax, [SYMB+98676]
push eax
call LISTDELNODE
add esp, 8
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
jmp .Lt_0142
.Lt_0143:
.Lt_0141:
pop ebx
mov esp, ebp
pop ebp
ret
.size HDELDEFINEPARAMS, .-HDELDEFINEPARAMS
.balign 16
HDELDEFINETOKENS:
.type HDELDEFINETOKENS, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_0146:
mov dword ptr [ebp-4], 0
mov dword ptr [ebp-8], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+60]
mov dword ptr [ebp-4], ebx
.Lt_0148:
cmp dword ptr [ebp-4], 0
je .Lt_0149
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebx+12]
mov dword ptr [ebp-8], eax
push dword ptr [ebp-4]
call SYMBDELDEFINETOK
add esp, 4
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
jmp .Lt_0148
.Lt_0149:
.Lt_0147:
pop ebx
mov esp, ebp
pop ebp
ret
.size HDELDEFINETOKENS, .-HDELDEFINETOKENS
	#fbc-1.01.0/src/compiler/symb-define.bas' compilation took 0.03135806962382048 secs

.section .rodata
.balign 4
Lt_0004:	.ascii	"1\0"
.balign 4
Lt_0005:	.ascii	"01\0"
.balign 4
Lt_0006:	.ascii	"0\0"
.balign 4
Lt_000B:	.ascii	"1.01.0\0"
.balign 4
Lt_000C:	.ascii	"02-28-2015\0"
.balign 4
Lt_000E:	.ascii	"FreeBASIC 1.01.0\0"
.balign 4
Lt_001D:	.ascii	"__FB_MAINPROC__\0"
.balign 4
Lt_001E:	.ascii	"__FB_MODLEVELPROC__\0"

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

.section .data
.balign 4
DEFTB:
.int Lt_0062
.int Lt_000B
.int 0
.long 0
.int Lt_0063
.int Lt_000C
.int 0
.long 0
.int Lt_0064
.int Lt_0004
.int 1
.long 0
.int Lt_0065
.int Lt_0005
.int 1
.long 0
.int Lt_0066
.int Lt_0006
.int 1
.long 0
.int Lt_0067
.int Lt_000E
.int 0
.long 0
.int Lt_0068
.long 0
.int 1
.int HDEFMULTITHREAD_CB
.int Lt_0069
.long 0
.int 0
.int HDEFFILE_CB
.int Lt_006A
.long 0
.int 1
.int HDEFFILE_CB
.int Lt_006B
.long 0
.int 0
.int HDEFFUNCTION_CB
.int Lt_006C
.long 0
.int 1
.int HDEFFUNCTION_CB
.int Lt_006D
.long 0
.int 1
.int HDEFLINE_CB
.int Lt_006E
.long 0
.int 0
.int HDEFDATE_CB
.int Lt_006F
.long 0
.int 0
.int HDEFDATEISO_CB
.int Lt_0070
.long 0
.int 0
.int HDEFTIME_CB
.int Lt_0071
.long 0
.int 0
.int HDEFPATH_CB
.int Lt_0072
.long 0
.int 1
.int HDEFOPTBYVAL_CB
.int Lt_0073
.long 0
.int 1
.int HDEFOPTDYNAMIC_CB
.int Lt_0074
.long 0
.int 1
.int HDEFOPTESCAPE_CB
.int Lt_0075
.long 0
.int 1
.int HDEFOPTEXPLICIT_CB
.int Lt_0076
.long 0
.int 1
.int HDEFOPTPRIVATE_CB
.int Lt_0077
.long 0
.int 1
.int HDEFOPTGOSUB_CB
.int Lt_0078
.long 0
.int 1
.int HDEFOUTEXE_CB
.int Lt_0079
.long 0
.int 1
.int HDEFOUTLIB_CB
.int Lt_007A
.long 0
.int 1
.int HDEFOUTDLL_CB
.int Lt_007B
.long 0
.int 1
.int HDEFOUTOBJ_CB
.int Lt_007C
.long 0
.int 1
.int HDEFDEBUG_CB
.int Lt_007D
.long 0
.int 1
.int HDEFERR_CB
.int Lt_007E
.long 0
.int 0
.int HDEFLANG_CB
.int Lt_007F
.long 0
.int 0
.int HDEFBACKEND_CB
.int Lt_0080
.long 0
.int 0
.int HDEFFPU_CB
.int Lt_0081
.long 0
.int 0
.int HDEFFPMODE_CB
.int Lt_0082
.long 0
.int 1
.int HDEFGCC_CB
.long 0
.skip 12,0

.section .rodata
.balign 4
Lt_0062:	.ascii	"__FB_VERSION__\0"
.balign 4
Lt_0063:	.ascii	"__FB_BUILD_DATE__\0"
.balign 4
Lt_0064:	.ascii	"__FB_VER_MAJOR__\0"
.balign 4
Lt_0065:	.ascii	"__FB_VER_MINOR__\0"
.balign 4
Lt_0066:	.ascii	"__FB_VER_PATCH__\0"
.balign 4
Lt_0067:	.ascii	"__FB_SIGNATURE__\0"
.balign 4
Lt_0068:	.ascii	"__FB_MT__\0"
.balign 4
Lt_0069:	.ascii	"__FILE__\0"
.balign 4
Lt_006A:	.ascii	"__FILE_NQ__\0"
.balign 4
Lt_006B:	.ascii	"__FUNCTION__\0"
.balign 4
Lt_006C:	.ascii	"__FUNCTION_NQ__\0"
.balign 4
Lt_006D:	.ascii	"__LINE__\0"
.balign 4
Lt_006E:	.ascii	"__DATE__\0"
.balign 4
Lt_006F:	.ascii	"__DATE_ISO__\0"
.balign 4
Lt_0070:	.ascii	"__TIME__\0"
.balign 4
Lt_0071:	.ascii	"__PATH__\0"
.balign 4
Lt_0072:	.ascii	"__FB_OPTION_BYVAL__\0"
.balign 4
Lt_0073:	.ascii	"__FB_OPTION_DYNAMIC__\0"
.balign 4
Lt_0074:	.ascii	"__FB_OPTION_ESCAPE__\0"
.balign 4
Lt_0075:	.ascii	"__FB_OPTION_EXPLICIT__\0"
.balign 4
Lt_0076:	.ascii	"__FB_OPTION_PRIVATE__\0"
.balign 4
Lt_0077:	.ascii	"__FB_OPTION_GOSUB__\0"
.balign 4
Lt_0078:	.ascii	"__FB_OUT_EXE__\0"
.balign 4
Lt_0079:	.ascii	"__FB_OUT_LIB__\0"
.balign 4
Lt_007A:	.ascii	"__FB_OUT_DLL__\0"
.balign 4
Lt_007B:	.ascii	"__FB_OUT_OBJ__\0"
.balign 4
Lt_007C:	.ascii	"__FB_DEBUG__\0"
.balign 4
Lt_007D:	.ascii	"__FB_ERR__\0"
.balign 4
Lt_007E:	.ascii	"__FB_LANG__\0"
.balign 4
Lt_007F:	.ascii	"__FB_BACKEND__\0"
.balign 4
Lt_0080:	.ascii	"__FB_FPU__\0"
.balign 4
Lt_0081:	.ascii	"__FB_FPMODE__\0"
.balign 4
Lt_0082:	.ascii	"__FB_GCC__\0"
.balign 4
Lt_0092:	.ascii	"yyyy-mm-dd\0"
.balign 4
Lt_00BE:	.ascii	"gas\0"
.balign 4
Lt_00C1:	.ascii	"gcc\0"
.balign 4
Lt_00C4:	.ascii	"llvm\0"
.balign 4
Lt_00CB:	.ascii	"x87\0"
.balign 4
Lt_00CE:	.ascii	"sse\0"
.balign 4
Lt_00D6:	.ascii	"precise\0"
.balign 4
Lt_00D9:	.ascii	"fast\0"
.balign 4
Lt_00E9:	.ascii	"\"\0"
.balign 4
Lt_00EC:	.ascii	"__FB_\0"
.balign 4
Lt_00ED:	.ascii	"__\0"
.balign 4
Lt_00F3:	.ascii	"__FB_UNIX__\0"
.balign 4
Lt_00F4:	.ascii	"__FB_PCOS__\0"
.balign 4
Lt_00F7:	.ascii	"__FB_64BIT__\0"
.balign 4
Lt_00FD:	.ascii	"__FB_ARM__\0"
.balign 4
Lt_0100:	.ascii	"__FB_MAIN__\0"
.balign 4
Lt_0103:	.ascii	"__FB_SSE__\0"
.balign 4
Lt_0104:	.ascii	"__FB_VECTORIZE__\0"

.section .ctors, "aw", @progbits
.int fb_ctor__symbzdefine
