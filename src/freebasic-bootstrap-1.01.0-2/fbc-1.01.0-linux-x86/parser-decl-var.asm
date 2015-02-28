	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/parser-decl-var.bas' compilation started at 14:16:36 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl HCOMPLAINIFABSTRACTCLASS
HCOMPLAINIFABSTRACTCLASS:
.type HCOMPLAINIFABSTRACTCLASS, @function
push ebp
mov ebp, esp
.Lt_0060:
mov eax, dword ptr [ebp+8]
and eax, 511
cmp eax, 18
jne .Lt_0063
push dword ptr [ebp+12]
call SYMBCOMPGETABSTRACTCOUNT
add esp, 4
test eax, eax
jle .Lt_0065
push 0
push 0
push 305
call ERRREPORT
add esp, 12
.Lt_0065:
.Lt_0064:
.Lt_0063:
.Lt_0062:
.Lt_0061:
mov esp, ebp
pop ebp
ret
.size HCOMPLAINIFABSTRACTCLASS, .-HCOMPLAINIFABSTRACTCLASS
.balign 16

.globl HCOMPLAINABOUTCONSTDYNAMICARRAY
HCOMPLAINABOUTCONSTDYNAMICARRAY:
.type HCOMPLAINABOUTCONSTDYNAMICARRAY, @function
push ebp
mov ebp, esp
push ebx
.Lt_0066:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+24]
and ebx, 512
test ebx, ebx
je .Lt_0069
push 0
push 0
push 274
call ERRREPORT
add esp, 12
.Lt_0069:
.Lt_0068:
.Lt_0067:
pop ebx
mov esp, ebp
pop ebp
ret
.size HCOMPLAINABOUTCONSTDYNAMICARRAY, .-HCOMPLAINABOUTCONSTDYNAMICARRAY
.balign 16

.globl HSYMBOLTYPE
HSYMBOLTYPE:
.type HSYMBOLTYPE, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_006A:
push 1
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call CSYMBOLTYPE
add esp, 16
test eax, eax
jne .Lt_006D
push 0
push 0
push 14
call ERRREPORT
add esp, 12
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 7
mov eax, dword ptr [ebp+12]
mov dword ptr [eax], 0
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
and ebx, 480
je .Lt_006E
mov dword ptr [ebp-4], 22
jmp .Lt_0074
.Lt_006E:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx]
and eax, 31
mov dword ptr [ebp-4], eax
.Lt_0074:
mov eax, dword ptr [ebp-4]
imul eax, 28
mov ecx, dword ptr [SYMB_DTYPETB+eax+4]
mov ebx, ecx
sar ebx, 31
mov eax, dword ptr [ebp+16]
mov dword ptr [eax], ecx
mov dword ptr [eax+4], ebx
.Lt_006D:
.Lt_006C:
mov ecx, dword ptr [ebp+8]
cmp dword ptr [ecx], 0
jne .Lt_0071
push 0
push 0
push 24
call ERRREPORT
add esp, 12
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ecx]
and ebx, 31
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ecx]
and eax, 480
add eax, 32
or ebx, eax
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax]
and ecx, 261632
sal ecx, 1
or ebx, ecx
mov ecx, dword ptr [ebp+8]
mov dword ptr [ecx], ebx
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebx], 0
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebx]
and ecx, 480
je .Lt_0072
mov dword ptr [ebp-4], 22
jmp .Lt_0075
.Lt_0072:
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ecx]
and ebx, 31
mov dword ptr [ebp-4], ebx
.Lt_0075:
mov ebx, dword ptr [ebp-4]
imul ebx, 28
mov eax, dword ptr [SYMB_DTYPETB+ebx+4]
mov ecx, eax
sar ecx, 31
mov ebx, dword ptr [ebp+16]
mov dword ptr [ebx], eax
mov dword ptr [ebx+4], ecx
.Lt_0071:
.Lt_0070:
.Lt_006B:
pop ebx
mov esp, ebp
pop ebp
ret
.size HSYMBOLTYPE, .-HSYMBOLTYPE
.balign 16

.globl HCHECKSCOPE
HCHECKSCOPE:
.type HCHECKSCOPE, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_0076:
cmp dword ptr [PARSER+92], 0
jbe .Lt_0079
mov eax, dword ptr [PARSER+100]
cmp eax, dword ptr [ENV+832]
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_007B
push 0
push 0
push 60
call ERRREPORT
add esp, 12
jmp .Lt_007A
.Lt_007B:
push 0
push 0
push 95
call ERRREPORT
add esp, 12
.Lt_007A:
mov dword ptr [ebp-4], 0
jmp .Lt_0078
.Lt_0079:
mov dword ptr [ebp-4], -1
.Lt_0078:
.Lt_0077:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HCHECKSCOPE, .-HCHECKSCOPE
.balign 16

.globl CVARIABLEDECL
CVARIABLEDECL:
.type CVARIABLEDECL, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
mov dword ptr [ebp-4], 0
.Lt_007D:
mov dword ptr [ebp-8], 0
push 0
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp-12]
mov dword ptr [ebp-16], eax
jmp .Lt_0080
.Lt_0082:
push 1
call CCOMPSTMTISALLOWED
add esp, 4
test eax, eax
jne .Lt_0084
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
mov dword ptr [ebp-4], -1
jmp .Lt_007E
.Lt_0084:
.Lt_0083:
mov eax, dword ptr [ebp+8]
and eax, 96
test eax, eax
je .Lt_0086
push 0
push 0
push 215
call ERRREPORT
add esp, 12
mov eax, dword ptr [ebp+8]
and eax, -33
mov ebx, eax
mov dword ptr [ebp+8], ebx
.Lt_0086:
.Lt_0085:
push 0
call LEXSKIPTOKEN
add esp, 4
mov ebx, dword ptr [ebp+8]
or ebx, 4
mov eax, ebx
mov dword ptr [ebp+8], eax
push 313
call HMATCH
add esp, 4
mov dword ptr [ebp-8], eax
jmp .Lt_007F
.Lt_0087:
mov eax, dword ptr [ebp+8]
or eax, 10
mov ebx, eax
mov dword ptr [ebp+8], ebx
mov ebx, dword ptr [ebp+8]
or ebx, 4
mov eax, ebx
mov dword ptr [ebp+8], eax
call HCHECKSCOPE
test eax, eax
jne .Lt_0089
mov eax, dword ptr [ebp+8]
and eax, -9
mov ebx, eax
mov dword ptr [ebp+8], ebx
.Lt_0089:
.Lt_0088:
mov ebx, dword ptr [ebp+8]
and ebx, 96
test ebx, ebx
je .Lt_008B
push 0
push 0
push 215
call ERRREPORT
add esp, 12
mov ebx, dword ptr [ebp+8]
and ebx, -33
mov eax, ebx
mov dword ptr [ebp+8], eax
.Lt_008B:
.Lt_008A:
push 0
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_007F
.Lt_008C:
cmp dword ptr [ebp+8], 0
jne .Lt_008E
push 0
push 1
call LEXGETLOOKAHEADCLASS
add esp, 8
cmp eax, 4
jne .Lt_0090
mov dword ptr [ebp-4], 0
jmp .Lt_007E
.Lt_0090:
.Lt_008F:
.Lt_008E:
.Lt_008D:
mov eax, dword ptr [ebp+8]
or eax, 16
mov ebx, eax
mov dword ptr [ebp+8], ebx
mov ebx, dword ptr [ebp+8]
or ebx, 3
mov eax, ebx
mov dword ptr [ebp+8], eax
call HCHECKSCOPE
test eax, eax
jne .Lt_0092
mov eax, dword ptr [ebp+8]
and eax, -18
mov ebx, eax
mov dword ptr [ebp+8], ebx
.Lt_0092:
.Lt_0091:
mov ebx, dword ptr [ebp+8]
and ebx, 96
test ebx, ebx
je .Lt_0094
push 0
push 0
push 215
call ERRREPORT
add esp, 12
mov ebx, dword ptr [ebp+8]
and ebx, -33
mov eax, ebx
mov dword ptr [ebp+8], eax
.Lt_0094:
.Lt_0093:
push 0
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_007F
.Lt_0095:
push 9
call CCOMPSTMTISALLOWED
add esp, 4
test eax, eax
jne .Lt_0097
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
mov dword ptr [ebp-4], -1
jmp .Lt_007E
.Lt_0097:
.Lt_0096:
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [ebp+8]
or eax, 2
mov ebx, eax
mov dword ptr [ebp+8], ebx
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 309
jne .Lt_0099
push dword ptr [ebp+8]
call CAUTOVARDECL
add esp, 4
mov dword ptr [ebp-4], -1
jmp .Lt_007E
.Lt_0099:
.Lt_0098:
jmp .Lt_007F
.Lt_009A:
push dword ptr [ebp+8]
call CAUTOVARDECL
add esp, 4
mov dword ptr [ebp-4], -1
jmp .Lt_007E
jmp .Lt_007F
.Lt_009B:
push 9
call CCOMPSTMTISALLOWED
add esp, 4
test eax, eax
jne .Lt_009D
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
mov dword ptr [ebp-4], -1
jmp .Lt_007E
.Lt_009D:
.Lt_009C:
push 0
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_007F
.Lt_0080:
mov eax, dword ptr [ebp-16]
add eax, 4294966990
cmp eax, 5
ja .Lt_009B
mov eax, dword ptr [ebp-16]
jmp dword ptr [.LT_009E+eax*4-1224]
.LT_009E:
.int .Lt_008C
.int .Lt_0095
.int .Lt_009B
.int .Lt_009A
.int .Lt_0082
.int .Lt_0087
.Lt_007F:
cmp dword ptr [ENV+888], 0
je .Lt_00A0
mov eax, dword ptr [ebp+8]
or eax, 4
mov ebx, eax
mov dword ptr [ebp+8], ebx
.Lt_00A0:
.Lt_009F:
mov ebx, dword ptr [ebp+8]
and ebx, 16
test ebx, ebx
jne .Lt_00A2
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 312
jne .Lt_00A4
call HCHECKSCOPE
test eax, eax
jne .Lt_00A6
mov eax, dword ptr [ebp+8]
or eax, 2
mov ebx, eax
mov dword ptr [ebp+8], ebx
jmp .Lt_00A5
.Lt_00A6:
mov ebx, dword ptr [ebp+8]
or ebx, 3
mov eax, ebx
mov dword ptr [ebp+8], eax
.Lt_00A5:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_00A4:
.Lt_00A3:
jmp .Lt_00A1
.Lt_00A2:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 342
jne .Lt_00A8
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [ENV+108]
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 0
je .Lt_00AC
.Lt_00AD:
cmp dword ptr [ebp-16], 1
jne .Lt_00AB
.Lt_00AC:
mov eax, dword ptr [ebp+8]
or eax, 512
mov ebx, eax
mov dword ptr [ebp+8], ebx
.Lt_00AB:
.Lt_00A9:
.Lt_00A8:
.Lt_00A7:
.Lt_00A1:
mov ebx, dword ptr [PARSER+100]
mov eax, dword ptr [ebx+4]
and eax, 2097152
test eax, eax
je .Lt_00AF
mov eax, dword ptr [ebp+8]
or eax, 2
mov ebx, eax
mov dword ptr [ebp+8], ebx
.Lt_00AF:
.Lt_00AE:
push 0
push dword ptr [ebp-12]
push dword ptr [ebp-8]
push dword ptr [ebp+8]
call CVARDECL
add esp, 16
mov dword ptr [ebp-4], -1
.Lt_007E:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CVARIABLEDECL, .-CVARIABLEDECL
.balign 16

.globl HMAYBECONVERTEXPRTB2DIMTB
HMAYBECONVERTEXPRTB2DIMTB:
.type HMAYBECONVERTEXPRTB2DIMTB, @function
push ebp
mov ebp, esp
push ebx
.Lt_0138:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call HEXPRTBISCONST
add esp, 8
test eax, eax
je .Lt_013B
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
and ebx, 4
test ebx, ebx
jne .Lt_013D
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call HMAKEARRAYDIMTB
add esp, 12
.Lt_013D:
.Lt_013C:
jmp .Lt_013A
.Lt_013B:
mov ebx, dword ptr [ebp+8]
or dword ptr [ebx], 4
.Lt_013A:
.Lt_0139:
pop ebx
mov esp, ebp
pop ebp
ret
.size HMAYBECONVERTEXPRTB2DIMTB, .-HMAYBECONVERTEXPRTB2DIMTB
.balign 16

.globl HCOMPLAINABOUTELLIPSIS
HCOMPLAINABOUTELLIPSIS:
.type HCOMPLAINABOUTELLIPSIS, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_013E:
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+8]
dec eax
mov dword ptr [ebp-8], eax
jmp .Lt_0141
.Lt_0144:
mov eax, dword ptr [ebp+12]
add eax, 32
mov ebx, dword ptr [eax]
imul ebx, dword ptr [ebp-4]
sal ebx, 2
mov eax, dword ptr [ebp+12]
add ebx, dword ptr [eax]
cmp dword ptr [ebx+4], 0
jne .Lt_0146
push 0
push 0
push dword ptr [ebp+16]
call ERRREPORT
add esp, 12
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov ebx, dword ptr [ebp+12]
add ebx, 32
mov ecx, dword ptr [ebx]
imul ecx, dword ptr [ebp-4]
sal ecx, 2
mov ebx, dword ptr [ebp+12]
add ecx, dword ptr [ebx]
mov dword ptr [ecx+4], eax
.Lt_0146:
.Lt_0145:
.Lt_0142:
inc dword ptr [ebp-4]
.Lt_0141:
mov eax, dword ptr [ebp-8]
cmp dword ptr [ebp-4], eax
jle .Lt_0144
.Lt_0143:
.Lt_013F:
pop ebx
mov esp, ebp
pop ebp
ret
.size HCOMPLAINABOUTELLIPSIS, .-HCOMPLAINABOUTELLIPSIS
.balign 16

.globl HFLUSHDECL
HFLUSHDECL:
.type HFLUSHDECL, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_0175:
mov eax, dword ptr [ENV+840]
and eax, 2
test eax, eax
je .Lt_0178
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
jmp .Lt_0177
.Lt_0178:
push dword ptr [ebp+8]
call ASTADDUNSCOPED
add esp, 4
mov dword ptr [ebp-4], 0
.Lt_0177:
.Lt_0176:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size HFLUSHDECL, .-HFLUSHDECL
.balign 16

.globl CVARDECL
CVARDECL:
.type CVARDECL, @function
push ebp
mov ebp, esp
sub esp, 120
push ebx
mov dword ptr [ebp-4], 0
.Lt_01BA:
mov dword ptr [ebp-4], 0
lea eax, [SYMB+98352]
cmp dword ptr [SYMB+98516], eax
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_01BF
mov ebx, dword ptr [ENV+832]
cmp dword ptr [PARSER+100], ebx
jne .Lt_01C1
or dword ptr [ebp+8], 3
.Lt_01C1:
.Lt_01C0:
.Lt_01BF:
.Lt_01BE:
mov dword ptr [ebp-40], 0
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 375
jne .Lt_01C3
push 0
call LEXSKIPTOKEN
add esp, 4
lea eax, [ebp-72]
push eax
lea eax, [ebp-16]
push eax
lea eax, [ebp-60]
push eax
call HSYMBOLTYPE
add esp, 12
push dword ptr [ebp-16]
push dword ptr [ebp-60]
call HCOMPLAINIFABSTRACTCLASS
add esp, 8
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-40], -1
.Lt_01C3:
.Lt_01C2:
.Lt_01C4:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-96], eax
mov eax, dword ptr [ebp+16]
cmp eax, 310
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp-96]
and ebx, 1
test ebx, ebx
sete bl
shr ebx, 1
sbb ebx, ebx
and eax, ebx
mov dword ptr [ebp-56], eax
cmp dword ptr [ebp-56], 0
je .Lt_01C7
mov dword ptr [ebp-100], 0
jmp .Lt_0253
.Lt_01C7:
mov dword ptr [ebp-100], 4
.Lt_0253:
mov eax, dword ptr [ebp-100]
or eax, 114
mov ebx, eax
push ebx
call CPARENTID
add esp, 4
mov dword ptr [ebp-20], eax
mov dword ptr [ebp-24], 0
cmp dword ptr [ebp-20], 0
sete al
shr eax, 1
sbb eax, eax
and eax, dword ptr [ebp-56]
je .Lt_01CA
mov dword ptr [ebp-64], 0
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
jne .Lt_01CC
mov dword ptr [ebp-64], -1
jmp .Lt_01CB
.Lt_01CC:
push 0
push 1
call LEXGETLOOKAHEAD
add esp, 8
mov dword ptr [ebp-112], eax
cmp dword ptr [ebp-112], 40
je .Lt_01D0
.Lt_01D1:
cmp dword ptr [ebp-112], 44
je .Lt_01D0
.Lt_01D2:
cmp dword ptr [ebp-112], 375
je .Lt_01D0
.Lt_01D3:
cmp dword ptr [ebp-112], 258
je .Lt_01D0
.Lt_01D4:
cmp dword ptr [ebp-112], 257
je .Lt_01D0
.Lt_01D5:
cmp dword ptr [ebp-112], 256
jne .Lt_01CF
.Lt_01D0:
jmp .Lt_01CD
.Lt_01CF:
mov dword ptr [ebp-64], -1
.Lt_01D6:
.Lt_01CD:
.Lt_01CB:
cmp dword ptr [ebp-64], 0
je .Lt_01D8
call HIDXINPARENSONLYEXPR
push eax
call HCHECKDYNAMICARRAYEXPR
add esp, 4
mov dword ptr [ebp-24], eax
.Lt_01D8:
.Lt_01D7:
.Lt_01CA:
.Lt_01C9:
cmp dword ptr [ebp-24], 0
je .Lt_01DA
mov dword ptr [ebp-8], 0
push 0
push 0
mov eax, dword ptr [ebp-24]
mov ebx, dword ptr [eax+12]
push dword ptr [ebx+12]
push 129
push offset Lt_0259
call fb_StrAssign
add esp, 20
mov dword ptr [ebp-80], -2147483648
jmp .Lt_01D9
.Lt_01DA:
push dword ptr [ebp-56]
lea ebx, [ebp-80]
push ebx
push offset Lt_0259
push dword ptr [ebp-20]
call HGETID
add esp, 16
mov dword ptr [ebp-8], eax
.Lt_01D9:
mov dword ptr [ebp-48], 0
cmp dword ptr [ebp-40], 0
jne .Lt_01DC
mov eax, dword ptr [ebp-80]
mov dword ptr [ebp-60], eax
mov dword ptr [ebp-16], 0
push dword ptr [ebp-16]
push dword ptr [ebp-60]
call SYMBCALCLEN
add esp, 8
mov dword ptr [ebp-72], eax
mov dword ptr [ebp-68], edx
mov dword ptr [ebp-36], -1
jmp .Lt_01DB
.Lt_01DC:
cmp dword ptr [ebp-80], -2147483648
je .Lt_01DE
push 0
push 1
push 0
push offset Lt_0259
push 17
call ERRREPORTEX
add esp, 20
mov dword ptr [ebp-80], -2147483648
.Lt_01DE:
.Lt_01DD:
.Lt_01DB:
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-44], 0
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
sete al
shr eax, 1
sbb eax, eax
mov edx, dword ptr [ebp+20]
test edx, edx
sete dl
shr edx, 1
sbb edx, edx
and eax, edx
je .Lt_01E0
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
jne .Lt_01E2
mov dword ptr [ebp-76], -1
or dword ptr [ebp-96], 4
jmp .Lt_01E1
.Lt_01E2:
push offset Lt_025C
lea eax, [ebp-44]
push eax
lea eax, [ebp-76]
push eax
call CARRAYDECL
add esp, 12
cmp dword ptr [ebp-44], 0
je .Lt_01E4
mov eax, dword ptr [ebp-96]
and eax, 8
test eax, eax
setne al
shr eax, 1
sbb eax, eax
mov edx, dword ptr [ebp-96]
and edx, 16
test edx, edx
setne dl
shr edx, 1
sbb edx, edx
mov ebx, dword ptr [ebp-96]
and ebx, 4
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
and edx, ebx
or eax, edx
je .Lt_01E6
push 0
push 0
push 135
call ERRREPORT
add esp, 12
mov dword ptr [ebp-76], -1
mov dword ptr [ebp-44], 0
.Lt_01E6:
.Lt_01E5:
jmp .Lt_01E3
.Lt_01E4:
or dword ptr [ebp-96], 4
.Lt_01E3:
.Lt_01E1:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_01E8
push 0
push 0
push 7
call ERRREPORT
add esp, 12
jmp .Lt_01E7
.Lt_01E8:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_01E7:
jmp .Lt_01DF
.Lt_01E0:
cmp dword ptr [ebp+16], 310
jne .Lt_01E9
push 0
push 1
push 0
push offset Lt_0259
push 62
call ERRREPORTEX
add esp, 20
mov dword ptr [ebp-76], -1
jmp .Lt_01DF
.Lt_01E9:
and dword ptr [ebp-96], -5
.Lt_01DF:
mov eax, dword ptr [ebp-44]
and dword ptr [ebp-56], eax
mov dword ptr [ebp-84], 0
mov eax, dword ptr [ebp-96]
and eax, 48
test eax, eax
je .Lt_01EB
call CALIASATTRIBUTE
mov dword ptr [ebp-84], eax
.Lt_01EB:
.Lt_01EA:
cmp dword ptr [ebp-40], 0
jne .Lt_01ED
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 375
jne .Lt_01EF
cmp dword ptr [ebp-60], -2147483648
je .Lt_01F1
push 0
push 0
push 17
call ERRREPORT
add esp, 12
mov dword ptr [ebp-60], -2147483648
.Lt_01F1:
.Lt_01F0:
push 0
call LEXSKIPTOKEN
add esp, 4
lea eax, [ebp-72]
push eax
lea eax, [ebp-16]
push eax
lea eax, [ebp-60]
push eax
call HSYMBOLTYPE
add esp, 12
push dword ptr [ebp-16]
push dword ptr [ebp-60]
call HCOMPLAINIFABSTRACTCLASS
add esp, 8
mov dword ptr [ebp-36], 0
jmp .Lt_01EE
.Lt_01EF:
cmp dword ptr [ebp-60], -2147483648
jne .Lt_01F2
mov eax, dword ptr [ENV+840]
and eax, 4194304
test eax, eax
je .Lt_01F4
push offset Lt_0259
call SYMBGETDEFTYPE
add esp, 4
mov dword ptr [ebp-60], eax
mov dword ptr [ebp-16], 0
push dword ptr [ebp-16]
push dword ptr [ebp-60]
call SYMBCALCLEN
add esp, 8
mov dword ptr [ebp-72], eax
mov dword ptr [ebp-68], edx
.Lt_01F4:
.Lt_01F3:
cmp dword ptr [ebp-56], 0
je .Lt_01F6
mov dword ptr [ebp-48], -1
jmp .Lt_01F5
.Lt_01F6:
cmp dword ptr [ebp-60], -2147483648
jne .Lt_01F8
lea eax, [ebp-72]
push eax
lea eax, [ebp-16]
push eax
lea eax, [ebp-60]
push eax
call HERRORDEFTYPENOTALLOWED
add esp, 12
.Lt_01F8:
.Lt_01F7:
.Lt_01F5:
.Lt_01F2:
.Lt_01EE:
.Lt_01ED:
.Lt_01EC:
cmp dword ptr [ebp-24], 0
je .Lt_01FA
mov eax, dword ptr [ebp-24]
mov edx, dword ptr [eax+12]
mov dword ptr [ebp-12], edx
jmp .Lt_01F9
.Lt_01FA:
push dword ptr [ebp-56]
mov edx, dword ptr [ebp-80]
cmp edx, -2147483648
setne dl
shr edx, 1
sbb edx, edx
push edx
push dword ptr [ebp-48]
push dword ptr [ebp-60]
push dword ptr [ebp-8]
push dword ptr [ebp-20]
call HLOOKUPVARANDCHECKPARENT
add esp, 24
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
je .Lt_01FC
mov eax, dword ptr [ebp-12]
cmp dword ptr [eax], 12
jne .Lt_01FE
push dword ptr [ebp-56]
push dword ptr [ebp-12]
call HMAYBEBUILDFIELDACCESS
add esp, 8
mov dword ptr [ebp-24], eax
cmp dword ptr [ebp-24], 0
je .Lt_0200
push dword ptr [ebp-24]
call ASTNEWNIDXARRAY
add esp, 4
push eax
call HCHECKDYNAMICARRAYEXPR
add esp, 4
mov dword ptr [ebp-24], eax
jmp .Lt_01FF
.Lt_0200:
mov dword ptr [ebp-12], 0
.Lt_01FF:
.Lt_01FE:
.Lt_01FD:
.Lt_01FC:
.Lt_01FB:
.Lt_01F9:
cmp dword ptr [ebp-48], 0
je .Lt_0202
cmp dword ptr [ebp-12], 0
je .Lt_0204
mov eax, dword ptr [ebp-12]
mov edx, dword ptr [eax+24]
and edx, 511
mov dword ptr [ebp-60], edx
mov edx, dword ptr [ebp-12]
mov eax, dword ptr [edx+28]
mov dword ptr [ebp-16], eax
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax+36]
mov edx, dword ptr [eax+40]
mov dword ptr [ebp-72], ebx
mov dword ptr [ebp-68], edx
jmp .Lt_0203
.Lt_0204:
mov ebx, dword ptr [ENV+840]
and ebx, 4194304
test ebx, ebx
je .Lt_0205
jmp .Lt_0203
.Lt_0205:
lea ebx, [ebp-72]
push ebx
lea ebx, [ebp-16]
push ebx
lea ebx, [ebp-60]
push ebx
call HERRORDEFTYPENOTALLOWED
add esp, 12
.Lt_0203:
.Lt_0202:
.Lt_0201:
cmp dword ptr [ebp-44], 0
je .Lt_0207
cmp dword ptr [ebp+16], 308
jne .Lt_0209
mov ebx, dword ptr [ebp-96]
and ebx, 4
test ebx, ebx
jne .Lt_020B
cmp dword ptr [ebp-12], 0
je .Lt_020D
mov ebx, dword ptr [ebp-12]
mov edx, dword ptr [ebx+4]
and edx, 8
test edx, edx
je .Lt_020F
mov edx, dword ptr [ebp-12]
cmp dword ptr [edx+56], 0
je .Lt_0211
or dword ptr [ebp-96], 4
mov dword ptr [ebp-56], -1
.Lt_0211:
.Lt_0210:
.Lt_020F:
.Lt_020E:
.Lt_020D:
.Lt_020C:
.Lt_020B:
.Lt_020A:
.Lt_0209:
.Lt_0208:
push offset Lt_0261
push offset Lt_025C
push dword ptr [ebp-76]
lea edx, [ebp-96]
push edx
call HMAYBECONVERTEXPRTB2DIMTB
add esp, 16
mov edx, dword ptr [ebp-96]
and edx, 4
je .Lt_0213
push 75
push offset Lt_025C
push dword ptr [ebp-76]
call HCOMPLAINABOUTELLIPSIS
add esp, 12
jmp .Lt_0212
.Lt_0213:
mov edx, dword ptr [ebp-96]
and edx, 3
test edx, edx
sete dl
shr edx, 1
sbb edx, edx
push edx
push dword ptr [ebp-68]
push dword ptr [ebp-72]
push offset Lt_0263
push dword ptr [ebp-76]
call SYMBCHECKARRAYSIZE
add esp, 20
test eax, eax
jne .Lt_0215
push 0
push 0
push 49
call ERRREPORT
add esp, 12
mov dword ptr [ebp-76], 1
mov dword ptr [Lt_0263], 0
mov dword ptr [Lt_0263+4], 0
mov dword ptr [Lt_0263+8], 0
mov dword ptr [Lt_0263+12], 0
.Lt_0215:
.Lt_0214:
.Lt_0212:
jmp .Lt_0206
.Lt_0207:
cmp dword ptr [ebp-76], 0
jne .Lt_0216
mov eax, dword ptr [ebp-96]
and eax, 3
test eax, eax
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ENV+204]
mov edx, ebx
sar edx, 31
cmp dword ptr [ebp-68], edx
mov ecx, -1
jg .Lt_0265
jl .Lt_0266
cmp dword ptr [ebp-72], ebx
ja .Lt_0265
.Lt_0266:
xor ecx, ecx
.Lt_0265:
and eax, ecx
je .Lt_0218
push 1
push 0
push 24
call ERRREPORTWARN
add esp, 12
.Lt_0218:
.Lt_0217:
.Lt_0216:
.Lt_0206:
mov ecx, dword ptr [ebp-96]
and ecx, 8
je .Lt_021A
push dword ptr [ebp-16]
push dword ptr [ebp-60]
call TYPEHASCTOR
add esp, 8
push dword ptr [ebp-16]
push dword ptr [ebp-60]
mov ebx, eax
call TYPEHASDTOR
add esp, 8
or ebx, eax
je .Lt_021C
push 0
push -1
push 269
call ERRREPORT
add esp, 12
.Lt_021C:
.Lt_021B:
.Lt_021A:
.Lt_0219:
mov eax, dword ptr [ebp-96]
and eax, 4
je .Lt_021E
mov eax, dword ptr [ebp+16]
cmp eax, 310
setne al
shr eax, 1
sbb eax, eax
and eax, dword ptr [ebp-44]
je .Lt_0220
push 1
call CCOMPSTMTISALLOWED
add esp, 4
test eax, eax
jne .Lt_0222
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_01BB
.Lt_0222:
.Lt_0221:
.Lt_0220:
.Lt_021F:
cmp dword ptr [ebp-12], 0
je .Lt_0224
push dword ptr [ebp-12]
call HCOMPLAINABOUTCONSTDYNAMICARRAY
add esp, 4
.Lt_0224:
.Lt_0223:
.Lt_021E:
.Lt_021D:
push dword ptr [ebp+16]
push offset Lt_0261
lea eax, [ebp-44]
push eax
lea eax, [ebp-76]
push eax
lea eax, [ebp-96]
push eax
push dword ptr [ebp-36]
lea eax, [ebp-72]
push eax
lea eax, [ebp-16]
push eax
lea eax, [ebp-60]
push eax
push dword ptr [ebp-84]
push offset Lt_0259
push dword ptr [ebp-20]
push dword ptr [ebp-12]
call HADDVAR
add esp, 52
mov dword ptr [ebp-12], eax
mov dword ptr [ebp-104], 0
mov dword ptr [ebp-108], 0
cmp dword ptr [ebp-12], 0
je .Lt_0226
mov eax, dword ptr [ebp-12]
cmp dword ptr [eax], 12
jne .Lt_0227
mov dword ptr [ebp-112], -1
jmp .Lt_0254
.Lt_0227:
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax+8]
and ebx, 8
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-112], ebx
.Lt_0254:
mov ebx, dword ptr [ebp-112]
mov dword ptr [ebp-52], ebx
push dword ptr [ebp-12]
call SYMBHASDEFCTOR
add esp, 4
mov dword ptr [ebp-104], eax
push dword ptr [ebp-12]
call SYMBHASDTOR
add esp, 4
mov dword ptr [ebp-108], eax
jmp .Lt_0225
.Lt_0226:
mov dword ptr [ebp-52], 0
.Lt_0225:
cmp dword ptr [ebp+20], 0
jne .Lt_022A
mov dword ptr [ebp-88], 0
push 0
call LEXGETTOKEN
add esp, 4
push eax
call HISASSIGNTOKEN
add esp, 4
test eax, eax
je .Lt_022C
push dword ptr [ebp-52]
push dword ptr [ebp-12]
call HVARINIT
add esp, 8
mov dword ptr [ebp-28], eax
cmp dword ptr [ebp-28], 0
setne al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ENV+840]
and ebx, 2
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
sete bl
shr ebx, 1
sbb ebx, ebx
and eax, ebx
je .Lt_022E
mov ebx, dword ptr [ebp-12]
mov eax, dword ptr [ebx+4]
and eax, 11
test eax, eax
jne .Lt_0230
mov eax, dword ptr [ebp-28]
mov dword ptr [ebp-88], eax
push dword ptr [ebp-104]
push dword ptr [ebp-52]
push dword ptr [ebp-12]
call HVARINITDEFAULT
add esp, 12
mov dword ptr [ebp-28], eax
.Lt_0230:
.Lt_022F:
.Lt_022E:
.Lt_022D:
jmp .Lt_022B
.Lt_022C:
cmp dword ptr [ebp-12], 0
je .Lt_0232
push dword ptr [ebp-12]
call SYMBARRAYHASUNKNOWNBOUNDS
add esp, 4
test eax, eax
je .Lt_0234
push 0
push 0
push 280
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_01BB
.Lt_0234:
.Lt_0233:
.Lt_0232:
.Lt_0231:
push dword ptr [ebp-104]
push dword ptr [ebp-52]
push dword ptr [ebp-12]
call HVARINITDEFAULT
add esp, 12
mov dword ptr [ebp-28], eax
.Lt_022B:
jmp .Lt_0229
.Lt_022A:
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-88], 0
.Lt_0229:
cmp dword ptr [ebp-12], 0
je .Lt_0236
cmp dword ptr [ebp+16], 306
je .Lt_0238
cmp dword ptr [ebp-52], 0
jne .Lt_023A
mov dword ptr [ebp-112], 0
mov dword ptr [ebp-116], 0
cmp dword ptr [ebp-28], 0
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp+20]
not ebx
and eax, ebx
push eax
push dword ptr [ebp-12]
call ASTNEWDECL
add esp, 8
mov dword ptr [ebp-116], eax
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax+80]
mov dword ptr [ebp-112], ebx
cmp dword ptr [ebp-112], 0
je .Lt_023C
push -1
mov ebx, dword ptr [ebp-112]
cmp dword ptr [ebx+52], 0
sete al
shr eax, 1
sbb eax, eax
push eax
push dword ptr [ebp-112]
call ASTNEWDECL
add esp, 8
push eax
push dword ptr [ebp-116]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-116], eax
.Lt_023C:
.Lt_023B:
mov eax, dword ptr [ebp-96]
and eax, 4
test eax, eax
setne al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp-76]
test ebx, ebx
setg bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
je .Lt_023E
mov ebx, dword ptr [ebp-12]
mov eax, dword ptr [ebx+4]
and eax, 11
test eax, eax
jne .Lt_0240
push dword ptr [ebp-116]
call HFLUSHDECL
add esp, 4
mov dword ptr [ebp-116], eax
cmp dword ptr [ebp-112], 0
je .Lt_0242
push -1
push 64
push 0
mov eax, dword ptr [ebp-112]
push dword ptr [eax+52]
push dword ptr [ebp-112]
call _Z15ASTTYPEINIFLUSHP8FBSYMBOLP7ASTNODEii
add esp, 16
push eax
push dword ptr [ebp-116]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-116], eax
mov eax, dword ptr [ebp-112]
mov dword ptr [eax+52], 0
.Lt_0242:
.Lt_0241:
.Lt_0240:
.Lt_023F:
.Lt_023E:
.Lt_023D:
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax+8]
or ebx, 8
mov eax, ebx
mov ebx, dword ptr [ebp-12]
mov dword ptr [ebx+8], eax
mov eax, dword ptr [ENV+840]
and eax, 2
test eax, eax
je .Lt_0244
push dword ptr [ebp-108]
push dword ptr [ebp-28]
push dword ptr [ebp-116]
push dword ptr [ebp-12]
call HFLUSHINITIALIZER
add esp, 16
push eax
call ASTADD
add esp, 4
jmp .Lt_0243
.Lt_0244:
push dword ptr [ebp-108]
push dword ptr [ebp-28]
push dword ptr [ebp-116]
push dword ptr [ebp-12]
call HFLUSHINITIALIZER
add esp, 16
push eax
call ASTADDUNSCOPED
add esp, 4
cmp dword ptr [ebp-88], 0
je .Lt_0246
push dword ptr [ebp-12]
call SYMBGETVARHASDTOR
add esp, 4
test eax, eax
je .Lt_0248
push -1
push dword ptr [ebp-12]
call _Z19ASTBUILDVARDTORCALLP8FBSYMBOLi
add esp, 8
push eax
call ASTADD
add esp, 4
.Lt_0248:
.Lt_0247:
push 64
push 0
push dword ptr [ebp-88]
push dword ptr [ebp-12]
call _Z15ASTTYPEINIFLUSHP8FBSYMBOLP7ASTNODEii
add esp, 16
push eax
call ASTADD
add esp, 4
.Lt_0246:
.Lt_0245:
.Lt_0243:
.Lt_023A:
.Lt_0239:
mov eax, dword ptr [ebp-96]
and eax, 4
test eax, eax
setne al
shr eax, 1
sbb eax, eax
and eax, dword ptr [ebp-44]
je .Lt_024A
cmp dword ptr [ebp-24], 0
jne .Lt_024C
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp-12]
call ASTNEWVAR
add esp, 20
mov dword ptr [ebp-24], eax
.Lt_024C:
.Lt_024B:
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax+8]
and ebx, 2048
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
not ebx
push ebx
push dword ptr [ebp+12]
push offset Lt_025C
push dword ptr [ebp-76]
push dword ptr [ebp-24]
call RTLARRAYREDIM
add esp, 20
mov dword ptr [ebp-32], eax
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax+4]
and ebx, 2
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp-12]
mov ecx, dword ptr [eax+4]
and ecx, 128
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
and ebx, ecx
mov ecx, dword ptr [ebp-12]
mov eax, dword ptr [ecx+4]
and eax, 9
test eax, eax
sete al
shr eax, 1
sbb eax, eax
and ebx, eax
mov eax, dword ptr [ebp-52]
not eax
and ebx, eax
je .Lt_024E
push dword ptr [ebp-32]
call HWRAPINSTATICFLAG
add esp, 4
mov dword ptr [ebp-32], eax
.Lt_024E:
.Lt_024D:
push dword ptr [ebp-32]
call ASTADD
add esp, 4
mov dword ptr [ebp-32], 0
.Lt_024A:
.Lt_0249:
.Lt_0238:
.Lt_0237:
.Lt_0236:
.Lt_0235:
cmp dword ptr [ebp+20], 0
je .Lt_0250
mov eax, dword ptr [ebp-12]
mov dword ptr [ebp-4], eax
jmp .Lt_01BB
.Lt_0250:
.Lt_024F:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
je .Lt_0252
jmp .Lt_01C5
.Lt_0252:
.Lt_0251:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_01C6:
jmp .Lt_01C4
.Lt_01C5:
.Lt_01BB:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CVARDECL, .-CVARDECL

.section .bss
.balign 4
	.lcomm	Lt_0259,129
.balign 4
	.lcomm	Lt_0275,64

.section .data
.balign 4
Lt_025C:
.int Lt_0275
.int Lt_0275
.int 64
.int 4
.int 2
.int 8
.int 0
.int 7
.int 2
.int 0
.int 1

.section .bss
.balign 4
	.lcomm	Lt_0263,128

.section .data
.balign 4
Lt_0261:
.int Lt_0263
.int Lt_0263
.int 128
.int 16
.int 1
.int 8
.int 0
.int 7

.section .text
.balign 16

.globl CARRAYDECL
CARRAYDECL:
.type CARRAYDECL, @function
push ebp
mov ebp, esp
push ebx
push esi
.Lt_029A:
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 0
mov eax, dword ptr [ebp+12]
mov dword ptr [eax], -1
.Lt_029C:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 8
jl .Lt_02A0
push 0
push 0
push 48
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push 41
call HSKIPUNTIL
add esp, 16
jmp .Lt_029D
.Lt_02A0:
.Lt_029F:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 371
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebx]
test ecx, ecx
sete cl
shr ecx, 1
sbb ecx, ecx
mov ebx, dword ptr [ebp+12]
mov esi, dword ptr [ebx]
test esi, esi
sete dl
mov esi, edx
shr esi, 1
sbb esi, esi
or ecx, esi
and eax, ecx
je .Lt_02A2
mov ecx, dword ptr [ebp+12]
mov dword ptr [ecx], 0
push 0
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_02A1
.Lt_02A2:
mov ecx, dword ptr [ebp+12]
cmp dword ptr [ecx], 0
jne .Lt_02A3
push 0
push 0
push 93
call ERRREPORT
add esp, 12
jmp .Lt_02A1
.Lt_02A3:
push dword ptr [ebp+16]
push dword ptr [ebp+8]
call CARRAYDIMENSION
add esp, 8
.Lt_02A1:
mov ecx, dword ptr [ebp+8]
inc dword ptr [ecx]
.Lt_029E:
push 44
call HMATCH
add esp, 4
test eax, eax
jne .Lt_029C
.Lt_029D:
.Lt_029B:
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size CARRAYDECL, .-CARRAYDECL
.balign 16
fb_ctor__parserzdeclzvar:
.type fb_ctor__parserzdeclzvar, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__parserzdeclzvar, .-fb_ctor__parserzdeclzvar
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
HEXPRTBISCONST:
.type HEXPRTBISCONST, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_00B0:
mov dword ptr [ebp-8], 0
mov eax, dword ptr [ebp+8]
dec eax
mov dword ptr [ebp-12], eax
jmp .Lt_00B3
.Lt_00B6:
mov eax, dword ptr [ebp+12]
add eax, 32
mov ebx, dword ptr [eax]
imul ebx, dword ptr [ebp-8]
sal ebx, 2
mov eax, dword ptr [ebp+12]
add ebx, dword ptr [eax]
mov eax, dword ptr [ebx]
mov ebx, dword ptr [eax]
cmp ebx, 16
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_00B8
mov dword ptr [ebp-4], 0
jmp .Lt_00B1
jmp .Lt_00B7
.Lt_00B8:
mov ebx, dword ptr [ebp+12]
add ebx, 32
mov eax, dword ptr [ebx]
imul eax, dword ptr [ebp-8]
sal eax, 2
mov ebx, dword ptr [ebp+12]
add eax, dword ptr [ebx]
cmp dword ptr [eax+4], 0
jne .Lt_00B9
jmp .Lt_00B7
.Lt_00B9:
mov eax, dword ptr [ebp+12]
add eax, 32
mov ebx, dword ptr [eax]
imul ebx, dword ptr [ebp-8]
sal ebx, 2
mov eax, dword ptr [ebp+12]
add ebx, dword ptr [eax]
mov eax, dword ptr [ebx+4]
mov ebx, dword ptr [eax]
cmp ebx, 16
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_00BA
mov dword ptr [ebp-4], 0
jmp .Lt_00B1
.Lt_00BA:
.Lt_00B7:
.Lt_00B4:
inc dword ptr [ebp-8]
.Lt_00B3:
mov ebx, dword ptr [ebp-12]
cmp dword ptr [ebp-8], ebx
jle .Lt_00B6
.Lt_00B5:
mov dword ptr [ebp-4], -1
.Lt_00B1:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HEXPRTBISCONST, .-HEXPRTBISCONST
.balign 16
HCHECKEXTERNVAR:
.type HCHECKEXTERNVAR, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
push esi
push edi
mov dword ptr [ebp-4], 0
.Lt_00BB:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+24]
cmp ebx, dword ptr [ebp+16]
setne bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [ebp+20]
cmp ecx, dword ptr [eax+28]
setne dl
mov esi, edx
shr esi, 1
sbb esi, esi
or ebx, esi
je .Lt_00BE
push 0
push 1
push 0
push dword ptr [ebp+12]
push 20
call ERRREPORTEX
add esp, 20
jmp .Lt_00BC
.Lt_00BE:
.Lt_00BD:
mov esi, dword ptr [ebp+24]
mov ebx, dword ptr [esi]
and ebx, 4
mov esi, dword ptr [ebp+8]
mov eax, dword ptr [esi+4]
and eax, 4
cmp ebx, eax
je .Lt_00C0
push 0
push 1
push 0
push dword ptr [ebp+12]
push 53
call ERRREPORTEX
add esp, 20
jmp .Lt_00BC
.Lt_00C0:
.Lt_00BF:
mov eax, dword ptr [ebp+28]
cmp eax, -1
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp+8]
mov esi, dword ptr [ebx+56]
cmp esi, -1
sete dl
mov esi, edx
shr esi, 1
sbb esi, esi
or eax, esi
je .Lt_00C2
mov esi, dword ptr [ebp+28]
test esi, esi
setne dl
mov esi, edx
shr esi, 1
sbb esi, esi
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
cmp esi, ebx
je .Lt_00C4
push 0
push 1
push 0
push dword ptr [ebp+12]
push 36
call ERRREPORTEX
add esp, 20
jmp .Lt_00BC
.Lt_00C4:
.Lt_00C3:
mov dword ptr [ebp-4], -1
jmp .Lt_00BC
.Lt_00C2:
.Lt_00C1:
mov ebx, dword ptr [ebp+8]
mov esi, dword ptr [ebx+56]
cmp dword ptr [ebp+28], esi
je .Lt_00C6
push 0
push 1
push 0
push dword ptr [ebp+12]
push 36
call ERRREPORTEX
add esp, 20
jmp .Lt_00BC
.Lt_00C6:
.Lt_00C5:
mov esi, dword ptr [ebp+24]
mov ebx, dword ptr [esi]
and ebx, 4
test ebx, ebx
jne .Lt_00C8
mov dword ptr [ebp-8], 0
mov ebx, dword ptr [ebp+28]
dec ebx
mov dword ptr [ebp-12], ebx
jmp .Lt_00CA
.Lt_00CD:
mov ebx, dword ptr [ebp+8]
mov esi, dword ptr [ebp-8]
sal esi, 4
mov eax, dword ptr [ebx+60]
add eax, esi
mov esi, dword ptr [ebp-8]
sal esi, 4
mov ebx, dword ptr [ebp+32]
add esi, dword ptr [ebx]
mov ecx, dword ptr [eax]
mov ebx, dword ptr [eax+4]
cmp ebx, dword ptr [esi+4]
mov eax, -1
jne .Lt_02E7
cmp ecx, dword ptr [esi]
jne .Lt_02E7
.Lt_02E8:
xor eax, eax
.Lt_02E7:
mov esi, dword ptr [ebp+8]
mov ecx, dword ptr [ebp-8]
sal ecx, 4
mov ebx, dword ptr [esi+60]
add ebx, ecx
mov ecx, dword ptr [ebp-8]
sal ecx, 4
mov esi, dword ptr [ebp+32]
add ecx, dword ptr [esi]
mov edi, dword ptr [ebx+8]
mov esi, dword ptr [ebx+12]
cmp esi, dword ptr [ecx+12]
mov ebx, -1
jne .Lt_02E9
cmp edi, dword ptr [ecx+8]
jne .Lt_02E9
.Lt_02EA:
xor ebx, ebx
.Lt_02E9:
mov ecx, dword ptr [ebp-8]
sal ecx, 4
mov edi, dword ptr [ebp+32]
add ecx, dword ptr [edi]
cmp dword ptr [ecx+12], 2147483648
mov edi, -1
jne .Lt_02EB
cmp dword ptr [ecx+8], 0
jne .Lt_02EB
.Lt_02EC:
xor edi, edi
.Lt_02EB:
and ebx, edi
or eax, ebx
je .Lt_00CF
push 0
push 1
push 0
push dword ptr [ebp+12]
push 37
call ERRREPORTEX
add esp, 20
.Lt_00CF:
.Lt_00CE:
.Lt_00CB:
inc dword ptr [ebp-8]
.Lt_00CA:
mov ebx, dword ptr [ebp-12]
cmp dword ptr [ebp-8], ebx
jle .Lt_00CD
.Lt_00CC:
.Lt_00C8:
.Lt_00C7:
mov dword ptr [ebp-4], -1
.Lt_00BC:
mov eax, dword ptr [ebp-4]
pop edi
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size HCHECKEXTERNVAR, .-HCHECKEXTERNVAR
.balign 16
HCHECKEXTERNVARANDRECOVER:
.type HCHECKEXTERNVARANDRECOVER, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
push esi
.Lt_00D0:
push dword ptr [ebp+40]
mov eax, dword ptr [ebp+32]
push dword ptr [eax]
push dword ptr [ebp+28]
mov eax, dword ptr [ebp+20]
push dword ptr [eax]
mov eax, dword ptr [ebp+16]
push dword ptr [eax]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HCHECKEXTERNVAR
add esp, 28
test eax, eax
jne .Lt_00D3
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+16]
mov ecx, dword ptr [eax+24]
mov dword ptr [ebx], ecx
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+20]
mov eax, dword ptr [ecx+28]
mov dword ptr [ebx], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+24]
mov esi, dword ptr [eax+36]
mov ecx, dword ptr [eax+40]
mov dword ptr [ebx], esi
mov dword ptr [ebx+4], ecx
mov esi, dword ptr [ebp+28]
mov ecx, dword ptr [esi]
and ecx, -5
mov esi, dword ptr [ebp+8]
mov ebx, dword ptr [esi+4]
and ebx, 4
or ecx, ebx
mov ebx, dword ptr [ebp+28]
mov dword ptr [ebx], ecx
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+32]
mov esi, dword ptr [ecx+56]
mov dword ptr [ebx], esi
mov esi, dword ptr [ebp+28]
mov ebx, dword ptr [esi]
and ebx, 4
je .Lt_00D5
mov ebx, dword ptr [ebp+36]
mov dword ptr [ebx], 0
jmp .Lt_00D4
.Lt_00D5:
mov ebx, dword ptr [ebp+32]
cmp dword ptr [ebx], 0
jle .Lt_00D6
mov ebx, dword ptr [ebp+36]
mov dword ptr [ebx], -1
mov dword ptr [ebp-4], 0
mov ebx, dword ptr [ebp+32]
mov esi, dword ptr [ebx]
dec esi
mov dword ptr [ebp-8], esi
jmp .Lt_00D8
.Lt_00DB:
mov esi, dword ptr [ebp+8]
mov ebx, dword ptr [ebp-4]
sal ebx, 4
mov ecx, dword ptr [esi+60]
add ecx, ebx
mov ebx, dword ptr [ebp-4]
sal ebx, 4
mov esi, dword ptr [ebp+40]
add ebx, dword ptr [esi]
mov eax, dword ptr [ecx]
mov esi, dword ptr [ecx+4]
mov dword ptr [ebx], eax
mov dword ptr [ebx+4], esi
mov eax, dword ptr [ebp+8]
mov esi, dword ptr [ebp-4]
sal esi, 4
mov ebx, dword ptr [eax+60]
add ebx, esi
mov esi, dword ptr [ebp-4]
sal esi, 4
mov eax, dword ptr [ebp+40]
add esi, dword ptr [eax]
mov ecx, dword ptr [ebx+8]
mov eax, dword ptr [ebx+12]
mov dword ptr [esi+8], ecx
mov dword ptr [esi+12], eax
.Lt_00D9:
inc dword ptr [ebp-4]
.Lt_00D8:
mov ecx, dword ptr [ebp-8]
cmp dword ptr [ebp-4], ecx
jle .Lt_00DB
.Lt_00DA:
.Lt_00D6:
.Lt_00D4:
.Lt_00D3:
.Lt_00D2:
.Lt_00D1:
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size HCHECKEXTERNVARANDRECOVER, .-HCHECKEXTERNVARANDRECOVER
.balign 16
HADDVAR:
.type HADDVAR, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
push esi
mov dword ptr [ebp-4], 0
.Lt_00DC:
cmp dword ptr [ebp+8], 0
je .Lt_00DF
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 16
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+40]
mov ecx, dword ptr [eax]
and ecx, 16
test ecx, ecx
sete cl
shr ecx, 1
sbb ecx, ecx
and ebx, ecx
cmp dword ptr [PARSER+92], 0
sete cl
shr ecx, 1
sbb ecx, ecx
and ebx, ecx
je .Lt_00E1
push dword ptr [ebp+52]
push dword ptr [ebp+48]
push dword ptr [ebp+44]
push dword ptr [ebp+40]
push dword ptr [ebp+32]
push dword ptr [ebp+28]
push dword ptr [ebp+24]
push dword ptr [ebp+16]
push dword ptr [ebp+8]
call HCHECKEXTERNVARANDRECOVER
add esp, 36
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ecx+4]
and ebx, -17
mov ecx, ebx
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+4], ecx
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ecx+4]
or ebx, 33
mov ecx, ebx
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+4], ecx
mov ecx, dword ptr [ebp+44]
cmp dword ptr [ecx], 0
je .Lt_00E3
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ecx+80]
mov dword ptr [ebp-12], ebx
mov ebx, dword ptr [ebp-12]
mov ecx, dword ptr [ebx+4]
and ecx, -17
mov ebx, ecx
mov ecx, dword ptr [ebp-12]
mov dword ptr [ecx+4], ebx
mov ebx, dword ptr [ebp-12]
mov ecx, dword ptr [ebx+4]
or ecx, 1
mov ebx, ecx
mov ecx, dword ptr [ebp-12]
mov dword ptr [ecx+4], ebx
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebx+4]
and ecx, 4
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
test ecx, ecx
jne .Lt_00E5
mov ecx, dword ptr [ebp-12]
mov ebx, dword ptr [ecx+4]
and ebx, -33
mov ecx, ebx
mov ebx, dword ptr [ebp-12]
mov dword ptr [ebx+4], ecx
jmp .Lt_00E4
.Lt_00E5:
mov ecx, dword ptr [ebp-12]
mov ebx, dword ptr [ecx+4]
or ebx, 32
mov ecx, ebx
mov ebx, dword ptr [ebp-12]
mov dword ptr [ebx+4], ecx
.Lt_00E4:
push 0
push dword ptr [ebp+8]
push dword ptr [ebp-12]
call ASTBUILDARRAYDESCINITREE
add esp, 12
mov ecx, dword ptr [ebp-12]
mov dword ptr [ecx+52], eax
.Lt_00E3:
.Lt_00E2:
mov dword ptr [ebp-8], -1
jmp .Lt_00E0
.Lt_00E1:
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+4]
and ecx, 16
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
mov eax, dword ptr [ebp+40]
mov ebx, dword ptr [eax]
and ebx, 16
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
and ecx, ebx
je .Lt_00E6
push dword ptr [ebp+52]
push dword ptr [ebp+48]
push dword ptr [ebp+44]
push dword ptr [ebp+40]
push dword ptr [ebp+32]
push dword ptr [ebp+28]
push dword ptr [ebp+24]
push dword ptr [ebp+16]
push dword ptr [ebp+8]
call HCHECKEXTERNVARANDRECOVER
add esp, 36
mov dword ptr [ebp-8], -1
jmp .Lt_00E0
.Lt_00E6:
mov ebx, dword ptr [ebp+40]
mov ecx, dword ptr [ebx]
and ecx, 4
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
mov ebx, dword ptr [ebp+48]
and ecx, dword ptr [ebx]
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 65540
test eax, eax
setne al
shr eax, 1
sbb eax, eax
and ecx, eax
mov eax, dword ptr [ebp+56]
cmp eax, 310
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp+8]
mov esi, dword ptr [ebx+4]
and esi, 8
test esi, esi
setne dl
mov esi, edx
shr esi, 1
sbb esi, esi
or eax, esi
and ecx, eax
je .Lt_00E7
mov dword ptr [ebp-8], -1
jmp .Lt_00E0
.Lt_00E7:
mov dword ptr [ebp-8], 0
.Lt_00E0:
jmp .Lt_00DE
.Lt_00DF:
mov dword ptr [ebp-8], 0
.Lt_00DE:
cmp dword ptr [ebp-8], 0
je .Lt_00E9
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax+4]
and ecx, 4
test ecx, ecx
je .Lt_00EB
mov ecx, dword ptr [ebp+44]
push dword ptr [ecx]
push dword ptr [ebp+8]
call SYMBCHECKDYNAMICARRAYDIMENSIONS
add esp, 8
.Lt_00EB:
.Lt_00EA:
jmp .Lt_00E8
.Lt_00E9:
cmp dword ptr [ebp+12], 0
je .Lt_00ED
push 0
push 1
push 0
push dword ptr [ebp+16]
push 4
call ERRREPORTEX
add esp, 20
.Lt_00ED:
.Lt_00EC:
cmp dword ptr [ebp+36], 0
je .Lt_00EF
mov ecx, dword ptr [ebp+40]
or dword ptr [ecx], 268435456
.Lt_00EF:
.Lt_00EE:
mov ecx, dword ptr [ENV+840]
and ecx, 2
test ecx, ecx
je .Lt_00F0
mov dword ptr [ebp-12], 0
jmp .Lt_02ED
.Lt_00F0:
mov dword ptr [ebp-12], 2
.Lt_02ED:
push dword ptr [ebp-12]
mov ecx, dword ptr [ebp+40]
push dword ptr [ecx]
push dword ptr [ebp+52]
mov ecx, dword ptr [ebp+44]
push dword ptr [ecx]
mov ecx, dword ptr [ebp+32]
push dword ptr [ecx+4]
push dword ptr [ecx]
mov ecx, dword ptr [ebp+28]
push dword ptr [ecx]
mov ecx, dword ptr [ebp+24]
push dword ptr [ecx]
push dword ptr [ebp+20]
push dword ptr [ebp+16]
call SYMBADDVAR
add esp, 40
mov dword ptr [ebp+8], eax
.Lt_00E8:
cmp dword ptr [ebp+8], 0
jne .Lt_00F3
push 0
push 1
push 0
push dword ptr [ebp+16]
push 4
call ERRREPORTEX
add esp, 20
.Lt_00F3:
.Lt_00F2:
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
.Lt_00DD:
mov eax, dword ptr [ebp-4]
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size HADDVAR, .-HADDVAR
.balign 16
HCHECKFORIDTOKEN:
.type HCHECKFORIDTOKEN, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_00F4:
mov dword ptr [ebp-4], 0
push 0
call LEXGETCLASS
add esp, 4
mov dword ptr [ebp-8], eax
jmp .Lt_00F7
.Lt_00F9:
mov eax, dword ptr [ENV+840]
and eax, 524288
test eax, eax
je .Lt_00FB
lea eax, [SYMB+98352]
cmp dword ptr [SYMB+98516], eax
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_00FD
mov ebx, dword ptr [LEX+839664]
mov eax, dword ptr [ebx+16532]
cmp dword ptr [eax+4120], 0
jle .Lt_00FF
mov dword ptr [ebp-4], 89
.Lt_00FF:
.Lt_00FE:
.Lt_00FD:
.Lt_00FC:
.Lt_00FB:
.Lt_00FA:
jmp .Lt_00F6
.Lt_0100:
cmp dword ptr [ENV+136], 3
je .Lt_0102
cmp dword ptr [ebp+8], 0
sete al
shr eax, 1
sbb eax, eax
cmp dword ptr [PARSER+92], 0
seta bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
je .Lt_0104
mov dword ptr [ebp-4], 4
.Lt_0104:
.Lt_0103:
.Lt_0102:
.Lt_0101:
jmp .Lt_00F6
.Lt_0105:
cmp dword ptr [ENV+136], 3
je .Lt_0107
mov dword ptr [ebp-4], 4
jmp .Lt_0106
.Lt_0107:
mov ebx, dword ptr [LEX+839664]
mov eax, dword ptr [ebx+16532]
cmp dword ptr [eax+8], -2147483648
jne .Lt_0109
mov dword ptr [ebp-4], 4
.Lt_0109:
.Lt_0108:
.Lt_0106:
jmp .Lt_00F6
.Lt_010A:
mov dword ptr [ebp-4], 14
jmp .Lt_00F6
.Lt_00F7:
cmp dword ptr [ebp-8], 5
ja .Lt_010A
mov eax, dword ptr [ebp-8]
jmp dword ptr [.LT_010B+eax*4]
.LT_010B:
.int .Lt_00F9
.int .Lt_0105
.int .Lt_0100
.int .Lt_010A
.int .Lt_010A
.int .Lt_0105
.Lt_00F6:
.Lt_00F5:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HCHECKFORIDTOKEN, .-HCHECKFORIDTOKEN
.balign 16
HGETID:
.type HGETID, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_010C:
push dword ptr [ebp+8]
call HCHECKFORIDTOKEN
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_010F
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
mov ecx, dword ptr [ebp+16]
cmp dword ptr [ecx], -2147483648
je .Lt_0111
mov ecx, dword ptr [ENV+840]
and ecx, 8388608
test ecx, ecx
setne cl
shr ecx, 1
sbb ecx, ecx
test ecx, ecx
jne .Lt_0113
push 0
push 147
push 8388608
call ERRREPORTNOTALLOWED
add esp, 12
.Lt_0113:
.Lt_0112:
.Lt_0111:
.Lt_0110:
cmp dword ptr [ebp+8], 0
jne .Lt_0115
mov ecx, dword ptr [LEX+839664]
mov eax, dword ptr [ecx+16532]
mov ecx, dword ptr [eax+4116]
mov dword ptr [ebp-4], ecx
jmp .Lt_0114
.Lt_0115:
push dword ptr [ebp+20]
push 0
call LEXGETTEXT
push eax
push dword ptr [ebp+8]
call SYMBLOOKUPAT
add esp, 16
mov dword ptr [ebp-4], eax
.Lt_0114:
jmp .Lt_010E
.Lt_010F:
push 0
push 0
push dword ptr [ebp-8]
call ERRREPORT
add esp, 12
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
mov dword ptr [ebp-4], 0
.Lt_010E:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_010D:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HGETID, .-HGETID
.balign 16
HLOOKUPVAR:
.type HLOOKUPVAR, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_0116:
cmp dword ptr [ebp+8], 0
jne .Lt_0119
jmp .Lt_0117
.Lt_0119:
.Lt_0118:
cmp dword ptr [ebp+16], 0
je .Lt_011B
mov eax, dword ptr [ENV+840]
and eax, 4194304
test eax, eax
je .Lt_011D
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call SYMBFINDVARBYDEFTYPE
add esp, 8
mov dword ptr [ebp-8], eax
jmp .Lt_011C
.Lt_011D:
push 1
push dword ptr [ebp+8]
call SYMBFINDBYCLASS
add esp, 8
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_011F
push 12
push dword ptr [ebp+8]
call SYMBFINDBYCLASS
add esp, 8
mov dword ptr [ebp-8], eax
.Lt_011F:
.Lt_011E:
.Lt_011C:
jmp .Lt_011A
.Lt_011B:
cmp dword ptr [ebp+20], 0
je .Lt_0120
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call SYMBFINDVARBYSUFFIX
add esp, 8
mov dword ptr [ebp-8], eax
jmp .Lt_011A
.Lt_0120:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call SYMBFINDVARBYTYPE
add esp, 8
mov dword ptr [ebp-8], eax
.Lt_011A:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0117:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size HLOOKUPVAR, .-HLOOKUPVAR
.balign 16
HLOOKUPVARANDCHECKPARENT:
.type HLOOKUPVARANDCHECKPARENT, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0121:
push dword ptr [ebp+24]
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call HLOOKUPVAR
add esp, 16
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp+8], 0
je .Lt_0124
cmp dword ptr [ebp-8], 0
je .Lt_0126
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+4]
and ebx, 16
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp-8]
mov ecx, dword ptr [eax+128]
mov eax, dword ptr [ecx]
cmp eax, dword ptr [ebp+8]
setne cl
shr ecx, 1
sbb ecx, ecx
or ebx, ecx
mov ecx, dword ptr [ebp+28]
not ecx
and ebx, ecx
je .Lt_0128
push 0
push 0
push 157
call ERRREPORT
add esp, 12
.Lt_0128:
.Lt_0127:
jmp .Lt_0125
.Lt_0126:
push 0
push -1
push 130
call ERRREPORT
add esp, 12
.Lt_0125:
jmp .Lt_0123
.Lt_0124:
cmp dword ptr [ebp-8], 0
je .Lt_012A
mov ecx, dword ptr [ebp-8]
mov ebx, dword ptr [ecx+128]
mov ecx, dword ptr [ebx]
cmp ecx, dword ptr [SYMB+98516]
setne bl
shr ebx, 1
sbb ebx, ebx
mov ecx, dword ptr [ebp+28]
not ecx
and ebx, ecx
je .Lt_012C
mov dword ptr [ebp-8], 0
.Lt_012C:
.Lt_012B:
.Lt_012A:
.Lt_0129:
.Lt_0123:
mov ecx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ecx
.Lt_0122:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HLOOKUPVARANDCHECKPARENT, .-HLOOKUPVARANDCHECKPARENT
.balign 16
HMAKEARRAYDIMTB:
.type HMAKEARRAYDIMTB, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
.Lt_012D:
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+8]
dec eax
mov dword ptr [ebp-8], eax
jmp .Lt_0130
.Lt_0133:
mov eax, dword ptr [ebp+12]
add eax, 32
mov ebx, dword ptr [eax]
imul ebx, dword ptr [ebp-4]
sal ebx, 2
mov eax, dword ptr [ebp+12]
add ebx, dword ptr [eax]
push dword ptr [ebx]
call ASTCONSTFLUSHTOINT
add esp, 4
mov ebx, dword ptr [ebp-4]
sal ebx, 4
mov ecx, dword ptr [ebp+16]
add ebx, dword ptr [ecx]
mov dword ptr [ebx], eax
mov dword ptr [ebx+4], edx
mov eax, dword ptr [ebp+12]
add eax, 32
mov edx, dword ptr [eax]
imul edx, dword ptr [ebp-4]
sal edx, 2
mov eax, dword ptr [ebp+12]
add edx, dword ptr [eax]
mov eax, dword ptr [edx+4]
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_0135
mov eax, dword ptr [ebp-4]
sal eax, 4
mov edx, dword ptr [ebp+16]
add eax, dword ptr [edx]
mov dword ptr [eax+8], 0
mov dword ptr [eax+12], 2147483648
jmp .Lt_0134
.Lt_0135:
push dword ptr [ebp-12]
call ASTCONSTFLUSHTOINT
add esp, 4
mov ebx, dword ptr [ebp-4]
sal ebx, 4
mov ecx, dword ptr [ebp+16]
add ebx, dword ptr [ecx]
mov dword ptr [ebx+8], eax
mov dword ptr [ebx+12], edx
mov eax, dword ptr [ebp-4]
sal eax, 4
mov edx, dword ptr [ebp+16]
add eax, dword ptr [edx]
mov edx, dword ptr [ebp-4]
sal edx, 4
mov ebx, dword ptr [ebp+16]
add edx, dword ptr [ebx]
mov ecx, dword ptr [eax+8]
mov ebx, dword ptr [eax+12]
cmp ebx, dword ptr [edx+4]
mov eax, -1
jl .Lt_0300
jg .Lt_0301
cmp ecx, dword ptr [edx]
jb .Lt_0300
.Lt_0301:
xor eax, eax
.Lt_0300:
mov edx, dword ptr [ebp-4]
sal edx, 4
mov ecx, dword ptr [ebp+16]
add edx, dword ptr [ecx]
cmp dword ptr [edx+12], 2147483648
mov ecx, -1
jne .Lt_0303
cmp dword ptr [edx+8], 0
je .Lt_0302
.Lt_0303:
xor ecx, ecx
.Lt_0302:
or eax, ecx
je .Lt_0137
push 0
push 0
push 181
call ERRREPORT
add esp, 12
mov ecx, dword ptr [ebp-4]
sal ecx, 4
mov eax, dword ptr [ebp+16]
add ecx, dword ptr [eax]
mov dword ptr [ecx], 0
mov dword ptr [ecx+4], 0
mov ecx, dword ptr [ebp-4]
sal ecx, 4
mov eax, dword ptr [ebp+16]
add ecx, dword ptr [eax]
mov dword ptr [ecx+8], 0
mov dword ptr [ecx+12], 0
.Lt_0137:
.Lt_0136:
.Lt_0134:
.Lt_0131:
inc dword ptr [ebp-4]
.Lt_0130:
mov ecx, dword ptr [ebp-8]
cmp dword ptr [ebp-4], ecx
jle .Lt_0133
.Lt_0132:
.Lt_012E:
pop ebx
mov esp, ebp
pop ebp
ret
.size HMAKEARRAYDIMTB, .-HMAKEARRAYDIMTB
.balign 16
HVARINITDEFAULT:
.type HVARINITDEFAULT, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_0147:
mov dword ptr [ebp-4], 0
cmp dword ptr [ebp+8], 0
jne .Lt_014A
jmp .Lt_0148
.Lt_014A:
.Lt_0149:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 16
test ebx, ebx
je .Lt_014C
jmp .Lt_0148
.Lt_014C:
.Lt_014B:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+24]
and eax, 512
test eax, eax
je .Lt_014E
push 0
push 0
push 236
call ERRREPORT
add esp, 12
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-4], eax
jmp .Lt_0148
.Lt_014E:
.Lt_014D:
cmp dword ptr [ebp+16], 0
je .Lt_0150
mov eax, dword ptr [ebp+12]
not eax
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebx+4]
and ecx, 12
test ecx, ecx
sete cl
shr ecx, 1
sbb ecx, ecx
and eax, ecx
je .Lt_0152
mov ecx, dword ptr [ebp+8]
push dword ptr [ecx+28]
call SYMBGETCOMPDEFCTOR
add esp, 4
push eax
call SYMBCHECKACCESS
add esp, 4
test eax, eax
jne .Lt_0154
push 0
push 0
push 203
call ERRREPORT
add esp, 12
.Lt_0154:
.Lt_0153:
push dword ptr [ebp+8]
call ASTBUILDTYPEINICTORLIST
add esp, 4
mov dword ptr [ebp-4], eax
.Lt_0152:
.Lt_0151:
jmp .Lt_014F
.Lt_0150:
push dword ptr [ebp+8]
call SYMBHASCTOR
add esp, 4
test eax, eax
je .Lt_0156
push 0
push 0
push 182
call ERRREPORT
add esp, 12
.Lt_0156:
.Lt_0155:
.Lt_014F:
.Lt_0148:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HVARINITDEFAULT, .-HVARINITDEFAULT
.balign 16
HVARINIT:
.type HVARINIT, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
mov dword ptr [ebp-4], 0
.Lt_0157:
mov dword ptr [ebp-4], 0
cmp dword ptr [ebp+8], 0
je .Lt_015A
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-8], ebx
jmp .Lt_0159
.Lt_015A:
mov dword ptr [ebp-8], 0
.Lt_0159:
mov ebx, dword ptr [ebp-8]
and ebx, 24
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
or ebx, dword ptr [ebp+12]
je .Lt_015C
push 0
push 0
push 134
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push 257
call HSKIPUNTIL
add esp, 16
jmp .Lt_0158
.Lt_015C:
.Lt_015B:
mov ebx, dword ptr [ENV+840]
and ebx, 128
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_015E
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
jmp .Lt_0158
.Lt_015E:
.Lt_015D:
push 0
call LEXSKIPTOKEN
add esp, 4
cmp dword ptr [ebp+8], 0
jne .Lt_0160
push 0
push 0
push 0
push 44
call HSKIPUNTIL
add esp, 16
jmp .Lt_0158
.Lt_0160:
.Lt_015F:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 371
jne .Lt_0162
push dword ptr [ebp+8]
call SYMBARRAYHASUNKNOWNBOUNDS
add esp, 4
test eax, eax
je .Lt_0164
push 0
push 0
push 279
call ERRREPORT
add esp, 12
jmp .Lt_0158
.Lt_0164:
.Lt_0163:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+24]
and ebx, 511
cmp ebx, 16
jne .Lt_0166
push 0
push 0
push 24
call ERRREPORT
add esp, 12
jmp .Lt_0165
.Lt_0166:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+8]
or eax, 2048
mov ebx, eax
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+8], ebx
.Lt_0165:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+24]
and eax, 512
test eax, eax
je .Lt_0168
push 0
push 0
push 236
call ERRREPORT
add esp, 12
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-4], eax
jmp .Lt_0158
.Lt_0168:
.Lt_0167:
push 0
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_0158
.Lt_0162:
.Lt_0161:
push 0
push -2147483648
push 1
push dword ptr [ebp+8]
call CINITIALIZER
add esp, 16
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], 0
jne .Lt_016A
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-16], eax
.Lt_016A:
.Lt_0169:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 3
test ebx, ebx
je .Lt_016C
push dword ptr [ebp+8]
call SYMBHASCTOR
add esp, 4
test eax, eax
jne .Lt_016E
push dword ptr [ebp-16]
call ASTTYPEINIISCONST
add esp, 4
test eax, eax
jne .Lt_0170
push 0
push 0
push 11
call ERRREPORT
add esp, 12
push dword ptr [ebp-16]
call ASTDELTREE
add esp, 4
jmp .Lt_0158
.Lt_0170:
.Lt_016F:
.Lt_016E:
.Lt_016D:
mov dword ptr [ebp-12], 12582912
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 1
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_0172
or dword ptr [ebp-12], 2
.Lt_0172:
.Lt_0171:
push dword ptr [ebp-12]
push dword ptr [ebp-16]
call ASTTYPEINIUSESLOCALS
add esp, 8
test eax, eax
je .Lt_0174
push 0
push 0
push 271
call ERRREPORT
add esp, 12
push dword ptr [ebp-16]
call ASTDELTREE
add esp, 4
jmp .Lt_0158
.Lt_0174:
.Lt_0173:
.Lt_016C:
.Lt_016B:
mov eax, dword ptr [ebp-16]
mov dword ptr [ebp-4], eax
.Lt_0158:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HVARINIT, .-HVARINIT
.balign 16
HWRAPINSTATICFLAG:
.type HWRAPINSTATICFLAG, @function
push ebp
mov ebp, esp
sub esp, 64
push ebx
mov dword ptr [ebp-4], 0
.Lt_0179:
lea eax, [ebp-24]
mov dword ptr [ebp-56], eax
lea eax, [ebp-24]
lea ebx, [ebp-56]
add ebx, 4
mov dword ptr [ebx], eax
lea eax, [ebp-56]
add eax, 8
mov dword ptr [eax], 16
lea eax, [ebp-56]
add eax, 12
mov dword ptr [eax], 16
lea eax, [ebp-56]
add eax, 16
mov dword ptr [eax], 1
lea eax, [ebp-56]
add eax, 20
mov dword ptr [eax], 1
lea eax, [ebp-56]
add eax, 24
mov dword ptr [eax], 0
lea eax, [ebp-56]
add eax, 28
mov dword ptr [eax], 0
push 0
push 2
lea eax, [ebp-56]
push eax
push 0
push 0
push 0
push 0
push 7
push 0
call SYMBUNIQUELABEL
push eax
call SYMBADDVAR
add esp, 40
mov dword ptr [ebp-60], eax
mov eax, dword ptr [ebp-60]
mov ebx, dword ptr [eax+8]
or ebx, 16
mov eax, ebx
mov ebx, dword ptr [ebp-60]
mov dword ptr [ebx+8], eax
push -1
push dword ptr [ebp-60]
call ASTNEWDECL
add esp, 8
mov dword ptr [ebp-8], eax
push 4
push 0
call SYMBADDLABEL
add esp, 8
mov dword ptr [ebp-64], eax
push -1
push 0
push 0
push dword ptr [ebp-64]
push 1
push 0
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
push eax
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp-60]
call ASTNEWVAR
add esp, 20
push eax
push 45
call ASTNEWBOP
add esp, 20
push eax
call ASTBUILDBRANCH
add esp, 16
push eax
push dword ptr [ebp-8]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-8], eax
push -1
push 0
push 1
push dword ptr [ebp-60]
call _Z17ASTBUILDVARASSIGNP8FBSYMBOLii
add esp, 12
push eax
push dword ptr [ebp-8]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-8], eax
push -1
push dword ptr [ebp+8]
push dword ptr [ebp-8]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-8], eax
push -1
push -1
push dword ptr [ebp-64]
call ASTNEWLABEL
add esp, 8
push eax
push dword ptr [ebp-8]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-4], eax
.Lt_017A:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HWRAPINSTATICFLAG, .-HWRAPINSTATICFLAG
.balign 16
HCALLSTATICCTOR:
.type HCALLSTATICCTOR, @function
push ebp
mov ebp, esp
sub esp, 16
mov dword ptr [ebp-4], 0
.Lt_017C:
push dword ptr [ebp+12]
call HFLUSHDECL
add esp, 4
mov dword ptr [ebp-8], eax
mov dword ptr [ebp-12], 0
cmp dword ptr [ebp+16], 0
je .Lt_017F
push 64
push 0
push dword ptr [ebp+16]
push dword ptr [ebp+8]
call _Z15ASTTYPEINIFLUSHP8FBSYMBOLP7ASTNODEii
add esp, 16
mov dword ptr [ebp-12], eax
.Lt_017F:
.Lt_017E:
cmp dword ptr [ebp+20], 0
je .Lt_0181
push dword ptr [ebp+8]
call ASTPROCADDSTATICINSTANCE
add esp, 4
mov dword ptr [ebp-16], eax
push -1
push dword ptr [ebp-16]
call ASTBUILDPROCADDROF
add esp, 4
push eax
call RTLATEXIT
add esp, 4
push eax
push dword ptr [ebp-12]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-12], eax
.Lt_0181:
.Lt_0180:
cmp dword ptr [ebp-12], 0
je .Lt_0183
push -1
push dword ptr [ebp-12]
call HWRAPINSTATICFLAG
add esp, 4
push eax
push dword ptr [ebp-8]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-8], eax
.Lt_0183:
.Lt_0182:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_017D:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size HCALLSTATICCTOR, .-HCALLSTATICCTOR
.balign 16
HCALLGLOBALCTOR:
.type HCALLGLOBALCTOR, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_0184:
push dword ptr [ebp+12]
call HFLUSHDECL
add esp, 4
mov dword ptr [ebp+12], eax
cmp dword ptr [ebp+16], 0
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp+20]
test ebx, ebx
sete bl
shr ebx, 1
sbb ebx, ebx
and eax, ebx
je .Lt_0187
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebp-4], ebx
jmp .Lt_0185
.Lt_0187:
.Lt_0186:
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+8]
call ASTPROCADDGLOBALINSTANCE
add esp, 12
mov ebx, dword ptr [ebp+12]
mov dword ptr [ebp-4], ebx
.Lt_0185:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HCALLGLOBALCTOR, .-HCALLGLOBALCTOR
.balign 16
HFLUSHINITIALIZER:
.type HFLUSHINITIALIZER, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_0188:
cmp dword ptr [ebp+20], 0
je .Lt_018B
mov eax, dword ptr [ebp+8]
push dword ptr [eax+28]
call SYMBGETCOMPDTOR
add esp, 4
push eax
call SYMBCHECKACCESS
add esp, 4
test eax, eax
jne .Lt_018D
push 0
push 0
push 205
call ERRREPORT
add esp, 12
.Lt_018D:
.Lt_018C:
.Lt_018B:
.Lt_018A:
cmp dword ptr [ebp+16], 0
jne .Lt_018F
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 11
test ebx, ebx
je .Lt_0191
cmp dword ptr [ebp+20], 0
je .Lt_0193
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+4]
and eax, 128
test eax, eax
je .Lt_0195
push -1
push 0
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HCALLSTATICCTOR
add esp, 16
mov dword ptr [ebp+12], eax
jmp .Lt_0194
.Lt_0195:
push -1
push 0
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HCALLGLOBALCTOR
add esp, 16
mov dword ptr [ebp+12], eax
.Lt_0194:
.Lt_0193:
.Lt_0192:
.Lt_0191:
.Lt_0190:
mov eax, dword ptr [ebp+12]
mov dword ptr [ebp-4], eax
jmp .Lt_0189
.Lt_018F:
.Lt_018E:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 11
test ebx, ebx
jne .Lt_0197
push dword ptr [ebp+12]
call HFLUSHDECL
add esp, 4
mov dword ptr [ebp+12], eax
push -1
push 64
push 0
push dword ptr [ebp+16]
push dword ptr [ebp+8]
call _Z15ASTTYPEINIFLUSHP8FBSYMBOLP7ASTNODEii
add esp, 16
push eax
push dword ptr [ebp+12]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-4], eax
jmp .Lt_0189
.Lt_0197:
.Lt_0196:
push dword ptr [ebp+8]
call SYMBHASCTOR
add esp, 4
test eax, eax
jne .Lt_0199
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+16]
mov dword ptr [eax+52], ebx
cmp dword ptr [ebp+20], 0
jne .Lt_019B
push dword ptr [ebp+12]
call HFLUSHDECL
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_0189
.Lt_019B:
.Lt_019A:
mov dword ptr [ebp+16], 0
.Lt_0199:
.Lt_0198:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 128
test ebx, ebx
je .Lt_019D
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HCALLSTATICCTOR
add esp, 16
mov dword ptr [ebp-4], eax
jmp .Lt_019C
.Lt_019D:
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HCALLGLOBALCTOR
add esp, 16
mov dword ptr [ebp-4], eax
.Lt_019C:
.Lt_0189:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HFLUSHINITIALIZER, .-HFLUSHINITIALIZER
.balign 16
HIDXINPARENSONLYEXPR:
.type HIDXINPARENSONLYEXPR, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_019E:
mov eax, dword ptr [PARSER+144]
and eax, 4096
test eax, eax
setne al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-8], eax
mov eax, dword ptr [PARSER+144]
or eax, 4096
mov ebx, eax
mov dword ptr [PARSER+144], ebx
jmp .Lt_01A0
.Lt_01A1:
mov ebx, dword ptr [PARSER+144]
and ebx, -4097
mov eax, ebx
mov dword ptr [PARSER+144], eax
.Lt_01A0:
push -1
call CEXPRESSIONWITHNIDXARRAY
add esp, 4
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-8], 0
je .Lt_01A3
mov eax, dword ptr [PARSER+144]
or eax, 4096
mov ebx, eax
mov dword ptr [PARSER+144], ebx
jmp .Lt_01A2
.Lt_01A3:
mov ebx, dword ptr [PARSER+144]
and ebx, -4097
mov eax, ebx
mov dword ptr [PARSER+144], eax
.Lt_01A2:
.Lt_019F:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HIDXINPARENSONLYEXPR, .-HIDXINPARENSONLYEXPR
.balign 16
HCHECKDYNAMICARRAYEXPR:
.type HCHECKDYNAMICARRAYEXPR, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_01A4:
cmp dword ptr [ebp+8], 0
je .Lt_01A6
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax], 25
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
setne al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-8], eax
jmp .Lt_030B
.Lt_01A6:
mov dword ptr [ebp-8], 0
.Lt_030B:
cmp dword ptr [ebp-8], 0
je .Lt_01A9
push dword ptr [ebp+8]
call ASTREMOVENIDXARRAY
add esp, 4
mov dword ptr [ebp+8], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
cmp ebx, 17
sete bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax]
cmp ecx, 19
sete cl
shr ecx, 1
sbb ecx, ecx
or ebx, ecx
je .Lt_01AB
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ecx+12]
mov ecx, dword ptr [ebx]
cmp ecx, 1
sete cl
shr ecx, 1
sbb ecx, ecx
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+12]
mov ebx, dword ptr [eax]
cmp ebx, 12
sete bl
shr ebx, 1
sbb ebx, ebx
or ecx, ebx
je .Lt_01AD
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebx+12]
mov ebx, dword ptr [ecx+4]
and ebx, 65540
test ebx, ebx
je .Lt_01AF
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebp-4], ebx
jmp .Lt_01A5
.Lt_01AF:
.Lt_01AE:
.Lt_01AD:
.Lt_01AC:
.Lt_01AB:
.Lt_01AA:
.Lt_01A9:
.Lt_01A8:
push 0
push -1
push 53
call ERRREPORT
add esp, 12
push dword ptr [ebp+8]
call ASTDELTREE
add esp, 4
mov dword ptr [ebp-4], 0
.Lt_01A5:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HCHECKDYNAMICARRAYEXPR, .-HCHECKDYNAMICARRAYEXPR
.balign 16
HERRORDEFTYPENOTALLOWED:
.type HERRORDEFTYPENOTALLOWED, @function
push ebp
mov ebp, esp
push ebx
.Lt_01B0:
push 0
push 146
push 4194304
call ERRREPORTNOTALLOWED
add esp, 12
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], 7
mov eax, dword ptr [ebp+12]
mov dword ptr [eax], 0
mov eax, dword ptr [ebp+12]
push dword ptr [eax]
mov eax, dword ptr [ebp+8]
push dword ptr [eax]
call SYMBCALCLEN
add esp, 8
mov ebx, dword ptr [ebp+16]
mov dword ptr [ebx], eax
mov dword ptr [ebx+4], edx
.Lt_01B1:
pop ebx
mov esp, ebp
pop ebp
ret
.size HERRORDEFTYPENOTALLOWED, .-HERRORDEFTYPENOTALLOWED
.balign 16
HMAYBEBUILDFIELDACCESS:
.type HMAYBEBUILDFIELDACCESS, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_01B2:
cmp dword ptr [ebp+12], 0
jne .Lt_01B5
jmp .Lt_01B3
.Lt_01B5:
.Lt_01B4:
mov eax, dword ptr [PARSER+100]
mov ebx, dword ptr [eax+4]
and ebx, 2048
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_01B7
jmp .Lt_01B3
.Lt_01B7:
.Lt_01B6:
mov ebx, dword ptr [PARSER+100]
mov eax, dword ptr [ebx+72]
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_01B9
jmp .Lt_01B3
.Lt_01B9:
.Lt_01B8:
push 0
push 0
push dword ptr [ebp+8]
mov eax, dword ptr [ebp-8]
push dword ptr [eax+56]
call ASTBUILDVARFIELD
add esp, 16
mov dword ptr [ebp-4], eax
.Lt_01B3:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HMAYBEBUILDFIELDACCESS, .-HMAYBEBUILDFIELDACCESS
.balign 16
HMATCHELLIPSIS:
.type HMATCHELLIPSIS, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_0276:
mov dword ptr [ebp-4], 0
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 46
jne .Lt_0279
push 0
push 1
call LEXGETLOOKAHEAD
add esp, 8
cmp eax, 46
jne .Lt_027B
push 0
push 2
call LEXGETLOOKAHEAD
add esp, 8
cmp eax, 46
jne .Lt_027D
push 0
push 3
call LEXGETLOOKAHEAD
add esp, 8
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 44
je .Lt_0281
.Lt_0282:
cmp dword ptr [ebp-8], 41
je .Lt_0281
.Lt_0283:
cmp dword ptr [ebp-8], 284
jne .Lt_0280
.Lt_0281:
mov dword ptr [ebp-4], -1
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0280:
.Lt_027E:
.Lt_027D:
.Lt_027C:
.Lt_027B:
.Lt_027A:
.Lt_0279:
.Lt_0278:
.Lt_0277:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size HMATCHELLIPSIS, .-HMATCHELLIPSIS
.balign 16
HINTEXPR:
.type HINTEXPR, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
mov dword ptr [ebp-4], 0
.Lt_0284:
call CEXPRESSION
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
je .Lt_0287
push 0
push 0
push dword ptr [ebp-8]
push 0
push 7
call ASTNEWCONV
add esp, 20
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
je .Lt_0289
mov eax, dword ptr [ebp-12]
mov dword ptr [ebp-8], eax
jmp .Lt_0288
.Lt_0289:
push 0
push -1
push 24
call ERRREPORT
add esp, 12
push dword ptr [ebp-8]
call ASTDELTREE
add esp, 4
mov dword ptr [ebp-8], 0
.Lt_0288:
jmp .Lt_0286
.Lt_0287:
push 0
push 0
push 9
call ERRREPORT
add esp, 12
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 284
je .Lt_028B
push 0
push 0
push 0
push 44
call HSKIPUNTIL
add esp, 16
.Lt_028B:
.Lt_028A:
.Lt_0286:
cmp dword ptr [ebp-8], 0
jne .Lt_028D
cmp dword ptr [ebp+8], 0
je .Lt_028F
push dword ptr [ebp+8]
call ASTCLONETREE
add esp, 4
mov dword ptr [ebp-8], eax
jmp .Lt_028E
.Lt_028F:
push 0
push 7
mov ebx, dword ptr [ENV+868]
mov eax, ebx
sar eax, 31
push eax
push ebx
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-8], eax
.Lt_028E:
.Lt_028D:
.Lt_028C:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0285:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HINTEXPR, .-HINTEXPR
.balign 16
CARRAYDIMENSION:
.type CARRAYDIMENSION, @function
push ebp
mov ebp, esp
push ebx
push esi
.Lt_0290:
call HMATCHELLIPSIS
test eax, eax
je .Lt_0293
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+12]
add ebx, 32
mov ecx, dword ptr [ebx]
imul ecx, dword ptr [eax]
sal ecx, 2
mov eax, dword ptr [ebp+12]
add ecx, dword ptr [eax]
mov dword ptr [ecx], 0
jmp .Lt_0292
.Lt_0293:
push 0
call HINTEXPR
add esp, 4
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+12]
add ebx, 32
mov esi, dword ptr [ebx]
imul esi, dword ptr [ecx]
sal esi, 2
mov ecx, dword ptr [ebp+12]
add esi, dword ptr [ecx]
mov dword ptr [esi], eax
.Lt_0292:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 284
jne .Lt_0295
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [ebp+8]
mov esi, dword ptr [ebp+12]
add esi, 32
mov ecx, dword ptr [esi]
imul ecx, dword ptr [eax]
sal ecx, 2
mov eax, dword ptr [ebp+12]
add ecx, dword ptr [eax]
cmp dword ptr [ecx], 0
jne .Lt_0297
push 0
push 0
push 281
call ERRREPORT
add esp, 12
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov ecx, dword ptr [ebp+8]
mov esi, dword ptr [ebp+12]
add esi, 32
mov ebx, dword ptr [esi]
imul ebx, dword ptr [ecx]
sal ebx, 2
mov ecx, dword ptr [ebp+12]
add ebx, dword ptr [ecx]
mov dword ptr [ebx], eax
.Lt_0297:
.Lt_0296:
call HMATCHELLIPSIS
test eax, eax
je .Lt_0299
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+12]
add ebx, 32
mov ecx, dword ptr [ebx]
imul ecx, dword ptr [eax]
sal ecx, 2
mov eax, dword ptr [ebp+12]
add ecx, dword ptr [eax]
mov dword ptr [ecx+4], 0
jmp .Lt_0298
.Lt_0299:
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ebp+12]
add eax, 32
mov ebx, dword ptr [eax]
imul ebx, dword ptr [ecx]
sal ebx, 2
mov ecx, dword ptr [ebp+12]
add ebx, dword ptr [ecx]
push dword ptr [ebx]
call HINTEXPR
add esp, 4
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebp+12]
add ecx, 32
mov esi, dword ptr [ecx]
imul esi, dword ptr [ebx]
sal esi, 2
mov ebx, dword ptr [ebp+12]
add esi, dword ptr [ebx]
mov dword ptr [esi+4], eax
.Lt_0298:
jmp .Lt_0294
.Lt_0295:
mov eax, dword ptr [ebp+8]
mov esi, dword ptr [ebp+12]
add esi, 32
mov ebx, dword ptr [esi]
imul ebx, dword ptr [eax]
sal ebx, 2
mov eax, dword ptr [ebp+12]
add ebx, dword ptr [eax]
mov eax, dword ptr [ebp+8]
mov esi, dword ptr [ebp+12]
add esi, 32
mov ecx, dword ptr [esi]
imul ecx, dword ptr [eax]
sal ecx, 2
mov eax, dword ptr [ebp+12]
add ecx, dword ptr [eax]
mov eax, dword ptr [ebx]
mov dword ptr [ecx+4], eax
push 0
push 7
mov ecx, dword ptr [ENV+868]
mov eax, ecx
sar eax, 31
push eax
push ecx
call ASTNEWCONSTI
add esp, 16
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ebp+12]
add ebx, 32
mov esi, dword ptr [ebx]
imul esi, dword ptr [ecx]
sal esi, 2
mov ecx, dword ptr [ebp+12]
add esi, dword ptr [ecx]
mov dword ptr [esi], eax
.Lt_0294:
.Lt_0291:
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size CARRAYDIMENSION, .-CARRAYDIMENSION
.balign 16
CAUTOVARDECL:
.type CAUTOVARDECL, @function
push ebp
mov ebp, esp
sub esp, 64
push ebx
.Lt_02A7:
mov eax, dword ptr [ENV+840]
and eax, 2048
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_02AB
push 0
push 149
push 2048
call ERRREPORTNOTALLOWED
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_02A8
.Lt_02AB:
.Lt_02AA:
push 9
call CCOMPSTMTISALLOWED
add esp, 4
test eax, eax
jne .Lt_02AD
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_02A8
.Lt_02AD:
.Lt_02AC:
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 312
jne .Lt_02AF
call HCHECKSCOPE
test eax, eax
jne .Lt_02B1
mov eax, dword ptr [ebp+8]
or eax, 2
mov ebx, eax
mov dword ptr [ebp+8], ebx
jmp .Lt_02B0
.Lt_02B1:
mov ebx, dword ptr [ebp+8]
or ebx, 3
mov eax, ebx
mov dword ptr [ebp+8], eax
.Lt_02B0:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_02AF:
.Lt_02AE:
mov eax, dword ptr [PARSER+100]
mov ebx, dword ptr [eax+4]
and ebx, 2097152
test ebx, ebx
je .Lt_02B3
mov ebx, dword ptr [ebp+8]
or ebx, 2
mov eax, ebx
mov dword ptr [ebp+8], eax
.Lt_02B3:
.Lt_02B2:
lea eax, [SYMB+98352]
cmp dword ptr [SYMB+98516], eax
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_02B5
mov ebx, dword ptr [ENV+832]
cmp dword ptr [PARSER+100], ebx
jne .Lt_02B7
mov ebx, dword ptr [ebp+8]
or ebx, 3
mov eax, ebx
mov dword ptr [ebp+8], eax
.Lt_02B7:
.Lt_02B6:
.Lt_02B5:
.Lt_02B4:
.Lt_02B8:
push 118
call CPARENTID
add esp, 4
mov dword ptr [ebp-4], eax
push 0
lea eax, [ebp-12]
push eax
push offset Lt_0315
push dword ptr [ebp-4]
call HGETID
add esp, 16
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-12], -2147483648
je .Lt_02BC
push 0
push 1
push 0
push offset Lt_0315
push 17
call ERRREPORTEX
add esp, 20
.Lt_02BC:
.Lt_02BB:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
jne .Lt_02BE
push 0
push 0
push 20
call ERRREPORT
add esp, 12
push 0
push 0
push -1
push 41
call HSKIPUNTIL
add esp, 16
.Lt_02BE:
.Lt_02BD:
push 0
push 0
push -1
push -2147483648
push dword ptr [ebp-16]
push dword ptr [ebp-4]
call HLOOKUPVARANDCHECKPARENT
add esp, 24
mov dword ptr [ebp-8], eax
call CASSIGNTOKEN
test eax, eax
jne .Lt_02C0
push 0
push 0
push 10
call ERRREPORT
add esp, 12
.Lt_02C0:
.Lt_02BF:
call CEXPRESSION
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 0
jne .Lt_02C2
push 0
push 0
push 236
call ERRREPORT
add esp, 12
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-20], eax
.Lt_02C2:
.Lt_02C1:
mov eax, dword ptr [ebp-20]
mov ebx, dword ptr [eax+4]
mov dword ptr [ebp-24], ebx
mov ebx, dword ptr [ebp-20]
mov eax, dword ptr [ebx+8]
mov dword ptr [ebp-28], eax
push dword ptr [ebp-28]
push dword ptr [ebp-24]
call TYPEHASCTOR
add esp, 8
mov dword ptr [ebp-32], eax
push dword ptr [ebp-28]
push dword ptr [ebp-24]
call TYPEHASDTOR
add esp, 8
mov dword ptr [ebp-36], eax
mov eax, dword ptr [ebp-24]
and eax, 511
mov ebx, eax
mov dword ptr [ebp-56], ebx
jmp .Lt_02C4
.Lt_02C6:
push 0
push -1
push 24
call ERRREPORT
add esp, 12
push dword ptr [ebp-20]
call ASTDELTREE
add esp, 4
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-20], eax
mov dword ptr [ebp-24], 7
mov dword ptr [ebp-28], 0
jmp .Lt_02C3
.Lt_02C7:
mov dword ptr [ebp-24], 16
jmp .Lt_02C3
.Lt_02C8:
mov eax, dword ptr [ebp-28]
mov ebx, dword ptr [eax+8]
and ebx, 16384
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_02CA
push dword ptr [ebp-28]
call SYMBADDPROCPTRFROMFUNCTION
add esp, 4
mov dword ptr [ebp-28], eax
.Lt_02CA:
.Lt_02C9:
jmp .Lt_02C3
.Lt_02C4:
mov eax, dword ptr [ebp-56]
add eax, 4294967293
cmp eax, 49
ja .Lt_02C3
mov eax, dword ptr [ebp-56]
jmp dword ptr [.LT_02CB+eax*4-12]
.LT_02CB:
.int .Lt_02C7
.int .Lt_02C3
.int .Lt_02C3
.int .Lt_02C6
.int .Lt_02C3
.int .Lt_02C3
.int .Lt_02C3
.int .Lt_02C3
.int .Lt_02C3
.int .Lt_02C3
.int .Lt_02C3
.int .Lt_02C3
.int .Lt_02C3
.int .Lt_02C3
.int .Lt_02C7
.int .Lt_02C3
.int .Lt_02C3
.int .Lt_02C3
.int .Lt_02C3
.int .Lt_02C3
.int .Lt_02C3
.int .Lt_02C3
.int .Lt_02C3
.int .Lt_02C3
.int .Lt_02C3
.int .Lt_02C3
.int .Lt_02C3
.int .Lt_02C3
.int .Lt_02C3
.int .Lt_02C3
.int .Lt_02C3
.int .Lt_02C3
.int .Lt_02C3
.int .Lt_02C3
.int .Lt_02C3
.int .Lt_02C3
.int .Lt_02C3
.int .Lt_02C3
.int .Lt_02C3
.int .Lt_02C3
.int .Lt_02C3
.int .Lt_02C3
.int .Lt_02C3
.int .Lt_02C3
.int .Lt_02C3
.int .Lt_02C3
.int .Lt_02C3
.int .Lt_02C3
.int .Lt_02C3
.int .Lt_02C8
.Lt_02C3:
push 309
push offset Lt_0317
mov dword ptr [ebp-52], 0
lea eax, [ebp-52]
push eax
mov dword ptr [ebp-48], 0
lea eax, [ebp-48]
push eax
lea eax, [ebp+8]
push eax
push 0
push dword ptr [ebp-28]
push dword ptr [ebp-24]
call SYMBCALCLEN
add esp, 8
mov dword ptr [ebp-44], eax
mov dword ptr [ebp-40], edx
lea eax, [ebp-44]
push eax
lea eax, [ebp-28]
push eax
lea eax, [ebp-24]
push eax
push 0
push offset Lt_0315
push dword ptr [ebp-4]
push dword ptr [ebp-8]
call HADDVAR
add esp, 52
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
je .Lt_02D0
push 0
push 0
mov eax, dword ptr [ebp-8]
mov edx, dword ptr [eax+4]
and edx, 128
test edx, edx
setne dl
shr edx, 1
sbb edx, edx
push edx
push dword ptr [ebp-28]
mov edx, dword ptr [ebp-20]
push dword ptr [edx+4]
call ASTTYPEINIBEGIN
add esp, 20
mov dword ptr [ebp-56], eax
cmp dword ptr [ebp-32], 0
jne .Lt_02D2
push 0
push -2147483648
push dword ptr [ebp-8]
push dword ptr [ebp-20]
push dword ptr [ebp-56]
call ASTTYPEINIADDASSIGN
add esp, 20
jmp .Lt_02D1
.Lt_02D2:
lea eax, [ebp-64]
push eax
push dword ptr [ebp-20]
call CBYDESCARRAYARGPARENS
add esp, 4
push eax
push dword ptr [ebp-20]
push dword ptr [ebp-8]
call ASTBUILDIMPLICITCTORCALLEX
add esp, 16
mov dword ptr [ebp-20], eax
cmp dword ptr [ebp-20], 0
je .Lt_02D4
cmp dword ptr [ebp-64], 0
je .Lt_02D6
push 0
push -2147483648
push dword ptr [ebp-20]
push dword ptr [ebp-8]
push dword ptr [ebp-56]
call ASTTYPEINIADDCTORCALL
add esp, 20
jmp .Lt_02D5
.Lt_02D6:
push 0
push -2147483648
push dword ptr [ebp-8]
push dword ptr [ebp-20]
push dword ptr [ebp-56]
call ASTTYPEINIADDASSIGN
add esp, 20
.Lt_02D5:
.Lt_02D4:
.Lt_02D3:
.Lt_02D1:
mov eax, dword ptr [ebp-8]
mov edx, dword ptr [eax+4]
and edx, 3
test edx, edx
je .Lt_02D8
cmp dword ptr [ebp-32], 0
jne .Lt_02DA
push dword ptr [ebp-56]
call ASTTYPEINIISCONST
add esp, 4
test eax, eax
jne .Lt_02DC
push dword ptr [ebp-20]
call ASTDELTREE
add esp, 4
push dword ptr [ebp-28]
push dword ptr [ebp-24]
call ASTNEWCONSTZ
add esp, 8
mov dword ptr [ebp-20], eax
mov dword ptr [ebp-24], 7
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-36], 0
.Lt_02DC:
.Lt_02DB:
.Lt_02DA:
.Lt_02D9:
.Lt_02D8:
.Lt_02D7:
push -1
push dword ptr [ebp-56]
call ASTTYPEINIEND
add esp, 8
push 0
push dword ptr [ebp-8]
call ASTNEWDECL
add esp, 8
mov dword ptr [ebp-60], eax
mov eax, dword ptr [ebp-8]
mov edx, dword ptr [eax+8]
or edx, 8
mov eax, edx
mov edx, dword ptr [ebp-8]
mov dword ptr [edx+8], eax
push dword ptr [ebp-36]
push dword ptr [ebp-56]
push dword ptr [ebp-60]
push dword ptr [ebp-8]
call HFLUSHINITIALIZER
add esp, 16
push eax
call ASTADD
add esp, 4
.Lt_02D0:
.Lt_02CF:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
je .Lt_02DE
jmp .Lt_02B9
.Lt_02DE:
.Lt_02DD:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_02BA:
jmp .Lt_02B8
.Lt_02B9:
.Lt_02A8:
pop ebx
mov esp, ebp
pop ebp
ret
.size CAUTOVARDECL, .-CAUTOVARDECL

.section .bss
.balign 4
	.lcomm	Lt_0319,128

.section .data
.balign 4
Lt_0317:
.int Lt_0319
.int Lt_0319
.int 128
.int 16
.int 1
.int 8
.int 0
.int 7

.section .bss
.balign 4
	.lcomm	Lt_0315,129
	#fbc-1.01.0/src/compiler/parser-decl-var.bas' compilation took 0.04490803834050894 secs
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
.int fb_ctor__parserzdeclzvar
