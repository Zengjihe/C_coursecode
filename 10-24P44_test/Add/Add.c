#define _CRT_SECURE_NO_WARNINGS
//函数定义
//这样就把Add函数作为一个模块拿了出来
//别人使用你的函数，只要声明这个函数的头文件就可以了
//注意自己定义的函数的头文件用双引号声明
int Add(int x, int y)
{
	return x + y;
}