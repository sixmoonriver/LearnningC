#include <stdio.h>
/* 编写set_n函数，返回将无符号整数x的第POS位开始的n位设为1后的值；设为0 ，取反的值
flag 取值范围0 1 2;
*/

unsigned int setgeneral(unsigned int num,int pos,int lx,int flag)
{
    unsigned n=1,i,aftnum;
    for(i=0;i<lx;i++)
    {
        n = 1;
        n = n << (pos - 1 + i);
        if(flag==0)
            num = num & (~n);
        else if(flag==1)
            num = num | n;
        else if(flag==2)
        {
            if(num & n)
                num = num & (~n);
            else
                num = num | n;
        }

    }
    return (num);
}
int main()
{
    int ipt1,ws1,dua,what;
    printf("请输入一个无符号整数：");
    scanf("%d",&ipt1);
    printf("请输入开始的位数：");
    scanf("%d",&ws1);
    printf("请输入要操作的位数：");
    scanf("%d",&dua);
    printf("请输入要置位：0、1、2：");
    scanf("%d",&what);
    printf("%d从%d开始连续%d次置为%d后的值是：%d",ipt1,ws1,dua,what,setgeneral(ipt1,ws1,dua,what));

}
