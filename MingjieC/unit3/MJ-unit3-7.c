#include <stdio.h>

int main()
{
    int IPT1,IPT2,Result;
    puts("������2��������");
    printf("����A��");scanf("%d",&IPT1);
    printf("����B��");scanf("%d",&IPT2);
    //printf("���ǵĲ���%d",(IPT1>IPT2)?IPT1-IPT2:IPT2-IPT1);
    if (IPT1>IPT2)
        Result = IPT1-IPT2;
    else
        Result = IPT2-IPT1;
    printf("���ǵĲ���%d\n",Result);
    return (0);
}
