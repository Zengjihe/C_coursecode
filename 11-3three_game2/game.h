#pragma once
//提前声明，在使用printf()和scanf()函数不会报错警告
#define _CRT_SECURE_NO_WARNINGS
//包含代码中用到函数的头文件
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//宏定义二维数组的行数和列数，方便修改
#define ROW 3
#define COL 3
//对game.c源文件中的函数进行函数声明，方便在其他函数中调用
void InitBoard(char Board[ROW][COL], int row, int col);
void DisplayBoard(char Board[ROW][COL], int row, int col);
void PlayerMove(char Board[ROW][COL], int row, int col);
void ComputerMove(char Board[ROW][COL], int row, int col);
char Is_Win(char Board[ROW][COL], int row, int col);
