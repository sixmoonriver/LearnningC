/*
    ӵ�г�����������
*/
#include <stdio.h>
#include <string.h>

struct gstudent {
    char name[20];
    int height;
    float weight;
    long schols;

    };
void hiroko(struct gstudent *std)
{
    if(std->height < 180) std->height = 180;
    if(std->weight > 80)  std->weight = 80 ;
}

int main()
{
    struct gstudent sanaka = {"Sanaka", 175, 80.6, 70000};
    hiroko(&sanaka);
    printf("��  �� = %s\n",sanaka.name);
    printf("��  �� = %d\n",sanaka.height);
    printf("��  �� = %f\n",sanaka.weight);
    printf("��ѧ�� = %ld\n",sanaka.schols);

    return (0);
}
