/*
    ����13-2���룬��дһ���Ӽ��̶�ȡ��������ߡ����أ�������Щ����д���ļ�
*/
#include <stdio.h>
int main()
{
    FILE *fp;
    char name[10];
    double height,weight;
    printf("��������������ߡ����أ�");
    scanf("%s%lf%lf",name,&height,&weight);
    if((fp = fopen("11.txt","w")) == NULL)
        printf("\a�ļ���ʧ��\n");
    else{
        fprintf(fp,"����    ���    ����\n");
        fprintf(fp,"%s %lf %lf",name,height,weight);
    }
}
