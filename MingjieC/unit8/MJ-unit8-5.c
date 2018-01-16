#include <stdio.h>
/* 不使用递归，定义如下函数，使其返回整数n的阶乘 */
int fact(int n)
{
    int i,m;
    m = 1;
    if(n>1){
        for(i=1;i<=n;i++)
        {
            m=m*i;
        }
        return (m);
    }
    else
        return(1);

}
int fact2(int n)
{
    if(n>0)
        return(n*fact2(n-1));
    else
        return (1);
}

int main()
{
    int ipt1;
    printf("请输入一个整数：");
    scanf("%d",&ipt1);
    printf("%d的阶乘是（不使用递归）：%d\n",ipt1,fact(ipt1));
    printf("%d的阶乘是（使用递归）：%d\n",ipt1,fact2(ipt1));
}
