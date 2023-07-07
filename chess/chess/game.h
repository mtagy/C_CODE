#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 3
#define COL 3

//≥ı ºªØ∆Â≈Ã
InitBoard(char Board[ROW][COL], int row, int col);
//¥Ú”°∆Â≈Ã
void DisplayBoard(char Board[ROW][COL], int row, int col);
// œ¬∆Â
void PlayerMove(char Board[ROW][COL], int row, int col);
void ComputerMove(char Board[ROW][COL], int row, int col);

char IsWin(char Board[ROW][COL], int row, int col);//≈–∂œ ‰”Æ