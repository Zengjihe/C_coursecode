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
		for (i = 0; i < col; i++)//�������Ҵ�ӡ������Ԫ��
		{
			if (i < col - 1)
			{
				printf(" %c |", str[k][i]);
			}
			else//����ӡ��Ԫ��û��|
			{
				printf(" %c \n", str[k][i]);
			}

		}
		if(k <row - 1)//Ϊ�˱����������ۣ������к��߲���Ҫ��ӡ
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
	} while (k < row);//ѭ����ӡ����
}
void player_play(char str[ROW][COL], int row, int col)
{
	while(1)
	{
		printf("�������:>");
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
				printf("��λ������ֵ��������ѡ��\n");
			}
		}
		else
		{
			printf("�Ƿ����룬������ѡ��\n");
		}
	}
}
void computer_play(char str[ROW][COL], int row, int col)
{
		printf("��������\n");
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
		for (j = 0; j < col - 1; j++)//�ж�ÿһ��ǰcol-1��Ԫ���Ƿ���ڡ�*��
		{
			if (str[i][j] != '*' || str[i][j + 1] != '*')
			{
				if (str[i][j] != '#' || str[i][j + 1] != '#')
				{
					break;
				}
				if (str[i][col - 1] == '#')//����ж�ÿ�����һ��Ԫ�أ��Ƿ���ڡ�*��
				{
					return '#';
				}
				break;
			}		
			if (str[i][col - 1] == '*')//����ж�ÿ�����һ��Ԫ�أ��Ƿ���ڡ�*��
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
				if (str[row - 1][a] == '*')//����ж�ÿ�����һ��Ԫ�أ��Ƿ���ڡ�#��
				{
					return '*';
				}
				break;
			}
			if (str[row - 1][a] == '#')//����ж�ÿ�����һ��Ԫ�أ��Ƿ���ڡ�#��
			{
				return '#';
			}
		}
	}
	//����Ҫ�ж���б��
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
	//�ж���б��
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
	//��ʹ��һ��is_full����
	if (is_full(str, row, col))
	{
		return 'Q';
	}
	return 'C';
}