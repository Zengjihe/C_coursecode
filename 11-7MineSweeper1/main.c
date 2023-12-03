#include "game.h"

void menu(void)
{
	printf("*********扫雷游戏*********\n");
	printf("****  1.start 0.exit  ****\n");
	printf("**************************\n");
}

void game(void)
{
	char hide[ROWS][COLS] = { 0 };//用来存放雷，不打印显示
	char show[ROWS][COLS] = { 0 };//用来打印，将排雷结果显示在玩家面前
	char sign[ROWS][COLS] = { 0 };//再死递归中，用来判断坐标点是否已经被排查过，不打印显示
	//初始化
	InitBoard(hide, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	InitBoard(sign, ROWS, COLS, ' ');
	//打印初始化棋盘
	PrintBoard(show, ROWS, COLS);
	//随机设置炸弹的位置
	SetMine(hide, ROWS, COLS);

	while (1)
	{
		int count = 0;//初始化炸弹个数
		int ret = 0;//初始化排雷点周围8个元素含炸弹个数
		//初始化排雷点坐标
		int x = 0;
		int y = 0;

		printf("请输入排雷点:>");
		scanf("%d %d", &x, &y);

		if ((x > 0) && (x < ROWS - 1) && (y > 0) && (y < COLS - 1))//判断输入坐标是否合法
		{
			if (hide[x][y] == '1')//判断排雷点是否有炸弹
			{
				PrintBoard(hide, ROWS, COLS);//打印炸弹位置
				printf("炸弹爆炸，游戏结束\n");
				break;
			}
			else
			{
				if (show[x][y] == '*')//判断输入排雷点是否已经被占用
				{
					ret = MineCount(hide, x, y);//返回坐标点周围8个元素的炸弹个数
					if (ret == 0)
					{
						//实现一片展开功能
						SpreadBoard(hide, show, sign, ROWS, COLS, x, y);
					}
					else
					{
						show[x][y] = '0' + ret;//数组show是char类型的，48对应的字符为'0'
					}
					PrintBoard(show, ROWS, COLS);
				}
				else
				{
					printf("该位置已被选择，请重新输入\n");
				}
			}
		}
		else
		{
			printf("非法输入，请重新选择\n");
		}

		MarkBomb(show, ROWS, COLS);//标记或者取消标记炸弹位置
		//判断是否排雷成功
		count = IsWin(show, ROWS, COLS);
		if (count == 10)
		{
			printf("恭喜你，排雷成功\n");
			break;
		}
	}
}

int main()
{
	srand((unsigned int)time(NULL));//设置rand()函数随机数种子
	int input = 0;
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
			printf("非法输入，请重新选择\n");
			break;
		}
	} while (input != 0);
	return 0;
}