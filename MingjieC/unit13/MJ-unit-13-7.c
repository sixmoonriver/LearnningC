/*
    从键盘读取文件名，计算该文件的字符数并显示在界面上。
*/
#include <stdio.h>

int main()
{
    FILE *fp;
    int count=0;
    char ch;
    char filename[20];
    printf("请输入文件名：");
    scanf("%s",filename);
    if((fp = fopen(filename,"r")) == NULL)
        printf("\a文件打开失败");
    else{
        while((ch = fgetc(fp)) != EOF)
        {
            putchar(ch);
            count++;
        }
        fclose(fp);
        printf("文件%s的字符数为%d",filename,count);
    }
}
