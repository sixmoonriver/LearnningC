/*
    �����������ʼ����ֵ�õ����ַ���str��ɿ��ַ���
    char str[] = "ABC";
*/
#include <stdio.h>
int main(void)
{
    int i;
    char str[] = "ABC";
    str[0] = '\0';
    printf("�ַ���str��ֵ�ǣ�%s\n",str);
    //for(i=0;i<sizeof(str);i++)
    //    str[i] = " ";
}
