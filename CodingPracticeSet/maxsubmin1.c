#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[n];
    int i = 0;
    int max = 0;
    int min = 100;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    printf("%d", max - min);
    return 0;
}