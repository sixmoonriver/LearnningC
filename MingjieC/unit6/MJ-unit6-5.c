#include <stdio.h>
/* ����һ����������������no�ξ��� */

void alert(int no)
{
    int i;
    while(no-->0){
         putchar('\a');
    }
}

void main()
{
    int cs1;
    printf("�����뱨���Ĵ�����");
    scanf("%d",&cs1);
    alert(cs1);
}
