#include <stdio.h>
int main()
{
    int a = 10;
    int b = 20;
    int c = 0;
    int d = (c = a - 2, a = b + c, c - 3); // c=8 a=28 c-3=5
                                           //表达式结果为最后一个exp结果：5
    printf("%d\n", d);
    return 0;
}