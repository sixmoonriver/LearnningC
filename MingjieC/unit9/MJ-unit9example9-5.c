/* ��ʽ���ַ���
*/
#include <stdio.h>

int main(void)
{
    char str[] = "12345";
    printf("%s\n",str);
    printf("%3s\n",str); /*������ʾ3λ*/
    printf("%.3s\n",str); /*������ʾ3λ */
    printf("%8s\n",str); /* ����8λ���Ҷ��� */
    printf("%-8s\n",str); /* ����� */

    return (0);
}
