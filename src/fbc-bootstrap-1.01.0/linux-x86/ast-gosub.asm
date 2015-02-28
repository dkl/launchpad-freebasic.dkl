	.intel_syntax noprefix

	#FreeBASIC-1.01.0-source/src/compiler/ast-gosub.bas' compilation started at 16:30:02 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl ASTGOSUBADDINIT
ASTGOSUBADDINIT:
.type ASTGOSUBADDINIT, @function
push ebp
mov ebp, esp
sub esp, 60
push ebx
.Lt_005F:
lea eax, [ebp-16]
mov dword ptr [ebp-48], eax
lea eax, [ebp-16]
lea ebx, [ebp-48]
add ebx, 4
mov dword ptr [ebx], eax
lea eax, [ebp-48]
add eax, 8
mov dword ptr [eax], 16
lea eax, [ebp-48]
add eax, 12
mov dword ptr [eax], 16
lea eax, [ebp-48]
add eax, 16
mov dword ptr [eax], 1
lea eax, [ebp-48]
add eax, 20
mov dword ptr [eax], 1
lea eax, [ebp-48]
add eax, 24
mov dword ptr [eax], 0
lea eax, [ebp-48]
add eax, 28
mov dword ptr [eax], 0
push dword ptr [ebp+8]
call SYMBPROCALLOCEXT
add esp, 4
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+108]
mov eax, dword ptr [ebx+48]
and eax, 4
test eax, eax
je .Lt_0063
jmp .Lt_0060
.Lt_0063:
.Lt_0062:
mov eax, dword ptr [ENV+104]
test eax, eax
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ENV+180]
test ebx, ebx
sete bl
shr ebx, 1
sbb ebx, ebx
and eax, ebx
je .Lt_0065
mov dword ptr [ebp-60], 7
jmp .Lt_0064
.Lt_0065:
mov dword ptr [ebp-60], 32
.Lt_0064:
push 2
push 0
push dword ptr [ebp-60]
call SYMBADDIMPLICITVAR
add esp, 12
mov dword ptr [ebp-52], eax
push -1
push dword ptr [ebp-52]
call ASTNEWDECL
add esp, 8
mov dword ptr [ebp-56], eax
mov eax, dword ptr [ebp-52]
mov ebx, dword ptr [eax+8]
or ebx, 8
mov eax, ebx
mov ebx, dword ptr [ebp-52]
mov dword ptr [ebx+8], eax
push dword ptr [ebp-56]
call ASTADDUNSCOPED
add esp, 4
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+108]
mov eax, dword ptr [ebp-52]
mov dword ptr [ebx+60], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+108]
mov eax, dword ptr [ebx+48]
or eax, 4
mov ebx, eax
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+108]
mov dword ptr [ecx+48], ebx
.Lt_0060:
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTGOSUBADDINIT, .-ASTGOSUBADDINIT
.balign 16

.globl ASTGOSUBADDJMP
ASTGOSUBADDJMP:
.type ASTGOSUBADDJMP, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0068:
push dword ptr [ebp+8]
call ASTGOSUBADDINIT
add esp, 4
mov eax, dword ptr [ENV+104]
test eax, eax
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ENV+180]
test ebx, ebx
sete bl
shr ebx, 1
sbb ebx, ebx
and eax, ebx
je .Lt_006B
push 1
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+108]
push dword ptr [eax+60]
call ASTBUILDVARINC
add esp, 8
push eax
call ASTADD
add esp, 4
push 0
push dword ptr [ebp+12]
push 98
call ASTNEWBRANCH
add esp, 12
push eax
call ASTADD
add esp, 4
jmp .Lt_006A
.Lt_006B:
push 4
push 0
call SYMBADDLABEL
add esp, 8
mov dword ptr [ebp-4], eax
push 0
push 0
push dword ptr [ebp-4]
push 1
push 0
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
push eax
push 0
push -2147483648
push 0
push 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+108]
push dword ptr [ebx+60]
call ASTNEWVAR
add esp, 20
push eax
call ASTNEWADDROF
add esp, 4
push eax
call RTLGOSUBPUSH
add esp, 4
push eax
call RTLSETJMP
add esp, 4
push eax
push 45
call ASTNEWBOP
add esp, 20
push eax
call ASTBUILDBRANCH
add esp, 16
push eax
call ASTADD
add esp, 4
push 0
push dword ptr [ebp+12]
push 97
call ASTNEWBRANCH
add esp, 12
push eax
call ASTADD
add esp, 4
push -1
push dword ptr [ebp-4]
call ASTNEWLABEL
add esp, 8
push eax
call ASTADD
add esp, 4
.Lt_006A:
.Lt_0069:
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTGOSUBADDJMP, .-ASTGOSUBADDJMP
.balign 16

.globl ASTGOSUBADDJUMPPTR
ASTGOSUBADDJUMPPTR:
.type ASTGOSUBADDJUMPPTR, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_006E:
push dword ptr [ebp+8]
call ASTGOSUBADDINIT
add esp, 4
mov eax, dword ptr [ENV+104]
test eax, eax
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ENV+180]
test ebx, ebx
sete bl
shr ebx, 1
sbb ebx, ebx
and eax, ebx
je .Lt_0071
push 1
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+108]
push dword ptr [eax+60]
call ASTBUILDVARINC
add esp, 8
push eax
call ASTADD
add esp, 4
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp+16]
call ASTNEWVAR
add esp, 20
push eax
call ASTNEWADDROF
add esp, 4
push eax
push 87
call ASTNEWSTACK
add esp, 8
push eax
call ASTADD
add esp, 4
push dword ptr [ebp+12]
call ASTADD
add esp, 4
jmp .Lt_0070
.Lt_0071:
push dword ptr [ebp+8]
call ASTGOSUBADDINIT
add esp, 4
push 4
push 0
call SYMBADDLABEL
add esp, 8
mov dword ptr [ebp-4], eax
push 0
push 0
push dword ptr [ebp-4]
push 1
push 0
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
push eax
push 0
push -2147483648
push 0
push 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+108]
push dword ptr [ebx+60]
call ASTNEWVAR
add esp, 20
push eax
call ASTNEWADDROF
add esp, 4
push eax
call RTLGOSUBPUSH
add esp, 4
push eax
call RTLSETJMP
add esp, 4
push eax
push 45
call ASTNEWBOP
add esp, 20
push eax
call ASTBUILDBRANCH
add esp, 16
push eax
call ASTADD
add esp, 4
push dword ptr [ebp+12]
call ASTADD
add esp, 4
push -1
push dword ptr [ebp-4]
call ASTNEWLABEL
add esp, 8
push eax
call ASTADD
add esp, 4
push 0
push dword ptr [ebp+16]
push 97
call ASTNEWBRANCH
add esp, 12
push eax
call ASTADD
add esp, 4
.Lt_0070:
.Lt_006F:
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTGOSUBADDJUMPPTR, .-ASTGOSUBADDJUMPPTR
.balign 16

.globl ASTGOSUBADDRETURN
ASTGOSUBADDRETURN:
.type ASTGOSUBADDRETURN, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0074:
push dword ptr [ebp+8]
call ASTGOSUBADDINIT
add esp, 4
mov eax, dword ptr [ENV+104]
test eax, eax
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ENV+180]
test ebx, ebx
sete bl
shr ebx, 1
sbb ebx, ebx
and eax, ebx
je .Lt_0077
push 4
push 0
call SYMBADDLABEL
add esp, 8
mov dword ptr [ebp-8], eax
push 0
push 0
push dword ptr [ebp-8]
push 1
push 0
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
push eax
push 0
push -2147483648
push 0
push 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+108]
push dword ptr [ebx+60]
call ASTNEWVAR
add esp, 20
push eax
push 48
call ASTNEWBOP
add esp, 20
push eax
call ASTBUILDBRANCH
add esp, 16
push eax
call ASTADD
add esp, 4
push -1
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+108]
push dword ptr [ebx+60]
call ASTBUILDVARINC
add esp, 8
push eax
call ASTADD
add esp, 4
cmp dword ptr [ebp+12], 0
jne .Lt_0079
push 0
push 0
push 100
call ASTNEWBRANCH
add esp, 12
push eax
call ASTADD
add esp, 4
jmp .Lt_0078
.Lt_0079:
push 0
push 7
mov ebx, dword ptr [ENV+236]
mov eax, ebx
sar eax, 31
push eax
push ebx
call ASTNEWCONSTI
add esp, 16
push eax
push 88
call ASTNEWSTACK
add esp, 8
push eax
call ASTADD
add esp, 4
push 0
push dword ptr [ebp+12]
push 97
call ASTNEWBRANCH
add esp, 12
push eax
call ASTADD
add esp, 4
.Lt_0078:
push -1
push dword ptr [ebp-8]
call ASTNEWLABEL
add esp, 8
push eax
call ASTADD
add esp, 4
push 0
push 7
push 0
push 16
call ASTNEWCONSTI
add esp, 16
push eax
call RTLERRORSETNUM
add esp, 4
cmp dword ptr [ENV+148], 0
je .Lt_007B
lea eax, [ENV+244]
push eax
mov eax, dword ptr [LEX+839664]
push dword ptr [eax+16548]
push 0
push 7
push 0
push 16
call ASTNEWCONSTI
add esp, 16
push eax
call RTLERRORTHROW
add esp, 12
.Lt_007B:
.Lt_007A:
mov dword ptr [ebp-4], -1
jmp .Lt_0076
.Lt_0077:
cmp dword ptr [ebp+12], 0
jne .Lt_007D
push 0
push -2147483648
push 0
push 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+108]
push dword ptr [ebx+60]
call ASTNEWVAR
add esp, 20
push eax
call ASTNEWADDROF
add esp, 4
push eax
call RTLGOSUBRETURN
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_007C
.Lt_007D:
push 4
push 0
call SYMBADDLABEL
add esp, 8
mov dword ptr [ebp-8], eax
push 0
push 0
push dword ptr [ebp-8]
push 1
push 0
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
push eax
push 0
push -2147483648
push 0
push 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+108]
push dword ptr [ebx+60]
call ASTNEWVAR
add esp, 20
push eax
call ASTNEWADDROF
add esp, 4
push eax
call RTLGOSUBPOP
add esp, 4
push eax
push 45
call ASTNEWBOP
add esp, 20
push eax
call ASTBUILDBRANCH
add esp, 16
push eax
call ASTADD
add esp, 4
push 0
push dword ptr [ebp+12]
push 97
call ASTNEWBRANCH
add esp, 12
push eax
call ASTADD
add esp, 4
push -1
push dword ptr [ebp-8]
call ASTNEWLABEL
add esp, 8
push eax
call ASTADD
add esp, 4
push 0
push 7
push 0
push 16
call ASTNEWCONSTI
add esp, 16
push eax
call RTLERRORSETNUM
add esp, 4
cmp dword ptr [ENV+148], 0
je .Lt_007F
lea eax, [ENV+244]
push eax
mov eax, dword ptr [LEX+839664]
push dword ptr [eax+16548]
push 0
push 7
push 0
push 16
call ASTNEWCONSTI
add esp, 16
push eax
call RTLERRORTHROW
add esp, 12
.Lt_007F:
.Lt_007E:
mov dword ptr [ebp-4], -1
.Lt_007C:
.Lt_0076:
.Lt_0075:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTGOSUBADDRETURN, .-ASTGOSUBADDRETURN
.balign 16

.globl ASTGOSUBADDEXIT
ASTGOSUBADDEXIT:
.type ASTGOSUBADDEXIT, @function
push ebp
mov ebp, esp
push ebx
.Lt_0082:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+108]
mov eax, dword ptr [ebx+48]
and eax, 4
test eax, eax
je .Lt_0085
mov eax, dword ptr [ENV+104]
test eax, eax
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ENV+180]
test ebx, ebx
sete bl
shr ebx, 1
sbb ebx, ebx
and eax, ebx
test eax, eax
jne .Lt_0087
push 0
push -2147483648
push 0
push 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+108]
push dword ptr [ebx+60]
call ASTNEWVAR
add esp, 20
push eax
call ASTNEWADDROF
add esp, 4
push eax
call RTLGOSUBEXIT
add esp, 4
push eax
call ASTADD
add esp, 4
.Lt_0087:
.Lt_0086:
.Lt_0085:
.Lt_0084:
.Lt_0083:
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTGOSUBADDEXIT, .-ASTGOSUBADDEXIT
.balign 16
fb_ctor__astzgosub:
.type fb_ctor__astzgosub, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__astzgosub, .-fb_ctor__astzgosub
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
	#FreeBASIC-1.01.0-source/src/compiler/ast-gosub.bas' compilation took 0.0324979298748076 secs

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
.int fb_ctor__astzgosub
