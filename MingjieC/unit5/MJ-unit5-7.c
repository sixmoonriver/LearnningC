#include <stdio.h>
/* 编写一段程序，求出矩阵x和y的积
x=[1 2 3
   4 5 6 ]
y = [1 5
     5 3
     8 1]
*/

int main()
{
    int vx[2][3]= {{1,2,3},{4,5,6}};
    int vy[3][2]={{1,5},{5,3},{8,1}};
    int vz[2][2]={0};
    int i,j,k,tmp1,tmp2; /* i为矩阵vx的行，j为矩阵vy的行，k为矩阵vz的列；*/
    for(i=0;i<2;i++){
        for(k=0;k<2;k++){
            for(j=0;j<3;j++){
                tmp1=vx[i][j]*vy[j][k];
                vz[i][k]+=tmp1;
            }
        }
    }
for(i=0;i<2;i++){
    for(k=0;k<2;k++){
        printf("%d  ",vz[i][k]);
    }
    putchar('\n');
}
}

