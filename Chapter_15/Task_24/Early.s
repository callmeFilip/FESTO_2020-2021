	.file	"Early.cpp"
 # GNU C++14 (MinGW.org GCC Build-2) version 9.2.0 (mingw32)
 #	compiled by GNU C version 9.2.0, GMP version 6.1.2, MPFR version 4.0.2, MPC version 1.1.0, isl version isl-0.21-GMP

 # GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
 # options passed:  -iprefix c:\mingw\bin\../lib/gcc/mingw32/9.2.0/
 # Early.cpp -mtune=generic -march=i586 -fverbose-asm
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
LC0:
	.ascii "\0"
	.section	.text$_ZNK3Pet5speakB5cxx11Ev,"x"
	.linkonce discard
	.align 2
	.globl	__ZNK3Pet5speakB5cxx11Ev
	.def	__ZNK3Pet5speakB5cxx11Ev;	.scl	2;	.type	32;	.endef
__ZNK3Pet5speakB5cxx11Ev:
LFB1511:
	.cfi_startproc
	.cfi_personality 0,___gxx_personality_v0
	.cfi_lsda 0,LLSDA1511
	pushl	%ebp	 #
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp	 #,
	.cfi_def_cfa_register 5
	pushl	%ebx	 #
	subl	$52, %esp	 #,
	.cfi_offset 3, -12
	movl	%ecx, -28(%ebp)	 # .result_ptr, .result_ptr
 # Early.cpp:9:     virtual string speak() const { return ""; }
	leal	-9(%ebp), %eax	 #, tmp83
	movl	%eax, %ecx	 # tmp83,
	call	__ZNSaIcEC1Ev	 #
	movl	-28(%ebp), %eax	 # <retval>, tmp84
	leal	-9(%ebp), %edx	 #, tmp85
	movl	%edx, 4(%esp)	 # tmp85,
	movl	$LC0, (%esp)	 #,
	movl	%eax, %ecx	 # tmp84,
LEHB0:
	call	__ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_	 #
LEHE0:
	subl	$8, %esp	 #,
	leal	-9(%ebp), %eax	 #, tmp86
	movl	%eax, %ecx	 # tmp86,
	call	__ZNSaIcED1Ev	 #
	jmp	L5	 #
L4:
	movl	%eax, %ebx	 #, tmp88
	leal	-9(%ebp), %eax	 #, tmp87
	movl	%eax, %ecx	 # tmp87,
	call	__ZNSaIcED1Ev	 #
	movl	%ebx, %eax	 # tmp88, D.38380
	movl	%eax, (%esp)	 # D.38380,
LEHB1:
	call	__Unwind_Resume	 #
LEHE1:
L5:
 # Early.cpp:9:     virtual string speak() const { return ""; }
	movl	-28(%ebp), %eax	 # <retval>,
	movl	-4(%ebp), %ebx	 #,
	leave	
	.cfi_restore 5
	.cfi_restore 3
	.cfi_def_cfa 4, 4
	ret	$4		 #
	.cfi_endproc
LFE1511:
	.def	___gxx_personality_v0;	.scl	2;	.type	32;	.endef
	.section	.gcc_except_table,"w"
LLSDA1511:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 LLSDACSE1511-LLSDACSB1511
LLSDACSB1511:
	.uleb128 LEHB0-LFB1511
	.uleb128 LEHE0-LEHB0
	.uleb128 L4-LFB1511
	.uleb128 0
	.uleb128 LEHB1-LFB1511
	.uleb128 LEHE1-LEHB1
	.uleb128 0
	.uleb128 0
LLSDACSE1511:
	.section	.text$_ZNK3Pet5speakB5cxx11Ev,"x"
	.linkonce discard
	.section .rdata,"dr"
LC1:
	.ascii "Bark!\0"
	.section	.text$_ZNK3Dog5speakB5cxx11Ev,"x"
	.linkonce discard
	.align 2
	.globl	__ZNK3Dog5speakB5cxx11Ev
	.def	__ZNK3Dog5speakB5cxx11Ev;	.scl	2;	.type	32;	.endef
__ZNK3Dog5speakB5cxx11Ev:
LFB1512:
	.cfi_startproc
	.cfi_personality 0,___gxx_personality_v0
	.cfi_lsda 0,LLSDA1512
	pushl	%ebp	 #
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp	 #,
	.cfi_def_cfa_register 5
	pushl	%ebx	 #
	subl	$52, %esp	 #,
	.cfi_offset 3, -12
	movl	%ecx, -28(%ebp)	 # .result_ptr, .result_ptr
 # Early.cpp:15:     string speak() const { return "Bark!"; }
	leal	-9(%ebp), %eax	 #, tmp83
	movl	%eax, %ecx	 # tmp83,
	call	__ZNSaIcEC1Ev	 #
	movl	-28(%ebp), %eax	 # <retval>, tmp84
	leal	-9(%ebp), %edx	 #, tmp85
	movl	%edx, 4(%esp)	 # tmp85,
	movl	$LC1, (%esp)	 #,
	movl	%eax, %ecx	 # tmp84,
LEHB2:
	call	__ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_	 #
LEHE2:
	subl	$8, %esp	 #,
	leal	-9(%ebp), %eax	 #, tmp86
	movl	%eax, %ecx	 # tmp86,
	call	__ZNSaIcED1Ev	 #
	jmp	L10	 #
L9:
	movl	%eax, %ebx	 #, tmp88
	leal	-9(%ebp), %eax	 #, tmp87
	movl	%eax, %ecx	 # tmp87,
	call	__ZNSaIcED1Ev	 #
	movl	%ebx, %eax	 # tmp88, D.38383
	movl	%eax, (%esp)	 # D.38383,
LEHB3:
	call	__Unwind_Resume	 #
LEHE3:
L10:
 # Early.cpp:15:     string speak() const { return "Bark!"; }
	movl	-28(%ebp), %eax	 # <retval>,
	movl	-4(%ebp), %ebx	 #,
	leave	
	.cfi_restore 5
	.cfi_restore 3
	.cfi_def_cfa 4, 4
	ret	$4		 #
	.cfi_endproc
LFE1512:
	.section	.gcc_except_table,"w"
LLSDA1512:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 LLSDACSE1512-LLSDACSB1512
LLSDACSB1512:
	.uleb128 LEHB2-LFB1512
	.uleb128 LEHE2-LEHB2
	.uleb128 L9-LFB1512
	.uleb128 0
	.uleb128 LEHB3-LFB1512
	.uleb128 LEHE3-LEHB3
	.uleb128 0
	.uleb128 0
LLSDACSE1512:
	.section	.text$_ZNK3Dog5speakB5cxx11Ev,"x"
	.linkonce discard
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC2:
	.ascii "p1->speak() = \0"
LC3:
	.ascii "p2.speak() = \0"
LC4:
	.ascii "p3.speak() = \0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB1513:
	.cfi_startproc
	.cfi_personality 0,___gxx_personality_v0
	.cfi_lsda 0,LLSDA1513
	leal	4(%esp), %ecx	 #,
	.cfi_def_cfa 1, 0
	andl	$-16, %esp	 #,
	pushl	-4(%ecx)	 #
	pushl	%ebp	 #
	.cfi_escape 0x10,0x5,0x2,0x75,0
	movl	%esp, %ebp	 #,
	pushl	%ebx	 #
	pushl	%ecx	 #
	.cfi_escape 0xf,0x3,0x75,0x78,0x6
	.cfi_escape 0x10,0x3,0x2,0x75,0x7c
	subl	$112, %esp	 #,
 # Early.cpp:19: {
	call	___main	 #
 # Early.cpp:20:     Dog ralph;
	movl	$__ZTV3Dog+8, %eax	 #, _1
	movl	%eax, -92(%ebp)	 # _1, ralph.D.34582._vptr.Pet
 # Early.cpp:21:     Pet *p1 = &ralph;
	leal	-92(%ebp), %eax	 #, tmp99
	movl	%eax, -12(%ebp)	 # tmp99, p1
 # Early.cpp:22:     Pet &p2 = ralph;
	leal	-92(%ebp), %eax	 #, tmp100
	movl	%eax, -16(%ebp)	 # tmp100, p2
 # Early.cpp:23:     Pet p3;
	movl	$__ZTV3Pet+8, %eax	 #, _2
	movl	%eax, -96(%ebp)	 # _2, p3._vptr.Pet
 # Early.cpp:25:     cout << "p1->speak() = " << p1->speak() << endl;
	movl	$LC2, 4(%esp)	 #,
	movl	$__ZSt4cout, (%esp)	 #,
LEHB4:
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc	 #
	movl	%eax, %ebx	 #, _3
	movl	-12(%ebp), %eax	 # p1, tmp101
	movl	(%eax), %eax	 # p1_19->_vptr.Pet, _4  <======== vptr -> late binding
	movl	(%eax), %edx	 # *_4, _5
 # Early.cpp:25:     cout << "p1->speak() = " << p1->speak() << endl;
	leal	-88(%ebp), %eax	 #, tmp102
	movl	-12(%ebp), %ecx	 # p1, tmp103
	movl	%ecx, (%esp)	 # tmp103,
	movl	%eax, %ecx	 # tmp102,
	call	*%edx	 # _5
LEHE4:
	subl	$4, %esp	 #,
 # Early.cpp:25:     cout << "p1->speak() = " << p1->speak() << endl;
	leal	-88(%ebp), %eax	 #, tmp104
	movl	%eax, 4(%esp)	 # tmp104,
	movl	%ebx, (%esp)	 # _3,
LEHB5:
	call	__ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE	 #
 # Early.cpp:25:     cout << "p1->speak() = " << p1->speak() << endl;
	movl	$__ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, (%esp)	 #,
	movl	%eax, %ecx	 # _6,
	call	__ZNSolsEPFRSoS_E	 #
LEHE5:
 # Early.cpp:25:     cout << "p1->speak() = " << p1->speak() << endl;
	subl	$4, %esp	 #,
 # Early.cpp:25:     cout << "p1->speak() = " << p1->speak() << endl;
	leal	-88(%ebp), %eax	 #, tmp105
	movl	%eax, %ecx	 # tmp105,
	call	__ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev	 #
 # Early.cpp:26:     cout << "p2.speak() = " << p2.speak() << endl;
	movl	$LC3, 4(%esp)	 #,
	movl	$__ZSt4cout, (%esp)	 #,
LEHB6:
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc	 #
	movl	%eax, %ebx	 #, _7
	movl	-16(%ebp), %eax	 # p2, tmp106
	movl	(%eax), %eax	 # p2_20->_vptr.Pet, _8 <======== vptr -> late binding
	movl	(%eax), %edx	 # *_8, _9
 # Early.cpp:26:     cout << "p2.speak() = " << p2.speak() << endl;
	leal	-64(%ebp), %eax	 #, tmp107
	movl	-16(%ebp), %ecx	 # p2, tmp108
	movl	%ecx, (%esp)	 # tmp108,
	movl	%eax, %ecx	 # tmp107,
	call	*%edx	 # _9
LEHE6:
	subl	$4, %esp	 #,
 # Early.cpp:26:     cout << "p2.speak() = " << p2.speak() << endl;
	leal	-64(%ebp), %eax	 #, tmp109
	movl	%eax, 4(%esp)	 # tmp109,
	movl	%ebx, (%esp)	 # _7,
LEHB7:
	call	__ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE	 #
 # Early.cpp:26:     cout << "p2.speak() = " << p2.speak() << endl;
	movl	$__ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, (%esp)	 #,
	movl	%eax, %ecx	 # _10,
	call	__ZNSolsEPFRSoS_E	 #
LEHE7:
 # Early.cpp:26:     cout << "p2.speak() = " << p2.speak() << endl;
	subl	$4, %esp	 #,
 # Early.cpp:26:     cout << "p2.speak() = " << p2.speak() << endl;
	leal	-64(%ebp), %eax	 #, tmp110
	movl	%eax, %ecx	 # tmp110,
	call	__ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev	 #
 # Early.cpp:28:     cout << "p3.speak() = " << p3.speak() << endl;
	movl	$LC4, 4(%esp)	 #,
	movl	$__ZSt4cout, (%esp)	 #,
LEHB8:
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc	 #
	movl	%eax, %ebx	 #, _11
 # Early.cpp:28:     cout << "p3.speak() = " << p3.speak() << endl;
	leal	-40(%ebp), %eax	 #, tmp111
	leal	-96(%ebp), %edx	 #, tmp112
	movl	%edx, (%esp)	 # tmp112,
	movl	%eax, %ecx	 # tmp111,
	call	__ZNK3Pet5speakB5cxx11Ev	 # <======== not vptr -> not late binding
LEHE8:
	subl	$4, %esp	 #,
 # Early.cpp:28:     cout << "p3.speak() = " << p3.speak() << endl;
	leal	-40(%ebp), %eax	 #, tmp113
	movl	%eax, 4(%esp)	 # tmp113,
	movl	%ebx, (%esp)	 # _11,
LEHB9:
	call	__ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE	 #
 # Early.cpp:28:     cout << "p3.speak() = " << p3.speak() << endl;
	movl	$__ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, (%esp)	 #,
	movl	%eax, %ecx	 # _12,
	call	__ZNSolsEPFRSoS_E	 #
LEHE9:
 # Early.cpp:28:     cout << "p3.speak() = " << p3.speak() << endl;
	subl	$4, %esp	 #,
 # Early.cpp:28:     cout << "p3.speak() = " << p3.speak() << endl;
	leal	-40(%ebp), %eax	 #, tmp114
	movl	%eax, %ecx	 # tmp114,
	call	__ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev	 #
 # Early.cpp:30:     return 0;
	movl	$0, %eax	 #, _46
	jmp	L19	 #
L16:
	movl	%eax, %ebx	 #, tmp117
 # Early.cpp:25:     cout << "p1->speak() = " << p1->speak() << endl;
	leal	-88(%ebp), %eax	 #, tmp116
	movl	%eax, %ecx	 # tmp116,
	call	__ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev	 #
	movl	%ebx, %eax	 # tmp117, D.38386
	movl	%eax, (%esp)	 # D.38386,
LEHB10:
	call	__Unwind_Resume	 #
L17:
	movl	%eax, %ebx	 #, tmp119
 # Early.cpp:26:     cout << "p2.speak() = " << p2.speak() << endl;
	leal	-64(%ebp), %eax	 #, tmp118
	movl	%eax, %ecx	 # tmp118,
	call	__ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev	 #
	movl	%ebx, %eax	 # tmp119, D.38387
	movl	%eax, (%esp)	 # D.38387,
	call	__Unwind_Resume	 #
L18:
	movl	%eax, %ebx	 #, tmp121
 # Early.cpp:28:     cout << "p3.speak() = " << p3.speak() << endl;
	leal	-40(%ebp), %eax	 #, tmp120
	movl	%eax, %ecx	 # tmp120,
	call	__ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev	 #
	movl	%ebx, %eax	 # tmp121, D.38388
	movl	%eax, (%esp)	 # D.38388,
	call	__Unwind_Resume	 #
LEHE10:
L19:
 # Early.cpp:31: } ///:~
	leal	-8(%ebp), %esp	 #,
	popl	%ecx	 #
	.cfi_restore 1
	.cfi_def_cfa 1, 0
	popl	%ebx	 #
	.cfi_restore 3
	popl	%ebp	 #
	.cfi_restore 5
	leal	-4(%ecx), %esp	 #,
	.cfi_def_cfa 4, 4
	ret	
	.cfi_endproc
LFE1513:
	.section	.gcc_except_table,"w"
LLSDA1513:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 LLSDACSE1513-LLSDACSB1513
LLSDACSB1513:
	.uleb128 LEHB4-LFB1513
	.uleb128 LEHE4-LEHB4
	.uleb128 0
	.uleb128 0
	.uleb128 LEHB5-LFB1513
	.uleb128 LEHE5-LEHB5
	.uleb128 L16-LFB1513
	.uleb128 0
	.uleb128 LEHB6-LFB1513
	.uleb128 LEHE6-LEHB6
	.uleb128 0
	.uleb128 0
	.uleb128 LEHB7-LFB1513
	.uleb128 LEHE7-LEHB7
	.uleb128 L17-LFB1513
	.uleb128 0
	.uleb128 LEHB8-LFB1513
	.uleb128 LEHE8-LEHB8
	.uleb128 0
	.uleb128 0
	.uleb128 LEHB9-LFB1513
	.uleb128 LEHE9-LEHB9
	.uleb128 L18-LFB1513
	.uleb128 0
	.uleb128 LEHB10-LFB1513
	.uleb128 LEHE10-LEHB10
	.uleb128 0
	.uleb128 0
LLSDACSE1513:
	.text
	.globl	__ZTV3Dog
	.section	.rdata$_ZTV3Dog,"dr"
	.linkonce same_size
	.align 4
__ZTV3Dog:
	.long	0
	.long	__ZTI3Dog
	.long	__ZNK3Dog5speakB5cxx11Ev
	.globl	__ZTV3Pet
	.section	.rdata$_ZTV3Pet,"dr"
	.linkonce same_size
	.align 4
__ZTV3Pet:
	.long	0
	.long	__ZTI3Pet
	.long	__ZNK3Pet5speakB5cxx11Ev
	.globl	__ZTI3Dog
	.section	.rdata$_ZTI3Dog,"dr"
	.linkonce same_size
	.align 4
__ZTI3Dog:
 # <anonymous>:
 # <anonymous>:
	.long	__ZTVN10__cxxabiv120__si_class_type_infoE+8
 # <anonymous>:
	.long	__ZTS3Dog
 # <anonymous>:
	.long	__ZTI3Pet
	.globl	__ZTS3Dog
	.section	.rdata$_ZTS3Dog,"dr"
	.linkonce same_size
	.align 4
__ZTS3Dog:
	.ascii "3Dog\0"
	.globl	__ZTI3Pet
	.section	.rdata$_ZTI3Pet,"dr"
	.linkonce same_size
	.align 4
__ZTI3Pet:
 # <anonymous>:
 # <anonymous>:
	.long	__ZTVN10__cxxabiv117__class_type_infoE+8
 # <anonymous>:
	.long	__ZTS3Pet
	.globl	__ZTS3Pet
	.section	.rdata$_ZTS3Pet,"dr"
	.linkonce same_size
	.align 4
__ZTS3Pet:
	.ascii "3Pet\0"
	.text
	.def	___tcf_0;	.scl	3;	.type	32;	.endef
___tcf_0:
LFB2001:
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
LFE2001:
	.def	__Z41__static_initialization_and_destruction_0ii;	.scl	3;	.type	32;	.endef
__Z41__static_initialization_and_destruction_0ii:
LFB2000:
	.cfi_startproc
	pushl	%ebp	 #
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp	 #,
	.cfi_def_cfa_register 5
	subl	$24, %esp	 #,
 # Early.cpp:31: } ///:~
	cmpl	$1, 8(%ebp)	 #, __initialize_p
	jne	L23	 #,
 # Early.cpp:31: } ///:~
	cmpl	$65535, 12(%ebp)	 #, __priority
	jne	L23	 #,
 # c:\mingw\lib\gcc\mingw32\9.2.0\include\c++\iostream:74:   static ios_base::Init __ioinit;
	movl	$__ZStL8__ioinit, %ecx	 #,
	call	__ZNSt8ios_base4InitC1Ev	 #
	movl	$___tcf_0, (%esp)	 #,
	call	_atexit	 #
L23:
 # Early.cpp:31: } ///:~
	nop	
	leave	
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	
	.cfi_endproc
LFE2000:
	.def	__GLOBAL__sub_I_main;	.scl	3;	.type	32;	.endef
__GLOBAL__sub_I_main:
LFB2002:
	.cfi_startproc
	pushl	%ebp	 #
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp	 #,
	.cfi_def_cfa_register 5
	subl	$24, %esp	 #,
 # Early.cpp:31: } ///:~
	movl	$65535, 4(%esp)	 #,
	movl	$1, (%esp)	 #,
	call	__Z41__static_initialization_and_destruction_0ii	 #
	leave	
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret	
	.cfi_endproc
LFE2002:
	.section	.ctors,"w"
	.align 4
	.long	__GLOBAL__sub_I_main
	.ident	"GCC: (MinGW.org GCC Build-2) 9.2.0"
	.def	__ZNSaIcEC1Ev;	.scl	2;	.type	32;	.endef
	.def	__ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_;	.scl	2;	.type	32;	.endef
	.def	__ZNSaIcED1Ev;	.scl	2;	.type	32;	.endef
	.def	__Unwind_Resume;	.scl	2;	.type	32;	.endef
	.def	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc;	.scl	2;	.type	32;	.endef
	.def	__ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE;	.scl	2;	.type	32;	.endef
	.def	__ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;	.scl	2;	.type	32;	.endef
	.def	__ZNSolsEPFRSoS_E;	.scl	2;	.type	32;	.endef
	.def	__ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev;	.scl	2;	.type	32;	.endef
	.def	__ZNSt8ios_base4InitD1Ev;	.scl	2;	.type	32;	.endef
	.def	__ZNSt8ios_base4InitC1Ev;	.scl	2;	.type	32;	.endef
	.def	_atexit;	.scl	2;	.type	32;	.endef
