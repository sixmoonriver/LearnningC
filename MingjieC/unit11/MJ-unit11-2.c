/*
    ��д���º��������ַ���Str�к����ַ�c,(���ж�������ȳ��ֵ�Ϊ׼��,����ָ��
*/
#include <stdio.h>

char *str_chr(const char *str,int c)
{
        char *t = str;
        while(*t)
        {
            if(*t==c)
                return (t);
            str++;
        }
        return (NULL);
}

int main(void)
{
    char str[100];
    printf("������һ���ַ�����");
    scanf("%s",str);
    //str_chr(str,'b');
    printf("str�ַ����е�b:%d",*str_chr(str,'b'));
    putchar('\n');
}
