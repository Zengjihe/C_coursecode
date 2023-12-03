#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

//是闰年返回1
//不是闰年返回0，函数运行结束
int is_leap_year(int year)
{
	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int dichotomizing_search(int arr[], int k,int sz)
{
	//arr在这里是一个指针变量，存储地址，不是数组
	//不要在形参函数里计算sz，数组传参实际上传递的是数组首元素地址，
	//而不是整个数组
	//所以在函数内部计算一个函数参数部分的数组的元素个数是不靠谱的
	//int dichotomizing_search(int arr[], int k)//形参arr看上去是数组，本质是指针变量
	int right = sz-1;
	//int right = 0;
	int left = 0;
	int mid = 0;
	//right = sizeof(arr) / sizeof(arr[0]);
	while (left <= right)
	{
		//mid = (left + right) / 2;
		mid = left + (right - left) / 2;
		//mid还是最好用上面表达式进行定义，防止left或right太大超过整型变量能表示的最大值，产生的溢出
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;//找到就返回mid
		}
	}
	return -1;//查找不到就返回-1
}
//int main(void)
//{
//	//写一个函数判断一年是不是闰年
//	//打印1000-2000年之间的闰年
//	//闰年判断的规则：
//	//普通闰年：能被4整除且不能被100整除
//	//世纪闰年：能被400整除
//	int year = 0;
//	int count = 0;
//	for(year=1000;year<=2000;year++)
//	{
//	//判断是不是闰年
//		if (is_leap_year(year))
//		{
//			count++;
//			printf("%d ", year);
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//int main(void)
//{
//	//写一个函数，实现一个整型有序数组的二分查找
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 10;
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	ret=dichotomizing_search(arr, k,sz);
//	//while (left <= right)
//	//{
//	//	mid = (left + right) / 2;
//	//	if (arr[mid] < k)
//	//	{
//	//		left += 1;
//	//	}
//	//	if (arr[mid] > k)
//	//	{
//	//		right -= 1;
//	//	}
//	//	if (arr[mid] == k)
//	//	{
//	//		printf("找到了，其下标为%d\n", mid);
//	//		break;
//	//	}
//	//}
//	//if (left > right)
//	//{
//	//	printf("找不到\n");
//	//}
//	//找到了返回下标
//	//找不到返回-1，此时不能返回0，因为下标也可以为0 ，会产生冲突
//	//找不到返回值可以是除下标外的任意值
//	//形参和实参的名字可以相同，也可以不同
//	//数组传参，直接用数组名，不需要加方括号，但形参定义需要加上方括号
//	//数组名就代表了该数组的地址。整个数组是一块连续的内存单元，数组名所代表的地址为第0个元素的地址
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，其下标为%d\n", ret);
//
//	}
//	return 0;
//}

////bool类型，C99才引入
//bool is_prime(int n)
//{
//	int j = 0;
//	//素数：除了1和它本身以外不再由其他因数的自然数
//	for (j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//		{
//			return false;
//		}
//	}
//	return true;
//}
//int main(void)
//{
//	//int i = 0;
//	//for (i = 100; i <= 200; i++)
//	//{
//	//	if (is_prime(i))
//	//	{
//	//		printf("%d ", i);
//	//	}
//	//}
//	
//	//bool存储大小
//	//printf("%zu\n", sizeof(bool));
//	return 0;
//}

//void num_add1(int* p_num)
//{
//	*p_num += 1;
//}
////每次调用函数使num增加1；
////在这里面num改变了，得把地址传到调用的函数里面
//int main(void)
//{
//	int num = 0;
//	num_add1(&num);
//	num_add1(&num);
//	num_add1(&num);
//	num_add1(&num);
//	num_add1(&num);
//	printf("%d ", num);
//	return 0;
//}

//int main(void)
//{
//	//链式访问：将一个函数返回值作为其他函数的参数（前提是得有返回值）
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}
//在链式访问中，这种代码书写方法是极其不规范的
//函数不写返回值的时候，默认返回类型是int
//不建议用下面这种方法去写，这样写是非常糟糕的
//Add(int x, int y)
//{
//	return x + y;
//}
//int main(void)
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}

//明确的说明，main函数是不需要参数的
//但实际上，main函数是有参数的
int main(void)
{

	return 0;
}
//main函数有三个参数
//所以int main()的括号里面可以不加void
int main(int argc,char* argv[],char* envp[])
{
	return 0;
}