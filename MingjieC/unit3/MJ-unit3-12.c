#include <stdio.h>

int main()
{
    int month;
    printf("请输入月份：");
    scanf("%d",&month);
    switch(month)
    {
        case 12 : ;
        case 1 : ;
        case 2 : puts("是冬天");break;
        case 3 : ;
        case 4 : ;
        case 5 : puts("是春天");break;
        case 6 : ;
        case 7 : ;
        case 8 : puts("是夏天");break;
        case 9 : ;
        case 10 : ;
        case 11 : puts("是秋天");break;
    }
}
