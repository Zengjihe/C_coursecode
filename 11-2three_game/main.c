#include "game.h"

void menu(void)
{
	printf("*****************************\n");
	printf("***********1.begain**********\n");
	printf("************0.exit***********\n");
}
void game(void)
{
	//1.创建一个字符型数组
	char str[ROW][COL] = { 0 };//直接用ROW和COL就可以了，不需要再定义row和col
	int row = sizeof(str) / sizeof(str[0]);
	int col = sizeof(str[0]) / sizeof(str[0][0]);
	//2.初始化数组，使数组每个元素为' '
	Initstr(str, row, col);
	print_board(str, row, col);
	do
	{
		player_play(str, row, col);
		print_board(str, row, col);
		if (is_win(str, row, col) != 'C')//这里最好还是把调用的函数返回的值赋给一个变量
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
		printf("玩家赢\n");
	}
	else if (is_win(str, row, col) == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;//这里注意把input定义在循环语句外面
	//在循环体里面定义的是局部的
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("请重新输入\n");
			break;
		}
	} while (input != 0);//这里用while (input)就可以了
	//可以不用while (input != 0)
	return 0;
}