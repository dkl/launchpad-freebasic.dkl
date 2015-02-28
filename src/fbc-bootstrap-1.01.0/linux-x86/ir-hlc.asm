	.intel_syntax noprefix

	#FreeBASIC-1.01.0-source/src/compiler/ir-hlc.bas' compilation started at 16:30:04 (FreeBASIC 1.01.0)

.section .text
.balign 16
fb_ctor__irzhlc:
.type fb_ctor__irzhlc, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__irzhlc, .-fb_ctor__irzhlc
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
_ZN12SECTIONENTRYC1Ev:
.type _ZN12SECTIONENTRYC1Ev, @function
push ebp
mov ebp, esp
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 0
mov dword ptr [eax+4], 0
mov dword ptr [eax+8], 0
mov eax, dword ptr [ebp+8]
add eax, 12
mov dword ptr [eax], 0
mov eax, dword ptr [ebp+8]
add eax, 16
mov dword ptr [eax], 0
.Lt_005F:
.Lt_0060:
mov esp, ebp
pop ebp
ret
.size _ZN12SECTIONENTRYC1Ev, .-_ZN12SECTIONENTRYC1Ev
.balign 16
_ZN12SECTIONENTRYaSERKS_:
.type _ZN12SECTIONENTRYaSERKS_, @function
push ebp
mov ebp, esp
push ebx
.Lt_0061:
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
mov ecx, dword ptr [ebp+12]
add ecx, 16
mov ebx, dword ptr [ebp+8]
add ebx, 16
mov eax, dword ptr [ecx]
mov dword ptr [ebx], eax
.Lt_0062:
pop ebx
mov esp, ebp
pop ebp
ret
.size _ZN12SECTIONENTRYaSERKS_, .-_ZN12SECTIONENTRYaSERKS_
.balign 16
_ZN12SECTIONENTRYD1Ev:
.type _ZN12SECTIONENTRYD1Ev, @function
push ebp
mov ebp, esp
push ebx
.Lt_0065:
.Lt_0066:
mov eax, dword ptr [ebp+8]
lea ebx, [eax]
push ebx
call fb_StrDelete
add esp, 4
pop ebx
mov esp, ebp
pop ebp
ret
.size _ZN12SECTIONENTRYD1Ev, .-_ZN12SECTIONENTRYD1Ev
.balign 16
_ZN8IRHLCCTXC1Ev:
.type _ZN8IRHLCCTXC1Ev, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov eax, dword ptr [ebp+8]
lea ebx, [eax]
mov dword ptr [ebp-8], ebx
mov dword ptr [ebp-4], 0
.Lt_006D:
push dword ptr [ebp-8]
call _ZN12SECTIONENTRYC1Ev
add esp, 4
add dword ptr [ebp-8], 20
inc dword ptr [ebp-4]
cmp dword ptr [ebp-4], 129
jne .Lt_006D
mov ebx, dword ptr [ebp+8]
add ebx, 2580
mov dword ptr [ebx], 0
mov ebx, dword ptr [ebp+8]
add ebx, 2584
mov dword ptr [ebx], 0
mov ebx, dword ptr [ebp+8]
add ebx, 2588
lea eax, [ebx]
push eax
push edi
mov edi, eax
xor eax, eax
mov ecx, 8
rep stosd
pop edi
pop eax
mov eax, dword ptr [ebp+8]
add eax, 2620
mov dword ptr [eax], 0
mov eax, dword ptr [ebp+8]
add eax, 2624
mov dword ptr [eax], 0
mov dword ptr [eax+4], 0
mov dword ptr [eax+8], 0
mov eax, dword ptr [ebp+8]
add eax, 2636
mov dword ptr [eax], 0
mov eax, dword ptr [ebp+8]
add eax, 2640
lea ebx, [eax]
push edi
mov edi, ebx
xor eax, eax
mov ecx, 8
rep stosd
pop edi
mov ebx, dword ptr [ebp+8]
add ebx, 2672
mov dword ptr [ebx], 0
mov dword ptr [ebx+4], 0
mov dword ptr [ebx+8], 0
mov ebx, dword ptr [ebp+8]
add ebx, 2684
mov dword ptr [ebx], 0
mov ebx, dword ptr [ebp+8]
add ebx, 2688
mov dword ptr [ebx], 0
mov dword ptr [ebx+4], 0
mov dword ptr [ebx+8], 0
mov ebx, dword ptr [ebp+8]
add ebx, 2700
mov dword ptr [ebx], 0
mov dword ptr [ebx+4], 0
mov dword ptr [ebx+8], 0
mov ebx, dword ptr [ebp+8]
add ebx, 2712
mov dword ptr [ebx], 0
mov dword ptr [ebx+4], 0
mov dword ptr [ebx+8], 0
mov ebx, dword ptr [ebp+8]
add ebx, 2724
mov dword ptr [ebx], 0
mov ebx, dword ptr [ebp+8]
add ebx, 2728
mov dword ptr [ebx], 0
mov dword ptr [ebx+4], 0
mov dword ptr [ebx+8], 0
mov ebx, dword ptr [ebp+8]
add ebx, 2740
mov dword ptr [ebx], 0
mov dword ptr [ebx+4], 0
mov dword ptr [ebx+8], 0
mov ebx, dword ptr [ebp+8]
add ebx, 2752
lea eax, [ebx]
push eax
push edi
mov edi, eax
xor eax, eax
mov ecx, 8
rep stosd
pop edi
pop eax
mov eax, dword ptr [ebp+8]
add eax, 2784
mov dword ptr [eax], 0
mov dword ptr [eax+4], 0
mov dword ptr [eax+8], 0
mov eax, dword ptr [ebp+8]
add eax, 2796
lea ebx, [eax]
push edi
mov edi, ebx
xor eax, eax
mov ecx, 8
rep stosd
pop edi
mov ebx, dword ptr [ebp+8]
add ebx, 2828
mov dword ptr [ebx], 0
.Lt_006A:
.Lt_006B:
pop ebx
mov esp, ebp
pop ebp
ret
.size _ZN8IRHLCCTXC1Ev, .-_ZN8IRHLCCTXC1Ev
.balign 16
_ZN8IRHLCCTXaSERKS_:
.type _ZN8IRHLCCTXaSERKS_, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
.Lt_006F:
mov eax, dword ptr [ebp+8]
lea ebx, [eax]
mov dword ptr [ebp-8], ebx
mov ebx, dword ptr [ebp+12]
lea eax, [ebx]
mov dword ptr [ebp-12], eax
mov dword ptr [ebp-4], 0
.Lt_0072:
push dword ptr [ebp-12]
push dword ptr [ebp-8]
call _ZN12SECTIONENTRYaSERKS_
add esp, 8
add dword ptr [ebp-8], 20
add dword ptr [ebp-12], 20
inc dword ptr [ebp-4]
cmp dword ptr [ebp-4], 129
jne .Lt_0072
mov eax, dword ptr [ebp+12]
add eax, 2580
mov ebx, dword ptr [ebp+8]
add ebx, 2580
mov ecx, dword ptr [eax]
mov dword ptr [ebx], ecx
mov ecx, dword ptr [ebp+12]
add ecx, 2584
mov ebx, dword ptr [ebp+8]
add ebx, 2584
mov eax, dword ptr [ecx]
mov dword ptr [ebx], eax
mov eax, dword ptr [ebp+8]
add eax, 2588
lea ebx, [eax]
mov eax, dword ptr [ebp+12]
add eax, 2588
lea ecx, [eax]
push ecx
push edi
push esi
mov edi, ebx
mov esi, ecx
mov ecx, 8
rep movsd
pop esi
pop edi
pop ecx
mov ecx, dword ptr [ebp+12]
add ecx, 2620
mov ebx, dword ptr [ebp+8]
add ebx, 2620
mov eax, dword ptr [ecx]
mov dword ptr [ebx], eax
push 0
push -1
mov eax, dword ptr [ebp+12]
add eax, 2624
lea ebx, [eax]
push ebx
push -1
mov ebx, dword ptr [ebp+8]
add ebx, 2624
lea eax, [ebx]
push eax
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ebp+12]
add eax, 2636
mov ebx, dword ptr [ebp+8]
add ebx, 2636
mov ecx, dword ptr [eax]
mov dword ptr [ebx], ecx
mov ecx, dword ptr [ebp+8]
add ecx, 2640
lea ebx, [ecx]
mov ecx, dword ptr [ebp+12]
add ecx, 2640
lea eax, [ecx]
push edi
push esi
mov edi, ebx
mov esi, eax
mov ecx, 8
rep movsd
pop esi
pop edi
push 0
push -1
mov eax, dword ptr [ebp+12]
add eax, 2672
lea ebx, [eax]
push ebx
push -1
mov ebx, dword ptr [ebp+8]
add ebx, 2672
lea eax, [ebx]
push eax
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ebp+12]
add eax, 2684
mov ebx, dword ptr [ebp+8]
add ebx, 2684
mov ecx, dword ptr [eax]
mov dword ptr [ebx], ecx
push 0
push -1
mov ecx, dword ptr [ebp+12]
add ecx, 2688
lea ebx, [ecx]
push ebx
push -1
mov ebx, dword ptr [ebp+8]
add ebx, 2688
lea ecx, [ebx]
push ecx
call fb_StrAssign
add esp, 20
push 0
push -1
mov eax, dword ptr [ebp+12]
add eax, 2700
lea ecx, [eax]
push ecx
push -1
mov ecx, dword ptr [ebp+8]
add ecx, 2700
lea eax, [ecx]
push eax
call fb_StrAssign
add esp, 20
push 0
push -1
mov eax, dword ptr [ebp+12]
add eax, 2712
lea ecx, [eax]
push ecx
push -1
mov ecx, dword ptr [ebp+8]
add ecx, 2712
lea eax, [ecx]
push eax
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ebp+12]
add eax, 2724
mov ecx, dword ptr [ebp+8]
add ecx, 2724
mov ebx, dword ptr [eax]
mov dword ptr [ecx], ebx
push 0
push -1
mov ebx, dword ptr [ebp+12]
add ebx, 2728
lea ecx, [ebx]
push ecx
push -1
mov ecx, dword ptr [ebp+8]
add ecx, 2728
lea ebx, [ecx]
push ebx
call fb_StrAssign
add esp, 20
push 0
push -1
mov eax, dword ptr [ebp+12]
add eax, 2740
lea ebx, [eax]
push ebx
push -1
mov ebx, dword ptr [ebp+8]
add ebx, 2740
lea eax, [ebx]
push eax
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ebp+8]
add eax, 2752
lea ebx, [eax]
mov eax, dword ptr [ebp+12]
add eax, 2752
lea ecx, [eax]
push ecx
push edi
push esi
mov edi, ebx
mov esi, ecx
mov ecx, 8
rep movsd
pop esi
pop edi
pop ecx
push 0
push -1
mov ecx, dword ptr [ebp+12]
add ecx, 2784
lea ebx, [ecx]
push ebx
push -1
mov ebx, dword ptr [ebp+8]
add ebx, 2784
lea ecx, [ebx]
push ecx
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ebp+8]
add eax, 2796
lea ecx, [eax]
mov eax, dword ptr [ebp+12]
add eax, 2796
lea ebx, [eax]
push ecx
push edi
push esi
mov edi, ecx
mov esi, ebx
mov ecx, 8
rep movsd
pop esi
pop edi
pop ecx
mov ebx, dword ptr [ebp+12]
add ebx, 2828
mov ecx, dword ptr [ebp+8]
add ecx, 2828
mov eax, dword ptr [ebx]
mov dword ptr [ecx], eax
.Lt_0070:
pop ebx
mov esp, ebp
pop ebp
ret
.size _ZN8IRHLCCTXaSERKS_, .-_ZN8IRHLCCTXaSERKS_
.balign 16
_ZN8IRHLCCTXD1Ev:
.type _ZN8IRHLCCTXD1Ev, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_007A:
.Lt_007B:
mov eax, dword ptr [ebp+8]
add eax, 2784
lea ebx, [eax]
push ebx
call fb_StrDelete
add esp, 4
mov ebx, dword ptr [ebp+8]
add ebx, 2740
lea eax, [ebx]
push eax
call fb_StrDelete
add esp, 4
mov eax, dword ptr [ebp+8]
add eax, 2728
lea ebx, [eax]
push ebx
call fb_StrDelete
add esp, 4
mov ebx, dword ptr [ebp+8]
add ebx, 2712
lea eax, [ebx]
push eax
call fb_StrDelete
add esp, 4
mov eax, dword ptr [ebp+8]
add eax, 2700
lea ebx, [eax]
push ebx
call fb_StrDelete
add esp, 4
mov ebx, dword ptr [ebp+8]
add ebx, 2688
lea eax, [ebx]
push eax
call fb_StrDelete
add esp, 4
mov eax, dword ptr [ebp+8]
add eax, 2672
lea ebx, [eax]
push ebx
call fb_StrDelete
add esp, 4
mov ebx, dword ptr [ebp+8]
add ebx, 2624
lea eax, [ebx]
push eax
call fb_StrDelete
add esp, 4
mov eax, dword ptr [ebp+8]
add eax, 2560
lea ebx, [eax]
mov dword ptr [ebp-8], ebx
mov dword ptr [ebp-4], 0
.Lt_007D:
push dword ptr [ebp-8]
call _ZN12SECTIONENTRYD1Ev
add esp, 4
add dword ptr [ebp-8], -20
inc dword ptr [ebp-4]
cmp dword ptr [ebp-4], 129
jne .Lt_007D
pop ebx
mov esp, ebp
pop ebp
ret
.size _ZN8IRHLCCTXD1Ev, .-_ZN8IRHLCCTXD1Ev
.balign 16
_INIT:
.type _INIT, @function
push ebx
.Lt_008C:
call IRHLINIT
push 6
push 12
push 32
lea eax, [CTX+2588]
push eax
call LISTINIT
add esp, 16
push 6
push 4
push 8
lea eax, [CTX+2640]
push eax
call LISTINIT
add esp, 16
push 7
push 28
push 32
lea eax, [CTX+2752]
push eax
call LISTINIT
add esp, 16
push 6
push 8
push 8
lea eax, [CTX+2796]
push eax
call LISTINIT
add esp, 16
mov eax, dword ptr [IR+284]
or eax, 131074
mov ebx, eax
mov dword ptr [IR+284], ebx
call FBIS64BIT
test eax, eax
je .Lt_008F
mov eax, dword ptr [DTYPENAME+48]
mov dword ptr [DTYPENAME+28], eax
mov eax, dword ptr [DTYPENAME+52]
mov dword ptr [DTYPENAME+32], eax
jmp .Lt_008E
.Lt_008F:
mov eax, dword ptr [DTYPENAME+40]
mov dword ptr [DTYPENAME+28], eax
mov eax, dword ptr [DTYPENAME+44]
mov dword ptr [DTYPENAME+32], eax
.Lt_008E:
.Lt_008D:
pop ebx
ret
.size _INIT, .-_INIT
.balign 16
_END:
.type _END, @function
.Lt_0090:
lea eax, [CTX+2796]
push eax
call LISTEND
add esp, 4
lea eax, [CTX+2752]
push eax
call LISTEND
add esp, 4
lea eax, [CTX+2640]
push eax
call LISTEND
add esp, 4
lea eax, [CTX+2588]
push eax
call LISTEND
add esp, 4
call IRHLEND
.Lt_0091:
ret
.size _END, .-_END
.balign 16
SECTIONBEGIN:
.type SECTIONBEGIN, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0092:
inc dword ptr [CTX+2580]
mov eax, dword ptr [CTX+2580]
imul eax, 20
mov ebx, offset CTX
add ebx, eax
lea eax, [ebx]
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp-4]
mov dword ptr [eax+12], -1
cmp dword ptr [CTX+2580], 0
jle .Lt_0096
mov eax, dword ptr [CTX+2580]
imul eax, 20
mov ebx, offset CTX
add ebx, eax
mov eax, dword ptr [ebp-4]
mov ecx, dword ptr [ebx-4]
mov dword ptr [eax+16], ecx
jmp .Lt_0095
.Lt_0096:
mov ecx, dword ptr [ebp-4]
mov dword ptr [ecx+16], 0
.Lt_0095:
.Lt_0093:
pop ebx
mov esp, ebp
pop ebp
ret
.size SECTIONBEGIN, .-SECTIONBEGIN
.balign 16
SECTIONWRITELINE:
.type SECTIONWRITELINE, @function
push ebp
mov ebp, esp
sub esp, 40
push ebx
.Lt_0097:
mov eax, dword ptr [CTX+2580]
imul eax, 20
mov ebx, offset CTX
add ebx, eax
lea eax, [ebx]
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp-4]
cmp dword ptr [eax+12], 0
je .Lt_009B
mov eax, dword ptr [ebp-4]
cmp dword ptr [eax+16], 0
jle .Lt_009D
push 0
push -1
push 1
push offset Lt_009E
call fb_StrAllocTempDescZEx
add esp, 8
push eax
mov eax, dword ptr [ebp-4]
push dword ptr [eax+16]
call fb_StrFill2
add esp, 8
push eax
push -1
mov eax, dword ptr [ebp-4]
lea ebx, [eax]
push ebx
call fb_StrAssign
add esp, 20
push 0
push -1
push -1
push dword ptr [ebp+8]
push -1
mov eax, dword ptr [ebp-4]
lea ebx, [eax]
push ebx
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
lea ebx, [ebp-28]
push ebx
call fb_StrConcat
add esp, 20
push eax
push -1
mov eax, dword ptr [ebp-4]
lea ebx, [eax]
push ebx
call fb_StrAssign
add esp, 20
jmp .Lt_009C
.Lt_009D:
push 0
push -1
push dword ptr [ebp+8]
push -1
mov eax, dword ptr [ebp-4]
lea ebx, [eax]
push ebx
call fb_StrAssign
add esp, 20
.Lt_009C:
mov eax, dword ptr [ebp-4]
mov dword ptr [eax+12], 0
jmp .Lt_009A
.Lt_009B:
mov eax, dword ptr [ebp-4]
cmp dword ptr [eax+16], 0
jle .Lt_00A1
push 0
push -1
push -1
push 1
push offset Lt_009E
call fb_StrAllocTempDescZEx
add esp, 8
push eax
mov eax, dword ptr [ebp-4]
push dword ptr [eax+16]
call fb_StrFill2
add esp, 8
push eax
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
push -1
mov eax, dword ptr [ebp-4]
lea ebx, [eax]
push ebx
call fb_StrAssign
add esp, 20
.Lt_00A1:
.Lt_00A0:
push 0
push -1
push -1
push dword ptr [ebp+8]
push -1
mov eax, dword ptr [ebp-4]
lea ebx, [eax]
push ebx
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
lea ebx, [ebp-28]
push ebx
call fb_StrConcat
add esp, 20
push eax
push -1
mov eax, dword ptr [ebp-4]
lea ebx, [eax]
push ebx
call fb_StrAssign
add esp, 20
.Lt_009A:
push 0
push -1
push 2
push offset Lt_00A4
push -1
mov eax, dword ptr [ebp-4]
lea ebx, [eax]
push ebx
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
lea ebx, [ebp-16]
push ebx
call fb_StrConcat
add esp, 20
push eax
push -1
mov eax, dword ptr [ebp-4]
lea ebx, [eax]
push ebx
call fb_StrAssign
add esp, 20
.Lt_0098:
pop ebx
mov esp, ebp
pop ebp
ret
.size SECTIONWRITELINE, .-SECTIONWRITELINE
.balign 16
SECTIONINDENT:
.type SECTIONINDENT, @function
push ebx
.Lt_00A6:
mov eax, dword ptr [CTX+2580]
imul eax, 20
mov ebx, offset CTX
add ebx, eax
inc dword ptr [ebx+16]
.Lt_00A7:
pop ebx
ret
.size SECTIONINDENT, .-SECTIONINDENT
.balign 16
SECTIONUNINDENT:
.type SECTIONUNINDENT, @function
push ebx
.Lt_00A8:
mov eax, dword ptr [CTX+2580]
imul eax, 20
mov ebx, offset CTX
add ebx, eax
dec dword ptr [ebx+16]
.Lt_00A9:
pop ebx
ret
.size SECTIONUNINDENT, .-SECTIONUNINDENT
.balign 16
SECTIONINSIDEPROC:
.type SECTIONINSIDEPROC, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_00AA:
mov eax, dword ptr [CTX+2580]
cmp eax, 2
setge al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-4], eax
.Lt_00AB:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size SECTIONINSIDEPROC, .-SECTIONINSIDEPROC
.balign 16
SECTIONEND:
.type SECTIONEND, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
.Lt_00AC:
cmp dword ptr [CTX+2580], 0
jle .Lt_00AF
mov eax, dword ptr [CTX+2580]
imul eax, 20
mov ebx, offset CTX
add ebx, eax
lea eax, [ebx-20]
mov dword ptr [ebp-4], eax
mov eax, dword ptr [CTX+2580]
imul eax, 20
mov ebx, offset CTX
add ebx, eax
lea eax, [ebx]
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
cmp dword ptr [eax+12], 0
jne .Lt_00B1
mov eax, dword ptr [ebp-4]
cmp dword ptr [eax+12], 0
je .Lt_00B3
push 0
push -1
mov eax, dword ptr [ebp-8]
lea ebx, [eax]
push ebx
push -1
mov ebx, dword ptr [ebp-4]
lea eax, [ebx]
push eax
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ebp-4]
mov dword ptr [eax+12], 0
jmp .Lt_00B2
.Lt_00B3:
push 0
push -1
push -1
mov eax, dword ptr [ebp-8]
lea ebx, [eax]
push ebx
push -1
mov ebx, dword ptr [ebp-4]
lea eax, [ebx]
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
mov eax, dword ptr [ebp-4]
lea ebx, [eax]
push ebx
call fb_StrAssign
add esp, 20
.Lt_00B2:
.Lt_00B1:
.Lt_00B0:
.Lt_00AF:
.Lt_00AE:
dec dword ptr [CTX+2580]
.Lt_00AD:
pop ebx
mov esp, ebp
pop ebp
ret
.size SECTIONEND, .-SECTIONEND
.balign 16
SECTIONGOSUB:
.type SECTIONGOSUB, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_00B5:
mov eax, dword ptr [CTX+2580]
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp+8]
mov dword ptr [CTX+2580], eax
inc dword ptr [CTX+2584]
.Lt_00B6:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size SECTIONGOSUB, .-SECTIONGOSUB
.balign 16
SECTIONRETURN:
.type SECTIONRETURN, @function
push ebp
mov ebp, esp
.Lt_00B7:
dec dword ptr [CTX+2584]
mov eax, dword ptr [ebp+8]
mov dword ptr [CTX+2580], eax
.Lt_00B8:
mov esp, ebp
pop ebp
ret
.size SECTIONRETURN, .-SECTIONRETURN
.balign 16
HWRITELINE:
.type HWRITELINE, @function
push ebp
mov ebp, esp
.Lt_00B9:
mov eax, dword ptr [ebp+12]
test eax, eax
sete al
shr eax, 1
sbb eax, eax
and eax, dword ptr [ENV+144]
je .Lt_00BC
push 0
push 7
push offset Lt_00BD
push -1
push offset Lt_06A1
call fb_StrAssign
add esp, 20
push 0
push -1
push dword ptr [CTX+2620]
call fb_IntToStr
add esp, 4
push eax
push -1
push offset Lt_06A1
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_00BE
push -1
push offset Lt_06A1
call fb_StrConcatAssign
add esp, 20
push 0
push -1
lea eax, [CTX+2624]
push eax
push -1
push offset Lt_06A1
call fb_StrConcatAssign
add esp, 20
push 0
push 2
push offset Lt_00BF
push -1
push offset Lt_06A1
call fb_StrConcatAssign
add esp, 20
push offset Lt_06A1
call SECTIONWRITELINE
add esp, 4
.Lt_00BC:
.Lt_00BB:
push dword ptr [ebp+8]
call SECTIONWRITELINE
add esp, 4
.Lt_00BA:
mov esp, ebp
pop ebp
ret
.size HWRITELINE, .-HWRITELINE

.section .bss
.balign 4
	.lcomm	Lt_06A1,12

.section .text
.balign 16
HUPDATECURRENTFILENAME:
.type HUPDATECURRENTFILENAME, @function
push ebp
mov ebp, esp
.Lt_00C0:
push 0
push -1
push offset Lt_00C3
push offset Lt_00C2
push dword ptr [ebp+8]
call HREPLACE
add esp, 12
push eax
push -1
lea eax, [CTX+2624]
push eax
call fb_StrAssign
add esp, 20
.Lt_00C1:
mov esp, ebp
pop ebp
ret
.size HUPDATECURRENTFILENAME, .-HUPDATECURRENTFILENAME
.balign 16
HWRITESTATICASSERT:
.type HWRITESTATICASSERT, @function
push ebp
mov ebp, esp
sub esp, 52
.Lt_00C4:
mov eax, dword ptr [CTX+2636]
and eax, 16
test eax, eax
jne .Lt_00C7
or dword ptr [CTX+2636], 16
push 0
call SECTIONGOSUB
add esp, 4
mov dword ptr [ebp-4], eax
push -1
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
push 0
push 85
push offset Lt_00C8
push -1
lea eax, [ebp-52]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-52]
push eax
call HWRITELINE
add esp, 8
lea eax, [ebp-52]
push eax
call fb_StrDelete
add esp, 4
push dword ptr [ebp-4]
call SECTIONRETURN
add esp, 4
.Lt_00C7:
.Lt_00C6:
push 0
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
push 0
push -1
push 4
push offset Lt_00CB
push -1
push -1
push dword ptr [ebp+8]
push 21
push offset Lt_00CA
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
lea eax, [ebp-40]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-40]
push eax
call HWRITELINE
add esp, 8
lea eax, [ebp-40]
push eax
call fb_StrDelete
add esp, 4
.Lt_00C5:
mov esp, ebp
pop ebp
ret
.size HWRITESTATICASSERT, .-HWRITESTATICASSERT
.balign 16
HAPPENDCTORATTRIB:
.type HAPPENDCTORATTRIB, @function
push ebp
mov ebp, esp
sub esp, 64
push ebx
.Lt_00CF:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+8]
and ebx, 196608
je .Lt_00D2
cmp dword ptr [ebp+16], 0
jne .Lt_00D4
push 0
push -1
push 2
push offset Lt_00D5
push -1
push dword ptr [ebp+8]
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
lea ebx, [ebp-40]
push ebx
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+8]
call fb_StrAssign
add esp, 20
.Lt_00D4:
.Lt_00D3:
push 0
push -1
push 17
push offset Lt_00D7
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
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+8]
and ebx, 65536
je .Lt_00DA
push 0
push -1
push 12
push offset Lt_00DB
push -1
push dword ptr [ebp+8]
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
lea ebx, [ebp-40]
push ebx
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+8]
call fb_StrAssign
add esp, 20
jmp .Lt_00D9
.Lt_00DA:
push 0
push -1
push 11
push offset Lt_00DD
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
.Lt_00D9:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+108]
mov eax, dword ptr [ebx+56]
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
je .Lt_00E0
push 0
push -1
push -1
push 3
push offset Lt_00E2
push -1
push -1
push dword ptr [ebp-4]
call fb_IntToStr
add esp, 4
push eax
push 3
push offset Lt_00E1
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
lea eax, [ebp-40]
push eax
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
push dword ptr [ebp+8]
mov dword ptr [ebp-64], 0
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
lea eax, [ebp-64]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+8]
call fb_StrAssign
add esp, 20
.Lt_00E0:
.Lt_00DF:
push 0
push -1
push 4
push offset Lt_00E6
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
cmp dword ptr [ebp+16], 0
je .Lt_00E9
push 0
push -1
push 2
push offset Lt_00D5
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
.Lt_00E9:
.Lt_00E8:
.Lt_00D2:
.Lt_00D1:
.Lt_00D0:
pop ebx
mov esp, ebp
pop ebp
ret
.size HAPPENDCTORATTRIB, .-HAPPENDCTORATTRIB
.balign 16
HGETMANGLEDNAMEFORASM:
.type HGETMANGLEDNAMEFORASM, @function
push ebp
mov ebp, esp
sub esp, 36
push ebx
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_00EB:
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
push 0
push 0
push dword ptr [ebp+8]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ENV+232]
and eax, dword ptr [ebp+12]
je .Lt_00EE
push 0
push -1
push -1
lea eax, [ebp-24]
push eax
push 2
push offset Lt_00EF
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
lea eax, [ebp-36]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
.Lt_00EE:
.Lt_00ED:
call FBGETCPUFAMILY
test eax, eax
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebx]
cmp ecx, 3
sete cl
shr ecx, 1
sbb ecx, ecx
and eax, ecx
je .Lt_00F2
mov ecx, dword ptr [ebp+8]
cmp dword ptr [ecx+80], 1
jne .Lt_00F4
push 0
push 2
push offset Lt_00F5
push -1
lea ecx, [ebp-24]
push ecx
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
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_00F4:
.Lt_00F3:
.Lt_00F2:
.Lt_00F1:
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
.Lt_00EC:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
pop ebx
mov esp, ebp
pop ebp
ret
.size HGETMANGLEDNAMEFORASM, .-HGETMANGLEDNAMEFORASM
.balign 16
HNEEDALIAS:
.type HNEEDALIAS, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_00F6:
mov dword ptr [ebp-4], 0
call FBGETCPUFAMILY
test eax, eax
je .Lt_00F9
jmp .Lt_00F7
.Lt_00F9:
.Lt_00F8:
mov eax, dword ptr [ENV+108]
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
je .Lt_00FD
.Lt_00FE:
cmp dword ptr [ebp-8], 1
je .Lt_00FD
.Lt_00FF:
cmp dword ptr [ebp-8], 4
jne .Lt_00FC
.Lt_00FD:
jmp .Lt_00FA
.Lt_00FC:
jmp .Lt_00F7
.Lt_0100:
.Lt_00FA:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+80]
mov dword ptr [ebp-8], ebx
cmp dword ptr [ebp-8], 2
je .Lt_0104
.Lt_0105:
cmp dword ptr [ebp-8], 4
jne .Lt_0103
.Lt_0104:
mov dword ptr [ebp-4], -1
jmp .Lt_0101
.Lt_0103:
cmp dword ptr [ebp-8], 1
jne .Lt_0106
.Lt_0107:
push dword ptr [ebp+8]
call SYMBPROCRETURNSONSTACK
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_0106:
.Lt_0101:
.Lt_00F7:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HNEEDALIAS, .-HNEEDALIAS
.balign 16
HEMITPROCHEADER:
.type HEMITPROCHEADER, @function
push ebp
mov ebp, esp
sub esp, 104
push ebx
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_0108:
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
cmp dword ptr [ebp+12], 0
jne .Lt_010B
push -1
push dword ptr [ebp+8]
lea eax, [ebp-24]
push eax
call HAPPENDCTORATTRIB
add esp, 12
.Lt_010B:
.Lt_010A:
mov eax, dword ptr [ebp+12]
and eax, 2
test eax, eax
jne .Lt_010D
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 64
test ebx, ebx
je .Lt_010F
push 0
push 8
push offset Lt_0110
push -1
lea ebx, [ebp-24]
push ebx
call fb_StrConcatAssign
add esp, 20
.Lt_010F:
.Lt_010E:
.Lt_010D:
.Lt_010C:
push 0
push -1
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+88]
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+84]
and ebx, 511
push ebx
call HEMITTYPE
add esp, 8
push eax
push -1
lea eax, [ebp-24]
push eax
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
lea eax, [ebp-56]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
call FBGETCPUFAMILY
test eax, eax
jne .Lt_0113
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+80]
mov dword ptr [ebp-72], ebx
cmp dword ptr [ebp-72], 1
je .Lt_0117
.Lt_0118:
cmp dword ptr [ebp-72], 2
je .Lt_0117
.Lt_0119:
cmp dword ptr [ebp-72], 4
jne .Lt_0116
.Lt_0117:
mov ebx, dword ptr [ENV+108]
mov dword ptr [ebp-76], ebx
cmp dword ptr [ebp-76], 0
je .Lt_011D
.Lt_011E:
cmp dword ptr [ebp-76], 4
jne .Lt_011C
.Lt_011D:
push 0
push 11
push offset Lt_011F
push -1
lea ebx, [ebp-24]
push ebx
call fb_StrConcatAssign
add esp, 20
jmp .Lt_011A
.Lt_011C:
push 0
push 26
push offset Lt_0121
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_0120:
.Lt_011A:
.Lt_0116:
.Lt_0114:
.Lt_0113:
.Lt_0112:
push 0
push 2
push offset Lt_00D5
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 0
push dword ptr [ebp+8]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
push -1
lea eax, [ebp-36]
push eax
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ebp+12]
and eax, 2
je .Lt_0123
push 0
push 3
push offset Lt_0124
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
lea eax, [ebp-36]
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 2
push offset Lt_0125
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_0122
.Lt_0123:
push 0
push -1
lea eax, [ebp-36]
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_0122:
push 0
push 3
push offset Lt_00E1
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
mov dword ptr [ebp-60], 0
push dword ptr [ebp+8]
call SYMBPROCRETURNSONSTACK
add esp, 4
test eax, eax
je .Lt_0127
mov eax, dword ptr [ebp+12]
and eax, 1
je .Lt_0129
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+28]
mov dword ptr [ebp-60], ebx
push 0
push -1
push -1
push dword ptr [ebp-60]
mov ebx, dword ptr [ebp-60]
mov eax, dword ptr [ebx+24]
and eax, 511
and eax, 31
mov ebx, dword ptr [ebp-60]
mov ecx, dword ptr [ebx+24]
and ecx, 511
and ecx, 480
add ecx, 32
or eax, ecx
mov ecx, dword ptr [ebp-60]
mov ebx, dword ptr [ecx+24]
and ebx, 511
and ebx, 261632
sal ebx, 1
or eax, ebx
push eax
call HEMITTYPE
add esp, 8
push eax
push -1
lea eax, [ebp-24]
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
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
jmp .Lt_0128
.Lt_0129:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+108]
mov eax, dword ptr [ebx]
mov dword ptr [ebp-60], eax
push 0
push -1
push -1
mov eax, dword ptr [ebp-60]
push dword ptr [eax+28]
mov eax, dword ptr [ebp-60]
mov ebx, dword ptr [eax+24]
and ebx, 511
and ebx, 31
mov eax, dword ptr [ebp-60]
mov ecx, dword ptr [eax+24]
and ecx, 511
and ecx, 480
add ecx, 32
or ebx, ecx
mov ecx, dword ptr [ebp-60]
mov eax, dword ptr [ecx+24]
and eax, 511
and eax, 261632
sal eax, 1
or ebx, eax
push ebx
call HEMITTYPE
add esp, 8
push eax
push -1
lea eax, [ebp-24]
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
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
push 0
push -1
push -1
push 0
push dword ptr [ebp-60]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
push 2
push offset Lt_00D5
mov dword ptr [ebp-92], 0
mov dword ptr [ebp-88], 0
mov dword ptr [ebp-84], 0
lea eax, [ebp-92]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-24]
push eax
mov dword ptr [ebp-104], 0
mov dword ptr [ebp-100], 0
mov dword ptr [ebp-96], 0
lea eax, [ebp-104]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
.Lt_0128:
mov eax, dword ptr [ebp+8]
movsx ebx, word ptr [eax+64]
test ebx, ebx
jle .Lt_012F
push 0
push 3
push offset Lt_0130
push -1
lea ebx, [ebp-24]
push ebx
call fb_StrConcatAssign
add esp, 20
.Lt_012F:
.Lt_012E:
.Lt_0127:
.Lt_0126:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+80], 4
jne .Lt_0131
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+76]
mov dword ptr [ebp-64], ebx
jmp .Lt_06A4
.Lt_0131:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+72]
mov dword ptr [ebp-64], eax
.Lt_06A4:
mov eax, dword ptr [ebp-64]
mov dword ptr [ebp-68], eax
cmp dword ptr [ebp-60], 0
sete al
shr eax, 1
sbb eax, eax
cmp dword ptr [ebp-68], 0
sete bl
shr ebx, 1
sbb ebx, ebx
and eax, ebx
je .Lt_0134
push 0
push 5
push offset Lt_0080
push -1
lea ebx, [ebp-24]
push ebx
call fb_StrConcatAssign
add esp, 20
.Lt_0134:
.Lt_0133:
.Lt_0135:
cmp dword ptr [ebp-68], 0
je .Lt_0136
mov eax, dword ptr [ebp-68]
cmp dword ptr [eax+52], 4
jne .Lt_0138
push 0
push 4
push offset Lt_0139
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_0137
.Lt_0138:
mov eax, dword ptr [ebp-68]
mov ebx, dword ptr [eax+8]
and ebx, 524288
je .Lt_013B
push 0
push 7
push offset Lt_013C
push -1
lea ebx, [ebp-24]
push ebx
call fb_StrConcatAssign
add esp, 20
jmp .Lt_013A
.Lt_013B:
lea eax, [ebp-44]
push eax
lea eax, [ebp-40]
push eax
push dword ptr [ebp-68]
call _Z21SYMBGETREALPARAMDTYPEP8FBSYMBOLRiRS0_
add esp, 12
push 0
push -1
push dword ptr [ebp-44]
push dword ptr [ebp-40]
call HEMITTYPE
add esp, 8
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_013A:
mov eax, dword ptr [ebp+12]
and eax, 1
test eax, eax
jne .Lt_013E
push 0
push -1
push -1
push 0
mov eax, dword ptr [ebp-68]
push dword ptr [eax+56]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
push 2
push offset Lt_00D5
mov dword ptr [ebp-84], 0
mov dword ptr [ebp-80], 0
mov dword ptr [ebp-76], 0
lea eax, [ebp-84]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-24]
push eax
mov dword ptr [ebp-96], 0
mov dword ptr [ebp-92], 0
mov dword ptr [ebp-88], 0
lea eax, [ebp-96]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
.Lt_013E:
.Lt_013D:
.Lt_0137:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+80], 4
jne .Lt_0141
mov eax, dword ptr [ebp-68]
mov ebx, dword ptr [eax+156]
mov dword ptr [ebp-72], ebx
jmp .Lt_06A5
.Lt_0141:
mov ebx, dword ptr [ebp-68]
mov eax, dword ptr [ebx+160]
mov dword ptr [ebp-72], eax
.Lt_06A5:
mov eax, dword ptr [ebp-72]
mov dword ptr [ebp-68], eax
cmp dword ptr [ebp-68], 0
je .Lt_0144
push 0
push 3
push offset Lt_0130
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_0144:
.Lt_0143:
jmp .Lt_0135
.Lt_0136:
push 0
push 3
push offset Lt_00E2
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
mov eax, dword ptr [ebp+12]
and eax, 2
test eax, eax
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp+12]
and ebx, 1
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
and eax, ebx
je .Lt_0146
push dword ptr [ebp+8]
call HNEEDALIAS
add esp, 4
test eax, eax
je .Lt_0148
push 0
push 7
push offset Lt_0149
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push -1
push dword ptr [ebp+8]
call HGETMANGLEDNAMEFORASM
add esp, 8
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_014A
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_0148:
.Lt_0147:
push 0
push dword ptr [ebp+8]
lea eax, [ebp-24]
push eax
call HAPPENDCTORATTRIB
add esp, 12
.Lt_0146:
.Lt_0145:
push 0
push -1
lea eax, [ebp-24]
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
lea eax, [ebp-24]
push eax
call fb_StrDelete
add esp, 4
.Lt_0109:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
pop ebx
mov esp, ebp
pop ebp
ret
.size HEMITPROCHEADER, .-HEMITPROCHEADER
.balign 16
HGETUDTTAG:
.type HGETUDTTAG, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_014B:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 10
jne .Lt_014E
mov eax, dword ptr [ebp+8]
movsx ebx, word ptr [eax+112]
and ebx, 1
test ebx, ebx
je .Lt_0150
push 0
push 7
push offset Lt_0151
push -1
lea ebx, [ebp-12]
push ebx
call fb_StrAssign
add esp, 20
jmp .Lt_014F
.Lt_0150:
push 0
push 8
push offset Lt_0152
push -1
lea ebx, [ebp-12]
push ebx
call fb_StrAssign
add esp, 20
.Lt_014F:
.Lt_014E:
.Lt_014D:
.Lt_014C:
lea ebx, [ebp-12]
push ebx
call fb_StrAllocTempResult
add esp, 4
pop ebx
mov esp, ebp
pop ebp
ret
.size HGETUDTTAG, .-HGETUDTTAG
.balign 16
HGETUDTID:
.type HGETUDTID, @function
push ebp
mov ebp, esp
sub esp, 24
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_0153:
push 0
push -1
push 0
push dword ptr [ebp+8]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
push 2
push offset Lt_0155
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ebp-24]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
.Lt_0154:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
mov esp, ebp
pop ebp
ret
.size HGETUDTID, .-HGETUDTID
.balign 16
HGETUDTNAME:
.type HGETUDTNAME, @function
push ebp
mov ebp, esp
sub esp, 12
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_0157:
push 0
push -1
push dword ptr [ebp+8]
call HGETUDTTAG
add esp, 4
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
push 0
push -1
push dword ptr [ebp+8]
call HGETUDTID
add esp, 4
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_0158:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
mov esp, ebp
pop ebp
ret
.size HGETUDTNAME, .-HGETUDTNAME
.balign 16
HEMITUDT:
.type HEMITUDT, @function
push ebp
mov ebp, esp
sub esp, 68
push ebx
.Lt_0159:
cmp dword ptr [ebp+8], 0
jne .Lt_015C
jmp .Lt_015A
.Lt_015C:
.Lt_015B:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+8]
and ebx, 67108864
test ebx, ebx
je .Lt_015E
jmp .Lt_015A
.Lt_015E:
.Lt_015D:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 128
test eax, eax
je .Lt_0160
mov eax, dword ptr [ebp+8]
movzx ebx, word ptr [eax+32]
inc ebx
mov dword ptr [ebp-4], ebx
mov ebx, dword ptr [ebp+8]
movzx eax, word ptr [ebx+32]
test eax, eax
jne .Lt_0162
inc dword ptr [ebp-4]
.Lt_0162:
.Lt_0161:
mov eax, dword ptr [CTX+2580]
cmp dword ptr [ebp-4], eax
jle .Lt_0164
mov eax, dword ptr [CTX+2580]
mov dword ptr [ebp-4], eax
.Lt_0164:
.Lt_0163:
jmp .Lt_015F
.Lt_0160:
mov dword ptr [ebp-4], 0
.Lt_015F:
push dword ptr [ebp-4]
call SECTIONGOSUB
add esp, 4
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-8], ebx
jmp .Lt_0166
.Lt_0168:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+8]
or eax, 67108864
mov ebx, eax
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+8], ebx
push 0
mov dword ptr [ebp-68], 0
mov dword ptr [ebp-64], 0
mov dword ptr [ebp-60], 0
push 0
push -1
push 2
push offset Lt_016A
push -1
push -1
push dword ptr [ebp+8]
call HGETUDTNAME
add esp, 4
push eax
push -1
push 2
push offset Lt_00D5
push -1
push -1
push 0
push 9
call HEMITTYPE
add esp, 8
push eax
push 9
push offset Lt_0169
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
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
lea eax, [ebp-44]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
lea eax, [ebp-56]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-68]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-68]
push eax
call HWRITELINE
add esp, 8
lea eax, [ebp-68]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0165
.Lt_0170:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HEMITSTRUCT
add esp, 8
jmp .Lt_0165
.Lt_0171:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+8]
and ebx, 16384
test ebx, ebx
je .Lt_0173
push 0
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
push 0
push -1
push 2
push offset Lt_016A
push -1
push -1
push 3
push dword ptr [ebp+8]
call HEMITPROCHEADER
add esp, 8
push eax
push 9
push offset Lt_0169
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
lea eax, [ebp-44]
push eax
call HWRITELINE
add esp, 8
lea eax, [ebp-44]
push eax
call fb_StrDelete
add esp, 4
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+8]
or ebx, 67108864
mov eax, ebx
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+8], eax
.Lt_0173:
.Lt_0172:
jmp .Lt_0165
.Lt_0166:
mov eax, dword ptr [ebp-8]
add eax, 4294967293
cmp eax, 7
ja .Lt_0165
mov eax, dword ptr [ebp-8]
jmp dword ptr [.LT_0177+eax*4-12]
.LT_0177:
.int .Lt_0171
.int .Lt_0165
.int .Lt_0165
.int .Lt_0165
.int .Lt_0165
.int .Lt_0165
.int .Lt_0168
.int .Lt_0170
.Lt_0165:
push dword ptr [ebp-4]
call SECTIONRETURN
add esp, 4
.Lt_015A:
pop ebx
mov esp, ebp
pop ebp
ret
.size HEMITUDT, .-HEMITUDT
.balign 16
HEMITARRAYDECL:
.type HEMITARRAYDECL, @function
push ebp
mov ebp, esp
sub esp, 80
push ebx
push esi
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_0178:
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-36], ebx
cmp dword ptr [ebp-36], 1
je .Lt_017D
.Lt_017E:
cmp dword ptr [ebp-36], 12
jne .Lt_017C
.Lt_017D:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 65540
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_0180
mov dword ptr [ebp-40], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
dec ebx
mov dword ptr [ebp-44], ebx
jmp .Lt_0182
.Lt_0185:
push 0
push -1
push -1
push 2
push offset Lt_0187
push -1
push -1
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp-40]
sal eax, 4
mov ecx, dword ptr [ebx+60]
add ecx, eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-40]
sal ebx, 4
mov esi, dword ptr [eax+60]
add esi, ebx
mov eax, dword ptr [ecx+8]
mov ebx, dword ptr [ecx+12]
sub eax, dword ptr [esi]
sbb ebx, dword ptr [esi+4]
add eax, 1
adc ebx, 0
push ebx
push eax
call fb_LongintToStr
add esp, 8
push eax
push 2
push offset Lt_0186
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
lea eax, [ebp-56]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-68], 0
mov dword ptr [ebp-64], 0
mov dword ptr [ebp-60], 0
lea eax, [ebp-68]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-24]
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
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
.Lt_0183:
inc dword ptr [ebp-40]
.Lt_0182:
mov eax, dword ptr [ebp-44]
cmp dword ptr [ebp-40], eax
jle .Lt_0185
.Lt_0184:
.Lt_0180:
.Lt_017F:
.Lt_017C:
.Lt_017A:
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+24]
and ebx, 511
mov dword ptr [ebp-36], ebx
cmp dword ptr [ebp-36], 17
je .Lt_018E
.Lt_018F:
cmp dword ptr [ebp-36], 3
jne .Lt_018D
.Lt_018E:
mov ebx, dword ptr [ebp+8]
mov esi, dword ptr [ebx+36]
mov eax, dword ptr [ebx+40]
mov dword ptr [ebp-32], esi
mov dword ptr [ebp-28], eax
jmp .Lt_018B
.Lt_018D:
cmp dword ptr [ebp-36], 6
jne .Lt_0190
.Lt_0191:
mov eax, dword ptr [SYMB_DTYPETB+172]
mov esi, eax
sar esi, 31
push esi
push eax
mov eax, dword ptr [ebp+8]
push dword ptr [eax+40]
push dword ptr [eax+36]
call __divdi3
add esp, 16
mov dword ptr [ebp-32], eax
mov dword ptr [ebp-28], edx
.Lt_0190:
.Lt_018B:
cmp dword ptr [ebp-28], 0
jl .Lt_0193
jg .Lt_06AB
cmp dword ptr [ebp-32], 0
jbe .Lt_0193
.Lt_06AB:
push 0
push 2
push offset Lt_0186
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push dword ptr [ebp-28]
push dword ptr [ebp-32]
call fb_LongintToStr
add esp, 8
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 2
push offset Lt_0187
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_0193:
.Lt_0192:
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
.Lt_0179:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size HEMITARRAYDECL, .-HEMITARRAYDECL
.balign 16
HEMITVARDECL:
.type HEMITVARDECL, @function
push ebp
mov ebp, esp
sub esp, 72
push ebx
.Lt_0194:
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
cmp dword ptr [ebp+8], 0
je .Lt_0197
push 0
push 8
push offset Lt_0198
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_0196
.Lt_0197:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 2
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax+4]
and ecx, 56
test ecx, ecx
sete cl
shr ecx, 1
sbb ecx, ecx
and ebx, ecx
je .Lt_0199
push 0
push 8
push offset Lt_0110
push -1
lea ecx, [ebp-12]
push ecx
call fb_StrConcatAssign
add esp, 20
.Lt_0199:
.Lt_0196:
push 0
push -1
push -1
mov eax, dword ptr [ebp+12]
push dword ptr [eax+28]
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax+24]
and ecx, 511
push ecx
call HEMITTYPE
add esp, 8
push eax
push -1
lea eax, [ebp-12]
push eax
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ebp-24]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
push 0
push -1
push -1
push 0
push dword ptr [ebp+12]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
push 2
push offset Lt_00D5
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
lea eax, [ebp-36]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-12]
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
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
push 0
push -1
push dword ptr [ebp+12]
call HEMITARRAYDECL
add esp, 4
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax+4]
and ecx, 512
test ecx, ecx
je .Lt_019E
push 0
push 28
push offset Lt_019F
push -1
lea ecx, [ebp-12]
push ecx
call fb_StrConcatAssign
add esp, 20
.Lt_019E:
.Lt_019D:
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax+4]
and ecx, 8
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
mov eax, dword ptr [ebp+8]
not eax
and ecx, eax
je .Lt_01A1
push 0
push 25
push offset Lt_01A2
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_01A1:
.Lt_01A0:
cmp dword ptr [ebp+16], 0
je .Lt_01A4
push 0
push -1
push -1
push 0
push dword ptr [ebp+16]
push 4
push offset Lt_01A5
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
lea eax, [ebp-60]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-12]
push eax
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
mov dword ptr [ebp-64], 0
lea eax, [ebp-72]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
.Lt_01A4:
.Lt_01A3:
push 0
push 2
push offset Lt_016A
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
lea eax, [ebp-12]
push eax
call HWRITELINE
add esp, 8
lea eax, [ebp-12]
push eax
call fb_StrDelete
add esp, 4
.Lt_0195:
pop ebx
mov esp, ebp
pop ebp
ret
.size HEMITVARDECL, .-HEMITVARDECL
.balign 16
HMAYBEEMITLOCALVAR:
.type HMAYBEEMITLOCALVAR, @function
push ebp
mov ebp, esp
push ebx
.Lt_01A8:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 65540
test ebx, ebx
je .Lt_01AB
jmp .Lt_01A9
.Lt_01AB:
.Lt_01AA:
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx+52], 0
setne al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebx+4]
and ecx, 2
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
and eax, ecx
je .Lt_01AD
push dword ptr [ebp+8]
call IRHLFLUSHSTATICINITIALIZER
add esp, 4
jmp .Lt_01AC
.Lt_01AD:
push 0
push dword ptr [ebp+8]
push 0
call HEMITVARDECL
add esp, 12
.Lt_01AC:
.Lt_01A9:
pop ebx
mov esp, ebp
pop ebp
ret
.size HMAYBEEMITLOCALVAR, .-HMAYBEEMITLOCALVAR
.balign 16
HALLOCGLOBALVAR:
.type HALLOCGLOBALVAR, @function
push ebp
mov ebp, esp
push ebx
.Lt_01AE:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+52], 0
je .Lt_01B1
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 32
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+8]
and ecx, 2
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
or ebx, ecx
not ebx
test ebx, ebx
je .Lt_01B3
jmp .Lt_01AF
.Lt_01B3:
.Lt_01B2:
push dword ptr [ebp+8]
call IRHLFLUSHSTATICINITIALIZER
add esp, 4
jmp .Lt_01B0
.Lt_01B1:
push 0
push dword ptr [ebp+8]
push 0
call HEMITVARDECL
add esp, 12
.Lt_01B0:
.Lt_01AF:
pop ebx
mov esp, ebp
pop ebp
ret
.size HALLOCGLOBALVAR, .-HALLOCGLOBALVAR
.balign 16
HMAYBEEMITGLOBALVAR:
.type HMAYBEEMITGLOBALVAR, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
push esi
.Lt_01B4:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 524288
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+4]
and ecx, 16
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
mov eax, dword ptr [ebp+8]
mov esi, dword ptr [eax+8]
and esi, 2
test esi, esi
setne dl
mov esi, edx
shr esi, 1
sbb esi, esi
not esi
and ecx, esi
or ebx, ecx
mov ecx, dword ptr [ebp+8]
mov esi, dword ptr [ecx+4]
and esi, 65540
test esi, esi
setne dl
mov esi, edx
shr esi, 1
sbb esi, esi
or ebx, esi
je .Lt_01B7
jmp .Lt_01B5
.Lt_01B7:
.Lt_01B6:
mov esi, dword ptr [CTX+2828]
mov dword ptr [ebp-4], esi
cmp dword ptr [ebp-4], 1
jne .Lt_01BA
.Lt_01BB:
mov esi, dword ptr [ebp+8]
mov ebx, dword ptr [esi+4]
and ebx, 56
je .Lt_01BD
push 0
push dword ptr [ebp+8]
push -1
call HEMITVARDECL
add esp, 12
jmp .Lt_01BC
.Lt_01BD:
push dword ptr [ebp+8]
call HALLOCGLOBALVAR
add esp, 4
.Lt_01BC:
jmp .Lt_01B8
.Lt_01BA:
cmp dword ptr [ebp-4], 2
jne .Lt_01BE
.Lt_01BF:
mov ebx, dword ptr [ebp+8]
mov esi, dword ptr [ebx+4]
and esi, 40
je .Lt_01C1
push dword ptr [ebp+8]
call HALLOCGLOBALVAR
add esp, 4
.Lt_01C1:
.Lt_01C0:
.Lt_01BE:
.Lt_01B8:
.Lt_01B5:
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size HMAYBEEMITGLOBALVAR, .-HMAYBEEMITGLOBALVAR
.balign 16
HMAYBEEMITGLOBALVAREXCEPTDATASTMT:
.type HMAYBEEMITGLOBALVAREXCEPTDATASTMT, @function
push ebp
mov ebp, esp
.Lt_01C2:
push dword ptr [ebp+8]
call SYMBISDATADESC
add esp, 4
test eax, eax
je .Lt_01C5
jmp .Lt_01C3
.Lt_01C5:
.Lt_01C4:
push dword ptr [ebp+8]
call HMAYBEEMITGLOBALVAR
add esp, 4
.Lt_01C3:
mov esp, ebp
pop ebp
ret
.size HMAYBEEMITGLOBALVAREXCEPTDATASTMT, .-HMAYBEEMITGLOBALVAREXCEPTDATASTMT
.balign 16
HMAYBEEMITPROCPROTO:
.type HMAYBEEMITPROCPROTO, @function
push ebp
mov ebp, esp
sub esp, 28
push ebx
.Lt_01C6:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+8]
and ebx, 16384
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+8]
and ecx, 2
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
not ecx
or ebx, ecx
je .Lt_01C9
jmp .Lt_01C7
.Lt_01C9:
.Lt_01C8:
push dword ptr [ebp+8]
call SYMBGETMANGLEDNAME
add esp, 4
test eax, eax
jne .Lt_01CB
jmp .Lt_01C7
.Lt_01CB:
.Lt_01CA:
push 0
call SECTIONGOSUB
add esp, 4
mov dword ptr [ebp-4], eax
push 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
push 0
push -1
push 2
push offset Lt_016A
push -1
push 1
push dword ptr [ebp+8]
call HEMITPROCHEADER
add esp, 8
push eax
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
lea eax, [ebp-16]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-28]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-28]
push eax
call HWRITELINE
add esp, 8
lea eax, [ebp-28]
push eax
call fb_StrDelete
add esp, 4
push dword ptr [ebp-4]
call SECTIONRETURN
add esp, 4
.Lt_01C7:
pop ebx
mov esp, ebp
pop ebp
ret
.size HMAYBEEMITPROCPROTO, .-HMAYBEEMITPROCPROTO
.balign 16
HEMITFIELDTYPES:
.type HEMITFIELDTYPES, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_01CE:
push dword ptr [ebp+8]
call SYMBUDTGETFIRSTFIELD
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_01D0:
cmp dword ptr [ebp-4], 0
je .Lt_01D1
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+24]
and ebx, 511
and ebx, 480
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
push ebx
mov ebx, dword ptr [ebp-4]
push dword ptr [ebx+28]
call HEMITUDT
add esp, 8
push dword ptr [ebp-4]
call SYMBUDTGETNEXTFIELD
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_01D0
.Lt_01D1:
.Lt_01CF:
pop ebx
mov esp, ebp
pop ebp
ret
.size HEMITFIELDTYPES, .-HEMITFIELDTYPES
.balign 16
HFINDPARENTANONALREADYONSTACK:
.type HFINDPARENTANONALREADYONSTACK, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_01D2:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+152]
mov dword ptr [ebp-12], ebx
.Lt_01D4:
lea ebx, [CTX+2640]
push ebx
call LISTGETTAIL
add esp, 4
mov dword ptr [ebp-8], eax
.Lt_01D7:
cmp dword ptr [ebp-8], 0
je .Lt_01D8
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp-12]
cmp dword ptr [eax], ebx
jne .Lt_01DA
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ebx
jmp .Lt_01D3
.Lt_01DA:
.Lt_01D9:
push dword ptr [ebp-8]
call LISTGETPREV
add esp, 4
mov dword ptr [ebp-8], eax
jmp .Lt_01D7
.Lt_01D8:
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax+152]
mov dword ptr [ebp-12], ebx
.Lt_01D6:
cmp dword ptr [ebp-12], 0
jne .Lt_01D4
.Lt_01D5:
mov dword ptr [ebp-4], 0
.Lt_01D3:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HFINDPARENTANONALREADYONSTACK, .-HFINDPARENTANONALREADYONSTACK
.balign 16
HPUSHANONPARENTS:
.type HPUSHANONPARENTS, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
.Lt_01DB:
mov eax, dword ptr [ebp+8]
cmp dword ptr [ebp+12], eax
jne .Lt_01DE
jmp .Lt_01DC
.Lt_01DE:
.Lt_01DD:
mov eax, dword ptr [ebp+12]
push dword ptr [eax+152]
push dword ptr [ebp+8]
call HPUSHANONPARENTS
add esp, 8
mov eax, dword ptr [ebp+12]
movsx ebx, word ptr [eax+112]
and ebx, 1
test ebx, ebx
je .Lt_01E0
push -1
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
push 0
push 8
push offset Lt_01E1
push -1
lea ebx, [ebp-12]
push ebx
call fb_StrAssign
add esp, 20
lea eax, [ebp-12]
push eax
call HWRITELINE
add esp, 8
lea eax, [ebp-12]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_01DF
.Lt_01E0:
push -1
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
push 0
push 9
push offset Lt_01E3
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-12]
push eax
call HWRITELINE
add esp, 8
lea eax, [ebp-12]
push eax
call fb_StrDelete
add esp, 4
.Lt_01DF:
call SECTIONINDENT
lea eax, [CTX+2640]
push eax
call LISTNEWNODE
add esp, 4
mov ebx, dword ptr [ebp+12]
mov dword ptr [eax], ebx
.Lt_01DC:
pop ebx
mov esp, ebp
pop ebp
ret
.size HPUSHANONPARENTS, .-HPUSHANONPARENTS
.balign 16
HPOPANONPARENTS:
.type HPOPANONPARENTS, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
.Lt_01E5:
.Lt_01E7:
lea eax, [CTX+2640]
push eax
call LISTGETTAIL
add esp, 4
mov ebx, dword ptr [ebp+8]
cmp eax, ebx
je .Lt_01E8
call SECTIONUNINDENT
push -1
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
push 0
push 3
push offset Lt_01E9
push -1
lea ebx, [ebp-12]
push ebx
call fb_StrAssign
add esp, 20
lea eax, [ebp-12]
push eax
call HWRITELINE
add esp, 8
lea eax, [ebp-12]
push eax
call fb_StrDelete
add esp, 4
lea eax, [CTX+2640]
push eax
call LISTGETTAIL
add esp, 4
push eax
lea eax, [CTX+2640]
push eax
call LISTDELNODE
add esp, 8
jmp .Lt_01E7
.Lt_01E8:
.Lt_01E6:
pop ebx
mov esp, ebp
pop ebp
ret
.size HPOPANONPARENTS, .-HPOPANONPARENTS
.balign 16
HEMITSTRUCTWITHFIELDS:
.type HEMITSTRUCTWITHFIELDS, @function
push ebp
mov ebp, esp
sub esp, 64
push ebx
.Lt_01EB:
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push dword ptr [ebp+8]
call SYMBUDTGETFIRSTFIELD
add esp, 4
mov dword ptr [ebp-20], eax
.Lt_01ED:
cmp dword ptr [ebp-20], 0
je .Lt_01EE
mov eax, dword ptr [ebp-20]
mov ebx, dword ptr [ebp+8]
cmp dword ptr [eax+152], ebx
jne .Lt_01F0
push 0
call HPOPANONPARENTS
add esp, 4
jmp .Lt_01EF
.Lt_01F0:
push dword ptr [ebp-20]
call HFINDPARENTANONALREADYONSTACK
add esp, 4
mov dword ptr [ebp-24], eax
push dword ptr [ebp-24]
call HPOPANONPARENTS
add esp, 4
mov eax, dword ptr [ebp-20]
push dword ptr [eax+152]
cmp dword ptr [ebp-24], 0
je .Lt_01F1
mov eax, dword ptr [ebp-24]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-40], ebx
jmp .Lt_06BA
.Lt_01F1:
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebp-40], ebx
.Lt_06BA:
push dword ptr [ebp-40]
call HPUSHANONPARENTS
add esp, 8
.Lt_01EF:
mov ebx, dword ptr [ebp-20]
mov eax, dword ptr [ebx+4]
and eax, 4
test eax, eax
setne al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
jne .Lt_01F4
mov eax, dword ptr [ebp-20]
mov ebx, dword ptr [eax+24]
and ebx, 511
mov dword ptr [ebp-8], ebx
mov ebx, dword ptr [ebp-20]
mov eax, dword ptr [ebx+28]
mov dword ptr [ebp-16], eax
push 0
push -1
push dword ptr [ebp-16]
push dword ptr [ebp-8]
call HEMITTYPE
add esp, 8
push eax
push -1
lea eax, [ebp-36]
push eax
call fb_StrAssign
add esp, 20
push 0
push -1
push -1
push 0
mov eax, dword ptr [ebp-20]
push dword ptr [eax+12]
push 2
push offset Lt_00D5
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
lea eax, [ebp-48]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-36]
push eax
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
lea eax, [ebp-60]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-36]
push eax
call fb_StrAssign
add esp, 20
push 0
push -1
push dword ptr [ebp-20]
call HEMITARRAYDECL
add esp, 4
push eax
push -1
lea eax, [ebp-36]
push eax
call fb_StrConcatAssign
add esp, 20
mov eax, dword ptr [ebp+8]
movzx ebx, byte ptr [eax+115]
mov dword ptr [ebp-12], ebx
cmp dword ptr [ebp-12], 0
jle .Lt_01F8
push dword ptr [ebp-16]
push dword ptr [ebp-8]
call TYPECALCNATURALALIGN
add esp, 8
mov ebx, dword ptr [ebp-12]
cmp ebx, eax
setge bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-4], ebx
mov ebx, dword ptr [ebp-8]
and ebx, 480
je .Lt_01F9
mov dword ptr [ebp-64], 22
jmp .Lt_06BB
.Lt_01F9:
mov ebx, dword ptr [ebp-8]
and ebx, 31
mov dword ptr [ebp-64], ebx
.Lt_06BB:
cmp dword ptr [ebp-64], 18
jne .Lt_01FC
mov ebx, dword ptr [ebp-16]
movzx eax, byte ptr [ebx+115]
mov ebx, dword ptr [ebp-12]
cmp ebx, eax
setge bl
shr ebx, 1
sbb ebx, ebx
or dword ptr [ebp-4], ebx
.Lt_01FC:
.Lt_01FB:
cmp dword ptr [ebp-4], 0
jne .Lt_01FE
push 0
push 33
push offset Lt_01FF
push -1
lea ebx, [ebp-36]
push ebx
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push dword ptr [ebp-12]
call fb_IntToStr
add esp, 4
push eax
push -1
lea eax, [ebp-36]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 4
push offset Lt_0200
push -1
lea eax, [ebp-36]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_01FE:
.Lt_01FD:
.Lt_01F8:
.Lt_01F7:
push 0
push 2
push offset Lt_016A
push -1
lea eax, [ebp-36]
push eax
call fb_StrConcatAssign
add esp, 20
push -1
lea eax, [ebp-36]
push eax
call HWRITELINE
add esp, 8
.Lt_01F4:
.Lt_01F3:
push dword ptr [ebp-20]
call SYMBUDTGETNEXTFIELD
add esp, 4
mov dword ptr [ebp-20], eax
jmp .Lt_01ED
.Lt_01EE:
push 0
call HPOPANONPARENTS
add esp, 4
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
.Lt_01EC:
pop ebx
mov esp, ebp
pop ebp
ret
.size HEMITSTRUCTWITHFIELDS, .-HEMITSTRUCTWITHFIELDS
.balign 16
HEMITSTRUCT:
.type HEMITSTRUCT, @function
push ebp
mov ebp, esp
sub esp, 124
push ebx
.Lt_0201:
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+8]
and ebx, 134217728
test ebx, ebx
je .Lt_0204
cmp dword ptr [ebp+12], 0
je .Lt_0206
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+8]
and eax, 2
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_0208
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+8]
or ebx, 2
mov eax, ebx
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+8], eax
push 0
mov dword ptr [ebp-112], 0
mov dword ptr [ebp-108], 0
mov dword ptr [ebp-104], 0
push 0
push -1
push 2
push offset Lt_016A
push -1
push dword ptr [ebp+8]
call HGETUDTNAME
add esp, 4
push eax
mov dword ptr [ebp-100], 0
mov dword ptr [ebp-96], 0
mov dword ptr [ebp-92], 0
lea eax, [ebp-100]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-112]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-112]
push eax
call HWRITELINE
add esp, 8
lea eax, [ebp-112]
push eax
call fb_StrDelete
add esp, 4
.Lt_0208:
.Lt_0207:
lea eax, [ebp-16]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0202
.Lt_0206:
.Lt_0205:
.Lt_0204:
.Lt_0203:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+8]
or ebx, 134217728
mov eax, ebx
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+8], eax
mov eax, dword ptr [ebp+8]
movsx ebx, word ptr [eax+112]
and ebx, 32768
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
not ebx
mov dword ptr [ebp-4], ebx
cmp dword ptr [ebp-4], 0
je .Lt_020C
push dword ptr [ebp+8]
call HEMITFIELDTYPES
add esp, 4
.Lt_020C:
.Lt_020B:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+8]
and eax, 67108864
test eax, eax
je .Lt_020E
lea eax, [ebp-16]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0202
.Lt_020E:
.Lt_020D:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+8]
or ebx, 67108864
mov eax, ebx
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+8], eax
push 0
push -1
push dword ptr [ebp+8]
call HGETUDTTAG
add esp, 4
push eax
push -1
lea eax, [ebp-16]
push eax
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ENV+108]
test eax, eax
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp+8]
movzx ecx, byte ptr [ebx+115]
test ecx, ecx
setg cl
shr ecx, 1
sbb ecx, ecx
and eax, ecx
je .Lt_0210
push 0
push 29
push offset Lt_0211
push -1
lea ecx, [ebp-16]
push ecx
call fb_StrConcatAssign
add esp, 20
.Lt_0210:
.Lt_020F:
push 0
push -1
push dword ptr [ebp+8]
call HGETUDTID
add esp, 4
push eax
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_0212
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
push -1
lea eax, [ebp-16]
push eax
call HWRITELINE
add esp, 8
call SECTIONINDENT
cmp dword ptr [ebp-4], 0
je .Lt_0214
push dword ptr [ebp+8]
call HEMITSTRUCTWITHFIELDS
add esp, 4
jmp .Lt_0213
.Lt_0214:
push -1
mov dword ptr [ebp-124], 0
mov dword ptr [ebp-120], 0
mov dword ptr [ebp-116], 0
push 0
push -1
push 3
push offset Lt_0216
push -1
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+40]
push dword ptr [eax+36]
call fb_LongintToStr
add esp, 8
push eax
push 24
push offset Lt_0215
mov dword ptr [ebp-100], 0
mov dword ptr [ebp-96], 0
mov dword ptr [ebp-92], 0
lea eax, [ebp-100]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-112], 0
mov dword ptr [ebp-108], 0
mov dword ptr [ebp-104], 0
lea eax, [ebp-112]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-124]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-124]
push eax
call HWRITELINE
add esp, 8
lea eax, [ebp-124]
push eax
call fb_StrDelete
add esp, 4
.Lt_0213:
call SECTIONUNINDENT
push -1
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
push 0
push 3
push offset Lt_01E9
push -1
lea eax, [ebp-28]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-28]
push eax
call HWRITELINE
add esp, 8
lea eax, [ebp-28]
push eax
call fb_StrDelete
add esp, 4
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+8]
and ecx, -134217729
mov eax, ecx
mov ecx, dword ptr [ebp+8]
mov dword ptr [ecx+8], eax
mov dword ptr [ebp-88], 0
mov dword ptr [ebp-84], 0
mov dword ptr [ebp-80], 0
push 0
push -1
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+40]
push dword ptr [eax+36]
call fb_ULongintToStr
add esp, 8
push eax
push -1
push 7
push offset Lt_021C
push -1
push -1
push dword ptr [ebp+8]
call HGETUDTID
add esp, 4
push eax
push -1
push -1
push dword ptr [ebp+8]
call HGETUDTTAG
add esp, 4
push eax
push 9
push offset Lt_021B
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
lea eax, [ebp-40]
push eax
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
mov dword ptr [ebp-64], 0
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
lea eax, [ebp-64]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
lea eax, [ebp-76]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-88]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-88]
push eax
call HWRITESTATICASSERT
add esp, 4
lea eax, [ebp-88]
push eax
call fb_StrDelete
add esp, 4
lea eax, [ebp-16]
push eax
call fb_StrDelete
add esp, 4
.Lt_0202:
pop ebx
mov esp, ebp
pop ebp
ret
.size HEMITSTRUCT, .-HEMITSTRUCT
.balign 16
HWRITEX86F2I:
.type HWRITEX86F2I, @function
push ebp
mov ebp, esp
sub esp, 336
.Lt_0222:
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
cmp dword ptr [ebp+12], 10
jne .Lt_0225
push 0
push 6
push offset Lt_0085
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
push 0
push 2
push offset Lt_0226
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
jmp .Lt_0224
.Lt_0225:
push 0
push 6
push offset Lt_0087
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
push 0
push 2
push offset Lt_0227
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
.Lt_0224:
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
cmp dword ptr [ebp+16], 14
jne .Lt_0229
push 0
push 6
push offset Lt_0089
push -1
lea eax, [ebp-36]
push eax
call fb_StrAssign
add esp, 20
push 0
push 2
push offset Lt_022A
push -1
lea eax, [ebp-48]
push eax
call fb_StrAssign
add esp, 20
jmp .Lt_0228
.Lt_0229:
push 0
push 7
push offset Lt_008A
push -1
lea eax, [ebp-36]
push eax
call fb_StrAssign
add esp, 20
push 0
push 2
push offset Lt_0226
push -1
lea eax, [ebp-48]
push eax
call fb_StrAssign
add esp, 20
.Lt_0228:
cmp dword ptr [ENV+132], 0
jne .Lt_022C
push 0
push 1
push offset Lt_0000
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
push 0
push 1
push offset Lt_0000
push -1
lea eax, [ebp-48]
push eax
call fb_StrAssign
add esp, 20
.Lt_022C:
.Lt_022B:
push -1
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
push 0
push 1
push offset Lt_0000
push -1
lea eax, [ebp-60]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-60]
push eax
call HWRITELINE
add esp, 8
lea eax, [ebp-60]
push eax
call fb_StrDelete
add esp, 4
push -1
mov dword ptr [ebp-144], 0
mov dword ptr [ebp-140], 0
mov dword ptr [ebp-136], 0
push 0
push -1
push 9
push offset Lt_0230
push -1
push -1
lea eax, [ebp-36]
push eax
push -1
push 3
push offset Lt_00E1
push -1
push -1
push dword ptr [ebp+8]
push -1
push 5
push offset Lt_022F
push -1
push -1
lea eax, [ebp-12]
push eax
push 15
push offset Lt_022E
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
mov dword ptr [ebp-64], 0
lea eax, [ebp-72]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-84], 0
mov dword ptr [ebp-80], 0
mov dword ptr [ebp-76], 0
lea eax, [ebp-84]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-96], 0
mov dword ptr [ebp-92], 0
mov dword ptr [ebp-88], 0
lea eax, [ebp-96]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-108], 0
mov dword ptr [ebp-104], 0
mov dword ptr [ebp-100], 0
lea eax, [ebp-108]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-120], 0
mov dword ptr [ebp-116], 0
mov dword ptr [ebp-112], 0
lea eax, [ebp-120]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-132], 0
mov dword ptr [ebp-128], 0
mov dword ptr [ebp-124], 0
lea eax, [ebp-132]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-144]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-144]
push eax
call HWRITELINE
add esp, 8
lea eax, [ebp-144]
push eax
call fb_StrDelete
add esp, 4
push -1
mov dword ptr [ebp-156], 0
mov dword ptr [ebp-152], 0
mov dword ptr [ebp-148], 0
push 0
push 2
push offset Lt_0238
push -1
lea eax, [ebp-156]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-156]
push eax
call HWRITELINE
add esp, 8
lea eax, [ebp-156]
push eax
call fb_StrDelete
add esp, 4
call SECTIONINDENT
push -1
mov dword ptr [ebp-192], 0
mov dword ptr [ebp-188], 0
mov dword ptr [ebp-184], 0
push 0
push -1
push 9
push offset Lt_023B
push -1
push -1
lea eax, [ebp-12]
push eax
push 10
push offset Lt_023A
mov dword ptr [ebp-168], 0
mov dword ptr [ebp-164], 0
mov dword ptr [ebp-160], 0
lea eax, [ebp-168]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-180], 0
mov dword ptr [ebp-176], 0
mov dword ptr [ebp-172], 0
lea eax, [ebp-180]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-192]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-192]
push eax
call HWRITELINE
add esp, 8
lea eax, [ebp-192]
push eax
call fb_StrDelete
add esp, 4
push -1
mov dword ptr [ebp-204], 0
mov dword ptr [ebp-200], 0
mov dword ptr [ebp-196], 0
push 0
push 9
push offset Lt_023F
push -1
lea eax, [ebp-204]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-204]
push eax
call HWRITELINE
add esp, 8
lea eax, [ebp-204]
push eax
call fb_StrDelete
add esp, 4
call SECTIONINDENT
push -1
mov dword ptr [ebp-240], 0
mov dword ptr [ebp-236], 0
mov dword ptr [ebp-232], 0
push 0
push -1
push 6
push offset Lt_0242
push -1
push -1
lea eax, [ebp-48]
push eax
push 5
push offset Lt_0241
mov dword ptr [ebp-216], 0
mov dword ptr [ebp-212], 0
mov dword ptr [ebp-208], 0
lea eax, [ebp-216]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-228], 0
mov dword ptr [ebp-224], 0
mov dword ptr [ebp-220], 0
lea eax, [ebp-228]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-240]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-240]
push eax
call HWRITELINE
add esp, 8
lea eax, [ebp-240]
push eax
call fb_StrDelete
add esp, 4
push -1
mov dword ptr [ebp-276], 0
mov dword ptr [ebp-272], 0
mov dword ptr [ebp-268], 0
push 0
push -1
push 6
push offset Lt_0247
push -1
push -1
lea eax, [ebp-24]
push eax
push 7
push offset Lt_0246
mov dword ptr [ebp-252], 0
mov dword ptr [ebp-248], 0
mov dword ptr [ebp-244], 0
lea eax, [ebp-252]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-264], 0
mov dword ptr [ebp-260], 0
mov dword ptr [ebp-256], 0
lea eax, [ebp-264]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-276]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-276]
push eax
call HWRITELINE
add esp, 8
lea eax, [ebp-276]
push eax
call fb_StrDelete
add esp, 4
push -1
mov dword ptr [ebp-288], 0
mov dword ptr [ebp-284], 0
mov dword ptr [ebp-280], 0
push 0
push 15
push offset Lt_024B
push -1
lea eax, [ebp-288]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-288]
push eax
call HWRITELINE
add esp, 8
lea eax, [ebp-288]
push eax
call fb_StrDelete
add esp, 4
push -1
mov dword ptr [ebp-300], 0
mov dword ptr [ebp-296], 0
mov dword ptr [ebp-292], 0
push 0
push 13
push offset Lt_024D
push -1
lea eax, [ebp-300]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-300]
push eax
call HWRITELINE
add esp, 8
lea eax, [ebp-300]
push eax
call fb_StrDelete
add esp, 4
call SECTIONUNINDENT
push -1
mov dword ptr [ebp-312], 0
mov dword ptr [ebp-308], 0
mov dword ptr [ebp-304], 0
push 0
push 3
push offset Lt_024F
push -1
lea eax, [ebp-312]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-312]
push eax
call HWRITELINE
add esp, 8
lea eax, [ebp-312]
push eax
call fb_StrDelete
add esp, 4
push -1
mov dword ptr [ebp-324], 0
mov dword ptr [ebp-320], 0
mov dword ptr [ebp-316], 0
push 0
push 15
push offset Lt_0251
push -1
lea eax, [ebp-324]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-324]
push eax
call HWRITELINE
add esp, 8
lea eax, [ebp-324]
push eax
call fb_StrDelete
add esp, 4
call SECTIONUNINDENT
push -1
mov dword ptr [ebp-336], 0
mov dword ptr [ebp-332], 0
mov dword ptr [ebp-328], 0
push 0
push 2
push offset Lt_0253
push -1
lea eax, [ebp-336]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-336]
push eax
call HWRITELINE
add esp, 8
lea eax, [ebp-336]
push eax
call fb_StrDelete
add esp, 4
lea eax, [ebp-48]
push eax
call fb_StrDelete
add esp, 4
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
lea eax, [ebp-24]
push eax
call fb_StrDelete
add esp, 4
lea eax, [ebp-12]
push eax
call fb_StrDelete
add esp, 4
.Lt_0223:
mov esp, ebp
pop ebp
ret
.size HWRITEX86F2I, .-HWRITEX86F2I
.balign 16
HWRITEGENERICF2I:
.type HWRITEGENERICF2I, @function
push ebp
mov ebp, esp
sub esp, 108
.Lt_0255:
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
cmp dword ptr [ebp+12], 10
jne .Lt_0258
push 0
push 6
push offset Lt_0085
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
jmp .Lt_0257
.Lt_0258:
push 0
push 6
push offset Lt_0087
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
.Lt_0257:
cmp dword ptr [ebp+16], 14
jne .Lt_025A
push 0
push 11
push offset Lt_025B
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
jmp .Lt_0259
.Lt_025A:
push 0
push 10
push offset Lt_025C
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
.Lt_0259:
push -1
mov dword ptr [ebp-108], 0
mov dword ptr [ebp-104], 0
mov dword ptr [ebp-100], 0
push 0
push -1
push 11
push offset Lt_0260
push -1
push -1
lea eax, [ebp-24]
push eax
push -1
push 12
push offset Lt_025F
push -1
push -1
lea eax, [ebp-12]
push eax
push -1
push 13
push offset Lt_025E
push -1
push -1
push dword ptr [ebp+8]
push 12
push offset Lt_025D
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
lea eax, [ebp-36]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
lea eax, [ebp-48]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
lea eax, [ebp-60]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
mov dword ptr [ebp-64], 0
lea eax, [ebp-72]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-84], 0
mov dword ptr [ebp-80], 0
mov dword ptr [ebp-76], 0
lea eax, [ebp-84]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-96], 0
mov dword ptr [ebp-92], 0
mov dword ptr [ebp-88], 0
lea eax, [ebp-96]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-108]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-108]
push eax
call HWRITELINE
add esp, 8
lea eax, [ebp-108]
push eax
call fb_StrDelete
add esp, 4
lea eax, [ebp-24]
push eax
call fb_StrDelete
add esp, 4
lea eax, [ebp-12]
push eax
call fb_StrDelete
add esp, 4
.Lt_0256:
mov esp, ebp
pop ebp
ret
.size HWRITEGENERICF2I, .-HWRITEGENERICF2I
.balign 16
HWRITEF2I:
.type HWRITEF2I, @function
push ebp
mov ebp, esp
.Lt_0268:
call FBGETCPUFAMILY
test eax, eax
jne .Lt_026B
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HWRITEX86F2I
add esp, 12
jmp .Lt_026A
.Lt_026B:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HWRITEGENERICF2I
add esp, 12
.Lt_026A:
.Lt_0269:
mov esp, ebp
pop ebp
ret
.size HWRITEF2I, .-HWRITEF2I
.balign 16
HMAYBEEMITPROCEXPORT:
.type HMAYBEEMITPROCEXPORT, @function
push ebp
mov ebp, esp
push ebx
.Lt_026C:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 256
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_026F
jmp .Lt_026D
.Lt_026F:
.Lt_026E:
push 0
push 3
push offset Lt_0270
push -1
lea ebx, [CTX+2700]
push ebx
call fb_StrConcatAssign
add esp, 20
push 0
push 10
push offset Lt_0271
push -1
lea eax, [CTX+2700]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 16
push offset Lt_0272
push -1
lea eax, [CTX+2700]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push 0
push dword ptr [ebp+8]
call HGETMANGLEDNAMEFORASM
add esp, 8
push eax
push -1
lea eax, [CTX+2700]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 7
push offset Lt_0273
push -1
lea eax, [CTX+2700]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_0274
push -1
lea eax, [CTX+2700]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_0275
push -1
lea eax, [CTX+2700]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_026D:
pop ebx
mov esp, ebp
pop ebp
ret
.size HMAYBEEMITPROCEXPORT, .-HMAYBEEMITPROCEXPORT
.balign 16
_EMITBEGIN:
.type _EMITBEGIN, @function
push ebp
mov ebp, esp
sub esp, 196
mov dword ptr [ebp-4], 0
.Lt_0276:
lea eax, [ENV+524]
push eax
call HFILEEXISTS
add esp, 4
test eax, eax
je .Lt_0279
lea eax, [ENV+524]
push eax
call fb_StrAllocTempDescZ
add esp, 4
push eax
call fb_FileKill
add esp, 4
.Lt_0279:
.Lt_0278:
call fb_FileFree
mov dword ptr [ENV+520], eax
push 0
push dword ptr [ENV+520]
push 0
push 3
push 0
lea eax, [ENV+524]
push eax
call fb_StrAllocTempDescZ
add esp, 4
push eax
call fb_FileOpen
add esp, 24
test eax, eax
je .Lt_027B
mov dword ptr [ebp-4], 0
jmp .Lt_0277
.Lt_027B:
.Lt_027A:
mov dword ptr [CTX+2580], -1
mov dword ptr [CTX+2584], 0
mov dword ptr [CTX+2620], 0
mov dword ptr [CTX+2636], 0
mov dword ptr [CTX+2828], 0
lea eax, [ENV+244]
push eax
call HUPDATECURRENTFILENAME
add esp, 4
call SECTIONBEGIN
cmp dword ptr [ENV+144], 0
je .Lt_027D
push 0
push 0
push 108
call _EMITDBG
add esp, 12
.Lt_027D:
.Lt_027C:
push -1
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
push 0
push -1
push -1
call fb_Date
push eax
push -1
push 5
push offset Lt_0280
push -1
push -1
call fb_Time
push eax
push -1
push 13
push offset Lt_027F
push -1
push 261
lea eax, [ENV+244]
push eax
push 19
push offset Lt_027E
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
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
lea eax, [ebp-40]
push eax
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
mov dword ptr [ebp-64], 0
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
lea eax, [ebp-64]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-76]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-76]
push eax
call HWRITELINE
add esp, 8
lea eax, [ebp-76]
push eax
call fb_StrDelete
add esp, 4
push -1
mov dword ptr [ebp-88], 0
mov dword ptr [ebp-84], 0
mov dword ptr [ebp-80], 0
push 0
push 1
push offset Lt_0000
push -1
lea eax, [ebp-88]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-88]
push eax
call HWRITELINE
add esp, 8
lea eax, [ebp-88]
push eax
call fb_StrDelete
add esp, 4
push -1
mov dword ptr [ebp-100], 0
mov dword ptr [ebp-96], 0
mov dword ptr [ebp-92], 0
push 0
push 34
push offset Lt_0288
push -1
lea eax, [ebp-100]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-100]
push eax
call HWRITELINE
add esp, 8
lea eax, [ebp-100]
push eax
call fb_StrDelete
add esp, 4
push -1
mov dword ptr [ebp-112], 0
mov dword ptr [ebp-108], 0
mov dword ptr [ebp-104], 0
push 0
push 34
push offset Lt_028A
push -1
lea eax, [ebp-112]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-112]
push eax
call HWRITELINE
add esp, 8
lea eax, [ebp-112]
push eax
call fb_StrDelete
add esp, 4
push -1
mov dword ptr [ebp-124], 0
mov dword ptr [ebp-120], 0
mov dword ptr [ebp-116], 0
push 0
push 35
push offset Lt_028C
push -1
lea eax, [ebp-124]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-124]
push eax
call HWRITELINE
add esp, 8
lea eax, [ebp-124]
push eax
call fb_StrDelete
add esp, 4
push -1
mov dword ptr [ebp-136], 0
mov dword ptr [ebp-132], 0
mov dword ptr [ebp-128], 0
push 0
push 35
push offset Lt_028E
push -1
lea eax, [ebp-136]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-136]
push eax
call HWRITELINE
add esp, 8
lea eax, [ebp-136]
push eax
call fb_StrDelete
add esp, 4
push -1
mov dword ptr [ebp-148], 0
mov dword ptr [ebp-144], 0
mov dword ptr [ebp-140], 0
push 0
push 35
push offset Lt_0290
push -1
lea eax, [ebp-148]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-148]
push eax
call HWRITELINE
add esp, 8
lea eax, [ebp-148]
push eax
call fb_StrDelete
add esp, 4
push -1
mov dword ptr [ebp-160], 0
mov dword ptr [ebp-156], 0
mov dword ptr [ebp-152], 0
push 0
push 35
push offset Lt_0292
push -1
lea eax, [ebp-160]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-160]
push eax
call HWRITELINE
add esp, 8
lea eax, [ebp-160]
push eax
call fb_StrDelete
add esp, 4
push -1
mov dword ptr [ebp-172], 0
mov dword ptr [ebp-168], 0
mov dword ptr [ebp-164], 0
push 0
push 35
push offset Lt_0294
push -1
lea eax, [ebp-172]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-172]
push eax
call HWRITELINE
add esp, 8
lea eax, [ebp-172]
push eax
call fb_StrDelete
add esp, 4
push -1
mov dword ptr [ebp-184], 0
mov dword ptr [ebp-180], 0
mov dword ptr [ebp-176], 0
push 0
push 35
push offset Lt_0296
push -1
lea eax, [ebp-184]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-184]
push eax
call HWRITELINE
add esp, 8
lea eax, [ebp-184]
push eax
call fb_StrDelete
add esp, 4
call FBIS64BIT
test eax, eax
je .Lt_0299
push -1
mov dword ptr [ebp-196], 0
mov dword ptr [ebp-192], 0
mov dword ptr [ebp-188], 0
push 0
push 64
push offset Lt_029A
push -1
lea eax, [ebp-196]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-196]
push eax
call HWRITELINE
add esp, 8
lea eax, [ebp-196]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0298
.Lt_0299:
push -1
mov dword ptr [ebp-196], 0
mov dword ptr [ebp-192], 0
mov dword ptr [ebp-188], 0
push 0
push 64
push offset Lt_029C
push -1
lea eax, [ebp-196]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-196]
push eax
call HWRITELINE
add esp, 8
lea eax, [ebp-196]
push eax
call fb_StrDelete
add esp, 4
.Lt_0298:
call SECTIONBEGIN
mov dword ptr [ebp-4], -1
.Lt_0277:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size _EMITBEGIN, .-_EMITBEGIN
.balign 16
_EMITEND:
.type _EMITEND, @function
push ebp
mov ebp, esp
sub esp, 76
.Lt_029E:
lea eax, [ENV+244]
push eax
call HUPDATECURRENTFILENAME
add esp, 4
push 0
call SECTIONGOSUB
add esp, 4
mov dword ptr [ebp-4], eax
mov eax, dword ptr [CTX+2636]
and eax, 1
je .Lt_02A1
push 14
push 10
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
push 0
push 4
push offset Lt_02A2
push -1
lea eax, [ebp-52]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-52]
push eax
call HWRITEF2I
add esp, 12
lea eax, [ebp-52]
push eax
call fb_StrDelete
add esp, 4
.Lt_02A1:
.Lt_02A0:
mov eax, dword ptr [CTX+2636]
and eax, 2
je .Lt_02A5
push 14
push 12
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
push 0
push 4
push offset Lt_02A6
push -1
lea eax, [ebp-52]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-52]
push eax
call HWRITEF2I
add esp, 12
lea eax, [ebp-52]
push eax
call fb_StrDelete
add esp, 4
.Lt_02A5:
.Lt_02A4:
mov eax, dword ptr [CTX+2636]
and eax, 4
je .Lt_02A9
push 15
push 10
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
push 0
push 4
push offset Lt_02AA
push -1
lea eax, [ebp-52]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-52]
push eax
call HWRITEF2I
add esp, 12
lea eax, [ebp-52]
push eax
call fb_StrDelete
add esp, 4
.Lt_02A9:
.Lt_02A8:
mov eax, dword ptr [CTX+2636]
and eax, 8
je .Lt_02AD
push 15
push 12
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
push 0
push 4
push offset Lt_02AE
push -1
lea eax, [ebp-52]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-52]
push eax
call HWRITEF2I
add esp, 12
lea eax, [ebp-52]
push eax
call fb_StrDelete
add esp, 4
.Lt_02AD:
.Lt_02AC:
push offset HMAYBEEMITPROCPROTO
push 3
call SYMBFOREACHGLOBAL
add esp, 8
mov dword ptr [CTX+2828], 1
push offset HMAYBEEMITGLOBALVAREXCEPTDATASTMT
push 1
call SYMBFOREACHGLOBAL
add esp, 8
push offset HMAYBEEMITGLOBALVAR
call IRFOREACHDATASTMT
add esp, 4
mov dword ptr [CTX+2828], 2
push offset HMAYBEEMITGLOBALVAREXCEPTDATASTMT
push 1
call SYMBFOREACHGLOBAL
add esp, 8
push offset HMAYBEEMITGLOBALVAR
call IRFOREACHDATASTMT
add esp, 4
push dword ptr [ebp-4]
call SECTIONRETURN
add esp, 4
mov eax, dword ptr [ENV+224]
and eax, 4
and eax, dword ptr [ENV+184]
je .Lt_02B1
push offset HMAYBEEMITPROCEXPORT
push 3
call SYMBFOREACHGLOBAL
add esp, 8
push -1
lea eax, [CTX+2700]
push eax
call fb_StrLen
add esp, 8
test eax, eax
jle .Lt_02B3
push -1
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
push 0
push -1
push 3
push offset Lt_024F
push -1
push -1
lea eax, [CTX+2700]
push eax
push 35
push offset Lt_02B4
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
lea eax, [ebp-52]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-64], 0
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
lea eax, [ebp-64]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-76]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-76]
push eax
call HWRITELINE
add esp, 8
lea eax, [ebp-76]
push eax
call fb_StrDelete
add esp, 4
.Lt_02B3:
.Lt_02B2:
push 0
push 1
push offset Lt_0000
push -1
lea eax, [CTX+2700]
push eax
call fb_StrAssign
add esp, 20
.Lt_02B1:
.Lt_02B0:
call SECTIONEND
push -1
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
push 0
push -1
push 10
push offset Lt_02B9
push -1
push -1
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call fb_DoubleToStr
add esp, 8
push eax
push 29
push offset Lt_02B8
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
lea eax, [ebp-40]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-40]
push eax
call HWRITELINE
add esp, 8
lea eax, [ebp-40]
push eax
call fb_StrDelete
add esp, 4
cmp dword ptr [CTX+12], 0
jne .Lt_02BE
push -1
lea eax, [CTX]
push eax
push 0
push dword ptr [ENV+520]
call fb_FilePutStr
add esp, 16
test eax, eax
je .Lt_02C0
.Lt_02C0:
.Lt_02BF:
.Lt_02BE:
.Lt_02BD:
call SECTIONEND
push dword ptr [ENV+520]
call fb_FileClose
add esp, 4
test eax, eax
je .Lt_02C2
.Lt_02C2:
.Lt_02C1:
mov dword ptr [ENV+520], 0
.Lt_029F:
mov esp, ebp
pop ebp
ret
.size _EMITEND, .-_EMITEND
.balign 16
_GETOPTIONVALUE:
.type _GETOPTIONVALUE, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_02C3:
cmp dword ptr [ebp+8], 1
jne .Lt_02C6
.Lt_02C7:
mov dword ptr [ebp-4], 0
jmp .Lt_02C4
jmp .Lt_02C5
.Lt_02C6:
push 0
push 1
push 0
push offset Lt_02C9
push 21
call ERRREPORTEX
add esp, 20
.Lt_02C8:
.Lt_02C5:
.Lt_02C4:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size _GETOPTIONVALUE, .-_GETOPTIONVALUE
.balign 16
_SUPPORTSOP:
.type _SUPPORTSOP, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_02CA:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-8], eax
jmp .Lt_02CD
.Lt_02CF:
mov dword ptr [ebp-4], 0
jmp .Lt_02CC
.Lt_02D0:
mov dword ptr [ebp-4], -1
jmp .Lt_02CC
.Lt_02CD:
mov eax, dword ptr [ebp-8]
add eax, 4294967239
cmp eax, 15
ja .Lt_02D0
mov eax, dword ptr [ebp-8]
jmp dword ptr [.LT_02D1+eax*4-228]
.LT_02D1:
.int .Lt_02CF
.int .Lt_02D0
.int .Lt_02D0
.int .Lt_02D0
.int .Lt_02D0
.int .Lt_02D0
.int .Lt_02D0
.int .Lt_02D0
.int .Lt_02D0
.int .Lt_02CF
.int .Lt_02CF
.int .Lt_02D0
.int .Lt_02D0
.int .Lt_02D0
.int .Lt_02CF
.int .Lt_02CF
.Lt_02CC:
.Lt_02CB:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size _SUPPORTSOP, .-_SUPPORTSOP
.balign 16
_PROCBEGIN:
.type _PROCBEGIN, @function
push ebp
mov ebp, esp
push ebx
.Lt_02D2:
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebx+108]
mov ebx, dword ptr [eax+16548]
mov dword ptr [ecx+16], ebx
.Lt_02D3:
pop ebx
mov esp, ebp
pop ebp
ret
.size _PROCBEGIN, .-_PROCBEGIN
.balign 16
_PROCEND:
.type _PROCEND, @function
push ebp
mov ebp, esp
push ebx
.Lt_02D4:
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebx+108]
mov ebx, dword ptr [eax+16548]
mov dword ptr [ecx+20], ebx
.Lt_02D5:
pop ebx
mov esp, ebp
pop ebp
ret
.size _PROCEND, .-_PROCEND
.balign 16
_SCOPEBEGIN:
.type _SCOPEBEGIN, @function
push ebp
mov ebp, esp
.Lt_02D6:
.Lt_02D7:
mov esp, ebp
pop ebp
ret
.size _SCOPEBEGIN, .-_SCOPEBEGIN
.balign 16
_SCOPEEND:
.type _SCOPEEND, @function
push ebp
mov ebp, esp
.Lt_02D8:
.Lt_02D9:
mov esp, ebp
pop ebp
ret
.size _SCOPEEND, .-_SCOPEEND
.balign 16
_PROCALLOCSTATICVARS:
.type _PROCALLOCSTATICVARS, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
.Lt_02DA:
push 0
call SECTIONGOSUB
add esp, 4
mov dword ptr [ebp-8], eax
.Lt_02DC:
cmp dword ptr [ebp+8], 0
je .Lt_02DD
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-12], ebx
cmp dword ptr [ebp-12], 15
jne .Lt_02E0
.Lt_02E1:
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+60]
call _PROCALLOCSTATICVARS
add esp, 4
jmp .Lt_02DE
.Lt_02E0:
cmp dword ptr [ebp-12], 1
jne .Lt_02E2
.Lt_02E3:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 2
test eax, eax
setne al
shr eax, 1
sbb eax, eax
push dword ptr [ebp+8]
mov ebx, eax
call SYMBHASDTOR
add esp, 4
and ebx, eax
je .Lt_02E5
push dword ptr [ebp+8]
call HMAYBEEMITLOCALVAR
add esp, 4
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+80]
mov dword ptr [ebp-4], ebx
cmp dword ptr [ebp-4], 0
je .Lt_02E7
push dword ptr [ebp-4]
call HMAYBEEMITLOCALVAR
add esp, 4
.Lt_02E7:
.Lt_02E6:
.Lt_02E5:
.Lt_02E4:
.Lt_02E2:
.Lt_02DE:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+160]
mov dword ptr [ebp+8], eax
jmp .Lt_02DC
.Lt_02DD:
push dword ptr [ebp-8]
call SECTIONRETURN
add esp, 4
.Lt_02DB:
pop ebx
mov esp, ebp
pop ebp
ret
.size _PROCALLOCSTATICVARS, .-_PROCALLOCSTATICVARS
.balign 16
_SETVREGDATATYPE:
.type _SETVREGDATATYPE, @function
push ebp
mov ebp, esp
push ebx
.Lt_02E8:
cmp dword ptr [ebp+8], 0
je .Lt_02EB
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+12]
mov dword ptr [eax+4], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp+16]
mov dword ptr [ebx+8], eax
.Lt_02EB:
.Lt_02EA:
.Lt_02E9:
pop ebx
mov esp, ebp
pop ebp
ret
.size _SETVREGDATATYPE, .-_SETVREGDATATYPE
.balign 16
HEMITTYPE:
.type HEMITTYPE, @function
push ebp
mov ebp, esp
sub esp, 36
push ebx
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_02EC:
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
mov eax, dword ptr [ebp+8]
and eax, 480
sar eax, 5
mov dword ptr [ebp-28], eax
and dword ptr [ebp+8], 31
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-32], eax
jmp .Lt_02EF
.Lt_02F1:
cmp dword ptr [ebp+12], 0
je .Lt_02F3
mov eax, dword ptr [ebp-28]
test eax, eax
setg al
shr eax, 1
sbb eax, eax
push eax
push dword ptr [ebp+12]
call HEMITUDT
add esp, 8
push 0
push -1
push dword ptr [ebp+12]
call HGETUDTNAME
add esp, 4
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
jmp .Lt_02F2
.Lt_02F3:
cmp dword ptr [ebp+8], 9
jne .Lt_02F4
push 0
push 0
mov eax, dword ptr [ebp+8]
and eax, 480
je .Lt_02F5
mov dword ptr [ebp-36], 22
jmp .Lt_06C5
.Lt_02F5:
mov eax, dword ptr [ebp+8]
and eax, 31
mov dword ptr [ebp-36], eax
.Lt_06C5:
mov eax, dword ptr [ebp-36]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+16]
push dword ptr [DTYPENAME+ebx*4]
push -1
lea ebx, [ebp-24]
push ebx
call fb_StrAssign
add esp, 20
jmp .Lt_02F2
.Lt_02F4:
push 0
push 0
push dword ptr [DTYPENAME]
push -1
lea ebx, [ebp-24]
push ebx
call fb_StrAssign
add esp, 20
.Lt_02F2:
jmp .Lt_02EE
.Lt_02F7:
dec dword ptr [ebp-28]
mov ebx, dword ptr [ebp-28]
test ebx, ebx
setg bl
shr ebx, 1
sbb ebx, ebx
push ebx
push dword ptr [ebp+12]
call HEMITUDT
add esp, 8
push 0
push 0
push dword ptr [ebp+12]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
jmp .Lt_02EE
.Lt_02F8:
push 0
push 0
mov eax, dword ptr [ebp+8]
and eax, 480
je .Lt_02F9
mov dword ptr [ebp-36], 22
jmp .Lt_06C6
.Lt_02F9:
mov eax, dword ptr [ebp+8]
and eax, 31
mov dword ptr [ebp-36], eax
.Lt_06C6:
mov eax, dword ptr [ebp-36]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+16]
push dword ptr [DTYPENAME+ebx*4]
push -1
lea ebx, [ebp-24]
push ebx
call fb_StrAssign
add esp, 20
jmp .Lt_02EE
.Lt_02FB:
push 0
push 0
push dword ptr [DTYPENAME+8]
push -1
lea ebx, [ebp-24]
push ebx
call fb_StrAssign
add esp, 20
jmp .Lt_02EE
.Lt_02FC:
push 0
push 0
mov ebx, dword ptr [ebp+8]
push dword ptr [DTYPENAME+ebx*4]
push -1
lea ebx, [ebp-24]
push ebx
call fb_StrAssign
add esp, 20
jmp .Lt_02EE
.Lt_02EF:
mov ebx, dword ptr [ebp-32]
add ebx, 4294967293
cmp ebx, 17
ja .Lt_02FC
mov ebx, dword ptr [ebp-32]
jmp dword ptr [.LT_02FD+ebx*4-12]
.LT_02FD:
.int .Lt_02F8
.int .Lt_02FC
.int .Lt_02FC
.int .Lt_02F8
.int .Lt_02FC
.int .Lt_02FC
.int .Lt_02F1
.int .Lt_02FC
.int .Lt_02FC
.int .Lt_02FC
.int .Lt_02FC
.int .Lt_02FC
.int .Lt_02FC
.int .Lt_02FC
.int .Lt_02FB
.int .Lt_02F1
.int .Lt_02FC
.int .Lt_02F7
.Lt_02EE:
cmp dword ptr [ebp-28], 0
jle .Lt_02FF
push 0
push -1
push 1
push offset Lt_0300
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push dword ptr [ebp-28]
call fb_StrFill2
add esp, 8
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_02FF:
.Lt_02FE:
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
.Lt_02ED:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
pop ebx
mov esp, ebp
pop ebp
ret
.size HEMITTYPE, .-HEMITTYPE
.balign 16
EXPRNEW:
.type EXPRNEW, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0301:
lea eax, [CTX+2752]
push eax
call LISTNEWNODE
add esp, 4
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+8]
mov dword ptr [eax], ebx
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebp+12]
mov dword ptr [ebx+4], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+16]
mov dword ptr [eax+8], ebx
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ebx
.Lt_0302:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size EXPRNEW, .-EXPRNEW
.balign 16
EXPRFREENODE:
.type EXPRFREENODE, @function
push ebp
mov ebp, esp
.Lt_0303:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 0
jne .Lt_0306
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+20], 0
je .Lt_0308
mov eax, dword ptr [ebp+8]
push dword ptr [eax+20]
call free
add esp, 4
.Lt_0308:
.Lt_0307:
.Lt_0306:
.Lt_0305:
push dword ptr [ebp+8]
lea eax, [CTX+2752]
push eax
call LISTDELNODE
add esp, 8
.Lt_0304:
mov esp, ebp
pop ebp
ret
.size EXPRFREENODE, .-EXPRFREENODE
.balign 16
EXPRFREETREE:
.type EXPRFREETREE, @function
push ebp
mov ebp, esp
.Lt_0309:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+12], 0
je .Lt_030C
mov eax, dword ptr [ebp+8]
push dword ptr [eax+12]
call EXPRFREETREE
add esp, 4
.Lt_030C:
.Lt_030B:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+16], 0
je .Lt_030E
mov eax, dword ptr [ebp+8]
push dword ptr [eax+16]
call EXPRFREETREE
add esp, 4
.Lt_030E:
.Lt_030D:
push dword ptr [ebp+8]
call EXPRFREENODE
add esp, 4
.Lt_030A:
mov esp, ebp
pop ebp
ret
.size EXPRFREETREE, .-EXPRFREETREE
.balign 16
EXPRNEWTEXT:
.type EXPRNEWTEXT, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_030F:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 0
call EXPRNEW
add esp, 12
mov dword ptr [ebp-8], eax
push dword ptr [ebp+16]
call ZSTRDUP
add esp, 4
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+20], eax
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0310:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size EXPRNEWTEXT, .-EXPRNEWTEXT
.balign 16
EXPRNEWIMMI:
.type EXPRNEWIMMI, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
mov dword ptr [ebp-4], 0
.Lt_0311:
mov eax, dword ptr [ebp+16]
and eax, 480
je .Lt_0313
mov dword ptr [ebp-12], 22
jmp .Lt_06C9
.Lt_0313:
mov eax, dword ptr [ebp+16]
and eax, 31
mov dword ptr [ebp-12], eax
.Lt_06C9:
mov eax, dword ptr [ebp-12]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+4], 8
jne .Lt_0316
mov eax, dword ptr [ebp+16]
and eax, 480
je .Lt_0317
mov dword ptr [ebp-16], 22
jmp .Lt_06CA
.Lt_0317:
mov eax, dword ptr [ebp+16]
and eax, 31
mov dword ptr [ebp-16], eax
.Lt_06CA:
mov eax, dword ptr [ebp-16]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+8], 0
je .Lt_0319
mov dword ptr [ebp-20], 12
jmp .Lt_06CB
.Lt_0319:
mov dword ptr [ebp-20], 13
.Lt_06CB:
mov eax, dword ptr [ebp-20]
mov dword ptr [ebp+16], eax
jmp .Lt_0315
.Lt_0316:
mov eax, dword ptr [ebp+16]
and eax, 480
je .Lt_031B
mov dword ptr [ebp-16], 22
jmp .Lt_06CC
.Lt_031B:
mov eax, dword ptr [ebp+16]
and eax, 31
mov dword ptr [ebp-16], eax
.Lt_06CC:
mov eax, dword ptr [ebp-16]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+8], 0
je .Lt_031D
mov dword ptr [ebp-20], 10
jmp .Lt_06CD
.Lt_031D:
mov dword ptr [ebp-20], 11
.Lt_06CD:
mov eax, dword ptr [ebp-20]
mov dword ptr [ebp+16], eax
.Lt_0315:
push 0
push dword ptr [ebp+16]
push 1
call EXPRNEW
add esp, 12
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+12]
mov dword ptr [eax+20], ecx
mov dword ptr [eax+24], ebx
mov ecx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ecx
.Lt_0312:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size EXPRNEWIMMI, .-EXPRNEWIMMI
.balign 16
EXPRNEWIMMF:
.type EXPRNEWIMMF, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_031F:
push 0
push dword ptr [ebp+16]
push 1
call EXPRNEW
add esp, 12
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
push dword ptr [ebp+8]
push dword ptr [ebp+12]
pop dword ptr [eax+24]
pop dword ptr [eax+20]
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0320:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size EXPRNEWIMMF, .-EXPRNEWIMMF
.balign 16
SYMBISCARRAY:
.type SYMBISCARRAY, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0321:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 327680
test ebx, ebx
je .Lt_0324
mov dword ptr [ebp-4], 0
jmp .Lt_0322
.Lt_0324:
.Lt_0323:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx]
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 1
je .Lt_0328
.Lt_0329:
cmp dword ptr [ebp-8], 12
jne .Lt_0327
.Lt_0328:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 4
test ebx, ebx
je .Lt_032B
mov dword ptr [ebp-4], 0
jmp .Lt_0322
.Lt_032B:
.Lt_032A:
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx+56], 0
je .Lt_032D
mov dword ptr [ebp-4], -1
jmp .Lt_0322
.Lt_032D:
.Lt_032C:
.Lt_0327:
.Lt_0325:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+24]
and eax, 511
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 17
je .Lt_0331
.Lt_0332:
cmp dword ptr [ebp-8], 3
je .Lt_0331
.Lt_0333:
cmp dword ptr [ebp-8], 6
jne .Lt_0330
.Lt_0331:
mov dword ptr [ebp-4], -1
jmp .Lt_0322
.Lt_0330:
.Lt_032E:
mov dword ptr [ebp-4], 0
.Lt_0322:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBISCARRAY, .-SYMBISCARRAY
.balign 16
EXPRNEWCAST:
.type EXPRNEWCAST, @function
push ebp
mov ebp, esp
sub esp, 52
push ebx
push esi
mov dword ptr [ebp-4], 0
.Lt_0334:
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+4]
cmp ebx, dword ptr [ebp+8]
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+16]
mov ecx, dword ptr [ebp+12]
cmp ecx, dword ptr [eax+8]
sete dl
mov esi, edx
shr esi, 1
sbb esi, esi
and ebx, esi
je .Lt_0337
mov esi, dword ptr [ebp+16]
mov dword ptr [ebp-4], esi
jmp .Lt_0335
.Lt_0337:
.Lt_0336:
mov esi, dword ptr [ebp+16]
mov ebx, dword ptr [esi+4]
and ebx, 480
je .Lt_0338
mov dword ptr [ebp-12], 22
jmp .Lt_06CE
.Lt_0338:
mov ebx, dword ptr [ebp+16]
mov esi, dword ptr [ebx+4]
and esi, 31
mov dword ptr [ebp-12], esi
.Lt_06CE:
mov esi, dword ptr [ebp-12]
imul esi, 28
mov dword ptr [ebp-36], esi
mov esi, dword ptr [ebp+8]
and esi, 480
je .Lt_033A
mov dword ptr [ebp-16], 22
jmp .Lt_06CF
.Lt_033A:
mov esi, dword ptr [ebp+8]
and esi, 31
mov dword ptr [ebp-16], esi
.Lt_06CF:
mov esi, dword ptr [ebp-16]
imul esi, 28
mov ebx, dword ptr [ebp-36]
mov eax, dword ptr [SYMB_DTYPETB+esi]
cmp eax, dword ptr [SYMB_DTYPETB+ebx]
sete al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-40], eax
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_033C
mov dword ptr [ebp-20], 22
jmp .Lt_06D0
.Lt_033C:
mov ebx, dword ptr [ebp+16]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-20], eax
.Lt_06D0:
mov eax, dword ptr [ebp-20]
imul eax, 28
mov dword ptr [ebp-44], eax
mov eax, dword ptr [ebp+8]
and eax, 480
je .Lt_033E
mov dword ptr [ebp-24], 22
jmp .Lt_06D1
.Lt_033E:
mov eax, dword ptr [ebp+8]
and eax, 31
mov dword ptr [ebp-24], eax
.Lt_06D1:
mov eax, dword ptr [ebp-24]
imul eax, 28
mov ebx, dword ptr [ebp-44]
mov esi, dword ptr [SYMB_DTYPETB+eax+8]
cmp esi, dword ptr [SYMB_DTYPETB+ebx+8]
sete dl
mov esi, edx
shr esi, 1
sbb esi, esi
and esi, dword ptr [ebp-40]
mov ebx, dword ptr [ebp+16]
mov eax, dword ptr [ebx+4]
and eax, 480
test eax, eax
setne al
shr eax, 1
sbb eax, eax
not eax
and esi, eax
mov eax, dword ptr [ebp+8]
and eax, 480
test eax, eax
setne al
shr eax, 1
sbb eax, eax
not eax
and esi, eax
mov dword ptr [ebp-48], esi
mov esi, dword ptr [ebp+16]
mov eax, dword ptr [esi+4]
and eax, 480
je .Lt_0340
mov dword ptr [ebp-28], 22
jmp .Lt_06D2
.Lt_0340:
mov eax, dword ptr [ebp+16]
mov esi, dword ptr [eax+4]
and esi, 31
mov dword ptr [ebp-28], esi
.Lt_06D2:
mov esi, dword ptr [ebp-28]
imul esi, 28
mov dword ptr [ebp-52], esi
mov esi, dword ptr [ebp+8]
and esi, 480
je .Lt_0342
mov dword ptr [ebp-32], 22
jmp .Lt_06D3
.Lt_0342:
mov esi, dword ptr [ebp+8]
and esi, 31
mov dword ptr [ebp-32], esi
.Lt_06D3:
mov esi, dword ptr [ebp-32]
imul esi, 28
mov eax, dword ptr [ebp-52]
mov ebx, dword ptr [SYMB_DTYPETB+esi+4]
cmp ebx, dword ptr [SYMB_DTYPETB+eax+4]
sete bl
shr ebx, 1
sbb ebx, ebx
and ebx, dword ptr [ebp-48]
je .Lt_0345
mov ebx, dword ptr [ebp+16]
mov dword ptr [ebp-4], ebx
jmp .Lt_0335
.Lt_0345:
.Lt_0344:
mov ebx, dword ptr [ebp+16]
cmp dword ptr [ebx], 3
jne .Lt_0347
mov ebx, dword ptr [ebp+8]
and ebx, 480
sar ebx, 5
test ebx, ebx
setg bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+16]
mov esi, dword ptr [eax+4]
and esi, 480
sar esi, 5
test esi, esi
setg dl
mov esi, edx
shr esi, 1
sbb esi, esi
and ebx, esi
je .Lt_0349
mov esi, dword ptr [ebp+16]
mov ebx, dword ptr [ebp+8]
mov dword ptr [esi+4], ebx
mov ebx, dword ptr [ebp+16]
mov esi, dword ptr [ebp+12]
mov dword ptr [ebx+8], esi
mov esi, dword ptr [ebp+16]
mov dword ptr [ebp-4], esi
jmp .Lt_0335
.Lt_0349:
.Lt_0348:
.Lt_0347:
.Lt_0346:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 3
call EXPRNEW
add esp, 12
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov esi, dword ptr [ebp+16]
mov dword ptr [eax+12], esi
mov esi, dword ptr [ebp-8]
mov dword ptr [ebp-4], esi
.Lt_0335:
mov eax, dword ptr [ebp-4]
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size EXPRNEWCAST, .-EXPRNEWCAST
.balign 16
EXPRNEWSYM:
.type EXPRNEWSYM, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
mov dword ptr [ebp-4], 0
.Lt_034A:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 7
jne .Lt_034D
push 0
push 32
push 2
call EXPRNEW
add esp, 12
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+8]
mov dword ptr [eax+20], ebx
jmp .Lt_034C
.Lt_034D:
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx], 3
jne .Lt_034E
push dword ptr [ebp+8]
push 52
push 2
call EXPRNEW
add esp, 12
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+8]
mov dword ptr [eax+20], ebx
jmp .Lt_034C
.Lt_034E:
push dword ptr [ebp+8]
call SYMBISCARRAY
add esp, 4
test eax, eax
je .Lt_034F
push 0
push -2147483648
push 2
call EXPRNEW
add esp, 12
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+8]
mov dword ptr [eax+20], ebx
push dword ptr [ebp-8]
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+28]
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+24]
and eax, 511
and eax, 31
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebx+24]
and ecx, 511
and ecx, 480
add ecx, 32
or eax, ecx
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ecx+24]
and ebx, 511
and ebx, 261632
sal ebx, 1
or eax, ebx
push eax
call EXPRNEWCAST
add esp, 12
mov dword ptr [ebp-8], eax
jmp .Lt_034C
.Lt_034F:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
cmp ebx, 1
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax]
cmp ecx, 4
sete cl
shr ecx, 1
sbb ecx, ecx
or ebx, ecx
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ecx+8]
and eax, 524288
test eax, eax
setne al
shr eax, 1
sbb eax, eax
and ebx, eax
je .Lt_0350
push 0
push 65
push 2
call EXPRNEW
add esp, 12
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+8]
mov dword ptr [eax+20], ebx
jmp .Lt_034C
.Lt_0350:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+24]
and eax, 511
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+28]
mov dword ptr [ebp-16], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 262144
test eax, eax
setne al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebx+4]
and ecx, 512
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
or eax, ecx
je .Lt_0352
mov ecx, dword ptr [ebp-12]
and ecx, 31
mov eax, dword ptr [ebp-12]
and eax, 480
add eax, 32
or ecx, eax
mov eax, dword ptr [ebp-12]
and eax, 261632
sal eax, 1
or ecx, eax
mov dword ptr [ebp-12], ecx
.Lt_0352:
.Lt_0351:
push dword ptr [ebp-16]
push dword ptr [ebp-12]
push 2
call EXPRNEW
add esp, 12
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov ecx, dword ptr [ebp+8]
mov dword ptr [eax+20], ecx
.Lt_034C:
mov ecx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ecx
.Lt_034B:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size EXPRNEWSYM, .-EXPRNEWSYM
.balign 16
TYPECBOP:
.type TYPECBOP, @function
push ebp
mov ebp, esp
sub esp, 64
push ebx
mov dword ptr [ebp-4], 0
.Lt_0353:
cmp dword ptr [ebp+8], 45
je .Lt_0357
.Lt_0358:
cmp dword ptr [ebp+8], 48
je .Lt_0357
.Lt_0359:
cmp dword ptr [ebp+8], 46
je .Lt_0357
.Lt_035A:
cmp dword ptr [ebp+8], 47
je .Lt_0357
.Lt_035B:
cmp dword ptr [ebp+8], 49
je .Lt_0357
.Lt_035C:
cmp dword ptr [ebp+8], 50
jne .Lt_0356
.Lt_0357:
mov dword ptr [ebp-4], 10
jmp .Lt_0354
.Lt_0356:
.Lt_0355:
mov eax, dword ptr [ebp+12]
and eax, 480
je .Lt_035D
mov dword ptr [ebp-8], 22
jmp .Lt_06E7
.Lt_035D:
mov eax, dword ptr [ebp+12]
and eax, 31
mov dword ptr [ebp-8], eax
.Lt_06E7:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp+12], eax
mov eax, dword ptr [ebp+16]
and eax, 480
je .Lt_035F
mov dword ptr [ebp-12], 22
jmp .Lt_06E8
.Lt_035F:
mov eax, dword ptr [ebp+16]
and eax, 31
mov dword ptr [ebp-12], eax
.Lt_06E8:
mov eax, dword ptr [ebp-12]
mov dword ptr [ebp+16], eax
mov eax, dword ptr [ebp+12]
cmp eax, 15
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp+16]
cmp ebx, 15
sete bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
je .Lt_0362
mov dword ptr [ebp-4], 15
jmp .Lt_0354
.Lt_0362:
.Lt_0361:
mov ebx, dword ptr [ebp+12]
cmp ebx, 14
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+16]
cmp eax, 14
sete al
shr eax, 1
sbb eax, eax
or ebx, eax
je .Lt_0364
mov dword ptr [ebp-4], 14
jmp .Lt_0354
.Lt_0364:
.Lt_0363:
mov eax, dword ptr [ebp+12]
and eax, 480
je .Lt_0365
mov dword ptr [ebp-16], 22
jmp .Lt_06E9
.Lt_0365:
mov eax, dword ptr [ebp+12]
and eax, 31
mov dword ptr [ebp-16], eax
.Lt_06E9:
mov eax, dword ptr [ebp-16]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+4], 4
jg .Lt_0368
mov eax, dword ptr [ebp+12]
and eax, 480
je .Lt_0369
mov dword ptr [ebp-48], 22
jmp .Lt_06EA
.Lt_0369:
mov eax, dword ptr [ebp+12]
and eax, 31
mov dword ptr [ebp-48], eax
.Lt_06EA:
mov eax, dword ptr [ebp-48]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+8], 0
je .Lt_036B
mov dword ptr [ebp-52], 10
jmp .Lt_06EB
.Lt_036B:
mov dword ptr [ebp-52], 11
.Lt_06EB:
mov eax, dword ptr [ebp-52]
mov dword ptr [ebp+12], eax
.Lt_0368:
.Lt_0367:
mov eax, dword ptr [ebp+16]
and eax, 480
je .Lt_036D
mov dword ptr [ebp-20], 22
jmp .Lt_06EC
.Lt_036D:
mov eax, dword ptr [ebp+16]
and eax, 31
mov dword ptr [ebp-20], eax
.Lt_06EC:
mov eax, dword ptr [ebp-20]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+4], 4
jg .Lt_0370
mov eax, dword ptr [ebp+16]
and eax, 480
je .Lt_0371
mov dword ptr [ebp-48], 22
jmp .Lt_06ED
.Lt_0371:
mov eax, dword ptr [ebp+16]
and eax, 31
mov dword ptr [ebp-48], eax
.Lt_06ED:
mov eax, dword ptr [ebp-48]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+8], 0
je .Lt_0373
mov dword ptr [ebp-52], 10
jmp .Lt_06EE
.Lt_0373:
mov dword ptr [ebp-52], 11
.Lt_06EE:
mov eax, dword ptr [ebp-52]
mov dword ptr [ebp+16], eax
.Lt_0370:
.Lt_036F:
mov eax, dword ptr [ebp+12]
and eax, 480
je .Lt_0375
mov dword ptr [ebp-24], 22
jmp .Lt_06EF
.Lt_0375:
mov eax, dword ptr [ebp+12]
and eax, 31
mov dword ptr [ebp-24], eax
.Lt_06EF:
mov eax, dword ptr [ebp-24]
imul eax, 28
mov dword ptr [ebp-48], eax
mov eax, dword ptr [ebp+16]
and eax, 480
je .Lt_0377
mov dword ptr [ebp-28], 22
jmp .Lt_06F0
.Lt_0377:
mov eax, dword ptr [ebp+16]
and eax, 31
mov dword ptr [ebp-28], eax
.Lt_06F0:
mov eax, dword ptr [ebp-28]
imul eax, 28
mov ebx, dword ptr [ebp-48]
mov ecx, dword ptr [SYMB_DTYPETB+eax+8]
and ecx, dword ptr [SYMB_DTYPETB+ebx+8]
not ecx
test ecx, ecx
je .Lt_037A
push dword ptr [ebp+12]
call TYPETOUNSIGNED
add esp, 4
mov dword ptr [ebp+12], eax
push dword ptr [ebp+16]
call TYPETOUNSIGNED
add esp, 4
mov dword ptr [ebp+16], eax
.Lt_037A:
.Lt_0379:
mov eax, dword ptr [ebp+12]
and eax, 480
je .Lt_037B
mov dword ptr [ebp-32], 22
jmp .Lt_06F2
.Lt_037B:
mov eax, dword ptr [ebp+12]
and eax, 31
mov dword ptr [ebp-32], eax
.Lt_06F2:
mov eax, dword ptr [ebp-32]
imul eax, 28
mov ecx, dword ptr [SYMB_DTYPETB+eax+4]
cmp ecx, 8
sete cl
shr ecx, 1
sbb ecx, ecx
mov dword ptr [ebp-48], ecx
mov ecx, dword ptr [ebp+16]
and ecx, 480
je .Lt_037D
mov dword ptr [ebp-36], 22
jmp .Lt_06F3
.Lt_037D:
mov ecx, dword ptr [ebp+16]
and ecx, 31
mov dword ptr [ebp-36], ecx
.Lt_06F3:
mov ecx, dword ptr [ebp-36]
imul ecx, 28
mov eax, dword ptr [SYMB_DTYPETB+ecx+4]
cmp eax, 8
sete al
shr eax, 1
sbb eax, eax
or eax, dword ptr [ebp-48]
je .Lt_0380
mov eax, dword ptr [ebp+12]
and eax, 480
je .Lt_0381
mov dword ptr [ebp-52], 22
jmp .Lt_06F5
.Lt_0381:
mov eax, dword ptr [ebp+12]
and eax, 31
mov dword ptr [ebp-52], eax
.Lt_06F5:
mov eax, dword ptr [ebp-52]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+8], 0
je .Lt_0383
mov dword ptr [ebp-56], 12
jmp .Lt_06F6
.Lt_0383:
mov dword ptr [ebp-56], 13
.Lt_06F6:
mov eax, dword ptr [ebp-56]
mov dword ptr [ebp+12], eax
mov eax, dword ptr [ebp+16]
and eax, 480
je .Lt_0385
mov dword ptr [ebp-60], 22
jmp .Lt_06F7
.Lt_0385:
mov eax, dword ptr [ebp+16]
and eax, 31
mov dword ptr [ebp-60], eax
.Lt_06F7:
mov eax, dword ptr [ebp-60]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+8], 0
je .Lt_0387
mov dword ptr [ebp-64], 12
jmp .Lt_06F8
.Lt_0387:
mov dword ptr [ebp-64], 13
.Lt_06F8:
mov eax, dword ptr [ebp-64]
mov dword ptr [ebp+16], eax
.Lt_0380:
.Lt_037F:
mov eax, dword ptr [ebp+12]
and eax, 480
je .Lt_0389
mov dword ptr [ebp-40], 22
jmp .Lt_06F9
.Lt_0389:
mov eax, dword ptr [ebp+12]
and eax, 31
mov dword ptr [ebp-40], eax
.Lt_06F9:
mov eax, dword ptr [ebp-40]
imul eax, 28
mov dword ptr [ebp-48], eax
mov eax, dword ptr [ebp+16]
and eax, 480
je .Lt_038B
mov dword ptr [ebp-44], 22
jmp .Lt_06FA
.Lt_038B:
mov eax, dword ptr [ebp+16]
and eax, 31
mov dword ptr [ebp-44], eax
.Lt_06FA:
mov eax, dword ptr [ebp-44]
imul eax, 28
mov ecx, dword ptr [ebp-48]
mov ebx, dword ptr [SYMB_DTYPETB+eax+8]
and ebx, dword ptr [SYMB_DTYPETB+ecx+8]
not ebx
test ebx, ebx
je .Lt_038E
push dword ptr [ebp+12]
call TYPETOUNSIGNED
add esp, 4
mov dword ptr [ebp+12], eax
push dword ptr [ebp+16]
call TYPETOUNSIGNED
add esp, 4
mov dword ptr [ebp+16], eax
.Lt_038E:
.Lt_038D:
mov eax, dword ptr [ebp+12]
mov dword ptr [ebp-4], eax
.Lt_0354:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size TYPECBOP, .-TYPECBOP
.balign 16
EXPRNEWUOP:
.type EXPRNEWUOP, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
mov dword ptr [ebp-4], 0
.Lt_038F:
mov dword ptr [ebp-16], 0
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-20], eax
jmp .Lt_0392
.Lt_0394:
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax], 4
jne .Lt_0396
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+20]
cmp ebx, 76
sete bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-16], ebx
.Lt_0396:
.Lt_0395:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp-12]
and eax, 31
mov ebx, dword ptr [ebp-12]
and ebx, 480
add ebx, 32
or eax, ebx
mov ebx, dword ptr [ebp-12]
and ebx, 261632
sal ebx, 1
or eax, ebx
mov dword ptr [ebp-12], eax
jmp .Lt_0391
.Lt_0397:
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax], 4
jne .Lt_0399
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+20]
cmp ebx, 22
sete bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-16], ebx
.Lt_0399:
.Lt_0398:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp-12]
and eax, 31
mov ebx, dword ptr [ebp-12]
and ebx, 480
add ebx, -32
or eax, ebx
mov ebx, dword ptr [ebp-12]
and ebx, 261632
sar ebx, 1
and ebx, 261632
or eax, ebx
mov dword ptr [ebp-12], eax
jmp .Lt_0391
.Lt_039A:
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax], 4
jne .Lt_039C
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [ebp+8]
cmp ebx, dword ptr [eax+20]
sete bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-16], ebx
.Lt_039C:
.Lt_039B:
mov ebx, dword ptr [ebp+12]
push dword ptr [ebx+4]
mov ebx, dword ptr [ebp+12]
push dword ptr [ebx+4]
push dword ptr [ebp+8]
call TYPECBOP
add esp, 12
mov dword ptr [ebp-12], eax
jmp .Lt_0391
.Lt_039D:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-12], ebx
jmp .Lt_0391
.Lt_039E:
jmp .Lt_0391
.Lt_0392:
mov ebx, dword ptr [ebp-20]
add ebx, 4294967274
cmp ebx, 54
ja .Lt_039E
mov ebx, dword ptr [ebp-20]
jmp dword ptr [.LT_039F+ebx*4-88]
.LT_039F:
.int .Lt_0394
.int .Lt_039E
.int .Lt_039E
.int .Lt_039E
.int .Lt_039E
.int .Lt_039E
.int .Lt_039E
.int .Lt_039E
.int .Lt_039E
.int .Lt_039E
.int .Lt_039E
.int .Lt_039E
.int .Lt_039E
.int .Lt_039E
.int .Lt_039E
.int .Lt_039E
.int .Lt_039E
.int .Lt_039E
.int .Lt_039E
.int .Lt_039E
.int .Lt_039E
.int .Lt_039E
.int .Lt_039E
.int .Lt_039E
.int .Lt_039E
.int .Lt_039E
.int .Lt_039E
.int .Lt_039E
.int .Lt_039E
.int .Lt_039E
.int .Lt_039A
.int .Lt_039E
.int .Lt_039A
.int .Lt_039E
.int .Lt_039D
.int .Lt_039E
.int .Lt_039D
.int .Lt_039D
.int .Lt_039D
.int .Lt_039D
.int .Lt_039D
.int .Lt_039D
.int .Lt_039E
.int .Lt_039D
.int .Lt_039E
.int .Lt_039E
.int .Lt_039D
.int .Lt_039D
.int .Lt_039D
.int .Lt_039E
.int .Lt_039E
.int .Lt_039E
.int .Lt_039E
.int .Lt_039E
.int .Lt_0397
.Lt_0391:
cmp dword ptr [ebp-16], 0
je .Lt_03A1
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+12]
mov dword ptr [ebp-8], eax
push dword ptr [ebp+12]
call EXPRFREENODE
add esp, 4
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
jmp .Lt_0390
.Lt_03A1:
.Lt_03A0:
mov eax, dword ptr [ebp+12]
push dword ptr [eax+8]
push dword ptr [ebp-12]
push 4
call EXPRNEW
add esp, 12
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+12]
mov dword ptr [eax+12], ebx
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebp+8]
mov dword ptr [ebx+20], eax
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0390:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size EXPRNEWUOP, .-EXPRNEWUOP
.balign 16
EXPRNEWBOP:
.type EXPRNEWBOP, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_03A2:
mov eax, dword ptr [ebp+16]
push dword ptr [eax+4]
mov eax, dword ptr [ebp+12]
push dword ptr [eax+4]
push dword ptr [ebp+8]
call TYPECBOP
add esp, 12
mov dword ptr [ebp-12], eax
push 0
push dword ptr [ebp-12]
push 5
call EXPRNEW
add esp, 12
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+12]
mov dword ptr [eax+12], ebx
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebp+16]
mov dword ptr [ebx+16], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+8]
mov dword ptr [eax+20], ebx
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ebx
.Lt_03A3:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size EXPRNEWBOP, .-EXPRNEWBOP
.balign 16
EXPRCACHE:
.type EXPRCACHE, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_03A4:
lea eax, [CTX+2796]
push eax
call LISTNEWNODE
add esp, 4
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [ebp+8]
mov dword ptr [eax], ebx
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebp+12]
mov dword ptr [ebx+4], eax
.Lt_03A5:
pop ebx
mov esp, ebp
pop ebp
ret
.size EXPRCACHE, .-EXPRCACHE
.balign 16
EXPRLOOKUP:
.type EXPRLOOKUP, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_03A6:
lea eax, [CTX+2796]
push eax
call LISTGETHEAD
add esp, 4
mov dword ptr [ebp-8], eax
.Lt_03A8:
cmp dword ptr [ebp-8], 0
je .Lt_03A9
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+8]
cmp dword ptr [eax], ebx
jne .Lt_03AB
jmp .Lt_03A9
.Lt_03AB:
.Lt_03AA:
push dword ptr [ebp-8]
call LISTGETNEXT
add esp, 4
mov dword ptr [ebp-8], eax
jmp .Lt_03A8
.Lt_03A9:
cmp dword ptr [ebp-8], 0
je .Lt_03AD
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-4], ebx
push dword ptr [ebp-8]
lea ebx, [CTX+2796]
push ebx
call LISTDELNODE
add esp, 8
jmp .Lt_03AC
.Lt_03AD:
mov dword ptr [ebp-4], 0
.Lt_03AC:
.Lt_03A7:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size EXPRLOOKUP, .-EXPRLOOKUP
.balign 16
HEMITINT:
.type HEMITINT, @function
push ebp
mov ebp, esp
sub esp, 32
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_03AE:
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
mov eax, dword ptr [ebp+8]
and eax, 480
je .Lt_03B0
mov dword ptr [ebp-28], 22
jmp .Lt_0705
.Lt_03B0:
mov eax, dword ptr [ebp+8]
and eax, 31
mov dword ptr [ebp-28], eax
.Lt_0705:
mov eax, dword ptr [ebp-28]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+8], 0
je .Lt_03B3
push 0
push -1
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call fb_LongintToStr
add esp, 8
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ebp+8]
and eax, 480
je .Lt_03B4
mov dword ptr [ebp-32], 22
jmp .Lt_0706
.Lt_03B4:
mov eax, dword ptr [ebp+8]
and eax, 31
mov dword ptr [ebp-32], eax
.Lt_0706:
mov eax, dword ptr [ebp-32]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+4], 8
jne .Lt_03B7
cmp dword ptr [ebp+16], 2147483648
jne .Lt_03B9
cmp dword ptr [ebp+12], 0
jne .Lt_03B9
.Lt_0708:
push 0
push 2
push offset Lt_03BA
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_03B9:
.Lt_03B8:
push 0
push 3
push offset Lt_03BB
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_03B6
.Lt_03B7:
cmp dword ptr [ebp+16], 4294967295
jne .Lt_03BD
cmp dword ptr [ebp+12], 2147483648
jne .Lt_03BD
.Lt_0709:
push 0
push 2
push offset Lt_03BA
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_03BD:
.Lt_03BC:
.Lt_03B6:
jmp .Lt_03B2
.Lt_03B3:
mov eax, dword ptr [ebp+8]
and eax, 480
je .Lt_03BE
mov dword ptr [ebp-32], 22
jmp .Lt_0707
.Lt_03BE:
mov eax, dword ptr [ebp+8]
and eax, 31
mov dword ptr [ebp-32], eax
.Lt_0707:
mov eax, dword ptr [ebp-32]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+4], 8
jne .Lt_03C1
push 0
push -1
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call fb_ULongintToStr
add esp, 8
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
push 0
push 4
push offset Lt_03C2
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_03C0
.Lt_03C1:
push 0
push -1
mov eax, dword ptr [ebp+12]
push eax
call fb_UIntToStr
add esp, 4
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
push 0
push 2
push offset Lt_03BA
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_03C0:
.Lt_03B2:
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
.Lt_03AF:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
mov esp, ebp
pop ebp
ret
.size HEMITINT, .-HEMITINT
.balign 16
HEMITFLOAT:
.type HEMITFLOAT, @function
push ebp
mov ebp, esp
sub esp, 28
push ebx
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_03C3:
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ebp+12]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-28], ebx
cmp dword ptr [ebp-28], 2146435072
je .Lt_03C7
.Lt_03C8:
cmp dword ptr [ebp-28], 4293918720
jne .Lt_03C6
.Lt_03C7:
cmp dword ptr [ebp+8], 15
jne .Lt_03CA
mov ebx, dword ptr [ebp-28]
and ebx, 2147483648
je .Lt_03CC
push 0
push 19
push offset Lt_03CD
push -1
lea ebx, [ebp-24]
push ebx
call fb_StrConcatAssign
add esp, 20
jmp .Lt_03CB
.Lt_03CC:
push 0
push 16
push offset Lt_03CE
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_03CB:
jmp .Lt_03C9
.Lt_03CA:
mov eax, dword ptr [ebp-28]
and eax, 2147483648
je .Lt_03D0
push 0
push 20
push offset Lt_03D1
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_03CF
.Lt_03D0:
push 0
push 17
push offset Lt_03D2
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_03CF:
.Lt_03C9:
jmp .Lt_03C5
.Lt_03C6:
cmp dword ptr [ebp-28], 2146959360
je .Lt_03D4
.Lt_03D5:
cmp dword ptr [ebp-28], 4294443008
jne .Lt_03D3
.Lt_03D4:
cmp dword ptr [ebp+8], 15
jne .Lt_03D7
mov eax, dword ptr [ebp-28]
and eax, 2147483648
je .Lt_03D9
push 0
push 23
push offset Lt_03DA
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_03D8
.Lt_03D9:
push 0
push 20
push offset Lt_03DB
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_03D8:
jmp .Lt_03D6
.Lt_03D7:
mov eax, dword ptr [ebp-28]
and eax, 2147483648
je .Lt_03DD
push 0
push 24
push offset Lt_03DE
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_03DC
.Lt_03DD:
push 0
push 21
push offset Lt_03DF
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_03DC:
.Lt_03D6:
jmp .Lt_03C5
.Lt_03D3:
push 0
push -1
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call HFLOATTOHEX_C99
add esp, 8
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
cmp dword ptr [ebp+8], 14
jne .Lt_03E2
push 0
push 2
push offset Lt_03E3
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_03E2:
.Lt_03E1:
.Lt_03E0:
.Lt_03C5:
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
.Lt_03C4:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
pop ebx
mov esp, ebp
pop ebp
ret
.size HEMITFLOAT, .-HEMITFLOAT
.balign 16
HBUILDSTRLIT:
.type HBUILDSTRLIT, @function
push ebp
mov ebp, esp
sub esp, 72
push ebx
.Lt_03E4:
push 0
push -1
push 2
push offset Lt_00BF
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
mov dword ptr [ebp-32], 0
mov ebx, dword ptr [ebp+16]
mov eax, dword ptr [ebp+20]
add ebx, 4294967294
adc eax, 4294967295
mov ecx, ebx
mov dword ptr [ebp-36], ecx
jmp .Lt_03E8
.Lt_03EB:
mov ecx, dword ptr [ebp+12]
add ecx, dword ptr [ebp-32]
movzx ebx, byte ptr [ecx]
mov dword ptr [ebp-4], ebx
push 34
push dword ptr [ebp-4]
call HCHARNEEDSESCAPING
add esp, 8
test eax, eax
je .Lt_03ED
push 0
push -1
push -1
push -1
push 2
push dword ptr [ebp-4]
call fb_HEXEx_i
add esp, 8
push eax
push 3
push offset Lt_03EE
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
mov eax, dword ptr [ebp+12]
add eax, dword ptr [ebp-32]
movzx ebx, byte ptr [eax+1]
push ebx
call HISVALIDHEXDIGIT
add esp, 4
test eax, eax
je .Lt_03F2
push 0
push -1
push 4
push offset Lt_03F3
push -1
push dword ptr [ebp+8]
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
mov dword ptr [ebp-64], 0
lea eax, [ebp-72]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+8]
call fb_StrAssign
add esp, 20
.Lt_03F2:
.Lt_03F1:
jmp .Lt_03EC
.Lt_03ED:
cmp dword ptr [ebp-4], 63
jne .Lt_03F5
push 0
push -1
push 2
push offset Lt_03F6
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
mov eax, dword ptr [ebp+12]
add eax, dword ptr [ebp-32]
movzx ebx, byte ptr [eax+1]
cmp ebx, 63
jne .Lt_03F9
mov ebx, dword ptr [ebp+12]
add ebx, dword ptr [ebp-32]
mov al, byte ptr [ebx+2]
mov byte ptr [ebp-52], al
movzx eax, byte ptr [ebp-52]
cmp eax, 61
je .Lt_0404
.Lt_0405:
movzx eax, byte ptr [ebp-52]
cmp eax, 47
je .Lt_0404
.Lt_0406:
movzx eax, byte ptr [ebp-52]
cmp eax, 39
je .Lt_0404
.Lt_0407:
movzx eax, byte ptr [ebp-52]
cmp eax, 40
je .Lt_0404
.Lt_0408:
movzx eax, byte ptr [ebp-52]
cmp eax, 41
je .Lt_0404
.Lt_0409:
movzx eax, byte ptr [ebp-52]
cmp eax, 33
je .Lt_0404
.Lt_040A:
movzx eax, byte ptr [ebp-52]
cmp eax, 60
je .Lt_0404
.Lt_040B:
movzx eax, byte ptr [ebp-52]
cmp eax, 62
je .Lt_0404
.Lt_040C:
movzx eax, byte ptr [ebp-52]
cmp eax, 45
jne .Lt_03FC
.Lt_0404:
push 0
push -1
push 4
push offset Lt_03F3
push -1
push dword ptr [ebp+8]
mov dword ptr [ebp-64], 0
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
lea eax, [ebp-64]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+8]
call fb_StrAssign
add esp, 20
.Lt_03FC:
.Lt_03FA:
.Lt_03F9:
.Lt_03F8:
jmp .Lt_03EC
.Lt_03F5:
push 0
push -1
push -1
push dword ptr [ebp-4]
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
.Lt_03EC:
.Lt_03E9:
inc dword ptr [ebp-32]
.Lt_03E8:
mov eax, dword ptr [ebp-36]
cmp dword ptr [ebp-32], eax
jle .Lt_03EB
.Lt_03EA:
push 0
push -1
push 2
push offset Lt_00BF
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
.Lt_03E5:
pop ebx
mov esp, ebp
pop ebp
ret
.size HBUILDSTRLIT, .-HBUILDSTRLIT
.balign 16
HBUILDWSTRLIT:
.type HBUILDWSTRLIT, @function
push ebp
mov ebp, esp
sub esp, 76
push ebx
.Lt_0410:
push 0
push -1
push 3
push offset Lt_0412
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
mov eax, dword ptr [SYMB_DTYPETB+172]
mov dword ptr [ebp-8], eax
mov dword ptr [ebp-36], 0
mov ebx, dword ptr [ebp+16]
mov eax, dword ptr [ebp+20]
add ebx, 4294967294
adc eax, 4294967295
mov ecx, ebx
mov dword ptr [ebp-40], ecx
jmp .Lt_0415
.Lt_0418:
mov ecx, dword ptr [ebp-36]
sal ecx, 2
mov ebx, dword ptr [ebp+12]
add ebx, ecx
mov ecx, dword ptr [ebx]
mov dword ptr [ebp-4], ecx
push 34
push dword ptr [ebp-4]
call HCHARNEEDSESCAPING
add esp, 8
test eax, eax
je .Lt_041A
push 0
push -1
push -1
push -1
mov eax, dword ptr [ebp-8]
sal eax, 1
mov ecx, eax
push ecx
push dword ptr [ebp-4]
call fb_HEXEx_i
add esp, 8
push eax
push 3
push offset Lt_03EE
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
lea eax, [ebp-52]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+8]
mov dword ptr [ebp-64], 0
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
lea eax, [ebp-64]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+8]
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ebp-36]
sal eax, 2
mov ecx, dword ptr [ebp+12]
add ecx, eax
push dword ptr [ecx+4]
call HISVALIDHEXDIGIT
add esp, 4
test eax, eax
je .Lt_041E
push 0
push -1
push 5
push offset Lt_041F
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
.Lt_041E:
.Lt_041D:
jmp .Lt_0419
.Lt_041A:
cmp dword ptr [ebp-4], 63
jne .Lt_0421
push 0
push -1
push 2
push offset Lt_03F6
push -1
push dword ptr [ebp+8]
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
lea eax, [ebp-52]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+8]
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ebp-36]
sal eax, 2
mov ecx, dword ptr [ebp+12]
add ecx, eax
cmp dword ptr [ecx+4], 63
jne .Lt_0424
mov ecx, dword ptr [ebp-36]
sal ecx, 2
mov eax, dword ptr [ebp+12]
add eax, ecx
mov ecx, dword ptr [eax+8]
mov dword ptr [ebp-56], ecx
cmp dword ptr [ebp-56], 61
je .Lt_0428
.Lt_0429:
cmp dword ptr [ebp-56], 47
je .Lt_0428
.Lt_042A:
cmp dword ptr [ebp-56], 39
je .Lt_0428
.Lt_042B:
cmp dword ptr [ebp-56], 40
je .Lt_0428
.Lt_042C:
cmp dword ptr [ebp-56], 41
je .Lt_0428
.Lt_042D:
cmp dword ptr [ebp-56], 33
je .Lt_0428
.Lt_042E:
cmp dword ptr [ebp-56], 60
je .Lt_0428
.Lt_042F:
cmp dword ptr [ebp-56], 62
je .Lt_0428
.Lt_0430:
cmp dword ptr [ebp-56], 45
jne .Lt_0427
.Lt_0428:
push 0
push -1
push 5
push offset Lt_041F
push -1
push dword ptr [ebp+8]
mov dword ptr [ebp-68], 0
mov dword ptr [ebp-64], 0
mov dword ptr [ebp-60], 0
lea ecx, [ebp-68]
push ecx
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+8]
call fb_StrAssign
add esp, 20
.Lt_0427:
.Lt_0425:
.Lt_0424:
.Lt_0423:
jmp .Lt_0419
.Lt_0421:
push 0
push -1
push -1
push dword ptr [ebp-4]
push 1
call fb_CHR
add esp, 8
push eax
push -1
push dword ptr [ebp+8]
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
lea eax, [ebp-52]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+8]
call fb_StrAssign
add esp, 20
.Lt_0419:
.Lt_0416:
inc dword ptr [ebp-36]
.Lt_0415:
mov eax, dword ptr [ebp-40]
cmp dword ptr [ebp-36], eax
jle .Lt_0418
.Lt_0417:
push 0
push -1
push 2
push offset Lt_00BF
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
.Lt_0411:
pop ebx
mov esp, ebp
pop ebp
ret
.size HBUILDWSTRLIT, .-HBUILDWSTRLIT
.balign 16
HBOPTOSTR:
.type HBOPTOSTR, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_0434:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-8], eax
jmp .Lt_0437
.Lt_0439:
mov eax, offset Lt_043A
mov dword ptr [ebp-4], eax
jmp .Lt_0436
.Lt_043B:
mov eax, offset Lt_043C
mov dword ptr [ebp-4], eax
jmp .Lt_0436
.Lt_043D:
mov eax, offset Lt_043E
mov dword ptr [ebp-4], eax
jmp .Lt_0436
.Lt_043F:
mov eax, offset Lt_0440
mov dword ptr [ebp-4], eax
jmp .Lt_0436
.Lt_0441:
mov eax, offset Lt_0440
mov dword ptr [ebp-4], eax
jmp .Lt_0436
.Lt_0442:
mov eax, offset Lt_0443
mov dword ptr [ebp-4], eax
jmp .Lt_0436
.Lt_0444:
mov eax, offset Lt_0445
mov dword ptr [ebp-4], eax
jmp .Lt_0436
.Lt_0446:
mov eax, offset Lt_0447
mov dword ptr [ebp-4], eax
jmp .Lt_0436
.Lt_0448:
mov eax, offset Lt_0449
mov dword ptr [ebp-4], eax
jmp .Lt_0436
.Lt_044A:
mov eax, offset Lt_044B
mov dword ptr [ebp-4], eax
jmp .Lt_0436
.Lt_044C:
mov eax, offset Lt_044D
mov dword ptr [ebp-4], eax
jmp .Lt_0436
.Lt_044E:
mov eax, offset Lt_044F
mov dword ptr [ebp-4], eax
jmp .Lt_0436
.Lt_0450:
mov eax, offset Lt_0451
mov dword ptr [ebp-4], eax
jmp .Lt_0436
.Lt_0452:
mov eax, offset Lt_0453
mov dword ptr [ebp-4], eax
jmp .Lt_0436
.Lt_0454:
mov eax, offset Lt_0455
mov dword ptr [ebp-4], eax
jmp .Lt_0436
.Lt_0456:
mov eax, offset Lt_0457
mov dword ptr [ebp-4], eax
jmp .Lt_0436
.Lt_0458:
mov eax, offset Lt_0459
mov dword ptr [ebp-4], eax
jmp .Lt_0436
.Lt_0437:
mov eax, dword ptr [ebp-8]
add eax, 4294967268
cmp eax, 22
ja .Lt_0436
mov eax, dword ptr [ebp-8]
jmp dword ptr [.LT_045A+eax*4-112]
.LT_045A:
.int .Lt_0439
.int .Lt_043B
.int .Lt_043D
.int .Lt_043F
.int .Lt_0441
.int .Lt_0442
.int .Lt_0448
.int .Lt_044A
.int .Lt_0436
.int .Lt_0436
.int .Lt_044C
.int .Lt_0436
.int .Lt_0436
.int .Lt_0444
.int .Lt_0446
.int .Lt_0436
.int .Lt_0436
.int .Lt_044E
.int .Lt_0450
.int .Lt_0452
.int .Lt_0454
.int .Lt_0456
.int .Lt_0458
.Lt_0436:
.Lt_0435:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size HBOPTOSTR, .-HBOPTOSTR
.balign 16
HUOPTOSTR:
.type HUOPTOSTR, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_045B:
mov eax, dword ptr [ebp+16]
mov dword ptr [eax], 0
cmp dword ptr [ebp+8], 22
jne .Lt_045E
.Lt_045F:
mov eax, offset Lt_0460
mov dword ptr [ebp-4], eax
jmp .Lt_045D
.Lt_045E:
cmp dword ptr [ebp+8], 76
jne .Lt_0461
.Lt_0462:
mov eax, offset Lt_0300
mov dword ptr [ebp-4], eax
jmp .Lt_045D
.Lt_0461:
cmp dword ptr [ebp+8], 54
jne .Lt_0463
.Lt_0464:
mov eax, offset Lt_0403
mov dword ptr [ebp-4], eax
jmp .Lt_045D
.Lt_0463:
cmp dword ptr [ebp+8], 52
jne .Lt_0465
.Lt_0466:
mov eax, offset Lt_0467
mov dword ptr [ebp-4], eax
jmp .Lt_045D
.Lt_0465:
cmp dword ptr [ebp+8], 56
jne .Lt_0468
.Lt_0469:
mov eax, dword ptr [ebp+16]
mov dword ptr [eax], -1
mov eax, dword ptr [ebp+12]
and eax, 480
je .Lt_046A
mov dword ptr [ebp-8], 22
jmp .Lt_070A
.Lt_046A:
mov eax, dword ptr [ebp+12]
and eax, 31
mov dword ptr [ebp-8], eax
.Lt_070A:
mov eax, dword ptr [ebp-8]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+20]
mov dword ptr [ebp-12], ebx
jmp .Lt_046D
.Lt_046F:
mov ebx, offset Lt_0470
mov dword ptr [ebp-4], ebx
jmp .Lt_046C
.Lt_0471:
mov ebx, offset Lt_0472
mov dword ptr [ebp-4], ebx
jmp .Lt_046C
.Lt_0473:
mov ebx, offset Lt_0474
mov dword ptr [ebp-4], ebx
jmp .Lt_046C
.Lt_0475:
mov ebx, offset Lt_0476
mov dword ptr [ebp-4], ebx
jmp .Lt_046C
.Lt_046D:
mov ebx, dword ptr [ebp-12]
add ebx, 4294967290
cmp ebx, 3
ja .Lt_0475
mov ebx, dword ptr [ebp-12]
jmp dword ptr [.LT_0477+ebx*4-24]
.LT_0477:
.int .Lt_0473
.int .Lt_0473
.int .Lt_046F
.int .Lt_0471
.Lt_046C:
jmp .Lt_045D
.Lt_0468:
mov ebx, dword ptr [ebp+16]
mov dword ptr [ebx], -1
cmp dword ptr [ebp+12], 14
jne .Lt_047A
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebp-8], ebx
jmp .Lt_047C
.Lt_047E:
mov ebx, offset Lt_047F
mov dword ptr [ebp-4], ebx
jmp .Lt_047B
.Lt_0480:
mov ebx, offset Lt_0481
mov dword ptr [ebp-4], ebx
jmp .Lt_047B
.Lt_0482:
mov ebx, offset Lt_0483
mov dword ptr [ebp-4], ebx
jmp .Lt_047B
.Lt_0484:
mov ebx, offset Lt_0485
mov dword ptr [ebp-4], ebx
jmp .Lt_047B
.Lt_0486:
mov ebx, offset Lt_0487
mov dword ptr [ebp-4], ebx
jmp .Lt_047B
.Lt_0488:
mov ebx, offset Lt_0489
mov dword ptr [ebp-4], ebx
jmp .Lt_047B
.Lt_048A:
mov ebx, offset Lt_048B
mov dword ptr [ebp-4], ebx
jmp .Lt_047B
.Lt_048C:
mov ebx, offset Lt_048D
mov dword ptr [ebp-4], ebx
jmp .Lt_047B
.Lt_048E:
mov ebx, offset Lt_048F
mov dword ptr [ebp-4], ebx
jmp .Lt_047B
.Lt_0490:
mov ebx, offset Lt_0491
mov dword ptr [ebp-4], ebx
jmp .Lt_047B
.Lt_0492:
jmp .Lt_047B
.Lt_047C:
mov ebx, dword ptr [ebp-8]
add ebx, 4294967238
cmp ebx, 12
ja .Lt_0492
mov ebx, dword ptr [ebp-8]
jmp dword ptr [.LT_0493+ebx*4-232]
.LT_0493:
.int .Lt_047E
.int .Lt_0480
.int .Lt_0482
.int .Lt_0484
.int .Lt_0486
.int .Lt_0488
.int .Lt_0492
.int .Lt_048A
.int .Lt_0492
.int .Lt_0492
.int .Lt_048C
.int .Lt_048E
.int .Lt_0490
.Lt_047B:
jmp .Lt_0479
.Lt_047A:
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebp-8], ebx
jmp .Lt_0495
.Lt_0497:
mov ebx, offset Lt_0498
mov dword ptr [ebp-4], ebx
jmp .Lt_0494
.Lt_0499:
mov ebx, offset Lt_049A
mov dword ptr [ebp-4], ebx
jmp .Lt_0494
.Lt_049B:
mov ebx, offset Lt_049C
mov dword ptr [ebp-4], ebx
jmp .Lt_0494
.Lt_049D:
mov ebx, offset Lt_049E
mov dword ptr [ebp-4], ebx
jmp .Lt_0494
.Lt_049F:
mov ebx, offset Lt_04A0
mov dword ptr [ebp-4], ebx
jmp .Lt_0494
.Lt_04A1:
mov ebx, offset Lt_04A2
mov dword ptr [ebp-4], ebx
jmp .Lt_0494
.Lt_04A3:
mov ebx, offset Lt_04A4
mov dword ptr [ebp-4], ebx
jmp .Lt_0494
.Lt_04A5:
mov ebx, offset Lt_04A6
mov dword ptr [ebp-4], ebx
jmp .Lt_0494
.Lt_04A7:
mov ebx, offset Lt_04A8
mov dword ptr [ebp-4], ebx
jmp .Lt_0494
.Lt_04A9:
mov ebx, offset Lt_04AA
mov dword ptr [ebp-4], ebx
jmp .Lt_0494
.Lt_04AB:
jmp .Lt_0494
.Lt_0495:
mov ebx, dword ptr [ebp-8]
add ebx, 4294967238
cmp ebx, 12
ja .Lt_04AB
mov ebx, dword ptr [ebp-8]
jmp dword ptr [.LT_04AC+ebx*4-232]
.LT_04AC:
.int .Lt_0497
.int .Lt_0499
.int .Lt_049B
.int .Lt_049D
.int .Lt_049F
.int .Lt_04A1
.int .Lt_04AB
.int .Lt_04A3
.int .Lt_04AB
.int .Lt_04AB
.int .Lt_04A5
.int .Lt_04A7
.int .Lt_04A9
.Lt_0494:
.Lt_0479:
.Lt_0478:
.Lt_045D:
.Lt_045C:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HUOPTOSTR, .-HUOPTOSTR
.balign 16
HEXPRFLUSH:
.type HEXPRFLUSH, @function
push ebp
mov ebp, esp
sub esp, 52
push ebx
.Lt_04AD:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-16], ebx
jmp .Lt_04B0
.Lt_04B2:
push 0
push -1
push 0
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+20]
push -1
lea ebx, [CTX+2784]
push ebx
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
lea ebx, [ebp-28]
push ebx
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [CTX+2784]
push eax
call fb_StrAssign
add esp, 20
jmp .Lt_04AF
.Lt_04B4:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_04B5
mov dword ptr [ebp-20], 22
jmp .Lt_070B
.Lt_04B5:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-20], eax
.Lt_070B:
mov eax, dword ptr [ebp-20]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax], 1
jne .Lt_04B8
push 0
push -1
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+24]
push dword ptr [eax+20]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+4]
call HEMITFLOAT
add esp, 12
push eax
push -1
lea eax, [CTX+2784]
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
lea eax, [CTX+2784]
push eax
call fb_StrAssign
add esp, 20
jmp .Lt_04B7
.Lt_04B8:
push 0
push -1
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+24]
push dword ptr [eax+20]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+4]
call HEMITINT
add esp, 12
push eax
push -1
lea eax, [CTX+2784]
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
lea eax, [CTX+2784]
push eax
call fb_StrAssign
add esp, 20
.Lt_04B7:
jmp .Lt_04AF
.Lt_04BB:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+20]
mov dword ptr [ebp-8], ebx
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx+4]
and eax, 524288
test eax, eax
je .Lt_04BD
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+24]
and ebx, 511
cmp ebx, 6
jne .Lt_04BF
mov eax, dword ptr [SYMB_DTYPETB+172]
mov ebx, eax
sar ebx, 31
push ebx
push eax
mov eax, dword ptr [ebp-8]
push dword ptr [eax+40]
push dword ptr [eax+36]
call __divdi3
add esp, 16
push edx
push eax
mov eax, dword ptr [ebp-8]
push dword ptr [eax+52]
call HUNESCAPEW
add esp, 4
push eax
lea eax, [CTX+2784]
push eax
call HBUILDWSTRLIT
add esp, 16
jmp .Lt_04BE
.Lt_04BF:
mov eax, dword ptr [ebp-8]
push dword ptr [eax+40]
push dword ptr [eax+36]
mov eax, dword ptr [ebp-8]
push dword ptr [eax+52]
call HUNESCAPE
add esp, 4
push eax
lea eax, [CTX+2784]
push eax
call HBUILDSTRLIT
add esp, 16
.Lt_04BE:
jmp .Lt_04BC
.Lt_04BD:
mov eax, dword ptr [ebp-8]
cmp dword ptr [eax], 7
jne .Lt_04C1
push 0
push 3
push offset Lt_04C2
push -1
lea eax, [CTX+2784]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_04C0
.Lt_04C1:
mov eax, dword ptr [ebp-8]
cmp dword ptr [eax], 3
jne .Lt_04C3
push 0
push 2
push offset Lt_0460
push -1
lea eax, [CTX+2784]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_04C3:
.Lt_04C0:
push 0
push -1
push 0
push dword ptr [ebp-8]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
push -1
lea eax, [CTX+2784]
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
lea eax, [CTX+2784]
push eax
call fb_StrAssign
add esp, 20
.Lt_04BC:
jmp .Lt_04AF
.Lt_04C5:
push 0
push -1
push -1
push 2
push offset Lt_0125
push -1
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+4]
call HEMITTYPE
add esp, 8
push eax
push 2
push offset Lt_03FF
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
lea eax, [CTX+2784]
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
lea eax, [CTX+2784]
push eax
call fb_StrAssign
add esp, 20
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+12]
call HEXPRFLUSH
add esp, 8
jmp .Lt_04AF
.Lt_04C9:
push 0
push -1
push 0
lea eax, [ebp-12]
push eax
mov eax, dword ptr [ebp+8]
push dword ptr [eax+4]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+20]
call HUOPTOSTR
add esp, 12
push eax
push -1
lea eax, [CTX+2784]
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
lea eax, [CTX+2784]
push eax
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ebp+8]
mov edx, dword ptr [eax+12]
mov eax, dword ptr [edx]
cmp eax, 4
sete al
shr eax, 1
sbb eax, eax
or eax, dword ptr [ebp-12]
mov dword ptr [ebp+12], eax
cmp dword ptr [ebp+12], 0
je .Lt_04CC
push 0
push 2
push offset Lt_03FF
push -1
lea eax, [CTX+2784]
push eax
call fb_StrConcatAssign
add esp, 20
cmp dword ptr [ebp-12], 0
je .Lt_04CE
push 0
push 2
push offset Lt_00D5
push -1
lea eax, [CTX+2784]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_04CE:
.Lt_04CD:
.Lt_04CC:
.Lt_04CB:
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+12]
call HEXPRFLUSH
add esp, 8
cmp dword ptr [ebp+12], 0
je .Lt_04D0
cmp dword ptr [ebp-12], 0
je .Lt_04D2
push 0
push 2
push offset Lt_00D5
push -1
lea eax, [CTX+2784]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_04D2:
.Lt_04D1:
push 0
push 2
push offset Lt_0125
push -1
lea eax, [CTX+2784]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_04D0:
.Lt_04CF:
jmp .Lt_04AF
.Lt_04D3:
mov eax, dword ptr [ebp+8]
mov edx, dword ptr [eax+20]
mov dword ptr [ebp-20], edx
cmp dword ptr [ebp-20], 64
jne .Lt_04D6
.Lt_04D7:
mov edx, dword ptr [ebp+8]
cmp dword ptr [edx+4], 14
jne .Lt_04D9
push 0
push 17
push offset Lt_04DA
push -1
lea edx, [CTX+2784]
push edx
call fb_StrConcatAssign
add esp, 20
jmp .Lt_04D8
.Lt_04D9:
push 0
push 16
push offset Lt_04DB
push -1
lea eax, [CTX+2784]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_04D8:
push 0
push 2
push offset Lt_03FF
push -1
lea eax, [CTX+2784]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax+12]
call HEXPRFLUSH
add esp, 8
push 0
push 3
push offset Lt_0130
push -1
lea eax, [CTX+2784]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax+16]
call HEXPRFLUSH
add esp, 8
push 0
push 2
push offset Lt_0125
push -1
lea eax, [CTX+2784]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_04D4
.Lt_04D6:
cmp dword ptr [ebp+12], 0
je .Lt_04DE
push 0
push 2
push offset Lt_03FF
push -1
lea eax, [CTX+2784]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_04DE:
.Lt_04DD:
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+12]
call HEXPRFLUSH
add esp, 8
push 0
push -1
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax+20]
call HBOPTOSTR
add esp, 4
push eax
push -1
lea eax, [CTX+2784]
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
lea eax, [CTX+2784]
push eax
call fb_StrAssign
add esp, 20
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+16]
call HEXPRFLUSH
add esp, 8
cmp dword ptr [ebp+12], 0
je .Lt_04E1
push 0
push 2
push offset Lt_0125
push -1
lea eax, [CTX+2784]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_04E1:
.Lt_04E0:
.Lt_04DC:
.Lt_04D4:
jmp .Lt_04AF
.Lt_04B0:
cmp dword ptr [ebp-16], 5
ja .Lt_04AF
mov eax, dword ptr [ebp-16]
jmp dword ptr [.LT_04E2+eax*4]
.LT_04E2:
.int .Lt_04B2
.int .Lt_04B4
.int .Lt_04BB
.int .Lt_04C5
.int .Lt_04C9
.int .Lt_04D3
.Lt_04AF:
.Lt_04AE:
pop ebx
mov esp, ebp
pop ebp
ret
.size HEXPRFLUSH, .-HEXPRFLUSH
.balign 16
EXPRFLUSH:
.type EXPRFLUSH, @function
push ebp
mov ebp, esp
sub esp, 12
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_04E3:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HEXPRFLUSH
add esp, 8
push 0
push -1
lea eax, [CTX+2784]
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
push 0
push 1
push offset Lt_0000
push -1
lea eax, [CTX+2784]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp+8]
call EXPRFREETREE
add esp, 4
.Lt_04E4:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
mov esp, ebp
pop ebp
ret
.size EXPRFLUSH, .-EXPRFLUSH
.balign 16
EXPRNEWOFFSET:
.type EXPRNEWOFFSET, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_04E5:
push dword ptr [ebp+8]
call EXPRNEWSYM
add esp, 4
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 512
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
push dword ptr [ebp+8]
call SYMBISCARRAY
add esp, 4
or ebx, eax
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax]
cmp ecx, 3
sete cl
shr ecx, 1
sbb ecx, ecx
or ebx, ecx
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ecx]
cmp eax, 7
sete al
shr eax, 1
sbb eax, eax
or ebx, eax
test ebx, ebx
jne .Lt_04E8
push dword ptr [ebp-8]
push 22
call EXPRNEWUOP
add esp, 8
mov dword ptr [ebp-8], eax
.Lt_04E8:
.Lt_04E7:
cmp dword ptr [ebp+16], 0
jne .Lt_0710
cmp dword ptr [ebp+12], 0
je .Lt_04EA
.Lt_0710:
push dword ptr [ebp-8]
push 0
push 34
call EXPRNEWCAST
add esp, 12
mov dword ptr [ebp-8], eax
push 7
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call EXPRNEWIMMI
add esp, 12
push eax
push dword ptr [ebp-8]
push 28
call EXPRNEWBOP
add esp, 12
mov dword ptr [ebp-8], eax
.Lt_04EA:
.Lt_04E9:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_04E6:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size EXPRNEWOFFSET, .-EXPRNEWOFFSET
.balign 16
EXPRNEWVREG:
.type EXPRNEWVREG, @function
push ebp
mov ebp, esp
sub esp, 60
push ebx
mov dword ptr [ebp-4], 0
.Lt_04EB:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-20], ebx
jmp .Lt_04EE
.Lt_04F0:
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx+32], 0
jne .Lt_04F2
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx+48], 0
je .Lt_04F4
push 0
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+48]
call EXPRNEWVREG
add esp, 8
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+40], 0
jne .Lt_0717
cmp dword ptr [eax+36], 0
je .Lt_04F6
.Lt_0717:
push dword ptr [ebp-8]
push 0
push 34
call EXPRNEWCAST
add esp, 12
mov dword ptr [ebp-8], eax
push 7
mov eax, dword ptr [ebp+8]
push dword ptr [eax+40]
push dword ptr [eax+36]
call EXPRNEWIMMI
add esp, 12
push eax
push dword ptr [ebp-8]
push 28
call EXPRNEWBOP
add esp, 12
mov dword ptr [ebp-8], eax
.Lt_04F6:
.Lt_04F5:
jmp .Lt_04F3
.Lt_04F4:
push 7
mov eax, dword ptr [ebp+8]
push dword ptr [eax+40]
push dword ptr [eax+36]
call EXPRNEWIMMI
add esp, 12
mov dword ptr [ebp-8], eax
.Lt_04F3:
push dword ptr [ebp-8]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 31
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+4]
and ecx, 480
add ecx, 32
or ebx, ecx
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ecx+4]
and eax, 261632
sal eax, 1
or ebx, eax
push ebx
call EXPRNEWCAST
add esp, 12
mov dword ptr [ebp-8], eax
push dword ptr [ebp-8]
push 76
call EXPRNEWUOP
add esp, 8
mov dword ptr [ebp-8], eax
jmp .Lt_04ED
.Lt_04F2:
.Lt_04F1:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+40], 0
mov ebx, -1
jne .Lt_0718
cmp dword ptr [eax+36], 0
jne .Lt_0718
.Lt_0719:
xor ebx, ebx
.Lt_0718:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+48], 0
setne cl
shr ecx, 1
sbb ecx, ecx
or ebx, ecx
mov dword ptr [ebp-16], ebx
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+32]
call SYMBISCARRAY
add esp, 4
or eax, dword ptr [ebp-16]
mov dword ptr [ebp-24], eax
mov eax, dword ptr [ebp+8]
push dword ptr [eax+32]
call EXPRNEWSYM
add esp, 4
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-28], ebx
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx+8]
mov dword ptr [ebp-32], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-28]
cmp ebx, dword ptr [eax+4]
setne bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+8]
cmp ecx, dword ptr [ebp-32]
setne al
shr eax, 1
sbb eax, eax
or ebx, eax
je .Lt_04F8
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_04F9
mov dword ptr [ebp-36], 22
jmp .Lt_0711
.Lt_04F9:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-36], eax
.Lt_0711:
mov eax, dword ptr [ebp-36]
imul eax, 28
mov dword ptr [ebp-44], eax
mov eax, dword ptr [ebp-28]
and eax, 480
je .Lt_04FB
mov dword ptr [ebp-40], 22
jmp .Lt_0712
.Lt_04FB:
mov eax, dword ptr [ebp-28]
and eax, 31
mov dword ptr [ebp-40], eax
.Lt_0712:
mov eax, dword ptr [ebp-40]
imul eax, 28
mov ebx, dword ptr [ebp-44]
mov ecx, dword ptr [SYMB_DTYPETB+eax]
cmp ecx, dword ptr [SYMB_DTYPETB+ebx]
setne cl
shr ecx, 1
sbb ecx, ecx
or dword ptr [ebp-24], ecx
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ecx+4]
and ebx, 480
je .Lt_04FD
mov dword ptr [ebp-48], 22
jmp .Lt_0714
.Lt_04FD:
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebx+4]
and ecx, 31
mov dword ptr [ebp-48], ecx
.Lt_0714:
mov ecx, dword ptr [ebp-48]
mov dword ptr [ebp-52], ecx
cmp dword ptr [ebp-52], 16
je .Lt_0502
.Lt_0503:
cmp dword ptr [ebp-52], 18
jne .Lt_0501
.Lt_0502:
mov dword ptr [ebp-24], -1
jmp .Lt_04FF
.Lt_0501:
mov ecx, dword ptr [ebp-28]
and ecx, 480
je .Lt_0505
mov dword ptr [ebp-56], 22
jmp .Lt_0715
.Lt_0505:
mov ecx, dword ptr [ebp-28]
and ecx, 31
mov dword ptr [ebp-56], ecx
.Lt_0715:
mov ecx, dword ptr [ebp-56]
mov dword ptr [ebp-60], ecx
cmp dword ptr [ebp-60], 16
je .Lt_050A
.Lt_050B:
cmp dword ptr [ebp-60], 18
jne .Lt_0509
.Lt_050A:
mov dword ptr [ebp-24], -1
.Lt_0509:
.Lt_0507:
.Lt_0504:
.Lt_04FF:
.Lt_04F8:
.Lt_04F7:
cmp dword ptr [ebp-24], 0
jne .Lt_050D
jmp .Lt_04ED
.Lt_050D:
.Lt_050C:
mov ecx, dword ptr [ebp-28]
and ecx, 480
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
test ecx, ecx
jne .Lt_050F
push dword ptr [ebp-8]
push 22
call EXPRNEWUOP
add esp, 8
mov dword ptr [ebp-8], eax
.Lt_050F:
.Lt_050E:
cmp dword ptr [ebp-16], 0
je .Lt_0511
push dword ptr [ebp-8]
push 0
push 34
call EXPRNEWCAST
add esp, 12
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+48], 0
je .Lt_0513
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax+48]
call EXPRNEWVREG
add esp, 8
push eax
push dword ptr [ebp-8]
push 28
call EXPRNEWBOP
add esp, 12
mov dword ptr [ebp-8], eax
.Lt_0513:
.Lt_0512:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+40], 0
jne .Lt_071F
cmp dword ptr [eax+36], 0
je .Lt_0515
.Lt_071F:
push 7
mov eax, dword ptr [ebp+8]
push dword ptr [eax+40]
push dword ptr [eax+36]
call EXPRNEWIMMI
add esp, 12
push eax
push dword ptr [ebp-8]
push 28
call EXPRNEWBOP
add esp, 12
mov dword ptr [ebp-8], eax
.Lt_0515:
.Lt_0514:
.Lt_0511:
.Lt_0510:
push dword ptr [ebp-8]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+4]
and ecx, 31
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
add ebx, 32
or ecx, ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 261632
sal eax, 1
or ecx, eax
push ecx
call EXPRNEWCAST
add esp, 12
mov dword ptr [ebp-8], eax
push dword ptr [ebp-8]
push 76
call EXPRNEWUOP
add esp, 8
mov dword ptr [ebp-8], eax
jmp .Lt_04ED
.Lt_0516:
mov eax, dword ptr [ebp+8]
push dword ptr [eax+40]
push dword ptr [eax+36]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+32]
call EXPRNEWOFFSET
add esp, 12
mov dword ptr [ebp-8], eax
jmp .Lt_04ED
.Lt_0517:
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+4]
mov dword ptr [ebp-12], ecx
mov ecx, dword ptr [ebp-12]
and ecx, 480
je .Lt_0518
mov dword ptr [ebp-24], 22
jmp .Lt_0716
.Lt_0518:
mov ecx, dword ptr [ebp-12]
and ecx, 31
mov dword ptr [ebp-24], ecx
.Lt_0716:
mov ecx, dword ptr [ebp-24]
imul ecx, 28
cmp dword ptr [SYMB_DTYPETB+ecx], 1
jne .Lt_051B
push dword ptr [ebp-12]
mov ecx, dword ptr [ebp+8]
push dword ptr [ecx+28]
push dword ptr [ecx+24]
call EXPRNEWIMMF
add esp, 12
mov dword ptr [ebp-8], eax
jmp .Lt_051A
.Lt_051B:
push dword ptr [ebp-12]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+28]
push dword ptr [eax+24]
call EXPRNEWIMMI
add esp, 12
mov dword ptr [ebp-8], eax
.Lt_051A:
jmp .Lt_04ED
.Lt_051C:
mov eax, dword ptr [ebp+8]
push dword ptr [eax+12]
call EXPRLOOKUP
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_051E
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
push 0
push -1
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+12]
call fb_IntToStr
add esp, 4
push eax
push 4
push offset Lt_051F
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
mov eax, dword ptr [ebp+8]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+4]
call EXPRNEWTEXT
add esp, 12
mov dword ptr [ebp-8], eax
lea eax, [ebp-44]
push eax
call fb_StrDelete
add esp, 4
.Lt_051E:
.Lt_051D:
jmp .Lt_04ED
.Lt_04EE:
cmp dword ptr [ebp-20], 5
ja .Lt_04ED
mov eax, dword ptr [ebp-20]
jmp dword ptr [.LT_0522+eax*4]
.LT_0522:
.int .Lt_0517
.int .Lt_04F0
.int .Lt_04F0
.int .Lt_04F0
.int .Lt_051C
.int .Lt_0516
.Lt_04ED:
cmp dword ptr [ebp+12], 0
jne .Lt_0524
push dword ptr [ebp-8]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+4]
call EXPRNEWCAST
add esp, 12
mov dword ptr [ebp-8], eax
.Lt_0524:
.Lt_0523:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_04EC:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size EXPRNEWVREG, .-EXPRNEWVREG
.balign 16
_EMITLABEL:
.type _EMITLABEL, @function
push ebp
mov ebp, esp
sub esp, 24
.Lt_0525:
call SECTIONINSIDEPROC
test eax, eax
je .Lt_0528
push 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
push 0
push -1
push 3
push offset Lt_0529
push 0
push dword ptr [ebp+8]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
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
lea eax, [ebp-24]
push eax
call HWRITELINE
add esp, 8
lea eax, [ebp-24]
push eax
call fb_StrDelete
add esp, 4
.Lt_0528:
.Lt_0527:
.Lt_0526:
mov esp, ebp
pop ebp
ret
.size _EMITLABEL, .-_EMITLABEL
.balign 16
EXPRSTORE:
.type EXPRSTORE, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
.Lt_052C:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 4
jne .Lt_052F
cmp dword ptr [ebp+16], 0
je .Lt_0531
push 0
push -1
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+12]
call fb_IntToStr
add esp, 4
push eax
push 4
push offset Lt_051F
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
lea eax, [ebp-16]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_0720
call fb_StrAssign
add esp, 20
push 0
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+4]
call HEMITTYPE
add esp, 8
push eax
push -1
push offset Lt_0721
call fb_StrAssign
add esp, 20
push 0
push 2
push offset Lt_00D5
push -1
push offset Lt_0721
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0720
push -1
push offset Lt_0721
call fb_StrConcatAssign
add esp, 20
push 0
push 4
push offset Lt_01A5
push -1
push offset Lt_0721
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push 0
push dword ptr [ebp+12]
call EXPRFLUSH
add esp, 8
push eax
push -1
push offset Lt_0721
call fb_StrConcatAssign
add esp, 20
push 0
push 2
push offset Lt_016A
push -1
push offset Lt_0721
call fb_StrConcatAssign
add esp, 20
push 0
push offset Lt_0721
call HWRITELINE
add esp, 8
push dword ptr [Lt_0720]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+4]
call EXPRNEWTEXT
add esp, 12
mov dword ptr [ebp+12], eax
jmp .Lt_0530
.Lt_0531:
push dword ptr [ebp+12]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+4]
call EXPRNEWCAST
add esp, 12
mov dword ptr [ebp+12], eax
.Lt_0530:
push dword ptr [ebp+12]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+12]
call EXPRCACHE
add esp, 8
jmp .Lt_052E
.Lt_052F:
push -1
push dword ptr [ebp+8]
call EXPRNEWVREG
add esp, 8
mov dword ptr [ebp-4], eax
push dword ptr [ebp+12]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+4]
call EXPRNEWCAST
add esp, 12
mov dword ptr [ebp+12], eax
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+4]
and ebx, 480
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax+4]
and ecx, 480
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
or ebx, ecx
je .Lt_0534
push dword ptr [ebp+12]
mov ecx, dword ptr [ebp-4]
push dword ptr [ecx+8]
mov ecx, dword ptr [ebp-4]
push dword ptr [ecx+4]
call EXPRNEWCAST
add esp, 12
mov dword ptr [ebp+12], eax
.Lt_0534:
.Lt_0533:
push 0
push -1
push 0
push dword ptr [ebp-4]
call EXPRFLUSH
add esp, 8
push eax
push -1
push offset Lt_0721
call fb_StrAssign
add esp, 20
push 0
push 4
push offset Lt_01A5
push -1
push offset Lt_0721
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push 0
push dword ptr [ebp+12]
call EXPRFLUSH
add esp, 8
push eax
push -1
push offset Lt_0721
call fb_StrConcatAssign
add esp, 20
push 0
push 2
push offset Lt_016A
push -1
push offset Lt_0721
call fb_StrConcatAssign
add esp, 20
push 0
push offset Lt_0721
call HWRITELINE
add esp, 8
.Lt_052E:
.Lt_052D:
pop ebx
mov esp, ebp
pop ebp
ret
.size EXPRSTORE, .-EXPRSTORE

.section .bss
.balign 4
	.lcomm	Lt_0721,12
.balign 4
	.lcomm	Lt_0720,12

.section .text
.balign 16
_EMITBOP:
.type _EMITBOP, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
.Lt_0535:
push 0
push dword ptr [ebp+12]
call EXPRNEWVREG
add esp, 8
mov dword ptr [ebp-4], eax
push 0
push dword ptr [ebp+16]
call EXPRNEWVREG
add esp, 8
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-12], eax
jmp .Lt_0538
.Lt_053A:
cmp dword ptr [ebp+20], 0
jne .Lt_053C
push 0
push 5
push offset Lt_053D
push -1
push offset Lt_0724
call fb_StrAssign
add esp, 20
push 0
push -1
push 0
push dword ptr [ebp-8]
push dword ptr [ebp-4]
push dword ptr [ebp+8]
call EXPRNEWBOP
add esp, 12
push eax
call EXPRFLUSH
add esp, 8
push eax
push -1
push offset Lt_0724
call fb_StrConcatAssign
add esp, 20
push 0
push 9
push offset Lt_053E
push -1
push offset Lt_0724
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push 0
push dword ptr [ebp+24]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
push -1
push offset Lt_0724
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ebp-24]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_0724
call fb_StrAssign
add esp, 20
push 0
push 2
push offset Lt_016A
push -1
push offset Lt_0724
call fb_StrConcatAssign
add esp, 20
push 0
push offset Lt_0724
call HWRITELINE
add esp, 8
jmp .Lt_0536
.Lt_053C:
.Lt_053B:
jmp .Lt_0537
.Lt_0538:
mov eax, dword ptr [ebp-12]
add eax, 4294967251
cmp eax, 5
ja .Lt_0537
mov eax, dword ptr [ebp-12]
jmp dword ptr [.LT_0540+eax*4-180]
.LT_0540:
.int .Lt_053A
.int .Lt_053A
.int .Lt_053A
.int .Lt_053A
.int .Lt_053A
.int .Lt_053A
.Lt_0537:
cmp dword ptr [ebp+20], 0
jne .Lt_0542
mov eax, dword ptr [ebp+12]
mov dword ptr [ebp+20], eax
.Lt_0542:
.Lt_0541:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-12], eax
jmp .Lt_0544
.Lt_0546:
push dword ptr [ebp-8]
push dword ptr [ebp-4]
push dword ptr [ebp+8]
call EXPRNEWBOP
add esp, 12
push eax
push 54
call EXPRNEWUOP
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_0543
.Lt_0547:
mov eax, dword ptr [ebp+8]
cmp eax, 28
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp+8]
cmp ebx, 29
sete bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
mov dword ptr [ebp-16], eax
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 480
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
and ebx, dword ptr [ebp-16]
je .Lt_0549
push dword ptr [ebp-4]
push 0
push 34
call EXPRNEWCAST
add esp, 12
mov dword ptr [ebp-4], eax
.Lt_0549:
.Lt_0548:
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+4]
and ebx, 480
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
and ebx, dword ptr [ebp-16]
je .Lt_054B
push dword ptr [ebp-8]
push 0
push 34
call EXPRNEWCAST
add esp, 12
mov dword ptr [ebp-8], eax
.Lt_054B:
.Lt_054A:
cmp dword ptr [ebp+8], 31
jne .Lt_054D
push dword ptr [ebp-4]
push 0
push 15
call EXPRNEWCAST
add esp, 12
mov dword ptr [ebp-4], eax
push dword ptr [ebp-8]
push 0
push 15
call EXPRNEWCAST
add esp, 12
mov dword ptr [ebp-8], eax
.Lt_054D:
.Lt_054C:
push dword ptr [ebp-8]
push dword ptr [ebp-4]
push dword ptr [ebp+8]
call EXPRNEWBOP
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_0543
.Lt_054E:
push dword ptr [ebp-8]
push dword ptr [ebp-4]
push 38
call EXPRNEWBOP
add esp, 12
push eax
push 52
call EXPRNEWUOP
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_0543
.Lt_054F:
push dword ptr [ebp-8]
push dword ptr [ebp-4]
push 52
call EXPRNEWUOP
add esp, 8
push eax
push 35
call EXPRNEWBOP
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_0543
.Lt_0544:
mov eax, dword ptr [ebp-12]
add eax, 4294967268
cmp eax, 22
ja .Lt_0543
mov eax, dword ptr [ebp-12]
jmp dword ptr [.LT_0550+eax*4-112]
.LT_0550:
.int .Lt_0547
.int .Lt_0547
.int .Lt_0547
.int .Lt_0547
.int .Lt_0547
.int .Lt_0547
.int .Lt_0547
.int .Lt_0547
.int .Lt_0543
.int .Lt_0543
.int .Lt_0547
.int .Lt_054E
.int .Lt_054F
.int .Lt_0547
.int .Lt_0547
.int .Lt_0543
.int .Lt_0543
.int .Lt_0546
.int .Lt_0546
.int .Lt_0546
.int .Lt_0546
.int .Lt_0546
.int .Lt_0546
.Lt_0543:
push 0
push dword ptr [ebp-4]
push dword ptr [ebp+20]
call EXPRSTORE
add esp, 12
.Lt_0536:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITBOP, .-_EMITBOP

.section .bss
.balign 4
	.lcomm	Lt_0724,12

.section .text
.balign 16
_EMITUOP:
.type _EMITUOP, @function
push ebp
mov ebp, esp
.Lt_0551:
cmp dword ptr [ebp+16], 0
jne .Lt_0554
mov eax, dword ptr [ebp+12]
mov dword ptr [ebp+16], eax
.Lt_0554:
.Lt_0553:
push 0
push 0
push dword ptr [ebp+12]
call EXPRNEWVREG
add esp, 8
push eax
push dword ptr [ebp+8]
call EXPRNEWUOP
add esp, 8
push eax
push dword ptr [ebp+16]
call EXPRSTORE
add esp, 12
.Lt_0552:
mov esp, ebp
pop ebp
ret
.size _EMITUOP, .-_EMITUOP
.balign 16
_EMITCONVERT:
.type _EMITCONVERT, @function
push ebp
mov ebp, esp
sub esp, 36
push ebx
.Lt_0555:
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
push 0
push dword ptr [ebp+12]
call EXPRNEWVREG
add esp, 8
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_0557
mov dword ptr [ebp-24], 22
jmp .Lt_0729
.Lt_0557:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-24], eax
.Lt_0729:
mov eax, dword ptr [ebp-24]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax]
cmp ebx, 1
sete bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-32], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 480
je .Lt_0559
mov dword ptr [ebp-28], 22
jmp .Lt_072A
.Lt_0559:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 31
mov dword ptr [ebp-28], ebx
.Lt_072A:
mov ebx, dword ptr [ebp-28]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx]
test eax, eax
sete al
shr eax, 1
sbb eax, eax
and eax, dword ptr [ebp-32]
je .Lt_055C
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_055D
mov dword ptr [ebp-36], 22
jmp .Lt_072C
.Lt_055D:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-36], eax
.Lt_072C:
mov eax, dword ptr [ebp-36]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+20], 5
jge .Lt_0560
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax+4], 14
jne .Lt_0562
push 0
push 7
push offset Lt_0563
push -1
lea eax, [ebp-20]
push eax
call fb_StrAssign
add esp, 20
or dword ptr [CTX+2636], 1
jmp .Lt_0561
.Lt_0562:
push 0
push 7
push offset Lt_0564
push -1
lea eax, [ebp-20]
push eax
call fb_StrAssign
add esp, 20
or dword ptr [CTX+2636], 4
.Lt_0561:
mov dword ptr [ebp-4], 10
jmp .Lt_055F
.Lt_0560:
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax+4], 14
jne .Lt_0566
push 0
push 7
push offset Lt_0567
push -1
lea eax, [ebp-20]
push eax
call fb_StrAssign
add esp, 20
or dword ptr [CTX+2636], 2
jmp .Lt_0565
.Lt_0566:
push 0
push 7
push offset Lt_0568
push -1
lea eax, [ebp-20]
push eax
call fb_StrAssign
add esp, 20
or dword ptr [CTX+2636], 8
.Lt_0565:
mov dword ptr [ebp-4], 12
.Lt_055F:
push 0
push 3
push offset Lt_00E1
push -1
lea eax, [ebp-20]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push 0
push dword ptr [ebp-8]
call EXPRFLUSH
add esp, 8
push eax
push -1
lea eax, [ebp-20]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_00E2
push -1
lea eax, [ebp-20]
push eax
call fb_StrConcatAssign
add esp, 20
push dword ptr [ebp-20]
push 0
push dword ptr [ebp-4]
call EXPRNEWTEXT
add esp, 12
mov dword ptr [ebp-8], eax
.Lt_055C:
.Lt_055B:
push 0
push dword ptr [ebp-8]
push dword ptr [ebp+8]
call EXPRSTORE
add esp, 12
lea eax, [ebp-20]
push eax
call fb_StrDelete
add esp, 4
.Lt_0556:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITCONVERT, .-_EMITCONVERT
.balign 16
_EMITSTORE:
.type _EMITSTORE, @function
push ebp
mov ebp, esp
.Lt_0569:
push 0
push 0
push dword ptr [ebp+12]
call EXPRNEWVREG
add esp, 8
push eax
push dword ptr [ebp+8]
call EXPRSTORE
add esp, 12
.Lt_056A:
mov esp, ebp
pop ebp
ret
.size _EMITSTORE, .-_EMITSTORE
.balign 16
_EMITSPILLREGS:
.type _EMITSPILLREGS, @function
.Lt_056B:
.Lt_056C:
ret
.size _EMITSPILLREGS, .-_EMITSPILLREGS
.balign 16
_EMITLOAD:
.type _EMITLOAD, @function
push ebp
mov ebp, esp
.Lt_056D:
.Lt_056E:
mov esp, ebp
pop ebp
ret
.size _EMITLOAD, .-_EMITLOAD
.balign 16
_EMITLOADRES:
.type _EMITLOADRES, @function
push ebp
mov ebp, esp
sub esp, 36
.Lt_056F:
push dword ptr [ebp+8]
push dword ptr [ebp+12]
call _EMITSTORE
add esp, 8
push 0
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 0
push -1
push 2
push offset Lt_016A
push -1
push -1
push 0
push 0
push dword ptr [ebp+12]
call EXPRNEWVREG
add esp, 8
push eax
call EXPRFLUSH
add esp, 8
push eax
push 8
push offset Lt_0571
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ebp-24]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-36]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-36]
push eax
call HWRITELINE
add esp, 8
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
.Lt_0570:
mov esp, ebp
pop ebp
ret
.size _EMITLOADRES, .-_EMITLOADRES
.balign 16
_EMITADDR:
.type _EMITADDR, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0575:
mov dword ptr [ebp-4], 0
cmp dword ptr [ebp+8], 22
jne .Lt_0578
.Lt_0579:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax]
cmp ebx, 1
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax+32], 0
setne cl
shr ecx, 1
sbb ecx, ecx
and ebx, ecx
je .Lt_057B
mov ecx, dword ptr [ebp+12]
mov ebx, dword ptr [ecx+32]
cmp dword ptr [ebx], 7
jne .Lt_057D
mov ebx, dword ptr [ebp+12]
push dword ptr [ebx+32]
call EXPRNEWSYM
add esp, 4
mov dword ptr [ebp-4], eax
push dword ptr [ebp-4]
mov eax, dword ptr [ebp+16]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+16]
push dword ptr [eax+4]
call EXPRNEWCAST
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_0577
.Lt_057D:
.Lt_057C:
.Lt_057B:
.Lt_057A:
push -1
push dword ptr [ebp+12]
call EXPRNEWVREG
add esp, 8
push eax
push 22
call EXPRNEWUOP
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_0577
.Lt_0578:
cmp dword ptr [ebp+8], 76
jne .Lt_057E
.Lt_057F:
push 0
push dword ptr [ebp+12]
call EXPRNEWVREG
add esp, 8
mov dword ptr [ebp-4], eax
.Lt_057E:
.Lt_0577:
push 0
push dword ptr [ebp-4]
push dword ptr [ebp+16]
call EXPRSTORE
add esp, 12
.Lt_0576:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITADDR, .-_EMITADDR
.balign 16
HDOCALL:
.type HDOCALL, @function
push ebp
mov ebp, esp
sub esp, 76
push ebx
.Lt_0580:
push 0
push -1
push 3
push offset Lt_00E1
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
lea eax, [CTX+2588]
push eax
call LISTGETTAIL
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_0583:
cmp dword ptr [ebp-4], 0
je .Lt_0585
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+8]
cmp ebx, dword ptr [ebp+20]
sete al
shr eax, 1
sbb eax, eax
test eax, eax
setne bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-28], ebx
jmp .Lt_0731
.Lt_0585:
mov dword ptr [ebp-28], 0
.Lt_0731:
cmp dword ptr [ebp-28], 0
je .Lt_0584
push dword ptr [ebp-4]
call LISTGETPREV
add esp, 4
mov dword ptr [ebp-44], eax
push 0
mov eax, dword ptr [ebp-4]
push dword ptr [eax+4]
call EXPRNEWVREG
add esp, 8
mov dword ptr [ebp-48], eax
mov eax, dword ptr [ebp-4]
cmp dword ptr [eax], 0
je .Lt_0587
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax]
cmp dword ptr [ebx+52], 4
setne al
shr eax, 1
sbb eax, eax
test eax, eax
setne bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-52], ebx
jmp .Lt_0732
.Lt_0587:
mov dword ptr [ebp-52], 0
.Lt_0732:
cmp dword ptr [ebp-52], 0
je .Lt_058A
lea ebx, [ebp-12]
push ebx
lea ebx, [ebp-8]
push ebx
mov ebx, dword ptr [ebp-4]
push dword ptr [ebx]
call _Z21SYMBGETREALPARAMDTYPEP8FBSYMBOLRiRS0_
add esp, 12
push dword ptr [ebp-48]
push dword ptr [ebp-12]
push dword ptr [ebp-8]
call EXPRNEWCAST
add esp, 12
mov dword ptr [ebp-48], eax
.Lt_058A:
.Lt_0589:
push 0
push -1
push -1
push 0
push dword ptr [ebp-48]
call EXPRFLUSH
add esp, 8
push eax
push -1
push dword ptr [ebp+8]
mov dword ptr [ebp-64], 0
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
lea eax, [ebp-64]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+8]
call fb_StrAssign
add esp, 20
push dword ptr [ebp-4]
lea eax, [CTX+2588]
push eax
call LISTDELNODE
add esp, 8
cmp dword ptr [ebp-44], 0
je .Lt_058D
mov eax, dword ptr [ebp-44]
mov ebx, dword ptr [ebp+20]
cmp dword ptr [eax+8], ebx
jne .Lt_058F
push 0
push -1
push 3
push offset Lt_0130
push -1
push dword ptr [ebp+8]
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
lea ebx, [ebp-76]
push ebx
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+8]
call fb_StrAssign
add esp, 20
.Lt_058F:
.Lt_058E:
.Lt_058D:
.Lt_058C:
mov eax, dword ptr [ebp-44]
mov dword ptr [ebp-4], eax
jmp .Lt_0583
.Lt_0584:
push 0
push -1
push 3
push offset Lt_00E2
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
cmp dword ptr [ebp+16], 0
jne .Lt_0593
push 0
push -1
push 2
push offset Lt_016A
push -1
push dword ptr [ebp+8]
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
lea eax, [ebp-52]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+8]
call fb_StrAssign
add esp, 20
push 0
push dword ptr [ebp+8]
call HWRITELINE
add esp, 8
jmp .Lt_0592
.Lt_0593:
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax]
mov eax, dword ptr [ebp+16]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+16]
push dword ptr [eax+4]
call EXPRNEWTEXT
add esp, 12
push eax
push dword ptr [ebp+16]
call EXPRSTORE
add esp, 12
.Lt_0592:
.Lt_0581:
pop ebx
mov esp, ebp
pop ebp
ret
.size HDOCALL, .-HDOCALL
.balign 16
_EMITCALL:
.type _EMITCALL, @function
push ebp
mov ebp, esp
.Lt_0595:
push 0
push 0
push dword ptr [ebp+8]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
push -1
push offset Lt_0737
call fb_StrAssign
add esp, 20
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push offset Lt_0737
call HDOCALL
add esp, 16
.Lt_0596:
mov esp, ebp
pop ebp
ret
.size _EMITCALL, .-_EMITCALL

.section .bss
.balign 4
	.lcomm	Lt_0737,12

.section .text
.balign 16
_EMITCALLPTR:
.type _EMITCALLPTR, @function
push ebp
mov ebp, esp
.Lt_0597:
push 0
push 2
push offset Lt_03FF
push -1
push offset Lt_0738
call fb_StrAssign
add esp, 20
push 0
push -1
push 0
push 0
push dword ptr [ebp+12]
call EXPRNEWVREG
add esp, 8
push eax
call EXPRFLUSH
add esp, 8
push eax
push -1
push offset Lt_0738
call fb_StrConcatAssign
add esp, 20
push 0
push 2
push offset Lt_0125
push -1
push offset Lt_0738
call fb_StrConcatAssign
add esp, 20
push dword ptr [ebp+24]
push dword ptr [ebp+16]
push dword ptr [ebp+20]
push offset Lt_0738
call HDOCALL
add esp, 16
.Lt_0598:
mov esp, ebp
pop ebp
ret
.size _EMITCALLPTR, .-_EMITCALLPTR

.section .bss
.balign 4
	.lcomm	Lt_0738,12

.section .text
.balign 16
_EMITJUMPPTR:
.type _EMITJUMPPTR, @function
push ebp
mov ebp, esp
sub esp, 36
.Lt_0599:
push 0
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 0
push -1
push 2
push offset Lt_016A
push -1
push -1
push -1
push 0
push dword ptr [ebp+8]
call EXPRNEWVREG
add esp, 8
push eax
call EXPRFLUSH
add esp, 8
push eax
push 7
push offset Lt_059B
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ebp-24]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-36]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-36]
push eax
call HWRITELINE
add esp, 8
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
.Lt_059A:
mov esp, ebp
pop ebp
ret
.size _EMITJUMPPTR, .-_EMITJUMPPTR
.balign 16
_EMITBRANCH:
.type _EMITBRANCH, @function
push ebp
mov ebp, esp
sub esp, 36
.Lt_059F:
push 0
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 0
push -1
push 2
push offset Lt_016A
push -1
push 0
push dword ptr [ebp+12]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
push 6
push offset Lt_05A1
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ebp-24]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-36]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-36]
push eax
call HWRITELINE
add esp, 8
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
.Lt_05A0:
mov esp, ebp
pop ebp
ret
.size _EMITBRANCH, .-_EMITBRANCH
.balign 16
_EMITJMPTB:
.type _EMITJMPTB, @function
push ebp
mov ebp, esp
sub esp, 312
push ebx
push esi
.Lt_05A5:
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 0
push -1
push 0
push 0
push dword ptr [ebp+8]
call EXPRNEWVREG
add esp, 8
push eax
call EXPRFLUSH
add esp, 8
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
cmp dword ptr [ebp+24], 0
jg .Lt_05A8
push -1
mov dword ptr [ebp-276], 0
mov dword ptr [ebp-272], 0
mov dword ptr [ebp-268], 0
push 0
push -1
push 2
push offset Lt_016A
push -1
push 0
push dword ptr [ebp+28]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
push 6
push offset Lt_05A1
mov dword ptr [ebp-252], 0
mov dword ptr [ebp-248], 0
mov dword ptr [ebp-244], 0
lea eax, [ebp-252]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-264], 0
mov dword ptr [ebp-260], 0
mov dword ptr [ebp-256], 0
lea eax, [ebp-264]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-276]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-276]
push eax
call HWRITELINE
add esp, 8
lea eax, [ebp-276]
push eax
call fb_StrDelete
add esp, 4
push -1
mov dword ptr [ebp-312], 0
mov dword ptr [ebp-308], 0
mov dword ptr [ebp-304], 0
push 0
push -1
push 2
push offset Lt_016A
push -1
push -1
lea eax, [ebp-24]
push eax
push 7
push offset Lt_05AC
mov dword ptr [ebp-288], 0
mov dword ptr [ebp-284], 0
mov dword ptr [ebp-280], 0
lea eax, [ebp-288]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-300], 0
mov dword ptr [ebp-296], 0
mov dword ptr [ebp-292], 0
lea eax, [ebp-300]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-312]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-312]
push eax
call HWRITELINE
add esp, 8
lea eax, [ebp-312]
push eax
call fb_StrDelete
add esp, 4
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
lea eax, [ebp-24]
push eax
call fb_StrDelete
add esp, 4
lea eax, [ebp-12]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_05A6
.Lt_05A8:
.Lt_05A7:
push 0
push 0
call SYMBUNIQUEID
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
push 7
mov ebx, dword ptr [ebp+40]
mov eax, dword ptr [ebp+44]
sub ebx, dword ptr [ebp+32]
sbb eax, dword ptr [ebp+36]
add ebx, 1
adc eax, 0
mov esi, ebx
mov ecx, eax
push ecx
push esi
call EXPRNEWIMMI
add esp, 12
mov dword ptr [ebp-44], eax
push -1
mov dword ptr [ebp-108], 0
mov dword ptr [ebp-104], 0
mov dword ptr [ebp-100], 0
push 0
push -1
push 6
push offset Lt_05B1
push -1
push -1
push 0
push dword ptr [ebp-44]
call EXPRFLUSH
add esp, 8
push eax
push -1
push 2
push offset Lt_0186
push -1
push -1
lea eax, [ebp-12]
push eax
push 20
push offset Lt_05B0
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
lea eax, [ebp-60]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
mov dword ptr [ebp-64], 0
lea eax, [ebp-72]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-84], 0
mov dword ptr [ebp-80], 0
mov dword ptr [ebp-76], 0
lea eax, [ebp-84]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-96], 0
mov dword ptr [ebp-92], 0
mov dword ptr [ebp-88], 0
lea eax, [ebp-96]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-108]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-108]
push eax
call HWRITELINE
add esp, 8
lea eax, [ebp-108]
push eax
call fb_StrDelete
add esp, 4
call SECTIONINDENT
mov dword ptr [ebp-48], 0
mov esi, dword ptr [ebp+32]
mov eax, dword ptr [ebp+36]
mov dword ptr [ebp-248], esi
mov dword ptr [ebp-244], eax
mov eax, dword ptr [ebp+40]
mov esi, dword ptr [ebp+44]
mov dword ptr [ebp-256], eax
mov dword ptr [ebp-252], esi
jmp .Lt_05B8
.Lt_05BB:
mov eax, dword ptr [ebp-48]
sal eax, 3
mov esi, dword ptr [ebp+16]
add esi, eax
mov ecx, dword ptr [esi]
mov eax, dword ptr [esi+4]
cmp dword ptr [ebp-244], eax
jne .Lt_05BD
cmp dword ptr [ebp-248], ecx
jne .Lt_05BD
.Lt_0739:
mov ecx, dword ptr [ebp-48]
sal ecx, 2
mov eax, dword ptr [ebp+20]
add eax, ecx
mov ecx, dword ptr [eax]
mov dword ptr [ebp-40], ecx
inc dword ptr [ebp-48]
jmp .Lt_05BC
.Lt_05BD:
mov ecx, dword ptr [ebp+28]
mov dword ptr [ebp-40], ecx
.Lt_05BC:
push -1
mov dword ptr [ebp-292], 0
mov dword ptr [ebp-288], 0
mov dword ptr [ebp-284], 0
push 0
push -1
push 2
push offset Lt_05BE
push -1
push 0
push dword ptr [ebp-40]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
push 3
push offset Lt_04C2
mov dword ptr [ebp-268], 0
mov dword ptr [ebp-264], 0
mov dword ptr [ebp-260], 0
lea eax, [ebp-268]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-280], 0
mov dword ptr [ebp-276], 0
mov dword ptr [ebp-272], 0
lea eax, [ebp-280]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-292]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-292]
push eax
call HWRITELINE
add esp, 8
lea eax, [ebp-292]
push eax
call fb_StrDelete
add esp, 4
.Lt_05B9:
add dword ptr [ebp-248], 1
adc dword ptr [ebp-244], 0
.Lt_05B8:
mov ecx, dword ptr [ebp-256]
mov eax, dword ptr [ebp-252]
cmp dword ptr [ebp-244], eax
jb .Lt_05BB
ja .Lt_073A
cmp dword ptr [ebp-248], ecx
jbe .Lt_05BB
.Lt_073A:
.Lt_05BA:
call SECTIONUNINDENT
push -1
mov dword ptr [ebp-120], 0
mov dword ptr [ebp-116], 0
mov dword ptr [ebp-112], 0
push 0
push 3
push offset Lt_01E9
push -1
lea ecx, [ebp-120]
push ecx
call fb_StrAssign
add esp, 20
lea eax, [ebp-120]
push eax
call HWRITELINE
add esp, 8
lea eax, [ebp-120]
push eax
call fb_StrDelete
add esp, 4
cmp dword ptr [ebp+36], 0
jb .Lt_05C4
ja .Lt_073B
cmp dword ptr [ebp+32], 0
jbe .Lt_05C4
.Lt_073B:
push dword ptr [ebp-24]
push 0
push 8
call EXPRNEWTEXT
add esp, 12
mov dword ptr [ebp-44], eax
push 7
push dword ptr [ebp+36]
push dword ptr [ebp+32]
call EXPRNEWIMMI
add esp, 12
push eax
push dword ptr [ebp-44]
push 47
call EXPRNEWBOP
add esp, 12
mov dword ptr [ebp-44], eax
push -1
mov dword ptr [ebp-300], 0
mov dword ptr [ebp-296], 0
mov dword ptr [ebp-292], 0
push 0
push -1
push 2
push offset Lt_016A
push -1
push 0
push dword ptr [ebp+28]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
push -1
push 9
push offset Lt_053E
push -1
push -1
push 0
push dword ptr [ebp-44]
call EXPRFLUSH
add esp, 8
push eax
push 5
push offset Lt_053D
mov dword ptr [ebp-252], 0
mov dword ptr [ebp-248], 0
mov dword ptr [ebp-244], 0
lea eax, [ebp-252]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-264], 0
mov dword ptr [ebp-260], 0
mov dword ptr [ebp-256], 0
lea eax, [ebp-264]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-276], 0
mov dword ptr [ebp-272], 0
mov dword ptr [ebp-268], 0
lea eax, [ebp-276]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-288], 0
mov dword ptr [ebp-284], 0
mov dword ptr [ebp-280], 0
lea eax, [ebp-288]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-300]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-300]
push eax
call HWRITELINE
add esp, 8
lea eax, [ebp-300]
push eax
call fb_StrDelete
add esp, 4
.Lt_05C4:
.Lt_05C3:
push dword ptr [ebp-24]
push 0
push 8
call EXPRNEWTEXT
add esp, 12
mov dword ptr [ebp-44], eax
push 7
push dword ptr [ebp+44]
push dword ptr [ebp+40]
call EXPRNEWIMMI
add esp, 12
push eax
push dword ptr [ebp-44]
push 46
call EXPRNEWBOP
add esp, 12
mov dword ptr [ebp-44], eax
push -1
mov dword ptr [ebp-180], 0
mov dword ptr [ebp-176], 0
mov dword ptr [ebp-172], 0
push 0
push -1
push 2
push offset Lt_016A
push -1
push 0
push dword ptr [ebp+28]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
push -1
push 9
push offset Lt_053E
push -1
push -1
push 0
push dword ptr [ebp-44]
call EXPRFLUSH
add esp, 8
push eax
push 5
push offset Lt_053D
mov dword ptr [ebp-132], 0
mov dword ptr [ebp-128], 0
mov dword ptr [ebp-124], 0
lea eax, [ebp-132]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-144], 0
mov dword ptr [ebp-140], 0
mov dword ptr [ebp-136], 0
lea eax, [ebp-144]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-156], 0
mov dword ptr [ebp-152], 0
mov dword ptr [ebp-148], 0
lea eax, [ebp-156]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-168], 0
mov dword ptr [ebp-164], 0
mov dword ptr [ebp-160], 0
lea eax, [ebp-168]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-180]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-180]
push eax
call HWRITELINE
add esp, 8
lea eax, [ebp-180]
push eax
call fb_StrDelete
add esp, 4
push dword ptr [ebp-24]
push 0
push 8
call EXPRNEWTEXT
add esp, 12
mov dword ptr [ebp-44], eax
push 7
push dword ptr [ebp+36]
push dword ptr [ebp+32]
call EXPRNEWIMMI
add esp, 12
push eax
push dword ptr [ebp-44]
push 29
call EXPRNEWBOP
add esp, 12
mov dword ptr [ebp-44], eax
push -1
mov dword ptr [ebp-240], 0
mov dword ptr [ebp-236], 0
mov dword ptr [ebp-232], 0
push 0
push -1
push 3
push offset Lt_0216
push -1
push -1
push 0
push dword ptr [ebp-44]
call EXPRFLUSH
add esp, 8
push eax
push -1
push 2
push offset Lt_0186
push -1
push -1
lea eax, [ebp-12]
push eax
push 7
push offset Lt_059B
mov dword ptr [ebp-192], 0
mov dword ptr [ebp-188], 0
mov dword ptr [ebp-184], 0
lea eax, [ebp-192]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-204], 0
mov dword ptr [ebp-200], 0
mov dword ptr [ebp-196], 0
lea eax, [ebp-204]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-216], 0
mov dword ptr [ebp-212], 0
mov dword ptr [ebp-208], 0
lea eax, [ebp-216]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-228], 0
mov dword ptr [ebp-224], 0
mov dword ptr [ebp-220], 0
lea eax, [ebp-228]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-240]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-240]
push eax
call HWRITELINE
add esp, 8
lea eax, [ebp-240]
push eax
call fb_StrDelete
add esp, 4
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
lea eax, [ebp-24]
push eax
call fb_StrDelete
add esp, 4
lea eax, [ebp-12]
push eax
call fb_StrDelete
add esp, 4
.Lt_05A6:
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITJMPTB, .-_EMITJMPTB
.balign 16
_EMITMEM:
.type _EMITMEM, @function
push ebp
mov ebp, esp
sub esp, 84
.Lt_05D4:
cmp dword ptr [ebp+8], 106
jne .Lt_05D7
.Lt_05D8:
push 0
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
push 0
push -1
push 4
push offset Lt_00CB
push -1
push -1
push 0
push 0
push dword ptr [ebp+16]
call EXPRNEWVREG
add esp, 8
push eax
call EXPRFLUSH
add esp, 8
push eax
push -1
push 6
push offset Lt_05DA
push -1
push -1
push 0
push 0
push dword ptr [ebp+12]
call EXPRNEWVREG
add esp, 8
push eax
call EXPRFLUSH
add esp, 8
push eax
push 19
push offset Lt_05D9
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ebp-24]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
lea eax, [ebp-36]
push eax
call fb_StrConcat
add esp, 20
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
lea eax, [ebp-60]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-60]
push eax
call HWRITELINE
add esp, 8
lea eax, [ebp-60]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_05D6
.Lt_05D7:
cmp dword ptr [ebp+8], 104
jne .Lt_05E0
.Lt_05E1:
push 0
mov dword ptr [ebp-84], 0
mov dword ptr [ebp-80], 0
mov dword ptr [ebp-76], 0
push 0
push -1
push 4
push offset Lt_00CB
push -1
push -1
push dword ptr [ebp+24]
push dword ptr [ebp+20]
call fb_ULongintToStr
add esp, 8
push eax
push -1
push 3
push offset Lt_0130
push -1
push -1
push 0
push 0
push dword ptr [ebp+16]
call EXPRNEWVREG
add esp, 8
push eax
call EXPRFLUSH
add esp, 8
push eax
push -1
push 3
push offset Lt_0130
push -1
push -1
push 0
push 0
push dword ptr [ebp+12]
call EXPRNEWVREG
add esp, 8
push eax
call EXPRFLUSH
add esp, 8
push eax
push 19
push offset Lt_05E2
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ebp-24]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
lea eax, [ebp-36]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
lea eax, [ebp-48]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
lea eax, [ebp-60]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
mov dword ptr [ebp-64], 0
lea eax, [ebp-72]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-84]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-84]
push eax
call HWRITELINE
add esp, 8
lea eax, [ebp-84]
push eax
call fb_StrDelete
add esp, 4
.Lt_05E0:
.Lt_05D6:
.Lt_05D5:
mov esp, ebp
pop ebp
ret
.size _EMITMEM, .-_EMITMEM
.balign 16
_EMITDECL:
.type _EMITDECL, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_05EA:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 2
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
push dword ptr [ebp+8]
call SYMBHASDTOR
add esp, 4
and ebx, eax
je .Lt_05ED
jmp .Lt_05EB
.Lt_05ED:
.Lt_05EC:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+88]
mov dword ptr [ebp-4], ebx
cmp dword ptr [ebp-4], 0
je .Lt_05EF
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebx+4]
and eax, 2
test eax, eax
setne al
shr eax, 1
sbb eax, eax
push dword ptr [ebp-4]
mov ebx, eax
call SYMBHASDTOR
add esp, 4
and ebx, eax
je .Lt_05F1
jmp .Lt_05EB
.Lt_05F1:
.Lt_05F0:
.Lt_05EF:
.Lt_05EE:
push dword ptr [ebp+8]
call HMAYBEEMITLOCALVAR
add esp, 4
.Lt_05EB:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITDECL, .-_EMITDECL
.balign 16
_EMITDBG:
.type _EMITDBG, @function
push ebp
mov ebp, esp
.Lt_05F2:
cmp dword ptr [ebp+8], 108
jne .Lt_05F5
mov eax, dword ptr [ebp+16]
mov dword ptr [CTX+2620], eax
.Lt_05F5:
.Lt_05F4:
.Lt_05F3:
mov esp, ebp
pop ebp
ret
.size _EMITDBG, .-_EMITDBG
.balign 16
_EMITCOMMENT:
.type _EMITCOMMENT, @function
push ebp
mov ebp, esp
sub esp, 28
push ebx
.Lt_05F6:
push 0
push 0
push dword ptr [ebp+8]
push -1
push offset Lt_073E
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_073E
call fb_TRIM
add esp, 4
push eax
push -1
push offset Lt_073E
call fb_StrAssign
add esp, 20
push -1
push offset Lt_073E
call fb_StrLen
add esp, 8
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
jle .Lt_05F9
mov eax, dword ptr [Lt_073E]
add eax, dword ptr [ebp-4]
movzx ebx, byte ptr [eax-1]
cmp ebx, 92
jne .Lt_05FB
push 0
push 14
push offset Lt_05FC
push -1
push offset Lt_073E
call fb_StrConcatAssign
add esp, 20
.Lt_05FB:
.Lt_05FA:
push -1
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
push 0
push -1
push -1
push offset Lt_073E
push 4
push offset Lt_05FD
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
lea eax, [ebp-16]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-28]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-28]
push eax
call HWRITELINE
add esp, 8
lea eax, [ebp-28]
push eax
call fb_StrDelete
add esp, 4
.Lt_05F9:
.Lt_05F8:
.Lt_05F7:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITCOMMENT, .-_EMITCOMMENT

.section .bss
.balign 4
	.lcomm	Lt_073E,12

.section .text
.balign 16
_EMITASMBEGIN:
.type _EMITASMBEGIN, @function
.Lt_0600:
push 0
push 8
push offset Lt_0602
push -1
lea eax, [CTX+2712]
push eax
call fb_StrAssign
add esp, 20
call SECTIONINSIDEPROC
test eax, eax
je .Lt_0604
push 0
push 14
push offset Lt_0605
push -1
lea eax, [CTX+2712]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_0604:
.Lt_0603:
push 0
push 3
push offset Lt_00E1
push -1
lea eax, [CTX+2712]
push eax
call fb_StrConcatAssign
add esp, 20
cmp dword ptr [ENV+132], 0
jne .Lt_0607
push 0
push 2
push offset Lt_00BF
push -1
lea eax, [CTX+2712]
push eax
call fb_StrConcatAssign
add esp, 20
call SECTIONINSIDEPROC
test eax, eax
je .Lt_0609
push 0
push 3
push offset Lt_060A
push -1
lea eax, [CTX+2712]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_0609:
.Lt_0608:
mov dword ptr [CTX+2724], 0
push 0
push 1
push offset Lt_0000
push -1
lea eax, [CTX+2728]
push eax
call fb_StrAssign
add esp, 20
push 0
push 1
push offset Lt_0000
push -1
lea eax, [CTX+2740]
push eax
call fb_StrAssign
add esp, 20
.Lt_0607:
.Lt_0606:
.Lt_0601:
ret
.size _EMITASMBEGIN, .-_EMITASMBEGIN
.balign 16
_EMITASMTEXT:
.type _EMITASMTEXT, @function
push ebp
mov ebp, esp
sub esp, 12
.Lt_060B:
push 0
push -1
push 0
push dword ptr [ebp+8]
push -1
lea eax, [CTX+2712]
push eax
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [CTX+2712]
push eax
call fb_StrAssign
add esp, 20
.Lt_060C:
mov esp, ebp
pop ebp
ret
.size _EMITASMTEXT, .-_EMITASMTEXT
.balign 16
_EMITASMSYMB:
.type _EMITASMSYMB, @function
push ebp
mov ebp, esp
sub esp, 12
.Lt_060E:
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
call SECTIONINSIDEPROC
test eax, eax
jne .Lt_0611
push 0
push -1
push -1
push dword ptr [ebp+8]
call HGETMANGLEDNAMEFORASM
add esp, 8
push eax
push -1
lea eax, [CTX+2712]
push eax
call fb_StrConcatAssign
add esp, 20
lea eax, [ebp-12]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_060F
.Lt_0611:
.Lt_0610:
push 0
push 0
push dword ptr [ebp+8]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
cmp dword ptr [ENV+132], 0
jne .Lt_0613
push 0
push 2
push offset Lt_0614
push -1
lea eax, [CTX+2712]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push dword ptr [CTX+2724]
call fb_IntToStr
add esp, 4
push eax
push -1
lea eax, [CTX+2712]
push eax
call fb_StrConcatAssign
add esp, 20
inc dword ptr [CTX+2724]
push -1
lea eax, [CTX+2728]
push eax
call fb_StrLen
add esp, 8
test eax, eax
jle .Lt_0616
push 0
push 3
push offset Lt_0130
push -1
lea eax, [CTX+2728]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_0130
push -1
lea eax, [CTX+2740]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_0616:
.Lt_0615:
push 0
push 7
push offset Lt_0617
push -1
lea eax, [CTX+2728]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
lea eax, [ebp-12]
push eax
push -1
lea eax, [CTX+2728]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 2
push offset Lt_0125
push -1
lea eax, [CTX+2728]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 6
push offset Lt_0618
push -1
lea eax, [CTX+2740]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
lea eax, [ebp-12]
push eax
push -1
lea eax, [CTX+2740]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 2
push offset Lt_0125
push -1
lea eax, [CTX+2740]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_0612
.Lt_0613:
push 0
push -1
lea eax, [ebp-12]
push eax
push -1
lea eax, [CTX+2712]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_0612:
lea eax, [ebp-12]
push eax
call fb_StrDelete
add esp, 4
.Lt_060F:
mov esp, ebp
pop ebp
ret
.size _EMITASMSYMB, .-_EMITASMSYMB
.balign 16
_EMITASMEND:
.type _EMITASMEND, @function
.Lt_0619:
cmp dword ptr [ENV+132], 0
jne .Lt_061C
call SECTIONINSIDEPROC
test eax, eax
je .Lt_061E
push 0
push 3
push offset Lt_0274
push -1
lea eax, [CTX+2712]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_061E:
.Lt_061D:
push 0
push 2
push offset Lt_00BF
push -1
lea eax, [CTX+2712]
push eax
call fb_StrConcatAssign
add esp, 20
call SECTIONINSIDEPROC
test eax, eax
je .Lt_0620
push 0
push 4
push offset Lt_0621
push -1
lea eax, [CTX+2712]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
lea eax, [CTX+2728]
push eax
push -1
lea eax, [CTX+2712]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 4
push offset Lt_0621
push -1
lea eax, [CTX+2712]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
lea eax, [CTX+2740]
push eax
push -1
lea eax, [CTX+2712]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 18
push offset Lt_0622
push -1
lea eax, [CTX+2712]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 50
push offset Lt_0623
push -1
lea eax, [CTX+2712]
push eax
call fb_StrConcatAssign
add esp, 20
cmp dword ptr [ENV+116], 1
jne .Lt_0625
push 0
push 57
push offset Lt_0626
push -1
lea eax, [CTX+2712]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 65
push offset Lt_0627
push -1
lea eax, [CTX+2712]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_0625:
.Lt_0624:
.Lt_0620:
.Lt_061F:
.Lt_061C:
.Lt_061B:
push 0
push 4
push offset Lt_00CB
push -1
lea eax, [CTX+2712]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
lea eax, [CTX+2712]
push eax
call HWRITELINE
add esp, 8
.Lt_061A:
ret
.size _EMITASMEND, .-_EMITASMEND
.balign 16
_EMITVARINIBEGIN:
.type _EMITVARINIBEGIN, @function
push ebp
mov ebp, esp
.Lt_0628:
push 0
push 1
push offset Lt_0000
push -1
lea eax, [CTX+2672]
push eax
call fb_StrAssign
add esp, 20
mov dword ptr [CTX+2684], 0
.Lt_0629:
mov esp, ebp
pop ebp
ret
.size _EMITVARINIBEGIN, .-_EMITVARINIBEGIN
.balign 16
_EMITVARINIEND:
.type _EMITVARINIEND, @function
push ebp
mov ebp, esp
.Lt_062A:
push dword ptr [CTX+2672]
push dword ptr [ebp+8]
push 0
call HEMITVARDECL
add esp, 12
push 0
push 1
push offset Lt_0000
push -1
lea eax, [CTX+2672]
push eax
call fb_StrAssign
add esp, 20
.Lt_062B:
mov esp, ebp
pop ebp
ret
.size _EMITVARINIEND, .-_EMITVARINIEND
.balign 16
HVARINISEPARATOR:
.type HVARINISEPARATOR, @function
.Lt_062C:
cmp dword ptr [CTX+2684], 0
jle .Lt_062F
push 0
push 3
push offset Lt_0130
push -1
lea eax, [CTX+2672]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_062F:
.Lt_062E:
.Lt_062D:
ret
.size HVARINISEPARATOR, .-HVARINISEPARATOR
.balign 16
_EMITVARINII:
.type _EMITVARINII, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_0630:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+24]
and ebx, 511
mov dword ptr [ebp-4], ebx
push dword ptr [ebp-4]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call EXPRNEWIMMI
add esp, 12
mov dword ptr [ebp-8], eax
push dword ptr [ebp-8]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+28]
push dword ptr [ebp-4]
call EXPRNEWCAST
add esp, 12
mov dword ptr [ebp-8], eax
push 0
push -1
push 0
push dword ptr [ebp-8]
call EXPRFLUSH
add esp, 8
push eax
push -1
lea eax, [CTX+2672]
push eax
call fb_StrConcatAssign
add esp, 20
call HVARINISEPARATOR
.Lt_0631:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITVARINII, .-_EMITVARINII
.balign 16
_EMITVARINIF:
.type _EMITVARINIF, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_0632:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+24]
and ebx, 511
mov dword ptr [ebp-4], ebx
push dword ptr [ebp-4]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call EXPRNEWIMMF
add esp, 12
mov dword ptr [ebp-8], eax
push dword ptr [ebp-8]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+28]
push dword ptr [ebp-4]
call EXPRNEWCAST
add esp, 12
mov dword ptr [ebp-8], eax
push 0
push -1
push 0
push dword ptr [ebp-8]
call EXPRFLUSH
add esp, 8
push eax
push -1
lea eax, [CTX+2672]
push eax
call fb_StrConcatAssign
add esp, 20
call HVARINISEPARATOR
.Lt_0633:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITVARINIF, .-_EMITVARINIF
.balign 16
_EMITVARINIOFS:
.type _EMITVARINIOFS, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0634:
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call EXPRNEWOFFSET
add esp, 12
mov dword ptr [ebp-4], eax
push dword ptr [ebp-4]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+28]
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+24]
and ebx, 511
push ebx
call EXPRNEWCAST
add esp, 12
mov dword ptr [ebp-4], eax
push 0
push -1
push 0
push dword ptr [ebp-4]
call EXPRFLUSH
add esp, 8
push eax
push -1
lea eax, [CTX+2672]
push eax
call fb_StrConcatAssign
add esp, 20
call HVARINISEPARATOR
.Lt_0635:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITVARINIOFS, .-_EMITVARINIOFS
.balign 16
_EMITVARINISTR:
.type _EMITVARINISTR, @function
push ebp
mov ebp, esp
push ebx
.Lt_0636:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp+12]
cmp dword ptr [ebp+24], eax
jl .Lt_0639
jg .Lt_073F
cmp dword ptr [ebp+20], ebx
jbe .Lt_0639
.Lt_073F:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebp+20], eax
mov dword ptr [ebp+24], ebx
.Lt_0639:
.Lt_0638:
mov ebx, dword ptr [ebp+20]
mov eax, dword ptr [ebp+24]
add ebx, 1
adc eax, 0
push eax
push ebx
push dword ptr [ebp+16]
call HUNESCAPE
add esp, 4
push eax
lea eax, [CTX+2672]
push eax
call HBUILDSTRLIT
add esp, 16
call HVARINISEPARATOR
.Lt_0637:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITVARINISTR, .-_EMITVARINISTR
.balign 16
_EMITVARINIWSTR:
.type _EMITVARINIWSTR, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
.Lt_063A:
push 0
push 3
push offset Lt_063C
push -1
lea eax, [CTX+2672]
push eax
call fb_StrConcatAssign
add esp, 20
push dword ptr [ebp+16]
call HUNESCAPEW
add esp, 4
mov dword ptr [ebp+16], eax
mov eax, dword ptr [SYMB_DTYPETB+172]
mov dword ptr [ebp-8], eax
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp+12]
cmp dword ptr [ebp+24], eax
jl .Lt_063E
jg .Lt_0740
cmp dword ptr [ebp+20], ebx
jbe .Lt_063E
.Lt_0740:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebp+20], eax
mov dword ptr [ebp+24], ebx
.Lt_063E:
.Lt_063D:
mov dword ptr [ebp-12], 0
mov ebx, dword ptr [ebp+20]
mov eax, dword ptr [ebp+24]
add ebx, 4294967295
adc eax, 4294967295
mov ecx, ebx
mov dword ptr [ebp-16], ecx
jmp .Lt_0640
.Lt_0643:
cmp dword ptr [ebp-12], 0
jle .Lt_0645
push 0
push 3
push offset Lt_0130
push -1
lea ecx, [CTX+2672]
push ecx
call fb_StrConcatAssign
add esp, 20
.Lt_0645:
.Lt_0644:
push 0
push 3
push offset Lt_0646
push -1
lea eax, [CTX+2672]
push eax
call fb_StrConcatAssign
add esp, 20
mov eax, dword ptr [ebp-12]
sal eax, 2
mov ecx, dword ptr [ebp+16]
add ecx, eax
mov eax, dword ptr [ecx]
mov dword ptr [ebp-4], eax
push 39
push dword ptr [ebp-4]
call HCHARNEEDSESCAPING
add esp, 8
test eax, eax
je .Lt_0648
push 0
push 3
push offset Lt_03EE
push -1
lea eax, [CTX+2672]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
mov eax, dword ptr [ebp-8]
sal eax, 1
mov ecx, eax
push ecx
push dword ptr [ebp-4]
call fb_HEXEx_i
add esp, 8
push eax
push -1
lea eax, [CTX+2672]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_0647
.Lt_0648:
push 0
push -1
push dword ptr [ebp-4]
push 1
call fb_CHR
add esp, 8
push eax
push -1
lea eax, [CTX+2672]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_0647:
push 0
push 2
push offset Lt_03FE
push -1
lea eax, [CTX+2672]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_0641:
inc dword ptr [ebp-12]
.Lt_0640:
mov eax, dword ptr [ebp-16]
cmp dword ptr [ebp-12], eax
jle .Lt_0643
.Lt_0642:
push 0
push 3
push offset Lt_0649
push -1
lea eax, [CTX+2672]
push eax
call fb_StrConcatAssign
add esp, 20
call HVARINISEPARATOR
.Lt_063B:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITVARINIWSTR, .-_EMITVARINIWSTR
.balign 16
_EMITVARINIPAD:
.type _EMITVARINIPAD, @function
push ebp
mov ebp, esp
.Lt_064A:
.Lt_064B:
mov esp, ebp
pop ebp
ret
.size _EMITVARINIPAD, .-_EMITVARINIPAD
.balign 16
_EMITVARINISCOPEBEGIN:
.type _EMITVARINISCOPEBEGIN, @function
.Lt_064C:
inc dword ptr [CTX+2684]
push 0
push 3
push offset Lt_063C
push -1
lea eax, [CTX+2672]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_064D:
ret
.size _EMITVARINISCOPEBEGIN, .-_EMITVARINISCOPEBEGIN
.balign 16
_EMITVARINISCOPEEND:
.type _EMITVARINISCOPEEND, @function
.Lt_064E:
push 3
push offset Lt_0130
push -1
push 2
lea eax, [CTX+2672]
push eax
call fb_RIGHT
add esp, 8
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_0651
push 0
push -1
push -1
lea eax, [CTX+2672]
push eax
call fb_StrLen
add esp, 8
add eax, -2
push eax
lea eax, [CTX+2672]
push eax
call fb_LEFT
add esp, 8
push eax
push -1
lea eax, [CTX+2672]
push eax
call fb_StrAssign
add esp, 20
.Lt_0651:
.Lt_0650:
push 0
push 3
push offset Lt_0649
push -1
lea eax, [CTX+2672]
push eax
call fb_StrConcatAssign
add esp, 20
dec dword ptr [CTX+2684]
call HVARINISEPARATOR
.Lt_064F:
ret
.size _EMITVARINISCOPEEND, .-_EMITVARINISCOPEEND
.balign 16
_EMITFBCTINFBEGIN:
.type _EMITFBCTINFBEGIN, @function
push ebp
mov ebp, esp
sub esp, 12
.Lt_0652:
push -1
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
push 0
push 1
push offset Lt_0000
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-12]
push eax
call HWRITELINE
add esp, 8
lea eax, [ebp-12]
push eax
call fb_StrDelete
add esp, 4
push 0
push 19
push offset Lt_0655
push -1
lea eax, [CTX+2688]
push eax
call fb_StrAssign
add esp, 20
push 0
push 44
push offset Lt_0659
push -1
lea eax, [CTX+2688]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 16
push offset Lt_065A
push -1
lea eax, [CTX+2688]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_0653:
mov esp, ebp
pop ebp
ret
.size _EMITFBCTINFBEGIN, .-_EMITFBCTINFBEGIN
.balign 16
_EMITFBCTINFSTRING:
.type _EMITFBCTINFSTRING, @function
push ebp
mov ebp, esp
sub esp, 24
.Lt_065B:
push 0
push -1
push -1
push 3
push offset Lt_065D
push 0
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
lea eax, [CTX+2688]
push eax
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ebp-24]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [CTX+2688]
push eax
call fb_StrAssign
add esp, 20
.Lt_065C:
mov esp, ebp
pop ebp
ret
.size _EMITFBCTINFSTRING, .-_EMITFBCTINFSTRING
.balign 16
_EMITFBCTINFEND:
.type _EMITFBCTINFEND, @function
.Lt_0660:
push 3
push offset Lt_065D
push -1
push 2
lea eax, [CTX+2688]
push eax
call fb_RIGHT
add esp, 8
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_0663
push 0
push -1
push -1
lea eax, [CTX+2688]
push eax
call fb_StrLen
add esp, 8
add eax, -2
push eax
lea eax, [CTX+2688]
push eax
call fb_LEFT
add esp, 8
push eax
push -1
lea eax, [CTX+2688]
push eax
call fb_StrAssign
add esp, 20
.Lt_0663:
.Lt_0662:
push 0
push 3
push offset Lt_0664
push -1
lea eax, [CTX+2688]
push eax
call fb_StrConcatAssign
add esp, 20
push -1
lea eax, [CTX+2688]
push eax
call HWRITELINE
add esp, 8
.Lt_0661:
ret
.size _EMITFBCTINFEND, .-_EMITFBCTINFEND
.balign 16
_EMITPROCBEGIN:
.type _EMITPROCBEGIN, @function
push ebp
mov ebp, esp
sub esp, 124
push ebx
.Lt_0665:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+108]
mov eax, dword ptr [ebx+24]
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
jne .Lt_0668
lea eax, [ENV+244]
mov dword ptr [ebp-4], eax
.Lt_0668:
.Lt_0667:
push dword ptr [ebp-4]
call HUPDATECURRENTFILENAME
add esp, 4
call IRHLEMITPROCBEGIN
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
push -1
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
push 0
push 1
push offset Lt_0000
push -1
lea eax, [ebp-28]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-28]
push eax
call HWRITELINE
add esp, 8
lea eax, [ebp-28]
push eax
call fb_StrDelete
add esp, 4
cmp dword ptr [ENV+144], 0
je .Lt_066B
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+108]
push dword ptr [ebx+16]
push dword ptr [ebp+8]
push 108
call _EMITDBG
add esp, 12
.Lt_066B:
.Lt_066A:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 268435456
test eax, eax
je .Lt_066D
push 0
push -1
push -1
push dword ptr [ebp+8]
call HGETMANGLEDNAMEFORASM
add esp, 8
push eax
push -1
lea eax, [ebp-16]
push eax
call fb_StrAssign
add esp, 20
push 0
mov dword ptr [ebp-88], 0
mov dword ptr [ebp-84], 0
mov dword ptr [ebp-80], 0
push 0
push -1
push 5
push offset Lt_066F
push -1
push -1
lea eax, [ebp-16]
push eax
push 18
push offset Lt_066E
mov dword ptr [ebp-64], 0
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
lea eax, [ebp-64]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
lea eax, [ebp-76]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-88]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-88]
push eax
call HWRITELINE
add esp, 8
lea eax, [ebp-88]
push eax
call fb_StrDelete
add esp, 4
push 0
mov dword ptr [ebp-124], 0
mov dword ptr [ebp-120], 0
mov dword ptr [ebp-116], 0
push 0
push -1
push 6
push offset Lt_0674
push -1
push -1
lea eax, [ebp-16]
push eax
push 11
push offset Lt_0673
mov dword ptr [ebp-100], 0
mov dword ptr [ebp-96], 0
mov dword ptr [ebp-92], 0
lea eax, [ebp-100]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-112], 0
mov dword ptr [ebp-108], 0
mov dword ptr [ebp-104], 0
lea eax, [ebp-112]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-124]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-124]
push eax
call HWRITELINE
add esp, 8
lea eax, [ebp-124]
push eax
call fb_StrDelete
add esp, 4
lea eax, [ebp-16]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0666
.Lt_066D:
.Lt_066C:
call SECTIONBEGIN
push dword ptr [ebp+8]
call HNEEDALIAS
add esp, 4
test eax, eax
je .Lt_0679
push 0
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
push 0
push -1
push 2
push offset Lt_016A
push -1
push 1
push dword ptr [ebp+8]
call HEMITPROCHEADER
add esp, 8
push eax
mov dword ptr [ebp-64], 0
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
lea eax, [ebp-64]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-76]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-76]
push eax
call HWRITELINE
add esp, 8
lea eax, [ebp-76]
push eax
call fb_StrDelete
add esp, 4
.Lt_0679:
.Lt_0678:
push 0
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
push 0
push -1
push 0
push dword ptr [ebp+8]
call HEMITPROCHEADER
add esp, 8
push eax
push -1
lea eax, [ebp-40]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-40]
push eax
call HWRITELINE
add esp, 8
lea eax, [ebp-40]
push eax
call fb_StrDelete
add esp, 4
push 0
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
push 0
push 2
push offset Lt_0238
push -1
lea eax, [ebp-52]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-52]
push eax
call HWRITELINE
add esp, 8
lea eax, [ebp-52]
push eax
call fb_StrDelete
add esp, 4
call SECTIONINDENT
lea eax, [ebp-16]
push eax
call fb_StrDelete
add esp, 4
.Lt_0666:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITPROCBEGIN, .-_EMITPROCBEGIN
.balign 16
_EMITPROCEND:
.type _EMITPROCEND, @function
push ebp
mov ebp, esp
sub esp, 88
push ebx
.Lt_067E:
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 268435456
test ebx, ebx
je .Lt_0681
cmp dword ptr [ENV+108], 2
jne .Lt_0683
push 0
push -1
push -1
push dword ptr [ebp+8]
call HGETMANGLEDNAMEFORASM
add esp, 8
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
push -1
mov dword ptr [ebp-88], 0
mov dword ptr [ebp-84], 0
mov dword ptr [ebp-80], 0
push 0
push -1
push 5
push offset Lt_066F
push -1
push -1
lea eax, [ebp-12]
push eax
push -1
push 5
push offset Lt_0685
push -1
push -1
lea eax, [ebp-12]
push eax
push 17
push offset Lt_0684
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
lea eax, [ebp-40]
push eax
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
mov dword ptr [ebp-64], 0
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
lea eax, [ebp-64]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
lea eax, [ebp-76]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-88]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-88]
push eax
call HWRITELINE
add esp, 8
lea eax, [ebp-88]
push eax
call fb_StrDelete
add esp, 4
.Lt_0683:
.Lt_0682:
lea eax, [ebp-12]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_067F
.Lt_0681:
.Lt_0680:
call SECTIONUNINDENT
push 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
push 0
push 2
push offset Lt_0253
push -1
lea eax, [ebp-28]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-28]
push eax
call HWRITELINE
add esp, 8
lea eax, [ebp-28]
push eax
call fb_StrDelete
add esp, 4
call SECTIONEND
.Lt_068C:
lea eax, [CTX+2796]
push eax
call LISTGETHEAD
add esp, 4
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 0
jne .Lt_0690
jmp .Lt_068D
.Lt_0690:
.Lt_068F:
mov eax, dword ptr [ebp-16]
push dword ptr [eax+4]
call EXPRFREETREE
add esp, 4
push dword ptr [ebp-16]
lea eax, [CTX+2796]
push eax
call LISTDELNODE
add esp, 8
.Lt_068E:
jmp .Lt_068C
.Lt_068D:
call IRHLEMITPROCEND
lea eax, [ebp-12]
push eax
call fb_StrDelete
add esp, 4
.Lt_067F:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITPROCEND, .-_EMITPROCEND
.balign 16
_EMITPUSHARG:
.type _EMITPUSHARG, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0691:
lea eax, [CTX+2588]
push eax
call LISTNEWNODE
add esp, 4
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [ebp+8]
mov dword ptr [eax], ebx
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebp+12]
mov dword ptr [ebx+4], eax
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [ebp+24]
mov dword ptr [eax+8], ebx
.Lt_0692:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITPUSHARG, .-_EMITPUSHARG
.balign 16
_EMITSCOPEBEGIN:
.type _EMITSCOPEBEGIN, @function
push ebp
mov ebp, esp
sub esp, 12
.Lt_0693:
call SECTIONBEGIN
push -1
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
push 0
push 2
push offset Lt_0238
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-12]
push eax
call HWRITELINE
add esp, 8
lea eax, [ebp-12]
push eax
call fb_StrDelete
add esp, 4
call SECTIONINDENT
.Lt_0694:
mov esp, ebp
pop ebp
ret
.size _EMITSCOPEBEGIN, .-_EMITSCOPEBEGIN
.balign 16
_EMITSCOPEEND:
.type _EMITSCOPEEND, @function
push ebp
mov ebp, esp
sub esp, 12
.Lt_0696:
call SECTIONUNINDENT
push -1
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
push 0
push 2
push offset Lt_0253
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-12]
push eax
call HWRITELINE
add esp, 8
lea eax, [ebp-12]
push eax
call fb_StrDelete
add esp, 4
call SECTIONEND
.Lt_0697:
mov esp, ebp
pop ebp
ret
.size _EMITSCOPEEND, .-_EMITSCOPEEND
.balign 16
_GLOBAL__I:
.type _GLOBAL__I, @function
.Lt_069A:
push offset CTX
call _ZN8IRHLCCTXC1Ev
add esp, 4
.Lt_069B:
ret
.size _GLOBAL__I, .-_GLOBAL__I
.balign 16
_GLOBAL__D:
.type _GLOBAL__D, @function
.Lt_069D:
push offset CTX
call _ZN8IRHLCCTXD1Ev
add esp, 4
.Lt_069E:
ret
.size _GLOBAL__D, .-_GLOBAL__D
	#FreeBASIC-1.01.0-source/src/compiler/ir-hlc.bas' compilation took 0.0588110483950004 secs

.section .rodata
.balign 4
Lt_0000:	.ascii	"\0"

.section .data
.balign 4

.globl IRHLC_VTBL
IRHLC_VTBL:
.int _INIT
.int _END
.int _EMITBEGIN
.int _EMITEND
.int _GETOPTIONVALUE
.int _SUPPORTSOP
.int _PROCBEGIN
.int _PROCEND
.long 0
.long 0
.long 0
.int _SCOPEBEGIN
.int _SCOPEEND
.int _PROCALLOCSTATICVARS
.int _EMITCONVERT
.int _EMITLABEL
.int _EMITLABEL
.long 0
.int _EMITPROCBEGIN
.int _EMITPROCEND
.int _EMITPUSHARG
.int _EMITASMBEGIN
.int _EMITASMTEXT
.int _EMITASMSYMB
.int _EMITASMEND
.int _EMITCOMMENT
.int _EMITBOP
.int _EMITUOP
.int _EMITSTORE
.int _EMITSPILLREGS
.int _EMITLOAD
.int _EMITLOADRES
.long 0
.int _EMITADDR
.int _EMITCALL
.int _EMITCALLPTR
.long 0
.int _EMITJUMPPTR
.int _EMITBRANCH
.int _EMITJMPTB
.int _EMITMEM
.int _EMITSCOPEBEGIN
.int _EMITSCOPEEND
.int _EMITDECL
.int _EMITDBG
.int _EMITVARINIBEGIN
.int _EMITVARINIEND
.int _EMITVARINII
.int _EMITVARINIF
.int _EMITVARINIOFS
.int _EMITVARINISTR
.int _EMITVARINIWSTR
.int _EMITVARINIPAD
.int _EMITVARINISCOPEBEGIN
.int _EMITVARINISCOPEEND
.int _EMITFBCTINFBEGIN
.int _EMITFBCTINFSTRING
.int _EMITFBCTINFEND
.int IRHLALLOCVREG
.int IRHLALLOCVRIMM
.int IRHLALLOCVRIMMF
.int IRHLALLOCVRVAR
.int IRHLALLOCVRIDX
.int IRHLALLOCVRPTR
.int IRHLALLOCVROFS
.int _SETVREGDATATYPE
.long 0
.long 0
.long 0
.long 0

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
	.lcomm	CTX,2832

.section .data
.balign 4
DTYPENAME:
.int Lt_0080
.int Lt_0081
.int Lt_0082
.long 0
.int Lt_0083
.int Lt_0084
.long 0
.long 0
.long 0
.long 0
.int Lt_0085
.int Lt_0086
.int Lt_0087
.int Lt_0088
.int Lt_0089
.int Lt_008A
.int Lt_008B
.long 0
.long 0
.long 0
.long 0
.int Lt_0080
.long 0
.skip 4,0

.section .rodata
.balign 4
Lt_0080:	.ascii	"void\0"
.balign 4
Lt_0081:	.ascii	"int8\0"
.balign 4
Lt_0082:	.ascii	"uint8\0"
.balign 4
Lt_0083:	.ascii	"int16\0"
.balign 4
Lt_0084:	.ascii	"uint16\0"
.balign 4
Lt_0085:	.ascii	"int32\0"
.balign 4
Lt_0086:	.ascii	"uint32\0"
.balign 4
Lt_0087:	.ascii	"int64\0"
.balign 4
Lt_0088:	.ascii	"uint64\0"
.balign 4
Lt_0089:	.ascii	"float\0"
.balign 4
Lt_008A:	.ascii	"double\0"
.balign 4
Lt_008B:	.ascii	"FBSTRING\0"
.balign 4
Lt_009E:	.ascii	"\t\0"
.balign 4
Lt_00A4:	.ascii	"\n\0"
.balign 4
Lt_00BD:	.ascii	"#line \0"
.balign 4
Lt_00BE:	.ascii	" \"\0"
.balign 4
Lt_00BF:	.ascii	"\"\0"
.balign 4
Lt_00C2:	.ascii	"\\\0"
.balign 4
Lt_00C3:	.ascii	"\\\\\0"
.balign 4
Lt_00C8:	.ascii	"#define __FB_STATIC_ASSERT( expr ) extern int __$fb_structsizecheck[(expr) ? 1 : -1]\0"
.balign 4
Lt_00CA:	.ascii	"__FB_STATIC_ASSERT( \0"
.balign 4
Lt_00CB:	.ascii	" );\0"
.balign 4
Lt_00D5:	.ascii	" \0"
.balign 4
Lt_00D7:	.ascii	"__attribute__(( \0"
.balign 4
Lt_00DB:	.ascii	"constructor\0"
.balign 4
Lt_00DD:	.ascii	"destructor\0"
.balign 4
Lt_00E1:	.ascii	"( \0"
.balign 4
Lt_00E2:	.ascii	" )\0"
.balign 4
Lt_00E6:	.ascii	" ))\0"
.balign 4
Lt_00EF:	.ascii	"_\0"
.balign 4
Lt_00F5:	.ascii	"@\0"
.balign 4
Lt_0110:	.ascii	"static \0"
.balign 4
Lt_011F:	.ascii	" __stdcall\0"
.balign 4
Lt_0121:	.ascii	" __attribute__((stdcall))\0"
.balign 4
Lt_0124:	.ascii	"(*\0"
.balign 4
Lt_0125:	.ascii	")\0"
.balign 4
Lt_0130:	.ascii	", \0"
.balign 4
Lt_0139:	.ascii	"...\0"
.balign 4
Lt_013C:	.ascii	"char**\0"
.balign 4
Lt_0149:	.ascii	" asm(\"\0"
.balign 4
Lt_014A:	.ascii	"\")\0"
.balign 4
Lt_0151:	.ascii	"union \0"
.balign 4
Lt_0152:	.ascii	"struct \0"
.balign 4
Lt_0155:	.ascii	"$\0"
.balign 4
Lt_0169:	.ascii	"typedef \0"
.balign 4
Lt_016A:	.ascii	";\0"
.balign 4
Lt_0186:	.ascii	"[\0"
.balign 4
Lt_0187:	.ascii	"]\0"
.balign 4
Lt_0198:	.ascii	"extern \0"
.balign 4
Lt_019F:	.ascii	" __attribute__((dllimport))\0"
.balign 4
Lt_01A2:	.ascii	" __attribute__((common))\0"
.balign 4
Lt_01A5:	.ascii	" = \0"
.balign 4
Lt_01E1:	.ascii	"union {\0"
.balign 4
Lt_01E3:	.ascii	"struct {\0"
.balign 4
Lt_01E9:	.ascii	"};\0"
.balign 4
Lt_01FF:	.ascii	" __attribute__((packed, aligned(\0"
.balign 4
Lt_0200:	.ascii	")))\0"
.balign 4
Lt_0211:	.ascii	"__attribute__((gcc_struct)) \0"
.balign 4
Lt_0212:	.ascii	" {\0"
.balign 4
Lt_0215:	.ascii	"uint8 __fb_struct_body[\0"
.balign 4
Lt_0216:	.ascii	"];\0"
.balign 4
Lt_021B:	.ascii	"sizeof( \0"
.balign 4
Lt_021C:	.ascii	" ) == \0"
.balign 4
Lt_0226:	.ascii	"l\0"
.balign 4
Lt_0227:	.ascii	"q\0"
.balign 4
Lt_022A:	.ascii	"s\0"
.balign 4
Lt_022E:	.ascii	"static inline \0"
.balign 4
Lt_022F:	.ascii	" fb_\0"
.balign 4
Lt_0230:	.ascii	" value )\0"
.balign 4
Lt_0238:	.ascii	"{\0"
.balign 4
Lt_023A:	.ascii	"volatile \0"
.balign 4
Lt_023B:	.ascii	" result;\0"
.balign 4
Lt_023F:	.ascii	"__asm__(\0"
.balign 4
Lt_0241:	.ascii	"\"fld\0"
.balign 4
Lt_0242:	.ascii	" %1;\"\0"
.balign 4
Lt_0246:	.ascii	"\"fistp\0"
.balign 4
Lt_0247:	.ascii	" %0;\"\0"
.balign 4
Lt_024B:	.ascii	":\"=m\" (result)\0"
.balign 4
Lt_024D:	.ascii	":\"m\" (value)\0"
.balign 4
Lt_024F:	.ascii	");\0"
.balign 4
Lt_0251:	.ascii	"return result;\0"
.balign 4
Lt_0253:	.ascii	"}\0"
.balign 4
Lt_025B:	.ascii	"nearbyintf\0"
.balign 4
Lt_025C:	.ascii	"nearbyint\0"
.balign 4
Lt_025D:	.ascii	"#define fb_\0"
.balign 4
Lt_025E:	.ascii	"( value ) ((\0"
.balign 4
Lt_025F:	.ascii	")__builtin_\0"
.balign 4
Lt_0260:	.ascii	"( value ))\0"
.balign 4
Lt_0270:	.ascii	"\t\"\0"
.balign 4
Lt_0271:	.ascii	"\\t.ascii \0"
.balign 4
Lt_0272:	.ascii	"\\\" -export:\\\\\\\"\0"
.balign 4
Lt_0273:	.ascii	"\\\\\\\"\\\"\0"
.balign 4
Lt_0274:	.ascii	"\\n\0"
.balign 4
Lt_0275:	.ascii	"\"\n\0"
.balign 4
Lt_027E:	.ascii	"// Compilation of \0"
.balign 4
Lt_027F:	.ascii	" started at \0"
.balign 4
Lt_0280:	.ascii	" on \0"
.balign 4
Lt_0288:	.ascii	"typedef   signed char       int8;\0"
.balign 4
Lt_028A:	.ascii	"typedef unsigned char      uint8;\0"
.balign 4
Lt_028C:	.ascii	"typedef   signed short      int16;\0"
.balign 4
Lt_028E:	.ascii	"typedef unsigned short     uint16;\0"
.balign 4
Lt_0290:	.ascii	"typedef   signed int        int32;\0"
.balign 4
Lt_0292:	.ascii	"typedef unsigned int       uint32;\0"
.balign 4
Lt_0294:	.ascii	"typedef   signed long long  int64;\0"
.balign 4
Lt_0296:	.ascii	"typedef unsigned long long uint64;\0"
.balign 4
Lt_029A:	.ascii	"typedef struct { char *data; int64 len; int64 size; } FBSTRING;\0"
.balign 4
Lt_029C:	.ascii	"typedef struct { char *data; int32 len; int32 size; } FBSTRING;\0"
.balign 4
Lt_02A2:	.ascii	"F2I\0"
.balign 4
Lt_02A6:	.ascii	"F2L\0"
.balign 4
Lt_02AA:	.ascii	"D2I\0"
.balign 4
Lt_02AE:	.ascii	"D2L\0"
.balign 4
Lt_02B4:	.ascii	"\n__asm__( \n\t\".section .drectve\\n\"\n\0"
.balign 4
Lt_02B8:	.ascii	"\n// Total compilation time: \0"
.balign 4
Lt_02B9:	.ascii	" seconds.\0"
.balign 4
Lt_02C9:	.ascii	"_GETOPTIONVALUE\0"
.balign 4
Lt_0300:	.ascii	"*\0"
.balign 4
Lt_03BA:	.ascii	"u\0"
.balign 4
Lt_03BB:	.ascii	"ll\0"
.balign 4
Lt_03C2:	.ascii	"ull\0"
.balign 4
Lt_03CD:	.ascii	"(-__builtin_inf())\0"
.balign 4
Lt_03CE:	.ascii	"__builtin_inf()\0"
.balign 4
Lt_03D1:	.ascii	"(-__builtin_inff())\0"
.balign 4
Lt_03D2:	.ascii	"__builtin_inff()\0"
.balign 4
Lt_03DA:	.ascii	"(-__builtin_nan( \"\" ))\0"
.balign 4
Lt_03DB:	.ascii	"__builtin_nan( \"\" )\0"
.balign 4
Lt_03DE:	.ascii	"(-__builtin_nanf( \"\" ))\0"
.balign 4
Lt_03DF:	.ascii	"__builtin_nanf( \"\" )\0"
.balign 4
Lt_03E3:	.ascii	"f\0"
.balign 4
Lt_03EE:	.ascii	"\\x\0"
.balign 4
Lt_03F3:	.ascii	"\" \"\0"
.balign 4
Lt_03F6:	.ascii	"?\0"
.balign 4
Lt_03FE:	.ascii	"'\0"
.balign 4
Lt_03FF:	.ascii	"(\0"
.balign 4
Lt_0403:	.ascii	"-\0"
.balign 4
Lt_0412:	.ascii	"L\"\0"
.balign 4
Lt_041F:	.ascii	"\" L\"\0"
.balign 4
Lt_043A:	.ascii	" + \0"
.balign 4
Lt_043C:	.ascii	" - \0"
.balign 4
Lt_043E:	.ascii	" * \0"
.balign 4
Lt_0440:	.ascii	" / \0"
.balign 4
Lt_0443:	.ascii	" % \0"
.balign 4
Lt_0445:	.ascii	" << \0"
.balign 4
Lt_0447:	.ascii	" >> \0"
.balign 4
Lt_0449:	.ascii	" & \0"
.balign 4
Lt_044B:	.ascii	" | \0"
.balign 4
Lt_044D:	.ascii	" ^ \0"
.balign 4
Lt_044F:	.ascii	" == \0"
.balign 4
Lt_0451:	.ascii	" > \0"
.balign 4
Lt_0453:	.ascii	" < \0"
.balign 4
Lt_0455:	.ascii	" != \0"
.balign 4
Lt_0457:	.ascii	" >= \0"
.balign 4
Lt_0459:	.ascii	" <= \0"
.balign 4
Lt_0460:	.ascii	"&\0"
.balign 4
Lt_0467:	.ascii	"~\0"
.balign 4
Lt_0470:	.ascii	"__builtin_fabsf\0"
.balign 4
Lt_0472:	.ascii	"__builtin_fabs\0"
.balign 4
Lt_0474:	.ascii	"__builtin_llabs\0"
.balign 4
Lt_0476:	.ascii	"__builtin_abs\0"
.balign 4
Lt_047F:	.ascii	"__builtin_sinf\0"
.balign 4
Lt_0481:	.ascii	"__builtin_asinf\0"
.balign 4
Lt_0483:	.ascii	"__builtin_cosf\0"
.balign 4
Lt_0485:	.ascii	"__builtin_acosf\0"
.balign 4
Lt_0487:	.ascii	"__builtin_tanf\0"
.balign 4
Lt_0489:	.ascii	"__builtin_atanf\0"
.balign 4
Lt_048B:	.ascii	"__builtin_sqrtf\0"
.balign 4
Lt_048D:	.ascii	"__builtin_logf\0"
.balign 4
Lt_048F:	.ascii	"__builtin_expf\0"
.balign 4
Lt_0491:	.ascii	"__builtin_floorf\0"
.balign 4
Lt_0498:	.ascii	"__builtin_sin\0"
.balign 4
Lt_049A:	.ascii	"__builtin_asin\0"
.balign 4
Lt_049C:	.ascii	"__builtin_cos\0"
.balign 4
Lt_049E:	.ascii	"__builtin_acos\0"
.balign 4
Lt_04A0:	.ascii	"__builtin_tan\0"
.balign 4
Lt_04A2:	.ascii	"__builtin_atan\0"
.balign 4
Lt_04A4:	.ascii	"__builtin_sqrt\0"
.balign 4
Lt_04A6:	.ascii	"__builtin_log\0"
.balign 4
Lt_04A8:	.ascii	"__builtin_exp\0"
.balign 4
Lt_04AA:	.ascii	"__builtin_floor\0"
.balign 4
Lt_04C2:	.ascii	"&&\0"
.balign 4
Lt_04DA:	.ascii	"__builtin_atan2f\0"
.balign 4
Lt_04DB:	.ascii	"__builtin_atan2\0"
.balign 4
Lt_051F:	.ascii	"vr$\0"
.balign 4
Lt_0529:	.ascii	":;\0"
.balign 4
Lt_053D:	.ascii	"if( \0"
.balign 4
Lt_053E:	.ascii	" ) goto \0"
.balign 4
Lt_0563:	.ascii	"fb_F2I\0"
.balign 4
Lt_0564:	.ascii	"fb_D2I\0"
.balign 4
Lt_0567:	.ascii	"fb_F2L\0"
.balign 4
Lt_0568:	.ascii	"fb_D2L\0"
.balign 4
Lt_0571:	.ascii	"return \0"
.balign 4
Lt_059B:	.ascii	"goto *\0"
.balign 4
Lt_05A1:	.ascii	"goto \0"
.balign 4
Lt_05AC:	.ascii	"(void)\0"
.balign 4
Lt_05B0:	.ascii	"static const void* \0"
.balign 4
Lt_05B1:	.ascii	"] = {\0"
.balign 4
Lt_05BE:	.ascii	",\0"
.balign 4
Lt_05D9:	.ascii	"__builtin_memset( \0"
.balign 4
Lt_05DA:	.ascii	", 0, \0"
.balign 4
Lt_05E2:	.ascii	"__builtin_memcpy( \0"
.balign 4
Lt_05FC:	.ascii	"not_an_escape\0"
.balign 4
Lt_05FD:	.ascii	"// \0"
.balign 4
Lt_0602:	.ascii	"__asm__\0"
.balign 4
Lt_0605:	.ascii	" __volatile__\0"
.balign 4
Lt_060A:	.ascii	"\\t\0"
.balign 4
Lt_0614:	.ascii	"%\0"
.balign 4
Lt_0617:	.ascii	"\"=m\" (\0"
.balign 4
Lt_0618:	.ascii	"\"m\" (\0"
.balign 4
Lt_0621:	.ascii	" : \0"
.balign 4
Lt_0622:	.ascii	" : \"cc\", \"memory\"\0"
.balign 4
Lt_0623:	.ascii	", \"eax\", \"ebx\", \"ecx\", \"edx\", \"esp\", \"edi\", \"esi\"\0"
.balign 4
Lt_0626:	.ascii	", \"mm0\", \"mm1\", \"mm2\", \"mm3\", \"mm4\", \"mm5\", \"mm6\", \"mm7\"\0"
.balign 4
Lt_0627:	.ascii	", \"xmm0\", \"xmm1\", \"xmm2\", \"xmm3\", \"xmm4\", \"xmm5\", \"xmm6\", \"xmm7\"\0"
.balign 4
Lt_063C:	.ascii	"{ \0"
.balign 4
Lt_0646:	.ascii	"L'\0"
.balign 4
Lt_0649:	.ascii	" }\0"
.balign 4
Lt_0655:	.ascii	"static const char \0"
.balign 4
Lt_0659:	.ascii	"__attribute__((used, section(\".fbctinf\"))) \0"
.balign 4
Lt_065A:	.ascii	"__fbctinf[] = \"\0"
.balign 4
Lt_065D:	.ascii	"\\0\0"
.balign 4
Lt_0664:	.ascii	"\";\0"
.balign 4
Lt_066E:	.ascii	"__asm__( \".globl \0"
.balign 4
Lt_066F:	.ascii	"\" );\0"
.balign 4
Lt_0673:	.ascii	"__asm__( \"\0"
.balign 4
Lt_0674:	.ascii	":\" );\0"
.balign 4
Lt_0684:	.ascii	"__asm__( \".size \0"
.balign 4
Lt_0685:	.ascii	", .-\0"

.section .ctors, "aw", @progbits
.int fb_ctor__irzhlc
.int _GLOBAL__I

.section .dtors, "aw", @progbits
.int _GLOBAL__D
