#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int money = 0;
	scanf("%d", &money);
	int total = money;//����һ
	int empty = money;
	//�û�
	while (empty >= 2)
	{
		total += empty / 2;
		empty = empty % 2 + empty / 2;
	}
	printf("%d\n", total);

	//����  2*money-1  ������
	/*if (money > 0)
		printf("%d\n", 2 * money - 1);
	else
		printf("%d\n", 0);*/

	return 0;
}