#include <stdio.h>

int main()
{
    int IPT1,IPT2,OPT1;
    double IPT3,IPT4,OPT2;
    puts("请输入两个整数");
    printf("整数A："); scanf("%d",&IPT1);
    printf("整数B："); scanf("%d",&IPT2);
    printf("整数A除以整数B等于%d\n",IPT1/IPT2);
    puts("请输入两个实数");
    printf("实数A："); scanf("%lf",&IPT3);
    printf("实数B："); scanf("%lf",&IPT4);
    printf("实数A除以实数B等于%lf\n",IPT3/IPT4);
    printf("整数A除以实数B等于%lf%\n",IPT1/IPT4);
    printf("实数A除以整数B等于%lf%\n",IPT3/IPT2);

}
