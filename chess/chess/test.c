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
	//��ʼ������
	InitBoard(Board, ROW, COL);
	//��ӡ����
	DisplayBoard(Board, ROW, COL);
	//����
	while (1)
	{
		PlayerMove(Board, ROW, COL);//�������

		ret = IsWin(Board, ROW, COL);//�ж���Ӯ
		if (ret != 'C')//û��Ӯ�ң�Ҳû��ƽ��(�������� ��Ϸ����
		{
			break;
		}
		DisplayBoard(Board, ROW, COL);
		ComputerMove(Board, ROW, COL);//��������
		ret = IsWin(Board, ROW, COL);//�ж���Ӯ
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(Board, ROW, COL);
	}
	//printf("ret=%c\n", ret);
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else if (ret == 'Q')
	{
		printf("ƽ��\n");
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
		printf("������ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			break;
		case 1:
			//printf("����Ϸ\n");
			game();
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}