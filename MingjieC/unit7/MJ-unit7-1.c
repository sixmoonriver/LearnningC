#include <stdio.h>
/* ��д����ȷ�ϣ��޷�������λ���ƺ��ֵ���ڳ���2��ָ���ݺ��ֵ��
   �޷����������ƺ��ֵ���ڳ���2��ָ�����ݵ�ֵ */
int mi(int x)
{
    int i,mi1=2;
    if(x>=0)
    {
        for(i=1;i<x;i++)
            mi1*=2;
    }
return (mi1);
}

void main()
{
    int i,ipt1,ws1,iptleft,iptright;
    printf("������һ��������");
    scanf("%u",&ipt1);
    printf("�������ƶ���λ����");
    scanf("%d",&ws1);
    iptleft = iptright = ipt1;
    for(i=ws1;i>0;i--)
    {
        iptright>>=1;
        iptleft<<=1;
    }
    printf("�������%d����%d��ֵ�ǣ�%d,%d\n",ipt1,ws1,iptleft,ipt1* mi(ws1));
    printf("�������%d����%d��ֵ�ǣ�%d,%d\n",ipt1,ws1,iptright,ipt1 / mi(ws1));
}

