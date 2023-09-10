

.globl reset
reset:
	ldr sp, = StackTop	
	bl main

stop: b stop