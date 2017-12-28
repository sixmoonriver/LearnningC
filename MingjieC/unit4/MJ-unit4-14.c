#include <stdio.h>
/* 显示出身高和标准体重的对照表。显示身高范围和间隔由输入的整数值进行控制，标准体重精确到小数点后2位 */

int main()
{
    int stt1,ed1,interval;
    printf("开始数值：");scanf("%d",&stt1);
    printf("结束数值：");scanf("%d",&ed1);
    printf("间隔数值：");scanf("%d",&interval);

    for(stt1;stt1<=ed1;){
        printf("%dcm    %4.2fkg\n",stt1,(stt1-100)*0.9);
        stt1+=interval;
    }
}

