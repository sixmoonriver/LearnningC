#include <stdio.h>
/*����ǰ�õ���������ͺ��õ���������� ǰ��������ı��ʽ�Ľ���������ģ�����������ı��ʽ������ǰ��*/

int main()
{
    int ipt1,frt1,aft1;
    printf("������һ��������");
    scanf("%d",&ipt1);
    frt1 = ipt1;
    aft1 = ipt1;
    printf("ǰ�������Ľ��%d\n",++frt1);
    printf("���������Ľ��%d\n",aft1++);
}
