#include <stdio.h>
/* 对代码4-18和4-19中和程序进行修改，分别显示出直角在左上方和右上方的直角三角形 */

int main()
{
    int i,j,layer;
    printf("三角形有几层：");
    scanf("%d",&layer);
    for(i=layer;i>0;i--){
        for(j=i;j>0;j--){
        printf("*");
        }
        printf("\n");
    }

}
