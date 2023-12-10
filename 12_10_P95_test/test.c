#define _CRT_SECURE_NO_WARNINGS


//题目名称：打印菱形
//题目内容：用C语言在屏幕上输出菱形图案
#include <stdio.h>
//#include <assert.h>
//
//void print_rhombus(int m)
//{
//	assert((m % 2 != 0) && (m <= 100));
//
//	int i = 0;
//	int j = 0;
//	
//	char str[100][100] = { 0 };//这里需要使用循环初始化数组
//	//不要认为令它初始化为某一个值了，这个数组里面都是这个值，没有初始化的都会用0来替代
//
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			str[i][j] = ' ';
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		if (i <= m / 2)
//		{
//			for (j = -i; j <= i; j++)
//			{
//				str[i][((m - 1) / 2) + j] = '*';
//			}
//		}
//		else
//		{
//			for (j = -(m - 1 - i); j <= m - 1 - i; j++)
//			{
//				str[i][(m / 2) + j] = '*';
//			}
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			printf("%c", str[i][j]);
//		}
//		printf("\n");
//	}
//
//}
//
//
//int main()
//{
//	int m = 0;
//
//	while (scanf("%d", &m) == 1)
//	{
//		print_rhombus(m);
//	}
//
//
//	return 0;
//}

//老师写法-找规律
//int main()
//{
//	int line = 0;
//	int i = 0;
//	int j = 0;
//
//	scanf("%d", &line);
//
//	//上
//	for (i = 0; i < line; i++)
//	{
//		//空格
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//下
//	for (i = 0; i < line - 1; i++)
//	{
//		//空格
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//*
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//题目名称：喝汽水问题
//题目内容：喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水
//给20元，可以有多少瓶汽水
//int main()
//{
//	int n = 0;
//	int sum = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		sum = 0;
//		while (n / 2)
//		{
//			//偶数个瓶子
//			if (n % 2 == 0)
//			{
//				sum += n;
//				n /= 2;
//			}
//			//奇数个瓶子
//			else if(n - 1 != 0)
//			{
//				sum += n - 1;
//				n /= 2;
//				n += 1;
//			}
//		}
//		printf("%d\n", sum + 1);//最后还有一个瓶子没有喝，一个瓶子也不能换
//	}
//
//	return 0;
//}

//老师做法
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//
//	scanf("%d", &money);
//	empty = money;//有多少空瓶
//	total = money;//喝了的汽水瓶数
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//
//	printf("%d\n", total);
//
//	return 0;
//}
