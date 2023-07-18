#define _CRT_SECURE_NO_WARNINGS 1
//3.n!(由公式写出递归)  
#include <stdio.h>
int fact(int n)
{
	if (n > 1)
	{
		return n * fact(n - 1);
	}
	else
	{
		return 1;
	}
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = fact(n);
	printf("%d", ret);
	return 0;
}

//法二：迭代
#include <stdio.h>

int fact(int n)
{
	int ret = 1;
	while (n)
	{
		ret = n * ret;
		n--;
	}
	return ret;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = fact(n);
	printf("%d", ret);
	return 0;
}