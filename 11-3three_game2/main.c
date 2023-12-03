#include "game.h"

void menu(void)
{
	printf("**********************************\n");
	printf("*********1.start   0.exit*********\n");//1-开始游戏；0-退出游戏
	printf("**********************************\n");
}

void game(void)
{
	int ret = 0;
	//创建一个二维数组
	char Board[ROW][COL] = { 0 };
	//初始化棋盘
	InitBoard(Board, ROW, COL);
	//打印棋盘
	DisplayBoard(Board, ROW, COL);
	while (1)
	{
		//玩家下棋
		PlayerMove(Board, ROW, COL);
		//判断输赢：'C'-游戏继续，'*'-玩家赢，'#'-电脑赢，'Q'-平局
		ret = Is_Win(Board, ROW, COL);//将判断输赢的返回值赋给ret
		if (ret != 'C')
		{
			DisplayBoard(Board, ROW, COL);
			break;
		}
		DisplayBoard(Board, ROW, COL);
		//电脑赢
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
		printf("玩家赢\n");
	}
	else if (ret == '#')
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
	int input = 0;//初始化玩家的输入值为0；
	do
	{
		menu();//调用menu()函数，提示玩家选择1或0；
		printf("请选择:>");
		scanf("%d", &input);//玩家输入
		switch (input)
		{
		case 1:
			game();//当输入值为1时，开始游戏，即进入game()函数；
			break;
		case 0:
			printf("退出游戏\n");//当输入值为0时，退出游戏，程序结束；
			break;
		default:
			//输入值非1非0时，提示重新输入；
			printf("请重新输入，输入1/0\n");
			break;
		}
	} while (input);//判断输入值为非0则游戏继续，输入值为0则游戏结束
	return 0;
}
