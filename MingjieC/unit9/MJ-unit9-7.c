/*
    ����9-9�ĺ����������ַ������������
*/
#include <stdio.h>
void put_rstring(const char str[])
{
    int i=0;
    int len=0;
    while(str[i])
    {
        len++;
        i++;
    }
    printf("len = %d\n",len);
    for(i=0;i<len;i++)
        putchar(str[len-1-i]);
}
int main()
{
    char str1[40]={};
    printf("������һ���ַ�����");
    scanf("%s",str1);
    put_rstring(str1);
    putchar('\n');
}


