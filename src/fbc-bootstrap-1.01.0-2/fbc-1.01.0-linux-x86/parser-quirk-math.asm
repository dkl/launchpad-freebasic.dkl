	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/parser-quirk-math.bas' compilation started at 15:27:36 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl CMATHFUNCT
CMATHFUNCT:
.type CMATHFUNCT, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_009F:
mov dword ptr [ebp-4], 0
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp-8], eax
jmp .Lt_00A2
.Lt_00A4:
push 56
call HMATHOP
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_00A1
.Lt_00A5:
push 57
call HMATHOP
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_00A1
.Lt_00A6:
push 71
call HMATHOP
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_00A1
.Lt_00A7:
push 72
call HMATHOP
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_00A1
.Lt_00A8:
push 70
call HMATHOP
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_00A1
.Lt_00A9:
push 58
call HMATHOP
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_00A1
.Lt_00AA:
push 59
call HMATHOP
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_00A1
.Lt_00AB:
push 60
call HMATHOP
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_00A1
.Lt_00AC:
push 61
call HMATHOP
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_00A1
.Lt_00AD:
push 62
call HMATHOP
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_00A1
.Lt_00AE:
push 63
call HMATHOP
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_00A1
.Lt_00AF:
push 65
call HMATHOP
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_00A1
.Lt_00B0:
push 68
call HMATHOP
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_00A1
.Lt_00B1:
push 69
call HMATHOP
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_00A1
.Lt_00B2:
call HATAN2
mov dword ptr [ebp-4], eax
jmp .Lt_00A1
.Lt_00B3:
push dword ptr [ebp+12]
push -1
call HLENSIZEOF
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_00A1
.Lt_00B4:
push dword ptr [ebp+12]
push 0
call HLENSIZEOF
add esp, 8
mov dword ptr [ebp-4], eax
jmp .Lt_00A1
.Lt_00A2:
mov eax, dword ptr [ebp-8]
add eax, 4294966852
cmp eax, 18
ja .Lt_00A1
mov eax, dword ptr [ebp-8]
jmp dword ptr [.LT_00B5+eax*4-1776]
.LT_00B5:
.int .Lt_00A4
.int .Lt_00A5
.int .Lt_00A6
.int .Lt_00A7
.int .Lt_00A9
.int .Lt_00AA
.int .Lt_00AB
.int .Lt_00AC
.int .Lt_00AD
.int .Lt_00AE
.int .Lt_00AF
.int .Lt_00B0
.int .Lt_00B1
.int .Lt_00A8
.int .Lt_00B2
.int .Lt_00A1
.int .Lt_00A1
.int .Lt_00B3
.int .Lt_00B4
.Lt_00A1:
.Lt_00A0:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size CMATHFUNCT, .-CMATHFUNCT
.balign 16
fb_ctor__parserzquirkzmath:
.type fb_ctor__parserzquirkzmath, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__parserzquirkzmath, .-fb_ctor__parserzquirkzmath
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
HMATHOP:
.type HMATHOP, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_0060:
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
je .Lt_0063
push 0
push 0
push 6
call ERRREPORT
add esp, 12
jmp .Lt_0062
.Lt_0063:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0062:
push 7
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0065
jmp .Lt_0061
.Lt_0065:
.Lt_0064:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_0067
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
jmp .Lt_0066
.Lt_0067:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0066:
push dword ptr [ebp-8]
push dword ptr [ebp+8]
call ASTNEWUOP
add esp, 8
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0069
push 0
push 0
push 24
call ERRREPORT
add esp, 12
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-8], eax
.Lt_0069:
.Lt_0068:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0061:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size HMATHOP, .-HMATHOP
.balign 16
HATAN2:
.type HATAN2, @function
push ebp
mov ebp, esp
sub esp, 12
mov dword ptr [ebp-4], 0
.Lt_006A:
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
je .Lt_006D
push 0
push 0
push 6
call ERRREPORT
add esp, 12
jmp .Lt_006C
.Lt_006D:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_006C:
push 7
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_006F
jmp .Lt_006B
.Lt_006F:
.Lt_006E:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
je .Lt_0071
push 0
push 0
push 16
call ERRREPORT
add esp, 12
jmp .Lt_0070
.Lt_0071:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0070:
push 7
call HMATCHEXPR
add esp, 4
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_0073
jmp .Lt_006B
.Lt_0073:
.Lt_0072:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_0075
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
jmp .Lt_0074
.Lt_0075:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0074:
push 1
push 0
push dword ptr [ebp-12]
push dword ptr [ebp-8]
push 64
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0077
push 0
push 0
push 24
call ERRREPORT
add esp, 12
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-8], eax
.Lt_0077:
.Lt_0076:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_006B:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size HATAN2, .-HATAN2
.balign 16
HLEN:
.type HLEN, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
mov dword ptr [ebp-4], 0
.Lt_0078:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 511
mov dword ptr [ebp-16], ebx
cmp dword ptr [ebp-16], 16
jne .Lt_007C
.Lt_007D:
push dword ptr [ebp+8]
call RTLSTRLEN
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_0079
jmp .Lt_007A
.Lt_007C:
cmp dword ptr [ebp-16], 3
jne .Lt_007E
.Lt_007F:
push dword ptr [ebp+8]
call ASTGETSTRLITSYMBOL
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0081
push dword ptr [ebp+8]
call RTLSTRLEN
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_0079
.Lt_0081:
.Lt_0080:
mov eax, dword ptr [ebp-8]
mov ecx, dword ptr [eax+36]
mov ebx, dword ptr [eax+40]
add ecx, 4294967295
adc ebx, 4294967295
mov eax, dword ptr [ebp+12]
mov dword ptr [eax], ecx
mov dword ptr [eax+4], ebx
jmp .Lt_007A
.Lt_007E:
cmp dword ptr [ebp-16], 6
jne .Lt_0082
.Lt_0083:
push dword ptr [ebp+8]
call ASTGETSTRLITSYMBOL
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0085
push dword ptr [ebp+8]
call RTLWSTRLEN
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_0079
.Lt_0085:
.Lt_0084:
mov ecx, dword ptr [SYMB_DTYPETB+172]
mov eax, ecx
sar eax, 31
push eax
push ecx
mov ecx, dword ptr [ebp-8]
push dword ptr [ecx+40]
push dword ptr [ecx+36]
call __divdi3
add esp, 16
add eax, 4294967295
adc edx, 4294967295
mov ecx, dword ptr [ebp+12]
mov dword ptr [ecx], eax
mov dword ptr [ecx+4], edx
jmp .Lt_007A
.Lt_0082:
cmp dword ptr [ebp-16], 17
jne .Lt_0086
.Lt_0087:
push dword ptr [ebp+8]
call ASTSIZEOF
add esp, 4
add eax, 4294967295
adc edx, 4294967295
mov ecx, dword ptr [ebp+12]
mov dword ptr [ecx], eax
mov dword ptr [ecx+4], edx
jmp .Lt_007A
.Lt_0086:
cmp dword ptr [ebp-16], 18
jne .Lt_0088
.Lt_0089:
push dword ptr [ebp+8]
push 73
call ASTNEWUOP
add esp, 8
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
je .Lt_008B
mov eax, dword ptr [ebp-12]
mov dword ptr [ebp-4], eax
jmp .Lt_0079
.Lt_008B:
.Lt_008A:
push dword ptr [ebp+8]
call ASTSIZEOF
add esp, 4
mov ecx, dword ptr [ebp+12]
mov dword ptr [ecx], eax
mov dword ptr [ecx+4], edx
jmp .Lt_007A
.Lt_0088:
push dword ptr [ebp+8]
call ASTSIZEOF
add esp, 4
mov ecx, dword ptr [ebp+12]
mov dword ptr [ecx], eax
mov dword ptr [ecx+4], edx
.Lt_008C:
.Lt_007A:
push dword ptr [ebp+8]
call ASTDELTREE
add esp, 4
mov dword ptr [ebp-4], 0
.Lt_0079:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HLEN, .-HLEN
.balign 16
HLENSIZEOF:
.type HLENSIZEOF, @function
push ebp
mov ebp, esp
sub esp, 28
mov dword ptr [ebp-4], 0
.Lt_008D:
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 40
je .Lt_0090
push 0
push 0
push 6
call ERRREPORT
add esp, 12
jmp .Lt_008F
.Lt_0090:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_008F:
lea eax, [ebp-24]
push eax
lea eax, [ebp-28]
push eax
lea eax, [ebp-16]
push eax
push dword ptr [ebp+8]
call CTYPEOREXPRESSION
add esp, 16
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
je .Lt_0092
mov eax, dword ptr [ebp-8]
cmp dword ptr [eax], 25
jne .Lt_0094
mov dword ptr [ebp+8], 0
push dword ptr [ebp-8]
call ASTREMOVENIDXARRAY
add esp, 4
mov dword ptr [ebp-8], eax
.Lt_0094:
.Lt_0093:
.Lt_0092:
.Lt_0091:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_0096
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
jmp .Lt_0095
.Lt_0096:
cmp dword ptr [ebp+12], 0
jne .Lt_0098
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0098:
.Lt_0097:
.Lt_0095:
cmp dword ptr [ebp-8], 0
je .Lt_009A
cmp dword ptr [ebp+8], 0
je .Lt_009C
lea eax, [ebp-24]
push eax
push dword ptr [ebp-8]
call HLEN
add esp, 8
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_009E
push 0
push 7
push dword ptr [ebp-20]
push dword ptr [ebp-24]
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-8], eax
.Lt_009E:
.Lt_009D:
jmp .Lt_009B
.Lt_009C:
push dword ptr [ebp-8]
call ASTSIZEOF
add esp, 4
mov dword ptr [ebp-24], eax
mov dword ptr [ebp-20], edx
push dword ptr [ebp-8]
call ASTDELTREE
add esp, 4
push 0
push 7
push dword ptr [ebp-20]
push dword ptr [ebp-24]
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-8], eax
.Lt_009B:
jmp .Lt_0099
.Lt_009A:
push 0
push 7
push dword ptr [ebp-20]
push dword ptr [ebp-24]
call ASTNEWCONSTI
add esp, 16
mov dword ptr [ebp-8], eax
.Lt_0099:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_008E:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size HLENSIZEOF, .-HLENSIZEOF
	#fbc-1.01.0/src/compiler/parser-quirk-math.bas' compilation took 0.03166499233338982 secs

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
.int fb_ctor__parserzquirkzmath
