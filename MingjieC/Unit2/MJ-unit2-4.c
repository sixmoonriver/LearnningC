#include <stdio.h>

int main()
{
    int IPT1,IPT2,OPT1;
    double IPT3,IPT4,OPT2;
    puts("��������������");
    printf("����A��"); scanf("%d",&IPT1);
    printf("����B��"); scanf("%d",&IPT2);
    printf("����A��������B����%d\n",IPT1/IPT2);
    puts("����������ʵ��");
    printf("ʵ��A��"); scanf("%lf",&IPT3);
    printf("ʵ��B��"); scanf("%lf",&IPT4);
    printf("ʵ��A����ʵ��B����%lf\n",IPT3/IPT4);
    printf("����A����ʵ��B����%lf%\n",IPT1/IPT4);
    printf("ʵ��A��������B����%lf%\n",IPT3/IPT2);

}
