/*
    ��д����ʵ�ִӼ��̶����ļ�����������ļ�����������ʾ�ڽ�����
*/
#include <stdio.h>

int main()
{
    FILE *fp;
    int count=1;
    int ch;
    char filename[20];
    printf("�������ļ�����");
    scanf("%s",filename);
    fp = fopen(filename,"r");
    if((fp == NULL))
        printf("\a�ļ���ʧ��");
    else {
        while((ch = fgetc(fp)) != EOF)
        {
           // putchar(ch);
            if(ch == '\n')
                count++;
        }
        fclose(fp);
    }
    printf("�ļ�%s������Ϊ��%d",filename,count);
}
