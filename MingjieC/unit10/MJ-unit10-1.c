/*
    ��д���º��������������y��m��d�յ�ǰһ����һ������ڣ�����ȷ�ж����꣩
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
