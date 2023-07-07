#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//��ʼ������
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

//��ӡ����
void DisplayBoard(char Board[ROW][COL], int row, int col)
{
	int i = 0, j = 0;
	for (i = 0; i < row; i++)
	{
		//��ӡ����     |   |  ����
		for (j = 0; j < col; j++)
		{
			printf(" %c ", Board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		//��ӡ�ָ���---|---|--- ���� 
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
//�������
void PlayerMove(char Board[ROW][COL], int row, int col)
{
	int x = 0, y = 0;
	while (1)
	{
		printf("�������:>\n");
		printf("���������꣺");
		scanf("%d %d", &x, &y);
		//�ж�����ĺϷ���
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{//�ж������Ƿ�ռ��
			if (Board[x - 1][y - 1] == ' ')
			{
				Board[x - 1][y - 1] = '*';
				break;
			}

			else
				printf("���걻ռ�ã�����������\n");
		}
		else
		{
			printf("����Ƿ�,����������\n");
		}
	}

}


//��һ�� ��������
//void ComputerMove(char Board[ROW][COL], int row, int col)
//{
//
//	int x = 0, y = 0;
//	printf("��������:>\n");
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


//�ڶ��� ��������
void ComputerMove(char Board[ROW][COL], int row, int col)
{
	int x = 0, y = 0;
	printf("��������:>\n");
	//������Ӯȥ����

	//�������Ӯ ����


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
{//�ж�ʤ��
	int i = 0, j = 0, count1 = 0, count2 = 0;
	//��
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
	//��
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

	//�Խ���
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


	//�ж�ƽ�֣���������
	if (IsFull(Board, ROW, COL))
	{
		return 'Q';
	}

	return 'C';
}