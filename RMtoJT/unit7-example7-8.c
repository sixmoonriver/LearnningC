#include <stdio.h>
/* �����������*/

int main()
{
    /* iΪ�У�jΪ�У���0��ʼ��KΪ��Ȼ����lΪȦ����mΪҪѭ����Ȧ����nΪ����Ľ���*/
    int i,j,k,l,m,n,a[100][100];
    printf("���������Ľ�����");
    scanf("%d",&n);
    if(n%2==0)
        m=n/2;
    else
        m=n/2+1;

    k=1;
    for(l=0;l<m;l++)
    {
        /* �� */
        for(i=l,j=l;j<n-l;j++)
        {
            a[i][j] = k++;
        }
        /* �� */
       for(i=l+1,j=n-l-1;i<n-l;i++)
        {
            a[i][j]=k++;
        }
        /* �� */
        for(i=n-l-1,j=n-l-2;j>=l;j--)
        {
            a[i][j]=k++;
        }
        /* �� */
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

