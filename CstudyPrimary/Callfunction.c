#include <stdio.h>

void Add(int *p)
{
    (*p)++;
}

int main()
{ //每调用一次这个函数，就会将num的值增加1
    int num = 0;
    Add(&num);           //传地址就可以改变num
                         //改变函数外部的某个变量，可以将变量的地址传进去，通过指针找到变量进行修改
    printf("%d\n", num); // 1
    Add(&num);
    printf("%d\n", num); // 2
    return 0;
}