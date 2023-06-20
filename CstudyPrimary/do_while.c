#include <stdio.h>
int main()
{ //打印1~10
    int i = 1;
    do
    {
        printf("%d ", i);
        i++;
    } //循环体中多条语句需要加{}
    while (i <= 10);
    return 0;
}