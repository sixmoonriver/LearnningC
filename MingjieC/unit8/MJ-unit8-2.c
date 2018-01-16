#include <stdio.h>
#define max(x,y) (((x) > (y)) ? (x) : (y))
/*
max(max((a > b) ? (a) : (b),c),d))

*/
int main()
{
    int a,b,c,d;
    int d1,d2;
    a = 2;
    b = 4;
    c = 3;
    d = 10;
    d1 = max(a,b);
    d2 = max(c,d);
    printf("a,b,c,d中的最大值为：%d\n",max(max(a,b),max(c,d)));
    printf("a,b,c,d中的最大值为：%d\n",max(max(max(a,b),c),d));
}
