#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>

int MyAdd(int a, int b)
{
	int c = 0;
	c = a + b;
	return c;
}

int main()
{
	int x = 0xA;
	int y = 0xB;
	int z = 0;
	z = MyAdd(x, y);
	printf("z=%x\n", z);
	system("pause");//暂停一下才能看到输出
	return 0;
}
//调试
//F10   内存窗口中地址由上到下依次递增（上面是低地址 下面是高地址）
//F10调试到进入main()调用处----> 打开调试 窗口 调用堆栈
