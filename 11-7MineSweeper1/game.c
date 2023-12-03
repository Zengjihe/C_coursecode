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
	printf(" ");//�ڵ�һ������ǰ��ӡһ���ո񣬱�֤�������ÿ�ж�����
	for (i = 1; i < row - 1; i++)
	{
		printf(" %d", i);//�ڵ�һ�д�ӡ���
	}
	printf("\n");
	for (i = 1; i < row - 1; i++)
	{
		printf("%d ", i);//��ÿһ�п�ͷ��ӡ���
		for (j = 1; j < col - 1; j++)
		{
			printf("%c ", Board[i][j]);//��ӡ��ά������ÿһ��Ԫ��
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
		x = (rand() % ROW) + 1;//������Ϊ1~9
		y = (rand() % COL) + 1;//������Ϊ1~9
		if (hide[x][y] == '0')//��ֹ������õ�ը��λ�������ظ�
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
	//������������Χ8��Ԫ�أ�����ը������
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

//����Ѿ��жϹ������׵㣬��ֹ���ݹ�
char Mark(char sign[ROWS][COLS], int e, int f)
{
	if (sign[e][f] == ' ')//���û�б��жϹ����Ƚ��б�ǣ����Ϊ'#'���ٷ���' '
	{
		sign[e][f] = '#';
		return ' ';
	}
	if (sign[e][f] == '#')//����Ѿ��жϹ��ˣ��򷵻�'#'
	{
		return '#';
	}
}

void SpreadBoard(char hide[ROWS][COLS], char show[ROWS][COLS], char sign[ROWS][COLS], int row, int col, int c, int d)
{
	int i = 0;
	int j = 0;
	int ret = 0;
	if (((c > 0) && (c < row - 1) && (d > 0) && (d < row - 1)) && (MineCount(hide, c, d) == 0))//����������1.�ڶ�ά����߽緶Χ�ڣ�2.���׵���Χ8��Ԫ��ը����Ϊ0
	{
		//Mark(sign, c, d)��������Ѿ��жϹ������׵㣬��ǼǺ�Ϊ'#'
		if (Mark(sign, c, d) != '#')//�жϸ�λ���Ƿ��Ѿ�����ǹ��ˣ���ֹ���ݹ�
		{
			show[c][d] = ' ';//����ո�
			//�ظ��ж����׵���Χ8��Ԫ�أ�����ʼ���ݡ�
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
		show[c][d] = '0' + MineCount(hide, c, d);//��ӡ�����ַ�����ʼ���顱
	}
}

void Cancelmark(char show[ROWS][COLS], int row, int col)
{
	int input = 0;
	do
	{
		printf("�Ƿ�ȡ��ը����ǣ���-1����-0:>");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			printf("������ȡ�����ը��������:>");
			int x = 0;
			int y = 0;
			scanf("%d %d", &x, &y);
			show[x][y] = '*';//ȡ��ը�����ǣ����±�Ϊ'*'
			PrintBoard(show, row, col);
			break;
		case 0:
			break;
		default:
			printf("����ѡ������������\n");
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
		//ѡ���Ƿ���ը��
		printf("�Ƿ���ը������-1����-0:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("������ը�������:>");
			int x = 0;
			int y = 0;
			scanf("%d %d", &x, &y);
			show[x][y] = '0';//����ը�������ը��λ��Ϊ�ַ�'0'
			PrintBoard(show, row, col);
			count++;

			//�����ը�������ڵ���1ʱ��ѡ���Ƿ�ȡ��ը����ǵ�
			if (count >= 1)
			{
				Cancelmark(show, row, col);
			}
			break;
		case 0:
			break;
		default:
			printf("ѡ���������������\n");
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
			if (show[i][j] == '0')//�����ը����Ƿ��ţ���count++
			{
				count++;
			}
			if (show[i][j] == '*')//�����'*'���ţ���count++
			{
				count++;
			}
		}
	}
	return count;
}