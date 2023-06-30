#include <stdio.h>
//计算一个数的每位之和（递归）
int DigitSum(unsigned int n) // 1234
{                            // DigitSum(1234)->DigitSum(123)+4->DigitSum(12)+3+4->DigitSum(1)+2+3+4
    if (n > 9)               //两位数及以上才进行拆分 一位数不用拆
        return DigitSum(n / 10) + n % 10;
    else
        return n;
}

int main()
{
    unsigned int n = 0;
    scanf("%u", &n);
    int sum = DigitSum(n);
    printf("%d\n", sum);
    return 0;
}