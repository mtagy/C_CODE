#include <stdio.h>
int main()
{ //打印9*9乘法表
    int i = 0;
    int j = 0;
    for (i = 1; i <= 9; i++) //打印9行
    {
        for (j = 1; j <= i; j++) //打印每一项
        {
            printf("%d*%d=%2d ", i, j, i * j); //%2d打印两位整数（只有一位整数用空格补齐）
                                               //%2d两位右对齐 %-2d两位左对齐
        }
        printf("\n");
    }
    return 0;
}