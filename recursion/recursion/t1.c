#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//递归   
//1.接收一个整型值（无符号），按照顺序打印它的每一位
void print(unsigned int num)
{
	if (num > 9)
	{
		print(num / 10);
	}
	printf("%d", num % 10);
}

int main()
{
	unsigned int num = 0;
	scanf("%u", &num);
	print(num);
	return 0;
}
//递归的两个必要条件：
//1.存在限制条件，当满足这个限制条件时，递归便不能继续
//2.每次递归调用之后越来越接近这个限制条件

//每一次递归都在逐步加深层次   
//递归有一种循环的感觉
//
//不用递归的话这个题需要创建数组才能实现正序打印每一位
 /* while (num)
{
	printf("%d \n", num % 10);// 倒序 可以用数组先存起来在按顺序输出
	num = num / 10;
}*/
