#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//题目：
//题目名称：求两个数二进制中不同位的个数
//题目内容：两个int（32位）整数m和n的二进制表达中，有多少个位（bit）不同
//^->异或，两个同类型数对应二进制补码的位相同返回0，不同返回1

//算法1：
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int temp = 0;
//	int count = 0;
//	int ret = 0;
//	int i = 0;
//
//	scanf("%d %d", &m, &n);
//
//	temp = m ^ n;
//	for (i = 1; i <= 32; i++)
//	{
//		ret = temp & 1;
//		if (ret == 1)
//		{
//			count++;
//		}
//		temp = temp >> 1;//temp >> 1不改变temp的值
//	}
//
//	printf("%d\n", count);
//
//	return 0;
//}

//算法2：

//int count_num_of_diff_bit(unsigned int m, unsigned int n)
//{
//	int count = 0;
//	int i = 0;
//
//	for (i = 0; i < 32; i++)
//	{
//		if ((n % 2) != (m % 2))
//		{
//			count++;
//		}
//		m /= 2;
//		n /= 2;
//	}
//	
//	return count;
//}

//算法3：

//int count_num_of_diff_bit(int m, int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((m >> i) & 1) != ((n >> i) & 1))
//		{
//			count++;
//		}
//	}
//
//	return count;
//}

//算法4：
//int count_num_of_diff_bit(int m, int n)
//{
//	int ret = 0;
//	int count = 0;
//
//	//按位异或->两个数对应二进制位相同返回0，不同返回1
//	ret = m ^ n;
//	while (ret)
//	{
//		//计算ret二进制位中1的个数
//		ret = ret & (ret - 1);
//		count++;
//	}
//
//	return count;
//}
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int ret = 0;
//
//	scanf("%d %d", &m, &n);
//	ret = count_num_of_diff_bit(m, n);
//
//	printf("%d\n", ret);
//
//	return 0;
//}

//题目：
//题目名称：统计二进制中的1的个数
//题目内容：写一个函数返回参数二进制中的1的个数

//int main()
//{
//	int m = 0;
//	int i = 0;
//	int count = 0;
//	int ret = 0;
//	
//	scanf("%d", &m);
//
//	for (i = 1; i <= 32; i++)
//	{
//		ret = m & 1;
//		if (ret == 1)
//		{
//			count++;
//		}
//		m >>= 1;
//	}
//
//	printf("%d\n", count);
//	 
//	return 0;
//}

//老师算法：

//算法1：
//int count_num_of_1(int num)
//int count_num_of_1(unsigned int num)
//{
//	int temp = 0;
//	int count = 0;
//
//	while (num != 0)
//	{
//		temp = num % 2;
//		if (temp == 1)
//		{
//			count++;
//		}
//		num = num / 2;
//	}
//
//	return count;
//}//这样写对于负数是不可行的，但是可以想办法实现
////将int num改为unsigned int num，这样对于负数也就适用了

//算法2：n & 1->可以得到n的二进制位的最后一位是1or0，
//类似的方法可以结合移位操作符

//int count_num_of_1(int n)
//{
//	int i = 0;
//	int count = 0;
//
//	for (i = 0; i < 32; i++)
//	{
//		if ((n >> i) & 1 == 1)
//		{
//			count++;
//		}
//	}
//
//	return count;
//}

//上述方法都不够高效，需要一直循环
//算法3：

//int count_num_of_1(int n)
//{
//	int count = 0;
//
//	while (n)
//	{
//		n = n & (n - 1);//执行一次去掉一个1
//		count++;
//	}
//
//	return count;
//}//这种方法比较巧妙，写代码一定要学会总结，宽广的视野
//拓展-判断一个数是不是2的n次方
// 2^1->10
// 2^2->100
// 2^3->1000
// ……
//if (n & (n - 1) == 0)
//{
//   
//}

//int main()
//{
//	int num = 0;
//	int n = 0;
//
//	scanf("%d", &num);
//
//	n = count_num_of_1(num);
//
//	printf("%d\n", n);
//
//	return 0;
//}

//题目：
//题目名称：打印整数二进制的奇数位和偶数位
//题目内容：获取一个整数二进制序列中所有的偶数位和奇数位
//分别打印出二进制序列

//方法1：
//int main()
//{
//	int num = 0;
//	int odd = 0;
//	int even = 0;
//	int i = 0;
//	int temp = 0;
//
//	scanf("%d", &num);
//	temp = num;
//
//	for (i = 1; i <= 32; i++)
//	{
//		if (i % 2 != 0)
//		{
//			odd = temp % 2;
//			printf("%d ", odd);
//		}
//		temp /= 2;
//	}
//	printf("\n");
//	for (i = 1; i <= 32; i++)
//	{
//		if (i % 2 == 0)
//		{
//			even = num % 2;
//			printf("%d ", even);
//		}
//		num /= 2;
//	}
//	printf("\n");
//
//	return 0;
//}

//方法2：
//int main()
//{
//	int num = 0;
//	int odd = 0;
//	int even = 0;
//	int i = 0;
//	int temp = 0;
//
//	scanf("%d", &num);
//
//	//获取奇数位的数字
//	for (i = 31; i >= 1; i -= 2)
//	{
//		odd = (num >> i) & 1;
//		printf("%d ", odd);
//	}
//	printf("\n");
//
//	//获取偶数位的数字
//	for (i = 30; i >= 0; i -= 2)
//	{
//		even = (num >> i) & 1;
//		printf("%d ", even);
//	}
//	printf("\n");
//	
//	return 0;
//}

//题目：
//题目名称：
//交换两个变量（不创建临时变量）
//题目内容：不允许创建临时变量，交换两个整数的内容
//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	scanf("%d %d", &a, &b);
//
//	//通过按位异或来实现（满足结合律）
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//
//	printf("%d %d\n", a, b);
//
//	return 0;
//}


//题目：

//全局变量，静态变量都是放在静态区
//全局变量，静态变量不初始化的时候，默认会被初始化为0
//局部变量，是放在栈区，不初始化，默认值是随机值。为->ccccc

//int i;
//int main()
//{
//	i--;
//	//sizeof这个操作符计算返回的结果是size_t类型的，是无符号整型的
//	//i->int被转换为unsigned int
//	if (i > sizeof(i))//C 语言中不同类型变量之间比较时，会转换成较大范围类型进行比较
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//
//	return 0;
//}

//题目：
//题目名称：x形图案
//题目内容：多组输入，一个整数（2-20），表示输出的行数，也表示组成“x”的反斜线和正斜线的长度
//int main()
//{
//	int x = 0;
//
//	while (1)
//	{
//		int i = 0;
//		int j = 0;
//		scanf("%d", &x);
//		for (i = 0; i < x; i++)
//		{
//			for (j = 0; j < x; j++)
//			{
//				if (i == j)
//				{
//					printf("*");
//				}
//				else if (i + j == x - 1)
//				{
//					printf("*");
//				}
//				else
//				{
//					printf(" ");
//				}
//			}
//			printf("\n");
//		}
//	}
//
//
//	return 0;
//}

//题目：
//题目名称：获得月份天数
//题目内容：输入年份和月份，计算这一年这个月有多少天

int is_leap_year(int y)
{
	if ((y % 4 == 0) && (y % 100) != 0 || (y % 400 == 0))
	{
		return 1;
	}
	return 0;
}
//
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int i = 0;
//
//	scanf("%d %d", &year, &month);
//
//	if (is_leap_year(year))
//	{
//		if (month < 8)
//		{
//			if (month = 2)
//			{
//				printf("29\n");
//			}
//			else if (month % 2 != 0)
//			{
//
//				printf("31\n");
//
//			}
//			else
//			{
//				printf("30\n");
//			}
//		}
//		else
//		{
//			if (month % 2 == 0)
//			{
//				printf("31\n");
//			}
//			else
//			{
//				printf("30\n");
//			}
//		}
//	}
//	else
//	{
//		if (month < 8)
//		{
//			if (month = 2)
//			{
//				printf("28\n");
//			}
//			else if (month % 2 != 0)
//			{
//
//				printf("31\n");
//
//			}
//			else
//			{
//				printf("30\n");
//			}
//		}
//		else
//		{
//			if (month % 2 == 0)
//			{
//				printf("31\n");
//			}
//			else
//			{
//				printf("30\n");
//			}
//		}
//
//	}
//
//	return 0;
//}

//老师写法：
int main()
{
	int y = 0;
	int m = 0;
	int d = 0;
	int days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	while (scanf("%d %d", &y, &m) == 2)
	{
		d = days[m];
		if ((is_leap_year(y) == 1) && (m == 2))
		{
			d++;
		}
		printf("%d\n", d);
	}

	return 0;
}