#include <stdio.h>
/*
    �����׼����������г��ֵ����ֵ��ַ��� No2
*/
void prt1(int x)
{
    int j;
    for(j=0;j<x;j++)
        printf("*");
}

int main()
{
    int i,ch;
    int cnt[10] = {0};
    while(1)
    {
        ch = getchar();
        if(ch==EOF) break;

        if(ch >= '0' && ch <='9')
            cnt[ch-'0']++;
    }
    printf("EOF = %d\n",EOF);
    for(i=0;i<10;i++)
    {
        printf("\n'%d' : ",i);
        prt1(cnt[i]);
    }

}
