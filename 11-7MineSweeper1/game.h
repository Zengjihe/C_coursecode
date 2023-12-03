#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 9
#define COL 9
#define ROWS ROW + 2
#define COLS COL + 2
#define MINECOUNTS 10
void InitBoard(char board[ROWS][COLS], int row, int col, char c);
void SetMine(char hide[ROWS][COLS], int row, int col);
void PrintBoard(char Board[ROWS][COLS], int row, int col);
int MineCount(char hide[ROWS][COLS], int a, int b);
void SpreadBoard(char hide[ROWS][COLS], char show[ROWS][COLS], char sign[ROWS][COLS], int row, int col, int c, int d);
void MarkBomb(char show[ROWS][COLS], int row, int col);
int IsWin(char show[ROWS][COLS], int row, int col);
