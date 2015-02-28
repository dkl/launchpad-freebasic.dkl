	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/emit_SSE.bas' compilation started at 14:16:34 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl _INIT_OPFNTB_SSE
_INIT_OPFNTB_SSE:
.type _INIT_OPFNTB_SSE, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_0950:
mov eax, dword ptr [ebp+8]
mov ebx, offset _EMITLOADF2I_SSE
mov dword ptr [eax+8], ebx
mov ebx, dword ptr [ebp+8]
mov eax, offset _EMITLOADI2F_SSE
mov dword ptr [ebx+16], eax
mov eax, dword ptr [ebp+8]
mov ebx, offset _EMITLOADF2L_SSE
mov dword ptr [eax+32], ebx
mov ebx, dword ptr [ebp+8]
mov eax, offset _EMITLOADL2F_SSE
mov dword ptr [ebx+24], eax
mov eax, dword ptr [ebp+8]
mov ebx, offset _EMITLOADF2F_SSE
mov dword ptr [eax+20], ebx
mov ebx, dword ptr [ebp+8]
mov eax, offset _EMITSTORF2I_SSE
mov dword ptr [ebx+44], eax
mov eax, dword ptr [ebp+8]
mov ebx, offset _EMITSTORI2F_SSE
mov dword ptr [eax+52], ebx
mov ebx, dword ptr [ebp+8]
mov eax, offset _EMITSTORF2L_SSE
mov dword ptr [ebx+68], eax
mov eax, dword ptr [ebp+8]
mov ebx, offset _EMITSTORL2F_SSE
mov dword ptr [eax+60], ebx
mov ebx, dword ptr [ebp+8]
mov eax, offset _EMITSTORF2F_SSE
mov dword ptr [ebx+56], eax
mov eax, dword ptr [ebp+8]
mov ebx, offset _EMITMOVF_SSE
mov dword ptr [eax+80], ebx
mov ebx, dword ptr [ebp+8]
mov eax, offset _EMITADDF_SSE
mov dword ptr [ebx+92], eax
mov eax, dword ptr [ebp+8]
mov ebx, offset _EMITSUBF_SSE
mov dword ptr [eax+104], ebx
mov ebx, dword ptr [ebp+8]
mov eax, offset _EMITMULF_SSE
mov dword ptr [ebx+116], eax
mov eax, dword ptr [ebp+8]
mov ebx, offset _EMITDIVF_SSE
mov dword ptr [eax+128], ebx
mov ebx, dword ptr [ebp+8]
mov eax, offset _EMITATN2_SSE
mov dword ptr [ebx+204], eax
mov eax, dword ptr [ebp+8]
mov ebx, offset _EMITPOW_SSE
mov dword ptr [eax+208], ebx
mov ebx, dword ptr [ebp+8]
mov eax, offset _EMITCGTF_SSE
mov dword ptr [ebx+224], eax
mov eax, dword ptr [ebp+8]
mov ebx, offset _EMITCLTF_SSE
mov dword ptr [eax+236], ebx
mov ebx, dword ptr [ebp+8]
mov eax, offset _EMITCEQF_SSE
mov dword ptr [ebx+248], eax
mov eax, dword ptr [ebp+8]
mov ebx, offset _EMITCNEF_SSE
mov dword ptr [eax+260], ebx
mov ebx, dword ptr [ebp+8]
mov eax, offset _EMITCGEF_SSE
mov dword ptr [ebx+272], eax
mov eax, dword ptr [ebp+8]
mov ebx, offset _EMITCLEF_SSE
mov dword ptr [eax+284], ebx
mov ebx, dword ptr [ebp+8]
mov eax, offset _EMITNEGF_SSE
mov dword ptr [ebx+296], eax
mov eax, dword ptr [ebp+8]
mov ebx, offset _EMITHADDF_SSE
mov dword ptr [eax+312], ebx
mov ebx, dword ptr [ebp+8]
mov eax, offset _EMITABSF_SSE
mov dword ptr [ebx+320], eax
mov eax, dword ptr [ebp+8]
mov ebx, offset _EMITSGNF_SSE
mov dword ptr [eax+332], ebx
mov ebx, dword ptr [ebp+8]
mov eax, offset _EMITFIX_SSE
mov dword ptr [ebx+340], eax
mov eax, dword ptr [ebp+8]
mov ebx, offset _EMITFRAC_SSE
mov dword ptr [eax+344], ebx
mov ebx, dword ptr [ebp+8]
mov eax, offset _EMITSIN_SSE
mov dword ptr [ebx+356], eax
mov eax, dword ptr [ebp+8]
mov ebx, offset _EMITASIN_SSE
mov dword ptr [eax+360], ebx
mov ebx, dword ptr [ebp+8]
mov eax, offset _EMITCOS_SSE
mov dword ptr [ebx+364], eax
mov eax, dword ptr [ebp+8]
mov ebx, offset _EMITACOS_SSE
mov dword ptr [eax+368], ebx
mov ebx, dword ptr [ebp+8]
mov eax, offset _EMITTAN_SSE
mov dword ptr [ebx+372], eax
mov eax, dword ptr [ebp+8]
mov ebx, offset _EMITATAN_SSE
mov dword ptr [eax+376], ebx
mov ebx, dword ptr [ebp+8]
mov eax, offset _EMITSQRT_SSE
mov dword ptr [ebx+380], eax
mov eax, dword ptr [ebp+8]
mov ebx, offset _EMITRSQRT_SSE
mov dword ptr [eax+384], ebx
mov ebx, dword ptr [ebp+8]
mov eax, offset _EMITRCP_SSE
mov dword ptr [ebx+388], eax
mov eax, dword ptr [ebp+8]
mov ebx, offset _EMITLOG_SSE
mov dword ptr [eax+392], ebx
mov ebx, dword ptr [ebp+8]
mov eax, offset _EMITEXP_SSE
mov dword ptr [ebx+396], eax
mov eax, dword ptr [ebp+8]
mov ebx, offset _EMITFLOOR_SSE
mov dword ptr [eax+400], ebx
mov ebx, dword ptr [ebp+8]
mov eax, offset _EMITSWZREPF_SSE
mov dword ptr [ebx+352], eax
mov eax, dword ptr [ebp+8]
mov ebx, offset _EMITPUSHF_SSE
mov dword ptr [eax+416], ebx
mov ebx, dword ptr [ebp+8]
mov eax, offset _EMITPOPF_SSE
mov dword ptr [ebx+428], eax
mov dword ptr [ebp-4], -1
.Lt_0951:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size _INIT_OPFNTB_SSE, .-_INIT_OPFNTB_SSE
.balign 16
fb_ctor__emit_SSE:
.type fb_ctor__emit_SSE, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__emit_SSE, .-fb_ctor__emit_SSE
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
HULONG2DBL:
.type HULONG2DBL, @function
push ebp
mov ebp, esp
.Lt_006F:
push 0
push 0
call SYMBUNIQUELABEL
push eax
push -1
push offset Lt_0952
call fb_StrAssign
add esp, 20
push -1
push -1
push 0
push 7
push offset Lt_0953
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push 0
push 5
push offset Lt_0071
push -1
push offset Lt_0954
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0953
push -1
push offset Lt_0954
call fb_StrConcatAssign
add esp, 20
push 0
push 4
push offset Lt_0072
push -1
push offset Lt_0954
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0954]
call OUTP
add esp, 4
push 0
push 5
push offset Lt_0073
push -1
push offset Lt_0954
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0952
push -1
push offset Lt_0954
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0954]
call OUTP
add esp, 4
push offset Lt_0074
call HPUSH
add esp, 4
push offset Lt_0075
call HPUSH
add esp, 4
push offset Lt_0006
call HPUSH
add esp, 4
push offset Lt_0076
call OUTP
add esp, 4
push offset Lt_0077
call OUTP
add esp, 4
push offset Lt_0078
call OUTP
add esp, 4
push dword ptr [Lt_0952]
call HLABEL
add esp, 4
.Lt_0070:
mov esp, ebp
pop ebp
ret
.size HULONG2DBL, .-HULONG2DBL

.section .bss
.balign 4
	.lcomm	Lt_0952,12
.balign 4
	.lcomm	Lt_0953,12
.balign 4
	.lcomm	Lt_0954,12

.section .text
.balign 16
_EMITSTORF2L_SSE:
.type _EMITSTORF2L_SSE, @function
push ebp
mov ebp, esp
sub esp, 104
push ebx
.Lt_0079:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_007B
mov dword ptr [ebp-4], 22
jmp .Lt_0955
.Lt_007B:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0955:
mov eax, dword ptr [ebp-4]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+8], 0
jne .Lt_007E
jmp .Lt_007A
.Lt_007E:
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax+16], 1
jne .Lt_0080
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_0081
mov dword ptr [ebp-32], 22
jmp .Lt_0956
.Lt_0081:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-32], eax
.Lt_0956:
mov eax, dword ptr [ebp-32]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+4]
mov dword ptr [Lt_0957], ebx
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
push 0
push -1
push -1
push dword ptr [Lt_0957]
call fb_IntToStr
add esp, 4
push eax
push 10
push offset Lt_0084
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
lea eax, [ebp-44]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-56]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-56]
call OUTP
add esp, 4
lea eax, [ebp-56]
push eax
call fb_StrDelete
add esp, 4
push -1
push 0
push 0
push -2147483648
push offset Lt_0958
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
cmp dword ptr [Lt_0957], 4
jle .Lt_0088
mov dword ptr [ebp-104], 0
mov dword ptr [ebp-100], 0
mov dword ptr [ebp-96], 0
push 0
push -1
push -1
push offset Lt_0958
push 25
push offset Lt_008A
mov dword ptr [ebp-92], 0
mov dword ptr [ebp-88], 0
mov dword ptr [ebp-84], 0
lea eax, [ebp-92]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-104]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-104]
call OUTP
add esp, 4
lea eax, [ebp-104]
push eax
call fb_StrDelete
add esp, 4
push offset Lt_008D
call OUTP
add esp, 4
jmp .Lt_0087
.Lt_0088:
mov dword ptr [ebp-104], 0
mov dword ptr [ebp-100], 0
mov dword ptr [ebp-96], 0
push 0
push -1
push -1
push offset Lt_0958
push 24
push offset Lt_008F
mov dword ptr [ebp-92], 0
mov dword ptr [ebp-88], 0
mov dword ptr [ebp-84], 0
lea eax, [ebp-92]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-104]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-104]
call OUTP
add esp, 4
lea eax, [ebp-104]
push eax
call fb_StrDelete
add esp, 4
push offset Lt_0092
call OUTP
add esp, 4
.Lt_0087:
mov dword ptr [ebp-80], 0
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
push 0
push -1
push -1
push dword ptr [Lt_0957]
call fb_IntToStr
add esp, 4
push eax
push 10
push offset Lt_0094
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
push dword ptr [ebp-80]
call OUTP
add esp, 4
lea eax, [ebp-80]
push eax
call fb_StrDelete
add esp, 4
.Lt_0080:
.Lt_007F:
push -1
push 0
push 0
push -2147483648
push offset Lt_0959
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
push 0
push -1
push -1
push offset Lt_0959
push 7
push offset Lt_0097
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
push dword ptr [ebp-28]
call OUTP
add esp, 4
lea eax, [ebp-28]
push eax
call fb_StrDelete
add esp, 4
.Lt_007A:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITSTORF2L_SSE, .-_EMITSTORF2L_SSE

.section .bss
.balign 4
	.lcomm	Lt_0959,12
.balign 4
	.lcomm	Lt_0958,12
.balign 4
	.lcomm	Lt_0957,4

.section .text
.balign 16
_EMITSTORF2I_SSE:
.type _EMITSTORF2I_SSE, @function
push ebp
mov ebp, esp
sub esp, 68
push ebx
.Lt_009A:
push -1
push 0
push 0
push -2147483648
push offset Lt_0960
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push -1
push 0
push 0
push -2147483648
push offset Lt_0961
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_009C
mov dword ptr [ebp-4], 22
jmp .Lt_095A
.Lt_009C:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_095A:
mov eax, dword ptr [ebp-4]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+4]
mov dword ptr [Lt_0962], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 480
je .Lt_009E
mov dword ptr [ebp-8], 22
jmp .Lt_095B
.Lt_009E:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 31
mov dword ptr [ebp-8], ebx
.Lt_095B:
mov ebx, dword ptr [ebp-8]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx+4]
mov dword ptr [Lt_0963], eax
mov eax, dword ptr [Lt_0963]
cmp eax, 4
sete al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-20], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_00A0
mov dword ptr [ebp-12], 22
jmp .Lt_095C
.Lt_00A0:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-12], eax
.Lt_095C:
mov eax, dword ptr [ebp-12]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+8]
test ebx, ebx
sete bl
shr ebx, 1
sbb ebx, ebx
and ebx, dword ptr [ebp-20]
je .Lt_00A3
push offset Lt_00A4
call OUTP
add esp, 4
mov ebx, dword ptr [ebp+12]
cmp dword ptr [ebx], 4
je .Lt_00A6
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
push 0
push -1
push -1
push offset Lt_0961
push 5
push offset Lt_00A7
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
lea ebx, [ebp-32]
push ebx
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-44]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-44]
call OUTP
add esp, 4
lea eax, [ebp-44]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_00A5
.Lt_00A6:
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax+16], 1
jne .Lt_00AA
cmp dword ptr [Lt_0962], 4
jle .Lt_00AC
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
push 0
push -1
push -1
push offset Lt_0961
push 25
push offset Lt_008A
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
call OUTP
add esp, 4
lea eax, [ebp-44]
push eax
call fb_StrDelete
add esp, 4
push offset Lt_008D
call OUTP
add esp, 4
jmp .Lt_00AB
.Lt_00AC:
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
push 0
push -1
push -1
push offset Lt_0961
push 24
push offset Lt_008F
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
call OUTP
add esp, 4
lea eax, [ebp-44]
push eax
call fb_StrDelete
add esp, 4
push offset Lt_0092
call OUTP
add esp, 4
.Lt_00AB:
.Lt_00AA:
.Lt_00A5:
push offset Lt_00B1
call OUTP
add esp, 4
push dword ptr [Lt_0960]
call HPOP
add esp, 4
push offset Lt_00B2
call OUTP
add esp, 4
jmp .Lt_009B
.Lt_00A3:
.Lt_00A2:
mov eax, dword ptr [Lt_0963]
cmp eax, 2
sete al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-20], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_00B3
mov dword ptr [ebp-16], 22
jmp .Lt_095E
.Lt_00B3:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-16], eax
.Lt_095E:
mov eax, dword ptr [ebp-16]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+8]
and ebx, dword ptr [ebp-20]
je .Lt_00B6
push offset Lt_00A4
call OUTP
add esp, 4
mov ebx, dword ptr [ebp+12]
cmp dword ptr [ebx], 4
je .Lt_00B8
mov dword ptr [ebp-68], 0
mov dword ptr [ebp-64], 0
mov dword ptr [ebp-60], 0
push 0
push -1
push -1
push offset Lt_0961
push 5
push offset Lt_00A7
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
lea ebx, [ebp-56]
push ebx
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-68]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-68]
call OUTP
add esp, 4
lea eax, [ebp-68]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_00B7
.Lt_00B8:
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax+16], 1
jne .Lt_00BB
cmp dword ptr [Lt_0962], 4
jle .Lt_00BD
mov dword ptr [ebp-68], 0
mov dword ptr [ebp-64], 0
mov dword ptr [ebp-60], 0
push 0
push -1
push -1
push offset Lt_0961
push 25
push offset Lt_008A
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
push dword ptr [ebp-68]
call OUTP
add esp, 4
lea eax, [ebp-68]
push eax
call fb_StrDelete
add esp, 4
push offset Lt_008D
call OUTP
add esp, 4
jmp .Lt_00BC
.Lt_00BD:
mov dword ptr [ebp-68], 0
mov dword ptr [ebp-64], 0
mov dword ptr [ebp-60], 0
push 0
push -1
push -1
push offset Lt_0961
push 24
push offset Lt_008F
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
push dword ptr [ebp-68]
call OUTP
add esp, 4
lea eax, [ebp-68]
push eax
call fb_StrDelete
add esp, 4
push offset Lt_0092
call OUTP
add esp, 4
.Lt_00BC:
.Lt_00BB:
.Lt_00B7:
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
push 0
push -1
push -1
push offset Lt_0960
push 7
push offset Lt_0097
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
call OUTP
add esp, 4
lea eax, [ebp-44]
push eax
call fb_StrDelete
add esp, 4
push offset Lt_00C4
call OUTP
add esp, 4
jmp .Lt_009B
.Lt_00B6:
.Lt_00B5:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
cmp ebx, 4
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [Lt_0963]
cmp eax, 4
sete al
shr eax, 1
sbb eax, eax
and ebx, eax
je .Lt_00C6
mov dword ptr [Lt_0969], -1
push 0
push -1
push offset Lt_0960
push -1
push offset Lt_096A
call fb_StrAssign
add esp, 20
mov dword ptr [Lt_096B], -1
jmp .Lt_00C5
.Lt_00C6:
mov dword ptr [Lt_096B], 0
push 0
push dword ptr [ebp+12]
call HFINDREGNOTINVREG
add esp, 8
mov dword ptr [Lt_096C], eax
push 0
push 0
push dword ptr [Lt_096C]
push 7
call HGETREGNAME
add esp, 8
push eax
push -1
push offset Lt_096A
call fb_StrAssign
add esp, 20
push dword ptr [Lt_096C]
push 0
call HISREGFREE
add esp, 8
mov dword ptr [Lt_0969], eax
cmp dword ptr [Lt_0969], 0
jne .Lt_00C8
push dword ptr [Lt_096A]
call HPUSH
add esp, 4
.Lt_00C8:
.Lt_00C7:
.Lt_00C5:
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax+16], 0
jne .Lt_00CA
push offset Lt_00CB
call OUTP
add esp, 4
push offset Lt_00CC
call OUTP
add esp, 4
mov dword ptr [ebp-64], 0
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
push 0
push -1
push 16
push offset Lt_00CE
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_096A
push 5
push offset Lt_00CD
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
push -1
lea eax, [ebp-64]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-64]
call OUTP
add esp, 4
lea eax, [ebp-64]
push eax
call fb_StrDelete
add esp, 4
push offset Lt_00B2
call OUTP
add esp, 4
jmp .Lt_00C9
.Lt_00CA:
cmp dword ptr [Lt_0962], 4
jle .Lt_00D4
mov dword ptr [ebp-64], 0
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
push 0
push -1
push -1
push offset Lt_0961
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_096A
push 10
push offset Lt_00D5
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
push -1
lea eax, [ebp-64]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-64]
call OUTP
add esp, 4
lea eax, [ebp-64]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_00D3
.Lt_00D4:
mov dword ptr [ebp-64], 0
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
push 0
push -1
push -1
push offset Lt_0961
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_096A
push 10
push offset Lt_00DA
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
push -1
lea eax, [ebp-64]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-64]
call OUTP
add esp, 4
lea eax, [ebp-64]
push eax
call fb_StrDelete
add esp, 4
.Lt_00D3:
.Lt_00C9:
cmp dword ptr [Lt_096B], 0
jne .Lt_00E0
cmp dword ptr [Lt_0963], 1
jne .Lt_00E2
push 0
push 0
push dword ptr [Lt_096C]
push 1
call HGETREGNAME
add esp, 8
push eax
push -1
push offset Lt_096D
call fb_StrAssign
add esp, 20
mov dword ptr [ebp-64], 0
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
push 0
push -1
push -1
push offset Lt_096D
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0960
push 5
push offset Lt_00CD
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
push -1
lea eax, [ebp-64]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-64]
call OUTP
add esp, 4
lea eax, [ebp-64]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_00E1
.Lt_00E2:
cmp dword ptr [Lt_0963], 2
jne .Lt_00E7
push 0
push 0
push dword ptr [Lt_096C]
push 4
call HGETREGNAME
add esp, 8
push eax
push -1
push offset Lt_096E
call fb_StrAssign
add esp, 20
mov dword ptr [ebp-64], 0
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
push 0
push -1
push -1
push offset Lt_096E
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0960
push 5
push offset Lt_00CD
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
push -1
lea eax, [ebp-64]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-64]
call OUTP
add esp, 4
lea eax, [ebp-64]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_00E1
.Lt_00E7:
mov dword ptr [ebp-64], 0
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
push 0
push -1
push -1
push offset Lt_096A
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0960
push 5
push offset Lt_00CD
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
push -1
lea eax, [ebp-64]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-64]
call OUTP
add esp, 4
lea eax, [ebp-64]
push eax
call fb_StrDelete
add esp, 4
.Lt_00E1:
cmp dword ptr [Lt_0969], 0
jne .Lt_00F1
push dword ptr [Lt_096A]
call HPOP
add esp, 4
.Lt_00F1:
.Lt_00F0:
.Lt_00E0:
.Lt_00DF:
.Lt_009B:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITSTORF2I_SSE, .-_EMITSTORF2I_SSE

.section .bss
.balign 4
	.lcomm	Lt_0960,12
.balign 4
	.lcomm	Lt_0961,12
.balign 4
	.lcomm	Lt_0962,4
.balign 4
	.lcomm	Lt_0963,4
.balign 4
	.lcomm	Lt_096F,12
.balign 4
	.lcomm	Lt_096A,12
.balign 4
	.lcomm	Lt_096D,12
.balign 4
	.lcomm	Lt_096E,12
.balign 4
	.lcomm	Lt_0969,4
.balign 4
	.lcomm	Lt_096C,4
.balign 4
	.lcomm	Lt_096B,4

.section .text
.balign 16
_EMITSTORL2F_SSE:
.type _EMITSTORL2F_SSE, @function
push ebp
mov ebp, esp
sub esp, 28
push ebx
.Lt_00F2:
push -1
push 0
push 0
push -2147483648
push offset Lt_0972
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push -1
push 0
push 0
push -2147483648
push offset Lt_0973
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax]
cmp ebx, 4
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax]
test ecx, ecx
sete cl
shr ecx, 1
sbb ecx, ecx
or ebx, ecx
je .Lt_00F5
mov ecx, dword ptr [ebp+12]
mov ebx, dword ptr [ecx+4]
and ebx, 480
je .Lt_00F6
mov dword ptr [ebp-4], 22
jmp .Lt_0970
.Lt_00F6:
mov ebx, dword ptr [ebp+12]
mov ecx, dword ptr [ebx+4]
and ecx, 31
mov dword ptr [ebp-4], ecx
.Lt_0970:
mov ecx, dword ptr [ebp-4]
imul ecx, 28
cmp dword ptr [SYMB_DTYPETB+ecx+8], 0
je .Lt_00F9
push offset Lt_0976
push offset Lt_0973
push dword ptr [ebp+12]
call HPREPOPERAND64
add esp, 12
push dword ptr [Lt_0976]
call HPUSH
add esp, 4
push dword ptr [Lt_0973]
call HPUSH
add esp, 4
push 0
push -1
push 7
push offset Lt_00FB
push -1
push 12
mov ecx, dword ptr [ebp+12]
mov ebx, dword ptr [ecx+4]
sal ebx, 4
lea ecx, [DTYPETB+ebx+4]
push ecx
push 6
push offset Lt_00FA
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
lea ecx, [ebp-16]
push ecx
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
push offset Lt_0977
call fb_StrAssign
add esp, 20
push dword ptr [Lt_0977]
call OUTP
add esp, 4
push offset Lt_00C4
call OUTP
add esp, 4
jmp .Lt_00F8
.Lt_00F9:
push offset Lt_0976
push offset Lt_0973
push dword ptr [ebp+12]
call HPREPOPERAND64
add esp, 12
push dword ptr [Lt_0976]
call HPUSH
add esp, 4
push dword ptr [Lt_0973]
call HPUSH
add esp, 4
push offset Lt_00FE
call OUTP
add esp, 4
push offset Lt_00C4
call OUTP
add esp, 4
push dword ptr [ebp+12]
call HULONG2DBL
add esp, 4
.Lt_00F8:
jmp .Lt_00F4
.Lt_00F5:
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax+4]
and ecx, 480
je .Lt_00FF
mov dword ptr [ebp-4], 22
jmp .Lt_0971
.Lt_00FF:
mov ecx, dword ptr [ebp+12]
mov eax, dword ptr [ecx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0971:
mov eax, dword ptr [ebp-4]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+8], 0
je .Lt_0102
push 0
push 6
push offset Lt_00FA
push -1
push offset Lt_0977
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0973
push -1
push offset Lt_0977
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0977]
call OUTP
add esp, 4
jmp .Lt_0101
.Lt_0102:
push 0
push 6
push offset Lt_00FA
push -1
push offset Lt_0977
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0973
push -1
push offset Lt_0977
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0977]
call OUTP
add esp, 4
push dword ptr [ebp+12]
call HULONG2DBL
add esp, 4
.Lt_0101:
.Lt_00F4:
push 0
push 6
push offset Lt_0103
push -1
push offset Lt_0977
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0972
push -1
push offset Lt_0977
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0977]
call OUTP
add esp, 4
.Lt_00F3:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITSTORL2F_SSE, .-_EMITSTORL2F_SSE

.section .bss
.balign 4
	.lcomm	Lt_0972,12
.balign 4
	.lcomm	Lt_0973,12
.balign 4
	.lcomm	Lt_0976,12
.balign 4
	.lcomm	Lt_0977,12

.section .text
.balign 16
_EMITSTORI2F_SSE:
.type _EMITSTORI2F_SSE, @function
push ebp
mov ebp, esp
sub esp, 84
push ebx
.Lt_0104:
push -1
push 0
push 0
push -2147483648
push offset Lt_097C
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push -1
push 0
push 0
push -2147483648
push offset Lt_097D
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_0106
mov dword ptr [ebp-4], 22
jmp .Lt_0978
.Lt_0106:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0978:
mov eax, dword ptr [ebp-4]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+4]
mov dword ptr [Lt_097E], ebx
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 480
je .Lt_0108
mov dword ptr [ebp-8], 22
jmp .Lt_0979
.Lt_0108:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 31
mov dword ptr [ebp-8], ebx
.Lt_0979:
mov ebx, dword ptr [ebp-8]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx+4]
mov dword ptr [Lt_097F], eax
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_010A
mov dword ptr [ebp-12], 22
jmp .Lt_097A
.Lt_010A:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-12], eax
.Lt_097A:
mov eax, dword ptr [ebp-12]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+8]
test ebx, ebx
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [Lt_097F]
cmp eax, 4
sete al
shr eax, 1
sbb eax, eax
and ebx, eax
je .Lt_010D
push offset Lt_0006
call HPUSH
add esp, 4
push dword ptr [Lt_097D]
call HPUSH
add esp, 4
push offset Lt_00FE
call OUTP
add esp, 4
push offset Lt_00C4
call OUTP
add esp, 4
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 0
push -1
push -1
push offset Lt_097C
push 6
push offset Lt_0103
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
call OUTP
add esp, 4
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0105
.Lt_010D:
.Lt_010C:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax]
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [Lt_097F]
cmp eax, 4
sete al
shr eax, 1
sbb eax, eax
and ebx, eax
je .Lt_0111
push 0
push -1
push offset Lt_097D
push -1
push offset Lt_0984
call fb_StrAssign
add esp, 20
mov dword ptr [Lt_0985], -1
jmp .Lt_0110
.Lt_0111:
push 0
push dword ptr [ebp+12]
call HFINDREGNOTINVREG
add esp, 8
mov dword ptr [Lt_0986], eax
push 0
push 0
push dword ptr [Lt_0986]
push 7
call HGETREGNAME
add esp, 8
push eax
push -1
push offset Lt_0984
call fb_StrAssign
add esp, 20
push dword ptr [Lt_0986]
push 0
call HISREGFREE
add esp, 8
mov dword ptr [Lt_0985], eax
cmp dword ptr [Lt_0985], 0
jne .Lt_0113
push dword ptr [Lt_0984]
call HPUSH
add esp, 4
.Lt_0113:
.Lt_0112:
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax], 0
jne .Lt_0115
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
push 0
push -1
push -1
push offset Lt_097D
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0984
push 5
push offset Lt_00CD
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
push dword ptr [ebp-60]
call OUTP
add esp, 4
lea eax, [ebp-60]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0114
.Lt_0115:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_011A
mov dword ptr [ebp-16], 22
jmp .Lt_097B
.Lt_011A:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-16], eax
.Lt_097B:
mov eax, dword ptr [ebp-16]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+8], 0
je .Lt_011D
push 0
push 7
push offset Lt_011E
push -1
push offset Lt_0987
call fb_StrAssign
add esp, 20
jmp .Lt_011C
.Lt_011D:
push 0
push 7
push offset Lt_011F
push -1
push offset Lt_0987
call fb_StrAssign
add esp, 20
.Lt_011C:
mov dword ptr [ebp-64], 0
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
push 0
push -1
push -1
push offset Lt_097D
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0984
push -1
push offset Lt_0987
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
push -1
lea eax, [ebp-64]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-64]
call OUTP
add esp, 4
lea eax, [ebp-64]
push eax
call fb_StrDelete
add esp, 4
.Lt_0114:
.Lt_0110:
cmp dword ptr [Lt_097E], 4
jle .Lt_0125
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 0
push -1
push -1
push offset Lt_0984
push 16
push offset Lt_0127
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
call OUTP
add esp, 4
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-84], 0
mov dword ptr [ebp-80], 0
mov dword ptr [ebp-76], 0
push 0
push -1
push 5
push offset Lt_012B
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_097C
push 8
push offset Lt_012A
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
push dword ptr [ebp-84]
call OUTP
add esp, 4
lea eax, [ebp-84]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0124
.Lt_0125:
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 0
push -1
push -1
push offset Lt_0984
push 16
push offset Lt_0131
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
call OUTP
add esp, 4
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-84], 0
mov dword ptr [ebp-80], 0
mov dword ptr [ebp-76], 0
push 0
push -1
push 5
push offset Lt_012B
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_097C
push 7
push offset Lt_0134
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
push dword ptr [ebp-84]
call OUTP
add esp, 4
lea eax, [ebp-84]
push eax
call fb_StrDelete
add esp, 4
.Lt_0124:
cmp dword ptr [Lt_0985], 0
jne .Lt_013A
push dword ptr [Lt_0984]
call HPOP
add esp, 4
.Lt_013A:
.Lt_0139:
.Lt_0105:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITSTORI2F_SSE, .-_EMITSTORI2F_SSE

.section .bss
.balign 4
	.lcomm	Lt_097C,12
.balign 4
	.lcomm	Lt_097D,12
.balign 4
	.lcomm	Lt_0984,12
.balign 4
	.lcomm	Lt_097E,4
.balign 4
	.lcomm	Lt_097F,4
.balign 4
	.lcomm	Lt_0986,4
.balign 4
	.lcomm	Lt_0985,4
.balign 4
	.lcomm	Lt_0987,12

.section .text
.balign 16
HEMITSTOREFREG2F_SSE:
.type HEMITSTOREFREG2F_SSE, @function
push ebp
mov ebp, esp
sub esp, 124
push ebx
.Lt_013B:
push 0
push 0
push 0
push -2147483648
push offset Lt_0989
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push 0
push 0
push 0
push -2147483648
push offset Lt_098A
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_013D
mov dword ptr [ebp-4], 22
jmp .Lt_0988
.Lt_013D:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0988:
mov eax, dword ptr [ebp-4]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+4]
mov dword ptr [Lt_098B], ebx
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+20]
cmp eax, 2
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [Lt_098B]
cmp ebx, 4
setg bl
shr ebx, 1
sbb ebx, ebx
and eax, ebx
je .Lt_0140
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
push 0
push -1
push -1
push offset Lt_098A
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0989
push 8
push offset Lt_0141
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
lea ebx, [ebp-16]
push ebx
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
push -1
lea eax, [ebp-52]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-52]
call OUTP
add esp, 4
lea eax, [ebp-52]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_013C
.Lt_0140:
.Lt_013F:
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax+20], 2
jne .Lt_0147
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
push 0
push -1
push -1
push offset Lt_098A
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0989
push 8
push offset Lt_0148
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
push -1
lea eax, [ebp-52]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-52]
call OUTP
add esp, 4
lea eax, [ebp-52]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0146
.Lt_0147:
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax+20], 3
jne .Lt_014D
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
push 0
push -1
push -1
push offset Lt_098A
push 15
push offset Lt_014F
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
push dword ptr [ebp-28]
call OUTP
add esp, 4
lea eax, [ebp-28]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
push 0
push -1
push -1
push offset Lt_098A
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0989
push 8
push offset Lt_0148
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
push dword ptr [ebp-76]
call OUTP
add esp, 4
lea eax, [ebp-76]
push eax
call fb_StrDelete
add esp, 4
push -1
push 0
push 8
push -2147483648
push offset Lt_0989
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
mov dword ptr [ebp-124], 0
mov dword ptr [ebp-120], 0
mov dword ptr [ebp-116], 0
push 0
push -1
push 5
push offset Lt_012B
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0989
push 7
push offset Lt_0134
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
push dword ptr [ebp-124]
call OUTP
add esp, 4
lea eax, [ebp-124]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0146
.Lt_014D:
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax+20], 4
jne .Lt_015A
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
push 0
push -1
push -1
push offset Lt_098A
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0989
push 8
push offset Lt_015B
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
push -1
lea eax, [ebp-52]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-52]
call OUTP
add esp, 4
lea eax, [ebp-52]
push eax
call fb_StrDelete
add esp, 4
.Lt_015A:
.Lt_0146:
.Lt_013C:
pop ebx
mov esp, ebp
pop ebp
ret
.size HEMITSTOREFREG2F_SSE, .-HEMITSTOREFREG2F_SSE

.section .bss
.balign 4
	.lcomm	Lt_0989,12
.balign 4
	.lcomm	Lt_098A,12
.balign 4
	.lcomm	Lt_098B,4

.section .text
.balign 16
_EMITSTORF2F_SSE:
.type _EMITSTORF2F_SSE, @function
push ebp
mov ebp, esp
sub esp, 128
push ebx
.Lt_0160:
push 0
push 0
push 0
push -2147483648
push offset Lt_0990
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push 0
push 0
push 0
push -2147483648
push offset Lt_0991
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_0162
mov dword ptr [ebp-4], 22
jmp .Lt_098E
.Lt_0162:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_098E:
mov eax, dword ptr [ebp-4]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+4]
mov dword ptr [Lt_0992], ebx
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 480
je .Lt_0164
mov dword ptr [ebp-8], 22
jmp .Lt_098F
.Lt_0164:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 31
mov dword ptr [ebp-8], ebx
.Lt_098F:
mov ebx, dword ptr [ebp-8]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx+4]
mov dword ptr [Lt_0993], eax
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+20]
test ebx, ebx
setg bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [Lt_0995], ebx
mov ebx, dword ptr [ebp+12]
cmp dword ptr [ebx], 4
jne .Lt_0167
mov ebx, dword ptr [ebp+12]
cmp dword ptr [ebx+16], 0
jne .Lt_0169
push -1
push 0
push 0
push -2147483648
push offset Lt_0990
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
push 0
push -1
push -1
push offset Lt_0990
push 6
push offset Lt_0103
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
call OUTP
add esp, 4
lea eax, [ebp-32]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0161
.Lt_0169:
.Lt_0168:
cmp dword ptr [Lt_0995], 0
je .Lt_016D
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HEMITSTOREFREG2F_SSE
add esp, 8
jmp .Lt_0161
.Lt_016D:
.Lt_016C:
cmp dword ptr [Lt_0992], 4
jle .Lt_016F
cmp dword ptr [Lt_0993], 4
jg .Lt_0171
mov dword ptr [ebp-104], 0
mov dword ptr [ebp-100], 0
mov dword ptr [ebp-96], 0
push 0
push -1
push -1
push offset Lt_0991
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0991
push 10
push offset Lt_0172
mov dword ptr [ebp-68], 0
mov dword ptr [ebp-64], 0
mov dword ptr [ebp-60], 0
lea eax, [ebp-68]
push eax
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
mov dword ptr [ebp-92], 0
mov dword ptr [ebp-88], 0
mov dword ptr [ebp-84], 0
lea eax, [ebp-92]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-104]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-104]
call OUTP
add esp, 4
lea eax, [ebp-104]
push eax
call fb_StrDelete
add esp, 4
.Lt_0171:
.Lt_0170:
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
push 0
push -1
push -1
push offset Lt_0991
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0990
push 8
push offset Lt_012A
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
push -1
lea eax, [ebp-56]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-56]
call OUTP
add esp, 4
lea eax, [ebp-56]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_016E
.Lt_016F:
cmp dword ptr [Lt_0993], 4
jle .Lt_017C
mov dword ptr [ebp-104], 0
mov dword ptr [ebp-100], 0
mov dword ptr [ebp-96], 0
push 0
push -1
push -1
push offset Lt_0991
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0991
push 10
push offset Lt_017D
mov dword ptr [ebp-68], 0
mov dword ptr [ebp-64], 0
mov dword ptr [ebp-60], 0
lea eax, [ebp-68]
push eax
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
mov dword ptr [ebp-92], 0
mov dword ptr [ebp-88], 0
mov dword ptr [ebp-84], 0
lea eax, [ebp-92]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-104]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-104]
call OUTP
add esp, 4
lea eax, [ebp-104]
push eax
call fb_StrDelete
add esp, 4
.Lt_017C:
.Lt_017B:
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
push 0
push -1
push -1
push offset Lt_0991
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0990
push 7
push offset Lt_0134
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
push -1
lea eax, [ebp-56]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-56]
call OUTP
add esp, 4
lea eax, [ebp-56]
push eax
call fb_StrDelete
add esp, 4
.Lt_016E:
jmp .Lt_0166
.Lt_0167:
mov eax, dword ptr [Lt_0992]
cmp dword ptr [Lt_0993], eax
jne .Lt_0187
cmp dword ptr [Lt_0995], 0
je .Lt_0189
push 0
push 0
push 0
push -2147483648
push offset Lt_0990
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push 0
push 0
push 0
push -2147483648
push offset Lt_0991
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
cmp dword ptr [Lt_0992], 4
jle .Lt_018B
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
push 0
push -1
push -1
push offset Lt_0991
push 14
push offset Lt_018D
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
call OUTP
add esp, 4
lea eax, [ebp-32]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-80], 0
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
push 0
push -1
push 5
push offset Lt_012B
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0990
push 8
push offset Lt_0141
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
push dword ptr [ebp-80]
call OUTP
add esp, 4
lea eax, [ebp-80]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_018A
.Lt_018B:
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax+20], 2
jne .Lt_0195
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
push 0
push -1
push -1
push offset Lt_0991
push 14
push offset Lt_0197
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
call OUTP
add esp, 4
lea eax, [ebp-32]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-80], 0
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
push 0
push -1
push 5
push offset Lt_012B
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0990
push 8
push offset Lt_0148
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
push dword ptr [ebp-80]
call OUTP
add esp, 4
lea eax, [ebp-80]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0194
.Lt_0195:
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax+20], 3
jne .Lt_019E
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
push 0
push -1
push -1
push offset Lt_0991
push 14
push offset Lt_01A0
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
call OUTP
add esp, 4
lea eax, [ebp-32]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-80], 0
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
push 0
push -1
push 5
push offset Lt_012B
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0990
push 8
push offset Lt_0148
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
push dword ptr [ebp-80]
call OUTP
add esp, 4
lea eax, [ebp-80]
push eax
call fb_StrDelete
add esp, 4
push offset Lt_01A7
call OUTP
add esp, 4
push -1
push 0
push 8
push -2147483648
push offset Lt_0990
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
mov dword ptr [ebp-128], 0
mov dword ptr [ebp-124], 0
mov dword ptr [ebp-120], 0
push 0
push -1
push 5
push offset Lt_012B
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0990
push 7
push offset Lt_0134
mov dword ptr [ebp-92], 0
mov dword ptr [ebp-88], 0
mov dword ptr [ebp-84], 0
lea eax, [ebp-92]
push eax
call fb_StrConcat
add esp, 20
push eax
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
lea eax, [ebp-128]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-128]
call OUTP
add esp, 4
lea eax, [ebp-128]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0194
.Lt_019E:
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax+20], 4
jne .Lt_01AC
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
push 0
push -1
push -1
push offset Lt_0991
push 14
push offset Lt_01A0
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
call OUTP
add esp, 4
lea eax, [ebp-32]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-80], 0
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
push 0
push -1
push 5
push offset Lt_012B
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0990
push 8
push offset Lt_015B
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
push dword ptr [ebp-80]
call OUTP
add esp, 4
lea eax, [ebp-80]
push eax
call fb_StrDelete
add esp, 4
.Lt_01AC:
.Lt_0194:
.Lt_018A:
jmp .Lt_0161
.Lt_0189:
.Lt_0188:
cmp dword ptr [Lt_0992], 4
jle .Lt_01B4
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
push 0
push -1
push -1
push offset Lt_0991
push 14
push offset Lt_01B6
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
call OUTP
add esp, 4
lea eax, [ebp-32]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-80], 0
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
push 0
push -1
push 5
push offset Lt_012B
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0990
push 8
push offset Lt_012A
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
push dword ptr [ebp-80]
call OUTP
add esp, 4
lea eax, [ebp-80]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_01B3
.Lt_01B4:
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
push 0
push -1
push -1
push offset Lt_0991
push 13
push offset Lt_01BE
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
call OUTP
add esp, 4
lea eax, [ebp-32]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-80], 0
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
push 0
push -1
push 5
push offset Lt_012B
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0990
push 7
push offset Lt_0134
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
push dword ptr [ebp-80]
call OUTP
add esp, 4
lea eax, [ebp-80]
push eax
call fb_StrDelete
add esp, 4
.Lt_01B3:
jmp .Lt_0186
.Lt_0187:
cmp dword ptr [Lt_0993], 4
jle .Lt_01C6
cmp dword ptr [Lt_0995], 0
je .Lt_01C8
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
push 0
push -1
push -1
push offset Lt_0991
push 16
push offset Lt_01CA
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
call OUTP
add esp, 4
lea eax, [ebp-32]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-80], 0
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
push 0
push -1
push 5
push offset Lt_012B
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0990
push 8
push offset Lt_0148
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
push dword ptr [ebp-80]
call OUTP
add esp, 4
lea eax, [ebp-80]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_01C7
.Lt_01C8:
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
push 0
push -1
push -1
push offset Lt_0991
push 16
push offset Lt_01D2
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
call OUTP
add esp, 4
lea eax, [ebp-32]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-80], 0
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
push 0
push -1
push 5
push offset Lt_012B
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0990
push 7
push offset Lt_0134
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
push dword ptr [ebp-80]
call OUTP
add esp, 4
lea eax, [ebp-80]
push eax
call fb_StrDelete
add esp, 4
.Lt_01C7:
jmp .Lt_01C5
.Lt_01C6:
cmp dword ptr [Lt_0995], 0
je .Lt_01DA
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
push 0
push -1
push -1
push offset Lt_0991
push 16
push offset Lt_01DC
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
call OUTP
add esp, 4
lea eax, [ebp-32]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-80], 0
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
push 0
push -1
push 5
push offset Lt_012B
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0990
push 8
push offset Lt_0141
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
push dword ptr [ebp-80]
call OUTP
add esp, 4
lea eax, [ebp-80]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_01D9
.Lt_01DA:
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
push 0
push -1
push -1
push offset Lt_0991
push 16
push offset Lt_01E4
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
call OUTP
add esp, 4
lea eax, [ebp-32]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-80], 0
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
push 0
push -1
push 5
push offset Lt_012B
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0990
push 8
push offset Lt_012A
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
push dword ptr [ebp-80]
call OUTP
add esp, 4
lea eax, [ebp-80]
push eax
call fb_StrDelete
add esp, 4
.Lt_01D9:
.Lt_01C5:
.Lt_0186:
.Lt_0166:
.Lt_0161:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITSTORF2F_SSE, .-_EMITSTORF2F_SSE

.section .bss
.balign 4
	.lcomm	Lt_0990,12
.balign 4
	.lcomm	Lt_0991,12
.balign 4
	.lcomm	Lt_0992,4
.balign 4
	.lcomm	Lt_0993,4
.balign 4
	.lcomm	Lt_0995,4
.balign 4
	.lcomm	Lt_0996,12

.section .text
.balign 16
_EMITLOADF2L_SSE:
.type _EMITLOADF2L_SSE, @function
push ebp
mov ebp, esp
sub esp, 36
push ebx
.Lt_01EB:
push -1
push 0
push 0
push -2147483648
push offset Lt_099A
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push -1
push 0
push 0
push -2147483648
push offset Lt_099B
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_01ED
mov dword ptr [ebp-4], 22
jmp .Lt_0997
.Lt_01ED:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0997:
mov eax, dword ptr [ebp-4]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+4]
mov dword ptr [Lt_099C], ebx
mov ebx, dword ptr [ebp+12]
cmp dword ptr [ebx+16], 1
jne .Lt_01F0
mov ebx, dword ptr [ebp+12]
cmp dword ptr [ebx], 4
jne .Lt_01F2
push offset Lt_00A4
call OUTP
add esp, 4
cmp dword ptr [Lt_099C], 4
jle .Lt_01F4
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 0
push -1
push -1
push offset Lt_099B
push 25
push offset Lt_008A
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea ebx, [ebp-24]
push ebx
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-36]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-36]
call OUTP
add esp, 4
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
push offset Lt_008D
call OUTP
add esp, 4
jmp .Lt_01F3
.Lt_01F4:
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 0
push -1
push -1
push offset Lt_099B
push 24
push offset Lt_008F
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
call OUTP
add esp, 4
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
push offset Lt_0092
call OUTP
add esp, 4
.Lt_01F3:
push offset Lt_00C4
call OUTP
add esp, 4
jmp .Lt_01F1
.Lt_01F2:
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 0
push -1
push -1
push offset Lt_099B
push 5
push offset Lt_00A7
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
call OUTP
add esp, 4
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
.Lt_01F1:
.Lt_01F0:
.Lt_01EF:
push offset Lt_099D
push offset Lt_099A
push dword ptr [ebp+8]
call HPREPOPERAND64
add esp, 12
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_01FB
mov dword ptr [ebp-8], 22
jmp .Lt_0998
.Lt_01FB:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-8], eax
.Lt_0998:
mov eax, dword ptr [ebp-8]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+8], 0
jne .Lt_01FD
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
cmp ebx, 13
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-12], ebx
jmp .Lt_0999
.Lt_01FD:
mov dword ptr [ebp-12], -1
.Lt_0999:
cmp dword ptr [ebp-12], 0
je .Lt_0200
push offset Lt_00A4
call OUTP
add esp, 4
push 0
push -1
push 7
push offset Lt_00FB
push -1
push 12
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
sal eax, 4
lea ebx, [DTYPETB+eax+4]
push ebx
push 7
push offset Lt_0097
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea ebx, [ebp-24]
push ebx
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
push offset Lt_09A0
call fb_StrAssign
add esp, 20
push dword ptr [Lt_09A0]
call OUTP
add esp, 4
jmp .Lt_01FF
.Lt_0200:
push offset Lt_0203
call OUTP
add esp, 4
push offset Lt_0204
call OUTP
add esp, 4
push offset Lt_0205
call OUTP
add esp, 4
push offset Lt_00CC
call OUTP
add esp, 4
push offset Lt_0206
call OUTP
add esp, 4
push offset Lt_0204
call OUTP
add esp, 4
push offset Lt_0207
call OUTP
add esp, 4
push offset Lt_0208
call OUTP
add esp, 4
push offset Lt_00CC
call OUTP
add esp, 4
.Lt_01FF:
push dword ptr [Lt_099A]
call HPOP
add esp, 4
push dword ptr [Lt_099D]
call HPOP
add esp, 4
.Lt_01EC:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITLOADF2L_SSE, .-_EMITLOADF2L_SSE

.section .bss
.balign 4
	.lcomm	Lt_099A,12
.balign 4
	.lcomm	Lt_099B,12
.balign 4
	.lcomm	Lt_099D,12
.balign 4
	.lcomm	Lt_09A0,12
.balign 4
	.lcomm	Lt_09A1,4
.balign 4
	.lcomm	Lt_099C,4

.section .text
.balign 16
_EMITLOADF2I_SSE:
.type _EMITLOADF2I_SSE, @function
push ebp
mov ebp, esp
sub esp, 152
push ebx
.Lt_0209:
push -1
push 0
push 0
push -2147483648
push offset Lt_09A7
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push -1
push 0
push 0
push -2147483648
push offset Lt_09A8
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_020B
mov dword ptr [ebp-4], 22
jmp .Lt_09A2
.Lt_020B:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_09A2:
mov eax, dword ptr [ebp-4]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+4]
mov dword ptr [Lt_09A9], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 480
je .Lt_020D
mov dword ptr [ebp-8], 22
jmp .Lt_09A3
.Lt_020D:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 31
mov dword ptr [ebp-8], ebx
.Lt_09A3:
mov ebx, dword ptr [ebp-8]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx+4]
mov dword ptr [Lt_09AA], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_020F
mov dword ptr [ebp-12], 22
jmp .Lt_09A4
.Lt_020F:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-12], eax
.Lt_09A4:
mov eax, dword ptr [ebp-12]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+8]
test ebx, ebx
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [Lt_09AA]
cmp eax, 4
sete al
shr eax, 1
sbb eax, eax
and ebx, eax
je .Lt_0212
push offset Lt_00A4
call OUTP
add esp, 4
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax], 4
je .Lt_0214
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 0
push -1
push -1
push offset Lt_09A8
push 5
push offset Lt_00A7
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
call OUTP
add esp, 4
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0213
.Lt_0214:
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax+16], 1
jne .Lt_0217
cmp dword ptr [Lt_09A9], 4
jle .Lt_0219
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 0
push -1
push -1
push offset Lt_09A8
push 25
push offset Lt_008A
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
call OUTP
add esp, 4
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
push offset Lt_008D
call OUTP
add esp, 4
jmp .Lt_0218
.Lt_0219:
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 0
push -1
push -1
push offset Lt_09A8
push 24
push offset Lt_008F
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
call OUTP
add esp, 4
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
push offset Lt_0092
call OUTP
add esp, 4
.Lt_0218:
.Lt_0217:
.Lt_0213:
push offset Lt_00B1
call OUTP
add esp, 4
push dword ptr [Lt_09A7]
call HPOP
add esp, 4
push offset Lt_00B2
call OUTP
add esp, 4
jmp .Lt_020A
.Lt_0212:
.Lt_0211:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 4
jne .Lt_021F
mov dword ptr [Lt_09AD], -1
cmp dword ptr [Lt_09AA], 4
jge .Lt_0221
push 0
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax+12]
push 7
call HGETREGNAME
add esp, 8
push eax
push -1
push offset Lt_09A7
call fb_StrAssign
add esp, 20
.Lt_0221:
.Lt_0220:
push 0
push -1
push offset Lt_09A7
push -1
push offset Lt_09AE
call fb_StrAssign
add esp, 20
mov dword ptr [Lt_09AF], -1
jmp .Lt_021E
.Lt_021F:
mov dword ptr [Lt_09AF], 0
push 0
push dword ptr [ebp+12]
call HFINDREGNOTINVREG
add esp, 8
mov dword ptr [Lt_09B0], eax
push 0
push 0
push dword ptr [Lt_09B0]
push 7
call HGETREGNAME
add esp, 8
push eax
push -1
push offset Lt_09AE
call fb_StrAssign
add esp, 20
push 0
push 0
push dword ptr [Lt_09B0]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+4]
call HGETREGNAME
add esp, 8
push eax
push -1
push offset Lt_09B1
call fb_StrAssign
add esp, 20
push dword ptr [Lt_09B0]
push 0
call HISREGFREE
add esp, 8
mov dword ptr [Lt_09AD], eax
cmp dword ptr [Lt_09AD], 0
jne .Lt_0223
push dword ptr [Lt_09AE]
call HPUSH
add esp, 4
.Lt_0223:
.Lt_0222:
.Lt_021E:
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax+16], 0
jne .Lt_0225
push offset Lt_00CB
call OUTP
add esp, 4
cmp dword ptr [Lt_09AA], 2
jne .Lt_0227
push offset Lt_0228
call OUTP
add esp, 4
jmp .Lt_0226
.Lt_0227:
push offset Lt_00CC
call OUTP
add esp, 4
.Lt_0226:
push dword ptr [Lt_09AE]
call HPOP
add esp, 4
jmp .Lt_0224
.Lt_0225:
push 0
push -1
cmp dword ptr [Lt_09A9], 4
jle .Lt_0229
mov dword ptr [ebp-16], 100
jmp .Lt_09A5
.Lt_0229:
mov dword ptr [ebp-16], 115
.Lt_09A5:
push dword ptr [ebp-16]
push 1
call fb_CHR
add esp, 8
push eax
push -1
push offset Lt_09B2
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_022B
mov dword ptr [ebp-20], 22
jmp .Lt_09A6
.Lt_022B:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-20], eax
.Lt_09A6:
mov eax, dword ptr [ebp-20]
imul eax, 28
mov ebx, dword ptr [Lt_09AA]
cmp ebx, 2
sete bl
shr ebx, 1
sbb ebx, ebx
and ebx, dword ptr [SYMB_DTYPETB+eax+8]
je .Lt_022E
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax], 4
je .Lt_0230
cmp dword ptr [Lt_09A9], 4
jle .Lt_0232
mov dword ptr [ebp-152], 0
mov dword ptr [ebp-148], 0
mov dword ptr [ebp-144], 0
push 0
push -1
push -1
push offset Lt_09A8
push 14
push offset Lt_01B6
mov dword ptr [ebp-140], 0
mov dword ptr [ebp-136], 0
mov dword ptr [ebp-132], 0
lea eax, [ebp-140]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-152]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-152]
call OUTP
add esp, 4
lea eax, [ebp-152]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0231
.Lt_0232:
mov dword ptr [ebp-152], 0
mov dword ptr [ebp-148], 0
mov dword ptr [ebp-144], 0
push 0
push -1
push -1
push offset Lt_09A8
push 13
push offset Lt_01BE
mov dword ptr [ebp-140], 0
mov dword ptr [ebp-136], 0
mov dword ptr [ebp-132], 0
lea eax, [ebp-140]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-152]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-152]
call OUTP
add esp, 4
lea eax, [ebp-152]
push eax
call fb_StrDelete
add esp, 4
.Lt_0231:
push 0
push 5
push offset Lt_012B
push -1
push offset Lt_09A8
call fb_StrAssign
add esp, 20
.Lt_0230:
.Lt_022F:
mov dword ptr [ebp-80], 0
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
push 0
push -1
push -1
push offset Lt_09A8
push -1
push 3
push offset Lt_006D
push -1
push 9
push offset Lt_0238
push -1
push -1
push offset Lt_09B2
push 5
push offset Lt_0237
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
push dword ptr [ebp-80]
call OUTP
add esp, 4
lea eax, [ebp-80]
push eax
call fb_StrDelete
add esp, 4
push offset Lt_023E
call OUTP
add esp, 4
mov dword ptr [ebp-128], 0
mov dword ptr [ebp-124], 0
mov dword ptr [ebp-120], 0
push 0
push -1
push 5
push offset Lt_012B
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_09AE
push 6
push offset Lt_023F
mov dword ptr [ebp-92], 0
mov dword ptr [ebp-88], 0
mov dword ptr [ebp-84], 0
lea eax, [ebp-92]
push eax
call fb_StrConcat
add esp, 20
push eax
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
lea eax, [ebp-128]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-128]
call OUTP
add esp, 4
lea eax, [ebp-128]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_022D
.Lt_022E:
push 0
push 0
push 0
push -2147483648
push offset Lt_09A8
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
mov dword ptr [ebp-92], 0
mov dword ptr [ebp-88], 0
mov dword ptr [ebp-84], 0
push 0
push -1
push -1
push offset Lt_09A8
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_09AE
push -1
push 5
push offset Lt_0245
push -1
push -1
push offset Lt_09B2
push 5
push offset Lt_0244
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
mov dword ptr [ebp-80], 0
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
lea eax, [ebp-80]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-92]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-92]
call OUTP
add esp, 4
lea eax, [ebp-92]
push eax
call fb_StrDelete
add esp, 4
.Lt_022D:
.Lt_0224:
cmp dword ptr [Lt_09AF], 0
jne .Lt_024D
cmp dword ptr [Lt_09AA], 4
jne .Lt_024F
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
push 0
push -1
push -1
push offset Lt_09AE
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_09A7
push 5
push offset Lt_00CD
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
push dword ptr [ebp-60]
call OUTP
add esp, 4
lea eax, [ebp-60]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_024E
.Lt_024F:
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
push 0
push -1
push -1
push offset Lt_09B1
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_09A7
push 5
push offset Lt_00CD
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
push dword ptr [ebp-60]
call OUTP
add esp, 4
lea eax, [ebp-60]
push eax
call fb_StrDelete
add esp, 4
.Lt_024E:
cmp dword ptr [Lt_09AD], 0
jne .Lt_0259
push dword ptr [Lt_09AE]
call HPOP
add esp, 4
.Lt_0259:
.Lt_0258:
.Lt_024D:
.Lt_024C:
.Lt_020A:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITLOADF2I_SSE, .-_EMITLOADF2I_SSE

.section .bss
.balign 4
	.lcomm	Lt_09A7,12
.balign 4
	.lcomm	Lt_09A8,12
.balign 4
	.lcomm	Lt_09B2,12
.balign 4
	.lcomm	Lt_09AE,12
.balign 4
	.lcomm	Lt_09B1,12
.balign 4
	.lcomm	Lt_09A9,4
.balign 4
	.lcomm	Lt_09AA,4
.balign 4
	.lcomm	Lt_09AD,4
.balign 4
	.lcomm	Lt_09B0,4
.balign 4
	.lcomm	Lt_09AF,4
.balign 4
	.lcomm	Lt_09B4,4
.balign 4
	.lcomm	Lt_09B5,4

.section .text
.balign 16
_EMITLOADL2F_SSE:
.type _EMITLOADL2F_SSE, @function
push ebp
mov ebp, esp
sub esp, 100
push ebx
.Lt_025A:
push -1
push 0
push 0
push -2147483648
push offset Lt_09B9
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push -1
push 0
push 0
push -2147483648
push offset Lt_09BA
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax]
cmp ebx, 4
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax]
test ecx, ecx
sete cl
shr ecx, 1
sbb ecx, ecx
or ebx, ecx
je .Lt_025D
mov ecx, dword ptr [ebp+12]
mov ebx, dword ptr [ecx+4]
and ebx, 480
je .Lt_025E
mov dword ptr [ebp-56], 22
jmp .Lt_09B6
.Lt_025E:
mov ebx, dword ptr [ebp+12]
mov ecx, dword ptr [ebx+4]
and ecx, 31
mov dword ptr [ebp-56], ecx
.Lt_09B6:
mov ecx, dword ptr [ebp-56]
imul ecx, 28
cmp dword ptr [SYMB_DTYPETB+ecx+8], 0
je .Lt_0261
push offset Lt_09BD
push offset Lt_09BA
push dword ptr [ebp+12]
call HPREPOPERAND64
add esp, 12
push dword ptr [Lt_09BD]
call HPUSH
add esp, 4
push dword ptr [Lt_09BA]
call HPUSH
add esp, 4
push 0
push -1
push 7
push offset Lt_00FB
push -1
push 12
mov ecx, dword ptr [ebp+12]
mov ebx, dword ptr [ecx+4]
sal ebx, 4
lea ecx, [DTYPETB+ebx+4]
push ecx
push 6
push offset Lt_00FA
mov dword ptr [ebp-68], 0
mov dword ptr [ebp-64], 0
mov dword ptr [ebp-60], 0
lea ecx, [ebp-68]
push ecx
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
push offset Lt_09BE
call fb_StrAssign
add esp, 20
push dword ptr [Lt_09BE]
call OUTP
add esp, 4
push offset Lt_00C4
call OUTP
add esp, 4
jmp .Lt_0260
.Lt_0261:
push offset Lt_09BD
push offset Lt_09BA
push dword ptr [ebp+12]
call HPREPOPERAND64
add esp, 12
push dword ptr [Lt_09BD]
call HPUSH
add esp, 4
push dword ptr [Lt_09BA]
call HPUSH
add esp, 4
push offset Lt_00FE
call OUTP
add esp, 4
push offset Lt_00C4
call OUTP
add esp, 4
push dword ptr [ebp+12]
call HULONG2DBL
add esp, 4
.Lt_0260:
jmp .Lt_025C
.Lt_025D:
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax+4]
and ecx, 480
je .Lt_0264
mov dword ptr [ebp-56], 22
jmp .Lt_09B7
.Lt_0264:
mov ecx, dword ptr [ebp+12]
mov eax, dword ptr [ecx+4]
and eax, 31
mov dword ptr [ebp-56], eax
.Lt_09B7:
mov eax, dword ptr [ebp-56]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+8], 0
je .Lt_0267
push 0
push 6
push offset Lt_00FA
push -1
push offset Lt_09BE
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_09BA
push -1
push offset Lt_09BE
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_09BE]
call OUTP
add esp, 4
jmp .Lt_0266
.Lt_0267:
push 0
push 6
push offset Lt_00FA
push -1
push offset Lt_09BE
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_09BA
push -1
push offset Lt_09BE
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_09BE]
call OUTP
add esp, 4
push dword ptr [ebp+12]
call HULONG2DBL
add esp, 4
.Lt_0266:
.Lt_025C:
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+4]
and ecx, 480
je .Lt_0268
mov dword ptr [ebp-4], 22
jmp .Lt_09B8
.Lt_0268:
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ecx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_09B8:
mov eax, dword ptr [ebp-4]
imul eax, 28
mov ecx, dword ptr [SYMB_DTYPETB+eax+4]
mov dword ptr [Lt_09BF], ecx
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
push 0
push -1
push -1
push dword ptr [Lt_09BF]
call fb_IntToStr
add esp, 4
push eax
push 10
push offset Lt_0084
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
push dword ptr [ebp-28]
call OUTP
add esp, 4
lea eax, [ebp-28]
push eax
call fb_StrDelete
add esp, 4
cmp dword ptr [Lt_09BF], 4
jle .Lt_026D
push offset Lt_026E
call OUTP
add esp, 4
mov dword ptr [ebp-100], 0
mov dword ptr [ebp-96], 0
mov dword ptr [ebp-92], 0
push 0
push -1
push 16
push offset Lt_026F
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_09B9
push 8
push offset Lt_012A
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
push -1
lea eax, [ebp-100]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-100]
call OUTP
add esp, 4
lea eax, [ebp-100]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_026C
.Lt_026D:
push offset Lt_0274
call OUTP
add esp, 4
mov dword ptr [ebp-100], 0
mov dword ptr [ebp-96], 0
mov dword ptr [ebp-92], 0
push 0
push -1
push 16
push offset Lt_00CE
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_09B9
push 7
push offset Lt_0134
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
push -1
lea eax, [ebp-100]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-100]
call OUTP
add esp, 4
lea eax, [ebp-100]
push eax
call fb_StrDelete
add esp, 4
.Lt_026C:
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
push 0
push -1
push -1
push dword ptr [Lt_09BF]
call fb_IntToStr
add esp, 4
push eax
push 10
push offset Lt_0094
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
call OUTP
add esp, 4
lea eax, [ebp-52]
push eax
call fb_StrDelete
add esp, 4
.Lt_025B:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITLOADL2F_SSE, .-_EMITLOADL2F_SSE

.section .bss
.balign 4
	.lcomm	Lt_09B9,12
.balign 4
	.lcomm	Lt_09BA,12
.balign 4
	.lcomm	Lt_09BD,12
.balign 4
	.lcomm	Lt_09BE,12
.balign 4
	.lcomm	Lt_09BF,4

.section .text
.balign 16
_EMITLOADI2F_SSE:
.type _EMITLOADI2F_SSE, @function
push ebp
mov ebp, esp
sub esp, 492
push ebx
.Lt_027B:
push -1
push 0
push 0
push -2147483648
push offset Lt_09C4
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push -1
push 0
push 0
push -2147483648
push offset Lt_09C5
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_027D
mov dword ptr [ebp-4], 22
jmp .Lt_09C0
.Lt_027D:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_09C0:
mov eax, dword ptr [ebp-4]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+4]
mov dword ptr [Lt_09C6], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 480
je .Lt_027F
mov dword ptr [ebp-8], 22
jmp .Lt_09C1
.Lt_027F:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 31
mov dword ptr [ebp-8], ebx
.Lt_09C1:
mov ebx, dword ptr [ebp-8]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx+4]
mov dword ptr [Lt_09C7], eax
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_0281
mov dword ptr [ebp-12], 22
jmp .Lt_09C2
.Lt_0281:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-12], eax
.Lt_09C2:
mov eax, dword ptr [ebp-12]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+8]
test ebx, ebx
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [Lt_09C6]
cmp eax, 4
sete al
shr eax, 1
sbb eax, eax
and ebx, eax
je .Lt_0284
push 0
push dword ptr [ebp+12]
call HFINDREGNOTINVREG
add esp, 8
mov dword ptr [Lt_09CA], eax
push 0
push 0
push dword ptr [Lt_09CA]
push 7
call HGETREGNAME
add esp, 8
push eax
push -1
push offset Lt_09CB
call fb_StrAssign
add esp, 20
push dword ptr [Lt_09CA]
push 0
call HISREGFREE
add esp, 8
mov dword ptr [Lt_09CC], eax
cmp dword ptr [Lt_09CC], 0
jne .Lt_0286
push dword ptr [Lt_09CB]
call HPUSH
add esp, 4
.Lt_0286:
.Lt_0285:
cmp dword ptr [Lt_09C7], 4
jle .Lt_0288
push 13
push 1089470464
push 0
call SYMBALLOCINTCONST
add esp, 12
mov dword ptr [Lt_09CD], eax
mov eax, dword ptr [Lt_09CD]
push dword ptr [eax+48]
push dword ptr [eax+44]
push dword ptr [Lt_09CD]
push 0
push 13
call dword ptr [IR+248]
add esp, 20
mov dword ptr [Lt_09CE], eax
push 0
push 4
push offset Lt_0289
push -1
push offset Lt_09CF
call fb_StrAssign
add esp, 20
jmp .Lt_0287
.Lt_0288:
push 8
push 0
push 1199570944
call SYMBALLOCINTCONST
add esp, 12
mov dword ptr [Lt_09CD], eax
mov eax, dword ptr [Lt_09CD]
push dword ptr [eax+48]
push dword ptr [eax+44]
push dword ptr [Lt_09CD]
push 0
push 8
call dword ptr [IR+248]
add esp, 20
mov dword ptr [Lt_09CE], eax
push 0
push 4
push offset Lt_028A
push -1
push offset Lt_09CF
call fb_StrAssign
add esp, 20
.Lt_0287:
mov eax, dword ptr [Lt_09CD]
mov dword ptr [eax+96], 16
mov dword ptr [ebp-108], 0
mov dword ptr [ebp-104], 0
mov dword ptr [ebp-100], 0
push 0
push -1
push -1
push offset Lt_09C5
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_09CB
push 5
push offset Lt_00CD
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
push dword ptr [ebp-108]
call OUTP
add esp, 4
lea eax, [ebp-108]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-156], 0
mov dword ptr [ebp-152], 0
mov dword ptr [ebp-148], 0
push 0
push -1
push 7
push offset Lt_0290
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_09CB
push 5
push offset Lt_028F
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
push -1
lea eax, [ebp-156]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-156]
call OUTP
add esp, 4
lea eax, [ebp-156]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-216], 0
mov dword ptr [ebp-212], 0
mov dword ptr [ebp-208], 0
push 0
push -1
push -1
push offset Lt_09CB
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_09C4
push -1
push -1
push offset Lt_09CF
push 7
push offset Lt_0295
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
push -1
lea eax, [ebp-216]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-216]
call OUTP
add esp, 4
lea eax, [ebp-216]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-264], 0
mov dword ptr [ebp-260], 0
mov dword ptr [ebp-256], 0
push 0
push -1
push -1
push offset Lt_09C5
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_09CB
push 5
push offset Lt_00CD
mov dword ptr [ebp-228], 0
mov dword ptr [ebp-224], 0
mov dword ptr [ebp-220], 0
lea eax, [ebp-228]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-240], 0
mov dword ptr [ebp-236], 0
mov dword ptr [ebp-232], 0
lea eax, [ebp-240]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-252], 0
mov dword ptr [ebp-248], 0
mov dword ptr [ebp-244], 0
lea eax, [ebp-252]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-264]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-264]
call OUTP
add esp, 4
lea eax, [ebp-264]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-312], 0
mov dword ptr [ebp-308], 0
mov dword ptr [ebp-304], 0
push 0
push -1
push 3
push offset Lt_02A0
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_09CB
push 5
push offset Lt_029F
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
push dword ptr [ebp-312]
call OUTP
add esp, 4
lea eax, [ebp-312]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-372], 0
mov dword ptr [ebp-368], 0
mov dword ptr [ebp-364], 0
push 0
push -1
push -1
push offset Lt_09CB
push -1
push 3
push offset Lt_006D
push -1
push 5
push offset Lt_012B
push -1
push -1
push offset Lt_09CF
push 7
push offset Lt_0295
mov dword ptr [ebp-324], 0
mov dword ptr [ebp-320], 0
mov dword ptr [ebp-316], 0
lea eax, [ebp-324]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-336], 0
mov dword ptr [ebp-332], 0
mov dword ptr [ebp-328], 0
lea eax, [ebp-336]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-348], 0
mov dword ptr [ebp-344], 0
mov dword ptr [ebp-340], 0
lea eax, [ebp-348]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-360], 0
mov dword ptr [ebp-356], 0
mov dword ptr [ebp-352], 0
lea eax, [ebp-360]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-372]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-372]
call OUTP
add esp, 4
lea eax, [ebp-372]
push eax
call fb_StrDelete
add esp, 4
push -1
push 0
push 0
push -2147483648
push offset Lt_09C5
push dword ptr [Lt_09CE]
call HPREPOPERAND
add esp, 24
mov dword ptr [ebp-432], 0
mov dword ptr [ebp-428], 0
mov dword ptr [ebp-424], 0
push 0
push -1
push -1
push offset Lt_09C5
push -1
push 3
push offset Lt_006D
push -1
push 5
push offset Lt_012B
push -1
push -1
push offset Lt_09CF
push 4
push offset Lt_02AA
mov dword ptr [ebp-384], 0
mov dword ptr [ebp-380], 0
mov dword ptr [ebp-376], 0
lea eax, [ebp-384]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-396], 0
mov dword ptr [ebp-392], 0
mov dword ptr [ebp-388], 0
lea eax, [ebp-396]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-408], 0
mov dword ptr [ebp-404], 0
mov dword ptr [ebp-400], 0
lea eax, [ebp-408]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-420], 0
mov dword ptr [ebp-416], 0
mov dword ptr [ebp-412], 0
lea eax, [ebp-420]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-432]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-432]
call OUTP
add esp, 4
lea eax, [ebp-432]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-492], 0
mov dword ptr [ebp-488], 0
mov dword ptr [ebp-484], 0
push 0
push -1
push 5
push offset Lt_012B
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_09C4
push -1
push -1
push offset Lt_09CF
push 4
push offset Lt_02B0
mov dword ptr [ebp-444], 0
mov dword ptr [ebp-440], 0
mov dword ptr [ebp-436], 0
lea eax, [ebp-444]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-456], 0
mov dword ptr [ebp-452], 0
mov dword ptr [ebp-448], 0
lea eax, [ebp-456]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-468], 0
mov dword ptr [ebp-464], 0
mov dword ptr [ebp-460], 0
lea eax, [ebp-468]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-480], 0
mov dword ptr [ebp-476], 0
mov dword ptr [ebp-472], 0
lea eax, [ebp-480]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-492]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-492]
call OUTP
add esp, 4
lea eax, [ebp-492]
push eax
call fb_StrDelete
add esp, 4
cmp dword ptr [Lt_09CC], 0
jne .Lt_02B7
push dword ptr [Lt_09CB]
call HPOP
add esp, 4
.Lt_02B7:
.Lt_02B6:
jmp .Lt_027C
.Lt_0284:
.Lt_0283:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax]
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [Lt_09C6]
cmp eax, 4
sete al
shr eax, 1
sbb eax, eax
and ebx, eax
je .Lt_02B9
mov dword ptr [Lt_09CC], -1
push 0
push -1
push offset Lt_09C5
push -1
push offset Lt_09CB
call fb_StrAssign
add esp, 20
jmp .Lt_02B8
.Lt_02B9:
push 0
push dword ptr [ebp+12]
call HFINDREGNOTINVREG
add esp, 8
mov dword ptr [Lt_09CA], eax
push 0
push 0
push dword ptr [Lt_09CA]
push 7
call HGETREGNAME
add esp, 8
push eax
push -1
push offset Lt_09CB
call fb_StrAssign
add esp, 20
push dword ptr [Lt_09CA]
push 0
call HISREGFREE
add esp, 8
mov dword ptr [Lt_09CC], eax
cmp dword ptr [Lt_09CC], 0
jne .Lt_02BB
push dword ptr [Lt_09CB]
call HPUSH
add esp, 4
.Lt_02BB:
.Lt_02BA:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax]
test ebx, ebx
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [Lt_09C6]
cmp eax, 4
sete al
shr eax, 1
sbb eax, eax
or ebx, eax
je .Lt_02BD
mov dword ptr [ebp-108], 0
mov dword ptr [ebp-104], 0
mov dword ptr [ebp-100], 0
push 0
push -1
push -1
push offset Lt_09C5
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_09CB
push 5
push offset Lt_00CD
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
push dword ptr [ebp-108]
call OUTP
add esp, 4
lea eax, [ebp-108]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_02BC
.Lt_02BD:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_02C2
mov dword ptr [ebp-64], 22
jmp .Lt_09C3
.Lt_02C2:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-64], eax
.Lt_09C3:
mov eax, dword ptr [ebp-64]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+8], 0
je .Lt_02C5
mov dword ptr [ebp-112], 0
mov dword ptr [ebp-108], 0
mov dword ptr [ebp-104], 0
push 0
push -1
push -1
push offset Lt_09C5
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_09CB
push 7
push offset Lt_011E
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
lea eax, [ebp-112]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-112]
call OUTP
add esp, 4
lea eax, [ebp-112]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_02C4
.Lt_02C5:
mov dword ptr [ebp-112], 0
mov dword ptr [ebp-108], 0
mov dword ptr [ebp-104], 0
push 0
push -1
push -1
push offset Lt_09C5
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_09CB
push 7
push offset Lt_011F
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
lea eax, [ebp-112]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-112]
call OUTP
add esp, 4
lea eax, [ebp-112]
push eax
call fb_StrDelete
add esp, 4
.Lt_02C4:
.Lt_02BC:
.Lt_02B8:
cmp dword ptr [Lt_09C7], 4
jle .Lt_02CF
mov dword ptr [ebp-108], 0
mov dword ptr [ebp-104], 0
mov dword ptr [ebp-100], 0
push 0
push -1
push -1
push offset Lt_09CB
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_09C4
push 10
push offset Lt_02D0
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
push dword ptr [ebp-108]
call OUTP
add esp, 4
lea eax, [ebp-108]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_02CE
.Lt_02CF:
mov dword ptr [ebp-108], 0
mov dword ptr [ebp-104], 0
mov dword ptr [ebp-100], 0
push 0
push -1
push -1
push offset Lt_09CB
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_09C4
push 10
push offset Lt_02D5
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
push dword ptr [ebp-108]
call OUTP
add esp, 4
lea eax, [ebp-108]
push eax
call fb_StrDelete
add esp, 4
.Lt_02CE:
cmp dword ptr [Lt_09CC], 0
jne .Lt_02DB
push dword ptr [Lt_09CB]
call HPOP
add esp, 4
.Lt_02DB:
.Lt_02DA:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+16], 1
jne .Lt_02DD
jmp .Lt_027C
.Lt_02DD:
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 0
push -1
push -1
push dword ptr [Lt_09C7]
call fb_IntToStr
add esp, 4
push eax
push 10
push offset Lt_0084
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
call OUTP
add esp, 4
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
cmp dword ptr [Lt_09C7], 4
jle .Lt_02E1
mov dword ptr [ebp-84], 0
mov dword ptr [ebp-80], 0
mov dword ptr [ebp-76], 0
push 0
push -1
push -1
push offset Lt_09C4
push 15
push offset Lt_02E3
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
push dword ptr [ebp-84]
call OUTP
add esp, 4
lea eax, [ebp-84]
push eax
call fb_StrDelete
add esp, 4
push offset Lt_008D
call OUTP
add esp, 4
jmp .Lt_02E0
.Lt_02E1:
mov dword ptr [ebp-84], 0
mov dword ptr [ebp-80], 0
mov dword ptr [ebp-76], 0
push 0
push -1
push -1
push offset Lt_09C4
push 14
push offset Lt_02E7
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
push dword ptr [ebp-84]
call OUTP
add esp, 4
lea eax, [ebp-84]
push eax
call fb_StrDelete
add esp, 4
push offset Lt_0092
call OUTP
add esp, 4
.Lt_02E0:
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
push 0
push -1
push -1
push dword ptr [Lt_09C7]
call fb_IntToStr
add esp, 4
push eax
push 10
push offset Lt_0094
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
push dword ptr [ebp-60]
call OUTP
add esp, 4
lea eax, [ebp-60]
push eax
call fb_StrDelete
add esp, 4
.Lt_027C:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITLOADI2F_SSE, .-_EMITLOADI2F_SSE

.section .bss
.balign 4
	.lcomm	Lt_09C4,12
.balign 4
	.lcomm	Lt_09C5,12
.balign 4
	.lcomm	Lt_09C6,4
.balign 4
	.lcomm	Lt_09C7,4
.balign 4
	.lcomm	Lt_09CF,12
.balign 4
	.lcomm	Lt_09CB,12
.balign 4
	.lcomm	Lt_09CC,4
.balign 4
	.lcomm	Lt_09CA,4
.balign 4
	.lcomm	Lt_09CD,4
.balign 4
	.lcomm	Lt_09CE,4

.section .text
.balign 16
_EMITLOADF2F_SSE:
.type _EMITLOADF2F_SSE, @function
push ebp
mov ebp, esp
sub esp, 56
push ebx
.Lt_02EC:
push 0
push 0
push 0
push -2147483648
push offset Lt_09D6
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+16], 0
jne .Lt_02EF
push -1
push 0
push 0
push -2147483648
push offset Lt_09D7
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
push 0
push -1
push -1
push offset Lt_09D7
push 5
push offset Lt_00A7
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
call OUTP
add esp, 4
lea eax, [ebp-32]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_02ED
.Lt_02EF:
.Lt_02EE:
push 0
push 0
push 0
push -2147483648
push offset Lt_09D7
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_02F2
mov dword ptr [ebp-4], 22
jmp .Lt_09D4
.Lt_02F2:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_09D4:
mov eax, dword ptr [ebp-4]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+4]
mov dword ptr [Lt_09D8], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 480
je .Lt_02F4
mov dword ptr [ebp-8], 22
jmp .Lt_09D5
.Lt_02F4:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 31
mov dword ptr [ebp-8], ebx
.Lt_09D5:
mov ebx, dword ptr [ebp-8]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx+4]
mov dword ptr [Lt_09D9], eax
mov eax, dword ptr [Lt_09D9]
cmp dword ptr [Lt_09D8], eax
jne .Lt_02F7
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax+20], 0
je .Lt_02F9
push 0
push 0
push 0
push -2147483648
push offset Lt_09D7
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
cmp dword ptr [Lt_09D9], 4
jle .Lt_02FB
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
push 0
push -1
push -1
push offset Lt_09D7
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_09D6
push 8
push offset Lt_0141
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
push -1
lea eax, [ebp-56]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-56]
call OUTP
add esp, 4
lea eax, [ebp-56]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_02FA
.Lt_02FB:
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax+20], 2
jne .Lt_0301
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
push 0
push -1
push -1
push offset Lt_09D7
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_09D6
push 8
push offset Lt_0148
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
push -1
lea eax, [ebp-56]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-56]
call OUTP
add esp, 4
lea eax, [ebp-56]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0300
.Lt_0301:
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
push 0
push -1
push -1
push offset Lt_09D7
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_09D6
push 8
push offset Lt_015B
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
push -1
lea eax, [ebp-56]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-56]
call OUTP
add esp, 4
lea eax, [ebp-56]
push eax
call fb_StrDelete
add esp, 4
.Lt_0300:
.Lt_02FA:
jmp .Lt_02ED
.Lt_02F9:
.Lt_02F8:
cmp dword ptr [Lt_09D9], 4
jle .Lt_030B
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
push 0
push -1
push -1
push offset Lt_09D7
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_09D6
push 8
push offset Lt_012A
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
push -1
lea eax, [ebp-56]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-56]
call OUTP
add esp, 4
lea eax, [ebp-56]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_030A
.Lt_030B:
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
push 0
push -1
push -1
push offset Lt_09D7
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_09D6
push 7
push offset Lt_0134
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
push -1
lea eax, [ebp-56]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-56]
call OUTP
add esp, 4
lea eax, [ebp-56]
push eax
call fb_StrDelete
add esp, 4
.Lt_030A:
jmp .Lt_02F6
.Lt_02F7:
cmp dword ptr [Lt_09D8], 4
jle .Lt_0314
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax+20], 0
je .Lt_0316
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
push 0
push -1
push -1
push offset Lt_09D7
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_09D6
push 10
push offset Lt_0317
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
push -1
lea eax, [ebp-56]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-56]
call OUTP
add esp, 4
lea eax, [ebp-56]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0315
.Lt_0316:
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
push 0
push -1
push -1
push offset Lt_09D7
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_09D6
push 10
push offset Lt_017D
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
push -1
lea eax, [ebp-56]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-56]
call OUTP
add esp, 4
lea eax, [ebp-56]
push eax
call fb_StrDelete
add esp, 4
.Lt_0315:
jmp .Lt_02F6
.Lt_0314:
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax+20], 0
je .Lt_0321
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
push 0
push -1
push -1
push offset Lt_09D7
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_09D6
push 10
push offset Lt_0322
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
push -1
lea eax, [ebp-56]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-56]
call OUTP
add esp, 4
lea eax, [ebp-56]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0320
.Lt_0321:
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
push 0
push -1
push -1
push offset Lt_09D7
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_09D6
push 10
push offset Lt_0172
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
push -1
lea eax, [ebp-56]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-56]
call OUTP
add esp, 4
lea eax, [ebp-56]
push eax
call fb_StrDelete
add esp, 4
.Lt_0320:
.Lt_02F6:
.Lt_02ED:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITLOADF2F_SSE, .-_EMITLOADF2F_SSE

.section .bss
.balign 4
	.lcomm	Lt_09D7,12
.balign 4
	.lcomm	Lt_09D6,12
.balign 4
	.lcomm	Lt_09D8,4
.balign 4
	.lcomm	Lt_09D9,4

.section .text
.balign 16
_EMITMOVF_SSE:
.type _EMITMOVF_SSE, @function
push ebp
mov ebp, esp
sub esp, 56
push ebx
.Lt_032B:
push 0
push 0
push 0
push -2147483648
push offset Lt_09DC
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push 0
push 0
push 0
push -2147483648
push offset Lt_09DD
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_032D
mov dword ptr [ebp-4], 22
jmp .Lt_09DA
.Lt_032D:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_09DA:
mov eax, dword ptr [ebp-4]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+4]
mov dword ptr [Lt_09DE], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 480
je .Lt_032F
mov dword ptr [ebp-8], 22
jmp .Lt_09DB
.Lt_032F:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 31
mov dword ptr [ebp-8], ebx
.Lt_09DB:
mov ebx, dword ptr [ebp-8]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx+4]
mov dword ptr [Lt_09DF], eax
mov eax, dword ptr [Lt_09DE]
cmp eax, 4
setg al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [Lt_09DF]
cmp ebx, 4
setle bl
shr ebx, 1
sbb ebx, ebx
and eax, ebx
je .Lt_0332
mov ebx, dword ptr [ebp+12]
cmp dword ptr [ebx+20], 0
je .Lt_0334
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
push 0
push -1
push -1
push offset Lt_09DD
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_09DC
push 10
push offset Lt_0317
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
lea ebx, [ebp-20]
push ebx
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
push -1
lea eax, [ebp-56]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-56]
call OUTP
add esp, 4
lea eax, [ebp-56]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0333
.Lt_0334:
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
push 0
push -1
push -1
push offset Lt_09DD
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_09DC
push 10
push offset Lt_017D
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
push -1
lea eax, [ebp-56]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-56]
call OUTP
add esp, 4
lea eax, [ebp-56]
push eax
call fb_StrDelete
add esp, 4
.Lt_0333:
jmp .Lt_0331
.Lt_0332:
mov eax, dword ptr [Lt_09DF]
cmp eax, 4
setg al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [Lt_09DE]
cmp ebx, 4
setle bl
shr ebx, 1
sbb ebx, ebx
and eax, ebx
je .Lt_033D
mov ebx, dword ptr [ebp+12]
cmp dword ptr [ebx+20], 0
je .Lt_033F
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
push 0
push -1
push -1
push offset Lt_09DD
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_09DC
push 10
push offset Lt_0322
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
lea ebx, [ebp-20]
push ebx
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
push -1
lea eax, [ebp-56]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-56]
call OUTP
add esp, 4
lea eax, [ebp-56]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_033E
.Lt_033F:
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
push 0
push -1
push -1
push offset Lt_09DD
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_09DC
push 10
push offset Lt_0172
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
push -1
lea eax, [ebp-56]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-56]
call OUTP
add esp, 4
lea eax, [ebp-56]
push eax
call fb_StrDelete
add esp, 4
.Lt_033E:
jmp .Lt_0331
.Lt_033D:
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
push 0
push -1
push -1
push offset Lt_09DD
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_09DC
push 8
push offset Lt_0348
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
push -1
lea eax, [ebp-56]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-56]
call OUTP
add esp, 4
lea eax, [ebp-56]
push eax
call fb_StrDelete
add esp, 4
.Lt_0331:
.Lt_032C:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITMOVF_SSE, .-_EMITMOVF_SSE

.section .bss
.balign 4
	.lcomm	Lt_09DC,12
.balign 4
	.lcomm	Lt_09DD,12
.balign 4
	.lcomm	Lt_09DE,4
.balign 4
	.lcomm	Lt_09DF,4

.section .text
.balign 16
_EMITSWZREPF_SSE:
.type _EMITSWZREPF_SSE, @function
push ebp
mov ebp, esp
sub esp, 76
push ebx
.Lt_034D:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_034F
mov dword ptr [ebp-4], 22
jmp .Lt_09E4
.Lt_034F:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_09E4:
mov eax, dword ptr [ebp-4]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+4]
mov dword ptr [Lt_09E5], ebx
push -1
push 0
push 0
push -2147483648
push offset Lt_09E6
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
cmp dword ptr [Lt_09E5], 4
jle .Lt_0352
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
push 0
push -1
push -1
push offset Lt_09E6
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_09E6
push 10
push offset Lt_0353
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
lea ebx, [ebp-16]
push ebx
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
push -1
lea eax, [ebp-52]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-52]
call OUTP
add esp, 4
lea eax, [ebp-52]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0351
.Lt_0352:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+20], 2
jne .Lt_0359
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
push 0
push -1
push -1
push offset Lt_09E6
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_09E6
push 10
push offset Lt_035A
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
push -1
lea eax, [ebp-52]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-52]
call OUTP
add esp, 4
lea eax, [ebp-52]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0358
.Lt_0359:
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
push 0
push -1
push 4
push offset Lt_0360
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_09E6
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_09E6
push 8
push offset Lt_035F
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
push dword ptr [ebp-76]
call OUTP
add esp, 4
lea eax, [ebp-76]
push eax
call fb_StrDelete
add esp, 4
.Lt_0358:
.Lt_0351:
.Lt_034E:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITSWZREPF_SSE, .-_EMITSWZREPF_SSE

.section .bss
.balign 4
	.lcomm	Lt_09E6,12
.balign 4
	.lcomm	Lt_09E5,4

.section .text
.balign 16
HEMITCONVERTOPERANDS_SSE:
.type HEMITCONVERTOPERANDS_SSE, @function
push ebp
mov ebp, esp
sub esp, 36
push ebx
mov dword ptr [ebp-4], 0
.Lt_0367:
push -1
push 0
push 0
push -2147483648
push offset Lt_09E9
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push -1
push 0
push 0
push -2147483648
push offset Lt_09EA
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_0369
mov dword ptr [ebp-8], 22
jmp .Lt_09E7
.Lt_0369:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-8], eax
.Lt_09E7:
mov eax, dword ptr [ebp-8]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+4]
mov dword ptr [Lt_09EB], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 480
je .Lt_036B
mov dword ptr [ebp-12], 22
jmp .Lt_09E8
.Lt_036B:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 31
mov dword ptr [ebp-12], ebx
.Lt_09E8:
mov ebx, dword ptr [ebp-12]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx+4]
mov dword ptr [Lt_09EC], eax
mov dword ptr [ebp-4], 0
cmp dword ptr [Lt_09EC], 4
jle .Lt_036E
cmp dword ptr [Lt_09EB], 4
jne .Lt_0370
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax+20], 0
je .Lt_0372
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 0
push -1
push -1
push offset Lt_09EA
push 16
push offset Lt_01DC
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
call OUTP
add esp, 4
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0371
.Lt_0372:
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 0
push -1
push -1
push offset Lt_09EA
push 16
push offset Lt_01E4
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
call OUTP
add esp, 4
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
.Lt_0371:
mov dword ptr [ebp-4], -1
.Lt_0370:
.Lt_036F:
jmp .Lt_036D
.Lt_036E:
cmp dword ptr [Lt_09EB], 4
jle .Lt_0378
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax+20], 0
je .Lt_037A
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 0
push -1
push -1
push offset Lt_09EA
push 16
push offset Lt_01CA
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
call OUTP
add esp, 4
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0379
.Lt_037A:
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 0
push -1
push -1
push offset Lt_09EA
push 16
push offset Lt_01D2
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
call OUTP
add esp, 4
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
.Lt_0379:
mov dword ptr [ebp-4], -1
.Lt_0378:
.Lt_0377:
.Lt_036D:
.Lt_0368:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HEMITCONVERTOPERANDS_SSE, .-HEMITCONVERTOPERANDS_SSE

.section .bss
.balign 4
	.lcomm	Lt_09E9,12
.balign 4
	.lcomm	Lt_09EA,12
.balign 4
	.lcomm	Lt_09ED,12
.balign 4
	.lcomm	Lt_09EB,4
.balign 4
	.lcomm	Lt_09EC,4

.section .text
.balign 16
_EMITADDF_SSE:
.type _EMITADDF_SSE, @function
push ebp
mov ebp, esp
sub esp, 72
push ebx
.Lt_037F:
push -1
push 0
push 0
push -2147483648
push offset Lt_09F1
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push -1
push 0
push 0
push -2147483648
push offset Lt_09F2
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_0381
mov dword ptr [ebp-4], 22
jmp .Lt_09EE
.Lt_0381:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_09EE:
mov eax, dword ptr [ebp-4]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+4]
mov dword ptr [Lt_09F3], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 480
je .Lt_0383
mov dword ptr [ebp-8], 22
jmp .Lt_09EF
.Lt_0383:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 31
mov dword ptr [ebp-8], ebx
.Lt_09EF:
mov ebx, dword ptr [ebp-8]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx+4]
mov dword ptr [Lt_09F4], eax
mov dword ptr [Lt_09F5], 0
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+16], 0
jne .Lt_0386
push 0
push -1
push offset Lt_09F1
push -1
push offset Lt_09F6
call fb_StrAssign
add esp, 20
mov eax, dword ptr [Lt_09F4]
mov dword ptr [Lt_09F5], eax
jmp .Lt_0385
.Lt_0386:
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax+16], 0
jne .Lt_0387
push 0
push -1
push offset Lt_09F2
push -1
push offset Lt_09F6
call fb_StrAssign
add esp, 20
mov eax, dword ptr [Lt_09F3]
mov dword ptr [Lt_09F5], eax
.Lt_0387:
.Lt_0385:
cmp dword ptr [Lt_09F5], 0
je .Lt_0389
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 0
push -1
push -1
push dword ptr [Lt_09F5]
call fb_IntToStr
add esp, 4
push eax
push 10
push offset Lt_0084
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
call OUTP
add esp, 4
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
.Lt_0389:
.Lt_0388:
cmp dword ptr [Lt_09F5], 8
jne .Lt_038D
push offset Lt_026E
call OUTP
add esp, 4
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
push 0
push -1
push 16
push offset Lt_026F
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_09F6
push 8
push offset Lt_012A
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
push dword ptr [ebp-60]
call OUTP
add esp, 4
lea eax, [ebp-60]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_038C
.Lt_038D:
cmp dword ptr [Lt_09F5], 4
jne .Lt_0392
push offset Lt_0274
call OUTP
add esp, 4
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
push 0
push -1
push 16
push offset Lt_00CE
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_09F6
push 7
push offset Lt_0134
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
push dword ptr [ebp-60]
call OUTP
add esp, 4
lea eax, [ebp-60]
push eax
call fb_StrDelete
add esp, 4
.Lt_0392:
.Lt_038C:
cmp dword ptr [Lt_09F5], 0
je .Lt_0398
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 0
push -1
push -1
push dword ptr [Lt_09F5]
call fb_IntToStr
add esp, 4
push eax
push 10
push offset Lt_0094
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
call OUTP
add esp, 4
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
.Lt_0398:
.Lt_0397:
push 0
push 5
push offset Lt_039B
push -1
push offset Lt_09F6
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax+20], 0
je .Lt_039D
push 0
push 5
push offset Lt_039E
push -1
push offset Lt_09F6
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax], 4
je .Lt_03A0
push 0
push 0
push 0
push -2147483648
push offset Lt_09F2
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
cmp dword ptr [Lt_09F3], 4
jle .Lt_03A2
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 0
push -1
push -1
push offset Lt_09F2
push 14
push offset Lt_018D
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
call OUTP
add esp, 4
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_03A1
.Lt_03A2:
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax+20], 2
jne .Lt_03A6
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 0
push -1
push -1
push offset Lt_09F2
push 14
push offset Lt_0197
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
call OUTP
add esp, 4
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_03A5
.Lt_03A6:
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 0
push -1
push -1
push offset Lt_09F2
push 14
push offset Lt_01A0
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
call OUTP
add esp, 4
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
.Lt_03A5:
.Lt_03A1:
push 0
push 5
push offset Lt_012B
push -1
push offset Lt_09F2
call fb_StrAssign
add esp, 20
.Lt_03A0:
.Lt_039F:
.Lt_039D:
.Lt_039C:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HEMITCONVERTOPERANDS_SSE
add esp, 8
test eax, eax
je .Lt_03AC
push 0
push 5
push offset Lt_012B
push -1
push offset Lt_09F2
call fb_StrAssign
add esp, 20
.Lt_03AC:
.Lt_03AB:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_03AD
mov dword ptr [ebp-12], 22
jmp .Lt_09F0
.Lt_03AD:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-12], eax
.Lt_09F0:
mov eax, dword ptr [ebp-12]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax], 1
jne .Lt_03B0
cmp dword ptr [Lt_09F4], 4
jle .Lt_03B2
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
mov dword ptr [ebp-64], 0
push 0
push -1
push -1
push offset Lt_09F2
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_09F1
push -1
push 3
push offset Lt_03B3
push -1
push offset Lt_09F6
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
push -1
lea eax, [ebp-72]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-72]
call OUTP
add esp, 4
lea eax, [ebp-72]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_03B1
.Lt_03B2:
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
mov dword ptr [ebp-64], 0
push 0
push -1
push -1
push offset Lt_09F2
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_09F1
push -1
push 3
push offset Lt_03B9
push -1
push offset Lt_09F6
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
push -1
lea eax, [ebp-72]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-72]
call OUTP
add esp, 4
lea eax, [ebp-72]
push eax
call fb_StrDelete
add esp, 4
.Lt_03B1:
jmp .Lt_03AF
.Lt_03B0:
push offset Lt_03BF
call OUTP
add esp, 4
.Lt_03AF:
.Lt_0380:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITADDF_SSE, .-_EMITADDF_SSE

.section .bss
.balign 4
	.lcomm	Lt_09F1,12
.balign 4
	.lcomm	Lt_09F2,12
.balign 4
	.lcomm	Lt_09F6,12
.balign 4
	.lcomm	Lt_09F3,4
.balign 4
	.lcomm	Lt_09F4,4
.balign 4
	.lcomm	Lt_09F5,4

.section .text
.balign 16
_EMITSUBF_SSE:
.type _EMITSUBF_SSE, @function
push ebp
mov ebp, esp
sub esp, 72
push ebx
.Lt_03C0:
push -1
push 0
push 0
push -2147483648
push offset Lt_09FA
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push -1
push 0
push 0
push -2147483648
push offset Lt_09FB
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_03C2
mov dword ptr [ebp-4], 22
jmp .Lt_09F7
.Lt_03C2:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_09F7:
mov eax, dword ptr [ebp-4]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+4]
mov dword ptr [Lt_09FC], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 480
je .Lt_03C4
mov dword ptr [ebp-8], 22
jmp .Lt_09F8
.Lt_03C4:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 31
mov dword ptr [ebp-8], ebx
.Lt_09F8:
mov ebx, dword ptr [ebp-8]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx+4]
mov dword ptr [Lt_09FD], eax
mov dword ptr [Lt_09FE], 0
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+16], 0
jne .Lt_03C7
push 0
push -1
push offset Lt_09FA
push -1
push offset Lt_09FF
call fb_StrAssign
add esp, 20
mov eax, dword ptr [Lt_09FD]
mov dword ptr [Lt_09FE], eax
jmp .Lt_03C6
.Lt_03C7:
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax+16], 0
jne .Lt_03C8
push 0
push -1
push offset Lt_09FB
push -1
push offset Lt_09FF
call fb_StrAssign
add esp, 20
mov eax, dword ptr [Lt_09FC]
mov dword ptr [Lt_09FE], eax
.Lt_03C8:
.Lt_03C6:
cmp dword ptr [Lt_09FE], 0
je .Lt_03CA
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 0
push -1
push -1
push dword ptr [Lt_09FE]
call fb_IntToStr
add esp, 4
push eax
push 10
push offset Lt_0084
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
call OUTP
add esp, 4
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
.Lt_03CA:
.Lt_03C9:
cmp dword ptr [Lt_09FE], 8
jne .Lt_03CE
push offset Lt_026E
call OUTP
add esp, 4
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
push 0
push -1
push 16
push offset Lt_026F
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_09FF
push 8
push offset Lt_012A
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
push dword ptr [ebp-60]
call OUTP
add esp, 4
lea eax, [ebp-60]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_03CD
.Lt_03CE:
cmp dword ptr [Lt_09FE], 4
jne .Lt_03D3
push offset Lt_0274
call OUTP
add esp, 4
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
push 0
push -1
push 16
push offset Lt_00CE
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_09FF
push 7
push offset Lt_0134
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
push dword ptr [ebp-60]
call OUTP
add esp, 4
lea eax, [ebp-60]
push eax
call fb_StrDelete
add esp, 4
.Lt_03D3:
.Lt_03CD:
cmp dword ptr [Lt_09FE], 0
je .Lt_03D9
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 0
push -1
push -1
push dword ptr [Lt_09FE]
call fb_IntToStr
add esp, 4
push eax
push 10
push offset Lt_0094
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
call OUTP
add esp, 4
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
.Lt_03D9:
.Lt_03D8:
push 0
push 5
push offset Lt_03DC
push -1
push offset Lt_09FF
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax+20], 0
je .Lt_03DE
push 0
push 5
push offset Lt_03DF
push -1
push offset Lt_09FF
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax], 4
je .Lt_03E1
push 0
push 0
push 0
push -2147483648
push offset Lt_09FB
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
cmp dword ptr [Lt_09FC], 4
jle .Lt_03E3
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 0
push -1
push -1
push offset Lt_09FB
push 14
push offset Lt_018D
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
call OUTP
add esp, 4
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_03E2
.Lt_03E3:
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax+20], 2
jne .Lt_03E7
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 0
push -1
push -1
push offset Lt_09FB
push 14
push offset Lt_0197
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
call OUTP
add esp, 4
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_03E6
.Lt_03E7:
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 0
push -1
push -1
push offset Lt_09FB
push 14
push offset Lt_01A0
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
call OUTP
add esp, 4
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
.Lt_03E6:
.Lt_03E2:
push 0
push 5
push offset Lt_012B
push -1
push offset Lt_09FB
call fb_StrAssign
add esp, 20
.Lt_03E1:
.Lt_03E0:
.Lt_03DE:
.Lt_03DD:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HEMITCONVERTOPERANDS_SSE
add esp, 8
test eax, eax
je .Lt_03ED
push 0
push 5
push offset Lt_012B
push -1
push offset Lt_09FB
call fb_StrAssign
add esp, 20
.Lt_03ED:
.Lt_03EC:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_03EE
mov dword ptr [ebp-12], 22
jmp .Lt_09F9
.Lt_03EE:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-12], eax
.Lt_09F9:
mov eax, dword ptr [ebp-12]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax], 1
jne .Lt_03F1
cmp dword ptr [Lt_09FD], 4
jle .Lt_03F3
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
mov dword ptr [ebp-64], 0
push 0
push -1
push -1
push offset Lt_09FB
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_09FA
push -1
push 3
push offset Lt_03B3
push -1
push offset Lt_09FF
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
push -1
lea eax, [ebp-72]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-72]
call OUTP
add esp, 4
lea eax, [ebp-72]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_03F2
.Lt_03F3:
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
mov dword ptr [ebp-64], 0
push 0
push -1
push -1
push offset Lt_09FB
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_09FA
push -1
push 3
push offset Lt_03B9
push -1
push offset Lt_09FF
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
push -1
lea eax, [ebp-72]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-72]
call OUTP
add esp, 4
lea eax, [ebp-72]
push eax
call fb_StrDelete
add esp, 4
.Lt_03F2:
jmp .Lt_03F0
.Lt_03F1:
push offset Lt_03FE
call OUTP
add esp, 4
.Lt_03F0:
.Lt_03C1:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITSUBF_SSE, .-_EMITSUBF_SSE

.section .bss
.balign 4
	.lcomm	Lt_09FA,12
.balign 4
	.lcomm	Lt_09FB,12
.balign 4
	.lcomm	Lt_09FF,12
.balign 4
	.lcomm	Lt_09FC,4
.balign 4
	.lcomm	Lt_09FD,4
.balign 4
	.lcomm	Lt_09FE,4

.section .text
.balign 16
_EMITMULF_SSE:
.type _EMITMULF_SSE, @function
push ebp
mov ebp, esp
sub esp, 72
push ebx
.Lt_03FF:
push -1
push 0
push 0
push -2147483648
push offset Lt_0A03
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push -1
push 0
push 0
push -2147483648
push offset Lt_0A04
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_0401
mov dword ptr [ebp-4], 22
jmp .Lt_0A00
.Lt_0401:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0A00:
mov eax, dword ptr [ebp-4]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+4]
mov dword ptr [Lt_0A05], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 480
je .Lt_0403
mov dword ptr [ebp-8], 22
jmp .Lt_0A01
.Lt_0403:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 31
mov dword ptr [ebp-8], ebx
.Lt_0A01:
mov ebx, dword ptr [ebp-8]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx+4]
mov dword ptr [Lt_0A06], eax
mov dword ptr [Lt_0A07], 0
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+16], 0
jne .Lt_0406
push 0
push -1
push offset Lt_0A03
push -1
push offset Lt_0A08
call fb_StrAssign
add esp, 20
mov eax, dword ptr [Lt_0A06]
mov dword ptr [Lt_0A07], eax
jmp .Lt_0405
.Lt_0406:
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax+16], 0
jne .Lt_0407
push 0
push -1
push offset Lt_0A04
push -1
push offset Lt_0A08
call fb_StrAssign
add esp, 20
mov eax, dword ptr [Lt_0A05]
mov dword ptr [Lt_0A07], eax
.Lt_0407:
.Lt_0405:
cmp dword ptr [Lt_0A07], 0
je .Lt_0409
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 0
push -1
push -1
push dword ptr [Lt_0A07]
call fb_IntToStr
add esp, 4
push eax
push 10
push offset Lt_0084
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
call OUTP
add esp, 4
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
.Lt_0409:
.Lt_0408:
cmp dword ptr [Lt_0A07], 8
jne .Lt_040D
push offset Lt_026E
call OUTP
add esp, 4
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
push 0
push -1
push 16
push offset Lt_026F
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A08
push 8
push offset Lt_012A
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
push dword ptr [ebp-60]
call OUTP
add esp, 4
lea eax, [ebp-60]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_040C
.Lt_040D:
cmp dword ptr [Lt_0A07], 4
jne .Lt_0412
push offset Lt_0274
call OUTP
add esp, 4
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
push 0
push -1
push 16
push offset Lt_00CE
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A08
push 7
push offset Lt_0134
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
push dword ptr [ebp-60]
call OUTP
add esp, 4
lea eax, [ebp-60]
push eax
call fb_StrDelete
add esp, 4
.Lt_0412:
.Lt_040C:
cmp dword ptr [Lt_0A07], 0
je .Lt_0418
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 0
push -1
push -1
push dword ptr [Lt_0A07]
call fb_IntToStr
add esp, 4
push eax
push 10
push offset Lt_0094
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
call OUTP
add esp, 4
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
.Lt_0418:
.Lt_0417:
push 0
push 5
push offset Lt_041B
push -1
push offset Lt_0A08
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax+20], 0
je .Lt_041D
push 0
push 5
push offset Lt_041E
push -1
push offset Lt_0A08
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax], 4
je .Lt_0420
push 0
push 0
push 0
push -2147483648
push offset Lt_0A04
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
cmp dword ptr [Lt_0A05], 4
jle .Lt_0422
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 0
push -1
push -1
push offset Lt_0A04
push 14
push offset Lt_018D
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
call OUTP
add esp, 4
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0421
.Lt_0422:
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax+20], 2
jne .Lt_0426
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 0
push -1
push -1
push offset Lt_0A04
push 14
push offset Lt_0197
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
call OUTP
add esp, 4
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0425
.Lt_0426:
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 0
push -1
push -1
push offset Lt_0A04
push 14
push offset Lt_01A0
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
call OUTP
add esp, 4
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
.Lt_0425:
.Lt_0421:
push 0
push 5
push offset Lt_012B
push -1
push offset Lt_0A04
call fb_StrAssign
add esp, 20
.Lt_0420:
.Lt_041F:
.Lt_041D:
.Lt_041C:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HEMITCONVERTOPERANDS_SSE
add esp, 8
test eax, eax
je .Lt_042C
push 0
push 5
push offset Lt_012B
push -1
push offset Lt_0A04
call fb_StrAssign
add esp, 20
.Lt_042C:
.Lt_042B:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_042D
mov dword ptr [ebp-12], 22
jmp .Lt_0A02
.Lt_042D:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-12], eax
.Lt_0A02:
mov eax, dword ptr [ebp-12]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax], 1
jne .Lt_0430
cmp dword ptr [Lt_0A06], 4
jle .Lt_0432
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
mov dword ptr [ebp-64], 0
push 0
push -1
push -1
push offset Lt_0A04
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A03
push -1
push 3
push offset Lt_03B3
push -1
push offset Lt_0A08
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
push -1
lea eax, [ebp-72]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-72]
call OUTP
add esp, 4
lea eax, [ebp-72]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0431
.Lt_0432:
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
mov dword ptr [ebp-64], 0
push 0
push -1
push -1
push offset Lt_0A04
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A03
push -1
push 3
push offset Lt_03B9
push -1
push offset Lt_0A08
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
push -1
lea eax, [ebp-72]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-72]
call OUTP
add esp, 4
lea eax, [ebp-72]
push eax
call fb_StrDelete
add esp, 4
.Lt_0431:
jmp .Lt_042F
.Lt_0430:
push offset Lt_043D
call OUTP
add esp, 4
.Lt_042F:
.Lt_0400:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITMULF_SSE, .-_EMITMULF_SSE

.section .bss
.balign 4
	.lcomm	Lt_0A03,12
.balign 4
	.lcomm	Lt_0A04,12
.balign 4
	.lcomm	Lt_0A08,12
.balign 4
	.lcomm	Lt_0A05,4
.balign 4
	.lcomm	Lt_0A06,4
.balign 4
	.lcomm	Lt_0A07,4

.section .text
.balign 16
_EMITDIVF_SSE:
.type _EMITDIVF_SSE, @function
push ebp
mov ebp, esp
sub esp, 72
push ebx
.Lt_043E:
push -1
push 0
push 0
push -2147483648
push offset Lt_0A0C
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push -1
push 0
push 0
push -2147483648
push offset Lt_0A0D
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_0440
mov dword ptr [ebp-4], 22
jmp .Lt_0A09
.Lt_0440:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0A09:
mov eax, dword ptr [ebp-4]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+4]
mov dword ptr [Lt_0A0E], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 480
je .Lt_0442
mov dword ptr [ebp-8], 22
jmp .Lt_0A0A
.Lt_0442:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 31
mov dword ptr [ebp-8], ebx
.Lt_0A0A:
mov ebx, dword ptr [ebp-8]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx+4]
mov dword ptr [Lt_0A0F], eax
mov dword ptr [Lt_0A10], 0
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+16], 0
jne .Lt_0445
push 0
push -1
push offset Lt_0A0C
push -1
push offset Lt_0A11
call fb_StrAssign
add esp, 20
mov eax, dword ptr [Lt_0A0F]
mov dword ptr [Lt_0A10], eax
jmp .Lt_0444
.Lt_0445:
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax+16], 0
jne .Lt_0446
push 0
push -1
push offset Lt_0A0D
push -1
push offset Lt_0A11
call fb_StrAssign
add esp, 20
mov eax, dword ptr [Lt_0A0E]
mov dword ptr [Lt_0A10], eax
.Lt_0446:
.Lt_0444:
cmp dword ptr [Lt_0A10], 0
je .Lt_0448
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 0
push -1
push -1
push dword ptr [Lt_0A10]
call fb_IntToStr
add esp, 4
push eax
push 10
push offset Lt_0084
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
call OUTP
add esp, 4
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
.Lt_0448:
.Lt_0447:
cmp dword ptr [Lt_0A10], 8
jne .Lt_044C
push offset Lt_026E
call OUTP
add esp, 4
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
push 0
push -1
push 16
push offset Lt_026F
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A11
push 8
push offset Lt_012A
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
push dword ptr [ebp-60]
call OUTP
add esp, 4
lea eax, [ebp-60]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_044B
.Lt_044C:
cmp dword ptr [Lt_0A10], 4
jne .Lt_0451
push offset Lt_0274
call OUTP
add esp, 4
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
push 0
push -1
push 16
push offset Lt_00CE
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A11
push 7
push offset Lt_0134
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
push dword ptr [ebp-60]
call OUTP
add esp, 4
lea eax, [ebp-60]
push eax
call fb_StrDelete
add esp, 4
.Lt_0451:
.Lt_044B:
cmp dword ptr [Lt_0A10], 0
je .Lt_0457
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 0
push -1
push -1
push dword ptr [Lt_0A10]
call fb_IntToStr
add esp, 4
push eax
push 10
push offset Lt_0094
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
call OUTP
add esp, 4
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
.Lt_0457:
.Lt_0456:
push 0
push 5
push offset Lt_045A
push -1
push offset Lt_0A11
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax+20], 0
je .Lt_045C
push 0
push 5
push offset Lt_045D
push -1
push offset Lt_0A11
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax], 4
je .Lt_045F
push 0
push 0
push 0
push -2147483648
push offset Lt_0A0D
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
cmp dword ptr [Lt_0A0E], 4
jle .Lt_0461
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 0
push -1
push -1
push offset Lt_0A0D
push 14
push offset Lt_018D
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
call OUTP
add esp, 4
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0460
.Lt_0461:
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax+20], 2
jne .Lt_0465
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 0
push -1
push -1
push offset Lt_0A0D
push 14
push offset Lt_0197
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
call OUTP
add esp, 4
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0464
.Lt_0465:
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 0
push -1
push -1
push offset Lt_0A0D
push 14
push offset Lt_01A0
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
call OUTP
add esp, 4
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
.Lt_0464:
.Lt_0460:
push 0
push 5
push offset Lt_012B
push -1
push offset Lt_0A0D
call fb_StrAssign
add esp, 20
.Lt_045F:
.Lt_045E:
.Lt_045C:
.Lt_045B:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HEMITCONVERTOPERANDS_SSE
add esp, 8
test eax, eax
je .Lt_046B
push 0
push 5
push offset Lt_012B
push -1
push offset Lt_0A0D
call fb_StrAssign
add esp, 20
.Lt_046B:
.Lt_046A:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_046C
mov dword ptr [ebp-12], 22
jmp .Lt_0A0B
.Lt_046C:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-12], eax
.Lt_0A0B:
mov eax, dword ptr [ebp-12]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax], 1
jne .Lt_046F
cmp dword ptr [Lt_0A0F], 4
jle .Lt_0471
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
mov dword ptr [ebp-64], 0
push 0
push -1
push -1
push offset Lt_0A0D
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A0C
push -1
push 3
push offset Lt_03B3
push -1
push offset Lt_0A11
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
push -1
lea eax, [ebp-72]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-72]
call OUTP
add esp, 4
lea eax, [ebp-72]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0470
.Lt_0471:
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
mov dword ptr [ebp-64], 0
push 0
push -1
push -1
push offset Lt_0A0D
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A0C
push -1
push 3
push offset Lt_03B9
push -1
push offset Lt_0A11
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
push -1
lea eax, [ebp-72]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-72]
call OUTP
add esp, 4
lea eax, [ebp-72]
push eax
call fb_StrDelete
add esp, 4
.Lt_0470:
jmp .Lt_046E
.Lt_046F:
push offset Lt_047C
call OUTP
add esp, 4
.Lt_046E:
.Lt_043F:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITDIVF_SSE, .-_EMITDIVF_SSE

.section .bss
.balign 4
	.lcomm	Lt_0A0C,12
.balign 4
	.lcomm	Lt_0A0D,12
.balign 4
	.lcomm	Lt_0A11,12
.balign 4
	.lcomm	Lt_0A0E,4
.balign 4
	.lcomm	Lt_0A0F,4
.balign 4
	.lcomm	Lt_0A10,4

.section .text
.balign 16
_EMITATN2_SSE:
.type _EMITATN2_SSE, @function
push ebp
mov ebp, esp
sub esp, 56
push ebx
.Lt_047D:
push -1
push 0
push 0
push -2147483648
push offset Lt_0A14
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
push -1
push 0
push 0
push -2147483648
push offset Lt_0A15
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_047F
mov dword ptr [ebp-4], 22
jmp .Lt_0A12
.Lt_047F:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0A12:
mov eax, dword ptr [ebp-4]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+4]
mov dword ptr [Lt_0A16], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 480
je .Lt_0481
mov dword ptr [ebp-8], 22
jmp .Lt_0A13
.Lt_0481:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 31
mov dword ptr [ebp-8], ebx
.Lt_0A13:
mov ebx, dword ptr [ebp-8]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx+4]
mov dword ptr [Lt_0A17], eax
mov dword ptr [Lt_0A18], 0
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 4
jne .Lt_0484
push offset Lt_00A4
call OUTP
add esp, 4
mov dword ptr [Lt_0A18], -1
cmp dword ptr [Lt_0A17], 4
jle .Lt_0486
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
push 0
push -1
push -1
push offset Lt_0A15
push 25
push offset Lt_008A
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
call OUTP
add esp, 4
lea eax, [ebp-32]
push eax
call fb_StrDelete
add esp, 4
push offset Lt_008D
call OUTP
add esp, 4
jmp .Lt_0485
.Lt_0486:
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
push 0
push -1
push -1
push offset Lt_0A15
push 24
push offset Lt_008F
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
call OUTP
add esp, 4
lea eax, [ebp-32]
push eax
call fb_StrDelete
add esp, 4
push offset Lt_0092
call OUTP
add esp, 4
.Lt_0485:
jmp .Lt_0483
.Lt_0484:
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
push 0
push -1
push -1
push offset Lt_0A15
push 5
push offset Lt_00A7
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
call OUTP
add esp, 4
lea eax, [ebp-32]
push eax
call fb_StrDelete
add esp, 4
.Lt_0483:
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax], 4
jne .Lt_048E
cmp dword ptr [Lt_0A18], 0
jne .Lt_0490
push offset Lt_00A4
call OUTP
add esp, 4
mov dword ptr [Lt_0A18], -1
.Lt_0490:
.Lt_048F:
cmp dword ptr [Lt_0A16], 4
jle .Lt_0492
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
push 0
push -1
push -1
push offset Lt_0A14
push 25
push offset Lt_008A
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
call OUTP
add esp, 4
lea eax, [ebp-32]
push eax
call fb_StrDelete
add esp, 4
push offset Lt_008D
call OUTP
add esp, 4
jmp .Lt_0491
.Lt_0492:
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
push 0
push -1
push -1
push offset Lt_0A14
push 24
push offset Lt_008F
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
call OUTP
add esp, 4
lea eax, [ebp-32]
push eax
call fb_StrDelete
add esp, 4
push offset Lt_0092
call OUTP
add esp, 4
.Lt_0491:
jmp .Lt_048D
.Lt_048E:
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
push 0
push -1
push -1
push offset Lt_0A14
push 5
push offset Lt_00A7
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
call OUTP
add esp, 4
lea eax, [ebp-32]
push eax
call fb_StrDelete
add esp, 4
.Lt_048D:
push offset Lt_0499
call OUTP
add esp, 4
cmp dword ptr [Lt_0A17], 4
jle .Lt_049B
push offset Lt_026E
call OUTP
add esp, 4
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
push 0
push -1
push 16
push offset Lt_026F
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A15
push 8
push offset Lt_012A
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
push -1
lea eax, [ebp-56]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-56]
call OUTP
add esp, 4
lea eax, [ebp-56]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_049A
.Lt_049B:
push offset Lt_0274
call OUTP
add esp, 4
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
push 0
push -1
push 16
push offset Lt_00CE
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A15
push 7
push offset Lt_0134
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
push -1
lea eax, [ebp-56]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-56]
call OUTP
add esp, 4
lea eax, [ebp-56]
push eax
call fb_StrDelete
add esp, 4
.Lt_049A:
cmp dword ptr [Lt_0A18], 0
je .Lt_04A5
push offset Lt_00C4
call OUTP
add esp, 4
.Lt_04A5:
.Lt_04A4:
.Lt_047E:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITATN2_SSE, .-_EMITATN2_SSE

.section .bss
.balign 4
	.lcomm	Lt_0A14,12
.balign 4
	.lcomm	Lt_0A15,12
.balign 4
	.lcomm	Lt_0A19,12
.balign 4
	.lcomm	Lt_0A16,4
.balign 4
	.lcomm	Lt_0A17,4
.balign 4
	.lcomm	Lt_0A18,4

.section .text
.balign 16
_EMITPOW_SSE:
.type _EMITPOW_SSE, @function
push ebp
mov ebp, esp
sub esp, 48
.Lt_04A6:
push -1
push 0
push 0
push -2147483648
push offset Lt_0A1A
push dword ptr [ebp+12]
call HPREPOPERAND
add esp, 24
push -1
push 0
push 0
push -2147483648
push offset Lt_0A1B
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
mov dword ptr [Lt_0A1C], 0
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 4
jne .Lt_04A9
push offset Lt_00A4
call OUTP
add esp, 4
mov dword ptr [Lt_0A1C], -1
cmp dword ptr [Lt_0A1D], 4
jle .Lt_04AB
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
push 0
push -1
push -1
push offset Lt_0A1B
push 25
push offset Lt_008A
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
call OUTP
add esp, 4
lea eax, [ebp-24]
push eax
call fb_StrDelete
add esp, 4
push offset Lt_008D
call OUTP
add esp, 4
jmp .Lt_04AA
.Lt_04AB:
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
push 0
push -1
push -1
push offset Lt_0A1B
push 24
push offset Lt_008F
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
call OUTP
add esp, 4
lea eax, [ebp-24]
push eax
call fb_StrDelete
add esp, 4
push offset Lt_0092
call OUTP
add esp, 4
.Lt_04AA:
jmp .Lt_04A8
.Lt_04A9:
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
push 0
push -1
push -1
push offset Lt_0A1B
push 5
push offset Lt_00A7
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
call OUTP
add esp, 4
lea eax, [ebp-24]
push eax
call fb_StrDelete
add esp, 4
.Lt_04A8:
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax], 4
jne .Lt_04B3
cmp dword ptr [Lt_0A1C], 0
jne .Lt_04B5
push offset Lt_00A4
call OUTP
add esp, 4
mov dword ptr [Lt_0A1C], -1
.Lt_04B5:
.Lt_04B4:
cmp dword ptr [Lt_0A1E], 4
jle .Lt_04B7
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
push 0
push -1
push -1
push offset Lt_0A1A
push 25
push offset Lt_008A
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
call OUTP
add esp, 4
lea eax, [ebp-24]
push eax
call fb_StrDelete
add esp, 4
push offset Lt_008D
call OUTP
add esp, 4
jmp .Lt_04B6
.Lt_04B7:
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
push 0
push -1
push -1
push offset Lt_0A1A
push 24
push offset Lt_008F
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
call OUTP
add esp, 4
lea eax, [ebp-24]
push eax
call fb_StrDelete
add esp, 4
push offset Lt_0092
call OUTP
add esp, 4
.Lt_04B6:
jmp .Lt_04B2
.Lt_04B3:
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
push 0
push -1
push -1
push offset Lt_0A1A
push 5
push offset Lt_00A7
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
call OUTP
add esp, 4
lea eax, [ebp-24]
push eax
call fb_StrDelete
add esp, 4
.Lt_04B2:
push offset Lt_04BE
call OUTP
add esp, 4
push offset Lt_04BF
call OUTP
add esp, 4
push offset Lt_0203
call OUTP
add esp, 4
push offset Lt_04C0
call OUTP
add esp, 4
push offset Lt_04C1
call OUTP
add esp, 4
push offset Lt_04C2
call OUTP
add esp, 4
push offset Lt_04C3
call OUTP
add esp, 4
push offset Lt_04C4
call OUTP
add esp, 4
push offset Lt_0078
call OUTP
add esp, 4
push offset Lt_04C5
call OUTP
add esp, 4
push offset Lt_04C6
call OUTP
add esp, 4
cmp dword ptr [Lt_0A1D], 4
jle .Lt_04C8
push offset Lt_026E
call OUTP
add esp, 4
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
push 0
push -1
push 16
push offset Lt_026F
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A1B
push 8
push offset Lt_012A
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
push dword ptr [ebp-48]
call OUTP
add esp, 4
lea eax, [ebp-48]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_04C7
.Lt_04C8:
push offset Lt_0274
call OUTP
add esp, 4
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
push 0
push -1
push 16
push offset Lt_00CE
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A1B
push 7
push offset Lt_0134
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
push dword ptr [ebp-48]
call OUTP
add esp, 4
lea eax, [ebp-48]
push eax
call fb_StrDelete
add esp, 4
.Lt_04C7:
cmp dword ptr [Lt_0A1C], 0
je .Lt_04D2
push offset Lt_00C4
call OUTP
add esp, 4
.Lt_04D2:
.Lt_04D1:
.Lt_04A7:
mov esp, ebp
pop ebp
ret
.size _EMITPOW_SSE, .-_EMITPOW_SSE

.section .bss
.balign 4
	.lcomm	Lt_0A1A,12
.balign 4
	.lcomm	Lt_0A1B,12
.balign 4
	.lcomm	Lt_0A1F,12
.balign 4
	.lcomm	Lt_0A1E,4
.balign 4
	.lcomm	Lt_0A1D,4
.balign 4
	.lcomm	Lt_0A1C,4

.section .text
.balign 16
HCMPF_SSE:
.type HCMPF_SSE, @function
push ebp
mov ebp, esp
sub esp, 80
push ebx
.Lt_04D3:
mov eax, dword ptr [ebp+24]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_04D5
mov dword ptr [ebp-4], 22
jmp .Lt_0A20
.Lt_04D5:
mov ebx, dword ptr [ebp+24]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0A20:
mov eax, dword ptr [ebp-4]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+4]
mov dword ptr [Lt_0A22], ebx
mov ebx, dword ptr [ebp+28]
mov eax, dword ptr [ebx+4]
and eax, 480
je .Lt_04D7
mov dword ptr [ebp-8], 22
jmp .Lt_0A21
.Lt_04D7:
mov eax, dword ptr [ebp+28]
mov ebx, dword ptr [eax+4]
and ebx, 31
mov dword ptr [ebp-8], ebx
.Lt_0A21:
mov ebx, dword ptr [ebp-8]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx+4]
mov dword ptr [Lt_0A23], eax
push -1
push 0
push 0
push -2147483648
push offset Lt_0A24
push dword ptr [ebp+24]
call HPREPOPERAND
add esp, 24
push -1
push 0
push 0
push -2147483648
push offset Lt_0A25
push dword ptr [ebp+28]
call HPREPOPERAND
add esp, 24
cmp dword ptr [ebp+12], 0
jne .Lt_04DA
push 0
push 0
call SYMBUNIQUELABEL
push eax
push -1
push offset Lt_0A26
call fb_StrAssign
add esp, 20
jmp .Lt_04D9
.Lt_04DA:
push 0
push 0
push dword ptr [ebp+12]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
push -1
push offset Lt_0A26
call fb_StrAssign
add esp, 20
.Lt_04D9:
mov dword ptr [Lt_0A27], 0
mov eax, dword ptr [ebp+24]
cmp dword ptr [eax+16], 0
jne .Lt_04DC
push 0
push -1
push offset Lt_0A24
push -1
push offset Lt_0A28
call fb_StrAssign
add esp, 20
mov eax, dword ptr [Lt_0A22]
mov dword ptr [Lt_0A27], eax
jmp .Lt_04DB
.Lt_04DC:
mov eax, dword ptr [ebp+28]
cmp dword ptr [eax+16], 0
jne .Lt_04DD
push 0
push -1
push offset Lt_0A25
push -1
push offset Lt_0A28
call fb_StrAssign
add esp, 20
mov eax, dword ptr [Lt_0A23]
mov dword ptr [Lt_0A27], eax
.Lt_04DD:
.Lt_04DB:
cmp dword ptr [Lt_0A27], 0
je .Lt_04DF
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
push 0
push -1
push -1
push dword ptr [Lt_0A27]
call fb_IntToStr
add esp, 4
push eax
push 10
push offset Lt_0084
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
call OUTP
add esp, 4
lea eax, [ebp-32]
push eax
call fb_StrDelete
add esp, 4
.Lt_04DF:
.Lt_04DE:
cmp dword ptr [Lt_0A27], 8
jne .Lt_04E3
push offset Lt_026E
call OUTP
add esp, 4
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
push 0
push -1
push 16
push offset Lt_026F
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A28
push 8
push offset Lt_012A
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
push -1
lea eax, [ebp-56]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-56]
call OUTP
add esp, 4
lea eax, [ebp-56]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_04E2
.Lt_04E3:
cmp dword ptr [Lt_0A27], 4
jne .Lt_04E8
push offset Lt_0274
call OUTP
add esp, 4
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
push 0
push -1
push 16
push offset Lt_00CE
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A28
push 7
push offset Lt_0134
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
push -1
lea eax, [ebp-56]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-56]
call OUTP
add esp, 4
lea eax, [ebp-56]
push eax
call fb_StrDelete
add esp, 4
.Lt_04E8:
.Lt_04E2:
cmp dword ptr [Lt_0A27], 0
je .Lt_04EE
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
push 0
push -1
push -1
push dword ptr [Lt_0A27]
call fb_IntToStr
add esp, 4
push eax
push 10
push offset Lt_0094
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
call OUTP
add esp, 4
lea eax, [ebp-32]
push eax
call fb_StrDelete
add esp, 4
.Lt_04EE:
.Lt_04ED:
cmp dword ptr [Lt_0A22], 4
jle .Lt_04F2
cmp dword ptr [Lt_0A23], 4
jle .Lt_04F4
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
push 0
push -1
push -1
push offset Lt_0A25
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A24
push 8
push offset Lt_04F5
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
push -1
lea eax, [ebp-56]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-56]
call OUTP
add esp, 4
lea eax, [ebp-56]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_04F3
.Lt_04F4:
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
push 0
push -1
push -1
push offset Lt_0A25
push 16
push offset Lt_01E4
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
call OUTP
add esp, 4
lea eax, [ebp-32]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-80], 0
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
push 0
push -1
push 5
push offset Lt_012B
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A24
push 8
push offset Lt_04F5
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
push dword ptr [ebp-80]
call OUTP
add esp, 4
lea eax, [ebp-80]
push eax
call fb_StrDelete
add esp, 4
.Lt_04F3:
jmp .Lt_04F1
.Lt_04F2:
cmp dword ptr [Lt_0A23], 4
jle .Lt_0501
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
push 0
push -1
push -1
push offset Lt_0A24
push 16
push offset Lt_01E4
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
call OUTP
add esp, 4
lea eax, [ebp-32]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
push 0
push -1
push -1
push offset Lt_0A25
push 14
push offset Lt_0505
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
lea eax, [ebp-44]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-56]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-56]
call OUTP
add esp, 4
lea eax, [ebp-56]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0500
.Lt_0501:
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
push 0
push -1
push -1
push offset Lt_0A25
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A24
push 8
push offset Lt_0508
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
push -1
lea eax, [ebp-56]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-56]
call OUTP
add esp, 4
lea eax, [ebp-56]
push eax
call fb_StrDelete
add esp, 4
.Lt_0500:
.Lt_04F1:
cmp dword ptr [ebp+8], 0
jne .Lt_050E
push 0
push -1
push 0
push dword ptr [ebp+16]
push 2
push offset Lt_050F
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
lea eax, [ebp-20]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_0A28
call fb_StrAssign
add esp, 20
push dword ptr [Lt_0A26]
push dword ptr [Lt_0A28]
call HBRANCH
add esp, 8
jmp .Lt_04D4
.Lt_050E:
.Lt_050D:
push -1
push 0
push 0
push -2147483648
push offset Lt_0A29
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
cmp dword ptr [ENV+112], 1
jl .Lt_0512
push 0
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax+12]
push 1
call HGETREGNAME
add esp, 8
push eax
push -1
push offset Lt_0A2A
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+12]
cmp ebx, 2
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+12]
cmp ecx, 1
sete cl
shr ecx, 1
sbb ecx, ecx
or ebx, ecx
je .Lt_0514
push 0
push 0
call HISREGFREE
add esp, 8
mov dword ptr [Lt_0A2D], eax
cmp dword ptr [Lt_0A2D], 0
jne .Lt_0516
push 0
push 11
push offset Lt_0517
push -1
push offset Lt_0A28
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0A29
push -1
push offset Lt_0A28
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0A28]
call OUTP
add esp, 4
.Lt_0516:
.Lt_0515:
push 0
push -1
push 4
push offset Lt_051B
push -1
push 0
push dword ptr [ebp+16]
push 4
push offset Lt_0518
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
push offset Lt_0A28
call fb_StrAssign
add esp, 20
push dword ptr [Lt_0A28]
call OUTP
add esp, 4
cmp dword ptr [Lt_0A2D], 0
jne .Lt_051F
push 0
push 11
push offset Lt_0517
push -1
push offset Lt_0A28
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0A29
push -1
push offset Lt_0A28
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0A28]
call OUTP
add esp, 4
jmp .Lt_051E
.Lt_051F:
push offset Lt_0520
push dword ptr [Lt_0A29]
call HMOV
add esp, 8
.Lt_051E:
jmp .Lt_0513
.Lt_0514:
push 0
push -1
push -1
push offset Lt_0A2A
push -1
push 2
push offset Lt_0521
push -1
push 0
push dword ptr [ebp+16]
push 4
push offset Lt_0518
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
push -1
push offset Lt_0A28
call fb_StrAssign
add esp, 20
push dword ptr [Lt_0A28]
call OUTP
add esp, 4
.Lt_0513:
push 0
push 5
push offset Lt_029F
push -1
push offset Lt_0A28
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0A29
push -1
push offset Lt_0A28
call fb_StrConcatAssign
add esp, 20
push 0
push 4
push offset Lt_0525
push -1
push offset Lt_0A28
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0A28]
call OUTP
add esp, 4
push 0
push 5
push offset Lt_0526
push -1
push offset Lt_0A28
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0A29
push -1
push offset Lt_0A28
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0A28
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0A29
push -1
push offset Lt_0A28
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0A28]
call OUTP
add esp, 4
jmp .Lt_0511
.Lt_0512:
push 0
push 5
push offset Lt_00CD
push -1
push offset Lt_0A28
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0A29
push -1
push offset Lt_0A28
call fb_StrConcatAssign
add esp, 20
push 0
push 5
push offset Lt_0527
push -1
push offset Lt_0A28
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0A28]
call OUTP
add esp, 4
push 0
push -1
push 0
push dword ptr [ebp+16]
push 2
push offset Lt_050F
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
lea eax, [ebp-20]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_0A28
call fb_StrAssign
add esp, 20
push dword ptr [Lt_0A26]
push dword ptr [Lt_0A28]
call HBRANCH
add esp, 8
push 0
push 5
push offset Lt_0529
push -1
push offset Lt_0A28
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0A29
push -1
push offset Lt_0A28
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_006D
push -1
push offset Lt_0A28
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push offset Lt_0A29
push -1
push offset Lt_0A28
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0A28]
call OUTP
add esp, 4
push dword ptr [Lt_0A26]
call HLABEL
add esp, 4
.Lt_0511:
.Lt_04D4:
pop ebx
mov esp, ebp
pop ebp
ret
.size HCMPF_SSE, .-HCMPF_SSE

.section .bss
.balign 4
	.lcomm	Lt_0A29,12
.balign 4
	.lcomm	Lt_0A2A,12
.balign 4
	.lcomm	Lt_0A24,12
.balign 4
	.lcomm	Lt_0A25,12
.balign 4
	.lcomm	Lt_0A28,12
.balign 4
	.lcomm	Lt_0A26,12
.balign 4
	.lcomm	Lt_0A2E,4
.balign 4
	.lcomm	Lt_0A2D,4
.balign 4
	.lcomm	Lt_0A23,4
.balign 4
	.lcomm	Lt_0A22,4
.balign 4
	.lcomm	Lt_0A27,4

.section .text
.balign 16
_EMITCGTF_SSE:
.type _EMITCGTF_SSE, @function
push ebp
mov ebp, esp
.Lt_052A:
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push offset Lt_0000
push offset Lt_052C
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HCMPF_SSE
add esp, 24
.Lt_052B:
mov esp, ebp
pop ebp
ret
.size _EMITCGTF_SSE, .-_EMITCGTF_SSE
.balign 16
_EMITCLTF_SSE:
.type _EMITCLTF_SSE, @function
push ebp
mov ebp, esp
.Lt_052D:
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push offset Lt_0000
push offset Lt_052F
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HCMPF_SSE
add esp, 24
.Lt_052E:
mov esp, ebp
pop ebp
ret
.size _EMITCLTF_SSE, .-_EMITCLTF_SSE
.balign 16
_EMITCEQF_SSE:
.type _EMITCEQF_SSE, @function
push ebp
mov ebp, esp
.Lt_0530:
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push offset Lt_0000
push offset Lt_0532
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HCMPF_SSE
add esp, 24
.Lt_0531:
mov esp, ebp
pop ebp
ret
.size _EMITCEQF_SSE, .-_EMITCEQF_SSE
.balign 16
_EMITCNEF_SSE:
.type _EMITCNEF_SSE, @function
push ebp
mov ebp, esp
.Lt_0533:
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push offset Lt_0000
push offset Lt_0535
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HCMPF_SSE
add esp, 24
.Lt_0534:
mov esp, ebp
pop ebp
ret
.size _EMITCNEF_SSE, .-_EMITCNEF_SSE
.balign 16
_EMITCLEF_SSE:
.type _EMITCLEF_SSE, @function
push ebp
mov ebp, esp
.Lt_0536:
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push offset Lt_0000
push offset Lt_0538
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HCMPF_SSE
add esp, 24
.Lt_0537:
mov esp, ebp
pop ebp
ret
.size _EMITCLEF_SSE, .-_EMITCLEF_SSE
.balign 16
_EMITCGEF_SSE:
.type _EMITCGEF_SSE, @function
push ebp
mov ebp, esp
.Lt_0539:
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push offset Lt_0000
push offset Lt_053B
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HCMPF_SSE
add esp, 24
.Lt_053A:
mov esp, ebp
pop ebp
ret
.size _EMITCGEF_SSE, .-_EMITCGEF_SSE
.balign 16
_EMITNEGF_SSE:
.type _EMITNEGF_SSE, @function
push ebp
mov ebp, esp
sub esp, 100
push ebx
.Lt_053C:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_053E
mov dword ptr [ebp-4], 22
jmp .Lt_0A2F
.Lt_053E:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0A2F:
mov eax, dword ptr [ebp-4]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+4]
mov dword ptr [Lt_0A30], ebx
push -1
push 0
push 0
push -2147483648
push offset Lt_0A31
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx+16], 0
jne .Lt_0541
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
push 0
push -1
push -1
push dword ptr [Lt_0A30]
call fb_IntToStr
add esp, 4
push eax
push 10
push offset Lt_0084
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
push dword ptr [ebp-28]
call OUTP
add esp, 4
lea eax, [ebp-28]
push eax
call fb_StrDelete
add esp, 4
cmp dword ptr [Lt_0A30], 4
jle .Lt_0545
push offset Lt_026E
call OUTP
add esp, 4
mov dword ptr [ebp-100], 0
mov dword ptr [ebp-96], 0
mov dword ptr [ebp-92], 0
push 0
push -1
push 16
push offset Lt_026F
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A31
push 8
push offset Lt_012A
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
push -1
lea eax, [ebp-100]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-100]
call OUTP
add esp, 4
lea eax, [ebp-100]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0544
.Lt_0545:
push offset Lt_0274
call OUTP
add esp, 4
mov dword ptr [ebp-100], 0
mov dword ptr [ebp-96], 0
mov dword ptr [ebp-92], 0
push 0
push -1
push 16
push offset Lt_00CE
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A31
push 7
push offset Lt_0134
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
push -1
lea eax, [ebp-100]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-100]
call OUTP
add esp, 4
lea eax, [ebp-100]
push eax
call fb_StrDelete
add esp, 4
.Lt_0544:
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
push 0
push -1
push -1
push dword ptr [Lt_0A30]
call fb_IntToStr
add esp, 4
push eax
push 10
push offset Lt_0094
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
call OUTP
add esp, 4
lea eax, [ebp-52]
push eax
call fb_StrDelete
add esp, 4
.Lt_0541:
.Lt_0540:
cmp dword ptr [Lt_0A30], 4
jle .Lt_0551
push 13
push 2147483648
push 0
call SYMBALLOCINTCONST
add esp, 12
mov dword ptr [Lt_0A32], eax
mov eax, dword ptr [Lt_0A32]
push dword ptr [eax+48]
push dword ptr [eax+44]
push dword ptr [Lt_0A32]
push 0
push 13
call dword ptr [IR+248]
add esp, 20
mov dword ptr [Lt_0A33], eax
jmp .Lt_0550
.Lt_0551:
push 8
push 4294967295
push 2147483648
call SYMBALLOCINTCONST
add esp, 12
mov dword ptr [Lt_0A32], eax
mov eax, dword ptr [Lt_0A32]
push dword ptr [eax+48]
push dword ptr [eax+44]
push dword ptr [Lt_0A32]
push 0
push 8
call dword ptr [IR+248]
add esp, 20
mov dword ptr [Lt_0A33], eax
.Lt_0550:
mov eax, dword ptr [Lt_0A32]
mov dword ptr [eax+96], 16
push -1
push 0
push 0
push 23
push offset Lt_0A34
push dword ptr [Lt_0A33]
call HPREPOPERAND
add esp, 24
cmp dword ptr [Lt_0A30], 4
jle .Lt_0553
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
push 0
push -1
push -1
push offset Lt_0A34
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A31
push 7
push offset Lt_0554
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
push -1
lea eax, [ebp-52]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-52]
call OUTP
add esp, 4
lea eax, [ebp-52]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0552
.Lt_0553:
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
push 0
push -1
push -1
push offset Lt_0A34
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A31
push 7
push offset Lt_0559
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
push -1
lea eax, [ebp-52]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-52]
call OUTP
add esp, 4
lea eax, [ebp-52]
push eax
call fb_StrDelete
add esp, 4
.Lt_0552:
.Lt_053D:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITNEGF_SSE, .-_EMITNEGF_SSE

.section .bss
.balign 4
	.lcomm	Lt_0A31,12
.balign 4
	.lcomm	Lt_0A34,12
.balign 4
	.lcomm	Lt_0A30,4
.balign 4
	.lcomm	Lt_0A32,4
.balign 4
	.lcomm	Lt_0A33,4

.section .text
.balign 16
_EMITHADDF_SSE:
.type _EMITHADDF_SSE, @function
push ebp
mov ebp, esp
sub esp, 172
push ebx
.Lt_055E:
push -1
push 0
push 0
push -2147483648
push offset Lt_0A36
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_0560
mov dword ptr [ebp-4], 22
jmp .Lt_0A35
.Lt_0560:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0A35:
mov eax, dword ptr [ebp-4]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax+4], 4
jle .Lt_0563
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
push 0
push -1
push -1
push offset Lt_0A36
push 15
push offset Lt_014F
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
push dword ptr [ebp-28]
call OUTP
add esp, 4
lea eax, [ebp-28]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
push 0
push -1
push 5
push offset Lt_012B
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A36
push 7
push offset Lt_0566
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
push dword ptr [ebp-76]
call OUTP
add esp, 4
lea eax, [ebp-76]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0562
.Lt_0563:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+20], 2
jne .Lt_056C
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
push 0
push -1
push 5
push offset Lt_056F
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A36
push 14
push offset Lt_056E
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
push -1
lea eax, [ebp-52]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-52]
call OUTP
add esp, 4
lea eax, [ebp-52]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-100], 0
mov dword ptr [ebp-96], 0
mov dword ptr [ebp-92], 0
push 0
push -1
push 5
push offset Lt_012B
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A36
push 7
push offset Lt_0574
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
push -1
lea eax, [ebp-100]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-100]
call OUTP
add esp, 4
lea eax, [ebp-100]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_056B
.Lt_056C:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+20], 3
jne .Lt_0579
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
push 0
push -1
push 5
push offset Lt_056F
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A36
push 14
push offset Lt_056E
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
push -1
lea eax, [ebp-52]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-52]
call OUTP
add esp, 4
lea eax, [ebp-52]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-100], 0
mov dword ptr [ebp-96], 0
mov dword ptr [ebp-92], 0
push 0
push -1
push 5
push offset Lt_012B
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A36
push 7
push offset Lt_0574
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
push -1
lea eax, [ebp-100]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-100]
call OUTP
add esp, 4
lea eax, [ebp-100]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-124], 0
mov dword ptr [ebp-120], 0
mov dword ptr [ebp-116], 0
push 0
push -1
push -1
push offset Lt_0A36
push 15
push offset Lt_014F
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
push dword ptr [ebp-124]
call OUTP
add esp, 4
lea eax, [ebp-124]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-172], 0
mov dword ptr [ebp-168], 0
mov dword ptr [ebp-164], 0
push 0
push -1
push 5
push offset Lt_012B
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A36
push 7
push offset Lt_0574
mov dword ptr [ebp-136], 0
mov dword ptr [ebp-132], 0
mov dword ptr [ebp-128], 0
lea eax, [ebp-136]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-148], 0
mov dword ptr [ebp-144], 0
mov dword ptr [ebp-140], 0
lea eax, [ebp-148]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-160], 0
mov dword ptr [ebp-156], 0
mov dword ptr [ebp-152], 0
lea eax, [ebp-160]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-172]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-172]
call OUTP
add esp, 4
lea eax, [ebp-172]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_056B
.Lt_0579:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+20], 4
jne .Lt_0588
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
push 0
push -1
push -1
push offset Lt_0A36
push 15
push offset Lt_014F
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
push dword ptr [ebp-28]
call OUTP
add esp, 4
lea eax, [ebp-28]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
push 0
push -1
push 5
push offset Lt_012B
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A36
push 7
push offset Lt_058B
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
push dword ptr [ebp-76]
call OUTP
add esp, 4
lea eax, [ebp-76]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-124], 0
mov dword ptr [ebp-120], 0
mov dword ptr [ebp-116], 0
push 0
push -1
push 5
push offset Lt_056F
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A36
push 14
push offset Lt_056E
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
push dword ptr [ebp-124]
call OUTP
add esp, 4
lea eax, [ebp-124]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-172], 0
mov dword ptr [ebp-168], 0
mov dword ptr [ebp-164], 0
push 0
push -1
push 5
push offset Lt_012B
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A36
push 7
push offset Lt_0574
mov dword ptr [ebp-136], 0
mov dword ptr [ebp-132], 0
mov dword ptr [ebp-128], 0
lea eax, [ebp-136]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-148], 0
mov dword ptr [ebp-144], 0
mov dword ptr [ebp-140], 0
lea eax, [ebp-148]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-160], 0
mov dword ptr [ebp-156], 0
mov dword ptr [ebp-152], 0
lea eax, [ebp-160]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-172]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-172]
call OUTP
add esp, 4
lea eax, [ebp-172]
push eax
call fb_StrDelete
add esp, 4
.Lt_0588:
.Lt_056B:
.Lt_0562:
.Lt_055F:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITHADDF_SSE, .-_EMITHADDF_SSE

.section .bss
.balign 4
	.lcomm	Lt_0A36,12

.section .text
.balign 16
_EMITABSF_SSE:
.type _EMITABSF_SSE, @function
push ebp
mov ebp, esp
sub esp, 100
push ebx
.Lt_0598:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_059A
mov dword ptr [ebp-4], 22
jmp .Lt_0A37
.Lt_059A:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0A37:
mov eax, dword ptr [ebp-4]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+4]
mov dword ptr [Lt_0A38], ebx
push -1
push 0
push 0
push -2147483648
push offset Lt_0A39
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx+16], 0
jne .Lt_059D
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
push 0
push -1
push -1
push dword ptr [Lt_0A38]
call fb_IntToStr
add esp, 4
push eax
push 10
push offset Lt_0084
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
push dword ptr [ebp-28]
call OUTP
add esp, 4
lea eax, [ebp-28]
push eax
call fb_StrDelete
add esp, 4
cmp dword ptr [Lt_0A38], 4
jle .Lt_05A1
push offset Lt_026E
call OUTP
add esp, 4
mov dword ptr [ebp-100], 0
mov dword ptr [ebp-96], 0
mov dword ptr [ebp-92], 0
push 0
push -1
push 16
push offset Lt_026F
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A39
push 8
push offset Lt_012A
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
push -1
lea eax, [ebp-100]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-100]
call OUTP
add esp, 4
lea eax, [ebp-100]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_05A0
.Lt_05A1:
push offset Lt_0274
call OUTP
add esp, 4
mov dword ptr [ebp-100], 0
mov dword ptr [ebp-96], 0
mov dword ptr [ebp-92], 0
push 0
push -1
push 16
push offset Lt_00CE
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A39
push 7
push offset Lt_0134
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
push -1
lea eax, [ebp-100]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-100]
call OUTP
add esp, 4
lea eax, [ebp-100]
push eax
call fb_StrDelete
add esp, 4
.Lt_05A0:
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
push 0
push -1
push -1
push dword ptr [Lt_0A38]
call fb_IntToStr
add esp, 4
push eax
push 10
push offset Lt_0094
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
call OUTP
add esp, 4
lea eax, [ebp-52]
push eax
call fb_StrDelete
add esp, 4
.Lt_059D:
.Lt_059C:
cmp dword ptr [Lt_0A38], 4
jle .Lt_05AD
push 13
push 2147483647
push 4294967295
call SYMBALLOCINTCONST
add esp, 12
mov dword ptr [Lt_0A3A], eax
mov eax, dword ptr [Lt_0A3A]
push dword ptr [eax+48]
push dword ptr [eax+44]
push dword ptr [Lt_0A3A]
push 0
push 13
call dword ptr [IR+248]
add esp, 20
mov dword ptr [Lt_0A3B], eax
jmp .Lt_05AC
.Lt_05AD:
push 8
push 0
push 2147483647
call SYMBALLOCINTCONST
add esp, 12
mov dword ptr [Lt_0A3A], eax
mov eax, dword ptr [Lt_0A3A]
push dword ptr [eax+48]
push dword ptr [eax+44]
push dword ptr [Lt_0A3A]
push 0
push 8
call dword ptr [IR+248]
add esp, 20
mov dword ptr [Lt_0A3B], eax
.Lt_05AC:
mov eax, dword ptr [Lt_0A3A]
mov dword ptr [eax+96], 16
push -1
push 0
push 0
push 23
push offset Lt_0A3C
push dword ptr [Lt_0A3B]
call HPREPOPERAND
add esp, 24
cmp dword ptr [Lt_0A38], 4
jle .Lt_05AF
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
push 0
push -1
push -1
push offset Lt_0A3C
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A39
push 7
push offset Lt_05B0
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
push -1
lea eax, [ebp-52]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-52]
call OUTP
add esp, 4
lea eax, [ebp-52]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_05AE
.Lt_05AF:
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
push 0
push -1
push -1
push offset Lt_0A3C
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A39
push 7
push offset Lt_05B5
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
push -1
lea eax, [ebp-52]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-52]
call OUTP
add esp, 4
lea eax, [ebp-52]
push eax
call fb_StrDelete
add esp, 4
.Lt_05AE:
.Lt_0599:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITABSF_SSE, .-_EMITABSF_SSE

.section .bss
.balign 4
	.lcomm	Lt_0A39,12
.balign 4
	.lcomm	Lt_0A3C,12
.balign 4
	.lcomm	Lt_0A38,4
.balign 4
	.lcomm	Lt_0A3A,4
.balign 4
	.lcomm	Lt_0A3B,4

.section .text
.balign 16
_EMITSGNF_SSE:
.type _EMITSGNF_SSE, @function
push ebp
mov ebp, esp
sub esp, 148
push ebx
.Lt_05BA:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_05BC
mov dword ptr [ebp-4], 22
jmp .Lt_0A3D
.Lt_05BC:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0A3D:
mov eax, dword ptr [ebp-4]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+4]
mov dword ptr [Lt_0A3E], ebx
push -1
push 0
push 0
push -2147483648
push offset Lt_0A3F
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx+16], 0
jne .Lt_05BF
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
push 0
push -1
push -1
push dword ptr [Lt_0A3E]
call fb_IntToStr
add esp, 4
push eax
push 10
push offset Lt_0084
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
push dword ptr [ebp-28]
call OUTP
add esp, 4
lea eax, [ebp-28]
push eax
call fb_StrDelete
add esp, 4
cmp dword ptr [Lt_0A3E], 4
jle .Lt_05C3
push offset Lt_026E
call OUTP
add esp, 4
mov dword ptr [ebp-100], 0
mov dword ptr [ebp-96], 0
mov dword ptr [ebp-92], 0
push 0
push -1
push 16
push offset Lt_026F
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A3F
push 8
push offset Lt_012A
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
push -1
lea eax, [ebp-100]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-100]
call OUTP
add esp, 4
lea eax, [ebp-100]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_05C2
.Lt_05C3:
push offset Lt_0274
call OUTP
add esp, 4
mov dword ptr [ebp-100], 0
mov dword ptr [ebp-96], 0
mov dword ptr [ebp-92], 0
push 0
push -1
push 16
push offset Lt_00CE
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A3F
push 7
push offset Lt_0134
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
push -1
lea eax, [ebp-100]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-100]
call OUTP
add esp, 4
lea eax, [ebp-100]
push eax
call fb_StrDelete
add esp, 4
.Lt_05C2:
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
push 0
push -1
push -1
push dword ptr [Lt_0A3E]
call fb_IntToStr
add esp, 4
push eax
push 10
push offset Lt_0094
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
call OUTP
add esp, 4
lea eax, [ebp-52]
push eax
call fb_StrDelete
add esp, 4
.Lt_05BF:
.Lt_05BE:
cmp dword ptr [Lt_0A3E], 4
jle .Lt_05CF
push offset Lt_05D0
call OUTP
add esp, 4
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
push 0
push -1
push -1
push offset Lt_0A3F
push 16
push offset Lt_05D2
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
push dword ptr [ebp-28]
call OUTP
add esp, 4
lea eax, [ebp-28]
push eax
call fb_StrDelete
add esp, 4
push 13
push 2147483647
push 4294967295
call SYMBALLOCINTCONST
add esp, 12
mov dword ptr [Lt_0A40], eax
mov eax, dword ptr [Lt_0A40]
mov dword ptr [eax+96], 16
mov eax, dword ptr [Lt_0A40]
push dword ptr [eax+48]
push dword ptr [eax+44]
push dword ptr [Lt_0A40]
push 0
push 13
call dword ptr [IR+248]
add esp, 20
mov dword ptr [Lt_0A41], eax
push -1
push 0
push 0
push 23
push offset Lt_0A42
push dword ptr [Lt_0A41]
call HPREPOPERAND
add esp, 24
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
push 0
push -1
push -1
push offset Lt_0A42
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A3F
push 6
push offset Lt_05D5
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
push dword ptr [ebp-76]
call OUTP
add esp, 4
lea eax, [ebp-76]
push eax
call fb_StrDelete
add esp, 4
push 13
push 3220176896
push 0
call SYMBALLOCINTCONST
add esp, 12
mov dword ptr [Lt_0A40], eax
mov eax, dword ptr [Lt_0A40]
mov dword ptr [eax+96], 16
mov eax, dword ptr [Lt_0A40]
push dword ptr [eax+48]
push dword ptr [eax+44]
push dword ptr [Lt_0A40]
push 0
push 13
call dword ptr [IR+248]
add esp, 20
mov dword ptr [Lt_0A41], eax
push -1
push 0
push 0
push 23
push offset Lt_0A42
push dword ptr [Lt_0A41]
call HPREPOPERAND
add esp, 24
mov dword ptr [ebp-100], 0
mov dword ptr [ebp-96], 0
mov dword ptr [ebp-92], 0
push 0
push -1
push -1
push offset Lt_0A42
push 13
push offset Lt_05DB
mov dword ptr [ebp-88], 0
mov dword ptr [ebp-84], 0
mov dword ptr [ebp-80], 0
lea eax, [ebp-88]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-100]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-100]
call OUTP
add esp, 4
lea eax, [ebp-100]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-148], 0
mov dword ptr [ebp-144], 0
mov dword ptr [ebp-140], 0
push 0
push -1
push 5
push offset Lt_012B
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A3F
push 7
push offset Lt_05B0
mov dword ptr [ebp-112], 0
mov dword ptr [ebp-108], 0
mov dword ptr [ebp-104], 0
lea eax, [ebp-112]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-124], 0
mov dword ptr [ebp-120], 0
mov dword ptr [ebp-116], 0
lea eax, [ebp-124]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-136], 0
mov dword ptr [ebp-132], 0
mov dword ptr [ebp-128], 0
lea eax, [ebp-136]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-148]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-148]
call OUTP
add esp, 4
lea eax, [ebp-148]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_05CE
.Lt_05CF:
push offset Lt_05E2
call OUTP
add esp, 4
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
push 0
push -1
push -1
push offset Lt_0A3F
push 16
push offset Lt_05E4
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
push dword ptr [ebp-28]
call OUTP
add esp, 4
lea eax, [ebp-28]
push eax
call fb_StrDelete
add esp, 4
push 8
push 0
push 2147483647
call SYMBALLOCINTCONST
add esp, 12
mov dword ptr [Lt_0A40], eax
mov eax, dword ptr [Lt_0A40]
mov dword ptr [eax+96], 16
mov eax, dword ptr [Lt_0A40]
push dword ptr [eax+48]
push dword ptr [eax+44]
push dword ptr [Lt_0A40]
push 0
push 8
call dword ptr [IR+248]
add esp, 20
mov dword ptr [Lt_0A41], eax
push -1
push 0
push 0
push 23
push offset Lt_0A42
push dword ptr [Lt_0A41]
call HPREPOPERAND
add esp, 24
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
push 0
push -1
push -1
push offset Lt_0A42
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A3F
push 6
push offset Lt_05E7
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
push dword ptr [ebp-76]
call OUTP
add esp, 4
lea eax, [ebp-76]
push eax
call fb_StrDelete
add esp, 4
push 8
push 4294967295
push 3212836864
call SYMBALLOCINTCONST
add esp, 12
mov dword ptr [Lt_0A40], eax
mov eax, dword ptr [Lt_0A40]
mov dword ptr [eax+96], 16
mov eax, dword ptr [Lt_0A40]
push dword ptr [eax+48]
push dword ptr [eax+44]
push dword ptr [Lt_0A40]
push 0
push 8
call dword ptr [IR+248]
add esp, 20
mov dword ptr [Lt_0A41], eax
push -1
push 0
push 0
push 23
push offset Lt_0A42
push dword ptr [Lt_0A41]
call HPREPOPERAND
add esp, 24
mov dword ptr [ebp-100], 0
mov dword ptr [ebp-96], 0
mov dword ptr [ebp-92], 0
push 0
push -1
push -1
push offset Lt_0A42
push 13
push offset Lt_05ED
mov dword ptr [ebp-88], 0
mov dword ptr [ebp-84], 0
mov dword ptr [ebp-80], 0
lea eax, [ebp-88]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-100]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-100]
call OUTP
add esp, 4
lea eax, [ebp-100]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-148], 0
mov dword ptr [ebp-144], 0
mov dword ptr [ebp-140], 0
push 0
push -1
push 5
push offset Lt_012B
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A3F
push 7
push offset Lt_05B5
mov dword ptr [ebp-112], 0
mov dword ptr [ebp-108], 0
mov dword ptr [ebp-104], 0
lea eax, [ebp-112]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-124], 0
mov dword ptr [ebp-120], 0
mov dword ptr [ebp-116], 0
lea eax, [ebp-124]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-136], 0
mov dword ptr [ebp-132], 0
mov dword ptr [ebp-128], 0
lea eax, [ebp-136]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-148]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-148]
call OUTP
add esp, 4
lea eax, [ebp-148]
push eax
call fb_StrDelete
add esp, 4
.Lt_05CE:
.Lt_05BB:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITSGNF_SSE, .-_EMITSGNF_SSE

.section .bss
.balign 4
	.lcomm	Lt_0A3F,12
.balign 4
	.lcomm	Lt_0A42,12
.balign 4
	.lcomm	Lt_0A40,4
.balign 4
	.lcomm	Lt_0A41,4
.balign 4
	.lcomm	Lt_0A3E,4

.section .text
.balign 16
_EMITSINCOS_FAST_SSE:
.type _EMITSINCOS_FAST_SSE, @function
push ebp
mov ebp, esp
sub esp, 1200
push ebx
.Lt_05F4:
push -1
push 0
push 0
push -2147483648
push offset Lt_0A43
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
mov dword ptr [Lt_0A44], 4
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+16], 0
jne .Lt_05FA
add dword ptr [Lt_0A44], 4
.Lt_05FA:
.Lt_05F9:
mov dword ptr [Lt_0A45], 3
mov dword ptr [Lt_0A46], 0
mov dword ptr [Lt_0A45+4], 5
mov dword ptr [Lt_0A46+4], 0
push 3
push 0
call HISREGFREE
add esp, 8
test eax, eax
je .Lt_05FC
mov dword ptr [Lt_0A45], 3
mov dword ptr [Lt_0A46], -1
push 0
push 0
call HISREGFREE
add esp, 8
test eax, eax
je .Lt_05FE
mov dword ptr [Lt_0A45+4], 0
mov dword ptr [Lt_0A46+4], -1
jmp .Lt_05FD
.Lt_05FE:
push 5
push 0
call HISREGFREE
add esp, 8
test eax, eax
je .Lt_05FF
mov dword ptr [Lt_0A45+4], 5
mov dword ptr [Lt_0A46+4], -1
.Lt_05FF:
.Lt_05FD:
jmp .Lt_05FB
.Lt_05FC:
push 0
push 0
call HISREGFREE
add esp, 8
test eax, eax
je .Lt_0600
mov dword ptr [Lt_0A45], 0
mov dword ptr [Lt_0A46], -1
push 5
push 0
call HISREGFREE
add esp, 8
test eax, eax
je .Lt_0602
mov dword ptr [Lt_0A45+4], 5
mov dword ptr [Lt_0A46+4], -1
.Lt_0602:
.Lt_0601:
jmp .Lt_05FB
.Lt_0600:
push 5
push 0
call HISREGFREE
add esp, 8
test eax, eax
je .Lt_0604
mov dword ptr [Lt_0A45+4], 5
mov dword ptr [Lt_0A46+4], -1
.Lt_0604:
.Lt_0603:
.Lt_05FB:
push 1
call HFINDFREEREG
add esp, 4
mov dword ptr [Lt_0A45+8], eax
cmp dword ptr [Lt_0A45+8], -1
jne .Lt_0606
mov dword ptr [Lt_0A45+8], 0
mov dword ptr [Lt_0A46+8], 0
jmp .Lt_0605
.Lt_0606:
mov dword ptr [Lt_0A46+8], -1
.Lt_0605:
mov eax, dword ptr [Lt_0A46]
and eax, 1
sal eax, 2
add dword ptr [Lt_0A44], eax
mov eax, dword ptr [Lt_0A46+4]
and eax, 1
sal eax, 2
add dword ptr [Lt_0A44], eax
mov eax, dword ptr [Lt_0A46+8]
and eax, 1
sal eax, 2
add dword ptr [Lt_0A44], eax
push 0
push 0
push dword ptr [Lt_0A45]
push 7
call HGETREGNAME
add esp, 8
push eax
push -1
push offset Lt_0A47
call fb_StrAssign
add esp, 20
push 0
push 0
push dword ptr [Lt_0A45+4]
push 7
call HGETREGNAME
add esp, 8
push eax
push -1
push offset Lt_0A47 + 12
call fb_StrAssign
add esp, 20
push 0
push 0
push dword ptr [Lt_0A45+8]
push 14
call HGETREGNAME
add esp, 8
push eax
push -1
push offset Lt_0A47 + 24
call fb_StrAssign
add esp, 20
push 8
push 0
push 2147483647
call SYMBALLOCINTCONST
add esp, 12
mov dword ptr [Lt_0A48], eax
mov eax, dword ptr [Lt_0A48]
mov dword ptr [eax+96], 16
mov eax, dword ptr [Lt_0A48]
push dword ptr [eax+48]
push dword ptr [eax+44]
push dword ptr [Lt_0A48]
push 0
push 8
call dword ptr [IR+248]
add esp, 20
mov dword ptr [Lt_0A49], eax
push 8
push 0
push 1070141403
call SYMBALLOCINTCONST
add esp, 12
mov dword ptr [Lt_0A4A], eax
mov eax, dword ptr [Lt_0A4A]
mov dword ptr [eax+96], 16
mov eax, dword ptr [Lt_0A4A]
push dword ptr [eax+48]
push dword ptr [eax+44]
push dword ptr [Lt_0A4A]
push 0
push 8
call dword ptr [IR+248]
add esp, 20
mov dword ptr [Lt_0A4B], eax
push 8
push 0
push 1059256707
call SYMBALLOCINTCONST
add esp, 12
mov dword ptr [Lt_0A4C], eax
mov eax, dword ptr [Lt_0A4C]
mov dword ptr [eax+96], 16
mov eax, dword ptr [Lt_0A4C]
push dword ptr [eax+48]
push dword ptr [eax+44]
push dword ptr [Lt_0A4C]
push 0
push 8
call dword ptr [IR+248]
add esp, 20
mov dword ptr [Lt_0A4D], eax
push 8
push 0
push 1065353216
call SYMBALLOCINTCONST
add esp, 12
mov dword ptr [Lt_0A4E], eax
mov eax, dword ptr [Lt_0A4E]
mov dword ptr [eax+96], 16
mov eax, dword ptr [Lt_0A4E]
push dword ptr [eax+48]
push dword ptr [eax+44]
push dword ptr [Lt_0A4E]
push 0
push 8
call dword ptr [IR+248]
add esp, 20
mov dword ptr [Lt_0A4F], eax
push 8
push 0
push 1070141403
call SYMBALLOCINTCONST
add esp, 12
mov dword ptr [Lt_0A50], eax
mov eax, dword ptr [Lt_0A50]
mov dword ptr [eax+96], 16
mov eax, dword ptr [Lt_0A50]
push dword ptr [eax+48]
push dword ptr [eax+44]
push dword ptr [Lt_0A50]
push 0
push 8
call dword ptr [IR+248]
add esp, 20
mov dword ptr [Lt_0A51], eax
push 8
push 4294967295
push 3206897127
call SYMBALLOCINTCONST
add esp, 12
mov dword ptr [Lt_0A52], eax
mov eax, dword ptr [Lt_0A52]
mov dword ptr [eax+96], 16
mov eax, dword ptr [Lt_0A52]
push dword ptr [eax+48]
push dword ptr [eax+44]
push dword ptr [Lt_0A52]
push 0
push 8
call dword ptr [IR+248]
add esp, 20
mov dword ptr [Lt_0A53], eax
push 8
push 0
push 1034106339
call SYMBALLOCINTCONST
add esp, 12
mov dword ptr [Lt_0A54], eax
mov eax, dword ptr [Lt_0A54]
mov dword ptr [eax+96], 16
mov eax, dword ptr [Lt_0A54]
push dword ptr [eax+48]
push dword ptr [eax+44]
push dword ptr [Lt_0A54]
push 0
push 8
call dword ptr [IR+248]
add esp, 20
mov dword ptr [Lt_0A55], eax
push 8
push 4294967295
push 3147393382
call SYMBALLOCINTCONST
add esp, 12
mov dword ptr [Lt_0A56], eax
mov eax, dword ptr [Lt_0A56]
mov dword ptr [eax+96], 16
mov eax, dword ptr [Lt_0A56]
push dword ptr [eax+48]
push dword ptr [eax+44]
push dword ptr [Lt_0A56]
push 0
push 8
call dword ptr [IR+248]
add esp, 20
mov dword ptr [Lt_0A57], eax
push -1
push 0
push 0
push -2147483648
push offset Lt_0A43
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
push 0
push -1
push -1
push dword ptr [Lt_0A44]
call fb_IntToStr
add esp, 4
push eax
push 10
push offset Lt_0084
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
call OUTP
add esp, 4
lea eax, [ebp-24]
push eax
call fb_StrDelete
add esp, 4
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+16], 0
jne .Lt_060A
push offset Lt_0274
call OUTP
add esp, 4
mov dword ptr [ebp-1152], 0
mov dword ptr [ebp-1148], 0
mov dword ptr [ebp-1144], 0
push 0
push -1
push 16
push offset Lt_00CE
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A43
push 7
push offset Lt_0134
mov dword ptr [ebp-1116], 0
mov dword ptr [ebp-1112], 0
mov dword ptr [ebp-1108], 0
lea eax, [ebp-1116]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-1128], 0
mov dword ptr [ebp-1124], 0
mov dword ptr [ebp-1120], 0
lea eax, [ebp-1128]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-1140], 0
mov dword ptr [ebp-1136], 0
mov dword ptr [ebp-1132], 0
lea eax, [ebp-1140]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-1152]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-1152]
call OUTP
add esp, 4
lea eax, [ebp-1152]
push eax
call fb_StrDelete
add esp, 4
.Lt_060A:
.Lt_0609:
mov dword ptr [Lt_0A58], 4
mov dword ptr [Lt_0A59], 0
.Lt_0612:
mov eax, dword ptr [Lt_0A59]
cmp dword ptr [Lt_0A46+eax*4], 0
jne .Lt_0614
cmp dword ptr [Lt_0A59], 2
jge .Lt_0616
mov dword ptr [ebp-1164], 0
mov dword ptr [ebp-1160], 0
mov dword ptr [ebp-1156], 0
push 0
push -1
push -1
mov eax, dword ptr [Lt_0A59]
imul eax, 12
lea ebx, [Lt_0A47+eax]
push ebx
push -1
push 3
push offset Lt_006D
push -1
push 2
push offset Lt_0618
push -1
push -1
push dword ptr [Lt_0A58]
call fb_IntToStr
add esp, 4
push eax
push 10
push offset Lt_0617
mov dword ptr [ebp-1116], 0
mov dword ptr [ebp-1112], 0
mov dword ptr [ebp-1108], 0
lea eax, [ebp-1116]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-1128], 0
mov dword ptr [ebp-1124], 0
mov dword ptr [ebp-1120], 0
lea eax, [ebp-1128]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-1140], 0
mov dword ptr [ebp-1136], 0
mov dword ptr [ebp-1132], 0
lea eax, [ebp-1140]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-1152], 0
mov dword ptr [ebp-1148], 0
mov dword ptr [ebp-1144], 0
lea eax, [ebp-1152]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-1164]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-1164]
call OUTP
add esp, 4
lea eax, [ebp-1164]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0615
.Lt_0616:
mov dword ptr [ebp-1164], 0
mov dword ptr [ebp-1160], 0
mov dword ptr [ebp-1156], 0
push 0
push -1
push -1
mov eax, dword ptr [Lt_0A59]
imul eax, 12
lea ebx, [Lt_0A47+eax]
push ebx
push -1
push 3
push offset Lt_006D
push -1
push 2
push offset Lt_0618
push -1
push -1
push dword ptr [Lt_0A58]
call fb_IntToStr
add esp, 4
push eax
push 12
push offset Lt_061E
mov dword ptr [ebp-1116], 0
mov dword ptr [ebp-1112], 0
mov dword ptr [ebp-1108], 0
lea eax, [ebp-1116]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-1128], 0
mov dword ptr [ebp-1124], 0
mov dword ptr [ebp-1120], 0
lea eax, [ebp-1128]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-1140], 0
mov dword ptr [ebp-1136], 0
mov dword ptr [ebp-1132], 0
lea eax, [ebp-1140]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-1152], 0
mov dword ptr [ebp-1148], 0
mov dword ptr [ebp-1144], 0
lea eax, [ebp-1152]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-1164]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-1164]
call OUTP
add esp, 4
lea eax, [ebp-1164]
push eax
call fb_StrDelete
add esp, 4
.Lt_0615:
add dword ptr [Lt_0A58], 4
.Lt_0614:
.Lt_0613:
.Lt_0610:
inc dword ptr [Lt_0A59]
.Lt_060F:
cmp dword ptr [Lt_0A59], 2
jle .Lt_0612
.Lt_0611:
cmp dword ptr [ebp+12], 0
jne .Lt_0625
mov dword ptr [ebp-1128], 0
mov dword ptr [ebp-1124], 0
mov dword ptr [ebp-1120], 0
push 0
push -1
push -1
push offset Lt_0A43
push 14
push offset Lt_0627
mov dword ptr [ebp-1116], 0
mov dword ptr [ebp-1112], 0
mov dword ptr [ebp-1108], 0
lea eax, [ebp-1116]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-1128]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-1128]
call OUTP
add esp, 4
lea eax, [ebp-1128]
push eax
call fb_StrDelete
add esp, 4
push -1
push 0
push 0
push -2147483648
push offset Lt_0A5A
push dword ptr [Lt_0A4D]
call HPREPOPERAND
add esp, 24
mov dword ptr [ebp-1176], 0
mov dword ptr [ebp-1172], 0
mov dword ptr [ebp-1168], 0
push 0
push -1
push -1
push offset Lt_0A5A
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A43
push 7
push offset Lt_062A
mov dword ptr [ebp-1140], 0
mov dword ptr [ebp-1136], 0
mov dword ptr [ebp-1132], 0
lea eax, [ebp-1140]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-1152], 0
mov dword ptr [ebp-1148], 0
mov dword ptr [ebp-1144], 0
lea eax, [ebp-1152]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-1164], 0
mov dword ptr [ebp-1160], 0
mov dword ptr [ebp-1156], 0
lea eax, [ebp-1164]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-1176]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-1176]
call OUTP
add esp, 4
lea eax, [ebp-1176]
push eax
call fb_StrDelete
add esp, 4
push offset Lt_062F
call OUTP
add esp, 4
.Lt_0625:
.Lt_0624:
push -1
push 0
push 0
push 23
push offset Lt_0A5A
push dword ptr [Lt_0A49]
call HPREPOPERAND
add esp, 24
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
mov dword ptr [ebp-64], 0
push 0
push -1
push -1
push offset Lt_0A5A
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A43
push 7
push offset Lt_0630
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
push -1
lea eax, [ebp-72]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-72]
call OUTP
add esp, 4
lea eax, [ebp-72]
push eax
call fb_StrDelete
add esp, 4
cmp dword ptr [ebp+12], -1
jne .Lt_0636
push -1
push 0
push 0
push -2147483648
push offset Lt_0A5A
push dword ptr [Lt_0A4B]
call HPREPOPERAND
add esp, 24
mov dword ptr [ebp-1152], 0
mov dword ptr [ebp-1148], 0
mov dword ptr [ebp-1144], 0
push 0
push -1
push -1
push offset Lt_0A5A
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A43
push 7
push offset Lt_0637
mov dword ptr [ebp-1116], 0
mov dword ptr [ebp-1112], 0
mov dword ptr [ebp-1108], 0
lea eax, [ebp-1116]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-1128], 0
mov dword ptr [ebp-1124], 0
mov dword ptr [ebp-1120], 0
lea eax, [ebp-1128]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-1140], 0
mov dword ptr [ebp-1136], 0
mov dword ptr [ebp-1132], 0
lea eax, [ebp-1140]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-1152]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-1152]
call OUTP
add esp, 4
lea eax, [ebp-1152]
push eax
call fb_StrDelete
add esp, 4
push -1
push 0
push 0
push -2147483648
push offset Lt_0A5A
push dword ptr [Lt_0A4D]
call HPREPOPERAND
add esp, 24
mov dword ptr [ebp-1200], 0
mov dword ptr [ebp-1196], 0
mov dword ptr [ebp-1192], 0
push 0
push -1
push -1
push offset Lt_0A5A
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A43
push 7
push offset Lt_062A
mov dword ptr [ebp-1164], 0
mov dword ptr [ebp-1160], 0
mov dword ptr [ebp-1156], 0
lea eax, [ebp-1164]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-1176], 0
mov dword ptr [ebp-1172], 0
mov dword ptr [ebp-1168], 0
lea eax, [ebp-1176]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-1188], 0
mov dword ptr [ebp-1184], 0
mov dword ptr [ebp-1180], 0
lea eax, [ebp-1188]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-1200]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-1200]
call OUTP
add esp, 4
lea eax, [ebp-1200]
push eax
call fb_StrDelete
add esp, 4
.Lt_0636:
.Lt_0635:
mov dword ptr [ebp-120], 0
mov dword ptr [ebp-116], 0
mov dword ptr [ebp-112], 0
push 0
push -1
push -1
push offset Lt_0A43
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A47
push 11
push offset Lt_0640
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
push -1
lea eax, [ebp-120]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-120]
call OUTP
add esp, 4
lea eax, [ebp-120]
push eax
call fb_StrDelete
add esp, 4
push -1
push 0
push 0
push -2147483648
push offset Lt_0A5A
push dword ptr [Lt_0A4F]
call HPREPOPERAND
add esp, 24
mov dword ptr [ebp-144], 0
mov dword ptr [ebp-140], 0
mov dword ptr [ebp-136], 0
push 0
push -1
push -1
push offset Lt_0A5A
push 13
push offset Lt_0646
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
push dword ptr [ebp-144]
call OUTP
add esp, 4
lea eax, [ebp-144]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-192], 0
mov dword ptr [ebp-188], 0
mov dword ptr [ebp-184], 0
push 0
push -1
push -1
push offset Lt_0A47
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A47 + 12
push 6
push offset Lt_0649
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
push dword ptr [ebp-192]
call OUTP
add esp, 4
lea eax, [ebp-192]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-240], 0
mov dword ptr [ebp-236], 0
mov dword ptr [ebp-232], 0
push 0
push -1
push -1
push offset Lt_0A47
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A47 + 24
push 10
push offset Lt_064E
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
push dword ptr [ebp-240]
call OUTP
add esp, 4
lea eax, [ebp-240]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-288], 0
mov dword ptr [ebp-284], 0
mov dword ptr [ebp-280], 0
push 0
push -1
push 3
push offset Lt_0654
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A47 + 12
push 6
push offset Lt_0653
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
push -1
lea eax, [ebp-288]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-288]
call OUTP
add esp, 4
lea eax, [ebp-288]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-312], 0
mov dword ptr [ebp-308], 0
mov dword ptr [ebp-304], 0
push 0
push -1
push -1
push offset Lt_0A47
push 6
push offset Lt_0659
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
push dword ptr [ebp-312]
call OUTP
add esp, 4
lea eax, [ebp-312]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-360], 0
mov dword ptr [ebp-356], 0
mov dword ptr [ebp-352], 0
push 0
push -1
push 11
push offset Lt_0075
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A47 + 12
push 6
push offset Lt_065C
mov dword ptr [ebp-324], 0
mov dword ptr [ebp-320], 0
mov dword ptr [ebp-316], 0
lea eax, [ebp-324]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-336], 0
mov dword ptr [ebp-332], 0
mov dword ptr [ebp-328], 0
lea eax, [ebp-336]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-348], 0
mov dword ptr [ebp-344], 0
mov dword ptr [ebp-340], 0
lea eax, [ebp-348]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-360]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-360]
call OUTP
add esp, 4
lea eax, [ebp-360]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-408], 0
mov dword ptr [ebp-404], 0
mov dword ptr [ebp-400], 0
push 0
push -1
push 4
push offset Lt_0661
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A47
push 6
push offset Lt_065C
mov dword ptr [ebp-372], 0
mov dword ptr [ebp-368], 0
mov dword ptr [ebp-364], 0
lea eax, [ebp-372]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-384], 0
mov dword ptr [ebp-380], 0
mov dword ptr [ebp-376], 0
lea eax, [ebp-384]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-396], 0
mov dword ptr [ebp-392], 0
mov dword ptr [ebp-388], 0
lea eax, [ebp-396]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-408]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-408]
call OUTP
add esp, 4
lea eax, [ebp-408]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-456], 0
mov dword ptr [ebp-452], 0
mov dword ptr [ebp-448], 0
push 0
push -1
push -1
push offset Lt_0A47 + 24
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A43
push 7
push offset Lt_0666
mov dword ptr [ebp-420], 0
mov dword ptr [ebp-416], 0
mov dword ptr [ebp-412], 0
lea eax, [ebp-420]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-432], 0
mov dword ptr [ebp-428], 0
mov dword ptr [ebp-424], 0
lea eax, [ebp-432]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-444], 0
mov dword ptr [ebp-440], 0
mov dword ptr [ebp-436], 0
lea eax, [ebp-444]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-456]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-456]
call OUTP
add esp, 4
lea eax, [ebp-456]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-480], 0
mov dword ptr [ebp-476], 0
mov dword ptr [ebp-472], 0
push 0
push -1
push -1
push offset Lt_0A47
push 6
push offset Lt_066B
mov dword ptr [ebp-468], 0
mov dword ptr [ebp-464], 0
mov dword ptr [ebp-460], 0
lea eax, [ebp-468]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-480]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-480]
call OUTP
add esp, 4
lea eax, [ebp-480]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-528], 0
mov dword ptr [ebp-524], 0
mov dword ptr [ebp-520], 0
push 0
push -1
push 5
push offset Lt_012B
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A43
push 7
push offset Lt_066E
mov dword ptr [ebp-492], 0
mov dword ptr [ebp-488], 0
mov dword ptr [ebp-484], 0
lea eax, [ebp-492]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-504], 0
mov dword ptr [ebp-500], 0
mov dword ptr [ebp-496], 0
lea eax, [ebp-504]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-516], 0
mov dword ptr [ebp-512], 0
mov dword ptr [ebp-508], 0
lea eax, [ebp-516]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-528]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-528]
call OUTP
add esp, 4
lea eax, [ebp-528]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-576], 0
mov dword ptr [ebp-572], 0
mov dword ptr [ebp-568], 0
push 0
push -1
push -1
push offset Lt_0A47
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A47 + 24
push 7
push offset Lt_0673
mov dword ptr [ebp-540], 0
mov dword ptr [ebp-536], 0
mov dword ptr [ebp-532], 0
lea eax, [ebp-540]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-552], 0
mov dword ptr [ebp-548], 0
mov dword ptr [ebp-544], 0
lea eax, [ebp-552]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-564], 0
mov dword ptr [ebp-560], 0
mov dword ptr [ebp-556], 0
lea eax, [ebp-564]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-576]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-576]
call OUTP
add esp, 4
lea eax, [ebp-576]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-600], 0
mov dword ptr [ebp-596], 0
mov dword ptr [ebp-592], 0
push 0
push -1
push -1
push offset Lt_0A43
push 13
push offset Lt_0679
mov dword ptr [ebp-588], 0
mov dword ptr [ebp-584], 0
mov dword ptr [ebp-580], 0
lea eax, [ebp-588]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-600]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-600]
call OUTP
add esp, 4
lea eax, [ebp-600]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-624], 0
mov dword ptr [ebp-620], 0
mov dword ptr [ebp-616], 0
push 0
push -1
push -1
push offset Lt_0A47 + 24
push 13
push offset Lt_067D
mov dword ptr [ebp-612], 0
mov dword ptr [ebp-608], 0
mov dword ptr [ebp-604], 0
lea eax, [ebp-612]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-624]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-624]
call OUTP
add esp, 4
lea eax, [ebp-624]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-672], 0
mov dword ptr [ebp-668], 0
mov dword ptr [ebp-664], 0
push 0
push -1
push -1
push offset Lt_0A43
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A47 + 24
push 8
push offset Lt_0680
mov dword ptr [ebp-636], 0
mov dword ptr [ebp-632], 0
mov dword ptr [ebp-628], 0
lea eax, [ebp-636]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-648], 0
mov dword ptr [ebp-644], 0
mov dword ptr [ebp-640], 0
lea eax, [ebp-648]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-660], 0
mov dword ptr [ebp-656], 0
mov dword ptr [ebp-652], 0
lea eax, [ebp-660]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-672]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-672]
call OUTP
add esp, 4
lea eax, [ebp-672]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-696], 0
mov dword ptr [ebp-692], 0
mov dword ptr [ebp-688], 0
push 0
push -1
push -1
push offset Lt_0A47 + 24
push 13
push offset Lt_0686
mov dword ptr [ebp-684], 0
mov dword ptr [ebp-680], 0
mov dword ptr [ebp-676], 0
lea eax, [ebp-684]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-696]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-696]
call OUTP
add esp, 4
lea eax, [ebp-696]
push eax
call fb_StrDelete
add esp, 4
cmp dword ptr [ebp+12], 0
jne .Lt_068A
mov dword ptr [ebp-1152], 0
mov dword ptr [ebp-1148], 0
mov dword ptr [ebp-1144], 0
push 0
push -1
push 6
push offset Lt_068C
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A47 + 12
push 6
push offset Lt_068B
mov dword ptr [ebp-1116], 0
mov dword ptr [ebp-1112], 0
mov dword ptr [ebp-1108], 0
lea eax, [ebp-1116]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-1128], 0
mov dword ptr [ebp-1124], 0
mov dword ptr [ebp-1120], 0
lea eax, [ebp-1128]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-1140], 0
mov dword ptr [ebp-1136], 0
mov dword ptr [ebp-1132], 0
lea eax, [ebp-1140]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-1152]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-1152]
call OUTP
add esp, 4
lea eax, [ebp-1152]
push eax
call fb_StrDelete
add esp, 4
.Lt_068A:
.Lt_0689:
mov dword ptr [ebp-744], 0
mov dword ptr [ebp-740], 0
mov dword ptr [ebp-736], 0
push 0
push -1
push 5
push offset Lt_012B
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A47
push 7
push offset Lt_0673
mov dword ptr [ebp-708], 0
mov dword ptr [ebp-704], 0
mov dword ptr [ebp-700], 0
lea eax, [ebp-708]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-720], 0
mov dword ptr [ebp-716], 0
mov dword ptr [ebp-712], 0
lea eax, [ebp-720]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-732], 0
mov dword ptr [ebp-728], 0
mov dword ptr [ebp-724], 0
lea eax, [ebp-732]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-744]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-744]
call OUTP
add esp, 4
lea eax, [ebp-744]
push eax
call fb_StrDelete
add esp, 4
push offset Lt_0695
call OUTP
add esp, 4
mov dword ptr [ebp-792], 0
mov dword ptr [ebp-788], 0
mov dword ptr [ebp-784], 0
push 0
push -1
push -1
push offset Lt_0A47
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A47 + 12
push 5
push offset Lt_0696
mov dword ptr [ebp-756], 0
mov dword ptr [ebp-752], 0
mov dword ptr [ebp-748], 0
lea eax, [ebp-756]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-768], 0
mov dword ptr [ebp-764], 0
mov dword ptr [ebp-760], 0
lea eax, [ebp-768]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-780], 0
mov dword ptr [ebp-776], 0
mov dword ptr [ebp-772], 0
lea eax, [ebp-780]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-792]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-792]
call OUTP
add esp, 4
lea eax, [ebp-792]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-840], 0
mov dword ptr [ebp-836], 0
mov dword ptr [ebp-832], 0
push 0
push -1
push 5
push offset Lt_012B
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A47 + 24
push 7
push offset Lt_069B
mov dword ptr [ebp-804], 0
mov dword ptr [ebp-800], 0
mov dword ptr [ebp-796], 0
lea eax, [ebp-804]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-816], 0
mov dword ptr [ebp-812], 0
mov dword ptr [ebp-808], 0
lea eax, [ebp-816]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-828], 0
mov dword ptr [ebp-824], 0
mov dword ptr [ebp-820], 0
lea eax, [ebp-828]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-840]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-840]
call OUTP
add esp, 4
lea eax, [ebp-840]
push eax
call fb_StrDelete
add esp, 4
push -1
push 0
push 0
push -2147483648
push offset Lt_0A5A
push dword ptr [Lt_0A57]
call HPREPOPERAND
add esp, 24
mov dword ptr [ebp-864], 0
mov dword ptr [ebp-860], 0
mov dword ptr [ebp-856], 0
push 0
push -1
push -1
push offset Lt_0A5A
push 13
push offset Lt_06A1
mov dword ptr [ebp-852], 0
mov dword ptr [ebp-848], 0
mov dword ptr [ebp-844], 0
lea eax, [ebp-852]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-864]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-864]
call OUTP
add esp, 4
lea eax, [ebp-864]
push eax
call fb_StrDelete
add esp, 4
push -1
push 0
push 0
push -2147483648
push offset Lt_0A5A
push dword ptr [Lt_0A55]
call HPREPOPERAND
add esp, 24
mov dword ptr [ebp-888], 0
mov dword ptr [ebp-884], 0
mov dword ptr [ebp-880], 0
push 0
push -1
push -1
push offset Lt_0A5A
push 13
push offset Lt_06A5
mov dword ptr [ebp-876], 0
mov dword ptr [ebp-872], 0
mov dword ptr [ebp-868], 0
lea eax, [ebp-876]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-888]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-888]
call OUTP
add esp, 4
lea eax, [ebp-888]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-912], 0
mov dword ptr [ebp-908], 0
mov dword ptr [ebp-904], 0
push 0
push -1
push -1
push offset Lt_0A47 + 24
push 13
push offset Lt_06A1
mov dword ptr [ebp-900], 0
mov dword ptr [ebp-896], 0
mov dword ptr [ebp-892], 0
lea eax, [ebp-900]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-912]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-912]
call OUTP
add esp, 4
lea eax, [ebp-912]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-960], 0
mov dword ptr [ebp-956], 0
mov dword ptr [ebp-952], 0
push 0
push -1
push -1
push offset Lt_0A47 + 12
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A43
push 7
push offset Lt_0673
mov dword ptr [ebp-924], 0
mov dword ptr [ebp-920], 0
mov dword ptr [ebp-916], 0
lea eax, [ebp-924]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-936], 0
mov dword ptr [ebp-932], 0
mov dword ptr [ebp-928], 0
lea eax, [ebp-936]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-948], 0
mov dword ptr [ebp-944], 0
mov dword ptr [ebp-940], 0
lea eax, [ebp-948]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-960]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-960]
call OUTP
add esp, 4
lea eax, [ebp-960]
push eax
call fb_StrDelete
add esp, 4
push -1
push 0
push 0
push -2147483648
push offset Lt_0A5A
push dword ptr [Lt_0A53]
call HPREPOPERAND
add esp, 24
mov dword ptr [ebp-984], 0
mov dword ptr [ebp-980], 0
mov dword ptr [ebp-976], 0
push 0
push -1
push -1
push offset Lt_0A5A
push 13
push offset Lt_06A5
mov dword ptr [ebp-972], 0
mov dword ptr [ebp-968], 0
mov dword ptr [ebp-964], 0
lea eax, [ebp-972]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-984]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-984]
call OUTP
add esp, 4
lea eax, [ebp-984]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-1008], 0
mov dword ptr [ebp-1004], 0
mov dword ptr [ebp-1000], 0
push 0
push -1
push -1
push offset Lt_0A47 + 24
push 13
push offset Lt_06A1
mov dword ptr [ebp-996], 0
mov dword ptr [ebp-992], 0
mov dword ptr [ebp-988], 0
lea eax, [ebp-996]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-1008]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-1008]
call OUTP
add esp, 4
lea eax, [ebp-1008]
push eax
call fb_StrDelete
add esp, 4
push -1
push 0
push 0
push -2147483648
push offset Lt_0A5A
push dword ptr [Lt_0A51]
call HPREPOPERAND
add esp, 24
mov dword ptr [ebp-1032], 0
mov dword ptr [ebp-1028], 0
mov dword ptr [ebp-1024], 0
push 0
push -1
push -1
push offset Lt_0A5A
push 13
push offset Lt_06A5
mov dword ptr [ebp-1020], 0
mov dword ptr [ebp-1016], 0
mov dword ptr [ebp-1012], 0
lea eax, [ebp-1020]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-1032]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-1032]
call OUTP
add esp, 4
lea eax, [ebp-1032]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-1080], 0
mov dword ptr [ebp-1076], 0
mov dword ptr [ebp-1072], 0
push 0
push -1
push 5
push offset Lt_012B
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A43
push 7
push offset Lt_062A
mov dword ptr [ebp-1044], 0
mov dword ptr [ebp-1040], 0
mov dword ptr [ebp-1036], 0
lea eax, [ebp-1044]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-1056], 0
mov dword ptr [ebp-1052], 0
mov dword ptr [ebp-1048], 0
lea eax, [ebp-1056]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-1068], 0
mov dword ptr [ebp-1064], 0
mov dword ptr [ebp-1060], 0
lea eax, [ebp-1068]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-1080]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-1080]
call OUTP
add esp, 4
lea eax, [ebp-1080]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [Lt_0A58], 4
mov dword ptr [Lt_0A59], 0
.Lt_06BB:
mov eax, dword ptr [Lt_0A59]
cmp dword ptr [Lt_0A46+eax*4], 0
jne .Lt_06BD
cmp dword ptr [Lt_0A59], 2
jge .Lt_06BF
mov dword ptr [ebp-1176], 0
mov dword ptr [ebp-1172], 0
mov dword ptr [ebp-1168], 0
push 0
push -1
push 2
push offset Lt_0618
push -1
push -1
push dword ptr [Lt_0A58]
call fb_IntToStr
add esp, 4
push eax
push -1
push 6
push offset Lt_06C0
push -1
push 3
push offset Lt_006D
push -1
push -1
mov eax, dword ptr [Lt_0A59]
imul eax, 12
lea ebx, [Lt_0A47+eax]
push ebx
push 5
push offset Lt_00CD
mov dword ptr [ebp-1116], 0
mov dword ptr [ebp-1112], 0
mov dword ptr [ebp-1108], 0
lea ebx, [ebp-1116]
push ebx
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-1128], 0
mov dword ptr [ebp-1124], 0
mov dword ptr [ebp-1120], 0
lea eax, [ebp-1128]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-1140], 0
mov dword ptr [ebp-1136], 0
mov dword ptr [ebp-1132], 0
lea eax, [ebp-1140]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-1152], 0
mov dword ptr [ebp-1148], 0
mov dword ptr [ebp-1144], 0
lea eax, [ebp-1152]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-1164], 0
mov dword ptr [ebp-1160], 0
mov dword ptr [ebp-1156], 0
lea eax, [ebp-1164]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-1176]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-1176]
call OUTP
add esp, 4
lea eax, [ebp-1176]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_06BE
.Lt_06BF:
mov dword ptr [ebp-1176], 0
mov dword ptr [ebp-1172], 0
mov dword ptr [ebp-1168], 0
push 0
push -1
push 2
push offset Lt_0618
push -1
push -1
push dword ptr [Lt_0A58]
call fb_IntToStr
add esp, 4
push eax
push -1
push 6
push offset Lt_06C0
push -1
push 3
push offset Lt_006D
push -1
push -1
mov eax, dword ptr [Lt_0A59]
imul eax, 12
lea ebx, [Lt_0A47+eax]
push ebx
push 7
push offset Lt_0134
mov dword ptr [ebp-1116], 0
mov dword ptr [ebp-1112], 0
mov dword ptr [ebp-1108], 0
lea ebx, [ebp-1116]
push ebx
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-1128], 0
mov dword ptr [ebp-1124], 0
mov dword ptr [ebp-1120], 0
lea eax, [ebp-1128]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-1140], 0
mov dword ptr [ebp-1136], 0
mov dword ptr [ebp-1132], 0
lea eax, [ebp-1140]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-1152], 0
mov dword ptr [ebp-1148], 0
mov dword ptr [ebp-1144], 0
lea eax, [ebp-1152]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-1164], 0
mov dword ptr [ebp-1160], 0
mov dword ptr [ebp-1156], 0
lea eax, [ebp-1164]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-1176]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-1176]
call OUTP
add esp, 4
lea eax, [ebp-1176]
push eax
call fb_StrDelete
add esp, 4
.Lt_06BE:
add dword ptr [Lt_0A58], 4
.Lt_06BD:
.Lt_06BC:
.Lt_06B9:
inc dword ptr [Lt_0A59]
.Lt_06B8:
cmp dword ptr [Lt_0A59], 2
jle .Lt_06BB
.Lt_06BA:
mov dword ptr [ebp-1104], 0
mov dword ptr [ebp-1100], 0
mov dword ptr [ebp-1096], 0
push 0
push -1
push -1
push dword ptr [Lt_0A44]
call fb_IntToStr
add esp, 4
push eax
push 10
push offset Lt_0094
mov dword ptr [ebp-1092], 0
mov dword ptr [ebp-1088], 0
mov dword ptr [ebp-1084], 0
lea eax, [ebp-1092]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-1104]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-1104]
call OUTP
add esp, 4
lea eax, [ebp-1104]
push eax
call fb_StrDelete
add esp, 4
.Lt_05F5:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITSINCOS_FAST_SSE, .-_EMITSINCOS_FAST_SSE

.section .bss
.balign 4
	.lcomm	Lt_0A45,12
.balign 4
	.lcomm	Lt_0A46,12
.balign 4
	.lcomm	Lt_0A44,4
.balign 4
	.lcomm	Lt_0A59,4
.balign 4
	.lcomm	Lt_0A58,4
.balign 4
	.lcomm	Lt_0A43,12
.balign 4
	.lcomm	Lt_0A5A,12
.balign 4
	.lcomm	Lt_0A47,36
.balign 4
	.lcomm	Lt_0A48,4
.balign 4
	.lcomm	Lt_0A4E,4
.balign 4
	.lcomm	Lt_0A4A,4
.balign 4
	.lcomm	Lt_0A4C,4
.balign 4
	.lcomm	Lt_0A50,4
.balign 4
	.lcomm	Lt_0A52,4
.balign 4
	.lcomm	Lt_0A54,4
.balign 4
	.lcomm	Lt_0A56,4
.balign 4
	.lcomm	Lt_0A49,4
.balign 4
	.lcomm	Lt_0A4F,4
.balign 4
	.lcomm	Lt_0A4B,4
.balign 4
	.lcomm	Lt_0A4D,4
.balign 4
	.lcomm	Lt_0A51,4
.balign 4
	.lcomm	Lt_0A53,4
.balign 4
	.lcomm	Lt_0A55,4
.balign 4
	.lcomm	Lt_0A57,4

.section .text
.balign 16
_EMITSIN_SSE:
.type _EMITSIN_SSE, @function
push ebp
mov ebp, esp
sub esp, 76
push ebx
.Lt_06CF:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_06D1
mov dword ptr [ebp-4], 22
jmp .Lt_0A5B
.Lt_06D1:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0A5B:
mov eax, dword ptr [ebp-4]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+4]
mov dword ptr [Lt_0A5C], ebx
mov ebx, dword ptr [Lt_0A5C]
cmp ebx, 4
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ENV+120]
cmp eax, 1
sete al
shr eax, 1
sbb eax, eax
and ebx, eax
je .Lt_06D4
push 0
push dword ptr [ebp+8]
call _EMITSINCOS_FAST_SSE
add esp, 8
jmp .Lt_06D0
.Lt_06D4:
.Lt_06D3:
push -1
push 0
push 0
push -2147483648
push offset Lt_0A5F
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+16], 1
jne .Lt_06D6
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
push 0
push -1
push -1
push dword ptr [Lt_0A5C]
call fb_IntToStr
add esp, 4
push eax
push 10
push offset Lt_0084
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
call OUTP
add esp, 4
lea eax, [ebp-52]
push eax
call fb_StrDelete
add esp, 4
cmp dword ptr [Lt_0A5C], 4
jle .Lt_06DA
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
push 0
push -1
push -1
push offset Lt_0A5F
push 25
push offset Lt_008A
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
push dword ptr [ebp-76]
call OUTP
add esp, 4
lea eax, [ebp-76]
push eax
call fb_StrDelete
add esp, 4
push offset Lt_008D
call OUTP
add esp, 4
jmp .Lt_06D9
.Lt_06DA:
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
push 0
push -1
push -1
push offset Lt_0A5F
push 24
push offset Lt_008F
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
push dword ptr [ebp-76]
call OUTP
add esp, 4
lea eax, [ebp-76]
push eax
call fb_StrDelete
add esp, 4
push offset Lt_0092
call OUTP
add esp, 4
.Lt_06D9:
.Lt_06D6:
.Lt_06D5:
push offset Lt_06DF
call OUTP
add esp, 4
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+16], 0
jne .Lt_06E1
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
push 0
push -1
push -1
push dword ptr [Lt_0A5C]
call fb_IntToStr
add esp, 4
push eax
push 10
push offset Lt_0084
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
call OUTP
add esp, 4
lea eax, [ebp-52]
push eax
call fb_StrDelete
add esp, 4
.Lt_06E1:
.Lt_06E0:
cmp dword ptr [Lt_0A5C], 4
jle .Lt_06E5
push offset Lt_026E
call OUTP
add esp, 4
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
push 0
push -1
push 16
push offset Lt_026F
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A5F
push 8
push offset Lt_012A
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
push dword ptr [ebp-76]
call OUTP
add esp, 4
lea eax, [ebp-76]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_06E4
.Lt_06E5:
push offset Lt_0274
call OUTP
add esp, 4
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
push 0
push -1
push 16
push offset Lt_00CE
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A5F
push 7
push offset Lt_0134
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
push dword ptr [ebp-76]
call OUTP
add esp, 4
lea eax, [ebp-76]
push eax
call fb_StrDelete
add esp, 4
.Lt_06E4:
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
push 0
push -1
push -1
push dword ptr [Lt_0A5C]
call fb_IntToStr
add esp, 4
push eax
push 10
push offset Lt_0094
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
push dword ptr [ebp-28]
call OUTP
add esp, 4
lea eax, [ebp-28]
push eax
call fb_StrDelete
add esp, 4
.Lt_06D0:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITSIN_SSE, .-_EMITSIN_SSE

.section .bss
.balign 4
	.lcomm	Lt_0A5F,12
.balign 4
	.lcomm	Lt_0A5C,4

.section .text
.balign 16
_EMITASIN_SSE:
.type _EMITASIN_SSE, @function
push ebp
mov ebp, esp
sub esp, 76
push ebx
.Lt_06F0:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_06F2
mov dword ptr [ebp-4], 22
jmp .Lt_0A60
.Lt_06F2:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0A60:
mov eax, dword ptr [ebp-4]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+4]
mov dword ptr [Lt_0A61], ebx
push -1
push 0
push 0
push -2147483648
push offset Lt_0A62
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx+16], 1
jne .Lt_06F5
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
push 0
push -1
push -1
push dword ptr [Lt_0A61]
call fb_IntToStr
add esp, 4
push eax
push 10
push offset Lt_0084
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
call OUTP
add esp, 4
lea eax, [ebp-52]
push eax
call fb_StrDelete
add esp, 4
cmp dword ptr [Lt_0A61], 4
jle .Lt_06F9
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
push 0
push -1
push -1
push offset Lt_0A62
push 25
push offset Lt_008A
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
push dword ptr [ebp-76]
call OUTP
add esp, 4
lea eax, [ebp-76]
push eax
call fb_StrDelete
add esp, 4
push offset Lt_008D
call OUTP
add esp, 4
jmp .Lt_06F8
.Lt_06F9:
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
push 0
push -1
push -1
push offset Lt_0A62
push 24
push offset Lt_008F
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
push dword ptr [ebp-76]
call OUTP
add esp, 4
lea eax, [ebp-76]
push eax
call fb_StrDelete
add esp, 4
push offset Lt_0092
call OUTP
add esp, 4
.Lt_06F8:
.Lt_06F5:
.Lt_06F4:
push offset Lt_0203
call OUTP
add esp, 4
push offset Lt_06FE
call OUTP
add esp, 4
push offset Lt_04C4
call OUTP
add esp, 4
push offset Lt_06FF
call OUTP
add esp, 4
push offset Lt_0700
call OUTP
add esp, 4
push offset Lt_0499
call OUTP
add esp, 4
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+16], 0
jne .Lt_0702
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
push 0
push -1
push -1
push dword ptr [Lt_0A61]
call fb_IntToStr
add esp, 4
push eax
push 10
push offset Lt_0084
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
call OUTP
add esp, 4
lea eax, [ebp-52]
push eax
call fb_StrDelete
add esp, 4
.Lt_0702:
.Lt_0701:
cmp dword ptr [Lt_0A61], 4
jle .Lt_0706
push offset Lt_026E
call OUTP
add esp, 4
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
push 0
push -1
push 16
push offset Lt_026F
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A62
push 8
push offset Lt_012A
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
push dword ptr [ebp-76]
call OUTP
add esp, 4
lea eax, [ebp-76]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0705
.Lt_0706:
push offset Lt_0274
call OUTP
add esp, 4
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
push 0
push -1
push 16
push offset Lt_00CE
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A62
push 7
push offset Lt_0134
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
push dword ptr [ebp-76]
call OUTP
add esp, 4
lea eax, [ebp-76]
push eax
call fb_StrDelete
add esp, 4
.Lt_0705:
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
push 0
push -1
push -1
push dword ptr [Lt_0A61]
call fb_IntToStr
add esp, 4
push eax
push 10
push offset Lt_0094
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
push dword ptr [ebp-28]
call OUTP
add esp, 4
lea eax, [ebp-28]
push eax
call fb_StrDelete
add esp, 4
.Lt_06F1:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITASIN_SSE, .-_EMITASIN_SSE

.section .bss
.balign 4
	.lcomm	Lt_0A62,12
.balign 4
	.lcomm	Lt_0A61,4

.section .text
.balign 16
_EMITCOS_SSE:
.type _EMITCOS_SSE, @function
push ebp
mov ebp, esp
sub esp, 76
push ebx
.Lt_0711:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_0713
mov dword ptr [ebp-4], 22
jmp .Lt_0A63
.Lt_0713:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0A63:
mov eax, dword ptr [ebp-4]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+4]
mov dword ptr [Lt_0A64], ebx
mov ebx, dword ptr [Lt_0A64]
cmp ebx, 4
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ENV+120]
cmp eax, 1
sete al
shr eax, 1
sbb eax, eax
and ebx, eax
je .Lt_0716
push -1
push dword ptr [ebp+8]
call _EMITSINCOS_FAST_SSE
add esp, 8
jmp .Lt_0712
.Lt_0716:
.Lt_0715:
push -1
push 0
push 0
push -2147483648
push offset Lt_0A67
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+16], 1
jne .Lt_0718
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
push 0
push -1
push -1
push dword ptr [Lt_0A64]
call fb_IntToStr
add esp, 4
push eax
push 10
push offset Lt_0084
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
call OUTP
add esp, 4
lea eax, [ebp-52]
push eax
call fb_StrDelete
add esp, 4
cmp dword ptr [Lt_0A64], 4
jle .Lt_071C
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
push 0
push -1
push -1
push offset Lt_0A67
push 25
push offset Lt_008A
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
push dword ptr [ebp-76]
call OUTP
add esp, 4
lea eax, [ebp-76]
push eax
call fb_StrDelete
add esp, 4
push offset Lt_008D
call OUTP
add esp, 4
jmp .Lt_071B
.Lt_071C:
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
push 0
push -1
push -1
push offset Lt_0A67
push 24
push offset Lt_008F
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
push dword ptr [ebp-76]
call OUTP
add esp, 4
lea eax, [ebp-76]
push eax
call fb_StrDelete
add esp, 4
push offset Lt_0092
call OUTP
add esp, 4
.Lt_071B:
.Lt_0718:
.Lt_0717:
push offset Lt_0721
call OUTP
add esp, 4
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+16], 0
jne .Lt_0723
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
push 0
push -1
push -1
push dword ptr [Lt_0A64]
call fb_IntToStr
add esp, 4
push eax
push 10
push offset Lt_0084
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
call OUTP
add esp, 4
lea eax, [ebp-52]
push eax
call fb_StrDelete
add esp, 4
.Lt_0723:
.Lt_0722:
cmp dword ptr [Lt_0A64], 4
jle .Lt_0727
push offset Lt_026E
call OUTP
add esp, 4
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
push 0
push -1
push 16
push offset Lt_026F
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A67
push 8
push offset Lt_012A
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
push dword ptr [ebp-76]
call OUTP
add esp, 4
lea eax, [ebp-76]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0726
.Lt_0727:
push offset Lt_0274
call OUTP
add esp, 4
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
push 0
push -1
push 16
push offset Lt_00CE
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A67
push 7
push offset Lt_0134
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
push dword ptr [ebp-76]
call OUTP
add esp, 4
lea eax, [ebp-76]
push eax
call fb_StrDelete
add esp, 4
.Lt_0726:
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
push 0
push -1
push -1
push dword ptr [Lt_0A64]
call fb_IntToStr
add esp, 4
push eax
push 10
push offset Lt_0094
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
push dword ptr [ebp-28]
call OUTP
add esp, 4
lea eax, [ebp-28]
push eax
call fb_StrDelete
add esp, 4
.Lt_0712:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITCOS_SSE, .-_EMITCOS_SSE

.section .bss
.balign 4
	.lcomm	Lt_0A67,12
.balign 4
	.lcomm	Lt_0A64,4

.section .text
.balign 16
_EMITACOS_SSE:
.type _EMITACOS_SSE, @function
push ebp
mov ebp, esp
sub esp, 76
push ebx
.Lt_0732:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_0734
mov dword ptr [ebp-4], 22
jmp .Lt_0A68
.Lt_0734:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0A68:
mov eax, dword ptr [ebp-4]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+4]
mov dword ptr [Lt_0A69], ebx
push -1
push 0
push 0
push -2147483648
push offset Lt_0A6A
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx+16], 1
jne .Lt_0737
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
push 0
push -1
push -1
push dword ptr [Lt_0A69]
call fb_IntToStr
add esp, 4
push eax
push 10
push offset Lt_0084
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
call OUTP
add esp, 4
lea eax, [ebp-52]
push eax
call fb_StrDelete
add esp, 4
cmp dword ptr [Lt_0A69], 4
jle .Lt_073B
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
push 0
push -1
push -1
push offset Lt_0A6A
push 25
push offset Lt_008A
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
push dword ptr [ebp-76]
call OUTP
add esp, 4
lea eax, [ebp-76]
push eax
call fb_StrDelete
add esp, 4
push offset Lt_008D
call OUTP
add esp, 4
jmp .Lt_073A
.Lt_073B:
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
push 0
push -1
push -1
push offset Lt_0A6A
push 24
push offset Lt_008F
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
push dword ptr [ebp-76]
call OUTP
add esp, 4
lea eax, [ebp-76]
push eax
call fb_StrDelete
add esp, 4
push offset Lt_0092
call OUTP
add esp, 4
.Lt_073A:
.Lt_0737:
.Lt_0736:
push offset Lt_0203
call OUTP
add esp, 4
push offset Lt_06FE
call OUTP
add esp, 4
push offset Lt_04C4
call OUTP
add esp, 4
push offset Lt_06FF
call OUTP
add esp, 4
push offset Lt_0700
call OUTP
add esp, 4
push offset Lt_04C2
call OUTP
add esp, 4
push offset Lt_0499
call OUTP
add esp, 4
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+16], 0
jne .Lt_0741
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
push 0
push -1
push -1
push dword ptr [Lt_0A69]
call fb_IntToStr
add esp, 4
push eax
push 10
push offset Lt_0084
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
call OUTP
add esp, 4
lea eax, [ebp-52]
push eax
call fb_StrDelete
add esp, 4
.Lt_0741:
.Lt_0740:
cmp dword ptr [Lt_0A69], 4
jle .Lt_0745
push offset Lt_026E
call OUTP
add esp, 4
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
push 0
push -1
push 16
push offset Lt_026F
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A6A
push 8
push offset Lt_012A
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
push dword ptr [ebp-76]
call OUTP
add esp, 4
lea eax, [ebp-76]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0744
.Lt_0745:
push offset Lt_0274
call OUTP
add esp, 4
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
push 0
push -1
push 16
push offset Lt_00CE
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A6A
push 7
push offset Lt_0134
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
push dword ptr [ebp-76]
call OUTP
add esp, 4
lea eax, [ebp-76]
push eax
call fb_StrDelete
add esp, 4
.Lt_0744:
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
push 0
push -1
push -1
push dword ptr [Lt_0A69]
call fb_IntToStr
add esp, 4
push eax
push 10
push offset Lt_0094
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
push dword ptr [ebp-28]
call OUTP
add esp, 4
lea eax, [ebp-28]
push eax
call fb_StrDelete
add esp, 4
.Lt_0733:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITACOS_SSE, .-_EMITACOS_SSE

.section .bss
.balign 4
	.lcomm	Lt_0A6A,12
.balign 4
	.lcomm	Lt_0A69,4

.section .text
.balign 16
_EMITTAN_SSE:
.type _EMITTAN_SSE, @function
push ebp
mov ebp, esp
sub esp, 76
push ebx
.Lt_0750:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_0752
mov dword ptr [ebp-4], 22
jmp .Lt_0A6B
.Lt_0752:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0A6B:
mov eax, dword ptr [ebp-4]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+4]
mov dword ptr [Lt_0A6C], ebx
push -1
push 0
push 0
push -2147483648
push offset Lt_0A6D
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx+16], 1
jne .Lt_0755
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
push 0
push -1
push -1
push dword ptr [Lt_0A6C]
call fb_IntToStr
add esp, 4
push eax
push 10
push offset Lt_0084
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
call OUTP
add esp, 4
lea eax, [ebp-52]
push eax
call fb_StrDelete
add esp, 4
cmp dword ptr [Lt_0A6C], 4
jle .Lt_0759
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
push 0
push -1
push -1
push offset Lt_0A6D
push 25
push offset Lt_008A
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
push dword ptr [ebp-76]
call OUTP
add esp, 4
lea eax, [ebp-76]
push eax
call fb_StrDelete
add esp, 4
push offset Lt_008D
call OUTP
add esp, 4
jmp .Lt_0758
.Lt_0759:
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
push 0
push -1
push -1
push offset Lt_0A6D
push 24
push offset Lt_008F
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
push dword ptr [ebp-76]
call OUTP
add esp, 4
lea eax, [ebp-76]
push eax
call fb_StrDelete
add esp, 4
push offset Lt_0092
call OUTP
add esp, 4
.Lt_0758:
.Lt_0755:
.Lt_0754:
push offset Lt_075E
call OUTP
add esp, 4
push offset Lt_075F
call OUTP
add esp, 4
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+16], 0
jne .Lt_0761
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
push 0
push -1
push -1
push dword ptr [Lt_0A6C]
call fb_IntToStr
add esp, 4
push eax
push 10
push offset Lt_0084
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
call OUTP
add esp, 4
lea eax, [ebp-52]
push eax
call fb_StrDelete
add esp, 4
.Lt_0761:
.Lt_0760:
cmp dword ptr [Lt_0A6C], 4
jle .Lt_0765
push offset Lt_026E
call OUTP
add esp, 4
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
push 0
push -1
push 16
push offset Lt_026F
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A6D
push 8
push offset Lt_012A
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
push dword ptr [ebp-76]
call OUTP
add esp, 4
lea eax, [ebp-76]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0764
.Lt_0765:
push offset Lt_0274
call OUTP
add esp, 4
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
push 0
push -1
push 16
push offset Lt_00CE
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A6D
push 7
push offset Lt_0134
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
push dword ptr [ebp-76]
call OUTP
add esp, 4
lea eax, [ebp-76]
push eax
call fb_StrDelete
add esp, 4
.Lt_0764:
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
push 0
push -1
push -1
push dword ptr [Lt_0A6C]
call fb_IntToStr
add esp, 4
push eax
push 10
push offset Lt_0094
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
push dword ptr [ebp-28]
call OUTP
add esp, 4
lea eax, [ebp-28]
push eax
call fb_StrDelete
add esp, 4
.Lt_0751:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITTAN_SSE, .-_EMITTAN_SSE

.section .bss
.balign 4
	.lcomm	Lt_0A6D,12
.balign 4
	.lcomm	Lt_0A6C,4

.section .text
.balign 16
_EMITATAN_SSE:
.type _EMITATAN_SSE, @function
push ebp
mov ebp, esp
sub esp, 76
push ebx
.Lt_0770:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_0772
mov dword ptr [ebp-4], 22
jmp .Lt_0A6E
.Lt_0772:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0A6E:
mov eax, dword ptr [ebp-4]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+4]
mov dword ptr [Lt_0A6F], ebx
push -1
push 0
push 0
push -2147483648
push offset Lt_0A70
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx+16], 1
jne .Lt_0775
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
push 0
push -1
push -1
push dword ptr [Lt_0A6F]
call fb_IntToStr
add esp, 4
push eax
push 10
push offset Lt_0084
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
call OUTP
add esp, 4
lea eax, [ebp-52]
push eax
call fb_StrDelete
add esp, 4
cmp dword ptr [Lt_0A6F], 4
jle .Lt_0779
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
push 0
push -1
push -1
push offset Lt_0A70
push 25
push offset Lt_008A
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
push dword ptr [ebp-76]
call OUTP
add esp, 4
lea eax, [ebp-76]
push eax
call fb_StrDelete
add esp, 4
push offset Lt_008D
call OUTP
add esp, 4
jmp .Lt_0778
.Lt_0779:
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
push 0
push -1
push -1
push offset Lt_0A70
push 24
push offset Lt_008F
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
push dword ptr [ebp-76]
call OUTP
add esp, 4
lea eax, [ebp-76]
push eax
call fb_StrDelete
add esp, 4
push offset Lt_0092
call OUTP
add esp, 4
.Lt_0778:
.Lt_0775:
.Lt_0774:
push offset Lt_04C4
call OUTP
add esp, 4
push offset Lt_0499
call OUTP
add esp, 4
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+16], 0
jne .Lt_077F
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
push 0
push -1
push -1
push dword ptr [Lt_0A6F]
call fb_IntToStr
add esp, 4
push eax
push 10
push offset Lt_0084
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
call OUTP
add esp, 4
lea eax, [ebp-52]
push eax
call fb_StrDelete
add esp, 4
.Lt_077F:
.Lt_077E:
cmp dword ptr [Lt_0A6F], 4
jle .Lt_0783
push offset Lt_026E
call OUTP
add esp, 4
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
push 0
push -1
push 16
push offset Lt_026F
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A70
push 8
push offset Lt_012A
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
push dword ptr [ebp-76]
call OUTP
add esp, 4
lea eax, [ebp-76]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0782
.Lt_0783:
push offset Lt_0274
call OUTP
add esp, 4
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
push 0
push -1
push 16
push offset Lt_00CE
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A70
push 7
push offset Lt_0134
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
push dword ptr [ebp-76]
call OUTP
add esp, 4
lea eax, [ebp-76]
push eax
call fb_StrDelete
add esp, 4
.Lt_0782:
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
push 0
push -1
push -1
push dword ptr [Lt_0A6F]
call fb_IntToStr
add esp, 4
push eax
push 10
push offset Lt_0094
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
push dword ptr [ebp-28]
call OUTP
add esp, 4
lea eax, [ebp-28]
push eax
call fb_StrDelete
add esp, 4
.Lt_0771:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITATAN_SSE, .-_EMITATAN_SSE

.section .bss
.balign 4
	.lcomm	Lt_0A70,12
.balign 4
	.lcomm	Lt_0A6F,4

.section .text
.balign 16
_EMITSQRT_SSE:
.type _EMITSQRT_SSE, @function
push ebp
mov ebp, esp
sub esp, 76
push ebx
.Lt_078E:
push -1
push 0
push 0
push -2147483648
push offset Lt_0A72
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_0790
mov dword ptr [ebp-4], 22
jmp .Lt_0A71
.Lt_0790:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0A71:
mov eax, dword ptr [ebp-4]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+4]
mov dword ptr [Lt_0A73], ebx
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx+16], 0
jne .Lt_0793
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
push 0
push -1
push -1
push dword ptr [Lt_0A73]
call fb_IntToStr
add esp, 4
push eax
push 10
push offset Lt_0084
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
push dword ptr [ebp-28]
call OUTP
add esp, 4
lea eax, [ebp-28]
push eax
call fb_StrDelete
add esp, 4
cmp dword ptr [Lt_0A73], 4
jle .Lt_0797
push offset Lt_026E
call OUTP
add esp, 4
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
push 0
push -1
push 16
push offset Lt_026F
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A72
push 8
push offset Lt_012A
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
push dword ptr [ebp-76]
call OUTP
add esp, 4
lea eax, [ebp-76]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0796
.Lt_0797:
push offset Lt_0274
call OUTP
add esp, 4
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
push 0
push -1
push 16
push offset Lt_00CE
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A72
push 7
push offset Lt_0134
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
push dword ptr [ebp-76]
call OUTP
add esp, 4
lea eax, [ebp-76]
push eax
call fb_StrDelete
add esp, 4
.Lt_0796:
.Lt_0793:
.Lt_0792:
cmp dword ptr [Lt_0A73], 4
jle .Lt_07A1
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
push 0
push -1
push -1
push offset Lt_0A72
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A72
push 8
push offset Lt_07A2
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
push -1
lea eax, [ebp-52]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-52]
call OUTP
add esp, 4
lea eax, [ebp-52]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_07A0
.Lt_07A1:
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
push 0
push -1
push -1
push offset Lt_0A72
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A72
push 8
push offset Lt_07A7
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
push -1
lea eax, [ebp-52]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-52]
call OUTP
add esp, 4
lea eax, [ebp-52]
push eax
call fb_StrDelete
add esp, 4
.Lt_07A0:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+16], 0
jne .Lt_07AD
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
push 0
push -1
push -1
push dword ptr [Lt_0A73]
call fb_IntToStr
add esp, 4
push eax
push 10
push offset Lt_0094
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
push dword ptr [ebp-28]
call OUTP
add esp, 4
lea eax, [ebp-28]
push eax
call fb_StrDelete
add esp, 4
.Lt_07AD:
.Lt_07AC:
.Lt_078F:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITSQRT_SSE, .-_EMITSQRT_SSE

.section .bss
.balign 4
	.lcomm	Lt_0A72,12
.balign 4
	.lcomm	Lt_0A73,4

.section .text
.balign 16
_EMITRSQRT_SSE:
.type _EMITRSQRT_SSE, @function
push ebp
mov ebp, esp
sub esp, 76
push ebx
.Lt_07B0:
push -1
push 0
push 0
push -2147483648
push offset Lt_0A75
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_07B2
mov dword ptr [ebp-4], 22
jmp .Lt_0A74
.Lt_07B2:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0A74:
mov eax, dword ptr [ebp-4]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+4]
mov dword ptr [Lt_0A76], ebx
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx+16], 0
jne .Lt_07B5
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
push 0
push -1
push -1
push dword ptr [Lt_0A76]
call fb_IntToStr
add esp, 4
push eax
push 10
push offset Lt_0084
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
push dword ptr [ebp-28]
call OUTP
add esp, 4
lea eax, [ebp-28]
push eax
call fb_StrDelete
add esp, 4
cmp dword ptr [Lt_0A76], 4
jle .Lt_07B9
push offset Lt_026E
call OUTP
add esp, 4
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
push 0
push -1
push 16
push offset Lt_026F
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A75
push 8
push offset Lt_012A
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
push dword ptr [ebp-76]
call OUTP
add esp, 4
lea eax, [ebp-76]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_07B8
.Lt_07B9:
push offset Lt_0274
call OUTP
add esp, 4
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
push 0
push -1
push 16
push offset Lt_00CE
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A75
push 7
push offset Lt_0134
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
push dword ptr [ebp-76]
call OUTP
add esp, 4
lea eax, [ebp-76]
push eax
call fb_StrDelete
add esp, 4
.Lt_07B8:
.Lt_07B5:
.Lt_07B4:
cmp dword ptr [Lt_0A76], 4
jle .Lt_07C3
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
push 0
push -1
push -1
push offset Lt_0A75
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A75
push 9
push offset Lt_07C4
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
push -1
lea eax, [ebp-52]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-52]
call OUTP
add esp, 4
lea eax, [ebp-52]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_07C2
.Lt_07C3:
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
push 0
push -1
push -1
push offset Lt_0A75
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A75
push 9
push offset Lt_07C9
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
push -1
lea eax, [ebp-52]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-52]
call OUTP
add esp, 4
lea eax, [ebp-52]
push eax
call fb_StrDelete
add esp, 4
.Lt_07C2:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+16], 0
jne .Lt_07CF
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
push 0
push -1
push -1
push dword ptr [Lt_0A76]
call fb_IntToStr
add esp, 4
push eax
push 10
push offset Lt_0094
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
push dword ptr [ebp-28]
call OUTP
add esp, 4
lea eax, [ebp-28]
push eax
call fb_StrDelete
add esp, 4
.Lt_07CF:
.Lt_07CE:
.Lt_07B1:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITRSQRT_SSE, .-_EMITRSQRT_SSE

.section .bss
.balign 4
	.lcomm	Lt_0A75,12
.balign 4
	.lcomm	Lt_0A76,4

.section .text
.balign 16
_EMITRCP_SSE:
.type _EMITRCP_SSE, @function
push ebp
mov ebp, esp
sub esp, 76
push ebx
.Lt_07D2:
push -1
push 0
push 0
push -2147483648
push offset Lt_0A78
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_07D4
mov dword ptr [ebp-4], 22
jmp .Lt_0A77
.Lt_07D4:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0A77:
mov eax, dword ptr [ebp-4]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+4]
mov dword ptr [Lt_0A79], ebx
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx+16], 0
jne .Lt_07D7
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
push 0
push -1
push -1
push dword ptr [Lt_0A79]
call fb_IntToStr
add esp, 4
push eax
push 10
push offset Lt_0084
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
push dword ptr [ebp-28]
call OUTP
add esp, 4
lea eax, [ebp-28]
push eax
call fb_StrDelete
add esp, 4
cmp dword ptr [Lt_0A79], 4
jle .Lt_07DB
push offset Lt_026E
call OUTP
add esp, 4
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
push 0
push -1
push 16
push offset Lt_026F
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A78
push 8
push offset Lt_012A
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
push dword ptr [ebp-76]
call OUTP
add esp, 4
lea eax, [ebp-76]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_07DA
.Lt_07DB:
push offset Lt_0274
call OUTP
add esp, 4
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
push 0
push -1
push 16
push offset Lt_00CE
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A78
push 7
push offset Lt_0134
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
push dword ptr [ebp-76]
call OUTP
add esp, 4
lea eax, [ebp-76]
push eax
call fb_StrDelete
add esp, 4
.Lt_07DA:
.Lt_07D7:
.Lt_07D6:
cmp dword ptr [Lt_0A79], 4
jle .Lt_07E5
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
push 0
push -1
push -1
push offset Lt_0A78
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A78
push 7
push offset Lt_07E6
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
push -1
lea eax, [ebp-52]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-52]
call OUTP
add esp, 4
lea eax, [ebp-52]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_07E4
.Lt_07E5:
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
push 0
push -1
push -1
push offset Lt_0A78
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A78
push 7
push offset Lt_07EB
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
push -1
lea eax, [ebp-52]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-52]
call OUTP
add esp, 4
lea eax, [ebp-52]
push eax
call fb_StrDelete
add esp, 4
.Lt_07E4:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+16], 0
jne .Lt_07F1
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
push 0
push -1
push -1
push dword ptr [Lt_0A79]
call fb_IntToStr
add esp, 4
push eax
push 10
push offset Lt_0094
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
push dword ptr [ebp-28]
call OUTP
add esp, 4
lea eax, [ebp-28]
push eax
call fb_StrDelete
add esp, 4
.Lt_07F1:
.Lt_07F0:
.Lt_07D3:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITRCP_SSE, .-_EMITRCP_SSE

.section .bss
.balign 4
	.lcomm	Lt_0A78,12
.balign 4
	.lcomm	Lt_0A79,4

.section .text
.balign 16
_EMITLOG_SSE:
.type _EMITLOG_SSE, @function
push ebp
mov ebp, esp
sub esp, 76
push ebx
.Lt_07F4:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_07F6
mov dword ptr [ebp-4], 22
jmp .Lt_0A7A
.Lt_07F6:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0A7A:
mov eax, dword ptr [ebp-4]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+4]
mov dword ptr [Lt_0A7B], ebx
push -1
push 0
push 0
push -2147483648
push offset Lt_0A7C
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx+16], 1
jne .Lt_07F9
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
push 0
push -1
push -1
push dword ptr [Lt_0A7B]
call fb_IntToStr
add esp, 4
push eax
push 10
push offset Lt_0084
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
call OUTP
add esp, 4
lea eax, [ebp-52]
push eax
call fb_StrDelete
add esp, 4
cmp dword ptr [Lt_0A7B], 4
jle .Lt_07FD
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
push 0
push -1
push -1
push offset Lt_0A7C
push 25
push offset Lt_008A
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
push dword ptr [ebp-76]
call OUTP
add esp, 4
lea eax, [ebp-76]
push eax
call fb_StrDelete
add esp, 4
push offset Lt_008D
call OUTP
add esp, 4
jmp .Lt_07FC
.Lt_07FD:
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
push 0
push -1
push -1
push offset Lt_0A7C
push 24
push offset Lt_008F
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
push dword ptr [ebp-76]
call OUTP
add esp, 4
lea eax, [ebp-76]
push eax
call fb_StrDelete
add esp, 4
push offset Lt_0092
call OUTP
add esp, 4
.Lt_07FC:
.Lt_07F9:
.Lt_07F8:
push offset Lt_0802
call OUTP
add esp, 4
push offset Lt_04C2
call OUTP
add esp, 4
push offset Lt_04BF
call OUTP
add esp, 4
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+16], 0
jne .Lt_0804
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
push 0
push -1
push -1
push dword ptr [Lt_0A7B]
call fb_IntToStr
add esp, 4
push eax
push 10
push offset Lt_0084
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
call OUTP
add esp, 4
lea eax, [ebp-52]
push eax
call fb_StrDelete
add esp, 4
.Lt_0804:
.Lt_0803:
cmp dword ptr [Lt_0A7B], 4
jle .Lt_0808
push offset Lt_026E
call OUTP
add esp, 4
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
push 0
push -1
push 16
push offset Lt_026F
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A7C
push 8
push offset Lt_012A
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
push dword ptr [ebp-76]
call OUTP
add esp, 4
lea eax, [ebp-76]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0807
.Lt_0808:
push offset Lt_0274
call OUTP
add esp, 4
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
push 0
push -1
push 16
push offset Lt_00CE
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A7C
push 7
push offset Lt_0134
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
push dword ptr [ebp-76]
call OUTP
add esp, 4
lea eax, [ebp-76]
push eax
call fb_StrDelete
add esp, 4
.Lt_0807:
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
push 0
push -1
push -1
push dword ptr [Lt_0A7B]
call fb_IntToStr
add esp, 4
push eax
push 10
push offset Lt_0094
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
push dword ptr [ebp-28]
call OUTP
add esp, 4
lea eax, [ebp-28]
push eax
call fb_StrDelete
add esp, 4
.Lt_07F5:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITLOG_SSE, .-_EMITLOG_SSE

.section .bss
.balign 4
	.lcomm	Lt_0A7C,12
.balign 4
	.lcomm	Lt_0A7B,4

.section .text
.balign 16
_EMITEXP_SSE:
.type _EMITEXP_SSE, @function
push ebp
mov ebp, esp
sub esp, 76
push ebx
.Lt_0813:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_0815
mov dword ptr [ebp-4], 22
jmp .Lt_0A7D
.Lt_0815:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0A7D:
mov eax, dword ptr [ebp-4]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+4]
mov dword ptr [Lt_0A7E], ebx
push -1
push 0
push 0
push -2147483648
push offset Lt_0A7F
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx+16], 1
jne .Lt_0818
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
push 0
push -1
push -1
push dword ptr [Lt_0A7E]
call fb_IntToStr
add esp, 4
push eax
push 10
push offset Lt_0084
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
call OUTP
add esp, 4
lea eax, [ebp-52]
push eax
call fb_StrDelete
add esp, 4
cmp dword ptr [Lt_0A7E], 4
jle .Lt_081C
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
push 0
push -1
push -1
push offset Lt_0A7F
push 25
push offset Lt_008A
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
push dword ptr [ebp-76]
call OUTP
add esp, 4
lea eax, [ebp-76]
push eax
call fb_StrDelete
add esp, 4
push offset Lt_008D
call OUTP
add esp, 4
jmp .Lt_081B
.Lt_081C:
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
push 0
push -1
push -1
push offset Lt_0A7F
push 24
push offset Lt_008F
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
push dword ptr [ebp-76]
call OUTP
add esp, 4
lea eax, [ebp-76]
push eax
call fb_StrDelete
add esp, 4
push offset Lt_0092
call OUTP
add esp, 4
.Lt_081B:
.Lt_0818:
.Lt_0817:
push offset Lt_0821
call OUTP
add esp, 4
push offset Lt_0822
call OUTP
add esp, 4
push offset Lt_0823
call OUTP
add esp, 4
push offset Lt_04C0
call OUTP
add esp, 4
push offset Lt_0824
call OUTP
add esp, 4
push offset Lt_04C2
call OUTP
add esp, 4
push offset Lt_04C3
call OUTP
add esp, 4
push offset Lt_0825
call HPUSH
add esp, 4
push offset Lt_0826
call OUTP
add esp, 4
push offset Lt_00B2
call OUTP
add esp, 4
push offset Lt_04C5
call OUTP
add esp, 4
push offset Lt_04C6
call OUTP
add esp, 4
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+16], 0
jne .Lt_0828
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
push 0
push -1
push -1
push dword ptr [Lt_0A7E]
call fb_IntToStr
add esp, 4
push eax
push 10
push offset Lt_0084
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
call OUTP
add esp, 4
lea eax, [ebp-52]
push eax
call fb_StrDelete
add esp, 4
.Lt_0828:
.Lt_0827:
cmp dword ptr [Lt_0A7E], 4
jle .Lt_082C
push offset Lt_026E
call OUTP
add esp, 4
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
push 0
push -1
push 16
push offset Lt_026F
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A7F
push 8
push offset Lt_012A
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
push dword ptr [ebp-76]
call OUTP
add esp, 4
lea eax, [ebp-76]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_082B
.Lt_082C:
push offset Lt_0274
call OUTP
add esp, 4
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
push 0
push -1
push 16
push offset Lt_00CE
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A7F
push 7
push offset Lt_0134
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
push dword ptr [ebp-76]
call OUTP
add esp, 4
lea eax, [ebp-76]
push eax
call fb_StrDelete
add esp, 4
.Lt_082B:
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
push 0
push -1
push -1
push dword ptr [Lt_0A7E]
call fb_IntToStr
add esp, 4
push eax
push 10
push offset Lt_0094
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
push dword ptr [ebp-28]
call OUTP
add esp, 4
lea eax, [ebp-28]
push eax
call fb_StrDelete
add esp, 4
.Lt_0814:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITEXP_SSE, .-_EMITEXP_SSE

.section .bss
.balign 4
	.lcomm	Lt_0A7F,12
.balign 4
	.lcomm	Lt_0A7E,4

.section .text
.balign 16
_EMITFLOOR_SSE:
.type _EMITFLOOR_SSE, @function
push ebp
mov ebp, esp
sub esp, 424
push ebx
.Lt_0837:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_0839
mov dword ptr [ebp-4], 22
jmp .Lt_0A80
.Lt_0839:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0A80:
mov eax, dword ptr [ebp-4]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+4]
mov dword ptr [Lt_0A81], ebx
cmp dword ptr [Lt_0A81], 4
jle .Lt_083C
push 13
push 3220176896
push 0
call SYMBALLOCINTCONST
add esp, 12
mov dword ptr [Lt_0A82], eax
mov eax, dword ptr [Lt_0A82]
push dword ptr [eax+48]
push dword ptr [eax+44]
push dword ptr [Lt_0A82]
push 0
push 13
call dword ptr [IR+248]
add esp, 20
mov dword ptr [Lt_0A83], eax
push 0
push 3
push offset Lt_03B3
push -1
push offset Lt_0A84
call fb_StrAssign
add esp, 20
jmp .Lt_083B
.Lt_083C:
push 8
push 4294967295
push 3212836864
call SYMBALLOCINTCONST
add esp, 12
mov dword ptr [Lt_0A82], eax
mov eax, dword ptr [Lt_0A82]
push dword ptr [eax+48]
push dword ptr [eax+44]
push dword ptr [Lt_0A82]
push 0
push 8
call dword ptr [IR+248]
add esp, 20
mov dword ptr [Lt_0A83], eax
push 0
push 3
push offset Lt_03B9
push -1
push offset Lt_0A84
call fb_StrAssign
add esp, 20
.Lt_083B:
mov eax, dword ptr [Lt_0A82]
mov dword ptr [eax+96], 16
push -1
push 0
push 0
push -2147483648
push offset Lt_0A85
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push -1
push 0
push 0
push 23
push offset Lt_0A86
push dword ptr [Lt_0A83]
call HPREPOPERAND
add esp, 24
push offset Lt_00A4
call OUTP
add esp, 4
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+16], 1
jne .Lt_083E
cmp dword ptr [Lt_0A81], 4
jle .Lt_0840
mov dword ptr [ebp-424], 0
mov dword ptr [ebp-420], 0
mov dword ptr [ebp-416], 0
push 0
push -1
push -1
push offset Lt_0A85
push 25
push offset Lt_008A
mov dword ptr [ebp-412], 0
mov dword ptr [ebp-408], 0
mov dword ptr [ebp-404], 0
lea eax, [ebp-412]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-424]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-424]
call OUTP
add esp, 4
lea eax, [ebp-424]
push eax
call fb_StrDelete
add esp, 4
push offset Lt_008D
call OUTP
add esp, 4
jmp .Lt_083F
.Lt_0840:
mov dword ptr [ebp-424], 0
mov dword ptr [ebp-420], 0
mov dword ptr [ebp-416], 0
push 0
push -1
push -1
push offset Lt_0A85
push 24
push offset Lt_008F
mov dword ptr [ebp-412], 0
mov dword ptr [ebp-408], 0
mov dword ptr [ebp-404], 0
lea eax, [ebp-412]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-424]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-424]
call OUTP
add esp, 4
lea eax, [ebp-424]
push eax
call fb_StrDelete
add esp, 4
push offset Lt_0092
call OUTP
add esp, 4
.Lt_083F:
mov dword ptr [ebp-400], 0
mov dword ptr [ebp-396], 0
mov dword ptr [ebp-392], 0
push 0
push -1
push -1
push offset Lt_0A85
push -1
push 3
push offset Lt_006D
push -1
push 5
push offset Lt_012B
push -1
push -1
push offset Lt_0A84
push 6
push offset Lt_0845
mov dword ptr [ebp-352], 0
mov dword ptr [ebp-348], 0
mov dword ptr [ebp-344], 0
lea eax, [ebp-352]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-364], 0
mov dword ptr [ebp-360], 0
mov dword ptr [ebp-356], 0
lea eax, [ebp-364]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-376], 0
mov dword ptr [ebp-372], 0
mov dword ptr [ebp-368], 0
lea eax, [ebp-376]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-388], 0
mov dword ptr [ebp-384], 0
mov dword ptr [ebp-380], 0
lea eax, [ebp-388]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-400]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-400]
call OUTP
add esp, 4
lea eax, [ebp-400]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_083D
.Lt_083E:
cmp dword ptr [Lt_0A81], 4
jle .Lt_084C
push offset Lt_084D
call OUTP
add esp, 4
push offset Lt_084E
call OUTP
add esp, 4
jmp .Lt_084B
.Lt_084C:
push offset Lt_084F
call OUTP
add esp, 4
push offset Lt_0850
call OUTP
add esp, 4
.Lt_084B:
.Lt_083D:
push offset Lt_00B1
call OUTP
add esp, 4
push offset Lt_00FE
call OUTP
add esp, 4
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
push 0
push -1
push 7
push offset Lt_00FB
push -1
push 12
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
sal ebx, 4
lea eax, [DTYPETB+ebx+4]
push eax
push 6
push offset Lt_0103
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
push dword ptr [ebp-40]
call OUTP
add esp, 4
lea eax, [ebp-40]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-100], 0
mov dword ptr [ebp-96], 0
mov dword ptr [ebp-92], 0
push 0
push -1
push -1
push offset Lt_0A85
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A85
push -1
push -1
push offset Lt_0A84
push 5
push offset Lt_0854
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
mov dword ptr [ebp-88], 0
mov dword ptr [ebp-84], 0
mov dword ptr [ebp-80], 0
lea eax, [ebp-88]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-100]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-100]
call OUTP
add esp, 4
lea eax, [ebp-100]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-160], 0
mov dword ptr [ebp-156], 0
mov dword ptr [ebp-152], 0
push 0
push -1
push 6
push offset Lt_068C
push -1
push 3
push offset Lt_006D
push -1
push 5
push offset Lt_012B
push -1
push -1
push offset Lt_0A84
push 5
push offset Lt_03DC
mov dword ptr [ebp-112], 0
mov dword ptr [ebp-108], 0
mov dword ptr [ebp-104], 0
lea eax, [ebp-112]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-124], 0
mov dword ptr [ebp-120], 0
mov dword ptr [ebp-116], 0
lea eax, [ebp-124]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-136], 0
mov dword ptr [ebp-132], 0
mov dword ptr [ebp-128], 0
lea eax, [ebp-136]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-148], 0
mov dword ptr [ebp-144], 0
mov dword ptr [ebp-140], 0
lea eax, [ebp-148]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-160]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-160]
call OUTP
add esp, 4
lea eax, [ebp-160]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-220], 0
mov dword ptr [ebp-216], 0
mov dword ptr [ebp-212], 0
push 0
push -1
push 5
push offset Lt_012B
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A85
push -1
push -1
push offset Lt_0A84
push 8
push offset Lt_085F
mov dword ptr [ebp-172], 0
mov dword ptr [ebp-168], 0
mov dword ptr [ebp-164], 0
lea eax, [ebp-172]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-184], 0
mov dword ptr [ebp-180], 0
mov dword ptr [ebp-176], 0
lea eax, [ebp-184]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-196], 0
mov dword ptr [ebp-192], 0
mov dword ptr [ebp-188], 0
lea eax, [ebp-196]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-208], 0
mov dword ptr [ebp-204], 0
mov dword ptr [ebp-200], 0
lea eax, [ebp-208]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-220]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-220]
call OUTP
add esp, 4
lea eax, [ebp-220]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-280], 0
mov dword ptr [ebp-276], 0
mov dword ptr [ebp-272], 0
push 0
push -1
push -1
push offset Lt_0A86
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A85
push -1
push -1
push offset Lt_0A84
push 5
push offset Lt_0865
mov dword ptr [ebp-232], 0
mov dword ptr [ebp-228], 0
mov dword ptr [ebp-224], 0
lea eax, [ebp-232]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-244], 0
mov dword ptr [ebp-240], 0
mov dword ptr [ebp-236], 0
lea eax, [ebp-244]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-256], 0
mov dword ptr [ebp-252], 0
mov dword ptr [ebp-248], 0
lea eax, [ebp-256]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-268], 0
mov dword ptr [ebp-264], 0
mov dword ptr [ebp-260], 0
lea eax, [ebp-268]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-280]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-280]
call OUTP
add esp, 4
lea eax, [ebp-280]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-340], 0
mov dword ptr [ebp-336], 0
mov dword ptr [ebp-332], 0
push 0
push -1
push 6
push offset Lt_068C
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A85
push -1
push -1
push offset Lt_0A84
push 5
push offset Lt_039B
mov dword ptr [ebp-292], 0
mov dword ptr [ebp-288], 0
mov dword ptr [ebp-284], 0
lea eax, [ebp-292]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-304], 0
mov dword ptr [ebp-300], 0
mov dword ptr [ebp-296], 0
lea eax, [ebp-304]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-316], 0
mov dword ptr [ebp-312], 0
mov dword ptr [ebp-308], 0
lea eax, [ebp-316]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-328], 0
mov dword ptr [ebp-324], 0
mov dword ptr [ebp-320], 0
lea eax, [ebp-328]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-340]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-340]
call OUTP
add esp, 4
lea eax, [ebp-340]
push eax
call fb_StrDelete
add esp, 4
push offset Lt_00C4
call OUTP
add esp, 4
.Lt_0838:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITFLOOR_SSE, .-_EMITFLOOR_SSE

.section .bss
.balign 4
	.lcomm	Lt_0A85,12
.balign 4
	.lcomm	Lt_0A86,12
.balign 4
	.lcomm	Lt_0A84,12
.balign 4
	.lcomm	Lt_0A81,4
.balign 4
	.lcomm	Lt_0A82,4
.balign 4
	.lcomm	Lt_0A83,4

.section .text
.balign 16
_EMITFIX_SSE:
.type _EMITFIX_SSE, @function
push ebp
mov ebp, esp
sub esp, 652
push ebx
.Lt_0870:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_0872
mov dword ptr [ebp-4], 22
jmp .Lt_0A87
.Lt_0872:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0A87:
mov eax, dword ptr [ebp-4]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+4]
mov dword ptr [Lt_0A88], ebx
cmp dword ptr [Lt_0A88], 4
jle .Lt_0875
push 13
push 3220176896
push 0
call SYMBALLOCINTCONST
add esp, 12
mov dword ptr [Lt_0A89], eax
mov eax, dword ptr [Lt_0A89]
push dword ptr [eax+48]
push dword ptr [eax+44]
push dword ptr [Lt_0A89]
push 0
push 13
call dword ptr [IR+248]
add esp, 20
mov dword ptr [Lt_0A8A], eax
push 13
push 2147483648
push 0
call SYMBALLOCINTCONST
add esp, 12
mov dword ptr [Lt_0A8B], eax
mov eax, dword ptr [Lt_0A8B]
push dword ptr [eax+48]
push dword ptr [eax+44]
push dword ptr [Lt_0A8B]
push 0
push 13
call dword ptr [IR+248]
add esp, 20
mov dword ptr [Lt_0A8C], eax
push 0
push 3
push offset Lt_03B3
push -1
push offset Lt_0A8D
call fb_StrAssign
add esp, 20
jmp .Lt_0874
.Lt_0875:
push 8
push 4294967295
push 3212836864
call SYMBALLOCINTCONST
add esp, 12
mov dword ptr [Lt_0A89], eax
mov eax, dword ptr [Lt_0A89]
push dword ptr [eax+48]
push dword ptr [eax+44]
push dword ptr [Lt_0A89]
push 0
push 8
call dword ptr [IR+248]
add esp, 20
mov dword ptr [Lt_0A8A], eax
push 8
push 4294967295
push 2147483648
call SYMBALLOCINTCONST
add esp, 12
mov dword ptr [Lt_0A8B], eax
mov eax, dword ptr [Lt_0A8B]
push dword ptr [eax+48]
push dword ptr [eax+44]
push dword ptr [Lt_0A8B]
push 0
push 8
call dword ptr [IR+248]
add esp, 20
mov dword ptr [Lt_0A8C], eax
push 0
push 3
push offset Lt_03B9
push -1
push offset Lt_0A8D
call fb_StrAssign
add esp, 20
.Lt_0874:
mov eax, dword ptr [Lt_0A89]
mov dword ptr [eax+96], 16
mov eax, dword ptr [Lt_0A8B]
mov dword ptr [eax+96], 16
push -1
push 0
push 0
push -2147483648
push offset Lt_0A8E
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push -1
push 0
push 0
push 23
push offset Lt_0A8F
push dword ptr [Lt_0A8A]
call HPREPOPERAND
add esp, 24
push -1
push 0
push 0
push 23
push offset Lt_0A90
push dword ptr [Lt_0A8C]
call HPREPOPERAND
add esp, 24
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
push 0
push -1
push -1
mov eax, dword ptr [Lt_0A88]
add eax, 8
mov ebx, eax
push ebx
call fb_IntToStr
add esp, 4
push eax
push 10
push offset Lt_0084
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
push dword ptr [ebp-28]
call OUTP
add esp, 4
lea eax, [ebp-28]
push eax
call fb_StrDelete
add esp, 4
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+16], 1
jne .Lt_0879
cmp dword ptr [Lt_0A88], 4
jle .Lt_087B
mov dword ptr [ebp-628], 0
mov dword ptr [ebp-624], 0
mov dword ptr [ebp-620], 0
push 0
push -1
push -1
push offset Lt_0A8E
push 25
push offset Lt_008A
mov dword ptr [ebp-616], 0
mov dword ptr [ebp-612], 0
mov dword ptr [ebp-608], 0
lea eax, [ebp-616]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-628]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-628]
call OUTP
add esp, 4
lea eax, [ebp-628]
push eax
call fb_StrDelete
add esp, 4
push offset Lt_008D
call OUTP
add esp, 4
jmp .Lt_087A
.Lt_087B:
mov dword ptr [ebp-628], 0
mov dword ptr [ebp-624], 0
mov dword ptr [ebp-620], 0
push 0
push -1
push -1
push offset Lt_0A8E
push 24
push offset Lt_008F
mov dword ptr [ebp-616], 0
mov dword ptr [ebp-612], 0
mov dword ptr [ebp-608], 0
lea eax, [ebp-616]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-628]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-628]
call OUTP
add esp, 4
lea eax, [ebp-628]
push eax
call fb_StrDelete
add esp, 4
push offset Lt_0092
call OUTP
add esp, 4
.Lt_087A:
jmp .Lt_0878
.Lt_0879:
cmp dword ptr [Lt_0A88], 4
jle .Lt_0881
push offset Lt_084D
call OUTP
add esp, 4
mov dword ptr [ebp-652], 0
mov dword ptr [ebp-648], 0
mov dword ptr [ebp-644], 0
push 0
push -1
push 16
push offset Lt_026F
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A8E
push 8
push offset Lt_012A
mov dword ptr [ebp-616], 0
mov dword ptr [ebp-612], 0
mov dword ptr [ebp-608], 0
lea eax, [ebp-616]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-628], 0
mov dword ptr [ebp-624], 0
mov dword ptr [ebp-620], 0
lea eax, [ebp-628]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-640], 0
mov dword ptr [ebp-636], 0
mov dword ptr [ebp-632], 0
lea eax, [ebp-640]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-652]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-652]
call OUTP
add esp, 4
lea eax, [ebp-652]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0880
.Lt_0881:
push offset Lt_084F
call OUTP
add esp, 4
mov dword ptr [ebp-652], 0
mov dword ptr [ebp-648], 0
mov dword ptr [ebp-644], 0
push 0
push -1
push 16
push offset Lt_00CE
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A8E
push 7
push offset Lt_0134
mov dword ptr [ebp-616], 0
mov dword ptr [ebp-612], 0
mov dword ptr [ebp-608], 0
lea eax, [ebp-616]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-628], 0
mov dword ptr [ebp-624], 0
mov dword ptr [ebp-620], 0
lea eax, [ebp-628]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-640], 0
mov dword ptr [ebp-636], 0
mov dword ptr [ebp-632], 0
lea eax, [ebp-640]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-652]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-652]
call OUTP
add esp, 4
lea eax, [ebp-652]
push eax
call fb_StrDelete
add esp, 4
.Lt_0880:
.Lt_0878:
mov dword ptr [ebp-64], 0
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
push 0
push -1
push 11
push offset Lt_088A
push -1
push -1
push offset Lt_0A8D
push 5
push offset Lt_0854
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
lea eax, [ebp-64]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-64]
call OUTP
add esp, 4
lea eax, [ebp-64]
push eax
call fb_StrDelete
add esp, 4
cmp dword ptr [Lt_0A88], 4
jle .Lt_088F
push offset Lt_0890
call OUTP
add esp, 4
jmp .Lt_088E
.Lt_088F:
push offset Lt_0891
call OUTP
add esp, 4
.Lt_088E:
push offset Lt_00B1
call OUTP
add esp, 4
mov dword ptr [ebp-124], 0
mov dword ptr [ebp-120], 0
mov dword ptr [ebp-116], 0
push 0
push -1
push -1
push offset Lt_0A8E
push -1
push 3
push offset Lt_006D
push -1
push 5
push offset Lt_012B
push -1
push -1
push offset Lt_0A8D
push 8
push offset Lt_085F
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
push dword ptr [ebp-124]
call OUTP
add esp, 4
lea eax, [ebp-124]
push eax
call fb_StrDelete
add esp, 4
push offset Lt_00FE
call OUTP
add esp, 4
mov dword ptr [ebp-184], 0
mov dword ptr [ebp-180], 0
mov dword ptr [ebp-176], 0
push 0
push -1
push -1
push offset Lt_0A90
push -1
push 3
push offset Lt_006D
push -1
push 5
push offset Lt_012B
push -1
push -1
push offset Lt_0A8D
push 5
push offset Lt_0865
mov dword ptr [ebp-136], 0
mov dword ptr [ebp-132], 0
mov dword ptr [ebp-128], 0
lea eax, [ebp-136]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-148], 0
mov dword ptr [ebp-144], 0
mov dword ptr [ebp-140], 0
lea eax, [ebp-148]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-160], 0
mov dword ptr [ebp-156], 0
mov dword ptr [ebp-152], 0
lea eax, [ebp-160]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-172], 0
mov dword ptr [ebp-168], 0
mov dword ptr [ebp-164], 0
lea eax, [ebp-172]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-184]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-184]
call OUTP
add esp, 4
lea eax, [ebp-184]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-220], 0
mov dword ptr [ebp-216], 0
mov dword ptr [ebp-212], 0
push 0
push -1
push 7
push offset Lt_00FB
push -1
push 12
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
sal ebx, 4
lea eax, [DTYPETB+ebx+4]
push eax
push 6
push offset Lt_0103
mov dword ptr [ebp-196], 0
mov dword ptr [ebp-192], 0
mov dword ptr [ebp-188], 0
lea eax, [ebp-196]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-208], 0
mov dword ptr [ebp-204], 0
mov dword ptr [ebp-200], 0
lea eax, [ebp-208]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-220]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-220]
call OUTP
add esp, 4
lea eax, [ebp-220]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-280], 0
mov dword ptr [ebp-276], 0
mov dword ptr [ebp-272], 0
push 0
push -1
push 6
push offset Lt_068C
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A8E
push -1
push -1
push offset Lt_0A8D
push 5
push offset Lt_03DC
mov dword ptr [ebp-232], 0
mov dword ptr [ebp-228], 0
mov dword ptr [ebp-224], 0
lea eax, [ebp-232]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-244], 0
mov dword ptr [ebp-240], 0
mov dword ptr [ebp-236], 0
lea eax, [ebp-244]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-256], 0
mov dword ptr [ebp-252], 0
mov dword ptr [ebp-248], 0
lea eax, [ebp-256]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-268], 0
mov dword ptr [ebp-264], 0
mov dword ptr [ebp-260], 0
lea eax, [ebp-268]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-280]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-280]
call OUTP
add esp, 4
lea eax, [ebp-280]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-340], 0
mov dword ptr [ebp-336], 0
mov dword ptr [ebp-332], 0
push 0
push -1
push 5
push offset Lt_012B
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A8E
push -1
push -1
push offset Lt_0A8D
push 5
push offset Lt_0854
mov dword ptr [ebp-292], 0
mov dword ptr [ebp-288], 0
mov dword ptr [ebp-284], 0
lea eax, [ebp-292]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-304], 0
mov dword ptr [ebp-300], 0
mov dword ptr [ebp-296], 0
lea eax, [ebp-304]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-316], 0
mov dword ptr [ebp-312], 0
mov dword ptr [ebp-308], 0
lea eax, [ebp-316]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-328], 0
mov dword ptr [ebp-324], 0
mov dword ptr [ebp-320], 0
lea eax, [ebp-328]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-340]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-340]
call OUTP
add esp, 4
lea eax, [ebp-340]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-400], 0
mov dword ptr [ebp-396], 0
mov dword ptr [ebp-392], 0
push 0
push -1
push -1
push offset Lt_0A8F
push -1
push 3
push offset Lt_006D
push -1
push 5
push offset Lt_012B
push -1
push -1
push offset Lt_0A8D
push 5
push offset Lt_0854
mov dword ptr [ebp-352], 0
mov dword ptr [ebp-348], 0
mov dword ptr [ebp-344], 0
lea eax, [ebp-352]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-364], 0
mov dword ptr [ebp-360], 0
mov dword ptr [ebp-356], 0
lea eax, [ebp-364]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-376], 0
mov dword ptr [ebp-372], 0
mov dword ptr [ebp-368], 0
lea eax, [ebp-376]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-388], 0
mov dword ptr [ebp-384], 0
mov dword ptr [ebp-380], 0
lea eax, [ebp-388]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-400]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-400]
call OUTP
add esp, 4
lea eax, [ebp-400]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-460], 0
mov dword ptr [ebp-456], 0
mov dword ptr [ebp-452], 0
push 0
push -1
push 8
push offset Lt_08AF
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A8E
push -1
push -1
push offset Lt_0A8D
push 7
push offset Lt_08AE
mov dword ptr [ebp-412], 0
mov dword ptr [ebp-408], 0
mov dword ptr [ebp-404], 0
lea eax, [ebp-412]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-424], 0
mov dword ptr [ebp-420], 0
mov dword ptr [ebp-416], 0
lea eax, [ebp-424]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-436], 0
mov dword ptr [ebp-432], 0
mov dword ptr [ebp-428], 0
lea eax, [ebp-436]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-448], 0
mov dword ptr [ebp-444], 0
mov dword ptr [ebp-440], 0
lea eax, [ebp-448]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-460]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-460]
call OUTP
add esp, 4
lea eax, [ebp-460]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-520], 0
mov dword ptr [ebp-516], 0
mov dword ptr [ebp-512], 0
push 0
push -1
push 5
push offset Lt_012B
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A8E
push -1
push -1
push offset Lt_0A8D
push 5
push offset Lt_0865
mov dword ptr [ebp-472], 0
mov dword ptr [ebp-468], 0
mov dword ptr [ebp-464], 0
lea eax, [ebp-472]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-484], 0
mov dword ptr [ebp-480], 0
mov dword ptr [ebp-476], 0
lea eax, [ebp-484]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-496], 0
mov dword ptr [ebp-492], 0
mov dword ptr [ebp-488], 0
lea eax, [ebp-496]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-508], 0
mov dword ptr [ebp-504], 0
mov dword ptr [ebp-500], 0
lea eax, [ebp-508]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-520]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-520]
call OUTP
add esp, 4
lea eax, [ebp-520]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-580], 0
mov dword ptr [ebp-576], 0
mov dword ptr [ebp-572], 0
push 0
push -1
push 6
push offset Lt_068C
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A8E
push -1
push -1
push offset Lt_0A8D
push 5
push offset Lt_039B
mov dword ptr [ebp-532], 0
mov dword ptr [ebp-528], 0
mov dword ptr [ebp-524], 0
lea eax, [ebp-532]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-544], 0
mov dword ptr [ebp-540], 0
mov dword ptr [ebp-536], 0
lea eax, [ebp-544]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-556], 0
mov dword ptr [ebp-552], 0
mov dword ptr [ebp-548], 0
lea eax, [ebp-556]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-568], 0
mov dword ptr [ebp-564], 0
mov dword ptr [ebp-560], 0
lea eax, [ebp-568]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-580]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-580]
call OUTP
add esp, 4
lea eax, [ebp-580]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-604], 0
mov dword ptr [ebp-600], 0
mov dword ptr [ebp-596], 0
push 0
push -1
push -1
mov eax, dword ptr [Lt_0A88]
add eax, 8
mov ebx, eax
push ebx
call fb_IntToStr
add esp, 4
push eax
push 10
push offset Lt_0094
mov dword ptr [ebp-592], 0
mov dword ptr [ebp-588], 0
mov dword ptr [ebp-584], 0
lea eax, [ebp-592]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-604]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-604]
call OUTP
add esp, 4
lea eax, [ebp-604]
push eax
call fb_StrDelete
add esp, 4
.Lt_0871:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITFIX_SSE, .-_EMITFIX_SSE

.section .bss
.balign 4
	.lcomm	Lt_0A8E,12
.balign 4
	.lcomm	Lt_0A8D,12
.balign 4
	.lcomm	Lt_0A90,12
.balign 4
	.lcomm	Lt_0A8F,12
.balign 4
	.lcomm	Lt_0A88,4
.balign 4
	.lcomm	Lt_0A89,4
.balign 4
	.lcomm	Lt_0A8B,4
.balign 4
	.lcomm	Lt_0A8A,4
.balign 4
	.lcomm	Lt_0A8C,4

.section .text
.balign 16
_EMITFRAC_SSE:
.type _EMITFRAC_SSE, @function
push ebp
mov ebp, esp
sub esp, 736
push ebx
.Lt_08C1:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_08C3
mov dword ptr [ebp-4], 22
jmp .Lt_0A91
.Lt_08C3:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0A91:
mov eax, dword ptr [ebp-4]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+4]
mov dword ptr [Lt_0A92], ebx
cmp dword ptr [Lt_0A92], 4
jle .Lt_08C6
push 13
push 3220176896
push 0
call SYMBALLOCINTCONST
add esp, 12
mov dword ptr [Lt_0A93], eax
mov eax, dword ptr [Lt_0A93]
push dword ptr [eax+48]
push dword ptr [eax+44]
push dword ptr [Lt_0A93]
push 0
push 13
call dword ptr [IR+248]
add esp, 20
mov dword ptr [Lt_0A94], eax
push 13
push 2147483648
push 0
call SYMBALLOCINTCONST
add esp, 12
mov dword ptr [Lt_0A95], eax
mov eax, dword ptr [Lt_0A95]
push dword ptr [eax+48]
push dword ptr [eax+44]
push dword ptr [Lt_0A95]
push 0
push 13
call dword ptr [IR+248]
add esp, 20
mov dword ptr [Lt_0A96], eax
push 0
push 3
push offset Lt_03B3
push -1
push offset Lt_0A97
call fb_StrAssign
add esp, 20
jmp .Lt_08C5
.Lt_08C6:
push 8
push 4294967295
push 3212836864
call SYMBALLOCINTCONST
add esp, 12
mov dword ptr [Lt_0A93], eax
mov eax, dword ptr [Lt_0A93]
push dword ptr [eax+48]
push dword ptr [eax+44]
push dword ptr [Lt_0A93]
push 0
push 8
call dword ptr [IR+248]
add esp, 20
mov dword ptr [Lt_0A94], eax
push 8
push 4294967295
push 2147483648
call SYMBALLOCINTCONST
add esp, 12
mov dword ptr [Lt_0A95], eax
mov eax, dword ptr [Lt_0A95]
push dword ptr [eax+48]
push dword ptr [eax+44]
push dword ptr [Lt_0A95]
push 0
push 8
call dword ptr [IR+248]
add esp, 20
mov dword ptr [Lt_0A96], eax
push 0
push 3
push offset Lt_03B9
push -1
push offset Lt_0A97
call fb_StrAssign
add esp, 20
.Lt_08C5:
mov eax, dword ptr [Lt_0A93]
mov dword ptr [eax+96], 16
mov eax, dword ptr [Lt_0A95]
mov dword ptr [eax+96], 16
push -1
push 0
push 0
push -2147483648
push offset Lt_0A98
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push -1
push 0
push 0
push 23
push offset Lt_0A99
push dword ptr [Lt_0A94]
call HPREPOPERAND
add esp, 24
push -1
push 0
push 0
push 23
push offset Lt_0A9A
push dword ptr [Lt_0A96]
call HPREPOPERAND
add esp, 24
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
push 0
push -1
push -1
mov eax, dword ptr [Lt_0A92]
add eax, 8
mov ebx, eax
push ebx
call fb_IntToStr
add esp, 4
push eax
push 10
push offset Lt_0084
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
push dword ptr [ebp-28]
call OUTP
add esp, 4
lea eax, [ebp-28]
push eax
call fb_StrDelete
add esp, 4
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+16], 1
jne .Lt_08CA
cmp dword ptr [Lt_0A92], 4
jle .Lt_08CC
mov dword ptr [ebp-688], 0
mov dword ptr [ebp-684], 0
mov dword ptr [ebp-680], 0
push 0
push -1
push -1
push offset Lt_0A98
push 25
push offset Lt_008A
mov dword ptr [ebp-676], 0
mov dword ptr [ebp-672], 0
mov dword ptr [ebp-668], 0
lea eax, [ebp-676]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-688]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-688]
call OUTP
add esp, 4
lea eax, [ebp-688]
push eax
call fb_StrDelete
add esp, 4
push offset Lt_008D
call OUTP
add esp, 4
jmp .Lt_08CB
.Lt_08CC:
mov dword ptr [ebp-688], 0
mov dword ptr [ebp-684], 0
mov dword ptr [ebp-680], 0
push 0
push -1
push -1
push offset Lt_0A98
push 24
push offset Lt_008F
mov dword ptr [ebp-676], 0
mov dword ptr [ebp-672], 0
mov dword ptr [ebp-668], 0
lea eax, [ebp-676]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-688]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-688]
call OUTP
add esp, 4
lea eax, [ebp-688]
push eax
call fb_StrDelete
add esp, 4
push offset Lt_0092
call OUTP
add esp, 4
.Lt_08CB:
jmp .Lt_08C9
.Lt_08CA:
cmp dword ptr [Lt_0A92], 4
jle .Lt_08D2
push offset Lt_084D
call OUTP
add esp, 4
mov dword ptr [ebp-712], 0
mov dword ptr [ebp-708], 0
mov dword ptr [ebp-704], 0
push 0
push -1
push 16
push offset Lt_026F
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A98
push 8
push offset Lt_012A
mov dword ptr [ebp-676], 0
mov dword ptr [ebp-672], 0
mov dword ptr [ebp-668], 0
lea eax, [ebp-676]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-688], 0
mov dword ptr [ebp-684], 0
mov dword ptr [ebp-680], 0
lea eax, [ebp-688]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-700], 0
mov dword ptr [ebp-696], 0
mov dword ptr [ebp-692], 0
lea eax, [ebp-700]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-712]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-712]
call OUTP
add esp, 4
lea eax, [ebp-712]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_08D1
.Lt_08D2:
push offset Lt_084F
call OUTP
add esp, 4
mov dword ptr [ebp-712], 0
mov dword ptr [ebp-708], 0
mov dword ptr [ebp-704], 0
push 0
push -1
push 16
push offset Lt_00CE
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A98
push 7
push offset Lt_0134
mov dword ptr [ebp-676], 0
mov dword ptr [ebp-672], 0
mov dword ptr [ebp-668], 0
lea eax, [ebp-676]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-688], 0
mov dword ptr [ebp-684], 0
mov dword ptr [ebp-680], 0
lea eax, [ebp-688]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-700], 0
mov dword ptr [ebp-696], 0
mov dword ptr [ebp-692], 0
lea eax, [ebp-700]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-712]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-712]
call OUTP
add esp, 4
lea eax, [ebp-712]
push eax
call fb_StrDelete
add esp, 4
.Lt_08D1:
.Lt_08C9:
mov dword ptr [ebp-64], 0
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
push 0
push -1
push 11
push offset Lt_088A
push -1
push -1
push offset Lt_0A97
push 5
push offset Lt_0854
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
lea eax, [ebp-64]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-64]
call OUTP
add esp, 4
lea eax, [ebp-64]
push eax
call fb_StrDelete
add esp, 4
cmp dword ptr [Lt_0A92], 4
jle .Lt_08DF
mov dword ptr [ebp-736], 0
mov dword ptr [ebp-732], 0
mov dword ptr [ebp-728], 0
push 0
push -1
push 2
push offset Lt_0006
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A98
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A98
push 8
push offset Lt_08E0
mov dword ptr [ebp-676], 0
mov dword ptr [ebp-672], 0
mov dword ptr [ebp-668], 0
lea eax, [ebp-676]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-688], 0
mov dword ptr [ebp-684], 0
mov dword ptr [ebp-680], 0
lea eax, [ebp-688]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-700], 0
mov dword ptr [ebp-696], 0
mov dword ptr [ebp-692], 0
lea eax, [ebp-700]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-712], 0
mov dword ptr [ebp-708], 0
mov dword ptr [ebp-704], 0
lea eax, [ebp-712]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-724], 0
mov dword ptr [ebp-720], 0
mov dword ptr [ebp-716], 0
lea eax, [ebp-724]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-736]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-736]
call OUTP
add esp, 4
lea eax, [ebp-736]
push eax
call fb_StrDelete
add esp, 4
push offset Lt_0890
call OUTP
add esp, 4
jmp .Lt_08DE
.Lt_08DF:
mov dword ptr [ebp-712], 0
mov dword ptr [ebp-708], 0
mov dword ptr [ebp-704], 0
push 0
push -1
push -1
push offset Lt_0A98
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A98
push 9
push offset Lt_08E7
mov dword ptr [ebp-676], 0
mov dword ptr [ebp-672], 0
mov dword ptr [ebp-668], 0
lea eax, [ebp-676]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-688], 0
mov dword ptr [ebp-684], 0
mov dword ptr [ebp-680], 0
lea eax, [ebp-688]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-700], 0
mov dword ptr [ebp-696], 0
mov dword ptr [ebp-692], 0
lea eax, [ebp-700]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-712]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-712]
call OUTP
add esp, 4
lea eax, [ebp-712]
push eax
call fb_StrDelete
add esp, 4
push offset Lt_0891
call OUTP
add esp, 4
.Lt_08DE:
push offset Lt_00B1
call OUTP
add esp, 4
mov dword ptr [ebp-124], 0
mov dword ptr [ebp-120], 0
mov dword ptr [ebp-116], 0
push 0
push -1
push -1
push offset Lt_0A98
push -1
push 3
push offset Lt_006D
push -1
push 5
push offset Lt_012B
push -1
push -1
push offset Lt_0A97
push 8
push offset Lt_085F
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
push dword ptr [ebp-124]
call OUTP
add esp, 4
lea eax, [ebp-124]
push eax
call fb_StrDelete
add esp, 4
push offset Lt_00FE
call OUTP
add esp, 4
mov dword ptr [ebp-184], 0
mov dword ptr [ebp-180], 0
mov dword ptr [ebp-176], 0
push 0
push -1
push -1
push offset Lt_0A9A
push -1
push 3
push offset Lt_006D
push -1
push 5
push offset Lt_012B
push -1
push -1
push offset Lt_0A97
push 5
push offset Lt_0865
mov dword ptr [ebp-136], 0
mov dword ptr [ebp-132], 0
mov dword ptr [ebp-128], 0
lea eax, [ebp-136]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-148], 0
mov dword ptr [ebp-144], 0
mov dword ptr [ebp-140], 0
lea eax, [ebp-148]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-160], 0
mov dword ptr [ebp-156], 0
mov dword ptr [ebp-152], 0
lea eax, [ebp-160]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-172], 0
mov dword ptr [ebp-168], 0
mov dword ptr [ebp-164], 0
lea eax, [ebp-172]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-184]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-184]
call OUTP
add esp, 4
lea eax, [ebp-184]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-220], 0
mov dword ptr [ebp-216], 0
mov dword ptr [ebp-212], 0
push 0
push -1
push 7
push offset Lt_00FB
push -1
push 12
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
sal ebx, 4
lea eax, [DTYPETB+ebx+4]
push eax
push 6
push offset Lt_0103
mov dword ptr [ebp-196], 0
mov dword ptr [ebp-192], 0
mov dword ptr [ebp-188], 0
lea eax, [ebp-196]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-208], 0
mov dword ptr [ebp-204], 0
mov dword ptr [ebp-200], 0
lea eax, [ebp-208]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-220]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-220]
call OUTP
add esp, 4
lea eax, [ebp-220]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-280], 0
mov dword ptr [ebp-276], 0
mov dword ptr [ebp-272], 0
push 0
push -1
push 6
push offset Lt_068C
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A98
push -1
push -1
push offset Lt_0A97
push 5
push offset Lt_03DC
mov dword ptr [ebp-232], 0
mov dword ptr [ebp-228], 0
mov dword ptr [ebp-224], 0
lea eax, [ebp-232]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-244], 0
mov dword ptr [ebp-240], 0
mov dword ptr [ebp-236], 0
lea eax, [ebp-244]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-256], 0
mov dword ptr [ebp-252], 0
mov dword ptr [ebp-248], 0
lea eax, [ebp-256]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-268], 0
mov dword ptr [ebp-264], 0
mov dword ptr [ebp-260], 0
lea eax, [ebp-268]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-280]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-280]
call OUTP
add esp, 4
lea eax, [ebp-280]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-340], 0
mov dword ptr [ebp-336], 0
mov dword ptr [ebp-332], 0
push 0
push -1
push 5
push offset Lt_012B
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A98
push -1
push -1
push offset Lt_0A97
push 5
push offset Lt_0854
mov dword ptr [ebp-292], 0
mov dword ptr [ebp-288], 0
mov dword ptr [ebp-284], 0
lea eax, [ebp-292]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-304], 0
mov dword ptr [ebp-300], 0
mov dword ptr [ebp-296], 0
lea eax, [ebp-304]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-316], 0
mov dword ptr [ebp-312], 0
mov dword ptr [ebp-308], 0
lea eax, [ebp-316]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-328], 0
mov dword ptr [ebp-324], 0
mov dword ptr [ebp-320], 0
lea eax, [ebp-328]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-340]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-340]
call OUTP
add esp, 4
lea eax, [ebp-340]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-400], 0
mov dword ptr [ebp-396], 0
mov dword ptr [ebp-392], 0
push 0
push -1
push -1
push offset Lt_0A99
push -1
push 3
push offset Lt_006D
push -1
push 5
push offset Lt_012B
push -1
push -1
push offset Lt_0A97
push 5
push offset Lt_0854
mov dword ptr [ebp-352], 0
mov dword ptr [ebp-348], 0
mov dword ptr [ebp-344], 0
lea eax, [ebp-352]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-364], 0
mov dword ptr [ebp-360], 0
mov dword ptr [ebp-356], 0
lea eax, [ebp-364]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-376], 0
mov dword ptr [ebp-372], 0
mov dword ptr [ebp-368], 0
lea eax, [ebp-376]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-388], 0
mov dword ptr [ebp-384], 0
mov dword ptr [ebp-380], 0
lea eax, [ebp-388]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-400]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-400]
call OUTP
add esp, 4
lea eax, [ebp-400]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-460], 0
mov dword ptr [ebp-456], 0
mov dword ptr [ebp-452], 0
push 0
push -1
push 8
push offset Lt_08AF
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A98
push -1
push -1
push offset Lt_0A97
push 7
push offset Lt_08AE
mov dword ptr [ebp-412], 0
mov dword ptr [ebp-408], 0
mov dword ptr [ebp-404], 0
lea eax, [ebp-412]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-424], 0
mov dword ptr [ebp-420], 0
mov dword ptr [ebp-416], 0
lea eax, [ebp-424]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-436], 0
mov dword ptr [ebp-432], 0
mov dword ptr [ebp-428], 0
lea eax, [ebp-436]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-448], 0
mov dword ptr [ebp-444], 0
mov dword ptr [ebp-440], 0
lea eax, [ebp-448]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-460]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-460]
call OUTP
add esp, 4
lea eax, [ebp-460]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-520], 0
mov dword ptr [ebp-516], 0
mov dword ptr [ebp-512], 0
push 0
push -1
push -1
push offset Lt_0A98
push -1
push 3
push offset Lt_006D
push -1
push 5
push offset Lt_012B
push -1
push -1
push offset Lt_0A97
push 5
push offset Lt_0865
mov dword ptr [ebp-472], 0
mov dword ptr [ebp-468], 0
mov dword ptr [ebp-464], 0
lea eax, [ebp-472]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-484], 0
mov dword ptr [ebp-480], 0
mov dword ptr [ebp-476], 0
lea eax, [ebp-484]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-496], 0
mov dword ptr [ebp-492], 0
mov dword ptr [ebp-488], 0
lea eax, [ebp-496]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-508], 0
mov dword ptr [ebp-504], 0
mov dword ptr [ebp-500], 0
lea eax, [ebp-508]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-520]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-520]
call OUTP
add esp, 4
lea eax, [ebp-520]
push eax
call fb_StrDelete
add esp, 4
cmp dword ptr [Lt_0A92], 4
jle .Lt_0913
mov dword ptr [ebp-736], 0
mov dword ptr [ebp-732], 0
mov dword ptr [ebp-728], 0
push 0
push -1
push 2
push offset Lt_0004
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A98
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A98
push 8
push offset Lt_08E0
mov dword ptr [ebp-676], 0
mov dword ptr [ebp-672], 0
mov dword ptr [ebp-668], 0
lea eax, [ebp-676]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-688], 0
mov dword ptr [ebp-684], 0
mov dword ptr [ebp-680], 0
lea eax, [ebp-688]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-700], 0
mov dword ptr [ebp-696], 0
mov dword ptr [ebp-692], 0
lea eax, [ebp-700]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-712], 0
mov dword ptr [ebp-708], 0
mov dword ptr [ebp-704], 0
lea eax, [ebp-712]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-724], 0
mov dword ptr [ebp-720], 0
mov dword ptr [ebp-716], 0
lea eax, [ebp-724]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-736]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-736]
call OUTP
add esp, 4
lea eax, [ebp-736]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0912
.Lt_0913:
mov dword ptr [ebp-712], 0
mov dword ptr [ebp-708], 0
mov dword ptr [ebp-704], 0
push 0
push -1
push -1
push offset Lt_0A98
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A98
push 9
push offset Lt_091A
mov dword ptr [ebp-676], 0
mov dword ptr [ebp-672], 0
mov dword ptr [ebp-668], 0
lea eax, [ebp-676]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-688], 0
mov dword ptr [ebp-684], 0
mov dword ptr [ebp-680], 0
lea eax, [ebp-688]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-700], 0
mov dword ptr [ebp-696], 0
mov dword ptr [ebp-692], 0
lea eax, [ebp-700]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-712]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-712]
call OUTP
add esp, 4
lea eax, [ebp-712]
push eax
call fb_StrDelete
add esp, 4
.Lt_0912:
mov dword ptr [ebp-580], 0
mov dword ptr [ebp-576], 0
mov dword ptr [ebp-572], 0
push 0
push -1
push 6
push offset Lt_068C
push -1
push 3
push offset Lt_006D
push -1
push 5
push offset Lt_012B
push -1
push -1
push offset Lt_0A97
push 5
push offset Lt_039B
mov dword ptr [ebp-532], 0
mov dword ptr [ebp-528], 0
mov dword ptr [ebp-524], 0
lea eax, [ebp-532]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-544], 0
mov dword ptr [ebp-540], 0
mov dword ptr [ebp-536], 0
lea eax, [ebp-544]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-556], 0
mov dword ptr [ebp-552], 0
mov dword ptr [ebp-548], 0
lea eax, [ebp-556]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-568], 0
mov dword ptr [ebp-564], 0
mov dword ptr [ebp-560], 0
lea eax, [ebp-568]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-580]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-580]
call OUTP
add esp, 4
lea eax, [ebp-580]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-640], 0
mov dword ptr [ebp-636], 0
mov dword ptr [ebp-632], 0
push 0
push -1
push 5
push offset Lt_012B
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0A98
push -1
push -1
push offset Lt_0A97
push 5
push offset Lt_03DC
mov dword ptr [ebp-592], 0
mov dword ptr [ebp-588], 0
mov dword ptr [ebp-584], 0
lea eax, [ebp-592]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-604], 0
mov dword ptr [ebp-600], 0
mov dword ptr [ebp-596], 0
lea eax, [ebp-604]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-616], 0
mov dword ptr [ebp-612], 0
mov dword ptr [ebp-608], 0
lea eax, [ebp-616]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-628], 0
mov dword ptr [ebp-624], 0
mov dword ptr [ebp-620], 0
lea eax, [ebp-628]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-640]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-640]
call OUTP
add esp, 4
lea eax, [ebp-640]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-664], 0
mov dword ptr [ebp-660], 0
mov dword ptr [ebp-656], 0
push 0
push -1
push -1
mov eax, dword ptr [Lt_0A92]
add eax, 8
mov ebx, eax
push ebx
call fb_IntToStr
add esp, 4
push eax
push 10
push offset Lt_0094
mov dword ptr [ebp-652], 0
mov dword ptr [ebp-648], 0
mov dword ptr [ebp-644], 0
lea eax, [ebp-652]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-664]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-664]
call OUTP
add esp, 4
lea eax, [ebp-664]
push eax
call fb_StrDelete
add esp, 4
.Lt_08C2:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITFRAC_SSE, .-_EMITFRAC_SSE

.section .bss
.balign 4
	.lcomm	Lt_0A98,12
.balign 4
	.lcomm	Lt_0A97,12
.balign 4
	.lcomm	Lt_0A9A,12
.balign 4
	.lcomm	Lt_0A99,12
.balign 4
	.lcomm	Lt_0A92,4
.balign 4
	.lcomm	Lt_0A93,4
.balign 4
	.lcomm	Lt_0A95,4
.balign 4
	.lcomm	Lt_0A94,4
.balign 4
	.lcomm	Lt_0A96,4

.section .text
.balign 16
_EMITPUSHF_SSE:
.type _EMITPUSHF_SSE, @function
push ebp
mov ebp, esp
sub esp, 76
push ebx
.Lt_092B:
push -1
push 0
push 0
push -2147483648
push offset Lt_0A9C
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_092D
mov dword ptr [ebp-4], 22
jmp .Lt_0A9B
.Lt_092D:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0A9B:
mov eax, dword ptr [ebp-4]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+4]
mov dword ptr [Lt_0A9D], ebx
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx], 4
je .Lt_0930
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx+4], 14
jne .Lt_0932
push 0
push 6
push offset Lt_0933
push -1
push offset Lt_0A9E
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0A9C
push -1
push offset Lt_0A9E
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0A9E]
call OUTP
add esp, 4
jmp .Lt_0931
.Lt_0932:
push -1
push 0
push 4
push 7
push offset Lt_0A9C
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push 0
push 6
push offset Lt_0933
push -1
push offset Lt_0A9E
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0A9C
push -1
push offset Lt_0A9E
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0A9E]
call OUTP
add esp, 4
push -1
push 0
push 0
push 7
push offset Lt_0A9C
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push 0
push 6
push offset Lt_0933
push -1
push offset Lt_0A9E
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0A9C
push -1
push offset Lt_0A9E
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0A9E]
call OUTP
add esp, 4
.Lt_0931:
jmp .Lt_092F
.Lt_0930:
push 0
push 10
push offset Lt_0084
push -1
push offset Lt_0A9E
call fb_StrAssign
add esp, 20
push 0
push -1
push dword ptr [Lt_0A9D]
call fb_IntToStr
add esp, 4
push eax
push -1
push offset Lt_0A9E
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0A9E]
call OUTP
add esp, 4
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+16], 0
jne .Lt_0935
push 0
push -1
push 7
push offset Lt_00FB
push -1
push 12
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
sal ebx, 4
lea eax, [DTYPETB+ebx+4]
push eax
push 6
push offset Lt_0103
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
push offset Lt_0A9E
call fb_StrAssign
add esp, 20
push dword ptr [Lt_0A9E]
call OUTP
add esp, 4
jmp .Lt_092C
.Lt_0935:
.Lt_0934:
cmp dword ptr [Lt_0A9D], 4
jle .Lt_0939
push 0
push 8
push offset Lt_012A
push -1
push offset Lt_0A9E
call fb_StrAssign
add esp, 20
jmp .Lt_0938
.Lt_0939:
push 0
push 7
push offset Lt_0134
push -1
push offset Lt_0A9E
call fb_StrAssign
add esp, 20
.Lt_0938:
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
push 0
push -1
push -1
push offset Lt_0A9C
push -1
push 3
push offset Lt_006D
push -1
push 6
push offset Lt_068C
push -1
push offset Lt_0A9E
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
push -1
lea eax, [ebp-52]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-52]
call OUTP
add esp, 4
lea eax, [ebp-52]
push eax
call fb_StrDelete
add esp, 4
.Lt_092F:
.Lt_092C:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITPUSHF_SSE, .-_EMITPUSHF_SSE

.section .bss
.balign 4
	.lcomm	Lt_0A9C,12
.balign 4
	.lcomm	Lt_0A9D,4
.balign 4
	.lcomm	Lt_0A9E,12

.section .text
.balign 16
_EMITPOPF_SSE:
.type _EMITPOPF_SSE, @function
push ebp
mov ebp, esp
sub esp, 88
push ebx
.Lt_093E:
push -1
push 0
push 0
push -2147483648
push offset Lt_0AA0
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_0940
mov dword ptr [ebp-4], 22
jmp .Lt_0A9F
.Lt_0940:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0A9F:
mov eax, dword ptr [ebp-4]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+4]
mov dword ptr [Lt_0AA1], ebx
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx], 4
je .Lt_0943
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx+4], 14
jne .Lt_0945
push 0
push 5
push offset Lt_0946
push -1
push offset Lt_0AA2
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0AA0
push -1
push offset Lt_0AA2
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0AA2]
call OUTP
add esp, 4
jmp .Lt_0944
.Lt_0945:
push -1
push 0
push 0
push 7
push offset Lt_0AA0
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push 0
push 5
push offset Lt_0946
push -1
push offset Lt_0AA2
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0AA0
push -1
push offset Lt_0AA2
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0AA2]
call OUTP
add esp, 4
push -1
push 0
push 4
push 7
push offset Lt_0AA0
push dword ptr [ebp+8]
call HPREPOPERAND
add esp, 24
push 0
push 5
push offset Lt_0946
push -1
push offset Lt_0AA2
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_0AA0
push -1
push offset Lt_0AA2
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0AA2]
call OUTP
add esp, 4
.Lt_0944:
jmp .Lt_0942
.Lt_0943:
cmp dword ptr [Lt_0AA1], 4
jle .Lt_0948
push 0
push 8
push offset Lt_012A
push -1
push offset Lt_0AA2
call fb_StrAssign
add esp, 20
jmp .Lt_0947
.Lt_0948:
push 0
push 7
push offset Lt_0134
push -1
push offset Lt_0AA2
call fb_StrAssign
add esp, 20
.Lt_0947:
mov dword ptr [ebp-64], 0
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
push 0
push -1
push 7
push offset Lt_00FB
push -1
push 12
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
sal ebx, 4
lea eax, [DTYPETB+ebx+4]
push eax
push -1
push 3
push offset Lt_006D
push -1
push -1
push offset Lt_0AA0
push -1
push offset Lt_0AA2
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
push -1
lea eax, [ebp-64]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-64]
call OUTP
add esp, 4
lea eax, [ebp-64]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-88], 0
mov dword ptr [ebp-84], 0
mov dword ptr [ebp-80], 0
push 0
push -1
push -1
push dword ptr [Lt_0AA1]
call fb_IntToStr
add esp, 4
push eax
push 10
push offset Lt_0094
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
push dword ptr [ebp-88]
call OUTP
add esp, 4
lea eax, [ebp-88]
push eax
call fb_StrDelete
add esp, 4
.Lt_0942:
.Lt_093F:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITPOPF_SSE, .-_EMITPOPF_SSE

.section .bss
.balign 4
	.lcomm	Lt_0AA0,12
.balign 4
	.lcomm	Lt_0AA2,12
.balign 4
	.lcomm	Lt_0AA1,4
	#fbc-1.01.0/src/compiler/emit_SSE.bas' compilation took 0.1123089205939323 secs

.section .rodata
.balign 4
Lt_0000:	.ascii	"\0"
.balign 4
Lt_0004:	.ascii	"1\0"
.balign 4
Lt_0006:	.ascii	"0\0"

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
	.lcomm	Lt_006C,32

.section .rodata
.balign 4
Lt_006D:	.ascii	", \0"

.section .bss
.balign 4
	.lcomm	Lt_006E,32

.section .rodata
.balign 4
Lt_0071:	.ascii	"cmp \0"
.balign 4
Lt_0072:	.ascii	", 0\0"
.balign 4
Lt_0073:	.ascii	"jns \0"
.balign 4
Lt_0074:	.ascii	"0x403f\0"
.balign 4
Lt_0075:	.ascii	"0x80000000\0"
.balign 4
Lt_0076:	.ascii	"fldt [esp]\0"
.balign 4
Lt_0077:	.ascii	"add esp, 12\0"
.balign 4
Lt_0078:	.ascii	"faddp\0"
.balign 4
Lt_0084:	.ascii	"sub esp, \0"
.balign 4
Lt_008A:	.ascii	"movlpd qword ptr [esp], \0"
.balign 4
Lt_008D:	.ascii	"fld qword ptr [esp]\0"
.balign 4
Lt_008F:	.ascii	"movss dword ptr [esp], \0"
.balign 4
Lt_0092:	.ascii	"fld dword ptr [esp]\0"
.balign 4
Lt_0094:	.ascii	"add esp, \0"
.balign 4
Lt_0097:	.ascii	"fistp \0"
.balign 4
Lt_00A4:	.ascii	"sub esp, 8\0"
.balign 4
Lt_00A7:	.ascii	"fld \0"
.balign 4
Lt_00B1:	.ascii	"fistp qword ptr [esp]\0"
.balign 4
Lt_00B2:	.ascii	"add esp, 4\0"
.balign 4
Lt_00C4:	.ascii	"add esp, 8\0"
.balign 4
Lt_00CB:	.ascii	"sub esp, 4\0"
.balign 4
Lt_00CC:	.ascii	"fistp dword ptr [esp]\0"
.balign 4
Lt_00CD:	.ascii	"mov \0"
.balign 4
Lt_00CE:	.ascii	"dword ptr [esp]\0"
.balign 4
Lt_00D5:	.ascii	"cvtsd2si \0"
.balign 4
Lt_00DA:	.ascii	"cvtss2si \0"
.balign 4
Lt_00FA:	.ascii	"fild \0"
.balign 4
Lt_00FB:	.ascii	" [esp]\0"
.balign 4
Lt_00FE:	.ascii	"fild qword ptr [esp]\0"
.balign 4
Lt_0103:	.ascii	"fstp \0"
.balign 4
Lt_011E:	.ascii	"movsx \0"
.balign 4
Lt_011F:	.ascii	"movzx \0"
.balign 4
Lt_0127:	.ascii	"cvtsi2sd xmm7, \0"
.balign 4
Lt_012A:	.ascii	"movlpd \0"
.balign 4
Lt_012B:	.ascii	"xmm7\0"
.balign 4
Lt_0131:	.ascii	"cvtsi2ss xmm7, \0"
.balign 4
Lt_0134:	.ascii	"movss \0"
.balign 4
Lt_0141:	.ascii	"movupd \0"
.balign 4
Lt_0148:	.ascii	"movlps \0"
.balign 4
Lt_014F:	.ascii	"movhlps xmm7, \0"
.balign 4
Lt_015B:	.ascii	"movups \0"
.balign 4
Lt_0172:	.ascii	"cvtss2sd \0"
.balign 4
Lt_017D:	.ascii	"cvtsd2ss \0"
.balign 4
Lt_018D:	.ascii	"movupd xmm7, \0"
.balign 4
Lt_0197:	.ascii	"movlps xmm7, \0"
.balign 4
Lt_01A0:	.ascii	"movups xmm7, \0"
.balign 4
Lt_01A7:	.ascii	"unpckhps xmm7, xmm7\0"
.balign 4
Lt_01B6:	.ascii	"movlpd xmm7, \0"
.balign 4
Lt_01BE:	.ascii	"movss xmm7, \0"
.balign 4
Lt_01CA:	.ascii	"cvtpd2ps xmm7, \0"
.balign 4
Lt_01D2:	.ascii	"cvtsd2ss xmm7, \0"
.balign 4
Lt_01DC:	.ascii	"cvtps2pd xmm7, \0"
.balign 4
Lt_01E4:	.ascii	"cvtss2sd xmm7, \0"
.balign 4
Lt_0203:	.ascii	"fld st(0)\0"
.balign 4
Lt_0204:	.ascii	"push 0x4f800000\0"
.balign 4
Lt_0205:	.ascii	"fdiv dword ptr [esp]\0"
.balign 4
Lt_0206:	.ascii	"fild dword ptr [esp]\0"
.balign 4
Lt_0207:	.ascii	"fmul dword ptr [esp]\0"
.balign 4
Lt_0208:	.ascii	"fsubp\0"
.balign 4
Lt_0228:	.ascii	"fistp word ptr [esp]\0"
.balign 4
Lt_0237:	.ascii	"cvtp\0"
.balign 4
Lt_0238:	.ascii	"2dq xmm7\0"
.balign 4
Lt_023E:	.ascii	"packssdw xmm7, xmm7\0"
.balign 4
Lt_023F:	.ascii	"movd \0"
.balign 4
Lt_0244:	.ascii	"cvts\0"
.balign 4
Lt_0245:	.ascii	"2si \0"
.balign 4
Lt_026E:	.ascii	"fstp qword ptr [esp]\0"
.balign 4
Lt_026F:	.ascii	"qword ptr [esp]\0"
.balign 4
Lt_0274:	.ascii	"fstp dword ptr [esp]\0"
.balign 4
Lt_0289:	.ascii	"sd \0"
.balign 4
Lt_028A:	.ascii	"ss \0"
.balign 4
Lt_028F:	.ascii	"and \0"
.balign 4
Lt_0290:	.ascii	"0xFFFF\0"
.balign 4
Lt_0295:	.ascii	"cvtsi2\0"
.balign 4
Lt_029F:	.ascii	"shr \0"
.balign 4
Lt_02A0:	.ascii	"16\0"
.balign 4
Lt_02AA:	.ascii	"mul\0"
.balign 4
Lt_02B0:	.ascii	"add\0"
.balign 4
Lt_02D0:	.ascii	"cvtsi2sd \0"
.balign 4
Lt_02D5:	.ascii	"cvtsi2ss \0"
.balign 4
Lt_02E3:	.ascii	"movlpd [esp], \0"
.balign 4
Lt_02E7:	.ascii	"movss [esp], \0"
.balign 4
Lt_0317:	.ascii	"cvtpd2ps \0"
.balign 4
Lt_0322:	.ascii	"cvtps2pd \0"
.balign 4
Lt_0348:	.ascii	"movaps \0"
.balign 4
Lt_0353:	.ascii	"unpcklpd \0"
.balign 4
Lt_035A:	.ascii	"unpcklps \0"
.balign 4
Lt_035F:	.ascii	"shufps \0"
.balign 4
Lt_0360:	.ascii	"0x0\0"
.balign 4
Lt_039B:	.ascii	"adds\0"
.balign 4
Lt_039E:	.ascii	"addp\0"
.balign 4
Lt_03B3:	.ascii	"d \0"
.balign 4
Lt_03B9:	.ascii	"s \0"
.balign 4
Lt_03BF:	.ascii	" implement 'add integer to float'\0"
.balign 4
Lt_03DC:	.ascii	"subs\0"
.balign 4
Lt_03DF:	.ascii	"subp\0"
.balign 4
Lt_03FE:	.ascii	" implement 'subtract integer from float'\0"
.balign 4
Lt_041B:	.ascii	"muls\0"
.balign 4
Lt_041E:	.ascii	"mulp\0"
.balign 4
Lt_043D:	.ascii	" implement 'multiply float by integer'\0"
.balign 4
Lt_045A:	.ascii	"divs\0"
.balign 4
Lt_045D:	.ascii	"divp\0"
.balign 4
Lt_047C:	.ascii	" implement 'divide float by integer'\0"
.balign 4
Lt_0499:	.ascii	"fpatan\0"
.balign 4
Lt_04BE:	.ascii	"fabs\0"
.balign 4
Lt_04BF:	.ascii	"fyl2x\0"
.balign 4
Lt_04C0:	.ascii	"frndint\0"
.balign 4
Lt_04C1:	.ascii	"fsub st(1), st(0)\0"
.balign 4
Lt_04C2:	.ascii	"fxch\0"
.balign 4
Lt_04C3:	.ascii	"f2xm1\0"
.balign 4
Lt_04C4:	.ascii	"fld1\0"
.balign 4
Lt_04C5:	.ascii	"fscale\0"
.balign 4
Lt_04C6:	.ascii	"fstp st(1)\0"
.balign 4
Lt_04F5:	.ascii	"comisd \0"
.balign 4
Lt_0505:	.ascii	"comisd xmm7, \0"
.balign 4
Lt_0508:	.ascii	"comiss \0"
.balign 4
Lt_050F:	.ascii	"j\0"
.balign 4
Lt_0517:	.ascii	"xchg edx, \0"
.balign 4
Lt_0518:	.ascii	"set\0"
.balign 4
Lt_051B:	.ascii	"\tdl\0"
.balign 4
Lt_0520:	.ascii	"edx\0"
.balign 4
Lt_0521:	.ascii	" \0"
.balign 4
Lt_0525:	.ascii	", 1\0"
.balign 4
Lt_0526:	.ascii	"sbb \0"
.balign 4
Lt_0527:	.ascii	", -1\0"
.balign 4
Lt_0529:	.ascii	"xor \0"
.balign 4
Lt_052C:	.ascii	"a\0"
.balign 4
Lt_052F:	.ascii	"b\0"
.balign 4
Lt_0532:	.ascii	"e\0"
.balign 4
Lt_0535:	.ascii	"ne\0"
.balign 4
Lt_0538:	.ascii	"be\0"
.balign 4
Lt_053B:	.ascii	"ae\0"
.balign 4
Lt_0554:	.ascii	"xorpd \0"
.balign 4
Lt_0559:	.ascii	"xorps \0"
.balign 4
Lt_0566:	.ascii	"addsd \0"
.balign 4
Lt_056E:	.ascii	"pshufd xmm7, \0"
.balign 4
Lt_056F:	.ascii	"0x01\0"
.balign 4
Lt_0574:	.ascii	"addss \0"
.balign 4
Lt_058B:	.ascii	"addps \0"
.balign 4
Lt_05B0:	.ascii	"andpd \0"
.balign 4
Lt_05B5:	.ascii	"andps \0"
.balign 4
Lt_05D0:	.ascii	"xorpd xmm7, xmm7\0"
.balign 4
Lt_05D2:	.ascii	"cmpneqsd xmm7, \0"
.balign 4
Lt_05D5:	.ascii	"orpd \0"
.balign 4
Lt_05DB:	.ascii	"andpd xmm7, \0"
.balign 4
Lt_05E2:	.ascii	"xorps xmm7, xmm7\0"
.balign 4
Lt_05E4:	.ascii	"cmpneqss xmm7, \0"
.balign 4
Lt_05E7:	.ascii	"orps \0"
.balign 4
Lt_05ED:	.ascii	"andps xmm7, \0"
.balign 4
Lt_0617:	.ascii	"mov [esp+\0"
.balign 4
Lt_0618:	.ascii	"]\0"
.balign 4
Lt_061E:	.ascii	"movss [esp+\0"
.balign 4
Lt_0627:	.ascii	"movss\11[esp], \0"
.balign 4
Lt_062A:	.ascii	"mulss\11\0"
.balign 4
Lt_062F:	.ascii	"and\11\11dword ptr [esp], 0x80000000\0"
.balign 4
Lt_0630:	.ascii	"andps\11\0"
.balign 4
Lt_0637:	.ascii	"addss\11\0"
.balign 4
Lt_0640:	.ascii	"cvttss2si\11\0"
.balign 4
Lt_0646:	.ascii	"movss\11xmm7, \0"
.balign 4
Lt_0649:	.ascii	"mov\11\11\0"
.balign 4
Lt_064E:	.ascii	"cvtsi2ss\11\0"
.balign 4
Lt_0653:	.ascii	"shl\11\11\0"
.balign 4
Lt_0654:	.ascii	"30\0"
.balign 4
Lt_0659:	.ascii	"not\11\11\0"
.balign 4
Lt_065C:	.ascii	"and\11\11\0"
.balign 4
Lt_0661:	.ascii	"0x1\0"
.balign 4
Lt_0666:	.ascii	"subss\11\0"
.balign 4
Lt_066B:	.ascii	"dec\11\11\0"
.balign 4
Lt_066E:	.ascii	"minss\11\0"
.balign 4
Lt_0673:	.ascii	"movd\11\11\0"
.balign 4
Lt_0679:	.ascii	"subss\11xmm7, \0"
.balign 4
Lt_067D:	.ascii	"andps\11xmm7, \0"
.balign 4
Lt_0680:	.ascii	"andnps\11\0"
.balign 4
Lt_0686:	.ascii	"orps\11\11xmm7, \0"
.balign 4
Lt_068B:	.ascii	"xor\11\11\0"
.balign 4
Lt_068C:	.ascii	"[esp]\0"
.balign 4
Lt_0695:	.ascii	"mulss\11xmm7, xmm7\0"
.balign 4
Lt_0696:	.ascii	"or\11\11\0"
.balign 4
Lt_069B:	.ascii	"movss\11\0"
.balign 4
Lt_06A1:	.ascii	"mulss\11xmm7, \0"
.balign 4
Lt_06A5:	.ascii	"addss\11xmm7, \0"
.balign 4
Lt_06C0:	.ascii	"[esp+\0"
.balign 4
Lt_06DF:	.ascii	"fsin\0"
.balign 4
Lt_06FE:	.ascii	"fmul st(0), st(0)\0"
.balign 4
Lt_06FF:	.ascii	"fsubrp\0"
.balign 4
Lt_0700:	.ascii	"fsqrt\0"
.balign 4
Lt_0721:	.ascii	"fcos\0"
.balign 4
Lt_075E:	.ascii	"fptan\0"
.balign 4
Lt_075F:	.ascii	"fstp st(0)\0"
.balign 4
Lt_07A2:	.ascii	"sqrtsd \0"
.balign 4
Lt_07A7:	.ascii	"sqrtss \0"
.balign 4
Lt_07C4:	.ascii	"rsqrtsd \0"
.balign 4
Lt_07C9:	.ascii	"rsqrtss \0"
.balign 4
Lt_07E6:	.ascii	"rcpsd \0"
.balign 4
Lt_07EB:	.ascii	"rcpss \0"
.balign 4
Lt_0802:	.ascii	"fldln2\0"
.balign 4
Lt_0821:	.ascii	"fldl2e\0"
.balign 4
Lt_0822:	.ascii	"fmulp st(1), st\0"
.balign 4
Lt_0823:	.ascii	"fld st\0"
.balign 4
Lt_0824:	.ascii	"fsub st(1), st\0"
.balign 4
Lt_0825:	.ascii	"0x3f800000\0"
.balign 4
Lt_0826:	.ascii	"fadd dword ptr [esp]\0"
.balign 4
Lt_0845:	.ascii	"movap\0"
.balign 4
Lt_084D:	.ascii	"fst qword ptr [esp]\0"
.balign 4
Lt_084E:	.ascii	"movlpd xmm7, qword ptr [esp]\0"
.balign 4
Lt_084F:	.ascii	"fst dword ptr [esp]\0"
.balign 4
Lt_0850:	.ascii	"movss xmm7, dword ptr [esp]\0"
.balign 4
Lt_0854:	.ascii	"xorp\0"
.balign 4
Lt_085F:	.ascii	"cmpnles\0"
.balign 4
Lt_0865:	.ascii	"andp\0"
.balign 4
Lt_088A:	.ascii	"xmm7, xmm7\0"
.balign 4
Lt_0890:	.ascii	"movlpd [esp+8], xmm7\0"
.balign 4
Lt_0891:	.ascii	"movss [esp+8], xmm7\0"
.balign 4
Lt_08AE:	.ascii	"cmplts\0"
.balign 4
Lt_08AF:	.ascii	"[esp+8]\0"
.balign 4
Lt_08E0:	.ascii	"shufpd \0"
.balign 4
Lt_08E7:	.ascii	"movlhps \0"
.balign 4
Lt_091A:	.ascii	"movhlps \0"
.balign 4
Lt_0933:	.ascii	"push \0"
.balign 4
Lt_0946:	.ascii	"pop \0"

.section .ctors, "aw", @progbits
.int fb_ctor__emit_SSE
