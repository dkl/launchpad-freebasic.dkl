	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/parser-compound-select.bas' compilation started at 15:27:35 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl PARSERSELECTSTMTINIT
PARSERSELECTSTMTINIT:
.type PARSERSELECTSTMTINIT, @function
.Lt_0060:
mov dword ptr [CTX], 0
.Lt_0061:
ret
.size PARSERSELECTSTMTINIT, .-PARSERSELECTSTMTINIT
.balign 16

.globl PARSERSELECTSTMTEND
PARSERSELECTSTMTEND:
.type PARSERSELECTSTMTEND, @function
.Lt_0062:
.Lt_0063:
ret
.size PARSERSELECTSTMTEND, .-PARSERSELECTSTMTEND
.balign 16

.globl CSELECTSTMTBEGIN
CSELECTSTMTBEGIN:
.type CSELECTSTMTBEGIN, @function
push ebp
mov ebp, esp
sub esp, 48
push ebx
.Lt_0064:
push 0
call LEXSKIPTOKEN
add esp, 4
push 271
call HMATCH
add esp, 4
test eax, eax
jne .Lt_0067
push 0
push 0
push 34
call ERRREPORT
add esp, 12
.Lt_0067:
.Lt_0066:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 375
jne .Lt_0069
push 0
call LEXSKIPTOKEN
add esp, 4
push 335
call HMATCH
add esp, 4
test eax, eax
je .Lt_006B
call CSELCONSTSTMTBEGIN
jmp .Lt_0065
.Lt_006B:
.Lt_006A:
push 0
push 0
push 17
call ERRREPORT
add esp, 12
.Lt_0069:
.Lt_0068:
call ASTSCOPEBEGIN
mov dword ptr [ebp-32], eax
cmp dword ptr [ebp-32], 0
jne .Lt_006D
push 0
push 0
push 27
call ERRREPORT
add esp, 12
.Lt_006D:
.Lt_006C:
call CEXPRESSION
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
jne .Lt_006F
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
mov dword ptr [ebp-4], eax
.Lt_006F:
.Lt_006E:
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+4]
and ebx, 511
cmp ebx, 18
jne .Lt_0071
push 0
push 0
push 24
call ERRREPORT
add esp, 12
push dword ptr [ebp-4]
call ASTDELTREE
add esp, 4
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-4], eax
.Lt_0071:
.Lt_0070:
push 0
push 0
call SYMBADDLABEL
add esp, 8
mov dword ptr [ebp-20], eax
mov dword ptr [ebp-16], 0
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-8], ebx
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebx+8]
mov dword ptr [ebp-24], eax
push dword ptr [ebp-4]
call ASTGETEFFECTIVENODE
add esp, 4
mov dword ptr [ebp-36], eax
mov eax, dword ptr [ebp-36]
cmp dword ptr [eax], 17
jne .Lt_0073
mov eax, dword ptr [ebp-36]
mov ebx, dword ptr [eax+12]
mov dword ptr [ebp-16], ebx
push dword ptr [ebp-4]
call ASTREBUILDWITHOUTEFFECTIVEPART
add esp, 4
push eax
call ASTADD
add esp, 4
jmp .Lt_0072
.Lt_0073:
mov eax, dword ptr [ebp-8]
and eax, 480
je .Lt_0074
mov dword ptr [ebp-44], 22
jmp .Lt_0089
.Lt_0074:
mov eax, dword ptr [ebp-8]
and eax, 31
mov dword ptr [ebp-44], eax
.Lt_0089:
mov eax, dword ptr [ebp-44]
mov dword ptr [ebp-48], eax
cmp dword ptr [ebp-48], 17
je .Lt_0079
.Lt_007A:
cmp dword ptr [ebp-48], 3
jne .Lt_0078
.Lt_0079:
mov dword ptr [ebp-8], 16
.Lt_0078:
.Lt_0076:
mov dword ptr [ebp-12], 0
mov eax, dword ptr [ENV+840]
and eax, 2
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_007C
or dword ptr [ebp-12], 2
.Lt_007C:
.Lt_007B:
mov eax, dword ptr [ebp-8]
and eax, 480
je .Lt_007D
mov dword ptr [ebp-40], 22
jmp .Lt_008A
.Lt_007D:
mov eax, dword ptr [ebp-8]
and eax, 31
mov dword ptr [ebp-40], eax
.Lt_008A:
cmp dword ptr [ebp-40], 6
je .Lt_0080
push dword ptr [ebp-12]
push dword ptr [ebp-24]
push dword ptr [ebp-8]
call SYMBADDIMPLICITVAR
add esp, 12
mov dword ptr [ebp-16], eax
mov eax, dword ptr [ebp-8]
and eax, 480
je .Lt_0081
mov dword ptr [ebp-44], 22
jmp .Lt_008B
.Lt_0081:
mov eax, dword ptr [ebp-8]
and eax, 31
mov dword ptr [ebp-44], eax
.Lt_008B:
cmp dword ptr [ebp-44], 16
je .Lt_0084
mov eax, dword ptr [ebp-16]
mov ebx, dword ptr [eax+8]
or ebx, 2048
mov eax, ebx
mov ebx, dword ptr [ebp-16]
mov dword ptr [ebx+8], eax
.Lt_0084:
.Lt_0083:
mov eax, dword ptr [ebp-12]
and eax, 2
je .Lt_0086
push -1
push dword ptr [ebp-16]
call ASTNEWDECL
add esp, 8
push eax
call ASTADDUNSCOPED
add esp, 4
push 0
push dword ptr [ebp-4]
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp-16]
call ASTNEWVAR
add esp, 20
push eax
call ASTNEWASSIGN
add esp, 12
push eax
call ASTADD
add esp, 4
jmp .Lt_0085
.Lt_0086:
push -1
push 64
push dword ptr [ebp-4]
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp-16]
call ASTNEWVAR
add esp, 20
push eax
call ASTNEWASSIGN
add esp, 12
push eax
push 0
push dword ptr [ebp-16]
call ASTNEWDECL
add esp, 8
push eax
call ASTNEWLINK
add esp, 12
push eax
call ASTADD
add esp, 4
.Lt_0085:
jmp .Lt_007F
.Lt_0080:
push dword ptr [ebp-12]
push 0
push 38
call SYMBADDIMPLICITVAR
add esp, 12
mov dword ptr [ebp-16], eax
mov eax, dword ptr [ebp-16]
mov ebx, dword ptr [eax+8]
or ebx, 16777216
mov eax, ebx
mov ebx, dword ptr [ebp-16]
mov dword ptr [ebx+8], eax
mov eax, dword ptr [ebp-12]
and eax, 2
je .Lt_0088
push -1
push dword ptr [ebp-16]
call ASTNEWDECL
add esp, 8
push eax
call ASTADDUNSCOPED
add esp, 4
push 0
push dword ptr [ebp-4]
push dword ptr [ebp-16]
call ASTBUILDFAKEWSTRINGASSIGN
add esp, 12
push eax
call ASTADD
add esp, 4
jmp .Lt_0087
.Lt_0088:
push -1
push 64
push dword ptr [ebp-4]
push dword ptr [ebp-16]
call ASTBUILDFAKEWSTRINGASSIGN
add esp, 12
push eax
push 0
push dword ptr [ebp-16]
call ASTNEWDECL
add esp, 8
push eax
call ASTNEWLINK
add esp, 12
push eax
call ASTADD
add esp, 4
.Lt_0087:
.Lt_007F:
.Lt_0072:
push 0
push 270
call CCOMPSTMTPUSH
add esp, 8
mov dword ptr [ebp-28], eax
mov eax, dword ptr [ebp-28]
mov dword ptr [eax+12], 0
mov eax, dword ptr [ebp-28]
mov ebx, dword ptr [ebp-16]
mov dword ptr [eax+16], ebx
mov ebx, dword ptr [ebp-28]
mov dword ptr [ebx+20], 0
push 0
push 0
call SYMBADDLABEL
add esp, 8
mov ebx, dword ptr [ebp-28]
mov dword ptr [ebx+48], eax
mov eax, dword ptr [ebp-28]
mov ebx, dword ptr [ebp-20]
mov dword ptr [eax+52], ebx
mov ebx, dword ptr [ebp-28]
mov eax, dword ptr [ebp-32]
mov dword ptr [ebx+60], eax
.Lt_0065:
pop ebx
mov esp, ebp
pop ebp
ret
.size CSELECTSTMTBEGIN, .-CSELECTSTMTBEGIN
.balign 16

.globl CSELECTSTMTNEXT
CSELECTSTMTNEXT:
.type CSELECTSTMTNEXT, @function
push ebp
mov ebp, esp
sub esp, 28
push ebx
.Lt_00AB:
push 0
push 270
call CCOMPSTMTGETTOS
add esp, 8
mov dword ptr [ebp-24], eax
cmp dword ptr [ebp-24], 0
jne .Lt_00AE
push 0
push 0
push 117
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_00AC
.Lt_00AE:
.Lt_00AD:
mov eax, dword ptr [ebp-24]
cmp dword ptr [eax+20], -1
jne .Lt_00B0
push 0
push 0
push 35
call ERRREPORT
add esp, 12
.Lt_00B0:
.Lt_00AF:
mov eax, dword ptr [ebp-24]
mov dword ptr [eax+4], 1
mov eax, dword ptr [ebp-24]
cmp dword ptr [eax+12], 0
je .Lt_00B2
push dword ptr [ebp-24]
call CSELCONSTSTMTNEXT
add esp, 4
jmp .Lt_00AC
.Lt_00B2:
.Lt_00B1:
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [ebp-24]
cmp dword ptr [eax+8], 0
je .Lt_00B4
mov eax, dword ptr [ebp-24]
push dword ptr [eax+8]
call ASTSCOPEEND
add esp, 4
mov eax, dword ptr [ebp-24]
mov dword ptr [eax+8], 0
.Lt_00B4:
.Lt_00B3:
mov eax, dword ptr [ebp-24]
cmp dword ptr [eax+20], 0
jle .Lt_00B6
push 0
mov eax, dword ptr [ebp-24]
push dword ptr [eax+52]
push 97
call ASTNEWBRANCH
add esp, 12
push eax
call ASTADD
add esp, 4
push -1
mov eax, dword ptr [ebp-24]
push dword ptr [eax+48]
call ASTNEWLABEL
add esp, 8
push eax
call ASTADD
add esp, 4
push 4
push 0
call SYMBADDLABEL
add esp, 8
mov ebx, dword ptr [ebp-24]
mov dword ptr [ebx+48], eax
.Lt_00B6:
.Lt_00B5:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 268
jne .Lt_00B8
push 0
call LEXSKIPTOKEN
add esp, 4
call ASTSCOPEBEGIN
mov ebx, dword ptr [ebp-24]
mov dword ptr [ebx+8], eax
mov eax, dword ptr [ebp-24]
mov dword ptr [eax+20], -1
jmp .Lt_00AC
.Lt_00B8:
.Lt_00B7:
mov dword ptr [ebp-12], 0
mov eax, dword ptr [CTX]
mov dword ptr [ebp-20], eax
.Lt_00B9:
mov eax, dword ptr [ebp-24]
push dword ptr [eax+16]
mov eax, dword ptr [ebp-12]
add eax, dword ptr [ebp-20]
sal eax, 4
mov ebx, offset CTX
add ebx, eax
lea eax, [ebx+4]
push eax
call HCASEEXPRESSION
add esp, 8
inc dword ptr [ebp-12]
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
je .Lt_00BD
jmp .Lt_00BA
.Lt_00BD:
.Lt_00BC:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_00BB:
jmp .Lt_00B9
.Lt_00BA:
mov eax, dword ptr [ebp-12]
add dword ptr [CTX], eax
push 4
push 0
call SYMBADDLABEL
add esp, 8
mov dword ptr [ebp-4], eax
mov dword ptr [ebp-16], 0
mov eax, dword ptr [ebp-12]
dec eax
mov dword ptr [ebp-28], eax
jmp .Lt_00BF
.Lt_00C2:
mov eax, dword ptr [ebp-12]
dec eax
cmp dword ptr [ebp-16], eax
jge .Lt_00C4
push 0
push 0
call SYMBADDLABEL
add esp, 8
mov dword ptr [ebp-8], eax
jmp .Lt_00C3
.Lt_00C4:
mov eax, dword ptr [ebp-24]
mov ebx, dword ptr [eax+48]
mov dword ptr [ebp-8], ebx
.Lt_00C3:
mov ebx, dword ptr [ebp-16]
add ebx, dword ptr [ebp-20]
sal ebx, 4
mov eax, offset CTX
add eax, ebx
cmp dword ptr [eax+4], 3
je .Lt_00C6
mov eax, dword ptr [ebp-12]
dec eax
cmp eax, dword ptr [ebp-16]
sete al
shr eax, 1
sbb eax, eax
push eax
push dword ptr [ebp-8]
push dword ptr [ebp-4]
mov eax, dword ptr [ebp-24]
push dword ptr [eax+16]
mov eax, dword ptr [ebp-16]
add eax, dword ptr [ebp-20]
sal eax, 4
mov ebx, offset CTX
add ebx, eax
lea eax, [ebx+4]
push eax
call HFLUSHCASEEXPR
add esp, 20
test eax, eax
jne .Lt_00C8
push 0
push -1
push 24
call ERRREPORT
add esp, 12
.Lt_00C8:
.Lt_00C7:
.Lt_00C6:
.Lt_00C5:
mov eax, dword ptr [ebp-12]
dec eax
cmp dword ptr [ebp-16], eax
jge .Lt_00CA
push -1
push dword ptr [ebp-8]
call ASTNEWLABEL
add esp, 8
push eax
call ASTADD
add esp, 4
.Lt_00CA:
.Lt_00C9:
.Lt_00C0:
inc dword ptr [ebp-16]
.Lt_00BF:
mov eax, dword ptr [ebp-28]
cmp dword ptr [ebp-16], eax
jle .Lt_00C2
.Lt_00C1:
mov eax, dword ptr [ebp-12]
sub dword ptr [CTX], eax
push -1
push dword ptr [ebp-4]
call ASTNEWLABEL
add esp, 8
push eax
call ASTADD
add esp, 4
call ASTSCOPEBEGIN
mov ebx, dword ptr [ebp-24]
mov dword ptr [ebx+8], eax
mov eax, dword ptr [ebp-24]
inc dword ptr [eax+20]
.Lt_00AC:
pop ebx
mov esp, ebp
pop ebp
ret
.size CSELECTSTMTNEXT, .-CSELECTSTMTNEXT
.balign 16

.globl CSELECTSTMTEND
CSELECTSTMTEND:
.type CSELECTSTMTEND, @function
push ebp
mov ebp, esp
sub esp, 4
.Lt_00CC:
push -1
push 270
call CCOMPSTMTGETTOS
add esp, 8
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
jne .Lt_00CF
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_00CD
.Lt_00CF:
.Lt_00CE:
mov eax, dword ptr [ebp-4]
cmp dword ptr [eax+20], 0
jne .Lt_00D1
push 0
push 0
push 34
call ERRREPORT
add esp, 12
.Lt_00D1:
.Lt_00D0:
mov eax, dword ptr [ebp-4]
cmp dword ptr [eax+12], 0
je .Lt_00D3
push dword ptr [ebp-4]
call CSELCONSTSTMTEND
add esp, 4
jmp .Lt_00CD
.Lt_00D3:
.Lt_00D2:
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [ebp-4]
cmp dword ptr [eax+8], 0
je .Lt_00D5
mov eax, dword ptr [ebp-4]
push dword ptr [eax+8]
call ASTSCOPEEND
add esp, 4
.Lt_00D5:
.Lt_00D4:
push -1
mov eax, dword ptr [ebp-4]
push dword ptr [eax+48]
call ASTNEWLABEL
add esp, 8
push eax
call ASTADD
add esp, 4
push -1
mov eax, dword ptr [ebp-4]
push dword ptr [eax+52]
call ASTNEWLABEL
add esp, 8
push eax
call ASTADD
add esp, 4
mov eax, dword ptr [ebp-4]
cmp dword ptr [eax+60], 0
je .Lt_00D7
mov eax, dword ptr [ebp-4]
push dword ptr [eax+60]
call ASTSCOPEEND
add esp, 4
.Lt_00D7:
.Lt_00D6:
push dword ptr [ebp-4]
call CCOMPSTMTPOP
add esp, 4
.Lt_00CD:
mov esp, ebp
pop ebp
ret
.size CSELECTSTMTEND, .-CSELECTSTMTEND
.balign 16
fb_ctor__parserzcompoundzselect:
.type fb_ctor__parserzcompoundzselect, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__parserzcompoundzselect, .-fb_ctor__parserzcompoundzselect
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
HCASEEXPRESSION:
.type HCASEEXPRESSION, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_008D:
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+4], 45
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 272
jne .Lt_0090
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXGETTOKEN
add esp, 4
push eax
call HFBRELOP2IRRELOP
add esp, 4
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+4], eax
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 2
jmp .Lt_008F
.Lt_0090:
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 0
.Lt_008F:
call CEXPRESSION
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+8], eax
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+8], 0
jne .Lt_0092
push 0
push 0
push 9
call ERRREPORT
add esp, 12
push 0
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+8]
and ebx, 16777216
test ebx, ebx
je .Lt_0093
mov dword ptr [ebp-4], 6
jmp .Lt_00D8
.Lt_0093:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+24]
and eax, 511
mov dword ptr [ebp-4], eax
.Lt_00D8:
push dword ptr [ebp-4]
call ASTNEWCONSTZ
add esp, 8
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+8], eax
.Lt_0092:
.Lt_0091:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 284
jne .Lt_0096
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 0
je .Lt_0098
push 0
push 0
push 17
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push 44
call HSKIPUNTIL
add esp, 16
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 0
jmp .Lt_0097
.Lt_0098:
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 1
call CEXPRESSION
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+12], eax
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+12], 0
jne .Lt_009A
push 0
push 0
push 9
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push 44
call HSKIPUNTIL
add esp, 16
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 0
.Lt_009A:
.Lt_0099:
.Lt_0097:
.Lt_0096:
.Lt_0095:
.Lt_008E:
pop ebx
mov esp, ebp
pop ebp
ret
.size HCASEEXPRESSION, .-HCASEEXPRESSION
.balign 16
HFLUSHCASEEXPR:
.type HFLUSHCASEEXPR, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
mov dword ptr [ebp-4], 0
.Lt_009B:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+8]
and ebx, 16777216
test ebx, ebx
je .Lt_009D
push dword ptr [ebp+12]
call ASTBUILDFAKEWSTRINGACCESS
add esp, 4
mov dword ptr [ebp-12], eax
jmp .Lt_00D9
.Lt_009D:
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp+12]
call ASTNEWVAR
add esp, 20
mov dword ptr [ebp-12], eax
.Lt_00D9:
mov eax, dword ptr [ebp-12]
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 1
je .Lt_00A0
cmp dword ptr [ebp+24], 0
je .Lt_00A2
push 0
push dword ptr [ebp+20]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+8]
push dword ptr [ebp-8]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+4]
call ASTGETINVERSELOGOP
add esp, 4
push eax
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp-8], eax
jmp .Lt_00A1
.Lt_00A2:
push 0
push dword ptr [ebp+16]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+8]
push dword ptr [ebp-8]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+4]
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp-8], eax
.Lt_00A1:
jmp .Lt_009F
.Lt_00A0:
push 0
push dword ptr [ebp+20]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+8]
push dword ptr [ebp-8]
push 47
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_00A4
mov dword ptr [ebp-4], 0
jmp .Lt_009C
.Lt_00A4:
.Lt_00A3:
push dword ptr [ebp-8]
call ASTADD
add esp, 4
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+8]
and ebx, 16777216
test ebx, ebx
je .Lt_00A5
push dword ptr [ebp+12]
call ASTBUILDFAKEWSTRINGACCESS
add esp, 4
mov dword ptr [ebp-16], eax
jmp .Lt_00DA
.Lt_00A5:
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp+12]
call ASTNEWVAR
add esp, 20
mov dword ptr [ebp-16], eax
.Lt_00DA:
mov eax, dword ptr [ebp-16]
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp+24], 0
je .Lt_00A8
push 0
push dword ptr [ebp+20]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+12]
push dword ptr [ebp-8]
push 46
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp-8], eax
jmp .Lt_00A7
.Lt_00A8:
push 0
push dword ptr [ebp+16]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+12]
push dword ptr [ebp-8]
push 50
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp-8], eax
.Lt_00A7:
.Lt_009F:
cmp dword ptr [ebp-8], 0
jne .Lt_00AA
mov dword ptr [ebp-4], 0
jmp .Lt_009C
.Lt_00AA:
.Lt_00A9:
push dword ptr [ebp-8]
call ASTADD
add esp, 4
mov dword ptr [ebp-4], -1
.Lt_009C:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HFLUSHCASEEXPR, .-HFLUSHCASEEXPR
	#fbc-1.01.0/src/compiler/parser-compound-select.bas' compilation took 0.03377998271025717 secs

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
	.lcomm	CTX,16388

.section .ctors, "aw", @progbits
.int fb_ctor__parserzcompoundzselect
