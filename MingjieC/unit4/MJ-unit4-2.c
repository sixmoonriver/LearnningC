#include <stdio.h>
/* ��ʾ����������λ�� */

int main()
{
    int IPT1,Dig=0;
    do {
        printf("������һ���Ǹ�������");
        scanf("%d",&IPT1);
        if(IPT1<0)
            puts("������Ǹ�������");
    } while(IPT1<0);
    do {
        Dig = Dig + 1;
        IPT1 = IPT1/10;
    } while(IPT1>0);
    printf("�������λ����%d",Dig);
}
