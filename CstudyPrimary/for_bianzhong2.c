#include <stdio.h>
int main()
{ //使用多个循环变量控制循环
    int x, y;
    for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
    {
        printf("hehe\n");
    }
    return 0;
}