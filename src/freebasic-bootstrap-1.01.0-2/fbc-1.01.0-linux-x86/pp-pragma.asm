	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/pp-pragma.bas' compilation started at 14:16:38 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl PPPRAGMAINIT
PPPRAGMAINIT:
.type PPPRAGMAINIT, @function
push ebp
mov ebp, esp
sub esp, 4
.Lt_0063:
mov dword ptr [ebp-4], 0
.Lt_0068:
mov eax, dword ptr [ebp-4]
imul eax, 68
mov dword ptr [PRAGMASTK+eax], 0
.Lt_0066:
inc dword ptr [ebp-4]
.Lt_0065:
cmp dword ptr [ebp-4], 27
jle .Lt_0068
.Lt_0067:
.Lt_0064:
mov esp, ebp
pop ebp
ret
.size PPPRAGMAINIT, .-PPPRAGMAINIT
.balign 16

.globl PPPRAGMAEND
PPPRAGMAEND:
.type PPPRAGMAEND, @function
.Lt_0069:
.Lt_006A:
ret
.size PPPRAGMAEND, .-PPPRAGMAEND
.balign 16

.globl PPPRAGMA
PPPRAGMA:
.type PPPRAGMA, @function
push ebp
mov ebp, esp
sub esp, 68
push ebx
.Lt_0075:
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
mov dword ptr [ebp-16], -1
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-24], 0
push 0
push -1
push 0
call LEXGETTEXT
push eax
call fb_StrAllocTempDescZ
add esp, 4
push eax
call fb_StrLcase2
add esp, 8
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
push 5
push offset Lt_0077
push -1
lea eax, [ebp-12]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_0079
mov dword ptr [ebp-24], -1
jmp .Lt_0078
.Lt_0079:
push 4
push offset Lt_007B
push -1
lea eax, [ebp-12]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_007A
mov dword ptr [ebp-20], -1
.Lt_007A:
.Lt_0078:
mov eax, dword ptr [ebp-24]
or eax, dword ptr [ebp-20]
je .Lt_007D
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
je .Lt_007F
push 0
push 0
push 6
call ERRREPORT
add esp, 12
jmp .Lt_007E
.Lt_007F:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_007E:
push 0
push -1
push 0
call LEXGETTEXT
push eax
call fb_StrAllocTempDescZ
add esp, 4
push eax
call fb_StrLcase2
add esp, 8
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
.Lt_007D:
.Lt_007C:
mov dword ptr [ebp-36], 0
.Lt_0083:
push 16
mov eax, dword ptr [ebp-36]
imul eax, 24
lea ebx, [PRAGMAOPT+eax]
push ebx
push -1
lea ebx, [ebp-12]
push ebx
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_0085
mov eax, dword ptr [ebp-36]
mov dword ptr [ebp-16], eax
jmp .Lt_0082
.Lt_0085:
.Lt_0084:
.Lt_0081:
inc dword ptr [ebp-36]
.Lt_0080:
cmp dword ptr [ebp-36], 1
jle .Lt_0083
.Lt_0082:
cmp dword ptr [ebp-16], -1
jne .Lt_0087
push 0
push 0
push 17
call ERRREPORT
add esp, 12
mov eax, dword ptr [ebp-24]
or eax, dword ptr [ebp-20]
je .Lt_0089
push 0
push 0
push -1
push 41
call HSKIPUNTIL
add esp, 16
jmp .Lt_0088
.Lt_0089:
push 0
push 0
push 0
push 257
call HSKIPUNTIL
add esp, 16
.Lt_0088:
lea eax, [ebp-12]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0076
.Lt_0087:
.Lt_0086:
mov eax, dword ptr [ebp-20]
or eax, dword ptr [ebp-24]
je .Lt_008B
mov eax, dword ptr [ebp-16]
imul eax, 24
mov ebx, dword ptr [PRAGMAOPT+eax+20]
and ebx, 1
test ebx, ebx
jne .Lt_008D
push 0
push 0
push 17
call ERRREPORT
add esp, 12
mov ebx, dword ptr [ebp-24]
or ebx, dword ptr [ebp-20]
je .Lt_008F
push 0
push 0
push -1
push 41
call HSKIPUNTIL
add esp, 16
jmp .Lt_008E
.Lt_008F:
push 0
push 0
push 0
push 257
call HSKIPUNTIL
add esp, 16
.Lt_008E:
lea ebx, [ebp-12]
push ebx
call fb_StrDelete
add esp, 4
jmp .Lt_0076
.Lt_008D:
.Lt_008C:
.Lt_008B:
.Lt_008A:
push 0
call LEXSKIPTOKEN
add esp, 4
cmp dword ptr [ebp-20], 0
je .Lt_0091
lea ebx, [ebp-32]
push ebx
mov ebx, dword ptr [ebp-16]
imul ebx, 24
push dword ptr [PRAGMAOPT+ebx+16]
call PRAGMAPOP
add esp, 8
cmp dword ptr [ebp-16], 0
jne .Lt_0093
cmp dword ptr [ENV+800], 0
jle .Lt_0095
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
push 0
push 25
push offset Lt_0096
push -1
lea ebx, [ebp-44]
push ebx
call fb_StrAssign
add esp, 20
lea eax, [ebp-44]
push eax
call LEXPPONLYEMITTEXT
add esp, 4
lea eax, [ebp-44]
push eax
call fb_StrDelete
add esp, 4
.Lt_0095:
.Lt_0094:
.Lt_0093:
.Lt_0092:
jmp .Lt_0090
.Lt_0091:
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
cmp dword ptr [ebp-24], 0
je .Lt_0099
mov eax, dword ptr [ebp-16]
imul eax, 24
push dword ptr [PRAGMAOPT+eax+16]
call FBGETOPTION
add esp, 4
mov ecx, eax
mov ebx, ecx
sar ebx, 31
push ebx
push ecx
mov ecx, dword ptr [ebp-16]
imul ecx, 24
push dword ptr [PRAGMAOPT+ecx+16]
call PRAGMAPUSH
add esp, 12
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
jne .Lt_009B
push 0
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_009A
.Lt_009B:
mov dword ptr [ebp-32], 4294967295
mov dword ptr [ebp-28], 4294967295
.Lt_009A:
jmp .Lt_0098
.Lt_0099:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 299
jne .Lt_009D
mov eax, dword ptr [ebp-16]
imul eax, 24
mov ecx, dword ptr [PRAGMAOPT+eax+20]
and ecx, 2
test ecx, ecx
jne .Lt_009F
push 0
push 0
push 17
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push 257
call HSKIPUNTIL
add esp, 16
lea ecx, [ebp-12]
push ecx
call fb_StrDelete
add esp, 4
jmp .Lt_0076
.Lt_009F:
.Lt_009E:
push 0
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_009C
.Lt_009D:
mov dword ptr [ebp-32], 4294967295
mov dword ptr [ebp-28], 4294967295
.Lt_009C:
.Lt_0098:
cmp dword ptr [ebp-28], 0
jne .Lt_00A1
cmp dword ptr [ebp-32], 0
jne .Lt_00A1
.Lt_00BB:
push 0
push 0
call CEXPRESSION
push eax
call CCONSTINTEXPR
add esp, 12
mov dword ptr [ebp-32], eax
mov dword ptr [ebp-28], edx
.Lt_00A1:
.Lt_00A0:
cmp dword ptr [ebp-16], 0
jne .Lt_00A3
cmp dword ptr [ENV+800], 0
jle .Lt_00A5
cmp dword ptr [ebp-24], 0
je .Lt_00A7
mov dword ptr [ebp-68], 0
mov dword ptr [ebp-64], 0
mov dword ptr [ebp-60], 0
push 0
push -1
push 2
push offset Lt_00A9
push -1
push -1
push dword ptr [ebp-28]
push dword ptr [ebp-32]
call fb_LongintToStr
add esp, 8
push eax
push 27
push offset Lt_00A8
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
lea eax, [ebp-68]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-68]
push eax
call LEXPPONLYEMITTEXT
add esp, 4
lea eax, [ebp-68]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_00A6
.Lt_00A7:
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
push 0
push -1
push -1
push dword ptr [ebp-28]
push dword ptr [ebp-32]
call fb_LongintToStr
add esp, 8
push eax
push 23
push offset Lt_00AD
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
lea eax, [ebp-56]
push eax
call LEXPPONLYEMITTEXT
add esp, 4
lea eax, [ebp-56]
push eax
call fb_StrDelete
add esp, 4
.Lt_00A6:
.Lt_00A5:
.Lt_00A4:
.Lt_00A3:
.Lt_00A2:
.Lt_0090:
mov eax, dword ptr [ebp-16]
imul eax, 24
mov edx, dword ptr [PRAGMAOPT+eax+20]
and edx, 4
test edx, edx
je .Lt_00B1
cmp dword ptr [ebp-16], 1
jne .Lt_00B3
.Lt_00B4:
call FBPRAGMAONCE
.Lt_00B3:
.Lt_00B2:
jmp .Lt_00B0
.Lt_00B1:
mov edx, dword ptr [ebp-16]
imul edx, 24
mov eax, dword ptr [PRAGMAOPT+edx+20]
and eax, 3
test eax, eax
je .Lt_00B6
mov eax, dword ptr [ebp-32]
push eax
mov eax, dword ptr [ebp-16]
imul eax, 24
push dword ptr [PRAGMAOPT+eax+16]
call FBCHANGEOPTION
add esp, 8
.Lt_00B6:
.Lt_00B5:
.Lt_00B0:
mov eax, dword ptr [ebp-24]
or eax, dword ptr [ebp-20]
je .Lt_00B8
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_00BA
push 0
push 0
push 7
call ERRREPORT
add esp, 12
push 0
push 0
push -1
push 41
call HSKIPUNTIL
add esp, 16
jmp .Lt_00B9
.Lt_00BA:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_00B9:
.Lt_00B8:
.Lt_00B7:
lea eax, [ebp-12]
push eax
call fb_StrDelete
add esp, 4
.Lt_0076:
pop ebx
mov esp, ebp
pop ebp
ret
.size PPPRAGMA, .-PPPRAGMA
.balign 16
fb_ctor__ppzpragma:
.type fb_ctor__ppzpragma, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__ppzpragma, .-fb_ctor__ppzpragma
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
PRAGMAPUSH:
.type PRAGMAPUSH, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_006B:
mov eax, dword ptr [ebp+8]
imul eax, 68
lea ebx, [PRAGMASTK+eax]
mov dword ptr [ebp-4], ebx
mov ebx, dword ptr [ebp-4]
cmp dword ptr [ebx], 8
jl .Lt_006F
push 0
push 0
push 27
call ERRREPORT
add esp, 12
jmp .Lt_006C
.Lt_006F:
.Lt_006E:
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebx]
sal eax, 3
mov ebx, dword ptr [ebp-4]
add ebx, eax
mov ecx, dword ptr [ebp+12]
mov eax, dword ptr [ebp+16]
mov dword ptr [ebx+4], ecx
mov dword ptr [ebx+8], eax
mov ecx, dword ptr [ebp-4]
inc dword ptr [ecx]
.Lt_006C:
pop ebx
mov esp, ebp
pop ebp
ret
.size PRAGMAPUSH, .-PRAGMAPUSH
.balign 16
PRAGMAPOP:
.type PRAGMAPOP, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
push esi
.Lt_0070:
mov eax, dword ptr [ebp+8]
imul eax, 68
lea ebx, [PRAGMASTK+eax]
mov dword ptr [ebp-4], ebx
mov ebx, dword ptr [ebp-4]
cmp dword ptr [ebx], 0
jg .Lt_0074
push 0
push 0
push 100
call ERRREPORT
add esp, 12
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx], 0
mov dword ptr [ebx+4], 0
jmp .Lt_0071
.Lt_0074:
.Lt_0073:
mov ebx, dword ptr [ebp-4]
dec dword ptr [ebx]
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebx]
sal eax, 3
mov ebx, dword ptr [ebp-4]
add ebx, eax
mov eax, dword ptr [ebp+12]
mov esi, dword ptr [ebx+4]
mov ecx, dword ptr [ebx+8]
mov dword ptr [eax], esi
mov dword ptr [eax+4], ecx
.Lt_0071:
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size PRAGMAPOP, .-PRAGMAPOP
	#fbc-1.01.0/src/compiler/pp-pragma.bas' compilation took 0.02758692542556673 secs

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
	.lcomm	PRAGMASTK,1904

.section .data
.balign 4
PRAGMAOPT:
.ascii "msbitfields\0"
.skip 4,0
.int 23
.int 3
.ascii "once\0"
.skip 11,0
.int 0
.int 4

.section .rodata
.balign 4
Lt_0077:	.ascii	"push\0"
.balign 4
Lt_007B:	.ascii	"pop\0"
.balign 4
Lt_0096:	.ascii	"#pragma pop(msbitfields)\0"
.balign 4
Lt_00A8:	.ascii	"#pragma push(msbitfields, \0"
.balign 4
Lt_00A9:	.ascii	")\0"
.balign 4
Lt_00AD:	.ascii	"#pragma msbitfields = \0"

.section .ctors, "aw", @progbits
.int fb_ctor__ppzpragma
