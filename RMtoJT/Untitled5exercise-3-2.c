/* 从键盘输入一下4位数，求该数个位、十位、百位、千位上的数的和 */
#include <stdio.h>
#include <math.h>
int main()
{
    int ipt1;
    int ct=0;
    printf("请输入一个4位整数：");
    scanf("%d",&ipt1);
    ipt1=abs(ipt1);
    do{
        ct=ct+ipt1%10;
        ipt1/=10;
    } while(ipt1>=1);
    printf("这个数各位数之和为%d",ct);
}
