#include <stdio.h>
/*����������2�棬ȥ��ż����Ϊ������*/

int main()
{
    int no,i,k;
    unsigned long counter = 0;
    no = 2;
    printf("%d \n",no++);
    for(;no<=1000;no+=2){
        for(i=2;i<no;i++){
            counter++;
            if(no%i==0){
                break;
            }
        }
        if(no == i)
        printf("%d \n",no);
    }
    printf("�������Ϊ��%lu\n",counter);
    return 0;
}

