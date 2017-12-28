#include <stdio.h>
/* 编写一段程序，像下面这样显示出小于输入整数的所有2的乘方
2 4 8 16 */

int main()
{
    int ipt1,i=2;
    printf("请输入一个整数：");
    scanf("%d",&ipt1);
    while(i<ipt1){
        printf("%d ",i);
        i*=2;
    }
    puts(" ");
}

