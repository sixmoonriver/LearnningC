#include <stdio.h>
/* ��ʹ�õݹ飬�������º�����ʹ�䷵������n�Ľ׳� */
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
    printf("������һ��������");
    scanf("%d",&ipt1);
    printf("%d�Ľ׳��ǣ���ʹ�õݹ飩��%d\n",ipt1,fact(ipt1));
    printf("%d�Ľ׳��ǣ�ʹ�õݹ飩��%d\n",ipt1,fact2(ipt1));
}
