#include <stdio.h>
/* ����һ����������Ԫ�ظ���Ϊno��int��������vc���е������У�������������������v1�У� */
#define NUMBER 10

void intary_rcpy(int v1[], const int v2[],int no)
{
    int i,j,tmp;
    for(i=0;i<no;i++)
    {
        v1[i]=v2[0];
        for(j=0;j<no;j++)
        {
            if(i<1)
            {
                if(v1[i]<v2[j])
                v1[i]=v2[j];
            }
            else
            {
                if(v1[i]<v2[j] && v2[j]<v1[i-1])
                {
                    v1[i]=v2[j];
                }
            }

        }
    }
}

void main()
{
    int i;
    int vc1[NUMBER] = {0};
    int vc2[NUMBER] = {1,6,7,8,10,16,3,5,4,2};
    intary_rcpy(vc1,vc2,NUMBER);
    for(i=0;i<NUMBER;i++)
    {
        printf("vc1[%d] = %2d  vc2[%d] = %d\n",i,vc1[i],i,vc2[i]);

    }

}
