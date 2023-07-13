#include <stdio.h>
int main()
{ //求Sn=a+aa+aaa+aaaa+aaaaa 前5项之和
	int a = 0;
	int n = 0;
	scanf("%d %d", &a, &n);//a代表每一项数字  n：项数
	int i = 0;
	int sum = 0;
	int k = 0;//每一项代表的数字
	for (i = 0; i < n; i++)
	{
		k = k * 10 + 2;
		sum += k;
	}
	printf("%d\n", sum);
	return 0;
}