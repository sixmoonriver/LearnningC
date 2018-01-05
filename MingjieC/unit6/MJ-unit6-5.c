#include <stdio.h>
/* 创建一个函数，连续发出no次警报 */

void alert(int no)
{
    int i;
    while(no-->0){
         putchar('\a');
    }
}

void main()
{
    int cs1;
    printf("请输入报警的次数：");
    scanf("%d",&cs1);
    alert(cs1);
}
