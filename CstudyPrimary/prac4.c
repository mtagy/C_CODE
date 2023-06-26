#include <stdio.h>
int main()
{ // 3的倍数
    int i = 0;
    for (i = 1; i <= 100; i++) //法一
    {
        if (i % 3 == 0)
        {
            printf("%d ", i);
        }
    }

    for (i = 3; i <= 100; i += 3) //法二
    {
        if (i % 3 == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}