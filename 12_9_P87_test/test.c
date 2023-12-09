#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//
//	//赋值
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	//打印
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	
//	return 0;
//}

//void test(int arr[])
//{
//	//
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	char str[] = "abcdefg";
//
//	test(arr);
//
//	return 0;
//}

//void test2()
//{
//	printf("hehe\n");
//}
//
//void test1()
//{
//	test2();
//}
//
//int main()
//{
//	test1();
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	int sum = 0;
//
//	scanf("%d", &n);
//
//	for (j = 1; j <= n; j++)
//	{
//		int ret = 1;
//		for (i = 1; i <= j; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//
//	printf("%d\n", sum);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9,10 };
//
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//
//	return 0;
//}

#include <string.h>
//这个代码还是写的太矬了，要简洁明要
//void my_strcpy(char* s1, char* s2)
//{
//	int i = 0;
//
//	while (s2[i] != '\0')
//	{
//		s1[i] = s2[i];
//		i++;
//	}
//	s1[i] = s2[i];
//}
//优化1
//void my_strcpy(char* s1, char* s2)
//{
//	while (*s2 != '\0')
//	{
//		*s1++ = *s2++;
//	}
//	*s1 = *s2;
//}
//优化2
//#include <assert.h>
//void my_strcpy(char* s1, const char* s2)
//{
//	//断言
//	assert (s2 != NULL);
//	assert(s1 != NULL);
//
//	while (*s1++ = *s2++)//'\0'的ASCLL为0,0就为假
//	{
//		;
//	}
//}
//为什么返回char*呢？
//是为了实现链式访问
//strcpy函数返回的是目标空间的起始地址
//#include <assert.h>
//char* my_strcpy(char* s1, const char* s2)
//{
//	char* ret = s1;
//	//断言
//	assert (s2 != NULL);
//	assert(s1 != NULL);
//
//	while (*s1++ = *s2++)//'\0'的ASCLL为0,0就为假
//	{
//		;
//	}
//}


//int main()
//{
//	const int a = 10;
	//a = 20;
	//int* p = &a;//翻窗户，通过指针来改变const变量a
	//const int* p = &a;//这样双重保险，翻窗户也不行了
	//*p = 20;
	//const修饰指针变量
	//1.const放在*的左边
	// 意思是：p指向的对象不能通过指针变量p来改变了，但是p变量本身的值是可以改变的
	//const int* p = &a;
	//int const* p = &a;//这两个写法是一样的效果
	//2、const放在*的右边
	//int* const p = &a;
	//意思是：p指向的对象是可以通过p来改变的，但是不能修改p变量本身的值
	//*p = 0;//ok
	//int n = 100;
	//p = &n;
	//3.*两边都有const
	//p指向的对象和p变量本事都不能够修改
//	printf("%s\n", a);
//
//	return 0;
//}

//#include <assert.h>
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	//断言
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while (*dest++ = *src++)//'\0'的ASCLL为0,0就为假
//	{
//		;
//	}
//}
//
//int main()
//{
//	char str1[20] = "xxxxxxxxxxxxxx";
//	char str2[] = "abcdefg";
//	char* p = NULL;
//
//	my_strcpy(str1, str2);
//
//	printf("%s\n", str1);
//
//	return 0;
//}

//模拟实现strlen函数

//#include <string.h>
//#include <assert.h>
////size_t 类型表示C中任何对象所能达到的最大长度，它是无符号整数
//size_t my_strlen(const char* s)
//{
//	//断言
//	assert(s);
//
//	size_t count = 0;
//
//	while (*s++)//后置++
//	{
//		count++;
//	}
//
//	return count;
//}
//
//int main()
//{
//	char str[] = "abcdefg";
//	char* p = NULL;
//	printf("%zu\n", my_strlen(str));//其返回值用%zu接受
//
//	return 0;
//}

