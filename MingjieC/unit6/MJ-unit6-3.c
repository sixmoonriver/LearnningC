#include <stdio.h>
/* ����һ������������int������������ */

int threetimes(int x)
{
    return (x*x*x);
}

int main()
{
    int ipt1;
    printf("������һ������A��");
    scanf("%d",&ipt1);
    printf("����%d�����η���%d\n",ipt1,threetimes(ipt1));
}
