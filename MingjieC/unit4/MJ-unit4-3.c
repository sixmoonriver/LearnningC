#include <stdio.h>
/* ��ȡ2��������ֵ ��Ȼ����������֮�����������ĺ͡� */

int main()
{
    int IPT1,IPT2,XIAO,DA,SUM1=0;
    puts("����������������");
    printf("����1��");scanf("%d",&IPT1);
    printf("����2��");scanf("%d",&IPT2);
    if (IPT1 < IPT2)
    {
        XIAO = IPT1;
        DA = IPT2;
    }
    else
    {
        XIAO = IPT2;
        DA = IPT1;
    }
    do {
        SUM1 = SUM1 + XIAO;
        XIAO++;
    } while(XIAO <= DA );
    if (IPT1<IPT2)
        printf("����%dС��%d�����������ĺ��ǣ�%d",IPT1,IPT2,SUM1);
    else
        printf("����%dС��%d�����������ĺ��ǣ�%d",IPT2,IPT1,SUM1);
}
