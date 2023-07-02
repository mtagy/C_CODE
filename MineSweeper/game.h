#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 9
#define COL 9 //中间9*9也会用到 打印输出

#define ROWS ROW + 2
#define COLS COL + 2 //设置为11,方便排查边缘地方的雷，不需要判断位置是否合法

#define EASY_COUNT 10 //设置雷的数量

//初始化两个数组为0/*
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);

//打印输出
void DisplayBoard(char board[ROWS][COLS], int row, int col); //传的还是11*11数组的首地址,还是在11*11数组上操作，虽然只打印9*9数组，也不能用9*9数组接收

//设置雷
void SetMine(char board[ROWS][COLS], int row, int col);

//排查雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);