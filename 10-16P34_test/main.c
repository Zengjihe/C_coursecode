#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//int i = 1;
	//do
	//{
	//	if (i == 5)
	//	{
	//		continue;//注意continue会跳过后面的两条语句，打印完1234后会陷入5的死循环
	//	}
	//	printf("%d ", i);
	//	i++;
	//}
	//while (i <= 10);
	//return 0;

	//int i = 1;
	//do//do while一般不经常使用，for>while>do while
	//{
	//	i++;
	//	if (i == 5)
	//	{
	//		continue;//注意和上一个循环区别
	//	}
	//	printf("%d ", i);
	//}
	//while (i <= 10);
	//return 0;

	//写代码：
	//办法（编程思维）+写代码（按照语法形式去写）
	//编程思维

	/*int i = 0;
	int n = 0;
	int ret = 1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		ret = ret * i;
	}
	printf("%d\n", ret);
	return 0;*/

	//int i = 0;
	//int j = 0;
	//int ret = 0;
	//int sum = 0;
	//for (i = 1; i <= 3; i++)
	//{
	//	for (j = 1,ret=1; j <= i; j++)//ret得初始化为1
	//	{
	//		ret = ret * j;
	//	}
	//	sum += ret;//这个语句不要放到上面循环体里面，会输出错误结果
	//}
	//printf("%d", sum);
	//return 0;

	//int n = 0;
	//int ret = 1;
	//int sum = 0;
	//for (n = 1; n <= 3; n++)
	//{
	//	ret = ret * n;
	//	sum += ret;
	//}
	//printf("%d", sum);
	//return 0;

	//int arr[] = { 1,2,3,4,5,6,7,8,9 };//这种查找方法效率太低
	//int i = 0;
	//int sz = 0;
	//int k = 17;
	//sz = sizeof(arr) / sizeof(arr[0]);
	//for (i = 0; i < sz; i++)
	//{
	//	if (k == arr[i])
	//	{
	//		printf("找到了，下标是：%d\n", i);
	//		break;
	//	}
	//}
	//if (i == sz)
	//{
	//	printf("找不到");
	//}

	//return 0;

	int arr[] = {1,2,3,4,5,6,7,8,9};//使用折半法-查找有序数组
	int k = 1;
	int left_i = 0;
	int right_i = 0;
	int mid_i = 0;
	int sz = 0;//数组个数
	sz = sizeof(arr) / sizeof(arr[0]);
	for (left_i = 0, right_i = sz-1; left_i<=right_i;)
	{
		//mid_i = (left_i + right_i)/2;//整数除法，但有可能会出错，当left_i和right_i的和大于整型变量能表示的最大值时，会发生益处
		//为了防止溢出，可采用如下方式,另外如果分别把这两个数除以2再相加是有问题的
		mid_i = left_i + (right_i - left_i) / 2;
		if (k < arr[mid_i])
		{
			right_i =mid_i-1;//折半查找法规则
		}
		else if(k>arr[mid_i])
		{
			left_i =mid_i+1;//折半查找法规则
		}
		else 
		{
			printf("找到了，其下标为：%d", mid_i);
			break;
		}
	}
	if (left_i>right_i)
	{
		printf("找不到了");
	}
	return 0;

}