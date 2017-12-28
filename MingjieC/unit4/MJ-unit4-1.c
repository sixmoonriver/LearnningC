#include <stdio.h>
/* 输入一个非负整数，然后逆向显示 */
int main()
{
    int IPT1;
    int OT=0;
    do {
    printf("请输入一个非负整数：");
    scanf("%d",&IPT1);
    if(IPT1<0)
      puts("请不要输入负数！");
    } while(IPT1<0);
    puts("该数逆向显示的结果是：");
    do {
        printf("%d",IPT1 % 10);
        OT=OT*10+(IPT1 % 10);
        IPT1 = IPT1 / 10;
    } while(IPT1>0);
    printf("逆向显示的整数为%d",OT);
    puts("。");
}
