#include <stdio.h>
/* ��дһ�γ���ʹ�ö�ά�������5��ѧ����3����Ŀ�����ġ���ѧ��Ӣ��ķ�����������´���
��1������ÿ�Ƶ���߷֡�
��2������ÿ��ѧ��3����Ŀ��ƽ���֣�*/

double aver3(int const vs[5][3])
{
    int i,j,sum=0;
    for(i=0;i<5;i++)
    {
       sum = 0;
       for(j=0;j<3;j++)
       {
           sum+=vs[i][j];
       }
       printf("�����%d��λͬѧ��ƽ�����ǣ�%3.1f\n",i+1,(double)sum/3);
    }
}
int topscope(int const vs[5][3])
{
    int i,j,top;
    for(j=0;j<3;j++)
    {
        top = 0;
        for(i=0;i<5;i++)
        {
            if(top < vs[i][j])
                top = vs[i][j];
        }
        printf("���Ź��ε���߷���%d\n",top);
    }
}
void main()
{
    int vs1[5][3] = {
        {15,60,67},
        {66,77,88},
        {99,88,77},
        {66,83,79},
        {46,66,34}};
    aver3(vs1);
    topscope(vs1);
}


