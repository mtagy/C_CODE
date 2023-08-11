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
			printf("退出计算器\n");
			break;
		default:
			printf("选择错误，请重新输入\n");
			break;
		}
	} while (input);

	return 0;
}*/
//问题：输入0/选择错误仍需要输入操作数
//改进1：case 1:~case 2:加入输入操作数的代码      
//缺点：代码冗余 重复度高
//改进2：通过函数指针调用所指向的函数，将重复代码封装为一个函数，传参传不同函数地址调用不同函数实现功能 
// 回调函数：通过函数指针在适当的时候回头调用他所指向的函数
//calc(Add); calc(Sub); calc(Mul); calc(Div); 
//函数指针在大型工程中应用多，是C语言中高级语法

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
	//pf是函数指针
	int (*arr[4])(int, int) = { Add,Sub,Mul,Div };//4个函数类型和函数地址类型相同
	//arr函数指针数组 ：多个参数相同，返回类型相同的函数的地址放到一个数组中
	//arr先与[]结合 arr[4]  4个元素的数组
	//去除数组名和[4] 剩下就是每个元素的类型
	//int (*)(int, int)  函数指针类型
	int i = 0;
	//调用函数
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
		printf("请选择：>");
		scanf("%d", &input);
		if (input == 0)
		{
			printf("退出计算器\n");
		}
		else if (input >= 1 && input <= 4)//简化代码 如果增加新功能，不需要再写多个case语句避免冗余
		{
			printf("请输入两个操作数：>");
			scanf("%d %d", &x, &y);
			ret = pfarr[input](x, y);
			printf("%d\n", ret);
		}
		else
		{
			printf("选择错误，请重新输入\n");
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
	int(*pfarr[])(int, int) = { 0,Add,Sub,Mul,Div };//函数指针数组
	int(*(*ppfarr)[5])(int, int)= &pfarr;//数组的地址放到一个数组指针中去  指向函数指针数组的指针
	//ppfarr先与*结合--->说明ppfarr是指针
	//(*ppfarr)[5]--->说明ppfarr指向了数组，数组有5个元素
	//int(*)(int, int)--->说明ppfarr指向的数组的每个元素的类型为函数指针

	//思路：函数指针--->函数指针数组--->指向函数指针的数组
	return 0;
}*/

//#include <stdio.h>
//#include< stdlib.h >
//#include <search.h>
//void bubble(int arr[], int sz)
//{
//	//冒泡排序的趟数 sz-1
//	int i = 0, j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//假设数组是排好序的
//		for (j = 0; j < sz - 1 - i; j++)//每趟比较次数：sz-1-i
//		{//每趟的比较过程  排成升序     
//
//		//不同类型（非int）的数据排序：要改变的是相邻两个元素的比较
//		// eg:排序结构体类型数据：一组人的信息  
//		//不同类型数据的比较方式不一样，不是所有的数据都可以用>比较
//		//类比calc()   排序不同类型数据的比较方式不一样，将比较的功能封装成一个函数，实现不同类型数据的比较
//		//同理qsort() 中的参数 cmp实现的就是比较的功能：比较函数的地址 
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1) break;//提高效率
//	}
//}
//
////比较两个整型的函数：
////e1指向一个整数 e2指向另外一个整数
//int cmp_int(const void* e1, const void* e2)
//{//void* 类型的指针不能直接进行解引用操作  if(*e1>*e2)  错误
// //void*
//	/*int a = 10;
//	char* pc = &a;//会报warning &a是int*  类型不匹配
//	void* pv = &a;//没有warning  */
//	//void*:无具体类型的指针 可以接收任意类型的指针，但是不能进行解引用操作和+-整数操作(都需要具体的类型，而void*没有明确的类型)
//	//不知道传过来的函数地址是什么类型的，所以用void*接收
//
//	/*
//	if(_*(int*)e1>*(int*)e2)  return 1;
//	else if(_*(int*)e1==*(int*)e2)  return 0;
//	else return -1;
//	*/
//
//	//return *(int*)e1 - *(int*)e2;
//	//升序简洁写法  qsort默认排升序 想要排降序，与默认返回值的逻辑相反即可
//	return *(int*)e2 - *(int*)e1;//降序
//
//}
//int main()
//{
//	//int arr[] = { 9,8,7,6,5,4,3,2,1,0 };//排升序
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };//排降序
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//bubble(arr, sz);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);//函数名即地址
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//冒泡排序核心思想：两两相邻的元素进行比较
//每一趟冒泡排序排好一个数据
//n个数据需要n-1趟冒泡排序
//第一趟冒泡排序中比较n个元素需要比较n-1次(n-1个相邻的对数）
//第二趟冒泡排序中比较n-1个元素需要比较n-2次

//问题：这个冒泡排序在0123456789已经是升序时还会继续两两比较(不会交换，但是会比较)
//优化：flag==1 排好序 每趟比较完判断flag是否置0(即是否有元素交换)，当没有元素进行交换，即不必进行下一趟排序
//不好的点：这个bubble()形参是int arr[] 只能进行整型数据的排序    
//解决：库函数qsort() ： 使用快速排序的思想实现的一个排序函数
//void qsort( void *base, size_t num, size_t width, int (__cdecl *compare )(const void *elem1, const void *elem2 ) );
//__cdecl 函数调用约定（约定函数如何调用，按照c的方式去调用）（使用时可以不写）
// 简化
//qsort() 可以排序任意类型的数据  
/*void qsort( void *base, //你要排序的数据的起始位置
				  size_t num, //待排序数据元素的个数
				  size_t width,//待排序数据元素的大小（单位：byte）
				  int (*cmp )(const void *e1, const void *e2 ) );//  函数指针  比较函数的地址*/
				  //cmp是比较函数的地址，e1指向了要比较的第一个元素，e2指向了要比较的第二个元素，e1,e2是要比较的两个元素的地址
				  //cmp主动调用指向的比较函数，将e1，e2指向的两个元素进行比较   
				  //不管排序什么类型的数据 都能根据你提供不同的比较函数进行数据比较 
/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e2 - *(int*)e1;//降序
}

void test1()//qsort排序整型数据
{
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };//排降序
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);//函数名即地址
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
	//字符串比较大小  strcmp()
	//strcmp()的返回值是 >0 =0 <0(e1<e2)
	//strcmp()比较时是一对一对的进行比较,相等就找下一对
	//eg  abcdef  abbqwrttt  a=a b=b c>b 所以abcdef> abbqwrttt
}

int cmp_stu_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

void test2()//使用qsort排序结构体数据
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
	return *(int*)e1 - *(int*)e2;//升序
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
{//每个字节对进行交换
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
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)//起始地址+偏移量
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
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };//排升序
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble(arr, sz, sizeof(arr[0]), cmp_int);//函数名即地址
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