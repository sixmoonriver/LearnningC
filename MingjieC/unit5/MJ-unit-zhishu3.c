#include <stdio.h>
/*����������3�棬ȥ��ż����Ϊ�������ͳ��� */

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
    printf("�������Ϊ��%lu\n",counter);
    return 0;
}

