#include <stdio.h>
int fun(int a)
{
    int b;
    switch (a)
    {
    case 1:
        b = 30;
    case 2:
        b = 20;
    case 3:
        b = 10;
    default:
        b = 0;
    }
    return b;
}
int main()
{
    printf("%d", fun(1));
    return 0;
}