	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/parser-proccall.bas' compilation started at 15:27:36 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl CBYDESCARRAYARGPARENS
CBYDESCARRAYARGPARENS:
.type CBYDESCARRAYARGPARENS, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_0060:
mov dword ptr [ebp-4], -1
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
jne .Lt_0063
push 0
push 1
call LEXGETLOOKAHEAD
add esp, 8
cmp eax, 41
jne .Lt_0065
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+12], 0
je .Lt_0067
mov eax, dword ptr [ebp+8]
push dword ptr [eax+12]
call SYMBISARRAY
add esp, 4
test eax, eax
je .Lt_0069
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXSKIPTOKEN
add esp, 4
mov dword ptr [ebp-4], 3
.Lt_0069:
.Lt_0068:
.Lt_0067:
.Lt_0066:
.Lt_0065:
.Lt_0064:
.Lt_0063:
.Lt_0062:
.Lt_0061:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size CBYDESCARRAYARGPARENS, .-CBYDESCARRAYARGPARENS
.balign 16

.globl CASSIGNFUNCTRESULT
CASSIGNFUNCTRESULT:
.type CASSIGNFUNCTRESULT, @function
push ebp
mov ebp, esp
sub esp, 40
push ebx
mov dword ptr [ebp-4], 0
.Lt_006A:
mov dword ptr [ebp-4], 0
push dword ptr [PARSER+100]
call SYMBGETPROCRESULT
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_006D
push 0
push 0
push 17
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
mov dword ptr [ebp-4], -1
jmp .Lt_006B
.Lt_006D:
.Lt_006C:
push dword ptr [PARSER+100]
call SYMBHASCTOR
add esp, 4
mov dword ptr [ebp-24], eax
push dword ptr [PARSER+100]
call SYMBHASDEFCTOR
add esp, 4
mov dword ptr [ebp-28], eax
mov eax, dword ptr [PARSER+100]
mov ebx, dword ptr [eax+4]
and ebx, 33554432
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-36], ebx
cmp dword ptr [ebp+8], 0
je .Lt_006F
mov ebx, dword ptr [PARSER+100]
mov eax, dword ptr [ebx+108]
mov ebx, dword ptr [eax+48]
and ebx, 2
test ebx, ebx
je .Lt_0071
mov ebx, dword ptr [ebp-36]
not ebx
and ebx, dword ptr [ebp-28]
je .Lt_0073
push 0
push 0
push 177
call ERRREPORT
add esp, 12
.Lt_0073:
.Lt_0072:
.Lt_0071:
.Lt_0070:
mov ebx, dword ptr [PARSER+100]
mov eax, dword ptr [ebx+108]
mov ebx, dword ptr [eax+48]
or ebx, 1
mov eax, ebx
mov ebx, dword ptr [PARSER+100]
mov ecx, dword ptr [ebx+108]
mov dword ptr [ecx+48], eax
jmp .Lt_006E
.Lt_006F:
mov eax, dword ptr [PARSER+100]
mov ecx, dword ptr [eax+108]
mov eax, dword ptr [ecx+48]
and eax, 1
test eax, eax
je .Lt_0075
mov eax, dword ptr [ebp-36]
not eax
and eax, dword ptr [ebp-28]
je .Lt_0077
push 0
push 0
push 178
call ERRREPORT
add esp, 12
.Lt_0077:
.Lt_0076:
.Lt_0075:
.Lt_0074:
mov eax, dword ptr [PARSER+100]
mov ecx, dword ptr [eax+108]
mov eax, dword ptr [ecx+48]
or eax, 2
mov ecx, eax
mov eax, dword ptr [PARSER+100]
mov ebx, dword ptr [eax+108]
mov dword ptr [ebx+48], ecx
.Lt_006E:
mov ecx, dword ptr [PARSER+100]
mov ebx, dword ptr [ecx+28]
mov dword ptr [PARSER+152], ebx
mov ebx, dword ptr [PARSER+100]
mov ecx, dword ptr [ebx+24]
and ecx, 511
mov dword ptr [PARSER+148], ecx
push 319
call HMATCH
add esp, 4
not eax
and eax, dword ptr [ebp-36]
je .Lt_0079
push 4
call CVARORDEREF
add esp, 4
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 0
je .Lt_007B
push dword ptr [ebp-16]
call ASTISACCESSTOLOCAL
add esp, 4
test eax, eax
je .Lt_007D
push 0
push 0
push 271
call ERRREPORT
add esp, 12
.Lt_007D:
.Lt_007C:
mov eax, dword ptr [PARSER+100]
mov ecx, dword ptr [eax+24]
and ecx, 511
cmp ecx, 16
sete cl
shr ecx, 1
sbb ecx, ecx
push dword ptr [ebp-16]
mov ebx, ecx
call ASTGETSTRLITSYMBOL
add esp, 4
test eax, eax
setne cl
shr ecx, 1
sbb ecx, ecx
and ebx, ecx
je .Lt_007F
push 0
push 0
push 24
call ERRREPORT
add esp, 12
push dword ptr [ebp-16]
call ASTDELTREE
add esp, 4
mov dword ptr [ebp-16], 0
jmp .Lt_007E
.Lt_007F:
push dword ptr [ebp-16]
call ASTNEWADDROF
add esp, 4
mov dword ptr [ebp-16], eax
.Lt_007E:
.Lt_007B:
.Lt_007A:
jmp .Lt_0078
.Lt_0079:
call CEXPRESSION
mov dword ptr [ebp-16], eax
.Lt_0078:
mov dword ptr [PARSER+152], 0
mov dword ptr [PARSER+148], -2147483648
cmp dword ptr [ebp-16], 0
jne .Lt_0081
push 0
push 0
push 9
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
mov dword ptr [ebp-4], -1
jmp .Lt_006B
.Lt_0081:
.Lt_0080:
mov eax, dword ptr [ebp-8]
mov ecx, dword ptr [eax+8]
or ecx, 2
mov eax, ecx
mov ecx, dword ptr [ebp-8]
mov dword ptr [ecx+8], eax
mov dword ptr [ebp-32], 0
cmp dword ptr [ebp+8], 0
je .Lt_0083
cmp dword ptr [ebp-24], 0
je .Lt_0085
lea eax, [ebp-40]
push eax
push dword ptr [ebp-16]
call CBYDESCARRAYARGPARENS
add esp, 4
push eax
push dword ptr [ebp-16]
push dword ptr [ebp-8]
call ASTBUILDIMPLICITCTORCALLEX
add esp, 16
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 0
jne .Lt_0087
jmp .Lt_006B
.Lt_0087:
.Lt_0086:
cmp dword ptr [ebp-40], 0
je .Lt_0089
push dword ptr [ebp-8]
push dword ptr [PARSER+100]
call ASTBUILDPROCRESULTVAR
add esp, 8
push eax
push dword ptr [ebp-16]
call ASTPATCHCTORCALL
add esp, 8
push eax
call ASTADD
add esp, 4
mov dword ptr [ebp-4], -1
jmp .Lt_006B
.Lt_0089:
.Lt_0088:
.Lt_0085:
.Lt_0084:
mov dword ptr [ebp-32], 64
.Lt_0083:
.Lt_0082:
push dword ptr [ebp-32]
push dword ptr [ebp-16]
push dword ptr [ebp-8]
push dword ptr [PARSER+100]
call ASTBUILDPROCRESULTVAR
add esp, 8
push eax
call ASTNEWASSIGN
add esp, 12
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 0
jne .Lt_008B
push dword ptr [ebp-16]
call ASTDELTREE
add esp, 4
push 0
push 0
push 180
call ERRREPORT
add esp, 12
jmp .Lt_008A
.Lt_008B:
push dword ptr [ebp-20]
call ASTADD
add esp, 4
.Lt_008A:
mov dword ptr [ebp-4], -1
.Lt_006B:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CASSIGNFUNCTRESULT, .-CASSIGNFUNCTRESULT
.balign 16

.globl HMETHODCALLADDINSTPTROVLARG
HMETHODCALLADDINSTPTROVLARG:
.type HMETHODCALLADDINSTPTROVLARG, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
.Lt_008F:
cmp dword ptr [ebp+12], 0
jne .Lt_0092
jmp .Lt_0090
.Lt_0092:
.Lt_0091:
push 0
push dword ptr [ebp+16]
lea eax, [PARSER+108]
push eax
call SYMBALLOCOVLCALLARG
add esp, 12
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+148]
mov eax, dword ptr [ebx]
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [ebp-8]
cmp dword ptr [eax+8], ebx
je .Lt_0094
push 0
push 0
push dword ptr [ebp+12]
push dword ptr [ebp-8]
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx+24]
and eax, 511
push eax
call ASTNEWCONV
add esp, 20
mov dword ptr [ebp+12], eax
.Lt_0094:
.Lt_0093:
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [ebp+12]
mov dword ptr [eax], ebx
mov ebx, dword ptr [ebp+12]
cmp dword ptr [ebx], 16
jne .Lt_0095
mov dword ptr [ebp-12], 1
jmp .Lt_0097
.Lt_0095:
mov dword ptr [ebp-12], -1
.Lt_0097:
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebp-12]
mov dword ptr [ebx+4], eax
mov eax, dword ptr [ebp+20]
mov ebx, dword ptr [eax]
or ebx, 64
mov eax, ebx
mov ebx, dword ptr [ebp+20]
mov dword ptr [ebx], eax
.Lt_0090:
pop ebx
mov esp, ebp
pop ebp
ret
.size HMETHODCALLADDINSTPTROVLARG, .-HMETHODCALLADDINSTPTROVLARG
.balign 16

.globl CMAYBEIGNORECALLRESULT
CMAYBEIGNORECALLRESULT:
.type CMAYBEIGNORECALLRESULT, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_00A3:
push dword ptr [ebp+8]
call ASTSKIPNOCONVCAST
add esp, 4
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
cmp dword ptr [eax], 9
jne .Lt_00A6
push dword ptr [ebp+8]
call ASTREMOVENOCONVCAST
add esp, 4
push eax
call ASTIGNORECALLRESULT
add esp, 4
push eax
call ASTADD
add esp, 4
mov dword ptr [ebp-4], -1
jmp .Lt_00A5
.Lt_00A6:
push dword ptr [ebp-8]
call ASTISBYREFRESULTDEREF
add esp, 4
mov ebx, eax
call HLOOKSLIKEENDOFSTATEMENT
and ebx, eax
je .Lt_00A7
push dword ptr [ebp+8]
call ASTREMOVENOCONVCAST
add esp, 4
push eax
call ASTREMOVEBYREFRESULTDEREF
add esp, 4
push eax
call ASTIGNORECALLRESULT
add esp, 4
push eax
call ASTADD
add esp, 4
mov dword ptr [ebp-4], -1
jmp .Lt_00A5
.Lt_00A7:
mov dword ptr [ebp-4], 0
.Lt_00A5:
.Lt_00A4:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CMAYBEIGNORECALLRESULT, .-CMAYBEIGNORECALLRESULT
.balign 16

.globl CPROCCALL
CPROCCALL:
.type CPROCCALL, @function
push ebp
mov ebp, esp
sub esp, 36
push ebx
mov dword ptr [ebp-4], 0
.Lt_00A8:
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-24], 0
lea eax, [ebp-24]
add eax, 4
mov dword ptr [eax], 0
lea eax, [ebp-24]
add eax, 8
mov dword ptr [eax], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp+28]
push eax
lea eax, [ebp-24]
push eax
push dword ptr [ebp+20]
push dword ptr [ebp+12]
call HMETHODCALLADDINSTPTROVLARG
add esp, 16
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 32768
test ebx, ebx
je .Lt_00AB
mov dword ptr [ebp-28], 0
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
jne .Lt_00AD
mov dword ptr [ebp-28], -1
push 0
call LEXSKIPTOKEN
add esp, 4
call CEXPRESSION
mov dword ptr [ebp-32], eax
cmp dword ptr [ebp-32], 0
jne .Lt_00AF
push 0
push 0
push 9
call ERRREPORT
add esp, 12
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-32], eax
.Lt_00AF:
.Lt_00AE:
push 0
lea eax, [ebp-24]
push eax
lea eax, [PARSER+108]
push eax
call SYMBALLOCOVLCALLARG
add esp, 12
mov dword ptr [ebp-36], eax
mov eax, dword ptr [ebp-36]
mov ebx, dword ptr [ebp-32]
mov dword ptr [eax], ebx
mov ebx, dword ptr [ebp-36]
mov dword ptr [ebx+4], -1
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_00B1
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
jmp .Lt_00B0
.Lt_00B1:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_00B0:
.Lt_00AD:
.Lt_00AC:
push 0
call LEXGETTOKEN
add esp, 4
push eax
call HISASSIGNTOKEN
add esp, 4
test eax, eax
je .Lt_00B3
cmp dword ptr [ebp-28], 0
je .Lt_00B5
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+148]
mov eax, dword ptr [ebx]
movsx ebx, word ptr [eax+112]
and ebx, 1024
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_00B7
push 0
push -1
push 196
call ERRREPORT
add esp, 12
jmp .Lt_00A9
.Lt_00B7:
.Lt_00B6:
jmp .Lt_00B4
.Lt_00B5:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+148]
mov ebx, dword ptr [eax]
movsx eax, word ptr [ebx+112]
and eax, 256
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_00B9
push 0
push 0
push 194
call ERRREPORT
add esp, 12
jmp .Lt_00A9
.Lt_00B9:
.Lt_00B8:
.Lt_00B4:
push 0
call LEXSKIPTOKEN
add esp, 4
mov dword ptr [ebp-8], -1
jmp .Lt_00B2
.Lt_00B3:
mov eax, dword ptr [ebp+28]
or eax, 128
mov ebx, eax
mov dword ptr [ebp+28], ebx
cmp dword ptr [ebp-28], 0
je .Lt_00BB
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+148]
mov ebx, dword ptr [eax]
movsx eax, word ptr [ebx+112]
and eax, 512
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_00BD
push 0
push -1
push 195
call ERRREPORT
add esp, 12
jmp .Lt_00A9
.Lt_00BD:
.Lt_00BC:
jmp .Lt_00BA
.Lt_00BB:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+148]
mov eax, dword ptr [ebx]
movsx ebx, word ptr [eax+112]
and ebx, 128
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_00BF
push 0
push 0
push 193
call ERRREPORT
add esp, 12
jmp .Lt_00A9
.Lt_00BF:
.Lt_00BE:
.Lt_00BA:
.Lt_00B2:
mov dword ptr [ebp+24], 0
jmp .Lt_00AA
.Lt_00AB:
cmp dword ptr [ebp+24], -1
jne .Lt_00C1
mov ebx, dword ptr [ebp+12]
movsx eax, word ptr [ebx+64]
test eax, eax
jne .Lt_00C3
mov dword ptr [ebp+24], 0
.Lt_00C3:
.Lt_00C2:
jmp .Lt_00C0
.Lt_00C1:
cmp dword ptr [ebp+16], 0
je .Lt_00C4
mov dword ptr [ebp+24], -1
.Lt_00C4:
.Lt_00C0:
.Lt_00AA:
cmp dword ptr [ebp+24], 0
je .Lt_00C6
push 40
call HMATCH
add esp, 4
test eax, eax
jne .Lt_00C8
push 0
push 0
push 6
call ERRREPORT
add esp, 12
.Lt_00C8:
.Lt_00C7:
.Lt_00C6:
.Lt_00C5:
mov dword ptr [PARSER+140], 0
mov eax, dword ptr [ebp+24]
not eax
test eax, eax
je .Lt_00CA
mov eax, dword ptr [PARSER+144]
or eax, 1
mov ebx, eax
mov dword ptr [PARSER+144], ebx
jmp .Lt_00C9
.Lt_00CA:
mov ebx, dword ptr [PARSER+144]
and ebx, -2
mov eax, ebx
mov dword ptr [PARSER+144], eax
.Lt_00C9:
push dword ptr [ebp+28]
lea eax, [ebp-24]
push eax
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call CPROCARGLIST
add esp, 20
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_00CC
push 0
push 0
push 0
push 41
call HSKIPUNTIL
add esp, 16
jmp .Lt_00A9
.Lt_00CC:
.Lt_00CB:
mov eax, dword ptr [PARSER+140]
test eax, eax
setg al
shr eax, 1
sbb eax, eax
or eax, dword ptr [ebp+24]
je .Lt_00CE
dec dword ptr [PARSER+140]
push 41
call HMATCH
add esp, 4
test eax, eax
jne .Lt_00D0
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
jmp .Lt_00CF
.Lt_00D0:
cmp dword ptr [PARSER+140], 0
jle .Lt_00D1
.Lt_00D2:
cmp dword ptr [PARSER+140], 0
jle .Lt_00D3
push 0
push 0
push -1
push 41
call HSKIPUNTIL
add esp, 16
dec dword ptr [PARSER+140]
jmp .Lt_00D2
.Lt_00D3:
.Lt_00D1:
.Lt_00CF:
.Lt_00CE:
.Lt_00CD:
jmp .Lt_00D5
mov eax, dword ptr [PARSER+144]
or eax, 1
mov ebx, eax
mov dword ptr [PARSER+144], ebx
jmp .Lt_00D4
.Lt_00D5:
mov ebx, dword ptr [PARSER+144]
and ebx, -2
mov eax, ebx
mov dword ptr [PARSER+144], eax
.Lt_00D4:
cmp dword ptr [ebp-8], 0
jne .Lt_00D7
push dword ptr [ebp-12]
call ASTBUILDBYREFRESULTDEREF
add esp, 4
mov dword ptr [ebp-12], eax
push dword ptr [ebp-12]
call CSTRIDXORMEMBERDEREF
add esp, 4
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_00D9
jmp .Lt_00A9
.Lt_00D9:
.Lt_00D8:
.Lt_00D7:
.Lt_00D6:
push dword ptr [ebp-12]
call CMAYBEIGNORECALLRESULT
add esp, 4
test eax, eax
je .Lt_00DB
mov dword ptr [ebp-4], 0
jmp .Lt_00DA
.Lt_00DB:
mov eax, dword ptr [ebp-12]
mov dword ptr [ebp-4], eax
.Lt_00DA:
.Lt_00A9:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CPROCCALL, .-CPROCCALL
.balign 16

.globl CPROCCALLORASSIGN
CPROCCALLORASSIGN:
.type CPROCCALLORASSIGN, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
mov dword ptr [ebp-4], 0
.Lt_0165:
mov dword ptr [ebp-4], 0
cmp dword ptr [ENV+136], 3
jne .Lt_0168
call HPROCCALLORASSIGN_QB
mov dword ptr [ebp-4], eax
jmp .Lt_0166
.Lt_0168:
.Lt_0167:
push 0
call LEXGETCLASS
add esp, 4
mov dword ptr [ebp-20], eax
jmp .Lt_016A
.Lt_016C:
push 50
lea eax, [ebp-12]
push eax
call CIDENTIFIER
add esp, 8
mov dword ptr [ebp-8], eax
push 0
push 0
push dword ptr [ebp-8]
push dword ptr [ebp-12]
call HASSIGNORCALL
add esp, 16
mov dword ptr [ebp-4], eax
jmp .Lt_0166
jmp .Lt_0169
.Lt_016D:
push 0
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-24], eax
jmp .Lt_016F
.Lt_0171:
mov eax, dword ptr [ENV+832]
cmp dword ptr [PARSER+100], eax
jne .Lt_0173
push 0
push 0
push 253
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
mov dword ptr [ebp-4], -1
jmp .Lt_0166
.Lt_0173:
.Lt_0172:
mov eax, dword ptr [PARSER+100]
mov ebx, dword ptr [eax+4]
and ebx, 16384
test ebx, ebx
je .Lt_0175
push 0
push 0
push 156
call ERRREPORT
add esp, 12
jmp .Lt_0174
.Lt_0175:
mov ebx, dword ptr [PARSER+100]
mov eax, dword ptr [ebx+4]
and eax, 32768
test eax, eax
je .Lt_0176
push 0
push 0
push 191
call ERRREPORT
add esp, 12
.Lt_0176:
.Lt_0174:
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call CASSIGNFUNCTRESULT
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_0166
jmp .Lt_016E
.Lt_0177:
mov eax, dword ptr [PARSER+100]
mov ebx, dword ptr [eax+4]
and ebx, 16384
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_0179
push 0
push 0
push 143
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
mov dword ptr [ebp-4], -1
jmp .Lt_0166
.Lt_0179:
.Lt_0178:
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call CASSIGNFUNCTRESULT
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_0166
jmp .Lt_016E
.Lt_017A:
mov eax, dword ptr [ENV+832]
cmp dword ptr [PARSER+100], eax
jne .Lt_017C
push 0
push 0
push 192
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
mov dword ptr [ebp-4], -1
jmp .Lt_0166
jmp .Lt_017B
.Lt_017C:
mov eax, dword ptr [PARSER+100]
mov ebx, dword ptr [eax+4]
and ebx, 32768
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_017E
push 0
push 0
push 192
call ERRREPORT
add esp, 12
.Lt_017E:
.Lt_017D:
.Lt_017B:
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call CASSIGNFUNCTRESULT
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_0166
jmp .Lt_016E
.Lt_017F:
call HCTORCHAIN
mov dword ptr [ebp-4], -1
jmp .Lt_0166
jmp .Lt_016E
.Lt_0180:
push 0
push 1
call LEXGETLOOKAHEAD
add esp, 8
cmp eax, 46
jne .Lt_0182
call HBASEMEMBERACCESS
mov dword ptr [ebp-4], eax
jmp .Lt_0166
jmp .Lt_0181
.Lt_0182:
call HBASEINIT
mov dword ptr [ebp-4], -1
jmp .Lt_0166
.Lt_0181:
jmp .Lt_016E
.Lt_0183:
mov eax, dword ptr [ENV+840]
and eax, 131072
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_0185
push 0
push 145
push 131072
call ERRREPORTNOTALLOWED
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
mov dword ptr [ebp-4], -1
jmp .Lt_0166
.Lt_0185:
.Lt_0184:
push 1
call CCOMPSTMTISALLOWED
add esp, 4
test eax, eax
jne .Lt_0187
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
mov dword ptr [ebp-4], -1
jmp .Lt_0166
.Lt_0187:
.Lt_0186:
push 0
call LEXSKIPTOKEN
add esp, 4
push 34
lea eax, [ebp-12]
push eax
call CIDENTIFIER
add esp, 8
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
je .Lt_0189
push 0
push -1
push dword ptr [ebp-8]
push dword ptr [ebp-12]
call HASSIGNORCALL
add esp, 16
mov dword ptr [ebp-4], eax
jmp .Lt_0166
.Lt_0189:
.Lt_0188:
push 0
push 0
push 14
call ERRREPORT
add esp, 12
mov dword ptr [ebp-4], -1
jmp .Lt_0166
jmp .Lt_016E
.Lt_016F:
mov eax, dword ptr [ebp-24]
add eax, 4294966950
cmp eax, 46
ja .Lt_016E
mov eax, dword ptr [ebp-24]
jmp dword ptr [.LT_018A+eax*4-1384]
.LT_018A:
.int .Lt_0171
.int .Lt_017F
.int .Lt_016E
.int .Lt_0177
.int .Lt_017A
.int .Lt_016E
.int .Lt_016E
.int .Lt_0180
.int .Lt_016E
.int .Lt_016E
.int .Lt_016E
.int .Lt_016E
.int .Lt_016E
.int .Lt_016E
.int .Lt_016E
.int .Lt_016E
.int .Lt_016E
.int .Lt_016E
.int .Lt_016E
.int .Lt_016E
.int .Lt_016E
.int .Lt_016E
.int .Lt_016E
.int .Lt_016E
.int .Lt_016E
.int .Lt_016E
.int .Lt_016E
.int .Lt_016E
.int .Lt_016E
.int .Lt_016E
.int .Lt_016E
.int .Lt_016E
.int .Lt_016E
.int .Lt_016E
.int .Lt_016E
.int .Lt_016E
.int .Lt_016E
.int .Lt_016E
.int .Lt_016E
.int .Lt_016E
.int .Lt_016E
.int .Lt_016E
.int .Lt_016E
.int .Lt_016E
.int .Lt_016E
.int .Lt_016E
.int .Lt_0183
.Lt_016E:
jmp .Lt_0169
.Lt_018B:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 387
jne .Lt_018D
call COPERATORDELETE
mov dword ptr [ebp-4], -1
jmp .Lt_0166
.Lt_018D:
.Lt_018C:
jmp .Lt_0169
.Lt_018E:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 46
jne .Lt_0190
cmp dword ptr [PARSER+52], 0
je .Lt_0192
push 64
push 1
call LEXGETLOOKAHEAD
add esp, 8
cmp eax, 46
je .Lt_0194
mov eax, dword ptr [PARSER+144]
and eax, 2
test eax, eax
setne al
shr eax, 1
sbb eax, eax
push eax
call CWITHVARIABLE
add esp, 4
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 0
jne .Lt_0196
jmp .Lt_0166
.Lt_0196:
.Lt_0195:
push dword ptr [ebp-16]
call CASSIGNMENTORPTRCALLEX
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_0166
.Lt_0194:
.Lt_0193:
.Lt_0192:
.Lt_0191:
push 50
lea eax, [ebp-12]
push eax
call CIDENTIFIER
add esp, 8
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
je .Lt_0198
push 0
push 0
push dword ptr [ebp-8]
push dword ptr [ebp-12]
call HASSIGNORCALL
add esp, 16
mov dword ptr [ebp-4], eax
jmp .Lt_0166
.Lt_0198:
.Lt_0197:
.Lt_0190:
.Lt_018F:
jmp .Lt_0169
.Lt_016A:
cmp dword ptr [ebp-20], 6
ja .Lt_0169
mov eax, dword ptr [ebp-20]
jmp dword ptr [.LT_0199+eax*4]
.LT_0199:
.int .Lt_016C
.int .Lt_016D
.int .Lt_016C
.int .Lt_0169
.int .Lt_0169
.int .Lt_018B
.int .Lt_018E
.Lt_0169:
.Lt_0166:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CPROCCALLORASSIGN, .-CPROCCALLORASSIGN
.balign 16

.globl HFORWARDCALL
HFORWARDCALL:
.type HFORWARDCALL, @function
push ebp
mov ebp, esp
sub esp, 64
push ebx
mov dword ptr [ebp-4], 0
.Lt_01BF:
mov dword ptr [ebp-4], 0
push 0
call LEXGETCLASS
add esp, 4
mov dword ptr [ebp-44], eax
cmp dword ptr [ebp-44], 0
jne .Lt_01C3
.Lt_01C4:
mov eax, dword ptr [ENV+840]
and eax, 524288
test eax, eax
je .Lt_01C6
lea eax, [SYMB+98352]
cmp dword ptr [SYMB+98516], eax
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_01C8
mov ebx, dword ptr [LEX+839664]
mov eax, dword ptr [ebx+16532]
cmp dword ptr [eax+4120], 0
jle .Lt_01CA
push 0
push 0
push 89
call ERRREPORT
add esp, 12
.Lt_01CA:
.Lt_01C9:
.Lt_01C8:
.Lt_01C7:
.Lt_01C6:
.Lt_01C5:
jmp .Lt_01C1
.Lt_01C3:
push 0
push 0
push 14
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push 40
call HSKIPUNTIL
add esp, 16
jmp .Lt_01C0
.Lt_01CB:
.Lt_01C1:
push 0
push 0
call LEXGETTEXT
push eax
push -1
lea eax, [ebp-16]
push eax
call fb_StrInit
add esp, 20
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [eax+16532]
cmp dword ptr [ebx+8], -2147483648
je .Lt_01CD
push 0
push 0
push 17
call ERRREPORT
add esp, 12
.Lt_01CD:
.Lt_01CC:
push 0
call LEXSKIPTOKEN
add esp, 4
push dword ptr [ebp-16]
call SYMBPREADDPROC
add esp, 4
mov dword ptr [ebp-20], eax
mov dword ptr [ebp-24], 0
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
jne .Lt_01CF
push 0
call LEXSKIPTOKEN
add esp, 4
mov dword ptr [ebp-24], -1
.Lt_01CF:
.Lt_01CE:
mov dword ptr [ebp-36], 0
lea eax, [ebp-36]
add eax, 4
mov dword ptr [eax], 0
lea eax, [ebp-36]
add eax, 8
mov dword ptr [eax], 0
.Lt_01D0:
call CEXPRESSION
mov dword ptr [ebp-44], eax
cmp dword ptr [ebp-44], 0
jne .Lt_01D4
jmp .Lt_01D1
.Lt_01D4:
.Lt_01D3:
mov dword ptr [ebp-48], 2
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
jne .Lt_01D6
push 0
push 1
call LEXGETLOOKAHEAD
add esp, 8
cmp eax, 41
jne .Lt_01D8
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXSKIPTOKEN
add esp, 4
mov dword ptr [ebp-48], 3
.Lt_01D8:
.Lt_01D7:
.Lt_01D6:
.Lt_01D5:
mov dword ptr [ebp-52], 0
mov eax, dword ptr [ebp-44]
mov ebx, dword ptr [eax+4]
and ebx, 511
mov dword ptr [ebp-64], ebx
cmp dword ptr [ebp-64], 16
je .Lt_01DC
.Lt_01DD:
cmp dword ptr [ebp-64], 17
je .Lt_01DC
.Lt_01DE:
cmp dword ptr [ebp-64], 3
je .Lt_01DC
.Lt_01DF:
cmp dword ptr [ebp-64], 6
jne .Lt_01DB
.Lt_01DC:
mov dword ptr [ebp-52], 16
.Lt_01DB:
.Lt_01D9:
push 0
push dword ptr [ebp-48]
cmp dword ptr [ebp-48], 3
jne .Lt_01E0
mov dword ptr [ebp-56], -1
jmp .Lt_01EE
.Lt_01E0:
mov dword ptr [ebp-56], 0
.Lt_01EE:
push dword ptr [ebp-56]
push 0
push dword ptr [ebp-52]
push 0
push dword ptr [ebp-20]
call SYMBADDPROCPARAM
add esp, 28
test eax, eax
jne .Lt_01E3
jmp .Lt_01D1
.Lt_01E3:
.Lt_01E2:
push 0
lea eax, [ebp-36]
push eax
lea eax, [PARSER+108]
push eax
call SYMBALLOCOVLCALLARG
add esp, 12
mov dword ptr [ebp-60], eax
mov eax, dword ptr [ebp-60]
mov ebx, dword ptr [ebp-44]
mov dword ptr [eax], ebx
mov ebx, dword ptr [ebp-60]
mov dword ptr [ebx+4], -1
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
je .Lt_01E5
jmp .Lt_01D1
.Lt_01E5:
.Lt_01E4:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_01D2:
jmp .Lt_01D0
.Lt_01D1:
cmp dword ptr [ebp-24], 0
je .Lt_01E7
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_01E9
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
jmp .Lt_01E8
.Lt_01E9:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_01E8:
.Lt_01E7:
.Lt_01E6:
push 0
push dword ptr [ENV+216]
push 0
push 0
push 0
push 0
push dword ptr [ebp-16]
push dword ptr [ebp-20]
call SYMBADDPROC
add esp, 32
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 0
jne .Lt_01EB
push 0
push -1
push 4
call ERRREPORT
add esp, 12
lea eax, [ebp-16]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_01C0
.Lt_01EB:
.Lt_01EA:
push 32
lea eax, [ebp-36]
push eax
push 0
push dword ptr [ebp-20]
push 0
call CPROCARGLIST
add esp, 20
mov dword ptr [ebp-40], eax
cmp dword ptr [ebp-40], 0
je .Lt_01ED
push dword ptr [ebp-40]
call ASTADD
add esp, 4
.Lt_01ED:
.Lt_01EC:
mov dword ptr [ebp-4], -1
lea eax, [ebp-16]
push eax
call fb_StrDelete
add esp, 4
.Lt_01C0:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HFORWARDCALL, .-HFORWARDCALL
.balign 16
fb_ctor__parserzproccall:
.type fb_ctor__parserzproccall, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__parserzproccall, .-fb_ctor__parserzproccall
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
HLOOKSLIKEENDOFSTATEMENT:
.type HLOOKSLIKEENDOFSTATEMENT, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_0098:
push 0
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 258
je .Lt_009D
.Lt_009E:
cmp dword ptr [ebp-8], 257
je .Lt_009D
.Lt_009F:
cmp dword ptr [ebp-8], 256
je .Lt_009D
.Lt_00A0:
cmp dword ptr [ebp-8], 259
je .Lt_009D
.Lt_00A1:
cmp dword ptr [ebp-8], 260
jne .Lt_009C
.Lt_009D:
mov dword ptr [ebp-4], -1
jmp .Lt_009A
.Lt_009C:
mov dword ptr [ebp-4], 0
.Lt_00A2:
.Lt_009A:
.Lt_0099:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size HLOOKSLIKEENDOFSTATEMENT, .-HLOOKSLIKEENDOFSTATEMENT
.balign 16
HPROCSYMBOL:
.type HPROCSYMBOL, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_00E1:
mov dword ptr [ebp-4], 0
push 1
call CCOMPSTMTISALLOWED
add esp, 4
test eax, eax
jne .Lt_00E4
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
mov dword ptr [ebp-4], -1
jmp .Lt_00E2
.Lt_00E4:
.Lt_00E3:
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXGETTOKEN
add esp, 4
push eax
call HISASSIGNTOKEN
add esp, 4
not eax
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_00E6
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 32768
test ebx, ebx
je .Lt_00E8
mov dword ptr [ebp-8], -1
mov ebx, dword ptr [PARSER+100]
mov eax, dword ptr [ebx+4]
and eax, 32768
test eax, eax
je .Lt_00EA
mov eax, dword ptr [PARSER+100]
movsx ebx, word ptr [eax+64]
cmp ebx, 1
jne .Lt_00EC
push dword ptr [ebp+12]
push dword ptr [PARSER+100]
call SYMBISPROCOVERLOADOF
add esp, 8
test eax, eax
je .Lt_00EE
mov dword ptr [ebp-8], 0
.Lt_00EE:
.Lt_00ED:
.Lt_00EC:
.Lt_00EB:
.Lt_00EA:
.Lt_00E9:
.Lt_00E8:
.Lt_00E7:
.Lt_00E6:
.Lt_00E5:
cmp dword ptr [ebp-8], 0
je .Lt_00F0
push dword ptr [ebp+20]
push 0
push 0
push 0
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call CPROCCALL
add esp, 24
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
je .Lt_00F2
push dword ptr [ebp-12]
call CASSIGNMENT
add esp, 4
.Lt_00F2:
.Lt_00F1:
mov dword ptr [ebp-4], -1
jmp .Lt_00E2
.Lt_00F0:
.Lt_00EF:
cmp dword ptr [ebp+16], 0
je .Lt_00F4
push 0
push 0
push 17
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
mov dword ptr [ebp-4], -1
jmp .Lt_00E2
.Lt_00F4:
.Lt_00F3:
push dword ptr [ebp+12]
push dword ptr [PARSER+100]
call SYMBISPROCOVERLOADOF
add esp, 8
test eax, eax
jne .Lt_00F6
push 0
push 0
push 316
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
mov dword ptr [ebp-4], -1
jmp .Lt_00E2
.Lt_00F6:
.Lt_00F5:
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call CASSIGNFUNCTRESULT
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_00E2:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HPROCSYMBOL, .-HPROCSYMBOL
.balign 16
HVARSYMBOL:
.type HVARSYMBOL, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_00F7:
mov dword ptr [ebp-4], 0
push -1
push dword ptr [ebp+8]
call _Z11CVARIABLEEXP8FBSYMBOLi
add esp, 8
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_00FA
jmp .Lt_00F8
.Lt_00FA:
.Lt_00F9:
cmp dword ptr [ebp+12], 0
je .Lt_00FC
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax]
cmp ebx, 9
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_00FE
push dword ptr [ebp-8]
call ASTDELTREE
add esp, 4
push 0
push 0
push 17
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
mov dword ptr [ebp-4], -1
jmp .Lt_00F8
.Lt_00FE:
.Lt_00FD:
.Lt_00FC:
.Lt_00FB:
push dword ptr [ebp-8]
call CASSIGNMENTORPTRCALLEX
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_00F8:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HVARSYMBOL, .-HVARSYMBOL
.balign 16
HASSIGNORCALL_QB:
.type HASSIGNORCALL_QB, @function
push ebp
mov ebp, esp
sub esp, 32
push ebx
mov dword ptr [ebp-4], 0
.Lt_00FF:
mov dword ptr [ebp-4], 0
call LEXGETTEXT
mov dword ptr [ebp-8], eax
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [eax+16532]
mov eax, dword ptr [ebx+8]
mov dword ptr [ebp-12], eax
push dword ptr [ebp-8]
call SYMBGETDEFTYPE
add esp, 4
mov dword ptr [ebp-16], eax
.Lt_0101:
cmp dword ptr [ebp+8], 0
je .Lt_0102
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-20], ebx
mov dword ptr [ebp-24], 0
cmp dword ptr [ebp-12], -2147483648
jne .Lt_0104
.Lt_0105:
mov dword ptr [ebp-28], -1
mov ebx, dword ptr [ebp-20]
mov eax, dword ptr [ebx+4]
and eax, 268435456
test eax, eax
je .Lt_0109
mov eax, dword ptr [ebp-20]
cmp dword ptr [eax], 1
jne .Lt_010B
cmp dword ptr [ebp-16], 16
jne .Lt_010D
mov eax, dword ptr [ebp-20]
mov ebx, dword ptr [eax+24]
and ebx, 511
mov eax, ebx
mov dword ptr [ebp-32], eax
jmp .Lt_010F
.Lt_0111:
jmp .Lt_010E
.Lt_0112:
mov dword ptr [ebp-28], 0
jmp .Lt_010E
.Lt_010F:
mov eax, dword ptr [ebp-32]
add eax, 4294967293
cmp eax, 14
ja .Lt_0112
mov eax, dword ptr [ebp-32]
jmp dword ptr [.LT_0113+eax*4-12]
.LT_0113:
.int .Lt_0111
.int .Lt_0112
.int .Lt_0112
.int .Lt_0112
.int .Lt_0112
.int .Lt_0112
.int .Lt_0112
.int .Lt_0112
.int .Lt_0112
.int .Lt_0112
.int .Lt_0112
.int .Lt_0112
.int .Lt_0112
.int .Lt_0111
.int .Lt_0111
.Lt_010E:
jmp .Lt_010C
.Lt_010D:
mov eax, dword ptr [ebp-20]
mov ebx, dword ptr [eax+24]
and ebx, 511
cmp ebx, dword ptr [ebp-16]
sete bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-28], ebx
.Lt_010C:
.Lt_010B:
.Lt_010A:
.Lt_0109:
.Lt_0108:
cmp dword ptr [ebp-28], 0
je .Lt_0115
mov ebx, dword ptr [ebp-20]
mov eax, dword ptr [ebx]
mov dword ptr [ebp-32], eax
jmp .Lt_0117
.Lt_0119:
mov eax, dword ptr [ebp-20]
mov ebx, dword ptr [eax+8]
and ebx, 32
test ebx, ebx
je .Lt_011B
mov ebx, dword ptr [ebp-20]
mov eax, dword ptr [ebx+4]
and eax, 268435456
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
sete al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-28], eax
.Lt_011B:
.Lt_011A:
cmp dword ptr [ebp-28], 0
je .Lt_011D
push 0
push dword ptr [ebp+12]
push dword ptr [ebp-20]
push 0
call HPROCSYMBOL
add esp, 16
mov dword ptr [ebp-4], eax
jmp .Lt_0100
.Lt_011D:
.Lt_011C:
jmp .Lt_0116
.Lt_011E:
cmp dword ptr [ebp-24], 0
jne .Lt_0120
push dword ptr [ebp-20]
call SYMBVARCHECKACCESS
add esp, 4
test eax, eax
je .Lt_0122
mov eax, dword ptr [ebp-20]
mov dword ptr [ebp-24], eax
.Lt_0122:
.Lt_0121:
.Lt_0120:
.Lt_011F:
jmp .Lt_0116
.Lt_0123:
mov eax, dword ptr [ebp-20]
mov ebx, dword ptr [eax+4]
and ebx, 268435456
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_0125
mov ebx, dword ptr [ebp-20]
push dword ptr [ebx+52]
call CQUIRKSTMT
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_0100
.Lt_0125:
.Lt_0124:
jmp .Lt_0116
.Lt_0117:
mov eax, dword ptr [ebp-32]
add eax, 4294967295
cmp eax, 5
ja .Lt_0116
mov eax, dword ptr [ebp-32]
jmp dword ptr [.LT_0126+eax*4-4]
.LT_0126:
.int .Lt_011E
.int .Lt_0116
.int .Lt_0119
.int .Lt_0116
.int .Lt_0116
.int .Lt_0123
.Lt_0116:
.Lt_0115:
.Lt_0114:
mov eax, dword ptr [ebp-20]
mov ebx, dword ptr [eax+144]
mov dword ptr [ebp-20], ebx
.Lt_0107:
cmp dword ptr [ebp-20], 0
jne .Lt_0105
.Lt_0106:
jmp .Lt_0103
.Lt_0104:
.Lt_0127:
cmp dword ptr [ebp-12], 16
jne .Lt_012B
mov ebx, dword ptr [ebp-20]
mov eax, dword ptr [ebx+24]
and eax, 511
mov ebx, eax
mov dword ptr [ebp-32], ebx
jmp .Lt_012D
.Lt_012F:
mov dword ptr [ebp-28], -1
jmp .Lt_012C
.Lt_0130:
mov dword ptr [ebp-28], 0
jmp .Lt_012C
.Lt_012D:
mov ebx, dword ptr [ebp-32]
add ebx, 4294967293
cmp ebx, 14
ja .Lt_0130
mov ebx, dword ptr [ebp-32]
jmp dword ptr [.LT_0131+ebx*4-12]
.LT_0131:
.int .Lt_012F
.int .Lt_0130
.int .Lt_0130
.int .Lt_0130
.int .Lt_0130
.int .Lt_0130
.int .Lt_0130
.int .Lt_0130
.int .Lt_0130
.int .Lt_0130
.int .Lt_0130
.int .Lt_0130
.int .Lt_0130
.int .Lt_012F
.int .Lt_012F
.Lt_012C:
jmp .Lt_012A
.Lt_012B:
mov ebx, dword ptr [ebp-20]
mov eax, dword ptr [ebx+24]
and eax, 511
cmp eax, dword ptr [ebp-12]
sete al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-28], eax
.Lt_012A:
cmp dword ptr [ebp-28], 0
je .Lt_0133
mov eax, dword ptr [ebp-20]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-32], ebx
jmp .Lt_0135
.Lt_0137:
push 0
push dword ptr [ebp+12]
push dword ptr [ebp-20]
push 0
call HPROCSYMBOL
add esp, 16
mov dword ptr [ebp-4], eax
jmp .Lt_0100
jmp .Lt_0134
.Lt_0138:
push dword ptr [ebp-20]
call SYMBVARCHECKACCESS
add esp, 4
test eax, eax
je .Lt_013A
mov eax, dword ptr [ebp-20]
mov dword ptr [ebp-24], eax
.Lt_013A:
.Lt_0139:
jmp .Lt_0134
.Lt_013B:
mov eax, dword ptr [ebp-20]
push dword ptr [eax+52]
call CQUIRKSTMT
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_0100
jmp .Lt_0134
.Lt_0135:
mov eax, dword ptr [ebp-32]
add eax, 4294967295
cmp eax, 5
ja .Lt_0134
mov eax, dword ptr [ebp-32]
jmp dword ptr [.LT_013C+eax*4-4]
.LT_013C:
.int .Lt_0138
.int .Lt_0134
.int .Lt_0137
.int .Lt_0134
.int .Lt_0134
.int .Lt_013B
.Lt_0134:
.Lt_0133:
.Lt_0132:
mov eax, dword ptr [ebp-20]
mov ebx, dword ptr [eax+144]
mov dword ptr [ebp-20], ebx
.Lt_0129:
cmp dword ptr [ebp-20], 0
jne .Lt_0127
.Lt_0128:
.Lt_0103:
cmp dword ptr [ebp-24], 0
je .Lt_013E
push dword ptr [ebp+12]
push dword ptr [ebp-24]
call HVARSYMBOL
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_0100
.Lt_013E:
.Lt_013D:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp+8], ebx
jmp .Lt_0101
.Lt_0102:
.Lt_0100:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HASSIGNORCALL_QB, .-HASSIGNORCALL_QB
.balign 16
HASSIGNORPTRCALL:
.type HASSIGNORPTRCALL, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_013F:
cmp dword ptr [ebp+8], 0
jne .Lt_0142
jmp .Lt_0140
.Lt_0142:
.Lt_0141:
cmp dword ptr [ebp+12], 0
je .Lt_0144
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
cmp ebx, 9
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_0146
push dword ptr [ebp+8]
call ASTDELTREE
add esp, 4
push 0
push 0
push 17
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
mov dword ptr [ebp-4], -1
jmp .Lt_0140
.Lt_0146:
.Lt_0145:
.Lt_0144:
.Lt_0143:
push dword ptr [ebp+8]
call CASSIGNMENTORPTRCALLEX
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_0140:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HASSIGNORPTRCALL, .-HASSIGNORPTRCALL
.balign 16
HASSIGNORCALL:
.type HASSIGNORCALL, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_0147:
mov dword ptr [ebp-4], 0
.Lt_0149:
cmp dword ptr [ebp+12], 0
je .Lt_014A
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-8], ebx
.Lt_014B:
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx]
mov dword ptr [ebp-12], eax
jmp .Lt_014F
.Lt_0151:
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp-8]
push dword ptr [ebp+8]
call HPROCSYMBOL
add esp, 16
mov dword ptr [ebp-4], eax
jmp .Lt_0148
jmp .Lt_014E
.Lt_0152:
push dword ptr [ebp+16]
push -1
push dword ptr [ebp+12]
call _Z11CVARIABLEEXP10FBSYMCHAINi
add esp, 8
push eax
call HASSIGNORPTRCALL
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_0148
jmp .Lt_014E
.Lt_0153:
push dword ptr [ebp+16]
push dword ptr [ebp+20]
push -1
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call CIMPLICITDATAMEMBER
add esp, 16
push eax
call HASSIGNORPTRCALL
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_0148
jmp .Lt_014E
.Lt_0154:
push dword ptr [ebp+16]
push dword ptr [ebp-8]
call CCONSTANT
add esp, 4
push eax
call HASSIGNORPTRCALL
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_0148
jmp .Lt_014E
.Lt_0155:
mov eax, dword ptr [ebp-8]
push dword ptr [eax+52]
call CQUIRKSTMT
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_0148
jmp .Lt_014E
.Lt_014F:
mov eax, dword ptr [ebp-12]
add eax, 4294967295
cmp eax, 11
ja .Lt_014E
mov eax, dword ptr [ebp-12]
jmp dword ptr [.LT_0156+eax*4-4]
.LT_0156:
.int .Lt_0152
.int .Lt_0154
.int .Lt_0151
.int .Lt_014E
.int .Lt_014E
.int .Lt_0155
.int .Lt_014E
.int .Lt_014E
.int .Lt_014E
.int .Lt_014E
.int .Lt_014E
.int .Lt_0153
.Lt_014E:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+144]
mov dword ptr [ebp-8], ebx
.Lt_014D:
cmp dword ptr [ebp-8], 0
jne .Lt_014B
.Lt_014C:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+4]
mov dword ptr [ebp+12], eax
jmp .Lt_0149
.Lt_014A:
.Lt_0148:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HASSIGNORCALL, .-HASSIGNORCALL
.balign 16
HPROCCALLORASSIGN_QB:
.type HPROCCALLORASSIGN_QB, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0157:
mov dword ptr [ebp-4], 0
push 0
call LEXGETCLASS
add esp, 4
mov dword ptr [ebp-8], eax
jmp .Lt_015A
.Lt_015C:
push 0
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [eax+16532]
push dword ptr [ebx+4116]
call HASSIGNORCALL_QB
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_0158
jmp .Lt_0159
.Lt_015D:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 392
je .Lt_015F
push 0
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [eax+16532]
push dword ptr [ebx+4116]
call HASSIGNORCALL_QB
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_0158
.Lt_015F:
.Lt_015E:
push 1
call CCOMPSTMTISALLOWED
add esp, 4
test eax, eax
jne .Lt_0161
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_0158
.Lt_0161:
.Lt_0160:
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [eax+16532]
cmp dword ptr [ebx+4116], 0
jne .Lt_0163
call HFORWARDCALL
mov dword ptr [ebp-4], eax
jmp .Lt_0158
jmp .Lt_0162
.Lt_0163:
push -1
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [eax+16532]
push dword ptr [ebx+4116]
call HASSIGNORCALL_QB
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_0158
.Lt_0162:
jmp .Lt_0159
.Lt_015A:
cmp dword ptr [ebp-8], 5
ja .Lt_0159
mov eax, dword ptr [ebp-8]
jmp dword ptr [.LT_0164+eax*4]
.LT_0164:
.int .Lt_015C
.int .Lt_015D
.int .Lt_015C
.int .Lt_0159
.int .Lt_0159
.int .Lt_015C
.Lt_0159:
.Lt_0158:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HPROCCALLORASSIGN_QB, .-HPROCCALLORASSIGN_QB
.balign 16
HCTORCHAIN:
.type HCTORCHAIN, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
.Lt_019E:
mov eax, dword ptr [PARSER+100]
mov ebx, dword ptr [eax+4]
and ebx, 4096
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_01A1
push 0
push 0
push 164
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_019F
.Lt_01A1:
.Lt_01A0:
mov ebx, dword ptr [PARSER+100]
mov eax, dword ptr [ebx+128]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-8], ebx
push dword ptr [AST+40]
call ASTFINDFIRSTCODE
add esp, 4
test eax, eax
setne bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [PARSER+100]
mov ecx, dword ptr [eax+108]
cmp dword ptr [ecx+64], 0
setne al
shr eax, 1
sbb eax, eax
or ebx, eax
je .Lt_01A3
push 0
push 0
push 168
call ERRREPORT
add esp, 12
.Lt_01A3:
.Lt_01A2:
mov eax, dword ptr [PARSER+100]
mov ebx, dword ptr [eax+8]
or ebx, 4
mov eax, ebx
mov ebx, dword ptr [PARSER+100]
mov dword ptr [ebx+8], eax
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
push 0
push 0
push 0
push 0
mov eax, dword ptr [PARSER+100]
mov ebx, dword ptr [eax+72]
push dword ptr [ebx+56]
call ASTBUILDVARFIELD
add esp, 16
push eax
push 0
push dword ptr [ebp-8]
call SYMBGETCOMPCTORHEAD
add esp, 4
push eax
push 0
call CPROCCALL
add esp, 24
.Lt_019F:
pop ebx
mov esp, ebp
pop ebp
ret
.size HCTORCHAIN, .-HCTORCHAIN
.balign 16
HBASEINIT:
.type HBASEINIT, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
.Lt_01A4:
mov eax, dword ptr [PARSER+100]
mov ebx, dword ptr [eax+4]
and ebx, 4096
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_01A7
push 0
push 0
push 164
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_01A5
.Lt_01A7:
.Lt_01A6:
mov ebx, dword ptr [PARSER+100]
mov eax, dword ptr [ebx+128]
mov ebx, dword ptr [eax]
mov eax, dword ptr [ebx+92]
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_01A9
push 0
push 0
push 294
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_01A5
.Lt_01A9:
.Lt_01A8:
push dword ptr [AST+40]
call ASTFINDFIRSTCODE
add esp, 4
test eax, eax
setne bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [PARSER+100]
mov ecx, dword ptr [eax+108]
cmp dword ptr [ecx+64], 0
setne al
shr eax, 1
sbb eax, eax
or ebx, eax
je .Lt_01AB
push 0
push 0
push 169
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_01A5
.Lt_01AB:
.Lt_01AA:
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+28]
mov dword ptr [ebp-12], ebx
mov dword ptr [ebp-16], 0
push dword ptr [ebp-12]
call SYMBGETCOMPCTORHEAD
add esp, 4
test eax, eax
je .Lt_01AD
push dword ptr [ebp-12]
call CCTORCALL
add esp, 4
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 0
je .Lt_01AF
mov eax, dword ptr [ebp-20]
cmp dword ptr [eax], 10
jne .Lt_01B1
push dword ptr [ebp-20]
call ASTCALLCTORTOCALL
add esp, 4
mov dword ptr [ebp-20], eax
push 0
push 0
push -1
push dword ptr [ebp-12]
push 18
call ASTTYPEINIBEGIN
add esp, 20
mov dword ptr [ebp-16], eax
push 0
push -2147483648
push dword ptr [ebp-20]
push dword ptr [ebp-8]
push dword ptr [ebp-16]
call ASTTYPEINIADDCTORCALL
add esp, 20
push -1
push dword ptr [ebp-16]
call ASTTYPEINIEND
add esp, 8
jmp .Lt_01B0
.Lt_01B1:
push dword ptr [ebp-20]
call ASTDELTREE
add esp, 4
mov dword ptr [ebp-20], 0
.Lt_01B0:
.Lt_01AF:
.Lt_01AE:
jmp .Lt_01AC
.Lt_01AD:
push 0
push -2147483648
push 1
push dword ptr [ebp-8]
call CINITIALIZER
add esp, 16
mov dword ptr [ebp-16], eax
.Lt_01AC:
mov eax, dword ptr [PARSER+100]
mov ebx, dword ptr [eax+108]
mov eax, dword ptr [ebp-16]
mov dword ptr [ebx+64], eax
.Lt_01A5:
pop ebx
mov esp, ebp
pop ebp
ret
.size HBASEINIT, .-HBASEINIT
.balign 16
HBASEMEMBERACCESS:
.type HBASEMEMBERACCESS, @function
push ebp
mov ebp, esp
sub esp, 40
push ebx
mov dword ptr [ebp-4], 0
.Lt_01B2:
mov eax, dword ptr [PARSER+100]
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+4]
and ebx, 2048
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_01B5
push 0
push 0
push 293
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
mov dword ptr [ebp-4], -1
jmp .Lt_01B3
.Lt_01B5:
.Lt_01B4:
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx+128]
mov ebx, dword ptr [eax]
mov dword ptr [ebp-12], ebx
mov ebx, dword ptr [ebp-12]
mov eax, dword ptr [ebx+92]
mov dword ptr [ebp-16], eax
.Lt_01B6:
cmp dword ptr [ebp-16], 0
jne .Lt_01BA
push 0
push 0
push 294
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
mov dword ptr [ebp-4], -1
jmp .Lt_01B3
.Lt_01BA:
.Lt_01B9:
push 64
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 353
je .Lt_01BC
jmp .Lt_01B7
.Lt_01BC:
.Lt_01BB:
push 0
push 1
call LEXGETLOOKAHEAD
add esp, 8
cmp eax, 46
je .Lt_01BE
push 0
push 0
push 119
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
mov dword ptr [ebp-4], -1
jmp .Lt_01B3
.Lt_01BE:
.Lt_01BD:
mov eax, dword ptr [ebp-16]
mov ebx, dword ptr [eax+28]
mov eax, dword ptr [ebx+92]
mov dword ptr [ebp-16], eax
.Lt_01B8:
jmp .Lt_01B6
.Lt_01B7:
mov eax, dword ptr [ebp-16]
mov dword ptr [ebp-40], eax
lea eax, [ebp-40]
add eax, 4
mov dword ptr [eax], 0
lea eax, [ebp-40]
add eax, 8
mov dword ptr [eax], 0
lea eax, [ebp-40]
add eax, 12
mov dword ptr [eax], 0
mov dword ptr [eax+4], 0
mov dword ptr [eax+8], 0
push 2048
push 0
lea eax, [ebp-40]
push eax
mov eax, dword ptr [ebp-16]
push dword ptr [eax+28]
call HASSIGNORCALL
add esp, 16
mov dword ptr [ebp-4], eax
.Lt_01B3:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HBASEMEMBERACCESS, .-HBASEMEMBERACCESS
	#fbc-1.01.0/src/compiler/parser-proccall.bas' compilation took 0.03955200593918562 secs

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
.int fb_ctor__parserzproccall
