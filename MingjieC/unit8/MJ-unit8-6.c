#include <stdio.h>
/* 编写如下函数，求出从n个不同整数中取出r个整数的组合数 */
int combination(int n,int r)
{
    int i,m;
    m = 1;
    for(i=n;i>r;i--)
        m= m*i;
    return (m);
}

int main()
{
    int ipt1,ipt2;
    printf("请输入整数的个数：");
    scanf("%d",&ipt1);
        printf("请输入取出的个数：");
    scanf("%d",&ipt2);
    printf("从%d中取出%d个数有%d种取法\n",ipt1,ipt2,combination(ipt1,ipt2));
}
