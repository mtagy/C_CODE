#include <stdio.h>

int main()
{
    int a, b, c;
    a = 5;
    c = ++a;
    b = ++c, c++, ++a, a++; // 优先级 = 大于,
    b += a++ + c;           //优先级++ +大于+=
    printf("a=%d b=%d c=%d\n", a, b, c);
    return 0;
}