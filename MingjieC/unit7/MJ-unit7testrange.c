#include <stdio.h>
#include <limits.h>

int main(void)
{
    printf("char        : %d ~ %d\n",CHAR_MIN,CHAR_MAX);
    printf("short int   : %d ~ %d\n",SHRT_MIN,SHRT_MAX);
    printf("int         : %d ~ %d\n",INT_MIN,INT_MAX);
    printf("long int    : %1d ~ %1d\n",LONG_MIN,LONG_MAX);
    printf("sizeof(char) = %u\n",(unsigned)sizeof(char));
    printf("sizeof(short) = %u\n",(unsigned)sizeof(short));
    printf("sizeof(int)  = %u\n",(unsigned)sizeof(short));
    printf("sizeof(long) = %u\n",(unsigned)sizeof(long));
}
