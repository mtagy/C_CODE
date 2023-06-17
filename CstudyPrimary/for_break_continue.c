#include <stdio.h>
int main()
{
    int i = 0;
    for (i = 1; i <= 10; i++)
    {
        if (5 == i)
            // break;       //跳出循环，终止循环

            continue; //跳过continue本次循环后面的代码来到调整部分
                      //与while中不同，while中的continue时跳过本次循环后面的代码来到判段部分

        printf("%d", i); //输出1，2，3，4 break
                         //输出1，2，3，4，6，7，8，9，10  continue
    }
    return 0;
}