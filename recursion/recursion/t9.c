#define _CRT_SECURE_NO_WARNINGS 1
//8.最大公约数
//方法一：
#include <stdio.h>

int main()
{
	int num1 = 0, num2 = 0;
	scanf("%d %d", &num1, &num2);
	int m = (num1 > num2 ? num1 : num2);
	int i = 0;
	while (1)
	{
		if (num1 % m == 0 && num2 % m == 0)
		{
			break;
		}
		m--;
	}
	printf("%d", m);
	return 0;
}

//方法二：辗转相除法  最大公约数
#include <stdio.h>

int main()
{
	int a = 0, b = 0, c = 0;
	scanf("%d %d", &a, &b);
	while (c = a % b)
	{
		a = b;
		b = c;
	}
	printf("%d", b);
	return 0;
}

//方法三：函数  辗转相除法
#include <stdio.h>
int divisor(int a, int b)
{
	int c = 0;
	while (c = a % b)
	{
		a = b;
		b = c;
	}
	return b;
}

int main()
{
	int a = 0, b = 0;
	scanf("%d %d", &a, &b);
	int ret = divisor(a, b);
	printf("%d\n", ret);
	return 0;
}

//方法四  递归  辗转相除法
#include <stdio.h>
int divisor(int a, int b)
{
	int c = 0;
	if (c = a % b)
	{
		a = b;
		b = c;
		return divisor(a, b);
	}
	return b;
}

int main()
{
	int a = 0, b = 0;
	scanf("%d %d", &a, &b);
	int ret = divisor(a, b);
	printf("%d\n", ret);
	return 0;
}