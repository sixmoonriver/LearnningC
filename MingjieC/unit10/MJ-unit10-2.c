/*
    ��д���º�����������int����������������
*/
#include <stdio.h>
int sw2(int *x,int *y)
{
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}
void sort3(int *n1,int *n2,int *n3)
{
    int tmp;
    if(*n1 > *n2)
    {
        sw2(n1,n2);
    }
    if(*n1 > *n3)
        sw2(n1,n3);
    if(*n2 > *n3)
    {
        sw2(n2,n3);
    }
}

void main()
{
    int ipt1,ipt2,ipt3;
    printf("����������������\n");
    scanf("%d",&ipt1);
    scanf("%d",&ipt2);
    scanf("%d",&ipt3);
    sort3(&ipt1,&ipt2,&ipt3);
    printf("����������С����������ǣ�%d,%d,%d\n",ipt1,ipt2,ipt3);
}
