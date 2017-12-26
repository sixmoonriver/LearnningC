#include <stdio.h>

int main()
{
    int IPT1,IPT2,Result;
    puts("请输入2个整数。");
    printf("整数A：");scanf("%d",&IPT1);
    printf("整数B：");scanf("%d",&IPT2);
    //printf("它们的差是%d",(IPT1>IPT2)?IPT1-IPT2:IPT2-IPT1);
    if (IPT1>IPT2)
        Result = IPT1-IPT2;
    else
        Result = IPT2-IPT1;
    printf("它们的差是%d\n",Result);
    return (0);
}
