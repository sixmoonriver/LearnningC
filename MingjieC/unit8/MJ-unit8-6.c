#include <stdio.h>
/* ��д���º����������n����ͬ������ȡ��r������������� */
int combination(int n,int r)
{
    int i,m;
    m = 1;
    for(i=n;i>r;i--)
        m= m*i;
    return (m);
}

int main()
{
    int ipt1,ipt2;
    printf("�����������ĸ�����");
    scanf("%d",&ipt1);
        printf("������ȡ���ĸ�����");
    scanf("%d",&ipt2);
    printf("��%d��ȡ��%d������%d��ȡ��\n",ipt1,ipt2,combination(ipt1,ipt2));
}
