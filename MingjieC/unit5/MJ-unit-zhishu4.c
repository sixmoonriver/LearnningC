#include <stdio.h>
/*����������4�棬ȥ��ż����Ϊ������14622 */

int main()
{
    int no,i,k,ptr;
    int prime[500]={};
    unsigned long counter = 0;
    ptr = 0;
    prime[ptr++]=2;
    prime[ptr++]=3;
    printf("ptrֵ��%d\n",ptr);
    printf("prime[0]��ֵ��%d,prime[1]��ֵ��%d\n",prime[0],prime[1]);
    for(no=5;no<=1000;no+=2){
        for(i=1;i<ptr;i++){
            counter++;
            if(no % prime[i]==0){
                break;
            }

        }
        if(ptr==i)
            prime[ptr++]=no;
    }
    for(k=0;prime[k]>0;k++){
        printf("%d\n",prime[k]);
    }
    printf("�������Ϊ��%lu\n",counter);
    return 0;
}
