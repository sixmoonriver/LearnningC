#include <stdio.h>
/* 输出螺旋矩阵；*/

int main()
{
    /* i为行，j为列，从0开始；K为自然数，l为圈数，m为要循环的圈数，n为输入的阶数*/
    int i,j,k,l,m,n,a[100][100];
    printf("请输入矩阵的阶数：");
    scanf("%d",&n);
    if(n%2==0)
        m=n/2;
    else
        m=n/2+1;

    k=1;
    for(l=0;l<m;l++)
    {
        /* 上 */
        for(i=l,j=l;j<n-l;j++)
        {
            a[i][j] = k++;
        }
        /* 右 */
       for(i=l+1,j=n-l-1;i<n-l;i++)
        {
            a[i][j]=k++;
        }
        /* 下 */
        for(i=n-l-1,j=n-l-2;j>=l;j--)
        {
            a[i][j]=k++;
        }
        /* 左 */
        for(i=n-l-2,j=l;i>l;i--)
        {
             a[i][j]=k++;

        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            printf("%4d",a[i][j]);
        puts("\n");
    }

}

