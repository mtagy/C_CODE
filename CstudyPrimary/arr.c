#include <stdio.h>

int main()
{ //先确定行0~2再确定列0~3
    int arr[3][4] = {1, 2, 3, 4, 2, 3, 4, 5, 3, 4, 5, 6};
    printf("%d\n", arr[2][0]); //打印某个元素
    int i = 0;
    for (i = 0; i < 3; i++)
    {
        int j = 0;
        for (j = 0; j < 4; j++)
        {

            scanf("%d", &arr[i][j]);  //给每个元素重新赋值
            printf("%d ", arr[i][j]); //打印二维数组每一行
        }
        printf("\n");
    }
    return 0;
}