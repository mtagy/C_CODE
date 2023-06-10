#include <stdio.h>
int main()
{
    int a = 10;
    printf("%p\n", &a);
    int *p = &a; //&a要存起来，用int *类型创建一个变量p
                 // p就是指针变量
                 //内存单元的编号就是地址，地址也被称为指针
                 // p用来存地址，即指针
                 //所以将存放指针(地址)的变量称为指针变量
    return 0;
}