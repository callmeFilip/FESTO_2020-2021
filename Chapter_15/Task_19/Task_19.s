	.file	"Task_19.cpp"
# GNU C++14 (Debian 8.3.0-6) version 8.3.0 (x86_64-linux-gnu)
#	compiled by GNU C version 8.3.0, GMP version 6.1.2, MPFR version 4.0.2, MPC version 1.1.0, isl version isl-0.20-GMP

# GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
# options passed:  -imultiarch x86_64-linux-gnu -D_GNU_SOURCE Task_19.cpp
# -mtune=generic -march=x86-64 -fverbose-asm
# options enabled:  -fPIC -fPIE -faggressive-loop-optimizations
# -fasynchronous-unwind-tables -fauto-inc-dec -fchkp-check-incomplete-type
# -fchkp-check-read -fchkp-check-write -fchkp-instrument-calls
# -fchkp-narrow-bounds -fchkp-optimize -fchkp-store-bounds
# -fchkp-use-static-bounds -fchkp-use-static-const-bounds
# -fchkp-use-wrappers -fcommon -fdelete-null-pointer-checks
# -fdwarf2-cfi-asm -fearly-inlining -feliminate-unused-debug-types
# -fexceptions -ffp-int-builtin-inexact -ffunction-cse -fgcse-lm
# -fgnu-runtime -fgnu-unique -fident -finline-atomics -fira-hoist-pressure
# -fira-share-save-slots -fira-share-spill-slots -fivopts
# -fkeep-static-consts -fleading-underscore -flifetime-dse
# -flto-odr-type-merging -fmath-errno -fmerge-debug-strings -fpeephole
# -fplt -fprefetch-loop-arrays -freg-struct-return
# -fsched-critical-path-heuristic -fsched-dep-count-heuristic
# -fsched-group-heuristic -fsched-interblock -fsched-last-insn-heuristic
# -fsched-rank-heuristic -fsched-spec -fsched-spec-insn-heuristic
# -fsched-stalled-insns-dep -fschedule-fusion -fsemantic-interposition
# -fshow-column -fshrink-wrap-separate -fsigned-zeros
# -fsplit-ivs-in-unroller -fssa-backprop -fstdarg-opt
# -fstrict-volatile-bitfields -fsync-libcalls -ftrapping-math -ftree-cselim
# -ftree-forwprop -ftree-loop-if-convert -ftree-loop-im -ftree-loop-ivcanon
# -ftree-loop-optimize -ftree-parallelize-loops= -ftree-phiprop
# -ftree-reassoc -ftree-scev-cprop -funit-at-a-time -funwind-tables
# -fverbose-asm -fzero-initialized-in-bss -m128bit-long-double -m64 -m80387
# -malign-stringops -mavx256-split-unaligned-load
# -mavx256-split-unaligned-store -mfancy-math-387 -mfp-ret-in-387 -mfxsr
# -mglibc -mieee-fp -mlong-double-80 -mmmx -mno-sse4 -mpush-args -mred-zone
# -msse -msse2 -mstv -mtls-direct-seg-refs -mvzeroupper

	.text
	.section	.text._ZN5Dummy8functionEv,"axG",@progbits,_ZN5Dummy8functionEv,comdat
	.align 2
	.weak	_ZN5Dummy8functionEv
	.type	_ZN5Dummy8functionEv, @function
_ZN5Dummy8functionEv:
.LFB0:
	.cfi_startproc
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)	# this, this
# Task_19.cpp:5:     virtual void function() {} <----- the function body follows
	nop	
	popq	%rbp	#
	.cfi_def_cfa 7, 8
	ret				# return statement
	.cfi_endproc
.LFE0:
	.size	_ZN5Dummy8functionEv, .-_ZN5Dummy8functionEv
	.text
	.globl	main
	.type	main, @function
main:
.LFB1:
	.cfi_startproc
	pushq	%rbp	#
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp	#,
	.cfi_def_cfa_register 6
	subq	$16, %rsp	#,
# Task_19.cpp:10:     Dummy obj;
	leaq	16+_ZTV5Dummy(%rip), %rax	#, _1
	movq	%rax, -8(%rbp)	# _1, obj._vptr.Dummy 
# Task_19.cpp:11:     obj.function();
	leaq	-8(%rbp), %rax	#, tmp90
	movq	%rax, %rdi	# tmp90,
	call	_ZN5Dummy8functionEv	# <----- calling the virtual function
# Task_19.cpp:13:     return 0;
	movl	$0, %eax	#, _5
# Task_19.cpp:14: }
	leave	
	.cfi_def_cfa 7, 8
	ret	
	.cfi_endproc
.LFE1:
	.size	main, .-main
	.weak	_ZTV5Dummy
	.section	.data.rel.ro.local._ZTV5Dummy,"awG",@progbits,_ZTV5Dummy,comdat
	.align 8
	.type	_ZTV5Dummy, @object
	.size	_ZTV5Dummy, 24
_ZTV5Dummy:
	.quad	0
	.quad	_ZTI5Dummy
	.quad	_ZN5Dummy8functionEv
	.weak	_ZTI5Dummy
	.section	.data.rel.ro._ZTI5Dummy,"awG",@progbits,_ZTI5Dummy,comdat
	.align 8
	.type	_ZTI5Dummy, @object
	.size	_ZTI5Dummy, 16
_ZTI5Dummy:
# <anonymous>:
# <anonymous>:
	.quad	_ZTVN10__cxxabiv117__class_type_infoE+16
# <anonymous>:
	.quad	_ZTS5Dummy
	.weak	_ZTS5Dummy
	.section	.rodata._ZTS5Dummy,"aG",@progbits,_ZTS5Dummy,comdat
	.type	_ZTS5Dummy, @object
	.size	_ZTS5Dummy, 7
_ZTS5Dummy:
	.string	"5Dummy"
	.ident	"GCC: (Debian 8.3.0-6) 8.3.0"
	.section	.note.GNU-stack,"",@progbits
