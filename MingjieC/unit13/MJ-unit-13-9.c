/*
    �ο�13-7�Ĵ��룬������Ӣ��Сд��ĸת��Ϊ��д��ĸ��ͬʱִ�и��Ʋ���
*/
#include <stdio.h>
#include <ctype.h>
int main()
{
    FILE *sfp,*dfp;
    int ch;
    char sname[30],dname[30];
    printf("������Դ�ļ�����");scanf("%s",sname);
    printf("������Ŀ���ļ�����");scanf("%s",dname);
    if((sfp = fopen(sname,"r")) == NULL)
        printf("\a��Դ�ļ�ʧ�ܣ�\n");
    else{
        if((dfp = fopen(dname,"w")) == NULL)
            printf("\a��Ŀ���ļ�ʧ��\n");
        while((ch = fgetc(sfp)) != EOF)
        {
            if(ch >= 'a' && ch <= 'z')
                ch = ch - 32;
            //ch = toupper(ch); //ʹ�ú����ķ�ʽ��
            putc(ch,dfp);
            putchar(ch);
        }
    }
}
