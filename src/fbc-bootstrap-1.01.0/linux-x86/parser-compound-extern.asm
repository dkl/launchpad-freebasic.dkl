	.intel_syntax noprefix

	#FreeBASIC-1.01.0-source/src/compiler/parser-compound-extern.bas' compilation started at 16:30:04 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl CEXTERNSTMTBEGIN
CEXTERNSTMTBEGIN:
.type CEXTERNSTMTBEGIN, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
.Lt_005F:
mov eax, dword ptr [ENV+840]
and eax, 8
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_0062
push 0
push 145
push 8
call ERRREPORTNOTALLOWED
add esp, 12
push 0
push -1
push 306
call HSKIPCOMPOUND
add esp, 12
jmp .Lt_0060
.Lt_0062:
.Lt_0061:
push 16
call CCOMPSTMTISALLOWED
add esp, 4
test eax, eax
jne .Lt_0064
push 0
push -1
push 306
call HSKIPCOMPOUND
add esp, 12
jmp .Lt_0060
.Lt_0064:
.Lt_0063:
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXGETCLASS
add esp, 4
cmp eax, 4
je .Lt_0066
push 0
push 0
push 17
call ERRREPORT
add esp, 12
mov eax, offset Lt_0067
mov dword ptr [ebp-12], eax
jmp .Lt_0065
.Lt_0066:
call LEXGETTEXT
mov dword ptr [ebp-12], eax
.Lt_0065:
push 0
push -1
push 0
push dword ptr [ebp-12]
call fb_StrAllocTempDescZ
add esp, 4
push eax
call fb_StrLcase2
add esp, 8
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrInit
add esp, 20
push 2
push offset Lt_0067
push -1
lea eax, [ebp-24]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_006A
.Lt_006B:
mov dword ptr [ebp-8], 1
push 0
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_0068
.Lt_006A:
push 8
push offset Lt_006D
push -1
lea eax, [ebp-24]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_006C
.Lt_006E:
mov dword ptr [ebp-8], 2
push 0
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_0068
.Lt_006C:
push 11
push offset Lt_0070
push -1
lea eax, [ebp-24]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_006F
.Lt_0071:
mov dword ptr [ebp-8], 3
push 0
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_0068
.Lt_006F:
push 4
push offset Lt_0073
push -1
lea eax, [ebp-24]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_0072
.Lt_0074:
mov dword ptr [ebp-8], 4
push 0
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_0068
.Lt_0072:
push 0
push 0
push 17
call ERRREPORT
add esp, 12
mov dword ptr [ebp-8], 1
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0075:
.Lt_0068:
lea eax, [ebp-24]
push eax
call fb_StrDelete
add esp, 4
call CLIBATTRIBUTE
push -34
push 306
call CCOMPSTMTPUSH
add esp, 8
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [PARSER+96]
mov dword ptr [eax+12], ebx
mov ebx, dword ptr [ebp-8]
mov dword ptr [PARSER+96], ebx
.Lt_0060:
pop ebx
mov esp, ebp
pop ebp
ret
.size CEXTERNSTMTBEGIN, .-CEXTERNSTMTBEGIN
.balign 16

.globl CEXTERNSTMTEND
CEXTERNSTMTEND:
.type CEXTERNSTMTEND, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0077:
push -1
push 306
call CCOMPSTMTGETTOS
add esp, 8
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
jne .Lt_007A
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_0078
.Lt_007A:
.Lt_0079:
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+12]
mov dword ptr [PARSER+96], ebx
push dword ptr [ebp-4]
call CCOMPSTMTPOP
add esp, 4
.Lt_0078:
pop ebx
mov esp, ebp
pop ebp
ret
.size CEXTERNSTMTEND, .-CEXTERNSTMTEND
.balign 16
fb_ctor__parserzcompoundzextern:
.type fb_ctor__parserzcompoundzextern, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__parserzcompoundzextern, .-fb_ctor__parserzcompoundzextern
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
	#FreeBASIC-1.01.0-source/src/compiler/parser-compound-extern.bas' compilation took 0.02756209170911461 secs

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

.section .rodata
.balign 4
Lt_0067:	.ascii	"c\0"
.balign 4
Lt_006D:	.ascii	"windows\0"
.balign 4
Lt_0070:	.ascii	"windows-ms\0"
.balign 4
Lt_0073:	.ascii	"c++\0"

.section .ctors, "aw", @progbits
.int fb_ctor__parserzcompoundzextern
