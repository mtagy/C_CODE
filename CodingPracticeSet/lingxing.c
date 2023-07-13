#include <stdio.h>
int main()
{
    //上
    int i = 0;
    int line = 0; //打印上半部分的行数
    scanf("%d", &line);
    for (i = 0; i < line; i++)
    {
        //打印每一行
        int j = 0;
        //打印空格
        for (j = 0; j < line - 1 - i; j++)
        {
            printf(" ");
        }
        //打印*
        for (j = 0; j < 2 * i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    //下
    for (i = 0; i < line - 1; i++)
    {
        //打印每一行
        int j = 0;
        //打印空格
        for (j = 0; j <= i; j++)
        {
            printf(" ");
        }
        //打印*
        for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}