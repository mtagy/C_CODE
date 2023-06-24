#include <stdio.h>

int binary_search(int arr1[], int k1, int sz1)
// int arr1[]中arr1本质上是个指针变量 内部存放arr首元素的地址，通过地址就能找到arr
//数组在内存中连续存放的，只要有首元素地址就能访问整个数组
// main函数和binary_search函数访问数组都是在访问定义在main函数中的arr
{
    int left = 0;
    int right = sz1 - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr1[mid] > k1)
        {
            right = mid - 1;
        }
        else if (arr1[mid] < k1)
        {
            left = mid + 1;
        }
        else
        {
            return mid; //找到了返回下标
        }
    }
    return -1; //找不到 返回-1
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int k = 7;
    int sz = sizeof(arr) / sizeof(arr[0]);
    //数组元素个数 二分查找需要左下标和右下标 right=sz-1 需要传元素个数给函数
    //找到了返回下标  找不到返回-1
    int ret = binary_search(arr, k, sz); //传递数组时只写数组名（数组名就是地址）
    if (ret == -1)
    {
        printf("找不到\n");
    }
    else
    {
        printf("找到了,下标是%d\n", ret);
    }
    //先写函数怎么用，再写函数
    return 0;
}