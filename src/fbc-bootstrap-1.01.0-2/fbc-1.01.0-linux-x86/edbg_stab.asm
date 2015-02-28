	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/edbg_stab.bas' compilation started at 15:27:33 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl EDBGINIT
EDBGINIT:
.type EDBGINIT, @function
push ebx
.Lt_0085:
mov eax, dword ptr [ENV+212]
mov ebx, dword ptr [REMAPTB+eax*4]
mov dword ptr [REMAPTB+24], ebx
.Lt_0086:
pop ebx
ret
.size EDBGINIT, .-EDBGINIT
.balign 16

.globl EDBGEMITHEADER
EDBGEMITHEADER:
.type EDBGEMITHEADER, @function
push ebp
mov ebp, esp
sub esp, 72
.Lt_009C:
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
cmp dword ptr [ENV+144], 0
jne .Lt_009F
lea eax, [ebp-12]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_009D
.Lt_009F:
.Lt_009E:
mov dword ptr [CTX], 1
mov dword ptr [CTX+4], 0
mov dword ptr [CTX+292], 0
push 0
push 0
push dword ptr [ebp+8]
push 261
lea eax, [CTX+28]
push eax
call fb_StrAssign
add esp, 20
push 0
push 0
call SYMBUNIQUELABEL
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
push -1
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
push 0
push -1
push 2
push offset Lt_008A
push -1
push 0
push dword ptr [ebp+8]
call HESCAPE
add esp, 4
push eax
push 8
push offset Lt_00A1
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
call EMITWRITESTR
add esp, 8
lea eax, [ebp-48]
push eax
call fb_StrDelete
add esp, 4
push dword ptr [ebp+8]
call PATHISABSOLUTE
add esp, 4
test eax, eax
jne .Lt_00A6
push dword ptr [ebp-12]
push 0
push 0
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
mov dword ptr [ebp-64], 0
push 0
push -1
push 2
push offset Lt_0018
push -1
call HCURDIR
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
push 100
call HEMITSTABS
add esp, 20
lea eax, [ebp-72]
push eax
call fb_StrDelete
add esp, 4
.Lt_00A6:
.Lt_00A5:
push dword ptr [ebp-12]
push 0
push 0
push dword ptr [ebp+8]
push 100
call HEMITSTABS
add esp, 20
push 0
push 3
call dword ptr [EMIT+240]
add esp, 8
push dword ptr [ebp-12]
call HLABEL
add esp, 4
mov dword ptr [ebp-52], 0
.Lt_00AC:
push offset Lt_0006
push 0
push 0
mov eax, dword ptr [ebp-52]
push dword ptr [STABSTB+eax*4]
push 128
call HEMITSTABS
add esp, 20
inc dword ptr [CTX]
.Lt_00AA:
inc dword ptr [ebp-52]
.Lt_00A9:
cmp dword ptr [ebp-52], 14
jle .Lt_00AC
.Lt_00AB:
push 0
push offset Lt_0000
call EMITWRITESTR
add esp, 8
push offset Lt_0006
push 0
push 0
push dword ptr [ebp+8]
push 130
call HEMITSTABS
add esp, 20
lea eax, [ebp-12]
push eax
call fb_StrDelete
add esp, 4
.Lt_009D:
mov esp, ebp
pop ebp
ret
.size EDBGEMITHEADER, .-EDBGEMITHEADER
.balign 16

.globl EDBGEMITFOOTER
EDBGEMITFOOTER:
.type EDBGEMITFOOTER, @function
.Lt_00AD:
cmp dword ptr [ENV+144], 0
jne .Lt_00B0
jmp .Lt_00AE
.Lt_00B0:
.Lt_00AF:
push 0
push 3
call dword ptr [EMIT+240]
add esp, 8
push 0
push 0
call SYMBUNIQUELABEL
push eax
push -1
push offset Lt_00B1
call fb_StrAssign
add esp, 20
push dword ptr [Lt_00B1]
push 0
push 0
push offset Lt_0000
push 100
call HEMITSTABS
add esp, 20
push dword ptr [Lt_00B1]
call HLABEL
add esp, 4
.Lt_00AE:
ret
.size EDBGEMITFOOTER, .-EDBGEMITFOOTER

.section .bss
.balign 4
	.lcomm	Lt_00B1,12

.section .text
.balign 16

.globl EDBGLINEBEGIN
EDBGLINEBEGIN:
.type EDBGLINEBEGIN, @function
push ebp
mov ebp, esp
.Lt_00B2:
cmp dword ptr [ENV+144], 0
jne .Lt_00B5
jmp .Lt_00B3
.Lt_00B5:
.Lt_00B4:
cmp dword ptr [CTX+8], 0
jle .Lt_00B7
mov eax, dword ptr [ebp+16]
sub eax, dword ptr [CTX+12]
mov dword ptr [CTX+12], eax
cmp dword ptr [CTX+12], 0
jle .Lt_00B9
push dword ptr [CTX+4]
push dword ptr [CTX+8]
push dword ptr [ebp+8]
call EDBGEMITLINE
add esp, 12
mov dword ptr [CTX+16], -1
.Lt_00B9:
.Lt_00B8:
.Lt_00B7:
.Lt_00B6:
mov eax, dword ptr [ebp+16]
mov dword ptr [CTX+12], eax
mov eax, dword ptr [ebp+12]
mov dword ptr [CTX+8], eax
cmp dword ptr [CTX+16], 0
je .Lt_00BB
push 4
push 0
call SYMBADDLABEL
add esp, 8
mov dword ptr [CTX+4], eax
push dword ptr [CTX+4]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
call HLABEL
add esp, 4
mov dword ptr [CTX+16], 0
.Lt_00BB:
.Lt_00BA:
.Lt_00B3:
mov esp, ebp
pop ebp
ret
.size EDBGLINEBEGIN, .-EDBGLINEBEGIN
.balign 16

.globl EDBGLINEEND
EDBGLINEEND:
.type EDBGLINEEND, @function
push ebp
mov ebp, esp
.Lt_00BC:
cmp dword ptr [ENV+144], 0
jne .Lt_00BF
jmp .Lt_00BD
.Lt_00BF:
.Lt_00BE:
cmp dword ptr [CTX+8], 0
jle .Lt_00C1
mov eax, dword ptr [ebp+16]
sub eax, dword ptr [CTX+12]
mov dword ptr [CTX+12], eax
cmp dword ptr [CTX+12], 0
jle .Lt_00C3
push dword ptr [CTX+4]
push dword ptr [CTX+8]
push dword ptr [ebp+8]
call EDBGEMITLINE
add esp, 12
mov dword ptr [CTX+16], -1
.Lt_00C3:
.Lt_00C2:
mov dword ptr [CTX+8], 0
.Lt_00C1:
.Lt_00C0:
.Lt_00BD:
mov esp, ebp
pop ebp
ret
.size EDBGLINEEND, .-EDBGLINEEND
.balign 16

.globl EDBGEMITLINE
EDBGEMITLINE:
.type EDBGEMITLINE, @function
push ebp
mov ebp, esp
sub esp, 36
.Lt_00C4:
cmp dword ptr [ENV+144], 0
jne .Lt_00C7
jmp .Lt_00C5
.Lt_00C7:
.Lt_00C6:
cmp dword ptr [CTX+20], -1
jne .Lt_00C9
mov eax, dword ptr [ebp+12]
mov dword ptr [CTX+20], eax
.Lt_00C9:
.Lt_00C8:
mov eax, dword ptr [ebp+12]
mov dword ptr [CTX+24], eax
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 0
push -1
push 0
push dword ptr [ebp+8]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
push -1
push 2
push offset Lt_00CA
push 0
push dword ptr [ebp+16]
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
push dword ptr [ebp+12]
push 0
push 68
call HMAKESTABN
add esp, 16
mov dword ptr [Lt_00CE], eax
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
push 0
push dword ptr [Lt_00CE]
call EMITWRITESTR
add esp, 8
.Lt_00C5:
mov esp, ebp
pop ebp
ret
.size EDBGEMITLINE, .-EDBGEMITLINE

.section .bss
.balign 4
	.lcomm	Lt_00CE,4

.section .text
.balign 16

.globl EDBGEMITLINEFLUSH
EDBGEMITLINEFLUSH:
.type EDBGEMITLINEFLUSH, @function
push ebp
mov ebp, esp
sub esp, 36
.Lt_00CF:
cmp dword ptr [ENV+144], 0
jne .Lt_00D2
jmp .Lt_00D0
.Lt_00D2:
.Lt_00D1:
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 0
push -1
push 0
push dword ptr [ebp+8]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
push -1
push 2
push offset Lt_00CA
push 0
push dword ptr [ebp+16]
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
push dword ptr [ebp+12]
push 0
push 68
call HEMITSTABN
add esp, 16
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
.Lt_00D0:
mov esp, ebp
pop ebp
ret
.size EDBGEMITLINEFLUSH, .-EDBGEMITLINEFLUSH
.balign 16

.globl EDBGSCOPEBEGIN
EDBGSCOPEBEGIN:
.type EDBGSCOPEBEGIN, @function
push ebp
mov ebp, esp
push ebx
.Lt_00D6:
cmp dword ptr [ENV+144], 0
jne .Lt_00D9
jmp .Lt_00D7
.Lt_00D9:
.Lt_00D8:
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [eax+16548]
mov dword ptr [ebx+68], ecx
push 4
push 0
call SYMBADDLABEL
add esp, 8
mov ecx, dword ptr [ebp+8]
mov dword ptr [ecx+76], eax
.Lt_00D7:
pop ebx
mov esp, ebp
pop ebp
ret
.size EDBGSCOPEBEGIN, .-EDBGSCOPEBEGIN
.balign 16

.globl EDBGSCOPEEND
EDBGSCOPEEND:
.type EDBGSCOPEEND, @function
push ebp
mov ebp, esp
push ebx
.Lt_00DA:
cmp dword ptr [ENV+144], 0
jne .Lt_00DD
jmp .Lt_00DB
.Lt_00DD:
.Lt_00DC:
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [eax+16548]
mov dword ptr [ebx+72], ecx
push 4
push 0
call SYMBADDLABEL
add esp, 8
mov ecx, dword ptr [ebp+8]
mov dword ptr [ecx+80], eax
.Lt_00DB:
pop ebx
mov esp, ebp
pop ebp
ret
.size EDBGSCOPEEND, .-EDBGSCOPEEND
.balign 16

.globl EDBGEMITSCOPEINI
EDBGEMITSCOPEINI:
.type EDBGEMITSCOPEINI, @function
push ebp
mov ebp, esp
.Lt_00DE:
cmp dword ptr [ENV+144], 0
jne .Lt_00E1
jmp .Lt_00DF
.Lt_00E1:
.Lt_00E0:
mov eax, dword ptr [ebp+8]
push dword ptr [eax+76]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
call HLABEL
add esp, 4
.Lt_00DF:
mov esp, ebp
pop ebp
ret
.size EDBGEMITSCOPEINI, .-EDBGEMITSCOPEINI
.balign 16

.globl EDBGEMITSCOPEEND
EDBGEMITSCOPEEND:
.type EDBGEMITSCOPEEND, @function
push ebp
mov ebp, esp
.Lt_00E2:
cmp dword ptr [ENV+144], 0
jne .Lt_00E5
jmp .Lt_00E3
.Lt_00E5:
.Lt_00E4:
mov eax, dword ptr [ebp+8]
push dword ptr [eax+80]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
call HLABEL
add esp, 4
.Lt_00E3:
mov esp, ebp
pop ebp
ret
.size EDBGEMITSCOPEEND, .-EDBGEMITSCOPEEND
.balign 16

.globl EDBGPROCBEGIN
EDBGPROCBEGIN:
.type EDBGPROCBEGIN, @function
push ebp
mov ebp, esp
push ebx
.Lt_00E6:
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebx+108]
mov ebx, dword ptr [eax+16548]
mov dword ptr [ecx+16], ebx
.Lt_00E7:
pop ebx
mov esp, ebp
pop ebp
ret
.size EDBGPROCBEGIN, .-EDBGPROCBEGIN
.balign 16

.globl EDBGPROCEND
EDBGPROCEND:
.type EDBGPROCEND, @function
push ebp
mov ebp, esp
push ebx
.Lt_00E8:
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebx+108]
mov ebx, dword ptr [eax+16548]
mov dword ptr [ecx+20], ebx
.Lt_00E9:
pop ebx
mov esp, ebp
pop ebp
ret
.size EDBGPROCEND, .-EDBGPROCEND
.balign 16

.globl EDBGPROCEMITBEGIN
EDBGPROCEMITBEGIN:
.type EDBGPROCEMITBEGIN, @function
push ebp
mov ebp, esp
.Lt_00EA:
mov dword ptr [CTX+20], -1
mov dword ptr [CTX+24], -1
.Lt_00EB:
mov esp, ebp
pop ebp
ret
.size EDBGPROCEMITBEGIN, .-EDBGPROCEMITBEGIN
.balign 16

.globl EDBGEMITPROCHEADER
EDBGEMITPROCHEADER:
.type EDBGEMITPROCHEADER, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
.Lt_00F4:
cmp dword ptr [ENV+144], 0
jne .Lt_00F7
jmp .Lt_00F5
.Lt_00F7:
.Lt_00F6:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+108]
push dword ptr [ebx+24]
call EDBGINCLUDE
add esp, 4
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+8]
and eax, 4096
test eax, eax
je .Lt_00F9
push dword ptr [ebp+8]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
push 1
push 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
push 0
push -1
call FBGETENTRYPOINT
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-12]
push 42
call HEMITSTABS
add esp, 20
lea eax, [ebp-12]
push eax
call fb_StrDelete
add esp, 4
push 1
push 0
push 68
call HEMITSTABD
add esp, 12
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+108]
mov dword ptr [ebx+16], 1
mov ebx, dword ptr [LEX+839664]
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+108]
mov eax, dword ptr [ebx+16548]
mov dword ptr [ecx+20], eax
push 0
push -1
call FBGETENTRYPOINT
push eax
push -1
push offset Lt_00FF
call fb_StrAssign
add esp, 20
jmp .Lt_00F8
.Lt_00F9:
push 0
push 0
push dword ptr [ebp+8]
call SYMBGETDBGNAME
add esp, 4
push eax
push -1
push offset Lt_00FF
call fb_StrAssign
add esp, 20
.Lt_00F8:
push 0
push 0
push dword ptr [ebp+8]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
push -1
push offset Lt_0100
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+4]
and ecx, 32
test ecx, ecx
je .Lt_00FC
push 0
push 3
push offset Lt_00FD
push -1
push offset Lt_00FF
call fb_StrConcatAssign
add esp, 20
jmp .Lt_00FB
.Lt_00FC:
push 0
push 3
push offset Lt_00FE
push -1
push offset Lt_00FF
call fb_StrConcatAssign
add esp, 20
.Lt_00FB:
push 0
push -1
push 0
push dword ptr [ebp+8]
call HGETDATATYPE
add esp, 8
push eax
push -1
push offset Lt_00FF
call fb_StrConcatAssign
add esp, 20
push dword ptr [Lt_0100]
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+108]
push dword ptr [ecx+16]
push 0
push dword ptr [Lt_00FF]
push 36
call HEMITSTABS
add esp, 20
push dword ptr [ebp+8]
call HDECLARGS
add esp, 4
mov dword ptr [CTX+16], -1
mov dword ptr [CTX+8], 0
mov dword ptr [CTX+12], 0
mov dword ptr [CTX+4], 0
.Lt_00F5:
pop ebx
mov esp, ebp
pop ebp
ret
.size EDBGEMITPROCHEADER, .-EDBGEMITPROCHEADER

.section .bss
.balign 4
	.lcomm	Lt_00FF,12
.balign 4
	.lcomm	Lt_0100,12

.section .text
.balign 16

.globl EDBGEMITPROCFOOTER
EDBGEMITPROCFOOTER:
.type EDBGEMITPROCFOOTER, @function
push ebp
mov ebp, esp
sub esp, 36
.Lt_011D:
cmp dword ptr [ENV+144], 0
jne .Lt_0120
jmp .Lt_011E
.Lt_0120:
.Lt_011F:
push 0
push 0
push dword ptr [ebp+8]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
push -1
push offset Lt_0124
call fb_StrAssign
add esp, 20
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push dword ptr [ebp+8]
call HDECLLOCALVARS
add esp, 16
push 0
push 0
call SYMBUNIQUELABEL
push eax
push -1
push offset Lt_0125
call fb_StrAssign
add esp, 20
push dword ptr [Lt_0125]
call HLABEL
add esp, 4
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 0
push -1
push -1
push offset Lt_0124
push -1
push 2
push offset Lt_00CA
push -1
push offset Lt_0125
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
push 0
push 0
push offset Lt_0000
push 36
call HEMITSTABS
add esp, 20
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [CTX+16], -1
mov dword ptr [CTX+8], 0
mov dword ptr [CTX+12], 0
mov dword ptr [CTX+4], 0
.Lt_011E:
mov esp, ebp
pop ebp
ret
.size EDBGEMITPROCFOOTER, .-EDBGEMITPROCFOOTER

.section .bss
.balign 4
	.lcomm	Lt_0124,12
.balign 4
	.lcomm	Lt_0125,12

.section .text
.balign 16

.globl EDBGEMITGLOBALVAR
EDBGEMITGLOBALVAR:
.type EDBGEMITGLOBALVAR, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
.Lt_017E:
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
cmp dword ptr [ENV+144], 0
jne .Lt_0181
lea eax, [ebp-20]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_017F
.Lt_0181:
.Lt_0180:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 128
test ebx, ebx
je .Lt_0183
lea ebx, [ebp-20]
push ebx
call fb_StrDelete
add esp, 4
jmp .Lt_017F
.Lt_0183:
.Lt_0182:
cmp dword ptr [ebp+12], 0
jne .Lt_0185
.Lt_0186:
mov dword ptr [ebp-4], 36
jmp .Lt_0184
.Lt_0185:
cmp dword ptr [ebp+12], 2
jne .Lt_0187
.Lt_0188:
mov dword ptr [ebp-4], 40
jmp .Lt_0184
.Lt_0187:
mov dword ptr [ebp-4], 38
.Lt_0189:
.Lt_0184:
push 0
push 0
push dword ptr [ebp+8]
call SYMBGETDBGNAME
add esp, 4
push eax
push -1
lea eax, [ebp-20]
push eax
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 32
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+4]
and ecx, 8
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
or ebx, ecx
je .Lt_018B
push 0
push 3
push offset Lt_018C
push -1
lea ecx, [ebp-20]
push ecx
call fb_StrConcatAssign
add esp, 20
jmp .Lt_018A
.Lt_018B:
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+4]
and ecx, 2
test ecx, ecx
je .Lt_018D
push 0
push 3
push offset Lt_018E
push -1
lea ecx, [ebp-20]
push ecx
call fb_StrConcatAssign
add esp, 20
jmp .Lt_018A
.Lt_018D:
push 0
push 2
push offset Lt_009B
push -1
lea eax, [ebp-20]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_018A:
push 0
push -1
push 0
push dword ptr [ebp+8]
call HGETDATATYPE
add esp, 8
push eax
push -1
lea eax, [ebp-20]
push eax
call fb_StrConcatAssign
add esp, 20
push dword ptr [ebp+8]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
push 0
push 0
push dword ptr [ebp-20]
push dword ptr [ebp-4]
call HEMITSTABS
add esp, 20
lea eax, [ebp-20]
push eax
call fb_StrDelete
add esp, 4
.Lt_017F:
pop ebx
mov esp, ebp
pop ebp
ret
.size EDBGEMITGLOBALVAR, .-EDBGEMITGLOBALVAR
.balign 16

.globl EDBGEMITLOCALVAR
EDBGEMITLOCALVAR:
.type EDBGEMITLOCALVAR, @function
push ebp
mov ebp, esp
sub esp, 28
push ebx
.Lt_0191:
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
cmp dword ptr [ENV+144], 0
jne .Lt_0194
lea eax, [ebp-28]
push eax
call fb_StrDelete
add esp, 4
lea eax, [ebp-16]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0192
.Lt_0194:
.Lt_0193:
push 0
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax+12]
push -1
lea eax, [ebp-16]
push eax
call fb_StrAssign
add esp, 20
cmp dword ptr [ebp+12], 0
je .Lt_0196
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+8]
and ebx, 2
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_0198
lea ebx, [ebp-28]
push ebx
call fb_StrDelete
add esp, 4
lea ebx, [ebp-16]
push ebx
call fb_StrDelete
add esp, 4
jmp .Lt_0192
.Lt_0198:
.Lt_0197:
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx+52], 0
je .Lt_019A
mov dword ptr [ebp-4], 38
jmp .Lt_0199
.Lt_019A:
mov dword ptr [ebp-4], 40
.Lt_0199:
push 0
push 3
push offset Lt_019B
push -1
lea ebx, [ebp-16]
push ebx
call fb_StrConcatAssign
add esp, 20
push 0
push 0
push dword ptr [ebp+8]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
push -1
lea eax, [ebp-28]
push eax
call fb_StrAssign
add esp, 20
jmp .Lt_0195
.Lt_0196:
mov dword ptr [ebp-4], 128
push 0
push 2
push offset Lt_009B
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+48]
push dword ptr [eax+44]
call fb_LongintToStr
add esp, 8
push eax
push -1
lea eax, [ebp-28]
push eax
call fb_StrAssign
add esp, 20
.Lt_0195:
push 0
push -1
push 0
push dword ptr [ebp+8]
call HGETDATATYPE
add esp, 8
push eax
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
push dword ptr [ebp-28]
push 0
push 0
push dword ptr [ebp-16]
push dword ptr [ebp-4]
call HEMITSTABS
add esp, 20
lea eax, [ebp-28]
push eax
call fb_StrDelete
add esp, 4
lea eax, [ebp-16]
push eax
call fb_StrDelete
add esp, 4
.Lt_0192:
pop ebx
mov esp, ebp
pop ebp
ret
.size EDBGEMITLOCALVAR, .-EDBGEMITLOCALVAR
.balign 16

.globl EDBGEMITPROCARG
EDBGEMITPROCARG:
.type EDBGEMITPROCARG, @function
push ebp
mov ebp, esp
sub esp, 36
push ebx
.Lt_019D:
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
cmp dword ptr [ENV+144], 0
jne .Lt_01A0
lea eax, [ebp-12]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_019E
.Lt_01A0:
.Lt_019F:
push 0
push -1
push 2
push offset Lt_009B
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax+12]
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
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 131072
test ebx, ebx
je .Lt_01A3
push 0
push 2
push offset Lt_01A4
push -1
lea ebx, [ebp-12]
push ebx
call fb_StrConcatAssign
add esp, 20
jmp .Lt_01A2
.Lt_01A3:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 262144
test ebx, ebx
je .Lt_01A5
push 0
push 2
push offset Lt_01A6
push -1
lea ebx, [ebp-12]
push ebx
call fb_StrConcatAssign
add esp, 20
jmp .Lt_01A2
.Lt_01A5:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 65536
test ebx, ebx
je .Lt_01A7
push 0
push 2
push offset Lt_01A6
push -1
lea ebx, [ebp-12]
push ebx
call fb_StrConcatAssign
add esp, 20
.Lt_01A7:
.Lt_01A2:
push 0
push -1
push 0
push dword ptr [ebp+8]
call HGETDATATYPE
add esp, 8
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrConcatAssign
add esp, 20
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 0
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+48]
push dword ptr [eax+44]
call fb_LongintToStr
add esp, 8
push eax
push -1
lea eax, [ebp-36]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-36]
push 0
push 0
push dword ptr [ebp-12]
push 160
call HEMITSTABS
add esp, 20
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
lea eax, [ebp-12]
push eax
call fb_StrDelete
add esp, 4
.Lt_019E:
pop ebx
mov esp, ebp
pop ebp
ret
.size EDBGEMITPROCARG, .-EDBGEMITPROCARG
.balign 16

.globl EDBGINCLUDE
EDBGINCLUDE:
.type EDBGINCLUDE, @function
push ebp
mov ebp, esp
sub esp, 12
.Lt_01A9:
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
mov eax, dword ptr [CTX+292]
cmp dword ptr [ebp+8], eax
jne .Lt_01AC
lea eax, [ebp-12]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_01AA
.Lt_01AC:
.Lt_01AB:
cmp dword ptr [CTX+292], 0
je .Lt_01AE
push offset Lt_0006
push 0
push 0
push offset Lt_0000
push 162
call HEMITSTABS
add esp, 20
cmp dword ptr [ebp+8], 0
jne .Lt_01B0
push 0
push 3
call dword ptr [EMIT+240]
add esp, 8
push 0
push 0
call SYMBUNIQUELABEL
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-12]
push 0
push 0
lea eax, [CTX+28]
push eax
push 132
call HEMITSTABS
add esp, 20
push dword ptr [ebp-12]
call HLABEL
add esp, 4
.Lt_01B0:
.Lt_01AF:
.Lt_01AE:
.Lt_01AD:
mov eax, dword ptr [ebp+8]
mov dword ptr [CTX+292], eax
cmp dword ptr [ebp+8], 0
je .Lt_01B2
push offset Lt_0006
push 0
push 0
push dword ptr [ebp+8]
push 130
call HEMITSTABS
add esp, 20
push 0
push 3
call dword ptr [EMIT+240]
add esp, 8
push 0
push 0
call SYMBUNIQUELABEL
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-12]
push 0
push 0
push dword ptr [ebp+8]
push 132
call HEMITSTABS
add esp, 20
push dword ptr [ebp-12]
call HLABEL
add esp, 4
.Lt_01B2:
.Lt_01B1:
lea eax, [ebp-12]
push eax
call fb_StrDelete
add esp, 4
.Lt_01AA:
mov esp, ebp
pop ebp
ret
.size EDBGINCLUDE, .-EDBGINCLUDE
.balign 16
fb_ctor__edbg_stab:
.type fb_ctor__edbg_stab, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__edbg_stab, .-fb_ctor__edbg_stab
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
HEMITSTABS:
.type HEMITSTABS, @function
push ebp
mov ebp, esp
sub esp, 24
.Lt_0087:
push 0
push 9
push offset Lt_008B
push -1
push offset Lt_01B3
call fb_StrAssign
add esp, 20
push 0
push -1
push 0
push dword ptr [ebp+12]
call HESCAPE
add esp, 4
push eax
push -1
push offset Lt_01B3
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_01B3
call fb_StrAssign
add esp, 20
push 0
push 3
push offset Lt_008E
push -1
push offset Lt_01B3
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push dword ptr [ebp+8]
call fb_IntToStr
add esp, 4
push eax
push -1
push offset Lt_01B3
call fb_StrConcatAssign
add esp, 20
push 0
push 2
push offset Lt_008D
push -1
push offset Lt_01B3
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push dword ptr [ebp+16]
call fb_IntToStr
add esp, 4
push eax
push -1
push offset Lt_01B3
call fb_StrConcatAssign
add esp, 20
push 0
push 2
push offset Lt_008D
push -1
push offset Lt_01B3
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push dword ptr [ebp+20]
call fb_IntToStr
add esp, 4
push eax
push -1
push offset Lt_01B3
call fb_StrConcatAssign
add esp, 20
push 0
push 2
push offset Lt_008D
push -1
push offset Lt_01B3
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push 0
push dword ptr [ebp+24]
push -1
push offset Lt_01B3
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ebp-24]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_01B3
call fb_StrAssign
add esp, 20
push -1
push dword ptr [Lt_01B3]
call EMITWRITESTR
add esp, 8
.Lt_0088:
mov esp, ebp
pop ebp
ret
.size HEMITSTABS, .-HEMITSTABS

.section .bss
.balign 4
	.lcomm	Lt_01B3,12

.section .text
.balign 16
HMAKESTABN:
.type HMAKESTABN, @function
push ebp
mov ebp, esp
sub esp, 16
mov dword ptr [ebp-4], 0
.Lt_0090:
push 0
push 8
push offset Lt_0092
push -1
push offset Lt_01B4
call fb_StrAssign
add esp, 20
push 0
push -1
push dword ptr [ebp+8]
call fb_IntToStr
add esp, 4
push eax
push -1
push offset Lt_01B4
call fb_StrConcatAssign
add esp, 20
push 0
push 2
push offset Lt_008D
push -1
push offset Lt_01B4
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push dword ptr [ebp+12]
call fb_IntToStr
add esp, 4
push eax
push -1
push offset Lt_01B4
call fb_StrConcatAssign
add esp, 20
push 0
push 2
push offset Lt_008D
push -1
push offset Lt_01B4
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push dword ptr [ebp+16]
call fb_IntToStr
add esp, 4
push eax
push -1
push offset Lt_01B4
call fb_StrConcatAssign
add esp, 20
push 0
push 2
push offset Lt_008D
push -1
push offset Lt_01B4
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push 0
push dword ptr [ebp+20]
push -1
push offset Lt_01B4
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
lea eax, [ebp-16]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_01B4
call fb_StrAssign
add esp, 20
mov eax, dword ptr [Lt_01B4]
mov dword ptr [ebp-4], eax
.Lt_0091:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size HMAKESTABN, .-HMAKESTABN

.section .bss
.balign 4
	.lcomm	Lt_01B4,12

.section .text
.balign 16
HEMITSTABN:
.type HEMITSTABN, @function
push ebp
mov ebp, esp
.Lt_0094:
push -1
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HMAKESTABN
add esp, 16
push eax
call EMITWRITESTR
add esp, 8
.Lt_0095:
mov esp, ebp
pop ebp
ret
.size HEMITSTABN, .-HEMITSTABN
.balign 16
HEMITSTABD:
.type HEMITSTABD, @function
push ebp
mov ebp, esp
.Lt_0096:
push 0
push 8
push offset Lt_0098
push -1
push offset Lt_01B5
call fb_StrAssign
add esp, 20
push 0
push -1
push dword ptr [ebp+8]
call fb_IntToStr
add esp, 4
push eax
push -1
push offset Lt_01B5
call fb_StrConcatAssign
add esp, 20
push 0
push 2
push offset Lt_008D
push -1
push offset Lt_01B5
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push dword ptr [ebp+12]
call fb_IntToStr
add esp, 4
push eax
push -1
push offset Lt_01B5
call fb_StrConcatAssign
add esp, 20
push 0
push 2
push offset Lt_008D
push -1
push offset Lt_01B5
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push dword ptr [ebp+16]
call fb_IntToStr
add esp, 4
push eax
push -1
push offset Lt_01B5
call fb_StrConcatAssign
add esp, 20
push -1
push dword ptr [Lt_01B5]
call EMITWRITESTR
add esp, 8
.Lt_0097:
mov esp, ebp
pop ebp
ret
.size HEMITSTABD, .-HEMITSTABD

.section .bss
.balign 4
	.lcomm	Lt_01B5,12

.section .text
.balign 16
HLABEL:
.type HLABEL, @function
push ebp
mov ebp, esp
.Lt_0099:
push 0
push 0
push dword ptr [ebp+8]
push -1
push offset Lt_01B6
call fb_StrAssign
add esp, 20
push 0
push 2
push offset Lt_009B
push -1
push offset Lt_01B6
call fb_StrConcatAssign
add esp, 20
push 0
push dword ptr [Lt_01B6]
call EMITWRITESTR
add esp, 8
.Lt_009A:
mov esp, ebp
pop ebp
ret
.size HLABEL, .-HLABEL

.section .bss
.balign 4
	.lcomm	Lt_01B6,12

.section .text
.balign 16
HDECLARGS:
.type HDECLARGS, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_00EC:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-4], ebx
.Lt_00EE:
cmp dword ptr [ebp-4], 0
je .Lt_00EF
mov ebx, dword ptr [ebp-4]
cmp dword ptr [ebx], 1
jne .Lt_00F1
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebx+4]
and eax, 458752
test eax, eax
je .Lt_00F3
push dword ptr [ebp-4]
call EDBGEMITPROCARG
add esp, 4
.Lt_00F3:
.Lt_00F2:
.Lt_00F1:
.Lt_00F0:
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+160]
mov dword ptr [ebp-4], ebx
jmp .Lt_00EE
.Lt_00EF:
.Lt_00ED:
pop ebx
mov esp, ebp
pop ebp
ret
.size HDECLARGS, .-HDECLARGS
.balign 16
HDECLLOCALVARS:
.type HDECLLOCALVARS, @function
push ebp
mov ebp, esp
sub esp, 84
push ebx
.Lt_0101:
mov dword ptr [ebp-4], 0
mov dword ptr [ebp-8], 0
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax], 3
jne .Lt_0104
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-4], ebx
jmp .Lt_0103
.Lt_0104:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+60]
mov dword ptr [ebp-4], eax
.Lt_0103:
mov dword ptr [Lt_01B7], 0
mov eax, dword ptr [ebp-4]
mov dword ptr [ebp-8], eax
.Lt_0105:
cmp dword ptr [ebp-8], 0
je .Lt_0106
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-84], ebx
cmp dword ptr [ebp-84], 1
jne .Lt_0109
.Lt_010A:
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx+4]
and eax, 21430276
test eax, eax
jne .Lt_010C
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+8]
and ebx, 16
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_010E
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx+4]
and eax, 2
test eax, eax
setne al
shr eax, 1
sbb eax, eax
push eax
push dword ptr [ebp-8]
call EDBGEMITLOCALVAR
add esp, 8
.Lt_010E:
.Lt_010D:
.Lt_010C:
.Lt_010B:
jmp .Lt_0107
.Lt_0109:
cmp dword ptr [ebp-84], 15
jne .Lt_010F
.Lt_0110:
inc dword ptr [Lt_01B7]
.Lt_010F:
.Lt_0107:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+160]
mov dword ptr [ebp-8], ebx
jmp .Lt_0105
.Lt_0106:
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
push 0
push -1
push 0
push dword ptr [ebp+8]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
push -1
push 2
push offset Lt_00CA
push 0
push dword ptr [ebp+16]
call SYMBGETMANGLEDNAME
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
push dword ptr [ebp-44]
push 0
push 0
push 192
call HEMITSTABN
add esp, 16
lea eax, [ebp-44]
push eax
call fb_StrDelete
add esp, 4
cmp dword ptr [Lt_01B7], 0
jle .Lt_0115
mov eax, dword ptr [ebp-4]
mov dword ptr [ebp-8], eax
.Lt_0116:
cmp dword ptr [ebp-8], 0
je .Lt_0117
mov eax, dword ptr [ebp-8]
cmp dword ptr [eax], 15
jne .Lt_0119
mov eax, dword ptr [ebp-8]
push dword ptr [eax+80]
mov eax, dword ptr [ebp-8]
push dword ptr [eax+76]
push dword ptr [ebp-8]
push dword ptr [ebp+8]
call HDECLLOCALVARS
add esp, 16
.Lt_0119:
.Lt_0118:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+160]
mov dword ptr [ebp-8], ebx
jmp .Lt_0116
.Lt_0117:
.Lt_0115:
.Lt_0114:
mov dword ptr [ebp-80], 0
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
push 0
push -1
push 0
push dword ptr [ebp+8]
call SYMBGETMANGLEDNAME
add esp, 4
push eax
push -1
push 2
push offset Lt_00CA
push 0
push dword ptr [ebp+20]
call SYMBGETMANGLEDNAME
add esp, 4
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
push 0
push 0
push 224
call HEMITSTABN
add esp, 16
lea eax, [ebp-80]
push eax
call fb_StrDelete
add esp, 4
.Lt_0102:
pop ebx
mov esp, ebp
pop ebp
ret
.size HDECLLOCALVARS, .-HDECLLOCALVARS

.section .bss
.balign 4
	.lcomm	Lt_01B7,4

.section .text
.balign 16
HDECLPOINTER:
.type HDECLPOINTER, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_0126:
push 0
push 1
push offset Lt_0000
push -1
push offset Lt_01BA
call fb_StrAssign
add esp, 20
.Lt_0128:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
and ebx, 480
test ebx, ebx
je .Lt_0129
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx]
and eax, 31
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebx]
and ecx, 480
add ecx, -32
or eax, ecx
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ecx]
and ebx, 261632
sar ebx, 1
and ebx, 261632
or eax, ebx
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx], eax
push 0
push -1
push dword ptr [CTX]
call fb_UIntToStr
add esp, 4
push eax
push -1
push offset Lt_01BA
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_012A
push -1
push offset Lt_01BA
call fb_StrConcatAssign
add esp, 20
inc dword ptr [CTX]
jmp .Lt_0128
.Lt_0129:
push 0
push -1
push offset Lt_01BA
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
.Lt_0127:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
pop ebx
mov esp, ebp
pop ebp
ret
.size HDECLPOINTER, .-HDECLPOINTER

.section .bss
.balign 4
	.lcomm	Lt_01BA,12

.section .text
.balign 16
HGETDATATYPE:
.type HGETDATATYPE, @function
push ebp
mov ebp, esp
sub esp, 92
push ebx
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_012B:
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
cmp dword ptr [ebp+8], 0
jne .Lt_012E
push 0
push -1
push dword ptr [REMAPTB]
call fb_IntToStr
add esp, 4
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrInit
add esp, 20
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_012C
.Lt_012E:
.Lt_012D:
mov dword ptr [ebp-20], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 65536
test ebx, ebx
je .Lt_0130
mov dword ptr [ebp-16], 18
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+84]
mov dword ptr [ebp-24], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-20], ebx
jmp .Lt_012F
.Lt_0130:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+24]
and eax, 511
mov dword ptr [ebp-16], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+28]
mov dword ptr [ebp-24], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx]
cmp eax, 1
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebx]
cmp ecx, 12
sete cl
shr ecx, 1
sbb ecx, ecx
or eax, ecx
je .Lt_0132
mov ecx, dword ptr [ebp+8]
cmp dword ptr [ecx+56], 0
jle .Lt_0134
push 0
push -1
push dword ptr [CTX]
call fb_UIntToStr
add esp, 4
push eax
push -1
lea eax, [ebp-36]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 2
push offset Lt_0135
push -1
lea eax, [ebp-36]
push eax
call fb_StrConcatAssign
add esp, 20
inc dword ptr [CTX]
cmp dword ptr [ebp+12], 0
jle .Lt_0137
push 0
push 5
push offset Lt_0138
push -1
lea eax, [ebp-36]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_0139
push -1
lea eax, [ebp-36]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
mov eax, dword ptr [ebp+12]
dec eax
mov ecx, eax
push ecx
call fb_IntToStr
add esp, 4
push eax
push -1
lea eax, [ebp-36]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 2
push offset Lt_013A
push -1
lea eax, [ebp-36]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_0136
.Lt_0137:
mov dword ptr [ebp-40], 0
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+56]
dec ecx
mov dword ptr [ebp-44], ecx
jmp .Lt_013C
.Lt_013F:
push 0
push 5
push offset Lt_0138
push -1
lea ecx, [ebp-36]
push ecx
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push -1
push 2
push offset Lt_013A
push -1
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [ebp-40]
sal ecx, 4
mov ebx, dword ptr [eax+60]
add ebx, ecx
push dword ptr [ebx+4]
push dword ptr [ebx]
call fb_LongintToStr
add esp, 8
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
lea eax, [ebp-36]
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
lea eax, [ebp-36]
push eax
call fb_StrAssign
add esp, 20
push 0
push -1
push -1
push 2
push offset Lt_013A
push -1
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-40]
sal ebx, 4
mov ecx, dword ptr [eax+60]
add ecx, ebx
push dword ptr [ecx+12]
push dword ptr [ecx+8]
call fb_LongintToStr
add esp, 8
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
lea eax, [ebp-36]
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
lea eax, [ebp-36]
push eax
call fb_StrAssign
add esp, 20
.Lt_013D:
inc dword ptr [ebp-40]
.Lt_013C:
mov eax, dword ptr [ebp-44]
cmp dword ptr [ebp-40], eax
jle .Lt_013F
.Lt_013E:
.Lt_0136:
.Lt_0134:
.Lt_0133:
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+4]
and ecx, 8388608
test ecx, ecx
je .Lt_0145
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ecx+88]
mov ecx, dword ptr [eax+56]
mov dword ptr [ebp-20], ecx
.Lt_0145:
.Lt_0144:
.Lt_0132:
.Lt_0131:
.Lt_012F:
cmp dword ptr [ebp-20], 0
jge .Lt_0147
mov dword ptr [ebp-20], 1
.Lt_0147:
.Lt_0146:
mov ecx, dword ptr [ebp-16]
and ecx, 480
test ecx, ecx
je .Lt_0149
push 0
push -1
lea ecx, [ebp-16]
push ecx
call HDECLPOINTER
add esp, 4
push eax
push -1
lea eax, [ebp-36]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_0149:
.Lt_0148:
and dword ptr [ebp-16], -513
mov eax, dword ptr [ebp-16]
mov dword ptr [ebp-40], eax
jmp .Lt_014B
.Lt_014D:
mov eax, dword ptr [ebp-24]
cmp dword ptr [eax+120], -1
jne .Lt_014F
push dword ptr [ebp-20]
push dword ptr [ebp-24]
call HDECLUDT
add esp, 8
.Lt_014F:
.Lt_014E:
push 0
push -1
push -1
mov eax, dword ptr [ebp-24]
push dword ptr [eax+120]
call fb_IntToStr
add esp, 4
push eax
push -1
lea eax, [ebp-36]
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
lea eax, [ebp-36]
push eax
call fb_StrAssign
add esp, 20
jmp .Lt_014A
.Lt_0151:
mov eax, dword ptr [ebp-24]
cmp dword ptr [eax+96], -1
jne .Lt_0153
push dword ptr [ebp-24]
call HDECLENUM
add esp, 4
.Lt_0153:
.Lt_0152:
push 0
push -1
push -1
mov eax, dword ptr [ebp-24]
push dword ptr [eax+96]
call fb_IntToStr
add esp, 4
push eax
push -1
lea eax, [ebp-36]
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
lea eax, [ebp-36]
push eax
call fb_StrAssign
add esp, 20
jmp .Lt_014A
.Lt_0155:
push 0
push -1
push dword ptr [CTX]
call fb_UIntToStr
add esp, 4
push eax
push -1
lea eax, [ebp-36]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 3
push offset Lt_0156
push -1
lea eax, [ebp-36]
push eax
call fb_StrConcatAssign
add esp, 20
inc dword ptr [CTX]
push 0
push -1
push 0
push dword ptr [ebp-24]
call HGETDATATYPE
add esp, 8
push eax
push -1
lea eax, [ebp-36]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_014A
.Lt_0157:
push 0
push -1
push dword ptr [REMAPTB]
call fb_IntToStr
add esp, 4
push eax
push -1
lea eax, [ebp-36]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_014A
.Lt_0158:
push 0
push -1
mov eax, dword ptr [ebp-16]
push dword ptr [REMAPTB+eax*4]
call fb_IntToStr
add esp, 4
push eax
push -1
lea eax, [ebp-36]
push eax
call fb_StrConcatAssign
add esp, 20
jmp .Lt_014A
.Lt_014B:
mov eax, dword ptr [ebp-40]
add eax, 4294967287
cmp eax, 12
ja .Lt_0158
mov eax, dword ptr [ebp-40]
jmp dword ptr [.LT_0159+eax*4-36]
.LT_0159:
.int .Lt_0151
.int .Lt_0158
.int .Lt_0158
.int .Lt_0158
.int .Lt_0158
.int .Lt_0158
.int .Lt_0158
.int .Lt_0158
.int .Lt_0158
.int .Lt_014D
.int .Lt_0158
.int .Lt_0155
.int .Lt_0157
.Lt_014A:
push 0
push -1
lea eax, [ebp-36]
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
.Lt_012C:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
pop ebx
mov esp, ebp
pop ebp
ret
.size HGETDATATYPE, .-HGETDATATYPE
.balign 16
HDECLUDT:
.type HDECLUDT, @function
push ebp
mov ebp, esp
sub esp, 168
push ebx
push esi
.Lt_015A:
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [CTX]
mov dword ptr [eax+120], ebx
inc dword ptr [CTX]
push 0
push 0
push dword ptr [ebp+8]
call SYMBGETDBGNAME
add esp, 4
push eax
push -1
lea eax, [ebp-16]
push eax
call fb_StrAssign
add esp, 20
push 0
push -1
push -1
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+40]
push dword ptr [eax+36]
call fb_LongintToStr
add esp, 8
push eax
push -1
push 3
push offset Lt_015D
push -1
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+120]
call fb_IntToStr
add esp, 4
push eax
push 4
push offset Lt_015C
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
lea eax, [ebp-16]
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
lea eax, [ebp-16]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp+8]
call SYMBUDTGETFIRSTFIELD
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_0162:
cmp dword ptr [ebp-4], 0
je .Lt_0163
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+4]
and ebx, 4
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_0165
push 0
push -1
push -1
push -1
push dword ptr [ebp+12]
push dword ptr [ebp-4]
call HGETDATATYPE
add esp, 8
push eax
push -1
push 2
push offset Lt_009B
push 0
mov eax, dword ptr [ebp-4]
push dword ptr [eax+12]
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
lea eax, [ebp-16]
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
call fb_StrAssign
add esp, 20
push 0
push -1
push -1
push -1
mov eax, dword ptr [ebp-4]
mov ecx, dword ptr [eax+44]
mov ebx, dword ptr [eax+48]
shld ebx, ecx, 3
shl ecx, 3
mov dword ptr [ebp-168], ecx
mov dword ptr [ebp-164], ebx
mov ecx, dword ptr [ebp-4]
cmp dword ptr [ecx+108], 0
jle .Lt_0169
mov ecx, dword ptr [ebp-4]
mov ebx, dword ptr [ecx+104]
mov dword ptr [ebp-104], ebx
jmp .Lt_01BD
.Lt_0169:
mov dword ptr [ebp-104], 0
.Lt_01BD:
mov ecx, dword ptr [ebp-104]
mov ebx, ecx
sar ebx, 31
add ecx, dword ptr [ebp-168]
adc ebx, dword ptr [ebp-164]
push ebx
push ecx
call fb_LongintToStr
add esp, 8
push eax
push 2
push offset Lt_008D
mov dword ptr [ebp-116], 0
mov dword ptr [ebp-112], 0
mov dword ptr [ebp-108], 0
lea eax, [ebp-116]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-16]
push eax
mov dword ptr [ebp-128], 0
mov dword ptr [ebp-124], 0
mov dword ptr [ebp-120], 0
lea eax, [ebp-128]
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
push -1
mov eax, dword ptr [ebp-4]
cmp dword ptr [eax+108], 0
jle .Lt_016D
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+108]
mov ecx, ebx
sar ecx, 31
mov dword ptr [ebp-136], ebx
mov dword ptr [ebp-132], ecx
jmp .Lt_01BE
.Lt_016D:
mov ebx, dword ptr [ebp-4]
mov ecx, dword ptr [ebp-4]
mov esi, dword ptr [ecx+72]
mov eax, dword ptr [ecx+76]
push dword ptr [ebx+40]
push dword ptr [ebx+36]
push eax
push esi
mov eax, [esp+0]
mul dword ptr [esp+8]
xchg eax, [esp+0]
imul eax, [esp+12]
add eax, edx
mov edx, [esp+4]
imul edx, [esp+8]
add edx, eax
mov [esp+4], edx
pop esi
pop eax
add esp, 8
shld eax, esi, 3
shl esi, 3
mov dword ptr [ebp-136], esi
mov dword ptr [ebp-132], eax
.Lt_01BE:
push dword ptr [ebp-132]
push dword ptr [ebp-136]
call fb_LongintToStr
add esp, 8
push eax
push 2
push offset Lt_008D
mov dword ptr [ebp-148], 0
mov dword ptr [ebp-144], 0
mov dword ptr [ebp-140], 0
lea eax, [ebp-148]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-16]
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
lea eax, [ebp-16]
push eax
call fb_StrAssign
add esp, 20
push 0
push 2
push offset Lt_013A
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_0165:
.Lt_0164:
push dword ptr [ebp-4]
call SYMBUDTGETNEXTFIELD
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_0162
.Lt_0163:
push 0
push 2
push offset Lt_013A
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
push offset Lt_0006
push 0
push 0
push dword ptr [ebp-16]
push 128
call HEMITSTABS
add esp, 20
lea eax, [ebp-16]
push eax
call fb_StrDelete
add esp, 4
.Lt_015B:
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size HDECLUDT, .-HDECLUDT
.balign 16
HDECLENUM:
.type HDECLENUM, @function
push ebp
mov ebp, esp
sub esp, 100
push ebx
.Lt_0171:
mov dword ptr [ebp-4], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [CTX]
mov dword ptr [eax+96], ebx
inc dword ptr [CTX]
push 0
push 0
push dword ptr [ebp+8]
call SYMBGETDBGNAME
add esp, 4
push eax
push -1
lea eax, [ebp-16]
push eax
call fb_StrAssign
add esp, 20
push 0
push -1
push -1
push 3
push offset Lt_0174
push -1
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+96]
call fb_IntToStr
add esp, 4
push eax
push 3
push offset Lt_0173
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
push dword ptr [ebp+8]
call SYMBGETENUMFIRSTELM
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_0178:
cmp dword ptr [ebp-4], 0
je .Lt_0179
push 0
push -1
push -1
push 2
push offset Lt_008D
push -1
push -1
mov eax, dword ptr [ebp-4]
push dword ptr [eax+56]
push dword ptr [eax+52]
call fb_LongintToStr
add esp, 8
push eax
push -1
push 2
push offset Lt_009B
push 0
mov eax, dword ptr [ebp-4]
push dword ptr [eax+12]
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
lea eax, [ebp-16]
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
call fb_StrAssign
add esp, 20
push dword ptr [ebp-4]
call SYMBGETENUMNEXTELM
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_0178
.Lt_0179:
push 0
push 2
push offset Lt_013A
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
push offset Lt_0006
push 0
push 0
push dword ptr [ebp-16]
push 128
call HEMITSTABS
add esp, 20
lea eax, [ebp-16]
push eax
call fb_StrDelete
add esp, 4
.Lt_0172:
pop ebx
mov esp, ebp
pop ebp
ret
.size HDECLENUM, .-HDECLENUM
	#fbc-1.01.0/src/compiler/edbg_stab.bas' compilation took 0.03427210741210729 secs

.section .rodata
.balign 4
Lt_0000:	.ascii	"\0"
.balign 4
Lt_0006:	.ascii	"0\0"
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
.balign 4
	.lcomm	Lt_0073,32
.balign 4
	.lcomm	CTX,296

.section .data
.balign 4
REMAPTB:
.int 7
.int 2
.int 3
.int 4
.int 5
.int 6
.int 6
.int 1
.int 8
.int 1
.int 1
.int 8
.int 9
.int 10
.int 11
.int 12
.int 13
.int 14
.skip 24,0
.balign 4
STABSTB:
.int Lt_0076
.int Lt_0077
.int Lt_0078
.int Lt_0079
.int Lt_007A
.int Lt_007B
.int Lt_007C
.int Lt_007D
.int Lt_007E
.int Lt_007F
.int Lt_0080
.int Lt_0081
.int Lt_0082
.int Lt_0083
.int Lt_0084

.section .rodata
.balign 4
Lt_0076:	.ascii	"integer:t1=-1\0"
.balign 4
Lt_0077:	.ascii	"void:t7=-11\0"
.balign 4
Lt_0078:	.ascii	"byte:t2=-6\0"
.balign 4
Lt_0079:	.ascii	"ubyte:t3=-5\0"
.balign 4
Lt_007A:	.ascii	"char:t4=-2\0"
.balign 4
Lt_007B:	.ascii	"short:t5=-3\0"
.balign 4
Lt_007C:	.ascii	"ushort:t6=-7\0"
.balign 4
Lt_007D:	.ascii	"uinteger:t8=-8\0"
.balign 4
Lt_007E:	.ascii	"longint:t9=-31\0"
.balign 4
Lt_007F:	.ascii	"ulongint:t10=-32\0"
.balign 4
Lt_0080:	.ascii	"single:t11=-12\0"
.balign 4
Lt_0081:	.ascii	"double:t12=-13\0"
.balign 4
Lt_0082:	.ascii	"string:t13=s12data:15,0,32;len:1,32,32;size:1,64,32;;\0"
.balign 4
Lt_0083:	.ascii	"fixstr:t14=-2\0"
.balign 4
Lt_0084:	.ascii	"pchar:t15=*4;\0"
.balign 4
Lt_008A:	.ascii	"\"\0"
.balign 4
Lt_008B:	.ascii	".stabs \"\0"
.balign 4
Lt_008D:	.ascii	",\0"
.balign 4
Lt_008E:	.ascii	"\",\0"
.balign 4
Lt_0092:	.ascii	".stabn \0"
.balign 4
Lt_0098:	.ascii	".stabd \0"
.balign 4
Lt_009B:	.ascii	":\0"
.balign 4
Lt_00A1:	.ascii	".file \"\0"
.balign 4
Lt_00CA:	.ascii	"-\0"
.balign 4
Lt_00FD:	.ascii	":F\0"
.balign 4
Lt_00FE:	.ascii	":f\0"
.balign 4
Lt_012A:	.ascii	"=*\0"
.balign 4
Lt_0135:	.ascii	"=\0"
.balign 4
Lt_0138:	.ascii	"ar1;\0"
.balign 4
Lt_0139:	.ascii	"0;\0"
.balign 4
Lt_013A:	.ascii	";\0"
.balign 4
Lt_0156:	.ascii	"=f\0"
.balign 4
Lt_015C:	.ascii	":Tt\0"
.balign 4
Lt_015D:	.ascii	"=s\0"
.balign 4
Lt_0173:	.ascii	":T\0"
.balign 4
Lt_0174:	.ascii	"=e\0"
.balign 4
Lt_018C:	.ascii	":G\0"
.balign 4
Lt_018E:	.ascii	":S\0"
.balign 4
Lt_019B:	.ascii	":V\0"
.balign 4
Lt_01A4:	.ascii	"p\0"
.balign 4
Lt_01A6:	.ascii	"v\0"

.section .ctors, "aw", @progbits
.int fb_ctor__edbg_stab
