/* ������һ�ݳɼ�����Ҫ�ж���ɼ��ȴΡ��жϱ�׼��60������ΪD��60~70��ΪC��70~85��ΪB��85������ΪA�� */

/* 1������ɼ�
   2���ж�������Ч�ԣ�if score >100 || score < 0 Ϊ��Ч
   3��<60ΪD 0
   4��>60 && <70ΪC 1
   5��>=70 && <=85 B 2
   6��>85 ΪA   3
*/
#include <stdio.h>

int main()
{
    double score;
    int grade;
    do {
        printf("�����������");
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
        case 0:printf("�ɼ�ΪD��");break;
        case 1:printf("�ɼ�ΪC��");break;
        case 2:printf("�ɼ�ΪB��");break;
        case 3:printf("�ɼ�ΪA��");
    }
}
