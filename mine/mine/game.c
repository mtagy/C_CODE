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
	printf("---------ɨ����Ϸ---------\n");
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
	printf("---------ɨ����Ϸ---------\n");
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
	//�������
	// return (board[x - 1][y] + board[x - 1][y - 1] + board[x][y - 1] + board[x + 1][y - 1] + board[x + 1][y] + board[x - 1][y] + board[x + 1][y + 1] + board[x][y + 1] + board[x - 1][y + 1] - 8 * '0');
}

void FindMine(char Mine[ROWS][COLS], char Show[ROWS][COLS], int row, int col)
{
	int x, y;//���������  (x y)
	int win = 0;//���׵ĸ���  �����Ų����   �ҳ����з��׾�Ӯ��
	while (win < row * col - EASY_COUNT)
	{
		printf("����������:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)//�ж�����Ϸ���
		{
			if (Show[x][y] == '*')//�ж������Ƿ��Ų��
			{
				//�Ų�  �ж����괦�Ƿ�Ϊ��  ��  ը��   ��   ��ʾ�ܱ��׸���
				if (Mine[x][y] == '0')//'0'��������   '1'��ʾ��
				{
					win++;//����+1  ��Ҫ�Ų�ķ���-1 
					int count = get_mine_count(Mine, x, y);
					Show[x][y] = count + '0';
					DisplayBoard(Show, ROW, COL);
				}
				else
				{
					printf("���ź����㱻ը����\n");
					DisplayBoard(Mine, ROW, COL);
					break;
				}
			}
			else
			{
				printf("�������ѱ��Ų飬��������������\n");
			}
		}
		else
		{
			printf("�������겻�Ϸ�������������\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("��ϲ�����׳ɹ�\n");
		DisplayBoard(Mine, ROW, COL);
	}
}

void MarkMine(char Mine[ROWS][COLS], char Show[ROWS][COLS], int row, int col, char set)
{
	int x, y;
	int mine = EASY_COUNT;
	while (mine)
	{
		printf("����������ȥ�����:>");
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
					printf("��Ǵ���,��ǰλ�ò�����\n");
					break;
				}
			}
			else
			{
				printf("�������ѱ����ã�����������\n");
			}
		}
		else
		{
			printf("����Ƿ�������������\n");
		}
	}
	if (mine == 0) printf("��ϲ�������׶������\n");
}
