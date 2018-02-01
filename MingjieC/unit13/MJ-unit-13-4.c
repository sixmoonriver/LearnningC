/*
    参照13-2代码，缩写一个从键盘读取姓名、身高、体重，并将这些数据写入文件
*/
#include <stdio.h>
int main()
{
    FILE *fp;
    char name[10];
    double height,weight;
    printf("请输入姓名、身高、体重：");
    scanf("%s%lf%lf",name,&height,&weight);
    if((fp = fopen("11.txt","w")) == NULL)
        printf("\a文件打开失败\n");
    else{
        fprintf(fp,"姓名    身高    体重\n");
        fprintf(fp,"%s %lf %lf",name,height,weight);
    }
}
