#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
////递归   
////1.接收一个整型值（无符号），按照顺序打印它的每一位
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
//递归的两个必要条件：
//1.存在限制条件，当满足这个限制条件时，递归便不能继续
//2.每次递归调用之后越来越接近这个限制条件

//每一次递归都在逐步加深层次   
//递归有一种循环的感觉

//不用递归的话这个题需要创建数组才能实现正序打印每一位
 /* while (num)
{
	printf("%d \n", num % 10);// 倒序 可以用数组先存起来在按顺序输出
	num = num / 10;
}*/


//2.编写函数不允许创建临时变量，求字符串的长度
//# include <stdio.h>
//# include <string.h>
//
//int my_strlen(char* str)
//{
//	int count = 0;//创建了临时变量
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
//		return 1 + my_strlen(str+1);//err:str++  先使用str 再自增 起不到作用  没法往里递归
//	}
//	return 0;
//}
////大化小：字符串  大   ------->   最小：'\0'  (只有一个\0)  return 0；
////小：若干个字符+'\0'  至少有1个字符  return 1+my_strlen(str+1)  具体多少交给递归最简单有一个
//
//int main()
//{
//	char ch[] = "abcdef";
//	//方法1 库函数
//	//int len = strlen(ch);
//	//方法2 自定义函数   方法3  递归实现
//	int len = my_strlen(ch);
//
//	printf("%d", len);
//	return 0;
//}

//3.n!(由公式写出递归)  
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

//法二：迭代
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

//4.fib  求第n个fib    1 1 2 3 5 8 13 21 34  55
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
//测试时：发现输入50 输出要花很长时间  原因是存在大量的重复计算 造成递归的层次太深 效率低下

//方法二：迭代
//#include <stdio.h>
//
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;//前两位
//	int c = 1;//输入n=1/2时返回1
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

//4 字符串逆序
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

//方法二：函数实现（迭代）
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

//方法三 递归实现1
//#include <stdio.h>
//#include <string.h>
//
//void reverse(char* str)
//{//逆序abcdef->交换af  逆序bcde  -> 交换af,be 逆序cd
//	int len = strlen(str);
//	char tmp = *str;
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (strlen(str + 1) >= 2) //中间剩一个字符就不用逆序了
//		reverse(str + 1);              //要加限制条件否则会死递归
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

//方法三 递归实现2
//#include <stdio.h>
//
//void reverse(char arr[], int left, int right)
//{//逆序abcdef->交换af  逆序bcde  -> 交换af,be 逆序cd
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

//5.递归实现N的K次方
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

//6.计算一个数的每位之和（递归）
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

//7.小乐乐走台阶
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

//8.最大公约数
//方法一：
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

//方法二：辗转相除法  最大公约数
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

//方法三：函数  辗转相除法
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

//方法四  递归  辗转相除法
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

//10. 1+2+……+10递归求解
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

//汉诺塔  
// A->C
// 1个盘子     A->C                            1次
// 2 个盘子    A->B   A->C  B->C      3次
// 3个盘子     A->C   A->B  C->B   A->C   B->A   B->C   A->C      7次    
// N个盘子               移动2^N-1次    
//n个盘子
// 先从A挪动n-1个到B上 
// 再将最后的一个从A挪到C上
//再将B上n-1个盘子借助A挪动到C
//#include <stdio.h>
//
//void move(char pos1, char pos2)
////起始位置pos1    目标位置pos2
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
//		hanoi(n - 1, pos1, pos3, pos2);//n-1个盘子从pos1(起始)借助pos3(中转)移动到pos2(目标)
//		move(pos1, pos3);//还剩一个从pos1起始位置挪到pos3目标位置
//		hanoi(n - 1, pos2, pos1, pos3);//n-1个盘子从pos2(起始)借助pos3(中转)移动到pos2(目标)
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	char pos1 = 'A', pos2 = 'B', pos3 = 'C';
//	//起始位置pos1   中转位置pos2   目标位置pos3 
//	//从起始到目标要借助中转位置
//	hanoi(n, pos1, pos2, pos3);
//	return 0;
//}

//青蛙跳台阶

//一次跳1/2     跳n级台阶的跳法   简单跳法
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

//一次跳1，2……n   跳n级台阶的跳法  变态跳法
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