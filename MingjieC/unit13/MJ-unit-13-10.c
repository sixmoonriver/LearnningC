/*
    �ο�13-7���룬������Ӣ�Ĵ�д��ĸתΪСд��ͬʱ���ƣ�
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
            if(ch >= 'A' && ch <= 'Z')
                ch = ch + 32;
            //ch = tolower(ch); //�ú�����ʵ��
            putc(ch,dfp);
            putchar(ch);
        }
    }
}
