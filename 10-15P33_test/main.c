#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//int i = 0;
	//for (i = 1; i <= 10; i++)//三部分分别为：初始化；判断条件；调整部分
	//{
	//	printf("%d ", i);
	//	printf("HEHE\n");
	//}//for循环运用的是最普遍的，其执行顺序为：初始化-判断-循环体-调整
	//return 0;

	//int i = 0;
	//for (i = 1; i <= 10; i++)//三部分分别为：初始化；判断条件；调整部分
	//{
	//	if (i == 5)
	//	{
	//		break;//只能跳出一层循环
	//	}
	//	printf("%d ", i);
	//}//for循环运用的是最普遍的，其执行顺序为：初始化-判断-循环体-调整
	//return 0;

	//int i = 0;
	//for (i = 1; i <= 10; i++)//三部分分别为：初始化；判断条件；调整部分
	//{
	//	if (i == 5)
	//	{
	//		continue;//注意这里continue和while中的continue不同的是：while中的是跳过了continue后面的语句（包括调整部分），而for循环中continue也是跳过了后面的语言，但没有跳过调整部分，是直接跳到了for循环中的调整部分
	//	}
	//	printf("%d ", i);
	//}//for循环运用的是最普遍的，其执行顺序为：初始化-判断-循环体-调整
	//return 0;

	//1.不可再for循环体内修改循环变量，防止for循环失去控制；
	//2.建议for语句的循环控制变量的取值采用“前闭后开区间”写法。

	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int i = 0;
	//for (i = 0; i < 10; i++)//最好写成这种形式，代码的可读性更好，表明一共循环了10次，即前闭后开区间写法，但不要死板地去写
	////for (i = 0; i <= 9; i++)
	//{
	//	printf("%d ", arr[i]);
	//}
	//return 0;

	//for循环的判断部分省略意味着判断条件恒成立，不要随便省略
	/*for (;;)
	{
		printf("haha\n");
			
	}
	return 0;*/

	////while语句只要判断条件为真，就会一直循环
	//while (1)
	//{
	//	printf("haha\n");
	//}
	//return 0;

	//int i = 0;
	//int j = 0;
	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 3; j++)
	//	{
	//		printf("hehe\n");
	//	}
	//}
	//return 0;//打印了9次hehe
	////如果省略了i = 0和j = 0
	//int i = 0;
	//int j = 0;
	//for (; i < 3; i++)
	//{
	//	for (; j < 3; j++)
	//	{
	//		printf("hehe\n");
	//	}

	//}
	//return 0;//此次只打印了3个hehe
	////所以不要随意省略for循环中的三个要素

	//for (int i = 0; i < 10; i++)//可以使用这种写法，但有要求：1.C99语法才支持了这种写法；2.C++中支持这种写法
	//{
	//	printf("hehe\n");
	//}
	//return 0;

	int i = 0;
	int k = 0;
	for(i=0,k=0;k=0;i++,k++)
		k++;//这里循环执行了0次，注意看for语句里面的判断条件，是赋值，而不是判断等于，赋值为0，判断为假，直接跳过
	return 0;
}
