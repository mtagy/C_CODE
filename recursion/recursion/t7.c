#define _CRT_SECURE_NO_WARNINGS 1

//6.����һ������ÿλ֮�ͣ��ݹ飩
#include <stdio.h>

int DigSum(int n)
{
	if (n > 9)
	{
		return DigSum(n / 10) + n % 10;
	}
	return n;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = DigSum(n);
	printf("%d", ret);
	return 0;
}

