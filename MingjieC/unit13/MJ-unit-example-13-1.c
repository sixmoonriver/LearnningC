/*
    打开和关闭文件
*/
#include <stdio.h>

int main()
{
    FILE *fp;
    char s1[20];
    double height,weight;
    fp = fopen("123.txt","r");

    if(fp == NULL)
        printf("\a文件打开失败。\n");
    else{
        /*执行文件操作 */
        while(fscanf(fp,"%s%lf%lf",s1,&height,&weight)==3)
        {
            printf("姓名：%s 身高：%5.1f 体重：%4.1f\n",s1,height,weight);
        };
        fclose(fp);
    }

    return (0);

}
