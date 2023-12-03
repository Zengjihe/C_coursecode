#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void menu()
{
	printf("**************************\n");
	printf("*****1-start   0-exit*****\n");
	printf("**************************\n");
}
void game()
{
	char ret = 0;//ע�������ret��char����
	char board[ROW][COL] = { 0 };
	//��ʼ�����̵ĺ���
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	//����
	while (1)
	{
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж���Ӯ
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		//�ж���Ӯ
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if(ret == '#')
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
	srand((unsigned int)time(NULL));//������������������
	int input = 0;
	do
	{
		menu();//��ӡ�˵�
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
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}
//��궨λ��һ���ط�
//��F9���������öϵ�
//�ڰ�F5������ֱ�����е���