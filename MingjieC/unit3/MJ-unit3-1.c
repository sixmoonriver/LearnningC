#include <stdio.h>

int main()
{
    int IPT1,IPT2;
    puts("请输入两个整数");
    printf("整数A:");scanf("%d",&IPT1);
    printf("整数B:");scanf("%d",&IPT2);
    if (IPT1 % IPT2 == 0)
    {
        printf("B是A的约数。\n");
    }
    else
    {
        printf("B不是A的约数。\n");
    }

}
