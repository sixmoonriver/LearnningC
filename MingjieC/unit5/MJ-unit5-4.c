#include <stdio.h>
/* �Դ���5-6�еĳ�������޸ģ�������va�е�Ԫ�ذ��յ����Ƶ�����vb�� */

int main()
{
    int i ;
    int va[5] = {15,20,30};
    int vb[5];
    for(i=0;i<5;i++){
        vb[4-i]=va[i];
    }
    for(i=0;i<5;i++){
        printf("va[%d] = %d  vb[%d] = %d\n",i,va[i],i,vb[i]);
    }
    return 0;
}
