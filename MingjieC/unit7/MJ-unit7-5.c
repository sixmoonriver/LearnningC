#include <stdio.h>
/* 编写程序确认对无符号整数执行算术运算不会发生数据溢出 */

int main()

{
    unsigned int x = 22111110000;
    unsigned int y = 22222270000;
    unsigned int z11;
    z11 = x + y;
    printf("z = %d",z11);
    printf("大小为：%d",sizeof(x));
}
