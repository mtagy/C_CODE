#include <stdio.h>
int main()
{
    int i = 1;
    while (i < 11)
    {
        i++;          //将i++提前避免死循环  输出2,3,4 6,7,8,9,10,11
                      //只跳过了5没有输出，执行了continue语句跳过本次循环continue后面的代码
        if (5 == i)   // break只打印1~4  continue打印1~4光标一直在闪动（死循环)
                      // break;  //break执行会跳出循环(终止循环)
            continue; // continue被执行会跳过本次循环continue后面的代码
                      //直接到判断部分判断要不要进行下次循环
        printf("%d\n", i);
        // i++;
    }
    return 0;
}