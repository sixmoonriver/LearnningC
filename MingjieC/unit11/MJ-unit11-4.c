/*
    ��ʹ���±꣬д��������嵥9-13�й�����ͬ�ĺ���
*/
#include <stdio.h>
#include <ctype.h>

void str_toupper(char *ptr)
{
    while(*ptr)
    {
        *ptr = toupper(*ptr);
        *ptr++;
    }
}
void str_tolower(char *ptr)
{
    while(*ptr)
    {
        *ptr = tolower(*ptr);
        *ptr++;
    }

}

int main(void)
{
    char ipt1[30];
    printf("������һ���ַ�����");
    scanf("%s",ipt1);
    str_toupper(ipt1);
    str_tolower(ipt1);
    printf("�ַ���ת����Ϊ��%s",ipt1);

}
