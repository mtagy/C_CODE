#include <stdio.h>
int main()
{ //打印100~200
    int i = 0;
    for (i = 100; i <= 200; i++) //为了可读性更高没有写成前闭后开区间
                                 //所以写法一不是绝对的，在一些场景也不适用
    {
        printf("%d\n", i);
    }
    return 0;
}