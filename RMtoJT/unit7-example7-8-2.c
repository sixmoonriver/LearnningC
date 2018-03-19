#include <stdio.h>
/* 9宫格填1~9数字，不重复，第二行的3位数是第一行的2倍，第三行是第一行的3倍 老姚算法 */

/* 从3位数中分离出个、十、百位数的函数 */
int get_g(int ipt1)
{
    return ipt1%10;
}

int get_s(int ipt2)
{
    ipt2/=10;
    return ipt2%10;
}
int get_b(int ipt3)
{
    ipt3/=100;
    return ipt3%10;
}

int main()
{
    int i,j,k,q,l;
    i=j=k=q=0;
    int v[9]={};
    for(i=123;i<333;i++) /* 数字不能为0，确定最小值和最大值，因为第三行最大为999，第一行最大为333（329） */
    {
        q=0;
        v[0] = get_b(i);
        v[1] = get_s(i);
        v[2] = get_g(i);
        v[3] = get_b(2*i);
        v[4] = get_s(2*i);
        v[5] = get_g(2*i);
        v[6] = get_b(3*i);
        v[7] = get_s(3*i);
        v[8] = get_g(3*i);

        for(j=0;j<9;j++)
        {
            for(k=j+1;k<9;k++)
            if(v[j] == v[k] || v[j] == 0 || v[k] == 0)
             {
                 q=1;
                 break;
             }
            if(q==1)
               break;
        }
        if(q==1)
            {
             continue;
            }

        else
            printf("%5d%5d%5d\n",i,2*i,3*i);
    }
}
