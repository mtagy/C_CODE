#pragma once
#include<stdio.h>
#include<stdlib.h>
#include <time.h>

#define ROW 9
#define COL  9
#define ROWS  11
#define COLS  11
#define EASY_COUNT 10

//��ʼ����
void InitBoard(char Board[ROWS][COLS], int rows, int cols, char set);
//��ӡ�׵���Ϣ
void DisplayBoard(char Board[ROWS][COLS], int row, int col);
//�����׵ĸ���
void SetMine(char Mine[ROWS][COLS], int row, int col);
//�Ų��׵���Ϣ  
void FindMine(char Mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
//����׵���Ϣ
void MarkMine(char Mine[ROWS][COLS], char Show[ROWS][COLS], int row, int col, char set);