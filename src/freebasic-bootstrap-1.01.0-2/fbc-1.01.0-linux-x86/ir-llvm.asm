	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/ir-llvm.bas' compilation started at 14:16:35 (FreeBASIC 1.01.0)

.section .text
.balign 16
fb_ctor__irzllvm:
.type fb_ctor__irzllvm, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__irzllvm, .-fb_ctor__irzllvm
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
_ZN13IRLLVMCONTEXTC1Ev:
.type _ZN13IRLLVMCONTEXTC1Ev, @function
push ebp
mov ebp, esp
push ebx
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 0
mov eax, dword ptr [ebp+8]
add eax, 4
lea ebx, [eax]
push edi
mov edi, ebx
xor eax, eax
mov ecx, 8
rep stosd
pop edi
mov ebx, dword ptr [ebp+8]
add ebx, 36
mov dword ptr [ebx], 0
mov ebx, dword ptr [ebp+8]
add ebx, 40
mov dword ptr [ebx], 0
mov dword ptr [ebx+4], 0
mov dword ptr [ebx+8], 0
mov ebx, dword ptr [ebp+8]
add ebx, 52
mov dword ptr [ebx], 0
mov ebx, dword ptr [ebp+8]
add ebx, 56
mov dword ptr [ebx], 0
mov dword ptr [ebx+4], 0
mov dword ptr [ebx+8], 0
mov ebx, dword ptr [ebp+8]
add ebx, 68
mov dword ptr [ebx], 0
mov dword ptr [ebx+4], 0
mov dword ptr [ebx+8], 0
mov ebx, dword ptr [ebp+8]
add ebx, 80
mov dword ptr [ebx], 0
mov ebx, dword ptr [ebp+8]
add ebx, 84
mov dword ptr [ebx], 0
mov ebx, dword ptr [ebp+8]
add ebx, 88
mov dword ptr [ebx], 0
mov dword ptr [ebx+4], 0
mov dword ptr [ebx+8], 0
mov ebx, dword ptr [ebp+8]
add ebx, 100
mov dword ptr [ebx], 0
mov ebx, dword ptr [ebp+8]
add ebx, 104
mov dword ptr [ebx], 0
mov dword ptr [ebx+4], 0
mov dword ptr [ebx+8], 0
mov ebx, dword ptr [ebp+8]
add ebx, 116
mov dword ptr [ebx], 0
mov ebx, dword ptr [ebp+8]
add ebx, 120
mov dword ptr [ebx], 0
mov dword ptr [ebx+4], 0
mov dword ptr [ebx+8], 0
mov ebx, dword ptr [ebp+8]
add ebx, 132
mov dword ptr [ebx], 0
mov dword ptr [ebx+4], 0
mov dword ptr [ebx+8], 0
mov ebx, dword ptr [ebp+8]
add ebx, 144
mov dword ptr [ebx], 0
mov dword ptr [ebx+4], 0
mov dword ptr [ebx+8], 0
.Lt_0074:
.Lt_0075:
pop ebx
mov esp, ebp
pop ebp
ret
.size _ZN13IRLLVMCONTEXTC1Ev, .-_ZN13IRLLVMCONTEXTC1Ev
.balign 16
_ZN13IRLLVMCONTEXTaSERKS_:
.type _ZN13IRLLVMCONTEXTaSERKS_, @function
push ebp
mov ebp, esp
push ebx
.Lt_0076:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [eax]
mov dword ptr [ebx], ecx
mov ecx, dword ptr [ebp+8]
add ecx, 4
lea ebx, [ecx]
mov ecx, dword ptr [ebp+12]
add ecx, 4
lea eax, [ecx]
push edi
push esi
mov edi, ebx
mov esi, eax
mov ecx, 8
rep movsd
pop esi
pop edi
mov eax, dword ptr [ebp+12]
add eax, 36
mov ebx, dword ptr [ebp+8]
add ebx, 36
mov ecx, dword ptr [eax]
mov dword ptr [ebx], ecx
push 0
push -1
mov ecx, dword ptr [ebp+12]
add ecx, 40
lea ebx, [ecx]
push ebx
push -1
mov ebx, dword ptr [ebp+8]
add ebx, 40
lea ecx, [ebx]
push ecx
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ebp+12]
add eax, 52
mov ecx, dword ptr [ebp+8]
add ecx, 52
mov ebx, dword ptr [eax]
mov dword ptr [ecx], ebx
push 0
push -1
mov ebx, dword ptr [ebp+12]
add ebx, 56
lea ecx, [ebx]
push ecx
push -1
mov ecx, dword ptr [ebp+8]
add ecx, 56
lea ebx, [ecx]
push ebx
call fb_StrAssign
add esp, 20
push 0
push -1
mov eax, dword ptr [ebp+12]
add eax, 68
lea ebx, [eax]
push ebx
push -1
mov ebx, dword ptr [ebp+8]
add ebx, 68
lea eax, [ebx]
push eax
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ebp+12]
add eax, 80
mov ebx, dword ptr [ebp+8]
add ebx, 80
mov ecx, dword ptr [eax]
mov dword ptr [ebx], ecx
mov ecx, dword ptr [ebp+12]
add ecx, 84
mov ebx, dword ptr [ebp+8]
add ebx, 84
mov eax, dword ptr [ecx]
mov dword ptr [ebx], eax
push 0
push -1
mov eax, dword ptr [ebp+12]
add eax, 88
lea ebx, [eax]
push ebx
push -1
mov ebx, dword ptr [ebp+8]
add ebx, 88
lea eax, [ebx]
push eax
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ebp+12]
add eax, 100
mov ebx, dword ptr [ebp+8]
add ebx, 100
mov ecx, dword ptr [eax]
mov dword ptr [ebx], ecx
push 0
push -1
mov ecx, dword ptr [ebp+12]
add ecx, 104
lea ebx, [ecx]
push ebx
push -1
mov ebx, dword ptr [ebp+8]
add ebx, 104
lea ecx, [ebx]
push ecx
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ebp+12]
add eax, 116
mov ecx, dword ptr [ebp+8]
add ecx, 116
mov ebx, dword ptr [eax]
mov dword ptr [ecx], ebx
push 0
push -1
mov ebx, dword ptr [ebp+12]
add ebx, 120
lea ecx, [ebx]
push ecx
push -1
mov ecx, dword ptr [ebp+8]
add ecx, 120
lea ebx, [ecx]
push ebx
call fb_StrAssign
add esp, 20
push 0
push -1
mov eax, dword ptr [ebp+12]
add eax, 132
lea ebx, [eax]
push ebx
push -1
mov ebx, dword ptr [ebp+8]
add ebx, 132
lea eax, [ebx]
push eax
call fb_StrAssign
add esp, 20
push 0
push -1
mov eax, dword ptr [ebp+12]
add eax, 144
lea ebx, [eax]
push ebx
push -1
mov ebx, dword ptr [ebp+8]
add ebx, 144
lea eax, [ebx]
push eax
call fb_StrAssign
add esp, 20
.Lt_0077:
pop ebx
mov esp, ebp
pop ebp
ret
.size _ZN13IRLLVMCONTEXTaSERKS_, .-_ZN13IRLLVMCONTEXTaSERKS_
.balign 16
_ZN13IRLLVMCONTEXTD1Ev:
.type _ZN13IRLLVMCONTEXTD1Ev, @function
push ebp
mov ebp, esp
push ebx
.Lt_007A:
.Lt_007B:
mov eax, dword ptr [ebp+8]
add eax, 144
lea ebx, [eax]
push ebx
call fb_StrDelete
add esp, 4
mov ebx, dword ptr [ebp+8]
add ebx, 132
lea eax, [ebx]
push eax
call fb_StrDelete
add esp, 4
mov eax, dword ptr [ebp+8]
add eax, 120
lea ebx, [eax]
push ebx
call fb_StrDelete
add esp, 4
mov ebx, dword ptr [ebp+8]
add ebx, 104
lea eax, [ebx]
push eax
call fb_StrDelete
add esp, 4
mov eax, dword ptr [ebp+8]
add eax, 88
lea ebx, [eax]
push ebx
call fb_StrDelete
add esp, 4
mov ebx, dword ptr [ebp+8]
add ebx, 68
lea eax, [ebx]
push eax
call fb_StrDelete
add esp, 4
mov eax, dword ptr [ebp+8]
add eax, 56
lea ebx, [eax]
push ebx
call fb_StrDelete
add esp, 4
mov ebx, dword ptr [ebp+8]
add ebx, 40
lea eax, [ebx]
push eax
call fb_StrDelete
add esp, 4
pop ebx
mov esp, ebp
pop ebp
ret
.size _ZN13IRLLVMCONTEXTD1Ev, .-_ZN13IRLLVMCONTEXTD1Ev
.balign 16
_INIT:
.type _INIT, @function
push ebx
.Lt_0084:
call IRHLINIT
push 6
push 8
push 32
lea eax, [CTX+4]
push eax
call LISTINIT
add esp, 16
mov eax, dword ptr [IR+284]
or eax, 131586
mov ebx, eax
mov dword ptr [IR+284], ebx
call FBIS64BIT
test eax, eax
je .Lt_0087
mov eax, dword ptr [DTYPENAME+48]
mov dword ptr [DTYPENAME+28], eax
mov eax, dword ptr [DTYPENAME+52]
mov dword ptr [DTYPENAME+32], eax
jmp .Lt_0086
.Lt_0087:
mov eax, dword ptr [DTYPENAME+40]
mov dword ptr [DTYPENAME+28], eax
mov eax, dword ptr [DTYPENAME+44]
mov dword ptr [DTYPENAME+32], eax
.Lt_0086:
.Lt_0085:
pop ebx
ret
.size _INIT, .-_INIT
.balign 16
_END:
.type _END, @function
.Lt_0088:
lea eax, [CTX+4]
push eax
call LISTEND
add esp, 4
call IRHLEND
.Lt_0089:
ret
.size _END, .-_END
.balign 16
HWRITELINE:
.type HWRITELINE, @function
push ebp
mov ebp, esp
sub esp, 28
.Lt_008A:
cmp dword ptr [CTX], 0
jle .Lt_008D
push 0
push -1
push -1
push dword ptr [ebp+8]
push -1
push 1
push offset Lt_008E
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push dword ptr [CTX]
call fb_StrFill2
add esp, 8
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
push dword ptr [ebp+8]
call fb_StrAssign
add esp, 20
.Lt_008D:
.Lt_008C:
push 0
push -1
push 2
push offset Lt_0090
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
mov eax, dword ptr [CTX+116]
mov dword ptr [ebp-16], eax
jmp .Lt_0093
.Lt_0095:
push 0
push -1
push -1
push dword ptr [ebp+8]
push -1
lea eax, [CTX+120]
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
lea eax, [CTX+120]
push eax
call fb_StrAssign
add esp, 20
jmp .Lt_0092
.Lt_0097:
push 0
push -1
push -1
push dword ptr [ebp+8]
push -1
lea eax, [CTX+132]
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
lea eax, [CTX+132]
push eax
call fb_StrAssign
add esp, 20
jmp .Lt_0092
.Lt_0099:
push 0
push -1
push -1
push dword ptr [ebp+8]
push -1
lea eax, [CTX+144]
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
lea eax, [CTX+144]
push eax
call fb_StrAssign
add esp, 20
jmp .Lt_0092
.Lt_0093:
cmp dword ptr [ebp-16], 2
ja .Lt_0092
mov eax, dword ptr [ebp-16]
jmp dword ptr [.LT_009B+eax*4]
.LT_009B:
.int .Lt_0095
.int .Lt_0097
.int .Lt_0099
.Lt_0092:
.Lt_008B:
mov esp, ebp
pop ebp
ret
.size HWRITELINE, .-HWRITELINE
.balign 16
HWRITELABEL:
.type HWRITELABEL, @function
push ebp
mov ebp, esp
sub esp, 24
.Lt_009C:
dec dword ptr [CTX]
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
push 0
push -1
push 2
push offset Lt_009E
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
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-24]
push eax
call HWRITELINE
add esp, 4
lea eax, [ebp-24]
push eax
call fb_StrDelete
add esp, 4
inc dword ptr [CTX]
.Lt_009D:
mov esp, ebp
pop ebp
ret
.size HWRITELABEL, .-HWRITELABEL
.balign 16
HEMITPARAMNAME:
.type HEMITPARAMNAME, @function
push ebp
mov ebp, esp
sub esp, 24
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_00A1:
push 0
push -1
push 2
push offset Lt_00A3
push 0
push dword ptr [ebp+8]
call SYMBGETMANGLEDNAME
add esp, 4
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
.Lt_00A2:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
mov esp, ebp
pop ebp
ret
.size HEMITPARAMNAME, .-HEMITPARAMNAME
.balign 16
HEMITPROCCALLCONV:
.type HEMITPROCCALLCONV, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_00A5:
call FBGETCPUFAMILY
test eax, eax
je .Lt_00A8
jmp .Lt_00A6
.Lt_00A8:
.Lt_00A7:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+80]
mov dword ptr [ebp-16], ebx
jmp .Lt_00AA
.Lt_00AC:
push 0
push 15
push offset Lt_00AD
push -1
lea ebx, [ebp-12]
push ebx
call fb_StrAssign
add esp, 20
jmp .Lt_00A9
.Lt_00AA:
mov ebx, dword ptr [ebp-16]
add ebx, 4294967295
cmp ebx, 3
ja .Lt_00A9
mov ebx, dword ptr [ebp-16]
jmp dword ptr [.LT_00AE+ebx*4-4]
.LT_00AE:
.int .Lt_00AC
.int .Lt_00AC
.int .Lt_00A9
.int .Lt_00AC
.Lt_00A9:
.Lt_00A6:
lea ebx, [ebp-12]
push ebx
call fb_StrAllocTempResult
add esp, 4
pop ebx
mov esp, ebp
pop ebp
ret
.size HEMITPROCCALLCONV, .-HEMITPROCCALLCONV
.balign 16
HEMITPROCHEADER:
.type HEMITPROCHEADER, @function
push ebp
mov ebp, esp
sub esp, 96
push ebx
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_00AF:
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
push 0
push -1
push dword ptr [ebp+8]
call HEMITPROCCALLCONV
add esp, 4
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
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
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
lea eax, [ebp-44]
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
push 2
push offset Lt_00B2
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push 0
push dword ptr [ebp+8]
call SYMBGETMANGLEDNAME
add esp, 4
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
push 0
push 3
push offset Lt_00B4
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
je .Lt_00B6
cmp dword ptr [ebp+12], 0
je .Lt_00B8
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
jmp .Lt_00B7
.Lt_00B8:
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
push 2
push offset Lt_00B2
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push dword ptr [ebp-60]
call HEMITPARAMNAME
add esp, 4
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_00B7:
mov eax, dword ptr [ebp+8]
movsx ebx, word ptr [eax+64]
test ebx, ebx
jle .Lt_00BC
push 0
push 3
push offset Lt_00BD
push -1
lea ebx, [ebp-24]
push ebx
call fb_StrConcatAssign
add esp, 20
.Lt_00BC:
.Lt_00BB:
.Lt_00B6:
.Lt_00B5:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+80], 4
jne .Lt_00BE
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+76]
mov dword ptr [ebp-64], ebx
jmp .Lt_0470
.Lt_00BE:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+72]
mov dword ptr [ebp-64], eax
.Lt_0470:
mov eax, dword ptr [ebp-64]
mov dword ptr [ebp-68], eax
.Lt_00C0:
cmp dword ptr [ebp-68], 0
je .Lt_00C1
mov eax, dword ptr [ebp-68]
cmp dword ptr [eax+52], 4
jne .Lt_00C3
push 0
push 4
push offset Lt_00C4
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_00C2
.Lt_00C3:
lea eax, [ebp-32]
push eax
lea eax, [ebp-28]
push eax
push dword ptr [ebp-68]
call _Z21SYMBGETREALPARAMDTYPEP8FBSYMBOLRiRS0_
add esp, 12
push 0
push -1
push dword ptr [ebp-32]
push dword ptr [ebp-28]
call HEMITTYPE
add esp, 8
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
cmp dword ptr [ebp+12], 0
jne .Lt_00C6
push 0
push -1
push -1
push -1
mov eax, dword ptr [ebp-68]
push dword ptr [eax+56]
call HEMITPARAMNAME
add esp, 4
push eax
push 2
push offset Lt_00B2
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
.Lt_00C6:
.Lt_00C5:
.Lt_00C2:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+80], 4
jne .Lt_00C9
mov eax, dword ptr [ebp-68]
mov ebx, dword ptr [eax+156]
mov dword ptr [ebp-72], ebx
jmp .Lt_0471
.Lt_00C9:
mov ebx, dword ptr [ebp-68]
mov eax, dword ptr [ebx+160]
mov dword ptr [ebp-72], eax
.Lt_0471:
mov eax, dword ptr [ebp-72]
mov dword ptr [ebp-68], eax
cmp dword ptr [ebp-68], 0
je .Lt_00CC
push 0
push 3
push offset Lt_00BD
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_00CC:
.Lt_00CB:
jmp .Lt_00C0
.Lt_00C1:
push 0
push 3
push offset Lt_00CD
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 10
push offset Lt_00CE
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 268435456
je .Lt_00D0
push 0
push 7
push offset Lt_00D1
push -1
lea ebx, [ebp-24]
push ebx
call fb_StrConcatAssign
add esp, 20
.Lt_00D0:
.Lt_00CF:
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
.Lt_00B0:
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
HGETUDTNAME:
.type HGETUDTNAME, @function
push ebp
mov ebp, esp
sub esp, 40
push ebx
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_00D2:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+128]
mov eax, dword ptr [ebx]
mov dword ptr [ebp-16], eax
push 0
push 2
push offset Lt_00D4
push -1
lea eax, [ebp-28]
push eax
call fb_StrInit
add esp, 20
.Lt_00D5:
lea eax, [SYMB+98352]
cmp dword ptr [ebp-16], eax
je .Lt_00D6
push 0
push -1
push 0
mov eax, dword ptr [ebp-16]
push dword ptr [eax+12]
push -1
lea eax, [ebp-28]
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
lea eax, [ebp-28]
push eax
call fb_StrAssign
add esp, 20
push 0
push 2
push offset Lt_0007
push -1
lea eax, [ebp-28]
push eax
call fb_StrConcatAssign
add esp, 20
mov eax, dword ptr [ebp-16]
mov ebx, dword ptr [eax+128]
mov eax, dword ptr [ebx]
mov dword ptr [ebp-16], eax
jmp .Lt_00D5
.Lt_00D6:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+16], 0
je .Lt_00D9
push 0
push -1
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax+16]
push -1
lea eax, [ebp-28]
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
lea eax, [ebp-28]
push eax
call fb_StrAssign
add esp, 20
jmp .Lt_00D8
.Lt_00D9:
push 0
push -1
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax+12]
push -1
lea eax, [ebp-28]
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
lea eax, [ebp-28]
push eax
call fb_StrAssign
add esp, 20
.Lt_00D8:
push 0
push -1
lea eax, [ebp-28]
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-28]
push eax
call fb_StrDelete
add esp, 4
.Lt_00D3:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
pop ebx
mov esp, ebp
pop ebp
ret
.size HGETUDTNAME, .-HGETUDTNAME
.balign 16
HEMITUDT:
.type HEMITUDT, @function
push ebp
mov ebp, esp
sub esp, 44
push ebx
.Lt_00DC:
cmp dword ptr [ebp+8], 0
jne .Lt_00DF
jmp .Lt_00DD
.Lt_00DF:
.Lt_00DE:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+8]
and ebx, 67108864
test ebx, ebx
je .Lt_00E1
jmp .Lt_00DD
.Lt_00E1:
.Lt_00E0:
mov ebx, dword ptr [CTX+116]
mov dword ptr [ebp-4], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 128
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_00E3
mov dword ptr [CTX+116], 0
.Lt_00E3:
.Lt_00E2:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-8], ebx
jmp .Lt_00E5
.Lt_00E7:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+8]
or eax, 67108864
mov ebx, eax
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+8], ebx
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
push 0
push -1
push -1
push 0
push 9
call HEMITTYPE
add esp, 8
push eax
push -1
push 9
push offset Lt_00E8
push -1
push dword ptr [ebp+8]
call HGETUDTNAME
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
add esp, 4
lea eax, [ebp-44]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_00E4
.Lt_00EC:
push dword ptr [ebp+8]
call HEMITSTRUCT
add esp, 4
jmp .Lt_00E4
.Lt_00ED:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+8]
and ebx, 16384
test ebx, ebx
je .Lt_00EF
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
push 0
push -1
push 2
push offset Lt_00F1
push -1
push -1
push -1
push dword ptr [ebp+8]
call HEMITPROCHEADER
add esp, 8
push eax
push 9
push offset Lt_00F0
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
add esp, 4
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
.Lt_00EF:
.Lt_00EE:
jmp .Lt_00E4
.Lt_00E5:
mov eax, dword ptr [ebp-8]
add eax, 4294967293
cmp eax, 7
ja .Lt_00E4
mov eax, dword ptr [ebp-8]
jmp dword ptr [.LT_00F5+eax*4-12]
.LT_00F5:
.int .Lt_00ED
.int .Lt_00E4
.int .Lt_00E4
.int .Lt_00E4
.int .Lt_00E4
.int .Lt_00E4
.int .Lt_00E7
.int .Lt_00EC
.Lt_00E4:
mov eax, dword ptr [ebp-4]
mov dword ptr [CTX+116], eax
.Lt_00DD:
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
sub esp, 76
push ebx
push esi
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_00F6:
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-32], ebx
cmp dword ptr [ebp-32], 1
je .Lt_00FB
.Lt_00FC:
cmp dword ptr [ebp-32], 12
jne .Lt_00FA
.Lt_00FB:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 65540
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_00FE
mov dword ptr [ebp-36], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
dec ebx
mov dword ptr [ebp-40], ebx
jmp .Lt_0100
.Lt_0103:
push 0
push -1
push -1
push 2
push offset Lt_0105
push -1
push -1
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp-36]
sal eax, 4
mov ecx, dword ptr [ebx+60]
add ecx, eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-36]
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
push offset Lt_0104
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
lea eax, [ebp-24]
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
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
.Lt_0101:
inc dword ptr [ebp-36]
.Lt_0100:
mov eax, dword ptr [ebp-40]
cmp dword ptr [ebp-36], eax
jle .Lt_0103
.Lt_0102:
.Lt_00FE:
.Lt_00FD:
.Lt_00FA:
.Lt_00F8:
mov dword ptr [ebp-28], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+24]
and ebx, 511
mov dword ptr [ebp-32], ebx
cmp dword ptr [ebp-32], 17
je .Lt_010C
.Lt_010D:
cmp dword ptr [ebp-32], 3
jne .Lt_010B
.Lt_010C:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+36]
mov dword ptr [ebp-28], eax
jmp .Lt_0109
.Lt_010B:
cmp dword ptr [ebp-32], 6
jne .Lt_010E
.Lt_010F:
mov ebx, dword ptr [SYMB_DTYPETB+172]
mov eax, ebx
sar eax, 31
push eax
push ebx
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+40]
push dword ptr [ebx+36]
call __divdi3
add esp, 16
mov ebx, eax
mov dword ptr [ebp-28], ebx
.Lt_010E:
.Lt_0109:
cmp dword ptr [ebp-28], 0
jle .Lt_0111
push 0
push 2
push offset Lt_0104
push -1
lea ebx, [ebp-24]
push ebx
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push dword ptr [ebp-28]
call fb_IntToStr
add esp, 4
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 2
push offset Lt_0105
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_0111:
.Lt_0110:
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
.Lt_00F7:
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
HBUILDSTRLIT:
.type HBUILDSTRLIT, @function
push ebp
mov ebp, esp
sub esp, 36
push ebx
.Lt_0112:
mov eax, dword ptr [ebp+12]
cmp dword ptr [ebp+20], eax
jle .Lt_0115
mov eax, dword ptr [ebp+12]
mov dword ptr [ebp+20], eax
.Lt_0115:
.Lt_0114:
mov dword ptr [ebp-8], 0
mov eax, dword ptr [ebp+20]
dec eax
mov dword ptr [ebp-12], eax
jmp .Lt_0117
.Lt_011A:
mov eax, dword ptr [ebp+16]
add eax, dword ptr [ebp-8]
movzx ebx, byte ptr [eax]
mov dword ptr [ebp-4], ebx
push 34
push dword ptr [ebp-4]
call HCHARNEEDSESCAPING
add esp, 8
test eax, eax
je .Lt_011D
push 0
push -1
push -1
push -1
push 2
push dword ptr [ebp-4]
call fb_HEXEx_i
add esp, 8
push eax
push 2
push offset Lt_011E
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
jmp .Lt_011C
.Lt_011D:
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
.Lt_011C:
.Lt_0118:
inc dword ptr [ebp-8]
.Lt_0117:
mov eax, dword ptr [ebp-12]
cmp dword ptr [ebp-8], eax
jle .Lt_011A
.Lt_0119:
.Lt_0122:
mov eax, dword ptr [ebp+12]
cmp dword ptr [ebp+20], eax
jge .Lt_0123
push 0
push -1
push 4
push offset Lt_0124
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
inc dword ptr [ebp+20]
jmp .Lt_0122
.Lt_0123:
.Lt_0113:
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
sub esp, 64
push ebx
.Lt_0126:
mov eax, dword ptr [SYMB_DTYPETB+172]
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp+12]
cmp dword ptr [ebp+20], eax
jle .Lt_0129
mov eax, dword ptr [ebp+12]
mov dword ptr [ebp+20], eax
.Lt_0129:
.Lt_0128:
mov dword ptr [ebp-12], 0
mov eax, dword ptr [ebp+20]
dec eax
mov dword ptr [ebp-16], eax
jmp .Lt_012B
.Lt_012E:
mov eax, dword ptr [ebp-12]
sal eax, 2
mov ebx, dword ptr [ebp+16]
add ebx, eax
mov eax, dword ptr [ebx]
mov dword ptr [ebp-4], eax
push 34
push dword ptr [ebp-4]
call HCHARNEEDSESCAPING
add esp, 8
test eax, eax
je .Lt_0130
cmp dword ptr [ebp-8], 1
jb .Lt_0132
push 0
push -1
push -1
push -1
push 2
mov eax, dword ptr [ebp-4]
and eax, 255
mov ebx, eax
push ebx
call fb_HEXEx_i
add esp, 8
push eax
push 2
push offset Lt_011E
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
.Lt_0132:
.Lt_0131:
cmp dword ptr [ebp-8], 2
jb .Lt_0136
push 0
push -1
push -1
push -1
push 2
mov eax, dword ptr [ebp-4]
shr eax, 8
and eax, 255
mov ebx, eax
push ebx
call fb_HEXEx_i
add esp, 8
push eax
push 2
push offset Lt_011E
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
.Lt_0136:
.Lt_0135:
cmp dword ptr [ebp-8], 4
jb .Lt_013A
push 0
push -1
push -1
push -1
push 2
mov eax, dword ptr [ebp-4]
shr eax, 16
and eax, 255
mov ebx, eax
push ebx
call fb_HEXEx_i
add esp, 8
push eax
push 2
push offset Lt_011E
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
push 0
push -1
push -1
push -1
push 2
mov eax, dword ptr [ebp-4]
shr eax, 24
and eax, 255
mov ebx, eax
push ebx
call fb_HEXEx_i
add esp, 8
push eax
push 2
push offset Lt_011E
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
.Lt_013A:
.Lt_0139:
jmp .Lt_012F
.Lt_0130:
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
mov dword ptr [ebp-32], 2
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-36], eax
jmp .Lt_0141
.Lt_0144:
push 0
push -1
push 4
push offset Lt_0124
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
.Lt_0142:
inc dword ptr [ebp-32]
.Lt_0141:
mov eax, dword ptr [ebp-36]
cmp dword ptr [ebp-32], eax
jle .Lt_0144
.Lt_0143:
.Lt_012F:
.Lt_012C:
inc dword ptr [ebp-12]
.Lt_012B:
mov eax, dword ptr [ebp-16]
cmp dword ptr [ebp-12], eax
jle .Lt_012E
.Lt_012D:
.Lt_0146:
mov eax, dword ptr [ebp+12]
cmp dword ptr [ebp+20], eax
jge .Lt_0147
mov dword ptr [ebp-12], 1
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-16], eax
jmp .Lt_0149
.Lt_014C:
push 0
push -1
push 4
push offset Lt_0124
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
.Lt_014A:
inc dword ptr [ebp-12]
.Lt_0149:
mov eax, dword ptr [ebp-16]
cmp dword ptr [ebp-12], eax
jle .Lt_014C
.Lt_014B:
inc dword ptr [ebp+20]
jmp .Lt_0146
.Lt_0147:
.Lt_0127:
pop ebx
mov esp, ebp
pop ebp
ret
.size HBUILDWSTRLIT, .-HBUILDWSTRLIT
.balign 16
HEMITSTRLITTYPE:
.type HEMITSTRLITTYPE, @function
push ebp
mov ebp, esp
sub esp, 12
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_014E:
push 0
push 2
push offset Lt_0104
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
push 0
push -1
push dword ptr [ebp+8]
call fb_IntToStr
add esp, 4
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 7
push offset Lt_0150
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_014F:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
mov esp, ebp
pop ebp
ret
.size HEMITSTRLITTYPE, .-HEMITSTRLITTYPE
.balign 16
HEMITSYMTYPE:
.type HEMITSYMTYPE, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_0151:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+24]
and ebx, 511
mov dword ptr [ebp-16], ebx
cmp dword ptr [ebp-16], 17
je .Lt_0156
.Lt_0157:
cmp dword ptr [ebp-16], 3
je .Lt_0156
.Lt_0158:
cmp dword ptr [ebp-16], 6
jne .Lt_0155
.Lt_0156:
push 0
push -1
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+36]
push eax
call HEMITSTRLITTYPE
add esp, 4
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
jmp .Lt_0153
.Lt_0155:
push 0
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+28]
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+24]
and ebx, 511
push ebx
call HEMITTYPE
add esp, 8
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
.Lt_0159:
.Lt_0153:
.Lt_0152:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
pop ebx
mov esp, ebp
pop ebp
ret
.size HEMITSYMTYPE, .-HEMITSYMTYPE
.balign 16
HEMITVARIABLE:
.type HEMITVARIABLE, @function
push ebp
mov ebp, esp
sub esp, 36
push ebx
.Lt_015A:
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 524288
test ebx, ebx
je .Lt_015D
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+8]
and eax, 2
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_015F
lea eax, [ebp-12]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_015B
.Lt_015F:
.Lt_015E:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+24]
and ebx, 511
mov dword ptr [ebp-24], ebx
cmp dword ptr [ebp-24], 3
je .Lt_0163
.Lt_0164:
cmp dword ptr [ebp-24], 6
jne .Lt_0162
.Lt_0163:
push 0
push -1
push 4
push offset Lt_0165
push 0
push dword ptr [ebp+8]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
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
call fb_StrAssign
add esp, 20
push 0
push 18
push offset Lt_0167
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push dword ptr [ebp+8]
call HEMITSYMTYPE
add esp, 4
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 4
push offset Lt_0168
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+24]
and ebx, 511
cmp ebx, 6
jne .Lt_016A
mov eax, dword ptr [SYMB_DTYPETB+172]
mov ebx, eax
sar ebx, 31
push ebx
push eax
mov eax, dword ptr [ebp+8]
push dword ptr [eax+40]
push dword ptr [eax+36]
call __divdi3
add esp, 16
mov ebx, eax
mov dword ptr [ebp-20], ebx
push dword ptr [ebp-20]
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+52]
call HUNESCAPEW
add esp, 4
push eax
push dword ptr [ebp-20]
lea eax, [ebp-12]
push eax
call HBUILDWSTRLIT
add esp, 16
jmp .Lt_0169
.Lt_016A:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+36]
mov dword ptr [ebp-20], ebx
push dword ptr [ebp-20]
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+52]
call HUNESCAPE
add esp, 4
push eax
push dword ptr [ebp-20]
lea eax, [ebp-12]
push eax
call HBUILDSTRLIT
add esp, 16
.Lt_0169:
push 0
push 2
push offset Lt_011B
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
lea eax, [ebp-12]
push eax
call HWRITELINE
add esp, 4
.Lt_0162:
.Lt_016B:
.Lt_0160:
lea eax, [ebp-12]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_015B
.Lt_015D:
.Lt_015C:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+52], 0
setne bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+8]
mov edx, dword ptr [eax+4]
and edx, 128
test edx, edx
setne dl
shr edx, 1
sbb edx, edx
test edx, edx
sete dl
shr edx, 1
sbb edx, edx
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+4]
and ecx, 2
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
or edx, ecx
and ebx, edx
je .Lt_016D
mov edx, dword ptr [ebp+8]
mov ebx, dword ptr [edx+4]
and ebx, 128
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_016F
mov ebx, dword ptr [ebp+8]
mov edx, dword ptr [ebx+8]
and edx, 2
test edx, edx
setne dl
shr edx, 1
sbb edx, edx
test edx, edx
jne .Lt_0171
mov edx, dword ptr [ebp+8]
mov ebx, dword ptr [edx+4]
and ebx, 32
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_0173
lea ebx, [ebp-12]
push ebx
call fb_StrDelete
add esp, 4
jmp .Lt_015B
.Lt_0173:
.Lt_0172:
.Lt_0171:
.Lt_0170:
.Lt_016F:
.Lt_016E:
push dword ptr [ebp+8]
call IRHLFLUSHSTATICINITIALIZER
add esp, 4
lea ebx, [ebp-12]
push ebx
call fb_StrDelete
add esp, 4
jmp .Lt_015B
.Lt_016D:
.Lt_016C:
mov ebx, dword ptr [ebp+8]
mov edx, dword ptr [ebx+4]
and edx, 65540
test edx, edx
je .Lt_0175
lea edx, [ebp-12]
push edx
call fb_StrDelete
add esp, 4
jmp .Lt_015B
.Lt_0175:
.Lt_0174:
mov edx, dword ptr [ebp+8]
mov ebx, dword ptr [edx+4]
and ebx, 59
mov dword ptr [ebp-16], ebx
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
push 0
push 4
push offset Lt_0165
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
cmp dword ptr [ebp-16], 0
je .Lt_0177
push 0
push 7
push offset Lt_0178
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_0176
.Lt_0177:
push 0
push 7
push offset Lt_0179
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_0176:
push 0
push 2
push offset Lt_00B2
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push dword ptr [ebp+8]
call HEMITSYMTYPE
add esp, 4
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
cmp dword ptr [ebp-16], 0
je .Lt_017B
push 0
push 17
push offset Lt_017C
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_017B:
.Lt_017A:
lea eax, [ebp-12]
push eax
call HWRITELINE
add esp, 4
lea eax, [ebp-12]
push eax
call fb_StrDelete
add esp, 4
.Lt_015B:
pop ebx
mov esp, ebp
pop ebp
ret
.size HEMITVARIABLE, .-HEMITVARIABLE
.balign 16
HMAYBEEMITGLOBALVAR:
.type HMAYBEEMITGLOBALVAR, @function
push ebp
mov ebp, esp
.Lt_017D:
push dword ptr [ebp+8]
call SYMBISDATADESC
add esp, 4
test eax, eax
jne .Lt_0180
push dword ptr [ebp+8]
call HEMITVARIABLE
add esp, 4
.Lt_0180:
.Lt_017F:
.Lt_017E:
mov esp, ebp
pop ebp
ret
.size HMAYBEEMITGLOBALVAR, .-HMAYBEEMITGLOBALVAR
.balign 16
HMAYBEEMITPROCPROTO:
.type HMAYBEEMITPROCPROTO, @function
push ebp
mov ebp, esp
sub esp, 28
push ebx
.Lt_0181:
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
je .Lt_0184
jmp .Lt_0182
.Lt_0184:
.Lt_0183:
push dword ptr [ebp+8]
call SYMBGETMANGLEDNAME
add esp, 4
test eax, eax
jne .Lt_0186
jmp .Lt_0182
.Lt_0186:
.Lt_0185:
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+8]
and ecx, 128
test ecx, ecx
je .Lt_0188
jmp .Lt_0182
.Lt_0188:
.Lt_0187:
mov ecx, dword ptr [CTX+116]
mov dword ptr [ebp-4], ecx
mov dword ptr [CTX+116], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
push 0
push -1
push -1
push -1
push dword ptr [ebp+8]
call HEMITPROCHEADER
add esp, 8
push eax
push 9
push offset Lt_0189
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
add esp, 4
lea eax, [ebp-28]
push eax
call fb_StrDelete
add esp, 4
mov eax, dword ptr [ebp-4]
mov dword ptr [CTX+116], eax
.Lt_0182:
pop ebx
mov esp, ebp
pop ebp
ret
.size HMAYBEEMITPROCPROTO, .-HMAYBEEMITPROCPROTO
.balign 16
HEMITSTRUCT:
.type HEMITSTRUCT, @function
push ebp
mov ebp, esp
sub esp, 52
push ebx
.Lt_018C:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+8]
and ebx, 134217728
test ebx, ebx
je .Lt_018F
jmp .Lt_018D
.Lt_018F:
.Lt_018E:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+8]
or eax, 134217728
mov ebx, eax
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+8], ebx
push dword ptr [ebp+8]
call SYMBUDTGETFIRSTFIELD
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_0190:
cmp dword ptr [ebp-4], 0
je .Lt_0191
mov eax, dword ptr [ebp-4]
push dword ptr [eax+28]
call HEMITUDT
add esp, 4
push dword ptr [ebp-4]
call SYMBUDTGETNEXTFIELD
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_0190
.Lt_0191:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+8]
and ebx, 67108864
test ebx, ebx
je .Lt_0193
jmp .Lt_018D
.Lt_0193:
.Lt_0192:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+8]
or eax, 67108864
mov ebx, eax
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+8], ebx
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx+12], 0
je .Lt_0195
push 0
push -1
push dword ptr [ebp+8]
call HGETUDTNAME
add esp, 4
push eax
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_0194
.Lt_0195:
push 0
push -1
push -1
push 0
call SYMBUNIQUEID
push eax
push 2
push offset Lt_00D4
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
lea eax, [ebp-40]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-16]
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
lea eax, [ebp-16]
push eax
call fb_StrAssign
add esp, 20
.Lt_0194:
push 0
push 11
push offset Lt_0198
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 1
push offset Lt_0000
push -1
lea eax, [ebp-28]
push eax
call fb_StrInit
add esp, 20
mov eax, dword ptr [ebp+8]
movzx ebx, byte ptr [eax+115]
test ebx, ebx
jle .Lt_019A
mov ebx, dword ptr [ebp+8]
movzx eax, byte ptr [ebx+115]
cmp eax, 1
jne .Lt_019C
push 0
push 25
push offset Lt_019D
push -1
lea eax, [ebp-28]
push eax
call fb_StrAssign
add esp, 20
jmp .Lt_019B
.Lt_019C:
push 0
push -1
push 4
push offset Lt_019F
push -1
push -1
mov eax, dword ptr [ebp+8]
movzx ebx, byte ptr [eax+115]
push ebx
call fb_UIntToStr
add esp, 4
push eax
push 26
push offset Lt_019E
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
lea eax, [ebp-28]
push eax
call fb_StrAssign
add esp, 20
.Lt_019B:
.Lt_019A:
.Lt_0199:
push dword ptr [ebp+8]
call SYMBUDTGETFIRSTFIELD
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_01A2:
cmp dword ptr [ebp-4], 0
je .Lt_01A3
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+4]
and ebx, 4
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_01A5
push 0
push -1
push dword ptr [ebp-4]
call HEMITSYMTYPE
add esp, 4
push eax
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push dword ptr [ebp-4]
call HEMITARRAYDECL
add esp, 4
push eax
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
lea eax, [ebp-28]
push eax
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_01A5:
.Lt_01A4:
push dword ptr [ebp-4]
call SYMBUDTGETNEXTFIELD
add esp, 4
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
je .Lt_01A7
push 0
push 3
push offset Lt_00BD
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_01A7:
.Lt_01A6:
jmp .Lt_01A2
.Lt_01A3:
push 0
push 3
push offset Lt_01A8
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
lea eax, [ebp-16]
push eax
call HWRITELINE
add esp, 4
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+8]
and ebx, -134217729
mov eax, ebx
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+8], eax
lea eax, [ebp-28]
push eax
call fb_StrDelete
add esp, 4
lea eax, [ebp-16]
push eax
call fb_StrDelete
add esp, 4
.Lt_018D:
pop ebx
mov esp, ebp
pop ebp
ret
.size HEMITSTRUCT, .-HEMITSTRUCT
.balign 16
HEMITCTORDTORARRAYELEMENT:
.type HEMITCTORDTORARRAYELEMENT, @function
push ebp
mov ebp, esp
sub esp, 72
push ebx
.Lt_01A9:
push -1
push dword ptr [ebp+12]
call fb_StrLen
add esp, 8
test eax, eax
jle .Lt_01AC
push 0
push -1
push 3
push offset Lt_00BD
push -1
push dword ptr [ebp+12]
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
mov dword ptr [ebp-64], 0
lea eax, [ebp-72]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+12]
call fb_StrAssign
add esp, 20
.Lt_01AC:
.Lt_01AB:
push 0
push -1
push 25
push offset Lt_01AE
push -1
push dword ptr [ebp+12]
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+12]
call fb_StrAssign
add esp, 20
push 0
push -1
push -1
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+108]
push dword ptr [ebx+56]
call fb_IntToStr
add esp, 4
push eax
push -1
push dword ptr [ebp+12]
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ebp-24]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+12]
call fb_StrAssign
add esp, 20
push 0
push -1
push 12
push offset Lt_01B1
push -1
push dword ptr [ebp+12]
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
lea eax, [ebp-36]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+12]
call fb_StrAssign
add esp, 20
push 0
push -1
push 0
push dword ptr [ebp+8]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
push -1
push dword ptr [ebp+12]
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
lea eax, [ebp-48]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+12]
call fb_StrAssign
add esp, 20
push 0
push -1
push 3
push offset Lt_01A8
push -1
push dword ptr [ebp+12]
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
lea eax, [ebp-60]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+12]
call fb_StrAssign
add esp, 20
.Lt_01AA:
pop ebx
mov esp, ebp
pop ebp
ret
.size HEMITCTORDTORARRAYELEMENT, .-HEMITCTORDTORARRAYELEMENT
.balign 16
HADDGLOBALCTORDTOR:
.type HADDGLOBALCTORDTOR, @function
push ebp
mov ebp, esp
push ebx
.Lt_01B5:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+8]
and ebx, 16384
test ebx, ebx
je .Lt_01B8
jmp .Lt_01B6
.Lt_01B8:
.Lt_01B7:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+8]
and eax, 65536
test eax, eax
je .Lt_01BA
inc dword ptr [CTX+80]
lea eax, [CTX+56]
push eax
push dword ptr [ebp+8]
call HEMITCTORDTORARRAYELEMENT
add esp, 8
jmp .Lt_01B9
.Lt_01BA:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+8]
and ebx, 131072
test ebx, ebx
je .Lt_01BB
inc dword ptr [CTX+84]
lea ebx, [CTX+68]
push ebx
push dword ptr [ebp+8]
call HEMITCTORDTORARRAYELEMENT
add esp, 8
.Lt_01BB:
.Lt_01B9:
.Lt_01B6:
pop ebx
mov esp, ebp
pop ebp
ret
.size HADDGLOBALCTORDTOR, .-HADDGLOBALCTORDTOR
.balign 16
_EMITBEGIN:
.type _EMITBEGIN, @function
push ebp
mov ebp, esp
sub esp, 100
mov dword ptr [ebp-4], 0
.Lt_01BC:
lea eax, [ENV+524]
push eax
call HFILEEXISTS
add esp, 4
test eax, eax
je .Lt_01BF
lea eax, [ENV+524]
push eax
call fb_StrAllocTempDescZ
add esp, 4
push eax
call fb_FileKill
add esp, 4
.Lt_01BF:
.Lt_01BE:
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
je .Lt_01C1
mov dword ptr [ebp-4], 0
jmp .Lt_01BD
.Lt_01C1:
.Lt_01C0:
mov dword ptr [CTX], 0
push 0
push 1
push offset Lt_0000
push -1
lea eax, [CTX+56]
push eax
call fb_StrAssign
add esp, 20
push 0
push 1
push offset Lt_0000
push -1
lea eax, [CTX+68]
push eax
call fb_StrAssign
add esp, 20
mov dword ptr [CTX+80], 0
mov dword ptr [CTX+84], 0
push 0
push 1
push offset Lt_0000
push -1
lea eax, [CTX+120]
push eax
call fb_StrAssign
add esp, 20
push 0
push 1
push offset Lt_0000
push -1
lea eax, [CTX+132]
push eax
call fb_StrAssign
add esp, 20
push 0
push 1
push offset Lt_0000
push -1
lea eax, [CTX+144]
push eax
call fb_StrAssign
add esp, 20
mov dword ptr [CTX+36], 0
mov dword ptr [CTX+116], 0
mov dword ptr [ebp-92], 0
.Lt_01C5:
mov eax, dword ptr [ebp-92]
mov dword ptr [BUILTINS+eax*8+4], 0
.Lt_01C3:
inc dword ptr [ebp-92]
.Lt_01C2:
cmp dword ptr [ebp-92], 17
jle .Lt_01C5
.Lt_01C4:
cmp dword ptr [ENV+144], 0
je .Lt_01C7
push 0
push 0
push 108
call _EMITDBG
add esp, 12
.Lt_01C7:
.Lt_01C6:
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
push offset Lt_01CA
push -1
push -1
call fb_Time
push eax
push -1
push 13
push offset Lt_01C9
push -1
push 261
lea eax, [ENV+244]
push eax
push 18
push offset Lt_01C8
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
add esp, 4
lea eax, [ebp-76]
push eax
call fb_StrDelete
add esp, 4
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
add esp, 4
lea eax, [ebp-88]
push eax
call fb_StrDelete
add esp, 4
call FBIS64BIT
test eax, eax
je .Lt_01D3
mov dword ptr [ebp-100], 0
mov dword ptr [ebp-96], 0
mov dword ptr [ebp-92], 0
push 0
push 35
push offset Lt_01D4
push -1
lea eax, [ebp-100]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-100]
push eax
call HWRITELINE
add esp, 4
lea eax, [ebp-100]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_01D2
.Lt_01D3:
mov dword ptr [ebp-100], 0
mov dword ptr [ebp-96], 0
mov dword ptr [ebp-92], 0
push 0
push 35
push offset Lt_01D6
push -1
lea eax, [ebp-100]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-100]
push eax
call HWRITELINE
add esp, 4
lea eax, [ebp-100]
push eax
call fb_StrDelete
add esp, 4
.Lt_01D2:
mov dword ptr [CTX+116], 1
mov dword ptr [ebp-4], -1
.Lt_01BD:
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
sub esp, 132
.Lt_01D8:
mov dword ptr [CTX+116], 0
mov dword ptr [ebp-76], 0
.Lt_01DD:
mov eax, dword ptr [ebp-76]
cmp dword ptr [BUILTINS+eax*8+4], 0
je .Lt_01DF
mov dword ptr [ebp-88], 0
mov dword ptr [ebp-84], 0
mov dword ptr [ebp-80], 0
push 0
push 0
mov eax, dword ptr [ebp-76]
push dword ptr [BUILTINS+eax*8]
push -1
lea eax, [ebp-88]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-88]
push eax
call HWRITELINE
add esp, 4
lea eax, [ebp-88]
push eax
call fb_StrDelete
add esp, 4
.Lt_01DF:
.Lt_01DE:
.Lt_01DB:
inc dword ptr [ebp-76]
.Lt_01DA:
cmp dword ptr [ebp-76], 17
jle .Lt_01DD
.Lt_01DC:
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
add esp, 4
lea eax, [ebp-12]
push eax
call fb_StrDelete
add esp, 4
push offset HMAYBEEMITPROCPROTO
push 3
call SYMBFOREACHGLOBAL
add esp, 8
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
push 0
push 1
push offset Lt_0000
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-24]
push eax
call HWRITELINE
add esp, 4
lea eax, [ebp-24]
push eax
call fb_StrDelete
add esp, 4
push offset HMAYBEEMITGLOBALVAR
push 1
call SYMBFOREACHGLOBAL
add esp, 8
push offset HEMITVARIABLE
call IRFOREACHDATASTMT
add esp, 4
push offset HADDGLOBALCTORDTOR
push 3
call SYMBFOREACHGLOBAL
add esp, 8
cmp dword ptr [CTX+80], 0
jle .Lt_01E4
mov dword ptr [ebp-132], 0
mov dword ptr [ebp-128], 0
mov dword ptr [ebp-124], 0
push 0
push -1
push -1
push 2
push offset Lt_0105
push -1
push -1
lea eax, [CTX+56]
push eax
push 24
push offset Lt_01E6
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
push -1
push -1
push dword ptr [CTX+80]
call fb_IntToStr
add esp, 4
push eax
push 40
push offset Lt_01E5
mov dword ptr [ebp-84], 0
mov dword ptr [ebp-80], 0
mov dword ptr [ebp-76], 0
lea eax, [ebp-84]
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
push -1
lea eax, [ebp-132]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-132]
push eax
call HWRITELINE
add esp, 4
lea eax, [ebp-132]
push eax
call fb_StrDelete
add esp, 4
.Lt_01E4:
.Lt_01E3:
cmp dword ptr [CTX+84], 0
jle .Lt_01ED
mov dword ptr [ebp-132], 0
mov dword ptr [ebp-128], 0
mov dword ptr [ebp-124], 0
push 0
push -1
push -1
push 2
push offset Lt_0105
push -1
push -1
lea eax, [CTX+68]
push eax
push 24
push offset Lt_01E6
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
push -1
push -1
push dword ptr [CTX+84]
call fb_IntToStr
add esp, 4
push eax
push 40
push offset Lt_01EE
mov dword ptr [ebp-84], 0
mov dword ptr [ebp-80], 0
mov dword ptr [ebp-76], 0
lea eax, [ebp-84]
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
push -1
lea eax, [ebp-132]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-132]
push eax
call HWRITELINE
add esp, 4
lea eax, [ebp-132]
push eax
call fb_StrDelete
add esp, 4
.Lt_01ED:
.Lt_01EC:
mov dword ptr [CTX+116], 2
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 0
push 1
push offset Lt_0000
push -1
lea eax, [ebp-36]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-36]
push eax
call HWRITELINE
add esp, 4
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
mov dword ptr [ebp-64], 0
push 0
push -1
push 11
push offset Lt_01F6
push -1
push -1
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call fb_DoubleToStr
add esp, 8
push eax
push 27
push offset Lt_01F5
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
push -1
lea eax, [ebp-72]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-72]
push eax
call HWRITELINE
add esp, 4
lea eax, [ebp-72]
push eax
call fb_StrDelete
add esp, 4
push -1
lea eax, [CTX+120]
push eax
push 0
push dword ptr [ENV+520]
call fb_FilePutStr
add esp, 16
test eax, eax
je .Lt_01FB
.Lt_01FB:
.Lt_01FA:
push -1
lea eax, [CTX+132]
push eax
push 0
push dword ptr [ENV+520]
call fb_FilePutStr
add esp, 16
test eax, eax
je .Lt_01FD
.Lt_01FD:
.Lt_01FC:
push -1
lea eax, [CTX+144]
push eax
push 0
push dword ptr [ENV+520]
call fb_FilePutStr
add esp, 16
test eax, eax
je .Lt_01FF
.Lt_01FF:
.Lt_01FE:
push dword ptr [ENV+520]
call fb_FileClose
add esp, 4
test eax, eax
je .Lt_0201
.Lt_0201:
.Lt_0200:
mov dword ptr [ENV+520], 0
.Lt_01D9:
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
.Lt_0202:
cmp dword ptr [ebp+8], 1
jne .Lt_0205
.Lt_0206:
mov dword ptr [ebp-4], 0
jmp .Lt_0203
jmp .Lt_0204
.Lt_0205:
push 0
push 1
push 0
push offset Lt_0208
push 21
call ERRREPORTEX
add esp, 20
.Lt_0207:
.Lt_0204:
.Lt_0203:
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
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_0209:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-8], eax
jmp .Lt_020C
.Lt_020E:
mov dword ptr [ebp-4], 0
jmp .Lt_020B
.Lt_020F:
mov eax, dword ptr [ebp+12]
and eax, 480
je .Lt_0210
mov dword ptr [ebp-12], 22
jmp .Lt_047F
.Lt_0210:
mov eax, dword ptr [ebp+12]
and eax, 31
mov dword ptr [ebp-12], eax
.Lt_047F:
mov eax, dword ptr [ebp-12]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax]
cmp ebx, 1
sete bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-4], ebx
jmp .Lt_020B
.Lt_0212:
mov dword ptr [ebp-4], -1
jmp .Lt_020B
.Lt_020C:
mov ebx, dword ptr [ebp-8]
add ebx, 4294967240
cmp ebx, 16
ja .Lt_0212
mov ebx, dword ptr [ebp-8]
jmp dword ptr [.LT_0213+ebx*4-224]
.LT_0213:
.int .Lt_020F
.int .Lt_020E
.int .Lt_0212
.int .Lt_020E
.int .Lt_0212
.int .Lt_020E
.int .Lt_020E
.int .Lt_020E
.int .Lt_0212
.int .Lt_0212
.int .Lt_020E
.int .Lt_020E
.int .Lt_0212
.int .Lt_0212
.int .Lt_0212
.int .Lt_020E
.int .Lt_020E
.Lt_020B:
.Lt_020A:
mov eax, dword ptr [ebp-4]
pop ebx
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
.Lt_0214:
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebx+108]
mov ebx, dword ptr [eax+16548]
mov dword ptr [ecx+16], ebx
.Lt_0215:
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
.Lt_0216:
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebx+108]
mov ebx, dword ptr [eax+16548]
mov dword ptr [ecx+20], ebx
.Lt_0217:
pop ebx
mov esp, ebp
pop ebp
ret
.size _PROCEND, .-_PROCEND
.balign 16
_PROCALLOCARG:
.type _PROCALLOCARG, @function
push ebp
mov ebp, esp
sub esp, 76
push ebx
.Lt_0218:
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
mov dword ptr [ebp-20], 0
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 262144
test ebx, ebx
je .Lt_021B
mov dword ptr [ebp-16], 2
jmp .Lt_021A
.Lt_021B:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 65536
test eax, eax
je .Lt_021C
mov dword ptr [ebp-16], 3
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+84]
mov dword ptr [ebp-20], ebx
jmp .Lt_021A
.Lt_021C:
mov dword ptr [ebp-16], 1
.Lt_021A:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+24]
and eax, 511
mov dword ptr [ebp-24], eax
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+28]
mov dword ptr [ebp-28], ebx
lea ebx, [ebp-28]
push ebx
lea ebx, [ebp-24]
push ebx
push dword ptr [ebp-20]
push dword ptr [ebp-16]
call _Z21SYMBGETREALPARAMDTYPEiP8FBSYMBOLRiRS0_
add esp, 16
push 0
push -1
push 11
push offset Lt_021D
push 0
push dword ptr [ebp+12]
call SYMBGETMANGLEDNAME
add esp, 4
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
push 0
push -1
push dword ptr [ebp-28]
push dword ptr [ebp-24]
call HEMITTYPE
add esp, 8
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
lea eax, [ebp-12]
push eax
call HWRITELINE
add esp, 4
push 0
push 7
push offset Lt_021F
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
push 0
push -1
push dword ptr [ebp-28]
push dword ptr [ebp-24]
call HEMITTYPE
add esp, 8
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 2
push offset Lt_00B2
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push dword ptr [ebp+12]
call HEMITPARAMNAME
add esp, 4
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_00BD
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push -1
push 0
push dword ptr [ebp+12]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
push -1
push 2
push offset Lt_00B2
push -1
push dword ptr [ebp-28]
mov eax, dword ptr [ebp-24]
and eax, 31
mov ebx, dword ptr [ebp-24]
and ebx, 480
add ebx, 32
or eax, ebx
mov ebx, dword ptr [ebp-24]
and ebx, 261632
sal ebx, 1
or eax, ebx
push eax
call HEMITTYPE
add esp, 8
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
lea eax, [ebp-12]
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
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-12]
push eax
call HWRITELINE
add esp, 4
lea eax, [ebp-12]
push eax
call fb_StrDelete
add esp, 4
.Lt_0219:
pop ebx
mov esp, ebp
pop ebp
ret
.size _PROCALLOCARG, .-_PROCALLOCARG
.balign 16
_PROCALLOCLOCAL:
.type _PROCALLOCLOCAL, @function
push ebp
mov ebp, esp
.Lt_0223:
push dword ptr [ebp+12]
call HEMITVARIABLE
add esp, 4
.Lt_0224:
mov esp, ebp
pop ebp
ret
.size _PROCALLOCLOCAL, .-_PROCALLOCLOCAL
.balign 16
_SCOPEBEGIN:
.type _SCOPEBEGIN, @function
push ebp
mov ebp, esp
.Lt_0225:
.Lt_0226:
mov esp, ebp
pop ebp
ret
.size _SCOPEBEGIN, .-_SCOPEBEGIN
.balign 16
_SCOPEEND:
.type _SCOPEEND, @function
push ebp
mov ebp, esp
.Lt_0227:
.Lt_0228:
mov esp, ebp
pop ebp
ret
.size _SCOPEEND, .-_SCOPEEND
.balign 16
_PROCALLOCSTATICVARS:
.type _PROCALLOCSTATICVARS, @function
push ebp
mov ebp, esp
.Lt_0229:
.Lt_022A:
mov esp, ebp
pop ebp
ret
.size _PROCALLOCSTATICVARS, .-_PROCALLOCSTATICVARS
.balign 16
_SETVREGDATATYPE:
.type _SETVREGDATATYPE, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_022B:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+12]
cmp ebx, dword ptr [eax+4]
setne bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+8]
cmp ecx, dword ptr [ebp+16]
setne al
shr eax, 1
sbb eax, eax
or ebx, eax
je .Lt_022E
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call IRHLALLOCVREG
add esp, 8
mov dword ptr [ebp-4], eax
push dword ptr [ebp+8]
push dword ptr [ebp-4]
call _EMITCONVERT
add esp, 8
push edi
push esi
mov edi, dword ptr [ebp+8]
mov esi, dword ptr [ebp-4]
mov ecx, 17
rep movsd
pop esi
pop edi
.Lt_022E:
.Lt_022D:
.Lt_022C:
pop ebx
mov esp, ebp
pop ebp
ret
.size _SETVREGDATATYPE, .-_SETVREGDATATYPE
.balign 16
HPREPAREADDRESS:
.type HPREPAREADDRESS, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
.Lt_022F:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-4], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+8]
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+36]
mov dword ptr [ebp-8], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+48]
mov dword ptr [ebp-16], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-24], ebx
cmp dword ptr [ebp-24], 3
jne .Lt_0233
.Lt_0234:
push edi
push esi
mov edi, dword ptr [ebp+8]
mov esi, dword ptr [ebp-16]
mov ecx, 17
rep movsd
pop esi
pop edi
jmp .Lt_0231
.Lt_0233:
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx], 4
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebx+4]
and ecx, 480
add ecx, 32
or eax, ecx
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ecx+4]
and ebx, 261632
sal ebx, 1
or eax, ebx
mov ecx, eax
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+4], ecx
mov ecx, dword ptr [ebp+8]
mov dword ptr [ecx+12], -1
mov ecx, dword ptr [ebp+8]
mov dword ptr [ecx+36], 0
mov dword ptr [ecx+40], 0
.Lt_0235:
.Lt_0231:
cmp dword ptr [ebp-16], 0
setne cl
shr ecx, 1
sbb ecx, ecx
mov ebx, dword ptr [ebp-8]
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
or ecx, ebx
je .Lt_0237
push 0
push 7
call IRHLALLOCVREG
add esp, 8
mov dword ptr [ebp-20], eax
push dword ptr [ebp+8]
push dword ptr [ebp-20]
call _EMITCONVERT
add esp, 8
cmp dword ptr [ebp-8], 0
je .Lt_0239
push 0
push 0
mov ebx, dword ptr [ebp-8]
mov eax, ebx
sar eax, 31
push eax
push ebx
push 0
push 7
call IRHLALLOCVRIMM
add esp, 16
push eax
push dword ptr [ebp-20]
push 28
call _EMITBOP
add esp, 20
.Lt_0239:
.Lt_0238:
push dword ptr [ebp-12]
mov eax, dword ptr [ebp-4]
and eax, 31
mov ebx, dword ptr [ebp-4]
and ebx, 480
add ebx, 32
or eax, ebx
mov ebx, dword ptr [ebp-4]
and ebx, 261632
sal ebx, 1
or eax, ebx
push eax
push dword ptr [ebp-20]
call _SETVREGDATATYPE
add esp, 12
push edi
push esi
mov edi, dword ptr [ebp+8]
mov esi, dword ptr [ebp-20]
mov ecx, 17
rep movsd
pop esi
pop edi
.Lt_0237:
.Lt_0236:
.Lt_0230:
pop ebx
mov esp, ebp
pop ebp
ret
.size HPREPAREADDRESS, .-HPREPAREADDRESS
.balign 16
HLOADVREG:
.type HLOADVREG, @function
push ebp
mov ebp, esp
sub esp, 80
push ebx
.Lt_023A:
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-20], ebx
cmp dword ptr [ebp-20], 4
je .Lt_023F
.Lt_0240:
cmp dword ptr [ebp-20], 0
jne .Lt_023E
.Lt_023F:
jmp .Lt_023C
.Lt_023E:
cmp dword ptr [ebp-20], 5
jne .Lt_0241
.Lt_0242:
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx+40], 0
jne .Lt_0485
cmp dword ptr [ebx+36], 0
je .Lt_0244
.Lt_0485:
push 0
push 7
call IRHLALLOCVREG
add esp, 8
mov dword ptr [ebp-16], eax
push dword ptr [ebp+8]
push dword ptr [ebp-16]
call _EMITCONVERT
add esp, 8
push 0
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax+40]
push dword ptr [eax+36]
push 0
push 7
call IRHLALLOCVRIMM
add esp, 16
push eax
push dword ptr [ebp-16]
push 28
call _EMITBOP
add esp, 20
mov eax, dword ptr [ebp+8]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+4]
push dword ptr [ebp-16]
call _SETVREGDATATYPE
add esp, 12
push edi
push esi
mov edi, dword ptr [ebp+8]
mov esi, dword ptr [ebp-16]
mov ecx, 17
rep movsd
pop esi
pop edi
.Lt_0244:
.Lt_0243:
jmp .Lt_023C
.Lt_0241:
push dword ptr [ebp+8]
call HPREPAREADDRESS
add esp, 4
mov eax, dword ptr [ebp+8]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 31
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+4]
and ecx, 480
add ecx, -32
or ebx, ecx
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ecx+4]
and eax, 261632
sar eax, 1
and eax, 261632
or ebx, eax
push ebx
call IRHLALLOCVREG
add esp, 8
mov dword ptr [ebp-16], eax
mov dword ptr [ebp-80], 0
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
push 0
push -1
push -1
push dword ptr [ebp+8]
call HVREGTOSTR
add esp, 4
push eax
push -1
push 2
push offset Lt_00B2
push -1
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+4]
call HEMITTYPE
add esp, 8
push eax
push -1
push 9
push offset Lt_0246
push -1
push dword ptr [ebp-16]
call HVREGTOSTR
add esp, 4
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
mov dword ptr [ebp-68], 0
mov dword ptr [ebp-64], 0
mov dword ptr [ebp-60], 0
lea eax, [ebp-68]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-80]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-80]
push eax
call HWRITELINE
add esp, 4
lea eax, [ebp-80]
push eax
call fb_StrDelete
add esp, 4
push edi
push esi
mov edi, dword ptr [ebp+8]
mov esi, dword ptr [ebp-16]
mov ecx, 17
rep movsd
pop esi
pop edi
.Lt_0245:
.Lt_023C:
lea eax, [ebp-12]
push eax
call fb_StrDelete
add esp, 4
.Lt_023B:
pop ebx
mov esp, ebp
pop ebp
ret
.size HLOADVREG, .-HLOADVREG
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
.Lt_024C:
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
jmp .Lt_024F
.Lt_0251:
cmp dword ptr [ebp-28], 0
jne .Lt_0253
push 0
push 5
push offset Lt_0254
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
jmp .Lt_0252
.Lt_0253:
push 0
push 0
push dword ptr [DTYPENAME]
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
.Lt_0252:
jmp .Lt_024E
.Lt_0255:
cmp dword ptr [ebp+12], 0
je .Lt_0257
push dword ptr [ebp+12]
call HEMITUDT
add esp, 4
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
jmp .Lt_0256
.Lt_0257:
cmp dword ptr [ebp+8], 9
jne .Lt_0258
push 0
push 0
mov eax, dword ptr [ebp+8]
and eax, 480
je .Lt_0259
mov dword ptr [ebp-36], 22
jmp .Lt_0486
.Lt_0259:
mov eax, dword ptr [ebp+8]
and eax, 31
mov dword ptr [ebp-36], eax
.Lt_0486:
mov eax, dword ptr [ebp-36]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+16]
push dword ptr [DTYPENAME+ebx*4]
push -1
lea ebx, [ebp-24]
push ebx
call fb_StrAssign
add esp, 20
jmp .Lt_0256
.Lt_0258:
push 0
push 0
push dword ptr [DTYPENAME]
push -1
lea ebx, [ebp-24]
push ebx
call fb_StrAssign
add esp, 20
.Lt_0256:
jmp .Lt_024E
.Lt_025B:
dec dword ptr [ebp-28]
push dword ptr [ebp+12]
call HEMITUDT
add esp, 4
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
jmp .Lt_024E
.Lt_025C:
push 0
push 0
mov eax, dword ptr [ebp+8]
and eax, 480
je .Lt_025D
mov dword ptr [ebp-36], 22
jmp .Lt_0487
.Lt_025D:
mov eax, dword ptr [ebp+8]
and eax, 31
mov dword ptr [ebp-36], eax
.Lt_0487:
mov eax, dword ptr [ebp-36]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+16]
push dword ptr [DTYPENAME+ebx*4]
push -1
lea ebx, [ebp-24]
push ebx
call fb_StrAssign
add esp, 20
jmp .Lt_024E
.Lt_025F:
push 0
push 0
push dword ptr [DTYPENAME+8]
push -1
lea ebx, [ebp-24]
push ebx
call fb_StrAssign
add esp, 20
jmp .Lt_024E
.Lt_0260:
push 0
push 0
mov ebx, dword ptr [ebp+8]
push dword ptr [DTYPENAME+ebx*4]
push -1
lea ebx, [ebp-24]
push ebx
call fb_StrAssign
add esp, 20
jmp .Lt_024E
.Lt_024F:
cmp dword ptr [ebp-32], 20
ja .Lt_0260
mov ebx, dword ptr [ebp-32]
jmp dword ptr [.LT_0261+ebx*4]
.LT_0261:
.int .Lt_0251
.int .Lt_0260
.int .Lt_0260
.int .Lt_025C
.int .Lt_0260
.int .Lt_0260
.int .Lt_025C
.int .Lt_0260
.int .Lt_0260
.int .Lt_0255
.int .Lt_0260
.int .Lt_0260
.int .Lt_0260
.int .Lt_0260
.int .Lt_0260
.int .Lt_0260
.int .Lt_0260
.int .Lt_025F
.int .Lt_0255
.int .Lt_0260
.int .Lt_025B
.Lt_024E:
cmp dword ptr [ebp-28], 0
jle .Lt_0263
push 0
push -1
push 1
push offset Lt_00F1
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
.Lt_0263:
.Lt_0262:
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
.Lt_024D:
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
HEMITINT:
.type HEMITINT, @function
push ebp
mov ebp, esp
sub esp, 24
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_0264:
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
cmp dword ptr [ebp+8], 7
je .Lt_0268
.Lt_0269:
cmp dword ptr [ebp+8], 8
je .Lt_0268
.Lt_026A:
cmp dword ptr [ebp+8], 10
je .Lt_0268
.Lt_026B:
cmp dword ptr [ebp+8], 11
je .Lt_0268
.Lt_026C:
cmp dword ptr [ebp+8], 9
jne .Lt_0267
.Lt_0268:
push 0
push -1
push dword ptr [ebp+16]
call fb_IntToStr
add esp, 4
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
jmp .Lt_0266
.Lt_0267:
mov eax, dword ptr [ebp+8]
and eax, 480
test eax, eax
je .Lt_026F
push 0
push 10
push offset Lt_0270
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
jmp .Lt_026E
.Lt_026F:
push 0
push 7
push offset Lt_0271
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
.Lt_026E:
push 0
push 2
push offset Lt_0272
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push 0
push 7
call HEMITTYPE
add esp, 8
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 2
push offset Lt_00B2
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push dword ptr [ebp+16]
call fb_IntToStr
add esp, 4
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 5
push offset Lt_0273
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HEMITTYPE
add esp, 8
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 2
push offset Lt_0274
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_026D:
.Lt_0266:
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
.Lt_0265:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
mov esp, ebp
pop ebp
ret
.size HEMITINT, .-HEMITINT
.balign 16
HEMITLONG:
.type HEMITLONG, @function
push ebp
mov ebp, esp
sub esp, 12
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_0275:
push 0
push -1
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call fb_LongintToStr
add esp, 8
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
.Lt_0276:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
mov esp, ebp
pop ebp
ret
.size HEMITLONG, .-HEMITLONG
.balign 16
HEMITFLOAT:
.type HEMITFLOAT, @function
push ebp
mov ebp, esp
sub esp, 12
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_0277:
push 0
push 3
push offset Lt_0279
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
push 0
push -1
push 16
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call fb_HEXEx_l
add esp, 12
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_0278:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
mov esp, ebp
pop ebp
ret
.size HEMITFLOAT, .-HEMITFLOAT
.balign 16
HVREGTOSTR:
.type HVREGTOSTR, @function
push ebp
mov ebp, esp
sub esp, 56
push ebx
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_027A:
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-32], ebx
jmp .Lt_027D
.Lt_027F:
push 0
push 0
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+32]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
jmp .Lt_027C
.Lt_0280:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+32]
mov dword ptr [ebp-28], ebx
mov ebx, dword ptr [ebp-28]
mov eax, dword ptr [ebx+4]
and eax, 524288
test eax, eax
je .Lt_0282
push 0
push 10
push offset Lt_0283
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
push 0
push -1
push dword ptr [ebp-28]
call HEMITSYMTYPE
add esp, 4
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_0284
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push 0
push dword ptr [ebp-28]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
push -1
lea eax, [ebp-24]
push eax
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
lea eax, [ebp-44]
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
push 5
push offset Lt_0273
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push -1
push 0
mov eax, dword ptr [ebp-28]
mov ebx, dword ptr [eax+24]
and ebx, 511
and ebx, 31
mov eax, dword ptr [ebp-28]
mov ecx, dword ptr [eax+24]
and ecx, 511
and ecx, 480
add ecx, 32
or ebx, ecx
mov ecx, dword ptr [ebp-28]
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
push 0
push 2
push offset Lt_0274
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_0281
.Lt_0282:
push 0
push 0
push dword ptr [ebp-28]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
.Lt_0281:
jmp .Lt_027C
.Lt_0287:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_0288
mov dword ptr [ebp-36], 22
jmp .Lt_0488
.Lt_0288:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-36], eax
.Lt_0488:
mov eax, dword ptr [ebp-36]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax], 1
jne .Lt_028B
push 0
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+28]
push dword ptr [eax+24]
call HEMITFLOAT
add esp, 8
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
jmp .Lt_028A
.Lt_028B:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_028D
mov dword ptr [ebp-40], 22
jmp .Lt_0489
.Lt_028D:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-40], eax
.Lt_0489:
mov eax, dword ptr [ebp-40]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+4], 8
jne .Lt_028C
push 0
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+28]
push dword ptr [eax+24]
call HEMITLONG
add esp, 8
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
jmp .Lt_028A
.Lt_028C:
push 0
push -1
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+24]
push ebx
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+8]
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+4]
call HEMITINT
add esp, 12
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
.Lt_028A:
jmp .Lt_027C
.Lt_028F:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+32], 0
je .Lt_0291
push 0
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax+32]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
jmp .Lt_0290
.Lt_0291:
push 0
push -1
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+12]
call fb_IntToStr
add esp, 4
push eax
push 4
push offset Lt_0292
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
lea eax, [ebp-44]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
.Lt_0290:
jmp .Lt_027C
.Lt_027D:
cmp dword ptr [ebp-32], 5
ja .Lt_027C
mov eax, dword ptr [ebp-32]
jmp dword ptr [.LT_0294+eax*4]
.LT_0294:
.int .Lt_0287
.int .Lt_027F
.int .Lt_027F
.int .Lt_027F
.int .Lt_028F
.int .Lt_0280
.Lt_027C:
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
.Lt_027B:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
pop ebx
mov esp, ebp
pop ebp
ret
.size HVREGTOSTR, .-HVREGTOSTR
.balign 16
_EMITLABEL:
.type _EMITLABEL, @function
push ebp
mov ebp, esp
sub esp, 24
.Lt_0295:
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
push 0
push -1
push 0
push dword ptr [ebp+8]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
push 11
push offset Lt_0297
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
add esp, 4
lea eax, [ebp-24]
push eax
call fb_StrDelete
add esp, 4
push dword ptr [ebp+8]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
call HWRITELABEL
add esp, 4
.Lt_0296:
mov esp, ebp
pop ebp
ret
.size _EMITLABEL, .-_EMITLABEL
.balign 16
HGETBOPCODE:
.type HGETBOPCODE, @function
push ebp
mov ebp, esp
sub esp, 12
mov dword ptr [ebp-4], 0
.Lt_029A:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-8], eax
jmp .Lt_029D
.Lt_029F:
mov eax, dword ptr [ebp+12]
and eax, 480
je .Lt_02A0
mov dword ptr [ebp-12], 22
jmp .Lt_048A
.Lt_02A0:
mov eax, dword ptr [ebp+12]
and eax, 31
mov dword ptr [ebp-12], eax
.Lt_048A:
mov eax, dword ptr [ebp-12]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax], 1
jne .Lt_02A3
mov eax, offset Lt_02A4
mov dword ptr [ebp-4], eax
jmp .Lt_02A2
.Lt_02A3:
mov eax, offset Lt_02A5
mov dword ptr [ebp-4], eax
.Lt_02A2:
jmp .Lt_029C
.Lt_02A6:
mov eax, dword ptr [ebp+12]
and eax, 480
je .Lt_02A7
mov dword ptr [ebp-12], 22
jmp .Lt_048B
.Lt_02A7:
mov eax, dword ptr [ebp+12]
and eax, 31
mov dword ptr [ebp-12], eax
.Lt_048B:
mov eax, dword ptr [ebp-12]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax], 1
jne .Lt_02AA
mov eax, offset Lt_02AB
mov dword ptr [ebp-4], eax
jmp .Lt_02A9
.Lt_02AA:
mov eax, offset Lt_02AC
mov dword ptr [ebp-4], eax
.Lt_02A9:
jmp .Lt_029C
.Lt_02AD:
mov eax, dword ptr [ebp+12]
and eax, 480
je .Lt_02AE
mov dword ptr [ebp-12], 22
jmp .Lt_048C
.Lt_02AE:
mov eax, dword ptr [ebp+12]
and eax, 31
mov dword ptr [ebp-12], eax
.Lt_048C:
mov eax, dword ptr [ebp-12]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax], 1
jne .Lt_02B1
mov eax, offset Lt_02B2
mov dword ptr [ebp-4], eax
jmp .Lt_02B0
.Lt_02B1:
mov eax, offset Lt_02B3
mov dword ptr [ebp-4], eax
.Lt_02B0:
jmp .Lt_029C
.Lt_02B4:
mov eax, offset Lt_02B5
mov dword ptr [ebp-4], eax
jmp .Lt_029C
.Lt_02B6:
mov eax, offset Lt_02B7
mov dword ptr [ebp-4], eax
jmp .Lt_029C
.Lt_02B8:
mov eax, dword ptr [ebp+12]
and eax, 480
je .Lt_02B9
mov dword ptr [ebp-12], 22
jmp .Lt_048D
.Lt_02B9:
mov eax, dword ptr [ebp+12]
and eax, 31
mov dword ptr [ebp-12], eax
.Lt_048D:
mov eax, dword ptr [ebp-12]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax], 1
jne .Lt_02BC
mov eax, offset Lt_02BD
mov dword ptr [ebp-4], eax
jmp .Lt_02BB
.Lt_02BC:
mov eax, offset Lt_02BE
mov dword ptr [ebp-4], eax
.Lt_02BB:
jmp .Lt_029C
.Lt_02BF:
mov eax, offset Lt_02C0
mov dword ptr [ebp-4], eax
jmp .Lt_029C
.Lt_02C1:
mov eax, offset Lt_02C2
mov dword ptr [ebp-4], eax
jmp .Lt_029C
.Lt_02C3:
mov eax, offset Lt_02C4
mov dword ptr [ebp-4], eax
jmp .Lt_029C
.Lt_02C5:
mov eax, offset Lt_02C6
mov dword ptr [ebp-4], eax
jmp .Lt_029C
.Lt_02C7:
mov eax, offset Lt_02C8
mov dword ptr [ebp-4], eax
jmp .Lt_029C
.Lt_02C9:
mov eax, offset Lt_02CA
mov dword ptr [ebp-4], eax
jmp .Lt_029C
.Lt_02CB:
mov eax, offset Lt_02CC
mov dword ptr [ebp-4], eax
jmp .Lt_029C
.Lt_02CD:
mov eax, offset Lt_02CE
mov dword ptr [ebp-4], eax
jmp .Lt_029C
.Lt_02CF:
mov eax, offset Lt_02D0
mov dword ptr [ebp-4], eax
jmp .Lt_029C
.Lt_02D1:
mov eax, offset Lt_02D2
mov dword ptr [ebp-4], eax
jmp .Lt_029C
.Lt_02D3:
mov eax, offset Lt_02D4
mov dword ptr [ebp-4], eax
jmp .Lt_029C
.Lt_02D5:
mov eax, offset Lt_02D6
mov dword ptr [ebp-4], eax
jmp .Lt_029C
.Lt_02D7:
mov eax, offset Lt_02D8
mov dword ptr [ebp-4], eax
jmp .Lt_029C
.Lt_029D:
mov eax, dword ptr [ebp-8]
add eax, 4294967268
cmp eax, 22
ja .Lt_029C
mov eax, dword ptr [ebp-8]
jmp dword ptr [.LT_02D9+eax*4-112]
.LT_02D9:
.int .Lt_029F
.int .Lt_02A6
.int .Lt_02AD
.int .Lt_02B4
.int .Lt_02B6
.int .Lt_02B8
.int .Lt_02C3
.int .Lt_02C5
.int .Lt_029C
.int .Lt_029C
.int .Lt_02C7
.int .Lt_02D5
.int .Lt_02D7
.int .Lt_02BF
.int .Lt_02C1
.int .Lt_029C
.int .Lt_029C
.int .Lt_02C9
.int .Lt_02CD
.int .Lt_02CF
.int .Lt_02CB
.int .Lt_02D1
.int .Lt_02D3
.Lt_029C:
.Lt_029B:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size HGETBOPCODE, .-HGETBOPCODE
.balign 16
_EMITBOP:
.type _EMITBOP, @function
push ebp
mov ebp, esp
sub esp, 108
.Lt_02DA:
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
cmp dword ptr [ebp+8], 45
je .Lt_02DE
.Lt_02DF:
cmp dword ptr [ebp+8], 48
je .Lt_02DE
.Lt_02E0:
cmp dword ptr [ebp+8], 46
je .Lt_02DE
.Lt_02E1:
cmp dword ptr [ebp+8], 47
je .Lt_02DE
.Lt_02E2:
cmp dword ptr [ebp+8], 49
je .Lt_02DE
.Lt_02E3:
cmp dword ptr [ebp+8], 50
jne .Lt_02DD
.Lt_02DE:
mov dword ptr [ebp-36], -1
jmp .Lt_02DC
.Lt_02DD:
mov dword ptr [ebp-36], 0
.Lt_02E4:
.Lt_02DC:
cmp dword ptr [ebp+20], 0
sete al
shr eax, 1
sbb eax, eax
and eax, dword ptr [ebp-36]
je .Lt_02E6
push dword ptr [ebp+12]
call HLOADVREG
add esp, 4
push dword ptr [ebp+16]
call HLOADVREG
add esp, 4
mov eax, dword ptr [ebp+12]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+12]
push dword ptr [eax+4]
push dword ptr [ebp+16]
call _SETVREGDATATYPE
add esp, 12
push 0
push 7
call IRHLALLOCVREG
add esp, 8
mov dword ptr [ebp-28], eax
push 0
push -1
push dword ptr [ebp-28]
call HVREGTOSTR
add esp, 4
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
push 0
push 4
push offset Lt_0165
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push 0
mov eax, dword ptr [ebp+12]
push dword ptr [eax+4]
push dword ptr [ebp+8]
call HGETBOPCODE
add esp, 8
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
push 0
push 2
push offset Lt_00B2
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push -1
mov eax, dword ptr [ebp+12]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+12]
push dword ptr [eax+4]
call HEMITTYPE
add esp, 8
push eax
push -1
lea eax, [ebp-12]
push eax
mov dword ptr [ebp-84], 0
mov dword ptr [ebp-80], 0
mov dword ptr [ebp-76], 0
lea eax, [ebp-84]
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
push 2
push offset Lt_00B2
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push dword ptr [ebp+12]
call HVREGTOSTR
add esp, 4
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_00BD
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push dword ptr [ebp+16]
call HVREGTOSTR
add esp, 4
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
lea eax, [ebp-12]
push eax
call HWRITELINE
add esp, 4
push 0
push 0
call SYMBUNIQUELABEL
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
push 0
push 7
push offset Lt_02E9
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
push 0
push -1
push dword ptr [ebp-28]
call HVREGTOSTR
add esp, 4
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_00BD
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push -1
push 0
push dword ptr [ebp+24]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
push 8
push offset Lt_02EA
mov dword ptr [ebp-96], 0
mov dword ptr [ebp-92], 0
mov dword ptr [ebp-88], 0
lea eax, [ebp-96]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-12]
push eax
mov dword ptr [ebp-108], 0
mov dword ptr [ebp-104], 0
mov dword ptr [ebp-100], 0
lea eax, [ebp-108]
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
push 3
push offset Lt_00BD
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 8
push offset Lt_02EA
push -1
lea eax, [ebp-12]
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
call fb_StrConcatAssign
add esp, 20
lea eax, [ebp-12]
push eax
call HWRITELINE
add esp, 4
push dword ptr [ebp-24]
call HWRITELABEL
add esp, 4
lea eax, [ebp-24]
push eax
call fb_StrDelete
add esp, 4
lea eax, [ebp-12]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_02DB
.Lt_02E6:
.Lt_02E5:
cmp dword ptr [ebp+20], 0
je .Lt_02EE
mov eax, dword ptr [ebp+20]
mov dword ptr [ebp-28], eax
jmp .Lt_02ED
.Lt_02EE:
mov eax, dword ptr [ebp+12]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+12]
push dword ptr [eax+4]
call IRHLALLOCVREG
add esp, 8
mov dword ptr [ebp-28], eax
.Lt_02ED:
push dword ptr [ebp+12]
call HLOADVREG
add esp, 4
push dword ptr [ebp+16]
call HLOADVREG
add esp, 4
mov eax, dword ptr [ebp-28]
push dword ptr [eax+8]
mov eax, dword ptr [ebp-28]
push dword ptr [eax+4]
push dword ptr [ebp+12]
call _SETVREGDATATYPE
add esp, 12
mov eax, dword ptr [ebp-28]
push dword ptr [eax+8]
mov eax, dword ptr [ebp-28]
push dword ptr [eax+4]
push dword ptr [ebp+16]
call _SETVREGDATATYPE
add esp, 12
push 0
push -1
push dword ptr [ebp-28]
call HVREGTOSTR
add esp, 4
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
push 0
push 4
push offset Lt_0165
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push 0
mov eax, dword ptr [ebp-28]
push dword ptr [eax+4]
push dword ptr [ebp+8]
call HGETBOPCODE
add esp, 8
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
push 2
push offset Lt_00B2
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push -1
mov eax, dword ptr [ebp-28]
push dword ptr [eax+8]
mov eax, dword ptr [ebp-28]
push dword ptr [eax+4]
call HEMITTYPE
add esp, 8
push eax
push -1
lea eax, [ebp-12]
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
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
push 0
push 2
push offset Lt_00B2
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push dword ptr [ebp+12]
call HVREGTOSTR
add esp, 4
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_00BD
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push dword ptr [ebp+16]
call HVREGTOSTR
add esp, 4
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
lea eax, [ebp-12]
push eax
call HWRITELINE
add esp, 4
cmp dword ptr [ebp-36], 0
je .Lt_02F2
mov eax, dword ptr [ebp-28]
push dword ptr [eax+8]
mov eax, dword ptr [ebp-28]
push dword ptr [eax+4]
call IRHLALLOCVREG
add esp, 8
mov dword ptr [ebp-32], eax
push 0
push -1
push dword ptr [ebp-32]
call HVREGTOSTR
add esp, 4
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
push 0
push 9
push offset Lt_02F3
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 4
push offset Lt_02F4
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push dword ptr [ebp-28]
call HVREGTOSTR
add esp, 4
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 5
push offset Lt_0273
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push -1
mov eax, dword ptr [ebp-28]
push dword ptr [eax+8]
mov eax, dword ptr [ebp-28]
push dword ptr [eax+4]
call HEMITTYPE
add esp, 8
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
lea eax, [ebp-12]
push eax
call HWRITELINE
add esp, 4
push edi
push esi
mov edi, dword ptr [ebp-28]
mov esi, dword ptr [ebp-32]
mov ecx, 17
rep movsd
pop esi
pop edi
.Lt_02F2:
.Lt_02F1:
cmp dword ptr [ebp+20], 0
jne .Lt_02F7
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax], 4
jne .Lt_02F9
push edi
push esi
mov edi, dword ptr [ebp+12]
mov esi, dword ptr [ebp-28]
mov ecx, 17
rep movsd
pop esi
pop edi
jmp .Lt_02F8
.Lt_02F9:
push dword ptr [ebp-28]
push dword ptr [ebp+12]
call _EMITSTORE
add esp, 8
.Lt_02F8:
.Lt_02F7:
.Lt_02F6:
lea eax, [ebp-24]
push eax
call fb_StrDelete
add esp, 4
lea eax, [ebp-12]
push eax
call fb_StrDelete
add esp, 4
.Lt_02DB:
mov esp, ebp
pop ebp
ret
.size _EMITBOP, .-_EMITBOP
.balign 16
HBUILTINUOP:
.type HBUILTINUOP, @function
push ebp
mov ebp, esp
sub esp, 12
.Lt_02FA:
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
push dword ptr [ebp+12]
call HLOADVREG
add esp, 4
push 0
push -1
push dword ptr [ebp+16]
call HVREGTOSTR
add esp, 4
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
push 0
push 9
push offset Lt_02FC
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax+4], 14
jne .Lt_02FE
push 0
push 13
push offset Lt_02FF
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
cmp dword ptr [ebp+8], 56
jne .Lt_0301
.Lt_0302:
mov dword ptr [BUILTINS+116], -1
push 0
push 5
push offset Lt_0303
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_0300
.Lt_0301:
cmp dword ptr [ebp+8], 58
jne .Lt_0304
.Lt_0305:
mov dword ptr [BUILTINS+20], -1
push 0
push 4
push offset Lt_0306
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_0300
.Lt_0304:
cmp dword ptr [ebp+8], 60
jne .Lt_0307
.Lt_0308:
mov dword ptr [BUILTINS+36], -1
push 0
push 4
push offset Lt_0309
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_0300
.Lt_0307:
cmp dword ptr [ebp+8], 69
jne .Lt_030A
.Lt_030B:
mov dword ptr [BUILTINS+52], -1
push 0
push 4
push offset Lt_030C
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_0300
.Lt_030A:
cmp dword ptr [ebp+8], 68
jne .Lt_030D
.Lt_030E:
mov dword ptr [BUILTINS+68], -1
push 0
push 4
push offset Lt_030F
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_0300
.Lt_030D:
cmp dword ptr [ebp+8], 65
jne .Lt_0310
.Lt_0311:
mov dword ptr [BUILTINS+84], -1
push 0
push 5
push offset Lt_0312
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_0300
.Lt_0310:
cmp dword ptr [ebp+8], 70
jne .Lt_0313
.Lt_0314:
mov dword ptr [BUILTINS+100], -1
push 0
push 6
push offset Lt_0315
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_0313:
.Lt_0316:
.Lt_0300:
push 0
push 12
push offset Lt_0317
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_02FD
.Lt_02FE:
push 0
push 14
push offset Lt_0318
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
cmp dword ptr [ebp+8], 56
jne .Lt_031A
.Lt_031B:
mov dword ptr [BUILTINS+124], -1
push 0
push 5
push offset Lt_0303
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_0319
.Lt_031A:
cmp dword ptr [ebp+8], 58
jne .Lt_031C
.Lt_031D:
mov dword ptr [BUILTINS+28], -1
push 0
push 4
push offset Lt_0306
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_0319
.Lt_031C:
cmp dword ptr [ebp+8], 60
jne .Lt_031E
.Lt_031F:
mov dword ptr [BUILTINS+44], -1
push 0
push 4
push offset Lt_0309
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_0319
.Lt_031E:
cmp dword ptr [ebp+8], 69
jne .Lt_0320
.Lt_0321:
mov dword ptr [BUILTINS+60], -1
push 0
push 4
push offset Lt_030C
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_0319
.Lt_0320:
cmp dword ptr [ebp+8], 68
jne .Lt_0322
.Lt_0323:
mov dword ptr [BUILTINS+76], -1
push 0
push 4
push offset Lt_030F
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_0319
.Lt_0322:
cmp dword ptr [ebp+8], 65
jne .Lt_0324
.Lt_0325:
mov dword ptr [BUILTINS+92], -1
push 0
push 5
push offset Lt_0312
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_0319
.Lt_0324:
cmp dword ptr [ebp+8], 70
jne .Lt_0326
.Lt_0327:
mov dword ptr [BUILTINS+108], -1
push 0
push 6
push offset Lt_0315
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_0326:
.Lt_0328:
.Lt_0319:
push 0
push 13
push offset Lt_0329
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_02FD:
push 0
push -1
push dword ptr [ebp+12]
call HVREGTOSTR
add esp, 4
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 2
push offset Lt_0274
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
lea eax, [ebp-12]
push eax
call HWRITELINE
add esp, 4
lea eax, [ebp-12]
push eax
call fb_StrDelete
add esp, 4
.Lt_02FB:
mov esp, ebp
pop ebp
ret
.size HBUILTINUOP, .-HBUILTINUOP
.balign 16
_EMITUOP:
.type _EMITUOP, @function
push ebp
mov ebp, esp
sub esp, 8
.Lt_032A:
cmp dword ptr [ebp+8], 54
jne .Lt_032D
.Lt_032E:
cmp dword ptr [ebp+16], 0
je .Lt_0330
mov eax, dword ptr [ebp+16]
mov dword ptr [ebp-8], eax
jmp .Lt_032F
.Lt_0330:
mov eax, dword ptr [ebp+12]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+12]
push dword ptr [eax+4]
call IRHLALLOCVREG
add esp, 8
mov dword ptr [ebp-8], eax
.Lt_032F:
push 0
push 0
push 0
push 7
call IRHLALLOCVRIMM
add esp, 16
mov dword ptr [ebp-4], eax
push 0
push dword ptr [ebp-8]
push dword ptr [ebp+12]
push dword ptr [ebp-4]
push 29
call _EMITBOP
add esp, 20
cmp dword ptr [ebp+16], 0
jne .Lt_0332
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax], 4
jne .Lt_0334
push edi
push esi
mov edi, dword ptr [ebp+12]
mov esi, dword ptr [ebp-8]
mov ecx, 17
rep movsd
pop esi
pop edi
jmp .Lt_0333
.Lt_0334:
push dword ptr [ebp-8]
push dword ptr [ebp+12]
call _EMITSTORE
add esp, 8
.Lt_0333:
.Lt_0332:
.Lt_0331:
jmp .Lt_032C
.Lt_032D:
cmp dword ptr [ebp+8], 52
jne .Lt_0335
.Lt_0336:
push 4294967295
push 4294967295
push 0
push 7
call IRHLALLOCVRIMM
add esp, 16
mov dword ptr [ebp-4], eax
push 0
push dword ptr [ebp+16]
push dword ptr [ebp-4]
push dword ptr [ebp+12]
push 38
call _EMITBOP
add esp, 20
jmp .Lt_032C
.Lt_0335:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HBUILTINUOP
add esp, 12
.Lt_0337:
.Lt_032C:
.Lt_032B:
mov esp, ebp
pop ebp
ret
.size _EMITUOP, .-_EMITUOP
.balign 16
_EMITCONVERT:
.type _EMITCONVERT, @function
push ebp
mov ebp, esp
sub esp, 132
push ebx
.Lt_0338:
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_033A
mov dword ptr [ebp-40], 22
jmp .Lt_048F
.Lt_033A:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-40], eax
.Lt_048F:
mov eax, dword ptr [ebp-40]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax]
cmp ebx, 1
sete bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-112], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 480
je .Lt_033C
mov dword ptr [ebp-44], 22
jmp .Lt_0490
.Lt_033C:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 31
mov dword ptr [ebp-44], ebx
.Lt_0490:
mov ebx, dword ptr [ebp-44]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx]
test eax, eax
sete al
shr eax, 1
sbb eax, eax
and eax, dword ptr [ebp-112]
je .Lt_033F
mov eax, dword ptr [ebp+12]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+12]
push dword ptr [eax+4]
call IRHLALLOCVREG
add esp, 8
mov dword ptr [ebp-36], eax
push dword ptr [ebp+12]
call HLOADVREG
add esp, 4
push 0
push -1
push dword ptr [ebp-36]
call HVREGTOSTR
add esp, 4
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
push 0
push 9
push offset Lt_02FC
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax+4], 14
jne .Lt_0341
mov dword ptr [BUILTINS+132], -1
push 0
push 33
push offset Lt_0342
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_0340
.Lt_0341:
mov dword ptr [BUILTINS+140], -1
push 0
push 35
push offset Lt_0343
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_0340:
push 0
push -1
push dword ptr [ebp+12]
call HVREGTOSTR
add esp, 4
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 2
push offset Lt_0274
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
lea eax, [ebp-12]
push eax
call HWRITELINE
add esp, 4
push edi
push esi
mov edi, dword ptr [ebp+12]
mov esi, dword ptr [ebp-36]
mov ecx, 17
rep movsd
pop esi
pop edi
.Lt_033F:
.Lt_033E:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-16], ebx
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
mov dword ptr [ebp-20], eax
mov eax, dword ptr [ebp-16]
and eax, 480
je .Lt_0344
mov dword ptr [ebp-48], 22
jmp .Lt_0492
.Lt_0344:
mov eax, dword ptr [ebp-16]
and eax, 31
mov dword ptr [ebp-48], eax
.Lt_0492:
mov eax, dword ptr [ebp-48]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax], 1
jne .Lt_0347
mov eax, dword ptr [ebp-20]
and eax, 480
je .Lt_0348
mov dword ptr [ebp-112], 22
jmp .Lt_0493
.Lt_0348:
mov eax, dword ptr [ebp-20]
and eax, 31
mov dword ptr [ebp-112], eax
.Lt_0493:
mov eax, dword ptr [ebp-112]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax], 1
jne .Lt_034B
mov eax, dword ptr [ebp-16]
and eax, 480
je .Lt_034C
mov dword ptr [ebp-116], 22
jmp .Lt_0494
.Lt_034C:
mov eax, dword ptr [ebp-16]
and eax, 31
mov dword ptr [ebp-116], eax
.Lt_0494:
mov eax, dword ptr [ebp-116]
imul eax, 28
mov dword ptr [ebp-124], eax
mov eax, dword ptr [ebp-20]
and eax, 480
je .Lt_034E
mov dword ptr [ebp-120], 22
jmp .Lt_0495
.Lt_034E:
mov eax, dword ptr [ebp-20]
and eax, 31
mov dword ptr [ebp-120], eax
.Lt_0495:
mov eax, dword ptr [ebp-120]
imul eax, 28
mov ebx, dword ptr [ebp-124]
mov ecx, dword ptr [SYMB_DTYPETB+eax+4]
cmp dword ptr [SYMB_DTYPETB+ebx+4], ecx
jge .Lt_0351
mov ecx, offset Lt_0352
mov dword ptr [ebp-32], ecx
jmp .Lt_0350
.Lt_0351:
mov ecx, offset Lt_0353
mov dword ptr [ebp-32], ecx
.Lt_0350:
jmp .Lt_034A
.Lt_034B:
mov ecx, dword ptr [ebp-20]
and ecx, 480
je .Lt_0354
mov dword ptr [ebp-116], 22
jmp .Lt_0497
.Lt_0354:
mov ecx, dword ptr [ebp-20]
and ecx, 31
mov dword ptr [ebp-116], ecx
.Lt_0497:
mov ecx, dword ptr [ebp-116]
imul ecx, 28
cmp dword ptr [SYMB_DTYPETB+ecx+8], 0
je .Lt_0357
mov ecx, offset Lt_0358
mov dword ptr [ebp-32], ecx
jmp .Lt_0356
.Lt_0357:
mov ecx, offset Lt_0359
mov dword ptr [ebp-32], ecx
.Lt_0356:
.Lt_034A:
jmp .Lt_0346
.Lt_0347:
mov ecx, dword ptr [ebp-20]
and ecx, 480
je .Lt_035A
mov dword ptr [ebp-112], 22
jmp .Lt_0498
.Lt_035A:
mov ecx, dword ptr [ebp-20]
and ecx, 31
mov dword ptr [ebp-112], ecx
.Lt_0498:
mov ecx, dword ptr [ebp-112]
imul ecx, 28
cmp dword ptr [SYMB_DTYPETB+ecx], 1
jne .Lt_035D
mov ecx, dword ptr [ebp-16]
and ecx, 480
je .Lt_035E
mov dword ptr [ebp-116], 22
jmp .Lt_0499
.Lt_035E:
mov ecx, dword ptr [ebp-16]
and ecx, 31
mov dword ptr [ebp-116], ecx
.Lt_0499:
mov ecx, dword ptr [ebp-116]
imul ecx, 28
cmp dword ptr [SYMB_DTYPETB+ecx+8], 0
je .Lt_0361
mov ecx, offset Lt_0362
mov dword ptr [ebp-32], ecx
jmp .Lt_0360
.Lt_0361:
mov ecx, offset Lt_0363
mov dword ptr [ebp-32], ecx
.Lt_0360:
jmp .Lt_035C
.Lt_035D:
mov ecx, dword ptr [ebp-16]
and ecx, 480
test ecx, ecx
je .Lt_0365
mov ecx, dword ptr [ebp-20]
and ecx, 480
test ecx, ecx
je .Lt_0367
mov ecx, offset Lt_0368
mov dword ptr [ebp-32], ecx
jmp .Lt_0366
.Lt_0367:
mov ecx, offset Lt_0369
mov dword ptr [ebp-32], ecx
.Lt_0366:
jmp .Lt_0364
.Lt_0365:
mov ecx, dword ptr [ebp-20]
and ecx, 480
test ecx, ecx
je .Lt_036B
mov ecx, offset Lt_036C
mov dword ptr [ebp-32], ecx
jmp .Lt_036A
.Lt_036B:
mov ecx, dword ptr [ebp-16]
and ecx, 480
je .Lt_036D
mov dword ptr [ebp-116], 22
jmp .Lt_049A
.Lt_036D:
mov ecx, dword ptr [ebp-16]
and ecx, 31
mov dword ptr [ebp-116], ecx
.Lt_049A:
mov ecx, dword ptr [ebp-116]
imul ecx, 28
mov dword ptr [ebp-124], ecx
mov ecx, dword ptr [ebp-20]
and ecx, 480
je .Lt_036F
mov dword ptr [ebp-120], 22
jmp .Lt_049B
.Lt_036F:
mov ecx, dword ptr [ebp-20]
and ecx, 31
mov dword ptr [ebp-120], ecx
.Lt_049B:
mov ecx, dword ptr [ebp-120]
imul ecx, 28
mov ebx, dword ptr [ebp-124]
mov eax, dword ptr [SYMB_DTYPETB+ecx+4]
cmp dword ptr [SYMB_DTYPETB+ebx+4], eax
jne .Lt_0372
mov eax, offset Lt_0368
mov dword ptr [ebp-32], eax
jmp .Lt_0371
.Lt_0372:
mov eax, dword ptr [ebp-16]
and eax, 480
je .Lt_0373
mov dword ptr [ebp-124], 22
jmp .Lt_049D
.Lt_0373:
mov eax, dword ptr [ebp-16]
and eax, 31
mov dword ptr [ebp-124], eax
.Lt_049D:
mov eax, dword ptr [ebp-124]
imul eax, 28
mov dword ptr [ebp-132], eax
mov eax, dword ptr [ebp-20]
and eax, 480
je .Lt_0375
mov dword ptr [ebp-128], 22
jmp .Lt_049E
.Lt_0375:
mov eax, dword ptr [ebp-20]
and eax, 31
mov dword ptr [ebp-128], eax
.Lt_049E:
mov eax, dword ptr [ebp-128]
imul eax, 28
mov ebx, dword ptr [ebp-132]
mov ecx, dword ptr [SYMB_DTYPETB+eax+4]
cmp dword ptr [SYMB_DTYPETB+ebx+4], ecx
jge .Lt_0378
mov ecx, offset Lt_0379
mov dword ptr [ebp-32], ecx
jmp .Lt_0377
.Lt_0378:
mov ecx, dword ptr [ebp-16]
and ecx, 480
je .Lt_037A
mov dword ptr [ebp-132], 22
jmp .Lt_04A0
.Lt_037A:
mov ecx, dword ptr [ebp-16]
and ecx, 31
mov dword ptr [ebp-132], ecx
.Lt_04A0:
mov ecx, dword ptr [ebp-132]
imul ecx, 28
cmp dword ptr [SYMB_DTYPETB+ecx+8], 0
je .Lt_037D
mov ecx, offset Lt_037E
mov dword ptr [ebp-32], ecx
jmp .Lt_037C
.Lt_037D:
mov ecx, offset Lt_037F
mov dword ptr [ebp-32], ecx
.Lt_037C:
.Lt_0377:
.Lt_0371:
.Lt_036A:
.Lt_0364:
.Lt_035C:
.Lt_0346:
mov ecx, dword ptr [ebp+8]
cmp dword ptr [ecx], 4
jne .Lt_0381
mov ecx, dword ptr [ebp+8]
mov dword ptr [ebp-36], ecx
jmp .Lt_0380
.Lt_0381:
mov ecx, dword ptr [ebp+8]
push dword ptr [ecx+8]
mov ecx, dword ptr [ebp+8]
push dword ptr [ecx+4]
call IRHLALLOCVREG
add esp, 8
mov dword ptr [ebp-36], eax
.Lt_0380:
push dword ptr [ebp+12]
call HLOADVREG
add esp, 4
mov eax, dword ptr [ebp+12]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+12]
push dword ptr [eax+4]
push dword ptr [ebp+12]
call _SETVREGDATATYPE
add esp, 12
push 0
push -1
push 2
push offset Lt_00B2
push -1
push 0
push dword ptr [ebp-32]
push -1
push 4
push offset Lt_0165
push -1
push dword ptr [ebp-36]
call HVREGTOSTR
add esp, 4
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
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
push 0
push -1
push -1
mov eax, dword ptr [ebp+12]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+12]
push dword ptr [eax+4]
call HEMITTYPE
add esp, 8
push eax
push -1
lea eax, [ebp-12]
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
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
push 0
push 2
push offset Lt_00B2
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push dword ptr [ebp+12]
call HVREGTOSTR
add esp, 4
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 5
push offset Lt_0273
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+4]
call HEMITTYPE
add esp, 8
push eax
push -1
lea eax, [ebp-12]
push eax
mov dword ptr [ebp-108], 0
mov dword ptr [ebp-104], 0
mov dword ptr [ebp-100], 0
lea eax, [ebp-108]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-12]
push eax
call HWRITELINE
add esp, 4
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax]
cmp ecx, 4
sete cl
shr ecx, 1
sbb ecx, ecx
test ecx, ecx
jne .Lt_0388
push dword ptr [ebp-36]
push dword ptr [ebp+8]
call _EMITSTORE
add esp, 8
.Lt_0388:
.Lt_0387:
lea ecx, [ebp-12]
push ecx
call fb_StrDelete
add esp, 4
.Lt_0339:
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
sub esp, 60
push ebx
.Lt_0389:
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
push dword ptr [ebp+12]
call HLOADVREG
add esp, 4
mov eax, dword ptr [ebp+8]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+4]
push dword ptr [ebp+12]
call _SETVREGDATATYPE
add esp, 12
push dword ptr [ebp+8]
call HPREPAREADDRESS
add esp, 4
push 0
push 7
push offset Lt_021F
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
push 0
push -1
push -1
push 2
push offset Lt_00B2
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 31
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+4]
and ecx, 480
add ecx, -32
or ebx, ecx
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ecx+4]
and eax, 261632
sar eax, 1
and eax, 261632
or ebx, eax
push ebx
call HEMITTYPE
add esp, 8
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
call fb_StrAssign
add esp, 20
push 0
push -1
push dword ptr [ebp+12]
call HVREGTOSTR
add esp, 4
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_00BD
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push -1
push 2
push offset Lt_00B2
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+4]
call HEMITTYPE
add esp, 8
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
call fb_StrAssign
add esp, 20
push 0
push -1
push dword ptr [ebp+8]
call HVREGTOSTR
add esp, 4
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
lea eax, [ebp-12]
push eax
call HWRITELINE
add esp, 4
lea eax, [ebp-12]
push eax
call fb_StrDelete
add esp, 4
.Lt_038A:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITSTORE, .-_EMITSTORE
.balign 16
_EMITSPILLREGS:
.type _EMITSPILLREGS, @function
.Lt_038F:
.Lt_0390:
ret
.size _EMITSPILLREGS, .-_EMITSPILLREGS
.balign 16
_EMITLOAD:
.type _EMITLOAD, @function
push ebp
mov ebp, esp
.Lt_0391:
.Lt_0392:
mov esp, ebp
pop ebp
ret
.size _EMITLOAD, .-_EMITLOAD
.balign 16
_EMITLOADRES:
.type _EMITLOADRES, @function
push ebp
mov ebp, esp
sub esp, 48
.Lt_0393:
push dword ptr [ebp+8]
call HLOADVREG
add esp, 4
mov eax, dword ptr [ebp+12]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+12]
push dword ptr [eax+4]
push dword ptr [ebp+8]
call _SETVREGDATATYPE
add esp, 12
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
push 0
push -1
push -1
push dword ptr [ebp+8]
call HVREGTOSTR
add esp, 4
push eax
push -1
push 2
push offset Lt_00B2
push -1
push -1
mov eax, dword ptr [ebp+12]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+12]
push dword ptr [eax+4]
call HEMITTYPE
add esp, 8
push eax
push 5
push offset Lt_0395
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
push -1
lea eax, [ebp-48]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-48]
push eax
call HWRITELINE
add esp, 4
lea eax, [ebp-48]
push eax
call fb_StrDelete
add esp, 4
.Lt_0394:
mov esp, ebp
pop ebp
ret
.size _EMITLOADRES, .-_EMITLOADRES
.balign 16
_EMITPUSHARG:
.type _EMITPUSHARG, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_039A:
lea eax, [CTX+4]
push eax
call LISTNEWNODE
add esp, 4
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [ebp+12]
mov dword ptr [eax], ebx
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebp+24]
mov dword ptr [ebx+4], eax
.Lt_039B:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITPUSHARG, .-_EMITPUSHARG
.balign 16
_EMITADDR:
.type _EMITADDR, @function
push ebp
mov ebp, esp
sub esp, 12
.Lt_039C:
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
cmp dword ptr [ebp+8], 22
jne .Lt_039F
.Lt_03A0:
push dword ptr [ebp+12]
call HPREPAREADDRESS
add esp, 4
mov eax, dword ptr [ebp+16]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+16]
push dword ptr [eax+4]
push dword ptr [ebp+12]
call _SETVREGDATATYPE
add esp, 12
jmp .Lt_039E
.Lt_039F:
cmp dword ptr [ebp+8], 76
jne .Lt_03A1
.Lt_03A2:
push dword ptr [ebp+12]
call HLOADVREG
add esp, 4
.Lt_03A1:
.Lt_039E:
push edi
push esi
mov edi, dword ptr [ebp+16]
mov esi, dword ptr [ebp+12]
mov ecx, 17
rep movsd
pop esi
pop edi
lea eax, [ebp-12]
push eax
call fb_StrDelete
add esp, 4
.Lt_039D:
mov esp, ebp
pop ebp
ret
.size _EMITADDR, .-_EMITADDR
.balign 16
HDOCALL:
.type HDOCALL, @function
push ebp
mov ebp, esp
sub esp, 80
push ebx
.Lt_03A3:
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
cmp dword ptr [ebp+20], 0
jne .Lt_03A6
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+24]
and ebx, 511
test ebx, ebx
je .Lt_03A8
mov ebx, dword ptr [ebp+12]
push dword ptr [ebx+88]
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+84]
and eax, 511
push eax
call IRHLALLOCVREG
add esp, 8
mov dword ptr [ebp+20], eax
.Lt_03A8:
.Lt_03A7:
.Lt_03A6:
.Lt_03A5:
cmp dword ptr [ebp+20], 0
je .Lt_03AA
mov eax, dword ptr [ebp+20]
cmp dword ptr [eax], 4
jne .Lt_03AC
mov eax, dword ptr [ebp+20]
mov dword ptr [ebp-28], eax
jmp .Lt_03AB
.Lt_03AC:
mov eax, dword ptr [ebp+20]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+20]
push dword ptr [eax+4]
call IRHLALLOCVREG
add esp, 8
mov dword ptr [ebp-28], eax
.Lt_03AB:
push 0
push -1
push dword ptr [ebp-28]
call HVREGTOSTR
add esp, 4
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
push 0
push 9
push offset Lt_02FC
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push dword ptr [ebp+12]
call HEMITPROCCALLCONV
add esp, 4
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push -1
push 2
push offset Lt_00B2
push -1
mov eax, dword ptr [ebp-28]
push dword ptr [eax+8]
mov eax, dword ptr [ebp-28]
push dword ptr [eax+4]
call HEMITTYPE
add esp, 8
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
lea eax, [ebp-12]
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
jmp .Lt_03A9
.Lt_03AA:
push 0
push 6
push offset Lt_03AF
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
push 0
push -1
push dword ptr [ebp+12]
call HEMITPROCCALLCONV
add esp, 4
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 6
push offset Lt_03B0
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_03A9:
push 0
push -1
push -1
push 3
push offset Lt_00B4
push 0
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
lea eax, [CTX+4]
push eax
call LISTGETTAIL
add esp, 4
mov dword ptr [ebp-16], eax
.Lt_03B3:
cmp dword ptr [ebp-16], 0
je .Lt_03B5
mov eax, dword ptr [ebp-16]
mov ebx, dword ptr [eax+4]
cmp ebx, dword ptr [ebp+24]
sete al
shr eax, 1
sbb eax, eax
test eax, eax
setne bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-56], ebx
jmp .Lt_04A4
.Lt_03B5:
mov dword ptr [ebp-56], 0
.Lt_04A4:
cmp dword ptr [ebp-56], 0
je .Lt_03B4
push dword ptr [ebp-16]
call LISTGETPREV
add esp, 4
mov dword ptr [ebp-20], eax
mov eax, dword ptr [ebp-16]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-24], ebx
push dword ptr [ebp-24]
call HLOADVREG
add esp, 4
push 0
push -1
push -1
mov ebx, dword ptr [ebp-24]
push dword ptr [ebx+8]
mov ebx, dword ptr [ebp-24]
push dword ptr [ebx+4]
call HEMITTYPE
add esp, 8
push eax
push -1
lea eax, [ebp-12]
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
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
push 0
push 2
push offset Lt_00B2
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push dword ptr [ebp-24]
call HVREGTOSTR
add esp, 4
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push dword ptr [ebp-16]
lea eax, [CTX+4]
push eax
call LISTDELNODE
add esp, 8
cmp dword ptr [ebp-20], 0
je .Lt_03B9
mov eax, dword ptr [ebp-20]
mov ebx, dword ptr [ebp+24]
cmp dword ptr [eax+4], ebx
jne .Lt_03BB
push 0
push 3
push offset Lt_00BD
push -1
lea ebx, [ebp-12]
push ebx
call fb_StrConcatAssign
add esp, 20
.Lt_03BB:
.Lt_03BA:
.Lt_03B9:
.Lt_03B8:
mov eax, dword ptr [ebp-20]
mov dword ptr [ebp-16], eax
jmp .Lt_03B3
.Lt_03B4:
push 0
push 3
push offset Lt_00CD
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
lea eax, [ebp-12]
push eax
call HWRITELINE
add esp, 4
cmp dword ptr [ebp+20], 0
je .Lt_03BD
mov eax, dword ptr [ebp+20]
mov ebx, dword ptr [eax]
cmp ebx, 4
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_03BF
push dword ptr [ebp-28]
push dword ptr [ebp+20]
call _EMITSTORE
add esp, 8
.Lt_03BF:
.Lt_03BE:
.Lt_03BD:
.Lt_03BC:
lea ebx, [ebp-12]
push ebx
call fb_StrDelete
add esp, 4
.Lt_03A4:
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
.Lt_03C0:
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push dword ptr [ebp+8]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
call HDOCALL
add esp, 20
.Lt_03C1:
mov esp, ebp
pop ebp
ret
.size _EMITCALL, .-_EMITCALL
.balign 16
_EMITCALLPTR:
.type _EMITCALLPTR, @function
push ebp
mov ebp, esp
sub esp, 12
.Lt_03C2:
push dword ptr [ebp+12]
call HLOADVREG
add esp, 4
push dword ptr [ebp+24]
push dword ptr [ebp+16]
push dword ptr [ebp+20]
push dword ptr [ebp+8]
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
push 0
push -1
push dword ptr [ebp+12]
call HVREGTOSTR
add esp, 4
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-12]
call HDOCALL
add esp, 20
lea eax, [ebp-12]
push eax
call fb_StrDelete
add esp, 4
.Lt_03C3:
mov esp, ebp
pop ebp
ret
.size _EMITCALLPTR, .-_EMITCALLPTR
.balign 16
_EMITJUMPPTR:
.type _EMITJUMPPTR, @function
push ebp
mov ebp, esp
sub esp, 24
.Lt_03C5:
push dword ptr [ebp+8]
call HLOADVREG
add esp, 4
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
push 0
push -1
push -1
push dword ptr [ebp+8]
call HVREGTOSTR
add esp, 4
push eax
push 7
push offset Lt_03C7
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
add esp, 4
lea eax, [ebp-24]
push eax
call fb_StrDelete
add esp, 4
.Lt_03C6:
mov esp, ebp
pop ebp
ret
.size _EMITJUMPPTR, .-_EMITJUMPPTR
.balign 16
_EMITBRANCH:
.type _EMITBRANCH, @function
push ebp
mov ebp, esp
sub esp, 24
.Lt_03CA:
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
push 0
push -1
push 0
push dword ptr [ebp+12]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
push 11
push offset Lt_0297
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
add esp, 4
lea eax, [ebp-24]
push eax
call fb_StrDelete
add esp, 4
call SYMBUNIQUELABEL
push eax
call HWRITELABEL
add esp, 4
.Lt_03CB:
mov esp, ebp
pop ebp
ret
.size _EMITBRANCH, .-_EMITBRANCH
.balign 16
_EMITJMPTB:
.type _EMITJMPTB, @function
push ebp
mov ebp, esp
sub esp, 140
push ebx
.Lt_03CE:
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
push dword ptr [ebp+8]
call HLOADVREG
add esp, 4
push 0
push 8
push offset Lt_03D0
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
push 0
push -1
push -1
push 2
push offset Lt_00B2
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+4]
call HEMITTYPE
add esp, 8
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
call fb_StrAssign
add esp, 20
push 0
push -1
push dword ptr [ebp+8]
call HVREGTOSTR
add esp, 4
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_00BD
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push -1
push 2
push offset Lt_00B2
push -1
push 0
push dword ptr [ebp+28]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
push 8
push offset Lt_02EA
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
push 0
push 2
push offset Lt_0104
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
lea eax, [ebp-12]
push eax
call HWRITELINE
add esp, 4
inc dword ptr [CTX]
mov dword ptr [ebp-88], 0
mov eax, dword ptr [ebp+24]
dec eax
mov dword ptr [ebp-92], eax
jmp .Lt_03D7
.Lt_03DA:
push 0
push -1
push 3
push offset Lt_00BD
push -1
push -1
mov eax, dword ptr [ebp-88]
sal eax, 3
mov ebx, dword ptr [ebp+16]
add ebx, eax
push dword ptr [ebx+4]
push dword ptr [ebx]
call fb_ULongintToStr
add esp, 8
push eax
push 5
push offset Lt_03DB
mov dword ptr [ebp-104], 0
mov dword ptr [ebp-100], 0
mov dword ptr [ebp-96], 0
lea eax, [ebp-104]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-116], 0
mov dword ptr [ebp-112], 0
mov dword ptr [ebp-108], 0
lea eax, [ebp-116]
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
mov eax, dword ptr [ebp-88]
sal eax, 2
mov ebx, dword ptr [ebp+20]
add ebx, eax
push dword ptr [ebx]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
push 8
push offset Lt_02EA
mov dword ptr [ebp-128], 0
mov dword ptr [ebp-124], 0
mov dword ptr [ebp-120], 0
lea eax, [ebp-128]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-12]
push eax
mov dword ptr [ebp-140], 0
mov dword ptr [ebp-136], 0
mov dword ptr [ebp-132], 0
lea eax, [ebp-140]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-12]
push eax
call HWRITELINE
add esp, 4
.Lt_03D8:
inc dword ptr [ebp-88]
.Lt_03D7:
mov eax, dword ptr [ebp-92]
cmp dword ptr [ebp-88], eax
jle .Lt_03DA
.Lt_03D9:
dec dword ptr [CTX]
mov dword ptr [ebp-84], 0
mov dword ptr [ebp-80], 0
mov dword ptr [ebp-76], 0
push 0
push 2
push offset Lt_0105
push -1
lea eax, [ebp-84]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-84]
push eax
call HWRITELINE
add esp, 4
lea eax, [ebp-84]
push eax
call fb_StrDelete
add esp, 4
lea eax, [ebp-12]
push eax
call fb_StrDelete
add esp, 4
.Lt_03CF:
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
sub esp, 12
.Lt_03E1:
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
push 0
push 11
push offset Lt_03E3
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp+12]
call HLOADVREG
add esp, 4
push dword ptr [ebp+16]
call HLOADVREG
add esp, 4
cmp dword ptr [ebp+8], 106
jne .Lt_03E5
.Lt_03E6:
mov dword ptr [BUILTINS+4], -1
push 0
push 33
push dword ptr [ebp+12]
call _SETVREGDATATYPE
add esp, 12
push 0
push 7
push dword ptr [ebp+16]
call _SETVREGDATATYPE
add esp, 12
push 0
push 24
push offset Lt_03E7
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 5
push offset Lt_03E8
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push dword ptr [ebp+12]
call HVREGTOSTR
add esp, 4
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_00BD
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 7
push offset Lt_03E9
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 5
push offset Lt_03DB
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push dword ptr [ebp+16]
call HVREGTOSTR
add esp, 4
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_00BD
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_03E4
.Lt_03E5:
cmp dword ptr [ebp+8], 104
jne .Lt_03EA
.Lt_03EB:
mov dword ptr [BUILTINS+12], -1
push 0
push 33
push dword ptr [ebp+12]
call _SETVREGDATATYPE
add esp, 12
push 0
push 33
push dword ptr [ebp+16]
call _SETVREGDATATYPE
add esp, 12
push 0
push 30
push offset Lt_03EC
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 5
push offset Lt_03E8
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push dword ptr [ebp+12]
call HVREGTOSTR
add esp, 4
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_00BD
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 5
push offset Lt_03E8
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push dword ptr [ebp+16]
call HVREGTOSTR
add esp, 4
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_00BD
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 5
push offset Lt_03DB
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push dword ptr [ebp+24]
push dword ptr [ebp+20]
call fb_ULongintToStr
add esp, 8
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_00BD
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_03EA:
.Lt_03E4:
push 0
push 18
push offset Lt_03ED
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
lea eax, [ebp-12]
push eax
call HWRITELINE
add esp, 4
lea eax, [ebp-12]
push eax
call fb_StrDelete
add esp, 4
.Lt_03E2:
mov esp, ebp
pop ebp
ret
.size _EMITMEM, .-_EMITMEM
.balign 16
_EMITDECL:
.type _EMITDECL, @function
push ebp
mov ebp, esp
.Lt_03EE:
push dword ptr [ebp+8]
call HEMITVARIABLE
add esp, 4
.Lt_03EF:
mov esp, ebp
pop ebp
ret
.size _EMITDECL, .-_EMITDECL
.balign 16
_EMITDBG:
.type _EMITDBG, @function
push ebp
mov ebp, esp
sub esp, 60
.Lt_03F0:
cmp dword ptr [ebp+8], 108
jne .Lt_03F3
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
push 0
push -1
push 2
push offset Lt_011B
push -1
push -1
push offset Lt_03F6
push offset Lt_011E
lea eax, [ENV+244]
push eax
call HREPLACE
add esp, 12
push eax
push -1
push 3
push offset Lt_03F5
push -1
push -1
push dword ptr [ebp+16]
call fb_IntToStr
add esp, 4
push eax
push 7
push offset Lt_03F4
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
add esp, 4
lea eax, [ebp-60]
push eax
call fb_StrDelete
add esp, 4
mov eax, dword ptr [ebp+16]
mov dword ptr [CTX+36], eax
.Lt_03F3:
.Lt_03F2:
.Lt_03F1:
mov esp, ebp
pop ebp
ret
.size _EMITDBG, .-_EMITDBG
.balign 16
_EMITCOMMENT:
.type _EMITCOMMENT, @function
push ebp
mov ebp, esp
sub esp, 24
.Lt_03FC:
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
push 0
push -1
push 0
push dword ptr [ebp+8]
push 3
push offset Lt_03FE
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
add esp, 4
lea eax, [ebp-24]
push eax
call fb_StrDelete
add esp, 4
.Lt_03FD:
mov esp, ebp
pop ebp
ret
.size _EMITCOMMENT, .-_EMITCOMMENT
.balign 16
_EMITASMBEGIN:
.type _EMITASMBEGIN, @function
.Lt_0401:
push 0
push 1
push offset Lt_0000
push -1
lea eax, [CTX+104]
push eax
call fb_StrAssign
add esp, 20
.Lt_0402:
ret
.size _EMITASMBEGIN, .-_EMITASMBEGIN
.balign 16
_EMITASMTEXT:
.type _EMITASMTEXT, @function
push ebp
mov ebp, esp
sub esp, 12
.Lt_0403:
push 0
push -1
push 0
push dword ptr [ebp+8]
push -1
lea eax, [CTX+104]
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
lea eax, [CTX+104]
push eax
call fb_StrAssign
add esp, 20
.Lt_0404:
mov esp, ebp
pop ebp
ret
.size _EMITASMTEXT, .-_EMITASMTEXT
.balign 16
_EMITASMSYMB:
.type _EMITASMSYMB, @function
push ebp
mov ebp, esp
sub esp, 36
.Lt_0406:
push 0
push -1
push 0
push dword ptr [ebp+8]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
push -1
lea eax, [CTX+104]
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
lea eax, [CTX+104]
push eax
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+48], 0
jl .Lt_040A
jg .Lt_04A8
cmp dword ptr [eax+44], 0
jbe .Lt_040A
.Lt_04A8:
push 0
push -1
push -1
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+48]
push dword ptr [eax+44]
call fb_LongintToStr
add esp, 8
push eax
push 2
push offset Lt_040B
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ebp-24]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [CTX+104]
push eax
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
lea eax, [ebp-36]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [CTX+104]
push eax
call fb_StrAssign
add esp, 20
jmp .Lt_0409
.Lt_040A:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+48], 0
jg .Lt_040E
jl .Lt_04A9
cmp dword ptr [eax+44], 0
jae .Lt_040E
.Lt_04A9:
push 0
push -1
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+48]
push dword ptr [eax+44]
call fb_LongintToStr
add esp, 8
push eax
push -1
lea eax, [CTX+104]
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
lea eax, [CTX+104]
push eax
call fb_StrAssign
add esp, 20
.Lt_040E:
.Lt_0409:
.Lt_0407:
mov esp, ebp
pop ebp
ret
.size _EMITASMSYMB, .-_EMITASMSYMB
.balign 16
_EMITASMEND:
.type _EMITASMEND, @function
.Lt_0410:
lea eax, [CTX+104]
push eax
call HWRITELINE
add esp, 4
.Lt_0411:
ret
.size _EMITASMEND, .-_EMITASMEND
.balign 16
_EMITVARINIBEGIN:
.type _EMITVARINIBEGIN, @function
push ebp
mov ebp, esp
.Lt_0412:
push 0
push 0
push dword ptr [ebp+8]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
push -1
lea eax, [CTX+40]
push eax
call fb_StrAssign
add esp, 20
push 0
push 11
push offset Lt_0414
push -1
lea eax, [CTX+40]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push dword ptr [ebp+8]
call HEMITSYMTYPE
add esp, 4
push eax
push -1
lea eax, [CTX+40]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 2
push offset Lt_00B2
push -1
lea eax, [CTX+40]
push eax
call fb_StrConcatAssign
add esp, 20
mov dword ptr [CTX+52], 0
.Lt_0413:
mov esp, ebp
pop ebp
ret
.size _EMITVARINIBEGIN, .-_EMITVARINIBEGIN
.balign 16
_EMITVARINIEND:
.type _EMITVARINIEND, @function
push ebp
mov ebp, esp
.Lt_0415:
lea eax, [CTX+40]
push eax
call HWRITELINE
add esp, 4
push 0
push 1
push offset Lt_0000
push -1
lea eax, [CTX+40]
push eax
call fb_StrAssign
add esp, 20
.Lt_0416:
mov esp, ebp
pop ebp
ret
.size _EMITVARINIEND, .-_EMITVARINIEND
.balign 16
HVARINIELEMENTTYPE:
.type HVARINIELEMENTTYPE, @function
push ebp
mov ebp, esp
.Lt_0417:
cmp dword ptr [CTX+52], 0
jle .Lt_041A
push 0
push -1
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HEMITTYPE
add esp, 8
push eax
push -1
lea eax, [CTX+40]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 2
push offset Lt_00B2
push -1
lea eax, [CTX+40]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_041A:
.Lt_0419:
.Lt_0418:
mov esp, ebp
pop ebp
ret
.size HVARINIELEMENTTYPE, .-HVARINIELEMENTTYPE
.balign 16
HVARINISEPARATOR:
.type HVARINISEPARATOR, @function
.Lt_041B:
cmp dword ptr [CTX+52], 0
jle .Lt_041E
push 0
push 3
push offset Lt_00BD
push -1
lea eax, [CTX+40]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_041E:
.Lt_041D:
.Lt_041C:
ret
.size HVARINISEPARATOR, .-HVARINISEPARATOR
.balign 16
_EMITVARINII:
.type _EMITVARINII, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
.Lt_041F:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+24]
and ebx, 511
mov dword ptr [ebp-4], ebx
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+28]
push dword ptr [ebp-4]
call HVARINIELEMENTTYPE
add esp, 8
mov ebx, dword ptr [ebp-4]
and ebx, 480
je .Lt_0421
mov dword ptr [ebp-8], 22
jmp .Lt_04AA
.Lt_0421:
mov ebx, dword ptr [ebp-4]
and ebx, 31
mov dword ptr [ebp-8], ebx
.Lt_04AA:
mov ebx, dword ptr [ebp-8]
imul ebx, 28
cmp dword ptr [SYMB_DTYPETB+ebx+4], 8
jne .Lt_0424
push 0
push -1
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call HEMITLONG
add esp, 8
push eax
push -1
lea eax, [CTX+40]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_0423
.Lt_0424:
push 0
push -1
push -1
mov eax, dword ptr [ebp+12]
push eax
mov eax, dword ptr [ebp+8]
push dword ptr [eax+28]
push dword ptr [ebp-4]
call HEMITINT
add esp, 12
push eax
push -1
lea eax, [CTX+40]
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
lea eax, [CTX+40]
push eax
call fb_StrAssign
add esp, 20
.Lt_0423:
call HVARINISEPARATOR
.Lt_0420:
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
sub esp, 4
push ebx
.Lt_0426:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+24]
and ebx, 511
mov dword ptr [ebp-4], ebx
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+28]
push dword ptr [ebp-4]
call HVARINIELEMENTTYPE
add esp, 8
push 0
push -1
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call HEMITFLOAT
add esp, 8
push eax
push -1
lea eax, [CTX+40]
push eax
call fb_StrConcatAssign
add esp, 20
call HVARINISEPARATOR
.Lt_0427:
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
sub esp, 48
.Lt_0428:
push 0
push -1
push -1
push -1
push dword ptr [ebp+20]
push dword ptr [ebp+16]
call fb_LongintToStr
add esp, 8
push eax
push -1
push 4
push offset Lt_042B
push -1
push 0
push dword ptr [ebp+12]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
push 13
push offset Lt_042A
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
push -1
lea eax, [CTX+40]
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
lea eax, [CTX+40]
push eax
call fb_StrAssign
add esp, 20
call HVARINISEPARATOR
.Lt_0429:
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
.Lt_0430:
cmp dword ptr [CTX+52], 0
jle .Lt_0433
push 0
push -1
mov eax, dword ptr [ebp+8]
push eax
call HEMITSTRLITTYPE
add esp, 4
push eax
push -1
lea eax, [CTX+40]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 2
push offset Lt_00B2
push -1
lea eax, [CTX+40]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_0433:
.Lt_0432:
push 0
push 3
push offset Lt_0434
push -1
lea eax, [CTX+40]
push eax
call fb_StrConcatAssign
add esp, 20
mov ebx, dword ptr [ebp+20]
mov eax, dword ptr [ebp+24]
add ebx, 1
adc eax, 0
mov ecx, ebx
push ecx
push dword ptr [ebp+16]
call HUNESCAPE
add esp, 4
push eax
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ebp+12]
add ecx, 1
adc eax, 0
mov ebx, ecx
push ebx
lea ebx, [CTX+40]
push ebx
call HBUILDSTRLIT
add esp, 16
push 0
push 2
push offset Lt_011B
push -1
lea ebx, [CTX+40]
push ebx
call fb_StrConcatAssign
add esp, 20
call HVARINISEPARATOR
.Lt_0431:
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
push ebx
.Lt_0435:
cmp dword ptr [CTX+52], 0
jle .Lt_0438
push 0
push -1
mov eax, dword ptr [ebp+8]
push eax
call HEMITSTRLITTYPE
add esp, 4
push eax
push -1
lea eax, [CTX+40]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 2
push offset Lt_00B2
push -1
lea eax, [CTX+40]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_0438:
.Lt_0437:
push 0
push 3
push offset Lt_0434
push -1
lea eax, [CTX+40]
push eax
call fb_StrConcatAssign
add esp, 20
mov ebx, dword ptr [ebp+20]
mov eax, dword ptr [ebp+24]
add ebx, 1
adc eax, 0
mov ecx, ebx
push ecx
push dword ptr [ebp+16]
call HUNESCAPEW
add esp, 4
push eax
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ebp+12]
add ecx, 1
adc eax, 0
mov ebx, ecx
push ebx
lea ebx, [CTX+40]
push ebx
call HBUILDWSTRLIT
add esp, 16
push 0
push 2
push offset Lt_011B
push -1
lea ebx, [CTX+40]
push ebx
call fb_StrConcatAssign
add esp, 20
call HVARINISEPARATOR
.Lt_0436:
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
.Lt_0439:
.Lt_043A:
mov esp, ebp
pop ebp
ret
.size _EMITVARINIPAD, .-_EMITVARINIPAD
.balign 16
_EMITVARINISCOPEBEGIN:
.type _EMITVARINISCOPEBEGIN, @function
.Lt_043B:
inc dword ptr [CTX+52]
push 0
push 3
push offset Lt_043D
push -1
lea eax, [CTX+40]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_043C:
ret
.size _EMITVARINISCOPEBEGIN, .-_EMITVARINISCOPEBEGIN
.balign 16
_EMITVARINISCOPEEND:
.type _EMITVARINISCOPEEND, @function
.Lt_043E:
push 3
push offset Lt_00BD
push -1
push 2
lea eax, [CTX+40]
push eax
call fb_RIGHT
add esp, 8
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_0441
push 0
push -1
push -1
lea eax, [CTX+40]
push eax
call fb_StrLen
add esp, 8
add eax, -2
push eax
lea eax, [CTX+40]
push eax
call fb_LEFT
add esp, 8
push eax
push -1
lea eax, [CTX+40]
push eax
call fb_StrAssign
add esp, 20
.Lt_0441:
.Lt_0440:
push 0
push 3
push offset Lt_01A8
push -1
lea eax, [CTX+40]
push eax
call fb_StrConcatAssign
add esp, 20
dec dword ptr [CTX+52]
call HVARINISEPARATOR
.Lt_043F:
ret
.size _EMITVARINISCOPEEND, .-_EMITVARINISCOPEEND
.balign 16
_EMITFBCTINFBEGIN:
.type _EMITFBCTINFBEGIN, @function
push ebp
mov ebp, esp
sub esp, 12
.Lt_0442:
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
add esp, 4
lea eax, [ebp-12]
push eax
call fb_StrDelete
add esp, 4
.Lt_0443:
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
.Lt_0445:
push 0
push -1
push -1
push 4
push offset Lt_0124
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
lea eax, [CTX+88]
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
lea eax, [CTX+88]
push eax
call fb_StrAssign
add esp, 20
push 0
push dword ptr [ebp+8]
call fb_StrLen
add esp, 8
add eax, dword ptr [CTX+100]
inc eax
mov dword ptr [CTX+100], eax
.Lt_0446:
mov esp, ebp
pop ebp
ret
.size _EMITFBCTINFSTRING, .-_EMITFBCTINFSTRING
.balign 16
_EMITFBCTINFEND:
.type _EMITFBCTINFEND, @function
push ebp
mov ebp, esp
sub esp, 12
.Lt_0449:
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
push 0
push 32
push offset Lt_044B
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
push 0
push -1
push dword ptr [CTX+100]
call HEMITSTRLITTYPE
add esp, 4
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 4
push offset Lt_0168
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
lea eax, [CTX+88]
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 2
push offset Lt_011B
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 21
push offset Lt_044E
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
lea eax, [ebp-12]
push eax
call HWRITELINE
add esp, 4
push 0
push 41
push offset Lt_044F
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
push 0
push 2
push offset Lt_0104
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 14
push offset Lt_0450
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push dword ptr [CTX+100]
call HEMITSTRLITTYPE
add esp, 4
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 21
push offset Lt_0451
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 2
push offset Lt_0105
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 26
push offset Lt_0452
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
lea eax, [ebp-12]
push eax
call HWRITELINE
add esp, 4
push 0
push 1
push offset Lt_0000
push -1
lea eax, [CTX+88]
push eax
call fb_StrAssign
add esp, 20
mov dword ptr [CTX+100], 0
lea eax, [ebp-12]
push eax
call fb_StrDelete
add esp, 4
.Lt_044A:
mov esp, ebp
pop ebp
ret
.size _EMITFBCTINFEND, .-_EMITFBCTINFEND
.balign 16
_EMITPROCBEGIN:
.type _EMITPROCBEGIN, @function
push ebp
mov ebp, esp
sub esp, 36
push ebx
.Lt_0453:
call IRHLEMITPROCBEGIN
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
add esp, 4
lea eax, [ebp-12]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
push 0
push 8
push offset Lt_0456
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 256
test ebx, ebx
je .Lt_0458
push 0
push 11
push offset Lt_0459
push -1
lea ebx, [ebp-24]
push ebx
call fb_StrConcatAssign
add esp, 20
jmp .Lt_0457
.Lt_0458:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 64
test ebx, ebx
je .Lt_045A
push 0
push 9
push offset Lt_045B
push -1
lea ebx, [ebp-24]
push ebx
call fb_StrConcatAssign
add esp, 20
.Lt_045A:
.Lt_0457:
push 0
push -1
push 0
push dword ptr [ebp+8]
call HEMITPROCHEADER
add esp, 8
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
lea eax, [ebp-24]
push eax
call HWRITELINE
add esp, 4
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 0
push 2
push offset Lt_045C
push -1
lea eax, [ebp-36]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-36]
push eax
call HWRITELINE
add esp, 4
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
inc dword ptr [CTX]
lea eax, [ebp-24]
push eax
call fb_StrDelete
add esp, 4
.Lt_0454:
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
sub esp, 24
push ebx
.Lt_045E:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+24]
and ebx, 511
test ebx, ebx
jne .Lt_0461
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
push 0
push 9
push offset Lt_0462
push -1
lea ebx, [ebp-24]
push ebx
call fb_StrAssign
add esp, 20
lea eax, [ebp-24]
push eax
call HWRITELINE
add esp, 4
lea eax, [ebp-24]
push eax
call fb_StrDelete
add esp, 4
.Lt_0461:
.Lt_0460:
dec dword ptr [CTX]
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
push 0
push 2
push offset Lt_0464
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-12]
push eax
call HWRITELINE
add esp, 4
lea eax, [ebp-12]
push eax
call fb_StrDelete
add esp, 4
call IRHLEMITPROCEND
.Lt_045F:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITPROCEND, .-_EMITPROCEND
.balign 16
_EMITSCOPEBEGIN:
.type _EMITSCOPEBEGIN, @function
push ebp
mov ebp, esp
.Lt_0466:
.Lt_0467:
mov esp, ebp
pop ebp
ret
.size _EMITSCOPEBEGIN, .-_EMITSCOPEBEGIN
.balign 16
_EMITSCOPEEND:
.type _EMITSCOPEEND, @function
push ebp
mov ebp, esp
.Lt_0468:
.Lt_0469:
mov esp, ebp
pop ebp
ret
.size _EMITSCOPEEND, .-_EMITSCOPEEND
.balign 16
_GLOBAL__I:
.type _GLOBAL__I, @function
.Lt_046B:
push offset CTX
call _ZN13IRLLVMCONTEXTC1Ev
add esp, 4
.Lt_046C:
ret
.size _GLOBAL__I, .-_GLOBAL__I
.balign 16
_GLOBAL__D:
.type _GLOBAL__D, @function
.Lt_046E:
push offset CTX
call _ZN13IRLLVMCONTEXTD1Ev
add esp, 4
.Lt_046F:
ret
.size _GLOBAL__D, .-_GLOBAL__D
	#fbc-1.01.0/src/compiler/ir-llvm.bas' compilation took 0.04798397573176771 secs

.section .rodata
.balign 4
Lt_0000:	.ascii	"\0"
.balign 4
Lt_0007:	.ascii	".\0"

.section .data
.balign 4

.globl IRLLVM_VTBL
IRLLVM_VTBL:
.int _INIT
.int _END
.int _EMITBEGIN
.int _EMITEND
.int _GETOPTIONVALUE
.int _SUPPORTSOP
.int _PROCBEGIN
.int _PROCEND
.int _PROCALLOCARG
.int _PROCALLOCLOCAL
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

.section .data
.balign 4
BUILTINS:
.int Lt_0062
.skip 4,0
.int Lt_0063
.skip 4,0
.int Lt_0064
.skip 4,0
.int Lt_0065
.skip 4,0
.int Lt_0066
.skip 4,0
.int Lt_0067
.skip 4,0
.int Lt_0068
.skip 4,0
.int Lt_0069
.skip 4,0
.int Lt_006A
.skip 4,0
.int Lt_006B
.skip 4,0
.int Lt_006C
.skip 4,0
.int Lt_006D
.skip 4,0
.int Lt_006E
.skip 4,0
.int Lt_006F
.skip 4,0
.int Lt_0070
.skip 4,0
.int Lt_0071
.skip 4,0
.int Lt_0072
.skip 4,0
.int Lt_0073
.skip 4,0

.section .rodata
.balign 4
Lt_0062:	.ascii	"declare void @llvm.memset.p0i8.i32(i8*, i8, i32, i32, i1) nounwind\0"
.balign 4
Lt_0063:	.ascii	"declare void @llvm.memmove.p0i8.p0i8.i32(i8*, i8*, i32, i32, i1) nounwind\0"
.balign 4
Lt_0064:	.ascii	"declare float  @llvm.sin.f32(float ) nounwind\0"
.balign 4
Lt_0065:	.ascii	"declare double @llvm.sin.f64(double) nounwind\0"
.balign 4
Lt_0066:	.ascii	"declare float  @llvm.cos.f32(float ) nounwind\0"
.balign 4
Lt_0067:	.ascii	"declare double @llvm.cos.f64(double) nounwind\0"
.balign 4
Lt_0068:	.ascii	"declare float  @llvm.exp.f32(float ) nounwind\0"
.balign 4
Lt_0069:	.ascii	"declare double @llvm.exp.f64(double) nounwind\0"
.balign 4
Lt_006A:	.ascii	"declare float  @llvm.log.f32(float ) nounwind\0"
.balign 4
Lt_006B:	.ascii	"declare double @llvm.log.f64(double) nounwind\0"
.balign 4
Lt_006C:	.ascii	"declare float  @llvm.sqrt.f32(float ) nounwind\0"
.balign 4
Lt_006D:	.ascii	"declare double @llvm.sqrt.f64(double) nounwind\0"
.balign 4
Lt_006E:	.ascii	"declare float  @llvm.floor.f32(float ) nounwind\0"
.balign 4
Lt_006F:	.ascii	"declare double @llvm.floor.f64(double) nounwind\0"
.balign 4
Lt_0070:	.ascii	"declare float  @llvm.fabs.f32(float ) nounwind\0"
.balign 4
Lt_0071:	.ascii	"declare double @llvm.fabs.f64(double) nounwind\0"
.balign 4
Lt_0072:	.ascii	"declare float  @llvm.nearbyint.f32(float ) nounwind\0"
.balign 4
Lt_0073:	.ascii	"declare double @llvm.nearbyint.f64(double) nounwind\0"

.section .bss
.balign 4
	.lcomm	CTX,156

.section .data
.balign 4
DTYPENAME:
.int Lt_007D
.int Lt_007D
.int Lt_007D
.int Lt_007D
.int Lt_007E
.int Lt_007E
.long 0
.long 0
.long 0
.long 0
.int Lt_007F
.int Lt_007F
.int Lt_0080
.int Lt_0080
.int Lt_0081
.int Lt_0082
.int Lt_0083
.int Lt_007D
.long 0
.long 0
.long 0
.int Lt_007D
.long 0
.skip 4,0

.section .rodata
.balign 4
Lt_007D:	.ascii	"i8\0"
.balign 4
Lt_007E:	.ascii	"i16\0"
.balign 4
Lt_007F:	.ascii	"i32\0"
.balign 4
Lt_0080:	.ascii	"i64\0"
.balign 4
Lt_0081:	.ascii	"float\0"
.balign 4
Lt_0082:	.ascii	"double\0"
.balign 4
Lt_0083:	.ascii	"%FBSTRING\0"
.balign 4
Lt_008E:	.ascii	"\t\0"
.balign 4
Lt_0090:	.ascii	"\n\0"
.balign 4
Lt_009E:	.ascii	":\0"
.balign 4
Lt_00A3:	.ascii	"$\0"
.balign 4
Lt_00AD:	.ascii	"x86_stdcallcc \0"
.balign 4
Lt_00B2:	.ascii	" \0"
.balign 4
Lt_00B4:	.ascii	"( \0"
.balign 4
Lt_00BD:	.ascii	", \0"
.balign 4
Lt_00C4:	.ascii	"...\0"
.balign 4
Lt_00CD:	.ascii	" )\0"
.balign 4
Lt_00CE:	.ascii	" nounwind\0"
.balign 4
Lt_00D1:	.ascii	" naked\0"
.balign 4
Lt_00D4:	.ascii	"%\0"
.balign 4
Lt_00E8:	.ascii	" = type \0"
.balign 4
Lt_00F0:	.ascii	"typedef \0"
.balign 4
Lt_00F1:	.ascii	"*\0"
.balign 4
Lt_0104:	.ascii	"[\0"
.balign 4
Lt_0105:	.ascii	"]\0"
.balign 4
Lt_011B:	.ascii	"\"\0"
.balign 4
Lt_011E:	.ascii	"\\\0"
.balign 4
Lt_0124:	.ascii	"\\00\0"
.balign 4
Lt_0150:	.ascii	" x i8]\0"
.balign 4
Lt_0165:	.ascii	" = \0"
.balign 4
Lt_0167:	.ascii	"private constant \0"
.balign 4
Lt_0168:	.ascii	" c\"\0"
.balign 4
Lt_0178:	.ascii	"global\0"
.balign 4
Lt_0179:	.ascii	"alloca\0"
.balign 4
Lt_017C:	.ascii	" zeroinitializer\0"
.balign 4
Lt_0189:	.ascii	"declare \0"
.balign 4
Lt_0198:	.ascii	" = type { \0"
.balign 4
Lt_019D:	.ascii	" __attribute__((packed))\0"
.balign 4
Lt_019E:	.ascii	" __attribute__((aligned (\0"
.balign 4
Lt_019F:	.ascii	")))\0"
.balign 4
Lt_01A8:	.ascii	" }\0"
.balign 4
Lt_01AE:	.ascii	"{ i32, void ()* } { i32 \0"
.balign 4
Lt_01B1:	.ascii	", void ()* \0"
.balign 4
Lt_01C8:	.ascii	"; Compilation of \0"
.balign 4
Lt_01C9:	.ascii	" started at \0"
.balign 4
Lt_01CA:	.ascii	" on \0"
.balign 4
Lt_01D4:	.ascii	"%FBSTRING = type { i8*, i64, i64 }\0"
.balign 4
Lt_01D6:	.ascii	"%FBSTRING = type { i8*, i32, i32 }\0"
.balign 4
Lt_01E5:	.ascii	"@llvm.global_ctors = appending global [\0"
.balign 4
Lt_01E6:	.ascii	" x { i32, void ()* }] [\0"
.balign 4
Lt_01EE:	.ascii	"@llvm.global_dtors = appending global [\0"
.balign 4
Lt_01F5:	.ascii	"; Total compilation time: \0"
.balign 4
Lt_01F6:	.ascii	" seconds. \0"
.balign 4
Lt_0208:	.ascii	"_GETOPTIONVALUE\0"
.balign 4
Lt_021D:	.ascii	" = alloca \0"
.balign 4
Lt_021F:	.ascii	"store \0"
.balign 4
Lt_0246:	.ascii	" = load \0"
.balign 4
Lt_0254:	.ascii	"void\0"
.balign 4
Lt_0270:	.ascii	"inttoptr \0"
.balign 4
Lt_0271:	.ascii	"trunc \0"
.balign 4
Lt_0272:	.ascii	"(\0"
.balign 4
Lt_0273:	.ascii	" to \0"
.balign 4
Lt_0274:	.ascii	")\0"
.balign 4
Lt_0279:	.ascii	"0x\0"
.balign 4
Lt_0283:	.ascii	"bitcast (\0"
.balign 4
Lt_0284:	.ascii	"* \0"
.balign 4
Lt_0292:	.ascii	"%vr\0"
.balign 4
Lt_0297:	.ascii	"br label %\0"
.balign 4
Lt_02A4:	.ascii	"fadd\0"
.balign 4
Lt_02A5:	.ascii	"add\0"
.balign 4
Lt_02AB:	.ascii	"fsub\0"
.balign 4
Lt_02AC:	.ascii	"sub\0"
.balign 4
Lt_02B2:	.ascii	"fmul\0"
.balign 4
Lt_02B3:	.ascii	"mul\0"
.balign 4
Lt_02B5:	.ascii	"fdiv\0"
.balign 4
Lt_02B7:	.ascii	"sdiv\0"
.balign 4
Lt_02BD:	.ascii	"frem\0"
.balign 4
Lt_02BE:	.ascii	"srem\0"
.balign 4
Lt_02C0:	.ascii	"shl\0"
.balign 4
Lt_02C2:	.ascii	"ashr\0"
.balign 4
Lt_02C4:	.ascii	"and\0"
.balign 4
Lt_02C6:	.ascii	"or\0"
.balign 4
Lt_02C8:	.ascii	"xor\0"
.balign 4
Lt_02CA:	.ascii	"icmp eq\0"
.balign 4
Lt_02CC:	.ascii	"icmp ne\0"
.balign 4
Lt_02CE:	.ascii	"icmp sgt\0"
.balign 4
Lt_02D0:	.ascii	"icmp slt\0"
.balign 4
Lt_02D2:	.ascii	"icmp sge\0"
.balign 4
Lt_02D4:	.ascii	"icmp sle\0"
.balign 4
Lt_02D6:	.ascii	"eqv\0"
.balign 4
Lt_02D8:	.ascii	"imp\0"
.balign 4
Lt_02E9:	.ascii	"br i1 \0"
.balign 4
Lt_02EA:	.ascii	"label %\0"
.balign 4
Lt_02F3:	.ascii	" = sext \0"
.balign 4
Lt_02F4:	.ascii	"i1 \0"
.balign 4
Lt_02FC:	.ascii	" = call \0"
.balign 4
Lt_02FF:	.ascii	"float @llvm.\0"
.balign 4
Lt_0303:	.ascii	"fabs\0"
.balign 4
Lt_0306:	.ascii	"sin\0"
.balign 4
Lt_0309:	.ascii	"cos\0"
.balign 4
Lt_030C:	.ascii	"exp\0"
.balign 4
Lt_030F:	.ascii	"log\0"
.balign 4
Lt_0312:	.ascii	"sqrt\0"
.balign 4
Lt_0315:	.ascii	"floor\0"
.balign 4
Lt_0317:	.ascii	".f32(float \0"
.balign 4
Lt_0318:	.ascii	"double @llvm.\0"
.balign 4
Lt_0329:	.ascii	".f64(double \0"
.balign 4
Lt_0342:	.ascii	"float @llvm.nearbyint.f32(float \0"
.balign 4
Lt_0343:	.ascii	"double @llvm.nearbyint.f64(double \0"
.balign 4
Lt_0352:	.ascii	"fptrunc\0"
.balign 4
Lt_0353:	.ascii	"fpext\0"
.balign 4
Lt_0358:	.ascii	"sitofp\0"
.balign 4
Lt_0359:	.ascii	"uitofp\0"
.balign 4
Lt_0362:	.ascii	"fptosi\0"
.balign 4
Lt_0363:	.ascii	"fptoui\0"
.balign 4
Lt_0368:	.ascii	"bitcast\0"
.balign 4
Lt_0369:	.ascii	"inttoptr\0"
.balign 4
Lt_036C:	.ascii	"ptrtoint\0"
.balign 4
Lt_0379:	.ascii	"trunc\0"
.balign 4
Lt_037E:	.ascii	"sext\0"
.balign 4
Lt_037F:	.ascii	"zext\0"
.balign 4
Lt_0395:	.ascii	"ret \0"
.balign 4
Lt_03AF:	.ascii	"call \0"
.balign 4
Lt_03B0:	.ascii	"void \0"
.balign 4
Lt_03C7:	.ascii	"goto *\0"
.balign 4
Lt_03D0:	.ascii	"switch \0"
.balign 4
Lt_03DB:	.ascii	"i32 \0"
.balign 4
Lt_03E3:	.ascii	"call void \0"
.balign 4
Lt_03E7:	.ascii	"@llvm.memset.p0i8.i32( \0"
.balign 4
Lt_03E8:	.ascii	"i8* \0"
.balign 4
Lt_03E9:	.ascii	"i8 0, \0"
.balign 4
Lt_03EC:	.ascii	"@llvm.memmove.p0i8.p0i8.i32( \0"
.balign 4
Lt_03ED:	.ascii	"i32 1, i1 false )\0"
.balign 4
Lt_03F4:	.ascii	"#line \0"
.balign 4
Lt_03F5:	.ascii	" \"\0"
.balign 4
Lt_03F6:	.ascii	"\\\\\0"
.balign 4
Lt_03FE:	.ascii	"; \0"
.balign 4
Lt_040B:	.ascii	"+\0"
.balign 4
Lt_0414:	.ascii	" = global \0"
.balign 4
Lt_042A:	.ascii	"TODO offset \0"
.balign 4
Lt_042B:	.ascii	" + \0"
.balign 4
Lt_0434:	.ascii	"c\"\0"
.balign 4
Lt_043D:	.ascii	"{ \0"
.balign 4
Lt_044B:	.ascii	"@__fbctinf = internal constant \0"
.balign 4
Lt_044E:	.ascii	", section \".fbctinf\"\0"
.balign 4
Lt_044F:	.ascii	"@llvm.used = appending global [1 x i8*] \0"
.balign 4
Lt_0450:	.ascii	"i8* bitcast (\0"
.balign 4
Lt_0451:	.ascii	"* @__fbctinf to i8*)\0"
.balign 4
Lt_0452:	.ascii	", section \"llvm.metadata\"\0"
.balign 4
Lt_0456:	.ascii	"define \0"
.balign 4
Lt_0459:	.ascii	"dllexport \0"
.balign 4
Lt_045B:	.ascii	"private \0"
.balign 4
Lt_045C:	.ascii	"{\0"
.balign 4
Lt_0462:	.ascii	"ret void\0"
.balign 4
Lt_0464:	.ascii	"}\0"

.section .ctors, "aw", @progbits
.int fb_ctor__irzllvm
.int _GLOBAL__I

.section .dtors, "aw", @progbits
.int _GLOBAL__D
