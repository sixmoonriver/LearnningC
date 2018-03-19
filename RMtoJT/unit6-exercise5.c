/* 编写一个程序，求出200~300之间的数，且满足条件，它们三个数字之积为42，三个数字之和为12 */
#include <stdio.h>

int main()
{
    int i,oi;
    int b,s,g;
    b=s=g=0;
    for(i=200;i<=300;i++)
    {
        oi = i;
        g = oi%10;
        oi = oi/10;
        s = oi%10;
        oi = oi/10;
        b = oi%10;
        if(g*s*b == 42 && g+s+b == 12)
            printf("%d,%d,%d,%d \n",g,s,b,i);
    }
}
