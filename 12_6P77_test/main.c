#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	//pa是一个指针变量，指针变量是用来存放内存地址
//	//本质上指针就是地址，指针变量就是一个变量
//	//我们一般所说的指针一般指的是指针变量
//	return 0;
////}

//int main()
//{
//	char* pa = NULL;
//	short* pb = NULL;
//	int* pc = NULL;
//	double* pd = NULL;
//	
//	//sizeof 返回值的类型是无符号整型
//	//转换声明为->%zu，虽然用%d不影响打印，但是用%zu是最准确的
//	printf("%zu\n", sizeof(pa));
//	printf("%zu\n", sizeof(pb));
//	printf("%zu\n", sizeof(pc));
//	printf("%zu\n", sizeof(pd));
//
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	//int* pa = &a;
//	//*pa = 0;
//
//	char* pa = &a;
//	*pa = 0;
//
//	//结论：
//	//指针类型决定了指针在被解引用的时候访问几个字节
//	//如果是int*的指针，解引用访问4个字节
//	//如果是char*的指针，解引用访问1个字节
//	//推广到其他类型
//
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	//两个地址是一样的
//
//	printf("pa = %p\n", pa);
//	printf("pa + 1 = %p\n", pa + 1);
//
//	printf("pc = %p\n", pc);
//	printf("pc + 1 = %p\n", pc + 1);
//
//	//结论：
//	//指针的类型决定了指针+-1操作的时候，跳过几个字节
//	//决定了指针的补偿
//	//int*跳过4个字节->一次访问一个字节
//	//char*跳过1个字节->一次访问四个字节
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int* pa = &a;//pa解引用访问4个字节，pi+1也是跳过4个字节
//	float* pb = &a;//pb解引用访问4个字节，pi+1也还是跳过4个字节
//	//int*和float*不可以通用，两者是不同的
//	//*pa = 100;
//	*pb = 100.0;
//	return 0;
//}

//野指针：
//int main()
//{
//	int* p;//p没有初始化，就意味着没有明确的指向
//	//一个局部变量不初始化的话，放的是随机值：0xcccccccc
//	*p = 10;//非法访问内存了，这里的p就是野指针
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*p = i;
//		p++;
//	}
//
//	for (i = 0; i < 11; i++)//产生了11个元素，会造成越界访问，产生野指针
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	//int a = 10;
//	//int* p = &a;//及时初始化
//	//int* p1 = NULL;//如果实在不知道赋什么值，NULL->0
//	
//	//int* p3 = NULL;
//	//*p3 = 100;//error，空值NULL不能访问
//	
//	//int* p2 = NULL;
//	//
//	//if (p2 != NULL)//这种方式更加严谨
//	//{
//	//	*p2 = 100;
//	//}
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	//将数组全部元素赋值为1
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//int i = 0;
//	//for (i = 0; i < sz; i++)
//	//{
//	//	arr[i] = 1;
//	//}
//
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", arr[i]);
//	//}
//
//	//int* p = arr;
//	//int i = 0;
//	//for (i = 0; i < sz; i++)
//	//{
//	//	*p++ = 1;//等于先*p = 1；后p++
//	//}
//
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", arr[i]);
//	//}
//
//
//
//	return 0;
//}

//指针键指针得到的数值的绝对值等于指针和指针之间的个数
//不是所有的指针都能相减
//指向同一块空间的指针相减才有意义
#include <string.h>

//方法一：
//int my_strlen(char* str)
//{
//	int count = 0;
//
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//方法二：用递归
//int my_strlen(char* str)
//{
//	int sum = 0;
//	if (*str != '\0')
//	{
//		str++;
//		sum = my_strlen(str) + 1;
//		return sum;
//	}
//	else
//	{
//		return 0;
//	}
//
//}

//方法三：
//int my_strlen(char* str)
//{
//	int i = 0;
//	int*start = str;
//	int count = 0;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	
//	count = str - start;
//
//}
//int main()
//{
//	//int len = strlen("abddng");
//	int len = my_strlen("abddng");
//	printf("%d\n", len);
//
//	return 0;
//}
////注意：
//指针加指针没有什么意义

//数组：一组相同类型元素的集合
//指针变量：是一个变量，存放的是地址

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//指针变量p此时存放的是数组首元素的地址
//	//指针和数组之间就有了联系
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%p--------%p\n", &arr[i], p + i);
//	}
//	//arr[i]->*()
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", *(p + i));
//	//}
//	return 0;
//}

//二级指针

//int main()
//{
//	int a = 10;
//	int* p = &a;//pa是一个指针变量，一级指针变量
//	int** pp = &p;//pp是一个二级指针变量
//
//	**pp = 20;
//	printf("%d\n", a);
//
//	//*p = 20;
//	//printf("%d\n", a);
//
//	return 0;
//}

//指针数组
//存放指针的数组

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	
//	//int arr[10];
//
//	//int* pa = &a;
//	//int* pb = &b;
//	//int* pc = &c;
//
//	//int* parr[10];
//	//parr就是存放指针的数组
//	//指针数组
//	int* parr[10] = { &a, &b, &c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(parr[i]));
//	}
//
//
//	return 0;
//}

//int main()
//{
	//int arr[3][4] = { 1, 2, 3, 4, 4, 5, 6, 7, 7, 8, 8, 9 };
	//int i = 0;
	//int j = 0;
	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 4; j++)
	//	{
	//		printf("%d ", arr[i][j]);
	//	}
	//	printf("\n");
	//}

//	int arr1[4] = {1, 2, 3, 4};
//	int arr2[4] = {3, 4, 5, 6};
//	int arr3[4] = {4, 5, 6, 7};
//
//	int* parr[3] = { arr1, arr2, arr3 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", parr[i][j]);//这里[]就是解引用了
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//结构体
//结构是一些值的集合，这些值称为成员变量。
// 结构的每个成员可以是不同的类型的变量。
//数组是一组相同类型元素的集合。
//复杂对象的描述就会使用到：结构体
//结构体声明
//struct tag
//{
//	member-list;
//}variable-list;

//struct Peo
//{
//	//成员变量
//	char name[20];
//	char tel[12];
//	char sex[5];//一个汉字占两个字符，后面还会有一个'\0'
//	int high;
//};

//struct Peo
//{
//	//成员变量
//	char name[20];
//	char tel[12];
//	char sex[5];//一个汉字占两个字符，后面还会有一个'\0'
//	int high;
//}p1, p2;//p1和p2是使用struct Peo结构体类型创建的两个变量
////p1和p2是两个全局的结构体变量，可以避免这样用，可以不创建


//struct Peo
//{
//	//成员变量
//	char name[20];
//	char tel[12];
//	char sex[5];//一个汉字占两个字符，后面还会有一个'\0'
//	int high;
//};
//
//struct St
//{
//	struct Peo p;
//	int a;
//	float b;
//};//结构体包含结构体
//
//void print1(struct St* s)
//{
//	printf("%s %s %s %d %d %f\n", s->p.name, s->p.tel, s->p.sex, s->p.high, s->a, s->b);
//}//指针需要用->,结构体指针->成员变量，->箭头操作符
//
//void print2(struct St s)
//{
//	printf("%s %s %s %d %d %f\n", s.p.name, s.p.tel, s.p.sex, s.p.high, s.a, s.b);
//}//结构体变量.成员变量，.操作符
//
//int main()
//{
//	struct Peo p1 = { "张三", "12322244414", "男", 181 };//结构体变量的创建
//	struct St s = { { "lisi", "13423579024", "女", 166}, 100, 13.4f };//浮点数在内存中不能精确保存
//	
//	printf("%s %s %s %d\n", p1.name, p1.tel, p1.sex, p1.high);
//	printf("%s %s %s %d %d %f\n", s.p.name, s.p.tel, s.p.sex, s.p.high, s.a, s.b);
//	
//	print1(&s);
//	print2(s);
//
//	return 0;
//}

//struct Peo
//{
//	//成员变量
//	char name[20];
//	char tel[12];
//	char sex[5];//一个汉字占两个字符，后面还会有一个'\0'
//	int high;
//};
//struct St
//{
//	struct Peo p;
//	int a;
//	float b;
//};//结构体包含结构体

//结构体传参
//传参时，如果传实参-形参，实参数据量比较大的时候
//易导致占据空间大，传输时间长
//结构体传参时，尽量采用传地址的方式
