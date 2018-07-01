#include "reg52.h"
sbit b = P1^0;
sbit c = P1^1;

void T1ISR(void) interrupt 3 //这个数字0、2代表外部中断0、1；1、3代表定时器0、1；
{
//	TH1 = 0xf6;
//	TL1 = 0xf6; 
	b = ~b;
	c = ~c;
}
void main()
{
	b = 0;
	c = 0;
	TMOD = 0x60; // 定义T1为模式2的计数器,模式2的特点是不需要中断服务程序处理计数器的初值；
	TL1 = 0xf5;  // 初始化，设定计数值为10；
	TH1 = 0xf5;
	TF1 = 0; 
	TR1 = 1;
	EA = 1;
	ET1 = 1;
	while(1)
	{
	}
}