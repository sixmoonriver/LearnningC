/*
    ��ʹ���±����������д���к����������ַ���str���ַ�c�ĸ������粻���ڣ���Ϊ0
*/
#include <stdio.h>
int str_chnum(const char *str,char c)
{
    int ct = 0 ;
    char *ptr = str;
    while(*str++)
    {
        if(*str == 'c')
            ct++;
    }
    return (ct);
}

int main(void)
{
    char ipt1[10];
    printf("������һ���ַ�����");
    scanf("%s",ipt1);
    printf("�ַ���%s�к���%d��c",ipt1,str_chnum(ipt1,'c'));
}
