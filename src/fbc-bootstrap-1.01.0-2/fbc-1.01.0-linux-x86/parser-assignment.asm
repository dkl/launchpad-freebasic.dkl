	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/parser-assignment.bas' compilation started at 15:27:34 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl PARSERLETINIT
PARSERLETINIT:
.type PARSERLETINIT, @function
.Lt_005F:
push -1
push 4
push 16
lea eax, [PARSER+56]
push eax
call LISTINIT
add esp, 16
.Lt_0060:
ret
.size PARSERLETINIT, .-PARSERLETINIT
.balign 16

.globl PARSERLETEND
PARSERLETEND:
.type PARSERLETEND, @function
.Lt_0061:
lea eax, [PARSER+56]
push eax
call LISTEND
add esp, 4
.Lt_0062:
ret
.size PARSERLETEND, .-PARSERLETEND
.balign 16

.globl HISASSIGNTOKEN
HISASSIGNTOKEN:
.type HISASSIGNTOKEN, @function
push ebp
mov ebp, esp
sub esp, 4
push ebx
mov dword ptr [ebp-4], 0
.Lt_0063:
mov eax, dword ptr [ebp+8]
cmp eax, 299
sete al
shr eax, 1
sbb eax, eax
mov ebx, dword ptr [ebp+8]
cmp ebx, 305
sete bl
shr ebx, 1
sbb ebx, ebx
or eax, ebx
mov dword ptr [ebp-4], eax
.Lt_0064:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HISASSIGNTOKEN, .-HISASSIGNTOKEN
.balign 16

.globl CASSIGNTOKEN
CASSIGNTOKEN:
.type CASSIGNTOKEN, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_0067:
push 0
call LEXGETTOKEN
add esp, 4
push eax
call HISASSIGNTOKEN
add esp, 4
test eax, eax
je .Lt_006A
push 0
call LEXSKIPTOKEN
add esp, 4
mov dword ptr [ebp-4], -1
jmp .Lt_0069
.Lt_006A:
mov dword ptr [ebp-4], 0
.Lt_0069:
.Lt_0068:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size CASSIGNTOKEN, .-CASSIGNTOKEN
.balign 16

.globl COPERATOR
COPERATOR:
.type COPERATOR, @function
push ebp
mov ebp, esp
sub esp, 28
push ebx
mov dword ptr [ebp-4], 0
.Lt_006B:
mov dword ptr [ebp-4], -1
mov dword ptr [ebp-8], -1
push 0
call LEXGETTOKEN
add esp, 4
mov dword ptr [ebp-12], eax
mov eax, dword ptr [ebp-12]
mov dword ptr [ebp-16], eax
jmp .Lt_006E
.Lt_0070:
mov dword ptr [ebp-8], 34
jmp .Lt_006D
.Lt_0071:
mov dword ptr [ebp-8], 35
jmp .Lt_006D
.Lt_0072:
mov dword ptr [ebp-8], 36
jmp .Lt_006D
.Lt_0073:
mov dword ptr [ebp-8], 37
jmp .Lt_006D
.Lt_0074:
mov dword ptr [ebp-8], 38
jmp .Lt_006D
.Lt_0075:
mov dword ptr [ebp-8], 39
jmp .Lt_006D
.Lt_0076:
mov dword ptr [ebp-8], 40
jmp .Lt_006D
.Lt_0077:
mov dword ptr [ebp-8], 41
jmp .Lt_006D
.Lt_0078:
mov dword ptr [ebp-8], 42
jmp .Lt_006D
.Lt_0079:
mov dword ptr [ebp-8], 33
jmp .Lt_006D
.Lt_007A:
mov dword ptr [ebp-8], 28
jmp .Lt_006D
.Lt_007B:
mov dword ptr [ebp-8], 29
jmp .Lt_006D
.Lt_007C:
mov dword ptr [ebp-8], 32
jmp .Lt_006D
.Lt_007D:
mov dword ptr [ebp-8], 30
jmp .Lt_006D
.Lt_007E:
mov dword ptr [ebp-8], 31
jmp .Lt_006D
.Lt_007F:
mov dword ptr [ebp-8], 43
jmp .Lt_006D
.Lt_0080:
mov dword ptr [ebp-8], 44
jmp .Lt_006D
.Lt_0081:
cmp dword ptr [ebp+8], 0
jne .Lt_0083
jmp .Lt_006C
.Lt_0083:
.Lt_0082:
push 0
call LEXSKIPTOKEN
add esp, 4
mov eax, dword ptr [ebp-12]
mov dword ptr [ebp-20], eax
jmp .Lt_0085
.Lt_0087:
mov dword ptr [ebp-8], 45
jmp .Lt_0084
.Lt_0088:
mov dword ptr [ebp-8], 46
jmp .Lt_0084
.Lt_0089:
mov dword ptr [ebp-8], 47
jmp .Lt_0084
.Lt_008A:
mov dword ptr [ebp-8], 48
jmp .Lt_0084
.Lt_008B:
mov dword ptr [ebp-8], 50
jmp .Lt_0084
.Lt_008C:
mov dword ptr [ebp-8], 49
jmp .Lt_0084
.Lt_008D:
mov dword ptr [ebp-8], 0
jmp .Lt_0084
.Lt_008E:
mov dword ptr [ebp-8], 52
jmp .Lt_0084
.Lt_008F:
mov dword ptr [ebp-8], 27
jmp .Lt_0084
.Lt_0090:
mov dword ptr [ebp-8], 56
jmp .Lt_0084
.Lt_0091:
mov dword ptr [ebp-8], 57
jmp .Lt_0084
.Lt_0092:
mov dword ptr [ebp-8], 71
jmp .Lt_0084
.Lt_0093:
mov dword ptr [ebp-8], 72
jmp .Lt_0084
.Lt_0094:
mov dword ptr [ebp-8], 70
jmp .Lt_0084
.Lt_0095:
mov dword ptr [ebp-8], 69
jmp .Lt_0084
.Lt_0096:
mov dword ptr [ebp-8], 68
jmp .Lt_0084
.Lt_0097:
mov dword ptr [ebp-8], 58
jmp .Lt_0084
.Lt_0098:
mov dword ptr [ebp-8], 59
jmp .Lt_0084
.Lt_0099:
mov dword ptr [ebp-8], 60
jmp .Lt_0084
.Lt_009A:
mov dword ptr [ebp-8], 61
jmp .Lt_0084
.Lt_009B:
mov dword ptr [ebp-8], 62
jmp .Lt_0084
.Lt_009C:
mov dword ptr [ebp-8], 63
jmp .Lt_0084
.Lt_009D:
mov dword ptr [ebp-8], 73
jmp .Lt_0084
.Lt_009E:
mov dword ptr [ebp-8], 22
jmp .Lt_0084
.Lt_009F:
mov dword ptr [ebp-8], 77
jmp .Lt_0084
.Lt_00A0:
push 93
call HMATCH
add esp, 4
test eax, eax
jne .Lt_00A2
push 0
push 0
push 65
call ERRREPORT
add esp, 12
.Lt_00A2:
.Lt_00A1:
mov dword ptr [ebp-8], 23
jmp .Lt_0084
.Lt_00A3:
mov eax, dword ptr [ebp-12]
cmp eax, 386
sete al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-24], eax
push 91
call HMATCH
add esp, 4
test eax, eax
je .Lt_00A5
push 93
call HMATCH
add esp, 4
test eax, eax
jne .Lt_00A7
push 0
push 0
push 65
call ERRREPORT
add esp, 12
.Lt_00A7:
.Lt_00A6:
cmp dword ptr [ebp-24], 0
je .Lt_00A8
mov dword ptr [ebp-28], 19
jmp .Lt_00B7
.Lt_00A8:
mov dword ptr [ebp-28], 21
.Lt_00B7:
mov eax, dword ptr [ebp-28]
mov dword ptr [ebp-8], eax
jmp .Lt_00A4
.Lt_00A5:
cmp dword ptr [ebp-24], 0
je .Lt_00AA
mov dword ptr [ebp-28], 18
jmp .Lt_00B8
.Lt_00AA:
mov dword ptr [ebp-28], 20
.Lt_00B8:
mov eax, dword ptr [ebp-28]
mov dword ptr [ebp-8], eax
.Lt_00A4:
jmp .Lt_0084
.Lt_00AC:
mov dword ptr [ebp-8], 24
jmp .Lt_0084
.Lt_00AD:
mov dword ptr [ebp-8], 25
jmp .Lt_0084
.Lt_00AE:
mov dword ptr [ebp-8], 26
jmp .Lt_0084
.Lt_00AF:
jmp .Lt_0084
.Lt_0085:
mov eax, dword ptr [ebp-20]
add eax, 4294967232
cmp eax, 397
ja .Lt_00AF
mov eax, dword ptr [ebp-20]
jmp dword ptr [.LT_00B0+eax*4-256]
.LT_00B0:
.int .Lt_009E
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00A0
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AC
.int .Lt_00AD
.int .Lt_00AE
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_008E
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_0087
.int .Lt_0088
.int .Lt_0089
.int .Lt_008A
.int .Lt_008B
.int .Lt_008C
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00A3
.int .Lt_00A3
.int .Lt_008D
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_009F
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_008F
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_0090
.int .Lt_0091
.int .Lt_0092
.int .Lt_0093
.int .Lt_0097
.int .Lt_0098
.int .Lt_0099
.int .Lt_009A
.int .Lt_009B
.int .Lt_009C
.int .Lt_00AF
.int .Lt_0096
.int .Lt_0095
.int .Lt_0094
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_00AF
.int .Lt_009D
.Lt_0084:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
jmp .Lt_006C
jmp .Lt_006D
.Lt_00B1:
jmp .Lt_006C
jmp .Lt_006D
.Lt_006E:
mov eax, dword ptr [ebp-16]
add eax, 4294967258
cmp eax, 423
ja .Lt_00B1
mov eax, dword ptr [ebp-16]
jmp dword ptr [.LT_00B2+eax*4-152]
.LT_00B2:
.int .Lt_0080
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_007D
.int .Lt_007A
.int .Lt_00B1
.int .Lt_007B
.int .Lt_00B1
.int .Lt_007E
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_0081
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_0081
.int .Lt_007C
.int .Lt_00B1
.int .Lt_007F
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_0081
.int .Lt_0081
.int .Lt_0081
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_0070
.int .Lt_0071
.int .Lt_0072
.int .Lt_0073
.int .Lt_0074
.int .Lt_0075
.int .Lt_0076
.int .Lt_0081
.int .Lt_0079
.int .Lt_0077
.int .Lt_0078
.int .Lt_0081
.int .Lt_0081
.int .Lt_0081
.int .Lt_0081
.int .Lt_0081
.int .Lt_0081
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_0081
.int .Lt_0081
.int .Lt_0081
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_0081
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_0081
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_0081
.int .Lt_0081
.int .Lt_0081
.int .Lt_0081
.int .Lt_0081
.int .Lt_0081
.int .Lt_0081
.int .Lt_0081
.int .Lt_0081
.int .Lt_0081
.int .Lt_00B1
.int .Lt_0081
.int .Lt_0081
.int .Lt_0081
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_00B1
.int .Lt_0081
.Lt_006D:
push 0
call LEXSKIPTOKEN
add esp, 4
cmp dword ptr [ebp+8], 0
jne .Lt_00B4
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
jmp .Lt_006C
.Lt_00B4:
.Lt_00B3:
call CASSIGNTOKEN
test eax, eax
je .Lt_00B6
mov eax, dword ptr [ebp-8]
sal eax, 4
mov ebx, dword ptr [AST_OPTB+eax+12]
mov dword ptr [ebp-8], ebx
.Lt_00B6:
.Lt_00B5:
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebp-4], ebx
.Lt_006C:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size COPERATOR, .-COPERATOR
.balign 16

.globl CASSIGNMENT
CASSIGNMENT:
.type CASSIGNMENT, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
.Lt_00BA:
push dword ptr [ebp+8]
call ASTISCONSTANT
add esp, 4
test eax, eax
je .Lt_00BD
push 0
push -1
push 118
call ERRREPORT
add esp, 12
.Lt_00BD:
.Lt_00BC:
mov dword ptr [ebp-4], -1
push 0
call LEXGETTOKEN
add esp, 4
push eax
call HISASSIGNTOKEN
add esp, 4
test eax, eax
jne .Lt_00BF
push 0
call COPERATOR
add esp, 4
mov dword ptr [ebp-4], eax
push 0
call LEXGETTOKEN
add esp, 4
push eax
call HISASSIGNTOKEN
add esp, 4
test eax, eax
jne .Lt_00C1
push 0
push 0
push 10
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_00BB
.Lt_00C1:
.Lt_00C0:
mov eax, dword ptr [ebp-4]
sal eax, 4
mov ebx, dword ptr [AST_OPTB+eax+12]
mov dword ptr [ebp-4], ebx
.Lt_00BF:
.Lt_00BE:
push 0
call LEXSKIPTOKEN
add esp, 4
mov ebx, dword ptr [ebp+8]
mov eax, dword ptr [ebx+8]
mov dword ptr [PARSER+152], eax
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax+4]
and ebx, 511
mov dword ptr [PARSER+148], ebx
call CEXPRESSION
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_00C3
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
jmp .Lt_00BB
.Lt_00C3:
.Lt_00C2:
mov dword ptr [PARSER+152], 0
mov dword ptr [PARSER+148], -2147483648
cmp dword ptr [ebp-4], -1
je .Lt_00C5
push 2
push 0
push dword ptr [ebp-8]
push dword ptr [ebp+8]
push dword ptr [ebp-4]
call ASTNEWSELFBOP
add esp, 20
mov dword ptr [ebp+8], eax
cmp dword ptr [ebp+8], 0
je .Lt_00C7
push dword ptr [ebp+8]
call ASTADD
add esp, 4
jmp .Lt_00C6
.Lt_00C7:
push 0
push -1
push 20
call ERRREPORT
add esp, 12
.Lt_00C6:
jmp .Lt_00C4
.Lt_00C5:
push 0
push dword ptr [ebp-8]
push dword ptr [ebp+8]
call ASTNEWASSIGN
add esp, 12
mov dword ptr [ebp+8], eax
cmp dword ptr [ebp+8], 0
je .Lt_00C9
push dword ptr [ebp+8]
call ASTADD
add esp, 4
jmp .Lt_00C8
.Lt_00C9:
push 0
push -1
push 180
call ERRREPORT
add esp, 12
.Lt_00C8:
.Lt_00C4:
.Lt_00BB:
pop ebx
mov esp, ebp
pop ebp
ret
.size CASSIGNMENT, .-CASSIGNMENT
.balign 16

.globl CASSIGNMENTORPTRCALLEX
CASSIGNMENTORPTRCALLEX:
.type CASSIGNMENTORPTRCALLEX, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_00CA:
mov dword ptr [ebp-4], 0
push 1
call CCOMPSTMTISALLOWED
add esp, 4
test eax, eax
jne .Lt_00CD
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_00CB
.Lt_00CD:
.Lt_00CC:
cmp dword ptr [ebp+8], 0
je .Lt_00CF
push dword ptr [ebp+8]
call CMAYBEIGNORECALLRESULT
add esp, 4
test eax, eax
jne .Lt_00D1
push dword ptr [ebp+8]
call CASSIGNMENT
add esp, 4
.Lt_00D1:
.Lt_00D0:
.Lt_00CF:
.Lt_00CE:
mov dword ptr [ebp-4], -1
.Lt_00CB:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size CASSIGNMENTORPTRCALLEX, .-CASSIGNMENTORPTRCALLEX
.balign 16

.globl CASSIGNMENTORPTRCALL
CASSIGNMENTORPTRCALL:
.type CASSIGNMENTORPTRCALL, @function
push ebp
mov ebp, esp
sub esp, 32
push ebx
mov dword ptr [ebp-4], 0
.Lt_00F1:
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 388
je .Lt_00F4
push 0
call CVARORDEREF
add esp, 4
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_00F6
jmp .Lt_00F2
.Lt_00F6:
.Lt_00F5:
push dword ptr [ebp-12]
call CASSIGNMENTORPTRCALLEX
add esp, 4
mov dword ptr [ebp-4], eax
jmp .Lt_00F2
.Lt_00F4:
.Lt_00F3:
mov eax, dword ptr [ENV+840]
and eax, 262144
test eax, eax
setne al
shr eax, 1
sbb eax, eax
test eax, eax
jne .Lt_00F8
push 0
push 1
call LEXGETLOOKAHEAD
add esp, 8
cmp eax, 40
je .Lt_00FA
push 0
push 145
push 262144
call ERRREPORTNOTALLOWED
add esp, 12
jmp .Lt_00F9
.Lt_00FA:
mov dword ptr [ebp-8], -1
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_00F9:
.Lt_00F8:
.Lt_00F7:
push 1
call CCOMPSTMTISALLOWED
add esp, 4
test eax, eax
jne .Lt_00FC
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_00F2
.Lt_00FC:
.Lt_00FB:
push 0
call LEXSKIPTOKEN
add esp, 4
cmp dword ptr [ebp-8], 0
jne .Lt_00FE
push 0
call CVARORDEREF
add esp, 4
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_0100
push 0
push 0
push 14
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
jmp .Lt_00FF
.Lt_0100:
push dword ptr [ebp-12]
call CASSIGNMENT
add esp, 4
.Lt_00FF:
mov dword ptr [ebp-4], -1
jmp .Lt_00F2
.Lt_00FE:
.Lt_00FD:
mov dword ptr [ebp-20], 0
.Lt_0101:
lea eax, [PARSER+56]
push eax
call LISTNEWNODE
add esp, 4
mov dword ptr [ebp-32], eax
push 0
call CVARORDEREF
add esp, 4
mov ebx, dword ptr [ebp-32]
mov dword ptr [ebx], eax
mov eax, dword ptr [ebp-32]
cmp dword ptr [eax], 0
je .Lt_0105
mov eax, dword ptr [ebp-32]
push dword ptr [eax]
call ASTISCONSTANT
add esp, 4
test eax, eax
je .Lt_0107
push 0
push -1
push 118
call ERRREPORT
add esp, 12
.Lt_0107:
.Lt_0106:
inc dword ptr [ebp-20]
.Lt_0105:
.Lt_0104:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 44
je .Lt_0109
jmp .Lt_0102
.Lt_0109:
.Lt_0108:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_0103:
jmp .Lt_0101
.Lt_0102:
cmp dword ptr [ebp-20], 0
jne .Lt_010B
push 0
push 0
push 14
call ERRREPORT
add esp, 12
.Lt_010B:
.Lt_010A:
push 0
call LEXGETTOKEN
add esp, 4
cmp eax, 41
je .Lt_010D
push 0
push 0
push 7
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push 41
call HSKIPUNTIL
add esp, 16
jmp .Lt_010C
.Lt_010D:
push 0
call LEXSKIPTOKEN
add esp, 4
.Lt_010C:
call CASSIGNTOKEN
test eax, eax
jne .Lt_010F
push 0
push 0
push 10
call ERRREPORT
add esp, 12
push 0
push 0
push 0
push -1
call HSKIPUNTIL
add esp, 16
mov dword ptr [ebp-12], 0
jmp .Lt_010E
.Lt_010F:
call CEXPRESSION
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_0111
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
.Lt_0111:
.Lt_0110:
.Lt_010E:
cmp dword ptr [ebp-12], 0
je .Lt_0113
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax+4]
and ebx, 511
mov dword ptr [ebp-32], ebx
cmp dword ptr [ebp-32], 18
jne .Lt_0116
.Lt_0117:
mov ebx, dword ptr [ebp-12]
mov eax, dword ptr [ebx+8]
movsx ebx, word ptr [eax+112]
and ebx, 1
test ebx, ebx
setne bl
shr ebx, 1
sbb ebx, ebx
mov eax, dword ptr [ebp-12]
mov ecx, dword ptr [eax+8]
movsx eax, word ptr [ecx+112]
and eax, 8192
test eax, eax
setne al
shr eax, 1
sbb eax, eax
or ebx, eax
je .Lt_0119
push 0
push 0
push 267
call ERRREPORT
add esp, 12
push dword ptr [ebp-12]
call ASTDELTREE
add esp, 4
mov dword ptr [ebp-12], 0
.Lt_0119:
.Lt_0118:
jmp .Lt_0114
.Lt_0116:
push 0
push 0
push 24
call ERRREPORT
add esp, 12
push dword ptr [ebp-12]
call ASTDELTREE
add esp, 4
mov dword ptr [ebp-12], 0
.Lt_011A:
.Lt_0114:
.Lt_0113:
.Lt_0112:
cmp dword ptr [ebp-12], 0
jne .Lt_011C
.Lt_011D:
lea eax, [PARSER+56]
push eax
call LISTGETHEAD
add esp, 4
mov dword ptr [ebp-32], eax
cmp dword ptr [ebp-32], 0
jne .Lt_0121
jmp .Lt_011E
.Lt_0121:
.Lt_0120:
push dword ptr [ebp-32]
lea eax, [PARSER+56]
push eax
call LISTDELNODE
add esp, 8
.Lt_011F:
jmp .Lt_011D
.Lt_011E:
jmp .Lt_00F2
.Lt_011C:
.Lt_011B:
mov eax, dword ptr [ebp-12]
cmp dword ptr [eax], 9
jne .Lt_0123
push dword ptr [ebp-12]
call ASTBUILDCALLRESULTUDT
add esp, 4
mov dword ptr [ebp-12], eax
.Lt_0123:
.Lt_0122:
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-28], 0
cmp dword ptr [ebp-20], 0
jle .Lt_0125
mov eax, dword ptr [ebp-12]
push dword ptr [eax+8]
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax+4]
and ebx, 31
mov eax, dword ptr [ebp-12]
mov ecx, dword ptr [eax+4]
and ecx, 480
add ecx, 32
or ebx, ecx
mov ecx, dword ptr [ebp-12]
mov eax, dword ptr [ecx+4]
and eax, 261632
sal eax, 1
or ebx, eax
push ebx
call SYMBADDTEMPVAR
add esp, 8
mov dword ptr [ebp-24], eax
push 64
push dword ptr [ebp-12]
call ASTNEWADDROF
add esp, 4
push eax
push dword ptr [ebp-24]
call _Z17ASTBUILDVARASSIGNP8FBSYMBOLP7ASTNODEi
add esp, 12
mov dword ptr [ebp-28], eax
.Lt_0125:
.Lt_0124:
mov eax, dword ptr [ebp-12]
push dword ptr [eax+8]
call SYMBUDTGETFIRSTFIELD
add esp, 4
mov dword ptr [ebp-16], eax
mov dword ptr [ebp-20], 0
.Lt_0126:
lea eax, [PARSER+56]
push eax
call LISTGETHEAD
add esp, 4
mov dword ptr [ebp-32], eax
cmp dword ptr [ebp-32], 0
jne .Lt_012A
jmp .Lt_0127
.Lt_012A:
.Lt_0129:
cmp dword ptr [ebp-16], 0
jne .Lt_012C
push 0
push 0
push 265
call ERRREPORT
add esp, 12
jmp .Lt_012B
.Lt_012C:
inc dword ptr [ebp-20]
mov eax, dword ptr [ebp-32]
cmp dword ptr [eax], 0
je .Lt_012E
push dword ptr [ebp-20]
push dword ptr [ebp-24]
mov eax, dword ptr [ebp-32]
push dword ptr [eax]
push dword ptr [ebp-16]
call HASSIGNFROMFIELD
add esp, 16
mov dword ptr [ebp-12], eax
cmp dword ptr [ebp-12], 0
jne .Lt_0130
jmp .Lt_00F2
.Lt_0130:
.Lt_012F:
push -1
push dword ptr [ebp-12]
push dword ptr [ebp-28]
call ASTNEWLINK
add esp, 12
mov dword ptr [ebp-28], eax
.Lt_012E:
.Lt_012D:
push dword ptr [ebp-16]
call SYMBUDTGETNEXTFIELD
add esp, 4
mov dword ptr [ebp-16], eax
.Lt_012B:
push dword ptr [ebp-32]
lea eax, [PARSER+56]
push eax
call LISTDELNODE
add esp, 8
.Lt_0128:
jmp .Lt_0126
.Lt_0127:
push dword ptr [ebp-28]
call ASTADD
add esp, 4
mov dword ptr [ebp-4], -1
.Lt_00F2:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size CASSIGNMENTORPTRCALL, .-CASSIGNMENTORPTRCALL
.balign 16
fb_ctor__parserzassignment:
.type fb_ctor__parserzassignment, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__parserzassignment, .-fb_ctor__parserzassignment
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
HCARD2ORD:
.type HCARD2ORD, @function
push ebp
mov ebp, esp
sub esp, 4
mov dword ptr [ebp-4], 0
.Lt_00D2:
cmp dword ptr [ebp+8], 1
jne .Lt_00D5
.Lt_00D6:
mov eax, offset Lt_00D7
mov dword ptr [ebp-4], eax
jmp .Lt_00D3
jmp .Lt_00D4
.Lt_00D5:
cmp dword ptr [ebp+8], 2
jne .Lt_00D8
.Lt_00D9:
mov eax, offset Lt_00DA
mov dword ptr [ebp-4], eax
jmp .Lt_00D3
jmp .Lt_00D4
.Lt_00D8:
cmp dword ptr [ebp+8], 3
jne .Lt_00DB
.Lt_00DC:
mov eax, offset Lt_00DD
mov dword ptr [ebp-4], eax
jmp .Lt_00D3
jmp .Lt_00D4
.Lt_00DB:
push 0
push -1
push dword ptr [ebp+8]
call fb_IntToStr
add esp, 4
push eax
push -1
push offset Lt_0134
call fb_StrAssign
add esp, 20
push 0
push 3
push offset Lt_00DF
push -1
push offset Lt_0134
call fb_StrConcatAssign
add esp, 20
mov eax, dword ptr [Lt_0134]
mov dword ptr [ebp-4], eax
.Lt_00DE:
.Lt_00D4:
.Lt_00D3:
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
.size HCARD2ORD, .-HCARD2ORD

.section .bss
.balign 4
	.lcomm	Lt_0134,12

.section .text
.balign 16
HREPORTLETERROR:
.type HREPORTLETERROR, @function
push ebp
mov ebp, esp
sub esp, 36
.Lt_00E0:
push 0
push 1
push 0
mov dword ptr [ebp-36], 0
mov dword ptr [ebp-32], 0
mov dword ptr [ebp-28], 0
push 0
push -1
push 18
push offset Lt_00E3
push -1
push 0
push dword ptr [ebp+12]
call HCARD2ORD
add esp, 4
push eax
push 8
push offset Lt_00E2
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
lea eax, [ebp-12]
push eax
call fb_StrConcat
add esp, 20
push eax
mov dword ptr [ebp-24], 0
mov dword ptr [ebp-20], 0
mov dword ptr [ebp-16], 0
lea eax, [ebp-24]
push eax
call fb_StrConcat
add esp, 20
push eax
push -1
lea eax, [ebp-36]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-36]
push dword ptr [ebp+8]
call ERRREPORTEX
add esp, 20
lea eax, [ebp-36]
push eax
call fb_StrDelete
add esp, 4
.Lt_00E1:
mov esp, ebp
pop ebp
ret
.size HREPORTLETERROR, .-HREPORTLETERROR
.balign 16
HASSIGNFROMFIELD:
.type HASSIGNFROMFIELD, @function
push ebp
mov ebp, esp
sub esp, 8
push ebx
mov dword ptr [ebp-4], 0
.Lt_00E7:
mov eax, dword ptr [ebp+8]
mov ebx, dword ptr [eax]
cmp ebx, 12
sete bl
shr ebx, 1
sbb ebx, ebx
test ebx, ebx
jne .Lt_00EA
push dword ptr [ebp+20]
push 266
call HREPORTLETERROR
add esp, 8
push dword ptr [ebp+12]
call ASTDELTREE
add esp, 4
call ASTNEWNOP
mov dword ptr [ebp-4], eax
jmp .Lt_00E8
.Lt_00EA:
.Lt_00E9:
push dword ptr [ebp+8]
call SYMBCHECKACCESS
add esp, 4
test eax, eax
jne .Lt_00EC
push dword ptr [ebp+20]
push 201
call HREPORTLETERROR
add esp, 8
push dword ptr [ebp+12]
call ASTDELTREE
add esp, 4
call ASTNEWNOP
mov dword ptr [ebp-4], eax
jmp .Lt_00E8
.Lt_00EC:
.Lt_00EB:
mov eax, dword ptr [ebp+8]
cmp dword ptr [eax+56], 0
je .Lt_00EE
push dword ptr [ebp+20]
push 268
call HREPORTLETERROR
add esp, 8
push dword ptr [ebp+12]
call ASTDELTREE
add esp, 4
call ASTNEWNOP
mov dword ptr [ebp-4], eax
jmp .Lt_00E8
.Lt_00EE:
.Lt_00ED:
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp+16]
call ASTNEWVAR
add esp, 20
mov dword ptr [ebp-8], eax
push 1
push 0
push 0
push 7
mov eax, dword ptr [ebp+8]
push dword ptr [eax+48]
push dword ptr [eax+44]
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp-8]
push 28
call ASTNEWBOP
add esp, 20
mov dword ptr [ebp-8], eax
push 0
push 0
mov eax, dword ptr [ebp+8]
push dword ptr [eax+28]
mov eax, dword ptr [ebp+8]
push dword ptr [eax+24]
push dword ptr [ebp-8]
call ASTNEWDEREF
add esp, 20
mov dword ptr [ebp-8], eax
push dword ptr [ebp+8]
push dword ptr [ebp-8]
call ASTNEWFIELD
add esp, 8
mov dword ptr [ebp-8], eax
push 0
push dword ptr [ebp-8]
push dword ptr [ebp+12]
call ASTNEWASSIGN
add esp, 12
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
jne .Lt_00F0
push dword ptr [ebp+20]
push 180
call HREPORTLETERROR
add esp, 8
call ASTNEWNOP
mov dword ptr [ebp-4], eax
jmp .Lt_00E8
.Lt_00F0:
.Lt_00EF:
mov eax, dword ptr [ebp-8]
mov dword ptr [ebp-4], eax
.Lt_00E8:
mov eax, dword ptr [ebp-4]
pop ebx
mov esp, ebp
pop ebp
ret
.size HASSIGNFROMFIELD, .-HASSIGNFROMFIELD
	#fbc-1.01.0/src/compiler/parser-assignment.bas' compilation took 0.02970603061839938 secs

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
Lt_00D7:	.ascii	"1st\0"
.balign 4
Lt_00DA:	.ascii	"2nd\0"
.balign 4
Lt_00DD:	.ascii	"3rd\0"
.balign 4
Lt_00DF:	.ascii	"th\0"
.balign 4
Lt_00E2:	.ascii	"at the \0"
.balign 4
Lt_00E3:	.ascii	" element of LET()\0"

.section .ctors, "aw", @progbits
.int fb_ctor__parserzassignment
