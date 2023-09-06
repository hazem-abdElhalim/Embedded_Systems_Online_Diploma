
#include "Uart.h"

unsigned char string_uart[100]="learn-in-depth:<keroles>";
void main(){
	
	Uart_u32GetString ( string_uart );
	
}