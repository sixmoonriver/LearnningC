#include <stdio.h>
/* ����һ���Ǹ�������Ȼ��������ʾ */
int main()
{
    int IPT1;
    int OT=0;
    do {
    printf("������һ���Ǹ�������");
    scanf("%d",&IPT1);
    if(IPT1<0)
      puts("�벻Ҫ���븺����");
    } while(IPT1<0);
    puts("����������ʾ�Ľ���ǣ�");
    do {
        printf("%d",IPT1 % 10);
        OT=OT*10+(IPT1 % 10);
        IPT1 = IPT1 / 10;
    } while(IPT1>0);
    printf("������ʾ������Ϊ%d",OT);
    puts("��");
}
