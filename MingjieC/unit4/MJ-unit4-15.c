#include <stdio.h>
/* Ϊ�žų˷������Ӻ��ݱ��� */

int main()
{
    int i,j;
    printf("   |");
    for(i=1;i<=9;i++){
        printf("%3d",i);
    }
    putchar('\n');
    printf("---------------------------------\n");
    for(i=1;i<=9;i++){
        printf("%d  |",i);
        for(j=1;j<=9;j++){
            printf("%3d",i*j);
        }
        putchar('\n');
    }
}
