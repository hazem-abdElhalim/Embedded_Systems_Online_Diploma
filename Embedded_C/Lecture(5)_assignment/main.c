
#include <stdlib.h>

#define SYSCTL_RCGC2_R             (*((volatile unsigned long*)0x400FE108))
#define GPIO_PORTF_DATA_R          (*((volatile unsigned long*)0x400253FC))
#define GPIO_PORTF_DIR_R           (*((volatile unsigned long*)0x40025400))
#define GPIO_PORTF_DEN_R           (*((volatile unsigned long*)0x4002551C))


void* _sbrk(int increment){
	extern unsigned int _E_bss;
	static unsigned char heap_ptr;
	unsigned char prev_heap_ptr;
	extern unsigned int _heap_end;
	
	if(heap_ptr ==(void*) NULL){
		heap_ptr = (unsigned char*)&_E_bss; 
	}
	prev_heap_ptr = heap_ptr;
	if(heap_ptr + increment > (unsigned char*)&_heap_end){
		return (void*) NULL;
	}
	heap_ptr+=increment;
	return (void*)prev_heap_ptr;
} 


int main(void)
{
	int* ptr= (int*)malloc(4);
	
	volatile unsigned long delay_counter;
	SYSCTL_RCGC2_R = 0x00000020;
	for(delay_counter = 0; delay_counter <200; delay_counter++); 
	GPIO_PORTF_DIR_R |=  (1<<3); 
	GPIO_PORTF_DEN_R  |= (1<<3); 
	while(1)
	{
		GPIO_PORTF_DATA_R |= (1<<3);
		for(delay_counter = 0; delay_counter <200; delay_counter++);
		GPIO_PORTF_DATA_R &= ~(1<<3);
		for(delay_counter = 0; delay_counter <200; delay_counter++);
	}
	free(ptr);
	return 0;
}
