#include <stdio.h>
#define NUMBER 5

void  test1(void)
{
    int i=0;
    printf("test函数的变量i的值是%d\n",i);
}

void main()
{
    int vx[NUMBER]={};
    int i = 100;
    printf("main函数的变量i的值是%d\n",i);
    test1();
    for(i=0;i<NUMBER;i++){
        printf("vx[%d]= %d\n",i,vx[i]);
    }
}

