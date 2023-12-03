#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>//srand、system函数需要
#include <time.h>//time函数需要

void menu()
{
	printf("********************************\n");
	printf("*************1.start************\n");
	printf("*************2.exit*************\n");
}

int get_max(int x, int y)
{
	return (x > y ? x : y);
}

//自定义的函数的变量叫做形式参数
void Swap(int x, int y)
{
	int z = 0;
	z = x;
	x = y;
	y = z;
}
void swap(int* px, int* py)
{
	int z = 0;
	z = *px;
	*px = *py;
	*py = z;
}
void game()
{
	int guess = 0;
	//srand(100);//2.但这时生成的随机数都是一样的，因为srand函数里的数值没有变化，所以要想rand生成随机数，srand函数里的也得生成不同的随机数。
	//联想到时间戳，时间可以转换为时间戳，某一个时间点相对于计算机起始时间的一个差值，它的单位是s秒，只要时间在变，时间戳就在变
	//srand((unsigned int)time(NULL));
	//3.如何生成时间戳，可以使用time_t time（time_t*timer）函数，函数里面是一个指针，可以不用，往里面传一个NULL控制即函数获取系统时间，返回值为time_t,根据定义它是一个整型int，但srand函数里是unsigned int型，所以需要将int强制转换为unsigned int
	int ret = rand()%100+1;//1.生成随机数,rand（）为生成随机数的函数,这个函数的范围为0-32767（转定义可查看），但如果只有这样一个函数的话，每一次退出游戏重新开始，获得的随机数与上一次游戏的随机数是一致的
	//为了避免这种情况，还需要一个随机数的生成器，即调用srand（）函数
	//0-32767对100取余再+1,就可以得到0-100的随机数
	//printf("%d\n", ret);
	while (1)
	{
		printf("请猜数字:>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("猜对了\n");
			break;
		}
	}
}//值得注意的是这种情况下，有时生成的随机数是相同的，也还是有些问题，这是因为srand函数不应该放在循环体里，因为每一次循环函数都会重新设置一次起点，这个函数只要在主函数设置一次就可以了

int main(void)
{
	////猜数字游戏，电脑产生一个随机数（1-100）
	////猜数字（猜大了，猜小了）
	////猜对了就结束
	//int input = 0;
	//srand((unsigned int)time(NULL));//int *p=NULL；相当于赋值初始化，NULL在定义上就相当于0
	//do
	//{
	//	menu();//设置游戏界面菜单
	//	printf("请选择1\\0:>");
	//	scanf("%d", &input);
	//	//if(1==input)
	//	//{
	//	//	printf("随机数\n");
	//	//}
	//	//if (0 == input)
	//	//{
	//	//	printf("退出游戏\n");
	//	//}
	//	//else
	//	//{
	//	//	printf("请重新选择\n");
	//	//}
	//	//上面使用的是if-else语句，老师用的是switch语句
	//	switch (input)
	//	{
	//	case 1:
	//			game();//猜数字的整个逻辑
	//			break;
	//	case 0:
	//			printf("退出游戏\n");
	//			break;
	//	default:
	//			printf("请重新选择\n");
	//			break;
	//	}
	//} while (input);
	//return 0;

	////关机程序
	////电脑执行将在60s后关机，如果输入“我是猪”则取消关机命令
	//char input[20] = { 0 };
	//system("shutdown -s -t 60");
	//again://注意这后面是英文标点的冒号
	//printf("请注意，您的电脑将在60s后关机，如果输入：我是猪，就取消关机\n");
	//scanf("%s", & input);//字符型数组可以采用这种输入方式
	//if (strcmp(input, "我是猪") == 0)
	//{
	//	system("shutdown -a");
	//}
	//else
	//{
	//	goto again;
	//}
	//return 0;
	
//	//同时也可以通过循环来替代goto语句
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
////again://注意这后面是英文标点的冒号
//	while(1)
//	{
//		printf("请注意，您的电脑将在60s后关机，如果输入：我是猪，就取消关机\n");
//		scanf("%s", &input);//字符型数组可以采用这种输入方式
//		if (strcmp(input, "我是猪") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;

	////学会去查文档，看函数的具体定义类型
	////可以根据函数名，猜测函数作用 
	//以函数strcpy为例
	//char arr1[20] = { 0 };
	//char arr2[] = { "Hello world!" };
	//strcpy(arr1, arr2);
	//printf("%s\n", arr1);
	//return 0;
	//以函数memset为例
	//char arr[20] = { "Hello world!" };
	////memset(arr, 'x', 5);
	//memset(arr+6, 'x', 3);
	//printf("%s\n", arr);
	//return 0;
	//学会使用库函数，记得调用库函数头文件

	//自定义函数
	//自定义函数由程序员自己创建，和库函数格式一样类似
	//包括函数名、函数返回值类型、参数，最重要的是函数体
	
	//写一个函数求最大值
	//int a = 0;
	//int b = 0;
	//scanf("%d %d", &a, &b);
	//int max = get_max(a, b);
	//printf("%d\n", max);

	//交换两个整型变量
	//当实参传递给形参的时候，形参是实参的一份临时拷贝
	//对形参的修改不会影响实参
	//int a = 0;
	//int b = 0;
	//scanf("%d %d", &a, &b);
	//printf("交换之前a=%d,b=%d\n", a, b);
	////主函数a，b叫实参
	//Swap(a, b);
	//printf("交换之后a=%d,b=%d\n", a, b);
	//return 0;
	//上面两次a，b输出的结果并没有达到实现交换数值的目的
	//原因是a，b两个实参传到自定义函数的两个形参中地址是改变了的
	//即对形参的修改不会影响到实参，故可做如下修正
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	printf("交换之前a=%d,b=%d\n", a, b);
	//把a，b地址传递给指针，此时实参和形参地址是一样的
	swap(&a, &b);
	printf("交换之后a=%d,b=%d\n", a, b);
	return 0;
}
