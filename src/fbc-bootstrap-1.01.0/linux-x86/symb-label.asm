	.intel_syntax noprefix

	#FreeBASIC-1.01.0-source/src/compiler/symb-label.bas' compilation started at 16:30:08 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl SYMBADDLABEL
SYMBADDLABEL:
.type SYMBADDLABEL, @function
push ebp
mov ebp, esp
sub esp, 36
push ebx
mov dword ptr [ebp-4], 0
.Lt_005F:
mov dword ptr [ebp-4], 0
cmp dword ptr [ebp+8], 0
je .Lt_0062
push -1
push 0
push 7
push dword ptr [ebp+8]
push dword ptr [SYMB+98516]
call SYMBLOOKUPBYNAMEANDCLASS
add esp, 20
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 0
je .Lt_0064
mov eax, dword ptr [ebp+12]
and eax, 4
test eax, eax
je .Lt_0066
mov eax, dword ptr [ebp-16]
cmp dword ptr [eax+56], 0
je .Lt_0068
jmp .Lt_0060
.Lt_0068:
.Lt_0067:
mov eax, dword ptr [ebp-16]
mov dword ptr [eax+56], -1
mov eax, dword ptr [ebp-16]
mov ebx, dword ptr [PARSER+104]
mov dword ptr [eax+52], ebx
mov ebx, dword ptr [ebp-16]
mov eax, dword ptr [PARSER+28]
mov dword ptr [ebx+60], eax
mov ax, word ptr [PARSER+92]
mov ebx, dword ptr [ebp-16]
mov word ptr [ebx+32], ax
mov eax, dword ptr [ebp-16]
mov dword ptr [ebp-4], eax
jmp .Lt_0060
jmp .Lt_0065
.Lt_0066:
mov eax, dword ptr [ebp-16]
mov dword ptr [ebp-4], eax
jmp .Lt_0060
.Lt_0065:
.Lt_0064:
.Lt_0063:
mov eax, dword ptr [ebp+12]
and eax, 64
test eax, eax
jne .Lt_006A
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-12], eax
jmp .Lt_0069
.Lt_006A:
call SYMBUNIQUELABEL
mov dword ptr [ebp-12], eax
.Lt_0069:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-8], eax
jmp .Lt_0061
.Lt_0062:
mov dword ptr [ebp-8], 0
call SYMBUNIQUELABEL
mov dword ptr [ebp-12], eax
.Lt_0061:
mov eax, dword ptr [ebp+12]
and eax, 8
test eax, eax
je .Lt_006C
mov dword ptr [ebp-28], -1
lea eax, [SYMB+98404]
mov dword ptr [ebp-20], eax
lea eax, [SYMB+98416]
mov dword ptr [ebp-24], eax
jmp .Lt_006B
.Lt_006C:
mov eax, dword ptr [ENV+832]
cmp dword ptr [PARSER+100], eax
jne .Lt_006E
mov dword ptr [ebp-28], -1
lea eax, [SYMB+98352]
cmp dword ptr [SYMB+98516], eax
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_0070
mov ebx, dword ptr [SYMB+98524]
mov dword ptr [ebp-20], ebx
mov ebx, dword ptr [SYMB+98520]
mov dword ptr [ebp-24], ebx
jmp .Lt_006F
.Lt_0070:
lea ebx, [SYMB+98404]
mov dword ptr [ebp-20], ebx
lea ebx, [SYMB+98416]
mov dword ptr [ebp-24], ebx
.Lt_006F:
jmp .Lt_006D
.Lt_006E:
mov dword ptr [ebp-28], 0
mov ebx, dword ptr [PARSER+100]
lea eax, [ebx+52]
mov dword ptr [ebp-20], eax
mov eax, dword ptr [SYMB+98520]
mov dword ptr [ebp-24], eax
.Lt_006D:
.Lt_006B:
cmp dword ptr [ebp-28], 0
je .Lt_0073
mov dword ptr [ebp-36], 0
jmp .Lt_0079
.Lt_0073:
mov dword ptr [ebp-36], 128
.Lt_0079:
push dword ptr [ebp-36]
push 0
push -2147483648
push dword ptr [ebp-12]
push dword ptr [ebp-8]
push 7
push dword ptr [ebp-24]
push dword ptr [ebp-20]
push 0
cmp dword ptr [ebp+8], 0
jne .Lt_0071
mov dword ptr [ebp-32], 0
jmp .Lt_007A
.Lt_0071:
mov dword ptr [ebp-32], 32
.Lt_007A:
push dword ptr [ebp-32]
call SYMBNEWSYMBOL
add esp, 40
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 0
jne .Lt_0076
jmp .Lt_0060
.Lt_0076:
.Lt_0075:
mov eax, dword ptr [ebp+12]
and eax, 4
test eax, eax
je .Lt_0078
mov eax, dword ptr [ebp-16]
mov ebx, dword ptr [PARSER+104]
mov dword ptr [eax+52], ebx
mov ebx, dword ptr [ebp-16]
mov eax, dword ptr [PARSER+28]
mov dword ptr [ebx+60], eax
mov eax, dword ptr [ebp-16]
mov dword ptr [eax+56], -1
jmp .Lt_0077
.Lt_0078:
mov eax, dword ptr [ebp-16]
mov dword ptr [eax+56], 0
.Lt_0077:
mov eax, dword ptr [ebp-16]
mov dword ptr [ebp-4], eax
.Lt_0060:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBADDLABEL, .-SYMBADDLABEL
.balign 16

.globl SYMBCLONELABEL
SYMBCLONELABEL:
.type SYMBCLONELABEL, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_007C:
push 4
push 0
call SYMBADDLABEL
add esp, 8
mov dword ptr [ebp-4], eax
.Lt_007D:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size SYMBCLONELABEL, .-SYMBCLONELABEL
.balign 16

.globl SYMBDELLABEL
SYMBDELLABEL:
.type SYMBDELLABEL, @function
push ebp
mov ebp, esp
.Lt_007E:
cmp dword ptr [ebp+8], 0
jne .Lt_0081
jmp .Lt_007F
.Lt_0081:
.Lt_0080:
push dword ptr [ebp+8]
call SYMBFREESYMBOL
add esp, 4
.Lt_007F:
mov esp, ebp
pop ebp
ret
.size SYMBDELLABEL, .-SYMBDELLABEL
.balign 16

.globl SYMBCHECKLABELS
SYMBCHECKLABELS:
.type SYMBCHECKLABELS, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_0082:
mov dword ptr [ebp-8], 0
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-12], eax
.Lt_0084:
cmp dword ptr [ebp-12], 0
je .Lt_0085
mov eax, dword ptr [ebp-12]
cmp dword ptr [eax], 7
jne .Lt_0087
mov eax, dword ptr [ebp-12]
cmp dword ptr [eax+56], 0
jne .Lt_0089
mov eax, dword ptr [ebp-12]
cmp dword ptr [eax+12], 0
je .Lt_008B
push 0
push 1
push -1
mov eax, dword ptr [ebp-12]
push dword ptr [eax+12]
push 47
call ERRREPORTEX
add esp, 20
inc dword ptr [ebp-8]
.Lt_008B:
.Lt_008A:
.Lt_0089:
.Lt_0088:
.Lt_0087:
.Lt_0086:
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax+160]
mov dword ptr [ebp-12], ebx
jmp .Lt_0084
.Lt_0085:
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ebx
.Lt_0083:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBCHECKLABELS, .-SYMBCHECKLABELS
.balign 16
fb_ctor__symbzlabel:
.type fb_ctor__symbzlabel, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__symbzlabel, .-fb_ctor__symbzlabel
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
	#FreeBASIC-1.01.0-source/src/compiler/symb-label.bas' compilation took 0.02893507678527385 secs

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
.int fb_ctor__symbzlabel
