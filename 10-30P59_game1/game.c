#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	//打印数据
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col - 1; j++)
		{
			printf(" %c |", board[i][j]);
		}
		printf(" %c \n", board[i][col - 1]);
		//老师写法
		//for (j = 0; j < col; j++)
		//{
		//	printf(" %c ", board[i][j]);
		//	if (j < (col - 1))
		//	{
		//		printf("|");
		//	}
		//}printf("\n");
		//打印分割信息
		if (i < row - 1)
		{
			for (j = 0; j < col - 1; j++)
			{
				printf("---|");
			}
			printf("---\n", board[i][col - 1]);
		}
		//老师做法
		//if (i < (row - 1))
		//{
		//	for (j = 0; j < col; j++)
		//	{
		//		printf("---");
		//		if (j < (col - 1))
		//		{
		//			printf("|");
		//		}
		//	}
		//	printf("\n");
		//}
	}
}
void PlayerMove(char board[ROW][COL], int row, int col)
{
	printf("玩家下棋:>\n");
	printf("请输入坐标:>\n");
	int x = 0;
	int y = 0;
	scanf("%d %d", &x, &y);
	if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
	{
		if (board[x - 1][y - 1] == ' ')
		{
			board[x - 1][y - 1] = '*';
		}
		else
		{
			printf("坐标被占用，不能下棋，请重新输入\n");
			PlayerMove(board, row, col);//防止坐标非法时，电脑直接输入，造成比玩家先一步
		}
	}
	else
	{
		printf("坐标非法，请重新输入\n");
		PlayerMove(board, row, col);//防止坐标非法时，电脑直接输入，造成比玩家先一步
	}
}
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑下棋:>\n");
	int x = 0;
	int y = 0;
	while (1)
	{
		x = rand() % row;//0~2
		y = rand() % col;//0~2
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}//这个电脑下棋代码不太聪明，还可以进行优化，让电脑聪明些
int Isfull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}
char Iswin(char board[ROW][COL], int row, int col)
{
	//行
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	//列
	for (j = 0; j < col; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
		{
			return board[1][j];
		}
	}
	//对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//代码走到了这里
	//就要判断平局
	//此时棋盘放满了就表示平局
	if (Isfull(board, row, col))
	{
		return 'Q';
	}
	//游戏继续
	return 'C';
}