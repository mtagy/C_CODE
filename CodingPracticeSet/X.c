#include <stdio.h>
//打印输出X形图案
int main()
{
    int i = 0, j = 0, num = 0;
    while (scanf("%d", &num) != EOF)
    {
        for (i = 0; i < num; i++)
        {
            for (j = 0; j < num; j++)
            {
                if (j == i)
                    printf("*");
                else if (j == num - 1 - i)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
    }
    return 0;
}