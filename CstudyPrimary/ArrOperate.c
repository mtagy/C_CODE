#include <stdio.h>
//数组操作
//初始化函数 初始化为0
//打印函数
//逆置函数
void init(int arr[], int sz)
{
    int i = 0;
    for (i = 0; i < sz; i++)
    {
        arr[i] = 0;
    }
}

void print(int arr[], int sz)
{
    int i = 0;
    for (i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void reverse(int arr[], int sz)
{
    int left = 0;
    int right = sz - 1;
    while (left < right)
    {
        int tmp = arr[left];
        arr[left] = arr[right];
        arr[right] = tmp;
        left++;
        right--;
    }
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int sz = sizeof(arr) / sizeof(arr[0]);
    print(arr, sz); //初始化前
    reverse(arr, sz);
    print(arr, sz); //逆序后
    init(arr, sz);
    print(arr, sz); //初始化后
    return 0;
}
