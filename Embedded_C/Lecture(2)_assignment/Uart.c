

#include  "Uart.h"


void Uart_u32GetString ( u8* Copy_pu32 ){
	while(*Copy_pu32!='\0'){
		UART_u32UART0DR= *Copy_pu32;
		Copy_pu32++;
	}
}