#include <stdio.h>
/* ��дһ�γ��򣬼����������ĸ����������ֵ����ʾ */

int main()
{
    int IPT1,IPT2,IPT3,IPT4,MAX;
    puts("�������ĸ�������");
    printf("����A��");scanf("%d",&IPT1);
    printf("����B��");scanf("%d",&IPT2);
    printf("����C��");scanf("%d",&IPT3);
    printf("����D��");scanf("%d",&IPT4);
    MAX = IPT1;
    if (IPT2 > MAX)
    {
         MAX = IPT2;
    }
    if (IPT3 > MAX)
    {
         MAX = IPT3;
    }
    if (IPT4 > MAX)
    {
         MAX = IPT4;
    }
    printf("��4���������ֵΪ%d\n",MAX);
}
