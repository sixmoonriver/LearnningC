#include <stdio.h>
/* �Դ���4-18��4-19�кͳ�������޸ģ��ֱ���ʾ��ֱ�������Ϸ������Ϸ���ֱ�������� */

int main()
{
    int i,j,layer;
    printf("�������м��㣺");
    scanf("%d",&layer);
    for(i=layer;i>0;i--){
        for(j=i;j>0;j--){
        printf("*");
        }
        printf("\n");
    }

}
