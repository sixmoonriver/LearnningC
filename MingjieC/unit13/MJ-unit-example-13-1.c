/*
    �򿪺͹ر��ļ�
*/
#include <stdio.h>

int main()
{
    FILE *fp;
    char s1[20];
    double height,weight;
    fp = fopen("123.txt","r");

    if(fp == NULL)
        printf("\a�ļ���ʧ�ܡ�\n");
    else{
        /*ִ���ļ����� */
        while(fscanf(fp,"%s%lf%lf",s1,&height,&weight)==3)
        {
            printf("������%s ��ߣ�%5.1f ���أ�%4.1f\n",s1,height,weight);
        };
        fclose(fp);
    }

    return (0);

}
