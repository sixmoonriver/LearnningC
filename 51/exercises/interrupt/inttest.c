#include "reg52.h"
/* 

测试外部中断INT0，设置为下降沿触发，设置为高优先级，LED1和LED8，反过来显示

*/

sbit led1 = P1^7;
sbit led2 = P1^0;
void intisr(void) interrupt 0
{
	led1 = ~led1;
	led2 = ~led2;
}

void main(void)
{
	led1 = 0;
	led2 = 1;
	IP = 0x01; // 设置中断0为高优先级
	IT0 = 1;   // 设置IT0为下降沿触发
	EX0 = 1;   // 开INT0中断
	EA = 1;    // 启用中断
	while(1);
}