#include <stdio.h>
/* 对代码清单的程序进行修改，使其不是递减到0而是递减到1为止 */

int main()
{
    int ipt1;
    printf("请输入一个整数：");
    scanf("%d",&ipt1);
    while(ipt1>0)
    {
        printf("%d ",ipt1);
        ipt1--;
    }
}
