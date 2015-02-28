	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/ast-vectorize.bas' compilation started at 14:16:34 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl ASTPROCVECTORIZE
ASTPROCVECTORIZE:
.type ASTPROCVECTORIZE, @function
push ebp
mov ebp, esp
sub esp, 40
push ebx
.Lt_0174:
push dword ptr [ebp+8]
call HGETNEXTTREE
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_0176:
cmp dword ptr [ebp-4], 0
jne .Lt_017A
jmp .Lt_0177
.Lt_017A:
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-32], 0
push dword ptr [ebp-4]
call HCHECKLINK
add esp, 4
cmp eax, -1
jne .Lt_017C
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+60]
mov dword ptr [ebp-12], ebx
jmp .Lt_017B
.Lt_017C:
push dword ptr [ebp-4]
call HISVECTORIZABLE
add esp, 4
cmp eax, -1
jne .Lt_017D
mov eax, dword ptr [ebp-4]
mov dword ptr [ebp-12], eax
mov dword ptr [ebp-32], -1
.Lt_017D:
.Lt_017B:
mov dword ptr [MAXVECTORWIDTH], 4
mov dword ptr [VECTORWIDTH], 0
mov eax, dword ptr [ebp-4]
mov dword ptr [ebp-8], eax
.Lt_017E:
mov eax, dword ptr [ebp-8]
push dword ptr [eax+68]
call HGETNEXTTREE
add esp, 4
mov dword ptr [ebp-8], eax
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-36], 0
cmp dword ptr [ebp-8], 0
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp-32]
test ebx, ebx
sete bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
je .Lt_0182
mov dword ptr [ebp-28], -1
jmp .Lt_0181
.Lt_0182:
push dword ptr [ebp-8]
call HISVECTORIZABLE
add esp, 4
cmp eax, -1
jne .Lt_0184
mov dword ptr [ebp-36], -1
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-16], eax
jmp .Lt_0183
.Lt_0184:
mov dword ptr [ebp-28], -1
.Lt_0183:
.Lt_0181:
mov dword ptr [ebp-40], -1
mov eax, dword ptr [ebp-36]
and eax, dword ptr [ebp-32]
je .Lt_0186
push 0
push dword ptr [ebp-16]
push dword ptr [ebp-12]
call HMERGENODE
add esp, 12
test eax, eax
je .Lt_0188
mov dword ptr [VECTORWIDTH], 0
push -1
push dword ptr [ebp-16]
push dword ptr [ebp-12]
call HMERGENODE
add esp, 12
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+64]
mov dword ptr [ebp-20], ebx
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx+68]
mov dword ptr [ebp-24], eax
push dword ptr [ebp-8]
call ASTDELTREE
add esp, 4
call ASTNEWNOP
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp-20]
mov dword ptr [eax+64], ebx
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebp-24]
mov dword ptr [ebx+68], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+64]
mov eax, dword ptr [ebp-8]
mov dword ptr [ebx+68], eax
mov eax, dword ptr [ebp-8]
cmp dword ptr [eax+68], 0
je .Lt_018A
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+68]
mov eax, dword ptr [ebp-8]
mov dword ptr [ebx+64], eax
.Lt_018A:
.Lt_0189:
mov dword ptr [ebp-40], 0
jmp .Lt_0187
.Lt_0188:
mov dword ptr [ebp-28], -1
.Lt_0187:
.Lt_0186:
.Lt_0185:
mov eax, dword ptr [ebp-28]
cmp eax, -1
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ENV+124]
cmp ebx, 2
setge bl
shr ebx, 1
sbb ebx, ebx
and eax, ebx
je .Lt_018C
mov dword ptr [MAXVECTORWIDTH], 4
mov dword ptr [VECTORWIDTH], 0
.Lt_018D:
push dword ptr [ebp-12]
call ASTINTRATREEVECTORIZE
add esp, 4
test eax, eax
je .Lt_018E
jmp .Lt_018D
.Lt_018E:
.Lt_018C:
.Lt_018B:
cmp dword ptr [ebp-8], 0
je .Lt_0190
cmp dword ptr [ebp-40], 0
je .Lt_0192
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
jmp .Lt_017F
jmp .Lt_0191
.Lt_0192:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+68]
mov dword ptr [ebp-8], ebx
.Lt_0191:
jmp .Lt_018F
.Lt_0190:
jmp .Lt_0177
.Lt_018F:
.Lt_0180:
jmp .Lt_017E
.Lt_017F:
.Lt_0178:
jmp .Lt_0176
.Lt_0177:
.Lt_0175:
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTPROCVECTORIZE, .-ASTPROCVECTORIZE
.balign 16
fb_ctor__astzvectorize:
.type fb_ctor__astzvectorize, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__astzvectorize, .-fb_ctor__astzvectorize
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
HNODESMATCH:
.type HNODESMATCH, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
push esi
mov dword ptr [ebp-4], 0
.Lt_0056:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+12]
mov ecx, dword ptr [ebx]
cmp dword ptr [eax], ecx
je .Lt_0059
mov dword ptr [ebp-4], 0
jmp .Lt_0057
.Lt_0059:
.Lt_0058:
mov ecx, dword ptr [ebp+8]
cmp dword ptr [ecx], 17
jne .Lt_005B
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+12]
cmp dword ptr [ecx+12], ebx
je .Lt_005D
mov dword ptr [ebp-4], 0
jmp .Lt_0057
.Lt_005D:
.Lt_005C:
.Lt_005B:
.Lt_005A:
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx], 16
jne .Lt_005F
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebx+4]
and ecx, 511
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
and eax, 511
cmp ecx, eax
je .Lt_0061
mov dword ptr [ebp-4], 0
jmp .Lt_0057
.Lt_0061:
.Lt_0060:
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+4]
and ecx, 480
je .Lt_0062
mov dword ptr [ebp-8], 22
jmp .Lt_0197
.Lt_0062:
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ecx+4]
and eax, 31
mov dword ptr [ebp-8], eax
.Lt_0197:
mov eax, dword ptr [ebp-8]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax], 1
jne .Lt_0065
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [ebp+12]
fld qword ptr [eax+20]
fcomp qword ptr [ecx+20]
fnstsw ax
test ah, 0b01000000
jnz .Lt_0067
mov dword ptr [ebp-4], 0
jmp .Lt_0057
.Lt_0067:
.Lt_0066:
jmp .Lt_0064
.Lt_0065:
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ebp+12]
mov esi, dword ptr [eax+20]
mov ebx, dword ptr [eax+24]
cmp dword ptr [ecx+24], ebx
jne .Lt_0198
cmp dword ptr [ecx+20], esi
je .Lt_0069
.Lt_0198:
mov dword ptr [ebp-4], 0
jmp .Lt_0057
.Lt_0069:
.Lt_0068:
.Lt_0064:
.Lt_005F:
.Lt_005E:
mov dword ptr [ebp-4], -1
.Lt_0057:
mov eax, dword ptr [ebp-4]
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size HNODESMATCH, .-HNODESMATCH
.balign 16
HALLOWEDINVECTORIZE:
.type HALLOWEDINVECTORIZE, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_006A:
cmp dword ptr [ebp+12], 0
je .Lt_006D
mov dword ptr [ebp-4], -1
jmp .Lt_006B
.Lt_006D:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-12], ebx
jmp .Lt_006F
.Lt_0071:
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx+20], 28
jne .Lt_0073
mov dword ptr [ebp-4], -1
jmp .Lt_006B
.Lt_0073:
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx+20], 29
jne .Lt_0075
mov dword ptr [ebp-4], -1
jmp .Lt_006B
.Lt_0075:
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx+20], 30
jne .Lt_0077
mov dword ptr [ebp-4], -1
jmp .Lt_006B
.Lt_0077:
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx+20], 31
jne .Lt_0079
mov dword ptr [ebp-4], -1
jmp .Lt_006B
.Lt_0079:
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx+20], 0
jne .Lt_007B
mov dword ptr [ebp-4], -1
jmp .Lt_006B
.Lt_007B:
jmp .Lt_006E
.Lt_007C:
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx+20], 75
jne .Lt_007E
mov dword ptr [ebp-4], -1
jmp .Lt_006B
.Lt_007E:
jmp .Lt_006E
.Lt_007F:
mov dword ptr [ebp-4], -1
jmp .Lt_006B
jmp .Lt_006E
.Lt_0080:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 14
jne .Lt_0082
mov dword ptr [ebp-4], -1
jmp .Lt_006B
.Lt_0082:
cmp dword ptr [ebp-8], 15
jne .Lt_0084
mov dword ptr [MAXVECTORWIDTH], 2
mov dword ptr [ebp-4], -1
jmp .Lt_006B
.Lt_0084:
.Lt_0083:
jmp .Lt_006E
.Lt_0085:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+12]
mov eax, dword ptr [ebx+24]
and eax, 31
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
cmp eax, 14
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp-8]
cmp ebx, 18
sete bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
je .Lt_0087
mov dword ptr [ebp-4], -1
jmp .Lt_006B
jmp .Lt_0086
.Lt_0087:
cmp dword ptr [ebp-8], 15
jne .Lt_0088
mov dword ptr [MAXVECTORWIDTH], 2
mov dword ptr [ebp-4], -1
jmp .Lt_006B
.Lt_0088:
.Lt_0086:
mov dword ptr [ebp-4], 0
jmp .Lt_006B
jmp .Lt_006E
.Lt_0089:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+12]
mov ebx, dword ptr [eax+24]
and ebx, 31
mov dword ptr [ebp-8], ebx
cmp dword ptr [ebp-8], 14
jne .Lt_008B
mov dword ptr [ebp-4], -1
jmp .Lt_006B
.Lt_008B:
cmp dword ptr [ebp-8], 15
jne .Lt_008D
mov dword ptr [MAXVECTORWIDTH], 2
mov dword ptr [ebp-4], -1
jmp .Lt_006B
.Lt_008D:
.Lt_008C:
mov dword ptr [ebp-4], 0
jmp .Lt_006B
jmp .Lt_006E
.Lt_008E:
mov dword ptr [ebp-4], -1
jmp .Lt_006B
jmp .Lt_006E
.Lt_008F:
jmp .Lt_006E
.Lt_006F:
mov ebx, dword ptr [ebp-12]
add ebx, 4294967295
cmp ebx, 19
ja .Lt_008F
mov ebx, dword ptr [ebp-12]
jmp dword ptr [.LT_0090+ebx*4-4]
.LT_0090:
.int .Lt_007F
.int .Lt_007F
.int .Lt_0071
.int .Lt_007C
.int .Lt_0080
.int .Lt_008E
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_008F
.int .Lt_0080
.int .Lt_0085
.int .Lt_008E
.int .Lt_0089
.int .Lt_008E
.Lt_006E:
mov dword ptr [ebp-4], 0
.Lt_006B:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HALLOWEDINVECTORIZE, .-HALLOWEDINVECTORIZE
.balign 16
HGETVARDISTANCE:
.type HGETVARDISTANCE, @function
push ebp
mov ebp, esp
push ebx
.Lt_0091:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
cmp ebx, 20
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax]
cmp ecx, 18
sete cl
shr ecx, 1
sbb ecx, ecx
or ebx, ecx
je .Lt_0094
mov ecx, dword ptr [ebp+12]
mov eax, dword ptr [ecx]
mov ebx, eax
sar ebx, 31
mov ecx, dword ptr [ebp+8]
add eax, dword ptr [ecx+20]
adc ebx, dword ptr [ecx+24]
mov ecx, eax
mov eax, dword ptr [ebp+12]
mov dword ptr [eax], ecx
mov ecx, dword ptr [ebp+20]
mov ebx, dword ptr [ecx]
mov eax, ebx
sar eax, 31
mov ecx, dword ptr [ebp+16]
add ebx, dword ptr [ecx+20]
adc eax, dword ptr [ecx+24]
mov ecx, ebx
mov ebx, dword ptr [ebp+20]
mov dword ptr [ebx], ecx
.Lt_0094:
.Lt_0093:
mov ecx, dword ptr [ebp+8]
cmp dword ptr [ecx], 17
jne .Lt_0096
mov ecx, dword ptr [ebp+12]
mov eax, dword ptr [ecx]
mov ebx, eax
sar ebx, 31
mov ecx, dword ptr [ebp+8]
add eax, dword ptr [ecx+20]
adc ebx, dword ptr [ecx+24]
mov ecx, eax
mov eax, dword ptr [ebp+12]
mov dword ptr [eax], ecx
mov ecx, dword ptr [ebp+20]
mov ebx, dword ptr [ecx]
mov eax, ebx
sar eax, 31
mov ecx, dword ptr [ebp+16]
add ebx, dword ptr [ecx+20]
adc eax, dword ptr [ecx+24]
mov ecx, ebx
mov ebx, dword ptr [ebp+20]
mov dword ptr [ebx], ecx
.Lt_0096:
.Lt_0095:
mov ecx, dword ptr [ebp+8]
cmp dword ptr [ecx+56], 0
jne .Lt_0098
jmp .Lt_0092
.Lt_0098:
mov ecx, dword ptr [ebp+16]
cmp dword ptr [ecx+56], 0
jne .Lt_009A
jmp .Lt_0092
.Lt_009A:
push dword ptr [ebp+20]
mov ecx, dword ptr [ebp+16]
push dword ptr [ecx+56]
push dword ptr [ebp+12]
mov ecx, dword ptr [ebp+8]
push dword ptr [ecx+56]
call HGETVARDISTANCE
add esp, 16
.Lt_0092:
pop ebx
mov esp, ebp
pop ebp
ret
.size HGETVARDISTANCE, .-HGETVARDISTANCE
.balign 16
HSKIPNEWNODES:
.type HSKIPNEWNODES, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_009B:
.Lt_009D:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 4
jne .Lt_00A1
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+20]
cmp ebx, 75
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+20]
cmp ecx, 55
sete cl
shr ecx, 1
sbb ecx, ecx
or ebx, ecx
je .Lt_00A3
cmp dword ptr [ebp+12], 0
je .Lt_00A5
mov ecx, dword ptr [ebp+8]
cmp dword ptr [ecx+16], 0
jne .Lt_00A6
mov dword ptr [ebp-12], 2
jmp .Lt_019D
.Lt_00A6:
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ecx+16]
inc ebx
mov dword ptr [ebp-12], ebx
.Lt_019D:
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebp-12]
mov dword ptr [ebx+16], ecx
.Lt_00A5:
.Lt_00A4:
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ecx+56]
mov dword ptr [ebp+8], ebx
.Lt_00A3:
.Lt_00A2:
.Lt_00A1:
.Lt_00A0:
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebp-8], ebx
jne .Lt_00A9
jmp .Lt_009E
.Lt_00A9:
.Lt_00A8:
.Lt_009F:
jmp .Lt_009D
.Lt_009E:
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebp-4], ebx
.Lt_009C:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HSKIPNEWNODES, .-HSKIPNEWNODES
.balign 16
HCHECKLOAD:
.type HCHECKLOAD, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_00AA:
cmp dword ptr [ebp+8], 0
sete al
shr eax, 1
sbb eax, eax
cmp dword ptr [ebp+12], 0
sete bl
shr ebx, 1
sbb ebx, ebx
and eax, ebx
je .Lt_00AD
mov dword ptr [ebp-4], -1
jmp .Lt_00AB
.Lt_00AD:
cmp dword ptr [ebp+8], 0
sete bl
shr ebx, 1
sbb ebx, ebx
cmp dword ptr [ebp+12], 0
sete al
shr eax, 1
sbb eax, eax
or ebx, eax
je .Lt_00AF
mov dword ptr [ebp-4], 0
jmp .Lt_00AB
.Lt_00AF:
push 0
push dword ptr [ebp+8]
call HSKIPNEWNODES
add esp, 8
mov dword ptr [ebp+8], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
cmp ebx, 20
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax]
cmp ecx, 18
sete cl
shr ecx, 1
sbb ecx, ecx
or ebx, ecx
je .Lt_00B1
mov dword ptr [ebp+16], -1
.Lt_00B1:
.Lt_00B0:
push dword ptr [ebp+16]
push dword ptr [ebp+8]
call HALLOWEDINVECTORIZE
add esp, 8
test eax, eax
jne .Lt_00B3
mov dword ptr [ebp-4], 0
jmp .Lt_00AB
.Lt_00B3:
.Lt_00B2:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HNODESMATCH
add esp, 8
test eax, eax
jne .Lt_00B5
mov dword ptr [ebp-4], 0
jmp .Lt_00AB
.Lt_00B5:
.Lt_00B4:
push dword ptr [ebp+16]
mov eax, dword ptr [ebp+12]
push dword ptr [eax+56]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+56]
call HCHECKLOAD
add esp, 12
test eax, eax
jne .Lt_00B7
mov dword ptr [ebp-4], 0
jmp .Lt_00AB
.Lt_00B7:
push dword ptr [ebp+16]
mov eax, dword ptr [ebp+12]
push dword ptr [eax+60]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+60]
call HCHECKLOAD
add esp, 12
test eax, eax
jne .Lt_00B9
mov dword ptr [ebp-4], 0
jmp .Lt_00AB
.Lt_00B9:
mov dword ptr [ebp-4], -1
.Lt_00AB:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HCHECKLOAD, .-HCHECKLOAD
.balign 16
HINSERTSWIZZLE:
.type HINSERTSWIZZLE, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_00BA:
mov dword ptr [ebp-4], 0
mov dword ptr [ebp-8], 0
push 0
push 0
push 0
call ASTNEWNODE
add esp, 12
mov dword ptr [ebp-8], eax
push edi
push esi
mov edi, dword ptr [ebp-8]
mov esi, dword ptr [ebp+8]
mov ecx, 18
rep movsd
pop esi
pop edi
push dword ptr [ebp-8]
push 75
call ASTNEWUOP
add esp, 8
mov dword ptr [ebp-4], eax
push edi
push esi
mov edi, dword ptr [ebp+8]
mov esi, dword ptr [ebp-4]
mov ecx, 18
rep movsd
pop esi
pop edi
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+16], 2
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-8]
mov dword ptr [eax+56], ebx
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+16], 0
push dword ptr [ebp-4]
call ASTDELNODE
add esp, 4
.Lt_00BB:
pop ebx
mov esp, ebp
pop ebp
ret
.size HINSERTSWIZZLE, .-HINSERTSWIZZLE
.balign 16
HVECTORIZENODE:
.type HVECTORIZENODE, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_00BC:
cmp dword ptr [ebp+8], 0
jne .Lt_00BF
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
jmp .Lt_00BD
.Lt_00BF:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
cmp ebx, 4
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax]
cmp ecx, 3
sete cl
shr ecx, 1
sbb ecx, ecx
or ebx, ecx
je .Lt_00C1
mov ecx, dword ptr [ebp+8]
cmp dword ptr [ecx+16], 0
jne .Lt_00C2
mov dword ptr [ebp-8], 2
jmp .Lt_01A6
.Lt_00C2:
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ecx+16]
inc ebx
mov dword ptr [ebp-8], ebx
.Lt_01A6:
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebp-8]
mov dword ptr [ebx+16], ecx
jmp .Lt_00C0
.Lt_00C1:
cmp dword ptr [ebp+12], 0
jne .Lt_00C5
mov ecx, dword ptr [ebp+8]
mov dword ptr [ecx+16], 0
jmp .Lt_00C4
.Lt_00C5:
mov ecx, dword ptr [ebp+8]
cmp dword ptr [ecx+16], 0
jne .Lt_00C6
mov dword ptr [ebp-8], 2
jmp .Lt_01A7
.Lt_00C6:
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ecx+16]
inc ebx
mov dword ptr [ebp-8], ebx
.Lt_01A7:
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebp-8]
mov dword ptr [ebx+16], ecx
.Lt_00C4:
.Lt_00C0:
mov ecx, dword ptr [ebp+8]
mov dword ptr [ebp-4], ecx
.Lt_00BD:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HVECTORIZENODE, .-HVECTORIZENODE
.balign 16
HCHECKDEREFVAR:
.type HCHECKDEREFVAR, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_00C8:
mov dword ptr [ebp-8], 0
cmp dword ptr [ebp+8], 0
jne .Lt_00CB
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
jmp .Lt_00C9
.Lt_00CB:
.Lt_00CC:
cmp dword ptr [ebp+8], 0
je .Lt_00CD
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-12], ebx
cmp dword ptr [ebp-12], 5
jne .Lt_00D0
.Lt_00D1:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx], eax
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax]
cmp ebx, 14
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax]
cmp ecx, 15
sete cl
shr ecx, 1
sbb ecx, ecx
or ebx, ecx
je .Lt_00D3
mov dword ptr [ebp-8], -1
.Lt_00D3:
.Lt_00D2:
jmp .Lt_00CD
jmp .Lt_00CE
.Lt_00D0:
cmp dword ptr [ebp-12], 17
je .Lt_00D5
.Lt_00D6:
cmp dword ptr [ebp-12], 19
jne .Lt_00D4
.Lt_00D5:
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ecx+12]
mov ecx, dword ptr [ebx+24]
and ecx, 31
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx], ecx
mov ecx, dword ptr [ebp+12]
mov ebx, dword ptr [ecx]
cmp ebx, 14
sete bl
shr ebx, 1
sbb ebx, ebx
mov ecx, dword ptr [ebp+12]
mov eax, dword ptr [ecx]
cmp eax, 15
sete al
shr eax, 1
sbb eax, eax
or ebx, eax
je .Lt_00D8
mov dword ptr [ebp-8], -1
.Lt_00D8:
.Lt_00D7:
jmp .Lt_00CD
.Lt_00D4:
.Lt_00D9:
.Lt_00CE:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp+8], ebx
jmp .Lt_00CC
.Lt_00CD:
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ebx
.Lt_00C9:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HCHECKDEREFVAR, .-HCHECKDEREFVAR
.balign 16
HCHECKARRAYVAR:
.type HCHECKARRAYVAR, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_00DA:
mov dword ptr [ebp-4], 0
cmp dword ptr [ebp+8], 0
jne .Lt_00DD
jmp .Lt_00DB
.Lt_00DD:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 17
jne .Lt_00DF
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+12]
mov eax, dword ptr [ebx+24]
and eax, 31
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx], eax
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax]
cmp ebx, 14
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax]
cmp ecx, 15
sete cl
shr ecx, 1
sbb ecx, ecx
or ebx, ecx
je .Lt_00E1
mov dword ptr [ebp-4], -1
.Lt_00E1:
.Lt_00E0:
.Lt_00DF:
.Lt_00DE:
.Lt_00DB:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HCHECKARRAYVAR, .-HCHECKARRAYVAR
.balign 16
HCHECKMEMOFFSET:
.type HCHECKMEMOFFSET, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_00E2:
mov dword ptr [ebp-8], 0
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+16], 0
je .Lt_00E5
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [VECTORWIDTH]
cmp dword ptr [eax+16], ebx
jle .Lt_00E7
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+16]
mov dword ptr [VECTORWIDTH], eax
.Lt_00E7:
mov eax, dword ptr [ebp+16]
and eax, 480
je .Lt_00E8
mov dword ptr [ebp-12], 22
jmp .Lt_01B0
.Lt_00E8:
mov eax, dword ptr [ebp+16]
and eax, 31
mov dword ptr [ebp-12], eax
.Lt_01B0:
mov eax, dword ptr [ebp-12]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+4]
imul ebx, dword ptr [VECTORWIDTH]
mov dword ptr [ebp-8], ebx
jmp .Lt_00E4
.Lt_00E5:
mov ebx, dword ptr [ebp+16]
and ebx, 480
je .Lt_00EA
mov dword ptr [ebp-12], 22
jmp .Lt_01B1
.Lt_00EA:
mov ebx, dword ptr [ebp+16]
and ebx, 31
mov dword ptr [ebp-12], ebx
.Lt_01B1:
mov ebx, dword ptr [ebp-12]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx+4]
mov dword ptr [ebp-8], eax
.Lt_00E4:
mov dword ptr [ebp-4], -1
mov eax, dword ptr [ebp+16]
cmp eax, 14
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp+16]
cmp ebx, 15
sete bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
je .Lt_00ED
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp+12]
test eax, eax
sete al
shr eax, 1
sbb eax, eax
and eax, dword ptr [ebx+16]
je .Lt_00EF
mov dword ptr [ebp-4], 0
jmp .Lt_00E3
.Lt_00EF:
.Lt_00EE:
mov ebx, dword ptr [ebp-8]
cmp ebx, dword ptr [ebp+12]
setne bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+12]
test eax, eax
setne al
shr eax, 1
sbb eax, eax
and ebx, eax
je .Lt_00F1
mov dword ptr [ebp-4], 0
.Lt_00F1:
.Lt_00F0:
.Lt_00ED:
.Lt_00EC:
.Lt_00E3:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HCHECKMEMOFFSET, .-HCHECKMEMOFFSET
.balign 16
HGETASSIGNDATATYPE:
.type HGETASSIGNDATATYPE, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_00F2:
cmp dword ptr [ebp+8], 0
jne .Lt_00F5
mov dword ptr [ebp-4], 0
jmp .Lt_00F3
.Lt_00F5:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-8], ebx
cmp dword ptr [ebp-8], 5
jne .Lt_00F8
.Lt_00F9:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
mov ebx, eax
mov dword ptr [ebp-4], ebx
jmp .Lt_00F3
jmp .Lt_00F6
.Lt_00F8:
cmp dword ptr [ebp-8], 17
je .Lt_00FB
.Lt_00FC:
cmp dword ptr [ebp-8], 19
jne .Lt_00FA
.Lt_00FB:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+12]
mov ebx, dword ptr [eax+24]
and ebx, 31
mov eax, ebx
mov dword ptr [ebp-4], eax
jmp .Lt_00F3
jmp .Lt_00F6
.Lt_00FA:
mov eax, dword ptr [ebp+8]
push dword ptr [eax+56]
call HGETASSIGNDATATYPE
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_00FD:
.Lt_00F6:
.Lt_00F3:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HGETASSIGNDATATYPE, .-HGETASSIGNDATATYPE
.balign 16
HMERGENODE:
.type HMERGENODE, @function
push ebp
mov ebp, esp
sub esp, 28
push ebx
mov dword ptr [ebp-4], 0
.Lt_00FE:
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-4], -1
cmp dword ptr [ebp+12], 0
jne .Lt_0101
mov dword ptr [ebp-4], -1
jmp .Lt_00FF
.Lt_0101:
cmp dword ptr [ebp+8], 0
jne .Lt_0103
mov dword ptr [ebp-4], -1
jmp .Lt_00FF
.Lt_0103:
push dword ptr [ebp+16]
push dword ptr [ebp+8]
call HSKIPNEWNODES
add esp, 8
mov dword ptr [ebp+8], eax
cmp dword ptr [ebp+16], 0
jne .Lt_0105
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HNODESMATCH
add esp, 8
test eax, eax
jne .Lt_0107
mov dword ptr [ebp-4], 0
jmp .Lt_00FF
.Lt_0107:
.Lt_0106:
push 0
push dword ptr [ebp+8]
call HALLOWEDINVECTORIZE
add esp, 8
test eax, eax
jne .Lt_0109
mov dword ptr [ebp-4], 0
jmp .Lt_00FF
.Lt_0109:
.Lt_0108:
.Lt_0105:
.Lt_0104:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 2
jne .Lt_010B
push dword ptr [ebp+8]
call HGETASSIGNDATATYPE
add esp, 4
mov dword ptr [ebp-24], eax
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ebp-20]
push eax
push dword ptr [ebp+12]
lea eax, [ebp-16]
push eax
push dword ptr [ebp+8]
call HGETVARDISTANCE
add esp, 16
mov eax, dword ptr [ebp-20]
sub eax, dword ptr [ebp-16]
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+16], 0
je .Lt_010D
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [VECTORWIDTH]
cmp dword ptr [eax+16], ebx
jle .Lt_010F
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+16]
mov dword ptr [VECTORWIDTH], eax
.Lt_010F:
mov eax, dword ptr [ebp-24]
and eax, 480
je .Lt_0110
mov dword ptr [ebp-28], 22
jmp .Lt_01B7
.Lt_0110:
mov eax, dword ptr [ebp-24]
and eax, 31
mov dword ptr [ebp-28], eax
.Lt_01B7:
mov eax, dword ptr [ebp-28]
imul eax, 28
mov ebx, dword ptr [SYMB_DTYPETB+eax+4]
imul ebx, dword ptr [VECTORWIDTH]
mov dword ptr [ebp-12], ebx
jmp .Lt_010C
.Lt_010D:
mov ebx, dword ptr [ebp-24]
and ebx, 480
je .Lt_0112
mov dword ptr [ebp-28], 22
jmp .Lt_01B8
.Lt_0112:
mov ebx, dword ptr [ebp-24]
and ebx, 31
mov dword ptr [ebp-28], ebx
.Lt_01B8:
mov ebx, dword ptr [ebp-28]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx+4]
mov dword ptr [ebp-12], eax
.Lt_010C:
mov eax, dword ptr [ebp-12]
cmp dword ptr [ebp-8], eax
je .Lt_0115
mov dword ptr [ebp-4], 0
jmp .Lt_00FF
.Lt_0115:
.Lt_0114:
.Lt_010B:
.Lt_010A:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [MAXVECTORWIDTH]
cmp dword ptr [eax+16], ebx
jne .Lt_0117
mov dword ptr [ebp-4], 0
jmp .Lt_00FF
.Lt_0117:
.Lt_0116:
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx], 19
jne .Lt_0119
cmp dword ptr [ebp+16], 0
jne .Lt_011B
push 0
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HCHECKLOAD
add esp, 12
test eax, eax
jne .Lt_011D
mov dword ptr [ebp-4], 0
jmp .Lt_00FF
.Lt_011D:
.Lt_011C:
.Lt_011B:
.Lt_011A:
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ebp-20]
push eax
push dword ptr [ebp+12]
lea eax, [ebp-16]
push eax
push dword ptr [ebp+8]
call HGETVARDISTANCE
add esp, 16
mov eax, dword ptr [ebp-20]
sub eax, dword ptr [ebp-16]
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+12]
mov eax, dword ptr [ebx+24]
and eax, 31
mov dword ptr [ebp-24], eax
push dword ptr [ebp-24]
push dword ptr [ebp-8]
push dword ptr [ebp+8]
call HCHECKMEMOFFSET
add esp, 12
test eax, eax
jne .Lt_011F
mov dword ptr [ebp-4], 0
jmp .Lt_00FF
.Lt_011F:
.Lt_011E:
cmp dword ptr [ebp+16], 0
je .Lt_0121
mov eax, dword ptr [ebp-8]
test eax, eax
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [VECTORWIDTH]
test ebx, ebx
sete bl
shr ebx, 1
sbb ebx, ebx
and eax, ebx
je .Lt_0123
push dword ptr [ebp+8]
call HINSERTSWIZZLE
add esp, 4
jmp .Lt_0122
.Lt_0123:
push dword ptr [ebp-8]
push dword ptr [ebp+8]
call HVECTORIZENODE
add esp, 8
.Lt_0122:
.Lt_0121:
.Lt_0120:
mov dword ptr [ebp-4], -1
jmp .Lt_00FF
.Lt_0119:
.Lt_0118:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx]
cmp eax, 20
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebx]
cmp ecx, 18
sete cl
shr ecx, 1
sbb ecx, ecx
or eax, ecx
je .Lt_0125
cmp dword ptr [ebp+16], 0
jne .Lt_0127
push -1
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HCHECKLOAD
add esp, 12
test eax, eax
jne .Lt_0129
mov dword ptr [ebp-4], 0
jmp .Lt_00FF
.Lt_0129:
.Lt_0128:
.Lt_0127:
.Lt_0126:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 20
jne .Lt_012B
lea eax, [ebp-24]
push eax
mov eax, dword ptr [ebp+8]
push dword ptr [eax+56]
call HCHECKDEREFVAR
add esp, 8
test eax, eax
jne .Lt_012D
mov dword ptr [ebp-4], 0
jmp .Lt_00FF
.Lt_012D:
.Lt_012C:
jmp .Lt_012A
.Lt_012B:
lea eax, [ebp-24]
push eax
mov eax, dword ptr [ebp+8]
push dword ptr [eax+60]
call HCHECKARRAYVAR
add esp, 8
test eax, eax
jne .Lt_012F
mov dword ptr [ebp-4], 0
jmp .Lt_00FF
.Lt_012F:
.Lt_012E:
.Lt_012A:
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ebp-20]
push eax
push dword ptr [ebp+12]
lea eax, [ebp-16]
push eax
push dword ptr [ebp+8]
call HGETVARDISTANCE
add esp, 16
mov eax, dword ptr [ebp-20]
sub eax, dword ptr [ebp-16]
mov dword ptr [ebp-8], eax
push dword ptr [ebp-24]
push dword ptr [ebp-8]
push dword ptr [ebp+8]
call HCHECKMEMOFFSET
add esp, 12
test eax, eax
jne .Lt_0131
mov dword ptr [ebp-4], 0
jmp .Lt_00FF
.Lt_0131:
.Lt_0130:
cmp dword ptr [ebp+16], 0
je .Lt_0133
mov eax, dword ptr [ebp-8]
test eax, eax
sete al
shr eax, 1
sbb eax, eax
mov ecx, dword ptr [VECTORWIDTH]
test ecx, ecx
sete cl
shr ecx, 1
sbb ecx, ecx
and eax, ecx
je .Lt_0135
push dword ptr [ebp+8]
call HINSERTSWIZZLE
add esp, 4
jmp .Lt_0134
.Lt_0135:
push dword ptr [ebp-8]
push dword ptr [ebp+8]
call HVECTORIZENODE
add esp, 8
.Lt_0134:
.Lt_0133:
.Lt_0132:
mov dword ptr [ebp-4], -1
jmp .Lt_00FF
.Lt_0125:
.Lt_0124:
mov ecx, dword ptr [ebp+8]
cmp dword ptr [ecx], 17
jne .Lt_0137
cmp dword ptr [ebp+16], 0
jne .Lt_0139
push 0
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HCHECKLOAD
add esp, 12
test eax, eax
jne .Lt_013B
mov dword ptr [ebp-4], 0
jmp .Lt_00FF
.Lt_013B:
.Lt_013A:
.Lt_0139:
.Lt_0138:
cmp dword ptr [ebp+16], 0
je .Lt_013D
cmp dword ptr [VECTORWIDTH], 0
jne .Lt_013F
push dword ptr [ebp+8]
call HINSERTSWIZZLE
add esp, 4
.Lt_013F:
.Lt_013E:
.Lt_013D:
.Lt_013C:
mov dword ptr [ebp-4], -1
jmp .Lt_00FF
.Lt_0137:
.Lt_0136:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 16
jne .Lt_0141
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax+4]
and ecx, 31
mov dword ptr [ebp-24], ecx
mov ecx, dword ptr [ebp-24]
cmp ecx, 14
sete cl
shr ecx, 1
sbb ecx, ecx
mov eax, dword ptr [ebp-24]
cmp eax, 15
sete al
shr eax, 1
sbb eax, eax
or ecx, eax
je .Lt_0143
cmp dword ptr [ebp+16], 0
je .Lt_0145
cmp dword ptr [VECTORWIDTH], 0
jne .Lt_0147
push dword ptr [ebp+8]
call HINSERTSWIZZLE
add esp, 4
.Lt_0147:
.Lt_0146:
.Lt_0145:
.Lt_0144:
jmp .Lt_0142
.Lt_0143:
mov dword ptr [ebp-4], 0
jmp .Lt_00FF
.Lt_0142:
mov dword ptr [ebp-4], -1
jmp .Lt_00FF
.Lt_0141:
.Lt_0140:
cmp dword ptr [ebp+16], 0
je .Lt_0149
push dword ptr [ebp-8]
push dword ptr [ebp+8]
call HVECTORIZENODE
add esp, 8
.Lt_0149:
.Lt_0148:
push dword ptr [ebp+16]
mov eax, dword ptr [ebp+12]
push dword ptr [eax+56]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+56]
call HMERGENODE
add esp, 12
test eax, eax
jne .Lt_014B
mov dword ptr [ebp-4], 0
jmp .Lt_00FF
.Lt_014B:
push dword ptr [ebp+16]
mov eax, dword ptr [ebp+12]
push dword ptr [eax+60]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+60]
call HMERGENODE
add esp, 12
test eax, eax
jne .Lt_014D
mov dword ptr [ebp-4], 0
.Lt_014D:
.Lt_00FF:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HMERGENODE, .-HMERGENODE
.balign 16
HISVECTORIZABLE:
.type HISVECTORIZABLE, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_014E:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 2
jne .Lt_0151
mov dword ptr [ebp-4], -1
jmp .Lt_014F
.Lt_0151:
mov dword ptr [ebp-4], 0
.Lt_014F:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size HISVECTORIZABLE, .-HISVECTORIZABLE
.balign 16
ASTINTRATREEVECTORIZE:
.type ASTINTRATREEVECTORIZE, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_0152:
mov dword ptr [ebp-12], 0
cmp dword ptr [ebp+8], 0
jne .Lt_0155
mov dword ptr [ebp-4], 0
jmp .Lt_0153
.Lt_0155:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 3
jne .Lt_0157
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+20], 28
jne .Lt_0159
mov dword ptr [MAXVECTORWIDTH], 4
mov dword ptr [VECTORWIDTH], 0
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax+60]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+56]
call HMERGENODE
add esp, 12
test eax, eax
je .Lt_015B
mov dword ptr [MAXVECTORWIDTH], 4
mov dword ptr [VECTORWIDTH], 0
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+60]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+56]
call HMERGENODE
add esp, 12
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-8], ebx
mov ebx, dword ptr [ebp-8]
cmp dword ptr [ebx], 4
jne .Lt_015D
mov ebx, dword ptr [ebp-8]
cmp dword ptr [ebx+20], 55
jne .Lt_015F
push edi
push esi
mov edi, dword ptr [ebp+8]
mov esi, dword ptr [ebp-8]
mov ecx, 18
rep movsd
pop esi
pop edi
push dword ptr [ebp-8]
call ASTDELNODE
add esp, 4
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+16], 0
mov dword ptr [ebp-4], -1
jmp .Lt_0153
.Lt_015F:
.Lt_015E:
.Lt_015D:
.Lt_015C:
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+60]
call ASTDELTREE
add esp, 4
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+60], 0
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx], 4
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+20], 55
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+16], 0
mov dword ptr [ebp-4], -1
jmp .Lt_0153
.Lt_015B:
.Lt_015A:
.Lt_0159:
.Lt_0158:
.Lt_0157:
.Lt_0156:
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+56]
call ASTINTRATREEVECTORIZE
add esp, 4
cmp eax, -1
jne .Lt_0161
mov dword ptr [ebp-12], -1
.Lt_0161:
.Lt_0160:
mov eax, dword ptr [ebp+8]
push dword ptr [eax+60]
call ASTINTRATREEVECTORIZE
add esp, 4
cmp eax, -1
jne .Lt_0163
mov dword ptr [ebp-12], -1
.Lt_0163:
.Lt_0162:
mov eax, dword ptr [ebp-12]
mov dword ptr [ebp-4], eax
.Lt_0153:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTINTRATREEVECTORIZE, .-ASTINTRATREEVECTORIZE
.balign 16
HGETNEXTTREE:
.type HGETNEXTTREE, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0164:
mov dword ptr [ebp-8], 0
.Lt_0166:
cmp dword ptr [ebp+8], 0
je .Lt_0167
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
cmp ebx, 30
setne bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax]
cmp ecx, 27
setne cl
shr ecx, 1
sbb ecx, ecx
and ebx, ecx
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ecx]
cmp eax, 21
setne al
shr eax, 1
sbb eax, eax
and ebx, eax
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax]
cmp ecx, 24
setne cl
shr ecx, 1
sbb ecx, ecx
and ebx, ecx
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ecx]
test eax, eax
setne al
shr eax, 1
sbb eax, eax
and ebx, eax
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax]
cmp ecx, 33
setne cl
shr ecx, 1
sbb ecx, ecx
and ebx, ecx
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ecx]
cmp eax, 34
setne al
shr eax, 1
sbb eax, eax
and ebx, eax
je .Lt_0169
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-8], eax
.Lt_0169:
.Lt_0168:
cmp dword ptr [ebp-8], 0
je .Lt_016B
jmp .Lt_0167
.Lt_016B:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+68]
mov dword ptr [ebp+8], ebx
jmp .Lt_0166
.Lt_0167:
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ebx
.Lt_0165:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HGETNEXTTREE, .-HGETNEXTTREE
.balign 16
HCHECKLINK:
.type HCHECKLINK, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_016C:
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 15
je .Lt_016F
jmp .Lt_016D
.Lt_016F:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
cmp dword ptr [ebx], 24
je .Lt_0171
jmp .Lt_016D
.Lt_0171:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+60]
cmp dword ptr [eax], 2
jne .Lt_0173
mov dword ptr [ebp-4], -1
.Lt_0173:
.Lt_0172:
.Lt_016D:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HCHECKLINK, .-HCHECKLINK
	#fbc-1.01.0/src/compiler/ast-vectorize.bas' compilation took 0.02914810623042285 secs

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
	.lcomm	VECTORWIDTH,4
.balign 4
	.lcomm	MAXVECTORWIDTH,4

.section .ctors, "aw", @progbits
.int fb_ctor__astzvectorize
