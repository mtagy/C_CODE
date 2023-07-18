#define _CRT_SECURE_NO_WARNINGS 1
4 �ַ�������
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

//������������ʵ�֣�������
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

//������ �ݹ�ʵ��1
#include <stdio.h>
#include <string.h>

void reverse(char* str)
{//����abcdef->����af  ����bcde  -> ����af,be ����cd
	int len = strlen(str);
	char tmp = *str;
	*str = *(str + len - 1);
	*(str + len - 1) = '\0';
	if (strlen(str + 1) >= 2) //�м�ʣһ���ַ��Ͳ���������
		reverse(str + 1);              //Ҫ������������������ݹ�
	*(str + len - 1) = tmp;
}

int main()
{
	char arr[] = "abcdef";
	reverse(arr);
	printf("%s\n", arr);
	return 0;
}

//������ �ݹ�ʵ��2
#include <stdio.h>

void reverse(char arr[], int left, int right)
{//����abcdef->����af  ����bcde  -> ����af,be ����cd
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
