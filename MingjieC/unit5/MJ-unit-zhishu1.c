#include <stdio.h>
/*����������1��*/

int main()
{
    int no,i,k;
    unsigned long counter = 0;
    for(no=2;no<=1000;no++){
        for(i=2;i<no;i++){
            counter++;
            if(no%i==0){
                break;
            }
            }
        if(no==i){
            printf("%d \n",no);
        }
    }
    printf("�������Ϊ��%lu\n",counter);
    return 0;
}
