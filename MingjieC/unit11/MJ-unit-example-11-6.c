#include <stdio.h>

size_t str_len(const char *s)
{
    size_t len=0;
    while(*s++)
    {
        len++;
    }
    return (len);
}

int main()
{
    char ipt1[100];
    printf("������һ���ַ�����");
    scanf("%s",ipt1);
    printf("%s�ַ����ĳ����ǣ�%d\n",ipt1,str_len(ipt1));

}
