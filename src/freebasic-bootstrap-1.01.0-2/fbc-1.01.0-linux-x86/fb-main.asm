	.intel_syntax noprefix

	#fbc-1.01.0/src/compiler/fb-main.bas' compilation started at 14:16:35 (FreeBASIC 1.01.0)

.section .text
.balign 16

.globl FBMAINBEGIN
FBMAINBEGIN:
.type FBMAINBEGIN, @function
.Lt_006E:
cmp dword ptr [ENV+792], 0
je .Lt_0071
call HMAINBEGIN
jmp .Lt_0070
.Lt_0071:
call HMODLEVELBEGIN
.Lt_0070:
mov eax, dword ptr [ENV+96]
cmp eax, 2
sete al
shr eax, 1
sbb eax, eax
and eax, dword ptr [ENV+792]
je .Lt_0073
cmp dword ptr [ENV+108], 0
jne .Lt_0075
call HBUILDDLLMAINWIN32
jmp .Lt_0074
.Lt_0075:
call HBUILDDLLMAINCTOR
.Lt_0074:
.Lt_0073:
.Lt_0072:
.Lt_006F:
ret
.size FBMAINBEGIN, .-FBMAINBEGIN
.balign 16

.globl FBMAINEND
FBMAINEND:
.type FBMAINEND, @function
push ebp
mov ebp, esp
sub esp, 4
.Lt_0077:
mov dword ptr [ebp-4], 0
cmp dword ptr [ENV+792], 0
je .Lt_007A
cmp dword ptr [AST+124], 0
je .Lt_007C
push dword ptr [ENV+836]
push 0
call RTLDATARESTORE
add esp, 8
.Lt_007C:
.Lt_007B:
mov eax, dword ptr [ENV+96]
cmp eax, 2
setne al
shr eax, 1
sbb eax, eax
mov dword ptr [ebp-4], eax
.Lt_007A:
.Lt_0079:
push dword ptr [ebp-4]
call ASTPROCEND
add esp, 4
.Lt_0078:
mov esp, ebp
pop ebp
ret
.size FBMAINEND, .-FBMAINEND
.balign 16
fb_ctor__fbzmain:
.type fb_ctor__fbzmain, @function
.Lt_0002:
.Lt_0003:
ret
.size fb_ctor__fbzmain, .-fb_ctor__fbzmain
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
HCALLMAIN:
.type HCALLMAIN, @function
push ebp
mov ebp, esp
sub esp, 4
.Lt_0057:
push 0
push dword ptr [ENV+832]
call ASTNEWCALL
add esp, 8
mov dword ptr [ebp-4], eax
push -1
push -2147483648
push 0
push 7
push 0
push 0
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp-4]
call ASTNEWARG
add esp, 16
push -1
push -2147483648
push 0
push 32
push 0
push 0
call ASTNEWCONSTI
add esp, 16
push eax
push dword ptr [ebp-4]
call ASTNEWARG
add esp, 16
push 0
push 0
push dword ptr [ebp-4]
call ASTSETTYPE
add esp, 12
push dword ptr [ebp-4]
call ASTADD
add esp, 4
.Lt_0058:
mov esp, ebp
pop ebp
ret
.size HCALLMAIN, .-HCALLMAIN
.balign 16
HBUILDDLLMAINWIN32:
.type HBUILDDLLMAINWIN32, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
.Lt_0059:
push 0
call SYMBPREADDPROC
add esp, 4
mov dword ptr [ebp-4], eax
push 0
push 1
push 0
push 0
push 32
push offset Lt_005B
push dword ptr [ebp-4]
call SYMBADDPROCPARAM
add esp, 28
push 0
push 1
push 0
push 0
push 8
push offset Lt_005C
push dword ptr [ebp-4]
call SYMBADDPROCPARAM
add esp, 28
mov dword ptr [ebp-12], eax
push 0
push 1
push 0
push 0
push 32
push offset Lt_005D
push dword ptr [ebp-4]
call SYMBADDPROCPARAM
add esp, 28
push 4
push dword ptr [ENV+220]
push 32
push 0
push 7
push offset Lt_005E
push 0
push dword ptr [ebp-4]
call SYMBADDPROC
add esp, 32
mov dword ptr [ebp-4], eax
push 0
push dword ptr [ebp-4]
call ASTPROCBEGIN
add esp, 8
push 0
push 0
mov eax, dword ptr [ebp-4]
mov ebx, dword ptr [eax+24]
and ebx, 511
push ebx
push 0
push 1
call ASTNEWCONSTI
add esp, 16
push eax
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp-4]
call SYMBGETPROCRESULT
add esp, 4
push eax
call ASTNEWVAR
add esp, 20
push eax
call ASTNEWASSIGN
add esp, 12
push eax
call ASTADD
add esp, 4
mov eax, dword ptr [ebp-12]
mov ebx, dword ptr [eax+56]
mov dword ptr [ebp-12], ebx
push 4
push 0
call SYMBADDLABEL
add esp, 8
mov dword ptr [ebp-8], eax
push 0
push dword ptr [ebp-8]
push 0
push 8
push 0
push 1
call ASTNEWCONSTI
add esp, 16
push eax
push 0
push -2147483648
push 0
push 0
push dword ptr [ebp-12]
call ASTNEWVAR
add esp, 20
push eax
push 48
call ASTNEWBOP
add esp, 20
push eax
call ASTADD
add esp, 4
call HCALLMAIN
push -1
push dword ptr [ebp-8]
call ASTNEWLABEL
add esp, 8
push eax
call ASTADD
add esp, 4
push 0
call ASTPROCEND
add esp, 4
.Lt_005A:
pop ebx
mov esp, ebp
pop ebp
ret
.size HBUILDDLLMAINWIN32, .-HBUILDDLLMAINWIN32
.balign 16
HBUILDDLLMAINCTOR:
.type HBUILDDLLMAINCTOR, @function
push ebp
mov ebp, esp
sub esp, 4
.Lt_005F:
push 4
push 3
push 64
push 0
push 0
push offset Lt_0061
push 0
push 0
call SYMBPREADDPROC
add esp, 4
push eax
call SYMBADDPROC
add esp, 32
mov dword ptr [ebp-4], eax
push dword ptr [ebp-4]
call SYMBADDGLOBALCTOR
add esp, 4
push 0
push dword ptr [ebp-4]
call ASTPROCBEGIN
add esp, 8
call HCALLMAIN
push 0
call ASTPROCEND
add esp, 4
.Lt_0060:
mov esp, ebp
pop ebp
ret
.size HBUILDDLLMAINCTOR, .-HBUILDDLLMAINCTOR
.balign 16
HMAINBEGIN:
.type HMAINBEGIN, @function
push ebp
mov ebp, esp
sub esp, 24
push ebx
.Lt_0062:
push 0
call SYMBPREADDPROC
add esp, 4
mov dword ptr [ebp-4], eax
push 0
push 1
push 0
push 0
push 10
push offset Lt_0064
push dword ptr [ebp-4]
call SYMBADDPROCPARAM
add esp, 28
push 0
push 1
push 0
push 0
push 67
push offset Lt_0065
push dword ptr [ebp-4]
call SYMBADDPROCPARAM
add esp, 28
mov dword ptr [ebp-8], eax
mov dword ptr [ebp-12], 32
push 0
push -1
call FBGETENTRYPOINT
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrInit
add esp, 20
cmp dword ptr [ENV+96], 2
jne .Lt_0067
mov dword ptr [ebp-12], 64
cmp dword ptr [ENV+104], 1
jne .Lt_0069
push 0
push 0
call SYMBUNIQUEID
push eax
push -1
lea eax, [ebp-24]
push eax
call fb_StrAssign
add esp, 20
.Lt_0069:
.Lt_0068:
jmp .Lt_0066
.Lt_0067:
mov eax, dword ptr [ebp-8]
mov ebx, dword ptr [eax+8]
or ebx, 524288
mov eax, ebx
mov ebx, dword ptr [ebp-8]
mov dword ptr [ebx+8], eax
.Lt_0066:
push 4
push 3
push dword ptr [ebp-12]
push 0
push 10
push dword ptr [ebp-24]
push 0
push dword ptr [ebp-4]
call SYMBADDPROC
add esp, 32
mov dword ptr [ENV+832], eax
mov eax, dword ptr [ENV+832]
mov ebx, dword ptr [eax+8]
or ebx, 4096
mov eax, ebx
mov ebx, dword ptr [ENV+832]
mov dword ptr [ebx+8], eax
push -1
push dword ptr [ENV+832]
call ASTPROCBEGIN
add esp, 8
lea eax, [ebp-24]
push eax
call fb_StrDelete
add esp, 4
.Lt_0063:
pop ebx
mov esp, ebp
pop ebp
ret
.size HMAINBEGIN, .-HMAINBEGIN
.balign 16
HMODLEVELBEGIN:
.type HMODLEVELBEGIN, @function
push ebp
mov ebp, esp
sub esp, 12
push ebx
.Lt_006A:
push 4
push 3
push 64
push 0
push 0
mov dword ptr [ebp-12], 0
mov dword ptr [ebp-8], 0
mov dword ptr [ebp-4], 0
push 0
push -1
call FBGETMODULEENTRY
push eax
push -1
lea eax, [ebp-12]
push eax
call fb_StrAssign
add esp, 20
push dword ptr [ebp-12]
push offset Lt_006C
push 0
call SYMBPREADDPROC
add esp, 4
push eax
call SYMBADDPROC
add esp, 32
mov dword ptr [ENV+832], eax
lea eax, [ebp-12]
push eax
call fb_StrDelete
add esp, 4
push dword ptr [ENV+832]
call SYMBADDGLOBALCTOR
add esp, 4
mov eax, dword ptr [ENV+832]
mov ebx, dword ptr [eax+8]
or ebx, 2
mov eax, ebx
mov ebx, dword ptr [ENV+832]
mov dword ptr [ebx+8], eax
mov eax, dword ptr [ENV+832]
mov ebx, dword ptr [eax+8]
or ebx, 8192
mov eax, ebx
mov ebx, dword ptr [ENV+832]
mov dword ptr [ebx+8], eax
push -1
push dword ptr [ENV+832]
call ASTPROCBEGIN
add esp, 8
.Lt_006B:
pop ebx
mov esp, ebp
pop ebp
ret
.size HMODLEVELBEGIN, .-HMODLEVELBEGIN
	#fbc-1.01.0/src/compiler/fb-main.bas' compilation took 0.02834809629712254 secs

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
Lt_005B:	.ascii	"__FB_DLLINSTANCE__\0"
.balign 4
Lt_005C:	.ascii	"__FB_DLLREASON__\0"
.balign 4
Lt_005D:	.ascii	"__FB_DLLRESERVED__\0"
.balign 4
Lt_005E:	.ascii	"DllMain\0"
.balign 4
Lt_0061:	.ascii	"__fb_DllMain_ctor\0"
.balign 4
Lt_0064:	.ascii	"__FB_ARGC__\0"
.balign 4
Lt_0065:	.ascii	"__FB_ARGV__\0"
.balign 4
Lt_006C:	.ascii	"{modlevel}\0"

.section .ctors, "aw", @progbits
.int fb_ctor__fbzmain
