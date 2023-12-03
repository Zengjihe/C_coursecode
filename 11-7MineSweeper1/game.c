#include "game.h"

void InitBoard(char board[ROWS][COLS], int row, int col, char c)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = c;
		}
	}
}

void PrintBoard(char Board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf(" ");//在第一行先提前打印一个空格，保证与接下来每列都对齐
	for (i = 1; i < row - 1; i++)
	{
		printf(" %d", i);//在第一行打印序号
	}
	printf("\n");
	for (i = 1; i < row - 1; i++)
	{
		printf("%d ", i);//在每一列开头打印序号
		for (j = 1; j < col - 1; j++)
		{
			printf("%c ", Board[i][j]);//打印二维数组中每一个元素
		}
		printf("\n");
	}
}

void SetMine(char hide[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int i = 0;
	for (i = 0; i < MINECOUNTS; i++)
	{
		x = (rand() % ROW) + 1;//横坐标为1~9
		y = (rand() % COL) + 1;//纵坐标为1~9
		if (hide[x][y] == '0')//防止随机设置的炸弹位置坐标重复
		{
			hide[x][y] = '1';
			continue;
		}
		i--;
	}
}

int MineCount(char hide[ROWS][COLS], int a, int b)
{
	int count = 0;
	int i = 0;
	int j = 0;
	//遍历该坐标周围8个元素，计算炸弹个数
	for (i = -1; i <= 1; i++)
	{
		for (j = -1; j <= 1; j++)
		{
			if (hide[a + i][b + j] == '1')
			{
				count++;
			}
		}
	}
	return count;
}

//标记已经判断过的排雷点，防止死递归
char Mark(char sign[ROWS][COLS], int e, int f)
{
	if (sign[e][f] == ' ')//如果没有被判断过，先进行标记，标记为'#'，再返回' '
	{
		sign[e][f] = '#';
		return ' ';
	}
	if (sign[e][f] == '#')//如果已经判断过了，则返回'#'
	{
		return '#';
	}
}

void SpreadBoard(char hide[ROWS][COLS], char show[ROWS][COLS], char sign[ROWS][COLS], int row, int col, int c, int d)
{
	int i = 0;
	int j = 0;
	int ret = 0;
	if (((c > 0) && (c < row - 1) && (d > 0) && (d < row - 1)) && (MineCount(hide, c, d) == 0))//限制条件：1.在二维数组边界范围内；2.排雷点周围8个元素炸弹数为0
	{
		//Mark(sign, c, d)函数标记已经判断过的排雷点，标记记号为'#'
		if (Mark(sign, c, d) != '#')//判断该位置是否已经被标记过了，防止死递归
		{
			show[c][d] = ' ';//赋予空格
			//重复判断排雷点周围8个元素，即开始“递”
			SpreadBoard(hide, show, sign, row, col, c - 1, d - 1);
			SpreadBoard(hide, show, sign, row, col, c - 1, d);
			SpreadBoard(hide, show, sign, row, col, c - 1, d + 1);
			SpreadBoard(hide, show, sign, row, col, c, d - 1);
			SpreadBoard(hide, show, sign, row, col, c, d + 1);
			SpreadBoard(hide, show, sign, row, col, c + 1, d - 1);
			SpreadBoard(hide, show, sign, row, col, c + 1, d);
			SpreadBoard(hide, show, sign, row, col, c + 1, d + 1);
		}
	}
	else
	{
		show[c][d] = '0' + MineCount(hide, c, d);//打印数字字符，开始“归”
	}
}

void Cancelmark(char show[ROWS][COLS], int row, int col)
{
	int input = 0;
	do
	{
		printf("是否取消炸弹标记，是-1，否-0:>");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			printf("请输入取消标记炸弹点坐标:>");
			int x = 0;
			int y = 0;
			scanf("%d %d", &x, &y);
			show[x][y] = '*';//取消炸弹点标记，重新标为'*'
			PrintBoard(show, row, col);
			break;
		case 0:
			break;
		default:
			printf("错误选择，请重新输入\n");
			break;
		} 
	} while (input != 0);
}

void MarkBomb(char show[ROWS][COLS], int row, int col)
{
	int input = 0;
	int count = 0;

	do
	{
		//选择是否发现炸弹
		printf("是否发现炸弹，是-1，否-0:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("请输入炸弹坐标点:>");
			int x = 0;
			int y = 0;
			scanf("%d %d", &x, &y);
			show[x][y] = '0';//发现炸弹并标记炸弹位置为字符'0'
			PrintBoard(show, row, col);
			count++;

			//当标记炸弹数大于等于1时，选择是否取消炸弹标记点
			if (count >= 1)
			{
				Cancelmark(show, row, col);
			}
			break;
		case 0:
			break;
		default:
			printf("选择错误，请重新输入\n");
			break;
		}
	} while (input != 0);
}

int IsWin(char show[ROWS][COLS], int row, int col)
{
	int count = 0;
	int i = 0;
	int j = 0;
	for (i = 1; i < row - 1; i++)
	{
		for (j = 1; j < col - 1; j++)
		{
			if (show[i][j] == '0')//如果有炸弹标记符号，则count++
			{
				count++;
			}
			if (show[i][j] == '*')//如果有'*'符号，则count++
			{
				count++;
			}
		}
	}
	return count;
}