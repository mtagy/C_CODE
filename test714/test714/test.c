#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
////�ݹ�   
////1.����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ
//void print(unsigned int num)
//{
//	if (num > 9)
//	{
//		print(num / 10);
//	}
//	printf("%d", num % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num); 
//	print(num);
//	return 0;
//}
//�ݹ��������Ҫ������
//1.�������������������������������ʱ���ݹ�㲻�ܼ���
//2.ÿ�εݹ����֮��Խ��Խ�ӽ������������

//ÿһ�εݹ鶼���𲽼�����   
//�ݹ���һ��ѭ���ĸо�

//���õݹ�Ļ��������Ҫ�����������ʵ�������ӡÿһλ
 /* while (num)
{
	printf("%d \n", num % 10);// ���� �����������ȴ������ڰ�˳�����
	num = num / 10;
}*/


//2.��д��������������ʱ���������ַ����ĳ���
//# include <stdio.h>
//# include <string.h>
//
//int my_strlen(char* str)
//{
//	int count = 0;//��������ʱ����
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str+1);//err:str++  ��ʹ��str ������ �𲻵�����  û������ݹ�
//	}
//	return 0;
//}
////��С���ַ���  ��   ------->   ��С��'\0'  (ֻ��һ��\0)  return 0��
////С�����ɸ��ַ�+'\0'  ������1���ַ�  return 1+my_strlen(str+1)  ������ٽ����ݹ������һ��
//
//int main()
//{
//	char ch[] = "abcdef";
//	//����1 �⺯��
//	//int len = strlen(ch);
//	//����2 �Զ��庯��   ����3  �ݹ�ʵ��
//	int len = my_strlen(ch);
//
//	printf("%d", len);
//	return 0;
//}

//3.n!(�ɹ�ʽд���ݹ�)  
//#include <stdio.h>
//int fact(int n)
//{
//	if (n > 1)
//	{
//		return n * fact(n - 1);
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fact(n);
//	printf("%d", ret);
//	return 0;
//}

//����������
//#include <stdio.h>
//
//int fact(int n)
//{
//	int ret = 1;
//	while (n)
//	{
//		ret = n * ret;
//		n--;
//	}
//	return ret;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fact(n);
//	printf("%d", ret);
//	return 0;
//}

//4.fib  ���n��fib    1 1 2 3 5 8 13 21 34  55
//#include <stdio.h>
//
//int fib(int n)
//{
//	if (n > 2)
//		return fib(n - 1) + fib(n - 2); 
//	else
//		return 1;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d", ret);
//}
//����ʱ����������50 ���Ҫ���ܳ�ʱ��  ԭ���Ǵ��ڴ������ظ����� ��ɵݹ�Ĳ��̫�� Ч�ʵ���

//������������
//#include <stdio.h>
//
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;//ǰ��λ
//	int c = 1;//����n=1/2ʱ����1
//	while (n >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d", ret);
//	return 0;
//}

//4 �ַ�������
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[] = { "abcdefg" };
//	int left = 0;
//	int right = strlen(arr) - 1;
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	printf("%s", arr);
//	return 0;
//}

//������������ʵ�֣�������
//#include <stdio.h>
//#include <string.h>
//void reverse(char arr[])
//{
//	int left = 0;
//	int right = strlen(arr) - 1;
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//������ �ݹ�ʵ��1
//#include <stdio.h>
//#include <string.h>
//
//void reverse(char* str)
//{//����abcdef->����af  ����bcde  -> ����af,be ����cd
//	int len = strlen(str);
//	char tmp = *str;
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (strlen(str + 1) >= 2) //�м�ʣһ���ַ��Ͳ���������
//		reverse(str + 1);              //Ҫ������������������ݹ�
//	*(str + len - 1) = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//������ �ݹ�ʵ��2
//#include <stdio.h>
//
//void reverse(char arr[], int left, int right)
//{//����abcdef->����af  ����bcde  -> ����af,be ����cd
//	if (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		reverse(arr, left + 1, right - 1);
//	}
//}
//
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int left = 0;
//	int right = my_strlen(arr) - 1;
//	reverse(arr, left, right);
//	printf("%s\n", arr);
//	return 0;
//}

//5.�ݹ�ʵ��N��K�η�
//#include <stdio.h>
//
//double Pow(int n, int k)
//{
//	if (k > 0)
//		return n * Pow(n, k - 1);
//	else if (k == 0)
//		return 1;
//	else if (k < 0)
//		return 1.0 / Pow(n, -k);
//}
//
//int main()
//{
//	int n = 0, k = 0;
//	scanf("%d %d", &n, &k);
//	double ret = Pow(n, k);
//	printf("%lf", ret);
//	return 0;
//}

//6.����һ������ÿλ֮�ͣ��ݹ飩
//#include <stdio.h>
//
//int DigSum(int n)
//{
//	if (n > 9)
//	{
//		return DigSum(n / 10) + n % 10;
//	}
//	return n;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = DigSum(n);
//	printf("%d", ret);
//	return 0;
//}

//7.С������̨��
//#include <stdio.h>
//
//int fib(int n)
//{//n=1  1   n=2  2 
//	if (n <= 2)
//		return n;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d", ret);
//	return 0;
//}

//8.���Լ��
//����һ��
//#include <stdio.h>
//
//int main()
//{
//	int num1 = 0, num2 = 0;
//	scanf("%d %d", &num1, &num2);
//	int m = (num1 > num2 ? num1 : num2);
//	int i = 0;
//	while (1)
//	{
//		if (num1 % m == 0 && num2 % m == 0)
//		{
//			break;
//		}
//		m--;
//	}
//	printf("%d", m);
//	return 0;
//}

//��������շת�����  ���Լ��
//#include <stdio.h>
//
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	scanf("%d %d", &a, &b);
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d", b);
//	return 0;
//}

//������������  շת�����
//#include <stdio.h>
//int divisor(int a, int b)
//{
//	int c = 0;
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//	return b;
//}
//
//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d %d", &a, &b);
//	int ret = divisor(a, b);
//	printf("%d\n", ret);
//	return 0;
//}

//������  �ݹ�  շת�����
//#include <stdio.h>
//int divisor(int a, int b)
//{
//	int c = 0;
//	if (c = a % b)
//	{
//		a = b;
//		b = c;
//		return divisor(a, b);
//	}
//	return b;
//}
//
//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d %d", &a, &b);
//	int ret = divisor(a, b);
//	printf("%d\n", ret);
//	return 0;
//}

//10. 1+2+����+10�ݹ����
//#include <stdio.h>
//
//int sum(int n)
//{
//	if (n > 1)
//		return n + sum(n - 1);
//	else
//		return 1;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = sum(n);
//	printf("%d\n", ret);
//	return 0;
//}

//��ŵ��  
// A->C
// 1������     A->C                            1��
// 2 ������    A->B   A->C  B->C      3��
// 3������     A->C   A->B  C->B   A->C   B->A   B->C   A->C      7��    
// N������               �ƶ�2^N-1��    
//n������
// �ȴ�AŲ��n-1����B�� 
// �ٽ�����һ����AŲ��C��
//�ٽ�B��n-1�����ӽ���AŲ����C
//#include <stdio.h>
//
//void move(char pos1, char pos2)
////��ʼλ��pos1    Ŀ��λ��pos2
//{
//	printf("%c->%c ", pos1, pos2);
//}
//
//void hanoi(int n, char pos1, char pos2, char pos3)
//{
//	if (n == 1)
//		move(pos1, pos3);
//	else
//	{
//		hanoi(n - 1, pos1, pos3, pos2);//n-1�����Ӵ�pos1(��ʼ)����pos3(��ת)�ƶ���pos2(Ŀ��)
//		move(pos1, pos3);//��ʣһ����pos1��ʼλ��Ų��pos3Ŀ��λ��
//		hanoi(n - 1, pos2, pos1, pos3);//n-1�����Ӵ�pos2(��ʼ)����pos3(��ת)�ƶ���pos2(Ŀ��)
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	char pos1 = 'A', pos2 = 'B', pos3 = 'C';
//	//��ʼλ��pos1   ��תλ��pos2   Ŀ��λ��pos3 
//	//����ʼ��Ŀ��Ҫ������תλ��
//	hanoi(n, pos1, pos2, pos3);
//	return 0;
//}

//������̨��

//һ����1/2     ��n��̨�׵�����   ������
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

//#include <stdio.h>
//int fib(int n)
//{
//	if (n > 2)
//		return fib(n - 1) + fib(n - 2);
//	else
//		return n;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d\n", ret);
//	return 0;
//}

//һ����1��2����n   ��n��̨�׵�����  ��̬����
//#include<stdio.h>
//int f(int n)
//{
//	if (n > 1)
//		return 2 * f(n - 1);
//	else
//		return 1;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = f(n);
//	printf("%d\n", ret);
//	return 0;
//}