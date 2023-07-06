#include <stdio.h>
#include <math.h>
int main()
{
    int i = 0, j = 0;
    int count = 0;
    for (i = 101; i < 1000; i += 2)
    {
        for (j = 2; j < sqrt(i); j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (j > sqrt(i)) //?
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}