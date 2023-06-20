#include <stdio.h>
int main()
{ //计算1！+2！+3！+...+10！
    int i = 1;
    int ret = 1;
    int sum = 0;
    for (i = 1; i <= 10; i++)
    {
        ret = ret * i; //利用前面计算的结果 一层for循环，效率更高
        sum = ret + sum;
    }
    printf("%d\n", sum);
    return 0;
}