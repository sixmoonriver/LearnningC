#include <stdio.h>
/* ����һ������������Ԫ�ظ���Ϊno��int ����VC�е���Сֵ */

int min_of(int vc[],int no)
{
    int i,min;
    for(i=0;i<no;i++)
    {
        min = vc[0];
        if (vc[i] > min){
            min = vc[i];
        }
    }
    return min;
}

void main()
{
    int vc[10] = {111,235,366,136,190,186,183,186,199};
    min_of(vc,10);
}
