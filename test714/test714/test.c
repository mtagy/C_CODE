#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int money = 0;
	scanf("%d", &money);
	int total = money;//方法一
	int empty = money;
	//置换
	while (empty >= 2)
	{
		total += empty / 2;
		empty = empty % 2 + empty / 2;
	}
	printf("%d\n", total);

	//规律  2*money-1  方法二
	/*if (money > 0)
		printf("%d\n", 2 * money - 1);
	else
		printf("%d\n", 0);*/

	return 0;
}