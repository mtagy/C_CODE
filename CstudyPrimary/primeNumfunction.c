#include <stdio.h>
#include <math.h>

int is_prime(int n) //是素数返回1 不是返回0
{
    int j = 0;
    for (j = 2; j <= sqrt(n); j++)
    {
        if (n % j == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int i = 0;
    int count = 0;

    for (i = 101; i <= 200; i += 2)
    { //判断i是否为素数（是：打印） 只是判断不修改实参，没有必要传地址，只需要传数值
        if (is_prime(i))
        {
            count++;
            printf("%d ", i);
        }
    }
    printf("\ncount = %d\n", count);
    return 0;
}