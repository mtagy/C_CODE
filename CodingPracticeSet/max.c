#include <stdio.h>
int main()
{
    int arr[4] = {0};
    int i = 0;
    while (i < 4)
    {
        scanf("%d", &arr[i]);
        i++;
    }

    //假设第一个元素是最大值
    int max = arr[0];
    i = 1;
    while (i < 4)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        i++;
    }

    printf("%d\n", max);
    return 0;
}