#include <stdio.h>
/* ��д����ȷ�϶��޷�������ִ���������㲻�ᷢ��������� */

int main()

{
    unsigned int x = 22111110000;
    unsigned int y = 22222270000;
    unsigned int z11;
    z11 = x + y;
    printf("z = %d",z11);
    printf("��СΪ��%d",sizeof(x));
}
