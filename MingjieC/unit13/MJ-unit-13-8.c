/*
    参照13-7的代码复制文件的同时显示文件内容
*/
#include <stdio.h>

int main()
{
    FILE *sfp,*dfp;
    char sname[20],dname[20];
    int ch;
    printf("请输入源文件名：");
    scanf("%s",sname);
    printf("请输入目标文件名：");
    scanf("%s",dname);
    if((sfp = fopen(sname,"r")) == NULL)
        printf("\a打开源文件失败！\n");
    else{
        if((dfp = fopen(dname,"w")) == NULL )
            printf("\a打开目标文件失败！\n");
        else{
            while((ch = fgetc(sfp) )!= EOF ){
                putchar(ch);
                putc(ch,dfp);
            }
            fclose(dfp);
        }
    fclose(sfp);
    }

};
