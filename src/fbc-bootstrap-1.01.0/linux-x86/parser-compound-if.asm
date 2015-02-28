	.intel_syntax noprefix

	#FreeBASIC-1.01.0-source/src/compiler/parser-compound-if.bas' compilation started at 16:30:04 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl CIFSTMTBEGIN
CIFSTMTBEGIN:
.type CIFSTMTBEGIN, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
.Lt_0077:
push 0
call LEXSKIPTOKEN
add esp, 4
call CEXPRESSION
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
jne .Lt_007A
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
.Lt_007A:
.Lt_0079:
push 0
push 0
call SYMBADDLABEL
add esp, 8
mov dword ptr [ebp-12], eax
push 0
push 0
call SYMBADDLABEL
add esp, 8
mov dword ptr [ebp-8], eax
push 0
push 0
push dword ptr [ebp-8]
push dword ptr [ebp-4]
call ASTBUILDBRANCH
add esp, 16
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
jne .Lt_007C
push 0
push 0
push 24
call ERRREPORT
add esp, 12
jmp .Lt_007B
.Lt_007C:
push dword ptr [ebp-4]
call ASTADD
add esp, 4
.Lt_007B:
push 1
push 266
call CCOMPSTMTPUSH
add esp, 8
mov dword ptr [ebp-16], eax
mov eax, dword ptr [ebp-16]
mov ebx, dword ptr [ebp-8]
mov dword ptr [eax+16], ebx
mov ebx, dword ptr [ebp-16]
mov eax, dword ptr [ebp-12]
mov dword ptr [ebx+20], eax
mov eax, dword ptr [ebp-16]
mov dword ptr [eax+24], 0
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 390
jne .Lt_007E
push dword ptr [ebp-16]
call HIFSINGLELINE
add esp, 4
jmp .Lt_0078
.Lt_007E:
.Lt_007D:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 267
je .Lt_0080
push 0
push 0
push 31
call ERRREPORT
add esp, 12
jmp .Lt_007F
.Lt_0080:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_007F:
push 0
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-24], eax
jmp .Lt_0082
.Lt_0084:
mov dword ptr [ebp-20], -1
jmp .Lt_0081
.Lt_0085:
cmp dword ptr [ENV+136], 3
jne .Lt_0087
mov dword ptr [ebp-20], 0
jmp .Lt_0086
.Lt_0087:
mov dword ptr [ebp-20], -1
.Lt_0086:
jmp .Lt_0081
.Lt_0088:
mov dword ptr [ebp-20], 0
jmp .Lt_0081
.Lt_0082:
mov eax, dword ptr [ebp-24]
add eax, 4294967040
cmp eax, 4
ja .Lt_0088
mov eax, dword ptr [ebp-24]
jmp dword ptr [.LT_0089+eax*4-1024]
.LT_0089:
.int .Lt_0084
.int .Lt_0084
.int .Lt_0085
.int .Lt_0084
.int .Lt_0085
.Lt_0081:
call ASTSCOPEBEGIN
mov ebx, dword ptr [ebp-16]
mov dword ptr [ebx+8], eax
cmp dword ptr [ebp-20], 0
je .Lt_008B
mov eax, dword ptr [ebp-16]
mov dword ptr [eax+12], 0
jmp .Lt_008A
.Lt_008B:
mov eax, dword ptr [ebp-16]
mov dword ptr [eax+12], -1
push dword ptr [ebp-16]
call HIFSINGLELINE
add esp, 4
.Lt_008A:
.Lt_0078:
pop ebx
mov esp, ebp
pop ebp
ret
.size CIFSTMTBEGIN, .-CIFSTMTBEGIN
.balign 16

.globl CIFSTMTNEXT
CIFSTMTNEXT:
.type CIFSTMTNEXT, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_008C:
push 0
push 266
call CCOMPSTMTGETTOS
add esp, 8
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_008F
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 269
jne .Lt_0091
push 0
push 0
push 115
call ERRREPORT
add esp, 12
jmp .Lt_0090
.Lt_0091:
push 0
push 0
push 116
call ERRREPORT
add esp, 12
.Lt_0090:
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_008D
.Lt_008F:
.Lt_008E:
mov eax, dword ptr [ebp-8]
cmp dword ptr [eax+12], 0
je .Lt_0093
jmp .Lt_008D
.Lt_0093:
.Lt_0092:
mov eax, dword ptr [ebp-8]
cmp dword ptr [eax+24], 0
je .Lt_0095
push 0
push 0
push 32
call ERRREPORT
add esp, 12
.Lt_0095:
.Lt_0094:
mov eax, dword ptr [ebp-8]
cmp dword ptr [eax+8], 0
je .Lt_0097
mov eax, dword ptr [ebp-8]
push dword ptr [eax+8]
call ASTSCOPEEND
add esp, 4
mov eax, dword ptr [ebp-8]
mov dword ptr [eax+8], 0
.Lt_0097:
.Lt_0096:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 269
jne .Lt_0099
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
mov eax, dword ptr [ebp-8]
push dword ptr [eax+20]
push 97
call ASTNEWBRANCH
add esp, 12
push eax
call ASTADD
add esp, 4
mov eax, dword ptr [ebp-8]
cmp dword ptr [eax+16], 0
je .Lt_009B
push -1
mov eax, dword ptr [ebp-8]
push dword ptr [eax+16]
call ASTNEWLABEL
add esp, 8
push eax
call ASTADD
add esp, 4
.Lt_009B:
.Lt_009A:
push 0
push 0
call SYMBADDLABEL
add esp, 8
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+16], eax
call CEXPRESSION
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
jne .Lt_009D
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
.Lt_009D:
.Lt_009C:
push 267
call HMATCH
add esp, 4
test eax, eax
jne .Lt_009F
push 0
push 0
push 31
call ERRREPORT
add esp, 12
.Lt_009F:
.Lt_009E:
push 0
push 0
mov eax, dword ptr [ebp-8]
push dword ptr [eax+16]
push dword ptr [ebp-4]
call ASTBUILDBRANCH
add esp, 16
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
jne .Lt_00A1
push 0
push 0
push 24
call ERRREPORT
add esp, 12
jmp .Lt_00A0
.Lt_00A1:
push dword ptr [ebp-4]
call ASTADD
add esp, 4
.Lt_00A0:
jmp .Lt_0098
.Lt_0099:
mov eax, dword ptr [ebp-8]
inc dword ptr [eax+24]
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 266
jne .Lt_00A3
push 1
push 0
push 32
call ERRREPORTWARN
add esp, 12
.Lt_00A3:
.Lt_00A2:
push 0
mov eax, dword ptr [ebp-8]
push dword ptr [eax+20]
push 97
call ASTNEWBRANCH
add esp, 12
push eax
call ASTADD
add esp, 4
mov eax, dword ptr [ebp-8]
cmp dword ptr [eax+16], 0
je .Lt_00A5
push -1
mov eax, dword ptr [ebp-8]
push dword ptr [eax+16]
call ASTNEWLABEL
add esp, 8
push eax
call ASTADD
add esp, 4
mov eax, dword ptr [ebp-8]
mov dword ptr [eax+16], 0
.Lt_00A5:
.Lt_00A4:
.Lt_0098:
call ASTSCOPEBEGIN
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+8], eax
call CSTATEMENT
.Lt_008D:
pop ebx
mov esp, ebp
pop ebp
ret
.size CIFSTMTNEXT, .-CIFSTMTNEXT
.balign 16

.globl CIFSTMTEND
CIFSTMTEND:
.type CIFSTMTEND, @function
push ebp
mov ebp, esp
sub esp, 4
.Lt_00A6:
push -1
push 266
call CCOMPSTMTGETTOS
add esp, 8
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
jne .Lt_00A9
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_00A7
.Lt_00A9:
.Lt_00A8:
mov eax, dword ptr [ebp-4]
cmp dword ptr [eax+12], 0
je .Lt_00AB
jmp .Lt_00A7
.Lt_00AB:
.Lt_00AA:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 340
jne .Lt_00AD
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_00AD:
.Lt_00AC:
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [ebp-4]
cmp dword ptr [eax+8], 0
je .Lt_00AF
mov eax, dword ptr [ebp-4]
push dword ptr [eax+8]
call ASTSCOPEEND
add esp, 4
.Lt_00AF:
.Lt_00AE:
mov eax, dword ptr [ebp-4]
cmp dword ptr [eax+16], 0
je .Lt_00B1
push -1
mov eax, dword ptr [ebp-4]
push dword ptr [eax+16]
call ASTNEWLABEL
add esp, 8
push eax
call ASTADD
add esp, 4
.Lt_00B1:
.Lt_00B0:
push -1
mov eax, dword ptr [ebp-4]
push dword ptr [eax+20]
call ASTNEWLABEL
add esp, 8
push eax
call ASTADD
add esp, 4
push dword ptr [ebp-4]
call CCOMPSTMTPOP
add esp, 4
.Lt_00A7:
mov esp, ebp
pop ebp
ret
.size CIFSTMTEND, .-CIFSTMTEND
.balign 16
fb_ctor__parserzcompoundzif:
.type fb_ctor__parserzcompoundzif, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__parserzcompoundzif, .-fb_ctor__parserzcompoundzif
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
HIFSINGLELINE:
.type HIFSINGLELINE, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
.Lt_005F:
push 0
call LEXGETCLASS
add esp, 4
cmp eax, 3
jne .Lt_0062
push 0
push 0
push 7
call LEXGETTEXT
push eax
push dword ptr [SYMB+98516]
call SYMBLOOKUPBYNAMEANDCLASS
add esp, 20
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
jne .Lt_0064
push 64
call LEXGETTEXT
push eax
call SYMBADDLABEL
add esp, 8
mov dword ptr [ebp-4], eax
.Lt_0064:
.Lt_0063:
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
push dword ptr [ebp-4]
push 97
call ASTNEWBRANCH
add esp, 12
push eax
call ASTADD
add esp, 4
jmp .Lt_0061
.Lt_0062:
call CSTATEMENT
.Lt_0061:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 268
jne .Lt_0066
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+8], 0
je .Lt_0068
mov eax, dword ptr [ebp+8]
push dword ptr [eax+8]
call ASTSCOPEEND
add esp, 4
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+8], 0
.Lt_0068:
.Lt_0067:
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax+20]
push 97
call ASTNEWBRANCH
add esp, 12
push eax
call ASTADD
add esp, 4
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+16]
call ASTNEWLABEL
add esp, 8
push eax
call ASTADD
add esp, 4
push 0
call LEXGETCLASS
add esp, 4
cmp eax, 3
jne .Lt_006A
push 0
push 0
push 7
call LEXGETTEXT
push eax
push dword ptr [SYMB+98516]
call SYMBLOOKUPBYNAMEANDCLASS
add esp, 20
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
jne .Lt_006C
push 64
call LEXGETTEXT
push eax
call SYMBADDLABEL
add esp, 8
mov dword ptr [ebp-4], eax
.Lt_006C:
.Lt_006B:
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
push dword ptr [ebp-4]
push 97
call ASTNEWBRANCH
add esp, 12
push eax
call ASTADD
add esp, 4
jmp .Lt_0069
.Lt_006A:
call ASTSCOPEBEGIN
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+8], eax
call CSTATEMENT
.Lt_0069:
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+20]
call ASTNEWLABEL
add esp, 8
push eax
call ASTADD
add esp, 4
jmp .Lt_0065
.Lt_0066:
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+16]
call ASTNEWLABEL
add esp, 8
push eax
call ASTADD
add esp, 4
.Lt_0065:
push 0
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 340
jne .Lt_006F
.Lt_0070:
push 0
push 1
call LEXGETLOOKAHEAD
add esp, 8
cmp eax, 266
jne .Lt_0072
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0072:
.Lt_0071:
jmp .Lt_006D
.Lt_006F:
cmp dword ptr [ebp-4], 314
jne .Lt_0073
.Lt_0074:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0073:
.Lt_006D:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+8], 0
je .Lt_0076
mov eax, dword ptr [ebp+8]
push dword ptr [eax+8]
call ASTSCOPEEND
add esp, 4
.Lt_0076:
.Lt_0075:
push dword ptr [ebp+8]
call CCOMPSTMTPOP
add esp, 4
.Lt_0060:
pop ebx
mov esp, ebp
pop ebp
ret
.size HIFSINGLELINE, .-HIFSINGLELINE
	#FreeBASIC-1.01.0-source/src/compiler/parser-compound-if.bas' compilation took 0.02901607006788254 secs

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
.int fb_ctor__parserzcompoundzif
