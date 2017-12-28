#include <stdio.h>
/* 修改4-2代码 */

int main()
{
    int ipt1;
    do {
        printf("请输入一个非负整数:");
        scanf("%d",&ipt1);
        if(ipt1<0)
            printf("请不要输入负整数。\n");
    } while(ipt1<0);
    printf("该整数的逆向显示结果是：");
    do {
        printf("%d",ipt1%10);
        ipt1/=10;
    } while(ipt1>0);
}
