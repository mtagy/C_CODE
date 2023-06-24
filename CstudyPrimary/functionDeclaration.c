#include <stdio.h>

//函数的声明
int add(int, int);
//函数名+参数类型＋返回类型
// int add(int x,int y);
//这种写法也可以，x,y写不写都是对的，其实没有必要写

int main()
{ //函数的声明和定义
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    int sum = add(a, b);
    printf("%d\n", sum);
    return 0;
}

//函数的定义
int add(int x, int y) //定义到后面报warning错：add未定义
{                     //编译器处理代码时，从前往后扫描代码，进入main函数中前没有见过add函数，就会报一个warning
                      //解决处理：1.建议函数定义在main()前面 2.如果非要把函数定义放后面：前面进行函数的声明
    return x + y;
}