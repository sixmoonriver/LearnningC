/*
    编写程序实现从键盘读入文件名，计算该文件的行数并显示在界面上
*/
#include <stdio.h>

int main()
{
    FILE *fp;
    int count=1;
    int ch;
    char filename[20];
    printf("请输入文件名：");
    scanf("%s",filename);
    fp = fopen(filename,"r");
    if((fp == NULL))
        printf("\a文件打开失败");
    else {
        while((ch = fgetc(fp)) != EOF)
        {
           // putchar(ch);
            if(ch == '\n')
                count++;
        }
        fclose(fp);
    }
    printf("文件%s的行数为：%d",filename,count);
}
