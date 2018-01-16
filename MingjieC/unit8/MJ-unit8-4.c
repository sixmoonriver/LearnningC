#include <stdio.h>
/* 请有程序中定义表示性别、季节等的枚举类型，并有效使用它们 */

void main()
{
    enum season{spring,summer,auturm,winter};
    enum sex{male,female};
    enum month{Jan,Feb,Mar,April,May,June,July,Aug,Sep,Oct,Nov,Dec};

    enum month yue;
    enum sex xb;
    enum season jj;
    do {
        printf("请选择性别：0---male,1---female\n");
        scanf("%d",&xb);
    }while (xb < male || xb > female);

    printf("你选择的性别是：%d",(enum sex)xb);
}
