/* learn-in-depth
	Unit3_lesson3
	Eng\ Hazem Abd El-Halim
	*/

.section .vectors       
.word 0x20001000	    //stack_top
.word _reset            //1   reset
.word vector_handler    // 2  NMI
.word vector_handler    // 3  MM fault
.word vector_handler    // 4  Bus fault
.word vector_handler    // 5  Usage fault
.word vector_handler    // 6  Reserved
.word vector_handler    // 7  Reserved
.word vector_handler    // 8  Reserved 
.word vector_handler    // 9  Reserved
.word vector_handler    // 10 Reserved 
.word vector_handler    // 11 SVL call
.word vector_handler    // 12 Debug reserved 
.word vector_handler    // 13 Reserved
.word vector_handler    // 14 PendSv
.word vector_handler    // 15 sysTick
.word vector_handler    // 16 IRQ1
.word vector_handler    // 17 IRQ2
.word vector_handler    // 18 IRQ3
.word vector_handler    // 19 ...

.section .text
_reset:
	bl main
	b .

.thumb_func	
vector_handler:
	b _reset
	