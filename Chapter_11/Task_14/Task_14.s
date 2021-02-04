	.file	"Task_14.cpp"
	.text
	.globl	__Z9recursioni
	.def	__Z9recursioni;	.scl	2;	.type	32;	.endef
__Z9recursioni:
LFB0:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	subl	$1, 8(%ebp)
	cmpl	$0, 8(%ebp)
	jne	L2				// recursion is supported by inserting labels 
	movl	$0, %eax
	jmp	L3
L2:						// and using the assembly jmp
	movl	8(%ebp), %eax
	movl	%eax, (%esp)
	call	__Z9recursioni
	nop
L3:
	leave
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
	andl	$-16, %esp
	subl	$16, %esp
	call	___main
	movl	$10, (%esp)
	call	__Z9recursioni
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE1:
	.ident	"GCC: (MinGW.org GCC Build-2) 9.2.0"
