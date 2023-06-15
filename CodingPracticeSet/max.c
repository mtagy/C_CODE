#include <stdio.h>
int main()
{
    // 将4个数字用循环形式输入并存储到数组中
    int arr[4] = {0};
    int i = 0;
    while (i < 4)
    {
        scanf("%d", &arr[i]);
        i++;
    }

    //假设第一个元素是最大值
    int max = arr[0];
    i = 1;
    while (i < 4) //用循环方式，分别比较剩下的三个数与max的大小关系，并始终将两者较大值赋给max
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        i++;
    }

    printf("%d\n", max);
    return 0;
}