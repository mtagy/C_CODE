#include <stdio.h>
int main()
{ //计算1！+2！+3！+...+10！
    int i = 1;
    int j = 1;
    int ret = 1;
    int sum = 0;
    for (i = 1; i <= 10; i++)
    {
        ret = 1; //不重新赋值会产生累积值导致结果错误
        for (j = 1; j <= i; j++)
        {
            ret = ret * j;
        }
        sum = ret + sum;
    }
    printf("%d\n", sum);
    return 0;
}