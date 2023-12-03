#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>//主函数中使用了Sleep()函数，故需调用这个头文件
#include <stdlib.h>//主函数中是用来system（）函数，故需调用这个头文件
#include <string.h>//这个头文件和strcmp函数有关

int main(void)
{
	////编写代码，演示多个字符从两端移动，向中间汇聚
	//char arr1[] = { "Welcome to bit!!!" };
	//char arr2[] = { "#################" };
	//int left = 0;
	//int right = 0;
	//right = strlen(arr1)-1;//strlen计算到\0之前的字符个数
	////如果使用这种方法就需要减2，因为sizeof把\0也算进去了
	////right = sizeof(arr1) / sizeof(arr1[0]) - 2;
	//while(left<=right)
	//{
	//	arr2[left] = arr1[left];
	//	arr2[right] = arr1[right];
	//	printf("%s\n", arr2);//记得输出
	//	Sleep(1000);//延迟1000ms，也就是1s
	//	system("cls");//system是一个库函数，可以执行系统命令，清屏
	//	left++;
	//	right--;
	//}
	//printf("%s\n", arr2);
	//return 0;

	//编写代码实现，模拟用户登录情景，并且只能登录三次，（只允许输入三次密码，如果密码正确则提示登录成功，如果三次输入均错误，则退出程序。
	//比较两个字符串是否相等，不能使用==，而应该使用一个库函数，strcmp(##,##)=0即返回值为0，便是两个字符相等；
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入登录密码:");
		scanf("%s", password);//注意这里的password不需要取地址符号，因为数组本身就是取地址符号；
		if (strcmp(password,"abcde")==0)//strcmp是string_compare缩写
		{
			printf("登录成功\n");
			break;
		}
		else
		{
			printf("密码错误\n");
		}
	}
	if (3 == i)
	{
		printf("登陆失败，退出程序");
	}
	return 0;

}//这次课学习了三个头文件：windows.h;stdlib.h;string.h注意巩固