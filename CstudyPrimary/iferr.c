#include <stdio.h>

//实例1
int test()
{
    int a = 3;
    if (a == 3)
        return 1;
    return 0;
}

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

    // 实例1   代码风格重要性
    int r = test();
    printf("%d\n", r);

    //实例2
    int num = 3;
    if (num == 5) //容易将==比较大小的符号写成=赋值
                  //即num=5，那么表达式一定为真，无论num等不等于5都会执行输出语句
                  //这种错误编译器检测不出来
        printf("hehe\n");

    int num1 = 3;
    if (5 == num1) //写成下面这种方式，如果将==写成=编译器就会报错，避免了一些错误
        printf("haha\n");

    return 0;
}
