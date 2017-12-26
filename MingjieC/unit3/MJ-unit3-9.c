#include <stdio.h>

/* 编写一段程序，输入三个整数，如果三个数都相等，则显示“三个值都相等”，如果其中两个
    值相等，则显示，有两个值相等，如果上述两种情况都不满足，则显示“三个值各不相同  */

int main()
{
    int IPT1,IPT2,IPT3;
    puts("请输入三个整数");
    printf("整数A：");scanf("%d",&IPT1);
    printf("整数B：");scanf("%d",&IPT2);
    printf("整数C：");scanf("%d",&IPT3);
    if (IPT1 == IPT2)
        if (IPT1 == IPT3)
            printf("三个值都相等\n");
        else
            printf("有两个值相等\n");
    else if (IPT1 == IPT3)
            printf("有两个值相等\n");
         else if (IPT2 == IPT3)
            printf("有两个值相等\n");
         else
            printf("三个值各不相同");

}
