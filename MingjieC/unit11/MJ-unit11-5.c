/*
    ��ʹ���±����������д���º�����ɾ���ַ�����str�е����������ַ� OK
*/

#include <stdio.h>

void del_digit(char *str)
{
    char *ptr = str;
    while(*str++)
    {
        if(*str < '0' || *str > '9')
         {
            *ptr++ = *str;
         }
    }
}

int main(void)
{
    char ipt1[30];
    printf("������һ���ַ�����");
    scanf("%s",ipt1);
    del_digit(ipt1);
    printf("������ַ���Ϊ��%s\n",ipt1);

}
