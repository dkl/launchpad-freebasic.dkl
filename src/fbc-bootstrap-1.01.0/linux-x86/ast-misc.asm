	.intel_syntax noprefix

	#FreeBASIC-1.01.0-source/src/compiler/ast-misc.bas' compilation started at 16:30:02 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl ASTMISCINIT
ASTMISCINIT:
.type ASTMISCINIT, @function
push ebp
mov ebp, esp
sub esp, 4
.Lt_0057:
push 6
push 12
push 64
lea eax, [AST+148]
push eax
call LISTINIT
add esp, 16
lea eax, [AST+180]
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp-4]
mov dword ptr [eax], 0
mov eax, dword ptr [ebp-4]
mov dword ptr [eax+4], 0
mov eax, dword ptr [ebp-4]
mov dword ptr [eax+8], 0
mov dword ptr [AST+192], 0
mov dword ptr [AST+196], -1
.Lt_0058:
mov esp, ebp
pop ebp
ret
.size ASTMISCINIT, .-ASTMISCINIT
.balign 16

.globl ASTMISCEND
ASTMISCEND:
.type ASTMISCEND, @function
push ebp
mov ebp, esp
sub esp, 4
.Lt_005A:
lea eax, [AST+180]
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp-4]
push dword ptr [eax]
call free
add esp, 4
lea eax, [AST+148]
push eax
call LISTEND
add esp, 4
.Lt_005B:
mov esp, ebp
pop ebp
ret
.size ASTMISCEND, .-ASTMISCEND
.balign 16

.globl ASTISTREEEQUAL
ASTISTREEEQUAL:
.type ASTISTREEEQUAL, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
push esi
mov dword ptr [ebp-4], 0
.Lt_005D:
mov dword ptr [ebp-4], 0
cmp dword ptr [ebp+8], 0
sete al
shr eax, 1
sbb eax, eax
cmp dword ptr [ebp+12], 0
sete bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
je .Lt_0060
mov ebx, dword ptr [ebp+12]
cmp dword ptr [ebp+8], ebx
jne .Lt_0062
mov dword ptr [ebp-4], -1
.Lt_0062:
.Lt_0061:
jmp .Lt_005E
.Lt_0060:
.Lt_005F:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax]
cmp dword ptr [ebx], ecx
je .Lt_0064
jmp .Lt_005E
.Lt_0064:
.Lt_0063:
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
cmp dword ptr [ecx+4], eax
je .Lt_0066
jmp .Lt_005E
.Lt_0066:
.Lt_0065:
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [ebp+12]
mov ebx, dword ptr [ecx+8]
cmp dword ptr [eax+8], ebx
je .Lt_0068
jmp .Lt_005E
.Lt_0068:
.Lt_0067:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx]
mov dword ptr [ebp-8], eax
jmp .Lt_006A
.Lt_006C:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+12]
mov ecx, dword ptr [ebx+12]
cmp dword ptr [eax+12], ecx
je .Lt_006E
jmp .Lt_005E
.Lt_006E:
.Lt_006D:
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ebp+12]
mov esi, dword ptr [eax+20]
mov ebx, dword ptr [eax+24]
cmp dword ptr [ecx+24], ebx
jne .Lt_00A9
cmp dword ptr [ecx+20], esi
je .Lt_0070
.Lt_00A9:
jmp .Lt_005E
.Lt_0070:
.Lt_006F:
jmp .Lt_0069
.Lt_0071:
mov esi, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+12]
mov ecx, dword ptr [ebx+12]
cmp dword ptr [esi+12], ecx
je .Lt_0073
jmp .Lt_005E
.Lt_0073:
.Lt_0072:
jmp .Lt_0069
.Lt_0074:
mov ecx, dword ptr [ebp+8]
mov esi, dword ptr [ecx+4]
and esi, 480
je .Lt_0075
mov dword ptr [ebp-12], 22
jmp .Lt_00A6
.Lt_0075:
mov esi, dword ptr [ebp+8]
mov ecx, dword ptr [esi+4]
and ecx, 31
mov dword ptr [ebp-12], ecx
.Lt_00A6:
mov ecx, dword ptr [ebp-12]
imul ecx, 28
mov esi, dword ptr [SYMB_DTYPETB+ecx]
mov dword ptr [ebp-16], esi
cmp dword ptr [ebp-16], 1
jne .Lt_0079
.Lt_007A:
mov esi, dword ptr [ebp+8]
mov ecx, dword ptr [ebp+12]
fld qword ptr [esi+20]
fcomp qword ptr [ecx+20]
fnstsw ax
test ah, 0b01000000
jnz .Lt_007C
jmp .Lt_005E
.Lt_007C:
.Lt_007B:
jmp .Lt_0077
.Lt_0079:
cmp dword ptr [ebp-16], 0
jne .Lt_007D
.Lt_007E:
mov ecx, dword ptr [ebp+8]
mov esi, dword ptr [ebp+12]
mov eax, dword ptr [esi+20]
mov ebx, dword ptr [esi+24]
cmp dword ptr [ecx+24], ebx
jne .Lt_00AA
cmp dword ptr [ecx+20], eax
je .Lt_0080
.Lt_00AA:
jmp .Lt_005E
.Lt_0080:
.Lt_007F:
.Lt_007D:
.Lt_0077:
jmp .Lt_0069
.Lt_0081:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+12]
mov esi, dword ptr [ebx+20]
mov ecx, dword ptr [ebx+24]
cmp dword ptr [eax+24], ecx
jne .Lt_00AB
cmp dword ptr [eax+20], esi
je .Lt_0083
.Lt_00AB:
jmp .Lt_005E
.Lt_0083:
.Lt_0082:
jmp .Lt_0069
.Lt_0084:
mov esi, dword ptr [ebp+8]
mov ecx, dword ptr [ebp+12]
mov ebx, dword ptr [ecx+20]
mov eax, dword ptr [ecx+24]
cmp dword ptr [esi+24], eax
jne .Lt_00AC
cmp dword ptr [esi+20], ebx
je .Lt_0086
.Lt_00AC:
jmp .Lt_005E
.Lt_0086:
.Lt_0085:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp+12]
mov esi, dword ptr [eax+28]
cmp dword ptr [ebx+28], esi
je .Lt_0088
jmp .Lt_005E
.Lt_0088:
.Lt_0087:
jmp .Lt_0069
.Lt_0089:
mov esi, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+20]
cmp dword ptr [esi+20], eax
je .Lt_008B
jmp .Lt_005E
.Lt_008B:
.Lt_008A:
mov eax, dword ptr [ebp+8]
mov esi, dword ptr [ebp+12]
mov ebx, dword ptr [esi+24]
cmp dword ptr [eax+24], ebx
je .Lt_008D
jmp .Lt_005E
.Lt_008D:
.Lt_008C:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp+12]
mov esi, dword ptr [eax+28]
cmp dword ptr [ebx+28], esi
je .Lt_008F
jmp .Lt_005E
.Lt_008F:
.Lt_008E:
jmp .Lt_0069
.Lt_0090:
mov esi, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+20]
cmp dword ptr [esi+20], eax
je .Lt_0092
jmp .Lt_005E
.Lt_0092:
.Lt_0091:
mov eax, dword ptr [ebp+8]
mov esi, dword ptr [ebp+12]
mov ebx, dword ptr [esi+24]
cmp dword ptr [eax+24], ebx
je .Lt_0094
jmp .Lt_005E
.Lt_0094:
.Lt_0093:
jmp .Lt_0069
.Lt_0095:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp+12]
mov esi, dword ptr [eax+12]
cmp dword ptr [ebx+12], esi
je .Lt_0097
jmp .Lt_005E
.Lt_0097:
.Lt_0096:
mov esi, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+20]
cmp dword ptr [esi+20], eax
je .Lt_0099
jmp .Lt_005E
.Lt_0099:
.Lt_0098:
jmp .Lt_0069
.Lt_009A:
mov eax, dword ptr [ebp+8]
mov esi, dword ptr [ebp+12]
mov ebx, dword ptr [esi+12]
cmp dword ptr [eax+12], ebx
je .Lt_009C
jmp .Lt_005E
.Lt_009C:
.Lt_009B:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax+20]
mov esi, dword ptr [eax+24]
cmp dword ptr [ebx+24], esi
jne .Lt_00AD
cmp dword ptr [ebx+20], ecx
je .Lt_009E
.Lt_00AD:
jmp .Lt_005E
.Lt_009E:
.Lt_009D:
jmp .Lt_0069
.Lt_009F:
jmp .Lt_0069
.Lt_00A0:
jmp .Lt_005E
jmp .Lt_0069
.Lt_006A:
mov ecx, dword ptr [ebp-8]
add ecx, 4294967295
cmp ecx, 22
ja .Lt_0069
mov ecx, dword ptr [ebp-8]
jmp dword ptr [.LT_00A1+ecx*4-4]
.LT_00A1:
.int .Lt_00A0
.int .Lt_00A0
.int .Lt_0089
.int .Lt_0090
.int .Lt_009F
.int .Lt_0095
.int .Lt_00A0
.int .Lt_0069
.int .Lt_00A0
.int .Lt_0069
.int .Lt_0069
.int .Lt_0069
.int .Lt_0069
.int .Lt_0069
.int .Lt_00A0
.int .Lt_0074
.int .Lt_006C
.int .Lt_0084
.int .Lt_0071
.int .Lt_0081
.int .Lt_0069
.int .Lt_0069
.int .Lt_009A
.Lt_0069:
mov ecx, dword ptr [ebp+12]
push dword ptr [ecx+56]
mov ecx, dword ptr [ebp+8]
push dword ptr [ecx+56]
call ASTISTREEEQUAL
add esp, 8
test eax, eax
jne .Lt_00A3
jmp .Lt_005E
.Lt_00A3:
.Lt_00A2:
mov eax, dword ptr [ebp+12]
push dword ptr [eax+60]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+60]
call ASTISTREEEQUAL
add esp, 8
test eax, eax
jne .Lt_00A5
jmp .Lt_005E
.Lt_00A5:
.Lt_00A4:
mov dword ptr [ebp-4], -1
.Lt_005E:
mov eax, dword ptr [ebp-4]
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTISTREEEQUAL, .-ASTISTREEEQUAL
.balign 16

.globl ASTISEQUALPARAMINIT
ASTISEQUALPARAMINIT:
.type ASTISEQUALPARAMINIT, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
push esi
mov dword ptr [ebp-4], 0
.Lt_00AE:
mov dword ptr [ebp-4], 0
cmp dword ptr [ebp+8], 0
sete al
shr eax, 1
sbb eax, eax
cmp dword ptr [ebp+12], 0
sete bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
je .Lt_00B1
mov ebx, dword ptr [ebp+12]
cmp dword ptr [ebp+8], ebx
jne .Lt_00B3
mov dword ptr [ebp-4], -1
.Lt_00B3:
.Lt_00B2:
jmp .Lt_00AF
.Lt_00B1:
.Lt_00B0:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax]
cmp dword ptr [ebx], ecx
je .Lt_00B5
jmp .Lt_00AF
.Lt_00B5:
.Lt_00B4:
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
cmp dword ptr [ecx+4], eax
je .Lt_00B7
jmp .Lt_00AF
.Lt_00B7:
.Lt_00B6:
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [ebp+12]
mov ebx, dword ptr [ecx+8]
cmp dword ptr [eax+8], ebx
je .Lt_00B9
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 31
cmp eax, 20
jne .Lt_00BB
mov eax, dword ptr [ebp+12]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+8]
call SYMBISEQUAL
add esp, 8
test eax, eax
jne .Lt_00BD
jmp .Lt_00AF
.Lt_00BD:
.Lt_00BC:
jmp .Lt_00BA
.Lt_00BB:
jmp .Lt_00AF
.Lt_00BA:
.Lt_00B9:
.Lt_00B8:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-8], ebx
jmp .Lt_00BF
.Lt_00C1:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax+20]
cmp dword ptr [ebx+20], ecx
je .Lt_00C3
jmp .Lt_00AF
.Lt_00C3:
.Lt_00C2:
jmp .Lt_00BE
.Lt_00C4:
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+12]
cmp dword ptr [ecx+12], eax
je .Lt_00C6
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+12]
mov eax, dword ptr [ecx+4]
and eax, 4194304
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_00C8
jmp .Lt_00AF
.Lt_00C8:
.Lt_00C7:
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax+12]
mov eax, dword ptr [ecx+4]
and eax, 4194304
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_00CA
jmp .Lt_00AF
.Lt_00CA:
.Lt_00C9:
.Lt_00C6:
.Lt_00C5:
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [ebp+12]
mov esi, dword ptr [ecx+20]
mov ebx, dword ptr [ecx+24]
cmp dword ptr [eax+24], ebx
jne .Lt_0109
cmp dword ptr [eax+20], esi
je .Lt_00CC
.Lt_0109:
jmp .Lt_00AF
.Lt_00CC:
.Lt_00CB:
jmp .Lt_00BE
.Lt_00CD:
mov esi, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+12]
cmp dword ptr [esi+12], eax
je .Lt_00CF
mov eax, dword ptr [ebp+8]
mov esi, dword ptr [eax+12]
mov eax, dword ptr [esi+4]
and eax, 4194304
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_00D1
jmp .Lt_00AF
.Lt_00D1:
.Lt_00D0:
mov eax, dword ptr [ebp+12]
mov esi, dword ptr [eax+12]
mov eax, dword ptr [esi+4]
and eax, 4194304
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_00D3
jmp .Lt_00AF
.Lt_00D3:
.Lt_00D2:
.Lt_00CF:
.Lt_00CE:
jmp .Lt_00BE
.Lt_00D4:
mov eax, dword ptr [ebp+8]
mov esi, dword ptr [eax+4]
and esi, 480
je .Lt_00D5
mov dword ptr [ebp-12], 22
jmp .Lt_0104
.Lt_00D5:
mov esi, dword ptr [ebp+8]
mov eax, dword ptr [esi+4]
and eax, 31
mov dword ptr [ebp-12], eax
.Lt_0104:
mov eax, dword ptr [ebp-12]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax], 1
jne .Lt_00D8
mov eax, dword ptr [ebp+8]
mov esi, dword ptr [ebp+12]
fld qword ptr [eax+20]
fcomp qword ptr [esi+20]
fnstsw ax
test ah, 0b01000000
jnz .Lt_00DA
jmp .Lt_00AF
.Lt_00DA:
.Lt_00D9:
jmp .Lt_00D7
.Lt_00D8:
mov esi, dword ptr [ebp+8]
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax+20]
mov ebx, dword ptr [eax+24]
cmp dword ptr [esi+24], ebx
jne .Lt_010C
cmp dword ptr [esi+20], ecx
je .Lt_00DC
.Lt_010C:
jmp .Lt_00AF
.Lt_00DC:
.Lt_00DB:
.Lt_00D7:
jmp .Lt_00BE
.Lt_00DD:
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+20]
mov esi, dword ptr [ebx+24]
cmp dword ptr [ecx+24], esi
jne .Lt_010D
cmp dword ptr [ecx+20], eax
je .Lt_00DF
.Lt_010D:
jmp .Lt_00AF
.Lt_00DF:
.Lt_00DE:
jmp .Lt_00BE
.Lt_00E0:
mov eax, dword ptr [ebp+8]
mov esi, dword ptr [ebp+12]
mov ebx, dword ptr [esi+20]
mov ecx, dword ptr [esi+24]
cmp dword ptr [eax+24], ecx
jne .Lt_010E
cmp dword ptr [eax+20], ebx
je .Lt_00E2
.Lt_010E:
jmp .Lt_00AF
.Lt_00E2:
.Lt_00E1:
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebp+12]
mov eax, dword ptr [ecx+28]
cmp dword ptr [ebx+28], eax
je .Lt_00E4
jmp .Lt_00AF
.Lt_00E4:
.Lt_00E3:
jmp .Lt_00BE
.Lt_00E5:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+12]
mov ecx, dword ptr [ebx+20]
cmp dword ptr [eax+20], ecx
je .Lt_00E7
jmp .Lt_00AF
.Lt_00E7:
.Lt_00E6:
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+24]
cmp dword ptr [ecx+24], ebx
je .Lt_00E9
jmp .Lt_00AF
.Lt_00E9:
.Lt_00E8:
jmp .Lt_00BE
.Lt_00EA:
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebp+12]
mov eax, dword ptr [ecx+12]
cmp dword ptr [ebx+12], eax
je .Lt_00EC
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+12]
mov eax, dword ptr [ebx+4]
and eax, 4194304
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_00EE
jmp .Lt_00AF
.Lt_00EE:
.Lt_00ED:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+12]
mov eax, dword ptr [ebx+4]
and eax, 4194304
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_00F0
jmp .Lt_00AF
.Lt_00F0:
.Lt_00EF:
.Lt_00EC:
.Lt_00EB:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+12]
mov ecx, dword ptr [ebx+20]
cmp dword ptr [eax+20], ecx
je .Lt_00F2
jmp .Lt_00AF
.Lt_00F2:
.Lt_00F1:
jmp .Lt_00BE
.Lt_00F3:
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+12]
cmp dword ptr [ecx+12], ebx
je .Lt_00F5
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebx+12]
mov ebx, dword ptr [ecx+4]
and ebx, 4194304
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_00F7
jmp .Lt_00AF
.Lt_00F7:
.Lt_00F6:
mov ebx, dword ptr [ebp+12]
mov ecx, dword ptr [ebx+12]
mov ebx, dword ptr [ecx+4]
and ebx, 4194304
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_00F9
jmp .Lt_00AF
.Lt_00F9:
.Lt_00F8:
.Lt_00F5:
.Lt_00F4:
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebp+12]
mov esi, dword ptr [ecx+20]
mov eax, dword ptr [ecx+24]
cmp dword ptr [ebx+24], eax
jne .Lt_0113
cmp dword ptr [ebx+20], esi
je .Lt_00FB
.Lt_0113:
jmp .Lt_00AF
.Lt_00FB:
.Lt_00FA:
jmp .Lt_00BE
.Lt_00FC:
mov esi, dword ptr [ebp+8]
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+12]
cmp dword ptr [esi+12], ebx
je .Lt_00FE
jmp .Lt_00AF
.Lt_00FE:
.Lt_00FD:
jmp .Lt_00BE
.Lt_00BF:
mov ebx, dword ptr [ebp-8]
add ebx, 4294967293
cmp ebx, 20
ja .Lt_00BE
mov ebx, dword ptr [ebp-8]
jmp dword ptr [.LT_00FF+ebx*4-12]
.LT_00FF:
.int .Lt_00E5
.int .Lt_00E5
.int .Lt_00BE
.int .Lt_00EA
.int .Lt_00BE
.int .Lt_00BE
.int .Lt_00FC
.int .Lt_00BE
.int .Lt_00BE
.int .Lt_00BE
.int .Lt_00BE
.int .Lt_00BE
.int .Lt_00C1
.int .Lt_00D4
.int .Lt_00C4
.int .Lt_00E0
.int .Lt_00CD
.int .Lt_00DD
.int .Lt_00BE
.int .Lt_00BE
.int .Lt_00F3
.Lt_00BE:
mov ebx, dword ptr [ebp+12]
push dword ptr [ebx+56]
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+56]
call ASTISEQUALPARAMINIT
add esp, 8
test eax, eax
jne .Lt_0101
jmp .Lt_00AF
.Lt_0101:
.Lt_0100:
mov eax, dword ptr [ebp+12]
push dword ptr [eax+60]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+60]
call ASTISEQUALPARAMINIT
add esp, 8
test eax, eax
jne .Lt_0103
jmp .Lt_00AF
.Lt_0103:
.Lt_0102:
mov dword ptr [ebp-4], -1
.Lt_00AF:
mov eax, dword ptr [ebp-4]
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTISEQUALPARAMINIT, .-ASTISEQUALPARAMINIT
.balign 16

.globl ASTHASSIDEFX
ASTHASSIDEFX:
.type ASTHASSIDEFX, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_0114:
cmp dword ptr [ebp+8], 0
jne .Lt_0117
jmp .Lt_0115
.Lt_0117:
.Lt_0116:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 9
jne .Lt_0119
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+12]
mov eax, dword ptr [ebx+8]
and eax, 524288
test eax, eax
jne .Lt_011B
mov dword ptr [ebp-4], -1
jmp .Lt_0115
.Lt_011B:
.Lt_011A:
.Lt_0119:
.Lt_0118:
mov eax, dword ptr [ebp+8]
push dword ptr [eax+56]
call ASTHASSIDEFX
add esp, 4
test eax, eax
je .Lt_011D
mov dword ptr [ebp-4], -1
jmp .Lt_0115
.Lt_011D:
.Lt_011C:
mov eax, dword ptr [ebp+8]
push dword ptr [eax+60]
call ASTHASSIDEFX
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_0115:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTHASSIDEFX, .-ASTHASSIDEFX
.balign 16

.globl ASTISSYMBOLONTREE
ASTISSYMBOLONTREE:
.type ASTISSYMBOLONTREE, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_011E:
cmp dword ptr [ebp+12], 0
jne .Lt_0121
mov dword ptr [ebp-4], 0
jmp .Lt_011F
.Lt_0121:
.Lt_0120:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-12], ebx
jmp .Lt_0123
.Lt_0125:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+12]
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp+8]
cmp dword ptr [ebp-8], eax
jne .Lt_0127
mov dword ptr [ebp-4], -1
jmp .Lt_011F
.Lt_0127:
.Lt_0126:
cmp dword ptr [ebp-8], 0
je .Lt_0129
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+4]
and ebx, 327680
test ebx, ebx
je .Lt_012B
mov dword ptr [ebp-4], -1
jmp .Lt_011F
.Lt_012B:
.Lt_012A:
.Lt_0129:
.Lt_0128:
jmp .Lt_0122
.Lt_012C:
mov dword ptr [ebp-4], -1
jmp .Lt_011F
jmp .Lt_0122
.Lt_0123:
mov ebx, dword ptr [ebp-12]
add ebx, 4294967290
cmp ebx, 17
ja .Lt_0122
mov ebx, dword ptr [ebp-12]
jmp dword ptr [.LT_012D+ebx*4-24]
.LT_012D:
.int .Lt_0125
.int .Lt_0122
.int .Lt_0122
.int .Lt_0122
.int .Lt_0122
.int .Lt_0122
.int .Lt_0122
.int .Lt_0122
.int .Lt_0122
.int .Lt_0122
.int .Lt_0122
.int .Lt_0125
.int .Lt_0125
.int .Lt_0125
.int .Lt_012C
.int .Lt_0122
.int .Lt_0122
.int .Lt_0125
.Lt_0122:
mov ebx, dword ptr [ebp+12]
cmp dword ptr [ebx+56], 0
je .Lt_012F
mov ebx, dword ptr [ebp+12]
push dword ptr [ebx+56]
push dword ptr [ebp+8]
call ASTISSYMBOLONTREE
add esp, 8
test eax, eax
je .Lt_0131
mov dword ptr [ebp-4], -1
jmp .Lt_011F
.Lt_0131:
.Lt_0130:
.Lt_012F:
.Lt_012E:
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax+60], 0
je .Lt_0133
mov eax, dword ptr [ebp+12]
push dword ptr [eax+60]
push dword ptr [ebp+8]
call ASTISSYMBOLONTREE
add esp, 8
test eax, eax
je .Lt_0135
mov dword ptr [ebp-4], -1
jmp .Lt_011F
.Lt_0135:
.Lt_0134:
.Lt_0133:
.Lt_0132:
mov dword ptr [ebp-4], 0
.Lt_011F:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTISSYMBOLONTREE, .-ASTISSYMBOLONTREE
.balign 16

.globl ASTREPLACESYMBOLONTREE
ASTREPLACESYMBOLONTREE:
.type ASTREPLACESYMBOLONTREE, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0136:
cmp dword ptr [ebp+8], 0
jne .Lt_0139
jmp .Lt_0137
.Lt_0139:
.Lt_0138:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+12]
cmp dword ptr [eax+12], ebx
jne .Lt_013B
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp+16]
mov dword ptr [ebx+12], eax
.Lt_013B:
.Lt_013A:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-4], ebx
jmp .Lt_013D
.Lt_013F:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp+12]
cmp dword ptr [ebx+28], eax
jne .Lt_0141
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+16]
mov dword ptr [eax+28], ebx
.Lt_0141:
.Lt_0140:
jmp .Lt_013C
.Lt_0142:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp+12]
cmp dword ptr [ebx+20], eax
jne .Lt_0144
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+16]
mov dword ptr [eax+20], ebx
.Lt_0144:
.Lt_0143:
jmp .Lt_013C
.Lt_0145:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call ASTREPLACESYMBOLONCALL
add esp, 12
jmp .Lt_013C
.Lt_013D:
mov ebx, dword ptr [ebp-4]
add ebx, 4294967293
cmp ebx, 23
ja .Lt_013C
mov ebx, dword ptr [ebp-4]
jmp dword ptr [.LT_0146+ebx*4-12]
.LT_0146:
.int .Lt_013F
.int .Lt_013F
.int .Lt_013C
.int .Lt_013C
.int .Lt_013F
.int .Lt_013C
.int .Lt_0145
.int .Lt_013C
.int .Lt_013C
.int .Lt_013C
.int .Lt_013F
.int .Lt_013C
.int .Lt_013C
.int .Lt_013C
.int .Lt_013C
.int .Lt_013C
.int .Lt_013C
.int .Lt_013C
.int .Lt_013C
.int .Lt_013C
.int .Lt_013C
.int .Lt_013C
.int .Lt_013C
.int .Lt_0142
.Lt_013C:
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx+56], 0
je .Lt_0148
push dword ptr [ebp+16]
push dword ptr [ebp+12]
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+56]
call ASTREPLACESYMBOLONTREE
add esp, 12
.Lt_0148:
.Lt_0147:
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx+60], 0
je .Lt_014A
push dword ptr [ebp+16]
push dword ptr [ebp+12]
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+60]
call ASTREPLACESYMBOLONTREE
add esp, 12
.Lt_014A:
.Lt_0149:
.Lt_0137:
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTREPLACESYMBOLONTREE, .-ASTREPLACESYMBOLONTREE
.balign 16

.globl ASTREPLACEFWDREF
ASTREPLACEFWDREF:
.type ASTREPLACEFWDREF, @function
push ebp
mov ebp, esp
push ebx
.Lt_014B:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 31
cmp ebx, 21
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+8]
cmp ecx, dword ptr [ebp+12]
sete al
shr eax, 1
sbb eax, eax
and ebx, eax
je .Lt_014E
push dword ptr [ebp+16]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+4]
call TYPEMERGE
add esp, 8
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+4], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+20]
mov dword ptr [eax+8], ebx
.Lt_014E:
.Lt_014D:
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx+56], 0
je .Lt_0150
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+56]
call ASTREPLACEFWDREF
add esp, 16
.Lt_0150:
.Lt_014F:
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx+60], 0
je .Lt_0152
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+60]
call ASTREPLACEFWDREF
add esp, 16
.Lt_0152:
.Lt_0151:
.Lt_014C:
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTREPLACEFWDREF, .-ASTREPLACEFWDREF
.balign 16

.globl ASTISCONSTANT
ASTISCONSTANT:
.type ASTISCONSTANT, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_0155:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+12], 0
je .Lt_0158
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+12]
mov eax, dword ptr [ebx+4]
and eax, 1048576
test eax, eax
je .Lt_015A
mov dword ptr [ebp-4], -1
jmp .Lt_0156
.Lt_015A:
.Lt_0159:
.Lt_0158:
.Lt_0157:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
cmp ebx, 16
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+4]
and ecx, 512
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
or ebx, ecx
mov dword ptr [ebp-4], ebx
.Lt_0156:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTISCONSTANT, .-ASTISCONSTANT
.balign 16

.globl ASTGETSTRLITSYMBOL
ASTGETSTRLITSYMBOL:
.type ASTGETSTRLITSYMBOL, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_015D:
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 17
jne .Lt_0160
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+12]
mov dword ptr [ebp-8], ebx
cmp dword ptr [ebp-8], 0
je .Lt_0162
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx+4]
and eax, 524288
test eax, eax
je .Lt_0164
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0164:
.Lt_0163:
.Lt_0162:
.Lt_0161:
.Lt_0160:
.Lt_015F:
.Lt_015E:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTGETSTRLITSYMBOL, .-ASTGETSTRLITSYMBOL
.balign 16

.globl ASTCHECKCONST
ASTCHECKCONST:
.type ASTCHECKCONST, @function
push ebp
mov ebp, esp
sub esp, 40
push ebx
.Lt_0165:
mov dword ptr [ebp-4], -1
mov eax, dword ptr [ebp+8]
and eax, 511
mov ebx, eax
mov dword ptr [ebp-28], ebx
jmp .Lt_0168
.Lt_016A:
push dword ptr [ebp+12]
call ASTCONSTGETASDOUBLE
add esp, 4
fstp qword ptr [ebp-12]
fld qword ptr [ebp-12]
fabs
fstp qword ptr [ebp-36]
fld qword ptr [ebp-36]
fcomp qword ptr [Lt_0185]
fnstsw ax
test ah, 0b01000000
jnz .Lt_016E
.Lt_016F:
fld qword ptr [ebp-36]
fcomp qword ptr [Lt_0186]
fnstsw ax
test ah, 0b00000001
jnz .Lt_016D
fld qword ptr [ebp-36]
fcomp qword ptr [Lt_0187]
fnstsw ax
test ah, 0b01000001
jz .Lt_016D
.Lt_016E:
mov dword ptr [ebp-4], -1
jmp .Lt_016B
.Lt_016D:
fld qword ptr [ebp-12]
fstp dword ptr [ebp-16]
fld dword ptr [ebp-16]
fadd dword ptr [ebp-16]
fcomp dword ptr [ebp-16]
fnstsw ax
test ah, 0b01000000
jz .Lt_0172
fld qword ptr [ebp-12]
fadd qword ptr [ebp-12]
fcomp qword ptr [ebp-12]
push eax
fnstsw ax
test ah, 0b01000000
pop eax
setnz bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-4], ebx
jmp .Lt_0171
.Lt_0172:
mov dword ptr [ebp-4], -1
.Lt_0171:
.Lt_0170:
.Lt_016B:
jmp .Lt_0167
.Lt_0173:
mov ebx, dword ptr [ebp+8]
and ebx, 480
je .Lt_0174
mov dword ptr [ebp-32], 22
jmp .Lt_0188
.Lt_0174:
mov ebx, dword ptr [ebp+8]
and ebx, 31
mov dword ptr [ebp-32], ebx
.Lt_0188:
mov ebx, dword ptr [ebp-32]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx+20]
mov dword ptr [ebp-36], eax
jmp .Lt_0177
.Lt_0179:
push dword ptr [ebp+12]
call ASTCONSTGETASINT64
add esp, 4
mov dword ptr [ebp-24], eax
mov dword ptr [ebp-20], edx
cmp dword ptr [ebp-20], 4294967295
mov eax, -1
jg .Lt_018D
jl .Lt_018E
cmp dword ptr [ebp-24], 4294967168
jae .Lt_018D
.Lt_018E:
xor eax, eax
.Lt_018D:
cmp dword ptr [ebp-20], 0
mov edx, -1
jl .Lt_018F
jg .Lt_0190
cmp dword ptr [ebp-24], 255
jbe .Lt_018F
.Lt_0190:
xor edx, edx
.Lt_018F:
and eax, edx
mov dword ptr [ebp-4], eax
jmp .Lt_0176
.Lt_017A:
push dword ptr [ebp+12]
call ASTCONSTGETASINT64
add esp, 4
mov dword ptr [ebp-24], eax
mov dword ptr [ebp-20], edx
cmp dword ptr [ebp-20], 4294967295
mov eax, -1
jg .Lt_0191
jl .Lt_0192
cmp dword ptr [ebp-24], 4294934528
jae .Lt_0191
.Lt_0192:
xor eax, eax
.Lt_0191:
cmp dword ptr [ebp-20], 0
mov edx, -1
jl .Lt_0193
jg .Lt_0194
cmp dword ptr [ebp-24], 65535
jbe .Lt_0193
.Lt_0194:
xor edx, edx
.Lt_0193:
and eax, edx
mov dword ptr [ebp-4], eax
jmp .Lt_0176
.Lt_017B:
push dword ptr [ebp+12]
call ASTCONSTGETASINT64
add esp, 4
mov dword ptr [ebp-24], eax
mov dword ptr [ebp-20], edx
cmp dword ptr [ebp-20], 4294967295
mov eax, -1
jg .Lt_0195
jl .Lt_0196
cmp dword ptr [ebp-24], 2147483648
jae .Lt_0195
.Lt_0196:
xor eax, eax
.Lt_0195:
cmp dword ptr [ebp-20], 0
mov edx, -1
jl .Lt_0197
jg .Lt_0198
cmp dword ptr [ebp-24], 4294967295
jbe .Lt_0197
.Lt_0198:
xor edx, edx
.Lt_0197:
and eax, edx
mov dword ptr [ebp-4], eax
jmp .Lt_0176
.Lt_017C:
mov eax, dword ptr [ebp+12]
mov edx, dword ptr [eax+4]
and edx, 480
je .Lt_017D
mov dword ptr [ebp-40], 22
jmp .Lt_0189
.Lt_017D:
mov edx, dword ptr [ebp+12]
mov eax, dword ptr [edx+4]
and eax, 31
mov dword ptr [ebp-40], eax
.Lt_0189:
mov eax, dword ptr [ebp-40]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax], 1
jne .Lt_0180
push dword ptr [ebp+12]
call ASTCONSTGETASDOUBLE
add esp, 4
fstp qword ptr [ebp-12]
fld qword ptr [ebp-12]
fcomp qword ptr [Lt_018A]
fnstsw ax
sahf
setae al
shr eax, 1
sbb eax, eax
fld qword ptr [ebp-12]
fcomp qword ptr [Lt_018B]
push eax
fnstsw ax
test ah, 0b01000001
pop eax
setnz dl
shr edx, 1
sbb edx, edx
and eax, edx
mov dword ptr [ebp-4], eax
.Lt_0180:
.Lt_017F:
jmp .Lt_0176
.Lt_0177:
cmp dword ptr [ebp-36], 7
ja .Lt_0176
mov eax, dword ptr [ebp-36]
jmp dword ptr [.LT_0181+eax*4]
.LT_0181:
.int .Lt_0179
.int .Lt_0179
.int .Lt_017A
.int .Lt_017A
.int .Lt_017B
.int .Lt_017B
.int .Lt_017C
.int .Lt_017C
.Lt_0176:
jmp .Lt_0167
.Lt_0168:
mov eax, dword ptr [ebp-28]
add eax, 4294967282
test eax, eax
ja .Lt_0173
mov eax, dword ptr [ebp-28]
jmp dword ptr [.LT_0182+eax*4-56]
.LT_0182:
.int .Lt_016A
.Lt_0167:
mov eax, dword ptr [ebp-4]
test eax, eax
sete al
shr eax, 1
sbb eax, eax
mov edx, dword ptr [AST+232]
test edx, edx
sete dl
shr edx, 1
sbb edx, edx
and eax, edx
je .Lt_0184
push 1
push 0
push 25
call ERRREPORTWARN
add esp, 12
.Lt_0184:
.Lt_0183:
.Lt_0166:
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTCHECKCONST, .-ASTCHECKCONST
.balign 16

.globl ASTPTRCHECK
ASTPTRCHECK:
.type ASTPTRCHECK, @function
push ebp
mov ebp, esp
sub esp, 40
push ebx
mov dword ptr [ebp-4], 0
.Lt_019D:
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-8], ebx
mov ebx, dword ptr [ebp-8]
and ebx, 480
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_01A0
mov ebx, dword ptr [ebp+16]
cmp dword ptr [ebx], 16
jne .Lt_01A2
mov ebx, dword ptr [ebp-8]
and ebx, 480
je .Lt_01A3
mov dword ptr [ebp-12], 22
jmp .Lt_01C0
.Lt_01A3:
mov ebx, dword ptr [ebp-8]
and ebx, 31
mov dword ptr [ebp-12], ebx
.Lt_01C0:
mov ebx, dword ptr [ebp-12]
imul ebx, 28
cmp dword ptr [SYMB_DTYPETB+ebx], 0
jne .Lt_01A6
push dword ptr [ebp+16]
call ASTCONSTEQZERO
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_01A6:
.Lt_01A5:
.Lt_01A2:
.Lt_01A1:
jmp .Lt_019E
.Lt_01A0:
.Lt_019F:
cmp dword ptr [ebp+20], 0
je .Lt_01A8
mov eax, dword ptr [ebp-8]
and eax, 261632
and eax, -513
mov ebx, dword ptr [ebp+8]
and ebx, 261632
and ebx, -513
cmp eax, ebx
je .Lt_01AA
jmp .Lt_019E
.Lt_01AA:
.Lt_01A9:
.Lt_01A8:
.Lt_01A7:
mov ebx, dword ptr [ebp+8]
and ebx, 511
mov eax, dword ptr [ebp-8]
and eax, 511
cmp ebx, eax
je .Lt_01AC
mov eax, dword ptr [ebp+8]
and eax, 31
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp-8]
and eax, 31
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-12], 0
jne .Lt_01AE
mov dword ptr [ebp-4], -1
jmp .Lt_019E
jmp .Lt_01AD
.Lt_01AE:
cmp dword ptr [ebp-16], 0
jne .Lt_01AF
mov dword ptr [ebp-4], -1
jmp .Lt_019E
.Lt_01AF:
.Lt_01AD:
mov eax, dword ptr [ebp+8]
and eax, 480
sar eax, 5
mov ebx, dword ptr [ebp-8]
and ebx, 480
sar ebx, 5
cmp eax, ebx
je .Lt_01B1
jmp .Lt_019E
.Lt_01B1:
.Lt_01B0:
mov ebx, dword ptr [ebp-12]
cmp ebx, 15
setle bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp-16]
cmp eax, 15
setle al
shr eax, 1
sbb eax, eax
and ebx, eax
je .Lt_01B3
mov eax, dword ptr [ebp-12]
and eax, 480
je .Lt_01B4
mov dword ptr [ebp-20], 22
jmp .Lt_01C1
.Lt_01B4:
mov eax, dword ptr [ebp-12]
and eax, 31
mov dword ptr [ebp-20], eax
.Lt_01C1:
mov eax, dword ptr [ebp-20]
imul eax, 28
mov dword ptr [ebp-28], eax
mov eax, dword ptr [ebp-16]
and eax, 480
je .Lt_01B6
mov dword ptr [ebp-24], 22
jmp .Lt_01C2
.Lt_01B6:
mov eax, dword ptr [ebp-16]
and eax, 31
mov dword ptr [ebp-24], eax
.Lt_01C2:
mov eax, dword ptr [ebp-24]
imul eax, 28
mov ebx, dword ptr [ebp-28]
mov ecx, dword ptr [SYMB_DTYPETB+eax+4]
cmp dword ptr [SYMB_DTYPETB+ebx+4], ecx
jne .Lt_01B9
mov ecx, dword ptr [ebp-12]
and ecx, 480
je .Lt_01BA
mov dword ptr [ebp-32], 22
jmp .Lt_01C4
.Lt_01BA:
mov ecx, dword ptr [ebp-12]
and ecx, 31
mov dword ptr [ebp-32], ecx
.Lt_01C4:
mov ecx, dword ptr [ebp-32]
imul ecx, 28
mov dword ptr [ebp-40], ecx
mov ecx, dword ptr [ebp-16]
and ecx, 480
je .Lt_01BC
mov dword ptr [ebp-36], 22
jmp .Lt_01C5
.Lt_01BC:
mov ecx, dword ptr [ebp-16]
and ecx, 31
mov dword ptr [ebp-36], ecx
.Lt_01C5:
mov ecx, dword ptr [ebp-36]
imul ecx, 28
mov ebx, dword ptr [ebp-40]
mov eax, dword ptr [SYMB_DTYPETB+ecx]
cmp dword ptr [SYMB_DTYPETB+ebx], eax
jne .Lt_01BF
mov dword ptr [ebp-4], -1
jmp .Lt_019E
.Lt_01BF:
.Lt_01BE:
.Lt_01B9:
.Lt_01B8:
.Lt_01B3:
.Lt_01B2:
jmp .Lt_019E
.Lt_01AC:
.Lt_01AB:
push dword ptr [ebp+12]
mov eax, dword ptr [ebp+16]
push dword ptr [eax+8]
call SYMBISEQUAL
add esp, 8
mov dword ptr [ebp-4], eax
.Lt_019E:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTPTRCHECK, .-ASTPTRCHECK
.balign 16

.globl ASTUPDSTRCONCAT
ASTUPDSTRCONCAT:
.type ASTUPDSTRCONCAT, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
mov dword ptr [ebp-4], 0
.Lt_01CA:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp+8], 0
jne .Lt_01CD
jmp .Lt_01CB
.Lt_01CD:
.Lt_01CC:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 511
mov eax, ebx
mov dword ptr [ebp-16], eax
jmp .Lt_01CF
.Lt_01D1:
jmp .Lt_01CE
.Lt_01D2:
jmp .Lt_01CB
jmp .Lt_01CE
.Lt_01CF:
mov eax, dword ptr [ebp-16]
add eax, 4294967290
cmp eax, 11
ja .Lt_01D2
mov eax, dword ptr [ebp-16]
jmp dword ptr [.LT_01D3+eax*4-24]
.LT_01D3:
.int .Lt_01D1
.int .Lt_01D2
.int .Lt_01D2
.int .Lt_01D2
.int .Lt_01D2
.int .Lt_01D2
.int .Lt_01D2
.int .Lt_01D2
.int .Lt_01D2
.int .Lt_01D2
.int .Lt_01D1
.int .Lt_01D1
.Lt_01CE:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-8], ebx
cmp dword ptr [ebp-8], 0
je .Lt_01D5
push dword ptr [ebp-8]
call ASTUPDSTRCONCAT
add esp, 4
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+56], eax
.Lt_01D5:
.Lt_01D4:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+60]
mov dword ptr [ebp-12], ebx
cmp dword ptr [ebp-12], 0
je .Lt_01D7
push dword ptr [ebp-12]
call ASTUPDSTRCONCAT
add esp, 4
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+60], eax
.Lt_01D7:
.Lt_01D6:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 3
jne .Lt_01D9
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+20], 28
jne .Lt_01DB
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-8], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+60]
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+4]
and ebx, 511
mov dword ptr [ebp-16], ebx
mov ebx, dword ptr [ebp-12]
mov eax, dword ptr [ebx+4]
and eax, 511
mov dword ptr [ebp-20], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 511
cmp ebx, 6
je .Lt_01DD
push dword ptr [ebp-20]
push dword ptr [ebp-12]
push dword ptr [ebp-16]
push dword ptr [ebp-8]
call RTLSTRCONCAT
add esp, 16
mov dword ptr [ebp-4], eax
jmp .Lt_01DC
.Lt_01DD:
push dword ptr [ebp-20]
push dword ptr [ebp-12]
push dword ptr [ebp-16]
push dword ptr [ebp-8]
call RTLWSTRCONCAT
add esp, 16
mov dword ptr [ebp-4], eax
.Lt_01DC:
push dword ptr [ebp+8]
call ASTDELNODE
add esp, 4
.Lt_01DB:
.Lt_01DA:
.Lt_01D9:
.Lt_01D8:
.Lt_01CB:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTUPDSTRCONCAT, .-ASTUPDSTRCONCAT
.balign 16

.globl ASTBUILDBRANCH
ASTBUILDBRANCH:
.type ASTBUILDBRANCH, @function
push ebp
mov ebp, esp
sub esp, 84
push ebx
mov dword ptr [ebp-4], 0
.Lt_01DE:
cmp dword ptr [ebp+8], 0
jne .Lt_01E1
mov dword ptr [ebp-4], 0
jmp .Lt_01DF
.Lt_01E1:
.Lt_01E0:
push dword ptr [ebp+8]
call ASTOPTIMIZETREE
add esp, 4
mov dword ptr [ebp+8], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 511
mov dword ptr [ebp-20], ebx
mov ebx, dword ptr [ebp-20]
and ebx, 480
je .Lt_01E2
mov dword ptr [ebp-32], 22
jmp .Lt_022E
.Lt_01E2:
mov ebx, dword ptr [ebp-20]
and ebx, 31
mov dword ptr [ebp-32], ebx
.Lt_022E:
mov ebx, dword ptr [ebp-32]
imul ebx, 28
cmp dword ptr [SYMB_DTYPETB+ebx], 2
jne .Lt_01E5
mov dword ptr [ebp-4], 0
jmp .Lt_01DF
.Lt_01E5:
.Lt_01E4:
mov ebx, dword ptr [ebp-20]
mov dword ptr [ebp-40], ebx
jmp .Lt_01E7
.Lt_01E9:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx]
cmp eax, 20
sete al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_01EB
mov dword ptr [ebp-4], 0
jmp .Lt_01DF
.Lt_01EB:
.Lt_01EA:
jmp .Lt_01E6
.Lt_01EC:
lea eax, [ebp-44]
push eax
push dword ptr [ebp+8]
push 0
push 0
call SYMBFINDCASTOVLPROC
add esp, 16
mov dword ptr [ebp-48], eax
cmp dword ptr [ebp-48], 0
jne .Lt_01EE
lea eax, [ebp-44]
push eax
push dword ptr [ebp+8]
push 0
push 32
call SYMBFINDCASTOVLPROC
add esp, 16
mov dword ptr [ebp-48], eax
cmp dword ptr [ebp-48], 0
jne .Lt_01F0
push 27
mov eax, dword ptr [ebp+8]
push dword ptr [eax+8]
call SYMBGETCOMPOPOVLHEAD
add esp, 8
mov dword ptr [ebp-48], eax
cmp dword ptr [ebp-48], 0
jne .Lt_01F2
mov dword ptr [ebp-84], 0
mov dword ptr [ebp-80], 0
mov dword ptr [ebp-76], 0
push 0
push -1
push 9
push offset Lt_01F4
push -1
push 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+8]
push dword ptr [ebx+12]
push 3
push offset Lt_01F3
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
lea ebx, [ebp-60]
push ebx
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-72], 0
mov dword ptr [ebp-68], 0
mov dword ptr [ebp-64], 0
lea eax, [ebp-72]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-84]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-84]
push -1
push 98
call ERRREPORT
add esp, 12
lea eax, [ebp-84]
push eax
call fb_StrDelete
add esp, 4
mov dword ptr [ebp-4], 0
jmp .Lt_01DF
.Lt_01F2:
.Lt_01F1:
push 0
push -1
push 98
call ERRREPORT
add esp, 12
mov dword ptr [ebp-4], 0
jmp .Lt_01DF
.Lt_01F0:
.Lt_01EF:
.Lt_01EE:
.Lt_01ED:
push 0
push 0
push dword ptr [ebp+8]
push dword ptr [ebp-48]
call ASTBUILDCALL
add esp, 16
mov dword ptr [ebp+8], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 511
mov dword ptr [ebp-20], ebx
jmp .Lt_01E6
.Lt_01E7:
mov ebx, dword ptr [ebp-40]
add ebx, 4294967293
cmp ebx, 15
ja .Lt_01E6
mov ebx, dword ptr [ebp-40]
jmp dword ptr [.LT_01F8+ebx*4-12]
.LT_01F8:
.int .Lt_01E9
.int .Lt_01E6
.int .Lt_01E6
.int .Lt_01E9
.int .Lt_01E6
.int .Lt_01E6
.int .Lt_01E6
.int .Lt_01E6
.int .Lt_01E6
.int .Lt_01E6
.int .Lt_01E6
.int .Lt_01E6
.int .Lt_01E6
.int .Lt_01E6
.int .Lt_01E6
.int .Lt_01EC
.Lt_01E6:
push dword ptr [ebp+8]
call ASTTYPEINIUPDATE
add esp, 4
mov dword ptr [ebp+8], eax
lea eax, [AST+148]
push eax
call LISTGETHEAD
add esp, 4
test eax, eax
sete bl
shr ebx, 1
sbb ebx, ebx
or ebx, dword ptr [ebp+20]
not ebx
mov dword ptr [ebp-24], ebx
cmp dword ptr [ebp-24], 0
jne .Lt_01FA
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebp-8], ebx
mov dword ptr [ebp-12], 0
.Lt_01FB:
mov ebx, dword ptr [ebp-8]
cmp dword ptr [ebx], 15
jne .Lt_01FC
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebp-12], ebx
mov ebx, dword ptr [ebp-8]
cmp dword ptr [ebx+20], 0
je .Lt_01FE
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx+56]
mov dword ptr [ebp-8], eax
jmp .Lt_01FD
.Lt_01FE:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+60]
mov dword ptr [ebp-8], ebx
.Lt_01FD:
jmp .Lt_01FB
.Lt_01FC:
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx]
mov dword ptr [ebp-40], eax
cmp dword ptr [ebp-40], 16
jne .Lt_0201
.Lt_0202:
push dword ptr [ebp-8]
call ASTCONSTEQZERO
add esp, 4
mov ebx, dword ptr [ebp+16]
cmp eax, ebx
je .Lt_0204
push 0
push dword ptr [ebp+12]
push 97
call ASTNEWBRANCH
add esp, 12
mov dword ptr [ebp-16], eax
jmp .Lt_0203
.Lt_0204:
call ASTNEWNOP
mov dword ptr [ebp-16], eax
.Lt_0203:
push dword ptr [ebp-8]
call ASTDELNODE
add esp, 4
mov eax, dword ptr [ebp-16]
mov dword ptr [ebp-8], eax
jmp .Lt_01FF
.Lt_0201:
cmp dword ptr [ebp-40], 3
jne .Lt_0205
.Lt_0206:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+20]
mov dword ptr [ebp-44], ebx
jmp .Lt_0208
.Lt_020A:
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebp+12]
mov dword ptr [ebx+28], eax
cmp dword ptr [ebp+16], 0
jne .Lt_020C
mov eax, dword ptr [ebp-8]
push dword ptr [eax+20]
call ASTGETINVERSELOGOP
add esp, 4
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+20], eax
.Lt_020C:
.Lt_020B:
jmp .Lt_0207
.Lt_020D:
mov eax, dword ptr [ebp-20]
and eax, 480
je .Lt_020E
mov dword ptr [ebp-52], 22
jmp .Lt_022F
.Lt_020E:
mov eax, dword ptr [ebp-20]
and eax, 31
mov dword ptr [ebp-52], eax
.Lt_022F:
mov eax, dword ptr [ebp-52]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax], 0
jne .Lt_0211
mov eax, dword ptr [IR+284]
and eax, 256
test eax, eax
setne al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-48], eax
cmp dword ptr [ebp-48], 0
je .Lt_0213
mov eax, dword ptr [ebp-20]
mov dword ptr [ebp-56], eax
jmp .Lt_0215
.Lt_0217:
mov eax, dword ptr [IR+284]
and eax, 1024
test eax, eax
setne al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-48], eax
jmp .Lt_0214
.Lt_0215:
mov eax, dword ptr [ebp-56]
add eax, 4294967284
cmp eax, 1
ja .Lt_0214
mov eax, dword ptr [ebp-56]
jmp dword ptr [.LT_0218+eax*4-48]
.LT_0218:
.int .Lt_0217
.int .Lt_0217
.Lt_0214:
.Lt_0213:
.Lt_0212:
jmp .Lt_0210
.Lt_0211:
mov eax, dword ptr [IR+284]
and eax, 4
test eax, eax
setne al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-48], eax
.Lt_0210:
cmp dword ptr [ebp-48], 0
je .Lt_021A
push dword ptr [ebp-8]
push dword ptr [ebp+12]
cmp dword ptr [ebp+16], 0
je .Lt_021B
mov dword ptr [ebp-56], 94
jmp .Lt_0230
.Lt_021B:
mov dword ptr [ebp-56], 91
.Lt_0230:
push dword ptr [ebp-56]
call ASTNEWBRANCH
add esp, 12
mov dword ptr [ebp-8], eax
jmp .Lt_0219
.Lt_021A:
mov dword ptr [ebp-8], 0
.Lt_0219:
jmp .Lt_0207
.Lt_021D:
mov dword ptr [ebp-8], 0
jmp .Lt_0207
.Lt_0208:
mov eax, dword ptr [ebp-44]
add eax, 4294967268
cmp eax, 22
ja .Lt_021D
mov eax, dword ptr [ebp-44]
jmp dword ptr [.LT_021E+eax*4-112]
.LT_021E:
.int .Lt_020D
.int .Lt_020D
.int .Lt_021D
.int .Lt_021D
.int .Lt_021D
.int .Lt_021D
.int .Lt_020D
.int .Lt_020D
.int .Lt_021D
.int .Lt_021D
.int .Lt_020D
.int .Lt_021D
.int .Lt_020D
.int .Lt_020D
.int .Lt_020D
.int .Lt_021D
.int .Lt_021D
.int .Lt_020A
.int .Lt_020A
.int .Lt_020A
.int .Lt_020A
.int .Lt_020A
.int .Lt_020A
.Lt_0207:
jmp .Lt_01FF
.Lt_0205:
mov dword ptr [ebp-8], 0
.Lt_021F:
.Lt_01FF:
cmp dword ptr [ebp-8], 0
je .Lt_0221
cmp dword ptr [ebp-12], 0
je .Lt_0223
mov eax, dword ptr [ebp-12]
cmp dword ptr [eax+20], 0
je .Lt_0225
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [ebp-8]
mov dword ptr [eax+56], ebx
jmp .Lt_0224
.Lt_0225:
mov ebx, dword ptr [ebp-12]
mov eax, dword ptr [ebp-8]
mov dword ptr [ebx+60], eax
.Lt_0224:
jmp .Lt_0222
.Lt_0223:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp+8], eax
.Lt_0222:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
jmp .Lt_01DF
.Lt_0221:
.Lt_0220:
jmp .Lt_01F9
.Lt_01FA:
mov dword ptr [ebp-8], 0
.Lt_01F9:
cmp dword ptr [ebp-20], 3
je .Lt_0228
.Lt_0229:
cmp dword ptr [ebp-20], 6
jne .Lt_0227
.Lt_0228:
mov eax, dword ptr [ebp-20]
and eax, -512
mov ebx, dword ptr [ebp-20]
imul ebx, 28
mov ecx, dword ptr [SYMB_DTYPETB+ebx+16]
and ecx, 511
or eax, ecx
mov dword ptr [ebp-20], eax
.Lt_0227:
.Lt_0226:
cmp dword ptr [ebp-24], 0
je .Lt_022B
mov eax, dword ptr [ebp+8]
push dword ptr [eax+8]
push dword ptr [ebp-20]
call SYMBADDTEMPVAR
add esp, 8
mov dword ptr [ebp-28], eax
push 64
push dword ptr [ebp+8]
push dword ptr [ebp-28]
call _Z17ASTBUILDVARASSIGNP8FBSYMBOLP7ASTNODEi
add esp, 12
mov dword ptr [ebp-8], eax
push -1
push 0
call ASTDTORLISTFLUSH
add esp, 4
push eax
push dword ptr [ebp-8]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-8], eax
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp-28]
call ASTNEWVAR
add esp, 20
mov dword ptr [ebp+8], eax
.Lt_022B:
.Lt_022A:
push -1
push 0
push dword ptr [ebp+12]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+8]
push dword ptr [ebp-20]
call ASTNEWCONSTZ
add esp, 8
push eax
push dword ptr [ebp+8]
cmp dword ptr [ebp+16], 0
je .Lt_022C
mov dword ptr [ebp-36], 48
jmp .Lt_0231
.Lt_022C:
mov dword ptr [ebp-36], 45
.Lt_0231:
push dword ptr [ebp-36]
call ASTNEWBOP
add esp, 20
push eax
push dword ptr [ebp-8]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_01DF:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTBUILDBRANCH, .-ASTBUILDBRANCH
.balign 16

.globl ASTDTORLISTADD
ASTDTORLISTADD:
.type ASTDTORLISTADD, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_0241:
push dword ptr [ebp+8]
call HHASDTOR
add esp, 4
test eax, eax
jne .Lt_0244
jmp .Lt_0242
.Lt_0244:
.Lt_0243:
lea eax, [AST+148]
push eax
call LISTNEWNODE
add esp, 4
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [ebp+8]
mov dword ptr [eax], ebx
lea ebx, [AST+180]
mov dword ptr [ebp-8], ebx
mov ebx, dword ptr [ebp-8]
cmp dword ptr [ebx+4], 0
jle .Lt_0247
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebp-8]
mov ecx, dword ptr [eax+4]
sal ecx, 2
mov eax, dword ptr [ebx]
add eax, ecx
mov ecx, dword ptr [ebp-4]
mov ebx, dword ptr [eax-4]
mov dword ptr [ecx+4], ebx
jmp .Lt_0246
.Lt_0247:
mov ebx, dword ptr [ebp-4]
mov dword ptr [ebx+4], 0
.Lt_0246:
mov ebx, dword ptr [ebp-4]
mov dword ptr [ebx+8], 0
.Lt_0242:
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTDTORLISTADD, .-ASTDTORLISTADD
.balign 16

.globl ASTDTORLISTADDREF
ASTDTORLISTADDREF:
.type ASTDTORLISTADDREF, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0248:
push dword ptr [ebp+8]
call HHASDTOR
add esp, 4
test eax, eax
jne .Lt_024B
jmp .Lt_0249
.Lt_024B:
.Lt_024A:
lea eax, [AST+148]
push eax
call LISTGETTAIL
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_024C:
cmp dword ptr [ebp-4], 0
je .Lt_024D
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [ebp+8]
cmp dword ptr [eax], ebx
jne .Lt_024F
mov ebx, dword ptr [ebp-4]
inc dword ptr [ebx+8]
jmp .Lt_024D
.Lt_024F:
.Lt_024E:
push dword ptr [ebp-4]
call LISTGETPREV
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_024C
.Lt_024D:
.Lt_0249:
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTDTORLISTADDREF, .-ASTDTORLISTADDREF
.balign 16

.globl ASTDTORLISTREMOVEREF
ASTDTORLISTREMOVEREF:
.type ASTDTORLISTREMOVEREF, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0250:
push dword ptr [ebp+8]
call HHASDTOR
add esp, 4
test eax, eax
jne .Lt_0253
jmp .Lt_0251
.Lt_0253:
.Lt_0252:
lea eax, [AST+148]
push eax
call LISTGETTAIL
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_0254:
cmp dword ptr [ebp-4], 0
je .Lt_0255
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [ebp+8]
cmp dword ptr [eax], ebx
jne .Lt_0257
mov ebx, dword ptr [ebp-4]
dec dword ptr [ebx+8]
mov ebx, dword ptr [ebp-4]
cmp dword ptr [ebx+8], 0
jg .Lt_0259
push dword ptr [ebp-4]
lea ebx, [AST+148]
push ebx
call LISTDELNODE
add esp, 8
.Lt_0259:
.Lt_0258:
jmp .Lt_0255
.Lt_0257:
.Lt_0256:
push dword ptr [ebp-4]
call LISTGETPREV
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_0254
.Lt_0255:
.Lt_0251:
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTDTORLISTREMOVEREF, .-ASTDTORLISTREMOVEREF
.balign 16

.globl ASTDTORLISTFLUSH
ASTDTORLISTFLUSH:
.type ASTDTORLISTFLUSH, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
mov dword ptr [ebp-4], 0
.Lt_025A:
mov dword ptr [ebp-16], 0
lea eax, [AST+148]
push eax
call LISTGETTAIL
add esp, 4
mov dword ptr [ebp-8], eax
.Lt_025C:
cmp dword ptr [ebp-8], 0
je .Lt_025D
push dword ptr [ebp-8]
call LISTGETPREV
add esp, 4
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+8]
cmp dword ptr [eax+4], ebx
jne .Lt_025F
push -1
push 0
mov ebx, dword ptr [ebp-8]
push dword ptr [ebx]
call _Z19ASTBUILDVARDTORCALLP8FBSYMBOLi
add esp, 8
push eax
push dword ptr [ebp-16]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-16], eax
push dword ptr [ebp-8]
lea eax, [AST+148]
push eax
call LISTDELNODE
add esp, 8
.Lt_025F:
.Lt_025E:
mov eax, dword ptr [ebp-12]
mov dword ptr [ebp-8], eax
jmp .Lt_025C
.Lt_025D:
cmp dword ptr [ebp+8], 0
jne .Lt_0261
mov dword ptr [AST+192], 0
.Lt_0261:
.Lt_0260:
mov eax, dword ptr [ebp-16]
mov dword ptr [ebp-4], eax
.Lt_025B:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTDTORLISTFLUSH, .-ASTDTORLISTFLUSH
.balign 16

.globl ASTDTORLISTDEL
ASTDTORLISTDEL:
.type ASTDTORLISTDEL, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0262:
push dword ptr [ebp+8]
call HHASDTOR
add esp, 4
test eax, eax
jne .Lt_0265
jmp .Lt_0263
.Lt_0265:
.Lt_0264:
lea eax, [AST+148]
push eax
call LISTGETTAIL
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_0266:
cmp dword ptr [ebp-4], 0
je .Lt_0267
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [ebp+8]
cmp dword ptr [eax], ebx
jne .Lt_0269
push dword ptr [ebp-4]
lea ebx, [AST+148]
push ebx
call LISTDELNODE
add esp, 8
jmp .Lt_0267
.Lt_0269:
.Lt_0268:
push dword ptr [ebp-4]
call LISTGETPREV
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_0266
.Lt_0267:
.Lt_0263:
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTDTORLISTDEL, .-ASTDTORLISTDEL
.balign 16

.globl ASTDTORLISTSCOPEBEGIN
ASTDTORLISTSCOPEBEGIN:
.type ASTDTORLISTSCOPEBEGIN, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_026A:
cmp dword ptr [ebp+8], 0
jne .Lt_026D
inc dword ptr [AST+192]
mov eax, dword ptr [AST+192]
mov dword ptr [ebp+8], eax
.Lt_026D:
.Lt_026C:
lea eax, [AST+180]
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [ebp-4]
mov ecx, dword ptr [ebx+8]
cmp dword ptr [eax+4], ecx
jne .Lt_0270
mov ecx, dword ptr [ebp-4]
add dword ptr [ecx+8], 8
mov ecx, dword ptr [ebp-4]
mov eax, dword ptr [ecx+8]
sal eax, 2
mov ecx, eax
push ecx
mov ecx, dword ptr [ebp-4]
push dword ptr [ecx]
call XREALLOCATE
add esp, 8
mov ecx, dword ptr [ebp-4]
mov dword ptr [ecx], eax
.Lt_0270:
.Lt_026F:
mov eax, dword ptr [ebp-4]
mov ecx, dword ptr [ebp-4]
mov ebx, dword ptr [ecx+4]
sal ebx, 2
mov ecx, dword ptr [eax]
add ecx, ebx
mov ebx, dword ptr [ebp+8]
mov dword ptr [ecx], ebx
mov ebx, dword ptr [ebp-4]
inc dword ptr [ebx+4]
.Lt_026B:
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTDTORLISTSCOPEBEGIN, .-ASTDTORLISTSCOPEBEGIN
.balign 16

.globl ASTDTORLISTSCOPEEND
ASTDTORLISTSCOPEEND:
.type ASTDTORLISTSCOPEEND, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0271:
lea eax, [AST+180]
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp-8]
mov ecx, dword ptr [ebx+4]
sal ecx, 2
mov ebx, dword ptr [eax]
add ebx, ecx
mov ecx, dword ptr [ebx-4]
mov dword ptr [ebp-4], ecx
mov ecx, dword ptr [ebp-8]
dec dword ptr [ecx+4]
.Lt_0272:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTDTORLISTSCOPEEND, .-ASTDTORLISTSCOPEEND
.balign 16

.globl ASTDTORLISTUNSCOPE
ASTDTORLISTUNSCOPE:
.type ASTDTORLISTUNSCOPE, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0274:
lea eax, [AST+148]
push eax
call LISTGETTAIL
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_0276:
cmp dword ptr [ebp-4], 0
je .Lt_0277
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [ebp+8]
cmp dword ptr [eax+4], ebx
jne .Lt_0279
mov ebx, dword ptr [ebp-4]
mov dword ptr [ebx+4], 0
.Lt_0279:
.Lt_0278:
push dword ptr [ebp-4]
call LISTGETPREV
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_0276
.Lt_0277:
.Lt_0275:
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTDTORLISTUNSCOPE, .-ASTDTORLISTUNSCOPE
.balign 16

.globl ASTSETTYPE
ASTSETTYPE:
.type ASTSETTYPE, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_027A:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+12]
mov dword ptr [eax+4], ebx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebp+16]
mov dword ptr [ebx+8], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-4], ebx
cmp dword ptr [ebp-4], 15
jne .Lt_027E
.Lt_027F:
mov ebx, dword ptr [ebp+8]
cmp dword ptr [ebx+20], 0
je .Lt_0281
push dword ptr [ebp+16]
push dword ptr [ebp+12]
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+56]
call ASTSETTYPE
add esp, 12
jmp .Lt_0280
.Lt_0281:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+60]
call ASTSETTYPE
add esp, 12
.Lt_0280:
jmp .Lt_027C
.Lt_027E:
cmp dword ptr [ebp-4], 19
jne .Lt_0282
.Lt_0283:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+56]
call ASTSETTYPE
add esp, 12
jmp .Lt_027C
.Lt_0282:
cmp dword ptr [ebp-4], 10
jne .Lt_0284
.Lt_0285:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+60]
call ASTSETTYPE
add esp, 12
jmp .Lt_027C
.Lt_0284:
cmp dword ptr [ebp-4], 26
jne .Lt_0286
.Lt_0287:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+56]
call ASTSETTYPE
add esp, 12
.Lt_0286:
.Lt_027C:
.Lt_027B:
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTSETTYPE, .-ASTSETTYPE
.balign 16

.globl ASTSIZEOF
ASTSIZEOF:
.type ASTSIZEOF, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
.Lt_0288:
mov eax, dword ptr [ebp+8]
push dword ptr [eax+8]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+4]
call SYMBCALCLEN
add esp, 8
mov dword ptr [ebp-8], eax
mov dword ptr [ebp-4], edx
mov eax, dword ptr [ebp+8]
mov edx, dword ptr [eax+4]
and edx, 511
mov dword ptr [ebp-12], edx
cmp dword ptr [ebp-12], 3
je .Lt_028D
.Lt_028E:
cmp dword ptr [ebp-12], 6
je .Lt_028D
.Lt_028F:
cmp dword ptr [ebp-12], 17
jne .Lt_028C
.Lt_028D:
mov edx, dword ptr [ebp+8]
cmp dword ptr [edx+12], 0
je .Lt_0291
mov edx, dword ptr [ebp+8]
mov eax, dword ptr [edx+12]
mov ebx, dword ptr [eax+36]
mov edx, dword ptr [eax+40]
mov dword ptr [ebp-8], ebx
mov dword ptr [ebp-4], edx
.Lt_0291:
.Lt_0290:
.Lt_028C:
.Lt_028A:
.Lt_0289:
mov eax, dword ptr [ebp-8]
mov edx, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTSIZEOF, .-ASTSIZEOF
.balign 16

.globl ASTISACCESSTOLOCAL
ASTISACCESSTOLOCAL:
.type ASTISACCESSTOLOCAL, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_0294:
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-8], ebx
cmp dword ptr [ebp-8], 17
jne .Lt_0298
.Lt_0299:
mov ebx, dword ptr [ebp+8]
push dword ptr [ebx+12]
call HSYMBISONLOCALSTACK
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_0296
.Lt_0298:
cmp dword ptr [ebp-8], 18
jne .Lt_029A
.Lt_029B:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+12]
mov eax, dword ptr [ebx+4]
and eax, 65536
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_029D
mov eax, dword ptr [ebp+8]
push dword ptr [eax+12]
call HSYMBISONLOCALSTACK
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_029D:
.Lt_029C:
jmp .Lt_0296
.Lt_029A:
cmp dword ptr [ebp-8], 9
jne .Lt_029E
.Lt_029F:
mov dword ptr [ebp-4], -1
jmp .Lt_0296
.Lt_029E:
cmp dword ptr [ebp-8], 19
jne .Lt_02A0
.Lt_02A1:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
cmp dword ptr [ebx], 20
jne .Lt_02A3
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+56]
mov ebx, dword ptr [eax+56]
mov eax, dword ptr [ebx]
cmp eax, 3
sete al
shr eax, 1
sbb eax, eax
test eax, eax
je .Lt_02A4
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov eax, dword ptr [ebx+56]
mov ebx, dword ptr [eax+20]
cmp ebx, 28
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-12], ebx
jmp .Lt_02AA
.Lt_02A4:
mov dword ptr [ebp-12], 0
.Lt_02AA:
cmp dword ptr [ebp-12], 0
je .Lt_02A7
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+56]
mov ebx, dword ptr [eax+56]
mov eax, dword ptr [ebx+56]
cmp dword ptr [eax], 6
jne .Lt_02A9
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov eax, dword ptr [ebx+56]
mov ebx, dword ptr [eax+56]
push dword ptr [ebx+56]
call ASTISACCESSTOLOCAL
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_02A9:
.Lt_02A8:
.Lt_02A7:
.Lt_02A6:
.Lt_02A3:
.Lt_02A2:
.Lt_02A0:
.Lt_0296:
.Lt_0295:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size ASTISACCESSTOLOCAL, .-ASTISACCESSTOLOCAL
.balign 16
fb_ctor__astzmisc:
.type fb_ctor__astzmisc, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__astzmisc, .-fb_ctor__astzmisc
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
HHASDTOR:
.type HHASDTOR, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0237:
push dword ptr [ebp+8]
call SYMBHASDTOR
add esp, 4
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+24]
and ebx, 511
mov dword ptr [ebp-8], ebx
cmp dword ptr [ebp-8], 16
jne .Lt_023B
.Lt_023C:
mov dword ptr [ebp-4], -1
jmp .Lt_0239
.Lt_023B:
cmp dword ptr [ebp-8], 38
jne .Lt_023D
.Lt_023E:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+8]
and eax, 16777216
test eax, eax
je .Lt_0240
mov dword ptr [ebp-4], -1
.Lt_0240:
.Lt_023F:
.Lt_023D:
.Lt_0239:
.Lt_0238:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HHASDTOR, .-HHASDTOR
.balign 16
HSYMBISONLOCALSTACK:
.type HSYMBISONLOCALSTACK, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_0292:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 128
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+4]
and ecx, 2
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
not ecx
and ebx, ecx
mov dword ptr [ebp-4], ebx
.Lt_0293:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HSYMBISONLOCALSTACK, .-HSYMBISONLOCALSTACK
	#FreeBASIC-1.01.0-source/src/compiler/ast-misc.bas' compilation took 0.04198508232366294 secs

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
.balign 8
Lt_0185:	.quad	0x0000000000000000
.balign 8
Lt_0186:	.quad	0x36A6D601AD376AB9
.balign 8
Lt_0187:	.quad	0x47EC363CBF21F28A
.balign 8
Lt_018A:	.quad	0xC3E0000000000000
.balign 8
Lt_018B:	.quad	0x43F0000000000000
.balign 4
Lt_01F3:	.ascii	" \"\0"
.balign 4
Lt_01F4:	.ascii	".cast()\"\0"

.section .ctors, "aw", @progbits
.int fb_ctor__astzmisc
