#include <stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    scanf("%d%d\n", &a, &b);
    if (a > b)
    {
        printf("MAX:%d\n", a);
    }
    else if (a == b)
    {
        printf("a与b相等\n");
    }
    else
    {
        printf("MAX:%d\n", b);
    }
    return 0;
}
