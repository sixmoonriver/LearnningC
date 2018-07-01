#include <reg52.h>
/*
	recive data
*/

void main()
{
	int ch;
	SCON = 0x50;
	TMOD = 0x20;
	PCON = 0x80;
	TL1 = 0xF4;
	TH1 = 0xF4;
	TR1 = 1;
	ES = 0;
	while(RI)
	{
		ch = SBUF;
		RI = 0;
	}
}