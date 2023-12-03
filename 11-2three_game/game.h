#pragma once
#define ROW 3
#define COL 3
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Initstr(char str[ROW][COL], int row, int col);
void print_board(char str[ROW][COL], int row, int col);
void player_play(char str[ROW][COL], int row, int col);
void computer_play(char str[ROW][COL], int row, int col);
char is_win(char str[ROW][COL], int row, int col);
