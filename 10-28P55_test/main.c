#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	//int a = 1;
//	//int b = 2;
//	//int c = 3;
//	//数组是一组相同类型元素的集合
//	//int arr[15 + 5];
//	//方括号里面可以是常量或常量表达式
//	//在C99之前，数组的大小必须是常量或者常量表达式
//	//在C99之后，数组的大小可以是变量，为了支持变常数组
//	//例如
//	//int n = 10;
//	//scanf("%d", &n);
//	//int arr[n];//这种数组是不能初始化的，visual studio这里是不可以的，必须得是支持C99之后的编译器
//	//return 0;
//
//	//数组的创建方式
//	//type_t  arr_name  [const_n]
//	//type_ 是指数组的元素类型
//	//const_t 是一个常量表达式，用来制定数组的大小
//
//	//int arr[10] = { 1,2,3,5 };
//	 //这是不完全初始化，还有完全初始化
//	int arr1[10] = { 1,2,3 };
//	int arr2[] = { 1,2,3 };
//	char ch1[3] = { 'a', 'b', 'c' };
//	char ch2[10] = "abc";
//	char ch3[] = { 'a', 'b', 'c' };
//	char ch4[] = "abc";
//	//注意字符串和字符数组之间的储存区别
//	printf("%d ", arr1[26]);
//}

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//[]-表示下标引用操作符
//	//打印数组
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//for (i = 0; i < sz; i++)
//	//	//注意这里的条件判断语句不是i <= sz
//	//	//而是i < sz，因为下标是从0开始的
//	//{
//	//	printf("%d ", arr[i]);
//	//}
//	//也可以倒着打印
//	for (i = sz - 1; i >= 0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

////一维数组在内存中的存储
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//打印每个数组元素地址
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n",i, &arr[i]);
//		//这里%p是打印地址，后边的打印对象记得取地址
//		//一个地址对应一个字节
//		//随着数组下标的增长，步长为1；
//		// 存储的地址也增长，步长为4，表示相差4个字节
//	}
//	return 0;
//}

//二维数组
//二维数组的创建
//int main()
//{
//	//int arr[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 3, 4, 6, 7 };//表示创建一个3行4列数组
//	//完全初始化
//	//int arr[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//int arr[3][4] = { {1, 2}, { 3, 4}, {5, 6} };
//	//int arr[]={ 1, 2, 3, 4, 5};
//	//在一维数组中可以只初始化，编译器会根据元素多少自动给出元素个数
//	//在二维数组中这样却不行
//	//int arr[][4] = { 1, 2, 3, 4, 5, 6, 7 };
//	//二维数组中可以省略行而不能省略列
//	//明白其内在机制
//	//int arr[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
//	//int i = 0;
//	//int j = 0;
//	//for (i = 0; i < 3; i++)
//	//{
//	//	for (j = 0; j < 4; j++)
//	//	{
//	//		printf("%-2d ", arr[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//	//通过下标的方式进行定位
//	//printf("%d\n", arr[2][0]);
//	int arr[3][4] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			scanf("%d", &arr[i][j]);
//			//这里得加上取地址符号&，不能去掉
//			//在终端输入数据时
//			//可以是敲一个数字空一格
//			//也可以是敲一个数字，按回车
//			//因为空格可以使得scanf函数终止读数
//			//同样的回车后的\n转义字符也可以使得scanf函数终止读数
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%-2d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	//三维数组也是一样的道理
//	return 0;
//}

////把二维数组看做一维数组
////可以把二维数组理解为：一维数组的数组（二维数组一行是一个元素）
//int main()
//{
//	int arr[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d] = %p  ", i, j, &arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//其实最终在内存中的体现
//int arr[3][4]和int arr[12]的存储形式是一样的

////数组越界(一维数组和二维数组都会是这样）
////数组的下标示有范围限制的
////数组的下标规定是从0开始ID，如果数组有n个元素
////最后一个元素的下标就是n-1
////所以数组的下标如果小于0，或者大于n-1，就是数组越界访问了
////超出了数组合法空间的访问
////并且编译器不一定会报错，即没报错也不一定是对的
////只能程序员自己做越界的检查
////eg:
//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j <= 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//这里就产生了数组越界，错误示范
//印证了二维数组的地址像一维数组的形式排列

//编译的过程中出现了黑色的光标，是误触了Insert键
//再摁一下就可以了

////数组作为函数参数
////往往在我们写代码的时候，会将数组作为参数传给函数
////冒泡排序
//// 核心思想：
//// 两个相邻的元素进行比较
//// 一趟冒泡排序让一个数据来到它最终应该出现的位置上
//// 注意：每一趟，减少的对数在变小
////数组传参有两种写法
////1.数组
////2.指针
////形参是数组的形式，这种形式容易理解，非常直观
//void bubble_sort(int arr[],int sz)
////这里数组名本质上为数组首元素的地址
////这里的arr[]不能再以数组的形式进行观察
////看似是数组，在本质上它是一个指针，指针的大小是8字节(本电脑是8，老师的是4）
//{
//	//趟数
//	int i = 0;
//	int j = 0;
//	int temp = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//sz=8/4=2,这样是不可取的，会产生错误结果
//	for (i = 1; i < sz; i++)
//		//这里从1开始，得区别于它从0开始（老师是从0开始）
//		// 个人认为趟数应该是从1开始更好理解
//		//当然你也可以从0开始
//		//相应的这里的循环条件和后面的循环条件都要变
//	{
//		//交换对数
//		for (j = 0; j < sz - i; j++)
//			//这里不是j<=sz-i
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//int main()
//{
//	//数组
//	//把数组的数据排成升序
//	//即1 2 3 4 5 6 7 8 9
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//注意sz得在主函数这里定义
//	int i = 0;
//	//这里我们采用冒泡排序的算法，对数组进行排序
//	bubble_sort(arr,sz);//数组传参，只需要给数组名就可以
//	//需要把sz传进去
//	for(i=0;i<sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	//不需要arr[]
//	return 0;
//}
//判断指针变量大小
//int main()
//{
//	printf("%zu\n", sizeof(int*));
//	return 0;
//}