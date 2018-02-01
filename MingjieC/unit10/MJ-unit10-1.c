/*
    编写如下函数，求出并设置y年m月d日的前一天或后一天的日期（能正确判断闰年）
*/
#include <stdio.h>
void yesterday(int *y,int *m,int *d)
{
    bool runnian=0
    if((*y%4==0&&*y%100!=0)||*y==400)
    {
        printf("This year is runnian\n");
        runnian=1;
    }

}
