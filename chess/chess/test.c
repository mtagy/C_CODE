#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void meau()
{
	printf("**********************************\n");
	printf("********** 1.play 0.exit *********\n");
	printf("**********************************\n");
}

void game()
{
	char ret;
	char Board[ROW][COL] = { 0 };
	//初始化棋盘
	InitBoard(Board, ROW, COL);
	//打印棋盘
	DisplayBoard(Board, ROW, COL);
	//下棋
	while (1)
	{
		PlayerMove(Board, ROW, COL);//玩家下棋

		ret = IsWin(Board, ROW, COL);//判断输赢
		if (ret != 'C')//没有赢家，也没有平局(棋盘满） 游戏继续
		{
			break;
		}
		DisplayBoard(Board, ROW, COL);
		ComputerMove(Board, ROW, COL);//电脑下棋
		ret = IsWin(Board, ROW, COL);//判断输赢
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(Board, ROW, COL);
	}
	//printf("ret=%c\n", ret);
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else if (ret == 'Q')
	{
		printf("平局\n");
	}
	DisplayBoard(Board, ROW, COL);
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		meau();
		printf("请输入选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			break;
		case 1:
			//printf("玩游戏\n");
			game();
			break;
		default:
			printf("选择错误请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}