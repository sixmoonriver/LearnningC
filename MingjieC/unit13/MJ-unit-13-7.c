/*
    �Ӽ��̶�ȡ�ļ�����������ļ����ַ�������ʾ�ڽ����ϡ�
*/
#include <stdio.h>

int main()
{
    FILE *fp;
    int count=0;
    char ch;
    char filename[20];
    printf("�������ļ�����");
    scanf("%s",filename);
    if((fp = fopen(filename,"r")) == NULL)
        printf("\a�ļ���ʧ��");
    else{
        while((ch = fgetc(fp)) != EOF)
        {
            putchar(ch);
            count++;
        }
        fclose(fp);
        printf("�ļ�%s���ַ���Ϊ%d",filename,count);
    }
}
