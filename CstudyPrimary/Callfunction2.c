#include <stdio.h>

int Add(int n)
{
    return n + 1; // return ++n;不可以写成return n++;先返回后++没有意义
}

int main()
{ //每调用一次这个函数，就会将num的值增加1
    int num = 0;
    num = Add(num);
    printf("%d\n", num); // 1
    num = Add(num);
    printf("%d\n", num); // 2
    return 0;
}