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

/*#include<stdio.h>

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
			//ret = Sub(x, y);
			//printf("%d\n", ret);
			calc(Sub);
			break;
		case 3:
			//ret = Mul(x, y);
			//printf("%d\n", ret);
			calc(Mul);
			break;
		case 4:
			//ret = Div(x, y);
			//printf("%d\n", ret);
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
}*/
//���⣺����0/ѡ���������Ҫ���������
//�Ľ�1��case 1:~case 2:��������������Ĵ���      
//ȱ�㣺�������� �ظ��ȸ�
//�Ľ�2��ͨ������ָ�������ָ��ĺ��������ظ������װΪһ�����������δ���ͬ������ַ���ò�ͬ����ʵ�ֹ��� 
// �ص�������ͨ������ָ�����ʵ���ʱ���ͷ��������ָ��ĺ���
//calc(Add); calc(Sub); calc(Mul); calc(Div); 
//����ָ���ڴ��͹�����Ӧ�ö࣬��C�����и߼��﷨

/*#include <stdio.h>

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
	int (*pf)(int, int) = Add;
	//pf�Ǻ���ָ��
	int (*arr[4])(int, int) = { Add,Sub,Mul,Div };//4���������ͺͺ�����ַ������ͬ
	//arr����ָ������ �����������ͬ������������ͬ�ĺ����ĵ�ַ�ŵ�һ��������
	//arr����[]��� arr[4]  4��Ԫ�ص�����
	//ȥ����������[4] ʣ�¾���ÿ��Ԫ�ص�����
	//int (*)(int, int)  ����ָ������
	int i = 0;
	//���ú���
	for (i = 0; i < 4; i++)
	{
		int ret = arr[i](8, 4);
		printf("%d\n", ret);
	}
	return 0;
}*/

/*#include<stdio.h>

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
	int x = 0, y = 0, ret = 0;
	int(*pfarr[ ])(int, int) = { 0,Add,Sub,Mul,Div };
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		if (input == 0)
		{
			printf("�˳�������\n");
		}
		else if (input >= 1 && input <= 4)//�򻯴��� ��������¹��ܣ�����Ҫ��д���case����������
		{
			printf("������������������>");
			scanf("%d %d", &x, &y);
			ret = pfarr[input](x, y);
			printf("%d\n", ret);
		}
		else
		{
			printf("ѡ���������������\n");
		}
	} while (input);
	return 0;
}*/

/*#include<stdio.h>

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
	int(*pfarr[])(int, int) = { 0,Add,Sub,Mul,Div };//����ָ������
	int(*(*ppfarr)[5])(int, int)= &pfarr;//����ĵ�ַ�ŵ�һ������ָ����ȥ  ָ����ָ�������ָ��
	//ppfarr����*���--->˵��ppfarr��ָ��
	//(*ppfarr)[5]--->˵��ppfarrָ�������飬������5��Ԫ��
	//int(*)(int, int)--->˵��ppfarrָ��������ÿ��Ԫ�ص�����Ϊ����ָ��

	//˼·������ָ��--->����ָ������--->ָ����ָ�������
	return 0;
}*/

//#include <stdio.h>
//#include< stdlib.h >
//#include <search.h>
//void bubble(int arr[], int sz)
//{
//	//ð����������� sz-1
//	int i = 0, j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//�����������ź����
//		for (j = 0; j < sz - 1 - i; j++)//ÿ�˱Ƚϴ�����sz-1-i
//		{//ÿ�˵ıȽϹ���  �ų�����     
//
//		//��ͬ���ͣ���int������������Ҫ�ı������������Ԫ�صıȽ�
//		// eg:����ṹ���������ݣ�һ���˵���Ϣ  
//		//��ͬ�������ݵıȽϷ�ʽ��һ�����������е����ݶ�������>�Ƚ�
//		//���calc()   ����ͬ�������ݵıȽϷ�ʽ��һ�������ȽϵĹ��ܷ�װ��һ��������ʵ�ֲ�ͬ�������ݵıȽ�
//		//ͬ��qsort() �еĲ��� cmpʵ�ֵľ��ǱȽϵĹ��ܣ��ȽϺ����ĵ�ַ 
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1) break;//���Ч��
//	}
//}
//
////�Ƚ��������͵ĺ�����
////e1ָ��һ������ e2ָ������һ������
//int cmp_int(const void* e1, const void* e2)
//{//void* ���͵�ָ�벻��ֱ�ӽ��н����ò���  if(*e1>*e2)  ����
// //void*
//	/*int a = 10;
//	char* pc = &a;//�ᱨwarning &a��int*  ���Ͳ�ƥ��
//	void* pv = &a;//û��warning  */
//	//void*:�޾������͵�ָ�� ���Խ����������͵�ָ�룬���ǲ��ܽ��н����ò�����+-��������(����Ҫ��������ͣ���void*û����ȷ������)
//	//��֪���������ĺ�����ַ��ʲô���͵ģ�������void*����
//
//	/*
//	if(_*(int*)e1>*(int*)e2)  return 1;
//	else if(_*(int*)e1==*(int*)e2)  return 0;
//	else return -1;
//	*/
//
//	//return *(int*)e1 - *(int*)e2;
//	//������д��  qsortĬ�������� ��Ҫ�Ž�����Ĭ�Ϸ���ֵ���߼��෴����
//	return *(int*)e2 - *(int*)e1;//����
//
//}
//int main()
//{
//	//int arr[] = { 9,8,7,6,5,4,3,2,1,0 };//������
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };//�Ž���
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//bubble(arr, sz);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);//����������ַ
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//ð���������˼�룺�������ڵ�Ԫ�ؽ��бȽ�
//ÿһ��ð�������ź�һ������
//n��������Ҫn-1��ð������
//��һ��ð�������бȽ�n��Ԫ����Ҫ�Ƚ�n-1��(n-1�����ڵĶ�����
//�ڶ���ð�������бȽ�n-1��Ԫ����Ҫ�Ƚ�n-2��

//���⣺���ð��������0123456789�Ѿ�������ʱ������������Ƚ�(���ύ�������ǻ�Ƚ�)
//�Ż���flag==1 �ź��� ÿ�˱Ƚ����ж�flag�Ƿ���0(���Ƿ���Ԫ�ؽ���)����û��Ԫ�ؽ��н����������ؽ�����һ������
//���õĵ㣺���bubble()�β���int arr[] ֻ�ܽ����������ݵ�����    
//������⺯��qsort() �� ʹ�ÿ��������˼��ʵ�ֵ�һ��������
//void qsort( void *base, size_t num, size_t width, int (__cdecl *compare )(const void *elem1, const void *elem2 ) );
//__cdecl ��������Լ����Լ��������ε��ã�����c�ķ�ʽȥ���ã���ʹ��ʱ���Բ�д��
// ��
//qsort() ���������������͵�����  
/*void qsort( void *base, //��Ҫ��������ݵ���ʼλ��
				  size_t num, //����������Ԫ�صĸ���
				  size_t width,//����������Ԫ�صĴ�С����λ��byte��
				  int (*cmp )(const void *e1, const void *e2 ) );//  ����ָ��  �ȽϺ����ĵ�ַ*/
				  //cmp�ǱȽϺ����ĵ�ַ��e1ָ����Ҫ�Ƚϵĵ�һ��Ԫ�أ�e2ָ����Ҫ�Ƚϵĵڶ���Ԫ�أ�e1,e2��Ҫ�Ƚϵ�����Ԫ�صĵ�ַ
				  //cmp��������ָ��ıȽϺ�������e1��e2ָ�������Ԫ�ؽ��бȽ�   
				  //��������ʲô���͵����� ���ܸ������ṩ��ͬ�ıȽϺ����������ݱȽ� 
/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e2 - *(int*)e1;//����
}

void test1()//qsort������������
{
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };//�Ž���
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);//����������ַ
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

struct Stu
{
	char name[20];
	int age;
};

int cmp_stu_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
	//�ַ����Ƚϴ�С  strcmp()
	//strcmp()�ķ���ֵ�� >0 =0 <0(e1<e2)
	//strcmp()�Ƚ�ʱ��һ��һ�ԵĽ��бȽ�,��Ⱦ�����һ��
	//eg  abcdef  abbqwrttt  a=a b=b c>b ����abcdef> abbqwrttt
}

int cmp_stu_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

void test2()//ʹ��qsort����ṹ������
{
	struct Stu s[] = { {"zhangsan",15},{"lisi",30},{"wangwu",25} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_stu_name);
	//qsort(s, sz, sizeof(s[0]), cmp_stu_age);

}

int main()
{
	//test1();
	test2();
	return 0;
}*/


/*#include <stdio.h>
#include <string.h>

int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;//����
}

struct Stu
{
	char name[20];
	int age;
};

int cmp_stu_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

int cmp_stu_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

void Swap(char* buf1, char* buf2, int width)
{//ÿ���ֽڶԽ��н���
	int i = 0;
	for (i = 0; i < width - 1; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

void bubble(void* base, int num, int width, int (*cmp)(const void* e1, const void* e2))
{
	int i = 0, j = 0, flag = 1;
	for (i = 0; i < num - 1; i++)
	{
		for (j = 0; j < num - 1 - i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)//��ʼ��ַ+ƫ����
			{
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
				flag = 0;
			}
		}
		if (flag == 1) break;
	}
}

void test1()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };//������
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble(arr, sz, sizeof(arr[0]), cmp_int);//����������ַ
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

void test2()
{
	struct Stu s[] = { {"zhangsan",15},{"lisi",30},{"wangwu",25} };
	int sz = sizeof(s) / sizeof(s[0]);
	//bubble(s, sz, sizeof(s[0]), cmp_stu_name);
	bubble(s, sz, sizeof(s[0]), cmp_stu_age);
}

int main()
{
	//test1();
	test2();
	return 0;
}*/


#include<stdio.h>

int main()
{

	return 0;
}