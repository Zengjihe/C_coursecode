#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

////题目一
////题目名称：
////打印一个数的每一位
////题目内容：
////递归方式实现打印一个整数的每一位
//void print(int num)
//{
//	if ((num / 10) != 0)
//	{
//		print(num / 10);
//	}
//	printf("%d ", num % 10);
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}

//题目二
//题目名称
//求阶乘
//题目内容：
//递归和非递归实现求整数的阶乘（不考虑溢出的问题）
//1.递归
//int fac(int num)
//{
//	if (num == 1)
//	{
//		return num;
//	}
//	else
//	{
//		return num * fac(num - 1);
//		//递归函数一定会有限制条件
//		//每一次递归后都会逐渐向这个限制条件靠近
//		//直至不满足限制条件
//		//跳出‘递’的步骤，开始执行‘归’的步骤
//	}
//
//}
//int main()
//{
//	int num = 0;
//	int ret = 0;
//	scanf("%d", &num);
//	ret = fac(num);
//	printf("%d\n", ret);
//	return 0;
//}
////2.非递归
//int fac(int num)
//{
//	int ret = 1;
//	int i = 0;
//	for (i = 1; i <= num; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int main()
//{
//	int num = 0;
//	int ret = 0;
//	scanf("%d", &num);
//	ret = fac(num);
//	printf("%d\n", ret);
//	return 0;
//}

////题目三
////题目名称：
////strlen的模拟（递归实现）
////题目内容：
////递归和非递归分别实现strlen
//int my_strlen(char str[])//注意这里str[]是char类型
//{
//	if (str[0] != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char str[] = "abcdefgh";
//	int ret = my_strlen(str);
//	printf("%d\n", ret);
//	return 0;
//}

//题目四
//题目名称：
//字符串逆序（递归实现）
//题目内容：
//编写一个函数reverse_string(char* string)*（递归实现）
//实现：将参数字符串的字符反向排列，不是逆序打印。
//不能使用C语言库中字符串的操作函数
//比如：
//char arr[] = "abcdef";
//逆序之后数组的内容变成：fedcba
//1.不使用递归
//void reverse_string(char arr[], int left, int right)
//{
//	int temp = 0;
//	while(left < right)
//	{
//		temp = arr[right];
//		arr[right] = arr[left];
//		arr[left] = temp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	int left = 0;
//	//int right = strlen(arr) - 1;用这个函数也可以
//	int right = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	right = sz - 2;
//	reverse_string(arr, left, right);
//	printf("%s\n", arr);
//	return 0;
//}
//2.递归方法实现
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
////void reverse_string(char* str)
////{
////	char temp = *str;
////	int len = my_strlen(str);
////	*str = *(str +len - 1);
////	*(str + len - 1) = '\0';
////	if(my_strlen(str + 1) >= 2)
////	reverse_string(str + 1);
////	*(str + len - 1) = temp;
////}
////int main()
////{
////	char arr[] = "abcdefg";
////	reverse_string(arr);
////	printf("%s\n", arr);
////	return 0;
////}
//递归的方法2-多给了reverse函数参数
//void reverse_string(char str[], int left, int right)
//{
//	//一定要是先满足这个条件，再交换递归
//	if (left < right)
//	{
//		char temp = str[left];
//		str[left] = str[right];
//		str[right] = temp;
//		reverse_string(str, left + 1, right - 1);
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int sz = my_strlen(arr);
//	int left = 0;
//	int right = 0;
//	right = sz - 1;
//	reverse_string(arr, left, right);
//	printf("%s\n", arr);
//	return 0;
//}

////题目五
////题目名称：
////计算一个数的每位之和（递归实现）
////题目内容：
////写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//int DigitSum(int n)
//{
//	if (n / 10 != 0)
//	{
//		return DigitSum(n / 10) + n % 10;
//	}
//	else
//	{
//		return n;
//	}
//}
//int main()
//{
//	unsigned int n = 0;
//	int ret = 0;
//	scanf("%u", &n);
//	ret = DigitSum(n);
//	printf("%d\n", ret);
//	return 0;
//}

//题目六
//题目名称：
//递归实现n的k次方
//题目内容：
//编写一个函数实现n的k次方，使用递归实现
//注意考虑负次方
//C语言库里面也有一个函数pow（）函数求n次方
//double nth_pow(int n, int k)
//{
//	if (k > 0)
//	{
//		return n * nth_pow(n, k - 1);
//	}
//	else if(k == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 1.0 / nth_pow(n, -k);
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret = nth_pow(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}

//题目七
//题目名称：
//计算斐波那契数列
//题目内容：
//递归和非递归分别实现求第n个斐波那契数列
//1.递归法
//int count = 0;
//int Fibona(int n)
//{
//	if (n == 3)
//	{
//		count++;
//	}
//	if (n > 2)
//	{
//		return Fibona(n - 1) + Fibona(n - 2);
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 0;
//	ret = Fibona(n);
//	printf("%d\n", ret);
//	printf("%d\n", count);
//	return 0;
//}
//2.非递归法
//int Fibona(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fibona(n);
//	printf("%d\n", ret);
//	return 0;
//}

//题目八
#include <string.h>
//sizeof
//sizeof是一个操作符
//是用来计算变量（类型）所占内存空间的大小，不关注内存中存放的具体内容
// 单位是字节
//strlen
//strlen是一个库函数，是专门求字符串长度的，只能针对字符串
//从参数给定的地址向后一直找\0，统计\0之前出现的字符的个数
//int main()
//{
//	char arr[] = "hello bit";
//	printf("%zu %d\n", sizeof(arr), strlen(arr));
//	return 0;
//}

////题目九
////这里数组名和数据类型等价
//int main()
//{
//	int arr[] = { 1, 2, 3 };
//	printf("%zu\n", sizeof(arr));
//	printf("%zu\n", sizeof(int[3]));
//	return 0;
//}

//题目十
//题目名称：
//交换数组
//题目内容
//将数组A中的内容和数组B中内容进行交换。（数组一样大）
//void swap_arr(int arrA[], int arrB[], int sz1, int sz2)
//{
//	int temp = 0;
//	int i = 0;
//	if (sz1 == sz2)
//	{
//		for (i = 0; i < sz1; i++)
//		{
//			temp = arrA[i];
//			arrA[i] = arrB[i];
//			arrB[i] = temp;
//		}
//	}
//	else
//	{
//		printf("非法数组\n");
//	}
//}
//int main()
//{
//	int arrA[] = { 1,3,5,7,9 };
//	int sz1 = sizeof(arrA) / sizeof(arrA[0]);
//	int arrB[] = { 0,2,4,6,8 };
//	int sz2 = sizeof(arrB) / sizeof(arrB[0]);
//	swap_arr(arrA, arrB, sz1, sz2);
//	int i = 0;
//	for (i = 0; i < sz1; i++)
//	{
//		printf("%d ", arrA[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz1; i++)
//	{
//		printf("%d ", arrB[i]);
//	}
//	printf("\n");
//
//	return 0;
//}

////题目十一
////题目名称：
////数组操作
////题目内容：
////创建一个整型数组，完成对数组的操作
////1.实现函数init（）初始化数组为全0
////2.实现print（）打印数组的每个元素
////3.实现reverse（）函数完成数组元素的逆置
////要求：自己设计以上函数的参数，返回值
//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
////使用循环结构（也就是迭代）
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int temp = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		temp = arr[right];
//		arr[right] = arr[left];
//		arr[left] = temp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = 0;
//	int i = 0;
//	sz = sizeof(arr) / sizeof(arr[0]);
//	//init(arr, sz);
//	print(arr, sz);
//	//reverse(arr, sz);
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", arr[i]);
//	//}
//	return 0;
//}

////题目十二
////题目内容：
////冒泡排序
////题目内容：
////实现一个对整型数组的冒泡排序
//void bubble(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	int temp = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				temp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,7,3,6,3,9,10,-4,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//题目十三
//题目名称：
//三子棋
//题目内容：
//1.完成三子棋游戏代码
//2.并将三子棋的设计和代码完成一篇博客