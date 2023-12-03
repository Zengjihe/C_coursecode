#include "game.h"

void Initstr(char str[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			str[i][j] = ' ';
		}
	}
}
void print_board(char str[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	int k = 0;
	do
	{
		for (i = 0; i < col; i++)//从左至右打印棋盘中元素
		{
			if (i < col - 1)
			{
				printf(" %c |", str[k][i]);
			}
			else//最后打印的元素没有|
			{
				printf(" %c \n", str[k][i]);
			}

		}
		if(k <row - 1)//为了保持棋盘美观，第三行横线不需要打印
		{
			for (j = 1; j <= col; j++)
			{
				if (j < col)
				{
					printf("---|");
				}
				else
				{
					printf("---\n");
				}
			}
		}
		k++;
	} while (k < row);//循环打印行列
}
void player_play(char str[ROW][COL], int row, int col)
{
	while(1)
	{
		printf("玩家输入:>");
		int a = 0;
		int b = 0;
		scanf("%d %d", &a, &b);
		if (a <= row && b <= col)	
		{
			if(str[a - 1][b - 1] == ' ')
			{
				str[a - 1][b - 1] = '*';
				break;
			}
			else
			{
				printf("该位置已有值，请另外选择\n");
			}
		}
		else
		{
			printf("非法输入，请重新选择！\n");
		}
	}
}
void computer_play(char str[ROW][COL], int row, int col)
{
		printf("电脑输入\n");
		while(1)
		{
			int a = rand() % 3;
			int b = rand() % 3;
			if (str[a][b] == ' ')
			{
				str[a][b] = '#';
				break;
			}
		}
}
int is_full(char str[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (str[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}

char is_win(char str[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	int a = 0;
	int b = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col - 1; j++)//判断每一行前col-1个元素是否等于‘*’
		{
			if (str[i][j] != '*' || str[i][j + 1] != '*')
			{
				if (str[i][j] != '#' || str[i][j + 1] != '#')
				{
					break;
				}
				if (str[i][col - 1] == '#')//最后判断每行最后一个元素，是否等于‘*’
				{
					return '#';
				}
				break;
			}		
			if (str[i][col - 1] == '*')//最后判断每行最后一个元素，是否等于‘*’
			{
				return '*';
			}
		}
	}
	for ( a = 0; a < col; a++)
	{
		for (b = 0; b < row - 1; b++)
		{
			if (str[b][a] != '#' || str[b + 1][a] != '#')
			{
				if (str[b][a] != '*' || str[b + 1][a] != '*')
				{
					break;
				}
				if (str[row - 1][a] == '*')//最后判断每列最后一个元素，是否等于‘#’
				{
					return '*';
				}
				break;
			}
			if (str[row - 1][a] == '#')//最后判断每列最后一个元素，是否等于‘#’
			{
				return '#';
			}
		}
	}
	//还需要判断左斜的
	int x = 0;
	int y = 0;
	while (x < col - 1)
	{
		if (str[x][y] != '*' || str[x + 1][y + 1] != '*')
		{
			if (str[x][y] != '#' || str[x + 1][y + 1] != '#')
			{
				break;
			}
			if (str[row - 1][col - 1] == '#')
			{
				return '#';
			}
			break;
		}
		x++;
		y++;
		if (str[row - 1][col - 1] == '*')
		{
			return '*';
		}
	}
	//判断右斜的
	int c = 0;
	int d = col - 1;
	while (c < row - 1 || d >=0)
	{
		if (str[c][d] != '*' || str[c + 1][d - 1] != '*')
		{
			if (str[c][d] != '#' || str[c + 1][d - 1] != '#')
			{
				break;
			}
			if (str[row - 1][0] == '#')
			{
				return '#';
			}
			break;
		}
		c++;
		d--;
		if (str[row - 1][0] == '*')
		{
			return '*';
		}
	}
	//再使用一个is_full函数
	if (is_full(str, row, col))
	{
		return 'Q';
	}
	return 'C';
}