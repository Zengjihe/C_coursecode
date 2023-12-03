#include "game.h"
void InitBoard(char Board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			//初始化二维数组元素为空格' '
			Board[i][j] = ' ';
		}
	}
}

void DisplayBoard(char Board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	//设置棋盘格局
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", Board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}

void PlayerMove(char Board[ROW][COL], int row, int col)
{
	printf("玩家输入\n");
	printf("输入坐标:>");
	int i = 0;
	int j = 0;
	while(1)
	{
		//玩家输入坐标
		scanf("%d %d", &i, &j);
		//判断玩家输入的坐标是否合法
		if ((i > 0 && i <= row) && (j > 0 && j <= col))
		{
			//玩家输入的坐标值和数组元素坐标并不相同，数组元素坐标从0开始，故需减1
			if (Board[i - 1][j - 1] == ' ')//判断输入坐标上的元素是否为空格
			{
				Board[i - 1][j - 1] = '*';
				break;
			}
			else
			{
				printf("该位置已有值，请重新输入:>");
			}
		}
		else
		{
			printf("错误坐标，请重新输入:>");
		}
	}
}

void ComputerMove(char Board[ROW][COL], int row, int col)
{
	printf("电脑输入\n");
	int i = 0;
	int j = 0;
	while (1)
	{
		//取余生成0-2的随机数，rand()函数需要srand()函数设置不同的随机数种子
		i = rand() % 3;
		j = rand() % 3;
		if (Board[i][j] == ' ')
		{
			//电脑落子为'#'
			Board[i][j] = '#';
			break;
		}
	}
}

int Is_full(char Board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			//判断如果数组有一个元素为空格，就返回0
			if (Board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	//数组中每个元素都不是空格，则返回1
	return 1;
}

char Is_Win(char Board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < col; i++)
	{
		//判断每一行的三个元素是否相等并且不等于空格
		if (Board[0][i] == Board[1][i] && Board[1][i] == Board[2][i] && Board[0][i] != ' ')
		{
			//如果相等则返回这个元素；
			return Board[0][i];
		}
	}
	for (i = 0; i < row; i++)
	{
		//判断每一列的三个元素是否相等并且不等于空格
		if (Board[i][0] == Board[i][1] && Board[i][1] == Board[i][2] && Board[i][0] != ' ')
		{
			//如果相等则返回这个元素；
			return Board[i][0];
		}
	}
	//判断左上到右下的对角线上的元素是否相等且不等于空格
	if (Board[0][0] == Board[1][1] && Board[1][1] == Board[2][2] && Board[0][0] != ' ')
	{
		//如果相等则返回这个元素
		return Board[0][0];
	}
	//判断右上到左下的对角线上的元素是否相等且不等于空格
	if (Board[0][2] == Board[1][1] && Board[1][1] == Board[2][0] && Board[0][2] != ' ')
	{
		//如果相等则返回这个元素
		return Board[0][2];
	}
	//调用Is_full()函数判断棋盘上是否每个位置坐标上都有棋子
	if (Is_full(Board, row, col))
	{
		//判断成立则返回'Q'
		return 'Q';
	}
	//以上循环和判断如果都不满足，则返回'C'
	return 'C';
}
