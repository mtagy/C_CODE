#include <stdio.h>

void test(int n)
{
    if (n < 10000)
        test(n + 1);
}
int main()
{
    test(1);
    return 0;
}