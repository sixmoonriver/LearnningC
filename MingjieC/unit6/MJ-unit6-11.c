#include <stdio.h>
/* 编写一段程序，使用二维数组操作5名学生的3个科目（语文、数学、英语）的分数，完成如下处理
例1：计算每科的最高分。
例2：计算每名学生3个科目的平均分；*/

double aver3(int const vs[5][3])
{
    int i,j,sum=0;
    for(i=0;i<5;i++)
    {
       sum = 0;
       for(j=0;j<3;j++)
       {
           sum+=vs[i][j];
       }
       printf("编号是%d这位同学的平均分是：%3.1f\n",i+1,(double)sum/3);
    }
}
int topscope(int const vs[5][3])
{
    int i,j,top;
    for(j=0;j<3;j++)
    {
        top = 0;
        for(i=0;i<5;i++)
        {
            if(top < vs[i][j])
                top = vs[i][j];
        }
        printf("这门功课的最高分是%d\n",top);
    }
}
void main()
{
    int vs1[5][3] = {
        {15,60,67},
        {66,77,88},
        {99,88,77},
        {66,83,79},
        {46,66,34}};
    aver3(vs1);
    topscope(vs1);
}


