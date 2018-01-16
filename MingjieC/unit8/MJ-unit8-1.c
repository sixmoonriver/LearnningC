#include <stdio.h>
#define diff(x,y) (x >y) ? (x-y) : (y-x)

int main()
{
    int ipt1,ipt2;
    ipt1 = 16;
    ipt2 = 15;
    printf("ipt1ºÍipt2Ïà²îÎª£º%d\n",diff(ipt1,ipt2));
}
