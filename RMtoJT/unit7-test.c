#include <stdio.h>
#include <string.h>
#define N 100
int main()
{
    int result,i,j;
    char str1[N],str2[N],str3[N];
    puts("������һ���ַ�����");
    gets(str1);
    puts("������һ���ַ�����");
    gets(str2);
    //strcpy(str1,str2);
    //strlwr(str2);
    for(i=0;str1[i] != '\0';i++)
        ;
    for(j=0;str2[j]!='\0';i++,j++)
        str1[i] = str2[j];
    str1[i] = '\0';
    /* result=strcmp(str2,str3);
    strcat(str3,str2);
    printf("str1�ĳ����ǣ�%d\nstr2�ĳ����ǣ�%d\n",strlen(str1),strlen(str2)); */
    printf("���Ӻ�str1�������ǣ�%s\n,str2�������ǣ�%s\n",str1,str2);
    //printf("�ȽϽ���ǣ�%d",result);
}
