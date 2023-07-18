#define _CRT_SECURE_NO_WARNINGS 1
//汉诺塔  
// A->C
// 1个盘子     A->C                            1次
// 2 个盘子    A->B   A->C  B->C      3次
// 3个盘子     A->C   A->B  C->B   A->C   B->A   B->C   A->C      7次    
// N个盘子               移动2^N-1次    
//n个盘子
// 先从A挪动n-1个到B上 
// 再将最后的一个从A挪到C上
//再将B上n-1个盘子借助A挪动到C

#include <stdio.h>

void move(char pos1, char pos2)
//起始位置pos1    目标位置pos2
{
	printf("%c->%c ", pos1, pos2);
}

void hanoi(int n, char pos1, char pos2, char pos3)
{
	if (n == 1)
		move(pos1, pos3);
	else
	{
		hanoi(n - 1, pos1, pos3, pos2);//n-1个盘子从pos1(起始)借助pos3(中转)移动到pos2(目标)
		move(pos1, pos3);//还剩一个从pos1起始位置挪到pos3目标位置
		hanoi(n - 1, pos2, pos1, pos3);//n-1个盘子从pos2(起始)借助pos3(中转)移动到pos2(目标)
	}
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	char pos1 = 'A', pos2 = 'B', pos3 = 'C';
	//起始位置pos1   中转位置pos2   目标位置pos3 
	//从起始到目标要借助中转位置
	hanoi(n, pos1, pos2, pos3);
	return 0;
}
