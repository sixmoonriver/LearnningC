/*
    ����13-7�Ĵ��븴���ļ���ͬʱ��ʾ�ļ�����
*/
#include <stdio.h>

int main()
{
    FILE *sfp,*dfp;
    char sname[20],dname[20];
    int ch;
    printf("������Դ�ļ�����");
    scanf("%s",sname);
    printf("������Ŀ���ļ�����");
    scanf("%s",dname);
    if((sfp = fopen(sname,"r")) == NULL)
        printf("\a��Դ�ļ�ʧ�ܣ�\n");
    else{
        if((dfp = fopen(dname,"w")) == NULL )
            printf("\a��Ŀ���ļ�ʧ�ܣ�\n");
        else{
            while((ch = fgetc(sfp) )!= EOF ){
                putchar(ch);
                putc(ch,dfp);
            }
            fclose(dfp);
        }
    fclose(sfp);
    }

};
