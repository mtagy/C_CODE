#include <stdio.h>
int main()
{ //计算n的阶乘    1*2*3*...*n
    int i = 1;
    int n = 0;
    int ret = 1; //不考虑溢出问题
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        ret = ret * i;
    }
    printf("%d\n", ret);
    return 0;
}