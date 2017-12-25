/* 编写一段程序，像下面那样读取一个整数并显示该整数减去10之后的结果
    请输入一个整数：57
    该整数减去10的结果是47
    */

#include <stdio.h>

int vx,vy;
int main()
{
    puts("请输入一个整数");
    scanf("%d",&vx);
    printf("该整数减去10的结果是：%d\n",vx-10);
}
