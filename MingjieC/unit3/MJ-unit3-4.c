#include <stdio.h>
/* ��дһ�γ��������������������������ֵ��ȣ�����ʾ��A��B��ȡ������A����B��
    ����ʾ��A����B�������AС��B������ʾ��AС��B����*/

int main()
{
    int IPT1,IPT2;
    puts("����������������");
    printf("����A��");scanf("%d",&IPT1);
    printf("����B��");scanf("%d",&IPT2);
    if (IPT1==IPT2)
        printf("A��B��ȡ�");
    else if (IPT1 > IPT2)
        printf("A����B");
    else
        printf("AС��B");
}
