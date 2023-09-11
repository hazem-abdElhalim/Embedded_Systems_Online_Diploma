

/* learn-in-depth
Eng: Hazem Abd El-Halim
	*/
	
#include <stdint.h>

extern int main(void);
void Reset_Handler(void);
void Default_Handler()
{
	Reset_Handler();
}
void NMI_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));
void H_Fault_Handler(void) __attribute__ ((weak, alias ("Default_Handler")));


static unsigned long Stack_top[256]; 

void (* const g_p_fn_vectors[])() __attribute__((section(".vectors")))  ={
(void(*)())  ((unsigned long)Stack_top  + sizeof(Stack_top)),
 &Reset_Handler,
 &NMI_Handler,
 &H_Fault_Handler
};

extern unsigned int _S_DATA;
extern unsigned int _E_DATA;
extern unsigned int _S_bss;
extern unsigned int _E_bss;
extern unsigned int _E_text;

void Reset_Handler(void)
{
	volatile unsigned long conter;
	unsigned int DATA_size = (unsigned char*)&_E_DATA - (unsigned char*)&_S_DATA;
	unsigned char* P_src = (unsigned char*)&_E_text;
	unsigned char* P_dst = (unsigned char*)&_S_DATA;
	
	for (conter = 0; conter < DATA_size; conter++)
	{
		*((unsigned char*)P_dst++) = *((unsigned char *)P_src++);
	}

	unsigned int bss_size = (unsigned char*)&_E_bss - (unsigned char*)&_S_bss;
	P_dst = (unsigned char*)&_S_bss;
	for(conter = 0; conter< bss_size; conter++)
	{
		*((unsigned char*)P_dst++)= (unsigned char)0;
	}

	main();
}