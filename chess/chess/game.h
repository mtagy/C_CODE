#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 3
#define COL 3

//��ʼ������
InitBoard(char Board[ROW][COL], int row, int col);
//��ӡ����
void DisplayBoard(char Board[ROW][COL], int row, int col);
// ����
void PlayerMove(char Board[ROW][COL], int row, int col);
void ComputerMove(char Board[ROW][COL], int row, int col);

char IsWin(char Board[ROW][COL], int row, int col);//�ж���Ӯ