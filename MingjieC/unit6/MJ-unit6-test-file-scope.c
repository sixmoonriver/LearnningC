#include <stdio.h>
#define NUMBER 5

void  test1(void)
{
    int i=0;
    printf("test�����ı���i��ֵ��%d\n",i);
}

void main()
{
    int vx[NUMBER]={};
    int i = 100;
    printf("main�����ı���i��ֵ��%d\n",i);
    test1();
    for(i=0;i<NUMBER;i++){
        printf("vx[%d]= %d\n",i,vx[i]);
    }
}

