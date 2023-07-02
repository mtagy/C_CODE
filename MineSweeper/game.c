#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            board[i][j] = set; //写成set,传0\*都可以设置了
        }
    }
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
    int i = 0;
    int j = 0;
    printf("------扫雷游戏------\n");
    for (j = 0; j <= col; j++) //从0开始，方便对齐
    {
        printf("%d ", j); //打印列号，方便观察定位
    }
    printf("\n");
    for (i = 1; i <= row; i++)
    {

        printf("%d ", i); //打印行号，方便观察定位
        for (j = 1; j <= col; j++)
        {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
    printf("------扫雷游戏------\n");
}

void SetMine(char board[ROWS][COLS], int row, int col)
{
    int count = EASY_COUNT;       // 设置雷的数量
    while (count)                 //布置一个雷count--
    {                             //通过坐标布置雷 x:1~9 row y:1~9 col
        int x = rand() % row + 1; // 0~row-1 +1 -> 0~row
        int y = rand() % col + 1;
        if (board[x][y] == 0) //循环次数有可能大于10，生成的坐标已经被设置过，需要重新设置
        {
            board[x][y] = 1;
            count--;
        }
    }
}

int get_mine_count(char board[ROWS][COLS], int x, int y)
{
    return (board[x - 1][y] + board[x - 1][y - 1] + board[x][y - 1] + board[x + 1][y - 1] + board[x + 1][y] + board[x - 1][y] + board[x + 1][y + 1] + board[x][y + 1] + board[x - 1][y + 1] - 8 * '0');
} //用for循环也可以 范围-1 0 1

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
    int x;
    int y;
    int win = 0; //找到非雷的个数
    while (win < COL * ROW - EASY_COUNT)
    {
        printf("请输入要排查的坐标:>");
        scanf("%d%d", &x, &y);
        if (x >= 1 && x <= row && y >= 1 && y <= col) //判断坐标的合法性
        {
            if (show[x][y] != '*') //判断是否重复排查
            {
                printf("该坐标已经排查过了,不能重复排查\n");
            }
            else
            {
                if (mine[x][y] == '1')
                {
                    printf("很遗憾，你被炸死了\n");
                    DisplayBoard(mine, ROW, COL);
                    break;
                }
                else //不是雷 统计周围8个坐标有几个雷
                //将8个坐标的值相加等于几就是几个雷
                //不能简单相加  字符'1' 与数字1  是不一样的 字符在内存中以ASCII值形式存储 不能直接相加('0':48 '1':49)
                //'0' ASCII码值(十进制) 48  '1' ASCII码值(十进制) 49 如何得到十进制的0和1
                // 49-48=1  48-48=0   即'1'-'0'=1  '0'-'0'=0
                //将周围8个坐标相加再减去8*'0'（转换为数字0 数字1）
                {
                    win++;
                    int count = get_mine_count(mine, x, y); //统计mine数组x,y坐标周围雷的个数
                    show[x][y] = count + '0';               //转换成字符放进去
                    DisplayBoard(show, ROW, COL);           //排查一次雷，打印出来
                }
            }
        }
        else
        {
            printf("输入坐标非法,请重新输入\n");
        }
    }
    if (win == COL * ROW - EASY_COUNT)
    {
        printf("恭喜你排雷成功\n");
        DisplayBoard(mine, ROW, COL);
    }
}

//以上完成的是基础功能
//扩展功能实现：
// 1.标记功能（把肯定是雷的位置标记出来，雷的个数会-1，排查了一个雷）
// 2.展开一片的功能实现 当排查x,y坐标时，①该坐标不是雷 ②该坐标周围没有雷 ③该坐标没有被排查过  则展开一片
//在本代码中可以将满足这三个条件的坐标设置为空格 再去找他周围8个坐标是否满足这三个条件  有就设置为空格 持续找下去 实现展开一片的功能
//提示：用递归实现