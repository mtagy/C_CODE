#include <stdio.h>
int main()
{
    int arr[10];
    printf("%p\n", arr);     //数组名
    printf("%p\n", &arr[0]); //首元素地址
    int n = sizeof(arr);
    printf("%d\n", n);
    return 0;
}