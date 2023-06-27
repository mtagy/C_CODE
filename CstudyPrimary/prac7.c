#include <stdio.h>
int main()
{ // 1~100中整数出现数字9的个数  十位上数字9  个位上数字9
    int i = 0;
    int count = 0; //计数
    for (i = 1; i <= 100; i++)
    {
        if (i % 10 == 9) //个位上是否为数字9
            count++;
        if (i / 10 == 9) //十位上是否为数字9
            count++;
    }
    printf("count = %d", count); //输出count = 20
    return 0;
}