/*
    将圆周率的值写入二进制文件再进行读取
*/
#include <stdio.h>

int main()
{
    FILE *fp;
    double pi = 3.14159265358979323846;

    /*写入操作 */
    if((fp =fopen("PI.bin","wb")) == NULL)
        printf("\a写入文件失败！\n");
    else{
        fwrite(&pi,sizeof(double),1,fp);
        fclose(fp);
    }
    /* 读取操作 */
    if((fp = fopen("PI.bin","rb")) == NULL)
        printf("\a读取文件失败！\n");
    else{
        fread(&pi,sizeof(double),1,fp);
        printf("圆周率是%23.31f",pi);
        fclose(fp);
    }
}
