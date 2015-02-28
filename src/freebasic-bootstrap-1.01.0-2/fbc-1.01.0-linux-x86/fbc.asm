	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/fbc.bas' compilation started at 14:16:35 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl FBCFINDBIN
FBCFINDBIN:
.type FBCFINDBIN, @function
push ebp
mov ebp, esp
sub esp, 48
push ebx
.Lt_00A3:
mov eax, dword ptr [ebp+8]
cmp dword ptr [Lt_00AF], eax
jne .Lt_00A6
push 0
push -1
push offset Lt_00B0
push -1
push dword ptr [ebp+12]
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [Lt_00B1]
mov dword ptr [eax], ebx
jmp .Lt_00A4
.Lt_00A6:
.Lt_00A5:
mov ebx, dword ptr [ebp+16]
mov dword ptr [ebx], 0
push 0
push -1
push 0
mov ebx, dword ptr [ebp+8]
lea eax, [TOOLNAMES+ebx*8]
push eax
call fb_StrAllocTempDescZ
add esp, 4
push eax
call fb_StrUcase2
add esp, 8
push eax
call fb_GetEnviron
add esp, 4
push eax
push -1
push dword ptr [ebp+12]
call fb_StrAssign
add esp, 20
push -1
push dword ptr [ebp+12]
call fb_StrLen
add esp, 8
test eax, eax
jne .Lt_00A8
push 0
push -1
push 1
push offset Lt_0000
push -1
push 8
mov eax, dword ptr [ebp+8]
lea ebx, [TOOLNAMES+eax*8]
push ebx
push 261
lea ebx, [FBC+2389]
push ebx
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea ebx, [ebp-12]
push ebx
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
push dword ptr [ebp+12]
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ebp+12]
push dword ptr [eax]
call HFILEEXISTS
add esp, 4
test eax, eax
jne .Lt_00AC
push 0
push -1
push 1
push offset Lt_0000
push -1
push 8
mov eax, dword ptr [ebp+8]
lea ebx, [TOOLNAMES+eax*8]
push ebx
push 129
lea ebx, [FBC+1859]
push ebx
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
lea ebx, [ebp-36]
push ebx
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
push dword ptr [ebp+12]
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ebp+16]
mov dword ptr [eax], -1
.Lt_00AC:
.Lt_00AB:
.Lt_00A8:
.Lt_00A7:
mov eax, dword ptr [ebp+8]
mov dword ptr [Lt_00AF], eax
push 0
push -1
push dword ptr [ebp+12]
push -1
push offset Lt_00B0
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax]
mov dword ptr [Lt_00B1], ebx
.Lt_00A4:
pop ebx
mov esp, ebp
pop ebp
ret
.size FBCFINDBIN, .-FBCFINDBIN

.section .data
.balign 4
Lt_00AF:
.int -1

.section .bss
.balign 4
	.lcomm	Lt_00B1,4
.balign 4
	.lcomm	Lt_00B0,12

.section .text
.balign 16

.globl FBCRUNBIN
FBCRUNBIN:
.type FBCRUNBIN, @function
push ebp
mov ebp, esp
sub esp, 72
mov dword ptr [ebp-4], 0
.Lt_00B2:
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ebp-12]
push eax
lea eax, [ebp-24]
push eax
push dword ptr [ebp+12]
call FBCFINDBIN
add esp, 12
cmp dword ptr [FBC+56], 0
je .Lt_00B5
push 2
push 3
push offset Lt_00B6
push 0
push dword ptr [ebp+8]
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
lea eax, [ebp-36]
push eax
call fb_StrConcat
add esp, 20
push eax
push 0
call fb_PrintString
add esp, 12
push 1
push -1
push dword ptr [ebp+16]
push -1
push 2
push offset Lt_00B8
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
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
lea eax, [ebp-60]
push eax
call fb_StrConcat
add esp, 20
push eax
push 0
call fb_PrintString
add esp, 12
.Lt_00B5:
.Lt_00B4:
push dword ptr [ebp+16]
lea eax, [ebp-24]
push eax
call fb_Exec
add esp, 8
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_00BC
mov dword ptr [ebp-4], -1
jmp .Lt_00BB
.Lt_00BC:
cmp dword ptr [ebp-8], 0
jge .Lt_00BD
push 0
push 6
push -1
push dword ptr [ebp-24]
push 90
call ERRREPORTEX
add esp, 20
jmp .Lt_00BB
.Lt_00BD:
cmp dword ptr [FBC+56], 0
je .Lt_00BF
push 1
push -1
push dword ptr [ebp-8]
call fb_IntToStr
add esp, 4
push eax
push -1
push 29
push offset Lt_00C1
push -1
push -1
lea eax, [ebp-24]
push eax
push -1
push 11
push offset Lt_00C0
push 0
push dword ptr [ebp+8]
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
push 0
call fb_PrintString
add esp, 12
.Lt_00BF:
.Lt_00BE:
.Lt_00BB:
lea eax, [ebp-24]
push eax
call fb_StrDelete
add esp, 4
.Lt_00B3:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size FBCRUNBIN, .-FBCRUNBIN
.balign 16

.globl main
main:
.type main, @function
push ebp
mov ebp, esp
and esp, 0xFFFFFFF0
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
push 0
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call fb_Init
add esp, 12
call fb_InitSignals
call fb_CpuDetect
shr eax, 28
cmp eax, 4
jae .Lt_0004
push 1
push 44
push offset Lt_0005
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
call fb_End
add esp, 4
.Lt_0004:
.Lt_0002:
call FBCINIT
cmp dword ptr [ebp+8], 1
jne .Lt_06A4
call HPRINTOPTIONS
push 1
call FBCEND
add esp, 4
.Lt_06A4:
.Lt_06A3:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HPARSEARGS
add esp, 8
cmp dword ptr [FBC+60], 0
je .Lt_06A6
call HPRINTVERSION
push 0
call FBCEND
add esp, 4
.Lt_06A6:
.Lt_06A5:
cmp dword ptr [FBC+56], 0
je .Lt_06A8
call HPRINTVERSION
.Lt_06A8:
.Lt_06A7:
cmp dword ptr [FBC+64], 0
je .Lt_06AA
call HPRINTOPTIONS
push 1
call FBCEND
add esp, 4
.Lt_06AA:
.Lt_06A9:
lea eax, [FBC+72]
push eax
call LISTGETHEAD
add esp, 4
test eax, eax
sete bl
shr ebx, 1
sbb ebx, ebx
lea eax, [FBC+188]
push eax
call LISTGETHEAD
add esp, 4
test eax, eax
sete cl
shr ecx, 1
sbb ecx, ecx
and ebx, ecx
lea ecx, [FBC+252]
push ecx
call LISTGETHEAD
add esp, 4
test eax, eax
sete cl
shr ecx, 1
sbb ecx, ecx
and ebx, ecx
lea ecx, [FBC+220]
push ecx
call LISTGETHEAD
add esp, 4
test eax, eax
sete cl
shr ecx, 1
sbb ecx, ecx
and ebx, ecx
je .Lt_06AC
mov ecx, dword ptr [FBC+68]
mov dword ptr [ebp-8], ecx
cmp dword ptr [ebp-8], 0
je .Lt_06B0
.Lt_06B1:
cmp dword ptr [ebp-8], 1
je .Lt_06B0
.Lt_06B2:
cmp dword ptr [ebp-8], 2
jne .Lt_06AF
.Lt_06B0:
push 0
call FBCEND
add esp, 4
.Lt_06AF:
.Lt_06AD:
call HPRINTOPTIONS
push 1
call FBCEND
add esp, 4
.Lt_06AC:
.Lt_06AB:
call FBCINIT2
call HCOMPILEMODULES
call HCOMPILEXPM
test eax, eax
jne .Lt_06B4
push 1
call FBCEND
add esp, 4
.Lt_06B4:
.Lt_06B3:
cmp dword ptr [FBC+36], 0
je .Lt_06B6
push 0
call FBCEND
add esp, 4
.Lt_06B6:
.Lt_06B5:
push 2
call FBGETOPTION
add esp, 4
test eax, eax
je .Lt_06B8
call HCOMPILESTAGE2MODULES
.Lt_06B8:
.Lt_06B7:
cmp dword ptr [FBC+44], 0
je .Lt_06BA
push 0
call FBCEND
add esp, 4
.Lt_06BA:
.Lt_06B9:
call HASSEMBLEMODULES
call HASSEMBLERCS
call HASSEMBLEXPM
push 0
call FBGETOPTION
add esp, 4
cmp eax, 3
jne .Lt_06BC
push 0
call FBCEND
add esp, 4
.Lt_06BC:
.Lt_06BB:
call HSETDEFAULTLIBPATHS
call FBISCROSSCOMP
test eax, eax
jne .Lt_06BE
call HCOLLECTOBJINFO
.Lt_06BE:
.Lt_06BD:
push 0
call FBGETOPTION
add esp, 4
cmp eax, 1
jne .Lt_06C0
call HARCHIVEFILES
test eax, eax
jne .Lt_06C2
push 1
call FBCEND
add esp, 4
.Lt_06C2:
.Lt_06C1:
push 0
call FBCEND
add esp, 4
.Lt_06C0:
.Lt_06BF:
cmp dword ptr [FBC+2120], 0
jne .Lt_06C4
call HADDDEFAULTLIBS
.Lt_06C4:
.Lt_06C3:
call HLINKFILES
test eax, eax
jne .Lt_06C6
push 1
call FBCEND
add esp, 4
.Lt_06C6:
.Lt_06C5:
push 0
call FBCEND
add esp, 4
.Lt_0003:
push 0
call fb_End
add esp, 4
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size main, .-main
.balign 16
_ZN11TSTRSETITEMaSERKS_:
.type _ZN11TSTRSETITEMaSERKS_, @function
push ebp
mov ebp, esp
push ebx
.Lt_0013:
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
.Lt_0014:
pop ebx
mov esp, ebp
pop ebp
ret
.size _ZN11TSTRSETITEMaSERKS_, .-_ZN11TSTRSETITEMaSERKS_
.balign 16
_ZN9FBCIOFILEC1Ev:
.type _ZN9FBCIOFILEC1Ev, @function
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
.Lt_0022:
.Lt_0023:
mov esp, ebp
pop ebp
ret
.size _ZN9FBCIOFILEC1Ev, .-_ZN9FBCIOFILEC1Ev
.balign 16
_ZN9FBCIOFILEaSERKS_:
.type _ZN9FBCIOFILEaSERKS_, @function
push ebp
mov ebp, esp
push ebx
.Lt_0024:
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
.Lt_0025:
pop ebx
mov esp, ebp
pop ebp
ret
.size _ZN9FBCIOFILEaSERKS_, .-_ZN9FBCIOFILEaSERKS_
.balign 16
_ZN9FBCIOFILED1Ev:
.type _ZN9FBCIOFILED1Ev, @function
push ebp
mov ebp, esp
push ebx
.Lt_0028:
.Lt_0029:
mov eax, dword ptr [ebp+8]
lea ebx, [eax]
push ebx
call fb_StrDelete
add esp, 4
pop ebx
mov esp, ebp
pop ebp
ret
.size _ZN9FBCIOFILED1Ev, .-_ZN9FBCIOFILED1Ev
.balign 16
_ZN6FBCCTXC1Ev:
.type _ZN6FBCCTXC1Ev, @function
push ebp
mov ebp, esp
push ebx
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 0
mov eax, dword ptr [ebp+8]
add eax, 4
mov dword ptr [eax], 0
mov eax, dword ptr [ebp+8]
add eax, 8
mov dword ptr [eax], 0
mov dword ptr [eax+4], 0
mov dword ptr [eax+8], 0
mov eax, dword ptr [ebp+8]
add eax, 20
mov dword ptr [eax], 0
mov eax, dword ptr [ebp+8]
add eax, 24
mov dword ptr [eax], 0
mov eax, dword ptr [ebp+8]
add eax, 28
mov dword ptr [eax], 0
mov eax, dword ptr [ebp+8]
add eax, 32
mov dword ptr [eax], 0
mov eax, dword ptr [ebp+8]
add eax, 36
mov dword ptr [eax], 0
mov eax, dword ptr [ebp+8]
add eax, 40
mov dword ptr [eax], 0
mov eax, dword ptr [ebp+8]
add eax, 44
mov dword ptr [eax], 0
mov eax, dword ptr [ebp+8]
add eax, 48
mov dword ptr [eax], 0
mov eax, dword ptr [ebp+8]
add eax, 52
mov dword ptr [eax], 0
mov eax, dword ptr [ebp+8]
add eax, 56
mov dword ptr [eax], 0
mov eax, dword ptr [ebp+8]
add eax, 60
mov dword ptr [eax], 0
mov eax, dword ptr [ebp+8]
add eax, 64
mov dword ptr [eax], 0
mov eax, dword ptr [ebp+8]
add eax, 68
mov dword ptr [eax], 0
mov eax, dword ptr [ebp+8]
add eax, 72
lea ebx, [eax]
push edi
mov edi, ebx
xor eax, eax
mov ecx, 8
rep stosd
pop edi
mov ebx, dword ptr [ebp+8]
add ebx, 104
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
add eax, 136
lea ebx, [eax]
push ebx
call _ZN9FBCIOFILEC1Ev
add esp, 4
mov ebx, dword ptr [ebp+8]
add ebx, 156
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
add eax, 188
lea ebx, [eax]
push edi
mov edi, ebx
xor eax, eax
mov ecx, 8
rep stosd
pop edi
mov ebx, dword ptr [ebp+8]
add ebx, 220
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
add eax, 252
lea ebx, [eax]
push edi
mov edi, ebx
xor eax, eax
mov ecx, 11
rep stosd
pop edi
mov ebx, dword ptr [ebp+8]
add ebx, 296
lea eax, [ebx]
push eax
push edi
mov edi, eax
xor eax, eax
mov ecx, 11
rep stosd
pop edi
pop eax
mov eax, dword ptr [ebp+8]
add eax, 340
lea ebx, [eax]
push edi
mov edi, ebx
xor eax, eax
mov ecx, 11
rep stosd
pop edi
mov ebx, dword ptr [ebp+8]
add ebx, 384
lea eax, [ebx]
push eax
push edi
mov edi, eax
xor eax, eax
mov ecx, 11
rep stosd
pop edi
pop eax
mov eax, dword ptr [ebp+8]
add eax, 428
lea ebx, [eax]
push edi
mov edi, ebx
xor eax, eax
mov ecx, 65
rep stosd
mov byte ptr [edi], al
pop edi
mov ebx, dword ptr [ebp+8]
add ebx, 689
lea eax, [ebx]
push eax
push edi
mov edi, eax
xor eax, eax
mov ecx, 65
rep stosd
mov byte ptr [edi], al
pop edi
pop eax
mov eax, dword ptr [ebp+8]
add eax, 952
mov dword ptr [eax], 0
mov eax, dword ptr [ebp+8]
add eax, 956
lea ebx, [eax]
push edi
mov edi, ebx
xor eax, eax
mov ecx, 65
rep stosd
mov byte ptr [edi], al
pop edi
mov ebx, dword ptr [ebp+8]
add ebx, 1217
lea eax, [ebx]
push eax
push edi
mov edi, eax
xor eax, eax
mov ecx, 32
rep stosd
mov byte ptr [edi], al
pop edi
pop eax
mov eax, dword ptr [ebp+8]
add eax, 1346
lea ebx, [eax]
push edi
mov edi, ebx
xor eax, eax
mov ecx, 96
rep stosd
pop edi
mov ebx, dword ptr [ebp+8]
add ebx, 1730
lea eax, [ebx]
push eax
push edi
mov edi, eax
xor eax, eax
mov ecx, 32
rep stosd
mov byte ptr [edi], al
pop edi
pop eax
mov eax, dword ptr [ebp+8]
add eax, 1859
lea ebx, [eax]
push edi
mov edi, ebx
xor eax, eax
mov ecx, 32
rep stosd
mov byte ptr [edi], al
pop edi
mov ebx, dword ptr [ebp+8]
add ebx, 1988
lea eax, [ebx]
push eax
push edi
mov edi, eax
xor eax, eax
mov ecx, 32
rep stosd
mov byte ptr [edi], al
pop edi
pop eax
mov eax, dword ptr [ebp+8]
add eax, 2120
mov dword ptr [eax], 0
mov eax, dword ptr [ebp+8]
add eax, 2124
mov dword ptr [eax], 0
mov eax, dword ptr [ebp+8]
add eax, 2128
lea ebx, [eax]
push edi
mov edi, ebx
xor eax, eax
mov ecx, 65
rep stosd
mov byte ptr [edi], al
pop edi
mov ebx, dword ptr [ebp+8]
add ebx, 2389
lea eax, [ebx]
push eax
push edi
mov edi, eax
xor eax, eax
mov ecx, 65
rep stosd
mov byte ptr [edi], al
pop edi
pop eax
mov eax, dword ptr [ebp+8]
add eax, 2650
lea ebx, [eax]
push edi
mov edi, ebx
xor eax, eax
mov ecx, 65
rep stosd
mov byte ptr [edi], al
pop edi
mov ebx, dword ptr [ebp+8]
add ebx, 2911
lea eax, [ebx]
push eax
push edi
mov edi, eax
xor eax, eax
mov ecx, 65
rep stosd
mov byte ptr [edi], al
pop edi
pop eax
mov eax, dword ptr [ebp+8]
add eax, 3172
mov dword ptr [eax], 0
mov dword ptr [eax+4], 0
.Lt_002A:
.Lt_002B:
pop ebx
mov esp, ebp
pop ebp
ret
.size _ZN6FBCCTXC1Ev, .-_ZN6FBCCTXC1Ev
.balign 16
_ZN6FBCCTXaSERKS_:
.type _ZN6FBCCTXaSERKS_, @function
push ebp
mov ebp, esp
push ebx
.Lt_002C:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [eax]
mov dword ptr [ebx], ecx
mov ecx, dword ptr [ebp+12]
add ecx, 4
mov ebx, dword ptr [ebp+8]
add ebx, 4
mov eax, dword ptr [ecx]
mov dword ptr [ebx], eax
push 0
push -1
mov eax, dword ptr [ebp+12]
add eax, 8
lea ebx, [eax]
push ebx
push -1
mov ebx, dword ptr [ebp+8]
add ebx, 8
lea eax, [ebx]
push eax
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ebp+12]
add eax, 20
mov ebx, dword ptr [ebp+8]
add ebx, 20
mov ecx, dword ptr [eax]
mov dword ptr [ebx], ecx
mov ecx, dword ptr [ebp+12]
add ecx, 24
mov ebx, dword ptr [ebp+8]
add ebx, 24
mov eax, dword ptr [ecx]
mov dword ptr [ebx], eax
mov eax, dword ptr [ebp+12]
add eax, 28
mov ebx, dword ptr [ebp+8]
add ebx, 28
mov ecx, dword ptr [eax]
mov dword ptr [ebx], ecx
mov ecx, dword ptr [ebp+12]
add ecx, 32
mov ebx, dword ptr [ebp+8]
add ebx, 32
mov eax, dword ptr [ecx]
mov dword ptr [ebx], eax
mov eax, dword ptr [ebp+12]
add eax, 36
mov ebx, dword ptr [ebp+8]
add ebx, 36
mov ecx, dword ptr [eax]
mov dword ptr [ebx], ecx
mov ecx, dword ptr [ebp+12]
add ecx, 40
mov ebx, dword ptr [ebp+8]
add ebx, 40
mov eax, dword ptr [ecx]
mov dword ptr [ebx], eax
mov eax, dword ptr [ebp+12]
add eax, 44
mov ebx, dword ptr [ebp+8]
add ebx, 44
mov ecx, dword ptr [eax]
mov dword ptr [ebx], ecx
mov ecx, dword ptr [ebp+12]
add ecx, 48
mov ebx, dword ptr [ebp+8]
add ebx, 48
mov eax, dword ptr [ecx]
mov dword ptr [ebx], eax
mov eax, dword ptr [ebp+12]
add eax, 52
mov ebx, dword ptr [ebp+8]
add ebx, 52
mov ecx, dword ptr [eax]
mov dword ptr [ebx], ecx
mov ecx, dword ptr [ebp+12]
add ecx, 56
mov ebx, dword ptr [ebp+8]
add ebx, 56
mov eax, dword ptr [ecx]
mov dword ptr [ebx], eax
mov eax, dword ptr [ebp+12]
add eax, 60
mov ebx, dword ptr [ebp+8]
add ebx, 60
mov ecx, dword ptr [eax]
mov dword ptr [ebx], ecx
mov ecx, dword ptr [ebp+12]
add ecx, 64
mov ebx, dword ptr [ebp+8]
add ebx, 64
mov eax, dword ptr [ecx]
mov dword ptr [ebx], eax
mov eax, dword ptr [ebp+12]
add eax, 68
mov ebx, dword ptr [ebp+8]
add ebx, 68
mov ecx, dword ptr [eax]
mov dword ptr [ebx], ecx
mov ecx, dword ptr [ebp+8]
add ecx, 72
lea ebx, [ecx]
mov ecx, dword ptr [ebp+12]
add ecx, 72
lea eax, [ecx]
push edi
push esi
mov edi, ebx
mov esi, eax
mov ecx, 8
rep movsd
pop esi
pop edi
mov eax, dword ptr [ebp+8]
add eax, 104
lea ebx, [eax]
mov eax, dword ptr [ebp+12]
add eax, 104
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
add ecx, 136
lea ebx, [ecx]
push ebx
mov ebx, dword ptr [ebp+8]
add ebx, 136
lea ecx, [ebx]
push ecx
call _ZN9FBCIOFILEaSERKS_
add esp, 8
mov ecx, dword ptr [ebp+8]
add ecx, 156
lea ebx, [ecx]
mov ecx, dword ptr [ebp+12]
add ecx, 156
lea eax, [ecx]
push edi
push esi
mov edi, ebx
mov esi, eax
mov ecx, 8
rep movsd
pop esi
pop edi
mov eax, dword ptr [ebp+8]
add eax, 188
lea ebx, [eax]
mov eax, dword ptr [ebp+12]
add eax, 188
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
mov ecx, dword ptr [ebp+8]
add ecx, 220
lea ebx, [ecx]
mov ecx, dword ptr [ebp+12]
add ecx, 220
lea eax, [ecx]
push edi
push esi
mov edi, ebx
mov esi, eax
mov ecx, 8
rep movsd
pop esi
pop edi
mov eax, dword ptr [ebp+8]
add eax, 252
lea ebx, [eax]
mov eax, dword ptr [ebp+12]
add eax, 252
lea ecx, [eax]
push ecx
push edi
push esi
mov edi, ebx
mov esi, ecx
mov ecx, 11
rep movsd
pop esi
pop edi
pop ecx
mov ecx, dword ptr [ebp+8]
add ecx, 296
lea ebx, [ecx]
mov ecx, dword ptr [ebp+12]
add ecx, 296
lea eax, [ecx]
push edi
push esi
mov edi, ebx
mov esi, eax
mov ecx, 11
rep movsd
pop esi
pop edi
mov eax, dword ptr [ebp+8]
add eax, 340
lea ebx, [eax]
mov eax, dword ptr [ebp+12]
add eax, 340
lea ecx, [eax]
push ecx
push edi
push esi
mov edi, ebx
mov esi, ecx
mov ecx, 11
rep movsd
pop esi
pop edi
pop ecx
mov ecx, dword ptr [ebp+8]
add ecx, 384
lea ebx, [ecx]
mov ecx, dword ptr [ebp+12]
add ecx, 384
lea eax, [ecx]
push edi
push esi
mov edi, ebx
mov esi, eax
mov ecx, 11
rep movsd
pop esi
pop edi
push 0
push 261
mov eax, dword ptr [ebp+12]
add eax, 428
lea ebx, [eax]
push ebx
push 261
mov ebx, dword ptr [ebp+8]
add ebx, 428
lea eax, [ebx]
push eax
call fb_StrAssign
add esp, 20
push 0
push 261
mov eax, dword ptr [ebp+12]
add eax, 689
lea ebx, [eax]
push ebx
push 261
mov ebx, dword ptr [ebp+8]
add ebx, 689
lea eax, [ebx]
push eax
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ebp+12]
add eax, 952
mov ebx, dword ptr [ebp+8]
add ebx, 952
mov ecx, dword ptr [eax]
mov dword ptr [ebx], ecx
push 0
push 261
mov ecx, dword ptr [ebp+12]
add ecx, 956
lea ebx, [ecx]
push ebx
push 261
mov ebx, dword ptr [ebp+8]
add ebx, 956
lea ecx, [ebx]
push ecx
call fb_StrAssign
add esp, 20
push 0
push 129
mov ecx, dword ptr [ebp+12]
add ecx, 1217
lea ebx, [ecx]
push ebx
push 129
mov ebx, dword ptr [ebp+8]
add ebx, 1217
lea ecx, [ebx]
push ecx
call fb_StrAssign
add esp, 20
mov ecx, dword ptr [ebp+8]
add ecx, 1346
lea ebx, [ecx]
mov ecx, dword ptr [ebp+12]
add ecx, 1346
lea eax, [ecx]
push edi
push esi
mov edi, ebx
mov esi, eax
mov ecx, 96
rep movsd
pop esi
pop edi
push 0
push 129
mov eax, dword ptr [ebp+12]
add eax, 1730
lea ebx, [eax]
push ebx
push 129
mov ebx, dword ptr [ebp+8]
add ebx, 1730
lea eax, [ebx]
push eax
call fb_StrAssign
add esp, 20
push 0
push 129
mov eax, dword ptr [ebp+12]
add eax, 1859
lea ebx, [eax]
push ebx
push 129
mov ebx, dword ptr [ebp+8]
add ebx, 1859
lea eax, [ebx]
push eax
call fb_StrAssign
add esp, 20
push 0
push 129
mov eax, dword ptr [ebp+12]
add eax, 1988
lea ebx, [eax]
push ebx
push 129
mov ebx, dword ptr [ebp+8]
add ebx, 1988
lea eax, [ebx]
push eax
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ebp+12]
add eax, 2120
mov ebx, dword ptr [ebp+8]
add ebx, 2120
mov ecx, dword ptr [eax]
mov dword ptr [ebx], ecx
mov ecx, dword ptr [ebp+12]
add ecx, 2124
mov ebx, dword ptr [ebp+8]
add ebx, 2124
mov eax, dword ptr [ecx]
mov dword ptr [ebx], eax
push 0
push 261
mov eax, dword ptr [ebp+12]
add eax, 2128
lea ebx, [eax]
push ebx
push 261
mov ebx, dword ptr [ebp+8]
add ebx, 2128
lea eax, [ebx]
push eax
call fb_StrAssign
add esp, 20
push 0
push 261
mov eax, dword ptr [ebp+12]
add eax, 2389
lea ebx, [eax]
push ebx
push 261
mov ebx, dword ptr [ebp+8]
add ebx, 2389
lea eax, [ebx]
push eax
call fb_StrAssign
add esp, 20
push 0
push 261
mov eax, dword ptr [ebp+12]
add eax, 2650
lea ebx, [eax]
push ebx
push 261
mov ebx, dword ptr [ebp+8]
add ebx, 2650
lea eax, [ebx]
push eax
call fb_StrAssign
add esp, 20
push 0
push 261
mov eax, dword ptr [ebp+12]
add eax, 2911
lea ebx, [eax]
push ebx
push 261
mov ebx, dword ptr [ebp+8]
add ebx, 2911
lea eax, [ebx]
push eax
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ebp+8]
add eax, 3172
mov ebx, dword ptr [ebp+12]
add ebx, 3172
mov ecx, dword ptr [ebx]
mov dword ptr [eax], ecx
mov ecx, dword ptr [ebx+4]
mov dword ptr [eax+4], ecx
.Lt_002D:
pop ebx
mov esp, ebp
pop ebp
ret
.size _ZN6FBCCTXaSERKS_, .-_ZN6FBCCTXaSERKS_
.balign 16
_ZN6FBCCTXD1Ev:
.type _ZN6FBCCTXD1Ev, @function
push ebp
mov ebp, esp
push ebx
.Lt_0030:
.Lt_0031:
mov eax, dword ptr [ebp+8]
add eax, 136
lea ebx, [eax]
push ebx
call _ZN9FBCIOFILED1Ev
add esp, 4
mov ebx, dword ptr [ebp+8]
add ebx, 8
lea eax, [ebx]
push eax
call fb_StrDelete
add esp, 4
pop ebx
mov esp, ebp
pop ebp
ret
.size _ZN6FBCCTXD1Ev, .-_ZN6FBCCTXD1Ev
.balign 16
FBCINIT:
.type FBCINIT, @function
.Lt_003D:
mov dword ptr [FBC+20], -1
mov dword ptr [FBC+24], -1
mov dword ptr [FBC+32], -1
push -1
push 20
push 64
lea eax, [FBC+72]
push eax
call LISTINIT
add esp, 16
push -1
push 20
push 16
lea eax, [FBC+104]
push eax
call LISTINIT
add esp, 16
push 16
lea eax, [FBC+156]
push eax
call STRLISTINIT
add esp, 8
push 64
lea eax, [FBC+188]
push eax
call STRLISTINIT
add esp, 8
push 16
lea eax, [FBC+220]
push eax
call STRLISTINIT
add esp, 8
push 16
lea eax, [FBC+252]
push eax
call STRSETINIT
add esp, 8
push 16
lea eax, [FBC+296]
push eax
call STRSETINIT
add esp, 8
push 32
lea eax, [FBC+340]
push eax
call STRSETINIT
add esp, 8
push 32
lea eax, [FBC+384]
push eax
call STRSETINIT
add esp, 8
call FBGLOBALINIT
push 10
call FBGETOPTION
add esp, 4
mov dword ptr [FBC+3172], eax
mov dword ptr [FBC+68], -1
.Lt_003E:
ret
.size FBCINIT, .-FBCINIT
.balign 16
HSETOUTNAME:
.type HSETOUTNAME, @function
push ebp
mov ebp, esp
sub esp, 44
.Lt_003F:
push 261
lea eax, [FBC+428]
push eax
call fb_StrLen
add esp, 8
test eax, eax
jle .Lt_0042
jmp .Lt_0040
.Lt_0042:
.Lt_0041:
push 0
call FBGETOPTION
add esp, 4
cmp eax, 1
jne .Lt_0044
push 0
push -1
push 3
push offset Lt_0046
push -1
push -1
lea eax, [FBC+689]
push eax
call HSTRIPPATH
add esp, 4
push eax
push -1
push 4
push offset Lt_0045
push -1
lea eax, [FBC+689]
push eax
call HSTRIPFILENAME
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
push 261
lea eax, [FBC+428]
push eax
call fb_StrAssign
add esp, 20
jmp .Lt_0040
.Lt_0044:
.Lt_0043:
push 0
push 261
lea eax, [FBC+689]
push eax
push 261
lea eax, [FBC+428]
push eax
call fb_StrAssign
add esp, 20
push 0
call FBGETOPTION
add esp, 4
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
jne .Lt_004C
.Lt_004D:
push 3
call FBGETOPTION
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 3
je .Lt_0051
.Lt_0052:
cmp dword ptr [ebp-8], 1
je .Lt_0051
.Lt_0053:
cmp dword ptr [ebp-8], 0
je .Lt_0051
.Lt_0054:
cmp dword ptr [ebp-8], 4
jne .Lt_0050
.Lt_0051:
push 0
push -1
push 5
push offset Lt_0055
push 261
lea eax, [FBC+428]
push eax
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
lea eax, [ebp-20]
push eax
call fb_StrConcat
add esp, 20
push eax
push 261
lea eax, [FBC+428]
push eax
call fb_StrAssign
add esp, 20
.Lt_0050:
.Lt_004E:
jmp .Lt_004A
.Lt_004C:
cmp dword ptr [ebp-4], 2
jne .Lt_0057
.Lt_0058:
push 3
call FBGETOPTION
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 1
je .Lt_005C
.Lt_005D:
cmp dword ptr [ebp-8], 0
jne .Lt_005B
.Lt_005C:
push 0
push -1
push 5
push offset Lt_005E
push 261
lea eax, [FBC+428]
push eax
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
lea eax, [ebp-20]
push eax
call fb_StrConcat
add esp, 20
push eax
push 261
lea eax, [FBC+428]
push eax
call fb_StrAssign
add esp, 20
jmp .Lt_0059
.Lt_005B:
cmp dword ptr [ebp-8], 2
je .Lt_0061
.Lt_0062:
cmp dword ptr [ebp-8], 7
je .Lt_0061
.Lt_0063:
cmp dword ptr [ebp-8], 5
je .Lt_0061
.Lt_0064:
cmp dword ptr [ebp-8], 6
je .Lt_0061
.Lt_0065:
cmp dword ptr [ebp-8], 8
jne .Lt_0060
.Lt_0061:
push 0
push -1
push 4
push offset Lt_0066
push -1
push -1
lea eax, [FBC+428]
push eax
call HSTRIPPATH
add esp, 4
push eax
push -1
push 4
push offset Lt_0045
push -1
lea eax, [FBC+428]
push eax
call HSTRIPFILENAME
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
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
lea eax, [ebp-44]
push eax
call fb_StrConcat
add esp, 20
push eax
push 261
lea eax, [FBC+428]
push eax
call fb_StrAssign
add esp, 20
.Lt_0060:
.Lt_0059:
.Lt_0057:
.Lt_004A:
.Lt_0040:
mov esp, ebp
pop ebp
ret
.size HSETOUTNAME, .-HSETOUTNAME
.balign 16
FBCEND:
.type FBCEND, @function
push ebp
mov ebp, esp
sub esp, 8
.Lt_006A:
cmp dword ptr [ebp+8], 0
jne .Lt_006D
mov eax, dword ptr [FBC+68]
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0070
.Lt_0071:
push 1
call FBGETHOSTID
push eax
push 0
call fb_PrintString
add esp, 12
jmp .Lt_006E
.Lt_0070:
cmp dword ptr [ebp-8], 1
jne .Lt_0072
.Lt_0073:
push 1
call FBGETTARGETID
push eax
push 0
call fb_PrintString
add esp, 12
jmp .Lt_006E
.Lt_0072:
cmp dword ptr [ebp-8], 2
jne .Lt_0074
.Lt_0075:
call HSETOUTNAME
push 1
lea eax, [FBC+428]
push eax
call fb_StrAllocTempDescZ
add esp, 4
push eax
push 0
call fb_PrintString
add esp, 12
.Lt_0074:
.Lt_006E:
.Lt_006D:
.Lt_006C:
lea eax, [FBC+156]
push eax
call LISTGETHEAD
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_0076:
cmp dword ptr [ebp-4], 0
je .Lt_0077
push dword ptr [ebp-4]
call fb_FileKill
add esp, 4
test eax, eax
je .Lt_0079
.Lt_0079:
.Lt_0078:
push dword ptr [ebp-4]
call LISTGETNEXT
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_0076
.Lt_0077:
push dword ptr [ebp+8]
call fb_End
add esp, 4
.Lt_006B:
mov esp, ebp
pop ebp
ret
.size FBCEND, .-FBCEND
.balign 16
FBCADDTEMP:
.type FBCADDTEMP, @function
push ebp
mov ebp, esp
.Lt_007A:
push dword ptr [ebp+8]
lea eax, [FBC+156]
push eax
call STRLISTAPPEND
add esp, 8
.Lt_007B:
mov esp, ebp
pop ebp
ret
.size FBCADDTEMP, .-FBCADDTEMP
.balign 16
FBCADDOBJ:
.type FBCADDOBJ, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_007C:
lea eax, [FBC+188]
push eax
call LISTNEWNODE
add esp, 4
mov dword ptr [ebp-8], eax
push 0
push -1
push dword ptr [ebp+8]
push -1
push dword ptr [ebp-8]
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_007D:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size FBCADDOBJ, .-FBCADDOBJ
.balign 16
FBCBUILDPATHTOLIBFILE:
.type FBCBUILDPATHTOLIBFILE, @function
push ebp
mov ebp, esp
sub esp, 96
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_007E:
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
push 0
push -1
push 0
push dword ptr [ebp+8]
push -1
push 2
push offset Lt_001A
push 261
lea eax, [FBC+2911]
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
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-24]
call HFILEEXISTS
add esp, 4
test eax, eax
je .Lt_0083
push 0
push -1
lea eax, [ebp-24]
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrInit
add esp, 20
lea eax, [ebp-24]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_007F
.Lt_0083:
.Lt_0082:
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-64], 0
lea eax, [ebp-64]
push eax
lea eax, [ebp-60]
push eax
push 3
call FBCFINDBIN
add esp, 12
call FBGETCPUFAMILY
mov dword ptr [ebp-96], eax
cmp dword ptr [ebp-96], 0
jne .Lt_0087
.Lt_0088:
push 0
push 6
push offset Lt_0089
push -1
lea eax, [ebp-60]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_0085
.Lt_0087:
cmp dword ptr [ebp-96], 1
jne .Lt_008A
.Lt_008B:
push 0
push 6
push offset Lt_008C
push -1
lea eax, [ebp-60]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_008A:
.Lt_0085:
push 0
push -1
push -1
push 0
push dword ptr [ebp+8]
push 19
push offset Lt_008D
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
lea eax, [ebp-76]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-60]
push eax
mov dword ptr [ebp-88], 0
mov dword ptr [ebp-84], 0
mov dword ptr [ebp-80], 0
lea eax, [ebp-88]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-60]
push eax
call fb_StrAssign
add esp, 20
call fb_FileFree
mov dword ptr [ebp-92], eax
push 0
push 0
push dword ptr [ebp-92]
push 0
push 0
push 2
lea eax, [ebp-60]
push eax
call fb_FileOpenPipe
add esp, 28
test eax, eax
je .Lt_0091
lea eax, [ebp-60]
push eax
call fb_StrDelete
add esp, 4
lea eax, [ebp-24]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_007F
.Lt_0091:
.Lt_0090:
push dword ptr [ebp-92]
call fb_FileInput
add esp, 4
push 0
push -1
lea eax, [ebp-24]
push eax
call fb_InputString
add esp, 12
push dword ptr [ebp-92]
call fb_FileClose
add esp, 4
test eax, eax
je .Lt_0092
push 0
push 0
push offset Lt_0093
push 306
call fb_ErrorThrowAt
add esp, 16
jmp eax
.Lt_0092:
push -1
push dword ptr [ebp-24]
call HSTRIPPATH
add esp, 4
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_0095
lea eax, [ebp-60]
push eax
call fb_StrDelete
add esp, 4
lea eax, [ebp-24]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_007F
.Lt_0095:
.Lt_0094:
push 0
push -1
lea eax, [ebp-24]
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-60]
push eax
call fb_StrDelete
add esp, 4
lea eax, [ebp-24]
push eax
call fb_StrDelete
add esp, 4
.Lt_007F:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
mov esp, ebp
pop ebp
ret
.size FBCBUILDPATHTOLIBFILE, .-FBCBUILDPATHTOLIBFILE
.balign 16
FBCFINDLIBFILE:
.type FBCFINDLIBFILE, @function
push ebp
mov ebp, esp
sub esp, 24
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_0096:
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
push 0
push -1
push dword ptr [ebp+8]
call FBCBUILDPATHTOLIBFILE
add esp, 4
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
push -1
lea eax, [ebp-24]
push eax
call fb_StrLen
add esp, 8
test eax, eax
jle .Lt_0099
push dword ptr [ebp-24]
call HFILEEXISTS
add esp, 4
test eax, eax
jne .Lt_009B
push 0
push 1
push offset Lt_0000
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
.Lt_009B:
.Lt_009A:
.Lt_0099:
.Lt_0098:
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
.Lt_0097:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
mov esp, ebp
pop ebp
ret
.size FBCFINDLIBFILE, .-FBCFINDLIBFILE
.balign 16
FBCADDDEFLIBPATH:
.type FBCADDDEFLIBPATH, @function
push ebp
mov ebp, esp
.Lt_009C:
push -1
push dword ptr [ebp+8]
lea eax, [FBC+384]
push eax
call STRSETADD
add esp, 12
.Lt_009D:
mov esp, ebp
pop ebp
ret
.size FBCADDDEFLIBPATH, .-FBCADDDEFLIBPATH
.balign 16
FBCADDLIBPATHFOR:
.type FBCADDLIBPATHFOR, @function
push ebp
mov ebp, esp
sub esp, 24
.Lt_009E:
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
push 0
push -1
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
push 0
push -1
push dword ptr [ebp+8]
call FBCBUILDPATHTOLIBFILE
add esp, 4
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-24]
call HSTRIPFILENAME
add esp, 4
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
push 0
push -1
lea eax, [ebp-12]
push eax
call PATHSTRIPDIV
add esp, 4
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
push -1
lea eax, [ebp-12]
push eax
call fb_StrLen
add esp, 8
test eax, eax
jle .Lt_00A2
lea eax, [ebp-12]
push eax
call FBCADDDEFLIBPATH
add esp, 4
.Lt_00A2:
.Lt_00A1:
lea eax, [ebp-12]
push eax
call fb_StrDelete
add esp, 4
.Lt_009F:
mov esp, ebp
pop ebp
ret
.size FBCADDLIBPATHFOR, .-FBCADDLIBPATHFOR
.balign 16
CLEARDEFLIST:
.type CLEARDEFLIST, @function
push ebp
mov ebp, esp
sub esp, 52
mov dword ptr [ebp-4], 0
.Lt_00C6:
call fb_FileFree
mov dword ptr [ebp-8], eax
push 0
push dword ptr [ebp-8]
push 0
push 0
push 2
push dword ptr [ebp+8]
call fb_FileOpen
add esp, 24
test eax, eax
je .Lt_00C9
mov dword ptr [ebp-4], 0
jmp .Lt_00C7
.Lt_00C9:
.Lt_00C8:
push 0
push -1
push 11
push offset Lt_00CA
push -1
push dword ptr [ebp+8]
call HSTRIPEXT
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
push -1
lea eax, [ebp-20]
push eax
call fb_StrInit
add esp, 20
call fb_FileFree
mov dword ptr [ebp-36], eax
push 0
push dword ptr [ebp-36]
push 0
push 0
push 3
lea eax, [ebp-20]
push eax
call fb_FileOpen
add esp, 24
test eax, eax
je .Lt_00CD
push dword ptr [ebp-8]
call fb_FileClose
add esp, 4
test eax, eax
je .Lt_00CE
push 0
push 0
push offset Lt_0093
push 482
call fb_ErrorThrowAt
add esp, 16
jmp eax
.Lt_00CE:
mov dword ptr [ebp-4], 0
lea eax, [ebp-20]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_00C7
.Lt_00CD:
.Lt_00CC:
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
.Lt_00CF:
push dword ptr [ebp-8]
call fb_FileEof
add esp, 4
test eax, eax
jne .Lt_00D0
push 0
push -1
lea eax, [ebp-48]
push eax
push dword ptr [ebp-8]
call fb_FileLineInput
add esp, 16
push 5
push offset Lt_00D1
push -1
push 4
lea eax, [ebp-48]
push eax
call fb_RIGHT
add esp, 8
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_00D3
push 0
push -1
push -1
lea eax, [ebp-48]
push eax
call fb_StrLen
add esp, 8
add eax, -4
push eax
lea eax, [ebp-48]
push eax
call fb_LEFT
add esp, 8
push eax
push -1
lea eax, [ebp-48]
push eax
call fb_StrAssign
add esp, 20
.Lt_00D3:
.Lt_00D2:
mov eax, dword ptr [ebp-36]
mov dword ptr [ebp-52], eax
push 1
lea eax, [ebp-48]
push eax
push dword ptr [ebp-52]
call fb_PrintString
add esp, 12
jmp .Lt_00CF
.Lt_00D0:
push dword ptr [ebp-36]
call fb_FileClose
add esp, 4
test eax, eax
je .Lt_00D5
push 0
push 0
push offset Lt_0093
push 497
call fb_ErrorThrowAt
add esp, 16
jmp eax
.Lt_00D5:
push dword ptr [ebp-8]
call fb_FileClose
add esp, 4
test eax, eax
je .Lt_00D6
push 0
push 0
push offset Lt_0093
push 498
call fb_ErrorThrowAt
add esp, 16
jmp eax
.Lt_00D6:
push dword ptr [ebp+8]
call fb_FileKill
add esp, 4
mov eax, dword ptr [ebp+8]
push dword ptr [eax]
push dword ptr [ebp-20]
call rename
add esp, 8
test eax, eax
sete al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-4], eax
lea eax, [ebp-48]
push eax
call fb_StrDelete
add esp, 4
lea eax, [ebp-20]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_00C7
lea eax, [ebp-48]
push eax
call fb_StrDelete
add esp, 4
lea eax, [ebp-20]
push eax
call fb_StrDelete
add esp, 4
.Lt_00C7:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size CLEARDEFLIST, .-CLEARDEFLIST
.balign 16
HGENERATEEMPTYDEFFILE:
.type HGENERATEEMPTYDEFFILE, @function
push ebp
mov ebp, esp
sub esp, 12
mov dword ptr [ebp-4], 0
.Lt_00D7:
call fb_FileFree
mov dword ptr [ebp-8], eax
push 0
push dword ptr [ebp-8]
push 0
push 0
push 3
push dword ptr [ebp+8]
call fb_FileOpen
add esp, 24
test eax, eax
je .Lt_00DA
jmp .Lt_00D8
.Lt_00DA:
.Lt_00D9:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-12], eax
push 1
push 7
push offset Lt_00DC
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push dword ptr [ebp-12]
call fb_PrintString
add esp, 12
push dword ptr [ebp-8]
call fb_FileClose
add esp, 4
test eax, eax
je .Lt_00DD
push 0
push 0
push offset Lt_0093
push 512
call fb_ErrorThrowAt
add esp, 16
jmp eax
.Lt_00DD:
mov dword ptr [ebp-4], -1
.Lt_00D8:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size HGENERATEEMPTYDEFFILE, .-HGENERATEEMPTYDEFFILE
.balign 16
MAKEIMPLIB:
.type MAKEIMPLIB, @function
push ebp
mov ebp, esp
sub esp, 112
mov dword ptr [ebp-4], 0
.Lt_00DE:
push dword ptr [ebp+12]
call CLEARDEFLIST
add esp, 4
test eax, eax
jne .Lt_00E1
jmp .Lt_00DF
.Lt_00E1:
.Lt_00E0:
mov eax, dword ptr [ebp+12]
push dword ptr [eax]
call fb_FileLen
add esp, 4
cmp edx, 0
jne .Lt_00E3
cmp eax, 0
jne .Lt_00E3
.Lt_06D2:
push dword ptr [ebp+12]
call HGENERATEEMPTYDEFFILE
add esp, 4
test eax, eax
jne .Lt_00E5
jmp .Lt_00DF
.Lt_00E5:
.Lt_00E4:
.Lt_00E3:
.Lt_00E2:
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
push 0
push -1
push -1
push 2
push offset Lt_00E7
push -1
push -1
push dword ptr [ebp+12]
push 8
push offset Lt_00E6
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
push 0
push 13
push offset Lt_00EB
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
lea eax, [FBC+428]
push eax
call HSTRIPPATH
add esp, 4
push eax
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 2
push offset Lt_00E7
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push -1
push 8
push offset Lt_00ED
push -1
push -1
push dword ptr [ebp+8]
push -1
push 4
push offset Lt_0045
push -1
push -1
lea eax, [FBC+428]
push eax
call HSTRIPFILENAME
add esp, 4
push eax
push 16
push offset Lt_00EC
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
mov dword ptr [ebp-88], 0
mov dword ptr [ebp-84], 0
mov dword ptr [ebp-80], 0
lea eax, [ebp-88]
push eax
call fb_StrConcat
add esp, 20
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
lea eax, [ebp-16]
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
lea eax, [ebp-16]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-16]
push eax
push 5
push offset Lt_00F3
call FBCRUNBIN
add esp, 12
test eax, eax
jne .Lt_00F5
lea eax, [ebp-16]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_00DF
.Lt_00F5:
.Lt_00F4:
cmp dword ptr [FBC+40], 0
jne .Lt_00F7
push dword ptr [ebp+12]
call FBCADDTEMP
add esp, 4
.Lt_00F7:
.Lt_00F6:
mov dword ptr [ebp-4], -1
lea eax, [ebp-16]
push eax
call fb_StrDelete
add esp, 4
.Lt_00DF:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size MAKEIMPLIB, .-MAKEIMPLIB
.balign 16
HFINDLIB:
.type HFINDLIB, @function
push ebp
mov ebp, esp
sub esp, 24
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_00F8:
push 0
push -1
push dword ptr [ebp+8]
call FBCBUILDPATHTOLIBFILE
add esp, 4
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrInit
add esp, 20
push -1
lea eax, [ebp-24]
push eax
call fb_StrLen
add esp, 8
test eax, eax
jle .Lt_00FB
push 0
push 3
push offset Lt_00FC
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
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
push 0
push 2
push offset Lt_00E7
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_00FA
.Lt_00FB:
push 0
push 1
push -1
push dword ptr [ebp+8]
push 23
call ERRREPORTEX
add esp, 20
.Lt_00FA:
lea eax, [ebp-24]
push eax
call fb_StrDelete
add esp, 4
.Lt_00F9:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
mov esp, ebp
pop ebp
ret
.size HFINDLIB, .-HFINDLIB
.balign 16
HLINKFILES:
.type HLINKFILES, @function
push ebp
mov ebp, esp
sub esp, 124
push ebx
mov dword ptr [ebp-4], 0
.Lt_00FD:
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-4], 0
call HSETOUTNAME
push 3
call FBGETOPTION
add esp, 4
mov dword ptr [ebp-44], eax
cmp dword ptr [ebp-44], 0
jne .Lt_0101
.Lt_0102:
call FBGETCPUFAMILY
mov dword ptr [ebp-48], eax
cmp dword ptr [ebp-48], 0
jne .Lt_0105
.Lt_0106:
push 0
push 11
push offset Lt_0107
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_0103
.Lt_0105:
cmp dword ptr [ebp-48], 1
jne .Lt_0108
.Lt_0109:
push 0
push 12
push offset Lt_010A
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_0108:
.Lt_0103:
jmp .Lt_00FF
.Lt_0101:
cmp dword ptr [ebp-44], 2
jne .Lt_010B
.Lt_010C:
call FBGETCPUFAMILY
mov dword ptr [ebp-48], eax
cmp dword ptr [ebp-48], 0
jne .Lt_010F
.Lt_0110:
push 0
push 13
push offset Lt_0111
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_010D
.Lt_010F:
cmp dword ptr [ebp-48], 1
jne .Lt_0112
.Lt_0113:
push 0
push 15
push offset Lt_0114
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_010D
.Lt_0112:
cmp dword ptr [ebp-48], 2
jne .Lt_0115
.Lt_0116:
push 0
push 22
push offset Lt_0117
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_0115:
.Lt_010D:
.Lt_010B:
.Lt_00FF:
push 0
push 5
push offset Lt_011A
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 261
lea eax, [FBC+428]
push eax
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 2
push offset Lt_0119
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
push 3
call FBGETOPTION
add esp, 4
mov dword ptr [ebp-44], eax
jmp .Lt_011C
.Lt_011E:
push 129
lea eax, [FBC+1217]
push eax
call fb_StrLen
add esp, 8
test eax, eax
jne .Lt_0120
push 0
push 8
push offset Lt_0121
push 129
lea eax, [FBC+1217]
push eax
call fb_StrAssign
add esp, 20
jmp .Lt_011F
.Lt_0120:
push 4
push offset Lt_0122
push 129
lea eax, [FBC+1217]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_0124
push 0
push 8
push offset Lt_0125
push 129
lea eax, [FBC+1217]
push eax
call fb_StrAssign
add esp, 20
.Lt_0124:
.Lt_0123:
.Lt_011F:
push 0
push 13
push offset Lt_0126
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 129
lea eax, [FBC+1217]
push eax
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
call FBGETOPTION
add esp, 4
cmp eax, 2
jne .Lt_0128
push 0
push -1
mov dword ptr [ebp-68], 0
mov dword ptr [ebp-64], 0
mov dword ptr [ebp-60], 0
push 0
push -1
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
push 0
push 261
lea eax, [FBC+428]
push eax
push -1
lea eax, [ebp-56]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-56]
push eax
call HSTRIPEXT
add esp, 4
push eax
push -1
lea eax, [ebp-68]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-68]
call HSTRIPPATH
add esp, 4
push eax
push -1
lea eax, [ebp-28]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-68]
push eax
call fb_StrDelete
add esp, 4
lea eax, [ebp-56]
push eax
call fb_StrDelete
add esp, 4
push 0
push 30
push offset Lt_012B
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
call FBGETCPUFAMILY
test eax, eax
jne .Lt_012D
push 0
push 26
push offset Lt_012E
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_012C
.Lt_012D:
push 0
push 22
push offset Lt_012F
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_012C:
.Lt_0128:
.Lt_0127:
jmp .Lt_011B
.Lt_0130:
push 0
call FBGETOPTION
add esp, 4
cmp eax, 2
jne .Lt_0132
push 0
push -1
mov dword ptr [ebp-68], 0
mov dword ptr [ebp-64], 0
mov dword ptr [ebp-60], 0
push 0
push -1
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
push 0
push 261
lea eax, [FBC+428]
push eax
push -1
lea eax, [ebp-56]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-56]
push eax
call HSTRIPEXT
add esp, 4
push eax
push -1
lea eax, [ebp-68]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-68]
call HSTRIPPATH
add esp, 4
push eax
push -1
lea eax, [ebp-28]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-68]
push eax
call fb_StrDelete
add esp, 4
lea eax, [ebp-56]
push eax
call fb_StrDelete
add esp, 4
push 0
push 12
push offset Lt_0135
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
lea eax, [FBC+428]
push eax
call HSTRIPPATH
add esp, 4
push eax
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
push 4
push offset Lt_0045
push -1
push 3
lea eax, [ebp-28]
push eax
call fb_LEFT
add esp, 8
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_0137
push 0
push -1
push -1
lea eax, [ebp-28]
push eax
call fb_StrLen
add esp, 8
add eax, -3
push eax
lea eax, [ebp-28]
push eax
call fb_RIGHT
add esp, 8
push eax
push -1
lea eax, [ebp-28]
push eax
call fb_StrAssign
add esp, 20
.Lt_0137:
.Lt_0136:
jmp .Lt_0131
.Lt_0132:
push 3
call FBGETOPTION
add esp, 4
mov dword ptr [ebp-48], eax
jmp .Lt_0139
.Lt_013B:
push 0
push 38
push offset Lt_013C
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_0138
.Lt_013D:
call FBGETCPUFAMILY
mov dword ptr [ebp-52], eax
cmp dword ptr [ebp-52], 0
jne .Lt_0140
.Lt_0141:
push 0
push 36
push offset Lt_0142
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_013E
.Lt_0140:
cmp dword ptr [ebp-52], 1
jne .Lt_0143
.Lt_0144:
push 0
push 45
push offset Lt_0145
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_013E
.Lt_0143:
cmp dword ptr [ebp-52], 2
jne .Lt_0146
.Lt_0147:
push 0
push 42
push offset Lt_0148
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_013E
.Lt_0146:
cmp dword ptr [ebp-52], 3
jne .Lt_0149
.Lt_014A:
push 0
push 44
push offset Lt_014B
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_0149:
.Lt_013E:
jmp .Lt_0138
.Lt_014C:
push 0
push 40
push offset Lt_014D
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_0138
.Lt_014E:
push 0
push 36
push offset Lt_014F
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_0138
.Lt_0139:
mov eax, dword ptr [ebp-48]
add eax, 4294967294
cmp eax, 6
ja .Lt_0138
mov eax, dword ptr [ebp-48]
jmp dword ptr [.LT_0150+eax*4-8]
.LT_0150:
.int .Lt_013D
.int .Lt_0138
.int .Lt_0138
.int .Lt_013B
.int .Lt_014E
.int .Lt_0138
.int .Lt_014C
.Lt_0138:
.Lt_0131:
push 0
call FBGETOPTION
add esp, 4
cmp eax, 2
sete al
shr eax, 1
sbb eax, eax
push 22
mov ebx, eax
call FBGETOPTION
add esp, 4
or ebx, eax
je .Lt_0152
push 0
push 18
push offset Lt_0153
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_0152:
.Lt_0151:
jmp .Lt_011B
.Lt_0154:
push 0
push 66
push offset Lt_0155
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_011B
.Lt_011C:
cmp dword ptr [ebp-44], 8
ja .Lt_011B
mov eax, dword ptr [ebp-44]
jmp dword ptr [.LT_0156+eax*4]
.LT_0156:
.int .Lt_011E
.int .Lt_011E
.int .Lt_0130
.int .Lt_011B
.int .Lt_0154
.int .Lt_0130
.int .Lt_0130
.int .Lt_0130
.int .Lt_0130
.Lt_011B:
push 3
call FBGETOPTION
add esp, 4
cmp eax, 3
jne .Lt_0158
push 0
push 6
push offset Lt_0159
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 261
lea eax, [FBC+2911]
push eax
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 13
push offset Lt_015B
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_0157
.Lt_0158:
push 0
push 3
push offset Lt_00FC
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 261
lea eax, [FBC+2911]
push eax
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 12
push offset Lt_015D
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_0157:
push 3
call FBGETOPTION
add esp, 4
mov dword ptr [ebp-44], eax
jmp .Lt_015F
.Lt_0161:
push 27
call FBGETOPTION
add esp, 4
mov dword ptr [ebp-48], eax
push 0
push 10
push offset Lt_0162
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push dword ptr [ebp-48]
call fb_IntToStr
add esp, 4
push eax
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 2
push offset Lt_0163
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push dword ptr [ebp-48]
call fb_IntToStr
add esp, 4
push eax
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
call FBGETOPTION
add esp, 4
cmp eax, 2
jne .Lt_0165
push 0
push -1
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
push 0
push 261
lea eax, [FBC+428]
push eax
push -1
lea eax, [ebp-60]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-60]
push eax
call HSTRIPEXT
add esp, 4
push eax
push -1
lea eax, [ebp-40]
push eax
call fb_StrAssign
add esp, 20
push 0
push 5
push offset Lt_0167
push -1
lea eax, [ebp-40]
push eax
call fb_StrConcatAssign
add esp, 20
lea eax, [ebp-60]
push eax
call fb_StrDelete
add esp, 4
push 0
push 16
push offset Lt_0168
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
lea eax, [ebp-40]
push eax
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 2
push offset Lt_00E7
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_0165:
.Lt_0164:
jmp .Lt_015E
.Lt_0169:
push 0
push 23
push offset Lt_016A
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_015E
.Lt_015F:
cmp dword ptr [ebp-44], 4
ja .Lt_015E
mov eax, dword ptr [ebp-44]
jmp dword ptr [.LT_016B+eax*4]
.LT_016B:
.int .Lt_0161
.int .Lt_0161
.int .Lt_015E
.int .Lt_015E
.int .Lt_0169
.Lt_015E:
cmp dword ptr [FBC+2124], 0
je .Lt_016D
push 0
push 10
push offset Lt_016E
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_016D:
.Lt_016C:
push 261
lea eax, [FBC+956]
push eax
call fb_StrLen
add esp, 8
test eax, eax
jle .Lt_0170
push 0
push 7
push offset Lt_0171
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 261
lea eax, [FBC+956]
push eax
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_0170:
.Lt_016F:
push 12
call FBGETOPTION
add esp, 4
test eax, eax
jne .Lt_0173
push 16
call FBGETOPTION
add esp, 4
test eax, eax
jne .Lt_0175
push 0
push 4
push offset Lt_0176
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_0175:
.Lt_0174:
.Lt_0173:
.Lt_0172:
lea eax, [FBC+384]
push eax
call LISTGETHEAD
add esp, 4
mov dword ptr [ebp-44], eax
.Lt_0177:
cmp dword ptr [ebp-44], 0
je .Lt_0178
push 0
push -1
push -1
push 2
push offset Lt_00E7
push -1
push -1
mov eax, dword ptr [ebp-44]
lea ebx, [eax]
push ebx
push 6
push offset Lt_0179
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
lea ebx, [ebp-56]
push ebx
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
lea eax, [ebp-16]
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
lea eax, [ebp-16]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-44]
call LISTGETNEXT
add esp, 4
mov dword ptr [ebp-44], eax
jmp .Lt_0177
.Lt_0178:
push 3
call FBGETOPTION
add esp, 4
mov dword ptr [ebp-44], eax
jmp .Lt_017E
.Lt_0180:
push 0
call FBGETOPTION
add esp, 4
cmp eax, 2
jne .Lt_0182
push 0
push -1
push offset Lt_0183
call HFINDLIB
add esp, 4
push eax
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_0181
.Lt_0182:
push 0
push -1
push offset Lt_0183
call HFINDLIB
add esp, 4
push eax
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
push 16
call FBGETOPTION
add esp, 4
test eax, eax
je .Lt_0185
push 0
push -1
push offset Lt_0186
call HFINDLIB
add esp, 4
push eax
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_0185:
.Lt_0184:
.Lt_0181:
jmp .Lt_017D
.Lt_0187:
push 0
call FBGETOPTION
add esp, 4
cmp eax, 2
jne .Lt_0189
push 0
push -1
push offset Lt_018A
call HFINDLIB
add esp, 4
push eax
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_0188
.Lt_0189:
push 0
push -1
push offset Lt_018B
call HFINDLIB
add esp, 4
push eax
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
push 16
call FBGETOPTION
add esp, 4
test eax, eax
je .Lt_018D
push 0
push -1
push offset Lt_018E
call HFINDLIB
add esp, 4
push eax
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_018D:
.Lt_018C:
.Lt_0188:
push 0
push -1
push offset Lt_018F
call HFINDLIB
add esp, 4
push eax
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_017D
.Lt_0190:
push 16
call FBGETOPTION
add esp, 4
test eax, eax
je .Lt_0192
push 0
push -1
push offset Lt_0186
call HFINDLIB
add esp, 4
push eax
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_0191
.Lt_0192:
push 0
push -1
push offset Lt_0183
call HFINDLIB
add esp, 4
push eax
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_0191:
jmp .Lt_017D
.Lt_0193:
push 0
call FBGETOPTION
add esp, 4
test eax, eax
jne .Lt_0195
push 16
call FBGETOPTION
add esp, 4
test eax, eax
je .Lt_0197
push 3
call FBGETOPTION
add esp, 4
mov dword ptr [ebp-48], eax
jmp .Lt_0199
.Lt_019B:
push 0
push -1
push offset Lt_0186
call HFINDLIB
add esp, 4
push eax
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_0198
.Lt_019C:
push 0
push -1
push offset Lt_019D
call HFINDLIB
add esp, 4
push eax
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_0198
.Lt_0199:
mov eax, dword ptr [ebp-48]
add eax, 4294967290
cmp eax, 2
ja .Lt_019C
mov eax, dword ptr [ebp-48]
jmp dword ptr [.LT_019E+eax*4-24]
.LT_019E:
.int .Lt_019B
.int .Lt_019C
.int .Lt_019B
.Lt_0198:
jmp .Lt_0196
.Lt_0197:
push 3
call FBGETOPTION
add esp, 4
mov dword ptr [ebp-48], eax
jmp .Lt_01A0
.Lt_01A2:
push 0
push -1
push offset Lt_0183
call HFINDLIB
add esp, 4
push eax
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_019F
.Lt_01A3:
push 0
push -1
push offset Lt_01A4
call HFINDLIB
add esp, 4
push eax
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_019F
.Lt_01A0:
mov eax, dword ptr [ebp-48]
add eax, 4294967290
cmp eax, 2
ja .Lt_01A3
mov eax, dword ptr [ebp-48]
jmp dword ptr [.LT_01A5+eax*4-24]
.LT_01A5:
.int .Lt_01A2
.int .Lt_01A3
.int .Lt_01A2
.Lt_019F:
.Lt_0196:
.Lt_0195:
.Lt_0194:
push 3
call FBGETOPTION
add esp, 4
cmp eax, 6
je .Lt_01A7
push 0
push -1
push offset Lt_01A8
call HFINDLIB
add esp, 4
push eax
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_01A7:
.Lt_01A6:
push 26
call FBGETOPTION
add esp, 4
test eax, eax
je .Lt_01AA
push 0
push -1
push offset Lt_01AB
call HFINDLIB
add esp, 4
push eax
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_01A9
.Lt_01AA:
push 0
push -1
push offset Lt_018F
call HFINDLIB
add esp, 4
push eax
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_01A9:
jmp .Lt_017D
.Lt_01AC:
push 0
push -1
push offset Lt_0183
call HFINDLIB
add esp, 4
push eax
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_017D
.Lt_017E:
cmp dword ptr [ebp-44], 8
ja .Lt_017D
mov eax, dword ptr [ebp-44]
jmp dword ptr [.LT_01AD+eax*4]
.LT_01AD:
.int .Lt_0187
.int .Lt_0180
.int .Lt_0193
.int .Lt_0190
.int .Lt_01AC
.int .Lt_0193
.int .Lt_0193
.int .Lt_0193
.int .Lt_0193
.Lt_017D:
cmp dword ptr [FBC+2120], 0
jne .Lt_01AF
push 0
push 3
push offset Lt_00FC
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 261
lea eax, [FBC+2911]
push eax
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 2
push offset Lt_001A
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
push 26
call FBGETOPTION
add esp, 4
test eax, eax
je .Lt_01B1
push 0
push 11
push offset Lt_01B2
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_01B0
.Lt_01B1:
push 0
push 8
push offset Lt_01B3
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_01B0:
push 0
push 2
push offset Lt_00E7
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_01AF:
.Lt_01AE:
lea eax, [FBC+188]
push eax
call LISTGETHEAD
add esp, 4
mov dword ptr [ebp-44], eax
.Lt_01B4:
cmp dword ptr [ebp-44], 0
je .Lt_01B5
push 0
push -1
push -1
push 2
push offset Lt_00E7
push -1
push -1
push dword ptr [ebp-44]
push 3
push offset Lt_00FC
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
lea eax, [ebp-16]
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
lea eax, [ebp-16]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-44]
call LISTGETNEXT
add esp, 4
mov dword ptr [ebp-44], eax
jmp .Lt_01B4
.Lt_01B5:
push 0
push 6
push offset Lt_01B9
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
lea eax, [FBC+220]
push eax
call LISTGETHEAD
add esp, 4
mov dword ptr [ebp-44], eax
.Lt_01BA:
cmp dword ptr [ebp-44], 0
je .Lt_01BB
push 0
push -1
push -1
push 2
push offset Lt_00E7
push -1
push -1
push dword ptr [ebp-44]
push 3
push offset Lt_00FC
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
lea eax, [ebp-16]
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
lea eax, [ebp-16]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-44]
call LISTGETNEXT
add esp, 4
mov dword ptr [ebp-44], eax
jmp .Lt_01BA
.Lt_01BB:
lea eax, [FBC+340]
push eax
call LISTGETHEAD
add esp, 4
mov dword ptr [ebp-44], eax
push 0
call FBGETOPTION
add esp, 4
cmp eax, 2
sete al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-48], eax
.Lt_01BF:
cmp dword ptr [ebp-44], 0
je .Lt_01C0
mov eax, dword ptr [ebp-48]
test eax, eax
sete al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_01C1
push -1
lea eax, [ebp-28]
push eax
push -1
mov eax, dword ptr [ebp-44]
lea ebx, [eax]
push ebx
call fb_StrCompare
add esp, 16
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
setne al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-52], eax
jmp .Lt_06D3
.Lt_01C1:
mov dword ptr [ebp-52], -1
.Lt_06D3:
cmp dword ptr [ebp-52], 0
je .Lt_01C4
push 0
push -1
push -1
push -1
mov eax, dword ptr [ebp-44]
lea ebx, [eax]
push ebx
push 4
push offset Lt_01C5
mov dword ptr [ebp-64], 0
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
lea ebx, [ebp-64]
push ebx
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-16]
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
lea eax, [ebp-16]
push eax
call fb_StrAssign
add esp, 20
.Lt_01C4:
.Lt_01C3:
push dword ptr [ebp-44]
call LISTGETNEXT
add esp, 4
mov dword ptr [ebp-44], eax
jmp .Lt_01BF
.Lt_01C0:
push 0
push 6
push offset Lt_01C8
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
push 3
call FBGETOPTION
add esp, 4
mov dword ptr [ebp-44], eax
jmp .Lt_01CA
.Lt_01CC:
push 26
call FBGETOPTION
add esp, 4
test eax, eax
je .Lt_01CE
push 0
push -1
push offset Lt_01CF
call HFINDLIB
add esp, 4
push eax
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_01CD
.Lt_01CE:
push 0
push -1
push offset Lt_01D0
call HFINDLIB
add esp, 4
push eax
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_01CD:
push 3
call FBGETOPTION
add esp, 4
cmp eax, 6
je .Lt_01D2
push 0
push -1
push offset Lt_01D3
call HFINDLIB
add esp, 4
push eax
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_01D2:
.Lt_01D1:
jmp .Lt_01C9
.Lt_01D4:
push 0
push -1
push offset Lt_01D0
call HFINDLIB
add esp, 4
push eax
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_01C9
.Lt_01CA:
cmp dword ptr [ebp-44], 8
ja .Lt_01C9
mov eax, dword ptr [ebp-44]
jmp dword ptr [.LT_01D5+eax*4]
.LT_01D5:
.int .Lt_01D4
.int .Lt_01C9
.int .Lt_01CC
.int .Lt_01C9
.int .Lt_01C9
.int .Lt_01CC
.int .Lt_01CC
.int .Lt_01CC
.int .Lt_01CC
.Lt_01C9:
push 0
push 2
push offset Lt_00B8
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 128
lea eax, [FBC+1474]
push eax
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
lea eax, [ebp-16]
push eax
push 2
push offset Lt_01D6
call FBCRUNBIN
add esp, 12
test eax, eax
jne .Lt_01D8
lea eax, [ebp-40]
push eax
call fb_StrDelete
add esp, 4
lea eax, [ebp-28]
push eax
call fb_StrDelete
add esp, 4
lea eax, [ebp-16]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_00FE
.Lt_01D8:
.Lt_01D7:
push 3
call FBGETOPTION
add esp, 4
mov dword ptr [ebp-44], eax
jmp .Lt_01DA
.Lt_01DC:
call fb_FileFree
mov dword ptr [ebp-48], eax
push 0
push dword ptr [ebp-48]
push 0
push 3
push 0
lea eax, [FBC+428]
push eax
call fb_StrAllocTempDescZ
add esp, 4
push eax
call fb_FileOpen
add esp, 24
test eax, eax
je .Lt_01DE
lea eax, [ebp-40]
push eax
call fb_StrDelete
add esp, 4
lea eax, [ebp-28]
push eax
call fb_StrDelete
add esp, 4
lea eax, [ebp-16]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_00FE
.Lt_01DE:
.Lt_01DD:
push 4
push 27
call FBGETOPTION
add esp, 4
mov dword ptr [ebp-52], eax
lea eax, [ebp-52]
push eax
push 533
push dword ptr [ebp-48]
call fb_FilePut
add esp, 16
test eax, eax
je .Lt_01E0
push 0
push 0
push offset Lt_0093
push 940
call fb_ErrorThrowAt
add esp, 16
jmp eax
.Lt_01E0:
push dword ptr [ebp-48]
call fb_FileClose
add esp, 4
test eax, eax
je .Lt_01E1
push 0
push 0
push offset Lt_0093
push 942
call fb_ErrorThrowAt
add esp, 16
jmp eax
.Lt_01E1:
jmp .Lt_01D9
.Lt_01E2:
push 0
call FBGETOPTION
add esp, 4
cmp eax, 2
jne .Lt_01E4
lea eax, [ebp-40]
push eax
lea eax, [ebp-28]
push eax
call MAKEIMPLIB
add esp, 8
test eax, eax
jne .Lt_01E6
lea eax, [ebp-40]
push eax
call fb_StrDelete
add esp, 4
lea eax, [ebp-28]
push eax
call fb_StrDelete
add esp, 4
lea eax, [ebp-16]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_00FE
.Lt_01E6:
.Lt_01E5:
.Lt_01E4:
.Lt_01E3:
jmp .Lt_01D9
.Lt_01E7:
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-68], 0
mov dword ptr [ebp-64], 0
mov dword ptr [ebp-60], 0
push 129
lea eax, [FBC+1988]
push eax
call fb_StrLen
add esp, 8
test eax, eax
jne .Lt_01E9
push 0
push -1
mov dword ptr [ebp-124], 0
mov dword ptr [ebp-120], 0
mov dword ptr [ebp-116], 0
push 0
push 261
lea eax, [FBC+428]
push eax
push -1
lea eax, [ebp-124]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-124]
push eax
call HSTRIPEXT
add esp, 4
push eax
push 129
lea eax, [FBC+1988]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-124]
push eax
call fb_StrDelete
add esp, 4
.Lt_01E9:
.Lt_01E8:
push 0
push 9
push offset Lt_01EC
push -1
lea eax, [ebp-68]
push eax
call fb_StrAssign
add esp, 20
push 0
push 129
lea eax, [FBC+1988]
push eax
push -1
lea eax, [ebp-68]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_01ED
push -1
lea eax, [ebp-68]
push eax
call fb_StrConcatAssign
add esp, 20
push 12
call FBGETOPTION
add esp, 4
test eax, eax
je .Lt_01EF
push 0
push 12
push offset Lt_01F1
push -1
lea eax, [ebp-68]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
mov dword ptr [ebp-124], 0
mov dword ptr [ebp-120], 0
mov dword ptr [ebp-116], 0
push 0
push 261
lea eax, [FBC+428]
push eax
push -1
lea eax, [ebp-124]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-124]
push eax
call HSTRIPEXT
add esp, 4
push eax
push -1
lea eax, [ebp-68]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 7
push offset Lt_01F4
push -1
lea eax, [ebp-68]
push eax
call fb_StrConcatAssign
add esp, 20
lea eax, [ebp-124]
push eax
call fb_StrDelete
add esp, 4
.Lt_01EF:
.Lt_01EE:
push 0
push 8
push offset Lt_01F6
push -1
lea eax, [ebp-68]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
mov dword ptr [ebp-84], 0
mov dword ptr [ebp-80], 0
mov dword ptr [ebp-76], 0
push 0
push 261
lea eax, [FBC+428]
push eax
push -1
lea eax, [ebp-84]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-84]
push eax
call HSTRIPEXT
add esp, 4
push eax
push -1
lea eax, [ebp-68]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 5
push offset Lt_01F8
push -1
lea eax, [ebp-68]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 2
push offset Lt_0119
push -1
lea eax, [ebp-68]
push eax
call fb_StrConcatAssign
add esp, 20
lea eax, [ebp-84]
push eax
call fb_StrDelete
add esp, 4
push 0
push 3
push offset Lt_01F9
push -1
lea eax, [ebp-68]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 261
lea eax, [FBC+428]
push eax
push -1
lea eax, [ebp-68]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 2
push offset Lt_0119
push -1
lea eax, [ebp-68]
push eax
call fb_StrConcatAssign
add esp, 20
cmp dword ptr [FBC+56], 0
jne .Lt_01FB
push 0
push 6
push offset Lt_01FC
push -1
lea eax, [ebp-68]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_01FB:
.Lt_01FA:
cmp dword ptr [FBC+56], 0
je .Lt_01FE
push 2
push 6
push offset Lt_01FF
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
lea eax, [ebp-68]
push eax
push 0
call fb_PrintString
add esp, 12
.Lt_01FE:
.Lt_01FD:
mov dword ptr [ebp-88], 0
lea eax, [ebp-88]
push eax
lea eax, [ebp-56]
push eax
push 8
call FBCFINDBIN
add esp, 12
push -1
lea eax, [ebp-68]
push eax
push -1
push 2
push offset Lt_00B8
push -1
lea eax, [ebp-56]
push eax
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
call fb_Shell
add esp, 4
mov dword ptr [ebp-72], eax
cmp dword ptr [ebp-72], 0
je .Lt_0204
cmp dword ptr [FBC+56], 0
je .Lt_0206
push 1
push -1
push dword ptr [ebp-72]
call fb_IntToStr
add esp, 4
push eax
push 24
push offset Lt_0207
mov dword ptr [ebp-124], 0
mov dword ptr [ebp-120], 0
mov dword ptr [ebp-116], 0
lea eax, [ebp-124]
push eax
call fb_StrConcat
add esp, 20
push eax
push 0
call fb_PrintString
add esp, 12
.Lt_0206:
.Lt_0205:
lea eax, [ebp-68]
push eax
call fb_StrDelete
add esp, 4
lea eax, [ebp-56]
push eax
call fb_StrDelete
add esp, 4
lea eax, [ebp-40]
push eax
call fb_StrDelete
add esp, 4
lea eax, [ebp-28]
push eax
call fb_StrDelete
add esp, 4
lea eax, [ebp-16]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_00FE
.Lt_0204:
.Lt_0203:
lea eax, [FBC+428]
push eax
call fb_StrAllocTempDescZ
add esp, 4
push eax
call fb_FileKill
add esp, 4
lea eax, [ebp-68]
push eax
call fb_StrDelete
add esp, 4
lea eax, [ebp-56]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_01D9
.Lt_01DA:
cmp dword ptr [ebp-44], 4
ja .Lt_01D9
mov eax, dword ptr [ebp-44]
jmp dword ptr [.LT_0209+eax*4]
.LT_0209:
.int .Lt_01E2
.int .Lt_01E2
.int .Lt_01D9
.int .Lt_01DC
.int .Lt_01E7
.Lt_01D9:
mov dword ptr [ebp-4], -1
lea eax, [ebp-40]
push eax
call fb_StrDelete
add esp, 4
lea eax, [ebp-28]
push eax
call fb_StrDelete
add esp, 4
lea eax, [ebp-16]
push eax
call fb_StrDelete
add esp, 4
.Lt_00FE:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HLINKFILES, .-HLINKFILES
.balign 16
HREADOBJINFO:
.type HREADOBJINFO, @function
push ebp
mov ebp, esp
sub esp, 20
.Lt_020A:
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_020C:
lea eax, [ebp-12]
push eax
call OBJINFOREADNEXT
add esp, 4
mov dword ptr [ebp-20], eax
jmp .Lt_0210
.Lt_0212:
push 0
lea eax, [ebp-12]
push eax
lea eax, [FBC+340]
push eax
call STRSETADD
add esp, 12
jmp .Lt_020F
.Lt_0213:
push 0
lea eax, [ebp-12]
push eax
lea eax, [FBC+384]
push eax
call STRSETADD
add esp, 12
jmp .Lt_020F
.Lt_0214:
cmp dword ptr [FBC+3176], 0
jne .Lt_0216
push 1
push -1
call OBJINFOGETFILENAME
push eax
push 20
call ERRREPORTWARNEX
add esp, 16
mov dword ptr [FBC+3176], -1
push -1
push 24
call FBSETOPTION
add esp, 8
.Lt_0216:
.Lt_0215:
jmp .Lt_020F
.Lt_0217:
push -1
push 25
call FBSETOPTION
add esp, 8
jmp .Lt_020F
.Lt_0218:
push dword ptr [ebp-12]
call FBGETLANGID
add esp, 4
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], -1
jne .Lt_021A
mov dword ptr [ebp-16], 0
.Lt_021A:
.Lt_0219:
mov eax, dword ptr [FBC+3172]
cmp dword ptr [ebp-16], eax
je .Lt_021C
push 1
push -1
call OBJINFOGETFILENAME
push eax
push 21
call ERRREPORTWARNEX
add esp, 16
mov eax, dword ptr [ebp-16]
mov dword ptr [FBC+3172], eax
push dword ptr [ebp-16]
push 10
call FBSETOPTION
add esp, 8
.Lt_021C:
.Lt_021B:
jmp .Lt_020F
.Lt_021D:
jmp .Lt_020D
jmp .Lt_020F
.Lt_0210:
cmp dword ptr [ebp-20], 4
ja .Lt_021D
mov eax, dword ptr [ebp-20]
jmp dword ptr [.LT_021E+eax*4]
.LT_021E:
.int .Lt_0212
.int .Lt_0213
.int .Lt_0214
.int .Lt_0217
.int .Lt_0218
.Lt_020F:
.Lt_020E:
jmp .Lt_020C
.Lt_020D:
call OBJINFOREADEND
lea eax, [ebp-12]
push eax
call fb_StrDelete
add esp, 4
.Lt_020B:
mov esp, ebp
pop ebp
ret
.size HREADOBJINFO, .-HREADOBJINFO
.balign 16
HCOLLECTOBJINFO:
.type HCOLLECTOBJINFO, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_021F:
lea eax, [FBC+188]
push eax
call LISTGETHEAD
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_0221:
cmp dword ptr [ebp-4], 0
je .Lt_0222
push dword ptr [ebp-4]
call OBJINFOREADOBJ
add esp, 4
call HREADOBJINFO
push dword ptr [ebp-4]
call LISTGETNEXT
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_0221
.Lt_0222:
lea eax, [FBC+340]
push eax
call LISTGETHEAD
add esp, 4
mov dword ptr [ebp-8], eax
.Lt_0223:
cmp dword ptr [ebp-8], 0
je .Lt_0224
mov eax, dword ptr [ebp-8]
cmp dword ptr [eax+12], 0
jne .Lt_0226
lea eax, [FBC+384]
push eax
mov eax, dword ptr [ebp-8]
lea ebx, [eax]
push ebx
call OBJINFOREADLIB
add esp, 8
call HREADOBJINFO
.Lt_0226:
.Lt_0225:
push dword ptr [ebp-8]
call LISTGETNEXT
add esp, 4
mov dword ptr [ebp-8], eax
jmp .Lt_0223
.Lt_0224:
lea eax, [FBC+220]
push eax
call LISTGETHEAD
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_0227:
cmp dword ptr [ebp-4], 0
je .Lt_0228
push dword ptr [ebp-4]
call OBJINFOREADLIBFILE
add esp, 4
call HREADOBJINFO
push dword ptr [ebp-4]
call LISTGETNEXT
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_0227
.Lt_0228:
.Lt_0220:
pop ebx
mov esp, ebp
pop ebp
ret
.size HCOLLECTOBJINFO, .-HCOLLECTOBJINFO
.balign 16
HFATALINVALIDOPTION:
.type HFATALINVALIDOPTION, @function
push ebp
mov ebp, esp
sub esp, 36
.Lt_0229:
push 0
push 1
push -1
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 0
push -1
push 2
push offset Lt_0119
push -1
push -1
push dword ptr [ebp+8]
push 2
push offset Lt_0119
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
push dword ptr [ebp-36]
push 80
call ERRREPORTEX
add esp, 20
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
push 1
call FBCEND
add esp, 4
.Lt_022A:
mov esp, ebp
pop ebp
ret
.size HFATALINVALIDOPTION, .-HFATALINVALIDOPTION
.balign 16
HCHECKWAITINGOBJFILE:
.type HCHECKWAITINGOBJFILE, @function
push ebp
mov ebp, esp
sub esp, 24
.Lt_022E:
push -1
lea eax, [FBC+8]
push eax
call fb_StrLen
add esp, 8
test eax, eax
jle .Lt_0231
push 0
push 1
push -1
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
push 0
push -1
push -1
lea eax, [FBC+8]
push eax
push 4
push offset Lt_0118
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
push 291
call ERRREPORTEX
add esp, 20
lea eax, [ebp-24]
push eax
call fb_StrDelete
add esp, 4
push 0
push 1
push offset Lt_0000
push -1
lea eax, [FBC+8]
push eax
call fb_StrAssign
add esp, 20
.Lt_0231:
.Lt_0230:
.Lt_022F:
mov esp, ebp
pop ebp
ret
.size HCHECKWAITINGOBJFILE, .-HCHECKWAITINGOBJFILE
.balign 16
HSETIOFILE:
.type HSETIOFILE, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
.Lt_0234:
push 0
push -1
push dword ptr [ebp+12]
push -1
mov eax, dword ptr [ebp+8]
lea ebx, [eax]
push ebx
call fb_StrAssign
add esp, 20
push -1
lea eax, [FBC+8]
push eax
call fb_StrLen
add esp, 8
test eax, eax
jne .Lt_0237
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+16], 0
cmp dword ptr [ebp+16], 0
je .Lt_0239
push 0
push -1
push 3
push offset Lt_023A
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
lea eax, [FBC+8]
push eax
call fb_StrAssign
add esp, 20
jmp .Lt_0238
.Lt_0239:
push 0
push -1
push 3
push offset Lt_023A
push -1
push dword ptr [ebp+12]
call HSTRIPEXT
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
lea eax, [FBC+8]
push eax
call fb_StrAssign
add esp, 20
.Lt_0238:
mov eax, dword ptr [ebp+8]
mov dword ptr [FBC+4], eax
jmp .Lt_0236
.Lt_0237:
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+16], -1
.Lt_0236:
lea eax, [FBC+8]
push eax
call FBCADDOBJ
add esp, 4
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+12], eax
push 0
push 1
push offset Lt_0000
push -1
lea eax, [FBC+8]
push eax
call fb_StrAssign
add esp, 20
.Lt_0235:
pop ebx
mov esp, ebp
pop ebp
ret
.size HSETIOFILE, .-HSETIOFILE
.balign 16
HADDBAS:
.type HADDBAS, @function
push ebp
mov ebp, esp
.Lt_023D:
push 0
push dword ptr [ebp+8]
lea eax, [FBC+72]
push eax
call LISTNEWNODE
add esp, 4
push eax
call HSETIOFILE
add esp, 12
.Lt_023E:
mov esp, ebp
pop ebp
ret
.size HADDBAS, .-HADDBAS
.balign 16
HPARSEGNUTRIPLET:
.type HPARSEGNUTRIPLET, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
.Lt_0255:
mov dword ptr [ebp-4], 0
.Lt_025A:
mov eax, dword ptr [ebp-4]
push dword ptr [GNUOSMAP+eax*8]
call fb_StrAllocTempDescZ
add esp, 4
push eax
push dword ptr [ebp+8]
push 1
call fb_StrInstr
add esp, 12
test eax, eax
jle .Lt_025C
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [ebp+16]
mov ecx, dword ptr [GNUOSMAP+eax*8+4]
mov dword ptr [ebx], ecx
jmp .Lt_0259
.Lt_025C:
.Lt_025B:
.Lt_0258:
inc dword ptr [ebp-4]
.Lt_0257:
cmp dword ptr [ebp-4], 8
jle .Lt_025A
.Lt_0259:
cmp dword ptr [ebp+12], 0
jle .Lt_025E
push 0
push -1
mov ecx, dword ptr [ebp+12]
dec ecx
push ecx
push dword ptr [ebp+8]
call fb_LEFT
add esp, 8
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrInit
add esp, 20
mov dword ptr [ebp-16], 0
.Lt_0262:
push 0
mov eax, dword ptr [ebp-16]
push dword ptr [GNUARCHMAP+eax*8]
push -1
lea eax, [ebp-12]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_0264
mov eax, dword ptr [ebp-16]
mov ecx, dword ptr [ebp+20]
mov ebx, dword ptr [GNUARCHMAP+eax*8+4]
mov dword ptr [ecx], ebx
jmp .Lt_0261
.Lt_0264:
.Lt_0263:
.Lt_0260:
inc dword ptr [ebp-16]
.Lt_025F:
cmp dword ptr [ebp-16], 10
jle .Lt_0262
.Lt_0261:
lea ebx, [ebp-12]
push ebx
call fb_StrDelete
add esp, 4
.Lt_025E:
.Lt_025D:
.Lt_0256:
pop ebx
mov esp, ebp
pop ebp
ret
.size HPARSEGNUTRIPLET, .-HPARSEGNUTRIPLET
.balign 16
HPARSETARGETARG:
.type HPARSETARGETARG, @function
push ebp
mov ebp, esp
sub esp, 40
push ebx
.Lt_0269:
mov eax, dword ptr [ebp+12]
mov dword ptr [eax], -1
mov eax, dword ptr [ebp+16]
mov dword ptr [eax], -1
mov eax, dword ptr [ebp+20]
mov dword ptr [eax], 0
push 0
push -1
push 0
push dword ptr [ebp+8]
call fb_StrLcase2
add esp, 8
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrInit
add esp, 20
mov dword ptr [ebp-20], 0
.Lt_026E:
push 0
mov eax, dword ptr [ebp-20]
imul eax, 12
push dword ptr [FBOSARCHMAP+eax]
push -1
lea eax, [ebp-12]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_0270
mov eax, dword ptr [ebp-20]
imul eax, 12
mov ebx, dword ptr [ebp+12]
mov ecx, dword ptr [FBOSARCHMAP+eax+4]
mov dword ptr [ebx], ecx
mov ecx, dword ptr [ebp-20]
imul ecx, 12
mov ebx, dword ptr [ebp+16]
mov eax, dword ptr [FBOSARCHMAP+ecx+8]
mov dword ptr [ebx], eax
lea eax, [ebp-12]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_026A
.Lt_0270:
.Lt_026F:
.Lt_026C:
inc dword ptr [ebp-20]
.Lt_026B:
cmp dword ptr [ebp-20], 9
jle .Lt_026E
.Lt_026D:
push 1
push offset Lt_0271
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push dword ptr [ebp+8]
push 1
call fb_StrInstr
add esp, 12
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 0
jle .Lt_0273
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
push 0
push -1
mov eax, dword ptr [ebp-16]
dec eax
push eax
lea eax, [ebp-12]
push eax
call fb_LEFT
add esp, 8
push eax
push -1
lea eax, [ebp-28]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-28]
push eax
call FBIDENTIFYOS
add esp, 4
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx], eax
lea eax, [ebp-28]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
push 0
push -1
push -1
lea eax, [ebp-12]
push eax
call fb_StrLen
add esp, 8
sub eax, dword ptr [ebp-16]
push eax
lea eax, [ebp-12]
push eax
call fb_RIGHT
add esp, 8
push eax
push -1
lea eax, [ebp-40]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-40]
push eax
call FBCPUTYPEFROMCPUFAMILYID
add esp, 4
mov ebx, dword ptr [ebp+16]
mov dword ptr [ebx], eax
lea eax, [ebp-40]
push eax
call fb_StrDelete
add esp, 4
.Lt_0273:
.Lt_0272:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax]
test ebx, ebx
setl bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+16]
mov ecx, dword ptr [eax]
test ecx, ecx
setl cl
shr ecx, 1
sbb ecx, ecx
and ebx, ecx
je .Lt_0277
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp-16]
push dword ptr [ebp+8]
call HPARSEGNUTRIPLET
add esp, 16
mov ecx, dword ptr [ebp+20]
mov dword ptr [ecx], -1
.Lt_0277:
.Lt_0276:
lea ecx, [ebp-12]
push ecx
call fb_StrDelete
add esp, 4
.Lt_026A:
pop ebx
mov esp, ebp
pop ebp
ret
.size HPARSETARGETARG, .-HPARSETARGETARG
.balign 16
HANDLEOPT:
.type HANDLEOPT, @function
push ebp
mov ebp, esp
sub esp, 28
push ebx
.Lt_027A:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
jmp .Lt_027D
.Lt_027F:
push dword ptr [ebp+12]
call FBCADDOBJ
add esp, 4
jmp .Lt_027C
.Lt_0280:
push 7
push offset Lt_0281
push -1
push dword ptr [ebp+12]
call fb_StrCompare
add esp, 16
test eax, eax
sete al
shr eax, 1
sbb eax, eax
mov dword ptr [FBC+28], eax
push dword ptr [ebp+12]
call FBIDENTIFYFBCARCH
add esp, 4
mov dword ptr [FBC+24], eax
cmp dword ptr [FBC+24], 0
jge .Lt_0283
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
push 0
push -1
push -1
push dword ptr [ebp+12]
push 7
push offset Lt_0284
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
call HFATALINVALIDOPTION
add esp, 4
lea eax, [ebp-28]
push eax
call fb_StrDelete
add esp, 4
.Lt_0283:
.Lt_0282:
jmp .Lt_027C
.Lt_0287:
push 0
push -1
push dword ptr [ebp+12]
push -1
lea eax, [ebp-16]
push eax
call fb_StrInit
add esp, 20
push 4
push offset Lt_028B
push -1
lea eax, [ebp-16]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_028A
.Lt_028C:
mov dword ptr [FBC+32], 1
jmp .Lt_0288
.Lt_028A:
push 6
push offset Lt_028E
push -1
lea eax, [ebp-16]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_028D
.Lt_028F:
mov dword ptr [FBC+32], 0
jmp .Lt_0288
.Lt_028D:
push dword ptr [ebp+12]
call HFATALINVALIDOPTION
add esp, 4
.Lt_0290:
.Lt_0288:
lea eax, [ebp-16]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_027C
.Lt_0291:
push dword ptr [ebp+12]
call HADDBAS
add esp, 4
jmp .Lt_027C
.Lt_0292:
push 3
push 0
call FBSETOPTION
add esp, 8
mov dword ptr [FBC+52], -1
jmp .Lt_027C
.Lt_0293:
mov dword ptr [FBC+52], -1
jmp .Lt_027C
.Lt_0294:
push dword ptr [ebp+12]
call FBADDPREDEFINE
add esp, 4
jmp .Lt_027C
.Lt_0295:
push 2
push 0
call FBSETOPTION
add esp, 8
jmp .Lt_027C
.Lt_0296:
push -1
push 13
call FBSETOPTION
add esp, 8
jmp .Lt_027C
.Lt_0297:
push -1
push 13
call FBSETOPTION
add esp, 8
push -1
push 14
call FBSETOPTION
add esp, 8
jmp .Lt_027C
.Lt_0298:
push -1
push 13
call FBSETOPTION
add esp, 8
push -1
push 14
call FBSETOPTION
add esp, 8
push -1
push 15
call FBSETOPTION
add esp, 8
jmp .Lt_027C
.Lt_0299:
push -1
push 22
call FBSETOPTION
add esp, 8
jmp .Lt_027C
.Lt_029A:
mov eax, dword ptr [ebp+12]
push dword ptr [eax]
call FBGETLANGID
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], -1
jne .Lt_029C
push dword ptr [ebp+12]
call HFATALINVALIDOPTION
add esp, 4
.Lt_029C:
.Lt_029B:
push dword ptr [ebp-8]
push 10
call FBSETOPTION
add esp, 8
push -1
push 11
call FBSETOPTION
add esp, 8
mov eax, dword ptr [ebp-8]
mov dword ptr [FBC+3172], eax
jmp .Lt_027C
.Lt_029D:
push 0
push -1
push 0
push dword ptr [ebp+12]
call fb_StrUcase2
add esp, 8
push eax
push -1
lea eax, [ebp-20]
push eax
call fb_StrInit
add esp, 20
push 8
push offset Lt_02A1
push -1
lea eax, [ebp-20]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_02A0
.Lt_02A2:
mov dword ptr [ebp-8], 0
jmp .Lt_029E
.Lt_02A0:
push 5
push offset Lt_02A4
push -1
lea eax, [ebp-20]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_02A3
.Lt_02A5:
mov dword ptr [ebp-8], 1
jmp .Lt_029E
.Lt_02A3:
push dword ptr [ebp+12]
call HFATALINVALIDOPTION
add esp, 4
.Lt_02A6:
.Lt_029E:
lea eax, [ebp-20]
push eax
call fb_StrDelete
add esp, 4
push dword ptr [ebp-8]
push 6
call FBSETOPTION
add esp, 8
jmp .Lt_027C
.Lt_02A7:
push 0
push -1
push 0
push dword ptr [ebp+12]
call fb_StrUcase2
add esp, 8
push eax
push -1
lea eax, [ebp-20]
push eax
call fb_StrInit
add esp, 20
push 4
push offset Lt_02AB
push -1
lea eax, [ebp-20]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
je .Lt_02AD
.Lt_02AE:
push 4
push offset Lt_02AC
push -1
lea eax, [ebp-20]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_02AA
.Lt_02AD:
mov dword ptr [ebp-8], 0
jmp .Lt_02A8
.Lt_02AA:
push 4
push offset Lt_02B0
push -1
lea eax, [ebp-20]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_02AF
.Lt_02B1:
mov dword ptr [ebp-8], 1
jmp .Lt_02A8
.Lt_02AF:
push dword ptr [ebp+12]
call HFATALINVALIDOPTION
add esp, 4
.Lt_02B2:
.Lt_02A8:
lea eax, [ebp-20]
push eax
call fb_StrDelete
add esp, 4
push dword ptr [ebp-8]
push 5
call FBSETOPTION
add esp, 8
jmp .Lt_027C
.Lt_02B3:
push -1
push 12
call FBSETOPTION
add esp, 8
jmp .Lt_027C
.Lt_02B4:
push 0
push -1
push 0
push dword ptr [ebp+12]
call fb_StrLcase2
add esp, 8
push eax
push -1
lea eax, [ebp-16]
push eax
call fb_StrInit
add esp, 20
push 4
push offset Lt_02B8
push -1
lea eax, [ebp-16]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_02B7
.Lt_02B9:
mov dword ptr [FBC+20], 0
jmp .Lt_02B5
.Lt_02B7:
push 4
push offset Lt_0037
push -1
lea eax, [ebp-16]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_02BA
.Lt_02BB:
mov dword ptr [FBC+20], 1
jmp .Lt_02B5
.Lt_02BA:
push 5
push offset Lt_02BD
push -1
lea eax, [ebp-16]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_02BC
.Lt_02BE:
mov dword ptr [FBC+20], 2
jmp .Lt_02B5
.Lt_02BC:
push dword ptr [ebp+12]
call HFATALINVALIDOPTION
add esp, 4
.Lt_02BF:
.Lt_02B5:
lea eax, [ebp-16]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_027C
.Lt_02C0:
mov dword ptr [FBC+64], -1
jmp .Lt_027C
.Lt_02C1:
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
push 0
push -1
push dword ptr [ebp+12]
call PATHSTRIPDIV
add esp, 4
push eax
push -1
lea eax, [ebp-16]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-16]
push eax
call FBADDINCLUDEPATH
add esp, 4
lea eax, [ebp-16]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_027C
.Lt_02C3:
push dword ptr [ebp+12]
call FBADDPREINCLUDE
add esp, 4
jmp .Lt_027C
.Lt_02C4:
push 0
push dword ptr [ebp+12]
lea eax, [FBC+252]
push eax
call STRSETADD
add esp, 12
jmp .Lt_027C
.Lt_02C5:
mov eax, dword ptr [ebp+12]
push dword ptr [eax]
call FBGETLANGID
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], -1
jne .Lt_02C7
push dword ptr [ebp+12]
call HFATALINVALIDOPTION
add esp, 4
.Lt_02C7:
.Lt_02C6:
push dword ptr [ebp-8]
push 10
call FBSETOPTION
add esp, 8
mov eax, dword ptr [ebp-8]
mov dword ptr [FBC+3172], eax
jmp .Lt_027C
.Lt_02C8:
push 1
push 0
call FBSETOPTION
add esp, 8
jmp .Lt_027C
.Lt_02C9:
push 0
push -1
push dword ptr [ebp+12]
push 261
lea eax, [FBC+689]
push eax
call fb_StrAssign
add esp, 20
mov dword ptr [FBC+952], -1
jmp .Lt_027C
.Lt_02CA:
push 0
push -1
push dword ptr [ebp+12]
push 261
lea eax, [FBC+956]
push eax
call fb_StrAssign
add esp, 20
jmp .Lt_027C
.Lt_02CB:
push 4
push offset Lt_02CC
push -1
push dword ptr [ebp+12]
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_02CE
mov dword ptr [ebp-8], 2147483647
jmp .Lt_02CD
.Lt_02CE:
push dword ptr [ebp+12]
call fb_VALINT
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jg .Lt_02D0
push dword ptr [ebp+12]
call HFATALINVALIDOPTION
add esp, 4
.Lt_02D0:
.Lt_02CF:
.Lt_02CD:
push dword ptr [ebp-8]
push 19
call FBSETOPTION
add esp, 8
jmp .Lt_027C
.Lt_02D1:
push -1
push 24
call FBSETOPTION
add esp, 8
mov dword ptr [FBC+3176], -1
jmp .Lt_027C
.Lt_02D2:
mov dword ptr [FBC+2120], -1
jmp .Lt_027C
.Lt_02D3:
push 0
push 18
call FBSETOPTION
add esp, 8
jmp .Lt_027C
.Lt_02D4:
call HCHECKWAITINGOBJFILE
cmp dword ptr [FBC+4], 0
je .Lt_02D6
push 0
push -1
push dword ptr [ebp+12]
push -1
mov eax, dword ptr [FBC+4]
push dword ptr [eax+12]
call fb_StrAssign
add esp, 20
mov eax, dword ptr [FBC+4]
mov dword ptr [eax+16], -1
jmp .Lt_02D5
.Lt_02D6:
push 0
push -1
push dword ptr [ebp+12]
push -1
lea eax, [FBC+8]
push eax
call fb_StrAssign
add esp, 20
.Lt_02D5:
jmp .Lt_027C
.Lt_02D7:
push 4
push offset Lt_02D8
push -1
push dword ptr [ebp+12]
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_02DA
mov dword ptr [ebp-8], 3
jmp .Lt_02D9
.Lt_02DA:
push dword ptr [ebp+12]
call fb_VALINT
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jge .Lt_02DC
mov dword ptr [ebp-8], 0
jmp .Lt_02DB
.Lt_02DC:
cmp dword ptr [ebp-8], 3
jle .Lt_02DD
mov dword ptr [ebp-8], 3
.Lt_02DD:
.Lt_02DB:
.Lt_02D9:
push dword ptr [ebp-8]
push 8
call FBSETOPTION
add esp, 8
jmp .Lt_027C
.Lt_02DE:
push 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
push 0
push -1
push dword ptr [ebp+12]
call PATHSTRIPDIV
add esp, 4
push eax
push -1
lea eax, [ebp-16]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-16]
push eax
lea eax, [FBC+296]
push eax
call STRSETADD
add esp, 12
lea eax, [ebp-16]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_027C
.Lt_02E0:
push -1
push 26
call FBSETOPTION
add esp, 8
jmp .Lt_027C
.Lt_02E1:
push -1
push 1
call FBSETOPTION
add esp, 8
mov dword ptr [FBC+36], -1
jmp .Lt_027C
.Lt_02E2:
push 0
push -1
push dword ptr [ebp+12]
call PATHSTRIPDIV
add esp, 4
push eax
push 261
lea eax, [FBC+2128]
push eax
call fb_StrAssign
add esp, 20
push 47
lea eax, [FBC+2128]
push eax
call HREPLACESLASH
add esp, 8
jmp .Lt_027C
.Lt_02E3:
push 0
push -1
push dword ptr [ebp+12]
push -1
lea eax, [ebp-16]
push eax
call fb_StrInit
add esp, 20
push 5
push offset Lt_02E7
push -1
lea eax, [ebp-16]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_02E6
.Lt_02E8:
mov dword ptr [FBC+68], 0
jmp .Lt_02E4
.Lt_02E6:
push 7
push offset Lt_02EA
push -1
lea eax, [ebp-16]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_02E9
.Lt_02EB:
mov dword ptr [FBC+68], 1
jmp .Lt_02E4
.Lt_02E9:
push 2
push offset Lt_02ED
push -1
lea eax, [ebp-16]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_02EC
.Lt_02EE:
mov dword ptr [FBC+68], 2
jmp .Lt_02E4
.Lt_02EC:
push dword ptr [ebp+12]
call HFATALINVALIDOPTION
add esp, 4
.Lt_02EF:
.Lt_02E4:
lea eax, [ebp-16]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_027C
.Lt_02F0:
push -1
push 16
call FBSETOPTION
add esp, 8
jmp .Lt_027C
.Lt_02F1:
push 3
push 0
call FBSETOPTION
add esp, 8
mov dword ptr [FBC+36], -1
mov dword ptr [FBC+40], -1
jmp .Lt_027C
.Lt_02F2:
mov dword ptr [FBC+40], -1
jmp .Lt_027C
.Lt_02F3:
push 3
push 0
call FBSETOPTION
add esp, 8
mov dword ptr [FBC+44], -1
mov dword ptr [FBC+48], -1
jmp .Lt_027C
.Lt_02F4:
mov dword ptr [FBC+48], -1
jmp .Lt_027C
.Lt_02F5:
push 0
push -1
push dword ptr [ebp+12]
push 129
lea eax, [FBC+1217]
push eax
call fb_StrAssign
add esp, 20
jmp .Lt_027C
.Lt_02F6:
mov dword ptr [FBC+2124], -1
jmp .Lt_027C
.Lt_02F7:
push dword ptr [ebp+12]
call fb_VALINT
add esp, 4
sal eax, 10
push eax
push 27
call FBSETOPTION
add esp, 8
jmp .Lt_027C
.Lt_02F8:
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-16], 0
lea eax, [ebp-16]
push eax
lea eax, [ebp-12]
push eax
lea eax, [ebp-8]
push eax
push dword ptr [ebp+12]
call HPARSETARGETARG
add esp, 16
mov eax, dword ptr [ebp-8]
test eax, eax
setl al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp-12]
test ebx, ebx
setl bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
je .Lt_02FA
push dword ptr [ebp+12]
call HFATALINVALIDOPTION
add esp, 4
.Lt_02FA:
.Lt_02F9:
push dword ptr [ebp-8]
push 3
call FBSETOPTION
add esp, 8
push dword ptr [ebp-12]
push 4
call FBSETOPTION
add esp, 8
mov ebx, dword ptr [ebp-8]
cmp ebx, 2
setne bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp-12]
cmp eax, 1
setne al
shr eax, 1
sbb eax, eax
or ebx, eax
or ebx, dword ptr [ebp-16]
je .Lt_02FC
push 0
push -1
push dword ptr [ebp+12]
push 129
lea ebx, [FBC+1730]
push ebx
call fb_StrAssign
add esp, 20
push 0
push -1
push 2
push offset Lt_0271
push 129
lea ebx, [FBC+1730]
push ebx
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
lea ebx, [ebp-28]
push ebx
call fb_StrConcat
add esp, 20
push eax
push 129
lea eax, [FBC+1859]
push eax
call fb_StrAssign
add esp, 20
.Lt_02FC:
.Lt_02FB:
jmp .Lt_027C
.Lt_02FE:
push 0
push -1
push dword ptr [ebp+12]
push 129
lea eax, [FBC+1988]
push eax
call fb_StrAssign
add esp, 20
jmp .Lt_027C
.Lt_02FF:
mov dword ptr [FBC+56], -1
jmp .Lt_027C
.Lt_0300:
push 0
push -1
push 0
push dword ptr [ebp+12]
call fb_StrUcase2
add esp, 8
push eax
push -1
lea eax, [ebp-20]
push eax
call fb_StrInit
add esp, 20
push 5
push offset Lt_0304
push -1
lea eax, [ebp-20]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
je .Lt_0305
.Lt_0306:
push 2
push offset Lt_0008
push -1
lea eax, [ebp-20]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_0303
.Lt_0305:
mov dword ptr [ebp-8], 0
jmp .Lt_0301
.Lt_0303:
push 2
push offset Lt_0006
push -1
lea eax, [ebp-20]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_0307
.Lt_0308:
mov dword ptr [ebp-8], 1
jmp .Lt_0301
.Lt_0307:
push 2
push offset Lt_030A
push -1
lea eax, [ebp-20]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_0309
.Lt_030B:
mov dword ptr [ebp-8], 2
jmp .Lt_0301
.Lt_0309:
push dword ptr [ebp+12]
call HFATALINVALIDOPTION
add esp, 4
.Lt_030C:
.Lt_0301:
lea eax, [ebp-20]
push eax
call fb_StrDelete
add esp, 4
push dword ptr [ebp-8]
push 7
call FBSETOPTION
add esp, 8
jmp .Lt_027C
.Lt_030D:
mov dword ptr [FBC+60], -1
jmp .Lt_027C
.Lt_030E:
mov dword ptr [ebp-8], -2
push 0
push -1
push dword ptr [ebp+12]
push -1
lea eax, [ebp-20]
push eax
call fb_StrInit
add esp, 20
push 4
push offset Lt_0312
push -1
lea eax, [ebp-20]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_0311
.Lt_0313:
mov dword ptr [ebp-8], -1
jmp .Lt_030F
.Lt_0311:
push 6
push offset Lt_0315
push -1
lea eax, [ebp-20]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_0314
.Lt_0316:
push 20
call FBGETOPTION
add esp, 4
or eax, 2
push eax
push 20
call FBSETOPTION
add esp, 8
jmp .Lt_030F
.Lt_0314:
push 7
push offset Lt_0318
push -1
lea eax, [ebp-20]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_0317
.Lt_0319:
push 20
call FBGETOPTION
add esp, 4
or eax, 1
push eax
push 20
call FBSETOPTION
add esp, 8
jmp .Lt_030F
.Lt_0317:
push 5
push offset Lt_031B
push -1
lea eax, [ebp-20]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_031A
.Lt_031C:
push 20
call FBGETOPTION
add esp, 4
or eax, 8
push eax
push 20
call FBSETOPTION
add esp, 8
jmp .Lt_030F
.Lt_031A:
push 11
push offset Lt_031E
push -1
lea eax, [ebp-20]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_031D
.Lt_031F:
push 20
call FBGETOPTION
add esp, 4
or eax, 32
push eax
push 20
call FBSETOPTION
add esp, 8
jmp .Lt_030F
.Lt_031D:
push 9
push offset Lt_0321
push -1
lea eax, [ebp-20]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_0320
.Lt_0322:
push -41
push 20
call FBSETOPTION
add esp, 8
mov dword ptr [ebp-8], -1
jmp .Lt_030F
.Lt_0320:
push dword ptr [ebp+12]
call fb_VALINT
add esp, 4
mov dword ptr [ebp-8], eax
.Lt_0323:
.Lt_030F:
lea eax, [ebp-20]
push eax
call fb_StrDelete
add esp, 4
cmp dword ptr [ebp-8], -1
jl .Lt_0325
push dword ptr [ebp-8]
push 17
call FBSETOPTION
add esp, 8
.Lt_0325:
.Lt_0324:
jmp .Lt_027C
.Lt_0326:
push 0
push -1
push 2
push offset Lt_00B8
push -1
push -1
push offset Lt_00B8
push offset Lt_0163
mov eax, dword ptr [ebp+12]
push dword ptr [eax]
call HREPLACE
add esp, 12
push eax
push 2
push offset Lt_00B8
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
push 128
lea eax, [FBC+1346]
push eax
call fb_StrAssign
add esp, 20
jmp .Lt_027C
.Lt_0329:
push 0
push -1
push 2
push offset Lt_00B8
push -1
push -1
push offset Lt_00B8
push offset Lt_0163
mov eax, dword ptr [ebp+12]
push dword ptr [eax]
call HREPLACE
add esp, 12
push eax
push 2
push offset Lt_00B8
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
push 128
lea eax, [FBC+1602]
push eax
call fb_StrAssign
add esp, 20
jmp .Lt_027C
.Lt_032C:
push 0
push -1
push 2
push offset Lt_00B8
push -1
push -1
push offset Lt_00B8
push offset Lt_0163
mov eax, dword ptr [ebp+12]
push dword ptr [eax]
call HREPLACE
add esp, 12
push eax
push 2
push offset Lt_00B8
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
push 128
lea eax, [FBC+1474]
push eax
call fb_StrAssign
add esp, 20
jmp .Lt_027C
.Lt_032F:
push 0
push -1
push dword ptr [ebp+12]
push 261
lea eax, [FBC+428]
push eax
call fb_StrAssign
add esp, 20
jmp .Lt_027C
.Lt_0330:
push 0
push -1
push 0
push dword ptr [ebp+12]
call fb_StrLcase2
add esp, 8
push eax
push -1
lea eax, [ebp-16]
push eax
call fb_StrInit
add esp, 20
push 13
push offset Lt_0334
push -1
lea eax, [ebp-16]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_0333
.Lt_0335:
push -1
push 21
call FBSETOPTION
add esp, 8
jmp .Lt_0331
.Lt_0333:
push dword ptr [ebp+12]
call HFATALINVALIDOPTION
add esp, 4
.Lt_0336:
.Lt_0331:
lea eax, [ebp-16]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_027C
.Lt_027D:
cmp dword ptr [ebp-4], 55
ja .Lt_027C
mov eax, dword ptr [ebp-4]
jmp dword ptr [.LT_0337+eax*4]
.LT_0337:
.int .Lt_027F
.int .Lt_0280
.int .Lt_0287
.int .Lt_0291
.int .Lt_0292
.int .Lt_0293
.int .Lt_0294
.int .Lt_0295
.int .Lt_0295
.int .Lt_0296
.int .Lt_0297
.int .Lt_0298
.int .Lt_0299
.int .Lt_029A
.int .Lt_029D
.int .Lt_02A7
.int .Lt_02B3
.int .Lt_02B4
.int .Lt_02C0
.int .Lt_02C1
.int .Lt_02C3
.int .Lt_02C4
.int .Lt_02C5
.int .Lt_02C8
.int .Lt_02C9
.int .Lt_02CA
.int .Lt_02CB
.int .Lt_02D1
.int .Lt_02D2
.int .Lt_02D3
.int .Lt_02D4
.int .Lt_02D7
.int .Lt_02DE
.int .Lt_02E0
.int .Lt_02E1
.int .Lt_02E2
.int .Lt_02E3
.int .Lt_02F0
.int .Lt_02F1
.int .Lt_02F2
.int .Lt_02F3
.int .Lt_02F4
.int .Lt_02F5
.int .Lt_02F6
.int .Lt_02F7
.int .Lt_02F8
.int .Lt_02FE
.int .Lt_02FF
.int .Lt_0300
.int .Lt_030D
.int .Lt_030E
.int .Lt_0326
.int .Lt_0329
.int .Lt_032C
.int .Lt_032F
.int .Lt_0330
.Lt_027C:
.Lt_027B:
pop ebx
mov esp, ebp
pop ebp
ret
.size HANDLEOPT, .-HANDLEOPT
.balign 16
PARSEOPTION:
.type PARSEOPTION, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0338:
mov eax, dword ptr [ebp+8]
movzx ebx, byte ptr [eax]
mov dword ptr [ebp-8], ebx
jmp .Lt_033B
.Lt_033D:
mov ebx, dword ptr [ebp+8]
movzx eax, byte ptr [ebx+1]
test eax, eax
jne .Lt_0340
mov dword ptr [ebp-4], 0
jmp .Lt_0339
.Lt_0340:
.Lt_033F:
push 5
push offset Lt_0341
push 0
push dword ptr [ebp+8]
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_0343
mov dword ptr [ebp-4], 1
jmp .Lt_0339
.Lt_0343:
.Lt_0342:
push 4
push offset Lt_0344
push 0
push dword ptr [ebp+8]
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_0346
mov dword ptr [ebp-4], 2
jmp .Lt_0339
.Lt_0346:
.Lt_0345:
jmp .Lt_033A
.Lt_0347:
mov eax, dword ptr [ebp+8]
movzx ebx, byte ptr [eax+1]
test ebx, ebx
jne .Lt_034A
mov dword ptr [ebp-4], 3
jmp .Lt_0339
.Lt_034A:
.Lt_0349:
jmp .Lt_033A
.Lt_034B:
mov ebx, dword ptr [ebp+8]
movzx eax, byte ptr [ebx+1]
test eax, eax
jne .Lt_034E
mov dword ptr [ebp-4], 4
jmp .Lt_0339
.Lt_034E:
.Lt_034D:
jmp .Lt_033A
.Lt_034F:
mov eax, dword ptr [ebp+8]
movzx ebx, byte ptr [eax+1]
test ebx, ebx
jne .Lt_0352
mov dword ptr [ebp-4], 5
jmp .Lt_0339
.Lt_0352:
.Lt_0351:
jmp .Lt_033A
.Lt_0353:
mov ebx, dword ptr [ebp+8]
movzx eax, byte ptr [ebx+1]
test eax, eax
jne .Lt_0356
mov dword ptr [ebp-4], 6
jmp .Lt_0339
.Lt_0356:
.Lt_0355:
push 4
push offset Lt_0357
push 0
push dword ptr [ebp+8]
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_0359
mov dword ptr [ebp-4], 7
jmp .Lt_0339
.Lt_0359:
.Lt_0358:
push 6
push offset Lt_035A
push 0
push dword ptr [ebp+8]
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_035C
mov dword ptr [ebp-4], 8
jmp .Lt_0339
.Lt_035C:
.Lt_035B:
jmp .Lt_033A
.Lt_035D:
mov eax, dword ptr [ebp+8]
movzx ebx, byte ptr [eax+1]
test ebx, ebx
jne .Lt_0360
mov dword ptr [ebp-4], 9
jmp .Lt_0339
.Lt_0360:
.Lt_035F:
push 3
push offset Lt_0361
push 0
push dword ptr [ebp+8]
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_0363
mov dword ptr [ebp-4], 10
jmp .Lt_0339
.Lt_0363:
.Lt_0362:
push 4
push offset Lt_0364
push 0
push dword ptr [ebp+8]
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_0366
mov dword ptr [ebp-4], 11
jmp .Lt_0339
.Lt_0366:
.Lt_0365:
push 7
push offset Lt_0367
push 0
push dword ptr [ebp+8]
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_0369
mov dword ptr [ebp-4], 12
jmp .Lt_0339
.Lt_0369:
.Lt_0368:
jmp .Lt_033A
.Lt_036A:
push 10
push offset Lt_036C
push 0
push dword ptr [ebp+8]
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_036E
mov dword ptr [ebp-4], 13
jmp .Lt_0339
.Lt_036E:
.Lt_036D:
push 7
push offset Lt_036F
push 0
push dword ptr [ebp+8]
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_0371
mov dword ptr [ebp-4], 14
jmp .Lt_0339
.Lt_0371:
.Lt_0370:
push 4
push offset Lt_0372
push 0
push dword ptr [ebp+8]
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_0374
mov dword ptr [ebp-4], 15
jmp .Lt_0339
.Lt_0374:
.Lt_0373:
jmp .Lt_033A
.Lt_0375:
mov eax, dword ptr [ebp+8]
movzx ebx, byte ptr [eax+1]
test ebx, ebx
jne .Lt_0378
mov dword ptr [ebp-4], 16
jmp .Lt_0339
.Lt_0378:
.Lt_0377:
push 4
push offset Lt_0379
push 0
push dword ptr [ebp+8]
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_037B
mov dword ptr [ebp-4], 17
jmp .Lt_0339
.Lt_037B:
.Lt_037A:
jmp .Lt_033A
.Lt_037C:
push 5
push offset Lt_037E
push 0
push dword ptr [ebp+8]
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_0380
mov dword ptr [ebp-4], 18
jmp .Lt_0339
.Lt_0380:
.Lt_037F:
jmp .Lt_033A
.Lt_0381:
mov eax, dword ptr [ebp+8]
movzx ebx, byte ptr [eax+1]
test ebx, ebx
jne .Lt_0384
mov dword ptr [ebp-4], 19
jmp .Lt_0339
.Lt_0384:
.Lt_0383:
push 8
push offset Lt_0385
push 0
push dword ptr [ebp+8]
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_0387
mov dword ptr [ebp-4], 20
jmp .Lt_0339
.Lt_0387:
.Lt_0386:
jmp .Lt_033A
.Lt_0388:
mov eax, dword ptr [ebp+8]
movzx ebx, byte ptr [eax+1]
test ebx, ebx
jne .Lt_038B
mov dword ptr [ebp-4], 21
jmp .Lt_0339
.Lt_038B:
.Lt_038A:
push 5
push offset Lt_038C
push 0
push dword ptr [ebp+8]
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_038E
mov dword ptr [ebp-4], 22
jmp .Lt_0339
.Lt_038E:
.Lt_038D:
push 4
push offset Lt_0045
push 0
push dword ptr [ebp+8]
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_0390
mov dword ptr [ebp-4], 23
jmp .Lt_0339
.Lt_0390:
.Lt_038F:
jmp .Lt_033A
.Lt_0391:
mov eax, dword ptr [ebp+8]
movzx ebx, byte ptr [eax+1]
test ebx, ebx
jne .Lt_0394
mov dword ptr [ebp-4], 24
jmp .Lt_0339
.Lt_0394:
.Lt_0393:
push 4
push offset Lt_0395
push 0
push dword ptr [ebp+8]
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_0397
mov dword ptr [ebp-4], 25
jmp .Lt_0339
.Lt_0397:
.Lt_0396:
push 7
push offset Lt_0398
push 0
push dword ptr [ebp+8]
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_039A
mov dword ptr [ebp-4], 26
jmp .Lt_0339
.Lt_039A:
.Lt_0399:
push 3
push offset Lt_039B
push 0
push dword ptr [ebp+8]
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_039D
mov dword ptr [ebp-4], 27
jmp .Lt_0339
.Lt_039D:
.Lt_039C:
jmp .Lt_033A
.Lt_039E:
push 10
push offset Lt_03A0
push 0
push dword ptr [ebp+8]
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_03A2
mov dword ptr [ebp-4], 29
jmp .Lt_0339
.Lt_03A2:
.Lt_03A1:
push 10
push offset Lt_03A3
push 0
push dword ptr [ebp+8]
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_03A5
mov dword ptr [ebp-4], 28
jmp .Lt_0339
.Lt_03A5:
.Lt_03A4:
jmp .Lt_033A
.Lt_03A6:
mov eax, dword ptr [ebp+8]
movzx ebx, byte ptr [eax+1]
test ebx, ebx
jne .Lt_03A9
mov dword ptr [ebp-4], 30
jmp .Lt_0339
.Lt_03A9:
.Lt_03A8:
jmp .Lt_033A
.Lt_03AA:
mov ebx, dword ptr [ebp+8]
movzx eax, byte ptr [ebx+1]
test eax, eax
jne .Lt_03AD
mov dword ptr [ebp-4], 31
jmp .Lt_0339
.Lt_03AD:
.Lt_03AC:
jmp .Lt_033A
.Lt_03AE:
mov eax, dword ptr [ebp+8]
movzx ebx, byte ptr [eax+1]
test ebx, ebx
jne .Lt_03B1
mov dword ptr [ebp-4], 32
jmp .Lt_0339
.Lt_03B1:
.Lt_03B0:
push 4
push offset Lt_03B2
push 0
push dword ptr [ebp+8]
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_03B4
mov dword ptr [ebp-4], 33
jmp .Lt_0339
.Lt_03B4:
.Lt_03B3:
push 3
push offset Lt_03B5
push 0
push dword ptr [ebp+8]
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_03B7
mov dword ptr [ebp-4], 34
jmp .Lt_0339
.Lt_03B7:
.Lt_03B6:
push 7
push offset Lt_03B8
push 0
push dword ptr [ebp+8]
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_03BA
mov dword ptr [ebp-4], 35
jmp .Lt_0339
.Lt_03BA:
.Lt_03B9:
push 6
push offset Lt_03BB
push 0
push dword ptr [ebp+8]
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_03BD
mov dword ptr [ebp-4], 36
jmp .Lt_0339
.Lt_03BD:
.Lt_03BC:
push 8
push offset Lt_03BE
push 0
push dword ptr [ebp+8]
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_03C0
mov dword ptr [ebp-4], 37
jmp .Lt_0339
.Lt_03C0:
.Lt_03BF:
jmp .Lt_033A
.Lt_03C1:
mov eax, dword ptr [ebp+8]
movzx ebx, byte ptr [eax+1]
test ebx, ebx
jne .Lt_03C4
mov dword ptr [ebp-4], 38
jmp .Lt_0339
.Lt_03C4:
.Lt_03C3:
push 3
push offset Lt_03C5
push 0
push dword ptr [ebp+8]
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_03C7
mov dword ptr [ebp-4], 40
jmp .Lt_0339
.Lt_03C7:
.Lt_03C6:
jmp .Lt_033A
.Lt_03C8:
mov eax, dword ptr [ebp+8]
movzx ebx, byte ptr [eax+1]
test ebx, ebx
jne .Lt_03CB
mov dword ptr [ebp-4], 39
jmp .Lt_0339
.Lt_03CB:
.Lt_03CA:
push 3
push offset Lt_03CC
push 0
push dword ptr [ebp+8]
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_03CE
mov dword ptr [ebp-4], 41
jmp .Lt_0339
.Lt_03CE:
.Lt_03CD:
jmp .Lt_033A
.Lt_03CF:
mov eax, dword ptr [ebp+8]
movzx ebx, byte ptr [eax+1]
test ebx, ebx
jne .Lt_03D2
mov dword ptr [ebp-4], 42
jmp .Lt_0339
.Lt_03D2:
.Lt_03D1:
push 7
push offset Lt_03D3
push 0
push dword ptr [ebp+8]
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_03D5
mov dword ptr [ebp-4], 43
jmp .Lt_0339
.Lt_03D5:
.Lt_03D4:
jmp .Lt_033A
.Lt_03D6:
mov eax, dword ptr [ebp+8]
movzx ebx, byte ptr [eax+1]
test ebx, ebx
jne .Lt_03D9
mov dword ptr [ebp-4], 44
jmp .Lt_0339
.Lt_03D9:
.Lt_03D8:
push 7
push offset Lt_02EA
push 0
push dword ptr [ebp+8]
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_03DB
mov dword ptr [ebp-4], 45
jmp .Lt_0339
.Lt_03DB:
.Lt_03DA:
push 6
push offset Lt_03DC
push 0
push dword ptr [ebp+8]
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_03DE
mov dword ptr [ebp-4], 46
jmp .Lt_0339
.Lt_03DE:
.Lt_03DD:
jmp .Lt_033A
.Lt_03DF:
mov eax, dword ptr [ebp+8]
movzx ebx, byte ptr [eax+1]
test ebx, ebx
jne .Lt_03E2
mov dword ptr [ebp-4], 47
jmp .Lt_0339
.Lt_03E2:
.Lt_03E1:
push 4
push offset Lt_03E3
push 0
push dword ptr [ebp+8]
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_03E5
mov dword ptr [ebp-4], 48
jmp .Lt_0339
.Lt_03E5:
.Lt_03E4:
push 8
push offset Lt_03E6
push 0
push dword ptr [ebp+8]
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_03E8
mov dword ptr [ebp-4], 49
jmp .Lt_0339
.Lt_03E8:
.Lt_03E7:
jmp .Lt_033A
.Lt_03E9:
mov eax, dword ptr [ebp+8]
movzx ebx, byte ptr [eax+1]
test ebx, ebx
jne .Lt_03EC
mov dword ptr [ebp-4], 50
jmp .Lt_0339
.Lt_03EC:
.Lt_03EB:
jmp .Lt_033A
.Lt_03ED:
push 3
push offset Lt_03EF
push 0
push dword ptr [ebp+8]
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_03F1
mov dword ptr [ebp-4], 51
jmp .Lt_0339
.Lt_03F1:
.Lt_03F0:
push 3
push offset Lt_03F2
push 0
push dword ptr [ebp+8]
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_03F4
mov dword ptr [ebp-4], 53
jmp .Lt_0339
.Lt_03F4:
.Lt_03F3:
push 3
push offset Lt_03F5
push 0
push dword ptr [ebp+8]
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_03F7
mov dword ptr [ebp-4], 52
jmp .Lt_0339
.Lt_03F7:
.Lt_03F6:
jmp .Lt_033A
.Lt_03F8:
mov eax, dword ptr [ebp+8]
movzx ebx, byte ptr [eax+1]
test ebx, ebx
jne .Lt_03FA
mov dword ptr [ebp-4], 54
jmp .Lt_0339
.Lt_03FA:
.Lt_03F9:
jmp .Lt_033A
.Lt_03FB:
mov ebx, dword ptr [ebp+8]
movzx eax, byte ptr [ebx+1]
test eax, eax
jne .Lt_03FE
mov dword ptr [ebp-4], 55
jmp .Lt_0339
.Lt_03FE:
.Lt_03FD:
jmp .Lt_033A
.Lt_03FF:
push 9
push offset Lt_0400
push 0
push dword ptr [ebp+8]
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_0402
mov dword ptr [ebp-4], 49
jmp .Lt_0339
.Lt_0402:
.Lt_0401:
push 6
push offset Lt_0403
push 0
push dword ptr [ebp+8]
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_0405
mov dword ptr [ebp-4], 18
jmp .Lt_0339
.Lt_0405:
.Lt_0404:
jmp .Lt_033A
.Lt_033B:
mov eax, dword ptr [ebp-8]
add eax, 4294967251
cmp eax, 77
ja .Lt_033A
mov eax, dword ptr [ebp-8]
jmp dword ptr [.LT_0406+eax*4-180]
.LT_0406:
.int .Lt_03FF
.int .Lt_033A
.int .Lt_033A
.int .Lt_033A
.int .Lt_033A
.int .Lt_033A
.int .Lt_033A
.int .Lt_033A
.int .Lt_033A
.int .Lt_033A
.int .Lt_033A
.int .Lt_033A
.int .Lt_033A
.int .Lt_033A
.int .Lt_033A
.int .Lt_033A
.int .Lt_033A
.int .Lt_033A
.int .Lt_033A
.int .Lt_033A
.int .Lt_033A
.int .Lt_033A
.int .Lt_034F
.int .Lt_033A
.int .Lt_033A
.int .Lt_033A
.int .Lt_033A
.int .Lt_033A
.int .Lt_033A
.int .Lt_033A
.int .Lt_033A
.int .Lt_033A
.int .Lt_033A
.int .Lt_033A
.int .Lt_03AA
.int .Lt_033A
.int .Lt_033A
.int .Lt_03C8
.int .Lt_033A
.int .Lt_033A
.int .Lt_033A
.int .Lt_033A
.int .Lt_03ED
.int .Lt_033A
.int .Lt_033A
.int .Lt_033A
.int .Lt_033A
.int .Lt_033A
.int .Lt_033A
.int .Lt_033A
.int .Lt_033A
.int .Lt_033A
.int .Lt_033D
.int .Lt_0347
.int .Lt_034B
.int .Lt_0353
.int .Lt_035D
.int .Lt_036A
.int .Lt_0375
.int .Lt_037C
.int .Lt_0381
.int .Lt_033A
.int .Lt_033A
.int .Lt_0388
.int .Lt_0391
.int .Lt_039E
.int .Lt_03A6
.int .Lt_03AE
.int .Lt_033A
.int .Lt_03C1
.int .Lt_03CF
.int .Lt_03D6
.int .Lt_033A
.int .Lt_03DF
.int .Lt_03E9
.int .Lt_03F8
.int .Lt_033A
.int .Lt_03FB
.Lt_033A:
mov dword ptr [ebp-4], -1
.Lt_0339:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size PARSEOPTION, .-PARSEOPTION
.balign 16
HANDLEARG:
.type HANDLEARG, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
.Lt_0407:
cmp dword ptr [FBC], 0
jl .Lt_040A
push -1
push dword ptr [ebp+8]
call fb_StrLen
add esp, 8
test eax, eax
jne .Lt_040C
push dword ptr [ebp+8]
call HFATALINVALIDOPTION
add esp, 4
.Lt_040C:
.Lt_040B:
push dword ptr [ebp+8]
push dword ptr [FBC]
call HANDLEOPT
add esp, 8
mov dword ptr [FBC], -1
jmp .Lt_0408
.Lt_040A:
.Lt_0409:
push -1
push dword ptr [ebp+8]
call fb_StrLen
add esp, 8
test eax, eax
jne .Lt_040E
jmp .Lt_0408
.Lt_040E:
.Lt_040D:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov al, byte ptr [ebx]
mov byte ptr [ebp-4], al
movzx eax, byte ptr [ebp-4]
cmp eax, 45
jne .Lt_0411
.Lt_0412:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
inc ebx
mov dword ptr [ebp-8], ebx
mov ebx, dword ptr [ebp-8]
movzx eax, byte ptr [ebx]
test eax, eax
jne .Lt_0414
push dword ptr [ebp+8]
call HFATALINVALIDOPTION
add esp, 4
.Lt_0414:
.Lt_0413:
push dword ptr [ebp-8]
call PARSEOPTION
add esp, 4
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jge .Lt_0416
push dword ptr [ebp+8]
call HFATALINVALIDOPTION
add esp, 4
.Lt_0416:
.Lt_0415:
mov eax, dword ptr [ebp-12]
cmp dword ptr [OPTION_TAKES_ARGUMENT+eax*4], 0
je .Lt_0418
mov eax, dword ptr [ebp-12]
mov dword ptr [FBC], eax
jmp .Lt_0417
.Lt_0418:
push dword ptr [ebp+8]
push dword ptr [ebp-12]
call HANDLEOPT
add esp, 8
.Lt_0417:
jmp .Lt_040F
.Lt_0411:
movzx eax, byte ptr [ebp-4]
cmp eax, 64
jne .Lt_0419
.Lt_041B:
cmp dword ptr [Lt_06E0], 128
jle .Lt_041D
push 0
push 1
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax]
push 27
call ERRREPORTEX
add esp, 20
push 1
call FBCEND
add esp, 4
.Lt_041D:
.Lt_041C:
push 0
push -1
push -1
push dword ptr [ebp+8]
call fb_StrLen
add esp, 8
dec eax
push eax
push dword ptr [ebp+8]
call fb_RIGHT
add esp, 8
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
jne .Lt_041F
push dword ptr [ebp+8]
call HFATALINVALIDOPTION
add esp, 4
.Lt_041F:
.Lt_041E:
inc dword ptr [Lt_06E0]
push dword ptr [ebp+8]
call PARSEARGSFROMFILE
add esp, 4
dec dword ptr [Lt_06E0]
jmp .Lt_040F
.Lt_0419:
push 0
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax]
call HGETFILEEXT
add esp, 4
push eax
push -1
lea eax, [ebp-16]
push eax
call fb_StrInit
add esp, 20
push 4
push offset Lt_0423
push -1
lea eax, [ebp-16]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_0422
.Lt_0424:
push dword ptr [ebp+8]
call HADDBAS
add esp, 4
jmp .Lt_0421
.Lt_0422:
push 2
push offset Lt_03A7
push -1
lea eax, [ebp-16]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_0425
.Lt_0426:
push dword ptr [ebp+8]
call FBCADDOBJ
add esp, 4
jmp .Lt_0421
.Lt_0425:
push 2
push offset Lt_033E
push -1
lea eax, [ebp-16]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_0427
.Lt_0428:
push dword ptr [ebp+8]
lea eax, [FBC+220]
push eax
call STRLISTAPPEND
add esp, 8
jmp .Lt_0421
.Lt_0427:
push 3
push offset Lt_042A
push -1
lea eax, [ebp-16]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
je .Lt_042C
.Lt_042D:
push 4
push offset Lt_042B
push -1
lea eax, [ebp-16]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_0429
.Lt_042C:
push -1
push dword ptr [ebp+8]
lea eax, [FBC+104]
push eax
call LISTNEWNODE
add esp, 4
push eax
call HSETIOFILE
add esp, 12
jmp .Lt_0421
.Lt_0429:
push 4
push offset Lt_042F
push -1
lea eax, [ebp-16]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_042E
.Lt_0430:
push -1
lea eax, [FBC+136]
push eax
call fb_StrLen
add esp, 8
test eax, eax
jle .Lt_0432
push dword ptr [ebp+8]
call HFATALINVALIDOPTION
add esp, 4
.Lt_0432:
.Lt_0431:
push -1
push dword ptr [ebp+8]
lea eax, [FBC+136]
push eax
call HSETIOFILE
add esp, 12
jmp .Lt_0421
.Lt_042E:
push dword ptr [ebp+8]
call HFATALINVALIDOPTION
add esp, 4
.Lt_0433:
.Lt_0421:
lea eax, [ebp-16]
push eax
call fb_StrDelete
add esp, 4
.Lt_0420:
.Lt_040F:
.Lt_0408:
pop ebx
mov esp, ebp
pop ebp
ret
.size HANDLEARG, .-HANDLEARG

.section .data
.balign 4
Lt_06E0:
.int 0

.section .text
.balign 16
PARSEARGSFROMFILE:
.type PARSEARGSFROMFILE, @function
push ebp
mov ebp, esp
sub esp, 48
push ebx
.Lt_0434:
call fb_FileFree
mov dword ptr [ebp-4], eax
push 0
push dword ptr [ebp-4]
push 0
push 0
push 2
push dword ptr [ebp+8]
call fb_FileOpen
add esp, 24
test eax, eax
je .Lt_0437
push 0
push 1
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax]
push 26
call ERRREPORTEX
add esp, 20
push 1
call FBCEND
add esp, 4
.Lt_0437:
.Lt_0436:
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
.Lt_0438:
push dword ptr [ebp-4]
call fb_FileEof
add esp, 4
test eax, eax
jne .Lt_0439
push 0
push -1
lea eax, [ebp-16]
push eax
push dword ptr [ebp-4]
call fb_FileLineInput
add esp, 16
push 0
push -1
lea eax, [ebp-16]
push eax
call fb_TRIM
add esp, 4
push eax
push -1
lea eax, [ebp-16]
push eax
call fb_StrAssign
add esp, 20
.Lt_043A:
push -1
lea eax, [ebp-16]
push eax
call fb_StrLen
add esp, 8
mov dword ptr [ebp-32], eax
cmp dword ptr [ebp-32], 0
jne .Lt_043E
jmp .Lt_043B
.Lt_043E:
.Lt_043D:
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-40], 0
.Lt_043F:
mov eax, dword ptr [ebp-32]
cmp dword ptr [ebp-36], eax
jge .Lt_0440
mov eax, dword ptr [ebp-16]
add eax, dword ptr [ebp-36]
movzx ebx, byte ptr [eax]
mov dword ptr [ebp-44], ebx
mov ebx, dword ptr [ebp-44]
mov dword ptr [ebp-48], ebx
jmp .Lt_0442
.Lt_0444:
cmp dword ptr [ebp-40], 0
jne .Lt_0446
jmp .Lt_0440
.Lt_0446:
.Lt_0445:
jmp .Lt_0441
.Lt_0447:
mov ebx, dword ptr [ebp-44]
cmp dword ptr [ebp-40], ebx
jne .Lt_044A
mov dword ptr [ebp-40], 0
jmp .Lt_0449
.Lt_044A:
cmp dword ptr [ebp-40], 0
jne .Lt_044B
mov ebx, dword ptr [ebp-44]
mov dword ptr [ebp-40], ebx
.Lt_044B:
.Lt_0449:
jmp .Lt_0441
.Lt_0442:
mov ebx, dword ptr [ebp-48]
add ebx, 4294967264
cmp ebx, 7
ja .Lt_0441
mov ebx, dword ptr [ebp-48]
jmp dword ptr [.LT_044C+ebx*4-128]
.LT_044C:
.int .Lt_0444
.int .Lt_0441
.int .Lt_0447
.int .Lt_0441
.int .Lt_0441
.int .Lt_0441
.int .Lt_0441
.int .Lt_0447
.Lt_0441:
inc dword ptr [ebp-36]
jmp .Lt_043F
.Lt_0440:
cmp dword ptr [ebp-36], 0
jne .Lt_044E
mov dword ptr [ebp-36], 1
jmp .Lt_044D
.Lt_044E:
push 0
push -1
push dword ptr [ebp-36]
lea ebx, [ebp-16]
push ebx
call fb_LEFT
add esp, 8
push eax
push -1
lea eax, [ebp-28]
push eax
call fb_StrAssign
add esp, 20
push 0
push -1
lea eax, [ebp-28]
push eax
call fb_TRIM
add esp, 4
push eax
push -1
lea eax, [ebp-28]
push eax
call fb_StrAssign
add esp, 20
push 0
push -1
lea eax, [ebp-28]
push eax
call STRUNQUOTE
add esp, 4
push eax
push -1
lea eax, [ebp-28]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-28]
push eax
call HANDLEARG
add esp, 4
.Lt_044D:
push 0
push -1
mov eax, dword ptr [ebp-32]
sub eax, dword ptr [ebp-36]
push eax
lea eax, [ebp-16]
push eax
call fb_RIGHT
add esp, 8
push eax
push -1
lea eax, [ebp-16]
push eax
call fb_StrAssign
add esp, 20
.Lt_043C:
jmp .Lt_043A
.Lt_043B:
jmp .Lt_0438
.Lt_0439:
push dword ptr [ebp-4]
call fb_FileClose
add esp, 4
test eax, eax
je .Lt_044F
push 0
push 0
push offset Lt_0093
push 2111
call fb_ErrorThrowAt
add esp, 16
jmp eax
.Lt_044F:
lea eax, [ebp-28]
push eax
call fb_StrDelete
add esp, 4
lea eax, [ebp-16]
push eax
call fb_StrDelete
add esp, 4
.Lt_0435:
pop ebx
mov esp, ebp
pop ebp
ret
.size PARSEARGSFROMFILE, .-PARSEARGSFROMFILE
.balign 16
HTARGETNEEDSPIC:
.type HTARGETNEEDSPIC, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_0450:
mov dword ptr [ebp-4], 0
call FBGETCPUFAMILY
test eax, eax
je .Lt_0453
push 3
call FBGETOPTION
add esp, 4
mov dword ptr [ebp-8], eax
jmp .Lt_0455
.Lt_0457:
mov dword ptr [ebp-4], -1
jmp .Lt_0454
.Lt_0455:
mov eax, dword ptr [ebp-8]
add eax, 4294967294
cmp eax, 6
ja .Lt_0454
mov eax, dword ptr [ebp-8]
jmp dword ptr [.LT_0458+eax*4-8]
.LT_0458:
.int .Lt_0457
.int .Lt_0454
.int .Lt_0454
.int .Lt_0457
.int .Lt_0457
.int .Lt_0454
.int .Lt_0457
.Lt_0454:
.Lt_0453:
.Lt_0452:
.Lt_0451:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size HTARGETNEEDSPIC, .-HTARGETNEEDSPIC
.balign 16
HPARSEARGS:
.type HPARSEARGS, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
.Lt_0459:
mov dword ptr [FBC], -1
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
mov dword ptr [ebp-16], 1
mov eax, dword ptr [ebp+8]
dec eax
mov dword ptr [ebp-20], eax
jmp .Lt_045C
.Lt_045F:
push 0
push 0
mov eax, dword ptr [ebp-16]
sal eax, 2
mov ebx, dword ptr [ebp+12]
add ebx, eax
push dword ptr [ebx]
push -1
lea ebx, [ebp-12]
push ebx
call fb_StrAssign
add esp, 20
lea ebx, [ebp-12]
push ebx
call HANDLEARG
add esp, 4
.Lt_045D:
inc dword ptr [ebp-16]
.Lt_045C:
mov ebx, dword ptr [ebp-20]
cmp dword ptr [ebp-16], ebx
jle .Lt_045F
.Lt_045E:
cmp dword ptr [FBC], 0
jl .Lt_0461
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
push 0
push 0
mov ebx, dword ptr [ebp+8]
sal ebx, 2
mov eax, dword ptr [ebp+12]
add eax, ebx
push dword ptr [eax-4]
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-24]
push eax
call HFATALINVALIDOPTION
add esp, 4
lea eax, [ebp-24]
push eax
call fb_StrDelete
add esp, 4
.Lt_0461:
.Lt_0460:
call HCHECKWAITINGOBJFILE
push 5
call FBGETOPTION
add esp, 4
test eax, eax
jne .Lt_0464
push 7
call FBGETOPTION
add esp, 4
cmp eax, 1
setge al
shr eax, 1
sbb eax, eax
push 6
mov ebx, eax
call FBGETOPTION
add esp, 4
cmp eax, 1
sete al
shr eax, 1
sbb eax, eax
or ebx, eax
je .Lt_0466
push 0
push 1
push -1
push offset Lt_0000
push 283
call ERRREPORTEX
add esp, 20
push 1
call FBCEND
add esp, 4
.Lt_0466:
.Lt_0465:
.Lt_0464:
.Lt_0463:
cmp dword ptr [FBC+24], 0
jl .Lt_0468
push dword ptr [FBC+24]
push 4
call FBSETOPTION
add esp, 8
.Lt_0468:
.Lt_0467:
push 3
call FBGETOPTION
add esp, 4
cmp eax, 3
sete al
shr eax, 1
sbb eax, eax
mov ebx, eax
call FBGETCPUFAMILY
test eax, eax
setne al
shr eax, 1
sbb eax, eax
and ebx, eax
je .Lt_046A
push 0
push 1
push -1
call FBGETFBCARCH
push eax
push 81
call ERRREPORTEX
add esp, 20
push 1
call FBCEND
add esp, 4
.Lt_046A:
.Lt_0469:
call FBGETCPUFAMILY
test eax, eax
jne .Lt_046C
push 0
push 2
call FBSETOPTION
add esp, 8
jmp .Lt_046B
.Lt_046C:
push 1
push 2
call FBSETOPTION
add esp, 8
.Lt_046B:
cmp dword ptr [FBC+20], 0
jl .Lt_046E
push dword ptr [FBC+20]
push 2
call FBSETOPTION
add esp, 8
.Lt_046E:
.Lt_046D:
push 2
call FBGETOPTION
add esp, 4
test eax, eax
sete al
shr eax, 1
sbb eax, eax
mov ebx, eax
call FBGETCPUFAMILY
test eax, eax
setne al
shr eax, 1
sbb eax, eax
and ebx, eax
je .Lt_0470
push 0
push 1
push -1
call FBGETFBCARCH
push eax
push 82
call ERRREPORTEX
add esp, 20
push 1
call FBCEND
add esp, 4
.Lt_0470:
.Lt_046F:
push 3
call FBGETOPTION
add esp, 4
mov dword ptr [ebp-16], eax
jmp .Lt_0472
.Lt_0474:
jmp .Lt_0471
.Lt_0475:
lea eax, [FBC+104]
push eax
call LISTGETHEAD
add esp, 4
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 0
je .Lt_0477
push 0
push 1
push -1
mov eax, dword ptr [ebp-20]
push dword ptr [eax]
push 290
call ERRREPORTEX
add esp, 20
push 1
call FBCEND
add esp, 4
.Lt_0477:
.Lt_0476:
jmp .Lt_0471
.Lt_0472:
cmp dword ptr [ebp-16], 4
ja .Lt_0475
mov eax, dword ptr [ebp-16]
jmp dword ptr [.LT_0478+eax*4]
.LT_0478:
.int .Lt_0474
.int .Lt_0474
.int .Lt_0475
.int .Lt_0475
.int .Lt_0474
.Lt_0471:
push 3
call FBGETOPTION
add esp, 4
mov dword ptr [ebp-16], eax
jmp .Lt_047A
.Lt_047C:
jmp .Lt_0479
.Lt_047D:
push -1
lea eax, [FBC+136]
push eax
call fb_StrLen
add esp, 8
test eax, eax
jle .Lt_047F
push 0
push 1
push -1
push dword ptr [FBC+136]
push 290
call ERRREPORTEX
add esp, 20
push 1
call FBCEND
add esp, 4
.Lt_047F:
.Lt_047E:
jmp .Lt_0479
.Lt_047A:
mov eax, dword ptr [ebp-16]
add eax, 4294967294
cmp eax, 6
ja .Lt_047D
mov eax, dword ptr [ebp-16]
jmp dword ptr [.LT_0480+eax*4-8]
.LT_0480:
.int .Lt_047C
.int .Lt_047D
.int .Lt_047D
.int .Lt_047C
.int .Lt_047C
.int .Lt_047C
.int .Lt_047C
.Lt_0479:
cmp dword ptr [FBC+32], 0
jl .Lt_0482
push 2
call FBGETOPTION
add esp, 4
test eax, eax
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [FBC+32]
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
and eax, ebx
je .Lt_0484
push 0
push 1
push -1
push offset Lt_0000
push 83
call ERRREPORTEX
add esp, 20
.Lt_0484:
.Lt_0483:
push dword ptr [FBC+32]
push 9
call FBSETOPTION
add esp, 8
.Lt_0482:
.Lt_0481:
push 0
call FBGETOPTION
add esp, 4
cmp eax, 2
jne .Lt_0486
call HTARGETNEEDSPIC
test eax, eax
je .Lt_0488
push -1
push 26
call FBSETOPTION
add esp, 8
.Lt_0488:
.Lt_0487:
.Lt_0486:
.Lt_0485:
push 26
call FBGETOPTION
add esp, 4
test eax, eax
je .Lt_048A
push 0
call FBGETOPTION
add esp, 4
test eax, eax
jne .Lt_048C
push 0
push 1
push -1
push offset Lt_0000
push 84
call ERRREPORTEX
add esp, 20
jmp .Lt_048B
.Lt_048C:
call HTARGETNEEDSPIC
test eax, eax
jne .Lt_048D
push 0
push 1
push -1
push offset Lt_0000
push 85
call ERRREPORTEX
add esp, 20
.Lt_048D:
.Lt_048B:
.Lt_048A:
.Lt_0489:
lea eax, [ebp-12]
push eax
call fb_StrDelete
add esp, 4
.Lt_045A:
pop ebx
mov esp, ebp
pop ebp
ret
.size HPARSEARGS, .-HPARSEARGS
.balign 16
FBCINIT2:
.type FBCINIT2, @function
push ebp
mov ebp, esp
sub esp, 192
push ebx
.Lt_048E:
push 261
lea eax, [FBC+2128]
push eax
call fb_StrLen
add esp, 8
test eax, eax
jne .Lt_0491
push 0
push -1
push 2
push offset Lt_001A
push -1
mov dword ptr [ebp-168], 0
mov dword ptr [ebp-164], 0
mov dword ptr [ebp-160], 0
push 0
push -1
call fb_ExePath
push eax
push -1
lea eax, [ebp-168]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-168]
push eax
call PATHSTRIPDIV
add esp, 4
push eax
mov dword ptr [ebp-180], 0
mov dword ptr [ebp-176], 0
mov dword ptr [ebp-172], 0
lea eax, [ebp-180]
push eax
call fb_StrConcat
add esp, 20
push eax
push 261
lea eax, [FBC+2128]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-168]
push eax
call fb_StrDelete
add esp, 4
push 0
push -1
push 4
push offset Lt_0495
push 261
lea eax, [FBC+2128]
push eax
mov dword ptr [ebp-192], 0
mov dword ptr [ebp-188], 0
mov dword ptr [ebp-184], 0
lea eax, [ebp-192]
push eax
call fb_StrConcat
add esp, 20
push eax
push 261
lea eax, [FBC+2128]
push eax
call fb_StrAssign
add esp, 20
jmp .Lt_0490
.Lt_0491:
push 0
push -1
push 2
push offset Lt_001A
push 261
lea eax, [FBC+2128]
push eax
mov dword ptr [ebp-168], 0
mov dword ptr [ebp-164], 0
mov dword ptr [ebp-160], 0
lea eax, [ebp-168]
push eax
call fb_StrConcat
add esp, 20
push eax
push 261
lea eax, [FBC+2128]
push eax
call fb_StrAssign
add esp, 20
.Lt_0490:
push 0
push -1
call FBGETTARGETID
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrInit
add esp, 20
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
push 3
call FBGETOPTION
add esp, 4
cmp eax, 3
jne .Lt_0499
push 0
push 8
push offset Lt_049A
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
jmp .Lt_0498
.Lt_0499:
push 0
push 10
push offset Lt_049B
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
.Lt_0498:
push 0
push -1
push 129
lea eax, [FBC+1859]
push eax
push -1
push 2
push offset Lt_001A
push -1
push 4
push offset Lt_049C
push 261
lea eax, [FBC+2128]
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
push 261
lea eax, [FBC+2389]
push eax
call fb_StrAssign
add esp, 20
push 0
push -1
push -1
lea eax, [ebp-24]
push eax
push -1
push 2
push offset Lt_001A
push -1
push 8
push offset Lt_0385
push 261
lea eax, [FBC+2128]
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
push 261
lea eax, [FBC+2650]
push eax
call fb_StrAssign
add esp, 20
push 0
push -1
push 2
push offset Lt_001A
push -1
push -1
lea eax, [ebp-24]
push eax
push -1
push 2
push offset Lt_001A
push -1
push 4
push offset Lt_0045
push 261
lea eax, [FBC+2128]
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
mov dword ptr [ebp-144], 0
mov dword ptr [ebp-140], 0
mov dword ptr [ebp-136], 0
lea eax, [ebp-144]
push eax
call fb_StrConcat
add esp, 20
push eax
push 261
lea eax, [FBC+2911]
push eax
call fb_StrAssign
add esp, 20
push 129
lea eax, [FBC+1730]
push eax
call fb_StrLen
add esp, 8
test eax, eax
jle .Lt_04A8
push 0
push -1
push 129
lea eax, [FBC+1730]
push eax
push 261
lea eax, [FBC+2911]
push eax
mov dword ptr [ebp-168], 0
mov dword ptr [ebp-164], 0
mov dword ptr [ebp-160], 0
lea eax, [ebp-168]
push eax
call fb_StrConcat
add esp, 20
push eax
push 261
lea eax, [FBC+2911]
push eax
call fb_StrAssign
add esp, 20
jmp .Lt_04A7
.Lt_04A8:
push 0
push -1
push -1
lea eax, [ebp-12]
push eax
push 261
lea eax, [FBC+2911]
push eax
mov dword ptr [ebp-168], 0
mov dword ptr [ebp-164], 0
mov dword ptr [ebp-160], 0
lea eax, [ebp-168]
push eax
call fb_StrConcat
add esp, 20
push eax
push 261
lea eax, [FBC+2911]
push eax
call fb_StrAssign
add esp, 20
.Lt_04A7:
cmp dword ptr [FBC+56], 0
je .Lt_04AC
push 0
push -1
lea eax, [ebp-12]
push eax
push -1
lea eax, [ebp-168]
push eax
call fb_StrInit
add esp, 20
push 0
push -1
push -1
push 0
call FBGETFBCARCH
push eax
push 3
push offset Lt_04AD
mov dword ptr [ebp-180], 0
mov dword ptr [ebp-176], 0
mov dword ptr [ebp-172], 0
lea eax, [ebp-180]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-168]
push eax
mov dword ptr [ebp-192], 0
mov dword ptr [ebp-188], 0
mov dword ptr [ebp-184], 0
lea eax, [ebp-192]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-168]
push eax
call fb_StrAssign
add esp, 20
push 0
push 3
push offset Lt_04AD
push -1
lea eax, [ebp-168]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
call FBGETBITS
push eax
call fb_IntToStr
add esp, 4
push eax
push -1
lea eax, [ebp-168]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 4
push offset Lt_04B0
push -1
lea eax, [ebp-168]
push eax
call fb_StrConcatAssign
add esp, 20
push 129
lea eax, [FBC+1730]
push eax
call fb_StrLen
add esp, 8
test eax, eax
jle .Lt_04B2
push 0
push 3
push offset Lt_04B3
push -1
lea eax, [ebp-168]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 129
lea eax, [FBC+1730]
push eax
push -1
lea eax, [ebp-168]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 2
push offset Lt_04B4
push -1
lea eax, [ebp-168]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_04B2:
.Lt_04B1:
push 2
push 7
push offset Lt_04B5
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
lea eax, [ebp-168]
push eax
push 0
call fb_PrintString
add esp, 12
lea eax, [ebp-168]
push eax
call fb_StrDelete
add esp, 4
.Lt_04AC:
.Lt_04AB:
mov dword ptr [ebp-156], 0
mov dword ptr [ebp-152], 0
mov dword ptr [ebp-148], 0
push 0
push 261
lea eax, [FBC+2650]
push eax
push -1
lea eax, [ebp-156]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-156]
push eax
call FBADDINCLUDEPATH
add esp, 4
lea eax, [ebp-156]
push eax
call fb_StrDelete
add esp, 4
push 261
lea eax, [FBC+689]
push eax
call fb_StrLen
add esp, 8
test eax, eax
jne .Lt_04B8
lea eax, [FBC+72]
push eax
call LISTGETHEAD
add esp, 4
mov dword ptr [ebp-160], eax
cmp dword ptr [ebp-160], 0
je .Lt_04BA
push 0
push -1
mov eax, dword ptr [ebp-160]
lea ebx, [eax]
push ebx
push 261
lea ebx, [FBC+689]
push ebx
call fb_StrAssign
add esp, 20
jmp .Lt_04B9
.Lt_04BA:
lea ebx, [FBC+188]
push ebx
call LISTGETHEAD
add esp, 4
mov dword ptr [ebp-176], eax
cmp dword ptr [ebp-176], 0
je .Lt_04BC
push 0
push -1
push dword ptr [ebp-176]
push 261
lea eax, [FBC+689]
push eax
call fb_StrAssign
add esp, 20
jmp .Lt_04BB
.Lt_04BC:
push 0
push 8
push offset Lt_04BD
push 261
lea eax, [FBC+689]
push eax
call fb_StrAssign
add esp, 20
.Lt_04BB:
.Lt_04B9:
push 0
push -1
mov dword ptr [ebp-172], 0
mov dword ptr [ebp-168], 0
mov dword ptr [ebp-164], 0
push 0
push 261
lea eax, [FBC+689]
push eax
push -1
lea eax, [ebp-172]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-172]
push eax
call HSTRIPEXT
add esp, 4
push eax
push 261
lea eax, [FBC+689]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-172]
push eax
call fb_StrDelete
add esp, 4
.Lt_04B8:
.Lt_04B7:
lea eax, [ebp-24]
push eax
call fb_StrDelete
add esp, 4
lea eax, [ebp-12]
push eax
call fb_StrDelete
add esp, 4
.Lt_048F:
pop ebx
mov esp, ebp
pop ebp
ret
.size FBCINIT2, .-FBCINIT2
.balign 16
HGETASMNAME:
.type HGETASMNAME, @function
push ebp
mov ebp, esp
sub esp, 44
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_04BF:
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
push 0
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+12]
call HSTRIPEXT
add esp, 4
push eax
push -1
lea eax, [ebp-28]
push eax
call fb_StrAssign
add esp, 20
mov eax, offset Lt_04C1
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp+12], 1
jne .Lt_04C3
push 2
call FBGETOPTION
add esp, 4
mov dword ptr [ebp-44], eax
cmp dword ptr [ebp-44], 1
jne .Lt_04C6
.Lt_04C7:
mov eax, offset Lt_04C8
mov dword ptr [ebp-16], eax
jmp .Lt_04C4
.Lt_04C6:
cmp dword ptr [ebp-44], 2
jne .Lt_04C9
.Lt_04CA:
mov eax, offset Lt_04CB
mov dword ptr [ebp-16], eax
.Lt_04C9:
.Lt_04C4:
.Lt_04C3:
.Lt_04C2:
push 0
push -1
push 0
push dword ptr [ebp-16]
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
.Lt_04C0:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
mov esp, ebp
pop ebp
ret
.size HGETASMNAME, .-HGETASMNAME
.balign 16
HCOMPILEBAS:
.type HCOMPILEBAS, @function
push ebp
mov ebp, esp
sub esp, 48
push ebx
.Lt_04CD:
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 0
push -1
push 1
push dword ptr [ebp+8]
call HGETASMNAME
add esp, 8
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
mov eax, dword ptr [FBC+40]
not eax
push 2
mov ebx, eax
call FBGETOPTION
add esp, 4
test eax, eax
setne al
shr eax, 1
sbb eax, eax
mov ecx, dword ptr [FBC+48]
not ecx
or eax, ecx
and ebx, eax
je .Lt_04D0
lea eax, [ebp-24]
push eax
call FBCADDTEMP
add esp, 4
.Lt_04D0:
.Lt_04CF:
push 1
call FBGETOPTION
add esp, 4
test eax, eax
je .Lt_04D2
push 0
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+12]
push -1
lea eax, [ebp-36]
push eax
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+16], 0
jne .Lt_04D4
push 0
push -1
push 8
push offset Lt_04D5
push -1
lea eax, [ebp-36]
push eax
call HSTRIPEXT
add esp, 4
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
lea eax, [ebp-36]
push eax
call fb_StrAssign
add esp, 20
.Lt_04D4:
.Lt_04D3:
.Lt_04D2:
.Lt_04D1:
cmp dword ptr [FBC+56], 0
je .Lt_04D8
push 2
push 11
push offset Lt_04D9
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 0
mov eax, dword ptr [ebp+8]
lea ebx, [eax]
push ebx
push 0
call fb_PrintString
add esp, 12
push 0
push 4
push offset Lt_04DA
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 0
lea eax, [ebp-24]
push eax
push 0
call fb_PrintString
add esp, 12
push 1
call FBGETOPTION
add esp, 4
test eax, eax
je .Lt_04DC
push 0
push -1
lea eax, [ebp-36]
push eax
push 6
push offset Lt_04DD
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
lea eax, [ebp-48]
push eax
call fb_StrConcat
add esp, 20
push eax
push 0
call fb_PrintString
add esp, 12
.Lt_04DC:
.Lt_04DB:
cmp dword ptr [ebp+12], 0
je .Lt_04E0
push 0
push 14
push offset Lt_04E1
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
jmp .Lt_04DF
.Lt_04E0:
cmp dword ptr [ebp+16], 0
je .Lt_04E2
push 0
push 23
push offset Lt_04E3
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
.Lt_04E2:
.Lt_04DF:
push 1
push 0
call fb_PrintVoid
add esp, 8
.Lt_04D8:
.Lt_04D7:
mov dword ptr [ebp-12], 0
push 10
call FBGETOPTION
add esp, 4
mov dword ptr [ebp-4], eax
push 0
call FBGETOPTION
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp+16], 0
je .Lt_04E5
push 3
push 0
call FBSETOPTION
add esp, 8
.Lt_04E5:
.Lt_04E4:
.Lt_04E6:
push dword ptr [ebp-12]
push dword ptr [ebp+12]
call FBINIT
add esp, 8
cmp dword ptr [ebp+16], 0
je .Lt_04EA
lea eax, [FBC+384]
push eax
lea eax, [FBC+340]
push eax
call FBSETLIBS
add esp, 8
jmp .Lt_04E9
.Lt_04EA:
lea eax, [FBC+296]
push eax
lea eax, [FBC+252]
push eax
call FBSETLIBS
add esp, 8
.Lt_04E9:
push dword ptr [ebp+12]
lea eax, [ebp-36]
push eax
push dword ptr [ebp-24]
mov eax, dword ptr [ebp+8]
push dword ptr [eax]
call FBCOMPILE
add esp, 16
call ERRGETCOUNT
test eax, eax
jle .Lt_04EC
push 1
call FBCEND
add esp, 4
.Lt_04EC:
.Lt_04EB:
call FBSHOULDRESTART
test eax, eax
jne .Lt_04EE
jmp .Lt_04E7
.Lt_04EE:
.Lt_04ED:
inc dword ptr [ebp-12]
call FBEND
.Lt_04E8:
jmp .Lt_04E6
.Lt_04E7:
cmp dword ptr [ebp+16], 0
jne .Lt_04F0
lea eax, [FBC+384]
push eax
lea eax, [FBC+340]
push eax
call FBGETLIBS
add esp, 8
.Lt_04F0:
.Lt_04EF:
call FBEND
push dword ptr [ebp-8]
push 0
call FBSETOPTION
add esp, 8
push dword ptr [ebp-4]
push 10
call FBSETOPTION
add esp, 8
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
lea eax, [ebp-24]
push eax
call fb_StrDelete
add esp, 4
.Lt_04CE:
pop ebx
mov esp, ebp
pop ebp
ret
.size HCOMPILEBAS, .-HCOMPILEBAS
.balign 16
HCOMPILEMODULES:
.type HCOMPILEMODULES, @function
push ebp
mov ebp, esp
sub esp, 36
push ebx
.Lt_04F1:
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-4], 0
push 0
call FBGETOPTION
add esp, 4
mov dword ptr [ebp-28], eax
cmp dword ptr [ebp-28], 0
je .Lt_04F6
.Lt_04F7:
cmp dword ptr [ebp-28], 2
jne .Lt_04F5
.Lt_04F6:
mov dword ptr [ebp-8], -1
jmp .Lt_04F3
.Lt_04F5:
mov eax, dword ptr [FBC+952]
mov dword ptr [ebp-8], eax
.Lt_04F8:
.Lt_04F3:
cmp dword ptr [ebp-8], 0
je .Lt_04FA
push 0
push -1
lea eax, [FBC+689]
push eax
call HSTRIPPATH
add esp, 4
push eax
push -1
lea eax, [ebp-20]
push eax
call fb_StrAssign
add esp, 20
.Lt_04FA:
.Lt_04F9:
lea eax, [FBC+72]
push eax
call LISTGETHEAD
add esp, 4
mov dword ptr [ebp-24], eax
cmp dword ptr [ebp-24], 0
jne .Lt_04FC
lea eax, [FBC+252]
push eax
lea eax, [FBC+340]
push eax
call STRSETCOPY
add esp, 8
lea eax, [FBC+296]
push eax
lea eax, [FBC+384]
push eax
call STRSETCOPY
add esp, 8
lea eax, [ebp-20]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_04F2
.Lt_04FC:
.Lt_04FB:
.Lt_04FD:
cmp dword ptr [ebp-8], 0
je .Lt_0501
push -1
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 0
push -1
mov eax, dword ptr [ebp-24]
lea ebx, [eax]
push ebx
call HSTRIPEXT
add esp, 4
push eax
push -1
lea eax, [ebp-36]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-36]
call HSTRIPPATH
add esp, 4
push eax
push -1
lea eax, [ebp-20]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
sete al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-4], eax
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
.Lt_0501:
.Lt_0500:
push 0
push dword ptr [ebp-4]
push dword ptr [ebp-24]
call HCOMPILEBAS
add esp, 12
push dword ptr [ebp-24]
call LISTGETNEXT
add esp, 4
mov dword ptr [ebp-24], eax
.Lt_04FF:
cmp dword ptr [ebp-24], 0
jne .Lt_04FD
.Lt_04FE:
lea eax, [ebp-20]
push eax
call fb_StrDelete
add esp, 4
.Lt_04F2:
pop ebx
mov esp, ebp
pop ebp
ret
.size HCOMPILEMODULES, .-HCOMPILEMODULES
.balign 16
HPARSEXPM:
.type HPARSEXPM, @function
push ebp
mov ebp, esp
sub esp, 144
push ebx
mov dword ptr [ebp-4], 0
.Lt_0503:
push 0
push -1
push 28
push offset Lt_0505
push -1
push dword ptr [ebp+12]
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
lea eax, [ebp-16]
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
push 21
push offset Lt_0507
push -1
push dword ptr [ebp+12]
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
lea eax, [ebp-28]
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
push 20
push offset Lt_0509
push -1
push dword ptr [ebp+12]
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
lea eax, [ebp-40]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+12]
call fb_StrAssign
add esp, 20
call fb_FileFree
mov dword ptr [ebp-44], eax
push 0
push dword ptr [ebp-44]
push 0
push 0
push 2
push dword ptr [ebp+8]
call fb_FileOpen
add esp, 24
test eax, eax
je .Lt_050C
jmp .Lt_0504
.Lt_050C:
.Lt_050B:
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
push 0
push -1
lea eax, [ebp-56]
push eax
push dword ptr [ebp-44]
call fb_FileLineInput
add esp, 16
push 10
push offset Lt_050D
push -1
push 0
lea eax, [ebp-56]
push eax
call fb_StrUcase2
add esp, 8
push eax
call fb_StrCompare
add esp, 16
test eax, eax
je .Lt_050F
push dword ptr [ebp-44]
call fb_FileClose
add esp, 4
test eax, eax
je .Lt_0510
push 0
push 0
push offset Lt_0093
push 2620
call fb_ErrorThrowAt
add esp, 16
jmp eax
.Lt_0510:
lea eax, [ebp-56]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0504
.Lt_050F:
.Lt_050E:
mov dword ptr [ebp-60], 0
.Lt_0511:
push dword ptr [ebp-44]
call fb_FileEof
add esp, 4
test eax, eax
jne .Lt_0512
push 0
push -1
lea eax, [ebp-56]
push eax
push dword ptr [ebp-44]
call fb_FileLineInput
add esp, 16
push 0
push -1
push -1
lea eax, [ebp-56]
push eax
call fb_StrLen
add esp, 8
push 1
push offset Lt_00E7
mov ebx, eax
call fb_StrAllocTempDescZEx
add esp, 8
push eax
lea eax, [ebp-56]
push eax
push 1
call fb_StrInstr
add esp, 12
sub ebx, eax
inc ebx
push ebx
lea ebx, [ebp-56]
push ebx
call fb_RIGHT
add esp, 8
push eax
push -1
lea eax, [ebp-56]
push eax
call fb_StrAssign
add esp, 20
push 0
push -1
push 1
push offset Lt_00E7
call fb_StrAllocTempDescZEx
add esp, 8
push eax
lea eax, [ebp-56]
push eax
push 2
call fb_StrInstr
add esp, 12
push eax
lea eax, [ebp-56]
push eax
call fb_LEFT
add esp, 8
push eax
push -1
lea eax, [ebp-56]
push eax
call fb_StrAssign
add esp, 20
push -1
lea eax, [ebp-56]
push eax
call fb_StrLen
add esp, 8
test eax, eax
jle .Lt_0514
cmp dword ptr [ebp-60], 0
je .Lt_0516
push 0
push -1
push 5
push offset Lt_0517
push -1
push dword ptr [ebp+12]
mov dword ptr [ebp-144], 0
mov dword ptr [ebp-140], 0
mov dword ptr [ebp-136], 0
lea eax, [ebp-144]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+12]
call fb_StrAssign
add esp, 20
.Lt_0516:
.Lt_0515:
push 0
push -1
push -1
push -1
lea eax, [ebp-56]
push eax
push 3
push offset Lt_0519
mov dword ptr [ebp-120], 0
mov dword ptr [ebp-116], 0
mov dword ptr [ebp-112], 0
lea eax, [ebp-120]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+12]
mov dword ptr [ebp-132], 0
mov dword ptr [ebp-128], 0
mov dword ptr [ebp-124], 0
lea eax, [ebp-132]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+12]
call fb_StrAssign
add esp, 20
mov dword ptr [ebp-60], -1
.Lt_0514:
.Lt_0513:
jmp .Lt_0511
.Lt_0512:
push dword ptr [ebp-44]
call fb_FileClose
add esp, 4
test eax, eax
je .Lt_051C
push 0
push 0
push offset Lt_0093
push 2650
call fb_ErrorThrowAt
add esp, 16
jmp eax
.Lt_051C:
cmp dword ptr [ebp-60], 0
jne .Lt_051E
lea eax, [ebp-56]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0504
.Lt_051E:
.Lt_051D:
push 0
push -1
push 5
push offset Lt_051F
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
push 0
push -1
push 4
push offset Lt_0521
push -1
push dword ptr [ebp+12]
mov dword ptr [ebp-84], 0
mov dword ptr [ebp-80], 0
mov dword ptr [ebp-76], 0
lea eax, [ebp-84]
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
push 67
push offset Lt_0523
push -1
push dword ptr [ebp+12]
mov dword ptr [ebp-96], 0
mov dword ptr [ebp-92], 0
mov dword ptr [ebp-88], 0
lea eax, [ebp-96]
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
push 74
push offset Lt_0527
push -1
push dword ptr [ebp+12]
mov dword ptr [ebp-108], 0
mov dword ptr [ebp-104], 0
mov dword ptr [ebp-100], 0
lea eax, [ebp-108]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+12]
call fb_StrAssign
add esp, 20
mov dword ptr [ebp-4], -1
lea eax, [ebp-56]
push eax
call fb_StrDelete
add esp, 4
.Lt_0504:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HPARSEXPM, .-HPARSEXPM
.balign 16
HCOMPILEXPM:
.type HCOMPILEXPM, @function
push ebp
mov ebp, esp
sub esp, 60
mov dword ptr [ebp-4], 0
.Lt_0529:
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
push -1
lea eax, [FBC+136]
push eax
call fb_StrLen
add esp, 8
test eax, eax
jne .Lt_052C
mov dword ptr [ebp-4], -1
lea eax, [ebp-28]
push eax
call fb_StrDelete
add esp, 4
lea eax, [ebp-16]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_052A
.Lt_052C:
.Lt_052B:
push 0
push -1
lea eax, [FBC+136]
push eax
push -1
lea eax, [ebp-16]
push eax
call fb_StrAssign
add esp, 20
push -1
push dword ptr [FBC+148]
call fb_StrLen
add esp, 8
test eax, eax
jle .Lt_052E
push 0
push -1
push dword ptr [FBC+148]
call HSTRIPEXT
add esp, 4
push eax
push -1
lea eax, [FBC+136]
push eax
call fb_StrAssign
add esp, 20
.Lt_052E:
.Lt_052D:
push 0
push 5
push offset Lt_052F
push -1
lea eax, [FBC+136]
push eax
call fb_StrConcatAssign
add esp, 20
cmp dword ptr [FBC+56], 0
je .Lt_0531
push 2
push 13
push offset Lt_0532
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
push -1
lea eax, [FBC+136]
push eax
push -1
push 5
push offset Lt_04DA
push -1
lea eax, [ebp-16]
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
push 0
call fb_PrintString
add esp, 12
.Lt_0531:
.Lt_0530:
lea eax, [ebp-28]
push eax
lea eax, [ebp-16]
push eax
call HPARSEXPM
add esp, 8
test eax, eax
jne .Lt_0536
lea eax, [ebp-28]
push eax
call fb_StrDelete
add esp, 4
lea eax, [ebp-16]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_052A
.Lt_0536:
.Lt_0535:
call fb_FileFree
mov dword ptr [ebp-32], eax
push 0
push dword ptr [ebp-32]
push 0
push 0
push 3
lea eax, [FBC+136]
push eax
call fb_FileOpen
add esp, 24
test eax, eax
je .Lt_0538
lea eax, [ebp-28]
push eax
call fb_StrDelete
add esp, 4
lea eax, [ebp-16]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_052A
.Lt_0538:
.Lt_0537:
mov eax, dword ptr [ebp-32]
mov dword ptr [ebp-36], eax
push 0
lea eax, [ebp-28]
push eax
push dword ptr [ebp-36]
call fb_PrintString
add esp, 12
push dword ptr [ebp-32]
call fb_FileClose
add esp, 4
test eax, eax
je .Lt_053A
push 0
push 0
push offset Lt_0093
push 2706
call fb_ErrorThrowAt
add esp, 16
jmp eax
.Lt_053A:
cmp dword ptr [FBC+40], 0
jne .Lt_053C
lea eax, [FBC+136]
push eax
call FBCADDTEMP
add esp, 4
.Lt_053C:
.Lt_053B:
push 0
push 0
lea eax, [FBC+136]
push eax
call HCOMPILEBAS
add esp, 12
mov dword ptr [ebp-4], -1
lea eax, [ebp-28]
push eax
call fb_StrDelete
add esp, 4
lea eax, [ebp-16]
push eax
call fb_StrDelete
add esp, 4
.Lt_052A:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size HCOMPILEXPM, .-HCOMPILEXPM
.balign 16
HCOMPILESTAGE2MODULE:
.type HCOMPILESTAGE2MODULE, @function
push ebp
mov ebp, esp
sub esp, 68
mov dword ptr [ebp-4], 0
.Lt_053D:
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
push 0
push -1
push 2
push dword ptr [ebp+8]
call HGETASMNAME
add esp, 8
push eax
push -1
lea eax, [ebp-28]
push eax
call fb_StrAssign
add esp, 20
cmp dword ptr [FBC+48], 0
jne .Lt_0540
lea eax, [ebp-28]
push eax
call FBCADDTEMP
add esp, 4
.Lt_0540:
.Lt_053F:
push 2
call FBGETOPTION
add esp, 4
mov dword ptr [ebp-32], eax
cmp dword ptr [ebp-32], 1
jne .Lt_0543
.Lt_0544:
call FBGETCPUFAMILY
mov dword ptr [ebp-36], eax
cmp dword ptr [ebp-36], 0
jne .Lt_0547
.Lt_0548:
push 0
push 6
push offset Lt_0549
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_0545
.Lt_0547:
cmp dword ptr [ebp-36], 1
jne .Lt_054A
.Lt_054B:
push 0
push 6
push offset Lt_054C
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_054A:
.Lt_0545:
cmp dword ptr [FBC+28], 0
je .Lt_054E
push 0
push 15
push offset Lt_054F
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_054D
.Lt_054E:
push 0
push -1
push -1
push 2
push offset Lt_00B8
push -1
push 0
call FBGETGCCARCH
push eax
push 8
push offset Lt_0550
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
lea eax, [ebp-16]
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
lea eax, [ebp-16]
push eax
call fb_StrAssign
add esp, 20
.Lt_054D:
push 26
call FBGETOPTION
add esp, 4
test eax, eax
je .Lt_0555
push 0
push 7
push offset Lt_0556
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_0555:
.Lt_0554:
push 0
push 119
push offset Lt_055B
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 11
push offset Lt_055C
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 39
push offset Lt_055D
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_055E
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push 8
call FBGETOPTION
add esp, 4
push eax
call fb_IntToStr
add esp, 4
push eax
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 2
push offset Lt_00B8
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 22
push offset Lt_055F
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 17
push offset Lt_0560
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 17
push offset Lt_0561
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 68
push offset Lt_0562
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
push 12
call FBGETOPTION
add esp, 4
test eax, eax
je .Lt_0564
push 0
push 4
push offset Lt_0565
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_0564:
.Lt_0563:
push 5
call FBGETOPTION
add esp, 4
cmp eax, 1
jne .Lt_0567
push 0
push 21
push offset Lt_0568
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_0567:
.Lt_0566:
push 9
call FBGETOPTION
add esp, 4
test eax, eax
jne .Lt_056A
push 0
push 13
push offset Lt_056B
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_056A:
.Lt_0569:
jmp .Lt_0541
.Lt_0543:
cmp dword ptr [ebp-32], 2
jne .Lt_056C
.Lt_056D:
call FBGETCPUFAMILY
mov dword ptr [ebp-36], eax
cmp dword ptr [ebp-36], 0
jne .Lt_0570
.Lt_0571:
push 0
push 12
push offset Lt_0572
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_056E
.Lt_0570:
cmp dword ptr [ebp-36], 1
jne .Lt_0573
.Lt_0574:
push 0
push 15
push offset Lt_0575
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_056E
.Lt_0573:
cmp dword ptr [ebp-36], 2
jne .Lt_0576
.Lt_0577:
push 0
push 12
push offset Lt_0578
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_056E
.Lt_0576:
cmp dword ptr [ebp-36], 3
jne .Lt_0579
.Lt_057A:
push 0
push 16
push offset Lt_057B
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_0579:
.Lt_056E:
push 26
call FBGETOPTION
add esp, 4
test eax, eax
je .Lt_057D
push 0
push 23
push offset Lt_057E
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_057D:
.Lt_057C:
push 0
push 3
push offset Lt_055E
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push 8
call FBGETOPTION
add esp, 4
push eax
call fb_IntToStr
add esp, 4
push eax
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 2
push offset Lt_00B8
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
call FBGETCPUFAMILY
mov dword ptr [ebp-36], eax
cmp dword ptr [ebp-36], 0
je .Lt_0582
.Lt_0583:
cmp dword ptr [ebp-36], 1
jne .Lt_0581
.Lt_0582:
push 9
call FBGETOPTION
add esp, 4
test eax, eax
jne .Lt_0585
push 0
push 24
push offset Lt_0586
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_0585:
.Lt_0584:
.Lt_0581:
.Lt_057F:
.Lt_056C:
.Lt_0541:
push 0
push 2
push offset Lt_00E7
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push 1
push dword ptr [ebp+8]
call HGETASMNAME
add esp, 8
push eax
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_0587
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 5
push offset Lt_0588
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
push 0
push 2
push offset Lt_00E7
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 128
lea eax, [FBC+1602]
push eax
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
push 2
call FBGETOPTION
add esp, 4
mov dword ptr [ebp-32], eax
cmp dword ptr [ebp-32], 1
jne .Lt_058B
.Lt_058C:
lea eax, [ebp-16]
push eax
push 3
push offset Lt_058D
call FBCRUNBIN
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_0589
.Lt_058B:
cmp dword ptr [ebp-32], 2
jne .Lt_058E
.Lt_058F:
lea eax, [ebp-16]
push eax
push 4
push offset Lt_0590
call FBCRUNBIN
add esp, 12
mov dword ptr [ebp-4], eax
.Lt_058E:
.Lt_0589:
lea eax, [ebp-28]
push eax
call fb_StrDelete
add esp, 4
lea eax, [ebp-16]
push eax
call fb_StrDelete
add esp, 4
.Lt_053E:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size HCOMPILESTAGE2MODULE, .-HCOMPILESTAGE2MODULE
.balign 16
HCOMPILESTAGE2MODULES:
.type HCOMPILESTAGE2MODULES, @function
push ebp
mov ebp, esp
sub esp, 4
.Lt_0591:
lea eax, [FBC+72]
push eax
call LISTGETHEAD
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_0593:
cmp dword ptr [ebp-4], 0
je .Lt_0594
push dword ptr [ebp-4]
call HCOMPILESTAGE2MODULE
add esp, 4
test eax, eax
jne .Lt_0596
push 1
call FBCEND
add esp, 4
.Lt_0596:
.Lt_0595:
push dword ptr [ebp-4]
call LISTGETNEXT
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_0593
.Lt_0594:
.Lt_0592:
mov esp, ebp
pop ebp
ret
.size HCOMPILESTAGE2MODULES, .-HCOMPILESTAGE2MODULES
.balign 16
HASSEMBLEMODULE:
.type HASSEMBLEMODULE, @function
push ebp
mov ebp, esp
sub esp, 56
mov dword ptr [ebp-4], 0
.Lt_0597:
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
call FBGETCPUFAMILY
mov dword ptr [ebp-56], eax
cmp dword ptr [ebp-56], 0
jne .Lt_059B
.Lt_059C:
push 0
push 6
push offset Lt_059D
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_0599
.Lt_059B:
cmp dword ptr [ebp-56], 1
jne .Lt_059E
.Lt_059F:
push 0
push 6
push offset Lt_05A0
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_059E:
.Lt_0599:
push 12
call FBGETOPTION
add esp, 4
test eax, eax
jne .Lt_05A2
push 0
push 24
push offset Lt_05A3
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_05A2:
.Lt_05A1:
push 0
push 2
push offset Lt_00E7
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push 2
push dword ptr [ebp+8]
call HGETASMNAME
add esp, 8
push eax
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_0587
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push -1
push 2
push offset Lt_00E7
push -1
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+12]
push 5
push offset Lt_0588
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
push 0
push 128
lea eax, [FBC+1346]
push eax
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
lea eax, [ebp-16]
push eax
push 0
push offset Lt_05A7
call FBCRUNBIN
add esp, 12
test eax, eax
jne .Lt_05A9
lea eax, [ebp-16]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0598
.Lt_05A9:
.Lt_05A8:
cmp dword ptr [FBC+52], 0
jne .Lt_05AB
mov eax, dword ptr [ebp+8]
push dword ptr [eax+12]
call FBCADDTEMP
add esp, 4
.Lt_05AB:
.Lt_05AA:
mov dword ptr [ebp-4], -1
lea eax, [ebp-16]
push eax
call fb_StrDelete
add esp, 4
.Lt_0598:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size HASSEMBLEMODULE, .-HASSEMBLEMODULE
.balign 16
HASSEMBLEMODULES:
.type HASSEMBLEMODULES, @function
push ebp
mov ebp, esp
sub esp, 4
.Lt_05AC:
lea eax, [FBC+72]
push eax
call LISTGETHEAD
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_05AE:
cmp dword ptr [ebp-4], 0
je .Lt_05AF
push dword ptr [ebp-4]
call HASSEMBLEMODULE
add esp, 4
test eax, eax
jne .Lt_05B1
push 1
call FBCEND
add esp, 4
.Lt_05B1:
.Lt_05B0:
push dword ptr [ebp-4]
call LISTGETNEXT
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_05AE
.Lt_05AF:
.Lt_05AD:
mov esp, ebp
pop ebp
ret
.size HASSEMBLEMODULES, .-HASSEMBLEMODULES
.balign 16
HASSEMBLERC:
.type HASSEMBLERC, @function
push ebp
mov ebp, esp
sub esp, 88
push ebx
mov dword ptr [ebp-4], 0
.Lt_05B2:
push 0
push 22
push offset Lt_05B4
push -1
lea eax, [ebp-16]
push eax
call fb_StrInit
add esp, 20
push 0
push -1
push -1
push 2
push offset Lt_00E7
push -1
push -1
mov eax, dword ptr [ebp+8]
lea ebx, [eax]
push ebx
push 3
push offset Lt_00FC
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
lea ebx, [ebp-28]
push ebx
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
push 0
push -1
push -1
push 2
push offset Lt_00E7
push -1
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+12]
push 3
push offset Lt_00FC
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
lea eax, [ebp-16]
push eax
mov dword ptr [ebp-88], 0
mov dword ptr [ebp-84], 0
mov dword ptr [ebp-80], 0
lea eax, [ebp-88]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-16]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-16]
push eax
push 7
push offset Lt_05BB
call FBCRUNBIN
add esp, 12
mov dword ptr [ebp-4], eax
cmp dword ptr [FBC+52], 0
jne .Lt_05BD
mov eax, dword ptr [ebp+8]
push dword ptr [eax+12]
call FBCADDTEMP
add esp, 4
.Lt_05BD:
.Lt_05BC:
lea eax, [ebp-16]
push eax
call fb_StrDelete
add esp, 4
.Lt_05B3:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HASSEMBLERC, .-HASSEMBLERC
.balign 16
HASSEMBLERCS:
.type HASSEMBLERCS, @function
push ebp
mov ebp, esp
sub esp, 4
.Lt_05BE:
lea eax, [FBC+104]
push eax
call LISTGETHEAD
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_05C0:
cmp dword ptr [ebp-4], 0
je .Lt_05C1
push dword ptr [ebp-4]
call HASSEMBLERC
add esp, 4
test eax, eax
jne .Lt_05C3
push 1
call FBCEND
add esp, 4
.Lt_05C3:
.Lt_05C2:
push dword ptr [ebp-4]
call LISTGETNEXT
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_05C0
.Lt_05C1:
.Lt_05BF:
mov esp, ebp
pop ebp
ret
.size HASSEMBLERCS, .-HASSEMBLERCS
.balign 16
HASSEMBLEXPM:
.type HASSEMBLEXPM, @function
.Lt_05C4:
push -1
lea eax, [FBC+136]
push eax
call fb_StrLen
add esp, 8
test eax, eax
jle .Lt_05C7
push 2
call FBGETOPTION
add esp, 4
test eax, eax
je .Lt_05C9
lea eax, [FBC+136]
push eax
call HCOMPILESTAGE2MODULE
add esp, 4
.Lt_05C9:
.Lt_05C8:
lea eax, [FBC+136]
push eax
call HASSEMBLEMODULE
add esp, 4
test eax, eax
jne .Lt_05CB
push 1
call FBCEND
add esp, 4
.Lt_05CB:
.Lt_05CA:
.Lt_05C7:
.Lt_05C6:
.Lt_05C5:
ret
.size HASSEMBLEXPM, .-HASSEMBLEXPM
.balign 16
HCOMPILEFBCTINF:
.type HCOMPILEFBCTINF, @function
push ebp
mov ebp, esp
sub esp, 40
mov dword ptr [ebp-4], 0
.Lt_05CC:
lea eax, [ebp-24]
push eax
call _ZN9FBCIOFILEC1Ev
add esp, 4
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 0
push 16
push offset Lt_001D
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
push 0
push 12
push offset Lt_001C
push -1
lea eax, [ebp-36]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-36]
mov dword ptr [ebp-12], eax
cmp dword ptr [FBC+56], 0
je .Lt_05CF
push 2
push 10
push offset Lt_05D0
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
lea eax, [ebp-24]
push eax
push 0
call fb_PrintString
add esp, 12
.Lt_05CF:
.Lt_05CE:
call fb_FileFree
mov dword ptr [ebp-40], eax
push 0
push dword ptr [ebp-40]
push 0
push 0
push 3
lea eax, [ebp-24]
push eax
call fb_FileOpen
add esp, 24
test eax, eax
je .Lt_05D2
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
lea eax, [ebp-24]
push eax
call _ZN9FBCIOFILED1Ev
add esp, 4
jmp .Lt_05CD
.Lt_05D2:
.Lt_05D1:
push dword ptr [ebp-40]
call fb_FileClose
add esp, 4
test eax, eax
je .Lt_05D3
push 0
push 0
push offset Lt_0093
push 2986
call fb_ErrorThrowAt
add esp, 16
jmp eax
.Lt_05D3:
cmp dword ptr [FBC+40], 0
jne .Lt_05D5
lea eax, [ebp-24]
push eax
call FBCADDTEMP
add esp, 4
.Lt_05D5:
.Lt_05D4:
push -1
push 0
lea eax, [ebp-24]
push eax
call HCOMPILEBAS
add esp, 12
push 2
call FBGETOPTION
add esp, 4
test eax, eax
je .Lt_05D7
lea eax, [ebp-24]
push eax
call HCOMPILESTAGE2MODULE
add esp, 4
.Lt_05D7:
.Lt_05D6:
lea eax, [ebp-24]
push eax
call HASSEMBLEMODULE
add esp, 4
mov dword ptr [ebp-4], eax
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
lea eax, [ebp-24]
push eax
call _ZN9FBCIOFILED1Ev
add esp, 4
.Lt_05CD:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size HCOMPILEFBCTINF, .-HCOMPILEFBCTINF
.balign 16
HARCHIVEFILES:
.type HARCHIVEFILES, @function
push ebp
mov ebp, esp
sub esp, 80
mov dword ptr [ebp-4], 0
.Lt_05D8:
call HSETOUTNAME
lea eax, [FBC+428]
push eax
call fb_StrAllocTempDescZ
add esp, 4
push eax
call fb_FileKill
add esp, 4
test eax, eax
je .Lt_05DB
.Lt_05DB:
.Lt_05DA:
push 0
push -1
push 3
push offset Lt_01ED
push -1
push 261
lea eax, [FBC+428]
push eax
push 7
push offset Lt_05DD
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
lea eax, [ebp-16]
push eax
call fb_StrInit
add esp, 20
call FBISCROSSCOMP
test eax, eax
jne .Lt_05E1
call HCOMPILEFBCTINF
test eax, eax
je .Lt_05E3
push 0
push 15
push offset Lt_05E6
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_05E3:
.Lt_05E2:
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
push 0
push 12
push offset Lt_001C
push -1
lea eax, [ebp-56]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-56]
push eax
call FBCADDTEMP
add esp, 4
lea eax, [ebp-56]
push eax
call fb_StrDelete
add esp, 4
.Lt_05E1:
.Lt_05E0:
lea eax, [FBC+188]
push eax
call LISTGETHEAD
add esp, 4
mov dword ptr [ebp-44], eax
.Lt_05E8:
cmp dword ptr [ebp-44], 0
je .Lt_05E9
push 0
push -1
push -1
push 3
push offset Lt_0587
push -1
push -1
push dword ptr [ebp-44]
push 2
push offset Lt_00E7
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
lea eax, [ebp-16]
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
lea eax, [ebp-16]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-44]
call LISTGETNEXT
add esp, 4
mov dword ptr [ebp-44], eax
jmp .Lt_05E8
.Lt_05E9:
lea eax, [ebp-16]
push eax
push 1
push offset Lt_05ED
call FBCRUNBIN
add esp, 12
mov dword ptr [ebp-4], eax
lea eax, [ebp-16]
push eax
call fb_StrDelete
add esp, 4
.Lt_05D9:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size HARCHIVEFILES, .-HARCHIVEFILES
.balign 16
HSETDEFAULTLIBPATHS:
.type HSETDEFAULTLIBPATHS, @function
push ebp
mov ebp, esp
sub esp, 28
.Lt_05EE:
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
push 0
push 261
lea eax, [FBC+2911]
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-12]
push eax
call FBCADDDEFLIBPATH
add esp, 4
lea eax, [ebp-12]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
push 0
push 2
push offset Lt_0009
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-24]
push eax
call FBCADDDEFLIBPATH
add esp, 4
lea eax, [ebp-24]
push eax
call fb_StrDelete
add esp, 4
push offset Lt_05F2
call FBCADDLIBPATHFOR
add esp, 4
push 3
call FBGETOPTION
add esp, 4
mov dword ptr [ebp-28], eax
cmp dword ptr [ebp-28], 3
jne .Lt_05F5
.Lt_05F6:
push offset Lt_05F7
call FBCADDLIBPATHFOR
add esp, 4
jmp .Lt_05F3
.Lt_05F5:
cmp dword ptr [ebp-28], 0
jne .Lt_05F8
.Lt_05F9:
push offset Lt_05FA
call FBCADDLIBPATHFOR
add esp, 4
.Lt_05F8:
.Lt_05F3:
.Lt_05EF:
mov esp, ebp
pop ebp
ret
.size HSETDEFAULTLIBPATHS, .-HSETDEFAULTLIBPATHS
.balign 16
FBCADDDEFLIB:
.type FBCADDDEFLIB, @function
push ebp
mov ebp, esp
sub esp, 12
.Lt_05FB:
push -1
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
push 0
push 0
push dword ptr [ebp+8]
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-12]
push eax
lea eax, [FBC+340]
push eax
call STRSETADD
add esp, 12
lea eax, [ebp-12]
push eax
call fb_StrDelete
add esp, 4
.Lt_05FC:
mov esp, ebp
pop ebp
ret
.size FBCADDDEFLIB, .-FBCADDDEFLIB
.balign 16
HGETFBLIBNAMESUFFIX:
.type HGETFBLIBNAMESUFFIX, @function
push ebp
mov ebp, esp
sub esp, 24
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_05FE:
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
push 24
call FBGETOPTION
add esp, 4
test eax, eax
je .Lt_0601
push 0
push 3
push offset Lt_039B
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_0601:
.Lt_0600:
push 26
call FBGETOPTION
add esp, 4
test eax, eax
je .Lt_0603
push 0
push 4
push offset Lt_03B2
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_0603:
.Lt_0602:
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
.Lt_05FF:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
mov esp, ebp
pop ebp
ret
.size HGETFBLIBNAMESUFFIX, .-HGETFBLIBNAMESUFFIX
.balign 16
HADDDEFAULTLIBS:
.type HADDDEFAULTLIBS, @function
push ebp
mov ebp, esp
sub esp, 64
push ebx
.Lt_0604:
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
push 0
push -1
push -1
call HGETFBLIBNAMESUFFIX
push eax
push 3
push offset Lt_001F
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
call FBCADDDEFLIB
add esp, 4
lea eax, [ebp-24]
push eax
call fb_StrDelete
add esp, 4
push 25
call FBGETOPTION
add esp, 4
test eax, eax
je .Lt_0609
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
push 0
push -1
push -1
call HGETFBLIBNAMESUFFIX
push eax
push 6
push offset Lt_060A
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
push dword ptr [ebp-48]
call FBCADDDEFLIB
add esp, 4
lea eax, [ebp-48]
push eax
call fb_StrDelete
add esp, 4
push 3
call FBGETOPTION
add esp, 4
mov dword ptr [ebp-52], eax
jmp .Lt_060E
.Lt_0610:
push offset Lt_0611
call FBCADDDEFLIB
add esp, 4
push offset Lt_0612
call FBCADDDEFLIB
add esp, 4
jmp .Lt_060D
.Lt_0613:
mov dword ptr [ebp-64], 0
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
push 0
push 15
push offset Lt_0614
push -1
lea eax, [ebp-64]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-64]
push eax
call FBCADDDEFLIBPATH
add esp, 4
lea eax, [ebp-64]
push eax
call fb_StrDelete
add esp, 4
push offset Lt_0616
call FBCADDDEFLIB
add esp, 4
push offset Lt_0617
call FBCADDDEFLIB
add esp, 4
push offset Lt_0618
call FBCADDDEFLIB
add esp, 4
push offset Lt_0619
call FBCADDDEFLIB
add esp, 4
push offset Lt_061A
call FBCADDDEFLIB
add esp, 4
jmp .Lt_060D
.Lt_060E:
cmp dword ptr [ebp-52], 8
ja .Lt_060D
mov eax, dword ptr [ebp-52]
jmp dword ptr [.LT_061B+eax*4]
.LT_061B:
.int .Lt_0610
.int .Lt_0610
.int .Lt_0613
.int .Lt_060D
.int .Lt_060D
.int .Lt_0613
.int .Lt_0613
.int .Lt_060D
.int .Lt_0613
.Lt_060D:
.Lt_0609:
.Lt_0608:
push 3
call FBGETOPTION
add esp, 4
mov dword ptr [ebp-28], eax
jmp .Lt_061D
.Lt_061F:
push offset Lt_0037
call FBCADDDEFLIB
add esp, 4
push offset Lt_0242
call FBCADDDEFLIB
add esp, 4
push offset Lt_0620
call FBCADDDEFLIB
add esp, 4
push offset Lt_0621
call FBCADDDEFLIB
add esp, 4
push 16
call FBGETOPTION
add esp, 4
test eax, eax
je .Lt_0623
push offset Lt_0624
call FBCADDDEFLIB
add esp, 4
.Lt_0623:
.Lt_0622:
jmp .Lt_061C
.Lt_0625:
push offset Lt_0037
call FBCADDDEFLIB
add esp, 4
push offset Lt_0626
call FBCADDDEFLIB
add esp, 4
jmp .Lt_061C
.Lt_0627:
push offset Lt_0037
call FBCADDDEFLIB
add esp, 4
push offset Lt_034C
call FBCADDDEFLIB
add esp, 4
push offset Lt_0392
call FBCADDDEFLIB
add esp, 4
jmp .Lt_061C
.Lt_0628:
push offset Lt_0037
call FBCADDDEFLIB
add esp, 4
push offset Lt_0629
call FBCADDDEFLIB
add esp, 4
push offset Lt_034C
call FBCADDDEFLIB
add esp, 4
push offset Lt_0392
call FBCADDDEFLIB
add esp, 4
push offset Lt_062A
call FBCADDDEFLIB
add esp, 4
jmp .Lt_061C
.Lt_062B:
push -1
push offset Lt_062C
call FBCFINDLIBFILE
add esp, 4
push eax
call fb_StrLen
add esp, 8
test eax, eax
setg al
shr eax, 1
sbb eax, eax
push -1
push offset Lt_062D
mov ebx, eax
call FBCFINDLIBFILE
add esp, 4
push eax
call fb_StrLen
add esp, 8
test eax, eax
setg al
shr eax, 1
sbb eax, eax
or ebx, eax
je .Lt_062F
push offset Lt_0630
call FBCADDDEFLIB
add esp, 4
jmp .Lt_062E
.Lt_062F:
push offset Lt_062A
call FBCADDDEFLIB
add esp, 4
.Lt_062E:
push offset Lt_0392
call FBCADDDEFLIB
add esp, 4
push offset Lt_0631
call FBCADDDEFLIB
add esp, 4
push offset Lt_0629
call FBCADDDEFLIB
add esp, 4
push offset Lt_0037
call FBCADDDEFLIB
add esp, 4
push -1
push offset Lt_0632
call FBCFINDLIBFILE
add esp, 4
push eax
call fb_StrLen
add esp, 8
test eax, eax
setg al
shr eax, 1
sbb eax, eax
push -1
push offset Lt_0633
mov ebx, eax
call FBCFINDLIBFILE
add esp, 4
push eax
call fb_StrLen
add esp, 8
test eax, eax
setg al
shr eax, 1
sbb eax, eax
or ebx, eax
je .Lt_0635
push offset Lt_0636
call FBCADDDEFLIB
add esp, 4
.Lt_0635:
.Lt_0634:
push offset Lt_034C
call FBCADDDEFLIB
add esp, 4
jmp .Lt_061C
.Lt_0637:
jmp .Lt_061C
.Lt_0638:
push offset Lt_0037
call FBCADDDEFLIB
add esp, 4
push offset Lt_0629
call FBCADDDEFLIB
add esp, 4
push offset Lt_034C
call FBCADDDEFLIB
add esp, 4
push offset Lt_0392
call FBCADDDEFLIB
add esp, 4
push offset Lt_062A
call FBCADDDEFLIB
add esp, 4
jmp .Lt_061C
.Lt_0639:
push offset Lt_0037
call FBCADDDEFLIB
add esp, 4
push offset Lt_063A
call FBCADDDEFLIB
add esp, 4
push offset Lt_0620
call FBCADDDEFLIB
add esp, 4
push offset Lt_0621
call FBCADDDEFLIB
add esp, 4
push offset Lt_063B
call FBCADDDEFLIB
add esp, 4
push offset Lt_063C
call FBCADDDEFLIB
add esp, 4
push offset Lt_063D
call FBCADDDEFLIB
add esp, 4
push -1
push offset Lt_0632
call FBCFINDLIBFILE
add esp, 4
push eax
call fb_StrLen
add esp, 8
test eax, eax
setg al
shr eax, 1
sbb eax, eax
push -1
push offset Lt_063E
mov ebx, eax
call FBCFINDLIBFILE
add esp, 4
push eax
call fb_StrLen
add esp, 8
test eax, eax
setg al
shr eax, 1
sbb eax, eax
or ebx, eax
je .Lt_0640
push offset Lt_0636
call FBCADDDEFLIB
add esp, 4
.Lt_0640:
.Lt_063F:
push 16
call FBGETOPTION
add esp, 4
test eax, eax
je .Lt_0642
push offset Lt_0624
call FBCADDDEFLIB
add esp, 4
.Lt_0642:
.Lt_0641:
jmp .Lt_061C
.Lt_0643:
push offset Lt_0037
call FBCADDDEFLIB
add esp, 4
push offset Lt_060A
call FBCADDDEFLIB
add esp, 4
push offset Lt_0644
call FBCADDDEFLIB
add esp, 4
push offset Lt_0645
call FBCADDDEFLIB
add esp, 4
push offset Lt_034C
call FBCADDDEFLIB
add esp, 4
push offset Lt_0646
call FBCADDDEFLIB
add esp, 4
push offset Lt_0647
call FBCADDDEFLIB
add esp, 4
push offset Lt_0392
call FBCADDDEFLIB
add esp, 4
push 16
call FBGETOPTION
add esp, 4
test eax, eax
je .Lt_0649
push offset Lt_0624
call FBCADDDEFLIB
add esp, 4
.Lt_0649:
.Lt_0648:
jmp .Lt_061C
.Lt_061D:
cmp dword ptr [ebp-28], 8
ja .Lt_061C
mov eax, dword ptr [ebp-28]
jmp dword ptr [.LT_064A+eax*4]
.LT_064A:
.int .Lt_0639
.int .Lt_061F
.int .Lt_062B
.int .Lt_0627
.int .Lt_0643
.int .Lt_0628
.int .Lt_0638
.int .Lt_0625
.int .Lt_0637
.Lt_061C:
.Lt_0605:
pop ebx
mov esp, ebp
pop ebp
ret
.size HADDDEFAULTLIBS, .-HADDDEFAULTLIBS
.balign 16
HPRINTOPTIONS:
.type HPRINTOPTIONS, @function
.Lt_064B:
push 1
push 34
push offset Lt_064D
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
push 12
push offset Lt_064E
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
push 57
push offset Lt_064F
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
push 59
push offset Lt_0650
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
push 35
push offset Lt_0651
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
push 8
push offset Lt_0652
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
push 63
push offset Lt_0653
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
push 49
push offset Lt_0654
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
push 57
push offset Lt_0655
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
push 44
push offset Lt_0656
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
push 48
push offset Lt_0657
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
push 44
push offset Lt_0658
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
push 46
push offset Lt_0659
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
push 41
push offset Lt_065A
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
push 33
push offset Lt_065B
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
push 69
push offset Lt_065C
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
push 48
push offset Lt_065D
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
push 41
push offset Lt_065E
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
push 62
push offset Lt_065F
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
push 53
push offset Lt_0660
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
push 61
push offset Lt_0661
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
push 65
push offset Lt_0662
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
push 33
push offset Lt_0663
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
push 33
push offset Lt_0664
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
push 51
push offset Lt_0665
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
push 40
push offset Lt_0666
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
push 50
push offset Lt_0667
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
push 58
push offset Lt_0668
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
push 36
push offset Lt_0669
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
push 60
push offset Lt_066A
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
push 42
push offset Lt_066B
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
push 76
push offset Lt_066C
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
push 43
push offset Lt_066D
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
push 39
push offset Lt_066E
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
push 45
push offset Lt_066F
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
push 55
push offset Lt_0670
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
push 63
push offset Lt_0671
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
push 74
push offset Lt_0672
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
push 50
push offset Lt_0673
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
push 44
push offset Lt_0674
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
push 79
push offset Lt_0675
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
push 67
push offset Lt_0676
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
push 47
push offset Lt_0677
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
push 53
push offset Lt_0678
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
push 69
push offset Lt_0679
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
push 44
push offset Lt_067A
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
push 66
push offset Lt_067B
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
push 48
push offset Lt_067C
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
push 54
push offset Lt_067D
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
push 47
push offset Lt_067E
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
push 41
push offset Lt_067F
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
push 73
push offset Lt_0680
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
push 75
push offset Lt_0681
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
push 47
push offset Lt_0682
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
push 47
push offset Lt_0683
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
push 29
push offset Lt_0684
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
push 61
push offset Lt_0685
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
push 40
push offset Lt_0686
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
push 70
push offset Lt_0687
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
push 63
push offset Lt_0688
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
push 72
push offset Lt_0689
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
push 39
push offset Lt_068A
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
push 58
push offset Lt_068B
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push 1
push 56
push offset Lt_068C
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
.Lt_064C:
ret
.size HPRINTOPTIONS, .-HPRINTOPTIONS
.balign 16
HPRINTVERSION:
.type HPRINTVERSION, @function
push ebp
mov ebp, esp
sub esp, 60
.Lt_0693:
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
push 1
push 5
push offset Lt_069B
push -1
push -1
call FBGETHOSTBITS
push eax
call fb_IntToStr
add esp, 4
push eax
push -1
push 3
push offset Lt_04B3
push -1
push -1
call FBGETHOSTID
push eax
push 61
push offset Lt_069A
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
push 0
call fb_PrintString
add esp, 12
push 1
push 55
push offset Lt_06A0
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push 0
call fb_PrintString
add esp, 12
push -1
lea eax, [ebp-12]
push eax
call fb_StrLen
add esp, 8
test eax, eax
jle .Lt_06A2
push 1
lea eax, [ebp-12]
push eax
push 0
call fb_PrintString
add esp, 12
.Lt_06A2:
.Lt_06A1:
lea eax, [ebp-12]
push eax
call fb_StrDelete
add esp, 4
.Lt_0694:
mov esp, ebp
pop ebp
ret
.size HPRINTVERSION, .-HPRINTVERSION
.balign 16
_GLOBAL__I:
.type _GLOBAL__I, @function
.Lt_06C8:
push offset FBC
call _ZN6FBCCTXC1Ev
add esp, 4
.Lt_06C9:
ret
.size _GLOBAL__I, .-_GLOBAL__I
.balign 16
_GLOBAL__D:
.type _GLOBAL__D, @function
.Lt_06CB:
push offset FBC
call _ZN6FBCCTXD1Ev
add esp, 4
.Lt_06CC:
ret
.size _GLOBAL__D, .-_GLOBAL__D
	#fbc-1.01.0/src/compiler/fbc.bas' compilation took 0.1172659692820162 secs

.section .rodata
.balign 4
Lt_0000:	.ascii	"\0"
.balign 4
Lt_0005:	.ascii	"This program requires at least a 486 to run.\0"
.balign 4
Lt_0006:	.ascii	"1\0"
.balign 4
Lt_0008:	.ascii	"0\0"
.balign 4
Lt_0009:	.ascii	".\0"
.balign 4
Lt_001A:	.ascii	"/\0"
.balign 4
Lt_001C:	.ascii	"__fb_ct.inf\0"
.balign 4
Lt_001D:	.ascii	"__fb_ct.inf.bas\0"
.balign 4
Lt_001F:	.ascii	"fb\0"

.section .data
.balign 4
TOOLNAMES:
.ascii "as\0"
.skip 5,0
.ascii "ar\0"
.skip 5,0
.ascii "ld\0"
.skip 5,0
.ascii "gcc\0"
.skip 4,0
.ascii "llc\0"
.skip 4,0
.ascii "dlltool\0"
.ascii "GoRC\0"
.skip 3,0
.ascii "windres\0"
.ascii "cxbe\0"
.skip 3,0

.section .rodata
.balign 4
Lt_0037:	.ascii	"gcc\0"

.section .bss
.balign 4
	.lcomm	FBC,3180

.section .rodata
.balign 4
Lt_0045:	.ascii	"lib\0"
.balign 4
Lt_0046:	.ascii	".a\0"
.balign 4
Lt_0055:	.ascii	".exe\0"
.balign 4
Lt_005E:	.ascii	".dll\0"
.balign 4
Lt_0066:	.ascii	".so\0"
.balign 4
Lt_0089:	.ascii	" -m32\0"
.balign 4
Lt_008C:	.ascii	" -m64\0"
.balign 4
Lt_008D:	.ascii	" -print-file-name=\0"
.balign 4
Lt_0093:	.ascii	"fbc-1.01.0/src/compiler/fbc.bas\0"
.balign 4
Lt_00B6:	.ascii	": \0"
.balign 4
Lt_00B8:	.ascii	" \0"
.balign 4
Lt_00C0:	.ascii	" failed: '\0"
.balign 4
Lt_00C1:	.ascii	"' terminated with exit code \0"
.balign 4
Lt_00CA:	.ascii	".clean.def\0"
.balign 4
Lt_00D1:	.ascii	"DATA\0"
.balign 4
Lt_00DC:	.ascii	"EXPORTS\0"
.balign 4
Lt_00E6:	.ascii	"--def \"\0"
.balign 4
Lt_00E7:	.ascii	"\"\0"
.balign 4
Lt_00EB:	.ascii	" --dllname \"\0"
.balign 4
Lt_00EC:	.ascii	" --output-lib \"\0"
.balign 4
Lt_00ED:	.ascii	".dll.a\"\0"
.balign 4
Lt_00F3:	.ascii	"creating import library\0"
.balign 4
Lt_00FC:	.ascii	" \"\0"
.balign 4
Lt_0107:	.ascii	"-m i386pe \0"
.balign 4
Lt_010A:	.ascii	"-m i386pep \0"
.balign 4
Lt_0111:	.ascii	"-m elf_i386 \0"
.balign 4
Lt_0114:	.ascii	"-m elf_x86_64 \0"
.balign 4
Lt_0117:	.ascii	"-m armelf_linux_eabi \0"
.balign 4
Lt_0118:	.ascii	"-o \0"
.balign 4
Lt_0119:	.ascii	"\"\0"
.balign 4
Lt_011A:	.ascii	"-o \"\0"
.balign 4
Lt_0121:	.ascii	"console\0"
.balign 4
Lt_0122:	.ascii	"gui\0"
.balign 4
Lt_0125:	.ascii	"windows\0"
.balign 4
Lt_0126:	.ascii	" -subsystem \0"
.balign 4
Lt_012B:	.ascii	" --dll --enable-stdcall-fixup\0"
.balign 4
Lt_012E:	.ascii	" -e _DllMainCRTStartup@12\0"
.balign 4
Lt_012F:	.ascii	" -e DllMainCRTStartup\0"
.balign 4
Lt_0135:	.ascii	" -shared -h\0"
.balign 4
Lt_013C:	.ascii	" -dynamic-linker /libexec/ld-elf.so.1\0"
.balign 4
Lt_0142:	.ascii	" -dynamic-linker /lib/ld-linux.so.2\0"
.balign 4
Lt_0145:	.ascii	" -dynamic-linker /lib64/ld-linux-x86-64.so.2\0"
.balign 4
Lt_0148:	.ascii	" -dynamic-linker /lib/ld-linux-armhf.so.3\0"
.balign 4
Lt_014B:	.ascii	" -dynamic-linker /lib/ld-linux-aarch64.so.1\0"
.balign 4
Lt_014D:	.ascii	" -dynamic-linker /usr/libexec/ld.elf_so\0"
.balign 4
Lt_014F:	.ascii	" -dynamic-linker /usr/libexec/ld.so\0"
.balign 4
Lt_0153:	.ascii	" --export-dynamic\0"
.balign 4
Lt_0155:	.ascii	" -nostdlib --file-alignment 0x20 --section-alignment 0x20 -shared\0"
.balign 4
Lt_0159:	.ascii	" -T \"\0"
.balign 4
Lt_015B:	.ascii	"/i386go32.x\"\0"
.balign 4
Lt_015D:	.ascii	"/fbextra.x\"\0"
.balign 4
Lt_0162:	.ascii	" --stack \0"
.balign 4
Lt_0163:	.ascii	",\0"
.balign 4
Lt_0167:	.ascii	".def\0"
.balign 4
Lt_0168:	.ascii	" --output-def \"\0"
.balign 4
Lt_016A:	.ascii	" -e _WinMainCRTStartup\0"
.balign 4
Lt_016E:	.ascii	" -Bstatic\0"
.balign 4
Lt_0171:	.ascii	" -Map \0"
.balign 4
Lt_0176:	.ascii	" -s\0"
.balign 4
Lt_0179:	.ascii	" -L \"\0"
.balign 4
Lt_0183:	.ascii	"crt0.o\0"
.balign 4
Lt_0186:	.ascii	"gcrt0.o\0"
.balign 4
Lt_018A:	.ascii	"dllcrt2.o\0"
.balign 4
Lt_018B:	.ascii	"crt2.o\0"
.balign 4
Lt_018E:	.ascii	"gcrt2.o\0"
.balign 4
Lt_018F:	.ascii	"crtbegin.o\0"
.balign 4
Lt_019D:	.ascii	"gcrt1.o\0"
.balign 4
Lt_01A4:	.ascii	"crt1.o\0"
.balign 4
Lt_01A8:	.ascii	"crti.o\0"
.balign 4
Lt_01AB:	.ascii	"crtbeginS.o\0"
.balign 4
Lt_01B2:	.ascii	"fbrt0pic.o\0"
.balign 4
Lt_01B3:	.ascii	"fbrt0.o\0"
.balign 4
Lt_01B9:	.ascii	" \"-(\"\0"
.balign 4
Lt_01C5:	.ascii	" -l\0"
.balign 4
Lt_01C8:	.ascii	" \"-)\"\0"
.balign 4
Lt_01CF:	.ascii	"crtendS.o\0"
.balign 4
Lt_01D0:	.ascii	"crtend.o\0"
.balign 4
Lt_01D3:	.ascii	"crtn.o\0"
.balign 4
Lt_01D6:	.ascii	"linking\0"
.balign 4
Lt_01EC:	.ascii	"-TITLE:\"\0"
.balign 4
Lt_01ED:	.ascii	"\" \0"
.balign 4
Lt_01F1:	.ascii	"-DUMPINFO:\"\0"
.balign 4
Lt_01F4:	.ascii	".cxbe\"\0"
.balign 4
Lt_01F6:	.ascii	" -OUT:\"\0"
.balign 4
Lt_01F8:	.ascii	".xbe\0"
.balign 4
Lt_01F9:	.ascii	" \"\0"
.balign 4
Lt_01FC:	.ascii	" >nul\0"
.balign 4
Lt_01FF:	.ascii	"cxbe: \0"
.balign 4
Lt_0207:	.ascii	"cxbe failed: exit code \0"
.balign 4
Lt_023A:	.ascii	".o\0"

.section .data
.balign 4
GNUOSMAP:
.int Lt_023F
.int 2
.int Lt_0240
.int 0
.int Lt_0241
.int 3
.int Lt_0242
.int 1
.int Lt_0243
.int 7
.int Lt_0244
.int 5
.int Lt_0245
.int 8
.int Lt_0246
.int 6
.int Lt_0247
.int 4

.section .rodata
.balign 4
Lt_023F:	.ascii	"linux\0"
.balign 4
Lt_0240:	.ascii	"mingw\0"
.balign 4
Lt_0241:	.ascii	"djgpp\0"
.balign 4
Lt_0242:	.ascii	"cygwin\0"
.balign 4
Lt_0243:	.ascii	"darwin\0"
.balign 4
Lt_0244:	.ascii	"freebsd\0"
.balign 4
Lt_0245:	.ascii	"netbsd\0"
.balign 4
Lt_0246:	.ascii	"openbsd\0"
.balign 4
Lt_0247:	.ascii	"xbox\0"

.section .data
.balign 4
GNUARCHMAP:
.int Lt_0249
.int 0
.int Lt_024A
.int 1
.int Lt_024B
.int 2
.int Lt_024C
.int 3
.int Lt_024D
.int 1
.int Lt_024E
.int 13
.int Lt_024F
.int 13
.int Lt_0250
.int 14
.int Lt_0251
.int 15
.int Lt_0252
.int 15
.int Lt_0253
.int 16

.section .rodata
.balign 4
Lt_0249:	.ascii	"i386\0"
.balign 4
Lt_024A:	.ascii	"i486\0"
.balign 4
Lt_024B:	.ascii	"i586\0"
.balign 4
Lt_024C:	.ascii	"i686\0"
.balign 4
Lt_024D:	.ascii	"x86\0"
.balign 4
Lt_024E:	.ascii	"x86_64\0"
.balign 4
Lt_024F:	.ascii	"amd64\0"
.balign 4
Lt_0250:	.ascii	"armv6\0"
.balign 4
Lt_0251:	.ascii	"armv7a\0"
.balign 4
Lt_0252:	.ascii	"arm\0"
.balign 4
Lt_0253:	.ascii	"aarch64\0"

.section .data
.balign 4
FBOSARCHMAP:
.int Lt_0265
.int 0
.int 1
.int Lt_0266
.int 0
.int 13
.int Lt_0267
.int 3
.int 1
.int Lt_0247
.int 4
.int 1
.int Lt_0242
.int 1
.int 1
.int Lt_0243
.int 7
.int 1
.int Lt_0244
.int 5
.int 1
.int Lt_023F
.int 2
.int 1
.int Lt_0245
.int 8
.int 1
.int Lt_0246
.int 6
.int 1

.section .rodata
.balign 4
Lt_0265:	.ascii	"win32\0"
.balign 4
Lt_0266:	.ascii	"win64\0"
.balign 4
Lt_0267:	.ascii	"dos\0"
.balign 4
Lt_0271:	.ascii	"-\0"

.section .data
.balign 4
OPTION_TAKES_ARGUMENT:
.int -1
.int -1
.int -1
.int -1
.int 0
.int 0
.int -1
.int 0
.int 0
.int 0
.int 0
.int 0
.int 0
.int 0
.int -1
.int -1
.int 0
.int -1
.int 0
.int -1
.int -1
.int -1
.int -1
.int 0
.int -1
.int -1
.int -1
.int 0
.int 0
.int 0
.int -1
.int -1
.int -1
.int 0
.int 0
.int -1
.int -1
.int 0
.int 0
.int 0
.int 0
.int 0
.int -1
.int 0
.int -1
.int -1
.int -1
.int 0
.int -1
.int 0
.int -1
.int -1
.int -1
.int -1
.int -1
.int -1

.section .rodata
.balign 4
Lt_0281:	.ascii	"native\0"
.balign 4
Lt_0284:	.ascii	"-arch \0"
.balign 4
Lt_028B:	.ascii	"att\0"
.balign 4
Lt_028E:	.ascii	"intel\0"
.balign 4
Lt_02A1:	.ascii	"PRECISE\0"
.balign 4
Lt_02A4:	.ascii	"FAST\0"
.balign 4
Lt_02AB:	.ascii	"X87\0"
.balign 4
Lt_02AC:	.ascii	"FPU\0"
.balign 4
Lt_02B0:	.ascii	"SSE\0"
.balign 4
Lt_02B8:	.ascii	"gas\0"
.balign 4
Lt_02BD:	.ascii	"llvm\0"
.balign 4
Lt_02CC:	.ascii	"inf\0"
.balign 4
Lt_02D8:	.ascii	"max\0"
.balign 4
Lt_02E7:	.ascii	"host\0"
.balign 4
Lt_02EA:	.ascii	"target\0"
.balign 4
Lt_02ED:	.ascii	"x\0"
.balign 4
Lt_0304:	.ascii	"NONE\0"
.balign 4
Lt_030A:	.ascii	"2\0"
.balign 4
Lt_0312:	.ascii	"all\0"
.balign 4
Lt_0315:	.ascii	"param\0"
.balign 4
Lt_0318:	.ascii	"escape\0"
.balign 4
Lt_031B:	.ascii	"next\0"
.balign 4
Lt_031E:	.ascii	"signedness\0"
.balign 4
Lt_0321:	.ascii	"pedantic\0"
.balign 4
Lt_0334:	.ascii	"gosub-setjmp\0"
.balign 4
Lt_033E:	.ascii	"a\0"
.balign 4
Lt_0341:	.ascii	"arch\0"
.balign 4
Lt_0344:	.ascii	"asm\0"
.balign 4
Lt_034C:	.ascii	"c\0"
.balign 4
Lt_0357:	.ascii	"dll\0"
.balign 4
Lt_035A:	.ascii	"dylib\0"
.balign 4
Lt_0361:	.ascii	"ex\0"
.balign 4
Lt_0364:	.ascii	"exx\0"
.balign 4
Lt_0367:	.ascii	"export\0"
.balign 4
Lt_036C:	.ascii	"forcelang\0"
.balign 4
Lt_036F:	.ascii	"fpmode\0"
.balign 4
Lt_0372:	.ascii	"fpu\0"
.balign 4
Lt_0379:	.ascii	"gen\0"
.balign 4
Lt_037E:	.ascii	"help\0"
.balign 4
Lt_0385:	.ascii	"include\0"
.balign 4
Lt_038C:	.ascii	"lang\0"
.balign 4
Lt_0392:	.ascii	"m\0"
.balign 4
Lt_0395:	.ascii	"map\0"
.balign 4
Lt_0398:	.ascii	"maxerr\0"
.balign 4
Lt_039B:	.ascii	"mt\0"
.balign 4
Lt_03A0:	.ascii	"noerrline\0"
.balign 4
Lt_03A3:	.ascii	"nodeflibs\0"
.balign 4
Lt_03A7:	.ascii	"o\0"
.balign 4
Lt_03B2:	.ascii	"pic\0"
.balign 4
Lt_03B5:	.ascii	"pp\0"
.balign 4
Lt_03B8:	.ascii	"prefix\0"
.balign 4
Lt_03BB:	.ascii	"print\0"
.balign 4
Lt_03BE:	.ascii	"profile\0"
.balign 4
Lt_03C5:	.ascii	"rr\0"
.balign 4
Lt_03CC:	.ascii	"RR\0"
.balign 4
Lt_03D3:	.ascii	"static\0"
.balign 4
Lt_03DC:	.ascii	"title\0"
.balign 4
Lt_03E3:	.ascii	"vec\0"
.balign 4
Lt_03E6:	.ascii	"version\0"
.balign 4
Lt_03EF:	.ascii	"Wa\0"
.balign 4
Lt_03F2:	.ascii	"Wl\0"
.balign 4
Lt_03F5:	.ascii	"Wc\0"
.balign 4
Lt_0400:	.ascii	"-version\0"
.balign 4
Lt_0403:	.ascii	"-help\0"
.balign 4
Lt_0423:	.ascii	"bas\0"
.balign 4
Lt_042A:	.ascii	"rc\0"
.balign 4
Lt_042B:	.ascii	"res\0"
.balign 4
Lt_042F:	.ascii	"xpm\0"
.balign 4
Lt_0495:	.ascii	"../\0"
.balign 4
Lt_049A:	.ascii	"freebas\0"
.balign 4
Lt_049B:	.ascii	"freebasic\0"
.balign 4
Lt_049C:	.ascii	"bin\0"
.balign 4
Lt_04AD:	.ascii	", \0"
.balign 4
Lt_04B0:	.ascii	"bit\0"
.balign 4
Lt_04B3:	.ascii	" (\0"
.balign 4
Lt_04B4:	.ascii	")\0"
.balign 4
Lt_04B5:	.ascii	"target:\0"
.balign 4
Lt_04BD:	.ascii	"unnamed\0"
.balign 4
Lt_04C1:	.ascii	".asm\0"
.balign 4
Lt_04C8:	.ascii	".c\0"
.balign 4
Lt_04CB:	.ascii	".ll\0"
.balign 4
Lt_04D5:	.ascii	".pp.bas\0"
.balign 4
Lt_04D9:	.ascii	"compiling: \0"
.balign 4
Lt_04DA:	.ascii	" -o \0"
.balign 4
Lt_04DD:	.ascii	" -pp \0"
.balign 4
Lt_04E1:	.ascii	" (main module)\0"
.balign 4
Lt_04E3:	.ascii	" (FB compile-time info)\0"
.balign 4
Lt_0505:	.ascii	"\ndim shared as zstring ptr \0"
.balign 4
Lt_0507:	.ascii	"fb_program_icon_data\0"
.balign 4
Lt_0509:	.ascii	"(0 to ...) = _\n{ _\n\0"
.balign 4
Lt_050D:	.ascii	"/* XPM */\0"
.balign 4
Lt_0517:	.ascii	", _\n\0"
.balign 4
Lt_0519:	.ascii	"\t@\0"
.balign 4
Lt_051F:	.ascii	" _ \n\0"
.balign 4
Lt_0521:	.ascii	"}\n\n\0"
.balign 4
Lt_0523:	.ascii	"extern as zstring ptr ptr fb_program_icon alias \"fb_program_icon\"\n\0"
.balign 4
Lt_0527:	.ascii	"dim shared as zstring ptr ptr fb_program_icon = @fb_program_icon_data(0)\n\0"
.balign 4
Lt_052F:	.ascii	".bas\0"
.balign 4
Lt_0532:	.ascii	"parsing xpm: \0"
.balign 4
Lt_0549:	.ascii	"-m32 \0"
.balign 4
Lt_054C:	.ascii	"-m64 \0"
.balign 4
Lt_054F:	.ascii	"-march=native \0"
.balign 4
Lt_0550:	.ascii	"-march=\0"
.balign 4
Lt_0556:	.ascii	"-fPIC \0"
.balign 4
Lt_055B:	.ascii	"-S -nostdlib -nostdinc -Wall -Wno-unused-label -Wno-unused-function -Wno-unused-variable -Wno-unused-but-set-variable \0"
.balign 4
Lt_055C:	.ascii	"-Wno-main \0"
.balign 4
Lt_055D:	.ascii	"-Werror-implicit-function-declaration \0"
.balign 4
Lt_055E:	.ascii	"-O\0"
.balign 4
Lt_055F:	.ascii	"-fno-strict-aliasing \0"
.balign 4
Lt_0560:	.ascii	"-frounding-math \0"
.balign 4
Lt_0561:	.ascii	"-fno-math-errno \0"
.balign 4
Lt_0562:	.ascii	"-fno-exceptions -fno-unwind-tables -fno-asynchronous-unwind-tables \0"
.balign 4
Lt_0565:	.ascii	"-g \0"
.balign 4
Lt_0568:	.ascii	"-mfpmath=sse -msse2 \0"
.balign 4
Lt_056B:	.ascii	"-masm=intel \0"
.balign 4
Lt_0572:	.ascii	"-march=x86 \0"
.balign 4
Lt_0575:	.ascii	"-march=x86-64 \0"
.balign 4
Lt_0578:	.ascii	"-march=arm \0"
.balign 4
Lt_057B:	.ascii	"-march=aarch64 \0"
.balign 4
Lt_057E:	.ascii	"-relocation-model=pic \0"
.balign 4
Lt_0586:	.ascii	"--x86-asm-syntax=intel \0"
.balign 4
Lt_0587:	.ascii	"\" \0"
.balign 4
Lt_0588:	.ascii	"-o \"\0"
.balign 4
Lt_058D:	.ascii	"compiling C\0"
.balign 4
Lt_0590:	.ascii	"compiling LLVM IR\0"
.balign 4
Lt_059D:	.ascii	"--32 \0"
.balign 4
Lt_05A0:	.ascii	"--64 \0"
.balign 4
Lt_05A3:	.ascii	"--strip-local-absolute \0"
.balign 4
Lt_05A7:	.ascii	"assembling\0"
.balign 4
Lt_05B4:	.ascii	"--output-format=coff \0"
.balign 4
Lt_05BB:	.ascii	"compiling rc\0"
.balign 4
Lt_05D0:	.ascii	"creating: \0"
.balign 4
Lt_05DD:	.ascii	"-rsc \"\0"
.balign 4
Lt_05E6:	.ascii	"\"__fb_ct.inf\" \0"
.balign 4
Lt_05ED:	.ascii	"archiving\0"
.balign 4
Lt_05F2:	.ascii	"libgcc.a\0"
.balign 4
Lt_05F7:	.ascii	"libm.a\0"
.balign 4
Lt_05FA:	.ascii	"libmingw32.a\0"
.balign 4
Lt_060A:	.ascii	"fbgfx\0"
.balign 4
Lt_0611:	.ascii	"gdi32\0"
.balign 4
Lt_0612:	.ascii	"winmm\0"
.balign 4
Lt_0614:	.ascii	"/usr/X11R6/lib\0"
.balign 4
Lt_0616:	.ascii	"X11\0"
.balign 4
Lt_0617:	.ascii	"Xext\0"
.balign 4
Lt_0618:	.ascii	"Xpm\0"
.balign 4
Lt_0619:	.ascii	"Xrandr\0"
.balign 4
Lt_061A:	.ascii	"Xrender\0"
.balign 4
Lt_0620:	.ascii	"kernel32\0"
.balign 4
Lt_0621:	.ascii	"user32\0"
.balign 4
Lt_0624:	.ascii	"gmon\0"
.balign 4
Lt_0626:	.ascii	"System\0"
.balign 4
Lt_0629:	.ascii	"pthread\0"
.balign 4
Lt_062A:	.ascii	"ncurses\0"
.balign 4
Lt_062C:	.ascii	"libtinfo.a\0"
.balign 4
Lt_062D:	.ascii	"libtinfo.so\0"
.balign 4
Lt_0630:	.ascii	"tinfo\0"
.balign 4
Lt_0631:	.ascii	"dl\0"
.balign 4
Lt_0632:	.ascii	"libgcc_eh.a\0"
.balign 4
Lt_0633:	.ascii	"libgcc_eh.so\0"
.balign 4
Lt_0636:	.ascii	"gcc_eh\0"
.balign 4
Lt_063A:	.ascii	"msvcrt\0"
.balign 4
Lt_063B:	.ascii	"mingw32\0"
.balign 4
Lt_063C:	.ascii	"mingwex\0"
.balign 4
Lt_063D:	.ascii	"moldname\0"
.balign 4
Lt_063E:	.ascii	"libgcc_eh.dll.a\0"
.balign 4
Lt_0644:	.ascii	"openxdk\0"
.balign 4
Lt_0645:	.ascii	"hal\0"
.balign 4
Lt_0646:	.ascii	"usb\0"
.balign 4
Lt_0647:	.ascii	"xboxkrnl\0"
.balign 4
Lt_064D:	.ascii	"usage: fbc [options] <input files>\0"
.balign 4
Lt_064E:	.ascii	"input files:\0"
.balign 4
Lt_064F:	.ascii	"  *.a = static library, *.o = object file, *.bas = source\0"
.balign 4
Lt_0650:	.ascii	"  *.rc = resource script, *.res = compiled resource (win32)\0"
.balign 4
Lt_0651:	.ascii	"  *.xpm = icon resource (*nix/*bsd)\0"
.balign 4
Lt_0652:	.ascii	"options:\0"
.balign 4
Lt_0653:	.ascii	"  @<file>          Read more command line arguments from a file\0"
.balign 4
Lt_0654:	.ascii	"  -a <file>        Treat file as .o/.a input file\0"
.balign 4
Lt_0655:	.ascii	"  -arch <type>     Set target architecture (default: 486)\0"
.balign 4
Lt_0656:	.ascii	"  -asm att|intel   Set asm format (-gen gcc)\0"
.balign 4
Lt_0657:	.ascii	"  -b <file>        Treat file as .bas input file\0"
.balign 4
Lt_0658:	.ascii	"  -c               Compile only, do not link\0"
.balign 4
Lt_0659:	.ascii	"  -C               Preserve temporary .o files\0"
.balign 4
Lt_065A:	.ascii	"  -d <name>[=<val>]  Add a global #define\0"
.balign 4
Lt_065B:	.ascii	"  -dll             Same as -dylib\0"
.balign 4
Lt_065C:	.ascii	"  -dylib           Create a DLL (win32) or shared library (*nix/*BSD)\0"
.balign 4
Lt_065D:	.ascii	"  -e               Enable runtime error checking\0"
.balign 4
Lt_065E:	.ascii	"  -ex              -e plus RESUME support\0"
.balign 4
Lt_065F:	.ascii	"  -exx             -ex plus array bounds/null-pointer checking\0"
.balign 4
Lt_0660:	.ascii	"  -export          Export symbols for dynamic linkage\0"
.balign 4
Lt_0661:	.ascii	"  -forcelang <name>  Override #lang statements in source code\0"
.balign 4
Lt_0662:	.ascii	"  -fpmode fast|precise  Select floating-point math accuracy/speed\0"
.balign 4
Lt_0663:	.ascii	"  -fpu x87|sse     Set target FPU\0"
.balign 4
Lt_0664:	.ascii	"  -g               Add debug info\0"
.balign 4
Lt_0665:	.ascii	"  -gen gas|gcc|llvm  Select code generation backend\0"
.balign 4
Lt_0666:	.ascii	"  [-]-help         Show this help output\0"
.balign 4
Lt_0667:	.ascii	"  -i <path>        Add an include file search path\0"
.balign 4
Lt_0668:	.ascii	"  -include <file>  Pre-#include a file for each input .bas\0"
.balign 4
Lt_0669:	.ascii	"  -l <name>        Link in a library\0"
.balign 4
Lt_066A:	.ascii	"  -lang <name>     Select FB dialect: deprecated, fblite, qb\0"
.balign 4
Lt_066B:	.ascii	"  -lib             Create a static library\0"
.balign 4
Lt_066C:	.ascii	"  -m <name>        Specify main module (default if not -c: first input .bas)\0"
.balign 4
Lt_066D:	.ascii	"  -map <file>      Save linking map to file\0"
.balign 4
Lt_066E:	.ascii	"  -maxerr <n>      Only show <n> errors\0"
.balign 4
Lt_066F:	.ascii	"  -mt              Use thread-safe FB runtime\0"
.balign 4
Lt_0670:	.ascii	"  -nodeflibs       Do not include the default libraries\0"
.balign 4
Lt_0671:	.ascii	"  -noerrline       Do not show source context in error messages\0"
.balign 4
Lt_0672:	.ascii	"  -o <file>        Set .o (or -pp .bas) file name for prev/next input file\0"
.balign 4
Lt_0673:	.ascii	"  -O <value>       Optimization level (default: 0)\0"
.balign 4
Lt_0674:	.ascii	"  -p <path>        Add a library search path\0"
.balign 4
Lt_0675:	.ascii	"  -pic             Generate position-indepedent code (non-x86 Unix shared libs)\0"
.balign 4
Lt_0676:	.ascii	"  -pp              Write out preprocessed input file (.pp.bas) only\0"
.balign 4
Lt_0677:	.ascii	"  -prefix <path>   Set the compiler prefix path\0"
.balign 4
Lt_0678:	.ascii	"  -print host|target  Display host/target system name\0"
.balign 4
Lt_0679:	.ascii	"  -print x         Display output binary/library file name (if known)\0"
.balign 4
Lt_067A:	.ascii	"  -profile         Enable function profiling\0"
.balign 4
Lt_067B:	.ascii	"  -r               Write out .asm (-gen gas) or .c (-gen gcc) only\0"
.balign 4
Lt_067C:	.ascii	"  -rr              Write out the final .asm only\0"
.balign 4
Lt_067D:	.ascii	"  -R               Preserve the temporary .asm/.c file\0"
.balign 4
Lt_067E:	.ascii	"  -RR              Preserve the final .asm file\0"
.balign 4
Lt_067F:	.ascii	"  -s console|gui   Select win32 subsystem\0"
.balign 4
Lt_0680:	.ascii	"  -static          Prefer static libraries over dynamic ones when linking\0"
.balign 4
Lt_0681:	.ascii	"  -t <value>       Set .exe stack size in kbytes, default: 1024 (win32/dos)\0"
.balign 4
Lt_0682:	.ascii	"  -target <name>   Set cross-compilation target\0"
.balign 4
Lt_0683:	.ascii	"  -title <name>    Set XBE display title (xbox)\0"
.balign 4
Lt_0684:	.ascii	"  -v               Be verbose\0"
.balign 4
Lt_0685:	.ascii	"  -vec <n>         Automatic vectorization level (default: 0)\0"
.balign 4
Lt_0686:	.ascii	"  [-]-version      Show compiler version\0"
.balign 4
Lt_0687:	.ascii	"  -w all|pedantic|<n>  Set min warning level: all, pedantic or a value\0"
.balign 4
Lt_0688:	.ascii	"  -Wa <a,b,c>      Pass options to 'as' (-gen gas or -gen llvm)\0"
.balign 4
Lt_0689:	.ascii	"  -Wc <a,b,c>      Pass options to 'gcc' (-gen gcc) or 'llc' (-gen llvm)\0"
.balign 4
Lt_068A:	.ascii	"  -Wl <a,b,c>      Pass options to 'ld'\0"
.balign 4
Lt_068B:	.ascii	"  -x <file>        Set output executable/library file name\0"
.balign 4
Lt_068C:	.ascii	"  -z gosub-setjmp  Use setjmp/longjmp to implement GOSUB\0"
.balign 4
Lt_069A:	.ascii	"FreeBASIC Compiler - Version 1.01.0 (02-28-2015), built for \0"
.balign 4
Lt_069B:	.ascii	"bit)\0"
.balign 4
Lt_06A0:	.ascii	"Copyright (C) 2004-2014 The FreeBASIC development team.\0"

.section .ctors, "aw", @progbits
.int _GLOBAL__I

.section .dtors, "aw", @progbits
.int _GLOBAL__D
