#include <stdio.h>
/* �޸�5-8���룬�������Ԫ�ظ�������Ϊ8�� */

int main()
{
    int i,j,temp;
    int vx[8];
    for(i=0;i<8;i++){
        printf("vx[%d]:",i);
        scanf("%d",&vx[i]);
    }
    for(j=0;j<4;j++){
        temp = vx[j];
        vx[j] = vx[7-j];
        vx[7-j] = temp;
    }
    for(i=0;i<8;i++){
        printf("vx[%d] = %d\n",i,vx[i]);
    }
    return 0;
}
