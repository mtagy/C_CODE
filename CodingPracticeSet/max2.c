#include <stdio.h>
int main()
{
    int max = 0;       //不对四个数进行存储
    scanf("%d", &max); //第一个输入的数字设定为max
    int i = 1;
    int n = 0;
    while (i < 4) //通过while循环使剩下输入的三个数分别与max比较，max中始终是两者较大值
    {
        scanf("%d", &n);
        if (n > max)
        {
            max = n;
        }
        i++;
    }
    printf("max=%d", max);
    return 0;
}