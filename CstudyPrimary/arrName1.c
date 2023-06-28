#include <stdio.h>
int main()
{
    int arr[10];
    printf("%p\n", arr); //这里数组名就是首元素地址
    printf("%p\n", arr + 1);
    printf("-----------------\n");

    printf("%p\n", &arr[0]);     //首元素地址
    printf("%p\n", &arr[0] + 1); //首元素地址+1跳过4个字节
    printf("-----------------\n");

    printf("%p\n", &arr);     //&数组名：数组的地址
    printf("%p\n", &arr + 1); //数组的地址＋1跳过整个数组去了

    return 0;
}