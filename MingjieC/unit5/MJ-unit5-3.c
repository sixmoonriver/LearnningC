#include <stdio.h>
/* 修改5-5代码，从头开始依次使用5、4、3、2、1进行赋值 */

int main()
{
    int i;
    int vx[5] = {5,4,3,2,1};
    for(i=0;i<5;i++){
        printf("vx[%d] = %d\n",i,vx[i]);
    }
    return 0 ;
}
