#include <stdio.h>

int add(int x, int y)
{
    return (x + y);
}

int main()
{
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    int c = add(a, b);
    printf("%d\n", c);
    return 0;
}