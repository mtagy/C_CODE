#include <stdio.h>
int main()
{
	//获取奇数位数字   第N位来到最低位移动N-1
	int num = 0;
	scanf("%d", &num);
	int i = 0;
	//第31位移动30位到最低位  第1位移动0位到最低位
	for (i = 30; i <= 0; i++)
	{
		printf("%d ", ((num >> i) & 1));
	}

	//获取偶数位数字
	// 第32位移动31位到最低位  第2位移动1位到最低位
	for (i = 31; i <= 1; i++)
	{
		printf("%d ", ((num >> i) & 1));
	}

	return 0;
}
