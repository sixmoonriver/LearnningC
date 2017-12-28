#include <stdio.h>
/* 对代码4-17中的程序进行修改，显示出一个横向较长的长方形 */
int main()
{
    int i,j,chang,kuan;
    puts("让我们来画一个长方形。");
    printf("一边：");scanf("%d",&chang);
    printf("另一边：");scanf("%d",&kuan);
    for(i=1;i<=kuan;i++){
        for(j=1;j<=chang;j++){
            printf("*");
        }
        putchar('\n');
    }
}
