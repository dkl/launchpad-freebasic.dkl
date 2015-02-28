	.intel_syntax noprefix

	#FreeBASIC-1.01.0-source/src/compiler/symb-typedef.bas' compilation started at 16:30:08 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl SYMBFWDREFINIT
SYMBFWDREFINIT:
.type SYMBFWDREFINIT, @function
.Lt_005F:
push 6
push 8
push 500
lea eax, [SYMB+98608]
push eax
call LISTINIT
add esp, 16
mov dword ptr [SYMB+98672], 0
.Lt_0060:
ret
.size SYMBFWDREFINIT, .-SYMBFWDREFINIT
.balign 16

.globl SYMBFWDREFEND
SYMBFWDREFEND:
.type SYMBFWDREFEND, @function
.Lt_0061:
lea eax, [SYMB+98608]
push eax
call LISTEND
add esp, 4
.Lt_0062:
ret
.size SYMBFWDREFEND, .-SYMBFWDREFEND
.balign 16

.globl SYMBADDTOFWDREF
SYMBADDTOFWDREF:
.type SYMBADDTOFWDREF, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0063:
lea eax, [SYMB+98608]
push eax
call LISTNEWNODE
add esp, 4
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [ebp+12]
mov dword ptr [eax], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp-4]
mov ecx, dword ptr [ebx+52]
mov dword ptr [eax+4], ecx
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ebp-4]
mov dword ptr [ecx+52], eax
.Lt_0064:
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBADDTOFWDREF, .-SYMBADDTOFWDREF
.balign 16

.globl SYMBREMOVEFROMFWDREF
SYMBREMOVEFROMFWDREF:
.type SYMBREMOVEFROMFWDREF, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_0065:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+52]
mov dword ptr [ebp-4], ebx
mov dword ptr [ebp-8], 0
.Lt_0067:
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebp+12]
cmp dword ptr [ebx], eax
jne .Lt_006B
jmp .Lt_0068
.Lt_006B:
.Lt_006A:
mov eax, dword ptr [ebp-4]
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-4], ebx
.Lt_0069:
jmp .Lt_0067
.Lt_0068:
cmp dword ptr [ebp-8], 0
jne .Lt_006D
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [ebx+4]
mov dword ptr [eax+52], ecx
jmp .Lt_006C
.Lt_006D:
mov ecx, dword ptr [ebp-4]
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ecx+4]
mov dword ptr [eax+4], ebx
.Lt_006C:
push dword ptr [ebp-4]
lea ebx, [SYMB+98608]
push ebx
call LISTDELNODE
add esp, 8
.Lt_0066:
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBREMOVEFROMFWDREF, .-SYMBREMOVEFROMFWDREF
.balign 16

.globl SYMBCHECKFWDREF
SYMBCHECKFWDREF:
.type SYMBCHECKFWDREF, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_007D:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
.Lt_007F:
mov eax, dword ptr [ebp-4]
cmp dword ptr [eax], 14
jne .Lt_0083
push dword ptr [ebp+8]
push dword ptr [ebp-4]
call HFIXFORWARDREF
add esp, 8
jmp .Lt_007E
.Lt_0083:
.Lt_0082:
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+144]
mov dword ptr [ebp-4], ebx
.Lt_0081:
cmp dword ptr [ebp-4], 0
jne .Lt_007F
.Lt_0080:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+140]
mov dword ptr [ebp-4], eax
.Lt_0084:
cmp dword ptr [ebp-4], 0
je .Lt_0085
mov eax, dword ptr [ebp-4]
cmp dword ptr [eax], 14
jne .Lt_0087
push dword ptr [ebp+8]
push dword ptr [ebp-4]
call HFIXFORWARDREF
add esp, 8
jmp .Lt_007E
.Lt_0087:
.Lt_0086:
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+140]
mov dword ptr [ebp-4], ebx
jmp .Lt_0084
.Lt_0085:
.Lt_007E:
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBCHECKFWDREF, .-SYMBCHECKFWDREF
.balign 16

.globl SYMBADDTYPEDEF
SYMBADDTYPEDEF:
.type SYMBADDTYPEDEF, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0088:
push 0
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push 0
push dword ptr [ebp+8]
push 13
push 0
push 0
push 0
push 32
call SYMBNEWSYMBOL
add esp, 40
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_008B
mov dword ptr [ebp-4], 0
jmp .Lt_0089
.Lt_008B:
.Lt_008A:
mov eax, dword ptr [ebp-8]
mov ecx, dword ptr [ebp+20]
mov ebx, dword ptr [ebp+24]
mov dword ptr [eax+36], ecx
mov dword ptr [eax+40], ebx
cmp dword ptr [SYMB+98672], 0
jle .Lt_008D
push dword ptr [ebp-8]
call SYMBCHECKFWDREF
add esp, 4
.Lt_008D:
.Lt_008C:
mov ecx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ecx
.Lt_0089:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBADDTYPEDEF, .-SYMBADDTYPEDEF
.balign 16

.globl SYMBADDFWDREF
SYMBADDFWDREF:
.type SYMBADDFWDREF, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_008E:
push 0
push 0
push -2147483648
push 0
push dword ptr [ebp+8]
push 14
push 0
push 0
push 0
push 33
call SYMBNEWSYMBOL
add esp, 40
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0091
mov dword ptr [ebp-4], 0
jmp .Lt_008F
.Lt_0091:
.Lt_0090:
mov eax, dword ptr [ebp-8]
mov dword ptr [eax+52], 0
inc dword ptr [SYMB+98672]
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_008F:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size SYMBADDFWDREF, .-SYMBADDFWDREF
.balign 16
fb_ctor__symbztypedef:
.type fb_ctor__symbztypedef, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__symbztypedef, .-fb_ctor__symbztypedef
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
SYMBREPLACEFORWARDREF:
.type SYMBREPLACEFORWARDREF, @function
push ebp
mov ebp, esp
push ebx
.Lt_006E:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
cmp ebx, 4
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+4]
and ecx, 2097152
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
and ebx, ecx
je .Lt_0071
push dword ptr [ebp+16]
push dword ptr [ebp+12]
mov ecx, dword ptr [ebp+8]
push dword ptr [ecx+28]
mov ecx, dword ptr [ebp+8]
push dword ptr [ecx+60]
call ASTREPLACEFWDREF
add esp, 16
.Lt_0071:
.Lt_0070:
push dword ptr [ebp+12]
mov ecx, dword ptr [ebp+8]
push dword ptr [ecx+24]
call TYPEMERGE
add esp, 8
mov dword ptr [ebp+12], eax
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call SYMBSETTYPE
add esp, 12
.Lt_006F:
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBREPLACEFORWARDREF, .-SYMBREPLACEFORWARDREF
.balign 16
HFIXFORWARDREF:
.type HFIXFORWARDREF, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
.Lt_0072:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-20], ebx
jmp .Lt_0075
.Lt_0077:
mov dword ptr [ebp-16], 18
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebp-12], ebx
jmp .Lt_0074
.Lt_0078:
mov dword ptr [ebp-16], 9
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebp-12], ebx
jmp .Lt_0074
.Lt_0079:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+24]
mov dword ptr [ebp-16], eax
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+28]
mov dword ptr [ebp-12], ebx
jmp .Lt_0074
.Lt_0075:
mov ebx, dword ptr [ebp-20]
add ebx, 4294967287
cmp ebx, 1
ja .Lt_0079
mov ebx, dword ptr [ebp-20]
jmp dword ptr [.LT_007A+ebx*4-36]
.LT_007A:
.int .Lt_0078
.int .Lt_0077
.Lt_0074:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+52]
mov dword ptr [ebp-4], eax
.Lt_007B:
cmp dword ptr [ebp-4], 0
je .Lt_007C
push dword ptr [ebp-12]
push dword ptr [ebp-16]
mov eax, dword ptr [ebp-4]
push dword ptr [eax]
call SYMBREPLACEFORWARDREF
add esp, 12
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-8], ebx
push dword ptr [ebp-4]
lea ebx, [SYMB+98608]
push ebx
call LISTDELNODE
add esp, 8
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ebx
jmp .Lt_007B
.Lt_007C:
push dword ptr [ebp+8]
call SYMBFREESYMBOL
add esp, 4
dec dword ptr [SYMB+98672]
.Lt_0073:
pop ebx
mov esp, ebp
pop ebp
ret
.size HFIXFORWARDREF, .-HFIXFORWARDREF
	#FreeBASIC-1.01.0-source/src/compiler/symb-typedef.bas' compilation took 0.02917188627179712 secs

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
.int fb_ctor__symbztypedef
