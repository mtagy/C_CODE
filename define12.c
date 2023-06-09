#include <stdio.h>
#define NUM 100
int main()
{
    printf("%d\n", NUM); //直接打印
    int n = NUM;
    printf("%d\n", NUM); //赋值使用再打印
    int arr[NUM] = {0};  //定义数组时
                         //用#define定义的常量确定数组大小
    return 0;
}