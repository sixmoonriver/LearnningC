#include <stdio.h>
/* ��дrrotate�����������޷�����x����nλ���ֵ */

unsigned rrotate(unsigned x,int n)
{
    int i;
    unsigned y;
    for(i=0;i<n;i++)
    {
        x>>=1;
    }
    return (x);
}

unsigned lrotate(unsigned x,int n)
{
    int i;
    unsigned y;
    for(i=0;i<n;i++)
    {
        x<<=1;
    }
    return (x);
}
void main()
{
    unsigned ipt1,ot1;
    int ws1;
    printf("������һ��������");
    scanf("%u",&ipt1);
    printf("�������ƶ���λ����");
    scanf("%d",&ws1);
    printf("%u����%d���ֵ��%u\n",ipt1,ws1,rrotate(ipt1,ws1));
    printf("%u����%d���ֵ��%u\n",ipt1,ws1,lrotate(ipt1,ws1));
}
