#include <stdio.h>
/* 9宫格填1~9数字，不重复，第二行的3位数是第一行的2倍，第三行是第一行的3倍 书上算法*/

void main()
{
    int x,y,z,i,j,w;
    int n[3],a[9];
    for(x=1;x<=3;x++) /*第一行百位*/
    {
        for(y=1;y<=9;y++) /*第一行十位 */
        {
            if(x==y)
                continue;
            for(z=1;z<=9;z++) /*第一行个位 */
            {
                if(x==z || y==z)
                    continue;
                n[0] = x*100+y*10+z;
                n[1] = 2*n[0];
                n[2] = 3*n[0];
                if(n[2]>999)
                    continue;
                /*第一行存入*/
                a[0] = x;
                a[1] = y;
                a[2] = z;
                /* 第二、三行存入 */
                for(i=1;i<3;i++)
                    for(w=n[i],j=2;j>=0;j--)
                {
                    a[i*3+j] = w%10;
                    w/=10;
                }
                /* 不允许出现0 */
                for(i=3;i<9;i++)
                    if(a[i]==0)
                        break;
                if(i<9) /* 如果出现数字0，则直接进入下一轮处理；*/
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
                printf("这三个数分别是：\n%d\n%d\n%d\n\n",n[0],n[1],n[2]);
            }
        }
    }
}
