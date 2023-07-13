#include <stdio.h>
#include <math.h>

int main()
{
	int i = 0;
	for (i = 0; i <= 100000; i++)
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
			sum += pow(tmp % 10, n); // pow返回类型为double型，会有算术转换造成精度丢失 但是我们知道这里是整数没有误差的
			tmp /= 10;
		}
		if (sum == i)
		{
			printf("%d ", i);
		}
	}
	return 0;
}