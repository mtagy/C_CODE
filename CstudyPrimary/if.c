#include <stdio.h>
int main()
{
    if (3 == 5)
        printf("hehe\n"); //表达式为假不执行输出语句
    int a = 10;
    if (a > 5)
        printf("haha\n"); //表达式为真执行输出语句
    int score = 95;
    if (score > 85)
        printf("录取\n"); // if语句后默认只能跟一条语句
    else
        printf("不录取\n");

    if (score > 60)
    {
        printf("合格\n"); //跟多条语句用{}
        printf("录取\n");
    }
    else
        printf("不录取\n"); // else语句同理

    int score1 = 0;
    scanf("%d", &score1);
    if (score1 < 60) //多分支(只选择一个分支执行语句)
        printf("不合格\n");
    else if (score1 >= 60 && score1 < 70)
        printf("合格\n");
    else if (score1 >= 70 && score1 < 80)
        printf("良好\n");
    else if (score1 >= 80 && score1 < 90)
        printf("中等\n");
    else
        printf("优秀\n");

    return 0;
}