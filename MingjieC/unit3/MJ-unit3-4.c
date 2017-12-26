#include <stdio.h>
/* 编写一段程序，输入两个整数，如果两个数值相等，则显示“A和B相等”。如果A大于B，
    则显示“A大于B”。如果A小于B，则显示“A小于B”。*/

int main()
{
    int IPT1,IPT2;
    puts("请输入两个整数。");
    printf("整数A：");scanf("%d",&IPT1);
    printf("整数B：");scanf("%d",&IPT2);
    if (IPT1==IPT2)
        printf("A和B相等。");
    else if (IPT1 > IPT2)
        printf("A大于B");
    else
        printf("A小于B");
}
