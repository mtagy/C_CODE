#define _CRT_SECURE_NO_WARNINGS 1
//2.��д��������������ʱ���������ַ����ĳ���
# include <stdio.h>
# include <string.h>

int my_strlen(char* str)
{
	int count = 0;//��������ʱ����
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
		return 1 + my_strlen(str + 1);//err:str++  ��ʹ��str ������ �𲻵�����  û������ݹ�
	}
	return 0;
}
//��С���ַ���  ��   ------->   ��С��'\0'  (ֻ��һ��\0)  return 0��
//С�����ɸ��ַ�+'\0'  ������1���ַ�  return 1+my_strlen(str+1)  ������ٽ����ݹ������һ��

int main()
{
	char ch[] = "abcdef";
	//����1 �⺯��
	//int len = strlen(ch);
	//����2 �Զ��庯��   ����3  �ݹ�ʵ��
	int len = my_strlen(ch);

	printf("%d", len);
	return 0;
}