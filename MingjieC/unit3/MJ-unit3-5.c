#include <stdio.h>
/* 编写一段程序，计算出输入的三个数中的最小值并显示 */

int main()
{
    int IPT1,IPT2,IPT3,MIN;
    puts("请输入三个整数。");
    printf("整数A：");scanf("%d",&IPT1);
    printf("整数B：");scanf("%d",&IPT2);
    printf("整数C：");scanf("%d",&IPT3);
    MIN = IPT1;
    if (IPT2 < MIN)
        MIN = IPT2;
    else if (IPT3 < MIN)
        MIN = IPT3;
    printf("这三个数的最小值为：%d",MIN);

}

