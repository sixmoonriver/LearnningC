#include "reg52.h"
#define uint unsigned int
#define uchar unsigned char

void delay(uint z);

void main()
{
	int i;
//	P1 = 0x00;
	while(1)
	{
		int dat1 = 0xFE;
		int dat2 = 0x7F;
		P1 = 0xFF;		
		for(i=0;i<8;i++)
		{
			P1 = dat1;
			delay(500);
			dat1 = dat1<<1;
		}
		//P1=0x00;
		for(i=0;i<7;i++)
		{
			P1 = dat2;
			delay(500);
			dat2 = dat2>>1;
		}
	}

}

void delay(uint z)
{
    uchar j;
    for(z;z>0;z--)
        for(j=200;j>0;j--);
}