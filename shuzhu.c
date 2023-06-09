#include <stdio.h>
int main()
{
    int arr[10] = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    printf("%d\n", arr[8]); //打印输出一个数字
    int i = 0;
    while (i < 10) //打印输出整个数组
    {
        printf("%d\n", arr[i]);
        i++;
    }
    return 0;
}
