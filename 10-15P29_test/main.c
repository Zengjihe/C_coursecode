#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	////EOF(-1);//end of file或者是遇到错误时，返回EOF
	//int ch = getchar();//getchar()返回类型是整型,一方面又是因为EOF返回值是-1
	//printf("%c\n", ch);
	//putchar();
	//return 0;

	//int ch = 0;
	//while ((ch=getchar()) != EOF)//注意这里ch=getchar()要用括号，不然会有错误
	//{
	//	putchar(ch);
	//}
	//return 0;//代码运行后会自动换行，譬如a后敲回车会自动换行，getchar（）函数不是直接从键盘获取，其中会有一个输入缓冲区，需要按回车才能把从键盘输入的值运到缓冲区，同时回车的\n也会到缓冲区中，再由getchar读取，即实现换行的效果

	//当看到无法打开……进行写入时，原因是你已经运行了一个程序了，关闭了就好了

	//char password[20] = { 0 };
	//printf("请输入密码:>");
	//scanf("%s", &password);
	//printf("请确认您的密码(Y/N):>");
	////getchar();//这里的getchar只起到去除输入缓冲器里的\n的作用
	//int ch=0;
	//while ((ch = getchar()) != '\n')
	//{
	//	;
	//}//如果只简单使用getchar（）函数来消除\n的影响，还是会有问题的，譬如当输入的字符串为lagh shl时，scanf（）函数会在空格时停止，后面剩下的 shl部分就需要使用getchar（）函数一个一个去读取消除，十分麻烦，所以可以调用循环函数消除其影响
	//int ret = getchar();
	//if ('Y' == ret)
	//{
	//	printf("YES");
	//}
	//else
	//{
	//	printf("NO");
	//}
	//return 0;

	//int ch = '\n';
	//while ((ch = getchar()) != EOF)
	//{
	//	if (ch < '0' || ch>'9')
	//	{
	//		if ('\n' == ch)
	//		{
	//			putchar(ch);//当输入缓冲器中含有\n时实现自动换行
	//		}
	//		continue;//表示后面的语句不执行，从头开始
	//	}
	//	putchar(ch);//只打印数字
	//}
	//return 0;


	return 0;
}