#include <stdio.h>
/* 用/=，++运算符，修改4-3 */

int main()
{
    int ipt1;
    int dig;
    do {
        printf("请输入一个非负整数：");
        scanf("%d",&ipt1);
        if(ipt1<0)
            puts("请不要输入负整数。");
        } while(ipt1<0);
    dig = 0;
    do {
        ipt1 /= 10;
        dig ++;
        } while(ipt1>0);
    printf("这个数的位数为%d。\n",dig);

}
