#ifndef _UART_H_
#define _UART_H_

typedef unsigned int    u32;
typedef unsigned char   u8;

#define UART_u32UART0DR       *(volatile u32*)((u32*)(0x101f1000))


void Uart_u32GetString ( u8* Copy_pu32 );



#endif