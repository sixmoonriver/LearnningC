/*
    ��ʹ���±��������д��9-9��put_string������ͬ�Ĺ���
*/
#include <stdio.h>

void put_string(const char *str)
{
    putchar(*str);
    while(*str++)
        putchar(*str);

}

int main(void)
{
    char str[100];
    printf("������һ���ַ�����");
    scanf("%s",str);

    put_string(str);
    putchar('\n');
}

