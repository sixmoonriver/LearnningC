#include <stdio.h>
/* ��ʾ����ߺͱ�׼���صĶ��ձ���ʾ��߷�Χ�ͼ�������������ֵ���п��ƣ���׼���ؾ�ȷ��С�����2λ */

int main()
{
    int stt1,ed1,interval;
    printf("��ʼ��ֵ��");scanf("%d",&stt1);
    printf("������ֵ��");scanf("%d",&ed1);
    printf("�����ֵ��");scanf("%d",&interval);

    for(stt1;stt1<=ed1;){
        printf("%dcm    %4.2fkg\n",stt1,(stt1-100)*0.9);
        stt1+=interval;
    }
}

