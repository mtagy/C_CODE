#define _CRT_SECURE_NO_WARNINGS 1
//青蛙跳台阶
//一次跳1/2     跳n级台阶的跳法
//大化小
//先想简单的：
//n=1           1                                  1种跳法      
//n=2           1+1       2                     2种跳法
//n=3           1+1+1  1+2    2+1       3种跳法
//n阶台阶无非就两种情况：第一步跳一个台阶，还有n-1个台阶  第一步跳两个台阶，还有n-2个台阶   
//假设fib(n)为n阶台阶的跳法   
//则fib(1)=1   fib(2)=2     fib(3)=fib(2)+fib(1)    fib(10)=fib(9)+fib(8)
// 即fib(n)=fib(n-1)+fib(n-2)  
//我们就可以根据这个递推出来的公式实现递归

#include  <stdio.h>
int fib(int n)
{
	if (n > 2)
		return fib(n - 1) + fib(n - 2);
	else
		return n;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = fib(n);
	return 0;
}

//一次跳1，2……n   跳n级台阶的跳法
#include<stdio.h>
int f(int n)
{
	if (n > 1)
		return 2 * f(n - 1);
	else
		return 1;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = f(n);
	printf("%d\n", ret);
	return 0;
}
