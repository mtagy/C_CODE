#include <stdio.h>

int binary_search(int arr1[], int k1) // int arr1[]中arr1本质上是个指针变量
{
    int left = 0;
    int sz = sizeof(arr1) / sizeof(arr1[0]); //调试：sz=1  4/8  /   4/8  =1  (32位是4/4=1 64位是8/8=1)
    //这里不能计算数组元素个数 arr1不是数组而是指针变量
    int right = sz - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr1[mid] > k1) //但仍然可以用数组方式访问
        {
            right = mid - 1;
        }
        else if (arr1[mid] < k1)
        {
            left = mid + 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int k = 7;
    //在main函数中不定义sz 在binary_search函数中定义
    //发现查找7输出找不到 调试发现在binary_search函数sz=1而不是10
    int ret = binary_search(arr, k);
    if (ret == -1)
    {
        printf("找不到\n");
    }
    else
    {
        printf("找到了,下标是%d\n", ret);
    }

    return 0;
}