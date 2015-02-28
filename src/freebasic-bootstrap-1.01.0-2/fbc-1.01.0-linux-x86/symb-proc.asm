	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/symb-proc.bas' compilation started at 14:16:39 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl SYMBPROCINIT
SYMBPROCINIT:
.type SYMBPROCINIT, @function
.Lt_005F:
mov dword ptr [SYMB+99016], 0
mov dword ptr [SYMB+99020], 0
push 6
push 8
push 8
lea eax, [SYMB+99024]
push eax
call LISTINIT
add esp, 16
mov dword ptr [SYMB+99056], 0
mov dword ptr [SYMB+99060], 0
push 6
push 8
push 8
lea eax, [SYMB+99064]
push eax
call LISTINIT
add esp, 16
.Lt_0060:
ret
.size SYMBPROCINIT, .-SYMBPROCINIT
.balign 16

.globl SYMBPROCEND
SYMBPROCEND:
.type SYMBPROCEND, @function
.Lt_0061:
lea eax, [SYMB+99064]
push eax
call LISTEND
add esp, 4
lea eax, [SYMB+99024]
push eax
call LISTEND
add esp, 4
.Lt_0062:
ret
.size SYMBPROCEND, .-SYMBPROCEND
.balign 16

.globl SYMBPROCALLOCEXT
SYMBPROCALLOCEXT:
.type SYMBPROCALLOCEXT, @function
push ebp
mov ebp, esp
push ebx
.Lt_0063:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+108], 0
jne .Lt_0066
push 76
call XCALLOCATE
add esp, 4
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+108], eax
.Lt_0066:
.Lt_0065:
.Lt_0064:
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBPROCALLOCEXT, .-SYMBPROCALLOCEXT
.balign 16

.globl SYMBPROCFREEEXT
SYMBPROCFREEEXT:
.type SYMBPROCFREEEXT, @function
push ebp
mov ebp, esp
.Lt_0067:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+108], 0
je .Lt_006A
mov eax, dword ptr [ebp+8]
push dword ptr [eax+108]
call free
add esp, 4
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+108], 0
.Lt_006A:
.Lt_0069:
.Lt_0068:
mov esp, ebp
pop ebp
ret
.size SYMBPROCFREEEXT, .-SYMBPROCFREEEXT
.balign 16

.globl SYMBPROCRETURNSONSTACK
SYMBPROCRETURNSONSTACK:
.type SYMBPROCRETURNSONSTACK, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_006B:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 33554432
test ebx, ebx
je .Lt_006E
jmp .Lt_006C
.Lt_006E:
.Lt_006D:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+24]
and eax, 511
cmp eax, 18
jne .Lt_0070
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+84]
and ebx, 511
cmp ebx, 50
sete bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-4], ebx
.Lt_0070:
.Lt_006F:
.Lt_006C:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBPROCRETURNSONSTACK, .-SYMBPROCRETURNSONSTACK
.balign 16

.globl SYMBCALCARGLEN
SYMBCALCARGLEN:
.type SYMBCALCARGLEN, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_0074:
cmp dword ptr [ebp+16], 2
je .Lt_0078
.Lt_0079:
cmp dword ptr [ebp+16], 3
jne .Lt_0077
.Lt_0078:
mov ebx, dword ptr [ENV+236]
mov eax, ebx
sar eax, 31
mov dword ptr [ebp-8], ebx
mov dword ptr [ebp-4], eax
jmp .Lt_0075
.Lt_0077:
.Lt_0076:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call TYPEISTRIVIAL
add esp, 8
test eax, eax
jne .Lt_007B
mov ebx, dword ptr [ENV+236]
mov eax, ebx
sar eax, 31
mov dword ptr [ebp-8], ebx
mov dword ptr [ebp-4], eax
jmp .Lt_0075
.Lt_007B:
.Lt_007A:
push dword ptr [ENV+236]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call SYMBCALCLEN
add esp, 8
push edx
push eax
call HALIGNTOPOW2
add esp, 12
mov dword ptr [ebp-8], eax
mov dword ptr [ebp-4], edx
.Lt_0075:
mov eax, dword ptr [ebp-8]
mov edx, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBCALCARGLEN, .-SYMBCALCARGLEN
.balign 16

.globl SYMBCALCPARAMLEN
SYMBCALCPARAMLEN:
.type SYMBCALCPARAMLEN, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_007C:
cmp dword ptr [ebp+16], 4
jne .Lt_007F
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
jmp .Lt_007E
.Lt_007F:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call SYMBCALCARGLEN
add esp, 12
mov dword ptr [ebp-8], eax
mov dword ptr [ebp-4], edx
.Lt_007E:
.Lt_007D:
mov eax, dword ptr [ebp-8]
mov edx, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size SYMBCALCPARAMLEN, .-SYMBCALCPARAMLEN
.balign 16

.globl SYMBCALCPROCPARAMSLEN
SYMBCALCPROCPARAMSLEN:
.type SYMBCALCPROCPARAMSLEN, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_0080:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+72]
mov dword ptr [ebp-20], ebx
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
.Lt_0082:
cmp dword ptr [ebp-20], 0
je .Lt_0083
mov ebx, dword ptr [ebp-20]
mov ecx, dword ptr [ebx+36]
mov eax, dword ptr [ebx+40]
add dword ptr [ebp-16], ecx
adc dword ptr [ebp-12], eax
mov ecx, dword ptr [ebp-20]
mov eax, dword ptr [ecx+160]
mov dword ptr [ebp-20], eax
jmp .Lt_0082
.Lt_0083:
mov ecx, dword ptr [ebp-16]
mov eax, dword ptr [ebp-12]
mov dword ptr [ebp-8], ecx
mov dword ptr [ebp-4], eax
.Lt_0081:
mov eax, dword ptr [ebp-8]
mov edx, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBCALCPROCPARAMSLEN, .-SYMBCALCPROCPARAMSLEN
.balign 16

.globl SYMBADDPROCPARAM
SYMBADDPROCPARAM:
.type SYMBADDPROCPARAM, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_0084:
mov dword ptr [ebp-4], 0
push dword ptr [ebp+32]
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push 0
push dword ptr [ebp+12]
push 4
push 0
mov eax, dword ptr [ebp+8]
lea ebx, [eax+68]
push ebx
push 0
push 1
call SYMBNEWSYMBOL
add esp, 40
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0087
jmp .Lt_0085
.Lt_0087:
.Lt_0086:
mov eax, dword ptr [ebp+8]
movsx ebx, word ptr [eax+64]
inc ebx
mov eax, dword ptr [ebp+8]
mov word ptr [eax+64], bx
push dword ptr [ebp+28]
push dword ptr [ebp+20]
push dword ptr [ebp+16]
call SYMBCALCPARAMLEN
add esp, 12
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+36], eax
mov dword ptr [ebx+40], edx
mov eax, dword ptr [ebp-8]
mov edx, dword ptr [ebp+28]
mov dword ptr [eax+52], edx
mov edx, dword ptr [ebp-8]
mov dword ptr [edx+60], 0
mov edx, dword ptr [ebp-8]
mov eax, dword ptr [ebp+24]
mov dword ptr [edx+64], eax
cmp dword ptr [ebp+28], 3
jne .Lt_0089
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+24]
call SYMBADDARRAYDESCRIPTORTYPE
add esp, 12
mov edx, dword ptr [ebp-8]
mov dword ptr [edx+68], eax
jmp .Lt_0088
.Lt_0089:
mov eax, dword ptr [ebp-8]
mov dword ptr [eax+68], 0
.Lt_0088:
mov eax, dword ptr [ebp+16]
and eax, 480
je .Lt_008A
mov dword ptr [ebp-12], 22
jmp .Lt_0092
.Lt_008A:
mov eax, dword ptr [ebp+16]
and eax, 31
mov dword ptr [ebp-12], eax
.Lt_0092:
cmp dword ptr [ebp-12], 18
jne .Lt_008D
cmp dword ptr [ebp+28], 1
jne .Lt_008F
mov eax, dword ptr [SYMB+98516]
cmp dword ptr [ebp+20], eax
jne .Lt_0091
mov eax, dword ptr [ebp+20]
movsx edx, word ptr [eax+112]
or edx, 32
mov eax, dword ptr [ebp+20]
mov word ptr [eax+112], dx
.Lt_0091:
.Lt_0090:
.Lt_008F:
.Lt_008E:
.Lt_008D:
.Lt_008C:
mov edx, dword ptr [ebp-8]
mov dword ptr [ebp-4], edx
.Lt_0085:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBADDPROCPARAM, .-SYMBADDPROCPARAM
.balign 16

.globl SYMBMAKEPARAMOPTIONAL
SYMBMAKEPARAMOPTIONAL:
.type SYMBMAKEPARAMOPTIONAL, @function
push ebp
mov ebp, esp
push ebx
.Lt_0093:
cmp dword ptr [ebp+16], 0
jne .Lt_0096
jmp .Lt_0094
.Lt_0096:
.Lt_0095:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
or ebx, 2097152
mov eax, ebx
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx+4], eax
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [ebp+16]
mov dword ptr [eax+60], ebx
mov ebx, dword ptr [ebp+8]
movsx eax, word ptr [ebx+66]
inc eax
mov ebx, dword ptr [ebp+8]
mov word ptr [ebx+66], ax
.Lt_0094:
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBMAKEPARAMOPTIONAL, .-SYMBMAKEPARAMOPTIONAL
.balign 16

.globl SYMBISPROCOVERLOADOF
SYMBISPROCOVERLOADOF:
.type SYMBISPROCOVERLOADOF, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0097:
cmp dword ptr [ebp+12], 0
jne .Lt_009A
mov dword ptr [ebp-4], 0
jmp .Lt_0098
.Lt_009A:
.Lt_0099:
mov eax, dword ptr [ebp+12]
cmp dword ptr [ebp+8], eax
jne .Lt_009C
mov dword ptr [ebp-4], -1
jmp .Lt_0098
.Lt_009C:
.Lt_009B:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 1024
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_009E
mov dword ptr [ebp-4], 0
jmp .Lt_0098
.Lt_009E:
.Lt_009D:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+104]
mov dword ptr [ebp-8], eax
.Lt_009F:
cmp dword ptr [ebp-8], 0
je .Lt_00A0
mov eax, dword ptr [ebp-8]
cmp dword ptr [ebp+8], eax
jne .Lt_00A2
mov dword ptr [ebp-4], -1
jmp .Lt_0098
.Lt_00A2:
.Lt_00A1:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+104]
mov dword ptr [ebp-8], ebx
jmp .Lt_009F
.Lt_00A0:
mov dword ptr [ebp-4], 0
.Lt_0098:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBISPROCOVERLOADOF, .-SYMBISPROCOVERLOADOF
.balign 16

.globl SYMBPROCRECALCREALTYPE
SYMBPROCRECALCREALTYPE:
.type SYMBPROCRECALCREALTYPE, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
.Lt_00A4:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+24]
mov dword ptr [ebp-4], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+28]
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 33554432
test ebx, ebx
je .Lt_00A7
mov ebx, dword ptr [ebp-4]
and ebx, 31
mov eax, dword ptr [ebp-4]
and eax, 480
add eax, 32
or ebx, eax
mov eax, dword ptr [ebp-4]
and eax, 261632
sal eax, 1
or ebx, eax
mov dword ptr [ebp-4], ebx
.Lt_00A7:
.Lt_00A6:
mov ebx, dword ptr [ebp-4]
and ebx, 511
mov dword ptr [ebp-12], ebx
cmp dword ptr [ebp-12], 16
je .Lt_00AB
.Lt_00AC:
cmp dword ptr [ebp-12], 6
jne .Lt_00AA
.Lt_00AB:
mov ebx, dword ptr [ebp-4]
and ebx, 31
mov eax, dword ptr [ebp-4]
and eax, 480
add eax, 32
or ebx, eax
mov eax, dword ptr [ebp-4]
and eax, 261632
sal eax, 1
or ebx, eax
mov dword ptr [ebp-4], ebx
jmp .Lt_00A8
.Lt_00AA:
cmp dword ptr [ebp-12], 18
jne .Lt_00AD
.Lt_00AE:
mov ebx, dword ptr [SYMB+98516]
cmp dword ptr [ebp-8], ebx
jne .Lt_00B0
mov ebx, dword ptr [ebp-8]
movsx eax, word ptr [ebx+112]
or eax, 64
mov ebx, dword ptr [ebp-8]
mov word ptr [ebx+112], ax
jmp .Lt_00AF
.Lt_00B0:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+116]
mov dword ptr [ebp-4], ebx
mov ebx, dword ptr [ebp-4]
and ebx, 31
cmp ebx, 18
je .Lt_00B2
mov dword ptr [ebp-8], 0
.Lt_00B2:
.Lt_00B1:
.Lt_00AF:
.Lt_00AD:
.Lt_00A8:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp-4]
mov dword ptr [ebx+84], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-8]
mov dword ptr [eax+88], ebx
.Lt_00A5:
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBPROCRECALCREALTYPE, .-SYMBPROCRECALCREALTYPE
.balign 16

.globl SYMBADDPROC
SYMBADDPROC:
.type SYMBADDPROC, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
mov dword ptr [ebp-4], 0
.Lt_0172:
mov eax, dword ptr [SYMB+98516]
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
lea ebx, [eax+52]
mov dword ptr [ebp-12], ebx
mov ebx, dword ptr [ebp-8]
lea eax, [ebx+64]
mov dword ptr [ebp-16], eax
or dword ptr [ebp+28], 1
push dword ptr [ebp+36]
push dword ptr [ebp+32]
push dword ptr [ebp+28]
push dword ptr [ebp+24]
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp-16]
push dword ptr [ebp-12]
push dword ptr [ebp-8]
push dword ptr [ebp+8]
call HSETUPPROC
add esp, 44
mov dword ptr [ebp-4], eax
.Lt_0173:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBADDPROC, .-SYMBADDPROC
.balign 16

.globl SYMBADDOPERATOR
SYMBADDOPERATOR:
.type SYMBADDOPERATOR, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0174:
push dword ptr [ebp+8]
call SYMBPROCALLOCEXT
add esp, 4
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+108]
mov eax, dword ptr [ebp+12]
mov dword ptr [ebx+40], eax
push dword ptr [ebp+36]
push dword ptr [ebp+32]
push dword ptr [ebp+28]
push dword ptr [ebp+24]
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push 0
push dword ptr [ebp+8]
call SYMBADDPROC
add esp, 32
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0177
push dword ptr [ebp+8]
call SYMBPROCFREEEXT
add esp, 4
jmp .Lt_0175
.Lt_0177:
.Lt_0176:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0175:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBADDOPERATOR, .-SYMBADDOPERATOR
.balign 16

.globl SYMBADDCTOR
SYMBADDCTOR:
.type SYMBADDCTOR, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_0178:
push dword ptr [ebp+24]
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push 0
push 0
push dword ptr [ebp+12]
push 0
push dword ptr [ebp+8]
call SYMBADDPROC
add esp, 32
mov dword ptr [ebp-4], eax
.Lt_0179:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size SYMBADDCTOR, .-SYMBADDCTOR
.balign 16

.globl SYMBLOOKUPINTERNALLYMANGLEDSUBTYPE
SYMBLOOKUPINTERNALLYMANGLEDSUBTYPE:
.type SYMBLOOKUPINTERNALLYMANGLEDSUBTYPE, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_017A:
cmp dword ptr [PARSER+92], 0
jne .Lt_017D
lea eax, [SYMB+98352]
mov ebx, dword ptr [ebp+16]
mov dword ptr [ebx], eax
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax]
lea eax, [ebx+52]
mov ebx, dword ptr [ebp+20]
mov dword ptr [ebx], eax
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax]
lea eax, [ebx+64]
mov ebx, dword ptr [ebp+24]
mov dword ptr [ebx], eax
mov eax, dword ptr [ebp+12]
or dword ptr [eax], 1
jmp .Lt_017C
.Lt_017D:
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [SYMB+98516]
mov dword ptr [eax], ebx
mov ebx, dword ptr [ebp+20]
mov eax, dword ptr [SYMB+98524]
mov dword ptr [ebx], eax
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax]
lea eax, [ebx+64]
mov ebx, dword ptr [ebp+24]
mov dword ptr [ebx], eax
mov eax, dword ptr [ebp+12]
or dword ptr [eax], 128
.Lt_017C:
push 0
push -1
push dword ptr [ebp+8]
mov eax, dword ptr [ebp+16]
push dword ptr [eax]
call SYMBLOOKUPAT
add esp, 16
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
je .Lt_017F
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-4], ebx
.Lt_017F:
.Lt_017E:
.Lt_017B:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBLOOKUPINTERNALLYMANGLEDSUBTYPE, .-SYMBLOOKUPINTERNALLYMANGLEDSUBTYPE
.balign 16

.globl SYMBADDPROCPTR
SYMBADDPROCPTR:
.type SYMBADDPROCPTR, @function
push ebp
mov ebp, esp
sub esp, 32
push ebx
mov dword ptr [ebp-4], 0
.Lt_0180:
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
or ebx, dword ptr [ebp+20]
mov eax, ebx
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+4], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+12]
mov dword ptr [eax+24], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp+16]
mov dword ptr [ebx+28], eax
push 0
push 7
push offset Lt_0182
push -1
lea eax, [ebp-32]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp+8]
push 20
lea eax, [ebp-32]
push eax
call SYMBMANGLETYPE
add esp, 12
call SYMBMANGLERESETABBREV
push 0
push 2
push offset Lt_0183
push -1
lea eax, [ebp-32]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
push dword ptr [ebp+24]
call fb_HEX_i
add esp, 4
push eax
push -1
lea eax, [ebp-32]
push eax
call fb_StrConcatAssign
add esp, 20
lea eax, [ebp-20]
push eax
lea eax, [ebp-16]
push eax
lea eax, [ebp-12]
push eax
lea eax, [ebp+20]
push eax
push dword ptr [ebp-32]
call SYMBLOOKUPINTERNALLYMANGLEDSUBTYPE
add esp, 20
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
je .Lt_0185
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
lea eax, [ebp-32]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0181
.Lt_0185:
.Lt_0184:
push 5
push dword ptr [ebp+24]
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call SYMBUNIQUEID
push eax
push dword ptr [ebp-32]
push dword ptr [ebp-20]
push dword ptr [ebp-16]
push dword ptr [ebp-12]
push dword ptr [ebp+8]
call HSETUPPROC
add esp, 44
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
je .Lt_0187
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+8]
or ebx, 16384
mov eax, ebx
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+8], eax
.Lt_0187:
.Lt_0186:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
lea eax, [ebp-32]
push eax
call fb_StrDelete
add esp, 4
.Lt_0181:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBADDPROCPTR, .-SYMBADDPROCPTR
.balign 16

.globl SYMBADDPROCPTRFROMFUNCTION
SYMBADDPROCPTRFROMFUNCTION:
.type SYMBADDPROCPTRFROMFUNCTION, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
mov dword ptr [ebp-4], 0
.Lt_0188:
push 0
call SYMBPREADDPROC
add esp, 4
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-8]
mov ecx, dword ptr [eax+92]
mov dword ptr [ebx+92], ecx
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ecx+72]
mov dword ptr [ebp-12], ebx
.Lt_018A:
cmp dword ptr [ebp-12], 0
je .Lt_018B
mov ebx, dword ptr [ebp-12]
push dword ptr [ebx+4]
mov ebx, dword ptr [ebp-12]
push dword ptr [ebx+52]
mov ebx, dword ptr [ebp-12]
push dword ptr [ebx+64]
mov ebx, dword ptr [ebp-12]
push dword ptr [ebx+28]
mov ebx, dword ptr [ebp-12]
push dword ptr [ebx+24]
push 0
push dword ptr [ebp-8]
call SYMBADDPROCPARAM
add esp, 28
mov dword ptr [ebp-16], eax
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax+8]
and ebx, 2048
test ebx, ebx
je .Lt_018D
mov ebx, dword ptr [ebp-16]
mov eax, dword ptr [ebx+8]
or eax, 2048
mov ebx, eax
mov eax, dword ptr [ebp-16]
mov dword ptr [eax+8], ebx
.Lt_018D:
.Lt_018C:
mov ebx, dword ptr [ebp-12]
push dword ptr [ebx+60]
push dword ptr [ebp-16]
push dword ptr [ebp-8]
call SYMBMAKEPARAMOPTIONAL
add esp, 12
mov ebx, dword ptr [ebp-12]
mov eax, dword ptr [ebx+160]
mov dword ptr [ebp-12], eax
jmp .Lt_018A
.Lt_018B:
mov eax, dword ptr [ebp+8]
push dword ptr [eax+80]
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 33554432
push ebx
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+28]
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+24]
push dword ptr [ebp-8]
call SYMBADDPROCPTR
add esp, 20
mov dword ptr [ebp-4], eax
.Lt_0189:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBADDPROCPTRFROMFUNCTION, .-SYMBADDPROCPTRFROMFUNCTION
.balign 16

.globl SYMBPREADDPROC
SYMBPREADDPROC:
.type SYMBPREADDPROC, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_018E:
lea eax, [SYMB+4]
push eax
call LISTNEWNODE
add esp, 4
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov dword ptr [eax], 3
mov eax, dword ptr [ebp-8]
mov dword ptr [eax+4], 0
mov eax, dword ptr [ebp-8]
mov dword ptr [eax+8], 0
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+8]
mov dword ptr [eax+12], ebx
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+16], 0
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+20], 0
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+24], -2147483648
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+28], 0
mov ebx, dword ptr [ebp-8]
mov word ptr [ebx+32], 0
mov ebx, dword ptr [ebp-8]
mov word ptr [ebx+34], 0
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+36], 0
mov dword ptr [ebx+40], 0
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+44], 0
mov dword ptr [ebx+48], 0
mov ebx, dword ptr [ebp-8]
mov word ptr [ebx+64], 0
mov ebx, dword ptr [ebp-8]
mov word ptr [ebx+66], 0
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebp-8]
mov dword ptr [ebx+68], eax
mov eax, dword ptr [ebp-8]
mov dword ptr [eax+72], 0
mov eax, dword ptr [ebp-8]
mov dword ptr [eax+76], 0
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ENV+216]
mov dword ptr [eax+80], ebx
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+84], -2147483648
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+88], 0
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+92], 0
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+96], 0
mov ebx, dword ptr [ebp-8]
mov word ptr [ebx+100], 0
mov ebx, dword ptr [ebp-8]
mov word ptr [ebx+102], 0
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+104], 0
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+108], 0
mov ebx, dword ptr [SYMB+98516]
lea eax, [ebx+52]
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+148], eax
mov eax, dword ptr [SYMB+98516]
lea ebx, [eax+64]
mov eax, dword ptr [ebp-8]
mov dword ptr [eax+128], ebx
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+132], 0
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+136], 0
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+140], 0
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+144], 0
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+152], 0
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+156], 0
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+160], 0
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ebx
.Lt_018F:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBPREADDPROC, .-SYMBPREADDPROC
.balign 16

.globl _Z21SYMBGETREALPARAMDTYPEiP8FBSYMBOLRiRS0_
_Z21SYMBGETREALPARAMDTYPEiP8FBSYMBOLRiRS0_:
.type _Z21SYMBGETREALPARAMDTYPEiP8FBSYMBOLRiRS0_, @function
push ebp
mov ebp, esp
push ebx
.Lt_0190:
cmp dword ptr [ebp+8], 1
jne .Lt_0193
.Lt_0194:
mov eax, dword ptr [ebp+20]
push dword ptr [eax]
mov eax, dword ptr [ebp+16]
push dword ptr [eax]
call TYPEISTRIVIAL
add esp, 8
test eax, eax
jne .Lt_0196
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax]
and ebx, 31
mov eax, dword ptr [ebp+16]
mov ecx, dword ptr [eax]
and ecx, 480
add ecx, 32
or ebx, ecx
mov ecx, dword ptr [ebp+16]
mov eax, dword ptr [ecx]
and eax, 261632
sal eax, 1
or ebx, eax
mov eax, dword ptr [ebp+16]
mov dword ptr [eax], ebx
.Lt_0196:
.Lt_0195:
jmp .Lt_0192
.Lt_0193:
cmp dword ptr [ebp+8], 2
jne .Lt_0197
.Lt_0198:
mov ebx, dword ptr [ebp+16]
mov eax, dword ptr [ebx]
and eax, 31
mov ebx, dword ptr [ebp+16]
mov ecx, dword ptr [ebx]
and ecx, 480
add ecx, 32
or eax, ecx
mov ecx, dword ptr [ebp+16]
mov ebx, dword ptr [ecx]
and ebx, 261632
sal ebx, 1
or eax, ebx
mov ebx, dword ptr [ebp+16]
mov dword ptr [ebx], eax
jmp .Lt_0192
.Lt_0197:
cmp dword ptr [ebp+8], 3
jne .Lt_0199
.Lt_019A:
mov eax, dword ptr [ebp+16]
mov dword ptr [eax], 50
mov eax, dword ptr [ebp+20]
mov ebx, dword ptr [ebp+12]
mov dword ptr [eax], ebx
.Lt_0199:
.Lt_0192:
.Lt_0191:
pop ebx
mov esp, ebp
pop ebp
ret
.size _Z21SYMBGETREALPARAMDTYPEiP8FBSYMBOLRiRS0_, .-_Z21SYMBGETREALPARAMDTYPEiP8FBSYMBOLRiRS0_
.balign 16

.globl _Z21SYMBGETREALPARAMDTYPEP8FBSYMBOLRiRS0_
_Z21SYMBGETREALPARAMDTYPEP8FBSYMBOLRiRS0_:
.type _Z21SYMBGETREALPARAMDTYPEP8FBSYMBOLRiRS0_, @function
push ebp
mov ebp, esp
push ebx
.Lt_019B:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+24]
and ebx, 511
mov eax, dword ptr [ebp+12]
mov dword ptr [eax], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp+16]
mov ecx, dword ptr [ebx+28]
mov dword ptr [eax], ecx
push dword ptr [ebp+16]
push dword ptr [ebp+12]
mov ecx, dword ptr [ebp+8]
push dword ptr [ecx+68]
mov ecx, dword ptr [ebp+8]
push dword ptr [ecx+52]
call _Z21SYMBGETREALPARAMDTYPEiP8FBSYMBOLRiRS0_
add esp, 16
.Lt_019C:
pop ebx
mov esp, ebp
pop ebp
ret
.size _Z21SYMBGETREALPARAMDTYPEP8FBSYMBOLRiRS0_, .-_Z21SYMBGETREALPARAMDTYPEP8FBSYMBOLRiRS0_
.balign 16

.globl SYMBADDVARFORPARAM
SYMBADDVARFORPARAM:
.type SYMBADDVARFORPARAM, @function
push ebp
mov ebp, esp
sub esp, 72
push ebx
mov dword ptr [ebp-4], 0
.Lt_019D:
lea eax, [ebp-20]
mov dword ptr [ebp-52], eax
lea eax, [ebp-20]
lea ebx, [ebp-52]
add ebx, 4
mov dword ptr [ebx], eax
lea eax, [ebp-52]
add eax, 8
mov dword ptr [eax], 16
lea eax, [ebp-52]
add eax, 12
mov dword ptr [eax], 16
lea eax, [ebp-52]
add eax, 16
mov dword ptr [eax], 1
lea eax, [ebp-52]
add eax, 20
mov dword ptr [eax], 1
lea eax, [ebp-52]
add eax, 24
mov dword ptr [eax], 0
lea eax, [ebp-52]
add eax, 28
mov dword ptr [eax], 0
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+24]
mov dword ptr [ebp-64], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+52]
mov dword ptr [ebp-72], eax
jmp .Lt_01A1
.Lt_01A3:
mov dword ptr [ebp-60], 131072
mov eax, dword ptr [ebp+8]
push dword ptr [eax+28]
push dword ptr [ebp-64]
call TYPEISTRIVIAL
add esp, 8
test eax, eax
jne .Lt_01A5
mov dword ptr [ebp-60], 262144
.Lt_01A5:
.Lt_01A4:
jmp .Lt_01A0
.Lt_01A6:
mov dword ptr [ebp-60], 262144
jmp .Lt_01A0
.Lt_01A7:
mov dword ptr [ebp-60], 65536
jmp .Lt_01A0
.Lt_01A8:
jmp .Lt_019E
jmp .Lt_01A0
.Lt_01A1:
mov eax, dword ptr [ebp-72]
add eax, 4294967295
cmp eax, 2
ja .Lt_01A8
mov eax, dword ptr [ebp-72]
jmp dword ptr [.LT_01A9+eax*4-4]
.LT_01A9:
.int .Lt_01A3
.int .Lt_01A6
.int .Lt_01A7
.Lt_01A0:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 2048
test ebx, ebx
je .Lt_01AB
or dword ptr [ebp-60], 2048
.Lt_01AB:
.Lt_01AA:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 268435456
test eax, eax
je .Lt_01AD
or dword ptr [ebp-60], 268435456
.Lt_01AD:
.Lt_01AC:
push 0
push dword ptr [ebp-60]
lea eax, [ebp-52]
push eax
mov eax, dword ptr [ebp+8]
push dword ptr [eax+64]
push 0
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax+28]
push dword ptr [ebp-64]
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax+12]
call SYMBADDVAR
add esp, 40
mov dword ptr [ebp-56], eax
cmp dword ptr [ebp-56], 0
jne .Lt_01AF
jmp .Lt_019E
.Lt_01AF:
.Lt_01AE:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-56]
mov ecx, dword ptr [eax+68]
mov dword ptr [ebx+84], ecx
mov ecx, dword ptr [ebp-56]
mov ebx, dword ptr [ecx+8]
or ebx, 8
mov ecx, ebx
mov ebx, dword ptr [ebp-56]
mov dword ptr [ebx+8], ecx
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ecx+8]
and ebx, 2048
test ebx, ebx
je .Lt_01B1
mov ebx, dword ptr [ebp-56]
mov ecx, dword ptr [ebx+8]
or ecx, 2048
mov ebx, ecx
mov ecx, dword ptr [ebp-56]
mov dword ptr [ecx+8], ebx
.Lt_01B1:
.Lt_01B0:
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebx+8]
and ecx, 524288
je .Lt_01B3
mov ecx, dword ptr [ebp-56]
mov ebx, dword ptr [ecx+8]
or ebx, 524288
mov ecx, ebx
mov ebx, dword ptr [ebp-56]
mov dword ptr [ebx+8], ecx
.Lt_01B3:
.Lt_01B2:
mov ecx, dword ptr [ebp-56]
mov dword ptr [ebp-4], ecx
.Lt_019E:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBADDVARFORPARAM, .-SYMBADDVARFORPARAM
.balign 16

.globl SYMBADDPROCRESULTPARAM
SYMBADDPROCRESULTPARAM:
.type SYMBADDPROCRESULTPARAM, @function
push ebp
mov ebp, esp
sub esp, 56
push ebx
mov dword ptr [ebp-4], 0
.Lt_01B4:
lea eax, [ebp-20]
mov dword ptr [ebp-52], eax
lea eax, [ebp-20]
lea ebx, [ebp-52]
add ebx, 4
mov dword ptr [ebx], eax
lea eax, [ebp-52]
add eax, 8
mov dword ptr [eax], 16
lea eax, [ebp-52]
add eax, 12
mov dword ptr [eax], 16
lea eax, [ebp-52]
add eax, 16
mov dword ptr [eax], 1
lea eax, [ebp-52]
add eax, 20
mov dword ptr [eax], 1
lea eax, [ebp-52]
add eax, 24
mov dword ptr [eax], 0
lea eax, [ebp-52]
add eax, 28
mov dword ptr [eax], 0
push dword ptr [ebp+8]
call SYMBPROCRETURNSONSTACK
add esp, 4
test eax, eax
jne .Lt_01B8
mov dword ptr [ebp-4], 0
jmp .Lt_01B5
.Lt_01B8:
.Lt_01B7:
push 1
push 262144
lea eax, [ebp-52]
push eax
push 0
push 0
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax+28]
push 18
push 0
call SYMBUNIQUEID
push eax
call SYMBADDVAR
add esp, 40
mov dword ptr [ebp-56], eax
push dword ptr [ebp+8]
call SYMBPROCALLOCEXT
add esp, 4
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+108]
mov eax, dword ptr [ebp-56]
mov dword ptr [ebx], eax
mov eax, dword ptr [ebp-56]
mov ebx, dword ptr [eax+8]
or ebx, 8
mov eax, ebx
mov ebx, dword ptr [ebp-56]
mov dword ptr [ebx+8], eax
mov eax, dword ptr [ebp-56]
mov ebx, dword ptr [eax+8]
or ebx, 16
mov eax, ebx
mov ebx, dword ptr [ebp-56]
mov dword ptr [ebx+8], eax
mov eax, dword ptr [ebp-56]
mov dword ptr [ebp-4], eax
.Lt_01B5:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBADDPROCRESULTPARAM, .-SYMBADDPROCRESULTPARAM
.balign 16

.globl SYMBADDPROCRESULT
SYMBADDPROCRESULT:
.type SYMBADDPROCRESULT, @function
push ebp
mov ebp, esp
sub esp, 64
push ebx
mov dword ptr [ebp-4], 0
.Lt_01B9:
lea eax, [ebp-20]
mov dword ptr [ebp-52], eax
lea eax, [ebp-20]
lea ebx, [ebp-52]
add ebx, 4
mov dword ptr [ebx], eax
lea eax, [ebp-52]
add eax, 8
mov dword ptr [eax], 16
lea eax, [ebp-52]
add eax, 12
mov dword ptr [eax], 16
lea eax, [ebp-52]
add eax, 16
mov dword ptr [eax], 1
lea eax, [ebp-52]
add eax, 20
mov dword ptr [eax], 1
lea eax, [ebp-52]
add eax, 24
mov dword ptr [eax], 0
lea eax, [ebp-52]
add eax, 28
mov dword ptr [eax], 0
push dword ptr [ebp+8]
call SYMBPROCRETURNSONSTACK
add esp, 4
test eax, eax
je .Lt_01BD
push dword ptr [ebp+8]
call SYMBGETPROCRESULT
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_01BA
.Lt_01BD:
.Lt_01BC:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+24]
mov dword ptr [ebp-60], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 33554432
test eax, eax
je .Lt_01BF
mov eax, dword ptr [ebp-60]
and eax, 31
mov ebx, dword ptr [ebp-60]
and ebx, 480
add ebx, 32
or eax, ebx
mov ebx, dword ptr [ebp-60]
and ebx, 261632
sal ebx, 1
or eax, ebx
mov dword ptr [ebp-60], eax
.Lt_01BF:
.Lt_01BE:
push 1
push 16777216
lea eax, [ebp-52]
push eax
push 0
push 0
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax+28]
push dword ptr [ebp-60]
push 0
push offset Lt_01C0
call SYMBADDVAR
add esp, 40
mov dword ptr [ebp-56], eax
push dword ptr [ebp+8]
call SYMBPROCALLOCEXT
add esp, 4
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+108]
mov eax, dword ptr [ebp-56]
mov dword ptr [ebx], eax
push -1
push dword ptr [ebp-56]
call ASTNEWDECL
add esp, 8
push eax
call ASTADD
add esp, 4
mov eax, dword ptr [ebp-56]
mov ebx, dword ptr [eax+8]
or ebx, 8
mov eax, ebx
mov ebx, dword ptr [ebp-56]
mov dword ptr [ebx+8], eax
mov eax, dword ptr [ebp-56]
mov ebx, dword ptr [eax+8]
or ebx, 16
mov eax, ebx
mov ebx, dword ptr [ebp-56]
mov dword ptr [ebx+8], eax
mov eax, dword ptr [ebp-56]
mov dword ptr [ebp-4], eax
.Lt_01BA:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBADDPROCRESULT, .-SYMBADDPROCRESULT
.balign 16

.globl SYMBADDPROCINSTANCEPTR
SYMBADDPROCINSTANCEPTR:
.type SYMBADDPROCINSTANCEPTR, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_01C1:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-8], ebx
cmp dword ptr [ebp-8], 10
jne .Lt_01C5
.Lt_01C6:
mov dword ptr [ebp-4], 18
jmp .Lt_01C3
.Lt_01C5:
cmp dword ptr [ebp-8], 11
jne .Lt_01C7
.Lt_01C8:
.Lt_01C7:
.Lt_01C3:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 1048576
test eax, eax
je .Lt_01CA
or dword ptr [ebp-4], 512
.Lt_01CA:
.Lt_01C9:
push 2048
push 2
push 0
push dword ptr [ebp+8]
push dword ptr [ebp-4]
push offset Lt_0021
push dword ptr [ebp+12]
call SYMBADDPROCPARAM
add esp, 28
.Lt_01C2:
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBADDPROCINSTANCEPTR, .-SYMBADDPROCINSTANCEPTR
.balign 16

.globl SYMBFINDOVERLOADPROC
SYMBFINDOVERLOADPROC:
.type SYMBFINDOVERLOADPROC, @function
push ebp
mov ebp, esp
sub esp, 40
push ebx
mov dword ptr [ebp-4], 0
.Lt_01CB:
cmp dword ptr [ebp+8], 0
sete al
shr eax, 1
sbb eax, eax
cmp dword ptr [ebp+12], 0
sete bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
je .Lt_01CE
mov dword ptr [ebp-4], 0
jmp .Lt_01CC
.Lt_01CE:
.Lt_01CD:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx]
cmp eax, 3
setne al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp+12]
mov ecx, dword ptr [ebx]
cmp ecx, 3
setne cl
shr ecx, 1
sbb ecx, ecx
or eax, ecx
je .Lt_01D0
mov dword ptr [ebp-4], 0
jmp .Lt_01CC
.Lt_01D0:
.Lt_01CF:
mov ecx, dword ptr [ebp+12]
movsx eax, word ptr [ecx+64]
mov dword ptr [ebp-32], eax
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax+4]
and ecx, 2048
test ecx, ecx
je .Lt_01D2
dec dword ptr [ebp-32]
.Lt_01D2:
.Lt_01D1:
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ecx+4]
and eax, 32768
test eax, eax
setne al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-40], eax
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-8], eax
.Lt_01D3:
mov eax, dword ptr [ebp-8]
movsx ecx, word ptr [eax+64]
mov dword ptr [ebp-28], ecx
mov ecx, dword ptr [ebp-8]
mov eax, dword ptr [ecx+4]
and eax, 2048
test eax, eax
je .Lt_01D7
dec dword ptr [ebp-28]
.Lt_01D7:
.Lt_01D6:
cmp dword ptr [ebp-40], 0
je .Lt_01D9
mov eax, dword ptr [ebp+16]
and eax, 1
test eax, eax
je .Lt_01DB
mov eax, dword ptr [ebp-8]
mov ecx, dword ptr [eax+24]
and ecx, 511
test ecx, ecx
jne .Lt_01DD
mov dword ptr [ebp-28], -1
.Lt_01DD:
.Lt_01DC:
jmp .Lt_01DA
.Lt_01DB:
mov ecx, dword ptr [ebp-8]
mov eax, dword ptr [ecx+24]
and eax, 511
test eax, eax
je .Lt_01DF
mov dword ptr [ebp-28], -1
.Lt_01DF:
.Lt_01DE:
.Lt_01DA:
.Lt_01D9:
.Lt_01D8:
mov eax, dword ptr [ebp-28]
cmp dword ptr [ebp-32], eax
jne .Lt_01E1
cmp dword ptr [ebp-32], 0
jne .Lt_01E3
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
jmp .Lt_01CC
.Lt_01E3:
.Lt_01E2:
mov eax, dword ptr [ebp-8]
mov ecx, dword ptr [eax+76]
mov dword ptr [ebp-12], ecx
mov ecx, dword ptr [ebp+12]
mov eax, dword ptr [ecx+76]
mov dword ptr [ebp-16], eax
.Lt_01E4:
push dword ptr [ebp-12]
push dword ptr [ebp-16]
call HCANOVERLOADBYDESC
add esp, 8
test eax, eax
je .Lt_01E8
jmp .Lt_01E5
.Lt_01E8:
.Lt_01E7:
mov eax, dword ptr [ebp-16]
mov ecx, dword ptr [ebp-12]
mov ebx, dword ptr [ecx+24]
cmp dword ptr [eax+24], ebx
je .Lt_01EA
jmp .Lt_01E5
.Lt_01EA:
.Lt_01E9:
mov ebx, dword ptr [ebp-16]
mov eax, dword ptr [ebp-12]
mov ecx, dword ptr [eax+28]
cmp dword ptr [ebx+28], ecx
je .Lt_01EC
jmp .Lt_01E5
.Lt_01EC:
.Lt_01EB:
mov ecx, dword ptr [ebp-16]
mov ebx, dword ptr [ecx+156]
mov dword ptr [ebp-16], ebx
mov ebx, dword ptr [ebp-12]
mov ecx, dword ptr [ebx+156]
mov dword ptr [ebp-12], ecx
dec dword ptr [ebp-28]
.Lt_01E6:
cmp dword ptr [ebp-28], 0
jg .Lt_01E4
.Lt_01E5:
cmp dword ptr [ebp-28], 0
jne .Lt_01EE
mov ecx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ecx
jmp .Lt_01CC
.Lt_01EE:
.Lt_01ED:
.Lt_01E1:
.Lt_01E0:
mov ecx, dword ptr [ebp-8]
mov ebx, dword ptr [ecx+104]
mov dword ptr [ebp-8], ebx
.Lt_01D5:
cmp dword ptr [ebp-8], 0
jne .Lt_01D3
.Lt_01D4:
mov dword ptr [ebp-4], 0
.Lt_01CC:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBFINDOVERLOADPROC, .-SYMBFINDOVERLOADPROC
.balign 16

.globl SYMBFINDOPOVLPROC
SYMBFINDOPOVLPROC:
.type SYMBFINDOPOVLPROC, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_01F4:
cmp dword ptr [ebp+8], 27
je .Lt_01F7
push 0
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call SYMBFINDOVERLOADPROC
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_01F5
.Lt_01F7:
.Lt_01F6:
mov eax, dword ptr [ebp+12]
mov dword ptr [ebp-8], eax
.Lt_01F8:
cmp dword ptr [ebp-8], 0
je .Lt_01F9
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [ebp-8]
mov ecx, dword ptr [ebx+24]
cmp dword ptr [eax+24], ecx
jne .Lt_01FB
mov ecx, dword ptr [ebp+16]
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+28]
cmp dword ptr [ecx+28], ebx
jne .Lt_01FD
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ebx
jmp .Lt_01F5
.Lt_01FD:
.Lt_01FC:
.Lt_01FB:
.Lt_01FA:
mov ebx, dword ptr [ebp-8]
mov ecx, dword ptr [ebx+104]
mov dword ptr [ebp-8], ecx
jmp .Lt_01F8
.Lt_01F9:
mov dword ptr [ebp-4], 0
.Lt_01F5:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBFINDOPOVLPROC, .-SYMBFINDOPOVLPROC
.balign 16

.globl SYMBFINDCTORPROC
SYMBFINDCTORPROC:
.type SYMBFINDCTORPROC, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_01FE:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 8192
test ebx, ebx
je .Lt_0201
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebp-4], ebx
jmp .Lt_01FF
jmp .Lt_0200
.Lt_0201:
push 0
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call SYMBFINDOVERLOADPROC
add esp, 12
mov dword ptr [ebp-4], eax
.Lt_0200:
.Lt_01FF:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBFINDCTORPROC, .-SYMBFINDCTORPROC
.balign 16

.globl SYMBFINDCLOSESTOVLPROC
SYMBFINDCLOSESTOVLPROC:
.type SYMBFINDCLOSESTOVLPROC, @function
push ebp
mov ebp, esp
sub esp, 64
push ebx
mov dword ptr [ebp-4], 0
.Lt_02C8:
mov eax, dword ptr [ebp+20]
mov dword ptr [eax], 0
cmp dword ptr [ebp+8], 0
jne .Lt_02CB
mov dword ptr [ebp-4], 0
jmp .Lt_02C9
.Lt_02CB:
.Lt_02CA:
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-36], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 32768
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-48], ebx
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebp-8], ebx
.Lt_02CC:
mov ebx, dword ptr [ebp-8]
movsx eax, word ptr [ebx+64]
mov dword ptr [ebp-52], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+4]
and ebx, 2048
test ebx, ebx
je .Lt_02D0
dec dword ptr [ebp-52]
.Lt_02D0:
.Lt_02CF:
cmp dword ptr [ebp-48], 0
je .Lt_02D2
mov ebx, dword ptr [ebp+24]
and ebx, 1
test ebx, ebx
je .Lt_02D4
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx+24]
and eax, 511
test eax, eax
jne .Lt_02D6
mov dword ptr [ebp-52], -1
.Lt_02D6:
.Lt_02D5:
jmp .Lt_02D3
.Lt_02D4:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+24]
and ebx, 511
test ebx, ebx
je .Lt_02D8
mov dword ptr [ebp-52], -1
.Lt_02D8:
.Lt_02D7:
.Lt_02D3:
.Lt_02D2:
.Lt_02D1:
mov ebx, dword ptr [ebp-52]
cmp dword ptr [ebp+12], ebx
jg .Lt_02DA
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx+72]
mov dword ptr [ebp-16], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+4]
and ebx, 2048
test ebx, ebx
je .Lt_02DC
mov ebx, dword ptr [ebp-16]
mov eax, dword ptr [ebx+160]
mov dword ptr [ebp-16], eax
.Lt_02DC:
.Lt_02DB:
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-32], 0
mov eax, dword ptr [ebp+16]
mov dword ptr [ebp-44], eax
mov dword ptr [ebp-60], 0
mov eax, dword ptr [ebp+12]
dec eax
mov dword ptr [ebp-64], eax
jmp .Lt_02DE
.Lt_02E1:
lea eax, [ebp-40]
push eax
mov eax, dword ptr [ebp-44]
push dword ptr [eax+4]
mov eax, dword ptr [ebp-44]
push dword ptr [eax]
push dword ptr [ebp-16]
push dword ptr [ebp-8]
call HCHECKOVLPARAM
add esp, 20
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 0
jne .Lt_02E3
mov dword ptr [ebp-24], 0
jmp .Lt_02E0
.Lt_02E3:
.Lt_02E2:
mov eax, dword ptr [ebp+24]
and eax, 2
je .Lt_02E5
cmp dword ptr [ebp-20], 48
jne .Lt_02E7
inc dword ptr [ebp-32]
.Lt_02E7:
.Lt_02E6:
.Lt_02E5:
.Lt_02E4:
mov eax, dword ptr [ebp-20]
add dword ptr [ebp-24], eax
mov eax, dword ptr [ebp-16]
mov ebx, dword ptr [eax+160]
mov dword ptr [ebp-16], ebx
mov ebx, dword ptr [ebp-44]
mov eax, dword ptr [ebx+8]
mov dword ptr [ebp-44], eax
.Lt_02DF:
inc dword ptr [ebp-60]
.Lt_02DE:
mov eax, dword ptr [ebp-64]
cmp dword ptr [ebp-60], eax
jle .Lt_02E1
.Lt_02E0:
mov eax, dword ptr [ebp+12]
test eax, eax
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp-24]
test ebx, ebx
setg bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
mov dword ptr [ebp-56], eax
mov eax, dword ptr [ebp+12]
mov dword ptr [ebp-60], eax
mov eax, dword ptr [ebp-52]
dec eax
mov dword ptr [ebp-64], eax
jmp .Lt_02E9
.Lt_02EC:
mov eax, dword ptr [ebp-16]
mov ebx, dword ptr [eax+4]
and ebx, 2097152
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_02EE
mov dword ptr [ebp-56], 0
jmp .Lt_02EB
.Lt_02EE:
.Lt_02ED:
mov ebx, dword ptr [ebp-16]
mov eax, dword ptr [ebx+160]
mov dword ptr [ebp-16], eax
.Lt_02EA:
inc dword ptr [ebp-60]
.Lt_02E9:
mov eax, dword ptr [ebp-64]
cmp dword ptr [ebp-60], eax
jle .Lt_02EC
.Lt_02EB:
cmp dword ptr [ebp-56], 0
je .Lt_02F0
mov eax, dword ptr [ebp-36]
test eax, eax
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp-24]
cmp ebx, dword ptr [ebp-28]
setg bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
je .Lt_02F2
mov dword ptr [ebp-60], -1
mov ebx, dword ptr [ebp+24]
and ebx, 2
je .Lt_02F4
mov ebx, dword ptr [ebp-32]
test ebx, ebx
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp-40]
test eax, eax
sete al
shr eax, 1
sbb eax, eax
and ebx, eax
je .Lt_02F6
mov dword ptr [ebp-60], 0
.Lt_02F6:
.Lt_02F5:
.Lt_02F4:
.Lt_02F3:
cmp dword ptr [ebp-60], 0
je .Lt_02F8
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp-24]
mov dword ptr [ebp-28], eax
mov dword ptr [ebp-36], 1
.Lt_02F8:
.Lt_02F7:
jmp .Lt_02F1
.Lt_02F2:
mov eax, dword ptr [ebp-28]
cmp dword ptr [ebp-24], eax
jne .Lt_02F9
inc dword ptr [ebp-36]
.Lt_02F9:
.Lt_02F1:
.Lt_02F0:
.Lt_02EF:
.Lt_02DA:
.Lt_02D9:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+104]
mov dword ptr [ebp-8], ebx
.Lt_02CE:
cmp dword ptr [ebp-8], 0
jne .Lt_02CC
.Lt_02CD:
cmp dword ptr [ebp-36], 1
jle .Lt_02FB
mov ebx, dword ptr [ebp+20]
mov dword ptr [ebx], 97
mov dword ptr [ebp-4], 0
jmp .Lt_02FA
.Lt_02FB:
mov ebx, dword ptr [ebp-12]
mov dword ptr [ebp-4], ebx
.Lt_02FA:
.Lt_02C9:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBFINDCLOSESTOVLPROC, .-SYMBFINDCLOSESTOVLPROC
.balign 16

.globl SYMBFINDBOPOVLPROC
SYMBFINDBOPOVLPROC:
.type SYMBFINDBOPOVLPROC, @function
push ebp
mov ebp, esp
sub esp, 40
push ebx
mov dword ptr [ebp-4], 0
.Lt_0304:
mov eax, dword ptr [ebp+20]
mov dword ptr [eax], 0
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 511
mov dword ptr [ebp-36], ebx
cmp dword ptr [ebp-36], 18
je .Lt_0309
.Lt_030A:
cmp dword ptr [ebp-36], 9
jne .Lt_0308
.Lt_0309:
jmp .Lt_0306
.Lt_0308:
mov ebx, dword ptr [ebp+16]
mov eax, dword ptr [ebx+4]
and eax, 511
mov dword ptr [ebp-40], eax
cmp dword ptr [ebp-40], 18
je .Lt_030F
.Lt_0310:
cmp dword ptr [ebp-40], 9
jne .Lt_030E
.Lt_030F:
jmp .Lt_030C
.Lt_030E:
mov dword ptr [ebp-4], 0
jmp .Lt_0305
.Lt_0311:
.Lt_030C:
.Lt_030B:
.Lt_0306:
mov eax, dword ptr [ebp+12]
mov dword ptr [ebp-16], eax
mov dword ptr [ebp-12], -1
lea eax, [ebp-28]
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp+16]
mov dword ptr [ebp-28], eax
mov dword ptr [ebp-24], -1
mov dword ptr [ebp-20], 0
push 2
push dword ptr [ebp+20]
lea eax, [ebp-16]
push eax
push 2
mov eax, dword ptr [ebp+8]
sal eax, 2
mov ebx, offset SYMB
add ebx, eax
push dword ptr [ebx+99096]
call SYMBFINDCLOSESTOVLPROC
add esp, 20
mov dword ptr [ebp-32], eax
cmp dword ptr [ebp-32], 0
jne .Lt_0313
mov eax, dword ptr [ebp+20]
cmp dword ptr [eax], 0
je .Lt_0315
push 0
push -1
mov eax, dword ptr [ebp+20]
push dword ptr [eax]
call ERRREPORT
add esp, 12
.Lt_0315:
.Lt_0314:
.Lt_0313:
.Lt_0312:
mov eax, dword ptr [ebp-32]
mov dword ptr [ebp-4], eax
.Lt_0305:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBFINDBOPOVLPROC, .-SYMBFINDBOPOVLPROC
.balign 16

.globl SYMBFINDSELFBOPOVLPROC
SYMBFINDSELFBOPOVLPROC:
.type SYMBFINDSELFBOPOVLPROC, @function
push ebp
mov ebp, esp
sub esp, 32
push ebx
mov dword ptr [ebp-4], 0
.Lt_0316:
mov eax, dword ptr [ebp+20]
mov dword ptr [eax], 0
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 511
mov dword ptr [ebp-28], ebx
cmp dword ptr [ebp-28], 18
jne .Lt_031A
.Lt_031B:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+8]
mov dword ptr [ebp-32], eax
mov eax, dword ptr [ebp-32]
cmp dword ptr [eax+124], 0
jne .Lt_031D
mov dword ptr [ebp-4], 0
jmp .Lt_0317
.Lt_031D:
.Lt_031C:
mov eax, dword ptr [ebp-32]
mov ebx, dword ptr [ebp+8]
sal ebx, 2
mov ecx, dword ptr [eax+124]
add ecx, ebx
mov ebx, dword ptr [ecx+28]
mov dword ptr [ebp-24], ebx
jmp .Lt_0318
.Lt_031A:
mov dword ptr [ebp-4], 0
jmp .Lt_0317
.Lt_031E:
.Lt_0318:
cmp dword ptr [ebp-24], 0
jne .Lt_0320
mov dword ptr [ebp-4], 0
jmp .Lt_0317
.Lt_0320:
.Lt_031F:
mov ebx, dword ptr [ebp+16]
mov dword ptr [ebp-16], ebx
mov dword ptr [ebp-12], -1
mov dword ptr [ebp-8], 0
push 0
push dword ptr [ebp+20]
lea ebx, [ebp-16]
push ebx
push 1
push dword ptr [ebp-24]
call SYMBFINDCLOSESTOVLPROC
add esp, 20
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 0
jne .Lt_0322
mov eax, dword ptr [ebp+20]
cmp dword ptr [eax], 0
je .Lt_0324
push 0
push -1
mov eax, dword ptr [ebp+20]
push dword ptr [eax]
call ERRREPORT
add esp, 12
.Lt_0324:
.Lt_0323:
jmp .Lt_0321
.Lt_0322:
push dword ptr [ebp-20]
call SYMBCHECKACCESS
add esp, 4
test eax, eax
jne .Lt_0326
mov eax, dword ptr [ebp+20]
mov dword ptr [eax], 201
push 0
push 1
push 0
push dword ptr [ebp-20]
call SYMBGETFULLPROCNAME
add esp, 4
push eax
push 201
call ERRREPORTEX
add esp, 20
mov dword ptr [ebp-20], 0
.Lt_0326:
.Lt_0325:
.Lt_0321:
mov eax, dword ptr [ebp-20]
mov dword ptr [ebp-4], eax
.Lt_0317:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBFINDSELFBOPOVLPROC, .-SYMBFINDSELFBOPOVLPROC
.balign 16

.globl SYMBFINDUOPOVLPROC
SYMBFINDUOPOVLPROC:
.type SYMBFINDUOPOVLPROC, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
mov dword ptr [ebp-4], 0
.Lt_0327:
mov eax, dword ptr [ebp+16]
mov dword ptr [eax], 0
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 511
mov dword ptr [ebp-24], ebx
cmp dword ptr [ebp-24], 18
je .Lt_032C
.Lt_032D:
cmp dword ptr [ebp-24], 9
jne .Lt_032B
.Lt_032C:
jmp .Lt_0329
.Lt_032B:
mov dword ptr [ebp-4], 0
jmp .Lt_0328
.Lt_032E:
.Lt_0329:
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebp-16], ebx
mov dword ptr [ebp-12], -1
mov dword ptr [ebp-8], 0
push 0
push dword ptr [ebp+16]
lea ebx, [ebp-16]
push ebx
push 1
mov ebx, dword ptr [ebp+8]
sal ebx, 2
mov eax, offset SYMB
add eax, ebx
push dword ptr [eax+99096]
call SYMBFINDCLOSESTOVLPROC
add esp, 20
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 0
jne .Lt_0330
mov eax, dword ptr [ebp+16]
cmp dword ptr [eax], 0
je .Lt_0332
push 0
push -1
mov eax, dword ptr [ebp+16]
push dword ptr [eax]
call ERRREPORT
add esp, 12
.Lt_0332:
.Lt_0331:
.Lt_0330:
.Lt_032F:
mov eax, dword ptr [ebp-20]
mov dword ptr [ebp-4], eax
.Lt_0328:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBFINDUOPOVLPROC, .-SYMBFINDUOPOVLPROC
.balign 16

.globl SYMBFINDSELFUOPOVLPROC
SYMBFINDSELFUOPOVLPROC:
.type SYMBFINDSELFUOPOVLPROC, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
mov dword ptr [ebp-4], 0
.Lt_0333:
mov eax, dword ptr [ebp+16]
mov dword ptr [eax], 0
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 511
mov dword ptr [ebp-16], ebx
cmp dword ptr [ebp-16], 18
jne .Lt_0337
.Lt_0338:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+8]
mov dword ptr [ebp-20], eax
mov eax, dword ptr [ebp-20]
cmp dword ptr [eax+124], 0
jne .Lt_033A
mov dword ptr [ebp-4], 0
jmp .Lt_0334
.Lt_033A:
.Lt_0339:
mov eax, dword ptr [ebp-20]
mov ebx, dword ptr [ebp+8]
sal ebx, 2
mov ecx, dword ptr [eax+124]
add ecx, ebx
mov ebx, dword ptr [ecx+28]
mov dword ptr [ebp-12], ebx
jmp .Lt_0335
.Lt_0337:
mov dword ptr [ebp-4], 0
jmp .Lt_0334
.Lt_033B:
.Lt_0335:
cmp dword ptr [ebp-12], 0
jne .Lt_033D
mov dword ptr [ebp-4], 0
jmp .Lt_0334
.Lt_033D:
.Lt_033C:
push 0
push dword ptr [ebp+16]
push 0
push 0
push dword ptr [ebp-12]
call SYMBFINDCLOSESTOVLPROC
add esp, 20
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_033F
mov eax, dword ptr [ebp+16]
cmp dword ptr [eax], 0
je .Lt_0341
push 0
push -1
mov eax, dword ptr [ebp+16]
push dword ptr [eax]
call ERRREPORT
add esp, 12
.Lt_0341:
.Lt_0340:
jmp .Lt_033E
.Lt_033F:
push dword ptr [ebp-8]
call SYMBCHECKACCESS
add esp, 4
test eax, eax
jne .Lt_0343
mov eax, dword ptr [ebp+16]
mov dword ptr [eax], 201
push 0
push 1
push 0
push dword ptr [ebp-8]
call SYMBGETFULLPROCNAME
add esp, 4
push eax
push 201
call ERRREPORTEX
add esp, 20
mov dword ptr [ebp-8], 0
.Lt_0343:
.Lt_0342:
.Lt_033E:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0334:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBFINDSELFUOPOVLPROC, .-SYMBFINDSELFUOPOVLPROC
.balign 16

.globl SYMBFINDCASTOVLPROC
SYMBFINDCASTOVLPROC:
.type SYMBFINDCASTOVLPROC, @function
push ebp
mov ebp, esp
sub esp, 44
push ebx
mov dword ptr [ebp-4], 0
.Lt_035A:
mov eax, dword ptr [ebp+20]
mov dword ptr [eax], 0
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+4]
and ebx, 511
mov dword ptr [ebp-40], ebx
cmp dword ptr [ebp-40], 18
jne .Lt_035E
.Lt_035F:
mov ebx, dword ptr [ebp+16]
mov eax, dword ptr [ebx+8]
mov dword ptr [ebp-44], eax
cmp dword ptr [ebp-44], 0
jne .Lt_0361
mov dword ptr [ebp-4], 0
jmp .Lt_035B
.Lt_0361:
.Lt_0360:
mov eax, dword ptr [ebp-44]
cmp dword ptr [eax+124], 0
jne .Lt_0363
mov dword ptr [ebp-4], 0
jmp .Lt_035B
.Lt_0363:
.Lt_0362:
mov eax, dword ptr [ebp-44]
mov ebx, dword ptr [eax+124]
mov eax, dword ptr [ebx+136]
mov dword ptr [ebp-8], eax
jmp .Lt_035C
.Lt_035E:
mov dword ptr [ebp-4], 0
jmp .Lt_035B
.Lt_0364:
.Lt_035C:
cmp dword ptr [ebp-8], 0
jne .Lt_0366
mov dword ptr [ebp-4], 0
jmp .Lt_035B
.Lt_0366:
.Lt_0365:
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-32], 0
mov eax, dword ptr [ebp+8]
and eax, 480
je .Lt_0367
mov dword ptr [ebp-36], 22
jmp .Lt_0380
.Lt_0367:
mov eax, dword ptr [ebp+8]
and eax, 31
mov dword ptr [ebp-36], eax
.Lt_0380:
cmp dword ptr [ebp-36], 0
je .Lt_036A
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-16], eax
.Lt_036B:
cmp dword ptr [ebp-16], 0
je .Lt_036C
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push dword ptr [ebp-16]
call HCHECKCASTOVL
add esp, 12
mov dword ptr [ebp-24], eax
mov eax, dword ptr [ebp-28]
cmp dword ptr [ebp-24], eax
jle .Lt_036E
mov eax, dword ptr [ebp-16]
mov dword ptr [ebp-20], eax
mov eax, dword ptr [ebp-24]
mov dword ptr [ebp-28], eax
mov dword ptr [ebp-32], 1
jmp .Lt_036D
.Lt_036E:
mov eax, dword ptr [ebp-28]
cmp dword ptr [ebp-24], eax
jne .Lt_036F
cmp dword ptr [ebp-28], 0
jle .Lt_0371
inc dword ptr [ebp-32]
.Lt_0371:
.Lt_0370:
.Lt_036F:
.Lt_036D:
mov eax, dword ptr [ebp-16]
mov ebx, dword ptr [eax+104]
mov dword ptr [ebp-16], ebx
jmp .Lt_036B
.Lt_036C:
jmp .Lt_0369
.Lt_036A:
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebp-16], ebx
.Lt_0372:
cmp dword ptr [ebp-16], 0
je .Lt_0373
mov ebx, dword ptr [ebp-16]
cmp dword ptr [ebx+28], 0
jne .Lt_0375
mov ebx, dword ptr [ebp-16]
mov eax, dword ptr [ebx+24]
and eax, 511
cmp eax, 15
jg .Lt_0377
mov eax, dword ptr [ebp-16]
mov ebx, dword ptr [eax+24]
and ebx, 511
mov eax, dword ptr [ebp+8]
cmp ebx, eax
jle .Lt_0379
mov eax, dword ptr [ebp-16]
mov dword ptr [ebp-20], eax
mov eax, dword ptr [ebp-16]
mov ebx, dword ptr [eax+24]
and ebx, 511
mov dword ptr [ebp+8], ebx
.Lt_0379:
.Lt_0378:
.Lt_0377:
.Lt_0376:
.Lt_0375:
.Lt_0374:
mov ebx, dword ptr [ebp-16]
mov eax, dword ptr [ebx+104]
mov dword ptr [ebp-16], eax
jmp .Lt_0372
.Lt_0373:
.Lt_0369:
cmp dword ptr [ebp-32], 1
jle .Lt_037B
mov eax, dword ptr [ebp+20]
mov dword ptr [eax], 97
push 97
push 0
push 0
push dword ptr [ebp-8]
call ERRREPORTPARAM
add esp, 16
mov dword ptr [ebp-20], 0
jmp .Lt_037A
.Lt_037B:
cmp dword ptr [ebp-20], 0
je .Lt_037D
push dword ptr [ebp-20]
call SYMBCHECKACCESS
add esp, 4
test eax, eax
jne .Lt_037F
mov eax, dword ptr [ebp+20]
mov dword ptr [eax], 201
push 0
push 1
push 0
push dword ptr [ebp-20]
call SYMBGETFULLPROCNAME
add esp, 4
push eax
push 201
call ERRREPORTEX
add esp, 20
mov dword ptr [ebp-20], 0
.Lt_037F:
.Lt_037E:
.Lt_037D:
.Lt_037C:
.Lt_037A:
mov eax, dword ptr [ebp-20]
mov dword ptr [ebp-4], eax
.Lt_035B:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBFINDCASTOVLPROC, .-SYMBFINDCASTOVLPROC
.balign 16

.globl SYMBFINDCTOROVLPROC
SYMBFINDCTOROVLPROC:
.type SYMBFINDCTOROVLPROC, @function
push ebp
mov ebp, esp
sub esp, 16
mov dword ptr [ebp-4], 0
.Lt_0381:
mov eax, dword ptr [ebp+12]
mov dword ptr [ebp-16], eax
mov eax, dword ptr [ebp+16]
mov dword ptr [ebp-12], eax
mov dword ptr [ebp-8], 0
push 0
push dword ptr [ebp+20]
lea eax, [ebp-16]
push eax
push 1
push dword ptr [ebp+8]
call SYMBGETCOMPCTORHEAD
add esp, 4
push eax
call SYMBFINDCLOSESTOVLPROC
add esp, 20
mov dword ptr [ebp-4], eax
.Lt_0382:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size SYMBFINDCTOROVLPROC, .-SYMBFINDCTOROVLPROC
.balign 16

.globl SYMBDELPROTOTYPE
SYMBDELPROTOTYPE:
.type SYMBDELPROTOTYPE, @function
push ebp
mov ebp, esp
push ebx
.Lt_0387:
mov eax, dword ptr [ebp+8]
movsx ebx, word ptr [eax+64]
test ebx, ebx
jle .Lt_038A
push dword ptr [ebp+8]
call HDELPARAMS
add esp, 4
.Lt_038A:
.Lt_0389:
push dword ptr [ebp+8]
call SYMBPROCFREEEXT
add esp, 4
push dword ptr [ebp+8]
call SYMBFREESYMBOL
add esp, 4
.Lt_0388:
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBDELPROTOTYPE, .-SYMBDELPROTOTYPE
.balign 16

.globl SYMBADDGLOBALCTOR
SYMBADDGLOBALCTOR:
.type SYMBADDGLOBALCTOR, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_038F:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+8]
or ebx, 65538
mov eax, ebx
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+8], eax
push dword ptr [ebp+8]
lea eax, [SYMB+99016]
push eax
call HADDTOGLOBCTORLIST
add esp, 8
mov dword ptr [ebp-4], eax
.Lt_0390:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBADDGLOBALCTOR, .-SYMBADDGLOBALCTOR
.balign 16

.globl SYMBADDGLOBALDTOR
SYMBADDGLOBALDTOR:
.type SYMBADDGLOBALDTOR, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_0391:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+8]
or ebx, 131074
mov eax, ebx
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+8], eax
push dword ptr [ebp+8]
lea eax, [SYMB+99056]
push eax
call HADDTOGLOBCTORLIST
add esp, 8
mov dword ptr [ebp-4], eax
.Lt_0392:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBADDGLOBALDTOR, .-SYMBADDGLOBALDTOR
.balign 16

.globl SYMBPARAMISSAME
SYMBPARAMISSAME:
.type SYMBPARAMISSAME, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
push esi
mov dword ptr [ebp-4], 0
.Lt_0393:
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+12]
mov ecx, dword ptr [ebx+52]
cmp ecx, dword ptr [eax+52]
setne cl
shr ecx, 1
sbb ecx, ecx
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+12]
mov esi, dword ptr [ebx+24]
cmp esi, dword ptr [eax+24]
setne dl
mov esi, edx
shr esi, 1
sbb esi, esi
or ecx, esi
mov esi, dword ptr [ebp+8]
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [esi+28]
cmp ebx, dword ptr [eax+28]
setne dl
mov esi, edx
shr esi, 1
sbb esi, esi
or ecx, esi
je .Lt_0396
jmp .Lt_0394
.Lt_0396:
.Lt_0395:
mov esi, dword ptr [ebp+8]
cmp dword ptr [esi+52], 3
jne .Lt_0398
mov esi, dword ptr [ebp+8]
mov ecx, dword ptr [ebp+12]
mov eax, dword ptr [ecx+64]
cmp dword ptr [esi+64], eax
je .Lt_039A
jmp .Lt_0394
.Lt_039A:
.Lt_0399:
.Lt_0398:
.Lt_0397:
mov dword ptr [ebp-4], -1
.Lt_0394:
mov eax, dword ptr [ebp-4]
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBPARAMISSAME, .-SYMBPARAMISSAME
.balign 16

.globl SYMBPROCCHECKOVERRIDDEN
SYMBPROCCHECKOVERRIDDEN:
.type SYMBPROCCHECKOVERRIDDEN, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_03B0:
push dword ptr [ebp+8]
call SYMBPROCGETOVERRIDDEN
add esp, 4
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
je .Lt_03B3
push dword ptr [ebp+8]
push dword ptr [ebp-4]
call HAREMETHODSCOMPATIBLE
add esp, 8
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
je .Lt_03B5
mov eax, dword ptr [ebp-8]
cmp eax, 225
sete al
shr eax, 1
sbb eax, eax
and eax, dword ptr [ebp+12]
je .Lt_03B7
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 8192
test ebx, ebx
je .Lt_03B9
mov dword ptr [ebp-8], 226
jmp .Lt_03B8
.Lt_03B9:
mov dword ptr [ebp-8], 227
.Lt_03B8:
.Lt_03B7:
.Lt_03B6:
push 0
push 0
push dword ptr [ebp-8]
call ERRREPORT
add esp, 12
.Lt_03B5:
.Lt_03B4:
.Lt_03B3:
.Lt_03B2:
.Lt_03B1:
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBPROCCHECKOVERRIDDEN, .-SYMBPROCCHECKOVERRIDDEN
.balign 16

.globl SYMBPROCSETVTABLEINDEX
SYMBPROCSETVTABLEINDEX:
.type SYMBPROCSETVTABLEINDEX, @function
push ebp
mov ebp, esp
push ebx
.Lt_03BB:
push dword ptr [ebp+8]
call SYMBPROCALLOCEXT
add esp, 4
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+108]
mov eax, dword ptr [ebp+12]
mov dword ptr [ebx+68], eax
.Lt_03BC:
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBPROCSETVTABLEINDEX, .-SYMBPROCSETVTABLEINDEX
.balign 16

.globl SYMBPROCGETVTABLEINDEX
SYMBPROCGETVTABLEINDEX:
.type SYMBPROCGETVTABLEINDEX, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_03BD:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+108], 0
je .Lt_03C0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+108]
mov eax, dword ptr [ebx+68]
mov dword ptr [ebp-4], eax
.Lt_03C0:
.Lt_03BF:
.Lt_03BE:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBPROCGETVTABLEINDEX, .-SYMBPROCGETVTABLEINDEX
.balign 16

.globl SYMBPROCGETOVERRIDDEN
SYMBPROCGETOVERRIDDEN:
.type SYMBPROCGETOVERRIDDEN, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_03C1:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+108], 0
je .Lt_03C4
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+108]
mov eax, dword ptr [ebx+72]
mov dword ptr [ebp-4], eax
.Lt_03C4:
.Lt_03C3:
.Lt_03C2:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBPROCGETOVERRIDDEN, .-SYMBPROCGETOVERRIDDEN
.balign 16

.globl SYMBGETPROCRESULT
SYMBGETPROCRESULT:
.type SYMBGETPROCRESULT, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_03C5:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+108], 0
je .Lt_03C8
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+108]
mov eax, dword ptr [ebx]
mov dword ptr [ebp-4], eax
.Lt_03C8:
.Lt_03C7:
.Lt_03C6:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBGETPROCRESULT, .-SYMBGETPROCRESULT
.balign 16

.globl SYMBPROCHASFWDREFINSIGNATURE
SYMBPROCHASFWDREFINSIGNATURE:
.type SYMBPROCHASFWDREFINSIGNATURE, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_03C9:
mov eax, dword ptr [ebp+8]
push dword ptr [eax+28]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+24]
call TYPEHASFWDREFINSIGNATURE
add esp, 8
test eax, eax
je .Lt_03CC
mov dword ptr [ebp-4], -1
jmp .Lt_03CA
.Lt_03CC:
.Lt_03CB:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+72]
mov dword ptr [ebp-8], ebx
.Lt_03CD:
cmp dword ptr [ebp-8], 0
je .Lt_03CE
mov ebx, dword ptr [ebp-8]
push dword ptr [ebx+28]
mov ebx, dword ptr [ebp-8]
push dword ptr [ebx+24]
call TYPEHASFWDREFINSIGNATURE
add esp, 8
test eax, eax
je .Lt_03D0
mov dword ptr [ebp-4], -1
jmp .Lt_03CA
.Lt_03D0:
.Lt_03CF:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+160]
mov dword ptr [ebp-8], ebx
jmp .Lt_03CD
.Lt_03CE:
mov dword ptr [ebp-4], 0
.Lt_03CA:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBPROCHASFWDREFINSIGNATURE, .-SYMBPROCHASFWDREFINSIGNATURE
.balign 16

.globl HDUMPDYNAMICARRAYDIMENSIONS
HDUMPDYNAMICARRAYDIMENSIONS:
.type HDUMPDYNAMICARRAYDIMENSIONS, @function
push ebp
mov ebp, esp
sub esp, 32
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_03FF:
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
push 0
push 2
push offset Lt_0401
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
mov dword ptr [ebp-28], 1
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-32], eax
jmp .Lt_0403
.Lt_0406:
cmp dword ptr [ebp-28], 1
jle .Lt_0408
push 0
push 3
push offset Lt_0409
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_0408:
.Lt_0407:
push 0
push 4
push offset Lt_040A
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_0404:
inc dword ptr [ebp-28]
.Lt_0403:
mov eax, dword ptr [ebp-32]
cmp dword ptr [ebp-28], eax
jle .Lt_0406
.Lt_0405:
push 0
push 3
push offset Lt_040B
push -1
lea eax, [ebp-24]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push -1
lea eax, [ebp-24]
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-24]
push eax
call fb_StrDelete
add esp, 4
.Lt_0400:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
mov esp, ebp
pop ebp
ret
.size HDUMPDYNAMICARRAYDIMENSIONS, .-HDUMPDYNAMICARRAYDIMENSIONS
.balign 16

.globl SYMBPROCPTRTOSTR
SYMBPROCPTRTOSTR:
.type SYMBPROCPTRTOSTR, @function
push ebp
mov ebp, esp
sub esp, 24
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_043E:
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
push dword ptr [ebp+8]
lea eax, [ebp-24]
push eax
call HSUBORFUNCTOSTR
add esp, 8
push dword ptr [ebp+8]
lea eax, [ebp-24]
push eax
call HPROCMODETOSTR
add esp, 8
push dword ptr [ebp+8]
lea eax, [ebp-24]
push eax
call HPARAMSTOSTR
add esp, 8
push dword ptr [ebp+8]
lea eax, [ebp-24]
push eax
call HRESULTTOSTR
add esp, 8
push 0
push -1
lea eax, [ebp-24]
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-24]
push eax
call fb_StrDelete
add esp, 4
.Lt_043F:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
mov esp, ebp
pop ebp
ret
.size SYMBPROCPTRTOSTR, .-SYMBPROCPTRTOSTR
.balign 16

.globl SYMBGETFULLPROCNAME
SYMBGETFULLPROCNAME:
.type SYMBGETFULLPROCNAME, @function
push ebp
mov ebp, esp
sub esp, 32
push ebx
mov dword ptr [ebp-4], 0
.Lt_0440:
push 0
push 1
push offset Lt_0000
push -1
push offset Lt_0458
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+128]
mov eax, dword ptr [ebx]
mov dword ptr [ebp-8], eax
.Lt_0442:
lea eax, [SYMB+98352]
cmp dword ptr [ebp-8], eax
je .Lt_0443
push 0
push -1
push -1
push offset Lt_0458
push -1
push 2
push offset Lt_0007
push 0
mov eax, dword ptr [ebp-8]
push dword ptr [eax+12]
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
lea eax, [ebp-20]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
lea eax, [ebp-32]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_0458
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+128]
mov eax, dword ptr [ebx]
mov dword ptr [ebp-8], eax
jmp .Lt_0442
.Lt_0443:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 4096
test ebx, ebx
je .Lt_0447
push 0
push 12
push offset Lt_0448
push -1
push offset Lt_0458
call fb_StrConcatAssign
add esp, 20
jmp .Lt_0446
.Lt_0447:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 8192
test ebx, ebx
je .Lt_0449
push 0
push 11
push offset Lt_044A
push -1
push offset Lt_0458
call fb_StrConcatAssign
add esp, 20
jmp .Lt_0446
.Lt_0449:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 16384
test ebx, ebx
je .Lt_044B
push 0
push 10
push offset Lt_044C
push -1
push offset Lt_0458
call fb_StrConcatAssign
add esp, 20
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+108], 0
je .Lt_044E
push 0
push -1
push 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+108]
mov eax, dword ptr [ebx+40]
sal eax, 4
push dword ptr [AST_OPTB+eax+8]
push -1
push offset Lt_0458
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
lea eax, [ebp-20]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_0458
call fb_StrAssign
add esp, 20
.Lt_044E:
.Lt_044D:
jmp .Lt_0446
.Lt_044B:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 32768
test ebx, ebx
je .Lt_0450
push 0
push -1
push 0
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+12]
push -1
push offset Lt_0458
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
lea ebx, [ebp-20]
push ebx
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_0458
call fb_StrAssign
add esp, 20
push 0
push 11
push offset Lt_0452
push -1
push offset Lt_0458
call fb_StrConcatAssign
add esp, 20
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+24]
and ebx, 511
test ebx, ebx
je .Lt_0454
push 0
push 4
push offset Lt_0455
push -1
push offset Lt_0458
call fb_StrConcatAssign
add esp, 20
jmp .Lt_0453
.Lt_0454:
push 0
push 4
push offset Lt_0456
push -1
push offset Lt_0458
call fb_StrConcatAssign
add esp, 20
.Lt_0453:
jmp .Lt_0446
.Lt_0450:
push 0
push -1
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax+12]
push -1
push offset Lt_0458
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
lea eax, [ebp-20]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_0458
call fb_StrAssign
add esp, 20
.Lt_0446:
mov eax, dword ptr [Lt_0458]
mov dword ptr [ebp-4], eax
.Lt_0441:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBGETFULLPROCNAME, .-SYMBGETFULLPROCNAME

.section .bss
.balign 4
	.lcomm	Lt_0458,12

.section .text
.balign 16

.globl SYMBMETHODTOSTR
SYMBMETHODTOSTR:
.type SYMBMETHODTOSTR, @function
push ebp
mov ebp, esp
sub esp, 24
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_0459:
push 0
push 0
push dword ptr [ebp+8]
call SYMBGETFULLPROCNAME
add esp, 4
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrInit
add esp, 20
push dword ptr [ebp+8]
lea eax, [ebp-24]
push eax
call HPROCMODETOSTR
add esp, 8
push dword ptr [ebp+8]
lea eax, [ebp-24]
push eax
call HPARAMSTOSTR
add esp, 8
push dword ptr [ebp+8]
lea eax, [ebp-24]
push eax
call HRESULTTOSTR
add esp, 8
push 0
push -1
lea eax, [ebp-24]
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
lea eax, [ebp-24]
push eax
call fb_StrDelete
add esp, 4
.Lt_045A:
lea eax, [ebp-12]
push eax
call fb_StrAllocTempResult
add esp, 4
mov esp, ebp
pop ebp
ret
.size SYMBMETHODTOSTR, .-SYMBMETHODTOSTR
.balign 16

.globl SYMBGETDEFAULTPARAMMODE
SYMBGETDEFAULTPARAMMODE:
.type SYMBGETDEFAULTPARAMMODE, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_045B:
mov eax, dword ptr [ebp+8]
and eax, 511
mov ebx, eax
mov dword ptr [ebp-8], ebx
jmp .Lt_045E
.Lt_0460:
mov dword ptr [ebp-4], 2
jmp .Lt_045C
jmp .Lt_045D
.Lt_0461:
mov dword ptr [ebp-4], 1
jmp .Lt_045C
jmp .Lt_045D
.Lt_045E:
mov ebx, dword ptr [ebp-8]
add ebx, 4294967293
cmp ebx, 18
ja .Lt_0461
mov ebx, dword ptr [ebp-8]
jmp dword ptr [.LT_0462+ebx*4-12]
.LT_0462:
.int .Lt_0460
.int .Lt_0461
.int .Lt_0461
.int .Lt_0460
.int .Lt_0461
.int .Lt_0461
.int .Lt_0461
.int .Lt_0461
.int .Lt_0461
.int .Lt_0461
.int .Lt_0461
.int .Lt_0461
.int .Lt_0461
.int .Lt_0460
.int .Lt_0460
.int .Lt_0460
.int .Lt_0461
.int .Lt_0461
.int .Lt_0460
.Lt_045D:
.Lt_045C:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBGETDEFAULTPARAMMODE, .-SYMBGETDEFAULTPARAMMODE
.balign 16

.globl SYMBAREPROCMODESEQUAL
SYMBAREPROCMODESEQUAL:
.type SYMBAREPROCMODESEQUAL, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_0463:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+80]
mov dword ptr [ebp-8], ebx
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+80]
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-8], 1
je .Lt_0467
.Lt_0468:
cmp dword ptr [ebp-8], 2
jne .Lt_0466
.Lt_0467:
cmp dword ptr [ebp-12], 1
je .Lt_046B
.Lt_046C:
cmp dword ptr [ebp-12], 2
jne .Lt_046A
.Lt_046B:
mov dword ptr [ebp-4], -1
jmp .Lt_0464
.Lt_046A:
.Lt_0469:
.Lt_0466:
.Lt_0465:
mov eax, dword ptr [ebp-12]
cmp eax, dword ptr [ebp-8]
sete al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-4], eax
.Lt_0464:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBAREPROCMODESEQUAL, .-SYMBAREPROCMODESEQUAL
.balign 16

.globl SYMBALLOCOVLCALLARG
SYMBALLOCOVLCALLARG:
.type SYMBALLOCOVLCALLARG, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_046E:
push dword ptr [ebp+8]
call LISTNEWNODE
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp+16], 0
jne .Lt_0471
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax+4], 0
jne .Lt_0473
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [ebp-8]
mov dword ptr [eax+4], ebx
jmp .Lt_0472
.Lt_0473:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+8]
mov ebx, dword ptr [ebp-8]
mov dword ptr [eax+8], ebx
.Lt_0472:
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+8], 0
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebp-8]
mov dword ptr [ebx+8], eax
jmp .Lt_0470
.Lt_0471:
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax+8], 0
jne .Lt_0475
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [ebp-8]
mov dword ptr [eax+8], ebx
.Lt_0475:
.Lt_0474:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebp-8]
mov ecx, dword ptr [ebx+4]
mov dword ptr [eax+8], ecx
mov ecx, dword ptr [ebp+12]
mov eax, dword ptr [ebp-8]
mov dword ptr [ecx+4], eax
.Lt_0470:
mov eax, dword ptr [ebp+12]
inc dword ptr [eax]
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_046F:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBALLOCOVLCALLARG, .-SYMBALLOCOVLCALLARG
.balign 16

.globl SYMBFREEOVLCALLARGS
SYMBFREEOVLCALLARGS:
.type SYMBFREEOVLCALLARGS, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_0476:
mov dword ptr [ebp-4], 0
mov dword ptr [ebp-8], 0
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-4], ebx
.Lt_0478:
cmp dword ptr [ebp-4], 0
je .Lt_0479
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebx+8]
mov dword ptr [ebp-8], eax
push dword ptr [ebp-4]
push dword ptr [ebp+8]
call LISTDELNODE
add esp, 8
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
jmp .Lt_0478
.Lt_0479:
.Lt_0477:
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBFREEOVLCALLARGS, .-SYMBFREEOVLCALLARGS
.balign 16
fb_ctor__symbzproc:
.type fb_ctor__symbzproc, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__symbzproc, .-fb_ctor__symbzproc
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
HALIGNTOPOW2:
.type HALIGNTOPOW2, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
push esi
push edi
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_0072:
mov eax, dword ptr [ebp+16]
dec eax
mov ecx, eax
mov ebx, ecx
sar ebx, 31
add ecx, dword ptr [ebp+8]
adc ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebp+16]
dec eax
not eax
mov edi, eax
mov esi, edi
sar esi, 31
and ecx, edi
and ebx, esi
mov dword ptr [ebp-8], ecx
mov dword ptr [ebp-4], ebx
.Lt_0073:
mov eax, dword ptr [ebp-8]
mov edx, dword ptr [ebp-4]
pop edi
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size HALIGNTOPOW2, .-HALIGNTOPOW2
.balign 16
HCANOVERLOAD:
.type HCANOVERLOAD, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_00B3:
mov eax, dword ptr [ebp+8]
movsx ebx, word ptr [eax+64]
test ebx, ebx
jne .Lt_00B6
mov dword ptr [ebp-4], -1
jmp .Lt_00B4
.Lt_00B6:
.Lt_00B5:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+76]
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
cmp dword ptr [eax+52], 4
jne .Lt_00B8
mov dword ptr [ebp-4], 0
jmp .Lt_00B4
.Lt_00B8:
.Lt_00B7:
.Lt_00B9:
cmp dword ptr [ebp-8], 0
je .Lt_00BA
mov eax, dword ptr [ebp-8]
cmp dword ptr [eax+24], 0
jne .Lt_00BC
mov dword ptr [ebp-4], 0
jmp .Lt_00B4
.Lt_00BC:
.Lt_00BB:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+156]
mov dword ptr [ebp-8], ebx
jmp .Lt_00B9
.Lt_00BA:
mov dword ptr [ebp-4], -1
.Lt_00B4:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HCANOVERLOAD, .-HCANOVERLOAD
.balign 16
HCANOVERLOADBYDESC:
.type HCANOVERLOADBYDESC, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_00BD:
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+52]
cmp ebx, 3
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax+52]
cmp ecx, 3
sete cl
shr ecx, 1
sbb ecx, ecx
or ebx, ecx
je .Lt_00C0
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ecx+52]
cmp ebx, 3
sete bl
shr ebx, 1
sbb ebx, ebx
mov ecx, dword ptr [ebp+12]
mov eax, dword ptr [ecx+52]
cmp eax, 3
sete al
shr eax, 1
sbb eax, eax
and ebx, eax
je .Lt_00C2
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+64]
test ebx, ebx
setg bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax+64]
test ecx, ecx
setg cl
shr ecx, 1
sbb ecx, ecx
and ebx, ecx
je .Lt_00C4
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+64]
cmp eax, dword ptr [ecx+64]
setne al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-4], eax
.Lt_00C4:
.Lt_00C3:
jmp .Lt_00C1
.Lt_00C2:
mov dword ptr [ebp-4], -1
.Lt_00C1:
.Lt_00C0:
.Lt_00BF:
.Lt_00BE:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HCANOVERLOADBYDESC, .-HCANOVERLOADBYDESC
.balign 16
HADDOVLPROC:
.type HADDOVLPROC, @function
push ebp
mov ebp, esp
sub esp, 36
push ebx
mov dword ptr [ebp-4], 0
.Lt_00C5:
mov dword ptr [ebp-4], 0
cmp dword ptr [ebp+12], 0
jne .Lt_00C8
jmp .Lt_00C6
.Lt_00C8:
.Lt_00C7:
mov eax, dword ptr [ebp+40]
and eax, 32768
test eax, eax
setne al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp+12]
mov ecx, dword ptr [ebx+4]
and ecx, 32768
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
cmp eax, ecx
je .Lt_00CA
jmp .Lt_00C6
.Lt_00CA:
.Lt_00C9:
mov ecx, dword ptr [ebp+8]
movsx eax, word ptr [ecx+64]
mov dword ptr [ebp-24], eax
mov eax, dword ptr [ebp+40]
and eax, 2048
test eax, eax
je .Lt_00CC
dec dword ptr [ebp-24]
.Lt_00CC:
.Lt_00CB:
cmp dword ptr [ebp-24], 0
jle .Lt_00CE
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+76]
mov dword ptr [ebp-16], ecx
mov ecx, dword ptr [ebp-16]
cmp dword ptr [ecx+52], 4
jne .Lt_00D0
jmp .Lt_00C6
.Lt_00D0:
.Lt_00CF:
.Lt_00D1:
cmp dword ptr [ebp-16], 0
je .Lt_00D2
mov ecx, dword ptr [ebp-16]
cmp dword ptr [ecx+24], 0
jne .Lt_00D4
jmp .Lt_00C6
.Lt_00D4:
.Lt_00D3:
mov ecx, dword ptr [ebp-16]
mov eax, dword ptr [ecx+156]
mov dword ptr [ebp-16], eax
jmp .Lt_00D1
.Lt_00D2:
.Lt_00CE:
.Lt_00CD:
mov eax, dword ptr [ebp+12]
mov dword ptr [ebp-8], eax
.Lt_00D5:
mov eax, dword ptr [ebp-8]
movsx ecx, word ptr [eax+64]
mov dword ptr [ebp-20], ecx
mov ecx, dword ptr [ebp-8]
mov eax, dword ptr [ecx+4]
and eax, 2048
test eax, eax
je .Lt_00D9
dec dword ptr [ebp-20]
.Lt_00D9:
.Lt_00D8:
mov eax, dword ptr [ebp+40]
and eax, 32768
test eax, eax
je .Lt_00DB
cmp dword ptr [ebp+32], 0
je .Lt_00DD
mov eax, dword ptr [ebp-8]
mov ecx, dword ptr [eax+24]
and ecx, 511
test ecx, ecx
jne .Lt_00DF
mov dword ptr [ebp-20], -1
.Lt_00DF:
.Lt_00DE:
jmp .Lt_00DC
.Lt_00DD:
mov ecx, dword ptr [ebp-8]
mov eax, dword ptr [ecx+24]
and eax, 511
test eax, eax
je .Lt_00E1
mov dword ptr [ebp-20], -1
.Lt_00E1:
.Lt_00E0:
.Lt_00DC:
.Lt_00DB:
.Lt_00DA:
mov eax, dword ptr [ebp-24]
cmp dword ptr [ebp-20], eax
jne .Lt_00E3
cmp dword ptr [ebp-24], 0
jne .Lt_00E5
jmp .Lt_00C6
.Lt_00E5:
.Lt_00E4:
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+76]
mov dword ptr [ebp-16], ecx
mov ecx, dword ptr [ebp-8]
mov eax, dword ptr [ecx+76]
mov dword ptr [ebp-12], eax
.Lt_00E6:
push dword ptr [ebp-12]
push dword ptr [ebp-16]
call HCANOVERLOADBYDESC
add esp, 8
test eax, eax
je .Lt_00EA
jmp .Lt_00E7
.Lt_00EA:
.Lt_00E9:
mov eax, dword ptr [ebp-16]
mov ecx, dword ptr [eax+24]
mov dword ptr [ebp-32], ecx
mov ecx, dword ptr [ebp-12]
mov eax, dword ptr [ecx+24]
mov dword ptr [ebp-36], eax
mov eax, dword ptr [ebp-32]
and eax, 261632
mov ecx, dword ptr [ebp-36]
and ecx, 261632
or eax, ecx
test eax, eax
je .Lt_00EC
mov eax, dword ptr [ebp-16]
mov ecx, dword ptr [eax+52]
cmp ecx, 2
sete cl
shr ecx, 1
sbb ecx, ecx
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax+52]
cmp ebx, 2
sete bl
shr ebx, 1
sbb ebx, ebx
and ecx, ebx
je .Lt_00EE
mov ebx, dword ptr [ebp-32]
and ebx, 261632
mov ecx, dword ptr [ebp-36]
and ecx, 261632
cmp ebx, ecx
je .Lt_00F0
jmp .Lt_00E7
.Lt_00F0:
.Lt_00EF:
.Lt_00EE:
.Lt_00ED:
mov ecx, dword ptr [ebp-32]
and ecx, 261632
and ecx, -513
mov ebx, dword ptr [ebp-36]
and ebx, 261632
and ebx, -513
cmp ecx, ebx
je .Lt_00F2
jmp .Lt_00E7
.Lt_00F2:
.Lt_00F1:
and dword ptr [ebp-32], 511
and dword ptr [ebp-36], 511
.Lt_00EC:
.Lt_00EB:
mov ebx, dword ptr [ebp-36]
cmp dword ptr [ebp-32], ebx
je .Lt_00F4
cmp dword ptr [ebp-32], 35
jne .Lt_00F6
.Lt_00F7:
cmp dword ptr [ebp-36], 16
je .Lt_00F9
jmp .Lt_00E7
.Lt_00F9:
.Lt_00F8:
jmp .Lt_00F5
.Lt_00F6:
cmp dword ptr [ebp-32], 16
jne .Lt_00FA
.Lt_00FB:
cmp dword ptr [ebp-36], 35
je .Lt_00FD
jmp .Lt_00E7
.Lt_00FD:
.Lt_00FC:
jmp .Lt_00F5
.Lt_00FA:
jmp .Lt_00E7
.Lt_00FE:
.Lt_00F5:
.Lt_00F4:
.Lt_00F3:
mov ebx, dword ptr [ebp-16]
mov ecx, dword ptr [ebp-12]
mov eax, dword ptr [ecx+28]
cmp dword ptr [ebx+28], eax
je .Lt_0100
jmp .Lt_00E7
.Lt_0100:
.Lt_00FF:
mov eax, dword ptr [ebp-16]
mov ebx, dword ptr [eax+156]
mov dword ptr [ebp-16], ebx
mov ebx, dword ptr [ebp-12]
mov eax, dword ptr [ebx+156]
mov dword ptr [ebp-12], eax
dec dword ptr [ebp-20]
.Lt_00E8:
cmp dword ptr [ebp-20], 0
jg .Lt_00E6
.Lt_00E7:
cmp dword ptr [ebp-20], 0
jne .Lt_0102
jmp .Lt_00C6
.Lt_0102:
.Lt_0101:
.Lt_00E3:
.Lt_00E2:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+104]
mov dword ptr [ebp-8], ebx
.Lt_00D7:
cmp dword ptr [ebp-8], 0
jne .Lt_00D5
.Lt_00D6:
push dword ptr [ebp+40]
push dword ptr [ebp+36]
push dword ptr [ebp+32]
push dword ptr [ebp+28]
push dword ptr [ebp+24]
push 3
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+8]
cmp dword ptr [ebp+44], 0
je .Lt_0103
mov dword ptr [ebp-28], 1
jmp .Lt_0481
.Lt_0103:
mov dword ptr [ebp-28], 0
.Lt_0481:
push dword ptr [ebp-28]
call SYMBNEWSYMBOL
add esp, 40
mov dword ptr [ebp+8], eax
cmp dword ptr [ebp+8], 0
jne .Lt_0106
jmp .Lt_00C6
.Lt_0106:
.Lt_0105:
cmp dword ptr [ebp+24], 0
je .Lt_0108
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [eax+136]
mov dword ptr [ebx+136], ecx
mov ecx, dword ptr [ebp+12]
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ecx+132]
mov dword ptr [ebx+132], eax
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+144]
mov dword ptr [ebp-32], ebx
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebp+8]
mov dword ptr [ebx+144], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+12]
mov dword ptr [eax+140], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp-32]
mov dword ptr [ebx+144], eax
cmp dword ptr [ebp-32], 0
je .Lt_010A
mov eax, dword ptr [ebp-32]
mov ebx, dword ptr [ebp+8]
mov dword ptr [eax+140], ebx
.Lt_010A:
.Lt_0109:
.Lt_0108:
.Lt_0107:
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebp-4], ebx
.Lt_00C6:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HADDOVLPROC, .-HADDOVLPROC
.balign 16
HADDOPOVLPROC:
.type HADDOPOVLPROC, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_010B:
cmp dword ptr [ebp+24], 27
je .Lt_010E
push 0
push dword ptr [ebp+40]
push dword ptr [ebp+36]
push dword ptr [ebp+32]
push dword ptr [ebp+28]
push 0
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HADDOVLPROC
add esp, 40
mov dword ptr [ebp-4], eax
jmp .Lt_010C
.Lt_010E:
.Lt_010D:
mov eax, dword ptr [ebp+12]
mov dword ptr [ebp-8], eax
.Lt_010F:
cmp dword ptr [ebp-8], 0
je .Lt_0110
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-8]
mov ecx, dword ptr [ebx+24]
cmp dword ptr [eax+24], ecx
jne .Lt_0112
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+28]
cmp dword ptr [ecx+28], ebx
jne .Lt_0114
mov dword ptr [ebp-4], 0
jmp .Lt_010C
.Lt_0114:
.Lt_0113:
.Lt_0112:
.Lt_0111:
mov ebx, dword ptr [ebp-8]
mov ecx, dword ptr [ebx+104]
mov dword ptr [ebp-8], ecx
jmp .Lt_010F
.Lt_0110:
push dword ptr [ebp+40]
push dword ptr [ebp+36]
push dword ptr [ebp+32]
push dword ptr [ebp+28]
push 0
push 3
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+8]
push 0
call SYMBNEWSYMBOL
add esp, 40
mov dword ptr [ebp+8], eax
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
.Lt_010C:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HADDOPOVLPROC, .-HADDOPOVLPROC
.balign 16
HSETUPPROC:
.type HSETUPPROC, @function
push ebp
mov ebp, esp
sub esp, 32
push ebx
mov dword ptr [ebp-4], 0
.Lt_0115:
mov dword ptr [ebp-4], 0
cmp dword ptr [ebp+32], -2147483648
jne .Lt_0118
push dword ptr [ebp+24]
call SYMBGETDEFTYPE
add esp, 4
mov dword ptr [ebp+32], eax
mov dword ptr [ebp+36], 0
.Lt_0118:
.Lt_0117:
cmp dword ptr [ebp+28], 0
jne .Lt_011A
cmp dword ptr [PARSER+96], 0
je .Lt_011C
mov eax, dword ptr [ebp+24]
mov dword ptr [ebp+28], eax
.Lt_011C:
.Lt_011B:
mov dword ptr [ebp-8], 0
jmp .Lt_0119
.Lt_011A:
mov dword ptr [ebp-8], 512
.Lt_0119:
mov dword ptr [ebp-24], 0
mov eax, dword ptr [ebp+40]
and eax, 12288
test eax, eax
je .Lt_011E
mov eax, dword ptr [ebp+40]
and eax, 4096
test eax, eax
je .Lt_0120
push dword ptr [ebp+12]
call SYMBGETCOMPCTORHEAD
add esp, 4
mov dword ptr [ebp-24], eax
jmp .Lt_011F
.Lt_0120:
push dword ptr [ebp+12]
call SYMBGETCOMPDTOR
add esp, 4
mov dword ptr [ebp-24], eax
.Lt_011F:
cmp dword ptr [ebp-24], 0
jne .Lt_0122
push dword ptr [ebp+40]
push 0
push 0
push dword ptr [ebp+28]
push 0
push 3
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+8]
push 0
call SYMBNEWSYMBOL
add esp, 40
mov dword ptr [ebp-20], eax
mov eax, dword ptr [ebp+40]
and eax, 4096
test eax, eax
je .Lt_0124
push dword ptr [ebp-20]
push dword ptr [ebp+12]
call SYMBSETCOMPCTORHEAD
add esp, 8
jmp .Lt_0123
.Lt_0124:
push dword ptr [ebp-20]
push dword ptr [ebp+12]
call SYMBSETCOMPDTOR
add esp, 8
.Lt_0123:
jmp .Lt_0121
.Lt_0122:
mov eax, dword ptr [ebp+40]
and eax, 8192
test eax, eax
je .Lt_0126
mov dword ptr [ebp-4], 0
jmp .Lt_0116
.Lt_0126:
.Lt_0125:
push 0
push dword ptr [ebp+40]
push 0
push 0
push dword ptr [ebp+28]
push 0
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp-24]
push dword ptr [ebp+8]
call HADDOVLPROC
add esp, 40
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 0
jne .Lt_0128
jmp .Lt_0116
.Lt_0128:
.Lt_0127:
.Lt_0121:
mov eax, dword ptr [ebp+40]
and eax, 4096
test eax, eax
je .Lt_012A
push dword ptr [ebp-20]
push dword ptr [ebp+12]
call SYMBCHECKCOMPCTOR
add esp, 8
.Lt_012A:
.Lt_0129:
jmp .Lt_011D
.Lt_011E:
mov eax, dword ptr [ebp+40]
and eax, 16384
test eax, eax
je .Lt_012B
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+108], 0
jne .Lt_012D
jmp .Lt_012E
.Lt_012D:
.Lt_012C:
mov dword ptr [ebp-32], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+108]
mov eax, dword ptr [ebx+40]
mov dword ptr [ebp-32], eax
push dword ptr [ebp-32]
push dword ptr [ebp+12]
call SYMBGETCOMPOPOVLHEAD
add esp, 8
mov dword ptr [ebp-24], eax
cmp dword ptr [ebp-24], 0
jne .Lt_0130
push dword ptr [ebp+40]
push dword ptr [ebp+36]
push dword ptr [ebp+32]
push dword ptr [ebp+28]
push 0
push 3
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+8]
push 0
call SYMBNEWSYMBOL
add esp, 40
mov dword ptr [ebp-20], eax
push dword ptr [ebp-20]
push dword ptr [ebp+12]
call SYMBSETCOMPOPOVLHEAD
add esp, 8
jmp .Lt_012F
.Lt_0130:
push dword ptr [ebp+40]
push dword ptr [ebp+36]
push dword ptr [ebp+32]
push dword ptr [ebp+28]
push dword ptr [ebp-32]
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp-24]
push dword ptr [ebp+8]
call HADDOPOVLPROC
add esp, 36
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 0
jne .Lt_0132
jmp .Lt_0116
.Lt_0132:
.Lt_0131:
cmp dword ptr [ebp-32], 0
jne .Lt_0134
push dword ptr [ebp-20]
push dword ptr [ebp+12]
call SYMBCHECKCOMPLETOP
add esp, 8
.Lt_0134:
.Lt_0133:
.Lt_012F:
jmp .Lt_011D
.Lt_012B:
.Lt_012E:
mov eax, dword ptr [ebp+48]
and eax, 1
test eax, eax
setne al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-12], eax
push dword ptr [ebp+40]
push dword ptr [ebp+36]
push dword ptr [ebp+32]
push dword ptr [ebp+28]
push dword ptr [ebp+24]
push 3
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+8]
mov eax, dword ptr [ebp+48]
or eax, 32
mov ebx, eax
push ebx
call SYMBNEWSYMBOL
add esp, 40
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 0
jne .Lt_0136
push 0
push dword ptr [ebp-12]
push 3
push dword ptr [ebp+24]
push dword ptr [ebp+12]
call SYMBLOOKUPBYNAMEANDCLASS
add esp, 20
mov dword ptr [ebp-24], eax
cmp dword ptr [ebp-24], 0
jne .Lt_0138
jmp .Lt_0116
.Lt_0138:
.Lt_0137:
mov eax, dword ptr [ebp-24]
mov ebx, dword ptr [eax+4]
and ebx, 1024
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_013A
mov ebx, dword ptr [ENV+840]
and ebx, 1024
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_013C
jmp .Lt_0116
.Lt_013C:
.Lt_013B:
.Lt_013A:
.Lt_0139:
push dword ptr [ebp-12]
push dword ptr [ebp+40]
push dword ptr [ebp+36]
push dword ptr [ebp+32]
push dword ptr [ebp+28]
push dword ptr [ebp+24]
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp-24]
push dword ptr [ebp+8]
call HADDOVLPROC
add esp, 40
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 0
jne .Lt_013E
jmp .Lt_0116
.Lt_013E:
.Lt_013D:
mov eax, dword ptr [ebp-20]
mov ebx, dword ptr [eax+4]
or ebx, 1024
mov eax, ebx
mov ebx, dword ptr [ebp-20]
mov dword ptr [ebx+4], eax
jmp .Lt_0135
.Lt_0136:
mov eax, dword ptr [ebp+48]
and eax, 16
test eax, eax
jne .Lt_0140
mov eax, dword ptr [ebp+40]
and eax, 1024
test eax, eax
je .Lt_0142
push dword ptr [ebp+8]
call HCANOVERLOAD
add esp, 4
test eax, eax
jne .Lt_0144
jmp .Lt_0116
.Lt_0144:
.Lt_0143:
jmp .Lt_0141
.Lt_0142:
mov eax, dword ptr [ENV+840]
and eax, 1024
test eax, eax
je .Lt_0145
push dword ptr [ebp+8]
call HCANOVERLOAD
add esp, 4
test eax, eax
je .Lt_0147
mov eax, dword ptr [ebp-20]
mov ebx, dword ptr [eax+4]
or ebx, 1024
mov eax, ebx
mov ebx, dword ptr [ebp-20]
mov dword ptr [ebx+4], eax
.Lt_0147:
.Lt_0146:
.Lt_0145:
.Lt_0141:
.Lt_0140:
.Lt_013F:
.Lt_0135:
.Lt_011D:
mov eax, dword ptr [ebp+48]
and eax, 16
test eax, eax
je .Lt_0149
or dword ptr [ebp-8], 32
.Lt_0149:
.Lt_0148:
mov eax, dword ptr [ebp-20]
mov ebx, dword ptr [ebp+44]
mov dword ptr [eax+80], ebx
cmp dword ptr [PARSER+24], 306
jne .Lt_014B
cmp dword ptr [PARSER+96], 4
je .Lt_014D
or dword ptr [ebp-8], 2048
.Lt_014D:
.Lt_014C:
.Lt_014B:
.Lt_014A:
push dword ptr [ebp-20]
call SYMBPROCRECALCREALTYPE
add esp, 4
mov ebx, dword ptr [ebp+48]
and ebx, 4
test ebx, ebx
je .Lt_014F
or dword ptr [ebp-8], 8
.Lt_014F:
.Lt_014E:
mov ebx, dword ptr [ebp-20]
mov dword ptr [ebx+96], 0
mov ebx, dword ptr [ebp-20]
mov eax, dword ptr [ebx+4]
and eax, 1024
test eax, eax
je .Lt_0151
mov eax, dword ptr [ebp-20]
movsx ebx, word ptr [eax+64]
mov dword ptr [ebp-32], ebx
mov ebx, dword ptr [ebp-20]
mov eax, dword ptr [ebx+4]
and eax, 2048
test eax, eax
je .Lt_0153
dec dword ptr [ebp-32]
.Lt_0153:
.Lt_0152:
cmp dword ptr [ebp-24], 0
je .Lt_0155
mov eax, dword ptr [ebp-24]
mov ebx, dword ptr [ebp-20]
mov ecx, dword ptr [eax+104]
mov dword ptr [ebx+104], ecx
mov ecx, dword ptr [ebp-24]
mov ebx, dword ptr [ebp-20]
mov dword ptr [ecx+104], ebx
mov ebx, dword ptr [ebp-24]
movsx ecx, word ptr [ebx+100]
cmp dword ptr [ebp-32], ecx
jge .Lt_0157
mov cx, word ptr [ebp-32]
mov ebx, dword ptr [ebp-24]
mov word ptr [ebx+100], cx
.Lt_0157:
.Lt_0156:
mov ecx, dword ptr [ebp-24]
movsx ebx, word ptr [ecx+102]
cmp dword ptr [ebp-32], ebx
jle .Lt_0159
mov bx, word ptr [ebp-32]
mov ecx, dword ptr [ebp-24]
mov word ptr [ecx+102], bx
.Lt_0159:
.Lt_0158:
jmp .Lt_0154
.Lt_0155:
mov ebx, dword ptr [ebp-20]
mov dword ptr [ebx+104], 0
mov bx, word ptr [ebp-32]
mov ecx, dword ptr [ebp-20]
mov word ptr [ecx+100], bx
mov bx, word ptr [ebp-32]
mov ecx, dword ptr [ebp-20]
mov word ptr [ecx+102], bx
.Lt_0154:
.Lt_0151:
.Lt_0150:
mov ebx, dword ptr [ebp-20]
mov ecx, dword ptr [ebx+8]
or ecx, dword ptr [ebp-8]
mov ebx, ecx
mov ecx, dword ptr [ebp-20]
mov dword ptr [ecx+8], ebx
mov ebx, dword ptr [ebp-20]
mov ecx, dword ptr [ebx+4]
and ecx, 2048
test ecx, ecx
je .Lt_015B
mov ecx, dword ptr [ebp-20]
mov ebx, dword ptr [ecx+4]
and ebx, 1073741824
test ebx, ebx
je .Lt_015D
mov ebx, dword ptr [ebp+12]
mov ecx, dword ptr [ebx+124]
inc dword ptr [ecx+152]
.Lt_015D:
.Lt_015C:
mov dword ptr [ebp-28], 0
mov ecx, dword ptr [ebp+12]
cmp dword ptr [ecx+92], 0
je .Lt_015F
mov ecx, dword ptr [ebp-20]
mov ebx, dword ptr [ecx+4]
and ebx, 8192
test ebx, ebx
je .Lt_0161
mov ebx, dword ptr [ebp+12]
mov ecx, dword ptr [ebx+92]
push dword ptr [ecx+28]
call SYMBGETCOMPDTOR
add esp, 4
mov dword ptr [ebp-28], eax
jmp .Lt_0160
.Lt_0161:
mov eax, dword ptr [ebp-20]
mov ecx, dword ptr [eax+4]
and ecx, 16384
test ecx, ecx
je .Lt_0162
mov ecx, dword ptr [ebp-20]
mov eax, dword ptr [ecx+108]
push dword ptr [eax+40]
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax+92]
push dword ptr [ecx+28]
call SYMBGETCOMPOPOVLHEAD
add esp, 8
mov dword ptr [ebp-28], eax
push dword ptr [ebp-20]
push dword ptr [ebp-28]
mov eax, dword ptr [ebp-20]
mov ecx, dword ptr [eax+108]
push dword ptr [ecx+40]
call SYMBFINDOPOVLPROC
add esp, 12
mov dword ptr [ebp-28], eax
jmp .Lt_0160
.Lt_0162:
cmp dword ptr [ebp+24], 0
je .Lt_0163
push -1
mov eax, dword ptr [ebp+48]
and eax, 1
test eax, eax
setne al
shr eax, 1
sbb eax, eax
push eax
push 3
push dword ptr [ebp+24]
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax+92]
push dword ptr [ecx+28]
call SYMBLOOKUPBYNAMEANDCLASS
add esp, 20
mov dword ptr [ebp-28], eax
mov dword ptr [ebp-16], 0
mov eax, dword ptr [ebp-20]
mov ecx, dword ptr [eax+4]
and ecx, 32768
test ecx, ecx
je .Lt_0165
mov ecx, dword ptr [ebp-20]
mov eax, dword ptr [ecx+24]
and eax, 511
test eax, eax
je .Lt_0167
mov dword ptr [ebp-16], 1
.Lt_0167:
.Lt_0166:
.Lt_0165:
.Lt_0164:
push dword ptr [ebp-16]
push dword ptr [ebp-20]
push dword ptr [ebp-28]
call SYMBFINDOVERLOADPROC
add esp, 12
mov dword ptr [ebp-28], eax
.Lt_0163:
.Lt_0160:
cmp dword ptr [ebp-28], 0
je .Lt_0169
mov eax, dword ptr [ebp-28]
mov ecx, dword ptr [eax+4]
and ecx, 536870912
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
test ecx, ecx
jne .Lt_016B
mov dword ptr [ebp-28], 0
.Lt_016B:
.Lt_016A:
.Lt_0169:
.Lt_0168:
.Lt_015F:
.Lt_015E:
cmp dword ptr [ebp-28], 0
je .Lt_016D
mov ecx, dword ptr [ebp-28]
mov eax, dword ptr [ecx+4]
and eax, 1073741824
test eax, eax
je .Lt_016F
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax+124]
dec dword ptr [ecx+152]
.Lt_016F:
.Lt_016E:
push dword ptr [ebp-28]
call SYMBPROCGETVTABLEINDEX
add esp, 4
push eax
push dword ptr [ebp-20]
call SYMBPROCSETVTABLEINDEX
add esp, 8
mov eax, dword ptr [ebp-20]
mov ecx, dword ptr [eax+108]
mov eax, dword ptr [ebp-28]
mov dword ptr [ecx+72], eax
jmp .Lt_016C
.Lt_016D:
mov eax, dword ptr [ebp-20]
mov ecx, dword ptr [eax+4]
and ecx, 536870912
test ecx, ecx
je .Lt_0171
push dword ptr [ebp+12]
call SYMBCOMPADDVIRTUAL
add esp, 4
push eax
push dword ptr [ebp-20]
call SYMBPROCSETVTABLEINDEX
add esp, 8
.Lt_0171:
.Lt_0170:
.Lt_016C:
.Lt_015B:
.Lt_015A:
mov eax, dword ptr [ebp-20]
mov dword ptr [ebp-4], eax
.Lt_0116:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HSETUPPROC, .-HSETUPPROC
.balign 16
HCALCTYPESDIFF:
.type HCALCTYPESDIFF, @function
push ebp
mov ebp, esp
sub esp, 68
push ebx
mov dword ptr [ebp-4], 0
.Lt_0202:
mov dword ptr [ebp-4], 0
and dword ptr [ebp+8], 511
and dword ptr [ebp+20], 511
mov eax, dword ptr [ebp+20]
and eax, 480
je .Lt_0204
mov dword ptr [ebp-20], 22
jmp .Lt_048B
.Lt_0204:
mov eax, dword ptr [ebp+20]
and eax, 31
mov dword ptr [ebp-20], eax
.Lt_048B:
mov eax, dword ptr [ebp-20]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax]
mov dword ptr [ebp-8], ebx
mov ebx, dword ptr [ebp+8]
and ebx, 480
je .Lt_0206
mov dword ptr [ebp-24], 22
jmp .Lt_048C
.Lt_0206:
mov ebx, dword ptr [ebp+8]
and ebx, 31
mov dword ptr [ebp-24], ebx
.Lt_048C:
mov ebx, dword ptr [ebp-24]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx]
mov dword ptr [ebp-28], eax
jmp .Lt_0209
.Lt_020B:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-32], eax
jmp .Lt_020D
.Lt_020F:
cmp dword ptr [ebp+8], 3
jne .Lt_0211
.Lt_0212:
cmp dword ptr [ebp+20], 3
jne .Lt_0214
.Lt_0215:
mov dword ptr [ebp-4], 48
jmp .Lt_0203
jmp .Lt_0213
.Lt_0214:
cmp dword ptr [ebp+20], 6
jne .Lt_0216
.Lt_0217:
mov dword ptr [ebp-4], 24
jmp .Lt_0203
.Lt_0216:
.Lt_0213:
mov dword ptr [ebp-4], 0
jmp .Lt_0203
jmp .Lt_0210
.Lt_0211:
cmp dword ptr [ebp+8], 6
jne .Lt_0218
.Lt_0219:
cmp dword ptr [ebp+20], 3
jne .Lt_021B
.Lt_021C:
mov dword ptr [ebp-4], 24
jmp .Lt_0203
jmp .Lt_021A
.Lt_021B:
cmp dword ptr [ebp+20], 6
jne .Lt_021D
.Lt_021E:
mov dword ptr [ebp-4], 48
jmp .Lt_0203
.Lt_021D:
.Lt_021A:
mov dword ptr [ebp-4], 0
jmp .Lt_0203
jmp .Lt_0210
.Lt_0218:
cmp dword ptr [ebp+8], 35
jne .Lt_021F
.Lt_0220:
cmp dword ptr [ebp+20], 3
jne .Lt_0222
.Lt_0223:
mov dword ptr [ebp-4], 48
jmp .Lt_0203
jmp .Lt_0221
.Lt_0222:
cmp dword ptr [ebp+20], 6
jne .Lt_0224
.Lt_0225:
mov dword ptr [ebp-4], 24
jmp .Lt_0203
.Lt_0224:
.Lt_0221:
jmp .Lt_0210
.Lt_021F:
cmp dword ptr [ebp+8], 38
jne .Lt_0226
.Lt_0227:
cmp dword ptr [ebp+20], 3
jne .Lt_0229
.Lt_022A:
mov dword ptr [ebp-4], 24
jmp .Lt_0203
jmp .Lt_0228
.Lt_0229:
cmp dword ptr [ebp+20], 6
jne .Lt_022B
.Lt_022C:
mov dword ptr [ebp-4], 48
jmp .Lt_0203
.Lt_022B:
.Lt_0228:
jmp .Lt_0210
.Lt_0226:
cmp dword ptr [ebp+20], 3
je .Lt_0230
.Lt_0231:
cmp dword ptr [ebp+20], 6
jne .Lt_022F
.Lt_0230:
cmp dword ptr [ebp+28], 0
jne .Lt_0233
mov dword ptr [ebp-4], 0
jmp .Lt_0203
.Lt_0233:
.Lt_0232:
mov eax, dword ptr [ebp+28]
mov ebx, dword ptr [eax]
cmp ebx, 20
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_0235
mov dword ptr [ebp-4], 0
jmp .Lt_0203
.Lt_0235:
.Lt_0234:
.Lt_022F:
.Lt_022E:
.Lt_022D:
.Lt_0210:
cmp dword ptr [ebp+20], 9
jne .Lt_0237
mov ebx, dword ptr [ebp+20]
and ebx, -512
mov eax, dword ptr [ebp+20]
imul eax, 28
mov ecx, dword ptr [SYMB_DTYPETB+eax+16]
and ecx, 511
or ebx, ecx
mov dword ptr [ebp+20], ebx
.Lt_0237:
.Lt_0236:
mov ebx, dword ptr [ebp+8]
and ebx, 480
test ebx, ebx
je .Lt_0239
mov ebx, dword ptr [ebp+20]
and ebx, 480
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_023B
cmp dword ptr [ebp+28], 0
jne .Lt_023D
mov dword ptr [ebp-4], 0
jmp .Lt_0203
.Lt_023D:
.Lt_023C:
push 0
push dword ptr [ebp+28]
push dword ptr [ebp+20]
push dword ptr [ebp+8]
call ASTCHECKCONVNONPTRTOPTR
add esp, 16
test eax, eax
je .Lt_023F
mov dword ptr [ebp-4], 0
jmp .Lt_0203
.Lt_023F:
.Lt_023E:
mov dword ptr [ebp-4], 1
jmp .Lt_0203
.Lt_023B:
.Lt_023A:
mov eax, dword ptr [ebp+8]
cmp eax, 32
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp+20]
cmp ebx, 32
sete bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
je .Lt_0241
mov dword ptr [ebp-4], 24
jmp .Lt_0203
.Lt_0241:
.Lt_0240:
mov ebx, dword ptr [ebp+8]
and ebx, 480
sar ebx, 5
mov eax, dword ptr [ebp+20]
and eax, 480
sar eax, 5
cmp ebx, eax
jne .Lt_0243
mov eax, dword ptr [ebp+8]
and eax, 31
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp+20]
and eax, 31
mov dword ptr [ebp-16], eax
mov eax, dword ptr [ebp-12]
and eax, 480
je .Lt_0244
mov dword ptr [ebp-44], 22
jmp .Lt_048D
.Lt_0244:
mov eax, dword ptr [ebp-12]
and eax, 31
mov dword ptr [ebp-44], eax
.Lt_048D:
mov eax, dword ptr [ebp-44]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax]
test ebx, ebx
sete bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-60], ebx
mov ebx, dword ptr [ebp-16]
and ebx, 480
je .Lt_0246
mov dword ptr [ebp-48], 22
jmp .Lt_048E
.Lt_0246:
mov ebx, dword ptr [ebp-16]
and ebx, 31
mov dword ptr [ebp-48], ebx
.Lt_048E:
mov ebx, dword ptr [ebp-48]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx]
test eax, eax
sete al
shr eax, 1
sbb eax, eax
and eax, dword ptr [ebp-60]
mov dword ptr [ebp-64], eax
mov eax, dword ptr [ebp-12]
and eax, 480
je .Lt_0248
mov dword ptr [ebp-52], 22
jmp .Lt_048F
.Lt_0248:
mov eax, dword ptr [ebp-12]
and eax, 31
mov dword ptr [ebp-52], eax
.Lt_048F:
mov eax, dword ptr [ebp-52]
imul eax, 28
mov dword ptr [ebp-68], eax
mov eax, dword ptr [ebp-16]
and eax, 480
je .Lt_024A
mov dword ptr [ebp-56], 22
jmp .Lt_0490
.Lt_024A:
mov eax, dword ptr [ebp-16]
and eax, 31
mov dword ptr [ebp-56], eax
.Lt_0490:
mov eax, dword ptr [ebp-56]
imul eax, 28
mov ebx, dword ptr [ebp-68]
mov ecx, dword ptr [SYMB_DTYPETB+eax+4]
cmp ecx, dword ptr [SYMB_DTYPETB+ebx+4]
sete cl
shr ecx, 1
sbb ecx, ecx
and ecx, dword ptr [ebp-64]
je .Lt_024D
mov ecx, dword ptr [ebp-16]
imul ecx, 15
add ecx, dword ptr [ebp-12]
mov ebx, dword ptr [SYMB_DTYPEMATCHTB+ecx*4-64]
neg ebx
add ebx, 24
mov dword ptr [ebp-4], ebx
jmp .Lt_0203
.Lt_024D:
.Lt_024C:
.Lt_0243:
.Lt_0242:
mov dword ptr [ebp-4], 0
jmp .Lt_0203
jmp .Lt_0238
.Lt_0239:
mov ebx, dword ptr [ebp+20]
and ebx, 480
test ebx, ebx
je .Lt_024E
mov dword ptr [ebp-4], 0
jmp .Lt_0203
.Lt_024E:
.Lt_0238:
mov ebx, dword ptr [ebp+20]
and ebx, 480
je .Lt_024F
mov dword ptr [ebp-36], 22
jmp .Lt_0494
.Lt_024F:
mov ebx, dword ptr [ebp+20]
and ebx, 31
mov dword ptr [ebp-36], ebx
.Lt_0494:
mov ebx, dword ptr [ebp-36]
imul ebx, 15
mov dword ptr [ebp-44], ebx
mov ebx, dword ptr [ebp+8]
and ebx, 480
je .Lt_0251
mov dword ptr [ebp-40], 22
jmp .Lt_0495
.Lt_0251:
mov ebx, dword ptr [ebp+8]
and ebx, 31
mov dword ptr [ebp-40], ebx
.Lt_0495:
mov ebx, dword ptr [ebp-40]
add ebx, dword ptr [ebp-44]
mov ecx, dword ptr [SYMB_DTYPEMATCHTB+ebx*4-64]
neg ecx
add ecx, 24
mov dword ptr [ebp-4], ecx
jmp .Lt_0203
jmp .Lt_020C
.Lt_0253:
mov ecx, dword ptr [ebp+8]
and ecx, 480
test ecx, ecx
je .Lt_0255
mov dword ptr [ebp-4], 0
jmp .Lt_0203
.Lt_0255:
.Lt_0254:
mov ecx, dword ptr [ebp+20]
and ecx, 480
je .Lt_0256
mov dword ptr [ebp-36], 22
jmp .Lt_0497
.Lt_0256:
mov ecx, dword ptr [ebp+20]
and ecx, 31
mov dword ptr [ebp-36], ecx
.Lt_0497:
mov ecx, dword ptr [ebp-36]
imul ecx, 15
mov dword ptr [ebp-44], ecx
mov ecx, dword ptr [ebp+8]
and ecx, 480
je .Lt_0258
mov dword ptr [ebp-40], 22
jmp .Lt_0498
.Lt_0258:
mov ecx, dword ptr [ebp+8]
and ecx, 31
mov dword ptr [ebp-40], ecx
.Lt_0498:
mov ecx, dword ptr [ebp-40]
add ecx, dword ptr [ebp-44]
mov ebx, dword ptr [SYMB_DTYPEMATCHTB+ecx*4-64]
neg ebx
add ebx, 24
mov dword ptr [ebp-4], ebx
jmp .Lt_0203
jmp .Lt_020C
.Lt_025A:
cmp dword ptr [ebp+8], 3
je .Lt_025D
.Lt_025E:
cmp dword ptr [ebp+8], 35
jne .Lt_025C
.Lt_025D:
mov dword ptr [ebp-4], 48
jmp .Lt_0203
jmp .Lt_025B
.Lt_025C:
cmp dword ptr [ebp+8], 6
je .Lt_0260
.Lt_0261:
cmp dword ptr [ebp+8], 38
jne .Lt_025F
.Lt_0260:
mov dword ptr [ebp-4], 24
jmp .Lt_0203
.Lt_025F:
.Lt_025B:
jmp .Lt_020C
.Lt_020D:
cmp dword ptr [ebp-32], 2
ja .Lt_020C
mov ebx, dword ptr [ebp-32]
jmp dword ptr [.LT_0262+ebx*4]
.LT_0262:
.int .Lt_020F
.int .Lt_0253
.int .Lt_025A
.Lt_020C:
jmp .Lt_0208
.Lt_0263:
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebp-32], ebx
jmp .Lt_0265
.Lt_0267:
mov ebx, dword ptr [ebp+20]
and ebx, 480
test ebx, ebx
je .Lt_0269
mov dword ptr [ebp-4], 0
jmp .Lt_0203
.Lt_0269:
.Lt_0268:
cmp dword ptr [ebp+20], 9
jne .Lt_026B
mov ebx, dword ptr [ebp+20]
and ebx, -512
mov ecx, dword ptr [ebp+20]
imul ecx, 28
mov eax, dword ptr [SYMB_DTYPETB+ecx+16]
and eax, 511
or ebx, eax
mov dword ptr [ebp+20], ebx
.Lt_026B:
.Lt_026A:
mov ebx, dword ptr [ebp+20]
and ebx, 480
je .Lt_026C
mov dword ptr [ebp-36], 22
jmp .Lt_049A
.Lt_026C:
mov ebx, dword ptr [ebp+20]
and ebx, 31
mov dword ptr [ebp-36], ebx
.Lt_049A:
mov ebx, dword ptr [ebp-36]
imul ebx, 15
mov dword ptr [ebp-44], ebx
mov ebx, dword ptr [ebp+8]
and ebx, 480
je .Lt_026E
mov dword ptr [ebp-40], 22
jmp .Lt_049B
.Lt_026E:
mov ebx, dword ptr [ebp+8]
and ebx, 31
mov dword ptr [ebp-40], ebx
.Lt_049B:
mov ebx, dword ptr [ebp-40]
add ebx, dword ptr [ebp-44]
mov eax, dword ptr [SYMB_DTYPEMATCHTB+ebx*4-64]
neg eax
add eax, 24
mov dword ptr [ebp-4], eax
jmp .Lt_0203
jmp .Lt_0264
.Lt_0270:
mov eax, dword ptr [ebp+20]
and eax, 480
je .Lt_0271
mov dword ptr [ebp-36], 22
jmp .Lt_049D
.Lt_0271:
mov eax, dword ptr [ebp+20]
and eax, 31
mov dword ptr [ebp-36], eax
.Lt_049D:
mov eax, dword ptr [ebp-36]
imul eax, 15
mov dword ptr [ebp-44], eax
mov eax, dword ptr [ebp+8]
and eax, 480
je .Lt_0273
mov dword ptr [ebp-40], 22
jmp .Lt_049E
.Lt_0273:
mov eax, dword ptr [ebp+8]
and eax, 31
mov dword ptr [ebp-40], eax
.Lt_049E:
mov eax, dword ptr [ebp-40]
add eax, dword ptr [ebp-44]
mov ebx, dword ptr [SYMB_DTYPEMATCHTB+eax*4-64]
neg ebx
add ebx, 24
mov dword ptr [ebp-4], ebx
jmp .Lt_0203
jmp .Lt_0264
.Lt_0265:
cmp dword ptr [ebp-32], 1
ja .Lt_0264
mov ebx, dword ptr [ebp-32]
jmp dword ptr [.LT_0275+ebx*4]
.LT_0275:
.int .Lt_0267
.int .Lt_0270
.Lt_0264:
jmp .Lt_0208
.Lt_0276:
cmp dword ptr [ebp-8], 2
jne .Lt_0278
.Lt_0279:
mov dword ptr [ebp-4], 48
jmp .Lt_0277
.Lt_0278:
cmp dword ptr [ebp-8], 0
jne .Lt_027A
.Lt_027B:
cmp dword ptr [ebp+20], 3
jne .Lt_027D
.Lt_027E:
mov dword ptr [ebp-4], 48
jmp .Lt_027C
.Lt_027D:
cmp dword ptr [ebp+20], 6
jne .Lt_027F
.Lt_0280:
mov dword ptr [ebp-4], 24
.Lt_027F:
.Lt_027C:
.Lt_027A:
.Lt_0277:
jmp .Lt_0208
.Lt_0209:
cmp dword ptr [ebp-28], 2
ja .Lt_0208
mov ebx, dword ptr [ebp-28]
jmp dword ptr [.LT_0281+ebx*4]
.LT_0281:
.int .Lt_020B
.int .Lt_0263
.int .Lt_0276
.Lt_0208:
.Lt_0203:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HCALCTYPESDIFF, .-HCALCTYPESDIFF
.balign 16
HCHECKOVLPARAM:
.type HCHECKOVLPARAM, @function
push ebp
mov ebp, esp
sub esp, 56
push ebx
mov dword ptr [ebp-4], 0
.Lt_0282:
mov eax, dword ptr [ebp+24]
mov dword ptr [eax], 0
cmp dword ptr [ebp+16], 0
jne .Lt_0285
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 2097152
test ebx, ebx
je .Lt_0287
mov dword ptr [ebp-4], 48
jmp .Lt_0283
jmp .Lt_0286
.Lt_0287:
mov dword ptr [ebp-4], 0
jmp .Lt_0283
.Lt_0286:
.Lt_0285:
.Lt_0284:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+24]
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+28]
mov dword ptr [ebp-32], ebx
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+24]
and eax, 511
and eax, 480
sar eax, 5
mov dword ptr [ebp-16], eax
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-12], ebx
mov ebx, dword ptr [ebp+16]
mov eax, dword ptr [ebx+8]
mov dword ptr [ebp-36], eax
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+52]
mov dword ptr [ebp-44], ebx
cmp dword ptr [ebp-44], 3
jne .Lt_028A
.Lt_028B:
cmp dword ptr [ebp+20], 3
je .Lt_028D
mov dword ptr [ebp-4], 0
jmp .Lt_0283
.Lt_028D:
.Lt_028C:
mov ebx, dword ptr [ebp-12]
cmp dword ptr [ebp-8], ebx
je .Lt_028F
mov dword ptr [ebp-4], 0
jmp .Lt_0283
.Lt_028F:
.Lt_028E:
mov ebx, dword ptr [ebp-36]
cmp dword ptr [ebp-32], ebx
je .Lt_0291
mov dword ptr [ebp-4], 0
jmp .Lt_0283
.Lt_0291:
.Lt_0290:
mov ebx, dword ptr [ebp+16]
mov eax, dword ptr [ebx+12]
mov dword ptr [ebp-40], eax
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax+64], 0
jle .Lt_0293
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [ebp-40]
mov ecx, dword ptr [ebx+56]
cmp ecx, dword ptr [eax+64]
setne cl
shr ecx, 1
sbb ecx, ecx
mov eax, dword ptr [ebp-40]
mov ebx, dword ptr [eax+56]
test ebx, ebx
setg bl
shr ebx, 1
sbb ebx, ebx
and ecx, ebx
je .Lt_0295
mov dword ptr [ebp-4], 0
jmp .Lt_0283
.Lt_0295:
.Lt_0294:
.Lt_0293:
.Lt_0292:
mov dword ptr [ebp-4], 48
jmp .Lt_0283
jmp .Lt_0288
.Lt_028A:
cmp dword ptr [ebp-44], 2
jne .Lt_0296
.Lt_0297:
cmp dword ptr [ebp+20], 1
jne .Lt_0299
mov ebx, dword ptr [ebp-12]
and ebx, 480
je .Lt_029A
mov dword ptr [ebp-48], 22
jmp .Lt_04A7
.Lt_029A:
mov ebx, dword ptr [ebp-12]
and ebx, 31
mov dword ptr [ebp-48], ebx
.Lt_04A7:
mov ebx, dword ptr [ebp-48]
imul ebx, 28
mov ecx, dword ptr [SYMB_DTYPETB+ebx]
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
mov dword ptr [ebp-56], ecx
mov ecx, dword ptr [ebp-12]
and ecx, 480
je .Lt_029C
mov dword ptr [ebp-52], 22
jmp .Lt_04A8
.Lt_029C:
mov ecx, dword ptr [ebp-12]
and ecx, 31
mov dword ptr [ebp-52], ecx
.Lt_04A8:
mov ecx, dword ptr [ebp-52]
imul ecx, 28
mov ebx, dword ptr [ENV+236]
cmp ebx, dword ptr [SYMB_DTYPETB+ecx+4]
setne bl
shr ebx, 1
sbb ebx, ebx
or ebx, dword ptr [ebp-56]
je .Lt_029F
mov dword ptr [ebp-4], 0
jmp .Lt_0283
.Lt_029F:
.Lt_029E:
mov ebx, dword ptr [ebp-8]
and ebx, 31
mov ecx, dword ptr [ebp-8]
and ecx, 480
add ecx, 32
or ebx, ecx
mov ecx, dword ptr [ebp-8]
and ecx, 261632
sal ecx, 1
or ebx, ecx
mov dword ptr [ebp-8], ebx
inc dword ptr [ebp-16]
.Lt_0299:
.Lt_0298:
.Lt_0296:
.Lt_0288:
cmp dword ptr [ebp+20], 3
jne .Lt_02A1
mov dword ptr [ebp-4], 0
jmp .Lt_0283
.Lt_02A1:
.Lt_02A0:
mov ebx, dword ptr [ebp-8]
and ebx, 511
mov ecx, dword ptr [ebp-12]
and ecx, 511
cmp ebx, ecx
jne .Lt_02A3
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov ecx, dword ptr [ebp-36]
cmp dword ptr [ebp-32], ecx
jne .Lt_02A5
mov dword ptr [ebp-24], -1
jmp .Lt_02A4
.Lt_02A5:
mov ecx, dword ptr [ebp-8]
and ecx, 31
cmp ecx, 18
jne .Lt_02A6
push dword ptr [ebp-32]
push dword ptr [ebp-36]
call SYMBGETUDTBASELEVEL
add esp, 8
mov dword ptr [ebp-20], eax
mov eax, dword ptr [ebp-20]
test eax, eax
setg al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-24], eax
.Lt_02A6:
.Lt_02A4:
cmp dword ptr [ebp-24], 0
je .Lt_02A8
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+8]
and ecx, 32
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+8]
and ebx, 33554432
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
not ebx
and ecx, ebx
je .Lt_02AA
mov ebx, 48
sub ebx, dword ptr [ebp-20]
mov dword ptr [ebp-4], ebx
jmp .Lt_0283
.Lt_02AA:
.Lt_02A9:
mov ebx, dword ptr [ebp-8]
and ebx, 261632
mov ecx, dword ptr [ebp-12]
and ecx, 261632
cmp ebx, ecx
jne .Lt_02AC
mov ecx, 48
sub ecx, dword ptr [ebp-20]
mov dword ptr [ebp-4], ecx
jmp .Lt_0283
.Lt_02AC:
.Lt_02AB:
lea ecx, [ebp-28]
push ecx
mov ecx, dword ptr [ebp+12]
push dword ptr [ecx+52]
push dword ptr [ebp-36]
push dword ptr [ebp-32]
push dword ptr [ebp-12]
push dword ptr [ebp-8]
call SYMBCHECKCONSTASSIGN
add esp, 24
test eax, eax
je .Lt_02AE
mov eax, dword ptr [ebp+24]
mov dword ptr [eax], -1
mov eax, 24
sub eax, dword ptr [ebp-20]
mov dword ptr [ebp-4], eax
jmp .Lt_0283
.Lt_02AE:
.Lt_02AD:
mov dword ptr [ebp-4], 0
jmp .Lt_0283
.Lt_02A8:
.Lt_02A7:
mov eax, dword ptr [ebp-8]
and eax, 480
test eax, eax
je .Lt_02B0
push -1
push dword ptr [ebp+16]
push dword ptr [ebp-32]
push dword ptr [ebp-8]
call ASTPTRCHECK
add esp, 16
test eax, eax
je .Lt_02B2
mov dword ptr [ebp-4], 48
jmp .Lt_0283
.Lt_02B2:
.Lt_02B1:
mov dword ptr [ebp-4], 0
jmp .Lt_0283
.Lt_02B0:
.Lt_02AF:
.Lt_02A3:
.Lt_02A2:
cmp dword ptr [ebp-8], 18
jne .Lt_02B4
.Lt_02B5:
cmp dword ptr [Lt_04B1], 0
jne .Lt_02B7
inc dword ptr [Lt_04B1]
lea eax, [ebp-44]
push eax
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp-32]
call SYMBFINDCTOROVLPROC
add esp, 16
mov dword ptr [ebp-48], eax
dec dword ptr [Lt_04B1]
cmp dword ptr [ebp-48], 0
je .Lt_02B9
mov dword ptr [ebp-4], 6
jmp .Lt_0283
.Lt_02B9:
.Lt_02B8:
.Lt_02B7:
.Lt_02B6:
cmp dword ptr [Lt_04B2], 0
jne .Lt_02BB
inc dword ptr [Lt_04B2]
lea eax, [ebp-44]
push eax
push dword ptr [ebp+16]
push dword ptr [ebp-32]
push dword ptr [ebp-8]
call SYMBFINDCASTOVLPROC
add esp, 16
mov dword ptr [ebp-48], eax
dec dword ptr [Lt_04B2]
cmp dword ptr [ebp-48], 0
je .Lt_02BD
mov dword ptr [ebp-4], 6
jmp .Lt_0283
.Lt_02BD:
.Lt_02BC:
.Lt_02BB:
.Lt_02BA:
mov dword ptr [ebp-4], 0
jmp .Lt_0283
jmp .Lt_02B3
.Lt_02B4:
cmp dword ptr [ebp-8], 9
jne .Lt_02BE
.Lt_02BF:
mov dword ptr [ebp-4], 0
jmp .Lt_0283
jmp .Lt_02B3
.Lt_02BE:
cmp dword ptr [ebp-12], 18
jne .Lt_02C2
.Lt_02C3:
cmp dword ptr [Lt_04B2], 0
jne .Lt_02C5
inc dword ptr [Lt_04B2]
lea eax, [ebp-44]
push eax
push dword ptr [ebp+16]
push dword ptr [ebp-32]
mov eax, dword ptr [ebp+12]
push dword ptr [eax+24]
call SYMBFINDCASTOVLPROC
add esp, 16
mov dword ptr [ebp-48], eax
dec dword ptr [Lt_04B2]
cmp dword ptr [ebp-48], 0
je .Lt_02C7
mov dword ptr [ebp-4], 6
jmp .Lt_0283
.Lt_02C7:
.Lt_02C6:
.Lt_02C5:
.Lt_02C4:
mov dword ptr [ebp-4], 0
jmp .Lt_0283
.Lt_02C2:
.Lt_02C1:
.Lt_02C0:
.Lt_02B3:
mov eax, dword ptr [ebp+12]
push dword ptr [eax+52]
push dword ptr [ebp+16]
push dword ptr [ebp-36]
mov eax, dword ptr [ebp+16]
push dword ptr [eax+4]
push dword ptr [ebp-16]
push dword ptr [ebp-32]
mov eax, dword ptr [ebp+12]
push dword ptr [eax+24]
call HCALCTYPESDIFF
add esp, 28
mov dword ptr [ebp-4], eax
.Lt_0283:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HCHECKOVLPARAM, .-HCHECKOVLPARAM

.section .data
.balign 4
Lt_04B2:
.int 0
.balign 4
Lt_04B1:
.int 0

.section .text
.balign 16
HCHECKCASTOVL:
.type HCHECKCASTOVL, @function
push ebp
mov ebp, esp
sub esp, 28
push ebx
mov dword ptr [ebp-4], 0
.Lt_0344:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+24]
mov dword ptr [ebp-8], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+28]
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp-8]
and eax, 511
mov ebx, dword ptr [ebp+12]
and ebx, 511
cmp eax, ebx
jne .Lt_0347
mov ebx, dword ptr [ebp+16]
cmp dword ptr [ebp-12], ebx
jne .Lt_0349
mov dword ptr [ebp-4], 48
jmp .Lt_0345
.Lt_0349:
.Lt_0348:
mov ebx, dword ptr [ebp-8]
and ebx, 480
test ebx, ebx
je .Lt_034B
mov dword ptr [ebp-4], 0
jmp .Lt_0345
.Lt_034B:
.Lt_034A:
.Lt_0347:
.Lt_0346:
mov ebx, dword ptr [ebp-8]
and ebx, 480
je .Lt_034C
mov dword ptr [ebp-16], 22
jmp .Lt_04B3
.Lt_034C:
mov ebx, dword ptr [ebp-8]
and ebx, 31
mov dword ptr [ebp-16], ebx
.Lt_04B3:
mov ebx, dword ptr [ebp-16]
mov dword ptr [ebp-20], ebx
cmp dword ptr [ebp-20], 18
je .Lt_0351
.Lt_0352:
cmp dword ptr [ebp-20], 9
jne .Lt_0350
.Lt_0351:
mov dword ptr [ebp-4], 0
jmp .Lt_0345
jmp .Lt_034E
.Lt_0350:
mov ebx, dword ptr [ebp+12]
and ebx, 480
je .Lt_0354
mov dword ptr [ebp-24], 22
jmp .Lt_04B4
.Lt_0354:
mov ebx, dword ptr [ebp+12]
and ebx, 31
mov dword ptr [ebp-24], ebx
.Lt_04B4:
mov ebx, dword ptr [ebp-24]
mov dword ptr [ebp-28], ebx
cmp dword ptr [ebp-28], 18
jne .Lt_0358
.Lt_0359:
mov dword ptr [ebp-4], 0
jmp .Lt_0345
.Lt_0358:
.Lt_0356:
.Lt_0353:
.Lt_034E:
push 0
push 0
push dword ptr [ebp+16]
push dword ptr [ebp+12]
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+24]
and eax, 511
and eax, 480
sar eax, 5
push eax
push dword ptr [ebp-12]
push dword ptr [ebp-8]
call HCALCTYPESDIFF
add esp, 28
mov dword ptr [ebp-4], eax
.Lt_0345:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HCHECKCASTOVL, .-HCHECKCASTOVL
.balign 16
HDELPARAMS:
.type HDELPARAMS, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_0383:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+72]
mov dword ptr [ebp-4], ebx
.Lt_0385:
cmp dword ptr [ebp-4], 0
je .Lt_0386
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebx+160]
mov dword ptr [ebp-8], eax
push dword ptr [ebp-4]
call SYMBFREESYMBOL
add esp, 4
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
jmp .Lt_0385
.Lt_0386:
.Lt_0384:
pop ebx
mov esp, ebp
pop ebp
ret
.size HDELPARAMS, .-HDELPARAMS
.balign 16
HADDTOGLOBCTORLIST:
.type HADDTOGLOBCTORLIST, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_038B:
mov eax, dword ptr [ebp+8]
lea ebx, [eax+8]
push ebx
call LISTNEWNODE
add esp, 4
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+4], 0
je .Lt_038E
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
mov eax, dword ptr [ebp-8]
mov dword ptr [ebx+4], eax
jmp .Lt_038D
.Lt_038E:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-8]
mov dword ptr [eax], ebx
.Lt_038D:
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+4], 0
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp-8]
mov dword ptr [ebx+4], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+12]
mov dword ptr [eax], ebx
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ebx
.Lt_038C:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HADDTOGLOBCTORLIST, .-HADDTOGLOBCTORLIST
.balign 16
HAREMETHODSCOMPATIBLE:
.type HAREMETHODSCOMPATIBLE, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
push esi
mov dword ptr [ebp-4], 0
.Lt_039E:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+12]
mov ecx, dword ptr [ebx+24]
cmp ecx, dword ptr [eax+24]
setne cl
shr ecx, 1
sbb ecx, ecx
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+12]
mov esi, dword ptr [eax+28]
cmp esi, dword ptr [ebx+28]
setne al
shr eax, 1
sbb eax, eax
or ecx, eax
je .Lt_03A1
mov dword ptr [ebp-4], 224
jmp .Lt_039F
.Lt_03A1:
.Lt_03A0:
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+4]
and ecx, 33554432
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 33554432
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
cmp ecx, ebx
je .Lt_03A3
mov dword ptr [ebp-4], 224
jmp .Lt_039F
.Lt_03A3:
.Lt_03A2:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call SYMBAREPROCMODESEQUAL
add esp, 8
test eax, eax
jne .Lt_03A5
mov dword ptr [ebp-4], 225
jmp .Lt_039F
.Lt_03A5:
.Lt_03A4:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 1048576
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax+4]
and ecx, 1048576
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
cmp ebx, ecx
je .Lt_03A7
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ecx+4]
and ebx, 1048576
test ebx, ebx
je .Lt_03A9
mov dword ptr [ebp-4], 228
jmp .Lt_039F
.Lt_03A9:
.Lt_03A8:
mov dword ptr [ebp-4], 229
jmp .Lt_039F
.Lt_03A7:
.Lt_03A6:
mov ebx, dword ptr [ebp+8]
movsx ecx, word ptr [ebx+64]
mov ebx, dword ptr [ebp+12]
movsx eax, word ptr [ebx+64]
cmp ecx, eax
je .Lt_03AB
mov dword ptr [ebp-4], 230
jmp .Lt_039F
.Lt_03AB:
.Lt_03AA:
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+72]
mov dword ptr [ebp-8], ecx
mov ecx, dword ptr [ebp+12]
mov eax, dword ptr [ecx+72]
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp-8]
mov ecx, dword ptr [eax+160]
mov dword ptr [ebp-8], ecx
mov ecx, dword ptr [ebp-12]
mov eax, dword ptr [ecx+160]
mov dword ptr [ebp-12], eax
.Lt_03AC:
cmp dword ptr [ebp-8], 0
je .Lt_03AD
push dword ptr [ebp-12]
push dword ptr [ebp-8]
call SYMBPARAMISSAME
add esp, 8
test eax, eax
jne .Lt_03AF
mov dword ptr [ebp-4], 230
jmp .Lt_039F
.Lt_03AF:
.Lt_03AE:
mov eax, dword ptr [ebp-8]
mov ecx, dword ptr [eax+160]
mov dword ptr [ebp-8], ecx
mov ecx, dword ptr [ebp-12]
mov eax, dword ptr [ecx+160]
mov dword ptr [ebp-12], eax
jmp .Lt_03AC
.Lt_03AD:
mov dword ptr [ebp-4], 0
.Lt_039F:
mov eax, dword ptr [ebp-4]
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size HAREMETHODSCOMPATIBLE, .-HAREMETHODSCOMPATIBLE
.balign 16
HSUBORFUNCTOSTR:
.type HSUBORFUNCTOSTR, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
.Lt_03D1:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+24]
and ebx, 511
test ebx, ebx
jne .Lt_03D4
push 0
push -1
push 4
push offset Lt_03D5
push -1
push dword ptr [ebp+8]
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea ebx, [ebp-12]
push ebx
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+8]
call fb_StrAssign
add esp, 20
jmp .Lt_03D3
.Lt_03D4:
push 0
push -1
push 9
push offset Lt_03D7
push -1
push dword ptr [ebp+8]
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+8]
call fb_StrAssign
add esp, 20
.Lt_03D3:
.Lt_03D2:
pop ebx
mov esp, ebp
pop ebp
ret
.size HSUBORFUNCTOSTR, .-HSUBORFUNCTOSTR
.balign 16
HPROCMODETOSTR:
.type HPROCMODETOSTR, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
.Lt_03D9:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 4096
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax+4]
and ecx, 8192
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
or ebx, ecx
je .Lt_03DC
mov ecx, dword ptr [ebp+12]
mov ebx, dword ptr [ecx+80]
mov dword ptr [ebp-4], ebx
cmp dword ptr [ebp-4], 1
je .Lt_03E0
.Lt_03E1:
cmp dword ptr [ebp-4], 2
jne .Lt_03DF
.Lt_03E0:
push 0
push -1
push 9
push offset Lt_03E2
push -1
push dword ptr [ebp+8]
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
lea ebx, [ebp-16]
push ebx
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+8]
call fb_StrAssign
add esp, 20
jmp .Lt_03DD
.Lt_03DF:
cmp dword ptr [ebp-4], 4
jne .Lt_03E4
.Lt_03E5:
push 0
push -1
push 8
push offset Lt_03E6
push -1
push dword ptr [ebp+8]
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
lea eax, [ebp-16]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+8]
call fb_StrAssign
add esp, 20
.Lt_03E4:
.Lt_03DD:
jmp .Lt_03DB
.Lt_03DC:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+80]
mov dword ptr [ebp-4], ebx
cmp dword ptr [ebp-4], 1
je .Lt_03EB
.Lt_03EC:
cmp dword ptr [ebp-4], 2
jne .Lt_03EA
.Lt_03EB:
mov ebx, dword ptr [ENV+216]
mov dword ptr [ebp-8], ebx
cmp dword ptr [ebp-8], 1
je .Lt_03F0
.Lt_03F1:
cmp dword ptr [ebp-8], 2
jne .Lt_03EF
.Lt_03F0:
jmp .Lt_03ED
.Lt_03EF:
push 0
push -1
push 9
push offset Lt_03E2
push -1
push dword ptr [ebp+8]
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
lea ebx, [ebp-20]
push ebx
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+8]
call fb_StrAssign
add esp, 20
.Lt_03F2:
.Lt_03ED:
jmp .Lt_03E8
.Lt_03EA:
cmp dword ptr [ebp-4], 4
jne .Lt_03F4
.Lt_03F5:
cmp dword ptr [ENV+216], 4
je .Lt_03F7
push 0
push -1
push 8
push offset Lt_03E6
push -1
push dword ptr [ebp+8]
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
lea eax, [ebp-16]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+8]
call fb_StrAssign
add esp, 20
.Lt_03F7:
.Lt_03F6:
jmp .Lt_03E8
.Lt_03F4:
cmp dword ptr [ebp-4], 3
jne .Lt_03F9
.Lt_03FA:
cmp dword ptr [ENV+216], 3
je .Lt_03FC
push 0
push -1
push 7
push offset Lt_03FD
push -1
push dword ptr [ebp+8]
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
lea eax, [ebp-16]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+8]
call fb_StrAssign
add esp, 20
.Lt_03FC:
.Lt_03FB:
.Lt_03F9:
.Lt_03E8:
.Lt_03DB:
.Lt_03DA:
pop ebx
mov esp, ebp
pop ebp
ret
.size HPROCMODETOSTR, .-HPROCMODETOSTR
.balign 16
HPARAMSTOSTR:
.type HPARAMSTOSTR, @function
push ebp
mov ebp, esp
sub esp, 68
push ebx
.Lt_040C:
push 0
push -1
push 2
push offset Lt_0401
push -1
push dword ptr [ebp+8]
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+8]
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+72]
mov dword ptr [ebp-16], ebx
cmp dword ptr [ebp-16], 0
setne bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax+4]
and ecx, 2048
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
and ebx, ecx
je .Lt_0410
mov ecx, dword ptr [ebp-16]
mov ebx, dword ptr [ecx+160]
mov dword ptr [ebp-16], ebx
.Lt_0410:
.Lt_040F:
.Lt_0411:
cmp dword ptr [ebp-16], 0
je .Lt_0412
mov ebx, dword ptr [ebp-16]
mov ecx, dword ptr [ebx+52]
mov dword ptr [ebp-32], ecx
cmp dword ptr [ebp-32], 1
je .Lt_0415
.Lt_0416:
cmp dword ptr [ebp-32], 2
je .Lt_0415
.Lt_0417:
cmp dword ptr [ebp-32], 3
jne .Lt_0414
.Lt_0415:
cmp dword ptr [ebp-32], 1
je .Lt_041A
.Lt_041B:
cmp dword ptr [ebp-32], 2
jne .Lt_0419
.Lt_041A:
mov ecx, dword ptr [ENV+136]
test ecx, ecx
sete cl
shr ecx, 1
sbb ecx, ecx
mov ebx, dword ptr [ebp-16]
push dword ptr [ebx+28]
mov ebx, dword ptr [ebp-16]
push dword ptr [ebx+24]
mov ebx, ecx
call SYMBGETDEFAULTPARAMMODE
add esp, 8
cmp eax, dword ptr [ebp-32]
setne al
shr eax, 1
sbb eax, eax
and ebx, eax
je .Lt_041D
cmp dword ptr [ebp-32], 1
jne .Lt_041F
push 0
push -1
push 7
push offset Lt_0420
push -1
push dword ptr [ebp+8]
mov dword ptr [ebp-68], 0
mov dword ptr [ebp-64], 0
mov dword ptr [ebp-60], 0
lea eax, [ebp-68]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+8]
call fb_StrAssign
add esp, 20
jmp .Lt_041E
.Lt_041F:
push 0
push -1
push 7
push offset Lt_0422
push -1
push dword ptr [ebp+8]
mov dword ptr [ebp-68], 0
mov dword ptr [ebp-64], 0
mov dword ptr [ebp-60], 0
lea eax, [ebp-68]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+8]
call fb_StrAssign
add esp, 20
.Lt_041E:
.Lt_041D:
.Lt_041C:
jmp .Lt_0418
.Lt_0419:
cmp dword ptr [ebp-32], 3
jne .Lt_0424
.Lt_0425:
push 0
push -1
push -1
mov eax, dword ptr [ebp-16]
push dword ptr [eax+64]
call HDUMPDYNAMICARRAYDIMENSIONS
add esp, 4
push eax
push -1
push dword ptr [ebp+8]
mov dword ptr [ebp-68], 0
mov dword ptr [ebp-64], 0
mov dword ptr [ebp-60], 0
lea eax, [ebp-68]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+8]
call fb_StrAssign
add esp, 20
.Lt_0424:
.Lt_0418:
push 0
push -1
push -1
push -1
push 0
push 0
mov eax, dword ptr [ebp-16]
push dword ptr [eax+28]
mov eax, dword ptr [ebp-16]
push dword ptr [eax+24]
call SYMBTYPETOSTR
add esp, 16
push eax
push 4
push offset Lt_0427
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
lea eax, [ebp-44]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+8]
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
lea eax, [ebp-56]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+8]
call fb_StrAssign
add esp, 20
jmp .Lt_0413
.Lt_0414:
cmp dword ptr [ebp-32], 4
jne .Lt_042A
.Lt_042B:
push 0
push -1
push 4
push offset Lt_042C
push -1
push dword ptr [ebp+8]
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
lea eax, [ebp-44]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+8]
call fb_StrAssign
add esp, 20
.Lt_042A:
.Lt_0413:
mov eax, dword ptr [ebp-16]
mov ebx, dword ptr [eax+160]
mov dword ptr [ebp-16], ebx
cmp dword ptr [ebp-16], 0
je .Lt_042F
push 0
push -1
push 3
push offset Lt_0409
push -1
push dword ptr [ebp+8]
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
lea ebx, [ebp-44]
push ebx
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+8]
call fb_StrAssign
add esp, 20
.Lt_042F:
.Lt_042E:
jmp .Lt_0411
.Lt_0412:
push 0
push -1
push 2
push offset Lt_0431
push -1
push dword ptr [ebp+8]
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
lea eax, [ebp-28]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+8]
call fb_StrAssign
add esp, 20
.Lt_040D:
pop ebx
mov esp, ebp
pop ebp
ret
.size HPARAMSTOSTR, .-HPARAMSTOSTR
.balign 16
HRESULTTOSTR:
.type HRESULTTOSTR, @function
push ebp
mov ebp, esp
sub esp, 36
push ebx
.Lt_0433:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+24]
and ebx, 511
test ebx, ebx
je .Lt_0436
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 33554432
test eax, eax
je .Lt_0438
push 0
push -1
push 7
push offset Lt_0439
push -1
push dword ptr [ebp+8]
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
lea eax, [ebp-36]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+8]
call fb_StrAssign
add esp, 20
.Lt_0438:
.Lt_0437:
push 0
push -1
push -1
push -1
push 0
push 0
mov eax, dword ptr [ebp+12]
push dword ptr [eax+28]
mov eax, dword ptr [ebp+12]
push dword ptr [eax+24]
call SYMBTYPETOSTR
add esp, 16
push eax
push 5
push offset Lt_043B
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+8]
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ebp-24]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push dword ptr [ebp+8]
call fb_StrAssign
add esp, 20
.Lt_0436:
.Lt_0435:
.Lt_0434:
pop ebx
mov esp, ebp
pop ebp
ret
.size HRESULTTOSTR, .-HRESULTTOSTR
	#fbc-1.01.0/src/compiler/symb-proc.bas' compilation took 0.05158807686530054 secs

.section .rodata
.balign 4
Lt_0000:	.ascii	"\0"
.balign 4
Lt_0007:	.ascii	".\0"
.balign 4
Lt_0021:	.ascii	"THIS\0"

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
Lt_0182:	.ascii	"{fbfp}\0"
.balign 4
Lt_0183:	.ascii	"$\0"
.balign 4
Lt_01C0:	.ascii	"fb$result\0"
.balign 4
Lt_03D5:	.ascii	"sub\0"
.balign 4
Lt_03D7:	.ascii	"function\0"
.balign 4
Lt_03E2:	.ascii	" stdcall\0"
.balign 4
Lt_03E6:	.ascii	" pascal\0"
.balign 4
Lt_03FD:	.ascii	" cdecl\0"
.balign 4
Lt_0401:	.ascii	"(\0"
.balign 4
Lt_0409:	.ascii	", \0"
.balign 4
Lt_040A:	.ascii	"any\0"
.balign 4
Lt_040B:	.ascii	") \0"
.balign 4
Lt_0420:	.ascii	"byval \0"
.balign 4
Lt_0422:	.ascii	"byref \0"
.balign 4
Lt_0427:	.ascii	"as \0"
.balign 4
Lt_042C:	.ascii	"...\0"
.balign 4
Lt_0431:	.ascii	")\0"
.balign 4
Lt_0439:	.ascii	" byref\0"
.balign 4
Lt_043B:	.ascii	" as \0"
.balign 4
Lt_0448:	.ascii	"constructor\0"
.balign 4
Lt_044A:	.ascii	"destructor\0"
.balign 4
Lt_044C:	.ascii	"operator.\0"
.balign 4
Lt_0452:	.ascii	".property.\0"
.balign 4
Lt_0455:	.ascii	"get\0"
.balign 4
Lt_0456:	.ascii	"set\0"

.section .ctors, "aw", @progbits
.int fb_ctor__symbzproc
