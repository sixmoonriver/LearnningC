#include <stdio.h>

/* 编写一段程序，确认相等运算符和关系运算符的运算结果是1和0 */

int main()
{
    int IPT1,IPT2,IPT3,IPT4,RSUT1,RSUT2;
    puts("请输入2个整数，如果A和B相等，则输出结果1，否则输出结果0");
    printf("整数A：");scanf("%d",&IPT1);
    printf("整数B：");scanf("%d",&IPT2);
    RSUT1 = (IPT1==IPT2);
    printf("结果是%d\n",RSUT1);
    puts("请输入2个整数，如果C大于D，则输出结果1，否则输出结果0");
    printf("整数C：");scanf("%d",&IPT3);
    printf("整数D：");scanf("%d",&IPT4);
    RSUT2 = (IPT3 > IPT4);
    printf("结果是%d\n",RSUT2);
}

