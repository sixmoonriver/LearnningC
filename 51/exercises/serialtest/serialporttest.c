#include "reg52.h"

void main()
{
	int a = 88;
	SCON = 0x00;
	ES = 0;
	SBUF = a;
	while(TI)
	{
		TI = 0;
	}
}