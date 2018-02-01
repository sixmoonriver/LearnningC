/*
    编写如下函数，使字符串str显示no次
*/
#include <stdio.h>
void put_stringn(const char str[],int no)
{
    int i=0;
    for(i=0;i<no;i++)
    {
        int j=0;
        while(str[j])
        {
            putchar(str[j++]);
        }
    }

}
int main()
{
    char str1[40]={};
    printf("请输入一个字符串：");
    scanf("%s",str1);
    put_stringn(str1,3);
    putchar('\n');
}

