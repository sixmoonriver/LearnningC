#include <stdio.h>
/* ��дһ�γ���������������������������ѭ����ʾ1234567890����ʾ��λ�������������ֵ��ͬ��*/

int main()
{
    int ipt1,i,j=0;
    printf("������һ��������");
    scanf("%d",&ipt1);
    for(i=1;i<=ipt1;){
    if(j>=9){
        printf("%d",j);
        j=0;
    }
    printf("%d",j);
    j++;
    i++;
    }
}

