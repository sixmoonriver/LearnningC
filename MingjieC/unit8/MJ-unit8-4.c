#include <stdio.h>
/* ���г����ж����ʾ�Ա𡢼��ڵȵ�ö�����ͣ�����Чʹ������ */

void main()
{
    enum season{spring,summer,auturm,winter};
    enum sex{male,female};
    enum month{Jan,Feb,Mar,April,May,June,July,Aug,Sep,Oct,Nov,Dec};

    enum month yue;
    enum sex xb;
    enum season jj;
    do {
        printf("��ѡ���Ա�0---male,1---female\n");
        scanf("%d",&xb);
    }while (xb < male || xb > female);

    printf("��ѡ����Ա��ǣ�%d",(enum sex)xb);
}
