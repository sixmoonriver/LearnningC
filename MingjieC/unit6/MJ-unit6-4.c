#include <stdio.h>
/* 使用代码6-3中sqr函数创建另一个函数，返回int型整数的四次幂 */

int sqr(int x)
{
    return (x*x);
}
int pow4 (int x)
{
    return(sqr(x)*sqr(x));
}

int main()
{
    while(1){
        int ipt1;
        printf("请输入一个整数：");
        scanf("%d",&ipt1);
        printf("%d的平方是%d，四次方是%d\n",ipt1,sqr(ipt1),pow4(ipt1));
    }

}
