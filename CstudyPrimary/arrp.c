#include <stdio.h>

int main()
{ //先确定行0~2再确定列0~3
    int arr[3][4] = {1, 2, 3, 4, 2, 3, 4, 5, 3, 4, 5, 6};

    int i = 0;
    for (i = 0; i < 3; i++)
    {
        int j = 0;
        for (j = 0; j < 4; j++)
        {
            printf("&arr[%d][%d]=%p\n", i, j, &arr[i][j]); //打印二维数组地址
        }
    }
    return 0;
}