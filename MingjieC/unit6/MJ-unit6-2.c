#include <stdio.h>
/* ����һ����������������int�������е���Сֵ��*/

int minof(int x ,int y,int z)
{
    int min = x;

    if(min>y) min = y;
    if(min>z) min = z;
    return (min);
}

int main()
{
    int ipt1,ipt2,ipt3;
    printf("��������������\n,����A��");
    scanf("%d",&ipt1);
    printf("����B��");
    scanf("%d",&ipt2);
    printf("����C��");
    scanf("%d",&ipt3);
    printf("��������������С����Ϊ��%d\n",minof(ipt1,ipt2,ipt3));
}
