/*
    �ñ�ʾѧ���Ľṹ������ʾ���е���Ϣ
*/
#include <stdio.h>
#include <string.h>

struct gstudent {
    char name[20];
    int height;
    float weight;
    long schols;
    };

int main()
{
    struct gstudent sanaka;
    strcpy(sanaka.name,"Sanaka");
    sanaka.height = 175;
    sanaka.weight = 60.5;
    sanaka.schols = 70000;

    printf("��  �� = %s\n",sanaka.name);
    printf("��  �� = %d\n",sanaka.height);
    printf("��  �� = %f\n",sanaka.weight);
    printf("��ѧ�� = %ld\n",sanaka.schols);

    return (0);
}
