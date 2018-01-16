#include <stdio.h>
/* 定义一个函数式宏，swap(type,a,b)，以使type型的两值互换 */

#define swap(type,x,y) ({int t;t=x;x=y;y=t;})

int main()
{
    int x,y;
    x = 10;
    y = 5;
    swap(int,x,y);
    printf("%d和%d互换的结果是%d,%d\n",x,y,x,y);
}
