#include <stdio.h>
int getmax(int x, int y) //定义整型的参数x,y接收整型变量a,b的值
{                        // return的是整型，函数的返回类型为int
    return (x > y ? x : y);
}
int main()
{ //用函数求两个数的较大值
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    int m = getmax(a, b);
    printf("%d\n", m);
    return 0;
}