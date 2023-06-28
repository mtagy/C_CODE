#include <stdio.h>

void bubble_sort(int arr[])
//数组传参时，形参有两种写法：
// 1.数组形式 int arr[]直观易理解 并不代表重新创建一个数组
//   []里面可以写数字但是写了也用不上所以一般不写
//   arr看似是数组本质上是一个指针变量   算sizeof(arr) / sizeof(arr[0])
//   32位 4/4=1
// 2.指针形式  int* arr
{
    //趟数
    int sz = sizeof(arr) / sizeof(arr[0]); //元素个数
    // sz=1 下面循环根本就没有进去所以输出还是未排序的数据
    //所以不能在这里求元素个数
    int i = 0;
    for (i = 0; i < sz - 1; i++)
    { //一趟冒泡排序 相邻两个元素比较
      //第一趟10个元素--9次相邻比较   第二趟 9个元素--8次相邻比较
        int j = 0;
        for (j = 0; j < sz - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            { //交换
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

int main()
{
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0}; //把数组的数据排列成升序
    //将数据内容改变：0123456789 冒泡排序算法进行排序
    bubble_sort(arr); //数组传参时只写数组名,数组名本质上是数组首元素的地址
    int i = 0;
    int sz = sizeof(arr) / sizeof(arr[0]); //元素个数
    for (i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}