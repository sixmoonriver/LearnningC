#include <stdio.h>
/* 对代码4-9的程序进行如下修改，从1开始递增，输入值小于0的时候不换行 */

int main()
{
    int ipt1,i=1;
    printf("请输入一个正整数：");
    scanf("%d",&ipt1);
    while(i<=ipt1){
        printf("%d ",i);
        i++;
    }
    putchar('\n') ;
}
