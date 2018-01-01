#include <stdio.h>
/*求质数，第3版，去掉偶数作为被除数和除数 */

int main()
{
    int no,i,k;
    unsigned long counter = 0;
    no = 2;
    printf("%d \n",no++);
    for(no;no<=1000;no+=2){
        for(i=3;i<no;i+=2){
            counter++;
            if(no%i==0){
                break;
            }
        }
        if(no == i)
        printf("%d \n",no);
    }
    printf("运算次数为：%lu\n",counter);
    return 0;
}

