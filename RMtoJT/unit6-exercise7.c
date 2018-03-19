/* 设N是一个4位数，它的9倍恰好是其反序数，求N值 */
#include <stdio.h>

int main()
{
    int i,oi;
    int q,b,s,g;
    b=s=g=0;
    for(i=1000;i<=9999;i++)
    {
        oi = i;
        g = oi%10;
        oi = oi/10;
        s = oi%10;
        oi = oi/10;
        b = oi%10;
        oi = oi/10;
        q = oi%10;
        if(g + s*10 + b*100 + q*1000 == 9*(q+b*10+s*100+g*1000))
            printf("%d,%d,%d,%d,%d \n",g,s,b,q,i);
    }
}
