#include "game.h"

void meau()
{
    printf("*******************************\n");
    printf("*****       1. play       *****\n");
    printf("*****       0. exit       *****\n");
    printf("*******************************\n");
}

void game()
{
    char mine[ROWS][COLS] = {'0'}; //存放布置好的雷的信息  0表示未布置雷
    char show[ROWS][COLS] = {'*'}; //存放排查出的雷的信息  *表示未排查
    //上面那种写法只初始化了一个元素，不完全初始化

    //还是要写函数将初始化数组内容为指定内容
    // mine数组在没有布置雷的时候，都是'0'
    InitBoard(mine, ROWS, COLS, '0');
    // show数组在没有排查雷的时候，都是*
    InitBoard(show, ROWS, COLS, '*');

    //打印
    // DisplayBoard(mine, ROW, COL); //只需要打印输出9*9 雷的信息是不显示给玩家看的
    // DisplayBoard(show, ROW, COL);

    //设置雷
    SetMine(mine, ROW, COL);

    //布置好雷打印看一下
    // DisplayBoard(mine, ROW, COL);//自己看一下对不对，就隐藏起来
    DisplayBoard(show, ROW, COL);

    //排查雷 输入坐标 是雷就炸死了 不是雷显示坐标周围有几个雷
    FindMine(mine, show, ROW, COL); //在mine数组中排查雷，将信息存放到show数组中
}

int main()
{
    //设置随机数的生成起点
    srand((unsigned int)time(NULL));
    int input = 0;
    do
    {
        meau();
        printf("请选择:>");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
        {
            // printf("扫雷\n");
            game();
            break;
        }
        case 0:
        {
            printf("退出游戏\n");
            break;
        }
        default:
        {
            printf("选择错误,请重新选择\n");
            break;
        }
        }
    } while (input);
    return 0;
}