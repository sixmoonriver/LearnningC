#include <stdio.h>

int main()
{
    FILE *fp;
    char filename[20];
    int person[][3] ={
    { 1,170,60 },
    { 1,179,68 },
    { 1,175,70 },
    { 0,150,49 },
    { 0,177,67 },
    } ;
    printf("请输入要打开的文件名：");
    scanf("%s",filename);

    fp = fopen(filename,"w");
    if(fp == NULL)
        printf("\a文件打开失败");
    else{
        /* 文件操作 */
        int i,j;
        for(i=0;i<5;i++)
        {
           for(j=0;j<3;j++)
               fprintf(fp,"%d\n",person[i][j]);
        }
        }
        fclose(fp);
}
