#include "game.h"

void menu(void)
{
	printf("**********************************\n");
	printf("*********1.start   0.exit*********\n");//1-��ʼ��Ϸ��0-�˳���Ϸ
	printf("**********************************\n");
}

void game(void)
{
	int ret = 0;
	//����һ����ά����
	char Board[ROW][COL] = { 0 };
	//��ʼ������
	InitBoard(Board, ROW, COL);
	//��ӡ����
	DisplayBoard(Board, ROW, COL);
	while (1)
	{
		//�������
		PlayerMove(Board, ROW, COL);
		//�ж���Ӯ��'C'-��Ϸ������'*'-���Ӯ��'#'-����Ӯ��'Q'-ƽ��
		ret = Is_Win(Board, ROW, COL);//���ж���Ӯ�ķ���ֵ����ret
		if (ret != 'C')
		{
			DisplayBoard(Board, ROW, COL);
			break;
		}
		DisplayBoard(Board, ROW, COL);
		//����Ӯ
		ComputerMove(Board, ROW, COL);
		ret = Is_Win(Board, ROW, COL);
		if (ret != 'C')
		{
			DisplayBoard(Board, ROW, COL);
			break;
		}
		DisplayBoard(Board, ROW, COL);
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;//��ʼ����ҵ�����ֵΪ0��
	do
	{
		menu();//����menu()��������ʾ���ѡ��1��0��
		printf("��ѡ��:>");
		scanf("%d", &input);//�������
		switch (input)
		{
		case 1:
			game();//������ֵΪ1ʱ����ʼ��Ϸ��������game()������
			break;
		case 0:
			printf("�˳���Ϸ\n");//������ֵΪ0ʱ���˳���Ϸ�����������
			break;
		default:
			//����ֵ��1��0ʱ����ʾ�������룻
			printf("���������룬����1/0\n");
			break;
		}
	} while (input);//�ж�����ֵΪ��0����Ϸ����������ֵΪ0����Ϸ����
	return 0;
}
