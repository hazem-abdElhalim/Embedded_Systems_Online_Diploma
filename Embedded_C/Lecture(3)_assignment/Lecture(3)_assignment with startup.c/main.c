



typedef volatile unsigned int  vuint32;

#define RCC_Base   0x40021000
#define GPIOPA_Base   0x40010800

#define RCC_APB2ENR    *(vuint32*)(RCC_Base+0x18)
#define GPIO_PA_CRH    *(vuint32*)(GPIOPA_Base+0x04)


#define SetClock   (1<<2)

typedef union{
	vuint32 all;
	struct{
		vuint32 reserved: 13;
		vuint32 pin13: 1;
	}pin;
}P_IN;

volatile P_IN* ptr = (volatile P_IN*)(GPIOPA_Base+0x0c);
int main(void)
{
	RCC_APB2ENR|=SetClock;
	GPIO_PA_CRH &= 0xff0fffff;
	GPIO_PA_CRH|=  0x00200000;
	while(1){
		ptr->pin.pin13=1;
		for(int i=0 ;i<50000;i++);
		ptr->pin.pin13=0;
		for(int i=0 ;i<50000;i++);
	}

}
