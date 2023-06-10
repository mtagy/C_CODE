#include <stdio.h>
int main()
{                         //寄存器变量
    register int num = 3; //建议3存放在寄存器中,决定不了
                          //最终还是编译器决定
    return 0;
}