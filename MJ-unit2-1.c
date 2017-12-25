#include <stdio.h>
int main()
{
    int IPT1,IPT2,OPT1;
    puts("请输入两个整数。");
    printf("整数A:"); scanf("%d",&IPT1);
    printf("整数B:"); scanf("%d",&IPT2);
    OPT1=IPT1*100/IPT2;
    printf("A的值是B的%d%%",OPT1);
}
