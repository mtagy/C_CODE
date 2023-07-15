#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void InitBoard(char Board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0, j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			Board[i][j] = set;
		}
	}
}

void DisplayBoard(char Board[ROWS][COLS], int row, int col)
{
	int i = 0, j = 0;
	printf("---------扫雷游戏---------\n");
	for (i = 0; i <= col; i++)
	{
		printf(" %d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf(" %d ", i);
		for (j = 1; j <= col; j++)
		{
			printf(" %c ", Board[i][j]);
		}
		printf("\n");
	}
	printf("---------扫雷游戏---------\n");
}

void SetMine(char Mine[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	int i = 0, j = 0;
	while (count)
	{
		i = rand() % ROW + 1;
		j = rand() % COL + 1;
		if (Mine[i][j] == '0')
		{
			Mine[i][j] = '1';
			count--;
			//printf("count=%d,i=%d,j=%d\n", count, i, j);
		}
	}
}

int get_mine_count(char Mine[ROWS][COLS], int  x, int y)
{
	int i = 0, j = 0, sum = 0;
	for (i = -1; i <= 1; i++)
	{
		for (j = -1; j <= 1; j++)
		{
			sum += (Mine[x + i][y + j] - '0');
		}
	}
	return sum;
	//暴力求解
	// return (board[x - 1][y] + board[x - 1][y - 1] + board[x][y - 1] + board[x + 1][y - 1] + board[x + 1][y] + board[x - 1][y] + board[x + 1][y + 1] + board[x][y + 1] + board[x - 1][y + 1] - 8 * '0');
}

void FindMine(char Mine[ROWS][COLS], char Show[ROWS][COLS], int row, int col)
{
	int x, y;//输入的坐标  (x y)
	int win = 0;//非雷的个数  决定排查次数   找出所有非雷就赢了
	while (win < row * col - EASY_COUNT)
	{
		printf("请输入坐标:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)//判断坐标合法性
		{
			if (Show[x][y] == '*')//判断坐标是否被排查过
			{
				//排查  判断坐标处是否为雷  是  炸死   否   显示周边雷个数
				if (Mine[x][y] == '0')//'0'代表不是雷   '1'表示雷
				{
					win++;//非雷+1  需要排查的非雷-1 
					int count = get_mine_count(Mine, x, y);
					Show[x][y] = count + '0';
					DisplayBoard(Show, ROW, COL);
				}
				else
				{
					printf("很遗憾，你被炸死了\n");
					DisplayBoard(Mine, ROW, COL);
					break;
				}
			}
			else
			{
				printf("该坐标已被排查，请重新输入坐标\n");
			}
		}
		else
		{
			printf("输入坐标不合法，请重新输入\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜你排雷成功\n");
		DisplayBoard(Mine, ROW, COL);
	}
}

void MarkMine(char Mine[ROWS][COLS], char Show[ROWS][COLS], int row, int col, char set)
{
	int x, y;
	int mine = EASY_COUNT;
	while (mine)
	{
		printf("请输入坐标去标记雷:>");
		scanf("%d %d %c", &x, &y, &set);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (Show[x][y] == '*')
			{
				if (Mine[x][y] == '1')
				{
					Show[x][y] = set;
					mine--;
				}
				else
				{
					printf("标记错误,当前位置不是雷\n");
					break;
				}
			}
			else
			{
				printf("该坐标已被设置，请重新输入\n");
			}
		}
		else
		{
			printf("坐标非法，请重新输入\n");
		}
	}
	if (mine == 0) printf("恭喜你所有雷都被标记\n");
}
