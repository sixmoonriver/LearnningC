#include <stdio.h>
/* ��дһ�γ��򣬼����������������е���Сֵ����ʾ */

int main()
{
    int IPT1,IPT2,IPT3,MIN;
    puts("����������������");
    printf("����A��");scanf("%d",&IPT1);
    printf("����B��");scanf("%d",&IPT2);
    printf("����C��");scanf("%d",&IPT3);
    MIN = IPT1;
    if (IPT2 < MIN)
        MIN = IPT2;
    else if (IPT3 < MIN)
        MIN = IPT3;
    printf("������������СֵΪ��%d",MIN);

}

