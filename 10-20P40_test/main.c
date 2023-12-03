#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void swap(int* px, int* py)
{
	int z = 0;
	z = *px;
	*px = *py;
	*py = z;
}

int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}

int is_prime(int n)
{
	int j = 0;
	for (j = 2; j <= sqrt(n); j++)
		//直接计算i的开平方，优化计算
	{
		if (n % j == 0)
		{
			return 0;//return 0功能要比break功能强，只要满足条件就结束函数运行
		}
	}
	return 1;
}
int main(void)
{
	//int a = 0;
	//int b = 0;
	//scanf("%d %d", &a, &b);
	//printf("交换前：a=%d,b=%d\n", a, b);
	//swap(&a, &b);
	//printf("交换后：a=%d,b=%d\n", a, b);
	//return 0;

	//int a = 0;
	//int b = 0;
	//scanf("%d %d", &a, &b);
	//int c = 0;
	//c=Add(a, b);//区别于传地址，这里不需要
	//printf("%d\n", c);
	//return 0;
	//对于以上两种类型的函数，总结一下，如果要改变形参变量则需要传地址，不过不需要则不需要传地址
	//即区分好传值函数和传址函数
	
	//写一个函数可以判断一个数是不是素数
	//自己写的
	//int i = 0;
	//int j = 0;
	//int ret = 0;
	//int k = 0;
	//for(i = 1; i <= 30; i++)
	//{
	//	if (1 == k||2==k)
	//	{
	//		printf("%d ", i-1);
	//	}
	//	k = 0;
	//	for (j = 1; j < =i; j++)
	//	{
	//		ret = i % j;
	//		if (0 == ret)
	//		{
	//			k++;
	//		}
	//	}
	//}
	//return 0;
	//老师写的
	//int i = 0;
	//int j = 0;
	//for (i = 100; i <= 200; i++)
	//{
	//	int flag = 1;
	//	for (j = 2; j <= i - 1; j++)
	//	{
	//		if (i %j == 0)
	//		{
	//			flag = 0;
	//			break;
	//		}
	//	}
	//	if (flag == 1)
	//	{
	//		printf("%d ", i);
	//	}
	//}
	//return 0;
	//老师优化写法
	//int i = 0;
	//int j = 0;
	//for (i = 101; i <= 200; i+=2)
	////直接从奇数开始，加快计算速度
	//{
	//	int flag = 1;
	//	for (j = 2; j <= sqrt(i); j++)
	//	//直接计算i的开平方，优化计算
	//	{
	//		if (i % j == 0)
	//		{
	//			flag = 0;
	//			break;//相比于自己的算法，优化了很多
	//			//不要在算得的素数个数一个一个加起来了，一旦不满足条件就直接跳出来
	//			//不用重复计算
	//		}
	//	}
	//	if (flag == 1)
	//	{
	//		printf("%d ", i);
	//	}
	//}
	//return 0;

	//利用所学的函数知识判断一个数是不是素数
	int i = 0;
	int count = 0;
	for (i = 101; i <= 200; i+=2)
	//直接从奇数开始，加快计算速度
	{
		if (is_prime(i))
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\ncount=%d\n", count);
	return 0;
}