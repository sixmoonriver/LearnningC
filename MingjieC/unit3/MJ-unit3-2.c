#include <stdio.h>

/* ��дһ�γ���ȷ�����������͹�ϵ���������������1��0 */

int main()
{
    int IPT1,IPT2,IPT3,IPT4,RSUT1,RSUT2;
    puts("������2�����������A��B��ȣ���������1������������0");
    printf("����A��");scanf("%d",&IPT1);
    printf("����B��");scanf("%d",&IPT2);
    RSUT1 = (IPT1==IPT2);
    printf("�����%d\n",RSUT1);
    puts("������2�����������C����D����������1������������0");
    printf("����C��");scanf("%d",&IPT3);
    printf("����D��");scanf("%d",&IPT4);
    RSUT2 = (IPT3 > IPT4);
    printf("�����%d\n",RSUT2);
}

