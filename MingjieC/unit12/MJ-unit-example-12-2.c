/*
    用表示学生的结构体来显示佐中的信息
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

    printf("姓  名 = %s\n",sanaka.name);
    printf("身  高 = %d\n",sanaka.height);
    printf("体  重 = %f\n",sanaka.weight);
    printf("奖学金 = %ld\n",sanaka.schols);

    return (0);
}
