#include <stdio.h>
void tr(int x, int y)
{
    int arr[20] = {0};
    int i = 0;
    while (x)
    {
        arr[i] = x % y;
        x = x / y;
        i++;
    }
    int j = 0;
    for (j = i - 1; j >= 0; j--)
    {
        printf("%d", arr[j]);
    }
}

int main()
{
    int a = 0; //十进制数
    int p = 0; // p是进制数
    scanf("%d %d", &a, &p);
    tr(a, p);
    return 0;
}