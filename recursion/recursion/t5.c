#define _CRT_SECURE_NO_WARNINGS 1
4 字符串逆序
#include <stdio.h>
#include <string.h>
int main()
{
	char arr[] = { "abcdefg" };
	int left = 0;
	int right = strlen(arr) - 1;
	while (left < right)
	{
		char tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
	printf("%s", arr);
	return 0;
}

//方法二：函数实现（迭代）
#include <stdio.h>
#include <string.h>
void reverse(char arr[])
{
	int left = 0;
	int right = strlen(arr) - 1;
	while (left < right)
	{
		char tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}

int main()
{
	char arr[] = "abcdef";
	reverse(arr);
	printf("%s\n", arr);
	return 0;
}

//方法三 递归实现1
#include <stdio.h>
#include <string.h>

void reverse(char* str)
{//逆序abcdef->交换af  逆序bcde  -> 交换af,be 逆序cd
	int len = strlen(str);
	char tmp = *str;
	*str = *(str + len - 1);
	*(str + len - 1) = '\0';
	if (strlen(str + 1) >= 2) //中间剩一个字符就不用逆序了
		reverse(str + 1);              //要加限制条件否则会死递归
	*(str + len - 1) = tmp;
}

int main()
{
	char arr[] = "abcdef";
	reverse(arr);
	printf("%s\n", arr);
	return 0;
}

//方法三 递归实现2
#include <stdio.h>

void reverse(char arr[], int left, int right)
{//逆序abcdef->交换af  逆序bcde  -> 交换af,be 逆序cd
	if (left < right)
	{
		char tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		reverse(arr, left + 1, right - 1);
	}
}

int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

int main()
{
	char arr[] = "abcdef";
	int left = 0;
	int right = my_strlen(arr) - 1;
	reverse(arr, left, right);
	printf("%s\n", arr);
	return 0;
}
