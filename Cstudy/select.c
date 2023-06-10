#include <stdio.h>

int main()
{
    /* 局部变量定义 */
    int input = 0;
    printf("考上大学\n");
    printf("要好好学习吗（1/0)？\n");
    scanf("%d\n", &input);
    if (input == 1)
    {
        printf("好offer\n");
    }

    else
    {
        printf("卖红薯\n");
    }

    return 0;
}