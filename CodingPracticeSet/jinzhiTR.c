#include <stdio.h>
int main()
{
    int a = 0;
    int p = 0;
    int arr[20] = {0}; //数组尽量定义大些，存不下溢出很难检查出来错误
    int i = 0;
    scanf("%d %d", &a, &p);

    while (a != 0)
    {
        arr[i] = a % p;
        a = a / p;
        printf("第%d次:%d\n", i, arr[i]);
        i++;
    }

    /*while(a)
    {
        arr[i]=a%p;
        a = a / p;
        printf("第%d次:%d\n",i,arr[i]);
        i++;
    }*/

    /*do
    {
        arr[i]=a%p;
        a = a / p;
        printf("第%d次:%d\n",i,arr[i]);
        i++;
    } while(a);*/

    printf("%d进制数字位数: %d\n", p, i);
    int j = 0;
    for (j = i - 1; j >= 0; j--)
    {
        printf("%d", arr[j]);
    }
    /*while(i>0)
    {
     printf("%d",arr[i-1]);
     i--;
    }*/
    return 0;
}