	.intel_syntax noprefix

	#FreeBASIC-1.01.0-source/src/compiler/flist.bas' compilation started at 16:30:04 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl FLISTINIT
FLISTINIT:
.type FLISTINIT, @function
push ebp
mov ebp, esp
push ebx
.Lt_0004:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+12]
mov dword ptr [eax], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp+12]
mov dword ptr [ebx+4], eax
push 0
mov eax, dword ptr [ebp+16]
add eax, 4
push eax
push dword ptr [ebp+12]
mov eax, dword ptr [ebp+8]
lea ebx, [eax+20]
push ebx
call LISTINIT
add esp, 16
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [ebx+24]
mov dword ptr [eax+52], ecx
mov ecx, dword ptr [ebp+8]
mov dword ptr [ecx+12], 0
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ecx+52]
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
mov dword ptr [ecx+8], ebx
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+16], 0
.Lt_0005:
pop ebx
mov esp, ebp
pop ebp
ret
.size FLISTINIT, .-FLISTINIT
.balign 16

.globl FLISTEND
FLISTEND:
.type FLISTEND, @function
push ebp
mov ebp, esp
push ebx
.Lt_0006:
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 0
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+4], 0
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+12], 0
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+16], 0
mov eax, dword ptr [ebp+8]
lea ebx, [eax+20]
push ebx
call LISTEND
add esp, 4
.Lt_0007:
pop ebx
mov esp, ebp
pop ebp
ret
.size FLISTEND, .-FLISTEND
.balign 16

.globl FLISTNEWITEM
FLISTNEWITEM:
.type FLISTNEWITEM, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
push esi
mov dword ptr [ebp-4], 0
.Lt_0008:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+4], 0
jg .Lt_000B
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+52]
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [ebx]
mov dword ptr [eax+52], ecx
mov ecx, dword ptr [ebp+8]
cmp dword ptr [ecx+52], 0
jne .Lt_000D
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ecx]
shr eax, 1
mov ecx, eax
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+4], ecx
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
add dword ptr [ecx], ebx
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+4]
mov ebx, dword ptr [ebp+8]
lea ecx, [ebx+20]
push ecx
call LISTALLOCTB
add esp, 8
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ecx+24]
mov dword ptr [ebx+52], eax
jmp .Lt_000C
.Lt_000D:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+52]
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [ebx+8]
mov dword ptr [eax+4], ecx
.Lt_000C:
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ecx+52]
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
mov dword ptr [ecx+8], ebx
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+12], 0
.Lt_000B:
.Lt_000A:
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ebp+8]
mov esi, dword ptr [eax+32]
imul esi, dword ptr [ecx+12]
mov ecx, dword ptr [ebx+8]
add ecx, esi
mov dword ptr [Lt_0010], ecx
mov ecx, dword ptr [ebp+8]
inc dword ptr [ecx+12]
mov ecx, dword ptr [ebp+8]
dec dword ptr [ecx+4]
mov ecx, dword ptr [ebp+8]
cmp dword ptr [ecx+16], 0
je .Lt_000F
mov ecx, dword ptr [ebp+8]
mov esi, dword ptr [ecx+16]
mov ecx, dword ptr [Lt_0010]
mov dword ptr [esi], ecx
.Lt_000F:
.Lt_000E:
mov ecx, dword ptr [ebp+8]
mov esi, dword ptr [Lt_0010]
mov dword ptr [ecx+16], esi
mov esi, dword ptr [Lt_0010]
mov dword ptr [esi], 0
mov esi, dword ptr [Lt_0010]
add esi, 4
mov dword ptr [ebp-4], esi
.Lt_0009:
mov eax, dword ptr [ebp-4]
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size FLISTNEWITEM, .-FLISTNEWITEM

.section .bss
.balign 4
	.lcomm	Lt_0010,4

.section .text
.balign 16

.globl FLISTRESET
FLISTRESET:
.type FLISTRESET, @function
push ebp
mov ebp, esp
push ebx
.Lt_0011:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [eax+20]
mov dword ptr [ebx+52], ecx
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ecx+52]
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+8]
mov dword ptr [ecx+4], eax
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+52]
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ecx+4]
mov dword ptr [eax+8], ebx
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+12], 0
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+16], 0
.Lt_0012:
pop ebx
mov esp, ebp
pop ebp
ret
.size FLISTRESET, .-FLISTRESET
.balign 16

.globl FLISTGETHEAD
FLISTGETHEAD:
.type FLISTGETHEAD, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_0013:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+20]
mov eax, dword ptr [ebx+4]
mov dword ptr [Lt_0017], eax
cmp dword ptr [Lt_0017], 0
jne .Lt_0016
mov dword ptr [ebp-4], 0
jmp .Lt_0015
.Lt_0016:
mov eax, dword ptr [Lt_0017]
add eax, 4
mov dword ptr [ebp-4], eax
.Lt_0015:
.Lt_0014:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size FLISTGETHEAD, .-FLISTGETHEAD

.section .bss
.balign 4
	.lcomm	Lt_0017,4

.section .text
.balign 16

.globl FLISTGETNEXT
FLISTGETNEXT:
.type FLISTGETNEXT, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_0018:
mov eax, dword ptr [ebp+8]
add eax, -4
mov ebx, dword ptr [eax]
mov dword ptr [Lt_001C], ebx
cmp dword ptr [Lt_001C], 0
jne .Lt_001B
mov dword ptr [ebp-4], 0
jmp .Lt_001A
.Lt_001B:
mov ebx, dword ptr [Lt_001C]
add ebx, 4
mov dword ptr [ebp-4], ebx
.Lt_001A:
.Lt_0019:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size FLISTGETNEXT, .-FLISTGETNEXT

.section .bss
.balign 4
	.lcomm	Lt_001C,4
	#FreeBASIC-1.01.0-source/src/compiler/flist.bas' compilation took 0.002028954681009054 secs
