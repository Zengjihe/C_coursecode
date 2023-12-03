#include "game.h"

void menu(void)
{
	printf("*********ɨ����Ϸ*********\n");
	printf("****  1.start 0.exit  ****\n");
	printf("**************************\n");
}

void game(void)
{
	char hide[ROWS][COLS] = { 0 };//��������ף�����ӡ��ʾ
	char show[ROWS][COLS] = { 0 };//������ӡ�������׽����ʾ�������ǰ
	char sign[ROWS][COLS] = { 0 };//�����ݹ��У������ж�������Ƿ��Ѿ����Ų��������ӡ��ʾ
	//��ʼ��
	InitBoard(hide, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	InitBoard(sign, ROWS, COLS, ' ');
	//��ӡ��ʼ������
	PrintBoard(show, ROWS, COLS);
	//�������ը����λ��
	SetMine(hide, ROWS, COLS);

	while (1)
	{
		int count = 0;//��ʼ��ը������
		int ret = 0;//��ʼ�����׵���Χ8��Ԫ�غ�ը������
		//��ʼ�����׵�����
		int x = 0;
		int y = 0;

		printf("���������׵�:>");
		scanf("%d %d", &x, &y);

		if ((x > 0) && (x < ROWS - 1) && (y > 0) && (y < COLS - 1))//�ж����������Ƿ�Ϸ�
		{
			if (hide[x][y] == '1')//�ж����׵��Ƿ���ը��
			{
				PrintBoard(hide, ROWS, COLS);//��ӡը��λ��
				printf("ը����ը����Ϸ����\n");
				break;
			}
			else
			{
				if (show[x][y] == '*')//�ж��������׵��Ƿ��Ѿ���ռ��
				{
					ret = MineCount(hide, x, y);//�����������Χ8��Ԫ�ص�ը������
					if (ret == 0)
					{
						//ʵ��һƬչ������
						SpreadBoard(hide, show, sign, ROWS, COLS, x, y);
					}
					else
					{
						show[x][y] = '0' + ret;//����show��char���͵ģ�48��Ӧ���ַ�Ϊ'0'
					}
					PrintBoard(show, ROWS, COLS);
				}
				else
				{
					printf("��λ���ѱ�ѡ������������\n");
				}
			}
		}
		else
		{
			printf("�Ƿ����룬������ѡ��\n");
		}

		MarkBomb(show, ROWS, COLS);//��ǻ���ȡ�����ը��λ��
		//�ж��Ƿ����׳ɹ�
		count = IsWin(show, ROWS, COLS);
		if (count == 10)
		{
			printf("��ϲ�㣬���׳ɹ�\n");
			break;
		}
	}
}

int main()
{
	srand((unsigned int)time(NULL));//����rand()�������������
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�Ƿ����룬������ѡ��\n");
			break;
		}
	} while (input != 0);
	return 0;
}