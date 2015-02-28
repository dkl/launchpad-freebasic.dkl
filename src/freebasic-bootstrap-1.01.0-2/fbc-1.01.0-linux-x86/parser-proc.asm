	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/parser-proc.bas' compilation started at 14:16:36 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl CALIASATTRIBUTE
CALIASATTRIBUTE:
.type CALIASATTRIBUTE, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_0060:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 383
jne .Lt_0063
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXGETCLASS
add esp, 4
cmp eax, 4
jne .Lt_0065
push 0
push 0
call LEXGETTEXT
push eax
push 129
push offset Lt_0068
call fb_StrAssign
add esp, 20
push 0
call LEXSKIPTOKEN
add esp, 4
push 129
push offset Lt_0068
call fb_StrLen
add esp, 8
test eax, eax
jle .Lt_0067
mov eax, offset Lt_0068
mov dword ptr [ebp-4], eax
jmp .Lt_0066
.Lt_0067:
push 0
push 0
push 303
call ERRREPORT
add esp, 12
.Lt_0066:
jmp .Lt_0064
.Lt_0065:
push 0
push 0
push 17
call ERRREPORT
add esp, 12
.Lt_0064:
.Lt_0063:
.Lt_0062:
.Lt_0061:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size CALIASATTRIBUTE, .-CALIASATTRIBUTE

.section .bss
.balign 4
	.lcomm	Lt_0068,129

.section .text
.balign 16

.globl CLIBATTRIBUTE
CLIBATTRIBUTE:
.type CLIBATTRIBUTE, @function
push ebp
mov ebp, esp
sub esp, 4
.Lt_0069:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 384
jne .Lt_006C
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXGETCLASS
add esp, 4
cmp eax, 4
jne .Lt_006E
call LEXGETTEXT
mov dword ptr [ebp-4], eax
push 0
push dword ptr [ebp-4]
call fb_StrLen
add esp, 8
test eax, eax
jle .Lt_0070
push dword ptr [ebp-4]
call FBADDLIB
add esp, 4
jmp .Lt_006F
.Lt_0070:
push 0
push 0
push 304
call ERRREPORT
add esp, 12
.Lt_006F:
push 0
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_006D
.Lt_006E:
push 0
push 0
push 17
call ERRREPORT
add esp, 12
.Lt_006D:
.Lt_006C:
.Lt_006B:
.Lt_006A:
mov esp, ebp
pop ebp
ret
.size CLIBATTRIBUTE, .-CLIBATTRIBUTE
.balign 16

.globl CMETHODATTRIBUTES
CMETHODATTRIBUTES:
.type CMETHODATTRIBUTES, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_0071:
push 307
call HMATCH
add esp, 4
test eax, eax
je .Lt_0074
mov eax, dword ptr [ebp+12]
or dword ptr [eax], 2
jmp .Lt_0072
.Lt_0074:
.Lt_0073:
push 335
call HMATCH
add esp, 4
test eax, eax
je .Lt_0076
mov eax, dword ptr [ebp+12]
or dword ptr [eax], 1048576
.Lt_0076:
.Lt_0075:
push 0
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 355
jne .Lt_0079
.Lt_007A:
mov eax, dword ptr [ebp+12]
or dword ptr [eax], 1610612736
cmp dword ptr [ebp+8], 0
je .Lt_007C
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+8]
and ebx, 4194304
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_007E
push 0
push 0
push 221
call ERRREPORT
add esp, 12
mov ebx, dword ptr [ebp+12]
and dword ptr [ebx], -1610612737
.Lt_007E:
.Lt_007D:
.Lt_007C:
.Lt_007B:
push 0
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_0077
.Lt_0079:
cmp dword ptr [ebp-4], 354
jne .Lt_007F
.Lt_0080:
mov ebx, dword ptr [ebp+12]
or dword ptr [ebx], 536870912
cmp dword ptr [ebp+8], 0
je .Lt_0082
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+8]
and eax, 4194304
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_0084
push 0
push 0
push 220
call ERRREPORT
add esp, 12
mov eax, dword ptr [ebp+12]
and dword ptr [eax], -536870913
.Lt_0084:
.Lt_0083:
.Lt_0082:
.Lt_0081:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_007F:
.Lt_0077:
.Lt_0072:
pop ebx
mov esp, ebp
pop ebp
ret
.size CMETHODATTRIBUTES, .-CMETHODATTRIBUTES
.balign 16

.globl CPROCRETTYPE
CPROCRETTYPE:
.type CPROCRETTYPE, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
.Lt_00E9:
push 0
call LEXSKIPTOKEN
add esp, 4
mov dword ptr [ebp-4], 1
mov eax, dword ptr [ebp+8]
and eax, 33554432
je .Lt_00EC
cmp dword ptr [ebp+16], 0
je .Lt_00EE
or dword ptr [ebp-4], 2
.Lt_00EE:
.Lt_00ED:
and dword ptr [ebp-4], -2
.Lt_00EC:
.Lt_00EB:
push dword ptr [ebp-4]
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
lea eax, [ebp-12]
push eax
push dword ptr [ebp+24]
push dword ptr [ebp+20]
call CSYMBOLTYPE
add esp, 16
test eax, eax
jne .Lt_00F1
push 0
push 0
push 14
call ERRREPORT
add esp, 12
mov eax, dword ptr [ebp+20]
mov dword ptr [eax], 7
mov eax, dword ptr [ebp+24]
mov dword ptr [eax], 0
jmp .Lt_00F0
.Lt_00F1:
mov eax, dword ptr [ebp+20]
mov ebx, dword ptr [eax]
and ebx, 511
mov dword ptr [ebp-16], ebx
cmp dword ptr [ebp-16], 17
je .Lt_00F5
.Lt_00F6:
cmp dword ptr [ebp-16], 3
je .Lt_00F5
.Lt_00F7:
cmp dword ptr [ebp-16], 6
jne .Lt_00F4
.Lt_00F5:
mov ebx, dword ptr [ebp+8]
and ebx, 33554432
test ebx, ebx
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+20]
mov ecx, dword ptr [eax]
and ecx, 511
cmp ecx, 17
sete cl
shr ecx, 1
sbb ecx, ecx
or ebx, ecx
je .Lt_00F9
push 0
push 0
push 54
call ERRREPORT
add esp, 12
mov ecx, dword ptr [ebp+20]
mov dword ptr [ecx], 16
mov ecx, dword ptr [ebp+24]
mov dword ptr [ecx], 0
.Lt_00F9:
.Lt_00F8:
jmp .Lt_00F2
.Lt_00F4:
cmp dword ptr [ebp-16], 0
jne .Lt_00FA
.Lt_00FB:
push 0
push 0
push 24
call ERRREPORT
add esp, 12
mov ecx, dword ptr [ebp+20]
mov ebx, dword ptr [ecx]
and ebx, 31
mov ecx, dword ptr [ebp+20]
mov eax, dword ptr [ecx]
and eax, 480
add eax, 32
or ebx, eax
mov eax, dword ptr [ebp+20]
mov ecx, dword ptr [eax]
and ecx, 261632
sal ecx, 1
or ebx, ecx
mov ecx, dword ptr [ebp+20]
mov dword ptr [ecx], ebx
mov ebx, dword ptr [ebp+24]
mov dword ptr [ebx], 0
.Lt_00FA:
.Lt_00F2:
mov ebx, dword ptr [ebp+8]
and ebx, 33554432
test ebx, ebx
jne .Lt_00FD
mov ebx, dword ptr [ebp+24]
push dword ptr [ebx]
mov ebx, dword ptr [ebp+20]
push dword ptr [ebx]
call HCOMPLAINIFABSTRACTCLASS
add esp, 8
.Lt_00FD:
.Lt_00FC:
.Lt_00F0:
mov ebx, dword ptr [ebp+20]
push dword ptr [ebx]
call CPROCRETURNMETHOD
add esp, 4
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx+92], eax
.Lt_00EA:
pop ebx
mov esp, ebp
pop ebp
ret
.size CPROCRETTYPE, .-CPROCRETTYPE
.balign 16

.globl CPROCRETURNMETHOD
CPROCRETURNMETHOD:
.type CPROCRETURNMETHOD, @function
push ebp
mov ebp, esp
sub esp, 20
mov dword ptr [ebp-4], 0
.Lt_0100:
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 2
mov eax, dword ptr [ebp+8]
and eax, 480
je .Lt_0102
mov dword ptr [ebp-20], 22
jmp .Lt_0113
.Lt_0102:
mov eax, dword ptr [ebp+8]
and eax, 31
mov dword ptr [ebp-20], eax
.Lt_0113:
mov eax, dword ptr [ebp-20]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax], 1
je .Lt_0105
lea eax, [ebp-16]
push eax
call fb_StrDelete
add esp, 4
jmp .Lt_0101
.Lt_0105:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 343
jne .Lt_0107
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
je .Lt_0109
push 0
push 0
push 6
call ERRREPORT
add esp, 12
jmp .Lt_0108
.Lt_0109:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0108:
push 0
call LEXGETCLASS
add esp, 4
cmp eax, 4
je .Lt_010B
push 0
push 0
push 17
call ERRREPORT
add esp, 12
jmp .Lt_010A
.Lt_010B:
push 0
push -1
push 0
call LEXGETTEXT
push eax
call fb_StrAllocTempDescZ
add esp, 4
push eax
call fb_StrUcase2
add esp, 8
push eax
call fb_TRIM
add esp, 4
push eax
push -1
lea eax, [ebp-16]
push eax
call fb_StrAssign
add esp, 20
push 4
push offset Lt_010C
push -1
lea eax, [ebp-16]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_010E
mov dword ptr [ebp-4], 1
jmp .Lt_010D
.Lt_010E:
push 4
push offset Lt_0110
push -1
lea eax, [ebp-16]
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_010F
mov dword ptr [ebp-4], 0
.Lt_010F:
.Lt_010D:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_010A:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_0112
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
jmp .Lt_0111
.Lt_0112:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0111:
.Lt_0107:
.Lt_0106:
lea eax, [ebp-16]
push eax
call fb_StrDelete
add esp, 4
.Lt_0101:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size CPROCRETURNMETHOD, .-CPROCRETURNMETHOD
.balign 16

.globl CPROCCALLINGCONV
CPROCCALLINGCONV:
.type CPROCCALLINGCONV, @function
push ebp
mov ebp, esp
sub esp, 12
mov dword ptr [ebp-4], 0
.Lt_0114:
cmp dword ptr [ebp+8], -1
jne .Lt_0117
mov eax, dword ptr [ENV+216]
mov dword ptr [ebp+8], eax
.Lt_0117:
.Lt_0116:
push 0
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-8], eax
jmp .Lt_0119
.Lt_011B:
mov dword ptr [ebp-4], 3
push 0
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_0118
.Lt_011C:
mov eax, dword ptr [ENV+220]
mov dword ptr [ebp-4], eax
push 0
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_0118
.Lt_011D:
mov dword ptr [ebp-4], 4
push 0
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_0118
.Lt_011E:
mov eax, dword ptr [PARSER+96]
mov dword ptr [ebp-12], eax
jmp .Lt_0120
.Lt_0122:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
jmp .Lt_011F
.Lt_0123:
mov dword ptr [ebp-4], 3
jmp .Lt_011F
.Lt_0124:
mov eax, dword ptr [ENV+220]
mov dword ptr [ebp-4], eax
jmp .Lt_011F
.Lt_0125:
mov dword ptr [ebp-4], 2
jmp .Lt_011F
.Lt_0120:
cmp dword ptr [ebp-12], 4
ja .Lt_011F
mov eax, dword ptr [ebp-12]
jmp dword ptr [.LT_0126+eax*4]
.LT_0126:
.int .Lt_0122
.int .Lt_0123
.int .Lt_0124
.int .Lt_0125
.int .Lt_0123
.Lt_011F:
jmp .Lt_0118
.Lt_0119:
mov eax, dword ptr [ebp-8]
add eax, 4294966916
cmp eax, 2
ja .Lt_011E
mov eax, dword ptr [ebp-8]
jmp dword ptr [.LT_0127+eax*4-1520]
.LT_0127:
.int .Lt_011D
.int .Lt_011B
.int .Lt_011C
.Lt_0118:
.Lt_0115:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size CPROCCALLINGCONV, .-CPROCCALLINGCONV
.balign 16

.globl CBYREFATTRIBUTE
CBYREFATTRIBUTE:
.type CBYREFATTRIBUTE, @function
push ebp
mov ebp, esp
.Lt_0136:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 320
jne .Lt_0139
cmp dword ptr [ebp+12], 0
jne .Lt_013B
push 0
push 0
push 17
call ERRREPORT
add esp, 12
.Lt_013B:
.Lt_013A:
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [ebp+8]
or dword ptr [eax], 33554432
.Lt_0139:
.Lt_0138:
.Lt_0137:
mov esp, ebp
pop ebp
ret
.size CBYREFATTRIBUTE, .-CBYREFATTRIBUTE
.balign 16

.globl CPROCHEADER
CPROCHEADER:
.type CPROCHEADER, @function
push ebp
mov ebp, esp
sub esp, 72
push ebx
mov dword ptr [ebp-4], 0
.Lt_0212:
mov eax, dword ptr [ebp+12]
mov dword ptr [eax], 0
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-60], 0
mov dword ptr [ebp-32], -2147483648
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-48], 0
mov dword ptr [ebp-64], 0
cmp dword ptr [ebp+20], 347
je .Lt_0216
.Lt_0217:
cmp dword ptr [ebp+20], 348
jne .Lt_0215
.Lt_0216:
mov eax, dword ptr [ebp+8]
or eax, 2048
mov ebx, eax
mov dword ptr [ebp+8], ebx
cmp dword ptr [ebp+20], 347
jne .Lt_0219
mov ebx, dword ptr [ebp+8]
or ebx, 5120
mov eax, ebx
mov dword ptr [ebp+8], eax
jmp .Lt_0218
.Lt_0219:
mov eax, dword ptr [ebp+8]
or eax, 8192
mov ebx, eax
mov dword ptr [ebp+8], ebx
.Lt_0218:
jmp .Lt_0214
.Lt_0215:
cmp dword ptr [ebp+20], 349
jne .Lt_021A
.Lt_021B:
mov ebx, dword ptr [ebp+8]
or ebx, 17408
mov eax, ebx
mov dword ptr [ebp+8], eax
jmp .Lt_0214
.Lt_021A:
cmp dword ptr [ebp+20], 350
jne .Lt_021C
.Lt_021D:
mov eax, dword ptr [ebp+8]
or eax, 35840
mov ebx, eax
mov dword ptr [ebp+8], ebx
.Lt_021C:
.Lt_0214:
mov ebx, dword ptr [ebp+16]
and ebx, 2
je .Lt_021F
mov dword ptr [ebp-20], 0
jmp .Lt_021E
.Lt_021F:
mov dword ptr [ebp-68], 22
cmp dword ptr [ebp+20], 349
jne .Lt_0221
.Lt_0222:
or dword ptr [ebp-68], 8
jmp .Lt_0220
.Lt_0221:
cmp dword ptr [ebp+20], 347
je .Lt_0224
.Lt_0225:
cmp dword ptr [ebp+20], 348
jne .Lt_0223
.Lt_0224:
or dword ptr [ebp-68], 1
.Lt_0223:
.Lt_0220:
push dword ptr [ebp-68]
call CPARENTID
add esp, 4
mov dword ptr [ebp-20], eax
.Lt_021E:
cmp dword ptr [ebp-20], 0
je .Lt_0227
mov eax, dword ptr [ebp+16]
and eax, 1
je .Lt_0229
push 0
push 0
push 157
call ERRREPORT
add esp, 12
mov dword ptr [ebp-20], 0
jmp .Lt_0228
.Lt_0229:
mov dword ptr [ebp-36], -1
.Lt_0228:
jmp .Lt_0226
.Lt_0227:
lea eax, [SYMB+98352]
cmp dword ptr [SYMB+98516], eax
je .Lt_022B
mov eax, dword ptr [SYMB+98516]
mov dword ptr [ebp-20], eax
.Lt_022B:
.Lt_022A:
.Lt_0226:
cmp dword ptr [ebp-20], 0
je .Lt_022D
mov eax, dword ptr [ebp-20]
mov ebx, dword ptr [eax]
cmp ebx, 10
sete bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-40], ebx
.Lt_022D:
.Lt_022C:
cmp dword ptr [ebp-40], 0
je .Lt_022F
mov ebx, dword ptr [ebp+16]
and ebx, 1
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+8]
and eax, 2
test eax, eax
sete al
shr eax, 1
sbb eax, eax
and ebx, eax
je .Lt_0231
mov eax, dword ptr [ebp+8]
or eax, 2048
mov ebx, eax
mov dword ptr [ebp+8], ebx
.Lt_0231:
.Lt_0230:
jmp .Lt_022E
.Lt_022F:
cmp dword ptr [ebp+20], 347
je .Lt_0234
.Lt_0235:
cmp dword ptr [ebp+20], 348
je .Lt_0234
.Lt_0236:
cmp dword ptr [ebp+20], 350
jne .Lt_0233
.Lt_0234:
cmp dword ptr [ebp-20], 0
jne .Lt_0238
push 0
push 0
push 159
call ERRREPORT
add esp, 12
jmp .Lt_0237
.Lt_0238:
mov ebx, dword ptr [ebp-20]
mov eax, dword ptr [ebx]
cmp eax, 10
sete al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_0239
push 0
push 0
push 167
call ERRREPORT
add esp, 12
.Lt_0239:
.Lt_0237:
mov eax, dword ptr [ebp+16]
and eax, 1
je .Lt_023B
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_023A
.Lt_023B:
push 0
push -1
push dword ptr [ebp+20]
call HSKIPCOMPOUND
add esp, 12
.Lt_023A:
jmp .Lt_0213
.Lt_0233:
.Lt_0232:
push 257
push 2
lea eax, [ebp+8]
push eax
call HCHECKATTRIB
add esp, 12
push 258
push 1048576
lea eax, [ebp+8]
push eax
call HCHECKATTRIB
add esp, 12
push 259
push 1073741824
lea eax, [ebp+8]
push eax
call HCHECKATTRIB
add esp, 12
push 260
push 536870912
lea eax, [ebp+8]
push eax
call HCHECKATTRIB
add esp, 12
.Lt_022E:
cmp dword ptr [ebp+20], 347
je .Lt_023E
.Lt_023F:
cmp dword ptr [ebp+20], 348
jne .Lt_023D
.Lt_023E:
push 0
call SYMBPREADDPROC
add esp, 4
mov dword ptr [ebp-16], eax
jmp .Lt_023C
.Lt_023D:
cmp dword ptr [ebp+20], 349
jne .Lt_0240
.Lt_0241:
push -1
call COPERATOR
add esp, 4
mov dword ptr [ebp-52], eax
cmp dword ptr [ebp-52], -1
je .Lt_0244
.Lt_0245:
cmp dword ptr [ebp-52], 36
je .Lt_0244
.Lt_0246:
cmp dword ptr [ebp-52], 9
je .Lt_0244
.Lt_0247:
cmp dword ptr [ebp-52], 37
je .Lt_0244
.Lt_0248:
cmp dword ptr [ebp-52], 10
jne .Lt_0243
.Lt_0244:
push 0
push 0
push 156
call ERRREPORT
add esp, 12
mov dword ptr [ebp-52], 28
.Lt_0243:
.Lt_0242:
mov eax, dword ptr [ebp-52]
sal eax, 4
mov ebx, dword ptr [AST_OPTB+eax+4]
and ebx, 1
test ebx, ebx
je .Lt_024A
cmp dword ptr [ebp-40], 0
jne .Lt_024C
push 0
push -1
push 151
call ERRREPORT
add esp, 12
mov dword ptr [ebp-52], 28
.Lt_024C:
.Lt_024B:
jmp .Lt_0249
.Lt_024A:
cmp dword ptr [ebp-40], 0
je .Lt_024E
push offset Lt_024F
push -1
push 152
call ERRREPORT
add esp, 12
.Lt_024E:
.Lt_024D:
.Lt_0249:
mov ebx, dword ptr [ebp-52]
mov dword ptr [ebp-72], ebx
jmp .Lt_0251
.Lt_0253:
mov ebx, dword ptr [ebp+8]
and ebx, 1610612736
je .Lt_0255
push 0
push -1
push 232
call ERRREPORT
add esp, 12
mov ebx, dword ptr [ebp+8]
and ebx, -1610612737
mov eax, ebx
mov dword ptr [ebp+8], eax
.Lt_0255:
.Lt_0254:
mov eax, dword ptr [ebp+8]
and eax, 1048576
je .Lt_0257
push 0
push -1
push 233
call ERRREPORT
add esp, 12
mov eax, dword ptr [ebp+8]
and eax, -1048577
mov ebx, eax
mov dword ptr [ebp+8], ebx
.Lt_0257:
.Lt_0256:
mov ebx, dword ptr [ebp+8]
or ebx, 2
mov eax, ebx
mov dword ptr [ebp+8], eax
mov eax, dword ptr [ebp+8]
and eax, -2049
mov ebx, eax
mov dword ptr [ebp+8], ebx
jmp .Lt_0250
.Lt_0258:
cmp dword ptr [ebp-40], 0
je .Lt_025A
mov ebx, dword ptr [ebp+8]
and ebx, 2
je .Lt_025C
push 0
push -1
push 231
call ERRREPORT
add esp, 12
mov ebx, dword ptr [ebp+8]
and ebx, -3
mov eax, ebx
mov dword ptr [ebp+8], eax
.Lt_025C:
.Lt_025B:
mov eax, dword ptr [ebp+8]
or eax, 2048
mov ebx, eax
mov dword ptr [ebp+8], ebx
.Lt_025A:
.Lt_0259:
jmp .Lt_0250
.Lt_0251:
mov ebx, dword ptr [ebp-72]
add ebx, 4294967278
cmp ebx, 3
ja .Lt_0258
mov ebx, dword ptr [ebp-72]
jmp dword ptr [.LT_025D+ebx*4-72]
.LT_025D:
.int .Lt_0253
.int .Lt_0253
.int .Lt_0253
.int .Lt_0253
.Lt_0250:
push 0
call SYMBPREADDPROC
add esp, 4
mov dword ptr [ebp-16], eax
jmp .Lt_023C
.Lt_0240:
mov eax, dword ptr [ebp+20]
cmp eax, 345
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp+20]
cmp ebx, 350
sete bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
push eax
lea eax, [ebp-32]
push eax
push offset Lt_0316
push dword ptr [ebp-20]
call HGETID
add esp, 16
mov dword ptr [ebp-12], eax
push offset Lt_0316
call SYMBPREADDPROC
add esp, 4
mov dword ptr [ebp-16], eax
.Lt_025E:
.Lt_023C:
lea eax, [ebp+8]
push eax
call CNAKEDATTRIBUTE
add esp, 4
cmp dword ptr [ebp+20], 347
je .Lt_0261
.Lt_0262:
cmp dword ptr [ebp+20], 348
jne .Lt_0260
.Lt_0261:
mov dword ptr [ebp-44], 3
jmp .Lt_025F
.Lt_0260:
mov dword ptr [ebp-44], -1
.Lt_0263:
.Lt_025F:
push dword ptr [ebp-44]
call CPROCCALLINGCONV
add esp, 4
mov dword ptr [ebp-44], eax
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 385
jne .Lt_0265
mov eax, dword ptr [ENV+840]
and eax, 16
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_0267
push 0
push 145
push 16
call ERRREPORTNOTALLOWED
add esp, 12
jmp .Lt_0266
.Lt_0267:
mov eax, dword ptr [ebp+8]
or eax, 1024
mov ebx, eax
mov dword ptr [ebp+8], ebx
.Lt_0266:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0265:
.Lt_0264:
mov ebx, dword ptr [ebp+16]
and ebx, 1
je .Lt_0269
call CLIBATTRIBUTE
.Lt_0269:
.Lt_0268:
call CALIASATTRIBUTE
mov dword ptr [ebp-8], eax
mov eax, dword ptr [ebp+16]
and eax, 1
test eax, eax
sete al
shr eax, 1
sbb eax, eax
cmp dword ptr [ebp-20], 0
setne bl
shr ebx, 1
sbb ebx, ebx
and eax, ebx
je .Lt_026B
mov ebx, dword ptr [SYMB+98516]
cmp dword ptr [ebp-20], ebx
je .Lt_026D
push -1
push dword ptr [ebp-20]
call SYMBNESTBEGIN
add esp, 8
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx], -1
.Lt_026D:
.Lt_026C:
.Lt_026B:
.Lt_026A:
mov ebx, dword ptr [ebp-16]
mov eax, dword ptr [ebp+8]
mov dword ptr [ebx+4], eax
mov eax, dword ptr [ebp+16]
and eax, 1
test eax, eax
setne al
shr eax, 1
sbb eax, eax
push eax
push dword ptr [ebp-44]
push dword ptr [ebp-16]
push dword ptr [ebp-20]
call CPARAMETERS
add esp, 16
cmp dword ptr [ebp+20], 348
jne .Lt_026F
.Lt_0270:
mov eax, dword ptr [ebp-16]
movsx ebx, word ptr [eax+64]
cmp ebx, 1
jle .Lt_0272
push 0
push 0
push 158
call ERRREPORT
add esp, 12
.Lt_0272:
.Lt_0271:
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-24], 0
jmp .Lt_026E
.Lt_026F:
cmp dword ptr [ebp+20], 347
jne .Lt_0273
.Lt_0274:
push dword ptr [ebp+16]
push dword ptr [ebp-16]
push dword ptr [ebp-20]
call HCHECKISSELFCLONEBYVAL
add esp, 12
test eax, eax
je .Lt_0276
push 0
push -1
push 270
call ERRREPORT
add esp, 12
jmp .Lt_0213
.Lt_0276:
.Lt_0275:
mov eax, dword ptr [ebp-16]
mov ebx, dword ptr [eax+76]
cmp dword ptr [ebx+52], 4
jne .Lt_0278
push 142
push 0
push dword ptr [ebp-16]
call HPARAMERROR
add esp, 12
mov ebx, dword ptr [ebp-16]
mov eax, dword ptr [ebx+76]
mov dword ptr [ebp-28], eax
mov eax, dword ptr [ebp-28]
mov ebx, dword ptr [ebp-16]
mov ecx, dword ptr [eax+156]
mov dword ptr [ebx+76], ecx
mov ecx, dword ptr [ebp-28]
cmp dword ptr [ecx+156], 0
je .Lt_027A
mov ecx, dword ptr [ebp-28]
mov ebx, dword ptr [ecx+156]
mov dword ptr [ebx+160], 0
.Lt_027A:
.Lt_0279:
mov ebx, dword ptr [ebp-16]
movsx ecx, word ptr [ebx+64]
dec ecx
mov ebx, dword ptr [ebp-16]
mov word ptr [ebx+64], cx
push dword ptr [ebp-28]
call SYMBFREESYMBOL
add esp, 4
.Lt_0278:
.Lt_0277:
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-24], 0
jmp .Lt_026E
.Lt_0273:
cmp dword ptr [ebp+20], 349
jne .Lt_027B
.Lt_027C:
cmp dword ptr [ebp-52], 29
jne .Lt_027E
.Lt_027F:
mov ecx, dword ptr [ebp-16]
movsx ebx, word ptr [ecx+64]
cmp ebx, 1
jne .Lt_0281
mov dword ptr [ebp-52], 54
.Lt_0281:
.Lt_0280:
jmp .Lt_027D
.Lt_027E:
cmp dword ptr [ebp-52], 28
jne .Lt_0282
.Lt_0283:
mov ebx, dword ptr [ebp-16]
movsx ecx, word ptr [ebx+64]
cmp ecx, 1
jne .Lt_0285
mov dword ptr [ebp-52], 53
.Lt_0285:
.Lt_0284:
jmp .Lt_027D
.Lt_0282:
cmp dword ptr [ebp-52], 30
jne .Lt_0286
.Lt_0287:
mov ecx, dword ptr [ebp-16]
movsx ebx, word ptr [ecx+64]
cmp ebx, 1
jne .Lt_0289
mov dword ptr [ebp-52], 76
.Lt_0289:
.Lt_0288:
.Lt_0286:
.Lt_027D:
mov ebx, dword ptr [ebp-52]
sal ebx, 4
mov ecx, dword ptr [AST_OPTB+ebx+4]
and ecx, 4
test ecx, ecx
je .Lt_028B
mov dword ptr [ebp-32], 0
jmp .Lt_028A
.Lt_028B:
push -1
lea ecx, [ebp+8]
push ecx
call CBYREFATTRIBUTE
add esp, 8
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 375
jne .Lt_028D
lea eax, [ebp-24]
push eax
lea eax, [ebp-32]
push eax
mov eax, dword ptr [ebp+16]
and eax, 1
test eax, eax
setne al
shr eax, 1
sbb eax, eax
push eax
push dword ptr [ebp-16]
push dword ptr [ebp+8]
call CPROCRETTYPE
add esp, 20
jmp .Lt_028C
.Lt_028D:
push 0
push 0
push 67
call ERRREPORT
add esp, 12
mov dword ptr [ebp-32], 7
.Lt_028C:
.Lt_028A:
mov eax, dword ptr [ebp-16]
mov ecx, dword ptr [ebp-32]
mov dword ptr [eax+24], ecx
mov ecx, dword ptr [ebp-16]
mov eax, dword ptr [ebp-24]
mov dword ptr [ecx+28], eax
push dword ptr [ebp-16]
call SYMBPROCALLOCEXT
add esp, 4
mov eax, dword ptr [ebp-16]
mov ecx, dword ptr [eax+108]
mov eax, dword ptr [ebp-52]
mov dword ptr [ecx+40], eax
cmp dword ptr [ebp-52], 0
jne .Lt_028F
push dword ptr [ebp+16]
push dword ptr [ebp-16]
push dword ptr [ebp-20]
call HCHECKISSELFCLONEBYVAL
add esp, 12
test eax, eax
je .Lt_0291
push 0
push -1
push 270
call ERRREPORT
add esp, 12
jmp .Lt_0213
.Lt_0291:
.Lt_0290:
.Lt_028F:
.Lt_028E:
push dword ptr [ebp-16]
push dword ptr [ebp-52]
push dword ptr [ebp-20]
call HCHECKOPOVLPARAMS
add esp, 12
test eax, eax
jne .Lt_0293
jmp .Lt_0213
.Lt_0293:
.Lt_0292:
jmp .Lt_026E
.Lt_027B:
cmp dword ptr [ebp+20], 350
jne .Lt_0294
.Lt_0295:
push -1
lea eax, [ebp+8]
push eax
call CBYREFATTRIBUTE
add esp, 8
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 375
jne .Lt_0297
lea eax, [ebp-24]
push eax
lea eax, [ebp-32]
push eax
mov eax, dword ptr [ebp+16]
and eax, 1
test eax, eax
setne al
shr eax, 1
sbb eax, eax
push eax
push dword ptr [ebp-16]
push dword ptr [ebp+8]
call CPROCRETTYPE
add esp, 20
mov eax, dword ptr [ebp-16]
movsx ecx, word ptr [eax+64]
cmp ecx, 2
sete cl
shr ecx, 1
sbb ecx, ecx
mov dword ptr [ebp-60], ecx
mov dword ptr [ebp-56], -1
jmp .Lt_0296
.Lt_0297:
mov ecx, dword ptr [ebp+8]
and ecx, 33554432
je .Lt_0299
push 0
push 0
push 67
call ERRREPORT
add esp, 12
mov ecx, dword ptr [ebp+8]
and ecx, -33554433
mov eax, ecx
mov dword ptr [ebp+8], eax
.Lt_0299:
.Lt_0298:
mov dword ptr [ebp-32], 0
mov eax, dword ptr [ebp-16]
movsx ecx, word ptr [eax+64]
cmp ecx, 3
sete cl
shr ecx, 1
sbb ecx, ecx
mov dword ptr [ebp-60], ecx
.Lt_0296:
mov ecx, dword ptr [ebp-16]
mov eax, dword ptr [ebp-32]
mov dword ptr [ecx+24], eax
mov eax, dword ptr [ebp-16]
mov ecx, dword ptr [ebp-24]
mov dword ptr [eax+28], ecx
push dword ptr [ebp-56]
push dword ptr [ebp-16]
call HCHECKPROPPARAMS
add esp, 8
jmp .Lt_026E
.Lt_0294:
cmp dword ptr [ebp-40], 0
je .Lt_029C
mov ecx, dword ptr [ebp-16]
movsx eax, word ptr [ecx+64]
test eax, eax
setle al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_029D
mov eax, dword ptr [ebp-16]
mov ecx, dword ptr [eax+76]
mov eax, dword ptr [ecx+52]
cmp eax, 4
setne al
shr eax, 1
sbb eax, eax
test eax, eax
setne al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-72], eax
jmp .Lt_030E
.Lt_029D:
mov dword ptr [ebp-72], -1
.Lt_030E:
cmp dword ptr [ebp-72], 0
je .Lt_02A0
mov eax, dword ptr [ebp+8]
or eax, 1024
mov ecx, eax
mov dword ptr [ebp+8], ecx
.Lt_02A0:
.Lt_029F:
.Lt_029C:
.Lt_029B:
mov ecx, dword ptr [ebp+20]
cmp ecx, 346
sete cl
shr ecx, 1
sbb ecx, ecx
push ecx
lea ecx, [ebp+8]
push ecx
call CBYREFATTRIBUTE
add esp, 8
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 375
jne .Lt_02A2
mov eax, dword ptr [ebp-32]
cmp eax, -2147483648
setne al
shr eax, 1
sbb eax, eax
mov ecx, dword ptr [ebp+20]
cmp ecx, 345
sete cl
shr ecx, 1
sbb ecx, ecx
or eax, ecx
je .Lt_02A4
push 0
push 0
push 17
call ERRREPORT
add esp, 12
.Lt_02A4:
.Lt_02A3:
lea ecx, [ebp-24]
push ecx
lea ecx, [ebp-32]
push ecx
mov ecx, dword ptr [ebp+16]
and ecx, 1
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
push ecx
push dword ptr [ebp-16]
push dword ptr [ebp+8]
call CPROCRETTYPE
add esp, 20
jmp .Lt_02A1
.Lt_02A2:
cmp dword ptr [ebp+20], 346
jne .Lt_02A6
mov ecx, dword ptr [ENV+840]
and ecx, 4194304
test ecx, ecx
je .Lt_02A8
cmp dword ptr [ebp-32], -2147483648
jne .Lt_02AA
push offset Lt_0316
call SYMBGETDEFTYPE
add esp, 4
mov dword ptr [ebp-32], eax
.Lt_02AA:
.Lt_02A9:
jmp .Lt_02A7
.Lt_02A8:
push 0
push 146
push 4194304
call ERRREPORTNOTALLOWED
add esp, 12
mov dword ptr [ebp-32], 7
.Lt_02A7:
jmp .Lt_02A5
.Lt_02A6:
mov dword ptr [ebp-32], 0
.Lt_02A5:
.Lt_02A1:
.Lt_029A:
.Lt_026E:
mov eax, dword ptr [ebp+16]
and eax, 1
je .Lt_02AC
cmp dword ptr [ebp+20], 347
je .Lt_02AF
.Lt_02B0:
cmp dword ptr [ebp+20], 348
jne .Lt_02AE
.Lt_02AF:
push 0
push dword ptr [ebp-44]
push dword ptr [ebp+8]
push dword ptr [ebp-8]
push dword ptr [ebp-16]
call SYMBADDCTOR
add esp, 20
mov dword ptr [ebp-16], eax
jmp .Lt_02AD
.Lt_02AE:
cmp dword ptr [ebp+20], 349
jne .Lt_02B1
.Lt_02B2:
push 0
push dword ptr [ebp-44]
push dword ptr [ebp+8]
push dword ptr [ebp-24]
push dword ptr [ebp-32]
push dword ptr [ebp-8]
push dword ptr [ebp-52]
push dword ptr [ebp-16]
call SYMBADDOPERATOR
add esp, 32
mov dword ptr [ebp-16], eax
jmp .Lt_02AD
.Lt_02B1:
push 0
push dword ptr [ebp-44]
push dword ptr [ebp+8]
push dword ptr [ebp-24]
push dword ptr [ebp-32]
push dword ptr [ebp-8]
push offset Lt_0316
push dword ptr [ebp-16]
call SYMBADDPROC
add esp, 32
mov dword ptr [ebp-16], eax
.Lt_02B3:
.Lt_02AD:
cmp dword ptr [ebp-16], 0
jne .Lt_02B5
push 0
push 0
push 4
call ERRREPORT
add esp, 12
jmp .Lt_0213
.Lt_02B5:
.Lt_02B4:
mov eax, dword ptr [ebp+16]
and eax, 2
test eax, eax
setne al
shr eax, 1
sbb eax, eax
mov ecx, dword ptr [ebp+20]
cmp ecx, 347
setne cl
shr ecx, 1
sbb ecx, ecx
and eax, ecx
je .Lt_02B7
push dword ptr [ebp-16]
call COVERRIDEATTRIBUTE
add esp, 4
.Lt_02B7:
.Lt_02B6:
cmp dword ptr [ebp+20], 350
jne .Lt_02B9
push dword ptr [ebp-56]
push dword ptr [ebp-60]
push dword ptr [ebp-20]
call HSETUDTPROPERTYFLAGS
add esp, 12
.Lt_02B9:
.Lt_02B8:
mov ecx, dword ptr [ebp-16]
mov dword ptr [ebp-4], ecx
jmp .Lt_0213
.Lt_02AC:
.Lt_02AB:
push 0
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-72], eax
cmp dword ptr [ebp-72], 347
je .Lt_02BD
.Lt_02BE:
cmp dword ptr [ebp-72], 348
jne .Lt_02BC
.Lt_02BD:
mov eax, dword ptr [ebp+8]
and eax, 2048
test eax, eax
setne al
shr eax, 1
sbb eax, eax
mov ecx, dword ptr [ebp+20]
cmp ecx, 346
sete cl
shr ecx, 1
sbb ecx, ecx
or eax, ecx
je .Lt_02C0
push 0
push -1
push 17
call ERRREPORT
add esp, 12
jmp .Lt_02BF
.Lt_02C0:
mov ecx, dword ptr [ebp-16]
movsx eax, word ptr [ecx+64]
test eax, eax
je .Lt_02C1
push 0
push -1
push 1
call ERRREPORT
add esp, 12
jmp .Lt_02BF
.Lt_02C1:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 347
jne .Lt_02C3
or dword ptr [ebp-48], 65536
jmp .Lt_02C2
.Lt_02C3:
or dword ptr [ebp-48], 131072
.Lt_02C2:
.Lt_02BF:
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXGETCLASS
add esp, 4
cmp eax, 3
jne .Lt_02C5
mov eax, dword ptr [LEX+839664]
mov ecx, dword ptr [eax+16532]
cmp dword ptr [ecx+8], 7
je .Lt_02C7
push 0
push 0
push 188
call ERRREPORT
add esp, 12
push 0
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_02C6
.Lt_02C7:
call LEXGETTEXT
push eax
call fb_StrAllocTempDescZ
add esp, 4
push eax
call fb_VALINT
add esp, 4
mov dword ptr [ebp-64], eax
mov eax, dword ptr [ebp-64]
cmp eax, 101
setl al
shr eax, 1
sbb eax, eax
mov ecx, dword ptr [ebp-64]
cmp ecx, 65535
setg cl
shr ecx, 1
sbb ecx, ecx
or eax, ecx
je .Lt_02C9
push 0
push 0
push 188
call ERRREPORT
add esp, 12
push 0
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_02C8
.Lt_02C9:
and dword ptr [ebp-64], 65535
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_02C8:
.Lt_02C6:
.Lt_02C5:
.Lt_02C4:
.Lt_02BC:
.Lt_02BA:
push 307
call HMATCH
add esp, 4
test eax, eax
je .Lt_02CB
mov eax, dword ptr [ebp+8]
or eax, 2097152
mov ecx, eax
mov dword ptr [ebp+8], ecx
.Lt_02CB:
.Lt_02CA:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 341
jne .Lt_02CD
mov eax, dword ptr [ebp-48]
and eax, 196608
test eax, eax
je .Lt_02CF
push 0
push 0
push 17
call ERRREPORT
add esp, 12
.Lt_02CF:
.Lt_02CE:
mov eax, dword ptr [ebp+8]
and eax, 64
je .Lt_02D1
push 0
push 0
push 17
call ERRREPORT
add esp, 12
mov eax, dword ptr [ebp+8]
and eax, -65
mov ecx, eax
mov dword ptr [ebp+8], ecx
.Lt_02D1:
.Lt_02D0:
push 0
call LEXSKIPTOKEN
add esp, 4
push -1
push 22
call FBSETOPTION
add esp, 8
mov ecx, dword ptr [ebp+8]
or ecx, 288
mov eax, ecx
mov dword ptr [ebp+8], eax
.Lt_02CD:
.Lt_02CC:
cmp dword ptr [ebp+20], 347
jne .Lt_02D3
.Lt_02D4:
push dword ptr [ebp-20]
call SYMBGETCOMPCTORHEAD
add esp, 4
mov dword ptr [ebp-12], eax
jmp .Lt_02D2
.Lt_02D3:
cmp dword ptr [ebp+20], 348
jne .Lt_02D5
.Lt_02D6:
push dword ptr [ebp-20]
call SYMBGETCOMPDTOR
add esp, 4
mov dword ptr [ebp-12], eax
jmp .Lt_02D2
.Lt_02D5:
cmp dword ptr [ebp+20], 349
jne .Lt_02D7
.Lt_02D8:
push dword ptr [ebp-52]
push dword ptr [ebp-20]
call SYMBGETCOMPOPOVLHEAD
add esp, 8
mov dword ptr [ebp-12], eax
.Lt_02D7:
.Lt_02D2:
cmp dword ptr [ebp-12], 0
jne .Lt_02DA
cmp dword ptr [ebp-36], 0
je .Lt_02DC
push 0
push 0
push 157
call ERRREPORT
add esp, 12
.Lt_02DC:
.Lt_02DB:
cmp dword ptr [ebp+20], 347
je .Lt_02DF
.Lt_02E0:
cmp dword ptr [ebp+20], 348
jne .Lt_02DE
.Lt_02DF:
push 4
push dword ptr [ebp-44]
push dword ptr [ebp+8]
push dword ptr [ebp-8]
push dword ptr [ebp-16]
call SYMBADDCTOR
add esp, 20
mov dword ptr [ebp-12], eax
jmp .Lt_02DD
.Lt_02DE:
cmp dword ptr [ebp+20], 349
jne .Lt_02E1
.Lt_02E2:
push 4
push dword ptr [ebp-44]
push dword ptr [ebp+8]
push dword ptr [ebp-24]
push dword ptr [ebp-32]
push dword ptr [ebp-8]
push dword ptr [ebp-52]
push dword ptr [ebp-16]
call SYMBADDOPERATOR
add esp, 32
mov dword ptr [ebp-12], eax
jmp .Lt_02DD
.Lt_02E1:
push 4
push dword ptr [ebp-44]
push dword ptr [ebp+8]
push dword ptr [ebp-24]
push dword ptr [ebp-32]
push dword ptr [ebp-8]
push offset Lt_0316
push dword ptr [ebp-16]
call SYMBADDPROC
add esp, 32
mov dword ptr [ebp-12], eax
.Lt_02E3:
.Lt_02DD:
cmp dword ptr [ebp-12], 0
jne .Lt_02E5
push 0
push -1
push 4
call ERRREPORT
add esp, 12
push 4
push dword ptr [ebp-44]
push dword ptr [ebp+8]
push dword ptr [ebp-24]
push dword ptr [ebp-32]
push 0
call SYMBUNIQUELABEL
push eax
push dword ptr [ebp-16]
call SYMBADDPROC
add esp, 32
mov dword ptr [ebp-16], eax
jmp .Lt_02E4
.Lt_02E5:
mov eax, dword ptr [ebp-12]
mov dword ptr [ebp-16], eax
.Lt_02E4:
jmp .Lt_02D9
.Lt_02DA:
mov eax, dword ptr [ebp-12]
mov ecx, dword ptr [eax+4]
and ecx, 32768
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
mov eax, dword ptr [ebp+20]
cmp eax, 350
sete al
shr eax, 1
sbb eax, eax
cmp ecx, eax
je .Lt_02E7
push 0
push -1
push 4
call ERRREPORT
add esp, 12
push 4
push dword ptr [ebp-44]
push dword ptr [ebp+8]
push dword ptr [ebp-24]
push dword ptr [ebp-32]
push 0
call SYMBUNIQUELABEL
push eax
push dword ptr [ebp-16]
call SYMBADDPROC
add esp, 32
mov dword ptr [ebp-4], eax
jmp .Lt_0213
.Lt_02E7:
.Lt_02E6:
mov eax, dword ptr [ebp-12]
mov ecx, dword ptr [eax+4]
and ecx, 1024
test ecx, ecx
jle .Lt_02E9
cmp dword ptr [ebp+20], 347
jne .Lt_02EB
.Lt_02EC:
push dword ptr [ebp-16]
push dword ptr [ebp-12]
call SYMBFINDCTORPROC
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_02EA
.Lt_02EB:
cmp dword ptr [ebp+20], 349
jne .Lt_02ED
.Lt_02EE:
push dword ptr [ebp-16]
push dword ptr [ebp-12]
push dword ptr [ebp-52]
call SYMBFINDOPOVLPROC
add esp, 12
mov dword ptr [ebp-12], eax
jmp .Lt_02EA
.Lt_02ED:
cmp dword ptr [ebp-56], 0
je .Lt_02F0
mov dword ptr [ebp-72], 1
jmp .Lt_030F
.Lt_02F0:
mov dword ptr [ebp-72], 0
.Lt_030F:
push dword ptr [ebp-72]
push dword ptr [ebp-16]
push dword ptr [ebp-12]
call SYMBFINDOVERLOADPROC
add esp, 12
mov dword ptr [ebp-12], eax
.Lt_02EF:
.Lt_02EA:
mov eax, dword ptr [ebp+8]
or eax, 1024
mov ecx, eax
mov dword ptr [ebp+8], ecx
.Lt_02E9:
.Lt_02E8:
cmp dword ptr [ebp-12], 0
jne .Lt_02F3
cmp dword ptr [ebp-36], 0
je .Lt_02F5
push 0
push 0
push 157
call ERRREPORT
add esp, 12
.Lt_02F5:
.Lt_02F4:
cmp dword ptr [ebp+20], 347
je .Lt_02F8
.Lt_02F9:
cmp dword ptr [ebp+20], 348
jne .Lt_02F7
.Lt_02F8:
push 4
push dword ptr [ebp-44]
push dword ptr [ebp+8]
push dword ptr [ebp-8]
push dword ptr [ebp-16]
call SYMBADDCTOR
add esp, 20
mov dword ptr [ebp-12], eax
jmp .Lt_02F6
.Lt_02F7:
cmp dword ptr [ebp+20], 349
jne .Lt_02FA
.Lt_02FB:
push 4
push dword ptr [ebp-44]
push dword ptr [ebp+8]
push dword ptr [ebp-24]
push dword ptr [ebp-32]
push dword ptr [ebp-8]
push dword ptr [ebp-52]
push dword ptr [ebp-16]
call SYMBADDOPERATOR
add esp, 32
mov dword ptr [ebp-12], eax
jmp .Lt_02F6
.Lt_02FA:
push 4
push dword ptr [ebp-44]
push dword ptr [ebp+8]
push dword ptr [ebp-24]
push dword ptr [ebp-32]
push dword ptr [ebp-8]
push offset Lt_0316
push dword ptr [ebp-16]
call SYMBADDPROC
add esp, 32
mov dword ptr [ebp-12], eax
.Lt_02FC:
.Lt_02F6:
cmp dword ptr [ebp-12], 0
jne .Lt_02FE
push 0
push -1
push 4
call ERRREPORT
add esp, 12
push 4
push dword ptr [ebp-44]
push dword ptr [ebp+8]
push dword ptr [ebp-24]
push dword ptr [ebp-32]
push 0
call SYMBUNIQUELABEL
push eax
push dword ptr [ebp-16]
call SYMBADDPROC
add esp, 32
mov dword ptr [ebp-4], eax
jmp .Lt_0213
.Lt_02FE:
.Lt_02FD:
mov eax, dword ptr [ebp-12]
mov dword ptr [ebp-16], eax
jmp .Lt_02F2
.Lt_02F3:
mov eax, dword ptr [ebp-12]
mov ecx, dword ptr [eax+8]
and ecx, 8
test ecx, ecx
je .Lt_0300
push 0
push -1
push 4
call ERRREPORT
add esp, 12
push 4
push dword ptr [ebp-44]
push dword ptr [ebp+8]
push dword ptr [ebp-24]
push dword ptr [ebp-32]
push 0
call SYMBUNIQUELABEL
push eax
push dword ptr [ebp-16]
call SYMBADDPROC
add esp, 32
mov dword ptr [ebp-4], eax
jmp .Lt_0213
.Lt_0300:
.Lt_02FF:
push dword ptr [ebp-44]
push dword ptr [ebp-24]
push dword ptr [ebp-32]
push dword ptr [ebp-8]
push dword ptr [ebp-16]
push dword ptr [ebp-12]
call HCHECKPROTOTYPE
add esp, 24
mov eax, dword ptr [ebp-12]
mov dword ptr [ebp-16], eax
push dword ptr [ebp+8]
push dword ptr [ebp-16]
call HCHECKATTRIBS
add esp, 8
mov eax, dword ptr [ebp-48]
and eax, 196608
je .Lt_0302
mov eax, dword ptr [ebp-16]
mov ecx, dword ptr [eax+4]
and ecx, 2048
test ecx, ecx
je .Lt_0304
push 0
push -1
push 17
call ERRREPORT
add esp, 12
.Lt_0304:
.Lt_0303:
.Lt_0302:
.Lt_0301:
mov ecx, dword ptr [ebp-16]
mov eax, dword ptr [ecx+8]
or eax, 8
mov ecx, eax
mov eax, dword ptr [ebp-16]
mov dword ptr [eax+8], ecx
.Lt_02F2:
.Lt_02D9:
mov ecx, dword ptr [ebp-48]
and ecx, 65536
je .Lt_0306
mov ecx, dword ptr [ebp-16]
mov eax, dword ptr [ecx+4]
and eax, 201326592
je .Lt_0308
push 0
push -1
push 204
call ERRREPORT
add esp, 12
.Lt_0308:
.Lt_0307:
push dword ptr [ebp-16]
call SYMBADDGLOBALCTOR
add esp, 4
push dword ptr [ebp-16]
call SYMBPROCALLOCEXT
add esp, 4
mov eax, dword ptr [ebp-16]
mov ecx, dword ptr [eax+108]
mov eax, dword ptr [ebp-64]
mov dword ptr [ecx+56], eax
jmp .Lt_0305
.Lt_0306:
mov eax, dword ptr [ebp-48]
and eax, 131072
je .Lt_0309
mov eax, dword ptr [ebp-16]
mov ecx, dword ptr [eax+4]
and ecx, 201326592
je .Lt_030B
push 0
push -1
push 205
call ERRREPORT
add esp, 12
.Lt_030B:
.Lt_030A:
push dword ptr [ebp-16]
call SYMBADDGLOBALDTOR
add esp, 4
push dword ptr [ebp-16]
call SYMBPROCALLOCEXT
add esp, 4
mov ecx, dword ptr [ebp-16]
mov eax, dword ptr [ecx+108]
mov ecx, dword ptr [ebp-64]
mov dword ptr [eax+56], ecx
.Lt_0309:
.Lt_0305:
cmp dword ptr [ebp+20], 350
jne .Lt_030D
push dword ptr [ebp-56]
push dword ptr [ebp-60]
push dword ptr [ebp-20]
call HSETUDTPROPERTYFLAGS
add esp, 12
.Lt_030D:
.Lt_030C:
mov ecx, dword ptr [ebp-16]
mov dword ptr [ebp-4], ecx
.Lt_0213:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CPROCHEADER, .-CPROCHEADER

.section .bss
.balign 4
	.lcomm	Lt_0316,129

.section .text
.balign 16

.globl HDISALLOWSTATICATTRIB
HDISALLOWSTATICATTRIB:
.type HDISALLOWSTATICATTRIB, @function
push ebp
mov ebp, esp
push ebx
.Lt_032E:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
and ebx, 2
test ebx, ebx
je .Lt_0331
push 0
push 0
push 212
call ERRREPORT
add esp, 12
mov ebx, dword ptr [ebp+8]
and dword ptr [ebx], -3
.Lt_0331:
.Lt_0330:
.Lt_032F:
pop ebx
mov esp, ebp
pop ebp
ret
.size HDISALLOWSTATICATTRIB, .-HDISALLOWSTATICATTRIB
.balign 16

.globl HDISALLOWVIRTUALCTOR
HDISALLOWVIRTUALCTOR:
.type HDISALLOWVIRTUALCTOR, @function
push ebp
mov ebp, esp
push ebx
.Lt_0332:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
and ebx, 1610612736
je .Lt_0335
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx]
and eax, 1073741824
je .Lt_0337
push 0
push 0
push 209
call ERRREPORT
add esp, 12
jmp .Lt_0336
.Lt_0337:
push 0
push 0
push 210
call ERRREPORT
add esp, 12
.Lt_0336:
mov eax, dword ptr [ebp+8]
and dword ptr [eax], -1073742035
.Lt_0335:
.Lt_0334:
.Lt_0333:
pop ebx
mov esp, ebp
pop ebp
ret
.size HDISALLOWVIRTUALCTOR, .-HDISALLOWVIRTUALCTOR
.balign 16

.globl HDISALLOWABSTRACTDTOR
HDISALLOWABSTRACTDTOR:
.type HDISALLOWABSTRACTDTOR, @function
push ebp
mov ebp, esp
push ebx
.Lt_0338:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
and ebx, 1073741824
je .Lt_033B
push 0
push 0
push 211
call ERRREPORT
add esp, 12
mov ebx, dword ptr [ebp+8]
and dword ptr [ebx], -1073741825
.Lt_033B:
.Lt_033A:
.Lt_0339:
pop ebx
mov esp, ebp
pop ebp
ret
.size HDISALLOWABSTRACTDTOR, .-HDISALLOWABSTRACTDTOR
.balign 16

.globl HDISALLOWCONSTCTORDTOR
HDISALLOWCONSTCTORDTOR:
.type HDISALLOWCONSTCTORDTOR, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_033C:
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax]
and ebx, 1048576
je .Lt_033F
push 0
push 0
cmp dword ptr [ebp+8], 347
jne .Lt_0340
mov dword ptr [ebp-4], 313
jmp .Lt_0342
.Lt_0340:
mov dword ptr [ebp-4], 314
.Lt_0342:
push dword ptr [ebp-4]
call ERRREPORT
add esp, 12
mov ebx, dword ptr [ebp+12]
and dword ptr [ebx], -1048577
.Lt_033F:
.Lt_033E:
.Lt_033D:
pop ebx
mov esp, ebp
pop ebp
ret
.size HDISALLOWCONSTCTORDTOR, .-HDISALLOWCONSTCTORDTOR
.balign 16

.globl CPROCSTMTBEGIN
CPROCSTMTBEGIN:
.type CPROCSTMTBEGIN, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
.Lt_0343:
mov eax, dword ptr [ebp+8]
and eax, 96
test eax, eax
jne .Lt_0346
cmp dword ptr [ENV+880], 0
je .Lt_0348
or dword ptr [ebp+8], 32
jmp .Lt_0347
.Lt_0348:
or dword ptr [ebp+8], 64
.Lt_0347:
.Lt_0346:
.Lt_0345:
lea eax, [ebp+8]
push eax
push 0
call CMETHODATTRIBUTES
add esp, 8
push 0
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp-4]
mov dword ptr [ebp-20], eax
jmp .Lt_034A
.Lt_034C:
jmp .Lt_0349
.Lt_034D:
mov eax, dword ptr [ENV+840]
and eax, 64
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_034F
push 0
push 145
push 64
call ERRREPORTNOTALLOWED
add esp, 12
jmp .Lt_034E
.Lt_034F:
or dword ptr [ebp+8], 4096
.Lt_034E:
lea eax, [ebp+8]
push eax
call HDISALLOWSTATICATTRIB
add esp, 4
lea eax, [ebp+8]
push eax
call HDISALLOWVIRTUALCTOR
add esp, 4
lea eax, [ebp+8]
push eax
push dword ptr [ebp-4]
call HDISALLOWCONSTCTORDTOR
add esp, 8
jmp .Lt_0349
.Lt_0350:
mov eax, dword ptr [ENV+840]
and eax, 64
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_0352
push 0
push 145
push 64
call ERRREPORTNOTALLOWED
add esp, 12
jmp .Lt_0351
.Lt_0352:
or dword ptr [ebp+8], 8192
.Lt_0351:
lea eax, [ebp+8]
push eax
call HDISALLOWSTATICATTRIB
add esp, 4
lea eax, [ebp+8]
push eax
call HDISALLOWABSTRACTDTOR
add esp, 4
lea eax, [ebp+8]
push eax
push dword ptr [ebp-4]
call HDISALLOWCONSTCTORDTOR
add esp, 8
jmp .Lt_0349
.Lt_0353:
mov eax, dword ptr [ENV+840]
and eax, 32
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_0355
push 0
push 145
push 32
call ERRREPORTNOTALLOWED
add esp, 12
.Lt_0355:
.Lt_0354:
jmp .Lt_0349
.Lt_0356:
mov eax, dword ptr [ENV+840]
and eax, 64
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_0358
push 0
push 145
push 64
call ERRREPORTNOTALLOWED
add esp, 12
.Lt_0358:
.Lt_0357:
lea eax, [ebp+8]
push eax
call HDISALLOWSTATICATTRIB
add esp, 4
jmp .Lt_0349
.Lt_0359:
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
jmp .Lt_0344
jmp .Lt_0349
.Lt_034A:
mov eax, dword ptr [ebp-20]
add eax, 4294966951
cmp eax, 5
ja .Lt_0359
mov eax, dword ptr [ebp-20]
jmp dword ptr [.LT_035A+eax*4-1380]
.LT_035A:
.int .Lt_034C
.int .Lt_034C
.int .Lt_034D
.int .Lt_0350
.int .Lt_0353
.int .Lt_0356
.Lt_0349:
push 2
call CCOMPSTMTISALLOWED
add esp, 4
test eax, eax
jne .Lt_035C
push 0
push -1
push dword ptr [ebp-4]
call HSKIPCOMPOUND
add esp, 12
jmp .Lt_0344
.Lt_035C:
.Lt_035B:
push 0
call LEXSKIPTOKEN
add esp, 4
push dword ptr [ebp-4]
push 0
lea eax, [ebp-8]
push eax
push dword ptr [ebp+8]
call CPROCHEADER
add esp, 16
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_035E
cmp dword ptr [ebp-8], 0
je .Lt_0360
push -1
call SYMBNESTEND
add esp, 4
.Lt_0360:
.Lt_035F:
push 0
push -1
push dword ptr [ebp-4]
call HSKIPCOMPOUND
add esp, 12
jmp .Lt_0344
.Lt_035E:
.Lt_035D:
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax+4]
and ebx, 1073741824
test ebx, ebx
je .Lt_0362
push 0
push 0
push 223
call ERRREPORT
add esp, 12
.Lt_0362:
.Lt_0361:
push 0
push dword ptr [ebp-12]
call ASTPROCBEGIN
add esp, 8
push 33
push 346
call CCOMPSTMTPUSH
add esp, 8
mov dword ptr [ebp-16], eax
mov eax, dword ptr [ebp-16]
mov ebx, dword ptr [ebp-4]
mov dword ptr [eax+12], ebx
mov ebx, dword ptr [ebp-16]
mov eax, dword ptr [ebp-8]
mov dword ptr [ebx+16], eax
mov eax, dword ptr [AST+40]
mov ebx, dword ptr [ebp-16]
mov ecx, dword ptr [eax+36]
mov dword ptr [ebx+20], ecx
.Lt_0344:
pop ebx
mov esp, ebp
pop ebp
ret
.size CPROCSTMTBEGIN, .-CPROCSTMTBEGIN
.balign 16

.globl CPROCSTMTEND
CPROCSTMTEND:
.type CPROCSTMTEND, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
.Lt_0367:
push -1
push 346
call CCOMPSTMTGETTOS
add esp, 8
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
jne .Lt_036A
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_0368
.Lt_036A:
.Lt_0369:
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [ebp-4]
push dword ptr [eax+12]
call HMATCH
add esp, 4
test eax, eax
jne .Lt_036C
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+12]
mov dword ptr [ebp-12], ebx
cmp dword ptr [ebp-12], 345
jne .Lt_036F
.Lt_0370:
push 0
push 0
push 124
call ERRREPORT
add esp, 12
jmp .Lt_036D
.Lt_036F:
cmp dword ptr [ebp-12], 346
jne .Lt_0371
.Lt_0372:
push 0
push 0
push 125
call ERRREPORT
add esp, 12
jmp .Lt_036D
.Lt_0371:
cmp dword ptr [ebp-12], 347
jne .Lt_0373
.Lt_0374:
push 0
push 0
push 126
call ERRREPORT
add esp, 12
jmp .Lt_036D
.Lt_0373:
cmp dword ptr [ebp-12], 348
jne .Lt_0375
.Lt_0376:
push 0
push 0
push 127
call ERRREPORT
add esp, 12
jmp .Lt_036D
.Lt_0375:
cmp dword ptr [ebp-12], 349
jne .Lt_0377
.Lt_0378:
push 0
push 0
push 128
call ERRREPORT
add esp, 12
jmp .Lt_036D
.Lt_0377:
cmp dword ptr [ebp-12], 350
jne .Lt_0379
.Lt_037A:
push 0
push 0
push 129
call ERRREPORT
add esp, 12
.Lt_0379:
.Lt_036D:
.Lt_036C:
.Lt_036B:
push dword ptr [PARSER+100]
call SYMBGETPROCRESULT
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
je .Lt_037C
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+8]
and ebx, 2
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_037E
mov ebx, dword ptr [PARSER+100]
mov eax, dword ptr [ebx+4]
and eax, 268435456
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_0380
mov eax, dword ptr [PARSER+100]
mov ebx, dword ptr [eax+4]
and ebx, 33554432
test ebx, ebx
je .Lt_0382
push 0
push 0
push 315
call ERRREPORT
add esp, 12
jmp .Lt_0381
.Lt_0382:
push 1
push 0
push 13
call ERRREPORTWARN
add esp, 12
.Lt_0381:
.Lt_0380:
.Lt_037F:
.Lt_037E:
.Lt_037D:
.Lt_037C:
.Lt_037B:
push 0
call ASTPROCEND
add esp, 4
mov ebx, dword ptr [ebp-4]
cmp dword ptr [ebx+16], 0
je .Lt_0384
push -1
call SYMBNESTEND
add esp, 4
.Lt_0384:
.Lt_0383:
push dword ptr [ebp-4]
call CCOMPSTMTPOP
add esp, 4
.Lt_0368:
pop ebx
mov esp, ebp
pop ebp
ret
.size CPROCSTMTEND, .-CPROCSTMTEND
.balign 16
fb_ctor__parserzproc:
.type fb_ctor__parserzproc, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__parserzproc, .-fb_ctor__parserzproc
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
HPARAMERROR:
.type HPARAMERROR, @function
push ebp
mov ebp, esp
.Lt_0087:
push dword ptr [ebp+16]
push 0
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call ERRREPORTPARAM
add esp, 16
.Lt_0088:
mov esp, ebp
pop ebp
ret
.size HPARAMERROR, .-HPARAMERROR
.balign 16
HCHECKPROTOTYPE:
.type HCHECKPROTOTYPE, @function
push ebp
mov ebp, esp
sub esp, 56
push ebx
push esi
.Lt_0089:
cmp dword ptr [ebp+16], 0
setne al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebx+8]
and ecx, 512
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
and eax, ecx
je .Lt_008C
push 0
mov ecx, dword ptr [ebp+8]
push dword ptr [ecx+16]
push 0
push dword ptr [ebp+16]
call fb_StrCompare
add esp, 16
test eax, eax
je .Lt_008E
push 0
push 1
push 0
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-52], 0
mov dword ptr [ebp-48], 0
push 0
push -1
push 2
push offset Lt_008F
push -1
push 0
push dword ptr [ebp+16]
push 2
push offset Lt_008F
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-24], 0
lea eax, [ebp-32]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-44], 0
mov dword ptr [ebp-40], 0
mov dword ptr [ebp-36], 0
lea eax, [ebp-44]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-56]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-56]
push 310
call ERRREPORTEX
add esp, 20
lea eax, [ebp-56]
push eax
call fb_StrDelete
add esp, 4
.Lt_008E:
.Lt_008D:
.Lt_008C:
.Lt_008B:
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [ebp+20]
cmp ecx, dword ptr [eax+24]
setne cl
shr ecx, 1
sbb ecx, ecx
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+28]
cmp ebx, dword ptr [ebp+24]
setne al
shr eax, 1
sbb eax, eax
or ecx, eax
je .Lt_0094
push 0
push -1
push 20
call ERRREPORT
add esp, 12
.Lt_0094:
.Lt_0093:
mov eax, dword ptr [ebp+12]
mov ecx, dword ptr [eax+92]
cmp ecx, 2
setne cl
shr ecx, 1
sbb ecx, ecx
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+12]
mov esi, dword ptr [ebx+92]
cmp esi, dword ptr [eax+92]
setne dl
mov esi, edx
shr esi, 1
sbb esi, esi
and ecx, esi
je .Lt_0096
push 1
push 0
push 28
call ERRREPORTWARN
add esp, 12
.Lt_0096:
.Lt_0095:
mov esi, dword ptr [ebp+8]
mov ecx, dword ptr [ebp+28]
cmp dword ptr [esi+80], ecx
je .Lt_0098
push 0
push -1
push 40
call ERRREPORT
add esp, 12
.Lt_0098:
.Lt_0097:
mov ecx, dword ptr [ebp+12]
mov esi, dword ptr [ecx+72]
mov dword ptr [ebp-4], esi
mov esi, dword ptr [ebp+12]
movsx ecx, word ptr [esi+64]
mov dword ptr [ebp-12], ecx
mov ecx, dword ptr [ebp+12]
mov esi, dword ptr [ecx+4]
and esi, 2048
test esi, esi
je .Lt_009A
dec dword ptr [ebp-12]
mov esi, dword ptr [ebp-4]
mov ecx, dword ptr [esi+160]
mov dword ptr [ebp-4], ecx
.Lt_009A:
.Lt_0099:
mov ecx, dword ptr [ebp+8]
mov esi, dword ptr [ecx+72]
mov dword ptr [ebp-8], esi
mov esi, dword ptr [ebp+8]
movsx ecx, word ptr [esi+64]
mov dword ptr [ebp-16], ecx
mov ecx, dword ptr [ebp+8]
mov esi, dword ptr [ecx+4]
and esi, 2048
test esi, esi
je .Lt_009C
dec dword ptr [ebp-16]
mov esi, dword ptr [ebp-8]
mov ecx, dword ptr [esi+160]
mov dword ptr [ebp-8], ecx
.Lt_009C:
.Lt_009B:
mov ecx, dword ptr [ebp-12]
cmp dword ptr [ebp-16], ecx
je .Lt_009E
push 0
push -1
push 1
call ERRREPORT
add esp, 12
.Lt_009E:
.Lt_009D:
mov dword ptr [ebp-20], 1
.Lt_009F:
mov ecx, dword ptr [ebp-20]
cmp ecx, dword ptr [ebp-16]
setle cl
shr ecx, 1
sbb ecx, ecx
mov esi, dword ptr [ebp-20]
cmp esi, dword ptr [ebp-12]
setle dl
mov esi, edx
shr esi, 1
sbb esi, esi
and ecx, esi
je .Lt_00A0
mov esi, dword ptr [ebp-8]
mov ecx, dword ptr [esi+24]
mov dword ptr [ebp-24], ecx
mov ecx, dword ptr [ebp-24]
and ecx, 480
je .Lt_00A1
mov dword ptr [ebp-28], 22
jmp .Lt_0387
.Lt_00A1:
mov ecx, dword ptr [ebp-24]
and ecx, 31
mov dword ptr [ebp-28], ecx
.Lt_0387:
cmp dword ptr [ebp-28], 0
jne .Lt_00A4
mov ecx, dword ptr [ebp-4]
mov esi, dword ptr [ebp-8]
mov eax, dword ptr [ecx+24]
mov dword ptr [esi+24], eax
mov eax, dword ptr [ebp-4]
mov esi, dword ptr [ebp-8]
mov ecx, dword ptr [eax+28]
mov dword ptr [esi+28], ecx
jmp .Lt_00A3
.Lt_00A4:
mov ecx, dword ptr [ebp-4]
mov esi, dword ptr [ebp-24]
cmp dword ptr [ecx+24], esi
je .Lt_00A6
push 57
push dword ptr [ebp-20]
push dword ptr [ebp+12]
call HPARAMERROR
add esp, 12
jmp .Lt_00A5
.Lt_00A6:
mov esi, dword ptr [ebp-4]
mov ecx, dword ptr [ebp-8]
mov eax, dword ptr [ecx+28]
cmp dword ptr [esi+28], eax
je .Lt_00A7
push 57
push dword ptr [ebp-20]
push dword ptr [ebp+12]
call HPARAMERROR
add esp, 12
.Lt_00A7:
.Lt_00A5:
.Lt_00A3:
mov eax, dword ptr [ebp-4]
mov esi, dword ptr [ebp-8]
mov ecx, dword ptr [esi+52]
cmp dword ptr [eax+52], ecx
je .Lt_00A9
push 57
push dword ptr [ebp-20]
push dword ptr [ebp+12]
call HPARAMERROR
add esp, 12
.Lt_00A9:
.Lt_00A8:
mov ecx, dword ptr [ebp-4]
cmp dword ptr [ecx+52], 3
jne .Lt_00AB
mov ecx, dword ptr [ebp-4]
mov eax, dword ptr [ebp-8]
mov esi, dword ptr [eax+64]
cmp dword ptr [ecx+64], esi
je .Lt_00AD
push 57
push dword ptr [ebp-20]
push dword ptr [ebp+12]
call HPARAMERROR
add esp, 12
.Lt_00AD:
.Lt_00AC:
.Lt_00AB:
.Lt_00AA:
mov esi, dword ptr [ebp-4]
cmp dword ptr [esi+52], 4
je .Lt_00AF
mov esi, dword ptr [ebp-4]
push dword ptr [esi+12]
push dword ptr [ebp-8]
call SYMBSETNAME
add esp, 8
mov esi, dword ptr [ebp-4]
mov ecx, dword ptr [esi+4]
and ecx, 268435456
test ecx, ecx
je .Lt_00B1
mov ecx, dword ptr [ebp-8]
mov esi, dword ptr [ecx+4]
or esi, 268435456
mov ecx, esi
mov esi, dword ptr [ebp-8]
mov dword ptr [esi+4], ecx
jmp .Lt_00B0
.Lt_00B1:
mov ecx, dword ptr [ebp-8]
mov esi, dword ptr [ecx+4]
and esi, -268435457
mov ecx, esi
mov esi, dword ptr [ebp-8]
mov dword ptr [esi+4], ecx
.Lt_00B0:
.Lt_00AF:
.Lt_00AE:
mov ecx, dword ptr [ebp-8]
mov esi, dword ptr [ecx+4]
and esi, 2097152
test esi, esi
setne dl
mov esi, edx
shr esi, 1
sbb esi, esi
mov ecx, dword ptr [ebp-4]
mov eax, dword ptr [ecx+4]
and eax, 2097152
test eax, eax
setne al
shr eax, 1
sbb eax, eax
and esi, eax
je .Lt_00B3
mov eax, dword ptr [ebp-4]
push dword ptr [eax+60]
mov eax, dword ptr [ebp-8]
push dword ptr [eax+60]
call ASTISEQUALPARAMINIT
add esp, 8
test eax, eax
jne .Lt_00B5
push 36
push 0
push dword ptr [ebp-20]
push dword ptr [ebp+12]
call ERRREPORTPARAMWARN
add esp, 16
.Lt_00B5:
.Lt_00B4:
.Lt_00B3:
.Lt_00B2:
mov eax, dword ptr [ebp-8]
mov esi, dword ptr [eax+160]
mov dword ptr [ebp-8], esi
mov esi, dword ptr [ebp-4]
mov eax, dword ptr [esi+160]
mov dword ptr [ebp-4], eax
inc dword ptr [ebp-20]
jmp .Lt_009F
.Lt_00A0:
.Lt_008A:
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size HCHECKPROTOTYPE, .-HCHECKPROTOTYPE
.balign 16
HCHECKATTRIBS:
.type HCHECKATTRIBS, @function
push ebp
mov ebp, esp
push ebx
.Lt_00B6:
mov eax, dword ptr [ebp+12]
and eax, 33554432
test eax, eax
setne al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebx+4]
and ecx, 33554432
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
cmp eax, ecx
je .Lt_00B9
push 0
push -1
push 20
call ERRREPORT
add esp, 12
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ecx+4]
and eax, 33554432
test eax, eax
je .Lt_00BB
mov eax, dword ptr [ebp+12]
or eax, 33554432
mov ecx, eax
mov dword ptr [ebp+12], ecx
jmp .Lt_00BA
.Lt_00BB:
mov ecx, dword ptr [ebp+12]
and ecx, -33554433
mov eax, ecx
mov dword ptr [ebp+12], eax
.Lt_00BA:
.Lt_00B9:
.Lt_00B8:
mov eax, dword ptr [ebp+12]
and eax, 2
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ecx+4]
and ebx, 2
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
not ebx
and eax, ebx
je .Lt_00BD
push 0
push 0
push 216
call ERRREPORT
add esp, 12
.Lt_00BD:
.Lt_00BC:
mov ebx, dword ptr [ebp+12]
and ebx, 1048576
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+4]
and ecx, 1048576
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
not ecx
and ebx, ecx
je .Lt_00BF
push 0
push 0
push 217
call ERRREPORT
add esp, 12
.Lt_00BF:
.Lt_00BE:
mov ecx, dword ptr [ebp+12]
and ecx, 1073741824
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 1073741824
test eax, eax
setne al
shr eax, 1
sbb eax, eax
not eax
and ecx, eax
je .Lt_00C1
push 0
push 0
push 219
call ERRREPORT
add esp, 12
jmp .Lt_00C0
.Lt_00C1:
mov eax, dword ptr [ebp+12]
and eax, 536870912
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ecx+4]
and ebx, 536870912
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
not ebx
and eax, ebx
je .Lt_00C2
push 0
push 0
push 218
call ERRREPORT
add esp, 12
.Lt_00C2:
.Lt_00C0:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
or eax, dword ptr [ebp+12]
mov ebx, eax
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+4], ebx
.Lt_00B7:
pop ebx
mov esp, ebp
pop ebp
ret
.size HCHECKATTRIBS, .-HCHECKATTRIBS
.balign 16
HCHECKIDTOKEN:
.type HCHECKIDTOKEN, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_00C3:
mov dword ptr [ebp-4], 0
push 0
call LEXGETCLASS
add esp, 4
mov dword ptr [ebp-8], eax
jmp .Lt_00C6
.Lt_00C8:
mov eax, dword ptr [ENV+840]
and eax, 524288
test eax, eax
je .Lt_00CA
lea eax, [SYMB+98352]
cmp dword ptr [SYMB+98516], eax
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_00CC
mov ebx, dword ptr [LEX+839664]
mov eax, dword ptr [ebx+16532]
cmp dword ptr [eax+4120], 0
jle .Lt_00CE
push 0
push 0
push 89
call ERRREPORT
add esp, 12
.Lt_00CE:
.Lt_00CD:
.Lt_00CC:
.Lt_00CB:
.Lt_00CA:
.Lt_00C9:
jmp .Lt_00C5
.Lt_00CF:
cmp dword ptr [ENV+136], 3
je .Lt_00D1
mov eax, dword ptr [ebp+8]
not eax
cmp dword ptr [PARSER+92], 0
seta bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
je .Lt_00D3
push 0
push 0
push 4
call ERRREPORT
add esp, 12
jmp .Lt_00C4
.Lt_00D3:
.Lt_00D2:
.Lt_00D1:
.Lt_00D0:
jmp .Lt_00C5
.Lt_00D4:
cmp dword ptr [ENV+136], 3
je .Lt_00D6
push 0
push 0
push 4
call ERRREPORT
add esp, 12
jmp .Lt_00C4
.Lt_00D6:
.Lt_00D5:
jmp .Lt_00C5
.Lt_00D7:
push 0
push 0
push 14
call ERRREPORT
add esp, 12
jmp .Lt_00C4
jmp .Lt_00C5
.Lt_00C6:
cmp dword ptr [ebp-8], 5
ja .Lt_00D7
mov ebx, dword ptr [ebp-8]
jmp dword ptr [.LT_00D8+ebx*4]
.LT_00D8:
.int .Lt_00C8
.int .Lt_00D4
.int .Lt_00CF
.int .Lt_00D7
.int .Lt_00D7
.int .Lt_00D4
.Lt_00C5:
mov dword ptr [ebp-4], -1
.Lt_00C4:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HCHECKIDTOKEN, .-HCHECKIDTOKEN
.balign 16
HGETID:
.type HGETID, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_00D9:
mov dword ptr [ebp-4], 0
cmp dword ptr [ebp+8], 0
jne .Lt_00DC
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [eax+16532]
mov eax, dword ptr [ebx+4116]
mov dword ptr [ebp-8], eax
jmp .Lt_00DB
.Lt_00DC:
push 0
push 0
call LEXGETTEXT
push eax
push dword ptr [ebp+8]
call SYMBLOOKUPAT
add esp, 16
mov dword ptr [ebp-8], eax
.Lt_00DB:
cmp dword ptr [ebp-8], 0
je .Lt_00DE
push 3
push dword ptr [ebp-8]
call SYMBFINDBYCLASS
add esp, 8
mov dword ptr [ebp-12], eax
jmp .Lt_00DD
.Lt_00DE:
mov dword ptr [ebp-12], 0
.Lt_00DD:
cmp dword ptr [ebp+8], 0
setne al
shr eax, 1
sbb eax, eax
push eax
call HCHECKIDTOKEN
add esp, 4
test eax, eax
jne .Lt_00E0
push 0
push 0
call SYMBUNIQUELABEL
push eax
push 0
push dword ptr [ebp+12]
call fb_StrAssign
add esp, 20
mov eax, dword ptr [ebp+16]
mov dword ptr [eax], -2147483648
push 0
push 0
push 0
push 40
call HSKIPUNTIL
add esp, 16
jmp .Lt_00DA
.Lt_00E0:
.Lt_00DF:
push 0
push 0
call LEXGETTEXT
push eax
push 0
push dword ptr [ebp+12]
call fb_StrAssign
add esp, 20
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [eax+16532]
mov eax, dword ptr [ebp+16]
mov ecx, dword ptr [ebx+8]
mov dword ptr [eax], ecx
cmp dword ptr [ebp+20], 0
je .Lt_00E2
mov ecx, dword ptr [ebp+16]
cmp dword ptr [ecx], -2147483648
je .Lt_00E4
push 0
push 0
push 25
call ERRREPORT
add esp, 12
mov ecx, dword ptr [ebp+16]
mov dword ptr [ecx], -2147483648
.Lt_00E4:
.Lt_00E3:
.Lt_00E2:
.Lt_00E1:
mov ecx, dword ptr [ebp+16]
cmp dword ptr [ecx], -2147483648
je .Lt_00E6
mov ecx, dword ptr [ENV+840]
and ecx, 8388608
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
test ecx, ecx
jne .Lt_00E8
push 0
push 147
push 8388608
call ERRREPORTNOTALLOWED
add esp, 12
.Lt_00E8:
.Lt_00E7:
.Lt_00E6:
.Lt_00E5:
push 0
call LEXSKIPTOKEN
add esp, 4
mov ecx, dword ptr [ebp-12]
mov dword ptr [ebp-4], ecx
.Lt_00DA:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HGETID, .-HGETID
.balign 16
CNAKEDATTRIBUTE:
.type CNAKEDATTRIBUTE, @function
push ebp
mov ebp, esp
.Lt_0128:
push 6
push offset Lt_012A
push -1
push 0
call LEXGETTEXT
push eax
call fb_StrAllocTempDescZ
add esp, 4
push eax
call fb_StrUcase2
add esp, 8
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_012C
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [ebp+8]
or dword ptr [eax], 268435456
.Lt_012C:
.Lt_012B:
.Lt_0129:
mov esp, ebp
pop ebp
ret
.size CNAKEDATTRIBUTE, .-CNAKEDATTRIBUTE
.balign 16
COVERRIDEATTRIBUTE:
.type COVERRIDEATTRIBUTE, @function
push ebp
mov ebp, esp
.Lt_012D:
push 0
push dword ptr [ebp+8]
call SYMBPROCCHECKOVERRIDDEN
add esp, 8
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 257
jne .Lt_0130
jmp .Lt_012E
.Lt_0130:
.Lt_012F:
push 9
push offset Lt_0131
push -1
push 0
call LEXGETTEXT
push eax
call fb_StrAllocTempDescZ
add esp, 4
push eax
call fb_StrUcase2
add esp, 8
push eax
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_0133
push dword ptr [ebp+8]
call SYMBPROCGETOVERRIDDEN
add esp, 4
test eax, eax
jne .Lt_0135
push 0
push 0
push 222
call ERRREPORT
add esp, 12
.Lt_0135:
.Lt_0134:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0133:
.Lt_0132:
.Lt_012E:
mov esp, ebp
pop ebp
ret
.size COVERRIDEATTRIBUTE, .-COVERRIDEATTRIBUTE
.balign 16
HCHECKATTRIB:
.type HCHECKATTRIB, @function
push ebp
mov ebp, esp
push ebx
.Lt_013C:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+12]
and ebx, dword ptr [eax]
je .Lt_013F
push 0
push -1
push dword ptr [ebp+16]
call ERRREPORT
add esp, 12
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+12]
not ebx
and dword ptr [eax], ebx
.Lt_013F:
.Lt_013E:
.Lt_013D:
pop ebx
mov esp, ebp
pop ebp
ret
.size HCHECKATTRIB, .-HCHECKATTRIB
.balign 16
HCHECKOPOVLPARAMS:
.type HCHECKOPOVLPARAMS, @function
push ebp
mov ebp, esp
sub esp, 56
push ebx
mov dword ptr [ebp-4], 0
.Lt_0140:
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+4]
and ebx, 2048
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-12], ebx
mov dword ptr [ebp-4], 0
mov ebx, dword ptr [ebp+12]
sal ebx, 4
mov eax, dword ptr [AST_OPTB+ebx]
mov dword ptr [ebp-36], eax
jmp .Lt_0143
.Lt_0145:
mov eax, dword ptr [ebp+12]
sal eax, 4
mov ebx, dword ptr [AST_OPTB+eax+4]
and ebx, 1
test ebx, ebx
je .Lt_0146
mov dword ptr [ebp-40], 0
jmp .Lt_039C
.Lt_0146:
mov dword ptr [ebp-40], 1
.Lt_039C:
mov ebx, dword ptr [ebp-40]
mov dword ptr [ebp-16], ebx
mov ebx, dword ptr [ebp-16]
mov dword ptr [ebp-20], ebx
jmp .Lt_0142
.Lt_0148:
mov dword ptr [ebp-16], 0
mov ebx, dword ptr [ebp-16]
mov dword ptr [ebp-20], ebx
jmp .Lt_0142
.Lt_0149:
mov dword ptr [ebp-16], 1
mov ebx, dword ptr [ebp-16]
mov dword ptr [ebp-20], ebx
jmp .Lt_0142
.Lt_014A:
mov ebx, dword ptr [ebp+12]
sal ebx, 4
mov eax, dword ptr [AST_OPTB+ebx+4]
and eax, 1
test eax, eax
je .Lt_014C
mov dword ptr [ebp-16], 0
mov dword ptr [ebp-20], 1
cmp dword ptr [ebp+12], 26
jne .Lt_014E
inc dword ptr [ebp-16]
inc dword ptr [ebp-20]
.Lt_014E:
.Lt_014D:
jmp .Lt_014B
.Lt_014C:
mov dword ptr [ebp-16], 2
mov eax, dword ptr [ebp-16]
mov dword ptr [ebp-20], eax
.Lt_014B:
jmp .Lt_0142
.Lt_014F:
mov eax, dword ptr [ebp+12]
sal eax, 4
mov ebx, dword ptr [AST_OPTB+eax+4]
and ebx, 1
test ebx, ebx
je .Lt_0150
mov dword ptr [ebp-40], 1
jmp .Lt_039D
.Lt_0150:
mov dword ptr [ebp-40], 2
.Lt_039D:
mov ebx, dword ptr [ebp-40]
mov dword ptr [ebp-16], ebx
mov ebx, dword ptr [ebp-16]
mov dword ptr [ebp-20], ebx
jmp .Lt_0142
.Lt_0143:
mov ebx, dword ptr [ebp-36]
add ebx, 4294967294
cmp ebx, 12
ja .Lt_014F
mov ebx, dword ptr [ebp-36]
jmp dword ptr [.LT_0152+ebx*4-8]
.LT_0152:
.int .Lt_0149
.int .Lt_014F
.int .Lt_0145
.int .Lt_0148
.int .Lt_0145
.int .Lt_014F
.int .Lt_014F
.int .Lt_014F
.int .Lt_014F
.int .Lt_014F
.int .Lt_0149
.int .Lt_014F
.int .Lt_014A
.Lt_0142:
mov ebx, dword ptr [ebp+16]
movsx eax, word ptr [ebx+64]
mov dword ptr [ebp-24], eax
cmp dword ptr [ebp-12], 0
je .Lt_0153
mov dword ptr [ebp-32], 1
jmp .Lt_039E
.Lt_0153:
mov dword ptr [ebp-32], 0
.Lt_039E:
mov eax, dword ptr [ebp-24]
sub eax, dword ptr [ebp-32]
mov dword ptr [ebp-28], eax
mov eax, dword ptr [ebp-28]
cmp eax, dword ptr [ebp-16]
setl al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp-28]
cmp ebx, dword ptr [ebp-20]
setg bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
je .Lt_0156
push 0
push -1
push 1
call ERRREPORT
add esp, 12
jmp .Lt_0141
.Lt_0156:
.Lt_0155:
cmp dword ptr [ebp-24], 0
jle .Lt_0158
mov ebx, dword ptr [ebp+16]
mov eax, dword ptr [ebx+72]
mov dword ptr [ebp-36], eax
mov eax, dword ptr [ebp-36]
cmp dword ptr [eax+52], 4
jne .Lt_015A
push 142
push 1
push dword ptr [ebp+16]
call HPARAMERROR
add esp, 12
jmp .Lt_0141
.Lt_015A:
.Lt_0159:
mov eax, dword ptr [ebp-36]
mov ebx, dword ptr [eax+4]
and ebx, 2097152
test ebx, ebx
je .Lt_015C
push 144
push 1
push dword ptr [ebp+16]
call HPARAMERROR
add esp, 12
jmp .Lt_0141
.Lt_015C:
.Lt_015B:
mov ebx, dword ptr [ebp+12]
sal ebx, 4
mov eax, dword ptr [AST_OPTB+ebx]
mov dword ptr [ebp-40], eax
jmp .Lt_015E
.Lt_0160:
mov eax, dword ptr [ebp-36]
mov ebx, dword ptr [eax+24]
and ebx, 511
mov dword ptr [ebp-44], ebx
cmp dword ptr [ebp-44], 18
je .Lt_0164
.Lt_0165:
cmp dword ptr [ebp-44], 9
jne .Lt_0163
.Lt_0164:
jmp .Lt_0161
.Lt_0163:
push 136
push 1
push dword ptr [ebp+16]
call HPARAMERROR
add esp, 12
jmp .Lt_0141
.Lt_0166:
.Lt_0161:
jmp .Lt_015D
.Lt_0167:
cmp dword ptr [ebp-24], 1
jle .Lt_0169
mov ebx, dword ptr [ebp-36]
mov eax, dword ptr [ebx+160]
mov dword ptr [ebp-44], eax
mov eax, dword ptr [ebp-44]
cmp dword ptr [eax+52], 4
jne .Lt_016B
push 142
push 2
push dword ptr [ebp+16]
call HPARAMERROR
add esp, 12
jmp .Lt_0141
.Lt_016B:
.Lt_016A:
mov eax, dword ptr [ebp-44]
mov ebx, dword ptr [eax+4]
and ebx, 2097152
test ebx, ebx
je .Lt_016D
push 144
push 2
push dword ptr [ebp+16]
call HPARAMERROR
add esp, 12
jmp .Lt_0141
.Lt_016D:
.Lt_016C:
mov ebx, dword ptr [ebp-36]
mov eax, dword ptr [ebx+24]
and eax, 511
mov dword ptr [ebp-48], eax
cmp dword ptr [ebp-48], 18
je .Lt_0171
.Lt_0172:
cmp dword ptr [ebp-48], 9
jne .Lt_0170
.Lt_0171:
jmp .Lt_016E
.Lt_0170:
mov eax, dword ptr [ebp-44]
mov ebx, dword ptr [eax+24]
and ebx, 511
mov dword ptr [ebp-52], ebx
cmp dword ptr [ebp-52], 18
je .Lt_0177
.Lt_0178:
cmp dword ptr [ebp-52], 9
jne .Lt_0176
.Lt_0177:
jmp .Lt_0174
.Lt_0176:
push 136
push 2
push dword ptr [ebp+16]
call HPARAMERROR
add esp, 12
jmp .Lt_0141
.Lt_0179:
.Lt_0174:
.Lt_0173:
.Lt_016E:
.Lt_0169:
.Lt_0168:
jmp .Lt_015D
.Lt_017A:
cmp dword ptr [ebp+12], 18
je .Lt_017D
.Lt_017E:
cmp dword ptr [ebp+12], 19
jne .Lt_017C
.Lt_017D:
mov ebx, dword ptr [ebp-36]
mov eax, dword ptr [ebx+24]
and eax, 511
and eax, 480
je .Lt_017F
mov dword ptr [ebp-44], 22
jmp .Lt_039F
.Lt_017F:
mov eax, dword ptr [ebp-36]
mov ebx, dword ptr [eax+24]
and ebx, 511
and ebx, 31
mov dword ptr [ebp-44], ebx
.Lt_039F:
mov ebx, dword ptr [ebp-44]
imul ebx, 28
cmp dword ptr [SYMB_DTYPETB+ebx], 0
jne .Lt_0182
mov dword ptr [ebp-48], -1
mov ebx, dword ptr [ebp-36]
mov eax, dword ptr [ebx+24]
and eax, 511
and eax, 480
test eax, eax
je .Lt_0184
mov dword ptr [ebp-48], 0
.Lt_0184:
.Lt_0183:
mov eax, dword ptr [ebp-36]
mov ebx, dword ptr [eax+24]
and ebx, 511
mov dword ptr [ebp-52], ebx
cmp dword ptr [ebp-52], 3
je .Lt_0188
.Lt_0189:
cmp dword ptr [ebp-52], 6
jne .Lt_0187
.Lt_0188:
mov dword ptr [ebp-48], 0
.Lt_0187:
.Lt_0185:
cmp dword ptr [ebp-48], 0
jne .Lt_018B
push 234
push 1
push dword ptr [ebp+16]
call HPARAMERROR
add esp, 12
jmp .Lt_0141
.Lt_018B:
.Lt_018A:
jmp .Lt_0181
.Lt_0182:
push 234
push 1
push dword ptr [ebp+16]
call HPARAMERROR
add esp, 12
jmp .Lt_0141
.Lt_0181:
jmp .Lt_017B
.Lt_017C:
mov ebx, dword ptr [ebp-36]
mov eax, dword ptr [ebx+24]
and eax, 511
and eax, 480
je .Lt_018D
mov dword ptr [ebp-44], 22
jmp .Lt_03A0
.Lt_018D:
mov eax, dword ptr [ebp-36]
mov ebx, dword ptr [eax+24]
and ebx, 511
and ebx, 31
mov dword ptr [ebp-44], ebx
.Lt_03A0:
mov ebx, dword ptr [ebp-44]
imul ebx, 28
cmp dword ptr [SYMB_DTYPETB+ebx], 0
jne .Lt_0190
mov ebx, dword ptr [ebp-36]
mov eax, dword ptr [ebx+24]
and eax, 511
and eax, 480
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_0192
push 235
push 1
push dword ptr [ebp+16]
call HPARAMERROR
add esp, 12
jmp .Lt_0141
.Lt_0192:
.Lt_0191:
jmp .Lt_018F
.Lt_0190:
push 235
push 1
push dword ptr [ebp+16]
call HPARAMERROR
add esp, 12
jmp .Lt_0141
.Lt_018F:
.Lt_018C:
.Lt_017B:
jmp .Lt_015D
.Lt_0193:
mov eax, dword ptr [ebp+12]
mov dword ptr [ebp-44], eax
jmp .Lt_0195
.Lt_0197:
cmp dword ptr [ebp-24], 1
jle .Lt_0199
mov eax, dword ptr [ebp-36]
mov ebx, dword ptr [eax+160]
mov dword ptr [ebp-48], ebx
mov ebx, dword ptr [ebp-48]
cmp dword ptr [ebx+52], 4
jne .Lt_019B
push 142
push 2
push dword ptr [ebp+16]
call HPARAMERROR
add esp, 12
jmp .Lt_0141
.Lt_019B:
.Lt_019A:
mov ebx, dword ptr [ebp-48]
mov eax, dword ptr [ebx+4]
and eax, 2097152
test eax, eax
je .Lt_019D
push 144
push 2
push dword ptr [ebp+16]
call HPARAMERROR
add esp, 12
jmp .Lt_0141
.Lt_019D:
.Lt_019C:
mov eax, dword ptr [ebp-36]
mov ebx, dword ptr [eax+24]
and ebx, 511
mov dword ptr [ebp-52], ebx
cmp dword ptr [ebp-52], 18
je .Lt_01A1
.Lt_01A2:
cmp dword ptr [ebp-52], 9
jne .Lt_01A0
.Lt_01A1:
jmp .Lt_019E
.Lt_01A0:
mov ebx, dword ptr [ebp-48]
mov eax, dword ptr [ebx+24]
and eax, 511
mov dword ptr [ebp-56], eax
cmp dword ptr [ebp-56], 18
je .Lt_01A7
.Lt_01A8:
cmp dword ptr [ebp-56], 9
jne .Lt_01A6
.Lt_01A7:
jmp .Lt_01A4
.Lt_01A6:
push 136
push 2
push dword ptr [ebp+16]
call HPARAMERROR
add esp, 12
jmp .Lt_0141
.Lt_01A9:
.Lt_01A4:
.Lt_01A3:
.Lt_019E:
.Lt_0199:
.Lt_0198:
jmp .Lt_0194
.Lt_01AA:
mov eax, dword ptr [ebp+12]
sal eax, 4
mov ebx, dword ptr [AST_OPTB+eax+4]
and ebx, 1
test ebx, ebx
je .Lt_01AC
cmp dword ptr [ebp-24], 1
jle .Lt_01AE
cmp dword ptr [ebp-12], 0
je .Lt_01B0
mov ebx, dword ptr [ebp-36]
mov eax, dword ptr [ebx+160]
mov dword ptr [ebp-36], eax
.Lt_01B0:
.Lt_01AF:
cmp dword ptr [ebp-36], 0
sete al
shr eax, 1
sbb eax, eax
cmp dword ptr [ebp+8], 0
sete bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
je .Lt_01B2
push 141
push 1
push dword ptr [ebp+16]
call HPARAMERROR
add esp, 12
jmp .Lt_0141
.Lt_01B2:
.Lt_01B1:
mov ebx, dword ptr [ebp-36]
cmp dword ptr [ebx+52], 4
jne .Lt_01B4
push 142
push 1
push dword ptr [ebp+16]
call HPARAMERROR
add esp, 12
jmp .Lt_0141
.Lt_01B4:
.Lt_01B3:
mov ebx, dword ptr [ebp-36]
mov eax, dword ptr [ebx+4]
and eax, 2097152
test eax, eax
je .Lt_01B6
push 144
push 1
push dword ptr [ebp+16]
call HPARAMERROR
add esp, 12
jmp .Lt_0141
.Lt_01B6:
.Lt_01B5:
mov eax, dword ptr [ebp-36]
mov ebx, dword ptr [eax+24]
and ebx, 511
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+24]
and ecx, 511
cmp ebx, ecx
setne bl
shr ebx, 1
sbb ebx, ebx
mov ecx, dword ptr [ebp-36]
mov eax, dword ptr [ecx+28]
cmp eax, dword ptr [ebp+8]
setne cl
shr ecx, 1
sbb ecx, ecx
or ebx, ecx
je .Lt_01B8
push 141
push 1
push dword ptr [ebp+16]
call HPARAMERROR
add esp, 12
jmp .Lt_0141
.Lt_01B8:
.Lt_01B7:
.Lt_01AE:
.Lt_01AD:
.Lt_01AC:
.Lt_01AB:
jmp .Lt_0194
.Lt_01B9:
jmp .Lt_0194
.Lt_0195:
mov ecx, dword ptr [ebp-44]
add ecx, 4294967272
cmp ecx, 26
ja .Lt_01B9
mov ecx, dword ptr [ebp-44]
jmp dword ptr [.LT_01BA+ecx*4-96]
.LT_01BA:
.int .Lt_01AA
.int .Lt_01AA
.int .Lt_01AA
.int .Lt_01B9
.int .Lt_01B9
.int .Lt_01B9
.int .Lt_01B9
.int .Lt_01B9
.int .Lt_01B9
.int .Lt_01B9
.int .Lt_01B9
.int .Lt_01B9
.int .Lt_01B9
.int .Lt_01B9
.int .Lt_01B9
.int .Lt_01B9
.int .Lt_01B9
.int .Lt_01B9
.int .Lt_01B9
.int .Lt_01B9
.int .Lt_01B9
.int .Lt_0197
.int .Lt_0197
.int .Lt_0197
.int .Lt_0197
.int .Lt_0197
.int .Lt_0197
.Lt_0194:
jmp .Lt_015D
.Lt_015E:
mov ecx, dword ptr [ebp-40]
add ecx, 4294967293
cmp ecx, 11
ja .Lt_015D
mov ecx, dword ptr [ebp-40]
jmp dword ptr [.LT_01BB+ecx*4-12]
.LT_01BB:
.int .Lt_0167
.int .Lt_0160
.int .Lt_0160
.int .Lt_0160
.int .Lt_015D
.int .Lt_015D
.int .Lt_015D
.int .Lt_015D
.int .Lt_015D
.int .Lt_017A
.int .Lt_015D
.int .Lt_0193
.Lt_015D:
.Lt_0158:
.Lt_0157:
mov dword ptr [ebp-8], 0
mov ecx, dword ptr [ebp+12]
sal ecx, 4
mov ebx, dword ptr [AST_OPTB+ecx]
mov dword ptr [ebp-36], ebx
cmp dword ptr [ebp-36], 5
jne .Lt_01BE
.Lt_01BF:
mov ebx, dword ptr [ebp+16]
mov ecx, dword ptr [ebp+8]
cmp dword ptr [ebx+28], ecx
jne .Lt_01C1
push 0
push -1
push 139
call ERRREPORT
add esp, 12
jmp .Lt_0141
.Lt_01C1:
.Lt_01C0:
mov ecx, dword ptr [ebp+16]
mov ebx, dword ptr [ecx+24]
and ebx, 511
test ebx, ebx
sete bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-8], ebx
jmp .Lt_01BC
.Lt_01BE:
cmp dword ptr [ebp-36], 4
jne .Lt_01C2
.Lt_01C3:
mov ebx, dword ptr [ebp+16]
mov ecx, dword ptr [ebx+24]
and ecx, 511
test ecx, ecx
sete cl
shr ecx, 1
sbb ecx, ecx
mov dword ptr [ebp-8], ecx
jmp .Lt_01BC
.Lt_01C2:
cmp dword ptr [ebp-36], 2
jne .Lt_01C4
.Lt_01C5:
mov ecx, dword ptr [ebp+16]
mov ebx, dword ptr [ecx+24]
and ebx, 511
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-8], ebx
jmp .Lt_01BC
.Lt_01C4:
cmp dword ptr [ebp-36], 6
jne .Lt_01C6
.Lt_01C7:
cmp dword ptr [ebp+12], 22
jne .Lt_01C9
.Lt_01CA:
mov ebx, dword ptr [ebp+16]
mov ecx, dword ptr [ebx+24]
and ecx, 511
and ecx, 480
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
not ecx
mov dword ptr [ebp-8], ecx
jmp .Lt_01C8
.Lt_01C9:
cmp dword ptr [ebp+12], 77
jne .Lt_01CB
.Lt_01CC:
mov ecx, dword ptr [ebp+16]
mov ebx, dword ptr [ecx+24]
and ebx, 511
cmp ebx, 18
setne bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-8], ebx
jmp .Lt_01C8
.Lt_01CB:
mov ebx, dword ptr [ebp+16]
mov ecx, dword ptr [ebx+24]
and ecx, 511
test ecx, ecx
sete cl
shr ecx, 1
sbb ecx, ecx
mov dword ptr [ebp-8], ecx
.Lt_01CD:
.Lt_01C8:
jmp .Lt_01BC
.Lt_01C6:
cmp dword ptr [ebp-36], 12
jne .Lt_01CE
.Lt_01CF:
cmp dword ptr [ebp+12], 18
je .Lt_01D2
.Lt_01D3:
cmp dword ptr [ebp+12], 19
jne .Lt_01D1
.Lt_01D2:
mov ecx, dword ptr [ebp+16]
mov ebx, dword ptr [ecx+24]
and ebx, 511
and ebx, 480
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
not ebx
mov dword ptr [ebp-8], ebx
jmp .Lt_01D0
.Lt_01D1:
mov ebx, dword ptr [ebp+16]
mov ecx, dword ptr [ebx+24]
and ecx, 511
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
mov dword ptr [ebp-8], ecx
.Lt_01D4:
.Lt_01D0:
jmp .Lt_01BC
.Lt_01CE:
cmp dword ptr [ebp-36], 3
jne .Lt_01D5
.Lt_01D6:
mov ecx, dword ptr [ebp+12]
mov dword ptr [ebp-40], ecx
jmp .Lt_01D8
.Lt_01DA:
mov ecx, dword ptr [ebp+16]
mov ebx, dword ptr [ecx+24]
and ebx, 511
cmp ebx, 7
setne bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-8], ebx
jmp .Lt_01D7
.Lt_01DB:
mov ebx, dword ptr [ebp+16]
mov ecx, dword ptr [ebx+24]
and ecx, 511
test ecx, ecx
sete cl
shr ecx, 1
sbb ecx, ecx
mov dword ptr [ebp-8], ecx
jmp .Lt_01D7
.Lt_01DC:
mov ecx, dword ptr [ebp+12]
sal ecx, 4
mov ebx, dword ptr [AST_OPTB+ecx+4]
and ebx, 1
test ebx, ebx
je .Lt_01DE
mov ebx, dword ptr [ebp+16]
mov ecx, dword ptr [ebx+24]
and ecx, 511
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
mov dword ptr [ebp-8], ecx
jmp .Lt_01DD
.Lt_01DE:
mov ecx, dword ptr [ebp+16]
mov ebx, dword ptr [ecx+24]
and ebx, 511
test ebx, ebx
sete bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-8], ebx
.Lt_01DD:
jmp .Lt_01D7
.Lt_01D8:
mov ebx, dword ptr [ebp-40]
add ebx, 4294967273
cmp ebx, 27
ja .Lt_01DC
mov ebx, dword ptr [ebp-40]
jmp dword ptr [.LT_01DF+ebx*4-92]
.LT_01DF:
.int .Lt_01DB
.int .Lt_01DC
.int .Lt_01DC
.int .Lt_01DC
.int .Lt_01DC
.int .Lt_01DC
.int .Lt_01DC
.int .Lt_01DC
.int .Lt_01DC
.int .Lt_01DC
.int .Lt_01DC
.int .Lt_01DC
.int .Lt_01DC
.int .Lt_01DC
.int .Lt_01DC
.int .Lt_01DC
.int .Lt_01DC
.int .Lt_01DC
.int .Lt_01DC
.int .Lt_01DC
.int .Lt_01DC
.int .Lt_01DC
.int .Lt_01DA
.int .Lt_01DA
.int .Lt_01DA
.int .Lt_01DA
.int .Lt_01DA
.int .Lt_01DA
.Lt_01D7:
jmp .Lt_01BC
.Lt_01D5:
cmp dword ptr [ebp-36], 14
jne .Lt_01E0
.Lt_01E1:
mov ebx, dword ptr [ebp+12]
sal ebx, 4
mov ecx, dword ptr [AST_OPTB+ebx+4]
and ecx, 1
test ecx, ecx
je .Lt_01E3
cmp dword ptr [ebp+12], 26
jne .Lt_01E5
mov ecx, dword ptr [ebp+16]
mov ebx, dword ptr [ecx+24]
and ebx, 511
cmp ebx, 7
setne bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-8], ebx
jmp .Lt_01E4
.Lt_01E5:
mov ebx, dword ptr [ebp+16]
mov ecx, dword ptr [ebx+24]
and ecx, 511
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
mov dword ptr [ebp-8], ecx
.Lt_01E4:
jmp .Lt_01E2
.Lt_01E3:
mov ecx, dword ptr [ebp+16]
mov ebx, dword ptr [ecx+24]
and ebx, 511
test ebx, ebx
sete bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-8], ebx
.Lt_01E2:
.Lt_01E0:
.Lt_01BC:
cmp dword ptr [ebp-8], 0
je .Lt_01E7
push 0
push -1
push 140
call ERRREPORT
add esp, 12
jmp .Lt_0141
.Lt_01E7:
.Lt_01E6:
mov dword ptr [ebp-4], -1
.Lt_0141:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HCHECKOPOVLPARAMS, .-HCHECKOPOVLPARAMS
.balign 16
HCHECKISSELFCLONEBYVAL:
.type HCHECKISSELFCLONEBYVAL, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_01E8:
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+72]
mov dword ptr [ebp-8], ebx
mov ebx, dword ptr [ebp+16]
and ebx, 1
je .Lt_01EB
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx+160]
mov dword ptr [ebp-8], eax
.Lt_01EB:
.Lt_01EA:
cmp dword ptr [ebp-8], 0
jne .Lt_01ED
jmp .Lt_01E9
.Lt_01ED:
.Lt_01EC:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+24]
and ebx, 511
cmp ebx, 18
je .Lt_01EF
jmp .Lt_01E9
.Lt_01EF:
.Lt_01EE:
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebp+8]
cmp dword ptr [ebx+28], eax
je .Lt_01F1
jmp .Lt_01E9
.Lt_01F1:
.Lt_01F0:
mov eax, dword ptr [ebp-8]
cmp dword ptr [eax+52], 1
je .Lt_01F3
jmp .Lt_01E9
.Lt_01F3:
.Lt_01F2:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+24]
and ebx, 511
and ebx, 480
je .Lt_01F4
mov dword ptr [ebp-12], 22
jmp .Lt_03B8
.Lt_01F4:
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx+24]
and eax, 511
and eax, 31
mov dword ptr [ebp-12], eax
.Lt_03B8:
mov eax, dword ptr [ebp-12]
imul eax, 28
cmp dword ptr [SYMB_DTYPETB+eax], 0
jne .Lt_01F7
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+24]
and ebx, 511
and ebx, 480
test ebx, ebx
je .Lt_01F9
jmp .Lt_01E9
.Lt_01F9:
.Lt_01F8:
.Lt_01F7:
.Lt_01F6:
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx+160]
mov dword ptr [ebp-8], eax
.Lt_01FA:
cmp dword ptr [ebp-8], 0
je .Lt_01FB
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+4]
and ebx, 2097152
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_01FD
jmp .Lt_01E9
.Lt_01FD:
.Lt_01FC:
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx+160]
mov dword ptr [ebp-8], eax
jmp .Lt_01FA
.Lt_01FB:
mov dword ptr [ebp-4], -1
.Lt_01E9:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HCHECKISSELFCLONEBYVAL, .-HCHECKISSELFCLONEBYVAL
.balign 16
HCHECKPROPPARAMS:
.type HCHECKPROPPARAMS, @function
push ebp
mov ebp, esp
sub esp, 20
push ebx
.Lt_01FE:
cmp dword ptr [ebp+12], 0
je .Lt_0201
mov dword ptr [ebp-4], 0
mov dword ptr [ebp-8], 1
jmp .Lt_0200
.Lt_0201:
mov dword ptr [ebp-4], 1
mov dword ptr [ebp-8], 2
.Lt_0200:
mov eax, dword ptr [ebp+8]
movsx ebx, word ptr [eax+64]
mov eax, dword ptr [ebp-4]
inc eax
cmp ebx, eax
setl bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+8]
movsx ecx, word ptr [eax+64]
mov eax, dword ptr [ebp-8]
inc eax
cmp ecx, eax
setg cl
shr ecx, 1
sbb ecx, ecx
or ebx, ecx
je .Lt_0203
push 0
push -1
cmp dword ptr [ebp+12], 0
je .Lt_0204
mov dword ptr [ebp-20], 189
jmp .Lt_03BA
.Lt_0204:
mov dword ptr [ebp-20], 190
.Lt_03BA:
push dword ptr [ebp-20]
call ERRREPORT
add esp, 12
.Lt_0203:
.Lt_0202:
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ecx+72]
mov dword ptr [ebp-16], ebx
mov dword ptr [ebp-12], 0
.Lt_0206:
cmp dword ptr [ebp-16], 0
je .Lt_0207
mov ebx, dword ptr [ebp-16]
mov ecx, dword ptr [ebx+4]
and ecx, 2097152
test ecx, ecx
je .Lt_0209
push 144
mov ecx, dword ptr [ebp-12]
inc ecx
push ecx
push dword ptr [ebp+8]
call HPARAMERROR
add esp, 12
.Lt_0209:
.Lt_0208:
inc dword ptr [ebp-12]
mov ecx, dword ptr [ebp-16]
mov ebx, dword ptr [ecx+160]
mov dword ptr [ebp-16], ebx
jmp .Lt_0206
.Lt_0207:
.Lt_01FF:
pop ebx
mov esp, ebp
pop ebp
ret
.size HCHECKPROPPARAMS, .-HCHECKPROPPARAMS
.balign 16
HSETUDTPROPERTYFLAGS:
.type HSETUDTPROPERTYFLAGS, @function
push ebp
mov ebp, esp
push ebx
.Lt_020A:
cmp dword ptr [ebp+12], 0
je .Lt_020D
cmp dword ptr [ebp+16], 0
jne .Lt_020F
mov eax, dword ptr [ebp+8]
movsx ebx, word ptr [eax+112]
or ebx, 1024
mov eax, dword ptr [ebp+8]
mov word ptr [eax+112], bx
jmp .Lt_020E
.Lt_020F:
mov ebx, dword ptr [ebp+8]
movsx eax, word ptr [ebx+112]
or eax, 512
mov ebx, dword ptr [ebp+8]
mov word ptr [ebx+112], ax
.Lt_020E:
jmp .Lt_020C
.Lt_020D:
cmp dword ptr [ebp+16], 0
jne .Lt_0211
mov eax, dword ptr [ebp+8]
movsx ebx, word ptr [eax+112]
or ebx, 256
mov eax, dword ptr [ebp+8]
mov word ptr [eax+112], bx
jmp .Lt_0210
.Lt_0211:
mov ebx, dword ptr [ebp+8]
movsx eax, word ptr [ebx+112]
or eax, 128
mov ebx, dword ptr [ebp+8]
mov word ptr [ebx+112], ax
.Lt_0210:
.Lt_020C:
.Lt_020B:
pop ebx
mov esp, ebp
pop ebp
ret
.size HSETUDTPROPERTYFLAGS, .-HSETUDTPROPERTYFLAGS
	#fbc-1.01.0/src/compiler/parser-proc.bas' compilation took 0.04719894984737039 secs

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
Lt_008F:	.ascii	"\"\0"
.balign 4
Lt_010C:	.ascii	"SSE\0"
.balign 4
Lt_0110:	.ascii	"FPU\0"
.balign 4
Lt_012A:	.ascii	"NAKED\0"
.balign 4
Lt_0131:	.ascii	"OVERRIDE\0"
.balign 4
Lt_024F:	.ascii	" (TODO)\0"

.section .ctors, "aw", @progbits
.int fb_ctor__parserzproc
