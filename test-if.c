#include <stdio.h>
/* 华氏温度和摄氏温度的转换
    二者间的换算公式如下：
    1、摄氏＝5/9（°F－32）
    例如：将华氏90度换算成摄氏度数
    5/9×（90－32）＝5/9×58＝32.2
    即：华氏°F＝℃×9/5＋32
    例如，将摄氏30度换算成华氏度数
    即：摄氏30度等于华氏86度
    */
int main()
{
    while(1)
    {
        int LX,IPT,OT;
        //float OT;
        puts("请选择要转换的类型：（0表示华氏转摄氏,1表示摄氏转华氏）");
        scanf("%d",&LX);
        if (LX==0)
            {
                printf("您输入的是华氏转摄氏！\n");
                puts("请输入华氏温度");
                scanf("%d",&IPT);
                OT = 5/9*(IPT-32);
                printf("华氏%d--->摄氏%d",IPT,OT);
            }
        else if(LX==1)
            {
                printf("您输入的是摄氏转华氏！\n");
                puts("请输入摄氏温度");
                scanf("%d",&IPT);
                OT = IPT*9/5+32;
                printf("摄氏%d--->华氏%f",IPT,OT);
           }

        else
            puts("您的输入有误！");
    }

}


