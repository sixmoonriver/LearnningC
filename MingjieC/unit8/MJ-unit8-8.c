#include <stdio.h>
/*
    从标准输入流复制到标准输出流。
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
    printf("共输入了%d行",cnt);
}
