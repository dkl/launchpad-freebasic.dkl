	.intel_syntax noprefix

	#FreeBASIC-1.01.0-source/src/compiler/rtl-system-thread.bas' compilation started at 16:30:07 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl RTLTHREADCALL
RTLTHREADCALL:
.type RTLTHREADCALL, @function
push ebp
mov ebp, esp
sub esp, 156
push ebx
mov dword ptr [ebp-4], 0
.Lt_00AA:
mov dword ptr [ebp-4], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-32], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+12]
mov dword ptr [ebp-8], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+24]
mov dword ptr [ebp-36], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+60]
mov dword ptr [ebp-40], ebx
cmp dword ptr [ebp-36], 0
jne .Lt_00AC
mov dword ptr [ebp-48], 1
jmp .Lt_00E0
.Lt_00AC:
mov ebx, dword ptr [ebp-36]
mov dword ptr [ebp-48], ebx
.Lt_00E0:
mov ebx, dword ptr [ebp-48]
mov dword ptr [ebp-44], ebx
mov dword ptr [ebp-80], 0
lea ebx, [ebp-80]
add ebx, 4
mov dword ptr [ebx], 0
lea ebx, [ebp-80]
add ebx, 8
mov dword ptr [ebx], 0
lea ebx, [ebp-80]
add ebx, 12
mov dword ptr [ebx], 4
lea ebx, [ebp-80]
add ebx, 16
mov dword ptr [ebx], 1
lea ebx, [ebp-80]
add ebx, 20
mov dword ptr [ebx], 0
mov dword ptr [ebx+4], 0
mov dword ptr [ebx+8], 0
push dword ptr [ebp-44]
push 1
push 1
push 0
push -1
push 4
lea ebx, [ebp-80]
push ebx
call fb_ArrayRedimEx
add esp, 28
test eax, eax
je .Lt_00AE
push 0
push 0
push offset Lt_00AF
push 190
call fb_ErrorThrowAt
add esp, 16
jmp eax
.Lt_00AE:
mov dword ptr [ebp-112], 0
lea eax, [ebp-112]
add eax, 4
mov dword ptr [eax], 0
lea eax, [ebp-112]
add eax, 8
mov dword ptr [eax], 0
lea eax, [ebp-112]
add eax, 12
mov dword ptr [eax], 4
lea eax, [ebp-112]
add eax, 16
mov dword ptr [eax], 1
lea eax, [ebp-112]
add eax, 20
mov dword ptr [eax], 0
mov dword ptr [eax+4], 0
mov dword ptr [eax+8], 0
push dword ptr [ebp-44]
push 1
push 1
push 0
push -1
push 4
lea eax, [ebp-112]
push eax
call fb_ArrayRedimEx
add esp, 28
test eax, eax
je .Lt_00B0
push 0
push 0
push offset Lt_00AF
push 191
call fb_ErrorThrowAt
add esp, 16
jmp eax
.Lt_00B0:
mov dword ptr [ebp-132], 1
mov eax, dword ptr [ebp-36]
mov dword ptr [ebp-136], eax
jmp .Lt_00B2
.Lt_00B5:
cmp dword ptr [ebp-40], 0
jne .Lt_00B7
push 0
lea eax, [ebp-112]
push eax
call fb_ArrayErase
add esp, 8
push 0
lea eax, [ebp-80]
push eax
call fb_ArrayErase
add esp, 8
jmp .Lt_00AB
.Lt_00B7:
.Lt_00B6:
mov eax, dword ptr [ebp-40]
mov ebx, dword ptr [ebp-36]
sub ebx, dword ptr [ebp-132]
sal ebx, 2
add ebx, dword ptr [ebp-80]
mov ecx, dword ptr [eax+56]
mov dword ptr [ebx+4], ecx
mov ecx, dword ptr [ebp-40]
mov dword ptr [ecx+56], 0
mov ecx, dword ptr [ebp-40]
mov ebx, dword ptr [ebp-36]
sub ebx, dword ptr [ebp-132]
sal ebx, 2
add ebx, dword ptr [ebp-112]
mov eax, dword ptr [ecx+20]
mov dword ptr [ebx+4], eax
mov eax, dword ptr [ebp-40]
mov ebx, dword ptr [eax+60]
mov dword ptr [ebp-40], ebx
.Lt_00B3:
inc dword ptr [ebp-132]
.Lt_00B2:
mov ebx, dword ptr [ebp-136]
cmp dword ptr [ebp-132], ebx
jle .Lt_00B5
.Lt_00B4:
push dword ptr [ebp+8]
call ASTDELTREE
add esp, 4
push 0
push 355
push offset Lt_00B8
call RTLPROCLOOKUP
add esp, 8
push eax
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-116], eax
push -1
push -2147483648
push dword ptr [ebp-8]
call ASTBUILDPROCADDROF
add esp, 4
push eax
push dword ptr [ebp-116]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00BA
push 0
lea eax, [ebp-112]
push eax
call fb_ArrayErase
add esp, 8
push 0
lea eax, [ebp-80]
push eax
call fb_ArrayErase
add esp, 8
jmp .Lt_00AB
.Lt_00BA:
.Lt_00B9:
mov dword ptr [ebp-120], 0
mov dword ptr [ebp-124], 0
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+80]
mov dword ptr [ebp-124], ebx
cmp dword ptr [ebp-124], -1
jne .Lt_00BC
mov ebx, dword ptr [ENV+216]
mov dword ptr [ebp-124], ebx
.Lt_00BC:
cmp dword ptr [ebp-124], 3
jne .Lt_00BE
mov dword ptr [ebp-120], 1
jmp .Lt_00BD
.Lt_00BE:
mov ebx, dword ptr [ebp-124]
cmp ebx, 1
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp-124]
cmp eax, 2
sete al
shr eax, 1
sbb eax, eax
or ebx, eax
mov eax, dword ptr [ENV+108]
test eax, eax
sete al
shr eax, 1
sbb eax, eax
and ebx, eax
je .Lt_00BF
mov dword ptr [ebp-120], 0
jmp .Lt_00BD
.Lt_00BF:
push 0
push 0
push 287
call ERRREPORT
add esp, 12
push 0
lea eax, [ebp-112]
push eax
call fb_ArrayErase
add esp, 8
push 0
lea eax, [ebp-80]
push eax
call fb_ArrayErase
add esp, 8
jmp .Lt_00AB
.Lt_00BD:
push 0
push 7
mov ebx, dword ptr [ebp-120]
mov eax, ebx
sar eax, 31
push eax
push ebx
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-16], eax
push -1
push -2147483648
push dword ptr [ebp-16]
push dword ptr [ebp-116]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00C1
push 0
lea eax, [ebp-112]
push eax
call fb_ArrayErase
add esp, 8
push 0
lea eax, [ebp-80]
push eax
call fb_ArrayErase
add esp, 8
jmp .Lt_00AB
.Lt_00C1:
.Lt_00C0:
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-24], eax
push -1
push -2147483648
push dword ptr [ebp-24]
push dword ptr [ebp-116]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00C3
push 0
lea eax, [ebp-112]
push eax
call fb_ArrayErase
add esp, 8
push 0
lea eax, [ebp-80]
push eax
call fb_ArrayErase
add esp, 8
jmp .Lt_00AB
.Lt_00C3:
.Lt_00C2:
push 0
push 7
mov ebx, dword ptr [ebp-36]
mov eax, ebx
sar eax, 31
push eax
push ebx
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-28], eax
push -1
push -2147483648
push dword ptr [ebp-28]
push dword ptr [ebp-116]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00C5
push 0
lea eax, [ebp-112]
push eax
call fb_ArrayErase
add esp, 8
push 0
lea eax, [ebp-80]
push eax
call fb_ArrayErase
add esp, 8
jmp .Lt_00AB
.Lt_00C5:
.Lt_00C4:
mov eax, dword ptr [ebp-8]
cmp dword ptr [eax+80], 4
jne .Lt_00C6
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+76]
mov dword ptr [ebp-128], ebx
jmp .Lt_00E1
.Lt_00C6:
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx+72]
mov dword ptr [ebp-128], eax
.Lt_00E1:
mov eax, dword ptr [ebp-128]
mov dword ptr [ebp-12], eax
mov dword ptr [ebp-132], 1
mov eax, dword ptr [ebp-36]
mov dword ptr [ebp-136], eax
jmp .Lt_00C9
.Lt_00CC:
mov dword ptr [ebp-140], 0
mov dword ptr [ebp-144], -1
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax+52]
mov dword ptr [ebp-140], ebx
push 0
push dword ptr [ebp-12]
call HTHREADCALLMAPTYPE
add esp, 8
mov dword ptr [ebp-144], eax
cmp dword ptr [ebp-140], 1
jne .Lt_00CE
.Lt_00CF:
jmp .Lt_00CD
.Lt_00CE:
cmp dword ptr [ebp-140], 2
je .Lt_00D1
.Lt_00D2:
cmp dword ptr [ebp-140], 3
jne .Lt_00D0
.Lt_00D1:
cmp dword ptr [ebp-144], -1
je .Lt_00D4
mov dword ptr [ebp-144], 13
.Lt_00D4:
.Lt_00D3:
jmp .Lt_00CD
.Lt_00D0:
mov dword ptr [ebp-144], -1
.Lt_00D5:
.Lt_00CD:
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax+28]
mov dword ptr [ebp-148], ebx
push dword ptr [ebp-148]
push dword ptr [ebp-144]
push dword ptr [ebp-116]
call HTHREADCALLPUSHTYPE
add esp, 12
test eax, eax
jne .Lt_00D7
push 0
lea eax, [ebp-112]
push eax
call fb_ArrayErase
add esp, 8
push 0
lea eax, [ebp-80]
push eax
call fb_ArrayErase
add esp, 8
jmp .Lt_00AB
.Lt_00D7:
.Lt_00D6:
mov eax, dword ptr [ebp-132]
sal eax, 2
add eax, dword ptr [ebp-80]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-32], ebx
push 0
lea ebx, [ebp-32]
push ebx
call HGETEXPRREF
add esp, 4
push eax
push dword ptr [ebp-20]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-20], eax
mov dword ptr [ebp-152], 0
mov eax, dword ptr [ebp-132]
sal eax, 2
add eax, dword ptr [ebp-80]
mov ebx, dword ptr [eax]
mov eax, dword ptr [ebx+4]
and eax, 511
and eax, 31
mov dword ptr [ebp-152], eax
mov eax, dword ptr [ebp-140]
cmp eax, 2
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp-132]
sal ebx, 2
add ebx, dword ptr [ebp-112]
mov ecx, dword ptr [ebx]
cmp ecx, 1
setne cl
shr ecx, 1
sbb ecx, ecx
and eax, ecx
mov ecx, dword ptr [ebp-152]
test ecx, ecx
sete cl
shr ecx, 1
sbb ecx, ecx
and eax, ecx
je .Lt_00D9
push 0
lea ecx, [ebp-32]
push ecx
call HGETEXPRREF
add esp, 4
push eax
push dword ptr [ebp-20]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-20], eax
.Lt_00D9:
.Lt_00D8:
cmp dword ptr [ebp-32], 0
jne .Lt_00DB
push 0
lea eax, [ebp-112]
push eax
call fb_ArrayErase
add esp, 8
push 0
lea eax, [ebp-80]
push eax
call fb_ArrayErase
add esp, 8
jmp .Lt_00AB
.Lt_00DB:
.Lt_00DA:
push -1
push -2147483648
push dword ptr [ebp-32]
push dword ptr [ebp-116]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00DD
push 0
lea eax, [ebp-112]
push eax
call fb_ArrayErase
add esp, 8
push 0
lea eax, [ebp-80]
push eax
call fb_ArrayErase
add esp, 8
jmp .Lt_00AB
.Lt_00DD:
.Lt_00DC:
mov eax, dword ptr [ebp-8]
cmp dword ptr [eax+80], 4
jne .Lt_00DE
mov eax, dword ptr [ebp-12]
mov ecx, dword ptr [eax+156]
mov dword ptr [ebp-156], ecx
jmp .Lt_00E2
.Lt_00DE:
mov ecx, dword ptr [ebp-12]
mov eax, dword ptr [ecx+160]
mov dword ptr [ebp-156], eax
.Lt_00E2:
mov eax, dword ptr [ebp-156]
mov dword ptr [ebp-12], eax
.Lt_00CA:
inc dword ptr [ebp-132]
.Lt_00C9:
mov eax, dword ptr [ebp-136]
cmp dword ptr [ebp-132], eax
jle .Lt_00CC
.Lt_00CB:
push 0
push dword ptr [ebp-116]
push dword ptr [ebp-20]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-4], eax
push 0
lea eax, [ebp-112]
push eax
call fb_ArrayErase
add esp, 8
push 0
lea eax, [ebp-80]
push eax
call fb_ArrayErase
add esp, 8
.Lt_00AB:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size RTLTHREADCALL, .-RTLTHREADCALL
.balign 16
fb_ctor__rtlzsystemzthread:
.type fb_ctor__rtlzsystemzthread, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__rtlzsystemzthread, .-fb_ctor__rtlzsystemzthread
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
HTHREADCALLMAPTYPE:
.type HTHREADCALLMAPTYPE, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
mov dword ptr [ebp-4], 0
.Lt_0057:
mov dword ptr [ebp-4], -1
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+24]
and ebx, 511
mov eax, ebx
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+28]
mov dword ptr [ebp-12], ebx
push dword ptr [ebp+8]
call SYMBISARRAY
add esp, 4
test eax, eax
je .Lt_005A
cmp dword ptr [ebp+12], 0
je .Lt_005B
mov dword ptr [ebp-20], -1
jmp .Lt_00E9
.Lt_005B:
mov dword ptr [ebp-20], 13
.Lt_00E9:
mov eax, dword ptr [ebp-20]
mov dword ptr [ebp-4], eax
jmp .Lt_0058
.Lt_005A:
.Lt_0059:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 12
jne .Lt_005D
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+108]
test ebx, ebx
setg bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-16], ebx
jmp .Lt_00EA
.Lt_005D:
mov dword ptr [ebp-16], 0
.Lt_00EA:
cmp dword ptr [ebp-16], 0
je .Lt_0060
jmp .Lt_0058
.Lt_0060:
.Lt_005F:
mov ebx, dword ptr [ebp-8]
and ebx, 480
test ebx, ebx
je .Lt_0062
mov dword ptr [ebp-4], 13
jmp .Lt_0058
.Lt_0062:
.Lt_0061:
cmp dword ptr [ebp-8], 16
jne .Lt_0064
.Lt_0065:
cmp dword ptr [ebp+12], 0
je .Lt_0066
mov dword ptr [ebp-20], -1
jmp .Lt_00EB
.Lt_0066:
mov dword ptr [ebp-20], 13
.Lt_00EB:
mov ebx, dword ptr [ebp-20]
mov dword ptr [ebp-4], ebx
jmp .Lt_0063
.Lt_0064:
cmp dword ptr [ebp-8], 18
jne .Lt_0068
.Lt_0069:
mov ebx, dword ptr [ebp-12]
movsx eax, word ptr [ebx+112]
and eax, 1
test eax, eax
setne al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp-12]
movsx ecx, word ptr [ebx+112]
and ecx, 8192
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
or eax, ecx
je .Lt_006B
jmp .Lt_0058
.Lt_006B:
.Lt_006A:
mov ecx, dword ptr [ebp-12]
movzx eax, byte ptr [ecx+115]
test eax, eax
je .Lt_006D
jmp .Lt_0058
.Lt_006D:
.Lt_006C:
push dword ptr [ebp-12]
call SYMBUDTGETFIRSTFIELD
add esp, 4
mov dword ptr [ebp-20], eax
push dword ptr [ebp-20]
call SYMBUDTGETNEXTFIELD
add esp, 4
test eax, eax
jne .Lt_006F
push -1
push dword ptr [ebp-20]
call HTHREADCALLMAPTYPE
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_006E
.Lt_006F:
mov dword ptr [ebp-4], 12
.Lt_006E:
jmp .Lt_0063
.Lt_0068:
cmp dword ptr [ebp-8], 1
je .Lt_0071
.Lt_0072:
cmp dword ptr [ebp-8], 3
je .Lt_0071
.Lt_0073:
cmp dword ptr [ebp-8], 2
je .Lt_0071
.Lt_0074:
cmp dword ptr [ebp-8], 4
je .Lt_0071
.Lt_0075:
cmp dword ptr [ebp-8], 6
je .Lt_0071
.Lt_0076:
cmp dword ptr [ebp-8], 5
je .Lt_0071
.Lt_0077:
cmp dword ptr [ebp-8], 7
je .Lt_0071
.Lt_0078:
cmp dword ptr [ebp-8], 9
je .Lt_0071
.Lt_0079:
cmp dword ptr [ebp-8], 8
je .Lt_0071
.Lt_007A:
cmp dword ptr [ebp-8], 12
je .Lt_0071
.Lt_007B:
cmp dword ptr [ebp-8], 13
je .Lt_0071
.Lt_007C:
cmp dword ptr [ebp-8], 14
je .Lt_0071
.Lt_007D:
cmp dword ptr [ebp-8], 15
jne .Lt_0070
.Lt_0071:
mov eax, dword ptr [ebp-8]
and eax, 480
je .Lt_007E
mov dword ptr [ebp-20], 22
jmp .Lt_00EC
.Lt_007E:
mov eax, dword ptr [ebp-8]
and eax, 31
mov dword ptr [ebp-20], eax
.Lt_00EC:
mov eax, dword ptr [ebp-20]
imul eax, 28
mov ecx, dword ptr [SYMB_DTYPETB+eax+20]
mov dword ptr [ebp-24], ecx
jmp .Lt_0081
.Lt_0083:
mov dword ptr [ebp-4], 2
jmp .Lt_0080
.Lt_0084:
mov dword ptr [ebp-4], 3
jmp .Lt_0080
.Lt_0085:
mov dword ptr [ebp-4], 4
jmp .Lt_0080
.Lt_0086:
mov dword ptr [ebp-4], 5
jmp .Lt_0080
.Lt_0087:
mov dword ptr [ebp-4], 6
jmp .Lt_0080
.Lt_0088:
mov dword ptr [ebp-4], 7
jmp .Lt_0080
.Lt_0089:
mov dword ptr [ebp-4], 8
jmp .Lt_0080
.Lt_008A:
mov dword ptr [ebp-4], 9
jmp .Lt_0080
.Lt_008B:
mov dword ptr [ebp-4], 10
jmp .Lt_0080
.Lt_008C:
mov dword ptr [ebp-4], 11
jmp .Lt_0080
.Lt_008D:
jmp .Lt_0080
.Lt_0081:
cmp dword ptr [ebp-24], 9
ja .Lt_008D
mov ecx, dword ptr [ebp-24]
jmp dword ptr [.LT_008E+ecx*4]
.LT_008E:
.int .Lt_0083
.int .Lt_0084
.int .Lt_0085
.int .Lt_0086
.int .Lt_0087
.int .Lt_0088
.int .Lt_0089
.int .Lt_008A
.int .Lt_008B
.int .Lt_008C
.Lt_0080:
jmp .Lt_0063
.Lt_0070:
.Lt_008F:
.Lt_0063:
.Lt_0058:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HTHREADCALLMAPTYPE, .-HTHREADCALLMAPTYPE
.balign 16
HTHREADCALLPUSHSTRUCT:
.type HTHREADCALLPUSHSTRUCT, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_0090:
mov dword ptr [ebp-12], 0
push dword ptr [ebp+12]
call SYMBUDTGETFIRSTFIELD
add esp, 4
mov dword ptr [ebp-8], eax
.Lt_0092:
inc dword ptr [ebp-12]
push dword ptr [ebp-8]
call SYMBUDTGETNEXTFIELD
add esp, 4
mov dword ptr [ebp-8], eax
.Lt_0094:
cmp dword ptr [ebp-8], 0
jne .Lt_0092
.Lt_0093:
push -1
push -2147483648
push 0
push 7
mov ebx, dword ptr [ebp-12]
mov eax, ebx
sar eax, 31
push eax
push ebx
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp+8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0096
jmp .Lt_0091
.Lt_0096:
.Lt_0095:
push dword ptr [ebp+12]
call SYMBUDTGETFIRSTFIELD
add esp, 4
mov dword ptr [ebp-8], eax
.Lt_0097:
mov eax, dword ptr [ebp-8]
push dword ptr [eax+28]
push -1
push dword ptr [ebp-8]
call HTHREADCALLMAPTYPE
add esp, 8
push eax
push dword ptr [ebp+8]
call HTHREADCALLPUSHTYPE
add esp, 12
test eax, eax
jne .Lt_009B
jmp .Lt_0091
.Lt_009B:
.Lt_009A:
push dword ptr [ebp-8]
call SYMBUDTGETNEXTFIELD
add esp, 4
mov dword ptr [ebp-8], eax
.Lt_0099:
cmp dword ptr [ebp-8], 0
jne .Lt_0097
.Lt_0098:
mov dword ptr [ebp-4], -1
.Lt_0091:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HTHREADCALLPUSHSTRUCT, .-HTHREADCALLPUSHSTRUCT
.balign 16
HTHREADCALLPUSHTYPE:
.type HTHREADCALLPUSHTYPE, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_009C:
mov dword ptr [ebp-4], 0
cmp dword ptr [ebp+12], -1
jne .Lt_009F
push 0
push 0
push 287
call ERRREPORT
add esp, 12
jmp .Lt_009D
.Lt_009F:
.Lt_009E:
mov dword ptr [ebp-8], 0
push 0
push 7
mov ebx, dword ptr [ebp+12]
mov eax, ebx
sar eax, 31
push eax
push ebx
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-8], eax
push -1
push -2147483648
push dword ptr [ebp-8]
push dword ptr [ebp+8]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00A1
jmp .Lt_009D
.Lt_00A1:
.Lt_00A0:
cmp dword ptr [ebp+12], 12
jne .Lt_00A3
push dword ptr [ebp+16]
push dword ptr [ebp+8]
call HTHREADCALLPUSHSTRUCT
add esp, 8
test eax, eax
jne .Lt_00A5
jmp .Lt_009D
.Lt_00A5:
.Lt_00A4:
.Lt_00A3:
.Lt_00A2:
mov dword ptr [ebp-4], -1
.Lt_009D:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HTHREADCALLPUSHTYPE, .-HTHREADCALLPUSHTYPE
.balign 16
HGETEXPRREF:
.type HGETEXPRREF, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_00A6:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
cmp dword ptr [ebx], 17
jne .Lt_00A9
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx]
call ASTNEWADDROF
add esp, 4
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx], eax
jmp .Lt_00A8
.Lt_00A9:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
push dword ptr [ebx+8]
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx]
mov ebx, dword ptr [eax+4]
and ebx, 511
push ebx
call SYMBADDTEMPVAR
add esp, 8
mov dword ptr [ebp-8], eax
push 16
mov eax, dword ptr [ebp+8]
push dword ptr [eax]
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp-8]
call ASTNEWVAR
add esp, 20
push eax
call ASTNEWASSIGN
add esp, 12
mov dword ptr [ebp-4], eax
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp-8]
call ASTNEWVAR
add esp, 20
push eax
call ASTNEWADDROF
add esp, 4
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx], eax
.Lt_00A8:
.Lt_00A7:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HGETEXPRREF, .-HGETEXPRREF
	#FreeBASIC-1.01.0-source/src/compiler/rtl-system-thread.bas' compilation took 0.03819010499864817 secs

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
Lt_00AF:	.ascii	"FreeBASIC-1.01.0-source/src/compiler/rtl-system-thread.bas\0"
.balign 4
Lt_00B8:	.ascii	"fb_ThreadCall\0"

.section .ctors, "aw", @progbits
.int fb_ctor__rtlzsystemzthread
