#include <stdio.h>

/* ��дһ�γ������������������������������ȣ�����ʾ������ֵ����ȡ��������������
    ֵ��ȣ�����ʾ��������ֵ��ȣ����������������������㣬����ʾ������ֵ������ͬ  */

int main()
{
    int IPT1,IPT2,IPT3;
    puts("��������������");
    printf("����A��");scanf("%d",&IPT1);
    printf("����B��");scanf("%d",&IPT2);
    printf("����C��");scanf("%d",&IPT3);
    if (IPT1 == IPT2)
        if (IPT1 == IPT3)
            printf("����ֵ�����\n");
        else
            printf("������ֵ���\n");
    else if (IPT1 == IPT3)
            printf("������ֵ���\n");
         else if (IPT2 == IPT3)
            printf("������ֵ���\n");
         else
            printf("����ֵ������ͬ");

}
