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
	system("pause");//��ͣһ�²��ܿ������
	return 0;
}
//����
//F10   �ڴ洰���е�ַ���ϵ������ε����������ǵ͵�ַ �����Ǹߵ�ַ��
//F10���Ե�����main()���ô�----> �򿪵��� ���� ���ö�ջ
