#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 3
#define COL 3 //修改成五子棋只需要改上面的数字比较方便

//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col);
//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);
//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col);
//电脑下棋
//找没有下棋的位置随机下
void ComputerMove(char board[ROW][COL], int row, int col);
//玩家赢-返回'*'
//电脑赢-返回'#'
//平局-返回'Q'
//继续-返回'C'
char IsWin(char board[ROW][COL], int row, int col);
