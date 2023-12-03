#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

////题目一
////题目名称
////求最大值
////题目内容：
////求10个整数中最大值
//int main()
//{
//	int arr[10]={0};
// //特别注意：
// //int arr[]={0};//根据初始化元素个数判断数组个数
// //不能让编译器去猜
// //等效于arr[1]={0};不是想当然的自动给10个元素大小
//	//scanf("d",arr);//这种输入方式是不对的
//	int i = 0;
//	for(i = 0;i <= 10;i++)
//	{
//		scanf("d",&arr[i]);
//	}//得采用这种方法进行实现
//	int arr[10] = { 23,43,242,567,14,45,645,234,6587,21 };
//	int max = arr[0];//先假设第一个元素最大，这样负数情况也没问题
//	//如果刚开始就把max赋值为0,
//	//万一数组里面的元素都是负数呢
//	//那不就是max最大了吗
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}

//题目二
//题目名称
//乘法口诀表
//题目内容
//在屏幕上输出9*9乘法口诀表
//int main()
//{
//	int j = 0;
//	int i = 0;
//	for (j = 1; j <= 9; j++)
//	{
//		for (i = 1; i <= j; i++)
//		{
//			//printf("%d * %d= %d\t  ", i, j, i * j);
//			//这里也可以用水平制表符\t进行对其
//			printf("%d * %d= %-2d  ", i, j,i*j);
//			//%2d表示输出格式为两位
//			//不足两位空格不起
//			//%-2d表示左对齐，即空格在一位数字右边
//			//而%2d则是右对齐，即空格在一位数字左边
//		}
//		//if (i > j)
//		//{
//		//	printf("\n");
//		//}
//		//上面这个if条件判断语句可以不用
//		printf("\n");
//	}
//	return 0;
//}

////题目三
////题目名称
////猜数字游戏
////题目内容：
////完成上课的猜数字游戏
//#include <stdlib.h>
//void menu(void)
//{
//	printf("**********************\n");
//	printf("******1.continue******\n");
//	printf("********0.exit********\n");
//}
//void game(void)
//{
//	int guess = 0;
//	int ret=rand()%100+1;//rand_max等于32767
//	//这种情况下，每一次重新开始游戏
//	//产生的随机数都是一样的
//	//如果你第二次运行的时候输出结果仍和第一次一样。
//	// 这与srand()函数有关
//	//srand()用来设置rand()产生随机数时的随机数种子。
//	//在调用rand()函数产生随机数前
//	// 必须先利用srand()设好随机数种子（seed）
//	//果未设随机数种子
//	//  rand()在调用时会自动设随机数种子为1
//	//这个例子就是因为没有设置随机数种子
//	//每次随机数种子都自动设成相同值
//	//进而导致rand（）所产生的随机数值都一样
//	//所以这里的随机还不是真正意义上的随机
//	//还需要调用stdlib.h头文件里面的srand函数
//	//即设置随机数种子
//	printf("ret=%d\n", ret);
//	system("shutdown -s -t 60");
//	//注意system的用法
//	//括号里面是字符串形式，用空格隔开
//	do
//	{
//		printf("请输入猜数字:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜！猜对了\n");
//			system("shutdown -a");
//		}
//	} while (ret != guess);
//}
//#include <time.h>
//int main()
//{
//	srand((unsigned int)time(NULL));//一般调用time函数设置随机数种子
//	//time函数里面的参数可以设置为控制，一样会返回一个时间值
//	//但srand函数的参数类型数unsigned int
//	//所以需要把time的返回值强制转化为无符号整型
//	//强制转化应该是这种格式（unsigned int）+参数
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择1/0:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case(1):
//			game();
//			break;//这里的break只跳出了switch语句
//		case(0):
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("请重新选择\n");
//			break;
//		}
//		//if (0 == input)
//		//{
//		//	break;
//		//}
//	} while (input);//既然退出游戏是输入0
//	//那么这里就直接用input来判断
//	//就不需要在循环体里面在跳一次了
//	return 0;
//}

////题目四
////题目名称
////二分查找
////题目内容：
////编写代码在一个整型有序数组中查找具体的某个数
////要求：找到了就打印数字所在的下标，找不到输出：找不到
//int mid = 0;
//void bin_search(int* n, int k,int sz)
//{
//	int left = 0;
//	int right = sz;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (n[mid] < k)
//		{
//			left = mid+1;
//		}
//		else if (n[mid] > k)//这里粗心了，少打了一个else
//		{
//			right = mid-1;
//		}
//		else
//		{
//			printf("找到了，其下标为:> %d", mid);
//			break;
//		}
//	}
//	if(left>right)
//	{
//		printf("找不到");
//	}
//}
//int main()
//{
//	int k = 7;
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bin_search(arr,k, sz);
//	return 0;
//}

//题目五
//选择题
//题目内容:
//函数调用exsc（（v1,v2),(v3,v4),v5,v6);中
//实参的个数是多少个？
//函数调用里面传参可以传表达式
//在这个函数调用里面(v1,v2)是一个逗号表达式
//它得到的结果就是v2
//因此实参的个数是4

//题目六
//判读正误：
//函数设计应该追求高内聚低耦合
//函数应该尽量少使用全局变量
//函数的参数不宜过多
//设计函数时，尽量做到谁申请资源就有谁来释放

//题目七
//栈区：局部变量；形式参数；返回值；特点：进入创建，运行完后校徽
//堆区：动态内存分配（malloc；free；calloc；realloc）；
//静态区：静态变量；全局变量；

////题目八
////题目名称
////交换两个整数
////题目内容：
////实现一个函数来交换两个整数的内容。
//void swap(int* a, int* b)
//{
//	int temp = 0;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	swap(&a, &b);
//	printf("%d %d\n", a, b);
//	return 0;
//}

////题目九
////题目内容：
////实现一个函数，打印乘法口诀表，
////口诀表的行数和列数自己指定
//void multi_table(int a, int b)
//{
//	int i = 0;
//	int j = 0;
//	int temp = b;
//	if (a < b)
//	{
//		printf("发生错误，行数小于列数！\n");
//		return 0;
//	}
//	for (i = 1; i <= a; i++)
//	{
//		if (b > i)
//		{
//			b = i;//此时b值已改变
//			//赋值一定要小心些，要瞻前顾后
//		}
//		for (j = 1; j <= b; j++)
//		{
//			printf("%-2d* %-2d = %-5d", j, i, j * i);
//		}
//		b = temp;
//		//前面将b保存在temp中
//		//就是为了在这里把b的值重新赋给b
//		printf("\n");
//	}
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	multi_table(a, b);
//	return 0;
//}

//题目十
//题目内容：
//以下方法是否能把函数处理结果的两个数据返回给主调函数
//1.return这两个数是不行的
//eg:
//int test(int x, int y)
//{
//	return x, y;
//}
//int main()
//{
//	int x = 1;
//	int y = 2;
//	int ret = test(x, y);
//	printf("%d\n", ret);
//	return 0;
//}
//2.形参用数组
//eg:
// void test(int arr[])
////这里的int arr[]=int* arr
//{
//	arr[0] = 3;//本质上arr[0]=*(arr+0)
//	arr[1] = 4;//本质上arr[1]=*(arr+1)
//}
//int main()
//{
//	int arr[2] = { 0 };
//	test(arr);
//	return 0;
//}
////3.形参用两个指针
////eg:
//void test(int* x, int* y)
//{
//	*x = 3;
//	*y = 4;
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	test(&x, &y);
//	printf("%d %d\n", x, y);
//	return 0;
//}
////4.用两个全局变量
////eg:
//int x;
//int y;
//void test(void)
//{
//	x = 3;
//	y = 4;
//	return 0;
//}
//int main()
//{
//	test();
//	printf("%d %d\n", x, y);
//	return 0;
//}

////题目十一
////题目名称：
////函数判断闰年
////题目内容：
////实现一个函数，判断一个数是不是闰年。
////利用上面实现的函数打印1000到2000之间的闰年
//int is_leapyear(int year)
//{
//	if ((year % 4) == 0 && (year % 100) != 0 || (year % 400) == 0)
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	for(year = 1000; year <=2000; year++)
//	{ 
//		if (is_leapyear(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}

////题目十二
////题目名称
////函数判断素数
////题目内容
////实现函数判断一个数是不是素数
////利用上面实现的函数打印100-200之间的素数
//int is_prime(int i)
//{
//	int k = 0;
//	for (k = 2; k < i; k++)
//	{
//		if (i % k == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

