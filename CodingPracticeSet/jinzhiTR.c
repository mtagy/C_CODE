#include <stdio.h>

void tr8(int x)
{
    int arr[10] = {0};
    int i = 0;
    while (x)
    {
        arr[i] = x % 8;
        x = x / 8;
        i++;
    }
    printf("%d\n", i);
    while (i)
    {
        printf("%d", arr[i]);
        i--;
    }
}

int main()
{
    int a = 1234;
    return 0;
    tr8(a);
}