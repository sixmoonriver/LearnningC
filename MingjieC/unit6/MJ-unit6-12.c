#include <stdio.h>
/*��дһ�γ���Ϊ�����е�ȫ��Ԫ�ط��侲̬�洢�ڣ���ȷ�����Ƕ�����ʼ��Ϊ0 ��̬�������û�г�ʼ����������Static���壬ֵ���������ֵ
�������0��Ҫô��ʼ����Ҫô��static ��������9�У�static int va[10]; int va[10] = {};
*/

int main()
{
    int i;
    int va[10];
    for(i=0;i<10;i++)
    {

        if(va[i] != 0)
            va[i] = 0;
        printf("va[%d] = %d\n",i,va[i]);
    }

}
