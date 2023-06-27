#include <stdio.h>
int main()
{ //计算：1/1-1/2+1/3-1/4+1/5+......+1/99-1/100
    int i = 0;
    double sum = 0;
    int flag = 1; //实现正负交替
    for (i = 1; i <= 100; i++)
    {
        sum = sum + flag * (1.0 / i);
        flag = -flag;
    }
    printf("%lf\n", sum);
    return 0;
}