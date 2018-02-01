/*
    字符串的逆向保存
*/
#include <stdio.h>
void rev_string(char str[])
{
    int i=0,len=0;
    int tmp;
    while(str[i])
    {
        len++;
        i++;
    }
    printf("len = %d \n",len);
    for(i=0;i<(len/2);i++)
    {
        tmp=str[i];
        str[i] = str[len-1-i];
        str[len-1-i] = tmp;
    }

}

int main()
{
    char str2[40];
    printf("请输入一个字符串：");
    scanf("%s",str2);
    rev_string(str2);
    printf("逆向保存后的结果是%s\n",str2);
}
