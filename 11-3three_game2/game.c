#include "game.h"
void InitBoard(char Board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			//��ʼ����ά����Ԫ��Ϊ�ո�' '
			Board[i][j] = ' ';
		}
	}
}

void DisplayBoard(char Board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	//�������̸��
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
	printf("�������\n");
	printf("��������:>");
	int i = 0;
	int j = 0;
	while(1)
	{
		//�����������
		scanf("%d %d", &i, &j);
		//�ж��������������Ƿ�Ϸ�
		if ((i > 0 && i <= row) && (j > 0 && j <= col))
		{
			//������������ֵ������Ԫ�����겢����ͬ������Ԫ�������0��ʼ�������1
			if (Board[i - 1][j - 1] == ' ')//�ж����������ϵ�Ԫ���Ƿ�Ϊ�ո�
			{
				Board[i - 1][j - 1] = '*';
				break;
			}
			else
			{
				printf("��λ������ֵ������������:>");
			}
		}
		else
		{
			printf("�������꣬����������:>");
		}
	}
}

void ComputerMove(char Board[ROW][COL], int row, int col)
{
	printf("��������\n");
	int i = 0;
	int j = 0;
	while (1)
	{
		//ȡ������0-2���������rand()������Ҫsrand()�������ò�ͬ�����������
		i = rand() % 3;
		j = rand() % 3;
		if (Board[i][j] == ' ')
		{
			//��������Ϊ'#'
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
			//�ж����������һ��Ԫ��Ϊ�ո񣬾ͷ���0
			if (Board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	//������ÿ��Ԫ�ض����ǿո��򷵻�1
	return 1;
}

char Is_Win(char Board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < col; i++)
	{
		//�ж�ÿһ�е�����Ԫ���Ƿ���Ȳ��Ҳ����ڿո�
		if (Board[0][i] == Board[1][i] && Board[1][i] == Board[2][i] && Board[0][i] != ' ')
		{
			//�������򷵻����Ԫ�أ�
			return Board[0][i];
		}
	}
	for (i = 0; i < row; i++)
	{
		//�ж�ÿһ�е�����Ԫ���Ƿ���Ȳ��Ҳ����ڿո�
		if (Board[i][0] == Board[i][1] && Board[i][1] == Board[i][2] && Board[i][0] != ' ')
		{
			//�������򷵻����Ԫ�أ�
			return Board[i][0];
		}
	}
	//�ж����ϵ����µĶԽ����ϵ�Ԫ���Ƿ�����Ҳ����ڿո�
	if (Board[0][0] == Board[1][1] && Board[1][1] == Board[2][2] && Board[0][0] != ' ')
	{
		//�������򷵻����Ԫ��
		return Board[0][0];
	}
	//�ж����ϵ����µĶԽ����ϵ�Ԫ���Ƿ�����Ҳ����ڿո�
	if (Board[0][2] == Board[1][1] && Board[1][1] == Board[2][0] && Board[0][2] != ' ')
	{
		//�������򷵻����Ԫ��
		return Board[0][2];
	}
	//����Is_full()�����ж��������Ƿ�ÿ��λ�������϶�������
	if (Is_full(Board, row, col))
	{
		//�жϳ����򷵻�'Q'
		return 'Q';
	}
	//����ѭ�����ж�����������㣬�򷵻�'C'
	return 'C';
}
