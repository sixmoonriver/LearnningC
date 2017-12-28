#include <stdio.h>
/* 读取一个整数，并纵向显示出读取到的整数个*，如果输入的0以下的整数，则不显示任何内容 */

int main()
{
    int ipt1,i=0;
    printf("请输入一个整数：");
    scanf("%d",&ipt1);
    while(i<ipt1){
        printf("*\n");
        i++;
    }

}
