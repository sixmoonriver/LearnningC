/*
    参考13-7代码，将所有英文大写字母转为小写，同时复制；
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
            if(ch >= 'A' && ch <= 'Z')
                ch = ch + 32;
            //ch = tolower(ch); //用函数来实现
            putc(ch,dfp);
            putchar(ch);
        }
    }
}
