#include <stdio.h>
/* ����һ������������2��3�еľ���ma��3��2�еľ���mb�ĳ˻����ѽ�����浽2��2�еľ���mc�� */

void mul(const int ma[2][3],const int mb[3][2],int mc[2][2])
{
/* ��дһ�γ����������x��y�Ļ�
x=[1 2 3
   4 5 6 ]
y = [1 5
     5 3
     8 1]

    int vx[2][3]= {{1,2,3},{4,5,6}};
    int vy[3][2]={{1,5},{5,3},{8,1}};
    int vz[2][2]={0}; */
    int i,j,k,tmp1; /* iΪ����ma���У�jΪ����mb���У�kΪ����mc���У�*/
    for(i=0;i<2;i++){
        for(k=0;k<2;k++){
            for(j=0;j<3;j++){
                tmp1=ma[i][j]*mb[j][k];
                mc[i][k]+=tmp1;
            }
        }
    }
}

int vx[2][3]= {{1,2,3},{4,5,6}};
int vy[3][2]={{1,5},{5,3},{8,1}};

void main()




{
    int i,j;
    int vz[2][2] = {};
    mul(vx,vy,vz);
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("vz[%d][%d] = %d\n", i,j,vz[i][j]);
        }
    }
}

