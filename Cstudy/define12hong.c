#include <stdio.h>
#define ADD(x, y) ((x) + (y)) // ADD宏名
                              // x,y宏的参数(无类型，实际上就是一个符号)
                              // x+y宏体

int Add(int x, int y)
{
    return x + y;
}

int main()
{
    int a = 10;
    int b = 20;
    int c = ADD(a, b); //与函数用法相似 定义方法有差异
                       //宏调用是完成替换宏体
                       //((x)+(y)——>((a)+(b))
                       //编译器处理后：int c=((a)+(b))
    printf("%d\n", c);
    return 0;
}