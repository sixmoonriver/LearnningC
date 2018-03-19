#include <stdio.h>
#include <string.h>
#define N 100
/* 将两个字符串连接起来，不要使用函数strcat */

void strlj(char a[],char b[])
{
    int i,j,l;
    i = strlen(a);
    j = strlen(b);
    for(l=0;l<=j;l++)
        a[i+l] = b[l];
}
void strlj2(char a[],char b[])
{
    int i,j;
    i=j=0;
    while(a[i] != '\0')
    {
        i++;
    }
    while(b[j] != '\0')
    {
        a[i] = b[j];
        i++;
        j++;
    }

}

int main()
{
    int i,j;
    i=j=0;
    char s3[N],s4[N];
    char s1[] = "Hello,Docker!";
    char s2[] = "Hi,nihao";
    strcpy(s3,s1);
    strcpy(s4,s1);
    strlj(s3,s2);
    strlj2(s4,s2);

    while(s3[i])
    {
        printf("%c",s3[i]);
        i++;
    }
}
