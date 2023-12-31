#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//递归作为一种算法在程序设计语言中广泛应用
//一个过程或函数在其定义或说明中有直接或间接
//调用自身的一种方法，它通常把一个大型复杂的
//问题转化为一个与原问题相似的规模较小的问题来求解
//递归的主要思考方式在于：把大事化小

//接受一个整型值（无符号），按照顺序打印它的每一位
//例如：输入1234；打印1 2 3 4
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
////%d包含有符号整数（会有正负数）
////%u是打印无符号整数
//	while (num)
//	{
//		printf("%d ", num % 10);
//		num /= 10;
//	}
//	//这种方式打印的顺序不对，本来是由千位到各位
//	// 可这里打印的是个位到千位
//	//printf("%u\n", num);
//	return 0;
//}

////使用函数递归，按从高位到低位按顺序打印
////输入的无符号整数
//void print(unsigned int n)
//{
//	if (n > 9)
//	{
////只要n>9,函数就一直被递归调用
////递归分为“递”和“归”
////视频—函数栈帧的创建和销毁
////栈区里面可以存储局部变量、函数的形参
////每一次函数的调用都会在栈区中申请空间
////递归如果书写不当，可能会出出现死循环，得加上限制条件
////递归的两个必要条件：1.存在限制条件，当满足这个限制条件的时候，递归便不再继续
////2.每次递归调用之后越来越接近这个限制条件
//		print(n / 10);
//	}
//	printf("%d ", n%10);
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}

//编写函数不允许创建临时变量，求字符串的长度
//求字符串长度
//模拟实现函数strlen（）
//int my_strlen(char* str)//因为传递过来的是地址
////所以这里形参需要指针变量进行定义
//{
//	int count = 0;//count在这里相当于一个临时变量
//	//实现计数器的作用
//	while (*str !='\0')
//	{
//		count++;
//		str++;//查找下一个字符
//	}
//	return count;
//}
//不创建临时变量，使用函数递归解决问题
int my_strlen(char* str)
{
	if (*str != '\0')
	{
		return 1 + my_strlen(str + 1);
	}
	else
	{
		return 0;
	}
}
int main()
{
	//这里还是用数组来存放字符串
	char arr[] = "abc";

	int num=my_strlen(arr);
//这里函数调用传递的是字符串“abc”的首字母“a”的地址
//相当于一个数组，例如
	//char arr[] = "abc";
	//这个数组里面包含{a，b，c，\0}；
	//另外用数组包含字符串可以不用大括号
	//同样这个数组传递的也是数组第一个元素的地址
	//对应的被调用函数的形参也就需要用指针变量进行定义
	printf("%d\n", num);
	return 0;
}