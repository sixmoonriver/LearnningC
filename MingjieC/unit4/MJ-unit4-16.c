#include <stdio.h>
/* �Դ���4-17�еĳ�������޸ģ���ʾ��һ������ϳ��ĳ����� */
int main()
{
    int i,j,chang,kuan;
    puts("����������һ�������Ρ�");
    printf("һ�ߣ�");scanf("%d",&chang);
    printf("��һ�ߣ�");scanf("%d",&kuan);
    for(i=1;i<=kuan;i++){
        for(j=1;j<=chang;j++){
            printf("*");
        }
        putchar('\n');
    }
}
