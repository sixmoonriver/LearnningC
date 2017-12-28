#include <stdio.h>
/* 编写一段程序，像下面这样按照升序显示出小于输入值的所在正偶数
 2 4 6 8 10 ..... */

 int main()
 {
     int ipt1,i=2;
     printf("请输入一个整数：");
     scanf("%d",&ipt1);
     while(i < ipt1){
        printf("%d ",i);
        i+=2;
     }
     putchar('\n');
 }
