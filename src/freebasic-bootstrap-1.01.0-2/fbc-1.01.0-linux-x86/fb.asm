	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/fb.bas' compilation started at 14:16:34 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl FBGETLANGOPTIONS
FBGETLANGOPTIONS:
.type FBGETLANGOPTIONS, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_0091:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [LANGTB+eax*8+4]
mov dword ptr [ebp-4], ebx
.Lt_0092:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size FBGETLANGOPTIONS, .-FBGETLANGOPTIONS
.balign 16

.globl FBGETLANGNAME
FBGETLANGNAME:
.type FBGETLANGNAME, @function
push ebp
mov ebp, esp
sub esp, 12
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_0093:
push 0
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [LANGTB+eax*8]
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
.Lt_0094:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
mov esp, ebp
pop ebp
ret
.size FBGETLANGNAME, .-FBGETLANGNAME
.balign 16

.globl FBINIT
FBINIT:
.type FBINIT, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_0095:
push 5
lea eax, [ENV+904]
push eax
call STRSETINIT
add esp, 8
push 5
lea eax, [ENV+948]
push eax
call STRSETINIT
add esp, 8
mov eax, dword ptr [ebp+12]
mov dword ptr [ENV+896], eax
mov dword ptr [ENV+900], 0
push 15
push 0
push 1
push 0
push -1
push 280
push offset INFILETB
call fb_ArrayRedimEx
add esp, 28
test eax, eax
je .Lt_0097
push 0
push 0
push offset Lt_0098
push 306
call fb_ErrorThrowAt
add esp, 16
jmp eax
.Lt_0097:
mov dword ptr [ENV+828], 0
mov dword ptr [ENV+832], 0
mov eax, dword ptr [ENV+136]
test eax, eax
sete al
shr eax, 1
sbb eax, eax
mov dword ptr [ENV+876], eax
cmp dword ptr [ENV+136], 3
je .Lt_009A
mov dword ptr [ENV+844], 7
mov dword ptr [ENV+848], 7
mov dword ptr [ENV+852], 8
mov dword ptr [ENV+856], 7
mov dword ptr [ENV+860], 8
mov dword ptr [ENV+864], 15
jmp .Lt_0099
.Lt_009A:
mov dword ptr [ENV+844], 4
mov dword ptr [ENV+848], 4
mov dword ptr [ENV+852], 5
mov dword ptr [ENV+856], 10
mov dword ptr [ENV+860], 11
mov dword ptr [ENV+864], 14
.Lt_0099:
mov dword ptr [ENV+872], 2
mov dword ptr [ENV+880], -1
mov dword ptr [ENV+884], 0
mov dword ptr [ENV+888], 0
mov dword ptr [ENV+868], 0
mov eax, dword ptr [ENV+136]
cmp eax, 3
sete al
shr eax, 1
sbb eax, eax
mov dword ptr [ENV+892], eax
mov dword ptr [ENV+992], 0
mov dword ptr [ENV+232], 0
mov eax, dword ptr [ENV+108]
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 3
je .Lt_009E
.Lt_009F:
cmp dword ptr [ebp-8], 4
jne .Lt_009D
.Lt_009E:
mov dword ptr [ENV+232], -1
jmp .Lt_009B
.Lt_009D:
cmp dword ptr [ebp-8], 1
je .Lt_00A1
.Lt_00A2:
cmp dword ptr [ebp-8], 0
jne .Lt_00A0
.Lt_00A1:
call FBIS64BIT
not eax
mov dword ptr [ENV+232], eax
.Lt_00A0:
.Lt_009B:
mov dword ptr [ENV+236], 0
call PARSERSETCTX
push dword ptr [ebp+8]
call SYMBINIT
add esp, 4
call ERRINIT
call ASTINIT
call IRINIT
mov eax, dword ptr [ENV+212]
and eax, 480
je .Lt_00A3
mov dword ptr [ebp-4], 22
jmp .Lt_00A5
.Lt_00A3:
mov eax, dword ptr [ENV+212]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_00A5:
mov eax, dword ptr [ebp-4]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+4]
cmp ebx, 4
sete bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ENV+228], ebx
push 0
push 256
lea ebx, [ENV+804]
push ebx
call HASHINIT
add esp, 12
push 0
push 256
lea ebx, [ENV+816]
push ebx
call HASHINIT
add esp, 12
push 0
push 104
push 128
lea ebx, [PARSER]
push ebx
call STACKNEW
add esp, 16
push 0
call LEXINIT
add esp, 4
call PARSERINIT
call RTLINIT
.Lt_0096:
pop ebx
mov esp, ebp
pop ebp
ret
.size FBINIT, .-FBINIT
.balign 16

.globl FBEND
FBEND:
.type FBEND, @function
.Lt_00A9:
call RTLEND
call PARSEREND
call LEXEND
lea eax, [PARSER]
push eax
call STACKFREE
add esp, 4
lea eax, [ENV+816]
push eax
call HASHEND
add esp, 4
lea eax, [ENV+804]
push eax
call HASHEND
add esp, 4
call IREND
call ASTEND
call ERREND
call SYMBEND
push 0
push offset INFILETB
call fb_ArrayErase
add esp, 8
lea eax, [ENV+904]
push eax
call STRSETEND
add esp, 4
lea eax, [ENV+948]
push eax
call STRSETEND
add esp, 4
.Lt_00AA:
ret
.size FBEND, .-FBEND
.balign 16

.globl FBGLOBALINIT
FBGLOBALINIT:
.type FBGLOBALINIT, @function
.Lt_00B3:
push 256
lea eax, [ENV]
push eax
call STRLISTINIT
add esp, 8
push 256
lea eax, [ENV+32]
push eax
call STRLISTINIT
add esp, 8
push 256
lea eax, [ENV+64]
push eax
call STRLISTINIT
add esp, 8
mov dword ptr [ENV+96], 0
mov dword ptr [ENV+100], 0
mov dword ptr [ENV+104], 0
mov dword ptr [ENV+108], 2
mov dword ptr [ENV+112], 1
mov dword ptr [ENV+116], 0
mov dword ptr [ENV+120], 0
mov dword ptr [ENV+124], 0
mov dword ptr [ENV+128], 0
mov dword ptr [ENV+136], 0
mov dword ptr [ENV+140], 0
mov dword ptr [ENV+144], 0
mov dword ptr [ENV+148], 0
mov dword ptr [ENV+156], 0
mov dword ptr [ENV+152], 0
mov dword ptr [ENV+160], 0
mov dword ptr [ENV+164], 0
mov dword ptr [ENV+168], -1
mov dword ptr [ENV+172], 10
mov dword ptr [ENV+176], 0
mov dword ptr [ENV+180], 0
mov dword ptr [ENV+184], 0
mov dword ptr [ENV+192], 0
mov dword ptr [ENV+196], 0
mov dword ptr [ENV+200], 0
mov dword ptr [ENV+188], 0
mov dword ptr [ENV+204], 1048576
call HUPDATELANGOPTIONS
call HUPDATETARGETOPTIONS
call HUPDATEBACKENDOPTIONS
.Lt_00B4:
ret
.size FBGLOBALINIT, .-FBGLOBALINIT
.balign 16

.globl FBADDINCLUDEPATH
FBADDINCLUDEPATH:
.type FBADDINCLUDEPATH, @function
push ebp
mov ebp, esp
.Lt_00B5:
push dword ptr [ebp+8]
lea eax, [ENV+64]
push eax
call STRLISTAPPEND
add esp, 8
.Lt_00B6:
mov esp, ebp
pop ebp
ret
.size FBADDINCLUDEPATH, .-FBADDINCLUDEPATH
.balign 16

.globl FBADDPREDEFINE
FBADDPREDEFINE:
.type FBADDPREDEFINE, @function
push ebp
mov ebp, esp
.Lt_00B7:
push dword ptr [ebp+8]
lea eax, [ENV]
push eax
call STRLISTAPPEND
add esp, 8
.Lt_00B8:
mov esp, ebp
pop ebp
ret
.size FBADDPREDEFINE, .-FBADDPREDEFINE
.balign 16

.globl FBADDPREINCLUDE
FBADDPREINCLUDE:
.type FBADDPREINCLUDE, @function
push ebp
mov ebp, esp
.Lt_00B9:
push dword ptr [ebp+8]
lea eax, [ENV+32]
push eax
call STRLISTAPPEND
add esp, 8
.Lt_00BA:
mov esp, ebp
pop ebp
ret
.size FBADDPREINCLUDE, .-FBADDPREINCLUDE
.balign 16

.globl FBSETOPTION
FBSETOPTION:
.type FBSETOPTION, @function
push ebp
mov ebp, esp
sub esp, 4
.Lt_00BB:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
jmp .Lt_00BE
.Lt_00C0:
mov eax, dword ptr [ebp+12]
mov dword ptr [ENV+96], eax
jmp .Lt_00BD
.Lt_00C1:
mov eax, dword ptr [ebp+12]
mov dword ptr [ENV+100], eax
jmp .Lt_00BD
.Lt_00C2:
mov eax, dword ptr [ebp+12]
mov dword ptr [ENV+104], eax
call HUPDATEBACKENDOPTIONS
jmp .Lt_00BD
.Lt_00C3:
mov eax, dword ptr [ebp+12]
mov dword ptr [ENV+108], eax
call HUPDATETARGETOPTIONS
jmp .Lt_00BD
.Lt_00C4:
mov eax, dword ptr [ebp+12]
mov dword ptr [ENV+112], eax
jmp .Lt_00BD
.Lt_00C5:
mov eax, dword ptr [ebp+12]
mov dword ptr [ENV+116], eax
jmp .Lt_00BD
.Lt_00C6:
mov eax, dword ptr [ebp+12]
mov dword ptr [ENV+120], eax
jmp .Lt_00BD
.Lt_00C7:
mov eax, dword ptr [ebp+12]
mov dword ptr [ENV+124], eax
jmp .Lt_00BD
.Lt_00C8:
mov eax, dword ptr [ebp+12]
mov dword ptr [ENV+128], eax
jmp .Lt_00BD
.Lt_00C9:
mov eax, dword ptr [ebp+12]
mov dword ptr [ENV+132], eax
jmp .Lt_00BD
.Lt_00CA:
mov eax, dword ptr [ebp+12]
mov dword ptr [ENV+136], eax
call HUPDATELANGOPTIONS
jmp .Lt_00BD
.Lt_00CB:
mov eax, dword ptr [ebp+12]
mov dword ptr [ENV+140], eax
jmp .Lt_00BD
.Lt_00CC:
mov eax, dword ptr [ebp+12]
mov dword ptr [ENV+144], eax
jmp .Lt_00BD
.Lt_00CD:
mov eax, dword ptr [ebp+12]
mov dword ptr [ENV+148], eax
jmp .Lt_00BD
.Lt_00CE:
mov eax, dword ptr [ebp+12]
mov dword ptr [ENV+152], eax
jmp .Lt_00BD
.Lt_00CF:
mov eax, dword ptr [ebp+12]
mov dword ptr [ENV+156], eax
jmp .Lt_00BD
.Lt_00D0:
mov eax, dword ptr [ebp+12]
mov dword ptr [ENV+160], eax
jmp .Lt_00BD
.Lt_00D1:
mov eax, dword ptr [ebp+12]
mov dword ptr [ENV+164], eax
jmp .Lt_00BD
.Lt_00D2:
mov eax, dword ptr [ebp+12]
mov dword ptr [ENV+168], eax
jmp .Lt_00BD
.Lt_00D3:
mov eax, dword ptr [ebp+12]
mov dword ptr [ENV+172], eax
jmp .Lt_00BD
.Lt_00D4:
mov eax, dword ptr [ebp+12]
mov dword ptr [ENV+176], eax
jmp .Lt_00BD
.Lt_00D5:
mov eax, dword ptr [ebp+12]
mov dword ptr [ENV+180], eax
jmp .Lt_00BD
.Lt_00D6:
mov eax, dword ptr [ebp+12]
mov dword ptr [ENV+184], eax
jmp .Lt_00BD
.Lt_00D7:
mov eax, dword ptr [ebp+12]
mov dword ptr [ENV+188], eax
jmp .Lt_00BD
.Lt_00D8:
mov eax, dword ptr [ebp+12]
mov dword ptr [ENV+192], eax
jmp .Lt_00BD
.Lt_00D9:
mov eax, dword ptr [ebp+12]
mov dword ptr [ENV+196], eax
jmp .Lt_00BD
.Lt_00DA:
mov eax, dword ptr [ebp+12]
mov dword ptr [ENV+200], eax
jmp .Lt_00BD
.Lt_00DB:
mov eax, dword ptr [ebp+12]
mov dword ptr [ENV+204], eax
cmp dword ptr [ENV+204], 32768
jge .Lt_00DD
mov dword ptr [ENV+204], 32768
.Lt_00DD:
.Lt_00DC:
jmp .Lt_00BD
.Lt_00BE:
cmp dword ptr [ebp-4], 27
ja .Lt_00BD
mov eax, dword ptr [ebp-4]
jmp dword ptr [.LT_00DE+eax*4]
.LT_00DE:
.int .Lt_00C0
.int .Lt_00C1
.int .Lt_00C2
.int .Lt_00C3
.int .Lt_00C4
.int .Lt_00C5
.int .Lt_00C6
.int .Lt_00C7
.int .Lt_00C8
.int .Lt_00C9
.int .Lt_00CA
.int .Lt_00CB
.int .Lt_00CC
.int .Lt_00CD
.int .Lt_00CE
.int .Lt_00CF
.int .Lt_00D0
.int .Lt_00D1
.int .Lt_00D2
.int .Lt_00D3
.int .Lt_00D4
.int .Lt_00D5
.int .Lt_00D6
.int .Lt_00D7
.int .Lt_00D8
.int .Lt_00D9
.int .Lt_00DA
.int .Lt_00DB
.Lt_00BD:
.Lt_00BC:
mov esp, ebp
pop ebp
ret
.size FBSETOPTION, .-FBSETOPTION
.balign 16

.globl FBGETOPTION
FBGETOPTION:
.type FBGETOPTION, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_00DF:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-8], eax
jmp .Lt_00E2
.Lt_00E4:
mov eax, dword ptr [ENV+96]
mov dword ptr [ebp-4], eax
jmp .Lt_00E1
.Lt_00E5:
mov eax, dword ptr [ENV+100]
mov dword ptr [ebp-4], eax
jmp .Lt_00E1
.Lt_00E6:
mov eax, dword ptr [ENV+104]
mov dword ptr [ebp-4], eax
jmp .Lt_00E1
.Lt_00E7:
mov eax, dword ptr [ENV+108]
mov dword ptr [ebp-4], eax
jmp .Lt_00E1
.Lt_00E8:
mov eax, dword ptr [ENV+112]
mov dword ptr [ebp-4], eax
jmp .Lt_00E1
.Lt_00E9:
mov eax, dword ptr [ENV+116]
mov dword ptr [ebp-4], eax
jmp .Lt_00E1
.Lt_00EA:
mov eax, dword ptr [ENV+120]
mov dword ptr [ebp-4], eax
jmp .Lt_00E1
.Lt_00EB:
mov eax, dword ptr [ENV+124]
mov dword ptr [ebp-4], eax
jmp .Lt_00E1
.Lt_00EC:
mov eax, dword ptr [ENV+128]
mov dword ptr [ebp-4], eax
jmp .Lt_00E1
.Lt_00ED:
mov eax, dword ptr [ENV+132]
mov dword ptr [ebp-4], eax
jmp .Lt_00E1
.Lt_00EE:
mov eax, dword ptr [ENV+136]
mov dword ptr [ebp-4], eax
jmp .Lt_00E1
.Lt_00EF:
mov eax, dword ptr [ENV+140]
mov dword ptr [ebp-4], eax
jmp .Lt_00E1
.Lt_00F0:
mov eax, dword ptr [ENV+144]
mov dword ptr [ebp-4], eax
jmp .Lt_00E1
.Lt_00F1:
mov eax, dword ptr [ENV+148]
mov dword ptr [ebp-4], eax
jmp .Lt_00E1
.Lt_00F2:
mov eax, dword ptr [ENV+152]
mov dword ptr [ebp-4], eax
jmp .Lt_00E1
.Lt_00F3:
mov eax, dword ptr [ENV+156]
mov dword ptr [ebp-4], eax
jmp .Lt_00E1
.Lt_00F4:
mov eax, dword ptr [ENV+160]
mov dword ptr [ebp-4], eax
jmp .Lt_00E1
.Lt_00F5:
mov eax, dword ptr [ENV+164]
mov dword ptr [ebp-4], eax
jmp .Lt_00E1
.Lt_00F6:
mov eax, dword ptr [ENV+168]
mov dword ptr [ebp-4], eax
jmp .Lt_00E1
.Lt_00F7:
mov eax, dword ptr [ENV+172]
mov dword ptr [ebp-4], eax
jmp .Lt_00E1
.Lt_00F8:
mov eax, dword ptr [ENV+176]
mov dword ptr [ebp-4], eax
jmp .Lt_00E1
.Lt_00F9:
mov eax, dword ptr [ENV+180]
mov dword ptr [ebp-4], eax
jmp .Lt_00E1
.Lt_00FA:
mov eax, dword ptr [ENV+184]
mov dword ptr [ebp-4], eax
jmp .Lt_00E1
.Lt_00FB:
mov eax, dword ptr [ENV+188]
mov dword ptr [ebp-4], eax
jmp .Lt_00E1
.Lt_00FC:
mov eax, dword ptr [ENV+192]
mov dword ptr [ebp-4], eax
jmp .Lt_00E1
.Lt_00FD:
mov eax, dword ptr [ENV+196]
mov dword ptr [ebp-4], eax
jmp .Lt_00E1
.Lt_00FE:
mov eax, dword ptr [ENV+200]
mov dword ptr [ebp-4], eax
jmp .Lt_00E1
.Lt_00FF:
mov eax, dword ptr [ENV+204]
mov dword ptr [ebp-4], eax
jmp .Lt_00E1
.Lt_0100:
mov dword ptr [ebp-4], 0
jmp .Lt_00E1
.Lt_00E2:
cmp dword ptr [ebp-8], 27
ja .Lt_0100
mov eax, dword ptr [ebp-8]
jmp dword ptr [.LT_0101+eax*4]
.LT_0101:
.int .Lt_00E4
.int .Lt_00E5
.int .Lt_00E6
.int .Lt_00E7
.int .Lt_00E8
.int .Lt_00E9
.int .Lt_00EA
.int .Lt_00EB
.int .Lt_00EC
.int .Lt_00ED
.int .Lt_00EE
.int .Lt_00EF
.int .Lt_00F0
.int .Lt_00F1
.int .Lt_00F2
.int .Lt_00F3
.int .Lt_00F4
.int .Lt_00F5
.int .Lt_00F6
.int .Lt_00F7
.int .Lt_00F8
.int .Lt_00F9
.int .Lt_00FA
.int .Lt_00FB
.int .Lt_00FC
.int .Lt_00FD
.int .Lt_00FE
.int .Lt_00FF
.Lt_00E1:
.Lt_00E0:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size FBGETOPTION, .-FBGETOPTION
.balign 16

.globl FBCHANGEOPTION
FBCHANGEOPTION:
.type FBCHANGEOPTION, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0102:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
jmp .Lt_0105
.Lt_0107:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call FBSETOPTION
add esp, 8
jmp .Lt_0104
.Lt_0108:
push dword ptr [ebp+8]
call FBGETOPTION
add esp, 4
cmp dword ptr [ebp+12], eax
je .Lt_010A
cmp dword ptr [PARSER+92], 0
je .Lt_010C
mov eax, dword ptr [PARSER+100]
cmp eax, dword ptr [ENV+832]
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_010E
push 0
push 0
push 60
call ERRREPORT
add esp, 12
jmp .Lt_010D
.Lt_010E:
push 0
push 0
push 95
call ERRREPORT
add esp, 12
.Lt_010D:
jmp .Lt_010B
.Lt_010C:
cmp dword ptr [ENV+140], 0
je .Lt_0110
push 1
push 0
push 30
call ERRREPORTWARN
add esp, 12
jmp .Lt_010F
.Lt_0110:
cmp dword ptr [ENV+896], 0
jne .Lt_0112
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call FBSETOPTION
add esp, 8
mov dword ptr [ENV+900], -1
call ERRHIDEFURTHERERRORS
jmp .Lt_0111
.Lt_0112:
push 1
push 0
push 31
call ERRREPORTWARN
add esp, 12
.Lt_0111:
.Lt_010F:
.Lt_010B:
.Lt_010A:
.Lt_0109:
jmp .Lt_0104
.Lt_0113:
push 0
push 0
push 21
call ERRREPORT
add esp, 12
jmp .Lt_0104
.Lt_0105:
mov ebx, dword ptr [ebp-4]
add ebx, 4294967286
cmp ebx, 13
ja .Lt_0113
mov ebx, dword ptr [ebp-4]
jmp dword ptr [.LT_0114+ebx*4-40]
.LT_0114:
.int .Lt_0108
.int .Lt_0113
.int .Lt_0113
.int .Lt_0113
.int .Lt_0113
.int .Lt_0113
.int .Lt_0113
.int .Lt_0113
.int .Lt_0113
.int .Lt_0113
.int .Lt_0113
.int .Lt_0113
.int .Lt_0113
.int .Lt_0107
.Lt_0104:
.Lt_0103:
pop ebx
mov esp, ebp
pop ebp
ret
.size FBCHANGEOPTION, .-FBCHANGEOPTION
.balign 16

.globl FBISCROSSCOMP
FBISCROSSCOMP:
.type FBISCROSSCOMP, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_0116:
mov eax, dword ptr [ENV+108]
cmp eax, 2
setne al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-4], eax
.Lt_0117:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size FBISCROSSCOMP, .-FBISCROSSCOMP
.balign 16

.globl FBGETTARGETID
FBGETTARGETID:
.type FBGETTARGETID, @function
push ebp
mov ebp, esp
sub esp, 12
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_0128:
push 0
push -1
push dword ptr [ENV+112]
push dword ptr [ENV+108]
call HGETTARGETID
add esp, 8
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
.Lt_0129:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
mov esp, ebp
pop ebp
ret
.size FBGETTARGETID, .-FBGETTARGETID
.balign 16

.globl FBGETHOSTID
FBGETHOSTID:
.type FBGETHOSTID, @function
push ebp
mov ebp, esp
sub esp, 12
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_012A:
push 0
push -1
push 1
push 2
call HGETTARGETID
add esp, 8
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
.Lt_012B:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
mov esp, ebp
pop ebp
ret
.size FBGETHOSTID, .-FBGETHOSTID
.balign 16

.globl FBIDENTIFYOS
FBIDENTIFYOS:
.type FBIDENTIFYOS, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_012C:
mov dword ptr [ebp-8], 0
.Lt_0131:
push 0
mov eax, dword ptr [ebp-8]
imul eax, 20
push dword ptr [TARGETINFO+eax]
push -1
push dword ptr [ebp+8]
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_0133
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
jmp .Lt_012D
.Lt_0133:
.Lt_0132:
.Lt_012F:
inc dword ptr [ebp-8]
.Lt_012E:
cmp dword ptr [ebp-8], 8
jle .Lt_0131
.Lt_0130:
mov dword ptr [ebp-4], -1
.Lt_012D:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size FBIDENTIFYOS, .-FBIDENTIFYOS
.balign 16

.globl FBIDENTIFYCPUFAMILY
FBIDENTIFYCPUFAMILY:
.type FBIDENTIFYCPUFAMILY, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_0134:
mov dword ptr [ebp-8], 0
.Lt_0139:
push 0
mov eax, dword ptr [ebp-8]
push dword ptr [CPUFAMILYINFO+eax*8]
push -1
push dword ptr [ebp+8]
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_013B
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
jmp .Lt_0135
.Lt_013B:
.Lt_013A:
.Lt_0137:
inc dword ptr [ebp-8]
.Lt_0136:
cmp dword ptr [ebp-8], 3
jle .Lt_0139
.Lt_0138:
mov dword ptr [ebp-4], -1
.Lt_0135:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size FBIDENTIFYCPUFAMILY, .-FBIDENTIFYCPUFAMILY
.balign 16

.globl FBCPUTYPEFROMCPUFAMILYID
FBCPUTYPEFROMCPUFAMILYID:
.type FBCPUTYPEFROMCPUFAMILYID, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_013C:
push dword ptr [ebp+8]
call FBIDENTIFYCPUFAMILY
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jl .Lt_013F
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [CPUFAMILYINFO+eax*8+4]
mov dword ptr [ebp-4], ebx
jmp .Lt_013D
.Lt_013F:
.Lt_013E:
mov dword ptr [ebp-4], -1
.Lt_013D:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size FBCPUTYPEFROMCPUFAMILYID, .-FBCPUTYPEFROMCPUFAMILYID
.balign 16

.globl FBGETGCCARCH
FBGETGCCARCH:
.type FBGETGCCARCH, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0140:
mov eax, dword ptr [ENV+112]
sal eax, 4
mov ebx, dword ptr [CPUTYPEINFO+eax]
mov dword ptr [ebp-8], ebx
cmp dword ptr [ebp-8], 0
jne .Lt_0143
mov ebx, dword ptr [ENV+112]
sal ebx, 4
mov eax, dword ptr [CPUTYPEINFO+ebx+4]
mov dword ptr [ebp-8], eax
.Lt_0143:
.Lt_0142:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0141:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size FBGETGCCARCH, .-FBGETGCCARCH
.balign 16

.globl FBGETFBCARCH
FBGETFBCARCH:
.type FBGETFBCARCH, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_0144:
mov eax, dword ptr [ENV+112]
sal eax, 4
mov ebx, dword ptr [CPUTYPEINFO+eax+4]
mov dword ptr [ebp-4], ebx
.Lt_0145:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size FBGETFBCARCH, .-FBGETFBCARCH
.balign 16

.globl FBIS64BIT
FBIS64BIT:
.type FBIS64BIT, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_0146:
call FBGETBITS
cmp eax, 64
sete al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-4], eax
.Lt_0147:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size FBIS64BIT, .-FBIS64BIT
.balign 16

.globl FBGETBITS
FBGETBITS:
.type FBGETBITS, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_0149:
mov eax, dword ptr [ENV+112]
sal eax, 4
mov ebx, dword ptr [CPUTYPEINFO+eax+12]
mov dword ptr [ebp-4], ebx
.Lt_014A:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size FBGETBITS, .-FBGETBITS
.balign 16

.globl FBGETHOSTBITS
FBGETHOSTBITS:
.type FBGETHOSTBITS, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_014B:
mov eax, dword ptr [CPUTYPEINFO+28]
mov dword ptr [ebp-4], eax
.Lt_014C:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size FBGETHOSTBITS, .-FBGETHOSTBITS
.balign 16

.globl FBGETCPUFAMILY
FBGETCPUFAMILY:
.type FBGETCPUFAMILY, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_014D:
mov eax, dword ptr [ENV+112]
sal eax, 4
mov ebx, dword ptr [CPUTYPEINFO+eax+8]
mov dword ptr [ebp-4], ebx
.Lt_014E:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size FBGETCPUFAMILY, .-FBGETCPUFAMILY
.balign 16

.globl FBIDENTIFYFBCARCH
FBIDENTIFYFBCARCH:
.type FBIDENTIFYFBCARCH, @function
push ebp
mov ebp, esp
sub esp, 20
mov dword ptr [ebp-4], 0
.Lt_014F:
push 0
push -1
push dword ptr [ebp+8]
push -1
lea eax, [ebp-16]
push eax
call fb_StrInit
add esp, 20
push 7
push offset Lt_0154
push -1
lea eax, [ebp-16]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_0153
.Lt_0155:
mov dword ptr [ebp-4], 1
call fb_CpuDetect
shr eax, 28
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 3
jne .Lt_0158
.Lt_0159:
mov dword ptr [ebp-4], 0
jmp .Lt_0156
.Lt_0158:
cmp dword ptr [ebp-20], 4
jne .Lt_015A
.Lt_015B:
mov dword ptr [ebp-4], 1
jmp .Lt_0156
.Lt_015A:
cmp dword ptr [ebp-20], 5
jne .Lt_015C
.Lt_015D:
mov dword ptr [ebp-4], 2
jmp .Lt_0156
.Lt_015C:
cmp dword ptr [ebp-20], 6
jne .Lt_015E
.Lt_015F:
mov dword ptr [ebp-4], 3
.Lt_015E:
.Lt_0156:
lea eax, [ebp-16]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0150
jmp .Lt_0151
.Lt_0153:
push 3
push offset Lt_0161
push -1
lea eax, [ebp-16]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_0160
.Lt_0162:
mov dword ptr [ebp-4], 1
lea eax, [ebp-16]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0150
jmp .Lt_0151
.Lt_0160:
push 3
push offset Lt_0164
push -1
lea eax, [ebp-16]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_0163
.Lt_0165:
mov dword ptr [ebp-4], 13
lea eax, [ebp-16]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0150
.Lt_0163:
.Lt_0151:
lea eax, [ebp-16]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-8], 0
.Lt_0169:
push -1
push dword ptr [ebp+8]
push 0
mov eax, dword ptr [ebp-8]
sal eax, 4
push dword ptr [CPUTYPEINFO+eax+4]
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_016B
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
jmp .Lt_0150
.Lt_016B:
.Lt_016A:
.Lt_0167:
inc dword ptr [ebp-8]
.Lt_0166:
cmp dword ptr [ebp-8], 16
jle .Lt_0169
.Lt_0168:
push 0
push -1
push dword ptr [ebp+8]
push -1
lea eax, [ebp-16]
push eax
call fb_StrInit
add esp, 20
push 7
push offset Lt_0072
push -1
lea eax, [ebp-16]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
je .Lt_0170
.Lt_0171:
push 6
push offset Lt_016F
push -1
lea eax, [ebp-16]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_016E
.Lt_0170:
mov dword ptr [ebp-4], 13
jmp .Lt_016C
.Lt_016E:
mov dword ptr [ebp-4], -1
.Lt_0172:
.Lt_016C:
lea eax, [ebp-16]
push eax
call fb_StrDelete
add esp, 4
.Lt_0150:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size FBIDENTIFYFBCARCH, .-FBIDENTIFYFBCARCH
.balign 16

.globl FBGETENTRYPOINT
FBGETENTRYPOINT:
.type FBGETENTRYPOINT, @function
push ebp
mov ebp, esp
sub esp, 12
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_0173:
cmp dword ptr [ENV+108], 4
jne .Lt_0176
push 0
push 12
push offset Lt_0177
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
jmp .Lt_0175
.Lt_0176:
push 0
push 5
push offset Lt_0178
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
.Lt_0175:
.Lt_0174:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
mov esp, ebp
pop ebp
ret
.size FBGETENTRYPOINT, .-FBGETENTRYPOINT
.balign 16

.globl FBGETMODULEENTRY
FBGETMODULEENTRY:
.type FBGETMODULEENTRY, @function
push ebp
mov ebp, esp
sub esp, 36
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_0179:
push 0
push -1
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 0
push -1
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
push 0
push 261
lea eax, [ENV+524]
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-24]
push eax
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
push offset Lt_017E
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
push dword ptr [Lt_017E]
call HCLEARNAME
add esp, 4
push 0
push 10
push offset Lt_017D
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_017E
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_017A:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
mov esp, ebp
pop ebp
ret
.size FBGETMODULEENTRY, .-FBGETMODULEENTRY

.section .bss
.balign 4
	.lcomm	Lt_017E,12

.section .text
.balign 16

.globl FBGETINPUTFILEPARENTDIR
FBGETINPUTFILEPARENTDIR:
.type FBGETINPUTFILEPARENTDIR, @function
push ebp
mov ebp, esp
sub esp, 60
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_017F:
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ENV+244]
push eax
call PATHISABSOLUTE
add esp, 4
test eax, eax
jne .Lt_0182
push 0
push -1
call HCURDIR
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
push 0
push 2
push offset Lt_0018
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_0182:
.Lt_0181:
push 0
push -1
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
push 0
push -1
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
push 0
push -1
push 261
lea eax, [ENV+244]
push eax
push -1
lea eax, [ebp-24]
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
call HSTRIPFILENAME
add esp, 4
push eax
push -1
lea eax, [ebp-60]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-60]
push eax
call PATHSTRIPDIV
add esp, 4
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
lea eax, [ebp-48]
push eax
call fb_StrDelete
add esp, 4
lea eax, [ebp-24]
push eax
call fb_StrDelete
add esp, 4
.Lt_0180:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
mov esp, ebp
pop ebp
ret
.size FBGETINPUTFILEPARENTDIR, .-FBGETINPUTFILEPARENTDIR
.balign 16

.globl FBADDLIB
FBADDLIB:
.type FBADDLIB, @function
push ebp
mov ebp, esp
sub esp, 12
.Lt_0186:
push 0
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
lea eax, [ENV+904]
push eax
call STRSETADD
add esp, 12
lea eax, [ebp-12]
push eax
call fb_StrDelete
add esp, 4
.Lt_0187:
mov esp, ebp
pop ebp
ret
.size FBADDLIB, .-FBADDLIB
.balign 16

.globl FBADDLIBPATH
FBADDLIBPATH:
.type FBADDLIBPATH, @function
push ebp
mov ebp, esp
sub esp, 24
.Lt_0189:
push 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
push 0
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
call PATHSTRIPDIV
add esp, 4
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-24]
push eax
lea eax, [ENV+948]
push eax
call STRSETADD
add esp, 12
lea eax, [ebp-24]
push eax
call fb_StrDelete
add esp, 4
lea eax, [ebp-12]
push eax
call fb_StrDelete
add esp, 4
.Lt_018A:
mov esp, ebp
pop ebp
ret
.size FBADDLIBPATH, .-FBADDLIBPATH
.balign 16

.globl FBCOMPILE
FBCOMPILE:
.type FBCOMPILE, @function
push ebp
mov ebp, esp
sub esp, 8
.Lt_01B1:
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
push 0
push 0
push dword ptr [ebp+8]
push 261
lea eax, [ENV+244]
push eax
call fb_StrAssign
add esp, 20
push 47
lea eax, [ENV+244]
push eax
call HREPLACESLASH
add esp, 8
mov dword ptr [ENV+508], 0
mov eax, dword ptr [ebp+20]
mov dword ptr [ENV+512], eax
push 0
push 0
push dword ptr [ebp+12]
push 261
lea eax, [ENV+524]
push eax
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ebp+20]
mov dword ptr [ENV+792], eax
push dword ptr [ebp+8]
call HFILEEXISTS
add esp, 4
test eax, eax
jne .Lt_01B4
push 0
push 1
push -1
push dword ptr [ebp+8]
push 23
call ERRREPORTEX
add esp, 20
jmp .Lt_01B2
.Lt_01B4:
.Lt_01B3:
call fb_FileFree
mov dword ptr [ENV+240], eax
push 0
push dword ptr [ENV+240]
push 0
push 1
push 0
push dword ptr [ebp+8]
call fb_StrAllocTempDescZ
add esp, 4
push eax
call fb_FileOpen
add esp, 24
test eax, eax
je .Lt_01B6
push 0
push 1
push -1
push dword ptr [ebp+8]
push 26
call ERRREPORTEX
add esp, 20
jmp .Lt_01B2
.Lt_01B6:
.Lt_01B5:
push dword ptr [ENV+240]
call HCHECKFILEFORMAT
add esp, 4
mov dword ptr [ENV+516], eax
call dword ptr [IR+12]
test eax, eax
jne .Lt_01B8
push 0
push 1
push -1
lea eax, [ENV+524]
push eax
push 26
call ERRREPORTEX
add esp, 20
jmp .Lt_01B2
.Lt_01B8:
.Lt_01B7:
push 1
call FBGETOPTION
add esp, 4
test eax, eax
je .Lt_01BA
call fb_FileFree
mov dword ptr [ENV+800], eax
push 0
push dword ptr [ENV+800]
push 0
push 0
push 3
push dword ptr [ebp+16]
call fb_FileOpen
add esp, 24
test eax, eax
je .Lt_01BC
push 0
push 1
push -1
mov eax, dword ptr [ebp+16]
push dword ptr [eax]
push 26
call ERRREPORTEX
add esp, 20
jmp .Lt_01B2
.Lt_01BC:
.Lt_01BB:
jmp .Lt_01B9
.Lt_01BA:
mov dword ptr [ENV+800], 0
.Lt_01B9:
call FBMAINBEGIN
call fb_Timer
fstp qword ptr [ebp-8]
call FBPARSEPREDEFINES
call FBPARSEPREINCLUDES
call FBSHOULDCONTINUE
test eax, eax
je .Lt_01BE
call CPROGRAM
.Lt_01BE:
.Lt_01BD:
call fb_Timer
fsub qword ptr [ebp-8]
fstp qword ptr [ebp-8]
call FBMAINEND
call FBISCROSSCOMP
test eax, eax
jne .Lt_01C0
cmp dword ptr [ENV+96], 3
jne .Lt_01C2
call HEMITOBJINFO
.Lt_01C2:
.Lt_01C1:
.Lt_01C0:
.Lt_01BF:
push dword ptr [ebp-4]
push dword ptr [ebp-8]
call dword ptr [IR+16]
add esp, 8
cmp dword ptr [ENV+800], 0
jle .Lt_01C4
push dword ptr [ENV+800]
call fb_FileClose
add esp, 4
test eax, eax
je .Lt_01C5
push 0
push 0
push offset Lt_0098
push 1046
call fb_ErrorThrowAt
add esp, 16
jmp eax
.Lt_01C5:
.Lt_01C4:
.Lt_01C3:
push dword ptr [ENV+240]
call fb_FileClose
add esp, 4
test eax, eax
je .Lt_01C6
push 0
push 0
push offset Lt_0098
push 1049
call fb_ErrorThrowAt
add esp, 16
jmp eax
.Lt_01C6:
call FBSHOULDCONTINUE
test eax, eax
je .Lt_01C8
push dword ptr [SYMB+98408]
call SYMBCHECKLABELS
add esp, 4
.Lt_01C8:
.Lt_01C7:
.Lt_01B2:
mov esp, ebp
pop ebp
ret
.size FBCOMPILE, .-FBCOMPILE
.balign 16

.globl FBSHOULDRESTART
FBSHOULDRESTART:
.type FBSHOULDRESTART, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_01C9:
mov eax, dword ptr [ENV+900]
mov dword ptr [ebp-4], eax
.Lt_01CA:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size FBSHOULDRESTART, .-FBSHOULDRESTART
.balign 16

.globl FBSHOULDCONTINUE
FBSHOULDCONTINUE:
.type FBSHOULDCONTINUE, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_01CB:
mov eax, dword ptr [ENV+900]
test eax, eax
sete al
shr eax, 1
sbb eax, eax
mov ebx, eax
call ERRGETCOUNT
cmp eax, dword ptr [ENV+172]
setl al
shr eax, 1
sbb eax, eax
and ebx, eax
mov dword ptr [ebp-4], ebx
.Lt_01CC:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size FBSHOULDCONTINUE, .-FBSHOULDCONTINUE
.balign 16

.globl FBSETLIBS
FBSETLIBS:
.type FBSETLIBS, @function
push ebp
mov ebp, esp
.Lt_01CF:
push dword ptr [ebp+8]
lea eax, [ENV+904]
push eax
call STRSETCOPY
add esp, 8
push dword ptr [ebp+12]
lea eax, [ENV+948]
push eax
call STRSETCOPY
add esp, 8
.Lt_01D0:
mov esp, ebp
pop ebp
ret
.size FBSETLIBS, .-FBSETLIBS
.balign 16

.globl FBGETLIBS
FBGETLIBS:
.type FBGETLIBS, @function
push ebp
mov ebp, esp
.Lt_01D1:
lea eax, [ENV+904]
push eax
push dword ptr [ebp+8]
call STRSETCOPY
add esp, 8
lea eax, [ENV+948]
push eax
push dword ptr [ebp+12]
call STRSETCOPY
add esp, 8
.Lt_01D2:
mov esp, ebp
pop ebp
ret
.size FBGETLIBS, .-FBGETLIBS
.balign 16

.globl FBPRAGMAONCE
FBPRAGMAONCE:
.type FBPRAGMAONCE, @function
.Lt_01D3:
push 1
push offset Lt_0000
push 261
lea eax, [ENV+244]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jle .Lt_01D6
lea eax, [ENV+244]
push eax
lea eax, [ENV+816]
push eax
call HFINDINCFILE
add esp, 8
test eax, eax
jne .Lt_01D8
lea eax, [ENV+244]
push eax
lea eax, [ENV+816]
push eax
call HADDINCFILE
add esp, 8
.Lt_01D8:
.Lt_01D7:
.Lt_01D6:
.Lt_01D5:
.Lt_01D4:
ret
.size FBPRAGMAONCE, .-FBPRAGMAONCE
.balign 16

.globl FBINCLUDEFILE
FBINCLUDEFILE:
.type FBINCLUDEFILE, @function
push ebp
mov ebp, esp
sub esp, 64
push ebx
.Lt_01F4:
mov dword ptr [ebp-4], 0
cmp dword ptr [ENV+828], 16
jl .Lt_01F7
push 0
push 0
push 27
call ERRREPORT
add esp, 12
call ERRHIDEFURTHERERRORS
jmp .Lt_01F5
.Lt_01F7:
.Lt_01F6:
push 0
push -1
lea eax, [ENV+244]
push eax
call HSTRIPFILENAME
add esp, 4
push eax
push 260
push offset Lt_0225
call fb_StrAssign
add esp, 20
push 0
push -1
push 0
push dword ptr [ebp+8]
push 260
push offset Lt_0225
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
lea eax, [ebp-16]
push eax
call fb_StrConcat
add esp, 20
push eax
push 260
push offset Lt_0225
call fb_StrAssign
add esp, 20
push offset Lt_0225
call HFILEEXISTS
add esp, 4
test eax, eax
jne .Lt_01FA
push dword ptr [ebp+8]
call HFILEEXISTS
add esp, 4
test eax, eax
jne .Lt_01FC
lea eax, [ENV+64]
push eax
call LISTGETHEAD
add esp, 4
mov dword ptr [ebp-28], eax
.Lt_01FD:
cmp dword ptr [ebp-28], 0
je .Lt_01FE
push 0
push -1
push 0
push dword ptr [ebp+8]
push -1
push 2
push offset Lt_0018
push -1
push dword ptr [ebp-28]
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
push 260
push offset Lt_0225
call fb_StrAssign
add esp, 20
push offset Lt_0225
call HFILEEXISTS
add esp, 4
test eax, eax
je .Lt_0202
jmp .Lt_01FE
.Lt_0202:
.Lt_0201:
push dword ptr [ebp-28]
call LISTGETNEXT
add esp, 4
mov dword ptr [ebp-28], eax
jmp .Lt_01FD
.Lt_01FE:
cmp dword ptr [ebp-28], 0
jne .Lt_0204
push 0
push 1
push 0
mov dword ptr [ebp-64], 0
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
push 0
push -1
push 2
push offset Lt_0205
push -1
push 0
push dword ptr [ebp+8]
push 2
push offset Lt_0205
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
push 23
call ERRREPORTEX
add esp, 20
lea eax, [ebp-64]
push eax
call fb_StrDelete
add esp, 4
call ERRHIDEFURTHERERRORS
jmp .Lt_01F5
.Lt_0204:
.Lt_0203:
jmp .Lt_01FB
.Lt_01FC:
push 0
push 0
push dword ptr [ebp+8]
push 260
push offset Lt_0225
call fb_StrAssign
add esp, 20
.Lt_01FB:
.Lt_01FA:
.Lt_01F9:
mov eax, offset Lt_0225
mov dword ptr [ebp-20], eax
lea eax, [ebp-20]
push eax
call IS_ROOTPATH
add esp, 4
test eax, eax
jne .Lt_020B
push 0
push -1
push 260
push offset Lt_0225
push -1
push 2
push offset Lt_0018
push -1
call HCURDIR
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
push 260
push offset Lt_0225
call fb_StrAssign
add esp, 20
.Lt_020B:
.Lt_020A:
mov eax, offset Lt_0225
mov dword ptr [ebp-24], eax
lea eax, [ebp-24]
push eax
call IS_ROOTPATH
add esp, 4
test eax, eax
jne .Lt_0210
push 0
push 1
push 0
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
push 0
push -1
push 2
push offset Lt_0205
push -1
push 260
push offset Lt_0225
push 2
push offset Lt_0205
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
push 23
call ERRREPORTEX
add esp, 20
lea eax, [ebp-60]
push eax
call fb_StrDelete
add esp, 4
call ERRHIDEFURTHERERRORS
jmp .Lt_01F5
.Lt_0210:
.Lt_020F:
push offset Lt_0225
call SOLVE_PATH
add esp, 4
test eax, eax
jne .Lt_0215
push 0
push 1
push 0
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
push 0
push -1
push 2
push offset Lt_0205
push -1
push 260
push offset Lt_0225
push 2
push offset Lt_0205
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
push 23
call ERRREPORTEX
add esp, 20
lea eax, [ebp-60]
push eax
call fb_StrDelete
add esp, 4
call ERRHIDEFURTHERERRORS
jmp .Lt_01F5
.Lt_0215:
.Lt_0214:
push 47
push offset Lt_0225
call HREPLACESLASH
add esp, 8
cmp dword ptr [ebp+12], 0
je .Lt_021A
push offset Lt_0225
lea eax, [ENV+804]
push eax
call HFINDINCFILE
add esp, 8
test eax, eax
je .Lt_021C
jmp .Lt_01F5
.Lt_021C:
.Lt_021B:
.Lt_021A:
.Lt_0219:
push offset Lt_0225
lea eax, [ENV+816]
push eax
call HFINDINCFILE
add esp, 8
test eax, eax
je .Lt_021E
jmp .Lt_01F5
.Lt_021E:
.Lt_021D:
push offset Lt_0225
lea eax, [ENV+804]
push eax
call HADDINCFILE
add esp, 8
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ENV+828]
imul eax, 280
add eax, dword ptr [INFILETB]
lea ebx, [eax]
lea eax, [ENV+240]
push edi
push esi
mov edi, ebx
mov esi, eax
mov ecx, 70
rep movsd
pop esi
pop edi
inc dword ptr [ENV+828]
push 0
push 260
push offset Lt_0225
push 261
lea eax, [ENV+244]
push eax
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ebp-4]
mov dword ptr [ENV+508], eax
call fb_FileFree
mov dword ptr [ENV+240], eax
push 0
push dword ptr [ENV+240]
push 0
push 1
push 0
push offset Lt_0225
call fb_StrAllocTempDescZ
add esp, 4
push eax
call fb_FileOpen
add esp, 24
test eax, eax
je .Lt_0220
push 0
push 1
push 0
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
push 0
push -1
push 2
push offset Lt_0205
push -1
push 0
push dword ptr [ebp+8]
push 2
push offset Lt_0205
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
push 23
call ERRREPORTEX
add esp, 20
lea eax, [ebp-60]
push eax
call fb_StrDelete
add esp, 4
call ERRHIDEFURTHERERRORS
jmp .Lt_01F5
.Lt_0220:
.Lt_021F:
push dword ptr [ENV+240]
call HCHECKFILEFORMAT
add esp, 4
mov dword ptr [ENV+516], eax
call LEXPUSHCTX
push -1
call LEXINIT
add esp, 4
call CPROGRAM
call LEXPOPCTX
push dword ptr [ENV+240]
call fb_FileClose
add esp, 4
test eax, eax
je .Lt_0224
push 0
push 0
push offset Lt_0098
push 1339
call fb_ErrorThrowAt
add esp, 16
jmp eax
.Lt_0224:
dec dword ptr [ENV+828]
lea eax, [ENV+240]
mov ebx, dword ptr [ENV+828]
imul ebx, 280
add ebx, dword ptr [INFILETB]
lea ecx, [ebx]
push ecx
push edi
push esi
mov edi, eax
mov esi, ecx
mov ecx, 70
rep movsd
pop esi
pop edi
pop ecx
.Lt_01F5:
pop ebx
mov esp, ebp
pop ebp
ret
.size FBINCLUDEFILE, .-FBINCLUDEFILE

.section .bss
.balign 4
	.lcomm	Lt_0225,260

.section .text
.balign 16

.globl FBGETLANGID
FBGETLANGID:
.type FBGETLANGID, @function
push ebp
mov ebp, esp
sub esp, 16
mov dword ptr [ebp-4], 0
.Lt_0226:
push 0
push -1
push 0
push dword ptr [ebp+8]
call fb_StrAllocTempDescZ
add esp, 4
push eax
call fb_StrLcase2
add esp, 8
push eax
push -1
lea eax, [ebp-16]
push eax
call fb_StrInit
add esp, 20
push 3
push offset Lt_0062
push -1
lea eax, [ebp-16]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_022A
.Lt_022B:
mov dword ptr [ebp-4], 0
jmp .Lt_0228
.Lt_022A:
push 11
push offset Lt_0063
push -1
lea eax, [ebp-16]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_022C
.Lt_022D:
mov dword ptr [ebp-4], 1
jmp .Lt_0228
.Lt_022C:
push 7
push offset Lt_0064
push -1
lea eax, [ebp-16]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_022E
.Lt_022F:
mov dword ptr [ebp-4], 2
jmp .Lt_0228
.Lt_022E:
push 3
push offset Lt_0065
push -1
lea eax, [ebp-16]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_0230
.Lt_0231:
mov dword ptr [ebp-4], 3
jmp .Lt_0228
.Lt_0230:
mov dword ptr [ebp-4], -1
.Lt_0232:
.Lt_0228:
lea eax, [ebp-16]
push eax
call fb_StrDelete
add esp, 4
.Lt_0227:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size FBGETLANGID, .-FBGETLANGID
.balign 16
fb_ctor__fb:
.type fb_ctor__fb, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__fb, .-fb_ctor__fb
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
HFINDINCFILE:
.type HFINDINCFILE, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_008B:
push 0
push 0
push dword ptr [ebp+12]
push -1
push offset Lt_0233
call fb_StrAssign
add esp, 20
push dword ptr [Lt_0233]
push dword ptr [ebp+8]
call HASHLOOKUP
add esp, 8
mov dword ptr [ebp-4], eax
.Lt_008C:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size HFINDINCFILE, .-HFINDINCFILE

.section .bss
.balign 4
	.lcomm	Lt_0233,12

.section .text
.balign 16
HADDINCFILE:
.type HADDINCFILE, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_008D:
push 0
push dword ptr [ebp+12]
call fb_StrLen
add esp, 8
inc eax
mov ebx, eax
push ebx
call XALLOCATE
add esp, 4
mov dword ptr [Lt_0234], eax
push 0
push 0
push dword ptr [ebp+12]
push 0
push dword ptr [Lt_0234]
call fb_StrAssign
add esp, 20
push dword ptr [Lt_0234]
call HASHHASH
add esp, 4
mov dword ptr [Lt_0235], eax
push dword ptr [Lt_0235]
push dword ptr [Lt_0234]
push dword ptr [ebp+8]
call HASHLOOKUPEX
add esp, 12
mov dword ptr [Lt_0236], eax
cmp dword ptr [Lt_0236], 0
jne .Lt_0090
push dword ptr [Lt_0235]
push dword ptr [Lt_0234]
push dword ptr [Lt_0234]
push dword ptr [ebp+8]
call HASHADD
add esp, 16
jmp .Lt_008F
.Lt_0090:
push dword ptr [Lt_0234]
call free
add esp, 4
mov eax, dword ptr [Lt_0236]
mov dword ptr [Lt_0234], eax
.Lt_008F:
mov eax, dword ptr [Lt_0234]
mov dword ptr [ebp-4], eax
.Lt_008E:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HADDINCFILE, .-HADDINCFILE

.section .bss
.balign 4
	.lcomm	Lt_0234,4
.balign 4
	.lcomm	Lt_0236,4
.balign 4
	.lcomm	Lt_0235,4

.section .text
.balign 16
HUPDATELANGOPTIONS:
.type HUPDATELANGOPTIONS, @function
push ebx
.Lt_00AB:
mov eax, dword ptr [ENV+136]
mov ebx, dword ptr [LANGTB+eax*8+4]
mov dword ptr [ENV+840], ebx
.Lt_00AC:
pop ebx
ret
.size HUPDATELANGOPTIONS, .-HUPDATELANGOPTIONS
.balign 16
HUPDATETARGETOPTIONS:
.type HUPDATETARGETOPTIONS, @function
push ebx
.Lt_00AD:
lea eax, [ENV+208]
mov ebx, dword ptr [ENV+108]
imul ebx, 20
lea ecx, [TARGETINFO+ebx]
push ecx
push edi
push esi
mov edi, eax
mov esi, ecx
mov ecx, 5
rep movsd
pop esi
pop edi
pop ecx
.Lt_00AE:
pop ebx
ret
.size HUPDATETARGETOPTIONS, .-HUPDATETARGETOPTIONS
.balign 16
HUPDATEBACKENDOPTIONS:
.type HUPDATEBACKENDOPTIONS, @function
.Lt_00AF:
cmp dword ptr [ENV+104], 0
jne .Lt_00B2
mov dword ptr [ENV+132], 0
jmp .Lt_00B1
.Lt_00B2:
mov dword ptr [ENV+132], 1
.Lt_00B1:
.Lt_00B0:
ret
.size HUPDATEBACKENDOPTIONS, .-HUPDATEBACKENDOPTIONS
.balign 16
HGETTARGETID:
.type HGETTARGETID, @function
push ebp
mov ebp, esp
sub esp, 52
push ebx
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_0119:
mov eax, dword ptr [ebp+12]
sal eax, 4
mov ebx, dword ptr [CPUTYPEINFO+eax+8]
mov dword ptr [ebp-16], ebx
push 0
push 0
mov ebx, dword ptr [ebp+8]
imul ebx, 20
push dword ptr [TARGETINFO+ebx]
push -1
lea ebx, [ebp-28]
push ebx
call fb_StrInit
add esp, 20
cmp dword ptr [ebp+8], 0
je .Lt_011D
.Lt_011E:
cmp dword ptr [ebp+8], 3
je .Lt_011D
.Lt_011F:
cmp dword ptr [ebp+8], 4
jne .Lt_011C
.Lt_011D:
cmp dword ptr [ebp-16], 0
jne .Lt_0121
push 0
push -1
lea eax, [ebp-28]
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrInit
add esp, 20
lea eax, [ebp-28]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_011A
.Lt_0121:
.Lt_0120:
.Lt_011C:
.Lt_011B:
mov eax, dword ptr [ebp+8]
test eax, eax
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp-16]
cmp ebx, 1
sete bl
shr ebx, 1
sbb ebx, ebx
and eax, ebx
je .Lt_0123
push 0
push 6
push offset Lt_0124
push -1
lea ebx, [ebp-12]
push ebx
call fb_StrInit
add esp, 20
lea ebx, [ebp-28]
push ebx
call fb_StrDelete
add esp, 4
jmp .Lt_011A
.Lt_0123:
.Lt_0122:
push 0
push -1
push 0
mov ebx, dword ptr [ebp-16]
push dword ptr [CPUFAMILYINFO+ebx*8]
push -1
push 2
push offset Lt_0125
push -1
lea ebx, [ebp-28]
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
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-28]
push eax
call fb_StrDelete
add esp, 4
.Lt_011A:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
pop ebx
mov esp, ebp
pop ebp
ret
.size HGETTARGETID, .-HGETTARGETID
.balign 16
FBPARSEPREDEFINES:
.type FBPARSEPREDEFINES, @function
push ebp
mov ebp, esp
sub esp, 32
.Lt_018D:
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ENV]
push eax
call LISTGETHEAD
add esp, 4
mov dword ptr [ebp-28], eax
.Lt_018F:
cmp dword ptr [ebp-28], 0
je .Lt_0190
push 1
push offset Lt_0191
call fb_StrAllocTempDescZEx
add esp, 8
push eax
push dword ptr [ebp-28]
push 1
call fb_StrInstr
add esp, 12
dec eax
mov dword ptr [ebp-32], eax
cmp dword ptr [ebp-32], 0
jge .Lt_0193
push -1
push dword ptr [ebp-28]
call fb_StrLen
add esp, 8
mov dword ptr [ebp-32], eax
.Lt_0193:
.Lt_0192:
push 0
push -1
push dword ptr [ebp-32]
push dword ptr [ebp-28]
call fb_LEFT
add esp, 8
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
push 0
push -1
push -1
push dword ptr [ebp-28]
call fb_StrLen
add esp, 8
sub eax, dword ptr [ebp-32]
dec eax
push eax
push dword ptr [ebp-28]
call fb_RIGHT
add esp, 8
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
jne .Lt_0195
push 0
push 2
push offset Lt_0004
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
.Lt_0195:
.Lt_0194:
push 0
push 0
push 0
push -1
lea eax, [ebp-24]
push eax
call fb_StrLen
add esp, 8
push eax
push dword ptr [ebp-24]
push dword ptr [ebp-12]
call SYMBADDDEFINE
add esp, 24
push dword ptr [ebp-28]
call LISTGETNEXT
add esp, 4
mov dword ptr [ebp-28], eax
jmp .Lt_018F
.Lt_0190:
lea eax, [ebp-24]
push eax
call fb_StrDelete
add esp, 4
lea eax, [ebp-12]
push eax
call fb_StrDelete
add esp, 4
.Lt_018E:
mov esp, ebp
pop ebp
ret
.size FBPARSEPREDEFINES, .-FBPARSEPREDEFINES
.balign 16
FBPARSEPREINCLUDES:
.type FBPARSEPREINCLUDES, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0196:
lea eax, [ENV+32]
push eax
call LISTGETHEAD
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_0198:
cmp dword ptr [ebp-4], 0
setne al
shr eax, 1
sbb eax, eax
mov ebx, eax
call FBSHOULDCONTINUE
and ebx, eax
je .Lt_0199
push -1
mov eax, dword ptr [ebp-4]
push dword ptr [eax]
call FBINCLUDEFILE
add esp, 8
push dword ptr [ebp-4]
call LISTGETNEXT
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_0198
.Lt_0199:
.Lt_0197:
pop ebx
mov esp, ebp
pop ebp
ret
.size FBPARSEPREINCLUDES, .-FBPARSEPREINCLUDES
.balign 16
HAPPENDFBCTINF:
.type HAPPENDFBCTINF, @function
push ebp
mov ebp, esp
.Lt_019A:
cmp dword ptr [ENV+992], 0
jne .Lt_019D
mov dword ptr [ENV+992], -1
call dword ptr [IR+224]
.Lt_019D:
.Lt_019C:
push dword ptr [ebp+8]
call dword ptr [IR+228]
add esp, 4
.Lt_019B:
mov esp, ebp
pop ebp
ret
.size HAPPENDFBCTINF, .-HAPPENDFBCTINF
.balign 16
HEMITOBJINFO:
.type HEMITOBJINFO, @function
push ebp
mov ebp, esp
sub esp, 16
.Lt_019E:
lea eax, [ENV+904]
push eax
call LISTGETHEAD
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_01A0:
cmp dword ptr [ebp-4], 0
je .Lt_01A1
mov eax, dword ptr [ebp-4]
cmp dword ptr [eax+12], 0
jne .Lt_01A3
push 0
call OBJINFOENCODE
add esp, 4
push eax
call HAPPENDFBCTINF
add esp, 4
mov eax, dword ptr [ebp-4]
push dword ptr [eax]
call HAPPENDFBCTINF
add esp, 4
.Lt_01A3:
.Lt_01A2:
push dword ptr [ebp-4]
call LISTGETNEXT
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_01A0
.Lt_01A1:
lea eax, [ENV+948]
push eax
call LISTGETHEAD
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_01A4:
cmp dword ptr [ebp-4], 0
je .Lt_01A5
mov eax, dword ptr [ebp-4]
cmp dword ptr [eax+12], 0
jne .Lt_01A7
push 1
call OBJINFOENCODE
add esp, 4
push eax
call HAPPENDFBCTINF
add esp, 4
mov eax, dword ptr [ebp-4]
push dword ptr [eax]
call HESCAPE
add esp, 4
push eax
call HAPPENDFBCTINF
add esp, 4
.Lt_01A7:
.Lt_01A6:
push dword ptr [ebp-4]
call LISTGETNEXT
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_01A4
.Lt_01A5:
cmp dword ptr [ENV+192], 0
je .Lt_01A9
push 2
call OBJINFOENCODE
add esp, 4
push eax
call HAPPENDFBCTINF
add esp, 4
.Lt_01A9:
.Lt_01A8:
cmp dword ptr [ENV+196], 0
je .Lt_01AB
push 3
call OBJINFOENCODE
add esp, 4
push eax
call HAPPENDFBCTINF
add esp, 4
.Lt_01AB:
.Lt_01AA:
cmp dword ptr [ENV+136], 0
je .Lt_01AD
push 4
call OBJINFOENCODE
add esp, 4
push eax
call HAPPENDFBCTINF
add esp, 4
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
push 0
push -1
push dword ptr [ENV+136]
call FBGETLANGNAME
add esp, 4
push eax
push -1
lea eax, [ebp-16]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-16]
call HAPPENDFBCTINF
add esp, 4
lea eax, [ebp-16]
push eax
call fb_StrDelete
add esp, 4
.Lt_01AD:
.Lt_01AC:
cmp dword ptr [ENV+992], 0
je .Lt_01B0
call dword ptr [IR+232]
.Lt_01B0:
.Lt_01AF:
.Lt_019F:
mov esp, ebp
pop ebp
ret
.size HEMITOBJINFO, .-HEMITOBJINFO
.balign 16
IS_ROOTPATH:
.type IS_ROOTPATH, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_01D9:
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 0
jne .Lt_01DC
jmp .Lt_01DA
.Lt_01DC:
.Lt_01DB:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
movzx eax, byte ptr [ebx]
cmp eax, 47
sete bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-4], ebx
.Lt_01DA:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size IS_ROOTPATH, .-IS_ROOTPATH
.balign 16
GET_ROOTPATH_LEN:
.type GET_ROOTPATH_LEN, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_01DD:
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+8]
movzx ebx, byte ptr [eax]
test ebx, ebx
jne .Lt_01E0
jmp .Lt_01DE
.Lt_01E0:
.Lt_01DF:
mov dword ptr [ebp-4], 1
.Lt_01DE:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size GET_ROOTPATH_LEN, .-GET_ROOTPATH_LEN
.balign 16
SOLVE_PATH:
.type SOLVE_PATH, @function
push ebp
mov ebp, esp
sub esp, 36
push ebx
mov dword ptr [ebp-4], 0
.Lt_01E1:
mov dword ptr [ebp-8], 0
push dword ptr [ebp+8]
call GET_ROOTPATH_LEN
add esp, 4
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp-12]
mov dword ptr [Lt_023B+eax*4], ebx
mov ebx, dword ptr [ebp-12]
mov dword ptr [ebp-28], ebx
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-20], 0
mov ebx, dword ptr [ebp-12]
mov dword ptr [ebp-24], ebx
push 0
push dword ptr [ebp+8]
call fb_StrLen
add esp, 8
dec eax
mov dword ptr [ebp-36], eax
jmp .Lt_01E5
.Lt_01E8:
mov eax, dword ptr [ebp+8]
add eax, dword ptr [ebp-24]
movzx ebx, byte ptr [eax]
mov dword ptr [ebp-32], ebx
cmp dword ptr [ebp-32], 47
sete bl
shr ebx, 1
sbb ebx, ebx
cmp dword ptr [ebp-32], 92
sete al
shr eax, 1
sbb eax, eax
or ebx, eax
je .Lt_01EB
cmp dword ptr [ebp-16], 0
jne .Lt_01ED
jmp .Lt_01EC
.Lt_01ED:
mov eax, dword ptr [ebp-20]
cmp eax, 1
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp-16]
cmp ebx, 1
sete bl
shr ebx, 1
sbb ebx, ebx
and eax, ebx
je .Lt_01EE
dec dword ptr [ebp-28]
jmp .Lt_01EC
.Lt_01EE:
mov ebx, dword ptr [ebp-20]
cmp ebx, 2
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp-16]
cmp eax, 2
sete al
shr eax, 1
sbb eax, eax
and ebx, eax
je .Lt_01EF
cmp dword ptr [ebp-8], 0
je .Lt_01F1
dec dword ptr [ebp-8]
.Lt_01F1:
.Lt_01F0:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [Lt_023B+eax*4]
mov dword ptr [ebp-28], ebx
jmp .Lt_01EC
.Lt_01EF:
mov bl, byte ptr [ebp-32]
mov eax, dword ptr [ebp+8]
add eax, dword ptr [ebp-28]
mov byte ptr [eax], bl
inc dword ptr [ebp-28]
inc dword ptr [ebp-8]
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebp-28]
mov dword ptr [Lt_023B+ebx*4], eax
.Lt_01EC:
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-20], 0
jmp .Lt_01EA
.Lt_01EB:
cmp dword ptr [ebp-32], 46
jne .Lt_01F3
inc dword ptr [ebp-20]
.Lt_01F3:
.Lt_01F2:
inc dword ptr [ebp-16]
mov al, byte ptr [ebp-32]
mov ebx, dword ptr [ebp+8]
add ebx, dword ptr [ebp-28]
mov byte ptr [ebx], al
inc dword ptr [ebp-28]
.Lt_01EA:
.Lt_01E6:
inc dword ptr [ebp-24]
.Lt_01E5:
mov eax, dword ptr [ebp-36]
cmp dword ptr [ebp-24], eax
jle .Lt_01E8
.Lt_01E7:
mov eax, dword ptr [ebp+8]
add eax, dword ptr [ebp-28]
mov byte ptr [eax], 0
mov dword ptr [ebp-4], -1
.Lt_01E2:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SOLVE_PATH, .-SOLVE_PATH

.section .bss
.balign 4
	.lcomm	Lt_023B,524
	#fbc-1.01.0/src/compiler/fb.bas' compilation took 0.0427549472078681 secs

.section .rodata
.balign 4
Lt_0000:	.ascii	"\0"
.balign 4
Lt_0004:	.ascii	"1\0"
.balign 4
Lt_0018:	.ascii	"/\0"

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
INFILETB:
.long 0
.long 0
.int 0
.int 280
.int 0
.skip 96,0
.balign 4
LANGTB:
.int Lt_0062
.int 536873471
.int Lt_0063
.int 738066591
.int Lt_0064
.int 738132125
.int Lt_0065
.int 738131968

.section .rodata
.balign 4
Lt_0062:	.ascii	"fb\0"
.balign 4
Lt_0063:	.ascii	"deprecated\0"
.balign 4
Lt_0064:	.ascii	"fblite\0"
.balign 4
Lt_0065:	.ascii	"qb\0"

.section .data
.balign 4
TARGETINFO:
.int Lt_0067
.int 5
.int 1
.int 1
.int 20
.int Lt_0068
.int 5
.int 1
.int 1
.int 21
.int Lt_0069
.int 11
.int 3
.int 2
.int 9
.int Lt_006A
.int 2
.int 3
.int 2
.int 8
.int Lt_006B
.int 11
.int 1
.int 1
.int 16
.int Lt_006C
.int 11
.int 3
.int 2
.int 25
.int Lt_006D
.int 11
.int 3
.int 2
.int 25
.int Lt_006E
.int 11
.int 3
.int 2
.int 25
.int Lt_006F
.int 11
.int 3
.int 2
.int 25

.section .rodata
.balign 4
Lt_0067:	.ascii	"win32\0"
.balign 4
Lt_0068:	.ascii	"cygwin\0"
.balign 4
Lt_0069:	.ascii	"linux\0"
.balign 4
Lt_006A:	.ascii	"dos\0"
.balign 4
Lt_006B:	.ascii	"xbox\0"
.balign 4
Lt_006C:	.ascii	"freebsd\0"
.balign 4
Lt_006D:	.ascii	"openbsd\0"
.balign 4
Lt_006E:	.ascii	"darwin\0"
.balign 4
Lt_006F:	.ascii	"netbsd\0"

.section .data
.balign 4
CPUFAMILYINFO:
.int Lt_0071
.int 1
.int Lt_0072
.int 13
.int Lt_0073
.int 15
.int Lt_0074
.int 16

.section .rodata
.balign 4
Lt_0071:	.ascii	"x86\0"
.balign 4
Lt_0072:	.ascii	"x86_64\0"
.balign 4
Lt_0073:	.ascii	"arm\0"
.balign 4
Lt_0074:	.ascii	"aarch64\0"

.section .data
.balign 4
CPUTYPEINFO:
.int Lt_0076
.int Lt_0077
.int 0
.int 32
.int Lt_0078
.int Lt_0079
.int 0
.int 32
.int Lt_007A
.int Lt_007B
.int 0
.int 32
.int Lt_007C
.int Lt_007D
.int 0
.int 32
.long 0
.int Lt_007E
.int 0
.int 32
.long 0
.int Lt_007F
.int 0
.int 32
.long 0
.int Lt_0080
.int 0
.int 32
.long 0
.int Lt_0081
.int 0
.int 32
.long 0
.int Lt_0082
.int 0
.int 32
.long 0
.int Lt_0083
.int 0
.int 32
.long 0
.int Lt_0084
.int 0
.int 32
.long 0
.int Lt_0085
.int 0
.int 32
.int Lt_0086
.int Lt_0087
.int 0
.int 32
.long 0
.int Lt_0088
.int 1
.int 64
.long 0
.int Lt_0089
.int 2
.int 32
.long 0
.int Lt_008A
.int 2
.int 32
.long 0
.int Lt_0074
.int 3
.int 64

.section .rodata
.balign 4
Lt_0076:	.ascii	"i386\0"
.balign 4
Lt_0077:	.ascii	"386\0"
.balign 4
Lt_0078:	.ascii	"i486\0"
.balign 4
Lt_0079:	.ascii	"486\0"
.balign 4
Lt_007A:	.ascii	"i586\0"
.balign 4
Lt_007B:	.ascii	"586\0"
.balign 4
Lt_007C:	.ascii	"i686\0"
.balign 4
Lt_007D:	.ascii	"686\0"
.balign 4
Lt_007E:	.ascii	"athlon\0"
.balign 4
Lt_007F:	.ascii	"athlon-xp\0"
.balign 4
Lt_0080:	.ascii	"athlon-fx\0"
.balign 4
Lt_0081:	.ascii	"k8-sse3\0"
.balign 4
Lt_0082:	.ascii	"pentium-mmx\0"
.balign 4
Lt_0083:	.ascii	"pentium2\0"
.balign 4
Lt_0084:	.ascii	"pentium3\0"
.balign 4
Lt_0085:	.ascii	"pentium4\0"
.balign 4
Lt_0086:	.ascii	"prescott\0"
.balign 4
Lt_0087:	.ascii	"pentium4-sse3\0"
.balign 4
Lt_0088:	.ascii	"x86-64\0"
.balign 4
Lt_0089:	.ascii	"armv6\0"
.balign 4
Lt_008A:	.ascii	"armv7-a\0"
.balign 4
Lt_0098:	.ascii	"fbc-1.01.0/src/compiler/fb.bas\0"
.balign 4
Lt_0124:	.ascii	"win64\0"
.balign 4
Lt_0125:	.ascii	"-\0"
.balign 4
Lt_0154:	.ascii	"native\0"
.balign 4
Lt_0161:	.ascii	"32\0"
.balign 4
Lt_0164:	.ascii	"64\0"
.balign 4
Lt_016F:	.ascii	"amd64\0"
.balign 4
Lt_0177:	.ascii	"XBoxStartup\0"
.balign 4
Lt_0178:	.ascii	"main\0"
.balign 4
Lt_017D:	.ascii	"fb_ctor__\0"
.balign 4
Lt_0191:	.ascii	"=\0"
.balign 4
Lt_0205:	.ascii	"\"\0"

.section .ctors, "aw", @progbits
.int fb_ctor__fb
