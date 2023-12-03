#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

////冒泡排序：
////重复地走访要排序的元素列，一次比较两个相邻的元素
////走访元素的工作是重复地进行，知道没有相邻元素需要交换
////也就是说该元素列已经排序完成
////名字由来：
////因为越小的元素会经由交换慢慢“浮”到数列的顶端
////就如同碳酸饮料的气泡最终会上浮到顶端一样，故名“冒泡排序”
// void bubble_sort(int* arr, int sz)
// 和下面函数的定义是一样的效果
// 因为这个形参本质上就是指针
// void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	int temp = 0;
//	for (i = 1; i < sz; i++)
//	{
//		for (j = 0; j < sz - i; j++)
//		//这里的j < sz - j语句是判断数组的下标
//		//即限定下标表示范围
//		//不要解读成相邻元素间交换次数
//		{
//			if (arr[j] > arr[j + 1])
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
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	//不需要自己去确定数组中元素个数
//	//直接用下面方式
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	bubble_sort(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

////数组名是什么？
////数组名确实能表示首元素地址
////但是有2个例外
////1.sizeof(数组名)，这里数组名表示整个数组，计算的是整个数组的大小，单位是字节
////2.&数组名，这里的数组名表示整个数组，取出的是整个数组的地址
//int main()
//{
//	int arr[10];
//	printf("%p\n", arr);//arr就是首元素的地址
//	printf("%p\n", arr+1);
//	printf("-------------------\n");
//	printf("%p\n", &arr[0]);//首元素的地址
//	printf("%p\n", &arr[0]+1);
//	printf("-------------------\n");
//	printf("%p\n", &arr);//这个数组的地址，与首元素的地址是不一样的
//	printf("%p\n", &arr+1);
//
//	//判断数组名是不是数组首元素地址
//	int n = sizeof(arr);
//	return 0;
//}

//int main()
//{
//	int arr[3][4];
//	//int sz = sizeof(arr);
//	//printf("%d\n", sz);
//
//	arr;//二维数组的数组名也表示首元素地址
//	//把二维数组想象成一维数组
//	//把二维数组的每一行想象成数组的一个元素
//	//所以二维数组的数组名表示第一行的地址
//	printf("%p\n", arr);
//	printf("%p\n", arr + 1);
//
//	//计算二维数组的函数
//	int sz1 = sizeof(arr) / sizeof(arr[0]);
//	//sz1=整个数组的元素总大小/第一行数组名（第一行数组元素总大小）
//	int sz2 = sizeof(arr[0]) / sizeof(arr[0][0]);
//	//sz2=第一行数组元素总大小/第一行第一个元素大小
//	printf("%d %d\n", sz1, sz2);
//	return 0;
//}

//利用数组实现：
//1.三子棋
//2.扫雷游戏