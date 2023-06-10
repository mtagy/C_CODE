#include <stdio.h>
int main()
{
    int a = 10;
    int b = 20;
    if (a && b) // a和b都为真执行语句打印输出hehe
                // a=0(假) b=20(真);a=10 b=0;a=b=0
                //以上三种都不执行语句
    {
        printf("hehe\n");
    }
    if (a || b) // a或者b其中一个为真执行语句
                // a=b=0不执行语句
    {
        printf("lala\n");
    }
    return 0;
}