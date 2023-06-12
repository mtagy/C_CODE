#include <stdio.h>
int main()
{
    int score = 50;
    if (60 < score < 70) //不能写成这种形式，score=50 60<50 为假：0 0<70 为真 执行语句
        printf("合格\n");
    //悬空else
    int a = 0;
    int b = 2;
    if (a == 1)
        if (b == 2) // if与else 合起来是一条语句
            printf("hehe\n");
        else // else与离得最近的if匹配，跟对齐无关
            printf("haha\n");

    return 0;
}