	.intel_syntax noprefix

	#FreeBASIC-1.01.0-source/src/compiler/dstr.bas' compilation started at 16:30:03 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl DZSTRZERO
DZSTRZERO:
.type DZSTRZERO, @function
push ebp
mov ebp, esp
.Lt_0056:
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 0
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+4], 0
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+8], 0
.Lt_0057:
mov esp, ebp
pop ebp
ret
.size DZSTRZERO, .-DZSTRZERO
.balign 16

.globl DZSTRALLOCATE
DZSTRALLOCATE:
.type DZSTRALLOCATE, @function
push ebp
mov ebp, esp
push ebx
.Lt_0058:
cmp dword ptr [ebp+12], 0
jne .Lt_005B
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 0
je .Lt_005D
mov eax, dword ptr [ebp+8]
push dword ptr [eax]
call free
add esp, 4
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 0
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+4], 0
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+8], 0
.Lt_005D:
.Lt_005C:
jmp .Lt_0059
.Lt_005B:
.Lt_005A:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+12]
cmp dword ptr [eax+4], ebx
je .Lt_005F
push 0
push 1
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HREALLOC
add esp, 16
.Lt_005F:
.Lt_005E:
.Lt_0059:
pop ebx
mov esp, ebp
pop ebp
ret
.size DZSTRALLOCATE, .-DZSTRALLOCATE
.balign 16

.globl DZSTRRESET
DZSTRRESET:
.type DZSTRRESET, @function
push ebp
mov ebp, esp
push ebx
.Lt_0060:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 0
je .Lt_0063
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov byte ptr [ebx], 0
.Lt_0063:
.Lt_0062:
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+4], 0
.Lt_0061:
pop ebx
mov esp, ebp
pop ebp
ret
.size DZSTRRESET, .-DZSTRRESET
.balign 16

.globl DZSTRASSIGN
DZSTRASSIGN:
.type DZSTRASSIGN, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_0064:
cmp dword ptr [ebp+12], 0
je .Lt_0066
push 0
push dword ptr [ebp+12]
call fb_StrLen
add esp, 8
mov dword ptr [ebp-8], eax
jmp .Lt_0070
.Lt_0066:
mov dword ptr [ebp-8], 0
.Lt_0070:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
jne .Lt_0069
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 0
je .Lt_006B
mov eax, dword ptr [ebp+8]
push dword ptr [eax]
call free
add esp, 4
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 0
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+4], 0
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+8], 0
.Lt_006B:
.Lt_006A:
jmp .Lt_0065
.Lt_0069:
.Lt_0068:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-4]
cmp dword ptr [eax+4], ebx
je .Lt_006D
push 0
push 1
push dword ptr [ebp-4]
push dword ptr [ebp+8]
call HREALLOC
add esp, 16
.Lt_006D:
.Lt_006C:
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx], 0
je .Lt_006F
push 0
push 0
push dword ptr [ebp+12]
push 0
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx]
call fb_StrAssign
add esp, 20
.Lt_006F:
.Lt_006E:
.Lt_0065:
pop ebx
mov esp, ebp
pop ebp
ret
.size DZSTRASSIGN, .-DZSTRASSIGN
.balign 16

.globl DZSTRASSIGNW
DZSTRASSIGNW:
.type DZSTRASSIGNW, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_0071:
cmp dword ptr [ebp+12], 0
je .Lt_0073
push dword ptr [ebp+12]
call fb_WstrLen
add esp, 4
mov dword ptr [ebp-8], eax
jmp .Lt_007D
.Lt_0073:
mov dword ptr [ebp-8], 0
.Lt_007D:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
jne .Lt_0076
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 0
je .Lt_0078
mov eax, dword ptr [ebp+8]
push dword ptr [eax]
call free
add esp, 4
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 0
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+4], 0
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+8], 0
.Lt_0078:
.Lt_0077:
jmp .Lt_0072
.Lt_0076:
.Lt_0075:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-4]
cmp dword ptr [eax+4], ebx
je .Lt_007A
push 0
push 1
push dword ptr [ebp-4]
push dword ptr [ebp+8]
call HREALLOC
add esp, 16
.Lt_007A:
.Lt_0079:
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx], 0
je .Lt_007C
push 0
push dword ptr [ebp+12]
push 0
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx]
call fb_WstrAssignToA
add esp, 16
.Lt_007C:
.Lt_007B:
.Lt_0072:
pop ebx
mov esp, ebp
pop ebp
ret
.size DZSTRASSIGNW, .-DZSTRASSIGNW
.balign 16

.globl DZSTRASSIGNC
DZSTRASSIGNC:
.type DZSTRASSIGNC, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_007E:
mov dword ptr [ebp-4], 1
cmp dword ptr [ebp-4], 0
jne .Lt_0081
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 0
je .Lt_0083
mov eax, dword ptr [ebp+8]
push dword ptr [eax]
call free
add esp, 4
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 0
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+4], 0
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+8], 0
.Lt_0083:
.Lt_0082:
jmp .Lt_007F
.Lt_0081:
.Lt_0080:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-4]
cmp dword ptr [eax+4], ebx
je .Lt_0085
push 0
push 1
push dword ptr [ebp-4]
push dword ptr [ebp+8]
call HREALLOC
add esp, 16
.Lt_0085:
.Lt_0084:
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx], 0
je .Lt_0087
mov bl, byte ptr [ebp+12]
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax]
mov byte ptr [ecx], bl
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebx]
mov byte ptr [ecx+1], 0
.Lt_0087:
.Lt_0086:
.Lt_007F:
pop ebx
mov esp, ebp
pop ebp
ret
.size DZSTRASSIGNC, .-DZSTRASSIGNC
.balign 16

.globl DZSTRCONCATASSIGN
DZSTRCONCATASSIGN:
.type DZSTRCONCATASSIGN, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
.Lt_0088:
cmp dword ptr [ebp+12], 0
je .Lt_008A
push 0
push dword ptr [ebp+12]
call fb_StrLen
add esp, 8
mov dword ptr [ebp-8], eax
jmp .Lt_0090
.Lt_008A:
mov dword ptr [ebp-8], 0
.Lt_0090:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-12], ebx
cmp dword ptr [ebp-4], 0
jne .Lt_008D
jmp .Lt_0089
.Lt_008D:
.Lt_008C:
push -1
push 1
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp-4]
add eax, dword ptr [ebx+4]
push eax
push dword ptr [ebp+8]
call HREALLOC
add esp, 16
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 0
je .Lt_008F
push 0
push 0
push dword ptr [ebp+12]
push 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
add ebx, dword ptr [ebp-12]
push ebx
call fb_StrAssign
add esp, 20
.Lt_008F:
.Lt_008E:
.Lt_0089:
pop ebx
mov esp, ebp
pop ebp
ret
.size DZSTRCONCATASSIGN, .-DZSTRCONCATASSIGN
.balign 16

.globl DZSTRCONCATASSIGNW
DZSTRCONCATASSIGNW:
.type DZSTRCONCATASSIGNW, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
.Lt_0091:
cmp dword ptr [ebp+12], 0
je .Lt_0093
push dword ptr [ebp+12]
call fb_WstrLen
add esp, 4
mov dword ptr [ebp-8], eax
jmp .Lt_0099
.Lt_0093:
mov dword ptr [ebp-8], 0
.Lt_0099:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-12], ebx
cmp dword ptr [ebp-4], 0
jne .Lt_0096
jmp .Lt_0092
.Lt_0096:
.Lt_0095:
push -1
push 1
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp-4]
add eax, dword ptr [ebx+4]
push eax
push dword ptr [ebp+8]
call HREALLOC
add esp, 16
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 0
je .Lt_0098
push 0
push dword ptr [ebp+12]
push 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
add ebx, dword ptr [ebp-12]
push ebx
call fb_WstrAssignToA
add esp, 16
.Lt_0098:
.Lt_0097:
.Lt_0092:
pop ebx
mov esp, ebp
pop ebp
ret
.size DZSTRCONCATASSIGNW, .-DZSTRCONCATASSIGNW
.balign 16

.globl DZSTRCONCATASSIGNC
DZSTRCONCATASSIGNC:
.type DZSTRCONCATASSIGNC, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_009A:
mov dword ptr [ebp-4], 1
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-8], ebx
cmp dword ptr [ebp-4], 0
jne .Lt_009D
jmp .Lt_009B
.Lt_009D:
.Lt_009C:
push -1
push 1
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp-4]
add eax, dword ptr [ebx+4]
push eax
push dword ptr [ebp+8]
call HREALLOC
add esp, 16
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 0
je .Lt_009F
mov al, byte ptr [ebp+12]
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebx]
add ecx, dword ptr [ebp-8]
mov byte ptr [ecx], al
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax]
add ecx, dword ptr [ebp-8]
mov byte ptr [ecx+1], 0
.Lt_009F:
.Lt_009E:
.Lt_009B:
pop ebx
mov esp, ebp
pop ebp
ret
.size DZSTRCONCATASSIGNC, .-DZSTRCONCATASSIGNC
.balign 16

.globl DWSTRZERO
DWSTRZERO:
.type DWSTRZERO, @function
push ebp
mov ebp, esp
.Lt_00A0:
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 0
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+4], 0
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+8], 0
.Lt_00A1:
mov esp, ebp
pop ebp
ret
.size DWSTRZERO, .-DWSTRZERO
.balign 16

.globl DWSTRALLOCATE
DWSTRALLOCATE:
.type DWSTRALLOCATE, @function
push ebp
mov ebp, esp
push ebx
.Lt_00A2:
cmp dword ptr [ebp+12], 0
jne .Lt_00A5
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 0
je .Lt_00A7
mov eax, dword ptr [ebp+8]
push dword ptr [eax]
call free
add esp, 4
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 0
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+4], 0
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+8], 0
.Lt_00A7:
.Lt_00A6:
jmp .Lt_00A3
.Lt_00A5:
.Lt_00A4:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+12]
cmp dword ptr [eax+4], ebx
je .Lt_00A9
push 0
push 4
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HREALLOC
add esp, 16
.Lt_00A9:
.Lt_00A8:
.Lt_00A3:
pop ebx
mov esp, ebp
pop ebp
ret
.size DWSTRALLOCATE, .-DWSTRALLOCATE
.balign 16

.globl DWSTRRESET
DWSTRRESET:
.type DWSTRRESET, @function
push ebp
mov ebp, esp
push ebx
.Lt_00AA:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 0
je .Lt_00AD
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov dword ptr [ebx], 0
.Lt_00AD:
.Lt_00AC:
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+4], 0
.Lt_00AB:
pop ebx
mov esp, ebp
pop ebp
ret
.size DWSTRRESET, .-DWSTRRESET
.balign 16

.globl DWSTRASSIGN
DWSTRASSIGN:
.type DWSTRASSIGN, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_00AE:
cmp dword ptr [ebp+12], 0
je .Lt_00B0
push dword ptr [ebp+12]
call fb_WstrLen
add esp, 4
mov dword ptr [ebp-8], eax
jmp .Lt_00BA
.Lt_00B0:
mov dword ptr [ebp-8], 0
.Lt_00BA:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
jne .Lt_00B3
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 0
je .Lt_00B5
mov eax, dword ptr [ebp+8]
push dword ptr [eax]
call free
add esp, 4
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 0
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+4], 0
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+8], 0
.Lt_00B5:
.Lt_00B4:
jmp .Lt_00AF
.Lt_00B3:
.Lt_00B2:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-4]
cmp dword ptr [eax+4], ebx
je .Lt_00B7
push 0
push 4
push dword ptr [ebp-4]
push dword ptr [ebp+8]
call HREALLOC
add esp, 16
.Lt_00B7:
.Lt_00B6:
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx], 0
je .Lt_00B9
push dword ptr [ebp+12]
push 0
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx]
call fb_WstrAssign
add esp, 12
.Lt_00B9:
.Lt_00B8:
.Lt_00AF:
pop ebx
mov esp, ebp
pop ebp
ret
.size DWSTRASSIGN, .-DWSTRASSIGN
.balign 16

.globl DWSTRASSIGNA
DWSTRASSIGNA:
.type DWSTRASSIGNA, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_00BB:
cmp dword ptr [ebp+12], 0
je .Lt_00BD
push 0
push dword ptr [ebp+12]
call fb_StrLen
add esp, 8
mov dword ptr [ebp-8], eax
jmp .Lt_00C7
.Lt_00BD:
mov dword ptr [ebp-8], 0
.Lt_00C7:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
jne .Lt_00C0
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 0
je .Lt_00C2
mov eax, dword ptr [ebp+8]
push dword ptr [eax]
call free
add esp, 4
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 0
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+4], 0
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+8], 0
.Lt_00C2:
.Lt_00C1:
jmp .Lt_00BC
.Lt_00C0:
.Lt_00BF:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-4]
cmp dword ptr [eax+4], ebx
je .Lt_00C4
push 0
push 4
push dword ptr [ebp-4]
push dword ptr [ebp+8]
call HREALLOC
add esp, 16
.Lt_00C4:
.Lt_00C3:
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx], 0
je .Lt_00C6
push 0
push dword ptr [ebp+12]
push 0
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx]
call fb_WstrAssignFromA
add esp, 16
.Lt_00C6:
.Lt_00C5:
.Lt_00BC:
pop ebx
mov esp, ebp
pop ebp
ret
.size DWSTRASSIGNA, .-DWSTRASSIGNA
.balign 16

.globl DWSTRASSIGNC
DWSTRASSIGNC:
.type DWSTRASSIGNC, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_00C8:
mov dword ptr [ebp-4], 4
cmp dword ptr [ebp-4], 0
jne .Lt_00CB
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 0
je .Lt_00CD
mov eax, dword ptr [ebp+8]
push dword ptr [eax]
call free
add esp, 4
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 0
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+4], 0
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+8], 0
.Lt_00CD:
.Lt_00CC:
jmp .Lt_00C9
.Lt_00CB:
.Lt_00CA:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-4]
cmp dword ptr [eax+4], ebx
je .Lt_00CF
push 0
push 4
push dword ptr [ebp-4]
push dword ptr [ebp+8]
call HREALLOC
add esp, 16
.Lt_00CF:
.Lt_00CE:
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx], 0
je .Lt_00D1
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx]
mov ebx, dword ptr [ebp+12]
mov dword ptr [eax], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx]
mov dword ptr [eax+4], 0
.Lt_00D1:
.Lt_00D0:
.Lt_00C9:
pop ebx
mov esp, ebp
pop ebp
ret
.size DWSTRASSIGNC, .-DWSTRASSIGNC
.balign 16

.globl DWSTRCONCATASSIGN
DWSTRCONCATASSIGN:
.type DWSTRCONCATASSIGN, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
.Lt_00D2:
cmp dword ptr [ebp+12], 0
je .Lt_00D4
push dword ptr [ebp+12]
call fb_WstrLen
add esp, 4
mov dword ptr [ebp-8], eax
jmp .Lt_00DA
.Lt_00D4:
mov dword ptr [ebp-8], 0
.Lt_00DA:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-12], ebx
cmp dword ptr [ebp-4], 0
jne .Lt_00D7
jmp .Lt_00D3
.Lt_00D7:
.Lt_00D6:
push -1
push 4
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp-4]
add eax, dword ptr [ebx+4]
push eax
push dword ptr [ebp+8]
call HREALLOC
add esp, 16
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 0
je .Lt_00D9
push dword ptr [ebp+12]
push 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-12]
sal ebx, 2
mov ecx, dword ptr [eax]
add ecx, ebx
push ecx
call fb_WstrAssign
add esp, 12
.Lt_00D9:
.Lt_00D8:
.Lt_00D3:
pop ebx
mov esp, ebp
pop ebp
ret
.size DWSTRCONCATASSIGN, .-DWSTRCONCATASSIGN
.balign 16

.globl DWSTRCONCATASSIGNA
DWSTRCONCATASSIGNA:
.type DWSTRCONCATASSIGNA, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
.Lt_00DB:
cmp dword ptr [ebp+12], 0
je .Lt_00DD
push 0
push dword ptr [ebp+12]
call fb_StrLen
add esp, 8
mov dword ptr [ebp-8], eax
jmp .Lt_00E3
.Lt_00DD:
mov dword ptr [ebp-8], 0
.Lt_00E3:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-12], ebx
cmp dword ptr [ebp-4], 0
jne .Lt_00E0
jmp .Lt_00DC
.Lt_00E0:
.Lt_00DF:
push -1
push 4
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp-4]
add eax, dword ptr [ebx+4]
push eax
push dword ptr [ebp+8]
call HREALLOC
add esp, 16
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 0
je .Lt_00E2
push 0
push dword ptr [ebp+12]
push 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-12]
sal ebx, 2
mov ecx, dword ptr [eax]
add ecx, ebx
push ecx
call fb_WstrAssignFromA
add esp, 16
.Lt_00E2:
.Lt_00E1:
.Lt_00DC:
pop ebx
mov esp, ebp
pop ebp
ret
.size DWSTRCONCATASSIGNA, .-DWSTRCONCATASSIGNA
.balign 16

.globl DWSTRCONCATASSIGNC
DWSTRCONCATASSIGNC:
.type DWSTRCONCATASSIGNC, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_00E4:
mov dword ptr [ebp-4], 4
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-8], ebx
cmp dword ptr [ebp-4], 0
jne .Lt_00E7
jmp .Lt_00E5
.Lt_00E7:
.Lt_00E6:
push -1
push 4
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp-4]
add eax, dword ptr [ebx+4]
push eax
push dword ptr [ebp+8]
call HREALLOC
add esp, 16
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 0
je .Lt_00E9
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-8]
sal ebx, 2
mov ecx, dword ptr [eax]
add ecx, ebx
mov ebx, dword ptr [ebp+12]
mov dword ptr [ecx], ebx
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebp-8]
sal ecx, 2
mov eax, dword ptr [ebx]
add eax, ecx
mov dword ptr [eax+4], 0
.Lt_00E9:
.Lt_00E8:
.Lt_00E5:
pop ebx
mov esp, ebp
pop ebp
ret
.size DWSTRCONCATASSIGNC, .-DWSTRCONCATASSIGNC
.balign 16
fb_ctor__dstr:
.type fb_ctor__dstr, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__dstr, .-fb_ctor__dstr
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
HREALLOC:
.type HREALLOC, @function
push ebp
mov ebp, esp
push ebx
push esi
.Lt_00EA:
mov eax, dword ptr [ebp+12]
add eax, 15
and eax, -16
mov dword ptr [Lt_00F6], eax
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 0
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [ebp+12]
cmp ecx, dword ptr [eax+8]
setg cl
shr ecx, 1
sbb ecx, ecx
or ebx, ecx
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ebp+8]
mov esi, dword ptr [eax+8]
sar esi, 3
mov eax, dword ptr [ecx+8]
sub eax, esi
mov esi, dword ptr [Lt_00F6]
cmp esi, eax
setl dl
mov esi, edx
shr esi, 1
sbb esi, esi
or ebx, esi
je .Lt_00ED
cmp dword ptr [ebp+20], 0
jne .Lt_00EF
mov esi, dword ptr [ebp+8]
cmp dword ptr [esi], 0
je .Lt_00F1
mov esi, dword ptr [ebp+8]
push dword ptr [esi]
call free
add esp, 4
.Lt_00F1:
.Lt_00F0:
mov esi, dword ptr [Lt_00F6]
inc esi
imul esi, dword ptr [ebp+16]
mov ebx, esi
push ebx
call malloc
add esp, 4
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx], eax
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 0
jne .Lt_00F3
mov eax, dword ptr [ebp+12]
inc eax
imul eax, dword ptr [ebp+16]
mov ebx, eax
push ebx
call XALLOCATE
add esp, 4
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx], eax
mov eax, dword ptr [ebp+12]
mov dword ptr [Lt_00F6], eax
.Lt_00F3:
.Lt_00F2:
jmp .Lt_00EE
.Lt_00EF:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov dword ptr [Lt_00FA], ebx
mov ebx, dword ptr [Lt_00F6]
inc ebx
imul ebx, dword ptr [ebp+16]
mov eax, ebx
push eax
push dword ptr [Lt_00FA]
call realloc
add esp, 8
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx], eax
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 0
jne .Lt_00F5
mov eax, dword ptr [ebp+12]
inc eax
imul eax, dword ptr [ebp+16]
mov ebx, eax
push ebx
push dword ptr [Lt_00FA]
call XREALLOCATE
add esp, 8
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx], eax
mov eax, dword ptr [ebp+12]
mov dword ptr [Lt_00F6], eax
.Lt_00F5:
.Lt_00F4:
.Lt_00EE:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [Lt_00F6]
mov dword ptr [eax+8], ebx
.Lt_00ED:
.Lt_00EC:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp+12]
mov dword ptr [ebx+4], eax
.Lt_00EB:
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size HREALLOC, .-HREALLOC

.section .bss
.balign 4
	.lcomm	Lt_00F6,4
.balign 4
	.lcomm	Lt_00FA,4
	#FreeBASIC-1.01.0-source/src/compiler/dstr.bas' compilation took 0.02671094203833491 secs
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
.int fb_ctor__dstr
