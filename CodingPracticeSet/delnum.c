#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n]; //支持c99
                // int arr[50] = {0};
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int del = 0;
    scanf("%d", &del);
    int j = 0;
    // j作为下标锁定的位置就是用来存放不删除的数据的
    //不需要创建新数组存放
    for (i = 0; i < n; i++)
    {
        if (arr[i] != del)
        {
            // arr[j]=arr[i];
            // j++; //两种写法等价
            arr[j++] = arr[i];
        }
    }
    for (i = 0; i < j; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}