/*
    ��д���º��� ʵ����⺯��atoi��atol��atof��ͬ�Ĺ���
*/
#include <stdio.h>

int strtoi(const char *nptr)
{
    char *ptr ;
    ptr = nptr;
    while(*ptr++)
        (int)*ptr;
}

int main(void)
{
    char str[] = "12345";

    printf("str    = \"%s\"\n",str);
    printf("atoi(str) = %d\n",strtoi(str));
}

