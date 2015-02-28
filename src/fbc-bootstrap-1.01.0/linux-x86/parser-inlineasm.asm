	.intel_syntax noprefix

	#FreeBASIC-1.01.0-source/src/compiler/parser-inlineasm.bas' compilation started at 16:30:05 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl CASMCODE
CASMCODE:
.type CASMCODE, @function
push ebp
mov ebp, esp
sub esp, 60
push ebx
.Lt_0075:
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-20], 0
.Lt_0077:
push 1028
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-28], eax
mov eax, dword ptr [ebp-28]
mov dword ptr [ebp-32], eax
jmp .Lt_007B
.Lt_007D:
jmp .Lt_0078
jmp .Lt_007A
.Lt_007B:
mov eax, dword ptr [ebp-32]
add eax, 4294967040
cmp eax, 84
ja .Lt_007A
mov eax, dword ptr [ebp-32]
jmp dword ptr [.LT_007E+eax*4-1024]
.LT_007E:
.int .Lt_007D
.int .Lt_007D
.int .Lt_007A
.int .Lt_007D
.int .Lt_007D
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007A
.int .Lt_007D
.Lt_007A:
push 0
push 0
call LEXGETTEXT
push eax
push 1025
push offset Lt_00C1
call fb_StrAssign
add esp, 20
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-24], 0
push 1028
call LEXGETCLASS
add esp, 4
mov dword ptr [ebp-32], eax
jmp .Lt_0080
.Lt_0082:
cmp dword ptr [ebp-28], 462
jne .Lt_0084
push -1
push dword ptr [ebp-28]
call CMATHFUNCT
add esp, 8
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
je .Lt_0086
mov eax, dword ptr [ebp-12]
cmp dword ptr [eax], 16
jne .Lt_0088
push 0
push -1
push dword ptr [ebp-12]
call ASTCONSTFLUSHTOSTR
add esp, 4
push eax
push 1025
push offset Lt_00C1
call fb_StrAssign
add esp, 20
jmp .Lt_0087
.Lt_0088:
push 0
push 0
push 11
call ERRREPORT
add esp, 12
mov dword ptr [ebp-24], -1
.Lt_0087:
jmp .Lt_0085
.Lt_0086:
push 0
push 0
push 17
call ERRREPORT
add esp, 12
mov dword ptr [ebp-24], -1
.Lt_0085:
jmp .Lt_0083
.Lt_0084:
mov eax, dword ptr [ENV+104]
cmp eax, 1
sete al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_008B
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
push 0
push -1
push 0
push offset Lt_00C1
call fb_StrAllocTempDescZ
add esp, 4
push eax
call fb_StrLcase2
add esp, 8
push eax
push -1
lea eax, [ebp-44]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-44]
call dword ptr [EMIT+184]
add esp, 4
test eax, eax
sete al
shr eax, 1
sbb eax, eax
test eax, eax
setne al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-48], eax
lea eax, [ebp-44]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_00C0
.Lt_008B:
mov dword ptr [ebp-48], -1
.Lt_00C0:
cmp dword ptr [ebp-48], 0
je .Lt_0089
push 34
lea eax, [ebp-52]
push eax
call CIDENTIFIER
add esp, 8
mov dword ptr [ebp-4], eax
.Lt_008D:
cmp dword ptr [ebp-4], 0
je .Lt_008E
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-56], ebx
.Lt_008F:
mov ebx, dword ptr [ebp-56]
mov eax, dword ptr [ebx]
mov dword ptr [ebp-60], eax
cmp dword ptr [ebp-60], 3
je .Lt_0095
.Lt_0096:
cmp dword ptr [ebp-60], 7
jne .Lt_0094
.Lt_0095:
mov eax, dword ptr [ebp-56]
mov dword ptr [ebp-8], eax
jmp .Lt_008E
jmp .Lt_0092
.Lt_0094:
cmp dword ptr [ebp-60], 2
jne .Lt_0097
.Lt_0098:
push 0
push -1
push dword ptr [ebp-56]
call SYMBGETCONSTVALUEASSTR
add esp, 4
push eax
push 1025
push offset Lt_00C1
call fb_StrAssign
add esp, 20
jmp .Lt_008E
jmp .Lt_0092
.Lt_0097:
cmp dword ptr [ebp-60], 1
jne .Lt_0099
.Lt_009A:
push 1
push dword ptr [ebp-4]
call SYMBFINDBYCLASS
add esp, 8
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
je .Lt_009C
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+8]
or ebx, 2
mov eax, ebx
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+8], eax
.Lt_009C:
.Lt_009B:
jmp .Lt_008E
.Lt_0099:
.Lt_0092:
mov eax, dword ptr [ebp-56]
mov ebx, dword ptr [eax+144]
mov dword ptr [ebp-56], ebx
.Lt_0091:
cmp dword ptr [ebp-56], 0
jne .Lt_008F
.Lt_0090:
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebx+4]
mov dword ptr [ebp-4], eax
jmp .Lt_008D
.Lt_008E:
.Lt_0089:
.Lt_0083:
jmp .Lt_007F
.Lt_009D:
push 0
call CNUMLITERAL
add esp, 4
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
je .Lt_009F
push 0
push -1
push dword ptr [ebp-12]
call ASTCONSTFLUSHTOSTR
add esp, 4
push eax
push 1025
push offset Lt_00C1
call fb_StrAssign
add esp, 20
.Lt_009F:
.Lt_009E:
jmp .Lt_007F
.Lt_00A0:
push 0
call CSTRLITERAL
add esp, 4
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
je .Lt_00A2
push dword ptr [ebp-12]
call ASTGETSTRLITSYMBOL
add esp, 4
mov dword ptr [ebp-36], eax
cmp dword ptr [ebp-36], 0
je .Lt_00A4
push 0
push 2
push offset Lt_00A5
push 1025
push offset Lt_00C1
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ebp-36]
mov ebx, dword ptr [eax+24]
and ebx, 511
cmp ebx, 6
je .Lt_00A7
push 0
push -1
push 0
mov ebx, dword ptr [ebp-36]
push dword ptr [ebx+52]
push 1025
push offset Lt_00C1
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
lea ebx, [ebp-60]
push ebx
call fb_StrConcat
add esp, 20
push eax
push 1025
push offset Lt_00C1
call fb_StrAssign
add esp, 20
jmp .Lt_00A6
.Lt_00A7:
push 0
mov eax, dword ptr [ebp-36]
push dword ptr [eax+52]
push 1025
push offset Lt_00C1
call fb_WstrConcatAW
add esp, 12
mov dword ptr [ebp-52], eax
push dword ptr [ebp-52]
push 1025
push offset Lt_00C1
call fb_WstrAssignToA
add esp, 16
push dword ptr [ebp-52]
call fb_WstrDelete
add esp, 4
.Lt_00A6:
push 0
push -1
push 2
push offset Lt_00A5
push 1025
push offset Lt_00C1
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
lea eax, [ebp-48]
push eax
call fb_StrConcat
add esp, 20
push eax
push 1025
push offset Lt_00C1
call fb_StrAssign
add esp, 20
.Lt_00A4:
.Lt_00A3:
push dword ptr [ebp-12]
call ASTDELTREE
add esp, 4
.Lt_00A2:
.Lt_00A1:
jmp .Lt_007F
.Lt_00AB:
cmp dword ptr [ebp-28], 346
jne .Lt_00AD
.Lt_00AE:
push dword ptr [PARSER+100]
call SYMBGETPROCRESULT
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_00B0
push 0
push 0
push 17
call ERRREPORT
add esp, 12
mov dword ptr [ebp-24], -1
jmp .Lt_00AF
.Lt_00B0:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+8]
or ebx, 2
mov eax, ebx
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+8], eax
.Lt_00AF:
jmp .Lt_00AC
.Lt_00AD:
cmp dword ptr [ebp-28], 402
jne .Lt_00B1
.Lt_00B2:
push -1
push dword ptr [ebp-28]
call CTYPECONVEXPR
add esp, 8
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
je .Lt_00B4
mov eax, dword ptr [ebp-12]
cmp dword ptr [eax], 16
jne .Lt_00B6
push 0
push -1
push dword ptr [ebp-12]
call ASTCONSTFLUSHTOSTR
add esp, 4
push eax
push 1025
push offset Lt_00C1
call fb_StrAssign
add esp, 20
jmp .Lt_00B5
.Lt_00B6:
push 0
push 0
push 11
call ERRREPORT
add esp, 12
mov dword ptr [ebp-24], -1
.Lt_00B5:
jmp .Lt_00B3
.Lt_00B4:
push 0
push 0
push 17
call ERRREPORT
add esp, 12
mov dword ptr [ebp-24], -1
.Lt_00B3:
.Lt_00B1:
.Lt_00AC:
jmp .Lt_007F
.Lt_0080:
cmp dword ptr [ebp-32], 4
ja .Lt_007F
mov eax, dword ptr [ebp-32]
jmp dword ptr [.LT_00B7+eax*4]
.LT_00B7:
.int .Lt_0082
.int .Lt_00AB
.int .Lt_0082
.int .Lt_009D
.int .Lt_00A0
.Lt_007F:
cmp dword ptr [ebp-24], 0
jne .Lt_00B9
cmp dword ptr [ebp-8], 0
je .Lt_00BB
push dword ptr [ebp-8]
push dword ptr [ebp-20]
call ASTASMAPPENDSYMB
add esp, 8
mov dword ptr [ebp-20], eax
jmp .Lt_00BA
.Lt_00BB:
push offset Lt_00C1
push dword ptr [ebp-20]
call ASTASMAPPENDTEXT
add esp, 8
mov dword ptr [ebp-20], eax
.Lt_00BA:
cmp dword ptr [ebp-16], 0
jne .Lt_00BD
mov eax, dword ptr [ebp-20]
mov dword ptr [ebp-16], eax
.Lt_00BD:
.Lt_00BC:
.Lt_00B9:
.Lt_00B8:
push 1028
call LEXSKIPTOKEN
add esp, 4
.Lt_0079:
jmp .Lt_0077
.Lt_0078:
cmp dword ptr [ebp-16], 0
je .Lt_00BF
push dword ptr [ebp-16]
call ASTNEWASM
add esp, 4
push eax
call ASTADD
add esp, 4
.Lt_00BF:
.Lt_00BE:
.Lt_0076:
pop ebx
mov esp, ebp
pop ebp
ret
.size CASMCODE, .-CASMCODE

.section .bss
.balign 4
	.lcomm	Lt_00C1,1025

.section .text
.balign 16

.globl CASMBLOCK
CASMBLOCK:
.type CASMBLOCK, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_00C5:
mov dword ptr [ebp-4], 0
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 344
je .Lt_00C8
jmp .Lt_00C6
.Lt_00C8:
.Lt_00C7:
push 1
call CCOMPSTMTISALLOWED
add esp, 4
test eax, eax
jne .Lt_00CA
push 0
push -1
push 344
call HSKIPCOMPOUND
add esp, 12
jmp .Lt_00C6
.Lt_00CA:
.Lt_00C9:
push 0
call LEXSKIPTOKEN
add esp, 4
mov dword ptr [ebp-8], 0
push 0
call CCOMMENT
add esp, 4
test eax, eax
je .Lt_00CC
cmp dword ptr [ENV+144], 0
je .Lt_00CE
cmp dword ptr [ENV+828], 0
jne .Lt_00D0
mov eax, dword ptr [LEX+839664]
push dword ptr [eax+49376]
call ASTNEWLIT
add esp, 4
push eax
call ASTADD
add esp, 4
mov eax, dword ptr [LEX+839664]
lea ebx, [eax+49376]
push ebx
call DZSTRRESET
add esp, 4
.Lt_00D0:
.Lt_00CF:
.Lt_00CE:
.Lt_00CD:
push 0
call CSTMTSEPARATOR
add esp, 4
test eax, eax
jne .Lt_00D2
push 0
push 0
push 3
call ERRREPORT
add esp, 12
push 0
push 0
push -1
push 257
call HSKIPUNTIL
add esp, 16
.Lt_00D2:
.Lt_00D1:
jmp .Lt_00CB
.Lt_00CC:
push 0
call CSTMTSEPARATOR
add esp, 4
test eax, eax
jne .Lt_00D4
mov dword ptr [ebp-8], -1
.Lt_00D4:
.Lt_00D3:
.Lt_00CB:
.Lt_00D5:
cmp dword ptr [ebp-8], 0
jne .Lt_00D9
mov eax, dword ptr [LEX+839664]
push dword ptr [eax+16548]
push 108
call ASTNEWDBG
add esp, 8
push eax
call ASTADD
add esp, 4
.Lt_00D9:
.Lt_00D8:
call CASMCODE
push 1028
call CCOMMENT
add esp, 4
cmp dword ptr [ENV+144], 0
je .Lt_00DB
cmp dword ptr [ENV+828], 0
jne .Lt_00DD
mov eax, dword ptr [LEX+839664]
push dword ptr [eax+49376]
call ASTNEWLIT
add esp, 4
push eax
call ASTADD
add esp, 4
mov eax, dword ptr [LEX+839664]
lea ebx, [eax+49376]
push ebx
call DZSTRRESET
add esp, 4
.Lt_00DD:
.Lt_00DC:
.Lt_00DB:
.Lt_00DA:
push 0
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 257
jne .Lt_00E0
.Lt_00E1:
cmp dword ptr [ebp-8], 0
je .Lt_00E3
jmp .Lt_00D6
.Lt_00E3:
.Lt_00E2:
push 0
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_00DE
.Lt_00E0:
cmp dword ptr [ebp-12], 256
jne .Lt_00E4
.Lt_00E5:
jmp .Lt_00D6
jmp .Lt_00DE
.Lt_00E4:
cmp dword ptr [ebp-12], 340
jne .Lt_00E6
.Lt_00E7:
jmp .Lt_00D6
jmp .Lt_00DE
.Lt_00E6:
push 0
push 0
push 3
call ERRREPORT
add esp, 12
push 0
push 0
push -1
push 257
call HSKIPUNTIL
add esp, 16
.Lt_00E8:
.Lt_00DE:
cmp dword ptr [ebp-8], 0
jne .Lt_00EA
push 0
push 109
call ASTNEWDBG
add esp, 8
push eax
call ASTADD
add esp, 4
.Lt_00EA:
.Lt_00E9:
.Lt_00D7:
jmp .Lt_00D5
.Lt_00D6:
cmp dword ptr [ebp-8], 0
jne .Lt_00EC
push 340
call HMATCH
add esp, 4
test eax, eax
jne .Lt_00EE
push 0
push 0
push 44
call ERRREPORT
add esp, 12
jmp .Lt_00ED
.Lt_00EE:
push 344
call HMATCH
add esp, 4
test eax, eax
jne .Lt_00EF
push 0
push 0
push 44
call ERRREPORT
add esp, 12
.Lt_00EF:
.Lt_00ED:
.Lt_00EC:
.Lt_00EB:
mov dword ptr [ebp-4], -1
.Lt_00C6:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CASMBLOCK, .-CASMBLOCK
.balign 16
fb_ctor__parserzinlineasm:
.type fb_ctor__parserzinlineasm, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__parserzinlineasm, .-fb_ctor__parserzinlineasm
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
	#FreeBASIC-1.01.0-source/src/compiler/parser-inlineasm.bas' compilation took 0.03540399100165814 secs

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
	.lcomm	Lt_0074,32

.section .rodata
.balign 4
Lt_00A5:	.ascii	"\"\0"

.section .ctors, "aw", @progbits
.int fb_ctor__parserzinlineasm
