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
	char Mine[ROWS][COLS] = { '0' };//�����׵���Ϣ
	char Show[ROWS][COLS] = { '*' };//�Ų��׵���Ϣ

	//��ʼ����
	InitBoard(Mine, ROWS, COLS, '0');
	InitBoard(Show, ROWS, COLS, '*');
	//��ӡ�׵���Ϣ
	//DisplayBoard(Mine, ROW, COL);
	//DisplayBoard(Show, ROW, COL);

	//������
	SetMine(Mine, ROW, COL);
	DisplayBoard(Mine, ROW, COL);
	//�Ų���
	FindMine(Mine, Show, ROW, COL);
	//����ף��ѿ϶����׵�λ�ñ�ǳ������׵ĸ�����-1���Ų���һ���ף�
	MarkMine(Mine, Show, ROW, COL, '#');
	//չ��һƬ


}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("������ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//printf("����Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������������\n");
			break;
		}
	} while (input);

}