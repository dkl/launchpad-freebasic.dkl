	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/hlp-str.bas' compilation started at 14:16:35 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl ZSTRASSIGN
ZSTRASSIGN:
.type ZSTRASSIGN, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_0056:
mov dword ptr [ebp-4], 0
mov dword ptr [ebp-8], 0
cmp dword ptr [ebp+12], 0
jne .Lt_0059
mov dword ptr [ebp-8], 0
jmp .Lt_0058
.Lt_0059:
push 0
push dword ptr [ebp+12]
call fb_StrLen
add esp, 8
mov dword ptr [ebp-8], eax
.Lt_0058:
cmp dword ptr [ebp-8], 0
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
jmp .Lt_0057
.Lt_005D:
.Lt_005C:
.Lt_005B:
.Lt_005A:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 0
jne .Lt_005F
mov dword ptr [ebp-4], 0
jmp .Lt_005E
.Lt_005F:
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax]
call fb_StrLen
add esp, 8
mov dword ptr [ebp-4], eax
.Lt_005E:
mov eax, dword ptr [ebp-8]
cmp dword ptr [ebp-4], eax
je .Lt_0061
mov eax, dword ptr [ebp-8]
inc eax
mov ebx, eax
push ebx
call XALLOCATE
add esp, 4
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx], eax
.Lt_0061:
.Lt_0060:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 0
je .Lt_0063
push 0
push 0
push dword ptr [ebp+12]
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax]
call fb_StrAssign
add esp, 20
.Lt_0063:
.Lt_0062:
.Lt_0057:
pop ebx
mov esp, ebp
pop ebp
ret
.size ZSTRASSIGN, .-ZSTRASSIGN
.balign 16

.globl ZSTRASSIGNW
ZSTRASSIGNW:
.type ZSTRASSIGNW, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_0064:
mov dword ptr [ebp-4], 0
mov dword ptr [ebp-8], 0
cmp dword ptr [ebp+12], 0
jne .Lt_0067
mov dword ptr [ebp-8], 0
jmp .Lt_0066
.Lt_0067:
push dword ptr [ebp+12]
call fb_WstrLen
add esp, 4
mov dword ptr [ebp-8], eax
.Lt_0066:
cmp dword ptr [ebp-8], 0
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
jmp .Lt_0065
.Lt_006B:
.Lt_006A:
.Lt_0069:
.Lt_0068:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 0
jne .Lt_006D
mov dword ptr [ebp-4], 0
jmp .Lt_006C
.Lt_006D:
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax]
call fb_StrLen
add esp, 8
mov dword ptr [ebp-4], eax
.Lt_006C:
mov eax, dword ptr [ebp-8]
cmp dword ptr [ebp-4], eax
je .Lt_006F
mov eax, dword ptr [ebp-8]
inc eax
mov ebx, eax
push ebx
call XALLOCATE
add esp, 4
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx], eax
.Lt_006F:
.Lt_006E:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 0
je .Lt_0071
push 0
push dword ptr [ebp+12]
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax]
call fb_WstrAssignToA
add esp, 16
.Lt_0071:
.Lt_0070:
.Lt_0065:
pop ebx
mov esp, ebp
pop ebp
ret
.size ZSTRASSIGNW, .-ZSTRASSIGNW
.balign 16

.globl ZSTRCONCATASSIGN
ZSTRCONCATASSIGN:
.type ZSTRCONCATASSIGN, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_0072:
mov dword ptr [ebp-4], 0
mov dword ptr [ebp-8], 0
cmp dword ptr [ebp+12], 0
jne .Lt_0075
jmp .Lt_0073
.Lt_0075:
.Lt_0074:
push 0
push dword ptr [ebp+12]
call fb_StrLen
add esp, 8
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0077
jmp .Lt_0073
.Lt_0077:
.Lt_0076:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 0
jne .Lt_0079
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp-8]
inc eax
mov ebx, eax
push ebx
call XALLOCATE
add esp, 4
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx], eax
jmp .Lt_0078
.Lt_0079:
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax]
call fb_StrLen
add esp, 8
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp-8]
add eax, dword ptr [ebp-4]
inc eax
mov ebx, eax
push ebx
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx]
call XREALLOCATE
add esp, 8
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx], eax
.Lt_0078:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 0
je .Lt_007B
push 0
push 0
push dword ptr [ebp+12]
push 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
add ebx, dword ptr [ebp-4]
push ebx
call fb_StrAssign
add esp, 20
.Lt_007B:
.Lt_007A:
.Lt_0073:
pop ebx
mov esp, ebp
pop ebp
ret
.size ZSTRCONCATASSIGN, .-ZSTRCONCATASSIGN
.balign 16

.globl ZSTRCONCATASSIGNW
ZSTRCONCATASSIGNW:
.type ZSTRCONCATASSIGNW, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_007C:
mov dword ptr [ebp-4], 0
mov dword ptr [ebp-8], 0
cmp dword ptr [ebp+12], 0
jne .Lt_007F
jmp .Lt_007D
.Lt_007F:
.Lt_007E:
push dword ptr [ebp+12]
call fb_WstrLen
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0081
jmp .Lt_007D
.Lt_0081:
.Lt_0080:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 0
jne .Lt_0083
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp-8]
inc eax
mov ebx, eax
push ebx
call XALLOCATE
add esp, 4
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx], eax
jmp .Lt_0082
.Lt_0083:
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax]
call fb_StrLen
add esp, 8
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp-8]
add eax, dword ptr [ebp-4]
inc eax
mov ebx, eax
push ebx
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx]
call XREALLOCATE
add esp, 8
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx], eax
.Lt_0082:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 0
je .Lt_0085
push 0
push dword ptr [ebp+12]
push 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
add ebx, dword ptr [ebp-4]
push ebx
call fb_WstrAssignToA
add esp, 16
.Lt_0085:
.Lt_0084:
.Lt_007D:
pop ebx
mov esp, ebp
pop ebp
ret
.size ZSTRCONCATASSIGNW, .-ZSTRCONCATASSIGNW
.balign 16

.globl WSTRASSIGN
WSTRASSIGN:
.type WSTRASSIGN, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_0086:
mov dword ptr [ebp-4], 0
mov dword ptr [ebp-8], 0
cmp dword ptr [ebp+12], 0
jne .Lt_0089
mov dword ptr [ebp-8], 0
jmp .Lt_0088
.Lt_0089:
push dword ptr [ebp+12]
call fb_WstrLen
add esp, 4
mov dword ptr [ebp-8], eax
.Lt_0088:
cmp dword ptr [ebp-8], 0
jne .Lt_008B
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 0
je .Lt_008D
mov eax, dword ptr [ebp+8]
push dword ptr [eax]
call free
add esp, 4
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 0
jmp .Lt_0087
.Lt_008D:
.Lt_008C:
.Lt_008B:
.Lt_008A:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 0
jne .Lt_008F
mov dword ptr [ebp-4], 0
jmp .Lt_008E
.Lt_008F:
mov eax, dword ptr [ebp+8]
push dword ptr [eax]
call fb_WstrLen
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_008E:
mov eax, dword ptr [ebp-8]
cmp dword ptr [ebp-4], eax
je .Lt_0091
mov eax, dword ptr [ebp-8]
sal eax, 2
add eax, 4
mov ebx, eax
push ebx
call XALLOCATE
add esp, 4
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx], eax
.Lt_0091:
.Lt_0090:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 0
je .Lt_0093
push dword ptr [ebp+12]
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax]
call fb_WstrAssign
add esp, 12
.Lt_0093:
.Lt_0092:
.Lt_0087:
pop ebx
mov esp, ebp
pop ebp
ret
.size WSTRASSIGN, .-WSTRASSIGN
.balign 16

.globl WSTRASSIGNA
WSTRASSIGNA:
.type WSTRASSIGNA, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_0094:
mov dword ptr [ebp-4], 0
mov dword ptr [ebp-8], 0
cmp dword ptr [ebp+12], 0
jne .Lt_0097
mov dword ptr [ebp-8], 0
jmp .Lt_0096
.Lt_0097:
push 0
push dword ptr [ebp+12]
call fb_StrLen
add esp, 8
mov dword ptr [ebp-8], eax
.Lt_0096:
cmp dword ptr [ebp-8], 0
jne .Lt_0099
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 0
je .Lt_009B
mov eax, dword ptr [ebp+8]
push dword ptr [eax]
call free
add esp, 4
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 0
jmp .Lt_0095
.Lt_009B:
.Lt_009A:
.Lt_0099:
.Lt_0098:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 0
jne .Lt_009D
mov dword ptr [ebp-4], 0
jmp .Lt_009C
.Lt_009D:
mov eax, dword ptr [ebp+8]
push dword ptr [eax]
call fb_WstrLen
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_009C:
mov eax, dword ptr [ebp-8]
cmp dword ptr [ebp-4], eax
je .Lt_009F
mov eax, dword ptr [ebp-8]
sal eax, 2
add eax, 4
mov ebx, eax
push ebx
call XALLOCATE
add esp, 4
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx], eax
.Lt_009F:
.Lt_009E:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 0
je .Lt_00A1
push 0
push dword ptr [ebp+12]
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax]
call fb_WstrAssignFromA
add esp, 16
.Lt_00A1:
.Lt_00A0:
.Lt_0095:
pop ebx
mov esp, ebp
pop ebp
ret
.size WSTRASSIGNA, .-WSTRASSIGNA
.balign 16

.globl WSTRCONCATASSIGN
WSTRCONCATASSIGN:
.type WSTRCONCATASSIGN, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_00A2:
mov dword ptr [ebp-4], 0
mov dword ptr [ebp-8], 0
cmp dword ptr [ebp+12], 0
jne .Lt_00A5
jmp .Lt_00A3
.Lt_00A5:
.Lt_00A4:
push dword ptr [ebp+12]
call fb_WstrLen
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_00A7
jmp .Lt_00A3
.Lt_00A7:
.Lt_00A6:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 0
jne .Lt_00A9
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp-8]
sal eax, 2
add eax, 4
mov ebx, eax
push ebx
call XALLOCATE
add esp, 4
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx], eax
jmp .Lt_00A8
.Lt_00A9:
mov eax, dword ptr [ebp+8]
push dword ptr [eax]
call fb_WstrLen
add esp, 4
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp-8]
add eax, dword ptr [ebp-4]
sal eax, 2
add eax, 4
mov ebx, eax
push ebx
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx]
call XREALLOCATE
add esp, 8
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx], eax
.Lt_00A8:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 0
je .Lt_00AB
push dword ptr [ebp+12]
push 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-4]
sal ebx, 2
mov ecx, dword ptr [eax]
add ecx, ebx
push ecx
call fb_WstrAssign
add esp, 12
.Lt_00AB:
.Lt_00AA:
.Lt_00A3:
pop ebx
mov esp, ebp
pop ebp
ret
.size WSTRCONCATASSIGN, .-WSTRCONCATASSIGN
.balign 16

.globl WSTRCONCATASSIGNW
WSTRCONCATASSIGNW:
.type WSTRCONCATASSIGNW, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_00AC:
mov dword ptr [ebp-4], 0
mov dword ptr [ebp-8], 0
cmp dword ptr [ebp+12], 0
jne .Lt_00AF
jmp .Lt_00AD
.Lt_00AF:
.Lt_00AE:
push 0
push dword ptr [ebp+12]
call fb_StrLen
add esp, 8
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_00B1
jmp .Lt_00AD
.Lt_00B1:
.Lt_00B0:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 0
jne .Lt_00B3
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp-8]
sal eax, 2
add eax, 4
mov ebx, eax
push ebx
call XALLOCATE
add esp, 4
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx], eax
jmp .Lt_00B2
.Lt_00B3:
mov eax, dword ptr [ebp+8]
push dword ptr [eax]
call fb_WstrLen
add esp, 4
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp-8]
add eax, dword ptr [ebp-4]
sal eax, 2
add eax, 4
mov ebx, eax
push ebx
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx]
call XREALLOCATE
add esp, 8
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx], eax
.Lt_00B2:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 0
je .Lt_00B5
push 0
push dword ptr [ebp+12]
push 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-4]
sal ebx, 2
mov ecx, dword ptr [eax]
add ecx, ebx
push ecx
call fb_WstrAssignFromA
add esp, 16
.Lt_00B5:
.Lt_00B4:
.Lt_00AD:
pop ebx
mov esp, ebp
pop ebp
ret
.size WSTRCONCATASSIGNW, .-WSTRCONCATASSIGNW
.balign 16

.globl ZSTRDUP
ZSTRDUP:
.type ZSTRDUP, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_00B6:
mov dword ptr [ebp-8], 0
push 0
push dword ptr [ebp+8]
call fb_StrLen
add esp, 8
inc eax
mov ebx, eax
push ebx
call XALLOCATE
add esp, 4
mov dword ptr [ebp-8], eax
push 0
push 0
push dword ptr [ebp+8]
push 0
push dword ptr [ebp-8]
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_00B7:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ZSTRDUP, .-ZSTRDUP
.balign 16

.globl WSTRDUP
WSTRDUP:
.type WSTRDUP, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_00B8:
mov dword ptr [ebp-8], 0
push dword ptr [ebp+8]
call fb_WstrLen
add esp, 4
sal eax, 2
add eax, 4
mov ebx, eax
push ebx
call XALLOCATE
add esp, 4
mov dword ptr [ebp-8], eax
push dword ptr [ebp+8]
push 0
push dword ptr [ebp-8]
call fb_WstrAssign
add esp, 12
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_00B9:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size WSTRDUP, .-WSTRDUP
.balign 16

.globl HREPLACE
HREPLACE:
.type HREPLACE, @function
push ebp
mov ebp, esp
sub esp, 24
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_00BA:
push 0
push dword ptr [ebp+12]
call fb_StrLen
add esp, 8
mov dword ptr [Lt_00C2], eax
push 0
push dword ptr [ebp+16]
call fb_StrLen
add esp, 8
mov dword ptr [Lt_00C3], eax
push 0
push 0
push dword ptr [ebp+8]
push -1
push offset Lt_00C4
call fb_StrAssign
add esp, 20
mov dword ptr [Lt_00C5], 0
.Lt_00BC:
push dword ptr [ebp+12]
call fb_StrAllocTempDescZ
add esp, 4
push eax
push offset Lt_00C4
mov eax, dword ptr [Lt_00C5]
inc eax
push eax
call fb_StrInstr
add esp, 12
mov dword ptr [Lt_00C5], eax
cmp dword ptr [Lt_00C5], 0
jne .Lt_00C0
jmp .Lt_00BD
.Lt_00C0:
.Lt_00BF:
push 0
push -1
push -1
mov eax, dword ptr [Lt_00C2]
add eax, dword ptr [Lt_00C5]
push eax
push offset Lt_00C4
call fb_StrMid
add esp, 12
push eax
push -1
push offset Lt_00C6
call fb_StrAssign
add esp, 20
push 0
push -1
mov eax, dword ptr [Lt_00C5]
dec eax
push eax
push offset Lt_00C4
call fb_LEFT
add esp, 8
push eax
push -1
push offset Lt_00C4
call fb_StrAssign
add esp, 20
push 0
push -1
push 0
push dword ptr [ebp+16]
push -1
push offset Lt_00C4
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ebp-24]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_00C4
call fb_StrAssign
add esp, 20
push 0
push -1
push offset Lt_00C6
push -1
push offset Lt_00C4
call fb_StrConcatAssign
add esp, 20
mov eax, dword ptr [Lt_00C3]
add eax, dword ptr [Lt_00C5]
dec eax
mov dword ptr [Lt_00C5], eax
.Lt_00BE:
jmp .Lt_00BC
.Lt_00BD:
push 0
push -1
push offset Lt_00C4
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
.Lt_00BB:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
mov esp, ebp
pop ebp
ret
.size HREPLACE, .-HREPLACE

.section .bss
.balign 4
	.lcomm	Lt_00C2,4
.balign 4
	.lcomm	Lt_00C3,4
.balign 4
	.lcomm	Lt_00C5,4
.balign 4
	.lcomm	Lt_00C4,12
.balign 4
	.lcomm	Lt_00C6,12

.section .text
.balign 16

.globl HREPLACEW
HREPLACEW:
.type HREPLACEW, @function
push ebp
mov ebp, esp
sub esp, 12
mov dword ptr [ebp-4], 0
.Lt_00C7:
push dword ptr [ebp+12]
call fb_WstrLen
add esp, 4
mov dword ptr [Lt_00D0], eax
push dword ptr [ebp+16]
call fb_WstrLen
add esp, 4
mov dword ptr [Lt_00D1], eax
push dword ptr [ebp+8]
push offset Lt_00D2
call DWSTRASSIGN
add esp, 8
mov dword ptr [Lt_00D3], 0
.Lt_00C9:
push dword ptr [ebp+12]
push dword ptr [Lt_00D2]
mov eax, dword ptr [Lt_00D3]
inc eax
push eax
call fb_WstrInstr
add esp, 12
mov dword ptr [Lt_00D3], eax
cmp dword ptr [Lt_00D3], 0
jne .Lt_00CD
jmp .Lt_00CA
.Lt_00CD:
.Lt_00CC:
push -1
mov eax, dword ptr [Lt_00D0]
add eax, dword ptr [Lt_00D3]
push eax
push dword ptr [Lt_00D2]
call fb_WstrMid
add esp, 12
mov dword ptr [ebp-8], eax
push dword ptr [ebp-8]
push offset Lt_00D4
call DWSTRASSIGN
add esp, 8
push dword ptr [ebp-8]
call fb_WstrDelete
add esp, 4
mov eax, dword ptr [Lt_00D3]
dec eax
push eax
push dword ptr [Lt_00D2]
call fb_WstrLeft
add esp, 8
mov dword ptr [ebp-12], eax
push dword ptr [ebp-12]
push offset Lt_00D2
call DWSTRASSIGN
add esp, 8
push dword ptr [ebp-12]
call fb_WstrDelete
add esp, 4
push dword ptr [ebp+16]
push offset Lt_00D2
call DWSTRCONCATASSIGN
add esp, 8
push dword ptr [Lt_00D4]
push offset Lt_00D2
call DWSTRCONCATASSIGN
add esp, 8
mov eax, dword ptr [Lt_00D1]
add eax, dword ptr [Lt_00D3]
dec eax
mov dword ptr [Lt_00D3], eax
.Lt_00CB:
jmp .Lt_00C9
.Lt_00CA:
mov eax, dword ptr [Lt_00D2]
mov dword ptr [ebp-4], eax
.Lt_00C8:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size HREPLACEW, .-HREPLACEW

.section .bss
.balign 4
	.lcomm	Lt_00D0,4
.balign 4
	.lcomm	Lt_00D1,4
.balign 4
	.lcomm	Lt_00D3,4
.balign 4
	.lcomm	Lt_00D2,12
.balign 4
	.lcomm	Lt_00D4,12

.section .text
.balign 16

.globl HREPLACECHAR
HREPLACECHAR:
.type HREPLACECHAR, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_00D5:
mov dword ptr [ebp-8], 0
push 0
push dword ptr [ebp+8]
call fb_StrLen
add esp, 8
dec eax
mov dword ptr [ebp-12], eax
jmp .Lt_00D8
.Lt_00DB:
mov eax, dword ptr [ebp+8]
add eax, dword ptr [ebp-8]
movzx ebx, byte ptr [eax]
mov eax, dword ptr [ebp+12]
cmp ebx, eax
jne .Lt_00DD
mov al, byte ptr [ebp+16]
mov ebx, dword ptr [ebp+8]
add ebx, dword ptr [ebp-8]
mov byte ptr [ebx], al
.Lt_00DD:
.Lt_00DC:
.Lt_00D9:
inc dword ptr [ebp-8]
.Lt_00D8:
mov eax, dword ptr [ebp-12]
cmp dword ptr [ebp-8], eax
jle .Lt_00DB
.Lt_00DA:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
.Lt_00D6:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HREPLACECHAR, .-HREPLACECHAR
.balign 16

.globl HREESCAPE
HREESCAPE:
.type HREESCAPE, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_00DE:
mov eax, dword ptr [ebp+16]
mov dword ptr [eax], 0
mov eax, dword ptr [ebp+12]
mov dword ptr [eax], 0
push 0
push dword ptr [ebp+8]
call fb_StrLen
add esp, 8
mov dword ptr [Lt_013B], eax
cmp dword ptr [Lt_013B], 0
jne .Lt_00E1
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
jmp .Lt_00DF
.Lt_00E1:
.Lt_00E0:
mov eax, dword ptr [Lt_013B]
sal eax, 1
push eax
push offset Lt_013C
call DZSTRALLOCATE
add esp, 8
mov eax, dword ptr [ebp+8]
mov dword ptr [Lt_013D], eax
mov eax, dword ptr [Lt_013C]
mov dword ptr [Lt_013E], eax
mov eax, dword ptr [Lt_013D]
add eax, dword ptr [Lt_013B]
mov dword ptr [Lt_013F], eax
.Lt_00E2:
mov eax, dword ptr [Lt_013F]
cmp dword ptr [Lt_013D], eax
jae .Lt_00E3
mov eax, dword ptr [Lt_013D]
movzx ebx, byte ptr [eax]
mov dword ptr [Lt_0140], ebx
inc dword ptr [Lt_013D]
cmp dword ptr [Lt_0140], 92
jne .Lt_00E5
mov ebx, dword ptr [Lt_013F]
cmp dword ptr [Lt_013D], ebx
jb .Lt_00E7
jmp .Lt_00E3
.Lt_00E7:
mov ebx, dword ptr [Lt_013E]
mov byte ptr [ebx], 27
inc dword ptr [Lt_013E]
mov dword ptr [Lt_0141], 0
mov ebx, dword ptr [Lt_013D]
movzx eax, byte ptr [ebx]
mov dword ptr [Lt_0140], eax
inc dword ptr [Lt_013D]
cmp dword ptr [Lt_0140], 48
jl .Lt_00E9
cmp dword ptr [Lt_0140], 57
jg .Lt_00E9
.Lt_00EA:
mov dword ptr [Lt_0141], -1
mov eax, dword ptr [Lt_0140]
add eax, -48
mov dword ptr [Lt_0142], eax
mov dword ptr [Lt_0143], 2
.Lt_00EE:
mov eax, dword ptr [Lt_013F]
cmp dword ptr [Lt_013D], eax
jb .Lt_00F0
jmp .Lt_00ED
.Lt_00F0:
mov eax, dword ptr [Lt_013D]
movzx ebx, byte ptr [eax]
mov dword ptr [Lt_0140], ebx
mov ebx, dword ptr [Lt_0140]
cmp ebx, 48
setl bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [Lt_0140]
cmp eax, 57
setg al
shr eax, 1
sbb eax, eax
or ebx, eax
je .Lt_00F2
jmp .Lt_00ED
.Lt_00F2:
.Lt_00F1:
mov eax, dword ptr [Lt_0142]
imul eax, 10
add eax, dword ptr [Lt_0140]
add eax, -48
mov dword ptr [Lt_0142], eax
inc dword ptr [Lt_013D]
.Lt_00EC:
inc dword ptr [Lt_0143]
.Lt_00EB:
cmp dword ptr [Lt_0143], 3
jle .Lt_00EE
.Lt_00ED:
jmp .Lt_00E8
.Lt_00E9:
cmp dword ptr [Lt_0140], 38
je .Lt_00F4
.Lt_00F5:
cmp dword ptr [Lt_0140], 88
je .Lt_00F4
.Lt_00F6:
cmp dword ptr [Lt_0140], 120
jne .Lt_00F3
.Lt_00F4:
mov eax, dword ptr [Lt_013F]
cmp dword ptr [Lt_013D], eax
jb .Lt_00F8
jmp .Lt_00E3
.Lt_00F8:
mov dword ptr [Lt_0142], 0
cmp dword ptr [Lt_0140], 38
jne .Lt_00FA
mov eax, dword ptr [Lt_013D]
movzx ebx, byte ptr [eax]
mov dword ptr [Lt_0140], ebx
inc dword ptr [Lt_013D]
jmp .Lt_00F9
.Lt_00FA:
mov dword ptr [Lt_0140], 72
.Lt_00F9:
mov ebx, dword ptr [Lt_0140]
mov dword ptr [ebp-8], ebx
jmp .Lt_00FC
.Lt_00FE:
mov dword ptr [Lt_0141], -1
mov dword ptr [Lt_0143], 1
.Lt_0102:
mov ebx, dword ptr [Lt_013F]
cmp dword ptr [Lt_013D], ebx
jb .Lt_0104
jmp .Lt_0101
.Lt_0104:
mov ebx, dword ptr [Lt_013D]
movzx eax, byte ptr [ebx]
mov dword ptr [Lt_0140], eax
cmp dword ptr [Lt_0140], 97
jl .Lt_0108
cmp dword ptr [Lt_0140], 102
jle .Lt_0107
.Lt_0108:
cmp dword ptr [Lt_0140], 65
jl .Lt_0109
cmp dword ptr [Lt_0140], 70
jle .Lt_0107
.Lt_0109:
cmp dword ptr [Lt_0140], 48
jl .Lt_0106
cmp dword ptr [Lt_0140], 57
jg .Lt_0106
.Lt_0107:
add dword ptr [Lt_0140], -48
cmp dword ptr [Lt_0140], 9
jle .Lt_010B
add dword ptr [Lt_0140], -7
.Lt_010B:
.Lt_010A:
cmp dword ptr [Lt_0140], 16
jle .Lt_010D
add dword ptr [Lt_0140], -32
.Lt_010D:
.Lt_010C:
mov eax, dword ptr [Lt_0142]
sal eax, 4
add eax, dword ptr [Lt_0140]
mov dword ptr [Lt_0142], eax
jmp .Lt_0105
.Lt_0106:
jmp .Lt_0101
.Lt_010E:
.Lt_0105:
inc dword ptr [Lt_013D]
.Lt_0100:
inc dword ptr [Lt_0143]
.Lt_00FF:
cmp dword ptr [Lt_0143], 2
jle .Lt_0102
.Lt_0101:
jmp .Lt_00FB
.Lt_010F:
mov dword ptr [Lt_0141], -1
mov dword ptr [Lt_0143], 1
.Lt_0113:
mov eax, dword ptr [Lt_013F]
cmp dword ptr [Lt_013D], eax
jb .Lt_0115
jmp .Lt_0112
.Lt_0115:
mov eax, dword ptr [Lt_013D]
movzx ebx, byte ptr [eax]
mov dword ptr [Lt_0140], ebx
mov ebx, dword ptr [Lt_0140]
cmp ebx, 48
setl bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [Lt_0140]
cmp eax, 55
setg al
shr eax, 1
sbb eax, eax
or ebx, eax
je .Lt_0117
jmp .Lt_0112
.Lt_0117:
.Lt_0116:
mov eax, dword ptr [Lt_0142]
sal eax, 3
add eax, dword ptr [Lt_0140]
add eax, -48
mov dword ptr [Lt_0142], eax
inc dword ptr [Lt_013D]
.Lt_0111:
inc dword ptr [Lt_0143]
.Lt_0110:
cmp dword ptr [Lt_0143], 3
jle .Lt_0113
.Lt_0112:
jmp .Lt_00FB
.Lt_0118:
mov dword ptr [Lt_0141], -1
mov dword ptr [Lt_0143], 1
.Lt_011C:
mov eax, dword ptr [Lt_013F]
cmp dword ptr [Lt_013D], eax
jb .Lt_011E
jmp .Lt_011B
.Lt_011E:
mov eax, dword ptr [Lt_013D]
movzx ebx, byte ptr [eax]
mov dword ptr [Lt_0140], ebx
mov ebx, dword ptr [Lt_0140]
cmp ebx, 48
setl bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [Lt_0140]
cmp eax, 49
setg al
shr eax, 1
sbb eax, eax
or ebx, eax
je .Lt_0120
jmp .Lt_011B
.Lt_0120:
.Lt_011F:
mov eax, dword ptr [Lt_0142]
sal eax, 1
add eax, dword ptr [Lt_0140]
add eax, -48
mov dword ptr [Lt_0142], eax
inc dword ptr [Lt_013D]
.Lt_011A:
inc dword ptr [Lt_0143]
.Lt_0119:
cmp dword ptr [Lt_0143], 8
jle .Lt_011C
.Lt_011B:
jmp .Lt_00FB
.Lt_00FC:
mov eax, dword ptr [ebp-8]
add eax, 4294967230
cmp eax, 45
ja .Lt_00FB
mov eax, dword ptr [ebp-8]
jmp dword ptr [.LT_0121+eax*4-264]
.LT_0121:
.int .Lt_0118
.int .Lt_00FB
.int .Lt_00FB
.int .Lt_00FB
.int .Lt_00FB
.int .Lt_00FB
.int .Lt_00FE
.int .Lt_00FB
.int .Lt_00FB
.int .Lt_00FB
.int .Lt_00FB
.int .Lt_00FB
.int .Lt_00FB
.int .Lt_010F
.int .Lt_00FB
.int .Lt_00FB
.int .Lt_00FB
.int .Lt_00FB
.int .Lt_00FB
.int .Lt_00FB
.int .Lt_00FB
.int .Lt_00FB
.int .Lt_00FB
.int .Lt_00FB
.int .Lt_00FB
.int .Lt_00FB
.int .Lt_00FB
.int .Lt_00FB
.int .Lt_00FB
.int .Lt_00FB
.int .Lt_00FB
.int .Lt_00FB
.int .Lt_0118
.int .Lt_00FB
.int .Lt_00FB
.int .Lt_00FB
.int .Lt_00FB
.int .Lt_00FB
.int .Lt_00FE
.int .Lt_00FB
.int .Lt_00FB
.int .Lt_00FB
.int .Lt_00FB
.int .Lt_00FB
.int .Lt_00FB
.int .Lt_010F
.Lt_00FB:
jmp .Lt_00E8
.Lt_00F3:
cmp dword ptr [Lt_0140], 97
jne .Lt_0122
.Lt_0123:
mov dword ptr [Lt_0141], -1
mov dword ptr [Lt_0142], 7
jmp .Lt_00E8
.Lt_0122:
cmp dword ptr [Lt_0140], 117
jne .Lt_0124
.Lt_0125:
mov eax, dword ptr [ebp+16]
mov dword ptr [eax], -1
mov al, byte ptr [Lt_0140]
mov ebx, dword ptr [Lt_013E]
mov byte ptr [ebx], al
inc dword ptr [Lt_013E]
mov dword ptr [Lt_0143], 1
.Lt_0129:
push 0
push 0
push dword ptr [Lt_013D]
push 0
push dword ptr [Lt_013E]
call fb_StrAssign
add esp, 20
inc dword ptr [Lt_013E]
inc dword ptr [Lt_013D]
.Lt_0127:
inc dword ptr [Lt_0143]
.Lt_0126:
cmp dword ptr [Lt_0143], 4
jle .Lt_0129
.Lt_0128:
mov eax, dword ptr [ebp+12]
add dword ptr [eax], 2
jmp .Lt_00E2
jmp .Lt_00E8
.Lt_0124:
cmp dword ptr [Lt_0140], 85
jne .Lt_012A
.Lt_012B:
mov eax, dword ptr [ebp+16]
mov dword ptr [eax], -1
mov eax, dword ptr [Lt_013E]
mov byte ptr [eax], 85
inc dword ptr [Lt_013E]
mov dword ptr [Lt_0143], 1
.Lt_012F:
push 0
push 0
push dword ptr [Lt_013D]
push 0
push dword ptr [Lt_013E]
call fb_StrAssign
add esp, 20
inc dword ptr [Lt_013E]
inc dword ptr [Lt_013D]
.Lt_012D:
inc dword ptr [Lt_0143]
.Lt_012C:
cmp dword ptr [Lt_0143], 4
jle .Lt_012F
.Lt_012E:
mov eax, dword ptr [Lt_013E]
mov byte ptr [eax], 27
mov eax, dword ptr [Lt_013E]
mov byte ptr [eax+1], 85
add dword ptr [Lt_013E], 2
mov dword ptr [Lt_0143], 1
.Lt_0133:
push 0
push 0
push dword ptr [Lt_013D]
push 0
push dword ptr [Lt_013E]
call fb_StrAssign
add esp, 20
inc dword ptr [Lt_013E]
inc dword ptr [Lt_013D]
.Lt_0131:
inc dword ptr [Lt_0143]
.Lt_0130:
cmp dword ptr [Lt_0143], 4
jle .Lt_0133
.Lt_0132:
mov eax, dword ptr [ebp+12]
add dword ptr [eax], 4
jmp .Lt_00E2
.Lt_012A:
.Lt_00E8:
cmp dword ptr [Lt_0141], 0
je .Lt_0135
cmp dword ptr [Lt_0142], 255
jbe .Lt_0137
push 1
push 0
push 8
call ERRREPORTWARN
add esp, 12
mov dword ptr [Lt_0142], 255
.Lt_0137:
.Lt_0136:
cmp dword ptr [Lt_0142], 8
jge .Lt_0139
mov dword ptr [Lt_013B], 1
jmp .Lt_0138
.Lt_0139:
cmp dword ptr [Lt_0142], 64
jge .Lt_013A
mov dword ptr [Lt_013B], 2
jmp .Lt_0138
.Lt_013A:
mov dword ptr [Lt_013B], 3
.Lt_0138:
mov al, byte ptr [Lt_013B]
mov ebx, dword ptr [Lt_013E]
mov byte ptr [ebx], al
inc dword ptr [Lt_013E]
push 0
push -1
push dword ptr [Lt_0142]
call fb_OCT_i
add esp, 4
push eax
push 0
push dword ptr [Lt_013E]
call fb_StrAssign
add esp, 20
mov eax, dword ptr [Lt_013B]
add dword ptr [Lt_013E], eax
mov eax, dword ptr [ebp+12]
inc dword ptr [eax]
jmp .Lt_00E2
.Lt_0135:
.Lt_0134:
.Lt_00E5:
.Lt_00E4:
mov al, byte ptr [Lt_0140]
mov ebx, dword ptr [Lt_013E]
mov byte ptr [ebx], al
inc dword ptr [Lt_013E]
mov eax, dword ptr [ebp+12]
inc dword ptr [eax]
jmp .Lt_00E2
.Lt_00E3:
mov eax, dword ptr [Lt_013E]
mov byte ptr [eax], 0
mov eax, dword ptr [Lt_013C]
mov dword ptr [ebp-4], eax
.Lt_00DF:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HREESCAPE, .-HREESCAPE

.section .bss
.balign 4
	.lcomm	Lt_013C,12
.balign 4
	.lcomm	Lt_0140,4
.balign 4
	.lcomm	Lt_013B,4
.balign 4
	.lcomm	Lt_0143,4
.balign 4
	.lcomm	Lt_0142,4
.balign 4
	.lcomm	Lt_0141,4
.balign 4
	.lcomm	Lt_013D,4
.balign 4
	.lcomm	Lt_013E,4
.balign 4
	.lcomm	Lt_013F,4

.section .text
.balign 16

.globl HREESCAPEW
HREESCAPEW:
.type HREESCAPEW, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_014A:
mov eax, dword ptr [ebp+12]
mov dword ptr [eax], 0
push dword ptr [ebp+8]
call fb_WstrLen
add esp, 4
mov dword ptr [Lt_01A5], eax
cmp dword ptr [Lt_01A5], 0
jne .Lt_014D
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
jmp .Lt_014B
.Lt_014D:
.Lt_014C:
mov eax, dword ptr [Lt_01A5]
sal eax, 1
push eax
push offset Lt_01A6
call DWSTRALLOCATE
add esp, 8
mov eax, dword ptr [ebp+8]
mov dword ptr [Lt_01A7], eax
mov eax, dword ptr [Lt_01A6]
mov dword ptr [Lt_01A8], eax
mov eax, dword ptr [Lt_01A5]
sal eax, 2
mov ebx, dword ptr [Lt_01A7]
add ebx, eax
mov dword ptr [Lt_01A9], ebx
.Lt_014E:
mov ebx, dword ptr [Lt_01A9]
cmp dword ptr [Lt_01A7], ebx
jae .Lt_014F
mov ebx, dword ptr [Lt_01A7]
mov eax, dword ptr [ebx]
mov dword ptr [Lt_01AA], eax
add dword ptr [Lt_01A7], 4
cmp dword ptr [Lt_01AA], 92
jne .Lt_0151
mov eax, dword ptr [Lt_01A9]
cmp dword ptr [Lt_01A7], eax
jb .Lt_0153
jmp .Lt_014F
.Lt_0153:
mov eax, dword ptr [Lt_01A8]
mov dword ptr [eax], 27
add dword ptr [Lt_01A8], 4
mov dword ptr [Lt_01AB], 0
mov eax, dword ptr [Lt_01A7]
mov ebx, dword ptr [eax]
mov dword ptr [Lt_01AA], ebx
add dword ptr [Lt_01A7], 4
cmp dword ptr [Lt_01AA], 48
jl .Lt_0155
cmp dword ptr [Lt_01AA], 57
jg .Lt_0155
.Lt_0156:
mov dword ptr [Lt_01AB], -1
mov ebx, dword ptr [Lt_01AA]
add ebx, -48
mov eax, ebx
mov dword ptr [Lt_01AC], eax
mov dword ptr [Lt_01AD], 2
.Lt_015A:
mov eax, dword ptr [Lt_01A9]
cmp dword ptr [Lt_01A7], eax
jb .Lt_015C
jmp .Lt_0159
.Lt_015C:
mov eax, dword ptr [Lt_01A7]
mov ebx, dword ptr [eax]
mov dword ptr [Lt_01AA], ebx
mov ebx, dword ptr [Lt_01AA]
cmp ebx, 48
setl bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [Lt_01AA]
cmp eax, 57
setg al
shr eax, 1
sbb eax, eax
or ebx, eax
je .Lt_015E
jmp .Lt_0159
.Lt_015E:
.Lt_015D:
mov eax, dword ptr [Lt_01AC]
imul eax, 10
mov ebx, dword ptr [Lt_01AA]
add ebx, -48
mov ecx, ebx
add eax, ecx
mov dword ptr [Lt_01AC], eax
add dword ptr [Lt_01A7], 4
.Lt_0158:
inc dword ptr [Lt_01AD]
.Lt_0157:
cmp dword ptr [Lt_01AD], 5
jle .Lt_015A
.Lt_0159:
jmp .Lt_0154
.Lt_0155:
cmp dword ptr [Lt_01AA], 38
je .Lt_0160
.Lt_0161:
cmp dword ptr [Lt_01AA], 88
je .Lt_0160
.Lt_0162:
cmp dword ptr [Lt_01AA], 120
jne .Lt_015F
.Lt_0160:
mov eax, dword ptr [Lt_01A9]
cmp dword ptr [Lt_01A7], eax
jb .Lt_0164
jmp .Lt_014F
.Lt_0164:
mov dword ptr [Lt_01AC], 0
cmp dword ptr [Lt_01AA], 38
jne .Lt_0166
mov eax, dword ptr [Lt_01A7]
mov ecx, dword ptr [eax]
mov dword ptr [Lt_01AA], ecx
add dword ptr [Lt_01A7], 4
jmp .Lt_0165
.Lt_0166:
mov dword ptr [Lt_01AA], 72
.Lt_0165:
mov ecx, dword ptr [Lt_01AA]
mov dword ptr [ebp-8], ecx
jmp .Lt_0168
.Lt_016A:
mov dword ptr [Lt_01AB], -1
mov dword ptr [Lt_01AD], 1
.Lt_016E:
mov ecx, dword ptr [Lt_01A9]
cmp dword ptr [Lt_01A7], ecx
jb .Lt_0170
jmp .Lt_016D
.Lt_0170:
mov ecx, dword ptr [Lt_01A7]
mov eax, dword ptr [ecx]
mov dword ptr [Lt_01AA], eax
cmp dword ptr [Lt_01AA], 97
jl .Lt_0174
cmp dword ptr [Lt_01AA], 102
jle .Lt_0173
.Lt_0174:
cmp dword ptr [Lt_01AA], 65
jl .Lt_0175
cmp dword ptr [Lt_01AA], 70
jle .Lt_0173
.Lt_0175:
cmp dword ptr [Lt_01AA], 48
jl .Lt_0172
cmp dword ptr [Lt_01AA], 57
jg .Lt_0172
.Lt_0173:
add dword ptr [Lt_01AA], -48
cmp dword ptr [Lt_01AA], 9
jle .Lt_0177
add dword ptr [Lt_01AA], -7
.Lt_0177:
.Lt_0176:
cmp dword ptr [Lt_01AA], 16
jle .Lt_0179
add dword ptr [Lt_01AA], -32
.Lt_0179:
.Lt_0178:
mov eax, dword ptr [Lt_01AC]
shl eax, 4
add eax, dword ptr [Lt_01AA]
mov dword ptr [Lt_01AC], eax
jmp .Lt_0171
.Lt_0172:
jmp .Lt_016D
.Lt_017A:
.Lt_0171:
add dword ptr [Lt_01A7], 4
.Lt_016C:
inc dword ptr [Lt_01AD]
.Lt_016B:
cmp dword ptr [Lt_01AD], 4
jle .Lt_016E
.Lt_016D:
jmp .Lt_0167
.Lt_017B:
mov dword ptr [Lt_01AB], -1
mov dword ptr [Lt_01AD], 1
.Lt_017F:
mov eax, dword ptr [Lt_01A9]
cmp dword ptr [Lt_01A7], eax
jb .Lt_0181
jmp .Lt_017E
.Lt_0181:
mov eax, dword ptr [Lt_01A7]
mov ecx, dword ptr [eax]
mov dword ptr [Lt_01AA], ecx
mov ecx, dword ptr [Lt_01AA]
cmp ecx, 48
setl cl
shr ecx, 1
sbb ecx, ecx
mov eax, dword ptr [Lt_01AA]
cmp eax, 55
setg al
shr eax, 1
sbb eax, eax
or ecx, eax
je .Lt_0183
jmp .Lt_017E
.Lt_0183:
.Lt_0182:
mov eax, dword ptr [Lt_01AC]
shl eax, 3
mov ecx, dword ptr [Lt_01AA]
add ecx, -48
mov ebx, ecx
add eax, ebx
mov dword ptr [Lt_01AC], eax
add dword ptr [Lt_01A7], 4
.Lt_017D:
inc dword ptr [Lt_01AD]
.Lt_017C:
cmp dword ptr [Lt_01AD], 6
jle .Lt_017F
.Lt_017E:
jmp .Lt_0167
.Lt_0184:
mov dword ptr [Lt_01AB], -1
mov dword ptr [Lt_01AD], 1
.Lt_0188:
mov eax, dword ptr [Lt_01A9]
cmp dword ptr [Lt_01A7], eax
jb .Lt_018A
jmp .Lt_0187
.Lt_018A:
mov eax, dword ptr [Lt_01A7]
mov ebx, dword ptr [eax]
mov dword ptr [Lt_01AA], ebx
mov ebx, dword ptr [Lt_01AA]
cmp ebx, 48
setl bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [Lt_01AA]
cmp eax, 49
setg al
shr eax, 1
sbb eax, eax
or ebx, eax
je .Lt_018C
jmp .Lt_0187
.Lt_018C:
.Lt_018B:
mov eax, dword ptr [Lt_01AC]
shl eax, 1
mov ebx, dword ptr [Lt_01AA]
add ebx, -48
mov ecx, ebx
add eax, ecx
mov dword ptr [Lt_01AC], eax
add dword ptr [Lt_01A7], 4
.Lt_0186:
inc dword ptr [Lt_01AD]
.Lt_0185:
cmp dword ptr [Lt_01AD], 16
jle .Lt_0188
.Lt_0187:
jmp .Lt_0167
.Lt_0168:
mov eax, dword ptr [ebp-8]
add eax, 4294967230
cmp eax, 45
ja .Lt_0167
mov eax, dword ptr [ebp-8]
jmp dword ptr [.LT_018D+eax*4-264]
.LT_018D:
.int .Lt_0184
.int .Lt_0167
.int .Lt_0167
.int .Lt_0167
.int .Lt_0167
.int .Lt_0167
.int .Lt_016A
.int .Lt_0167
.int .Lt_0167
.int .Lt_0167
.int .Lt_0167
.int .Lt_0167
.int .Lt_0167
.int .Lt_017B
.int .Lt_0167
.int .Lt_0167
.int .Lt_0167
.int .Lt_0167
.int .Lt_0167
.int .Lt_0167
.int .Lt_0167
.int .Lt_0167
.int .Lt_0167
.int .Lt_0167
.int .Lt_0167
.int .Lt_0167
.int .Lt_0167
.int .Lt_0167
.int .Lt_0167
.int .Lt_0167
.int .Lt_0167
.int .Lt_0167
.int .Lt_0184
.int .Lt_0167
.int .Lt_0167
.int .Lt_0167
.int .Lt_0167
.int .Lt_0167
.int .Lt_016A
.int .Lt_0167
.int .Lt_0167
.int .Lt_0167
.int .Lt_0167
.int .Lt_0167
.int .Lt_0167
.int .Lt_017B
.Lt_0167:
jmp .Lt_0154
.Lt_015F:
cmp dword ptr [Lt_01AA], 117
jne .Lt_018E
.Lt_018F:
mov eax, dword ptr [Lt_01A8]
mov ecx, dword ptr [Lt_01AA]
mov dword ptr [eax], ecx
add dword ptr [Lt_01A8], 4
mov dword ptr [Lt_01AD], 1
.Lt_0193:
push dword ptr [Lt_01A7]
push 0
push dword ptr [Lt_01A8]
call fb_WstrAssign
add esp, 12
add dword ptr [Lt_01A8], 4
add dword ptr [Lt_01A7], 4
.Lt_0191:
inc dword ptr [Lt_01AD]
.Lt_0190:
cmp dword ptr [Lt_01AD], 4
jle .Lt_0193
.Lt_0192:
mov eax, dword ptr [ebp+12]
add dword ptr [eax], 2
jmp .Lt_014E
jmp .Lt_0154
.Lt_018E:
cmp dword ptr [Lt_01AA], 85
jne .Lt_0194
.Lt_0195:
mov eax, dword ptr [Lt_01A8]
mov dword ptr [eax], 85
add dword ptr [Lt_01A8], 4
mov dword ptr [Lt_01AD], 1
.Lt_0199:
push dword ptr [Lt_01A7]
push 0
push dword ptr [Lt_01A8]
call fb_WstrAssign
add esp, 12
add dword ptr [Lt_01A8], 4
add dword ptr [Lt_01A7], 4
.Lt_0197:
inc dword ptr [Lt_01AD]
.Lt_0196:
cmp dword ptr [Lt_01AD], 4
jle .Lt_0199
.Lt_0198:
mov eax, dword ptr [Lt_01A8]
mov dword ptr [eax], 27
mov eax, dword ptr [Lt_01A8]
mov dword ptr [eax+4], 85
add dword ptr [Lt_01A8], 8
mov dword ptr [Lt_01AD], 1
.Lt_019D:
push dword ptr [Lt_01A7]
push 0
push dword ptr [Lt_01A8]
call fb_WstrAssign
add esp, 12
add dword ptr [Lt_01A8], 4
add dword ptr [Lt_01A7], 4
.Lt_019B:
inc dword ptr [Lt_01AD]
.Lt_019A:
cmp dword ptr [Lt_01AD], 4
jle .Lt_019D
.Lt_019C:
mov eax, dword ptr [ebp+12]
add dword ptr [eax], 4
jmp .Lt_014E
.Lt_0194:
.Lt_0154:
cmp dword ptr [Lt_01AB], 0
je .Lt_019F
cmp dword ptr [Lt_01AC], 65535
jbe .Lt_01A1
push 1
push 0
push 8
call ERRREPORTWARN
add esp, 12
mov dword ptr [Lt_01AC], 65535
.Lt_01A1:
.Lt_01A0:
mov dword ptr [Lt_01A5], 1
.Lt_01A2:
cmp dword ptr [Lt_01AC], 7
jbe .Lt_01A3
shr dword ptr [Lt_01AC], 3
inc dword ptr [Lt_01A5]
jmp .Lt_01A2
.Lt_01A3:
mov eax, dword ptr [Lt_01A8]
mov ecx, dword ptr [Lt_01A5]
mov dword ptr [eax], ecx
add dword ptr [Lt_01A8], 4
push dword ptr [Lt_01AC]
call fb_WstrOct_i
add esp, 4
mov dword ptr [ebp-8], eax
push dword ptr [ebp-8]
push 0
push dword ptr [Lt_01A8]
call fb_WstrAssign
add esp, 12
push dword ptr [ebp-8]
call fb_WstrDelete
add esp, 4
mov eax, dword ptr [Lt_01A5]
sal eax, 2
add dword ptr [Lt_01A8], eax
mov eax, dword ptr [ebp+12]
inc dword ptr [eax]
jmp .Lt_014E
.Lt_019F:
.Lt_019E:
.Lt_0151:
.Lt_0150:
mov eax, dword ptr [Lt_01A8]
mov ecx, dword ptr [Lt_01AA]
mov dword ptr [eax], ecx
add dword ptr [Lt_01A8], 4
mov ecx, dword ptr [ebp+12]
inc dword ptr [ecx]
jmp .Lt_014E
.Lt_014F:
mov ecx, dword ptr [Lt_01A8]
mov dword ptr [ecx], 0
mov ecx, dword ptr [Lt_01A6]
mov dword ptr [ebp-4], ecx
.Lt_014B:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HREESCAPEW, .-HREESCAPEW

.section .bss
.balign 4
	.lcomm	Lt_01A6,12
.balign 4
	.lcomm	Lt_01AA,4
.balign 4
	.lcomm	Lt_01A5,4
.balign 4
	.lcomm	Lt_01AD,4
.balign 4
	.lcomm	Lt_01AB,4
.balign 4
	.lcomm	Lt_01AC,4
.balign 4
	.lcomm	Lt_01A7,4
.balign 4
	.lcomm	Lt_01A8,4
.balign 4
	.lcomm	Lt_01A9,4

.section .text
.balign 16

.globl HESCAPE
HESCAPE:
.type HESCAPE, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_01B4:
mov dword ptr [Lt_01D0], 0
push 0
push dword ptr [ebp+8]
call fb_StrLen
add esp, 8
mov dword ptr [Lt_01D1], eax
cmp dword ptr [Lt_01D1], 0
jne .Lt_01B7
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
jmp .Lt_01B5
.Lt_01B7:
.Lt_01B6:
mov eax, dword ptr [Lt_01D1]
sal eax, 2
push eax
push offset Lt_01D2
call DZSTRALLOCATE
add esp, 8
mov eax, dword ptr [ebp+8]
mov dword ptr [Lt_01D3], eax
mov eax, dword ptr [Lt_01D2]
mov dword ptr [Lt_01D4], eax
mov eax, dword ptr [Lt_01D3]
add eax, dword ptr [Lt_01D1]
mov dword ptr [Lt_01D5], eax
.Lt_01B8:
mov eax, dword ptr [Lt_01D5]
cmp dword ptr [Lt_01D3], eax
jae .Lt_01B9
mov eax, dword ptr [Lt_01D3]
movzx ebx, byte ptr [eax]
mov dword ptr [Lt_01D6], ebx
inc dword ptr [Lt_01D3]
cmp dword ptr [Lt_01D6], 92
je .Lt_01BC
.Lt_01BD:
cmp dword ptr [Lt_01D6], 34
jne .Lt_01BB
.Lt_01BC:
mov ebx, dword ptr [Lt_01D4]
mov byte ptr [ebx], 92
inc dword ptr [Lt_01D4]
jmp .Lt_01BA
.Lt_01BB:
cmp dword ptr [Lt_01D6], 27
jne .Lt_01BE
.Lt_01BF:
mov ebx, dword ptr [Lt_01D4]
mov byte ptr [ebx], 92
inc dword ptr [Lt_01D4]
mov ebx, dword ptr [Lt_01D5]
cmp dword ptr [Lt_01D3], ebx
jb .Lt_01C1
jmp .Lt_01B9
.Lt_01C1:
mov ebx, dword ptr [Lt_01D3]
movzx eax, byte ptr [ebx]
mov dword ptr [Lt_01D6], eax
inc dword ptr [Lt_01D3]
mov eax, dword ptr [Lt_01D6]
cmp eax, 1
setge al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [Lt_01D6]
cmp ebx, 3
setle bl
shr ebx, 1
sbb ebx, ebx
and eax, ebx
je .Lt_01C3
mov ebx, dword ptr [Lt_01D6]
mov dword ptr [Lt_01D0], ebx
mov ebx, dword ptr [Lt_01D5]
cmp dword ptr [Lt_01D3], ebx
jb .Lt_01C5
jmp .Lt_01B9
.Lt_01C5:
mov ebx, dword ptr [Lt_01D3]
movzx eax, byte ptr [ebx]
mov dword ptr [Lt_01D6], eax
inc dword ptr [Lt_01D3]
.Lt_01C3:
.Lt_01C2:
jmp .Lt_01BA
.Lt_01BE:
cmp dword ptr [Lt_01D6], 0
jl .Lt_01C8
cmp dword ptr [Lt_01D6], 31
jle .Lt_01C7
.Lt_01C8:
cmp dword ptr [Lt_01D6], 128
jl .Lt_01C6
cmp dword ptr [Lt_01D6], 255
jg .Lt_01C6
.Lt_01C7:
mov eax, dword ptr [Lt_01D4]
mov byte ptr [eax], 92
inc dword ptr [Lt_01D4]
cmp dword ptr [Lt_01D6], 8
jge .Lt_01CA
add dword ptr [Lt_01D6], 48
jmp .Lt_01C9
.Lt_01CA:
cmp dword ptr [Lt_01D6], 64
jge .Lt_01CB
mov eax, dword ptr [Lt_01D6]
sar eax, 3
add eax, 48
mov bl, al
mov eax, dword ptr [Lt_01D4]
mov byte ptr [eax], bl
inc dword ptr [Lt_01D4]
mov ebx, dword ptr [Lt_01D6]
and ebx, 7
add ebx, 48
mov dword ptr [Lt_01D6], ebx
jmp .Lt_01C9
.Lt_01CB:
mov ebx, dword ptr [Lt_01D6]
sar ebx, 6
add ebx, 48
mov al, bl
mov ebx, dword ptr [Lt_01D4]
mov byte ptr [ebx], al
mov eax, dword ptr [Lt_01D6]
and eax, 56
sar eax, 3
add eax, 48
mov bl, al
mov eax, dword ptr [Lt_01D4]
mov byte ptr [eax+1], bl
add dword ptr [Lt_01D4], 2
mov ebx, dword ptr [Lt_01D6]
and ebx, 7
add ebx, 48
mov dword ptr [Lt_01D6], ebx
.Lt_01C9:
.Lt_01C6:
.Lt_01BA:
mov bl, byte ptr [Lt_01D6]
mov eax, dword ptr [Lt_01D4]
mov byte ptr [eax], bl
inc dword ptr [Lt_01D4]
cmp dword ptr [Lt_01D0], 0
jle .Lt_01CD
dec dword ptr [Lt_01D0]
cmp dword ptr [Lt_01D0], 0
jne .Lt_01CF
mov ebx, dword ptr [Lt_01D4]
mov byte ptr [ebx], 34
mov ebx, dword ptr [Lt_01D4]
mov byte ptr [ebx+1], 34
add dword ptr [Lt_01D4], 2
.Lt_01CF:
.Lt_01CE:
.Lt_01CD:
.Lt_01CC:
jmp .Lt_01B8
.Lt_01B9:
mov ebx, dword ptr [Lt_01D4]
mov byte ptr [ebx], 0
mov ebx, dword ptr [Lt_01D2]
mov dword ptr [ebp-4], ebx
.Lt_01B5:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HESCAPE, .-HESCAPE

.section .bss
.balign 4
	.lcomm	Lt_01D2,12
.balign 4
	.lcomm	Lt_01D6,4
.balign 4
	.lcomm	Lt_01D0,4
.balign 4
	.lcomm	Lt_01D1,4
.balign 4
	.lcomm	Lt_01D3,4
.balign 4
	.lcomm	Lt_01D5,4
.balign 4
	.lcomm	Lt_01D4,4

.section .text
.balign 16

.globl HHASESCAPE
HHASESCAPE:
.type HHASESCAPE, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_01EF:
push 0
push dword ptr [ebp+8]
call fb_StrLen
add esp, 8
mov dword ptr [Lt_01FA], eax
.Lt_01F1:
cmp dword ptr [Lt_01FA], 0
jle .Lt_01F2
mov eax, dword ptr [ebp+8]
movzx ebx, byte ptr [eax]
cmp ebx, 92
jne .Lt_01F4
inc dword ptr [ebp+8]
mov ebx, dword ptr [ebp+8]
movzx eax, byte ptr [ebx]
mov dword ptr [Lt_01FB], eax
mov eax, dword ptr [Lt_01FB]
mov dword ptr [ebp-8], eax
jmp .Lt_01F6
.Lt_01F8:
mov dword ptr [ebp-4], -1
jmp .Lt_01F0
jmp .Lt_01F5
.Lt_01F6:
mov eax, dword ptr [ebp-8]
add eax, 4294967262
cmp eax, 84
ja .Lt_01F5
mov eax, dword ptr [ebp-8]
jmp dword ptr [.LT_01F9+eax*4-136]
.LT_01F9:
.int .Lt_01F8
.int .Lt_01F5
.int .Lt_01F5
.int .Lt_01F5
.int .Lt_01F8
.int .Lt_01F5
.int .Lt_01F5
.int .Lt_01F5
.int .Lt_01F5
.int .Lt_01F5
.int .Lt_01F5
.int .Lt_01F5
.int .Lt_01F5
.int .Lt_01F5
.int .Lt_01F8
.int .Lt_01F8
.int .Lt_01F8
.int .Lt_01F8
.int .Lt_01F8
.int .Lt_01F8
.int .Lt_01F8
.int .Lt_01F8
.int .Lt_01F8
.int .Lt_01F8
.int .Lt_01F5
.int .Lt_01F5
.int .Lt_01F5
.int .Lt_01F5
.int .Lt_01F5
.int .Lt_01F5
.int .Lt_01F5
.int .Lt_01F5
.int .Lt_01F5
.int .Lt_01F5
.int .Lt_01F5
.int .Lt_01F5
.int .Lt_01F5
.int .Lt_01F5
.int .Lt_01F5
.int .Lt_01F5
.int .Lt_01F5
.int .Lt_01F5
.int .Lt_01F5
.int .Lt_01F5
.int .Lt_01F5
.int .Lt_01F5
.int .Lt_01F5
.int .Lt_01F5
.int .Lt_01F5
.int .Lt_01F5
.int .Lt_01F5
.int .Lt_01F8
.int .Lt_01F5
.int .Lt_01F5
.int .Lt_01F5
.int .Lt_01F5
.int .Lt_01F5
.int .Lt_01F5
.int .Lt_01F8
.int .Lt_01F5
.int .Lt_01F5
.int .Lt_01F5
.int .Lt_01F5
.int .Lt_01F8
.int .Lt_01F8
.int .Lt_01F5
.int .Lt_01F5
.int .Lt_01F5
.int .Lt_01F8
.int .Lt_01F5
.int .Lt_01F5
.int .Lt_01F5
.int .Lt_01F5
.int .Lt_01F5
.int .Lt_01F8
.int .Lt_01F5
.int .Lt_01F8
.int .Lt_01F5
.int .Lt_01F5
.int .Lt_01F5
.int .Lt_01F8
.int .Lt_01F5
.int .Lt_01F8
.int .Lt_01F8
.int .Lt_01F8
.Lt_01F5:
.Lt_01F4:
.Lt_01F3:
inc dword ptr [ebp+8]
dec dword ptr [Lt_01FA]
jmp .Lt_01F1
.Lt_01F2:
mov dword ptr [ebp-4], 0
.Lt_01F0:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HHASESCAPE, .-HHASESCAPE

.section .bss
.balign 4
	.lcomm	Lt_01FB,4
.balign 4
	.lcomm	Lt_01FA,4

.section .text
.balign 16

.globl HHASESCAPEW
HHASESCAPEW:
.type HHASESCAPEW, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_01FC:
push dword ptr [ebp+8]
call fb_WstrLen
add esp, 4
mov dword ptr [Lt_0207], eax
.Lt_01FE:
cmp dword ptr [Lt_0207], 0
jle .Lt_01FF
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 92
jne .Lt_0201
add dword ptr [ebp+8], 4
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov dword ptr [Lt_0208], ebx
mov ebx, dword ptr [Lt_0208]
mov dword ptr [ebp-8], ebx
jmp .Lt_0203
.Lt_0205:
mov dword ptr [ebp-4], -1
jmp .Lt_01FD
jmp .Lt_0202
.Lt_0203:
mov ebx, dword ptr [ebp-8]
add ebx, 4294967262
cmp ebx, 84
ja .Lt_0202
mov ebx, dword ptr [ebp-8]
jmp dword ptr [.LT_0206+ebx*4-136]
.LT_0206:
.int .Lt_0205
.int .Lt_0202
.int .Lt_0202
.int .Lt_0202
.int .Lt_0205
.int .Lt_0202
.int .Lt_0202
.int .Lt_0202
.int .Lt_0202
.int .Lt_0202
.int .Lt_0202
.int .Lt_0202
.int .Lt_0202
.int .Lt_0202
.int .Lt_0205
.int .Lt_0205
.int .Lt_0205
.int .Lt_0205
.int .Lt_0205
.int .Lt_0205
.int .Lt_0205
.int .Lt_0205
.int .Lt_0205
.int .Lt_0205
.int .Lt_0202
.int .Lt_0202
.int .Lt_0202
.int .Lt_0202
.int .Lt_0202
.int .Lt_0202
.int .Lt_0202
.int .Lt_0202
.int .Lt_0202
.int .Lt_0202
.int .Lt_0202
.int .Lt_0202
.int .Lt_0202
.int .Lt_0202
.int .Lt_0202
.int .Lt_0202
.int .Lt_0202
.int .Lt_0202
.int .Lt_0202
.int .Lt_0202
.int .Lt_0202
.int .Lt_0202
.int .Lt_0202
.int .Lt_0202
.int .Lt_0202
.int .Lt_0202
.int .Lt_0202
.int .Lt_0205
.int .Lt_0202
.int .Lt_0202
.int .Lt_0202
.int .Lt_0202
.int .Lt_0202
.int .Lt_0202
.int .Lt_0205
.int .Lt_0202
.int .Lt_0202
.int .Lt_0202
.int .Lt_0202
.int .Lt_0205
.int .Lt_0205
.int .Lt_0202
.int .Lt_0202
.int .Lt_0202
.int .Lt_0205
.int .Lt_0202
.int .Lt_0202
.int .Lt_0202
.int .Lt_0202
.int .Lt_0202
.int .Lt_0205
.int .Lt_0202
.int .Lt_0205
.int .Lt_0202
.int .Lt_0202
.int .Lt_0202
.int .Lt_0205
.int .Lt_0202
.int .Lt_0205
.int .Lt_0205
.int .Lt_0205
.Lt_0202:
.Lt_0201:
.Lt_0200:
add dword ptr [ebp+8], 4
dec dword ptr [Lt_0207]
jmp .Lt_01FE
.Lt_01FF:
mov dword ptr [ebp-4], 0
.Lt_01FD:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HHASESCAPEW, .-HHASESCAPEW

.section .bss
.balign 4
	.lcomm	Lt_0208,4
.balign 4
	.lcomm	Lt_0207,4

.section .text
.balign 16

.globl HESCAPEW
HESCAPEW:
.type HESCAPEW, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0213:
mov eax, dword ptr [SYMB_DTYPETB+172]
mov dword ptr [Lt_0230], eax
push dword ptr [ebp+8]
call fb_WstrLen
add esp, 4
mov dword ptr [Lt_0231], eax
cmp dword ptr [Lt_0231], 0
jne .Lt_0216
mov dword ptr [ebp-4], 0
jmp .Lt_0214
.Lt_0216:
.Lt_0215:
mov eax, dword ptr [Lt_0230]
imul eax, dword ptr [Lt_0231]
sal eax, 2
push eax
push offset Lt_0232
call DZSTRALLOCATE
add esp, 8
mov eax, dword ptr [ebp+8]
mov dword ptr [Lt_0233], eax
mov eax, dword ptr [Lt_0232]
mov dword ptr [Lt_0234], eax
mov eax, dword ptr [Lt_0231]
sal eax, 2
mov ebx, dword ptr [Lt_0233]
add ebx, eax
mov dword ptr [Lt_0235], ebx
.Lt_0217:
mov ebx, dword ptr [Lt_0235]
cmp dword ptr [Lt_0233], ebx
jae .Lt_0218
mov ebx, dword ptr [Lt_0233]
mov eax, dword ptr [ebx]
mov dword ptr [Lt_0236], eax
add dword ptr [Lt_0233], 4
cmp dword ptr [Lt_0236], 27
jne .Lt_021A
mov eax, dword ptr [Lt_0235]
cmp dword ptr [Lt_0233], eax
jb .Lt_021C
jmp .Lt_0218
.Lt_021C:
mov eax, dword ptr [Lt_0233]
mov ebx, dword ptr [eax]
mov dword ptr [Lt_0236], ebx
add dword ptr [Lt_0233], 4
cmp dword ptr [Lt_0236], 1
setae bl
shr ebx, 1
sbb ebx, ebx
cmp dword ptr [Lt_0236], 6
setbe al
shr eax, 1
sbb eax, eax
and ebx, eax
je .Lt_021E
mov eax, dword ptr [Lt_0236]
mov dword ptr [Lt_0239], eax
mov dword ptr [Lt_0236], 0
mov eax, dword ptr [Lt_0239]
sal eax, 2
mov ebx, dword ptr [Lt_0233]
add ebx, eax
mov eax, dword ptr [Lt_0235]
cmp ebx, eax
jbe .Lt_0220
jmp .Lt_0218
.Lt_0220:
.Lt_0221:
cmp dword ptr [Lt_0239], 0
jle .Lt_0222
mov eax, dword ptr [Lt_0236]
shl eax, 3
mov ebx, dword ptr [Lt_0233]
add eax, dword ptr [ebx]
add eax, 4294967248
mov dword ptr [Lt_0236], eax
add dword ptr [Lt_0233], 4
dec dword ptr [Lt_0239]
jmp .Lt_0221
.Lt_0222:
jmp .Lt_021D
.Lt_021E:
cmp dword ptr [Lt_0236], 117
jne .Lt_0225
mov eax, dword ptr [Lt_0233]
add eax, 16
mov ebx, dword ptr [Lt_0235]
cmp eax, ebx
jbe .Lt_0227
jmp .Lt_0218
.Lt_0227:
push dword ptr [Lt_0233]
call HU16TOWCHAR
add esp, 4
mov dword ptr [Lt_0236], eax
add dword ptr [Lt_0233], 16
jmp .Lt_0224
.Lt_0225:
push dword ptr [Lt_0236]
call HREMAPCHAR
add esp, 4
mov dword ptr [Lt_0236], eax
.Lt_0224:
.Lt_021D:
.Lt_021A:
.Lt_0219:
mov dword ptr [Lt_0239], 1
mov eax, dword ptr [Lt_0230]
mov dword ptr [ebp-8], eax
jmp .Lt_0229
.Lt_022C:
mov eax, dword ptr [Lt_0234]
mov byte ptr [eax], 92
inc dword ptr [Lt_0234]
mov eax, dword ptr [Lt_0236]
and eax, 255
mov dword ptr [Lt_023A], eax
cmp dword ptr [Lt_023A], 8
jae .Lt_022E
mov eax, dword ptr [Lt_023A]
add eax, 48
mov bl, al
mov eax, dword ptr [Lt_0234]
mov byte ptr [eax], bl
inc dword ptr [Lt_0234]
jmp .Lt_022D
.Lt_022E:
cmp dword ptr [Lt_023A], 64
jae .Lt_022F
mov ebx, dword ptr [Lt_023A]
shr ebx, 3
add ebx, 48
mov al, bl
mov ebx, dword ptr [Lt_0234]
mov byte ptr [ebx], al
mov eax, dword ptr [Lt_023A]
and eax, 7
add eax, 48
mov bl, al
mov eax, dword ptr [Lt_0234]
mov byte ptr [eax+1], bl
add dword ptr [Lt_0234], 2
jmp .Lt_022D
.Lt_022F:
mov ebx, dword ptr [Lt_023A]
shr ebx, 6
add ebx, 48
mov al, bl
mov ebx, dword ptr [Lt_0234]
mov byte ptr [ebx], al
mov eax, dword ptr [Lt_023A]
and eax, 56
shr eax, 3
add eax, 48
mov bl, al
mov eax, dword ptr [Lt_0234]
mov byte ptr [eax+1], bl
mov ebx, dword ptr [Lt_023A]
and ebx, 7
add ebx, 48
mov al, bl
mov ebx, dword ptr [Lt_0234]
mov byte ptr [ebx+2], al
add dword ptr [Lt_0234], 3
.Lt_022D:
shr dword ptr [Lt_0236], 8
.Lt_022A:
inc dword ptr [Lt_0239]
.Lt_0229:
mov eax, dword ptr [ebp-8]
cmp dword ptr [Lt_0239], eax
jle .Lt_022C
.Lt_022B:
jmp .Lt_0217
.Lt_0218:
mov eax, dword ptr [Lt_0234]
mov byte ptr [eax], 0
mov eax, dword ptr [Lt_0232]
mov dword ptr [ebp-4], eax
.Lt_0214:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HESCAPEW, .-HESCAPEW

.section .bss
.balign 4
	.lcomm	Lt_0232,12
.balign 4
	.lcomm	Lt_0236,4
.balign 4
	.lcomm	Lt_023A,4
.balign 4
	.lcomm	Lt_0231,4
.balign 4
	.lcomm	Lt_0239,4
.balign 4
	.lcomm	Lt_0230,4
.balign 4
	.lcomm	Lt_0233,4
.balign 4
	.lcomm	Lt_0235,4
.balign 4
	.lcomm	Lt_0234,4

.section .text
.balign 16

.globl HUNESCAPE
HUNESCAPE:
.type HUNESCAPE, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_023B:
push 0
push dword ptr [ebp+8]
call fb_StrLen
add esp, 8
mov dword ptr [Lt_0249], eax
cmp dword ptr [Lt_0249], 0
jne .Lt_023E
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
jmp .Lt_023C
.Lt_023E:
.Lt_023D:
push dword ptr [Lt_0249]
push offset Lt_024A
call DZSTRALLOCATE
add esp, 8
mov eax, dword ptr [ebp+8]
mov dword ptr [Lt_024B], eax
mov eax, dword ptr [Lt_024A]
mov dword ptr [Lt_024C], eax
mov eax, dword ptr [Lt_024B]
add eax, dword ptr [Lt_0249]
mov dword ptr [Lt_024D], eax
.Lt_023F:
mov eax, dword ptr [Lt_024D]
cmp dword ptr [Lt_024B], eax
jae .Lt_0240
mov eax, dword ptr [Lt_024B]
movzx ebx, byte ptr [eax]
mov dword ptr [Lt_024E], ebx
inc dword ptr [Lt_024B]
cmp dword ptr [Lt_024E], 27
jne .Lt_0242
mov ebx, dword ptr [Lt_024D]
cmp dword ptr [Lt_024B], ebx
jb .Lt_0244
jmp .Lt_0240
.Lt_0244:
mov ebx, dword ptr [Lt_024B]
movzx eax, byte ptr [ebx]
mov dword ptr [Lt_024E], eax
inc dword ptr [Lt_024B]
mov eax, dword ptr [Lt_024E]
cmp eax, 1
setge al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [Lt_024E]
cmp ebx, 3
setle bl
shr ebx, 1
sbb ebx, ebx
and eax, ebx
je .Lt_0246
mov ebx, dword ptr [Lt_024E]
mov dword ptr [Lt_0251], ebx
mov dword ptr [Lt_024E], 0
.Lt_0247:
cmp dword ptr [Lt_0251], 0
jle .Lt_0248
mov ebx, dword ptr [Lt_024E]
sal ebx, 3
mov eax, dword ptr [Lt_024B]
movzx ecx, byte ptr [eax]
add ebx, ecx
add ebx, -48
mov dword ptr [Lt_024E], ebx
inc dword ptr [Lt_024B]
dec dword ptr [Lt_0251]
jmp .Lt_0247
.Lt_0248:
jmp .Lt_0245
.Lt_0246:
push dword ptr [Lt_024E]
call HREMAPCHAR
add esp, 4
mov dword ptr [Lt_024E], eax
.Lt_0245:
.Lt_0242:
.Lt_0241:
mov al, byte ptr [Lt_024E]
mov ebx, dword ptr [Lt_024C]
mov byte ptr [ebx], al
inc dword ptr [Lt_024C]
jmp .Lt_023F
.Lt_0240:
mov eax, dword ptr [Lt_024C]
mov byte ptr [eax], 0
mov eax, dword ptr [Lt_024A]
mov dword ptr [ebp-4], eax
.Lt_023C:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HUNESCAPE, .-HUNESCAPE

.section .bss
.balign 4
	.lcomm	Lt_024A,12
.balign 4
	.lcomm	Lt_024E,4
.balign 4
	.lcomm	Lt_0249,4
.balign 4
	.lcomm	Lt_0251,4
.balign 4
	.lcomm	Lt_024B,4
.balign 4
	.lcomm	Lt_024C,4
.balign 4
	.lcomm	Lt_024D,4

.section .text
.balign 16

.globl HUNESCAPEW
HUNESCAPEW:
.type HUNESCAPEW, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_0252:
push dword ptr [ebp+8]
call fb_WstrLen
add esp, 4
mov dword ptr [Lt_0264], eax
cmp dword ptr [Lt_0264], 0
jne .Lt_0255
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
jmp .Lt_0253
.Lt_0255:
.Lt_0254:
push dword ptr [Lt_0264]
push offset Lt_0265
call DWSTRALLOCATE
add esp, 8
mov eax, dword ptr [ebp+8]
mov dword ptr [Lt_0266], eax
mov eax, dword ptr [Lt_0265]
mov dword ptr [Lt_0267], eax
mov eax, dword ptr [Lt_0264]
sal eax, 2
mov ebx, dword ptr [Lt_0266]
add ebx, eax
mov dword ptr [Lt_0268], ebx
.Lt_0256:
mov ebx, dword ptr [Lt_0268]
cmp dword ptr [Lt_0266], ebx
jae .Lt_0257
mov ebx, dword ptr [Lt_0266]
mov eax, dword ptr [ebx]
mov dword ptr [Lt_0269], eax
add dword ptr [Lt_0266], 4
cmp dword ptr [Lt_0269], 27
jne .Lt_0259
mov eax, dword ptr [Lt_0268]
cmp dword ptr [Lt_0266], eax
jb .Lt_025B
jmp .Lt_0257
.Lt_025B:
mov eax, dword ptr [Lt_0266]
mov ebx, dword ptr [eax]
mov dword ptr [Lt_0269], ebx
add dword ptr [Lt_0266], 4
mov ebx, dword ptr [Lt_0269]
cmp ebx, 1
setge bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [Lt_0269]
cmp eax, 6
setle al
shr eax, 1
sbb eax, eax
and ebx, eax
je .Lt_025D
mov eax, dword ptr [Lt_0269]
mov dword ptr [Lt_026C], eax
mov dword ptr [Lt_0269], 0
.Lt_025E:
cmp dword ptr [Lt_026C], 0
jle .Lt_025F
mov eax, dword ptr [Lt_0269]
sal eax, 3
mov ebx, eax
mov eax, dword ptr [Lt_0266]
add ebx, dword ptr [eax]
add ebx, 4294967248
mov eax, ebx
mov dword ptr [Lt_0269], eax
add dword ptr [Lt_0266], 4
dec dword ptr [Lt_026C]
jmp .Lt_025E
.Lt_025F:
jmp .Lt_025C
.Lt_025D:
cmp dword ptr [Lt_0269], 117
jne .Lt_0261
mov eax, dword ptr [Lt_0266]
add eax, 16
mov ebx, dword ptr [Lt_0268]
cmp eax, ebx
jbe .Lt_0263
jmp .Lt_0257
.Lt_0263:
push dword ptr [Lt_0266]
call HU16TOWCHAR
add esp, 4
mov dword ptr [Lt_0269], eax
add dword ptr [Lt_0266], 16
jmp .Lt_0260
.Lt_0261:
push dword ptr [Lt_0269]
call HREMAPCHAR
add esp, 4
mov dword ptr [Lt_0269], eax
.Lt_0260:
.Lt_025C:
.Lt_0259:
.Lt_0258:
mov eax, dword ptr [Lt_0267]
mov ebx, dword ptr [Lt_0269]
mov dword ptr [eax], ebx
add dword ptr [Lt_0267], 4
jmp .Lt_0256
.Lt_0257:
mov ebx, dword ptr [Lt_0267]
mov dword ptr [ebx], 0
mov ebx, dword ptr [Lt_0265]
mov dword ptr [ebp-4], ebx
.Lt_0253:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HUNESCAPEW, .-HUNESCAPEW

.section .bss
.balign 4
	.lcomm	Lt_0265,12
.balign 4
	.lcomm	Lt_0269,4
.balign 4
	.lcomm	Lt_0264,4
.balign 4
	.lcomm	Lt_026C,4
.balign 4
	.lcomm	Lt_0266,4
.balign 4
	.lcomm	Lt_0267,4
.balign 4
	.lcomm	Lt_0268,4

.section .text
.balign 16

.globl HCHARNEEDSESCAPING
HCHARNEEDSESCAPING:
.type HCHARNEEDSESCAPING, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_026D:
mov eax, dword ptr [ebp+8]
cmp eax, 32
setl al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp+8]
cmp ebx, 127
setge bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
cmp dword ptr [ebp+8], 92
sete bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
mov ebx, dword ptr [ebp+12]
cmp ebx, dword ptr [ebp+8]
sete bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
mov dword ptr [ebp-4], eax
.Lt_026E:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HCHARNEEDSESCAPING, .-HCHARNEEDSESCAPING
.balign 16

.globl HISVALIDHEXDIGIT
HISVALIDHEXDIGIT:
.type HISVALIDHEXDIGIT, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_0274:
cmp dword ptr [ebp+8], 48
setae al
shr eax, 1
sbb eax, eax
cmp dword ptr [ebp+8], 57
setbe bl
shr ebx, 1
sbb ebx, ebx
and eax, ebx
cmp dword ptr [ebp+8], 97
setae bl
shr ebx, 1
sbb ebx, ebx
cmp dword ptr [ebp+8], 102
setbe cl
shr ecx, 1
sbb ecx, ecx
and ebx, ecx
or eax, ebx
cmp dword ptr [ebp+8], 65
setae bl
shr ebx, 1
sbb ebx, ebx
cmp dword ptr [ebp+8], 70
setbe cl
shr ecx, 1
sbb ecx, ecx
and ebx, ecx
or eax, ebx
mov dword ptr [ebp-4], eax
.Lt_0275:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HISVALIDHEXDIGIT, .-HISVALIDHEXDIGIT
.balign 16
fb_ctor__hlpzstr:
.type fb_ctor__hlpzstr, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__hlpzstr, .-fb_ctor__hlpzstr
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
HREMAPCHAR:
.type HREMAPCHAR, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_01D9:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-8], eax
jmp .Lt_01DC
.Lt_01DE:
mov dword ptr [ebp-4], 13
jmp .Lt_01DB
.Lt_01E0:
mov dword ptr [ebp-4], 10
jmp .Lt_01DB
.Lt_01E3:
mov dword ptr [ebp-4], 9
jmp .Lt_01DB
.Lt_01E5:
mov dword ptr [ebp-4], 8
jmp .Lt_01DB
.Lt_01E7:
mov dword ptr [ebp-4], 7
jmp .Lt_01DB
.Lt_01E9:
mov dword ptr [ebp-4], 12
jmp .Lt_01DB
.Lt_01EB:
mov dword ptr [ebp-4], 11
jmp .Lt_01DB
.Lt_01ED:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
jmp .Lt_01DB
.Lt_01DC:
mov eax, dword ptr [ebp-8]
add eax, 4294967199
cmp eax, 21
ja .Lt_01ED
mov eax, dword ptr [ebp-8]
jmp dword ptr [.LT_01EE+eax*4-388]
.LT_01EE:
.int .Lt_01E7
.int .Lt_01E5
.int .Lt_01ED
.int .Lt_01ED
.int .Lt_01ED
.int .Lt_01E9
.int .Lt_01ED
.int .Lt_01ED
.int .Lt_01ED
.int .Lt_01ED
.int .Lt_01ED
.int .Lt_01E0
.int .Lt_01ED
.int .Lt_01E0
.int .Lt_01ED
.int .Lt_01ED
.int .Lt_01ED
.int .Lt_01DE
.int .Lt_01ED
.int .Lt_01E3
.int .Lt_01ED
.int .Lt_01EB
.Lt_01DB:
.Lt_01DA:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size HREMAPCHAR, .-HREMAPCHAR
.balign 16
HU16TOWCHAR:
.type HU16TOWCHAR, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_0209:
mov dword ptr [Lt_027F], 0
mov dword ptr [Lt_0280], 1
.Lt_020E:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
add ebx, 4294967248
mov dword ptr [Lt_0281], ebx
add dword ptr [ebp+8], 4
cmp dword ptr [Lt_0281], 9
jbe .Lt_0210
add dword ptr [Lt_0281], 4294967289
.Lt_0210:
.Lt_020F:
cmp dword ptr [Lt_0281], 16
jbe .Lt_0212
add dword ptr [Lt_0281], 4294967264
.Lt_0212:
.Lt_0211:
mov ebx, dword ptr [Lt_027F]
shl ebx, 4
or ebx, dword ptr [Lt_0281]
mov dword ptr [Lt_027F], ebx
.Lt_020C:
inc dword ptr [Lt_0280]
.Lt_020B:
cmp dword ptr [Lt_0280], 4
jle .Lt_020E
.Lt_020D:
mov ebx, dword ptr [Lt_027F]
mov dword ptr [ebp-4], ebx
.Lt_020A:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HU16TOWCHAR, .-HU16TOWCHAR

.section .bss
.balign 4
	.lcomm	Lt_027F,4
.balign 4
	.lcomm	Lt_0281,4
.balign 4
	.lcomm	Lt_0280,4
	#fbc-1.01.0/src/compiler/hlp-str.bas' compilation took 0.03271594538819045 secs
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
.int fb_ctor__hlpzstr
