#include <stdio.h>
int main()
{
    int a = 10; //向内存申请4个字节存储10
                // a的地址是这四个字节中第一个字节的地址
    &a;         //取地址操作符

    printf("%p\n", &a); //%p以地址格式打印数据
    return 0;
}