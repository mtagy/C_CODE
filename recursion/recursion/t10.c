#define _CRT_SECURE_NO_WARNINGS 1
//10. 1+2+°≠°≠+10µ›πÈ«ÛΩ‚
#include <stdio.h>

int sum(int n)
{
	if (n > 1)
		return n + sum(n - 1);
	else
		return 1;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = sum(n);
	printf("%d\n", ret);
	return 0;
}