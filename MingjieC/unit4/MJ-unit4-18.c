#include <stdio.h>
/* ��дһ�γ�����ʾ��������Ľ�������״ */

int main()
{
    int i,j,k,layer;
    printf("�������м��㣺");
    scanf("%d",&layer);
    for(i=1;i<=layer;i++){
        for(k=1;k<=(layer-i);k++){
            printf(" ");
            }
        for(j=1;j<=(i*2-1);j++){

            printf("*");
        }
        putchar('\n');
    }
}
