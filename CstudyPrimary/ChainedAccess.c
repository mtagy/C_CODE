#include <stdio.h>
#include <string.h>

void test()
{
    printf("hehe\n");
}

//函数不写返回类型时，默认返回值类型是int 建议明确写出来，不要不写
//写了int（有返回值的类型）不写返回值return 一些编译器默认返回最后一条指令执行的结果  不建议这样做
//函数中无参数就不要传参  （拒绝传参可以将参数设置为void：明确说明此函数不需要参数）
// eg:int main(void)为什么外面通常不加上void main()本质是有参数的
// main()的三个参数
// int main(int argc,char* argv[],char *envp[])

int main()
{
    int len = strlen("abcdef");
    printf("%d\n", len); // 6

    //链式访问 把一个函数的返回值作为另外其他函数的参数
    //前提条件：函数要有返回值(返回类型)(没有返回值的函数，无法链式访问)
    printf("%d\n", strlen("abcdef")); // 6
    // strlen()的返回值是一个 size_t 类型的无符号整数  将返回值用%d打印
    // strlen()的返回值作为printf()的参数  链式访问

    printf("%d", printf("%d", printf("%d", 43))); // 4321
    //先打印最内层的printf("%d", 43) 打印输出43 外面两个printf()依赖前面的返回值
    // 返回值：打印字符的个数
    // 43是两个字符  最内层返回值作为第二层的参数 打印输出 2
    // 2是一个字符 第二层返回值作为最外层的参数 打印输出 1
    //所以输出：4321
    // int n=test();//err
    return 0;
}