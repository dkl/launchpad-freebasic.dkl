	.intel_syntax noprefix

	#FreeBASIC-1.01.0-source/src/compiler/ir-tac.bas' compilation started at 16:30:04 (FreeBASIC 1.01.0)

.section .text
.balign 16
fb_ctor__irztac:
.type fb_ctor__irztac, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__irztac, .-fb_ctor__irztac
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
_ZN9IRTAC_CTXC1Ev:
.type _ZN9IRTAC_CTXC1Ev, @function
push ebp
mov ebp, esp
push ebx
mov eax, dword ptr [ebp+8]
lea ebx, [eax]
push edi
mov edi, ebx
xor eax, eax
mov ecx, 14
rep stosd
pop edi
mov ebx, dword ptr [ebp+8]
add ebx, 56
mov dword ptr [ebx], 0
mov ebx, dword ptr [ebp+8]
add ebx, 60
mov dword ptr [ebx], 0
mov ebx, dword ptr [ebp+8]
add ebx, 64
lea eax, [ebx]
push eax
push edi
mov edi, eax
xor eax, eax
mov ecx, 14
rep stosd
pop edi
pop eax
mov eax, dword ptr [ebp+8]
add eax, 120
mov dword ptr [eax], 0
mov dword ptr [eax+4], 0
mov dword ptr [eax+8], 0
.Lt_006C:
.Lt_006D:
pop ebx
mov esp, ebp
pop ebp
ret
.size _ZN9IRTAC_CTXC1Ev, .-_ZN9IRTAC_CTXC1Ev
.balign 16
_ZN9IRTAC_CTXaSERKS_:
.type _ZN9IRTAC_CTXaSERKS_, @function
push ebp
mov ebp, esp
push ebx
.Lt_006E:
mov eax, dword ptr [ebp+8]
lea ebx, [eax]
mov eax, dword ptr [ebp+12]
lea ecx, [eax]
push ecx
push edi
push esi
mov edi, ebx
mov esi, ecx
mov ecx, 14
rep movsd
pop esi
pop edi
pop ecx
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
mov ecx, dword ptr [ebp+8]
add ecx, 64
lea ebx, [ecx]
mov ecx, dword ptr [ebp+12]
add ecx, 64
lea eax, [ecx]
push edi
push esi
mov edi, ebx
mov esi, eax
mov ecx, 14
rep movsd
pop esi
pop edi
push 0
push -1
mov eax, dword ptr [ebp+12]
add eax, 120
lea ebx, [eax]
push ebx
push -1
mov ebx, dword ptr [ebp+8]
add ebx, 120
lea eax, [ebx]
push eax
call fb_StrAssign
add esp, 20
.Lt_006F:
pop ebx
mov esp, ebp
pop ebp
ret
.size _ZN9IRTAC_CTXaSERKS_, .-_ZN9IRTAC_CTXaSERKS_
.balign 16
_ZN9IRTAC_CTXD1Ev:
.type _ZN9IRTAC_CTXD1Ev, @function
push ebp
mov ebp, esp
push ebx
.Lt_0072:
.Lt_0073:
mov eax, dword ptr [ebp+8]
add eax, 120
lea ebx, [eax]
push ebx
call fb_StrDelete
add esp, 4
pop ebx
mov esp, ebp
pop ebp
ret
.size _ZN9IRTAC_CTXD1Ev, .-_ZN9IRTAC_CTXD1Ev
.balign 16
_INIT:
.type _INIT, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0075:
mov dword ptr [CTX+60], 0
mov dword ptr [CTX+56], 0
push 124
push 2048
lea eax, [CTX]
push eax
call FLISTINIT
add esp, 12
push 68
push 6144
lea eax, [CTX+64]
push eax
call FLISTINIT
add esp, 12
call EMITINIT
mov dword ptr [ebp-4], 0
.Lt_007A:
push dword ptr [ebp-4]
call EMITGETREGCLASS
add esp, 4
mov ebx, dword ptr [ebp-4]
mov dword ptr [REGTB+ebx*4], eax
.Lt_0078:
inc dword ptr [ebp-4]
.Lt_0077:
cmp dword ptr [ebp-4], 1
jle .Lt_007A
.Lt_0079:
.Lt_0076:
pop ebx
mov esp, ebp
pop ebp
ret
.size _INIT, .-_INIT
.balign 16
_END:
.type _END, @function
.Lt_007B:
call EMITEND
lea eax, [CTX+64]
push eax
call FLISTEND
add esp, 4
lea eax, [CTX]
push eax
call FLISTEND
add esp, 4
mov dword ptr [CTX+60], 0
mov dword ptr [CTX+56], 0
.Lt_007C:
ret
.size _END, .-_END
.balign 16
_EMITBEGIN:
.type _EMITBEGIN, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_007D:
call dword ptr [EMIT+176]
mov dword ptr [ebp-4], eax
.Lt_007E:
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
.Lt_007F:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call dword ptr [EMIT+180]
add esp, 8
.Lt_0080:
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
.Lt_0081:
push dword ptr [ebp+8]
call dword ptr [EMIT+172]
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_0082:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size _GETOPTIONVALUE, .-_GETOPTIONVALUE
.balign 16
HLOADIDX:
.type HLOADIDX, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_0083:
cmp dword ptr [ebp+8], 0
jne .Lt_0086
jmp .Lt_0084
.Lt_0086:
.Lt_0085:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-8], ebx
cmp dword ptr [ebp-8], 2
je .Lt_008A
.Lt_008B:
cmp dword ptr [ebp-8], 3
jne .Lt_0089
.Lt_008A:
jmp .Lt_0087
.Lt_0089:
jmp .Lt_0084
.Lt_008C:
.Lt_0087:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+48]
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
jne .Lt_008E
jmp .Lt_0084
.Lt_008E:
.Lt_008D:
mov eax, dword ptr [ebp-4]
cmp dword ptr [eax], 0
jne .Lt_0090
jmp .Lt_0084
.Lt_0090:
.Lt_008F:
push dword ptr [SYMB_DTYPETB+200]
push 0
push dword ptr [ebp-4]
push dword ptr [REGTB]
mov eax, dword ptr [REGTB]
call dword ptr [eax]
add esp, 16
.Lt_0084:
pop ebx
mov esp, ebp
pop ebp
ret
.size HLOADIDX, .-HLOADIDX
.balign 16
HRELINK:
.type HRELINK, @function
push ebp
mov ebp, esp
push ebx
.Lt_0091:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+56], 0
jne .Lt_0094
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+12]
mov dword ptr [eax+56], ebx
jmp .Lt_0093
.Lt_0094:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+60]
mov ebx, dword ptr [ebp+12]
mov dword ptr [eax+8], ebx
.Lt_0093:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp+12]
mov dword ptr [ebx+60], eax
.Lt_0092:
pop ebx
mov esp, ebp
pop ebp
ret
.size HRELINK, .-HRELINK
.balign 16
_EMIT:
.type _EMIT, @function
push ebp
mov ebp, esp
push ebx
.Lt_0095:
lea eax, [CTX]
push eax
call FLISTNEWITEM
add esp, 4
mov dword ptr [Lt_03FF], eax
mov eax, dword ptr [Lt_03FF]
mov ebx, dword ptr [CTX+56]
mov dword ptr [eax], ebx
mov ebx, dword ptr [Lt_03FF]
mov eax, dword ptr [ebp+8]
mov dword ptr [ebx+4], eax
mov eax, dword ptr [Lt_03FF]
mov ebx, dword ptr [ebp+12]
mov dword ptr [eax+44], ebx
mov ebx, dword ptr [Lt_03FF]
mov dword ptr [ebx+48], 0
mov ebx, dword ptr [Lt_03FF]
mov dword ptr [ebx+52], 0
cmp dword ptr [ebp+12], 0
je .Lt_0098
mov ebx, dword ptr [Lt_03FF]
lea eax, [ebx+44]
push eax
push dword ptr [ebp+12]
call HRELINK
add esp, 8
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [Lt_03FF]
mov dword ptr [eax+64], ebx
mov ebx, dword ptr [ebp+12]
cmp dword ptr [ebx+48], 0
je .Lt_009A
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [Lt_03FF]
mov ecx, dword ptr [ebx+48]
mov dword ptr [eax+56], ecx
mov ecx, dword ptr [Lt_03FF]
mov eax, dword ptr [ebp+12]
mov dword ptr [ecx+60], eax
mov eax, dword ptr [Lt_03FF]
mov dword ptr [eax+64], 0
mov eax, dword ptr [Lt_03FF]
lea ecx, [eax+56]
push ecx
mov ecx, dword ptr [ebp+12]
push dword ptr [ecx+48]
call HRELINK
add esp, 8
mov ecx, dword ptr [ebp+12]
mov eax, dword ptr [ecx+48]
mov ecx, dword ptr [Lt_03FF]
mov dword ptr [eax+64], ecx
.Lt_009A:
.Lt_0099:
mov ecx, dword ptr [ebp+12]
cmp dword ptr [ecx+52], 0
je .Lt_009C
mov ecx, dword ptr [ebp+12]
mov eax, dword ptr [Lt_03FF]
mov ebx, dword ptr [ecx+52]
mov dword ptr [eax+68], ebx
mov ebx, dword ptr [Lt_03FF]
mov eax, dword ptr [ebp+12]
mov dword ptr [ebx+72], eax
mov eax, dword ptr [Lt_03FF]
mov dword ptr [eax+76], 0
mov eax, dword ptr [Lt_03FF]
lea ebx, [eax+68]
push ebx
mov ebx, dword ptr [ebp+12]
push dword ptr [ebx+52]
call HRELINK
add esp, 8
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+52]
mov ebx, dword ptr [Lt_03FF]
mov dword ptr [eax+64], ebx
.Lt_009C:
.Lt_009B:
.Lt_0098:
.Lt_0097:
mov ebx, dword ptr [Lt_03FF]
mov eax, dword ptr [ebp+16]
mov dword ptr [ebx+80], eax
mov eax, dword ptr [Lt_03FF]
mov dword ptr [eax+84], 0
mov eax, dword ptr [Lt_03FF]
mov dword ptr [eax+88], 0
cmp dword ptr [ebp+16], 0
je .Lt_009E
mov eax, dword ptr [Lt_03FF]
lea ebx, [eax+80]
push ebx
push dword ptr [ebp+16]
call HRELINK
add esp, 8
mov ebx, dword ptr [ebp+16]
mov eax, dword ptr [Lt_03FF]
mov dword ptr [ebx+64], eax
mov eax, dword ptr [ebp+16]
cmp dword ptr [eax+48], 0
je .Lt_00A0
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [Lt_03FF]
mov ecx, dword ptr [eax+48]
mov dword ptr [ebx+92], ecx
mov ecx, dword ptr [Lt_03FF]
mov ebx, dword ptr [ebp+16]
mov dword ptr [ecx+96], ebx
mov ebx, dword ptr [Lt_03FF]
mov dword ptr [ebx+100], 0
mov ebx, dword ptr [Lt_03FF]
lea ecx, [ebx+92]
push ecx
mov ecx, dword ptr [ebp+16]
push dword ptr [ecx+48]
call HRELINK
add esp, 8
mov ecx, dword ptr [ebp+16]
mov ebx, dword ptr [ecx+48]
mov ecx, dword ptr [Lt_03FF]
mov dword ptr [ebx+64], ecx
.Lt_00A0:
.Lt_009F:
mov ecx, dword ptr [ebp+16]
cmp dword ptr [ecx+52], 0
je .Lt_00A2
mov ecx, dword ptr [ebp+16]
mov ebx, dword ptr [Lt_03FF]
mov eax, dword ptr [ecx+52]
mov dword ptr [ebx+104], eax
mov eax, dword ptr [Lt_03FF]
mov ebx, dword ptr [ebp+16]
mov dword ptr [eax+108], ebx
mov ebx, dword ptr [Lt_03FF]
mov dword ptr [ebx+112], 0
mov ebx, dword ptr [Lt_03FF]
lea eax, [ebx+104]
push eax
mov eax, dword ptr [ebp+16]
push dword ptr [eax+52]
call HRELINK
add esp, 8
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+52]
mov eax, dword ptr [Lt_03FF]
mov dword ptr [ebx+64], eax
.Lt_00A2:
.Lt_00A1:
.Lt_009E:
.Lt_009D:
mov eax, dword ptr [Lt_03FF]
mov ebx, dword ptr [ebp+20]
mov dword ptr [eax+8], ebx
mov ebx, dword ptr [Lt_03FF]
mov dword ptr [ebx+12], 0
mov ebx, dword ptr [Lt_03FF]
mov dword ptr [ebx+16], 0
cmp dword ptr [ebp+20], 0
je .Lt_00A4
mov ebx, dword ptr [Lt_03FF]
lea eax, [ebx+8]
push eax
push dword ptr [ebp+20]
call HRELINK
add esp, 8
mov eax, dword ptr [ebp+20]
mov ebx, dword ptr [Lt_03FF]
mov dword ptr [eax+64], ebx
mov ebx, dword ptr [ebp+20]
cmp dword ptr [ebx+48], 0
je .Lt_00A6
mov ebx, dword ptr [ebp+20]
mov eax, dword ptr [Lt_03FF]
mov ecx, dword ptr [ebx+48]
mov dword ptr [eax+20], ecx
mov ecx, dword ptr [Lt_03FF]
mov eax, dword ptr [ebp+20]
mov dword ptr [ecx+24], eax
mov eax, dword ptr [Lt_03FF]
mov dword ptr [eax+28], 0
mov eax, dword ptr [Lt_03FF]
lea ecx, [eax+20]
push ecx
mov ecx, dword ptr [ebp+20]
push dword ptr [ecx+48]
call HRELINK
add esp, 8
mov ecx, dword ptr [ebp+20]
mov eax, dword ptr [ecx+48]
mov ecx, dword ptr [Lt_03FF]
mov dword ptr [eax+64], ecx
.Lt_00A6:
.Lt_00A5:
mov ecx, dword ptr [ebp+20]
cmp dword ptr [ecx+52], 0
je .Lt_00A8
mov ecx, dword ptr [ebp+20]
mov eax, dword ptr [Lt_03FF]
mov ebx, dword ptr [ecx+52]
mov dword ptr [eax+32], ebx
mov ebx, dword ptr [Lt_03FF]
mov eax, dword ptr [ebp+20]
mov dword ptr [ebx+36], eax
mov eax, dword ptr [Lt_03FF]
mov dword ptr [eax+40], 0
mov eax, dword ptr [Lt_03FF]
lea ebx, [eax+32]
push ebx
mov ebx, dword ptr [ebp+20]
push dword ptr [ebx+52]
call HRELINK
add esp, 8
mov ebx, dword ptr [ebp+20]
mov eax, dword ptr [ebx+52]
mov ebx, dword ptr [Lt_03FF]
mov dword ptr [eax+64], ebx
.Lt_00A8:
.Lt_00A7:
.Lt_00A4:
.Lt_00A3:
mov ebx, dword ptr [Lt_03FF]
mov eax, dword ptr [ebp+24]
mov dword ptr [ebx+116], eax
mov eax, dword ptr [Lt_03FF]
mov ebx, dword ptr [ebp+28]
mov dword ptr [eax+120], ebx
inc dword ptr [CTX+56]
.Lt_0096:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMIT, .-_EMIT

.section .bss
.balign 4
	.lcomm	Lt_03FF,4

.section .text
.balign 16
_PROCBEGIN:
.type _PROCBEGIN, @function
push ebp
mov ebp, esp
.Lt_00A9:
push dword ptr [ebp+8]
call dword ptr [EMIT+204]
add esp, 4
.Lt_00AA:
mov esp, ebp
pop ebp
ret
.size _PROCBEGIN, .-_PROCBEGIN
.balign 16
_PROCEND:
.type _PROCEND, @function
push ebp
mov ebp, esp
.Lt_00AB:
push dword ptr [ebp+8]
call dword ptr [EMIT+208]
add esp, 4
.Lt_00AC:
mov esp, ebp
pop ebp
ret
.size _PROCEND, .-_PROCEND
.balign 16
_PROCALLOCARG:
.type _PROCALLOCARG, @function
push ebp
mov ebp, esp
.Lt_00AD:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call dword ptr [EMIT+220]
add esp, 8
.Lt_00AE:
mov esp, ebp
pop ebp
ret
.size _PROCALLOCARG, .-_PROCALLOCARG
.balign 16
_PROCALLOCLOCAL:
.type _PROCALLOCLOCAL, @function
push ebp
mov ebp, esp
.Lt_00AF:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call dword ptr [EMIT+224]
add esp, 8
.Lt_00B0:
mov esp, ebp
pop ebp
ret
.size _PROCALLOCLOCAL, .-_PROCALLOCLOCAL
.balign 16
_PROCGETFRAMEREGNAME:
.type _PROCGETFRAMEREGNAME, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_00B1:
call dword ptr [EMIT+200]
mov dword ptr [ebp-4], eax
.Lt_00B2:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size _PROCGETFRAMEREGNAME, .-_PROCGETFRAMEREGNAME
.balign 16
_SCOPEBEGIN:
.type _SCOPEBEGIN, @function
push ebp
mov ebp, esp
.Lt_00B3:
push dword ptr [ebp+8]
call dword ptr [EMIT+232]
add esp, 4
.Lt_00B4:
mov esp, ebp
pop ebp
ret
.size _SCOPEBEGIN, .-_SCOPEBEGIN
.balign 16
_SCOPEEND:
.type _SCOPEEND, @function
push ebp
mov ebp, esp
.Lt_00B5:
push dword ptr [ebp+8]
call dword ptr [EMIT+236]
add esp, 4
.Lt_00B6:
mov esp, ebp
pop ebp
ret
.size _SCOPEEND, .-_SCOPEEND
.balign 16
_PROCALLOCSTATICVARS:
.type _PROCALLOCSTATICVARS, @function
push ebp
mov ebp, esp
.Lt_00B7:
push dword ptr [ebp+8]
call dword ptr [EMIT+228]
add esp, 4
.Lt_00B8:
mov esp, ebp
pop ebp
ret
.size _PROCALLOCSTATICVARS, .-_PROCALLOCSTATICVARS
.balign 16
_EMITLABEL:
.type _EMITLABEL, @function
push ebp
mov ebp, esp
.Lt_00B9:
call _FLUSH
push dword ptr [ebp+8]
call EMITLABEL
add esp, 4
.Lt_00BA:
mov esp, ebp
pop ebp
ret
.size _EMITLABEL, .-_EMITLABEL
.balign 16
_EMITRETURN:
.type _EMITRETURN, @function
push ebp
mov ebp, esp
.Lt_00BB:
call _FLUSH
push dword ptr [ebp+8]
call EMITRET
add esp, 4
.Lt_00BC:
mov esp, ebp
pop ebp
ret
.size _EMITRETURN, .-_EMITRETURN
.balign 16
_EMITPROCBEGIN:
.type _EMITPROCBEGIN, @function
push ebp
mov ebp, esp
push ebx
.Lt_00BD:
call _FLUSH
mov dword ptr [Lt_0400], 0
.Lt_00C2:
mov eax, dword ptr [Lt_0400]
push dword ptr [REGTB+eax*4]
mov eax, dword ptr [Lt_0400]
mov ebx, dword ptr [REGTB+eax*4]
call dword ptr [ebx+44]
add esp, 4
.Lt_00C0:
inc dword ptr [Lt_0400]
.Lt_00BF:
cmp dword ptr [Lt_0400], 1
jle .Lt_00C2
.Lt_00C1:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call dword ptr [EMIT+212]
add esp, 8
.Lt_00BE:
pop ebx
mov esp, ebp
pop ebp
ret
.size _EMITPROCBEGIN, .-_EMITPROCBEGIN

.section .bss
.balign 4
	.lcomm	Lt_0400,4

.section .text
.balign 16
_EMITPROCEND:
.type _EMITPROCEND, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_00C3:
call _FLUSH
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+80], 3
jne .Lt_00C6
mov dword ptr [ebp-4], 0
jmp .Lt_00C5
.Lt_00C6:
push dword ptr [ebp+8]
call SYMBCALCPROCPARAMSLEN
add esp, 4
mov ebx, eax
mov dword ptr [ebp-4], ebx
.Lt_00C5:
push dword ptr [ebp+8]
call SYMBPROCRETURNSONSTACK
add esp, 4
test eax, eax
je .Lt_00C8
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+80]
cmp ebx, 3
setne bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ENV+224]
and eax, 8
or ebx, eax
je .Lt_00CA
mov eax, dword ptr [ENV+236]
add dword ptr [ebp-4], eax
.Lt_00CA:
.Lt_00C9:
.Lt_00C8:
.Lt_00C7:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp-4]
push dword ptr [ebp+8]
call dword ptr [EMIT+216]
add esp, 16
.Lt_00C4:
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
.Lt_00CB:
call _FLUSH
.Lt_00CC:
mov esp, ebp
pop ebp
ret
.size _EMITSCOPEBEGIN, .-_EMITSCOPEBEGIN
.balign 16
_EMITSCOPEEND:
.type _EMITSCOPEEND, @function
push ebp
mov ebp, esp
.Lt_00CD:
call _FLUSH
.Lt_00CE:
mov esp, ebp
pop ebp
ret
.size _EMITSCOPEEND, .-_EMITSCOPEEND
.balign 16
_EMITBOP:
.type _EMITBOP, @function
push ebp
mov ebp, esp
.Lt_00CF:
push 0
push dword ptr [ebp+24]
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call _EMIT
add esp, 24
.Lt_00D0:
mov esp, ebp
pop ebp
ret
.size _EMITBOP, .-_EMITBOP
.balign 16
_EMITUOP:
.type _EMITUOP, @function
push ebp
mov ebp, esp
.Lt_00D1:
push 0
push 0
push dword ptr [ebp+16]
push 0
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call _EMIT
add esp, 24
.Lt_00D2:
mov esp, ebp
pop ebp
ret
.size _EMITUOP, .-_EMITUOP
.balign 16
_EMITCONVERT:
.type _EMITCONVERT, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_00D3:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_00D5
mov dword ptr [ebp-4], 22
jmp .Lt_0402
.Lt_00D5:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0402:
mov eax, dword ptr [ebp-4]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax]
mov dword ptr [ebp-8], ebx
cmp dword ptr [ebp-8], 0
jne .Lt_00D9
.Lt_00DA:
push 0
push 0
push 0
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 82
call _EMIT
add esp, 24
jmp .Lt_00D7
.Lt_00D9:
cmp dword ptr [ebp-8], 1
jne .Lt_00DB
.Lt_00DC:
push 0
push 0
push 0
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 83
call _EMIT
add esp, 24
.Lt_00DB:
.Lt_00D7:
.Lt_00D4:
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
.Lt_00DD:
push 0
push 0
push 0
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 0
call _EMIT
add esp, 24
.Lt_00DE:
mov esp, ebp
pop ebp
ret
.size _EMITSTORE, .-_EMITSTORE
.balign 16
_EMITSPILLREGS:
.type _EMITSPILLREGS, @function
.Lt_00DF:
push 0
push 0
push 0
push 0
push 0
push 86
call _EMIT
add esp, 24
.Lt_00E0:
ret
.size _EMITSPILLREGS, .-_EMITSPILLREGS
.balign 16
_EMITLOAD:
.type _EMITLOAD, @function
push ebp
mov ebp, esp
.Lt_00E1:
push 0
push 0
push 0
push 0
push dword ptr [ebp+8]
push 84
call _EMIT
add esp, 24
.Lt_00E2:
mov esp, ebp
pop ebp
ret
.size _EMITLOAD, .-_EMITLOAD
.balign 16
_EMITLOADRES:
.type _EMITLOADRES, @function
push ebp
mov ebp, esp
.Lt_00E3:
push 0
push 0
push dword ptr [ebp+12]
push 0
push dword ptr [ebp+8]
push 85
call _EMIT
add esp, 24
.Lt_00E4:
mov esp, ebp
pop ebp
ret
.size _EMITLOADRES, .-_EMITLOADRES
.balign 16
_EMITSTACK:
.type _EMITSTACK, @function
push ebp
mov ebp, esp
.Lt_00E5:
push 0
push 0
push 0
push 0
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call _EMIT
add esp, 24
.Lt_00E6:
mov esp, ebp
pop ebp
ret
.size _EMITSTACK, .-_EMITSTACK
.balign 16
_EMITPUSHARG:
.type _EMITPUSHARG, @function
push ebp
mov ebp, esp
.Lt_00E7:
cmp dword ptr [ebp+20], 0
jne .Lt_00EA
cmp dword ptr [ebp+16], 0
jne .Lt_00EA
.Lt_0403:
push dword ptr [ebp+12]
push 87
call _EMITSTACK
add esp, 8
jmp .Lt_00E9
.Lt_00EA:
mov eax, dword ptr [ebp+16]
push eax
push 0
push 0
push 0
push dword ptr [ebp+12]
push 89
call _EMIT
add esp, 24
.Lt_00E9:
.Lt_00E8:
mov esp, ebp
pop ebp
ret
.size _EMITPUSHARG, .-_EMITPUSHARG
.balign 16
_EMITADDR:
.type _EMITADDR, @function
push ebp
mov ebp, esp
.Lt_00EB:
push 0
push 0
push dword ptr [ebp+16]
push 0
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call _EMIT
add esp, 24
.Lt_00EC:
mov esp, ebp
pop ebp
ret
.size _EMITADDR, .-_EMITADDR
.balign 16
_EMITLABELNF:
.type _EMITLABELNF, @function
push ebp
mov ebp, esp
.Lt_00ED:
push 0
push dword ptr [ebp+8]
push 0
push 0
push 0
push 99
call _EMIT
add esp, 24
.Lt_00EE:
mov esp, ebp
pop ebp
ret
.size _EMITLABELNF, .-_EMITLABELNF
.balign 16
_EMITCALL:
.type _EMITCALL, @function
push ebp
mov ebp, esp
.Lt_00EF:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push dword ptr [ebp+16]
push 0
push 0
push 101
call _EMIT
add esp, 24
.Lt_00F0:
mov esp, ebp
pop ebp
ret
.size _EMITCALL, .-_EMITCALL
.balign 16
_EMITCALLPTR:
.type _EMITCALLPTR, @function
push ebp
mov ebp, esp
.Lt_00F1:
push dword ptr [ebp+20]
push dword ptr [ebp+8]
push dword ptr [ebp+16]
push 0
push dword ptr [ebp+12]
push 102
call _EMIT
add esp, 24
.Lt_00F2:
mov esp, ebp
pop ebp
ret
.size _EMITCALLPTR, .-_EMITCALLPTR
.balign 16
_EMITSTACKALIGN:
.type _EMITSTACKALIGN, @function
push ebp
mov ebp, esp
.Lt_00F3:
push dword ptr [ebp+8]
push 0
push 0
push 0
push 0
push 90
call _EMIT
add esp, 24
.Lt_00F4:
mov esp, ebp
pop ebp
ret
.size _EMITSTACKALIGN, .-_EMITSTACKALIGN
.balign 16
_EMITJUMPPTR:
.type _EMITJUMPPTR, @function
push ebp
mov ebp, esp
.Lt_00F5:
push 0
push 0
push 0
push 0
push dword ptr [ebp+8]
push 103
call _EMIT
add esp, 24
.Lt_00F6:
mov esp, ebp
pop ebp
ret
.size _EMITJUMPPTR, .-_EMITJUMPPTR
.balign 16
_EMITBRANCH:
.type _EMITBRANCH, @function
push ebp
mov ebp, esp
.Lt_00F7:
push 0
push dword ptr [ebp+12]
push 0
push 0
push 0
push dword ptr [ebp+8]
call _EMIT
add esp, 24
.Lt_00F8:
mov esp, ebp
pop ebp
ret
.size _EMITBRANCH, .-_EMITBRANCH
.balign 16
_EMITJMPTB:
.type _EMITJMPTB, @function
push ebp
mov ebp, esp
.Lt_00F9:
call _FLUSH
push dword ptr [ebp+44]
push dword ptr [ebp+40]
push dword ptr [ebp+36]
push dword ptr [ebp+32]
push dword ptr [ebp+28]
push dword ptr [ebp+24]
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call EMITJMPTB
add esp, 36
.Lt_00FA:
mov esp, ebp
pop ebp
ret
.size _EMITJMPTB, .-_EMITJMPTB
.balign 16
_EMITMEM:
.type _EMITMEM, @function
push ebp
mov ebp, esp
.Lt_00FB:
mov eax, dword ptr [ebp+20]
push eax
push 0
push 0
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call _EMIT
add esp, 24
.Lt_00FC:
mov esp, ebp
pop ebp
ret
.size _EMITMEM, .-_EMITMEM
.balign 16
_EMITDECL:
.type _EMITDECL, @function
push ebp
mov ebp, esp
.Lt_00FD:
.Lt_00FE:
mov esp, ebp
pop ebp
ret
.size _EMITDECL, .-_EMITDECL
.balign 16
_EMITDBG:
.type _EMITDBG, @function
push ebp
mov ebp, esp
.Lt_00FF:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push 0
push 0
push 0
push dword ptr [ebp+8]
call _EMIT
add esp, 24
.Lt_0100:
mov esp, ebp
pop ebp
ret
.size _EMITDBG, .-_EMITDBG
.balign 16
_EMITCOMMENT:
.type _EMITCOMMENT, @function
push ebp
mov ebp, esp
.Lt_0101:
push 0
push dword ptr [ebp+8]
call ZSTRDUP
add esp, 4
push eax
push 0
push 0
push 0
push 112
call _EMIT
add esp, 24
.Lt_0102:
mov esp, ebp
pop ebp
ret
.size _EMITCOMMENT, .-_EMITCOMMENT
.balign 16
_EMITASMBEGIN:
.type _EMITASMBEGIN, @function
.Lt_0103:
push 0
push 1
push offset Lt_0000
push -1
lea eax, [CTX+120]
push eax
call fb_StrAssign
add esp, 20
.Lt_0104:
ret
.size _EMITASMBEGIN, .-_EMITASMBEGIN
.balign 16
_EMITASMTEXT:
.type _EMITASMTEXT, @function
push ebp
mov ebp, esp
sub esp, 12
.Lt_0105:
push 0
push -1
push 0
push dword ptr [ebp+8]
push -1
lea eax, [CTX+120]
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
lea eax, [CTX+120]
push eax
call fb_StrAssign
add esp, 20
.Lt_0106:
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
.Lt_0108:
push 0
push -1
push 0
push dword ptr [ebp+8]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
push -1
lea eax, [CTX+120]
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
lea eax, [CTX+120]
push eax
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+48], 0
jl .Lt_010C
jg .Lt_0404
cmp dword ptr [eax+44], 0
jbe .Lt_010C
.Lt_0404:
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
push offset Lt_010D
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ebp-24]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [CTX+120]
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
lea eax, [CTX+120]
push eax
call fb_StrAssign
add esp, 20
jmp .Lt_010B
.Lt_010C:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+48], 0
jg .Lt_0110
jl .Lt_0405
cmp dword ptr [eax+44], 0
jae .Lt_0110
.Lt_0405:
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
lea eax, [CTX+120]
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
lea eax, [CTX+120]
push eax
call fb_StrAssign
add esp, 20
.Lt_0110:
.Lt_010B:
.Lt_0109:
mov esp, ebp
pop ebp
ret
.size _EMITASMSYMB, .-_EMITASMSYMB
.balign 16
_EMITASMEND:
.type _EMITASMEND, @function
.Lt_0112:
push 0
push dword ptr [CTX+120]
call ZSTRDUP
add esp, 4
push eax
push 0
push 0
push 0
push 113
call _EMIT
add esp, 24
.Lt_0113:
ret
.size _EMITASMEND, .-_EMITASMEND
.balign 16
_EMITVARINIBEGIN:
.type _EMITVARINIBEGIN, @function
push ebp
mov ebp, esp
.Lt_0114:
push dword ptr [ebp+8]
call EMITVARINIBEGIN
add esp, 4
.Lt_0115:
mov esp, ebp
pop ebp
ret
.size _EMITVARINIBEGIN, .-_EMITVARINIBEGIN
.balign 16
_EMITVARINIEND:
.type _EMITVARINIEND, @function
push ebp
mov ebp, esp
.Lt_0116:
.Lt_0117:
mov esp, ebp
pop ebp
ret
.size _EMITVARINIEND, .-_EMITVARINIEND
.balign 16
_EMITVARINII:
.type _EMITVARINII, @function
push ebp
mov ebp, esp
push ebx
.Lt_0118:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+24]
and ebx, 511
push ebx
call EMITVARINII
add esp, 12
.Lt_0119:
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
push ebx
.Lt_011A:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+24]
and ebx, 511
push ebx
call EMITVARINIF
add esp, 12
.Lt_011B:
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
.Lt_011C:
mov eax, dword ptr [ebp+16]
push eax
push dword ptr [ebp+12]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
call EMITVARINIOFS
add esp, 8
.Lt_011D:
mov esp, ebp
pop ebp
ret
.size _EMITVARINIOFS, .-_EMITVARINIOFS
.balign 16
_EMITVARINISTR:
.type _EMITVARINISTR, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
.Lt_011E:
mov dword ptr [ebp-4], 0
cmp dword ptr [ebp+12], 0
jne .Lt_0121
cmp dword ptr [ebp+8], 0
jne .Lt_0121
.Lt_0406:
push 0
push 0
push 1
call EMITVARINII
add esp, 12
jmp .Lt_011F
.Lt_0121:
.Lt_0120:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp+12]
cmp dword ptr [ebp+24], eax
jl .Lt_0123
jg .Lt_0407
cmp dword ptr [ebp+20], ebx
jbe .Lt_0123
.Lt_0407:
push 1
push 0
push 9
call ERRREPORTWARN
add esp, 12
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
push 0
push -1
mov ebx, dword ptr [ebp+8]
push ebx
push dword ptr [ebp+16]
call fb_StrAllocTempDescZ
add esp, 4
push eax
call fb_LEFT
add esp, 8
push eax
push -1
lea eax, [ebp-16]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-16]
call HESCAPE
add esp, 4
mov dword ptr [ebp-4], eax
lea eax, [ebp-16]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0122
.Lt_0123:
push dword ptr [ebp+16]
call HESCAPE
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_0122:
push dword ptr [ebp-4]
call EMITVARINISTR
add esp, 4
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp+12]
cmp dword ptr [ebp+24], eax
jg .Lt_0126
jl .Lt_0408
cmp dword ptr [ebp+20], ebx
jae .Lt_0126
.Lt_0408:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+12]
sub eax, dword ptr [ebp+20]
sbb ebx, dword ptr [ebp+24]
mov ecx, eax
push ecx
call EMITVARINIPAD
add esp, 4
.Lt_0126:
.Lt_0125:
.Lt_011F:
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
sub esp, 12
push ebx
push esi
.Lt_0127:
mov dword ptr [ebp-4], 0
mov dword ptr [ebp-8], 0
cmp dword ptr [ebp+12], 0
jne .Lt_012A
cmp dword ptr [ebp+8], 0
jne .Lt_012A
.Lt_0409:
push 0
push 0
push dword ptr [ENV+212]
call EMITVARINII
add esp, 12
jmp .Lt_0128
.Lt_012A:
.Lt_0129:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp+12]
cmp dword ptr [ebp+24], eax
jl .Lt_012C
jg .Lt_040A
cmp dword ptr [ebp+20], ebx
jbe .Lt_012C
.Lt_040A:
push 1
push 0
push 9
call ERRREPORTWARN
add esp, 12
mov ebx, dword ptr [ebp+8]
push ebx
push dword ptr [ebp+16]
call fb_WstrLeft
add esp, 8
mov dword ptr [ebp-12], eax
push dword ptr [ebp-12]
call HESCAPEW
add esp, 4
mov dword ptr [ebp-4], eax
push dword ptr [ebp-12]
call fb_WstrDelete
add esp, 4
jmp .Lt_012B
.Lt_012C:
push dword ptr [ebp+16]
call HESCAPEW
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_012B:
mov eax, dword ptr [SYMB_DTYPETB+172]
mov dword ptr [ebp-8], eax
push dword ptr [ebp-4]
call EMITVARINIWSTR
add esp, 4
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp+12]
cmp dword ptr [ebp+24], eax
jg .Lt_012F
jl .Lt_040B
cmp dword ptr [ebp+20], ebx
jae .Lt_012F
.Lt_040B:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+12]
sub eax, dword ptr [ebp+20]
sbb ebx, dword ptr [ebp+24]
mov esi, dword ptr [ebp-8]
mov ecx, esi
sar ecx, 31
push ecx
push esi
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
mov esi, eax
push esi
call EMITVARINIPAD
add esp, 4
.Lt_012F:
.Lt_012E:
.Lt_0128:
pop esi
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
.Lt_0130:
mov eax, dword ptr [ebp+8]
push eax
call EMITVARINIPAD
add esp, 4
.Lt_0131:
mov esp, ebp
pop ebp
ret
.size _EMITVARINIPAD, .-_EMITVARINIPAD
.balign 16
_EMITVARINISCOPEBEGIN:
.type _EMITVARINISCOPEBEGIN, @function
.Lt_0132:
.Lt_0133:
ret
.size _EMITVARINISCOPEBEGIN, .-_EMITVARINISCOPEBEGIN
.balign 16
_EMITVARINISCOPEEND:
.type _EMITVARINISCOPEEND, @function
.Lt_0134:
.Lt_0135:
ret
.size _EMITVARINISCOPEEND, .-_EMITVARINISCOPEEND
.balign 16
_EMITFBCTINFBEGIN:
.type _EMITFBCTINFBEGIN, @function
.Lt_0136:
call EMITFBCTINFBEGIN
.Lt_0137:
ret
.size _EMITFBCTINFBEGIN, .-_EMITFBCTINFBEGIN
.balign 16
_EMITFBCTINFSTRING:
.type _EMITFBCTINFSTRING, @function
push ebp
mov ebp, esp
.Lt_0138:
push dword ptr [ebp+8]
call EMITFBCTINFSTRING
add esp, 4
.Lt_0139:
mov esp, ebp
pop ebp
ret
.size _EMITFBCTINFSTRING, .-_EMITFBCTINFSTRING
.balign 16
_EMITFBCTINFEND:
.type _EMITFBCTINFEND, @function
.Lt_013A:
call EMITFBCTINFEND
.Lt_013B:
ret
.size _EMITFBCTINFEND, .-_EMITFBCTINFEND
.balign 16
HNEWVR:
.type HNEWVR, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_013C:
lea eax, [CTX+64]
push eax
call FLISTNEWITEM
add esp, 4
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+16]
mov dword ptr [eax], ebx
mov ebx, dword ptr [ebp+8]
and ebx, 480
je .Lt_013E
mov dword ptr [ebp-12], 22
jmp .Lt_040C
.Lt_013E:
mov ebx, dword ptr [ebp+8]
and ebx, 31
mov dword ptr [ebp-12], ebx
.Lt_040C:
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebp-12]
mov dword ptr [ebx+4], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+12]
mov dword ptr [eax+8], ebx
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+12], -1
cmp dword ptr [ENV+116], 0
jne .Lt_0141
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+16], 0
jmp .Lt_0140
.Lt_0141:
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+16], 1
.Lt_0140:
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+20], 0
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+32], 0
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+36], 0
mov dword ptr [ebx+40], 0
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+44], 0
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+48], 0
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+52], 0
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+56], 0
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+60], 0
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+64], 0
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ebx
.Lt_013D:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HNEWVR, .-HNEWVR
.balign 16
_ALLOCVREG:
.type _ALLOCVREG, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0142:
push 4
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HNEWVR
add esp, 12
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp+8]
cmp eax, 12
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp+8]
cmp ebx, 13
sete bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
je .Lt_0145
push 4
push 0
push 7
call HNEWVR
add esp, 12
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+52], eax
.Lt_0145:
.Lt_0144:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0143:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size _ALLOCVREG, .-_ALLOCVREG
.balign 16
_ALLOCVRIMM:
.type _ALLOCVRIMM, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
push esi
mov dword ptr [ebp-4], 0
.Lt_0146:
push 0
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HNEWVR
add esp, 12
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp+8]
cmp eax, 12
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp+8]
cmp ebx, 13
sete bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
je .Lt_0149
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [ebp+20]
and eax, 4294967295
and ebx, 0
mov ecx, dword ptr [ebp-8]
mov dword ptr [ecx+24], eax
mov dword ptr [ecx+28], ebx
push 0
push 0
push 7
call HNEWVR
add esp, 12
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+52], eax
mov ebx, dword ptr [ebp+16]
mov eax, dword ptr [ebp+20]
mov ebx, eax
xor eax, eax
mov esi, ebx
mov ecx, eax
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx+52]
mov dword ptr [eax+24], esi
mov dword ptr [eax+28], ecx
jmp .Lt_0148
.Lt_0149:
mov esi, dword ptr [ebp-8]
mov eax, dword ptr [ebp+16]
mov ecx, dword ptr [ebp+20]
mov dword ptr [esi+24], eax
mov dword ptr [esi+28], ecx
.Lt_0148:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0147:
mov eax, dword ptr [ebp-4]
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size _ALLOCVRIMM, .-_ALLOCVRIMM
.balign 16
_ALLOCVRIMMF:
.type _ALLOCVRIMMF, @function
push ebp
mov ebp, esp
sub esp, 12
mov dword ptr [ebp-4], 0
.Lt_014A:
mov eax, dword ptr [IR+284]
and eax, 2
test eax, eax
je .Lt_014D
push 0
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HNEWVR
add esp, 12
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
push dword ptr [ebp+16]
push dword ptr [ebp+20]
pop dword ptr [eax+28]
pop dword ptr [eax+24]
jmp .Lt_014C
.Lt_014D:
push dword ptr [ebp+8]
push dword ptr [ebp+20]
push dword ptr [ebp+16]
call SYMBALLOCFLOATCONST
add esp, 12
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp-12]
push dword ptr [eax+48]
push dword ptr [eax+44]
push dword ptr [ebp-12]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call dword ptr [IR+248]
add esp, 20
mov dword ptr [ebp-8], eax
.Lt_014C:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_014B:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size _ALLOCVRIMMF, .-_ALLOCVRIMMF
.balign 16
_ALLOCVRVAR:
.type _ALLOCVRVAR, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_014E:
push 1
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HNEWVR
add esp, 12
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+16]
mov dword ptr [eax+32], ebx
mov ebx, dword ptr [ebp-8]
mov ecx, dword ptr [ebp+20]
mov eax, dword ptr [ebp+24]
mov dword ptr [ebx+36], ecx
mov dword ptr [ebx+40], eax
mov ecx, dword ptr [ebp+8]
cmp ecx, 12
sete cl
shr ecx, 1
sbb ecx, ecx
mov eax, dword ptr [ebp+8]
cmp eax, 13
sete al
shr eax, 1
sbb eax, eax
or ecx, eax
je .Lt_0151
push 1
push 0
push 7
call HNEWVR
add esp, 12
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp-8]
mov ecx, dword ptr [ebp-12]
mov dword ptr [eax+52], ecx
mov eax, dword ptr [ebp+20]
mov ecx, dword ptr [ebp+24]
add eax, 4
adc ecx, 0
mov ebx, dword ptr [ebp-12]
mov dword ptr [ebx+36], eax
mov dword ptr [ebx+40], ecx
.Lt_0151:
.Lt_0150:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_014F:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size _ALLOCVRVAR, .-_ALLOCVRVAR
.balign 16
_ALLOCVRIDX:
.type _ALLOCVRIDX, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_0152:
push 2
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HNEWVR
add esp, 12
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+16]
mov dword ptr [eax+32], ebx
mov ebx, dword ptr [ebp-8]
mov ecx, dword ptr [ebp+20]
mov eax, dword ptr [ebp+24]
mov dword ptr [ebx+36], ecx
mov dword ptr [ebx+40], eax
mov ecx, dword ptr [ebp-8]
mov eax, dword ptr [ebp+28]
mov dword ptr [ecx+44], eax
mov eax, dword ptr [ebp-8]
mov ecx, dword ptr [ebp+32]
mov dword ptr [eax+48], ecx
mov ecx, dword ptr [ebp+8]
cmp ecx, 12
sete cl
shr ecx, 1
sbb ecx, ecx
mov eax, dword ptr [ebp+8]
cmp eax, 13
sete al
shr eax, 1
sbb eax, eax
or ecx, eax
je .Lt_0155
push 2
push 0
push 7
call HNEWVR
add esp, 12
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp-8]
mov ecx, dword ptr [ebp-12]
mov dword ptr [eax+52], ecx
mov eax, dword ptr [ebp+20]
mov ecx, dword ptr [ebp+24]
add eax, 4
adc ecx, 0
mov ebx, dword ptr [ebp-12]
mov dword ptr [ebx+36], eax
mov dword ptr [ebx+40], ecx
.Lt_0155:
.Lt_0154:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0153:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size _ALLOCVRIDX, .-_ALLOCVRIDX
.balign 16
_ALLOCVRPTR:
.type _ALLOCVRPTR, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_0156:
push 3
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HNEWVR
add esp, 12
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov ecx, dword ptr [ebp+16]
mov ebx, dword ptr [ebp+20]
mov dword ptr [eax+36], ecx
mov dword ptr [eax+40], ebx
mov ecx, dword ptr [ebp-8]
mov dword ptr [ecx+44], 1
mov ecx, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+24]
mov dword ptr [ecx+48], ebx
mov ebx, dword ptr [ebp+8]
cmp ebx, 12
sete bl
shr ebx, 1
sbb ebx, ebx
mov ecx, dword ptr [ebp+8]
cmp ecx, 13
sete cl
shr ecx, 1
sbb ecx, ecx
or ebx, ecx
je .Lt_0159
push 2
push 0
push 7
call HNEWVR
add esp, 12
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp-8]
mov ecx, dword ptr [ebp-12]
mov dword ptr [eax+52], ecx
mov eax, dword ptr [ebp+16]
mov ecx, dword ptr [ebp+20]
add eax, 4
adc ecx, 0
mov ebx, dword ptr [ebp-12]
mov dword ptr [ebx+36], eax
mov dword ptr [ebx+40], ecx
.Lt_0159:
.Lt_0158:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0157:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size _ALLOCVRPTR, .-_ALLOCVRPTR
.balign 16
_ALLOCVROFS:
.type _ALLOCVROFS, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_015A:
push 5
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HNEWVR
add esp, 12
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+16]
mov dword ptr [eax+32], ebx
mov ebx, dword ptr [ebp-8]
mov ecx, dword ptr [ebp+20]
mov eax, dword ptr [ebp+24]
mov dword ptr [ebx+36], ecx
mov dword ptr [ebx+40], eax
mov ecx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ecx
.Lt_015B:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size _ALLOCVROFS, .-_ALLOCVROFS
.balign 16
_SETVREGDATATYPE:
.type _SETVREGDATATYPE, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_015C:
cmp dword ptr [ebp+8], 0
je .Lt_015F
mov eax, dword ptr [ebp+12]
and eax, 480
je .Lt_0160
mov dword ptr [ebp-4], 22
jmp .Lt_0417
.Lt_0160:
mov eax, dword ptr [ebp+12]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0417:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-4]
mov dword ptr [eax+4], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp+16]
mov dword ptr [ebx+8], eax
.Lt_015F:
.Lt_015E:
.Lt_015D:
pop ebx
mov esp, ebp
pop ebp
ret
.size _SETVREGDATATYPE, .-_SETVREGDATATYPE
.balign 16
HRENAME:
.type HRENAME, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_0162:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-4], ebx
.Lt_0164:
mov ebx, dword ptr [ebp-4]
cmp dword ptr [ebx+4], 0
je .Lt_0168
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebx+4]
mov ebx, dword ptr [ebp+8]
cmp dword ptr [eax+48], ebx
jne .Lt_016A
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebx+4]
mov ebx, dword ptr [ebp+12]
mov dword ptr [eax+48], ebx
jmp .Lt_0169
.Lt_016A:
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebx+4]
mov ebx, dword ptr [ebp+12]
mov dword ptr [eax+52], ebx
.Lt_0169:
.Lt_0168:
.Lt_0167:
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebp+12]
mov dword ptr [ebx], eax
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+8]
mov dword ptr [ebp-4], ebx
.Lt_0166:
cmp dword ptr [ebp-4], 0
jne .Lt_0164
.Lt_0165:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [ebx+56]
mov dword ptr [eax+56], ecx
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [ecx+60]
mov dword ptr [eax+60], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [ebx+64]
mov dword ptr [eax+64], ecx
.Lt_0163:
pop ebx
mov esp, ebp
pop ebp
ret
.size HRENAME, .-HRENAME
.balign 16
HREUSE:
.type HREUSE, @function
push ebp
mov ebp, esp
sub esp, 64
push ebx
.Lt_016B:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-52], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+44]
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+80]
mov dword ptr [ebp-8], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+8]
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-4], 0
je .Lt_016E
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-24], ebx
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebx+4]
and eax, 480
je .Lt_016F
mov dword ptr [ebp-56], 22
jmp .Lt_0418
.Lt_016F:
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+4]
and ebx, 31
mov dword ptr [ebp-56], ebx
.Lt_0418:
mov ebx, dword ptr [ebp-56]
mov dword ptr [ebp-16], ebx
cmp dword ptr [ebp-16], 22
jne .Lt_0172
mov dword ptr [ebp-16], 11
.Lt_0172:
.Lt_0171:
mov ebx, dword ptr [ebp-16]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx]
mov dword ptr [ebp-20], eax
jmp .Lt_016D
.Lt_016E:
mov dword ptr [ebp-24], -1
mov dword ptr [ebp-16], -2147483648
mov dword ptr [ebp-20], -1
.Lt_016D:
cmp dword ptr [ebp-8], 0
je .Lt_0174
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-36], ebx
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx+4]
and eax, 480
je .Lt_0175
mov dword ptr [ebp-56], 22
jmp .Lt_0419
.Lt_0175:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+4]
and ebx, 31
mov dword ptr [ebp-56], ebx
.Lt_0419:
mov ebx, dword ptr [ebp-56]
mov dword ptr [ebp-28], ebx
cmp dword ptr [ebp-28], 22
jne .Lt_0178
mov dword ptr [ebp-28], 11
.Lt_0178:
.Lt_0177:
mov ebx, dword ptr [ebp-28]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx]
mov dword ptr [ebp-32], eax
jmp .Lt_0173
.Lt_0174:
mov dword ptr [ebp-36], -1
mov dword ptr [ebp-28], -2147483648
mov dword ptr [ebp-32], -1
.Lt_0173:
cmp dword ptr [ebp-12], 0
je .Lt_017A
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-48], ebx
mov ebx, dword ptr [ebp-12]
mov eax, dword ptr [ebx+4]
and eax, 480
je .Lt_017B
mov dword ptr [ebp-56], 22
jmp .Lt_041A
.Lt_017B:
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax+4]
and ebx, 31
mov dword ptr [ebp-56], ebx
.Lt_041A:
mov ebx, dword ptr [ebp-56]
mov dword ptr [ebp-40], ebx
cmp dword ptr [ebp-40], 22
jne .Lt_017E
mov dword ptr [ebp-40], 11
.Lt_017E:
.Lt_017D:
mov ebx, dword ptr [ebp-40]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx]
mov dword ptr [ebp-44], eax
jmp .Lt_0179
.Lt_017A:
mov dword ptr [ebp-48], -1
mov dword ptr [ebp-40], -2147483648
mov dword ptr [ebp-44], -1
.Lt_0179:
mov eax, dword ptr [ebp-52]
sal eax, 4
mov ebx, dword ptr [AST_OPTB+eax]
mov dword ptr [ebp-56], ebx
cmp dword ptr [ebp-56], 4
jne .Lt_0181
.Lt_0182:
mov ebx, dword ptr [ebp-4]
cmp dword ptr [ebp-12], ebx
je .Lt_0184
mov ebx, dword ptr [ebp-16]
cmp dword ptr [ebp-40], ebx
jne .Lt_0186
push dword ptr [ebp-4]
call dword ptr [IR+268]
add esp, 4
cmp eax, 2147483647
jne .Lt_0188
push dword ptr [ebp-4]
push dword ptr [ebp-12]
call HRENAME
add esp, 8
.Lt_0188:
.Lt_0187:
.Lt_0186:
.Lt_0185:
.Lt_0184:
.Lt_0183:
jmp .Lt_017F
.Lt_0181:
cmp dword ptr [ebp-56], 3
je .Lt_018A
.Lt_018B:
cmp dword ptr [ebp-56], 14
jne .Lt_0189
.Lt_018A:
cmp dword ptr [ebp-12], 0
jne .Lt_018D
jmp .Lt_016C
.Lt_018D:
.Lt_018C:
mov eax, dword ptr [ebp-32]
cmp dword ptr [ebp-20], eax
je .Lt_018F
jmp .Lt_016C
.Lt_018F:
.Lt_018E:
mov dword ptr [ebp-60], 0
mov eax, dword ptr [ebp-4]
cmp dword ptr [ebp-12], eax
je .Lt_0191
mov eax, dword ptr [ebp-16]
cmp dword ptr [ebp-40], eax
jne .Lt_0193
push dword ptr [ebp-4]
call dword ptr [IR+268]
add esp, 4
cmp eax, 2147483647
jne .Lt_0195
mov dword ptr [ebp-60], -1
.Lt_0195:
.Lt_0194:
.Lt_0193:
.Lt_0192:
.Lt_0191:
.Lt_0190:
mov dword ptr [ebp-64], 0
mov eax, dword ptr [ebp-52]
sal eax, 4
mov ebx, dword ptr [AST_OPTB+eax+4]
and ebx, 2
test ebx, ebx
je .Lt_0197
mov ebx, dword ptr [ebp-8]
cmp dword ptr [ebp-12], ebx
je .Lt_0199
mov ebx, dword ptr [ebp-28]
cmp dword ptr [ebp-40], ebx
jne .Lt_019B
cmp dword ptr [ebp-36], 0
je .Lt_019D
push dword ptr [ebp-8]
call dword ptr [IR+268]
add esp, 4
cmp eax, 2147483647
jne .Lt_019F
mov dword ptr [ebp-64], -1
.Lt_019F:
.Lt_019E:
.Lt_019D:
.Lt_019C:
.Lt_019B:
.Lt_019A:
.Lt_0199:
.Lt_0198:
.Lt_0197:
.Lt_0196:
mov eax, dword ptr [ebp-64]
and eax, dword ptr [ebp-60]
je .Lt_01A1
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax]
cmp ebx, 4
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_01A3
mov dword ptr [ebp-60], 0
.Lt_01A3:
.Lt_01A2:
.Lt_01A1:
.Lt_01A0:
cmp dword ptr [ebp-60], 0
je .Lt_01A5
push dword ptr [ebp-4]
push dword ptr [ebp-12]
call HRENAME
add esp, 8
jmp .Lt_01A4
.Lt_01A5:
cmp dword ptr [ebp-64], 0
je .Lt_01A6
push 36
mov ebx, dword ptr [ebp+8]
lea eax, [ebx+80]
push eax
mov eax, dword ptr [ebp+8]
lea ebx, [eax+44]
push ebx
call fb_MemSwap
add esp, 12
push dword ptr [ebp-8]
push dword ptr [ebp-12]
call HRENAME
add esp, 8
.Lt_01A6:
.Lt_01A4:
.Lt_0189:
.Lt_017F:
.Lt_016C:
pop ebx
mov esp, ebp
pop ebp
ret
.size HREUSE, .-HREUSE
.balign 16
_FLUSH:
.type _FLUSH, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_01A7:
cmp dword ptr [CTX+56], 0
jne .Lt_01AA
jmp .Lt_01A8
.Lt_01AA:
.Lt_01A9:
lea eax, [CTX]
push eax
call FLISTGETHEAD
add esp, 4
mov dword ptr [Lt_041C], eax
.Lt_01AB:
mov eax, dword ptr [Lt_041C]
mov dword ptr [CTX+60], eax
push dword ptr [Lt_041C]
call HREUSE
add esp, 4
mov eax, dword ptr [Lt_041C]
mov ebx, dword ptr [eax+4]
mov dword ptr [Lt_041D], ebx
mov ebx, dword ptr [Lt_041C]
mov eax, dword ptr [ebx+44]
mov dword ptr [Lt_041E], eax
mov eax, dword ptr [Lt_041C]
mov ebx, dword ptr [eax+80]
mov dword ptr [Lt_041F], ebx
mov ebx, dword ptr [Lt_041C]
mov eax, dword ptr [ebx+8]
mov dword ptr [Lt_0420], eax
mov eax, dword ptr [Lt_041D]
sal eax, 4
mov ebx, dword ptr [AST_OPTB+eax]
mov dword ptr [ebp-4], ebx
jmp .Lt_01AF
.Lt_01B1:
push dword ptr [Lt_0420]
push dword ptr [Lt_041E]
push dword ptr [Lt_041D]
call HFLUSHUOP
add esp, 12
jmp .Lt_01AE
.Lt_01B2:
push dword ptr [Lt_0420]
push dword ptr [Lt_041F]
push dword ptr [Lt_041E]
push dword ptr [Lt_041D]
call HFLUSHBOP
add esp, 16
jmp .Lt_01AE
.Lt_01B3:
mov ebx, dword ptr [Lt_041C]
push dword ptr [ebx+116]
push dword ptr [Lt_0420]
push dword ptr [Lt_041F]
push dword ptr [Lt_041E]
push dword ptr [Lt_041D]
call HFLUSHCOMP
add esp, 20
jmp .Lt_01AE
.Lt_01B4:
push dword ptr [Lt_041F]
push dword ptr [Lt_041E]
push dword ptr [Lt_041D]
call HFLUSHSTORE
add esp, 12
jmp .Lt_01AE
.Lt_01B5:
push dword ptr [Lt_0420]
push dword ptr [Lt_041E]
push dword ptr [Lt_041D]
call HFLUSHLOAD
add esp, 12
jmp .Lt_01AE
.Lt_01B6:
push dword ptr [Lt_041F]
push dword ptr [Lt_041E]
push dword ptr [Lt_041D]
call HFLUSHCONVERT
add esp, 12
jmp .Lt_01AE
.Lt_01B7:
mov ebx, dword ptr [Lt_041C]
push dword ptr [ebx+120]
push dword ptr [Lt_041E]
push dword ptr [Lt_041D]
call HFLUSHSTACK
add esp, 12
jmp .Lt_01AE
.Lt_01B8:
push dword ptr [Lt_0420]
push dword ptr [Lt_041E]
mov ebx, dword ptr [Lt_041C]
push dword ptr [ebx+120]
mov ebx, dword ptr [Lt_041C]
push dword ptr [ebx+116]
push dword ptr [Lt_041D]
call HFLUSHCALL
add esp, 20
jmp .Lt_01AE
.Lt_01B9:
mov ebx, dword ptr [Lt_041C]
push dword ptr [ebx+116]
push dword ptr [Lt_041D]
call HFLUSHBRANCH
add esp, 8
jmp .Lt_01AE
.Lt_01BA:
push dword ptr [Lt_0420]
push dword ptr [Lt_041E]
push dword ptr [Lt_041D]
call HFLUSHADDR
add esp, 12
jmp .Lt_01AE
.Lt_01BB:
mov ebx, dword ptr [Lt_041C]
push dword ptr [ebx+116]
mov ebx, dword ptr [Lt_041C]
push dword ptr [ebx+120]
push dword ptr [Lt_041F]
push dword ptr [Lt_041E]
push dword ptr [Lt_041D]
call HFLUSHMEM
add esp, 20
jmp .Lt_01AE
.Lt_01BC:
mov ebx, dword ptr [Lt_041C]
push dword ptr [ebx+120]
mov ebx, dword ptr [Lt_041C]
push dword ptr [ebx+116]
push dword ptr [Lt_041D]
call HFLUSHDBG
add esp, 12
jmp .Lt_01AE
.Lt_01BD:
mov ebx, dword ptr [Lt_041C]
push dword ptr [ebx+116]
push dword ptr [Lt_041D]
call HFLUSHLIT
add esp, 8
jmp .Lt_01AE
.Lt_01AF:
mov ebx, dword ptr [ebp-4]
add ebx, 4294967295
cmp ebx, 29
ja .Lt_01AE
mov ebx, dword ptr [ebp-4]
jmp dword ptr [.LT_01BE+ebx*4-4]
.LT_01BE:
.int .Lt_01B5
.int .Lt_01B4
.int .Lt_01B2
.int .Lt_01B1
.int .Lt_01B6
.int .Lt_01BA
.int .Lt_01B9
.int .Lt_01AE
.int .Lt_01B8
.int .Lt_01AE
.int .Lt_01B7
.int .Lt_01BB
.int .Lt_01AE
.int .Lt_01B3
.int .Lt_01AE
.int .Lt_01AE
.int .Lt_01AE
.int .Lt_01AE
.int .Lt_01AE
.int .Lt_01AE
.int .Lt_01AE
.int .Lt_01AE
.int .Lt_01AE
.int .Lt_01AE
.int .Lt_01AE
.int .Lt_01AE
.int .Lt_01BD
.int .Lt_01AE
.int .Lt_01AE
.int .Lt_01BC
.Lt_01AE:
cmp dword ptr [ENV+116], 1
jl .Lt_01C0
mov ebx, dword ptr [Lt_041D]
sal ebx, 4
cmp dword ptr [AST_OPTB+ebx], 9
je .Lt_01C2
cmp dword ptr [Lt_0420], 0
je .Lt_01C4
mov ebx, dword ptr [Lt_0420]
cmp dword ptr [ebx+16], 0
jne .Lt_01C6
mov ebx, dword ptr [Lt_0420]
mov dword ptr [ebx+16], 1
.Lt_01C6:
.Lt_01C4:
.Lt_01C3:
.Lt_01C2:
.Lt_01C1:
.Lt_01C0:
.Lt_01BF:
push dword ptr [Lt_041C]
call FLISTGETNEXT
add esp, 4
mov dword ptr [Lt_041C], eax
.Lt_01AD:
cmp dword ptr [Lt_041C], 0
jne .Lt_01AB
.Lt_01AC:
mov dword ptr [CTX+60], 0
mov dword ptr [CTX+56], 0
lea eax, [CTX]
push eax
call FLISTRESET
add esp, 4
lea eax, [CTX+64]
push eax
call FLISTRESET
add esp, 4
call HFREEPRESERVEDREGS
.Lt_01A8:
pop ebx
mov esp, ebp
pop ebp
ret
.size _FLUSH, .-_FLUSH

.section .bss
.balign 4
	.lcomm	Lt_041D,4
.balign 4
	.lcomm	Lt_041C,4
.balign 4
	.lcomm	Lt_041E,4
.balign 4
	.lcomm	Lt_041F,4
.balign 4
	.lcomm	Lt_0420,4

.section .text
.balign 16
HFLUSHBRANCH:
.type HFLUSHBRANCH, @function
push ebp
mov ebp, esp
sub esp, 4
.Lt_01C7:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
jmp .Lt_01CA
.Lt_01CC:
push dword ptr [ebp+12]
call EMITLABEL
add esp, 4
jmp .Lt_01C9
.Lt_01CD:
push dword ptr [ebp+12]
call EMITJUMP
add esp, 4
jmp .Lt_01C9
.Lt_01CE:
push 0
push dword ptr [ebp+12]
call EMITCALL
add esp, 8
jmp .Lt_01C9
.Lt_01CF:
push 0
call EMITRET
add esp, 4
jmp .Lt_01C9
.Lt_01D0:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call EMITBRANCH
add esp, 8
jmp .Lt_01C9
.Lt_01CA:
mov eax, dword ptr [ebp-4]
add eax, 4294967199
cmp eax, 3
ja .Lt_01D0
mov eax, dword ptr [ebp-4]
jmp dword ptr [.LT_01D1+eax*4-388]
.LT_01D1:
.int .Lt_01CD
.int .Lt_01CE
.int .Lt_01CC
.int .Lt_01CF
.Lt_01C9:
.Lt_01C8:
mov esp, ebp
pop ebp
ret
.size HFLUSHBRANCH, .-HFLUSHBRANCH
.balign 16
HFREEPRESERVEDREGS:
.type HFREEPRESERVEDREGS, @function
push ebx
.Lt_01D2:
mov dword ptr [Lt_0421], 0
.Lt_01D7:
mov eax, dword ptr [Lt_0421]
push dword ptr [REGTB+eax*4]
mov eax, dword ptr [Lt_0421]
mov ebx, dword ptr [REGTB+eax*4]
call dword ptr [ebx+28]
add esp, 4
mov dword ptr [Lt_0422], eax
.Lt_01D8:
cmp dword ptr [Lt_0422], -1
je .Lt_01D9
push dword ptr [Lt_0422]
mov eax, dword ptr [Lt_0421]
push dword ptr [REGTB+eax*4]
mov eax, dword ptr [Lt_0421]
mov ebx, dword ptr [REGTB+eax*4]
call dword ptr [ebx+16]
add esp, 8
test eax, eax
jne .Lt_01DB
push dword ptr [Lt_0422]
mov eax, dword ptr [Lt_0421]
push dword ptr [REGTB+eax*4]
mov eax, dword ptr [Lt_0421]
mov ebx, dword ptr [REGTB+eax*4]
call dword ptr [ebx+12]
add esp, 8
.Lt_01DB:
.Lt_01DA:
push dword ptr [Lt_0422]
mov ebx, dword ptr [Lt_0421]
push dword ptr [REGTB+ebx*4]
mov ebx, dword ptr [Lt_0421]
mov eax, dword ptr [REGTB+ebx*4]
call dword ptr [eax+32]
add esp, 8
mov dword ptr [Lt_0422], eax
jmp .Lt_01D8
.Lt_01D9:
.Lt_01D5:
inc dword ptr [Lt_0421]
.Lt_01D4:
cmp dword ptr [Lt_0421], 1
jle .Lt_01D7
.Lt_01D6:
.Lt_01D3:
pop ebx
ret
.size HFREEPRESERVEDREGS, .-HFREEPRESERVEDREGS

.section .bss
.balign 4
	.lcomm	Lt_0421,4
.balign 4
	.lcomm	Lt_0422,4

.section .text
.balign 16
HPRESERVEREG:
.type HPRESERVEREG, @function
push ebp
mov ebp, esp
sub esp, 240
push ebx
mov dword ptr [ebp-4], 0
.Lt_01DC:
cmp dword ptr [ebp+8], 0
je .Lt_01DF
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-16], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 480
je .Lt_01E0
mov dword ptr [ebp-240], 22
jmp .Lt_0423
.Lt_01E0:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 31
mov dword ptr [ebp-240], ebx
.Lt_0423:
mov ebx, dword ptr [ebp-240]
mov dword ptr [ebp-12], ebx
cmp dword ptr [ebp-12], 22
jne .Lt_01E3
mov dword ptr [ebp-12], 11
.Lt_01E3:
.Lt_01E2:
mov ebx, dword ptr [ebp-12]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx]
mov dword ptr [ebp-8], eax
jmp .Lt_01DE
.Lt_01DF:
mov dword ptr [ebp-16], -1
mov dword ptr [ebp-12], -2147483648
mov dword ptr [ebp-8], -1
.Lt_01DE:
lea eax, [ebp-100]
push edi
push esi
mov edi, eax
mov esi, dword ptr [ebp+8]
mov ecx, 17
rep movsd
pop esi
pop edi
mov eax, dword ptr [ebp+8]
push dword ptr [eax+12]
push dword ptr [ebp-8]
call dword ptr [EMIT+188]
add esp, 8
mov dword ptr [ebp-20], eax
mov eax, dword ptr [ebp-12]
cmp eax, 12
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp-12]
cmp ebx, 13
sete bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
je .Lt_01E5
lea ebx, [ebp-168]
mov eax, dword ptr [ebp+8]
push edi
push esi
mov edi, ebx
mov esi, dword ptr [eax+52]
mov ecx, 17
rep movsd
pop esi
pop edi
lea eax, [ebp-168]
mov dword ptr [ebp-48], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+52]
push dword ptr [ebx+12]
push dword ptr [ebp-8]
call dword ptr [EMIT+188]
add esp, 8
mov dword ptr [ebp-24], eax
jmp .Lt_01E4
.Lt_01E5:
mov dword ptr [ebp-24], -1
.Lt_01E4:
mov eax, dword ptr [ebp-24]
and eax, dword ptr [ebp-20]
je .Lt_01E7
mov dword ptr [ebp-4], -1
jmp .Lt_01DD
.Lt_01E7:
.Lt_01E6:
cmp dword ptr [ebp-20], 0
jne .Lt_01E9
push dword ptr [ebp-12]
push dword ptr [ebp-8]
call dword ptr [EMIT+192]
add esp, 8
mov dword ptr [ebp-28], eax
cmp dword ptr [ebp-28], -1
jne .Lt_01EB
mov dword ptr [ebp-4], 0
jmp .Lt_01DD
.Lt_01EB:
.Lt_01EA:
push 0
push dword ptr [ebp+8]
push dword ptr [ebp-28]
mov eax, dword ptr [ebp-8]
push dword ptr [REGTB+eax*4]
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [REGTB+eax*4]
call dword ptr [ebx+8]
add esp, 16
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+12], eax
.Lt_01E9:
.Lt_01E8:
cmp dword ptr [ebp-24], 0
jne .Lt_01ED
push 7
push 0
call dword ptr [EMIT+192]
add esp, 8
mov dword ptr [ebp-32], eax
cmp dword ptr [ebp-32], -1
jne .Lt_01EF
cmp dword ptr [ebp-20], 0
jne .Lt_01F1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+12]
mov eax, dword ptr [ebp-8]
push dword ptr [REGTB+eax*4]
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [REGTB+eax*4]
call dword ptr [ebx+12]
add esp, 8
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp-88]
mov dword ptr [ebx+12], eax
.Lt_01F1:
.Lt_01F0:
mov dword ptr [ebp-4], 0
jmp .Lt_01DD
.Lt_01EF:
.Lt_01EE:
push dword ptr [ebp+8]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+52]
push dword ptr [ebp-32]
push dword ptr [REGTB]
mov eax, dword ptr [REGTB]
call dword ptr [eax+8]
add esp, 16
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebx+52]
mov dword ptr [ecx+12], eax
.Lt_01ED:
.Lt_01EC:
mov eax, dword ptr [ebp-24]
or eax, dword ptr [ebp-20]
not eax
test eax, eax
je .Lt_01F3
lea eax, [ebp-100]
push eax
push dword ptr [ebp+8]
call EMITMOV
add esp, 8
jmp .Lt_01F2
.Lt_01F3:
cmp dword ptr [ebp-20], 0
jne .Lt_01F4
mov eax, dword ptr [ebp-12]
cmp eax, 12
sete al
shr eax, 1
sbb eax, eax
mov ecx, dword ptr [ebp-12]
cmp ecx, 13
sete cl
shr ecx, 1
sbb ecx, ecx
or eax, ecx
je .Lt_01F6
lea ecx, [ebp-236]
push ecx
push edi
push esi
mov edi, ecx
mov esi, dword ptr [ebp+8]
mov ecx, 17
rep movsd
pop esi
pop edi
pop ecx
mov dword ptr [ebp-232], 7
mov dword ptr [ebp-184], 0
mov dword ptr [ebp-96], 7
mov dword ptr [ebp-48], 0
lea ecx, [ebp-100]
push ecx
lea ecx, [ebp-236]
push ecx
call EMITMOV
add esp, 8
jmp .Lt_01F5
.Lt_01F6:
lea ecx, [ebp-100]
push ecx
push dword ptr [ebp+8]
call EMITMOV
add esp, 8
.Lt_01F5:
jmp .Lt_01F2
.Lt_01F4:
lea ecx, [ebp-168]
push ecx
mov ecx, dword ptr [ebp+8]
push dword ptr [ecx+52]
call EMITMOV
add esp, 8
.Lt_01F2:
cmp dword ptr [ebp-20], 0
jne .Lt_01F8
push dword ptr [ebp-88]
mov ecx, dword ptr [ebp-8]
push dword ptr [REGTB+ecx*4]
mov ecx, dword ptr [ebp-8]
mov eax, dword ptr [REGTB+ecx*4]
call dword ptr [eax+12]
add esp, 8
.Lt_01F8:
.Lt_01F7:
cmp dword ptr [ebp-24], 0
jne .Lt_01FA
push dword ptr [ebp-156]
push dword ptr [REGTB]
mov eax, dword ptr [REGTB]
call dword ptr [eax+12]
add esp, 8
.Lt_01FA:
.Lt_01F9:
mov dword ptr [ebp-4], -1
.Lt_01DD:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HPRESERVEREG, .-HPRESERVEREG
.balign 16
HPRESERVEREGS:
.type HPRESERVEREGS, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
.Lt_01FB:
mov dword ptr [ebp-20], 0
.Lt_0200:
mov dword ptr [ebp-4], -1
cmp dword ptr [ebp-20], 0
jne .Lt_0202
cmp dword ptr [ebp+8], 0
je .Lt_0204
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-24], ebx
cmp dword ptr [ebp-24], 4
jne .Lt_0207
.Lt_0208:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+12]
mov dword ptr [ebp-4], eax
jmp .Lt_0205
.Lt_0207:
cmp dword ptr [ebp-24], 2
je .Lt_020A
.Lt_020B:
cmp dword ptr [ebp-24], 3
jne .Lt_0209
.Lt_020A:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+48]
mov dword ptr [ebp+8], ebx
cmp dword ptr [ebp+8], 0
je .Lt_020D
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+12]
mov dword ptr [ebp-4], eax
.Lt_020D:
.Lt_020C:
.Lt_0209:
.Lt_0205:
mov dword ptr [ebp+8], 0
.Lt_0204:
.Lt_0203:
.Lt_0202:
.Lt_0201:
mov eax, dword ptr [ebp-20]
push dword ptr [REGTB+eax*4]
mov eax, dword ptr [ebp-20]
mov ebx, dword ptr [REGTB+eax*4]
call dword ptr [ebx+28]
add esp, 4
mov dword ptr [ebp-8], eax
.Lt_020E:
cmp dword ptr [ebp-8], -1
je .Lt_020F
push dword ptr [ebp-8]
mov eax, dword ptr [ebp-20]
push dword ptr [REGTB+eax*4]
mov eax, dword ptr [ebp-20]
mov ebx, dword ptr [REGTB+eax*4]
call dword ptr [ebx+16]
add esp, 8
test eax, eax
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp-4]
cmp ebx, dword ptr [ebp-8]
setne bl
shr ebx, 1
sbb ebx, ebx
and eax, ebx
je .Lt_0211
lea ebx, [ebp-16]
push ebx
push dword ptr [ebp-8]
mov ebx, dword ptr [ebp-20]
push dword ptr [REGTB+ebx*4]
mov ebx, dword ptr [ebp-20]
mov eax, dword ptr [REGTB+ebx*4]
call dword ptr [eax+36]
add esp, 12
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-16], 0
je .Lt_0213
mov eax, dword ptr [ebp-16]
mov dword ptr [ebp-12], eax
.Lt_0213:
.Lt_0212:
push dword ptr [ebp-12]
call HPRESERVEREG
add esp, 4
test eax, eax
jne .Lt_0215
push 0
push dword ptr [ebp-12]
call dword ptr [IR+276]
add esp, 8
.Lt_0215:
.Lt_0214:
.Lt_0211:
.Lt_0210:
push dword ptr [ebp-8]
mov eax, dword ptr [ebp-20]
push dword ptr [REGTB+eax*4]
mov eax, dword ptr [ebp-20]
mov ebx, dword ptr [REGTB+eax*4]
call dword ptr [ebx+32]
add esp, 8
mov dword ptr [ebp-8], eax
jmp .Lt_020E
.Lt_020F:
.Lt_01FE:
inc dword ptr [ebp-20]
.Lt_01FD:
cmp dword ptr [ebp-20], 1
jle .Lt_0200
.Lt_01FF:
.Lt_01FC:
pop ebx
mov esp, ebp
pop ebp
ret
.size HPRESERVEREGS, .-HPRESERVEREGS
.balign 16
HLOADPOINTER:
.type HLOADPOINTER, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
.Lt_0216:
cmp dword ptr [ebp+8], 0
je .Lt_0219
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-4], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 480
je .Lt_021A
mov dword ptr [ebp-16], 22
jmp .Lt_042A
.Lt_021A:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 31
mov dword ptr [ebp-16], ebx
.Lt_042A:
mov ebx, dword ptr [ebp-16]
mov dword ptr [ebp-8], ebx
cmp dword ptr [ebp-8], 22
jne .Lt_021D
mov dword ptr [ebp-8], 11
.Lt_021D:
.Lt_021C:
mov ebx, dword ptr [ebp-8]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx]
mov dword ptr [ebp-12], eax
jmp .Lt_0218
.Lt_0219:
mov dword ptr [ebp-4], -1
mov dword ptr [ebp-8], -2147483648
mov dword ptr [ebp-12], -1
.Lt_0218:
push dword ptr [ebp+8]
call HLOADIDX
add esp, 4
cmp dword ptr [ebp-4], 4
jne .Lt_021F
mov eax, dword ptr [ebp-8]
and eax, 480
je .Lt_0220
mov dword ptr [ebp-16], 22
jmp .Lt_042B
.Lt_0220:
mov eax, dword ptr [ebp-8]
and eax, 31
mov dword ptr [ebp-16], eax
.Lt_042B:
mov eax, dword ptr [ebp-16]
imul eax, 28
push dword ptr [SYMB_DTYPETB+eax+4]
push 0
push dword ptr [ebp+8]
mov eax, dword ptr [ebp-12]
push dword ptr [REGTB+eax*4]
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [REGTB+eax*4]
call dword ptr [ebx]
add esp, 16
.Lt_021F:
.Lt_021E:
.Lt_0217:
pop ebx
mov esp, ebp
pop ebp
ret
.size HLOADPOINTER, .-HLOADPOINTER
.balign 16
HLOADRESULT:
.type HLOADRESULT, @function
push ebp
mov ebp, esp
sub esp, 28
push ebx
.Lt_0222:
cmp dword ptr [ebp+12], 0
je .Lt_0225
cmp dword ptr [ebp+12], 0
je .Lt_0227
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-4], ebx
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 480
je .Lt_0228
mov dword ptr [ebp-28], 22
jmp .Lt_042C
.Lt_0228:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 31
mov dword ptr [ebp-28], ebx
.Lt_042C:
mov ebx, dword ptr [ebp-28]
mov dword ptr [ebp-8], ebx
cmp dword ptr [ebp-8], 22
jne .Lt_022B
mov dword ptr [ebp-8], 11
.Lt_022B:
.Lt_022A:
mov ebx, dword ptr [ebp-8]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx]
mov dword ptr [ebp-12], eax
jmp .Lt_0226
.Lt_0227:
mov dword ptr [ebp-4], -1
mov dword ptr [ebp-8], -2147483648
mov dword ptr [ebp-12], -1
.Lt_0226:
lea eax, [ebp-20]
push eax
lea eax, [ebp-16]
push eax
push dword ptr [ebp-12]
push dword ptr [ebp-8]
call dword ptr [EMIT+196]
add esp, 16
mov eax, dword ptr [ebp-8]
cmp eax, 12
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp-8]
cmp ebx, 13
sete bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
je .Lt_022D
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+52]
mov dword ptr [ebp-24], eax
push dword ptr [ebp+12]
push dword ptr [ebp-24]
push dword ptr [ebp-20]
mov eax, dword ptr [ebp-12]
push dword ptr [REGTB+eax*4]
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [REGTB+eax*4]
call dword ptr [ebx+8]
add esp, 16
mov ebx, dword ptr [ebp-24]
mov dword ptr [ebx+12], eax
mov eax, dword ptr [ebp-24]
mov dword ptr [eax], 4
.Lt_022D:
.Lt_022C:
push 0
push dword ptr [ebp+12]
push dword ptr [ebp-16]
mov eax, dword ptr [ebp-12]
push dword ptr [REGTB+eax*4]
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [REGTB+eax*4]
call dword ptr [ebx+8]
add esp, 16
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx+12], eax
mov eax, dword ptr [ebp+12]
mov dword ptr [eax], 4
push 0
push dword ptr [ebp+12]
call HFREEREG
add esp, 8
jmp .Lt_0224
.Lt_0225:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+84]
and ebx, 480
je .Lt_022E
mov dword ptr [ebp-28], 22
jmp .Lt_042D
.Lt_022E:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+84]
and eax, 31
mov dword ptr [ebp-28], eax
.Lt_042D:
mov eax, dword ptr [ebp-28]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax]
cmp ebx, 1
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+92]
cmp ecx, 1
setne cl
shr ecx, 1
sbb ecx, ecx
and ebx, ecx
je .Lt_0231
call EMITPOPST0
.Lt_0231:
.Lt_0230:
.Lt_0224:
.Lt_0223:
pop ebx
mov esp, ebp
pop ebp
ret
.size HLOADRESULT, .-HLOADRESULT
.balign 16
HFLUSHCALL:
.type HFLUSHCALL, @function
push ebp
mov ebp, esp
.Lt_0232:
cmp dword ptr [ebp+8], 101
jne .Lt_0235
.Lt_0236:
push 0
call HPRESERVEREGS
add esp, 4
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call EMITCALL
add esp, 8
push dword ptr [ebp+24]
push dword ptr [ebp+12]
call HLOADRESULT
add esp, 8
jmp .Lt_0234
.Lt_0235:
cmp dword ptr [ebp+8], 102
jne .Lt_0237
.Lt_0238:
push dword ptr [ebp+20]
call HPRESERVEREGS
add esp, 4
push dword ptr [ebp+20]
call HLOADPOINTER
add esp, 4
push dword ptr [ebp+16]
push dword ptr [ebp+20]
call EMITCALLPTR
add esp, 8
push 0
push dword ptr [ebp+20]
call HFREEREG
add esp, 8
push dword ptr [ebp+24]
push dword ptr [ebp+12]
call HLOADRESULT
add esp, 8
jmp .Lt_0234
.Lt_0237:
cmp dword ptr [ebp+8], 103
jne .Lt_0239
.Lt_023A:
push dword ptr [ebp+20]
call HLOADPOINTER
add esp, 4
push dword ptr [ebp+20]
call EMITJUMPPTR
add esp, 4
push 0
push dword ptr [ebp+20]
call HFREEREG
add esp, 8
.Lt_0239:
.Lt_023B:
.Lt_0234:
.Lt_0233:
mov esp, ebp
pop ebp
ret
.size HFLUSHCALL, .-HFLUSHCALL
.balign 16
HFLUSHSTACK:
.type HFLUSHSTACK, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_023C:
cmp dword ptr [ebp+8], 90
jne .Lt_023F
push dword ptr [ebp+16]
call EMITSTACKALIGN
add esp, 4
jmp .Lt_023D
.Lt_023F:
.Lt_023E:
cmp dword ptr [ebp+12], 0
je .Lt_0241
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax]
mov dword ptr [Lt_0434], ebx
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 480
je .Lt_0242
mov dword ptr [ebp-4], 22
jmp .Lt_0432
.Lt_0242:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 31
mov dword ptr [ebp-4], ebx
.Lt_0432:
mov ebx, dword ptr [ebp-4]
mov dword ptr [Lt_0435], ebx
cmp dword ptr [Lt_0435], 22
jne .Lt_0245
mov dword ptr [Lt_0435], 11
.Lt_0245:
.Lt_0244:
mov ebx, dword ptr [Lt_0435]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx]
mov dword ptr [Lt_0436], eax
jmp .Lt_0240
.Lt_0241:
mov dword ptr [Lt_0434], -1
mov dword ptr [Lt_0435], -2147483648
mov dword ptr [Lt_0436], -1
.Lt_0240:
push dword ptr [ebp+12]
call HLOADIDX
add esp, 4
cmp dword ptr [Lt_0434], 4
jne .Lt_0247
mov eax, dword ptr [Lt_0435]
cmp eax, 12
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [Lt_0435]
cmp ebx, 13
sete bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
je .Lt_0249
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+52]
mov dword ptr [Lt_0439], eax
push dword ptr [SYMB_DTYPETB+200]
push dword ptr [ebp+12]
push dword ptr [Lt_0439]
mov eax, dword ptr [Lt_0436]
push dword ptr [REGTB+eax*4]
mov eax, dword ptr [Lt_0436]
mov ebx, dword ptr [REGTB+eax*4]
call dword ptr [ebx]
add esp, 16
mov dword ptr [Lt_0435], 7
.Lt_0249:
.Lt_0248:
mov ebx, dword ptr [Lt_0435]
and ebx, 480
je .Lt_024A
mov dword ptr [ebp-4], 22
jmp .Lt_0433
.Lt_024A:
mov ebx, dword ptr [Lt_0435]
and ebx, 31
mov dword ptr [ebp-4], ebx
.Lt_0433:
mov ebx, dword ptr [ebp-4]
imul ebx, 28
push dword ptr [SYMB_DTYPETB+ebx+4]
push 0
push dword ptr [ebp+12]
mov ebx, dword ptr [Lt_0436]
push dword ptr [REGTB+ebx*4]
mov ebx, dword ptr [Lt_0436]
mov eax, dword ptr [REGTB+ebx*4]
call dword ptr [eax]
add esp, 16
.Lt_0247:
.Lt_0246:
cmp dword ptr [ebp+8], 87
jne .Lt_024D
.Lt_024E:
push dword ptr [ebp+12]
call EMITPUSH
add esp, 4
jmp .Lt_024C
.Lt_024D:
cmp dword ptr [ebp+8], 89
jne .Lt_024F
.Lt_0250:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call EMITPUSHUDT
add esp, 8
jmp .Lt_024C
.Lt_024F:
cmp dword ptr [ebp+8], 88
jne .Lt_0251
.Lt_0252:
push dword ptr [ebp+12]
call EMITPOP
add esp, 4
.Lt_0251:
.Lt_024C:
push 0
push dword ptr [ebp+12]
call HFREEREG
add esp, 8
.Lt_023D:
pop ebx
mov esp, ebp
pop ebp
ret
.size HFLUSHSTACK, .-HFLUSHSTACK

.section .bss
.balign 4
	.lcomm	Lt_0434,4
.balign 4
	.lcomm	Lt_0435,4
.balign 4
	.lcomm	Lt_0436,4
.balign 4
	.lcomm	Lt_0439,4

.section .text
.balign 16
HFLUSHUOP:
.type HFLUSHUOP, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0253:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+20]
mov dword ptr [Lt_043E], ebx
cmp dword ptr [ebp+12], 0
je .Lt_0256
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx]
mov dword ptr [Lt_043F], eax
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_0257
mov dword ptr [ebp-4], 22
jmp .Lt_043A
.Lt_0257:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_043A:
mov eax, dword ptr [ebp-4]
mov dword ptr [Lt_0440], eax
cmp dword ptr [Lt_0440], 22
jne .Lt_025A
mov dword ptr [Lt_0440], 11
.Lt_025A:
.Lt_0259:
mov eax, dword ptr [Lt_0440]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax]
mov dword ptr [Lt_0441], ebx
jmp .Lt_0255
.Lt_0256:
mov dword ptr [Lt_043F], -1
mov dword ptr [Lt_0440], -2147483648
mov dword ptr [Lt_0441], -1
.Lt_0255:
cmp dword ptr [ebp+16], 0
je .Lt_025C
mov ebx, dword ptr [ebp+16]
mov eax, dword ptr [ebx]
mov dword ptr [Lt_0442], eax
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+4]
and ebx, 480
je .Lt_025D
mov dword ptr [ebp-4], 22
jmp .Lt_043B
.Lt_025D:
mov ebx, dword ptr [ebp+16]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_043B:
mov eax, dword ptr [ebp-4]
mov dword ptr [Lt_0443], eax
cmp dword ptr [Lt_0443], 22
jne .Lt_0260
mov dword ptr [Lt_0443], 11
.Lt_0260:
.Lt_025F:
mov eax, dword ptr [Lt_0443]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax]
mov dword ptr [Lt_0444], ebx
jmp .Lt_025B
.Lt_025C:
mov dword ptr [Lt_0442], -1
mov dword ptr [Lt_0443], -2147483648
mov dword ptr [Lt_0444], -1
.Lt_025B:
push dword ptr [ebp+12]
call HLOADIDX
add esp, 4
push dword ptr [ebp+16]
call HLOADIDX
add esp, 4
cmp dword ptr [ebp+16], 0
je .Lt_0262
mov ebx, dword ptr [ebp+16]
cmp dword ptr [ebp+12], ebx
je .Lt_0264
mov ebx, dword ptr [Lt_0443]
cmp ebx, 12
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [Lt_0443]
cmp eax, 13
sete al
shr eax, 1
sbb eax, eax
or ebx, eax
je .Lt_0266
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+52]
mov dword ptr [Lt_0447], ebx
push dword ptr [SYMB_DTYPETB+200]
push dword ptr [ebp+16]
push dword ptr [Lt_0447]
mov ebx, dword ptr [Lt_0444]
push dword ptr [REGTB+ebx*4]
mov ebx, dword ptr [Lt_0444]
mov eax, dword ptr [REGTB+ebx*4]
call dword ptr [eax]
add esp, 16
mov dword ptr [Lt_0443], 7
.Lt_0266:
.Lt_0265:
mov eax, dword ptr [Lt_0443]
and eax, 480
je .Lt_0267
mov dword ptr [ebp-4], 22
jmp .Lt_043C
.Lt_0267:
mov eax, dword ptr [Lt_0443]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_043C:
mov eax, dword ptr [ebp-4]
imul eax, 28
push dword ptr [SYMB_DTYPETB+eax+4]
push 0
push dword ptr [ebp+16]
mov eax, dword ptr [Lt_0444]
push dword ptr [REGTB+eax*4]
mov eax, dword ptr [Lt_0444]
mov ebx, dword ptr [REGTB+eax*4]
call dword ptr [ebx]
add esp, 16
.Lt_0264:
.Lt_0263:
.Lt_0262:
.Lt_0261:
cmp dword ptr [ebp+16], 0
je .Lt_026A
mov ebx, dword ptr [Lt_0440]
cmp ebx, 12
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [Lt_0440]
cmp eax, 13
sete al
shr eax, 1
sbb eax, eax
or ebx, eax
je .Lt_026C
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+52]
mov dword ptr [Lt_0447], ebx
push dword ptr [SYMB_DTYPETB+200]
push dword ptr [ebp+12]
push dword ptr [Lt_0447]
mov ebx, dword ptr [Lt_0441]
push dword ptr [REGTB+ebx*4]
mov ebx, dword ptr [Lt_0441]
mov eax, dword ptr [REGTB+ebx*4]
call dword ptr [eax]
add esp, 16
mov dword ptr [Lt_0440], 7
.Lt_026C:
.Lt_026B:
cmp dword ptr [ebp+8], 75
jne .Lt_026E
mov eax, dword ptr [ebp+12]
mov dword ptr [eax+20], 0
.Lt_026E:
.Lt_026D:
mov eax, dword ptr [Lt_0440]
and eax, 480
je .Lt_026F
mov dword ptr [ebp-4], 22
jmp .Lt_043D
.Lt_026F:
mov eax, dword ptr [Lt_0440]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_043D:
mov eax, dword ptr [ebp-4]
imul eax, 28
push dword ptr [SYMB_DTYPETB+eax+4]
push 0
push dword ptr [ebp+12]
mov eax, dword ptr [Lt_0441]
push dword ptr [REGTB+eax*4]
mov eax, dword ptr [Lt_0441]
mov ebx, dword ptr [REGTB+eax*4]
call dword ptr [ebx]
add esp, 16
cmp dword ptr [ebp+8], 75
jne .Lt_0272
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [Lt_043E]
mov dword ptr [ebx+20], eax
.Lt_0272:
.Lt_0271:
.Lt_026A:
.Lt_0269:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
jmp .Lt_0274
.Lt_0276:
push dword ptr [ebp+12]
call EMITNEG
add esp, 4
jmp .Lt_0273
.Lt_0277:
push dword ptr [ebp+12]
call EMITNOT
add esp, 4
jmp .Lt_0273
.Lt_0278:
push dword ptr [ebp+12]
call EMITHADD
add esp, 4
mov eax, dword ptr [ebp+12]
mov dword ptr [eax+20], 0
jmp .Lt_0273
.Lt_0279:
push dword ptr [ebp+12]
call EMITABS
add esp, 4
jmp .Lt_0273
.Lt_027A:
push dword ptr [ebp+12]
call EMITSGN
add esp, 4
jmp .Lt_0273
.Lt_027B:
push dword ptr [ebp+12]
call EMITFIX
add esp, 4
jmp .Lt_0273
.Lt_027C:
push dword ptr [ebp+12]
call EMITFRAC
add esp, 4
jmp .Lt_0273
.Lt_027D:
push dword ptr [ebp+12]
call EMITCONVFD2FS
add esp, 4
jmp .Lt_0273
.Lt_027E:
push dword ptr [ebp+12]
call EMITSIN
add esp, 4
jmp .Lt_0273
.Lt_027F:
push dword ptr [ebp+12]
call EMITASIN
add esp, 4
jmp .Lt_0273
.Lt_0280:
push dword ptr [ebp+12]
call EMITCOS
add esp, 4
jmp .Lt_0273
.Lt_0281:
push dword ptr [ebp+12]
call EMITACOS
add esp, 4
jmp .Lt_0273
.Lt_0282:
push dword ptr [ebp+12]
call EMITTAN
add esp, 4
jmp .Lt_0273
.Lt_0283:
push dword ptr [ebp+12]
call EMITATAN
add esp, 4
jmp .Lt_0273
.Lt_0284:
push dword ptr [ebp+12]
call EMITSQRT
add esp, 4
jmp .Lt_0273
.Lt_0285:
push dword ptr [ebp+12]
call EMITRSQRT
add esp, 4
jmp .Lt_0273
.Lt_0286:
push dword ptr [ebp+12]
call EMITRCP
add esp, 4
jmp .Lt_0273
.Lt_0287:
push dword ptr [ebp+12]
call EMITLOG
add esp, 4
jmp .Lt_0273
.Lt_0288:
push dword ptr [ebp+12]
call EMITEXP
add esp, 4
jmp .Lt_0273
.Lt_0289:
push dword ptr [ebp+12]
call EMITFLOOR
add esp, 4
jmp .Lt_0273
.Lt_028A:
push dword ptr [ebp+12]
call EMITSWZREP
add esp, 4
jmp .Lt_0273
.Lt_0274:
mov eax, dword ptr [ebp-4]
add eax, 4294967244
cmp eax, 23
ja .Lt_0273
mov eax, dword ptr [ebp-4]
jmp dword ptr [.LT_028B+eax*4-208]
.LT_028B:
.int .Lt_0277
.int .Lt_0273
.int .Lt_0276
.int .Lt_0278
.int .Lt_0279
.int .Lt_027A
.int .Lt_027E
.int .Lt_027F
.int .Lt_0280
.int .Lt_0281
.int .Lt_0282
.int .Lt_0283
.int .Lt_0273
.int .Lt_0284
.int .Lt_0285
.int .Lt_0286
.int .Lt_0287
.int .Lt_0288
.int .Lt_0289
.int .Lt_027B
.int .Lt_027C
.int .Lt_0273
.int .Lt_027D
.int .Lt_028A
.Lt_0273:
cmp dword ptr [ebp+16], 0
je .Lt_028D
mov eax, dword ptr [ebp+16]
cmp dword ptr [ebp+12], eax
je .Lt_028F
push dword ptr [ebp+12]
push dword ptr [ebp+16]
call EMITMOV
add esp, 8
.Lt_028F:
.Lt_028E:
.Lt_028D:
.Lt_028C:
push 0
push dword ptr [ebp+12]
call HFREEREG
add esp, 8
push 0
push dword ptr [ebp+16]
call HFREEREG
add esp, 8
.Lt_0254:
pop ebx
mov esp, ebp
pop ebp
ret
.size HFLUSHUOP, .-HFLUSHUOP

.section .bss
.balign 4
	.lcomm	Lt_043F,4
.balign 4
	.lcomm	Lt_0440,4
.balign 4
	.lcomm	Lt_0441,4
.balign 4
	.lcomm	Lt_0442,4
.balign 4
	.lcomm	Lt_0443,4
.balign 4
	.lcomm	Lt_0444,4
.balign 4
	.lcomm	Lt_0447,4
.balign 4
	.lcomm	Lt_043E,4

.section .text
.balign 16
HFLUSHBOP:
.type HFLUSHBOP, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_0290:
cmp dword ptr [ebp+12], 0
je .Lt_0293
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax]
mov dword ptr [Lt_0451], ebx
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 480
je .Lt_0294
mov dword ptr [ebp-4], 22
jmp .Lt_044A
.Lt_0294:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 31
mov dword ptr [ebp-4], ebx
.Lt_044A:
mov ebx, dword ptr [ebp-4]
mov dword ptr [Lt_0452], ebx
cmp dword ptr [Lt_0452], 22
jne .Lt_0297
mov dword ptr [Lt_0452], 11
.Lt_0297:
.Lt_0296:
mov ebx, dword ptr [Lt_0452]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx]
mov dword ptr [Lt_0453], eax
jmp .Lt_0292
.Lt_0293:
mov dword ptr [Lt_0451], -1
mov dword ptr [Lt_0452], -2147483648
mov dword ptr [Lt_0453], -1
.Lt_0292:
cmp dword ptr [ebp+16], 0
je .Lt_0299
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax]
mov dword ptr [Lt_0454], ebx
mov ebx, dword ptr [ebp+16]
mov eax, dword ptr [ebx+4]
and eax, 480
je .Lt_029A
mov dword ptr [ebp-4], 22
jmp .Lt_044B
.Lt_029A:
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+4]
and ebx, 31
mov dword ptr [ebp-4], ebx
.Lt_044B:
mov ebx, dword ptr [ebp-4]
mov dword ptr [Lt_0455], ebx
cmp dword ptr [Lt_0455], 22
jne .Lt_029D
mov dword ptr [Lt_0455], 11
.Lt_029D:
.Lt_029C:
mov ebx, dword ptr [Lt_0455]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx]
mov dword ptr [Lt_0456], eax
jmp .Lt_0298
.Lt_0299:
mov dword ptr [Lt_0454], -1
mov dword ptr [Lt_0455], -2147483648
mov dword ptr [Lt_0456], -1
.Lt_0298:
cmp dword ptr [ebp+20], 0
je .Lt_029F
mov eax, dword ptr [ebp+20]
mov ebx, dword ptr [eax]
mov dword ptr [Lt_0457], ebx
mov ebx, dword ptr [ebp+20]
mov eax, dword ptr [ebx+4]
and eax, 480
je .Lt_02A0
mov dword ptr [ebp-4], 22
jmp .Lt_044C
.Lt_02A0:
mov eax, dword ptr [ebp+20]
mov ebx, dword ptr [eax+4]
and ebx, 31
mov dword ptr [ebp-4], ebx
.Lt_044C:
mov ebx, dword ptr [ebp-4]
mov dword ptr [Lt_0458], ebx
cmp dword ptr [Lt_0458], 22
jne .Lt_02A3
mov dword ptr [Lt_0458], 11
.Lt_02A3:
.Lt_02A2:
mov ebx, dword ptr [Lt_0458]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx]
mov dword ptr [Lt_0459], eax
jmp .Lt_029E
.Lt_029F:
mov dword ptr [Lt_0457], -1
mov dword ptr [Lt_0458], -2147483648
mov dword ptr [Lt_0459], -1
.Lt_029E:
push dword ptr [ebp+12]
call HLOADIDX
add esp, 4
push dword ptr [ebp+16]
call HLOADIDX
add esp, 4
push dword ptr [ebp+20]
call HLOADIDX
add esp, 4
cmp dword ptr [ebp+20], 0
jne .Lt_02A5
cmp dword ptr [Lt_0454], 0
je .Lt_02A7
mov eax, dword ptr [Lt_0455]
cmp eax, 12
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [Lt_0455]
cmp ebx, 13
sete bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
je .Lt_02A9
mov ebx, dword ptr [ebp+16]
mov eax, dword ptr [ebx+52]
mov dword ptr [Lt_045C], eax
push dword ptr [SYMB_DTYPETB+200]
push dword ptr [ebp+16]
push dword ptr [Lt_045C]
mov eax, dword ptr [Lt_0456]
push dword ptr [REGTB+eax*4]
mov eax, dword ptr [Lt_0456]
mov ebx, dword ptr [REGTB+eax*4]
call dword ptr [ebx]
add esp, 16
mov dword ptr [Lt_0455], 7
.Lt_02A9:
.Lt_02A8:
mov ebx, dword ptr [Lt_0455]
and ebx, 480
je .Lt_02AA
mov dword ptr [ebp-4], 22
jmp .Lt_044D
.Lt_02AA:
mov ebx, dword ptr [Lt_0455]
and ebx, 31
mov dword ptr [ebp-4], ebx
.Lt_044D:
mov ebx, dword ptr [ebp-4]
imul ebx, 28
push dword ptr [SYMB_DTYPETB+ebx+4]
push 0
push dword ptr [ebp+16]
mov ebx, dword ptr [Lt_0456]
push dword ptr [REGTB+ebx*4]
mov ebx, dword ptr [Lt_0456]
mov eax, dword ptr [REGTB+ebx*4]
call dword ptr [eax]
add esp, 16
.Lt_02A7:
.Lt_02A6:
jmp .Lt_02A4
.Lt_02A5:
cmp dword ptr [Lt_0454], 4
jne .Lt_02AD
mov eax, dword ptr [Lt_0455]
cmp eax, 12
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [Lt_0455]
cmp ebx, 13
sete bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
je .Lt_02AF
mov ebx, dword ptr [ebp+16]
mov eax, dword ptr [ebx+52]
mov dword ptr [Lt_045C], eax
push dword ptr [SYMB_DTYPETB+200]
push dword ptr [ebp+16]
push dword ptr [Lt_045C]
mov eax, dword ptr [Lt_0456]
push dword ptr [REGTB+eax*4]
mov eax, dword ptr [Lt_0456]
mov ebx, dword ptr [REGTB+eax*4]
call dword ptr [ebx]
add esp, 16
mov dword ptr [Lt_0455], 7
.Lt_02AF:
.Lt_02AE:
mov ebx, dword ptr [Lt_0455]
and ebx, 480
je .Lt_02B0
mov dword ptr [ebp-8], 22
jmp .Lt_044E
.Lt_02B0:
mov ebx, dword ptr [Lt_0455]
and ebx, 31
mov dword ptr [ebp-8], ebx
.Lt_044E:
mov ebx, dword ptr [ebp-8]
imul ebx, 28
push dword ptr [SYMB_DTYPETB+ebx+4]
push 0
push dword ptr [ebp+16]
mov ebx, dword ptr [Lt_0456]
push dword ptr [REGTB+ebx*4]
mov ebx, dword ptr [Lt_0456]
mov eax, dword ptr [REGTB+ebx*4]
call dword ptr [eax]
add esp, 16
.Lt_02AD:
.Lt_02AC:
mov eax, dword ptr [Lt_0452]
cmp eax, 12
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [Lt_0452]
cmp ebx, 13
sete bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
je .Lt_02B3
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+52]
mov dword ptr [Lt_045C], eax
push dword ptr [SYMB_DTYPETB+200]
push dword ptr [ebp+12]
push dword ptr [Lt_045C]
mov eax, dword ptr [Lt_0453]
push dword ptr [REGTB+eax*4]
mov eax, dword ptr [Lt_0453]
mov ebx, dword ptr [REGTB+eax*4]
call dword ptr [ebx]
add esp, 16
mov dword ptr [Lt_0452], 7
.Lt_02B3:
.Lt_02B2:
mov ebx, dword ptr [Lt_0452]
and ebx, 480
je .Lt_02B4
mov dword ptr [ebp-4], 22
jmp .Lt_044F
.Lt_02B4:
mov ebx, dword ptr [Lt_0452]
and ebx, 31
mov dword ptr [ebp-4], ebx
.Lt_044F:
mov ebx, dword ptr [ebp-4]
imul ebx, 28
push dword ptr [SYMB_DTYPETB+ebx+4]
push 0
push dword ptr [ebp+12]
mov ebx, dword ptr [Lt_0453]
push dword ptr [REGTB+ebx*4]
mov ebx, dword ptr [Lt_0453]
mov eax, dword ptr [REGTB+ebx*4]
call dword ptr [eax]
add esp, 16
.Lt_02A4:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
jmp .Lt_02B7
.Lt_02B9:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call EMITADD
add esp, 8
jmp .Lt_02B6
.Lt_02BA:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call EMITSUB
add esp, 8
jmp .Lt_02B6
.Lt_02BB:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call EMITMUL
add esp, 8
jmp .Lt_02B6
.Lt_02BC:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call EMITDIV
add esp, 8
jmp .Lt_02B6
.Lt_02BD:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call EMITINTDIV
add esp, 8
jmp .Lt_02B6
.Lt_02BE:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call EMITMOD
add esp, 8
jmp .Lt_02B6
.Lt_02BF:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call EMITSHL
add esp, 8
jmp .Lt_02B6
.Lt_02C0:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call EMITSHR
add esp, 8
jmp .Lt_02B6
.Lt_02C1:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call EMITAND
add esp, 8
jmp .Lt_02B6
.Lt_02C2:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call EMITOR
add esp, 8
jmp .Lt_02B6
.Lt_02C3:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call EMITXOR
add esp, 8
jmp .Lt_02B6
.Lt_02C4:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call EMITEQV
add esp, 8
jmp .Lt_02B6
.Lt_02C5:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call EMITIMP
add esp, 8
jmp .Lt_02B6
.Lt_02C6:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call EMITATN2
add esp, 8
jmp .Lt_02B6
.Lt_02C7:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call EMITPOW
add esp, 8
jmp .Lt_02B6
.Lt_02B7:
mov eax, dword ptr [ebp-4]
add eax, 4294967268
cmp eax, 36
ja .Lt_02B6
mov eax, dword ptr [ebp-4]
jmp dword ptr [.LT_02C8+eax*4-112]
.LT_02C8:
.int .Lt_02B9
.int .Lt_02BA
.int .Lt_02BB
.int .Lt_02BC
.int .Lt_02BD
.int .Lt_02BE
.int .Lt_02C1
.int .Lt_02C2
.int .Lt_02B6
.int .Lt_02B6
.int .Lt_02C3
.int .Lt_02C4
.int .Lt_02C5
.int .Lt_02BF
.int .Lt_02C0
.int .Lt_02C7
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
.int .Lt_02C6
.Lt_02B6:
cmp dword ptr [ebp+20], 0
je .Lt_02CA
mov eax, dword ptr [ebp+20]
cmp dword ptr [ebp+12], eax
je .Lt_02CC
mov eax, dword ptr [Lt_0458]
cmp eax, 12
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [Lt_0458]
cmp ebx, 13
sete bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
je .Lt_02CE
mov ebx, dword ptr [ebp+20]
mov eax, dword ptr [ebx+52]
mov dword ptr [Lt_045C], eax
push dword ptr [SYMB_DTYPETB+200]
push dword ptr [ebp+20]
push dword ptr [Lt_045C]
mov eax, dword ptr [Lt_0459]
push dword ptr [REGTB+eax*4]
mov eax, dword ptr [Lt_0459]
mov ebx, dword ptr [REGTB+eax*4]
call dword ptr [ebx]
add esp, 16
mov dword ptr [Lt_0458], 7
.Lt_02CE:
.Lt_02CD:
mov ebx, dword ptr [Lt_0458]
and ebx, 480
je .Lt_02CF
mov dword ptr [ebp-4], 22
jmp .Lt_0450
.Lt_02CF:
mov ebx, dword ptr [Lt_0458]
and ebx, 31
mov dword ptr [ebp-4], ebx
.Lt_0450:
mov ebx, dword ptr [ebp-4]
imul ebx, 28
push dword ptr [SYMB_DTYPETB+ebx+4]
push 0
push dword ptr [ebp+20]
mov ebx, dword ptr [Lt_0459]
push dword ptr [REGTB+ebx*4]
mov ebx, dword ptr [Lt_0459]
mov eax, dword ptr [REGTB+ebx*4]
call dword ptr [eax]
add esp, 16
push dword ptr [ebp+12]
push dword ptr [ebp+20]
call EMITMOV
add esp, 8
.Lt_02CC:
.Lt_02CB:
.Lt_02CA:
.Lt_02C9:
push 0
push dword ptr [ebp+12]
call HFREEREG
add esp, 8
push 0
push dword ptr [ebp+16]
call HFREEREG
add esp, 8
push 0
push dword ptr [ebp+20]
call HFREEREG
add esp, 8
.Lt_0291:
pop ebx
mov esp, ebp
pop ebp
ret
.size HFLUSHBOP, .-HFLUSHBOP

.section .bss
.balign 4
	.lcomm	Lt_0451,4
.balign 4
	.lcomm	Lt_0452,4
.balign 4
	.lcomm	Lt_0453,4
.balign 4
	.lcomm	Lt_0454,4
.balign 4
	.lcomm	Lt_0455,4
.balign 4
	.lcomm	Lt_0456,4
.balign 4
	.lcomm	Lt_0457,4
.balign 4
	.lcomm	Lt_0458,4
.balign 4
	.lcomm	Lt_0459,4
.balign 4
	.lcomm	Lt_045C,4

.section .text
.balign 16
HFLUSHCOMP:
.type HFLUSHCOMP, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_02D1:
cmp dword ptr [ebp+12], 0
je .Lt_02D4
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax]
mov dword ptr [Lt_0469], ebx
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 480
je .Lt_02D5
mov dword ptr [ebp-4], 22
jmp .Lt_0463
.Lt_02D5:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 31
mov dword ptr [ebp-4], ebx
.Lt_0463:
mov ebx, dword ptr [ebp-4]
mov dword ptr [Lt_046A], ebx
cmp dword ptr [Lt_046A], 22
jne .Lt_02D8
mov dword ptr [Lt_046A], 11
.Lt_02D8:
.Lt_02D7:
mov ebx, dword ptr [Lt_046A]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx]
mov dword ptr [Lt_046B], eax
jmp .Lt_02D3
.Lt_02D4:
mov dword ptr [Lt_0469], -1
mov dword ptr [Lt_046A], -2147483648
mov dword ptr [Lt_046B], -1
.Lt_02D3:
cmp dword ptr [ebp+16], 0
je .Lt_02DA
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax]
mov dword ptr [Lt_046C], ebx
mov ebx, dword ptr [ebp+16]
mov eax, dword ptr [ebx+4]
and eax, 480
je .Lt_02DB
mov dword ptr [ebp-4], 22
jmp .Lt_0464
.Lt_02DB:
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+4]
and ebx, 31
mov dword ptr [ebp-4], ebx
.Lt_0464:
mov ebx, dword ptr [ebp-4]
mov dword ptr [Lt_046D], ebx
cmp dword ptr [Lt_046D], 22
jne .Lt_02DE
mov dword ptr [Lt_046D], 11
.Lt_02DE:
.Lt_02DD:
mov ebx, dword ptr [Lt_046D]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx]
mov dword ptr [Lt_046E], eax
jmp .Lt_02D9
.Lt_02DA:
mov dword ptr [Lt_046C], -1
mov dword ptr [Lt_046D], -2147483648
mov dword ptr [Lt_046E], -1
.Lt_02D9:
cmp dword ptr [ebp+20], 0
je .Lt_02E0
mov eax, dword ptr [ebp+20]
mov ebx, dword ptr [eax]
mov dword ptr [Lt_046F], ebx
mov ebx, dword ptr [ebp+20]
mov eax, dword ptr [ebx+4]
and eax, 480
je .Lt_02E1
mov dword ptr [ebp-4], 22
jmp .Lt_0465
.Lt_02E1:
mov eax, dword ptr [ebp+20]
mov ebx, dword ptr [eax+4]
and ebx, 31
mov dword ptr [ebp-4], ebx
.Lt_0465:
mov ebx, dword ptr [ebp-4]
mov dword ptr [Lt_0470], ebx
cmp dword ptr [Lt_0470], 22
jne .Lt_02E4
mov dword ptr [Lt_0470], 11
.Lt_02E4:
.Lt_02E3:
mov ebx, dword ptr [Lt_0470]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx]
mov dword ptr [Lt_0471], eax
jmp .Lt_02DF
.Lt_02E0:
mov dword ptr [Lt_046F], -1
mov dword ptr [Lt_0470], -2147483648
mov dword ptr [Lt_0471], -1
.Lt_02DF:
push dword ptr [ebp+12]
call HLOADIDX
add esp, 4
push dword ptr [ebp+16]
call HLOADIDX
add esp, 4
push dword ptr [ebp+20]
call HLOADIDX
add esp, 4
mov dword ptr [Lt_0472], 0
cmp dword ptr [ebp+20], 0
jne .Lt_02E6
cmp dword ptr [Lt_046E], 0
jne .Lt_02E8
cmp dword ptr [Lt_046C], 0
je .Lt_02EA
cmp dword ptr [Lt_046B], 1
je .Lt_02EC
mov dword ptr [Lt_0472], -1
.Lt_02EC:
.Lt_02EB:
.Lt_02EA:
.Lt_02E9:
.Lt_02E8:
.Lt_02E7:
.Lt_02E6:
.Lt_02E5:
mov eax, dword ptr [Lt_046C]
cmp eax, 4
sete al
shr eax, 1
sbb eax, eax
or eax, dword ptr [Lt_0472]
je .Lt_02EE
mov eax, dword ptr [Lt_046D]
cmp eax, 12
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [Lt_046D]
cmp ebx, 13
sete bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
je .Lt_02F0
mov ebx, dword ptr [ebp+16]
mov eax, dword ptr [ebx+52]
mov dword ptr [Lt_0476], eax
push dword ptr [SYMB_DTYPETB+200]
push dword ptr [ebp+16]
push dword ptr [Lt_0476]
mov eax, dword ptr [Lt_046E]
push dword ptr [REGTB+eax*4]
mov eax, dword ptr [Lt_046E]
mov ebx, dword ptr [REGTB+eax*4]
call dword ptr [ebx]
add esp, 16
mov dword ptr [Lt_046D], 7
.Lt_02F0:
.Lt_02EF:
mov ebx, dword ptr [Lt_046D]
and ebx, 480
je .Lt_02F1
mov dword ptr [ebp-4], 22
jmp .Lt_0466
.Lt_02F1:
mov ebx, dword ptr [Lt_046D]
and ebx, 31
mov dword ptr [ebp-4], ebx
.Lt_0466:
mov ebx, dword ptr [ebp-4]
imul ebx, 28
push dword ptr [SYMB_DTYPETB+ebx+4]
push 0
push dword ptr [ebp+16]
mov ebx, dword ptr [Lt_046E]
push dword ptr [REGTB+ebx*4]
mov ebx, dword ptr [Lt_046E]
mov eax, dword ptr [REGTB+ebx*4]
call dword ptr [eax]
add esp, 16
mov dword ptr [Lt_046C], 4
.Lt_02EE:
.Lt_02ED:
mov dword ptr [Lt_0472], 0
cmp dword ptr [ebp+20], 0
setne al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp+20]
cmp ebx, dword ptr [ebp+12]
sete cl
shr ecx, 1
sbb ecx, ecx
and eax, ecx
je .Lt_02F4
mov dword ptr [Lt_0472], -1
jmp .Lt_02F3
.Lt_02F4:
cmp dword ptr [Lt_046B], 1
jne .Lt_02F5
mov dword ptr [Lt_0472], -1
jmp .Lt_02F3
.Lt_02F5:
cmp dword ptr [Lt_0469], 0
jne .Lt_02F6
mov dword ptr [Lt_0472], -1
jmp .Lt_02F3
.Lt_02F6:
cmp dword ptr [Lt_046C], 4
je .Lt_02F7
cmp dword ptr [Lt_046C], 0
je .Lt_02F9
mov dword ptr [Lt_0472], -1
.Lt_02F9:
.Lt_02F8:
.Lt_02F7:
.Lt_02F3:
mov ecx, dword ptr [Lt_0469]
cmp ecx, 4
sete cl
shr ecx, 1
sbb ecx, ecx
or ecx, dword ptr [Lt_0472]
je .Lt_02FB
mov ecx, dword ptr [Lt_046A]
cmp ecx, 12
sete cl
shr ecx, 1
sbb ecx, ecx
mov eax, dword ptr [Lt_046A]
cmp eax, 13
sete al
shr eax, 1
sbb eax, eax
or ecx, eax
je .Lt_02FD
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax+52]
mov dword ptr [Lt_0476], ecx
push dword ptr [SYMB_DTYPETB+200]
push dword ptr [ebp+12]
push dword ptr [Lt_0476]
mov ecx, dword ptr [Lt_046B]
push dword ptr [REGTB+ecx*4]
mov ecx, dword ptr [Lt_046B]
mov eax, dword ptr [REGTB+ecx*4]
call dword ptr [eax]
add esp, 16
mov dword ptr [Lt_046A], 7
.Lt_02FD:
.Lt_02FC:
mov eax, dword ptr [Lt_046A]
and eax, 480
je .Lt_02FE
mov dword ptr [ebp-4], 22
jmp .Lt_0467
.Lt_02FE:
mov eax, dword ptr [Lt_046A]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0467:
mov eax, dword ptr [ebp-4]
imul eax, 28
push dword ptr [SYMB_DTYPETB+eax+4]
push 0
push dword ptr [ebp+12]
mov eax, dword ptr [Lt_046B]
push dword ptr [REGTB+eax*4]
mov eax, dword ptr [Lt_046B]
mov ecx, dword ptr [REGTB+eax*4]
call dword ptr [ecx]
add esp, 16
.Lt_02FB:
.Lt_02FA:
cmp dword ptr [ebp+20], 0
je .Lt_0301
mov ecx, dword ptr [ebp+12]
cmp dword ptr [ebp+20], ecx
je .Lt_0303
mov ecx, dword ptr [Lt_0470]
and ecx, 480
je .Lt_0304
mov dword ptr [ebp-4], 22
jmp .Lt_0468
.Lt_0304:
mov ecx, dword ptr [Lt_0470]
and ecx, 31
mov dword ptr [ebp-4], ecx
.Lt_0468:
mov ecx, dword ptr [ebp-4]
imul ecx, 28
push dword ptr [SYMB_DTYPETB+ecx+4]
push 0
push dword ptr [ebp+20]
mov ecx, dword ptr [Lt_0471]
push dword ptr [REGTB+ecx*4]
mov ecx, dword ptr [Lt_0471]
mov eax, dword ptr [REGTB+ecx*4]
call dword ptr [eax+4]
add esp, 16
mov ecx, dword ptr [ebp+20]
mov dword ptr [ecx+12], eax
mov eax, dword ptr [ebp+20]
mov dword ptr [eax], 4
.Lt_0303:
.Lt_0302:
.Lt_0301:
.Lt_0300:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
jmp .Lt_0307
.Lt_0309:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+24]
push dword ptr [ebp+20]
call EMITEQ
add esp, 16
jmp .Lt_0306
.Lt_030A:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+24]
push dword ptr [ebp+20]
call EMITNE
add esp, 16
jmp .Lt_0306
.Lt_030B:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+24]
push dword ptr [ebp+20]
call EMITGT
add esp, 16
jmp .Lt_0306
.Lt_030C:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+24]
push dword ptr [ebp+20]
call EMITLT
add esp, 16
jmp .Lt_0306
.Lt_030D:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+24]
push dword ptr [ebp+20]
call EMITLE
add esp, 16
jmp .Lt_0306
.Lt_030E:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+24]
push dword ptr [ebp+20]
call EMITGE
add esp, 16
jmp .Lt_0306
.Lt_0307:
mov eax, dword ptr [ebp-4]
add eax, 4294967251
cmp eax, 5
ja .Lt_0306
mov eax, dword ptr [ebp-4]
jmp dword ptr [.LT_030F+eax*4-180]
.LT_030F:
.int .Lt_0309
.int .Lt_030B
.int .Lt_030C
.int .Lt_030A
.int .Lt_030E
.int .Lt_030D
.Lt_0306:
push 0
push dword ptr [ebp+12]
call HFREEREG
add esp, 8
push 0
push dword ptr [ebp+16]
call HFREEREG
add esp, 8
cmp dword ptr [ebp+20], 0
je .Lt_0311
push 0
push dword ptr [ebp+20]
call HFREEREG
add esp, 8
.Lt_0311:
.Lt_0310:
.Lt_02D2:
pop ebx
mov esp, ebp
pop ebp
ret
.size HFLUSHCOMP, .-HFLUSHCOMP

.section .bss
.balign 4
	.lcomm	Lt_047C,12
.balign 4
	.lcomm	Lt_0469,4
.balign 4
	.lcomm	Lt_046A,4
.balign 4
	.lcomm	Lt_046B,4
.balign 4
	.lcomm	Lt_046C,4
.balign 4
	.lcomm	Lt_046D,4
.balign 4
	.lcomm	Lt_046E,4
.balign 4
	.lcomm	Lt_046F,4
.balign 4
	.lcomm	Lt_0470,4
.balign 4
	.lcomm	Lt_0471,4
.balign 4
	.lcomm	Lt_0476,4
.balign 4
	.lcomm	Lt_0472,4

.section .text
.balign 16
HSPILLREGS:
.type HSPILLREGS, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
.Lt_0312:
mov dword ptr [ebp-16], 0
.Lt_0317:
mov eax, dword ptr [ebp-16]
push dword ptr [REGTB+eax*4]
mov eax, dword ptr [ebp-16]
mov ebx, dword ptr [REGTB+eax*4]
call dword ptr [ebx+28]
add esp, 4
mov dword ptr [ebp-12], eax
.Lt_0318:
cmp dword ptr [ebp-12], -1
je .Lt_0319
push dword ptr [ebp-12]
mov eax, dword ptr [ebp-16]
push dword ptr [REGTB+eax*4]
mov eax, dword ptr [ebp-16]
mov ebx, dword ptr [REGTB+eax*4]
call dword ptr [ebx+16]
add esp, 8
test eax, eax
jne .Lt_031B
lea eax, [ebp-8]
push eax
push dword ptr [ebp-12]
mov eax, dword ptr [ebp-16]
push dword ptr [REGTB+eax*4]
mov eax, dword ptr [ebp-16]
mov ebx, dword ptr [REGTB+eax*4]
call dword ptr [ebx+36]
add esp, 12
mov dword ptr [ebp-4], eax
push dword ptr [ebp-8]
push dword ptr [ebp-4]
call dword ptr [IR+276]
add esp, 8
.Lt_031B:
.Lt_031A:
push dword ptr [ebp-12]
mov eax, dword ptr [ebp-16]
push dword ptr [REGTB+eax*4]
mov eax, dword ptr [ebp-16]
mov ebx, dword ptr [REGTB+eax*4]
call dword ptr [ebx+32]
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_0318
.Lt_0319:
.Lt_0315:
inc dword ptr [ebp-16]
.Lt_0314:
cmp dword ptr [ebp-16], 1
jle .Lt_0317
.Lt_0316:
.Lt_0313:
pop ebx
mov esp, ebp
pop ebp
ret
.size HSPILLREGS, .-HSPILLREGS
.balign 16
HFLUSHSTORE:
.type HFLUSHSTORE, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_031C:
cmp dword ptr [ebp+8], 86
jne .Lt_031F
call HSPILLREGS
jmp .Lt_031D
.Lt_031F:
.Lt_031E:
cmp dword ptr [ebp+12], 0
je .Lt_0321
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax]
mov dword ptr [Lt_0480], ebx
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 480
je .Lt_0322
mov dword ptr [ebp-4], 22
jmp .Lt_047D
.Lt_0322:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 31
mov dword ptr [ebp-4], ebx
.Lt_047D:
mov ebx, dword ptr [ebp-4]
mov dword ptr [Lt_0481], ebx
cmp dword ptr [Lt_0481], 22
jne .Lt_0325
mov dword ptr [Lt_0481], 11
.Lt_0325:
.Lt_0324:
mov ebx, dword ptr [Lt_0481]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx]
mov dword ptr [Lt_0482], eax
jmp .Lt_0320
.Lt_0321:
mov dword ptr [Lt_0480], -1
mov dword ptr [Lt_0481], -2147483648
mov dword ptr [Lt_0482], -1
.Lt_0320:
cmp dword ptr [ebp+16], 0
je .Lt_0327
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax]
mov dword ptr [Lt_0483], ebx
mov ebx, dword ptr [ebp+16]
mov eax, dword ptr [ebx+4]
and eax, 480
je .Lt_0328
mov dword ptr [ebp-4], 22
jmp .Lt_047E
.Lt_0328:
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+4]
and ebx, 31
mov dword ptr [ebp-4], ebx
.Lt_047E:
mov ebx, dword ptr [ebp-4]
mov dword ptr [Lt_0484], ebx
cmp dword ptr [Lt_0484], 22
jne .Lt_032B
mov dword ptr [Lt_0484], 11
.Lt_032B:
.Lt_032A:
mov ebx, dword ptr [Lt_0484]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx]
mov dword ptr [Lt_0485], eax
jmp .Lt_0326
.Lt_0327:
mov dword ptr [Lt_0483], -1
mov dword ptr [Lt_0484], -2147483648
mov dword ptr [Lt_0485], -1
.Lt_0326:
push dword ptr [ebp+12]
call HLOADIDX
add esp, 4
push dword ptr [ebp+16]
call HLOADIDX
add esp, 4
mov eax, dword ptr [Lt_0483]
cmp eax, 4
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [Lt_0483]
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
mov ecx, dword ptr [Lt_0482]
test ecx, ecx
sete cl
shr ecx, 1
sbb ecx, ecx
and ebx, ecx
or eax, ebx
je .Lt_032D
mov ebx, dword ptr [Lt_0484]
cmp ebx, 12
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [Lt_0484]
cmp eax, 13
sete al
shr eax, 1
sbb eax, eax
or ebx, eax
je .Lt_032F
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+52]
mov dword ptr [Lt_048B], ebx
push dword ptr [SYMB_DTYPETB+200]
push dword ptr [ebp+16]
push dword ptr [Lt_048B]
mov ebx, dword ptr [Lt_0485]
push dword ptr [REGTB+ebx*4]
mov ebx, dword ptr [Lt_0485]
mov eax, dword ptr [REGTB+ebx*4]
call dword ptr [eax]
add esp, 16
mov dword ptr [Lt_0484], 7
.Lt_032F:
.Lt_032E:
mov eax, dword ptr [Lt_0484]
and eax, 480
je .Lt_0330
mov dword ptr [ebp-4], 22
jmp .Lt_047F
.Lt_0330:
mov eax, dword ptr [Lt_0484]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_047F:
mov eax, dword ptr [ebp-4]
imul eax, 28
push dword ptr [SYMB_DTYPETB+eax+4]
push 0
push dword ptr [ebp+16]
mov eax, dword ptr [Lt_0485]
push dword ptr [REGTB+eax*4]
mov eax, dword ptr [Lt_0485]
mov ebx, dword ptr [REGTB+eax*4]
call dword ptr [ebx]
add esp, 16
.Lt_032D:
.Lt_032C:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call EMITSTORE
add esp, 8
push 0
push dword ptr [ebp+12]
call HFREEREG
add esp, 8
push 0
push dword ptr [ebp+16]
call HFREEREG
add esp, 8
.Lt_031D:
pop ebx
mov esp, ebp
pop ebp
ret
.size HFLUSHSTORE, .-HFLUSHSTORE

.section .bss
.balign 4
	.lcomm	Lt_0480,4
.balign 4
	.lcomm	Lt_0481,4
.balign 4
	.lcomm	Lt_0482,4
.balign 4
	.lcomm	Lt_0483,4
.balign 4
	.lcomm	Lt_0484,4
.balign 4
	.lcomm	Lt_0485,4
.balign 4
	.lcomm	Lt_048B,4

.section .text
.balign 16
HFLUSHLOAD:
.type HFLUSHLOAD, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0332:
cmp dword ptr [ebp+12], 0
je .Lt_0335
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax]
mov dword ptr [Lt_048F], ebx
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 480
je .Lt_0336
mov dword ptr [ebp-4], 22
jmp .Lt_048C
.Lt_0336:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 31
mov dword ptr [ebp-4], ebx
.Lt_048C:
mov ebx, dword ptr [ebp-4]
mov dword ptr [Lt_0490], ebx
cmp dword ptr [Lt_0490], 22
jne .Lt_0339
mov dword ptr [Lt_0490], 11
.Lt_0339:
.Lt_0338:
mov ebx, dword ptr [Lt_0490]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx]
mov dword ptr [Lt_0491], eax
jmp .Lt_0334
.Lt_0335:
mov dword ptr [Lt_048F], -1
mov dword ptr [Lt_0490], -2147483648
mov dword ptr [Lt_0491], -1
.Lt_0334:
push dword ptr [ebp+12]
call HLOADIDX
add esp, 4
cmp dword ptr [ebp+8], 84
jne .Lt_033B
.Lt_033C:
mov eax, dword ptr [Lt_0490]
cmp eax, 12
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [Lt_0490]
cmp ebx, 13
sete bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
je .Lt_033E
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+52]
mov dword ptr [Lt_0494], eax
push dword ptr [SYMB_DTYPETB+200]
push dword ptr [ebp+12]
push dword ptr [Lt_0494]
mov eax, dword ptr [Lt_0491]
push dword ptr [REGTB+eax*4]
mov eax, dword ptr [Lt_0491]
mov ebx, dword ptr [REGTB+eax*4]
call dword ptr [ebx]
add esp, 16
mov dword ptr [Lt_0490], 7
.Lt_033E:
.Lt_033D:
mov ebx, dword ptr [Lt_0490]
and ebx, 480
je .Lt_033F
mov dword ptr [ebp-4], 22
jmp .Lt_048D
.Lt_033F:
mov ebx, dword ptr [Lt_0490]
and ebx, 31
mov dword ptr [ebp-4], ebx
.Lt_048D:
mov ebx, dword ptr [ebp-4]
imul ebx, 28
push dword ptr [SYMB_DTYPETB+ebx+4]
push 0
push dword ptr [ebp+12]
mov ebx, dword ptr [Lt_0491]
push dword ptr [REGTB+ebx*4]
mov ebx, dword ptr [Lt_0491]
mov eax, dword ptr [REGTB+ebx*4]
call dword ptr [eax]
add esp, 16
jmp .Lt_033A
.Lt_033B:
cmp dword ptr [ebp+8], 85
jne .Lt_0341
.Lt_0342:
cmp dword ptr [Lt_048F], 4
jne .Lt_0344
mov eax, dword ptr [Lt_0490]
cmp eax, 12
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [Lt_0490]
cmp ebx, 13
sete bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
je .Lt_0346
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+52]
mov dword ptr [Lt_0494], eax
push dword ptr [SYMB_DTYPETB+200]
push dword ptr [ebp+12]
push dword ptr [Lt_0494]
mov eax, dword ptr [Lt_0491]
push dword ptr [REGTB+eax*4]
mov eax, dword ptr [Lt_0491]
mov ebx, dword ptr [REGTB+eax*4]
call dword ptr [ebx]
add esp, 16
push dword ptr [SYMB_DTYPETB+200]
push 0
push dword ptr [ebp+12]
mov ebx, dword ptr [Lt_0491]
push dword ptr [REGTB+ebx*4]
mov ebx, dword ptr [Lt_0491]
mov eax, dword ptr [REGTB+ebx*4]
call dword ptr [eax]
add esp, 16
mov dword ptr [Lt_0497], eax
jmp .Lt_0345
.Lt_0346:
mov eax, dword ptr [Lt_0490]
and eax, 480
je .Lt_0347
mov dword ptr [ebp-4], 22
jmp .Lt_048E
.Lt_0347:
mov eax, dword ptr [Lt_0490]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_048E:
mov eax, dword ptr [ebp-4]
imul eax, 28
push dword ptr [SYMB_DTYPETB+eax+4]
push 0
push dword ptr [ebp+12]
mov eax, dword ptr [Lt_0491]
push dword ptr [REGTB+eax*4]
mov eax, dword ptr [Lt_0491]
mov ebx, dword ptr [REGTB+eax*4]
call dword ptr [ebx]
add esp, 16
mov dword ptr [Lt_0497], eax
.Lt_0345:
jmp .Lt_0343
.Lt_0344:
mov dword ptr [Lt_0497], -1
.Lt_0343:
push offset Lt_0498
push offset Lt_0499
push dword ptr [Lt_0491]
push dword ptr [Lt_0490]
call dword ptr [EMIT+196]
add esp, 16
mov eax, dword ptr [Lt_0497]
cmp dword ptr [Lt_0499], eax
je .Lt_034A
mov eax, dword ptr [Lt_0490]
cmp eax, 12
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [Lt_0490]
cmp ebx, 13
sete bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
je .Lt_034C
mov ebx, dword ptr [ebp+16]
mov eax, dword ptr [ebx+52]
mov dword ptr [Lt_0494], eax
push dword ptr [ebp+16]
push dword ptr [Lt_0494]
push dword ptr [Lt_0498]
mov eax, dword ptr [Lt_0491]
push dword ptr [REGTB+eax*4]
mov eax, dword ptr [Lt_0491]
mov ebx, dword ptr [REGTB+eax*4]
call dword ptr [ebx+8]
add esp, 16
mov ebx, dword ptr [Lt_0494]
mov dword ptr [ebx+12], eax
mov eax, dword ptr [Lt_0494]
mov dword ptr [eax], 4
.Lt_034C:
.Lt_034B:
push 0
push dword ptr [ebp+16]
push dword ptr [Lt_0499]
mov eax, dword ptr [Lt_0491]
push dword ptr [REGTB+eax*4]
mov eax, dword ptr [Lt_0491]
mov ebx, dword ptr [REGTB+eax*4]
call dword ptr [ebx+8]
add esp, 16
mov ebx, dword ptr [ebp+16]
mov dword ptr [ebx+12], eax
mov eax, dword ptr [ebp+16]
mov dword ptr [eax], 4
mov eax, dword ptr [AST+40]
mov ebx, dword ptr [eax+12]
cmp dword ptr [ebx+92], 1
je .Lt_034E
mov ebx, dword ptr [ebp+16]
mov dword ptr [ebx+16], 0
.Lt_034E:
.Lt_034D:
push dword ptr [ebp+12]
push dword ptr [ebp+16]
call EMITLOAD
add esp, 8
push 0
push dword ptr [ebp+16]
call HFREEREG
add esp, 8
.Lt_034A:
.Lt_0349:
.Lt_0341:
.Lt_033A:
push 0
push dword ptr [ebp+12]
call HFREEREG
add esp, 8
.Lt_0333:
pop ebx
mov esp, ebp
pop ebp
ret
.size HFLUSHLOAD, .-HFLUSHLOAD

.section .bss
.balign 4
	.lcomm	Lt_048F,4
.balign 4
	.lcomm	Lt_0490,4
.balign 4
	.lcomm	Lt_0491,4
.balign 4
	.lcomm	Lt_0497,4
.balign 4
	.lcomm	Lt_0494,4
.balign 4
	.lcomm	Lt_0499,4
.balign 4
	.lcomm	Lt_0498,4

.section .text
.balign 16
HFLUSHCONVERT:
.type HFLUSHCONVERT, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
.Lt_034F:
cmp dword ptr [ebp+12], 0
je .Lt_0352
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax]
mov dword ptr [Lt_04A2], ebx
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 480
je .Lt_0353
mov dword ptr [ebp-4], 22
jmp .Lt_049C
.Lt_0353:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 31
mov dword ptr [ebp-4], ebx
.Lt_049C:
mov ebx, dword ptr [ebp-4]
mov dword ptr [Lt_04A3], ebx
cmp dword ptr [Lt_04A3], 22
jne .Lt_0356
mov dword ptr [Lt_04A3], 11
.Lt_0356:
.Lt_0355:
mov ebx, dword ptr [Lt_04A3]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx]
mov dword ptr [Lt_04A4], eax
jmp .Lt_0351
.Lt_0352:
mov dword ptr [Lt_04A2], -1
mov dword ptr [Lt_04A3], -2147483648
mov dword ptr [Lt_04A4], -1
.Lt_0351:
cmp dword ptr [ebp+16], 0
je .Lt_0358
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax]
mov dword ptr [Lt_04A5], ebx
mov ebx, dword ptr [ebp+16]
mov eax, dword ptr [ebx+4]
and eax, 480
je .Lt_0359
mov dword ptr [ebp-4], 22
jmp .Lt_049D
.Lt_0359:
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+4]
and ebx, 31
mov dword ptr [ebp-4], ebx
.Lt_049D:
mov ebx, dword ptr [ebp-4]
mov dword ptr [Lt_04A6], ebx
cmp dword ptr [Lt_04A6], 22
jne .Lt_035C
mov dword ptr [Lt_04A6], 11
.Lt_035C:
.Lt_035B:
mov ebx, dword ptr [Lt_04A6]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx]
mov dword ptr [Lt_04A7], eax
jmp .Lt_0357
.Lt_0358:
mov dword ptr [Lt_04A5], -1
mov dword ptr [Lt_04A6], -2147483648
mov dword ptr [Lt_04A7], -1
.Lt_0357:
push dword ptr [ebp+12]
call HLOADIDX
add esp, 4
push dword ptr [ebp+16]
call HLOADIDX
add esp, 4
mov dword ptr [Lt_04A8], 0
mov eax, dword ptr [Lt_04A7]
cmp eax, dword ptr [Lt_04A4]
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [Lt_04A5]
cmp ebx, 4
sete bl
shr ebx, 1
sbb ebx, ebx
and eax, ebx
je .Lt_035E
cmp dword ptr [Lt_04A7], 1
jne .Lt_0360
mov ebx, dword ptr [IR+284]
and ebx, 1
test ebx, ebx
je .Lt_0362
mov ebx, dword ptr [ebp+16]
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [ebx+16]
mov dword ptr [eax+16], ecx
mov ecx, dword ptr [ebp+16]
cmp dword ptr [ecx+16], 0
jne .Lt_0364
jmp .Lt_0350
.Lt_0364:
jmp .Lt_0361
.Lt_0362:
mov ecx, dword ptr [ebp+16]
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [ecx+12]
mov dword ptr [eax+12], ebx
mov ebx, dword ptr [ebp+16]
mov dword ptr [ebx+12], -1
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx], 4
push 0
push dword ptr [ebp+12]
mov ebx, dword ptr [ebp+12]
push dword ptr [ebx+12]
mov ebx, dword ptr [Lt_04A4]
push dword ptr [REGTB+ebx*4]
mov ebx, dword ptr [Lt_04A4]
mov eax, dword ptr [REGTB+ebx*4]
call dword ptr [eax+20]
add esp, 16
jmp .Lt_0350
.Lt_0361:
.Lt_0360:
.Lt_035F:
push dword ptr [ebp+16]
call dword ptr [IR+268]
add esp, 4
cmp eax, 2147483647
jne .Lt_0366
mov eax, dword ptr [Lt_04A3]
and eax, 480
je .Lt_0367
mov dword ptr [ebp-4], 22
jmp .Lt_049E
.Lt_0367:
mov eax, dword ptr [Lt_04A3]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_049E:
mov eax, dword ptr [ebp-4]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+4]
mov dword ptr [ebp-8], ebx
cmp dword ptr [ebp-8], 1
je .Lt_036C
.Lt_036D:
cmp dword ptr [ebp-8], 8
jne .Lt_036B
.Lt_036C:
jmp .Lt_0369
.Lt_036B:
mov ebx, dword ptr [Lt_04A6]
and ebx, 480
je .Lt_036F
mov dword ptr [ebp-12], 22
jmp .Lt_049F
.Lt_036F:
mov ebx, dword ptr [Lt_04A6]
and ebx, 31
mov dword ptr [ebp-12], ebx
.Lt_049F:
mov ebx, dword ptr [ebp-12]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx+4]
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 1
je .Lt_0374
.Lt_0375:
cmp dword ptr [ebp-16], 8
jne .Lt_0373
.Lt_0374:
jmp .Lt_0371
.Lt_0373:
mov dword ptr [Lt_04A8], -1
.Lt_0376:
.Lt_0371:
.Lt_036E:
.Lt_0369:
.Lt_0366:
.Lt_0365:
.Lt_035E:
.Lt_035D:
cmp dword ptr [Lt_04A8], 0
je .Lt_0378
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [ebp+12]
mov ecx, dword ptr [eax+12]
mov dword ptr [ebx+12], ecx
mov ecx, dword ptr [ebp+12]
mov dword ptr [ecx], 4
push 0
push dword ptr [ebp+12]
mov ecx, dword ptr [ebp+12]
push dword ptr [ecx+12]
mov ecx, dword ptr [Lt_04A4]
push dword ptr [REGTB+ecx*4]
mov ecx, dword ptr [Lt_04A4]
mov ebx, dword ptr [REGTB+ecx*4]
call dword ptr [ebx+20]
add esp, 16
jmp .Lt_0377
.Lt_0378:
cmp dword ptr [Lt_04A5], 4
jne .Lt_037A
mov ebx, dword ptr [Lt_04A6]
cmp ebx, 12
sete bl
shr ebx, 1
sbb ebx, ebx
mov ecx, dword ptr [Lt_04A6]
cmp ecx, 13
sete cl
shr ecx, 1
sbb ecx, ecx
or ebx, ecx
je .Lt_037C
mov ecx, dword ptr [ebp+16]
mov ebx, dword ptr [ecx+52]
mov dword ptr [Lt_04AD], ebx
push dword ptr [SYMB_DTYPETB+200]
push dword ptr [ebp+16]
push dword ptr [Lt_04AD]
mov ebx, dword ptr [Lt_04A7]
push dword ptr [REGTB+ebx*4]
mov ebx, dword ptr [Lt_04A7]
mov ecx, dword ptr [REGTB+ebx*4]
call dword ptr [ecx]
add esp, 16
mov dword ptr [Lt_04A6], 7
.Lt_037C:
.Lt_037B:
mov ecx, dword ptr [Lt_04A6]
and ecx, 480
je .Lt_037D
mov dword ptr [ebp-8], 22
jmp .Lt_04A0
.Lt_037D:
mov ecx, dword ptr [Lt_04A6]
and ecx, 31
mov dword ptr [ebp-8], ecx
.Lt_04A0:
mov ecx, dword ptr [ebp-8]
imul ecx, 28
push dword ptr [SYMB_DTYPETB+ecx+4]
push 0
push dword ptr [ebp+16]
mov ecx, dword ptr [Lt_04A7]
push dword ptr [REGTB+ecx*4]
mov ecx, dword ptr [Lt_04A7]
mov ebx, dword ptr [REGTB+ecx*4]
call dword ptr [ebx]
add esp, 16
.Lt_037A:
.Lt_0379:
mov ebx, dword ptr [Lt_04A3]
cmp ebx, 12
sete bl
shr ebx, 1
sbb ebx, ebx
mov ecx, dword ptr [Lt_04A3]
cmp ecx, 13
sete cl
shr ecx, 1
sbb ecx, ecx
or ebx, ecx
je .Lt_0380
mov ecx, dword ptr [ebp+12]
mov ebx, dword ptr [ecx+52]
mov dword ptr [Lt_04AD], ebx
push dword ptr [SYMB_DTYPETB+200]
push dword ptr [ebp+12]
push dword ptr [Lt_04AD]
mov ebx, dword ptr [Lt_04A4]
push dword ptr [REGTB+ebx*4]
mov ebx, dword ptr [Lt_04A4]
mov ecx, dword ptr [REGTB+ebx*4]
call dword ptr [ecx+4]
add esp, 16
mov ecx, dword ptr [Lt_04AD]
mov dword ptr [ecx+12], eax
mov eax, dword ptr [Lt_04AD]
mov dword ptr [eax], 4
mov dword ptr [Lt_04A3], 7
.Lt_0380:
.Lt_037F:
mov eax, dword ptr [Lt_04A3]
and eax, 480
je .Lt_0381
mov dword ptr [ebp-4], 22
jmp .Lt_04A1
.Lt_0381:
mov eax, dword ptr [Lt_04A3]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_04A1:
mov eax, dword ptr [ebp-4]
imul eax, 28
push dword ptr [SYMB_DTYPETB+eax+4]
push 0
push dword ptr [ebp+12]
mov eax, dword ptr [Lt_04A4]
push dword ptr [REGTB+eax*4]
mov eax, dword ptr [Lt_04A4]
mov ecx, dword ptr [REGTB+eax*4]
call dword ptr [ecx+4]
add esp, 16
mov ecx, dword ptr [ebp+12]
mov dword ptr [ecx+12], eax
mov eax, dword ptr [ebp+12]
mov dword ptr [eax], 4
.Lt_0377:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call EMITLOAD
add esp, 8
cmp dword ptr [Lt_04A8], 0
jne .Lt_0384
push 0
push dword ptr [ebp+16]
call HFREEREG
add esp, 8
jmp .Lt_0383
.Lt_0384:
mov eax, dword ptr [ebp+16]
mov dword ptr [eax+12], -1
.Lt_0383:
push 0
push dword ptr [ebp+12]
call HFREEREG
add esp, 8
.Lt_0350:
pop ebx
mov esp, ebp
pop ebp
ret
.size HFLUSHCONVERT, .-HFLUSHCONVERT

.section .bss
.balign 4
	.lcomm	Lt_04A2,4
.balign 4
	.lcomm	Lt_04A3,4
.balign 4
	.lcomm	Lt_04A4,4
.balign 4
	.lcomm	Lt_04A5,4
.balign 4
	.lcomm	Lt_04A6,4
.balign 4
	.lcomm	Lt_04A7,4
.balign 4
	.lcomm	Lt_04A8,4
.balign 4
	.lcomm	Lt_04AD,4

.section .text
.balign 16
HFLUSHADDR:
.type HFLUSHADDR, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0385:
cmp dword ptr [ebp+12], 0
je .Lt_0388
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax]
mov dword ptr [Lt_04B4], ebx
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 480
je .Lt_0389
mov dword ptr [ebp-4], 22
jmp .Lt_04B0
.Lt_0389:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 31
mov dword ptr [ebp-4], ebx
.Lt_04B0:
mov ebx, dword ptr [ebp-4]
mov dword ptr [Lt_04B5], ebx
cmp dword ptr [Lt_04B5], 22
jne .Lt_038C
mov dword ptr [Lt_04B5], 11
.Lt_038C:
.Lt_038B:
mov ebx, dword ptr [Lt_04B5]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx]
mov dword ptr [Lt_04B6], eax
jmp .Lt_0387
.Lt_0388:
mov dword ptr [Lt_04B4], -1
mov dword ptr [Lt_04B5], -2147483648
mov dword ptr [Lt_04B6], -1
.Lt_0387:
cmp dword ptr [ebp+16], 0
je .Lt_038E
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax]
mov dword ptr [Lt_04B7], ebx
mov ebx, dword ptr [ebp+16]
mov eax, dword ptr [ebx+4]
and eax, 480
je .Lt_038F
mov dword ptr [ebp-4], 22
jmp .Lt_04B1
.Lt_038F:
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+4]
and ebx, 31
mov dword ptr [ebp-4], ebx
.Lt_04B1:
mov ebx, dword ptr [ebp-4]
mov dword ptr [Lt_04B8], ebx
cmp dword ptr [Lt_04B8], 22
jne .Lt_0392
mov dword ptr [Lt_04B8], 11
.Lt_0392:
.Lt_0391:
mov ebx, dword ptr [Lt_04B8]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx]
mov dword ptr [Lt_04B9], eax
jmp .Lt_038D
.Lt_038E:
mov dword ptr [Lt_04B7], -1
mov dword ptr [Lt_04B8], -2147483648
mov dword ptr [Lt_04B9], -1
.Lt_038D:
push dword ptr [ebp+12]
call HLOADIDX
add esp, 4
push dword ptr [ebp+16]
call HLOADIDX
add esp, 4
cmp dword ptr [Lt_04B4], 4
jne .Lt_0394
mov eax, dword ptr [Lt_04B5]
and eax, 480
je .Lt_0395
mov dword ptr [ebp-4], 22
jmp .Lt_04B2
.Lt_0395:
mov eax, dword ptr [Lt_04B5]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_04B2:
mov eax, dword ptr [ebp-4]
imul eax, 28
push dword ptr [SYMB_DTYPETB+eax+4]
push 0
push dword ptr [ebp+12]
mov eax, dword ptr [Lt_04B6]
push dword ptr [REGTB+eax*4]
mov eax, dword ptr [Lt_04B6]
mov ebx, dword ptr [REGTB+eax*4]
call dword ptr [ebx]
add esp, 16
.Lt_0394:
.Lt_0393:
cmp dword ptr [Lt_04B7], 4
jne .Lt_0398
mov ebx, dword ptr [Lt_04B8]
and ebx, 480
je .Lt_0399
mov dword ptr [ebp-4], 22
jmp .Lt_04B3
.Lt_0399:
mov ebx, dword ptr [Lt_04B8]
and ebx, 31
mov dword ptr [ebp-4], ebx
.Lt_04B3:
mov ebx, dword ptr [ebp-4]
imul ebx, 28
push dword ptr [SYMB_DTYPETB+ebx+4]
push 0
push dword ptr [ebp+16]
mov ebx, dword ptr [Lt_04B9]
push dword ptr [REGTB+ebx*4]
mov ebx, dword ptr [Lt_04B9]
mov eax, dword ptr [REGTB+ebx*4]
call dword ptr [eax]
add esp, 16
.Lt_0398:
.Lt_0397:
cmp dword ptr [ebp+8], 22
jne .Lt_039C
.Lt_039D:
push dword ptr [ebp+12]
push dword ptr [ebp+16]
call EMITADDROF
add esp, 8
jmp .Lt_039B
.Lt_039C:
cmp dword ptr [ebp+8], 76
jne .Lt_039E
.Lt_039F:
push dword ptr [ebp+12]
push dword ptr [ebp+16]
call EMITDEREF
add esp, 8
.Lt_039E:
.Lt_039B:
push 0
push dword ptr [ebp+12]
call HFREEREG
add esp, 8
push 0
push dword ptr [ebp+16]
call HFREEREG
add esp, 8
.Lt_0386:
pop ebx
mov esp, ebp
pop ebp
ret
.size HFLUSHADDR, .-HFLUSHADDR

.section .bss
.balign 4
	.lcomm	Lt_04B4,4
.balign 4
	.lcomm	Lt_04B5,4
.balign 4
	.lcomm	Lt_04B6,4
.balign 4
	.lcomm	Lt_04B7,4
.balign 4
	.lcomm	Lt_04B8,4
.balign 4
	.lcomm	Lt_04B9,4

.section .text
.balign 16
HFLUSHMEM:
.type HFLUSHMEM, @function
push ebp
mov ebp, esp
sub esp, 4
.Lt_03A0:
push dword ptr [ebp+12]
call HLOADIDX
add esp, 4
push dword ptr [ebp+16]
call HLOADIDX
add esp, 4
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
jmp .Lt_03A3
.Lt_03A5:
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call EMITMEMMOVE
add esp, 12
jmp .Lt_03A2
.Lt_03A6:
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call EMITMEMSWAP
add esp, 12
jmp .Lt_03A2
.Lt_03A7:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call EMITMEMCLEAR
add esp, 8
jmp .Lt_03A2
.Lt_03A8:
push dword ptr [ebp+24]
push dword ptr [ebp+20]
call EMITSTKCLEAR
add esp, 8
jmp .Lt_03A2
.Lt_03A3:
mov eax, dword ptr [ebp-4]
add eax, 4294967192
cmp eax, 3
ja .Lt_03A2
mov eax, dword ptr [ebp-4]
jmp dword ptr [.LT_03A9+eax*4-416]
.LT_03A9:
.int .Lt_03A5
.int .Lt_03A6
.int .Lt_03A7
.int .Lt_03A8
.Lt_03A2:
push 0
push dword ptr [ebp+12]
call HFREEREG
add esp, 8
push 0
push dword ptr [ebp+16]
call HFREEREG
add esp, 8
.Lt_03A1:
mov esp, ebp
pop ebp
ret
.size HFLUSHMEM, .-HFLUSHMEM
.balign 16
HFLUSHDBG:
.type HFLUSHDBG, @function
push ebp
mov ebp, esp
sub esp, 4
.Lt_03AA:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
jmp .Lt_03AD
.Lt_03AF:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call EMITDBGLINEBEGIN
add esp, 8
jmp .Lt_03AC
.Lt_03B0:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call EMITDBGLINEEND
add esp, 8
jmp .Lt_03AC
.Lt_03B1:
push dword ptr [ebp+16]
call EMITDBGSCOPEBEGIN
add esp, 4
jmp .Lt_03AC
.Lt_03B2:
push dword ptr [ebp+16]
call EMITDBGSCOPEEND
add esp, 4
jmp .Lt_03AC
.Lt_03AD:
mov eax, dword ptr [ebp-4]
add eax, 4294967188
cmp eax, 3
ja .Lt_03AC
mov eax, dword ptr [ebp-4]
jmp dword ptr [.LT_03B3+eax*4-432]
.LT_03B3:
.int .Lt_03AF
.int .Lt_03B0
.int .Lt_03B1
.int .Lt_03B2
.Lt_03AC:
.Lt_03AB:
mov esp, ebp
pop ebp
ret
.size HFLUSHDBG, .-HFLUSHDBG
.balign 16
HFLUSHLIT:
.type HFLUSHLIT, @function
push ebp
mov ebp, esp
.Lt_03B4:
cmp dword ptr [ebp+8], 112
jne .Lt_03B7
.Lt_03B8:
push dword ptr [ebp+12]
call EMITCOMMENT
add esp, 4
jmp .Lt_03B6
.Lt_03B7:
cmp dword ptr [ebp+8], 113
jne .Lt_03B9
.Lt_03BA:
push dword ptr [ebp+12]
call EMITASM
add esp, 4
.Lt_03B9:
.Lt_03B6:
cmp dword ptr [ebp+12], 0
je .Lt_03BC
push dword ptr [ebp+12]
call free
add esp, 4
.Lt_03BC:
.Lt_03BB:
.Lt_03B5:
mov esp, ebp
pop ebp
ret
.size HFLUSHLIT, .-HFLUSHLIT
.balign 16
HFREEIDX:
.type HFREEIDX, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_03BD:
mov dword ptr [ebp-4], 0
cmp dword ptr [ebp+8], 0
jne .Lt_03C0
jmp .Lt_03BE
.Lt_03C0:
.Lt_03BF:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+48]
mov dword ptr [ebp-4], ebx
cmp dword ptr [ebp-4], 0
je .Lt_03C2
mov ebx, dword ptr [ebp-4]
cmp dword ptr [ebx+12], -1
je .Lt_03C4
push dword ptr [ebp+12]
push dword ptr [ebp-4]
call HFREEREG
add esp, 8
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+48], 0
.Lt_03C4:
.Lt_03C3:
.Lt_03C2:
.Lt_03C1:
.Lt_03BE:
pop ebx
mov esp, ebp
pop ebp
ret
.size HFREEIDX, .-HFREEIDX
.balign 16
HFREEREG:
.type HFREEREG, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
.Lt_03C5:
mov dword ptr [ebp-4], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-12], 0
cmp dword ptr [ebp+8], 0
jne .Lt_03C8
jmp .Lt_03C6
.Lt_03C8:
.Lt_03C7:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HFREEIDX
add esp, 8
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 4
je .Lt_03CA
jmp .Lt_03C6
.Lt_03CA:
.Lt_03C9:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+12], -1
jne .Lt_03CC
jmp .Lt_03C6
.Lt_03CC:
.Lt_03CB:
mov dword ptr [ebp-8], 2147483647
cmp dword ptr [ebp+12], 0
jne .Lt_03CE
push dword ptr [ebp+8]
call dword ptr [IR+268]
add esp, 4
mov dword ptr [ebp-8], eax
.Lt_03CE:
.Lt_03CD:
cmp dword ptr [ebp-8], 2147483647
jne .Lt_03D0
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+52], 0
je .Lt_03D2
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+52]
mov dword ptr [ebp-12], ebx
mov ebx, dword ptr [ebp-12]
cmp dword ptr [ebx+12], -1
je .Lt_03D4
push -1
push dword ptr [ebp-12]
call HFREEREG
add esp, 8
.Lt_03D4:
.Lt_03D3:
.Lt_03D2:
.Lt_03D1:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 480
je .Lt_03D5
mov dword ptr [ebp-16], 22
jmp .Lt_04BA
.Lt_03D5:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 31
mov dword ptr [ebp-16], ebx
.Lt_04BA:
mov ebx, dword ptr [ebp-16]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx]
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp+8]
push dword ptr [eax+12]
mov eax, dword ptr [ebp-4]
push dword ptr [REGTB+eax*4]
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [REGTB+eax*4]
call dword ptr [ebx+12]
add esp, 8
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+12], -1
.Lt_03D0:
.Lt_03CF:
.Lt_03C6:
pop ebx
mov esp, ebp
pop ebp
ret
.size HFREEREG, .-HFREEREG
.balign 16
_GETDISTANCE:
.type _GETDISTANCE, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
mov dword ptr [ebp-4], 0
.Lt_03D7:
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-16], 0
cmp dword ptr [ebp+8], 0
jne .Lt_03DA
mov dword ptr [ebp-4], 2147483647
jmp .Lt_03D8
.Lt_03DA:
.Lt_03D9:
push dword ptr [CTX+60]
call FLISTGETNEXT
add esp, 4
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_03DC
mov dword ptr [ebp-4], 2147483647
jmp .Lt_03D8
.Lt_03DC:
.Lt_03DB:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+64]
mov eax, dword ptr [ebp-12]
mov ecx, dword ptr [ebx]
sub ecx, dword ptr [eax]
mov dword ptr [ebp-16], ecx
cmp dword ptr [ebp-16], 0
jge .Lt_03DE
mov dword ptr [ebp-4], 2147483647
jmp .Lt_03DD
.Lt_03DE:
mov ecx, dword ptr [ebp-16]
mov dword ptr [ebp-4], ecx
.Lt_03DD:
.Lt_03D8:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size _GETDISTANCE, .-_GETDISTANCE
.balign 16
_LOADVR:
.type _LOADVR, @function
push ebp
mov ebp, esp
sub esp, 68
push ebx
.Lt_03DF:
lea eax, [ebp-68]
push eax
push edi
mov edi, eax
xor eax, eax
mov ecx, 17
rep stosd
pop edi
pop eax
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax], 4
je .Lt_03E2
cmp dword ptr [ebp+16], 0
jne .Lt_03E4
mov dword ptr [ebp-68], 4
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-64], ebx
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebp-56], ebx
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+52]
mov dword ptr [ebp-16], eax
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+16]
mov dword ptr [ebp-52], ebx
push dword ptr [ebp+12]
lea ebx, [ebp-68]
push ebx
call EMITLOAD
add esp, 8
.Lt_03E4:
.Lt_03E3:
push -1
push dword ptr [ebp+12]
call HFREEIDX
add esp, 8
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx], 4
.Lt_03E2:
.Lt_03E1:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebp+8]
mov dword ptr [ebx+12], eax
mov eax, dword ptr [ENV+116]
cmp eax, 1
setge al
shr eax, 1
sbb eax, eax
cmp dword ptr [ebp+16], 0
setne bl
shr ebx, 1
sbb ebx, ebx
and eax, ebx
je .Lt_03E6
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx+16], 1
.Lt_03E6:
.Lt_03E5:
.Lt_03E0:
pop ebx
mov esp, ebp
pop ebp
ret
.size _LOADVR, .-_LOADVR
.balign 16
_STOREVR:
.type _STOREVR, @function
push ebp
mov ebp, esp
sub esp, 144
push ebx
push esi
.Lt_03E7:
cmp dword ptr [ebp+12], 0
je .Lt_03EA
mov eax, dword ptr [ebp+12]
mov dword ptr [ebp+8], eax
.Lt_03EA:
.Lt_03E9:
lea eax, [ebp-68]
push edi
mov edi, eax
mov esi, dword ptr [ebp+8]
mov ecx, 17
rep movsd
pop edi
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
cmp ebx, 12
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+4]
cmp ecx, 13
sete cl
shr ecx, 1
sbb ecx, ecx
or ebx, ecx
je .Lt_03EC
lea ecx, [ebp-136]
mov ebx, dword ptr [ebp+8]
push ecx
push edi
mov edi, ecx
mov esi, dword ptr [ebx+52]
mov ecx, 17
rep movsd
pop edi
pop ecx
lea ebx, [ebp-136]
mov dword ptr [ebp-16], ebx
.Lt_03EC:
.Lt_03EB:
push dword ptr [ebp+8]
call dword ptr [IR+268]
add esp, 4
cmp eax, 2147483647
je .Lt_03EE
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+4]
call SYMBADDANDALLOCATETEMPVAR
add esp, 4
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+32], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+32]
mov eax, dword ptr [ebp+8]
mov esi, dword ptr [ebx+44]
mov ecx, dword ptr [ebx+48]
mov dword ptr [eax+36], esi
mov dword ptr [eax+40], ecx
mov esi, dword ptr [ebp+8]
mov dword ptr [esi+12], -1
mov esi, dword ptr [ebp+8]
mov ecx, dword ptr [esi+4]
cmp ecx, 12
sete cl
shr ecx, 1
sbb ecx, ecx
mov esi, dword ptr [ebp+8]
mov eax, dword ptr [esi+4]
cmp eax, 13
sete al
shr eax, 1
sbb eax, eax
or ecx, eax
je .Lt_03F0
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+52]
mov dword ptr [ecx+12], -1
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ecx+52]
mov dword ptr [eax], 1
mov eax, dword ptr [ebp+8]
mov esi, dword ptr [eax+36]
mov ecx, dword ptr [eax+40]
add esi, 4
adc ecx, 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+52]
mov dword ptr [ebx+36], esi
mov dword ptr [ebx+40], ecx
.Lt_03F0:
.Lt_03EF:
cmp dword ptr [ENV+116], 1
jl .Lt_03F2
mov esi, dword ptr [ebp+8]
mov dword ptr [esi+16], 1
.Lt_03F2:
.Lt_03F1:
lea esi, [ebp-68]
push esi
push dword ptr [ebp+8]
call EMITSTORE
add esp, 8
.Lt_03EE:
.Lt_03ED:
mov esi, dword ptr [ebp-64]
cmp esi, 12
sete dl
mov esi, edx
shr esi, 1
sbb esi, esi
mov ecx, dword ptr [ebp-64]
cmp ecx, 13
sete cl
shr ecx, 1
sbb ecx, ecx
or esi, ecx
je .Lt_03F4
push dword ptr [ebp-124]
push dword ptr [REGTB]
mov ecx, dword ptr [REGTB]
call dword ptr [ecx+12]
add esp, 8
.Lt_03F4:
.Lt_03F3:
mov ecx, dword ptr [ebp-64]
and ecx, 480
je .Lt_03F5
mov dword ptr [ebp-144], 22
jmp .Lt_04BD
.Lt_03F5:
mov ecx, dword ptr [ebp-64]
and ecx, 31
mov dword ptr [ebp-144], ecx
.Lt_04BD:
mov ecx, dword ptr [ebp-144]
imul ecx, 28
mov esi, dword ptr [SYMB_DTYPETB+ecx]
mov dword ptr [ebp-140], esi
push dword ptr [ebp-56]
mov esi, dword ptr [ebp-140]
push dword ptr [REGTB+esi*4]
mov esi, dword ptr [ebp-140]
mov ecx, dword ptr [REGTB+esi*4]
call dword ptr [ecx+12]
add esp, 8
.Lt_03E8:
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size _STOREVR, .-_STOREVR
.balign 16
_XCHGTOS:
.type _XCHGTOS, @function
push ebp
mov ebp, esp
.Lt_03F7:
mov dword ptr [Lt_04C4], 4
mov dword ptr [Lt_04C4+4], 15
mov eax, dword ptr [ebp+8]
mov dword ptr [Lt_04C4+12], eax
push offset Lt_04C4
call EMITXCHGTOS
add esp, 4
.Lt_03F8:
mov esp, ebp
pop ebp
ret
.size _XCHGTOS, .-_XCHGTOS

.section .bss
.balign 4
	.lcomm	Lt_04C4,68

.section .text
.balign 16
_GLOBAL__I:
.type _GLOBAL__I, @function
.Lt_03FA:
push offset CTX
call _ZN9IRTAC_CTXC1Ev
add esp, 4
.Lt_03FB:
ret
.size _GLOBAL__I, .-_GLOBAL__I
.balign 16
_GLOBAL__D:
.type _GLOBAL__D, @function
.Lt_03FD:
push offset CTX
call _ZN9IRTAC_CTXD1Ev
add esp, 4
.Lt_03FE:
ret
.size _GLOBAL__D, .-_GLOBAL__D
	#FreeBASIC-1.01.0-source/src/compiler/ir-tac.bas' compilation took 0.04700103984214365 secs

.section .rodata
.balign 4
Lt_0000:	.ascii	"\0"

.section .data
.balign 4

.globl IRTAC_VTBL
IRTAC_VTBL:
.int _INIT
.int _END
.int _EMITBEGIN
.int _EMITEND
.int _GETOPTIONVALUE
.long 0
.int _PROCBEGIN
.int _PROCEND
.int _PROCALLOCARG
.int _PROCALLOCLOCAL
.int _PROCGETFRAMEREGNAME
.int _SCOPEBEGIN
.int _SCOPEEND
.int _PROCALLOCSTATICVARS
.int _EMITCONVERT
.int _EMITLABEL
.int _EMITLABELNF
.int _EMITRETURN
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
.int _EMITSTACK
.int _EMITADDR
.int _EMITCALL
.int _EMITCALLPTR
.int _EMITSTACKALIGN
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
.int _ALLOCVREG
.int _ALLOCVRIMM
.int _ALLOCVRIMMF
.int _ALLOCVRVAR
.int _ALLOCVRIDX
.int _ALLOCVRPTR
.int _ALLOCVROFS
.int _SETVREGDATATYPE
.int _GETDISTANCE
.int _LOADVR
.int _STOREVR
.int _XCHGTOS

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
	.lcomm	Lt_006B,32
.balign 4
	.lcomm	CTX,132
.balign 4
	.lcomm	REGTB,8

.section .rodata
.balign 4
Lt_010D:	.ascii	"+\0"

.section .ctors, "aw", @progbits
.int fb_ctor__irztac
.int _GLOBAL__I

.section .dtors, "aw", @progbits
.int _GLOBAL__D
