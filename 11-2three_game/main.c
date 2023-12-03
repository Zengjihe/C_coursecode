#include "game.h"

void menu(void)
{
	printf("*****************************\n");
	printf("***********1.begain**********\n");
	printf("************0.exit***********\n");
}
void game(void)
{
	//1.����һ���ַ�������
	char str[ROW][COL] = { 0 };//ֱ����ROW��COL�Ϳ����ˣ�����Ҫ�ٶ���row��col
	int row = sizeof(str) / sizeof(str[0]);
	int col = sizeof(str[0]) / sizeof(str[0][0]);
	//2.��ʼ�����飬ʹ����ÿ��Ԫ��Ϊ' '
	Initstr(str, row, col);
	print_board(str, row, col);
	do
	{
		player_play(str, row, col);
		print_board(str, row, col);
		if (is_win(str, row, col) != 'C')//������û��ǰѵ��õĺ������ص�ֵ����һ������
		{
			break;
		}
		computer_play(str, row, col);
		print_board(str, row, col);
		if (is_win(str, row, col) != 'C')
		{
			break;
		}
	} while (1);
	if (is_win(str, row, col) == '*')
	{
		printf("���Ӯ\n");
	}
	else if (is_win(str, row, col) == '#')
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
	int input = 0;//����ע���input������ѭ���������
	//��ѭ�������涨����Ǿֲ���
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
			printf("����������\n");
			break;
		}
	} while (input != 0);//������while (input)�Ϳ�����
	//���Բ���while (input != 0)
	return 0;
}