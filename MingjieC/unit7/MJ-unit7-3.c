#include <stdio.h>
/* ��дset���������ؽ��޷�������x�ĵ�posλ(������������)��Ϊ1���ֵ
�㷨1������poseλ��һ����poseλ��Ϊ1����λΪ0����򼴿�
�㷨2������poseλ��Ϊ1

*/
unsigned set1(unsigned x,int pos)
{
    unsigned int n=1;
    n = n << (pos-1);
    x = (x | n);
    return (x);
}
unsigned set0(unsigned x ,int pos)
{
    unsigned int n=1;
    n = n << (pos-1);
    x = x & (~n);
    return (x);
}
unsigned setfan(unsigned x ,int pos)
{
    unsigned int n=1;
    n = n << (pos-1);
    if (x & n)
        x = x & (~n);
    else
        x = x | n;
    return (x);
}
int main()
{
    unsigned int nx,ws1;
    printf("������һ��������");
    scanf("%u",&nx);
    printf("��������Ҫ���õ�λ����");
    scanf("%u",&ws1);
    //set(nx,ws1);
    printf("%d��%d����Ϊ1���ֵ�ǣ�%u��\n����Ϊ0���ֵΪ��%u��\nȡ�����ֵ��%u\n",nx,ws1,set1(nx,ws1),set0(nx,ws1),setfan(nx,ws1));
}
