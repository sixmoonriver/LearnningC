#include <stdio.h>
/* �޸�4-2���� */

int main()
{
    int ipt1;
    do {
        printf("������һ���Ǹ�����:");
        scanf("%d",&ipt1);
        if(ipt1<0)
            printf("�벻Ҫ���븺������\n");
    } while(ipt1<0);
    printf("��������������ʾ����ǣ�");
    do {
        printf("%d",ipt1%10);
        ipt1/=10;
    } while(ipt1>0);
}
