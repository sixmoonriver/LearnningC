/* �Ӽ�������һ��4λ�����������λ��ʮλ����λ��ǧλ�ϵ����ĺ� */
#include <stdio.h>
#include <math.h>
int main()
{
    int ipt1;
    int ct=0;
    printf("������һ��4λ������");
    scanf("%d",&ipt1);
    ipt1=abs(ipt1);
    do{
        ct=ct+ipt1%10;
        ipt1/=10;
    } while(ipt1>=1);
    printf("�������λ��֮��Ϊ%d",ct);
}
