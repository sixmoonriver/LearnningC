#include <stdio.h>
/* 使用for语句对代码清单4-6中和程序进行修改，计算1到5的和 */

int main()
{
    int i,sum1=0;
    for(i=0;i<=100;i++){
        sum1+=i;
    }
    printf("1到5的和是：%d",sum1);
}

