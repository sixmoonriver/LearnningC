#include <stdio.h>
/* ��дһ�γ�����������������������ǵĲ�ֵС�ڵ���10������ʾ�����ǵĲ�ֵС�ڵ���10��
    ������ʾ�����ǵĲ���ڵ���11������ʹ���߼������ */
int main()
{
    int IPT1,IPT2,Result;
    puts("������2��������");
    printf("����A��");scanf("%d",&IPT1);
    printf("����B��");scanf("%d",&IPT2);
    Result = (IPT1>IPT2) ? IPT1-IPT2 : IPT2-IPT1;
    if (Result <= 10)
        printf("���ǵĲ�ֵС�ڵ���10\n");
    else
        printf("���ǵĲ���ڵ���11\n");
}
