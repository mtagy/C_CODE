#include <stdio.h>
int main()
{
    char *pc = NULL;
    short *ps = NULL;
    int *pi = NULL;
    double *pd = NULL;
    // sizeof返回值类型是unsigned int，用%u打印比较合适
    //%zu打印最准确(为sizeof准备的打印格式)
    printf("%zu\n", sizeof(pc));
    printf("%zu\n", sizeof(ps));
    printf("%zu\n", sizeof(pi));
    printf("%zu\n", sizeof(pd)); //都是4/8
    return 0;
}