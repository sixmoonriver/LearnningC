#include <stdio.h>
/* ����һ����������������int�����еĽ�Сһ����ֵ */

int minof (int x,int y)
{
    return (x < y) ? x : y;
}

int main()
{
    int ipt1,ipt2;
    printf("��������������\n,����A��");
    scanf("%d",&ipt1);
    printf("����B��");
    scanf("%d",&ipt2);
    printf("��������������С����Ϊ��%d\n",minof(ipt1,ipt2));

}
