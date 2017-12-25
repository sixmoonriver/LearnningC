#include <stdio.h>
int main()
{
    int no;
    puts("请输入一个整数");
    scanf("%d",&no);
    switch(no%3)
    {
        case 0：printf("这个数可以被3整除")；break;
        case 1: printf("这个数不可以被3整除，余数为:%d,no%3"); break;
        case 2: printf("这个数不可以被3整除，余数为:%d,no%3"); break;
        default: printf("不可能！")；
    }

}