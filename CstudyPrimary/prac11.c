#include <stdio.h>
void print_table(int n)
{
    int i = 0;
    int j = 0;
    for (i = 1; i <= n; i++) //打印n行
    {
        for (j = 1; j <= i; j++) //打印每一项
        {
            printf("%d*%d=%2d ", i, j, i * j); //%2d打印两位整数（只有一位整数用空格补齐）
                                               //%2d两位右对齐 %-2d两位左对齐
        }
        printf("\n");
    }
}
int main()
{ //打印n*n乘法表 1.函数实现 2.能指定行和列
    int n = 0;
    scanf("%d", &n);
    print_table(n);
    return 0;
}