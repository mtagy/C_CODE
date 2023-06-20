#include <stdio.h>

//电脑产生一个随机数（1~100） 猜数字  反馈：猜大了/猜小了
void guess()
{
    //生成随机数
    int ret = redom();
    printf("%d\n", ret);
}
void meau()
{
    printf("*************************\n");
    printf("*********1.play**********\n");
    printf("*********0.exit**********\n");
    printf("*************************\n");
}

int main()
{

    int input = 0;
    do
    {
        meau();
        printf("请选择：>");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            // printf("请输入数字：>");
            guess();
            break;
        case 0:
            printf("退出游戏");
            break;
        default:
            printf("选择错误，请重新选择");
            break;
        }
    } while (input);

    return 0;
}