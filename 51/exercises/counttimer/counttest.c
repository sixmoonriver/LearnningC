#include <reg52.h>
#include <stdio.h>
/* 
本程序通过单片机定时器实现定时的操作，实现每1秒LED闪烁1次；
时间计算原理：
11.0592MHZ振荡频率，计数频率为振荡频率的24分之1 = 0.4608Mhz.那每一次计数就是2.170138888888889us，要计时一秒钟就要有460800个数；
如果使用16位的计数器（最大计数为65536），一次计数无法实现，通过10次计数实现，一次计数使用46080，10次就是1S时间；
计数器的初始值	TH0 = (65536-46080)/256;
	TL0 = (65536-46080)%256；
*/

sbit led = P1^3;
int ct = 0;
void T0ISR(void) interrupt 1
{
	ct++;
	// printf("ct的值为%D",ct);
	if(ct == 10)
	{
		led = ~led; 
		ct = 0;
	}
  TH0 = (65536-46080)/256;
	TL0 = (65536-46080)%256; 
}

main(void)
{
	led = 1;
	TMOD = 0x01;
	TR0 = 1;
	TH0 = (65536-46080)/256;
	TL0 = (65536-46080)%256;
	//TH0 = 0x4c;
	//TL0 = 0x00;
	EA = 1;
	ET0 = 1;
	while(1);
}