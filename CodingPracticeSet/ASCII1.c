#include <stdio.h>
int main()
{
    char arr[] = {73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n", n);
    for (int i = 0; i < n; i++)
    {

        printf("%c\n", arr[i]);

        printf("%d\n", i);
    }
    return 0;
}