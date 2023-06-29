#include "game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            board[i][j] = ' ';
        }
    }
}

//打印函数第一版本   列不能灵活变动 一直是3
/*void DisplayBoard(char board[ROW][COL], int row, int col)
{
    int i = 0;
    for (i = 0; i < row; i++)
    {
        //打印数据
        pirntf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
        //打印分割信息
        if (i < row - 1)
            printf("---|---|---\n");
    }
}*/

void DisplayBoard(char board[ROW][COL], int row, int col)
{
    int i = 0;
    for (i = 0; i < row; i++)
    {
        //打印数据
        // pirntf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
        int j = 0;
        for (j = 0; j < col; j++)
        {
            pirntf(" %c ", board[i][j]);
            if (j < col - 1)
                printf("|");
        }
        printf("\n");
        //打印分割信息
        // printf("---|---|---\n");
        if (i < row - 1)
        {
            int j = 0;
            for (j = 0; j < col; j++)
            {
                printf("---");
                if (j < col - 1)
                    printf("|");
            }
            printf("\n");
        }
    }
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
    int x = 0;
    int y = 0;
    printf("玩家下棋：>\n");

    while (1)
    {
        printf("请输入坐标：>");
        scanf("%d %d", &x, &y);
        if (x >= 1 && x <= row && y >= 1 && y <= col) //坐标在合法范围内
        {
            if (board[x - 1][y - 1] == ' ')
            {
                board[x - 1][y - 1] = '*';
                break;
            }
            else
            {
                printf("坐标被占用,不能下棋,请选择其他位置\n");
            }
        }
        else
        {
            printf("坐标非法,请重新输入\n");
        }
    }
}

void ComputerMove(char board[ROW][COL], int row, int col) //优化
{
    printf("电脑下棋:>\n");
    int x = 0;
    int y = 0;
    while (1)
    {
        x = rand() % row; // 0~row-1
        y = rand() % col; // 0~col-1 合法位置
        if (board[x][y] == ' ')
        {
            board[x][y] = '#';
            break;
        }
    }
}

//如果满了返回1 不满返回0
int IsFull(char board[ROW][COL], int row, int col)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (board[i][j] == ' ')
                return 0;
        }
    }
    return 1;
}

char IsWin(char board[ROW][COL], int row, int col) //优化
{
    //行
    int i = 0;
    for (i = 0; i < row; i++)
    {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
        {
            return board[i][1];
        }
    }
    //列
    int j = 0;
    for (j = 0; j < col; j++)
    {
        if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
        {
            return board[1][j];
        }
    }
    //对角线
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
    {
        return board[1][1];
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
    {
        return board[1][1];
    }
    //没有人赢 判断平局 棋盘满了
    if (IsFull(board, row, col))
    {
        return 'Q';
    }
    //游戏继续
    return 'C';
}