#include <stdio.h>
int main()
{ //打印1~10
    int i = 0;
    for (i = 1; i <= 10; i++)
    {
        printf("%d", i); //单条语句可以不加{}，两条及以上必须加{}
    }
    return 0;
}