#include <stdio.h>
/* 对代码清单4-7中的程序进行修改，当输入值为负数的时候不执行换行操作 */

int main()
{
    int ipt1;
    printf("请输入一个整数：");
    scanf("%d",&ipt1);
    while(ipt1>=0){
        printf("%d ",ipt1);
        ipt1--;
    }

}
