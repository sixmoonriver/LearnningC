#include <stdio.h>

int main()
{
    int IPT1;
    printf("������һ������:");
    scanf("%d",&IPT1);
    switch(IPT1%2)
    {
        case 0 : printf("����һ��ż��\n");break;
        case 1 : printf("����һ������\n");break;
    }

}
