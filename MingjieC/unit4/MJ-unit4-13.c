#include <stdio.h>
/* 编写一段程序，像下面这样根据输入整数后，循环显示1234567890，显示的位数和输入的整数值相同；*/

int main()
{
    int ipt1,i,j=0;
    printf("请输入一个整数：");
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

