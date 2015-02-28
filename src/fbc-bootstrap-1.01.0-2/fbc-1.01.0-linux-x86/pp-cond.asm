	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/pp-cond.bas' compilation started at 15:27:36 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl PPCONDINIT
PPCONDINIT:
.type PPCONDINIT, @function
.Lt_0060:
mov dword ptr [PP+196], 0
.Lt_0061:
ret
.size PPCONDINIT, .-PPCONDINIT
.balign 16

.globl PPCONDEND
PPCONDEND:
.type PPCONDEND, @function
.Lt_0062:
.Lt_0063:
ret
.size PPCONDEND, .-PPCONDEND
.balign 16

.globl PPCONDIF
PPCONDIF:
.type PPCONDIF, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
.Lt_006F:
mov dword ptr [ebp-4], 0
push 256
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-12], eax
jmp .Lt_0072
.Lt_0074:
push 2
call LEXSKIPTOKEN
add esp, 4
push 0
lea eax, [ebp-8]
push eax
call CIDENTIFIER
add esp, 8
test eax, eax
je .Lt_0076
mov dword ptr [ebp-4], -1
.Lt_0076:
.Lt_0075:
push 0
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_0071
.Lt_0077:
push 2
call LEXSKIPTOKEN
add esp, 4
push 0
lea eax, [ebp-8]
push eax
call CIDENTIFIER
add esp, 8
test eax, eax
jne .Lt_0079
mov dword ptr [ebp-4], -1
.Lt_0079:
.Lt_0078:
push 0
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_0071
.Lt_007A:
push 0
call LEXSKIPTOKEN
add esp, 4
call PPEXPRESSION
mov dword ptr [ebp-4], eax
jmp .Lt_0071
.Lt_0072:
mov eax, dword ptr [ebp-12]
add eax, 4294967030
cmp eax, 2
ja .Lt_0071
mov eax, dword ptr [ebp-12]
jmp dword ptr [.LT_007B+eax*4-1064]
.LT_007B:
.int .Lt_007A
.int .Lt_0074
.int .Lt_0077
.Lt_0071:
inc dword ptr [PP+196]
cmp dword ptr [PP+196], 64
jle .Lt_007D
push 0
push 0
push 27
call ERRREPORT
add esp, 12
call ERRHIDEFURTHERERRORS
jmp .Lt_0070
.Lt_007D:
.Lt_007C:
mov eax, dword ptr [PP+196]
mov ebx, dword ptr [ebp-4]
mov dword ptr [PPTB+eax*8-8], ebx
mov ebx, dword ptr [PP+196]
mov dword ptr [PPTB+ebx*8-4], 0
cmp dword ptr [ebp-4], 0
jne .Lt_007F
call PPSKIP
.Lt_007F:
.Lt_007E:
.Lt_0070:
pop ebx
mov esp, ebp
pop ebp
ret
.size PPCONDIF, .-PPCONDIF
.balign 16

.globl PPCONDELSE
PPCONDELSE:
.type PPCONDELSE, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0080:
mov dword ptr [ebp-4], 0
cmp dword ptr [PP+196], 0
jne .Lt_0083
push 0
push 0
push 43
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_0081
.Lt_0083:
.Lt_0082:
mov eax, dword ptr [PP+196]
cmp dword ptr [PPTB+eax*8-4], 0
jle .Lt_0085
push 0
push 0
push 17
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_0081
.Lt_0085:
.Lt_0084:
push 256
call LEXGETTOKEN
add esp, 4
cmp eax, 270
jne .Lt_0087
push 0
call LEXSKIPTOKEN
add esp, 4
call PPEXPRESSION
mov dword ptr [ebp-4], eax
mov eax, dword ptr [PP+196]
cmp dword ptr [PPTB+eax*8-8], 0
je .Lt_0089
call PPSKIP
jmp .Lt_0081
.Lt_0089:
.Lt_0088:
mov eax, dword ptr [PP+196]
mov ebx, dword ptr [ebp-4]
mov dword ptr [PPTB+eax*8-8], ebx
jmp .Lt_0086
.Lt_0087:
push 0
call LEXSKIPTOKEN
add esp, 4
mov ebx, dword ptr [PP+196]
inc dword ptr [PPTB+ebx*8-4]
mov ebx, dword ptr [PP+196]
not dword ptr [PPTB+ebx*8-8]
.Lt_0086:
mov ebx, dword ptr [PP+196]
cmp dword ptr [PPTB+ebx*8-8], 0
jne .Lt_008B
call PPSKIP
.Lt_008B:
.Lt_008A:
.Lt_0081:
pop ebx
mov esp, ebp
pop ebp
ret
.size PPCONDELSE, .-PPCONDELSE
.balign 16

.globl PPCONDENDIF
PPCONDENDIF:
.type PPCONDENDIF, @function
.Lt_008C:
push 0
call LEXSKIPTOKEN
add esp, 4
cmp dword ptr [PP+196], 0
jle .Lt_008F
dec dword ptr [PP+196]
jmp .Lt_008E
.Lt_008F:
push 0
push 0
push 43
call ERRREPORT
add esp, 12
.Lt_008E:
.Lt_008D:
ret
.size PPCONDENDIF, .-PPCONDENDIF
.balign 16

.globl PPASSERT
PPASSERT:
.type PPASSERT, @function
push ebp
mov ebp, esp
sub esp, 4
.Lt_0090:
call PPEXPRESSION
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
jne .Lt_0093
push 0
push 0
push 307
call ERRREPORT
add esp, 12
.Lt_0093:
.Lt_0092:
.Lt_0091:
mov esp, ebp
pop ebp
ret
.size PPASSERT, .-PPASSERT
.balign 16
fb_ctor__ppzcond:
.type fb_ctor__ppzcond, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__ppzcond, .-fb_ctor__ppzcond
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
PPEXPRESSION:
.type PPEXPRESSION, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0064:
mov eax, dword ptr [PARSER+144]
or eax, 1024
mov ebx, eax
mov dword ptr [PARSER+144], ebx
jmp .Lt_0066
.Lt_0067:
mov ebx, dword ptr [PARSER+144]
and ebx, -1025
mov eax, ebx
mov dword ptr [PARSER+144], eax
.Lt_0066:
call CEXPRESSION
mov dword ptr [ebp-8], eax
jmp .Lt_0069
mov eax, dword ptr [PARSER+144]
or eax, 1024
mov ebx, eax
mov dword ptr [PARSER+144], ebx
jmp .Lt_0068
.Lt_0069:
mov ebx, dword ptr [PARSER+144]
and ebx, -1025
mov eax, ebx
mov dword ptr [PARSER+144], eax
.Lt_0068:
cmp dword ptr [ebp-8], 0
jne .Lt_006B
push 0
push 0
push 9
call ERRREPORT
add esp, 12
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-8], eax
.Lt_006B:
.Lt_006A:
push dword ptr [ebp-8]
call ASTGETSTRLITSYMBOL
add esp, 4
test eax, eax
je .Lt_006D
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-8], eax
jmp .Lt_006C
.Lt_006D:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax]
cmp ebx, 16
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_006E
push 0
push 0
push 11
call ERRREPORT
add esp, 12
push dword ptr [ebp-8]
call ASTDELTREE
add esp, 4
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-8], eax
.Lt_006E:
.Lt_006C:
push dword ptr [ebp-8]
call ASTCONSTEQZERO
add esp, 4
not eax
mov dword ptr [ebp-4], eax
.Lt_0065:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size PPEXPRESSION, .-PPEXPRESSION
.balign 16
PPSKIP:
.type PPSKIP, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
.Lt_0094:
mov dword ptr [PP+200], -1
push 0
call CCOMMENT
add esp, 4
cmp dword ptr [ENV+144], 0
je .Lt_0097
cmp dword ptr [ENV+828], 0
jne .Lt_0099
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
.Lt_0099:
.Lt_0098:
.Lt_0097:
.Lt_0096:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 257
je .Lt_009B
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
jmp .Lt_009A
.Lt_009B:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_009A:
mov eax, dword ptr [PP+196]
mov dword ptr [ebp-4], eax
.Lt_009C:
push 0
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 35
jne .Lt_00A1
.Lt_00A2:
push 256
call LEXSKIPTOKEN
add esp, 4
push 256
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-12], eax
jmp .Lt_00A4
.Lt_00A6:
inc dword ptr [ebp-4]
jmp .Lt_00A3
.Lt_00A7:
mov eax, dword ptr [PP+196]
cmp dword ptr [ebp-4], eax
jne .Lt_00A9
.Lt_00AA:
mov dword ptr [PP+200], 0
call PPCONDELSE
jmp .Lt_0095
jmp .Lt_00A8
.Lt_00A9:
cmp dword ptr [ebp-4], 0
jne .Lt_00AB
.Lt_00AC:
push 0
push 0
push 43
call ERRREPORT
add esp, 12
.Lt_00AB:
.Lt_00A8:
jmp .Lt_00A3
.Lt_00AD:
mov eax, dword ptr [PP+196]
cmp dword ptr [ebp-4], eax
jne .Lt_00AF
.Lt_00B0:
mov dword ptr [PP+200], 0
call PPCONDENDIF
jmp .Lt_0095
jmp .Lt_00AE
.Lt_00AF:
cmp dword ptr [ebp-4], 0
jne .Lt_00B1
.Lt_00B2:
push 0
push 0
push 43
call ERRREPORT
add esp, 12
jmp .Lt_00AE
.Lt_00B1:
dec dword ptr [ebp-4]
.Lt_00B3:
.Lt_00AE:
jmp .Lt_00A3
.Lt_00B4:
jmp .Lt_00A3
.Lt_00B5:
push 0
push 0
push 17
call ERRREPORT
add esp, 12
jmp .Lt_00A3
.Lt_00A4:
mov eax, dword ptr [ebp-12]
add eax, 4294967030
cmp eax, 18
ja .Lt_00B5
mov eax, dword ptr [ebp-12]
jmp dword ptr [.LT_00B6+eax*4-1064]
.LT_00B6:
.int .Lt_00A6
.int .Lt_00A6
.int .Lt_00A6
.int .Lt_00A7
.int .Lt_00A7
.int .Lt_00AD
.int .Lt_00B4
.int .Lt_00B4
.int .Lt_00B4
.int .Lt_00B4
.int .Lt_00B4
.int .Lt_00B4
.int .Lt_00B4
.int .Lt_00B4
.int .Lt_00B4
.int .Lt_00B4
.int .Lt_00B4
.int .Lt_00B4
.int .Lt_00B4
.Lt_00A3:
jmp .Lt_009F
.Lt_00A1:
cmp dword ptr [ebp-8], 256
jne .Lt_00B7
.Lt_00B8:
push 0
push 0
push 289
call ERRREPORT
add esp, 12
jmp .Lt_009D
.Lt_00B7:
.Lt_009F:
call LEXSKIPLINE
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 257
jne .Lt_00BA
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_00BA:
.Lt_00B9:
.Lt_009E:
jmp .Lt_009C
.Lt_009D:
mov dword ptr [PP+200], 0
.Lt_0095:
pop ebx
mov esp, ebp
pop ebp
ret
.size PPSKIP, .-PPSKIP
	#fbc-1.01.0/src/compiler/pp-cond.bas' compilation took 0.02666604972910136 secs

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
	.lcomm	PPTB,512

.section .ctors, "aw", @progbits
.int fb_ctor__ppzcond
