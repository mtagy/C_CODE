#include <stdio.h>
int main()
{
    char arr[] = {73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33}; //用整型int/char存放都可
    // char arr1[] = {73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33, 0};
    //  printf("%lu\n", strlen(arr1));//warning
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n", n);
    for (int i = 0; i < n; i++)
    {

        printf("%c", arr[i]);

        // printf("%d", i);
    }

    int i1 = 0;
    while (i1 < sizeof(arr) / sizeof(arr[0]))
    {
        printf("%c", arr[i1]);
        i1++;
    }
    return 0;
}