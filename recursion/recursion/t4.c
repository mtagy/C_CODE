#define _CRT_SECURE_NO_WARNINGS 1
//4.fib  ���n��fib    1 1 2 3 5 8 13 21 34  55
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
//����ʱ����������50 ���Ҫ���ܳ�ʱ��  ԭ���Ǵ��ڴ������ظ����� ��ɵݹ�Ĳ��̫�� Ч�ʵ���

//������������
#include <stdio.h>

int fib(int n)
{
	int a = 1;
	int b = 1;//ǰ��λ
	int c = 1;//����n=1/2ʱ����1
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
