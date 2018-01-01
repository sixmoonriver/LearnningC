#include <stdio.h>
/* 编写一段程序，显示出整数层的金字塔形状 */

int main()
{
    int i,j,k,layer;
    printf("金字塔有几层：");
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
