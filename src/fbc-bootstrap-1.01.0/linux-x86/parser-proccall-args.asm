	.intel_syntax noprefix

	#FreeBASIC-1.01.0-source/src/compiler/parser-proccall-args.bas' compilation started at 16:30:06 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl PARSERPROCCALLINIT
PARSERPROCCALLINIT:
.type PARSERPROCCALLINIT, @function
.Lt_005F:
push 6
push 12
push 128
lea eax, [PARSER+108]
push eax
call LISTINIT
add esp, 16
.Lt_0060:
ret
.size PARSERPROCCALLINIT, .-PARSERPROCCALLINIT
.balign 16

.globl PARSERPROCCALLEND
PARSERPROCCALLEND:
.type PARSERPROCCALLEND, @function
.Lt_0061:
lea eax, [PARSER+108]
push eax
call LISTEND
add esp, 4
.Lt_0062:
ret
.size PARSERPROCCALLEND, .-PARSERPROCCALLEND
.balign 16

.globl CPROCARGLIST
CPROCARGLIST:
.type CPROCARGLIST, @function
push ebp
mov ebp, esp
sub esp, 40
push ebx
mov dword ptr [ebp-4], 0
.Lt_00E0:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 1024
test ebx, ebx
jle .Lt_00E3
mov ebx, dword ptr [ebp+12]
cmp dword ptr [ebx+104], 0
je .Lt_00E5
push dword ptr [ebp+24]
push dword ptr [ebp+20]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HOVLPROCARGLIST
add esp, 16
mov dword ptr [ebp-4], eax
jmp .Lt_00E1
.Lt_00E5:
.Lt_00E4:
.Lt_00E3:
.Lt_00E2:
mov dword ptr [ebp-4], 0
mov dword ptr [ebp-20], 0
push dword ptr [ebp+12]
call SYMBCHECKACCESS
add esp, 4
test eax, eax
jne .Lt_00E7
push 0
push 1
push 0
push dword ptr [ebp+12]
call SYMBGETFULLPROCNAME
add esp, 4
push eax
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 4096
test ebx, ebx
je .Lt_00E8
mov dword ptr [ebp-40], 204
jmp .Lt_0119
.Lt_00E8:
mov dword ptr [ebp-40], 201
.Lt_0119:
push dword ptr [ebp-40]
call ERRREPORTEX
add esp, 20
mov ebx, dword ptr [ebp+12]
push dword ptr [ebx+28]
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+24]
and eax, 511
push eax
call ASTNEWCONSTZ
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_00E1
.Lt_00E7:
.Lt_00E6:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 2048
test ebx, ebx
je .Lt_00EB
mov ebx, dword ptr [ebp+24]
and ebx, 64
test ebx, ebx
jne .Lt_00ED
cmp dword ptr [ebp+8], 0
setne bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [PARSER+100]
mov ecx, dword ptr [eax+4]
and ecx, 2048
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
test ecx, ecx
sete cl
shr ecx, 1
sbb ecx, ecx
or ebx, ecx
je .Lt_00EF
push 0
push -1
push 213
call ERRREPORT
add esp, 12
mov ecx, dword ptr [ebp+12]
push dword ptr [ecx+28]
mov ecx, dword ptr [ebp+12]
mov ebx, dword ptr [ecx+24]
and ebx, 511
push ebx
call ASTNEWCONSTZ
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_00E1
.Lt_00EF:
.Lt_00EE:
push -1
push dword ptr [ebp+20]
lea eax, [PARSER+108]
push eax
call SYMBALLOCOVLCALLARG
add esp, 12
mov dword ptr [ebp-36], eax
push 0
push 0
push 0
mov eax, dword ptr [PARSER+100]
mov ebx, dword ptr [eax+72]
push dword ptr [ebx+56]
call ASTBUILDVARFIELD
add esp, 16
mov ebx, dword ptr [ebp-36]
mov dword ptr [ebx], eax
mov eax, dword ptr [ebp-36]
mov dword ptr [eax+4], -1
.Lt_00ED:
.Lt_00EC:
push dword ptr [ebp+24]
mov eax, dword ptr [ebp+20]
mov ebx, dword ptr [eax+4]
push dword ptr [ebx]
push dword ptr [ebp+12]
call HGETVTABLELOOKUPIFNEEDED
add esp, 12
mov dword ptr [ebp+16], eax
jmp .Lt_00EA
.Lt_00EB:
mov eax, dword ptr [ebp+24]
and eax, 64
test eax, eax
je .Lt_00F1
mov eax, dword ptr [ebp+20]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-36], ebx
mov ebx, dword ptr [ebp-36]
mov eax, dword ptr [ebp+20]
mov ecx, dword ptr [ebx+8]
mov dword ptr [eax+4], ecx
mov ecx, dword ptr [ebp-36]
push dword ptr [ecx]
call ASTDELTREE
add esp, 4
push dword ptr [ebp-36]
lea ecx, [PARSER+108]
push ecx
call LISTDELNODE
add esp, 8
.Lt_00F1:
.Lt_00F0:
.Lt_00EA:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-28], eax
mov eax, dword ptr [ebp+12]
movsx ecx, word ptr [eax+64]
mov dword ptr [ebp-12], ecx
mov ecx, dword ptr [ebp+12]
mov eax, dword ptr [ecx+72]
mov dword ptr [ebp-24], eax
mov eax, dword ptr [ebp+20]
mov ecx, dword ptr [eax+4]
mov dword ptr [ebp-36], ecx
.Lt_00F2:
cmp dword ptr [ebp-36], 0
je .Lt_00F3
mov ecx, dword ptr [ebp-36]
mov eax, dword ptr [ecx+8]
mov dword ptr [ebp-40], eax
mov eax, dword ptr [ebp-36]
push dword ptr [eax+4]
push -2147483648
mov eax, dword ptr [ebp-36]
push dword ptr [eax]
push dword ptr [ebp-28]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00F5
jmp .Lt_00E1
.Lt_00F5:
.Lt_00F4:
push dword ptr [ebp-36]
lea eax, [PARSER+108]
push eax
call LISTDELNODE
add esp, 8
mov eax, dword ptr [ebp-24]
mov ecx, dword ptr [eax+160]
mov dword ptr [ebp-24], ecx
mov ecx, dword ptr [ebp-40]
mov dword ptr [ebp-36], ecx
dec dword ptr [ebp-12]
jmp .Lt_00F2
.Lt_00F3:
mov dword ptr [ebp-8], 0
cmp dword ptr [ebp-12], 0
jne .Lt_00F7
mov ecx, dword ptr [ebp+24]
and ecx, 16
test ecx, ecx
jne .Lt_00F9
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
jne .Lt_00FB
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_00FD
push 0
push 0
push 7
call ERRREPORT
add esp, 12
push 0
push 0
push -1
push 41
call HSKIPUNTIL
add esp, 16
jmp .Lt_00FC
.Lt_00FD:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_00FC:
.Lt_00FB:
.Lt_00FA:
.Lt_00F9:
.Lt_00F8:
mov eax, dword ptr [ebp-28]
mov dword ptr [ebp-4], eax
jmp .Lt_00E1
.Lt_00F7:
.Lt_00F6:
mov eax, dword ptr [ebp+24]
and eax, 32
test eax, eax
jne .Lt_00FF
.Lt_0100:
mov eax, dword ptr [ebp-12]
cmp dword ptr [ebp-8], eax
jl .Lt_0104
mov eax, dword ptr [ebp-24]
cmp dword ptr [eax+52], 4
je .Lt_0106
push 0
push 0
push 1
call ERRREPORT
add esp, 12
mov eax, dword ptr [ebp+24]
and eax, 16
test eax, eax
je .Lt_0108
push 0
push 0
push 0
push 41
call HSKIPUNTIL
add esp, 16
jmp .Lt_0107
.Lt_0108:
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
.Lt_0107:
dec dword ptr [ebp-8]
jmp .Lt_0101
.Lt_0106:
.Lt_0105:
.Lt_0104:
.Lt_0103:
push dword ptr [ebp+24]
lea eax, [ebp-20]
push eax
lea eax, [ebp-16]
push eax
lea eax, [ebp-32]
push eax
push dword ptr [ebp-8]
push dword ptr [ebp-24]
push dword ptr [ebp+12]
call HPROCARG
add esp, 28
test eax, eax
jne .Lt_010A
jmp .Lt_0101
.Lt_010A:
.Lt_0109:
push dword ptr [ebp-16]
push -2147483648
push dword ptr [ebp-32]
push dword ptr [ebp-28]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_010C
mov eax, dword ptr [ebp+24]
and eax, 16
test eax, eax
je .Lt_010E
push 0
push 0
push 0
push 41
call HSKIPUNTIL
add esp, 16
jmp .Lt_010D
.Lt_010E:
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
.Lt_010D:
push dword ptr [ebp-28]
call ASTDELTREE
add esp, 4
mov eax, dword ptr [ebp+12]
push dword ptr [eax+28]
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax+24]
and ecx, 511
push ecx
call ASTNEWCONSTZ
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_00E1
.Lt_010C:
.Lt_010B:
inc dword ptr [ebp-8]
mov eax, dword ptr [ebp-12]
cmp dword ptr [ebp-8], eax
jge .Lt_0110
mov eax, dword ptr [ebp-24]
mov ecx, dword ptr [eax+160]
mov dword ptr [ebp-24], ecx
.Lt_0110:
.Lt_010F:
.Lt_0102:
push 44
call HMATCH
add esp, 4
test eax, eax
jne .Lt_0100
.Lt_0101:
.Lt_00FF:
.Lt_00FE:
push dword ptr [ebp+12]
push dword ptr [ebp-20]
push dword ptr [ebp-8]
call HMAYBEWARNABOUTEQOUTSIDEPARENS
add esp, 12
.Lt_0111:
mov eax, dword ptr [ebp-12]
cmp dword ptr [ebp-8], eax
jge .Lt_0112
mov eax, dword ptr [ebp-24]
cmp dword ptr [eax+52], 4
jne .Lt_0114
jmp .Lt_0112
.Lt_0114:
.Lt_0113:
mov eax, dword ptr [ebp-24]
mov ecx, dword ptr [eax+4]
and ecx, 2097152
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
test ecx, ecx
jne .Lt_0116
push 0
push 0
push 1
call ERRREPORT
add esp, 12
push dword ptr [ebp-28]
call ASTDELTREE
add esp, 4
mov ecx, dword ptr [ebp+12]
push dword ptr [ecx+28]
mov ecx, dword ptr [ebp+12]
mov eax, dword ptr [ecx+24]
and eax, 511
push eax
call ASTNEWCONSTZ
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_00E1
.Lt_0116:
.Lt_0115:
push -1
push -2147483648
push 0
push dword ptr [ebp-28]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_0118
jmp .Lt_00E1
.Lt_0118:
.Lt_0117:
inc dword ptr [ebp-8]
mov eax, dword ptr [ebp-24]
mov ecx, dword ptr [eax+160]
mov dword ptr [ebp-24], ecx
jmp .Lt_0111
.Lt_0112:
mov ecx, dword ptr [ebp-28]
mov dword ptr [ebp-4], ecx
.Lt_00E1:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CPROCARGLIST, .-CPROCARGLIST
.balign 16
fb_ctor__parserzproccallzargs:
.type fb_ctor__parserzproccallzargs, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__parserzproccallzargs, .-fb_ctor__parserzproccallzargs
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
HPROCARG:
.type HPROCARG, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
mov dword ptr [ebp-4], 0
.Lt_0063:
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+52]
mov dword ptr [ebp-8], ebx
mov ebx, dword ptr [ebp+24]
mov dword ptr [ebx], -1
mov ebx, dword ptr [ebp+20]
mov dword ptr [ebx], 0
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 319
jne .Lt_0066
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [ebp+24]
mov dword ptr [eax], 1
.Lt_0066:
.Lt_0065:
mov eax, dword ptr [PARSER+152]
mov dword ptr [ebp-16], eax
mov eax, dword ptr [PARSER+148]
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+28]
mov dword ptr [PARSER+152], ebx
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+24]
and eax, 511
mov dword ptr [PARSER+148], eax
mov dword ptr [PARSER+156], 0
call CEXPRESSION
mov ebx, dword ptr [ebp+20]
mov dword ptr [ebx], eax
mov eax, dword ptr [ebp+28]
mov ebx, dword ptr [PARSER+156]
or dword ptr [eax], ebx
jmp .Lt_0068
mov ebx, dword ptr [PARSER+144]
or ebx, 1
mov eax, ebx
mov dword ptr [PARSER+144], eax
jmp .Lt_0067
.Lt_0068:
mov eax, dword ptr [PARSER+144]
and eax, -2
mov ebx, eax
mov dword ptr [PARSER+144], ebx
.Lt_0067:
mov ebx, dword ptr [ebp+20]
cmp dword ptr [ebx], 0
jne .Lt_006A
mov ebx, dword ptr [ebp+32]
and ebx, 16
test ebx, ebx
je .Lt_006C
mov ebx, dword ptr [ebp+20]
mov dword ptr [ebx], 0
jmp .Lt_006B
.Lt_006C:
mov ebx, dword ptr [ebp+16]
test ebx, ebx
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+24]
mov ecx, dword ptr [eax]
cmp ecx, -1
sete cl
shr ecx, 1
sbb ecx, ecx
and ebx, ecx
je .Lt_006E
push 319
call HMATCH
add esp, 4
test eax, eax
je .Lt_0070
mov eax, dword ptr [ebp+24]
mov dword ptr [eax], 1
call CEXPRESSION
mov ecx, dword ptr [ebp+20]
mov dword ptr [ecx], eax
.Lt_0070:
.Lt_006F:
.Lt_006E:
.Lt_006D:
.Lt_006B:
.Lt_006A:
.Lt_0069:
mov eax, dword ptr [ebp-16]
mov dword ptr [PARSER+152], eax
mov eax, dword ptr [ebp-12]
mov dword ptr [PARSER+148], eax
mov eax, dword ptr [ebp+20]
cmp dword ptr [eax], 0
jne .Lt_0072
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax+4]
and ecx, 2097152
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
test ecx, ecx
jne .Lt_0074
cmp dword ptr [ebp-8], 4
jne .Lt_0076
jmp .Lt_0064
.Lt_0076:
.Lt_0075:
push 0
push 0
push 1
call ERRREPORT
add esp, 12
mov ecx, dword ptr [ebp+12]
push dword ptr [ecx+28]
mov ecx, dword ptr [ebp+12]
mov eax, dword ptr [ecx+24]
and eax, 511
push eax
call ASTNEWCONSTZ
add esp, 8
mov ecx, dword ptr [ebp+20]
mov dword ptr [ecx], eax
.Lt_0074:
.Lt_0073:
jmp .Lt_0071
.Lt_0072:
cmp dword ptr [ebp-8], 3
jne .Lt_0078
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
jne .Lt_007A
push 0
push 1
call LEXGETLOOKAHEAD
add esp, 8
cmp eax, 41
jne .Lt_007C
mov eax, dword ptr [ebp+24]
cmp dword ptr [eax], -1
je .Lt_007E
push 0
push 0
push 22
call ERRREPORT
add esp, 12
.Lt_007E:
.Lt_007D:
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [ebp+24]
mov dword ptr [eax], 3
.Lt_007C:
.Lt_007B:
.Lt_007A:
.Lt_0079:
.Lt_0078:
.Lt_0077:
.Lt_0071:
mov eax, dword ptr [ebp+24]
cmp dword ptr [eax], -1
je .Lt_0080
mov eax, dword ptr [ebp+24]
mov ecx, dword ptr [ebp-8]
cmp dword ptr [eax], ecx
je .Lt_0082
cmp dword ptr [ebp-8], 4
je .Lt_0084
mov ecx, dword ptr [ebp+24]
cmp dword ptr [ecx], 1
je .Lt_0086
mov ecx, dword ptr [ebp+24]
mov eax, dword ptr [ebp-8]
cmp dword ptr [ecx], eax
je .Lt_0088
push 0
push 0
push 22
call ERRREPORT
add esp, 12
mov eax, dword ptr [ebp+24]
mov ecx, dword ptr [ebp-8]
mov dword ptr [eax], ecx
.Lt_0088:
.Lt_0087:
.Lt_0086:
.Lt_0085:
.Lt_0084:
.Lt_0083:
.Lt_0082:
.Lt_0081:
.Lt_0080:
.Lt_007F:
mov dword ptr [ebp-4], -1
.Lt_0064:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HPROCARG, .-HPROCARG
.balign 16
HOVLPROCARG:
.type HOVLPROCARG, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_0089:
mov eax, dword ptr [ebp+12]
mov dword ptr [eax], 0
mov eax, dword ptr [ebp+12]
mov dword ptr [eax+4], -1
push 319
call HMATCH
add esp, 4
test eax, eax
je .Lt_008C
mov eax, dword ptr [ebp+12]
mov dword ptr [eax+4], 1
.Lt_008C:
.Lt_008B:
mov eax, dword ptr [PARSER+152]
mov dword ptr [ebp-4], eax
mov eax, dword ptr [PARSER+148]
mov dword ptr [ebp-8], eax
mov dword ptr [PARSER+152], 0
mov dword ptr [PARSER+148], -2147483648
mov dword ptr [PARSER+156], 0
call CEXPRESSION
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx], eax
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax], 0
jne .Lt_008E
mov eax, dword ptr [ebp+20]
and eax, 16
test eax, eax
je .Lt_0090
mov eax, dword ptr [ebp+12]
mov dword ptr [eax], 0
jmp .Lt_008F
.Lt_0090:
mov eax, dword ptr [ebp+8]
test eax, eax
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp+12]
mov ecx, dword ptr [ebx+4]
cmp ecx, -1
sete cl
shr ecx, 1
sbb ecx, ecx
and eax, ecx
je .Lt_0092
push 319
call HMATCH
add esp, 4
test eax, eax
je .Lt_0094
mov eax, dword ptr [ebp+12]
mov dword ptr [eax+4], 1
call CEXPRESSION
mov ecx, dword ptr [ebp+12]
mov dword ptr [ecx], eax
.Lt_0094:
.Lt_0093:
.Lt_0092:
.Lt_0091:
.Lt_008F:
.Lt_008E:
.Lt_008D:
mov eax, dword ptr [ebp-4]
mov dword ptr [PARSER+152], eax
mov eax, dword ptr [ebp-8]
mov dword ptr [PARSER+148], eax
mov eax, dword ptr [ebp+16]
mov ecx, dword ptr [PARSER+156]
or dword ptr [eax], ecx
mov ecx, dword ptr [ebp+12]
cmp dword ptr [ecx], 0
je .Lt_0096
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
jne .Lt_0098
push 0
push 1
call LEXGETLOOKAHEAD
add esp, 8
cmp eax, 41
jne .Lt_009A
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax+4], -1
je .Lt_009C
push 0
push 0
push 22
call ERRREPORT
add esp, 12
.Lt_009C:
.Lt_009B:
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [ebp+12]
mov dword ptr [eax+4], 3
.Lt_009A:
.Lt_0099:
.Lt_0098:
.Lt_0097:
.Lt_0096:
.Lt_0095:
.Lt_008A:
pop ebx
mov esp, ebp
pop ebp
ret
.size HOVLPROCARG, .-HOVLPROCARG
.balign 16
HMAYBEWARNABOUTEQOUTSIDEPARENS:
.type HMAYBEWARNABOUTEQOUTSIDEPARENS, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_009D:
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+4]
and ebx, 33554432
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-4], ebx
cmp dword ptr [ebp-4], 0
jne .Lt_00A0
mov ebx, dword ptr [ebp+16]
mov eax, dword ptr [ebx+4]
and eax, 1024
test eax, eax
jle .Lt_00A2
.Lt_00A3:
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+104]
mov dword ptr [ebp+16], ebx
cmp dword ptr [ebp+16], 0
jne .Lt_00A7
jmp .Lt_00A4
.Lt_00A7:
.Lt_00A6:
mov ebx, dword ptr [ebp+16]
mov eax, dword ptr [ebx+4]
and eax, 33554432
test eax, eax
setne al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-4], eax
.Lt_00A5:
cmp dword ptr [ebp-4], 0
je .Lt_00A3
.Lt_00A4:
.Lt_00A2:
.Lt_00A1:
.Lt_00A0:
.Lt_009F:
mov eax, dword ptr [ebp+8]
cmp eax, 1
sete al
shr eax, 1
sbb eax, eax
and dword ptr [ebp-4], eax
mov eax, dword ptr [ebp+12]
and dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
je .Lt_00A9
push 1
push 0
push 34
call ERRREPORTWARN
add esp, 12
.Lt_00A9:
.Lt_00A8:
.Lt_009E:
pop ebx
mov esp, ebp
pop ebp
ret
.size HMAYBEWARNABOUTEQOUTSIDEPARENS, .-HMAYBEWARNABOUTEQOUTSIDEPARENS
.balign 16
HGETVTABLELOOKUPIFNEEDED:
.type HGETVTABLELOOKUPIFNEEDED, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_00AA:
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+16]
and eax, 2048
je .Lt_00AD
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 1073741824
test ebx, ebx
je .Lt_00AF
push 0
push 0
push 306
call ERRREPORT
add esp, 12
.Lt_00AF:
.Lt_00AE:
jmp .Lt_00AC
.Lt_00AD:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call ASTBUILDVTABLELOOKUP
add esp, 8
mov dword ptr [ebp-4], eax
.Lt_00AC:
.Lt_00AB:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HGETVTABLELOOKUPIFNEEDED, .-HGETVTABLELOOKUPIFNEEDED
.balign 16
HOVLPROCARGLIST:
.type HOVLPROCARGLIST, @function
push ebp
mov ebp, esp
sub esp, 56
push ebx
mov dword ptr [ebp-4], 0
.Lt_00B0:
mov dword ptr [ebp-4], 0
mov dword ptr [ebp-20], 0
mov eax, dword ptr [ebp+12]
movsx ebx, word ptr [eax+102]
mov dword ptr [ebp-12], ebx
mov ebx, dword ptr [ebp+16]
mov eax, dword ptr [ebx]
mov dword ptr [ebp-16], eax
mov eax, dword ptr [ebp+20]
and eax, 64
test eax, eax
je .Lt_00B3
dec dword ptr [ebp-16]
.Lt_00B3:
.Lt_00B2:
mov eax, dword ptr [ebp+20]
and eax, 32
test eax, eax
jne .Lt_00B5
mov eax, dword ptr [ebp-16]
mov dword ptr [ebp-56], eax
.Lt_00B6:
mov eax, dword ptr [ebp-12]
cmp dword ptr [ebp-16], eax
jle .Lt_00BA
push 0
push 0
push 1
call ERRREPORT
add esp, 12
mov eax, dword ptr [ebp+20]
and eax, 16
test eax, eax
je .Lt_00BC
push 0
push 0
push 0
push 41
call HSKIPUNTIL
add esp, 16
jmp .Lt_00BB
.Lt_00BC:
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
.Lt_00BB:
dec dword ptr [ebp-16]
jmp .Lt_00B7
.Lt_00BA:
.Lt_00B9:
push 0
push dword ptr [ebp+16]
lea eax, [PARSER+108]
push eax
call SYMBALLOCOVLCALLARG
add esp, 12
mov dword ptr [ebp-36], eax
push dword ptr [ebp+20]
lea eax, [ebp-20]
push eax
push dword ptr [ebp-36]
mov eax, dword ptr [ebp-16]
sub eax, dword ptr [ebp-56]
push eax
call HOVLPROCARG
add esp, 16
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
je .Lt_00BE
mov eax, dword ptr [ebp-36]
cmp dword ptr [eax], 0
je .Lt_00C0
inc dword ptr [ebp-16]
.Lt_00C0:
.Lt_00BF:
jmp .Lt_00B7
.Lt_00BE:
.Lt_00BD:
push 0
call LEXSKIPTOKEN
add esp, 4
inc dword ptr [ebp-16]
.Lt_00B8:
jmp .Lt_00B6
.Lt_00B7:
.Lt_00B5:
.Lt_00B4:
push dword ptr [ebp+12]
push dword ptr [ebp-20]
push dword ptr [ebp-16]
call HMAYBEWARNABOUTEQOUTSIDEPARENS
add esp, 12
mov dword ptr [ebp-48], 0
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 32768
test ebx, ebx
je .Lt_00C2
mov ebx, dword ptr [ebp+20]
and ebx, 128
test ebx, ebx
je .Lt_00C4
mov dword ptr [ebp-48], 1
.Lt_00C4:
.Lt_00C3:
.Lt_00C2:
.Lt_00C1:
push dword ptr [ebp-48]
lea ebx, [ebp-44]
push ebx
mov ebx, dword ptr [ebp+20]
and ebx, 64
test ebx, ebx
je .Lt_00C5
mov ebx, dword ptr [ebp+16]
mov eax, dword ptr [ebx+4]
mov ebx, dword ptr [eax+8]
mov dword ptr [ebp-52], ebx
jmp .Lt_0126
.Lt_00C5:
mov ebx, dword ptr [ebp+16]
mov eax, dword ptr [ebx+4]
mov dword ptr [ebp-52], eax
.Lt_0126:
push dword ptr [ebp-52]
push dword ptr [ebp-16]
push dword ptr [ebp+12]
call SYMBFINDCLOSESTOVLPROC
add esp, 20
mov dword ptr [ebp-32], eax
cmp dword ptr [ebp-32], 0
jne .Lt_00C8
push dword ptr [ebp+16]
lea eax, [PARSER+108]
push eax
call SYMBFREEOVLCALLARGS
add esp, 8
cmp dword ptr [ebp-44], 0
jne .Lt_00CA
mov dword ptr [ebp-44], 98
.Lt_00CA:
.Lt_00C9:
push dword ptr [ebp-44]
push 0
push 0
push dword ptr [ebp+12]
call ERRREPORTPARAM
add esp, 16
mov eax, dword ptr [ebp+12]
push dword ptr [eax+28]
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+24]
and ebx, 511
push ebx
call ASTNEWCONSTZ
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_00B1
.Lt_00C8:
.Lt_00C7:
mov eax, dword ptr [ebp-32]
mov dword ptr [ebp+12], eax
push dword ptr [ebp+12]
call SYMBCHECKACCESS
add esp, 4
test eax, eax
jne .Lt_00CC
push 0
push 1
push 0
push dword ptr [ebp+12]
call SYMBGETFULLPROCNAME
add esp, 4
push eax
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 4096
test ebx, ebx
je .Lt_00CD
mov dword ptr [ebp-56], 204
jmp .Lt_0127
.Lt_00CD:
mov dword ptr [ebp-56], 201
.Lt_0127:
push dword ptr [ebp-56]
call ERRREPORTEX
add esp, 20
mov ebx, dword ptr [ebp+12]
push dword ptr [ebx+28]
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+24]
and eax, 511
push eax
call ASTNEWCONSTZ
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_00B1
.Lt_00CC:
.Lt_00CB:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 2048
test ebx, ebx
je .Lt_00D0
mov ebx, dword ptr [ebp+20]
and ebx, 64
test ebx, ebx
jne .Lt_00D2
cmp dword ptr [ebp+8], 0
setne bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [PARSER+100]
mov ecx, dword ptr [eax+4]
and ecx, 2048
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
test ecx, ecx
sete cl
shr ecx, 1
sbb ecx, ecx
or ebx, ecx
je .Lt_00D4
push 0
push -1
push 213
call ERRREPORT
add esp, 12
mov ecx, dword ptr [ebp+12]
push dword ptr [ecx+28]
mov ecx, dword ptr [ebp+12]
mov ebx, dword ptr [ecx+24]
and ebx, 511
push ebx
call ASTNEWCONSTZ
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_00B1
.Lt_00D4:
.Lt_00D3:
push -1
push dword ptr [ebp+16]
lea eax, [PARSER+108]
push eax
call SYMBALLOCOVLCALLARG
add esp, 12
mov dword ptr [ebp-36], eax
push 0
push 0
push 0
mov eax, dword ptr [PARSER+100]
mov ebx, dword ptr [eax+72]
push dword ptr [ebx+56]
call ASTBUILDVARFIELD
add esp, 16
mov ebx, dword ptr [ebp-36]
mov dword ptr [ebx], eax
mov eax, dword ptr [ebp-36]
mov dword ptr [eax+4], -1
.Lt_00D2:
.Lt_00D1:
inc dword ptr [ebp-16]
push dword ptr [ebp+20]
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+4]
push dword ptr [ebx]
push dword ptr [ebp+12]
call HGETVTABLELOOKUPIFNEEDED
add esp, 12
mov dword ptr [ebp-24], eax
jmp .Lt_00CF
.Lt_00D0:
mov eax, dword ptr [ebp+20]
and eax, 64
test eax, eax
je .Lt_00D6
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-36], ebx
mov ebx, dword ptr [ebp-36]
mov eax, dword ptr [ebp+16]
mov ecx, dword ptr [ebx+8]
mov dword ptr [eax+4], ecx
mov ecx, dword ptr [ebp-36]
push dword ptr [ecx]
call ASTDELTREE
add esp, 4
push dword ptr [ebp-36]
lea ecx, [PARSER+108]
push ecx
call LISTDELNODE
add esp, 8
.Lt_00D6:
.Lt_00D5:
mov dword ptr [ebp-24], 0
.Lt_00CF:
push dword ptr [ebp-24]
push dword ptr [ebp+12]
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-24], eax
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax+72]
mov dword ptr [ebp-28], ecx
mov ecx, dword ptr [ebp+16]
mov eax, dword ptr [ecx+4]
mov dword ptr [ebp-36], eax
mov dword ptr [ebp-8], 0
mov eax, dword ptr [ebp-16]
dec eax
mov dword ptr [ebp-56], eax
jmp .Lt_00D8
.Lt_00DB:
mov eax, dword ptr [ebp-36]
mov ecx, dword ptr [eax+8]
mov dword ptr [ebp-40], ecx
mov ecx, dword ptr [ebp-36]
push dword ptr [ecx+4]
push -2147483648
mov ecx, dword ptr [ebp-36]
push dword ptr [ecx]
push dword ptr [ebp-24]
call ASTNEWARG
add esp, 16
test eax, eax
jne .Lt_00DD
push 0
push 0
push 22
call ERRREPORT
add esp, 12
mov eax, dword ptr [ebp+12]
push dword ptr [eax+28]
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax+24]
and ecx, 511
push ecx
call ASTNEWCONSTZ
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_00B1
.Lt_00DD:
.Lt_00DC:
push dword ptr [ebp-36]
lea eax, [PARSER+108]
push eax
call LISTDELNODE
add esp, 8
mov eax, dword ptr [ebp-28]
mov ecx, dword ptr [eax+160]
mov dword ptr [ebp-28], ecx
mov ecx, dword ptr [ebp-40]
mov dword ptr [ebp-36], ecx
.Lt_00D9:
inc dword ptr [ebp-8]
.Lt_00D8:
mov ecx, dword ptr [ebp-56]
cmp dword ptr [ebp-8], ecx
jle .Lt_00DB
.Lt_00DA:
mov ecx, dword ptr [ebp+12]
movsx eax, word ptr [ecx+64]
mov dword ptr [ebp-12], eax
.Lt_00DE:
mov eax, dword ptr [ebp-12]
cmp dword ptr [ebp-16], eax
jge .Lt_00DF
push -1
push -2147483648
push 0
push dword ptr [ebp-24]
call ASTNEWARG
add esp, 16
inc dword ptr [ebp-16]
mov eax, dword ptr [ebp-28]
mov ecx, dword ptr [eax+160]
mov dword ptr [ebp-28], ecx
jmp .Lt_00DE
.Lt_00DF:
mov ecx, dword ptr [ebp-24]
mov dword ptr [ebp-4], ecx
.Lt_00B1:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HOVLPROCARGLIST, .-HOVLPROCARGLIST
	#FreeBASIC-1.01.0-source/src/compiler/parser-proccall-args.bas' compilation took 0.03385608503594995 secs

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
.int fb_ctor__parserzproccallzargs
