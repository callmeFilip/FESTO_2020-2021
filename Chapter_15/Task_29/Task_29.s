	.file	"Task_29.cpp"
 # GNU C++14 (MinGW.org GCC Build-2) version 9.2.0 (mingw32)
 #	compiled by GNU C version 9.2.0, GMP version 6.1.2, MPFR version 4.0.2, MPC version 1.1.0, isl version isl-0.21-GMP

 # GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
 # options passed:  -iprefix c:\mingw\bin\../lib/gcc/mingw32/9.2.0/
 # Task_29.cpp -mtune=generic -march=i586 -fverbose-asm
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
	.section .rdata,"dr"
__ZStL19piecewise_construct:
	.space 1
.lcomm __ZStL8__ioinit,1,1
	.section	.text$_ZN1XC2Ev,"x"
	.linkonce discard
	.align 2
	.globl	__ZN1XC2Ev
	.def	__ZN1XC2Ev;	.scl	2;	.type	32;	.endef
__ZN1XC2Ev:
LFB1512:
	.cfi_startproc
	pushl	%ebp	 #
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp	 #,
	.cfi_def_cfa_register 5
	subl	$24, %esp	 #,
	movl	%ecx, -12(%ebp)	 # this, this
 # Task_29.cpp:8:     {
	movl	$__ZTV1X+8, %edx	 #, _1
	movl	-12(%ebp), %eax	 # this, tmp83
	movl	%edx, (%eax)	 # _1, this_3(D)->_vptr.X
 # Task_29.cpp:9:         vf();
	movl	-12(%ebp), %eax	 # this, tmp84
	movl	%eax, %ecx	 # tmp84,
	call	__ZN1X2vfEv	 #
 # Task_29.cpp:10:     }
	nop	
	leave	
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	
	.cfi_endproc
LFE1512:
	.section .rdata,"dr"
LC0:
	.ascii "X::vf()\0"
	.section	.text$_ZN1X2vfEv,"x"
	.linkonce discard
	.align 2
	.globl	__ZN1X2vfEv
	.def	__ZN1X2vfEv;	.scl	2;	.type	32;	.endef
__ZN1X2vfEv:
LFB1514:
	.cfi_startproc
	pushl	%ebp	 #
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp	 #,
	.cfi_def_cfa_register 5
	subl	$40, %esp	 #,
	movl	%ecx, -12(%ebp)	 # this, this
 # Task_29.cpp:13:         std::cout << "X::vf()" << std::endl;
	movl	$LC0, 4(%esp)	 #,
	movl	$__ZSt4cout, (%esp)	 #,
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc	 #
 # Task_29.cpp:13:         std::cout << "X::vf()" << std::endl;
	movl	$__ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, (%esp)	 #,
	movl	%eax, %ecx	 # _1,
	call	__ZNSolsEPFRSoS_E	 #
	subl	$4, %esp	 #,
 # Task_29.cpp:14:     }
	nop	
	leave	
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	
	.cfi_endproc
LFE1514:
	.section	.text$_ZN1YC1Ev,"x"
	.linkonce discard
	.align 2
	.globl	__ZN1YC1Ev
	.def	__ZN1YC1Ev;	.scl	2;	.type	32;	.endef
__ZN1YC1Ev:
LFB1517:
	.cfi_startproc
	pushl	%ebp	 #
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp	 #,
	.cfi_def_cfa_register 5
	subl	$24, %esp	 #,
	movl	%ecx, -12(%ebp)	 # this, this
 # Task_29.cpp:21:     Y() : X() { vf(); }
	movl	-12(%ebp), %eax	 # this, _1
	movl	%eax, %ecx	 # _1,
	call	__ZN1XC2Ev	 #
	movl	$__ZTV1Y+8, %edx	 #, _2
	movl	-12(%ebp), %eax	 # this, tmp85
	movl	%edx, (%eax)	 # _2, this_5(D)->D.34632._vptr.X
 # Task_29.cpp:21:     Y() : X() { vf(); }
	movl	-12(%ebp), %eax	 # this, _3
	movl	%eax, %ecx	 # _3,
	call	__ZN1X2vfEv	 #
 # Task_29.cpp:21:     Y() : X() { vf(); }
	nop	
	leave	
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	
	.cfi_endproc
LFE1517:
	.def	___main;	.scl	2;	.type	32;	.endef
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB1518:
	.cfi_startproc
	pushl	%ebp	 #
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp	 #,
	.cfi_def_cfa_register 5
	andl	$-16, %esp	 #,
	subl	$16, %esp	 #,
 # Task_29.cpp:25: {
	call	___main	 #
 # Task_29.cpp:26:     Y y;
	leal	12(%esp), %eax	 #, tmp84
	movl	%eax, %ecx	 # tmp84,
	call	__ZN1YC1Ev	 #
 # Task_29.cpp:28:     y.vf();
	leal	12(%esp), %eax	 #, tmp85
	movl	%eax, %ecx	 # tmp85,
	call	__ZN1X2vfEv	 #
 # Task_29.cpp:34:     return 0;
	movl	$0, %eax	 #, _5
 # Task_29.cpp:35: }
	leave	
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	
	.cfi_endproc
LFE1518:
	.globl	__ZTV1Y
	.section	.rdata$_ZTV1Y,"dr"
	.linkonce same_size
	.align 4
__ZTV1Y:
	.long	0
	.long	__ZTI1Y
	.long	__ZN1X2vfEv
	.globl	__ZTV1X
	.section	.rdata$_ZTV1X,"dr"
	.linkonce same_size
	.align 4
__ZTV1X:
	.long	0
	.long	__ZTI1X
	.long	__ZN1X2vfEv
	.globl	__ZTI1Y
	.section	.rdata$_ZTI1Y,"dr"
	.linkonce same_size
	.align 4
__ZTI1Y:
 # <anonymous>:
 # <anonymous>:
	.long	__ZTVN10__cxxabiv120__si_class_type_infoE+8
 # <anonymous>:
	.long	__ZTS1Y
 # <anonymous>:
	.long	__ZTI1X
	.globl	__ZTS1Y
	.section	.rdata$_ZTS1Y,"dr"
	.linkonce same_size
__ZTS1Y:
	.ascii "1Y\0"
	.globl	__ZTI1X
	.section	.rdata$_ZTI1X,"dr"
	.linkonce same_size
	.align 4
__ZTI1X:
 # <anonymous>:
 # <anonymous>:
	.long	__ZTVN10__cxxabiv117__class_type_infoE+8
 # <anonymous>:
	.long	__ZTS1X
	.globl	__ZTS1X
	.section	.rdata$_ZTS1X,"dr"
	.linkonce same_size
__ZTS1X:
	.ascii "1X\0"
	.text
	.def	___tcf_0;	.scl	3;	.type	32;	.endef
___tcf_0:
LFB1996:
	.cfi_startproc
	pushl	%ebp	 #
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp	 #,
	.cfi_def_cfa_register 5
	subl	$8, %esp	 #,
 # c:\mingw\lib\gcc\mingw32\9.2.0\include\c++\iostream:74:   static ios_base::Init __ioinit;
	movl	$__ZStL8__ioinit, %ecx	 #,
	call	__ZNSt8ios_base4InitD1Ev	 #
	leave	
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	
	.cfi_endproc
LFE1996:
	.def	__Z41__static_initialization_and_destruction_0ii;	.scl	3;	.type	32;	.endef
__Z41__static_initialization_and_destruction_0ii:
LFB1995:
	.cfi_startproc
	pushl	%ebp	 #
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp	 #,
	.cfi_def_cfa_register 5
	subl	$24, %esp	 #,
 # Task_29.cpp:35: }
	cmpl	$1, 8(%ebp)	 #, __initialize_p
	jne	L9	 #,
 # Task_29.cpp:35: }
	cmpl	$65535, 12(%ebp)	 #, __priority
	jne	L9	 #,
 # c:\mingw\lib\gcc\mingw32\9.2.0\include\c++\iostream:74:   static ios_base::Init __ioinit;
	movl	$__ZStL8__ioinit, %ecx	 #,
	call	__ZNSt8ios_base4InitC1Ev	 #
	movl	$___tcf_0, (%esp)	 #,
	call	_atexit	 #
L9:
 # Task_29.cpp:35: }
	nop	
	leave	
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	
	.cfi_endproc
LFE1995:
	.def	__GLOBAL__sub_I_main;	.scl	3;	.type	32;	.endef
__GLOBAL__sub_I_main:
LFB1997:
	.cfi_startproc
	pushl	%ebp	 #
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp	 #,
	.cfi_def_cfa_register 5
	subl	$24, %esp	 #,
 # Task_29.cpp:35: }
	movl	$65535, 4(%esp)	 #,
	movl	$1, (%esp)	 #,
	call	__Z41__static_initialization_and_destruction_0ii	 #
	leave	
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	
	.cfi_endproc
LFE1997:
	.section	.ctors,"w"
	.align 4
	.long	__GLOBAL__sub_I_main
	.ident	"GCC: (MinGW.org GCC Build-2) 9.2.0"
	.def	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc;	.scl	2;	.type	32;	.endef
	.def	__ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;	.scl	2;	.type	32;	.endef
	.def	__ZNSolsEPFRSoS_E;	.scl	2;	.type	32;	.endef
	.def	__ZNSt8ios_base4InitD1Ev;	.scl	2;	.type	32;	.endef
	.def	__ZNSt8ios_base4InitC1Ev;	.scl	2;	.type	32;	.endef
	.def	_atexit;	.scl	2;	.type	32;	.endef
