#include <stdio.h>
int main()
{              //打印1——10
    int i = 1; //初始化(影响循环次数)

    while (i <= 10) //判断是否进入循环
    {
        printf("%d", i);
        i++; //调整
    }
    // while 循环中这三部分都会影响循环，当代码段太长，这三部分比较分散，修改不方便容易出错
    //  for(用的最多的循环)
    return 0;
}