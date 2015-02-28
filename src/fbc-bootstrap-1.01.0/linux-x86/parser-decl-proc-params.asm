	.intel_syntax noprefix

	#FreeBASIC-1.01.0-source/src/compiler/parser-decl-proc-params.bas' compilation started at 16:30:05 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl CPARAMETERS
CPARAMETERS:
.type CPARAMETERS, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
.Lt_005F:
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+4]
and ebx, 2048
test ebx, ebx
je .Lt_0062
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call SYMBADDPROCINSTANCEPTR
add esp, 8
mov eax, dword ptr [ENV+236]
mov ebx, eax
sar ebx, 31
add dword ptr [ebp-8], eax
adc dword ptr [ebp-4], ebx
.Lt_0062:
.Lt_0061:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
je .Lt_0064
jmp .Lt_0060
.Lt_0064:
.Lt_0063:
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
jne .Lt_0066
push 0
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_0060
.Lt_0066:
.Lt_0065:
.Lt_0067:
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+12]
call HPARAMDECL
add esp, 12
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_006B
jmp .Lt_0068
.Lt_006B:
.Lt_006A:
mov eax, dword ptr [ebp-12]
mov ecx, dword ptr [eax+36]
mov ebx, dword ptr [eax+40]
add dword ptr [ebp-8], ecx
adc dword ptr [ebp-4], ebx
mov ecx, dword ptr [ebp-12]
cmp dword ptr [ecx+52], 4
jne .Lt_006D
jmp .Lt_0068
.Lt_006D:
.Lt_006C:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
je .Lt_006F
jmp .Lt_0068
.Lt_006F:
.Lt_006E:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0069:
jmp .Lt_0067
.Lt_0068:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_0071
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
jmp .Lt_0070
.Lt_0071:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0070:
mov eax, dword ptr [ENV+236]
sal eax, 6
mov ebx, eax
mov ecx, ebx
sar ecx, 31
cmp dword ptr [ebp-4], ecx
jl .Lt_0073
jg .Lt_0074
cmp dword ptr [ebp-8], ebx
jbe .Lt_0073
.Lt_0074:
push 1
mov ebx, dword ptr [ebp+12]
push dword ptr [ebx+12]
push 18
call ERRREPORTWARN
add esp, 12
.Lt_0073:
.Lt_0072:
.Lt_0060:
pop ebx
mov esp, ebp
pop ebp
ret
.size CPARAMETERS, .-CPARAMETERS
.balign 16
fb_ctor__parserzdeclzproczparams:
.type fb_ctor__parserzdeclzproczparams, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__parserzdeclzproczparams, .-fb_ctor__parserzdeclzproczparams
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
push ebx
.Lt_0075:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
mov eax, dword ptr [ebp+8]
movsx ebx, word ptr [eax+64]
add ebx, dword ptr [ebp+20]
push ebx
push dword ptr [ebp+8]
call ERRREPORTPARAM
add esp, 16
.Lt_0076:
pop ebx
mov esp, ebp
pop ebp
ret
.size HPARAMERROR, .-HPARAMERROR
.balign 16
HPARAMWARNING:
.type HPARAMWARNING, @function
push ebp
mov ebp, esp
push ebx
.Lt_0077:
push dword ptr [ebp+16]
push dword ptr [ebp+12]
mov eax, dword ptr [ebp+8]
movsx ebx, word ptr [eax+64]
add ebx, dword ptr [ebp+20]
push ebx
push dword ptr [ebp+8]
call ERRREPORTPARAMWARN
add esp, 16
.Lt_0078:
pop ebx
mov esp, ebp
pop ebp
ret
.size HPARAMWARNING, .-HPARAMWARNING
.balign 16
HOPTIONALEXPR:
.type HOPTIONALEXPR, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
mov dword ptr [ebp-4], 0
.Lt_0079:
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+16]
cmp dword ptr [eax+52], 1
je .Lt_007C
mov eax, dword ptr [ebp+16]
cmp dword ptr [eax+52], 2
je .Lt_007E
jmp .Lt_007A
.Lt_007E:
.Lt_007D:
.Lt_007C:
.Lt_007B:
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax+24]
and ebx, 511
mov dword ptr [ebp-16], ebx
cmp dword ptr [ebp-16], 0
je .Lt_0082
.Lt_0083:
cmp dword ptr [ebp-16], 21
jne .Lt_0081
.Lt_0082:
push 0
push 0
push 70
call ERRREPORT
add esp, 12
push -1
push 0
push 0
push 41
call HSKIPUNTIL
add esp, 16
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-4], eax
jmp .Lt_007A
.Lt_0081:
.Lt_007F:
push 0
push -2147483648
push 1
push dword ptr [ebp+16]
call CINITIALIZER
add esp, 16
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0085
jmp .Lt_007A
.Lt_0085:
.Lt_0084:
push dword ptr [ebp-8]
call ASTFORGETBITFIELDS
add esp, 4
push 12582912
push dword ptr [ebp-8]
call ASTTYPEINIUSESLOCALS
add esp, 8
test eax, eax
je .Lt_0087
push 0
push 271
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HPARAMERROR
add esp, 16
push dword ptr [ebp-8]
call ASTDELTREE
add esp, 4
mov dword ptr [ebp-8], 0
.Lt_0087:
.Lt_0086:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_007A:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HOPTIONALEXPR, .-HOPTIONALEXPR
.balign 16
HMOCKPARAM:
.type HMOCKPARAM, @function
push ebp
mov ebp, esp
sub esp, 12
mov dword ptr [ebp-4], 0
.Lt_0088:
cmp dword ptr [ebp+12], -1
jne .Lt_008B
mov eax, dword ptr [ENV+872]
mov dword ptr [ebp+12], eax
.Lt_008B:
.Lt_008A:
cmp dword ptr [ebp+12], 4
jne .Lt_008D
mov dword ptr [ebp-8], -2147483648
jmp .Lt_008C
.Lt_008D:
mov dword ptr [ebp-8], 7
.Lt_008C:
push 0
push dword ptr [ebp+12]
cmp dword ptr [ebp+12], 3
jne .Lt_008E
mov dword ptr [ebp-12], -1
jmp .Lt_010C
.Lt_008E:
mov dword ptr [ebp-12], 0
.Lt_010C:
push dword ptr [ebp-12]
push 0
push dword ptr [ebp-8]
push 0
push dword ptr [ebp+8]
call SYMBADDPROCPARAM
add esp, 28
mov dword ptr [ebp-4], eax
.Lt_0089:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size HMOCKPARAM, .-HMOCKPARAM
.balign 16
HPARAMDECL:
.type HPARAMDECL, @function
push ebp
mov ebp, esp
sub esp, 80
push ebx
push esi
mov dword ptr [ebp-4], 0
.Lt_0090:
mov dword ptr [ebp-4], 0
mov dword ptr [ebp-24], 0
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 46
jne .Lt_0095
push 0
push 1
call LEXGETLOOKAHEAD
add esp, 8
cmp eax, 46
jne .Lt_0097
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 46
je .Lt_0099
push 1
push 58
push offset Lt_009A
push dword ptr [ebp+8]
call HPARAMERROR
add esp, 16
push 0
push 0
push 0
push 41
call HSKIPUNTIL
add esp, 16
push 4
push dword ptr [ebp+8]
call HMOCKPARAM
add esp, 8
jmp .Lt_0098
.Lt_0099:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0098:
mov eax, dword ptr [ebp+8]
movsx ebx, word ptr [eax+64]
test ebx, ebx
jne .Lt_009C
push 1
push 312
push offset Lt_009A
push dword ptr [ebp+8]
call HPARAMERROR
add esp, 16
push 4
push dword ptr [ebp+8]
call HMOCKPARAM
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_0091
.Lt_009C:
.Lt_009B:
cmp dword ptr [ebp+12], 3
je .Lt_009E
push 1
push 311
push offset Lt_009A
push dword ptr [ebp+8]
call HPARAMERROR
add esp, 16
push 4
push dword ptr [ebp+8]
call HMOCKPARAM
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_0091
.Lt_009E:
.Lt_009D:
push 0
push 4
push 0
push 0
push -2147483648
push 0
push dword ptr [ebp+8]
call SYMBADDPROCPARAM
add esp, 28
mov dword ptr [ebp-4], eax
jmp .Lt_0091
jmp .Lt_0096
.Lt_0097:
push 1
push 58
push offset Lt_009A
push dword ptr [ebp+8]
call HPARAMERROR
add esp, 16
push 0
push 0
push 0
push 41
call HSKIPUNTIL
add esp, 16
push 4
push dword ptr [ebp+8]
call HMOCKPARAM
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_0091
.Lt_0096:
.Lt_0095:
.Lt_0094:
push 0
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-68], eax
cmp dword ptr [ebp-68], 319
jne .Lt_00A1
.Lt_00A2:
mov dword ptr [ebp-20], 1
push 0
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_009F
.Lt_00A1:
cmp dword ptr [ebp-68], 320
jne .Lt_00A3
.Lt_00A4:
mov dword ptr [ebp-20], 2
push 0
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_009F
.Lt_00A3:
mov dword ptr [ebp-20], -1
.Lt_00A5:
.Lt_009F:
push 0
call LEXGETCLASS
add esp, 4
mov dword ptr [ebp-68], eax
cmp dword ptr [ebp-68], 0
jne .Lt_00A8
.Lt_00A9:
mov dword ptr [ebp-32], -1
jmp .Lt_00A6
.Lt_00A8:
cmp dword ptr [ebp-68], 1
je .Lt_00AB
.Lt_00AC:
cmp dword ptr [ebp-68], 2
jne .Lt_00AA
.Lt_00AB:
cmp dword ptr [ebp+16], 0
jne .Lt_00AE
push 1
push 58
call LEXGETTEXT
push eax
push dword ptr [ebp+8]
call HPARAMERROR
add esp, 16
push 0
push 0
push 0
push 44
call HSKIPUNTIL
add esp, 16
push dword ptr [ebp-20]
push dword ptr [ebp+8]
call HMOCKPARAM
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_0091
.Lt_00AE:
.Lt_00AD:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 375
setne al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-32], eax
jmp .Lt_00A6
.Lt_00AA:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
setne al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp+16]
test ebx, ebx
sete bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
je .Lt_00B1
push 1
push 58
call LEXGETTEXT
push eax
push dword ptr [ebp+8]
call HPARAMERROR
add esp, 16
push 0
push 0
push 0
push 44
call HSKIPUNTIL
add esp, 16
push dword ptr [ebp-20]
push dword ptr [ebp+8]
call HMOCKPARAM
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_0091
.Lt_00B1:
.Lt_00B0:
mov dword ptr [ebp-32], 0
.Lt_00AF:
.Lt_00A6:
cmp dword ptr [Lt_0114], 8
jl .Lt_00B3
push 0
push 0
push 27
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push 44
call HSKIPUNTIL
add esp, 16
push dword ptr [ebp-20]
push dword ptr [ebp+8]
call HMOCKPARAM
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_0091
.Lt_00B3:
.Lt_00B2:
mov eax, dword ptr [Lt_0114]
imul eax, 129
lea ebx, [Lt_0115+eax]
mov dword ptr [ebp-8], ebx
push 0
push 1
push offset Lt_0000
push 0
push dword ptr [ebp-8]
call fb_StrAssign
add esp, 20
cmp dword ptr [ebp-32], 0
je .Lt_00B5
push 0
push 0
call LEXGETTEXT
push eax
push 0
push dword ptr [ebp-8]
call fb_StrAssign
add esp, 20
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [eax+16532]
mov eax, dword ptr [ebx+4120]
mov dword ptr [ebp-36], eax
mov eax, dword ptr [LEX+839664]
mov ebx, dword ptr [eax+16532]
mov eax, dword ptr [ebx+8]
mov dword ptr [ebp-16], eax
cmp dword ptr [ebp-16], -2147483648
je .Lt_00B7
mov eax, dword ptr [ENV+840]
and eax, 8388608
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_00B9
push 0
push 147
push 8388608
call ERRREPORTNOTALLOWED
add esp, 12
.Lt_00B9:
.Lt_00B8:
.Lt_00B7:
.Lt_00B6:
push 0
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_00B4
.Lt_00B5:
mov dword ptr [ebp-16], -2147483648
.Lt_00B4:
mov dword ptr [ebp-28], 0
mov dword ptr [ebp-52], 0
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
jne .Lt_00BB
push 0
call LEXSKIPTOKEN
add esp, 4
cmp dword ptr [ebp-20], -1
je .Lt_00BD
push 1
push 58
push dword ptr [ebp-8]
push dword ptr [ebp+8]
call HPARAMERROR
add esp, 16
.Lt_00BD:
.Lt_00BC:
mov dword ptr [ebp-20], 3
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
jne .Lt_00BF
mov dword ptr [ebp-28], -1
jmp .Lt_00BE
.Lt_00BF:
push offset Lt_0117
lea eax, [ebp-52]
push eax
lea eax, [ebp-28]
push eax
call CARRAYDECL
add esp, 12
cmp dword ptr [ebp-52], 0
je .Lt_00C1
push 1
push 58
push dword ptr [ebp-8]
push dword ptr [ebp+8]
call HPARAMERROR
add esp, 16
.Lt_00C1:
.Lt_00C0:
.Lt_00BE:
push 41
call HMATCH
add esp, 4
test eax, eax
jne .Lt_00C3
push 0
push 0
push 7
call ERRREPORT
add esp, 12
.Lt_00C3:
.Lt_00C2:
.Lt_00BB:
.Lt_00BA:
mov dword ptr [ebp-48], 0
cmp dword ptr [ebp-20], -1
jne .Lt_00C5
mov eax, dword ptr [ENV+872]
mov dword ptr [ebp-20], eax
mov dword ptr [ebp-48], -1
mov eax, dword ptr [ENV+176]
and eax, 2
test eax, eax
je .Lt_00C7
push 1
push 15
push dword ptr [ebp-8]
push dword ptr [ebp+8]
call HPARAMWARNING
add esp, 16
.Lt_00C7:
.Lt_00C6:
.Lt_00C5:
.Lt_00C4:
mov dword ptr [ebp-40], 0
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 375
jne .Lt_00C9
push 0
call LEXSKIPTOKEN
add esp, 4
cmp dword ptr [ebp-16], -2147483648
je .Lt_00CB
push 1
push 58
push dword ptr [ebp-8]
push dword ptr [ebp+8]
call HPARAMERROR
add esp, 16
jmp .Lt_0091
.Lt_00CB:
.Lt_00CA:
inc dword ptr [Lt_0114]
mov dword ptr [ebp-68], 1
cmp dword ptr [ebp-20], 2
jne .Lt_00CD
cmp dword ptr [ebp+16], 0
je .Lt_00CF
or dword ptr [ebp-68], 2
.Lt_00CF:
.Lt_00CE:
and dword ptr [ebp-68], -2
.Lt_00CD:
.Lt_00CC:
push dword ptr [ebp-68]
mov dword ptr [ebp-76], 0
mov dword ptr [ebp-72], 0
lea eax, [ebp-76]
push eax
lea eax, [ebp-56]
push eax
lea eax, [ebp-16]
push eax
call CSYMBOLTYPE
add esp, 16
test eax, eax
jne .Lt_00D2
push 1
push 58
push dword ptr [ebp-8]
push dword ptr [ebp+8]
call HPARAMERROR
add esp, 16
mov dword ptr [ebp-16], 7
mov dword ptr [ebp-56], 0
mov dword ptr [ebp-40], -1
.Lt_00D2:
.Lt_00D1:
cmp dword ptr [ebp-20], 1
jne .Lt_00D4
push dword ptr [ebp-56]
push dword ptr [ebp-16]
call HCOMPLAINIFABSTRACTCLASS
add esp, 8
.Lt_00D4:
.Lt_00D3:
dec dword ptr [Lt_0114]
jmp .Lt_00C8
.Lt_00C9:
mov eax, dword ptr [ENV+840]
and eax, 4194304
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_00D6
push 0
push 146
push 4194304
call ERRREPORTNOTALLOWED
add esp, 12
mov dword ptr [ebp-40], -1
jmp .Lt_00D5
.Lt_00D6:
cmp dword ptr [ebp-32], 0
jne .Lt_00D8
push 1
push 58
push 0
push dword ptr [ebp+8]
call HPARAMERROR
add esp, 16
mov dword ptr [ebp-40], -1
.Lt_00D8:
.Lt_00D7:
.Lt_00D5:
mov dword ptr [ebp-56], 0
or dword ptr [ebp-24], 268435456
.Lt_00C8:
cmp dword ptr [ENV+136], 0
jne .Lt_00DA
cmp dword ptr [ebp-48], 0
je .Lt_00DC
push dword ptr [ebp-56]
push dword ptr [ebp-16]
call SYMBGETDEFAULTPARAMMODE
add esp, 8
mov dword ptr [ebp-20], eax
.Lt_00DC:
.Lt_00DB:
.Lt_00DA:
.Lt_00D9:
cmp dword ptr [ebp-16], -2147483648
jne .Lt_00DE
push dword ptr [ebp-8]
call SYMBGETDEFTYPE
add esp, 4
mov dword ptr [ebp-16], eax
.Lt_00DE:
.Lt_00DD:
cmp dword ptr [ebp-40], 0
je .Lt_00E0
push 0
push 0
push 0
push 44
call HSKIPUNTIL
add esp, 16
.Lt_00E0:
.Lt_00DF:
mov eax, dword ptr [ebp-16]
and eax, 480
je .Lt_00E1
mov dword ptr [ebp-68], 22
jmp .Lt_010D
.Lt_00E1:
mov eax, dword ptr [ebp-16]
and eax, 31
mov dword ptr [ebp-68], eax
.Lt_010D:
mov eax, dword ptr [ebp-68]
mov dword ptr [ebp-72], eax
jmp .Lt_00E4
.Lt_00E6:
mov eax, dword ptr [ebp-20]
cmp eax, 1
sete al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-80], eax
mov eax, dword ptr [ebp-16]
and eax, 480
je .Lt_00E7
mov dword ptr [ebp-76], 22
jmp .Lt_010E
.Lt_00E7:
mov eax, dword ptr [ebp-16]
and eax, 31
mov dword ptr [ebp-76], eax
.Lt_010E:
mov eax, dword ptr [ebp-76]
cmp eax, 17
sete al
shr eax, 1
sbb eax, eax
or eax, dword ptr [ebp-80]
je .Lt_00EA
push 1
push 58
push dword ptr [ebp-8]
push dword ptr [ebp+8]
call HPARAMERROR
add esp, 16
mov eax, dword ptr [ebp-16]
and eax, 31
mov ebx, dword ptr [ebp-16]
and ebx, 480
add ebx, 32
or eax, ebx
mov ebx, dword ptr [ebp-16]
and ebx, 261632
sal ebx, 1
or eax, ebx
mov dword ptr [ebp-16], eax
.Lt_00EA:
.Lt_00E9:
jmp .Lt_00E3
.Lt_00EB:
cmp dword ptr [ebp+16], 0
jne .Lt_00ED
push 1
push 58
push dword ptr [ebp-8]
push dword ptr [ebp+8]
call HPARAMERROR
add esp, 16
mov eax, dword ptr [ebp-16]
and eax, 31
mov ebx, dword ptr [ebp-16]
and ebx, 480
add ebx, 32
or eax, ebx
mov ebx, dword ptr [ebp-16]
and ebx, 261632
sal ebx, 1
or eax, ebx
mov dword ptr [ebp-16], eax
jmp .Lt_00EC
.Lt_00ED:
cmp dword ptr [ebp-20], 1
jne .Lt_00EF
push 1
push 58
push dword ptr [ebp-8]
push dword ptr [ebp+8]
call HPARAMERROR
add esp, 16
mov eax, dword ptr [ebp-16]
and eax, 31
mov ebx, dword ptr [ebp-16]
and ebx, 480
add ebx, 32
or eax, ebx
mov ebx, dword ptr [ebp-16]
and ebx, 261632
sal ebx, 1
or eax, ebx
mov dword ptr [ebp-16], eax
.Lt_00EF:
.Lt_00EE:
.Lt_00EC:
jmp .Lt_00E3
.Lt_00F0:
cmp dword ptr [ebp+16], 0
jne .Lt_00F2
cmp dword ptr [ebp-36], 0
jle .Lt_00F4
push 1
push 58
push dword ptr [ebp-8]
push dword ptr [ebp+8]
call HPARAMERROR
add esp, 16
.Lt_00F4:
.Lt_00F3:
.Lt_00F2:
.Lt_00F1:
jmp .Lt_00E3
.Lt_00E4:
cmp dword ptr [ebp-72], 18
ja .Lt_00E3
mov eax, dword ptr [ebp-72]
jmp dword ptr [.LT_00F5+eax*4]
.LT_00F5:
.int .Lt_00EB
.int .Lt_00E3
.int .Lt_00E3
.int .Lt_00E6
.int .Lt_00E3
.int .Lt_00E3
.int .Lt_00E6
.int .Lt_00E3
.int .Lt_00E3
.int .Lt_00E3
.int .Lt_00E3
.int .Lt_00E3
.int .Lt_00E3
.int .Lt_00E3
.int .Lt_00E3
.int .Lt_00E3
.int .Lt_00E3
.int .Lt_00E6
.int .Lt_00F0
.Lt_00E3:
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-44], 0
push dword ptr [ebp-24]
push dword ptr [ebp-20]
push dword ptr [ebp-28]
push dword ptr [ebp-56]
push dword ptr [ebp-16]
cmp dword ptr [ebp+16], 0
je .Lt_00F6
mov dword ptr [ebp-64], 0
jmp .Lt_0110
.Lt_00F6:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-64], eax
.Lt_0110:
push dword ptr [ebp-64]
push dword ptr [ebp+8]
call SYMBADDPROCPARAM
add esp, 28
mov dword ptr [ebp-60], eax
cmp dword ptr [ebp-60], 0
jne .Lt_00F9
jmp .Lt_0091
.Lt_00F9:
.Lt_00F8:
cmp dword ptr [ebp+16], 0
jne .Lt_00FB
mov eax, dword ptr [ebp-60]
mov ebx, dword ptr [ENV+236]
sal ebx, 2
mov esi, ebx
mov ecx, esi
sar ecx, 31
cmp dword ptr [eax+40], ecx
jl .Lt_00FD
jg .Lt_011B
cmp dword ptr [eax+36], esi
jbe .Lt_00FD
.Lt_011B:
mov esi, dword ptr [ENV+176]
and esi, 4
test esi, esi
je .Lt_00FF
push 0
push 17
push dword ptr [ebp-8]
push dword ptr [ebp+8]
call HPARAMWARNING
add esp, 16
.Lt_00FF:
.Lt_00FE:
.Lt_00FD:
.Lt_00FC:
.Lt_00FB:
.Lt_00FA:
call CASSIGNTOKEN
test eax, eax
je .Lt_0101
cmp dword ptr [ebp-20], 3
jne .Lt_0103
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 371
jne .Lt_0105
push 0
call LEXSKIPTOKEN
add esp, 4
mov dword ptr [ebp-44], -1
jmp .Lt_0104
.Lt_0105:
push 0
push 58
push dword ptr [ebp-8]
push dword ptr [ebp+8]
call HPARAMERROR
add esp, 16
push 0
push 0
push 0
push 44
call HSKIPUNTIL
add esp, 16
.Lt_0104:
jmp .Lt_0102
.Lt_0103:
push dword ptr [ebp-60]
push dword ptr [ebp-8]
push dword ptr [ebp+8]
call HOPTIONALEXPR
add esp, 12
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_0107
push 0
push 58
push dword ptr [ebp-8]
push dword ptr [ebp+8]
call HPARAMERROR
add esp, 16
push 0
push 0
push 0
push 44
call HSKIPUNTIL
add esp, 16
.Lt_0107:
.Lt_0106:
.Lt_0102:
.Lt_0101:
.Lt_0100:
cmp dword ptr [ebp-44], 0
je .Lt_0109
mov eax, dword ptr [ebp-60]
mov esi, dword ptr [eax+8]
or esi, 2048
mov eax, esi
mov esi, dword ptr [ebp-60]
mov dword ptr [esi+8], eax
.Lt_0109:
.Lt_0108:
cmp dword ptr [ebp-12], 0
je .Lt_010B
push dword ptr [ebp-12]
push dword ptr [ebp-60]
push dword ptr [ebp+8]
call SYMBMAKEPARAMOPTIONAL
add esp, 12
.Lt_010B:
.Lt_010A:
mov eax, dword ptr [ebp-60]
mov dword ptr [ebp-4], eax
.Lt_0091:
mov eax, dword ptr [ebp-4]
pop esi
pop ebx
mov esp, ebp
pop ebp
ret
.size HPARAMDECL, .-HPARAMDECL

.section .bss
.balign 4
	.lcomm	Lt_0115,1032

.section .data
.balign 4
Lt_0114:
.int 0

.section .bss
.balign 4
	.lcomm	Lt_011C,64

.section .data
.balign 4
Lt_0117:
.int Lt_011C
.int Lt_011C
.int 64
.int 4
.int 2
.int 8
.int 0
.int 7
.int 2
.int 0
.int 1
	#FreeBASIC-1.01.0-source/src/compiler/parser-decl-proc-params.bas' compilation took 0.02919690578710288 secs

.section .rodata
.balign 4
Lt_0000:	.ascii	"\0"

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
Lt_009A:	.ascii	"...\0"

.section .ctors, "aw", @progbits
.int fb_ctor__parserzdeclzproczparams
