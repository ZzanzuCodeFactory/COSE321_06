
.syntax unified    // note this...

.extern bubble_sort_thumb
.extern bubble_sort_arm

.align 8
// Our interrupt vector table
csd_entry:
	b csd_reset
	b .
	b .
	b .
	b .
	b .
	b .
	b .
.global main
csd_reset:
main:

    mov r0,  #0x00
    mov r1,  #0x11
    mov r2,  #0x22
    mov r3,  #0x33
    mov r4,  #0x44
    mov r5,  #0x55
    mov r6,  #0x66
    mov r7,  #0x77
    mov r8,  #0x88
    mov r9,  #0x99
    mov r10, #0xaa
    mov r11, #0xbb
    mov r12, #0xcc
    ldr r13, =stack_top  // C code would use stack for backing up registers


forever:

	mov r0, #1

	blx bubble_sort_arm

    blx bubble_sort_thumb

    b forever




.data
.align 4

stack:     .space 1024
stack_top:
