	.section .text
	.globl _start
_start:
	/* tmss, taken from the wikibooks page */
	move.b	(0xa10001), %d0
	andi.b	#0xf, %d0
	beq.b	v_0
	move.b	'S', 0xa14000
	move.b	'E', 0xa14001
	move.b	'G', 0xa14002
	move.b	'A', 0xa14003
v_0:

	/* set up stack */
	move.l	#0x01000000, %sp

	/* copy .data to RAM */
	lea	__data_load_beg, %a0
	lea	__data_load_end, %a1
	lea	__data_rel, %a2

1:	cmp	%a1, %a0
	bge	2f
	move.l	(%a0)+, (%a2)+
	jmp	1b
2:

	/* clear .bss */
	lea	__bss_beg, %a0
	lea	__bss_end, %a1

1:	cmp	%a1, %a0
	bge	2f
	move.l	#0, (%a0)+
	jmp	1b
2:

	/* jump to the main program */
	jsr	main
1:	nop
	jmp	1b
