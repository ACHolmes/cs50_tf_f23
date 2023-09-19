	.file	"stack.c"
	.text
	.globl	_f
	.def	_f;	.scl	2;	.type	32;	.endef
_f:
LFB13:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$16, %esp
	movb	$97, -10(%ebp)
	movb	$98, -9(%ebp)
	movb	$99, -8(%ebp)
	movb	$100, -7(%ebp)
	movb	$101, -6(%ebp)
	movb	$102, -5(%ebp)
	movb	$103, -4(%ebp)
	movb	$104, -3(%ebp)
	movb	$105, -2(%ebp)
	movb	$106, -1(%ebp)
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE13:
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "%lu\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB14:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$32, %esp
	call	___main
	call	_f
	movb	$122, 27(%esp)
	movb	$121, 28(%esp)
	movb	$120, 29(%esp)
	movb	$119, 30(%esp)
	movb	$118, 31(%esp)
	leal	27(%esp), %eax
	movl	%eax, (%esp)
	call	_strlen
	movl	%eax, 4(%esp)
	movl	$LC0, (%esp)
	call	_printf
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE14:
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_strlen;	.scl	2;	.type	32;	.endef
	.def	_printf;	.scl	2;	.type	32;	.endef
