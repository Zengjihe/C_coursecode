#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Add.h"
//导入Add静态库，Add.lib都是二进制码
//当买入别人写的Add函数后
//只需要把Add.h和Add.lib复制到当前工程
//声明一下就可以正常使用了
//这样可以保护自己的源代码，维护知识产权
#pragma comment(lib,"Add.lib")

//函数的声明和定义
// 一般情况下，如果直接把函数放在主函数后面
// 虽然可能能够运行但是，编译器会报错，
// 一般情况都会把函数放在主函数前面
//但也可以强制把函数定义在主函数后面
// 但要在前面给一个声明
//例如int Add(int x,int y);这样编译器就不会出现警告
//int Add(int x, int y);
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}
//int Add(int x, int y)
//{
//	return 0;
//}