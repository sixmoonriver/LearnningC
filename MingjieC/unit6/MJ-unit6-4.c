#include <stdio.h>
/* ʹ�ô���6-3��sqr����������һ������������int���������Ĵ��� */

int sqr(int x)
{
    return (x*x);
}
int pow4 (int x)
{
    return(sqr(x)*sqr(x));
}

int main()
{
    while(1){
        int ipt1;
        printf("������һ��������");
        scanf("%d",&ipt1);
        printf("%d��ƽ����%d���Ĵη���%d\n",ipt1,sqr(ipt1),pow4(ipt1));
    }

}
