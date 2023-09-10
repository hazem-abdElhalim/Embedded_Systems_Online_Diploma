/* learn-in-depth
	Unit3_lesson3
	Eng\ Hazem Abd El-Halim
	*/
	
#include <stdint.h>

extern uint32_t _stack_top ;	
extern int main(void);

void reset_handler(void);

void default_handler(){
	reset_handler();
}

void NMI_handler(void)	__attribute__((weak,alias("default_handler")));;	
void H_fault_handler(void)	__attribute__((weak,alias("default_handler")));;	
void MM_fault_handler(void)	__attribute__((weak,alias("default_handler")));;	
void Bus_fault(void)	__attribute__((weak,alias("default_handler")));;
void Usage_fault_handler(void)	__attribute__((weak,alias("default_handler")));;		

uint32_t vectors[]   __attribute__((section(".vectors"))) ={
		(uint32_t)	&_stack_top,
		(uint32_t) &reset_handler,
		(uint32_t) &NMI_handler,
		(uint32_t) &H_fault_handler,
		(uint32_t) &MM_fault_handler,
		(uint32_t) &Bus_fault,
		(uint32_t) &Usage_fault_handler
};

extern uint32_t _E_text ; 
extern uint32_t _S_data ; 
extern uint32_t _E_data ; 
extern uint32_t _S_bss ; 
extern uint32_t _E_bss ; 

void reset_handler(){
	uint32_t Data_size = (unsigned char*)&_E_data - (unsigned char*)&_S_data ;
	unsigned char* p_src = (unsigned char*)&_E_text ; 
	unsigned char* p_dest = (unsigned char*)&_S_data ; 
	for(int i=0 ; i < Data_size ; i++){
		*((unsigned char*)p_dest++) =  *((unsigned char*)p_src++);
	}
	uint32_t Bss_size = (unsigned char*)&_E_data - (unsigned char*)&_S_data ;
	p_dest = (unsigned char*)&_S_bss ; 
	for(int i=0 ; i < Bss_size ; i++){
		*((unsigned char*)p_dest++) =  (unsigned char)0 ;
	}
	
	
	main();
	
}	






