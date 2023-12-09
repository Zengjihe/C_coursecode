#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//题目名称：三角形判断
//题目内容：KiKi想知道已经给出的三条边a，b，c能否构成三角形
//如果能构成三角形，判断三角形的类型（等边三角形、等腰三角形或普通三角形）
//输入描述：题目有多组输入数据，每一行输入三个a，b，c（0<a,b,c<100)，
//作为三角形的三个边，用空格分隔
//输出描述：针对每组输入数据，输出占一行，如果能构成三角形，等边三角形则输出
//Equilaterial triangel，等腰三角形则输出lsoscolos triangle，其余的三角形则输出ordinary triangel<
//反之，输出not a triangel.

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int max = 0;
//	int sum = 0;
//
//	while (scanf("%d %d %d", &a, &b, &c) == 3)//scanf返回输入值的个数
//	{
//		sum = a + b + c;
//		max = (a > b ? a : b) > c ? (a > b ? a : b) : c;
//		if ((sum - max) > max)
//		{
//			if (a == b && b == c)
//			{
//				printf("等边三角形\n");
//				continue;
//			}
//			else if (a == b || b == c || a == c)
//			{
//				printf("等腰三角形\n");
//				continue;
//			}
//			printf("普通三角形\n");
//		}
//		else
//		{
//			printf("不是三角形\n");
//		}
//	}
//
//	return 0;
//}

//老师写法
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//
//	while (scanf("%d %d %d", &a, &b, &c) == 3)
//	{
//		if ((a + b) > c && (a + c) > b && (b + c) > a)
//		{
//			if (a == b && b == c)
//			{
//				printf("等边三角形\n");
//			}
//			else if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a))
//			{
//				printf("等腰三角形\n");
//			}
//			else
//			{
//				printf("普通三角形\n");
//			}
//		}
//		else
//		{
//			printf("不是三角形\n");
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	printf("%zu\n", sizeof(short));
//}

//题目名称：使用指针打印数组内容
//题目内容：写一个函数打印arr数组的内容，不使用数组下标，使用指针
//arr是一个整型一维数组。

//void print(int* pa)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *pa++);
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//	print(arr);
//
//	return 0;
//}

//题目名称：字符串逆序
//题目内容：写一个函数，可以逆序一个字符串的内容

//void reverse_str(char* s, unsigned int sz)
//{
//	int i = 0;
//	for (i = sz - 1; i >= 0; i--)
//	{
//		printf("%c", *(s + i));
//	}
//
//}

//void reverse_str(char* s, unsigned int z)
//{
//	int left = 0;
//	int right = z - 2;
//	int temp = 0;
//
//	while (left < right)
//	{
//		temp = *(s + right);
//		*(s + right) = *(s + left);
//		*(s + left) = temp;
//		left++;
//		right--;
//	}
//	printf("%s\n", s);
//}
//
//int main()
//{
//	char str[10] = { 0 };
//
//	//scanf("%s", &str);//scanf函数遇到空格会停止
//	gets(str);//可以使用gets函数，避免这种情况
//
//	unsigned int sz = sizeof(str) / sizeof(str[0]);
//
//	reverse_str(str, sz);
//
//	return 0;
//}

//题目名称：计算求和
//题目内容：求Sn=a+aa+aaa+aaaa+aaaaa的前五项之和，其中a是一个数字‘

//#include <math.h>
//
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int i = 0;
//	int k = 0;
//	int sum = 0;
//
//	scanf("%d %d", &a, &n);
//
//	for (i = 0; i < n; i++)
//	{
//		k = k * 10 + a;
//		sum += k;
//	}
//
//	printf("%d\n", sum);
//
//	return 0;
//}

//#include <math.h>
//
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int temp = 0;
//	int n = 0;
//	
//	for (i = 0; i <= 100000; i++)
//	{
//		temp = i;
//		sum = 0;
//		n = 0;
//		do
//		{
//			n++;
//		} while (temp /= 10);
//		temp = i;
//		while (temp)//学会灵活运用
//		{
//			sum += (int)pow(temp % 10, n);
//			temp /= 10;
//		} 
//		if (i == sum)
//		{
//			printf("%d ", sum);
//		}
//
//	}
//
//	return 0;
//}



