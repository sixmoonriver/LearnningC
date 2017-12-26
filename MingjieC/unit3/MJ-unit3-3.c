#include <stdio.h>
/* 编写一段程序，输入一个整数值，显示出它的绝对值 */

int main()
{
    int IPT1;
    printf("请输入一个整数：");scanf("%d",&IPT1);
    if (IPT1 >= 0 )
    {
        printf("绝对值是%d\n",IPT1);
    }
    else
        printf("绝对值是%d\n",-IPT1);
}
