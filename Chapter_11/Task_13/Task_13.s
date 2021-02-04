	.file	"Task_13.cpp"
	.text
	.globl	_B
	.bss
	.align 32
_B:
	.space 108
	.globl	_B2
	.align 32
_B2:
	.space 108
	.text
	.globl	__Z6bigfun3Big
	.def	__Z6bigfun3Big;	.scl	2;	.type	32;	.endef
__Z6bigfun3Big:
LFB0:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp  // moving arguments
	.cfi_def_cfa_register 5
	pushl	%edi
	pushl	%esi
	pushl	%ebx  
	.cfi_offset 7, -12
	.cfi_offset 6, -16
	.cfi_offset 3, -20 //~moving arguments
	movl	$100, 112(%ebp)  // setting b.i = 100
	movl	8(%ebp), %eax
	movl	%eax, %ebx // eax is the return register, so here it eighter push the address or the size of this struct
	leal	12(%ebp), %eax
	movl	$27, %edx
	movl	%ebx, %edi
	movl	%eax, %esi // eax is the return register, so here it eighter push the address or the size of this struct respectively
	movl	%edx, %ecx
	rep movsl
	movl	8(%ebp), %eax // the return register gets "merged" with the base pointer  ( the data gets transfered to the stack )
	popl	%ebx
	.cfi_restore 3
	popl	%esi
	.cfi_restore 6
	popl	%edi
	.cfi_restore 7
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE0:
	.def	___main;	.scl	2;	.type	32;	.endef
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB1:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%edi
	pushl	%esi
	pushl	%ebx
	andl	$-16, %esp
	subl	$240, %esp
	.cfi_offset 7, -12
	.cfi_offset 6, -16
	.cfi_offset 3, -20
	call	___main
	leal	128(%esp), %eax
	movl	%eax, 124(%esp)
	leal	4(%esp), %eax
	movl	$_B, %ebx
	movl	$27, %edx
	movl	%eax, %edi
	movl	%ebx, %esi
	movl	%edx, %ecx
	rep movsl
	movl	124(%esp), %eax
	movl	%eax, (%esp)
	call	__Z6bigfun3Big
	movl	$_B2, %ebx
	leal	128(%esp), %eax
	movl	$27, %edx
	movl	%ebx, %edi
	movl	%eax, %esi
	movl	%edx, %ecx
	rep movsl
	movl	$0, %eax
	leal	-12(%ebp), %esp
	popl	%ebx
	.cfi_restore 3
	popl	%esi
	.cfi_restore 6
	popl	%edi
	.cfi_restore 7
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE1:
	.ident	"GCC: (MinGW.org GCC Build-2) 9.2.0"
