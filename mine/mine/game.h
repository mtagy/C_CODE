#pragma once
#include<stdio.h>
#include<stdlib.h>
#include <time.h>

#define ROW 9
#define COL  9
#define ROWS  11
#define COLS  11
#define EASY_COUNT 10

//初始化雷
void InitBoard(char Board[ROWS][COLS], int rows, int cols, char set);
//打印雷的信息
void DisplayBoard(char Board[ROWS][COLS], int row, int col);
//设置雷的个数
void SetMine(char Mine[ROWS][COLS], int row, int col);
//排查雷的信息  
void FindMine(char Mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
//标记雷的信息
void MarkMine(char Mine[ROWS][COLS], char Show[ROWS][COLS], int row, int col, char set);