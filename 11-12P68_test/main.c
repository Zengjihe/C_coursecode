#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>

//int main()
//{
//	//算术操作符
//	int a = 7;
//	int b = 2;
//	int c = a / b;
//	int d = a % b;
//	printf("c = %d\n", c);//3
//	printf("d = %d\n", d);//1
//	return 0;
//}

//int main()
//{
//	//移动操作符
//	//int a = 7;
//	int a = -7;
//	//左移
//	//int b = a << 1;//C语言存储的是补码
//	//printf("a = %d\n", a);//a始终保持不变
//	//printf("b = %d\n", b);//14,左移=原数×2
//	//右移
//	int b = a >> 1;//visual studio采用的是算术位移，保留原数的正负
//	printf("a = %d\n", a);
//	printf("b = %d\n", b);//3;4
//
//	return 0;
//}

//int main()
//{
//	//位操作符 &(按位与) |(按位或) ^(按位异或)  只适用于整型
//	int a = 7;
//	int b = -2;
//	//int c = a & b;//一般情况下都是正的，除非两个数二进制对应的位都是负数才为负
//	//int c = a | b;//一般情况下都是负的，除非两个数二进制对应的位都是正数才为正
//	int c = a ^ b;//两个数二进制对应的位相等则返回0，相异则返回1
//	printf("c = %d\n", c);//6；-1; -7
//	return 0;
//}

//int main()
//{
//	//交换两个数的值
//	int a = 3;
//	int b = 5;
//	printf("a = %d  b = %d\n", a, b);
//	//这种方法是存在问题的
//	//当a、b两个数非常大的时候
//	//他们的和就很有可能会溢出
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a = %d  b = %d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("交换前：a = %d  b = %d\n", a, b);
//	//异或满足交换律，即3^5^3=3^3^5
//	a = a ^ b;//3^5
//	b = a ^ b;//3^5^5->3^0->3
//	a = a ^ b;//3^5^3->5^0->5
//	printf("交换后：a = %d  b = %d\n", a, b);
//	return 0;
//}

////编写代码实现：求一个整数存储在内存中的二进制中1的个数
//int main()
//{
//	int a = 0;
//	int i = 0;
//	unsigned int b = 0;
//	int c = 0;
//	int count = 0;
//	scanf("%d", &a);
//	for (i = 0; i < 32; i++)//这里2^31是符号位了，就会使a为负数，得到错误结果
//	{
//		b = (unsigned int)pow((int)2, (int)i);
//		c = a ^ b;
//		if (c < a)
//		{
//			count++;
//		}
//	}
//	printf("%u\n", b);
//	printf("%d\n", count);
//	return 0;
//}
////编写代码实现：求一个整数存储在内存中的二进制中1的个数
////求补码的二进制中1的个数
//int main()
//{
//	int a = 0;
//	int i = 0;
//	int b = 0;
//	int c = 0;
//	int countOnes = 0;
//	int countZeros = 0;
//	scanf("%d", &a);
//	for (i = 0; i < 31; i++)
//	{
//		b = (int)pow((int)2, (int)i);
//		c = a ^ b;
//		if (c < a)
//		{
//			countOnes++;
//		}
//	}
//	if (a < 0)
//	{
//		countOnes++;
//	}
//	countZeros = 32 - countOnes;
//	printf("%d\n", b);
//	printf("%d\n", countOnes);
//	printf("%d\n", countZeros);
//	return 0;
//}
//方法二
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	int count = 0;
//	int c = 0;
//	for (i = 0; i < 32; i++)
//	{
//		c = a & 1;//逻辑与
//		if (c == 1)
//		{
//			count++;
//		}
//		a = a >> 1;//右移位
//
//	}
//	printf("%d\n", count);
//	return 0;
//}
//方法三
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int c = 0;
//	int i = 0;
//	int b = -2;//负数是需要计算的
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		c = a | b;
//		if (c == -1)
//		{
//			count++;
//		}
//		a = a >> 1;
//	}
//	printf("%d\n", c);
//	printf("%d\n", count);
//	return 0;
//}

//赋值操作符
//赋值是一个等号，而==是判断相等
//int main()
//{
//	int a = 3;//这是初始化
//	int a = 0;
//	a = 5;//这才是赋值
//	return 0;
//}

////复合赋值操作符
////+= -= *= /= ^= &= |= %= >>= <<= 
//int main()
//{
//	int a = 3;
//	a = a + 5;
//	a += 5;//这种写法与上面的写法是等价的
//	return 0;
//}

//单目操作符-只有一个操作数
//双目操作符-有两个操作数

//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);
//	printf("%zd\n", sizeof(a));
//	return 0;
//}

//int main()
//{
//	//~按二进制按位取反，所有位取反，包括符号位
//	int a = 0;
//	printf("%d\n", ~a);
//	return 0;
//}

//int main()
//{
//	int a = 13;
//	//00000000000000000000000000001101
//	// 想把13二进制为右边第二位的0变成1
//	//00000000000000000000000000000010
//	a |= (1 << 1);
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 13;
//	//        00000000000000000000000000001101
//	//想把右边第四位1变成0
//	//按位与->11111111111111111111111111110111
//	//11111111111111111111111111110111是00000000000000000000000000001000的取反
//	a &= (~(1 << 3));//这里是左移三位，不是四位
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	int count = 0;
//	int b = 0;
//	for (i = 0; i < 31; i++)
//	{
//		b = a & (1 << i);
//		if (b == (1 << i))
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	//*间接引用操作符（解引用操作符）
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	//printf("%d\n", *p);
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//
//	int a = 0;
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);
//	//printf("%d", sizeof int);//会报错
//
//	return 0;
//}
////sizeof是操作符，对于求变量所占空间可以不加括号，但对于求类型所占空间需要加括号
////strlen()是函数，用来求字符串长度，注意这两者的区别

//int main()
//{
//	int a = 0;
//	int b = 1;
//	int c = 2;
//	int d = 3;
//	int i = 0;
//	i = a++ && ++b && d++;//a先用后加，a=0，所以++b d++不需要在计算
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int b = 1;
//	int c = 2;
//	int d = 3;
//	int i = 0;
//	i = a++ || ++b || d++;//a先用后加，a=1，所以++b d++不需要在计算
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 1;
//	int c = 2;
//	int d = 3;
//	int i = 0;
//	i = a++ || ++b || d++;//b先加后用，a=0，所以++b需要运算，又因为++b为真，故d++不需要再计算
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}
//&& 左边为假，右边就不计算了
//|| 左边为真，右边就不计算了，小心使用

//条件操作符（三目操作符）
//表达式1？表达式2：表达式3
//int main()
//{
//	int a = 3;
//	int b = 0;
//	
//	if (a > 5)
//	{
//		b = 3;
//	}
//	else
//	{
//		b = -3;
//	}
//
//	//(a > 5) ? (b = 3) : (b = -3);//表达式需要用括号括起来
//	//b = (a > 5) ? 3 : -3;
//	printf("%d\n", b);
//}

//逗号表达式，逗号表达式前面表达式都会算，但只取最后一个表达式结果
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, b = a + 1);
//	printf("c = %d\n", c);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	//arr[7]-->*(arr+7)-->7[arr]-->*(7+arr)
//	//arr是首元素地址
//	//arr+7就是跳过7个元素，指向了第8个元素
//	//*(arr+7)就是第8个元素
//	arr[7] = 8;//这里[]是下标引用操作符
//	7[arr] = 9;//但这种写法是不可取的
//	//3 + 5
//	//5 + 3
//	return 0;
//}

////函数调用操作符
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = Add(a, b);//()就是函数调用操作符，操作数:Add,a,b
//	printf("%d\n", c);
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//void SetStu(struct Stu* ps)
//{
	//ss.age = 20;
	////ss.name = "zenghui";这种做法是不行的
	////ss.name表示数组首元素地址，不能够直接赋值
	//strcpy(ss.name, "曾辉");
	//ss.score = 100.00;

//	//注意形参的值是需要改变的
//	//strcpy((*ps).name, "曾辉");
//	//(*ps).age = 20;
//	//(*ps).score = 100.00;
//	strcpy(ps->name, "曾辉");//ps->age相当于(*ps).age,这两者是等价的
//	ps->age = 20;
//	ps->score = 100.00;
//}
//void PrintStu(struct Stu ss)//这里也可以给形参传地址，这样节省空间一些，就不需要重复拷贝实参的值
//{
//	printf("%s %d %.2f\n", ss.name, ss.age, ss.score);
//}
//int main()
//{
//	struct Stu s = { 0 };
//	SetStu(&s);
//	PrintStu(s);
//	return 0;
//}