#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	/*char ch = 'w';
//	char* pc = &ch;
//	*pc = 'b';
//	printf("%c\n", ch);*/
//	const char* p = "abcdef";//���ǽ��ַ�������p�����ַ������ַ���ַ�ŵ�p
//	printf("%s", p);       //�����ַ���ַ��ʼ��ӡֱ��\0Ϊֹ 
//	//printf��%s��ӡ�ַ���ʱ�ṩ���ַ���ַ���ɴ����ַ���ַ��ʼ��ӡֱ��\0Ϊֹ
//	//�����ַ��� �ǲ��ܱ��޸ĵ� ��ʱp�иĵ�Ȩ�� ����ȫ���ܻ���warning   *p='w'��Ȼ��ôд������Ի�������
//	//�Ľ���const char* p = "abcdef"; ��һ��const��������p���ܱ��ı� ��*p='w'��ֱ�ӱ���
//	return 0;
//}

/*#include <stdio.h>
int main()
{
	const char* p1 = "abcdef";
	const char* p2 = "abcdef";
	//�����ַ��������ڴ��е�ֻ��������(ֻ�ܶ�����д��ֻ���ò����޸�)
	//p1p2ָ��ͬһ���ַ���(�����ַ���)
	char  arr1[] = "abcdef";
	char  arr2[] = "abcdef";
	//���������������ռ������ ��������ռ���ʼ��ַ��һ��
	if (p1 == p2)
		printf("p1=p2\n");//p1=p2
	else
		printf("p1!=p2\n");

	if (arr1 == arr2)
		printf("arr1=arr2\n");
	else
		printf("arr1!=parr2\n");//arr1!=parr2

	return 0;
}*/

/*#include <stdio.h>
int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 2,3,4,5,6 };
	int arr3[] = { 3,4,5,6,7 };//����һά�������ڴ治��������ŵģ���������
	int* parr[3] = { arr1,arr2,arr3 };//����ָ�����飨���͵�ַ�� ��������ʾ��Ԫ�ص�ַ
	//ģ��ʵ��һ����ά����
	int i = 0, j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d ", parr[i][j]);//parr[i]������  *(p+j)<===>p[j]
		}
		printf("\n");
	}
	return 0;
}*/

//������
/*#include <stdio.h>
int main()
{
	int arr[10] = { 0 };
	printf("%p\n", arr);
	printf("%p\n", arr + 1);//int* ָ��+1 ����1��int��4byte��

	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0] + 1);//int*ָ�� +1 ����1��int��4byte��

	printf("%p\n", &arr);
	printf("%p\n", &arr + 1);//��������ĵ�ַ ������������    ����ָ������(int (*) [10])��ָ��+1  ������������

	int sz = sizeof(arr);
	printf("%d\n", sz);

	int* p = arr;//�����Ԫ�ص�ַ
	int(*p2)[10] = &arr;//p2ָ��arr���� ������ĵ�ַ������p2
	//&arrȡ��������������ĵ�ַ===>����ָ��
	// ����ָ��������������͵ĵ�ַ
	// �ַ�ָ������������ַ��ĵ�ַ
	// ����ָ���������������ĵ�ַ
	//int[10]��ʾָ��Ķ�����һ�����飬������10��Ԫ�أ�ÿ��Ԫ����int
	//*����p2��ָ�� ������*���ǽ����ã�û�����ͣ��������ֲ��ǽ����ã�
	//p2��������int(*)[10]  (ȥ������ʣ�µľ�������)====>����ָ�������

	return 0;
}*/
//������ͨ����ʾ��Ԫ�ص�ַ����������������
//1.sizeof(���������������������ʾ�������飬������������Ĵ�С����λbyte
//2.&���������������������ʾ�������飬����&������ȡ��������������ĵ�ַ 

/*#include <stdio.h>
int main()
{
	char* arr[5] = { 0 };//ָ������
	char* (*pc)[5] = &arr;//���ָ������ĵ�ַ  ����ָ��
	//pc�Ǹ�ָ��  ��*pc)
	//����Ԫ�ظ�����5   [5]
	//����Ԫ�ص����ͣ�char*  ===>char* (*pc)[5]
	//����ָ�룺���һ��ָ������ĵ�ַ
	return 0;
}*/

/*#include <stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int(*p)[] = &arr;//�ᱨwarning []����д�ϼ���Ԫ��
	int(*p)[10] = &arr;
	//��������ָ�������ӡ����    ����ʾ��
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{//��Ť��ʹ������ָ��
		printf("%d ", *(*p + i));
		//p��ָ������ģ�*p��ʵ���൱��������(������������������)������������������Ԫ�ص�ַ
		//*p��������������Ԫ�صĵ�ַ
	}
	printf("\n");

	//���������ͨ������      ��ȷʾ��
	int* p1 = arr;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(p1 + i));
	}

	return 0;
}*/

/*#include <stdio.h>
void print1(int arr[3][5], int r, int c)//�βΣ�������ʽ
{
	int i = 0, j = 0;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

void print2(int(*p)[5], int r, int c)//��ά���鴫�Σ��βΣ�ָ����ʽ
{
	int i = 0, j = 0;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			//printf("%d ", *(*(p + i) + j));
			printf("%d ", p[i][j]);
		}
		printf("\n");
		//pָ���һ��p+iָ���i��(��i�е�ַ)
		//*(p+i)(--->p[i]�൱��arr[i]�����ڶ�ά����ÿһ�е�����������arr[i])
		//��һ�еĵ�ַ�������õ���һ�У��൱���õ���һ�е�������arr[i]
		//�������൱����Ԫ�ص�ַ
	}
}

int main()
{
	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
	print1(arr, 3, 5);
	print2(arr, 3, 5);
	//arr����������Ԫ�ص�ַ
	 //��ά�������Ԫ�������ĵ�һ��
	 //��ά�����������arr:��Ԫ�ص�ַ����һ�е�ַ����һ��һά����ĵ�ַ ===>��������ָ��
	return 0;
}*/

#include<stdio.h>

void menu()
{
	printf("*******************************************\n");
	printf("*************1. add       2. sub **********\n");
	printf("*************3. mul       4. div **********\n");
	printf("*************0. exit             **********\n");
	printf("*******************************************\n");
}

void calc(int (*pf)(int, int))
{
	int x = 0, y = 0, ret = 0;
	printf("������������������>");
	scanf("%d %d", &x, &y);
	ret = pf(x, y);
	printf("%d\n", ret);
}

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		//printf("������������������>");
		//scanf("%d %d", &x, &y);
		switch (input)
		{
		case 1:
			//ret = Add(x, y);
			//printf("%d\n", ret);
			calc(Add);
			break;
		case 2:
			/*ret = Sub(x, y);
			printf("%d\n", ret);*/
			calc(Sub);
			break;
		case 3:
			/*ret = Mul(x, y);
			printf("%d\n", ret);*/
			calc(Mul);
			break;
		case 4:
			/*ret = Div(x, y);
			printf("%d\n", ret);*/
			calc(Div);
			break;
		case 0:
			printf("�˳�������\n");
			break;
		default:
			printf("ѡ���������������\n");
			break;
		}
	} while (input);

	return 0;
}
//���⣺����0/ѡ���������Ҫ���������
//�Ľ�1��case 1:~case 2:��������������Ĵ���      
//ȱ�㣺�������� �ظ��ȸ�
//�Ľ�2��ͨ������ָ�������ָ��ĺ��������ظ������װΪһ�����������δ���ͬ������ַ���ò�ͬ����ʵ�ֹ��� 
// �ص�������ͨ������ָ�����ʵ���ʱ���ͷ��������ָ��ĺ���
//calc(Add); calc(Sub); calc(Mul); calc(Div); 
//����ָ���ڴ��͹�����Ӧ�ö࣬��C�����и߼��﷨