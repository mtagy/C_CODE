#include <stdio.h>
int main()
{
    int i = 1;
    do
    {
        if (i == 5)
            // break;
            continue;
        printf("%d ", i); //输出：1，2，3，4   break
                          // i++放在循环体第一行  输出：2，3，4    break
                          // break跳出循环，让循环整体终止

        // i++放在循环体第一行 输出2,3,4,6,7,8,9,10,11      continue
        // i++放在循环体最后一行 输出 1，2，3，4 死循环了    continue
        // continue：跳过continue后面的代码，来到判断部分
        i++;
    }

    while (i <= 10);

    return 0;
}