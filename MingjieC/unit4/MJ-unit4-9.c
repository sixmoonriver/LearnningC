#include <stdio.h>
/* ��дһ�γ�����������������������ʾ��С������ֵ��������ż��
 2 4 6 8 10 ..... */

 int main()
 {
     int ipt1,i=2;
     printf("������һ��������");
     scanf("%d",&ipt1);
     while(i < ipt1){
        printf("%d ",i);
        i+=2;
     }
     putchar('\n');
 }
