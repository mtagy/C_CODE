#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	/*char ch = 'w';
//	char* pc = &ch;
//	*pc = 'b';
//	printf("%c\n", ch);*/
//	const char* p = "abcdef";//不是将字符串放入p，把字符串首字符地址放到p
//	printf("%s", p);       //从首字符地址开始打印直到\0为止 
//	//printf用%s打印字符串时提供首字符地址即可从首字符地址开始打印直到\0为止
//	//常量字符串 是不能被修改的 此时p有改的权限 不安全可能会有warning   *p='w'当然这么写程序调试会有问题
//	//改进：const char* p = "abcdef"; 加一个const修饰限制p不能被改变 ，*p='w'会直接报错
//	return 0;
//}

/*#include <stdio.h>
int main()
{
	const char* p1 = "abcdef";
	const char* p2 = "abcdef";
	//常量字符串放在内存中的只读数据区(只能读不能写，只能用不能修改)
	//p1p2指向同一个字符串(常量字符串)
	char  arr1[] = "abcdef";
	char  arr2[] = "abcdef";
	//创建了两个独立空间的数组 两块独立空间起始地址不一样
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
	int arr3[] = { 3,4,5,6,7 };//三个一维数组在内存不是连续存放的，独立创建
	int* parr[3] = { arr1,arr2,arr3 };//整型指针数组（整型地址） 数组名表示首元素地址
	//模拟实现一个二维数组
	int i = 0, j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d ", parr[i][j]);//parr[i]数组名  *(p+j)<===>p[j]
		}
		printf("\n");
	}
	return 0;
}*/

//数组名
/*#include <stdio.h>
int main()
{
	int arr[10] = { 0 };
	printf("%p\n", arr);
	printf("%p\n", arr + 1);//int* 指针+1 跳过1个int（4byte）

	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0] + 1);//int*指针 +1 跳过1个int（4byte）

	printf("%p\n", &arr);
	printf("%p\n", &arr + 1);//整个数组的地址 跳过整个数组    数组指针类型(int (*) [10])的指针+1  跳过整个数组

	int sz = sizeof(arr);
	printf("%d\n", sz);

	int* p = arr;//存放首元素地址
	int(*p2)[10] = &arr;//p2指向arr数组 ，数组的地址存入了p2
	//&arr取出的是整个数组的地址===>数组指针
	// 整型指针是用来存放整型的地址
	// 字符指针是用来存放字符的地址
	// 数组指针是用来存放数组的地址
	//int[10]表示指向的对象是一个数组，数组有10个元素，每个元素是int
	//*代表p2是指针 （这里*不是解引用，没有类型，单独出现才是解引用）
	//p2的类型是int(*)[10]  (去掉名字剩下的就是类型)====>数组指针的类型

	return 0;
}*/
//数组名通常表示首元素地址，但是有两个例外
//1.sizeof(数组名）这里的数组名表示整个数组，计算整个数组的大小，单位byte
//2.&数组名，这里的数组名表示整个数组，所以&数组名取出的是整个数组的地址 

/*#include <stdio.h>
int main()
{
	char* arr[5] = { 0 };//指针数组
	char* (*pc)[5] = &arr;//存放指针数组的地址  数组指针
	//pc是个指针  （*pc)
	//数组元素个数：5   [5]
	//数组元素的类型：char*  ===>char* (*pc)[5]
	//二级指针：存放一级指针变量的地址
	return 0;
}*/

/*#include <stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int(*p)[] = &arr;//会报warning []必须写上几个元素
	int(*p)[10] = &arr;
	//利用数组指针遍历打印数组    错误示范
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{//变扭的使用数组指针
		printf("%d ", *(*p + i));
		//p是指向数组的，*p其实就相当于数组名(数组名代表整个数组)，数组名又是数组首元素地址
		//*p本质上是数组首元素的地址
	}
	printf("\n");

	//遍历数组的通常做法      正确示范
	int* p1 = arr;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(p1 + i));
	}

	return 0;
}*/

/*#include <stdio.h>
void print1(int arr[3][5], int r, int c)//形参：数组形式
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

void print2(int(*p)[5], int r, int c)//二维数组传参，形参：指针形式
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
		//p指向第一行p+i指向第i行(第i行地址)
		//*(p+i)(--->p[i]相当于arr[i]，对于二维数组每一行的数组名就是arr[i])
		//这一行的地址解引用拿到这一行，相当于拿到这一行的数组名arr[i]
		//数组名相当于首元素地址
	}
}

int main()
{
	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
	print1(arr, 3, 5);
	print2(arr, 3, 5);
	//arr数组名：首元素地址
	 //二维数组的首元素是它的第一行
	 //二维数组的数组名arr:首元素地址即第一行地址，即一个一维数组的地址 ===>存入数组指针
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
	printf("请输入两个操作数：>");
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
		printf("请选择：>");
		scanf("%d", &input);
		//printf("请输入两个操作数：>");
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
			printf("退出计算器\n");
			break;
		default:
			printf("选择错误，请重新输入\n");
			break;
		}
	} while (input);

	return 0;
}
//问题：输入0/选择错误仍需要输入操作数
//改进1：case 1:~case 2:加入输入操作数的代码      
//缺点：代码冗余 重复度高
//改进2：通过函数指针调用所指向的函数，将重复代码封装为一个函数，传参传不同函数地址调用不同函数实现功能 
// 回调函数：通过函数指针在适当的时候回头调用他所指向的函数
//calc(Add); calc(Sub); calc(Mul); calc(Div); 
//函数指针在大型工程中应用多，是C语言中高级语法