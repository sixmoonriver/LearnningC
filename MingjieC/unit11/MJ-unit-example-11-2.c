/*
    ������ʵ�ֵ��ַ�������ָ��ʵ�ֵ��ַ�������ͬ��
*/
#include <stdio.h>
int main()
{
    int i;
    char str[] = "ABC";
    char *ptr = "123";

    for(i=0;str[i];i++)
        putchar(str[i]);
    putchar('\n');
    for(i=0;ptr[i];i++)
        putchar(ptr[i]);
    putchar('\n');

    printf("str = \"%s\"\n",str);
    printf("ptr = \"%s\"\n",ptr);

}
