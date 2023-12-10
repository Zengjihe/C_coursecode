#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

//int main()
//{
//	int year = 1009;
//	int* p = &year;
//
//	(*p)++;//(*p)++ -> *p=*p+1;
//
//	printf("%d\n", year);
//
//	return 0;
//}

//题目名称：求最小公倍数
//题目内容：正整数A和正整数B的最小公倍数是指能被A和B整除的
//最小的正整数值，设计一个算法，求输入A和B的最小公倍数。

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//
//	scanf("%d %d", &a, &b);
//
//	while (++i)
//	{
//		if ((a * i) % b == 0)
//		{
//			printf("%d\n", a * i);
//			break;
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
//	int i = 1;
//
//	scanf("%d %d", &a, &b);
//
//	while ((a * i) % b)
//	{
//		i++;
//	}
//
//	printf("%d\n", a * i);
//
//	return 0;
//}

//题目名称：倒置字符串
//题目内容：将一句话的单词进行倒置，标点不倒置。
//比如I like beijing.经过函数后变为：beijing.like I

//#include <string.h>
//
//void reverse_unit(char* s)
//{
//	int num = strlen(s);
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	char v[100] = { 0 };//创建两个数组
//
//	strcpy(v, s);//使用strcpy函数进行复制
//	for (i = num - 1; i >= 0; i--)
//	{
//		//由后往前遇到空格就开始逆序
//		if (*(s + i) == ' ')
//		{
//			for (j = i + 1; j < num; j++)
//			{
//				*(v + k) = *(s + j);
//				k++;
//			}
//			*(v + k) = ' ';
//			k++;
//			//作为下一次num的限制条件
//			num = i--;
//		}
//	}
//	//到最前面第一个单词时，没有空格，正序打印出来
//	while (*(s + 1 + i) != ' ')
//	{
//		*(v + k) = *(s + 1 + i);
//		k++;
//		i++;
//	}
//	strcpy(s, v);
//	printf("%s\n", s);
//}
//
//int main()
//{
//	char str[100] = { 0 };
//
//	gets(str);
//
//	reverse_unit(str);
//
//	return 0;
//}

//方法2->先整体逆置，再逐个单词逆置

void reverse(char* left, char* right)
{
	int temp = 0;

	while (left < right)
	{
		temp = *right;
		*right = *left;
		*left = temp;
		left++;
		right--;
	}
}

int main()
{
	char str[101] = { 0 };

	gets(&str);

	//整体逆置
	reverse(str, str + strlen(str) - 1);
	//各单词逆置
	char* start = str;
	char* end = start;
	
	while (*end)
	{
		while ((*end != ' ') && (*end != '\0'))
		{
			end++;
		}
		reverse(start, end - 1);
		if (*end != '\0')
		{
			end++;
		}
		start = end;
	}

	printf("%s\n", str);

	return 0;
}

