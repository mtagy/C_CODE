#include <stdio.h>
void Swap(int x, int y)
//调试窗口&x,&y与&a,&b完全不相同 说明x,y和a,b都是独立的变量,有单独的空间
{
    int z = 0;
    z = x;
    //借助z 确实将x和y交换了,但是不会影响a和b,（因为是在不同的空间下）没有达到交换的效果
    x = y;
    y = z;
}
int main()
{
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    //实参：a、b 形参：x、y
    //实参传递给形参时,形参将是实参的一份临时拷贝,对形参的修改不会影响实参
    //(形参将数据拷贝了一份,但是有独立的空间)
    printf("交换前:a=%d b=%d\n", a, b);
    Swap(a, b); //有问题的代码
    printf("交换后:a=%d b=%d\n", a, b);
    return 0;
}