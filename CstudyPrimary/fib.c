#include <stdio.h>
int count;
// 1.递归实现
int fib1(int n1)
{
    if (n1 == 3)
        count++;
    if (n1 <= 2)
        return 1;
    else
        return fib1(n1 - 1) + fib1(n1 - 2);
}
// 2.迭代实现   效率高   数字太大有溢出错误
int fib2(int n2)
{
    int a = 1;
    int b = 1;
    int c = 1;
    while (n2 >= 3)
    {
        c = a + b;
        a = b;
        b = c;
        n2--;
    }
    return c;
}

int main()
{ //斐波那契  1.递归实现  计算第50个  发现计算机一直在计算画很长时间  代码效率低
  //为什么时间长？ 计算的复杂程度：n=3要求第3个fib;count++计算在整个计算(算第50个）中,函数计算了多少次第3个fib
  //大量的重复计算  存在时间的大量浪费 效率太低
  //这里不用递归解决不好
    int n = 0;
    scanf("%d", &n);
    int ret = fib1(n);
    printf("%d\n", ret);
    printf("%d\n", count);
    //      2.迭代实现
    int ret1 = fib2(n);
    printf("%d\n", ret1);
    return 0;
}