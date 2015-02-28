	.intel_syntax noprefix

	#FreeBASIC-1.01.0-source/src/compiler/symb-var.bas' compilation started at 16:30:08 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl SYMBVARINIT
SYMBVARINIT:
.type SYMBVARINIT, @function
.Lt_005F:
push 0
push 0
push 0
push 0
push 0
push 0
push offset Lt_0062
push 0
push 0
push 0
call SYMBSTRUCTBEGIN
add esp, 40
mov dword ptr [SYMB+99576], eax
push 0
push 0
push 0
push 0
push 0
push 7
push offset Lt_0066
push 0
push offset Lt_0063
push dword ptr [SYMB+99576]
call SYMBADDFIELD
add esp, 40
push 0
push 0
push 0
push 0
push 0
push 7
push offset Lt_0066
push 0
push offset Lt_0064
push dword ptr [SYMB+99576]
call SYMBADDFIELD
add esp, 40
push 0
push 0
push 0
push 0
push 0
push 7
push offset Lt_0066
push 0
push offset Lt_0065
push dword ptr [SYMB+99576]
call SYMBADDFIELD
add esp, 40
push 0
push dword ptr [SYMB+99576]
call SYMBSTRUCTEND
add esp, 8
mov dword ptr [SYMB+99560], 0
mov eax, dword ptr [ENV+236]
mov dword ptr [SYMB+99564], eax
mov eax, dword ptr [ENV+236]
sal eax, 1
mov dword ptr [SYMB+99568], eax
mov eax, dword ptr [ENV+236]
imul eax, 5
mov dword ptr [SYMB+99572], eax
mov eax, dword ptr [ENV+236]
mov dword ptr [SYMB+99580], eax
mov eax, dword ptr [ENV+236]
sal eax, 1
mov dword ptr [SYMB+99584], eax
.Lt_0060:
ret
.size SYMBVARINIT, .-SYMBVARINIT

.section .bss
.balign 4
	.lcomm	Lt_0067,16

.section .data
.balign 4
Lt_0066:
.int Lt_0067
.int Lt_0067
.int 16
.int 16
.int 1
.int 1
.int 0
.int 0

.section .text
.balign 16

.globl SYMBVAREND
SYMBVAREND:
.type SYMBVAREND, @function
.Lt_0068:
.Lt_0069:
ret
.size SYMBVAREND, .-SYMBVAREND
.balign 16

.globl SYMBGETDESCTYPEARRAYDTYPE
SYMBGETDESCTYPEARRAYDTYPE:
.type SYMBGETDESCTYPEARRAYDTYPE, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_006A:
push dword ptr [ebp+8]
call SYMBUDTGETFIRSTFIELD
add esp, 4
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+24]
and ebx, 511
and ebx, 31
mov eax, dword ptr [ebp-4]
mov ecx, dword ptr [eax+24]
and ecx, 511
and ecx, 480
add ecx, -32
or ebx, ecx
mov ecx, dword ptr [ebp-4]
mov eax, dword ptr [ecx+24]
and eax, 511
and eax, 261632
sar eax, 1
and eax, 261632
or ebx, eax
mov eax, dword ptr [ebp+12]
mov dword ptr [eax], ebx
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebp+16]
mov ecx, dword ptr [ebx+28]
mov dword ptr [eax], ecx
.Lt_006B:
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBGETDESCTYPEARRAYDTYPE, .-SYMBGETDESCTYPEARRAYDTYPE
.balign 16

.globl SYMBGETDESCTYPEDIMENSIONS
SYMBGETDESCTYPEDIMENSIONS:
.type SYMBGETDESCTYPEDIMENSIONS, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
push esi
push edi
mov dword ptr [ebp-4], 0
.Lt_006C:
push 8
push offset Lt_006E
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax+16]
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_0070
mov dword ptr [ebp-4], -1
jmp .Lt_006D
.Lt_0070:
.Lt_006F:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ENV+236]
imul ebx, 5
mov esi, ebx
mov ecx, esi
sar ecx, 31
mov edi, dword ptr [eax+36]
mov ebx, dword ptr [eax+40]
sub edi, esi
sbb ebx, ecx
mov esi, edi
mov dword ptr [ebp-8], esi
mov esi, dword ptr [ENV+236]
imul esi, 3
mov edi, dword ptr [ebp-8]
mov eax, edi
cdq
idiv esi
mov edi, eax
mov dword ptr [ebp-12], edi
mov edi, dword ptr [ebp-12]
mov dword ptr [ebp-4], edi
.Lt_006D:
mov eax, dword ptr [ebp-4]
pop edi
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBGETDESCTYPEDIMENSIONS, .-SYMBGETDESCTYPEDIMENSIONS
.balign 16

.globl SYMBADDARRAYDESCRIPTORTYPE
SYMBADDARRAYDESCRIPTORTYPE:
.type SYMBADDARRAYDESCRIPTORTYPE, @function
push ebp
mov ebp, esp
sub esp, 52
push ebx
mov dword ptr [ebp-4], 0
.Lt_0071:
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov eax, dword ptr [ebp+12]
and eax, 511
cmp eax, 17
jne .Lt_0075
mov eax, dword ptr [ebp+12]
and eax, -512
or eax, 3
mov dword ptr [ebp+12], eax
.Lt_0075:
.Lt_0074:
push 0
push 8
push offset Lt_006E
push -1
lea eax, [ebp-28]
push eax
call fb_StrAssign
add esp, 20
cmp dword ptr [ebp+8], 0
jle .Lt_0077
push 0
push -1
push dword ptr [ebp+8]
call fb_IntToStr
add esp, 4
push eax
push -1
lea eax, [ebp-28]
push eax
call fb_StrConcatAssign
add esp, 20
.Lt_0077:
.Lt_0076:
push 0
push 2
push offset Lt_0078
push -1
lea eax, [ebp-16]
push eax
call fb_StrAssign
add esp, 20
push 0
push -1
lea eax, [ebp-28]
push eax
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
push 0
push 2
push offset Lt_0079
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
push dword ptr [ebp+16]
push dword ptr [ebp+12]
lea eax, [ebp-16]
push eax
call SYMBMANGLETYPE
add esp, 12
call SYMBMANGLERESETABBREV
push 0
push 2
push offset Lt_007A
push -1
lea eax, [ebp-16]
push eax
call fb_StrConcatAssign
add esp, 20
mov dword ptr [ebp-48], 0
lea eax, [ebp-44]
push eax
lea eax, [ebp-40]
push eax
mov dword ptr [ebp-52], 0
lea eax, [ebp-52]
push eax
lea eax, [ebp-48]
push eax
push dword ptr [ebp-16]
call SYMBLOOKUPINTERNALLYMANGLEDSUBTYPE
add esp, 20
mov dword ptr [ebp-32], eax
cmp dword ptr [ebp-32], 0
je .Lt_007D
mov eax, dword ptr [ebp-32]
mov dword ptr [ebp-4], eax
lea eax, [ebp-28]
push eax
call fb_StrDelete
add esp, 4
lea eax, [ebp-16]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0072
.Lt_007D:
.Lt_007C:
or dword ptr [ebp-48], 8388608
push 1
push dword ptr [ebp-48]
push 0
push 0
push 0
push dword ptr [ebp-28]
push dword ptr [ebp-16]
push 0
push dword ptr [ebp-44]
push dword ptr [ebp-40]
call SYMBSTRUCTBEGIN
add esp, 40
mov dword ptr [ebp-32], eax
mov dword ptr [Lt_0086], 0
mov dword ptr [Lt_0086+4], 0
mov dword ptr [Lt_0086+8], 0
mov dword ptr [Lt_0086+12], 0
push 0
push 0
push 0
push 0
push dword ptr [ebp+16]
mov eax, dword ptr [ebp+12]
and eax, 31
mov ebx, dword ptr [ebp+12]
and ebx, 480
add ebx, 32
or eax, ebx
mov ebx, dword ptr [ebp+12]
and ebx, 261632
sal ebx, 1
or eax, ebx
push eax
push offset Lt_0087
push 0
push offset Lt_007E
push dword ptr [ebp-32]
call SYMBADDFIELD
add esp, 40
push 0
push 0
push 0
push 0
push dword ptr [ebp+16]
mov eax, dword ptr [ebp+12]
and eax, 31
mov ebx, dword ptr [ebp+12]
and ebx, 480
add ebx, 32
or eax, ebx
mov ebx, dword ptr [ebp+12]
and ebx, 261632
sal ebx, 1
or eax, ebx
push eax
push offset Lt_0087
push 0
push offset Lt_007F
push dword ptr [ebp-32]
call SYMBADDFIELD
add esp, 40
push 0
push 0
push 0
push 0
push 0
push 7
push offset Lt_0087
push 0
push offset Lt_0080
push dword ptr [ebp-32]
call SYMBADDFIELD
add esp, 40
push 0
push 0
push 0
push 0
push 0
push 7
push offset Lt_0087
push 0
push offset Lt_0081
push dword ptr [ebp-32]
call SYMBADDFIELD
add esp, 40
push 0
push 0
push 0
push 0
push 0
push 7
push offset Lt_0087
push 0
push offset Lt_0082
push dword ptr [ebp-32]
call SYMBADDFIELD
add esp, 40
cmp dword ptr [ebp+8], -1
jne .Lt_0084
mov dword ptr [ebp+8], 8
.Lt_0084:
.Lt_0083:
mov dword ptr [Lt_0086], 0
mov dword ptr [Lt_0086+4], 0
mov eax, dword ptr [ebp+8]
dec eax
mov ecx, eax
mov ebx, ecx
sar ebx, 31
mov dword ptr [Lt_0086+8], ecx
mov dword ptr [Lt_0086+12], ebx
push 0
push 0
push 0
push 0
push dword ptr [SYMB+99576]
push 18
push offset Lt_0087
push 1
push offset Lt_0085
push dword ptr [ebp-32]
call SYMBADDFIELD
add esp, 40
push 0
push dword ptr [ebp-32]
call SYMBSTRUCTEND
add esp, 8
mov ecx, dword ptr [ebp-32]
mov dword ptr [ebp-4], ecx
lea ecx, [ebp-28]
push ecx
call fb_StrDelete
add esp, 4
lea ecx, [ebp-16]
push ecx
call fb_StrDelete
add esp, 4
.Lt_0072:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBADDARRAYDESCRIPTORTYPE, .-SYMBADDARRAYDESCRIPTORTYPE

.section .bss
.balign 4
	.lcomm	Lt_0086,16

.section .data
.balign 4
Lt_0087:
.int Lt_0086
.int Lt_0086
.int 16
.int 16
.int 1
.int 1
.int 0
.int 0

.section .text
.balign 16

.globl SYMBADDARRAYDESC
SYMBADDARRAYDESC:
.type SYMBADDARRAYDESC, @function
push ebp
mov ebp, esp
sub esp, 56
push ebx
push esi
mov dword ptr [ebp-4], 0
.Lt_0088:
mov dword ptr [ebp-4], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-40], 0
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 12
jne .Lt_008B
call SYMBUNIQUEID
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp+8]
movsx ebx, word ptr [eax+34]
test ebx, ebx
je .Lt_008D
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebp-12], ebx
.Lt_008D:
.Lt_008C:
mov dword ptr [ebp-24], 128
mov dword ptr [ebp-40], 16
jmp .Lt_008A
.Lt_008B:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 4
test eax, eax
setne al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-32], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 48
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-36], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 8
test eax, eax
setne al
shr eax, 1
sbb eax, eax
or eax, dword ptr [ebp-32]
je .Lt_008F
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+12]
mov dword ptr [ebp-8], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+16]
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+8]
and ebx, 512
mov dword ptr [ebp-40], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 268435456
test eax, eax
je .Lt_0091
push 0
push 0
push dword ptr [ebp-8]
push -1
push offset Lt_00A5
call fb_StrAssign
add esp, 20
push 0
push -1
push 0
mov dword ptr [ebp-44], 0
lea eax, [ebp-44]
push eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+24]
and ebx, 511
push ebx
call HMANGLEBUILTINTYPE
add esp, 8
push eax
push -1
push offset Lt_00A5
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
lea eax, [ebp-56]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
push offset Lt_00A5
call fb_StrAssign
add esp, 20
cmp dword ptr [ENV+104], 1
jne .Lt_0095
push 0
push 2
push offset Lt_0078
push -1
push offset Lt_00A5
call fb_StrConcatAssign
add esp, 20
.Lt_0095:
.Lt_0094:
mov eax, dword ptr [Lt_00A5]
mov dword ptr [ebp-8], eax
.Lt_0091:
.Lt_0090:
jmp .Lt_008E
.Lt_008F:
call SYMBUNIQUEID
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp+8]
movsx ebx, word ptr [eax+34]
test ebx, ebx
je .Lt_0097
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebp-12], ebx
.Lt_0097:
.Lt_0096:
mov dword ptr [ebp-40], 16
.Lt_008E:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 187
mov ebx, eax
mov dword ptr [ebp-24], ebx
cmp dword ptr [ebp-32], 0
jne .Lt_0099
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 16
test eax, eax
je .Lt_009B
mov eax, dword ptr [ebp-24]
and eax, -17
mov ebx, eax
mov dword ptr [ebp-24], ebx
.Lt_009B:
.Lt_009A:
mov ebx, dword ptr [ebp-24]
and ebx, -33
mov eax, ebx
mov dword ptr [ebp-24], eax
.Lt_0099:
.Lt_0098:
.Lt_008A:
mov eax, dword ptr [ebp-24]
or eax, 8388608
mov ebx, eax
mov dword ptr [ebp-24], ebx
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx], 12
jne .Lt_009D
cmp dword ptr [PARSER+92], 0
jne .Lt_009F
mov ebx, dword ptr [PARSER+100]
lea eax, [ebx+52]
mov dword ptr [ebp-28], eax
jmp .Lt_009E
.Lt_009F:
mov dword ptr [ebp-28], 0
.Lt_009E:
jmp .Lt_009C
.Lt_009D:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+148]
mov dword ptr [ebp-28], ebx
.Lt_009C:
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+28]
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+24]
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+56]
call SYMBADDARRAYDESCRIPTORTYPE
add esp, 12
mov dword ptr [ebp-20], eax
push dword ptr [ebp-24]
push dword ptr [ebp-20]
push 18
push dword ptr [ebp-12]
push dword ptr [ebp-8]
push 1
push 0
push dword ptr [ebp-28]
push 0
push 1
call SYMBNEWSYMBOL
add esp, 40
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 0
jne .Lt_00A1
jmp .Lt_0089
.Lt_00A1:
.Lt_00A0:
mov eax, dword ptr [ebp-20]
mov ebx, dword ptr [ebp-16]
mov esi, dword ptr [eax+36]
mov ecx, dword ptr [eax+40]
mov dword ptr [ebx+36], esi
mov dword ptr [ebx+40], ecx
mov esi, dword ptr [ebp-16]
mov dword ptr [esi+44], 0
mov dword ptr [esi+48], 0
mov esi, dword ptr [ebp+8]
mov ecx, dword ptr [esi+8]
and ecx, 2
mov esi, dword ptr [ebp-40]
or esi, ecx
mov ebx, esi
mov ecx, dword ptr [ebp-16]
mov dword ptr [ecx+8], ebx
push dword ptr [ebp-16]
call SYMBVARINITFIELDS
add esp, 4
mov ebx, dword ptr [ebp-16]
mov ecx, dword ptr [ebp+8]
mov dword ptr [ebx+88], ecx
mov ecx, dword ptr [ebp-16]
mov dword ptr [ebp-4], ecx
.Lt_0089:
mov eax, dword ptr [ebp-4]
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBADDARRAYDESC, .-SYMBADDARRAYDESC

.section .bss
.balign 4
	.lcomm	Lt_00A5,12

.section .text
.balign 16

.globl SYMBARRAYHASUNKNOWNBOUNDS
SYMBARRAYHASUNKNOWNBOUNDS:
.type SYMBARRAYHASUNKNOWNBOUNDS, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_00B3:
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 65540
test ebx, ebx
je .Lt_00B6
jmp .Lt_00B4
.Lt_00B6:
.Lt_00B5:
mov dword ptr [ebp-8], 0
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+56]
dec eax
mov dword ptr [ebp-12], eax
jmp .Lt_00B8
.Lt_00BB:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-8]
sal ebx, 4
mov ecx, dword ptr [eax+60]
add ecx, ebx
cmp dword ptr [ecx+12], 2147483648
jne .Lt_00BD
cmp dword ptr [ecx+8], 0
jne .Lt_00BD
.Lt_00BE:
mov dword ptr [ebp-4], -1
jmp .Lt_00B4
.Lt_00BD:
.Lt_00BC:
.Lt_00B9:
inc dword ptr [ebp-8]
.Lt_00B8:
mov ecx, dword ptr [ebp-12]
cmp dword ptr [ebp-8], ecx
jle .Lt_00BB
.Lt_00BA:
.Lt_00B4:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBARRAYHASUNKNOWNBOUNDS, .-SYMBARRAYHASUNKNOWNBOUNDS
.balign 16

.globl SYMBMAYBEADDARRAYDESC
SYMBMAYBEADDARRAYDESC:
.type SYMBMAYBEADDARRAYDESC, @function
push ebp
mov ebp, esp
push ebx
.Lt_00BF:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+56], 0
jne .Lt_00C2
jmp .Lt_00C0
.Lt_00C2:
.Lt_00C1:
push dword ptr [ebp+8]
call SYMBARRAYHASUNKNOWNBOUNDS
add esp, 4
test eax, eax
je .Lt_00C4
jmp .Lt_00C0
.Lt_00C4:
.Lt_00C3:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+80], 0
jne .Lt_00C6
push dword ptr [ebp+8]
call SYMBADDARRAYDESC
add esp, 4
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+80], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+80]
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [ebx+28]
mov dword ptr [eax+84], ecx
push 0
push dword ptr [ebp+8]
mov ecx, dword ptr [ebp+8]
push dword ptr [ecx+80]
call ASTBUILDARRAYDESCINITREE
add esp, 12
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ecx+80]
mov dword ptr [ebx+52], eax
.Lt_00C6:
.Lt_00C5:
.Lt_00C0:
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBMAYBEADDARRAYDESC, .-SYMBMAYBEADDARRAYDESC
.balign 16

.globl SYMBSETARRAYDIMTB
SYMBSETARRAYDIMTB:
.type SYMBSETARRAYDIMTB, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_00C7:
push dword ptr [ebp+8]
call SYMBDROPARRAYDIMS
add esp, 4
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+12]
mov dword ptr [eax+56], ebx
mov ebx, dword ptr [ebp+12]
sal ebx, 4
mov eax, ebx
push eax
call XALLOCATE
add esp, 4
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+60], eax
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+12]
dec eax
mov dword ptr [ebp-8], eax
jmp .Lt_00CA
.Lt_00CD:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-4]
sal ebx, 4
mov ecx, dword ptr [eax+60]
add ecx, ebx
mov ebx, dword ptr [ebp-4]
sal ebx, 4
mov eax, dword ptr [ebp+16]
add ebx, dword ptr [eax]
mov eax, dword ptr [ebx]
mov dword ptr [ecx], eax
mov eax, dword ptr [ebx+4]
mov dword ptr [ecx+4], eax
mov eax, dword ptr [ebx+8]
mov dword ptr [ecx+8], eax
mov eax, dword ptr [ebx+12]
mov dword ptr [ecx+12], eax
.Lt_00CB:
inc dword ptr [ebp-4]
.Lt_00CA:
mov ebx, dword ptr [ebp-8]
cmp dword ptr [ebp-4], ebx
jle .Lt_00CD
.Lt_00CC:
push dword ptr [ebp+8]
call SYMBRECALCARRAYDIFFANDELEMENTS
add esp, 4
.Lt_00C8:
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBSETARRAYDIMTB, .-SYMBSETARRAYDIMTB
.balign 16

.globl SYMBSETFIXEDSIZEARRAYDIMENSIONELEMENTS
SYMBSETFIXEDSIZEARRAYDIMENSIONELEMENTS:
.type SYMBSETFIXEDSIZEARRAYDIMENSIONELEMENTS, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_00CE:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+12]
sal ebx, 4
mov ecx, dword ptr [eax+60]
add ecx, ebx
mov dword ptr [ebp-4], ecx
mov ecx, dword ptr [ebp-4]
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [ebp+20]
add eax, dword ptr [ecx]
adc ebx, dword ptr [ecx+4]
add eax, 4294967295
adc ebx, 4294967295
mov ecx, dword ptr [ebp-4]
mov dword ptr [ecx+8], eax
mov dword ptr [ecx+12], ebx
push dword ptr [ebp+8]
call SYMBRECALCARRAYDIFFANDELEMENTS
add esp, 4
.Lt_00CF:
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBSETFIXEDSIZEARRAYDIMENSIONELEMENTS, .-SYMBSETFIXEDSIZEARRAYDIMENSIONELEMENTS
.balign 16

.globl SYMBCHECKDYNAMICARRAYDIMENSIONS
SYMBCHECKDYNAMICARRAYDIMENSIONS:
.type SYMBCHECKDYNAMICARRAYDIMENSIONS, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_00D1:
cmp dword ptr [ebp+12], -1
jne .Lt_00D4
jmp .Lt_00D2
.Lt_00D4:
.Lt_00D3:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+56], -1
jne .Lt_00D6
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+12]
mov dword ptr [eax+56], ebx
jmp .Lt_00D5
.Lt_00D6:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp+12]
cmp dword ptr [ebx+56], eax
je .Lt_00D7
push 0
push 1
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax+12]
push 36
call ERRREPORTEX
add esp, 20
.Lt_00D7:
.Lt_00D5:
.Lt_00D2:
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBCHECKDYNAMICARRAYDIMENSIONS, .-SYMBCHECKDYNAMICARRAYDIMENSIONS
.balign 16

.globl SYMBVARINITFIELDS
SYMBVARINITFIELDS:
.type SYMBVARINITFIELDS, @function
push ebp
mov ebp, esp
push ebx
.Lt_00D8:
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+52], 0
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+56], 0
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+60], 0
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+64], 0
mov dword ptr [eax+68], 0
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+72], 1
mov dword ptr [eax+76], 0
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+80], 0
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+84], 0
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+88], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [PARSER+28]
mov dword ptr [eax+92], ebx
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+96], 0
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+100], 0
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+104], 0
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+108], 0
.Lt_00D9:
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBVARINITFIELDS, .-SYMBVARINITFIELDS
.balign 16

.globl SYMBVARINITARRAYDIMENSIONS
SYMBVARINITARRAYDIMENSIONS:
.type SYMBVARINITARRAYDIMENSIONS, @function
push ebp
mov ebp, esp
push ebx
.Lt_00DA:
cmp dword ptr [ebp+12], 0
je .Lt_00DD
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 65540
test ebx, ebx
je .Lt_00DF
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp+12]
mov dword ptr [ebx+56], eax
jmp .Lt_00DE
.Lt_00DF:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call SYMBSETARRAYDIMTB
add esp, 12
.Lt_00DE:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
cmp ebx, 12
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+4]
and ecx, 65536
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
or ebx, ecx
not ebx
test ebx, ebx
je .Lt_00E1
push dword ptr [ebp+8]
call SYMBMAYBEADDARRAYDESC
add esp, 4
.Lt_00E1:
.Lt_00E0:
.Lt_00DD:
.Lt_00DC:
.Lt_00DB:
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBVARINITARRAYDIMENSIONS, .-SYMBVARINITARRAYDIMENSIONS
.balign 16

.globl SYMBADDVAR
SYMBADDVAR:
.type SYMBADDVAR, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
mov dword ptr [ebp-4], 0
.Lt_00E4:
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+40]
and eax, 57
test eax, eax
setne al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp+28], 0
jg .Lt_00E7
jl .Lt_00FA
cmp dword ptr [ebp+24], 0
ja .Lt_00E7
.Lt_00FA:
push dword ptr [ebp+20]
push dword ptr [ebp+16]
call SYMBCALCLEN
add esp, 8
mov dword ptr [ebp+24], eax
mov dword ptr [ebp+28], edx
.Lt_00E7:
.Lt_00E6:
cmp dword ptr [ebp+12], 0
jne .Lt_00E9
cmp dword ptr [PARSER+96], 0
je .Lt_00EB
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp+12], eax
.Lt_00EB:
.Lt_00EA:
mov dword ptr [ebp-24], 0
jmp .Lt_00E8
.Lt_00E9:
mov dword ptr [ebp-24], 512
.Lt_00E8:
cmp dword ptr [ebp-20], 0
jne .Lt_00ED
or dword ptr [ebp+40], 128
mov eax, dword ptr [ebp+44]
and eax, 2
test eax, eax
jne .Lt_00EF
mov eax, dword ptr [SYMB+98524]
mov dword ptr [ebp-12], eax
jmp .Lt_00EE
.Lt_00EF:
mov eax, dword ptr [PARSER+100]
lea edx, [eax+52]
mov dword ptr [ebp-12], edx
.Lt_00EE:
mov edx, dword ptr [SYMB+98520]
mov dword ptr [ebp-16], edx
jmp .Lt_00EC
.Lt_00ED:
lea edx, [SYMB+98404]
mov dword ptr [ebp-12], edx
lea edx, [SYMB+98416]
mov dword ptr [ebp-16], edx
lea edx, [SYMB+98352]
cmp dword ptr [SYMB+98516], edx
sete al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_00F1
mov eax, dword ptr [ebp+44]
and eax, 8
test eax, eax
jne .Lt_00F3
mov eax, dword ptr [SYMB+98516]
lea edx, [eax+52]
mov dword ptr [ebp-12], edx
mov edx, dword ptr [SYMB+98516]
lea eax, [edx+64]
mov dword ptr [ebp-16], eax
.Lt_00F3:
.Lt_00F2:
.Lt_00F1:
.Lt_00F0:
.Lt_00EC:
push dword ptr [ebp+40]
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 1
push dword ptr [ebp-16]
push dword ptr [ebp-12]
push 0
mov eax, dword ptr [ebp+44]
or eax, 32
mov edx, eax
push edx
call SYMBNEWSYMBOL
add esp, 40
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_00F5
jmp .Lt_00E5
.Lt_00F5:
.Lt_00F4:
mov eax, dword ptr [ebp-8]
mov edx, dword ptr [eax+8]
or edx, dword ptr [ebp-24]
mov eax, edx
mov edx, dword ptr [ebp-8]
mov dword ptr [edx+8], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+24]
mov edx, dword ptr [ebp+28]
mov dword ptr [eax+36], ebx
mov dword ptr [eax+40], edx
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+44], 0
mov dword ptr [ebx+48], 0
push dword ptr [ebp-8]
call SYMBVARINITFIELDS
add esp, 4
push dword ptr [ebp+36]
push dword ptr [ebp+32]
push dword ptr [ebp-8]
call SYMBVARINITARRAYDIMENSIONS
add esp, 12
mov ebx, dword ptr [ebp+44]
and ebx, 2
test ebx, ebx
je .Lt_00F7
mov ebx, dword ptr [PARSER+100]
mov edx, dword ptr [ebx+108]
mov ebx, dword ptr [edx+52]
inc ebx
mov edx, dword ptr [ebp-8]
mov dword ptr [edx+92], ebx
jmp .Lt_00F6
.Lt_00F7:
mov ebx, dword ptr [ebp+44]
and ebx, 8
test ebx, ebx
je .Lt_00F8
mov ebx, dword ptr [ebp-8]
mov word ptr [ebx+32], 0
.Lt_00F8:
.Lt_00F6:
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ebx
.Lt_00E5:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBADDVAR, .-SYMBADDVAR
.balign 16

.globl SYMBADDTEMPVAR
SYMBADDTEMPVAR:
.type SYMBADDTEMPVAR, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_00FC:
mov dword ptr [ebp-8], 0
mov eax, dword ptr [ENV+840]
and eax, 2
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_0100
mov eax, dword ptr [ebp-8]
or eax, 2
mov ebx, eax
mov dword ptr [ebp-8], ebx
.Lt_0100:
.Lt_00FF:
push dword ptr [ebp-8]
push 4194304
push offset Lt_0102
push 0
push 0
push 0
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 0
call SYMBUNIQUEID
push eax
call SYMBADDVAR
add esp, 40
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax+8]
or ebx, 16
mov eax, ebx
mov ebx, dword ptr [ebp-12]
mov dword ptr [ebx+8], eax
mov eax, dword ptr [ebp-12]
mov dword ptr [ebp-4], eax
.Lt_00FD:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBADDTEMPVAR, .-SYMBADDTEMPVAR

.section .bss
.balign 4
	.lcomm	Lt_0103,16

.section .data
.balign 4
Lt_0102:
.int Lt_0103
.int Lt_0103
.int 16
.int 16
.int 1
.int 1
.int 0
.int 0

.section .text
.balign 16

.globl SYMBADDIMPLICITVAR
SYMBADDIMPLICITVAR:
.type SYMBADDIMPLICITVAR, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0104:
push dword ptr [ebp+16]
push 0
push offset Lt_0107
push 0
push 0
push 0
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 0
call SYMBUNIQUEID
push eax
call SYMBADDVAR
add esp, 40
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+8]
or ebx, 16
mov eax, ebx
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+8], eax
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0105:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBADDIMPLICITVAR, .-SYMBADDIMPLICITVAR

.section .bss
.balign 4
	.lcomm	Lt_0108,16

.section .data
.balign 4
Lt_0107:
.int Lt_0108
.int Lt_0108
.int 16
.int 16
.int 1
.int 1
.int 0
.int 0

.section .text
.balign 16

.globl SYMBADDANDALLOCATETEMPVAR
SYMBADDANDALLOCATETEMPVAR:
.type SYMBADDANDALLOCATETEMPVAR, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_0109:
push 0
push dword ptr [ebp+8]
call SYMBADDTEMPVAR
add esp, 8
mov dword ptr [ebp-8], eax
push dword ptr [ebp-8]
push dword ptr [PARSER+100]
call dword ptr [IR+40]
add esp, 8
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_010A:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size SYMBADDANDALLOCATETEMPVAR, .-SYMBADDANDALLOCATETEMPVAR
.balign 16

.globl SYMBCALCARRAYELEMENTS
SYMBCALCARRAYELEMENTS:
.type SYMBCALCARRAYELEMENTS, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
push esi
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_010B:
mov dword ptr [ebp-16], 1
mov dword ptr [ebp-12], 0
mov eax, dword ptr [ebp+12]
mov dword ptr [ebp-20], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
dec ebx
mov dword ptr [ebp-24], ebx
jmp .Lt_010E
.Lt_0111:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp-20]
sal eax, 4
mov ecx, dword ptr [ebx+60]
add ecx, eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-20]
sal ebx, 4
mov esi, dword ptr [eax+60]
add esi, ebx
mov eax, dword ptr [ecx+8]
mov ebx, dword ptr [ecx+12]
sub eax, dword ptr [esi]
sbb ebx, dword ptr [esi+4]
add eax, 1
adc ebx, 0
push ebx
push eax
push dword ptr [ebp-12]
push dword ptr [ebp-16]
push eax
mov eax, [esp+4]
mul dword ptr [esp+12]
xchg eax, [esp+4]
imul eax, [esp+16]
add eax, edx
mov edx, [esp+8]
imul edx, [esp+12]
add edx, eax
mov [esp+8], edx
pop eax
pop dword ptr [ebp-16]
pop dword ptr [ebp-12]
add esp, 8
.Lt_010F:
inc dword ptr [ebp-20]
.Lt_010E:
mov eax, dword ptr [ebp-24]
cmp dword ptr [ebp-20], eax
jle .Lt_0111
.Lt_0110:
mov ebx, dword ptr [ebp-16]
mov eax, dword ptr [ebp-12]
mov dword ptr [ebp-8], ebx
mov dword ptr [ebp-4], eax
.Lt_010C:
mov eax, dword ptr [ebp-8]
mov edx, dword ptr [ebp-4]
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBCALCARRAYELEMENTS, .-SYMBCALCARRAYELEMENTS
.balign 16

.globl SYMBCHECKARRAYSIZE
SYMBCHECKARRAYSIZE:
.type SYMBCHECKARRAYSIZE, @function
push ebp
mov ebp, esp
sub esp, 32
push ebx
push esi
mov dword ptr [ebp-4], 0
.Lt_0112:
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-12], 1
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-28], 0
mov eax, dword ptr [ebp+8]
dec eax
mov dword ptr [ebp-32], eax
jmp .Lt_0115
.Lt_0118:
mov eax, dword ptr [ebp-28]
sal eax, 4
mov ebx, dword ptr [ebp+12]
add ebx, eax
cmp dword ptr [ebx+12], 2147483648
jne .Lt_011A
cmp dword ptr [ebx+8], 0
jne .Lt_011A
.Lt_0127:
mov dword ptr [ebp-20], 1
mov dword ptr [ebp-16], 0
jmp .Lt_0119
.Lt_011A:
mov ebx, dword ptr [ebp-28]
sal ebx, 4
mov eax, dword ptr [ebp+12]
add eax, ebx
mov ebx, dword ptr [ebp-28]
sal ebx, 4
mov ecx, dword ptr [ebp+12]
add ecx, ebx
mov esi, dword ptr [eax+8]
mov ebx, dword ptr [eax+12]
sub esi, dword ptr [ecx]
sbb ebx, dword ptr [ecx+4]
add esi, 1
adc ebx, 0
mov eax, esi
mov ecx, ebx
mov dword ptr [ebp-20], eax
mov dword ptr [ebp-16], ecx
.Lt_0119:
cmp dword ptr [ebp-16], 0
jb .Lt_011C
ja .Lt_0128
cmp dword ptr [ebp-20], 2147483647
jbe .Lt_011C
.Lt_0128:
mov dword ptr [ebp-24], -1
jmp .Lt_0117
.Lt_011C:
.Lt_011B:
mov ecx, dword ptr [ebp-20]
mov eax, dword ptr [ebp-16]
push eax
push ecx
push dword ptr [ebp-8]
push dword ptr [ebp-12]
push eax
mov eax, [esp+4]
mul dword ptr [esp+12]
xchg eax, [esp+4]
imul eax, [esp+16]
add eax, edx
mov edx, [esp+8]
imul edx, [esp+12]
add edx, eax
mov [esp+8], edx
pop eax
pop dword ptr [ebp-12]
pop dword ptr [ebp-8]
add esp, 8
cmp dword ptr [ebp-8], 0
jb .Lt_011E
ja .Lt_0129
cmp dword ptr [ebp-12], 2147483647
jbe .Lt_011E
.Lt_0129:
mov dword ptr [ebp-24], -1
jmp .Lt_0117
.Lt_011E:
.Lt_011D:
.Lt_0116:
inc dword ptr [ebp-28]
.Lt_0115:
mov ecx, dword ptr [ebp-32]
cmp dword ptr [ebp-28], ecx
jle .Lt_0118
.Lt_0117:
cmp dword ptr [ebp-24], 0
jne .Lt_0120
mov eax, dword ptr [ebp+16]
mov ecx, dword ptr [ebp+20]
push ecx
push eax
push dword ptr [ebp-8]
push dword ptr [ebp-12]
push eax
mov eax, [esp+4]
mul dword ptr [esp+12]
xchg eax, [esp+4]
imul eax, [esp+16]
add eax, edx
mov edx, [esp+8]
imul edx, [esp+12]
add edx, eax
mov [esp+8], edx
pop eax
pop dword ptr [ebp-12]
pop dword ptr [ebp-8]
add esp, 8
cmp dword ptr [ebp-8], 0
jb .Lt_0122
ja .Lt_012A
cmp dword ptr [ebp-12], 2147483647
jbe .Lt_0122
.Lt_012A:
mov dword ptr [ebp-24], -1
.Lt_0122:
.Lt_0121:
.Lt_0120:
.Lt_011F:
cmp dword ptr [ebp-24], 0
je .Lt_0124
mov dword ptr [ebp-4], 0
jmp .Lt_0123
.Lt_0124:
mov ecx, dword ptr [ENV+204]
mov eax, ecx
sar eax, 31
cmp dword ptr [ebp-8], eax
mov esi, -1
ja .Lt_012B
jb .Lt_012C
cmp dword ptr [ebp-12], ecx
ja .Lt_012B
.Lt_012C:
xor esi, esi
.Lt_012B:
and esi, dword ptr [ebp+24]
je .Lt_0126
push 1
push 0
push 23
call ERRREPORTWARN
add esp, 12
.Lt_0126:
.Lt_0125:
mov dword ptr [ebp-4], -1
.Lt_0123:
.Lt_0113:
mov eax, dword ptr [ebp-4]
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBCHECKARRAYSIZE, .-SYMBCHECKARRAYSIZE
.balign 16

.globl SYMBGETVARHASCTOR
SYMBGETVARHASCTOR:
.type SYMBGETVARHASCTOR, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_012D:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 21430283
test ebx, ebx
je .Lt_0130
mov dword ptr [ebp-4], 0
jmp .Lt_012E
.Lt_0130:
.Lt_012F:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+24]
and eax, 511
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 16
jne .Lt_0133
.Lt_0134:
mov dword ptr [ebp-4], -1
jmp .Lt_012E
jmp .Lt_0131
.Lt_0133:
cmp dword ptr [ebp-8], 38
jne .Lt_0135
.Lt_0136:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+8]
and ebx, 16777216
test ebx, ebx
je .Lt_0138
mov dword ptr [ebp-4], -1
jmp .Lt_012E
.Lt_0138:
.Lt_0137:
.Lt_0135:
.Lt_0131:
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx+56], 0
je .Lt_013A
mov dword ptr [ebp-4], -1
jmp .Lt_012E
.Lt_013A:
.Lt_0139:
push dword ptr [ebp+8]
call SYMBHASCTOR
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_012E:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBGETVARHASCTOR, .-SYMBGETVARHASCTOR
.balign 16

.globl SYMBGETVARHASDTOR
SYMBGETVARHASDTOR:
.type SYMBGETVARHASDTOR, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_013B:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 21430283
test ebx, ebx
je .Lt_013E
mov dword ptr [ebp-4], 0
jmp .Lt_013C
.Lt_013E:
.Lt_013D:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+24]
and eax, 511
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 16
jne .Lt_0141
.Lt_0142:
mov dword ptr [ebp-4], -1
jmp .Lt_013C
jmp .Lt_013F
.Lt_0141:
cmp dword ptr [ebp-8], 38
jne .Lt_0143
.Lt_0144:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+8]
and ebx, 16777216
test ebx, ebx
je .Lt_0146
mov dword ptr [ebp-4], -1
jmp .Lt_013C
.Lt_0146:
.Lt_0145:
.Lt_0143:
.Lt_013F:
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx+56], 0
je .Lt_0148
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 4
test eax, eax
je .Lt_014A
mov dword ptr [ebp-4], -1
jmp .Lt_013C
.Lt_014A:
.Lt_0149:
.Lt_0148:
.Lt_0147:
push dword ptr [ebp+8]
call SYMBHASDTOR
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_013C:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBGETVARHASDTOR, .-SYMBGETVARHASDTOR
.balign 16

.globl SYMBCLONEVAR
SYMBCLONEVAR:
.type SYMBCLONEVAR, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
push esi
mov dword ptr [ebp-4], 0
.Lt_014B:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 8388608
test ebx, ebx
je .Lt_014F
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+88]
call SYMBADDARRAYDESC
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_014E
.Lt_014F:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 4194304
test ebx, ebx
je .Lt_0150
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+28]
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+24]
and eax, 511
push eax
call SYMBADDTEMPVAR
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_014E
.Lt_0150:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 4
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_0152
mov dword ptr [ebp-8], 0
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+56]
dec eax
mov dword ptr [ebp-12], eax
jmp .Lt_0154
.Lt_0157:
mov eax, dword ptr [ebp-8]
sal eax, 4
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebp-8]
sal ecx, 4
mov esi, dword ptr [ebx+60]
add esi, ecx
mov ebx, dword ptr [esi]
mov dword ptr [Lt_0159+eax], ebx
mov ebx, dword ptr [esi+4]
mov dword ptr [Lt_0159+eax+4], ebx
mov ebx, dword ptr [esi+8]
mov dword ptr [Lt_0159+eax+8], ebx
mov ebx, dword ptr [esi+12]
mov dword ptr [Lt_0159+eax+12], ebx
.Lt_0155:
inc dword ptr [ebp-8]
.Lt_0154:
mov esi, dword ptr [ebp-12]
cmp dword ptr [ebp-8], esi
jle .Lt_0157
.Lt_0156:
.Lt_0152:
.Lt_0151:
push 0
mov esi, dword ptr [ebp+8]
push dword ptr [esi+4]
push offset Lt_015A
mov esi, dword ptr [ebp+8]
push dword ptr [esi+56]
push 0
push 0
mov esi, dword ptr [ebp+8]
push dword ptr [esi+28]
mov esi, dword ptr [ebp+8]
mov eax, dword ptr [esi+24]
and eax, 511
push eax
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax+12]
call SYMBADDVAR
add esp, 40
mov dword ptr [ebp-4], eax
.Lt_014E:
.Lt_014C:
mov eax, dword ptr [ebp-4]
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBCLONEVAR, .-SYMBCLONEVAR

.section .bss
.balign 4
	.lcomm	Lt_0159,128

.section .data
.balign 4
Lt_015A:
.int Lt_0159
.int Lt_0159
.int 128
.int 16
.int 1
.int 8
.int 0
.int 7

.section .text
.balign 16

.globl SYMBVARCHECKACCESS
SYMBVARCHECKACCESS:
.type SYMBVARCHECKACCESS, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_015B:
mov eax, dword ptr [PARSER+100]
cmp eax, dword ptr [ENV+832]
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_015E
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 128
test eax, eax
je .Lt_0160
mov eax, dword ptr [ebp+8]
movzx ebx, word ptr [eax+32]
test ebx, ebx
jne .Lt_0162
mov dword ptr [ebp-4], 0
jmp .Lt_015C
.Lt_0162:
.Lt_0161:
jmp .Lt_015F
.Lt_0160:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 1
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_0163
mov dword ptr [ebp-4], 0
jmp .Lt_015C
.Lt_0163:
.Lt_015F:
.Lt_015E:
.Lt_015D:
mov dword ptr [ebp-4], -1
.Lt_015C:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBVARCHECKACCESS, .-SYMBVARCHECKACCESS
.balign 16

.globl SYMBDELVAR
SYMBDELVAR:
.type SYMBDELVAR, @function
push ebp
mov ebp, esp
push ebx
.Lt_0166:
push dword ptr [ebp+8]
call SYMBDROPARRAYDIMS
add esp, 4
cmp dword ptr [ebp+12], 0
jne .Lt_0169
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+80], 0
je .Lt_016B
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax+80]
call SYMBDELSYMBOL
add esp, 8
.Lt_016B:
.Lt_016A:
.Lt_0169:
.Lt_0168:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 524288
test ebx, ebx
je .Lt_016D
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+24]
and eax, 511
cmp eax, 6
jne .Lt_016F
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+52], 0
je .Lt_0171
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+52], 0
je .Lt_0173
mov eax, dword ptr [ebp+8]
push dword ptr [eax+52]
call free
add esp, 4
.Lt_0173:
.Lt_0172:
.Lt_0171:
.Lt_0170:
jmp .Lt_016E
.Lt_016F:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+52], 0
je .Lt_0175
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+52], 0
je .Lt_0177
mov eax, dword ptr [ebp+8]
push dword ptr [eax+52]
call free
add esp, 4
.Lt_0177:
.Lt_0176:
.Lt_0175:
.Lt_0174:
.Lt_016E:
.Lt_016D:
.Lt_016C:
push dword ptr [ebp+8]
call SYMBFREESYMBOL
add esp, 4
.Lt_0167:
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBDELVAR, .-SYMBDELVAR
.balign 16
fb_ctor__symbzvar:
.type fb_ctor__symbzvar, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__symbzvar, .-fb_ctor__symbzvar
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
SYMBDROPARRAYDIMS:
.type SYMBDROPARRAYDIMS, @function
push ebp
mov ebp, esp
.Lt_00A6:
mov eax, dword ptr [ebp+8]
push dword ptr [eax+60]
call free
add esp, 4
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+60], 0
.Lt_00A7:
mov esp, ebp
pop ebp
ret
.size SYMBDROPARRAYDIMS, .-SYMBDROPARRAYDIMS
.balign 16
SYMBRECALCARRAYDIFF:
.type SYMBRECALCARRAYDIFF, @function
push ebp
mov ebp, esp
sub esp, 32
push ebx
push esi
.Lt_00A8:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+60]
mov dword ptr [ebp-24], ebx
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+56]
dec eax
mov dword ptr [ebp-20], eax
mov dword ptr [ebp-28], 0
mov eax, dword ptr [ebp-20]
dec eax
mov dword ptr [ebp-32], eax
jmp .Lt_00AB
.Lt_00AE:
mov eax, dword ptr [ebp-28]
sal eax, 4
mov ebx, dword ptr [ebp-24]
add ebx, eax
mov eax, dword ptr [ebp-28]
sal eax, 4
mov ecx, dword ptr [ebp-24]
add ecx, eax
mov esi, dword ptr [ebx+24]
mov eax, dword ptr [ebx+28]
sub esi, dword ptr [ecx+16]
sbb eax, dword ptr [ecx+20]
add esi, 1
adc eax, 0
mov dword ptr [ebp-16], esi
mov dword ptr [ebp-12], eax
mov esi, dword ptr [ebp-28]
sal esi, 4
mov eax, dword ptr [ebp-24]
add eax, esi
mov ecx, dword ptr [eax]
mov esi, dword ptr [eax+4]
add ecx, dword ptr [ebp-8]
adc esi, dword ptr [ebp-4]
push dword ptr [ebp-12]
push dword ptr [ebp-16]
push esi
push ecx
mov eax, [esp+0]
mul dword ptr [esp+8]
xchg eax, [esp+0]
imul eax, [esp+12]
add eax, edx
mov edx, [esp+4]
imul edx, [esp+8]
add edx, eax
mov [esp+4], edx
pop ecx
pop esi
add esp, 8
mov dword ptr [ebp-8], ecx
mov dword ptr [ebp-4], esi
.Lt_00AC:
inc dword ptr [ebp-28]
.Lt_00AB:
mov ecx, dword ptr [ebp-32]
cmp dword ptr [ebp-28], ecx
jle .Lt_00AE
.Lt_00AD:
mov ecx, dword ptr [ebp-20]
sal ecx, 4
mov esi, dword ptr [ebp-24]
add esi, ecx
mov eax, dword ptr [esi]
mov ecx, dword ptr [esi+4]
add eax, dword ptr [ebp-8]
adc ecx, dword ptr [ebp-4]
mov esi, dword ptr [ebp+8]
push dword ptr [esi+40]
push dword ptr [esi+36]
push ecx
push eax
mov eax, [esp+0]
mul dword ptr [esp+8]
xchg eax, [esp+0]
imul eax, [esp+12]
add eax, edx
mov edx, [esp+4]
imul edx, [esp+8]
add edx, eax
mov [esp+4], edx
pop eax
pop ecx
add esp, 8
mov dword ptr [ebp-8], eax
mov dword ptr [ebp-4], ecx
mov ecx, dword ptr [ebp-8]
mov eax, dword ptr [ebp-4]
neg ecx
adc eax, 0
neg eax
mov esi, dword ptr [ebp+8]
mov dword ptr [esi+64], ecx
mov dword ptr [esi+68], eax
.Lt_00A9:
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBRECALCARRAYDIFF, .-SYMBRECALCARRAYDIFF
.balign 16
SYMBRECALCARRAYDIFFANDELEMENTS:
.type SYMBRECALCARRAYDIFFANDELEMENTS, @function
push ebp
mov ebp, esp
push ebx
.Lt_00AF:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+56], 0
jle .Lt_00B2
push dword ptr [ebp+8]
call SYMBRECALCARRAYDIFF
add esp, 4
push 0
push dword ptr [ebp+8]
call SYMBCALCARRAYELEMENTS
add esp, 8
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+72], eax
mov dword ptr [ebx+76], edx
jmp .Lt_00B1
.Lt_00B2:
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+64], 0
mov dword ptr [eax+68], 0
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+72], 1
mov dword ptr [eax+76], 0
.Lt_00B1:
.Lt_00B0:
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBRECALCARRAYDIFFANDELEMENTS, .-SYMBRECALCARRAYDIFFANDELEMENTS
	#FreeBASIC-1.01.0-source/src/compiler/symb-var.bas' compilation took 0.03718097880482674 secs

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
Lt_0062:	.ascii	"__FB_ARRAYDIMTB$\0"
.balign 4
Lt_0063:	.ascii	"elements\0"
.balign 4
Lt_0064:	.ascii	"lbound\0"
.balign 4
Lt_0065:	.ascii	"ubound\0"
.balign 4
Lt_006E:	.ascii	"FBARRAY\0"
.balign 4
Lt_0078:	.ascii	"$\0"
.balign 4
Lt_0079:	.ascii	"<\0"
.balign 4
Lt_007A:	.ascii	">\0"
.balign 4
Lt_007E:	.ascii	"data\0"
.balign 4
Lt_007F:	.ascii	"ptr\0"
.balign 4
Lt_0080:	.ascii	"size\0"
.balign 4
Lt_0081:	.ascii	"element_len\0"
.balign 4
Lt_0082:	.ascii	"dimensions\0"
.balign 4
Lt_0085:	.ascii	"dimTB\0"

.section .ctors, "aw", @progbits
.int fb_ctor__symbzvar
