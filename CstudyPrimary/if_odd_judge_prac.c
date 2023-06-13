#include <stdio.h>
int main()
{
    //判断一个数是否为奇数
    int num = 0;
    scanf("%d", &num);
    //判断
    if (num % 2 == 1) //表达式和常量，表达式变量无法赋值，所以无需将常量放在左边
        printf("奇数\n");
    else
        printf("偶数\n");
    return 0;
}