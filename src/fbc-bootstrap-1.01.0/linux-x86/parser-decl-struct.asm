	.intel_syntax noprefix

	#FreeBASIC-1.01.0-source/src/compiler/parser-decl-struct.bas' compilation started at 16:30:05 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl HTYPESTATICVARDECL
HTYPESTATICVARDECL:
.type HTYPESTATICVARDECL, @function
push ebp
mov ebp, esp
push ebx
.Lt_00F5:
mov eax, dword ptr [ebp+8]
movsx ebx, word ptr [eax+112]
and ebx, 2
test ebx, ebx
je .Lt_00F8
push 0
push 0
push 155
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_00F6
.Lt_00F8:
.Lt_00F7:
push dword ptr [ebp+8]
call HBEGINNESTING
add esp, 4
mov ebx, dword ptr [ebp+8]
movsx eax, word ptr [ebx+112]
or eax, 16384
mov ebx, dword ptr [ebp+8]
mov word ptr [ebx+112], ax
or dword ptr [ebp+12], 19
push 0
push 306
push 0
push dword ptr [ebp+12]
call CVARDECL
add esp, 16
.Lt_00F6:
pop ebx
mov esp, ebp
pop ebp
ret
.size HTYPESTATICVARDECL, .-HTYPESTATICVARDECL
.balign 16

.globl CTYPEDECL
CTYPEDECL:
.type CTYPEDECL, @function
push ebp
mov ebp, esp
sub esp, 60
push ebx
.Lt_0163:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 337
sete al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-4], eax
push 0
call LEXSKIPTOKEN
add esp, 4
mov dword ptr [ebp-8], -1
push 0
call LEXGETCLASS
add esp, 4
mov dword ptr [ebp-52], eax
jmp .Lt_0166
.Lt_0168:
jmp .Lt_0165
.Lt_0169:
cmp dword ptr [ebp-4], 0
jne .Lt_016B
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 375
jne .Lt_016D
call CTYPEDEFMULTDECL
jmp .Lt_0164
.Lt_016D:
.Lt_016C:
.Lt_016B:
.Lt_016A:
push 0
push 0
push 14
call ERRREPORT
add esp, 12
mov dword ptr [ebp-8], 0
jmp .Lt_0165
.Lt_016E:
jmp .Lt_0165
.Lt_016F:
push 0
push 0
push 14
call ERRREPORT
add esp, 12
mov dword ptr [ebp-8], 0
jmp .Lt_0165
.Lt_0166:
cmp dword ptr [ebp-52], 2
ja .Lt_016F
mov eax, dword ptr [ebp-52]
jmp dword ptr [.LT_0170+eax*4]
.LT_0170:
.int .Lt_0168
.int .Lt_0169
.int .Lt_016E
.Lt_0165:
cmp dword ptr [ebp-8], 0
je .Lt_0172
call CCURRENTPARENTID
mov eax, dword ptr [ENV+840]
and eax, 524288
test eax, eax
je .Lt_0174
lea eax, [SYMB+98352]
cmp dword ptr [SYMB+98516], eax
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_0176
mov ebx, dword ptr [LEX+839664]
mov eax, dword ptr [ebx+16532]
cmp dword ptr [eax+4120], 0
jle .Lt_0178
push 0
push 0
push 89
call ERRREPORT
add esp, 12
.Lt_0178:
.Lt_0177:
.Lt_0176:
.Lt_0175:
.Lt_0174:
.Lt_0173:
push 0
push offset Lt_0196
call LEXEATTOKEN
add esp, 8
jmp .Lt_0171
.Lt_0172:
push 0
push 0
call SYMBUNIQUEID
push eax
push 129
push offset Lt_0196
call fb_StrAssign
add esp, 20
.Lt_0171:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 375
jne .Lt_017A
cmp dword ptr [ebp-4], 0
je .Lt_017C
push 0
push 0
push 17
call ERRREPORT
add esp, 12
.Lt_017C:
.Lt_017B:
push offset Lt_0196
call CTYPEDEFSINGLEDECL
add esp, 4
jmp .Lt_0164
.Lt_017A:
.Lt_0179:
push 9
call CCOMPSTMTISALLOWED
add esp, 4
test eax, eax
jne .Lt_017E
push 0
push -1
push 336
call HSKIPCOMPOUND
add esp, 12
jmp .Lt_0164
.Lt_017E:
.Lt_017D:
call CALIASATTRIBUTE
mov dword ptr [ebp-20], eax
mov dword ptr [ebp-24], 0
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 351
jne .Lt_0180
push 0
call LEXSKIPTOKEN
add esp, 4
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-56], 0
lea eax, [ebp-60]
push eax
lea eax, [ebp-24]
push eax
lea eax, [ebp-52]
push eax
call HSYMBOLTYPE
add esp, 12
cmp dword ptr [ebp-52], 18
je .Lt_0183
push 0
push 0
push 292
call ERRREPORT
add esp, 12
mov dword ptr [ebp-24], 0
.Lt_0183:
.Lt_0182:
.Lt_0180:
.Lt_017F:
call CFIELDALIGNMENTATTRIBUTE
mov dword ptr [ebp-28], eax
push -34
push 336
call CCOMPSTMTPUSH
add esp, 8
mov eax, dword ptr [AST+40]
mov dword ptr [ebp-32], eax
mov eax, dword ptr [AST+132]
mov dword ptr [ebp-36], eax
mov eax, dword ptr [PARSER+100]
mov dword ptr [ebp-40], eax
mov eax, dword ptr [PARSER+104]
mov dword ptr [ebp-44], eax
mov eax, dword ptr [PARSER+92]
mov dword ptr [ebp-48], eax
push dword ptr [ebp-24]
push dword ptr [ebp-28]
push dword ptr [ebp-4]
push dword ptr [ebp-20]
push offset Lt_0196
push 0
call HTYPEADD
add esp, 24
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp-32]
mov dword ptr [AST+40], eax
mov eax, dword ptr [ebp-36]
mov dword ptr [AST+132], eax
mov eax, dword ptr [ebp-40]
mov dword ptr [PARSER+100], eax
mov eax, dword ptr [ebp-44]
mov dword ptr [PARSER+104], eax
mov eax, dword ptr [ebp-48]
mov dword ptr [PARSER+92], eax
push dword ptr [ebp-12]
call HDISALLOWNESTEDCLASSES
add esp, 4
push -1
push 336
call CCOMPSTMTGETTOS
add esp, 8
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 0
je .Lt_0185
push dword ptr [ebp-16]
call CCOMPSTMTPOP
add esp, 4
.Lt_0185:
.Lt_0184:
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax+8]
and ebx, 262144
test ebx, ebx
je .Lt_0187
push 0
push 0
push offset Lt_0196
push dword ptr [SYMB+98516]
call SYMBLOOKUPAT
add esp, 16
mov dword ptr [ebp-52], eax
cmp dword ptr [ebp-52], 0
je .Lt_0189
mov eax, dword ptr [ebp-52]
mov ebx, dword ptr [ebp-12]
cmp dword ptr [eax], ebx
je .Lt_018B
push 0
push 1
push 0
push offset Lt_0196
push 166
call ERRREPORTEX
add esp, 20
.Lt_018B:
.Lt_018A:
.Lt_0189:
.Lt_0188:
mov ebx, dword ptr [ebp-12]
movsx eax, word ptr [ebx+112]
and eax, 2048
test eax, eax
je .Lt_018D
push 0
push 0
push 237
call ERRREPORT
add esp, 12
.Lt_018D:
.Lt_018C:
.Lt_0187:
.Lt_0186:
mov eax, dword ptr [ebp-12]
movsx ebx, word ptr [eax+112]
and ebx, 32
test ebx, ebx
je .Lt_018F
push dword ptr [ebp-12]
call SYMBCOMPISTRIVIAL
add esp, 4
test eax, eax
jne .Lt_0191
push dword ptr [ebp-12]
call HPATCHBYVALPARAMSTOSELF
add esp, 4
.Lt_0191:
.Lt_0190:
.Lt_018F:
.Lt_018E:
mov eax, dword ptr [ebp-12]
movsx ebx, word ptr [eax+112]
and ebx, 64
test ebx, ebx
je .Lt_0193
push dword ptr [ebp-12]
call HPATCHBYVALRESULTTOSELF
add esp, 4
.Lt_0193:
.Lt_0192:
.Lt_0164:
pop ebx
mov esp, ebp
pop ebp
ret
.size CTYPEDECL, .-CTYPEDECL

.section .bss
.balign 4
	.lcomm	Lt_0196,129

.section .text
.balign 16
fb_ctor__parserzdeclzstruct:
.type fb_ctor__parserzdeclzstruct, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__parserzdeclzstruct, .-fb_ctor__parserzdeclzstruct
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
HBEGINNESTING:
.type HBEGINNESTING, @function
push ebp
mov ebp, esp
push ebx
.Lt_005F:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+8]
and ebx, 262144
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_0062
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+8]
or eax, 262144
mov ebx, eax
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+8], ebx
push 0
push dword ptr [ebp+8]
call SYMBNESTBEGIN
add esp, 8
.Lt_0062:
.Lt_0061:
.Lt_0060:
pop ebx
mov esp, ebp
pop ebp
ret
.size HBEGINNESTING, .-HBEGINNESTING
.balign 16
HTYPEPROTODECL:
.type HTYPEPROTODECL, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_0063:
mov eax, dword ptr [ebp+8]
movsx ebx, word ptr [eax+112]
and ebx, 2
test ebx, ebx
je .Lt_0066
push 0
push 0
push 153
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_0064
.Lt_0066:
.Lt_0065:
mov ebx, dword ptr [ENV+840]
and ebx, 64
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_0068
push 0
push 145
push 64
call ERRREPORTNOTALLOWED
add esp, 12
.Lt_0068:
.Lt_0067:
push dword ptr [ebp+8]
call HBEGINNESTING
add esp, 4
push 0
call LEXSKIPTOKEN
add esp, 4
lea ebx, [ebp+12]
push ebx
push dword ptr [ebp+8]
call CMETHODATTRIBUTES
add esp, 8
push 0
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 347
jne .Lt_006A
.Lt_006B:
lea eax, [ebp+12]
push eax
call HDISALLOWSTATICATTRIB
add esp, 4
lea eax, [ebp+12]
push eax
call HDISALLOWVIRTUALCTOR
add esp, 4
lea eax, [ebp+12]
push eax
push dword ptr [ebp-8]
call HDISALLOWCONSTCTORDTOR
add esp, 8
jmp .Lt_0069
.Lt_006A:
cmp dword ptr [ebp-8], 348
jne .Lt_006C
.Lt_006D:
lea eax, [ebp+12]
push eax
call HDISALLOWSTATICATTRIB
add esp, 4
lea eax, [ebp+12]
push eax
call HDISALLOWABSTRACTDTOR
add esp, 4
lea eax, [ebp+12]
push eax
push dword ptr [ebp-8]
call HDISALLOWCONSTCTORDTOR
add esp, 8
jmp .Lt_0069
.Lt_006C:
cmp dword ptr [ebp-8], 350
jne .Lt_006E
.Lt_006F:
lea eax, [ebp+12]
push eax
call HDISALLOWSTATICATTRIB
add esp, 4
.Lt_006E:
.Lt_0069:
cmp dword ptr [ebp-8], 345
je .Lt_0072
.Lt_0073:
cmp dword ptr [ebp-8], 346
je .Lt_0072
.Lt_0074:
cmp dword ptr [ebp-8], 347
je .Lt_0072
.Lt_0075:
cmp dword ptr [ebp-8], 348
je .Lt_0072
.Lt_0076:
cmp dword ptr [ebp-8], 349
je .Lt_0072
.Lt_0077:
cmp dword ptr [ebp-8], 350
jne .Lt_0071
.Lt_0072:
push 0
call LEXSKIPTOKEN
add esp, 4
push dword ptr [ebp-8]
push 3
lea eax, [ebp-4]
push eax
push dword ptr [ebp+12]
call CPROCHEADER
add esp, 16
jmp .Lt_0070
.Lt_0071:
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
.Lt_0078:
.Lt_0070:
.Lt_0064:
pop ebx
mov esp, ebp
pop ebp
ret
.size HTYPEPROTODECL, .-HTYPEPROTODECL
.balign 16
HTYPEENUMDECL:
.type HTYPEENUMDECL, @function
push ebp
mov ebp, esp
push ebx
.Lt_0079:
mov eax, dword ptr [ebp+8]
movsx ebx, word ptr [eax+112]
and ebx, 2
test ebx, ebx
je .Lt_007C
push 0
push 0
push 154
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_007A
.Lt_007C:
.Lt_007B:
push dword ptr [ebp+8]
call HBEGINNESTING
add esp, 4
cmp dword ptr [ebp+12], 335
jne .Lt_007E
push dword ptr [ebp+16]
call CCONSTDECL
add esp, 4
jmp .Lt_007D
.Lt_007E:
push dword ptr [ebp+16]
call CENUMDECL
add esp, 4
.Lt_007D:
.Lt_007A:
pop ebx
mov esp, ebp
pop ebp
ret
.size HTYPEENUMDECL, .-HTYPEENUMDECL
.balign 16
HSETFIELDINITREE:
.type HSETFIELDINITREE, @function
push ebp
mov ebp, esp
push ebx
.Lt_007F:
cmp dword ptr [ebp+12], 0
je .Lt_0082
push 12582912
push dword ptr [ebp+12]
call ASTTYPEINIUSESLOCALS
add esp, 8
test eax, eax
je .Lt_0084
push 0
push -1
push 271
call ERRREPORT
add esp, 12
push dword ptr [ebp+12]
call ASTDELTREE
add esp, 4
mov dword ptr [ebp+12], 0
.Lt_0084:
.Lt_0083:
.Lt_0082:
.Lt_0081:
push dword ptr [ebp+12]
call ASTFORGETBITFIELDS
add esp, 4
cmp dword ptr [ebp+12], 0
je .Lt_0086
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+12]
mov dword ptr [eax+52], ebx
.Lt_0086:
.Lt_0085:
.Lt_0080:
pop ebx
mov esp, ebp
pop ebp
ret
.size HSETFIELDINITREE, .-HSETFIELDINITREE
.balign 16
HFIELDINIT:
.type HFIELDINIT, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_0087:
push 0
call LEXGETTOKEN
add esp, 4
push eax
call HISASSIGNTOKEN
add esp, 4
test eax, eax
jne .Lt_008A
cmp dword ptr [ebp+12], 0
je .Lt_008C
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+24]
and ebx, 511
cmp ebx, 18
jne .Lt_008E
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+28]
mov dword ptr [ebp-8], eax
push dword ptr [ebp-8]
call SYMBGETCOMPCTORHEAD
add esp, 4
test eax, eax
je .Lt_0090
push dword ptr [ebp-8]
call SYMBGETCOMPDEFCTOR
add esp, 4
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
je .Lt_0092
push dword ptr [ebp-4]
call SYMBCHECKACCESS
add esp, 4
test eax, eax
jne .Lt_0094
push 0
push 0
push 203
call ERRREPORT
add esp, 12
.Lt_0094:
.Lt_0093:
jmp .Lt_0091
.Lt_0092:
push 0
push 0
push 182
call ERRREPORT
add esp, 12
.Lt_0091:
.Lt_0090:
.Lt_008F:
push dword ptr [ebp-8]
call SYMBGETCOMPDTOR
add esp, 4
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
je .Lt_0096
push dword ptr [ebp-4]
call SYMBCHECKACCESS
add esp, 4
test eax, eax
jne .Lt_0098
push 0
push 0
push 205
call ERRREPORT
add esp, 12
.Lt_0098:
.Lt_0097:
.Lt_0096:
.Lt_0095:
.Lt_008E:
.Lt_008D:
.Lt_008C:
.Lt_008B:
cmp dword ptr [ebp+16], 0
je .Lt_009A
mov eax, dword ptr [ebp+8]
movsx ebx, word ptr [eax+112]
or ebx, 4096
mov eax, dword ptr [ebp+8]
mov word ptr [eax+112], bx
push dword ptr [ebp+8]
call HBEGINNESTING
add esp, 4
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call HSETFIELDINITREE
add esp, 8
.Lt_009A:
.Lt_0099:
jmp .Lt_0088
.Lt_008A:
.Lt_0089:
mov ebx, dword ptr [ENV+840]
and ebx, 128
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_009C
push 0
push 145
push 128
call ERRREPORTNOTALLOWED
add esp, 12
push 0
push 0
push 0
push 257
call HSKIPUNTIL
add esp, 16
jmp .Lt_0088
.Lt_009C:
.Lt_009B:
cmp dword ptr [ebp+12], 0
je .Lt_009E
mov ebx, dword ptr [ebp+8]
movsx eax, word ptr [ebx+112]
and eax, 3
test eax, eax
je .Lt_00A0
push 0
push 0
push 162
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push 257
call HSKIPUNTIL
add esp, 16
jmp .Lt_0088
.Lt_00A0:
.Lt_009F:
.Lt_009E:
.Lt_009D:
push 0
call LEXSKIPTOKEN
add esp, 4
cmp dword ptr [ebp+12], 0
jne .Lt_00A2
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_0088
.Lt_00A2:
.Lt_00A1:
mov eax, dword ptr [ebp+8]
movsx ebx, word ptr [eax+112]
or ebx, 4096
mov eax, dword ptr [ebp+8]
mov word ptr [eax+112], bx
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 371
jne .Lt_00A4
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+24]
and ebx, 511
cmp ebx, 16
jne .Lt_00A6
push 0
push 0
push 24
call ERRREPORT
add esp, 12
jmp .Lt_00A5
.Lt_00A6:
mov ebx, dword ptr [ebp+12]
mov eax, dword ptr [ebx+8]
or eax, 2048
mov ebx, eax
mov eax, dword ptr [ebp+12]
mov dword ptr [eax+8], ebx
.Lt_00A5:
push 0
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_0088
.Lt_00A4:
.Lt_00A3:
push dword ptr [ebp+8]
call HBEGINNESTING
add esp, 4
push 0
push -2147483648
push 1
push dword ptr [ebp+12]
call CINITIALIZER
add esp, 16
push eax
push dword ptr [ebp+12]
call HSETFIELDINITREE
add esp, 8
.Lt_0088:
pop ebx
mov esp, ebp
pop ebp
ret
.size HFIELDINIT, .-HFIELDINIT
.balign 16
HFIELDTYPE:
.type HFIELDTYPE, @function
push ebp
mov ebp, esp
.Lt_00A7:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HSYMBOLTYPE
add esp, 12
mov eax, dword ptr [ebp+12]
push dword ptr [eax]
mov eax, dword ptr [ebp+8]
push dword ptr [eax]
call HCOMPLAINIFABSTRACTCLASS
add esp, 8
.Lt_00A8:
mov esp, ebp
pop ebp
ret
.size HFIELDTYPE, .-HFIELDTYPE
.balign 16
HARRAYORBITFIELD:
.type HARRAYORBITFIELD, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
.Lt_00A9:
mov eax, dword ptr [ebp+16]
mov dword ptr [eax], 0
mov eax, dword ptr [ebp+20]
mov dword ptr [eax], 0
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+28]
mov dword ptr [eax], 0
push 40
call HMATCH
add esp, 4
test eax, eax
je .Lt_00AD
push 0
push 0
push 0
push 0
push 7
call ASTTYPEINIBEGIN
add esp, 20
mov ebx, dword ptr [ebp+28]
mov dword ptr [ebx], eax
push offset Lt_01AE
lea eax, [ebp-4]
push eax
push dword ptr [ebp+20]
call CARRAYDECL
add esp, 12
cmp dword ptr [ebp-4], 0
je .Lt_00AF
push 76
push offset Lt_01AE
mov eax, dword ptr [ebp+20]
push dword ptr [eax]
call HCOMPLAINABOUTELLIPSIS
add esp, 12
push dword ptr [ebp+24]
push offset Lt_01AE
mov eax, dword ptr [ebp+20]
push dword ptr [eax]
push dword ptr [ebp+12]
call HMAYBECONVERTEXPRTB2DIMTB
add esp, 16
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax]
and ebx, 4
je .Lt_00B1
mov dword ptr [ebp-8], 0
mov ebx, dword ptr [ebp+20]
mov eax, dword ptr [ebx]
dec eax
mov dword ptr [ebp-12], eax
jmp .Lt_00B3
.Lt_00B6:
push 0
push 7
push 0
mov eax, dword ptr [ebp-8]
push dword ptr [Lt_01AF+eax*8]
mov eax, dword ptr [ebp+28]
push dword ptr [eax]
call ASTTYPEINIADDASSIGN
add esp, 20
push 0
push 7
push 0
mov eax, dword ptr [ebp-8]
push dword ptr [Lt_01AF+eax*8+4]
mov eax, dword ptr [ebp+28]
push dword ptr [eax]
call ASTTYPEINIADDASSIGN
add esp, 20
.Lt_00B4:
inc dword ptr [ebp-8]
.Lt_00B3:
mov eax, dword ptr [ebp-12]
cmp dword ptr [ebp-8], eax
jle .Lt_00B6
.Lt_00B5:
.Lt_00B1:
.Lt_00B0:
jmp .Lt_00AE
.Lt_00AF:
mov eax, dword ptr [ebp+12]
or dword ptr [eax], 4
.Lt_00AE:
push -1
mov eax, dword ptr [ebp+28]
push dword ptr [eax]
call ASTTYPEINIEND
add esp, 8
mov eax, dword ptr [ebp-4]
not eax
mov ebx, dword ptr [ebp+12]
mov ecx, dword ptr [ebx]
and ecx, 4
test ecx, ecx
sete cl
shr ecx, 1
sbb ecx, ecx
or eax, ecx
je .Lt_00B8
mov ecx, dword ptr [ebp+28]
push dword ptr [ecx]
call ASTDELTREE
add esp, 4
mov ecx, dword ptr [ebp+28]
mov dword ptr [ecx], 0
.Lt_00B8:
.Lt_00B7:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_00BA
push 0
push 0
push 7
call ERRREPORT
add esp, 12
jmp .Lt_00B9
.Lt_00BA:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_00B9:
jmp .Lt_00AC
.Lt_00AD:
cmp dword ptr [ebp+8], 310
jne .Lt_00BC
push 0
push 0
push 62
call ERRREPORT
add esp, 12
mov eax, dword ptr [ebp+20]
mov dword ptr [eax], -1
.Lt_00BC:
.Lt_00BB:
.Lt_00AC:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 258
jne .Lt_00BE
push 0
push 1
call LEXGETLOOKAHEADCLASS
add esp, 8
cmp eax, 3
jne .Lt_00C0
push 0
call LEXSKIPTOKEN
add esp, 4
call LEXGETTEXT
push eax
call fb_StrAllocTempDescZ
add esp, 4
push eax
call fb_VALINT
add esp, 4
mov ecx, dword ptr [ebp+16]
mov dword ptr [ecx], eax
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [ebp+16]
mov ecx, dword ptr [eax]
test ecx, ecx
setle cl
shr ecx, 1
sbb ecx, ecx
mov eax, dword ptr [ebp+20]
mov ebx, dword ptr [eax]
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
or ecx, ebx
je .Lt_00C2
push 0
push -1
push 17
call ERRREPORT
add esp, 12
mov ebx, dword ptr [ebp+16]
mov dword ptr [ebx], 0
.Lt_00C2:
.Lt_00C1:
.Lt_00C0:
.Lt_00BF:
.Lt_00BE:
.Lt_00BD:
.Lt_00AA:
pop ebx
mov esp, ebp
pop ebp
ret
.size HARRAYORBITFIELD, .-HARRAYORBITFIELD

.section .bss
.balign 4
	.lcomm	Lt_01AF,64

.section .data
.balign 4
Lt_01AE:
.int Lt_01AF
.int Lt_01AF
.int 64
.int 4
.int 2
.int 8
.int 0
.int 7
.int 2
.int 0
.int 1

.section .text
.balign 16
HADDANDINITFIELD:
.type HADDANDINITFIELD, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_00C3:
mov dword ptr [ebp-4], 0
cmp dword ptr [ebp+16], 0
jle .Lt_00C6
push 0
push dword ptr [ebp+40]
push dword ptr [ebp+36]
mov eax, dword ptr [ebp+20]
mov ebx, dword ptr [eax]
lea eax, [ebx]
push eax
push dword ptr [ebp+16]
call SYMBCHECKARRAYSIZE
add esp, 20
test eax, eax
jne .Lt_00C8
push 0
push 0
push 49
call ERRREPORT
add esp, 12
mov dword ptr [ebp+16], 1
mov eax, dword ptr [ebp+20]
mov ebx, dword ptr [eax]
mov dword ptr [ebx], 0
mov dword ptr [ebx+4], 0
mov ebx, dword ptr [ebp+20]
mov eax, dword ptr [ebx]
mov dword ptr [eax+8], 0
mov dword ptr [eax+12], 0
.Lt_00C8:
.Lt_00C7:
.Lt_00C6:
.Lt_00C5:
cmp dword ptr [ebp+44], 0
jle .Lt_00CA
push dword ptr [ebp+44]
push dword ptr [ebp+40]
push dword ptr [ebp+36]
push dword ptr [ebp+28]
push dword ptr [ebp+8]
call SYMBCHECKBITFIELD
add esp, 20
test eax, eax
jne .Lt_00CC
push 0
push -1
push 77
call ERRREPORT
add esp, 12
mov dword ptr [ebp+44], 0
.Lt_00CC:
.Lt_00CB:
.Lt_00CA:
.Lt_00C9:
cmp dword ptr [ebp+28], 18
jne .Lt_00CE
mov eax, dword ptr [ebp+8]
cmp dword ptr [ebp+32], eax
jne .Lt_00D0
push 0
push 0
push 87
call ERRREPORT
add esp, 12
mov dword ptr [ebp+28], 7
mov dword ptr [ebp+32], 0
mov dword ptr [ebp+36], 0
mov dword ptr [ebp+40], 0
.Lt_00D0:
.Lt_00CF:
.Lt_00CE:
.Lt_00CD:
push dword ptr [ebp+48]
push dword ptr [ebp+44]
push dword ptr [ebp+40]
push dword ptr [ebp+36]
push dword ptr [ebp+32]
push dword ptr [ebp+28]
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call SYMBADDFIELD
add esp, 40
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_00D2
push 0
push 1
push 0
push dword ptr [ebp+12]
push 4
call ERRREPORTEX
add esp, 20
jmp .Lt_00C4
.Lt_00D2:
.Lt_00D1:
mov eax, dword ptr [ebp+48]
and eax, 4
je .Lt_00D4
push dword ptr [ebp-8]
call HCOMPLAINABOUTCONSTDYNAMICARRAY
add esp, 4
.Lt_00D4:
.Lt_00D3:
push dword ptr [ebp+24]
push dword ptr [ebp-8]
push dword ptr [ebp+8]
call HFIELDINIT
add esp, 12
mov dword ptr [ebp-4], -1
.Lt_00C4:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HADDANDINITFIELD, .-HADDANDINITFIELD
.balign 16
HFIELDID:
.type HFIELDID, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_00D5:
push 0
call LEXGETCLASS
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
je .Lt_00DA
.Lt_00DB:
cmp dword ptr [ebp-8], 1
je .Lt_00DA
.Lt_00DC:
cmp dword ptr [ebp-8], 2
jne .Lt_00D9
.Lt_00DA:
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [eax+16532]
cmp dword ptr [ebx+8], -2147483648
je .Lt_00DE
push 0
push 0
push 17
call ERRREPORT
add esp, 12
.Lt_00DE:
.Lt_00DD:
mov ebx, dword ptr [LEX+839664]
mov eax, dword ptr [ebx+16532]
cmp dword ptr [eax+4120], 0
jle .Lt_00E0
push 0
push 0
push 89
call ERRREPORT
add esp, 12
.Lt_00E0:
.Lt_00DF:
push 0
call LEXGETCLASS
add esp, 4
cmp eax, 1
jne .Lt_00E2
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+8]
and ebx, 262144
test ebx, ebx
je .Lt_00E4
push 0
push 0
push 237
call ERRREPORT
add esp, 12
jmp .Lt_00E3
.Lt_00E4:
mov ebx, dword ptr [ebp+8]
movsx eax, word ptr [ebx+112]
or eax, 2048
mov ebx, dword ptr [ebp+8]
mov word ptr [ebx+112], ax
.Lt_00E3:
.Lt_00E2:
.Lt_00E1:
push 0
push 0
call LEXGETTEXT
push eax
push 129
push offset Lt_01B3
call fb_StrAssign
add esp, 20
push 0
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_00D7
.Lt_00D9:
push 0
push 0
push 14
call ERRREPORT
add esp, 12
push 0
push 0
call SYMBUNIQUELABEL
push eax
push 129
push offset Lt_01B3
call fb_StrAssign
add esp, 20
.Lt_00E5:
.Lt_00D7:
mov eax, offset Lt_01B3
mov dword ptr [ebp-4], eax
.Lt_00D6:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HFIELDID, .-HFIELDID

.section .bss
.balign 4
	.lcomm	Lt_01B3,129

.section .text
.balign 16
HTYPEMULTELEMENTDECL:
.type HTYPEMULTELEMENTDECL, @function
push ebp
mov ebp, esp
sub esp, 36
.Lt_00E6:
push 0
call LEXSKIPTOKEN
add esp, 4
lea eax, [ebp-32]
push eax
lea eax, [ebp-8]
push eax
lea eax, [ebp-12]
push eax
call HFIELDTYPE
add esp, 12
.Lt_00E9:
mov eax, dword ptr [ebp+16]
mov dword ptr [ebp-24], eax
push dword ptr [ebp+12]
call HFIELDID
add esp, 4
mov dword ptr [ebp-4], eax
lea eax, [ebp-36]
push eax
push offset Lt_01B4
lea eax, [ebp-20]
push eax
lea eax, [ebp-16]
push eax
lea eax, [ebp-24]
push eax
push dword ptr [ebp+8]
call HARRAYORBITFIELD
add esp, 24
push dword ptr [ebp-24]
push dword ptr [ebp-16]
push dword ptr [ebp-28]
push dword ptr [ebp-32]
push dword ptr [ebp-8]
push dword ptr [ebp-12]
push dword ptr [ebp-36]
push offset Lt_01B4
push dword ptr [ebp-20]
push dword ptr [ebp-4]
push dword ptr [ebp+12]
call HADDANDINITFIELD
add esp, 44
.Lt_00EB:
push 44
call HMATCH
add esp, 4
test eax, eax
jne .Lt_00E9
.Lt_00EA:
.Lt_00E7:
mov esp, ebp
pop ebp
ret
.size HTYPEMULTELEMENTDECL, .-HTYPEMULTELEMENTDECL

.section .bss
.balign 4
	.lcomm	Lt_01B5,128

.section .data
.balign 4
Lt_01B4:
.int Lt_01B5
.int Lt_01B5
.int 128
.int 16
.int 1
.int 8
.int 0
.int 7

.section .text
.balign 16
HTYPEELEMENTDECL:
.type HTYPEELEMENTDECL, @function
push ebp
mov ebp, esp
sub esp, 32
.Lt_00EC:
push dword ptr [ebp+12]
call HFIELDID
add esp, 4
mov dword ptr [ebp-4], eax
lea eax, [ebp-32]
push eax
push offset Lt_01B6
lea eax, [ebp-20]
push eax
lea eax, [ebp-16]
push eax
lea eax, [ebp+16]
push eax
push dword ptr [ebp+8]
call HARRAYORBITFIELD
add esp, 24
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 375
je .Lt_00F0
push 0
push 0
push 17
call ERRREPORT
add esp, 12
jmp .Lt_00EF
.Lt_00F0:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_00EF:
lea eax, [ebp-28]
push eax
lea eax, [ebp-8]
push eax
lea eax, [ebp-12]
push eax
call HFIELDTYPE
add esp, 12
push dword ptr [ebp+16]
push dword ptr [ebp-16]
push dword ptr [ebp-24]
push dword ptr [ebp-28]
push dword ptr [ebp-8]
push dword ptr [ebp-12]
push dword ptr [ebp-32]
push offset Lt_01B6
push dword ptr [ebp-20]
push dword ptr [ebp-4]
push dword ptr [ebp+12]
call HADDANDINITFIELD
add esp, 44
.Lt_00ED:
mov esp, ebp
pop ebp
ret
.size HTYPEELEMENTDECL, .-HTYPEELEMENTDECL

.section .bss
.balign 4
	.lcomm	Lt_01B7,128

.section .data
.balign 4
Lt_01B6:
.int Lt_01B7
.int Lt_01B7
.int 128
.int 16
.int 1
.int 8
.int 0
.int 7

.section .text
.balign 16
HFIELDDECLWITHEXPLICITDIM:
.type HFIELDDECLWITHEXPLICITDIM, @function
push ebp
mov ebp, esp
.Lt_00F1:
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 375
jne .Lt_00F4
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HTYPEMULTELEMENTDECL
add esp, 12
jmp .Lt_00F3
.Lt_00F4:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HTYPEELEMENTDECL
add esp, 12
.Lt_00F3:
.Lt_00F2:
mov esp, ebp
pop ebp
ret
.size HFIELDDECLWITHEXPLICITDIM, .-HFIELDDECLWITHEXPLICITDIM
.balign 16
HTYPEADD:
.type HTYPEADD, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
mov dword ptr [ebp-4], 0
.Lt_00F9:
push 0
push 0
push dword ptr [ebp+28]
push dword ptr [ebp+24]
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 0
push 0
call SYMBSTRUCTBEGIN
add esp, 40
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_00FC
push 0
push 1
push 0
push dword ptr [ebp+12]
push 4
call ERRREPORTEX
add esp, 20
push 0
push 0
push 0
push dword ptr [ebp+24]
push dword ptr [ebp+20]
push 0
call SYMBUNIQUELABEL
push eax
push dword ptr [ebp+8]
push 0
push 0
call SYMBSTRUCTBEGIN
add esp, 40
mov dword ptr [ebp-8], eax
.Lt_00FC:
.Lt_00FB:
push 0
call CCOMMENT
add esp, 4
cmp dword ptr [ENV+144], 0
je .Lt_00FE
cmp dword ptr [ENV+828], 0
jne .Lt_0100
mov eax, dword ptr [LEX+839664]
push dword ptr [eax+49376]
call ASTNEWLIT
add esp, 4
push eax
call ASTADD
add esp, 4
mov eax, dword ptr [LEX+839664]
lea ebx, [eax+49376]
push ebx
call DZSTRRESET
add esp, 4
.Lt_0100:
.Lt_00FF:
.Lt_00FE:
.Lt_00FD:
push 0
call CSTMTSEPARATOR
add esp, 4
test eax, eax
jne .Lt_0102
push 0
push 0
push 17
call ERRREPORT
add esp, 12
push 0
push 0
push -1
push -1
call HSKIPUNTIL
add esp, 16
.Lt_0102:
.Lt_0101:
push dword ptr [ebp-8]
call HTYPEBODY
add esp, 4
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+8]
and ebx, 262144
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
push ebx
push dword ptr [ebp-8]
call SYMBSTRUCTEND
add esp, 8
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 340
je .Lt_0104
push 0
push 0
push 19
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_0103
.Lt_0104:
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp+20], 0
je .Lt_0105
mov dword ptr [ebp-12], 337
jmp .Lt_01B8
.Lt_0105:
mov dword ptr [ebp-12], 336
.Lt_01B8:
mov eax, dword ptr [ebp-12]
cmp dword ptr [ebp-16], eax
je .Lt_0108
push 0
push 0
push 19
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_0107
.Lt_0108:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0107:
.Lt_0103:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_00FA:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HTYPEADD, .-HTYPEADD
.balign 16
CFIELDALIGNMENTATTRIBUTE:
.type CFIELDALIGNMENTATTRIBUTE, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
mov dword ptr [ebp-4], 0
.Lt_0109:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 489
je .Lt_010C
mov dword ptr [ebp-4], 0
jmp .Lt_010A
.Lt_010C:
.Lt_010B:
push 0
call LEXSKIPTOKEN
add esp, 4
call CASSIGNTOKEN
test eax, eax
jne .Lt_010E
push 0
push 0
push 17
call ERRREPORT
add esp, 12
.Lt_010E:
.Lt_010D:
call CEXPRESSION
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0110
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
mov dword ptr [ebp-8], eax
.Lt_0110:
.Lt_010F:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax]
cmp ebx, 16
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_0112
push 0
push 0
push 11
call ERRREPORT
add esp, 12
push dword ptr [ebp-8]
call ASTDELTREE
add esp, 4
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-8], eax
.Lt_0112:
.Lt_0111:
push dword ptr [ebp-8]
call ASTCONSTFLUSHTOINT
add esp, 4
mov dword ptr [ebp-16], eax
mov dword ptr [ebp-12], edx
cmp dword ptr [ebp-12], 0
jg .Lt_0114
jl .Lt_01BC
cmp dword ptr [ebp-16], 0
jae .Lt_0114
.Lt_01BC:
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
jmp .Lt_0113
.Lt_0114:
mov edx, dword ptr [ENV+236]
mov eax, edx
sar eax, 31
cmp dword ptr [ebp-12], eax
jl .Lt_0115
jg .Lt_01BD
cmp dword ptr [ebp-16], edx
jbe .Lt_0115
.Lt_01BD:
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
jmp .Lt_0113
.Lt_0115:
cmp dword ptr [ebp-12], 0
jne .Lt_0116
cmp dword ptr [ebp-16], 3
jne .Lt_0116
.Lt_01BE:
mov dword ptr [ebp-16], 2
mov dword ptr [ebp-12], 0
.Lt_0116:
.Lt_0113:
mov edx, dword ptr [ebp-16]
mov dword ptr [ebp-4], edx
.Lt_010A:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CFIELDALIGNMENTATTRIBUTE, .-CFIELDALIGNMENTATTRIBUTE
.balign 16
HTYPEBODY:
.type HTYPEBODY, @function
push ebp
mov ebp, esp
sub esp, 28
push ebx
.Lt_0117:
mov dword ptr [ebp-8], 0
.Lt_0119:
push 0
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-16], eax
jmp .Lt_011D
.Lt_011F:
mov eax, dword ptr [ebp+8]
movsx ebx, word ptr [eax+112]
and ebx, 1
test ebx, ebx
je .Lt_0121
push 0
push 0
push 17
call ERRREPORT
add esp, 12
.Lt_0121:
.Lt_0120:
push 0
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 377
jne .Lt_0124
.Lt_0125:
mov dword ptr [ebp-8], 0
jmp .Lt_0122
.Lt_0124:
cmp dword ptr [ebp-20], 378
jne .Lt_0126
.Lt_0127:
mov dword ptr [ebp-8], 67108864
jmp .Lt_0122
.Lt_0126:
cmp dword ptr [ebp-20], 379
jne .Lt_0128
.Lt_0129:
mov dword ptr [ebp-8], 134217728
.Lt_0128:
.Lt_0122:
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 258
je .Lt_012B
push 0
push 0
push 202
call ERRREPORT
add esp, 12
.Lt_012B:
.Lt_012A:
jmp .Lt_011C
.Lt_012C:
push 0
call CCOMMENT
add esp, 4
jmp .Lt_011C
.Lt_012D:
push 0
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_011B
jmp .Lt_011C
.Lt_012E:
jmp .Lt_011A
jmp .Lt_011C
.Lt_012F:
push 0
push 1
call LEXGETLOOKAHEAD
add esp, 8
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 375
je .Lt_0133
.Lt_0134:
cmp dword ptr [ebp-20], 40
je .Lt_0133
.Lt_0135:
cmp dword ptr [ebp-20], 258
jne .Lt_0132
.Lt_0133:
push dword ptr [ebp-8]
push dword ptr [ebp+8]
push 308
call HTYPEELEMENTDECL
add esp, 12
jmp .Lt_0130
.Lt_0132:
jmp .Lt_011A
.Lt_0136:
.Lt_0130:
jmp .Lt_011C
.Lt_0137:
push 0
push 1
call LEXGETLOOKAHEAD
add esp, 8
mov dword ptr [ebp-20], eax
jmp .Lt_0139
.Lt_013B:
.Lt_013C:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 337
sete al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp+8]
movsx ebx, word ptr [eax+112]
and ebx, 1
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp-4]
cmp ebx, eax
jne .Lt_013E
push 0
push 0
push 17
call ERRREPORT
add esp, 12
not dword ptr [ebp-4]
.Lt_013E:
.Lt_013D:
push 0
call LEXSKIPTOKEN
add esp, 4
call CFIELDALIGNMENTATTRIBUTE
mov dword ptr [ebp-24], eax
cmp dword ptr [ebp-24], 0
jne .Lt_0140
mov eax, dword ptr [ebp+8]
movzx ebx, byte ptr [eax+115]
mov dword ptr [ebp-24], ebx
.Lt_0140:
.Lt_013F:
push 0
push dword ptr [ebp-24]
push dword ptr [ebp-4]
push 0
call SYMBUNIQUEID
push eax
push dword ptr [ebp+8]
call HTYPEADD
add esp, 24
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-4], 0
je .Lt_0142
mov eax, dword ptr [ebp-12]
movsx ebx, word ptr [eax+112]
or ebx, 1
mov eax, dword ptr [ebp-12]
mov word ptr [eax+112], bx
mov ebx, dword ptr [ebp+8]
movsx eax, word ptr [ebx+112]
or eax, 8192
mov ebx, dword ptr [ebp+8]
mov word ptr [ebx+112], ax
.Lt_0142:
.Lt_0141:
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-28], ebx
.Lt_0143:
cmp dword ptr [ebp-28], 0
je .Lt_0144
mov ebx, dword ptr [ebp-28]
mov eax, dword ptr [ebx+4]
or eax, dword ptr [ebp-8]
mov ebx, eax
mov eax, dword ptr [ebp-28]
mov dword ptr [eax+4], ebx
mov ebx, dword ptr [ebp-28]
mov eax, dword ptr [ebx+160]
mov dword ptr [ebp-28], eax
jmp .Lt_0143
.Lt_0144:
push dword ptr [ebp-12]
push dword ptr [ebp+8]
call SYMBINSERTINNERUDT
add esp, 8
jmp .Lt_0138
.Lt_0145:
push 0
push 2
call LEXGETLOOKAHEADCLASS
add esp, 8
cmp eax, 3
je .Lt_0147
jmp .Lt_013C
.Lt_0147:
.Lt_0146:
push dword ptr [ebp-8]
push dword ptr [ebp+8]
push 308
call HTYPEELEMENTDECL
add esp, 12
jmp .Lt_0138
.Lt_0148:
push dword ptr [ebp-8]
push dword ptr [ebp+8]
push 308
call HTYPEELEMENTDECL
add esp, 12
jmp .Lt_0138
.Lt_0139:
mov eax, dword ptr [ebp-20]
add eax, 4294967040
cmp eax, 233
ja .Lt_0148
mov eax, dword ptr [ebp-20]
jmp dword ptr [.LT_0149+eax*4-1024]
.LT_0149:
.int .Lt_013B
.int .Lt_013B
.int .Lt_0145
.int .Lt_013B
.int .Lt_013B
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_0148
.int .Lt_013B
.Lt_0138:
jmp .Lt_011C
.Lt_014A:
push dword ptr [ebp-8]
push dword ptr [ebp+8]
push 308
call HTYPEMULTELEMENTDECL
add esp, 12
jmp .Lt_011C
.Lt_014B:
push dword ptr [ebp-8]
push dword ptr [ebp+8]
call HTYPEPROTODECL
add esp, 8
jmp .Lt_011C
.Lt_014C:
push dword ptr [ebp-8]
push 0
call LEXGETTOKEN
add esp, 4
push eax
push dword ptr [ebp+8]
call HTYPEENUMDECL
add esp, 12
jmp .Lt_011C
.Lt_014D:
push dword ptr [ebp-8]
push dword ptr [ebp+8]
push 308
call HFIELDDECLWITHEXPLICITDIM
add esp, 12
jmp .Lt_011C
.Lt_014E:
mov eax, dword ptr [ebp-8]
or eax, 4
push eax
push dword ptr [ebp+8]
push 310
call HFIELDDECLWITHEXPLICITDIM
add esp, 12
jmp .Lt_011C
.Lt_014F:
push 0
call LEXSKIPTOKEN
add esp, 4
push dword ptr [ebp-8]
push dword ptr [ebp+8]
call HTYPESTATICVARDECL
add esp, 8
jmp .Lt_011C
.Lt_0150:
push dword ptr [ebp-8]
push dword ptr [ebp+8]
push 308
call HTYPEELEMENTDECL
add esp, 12
jmp .Lt_011C
.Lt_011D:
mov eax, dword ptr [ebp-16]
add eax, 4294967040
cmp eax, 123
ja .Lt_0150
mov eax, dword ptr [ebp-16]
jmp dword ptr [.LT_0151+eax*4-1024]
.LT_0151:
.int .Lt_012E
.int .Lt_012D
.int .Lt_0150
.int .Lt_012C
.int .Lt_012C
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_014F
.int .Lt_014D
.int .Lt_0150
.int .Lt_014E
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_014B
.int .Lt_014C
.int .Lt_0137
.int .Lt_0137
.int .Lt_014C
.int .Lt_0150
.int .Lt_012F
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_0150
.int .Lt_014A
.int .Lt_0150
.int .Lt_011F
.int .Lt_011F
.int .Lt_011F
.Lt_011C:
push 0
call CCOMMENT
add esp, 4
cmp dword ptr [ENV+144], 0
je .Lt_0153
cmp dword ptr [ENV+828], 0
jne .Lt_0155
mov eax, dword ptr [LEX+839664]
push dword ptr [eax+49376]
call ASTNEWLIT
add esp, 4
push eax
call ASTADD
add esp, 4
mov eax, dword ptr [LEX+839664]
lea ebx, [eax+49376]
push ebx
call DZSTRRESET
add esp, 4
.Lt_0155:
.Lt_0154:
.Lt_0153:
.Lt_0152:
push 0
call CSTMTSEPARATOR
add esp, 4
test eax, eax
jne .Lt_0157
push 0
push 0
push 3
call ERRREPORT
add esp, 12
push 0
push 0
push -1
push -1
call HSKIPUNTIL
add esp, 16
.Lt_0157:
.Lt_0156:
.Lt_011B:
jmp .Lt_0119
.Lt_011A:
push dword ptr [ebp+8]
call SYMBUDTGETFIRSTFIELD
add esp, 4
test eax, eax
jne .Lt_0159
push 0
push 0
push 255
call ERRREPORT
add esp, 12
.Lt_0159:
.Lt_0158:
.Lt_0118:
pop ebx
mov esp, ebp
pop ebp
ret
.size HTYPEBODY, .-HTYPEBODY
.balign 16
HDISALLOWNESTEDCLASSES:
.type HDISALLOWNESTEDCLASSES, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_015A:
cmp dword ptr [PARSER+92], 0
jbe .Lt_015D
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-4], ebx
.Lt_015E:
cmp dword ptr [ebp-4], 0
je .Lt_015F
mov ebx, dword ptr [ebp-4]
cmp dword ptr [ebx], 3
jne .Lt_0161
push 0
push 1
push 0
mov ebx, dword ptr [ebp-4]
push dword ptr [ebx+12]
push 262
call ERRREPORTEX
add esp, 20
jmp .Lt_0160
.Lt_0161:
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebx]
cmp eax, 1
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp-4]
mov ecx, dword ptr [ebx+4]
and ecx, 16
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
and eax, ecx
je .Lt_0162
push 0
push 1
push 0
mov ecx, dword ptr [ebp-4]
push dword ptr [ecx+12]
push 263
call ERRREPORTEX
add esp, 20
.Lt_0162:
.Lt_0160:
mov ecx, dword ptr [ebp-4]
mov eax, dword ptr [ecx+160]
mov dword ptr [ebp-4], eax
jmp .Lt_015E
.Lt_015F:
.Lt_015D:
.Lt_015C:
.Lt_015B:
pop ebx
mov esp, ebp
pop ebp
ret
.size HDISALLOWNESTEDCLASSES, .-HDISALLOWNESTEDCLASSES
.balign 16
HPATCHBYVALPARAMSTOSELF:
.type HPATCHBYVALPARAMSTOSELF, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_0197:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-4], ebx
.Lt_0199:
cmp dword ptr [ebp-4], 0
je .Lt_019A
mov ebx, dword ptr [ebp-4]
cmp dword ptr [ebx], 3
jne .Lt_019C
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebx+72]
mov dword ptr [ebp-8], eax
.Lt_019D:
cmp dword ptr [ebp-8], 0
je .Lt_019E
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+24]
and ebx, 511
cmp ebx, 18
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp-8]
mov ecx, dword ptr [eax+28]
cmp ecx, dword ptr [ebp+8]
sete al
shr eax, 1
sbb eax, eax
and ebx, eax
je .Lt_01A0
mov eax, dword ptr [ebp-8]
cmp dword ptr [eax+52], 1
jne .Lt_01A2
push dword ptr [ebp-8]
call SYMBRECALCLEN
add esp, 4
.Lt_01A2:
.Lt_01A1:
.Lt_01A0:
.Lt_019F:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+160]
mov dword ptr [ebp-8], ebx
jmp .Lt_019D
.Lt_019E:
.Lt_019C:
.Lt_019B:
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebx+160]
mov dword ptr [ebp-4], eax
jmp .Lt_0199
.Lt_019A:
.Lt_0198:
pop ebx
mov esp, ebp
pop ebp
ret
.size HPATCHBYVALPARAMSTOSELF, .-HPATCHBYVALPARAMSTOSELF
.balign 16
HPATCHBYVALRESULTTOSELF:
.type HPATCHBYVALRESULTTOSELF, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_01A3:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-4], ebx
.Lt_01A5:
cmp dword ptr [ebp-4], 0
je .Lt_01A6
mov ebx, dword ptr [ebp-4]
cmp dword ptr [ebx], 3
jne .Lt_01A8
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebx+24]
and eax, 511
cmp eax, 18
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp-4]
mov ecx, dword ptr [ebx+28]
cmp ecx, dword ptr [ebp+8]
sete bl
shr ebx, 1
sbb ebx, ebx
and eax, ebx
mov ebx, dword ptr [ebp-4]
mov ecx, dword ptr [ebx+4]
and ecx, 33554432
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
not ecx
and eax, ecx
je .Lt_01AA
push dword ptr [ebp-4]
call SYMBPROCRECALCREALTYPE
add esp, 4
.Lt_01AA:
.Lt_01A9:
.Lt_01A8:
.Lt_01A7:
mov ecx, dword ptr [ebp-4]
mov eax, dword ptr [ecx+160]
mov dword ptr [ebp-4], eax
jmp .Lt_01A5
.Lt_01A6:
.Lt_01A4:
pop ebx
mov esp, ebp
pop ebp
ret
.size HPATCHBYVALRESULTTOSELF, .-HPATCHBYVALRESULTTOSELF
	#FreeBASIC-1.01.0-source/src/compiler/parser-decl-struct.bas' compilation took 0.03657488932367414 secs

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
.int fb_ctor__parserzdeclzstruct
