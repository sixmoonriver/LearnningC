/* 编写一段程序，像右边那样读取一个整数并显示该整数加上10之后的结果
    请输入一个整数：57
    该整数加上10的结果是67 */
#include <stdio.h>

int vx,vy;
int main()
{
    printf("请输入一个整数：\n");
    scanf("%d",&vx);
    vy= vx+10;
    printf("该整数加上10的结果是%d\n",vy);

}
