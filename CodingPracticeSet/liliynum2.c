#include <stdio.h>
#include <math.h>

int if_narcissistic_number(int i)
{

	// 1.计算i是几位数 ->n  2.得到i的每一位 计算n次方之和
	//认为任何数至少是一位数n从1开始
	int n = 1;
	int tmp = i;
	//避免在循环内部改变循环变量 而且下面还要计算i的每一位n次方之和
	while (tmp / 10)
	{
		n++;
		tmp /= 10;
	}
	tmp = i;
	int sum = 0; //每个i都要进行计算不能放到循环外面去
	while (tmp)
	{
		sum += pow(tmp % 10, n); // pow返回类型为double型，放到int造成精度丢失 但是我们知道这里是整数没有误差的
		tmp /= 10;
	}
	/*if (sum == i)
	{
		return 1;
	}
	else
	{
		return 0;
	}*/
	//优化
	return sum == i;
}

int main()
{
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		if (if_narcissistic_number(i)) //_+小写字母的书写习惯
		{
			printf("%d ", i);
		}
	}
	return 0;
}