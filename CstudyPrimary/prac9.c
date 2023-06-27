#include <stdio.h>
int main()
{ //求10个整数中的最大值
    // int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; //初始化预设十个数
    int arr[10] = {0};
    // arr[]={0} 等价于 arr[1]={0}
    int j = 0;
    for (j = 0; j < 10; j++)
    {
        scanf("%d", &arr[j]); //输入10个值
    }
    int max = arr[0];
    int i = 0;
    for (i = 1; i < 10; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("%d\n", max);
    return 0;
}