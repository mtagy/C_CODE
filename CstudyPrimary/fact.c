#include <stdio.h>

// 1.递归  据公式
int fact(int n1)
{
    if (n1 <= 1)
    {
        return 1;
    }
    else
        return n1 * fact(n1 - 1);
}

// 2.迭代
int fac(int n2)
{
    int ret1 = 1;
    int i = 0;
    for (i = 1; i <= n2; i++)
    {
        ret1 = ret1 * i;
    }
    return ret1;
}

int main()
{ // n!  1.递归   2.迭代
    //有些时候用递归解决问题并不太好  fib
    int n = 0;
    scanf("%d", &n);
    int ret = fact(n);
    int ret2 = fac(n);
    printf("%d\n", ret);
    printf("%d\n", ret2);
    return 0;
}