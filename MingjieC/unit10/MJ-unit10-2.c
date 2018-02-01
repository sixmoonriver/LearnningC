/*
    编写如下函数，将三个int型整数按升序排列
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
    printf("请输入三个整数：\n");
    scanf("%d",&ipt1);
    scanf("%d",&ipt2);
    scanf("%d",&ipt3);
    sort3(&ipt1,&ipt2,&ipt3);
    printf("这三个数从小到大的排序是：%d,%d,%d\n",ipt1,ipt2,ipt3);
}
