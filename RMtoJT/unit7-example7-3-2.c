#include <stdio.h>
/* 9������1~9���֣����ظ����ڶ��е�3λ���ǵ�һ�е�2�����������ǵ�һ�е�3�� �����㷨*/

void main()
{
    int x,y,z,i,j,w;
    int n[3],a[9];
    for(x=1;x<=3;x++) /*��һ�а�λ*/
    {
        for(y=1;y<=9;y++) /*��һ��ʮλ */
        {
            if(x==y)
                continue;
            for(z=1;z<=9;z++) /*��һ�и�λ */
            {
                if(x==z || y==z)
                    continue;
                n[0] = x*100+y*10+z;
                n[1] = 2*n[0];
                n[2] = 3*n[0];
                if(n[2]>999)
                    continue;
                /*��һ�д���*/
                a[0] = x;
                a[1] = y;
                a[2] = z;
                /* �ڶ������д��� */
                for(i=1;i<3;i++)
                    for(w=n[i],j=2;j>=0;j--)
                {
                    a[i*3+j] = w%10;
                    w/=10;
                }
                /* ���������0 */
                for(i=3;i<9;i++)
                    if(a[i]==0)
                        break;
                if(i<9) /* �����������0����ֱ�ӽ�����һ�ִ���*/
                    continue;
                for(i=0;i<8;i++)
                {
                    for(j=i+1;j<9;j++)
                        if(a[i] == a[j])
                            break;
                    if(j<9)
                        break;
                }
                if(i<8)
                    continue;
                printf("���������ֱ��ǣ�\n%d\n%d\n%d\n\n",n[0],n[1],n[2]);
            }
        }
    }
}
