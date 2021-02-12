	.file	"Task_32.cpp"
 # GNU C++14 (MinGW.org GCC Build-2) version 9.2.0 (mingw32)
 #	compiled by GNU C version 9.2.0, GMP version 6.1.2, MPFR version 4.0.2, MPC version 1.1.0, isl version isl-0.21-GMP

 # GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
 # options passed:  -iprefix c:\mingw\bin\../lib/gcc/mingw32/9.2.0/
 # Task_32.cpp -mtune=generic -march=i586 -fverbose-asm
 # options enabled:  -faggressive-loop-optimizations -fassume-phsa
 # -fasynchronous-unwind-tables -fauto-inc-dec -fcommon
 # -fdelete-null-pointer-checks -fdwarf2-cfi-asm -fearly-inlining
 # -feliminate-unused-debug-types -fexceptions -ffp-int-builtin-inexact
 # -ffunction-cse -fgcse-lm -fgnu-runtime -fgnu-unique -fident
 # -finline-atomics -fipa-stack-alignment -fira-hoist-pressure
 # -fira-share-save-slots -fira-share-spill-slots -fivopts
 # -fkeep-inline-dllexport -fkeep-static-consts -fleading-underscore
 # -flifetime-dse -flto-odr-type-merging -fmath-errno -fmerge-debug-strings
 # -fpeephole -fplt -fprefetch-loop-arrays -freg-struct-return
 # -fsched-critical-path-heuristic -fsched-dep-count-heuristic
 # -fsched-group-heuristic -fsched-interblock -fsched-last-insn-heuristic
 # -fsched-rank-heuristic -fsched-spec -fsched-spec-insn-heuristic
 # -fsched-stalled-insns-dep -fschedule-fusion -fsemantic-interposition
 # -fset-stack-executable -fshow-column -fshrink-wrap-separate
 # -fsigned-zeros -fsplit-ivs-in-unroller -fssa-backprop -fstdarg-opt
 # -fstrict-volatile-bitfields -fsync-libcalls -ftrapping-math
 # -ftree-cselim -ftree-forwprop -ftree-loop-if-convert -ftree-loop-im
 # -ftree-loop-ivcanon -ftree-loop-optimize -ftree-parallelize-loops=
 # -ftree-phiprop -ftree-reassoc -ftree-scev-cprop -funit-at-a-time
 # -funwind-tables -fverbose-asm -fzero-initialized-in-bss -m32 -m80387
 # -m96bit-long-double -maccumulate-outgoing-args -malign-double
 # -malign-stringops -mavx256-split-unaligned-load
 # -mavx256-split-unaligned-store -mfancy-math-387 -mfp-ret-in-387
 # -mieee-fp -mlong-double-80 -mms-bitfields -mno-red-zone -mno-sse4
 # -mpush-args -msahf -mstack-arg-probe -mstv -mvzeroupper

	.text
	.section	.text$_ZN11DoubleClassC1Ed,"x"
	.linkonce discard
	.align 2
	.globl	__ZN11DoubleClassC1Ed
	.def	__ZN11DoubleClassC1Ed;	.scl	2;	.type	32;	.endef
__ZN11DoubleClassC1Ed:
LFB2:
	.cfi_startproc
	pushl	%ebp	 #
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp	 #,
	.cfi_def_cfa_register 5
	subl	$16, %esp	 #,
	movl	%ecx, -4(%ebp)	 # this, this
	movl	8(%ebp), %eax	 # val, tmp82
	movl	%eax, -16(%ebp)	 # tmp82, val
	movl	12(%ebp), %eax	 # val, tmp83
	movl	%eax, -12(%ebp)	 # tmp83, val
 # DoubleClass.h:10:     DoubleClass(double val = 0.0) : m_val(val) {}
	movl	-4(%ebp), %eax	 # this, tmp84
	fldl	-16(%ebp)	 # val
	fstpl	(%eax)	 # this_2(D)->m_val
 # DoubleClass.h:10:     DoubleClass(double val = 0.0) : m_val(val) {}
	nop	
	leave	
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	$8		 #
	.cfi_endproc
LFE2:
	.text
	.globl	__ZplRK11DoubleClassS1_
	.def	__ZplRK11DoubleClassS1_;	.scl	2;	.type	32;	.endef
__ZplRK11DoubleClassS1_:
LFB3:
	.cfi_startproc
	pushl	%ebp	 #
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp	 #,
	.cfi_def_cfa_register 5
	subl	$40, %esp	 #,
 # Task_32.cpp:5:     return DoubleClass(left.m_val + right.m_val);
	movl	8(%ebp), %eax	 # left, tmp87
	fldl	(%eax)	 # left_5(D)->m_val
 # Task_32.cpp:5:     return DoubleClass(left.m_val + right.m_val);
	movl	12(%ebp), %eax	 # right, tmp88
	fldl	(%eax)	 # right_6(D)->m_val
 # Task_32.cpp:5:     return DoubleClass(left.m_val + right.m_val);
	faddp	%st, %st(1)	 #,
	leal	-16(%ebp), %eax	 #, tmp89
	fstpl	(%esp)	 #
	movl	%eax, %ecx	 # tmp89,
	call	__ZN11DoubleClassC1Ed	 #
	subl	$8, %esp	 #,
 # Task_32.cpp:5:     return DoubleClass(left.m_val + right.m_val);
	fldl	-16(%ebp)	 # D.1942
 # Task_32.cpp:6: }
	leave	
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	
	.cfi_endproc
LFE3:
	.globl	__ZmiRK11DoubleClassS1_
	.def	__ZmiRK11DoubleClassS1_;	.scl	2;	.type	32;	.endef
__ZmiRK11DoubleClassS1_:
LFB4:
	.cfi_startproc
	pushl	%ebp	 #
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp	 #,
	.cfi_def_cfa_register 5
	subl	$40, %esp	 #,
 # Task_32.cpp:10:     return DoubleClass(left.m_val - right.m_val);
	movl	8(%ebp), %eax	 # left, tmp87
	fldl	(%eax)	 # left_5(D)->m_val
 # Task_32.cpp:10:     return DoubleClass(left.m_val - right.m_val);
	movl	12(%ebp), %eax	 # right, tmp88
	fldl	(%eax)	 # right_6(D)->m_val
 # Task_32.cpp:10:     return DoubleClass(left.m_val - right.m_val);
	fsubrp	%st, %st(1)	 #,
	leal	-16(%ebp), %eax	 #, tmp89
	fstpl	(%esp)	 #
	movl	%eax, %ecx	 # tmp89,
	call	__ZN11DoubleClassC1Ed	 #
	subl	$8, %esp	 #,
 # Task_32.cpp:10:     return DoubleClass(left.m_val - right.m_val);
	fldl	-16(%ebp)	 # D.1956
 # Task_32.cpp:11: }
	leave	
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	
	.cfi_endproc
LFE4:
	.globl	__ZmlRK11DoubleClassS1_
	.def	__ZmlRK11DoubleClassS1_;	.scl	2;	.type	32;	.endef
__ZmlRK11DoubleClassS1_:
LFB5:
	.cfi_startproc
	pushl	%ebp	 #
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp	 #,
	.cfi_def_cfa_register 5
	subl	$40, %esp	 #,
 # Task_32.cpp:15:     return DoubleClass(left.m_val * right.m_val);
	movl	8(%ebp), %eax	 # left, tmp87
	fldl	(%eax)	 # left_5(D)->m_val
 # Task_32.cpp:15:     return DoubleClass(left.m_val * right.m_val);
	movl	12(%ebp), %eax	 # right, tmp88
	fldl	(%eax)	 # right_6(D)->m_val
 # Task_32.cpp:15:     return DoubleClass(left.m_val * right.m_val);
	fmulp	%st, %st(1)	 #,
	leal	-16(%ebp), %eax	 #, tmp89
	fstpl	(%esp)	 #
	movl	%eax, %ecx	 # tmp89,
	call	__ZN11DoubleClassC1Ed	 #
	subl	$8, %esp	 #,
 # Task_32.cpp:15:     return DoubleClass(left.m_val * right.m_val);
	fldl	-16(%ebp)	 # D.1961
 # Task_32.cpp:16: }
	leave	
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	
	.cfi_endproc
LFE5:
	.globl	__ZdvRK11DoubleClassS1_
	.def	__ZdvRK11DoubleClassS1_;	.scl	2;	.type	32;	.endef
__ZdvRK11DoubleClassS1_:
LFB6:
	.cfi_startproc
	pushl	%ebp	 #
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp	 #,
	.cfi_def_cfa_register 5
	subl	$40, %esp	 #,
 # Task_32.cpp:20:     return DoubleClass(left.m_val / right.m_val);
	movl	8(%ebp), %eax	 # left, tmp87
	fldl	(%eax)	 # left_5(D)->m_val
 # Task_32.cpp:20:     return DoubleClass(left.m_val / right.m_val);
	movl	12(%ebp), %eax	 # right, tmp88
	fldl	(%eax)	 # right_6(D)->m_val
 # Task_32.cpp:20:     return DoubleClass(left.m_val / right.m_val);
	fdivrp	%st, %st(1)	 #,
	leal	-16(%ebp), %eax	 #, tmp89
	fstpl	(%esp)	 #
	movl	%eax, %ecx	 # tmp89,
	call	__ZN11DoubleClassC1Ed	 #
	subl	$8, %esp	 #,
 # Task_32.cpp:20:     return DoubleClass(left.m_val / right.m_val);
	fldl	-16(%ebp)	 # D.1966
 # Task_32.cpp:21: }
	leave	
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	
	.cfi_endproc
LFE6:
	.def	___main;	.scl	2;	.type	32;	.endef
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB7:
	.cfi_startproc
	leal	4(%esp), %ecx	 #,
	.cfi_def_cfa 1, 0
	andl	$-16, %esp	 #,
	pushl	-4(%ecx)	 #
	pushl	%ebp	 #
	.cfi_escape 0x10,0x5,0x2,0x75,0
	movl	%esp, %ebp	 #,
	pushl	%ecx	 #
	.cfi_escape 0xf,0x3,0x75,0x7c,0x6
	subl	$52, %esp	 #,
 # Task_32.cpp:24: {
	call	___main	 #
 # Task_32.cpp:26:     DoubleClass num1(2);
	leal	-24(%ebp), %eax	 #, tmp88
	fldl	LC1	 #
	fstpl	(%esp)	 #
	movl	%eax, %ecx	 # tmp88,
	call	__ZN11DoubleClassC1Ed	 #
	subl	$8, %esp	 #,
 # Task_32.cpp:27:     DoubleClass num2(3);
	leal	-32(%ebp), %eax	 #, tmp90
	fldl	LC2	 #
	fstpl	(%esp)	 #
	movl	%eax, %ecx	 # tmp90,
	call	__ZN11DoubleClassC1Ed	 #
	subl	$8, %esp	 #,
 # Task_32.cpp:29:     DoubleClass res;
	leal	-40(%ebp), %eax	 #, tmp92
	fldz	
	fstpl	(%esp)	 #
	movl	%eax, %ecx	 # tmp92,
	call	__ZN11DoubleClassC1Ed	 #
	subl	$8, %esp	 #,
 # Task_32.cpp:30:     num1 + num2;
	leal	-32(%ebp), %eax	 #, tmp94
	movl	%eax, 4(%esp)	 # tmp94,
	leal	-24(%ebp), %eax	 #, tmp95
	movl	%eax, (%esp)	 # tmp95,
	call	__ZplRK11DoubleClassS1_	 #
	fstp	%st(0)		 #
 # Task_32.cpp:31:     num1 - num2;
	leal	-32(%ebp), %eax	 #, tmp96
	movl	%eax, 4(%esp)	 # tmp96,
	leal	-24(%ebp), %eax	 #, tmp97
	movl	%eax, (%esp)	 # tmp97,
	call	__ZmiRK11DoubleClassS1_	 #
	fstp	%st(0)		 #
 # Task_32.cpp:32:     num1 *num2;
	leal	-32(%ebp), %eax	 #, tmp98
	movl	%eax, 4(%esp)	 # tmp98,
	leal	-24(%ebp), %eax	 #, tmp99
	movl	%eax, (%esp)	 # tmp99,
	call	__ZmlRK11DoubleClassS1_	 #
	fstp	%st(0)		 #
 # Task_32.cpp:33:     (num1 * num2) / num2;
	leal	-32(%ebp), %eax	 #, tmp100
	movl	%eax, 4(%esp)	 # tmp100,
	leal	-24(%ebp), %eax	 #, tmp101
	movl	%eax, (%esp)	 # tmp101,
	call	__ZmlRK11DoubleClassS1_	 #
	fstpl	-16(%ebp)	 # D.1975
 # Task_32.cpp:33:     (num1 * num2) / num2;
	leal	-32(%ebp), %eax	 #, tmp104
	movl	%eax, 4(%esp)	 # tmp104,
	leal	-16(%ebp), %eax	 #, tmp105
	movl	%eax, (%esp)	 # tmp105,
	call	__ZdvRK11DoubleClassS1_	 #
	fstp	%st(0)		 #
 # Task_32.cpp:35:     return 0;
	movl	$0, %eax	 #, _11
 # Task_32.cpp:36: }
	movl	-4(%ebp), %ecx	 #,
	.cfi_def_cfa 1, 0
	leave	
	.cfi_restore 5
	leal	-4(%ecx), %esp	 #,
	.cfi_def_cfa 4, 4
	ret	
	.cfi_endproc
LFE7:
	.section .rdata,"dr"
	.align 8
LC1:
	.long	0
	.long	1073741824
	.align 8
LC2:
	.long	0
	.long	1074266112
	.ident	"GCC: (MinGW.org GCC Build-2) 9.2.0"
