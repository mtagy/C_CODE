#define _CRT_SECURE_NO_WARNINGS 1
//������̨��
//һ����1/2     ��n��̨�׵�����
//��С
//����򵥵ģ�
//n=1           1                                  1������      
//n=2           1+1       2                     2������
//n=3           1+1+1  1+2    2+1       3������
//n��̨���޷Ǿ������������һ����һ��̨�ף�����n-1��̨��  ��һ��������̨�ף�����n-2��̨��   
//����fib(n)Ϊn��̨�׵�����   
//��fib(1)=1   fib(2)=2     fib(3)=fib(2)+fib(1)    fib(10)=fib(9)+fib(8)
// ��fib(n)=fib(n-1)+fib(n-2)  
//���ǾͿ��Ը���������Ƴ����Ĺ�ʽʵ�ֵݹ�

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

//һ����1��2����n   ��n��̨�׵�����
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
