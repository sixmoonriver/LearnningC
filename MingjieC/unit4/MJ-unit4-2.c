#include <stdio.h>
/* 显示输入整数的位数 */

int main()
{
    int IPT1,Dig=0;
    do {
        printf("请输入一个非负整数：");
        scanf("%d",&IPT1);
        if(IPT1<0)
            puts("请输入非负整数！");
    } while(IPT1<0);
    do {
        Dig = Dig + 1;
        IPT1 = IPT1/10;
    } while(IPT1>0);
    printf("这个数的位数是%d",Dig);
}
