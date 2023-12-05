#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//题目一：
// 小乐乐上课需要走n台阶，因为他腿比较长，所以每次可以选择
// 走一阶或者走两阶，那么他一共有多少种走法？
//int Count(int x, int y)
//{
//	int sum = 0;
//	sum = x + y;
//	int i = 0;
//	int j = 2;
//	int k = 2;
//	int ret = 1;
//	
//	for (i = 1; i <= sum; i++)
//	{
//		ret *= i;//先逐个求阶乘
//		//其走法为1212搭配，按照组合，当出现多个1或2时需要除去，避免重复计算
//		//同时为了避免溢出，每乘一次，就要除以重复的1或2的个数
//
//		//首先除以重复的1的个数
//		while (j <= x)
//		{
//			if ((ret % j == 0) && (ret / j != 0))//判断是否能被整除，并且商不为0(即被除数大于等于除数)
//			{
//				ret /= j;
//				j++;
//			}
//			//从2开始
//			else
//			{
//				break;
//			}
//		}
//		
//		//其次除以重复的2的个数
//		while (k <= y)
//		{
//			if ((ret % k == 0) && (ret / k != 0))
//			{
//				ret /= k;
//				k++;
//			}
//			else
//			{
//				break;
//			}
//		}
//		
//	}
//	return ret;
//}
//
//int main()
//{
//	int n = 0;
//	int x = 0;
//	int y = 0;
//	int count = 0;
//	int ret = 0;
//	int temp = 0;
//	scanf("%d", &n);
//
//	if (n == 1)//当阶梯数为1时，只有一种走法
//	{
//		count = 1;
//		ret = count;
//		printf("%d\n", ret);
//	}
//	else
//	{
//		for (y = 0; y <= (n / 2); y++)//循环直到小乐乐走法都为两阶，并且不超过阶梯数
//		{
//			x = n - 2 * y;//第一次y=1时，temp=0，表明走的方式全为1阶，1的乘除对后面运算无影响
//			//求出每一种走法有多少种排列方式
//			count = Count(x, y);
//			//将每一种走法的排列方式全部相加
//			ret += count;
//		}
//		printf("%d\n", ret);//1->走的方式全为2阶
//	}
//	return 0;
//}

//老师写法
//使用递归
//int Fib(int n)
//{
//	if (n <= 2)
//	{
//		return n;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);//这样的代码效率比较低，有大量的重复计算
//	}
//}
//为了避免斐波那契数列使用递归时代码的低效性
//可以使用循环来写代码
//int Fib(int n)
//{
//	int fib1 = 1;
//	int fib2 = 2;
//	int ret = 0;
//	int i = 0;
//	if (n <= 2)
//	{
//		return n;
//	}
//	else
//	{
//		for (i = 3; i <= n; i++)
//		{
//			ret = fib1 + fib2;
//			fib1 = fib2;
//			fib2 = ret;
//		}
//		return ret;
//	}
//}
//int main()
//{
//	int n = 0;
//	//输入
//	scanf("%d", &n);
//	int m = Fib(n);
//	printf("%d\n", m);
//	return 0;
//}

//题目二：
//有一个序列（可能有重复的整数），现删除指定的某一个整数，输出删除
//数字之后的序列，序列中未被删除的前后位置没有发生改变。
//数据范围：序列长度和序列中的值都满足1 <= N <= 50
//第一行输入一个整数（0 <= N <= 50).
//第二行输入N个整数，输入用空格分隔的N个整数
//第三行输入想要进行删除的一个整数

//int main()
//{
//	int N = 0;
//	scanf("%d", &N);
//	int arr[50] = { 0 };
//	int i = 0;
//	int j = 0;
//	//接受N个数字
//	for (i = 0; i < N; i++)
//	{
//		scanf("%d", &arr[i]);//记得加取地址符号
//	}
//	int x = 0;
//	scanf("%d", &x);
//	//删除输入的值
//	//for (i = 0; i < N; i++)
//	//{
//	//	if (x == arr[i])
//	//	{
//	//		j = i;
//	//		while (j < N)
//	//		{
//	//			arr[j] = arr[j + 1];
//	//			j++;
//	//		}
//	//		i--;
//	//	}
//	//}
//	//老师写的代码相较于自己的思路更清晰和整洁
//	for (i = 0; i < N; i++)
//	{
//		if (arr[i] != x)
//		{
//			arr[j] = arr[i];
//			j++;
//		}
//	}
//	for (i = 0; i < j; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	//for (i = 0; arr[i] != 0; i++)
//	//{
//	//	printf("%d ", arr[i]);
//	//}
//
//	return 0;
//}

//输入n个成绩，换行输出n个成绩中最高分数和最低分数的差
//输入描述：
//两行，第一行为n，表示n个成绩，不会大于10000
//第二行为n个成绩（整数表示，范围0-100），以空格隔开
//输出描述：
//一行，输出n个成绩中最高分数和最低分数的差
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[20] = { 0 };
//	int i = 0;
//	int max = 0;
//	int min = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		max = arr[0];
//		min = arr[0];
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//		if (min > arr[i])
//		{
//			min = arr[i];
//		}
//	}
//	printf("%d\n", max - min);
//	return 0;
//}
//上述代码可以进行简化
//以下代码在每次输入数据之后就直接进行判断，效率会快很多，运算时间也会缩短不少
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[20] = { 0 };
//	int i = 0;
//	int max = 0;
//	int min = 100;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//		if (min > arr[i])
//		{
//			min = arr[i];
//		}
//	}
//	printf("%d\n", max - min);
//	return 0;
//}

//题目四：
//题目名称：
//字母大小写转换
//有一个字符，判断它是否为大写字母，如果是，将它转换成小写字母
//反之则转换为大写字母
//输入描述：
//多组输入，每一行输入一个字母。
//暑促描述：
//针对每组输入，输出单独占一行，输出字母的对应形式
//int main()
//{
//	char ch = 0;
//	int i = 0;
//	while(scanf("%c", &ch) == 1)//scanf读取成功的时候，返回的是读取的数的个数
//	{
//		//scanf读到一个完整数据返回1，读取失败返回EOF
//		//scanf函数在读取失败的时候，返回的是EOF
//		if ((ch >= 'A') && (ch <= 'Z'))
//		{
//			printf("%c\n", ch + 32);
//		}
//		else if ((ch >= 'a') && (ch <= 'z'))
//		{
//			printf("%c\n", ch - 32);
//		}
//		//else
//		//{
//		//	break;
//		//}		
//		//getchar();//因为输入数据后敲回车，会产生换行符，所以需要用getchar函数消除影响
//	}
//	return 0;
//}
////调用库函数
//#include <ctype.h>
//int main()
//{
//	char ch = '\0';
//	while (scanf("%c", &ch) != EOF)
//	{
//		if (islower(ch))
//		{
//			printf("%c\n", toupper(ch));
//		}
//		else if (isupper(ch))//其库函数头文件为ctype.h
//		{
//			printf("%c\n", tolower(ch));
//		}
//	}
//	return 0;
//}
////一个代码有很多中写法

//题目：
//判断是不是字母
//输入描述：每一行输入一个字符
//输出描述：针对每组输入，输出单独占一行，判断输入字符是否为字母。
//int main()
//{
//	char ch = '\0';
//	while (scanf("%c", &ch) == 1)
//	{
//		if (((ch >= 'A') && (ch <= 'Z')) || ((ch >= 'a') && (ch <= 'z')))
//		{
//			printf("%c is an alphabet.\n", ch);
//		}
//		else
//		{
//			printf("%c is not an alphabet.\n", ch);
//		}
//		getchar();
//	}
//	return 0;
//}
//第二种做法
//int main()
//{
//	char ch = '\0';
//	while (scanf(" %c", &ch) == 1)
//	//%c前面加空格->跳过下一个字符之前的所有空白字符，比较小众的写法
//	{
//		if (((ch >= 'A') && (ch <= 'Z')) || ((ch >= 'a') && (ch <= 'z')))
//		{
//			printf("%c is an alphabet.\n", ch);
//		}
//		else
//		{
//			printf("%c is not an alphabet.\n", ch);
//		}
//	}
//	return 0;
//}
//第三种做法->使用库函数
//int main()
//{
//	char ch = '\0';
//	while (scanf(" %c", &ch) == 1)
//	{
//		if (isalpha(ch))
//		{
//			printf("%c is an alphabet.\n", ch);
//		}
//		else
//		{
//			printf("%c is not an alphabet.\n", ch);
//		}
//	}
//	return 0;
//}


//题目：
//kiki参加了语文、数学、英语的考试，请帮他判断三科中的最高分，从键盘任意输入三个
//整数表示的分数，编程判断其中的最高分。
//数据范围0-100
//输入描述：输入一行包括三个整数表示的分数（0-100），用空格分隔。
//输出描述：输出位一行，即三个分数中的最高分。
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int max = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	max = (a > b ? a : b) > c ? (a > b ? a : b) : c;
//	printf("%d\n", max);
//}

//题目：
//变种水仙花数：把任意的数字，从中间拆分成两个数字， 比如1461可以拆分成（1和461），
//(14和61），（146和1），如果所有拆分后的乘积之和等于自身，则是一个变种水仙花数
//int main()
//{
//	int i = 0;
//	int sum1 = 0;
//	int sum2 = 0;
//	int sum3 = 0;
//	int sum4 = 0;
//	int sum = 0;
//	for (i = 10000; i < 100000; i++)
//	{
//		sum1 = (i / 10000) * (i % 10000);
//		sum2 = (i / 1000) * (i % 1000);
//		sum3 = (i / 100) * (i % 100);
//		sum4 = (i / 10) * (i % 10);
//		sum = sum1 + sum2 + sum3 + sum4;
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//方法二
#include <math.h>
int main()
{
	int i = 0;
	int j = 0;
	for (i = 10000; i < 100000; i++)
	{
		int sum = 0;
		for (j = 1; j <= 4; j++)
		{
			int k = (int)pow(10, j);
			sum += (i / k) * (i % k);
		}
		if (sum == i)
		{
			printf("%d ", i);
		}
	}
	return 0;
}