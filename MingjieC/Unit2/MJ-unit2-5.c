#include <stdio.h>
int main()
{
    int IPT1,IPT2;
    double OPT1,OPT2;
    puts("请输入两个整数");
    printf("整数A：");scanf("%d",&IPT1);
    printf("整数B：");scanf("%d",&IPT2);
    printf("A是B的%f%%\n",(double)IPT1/IPT2*100);

}
