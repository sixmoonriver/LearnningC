#include <stdio.h>
#define diff(x,y) (x >y) ? (x-y) : (y-x)

int main()
{
    int ipt1,ipt2;
    ipt1 = 16;
    ipt2 = 15;
    printf("ipt1��ipt2���Ϊ��%d\n",diff(ipt1,ipt2));
}
