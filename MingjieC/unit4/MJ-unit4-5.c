#include <stdio.h>
/* ��/=��++��������޸�4-3 */

int main()
{
    int ipt1;
    int dig;
    do {
        printf("������һ���Ǹ�������");
        scanf("%d",&ipt1);
        if(ipt1<0)
            puts("�벻Ҫ���븺������");
        } while(ipt1<0);
    dig = 0;
    do {
        ipt1 /= 10;
        dig ++;
        } while(ipt1>0);
    printf("�������λ��Ϊ%d��\n",dig);

}
