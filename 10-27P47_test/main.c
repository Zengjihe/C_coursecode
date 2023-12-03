#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
//int main()
//{
//	char a = 'ade';
//	printf("%c\n", a);
//	//'ade'占了3个字节，但char类型只能读取一个字节
//	//所以只能输出'e'
//	printf("%zu\n", sizeof(bool));//bool占一个字节
//	//%zu输出size_t型，size_t在库中定义为unsigned int。
//	//是一个无符号整型
//	return 0;
//}

////求n的阶乘
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int fac = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		fac *= i;
//	}
//	printf("%d\n", fac);
//	return 0;
//}
//使用函数递归的方式计算n的阶乘
//int fac(int n)
//{
//	if (n == 1)//注意这里犯错了，一个等号是赋值语句
//		//这里得使用两个等号，表示判断
//	{
//		return 1;
//	}
//	else
//	{
//		return n*fac(n - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}

//函数迭代实现n的阶乘-非递归
//int fac(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}

//求斐波那契数列
//1 1 2 3 5 8 13 21 34 55……
//前两个数之和等于下一个数
//int count = 0;//这里调用了一个全局变量
////全局变量必须放在被调用函数的前面
//int Fib(int n)
////这个代码的效率很低，不能使用这种方法
////例如求第50个，会很慢
//{
//	if (n == 3)
//	{
//		count++;
//		//计算Fib（3）被计算的次数
//		//由此得出，这里使用递归函数的效率是及其低下的
//	}
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n-1) + Fib(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret=Fib(n);
//	printf("ret=%d\n", ret);
//	printf("count=%d\n", count);
//
//	return 0;
//}

//上面的斐波那契数列最好还是用函数迭代来实现
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}

//总结：
//我们发现fib函数在调用的过程中很多计算其实一直在重复
//并且前面在调试n的阶乘函数的时候，如果你的参数比较大
//那就回报错：stack overflow（栈溢出）这样的信息
//系统分配给程序的占空间是有限的，但是如果出现了死循环
//或者（死递归），这样有可能导致一直开辟栈空间
//最终产生栈空间耗尽的情况，这样的现象我们称为栈溢出
//解决办法：
//1.将递归改写成非递归，就和斐波那契数列数列一样
//当递归不合理时，我们就可以考虑把递归改为非递归
//2.使用static对象替代nonstatic局部对象。
//在递归函数设计中，可以使用static对象替代nonstatic局部对象
//（即栈对象），这不仅可以减少每次递归调用和返回时产生和释放
//nonstatic对象的开销，而且static对象还可以
//保存递归调用的中间状态，并且可为各个调用层所访问

//函数递归的几个经典的问题（自主研究，不断练习思考）
//汉诺塔问题（可以看看B站：比特大博哥）有关汉诺塔的问题
//青蛙跳台阶问题
