#include <stdio.h>
int main()
{
    //输出1~100之间的奇数
    //产生1~100的数  while
    //判断输出1~100的奇数
    int num = 1;
    while (num <= 100)
    {
        if (num % 2 == 1)
            printf("%d\n", num);
        num++;
    }
    //法2
    int i = 1;
    while (i <= 100)
    {
        printf("%d\n", i);
        i += 2;
    }

    return 0;
}