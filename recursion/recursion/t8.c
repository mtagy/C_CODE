#define _CRT_SECURE_NO_WARNINGS 1
//7.Ğ¡ÀÖÀÖ×ßÌ¨½×
#include <stdio.h>

int fib(int n)
{//n=1  1   n=2  2 
	if (n <= 2)
		return n;
	else
		return fib(n - 1) + fib(n - 2);
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = fib(n);
	printf("%d", ret);
	return 0;
}