/*
    �����ַ���
*/
#include <stdio.h>

void put_string(const char str[])
{
    int i=0;
    while(str[i])
    {
        putchar(str[i++]);

    }
}

int main()
{
    char str1[40]={};
    printf("������һ���ַ�����");
    scanf("%s",str1);
    put_string(str1);
    putchar('\n');
}
