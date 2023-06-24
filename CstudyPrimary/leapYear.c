#include <stdio.h>
int main()
{
    //打印1000~2000年的闰年
    //闰年判断：1 能够被4整除，但是不能被100整除  2 能够被400整除
    int year = 0;
    for (year = 1000; year <= 2000; year++)
    {
        //判断闰年
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        {
            printf("%d ", year);
        }
        /*if (year % 4 == 0)
        {
            if(year%100!=0)
            {
               printf("%d ", year);
            }
        }
        if(year % 400 == 0)//这里不可以是else if 否则会丢失2000 1600 1200
        //if 与else if 只能选择一个进入，上面那个进入判断之后不符合，else if 也没办法判断了
        //写成两个if 两个都会进入判断
        {
            printf("%d ", year);
        }*/
    }
    return 0;
}