#include <stdio.h>
int main()
{
    int i = 0;
    int k = 0;
    for (i = 0, k = 0; k = 0; i++, k++) //循环0次
                                        //原因：判断部分不是判断语句而是赋值语句
                                        //判断部分将k赋值为0，表示式结果为0,0为假，不进入循环
    {                                   //变形：判断部分 k==0 循环1次
        k++;
    }
    return 0;
}