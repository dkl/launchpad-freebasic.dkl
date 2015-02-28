	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/objinfo.bas' compilation started at 14:16:35 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl OBJINFOREADOBJ
OBJINFOREADOBJ:
.type OBJINFOREADOBJ, @function
push ebp
mov ebp, esp
.Lt_0103:
push dword ptr [ebp+8]
call OBJINFOINIT
add esp, 4
push offset OBJDATA
push dword ptr [ebp+8]
call HLOADFILE
add esp, 8
cmp dword ptr [OBJDATA+4], 0
jne .Lt_0106
jmp .Lt_0104
.Lt_0106:
.Lt_0105:
call HLOADFBCTINFFROMOBJ
.Lt_0104:
mov esp, ebp
pop ebp
ret
.size OBJINFOREADOBJ, .-OBJINFOREADOBJ
.balign 16

.globl OBJINFOREADLIBFILE
OBJINFOREADLIBFILE:
.type OBJINFOREADLIBFILE, @function
push ebp
mov ebp, esp
.Lt_0107:
push dword ptr [ebp+8]
call OBJINFOINIT
add esp, 4
push offset ARDATA
push dword ptr [ebp+8]
call HLOADFILE
add esp, 8
cmp dword ptr [ARDATA+4], 0
jne .Lt_010A
jmp .Lt_0108
.Lt_010A:
.Lt_0109:
call HLOADOBJFROMAR
cmp dword ptr [OBJDATA+4], 0
jne .Lt_010C
jmp .Lt_0108
.Lt_010C:
.Lt_010B:
call HLOADFBCTINFFROMOBJ
.Lt_0108:
mov esp, ebp
pop ebp
ret
.size OBJINFOREADLIBFILE, .-OBJINFOREADLIBFILE
.balign 16

.globl OBJINFOREADLIB
OBJINFOREADLIB:
.type OBJINFOREADLIB, @function
push ebp
mov ebp, esp
sub esp, 52
push ebx
.Lt_010D:
push 0
push -1
push 3
push offset Lt_0110
push -1
push -1
push dword ptr [ebp+8]
push 4
push offset Lt_010F
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
lea eax, [ebp-16]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
lea eax, [ebp-28]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_011B
call fb_StrAssign
add esp, 20
push dword ptr [ebp+12]
call LISTGETHEAD
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_0113:
cmp dword ptr [ebp-4], 0
je .Lt_0114
push 0
push -1
push -1
push offset Lt_011B
push -1
push 2
push offset Lt_0019
push -1
mov eax, dword ptr [ebp-4]
lea ebx, [eax]
push ebx
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
lea ebx, [ebp-40]
push ebx
call fb_StrConcat
add esp, 20
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
push offset Lt_011C
call fb_StrAssign
add esp, 20
push dword ptr [Lt_011C]
call HFILEEXISTS
add esp, 4
test eax, eax
je .Lt_0118
jmp .Lt_0114
.Lt_0118:
.Lt_0117:
push dword ptr [ebp-4]
call LISTGETNEXT
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_0113
.Lt_0114:
cmp dword ptr [ebp-4], 0
jne .Lt_011A
jmp .Lt_010E
.Lt_011A:
.Lt_0119:
push offset Lt_011C
call OBJINFOREADLIBFILE
add esp, 4
.Lt_010E:
pop ebx
mov esp, ebp
pop ebp
ret
.size OBJINFOREADLIB, .-OBJINFOREADLIB

.section .bss
.balign 4
	.lcomm	Lt_011C,12
.balign 4
	.lcomm	Lt_011B,12

.section .text
.balign 16

.globl OBJINFOREADNEXT
OBJINFOREADNEXT:
.type OBJINFOREADNEXT, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
mov dword ptr [ebp-4], 0
.Lt_0123:
cmp dword ptr [FBCTINF+4], 0
jg .Lt_0126
mov dword ptr [ebp-4], -1
jmp .Lt_0124
.Lt_0126:
.Lt_0125:
cmp dword ptr [PARSER+16], 0
je .Lt_0128
.Lt_0129:
mov eax, dword ptr [FBCTINF+4]
cmp dword ptr [PARSER], eax
jge .Lt_012A
cmp dword ptr [PARSER+20], 0
jge .Lt_012C
mov eax, dword ptr [FBCTINF]
add eax, dword ptr [PARSER]
movzx ebx, byte ptr [eax]
mov dword ptr [PARSER+20], ebx
inc dword ptr [PARSER]
mov ebx, dword ptr [PARSER+20]
test ebx, ebx
setle bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [PARSER+20]
cmp eax, 3
setg al
shr eax, 1
sbb eax, eax
or ebx, eax
je .Lt_012E
mov dword ptr [PARSER+20], -1
mov eax, dword ptr [FBCTINF+4]
mov dword ptr [PARSER], eax
mov dword ptr [ebp-4], -1
jmp .Lt_0124
.Lt_012E:
.Lt_012D:
.Lt_012C:
.Lt_012B:
mov eax, dword ptr [FBCTINF+4]
cmp dword ptr [PARSER], eax
jl .Lt_0130
mov dword ptr [ebp-4], -1
jmp .Lt_0124
.Lt_0130:
.Lt_012F:
inc dword ptr [PARSER]
mov eax, dword ptr [FBCTINF]
add eax, dword ptr [PARSER]
movzx ebx, byte ptr [eax-1]
test ebx, ebx
jne .Lt_0132
mov dword ptr [PARSER+20], -1
jmp .Lt_0129
.Lt_0132:
.Lt_0131:
push 0
push 0
call HGETNEXTSTRING
push eax
push -1
push dword ptr [ebp+8]
call fb_StrAssign
add esp, 20
mov eax, dword ptr [PARSER+20]
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 1
jne .Lt_0135
.Lt_0136:
mov dword ptr [ebp-4], 0
jmp .Lt_0124
jmp .Lt_0133
.Lt_0135:
cmp dword ptr [ebp-8], 2
jne .Lt_0137
.Lt_0138:
mov dword ptr [ebp-4], 1
jmp .Lt_0124
jmp .Lt_0133
.Lt_0137:
cmp dword ptr [ebp-8], 3
jne .Lt_0139
.Lt_013A:
push 0
push -1
push dword ptr [ebp+8]
push -1
lea eax, [ebp-20]
push eax
call fb_StrInit
add esp, 20
push 6
push offset Lt_00FE
push -1
lea eax, [ebp-20]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_013D
.Lt_013E:
push 0
push 0
call HGETNEXTSTRING
push eax
push -1
push dword ptr [ebp+8]
call fb_StrAssign
add esp, 20
push -1
push dword ptr [ebp+8]
call fb_StrLen
add esp, 8
test eax, eax
jle .Lt_0140
mov dword ptr [ebp-4], 4
lea eax, [ebp-20]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0124
.Lt_0140:
.Lt_013F:
jmp .Lt_013B
.Lt_013D:
push 4
push offset Lt_00FC
push -1
lea eax, [ebp-20]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_0141
.Lt_0142:
mov dword ptr [ebp-4], 2
lea eax, [ebp-20]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0124
.Lt_0141:
.Lt_013B:
lea eax, [ebp-20]
push eax
call fb_StrDelete
add esp, 4
.Lt_0139:
.Lt_0133:
jmp .Lt_0129
.Lt_012A:
jmp .Lt_0127
.Lt_0128:
push 0
push 0
call HGETNEXTSTRING
push eax
push -1
push dword ptr [ebp+8]
call fb_StrAssign
add esp, 20
mov dword ptr [ebp-8], 0
.Lt_0146:
push 0
mov eax, dword ptr [ebp-8]
push dword ptr [ENTRIES+eax*8]
push -1
push dword ptr [ebp+8]
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_0148
mov eax, dword ptr [ebp-8]
cmp dword ptr [ENTRIES+eax*8+4], 0
je .Lt_014A
push 0
push 0
call HGETNEXTSTRING
push eax
push -1
push dword ptr [ebp+8]
call fb_StrAssign
add esp, 20
.Lt_014A:
.Lt_0149:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
jmp .Lt_0124
.Lt_0148:
.Lt_0147:
.Lt_0144:
inc dword ptr [ebp-8]
.Lt_0143:
cmp dword ptr [ebp-8], 4
jle .Lt_0146
.Lt_0145:
.Lt_0127:
mov dword ptr [ebp-4], -1
.Lt_0124:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size OBJINFOREADNEXT, .-OBJINFOREADNEXT
.balign 16

.globl OBJINFOGETFILENAME
OBJINFOGETFILENAME:
.type OBJINFOGETFILENAME, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_014D:
mov eax, dword ptr [PARSER+4]
mov dword ptr [ebp-4], eax
.Lt_014E:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size OBJINFOGETFILENAME, .-OBJINFOGETFILENAME
.balign 16

.globl OBJINFOREADEND
OBJINFOREADEND:
.type OBJINFOREADEND, @function
.Lt_014F:
cmp dword ptr [ARDATA], 0
je .Lt_0152
push dword ptr [ARDATA]
call free
add esp, 4
jmp .Lt_0151
.Lt_0152:
cmp dword ptr [OBJDATA], 0
je .Lt_0153
push dword ptr [OBJDATA]
call free
add esp, 4
.Lt_0153:
.Lt_0151:
call HRESETBUFFERS
.Lt_0150:
ret
.size OBJINFOREADEND, .-OBJINFOREADEND
.balign 16

.globl OBJINFOENCODE
OBJINFOENCODE:
.type OBJINFOENCODE, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_0154:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ENTRIES+eax*8]
mov dword ptr [ebp-4], ebx
.Lt_0155:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size OBJINFOENCODE, .-OBJINFOENCODE
.balign 16
fb_ctor__objinfo:
.type fb_ctor__objinfo, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__objinfo, .-fb_ctor__objinfo
.balign 16
_ZN11TSTRSETITEMaSERKS_:
.type _ZN11TSTRSETITEMaSERKS_, @function
push ebp
mov ebp, esp
push ebx
.Lt_0012:
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
.Lt_0013:
pop ebx
mov esp, ebp
pop ebp
ret
.size _ZN11TSTRSETITEMaSERKS_, .-_ZN11TSTRSETITEMaSERKS_
.balign 16
_ZN16OBJINFOPARSERCTXC1Ev:
.type _ZN16OBJINFOPARSERCTXC1Ev, @function
push ebp
mov ebp, esp
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 0
mov eax, dword ptr [ebp+8]
add eax, 4
mov dword ptr [eax], 0
mov dword ptr [eax+4], 0
mov dword ptr [eax+8], 0
mov eax, dword ptr [ebp+8]
add eax, 16
mov dword ptr [eax], 0
mov eax, dword ptr [ebp+8]
add eax, 20
mov dword ptr [eax], 0
.Lt_001E:
.Lt_001F:
mov esp, ebp
pop ebp
ret
.size _ZN16OBJINFOPARSERCTXC1Ev, .-_ZN16OBJINFOPARSERCTXC1Ev
.balign 16
_ZN16OBJINFOPARSERCTXaSERKS_:
.type _ZN16OBJINFOPARSERCTXaSERKS_, @function
push ebp
mov ebp, esp
push ebx
.Lt_0020:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [eax]
mov dword ptr [ebx], ecx
push 0
push -1
mov ecx, dword ptr [ebp+12]
add ecx, 4
lea ebx, [ecx]
push ebx
push -1
mov ebx, dword ptr [ebp+8]
add ebx, 4
lea ecx, [ebx]
push ecx
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ebp+12]
add eax, 16
mov ecx, dword ptr [ebp+8]
add ecx, 16
mov ebx, dword ptr [eax]
mov dword ptr [ecx], ebx
mov ebx, dword ptr [ebp+12]
add ebx, 20
mov ecx, dword ptr [ebp+8]
add ecx, 20
mov eax, dword ptr [ebx]
mov dword ptr [ecx], eax
.Lt_0021:
pop ebx
mov esp, ebp
pop ebp
ret
.size _ZN16OBJINFOPARSERCTXaSERKS_, .-_ZN16OBJINFOPARSERCTXaSERKS_
.balign 16
_ZN16OBJINFOPARSERCTXD1Ev:
.type _ZN16OBJINFOPARSERCTXD1Ev, @function
push ebp
mov ebp, esp
push ebx
.Lt_0024:
.Lt_0025:
mov eax, dword ptr [ebp+8]
add eax, 4
lea ebx, [eax]
push ebx
call fb_StrDelete
add esp, 4
pop ebx
mov esp, ebp
pop ebp
ret
.size _ZN16OBJINFOPARSERCTXD1Ev, .-_ZN16OBJINFOPARSERCTXD1Ev
.balign 16
HCHECKELF32_SH:
.type HCHECKELF32_SH, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
push esi
push edi
mov dword ptr [ebp-4], 0
.Lt_0028:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+12]
imul ebx, 40
mov ecx, ebx
mov ebx, dword ptr [eax+32]
add ebx, ecx
mov eax, ebx
mov dword ptr [ebp-12], eax
mov ecx, dword ptr [ebp-12]
mov eax, ecx
sar eax, 31
add ecx, 40
adc eax, 0
mov esi, dword ptr [OBJDATA+4]
mov ebx, esi
sar ebx, 31
cmp eax, ebx
jb .Lt_002B
ja .Lt_015C
cmp ecx, esi
jbe .Lt_002B
.Lt_015C:
jmp .Lt_0029
.Lt_002B:
.Lt_002A:
mov esi, dword ptr [OBJDATA]
add esi, dword ptr [ebp-12]
mov dword ptr [ebp-8], esi
mov esi, dword ptr [ebp-8]
mov ecx, dword ptr [esi+16]
mov ebx, 0
mov esi, dword ptr [ebp-8]
mov edi, dword ptr [esi+20]
mov eax, 0
add ecx, edi
adc ebx, eax
mov eax, dword ptr [OBJDATA+4]
mov edi, eax
sar edi, 31
cmp ebx, edi
jb .Lt_002D
ja .Lt_015D
cmp ecx, eax
jbe .Lt_002D
.Lt_015D:
jmp .Lt_0029
.Lt_002D:
.Lt_002C:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0029:
mov eax, dword ptr [ebp-4]
pop edi
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size HCHECKELF32_SH, .-HCHECKELF32_SH
.balign 16
HGETSECTIONNAMEELF32_SH:
.type HGETSECTIONNAMEELF32_SH, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
mov dword ptr [ebp-4], 0
.Lt_002E:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HCHECKELF32_SH
add esp, 8
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0031
jmp .Lt_002F
.Lt_0031:
.Lt_0030:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+16]
add ebx, dword ptr [eax]
mov ecx, ebx
mov dword ptr [ebp-12], ecx
mov dword ptr [ebp-16], 0
.Lt_0032:
mov ecx, dword ptr [ebp-12]
cmp ecx, dword ptr [OBJDATA+4]
setl cl
shr ecx, 1
sbb ecx, ecx
mov eax, dword ptr [ebp-16]
cmp eax, 32
setl al
shr eax, 1
sbb eax, eax
and ecx, eax
je .Lt_0033
mov eax, dword ptr [OBJDATA]
add eax, dword ptr [ebp-12]
movzx ecx, byte ptr [eax]
mov dword ptr [ebp-20], ecx
cmp dword ptr [ebp-20], 0
jne .Lt_0035
jmp .Lt_0033
.Lt_0035:
.Lt_0034:
mov cl, byte ptr [ebp-20]
mov eax, offset Lt_0160
add eax, dword ptr [ebp-16]
mov byte ptr [eax], cl
inc dword ptr [ebp-12]
inc dword ptr [ebp-16]
jmp .Lt_0032
.Lt_0033:
mov ecx, offset Lt_0160
add ecx, dword ptr [ebp-16]
mov byte ptr [ecx], 0
mov ecx, offset Lt_0160
mov dword ptr [ebp-4], ecx
.Lt_002F:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HGETSECTIONNAMEELF32_SH, .-HGETSECTIONNAMEELF32_SH

.section .bss
.balign 4
	.lcomm	Lt_0160,33

.section .text
.balign 16
HLOADFBCTINFFROMELF32_H:
.type HLOADFBCTINFFROMELF32_H, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
push esi
push edi
.Lt_0036:
mov dword ptr [FBCTINF], 0
mov dword ptr [FBCTINF+4], 0
cmp dword ptr [OBJDATA+4], 52
jge .Lt_0039
jmp .Lt_0037
.Lt_0039:
.Lt_0038:
mov eax, dword ptr [OBJDATA]
mov dword ptr [ebp-4], eax
mov byte ptr [ELFMAGIC+4], 1
mov dword ptr [ebp-20], 0
.Lt_003D:
mov eax, dword ptr [ebp-4]
add eax, dword ptr [ebp-20]
movzx ebx, byte ptr [eax]
mov eax, dword ptr [ebp-20]
movzx ecx, byte ptr [ELFMAGIC+eax]
cmp ebx, ecx
je .Lt_003F
jmp .Lt_0037
.Lt_003F:
.Lt_003E:
.Lt_003B:
inc dword ptr [ebp-20]
.Lt_003A:
cmp dword ptr [ebp-20], 15
jle .Lt_003D
.Lt_003C:
mov ecx, dword ptr [ebp-4]
movzx ebx, word ptr [ecx+40]
cmp ebx, 52
je .Lt_0041
jmp .Lt_0037
.Lt_0041:
.Lt_0040:
mov ebx, dword ptr [ebp-4]
movzx ecx, word ptr [ebx+16]
cmp ecx, 1
je .Lt_0043
jmp .Lt_0037
.Lt_0043:
.Lt_0042:
mov ecx, dword ptr [ebp-4]
movzx ebx, word ptr [ecx+18]
cmp ebx, 3
je .Lt_0045
jmp .Lt_0037
.Lt_0045:
.Lt_0044:
mov ebx, dword ptr [ebp-4]
movzx ecx, word ptr [ebx+46]
cmp ecx, 40
je .Lt_0047
jmp .Lt_0037
.Lt_0047:
.Lt_0046:
mov ecx, dword ptr [ebp-4]
movzx eax, word ptr [ecx+48]
mov ebx, 0
push 0
push 40
push ebx
push eax
mov eax, [esp+0]
mul dword ptr [esp+8]
xchg eax, [esp+0]
imul eax, [esp+12]
add eax, edx
mov edx, [esp+4]
imul edx, [esp+8]
add edx, eax
mov [esp+4], edx
pop eax
pop ebx
add esp, 8
mov esi, dword ptr [OBJDATA+4]
mov ecx, esi
sar ecx, 31
cmp ebx, ecx
jb .Lt_0049
ja .Lt_0161
cmp eax, esi
jbe .Lt_0049
.Lt_0161:
jmp .Lt_0037
.Lt_0049:
.Lt_0048:
mov esi, dword ptr [ebp-4]
movzx ecx, word ptr [esi+50]
test ecx, ecx
setl cl
shr ecx, 1
sbb ecx, ecx
mov esi, dword ptr [ebp-4]
movzx eax, word ptr [esi+50]
mov esi, dword ptr [ebp-4]
movzx ebx, word ptr [esi+48]
cmp eax, ebx
setge al
shr eax, 1
sbb eax, eax
or ecx, eax
je .Lt_004B
jmp .Lt_0037
.Lt_004B:
.Lt_004A:
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+32]
mov ecx, 0
mov eax, dword ptr [ebp-4]
movzx esi, word ptr [eax+48]
imul esi, 40
mov edi, esi
mov eax, edi
sar eax, 31
add ebx, edi
adc ecx, eax
mov eax, dword ptr [OBJDATA+4]
mov edi, eax
sar edi, 31
cmp ecx, edi
jb .Lt_004D
ja .Lt_0164
cmp ebx, eax
jbe .Lt_004D
.Lt_0164:
jmp .Lt_0037
.Lt_004D:
.Lt_004C:
mov eax, dword ptr [ebp-4]
movzx edi, word ptr [eax+50]
push edi
push dword ptr [ebp-4]
call HCHECKELF32_SH
add esp, 8
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_004F
jmp .Lt_0037
.Lt_004F:
.Lt_004E:
mov dword ptr [ebp-20], 1
mov eax, dword ptr [ebp-4]
movzx edi, word ptr [eax+48]
dec edi
mov dword ptr [ebp-24], edi
jmp .Lt_0051
.Lt_0054:
mov edi, dword ptr [ebp-12]
push dword ptr [edi+16]
push dword ptr [ebp-20]
push dword ptr [ebp-4]
call HGETSECTIONNAMEELF32_SH
add esp, 12
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 0
je .Lt_0056
push 9
push offset FBCTINFNAME
push 0
push dword ptr [ebp-16]
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_0058
push dword ptr [ebp-20]
push dword ptr [ebp-4]
call HCHECKELF32_SH
add esp, 8
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
je .Lt_005A
mov eax, dword ptr [ebp-8]
mov edi, dword ptr [OBJDATA]
add edi, dword ptr [eax+16]
mov dword ptr [FBCTINF], edi
mov edi, dword ptr [ebp-8]
mov eax, dword ptr [edi+20]
mov dword ptr [FBCTINF+4], eax
jmp .Lt_0053
.Lt_005A:
.Lt_0059:
.Lt_0058:
.Lt_0057:
.Lt_0056:
.Lt_0055:
.Lt_0052:
inc dword ptr [ebp-20]
.Lt_0051:
mov eax, dword ptr [ebp-24]
cmp dword ptr [ebp-20], eax
jle .Lt_0054
.Lt_0053:
.Lt_0037:
pop edi
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size HLOADFBCTINFFROMELF32_H, .-HLOADFBCTINFFROMELF32_H
.balign 16
HCHECKELF64_SH:
.type HCHECKELF64_SH, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
push esi
mov dword ptr [ebp-4], 0
.Lt_005B:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+12]
sal ebx, 6
mov esi, ebx
mov ecx, esi
sar ecx, 31
add esi, dword ptr [eax+40]
adc ecx, dword ptr [eax+44]
mov eax, esi
mov dword ptr [ebp-12], eax
mov esi, dword ptr [ebp-12]
mov eax, esi
sar eax, 31
add esi, 64
adc eax, 0
mov ebx, dword ptr [OBJDATA+4]
mov ecx, ebx
sar ecx, 31
cmp eax, ecx
jb .Lt_005E
ja .Lt_0165
cmp esi, ebx
jbe .Lt_005E
.Lt_0165:
jmp .Lt_005C
.Lt_005E:
.Lt_005D:
mov ebx, dword ptr [OBJDATA]
add ebx, dword ptr [ebp-12]
mov dword ptr [ebp-8], ebx
mov ebx, dword ptr [ebp-8]
mov ecx, dword ptr [ebp-8]
mov eax, dword ptr [ecx+32]
mov esi, dword ptr [ecx+36]
add eax, dword ptr [ebx+24]
adc esi, dword ptr [ebx+28]
mov ecx, dword ptr [OBJDATA+4]
mov ebx, ecx
sar ebx, 31
cmp esi, ebx
jb .Lt_0060
ja .Lt_0166
cmp eax, ecx
jbe .Lt_0060
.Lt_0166:
jmp .Lt_005C
.Lt_0060:
.Lt_005F:
mov ecx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ecx
.Lt_005C:
mov eax, dword ptr [ebp-4]
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size HCHECKELF64_SH, .-HCHECKELF64_SH
.balign 16
HGETSECTIONNAMEELF64_SH:
.type HGETSECTIONNAMEELF64_SH, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
mov dword ptr [ebp-4], 0
.Lt_0061:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HCHECKELF64_SH
add esp, 8
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0064
jmp .Lt_0062
.Lt_0064:
.Lt_0063:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+16]
add ebx, dword ptr [eax]
mov ecx, ebx
mov dword ptr [ebp-12], ecx
mov dword ptr [ebp-16], 0
.Lt_0065:
mov ecx, dword ptr [ebp-12]
cmp ecx, dword ptr [OBJDATA+4]
setl cl
shr ecx, 1
sbb ecx, ecx
mov eax, dword ptr [ebp-16]
cmp eax, 32
setl al
shr eax, 1
sbb eax, eax
and ecx, eax
je .Lt_0066
mov eax, dword ptr [OBJDATA]
add eax, dword ptr [ebp-12]
movzx ecx, byte ptr [eax]
mov dword ptr [ebp-20], ecx
cmp dword ptr [ebp-20], 0
jne .Lt_0068
jmp .Lt_0066
.Lt_0068:
.Lt_0067:
mov cl, byte ptr [ebp-20]
mov eax, offset Lt_0169
add eax, dword ptr [ebp-16]
mov byte ptr [eax], cl
inc dword ptr [ebp-12]
inc dword ptr [ebp-16]
jmp .Lt_0065
.Lt_0066:
mov ecx, offset Lt_0169
add ecx, dword ptr [ebp-16]
mov byte ptr [ecx], 0
mov ecx, offset Lt_0169
mov dword ptr [ebp-4], ecx
.Lt_0062:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HGETSECTIONNAMEELF64_SH, .-HGETSECTIONNAMEELF64_SH

.section .bss
.balign 4
	.lcomm	Lt_0169,33

.section .text
.balign 16
HLOADFBCTINFFROMELF64_H:
.type HLOADFBCTINFFROMELF64_H, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
push esi
.Lt_0069:
mov dword ptr [FBCTINF], 0
mov dword ptr [FBCTINF+4], 0
cmp dword ptr [OBJDATA+4], 64
jge .Lt_006C
jmp .Lt_006A
.Lt_006C:
.Lt_006B:
mov eax, dword ptr [OBJDATA]
mov dword ptr [ebp-4], eax
mov byte ptr [ELFMAGIC+4], 2
mov dword ptr [ebp-20], 0
.Lt_0070:
mov eax, dword ptr [ebp-4]
add eax, dword ptr [ebp-20]
movzx ebx, byte ptr [eax]
mov eax, dword ptr [ebp-20]
movzx ecx, byte ptr [ELFMAGIC+eax]
cmp ebx, ecx
je .Lt_0072
jmp .Lt_006A
.Lt_0072:
.Lt_0071:
.Lt_006E:
inc dword ptr [ebp-20]
.Lt_006D:
cmp dword ptr [ebp-20], 15
jle .Lt_0070
.Lt_006F:
mov ecx, dword ptr [ebp-4]
movzx ebx, word ptr [ecx+52]
cmp ebx, 64
je .Lt_0074
jmp .Lt_006A
.Lt_0074:
.Lt_0073:
mov ebx, dword ptr [ebp-4]
movzx ecx, word ptr [ebx+16]
cmp ecx, 1
je .Lt_0076
jmp .Lt_006A
.Lt_0076:
.Lt_0075:
mov ecx, dword ptr [ebp-4]
movzx ebx, word ptr [ecx+18]
cmp ebx, 62
je .Lt_0078
jmp .Lt_006A
.Lt_0078:
.Lt_0077:
mov ebx, dword ptr [ebp-4]
movzx ecx, word ptr [ebx+58]
cmp ecx, 64
je .Lt_007A
jmp .Lt_006A
.Lt_007A:
.Lt_0079:
mov ecx, dword ptr [ebp-4]
movzx eax, word ptr [ecx+60]
mov ebx, 0
shld ebx, eax, 6
shl eax, 6
mov esi, dword ptr [OBJDATA+4]
mov ecx, esi
sar ecx, 31
cmp ebx, ecx
jb .Lt_007C
ja .Lt_016A
cmp eax, esi
jbe .Lt_007C
.Lt_016A:
jmp .Lt_006A
.Lt_007C:
.Lt_007B:
mov esi, dword ptr [ebp-4]
movzx ecx, word ptr [esi+62]
test ecx, ecx
setl cl
shr ecx, 1
sbb ecx, ecx
mov esi, dword ptr [ebp-4]
movzx eax, word ptr [esi+62]
mov esi, dword ptr [ebp-4]
movzx ebx, word ptr [esi+60]
cmp eax, ebx
setge al
shr eax, 1
sbb eax, eax
or ecx, eax
je .Lt_007E
jmp .Lt_006A
.Lt_007E:
.Lt_007D:
mov eax, dword ptr [ebp-4]
mov ecx, dword ptr [ebp-4]
movzx ebx, word ptr [ecx+60]
sal ebx, 6
mov esi, ebx
mov ecx, esi
sar ecx, 31
add esi, dword ptr [eax+40]
adc ecx, dword ptr [eax+44]
mov ebx, dword ptr [OBJDATA+4]
mov eax, ebx
sar eax, 31
cmp ecx, eax
jb .Lt_0080
ja .Lt_016D
cmp esi, ebx
jbe .Lt_0080
.Lt_016D:
jmp .Lt_006A
.Lt_0080:
.Lt_007F:
mov ebx, dword ptr [ebp-4]
movzx eax, word ptr [ebx+62]
push eax
push dword ptr [ebp-4]
call HCHECKELF64_SH
add esp, 8
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_0082
jmp .Lt_006A
.Lt_0082:
.Lt_0081:
mov dword ptr [ebp-20], 1
mov eax, dword ptr [ebp-4]
movzx ebx, word ptr [eax+60]
dec ebx
mov dword ptr [ebp-24], ebx
jmp .Lt_0084
.Lt_0087:
mov ebx, dword ptr [ebp-12]
mov eax, dword ptr [ebx+24]
push eax
push dword ptr [ebp-20]
push dword ptr [ebp-4]
call HGETSECTIONNAMEELF64_SH
add esp, 12
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 0
je .Lt_0089
push 9
push offset FBCTINFNAME
push 0
push dword ptr [ebp-16]
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_008B
push dword ptr [ebp-20]
push dword ptr [ebp-4]
call HCHECKELF64_SH
add esp, 8
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
je .Lt_008D
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+24]
mov eax, dword ptr [OBJDATA]
add eax, ebx
mov dword ptr [FBCTINF], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+32]
mov dword ptr [FBCTINF+4], ebx
jmp .Lt_0086
.Lt_008D:
.Lt_008C:
.Lt_008B:
.Lt_008A:
.Lt_0089:
.Lt_0088:
.Lt_0085:
inc dword ptr [ebp-20]
.Lt_0084:
mov ebx, dword ptr [ebp-24]
cmp dword ptr [ebp-20], ebx
jle .Lt_0087
.Lt_0086:
.Lt_006A:
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size HLOADFBCTINFFROMELF64_H, .-HLOADFBCTINFFROMELF64_H
.balign 16
HLOADFBCTINFFROMCOFF:
.type HLOADFBCTINFFROMCOFF, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
push esi
push edi
.Lt_008E:
mov dword ptr [FBCTINF], 0
mov dword ptr [FBCTINF+4], 0
cmp dword ptr [OBJDATA+4], 20
jge .Lt_0091
jmp .Lt_008F
.Lt_0091:
.Lt_0090:
mov eax, dword ptr [OBJDATA]
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp-4]
movzx ebx, word ptr [eax]
movzx eax, word ptr [ebp+8]
cmp ebx, eax
je .Lt_0093
jmp .Lt_008F
.Lt_0093:
.Lt_0092:
mov eax, dword ptr [ebp-4]
movzx ebx, word ptr [eax+16]
test ebx, ebx
je .Lt_0095
jmp .Lt_008F
.Lt_0095:
.Lt_0094:
mov ebx, dword ptr [ebp-4]
movzx ecx, word ptr [ebx+2]
mov eax, 0
push 0
push 40
push eax
push ecx
mov eax, [esp+0]
mul dword ptr [esp+8]
xchg eax, [esp+0]
imul eax, [esp+12]
add eax, edx
mov edx, [esp+4]
imul edx, [esp+8]
add edx, eax
mov [esp+4], edx
pop ecx
pop eax
add esp, 8
mov esi, dword ptr [OBJDATA+4]
mov ebx, esi
sar ebx, 31
cmp eax, ebx
jb .Lt_0097
ja .Lt_016E
cmp ecx, esi
jbe .Lt_0097
.Lt_016E:
jmp .Lt_008F
.Lt_0097:
.Lt_0096:
mov esi, dword ptr [ebp-4]
add esi, 20
mov dword ptr [ebp-12], esi
mov dword ptr [ebp-16], 0
mov esi, dword ptr [ebp-4]
movzx ebx, word ptr [esi+2]
dec ebx
mov dword ptr [ebp-20], ebx
jmp .Lt_0099
.Lt_009C:
mov ebx, dword ptr [ebp-16]
imul ebx, 40
mov esi, dword ptr [ebp-12]
add esi, ebx
mov dword ptr [ebp-8], esi
mov dword ptr [ebp-24], 0
.Lt_00A0:
mov esi, dword ptr [ebp-8]
add esi, dword ptr [ebp-24]
movzx ebx, byte ptr [esi]
mov esi, offset FBCTINFNAME
add esi, dword ptr [ebp-24]
movzx ecx, byte ptr [esi]
cmp ebx, ecx
je .Lt_00A2
jmp .Lt_009A
.Lt_00A2:
.Lt_00A1:
.Lt_009E:
inc dword ptr [ebp-24]
.Lt_009D:
cmp dword ptr [ebp-24], 7
jle .Lt_00A0
.Lt_009F:
mov ecx, dword ptr [ebp-8]
mov esi, dword ptr [ecx+20]
mov ebx, 0
mov ecx, dword ptr [ebp-8]
mov edi, dword ptr [ecx+16]
mov eax, 0
add esi, edi
adc ebx, eax
mov eax, dword ptr [OBJDATA+4]
mov edi, eax
sar edi, 31
cmp ebx, edi
jb .Lt_00A4
ja .Lt_016F
cmp esi, eax
jbe .Lt_00A4
.Lt_016F:
jmp .Lt_008F
.Lt_00A4:
.Lt_00A3:
mov eax, dword ptr [ebp-8]
mov edi, dword ptr [OBJDATA]
add edi, dword ptr [eax+20]
mov dword ptr [FBCTINF], edi
mov edi, dword ptr [ebp-8]
mov eax, dword ptr [edi+16]
mov dword ptr [FBCTINF+4], eax
jmp .Lt_009B
.Lt_009A:
inc dword ptr [ebp-16]
.Lt_0099:
mov eax, dword ptr [ebp-20]
cmp dword ptr [ebp-16], eax
jle .Lt_009C
.Lt_009B:
.Lt_008F:
pop edi
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size HLOADFBCTINFFROMCOFF, .-HLOADFBCTINFFROMCOFF
.balign 16
HLOADARSTRING:
.type HLOADARSTRING, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_00AE:
mov eax, dword ptr [ebp+12]
dec eax
mov dword ptr [ebp-8], eax
.Lt_00B0:
cmp dword ptr [ebp-8], 0
jl .Lt_00B1
mov eax, dword ptr [ebp+8]
add eax, dword ptr [ebp-8]
movzx ebx, byte ptr [eax]
cmp ebx, 32
je .Lt_00B4
jmp .Lt_00B1
.Lt_00B4:
.Lt_00B3:
dec dword ptr [ebp-8]
jmp .Lt_00B0
.Lt_00B1:
mov dword ptr [ebp-12], 0
.Lt_00B5:
mov ebx, dword ptr [ebp-8]
cmp dword ptr [ebp-12], ebx
jg .Lt_00B6
mov ebx, dword ptr [ebp+8]
add ebx, dword ptr [ebp-12]
mov eax, offset Lt_0170
add eax, dword ptr [ebp-12]
mov cl, byte ptr [ebx]
mov byte ptr [eax], cl
inc dword ptr [ebp-12]
jmp .Lt_00B5
.Lt_00B6:
mov ecx, offset Lt_0170
add ecx, dword ptr [ebp-12]
mov byte ptr [ecx], 0
mov ecx, offset Lt_0170
mov dword ptr [ebp-4], ecx
.Lt_00AF:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HLOADARSTRING, .-HLOADARSTRING

.section .bss
.balign 4
	.lcomm	Lt_0170,17

.section .text
.balign 16
HLOADOBJFROMAR:
.type HLOADOBJFROMAR, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
.Lt_00B7:
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [OBJDATA], 0
mov dword ptr [OBJDATA+4], 0
cmp dword ptr [ARDATA+4], 8
jge .Lt_00BA
lea eax, [ebp-16]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_00B8
.Lt_00BA:
.Lt_00B9:
mov dword ptr [ebp-20], 0
.Lt_00BE:
mov eax, dword ptr [ARDATA]
add eax, dword ptr [ebp-20]
movzx ebx, byte ptr [eax]
mov eax, dword ptr [ebp-20]
movzx ecx, byte ptr [ARMAGIC+eax]
cmp ebx, ecx
je .Lt_00C0
lea ecx, [ebp-16]
push ecx
call fb_StrDelete
add esp, 4
jmp .Lt_00B8
.Lt_00C0:
.Lt_00BF:
.Lt_00BC:
inc dword ptr [ebp-20]
.Lt_00BB:
cmp dword ptr [ebp-20], 7
jle .Lt_00BE
.Lt_00BD:
mov dword ptr [ebp-20], 8
.Lt_00C1:
mov ecx, dword ptr [ebp-20]
add ecx, 60
mov ebx, dword ptr [ARDATA+4]
cmp ecx, ebx
jle .Lt_00C5
lea ebx, [ebp-16]
push ebx
call fb_StrDelete
add esp, 4
jmp .Lt_00B8
.Lt_00C5:
.Lt_00C4:
mov ebx, dword ptr [ARDATA]
add ebx, dword ptr [ebp-20]
mov dword ptr [ebp-4], ebx
push 0
push 0
push 16
mov ebx, dword ptr [ebp-4]
lea ecx, [ebx]
push ecx
call HLOADARSTRING
add esp, 8
push eax
push -1
lea eax, [ebp-16]
push eax
call fb_StrAssign
add esp, 20
push 10
mov eax, dword ptr [ebp-4]
lea ecx, [eax+48]
push ecx
call HLOADARSTRING
add esp, 8
push eax
call fb_StrAllocTempDescZ
add esp, 4
push eax
call fb_VAL
add esp, 4
fistp dword ptr [ebp-24]
cmp dword ptr [ebp-24], 0
jge .Lt_00C7
mov dword ptr [ebp-24], 0
jmp .Lt_00C6
.Lt_00C7:
mov eax, dword ptr [ebp-24]
cmp eax, dword ptr [ARDATA+4]
setg al
shr eax, 1
sbb eax, eax
mov ecx, dword ptr [ARDATA+4]
sub ecx, dword ptr [ebp-20]
mov ebx, dword ptr [ebp-24]
cmp ebx, ecx
setg bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
je .Lt_00C8
mov ebx, dword ptr [ARDATA+4]
sub ebx, dword ptr [ebp-20]
mov dword ptr [ebp-24], ebx
.Lt_00C8:
.Lt_00C6:
add dword ptr [ebp-20], 60
push 12
push offset Lt_001B
push -1
lea ebx, [ebp-16]
push ebx
call fb_StrCompare
add esp, 16
test eax, eax
je .Lt_00CC
.Lt_00CD:
push 13
push offset Lt_00CB
push -1
lea eax, [ebp-16]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_00CA
.Lt_00CC:
cmp dword ptr [ebp-24], 0
jle .Lt_00CF
mov eax, dword ptr [ARDATA]
add eax, dword ptr [ebp-20]
mov dword ptr [OBJDATA], eax
mov eax, dword ptr [ebp-24]
mov dword ptr [OBJDATA+4], eax
.Lt_00CF:
.Lt_00CE:
jmp .Lt_00C2
jmp .Lt_00C9
.Lt_00CA:
push 2
push offset Lt_0019
push -1
lea eax, [ebp-16]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
je .Lt_00D3
.Lt_00D4:
push 3
push offset Lt_00D1
push -1
lea eax, [ebp-16]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
je .Lt_00D3
.Lt_00D5:
push 10
push offset Lt_00D2
push -1
lea eax, [ebp-16]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_00D0
.Lt_00D3:
jmp .Lt_00C9
.Lt_00D0:
jmp .Lt_00C2
.Lt_00D6:
.Lt_00C9:
mov eax, dword ptr [ebp-24]
add dword ptr [ebp-20], eax
mov eax, dword ptr [ebp-20]
and eax, 1
add dword ptr [ebp-20], eax
.Lt_00C3:
jmp .Lt_00C1
.Lt_00C2:
lea eax, [ebp-16]
push eax
call fb_StrDelete
add esp, 4
.Lt_00B8:
pop ebx
mov esp, ebp
pop ebp
ret
.size HLOADOBJFROMAR, .-HLOADOBJFROMAR
.balign 16
HLOADFILE:
.type HLOADFILE, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
.Lt_00D7:
mov eax, dword ptr [ebp+12]
mov dword ptr [eax], 0
mov eax, dword ptr [ebp+12]
mov dword ptr [eax+4], 0
call fb_FileFree
mov dword ptr [ebp-4], eax
push 0
push dword ptr [ebp-4]
push 0
push 1
push 0
push dword ptr [ebp+8]
call fb_FileOpen
add esp, 24
test eax, eax
je .Lt_00DA
jmp .Lt_00D8
.Lt_00DA:
.Lt_00D9:
push dword ptr [ebp-4]
call fb_FileSize
add esp, 4
mov ebx, eax
mov dword ptr [ebp-8], ebx
cmp dword ptr [ebp-8], 0
jle .Lt_00DC
push dword ptr [ebp-8]
call malloc
add esp, 4
mov dword ptr [ebp-12], eax
lea eax, [ebp-8]
push eax
push dword ptr [ebp-8]
push dword ptr [ebp-12]
push 0
push dword ptr [ebp-4]
call fb_FileGetIOB
add esp, 20
test eax, eax
je .Lt_00DE
jmp .Lt_00D8
.Lt_00DE:
.Lt_00DD:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [ebp-12]
mov dword ptr [eax], ebx
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebp-8]
mov dword ptr [ebx+4], eax
.Lt_00DC:
.Lt_00DB:
push dword ptr [ebp-4]
call fb_FileClose
add esp, 4
test eax, eax
je .Lt_00DF
push 0
push 0
push offset Lt_00E0
push 611
call fb_ErrorThrowAt
add esp, 16
jmp eax
.Lt_00DF:
.Lt_00D8:
pop ebx
mov esp, ebp
pop ebp
ret
.size HLOADFILE, .-HLOADFILE
.balign 16
HLOADFBCTINFFROMOBJ:
.type HLOADFBCTINFFROMOBJ, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_00E1:
push 3
call FBGETOPTION
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_00E4
.Lt_00E6:
call FBGETCPUFAMILY
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 1
jne .Lt_00E9
.Lt_00EA:
push 34404
call HLOADFBCTINFFROMCOFF
add esp, 4
jmp .Lt_00E7
.Lt_00E9:
cmp dword ptr [ebp-8], 0
jne .Lt_00EB
.Lt_00EC:
push 332
call HLOADFBCTINFFROMCOFF
add esp, 4
.Lt_00EB:
.Lt_00E7:
jmp .Lt_00E3
.Lt_00ED:
call FBGETCPUFAMILY
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 1
jne .Lt_00F0
.Lt_00F1:
call HLOADFBCTINFFROMELF64_H
jmp .Lt_00EE
.Lt_00F0:
cmp dword ptr [ebp-8], 0
jne .Lt_00F2
.Lt_00F3:
call HLOADFBCTINFFROMELF32_H
.Lt_00F2:
.Lt_00EE:
jmp .Lt_00E3
.Lt_00E4:
cmp dword ptr [ebp-4], 8
ja .Lt_00E3
mov eax, dword ptr [ebp-4]
jmp dword ptr [.LT_00F4+eax*4]
.LT_00F4:
.int .Lt_00E6
.int .Lt_00E6
.int .Lt_00ED
.int .Lt_00E6
.int .Lt_00E6
.int .Lt_00ED
.int .Lt_00ED
.int .Lt_00ED
.int .Lt_00ED
.Lt_00E3:
cmp dword ptr [FBCTINF+4], 0
jne .Lt_00F6
jmp .Lt_00E2
.Lt_00F6:
.Lt_00F5:
mov eax, dword ptr [FBCTINF]
movzx ebx, byte ptr [eax]
cmp ebx, 16
jne .Lt_00F8
mov dword ptr [PARSER+16], -1
mov dword ptr [PARSER], 1
jmp .Lt_00F7
.Lt_00F8:
mov dword ptr [PARSER+16], 0
.Lt_00F7:
.Lt_00E2:
pop ebx
mov esp, ebp
pop ebp
ret
.size HLOADFBCTINFFROMOBJ, .-HLOADFBCTINFFROMOBJ
.balign 16
HRESETBUFFERS:
.type HRESETBUFFERS, @function
.Lt_00FF:
mov dword ptr [ARDATA], 0
mov dword ptr [ARDATA+4], 0
mov dword ptr [OBJDATA], 0
mov dword ptr [OBJDATA+4], 0
mov dword ptr [FBCTINF], 0
mov dword ptr [FBCTINF+4], 0
.Lt_0100:
ret
.size HRESETBUFFERS, .-HRESETBUFFERS
.balign 16
OBJINFOINIT:
.type OBJINFOINIT, @function
push ebp
mov ebp, esp
.Lt_0101:
call HRESETBUFFERS
mov dword ptr [PARSER], 0
push 0
push -1
push dword ptr [ebp+8]
push -1
lea eax, [PARSER+4]
push eax
call fb_StrAssign
add esp, 20
mov dword ptr [PARSER+16], 0
mov dword ptr [PARSER+20], -1
.Lt_0102:
mov esp, ebp
pop ebp
ret
.size OBJINFOINIT, .-OBJINFOINIT
.balign 16
HGETNEXTSTRING:
.type HGETNEXTSTRING, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_011D:
mov eax, offset Lt_0000
mov dword ptr [ebp-4], eax
mov eax, dword ptr [PARSER]
mov dword ptr [ebp-8], eax
.Lt_011F:
mov eax, dword ptr [FBCTINF+4]
cmp dword ptr [PARSER], eax
jge .Lt_0120
inc dword ptr [PARSER]
mov eax, dword ptr [FBCTINF]
add eax, dword ptr [PARSER]
movzx ebx, byte ptr [eax-1]
test ebx, ebx
jne .Lt_0122
mov ebx, dword ptr [FBCTINF]
add ebx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ebx
jmp .Lt_011E
.Lt_0122:
.Lt_0121:
jmp .Lt_011F
.Lt_0120:
.Lt_011E:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HGETNEXTSTRING, .-HGETNEXTSTRING
.balign 16
_GLOBAL__I:
.type _GLOBAL__I, @function
.Lt_0157:
push offset PARSER
call _ZN16OBJINFOPARSERCTXC1Ev
add esp, 4
.Lt_0158:
ret
.size _GLOBAL__I, .-_GLOBAL__I
.balign 16
_GLOBAL__D:
.type _GLOBAL__D, @function
.Lt_015A:
push offset PARSER
call _ZN16OBJINFOPARSERCTXD1Ev
add esp, 4
.Lt_015B:
ret
.size _GLOBAL__D, .-_GLOBAL__D
	#fbc-1.01.0/src/compiler/objinfo.bas' compilation took 0.01217208965681493 secs

.section .rodata
.balign 4
Lt_0000:	.ascii	"\0"
.balign 4
Lt_0019:	.ascii	"/\0"
.balign 4
Lt_001B:	.ascii	"__fb_ct.inf\0"

.section .bss
.balign 4
	.lcomm	ARDATA,8
.balign 4
	.lcomm	OBJDATA,8
.balign 4
	.lcomm	FBCTINF,8
.balign 4
	.lcomm	PARSER,24

.section .data
.balign 4
FBCTINFNAME:
.ascii ".fbctinf\0"
.balign 4
ELFMAGIC:
.byte 127
.byte 69
.byte 76
.byte 70
.byte 0
.byte 1
.byte 1
.byte 0
.byte 0
.byte 0
.byte 0
.byte 0
.skip 4,0
.balign 4
ARMAGIC:
.byte 33
.byte 60
.byte 97
.byte 114
.byte 99
.byte 104
.byte 62
.byte 10

.section .rodata
.balign 4
Lt_00CB:	.ascii	"__fb_ct.inf/\0"
.balign 4
Lt_00D1:	.ascii	"//\0"
.balign 4
Lt_00D2:	.ascii	"__.SYMDEF\0"
.balign 4
Lt_00E0:	.ascii	"fbc-1.01.0/src/compiler/objinfo.bas\0"

.section .data
.balign 4
ENTRIES:
.int Lt_00FA
.int -1
.int Lt_00FB
.int -1
.int Lt_00FC
.int 0
.int Lt_00FD
.int 0
.int Lt_00FE
.int -1

.section .rodata
.balign 4
Lt_00FA:	.ascii	"-l\0"
.balign 4
Lt_00FB:	.ascii	"-p\0"
.balign 4
Lt_00FC:	.ascii	"-mt\0"
.balign 4
Lt_00FD:	.ascii	"-gfx\0"
.balign 4
Lt_00FE:	.ascii	"-lang\0"
.balign 4
Lt_010F:	.ascii	"lib\0"
.balign 4
Lt_0110:	.ascii	".a\0"

.section .ctors, "aw", @progbits
.int fb_ctor__objinfo
.int _GLOBAL__I

.section .dtors, "aw", @progbits
.int _GLOBAL__D
