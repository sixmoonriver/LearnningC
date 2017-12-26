#include <stdio.h>
/* 编写一段程序，输入两个整数，如果它们的差值小于等于10，则显示”它们的差值小于等于10“
    否则，显示”它们的差大于等于11“，请使用逻辑运算符 */
int main()
{
    int IPT1,IPT2,Result;
    puts("请输入2个整数。");
    printf("整数A：");scanf("%d",&IPT1);
    printf("整数B：");scanf("%d",&IPT2);
    Result = (IPT1>IPT2) ? IPT1-IPT2 : IPT2-IPT1;
    if (Result <= 10)
        printf("它们的差值小于等于10\n");
    else
        printf("它们的差大于等于11\n");
}
