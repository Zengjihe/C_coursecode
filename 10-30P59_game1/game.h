#pragma once
#include <stdio.h>//这个头文件声明，在这里包含一次就可以了
#include <stdlib.h>
#include <time.h>

#define ROW 3
#define COL 3

//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col);

//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);

//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col);

//电脑下棋
//找没有下棋的位置随便下
void ComputerMove(char board[ROW][COL], int row, int col);

//判断输赢
//玩家赢-‘*’
//电脑赢-‘#’
//平局-‘Q’
//继续-‘C’
char Iswin(char board[ROW][COL], int row, int col);

////判断平局
//int Isfull(char board[ROW][COL], int row, int col);
//上面这个声明不要也可以，因为main.c调用了game.c并使用了game.h进行声明
//Isfull函数是包含在game.c文件里面的所以不需在game.h里面声明