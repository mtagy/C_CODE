#include <stdio.h>
/*void test()
{
again:
}  */
int main()
{
again:
    printf("hehe\n");
    printf("haha\n");
    goto again; // again 是个符号 跳转到符号again所在位置  实现死循环
    return 0;
}
