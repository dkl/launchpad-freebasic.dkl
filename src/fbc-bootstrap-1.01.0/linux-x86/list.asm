	.intel_syntax noprefix

	#FreeBASIC-1.01.0-source/src/compiler/list.bas' compilation started at 16:30:04 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl XALLOCATE
XALLOCATE:
.type XALLOCATE, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_0009:
push dword ptr [ebp+8]
call malloc
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_000C
call FATALOUTOFMEMORY
.Lt_000C:
.Lt_000B:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_000A:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size XALLOCATE, .-XALLOCATE
.balign 16

.globl XCALLOCATE
XCALLOCATE:
.type XCALLOCATE, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_000D:
push 1
push dword ptr [ebp+8]
call calloc
add esp, 8
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0010
call FATALOUTOFMEMORY
.Lt_0010:
.Lt_000F:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_000E:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size XCALLOCATE, .-XCALLOCATE
.balign 16

.globl XREALLOCATE
XREALLOCATE:
.type XREALLOCATE, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_0011:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call realloc
add esp, 8
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0014
call FATALOUTOFMEMORY
.Lt_0014:
.Lt_0013:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0012:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size XREALLOCATE, .-XREALLOCATE
.balign 16

.globl LISTINIT
LISTINIT:
.type LISTINIT, @function
push ebp
mov ebp, esp
push ebx
.Lt_0015:
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 0
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+4], 0
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+8], 0
mov eax, dword ptr [ebp+16]
add eax, 8
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+12], eax
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+20], 0
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+24], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+20]
mov dword ptr [eax+28], ebx
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call LISTALLOCTB
add esp, 8
.Lt_0016:
pop ebx
mov esp, ebp
pop ebp
ret
.size LISTINIT, .-LISTINIT
.balign 16

.globl LISTEND
LISTEND:
.type LISTEND, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_0017:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-4], ebx
.Lt_0019:
cmp dword ptr [ebp-4], 0
je .Lt_001A
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebx]
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-4]
push dword ptr [eax+4]
call free
add esp, 4
push dword ptr [ebp-4]
call free
add esp, 4
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
jmp .Lt_0019
.Lt_001A:
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 0
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+4], 0
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+8], 0
.Lt_0018:
pop ebx
mov esp, ebp
pop ebp
ret
.size LISTEND, .-LISTEND
.balign 16

.globl LISTALLOCTB
LISTALLOCTB:
.type LISTALLOCTB, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
.Lt_001B:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+28]
and ebx, 1
test ebx, ebx
je .Lt_001E
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp+12]
imul eax, dword ptr [ebx+12]
mov ecx, eax
push ecx
call XCALLOCATE
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_001D
.Lt_001E:
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [ebp+12]
imul ecx, dword ptr [eax+12]
mov ebx, ecx
push ebx
call XALLOCATE
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_001D:
push 12
call XALLOCATE
add esp, 4
mov dword ptr [ebp-16], eax
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 0
jne .Lt_0020
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-16]
mov dword ptr [eax], ebx
.Lt_0020:
.Lt_001F:
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx+4], 0
je .Lt_0022
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
mov ebx, dword ptr [ebp-16]
mov dword ptr [eax], ebx
.Lt_0022:
.Lt_0021:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp-16]
mov dword ptr [ebx+4], eax
mov eax, dword ptr [ebp-16]
mov dword ptr [eax], 0
mov eax, dword ptr [ebp-16]
mov ebx, dword ptr [ebp-4]
mov dword ptr [eax+4], ebx
mov ebx, dword ptr [ebp-16]
mov eax, dword ptr [ebp+12]
mov dword ptr [ebx+8], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-4]
mov dword ptr [eax+16], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp+12]
add dword ptr [ebx+8], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+28]
and ebx, 2
test ebx, ebx
je .Lt_0024
mov dword ptr [ebp-12], 0
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+16]
mov dword ptr [ebp-8], eax
mov dword ptr [ebp-20], 1
mov eax, dword ptr [ebp+12]
dec eax
mov dword ptr [ebp-24], eax
jmp .Lt_0026
.Lt_0029:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp-12]
mov dword ptr [eax], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp-8]
add eax, dword ptr [ebx+12]
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+4], eax
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-8], ebx
.Lt_0027:
inc dword ptr [ebp-20]
.Lt_0026:
mov ebx, dword ptr [ebp-24]
cmp dword ptr [ebp-20], ebx
jle .Lt_0029
.Lt_0028:
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebp-12]
mov dword ptr [ebx], eax
mov eax, dword ptr [ebp-8]
mov dword ptr [eax+4], 0
.Lt_0024:
.Lt_0023:
.Lt_001C:
pop ebx
mov esp, ebp
pop ebp
ret
.size LISTALLOCTB, .-LISTALLOCTB
.balign 16

.globl LISTNEWNODE
LISTNEWNODE:
.type LISTNEWNODE, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_002A:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+16], 0
jne .Lt_002D
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+8]
shr ebx, 2
mov eax, ebx
push eax
push dword ptr [ebp+8]
call LISTALLOCTB
add esp, 8
.Lt_002D:
.Lt_002C:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+16]
mov dword ptr [ebp-8], ebx
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [ebx+4]
mov dword ptr [eax+16], ecx
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ecx+28]
and eax, 4
test eax, eax
je .Lt_002F
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+24]
mov dword ptr [ebp-12], ecx
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ebp-8]
mov dword ptr [ecx+24], eax
cmp dword ptr [ebp-12], 0
je .Lt_0031
mov eax, dword ptr [ebp-12]
mov ecx, dword ptr [ebp-8]
mov dword ptr [eax+4], ecx
jmp .Lt_0030
.Lt_0031:
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ebp-8]
mov dword ptr [ecx+20], eax
.Lt_0030:
mov eax, dword ptr [ebp-8]
mov ecx, dword ptr [ebp-12]
mov dword ptr [eax], ecx
mov ecx, dword ptr [ebp-8]
mov dword ptr [ecx+4], 0
mov ecx, dword ptr [ebp-8]
add ecx, 8
mov dword ptr [ebp-4], ecx
jmp .Lt_002E
.Lt_002F:
mov ecx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ecx
.Lt_002E:
.Lt_002B:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size LISTNEWNODE, .-LISTNEWNODE
.balign 16

.globl LISTDELNODE
LISTDELNODE:
.type LISTDELNODE, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
.Lt_0032:
cmp dword ptr [ebp+12], 0
jne .Lt_0035
jmp .Lt_0033
.Lt_0035:
.Lt_0034:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+28]
and ebx, 4
test ebx, ebx
je .Lt_0037
mov ebx, dword ptr [ebp+12]
add ebx, -8
mov dword ptr [ebp-4], ebx
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebx]
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-12], ebx
cmp dword ptr [ebp-8], 0
je .Lt_0039
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebp-12]
mov dword ptr [ebx+4], eax
jmp .Lt_0038
.Lt_0039:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-12]
mov dword ptr [eax+20], ebx
.Lt_0038:
cmp dword ptr [ebp-12], 0
je .Lt_003B
mov ebx, dword ptr [ebp-12]
mov eax, dword ptr [ebp-8]
mov dword ptr [ebx], eax
jmp .Lt_003A
.Lt_003B:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-8]
mov dword ptr [eax+24], ebx
.Lt_003A:
jmp .Lt_0036
.Lt_0037:
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebp-4], ebx
.Lt_0036:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp-4]
mov ecx, dword ptr [ebx+16]
mov dword ptr [eax+4], ecx
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ebp-4]
mov dword ptr [ecx+16], eax
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+28]
and ecx, 1
test ecx, ecx
je .Lt_003D
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ecx+12]
add eax, -8
mov ecx, eax
push ecx
push 0
push dword ptr [ebp+12]
call memset
add esp, 12
.Lt_003D:
.Lt_003C:
.Lt_0033:
pop ebx
mov esp, ebp
pop ebp
ret
.size LISTDELNODE, .-LISTDELNODE
.balign 16

.globl LISTGETHEAD
LISTGETHEAD:
.type LISTGETHEAD, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_003E:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+20], 0
jne .Lt_0041
mov dword ptr [ebp-4], 0
jmp .Lt_0040
.Lt_0041:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+20]
add ebx, 8
mov dword ptr [ebp-4], ebx
.Lt_0040:
.Lt_003F:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size LISTGETHEAD, .-LISTGETHEAD
.balign 16

.globl LISTGETTAIL
LISTGETTAIL:
.type LISTGETTAIL, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_0042:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+24], 0
jne .Lt_0045
mov dword ptr [ebp-4], 0
jmp .Lt_0044
.Lt_0045:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+24]
add ebx, 8
mov dword ptr [ebp-4], ebx
.Lt_0044:
.Lt_0043:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size LISTGETTAIL, .-LISTGETTAIL
.balign 16

.globl LISTGETPREV
LISTGETPREV:
.type LISTGETPREV, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0046:
mov eax, dword ptr [ebp+8]
add eax, -8
mov ebx, dword ptr [eax]
mov dword ptr [ebp-8], ebx
cmp dword ptr [ebp-8], 0
jne .Lt_0049
mov dword ptr [ebp-4], 0
jmp .Lt_0048
.Lt_0049:
mov ebx, dword ptr [ebp-8]
add ebx, 8
mov dword ptr [ebp-4], ebx
.Lt_0048:
.Lt_0047:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size LISTGETPREV, .-LISTGETPREV
.balign 16

.globl LISTGETNEXT
LISTGETNEXT:
.type LISTGETNEXT, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_004A:
mov eax, dword ptr [ebp+8]
add eax, -8
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-8], ebx
cmp dword ptr [ebp-8], 0
jne .Lt_004D
mov dword ptr [ebp-4], 0
jmp .Lt_004C
.Lt_004D:
mov ebx, dword ptr [ebp-8]
add ebx, 8
mov dword ptr [ebp-4], ebx
.Lt_004C:
.Lt_004B:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size LISTGETNEXT, .-LISTGETNEXT
.balign 16

.globl STRLISTAPPEND
STRLISTAPPEND:
.type STRLISTAPPEND, @function
push ebp
mov ebp, esp
sub esp, 4
.Lt_004E:
push dword ptr [ebp+8]
call LISTNEWNODE
add esp, 4
mov dword ptr [ebp-4], eax
push 0
push -1
push dword ptr [ebp+12]
push -1
push dword ptr [ebp-4]
call fb_StrAssign
add esp, 20
.Lt_004F:
mov esp, ebp
pop ebp
ret
.size STRLISTAPPEND, .-STRLISTAPPEND
.balign 16

.globl STRLISTINIT
STRLISTINIT:
.type STRLISTINIT, @function
push ebp
mov ebp, esp
.Lt_0050:
push -1
push 12
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call LISTINIT
add esp, 16
.Lt_0051:
mov esp, ebp
pop ebp
ret
.size STRLISTINIT, .-STRLISTINIT
.balign 16
FATALOUTOFMEMORY:
.type FATALOUTOFMEMORY, @function
.Lt_0004:
.Lt_0006:
push 0
push 0
push offset Lt_0008
push 10
push 4
call fb_ErrorThrowEx
add esp, 20
jmp eax
.Lt_0007:
.Lt_0005:
ret
.size FATALOUTOFMEMORY, .-FATALOUTOFMEMORY
	#FreeBASIC-1.01.0-source/src/compiler/list.bas' compilation took 0.003242118749767542 secs

.section .rodata
.balign 4
Lt_0008:	.ascii	"FreeBASIC-1.01.0-source/src/compiler/list.bas\0"
