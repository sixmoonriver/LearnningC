#include <stdio.h>
/* �޸Ĵ���5-3����ͷ˳��Ϊ�����е�Ԫ�ظ�ֵ5��4��3��2��1��*/

int main()
{
    int i,j;
    int vx[5];
    for(i=0;i<5;i++){
        vx[i]=5-i;
        printf("vx[%d] = %d\n",i,vx[i]);
    }
}

