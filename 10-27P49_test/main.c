#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//char本质上也是属于整型家族
//因为字符存储的时候，存储的是Ascll码值

//题目一：
//从大到小输出
//题目内容：
//写代码将三个整数按从大到小输出
//例如：
//输入：2 3 1
//输出：3 2 1
// 自己的方法
//void lar_to_sma(int a, int b, int c)
//{
//	int max1 = 0;
//	int max2 = 0;
//	int min = 0;
//	if (a > b)
//	{
//		max1 = a;
//		if (max1 > c)
//		{
//			if (b > c)
//			{
//				max2 = b;
//				min = c;
//			}
//			else
//			{
//				max2 = c;
//				min = b;
//			}
//		}
//		else
//		{
//			max1 = c;
//			max2 = a;
//			min = b;
//		}
//	}
//	else 
//	{
//		max1 = b;
//		if (max1 > c)
//		{
//			if (a > c)
//			{
//				max2 = a;
//				min = c;
//			}
//			else
//			{
//				max2 = c;
//				min = a;
//			}
//		}
//		else
//		{
//			max1 = c;
//			max2 = b;
//			min = a;
//		}
//	}
//	printf("%d %d %d\n", max1, max2, min);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	lar_to_sma(a, b, c);
//	return 0;
//}

////老师的方法-效率更高，代码更简洁
//void swap(int* x, int* y)
//{
//	int temp = 0;
//	temp = *x;
//	*x = *y;
//	*y = temp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		swap(&a, &b);
//	}
//	if (a < c)
//	{
//		swap(&a, &c);
//	}
//	if (b < c)
//	{
//		swap(&b, &c);
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}
//这种比较类的题目可以采用交换赋值的方法

////题目二：
////打印3的倍数的数
////题目内容：
////写一个代码打印1-100之间所有的3的倍数的数字
//int main()
//{
//	int i = 0;
//	/*for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}*/
//	for (i = 3; i <= 100; i += 3)
//		printf("%d ", i);
//	//得学会学习的方法，消化理解
//	//上面这种方法不就比上上面的好一些
//	return 0;
//}

////题目3
////求最大公约数
////题目内容：
////给两个数，求这两个数的最大公约数
//int gcf(int x, int y)
////使用辗转相除法
//{
//	int temp1 = 0;
//	int temp2 = 0;
//	if (x < y)
//	{
//		temp1 = x;
//		x = y;
//		y = temp1;
//	}
// 这里if语句可以删去，因为谁大谁小都没关系
//	while (temp2=x % y )
//	{
//		x=y;
//		y = temp2;
//	}
//	return y;
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d %d", &x, &y);
//	int ret=gcf(x, y);
//	printf("%d\n", ret);
//	return 0;
//}

////老师做法
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int min = (a < b) ? a : b;
//	int m = min;
//	while (1)
//	{
//		if (a % m==0 && b % m==0)
//		{
//			break;
//		}
//		m--;
//	}
//	printf("%d\n", m);
//	return 0;
//}
////这是在暴力求解，不够高效，花费的时间会比较多
////因为一直在比较
////所以最好还是要用辗转相除法
//// 如果要求最小公倍数可通过下面这个等式求得
////（a*b/最大公约数）等于最小公倍数

//题目四
//打印闰年
//题目内容：
//打印1000年到2000年之间的闰年
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}

////题目五
////打印素数
////题目内容
////写一个代码：打印100-200之间的素数
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 10; i <= 20; i++)
//	{
//		for (k = 2; k < i; k++)
//		{
//			if (i % k == 0)
//			{
//				break;
//			}
//		}
//		if (k == i)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
////调用函数写素数代码
////下面这种方法又比上面方法好些，函数模块化
//#include <stdbool.h>//包含布尔头文件
//bool is_prime(int i)
//{
//	int k = 0;
//	for (k = 2; k < i; k++)
//	{
//		if (i % k == 0)
//		return false;//直接结束，不再执行后面语句，并返回值
//	}
//	return true;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

////题目六
////题目名称：
////数9的个数
////题目内容
////编写程序数一下1到100的所有的参数中出现多少个数字9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)//判读个位上的9的个数
//		{
//			count++;
//		}
//		if (i / 10 == 9)//判断十位上9的个数
//		{
//			count++;
//		}
//	}
//	printf("count=%d\n", count);
//	return 0;
//}
////做题前一定要理解清楚题目的意思
////想清楚再去做很重要

//题目七
//题目名称
//分数求和
//题目内容
//计算1/1-1/2+1/3-1/4+1/5-……+1/99-1/100,打印结果
int main()
{
	int i = 0;
	float sum = 0;
	int flag = 1;
	//自己写法
	//for (i = 1; i <= 100; i++)
	//{
	//	if (i % 2 == 0)
	//	{
	//		sum -= (1.0 / i);
	//	}
	//	else
	//	{
	//		sum += (1.0 / i);
	//	}
	//老师写法
	for(i=1;i<=100;i++)
	{
		sum = sum + flag * (1.0 / i);
		//这里使用的时候
		//想要得到浮点数
		//除号两边至少得有一个是小数形式
		flag = -1 * flag;//这样不需要判断，效率会更高
		//所以就一个正负号的变换，可以采用类似老师这样的做法
	}
	printf("%.2f\n", sum);//保留两位小数
	return 0;
}