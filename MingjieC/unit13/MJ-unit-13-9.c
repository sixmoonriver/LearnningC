/*
    参考13-7的代码，将所有英文小写字母转换为大写字母的同时执行复制操作
*/
#include <stdio.h>
#include <ctype.h>
int main()
{
    FILE *sfp,*dfp;
    int ch;
    char sname[30],dname[30];
    printf("请输入源文件名：");scanf("%s",sname);
    printf("请输入目标文件名：");scanf("%s",dname);
    if((sfp = fopen(sname,"r")) == NULL)
        printf("\a打开源文件失败！\n");
    else{
        if((dfp = fopen(dname,"w")) == NULL)
            printf("\a打开目标文件失败\n");
        while((ch = fgetc(sfp)) != EOF)
        {
            if(ch >= 'a' && ch <= 'z')
                ch = ch - 32;
            //ch = toupper(ch); //使用函数的方式；
            putc(ch,dfp);
            putchar(ch);
        }
    }
}
