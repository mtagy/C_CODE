#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//初始化棋盘
InitBoard(char Board[ROW][COL], int row, int col)
{
	int i = 0, j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			Board[i][j] = ' ';
		}
	}
}

//打印棋盘
void DisplayBoard(char Board[ROW][COL], int row, int col)
{
	int i = 0, j = 0;
	for (i = 0; i < row; i++)
	{
		//打印数据     |   |  三行
		for (j = 0; j < col; j++)
		{
			printf(" %c ", Board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		//打印分割线---|---|--- 两行 
		if (i < row - 1)
		{
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
//玩家下棋
void PlayerMove(char Board[ROW][COL], int row, int col)
{
	int x = 0, y = 0;
	while (1)
	{
		printf("玩家下棋:>\n");
		printf("请输入坐标：");
		scanf("%d %d", &x, &y);
		//判断坐标的合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{//判断坐标是否被占用
			if (Board[x - 1][y - 1] == ' ')
			{
				Board[x - 1][y - 1] = '*';
				break;
			}

			else
				printf("坐标被占用，请重新输入\n");
		}
		else
		{
			printf("坐标非法,请重新输入\n");
		}
	}

}


//第一版 电脑下棋
//void ComputerMove(char Board[ROW][COL], int row, int col)
//{
//
//	int x = 0, y = 0;
//	printf("电脑下棋:>\n");
//	while (1)
//	{
//		x = rand() % ROW;
//		y = rand() % COL;
//		if (Board[x][y] == ' ')
//		{
//			Board[x][y] = '#';
//			break;
//		}
//
//	}
//}


//第二版 电脑下棋
void ComputerMove(char Board[ROW][COL], int row, int col)
{
	int x = 0, y = 0;
	printf("电脑下棋:>\n");
	//按电脑赢去下棋

	//不让玩家赢 拦棋


}

int IsFull(char Board[ROW][COL], int row, int col)
{
	int i = 0, j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (Board[i][j] == ' ') return 0;
		}
	}
	return 1;
}

char IsWin(char Board[ROW][COL], int row, int col)
{//判断胜负
	int i = 0, j = 0, count1 = 0, count2 = 0;
	//行
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (Board[i][j] == '*') count1++;
			if (Board[i][j] == '#') count2++;
			if (count1 == row || count2 == row) return Board[i][j];
		}
		count1 = 0;
		count2 = 0;
	}
	//列
	count1 = 0;
	count2 = 0;
	for (j = 0; j < col; j++)
	{
		for (i = 0; i < row; i++)
		{
			if (Board[i][j] == '*') count1++;
			if (Board[i][j] == '#') count2++;
			if (count1 == row || count2 == row) return Board[i][j];
		}
		count1 = 0;
		count2 = 0;
	}

	//对角线
	count1 = 0;
	count2 = 0;
	for (i = 0; i < row; i++)
	{
		if (Board[i][row - 1 - i] == '*') count1++;
		if (Board[i][row - 1 - i] == '#') count2++;
		if (count1 == row || count2 == row) return Board[i][row - 1 - i];
	}


	count1 = 0;
	count2 = 0;
	for (i = 0; i < row; i++)
	{
		if (Board[i][i] == '*') count1++;
		if (Board[i][i] == '#') count2++;
		if (count1 == row || count2 == row) return Board[i][i];
	}


	//判断平局（棋盘满）
	if (IsFull(Board, ROW, COL))
	{
		return 'Q';
	}

	return 'C';
}