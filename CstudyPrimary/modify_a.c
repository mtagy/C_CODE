#include <stdio.h>
int main()
{
    int a = 20;
    int *p = &a;
    //修改a
    a = 20;  //直接改
    *p = 30; //间接改  通过地址
    return 0;
}