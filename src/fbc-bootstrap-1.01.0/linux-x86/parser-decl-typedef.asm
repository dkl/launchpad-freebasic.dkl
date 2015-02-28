	.intel_syntax noprefix

	#FreeBASIC-1.01.0-source/src/compiler/parser-decl-typedef.bas' compilation started at 16:30:05 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl CTYPEDEFMULTDECL
CTYPEDEFMULTDECL:
.type CTYPEDEFMULTDECL, @function
push ebp
mov ebp, esp
sub esp, 24
.Lt_009D:
push 9
call CCOMPSTMTISALLOWED
add esp, 4
test eax, eax
jne .Lt_00A0
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_009E
.Lt_00A0:
.Lt_009F:
push 0
call LEXSKIPTOKEN
add esp, 4
lea eax, [ebp-20]
push eax
lea eax, [ebp-24]
push eax
lea eax, [ebp-12]
push eax
call HREADTYPE
add esp, 12
mov dword ptr [ebp-4], eax
.Lt_00A1:
call HREADID
mov dword ptr [ebp-8], eax
push dword ptr [ebp-16]
push dword ptr [ebp-20]
push dword ptr [ebp-24]
push dword ptr [ebp-12]
push dword ptr [ebp-4]
push dword ptr [ebp-8]
call HADDTYPEDEF
add esp, 24
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
je .Lt_00A5
jmp .Lt_00A2
.Lt_00A5:
.Lt_00A4:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_00A3:
jmp .Lt_00A1
.Lt_00A2:
.Lt_009E:
mov esp, ebp
pop ebp
ret
.size CTYPEDEFMULTDECL, .-CTYPEDEFMULTDECL
.balign 16

.globl CTYPEDEFSINGLEDECL
CTYPEDEFSINGLEDECL:
.type CTYPEDEFSINGLEDECL, @function
push ebp
mov ebp, esp
sub esp, 20
.Lt_00A6:
push 9
call CCOMPSTMTISALLOWED
add esp, 4
test eax, eax
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
.Lt_00AA:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 375
je .Lt_00AE
push 0
push 0
push 17
call ERRREPORT
add esp, 12
jmp .Lt_00AD
.Lt_00AE:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_00AD:
lea eax, [ebp-16]
push eax
lea eax, [ebp-20]
push eax
lea eax, [ebp-8]
push eax
call HREADTYPE
add esp, 12
mov dword ptr [ebp-4], eax
push dword ptr [ebp-12]
push dword ptr [ebp-16]
push dword ptr [ebp-20]
push dword ptr [ebp-8]
push dword ptr [ebp-4]
push dword ptr [ebp+8]
call HADDTYPEDEF
add esp, 24
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
je .Lt_00B0
jmp .Lt_00AB
.Lt_00B0:
.Lt_00AF:
push 0
call LEXSKIPTOKEN
add esp, 4
call HREADID
mov dword ptr [ebp+8], eax
.Lt_00AC:
jmp .Lt_00AA
.Lt_00AB:
.Lt_00A7:
mov esp, ebp
pop ebp
ret
.size CTYPEDEFSINGLEDECL, .-CTYPEDEFSINGLEDECL
.balign 16
fb_ctor__parserzdeclztypedef:
.type fb_ctor__parserzdeclztypedef, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__parserzdeclztypedef, .-fb_ctor__parserzdeclztypedef
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
HPTRDECL:
.type HPTRDECL, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
.Lt_005F:
mov dword ptr [ebp-4], 0
.Lt_0061:
push 0
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-8], eax
jmp .Lt_0065
.Lt_0067:
push 0
call LEXSKIPTOKEN
add esp, 4
push 0
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 372
je .Lt_006B
.Lt_006C:
cmp dword ptr [ebp-12], 373
jne .Lt_006A
.Lt_006B:
cmp dword ptr [ebp-4], 8
jl .Lt_006E
push 0
push 0
push 273
call ERRREPORT
add esp, 12
jmp .Lt_006D
.Lt_006E:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
and ebx, 31
mov eax, dword ptr [ebp+8]
mov ecx, dword ptr [eax]
and ecx, 480
add ecx, 32
or ebx, ecx
mov ecx, dword ptr [ebp+8]
mov eax, dword ptr [ecx]
and eax, 261632
sal eax, 1
or ebx, eax
or ebx, 512
mov eax, dword ptr [ebp+8]
mov dword ptr [eax], ebx
inc dword ptr [ebp-4]
.Lt_006D:
push 0
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_0068
.Lt_006A:
push 0
push 0
push 272
call ERRREPORT
add esp, 12
jmp .Lt_0062
.Lt_006F:
.Lt_0068:
jmp .Lt_0064
.Lt_0070:
cmp dword ptr [ebp-4], 8
jl .Lt_0072
push 0
push 0
push 273
call ERRREPORT
add esp, 12
jmp .Lt_0071
.Lt_0072:
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx]
and eax, 31
mov ebx, dword ptr [ebp+8]
mov ecx, dword ptr [ebx]
and ecx, 480
add ecx, 32
or eax, ecx
mov ecx, dword ptr [ebp+8]
mov ebx, dword ptr [ecx]
and ebx, 261632
sal ebx, 1
or eax, ebx
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx], eax
inc dword ptr [ebp-4]
.Lt_0071:
push 0
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_0064
.Lt_0073:
jmp .Lt_0062
jmp .Lt_0064
.Lt_0065:
mov eax, dword ptr [ebp-8]
add eax, 4294966961
cmp eax, 38
ja .Lt_0073
mov eax, dword ptr [ebp-8]
jmp dword ptr [.LT_0074+eax*4-1340]
.LT_0074:
.int .Lt_0067
.int .Lt_0073
.int .Lt_0073
.int .Lt_0073
.int .Lt_0073
.int .Lt_0073
.int .Lt_0073
.int .Lt_0073
.int .Lt_0073
.int .Lt_0073
.int .Lt_0073
.int .Lt_0073
.int .Lt_0073
.int .Lt_0073
.int .Lt_0073
.int .Lt_0073
.int .Lt_0073
.int .Lt_0073
.int .Lt_0073
.int .Lt_0073
.int .Lt_0073
.int .Lt_0073
.int .Lt_0073
.int .Lt_0073
.int .Lt_0073
.int .Lt_0073
.int .Lt_0073
.int .Lt_0073
.int .Lt_0073
.int .Lt_0073
.int .Lt_0073
.int .Lt_0073
.int .Lt_0073
.int .Lt_0073
.int .Lt_0073
.int .Lt_0073
.int .Lt_0073
.int .Lt_0070
.int .Lt_0070
.Lt_0064:
.Lt_0063:
jmp .Lt_0061
.Lt_0062:
.Lt_0060:
pop ebx
mov esp, ebp
pop ebp
ret
.size HPTRDECL, .-HPTRDECL
.balign 16
HREADTYPE:
.type HREADTYPE, @function
push ebp
mov ebp, esp
sub esp, 8
mov dword ptr [ebp-4], 0
.Lt_0075:
mov dword ptr [ebp-4], 0
push 0
push dword ptr [ebp+16]
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call CSYMBOLTYPE
add esp, 16
test eax, eax
jne .Lt_0078
push 0
push 0
call LEXGETTEXT
push eax
push 129
push offset Lt_00B1
call fb_StrAssign
add esp, 20
mov eax, offset Lt_00B1
mov dword ptr [ebp-8], eax
push 0
call LEXSKIPTOKEN
add esp, 4
push dword ptr [ebp+8]
call HPTRDECL
add esp, 4
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0078:
.Lt_0077:
.Lt_0076:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size HREADTYPE, .-HREADTYPE

.section .bss
.balign 4
	.lcomm	Lt_00B1,129

.section .text
.balign 16
HADDFORWARDREF:
.type HADDFORWARDREF, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_0079:
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax]
and ebx, 480
sar ebx, 5
mov dword ptr [ebp-4], ebx
mov ebx, dword ptr [ebp+16]
mov eax, dword ptr [ebx]
and eax, 261632
mov dword ptr [ebp-8], eax
push dword ptr [ebp+12]
push dword ptr [ebp+12]
call HUCASE
add esp, 8
push dword ptr [ebp+8]
push dword ptr [ebp+8]
call HUCASE
add esp, 8
push 0
push dword ptr [ebp+8]
push 0
push dword ptr [ebp+12]
call fb_StrCompare
add esp, 16
test eax, eax
jne .Lt_007C
mov eax, dword ptr [ebp+16]
mov dword ptr [eax], 0
mov eax, dword ptr [ebp+20]
mov dword ptr [eax], 0
mov eax, dword ptr [ebp+24]
mov dword ptr [eax], 0
mov dword ptr [eax+4], 0
jmp .Lt_007B
.Lt_007C:
mov eax, dword ptr [ebp+16]
mov dword ptr [eax], 21
push dword ptr [ebp+12]
call SYMBADDFWDREF
add esp, 4
mov ebx, dword ptr [ebp+20]
mov dword ptr [ebx], eax
mov eax, dword ptr [ebp+24]
mov dword ptr [eax], 4294967295
mov dword ptr [eax+4], 4294967295
mov eax, dword ptr [ebp+20]
cmp dword ptr [eax], 0
jne .Lt_007E
push 0
push -1
push 14
push dword ptr [ebp+12]
push dword ptr [SYMB+98516]
call SYMBLOOKUPBYNAMEANDCLASS
add esp, 20
mov ebx, dword ptr [ebp+20]
mov dword ptr [ebx], eax
mov eax, dword ptr [ebp+20]
cmp dword ptr [eax], 0
jne .Lt_0080
push 0
push 0
push 4
call ERRREPORT
add esp, 12
call SYMBUNIQUELABEL
push eax
call SYMBADDFWDREF
add esp, 4
mov ebx, dword ptr [ebp+20]
mov dword ptr [ebx], eax
.Lt_0080:
.Lt_007F:
.Lt_007E:
.Lt_007D:
.Lt_007B:
mov eax, dword ptr [ebp+16]
mov ebx, dword ptr [eax]
and ebx, 31
mov eax, dword ptr [ebp+16]
mov ecx, dword ptr [eax]
and ecx, 480
mov eax, dword ptr [ebp-4]
sal eax, 5
add ecx, eax
or ebx, ecx
mov ecx, dword ptr [ebp+16]
mov eax, dword ptr [ecx]
and eax, 261632
mov cl, byte ptr [ebp-4]
sal eax, cl
or ebx, eax
or ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebp+16]
mov dword ptr [eax], ebx
.Lt_007A:
pop ebx
mov esp, ebp
pop ebp
ret
.size HADDFORWARDREF, .-HADDFORWARDREF
.balign 16
HADDTYPEDEF:
.type HADDTYPEDEF, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
.Lt_0081:
cmp dword ptr [ebp+12], 0
je .Lt_0084
lea eax, [ebp+24]
push eax
lea eax, [ebp+20]
push eax
lea eax, [ebp+16]
push eax
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HADDFORWARDREF
add esp, 20
.Lt_0084:
.Lt_0083:
push dword ptr [ebp+28]
push dword ptr [ebp+24]
push dword ptr [ebp+20]
push dword ptr [ebp+16]
push dword ptr [ebp+8]
call SYMBADDTYPEDEF
add esp, 20
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
jne .Lt_0086
mov dword ptr [ebp-8], -1
push 0
push 0
push 13
push dword ptr [ebp+8]
push dword ptr [SYMB+98516]
call SYMBLOOKUPBYNAMEANDCLASS
add esp, 20
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
je .Lt_0088
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [ebp+16]
cmp dword ptr [eax+24], ebx
jne .Lt_008A
mov ebx, dword ptr [ebp-12]
mov eax, dword ptr [ebp+20]
cmp dword ptr [ebx+28], eax
jne .Lt_008C
mov dword ptr [ebp-8], 0
.Lt_008C:
.Lt_008B:
.Lt_008A:
.Lt_0089:
.Lt_0088:
.Lt_0087:
cmp dword ptr [ebp-8], 0
je .Lt_008E
push 0
push -1
push 4
call ERRREPORT
add esp, 12
.Lt_008E:
.Lt_008D:
.Lt_0086:
.Lt_0085:
.Lt_0082:
pop ebx
mov esp, ebp
pop ebp
ret
.size HADDTYPEDEF, .-HADDTYPEDEF
.balign 16
HREADID:
.type HREADID, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_008F:
call CCURRENTPARENTID
push 0
call LEXGETCLASS
add esp, 4
mov dword ptr [ebp-8], eax
jmp .Lt_0092
.Lt_0094:
mov eax, dword ptr [ENV+840]
and eax, 524288
test eax, eax
je .Lt_0096
lea eax, [SYMB+98352]
cmp dword ptr [SYMB+98516], eax
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_0098
mov ebx, dword ptr [LEX+839664]
mov eax, dword ptr [ebx+16532]
cmp dword ptr [eax+4120], 0
jle .Lt_009A
push 0
push 0
push 89
call ERRREPORT
add esp, 12
.Lt_009A:
.Lt_0099:
.Lt_0098:
.Lt_0097:
.Lt_0096:
.Lt_0095:
push 0
push 0
call LEXGETTEXT
push eax
push 129
push offset Lt_00B3
call fb_StrAssign
add esp, 20
push 0
call LEXSKIPTOKEN
add esp, 4
jmp .Lt_0091
.Lt_009B:
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
push offset Lt_00B3
call fb_StrAssign
add esp, 20
jmp .Lt_0091
.Lt_0092:
cmp dword ptr [ebp-8], 2
ja .Lt_009B
mov eax, dword ptr [ebp-8]
jmp dword ptr [.LT_009C+eax*4]
.LT_009C:
.int .Lt_0094
.int .Lt_0094
.int .Lt_0094
.Lt_0091:
mov eax, offset Lt_00B3
mov dword ptr [ebp-4], eax
.Lt_0090:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HREADID, .-HREADID

.section .bss
.balign 4
	.lcomm	Lt_00B3,129
	#FreeBASIC-1.01.0-source/src/compiler/parser-decl-typedef.bas' compilation took 0.03123797499574721 secs
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
.int fb_ctor__parserzdeclztypedef
