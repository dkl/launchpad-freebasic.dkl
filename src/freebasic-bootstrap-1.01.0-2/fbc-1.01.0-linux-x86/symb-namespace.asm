	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/symb-namespace.bas' compilation started at 14:16:39 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl SYMBADDNAMESPACE
SYMBADDNAMESPACE:
.type SYMBADDNAMESPACE, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_005F:
cmp dword ptr [ebp+12], 0
jne .Lt_0062
cmp dword ptr [PARSER+96], 0
je .Lt_0064
mov eax, dword ptr [ebp+8]
mov dword ptr [ebp+12], eax
.Lt_0064:
.Lt_0063:
.Lt_0062:
.Lt_0061:
push 0
push 0
push 19
push dword ptr [ebp+12]
push dword ptr [ebp+8]
push 8
push 0
push 0
push 0
push 32
call SYMBNEWSYMBOL
add esp, 40
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0066
mov dword ptr [ebp-4], 0
jmp .Lt_0060
.Lt_0066:
.Lt_0065:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp-8]
mov dword ptr [eax+52], ebx
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+56], 0
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+60], 0
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebp-8]
mov dword ptr [ebx+64], eax
mov eax, dword ptr [ebp-8]
mov dword ptr [eax+80], 0
mov eax, dword ptr [ebp-8]
mov dword ptr [eax+84], 0
push 0
push 800
mov eax, dword ptr [ebp-8]
lea ebx, [eax+68]
push ebx
call HASHINIT
add esp, 12
jmp .Lt_0067
.Lt_0068:
push 12
push 0
mov ebx, dword ptr [ebp-8]
lea eax, [ebx+68]
push eax
call memset
add esp, 12
.Lt_0067:
mov eax, dword ptr [ebp-8]
mov dword ptr [eax+88], 0
mov eax, dword ptr [ebp-8]
mov dword ptr [eax+92], 0
mov eax, dword ptr [ebp-8]
mov dword ptr [eax+96], 0
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_0060:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBADDNAMESPACE, .-SYMBADDNAMESPACE
.balign 16

.globl SYMBDELNAMESPACEMEMBERS
SYMBDELNAMESPACEMEMBERS:
.type SYMBDELNAMESPACEMEMBERS, @function
push ebp
mov ebp, esp
push ebx
.Lt_0069:
push dword ptr [ebp+8]
call SYMBCOMPDELIMPORTLIST
add esp, 4
.Lt_006B:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+60], 0
je .Lt_006C
push -1
mov eax, dword ptr [ebp+8]
push dword ptr [eax+60]
call SYMBDELSYMBOL
add esp, 8
jmp .Lt_006B
.Lt_006C:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+88], 0
je .Lt_006E
mov eax, dword ptr [ebp+8]
push dword ptr [eax+88]
lea eax, [SYMB+98640]
push eax
call LISTDELNODE
add esp, 8
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+88], 0
.Lt_006E:
.Lt_006D:
cmp dword ptr [ebp+12], 0
je .Lt_0070
mov eax, dword ptr [ebp+8]
lea ebx, [eax+68]
push ebx
call HASHEND
add esp, 4
.Lt_0070:
.Lt_006F:
.Lt_006A:
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBDELNAMESPACEMEMBERS, .-SYMBDELNAMESPACEMEMBERS
.balign 16

.globl SYMBDELNAMESPACE
SYMBDELNAMESPACE:
.type SYMBDELNAMESPACE, @function
push ebp
mov ebp, esp
.Lt_0071:
push -1
push dword ptr [ebp+8]
call SYMBDELNAMESPACEMEMBERS
add esp, 8
push dword ptr [ebp+8]
call SYMBFREESYMBOL
add esp, 4
.Lt_0072:
mov esp, ebp
pop ebp
ret
.size SYMBDELNAMESPACE, .-SYMBDELNAMESPACE
.balign 16

.globl SYMBNAMESPACEIMPORTEX
SYMBNAMESPACEIMPORTEX:
.type SYMBNAMESPACEIMPORTEX, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_008D:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HISONPARENTLIST
add esp, 8
test eax, eax
je .Lt_0090
mov dword ptr [ebp-4], 0
jmp .Lt_008E
.Lt_0090:
.Lt_008F:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+88], 0
jne .Lt_0092
lea eax, [SYMB+98640]
push eax
call LISTNEWNODE
add esp, 4
mov ebx, dword ptr [ebp+8]
mov dword ptr [ebx+88], eax
.Lt_0092:
.Lt_0091:
push dword ptr [ebp+12]
push dword ptr [ebp+8]
call HISONIMPORTLIST
add esp, 8
test eax, eax
jne .Lt_0094
push dword ptr [ebp+12]
call HADDIMPORT
add esp, 4
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_0096
mov dword ptr [ebp-4], 0
jmp .Lt_008E
.Lt_0096:
.Lt_0095:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+8]
mov dword ptr [eax+52], ebx
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebp+12]
mov dword ptr [ebx+64], eax
push dword ptr [ebp-8]
call SYMBCOMPADDTOIMPORTLIST
add esp, 4
push dword ptr [ebp-8]
call SYMBCOMPADDTOEXPORTLIST
add esp, 4
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+88]
mov eax, dword ptr [ebx]
mov dword ptr [ebp-8], eax
.Lt_0097:
cmp dword ptr [ebp-8], 0
je .Lt_0098
push dword ptr [ebp+12]
mov eax, dword ptr [ebp-8]
push dword ptr [eax+52]
call SYMBNAMESPACEIMPORTEX
add esp, 8
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+60]
mov dword ptr [ebp-8], ebx
jmp .Lt_0097
.Lt_0098:
push dword ptr [ebp+8]
call HADDTOHASHTBLIST
add esp, 4
.Lt_0094:
.Lt_0093:
mov dword ptr [ebp-4], -1
.Lt_008E:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBNAMESPACEIMPORTEX, .-SYMBNAMESPACEIMPORTEX
.balign 16

.globl SYMBNAMESPACEIMPORT
SYMBNAMESPACEIMPORT:
.type SYMBNAMESPACEIMPORT, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_0099:
push dword ptr [SYMB+98516]
push dword ptr [ebp+8]
call SYMBNAMESPACEIMPORTEX
add esp, 8
mov dword ptr [ebp-4], eax
.Lt_009A:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size SYMBNAMESPACEIMPORT, .-SYMBNAMESPACEIMPORT
.balign 16

.globl SYMBNAMESPACEREMOVE
SYMBNAMESPACEREMOVE:
.type SYMBNAMESPACEREMOVE, @function
push ebp
mov ebp, esp
.Lt_009B:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+52], 0
je .Lt_009E
mov eax, dword ptr [ebp+8]
push dword ptr [eax+52]
call HDELFROMHASHTBLIST
add esp, 4
push dword ptr [ebp+8]
call SYMBCOMPDELFROMEXPORTLIST
add esp, 4
push dword ptr [ebp+8]
call SYMBCOMPDELFROMIMPORTLIST
add esp, 4
mov eax, dword ptr [ebp+8]
mov dword ptr [eax+52], 0
.Lt_009E:
.Lt_009D:
cmp dword ptr [ebp+12], 0
jne .Lt_00A0
push dword ptr [ebp+8]
call SYMBFREESYMBOL
add esp, 4
.Lt_00A0:
.Lt_009F:
.Lt_009C:
mov esp, ebp
pop ebp
ret
.size SYMBNAMESPACEREMOVE, .-SYMBNAMESPACEREMOVE
.balign 16

.globl SYMBNAMESPACEREIMPORT
SYMBNAMESPACEREIMPORT:
.type SYMBNAMESPACEREIMPORT, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_00A1:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+88]
cmp dword ptr [ebx+20], 0
je .Lt_00A4
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+96]
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_00A6
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-8], ebx
jmp .Lt_00A5
.Lt_00A6:
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx+160]
mov dword ptr [ebp-8], eax
.Lt_00A5:
cmp dword ptr [ebp-8], 0
je .Lt_00A8
push dword ptr [ebp-8]
push dword ptr [ebp+8]
call SYMBHASHLISTINSERTNAMESPACE
add esp, 8
.Lt_00A8:
.Lt_00A7:
.Lt_00A4:
.Lt_00A3:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+88]
mov eax, dword ptr [ebx+8]
mov dword ptr [ebp-4], eax
.Lt_00A9:
cmp dword ptr [ebp-4], 0
je .Lt_00AA
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+88]
mov eax, dword ptr [ebx]
mov dword ptr [ebp-8], eax
.Lt_00AB:
cmp dword ptr [ebp-8], 0
je .Lt_00AC
mov eax, dword ptr [ebp-4]
push dword ptr [eax+64]
mov eax, dword ptr [ebp-8]
push dword ptr [eax+52]
call SYMBNAMESPACEIMPORTEX
add esp, 8
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+60]
mov dword ptr [ebp-8], ebx
jmp .Lt_00AB
.Lt_00AC:
mov ebx, dword ptr [ebp-4]
mov eax, dword ptr [ebx+72]
mov dword ptr [ebp-4], eax
jmp .Lt_00A9
.Lt_00AA:
.Lt_00A2:
pop ebx
mov esp, ebp
pop ebp
ret
.size SYMBNAMESPACEREIMPORT, .-SYMBNAMESPACEREIMPORT
.balign 16
fb_ctor__symbznamespace:
.type fb_ctor__symbznamespace, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__symbznamespace, .-fb_ctor__symbznamespace
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
HADDIMPORT:
.type HADDIMPORT, @function
push ebp
mov ebp, esp
sub esp, 16
push ebx
mov dword ptr [ebp-4], 0
.Lt_0073:
mov eax, dword ptr [SYMB+98516]
cmp dword ptr [ebp+8], eax
jne .Lt_0076
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-16], 0
jmp .Lt_0075
.Lt_0076:
mov eax, dword ptr [ebp+8]
lea ebx, [eax+52]
mov dword ptr [ebp-8], ebx
mov ebx, dword ptr [ebp+8]
lea eax, [ebx+64]
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 128
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
mov dword ptr [ebp-16], ebx
.Lt_0075:
push dword ptr [ebp-16]
push 0
push -2147483648
push 0
push 0
push 16
push dword ptr [ebp-12]
push dword ptr [ebp-8]
push 0
push 0
call SYMBNEWSYMBOL
add esp, 40
mov dword ptr [ebp-4], eax
.Lt_0074:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HADDIMPORT, .-HADDIMPORT
.balign 16
HADDTOHASHTBLIST:
.type HADDTOHASHTBLIST, @function
push ebp
mov ebp, esp
push ebx
.Lt_0077:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+88]
inc dword ptr [ebx+16]
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+88]
cmp dword ptr [eax+16], 1
jne .Lt_007A
mov eax, dword ptr [ebp+8]
push dword ptr [eax+56]
push dword ptr [ebp+8]
call SYMBHASHLISTINSERTNAMESPACE
add esp, 8
.Lt_007A:
.Lt_0079:
.Lt_0078:
pop ebx
mov esp, ebp
pop ebp
ret
.size HADDTOHASHTBLIST, .-HADDTOHASHTBLIST
.balign 16
HDELFROMHASHTBLIST:
.type HDELFROMHASHTBLIST, @function
push ebp
mov ebp, esp
push ebx
.Lt_007B:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+88]
dec dword ptr [ebx+16]
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+88]
cmp dword ptr [eax+16], 0
jne .Lt_007E
push dword ptr [ebp+8]
call SYMBHASHLISTREMOVENAMESPACE
add esp, 4
.Lt_007E:
.Lt_007D:
.Lt_007C:
pop ebx
mov esp, ebp
pop ebp
ret
.size HDELFROMHASHTBLIST, .-HDELFROMHASHTBLIST
.balign 16
HISONPARENTLIST:
.type HISONPARENTLIST, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_007F:
mov eax, dword ptr [ebp+12]
mov dword ptr [ebp-8], eax
.Lt_0081:
lea eax, [SYMB+98352]
cmp dword ptr [ebp-8], eax
je .Lt_0082
mov eax, dword ptr [ebp-8]
cmp dword ptr [ebp+8], eax
jne .Lt_0084
mov dword ptr [ebp-4], -1
jmp .Lt_0080
.Lt_0084:
.Lt_0083:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+128]
mov eax, dword ptr [ebx]
mov dword ptr [ebp-8], eax
jmp .Lt_0081
.Lt_0082:
mov dword ptr [ebp-4], 0
.Lt_0080:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HISONPARENTLIST, .-HISONPARENTLIST
.balign 16
HISONIMPORTLIST:
.type HISONIMPORTLIST, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_0085:
mov eax, dword ptr [ebp+12]
cmp dword ptr [eax+88], 0
je .Lt_0088
mov eax, dword ptr [ebp+12]
mov ebx, dword ptr [eax+88]
mov eax, dword ptr [ebx]
mov dword ptr [ebp-8], eax
.Lt_0089:
cmp dword ptr [ebp-8], 0
je .Lt_008A
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [ebp+8]
cmp dword ptr [eax+52], ebx
jne .Lt_008C
mov dword ptr [ebp-4], -1
jmp .Lt_0086
.Lt_008C:
.Lt_008B:
mov ebx, dword ptr [ebp-8]
mov eax, dword ptr [ebx+60]
mov dword ptr [ebp-8], eax
jmp .Lt_0089
.Lt_008A:
.Lt_0088:
.Lt_0087:
mov dword ptr [ebp-4], 0
.Lt_0086:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HISONIMPORTLIST, .-HISONIMPORTLIST
	#fbc-1.01.0/src/compiler/symb-namespace.bas' compilation took 0.02760897600091994 secs

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
.int fb_ctor__symbznamespace
