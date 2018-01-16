#include <stdio.h>
/*编写一段程序，为数组中的全部元素分配静态存储期，并确认他们都被初始化为0 静态数组如果没有初始化，或者用Static定义，值可能是随机值
如果想是0，要么初始化，要么用static 声明，第9行：static int va[10]; int va[10] = {};
*/

int main()
{
    int i;
    int va[10];
    for(i=0;i<10;i++)
    {

        if(va[i] != 0)
            va[i] = 0;
        printf("va[%d] = %d\n",i,va[i]);
    }

}
