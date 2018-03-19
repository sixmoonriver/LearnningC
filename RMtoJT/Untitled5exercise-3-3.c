/* 现在有一份成绩，需要判断其成绩等次。判断标准是60分以下为D，60~70分为C，70~85分为B，85分以上为A。 */

/* 1、输入成绩
   2、判断输入有效性，if score >100 || score < 0 为无效
   3、<60为D 0
   4、>60 && <70为C 1
   5、>=70 && <=85 B 2
   6、>85 为A   3
*/
#include <stdio.h>

int main()
{
    double score;
    int grade;
    do {
        printf("请输入分数：");
        scanf("%lf",&score);
    } while(score > 100 || score < 0);
     if(score < 60 )
        grade = 0;
    else if (score >=60 && score <70 )
        grade = 1;
    else if (score >= 70 && score <85)
        grade = 2;
    else
        grade = 3;
    switch(grade){
        case 0:printf("成绩为D！");break;
        case 1:printf("成绩为C！");break;
        case 2:printf("成绩为B！");break;
        case 3:printf("成绩为A！");
    }
}
