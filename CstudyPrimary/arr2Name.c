#include <stdio.h>
int main()
{ //二维数组的数组名：
    int arr[3][4];

    printf("%p\n", &arr[0][0]);     //二维数组中元素arr[0][0]的地址
    printf("%p\n", &arr[0][0] + 1); //+1跳到下一个元素(地址相差4byte 一个整型的大小)
    printf("--------------------------\n");
    printf("%p\n", &arr[0]);     //第一行数组的地址 arr[0]是第一行数组的数组名
    printf("%p\n", &arr[0] + 1); //+1跳到第二行  (地址相差16byte 4个整型的大小)
    printf("--------------------------\n");
    printf("%p\n", arr);     //二维数组首元素的地址：第一行数组的地址
    printf("%p\n", arr + 1); //+1跳到第二行   (地址相差16byte 4个整型的大小)
    printf("--------------------------\n");
    printf("%p\n", &arr);     //二维数组的地址
    printf("%p\n", &arr + 1); //+1跳出整个二维数组(地址相差48byte 12个整型的大小)
    printf("--------------------------\n");
    printf("%d\n", sizeof(arr));       //二维数组的大小 4*12=48
    printf("%d\n", sizeof(arr[0]));    //第一行数组的大小  4*4=16
    printf("%d\n", sizeof(arr[0][0])); // arr[0][0]元素的大小 4
    printf("--------------------------\n");
    printf("%d\n", sizeof(arr) / sizeof(arr[0]));       //行数 3
    printf("%d\n", sizeof(arr[0]) / sizeof(arr[0][0])); //列数  4

    return 0;
}