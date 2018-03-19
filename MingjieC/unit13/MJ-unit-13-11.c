/*
    编程读取有10个double型元素的数组的所有元素值；
*/
#include <stdio.h>
#define CT 10
int main()
{
    FILE *fp;
    double a1[] = {
    3.14616167777,
    3614.1777888,
    146356785.678111,
    137889.1780,
    13778.42347821,
    167.007889,
    12367.3907,
    9048.2488,
    1378.8844,
    9843367.1367,
    };
    double a2[CT];
    /* 写入 */
    if((fp = fopen("a.bin","wb")) == NULL)
        printf("\a打开文件失败！\n");
    else{
        fwrite(a1,sizeof(double),CT,fp);
        fclose(fp);
    }
    /* 读取 */
    if((fp = fopen("a.bin","rb")) == NULL)
        printf("\a打开文件失败！\n");
    else{
        fread(a2,sizeof(double),CT,fp);
        fclose(fp);
    }
    double *p1;
    p1 = a2;
    /* 打印数组a2 */
    /* printf("a1有%d元素",sizeof(a1));
    int i;
    for(i=0;i<CT;i++)
        printf("a1的第%d个元素是%23.22f\n",i+1,a1[i]);
*/
    while(*p1++){
        printf("%lf\n",*(p1-1));
    }
}
