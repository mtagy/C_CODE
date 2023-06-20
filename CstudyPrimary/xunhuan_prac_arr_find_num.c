#include <stdio.h>
int main()
{ //在一个有序数组中查找具体的某个数字n

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; //没有利用数组的有序性

    int k = 7; //要找数字7
    int i = 0;
    int sz = sizeof(arr) / sizeof(arr[0]);
    for (i = 0; i < sz; i++)
        if (arr[i] == k)
        {
            printf("找到了,下标是:%d\n", i);
            break;
        }
    if (i == sz)
    {
        printf("找不到/\n");
    }
    return 0;
}