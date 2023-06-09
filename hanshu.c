#include <stdio.h>
int add(int x, int y)
{
    int z = 0;
    z = x + y; // return (x+y);
    return z;
}
int main()
{
    int n1 = 0;
    int n2 = 0;
    scanf("%d %d", &n1, &n2);
    int sum = add(n1, n2);
    printf("%d\n", sum);
    return 0;
}