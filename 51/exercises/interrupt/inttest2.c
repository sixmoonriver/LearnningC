/*
  测试串口发送中断
*/
#include <reg52.h>
#include <stdio.h>
sbit led1 = P1^4;

void SISR(void) interrupt 4
{
	TI = 0;
	led1 = ~led1;
}
	
void main(void)
{
	int a;
	led1 = 1;
	a = 0x68;
	SCON = 0x00; // 初始化串口模式0
	ES = 1;
	SBUF = a;
	EA = 1;
	while(1);
}
