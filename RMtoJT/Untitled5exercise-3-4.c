/* 计算个人所有税
 < 2000 不用交税
 2000<  <3000  5%；
 3000<  <4000  10%;
 4000<  <5000  15%;
 5000< 20%;
 */

#include <stdio.h>
int main()
{
    double pay;
    double tax=0;
    int taxlevel;
    do {
        printf("请输入收入：");
        scanf("%lf",&pay);
    } while( pay < 0);
     if(pay < 2000 )
        taxlevel = 0;
    else if (pay >=2000 && pay <3000 )
        taxlevel = 1;
    else if (pay >= 3000 && pay <4000)
        taxlevel = 2;
    else if (pay >=4000 && pay < 5000)
        taxlevel = 3;
    else
        taxlevel = 4;
    switch(taxlevel){
        case 4:tax=(pay-5000)*0.20+1000*0.15+1000*0.10+1000*0.05;break;
        case 3:tax=(pay-4000)*0.15+1000*0.10+1000*0.05;break;
        case 2:tax=(pay-3000)*0.10+1000*0.05;break;
        case 1:tax=(pay-2000)*0.05;break;
        case 0:tax=0;
    }
    printf("应交的税为：%6.2f",tax);
}
