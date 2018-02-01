/*
    将5名学生的身高按升序排列（冒泡算法）
*/
#include <stdio.h>
#define NUMBER 8

int swap(int *x,int *y)
{
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}

int bubble_sort(int data[],int n)
{
    int i,j;
    j=n;
    while(j--)
    {
    for(i=0;i<j;i++)
    {
        if(data[i]>data[i+1])
            swap(&data[i],&data[i+1]);
    }
    }
}
int insert_sort(int data[],int n)
{
    int i,j,tmp;
    for(i=1;i<n-1;i++)
    {
        tmp = data[i];
        for(j=i;j>)
    }
}
int main(void)
{
    int i;
    int data[] = {162,173,180,166,190,143,186,139};
    sort(data,NUMBER);
    for(i=0;i<NUMBER;i++)
        printf("%2d  : %4d\n",i,data[i]);
}
