#include <stdio.h>
/* 修改代码5-3，从头顺次为数组中的元素赋值5、4、3、2、1。*/

int main()
{
    int i,j;
    int vx[5];
    for(i=0;i<5;i++){
        vx[i]=5-i;
        printf("vx[%d] = %d\n",i,vx[i]);
    }
}

