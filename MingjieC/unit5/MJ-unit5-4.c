#include <stdio.h>
/* 对代码5-6中的程序进行修改，将数组va中的元素按照倒序复制到数据vb中 */

int main()
{
    int i ;
    int va[5] = {15,20,30};
    int vb[5];
    for(i=0;i<5;i++){
        vb[4-i]=va[i];
    }
    for(i=0;i<5;i++){
        printf("va[%d] = %d  vb[%d] = %d\n",i,va[i],i,vb[i]);
    }
    return 0;
}
