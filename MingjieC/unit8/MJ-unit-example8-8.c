#include <stdio.h>
/*
    计算标准输入输出流中出现的数字的字符数
*/

int main()
{
    int i,ch;
    int ct[10] = {0};
    while(1)
    {
        ch = getchar();
        if(ch == EOF) break;
        switch(ch){
        case '0' : ct[0]++;break;
        case '1' : ct[1]++;break;
        case '2' : ct[2]++;break;
        case '3' : ct[3]++;break;
        case '4' : ct[4]++;break;
        case '5' : ct[5]++;break;
        case '6' : ct[6]++;break;
        case '7' : ct[7]++;break;
        case '8' : ct[8]++;break;
        case '9' : ct[9]++;break;
        }
    }
    puts("数字字符出现的次数");
    for(i=0;i<=9;i++)
    {
        printf("'%d' : %d\n",i,ct[i]);
    }
    return 0;
}
