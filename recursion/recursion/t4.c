#define _CRT_SECURE_NO_WARNINGS 1
//4.fib  求第n个fib    1 1 2 3 5 8 13 21 34  55
#include <stdio.h>

int fib(int n)
{
	if (n > 2)
		return fib(n - 1) + fib(n - 2);
	else
		return 1;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = fib(n);
	printf("%d", ret);
}
//测试时：发现输入50 输出要花很长时间  原因是存在大量的重复计算 造成递归的层次太深 效率低下

//方法二：迭代
#include <stdio.h>

int fib(int n)
{
	int a = 1;
	int b = 1;//前两位
	int c = 1;//输入n=1/2时返回1
	while (n >= 3)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = fib(n);
	printf("%d", ret);
	return 0;
}
