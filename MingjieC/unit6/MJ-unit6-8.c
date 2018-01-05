#include <stdio.h>
/* 创建一个函数，对元素个数为no的int型数组vc进行倒序排列 */
#define NUMBER 10

void rev_intary(int vc[],int no)
{
    int i,j,tmp;
    for(j=0;j<no;j++)
    {
        vc[no] = vc[j];
        for(i=j+1;i<no;i++)
        {
            if (vc[no] < vc[i])
            {
                vc[no] = vc[i];
                vc[i]=vc[j];
                vc[j]=vc[no];
            }

        }
    }
}

int main()
{
    int i;
    int vc1[NUMBER+1] = {1,6,7,8,10,16,3,5,4,2};
    rev_intary(vc1,NUMBER);
    for(i=0;i<NUMBER;i++)
        printf("vc[%d] = %d\n",i,vc1[i]);
}
