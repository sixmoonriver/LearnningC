/*
    拥有超能力的洋子
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
    printf("姓  名 = %s\n",sanaka.name);
    printf("身  高 = %d\n",sanaka.height);
    printf("体  重 = %f\n",sanaka.weight);
    printf("奖学金 = %ld\n",sanaka.schols);

    return (0);
}
