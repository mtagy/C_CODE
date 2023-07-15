#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()
{
	printf("****************************************************\n");
	printf("***************** 1. play 0. exit ******************\n");
	printf("****************************************************\n");
}

void game()
{
	char Mine[ROWS][COLS] = { '0' };//设置雷的信息
	char Show[ROWS][COLS] = { '*' };//排查雷的信息

	//初始化雷
	InitBoard(Mine, ROWS, COLS, '0');
	InitBoard(Show, ROWS, COLS, '*');
	//打印雷的信息
	//DisplayBoard(Mine, ROW, COL);
	//DisplayBoard(Show, ROW, COL);

	//设置雷
	SetMine(Mine, ROW, COL);
	DisplayBoard(Mine, ROW, COL);
	//排查雷
	FindMine(Mine, Show, ROW, COL);
	//标记雷（把肯定是雷的位置标记出来，雷的个数会-1，排查了一个雷）
	MarkMine(Mine, Show, ROW, COL, '#');
	//展开一片


}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请输入选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//printf("玩游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新输入\n");
			break;
		}
	} while (input);

}