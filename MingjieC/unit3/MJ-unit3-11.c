#include <stdio.h>

int main()
{
    int IPT1;
    printf("请输入一个整数:");
    scanf("%d",&IPT1);
    switch(IPT1%2)
    {
        case 0 : printf("这是一个偶数\n");break;
        case 1 : printf("这是一个奇数\n");break;
    }

}
