#include <stdio.h>
/* ����һ������ʽ�꣬swap(type,a,b)����ʹtype�͵���ֵ���� */

#define swap(type,x,y) ({int t;t=x;x=y;y=t;})

int main()
{
    int x,y;
    x = 10;
    y = 5;
    swap(int,x,y);
    printf("%d��%d�����Ľ����%d,%d\n",x,y,x,y);
}
