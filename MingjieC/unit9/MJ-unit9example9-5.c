/* 格式化字符串
*/
#include <stdio.h>

int main(void)
{
    char str[] = "12345";
    printf("%s\n",str);
    printf("%3s\n",str); /*至少显示3位*/
    printf("%.3s\n",str); /*至多显示3位 */
    printf("%8s\n",str); /* 至少8位，右对齐 */
    printf("%-8s\n",str); /* 左对齐 */

    return (0);
}
