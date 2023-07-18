#define _CRT_SECURE_NO_WARNINGS 1
//��ŵ��  
// A->C
// 1������     A->C                            1��
// 2 ������    A->B   A->C  B->C      3��
// 3������     A->C   A->B  C->B   A->C   B->A   B->C   A->C      7��    
// N������               �ƶ�2^N-1��    
//n������
// �ȴ�AŲ��n-1����B�� 
// �ٽ�����һ����AŲ��C��
//�ٽ�B��n-1�����ӽ���AŲ����C

#include <stdio.h>

void move(char pos1, char pos2)
//��ʼλ��pos1    Ŀ��λ��pos2
{
	printf("%c->%c ", pos1, pos2);
}

void hanoi(int n, char pos1, char pos2, char pos3)
{
	if (n == 1)
		move(pos1, pos3);
	else
	{
		hanoi(n - 1, pos1, pos3, pos2);//n-1�����Ӵ�pos1(��ʼ)����pos3(��ת)�ƶ���pos2(Ŀ��)
		move(pos1, pos3);//��ʣһ����pos1��ʼλ��Ų��pos3Ŀ��λ��
		hanoi(n - 1, pos2, pos1, pos3);//n-1�����Ӵ�pos2(��ʼ)����pos3(��ת)�ƶ���pos2(Ŀ��)
	}
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	char pos1 = 'A', pos2 = 'B', pos3 = 'C';
	//��ʼλ��pos1   ��תλ��pos2   Ŀ��λ��pos3 
	//����ʼ��Ŀ��Ҫ������תλ��
	hanoi(n, pos1, pos2, pos3);
	return 0;
}
