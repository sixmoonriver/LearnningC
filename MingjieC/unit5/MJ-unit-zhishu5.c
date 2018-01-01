#include <stdio.h>
/*求质数，第5版，只求平方根,运算次数3774*/

int main()
{
    int no,i,k,ptr;
    int prime[500]={};
    unsigned long counter = 0;
    ptr = 0;
    prime[ptr++]=2;
    prime[ptr++]=3;
    printf("ptr值是%d\n",ptr);
    printf("prime[0]的值是%d,prime[1]的值是%d\n",prime[0],prime[1]);
    for(no=5;no<=1000;no+=2){
        int flag = 0;
        for(i=1;counter++,prime[i]*prime[i]<no;i++){
            counter++;
            if(no % prime[i]==0){
                flag=1;
                break;
            }

        }
        if(!flag)
            prime[ptr++]=no;
    }
    for(k=0;prime[k]>0;k++){
        printf("%d\n",prime[k]);
    }
    printf("运算次数为：%lu\n",counter);
    return 0;
}

