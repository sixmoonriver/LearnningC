/*
    ������9-3������str��������Ϊ��
    char str[] = "ABC\0DEF"
    �鿴�����ִ�н��
*/
#include <stdio.h>

int main(void)
{
    char ss[] = "ABCD\0EF";
    printf("�ַ���ss��ֵΪ%s.\n",ss);
}
