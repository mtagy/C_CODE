#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//�ݹ�   
//1.����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ
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
//�ݹ��������Ҫ������
//1.�������������������������������ʱ���ݹ�㲻�ܼ���
//2.ÿ�εݹ����֮��Խ��Խ�ӽ������������

//ÿһ�εݹ鶼���𲽼�����   
//�ݹ���һ��ѭ���ĸо�
//
//���õݹ�Ļ��������Ҫ�����������ʵ�������ӡÿһλ
 /* while (num)
{
	printf("%d \n", num % 10);// ���� �����������ȴ������ڰ�˳�����
	num = num / 10;
}*/
