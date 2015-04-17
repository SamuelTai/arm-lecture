	.syntax unified
	.arch armv7-a
	.text
	.align 2
	.thumb
	.thumb_func

	.global fibonacci
	.type fibonacci, function

fibonacci:

	push {r3, r4, r5, r6, lr}
	add r4, r0, #0
	mov r5, #0
	ldr r5,=-1
	ldr r6,=1

.loop:
	add r0,r5,r6
	mov r5,r6
	mov r6,r0

	subs r4,r4,#1
	bne .loop
	pop {r3,r4,r5,r6,pc}

	.size fibonacci, .-fibonacci
	.end
