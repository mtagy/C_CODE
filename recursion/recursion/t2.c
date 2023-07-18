#define _CRT_SECURE_NO_WARNINGS 1
//2.编写函数不允许创建临时变量，求字符串的长度
# include <stdio.h>
# include <string.h>

int my_strlen(char* str)
{
	int count = 0;//创建了临时变量
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

int my_strlen(char* str)
{
	if (*str != '\0')
	{
		return 1 + my_strlen(str + 1);//err:str++  先使用str 再自增 起不到作用  没法往里递归
	}
	return 0;
}
//大化小：字符串  大   ------->   最小：'\0'  (只有一个\0)  return 0；
//小：若干个字符+'\0'  至少有1个字符  return 1+my_strlen(str+1)  具体多少交给递归最简单有一个

int main()
{
	char ch[] = "abcdef";
	//方法1 库函数
	//int len = strlen(ch);
	//方法2 自定义函数   方法3  递归实现
	int len = my_strlen(ch);

	printf("%d", len);
	return 0;
}