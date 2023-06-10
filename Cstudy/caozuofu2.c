#include <stdio.h>
int main()
{
    int arr[10] = {0};
    printf("%d\n", sizeof(arr));                  // sizeof计算数组大小
                                                  //输出值为40，计算的是整个数组的大小
                                                  //单位是字节(这里是整型数组不要考虑\0)
    printf("%d\n", sizeof(arr[0]));               //输出值为4，计算一个元素大小
                                                  //(一个int大小)
    printf("%d\n", sizeof(arr) / sizeof(arr[0])); //输出值是10  数组的元素个数
    return 0;
}