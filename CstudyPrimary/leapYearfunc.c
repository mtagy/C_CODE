#include <stdio.h>

int is_leap_year(int y) //是闰年：返回1 否 返回0
{                       //函数功能尽量单一 被复用才方便（所以我们不在函数内部打印输出）
    if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
        return 1;
    else
        return 0;
}

int main()
{
    //打印1000~2000年的闰年
    //闰年判断：1 能够被4整除，但是不能被100整除  2 能够被400整除
    int year = 0;
    for (year = 1000; year <= 2000; year++)
    {
        //判断闰年
        if (is_leap_year(year)) //传值  不修改实参传值
        {
            printf("%d ", year);
        }
    }
    return 0;
}