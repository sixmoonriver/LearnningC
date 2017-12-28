#include <stdio.h>
/*测试前置递增运算符和后置递增运算符； 前置运算符的表达式的结果是运算后的，后置运算符的表达式是运算前的*/

int main()
{
    int ipt1,frt1,aft1;
    printf("请输入一个整数：");
    scanf("%d",&ipt1);
    frt1 = ipt1;
    aft1 = ipt1;
    printf("前置运算后的结果%d\n",++frt1);
    printf("后置运算后的结果%d\n",aft1++);
}
