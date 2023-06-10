#include <stdio.h>
int main()
{
    int a = 10;
    int b = a++;       //后置++先使用后++
                       // int b=a; a=a+1;
    printf("%d\n", b); // 10
    printf("%d\n", a); // 11
    int c = 10;
    int d = ++c;       //前置++先++后使用
                       // c=c+1; int d=c;
    printf("%d\n", d); // 11
    printf("%d\n", c); // 11

    return 0;
}