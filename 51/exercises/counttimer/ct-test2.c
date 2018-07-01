#include<reg52.h>
sbit led=P1^0;
/*****定时器1初始化****/
void Timer1Init()
{
        TMOD= 0x60;                //设置定时器1计数/自动重载模式
        TL1 = 0xf6;                //设置定时初值
        TH1 = 0xf6;                //设置定时重载值
        TF1 = 0;                        //清除TF1标志
        TR1 = 1;                        //定时器1开始计数
        EA=1;                        //开总中断 
        ET1=1;                        //开定时器1中断        
}
/********主函数**********/
void main()
{
        Timer1Init();
        while(1);
}
/******定时器1中断服务*******/
void timer1() interrupt        3 
{
        led=~led;
}