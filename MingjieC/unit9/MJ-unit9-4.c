/*
    ��д���º����������ַ���Str���ַ�c�ĸ�����û���򷵻�0��
*/

#include <stdio.h>

int str_chnum(const char str[],int c)
{
    int num=0;
    int i=0;
    while(str[i] != 0)
    {
        if(str[i] == c)
            num++;
        i++;
    }

    return (num);
}

int main(void)
{
    char str1[40]={};
    printf("������һ���ַ�����");
    scanf("%s",str1);
    printf("�ַ���%s�к���%d��C\n",str1,str_chnum(str1,'c'));

}
