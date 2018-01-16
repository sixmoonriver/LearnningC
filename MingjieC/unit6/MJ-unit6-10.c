#include <stdio.h>
/* 创建一个函数，计算2行3列的矩阵ma和3行2列的矩阵mb的乘积，把结果保存到2行2列的矩阵mc中 */

void mul(const int ma[2][3],const int mb[3][2],int mc[2][2])
{
/* 编写一段程序，求出矩阵x和y的积
x=[1 2 3
   4 5 6 ]
y = [1 5
     5 3
     8 1]

    int vx[2][3]= {{1,2,3},{4,5,6}};
    int vy[3][2]={{1,5},{5,3},{8,1}};
    int vz[2][2]={0}; */
    int i,j,k,tmp1; /* i为矩阵ma的行，j为矩阵mb的行，k为矩阵mc的列；*/
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

