#include <stdio.h>
int main()
{
    int IPT1;
    double OPT1;
    printf("请输入你的身高：");scanf("%d",&IPT1);
    printf("您的标准体重是：%3.1f",(IPT1-100)*0.9);
}
