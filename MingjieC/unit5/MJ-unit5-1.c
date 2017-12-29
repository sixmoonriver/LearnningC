#include <stdio.h>
/* 对代码5-3进行修改，人头顺序为数组中的元素赋值0~4；*/

int main()
{
    int i;
    int vx[5];
    for(i=0;i<5;i++){
        vx[i]=i;
        printf("vx[%d] = %d\n",i,vx[i]);
    }
}
