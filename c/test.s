	.file	"test.c"
	.text
	.section	.rodata
.LC0:
	.string	"t is int *"
.LC1:
	.string	"t is float *"
.LC2:
	.string	"%d\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	-8(%rbp), %rax
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rax
	cmpq	-8(%rbp), %rax
	jne	.L2
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
.L2:
	movq	-16(%rbp), %rax
	cmpq	-24(%rbp), %rax
	jne	.L3
	movl	$.LC1, %edi
	movl	$0, %eax
	call	printf
.L3:
	movl	$10, %edi
	call	putchar
	movl	$8, %esi
	movl	$.LC2, %edi
	movl	$0, %eax
	call	printf
	movl	$8, %esi
	movl	$.LC2, %edi
	movl	$0, %eax
	call	printf
	movl	$8, %esi
	movl	$.LC2, %edi
	movl	$0, %eax
	call	printf
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (GNU) 8.3.1 20191121 (Red Hat 8.3.1-5)"
	.section	.note.GNU-stack,"",@progbits
