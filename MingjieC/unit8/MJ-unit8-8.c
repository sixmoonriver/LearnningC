#include <stdio.h>
/*
    �ӱ�׼���������Ƶ���׼�������
*/
int main(void)
{
    int ch,cnt;
    cnt = 0;
    while((ch=getchar()) != EOF)
    {
        putchar(ch);
        if(ch=='\n')
            cnt++;
    }
    printf("��������%d��",cnt);
}
