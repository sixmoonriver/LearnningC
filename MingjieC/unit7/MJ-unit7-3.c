#include <stdio.h>
/* 编写set函数，返回将无符号整数x的第pos位(从右往左数？)设为1后的值
算法1：将第pose位与一个第pose位的为1其它位为0的相或即可
算法2：将第pose位置为1

*/
unsigned set1(unsigned x,int pos)
{
    unsigned int n=1;
    n = n << (pos-1);
    x = (x | n);
    return (x);
}
unsigned set0(unsigned x ,int pos)
{
    unsigned int n=1;
    n = n << (pos-1);
    x = x & (~n);
    return (x);
}
unsigned setfan(unsigned x ,int pos)
{
    unsigned int n=1;
    n = n << (pos-1);
    if (x & n)
        x = x & (~n);
    else
        x = x | n;
    return (x);
}
int main()
{
    unsigned int nx,ws1;
    printf("请输入一个整数：");
    scanf("%u",&nx);
    printf("请输入需要设置的位数：");
    scanf("%u",&ws1);
    //set(nx,ws1);
    printf("%d在%d设置为1后的值是：%u，\n设置为0后的值为：%u，\n取反后的值是%u\n",nx,ws1,set1(nx,ws1),set0(nx,ws1),setfan(nx,ws1));
}
