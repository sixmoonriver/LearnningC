/*
    ��д�����嵥9-9�е�put_string��������ʹ��putchar������������printf
*/
#include <stdio.h>

void put_string(const char str[])
{
    int i=0;
    while(str[i])
    {
        printf("%c",str[i++]);

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
