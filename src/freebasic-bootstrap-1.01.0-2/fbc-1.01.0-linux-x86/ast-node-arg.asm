	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/ast-node-arg.bas' compilation started at 14:16:33 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl HBUILDBYREFARG
HBUILDBYREFARG:
.type HBUILDBYREFARG, @function
push ebp
mov ebp, esp
push ebx
.Lt_008C:
mov eax, dword ptr [ebp+12]
push dword ptr [eax+56]
call ASTREMOVENOCONVCAST
add esp, 4
push eax
call ASTNEWADDROF
add esp, 4
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx+56], eax
push 0
push 0
mov eax, dword ptr [ebp+12]
push dword ptr [eax+56]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+28]
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+24]
and ebx, 31
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+24]
and ecx, 480
add ecx, 32
or ebx, ecx
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ecx+24]
and eax, 261632
sal eax, 1
or ebx, eax
push ebx
call ASTNEWCONV
add esp, 20
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx+56], eax
mov eax, dword ptr [ebp+12]
mov dword ptr [eax+20], 1
.Lt_008D:
pop ebx
mov esp, ebp
pop ebp
ret
.size HBUILDBYREFARG, .-HBUILDBYREFARG
.balign 16

.globl ASTNEWARG
ASTNEWARG:
.type ASTNEWARG, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
push esi
push edi
mov dword ptr [ebp-4], 0
.Lt_019B:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+12]
mov dword ptr [ebp-12], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp-12]
movsx ecx, word ptr [eax+64]
cmp dword ptr [ebx+24], ecx
jl .Lt_019E
mov ecx, dword ptr [ebp-12]
mov ebx, dword ptr [ecx+76]
mov dword ptr [ebp-16], ebx
jmp .Lt_019D
.Lt_019E:
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebx+28]
mov dword ptr [ebp-16], ecx
.Lt_019D:
cmp dword ptr [ebp+12], 0
jne .Lt_01A0
push dword ptr [ebp-16]
call HCREATEOPTARG
add esp, 4
mov dword ptr [ebp+12], eax
.Lt_01A0:
.Lt_019F:
cmp dword ptr [ebp+16], -2147483648
jne .Lt_01A2
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax+4]
mov dword ptr [ebp+16], ecx
.Lt_01A2:
.Lt_01A1:
mov ecx, dword ptr [ebp-12]
mov eax, dword ptr [ecx+8]
and eax, 32
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
sete al
shr eax, 1
sbb eax, eax
mov ecx, dword ptr [ebp-16]
mov ebx, dword ptr [ecx+8]
and ebx, 33554432
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
mov ebx, dword ptr [ebp-16]
mov ecx, dword ptr [ebx+4]
and ecx, 2048
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
mov ebx, dword ptr [ebp-12]
mov esi, dword ptr [ebx+4]
and esi, 4096
test esi, esi
setne dl
mov esi, edx
shr esi, 1
sbb esi, esi
mov ebx, dword ptr [ebp-12]
mov edi, dword ptr [ebx+4]
and edi, 8192
test edi, edi
setne dl
mov edi, edx
shr edi, 1
sbb edi, edi
or esi, edi
and ecx, esi
not ecx
and eax, ecx
je .Lt_01A4
mov dword ptr [ebp-20], 0
lea ecx, [ebp-20]
push ecx
mov ecx, dword ptr [ebp-16]
push dword ptr [ecx+52]
mov ecx, dword ptr [ebp+12]
push dword ptr [ecx+8]
mov ecx, dword ptr [ebp-16]
push dword ptr [ecx+28]
push dword ptr [ebp+16]
mov ecx, dword ptr [ebp-16]
push dword ptr [ecx+24]
call SYMBCHECKCONSTASSIGN
add esp, 24
test eax, eax
jne .Lt_01A7
mov eax, dword ptr [ebp-16]
mov ecx, dword ptr [eax+4]
and ecx, 2048
test ecx, ecx
je .Lt_01A9
push 275
push 0
push 0
mov ecx, dword ptr [ebp+8]
push dword ptr [ecx+12]
call ERRREPORTPARAM
add esp, 16
jmp .Lt_01A8
.Lt_01A9:
push 180
push 0
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ecx+24]
inc eax
push eax
mov eax, dword ptr [ebp+8]
push dword ptr [eax+12]
call ERRREPORTPARAM
add esp, 16
.Lt_01A8:
jmp .Lt_019C
.Lt_01A7:
.Lt_01A6:
.Lt_01A4:
.Lt_01A3:
push 0
push -2147483648
push 22
call ASTNEWNODE
add esp, 12
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp-8]
mov ecx, dword ptr [ebp-16]
mov dword ptr [eax+12], ecx
mov ecx, dword ptr [ebp-8]
mov eax, dword ptr [ebp+12]
mov dword ptr [ecx+56], eax
mov eax, dword ptr [ebp-8]
mov ecx, dword ptr [ebp+20]
mov dword ptr [eax+20], ecx
mov ecx, dword ptr [ebp-8]
mov dword ptr [ecx+24], 0
mov dword ptr [ecx+28], 0
mov ecx, dword ptr [ebp-12]
cmp dword ptr [ecx+80], 4
jne .Lt_01AB
mov ecx, dword ptr [ebp+8]
cmp dword ptr [ecx+60], 0
jne .Lt_01AD
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ebp-8]
mov dword ptr [ecx+60], eax
jmp .Lt_01AC
.Lt_01AD:
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+32]
mov eax, dword ptr [ebp-8]
mov dword ptr [ecx+60], eax
.Lt_01AC:
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [ebp-8]
mov dword ptr [eax+32], ecx
mov ecx, dword ptr [ebp-8]
mov dword ptr [ecx+60], 0
jmp .Lt_01AA
.Lt_01AB:
mov ecx, dword ptr [ebp+8]
cmp dword ptr [ecx+60], 0
jne .Lt_01AF
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ebp-8]
mov dword ptr [ecx+32], eax
.Lt_01AF:
.Lt_01AE:
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [ebp-8]
mov esi, dword ptr [eax+60]
mov dword ptr [ecx+60], esi
mov esi, dword ptr [ebp+8]
mov ecx, dword ptr [ebp-8]
mov dword ptr [esi+60], ecx
.Lt_01AA:
push 0
mov ecx, dword ptr [ebp+8]
mov esi, dword ptr [ecx+24]
inc esi
push esi
push -1
mov esi, dword ptr [ebp+8]
push dword ptr [esi+12]
call ERRPUSHPARAMLOCATION
add esp, 16
push dword ptr [ebp-8]
push dword ptr [ebp-16]
push dword ptr [ebp+8]
call HCHECKPARAM
add esp, 12
test eax, eax
jne .Lt_01B1
call ERRPOPPARAMLOCATION
mov dword ptr [ebp-4], 0
jmp .Lt_019C
.Lt_01B1:
.Lt_01B0:
call ERRPOPPARAMLOCATION
mov eax, dword ptr [ebp+8]
inc dword ptr [eax+24]
mov eax, dword ptr [ebp+8]
mov esi, dword ptr [ebp-12]
movsx ecx, word ptr [esi+64]
cmp dword ptr [eax+24], ecx
jge .Lt_01B3
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ecx+28]
mov ecx, dword ptr [ebp+8]
mov esi, dword ptr [eax+160]
mov dword ptr [ecx+28], esi
.Lt_01B3:
.Lt_01B2:
.Lt_019C:
mov eax, dword ptr [ebp-4]
pop edi
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTNEWARG, .-ASTNEWARG
.balign 16

.globl ASTREPLACEINSTANCEARG
ASTREPLACEINSTANCEARG:
.type ASTREPLACEINSTANCEARG, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
.Lt_01BA:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+12]
mov dword ptr [ebp-4], ebx
mov ebx, dword ptr [ebp-4]
cmp dword ptr [ebx+80], 4
jne .Lt_01BD
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+60]
mov dword ptr [ebp-12], eax
jmp .Lt_01BC
.Lt_01BD:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+32]
mov dword ptr [ebp-12], ebx
.Lt_01BC:
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebx+72]
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-12]
push dword ptr [eax+56]
call ASTDELTREE
add esp, 4
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [ebp+12]
mov dword ptr [eax+56], ebx
mov ebx, dword ptr [ebp-12]
mov eax, dword ptr [ebp+16]
mov dword ptr [ebx+20], eax
mov eax, dword ptr [ebp-12]
mov dword ptr [eax+24], 0
mov dword ptr [eax+28], 0
push dword ptr [ebp-12]
push dword ptr [ebp-8]
push dword ptr [ebp+8]
call HCHECKPARAM
add esp, 12
.Lt_01BB:
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTREPLACEINSTANCEARG, .-ASTREPLACEINSTANCEARG
.balign 16
fb_ctor__astznodezarg:
.type fb_ctor__astznodezarg, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__astznodezarg, .-fb_ctor__astznodezarg
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
HALLOCTMPARRAYDESC:
.type HALLOCTMPARRAYDESC, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_0057:
push dword ptr [ebp+8]
call SYMBADDARRAYDESC
add esp, 4
mov dword ptr [ebp-8], eax
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push dword ptr [ebp-8]
call ASTBUILDARRAYDESCINITREE
add esp, 12
mov dword ptr [ebp-12], eax
push 0
push dword ptr [ebp-8]
call ASTNEWDECL
add esp, 8
mov ebx, dword ptr [ebp+16]
mov dword ptr [ebx], eax
push -1
push 64
push 0
push dword ptr [ebp-12]
push dword ptr [ebp-8]
call _Z15ASTTYPEINIFLUSHP8FBSYMBOLP7ASTNODEii
add esp, 16
push eax
mov eax, dword ptr [ebp+16]
push dword ptr [eax]
call ASTNEWLINK
add esp, 12
mov ebx, dword ptr [ebp+16]
mov dword ptr [ebx], eax
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0058:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HALLOCTMPARRAYDESC, .-HALLOCTMPARRAYDESC
.balign 16
HADDTOCOPYBACKLIST:
.type HADDTOCOPYBACKLIST, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0059:
lea eax, [AST+44]
push eax
call LISTNEWNODE
add esp, 4
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-8]
mov ecx, dword ptr [eax+36]
mov dword ptr [ebx+8], ecx
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-8]
mov dword ptr [ecx+36], ebx
mov ebx, dword ptr [ebp-8]
mov ecx, dword ptr [ebp+12]
mov dword ptr [ebx], ecx
push dword ptr [ebp+16]
call ASTCLONETREE
add esp, 4
push eax
call ASTOPTIMIZETREE
add esp, 4
mov ecx, dword ptr [ebp-8]
mov dword ptr [ecx+4], eax
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_005A:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HADDTOCOPYBACKLIST, .-HADDTOCOPYBACKLIST
.balign 16
HALLOCTMPSTRING:
.type HALLOCTMPSTRING, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_005B:
push 0
push 16
call SYMBADDTEMPVAR
add esp, 8
mov dword ptr [ebp-8], eax
push dword ptr [ebp-8]
call ASTDTORLISTADD
add esp, 4
cmp dword ptr [ebp+16], 0
je .Lt_005E
push dword ptr [ebp+12]
push dword ptr [ebp-8]
push dword ptr [ebp+8]
call HADDTOCOPYBACKLIST
add esp, 12
.Lt_005E:
.Lt_005D:
push 0
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp-8]
call ASTNEWVAR
add esp, 20
push eax
push 0
push 0
push dword ptr [ebp+12]
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp-8]
call ASTNEWVAR
add esp, 20
push eax
call RTLSTRASSIGN
add esp, 12
push eax
push dword ptr [ebp-8]
call ASTBUILDTEMPVARCLEAR
add esp, 4
push eax
call ASTNEWLINK
add esp, 12
push eax
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-4], eax
.Lt_005C:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size HALLOCTMPSTRING, .-HALLOCTMPSTRING
.balign 16
HALLOCTMPWSTRPTR:
.type HALLOCTMPWSTRPTR, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_005F:
push 0
push 38
call SYMBADDTEMPVAR
add esp, 8
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+8]
or ebx, 16777216
mov eax, ebx
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+8], eax
push dword ptr [ebp-8]
call ASTDTORLISTADD
add esp, 4
push 0
push 38
push dword ptr [ebp+12]
call ASTSETTYPE
add esp, 12
push 0
push dword ptr [ebp+12]
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp-8]
call ASTNEWVAR
add esp, 20
push eax
call ASTNEWASSIGN
add esp, 12
mov dword ptr [ebp-4], eax
.Lt_0060:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HALLOCTMPWSTRPTR, .-HALLOCTMPWSTRPTR
.balign 16
HCHECKARGFORSTRINGPARAM:
.type HCHECKARGFORSTRINGPARAM, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_0061:
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+4]
and ebx, 511
mov dword ptr [ebp-8], ebx
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx+20], 0
je .Lt_0064
mov ebx, dword ptr [ebp+12]
cmp dword ptr [ebx+52], 2
jne .Lt_0066
cmp dword ptr [ebp-8], 16
jne .Lt_0068
.Lt_0069:
mov ebx, dword ptr [ebp+16]
cmp dword ptr [ebx], 9
jne .Lt_006B
mov ebx, dword ptr [ebp+16]
mov dword ptr [ebp-4], ebx
jmp .Lt_0062
.Lt_006B:
.Lt_006A:
jmp .Lt_0067
.Lt_0068:
cmp dword ptr [ebp-8], 3
je .Lt_006D
.Lt_006E:
cmp dword ptr [ebp-8], 17
jne .Lt_006C
.Lt_006D:
push dword ptr [ebp+16]
call RTLSTRALLOCTMPDESC
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_0062
.Lt_006C:
.Lt_0067:
.Lt_0066:
.Lt_0065:
.Lt_0064:
.Lt_0063:
mov dword ptr [ebp-12], 0
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax+52], 2
jne .Lt_0070
cmp dword ptr [ebp-8], 17
jne .Lt_0072
.Lt_0073:
mov dword ptr [ebp-12], -1
jmp .Lt_0071
.Lt_0072:
cmp dword ptr [ebp-8], 16
jne .Lt_0074
.Lt_0075:
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax]
cmp ebx, 9
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_0077
mov ebx, dword ptr [ebp+16]
mov dword ptr [ebp-4], ebx
jmp .Lt_0062
.Lt_0077:
.Lt_0076:
.Lt_0074:
.Lt_0071:
.Lt_0070:
.Lt_006F:
push dword ptr [ebp-12]
push dword ptr [ebp+16]
push dword ptr [ebp+8]
call HALLOCTMPSTRING
add esp, 12
mov dword ptr [ebp-4], eax
.Lt_0062:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HCHECKARGFORSTRINGPARAM, .-HCHECKARGFORSTRINGPARAM
.balign 16
HSTRARGTOSTRPTRPARAM:
.type HSTRARGTOSTRPTRPARAM, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0078:
cmp dword ptr [ebp+16], 0
jne .Lt_007B
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+20], 0
je .Lt_007D
jmp .Lt_0079
.Lt_007D:
.Lt_007C:
.Lt_007B:
.Lt_007A:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+56]
mov eax, dword ptr [ebx+4]
and eax, 511
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 16
jne .Lt_0080
.Lt_0081:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+56]
cmp dword ptr [ebx], 9
jne .Lt_0083
push 0
mov ebx, dword ptr [ebp+12]
push dword ptr [ebx+56]
push dword ptr [ebp+8]
call HALLOCTMPSTRING
add esp, 12
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx+56], eax
.Lt_0083:
.Lt_0082:
mov eax, dword ptr [ebp+12]
push dword ptr [eax+56]
call ASTBUILDSTRPTR
add esp, 4
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx+56], eax
jmp .Lt_007E
.Lt_0080:
cmp dword ptr [ebp-4], 17
jne .Lt_0084
.Lt_0085:
push 0
push 0
mov eax, dword ptr [ebp+12]
push dword ptr [eax+56]
call ASTNEWADDROF
add esp, 4
push eax
push 0
push 35
call ASTNEWCONV
add esp, 20
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx+56], eax
jmp .Lt_007E
.Lt_0084:
cmp dword ptr [ebp-4], 3
jne .Lt_0086
.Lt_0087:
mov eax, dword ptr [ebp+12]
push dword ptr [eax+56]
call ASTNEWADDROF
add esp, 4
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx+56], eax
jmp .Lt_007E
.Lt_0086:
cmp dword ptr [ebp-4], 6
jne .Lt_0088
.Lt_0089:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+56]
cmp dword ptr [ebx], 9
jne .Lt_008B
mov ebx, dword ptr [ebp+12]
push dword ptr [ebx+56]
push dword ptr [ebp+8]
call HALLOCTMPWSTRPTR
add esp, 8
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx+56], eax
jmp .Lt_008A
.Lt_008B:
mov eax, dword ptr [ebp+12]
push dword ptr [eax+56]
call ASTNEWADDROF
add esp, 4
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx+56], eax
.Lt_008A:
.Lt_0088:
.Lt_007E:
.Lt_0079:
pop ebx
mov esp, ebp
pop ebp
ret
.size HSTRARGTOSTRPTRPARAM, .-HSTRARGTOSTRPTRPARAM
.balign 16
HCHECKBYREFPARAM:
.type HCHECKBYREFPARAM, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_008E:
mov eax, dword ptr [ebp+12]
push dword ptr [eax+56]
call ASTSKIPNOCONVCAST
add esp, 4
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp-4]
cmp dword ptr [eax], 9
jne .Lt_0091
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+4]
and ebx, 511
mov eax, ebx
mov dword ptr [ebp-8], eax
jmp .Lt_0093
.Lt_0095:
jmp .Lt_008F
jmp .Lt_0092
.Lt_0093:
mov eax, dword ptr [ebp-8]
add eax, 4294967293
cmp eax, 14
ja .Lt_0092
mov eax, dword ptr [ebp-8]
jmp dword ptr [.LT_0096+eax*4-12]
.LT_0096:
.int .Lt_0095
.int .Lt_0092
.int .Lt_0092
.int .Lt_0095
.int .Lt_0092
.int .Lt_0092
.int .Lt_0092
.int .Lt_0092
.int .Lt_0092
.int .Lt_0092
.int .Lt_0092
.int .Lt_0092
.int .Lt_0092
.int .Lt_0095
.int .Lt_0095
.Lt_0092:
.Lt_0091:
.Lt_0090:
push dword ptr [ebp-4]
call ASTCANTAKEADDROF
add esp, 4
test eax, eax
jne .Lt_0098
push 80
mov eax, dword ptr [ebp+12]
push dword ptr [eax+56]
push 0
push -2147483648
push 0
push 0
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+56]
push dword ptr [ebx+8]
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+56]
push dword ptr [eax+4]
call SYMBADDTEMPVAR
add esp, 8
push eax
call ASTNEWVAR
add esp, 20
push eax
call ASTNEWASSIGN
add esp, 12
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx+56], eax
.Lt_0098:
.Lt_0097:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HBUILDBYREFARG
add esp, 8
.Lt_008F:
pop ebx
mov esp, ebp
pop ebp
ret
.size HCHECKBYREFPARAM, .-HCHECKBYREFPARAM
.balign 16
HCHECKBYDESCDIMENSIONS:
.type HCHECKBYDESCDIMENSIONS, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_0099:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+12]
mov ecx, dword ptr [ebx+56]
cmp dword ptr [eax+64], ecx
je .Lt_009C
mov ecx, dword ptr [ebp+8]
cmp dword ptr [ecx+64], -1
jne .Lt_009E
jmp .Lt_009D
.Lt_009E:
mov ecx, dword ptr [ebp+12]
cmp dword ptr [ecx+56], -1
jne .Lt_009F
mov ecx, dword ptr [ebp+12]
mov eax, dword ptr [ecx+4]
and eax, 4
test eax, eax
je .Lt_00A1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+64]
push dword ptr [ebp+12]
call SYMBCHECKDYNAMICARRAYDIMENSIONS
add esp, 8
.Lt_00A1:
.Lt_00A0:
jmp .Lt_009D
.Lt_009F:
jmp .Lt_009A
.Lt_009D:
.Lt_009C:
.Lt_009B:
mov dword ptr [ebp-4], -1
.Lt_009A:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HCHECKBYDESCDIMENSIONS, .-HCHECKBYDESCDIMENSIONS
.balign 16
HCHECKBYDESCPARAM:
.type HCHECKBYDESCPARAM, @function
push ebp
mov ebp, esp
sub esp, 52
push ebx
mov dword ptr [ebp-4], 0
.Lt_00A2:
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+56]
mov eax, dword ptr [ebx+4]
and eax, 511
mov dword ptr [ebp-12], eax
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+16]
cmp dword ptr [eax+20], 1
jne .Lt_00A5
mov dword ptr [ebp-4], -1
jmp .Lt_00A3
.Lt_00A5:
.Lt_00A4:
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+56]
mov eax, dword ptr [ebx+12]
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 0
jne .Lt_00A7
jmp .Lt_00A3
.Lt_00A7:
.Lt_00A6:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+24]
and ebx, 511
mov dword ptr [ebp-16], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+20]
test eax, eax
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp-16]
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
and eax, ebx
je .Lt_00A9
mov ebx, dword ptr [ebp-12]
and ebx, 480
je .Lt_00AA
mov dword ptr [ebp-28], 22
jmp .Lt_01BF
.Lt_00AA:
mov ebx, dword ptr [ebp-12]
and ebx, 31
mov dword ptr [ebp-28], ebx
.Lt_01BF:
mov ebx, dword ptr [ebp-28]
imul ebx, 28
mov dword ptr [ebp-44], ebx
mov ebx, dword ptr [ebp-16]
and ebx, 480
je .Lt_00AC
mov dword ptr [ebp-32], 22
jmp .Lt_01C0
.Lt_00AC:
mov ebx, dword ptr [ebp-16]
and ebx, 31
mov dword ptr [ebp-32], ebx
.Lt_01C0:
mov ebx, dword ptr [ebp-32]
imul ebx, 28
mov eax, dword ptr [ebp-44]
mov ecx, dword ptr [SYMB_DTYPETB+ebx]
cmp ecx, dword ptr [SYMB_DTYPETB+eax]
setne cl
shr ecx, 1
sbb ecx, ecx
mov dword ptr [ebp-48], ecx
mov ecx, dword ptr [ebp-12]
and ecx, 480
je .Lt_00AE
mov dword ptr [ebp-36], 22
jmp .Lt_01C1
.Lt_00AE:
mov ecx, dword ptr [ebp-12]
and ecx, 31
mov dword ptr [ebp-36], ecx
.Lt_01C1:
mov ecx, dword ptr [ebp-36]
imul ecx, 28
mov dword ptr [ebp-52], ecx
mov ecx, dword ptr [ebp-16]
and ecx, 480
je .Lt_00B0
mov dword ptr [ebp-40], 22
jmp .Lt_01C2
.Lt_00B0:
mov ecx, dword ptr [ebp-16]
and ecx, 31
mov dword ptr [ebp-40], ecx
.Lt_01C2:
mov ecx, dword ptr [ebp-40]
imul ecx, 28
mov eax, dword ptr [ebp-52]
mov ebx, dword ptr [SYMB_DTYPETB+ecx+4]
cmp ebx, dword ptr [SYMB_DTYPETB+eax+4]
setne bl
shr ebx, 1
sbb ebx, ebx
or ebx, dword ptr [ebp-48]
je .Lt_00B3
jmp .Lt_00A3
.Lt_00B3:
.Lt_00B2:
.Lt_00A9:
.Lt_00A8:
mov ebx, dword ptr [ebp+16]
mov eax, dword ptr [ebx+56]
cmp dword ptr [eax], 17
jne .Lt_00B5
mov eax, dword ptr [ebp-20]
mov ebx, dword ptr [eax+4]
and ebx, 65536
test ebx, ebx
je .Lt_00B7
push dword ptr [ebp-20]
push dword ptr [ebp+12]
call HCHECKBYDESCDIMENSIONS
add esp, 8
test eax, eax
jne .Lt_00B9
jmp .Lt_00A3
.Lt_00B9:
.Lt_00B8:
mov eax, dword ptr [ebp-20]
push dword ptr [eax+84]
push 50
mov eax, dword ptr [ebp+16]
push dword ptr [eax+56]
call ASTSETTYPE
add esp, 12
mov dword ptr [ebp-4], -1
jmp .Lt_00A3
.Lt_00B7:
.Lt_00B6:
mov eax, dword ptr [ebp-20]
mov ebx, dword ptr [eax+80]
mov dword ptr [ebp-24], ebx
cmp dword ptr [ebp-24], 0
je .Lt_00BB
push dword ptr [ebp-20]
push dword ptr [ebp+12]
call HCHECKBYDESCDIMENSIONS
add esp, 8
test eax, eax
jne .Lt_00BD
jmp .Lt_00A3
.Lt_00BD:
.Lt_00BC:
mov eax, dword ptr [ebp+16]
push dword ptr [eax+56]
call ASTDELTREE
add esp, 4
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp-24]
call ASTNEWVAR
add esp, 20
push eax
call ASTNEWADDROF
add esp, 4
mov ebx, dword ptr [ebp+16]
mov dword ptr [ebx+56], eax
mov dword ptr [ebp-4], -1
jmp .Lt_00A3
.Lt_00BB:
.Lt_00BA:
jmp .Lt_00B4
.Lt_00B5:
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+56]
cmp dword ptr [ebx], 19
jne .Lt_00BE
mov ebx, dword ptr [ebp-20]
mov eax, dword ptr [ebx+4]
and eax, 4
test eax, eax
je .Lt_00C0
push dword ptr [ebp-20]
push dword ptr [ebp+12]
call HCHECKBYDESCDIMENSIONS
add esp, 8
test eax, eax
jne .Lt_00C2
jmp .Lt_00A3
.Lt_00C2:
.Lt_00C1:
mov eax, dword ptr [ebp-20]
mov ebx, dword ptr [eax+80]
mov dword ptr [ebp-24], ebx
mov ebx, dword ptr [ebp-24]
push dword ptr [ebx+28]
mov ebx, dword ptr [ebp-24]
push dword ptr [ebx+24]
mov ebx, dword ptr [ebp+16]
push dword ptr [ebx+56]
call ASTSETTYPE
add esp, 12
mov ebx, dword ptr [ebp+16]
push dword ptr [ebx+56]
call ASTNEWADDROF
add esp, 4
mov ebx, dword ptr [ebp+16]
mov dword ptr [ebx+56], eax
mov dword ptr [ebp-4], -1
jmp .Lt_00A3
jmp .Lt_00BF
.Lt_00C0:
mov eax, dword ptr [ebp-20]
cmp dword ptr [eax+56], 0
jle .Lt_00C3
push dword ptr [ebp-20]
push dword ptr [ebp+12]
call HCHECKBYDESCDIMENSIONS
add esp, 8
test eax, eax
jne .Lt_00C5
jmp .Lt_00A3
.Lt_00C5:
.Lt_00C4:
lea eax, [ebp-8]
push eax
mov eax, dword ptr [ebp+16]
push dword ptr [eax+56]
push dword ptr [ebp-20]
call HALLOCTMPARRAYDESC
add esp, 12
mov dword ptr [ebp-24], eax
push -1
push dword ptr [ebp-8]
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp-24]
call ASTNEWVAR
add esp, 20
push eax
call ASTNEWADDROF
add esp, 4
push eax
call ASTNEWLINK
add esp, 12
mov ebx, dword ptr [ebp+16]
mov dword ptr [ebx+56], eax
mov dword ptr [ebp-4], -1
.Lt_00C3:
.Lt_00BF:
.Lt_00BE:
.Lt_00B4:
.Lt_00A3:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HCHECKBYDESCPARAM, .-HCHECKBYDESCPARAM
.balign 16
HCHECKVARARGPARAM:
.type HCHECKVARARGPARAM, @function
push ebp
mov ebp, esp
sub esp, 28
push ebx
mov dword ptr [ebp-4], 0
.Lt_00C6:
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+56]
mov eax, dword ptr [ebx+4]
and eax, 511
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
and eax, 480
je .Lt_00C8
mov dword ptr [ebp-12], 22
jmp .Lt_01CA
.Lt_00C8:
mov eax, dword ptr [ebp-8]
and eax, 31
mov dword ptr [ebp-12], eax
.Lt_01CA:
mov eax, dword ptr [ebp-12]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax]
mov dword ptr [ebp-16], ebx
jmp .Lt_00CB
.Lt_00CD:
push 0
push dword ptr [ebp+16]
push dword ptr [ebp+8]
call HSTRARGTOSTRPTRPARAM
add esp, 12
jmp .Lt_00CA
.Lt_00CE:
cmp dword ptr [ebp-8], 3
je .Lt_00D1
.Lt_00D2:
cmp dword ptr [ebp-8], 6
jne .Lt_00D0
.Lt_00D1:
push 0
push dword ptr [ebp+16]
push dword ptr [ebp+8]
call HSTRARGTOSTRPTRPARAM
add esp, 12
jmp .Lt_00CF
.Lt_00D0:
mov ebx, dword ptr [ebp-8]
and ebx, 480
je .Lt_00D4
mov dword ptr [ebp-20], 22
jmp .Lt_01CB
.Lt_00D4:
mov ebx, dword ptr [ebp-8]
and ebx, 31
mov dword ptr [ebp-20], ebx
.Lt_01CB:
mov ebx, dword ptr [ebp-20]
imul ebx, 28
cmp dword ptr [SYMB_DTYPETB+ebx+4], 4
jge .Lt_00D7
push 0
push 0
mov ebx, dword ptr [ebp+16]
push dword ptr [ebx+56]
push 0
mov ebx, dword ptr [ebp-8]
and ebx, 480
je .Lt_00D8
mov dword ptr [ebp-24], 22
jmp .Lt_01CC
.Lt_00D8:
mov ebx, dword ptr [ebp-8]
and ebx, 31
mov dword ptr [ebp-24], ebx
.Lt_01CC:
mov ebx, dword ptr [ebp-24]
imul ebx, 28
cmp dword ptr [SYMB_DTYPETB+ebx+8], 0
je .Lt_00DA
mov dword ptr [ebp-28], 10
jmp .Lt_01CD
.Lt_00DA:
mov dword ptr [ebp-28], 11
.Lt_01CD:
push dword ptr [ebp-28]
call ASTNEWCONV
add esp, 20
mov ebx, dword ptr [ebp+16]
mov dword ptr [ebx+56], eax
.Lt_00D7:
.Lt_00D6:
.Lt_00D3:
.Lt_00CF:
jmp .Lt_00CA
.Lt_00DC:
cmp dword ptr [ebp-8], 14
jne .Lt_00DE
push 0
push 0
mov eax, dword ptr [ebp+16]
push dword ptr [eax+56]
push 0
push 15
call ASTNEWCONV
add esp, 20
mov ebx, dword ptr [ebp+16]
mov dword ptr [ebx+56], eax
.Lt_00DE:
.Lt_00DD:
jmp .Lt_00CA
.Lt_00DF:
push 0
push 0
push 57
call ERRREPORT
add esp, 12
mov dword ptr [ebp-4], 0
jmp .Lt_00C7
jmp .Lt_00CA
.Lt_00CB:
cmp dword ptr [ebp-16], 2
ja .Lt_00DF
mov eax, dword ptr [ebp-16]
jmp dword ptr [.LT_00E0+eax*4]
.LT_00E0:
.int .Lt_00CE
.int .Lt_00DC
.int .Lt_00CD
.Lt_00CA:
mov dword ptr [ebp-4], -1
.Lt_00C7:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HCHECKVARARGPARAM, .-HCHECKVARARGPARAM
.balign 16
HCHECKVOIDPARAM:
.type HCHECKVOIDPARAM, @function
push ebp
mov ebp, esp
push ebx
.Lt_00E1:
mov eax, dword ptr [ebp+16]
cmp dword ptr [eax+20], 1
jne .Lt_00E4
push 0
push dword ptr [ebp+16]
push dword ptr [ebp+8]
call HSTRARGTOSTRPTRPARAM
add esp, 12
jmp .Lt_00E2
.Lt_00E4:
.Lt_00E3:
cmp dword ptr [ENV+136], 3
je .Lt_00E6
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+56]
mov eax, dword ptr [ebx]
cmp eax, 16
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp+16]
mov ecx, dword ptr [ebx+56]
mov ebx, dword ptr [ecx]
cmp ebx, 23
sete bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
je .Lt_00E8
jmp .Lt_00E2
.Lt_00E8:
.Lt_00E7:
.Lt_00E6:
.Lt_00E5:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call HCHECKBYREFPARAM
add esp, 8
.Lt_00E2:
pop ebx
mov esp, ebp
pop ebp
ret
.size HCHECKVOIDPARAM, .-HCHECKVOIDPARAM
.balign 16
HCHECKSTRPARAM:
.type HCHECKSTRPARAM, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_00E9:
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+56]
mov eax, dword ptr [ebx+4]
and eax, 511
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-12], eax
jmp .Lt_00EC
.Lt_00EE:
jmp .Lt_00EB
.Lt_00EF:
jmp .Lt_00EB
.Lt_00F0:
push 0
push 0
push 57
call ERRREPORT
add esp, 12
mov dword ptr [ebp-4], 0
jmp .Lt_00EA
jmp .Lt_00EB
.Lt_00EC:
mov eax, dword ptr [ebp-12]
add eax, 4294967293
cmp eax, 14
ja .Lt_00F0
mov eax, dword ptr [ebp-12]
jmp dword ptr [.LT_00F1+eax*4-12]
.LT_00F1:
.int .Lt_00EF
.int .Lt_00F0
.int .Lt_00F0
.int .Lt_00EF
.int .Lt_00F0
.int .Lt_00F0
.int .Lt_00F0
.int .Lt_00F0
.int .Lt_00F0
.int .Lt_00F0
.int .Lt_00F0
.int .Lt_00F0
.int .Lt_00F0
.int .Lt_00EE
.int .Lt_00EE
.Lt_00EB:
mov eax, dword ptr [ebp+16]
push dword ptr [eax+56]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HCHECKARGFORSTRINGPARAM
add esp, 12
mov ebx, dword ptr [ebp+16]
mov dword ptr [ebx+56], eax
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+52]
mov dword ptr [ebp-12], ebx
cmp dword ptr [ebp-12], 2
jne .Lt_00F4
.Lt_00F5:
mov ebx, dword ptr [ebp+16]
mov eax, dword ptr [ebx+56]
mov ebx, dword ptr [eax]
cmp ebx, 9
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_00F7
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call HBUILDBYREFARG
add esp, 8
.Lt_00F7:
.Lt_00F6:
jmp .Lt_00F2
.Lt_00F4:
cmp dword ptr [ebp-12], 1
jne .Lt_00F8
.Lt_00F9:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call HBUILDBYREFARG
add esp, 8
.Lt_00F8:
.Lt_00F2:
mov dword ptr [ebp-4], -1
.Lt_00EA:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HCHECKSTRPARAM, .-HCHECKSTRPARAM
.balign 16
HBYTEBYBYTE:
.type HBYTEBYBYTE, @function
push ebp
mov ebp, esp
push ebx
push esi
.Lt_00FA:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+28]
mov eax, dword ptr [ebp+12]
mov esi, dword ptr [ebx+36]
mov ecx, dword ptr [ebx+40]
mov dword ptr [eax+24], esi
mov dword ptr [eax+28], ecx
.Lt_00FB:
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size HBYTEBYBYTE, .-HBYTEBYBYTE
.balign 16
HUDTPASSBYVAL:
.type HUDTPASSBYVAL, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
.Lt_00FC:
mov eax, dword ptr [ebp+12]
push dword ptr [eax+56]
call ASTSKIPNOCONVCAST
add esp, 4
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp+8]
push dword ptr [eax+28]
call SYMBCOMPISTRIVIAL
add esp, 4
test eax, eax
je .Lt_00FF
mov eax, dword ptr [ebp-8]
cmp dword ptr [eax], 9
jne .Lt_0101
mov eax, dword ptr [ebp+12]
push dword ptr [eax+56]
call ASTREMOVENOCONVCAST
add esp, 4
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx+56], eax
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+56]
push dword ptr [ebx+12]
call SYMBPROCRETURNSONSTACK
add esp, 4
test eax, eax
je .Lt_0103
mov eax, dword ptr [ebp+12]
push dword ptr [eax+56]
call ASTBUILDCALLRESULTVAR
add esp, 4
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx+56], eax
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HBYTEBYBYTE
add esp, 8
jmp .Lt_0102
.Lt_0103:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+56]
mov eax, dword ptr [ebx+12]
push dword ptr [eax+88]
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+56]
mov eax, dword ptr [ebx+12]
push dword ptr [eax+84]
mov eax, dword ptr [ebp+12]
push dword ptr [eax+56]
call ASTSETTYPE
add esp, 12
.Lt_0102:
jmp .Lt_0100
.Lt_0101:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HBYTEBYBYTE
add esp, 8
.Lt_0100:
jmp .Lt_00FD
.Lt_00FF:
.Lt_00FE:
mov eax, dword ptr [ebp+8]
push dword ptr [eax+28]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+24]
call SYMBADDTEMPVAR
add esp, 8
mov dword ptr [ebp-4], eax
push dword ptr [ebp-4]
call ASTDTORLISTADD
add esp, 4
mov eax, dword ptr [ebp-8]
cmp dword ptr [eax], 36
jne .Lt_0105
mov eax, dword ptr [ebp+12]
push dword ptr [eax+56]
call ASTREMOVENOCONVCAST
add esp, 4
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx+56], eax
push 0
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp-4]
call ASTNEWVAR
add esp, 20
push eax
push 64
push -1
mov eax, dword ptr [ebp+12]
push dword ptr [eax+56]
push dword ptr [ebp-4]
call _Z15ASTTYPEINIFLUSHP8FBSYMBOLP7ASTNODEii
add esp, 16
push eax
call ASTNEWLINK
add esp, 12
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx+56], eax
jmp .Lt_0104
.Lt_0105:
lea eax, [ebp-16]
push eax
mov eax, dword ptr [ebp+12]
push dword ptr [eax+20]
mov eax, dword ptr [ebp+12]
push dword ptr [eax+56]
push dword ptr [ebp+8]
call ASTBUILDIMPLICITCTORCALLEX
add esp, 16
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx+56], eax
cmp dword ptr [ebp-16], 0
je .Lt_0107
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp-4]
call ASTNEWVAR
add esp, 20
push eax
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp-4]
call ASTNEWVAR
add esp, 20
push eax
mov eax, dword ptr [ebp+12]
push dword ptr [eax+56]
call ASTPATCHCTORCALL
add esp, 8
push eax
call ASTNEWCALLCTOR
add esp, 8
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx+56], eax
jmp .Lt_0106
.Lt_0107:
push 0
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp-4]
call ASTNEWVAR
add esp, 20
push eax
push 64
mov eax, dword ptr [ebp+12]
push dword ptr [eax+56]
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp-4]
call ASTNEWVAR
add esp, 20
push eax
call ASTNEWASSIGN
add esp, 12
push eax
call ASTNEWLINK
add esp, 12
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx+56], eax
.Lt_0106:
.Lt_0104:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HBUILDBYREFARG
add esp, 8
.Lt_00FD:
pop ebx
mov esp, ebp
pop ebp
ret
.size HUDTPASSBYVAL, .-HUDTPASSBYVAL
.balign 16
HIMPLICITCTOR:
.type HIMPLICITCTOR, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
mov dword ptr [ebp-4], 0
.Lt_0108:
push dword ptr [ebp+8]
call SYMBHASCTOR
add esp, 4
test eax, eax
jne .Lt_010B
jmp .Lt_0109
.Lt_010B:
.Lt_010A:
cmp dword ptr [Lt_01D1], 0
je .Lt_010D
jmp .Lt_0109
.Lt_010D:
.Lt_010C:
inc dword ptr [Lt_01D1]
lea eax, [ebp-16]
push eax
mov eax, dword ptr [ebp+12]
push dword ptr [eax+20]
mov eax, dword ptr [ebp+12]
push dword ptr [eax+56]
push dword ptr [ebp+8]
call ASTBUILDIMPLICITCTORCALLEX
add esp, 16
mov dword ptr [ebp-8], eax
dec dword ptr [Lt_01D1]
cmp dword ptr [ebp-16], 0
jne .Lt_010F
jmp .Lt_0109
.Lt_010F:
.Lt_010E:
mov eax, dword ptr [ebp+8]
push dword ptr [eax+28]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+24]
call SYMBADDTEMPVAR
add esp, 8
mov dword ptr [ebp-12], eax
push dword ptr [ebp-12]
call ASTDTORLISTADD
add esp, 4
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp-12]
call ASTNEWVAR
add esp, 20
push eax
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp-12]
call ASTNEWVAR
add esp, 20
push eax
push dword ptr [ebp-8]
call ASTPATCHCTORCALL
add esp, 8
push eax
call ASTNEWCALLCTOR
add esp, 8
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx+56], eax
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+52], 1
jne .Lt_0111
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HUDTPASSBYVAL
add esp, 8
jmp .Lt_0110
.Lt_0111:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HBUILDBYREFARG
add esp, 8
.Lt_0110:
mov dword ptr [ebp-4], -1
.Lt_0109:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HIMPLICITCTOR, .-HIMPLICITCTOR

.section .data
.balign 4
Lt_01D1:
.int 0

.section .text
.balign 16
HCHECKUDTPARAM:
.type HCHECKUDTPARAM, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_0112:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+56]
mov eax, dword ptr [ebx+4]
and eax, 511
cmp eax, 18
je .Lt_0115
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HIMPLICITCTOR
add esp, 8
test eax, eax
jne .Lt_0117
push 0
push 0
push 57
call ERRREPORT
add esp, 12
mov dword ptr [ebp-4], 0
jmp .Lt_0113
.Lt_0117:
.Lt_0116:
mov dword ptr [ebp-4], -1
jmp .Lt_0113
.Lt_0115:
.Lt_0114:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+56]
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+28]
cmp dword ptr [ebx+8], ecx
je .Lt_0119
mov ecx, dword ptr [ebp+8]
push dword ptr [ecx+28]
mov ecx, dword ptr [ebp+12]
mov ebx, dword ptr [ecx+56]
push dword ptr [ebx+8]
call SYMBGETUDTBASELEVEL
add esp, 8
test eax, eax
jne .Lt_011B
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HIMPLICITCTOR
add esp, 8
test eax, eax
jne .Lt_011D
push 0
push 0
mov eax, dword ptr [ebp+12]
push dword ptr [eax+56]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+28]
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+24]
and ebx, 511
push ebx
call ASTNEWCONV
add esp, 20
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx+56], eax
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax+56], 0
jne .Lt_011F
push 0
push 0
push 57
call ERRREPORT
add esp, 12
mov dword ptr [ebp-4], 0
jmp .Lt_0113
.Lt_011F:
.Lt_011E:
jmp .Lt_011C
.Lt_011D:
mov dword ptr [ebp-4], -1
jmp .Lt_0113
.Lt_011C:
jmp .Lt_011A
.Lt_011B:
push 0
push 0
mov eax, dword ptr [ebp+12]
push dword ptr [eax+56]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+28]
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+24]
and ebx, 511
push ebx
call ASTNEWCONV
add esp, 20
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx+56], eax
.Lt_011A:
.Lt_0119:
.Lt_0118:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+52]
mov dword ptr [ebp-12], ebx
cmp dword ptr [ebp-12], 2
jne .Lt_0122
.Lt_0123:
mov ebx, dword ptr [ebp+12]
push dword ptr [ebx+56]
call ASTREMOVENOCONVCAST
add esp, 4
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx+56], eax
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+56]
cmp dword ptr [ebx], 9
jne .Lt_0125
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+56]
push dword ptr [eax+12]
call SYMBPROCRETURNSONSTACK
add esp, 4
test eax, eax
jne .Lt_0127
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+56]
push dword ptr [ebx+8]
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+56]
mov ebx, dword ptr [eax+4]
and ebx, 511
push ebx
call SYMBADDTEMPVAR
add esp, 8
mov dword ptr [ebp-8], eax
push 0
push 0
push 0
push 0
push dword ptr [ebp-8]
call ASTBUILDVARFIELD
add esp, 16
push eax
call ASTNEWADDROF
add esp, 4
push eax
push 96
mov eax, dword ptr [ebp+12]
push dword ptr [eax+56]
push 0
push 0
push 0
push dword ptr [ebp-8]
call ASTBUILDVARFIELD
add esp, 16
push eax
call ASTNEWASSIGN
add esp, 12
push eax
call ASTNEWLINK
add esp, 12
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx+56], eax
mov eax, dword ptr [ebp+12]
mov dword ptr [eax+20], 1
mov dword ptr [ebp-4], -1
jmp .Lt_0113
.Lt_0127:
.Lt_0126:
.Lt_0125:
.Lt_0124:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HBUILDBYREFARG
add esp, 8
jmp .Lt_0120
.Lt_0122:
cmp dword ptr [ebp-12], 1
jne .Lt_0128
.Lt_0129:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HUDTPASSBYVAL
add esp, 8
.Lt_0128:
.Lt_0120:
mov dword ptr [ebp-4], -1
.Lt_0113:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HCHECKUDTPARAM, .-HCHECKUDTPARAM
.balign 16
HCHECKPARAM:
.type HCHECKPARAM, @function
push ebp
mov ebp, esp
sub esp, 40
push ebx
push esi
mov dword ptr [ebp-4], 0
.Lt_012A:
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+16]
push dword ptr [eax+56]
call ASTUPDSTRCONCAT
add esp, 4
mov ebx, dword ptr [ebp+16]
mov dword ptr [ebx+56], eax
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+24]
and ebx, 511
mov dword ptr [ebp-8], ebx
mov ebx, dword ptr [ebp+16]
mov eax, dword ptr [ebx+56]
mov ebx, dword ptr [eax+4]
and ebx, 511
mov dword ptr [ebp-12], ebx
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+52]
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 3
jne .Lt_012E
.Lt_012F:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HCHECKBYDESCPARAM
add esp, 12
test eax, eax
jne .Lt_0131
push 0
push 0
push 57
call ERRREPORT
add esp, 12
jmp .Lt_012B
.Lt_0131:
.Lt_0130:
mov dword ptr [ebp-4], -1
jmp .Lt_012B
jmp .Lt_012C
.Lt_012E:
cmp dword ptr [ebp-16], 4
jne .Lt_0132
.Lt_0133:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HCHECKVARARGPARAM
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_012B
jmp .Lt_012C
.Lt_0132:
cmp dword ptr [ebp-16], 2
jne .Lt_0134
.Lt_0135:
cmp dword ptr [ebp-8], 0
jne .Lt_0137
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HCHECKVOIDPARAM
add esp, 12
mov dword ptr [ebp-4], -1
jmp .Lt_012B
.Lt_0137:
.Lt_0136:
mov eax, dword ptr [ebp+16]
cmp dword ptr [eax+20], 1
jne .Lt_0139
mov eax, dword ptr [ebp-12]
and eax, 480
je .Lt_013A
mov dword ptr [ebp-24], 22
jmp .Lt_01D2
.Lt_013A:
mov eax, dword ptr [ebp-12]
and eax, 31
mov dword ptr [ebp-24], eax
.Lt_01D2:
mov eax, dword ptr [ebp-24]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax]
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-32], ebx
mov ebx, dword ptr [ebp-12]
and ebx, 480
je .Lt_013C
mov dword ptr [ebp-28], 22
jmp .Lt_01D3
.Lt_013C:
mov ebx, dword ptr [ebp-12]
and ebx, 31
mov dword ptr [ebp-28], ebx
.Lt_01D3:
mov ebx, dword ptr [ebp-28]
imul ebx, 28
mov eax, dword ptr [ENV+236]
cmp eax, dword ptr [SYMB_DTYPETB+ebx+4]
setne al
shr eax, 1
sbb eax, eax
or eax, dword ptr [ebp-32]
je .Lt_013F
push 0
push 0
push 57
call ERRREPORT
add esp, 12
jmp .Lt_012B
.Lt_013F:
.Lt_013E:
mov dword ptr [ebp-4], -1
jmp .Lt_012B
.Lt_0139:
.Lt_0138:
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+56]
cmp dword ptr [ebx], 19
jne .Lt_0140
mov ebx, dword ptr [ebp+16]
mov eax, dword ptr [ebx+56]
mov ebx, dword ptr [eax+12]
mov eax, dword ptr [ebx+108]
test eax, eax
setg al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-20], eax
jmp .Lt_01D5
.Lt_0140:
mov dword ptr [ebp-20], 0
.Lt_01D5:
cmp dword ptr [ebp-20], 0
je .Lt_0143
push 0
push 0
push 57
call ERRREPORT
add esp, 12
jmp .Lt_012B
.Lt_0143:
.Lt_0142:
.Lt_0134:
.Lt_012C:
cmp dword ptr [ebp-12], 18
jne .Lt_0145
.Lt_0146:
lea eax, [ebp-16]
push eax
mov eax, dword ptr [ebp+16]
push dword ptr [eax+56]
mov eax, dword ptr [ebp+12]
push dword ptr [eax+28]
mov eax, dword ptr [ebp+12]
push dword ptr [eax+24]
call SYMBFINDCASTOVLPROC
add esp, 16
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 0
je .Lt_0148
cmp dword ptr [Lt_01E3], 0
jne .Lt_014A
inc dword ptr [Lt_01E3]
push 0
push 0
mov eax, dword ptr [ebp+16]
push dword ptr [eax+56]
push dword ptr [ebp-20]
call ASTBUILDCALL
add esp, 16
mov ebx, dword ptr [ebp+16]
mov dword ptr [ebx+56], eax
dec dword ptr [Lt_01E3]
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+56]
mov eax, dword ptr [ebx+4]
and eax, 511
mov dword ptr [ebp-12], eax
.Lt_014A:
.Lt_0149:
.Lt_0148:
.Lt_0147:
.Lt_0145:
.Lt_0144:
cmp dword ptr [ebp-8], 16
jne .Lt_014C
.Lt_014D:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HCHECKSTRPARAM
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_012B
jmp .Lt_014B
.Lt_014C:
cmp dword ptr [ebp-8], 3
je .Lt_014F
.Lt_0150:
cmp dword ptr [ebp-8], 6
jne .Lt_014E
.Lt_014F:
cmp dword ptr [ebp-12], 16
je .Lt_0153
.Lt_0154:
cmp dword ptr [ebp-12], 17
je .Lt_0153
.Lt_0155:
cmp dword ptr [ebp-12], 3
je .Lt_0153
.Lt_0156:
cmp dword ptr [ebp-12], 6
jne .Lt_0152
.Lt_0153:
jmp .Lt_0151
.Lt_0152:
push 0
push 0
push 57
call ERRREPORT
add esp, 12
jmp .Lt_012B
.Lt_0157:
.Lt_0151:
jmp .Lt_014B
.Lt_014E:
cmp dword ptr [ebp-8], 18
jne .Lt_0158
.Lt_0159:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call HCHECKUDTPARAM
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_012B
.Lt_0158:
.Lt_014B:
mov eax, dword ptr [ebp-12]
mov dword ptr [ebp-16], eax
jmp .Lt_015B
.Lt_015D:
cmp dword ptr [ebp-8], 35
je .Lt_0160
.Lt_0161:
cmp dword ptr [ebp-8], 3
jne .Lt_015F
.Lt_0160:
cmp dword ptr [ebp-12], 6
jne .Lt_0163
push 0
mov eax, dword ptr [ebp+16]
push dword ptr [eax+56]
call RTLTOSTR
add esp, 8
mov ebx, dword ptr [ebp+16]
mov dword ptr [ebx+56], eax
.Lt_0163:
.Lt_0162:
jmp .Lt_015E
.Lt_015F:
cmp dword ptr [ebp-8], 38
je .Lt_0165
.Lt_0166:
cmp dword ptr [ebp-8], 6
jne .Lt_0164
.Lt_0165:
cmp dword ptr [ebp-12], 6
je .Lt_0168
mov eax, dword ptr [ebp+16]
push dword ptr [eax+56]
call RTLTOWSTR
add esp, 4
mov ebx, dword ptr [ebp+16]
mov dword ptr [ebx+56], eax
.Lt_0168:
.Lt_0167:
jmp .Lt_015E
.Lt_0164:
push 0
push 0
push 57
call ERRREPORT
add esp, 12
jmp .Lt_012B
.Lt_0169:
.Lt_015E:
push -1
push dword ptr [ebp+16]
push dword ptr [ebp+8]
call HSTRARGTOSTRPTRPARAM
add esp, 12
mov eax, dword ptr [ebp-8]
and eax, 480
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_016B
push 0
push 0
push 0
push -2147483648
mov eax, dword ptr [ebp+16]
push dword ptr [eax+56]
call ASTNEWDEREF
add esp, 20
mov ebx, dword ptr [ebp+16]
mov dword ptr [ebx+56], eax
.Lt_016B:
.Lt_016A:
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+56]
mov eax, dword ptr [ebx+4]
and eax, 511
mov dword ptr [ebp-12], eax
jmp .Lt_015A
.Lt_016C:
push 0
push 0
push 57
call ERRREPORT
add esp, 12
jmp .Lt_012B
jmp .Lt_015A
.Lt_015B:
mov eax, dword ptr [ebp-16]
add eax, 4294967293
cmp eax, 15
ja .Lt_015A
mov eax, dword ptr [ebp-16]
jmp dword ptr [.LT_016D+eax*4-12]
.LT_016D:
.int .Lt_015D
.int .Lt_015A
.int .Lt_015A
.int .Lt_015D
.int .Lt_015A
.int .Lt_015A
.int .Lt_015A
.int .Lt_015A
.int .Lt_015A
.int .Lt_015A
.int .Lt_015A
.int .Lt_015A
.int .Lt_015A
.int .Lt_015D
.int .Lt_015D
.int .Lt_016C
.Lt_015A:
mov eax, dword ptr [ebp-8]
cmp eax, 9
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp-12]
cmp ebx, 9
sete bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
je .Lt_016F
mov ebx, dword ptr [ebp-8]
and ebx, 480
je .Lt_0170
mov dword ptr [ebp-16], 22
jmp .Lt_01D6
.Lt_0170:
mov ebx, dword ptr [ebp-8]
and ebx, 31
mov dword ptr [ebp-16], ebx
.Lt_01D6:
mov ebx, dword ptr [ebp-16]
imul ebx, 28
mov dword ptr [ebp-24], ebx
mov ebx, dword ptr [ebp-12]
and ebx, 480
je .Lt_0172
mov dword ptr [ebp-20], 22
jmp .Lt_01D7
.Lt_0172:
mov ebx, dword ptr [ebp-12]
and ebx, 31
mov dword ptr [ebp-20], ebx
.Lt_01D7:
mov ebx, dword ptr [ebp-20]
imul ebx, 28
mov eax, dword ptr [ebp-24]
mov ecx, dword ptr [SYMB_DTYPETB+ebx]
cmp dword ptr [SYMB_DTYPETB+eax], ecx
je .Lt_0175
push 1
push 0
push 5
call ERRREPORTWARN
add esp, 12
.Lt_0175:
.Lt_0174:
.Lt_016F:
.Lt_016E:
mov ecx, dword ptr [ebp-8]
and ecx, 480
test ecx, ecx
je .Lt_0177
push 0
mov ecx, dword ptr [ebp+16]
push dword ptr [ecx+56]
mov ecx, dword ptr [ebp+12]
push dword ptr [ecx+28]
mov ecx, dword ptr [ebp+12]
push dword ptr [ecx+24]
call ASTPTRCHECK
add esp, 16
test eax, eax
jne .Lt_0179
mov eax, dword ptr [ebp-12]
and eax, 480
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_017B
push 1
push 0
push 1
call ERRREPORTWARN
add esp, 12
jmp .Lt_017A
.Lt_017B:
mov eax, dword ptr [ebp-8]
and eax, 31
cmp eax, 18
sete al
shr eax, 1
sbb eax, eax
mov ecx, dword ptr [ebp-12]
and ecx, 31
cmp ecx, 18
sete cl
shr ecx, 1
sbb ecx, ecx
and eax, ecx
je .Lt_017D
mov ecx, dword ptr [ebp+16]
mov eax, dword ptr [ecx+56]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+12]
push dword ptr [eax+28]
call SYMBGETUDTBASELEVEL
add esp, 8
test eax, eax
jle .Lt_017F
push 0
push 0
push 24
call ERRREPORT
add esp, 12
jmp .Lt_012B
jmp .Lt_017E
.Lt_017F:
push 1
push 0
push 3
call ERRREPORTWARN
add esp, 12
.Lt_017E:
jmp .Lt_017C
.Lt_017D:
push 1
push 0
push 3
call ERRREPORTWARN
add esp, 12
.Lt_017C:
.Lt_017A:
.Lt_0179:
.Lt_0178:
jmp .Lt_0176
.Lt_0177:
mov eax, dword ptr [ebp-12]
and eax, 480
test eax, eax
je .Lt_0180
push 1
push 0
push 2
call ERRREPORTWARN
add esp, 12
.Lt_0180:
.Lt_0176:
mov eax, dword ptr [ebp-12]
cmp eax, dword ptr [ebp-8]
setne al
shr eax, 1
sbb eax, eax
mov ecx, dword ptr [ebp+12]
mov ebx, dword ptr [ebp+16]
mov esi, dword ptr [ebx+56]
mov ebx, dword ptr [ecx+28]
cmp ebx, dword ptr [esi+8]
setne cl
shr ecx, 1
sbb ecx, ecx
or eax, ecx
je .Lt_0182
mov ecx, dword ptr [ebp-8]
and ecx, 480
je .Lt_0183
mov dword ptr [ebp-16], 22
jmp .Lt_01D9
.Lt_0183:
mov ecx, dword ptr [ebp-8]
and ecx, 31
mov dword ptr [ebp-16], ecx
.Lt_01D9:
mov ecx, dword ptr [ebp-16]
imul ecx, 28
mov dword ptr [ebp-32], ecx
mov ecx, dword ptr [ebp-12]
and ecx, 480
je .Lt_0185
mov dword ptr [ebp-20], 22
jmp .Lt_01DA
.Lt_0185:
mov ecx, dword ptr [ebp-12]
and ecx, 31
mov dword ptr [ebp-20], ecx
.Lt_01DA:
mov ecx, dword ptr [ebp-20]
imul ecx, 28
mov eax, dword ptr [ebp-32]
mov esi, dword ptr [SYMB_DTYPETB+ecx+4]
cmp esi, dword ptr [SYMB_DTYPETB+eax+4]
setne dl
mov esi, edx
shr esi, 1
sbb esi, esi
mov dword ptr [ebp-36], esi
mov esi, dword ptr [ebp-8]
and esi, 480
je .Lt_0187
mov dword ptr [ebp-24], 22
jmp .Lt_01DB
.Lt_0187:
mov esi, dword ptr [ebp-8]
and esi, 31
mov dword ptr [ebp-24], esi
.Lt_01DB:
mov esi, dword ptr [ebp-24]
imul esi, 28
mov dword ptr [ebp-40], esi
mov esi, dword ptr [ebp-12]
and esi, 480
je .Lt_0189
mov dword ptr [ebp-28], 22
jmp .Lt_01DC
.Lt_0189:
mov esi, dword ptr [ebp-12]
and esi, 31
mov dword ptr [ebp-28], esi
.Lt_01DC:
mov esi, dword ptr [ebp-28]
imul esi, 28
mov eax, dword ptr [ebp-40]
mov ecx, dword ptr [SYMB_DTYPETB+esi]
cmp ecx, dword ptr [SYMB_DTYPETB+eax]
setne cl
shr ecx, 1
sbb ecx, ecx
or ecx, dword ptr [ebp-36]
je .Lt_018C
mov ecx, dword ptr [ebp+12]
cmp dword ptr [ecx+52], 2
jne .Lt_018E
mov ecx, dword ptr [ebp+16]
push dword ptr [ecx+56]
call ASTSKIPNOCONVCAST
add esp, 4
push eax
call ASTCANTAKEADDROF
add esp, 4
test eax, eax
je .Lt_0190
push 0
push 0
push 57
call ERRREPORT
add esp, 12
jmp .Lt_012B
.Lt_0190:
.Lt_018F:
.Lt_018E:
.Lt_018D:
.Lt_018C:
.Lt_018B:
push 0
push 0
mov eax, dword ptr [ebp+16]
push dword ptr [eax+56]
mov eax, dword ptr [ebp+12]
push dword ptr [eax+28]
mov eax, dword ptr [ebp+12]
push dword ptr [eax+24]
call ASTNEWCONV
add esp, 20
mov ecx, dword ptr [ebp+16]
mov dword ptr [ecx+56], eax
mov eax, dword ptr [ebp+16]
cmp dword ptr [eax+56], 0
jne .Lt_0192
push 0
push 0
push 24
call ERRREPORT
add esp, 12
jmp .Lt_012B
.Lt_0192:
.Lt_0191:
mov eax, dword ptr [ebp+16]
mov ecx, dword ptr [eax+56]
mov eax, dword ptr [ecx+4]
and eax, 511
mov dword ptr [ebp-12], eax
.Lt_0182:
.Lt_0181:
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax+52], 2
jne .Lt_0194
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call HCHECKBYREFPARAM
add esp, 8
.Lt_0194:
.Lt_0193:
mov dword ptr [ebp-4], -1
.Lt_012B:
mov eax, dword ptr [ebp-4]
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size HCHECKPARAM, .-HCHECKPARAM

.section .data
.balign 4
Lt_01E3:
.int 0

.section .text
.balign 16
HCREATEOPTARG:
.type HCREATEOPTARG, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0195:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+60]
mov dword ptr [ebp-8], ebx
cmp dword ptr [ebp-8], 0
jne .Lt_0198
mov dword ptr [ebp-4], 0
jmp .Lt_0196
.Lt_0198:
.Lt_0197:
mov ebx, dword ptr [ebp-8]
cmp dword ptr [ebx], 36
jne .Lt_019A
push dword ptr [ebp-8]
call ASTTYPEINICLONE
add esp, 4
mov dword ptr [ebp-8], eax
push dword ptr [ebp-8]
call ASTTYPEINITRYREMOVE
add esp, 4
mov dword ptr [ebp-8], eax
jmp .Lt_0199
.Lt_019A:
push dword ptr [ebp-8]
call ASTCLONETREE
add esp, 4
mov dword ptr [ebp-8], eax
.Lt_0199:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0196:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HCREATEOPTARG, .-HCREATEOPTARG
	#fbc-1.01.0/src/compiler/ast-node-arg.bas' compilation took 0.03972507081925869 secs

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

.section .ctors, "aw", @progbits
.int fb_ctor__astznodezarg
