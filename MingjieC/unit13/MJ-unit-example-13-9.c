/*
    ��Բ���ʵ�ֵд��������ļ��ٽ��ж�ȡ
*/
#include <stdio.h>

int main()
{
    FILE *fp;
    double pi = 3.14159265358979323846;

    /*д����� */
    if((fp =fopen("PI.bin","wb")) == NULL)
        printf("\aд���ļ�ʧ�ܣ�\n");
    else{
        fwrite(&pi,sizeof(double),1,fp);
        fclose(fp);
    }
    /* ��ȡ���� */
    if((fp = fopen("PI.bin","rb")) == NULL)
        printf("\a��ȡ�ļ�ʧ�ܣ�\n");
    else{
        fread(&pi,sizeof(double),1,fp);
        printf("Բ������%23.31f",pi);
        fclose(fp);
    }
}
