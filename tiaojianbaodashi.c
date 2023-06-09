#include <stdio.h>
int main()
{ //求出a,b间较大值
    int a = 10;
    int b = 20;
    int r = a > b ? a : b;
    printf("%d\n", r);
    return 0;
}